/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a0a414a

undefined4 FUN_4a0a414a(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  uVar5 = (uint)param_1[1];
  uVar4 = (uint)param_2[1];
  if (((uint)uVar1 == (uint)uVar2) && (*param_2 == *param_1)) {
    if (uVar5 + param_1[3] != uVar4) {
      if (uVar4 + param_2[3] != uVar5) goto LAB_4a0a417c;
      param_1[1] = param_2[1];
    }
    param_1[3] = param_1[3] + param_2[3];
  }
  else {
LAB_4a0a417c:
    if ((uVar4 != uVar5) || (param_2[3] != param_1[3])) {
      return 0;
    }
    uVar3 = *param_2;
    if ((uint)*param_1 + (uint)uVar2 != (uint)uVar3) {
      if ((uint)uVar3 + (uint)uVar1 != (uint)*param_1) {
        return 0;
      }
      *param_1 = uVar3;
      uVar1 = param_2[2];
    }
    param_1[2] = uVar2 + uVar1;
  }
  return 1;
}



// Address: 4a0a41ae

void FUN_4a0a41ae(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}



// Address: 4a0a41c0

void FUN_4a0a41c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  puVar1 = PTR_PTR_4a0a41ec;
  param_1[5] = param_6;
  param_1[6] = param_7;
  *param_1 = puVar1;
  return;
}



// Address: 4a0a41fc

void FUN_4a0a41fc(void)

{
  return;
}



// Address: 4a0a4200

void FUN_4a0a4200(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  
  uStack_c = param_2;
  FUN_4a1652c8(1,&uStack_c,*(undefined4 *)PTR_DAT_4a0a4214,param_4,param_1);
  return;
}



// Address: 4a0a4218

void FUN_4a0a4218(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = 0;
  param_2 = param_2 + DAT_4a0a423c;
  if (param_2 != 0) {
    if (param_2 == 0x20) {
      iVar1 = 1;
    }
    else {
      if (param_2 != 0x40) {
        return;
      }
      iVar1 = 2;
    }
  }
  *(undefined4 *)(iVar1 * 8 + param_1 + 4) = param_4;
  *(undefined4 *)(param_1 + iVar1 * 8) = param_3;
  return;
}



// Address: 4a0a4240

void FUN_4a0a4240(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_24 [4];
  
  FUN_4a1652c8(1,param_2,*(undefined4 *)PTR_DAT_4a0a42bc);
  FUN_4a1652c8(DAT_4a0a42c0,*param_2,*(undefined4 *)PTR_DAT_4a0a42c4);
  local_24[0] = *(undefined4 *)PTR_DAT_4a0a42c8;
  local_24[1] = *(undefined4 *)(PTR_DAT_4a0a42c8 + 4);
  local_24[2] = *(undefined4 *)(PTR_DAT_4a0a42c8 + 8);
  uVar3 = 0;
  iVar5 = DAT_4a0a42c0 + 1;
  do {
    iVar4 = uVar3 * 8;
    if (*(int *)(iVar4 + param_1 + 4) != 0) {
      if (*(int *)(param_1 + iVar4) == iVar5) {
        uVar1 = FUN_4a00ac1c();
        uVar2 = local_24[uVar3];
        iVar4 = iVar5;
      }
      else {
        uVar1 = FUN_4a00ac3c();
        uVar2 = local_24[uVar3];
        iVar4 = *(int *)(param_1 + iVar4);
      }
      FUN_4a1652d0(DAT_4a0a42c0,uVar2,iVar4,uVar1);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  return;
}



// Address: 4a0a42d4

undefined4 FUN_4a0a42d4(void)

{
  undefined4 in_r3;
  undefined4 local_8 [2];
  
  local_8[0] = in_r3;
  FUN_4a1652c8(1,local_8,*(undefined4 *)PTR_DAT_4a0a42ec);
  return local_8[0];
}



// Address: 4a0a42f0

void FUN_4a0a42f0(int *param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  
  uVar8 = *(undefined4 *)(param_1[0xb] + 0x28);
  uVar4 = *(undefined4 *)(param_1[0xb] + 0x18);
  for (iVar10 = 0; iVar10 < param_1[1]; iVar10 = iVar10 + 1) {
    iVar12 = iVar10 * 4;
    if (*(short *)(param_1[2] + iVar12 + 2) == 0) {
      *(undefined2 *)(param_1[2] + iVar12 + 2) = 1;
      iVar11 = *param_1;
      if (*(int *)(iVar11 + 0x3c) == 0) {
        uVar2 = *(ushort *)(param_1[0xb] + 0x20);
        uVar13 = thunk_FUN_4a0015f0(iVar10,(int)*(short *)((int)param_1 + 0x12));
        uVar3 = *(ushort *)(iVar11 + 0x12);
        iVar6 = param_1[3];
        uVar5 = FUN_4a170740(iVar11 + 0x44,*(undefined2 *)(param_1[2] + iVar12));
        FUN_4a0a43e8(param_1[7],uVar5,(uint)uVar3,uVar8,
                     (int)(short)iVar6 * (int)((ulonglong)uVar13 >> 0x20),(uint)uVar3 * (int)uVar13,
                     uVar2 >> 1,(int)(short)param_1[3]);
      }
      else {
        uVar5 = FUN_4a0483d0();
        iVar6 = *param_1;
        uVar9 = (uint)*(ushort *)(iVar6 + 0x12);
        uVar1 = *(undefined2 *)(param_1[0xb] + 0x24);
        uVar13 = thunk_FUN_4a0015f0(iVar10,(int)*(short *)((int)param_1 + 0x12));
        iVar11 = param_1[3];
        uVar7 = FUN_4a170740(iVar6 + 0x44,*(undefined2 *)(param_1[2] + iVar12));
        FUN_4a1652d2(uVar5,uVar7,*(undefined4 *)(*param_1 + 0x3c),uVar4,uVar8,
                     (int)(short)iVar11 * (int)((ulonglong)uVar13 >> 0x20),uVar9 * (int)uVar13,uVar1
                     ,(int)(short)param_1[3],uVar9);
      }
    }
  }
  FUN_4a061290(param_1[0xb],uVar8,uVar4);
  return;
}



// Address: 4a0a43e8

void FUN_4a0a43e8(int *param_1,byte *param_2,int param_3,int param_4,uint param_5,int param_6,
                 int param_7,int param_8)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  
  uVar2 = *(ushort *)(param_2 + 4);
  bVar1 = *param_2;
  for (iVar10 = 0; iVar10 < param_3; iVar10 = iVar10 + 1) {
    pbVar5 = (byte *)(param_7 * (param_6 + iVar10) + (int)param_5 / 2 + param_4);
    puVar8 = (uint *)(param_1[1] * ((uint)*(ushort *)(param_2 + 6) + iVar10) * 4 +
                      (uint)(uVar2 >> 5) * 4 + *param_1);
    uVar4 = *param_2 + param_5;
    uVar6 = 1 << (uVar2 & 0x1f);
    for (uVar9 = param_5; (int)uVar9 < (int)uVar4; uVar9 = uVar9 + 1) {
      if (uVar6 == 0) {
        uVar6 = 1;
        puVar8 = puVar8 + 1;
      }
      if ((uVar9 & 1) == 0) {
        *pbVar5 = *pbVar5 & 0xf0 | (*puVar8 & uVar6) != 0;
      }
      else {
        bVar3 = 0;
        if ((*puVar8 & uVar6) != 0) {
          bVar3 = 0x10;
        }
        *pbVar5 = *pbVar5 & 0xf | bVar3;
        pbVar5 = pbVar5 + 1;
      }
      uVar6 = uVar6 << 1;
    }
    iVar7 = uVar4 + (param_8 - (uint)bVar1);
    for (; (int)uVar4 < iVar7; uVar4 = uVar4 + 1) {
      if ((uVar4 & 1) == 0) {
        *pbVar5 = *pbVar5 & 0xf0;
      }
      else {
        *pbVar5 = *pbVar5 & 0xf;
        pbVar5 = pbVar5 + 1;
      }
    }
  }
  return;
}



// Address: 4a0a44bc

void FUN_4a0a44bc(undefined4 *param_1)

{
  undefined4 uVar1;
  
  FUN_4a039aec(param_1 + 1,1,0x1f,4);
  FUN_4a039aec(param_1 + 2,1,0x1f,4);
  if (*PTR_DAT_4a0a4508 != '\0') {
    uVar1 = thunk_FUN_4a161570(param_1[2] * param_1[1] * 4);
    *param_1 = uVar1;
  }
  FUN_4a03c12c(*param_1,param_1[2] * param_1[1],0x20,4);
  return;
}



// Address: 4a0a450c

undefined4 * FUN_4a0a450c(undefined4 *param_1)

{
  thunk_FUN_4a161530(*param_1);
  return param_1;
}



// Address: 4a0a4520

void FUN_4a0a4520(int *param_1,int param_2)

{
  undefined4 uVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_40 [4];
  ushort local_3c;
  int local_38;
  ushort local_2e;
  ushort local_2c;
  undefined4 local_28;
  undefined2 *local_24;
  int local_20;
  int *piStack_1c;
  int local_18;
  
  iVar9 = *(int *)PTR_DAT_4a0a46ec;
  iVar10 = iVar9;
  piStack_1c = param_1;
  local_18 = param_2;
  if (param_1[1] == -2) {
    param_1[1] = 0xc0;
  }
  else if (param_1[1] < 1) goto LAB_4a0a458a;
  iVar4 = FUN_4a03b864(param_1[1],iVar9,(int)(short)param_1[3],*(undefined2 *)(*param_1 + 0x12));
  if (iVar4 <= iVar9) {
    iVar5 = FUN_4a03b864(param_1[1],iVar9,(int)(short)param_1[3],*(undefined2 *)(*param_1 + 0x12));
    iVar4 = iVar9;
    do {
      iVar10 = iVar5;
      iVar9 = iVar4;
      if (iVar9 < 2) break;
      iVar4 = iVar9 >> 1;
      iVar5 = FUN_4a03b864(param_1[1],iVar4,(int)(short)param_1[3],*(undefined2 *)(*param_1 + 0x12))
      ;
    } while (iVar5 < iVar4);
  }
LAB_4a0a458a:
  sVar2 = thunk_FUN_4a0015f0(iVar9,(int)(short)param_1[3]);
  *(short *)((int)param_1 + 0x12) = sVar2;
  iVar4 = thunk_FUN_4a0015f0(iVar10,*(undefined2 *)(*param_1 + 0x12));
  param_1[1] = sVar2 * iVar4;
  thunk_FUN_4a161570(0xc4);
  iVar4 = FUN_4a0633c4();
  param_1[0xb] = iVar4;
  thunk_FUN_4a0ecbc4(auStack_40);
  if ((*(int *)PTR_DAT_4a0a46f0 != 0) && (-1 < **(int **)PTR_DAT_4a0a46f4 << 0x18)) {
    local_3c = local_3c | 0x800;
  }
  uVar6 = FUN_4a136390(param_1);
  thunk_FUN_4a0ecab0(auStack_40,uVar6);
  thunk_FUN_4a0ebe9c(auStack_40,iVar9);
  thunk_FUN_4a0ecb88(auStack_40,iVar10);
  thunk_FUN_4a0e4d6c(auStack_40,0,0,0,0);
  if ((((3 < local_38 - 0x20U) && (local_38 != 0x27)) && (local_38 != 0x34)) &&
     ((local_38 != 0x2b && (local_38 != 0x35)))) {
    local_20 = (uint)local_2e * (uint)local_2c;
  }
  thunk_FUN_4a001274(local_28,local_20);
  uVar6 = DAT_4a0a46f8;
  if (local_24 != (undefined2 *)0x0) {
    if (local_18 == 0) {
      *local_24 = 0;
      local_24[1] = (short)param_1[9];
    }
    else {
      uVar7 = 0;
      do {
        uVar8 = uVar7 + 1 & 0xffff;
        local_24[uVar7] = (short)uVar7 * 0x1000 + (short)uVar6;
        uVar7 = uVar8;
      } while (uVar8 < 0x10);
    }
  }
  FUN_4a061608(param_1[0xb],1);
  FUN_4a062e34(param_1[0xb],auStack_40);
  FUN_4a06157c(param_1[0xb],*(undefined1 *)((int)param_1 + 0x21));
  FUN_4a1652c6((int *)param_1[0xb],*(undefined4 *)(*(int *)param_1[0xb] + 0x3c));
  thunk_FUN_4a161570(0x58);
  iVar4 = FUN_4a069e28();
  param_1[10] = iVar4;
  FUN_4a04d50c(iVar4,param_1[0xb],local_18);
  iVar4 = thunk_FUN_4a161570(param_1[1] << 2);
  uVar1 = DAT_4a0a4700;
  uVar6 = DAT_4a0a46fc;
  param_1[2] = iVar4;
  for (iVar4 = 0; iVar4 < param_1[1]; iVar4 = iVar4 + 1) {
    *(short *)(param_1[2] + iVar4 * 4) = (short)uVar6;
    *(short *)(param_1[2] + iVar4 * 4 + 2) = (short)uVar1;
  }
  uVar3 = thunk_FUN_4a0015f0((int)(short)param_1[3] << 0xc,iVar9);
  *(undefined2 *)((int)param_1 + 0xe) = uVar3;
  uVar3 = thunk_FUN_4a0015f0((uint)*(ushort *)(*param_1 + 0x12) << 0xc,iVar10);
  *(undefined2 *)(param_1 + 4) = uVar3;
  thunk_FUN_4a0ecbf0(auStack_40);
  return;
}



// Address: 4a0a4704

void FUN_4a0a4704(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (*(char *)(param_1 + 0x30) != '\0') {
      FUN_4a0a42f0(param_1);
      *(undefined1 *)(param_1 + 0x30) = 0;
    }
    uVar2 = DAT_4a0a4748;
    for (iVar3 = 0; iVar3 < *(int *)(param_1 + 4); iVar3 = iVar3 + 1) {
      iVar4 = iVar3 * 4 + 2;
      uVar1 = *(ushort *)(*(int *)(param_1 + 8) + iVar4);
      if (uVar1 < uVar2) {
        *(ushort *)(*(int *)(param_1 + 8) + iVar4) = uVar1 + 1;
      }
    }
  }
  return;
}



// Address: 4a0a474c

void FUN_4a0a474c(int param_1,ushort param_2,undefined4 param_3)

{
  ushort uVar1;
  
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined4 *)(param_1 + 4) = param_3;
  uVar1 = param_2 + 1;
  if ((param_2 & 1) == 0) {
    uVar1 = param_2;
  }
  *(ushort *)(param_1 + 0xc) = uVar1;
  *(undefined2 *)(param_1 + 0x24) = 0xffff;
  FUN_4a0a4520(param_1,1);
  return;
}



// Address: 4a0a4776

undefined8 FUN_4a0a4776(int *param_1,ushort *param_2)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  short extraout_r1;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  ushort *local_20;
  
  iVar5 = *param_1;
  local_20 = param_2;
  if ((ushort *)(uint)*(ushort *)(iVar5 + 0x1e) == param_2) {
LAB_4a0a478a:
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined2 *)((int)param_1 + 0x16) = 0;
    *(undefined2 *)((int)param_1 + 0x1a) = 0;
    *(undefined2 *)(param_1 + 6) = 0;
  }
  else {
    local_20 = (ushort *)(*(int *)(iVar5 + 0x44) + (int)param_2 * 8 + 2);
    uVar8 = (uint)*local_20;
    uVar6 = 0xffffffff;
    uVar7 = 1;
    uVar10 = uVar6;
    if ((param_1[1] <= (int)uVar8) ||
       ((ushort *)(uint)*(ushort *)(param_1[2] + uVar8 * 4) != param_2)) {
      uVar9 = 0;
      if (*(int *)(iVar5 + 0x3c) != 0) {
        uVar9 = 1;
        uVar10 = 0xffffffff;
      }
      while ((uVar8 = uVar6, (int)uVar9 < param_1[1] &&
             (puVar11 = (ushort *)(param_1[2] + uVar9 * 4), uVar8 = uVar9,
             (ushort *)(uint)*puVar11 != param_2))) {
        uVar2 = puVar11[1];
        if (uVar7 < uVar2) {
          uVar10 = uVar9;
          uVar7 = uVar2;
        }
        uVar9 = uVar9 + 1;
      }
    }
    if (uVar8 == 0xffffffff) {
      if (uVar10 == 0xffffffff) goto LAB_4a0a478a;
      FUN_4a0a484a(param_1,param_2,uVar10);
      uVar8 = uVar10;
    }
    else {
      iVar5 = param_1[2] + uVar8 * 4;
      if (*(short *)(iVar5 + 2) != 0) {
        *(undefined2 *)(iVar5 + 2) = 1;
      }
    }
    *local_20 = (ushort)uVar8;
    sVar3 = thunk_FUN_4a0015f0(uVar8,(int)*(short *)((int)param_1 + 0x12));
    *(short *)(param_1 + 6) = *(short *)((int)param_1 + 0xe) * extraout_r1;
    *(short *)((int)param_1 + 0x1a) = sVar3 * (short)param_1[4];
    bVar1 = *(byte *)(*(int *)(*param_1 + 0x44) + (int)param_2 * 8);
    *(byte *)(param_1 + 5) = bVar1;
    uVar4 = thunk_FUN_4a0015f0((int)*(short *)((int)param_1 + 0xe) * (uint)bVar1,
                               (int)(short)param_1[3]);
    *(undefined2 *)((int)param_1 + 0x16) = uVar4;
  }
  return CONCAT44(local_20,param_1 + 5);
}



// Address: 4a0a484a

void FUN_4a0a484a(int param_1,undefined2 param_2,int param_3)

{
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined2 *)(*(int *)(param_1 + 8) + param_3 * 4) = param_2;
  *(undefined2 *)(*(int *)(param_1 + 8) + param_3 * 4 + 2) = 0;
  return;
}



// Address: 4a0a4864

void FUN_4a0a4864(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  FUN_4a039aec(param_1 + 4,1,0x1f,4);
  FUN_4a039a4c(param_1 + 0xc,1,0xf,2);
  FUN_4a03c0b8(param_1 + 0x24,1,0x10,2);
  FUN_4a0365d4(param_1 + 0x20,1,1,1);
  if (*(uint *)PTR_DAT_4a0a48f0 < DAT_4a0a48f4) {
    *(undefined1 *)(param_1 + 0x21) = 0;
  }
  else {
    FUN_4a0365d4(param_1 + 0x21,1,1,1);
  }
  pcVar2 = PTR_DAT_4a0a48f0 + -0xc0;
  if (*pcVar2 != '\0') {
    uVar1 = thunk_FUN_4a161570(0xc);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    *(undefined1 *)(param_1 + 0x22) = 1;
  }
  FUN_4a0a44bc(*(undefined4 *)(param_1 + 0x1c));
  if (*pcVar2 != '\0') {
    FUN_4a0a4520(param_1,0);
  }
  return;
}



// Address: 4a0a48f8

int FUN_4a0a48f8(undefined4 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  
  param_1[2] = 0;
  *param_1 = param_2;
  iVar2 = FUN_4a092080(param_1 + 5);
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined1 *)(iVar2 + 0xe) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  puVar1 = PTR_DAT_4a0a4948;
  if (*(int *)(PTR_DAT_4a0a4948 + 4) == 0) {
    FUN_4a16fa08(PTR_DAT_4a0a4948,8);
  }
  FUN_4a16fa08(PTR_DAT_4a0a4948,*(int *)(puVar1 + 4) + 1);
  *(int *)(*(int *)puVar1 + *(int *)(puVar1 + 4) * 4) = iVar2 + -0x14;
  *(int *)(puVar1 + 4) = *(int *)(puVar1 + 4) + 1;
  return iVar2 + -0x14;
}



// Address: 4a0a494c

int FUN_4a0a494c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((*(char *)(param_1 + 0x22) != '\0') && (*(int *)(param_1 + 0x1c) != 0)) {
    FUN_4a0a450c();
    thunk_FUN_4a161530();
  }
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 != (int *)0x0) {
    FUN_4a1652c6(piVar1,*(undefined4 *)(*piVar1 + 4));
  }
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    FUN_4a1652c6(piVar1,*(undefined4 *)(*piVar1 + 4));
  }
  thunk_FUN_4a161530(*(undefined4 *)(param_1 + 8));
  uVar4 = 0;
  while( true ) {
    if (*(uint *)(PTR_DAT_4a0a4a04 + 4) <= uVar4) goto LAB_4a0a49dc;
    if (*(int *)(*(int *)PTR_DAT_4a0a4a04 + uVar4 * 4) == param_1) break;
    uVar4 = uVar4 + 1;
  }
  uVar2 = *(uint *)(PTR_DAT_4a0a4a04 + 4) - (uVar4 + 1);
  uVar5 = 1;
  if (uVar2 < 2) {
    uVar5 = uVar2;
  }
  for (uVar2 = 0; uVar2 < uVar5; uVar2 = uVar2 + 1) {
    *(undefined4 *)(*(int *)PTR_DAT_4a0a4a04 + (uVar4 + uVar2) * 4) =
         *(undefined4 *)
          (*(int *)PTR_DAT_4a0a4a04 + ((*(int *)(PTR_DAT_4a0a4a04 + 4) - uVar5) + uVar2) * 4);
  }
  FUN_4a16fa24(PTR_DAT_4a0a4a04,*(int *)(PTR_DAT_4a0a4a04 + 4) + -1,uVar2,uVar5,param_4);
LAB_4a0a49dc:
  if (*(int *)(PTR_DAT_4a0a4a04 + 4) == 0) {
    FUN_4a16fa24(PTR_DAT_4a0a4a04,0);
    FUN_4a16f9dc(PTR_DAT_4a0a4a04,0);
  }
  iVar3 = FUN_4a09208c(param_1 + 0x14);
  return iVar3 + -0x14;
}



// Address: 4a0a4a08

void FUN_4a0a4a08(undefined4 *param_1)

{
  FUN_4a150d00(*param_1);
  return;
}



// Address: 4a0a4a16

void FUN_4a0a4a16(undefined4 *param_1)

{
  FUN_4a150d0c(*param_1);
  return;
}



// Address: 4a0a4a24

void FUN_4a0a4a24(undefined4 *param_1)

{
  FUN_4a150d20(*param_1);
  return;
}



// Address: 4a0a4a32

void FUN_4a0a4a32(undefined4 *param_1)

{
  FUN_4a150c30(*param_1);
  return;
}



// Address: 4a0a4a40

void FUN_4a0a4a40(undefined4 *param_1)

{
  FUN_4a150c50(*param_1);
  return;
}



// Address: 4a0a4a4e

void FUN_4a0a4a4e(undefined4 *param_1)

{
  FUN_4a150c78(*param_1);
  return;
}



// Address: 4a0a4a5c

void FUN_4a0a4a5c(undefined4 *param_1)

{
  FUN_4a150c84(*param_1);
  return;
}



// Address: 4a0a4a6a

void FUN_4a0a4a6a(undefined4 *param_1)

{
  FUN_4a150cac(*param_1);
  return;
}



// Address: 4a0a4a78

void FUN_4a0a4a78(undefined4 *param_1)

{
  FUN_4a150cb8(*param_1);
  return;
}



// Address: 4a0a4a86

void FUN_4a0a4a86(undefined4 *param_1)

{
  FUN_4a150ce8(*param_1);
  return;
}



// Address: 4a0a4a94

void FUN_4a0a4a94(undefined4 *param_1)

{
  FUN_4a150cf4(*param_1);
  return;
}



// Address: 4a0a4aa2

void FUN_4a0a4aa2(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}



// Address: 4a0a4aa6

void FUN_4a0a4aa6(void)

{
  return;
}



// Address: 4a0a4aa8

void FUN_4a0a4aa8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  piVar3 = (int *)FUN_4a0c6bc0();
  puVar1 = PTR_PTR_4a0a4bfc;
  piVar3[2] = 0;
  piVar3[3] = 0;
  *piVar3 = (int)puVar1;
  iVar4 = FUN_4a15e080(0xc0);
  if (iVar4 == 0) {
    iVar4 = FUN_4a1669a8();
  }
  iVar6 = 0;
  do {
    *(undefined4 *)(iVar4 + iVar6 * 4) = 0;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x30);
  thunk_FUN_4a161570(0x18);
  puVar5 = (undefined4 *)FUN_4a0c0628();
  puVar5[3] = 4;
  puVar5[4] = 0x30;
  puVar1 = PTR_PTR_4a0a4c00;
  *puVar5 = PTR_PTR_4a0a4c00;
  puVar5[2] = iVar4;
  *(undefined1 *)(puVar5 + 5) = 1;
  if (puVar5 != (undefined4 *)0x0) {
    (**(code **)(puVar1 + 0xc))(puVar5);
  }
  (**(code **)(*piVar3 + 0x1c))(piVar3);
  piVar3[2] = 0x30;
  piVar3[3] = (int)puVar5;
  puVar5 = (undefined4 *)FUN_4a0c6bc0(piVar3 + 5);
  puVar1 = PTR_PTR_4a0a4c04;
  puVar5[2] = 0;
  *puVar5 = puVar1;
  puVar5[3] = 0;
  puVar5 = (undefined4 *)FUN_4a0c6bc0(puVar5 + 5);
  puVar5[2] = 0;
  *puVar5 = puVar1;
  puVar5[3] = 0;
  puVar5 = (undefined4 *)FUN_4a0c6bc0(puVar5 + 5);
  puVar2 = PTR_PTR_4a0a4c08;
  puVar5[2] = 0;
  *puVar5 = puVar2;
  puVar5[3] = 0;
  puVar5 = (undefined4 *)FUN_4a0c6bc0(puVar5 + 5);
  puVar5[2] = 0;
  *puVar5 = puVar2;
  puVar5[3] = 0;
  puVar5 = (undefined4 *)FUN_4a0c6bc0(puVar5 + 5);
  puVar5[2] = 0;
  *puVar5 = puVar1;
  puVar5[3] = 0;
  puVar5 = (undefined4 *)FUN_4a0c6bc0(puVar5 + 5);
  puVar1 = PTR_PTR_4a0a4c0c;
  puVar5[2] = 0;
  *puVar5 = puVar1;
  puVar5[3] = 0;
  puVar5 = (undefined4 *)FUN_4a0c6bc0(puVar5 + 5);
  puVar5[2] = 0;
  *puVar5 = puVar2;
  puVar5[3] = 0;
  puVar5 = (undefined4 *)FUN_4a0c6bc0(puVar5 + 8);
  puVar1 = PTR_PTR_4a0a4c10;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = puVar1;
  puVar5[5] = 0;
  return;
}



// Address: 4a0a4c14

void FUN_4a0a4c14(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar4 = 0;
  do {
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    }
    thunk_FUN_4a161530(*(undefined4 *)(iVar2 + iVar4 * 4));
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    }
    *(undefined4 *)(iVar2 + iVar4 * 4) = 0;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x30);
  iVar4 = 0;
  do {
    if (*(int *)(param_1 + 0xb8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0xb8) + 8);
    }
    iVar5 = 0;
    if (0 < *(int *)(iVar2 + iVar4 * 0x14 + 8)) {
      do {
        iVar2 = *(int *)(param_1 + 0xb8);
        if (iVar2 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar2 + 8);
        }
        iVar3 = *(int *)(iVar3 + iVar4 * 0x14 + 0xc);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar3 + 8);
        }
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar2 + 8);
        }
        iVar2 = *(int *)(iVar2 + iVar4 * 0x14 + 0xc);
        piVar6 = *(int **)(iVar3 + iVar5 * 4);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar2 + 8);
        }
        *(undefined4 *)(iVar2 + iVar5 * 4) = 0;
        if ((piVar6 != (int *)0x0) && (iVar2 = (**(code **)(*piVar6 + 8))(piVar6), iVar2 != 0)) {
          (**(code **)(*piVar6 + 4))(piVar6);
        }
        iVar5 = iVar5 + 1;
        if (*(int *)(param_1 + 0xb8) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(*(int *)(param_1 + 0xb8) + 8);
        }
      } while (iVar5 < *(int *)(iVar2 + iVar4 * 0x14 + 8));
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 1);
  puVar7 = (undefined4 *)(param_1 + 0xac);
  *puVar7 = PTR_PTR_4a0a4f30;
  iVar2 = *(int *)(param_1 + 0xb4);
  iVar4 = FUN_4a0bcc84(puVar7);
  if (iVar4 != 0) {
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        (*(code *)**(undefined4 **)(iVar4 + iVar5 * 0x14))();
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
      if (iVar4 == 0) goto LAB_4a0a4d98;
    }
    FUN_4a14f21c(iVar4);
  }
LAB_4a0a4d98:
  iVar4 = FUN_4a0c6bf4(puVar7);
  iVar4 = FUN_4a16c1a0(iVar4 + -0x20);
  puVar7 = (undefined4 *)(iVar4 + -0x14);
  *puVar7 = PTR_PTR_4a0a4f34;
  iVar2 = *(int *)(iVar4 + -0xc);
  iVar4 = FUN_4a0bcc84(puVar7);
  if (iVar4 != 0) {
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
      if (iVar4 == 0) goto LAB_4a0a4dec;
    }
    FUN_4a14f21c();
  }
LAB_4a0a4dec:
  iVar4 = FUN_4a0c6bf4(puVar7);
  puVar1 = PTR_PTR_4a0a4f38;
  *(undefined **)(iVar4 + -0x14) = PTR_PTR_4a0a4f38;
  iVar5 = *(int *)(iVar4 + -0xc);
  iVar2 = FUN_4a0bcc84(iVar4 + -0x14);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < iVar5) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar5);
      if (iVar2 == 0) goto LAB_4a0a4e38;
    }
    FUN_4a14f21c();
  }
LAB_4a0a4e38:
  iVar4 = FUN_4a0c6bf4(iVar4 + -0x14);
  iVar4 = FUN_4a16c1a0(iVar4 + -0x14);
  iVar4 = FUN_4a16c1a0(iVar4 + -0x14);
  *(undefined **)(iVar4 + -0x14) = puVar1;
  iVar5 = *(int *)(iVar4 + -0xc);
  iVar2 = FUN_4a0bcc84(iVar4 + -0x14);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < iVar5) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar5);
      if (iVar2 == 0) goto LAB_4a0a4e90;
    }
    FUN_4a14f21c();
  }
LAB_4a0a4e90:
  iVar4 = FUN_4a0c6bf4(iVar4 + -0x14);
  *(undefined **)(iVar4 + -0x14) = puVar1;
  iVar5 = *(int *)(iVar4 + -0xc);
  iVar2 = FUN_4a0bcc84(iVar4 + -0x14);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < iVar5) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar5);
      if (iVar2 == 0) goto LAB_4a0a4ed8;
    }
    FUN_4a14f21c();
  }
LAB_4a0a4ed8:
  iVar4 = FUN_4a0c6bf4(iVar4 + -0x14);
  puVar7 = (undefined4 *)(iVar4 + -0x14);
  *puVar7 = PTR_PTR_4a0a4f3c;
  iVar5 = *(int *)(iVar4 + -0xc);
  iVar2 = FUN_4a0bcc84(puVar7);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < iVar5) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar5);
      if (iVar2 == 0) goto LAB_4a0a4f24;
    }
    FUN_4a14f21c();
  }
LAB_4a0a4f24:
  *puVar7 = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar4 + -0x10) = 0xffffffff;
  return;
}



// Address: 4a0a4f40

void FUN_4a0a4f40(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_4a13cff4(param_3);
  (**(code **)(*param_1 + 0x1c))(param_1,param_2,uVar1,param_4,param_5,param_6);
  return;
}



// Address: 4a0a4f94

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0a4f94(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar2;
  
  piVar2 = param_3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 0xc))();
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x1c))
            (*(int **)(param_1 + 8),param_2,param_3,param_4,param_5,param_6,piVar2);
  if (param_3 != (int *)0x0) {
    iVar1 = (**(code **)(*param_3 + 8))(param_3);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0a5038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 4))(param_3);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a0a5020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a0a503c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0a503c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  piVar1 = (int *)FUN_4a13e624(param_3,param_4,param_5 + param_4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))();
    (**(code **)(*piVar1 + 0xc))();
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x1c))
            (*(int **)(param_1 + 8),param_2,piVar1,param_6,param_7,param_8);
  if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 8))(piVar1), iVar2 != 0)) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  if (piVar1 == (int *)0x0) {
    return;
  }
  iVar2 = (**(code **)(*piVar1 + 8))(piVar1);
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0a5120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0a5138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 4))(piVar1);
  return;
}



// Address: 4a0a5170

int * FUN_4a0a5170(int *param_1)

{
  if (*param_1 != 0) {
    FUN_4a14f21c();
  }
  return param_1;
}



// Address: 4a0a5198

undefined4 * FUN_4a0a5198(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int local_44;
  int local_40 [3];
  int local_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  int local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  
  puVar2 = (undefined4 *)FUN_4a0c6bc0();
  *puVar2 = PTR_PTR_4a0a5420;
  puVar2[2] = param_2;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[6] = param_3;
  puVar2[5] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  local_24 = (int *)0x0;
  local_20 = (int *)0x0;
  local_1c = (int *)0x0;
  puVar2[5] = 0;
  local_28 = 8;
  do {
    piVar9 = local_20;
    if (local_20 == local_1c) {
      local_40[0] = 1;
      local_40[1] = 0;
      local_44 = (int)local_20 - (int)local_24 >> 2;
      if (local_44 == 0) {
        piVar10 = local_40;
      }
      else {
        piVar10 = &local_44;
      }
      iVar6 = *piVar10 + local_44;
      if (iVar6 == 0) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = (int *)FUN_4a15e080(iVar6 * 4);
        if (piVar10 == (int *)0x0) {
          piVar10 = (int *)FUN_4a1669a8();
        }
      }
      piVar1 = local_24;
      iVar7 = local_40[0];
      piVar8 = piVar10;
      if (piVar9 != local_24) {
        iVar3 = FUN_4a000ec8(piVar10);
        iVar7 = local_40[0];
        piVar8 = (int *)((int)piVar9 + (iVar3 - (int)piVar1));
      }
      do {
        iVar7 = iVar7 + -1;
        piVar9 = piVar8 + 1;
        *piVar8 = local_28;
        piVar8 = piVar9;
      } while (iVar7 != 0);
      if (local_24 != (int *)0x0) {
        FUN_4a14f21c();
      }
      local_1c = piVar10 + iVar6;
      local_24 = piVar10;
      local_20 = piVar9;
    }
    else {
      *local_20 = local_28;
      local_20 = local_20 + 1;
    }
    local_28 = local_28 * 2;
  } while (local_28 < 0x101);
  uVar4 = thunk_FUN_4a149130(0x10,(int)local_20 - (int)local_24 >> 2,PTR_LAB_4a0a5424,0);
  puVar2[3] = uVar4;
  uVar5 = 0;
  if ((int)local_20 - (int)local_24 >> 2 != 0) {
    do {
      *(int *)(puVar2[3] + uVar5 * 0x10 + 0xc) = local_24[uVar5];
      piVar9 = local_24 + uVar5;
      uVar5 = uVar5 + 1;
      puVar2[5] = *piVar9;
    } while (uVar5 < (uint)((int)local_20 - (int)local_24 >> 2));
  }
  puVar2[4] = (int)local_20 - (int)local_24 >> 2;
  (**(code **)(*(int *)puVar2[2] + 0x40))
            ((int *)puVar2[2],auStack_2c,auStack_30,&local_34,local_40 + 2);
  iVar6 = (**(code **)(*(int *)puVar2[2] + 0x34))();
  local_40[2] = local_40[2] + iVar6 + local_34;
  iVar6 = 1;
  puVar2[7] = local_40[2];
  if (1 < local_40[2]) {
    do {
      iVar6 = iVar6 * 2;
    } while (iVar6 < local_40[2]);
  }
  puVar2[7] = iVar6;
  local_40[1] = 0;
  if (local_24 != (int *)0x0) {
    FUN_4a14f21c(local_24);
  }
  return puVar2;
}



// Address: 4a0a5440

void FUN_4a0a5440(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  
  *param_1 = PTR_PTR_4a0a5684;
  piVar3 = (int *)param_1[2];
  if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  uVar5 = 0;
  if ((int)(param_1[9] - param_1[8]) >> 2 != 0) {
    do {
      puVar4 = *(undefined4 **)(param_1[8] + uVar5 * 4);
      if (puVar4[3] == 0) {
        if (puVar4 != (undefined4 *)0x0) {
          piVar3 = (int *)puVar4[1];
          if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
            (**(code **)(*piVar3 + 4))(piVar3);
          }
          piVar3 = (int *)*puVar4;
          if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
            (**(code **)(*piVar3 + 4))(piVar3);
          }
          thunk_FUN_4a161530(puVar4);
        }
      }
      else {
        *(undefined1 *)(puVar4 + 2) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)((int)(param_1[9] - param_1[8]) >> 2));
  }
  iVar1 = 0;
  if (0 < (int)param_1[4]) {
    do {
      iVar6 = iVar1 * 0x10 + 4;
      uVar5 = 0;
      if (*(int *)(param_1[3] + iVar6) - *(int *)(param_1[3] + iVar1 * 0x10) >> 2 != 0) {
        do {
          puVar4 = *(undefined4 **)(*(int *)(param_1[3] + iVar1 * 0x10) + uVar5 * 4);
          if (puVar4 != (undefined4 *)0x0) {
            piVar3 = (int *)puVar4[1];
            if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 8))(piVar3), iVar2 != 0))
            {
              (**(code **)(*piVar3 + 4))(piVar3);
            }
            piVar3 = (int *)*puVar4;
            if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 8))(piVar3), iVar2 != 0))
            {
              (**(code **)(*piVar3 + 4))(piVar3);
            }
            thunk_FUN_4a161530(puVar4);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < (uint)(*(int *)(param_1[3] + iVar6) - *(int *)(param_1[3] + iVar1 * 0x10)
                               >> 2));
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[4]);
  }
  thunk_FUN_4a00191c(param_1[3],PTR_FUN_4a0a5688);
  if (param_1[8] != 0) {
    FUN_4a14f21c();
  }
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a0a568c

void FUN_4a0a568c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  
  uStack_c = param_2;
  FUN_4a1652c8(1,&uStack_c,*(undefined4 *)PTR_DAT_4a0a56a0,param_4,param_1);
  return;
}



// Address: 4a0a56a4

void FUN_4a0a56a4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  FUN_4a1652c8(1,param_2,*(undefined4 *)PTR_DAT_4a0a56e0);
  puVar2 = PTR_DAT_4a0a56e8;
  uVar1 = DAT_4a0a56e4;
  FUN_4a1652c8(DAT_4a0a56e4,*param_2,*(undefined4 *)PTR_DAT_4a0a56e8);
  FUN_4a1652cc(uVar1,*param_1,param_1[1],param_1[2]);
  FUN_4a1652c8(uVar1,0,*(undefined4 *)puVar2);
  return;
}



// Address: 4a0a56f0

undefined4 *
FUN_4a0a56f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return param_1 + 3;
}



// Address: 4a0a56f4

undefined4 FUN_4a0a56f4(void)

{
  undefined4 in_r3;
  undefined4 local_8 [2];
  
  local_8[0] = in_r3;
  FUN_4a1652c8(1,local_8,*(undefined4 *)PTR_DAT_4a0a570c);
  return local_8[0];
}



// Address: 4a0a5710

void FUN_4a0a5710(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  if (*PTR_DAT_4a0a575c == '\0') {
    local_10 = FUN_4a1652c6((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x18));
    FUN_4a039aec(&local_10,1,0x1f,4);
    piVar1 = (int *)*param_1;
  }
  else {
    FUN_4a039aec(&local_10,1,0x1f,4);
    piVar1 = (int *)FUN_4a0a5760(local_10);
    *param_1 = piVar1;
  }
  FUN_4a1652c6(piVar1,*(undefined4 *)(*piVar1 + 0x14));
  return;
}



// Address: 4a0a5760

void FUN_4a0a5760(int param_1)

{
  while( true ) {
    if (param_1 == 0) {
      thunk_FUN_4a161570(0x14);
      FUN_4a09c1bc();
      return;
    }
    if (param_1 == 1) break;
    if (param_1 == 2) {
      thunk_FUN_4a161570(0x24);
      FUN_4a0a38c4();
      return;
    }
    param_1 = 0;
  }
  thunk_FUN_4a161570(0x1c);
  FUN_4a09cce0();
  return;
}



// Address: 4a0a57d4

void FUN_4a0a57d4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  for (uVar4 = 0; uVar4 < *(uint *)(param_1 + 0x24); uVar4 = uVar4 + 1) {
    iVar1 = uVar4 * 0x18;
    if (*(int *)(*(int *)(param_1 + 0x20) + iVar1 + 0x14) << 0x1c < 0) {
      iVar3 = *(int *)PTR_DAT_4a0a5838;
      iVar2 = *(int *)(iVar3 + 0x38c);
      *(int *)(iVar3 + 0x388) = iVar2;
      *(int *)(iVar3 + 0x38c) = iVar2 + 0x14;
      *(int *)(iVar2 + 8) = iVar2;
      *(int *)(iVar2 + 4) = iVar2;
      *(int *)(iVar2 + 0xc) = *(int *)(param_1 + 0x20) + iVar1;
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar1 + 0xc);
      FUN_4a0307dc(param_2 + 0x118);
    }
  }
  return;
}



// Address: 4a0a583c

undefined4 FUN_4a0a583c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_40 [32];
  int iStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  iStack_20 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  iVar1 = thunk_FUN_4a00142c(param_3,s_param_4a0a5944);
  iVar4 = param_1 + 0x20;
  if (iVar1 == 0) {
    FUN_4a16e434(iVar4);
    uVar2 = FUN_4a16e38e(iVar4);
    iVar1 = FUN_4a0a3aac(uVar2,local_1c);
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    iVar1 = thunk_FUN_4a00142c(param_3,s_instanceParam_4a0a594c);
    if (iVar1 != 0) {
      iVar1 = thunk_FUN_4a00142c(param_3,s_shader_4a0a595c);
      if (iVar1 == 0) {
        local_40[0] = 0;
        FUN_4a09c2ec(local_1c,local_40,0x20,1);
        iVar4 = -1;
        iVar1 = FUN_4a17077e(local_40,s_vertex_4a0a5964);
        if (iVar1 == 0) {
          iVar1 = FUN_4a17077e(local_40,s_fragment_4a0a596c);
          if (iVar1 != 0) {
            iVar4 = 1;
          }
        }
        else {
          iVar4 = 0;
        }
        iVar1 = thunk_FUN_4a161570(DAT_4a0a5978);
        FUN_4a09c5e4(local_1c,iVar1,DAT_4a0a5978);
        iVar3 = FUN_4a0013e0(iVar1);
        param_1 = iVar4 * 4 + param_1;
        *(int *)(param_1 + 0x18) = iVar3 + -2;
        uVar2 = thunk_FUN_4a161570(iVar3 + -1);
        *(undefined4 *)(param_1 + 0x10) = uVar2;
        thunk_FUN_4a000f84(uVar2,iVar1 + 1,*(undefined4 *)(param_1 + 0x18));
        *(undefined1 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18)) = 0;
        thunk_FUN_4a161530(iVar1);
        return 1;
      }
      uVar2 = FUN_4a060598(param_1,local_1c,param_3);
      return uVar2;
    }
    FUN_4a16e434(iVar4);
    uVar2 = FUN_4a16e38e(iVar4);
    iVar1 = FUN_4a0a3aac(uVar2,local_1c);
    if (iVar1 != 0) {
      iVar1 = FUN_4a16e38e(iVar4);
      FUN_4a161530(*(undefined4 *)(iVar1 + 0xc));
      iVar1 = FUN_4a16e38e(iVar4);
      *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) | 8;
      return 1;
    }
  }
  FUN_4a16e3fe(iVar4);
  return 1;
}



// Address: 4a0a597c

void FUN_4a0a597c(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_4a092124();
    thunk_FUN_4a161530();
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



// Address: 4a0a5998

void FUN_4a0a5998(int param_1,int param_2,undefined4 *param_3,undefined1 *param_4)

{
  int iVar1;
  uint uVar2;
  
  FUN_4a09210c(*(undefined4 *)(param_1 + 0x30));
  *param_3 = *(undefined4 *)(param_1 + 0x30);
  *param_4 = 0;
  iVar1 = param_2 + 0x118;
  while (iVar1 = *(int *)(iVar1 + 8), iVar1 != param_2 + 0x118) {
    *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0xc) = *(undefined4 *)(iVar1 + 0x10);
    FUN_4a0a3de0(*(undefined4 *)(iVar1 + 0xc));
    *param_4 = 1;
  }
  for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 0x24); uVar2 = uVar2 + 1) {
    FUN_4a0a3b94(*(int *)(param_1 + 0x20) + uVar2 * 0x18,param_2);
    if ((*(uint *)(*(int *)(param_1 + 0x20) + uVar2 * 0x18 + 0x14) & 1) != 0) {
      *param_4 = 1;
    }
  }
  return;
}



// Address: 4a0a5a00

void FUN_4a0a5a00(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)(*(int *)PTR_DAT_4a0a5a88 + 0xc) == 3) {
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_4a092124();
      thunk_FUN_4a161530();
    }
    thunk_FUN_4a161570(0xc);
    uVar1 = FUN_4a09211a();
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    FUN_4a0920b4(uVar1,&DAT_4a0a5a8c,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14)
                );
    for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 0x24); uVar2 = uVar2 + 1) {
      FUN_4a0a3a98(*(int *)(param_1 + 0x20) + uVar2 * 0x18,*(undefined4 *)(param_1 + 0x30));
      FUN_4a0a3de0(*(int *)(param_1 + 0x20) + uVar2 * 0x18);
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      thunk_FUN_4a161530();
    }
    uVar1 = thunk_FUN_4a161570(0x178);
    *(undefined4 *)(param_1 + 0x34) = uVar1;
    uVar1 = FUN_4a135c2c(*(undefined4 *)(param_1 + 0x30));
    FUN_4a0a7134(*(undefined4 *)(param_1 + 0x34),0,uVar1);
    FUN_4a054d10(param_1);
  }
  return;
}



// Address: 4a0a5a90

void FUN_4a0a5a90(int param_1)

{
  FUN_4a135c2c(*(undefined4 *)(param_1 + 0x30));
  return;
}



// Address: 4a0a5a98

void FUN_4a0a5a98(int param_1)

{
  FUN_4a135c2c(*(undefined4 *)(param_1 + 0x30));
  return;
}



// Address: 4a0a5aa8

void FUN_4a0a5aa8(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint local_18;
  
  local_18 = param_4;
  FUN_4a06067c();
  puVar1 = PTR_DAT_4a0a5b60;
  uVar3 = 0;
  do {
    iVar4 = uVar3 * 4 + param_1;
    FUN_4a039aec(iVar4 + 0x18,1,0x1f,4);
    if (*(int *)(iVar4 + 0x18) != 0) {
      if (*puVar1 != '\0') {
        uVar2 = thunk_FUN_4a161570(*(int *)(iVar4 + 0x18) + 1);
        *(undefined4 *)(iVar4 + 0x10) = uVar2;
      }
      FUN_4a039b90(*(undefined4 *)(iVar4 + 0x10),*(int *)(iVar4 + 0x18) + 1,8,1);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  iVar4 = param_1 + 0x20;
  if (*puVar1 == '\0') {
    local_18 = *(uint *)(param_1 + 0x24);
    FUN_4a03c12c(&local_18,1,0x20,4);
  }
  else {
    FUN_4a03c12c(&local_18,1,0x20,4);
    uVar3 = local_18;
    if (*(uint *)(param_1 + 0x24) < local_18) {
      FUN_4a16e360(iVar4,local_18);
    }
    FUN_4a16e39c(iVar4,uVar3);
    FUN_4a16e360(iVar4,*(undefined4 *)(param_1 + 0x24));
  }
  for (uVar3 = 0; uVar3 < *(uint *)(param_1 + 0x24); uVar3 = uVar3 + 1) {
    FUN_4a0a3dec(*(int *)(param_1 + 0x20) + uVar3 * 0x18);
  }
  if (*puVar1 != '\0') {
    FUN_4a0a5a00(param_1);
  }
  return;
}



// Address: 4a0a5b64

undefined4 * FUN_4a0a5b64(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)FUN_4a0606b4();
  puVar1 = PTR_PTR_4a0a5bb4;
  *(undefined2 *)(puVar2 + 3) = 0;
  *(undefined2 *)((int)puVar2 + 0xe) = 0;
  *puVar2 = puVar1;
  puVar3 = puVar2 + 8;
  *puVar3 = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  *(byte *)(puVar2 + 0xb) = *(byte *)(puVar2 + 0xb) & 0xfc;
  FUN_4a16e39c(puVar3,0);
  FUN_4a16e40e(puVar3,0);
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  *(undefined1 *)(puVar2 + 0xe) = 1;
  return puVar2;
}



// Address: 4a0a5bb8

void FUN_4a0a5bb8(int param_1)

{
  if (param_1 != 0) {
    FUN_4a0a5bcc();
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a0a5bcc

void FUN_4a0a5bcc(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  
  *param_1 = PTR_PTR_4a0a5c2c;
  thunk_FUN_4a161530(param_1[4]);
  thunk_FUN_4a161530(param_1[5]);
  thunk_FUN_4a161530(param_1[0xd]);
  FUN_4a0a597c(param_1);
  FUN_4a054c08(param_1);
  piVar1 = param_1 + 8;
  for (uVar2 = 0; uVar2 < (uint)param_1[9]; uVar2 = uVar2 + 1) {
    FUN_4a0a3ec8(*piVar1 + uVar2 * 0x18);
  }
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
    FUN_4a0a6f48(*piVar1,0x18);
    *piVar1 = 0;
  }
  FUN_4a0606ec(param_1);
  return;
}



// Address: 4a0a5c34

undefined4 FUN_4a0a5c34(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_4a102b94(param_1 + 0x10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_4a102b94(param_1 + 0x10);
  }
  return uVar2;
}



// Address: 4a0a5c80

int FUN_4a0a5c80(int param_1)

{
  undefined1 auStack_38 [32];
  int local_18;
  
  FUN_4a102bb6(auStack_38,param_1 + 0x10);
  return (*(int *)(param_1 + 0x394) - *(int *)(param_1 + 0x390)) + local_18;
}



// Address: 4a0a5cac

int FUN_4a0a5cac(int param_1)

{
  int iVar1;
  undefined1 auStack_34 [28];
  int local_18;
  
  FUN_4a102bb6(auStack_34,param_1 + 0x10);
  iVar1 = 0;
  if (local_18 != 4) {
    iVar1 = local_18;
  }
  return iVar1;
}



// Address: 4a0a5ce0

undefined4 * FUN_4a0a5ce0(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  puVar1 = (undefined4 *)FUN_4a070808();
  *puVar1 = PTR_PTR_4a0a5d58;
  uVar4 = param_2 + 3U & 0xfffffffc;
  puVar1[2] = uVar4;
  puVar1[3] = (int)((param_2 + param_3) - uVar4) >> 2;
  FUN_4a070802(puVar1,param_4);
  *puVar1 = PTR_PTR_4a0a5d5c;
  puVar2 = puVar1 + 4;
  thunk_FUN_4a00121c(puVar2,0x378);
  puVar1[0xe2] = puVar2;
  puVar1[0xe4] = 0;
  puVar1[0xe5] = param_3 & 0xfffffff8;
  puVar1[0xe3] = param_2;
  uVar3 = thunk_FUN_4a00729c(puVar2,(param_3 & 0xfffffff8) - 0x14);
  thunk_FUN_4a007050(puVar1[0xe2],uVar3);
  return puVar1;
}



// Address: 4a0a5d60

void FUN_4a0a5d60(int param_1)

{
  if (param_1 != 0) {
    FUN_4a070830();
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a0a5d74

void FUN_4a0a5d74(void)

{
  FUN_4a070830();
  return;
}



// Address: 4a0a5d80

void FUN_4a0a5d80(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x4a0a5d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



// Address: 4a0a5d86

void FUN_4a0a5d86(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x4a0a5d8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}



// Address: 4a0a5d8c

void FUN_4a0a5d8c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x4a0a5d96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



// Address: 4a0a5d98

void FUN_4a0a5d98(int param_1)

{
  FUN_4a03c12c(param_1 + 4,1,0x20,4);
  FUN_4a039aec(param_1 + 0xc,1,0x1f,4);
  return;
}



// Address: 4a0a5dbc

void FUN_4a0a5dbc(int param_1)

{
  if (param_1 != 0) {
    FUN_4a0606ec();
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a0a5dd0

void FUN_4a0a5dd0(void)

{
  FUN_4a0606ec();
  return;
}



// Address: 4a0a5ddc

void FUN_4a0a5ddc(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  
  FUN_4a0c8ddc(param_2,*(undefined4 *)(param_1 + 8));
  uVar1 = FUN_4a13cff4(param_3);
  (**(code **)(*param_2 + 0x4c))
            (param_2,uVar1,param_4,param_5,param_6,0,*(undefined4 *)(param_1 + 0xc));
  return;
}



// Address: 4a0a5e4c

void FUN_4a0a5e4c(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  FUN_4a0c8ddc(param_2,*(undefined4 *)(param_1 + 8));
  (**(code **)(*param_2 + 0x4c))
            (param_2,param_3,param_4,param_5,param_6,0,*(undefined4 *)(param_1 + 0xc));
  return;
}



// Address: 4a0a5eb4

void FUN_4a0a5eb4(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_4a0c8ddc(param_2,*(undefined4 *)(param_1 + 8));
  (**(code **)(*param_2 + 0x50))
            (param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             *(undefined4 *)(param_1 + 0xc));
  return;
}



// Address: 4a0a5f30

undefined4 * FUN_4a0a5f30(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0a5f7c;
  puVar1[2] = param_2;
  puVar1[3] = 0xffffff;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  return puVar1;
}



// Address: 4a0a5ff0

void FUN_4a0a5ff0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = PTR_PTR_4a0a6050;
  piVar2 = (int *)param_1[2];
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  param_1[2] = 0;
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a0a6054

void FUN_4a0a6054(int param_1,uint param_2,uint param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = 2;
  if (uVar2 < param_2) {
    uVar3 = 2;
    if (0xf < uVar2) {
      uVar3 = uVar2 >> 3;
    }
    FUN_4a16e5f0(param_1,uVar3 + param_2,uVar3,param_4,param_4);
  }
  bVar1 = (byte)((param_4 ^ 1) << 1);
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfd | bVar1;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < param_3) {
    if (0xf < uVar2) {
      uVar4 = uVar2 >> 3;
    }
    FUN_4a16fc1c(param_1 + 0x10,uVar4 + param_3);
  }
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfd | bVar1;
  return;
}



// Address: 4a0a60b0

undefined4 * FUN_4a0a60b0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfc;
  param_1[5] = 0;
  param_1[10] = 0;
  return param_1;
}



// Address: 4a0a60f4

int FUN_4a0a60f4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    iVar1 = FUN_4a1652ce(param_1,iVar2,param_3);
    if (iVar1 != 0) break;
    iVar2 = *(int *)(iVar2 + 4);
  }
  return iVar1;
}



// Address: 4a0a6172

int FUN_4a0a6172(int param_1,int param_2)

{
  return *(int *)(param_1 + 8) + param_2 * *(int *)(param_1 + 0x1c);
}



// Address: 4a0a61d0

undefined4 * FUN_4a0a61d0(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)FUN_4a070808();
  *puVar2 = PTR_PTR_4a0a626c;
  uVar4 = param_2 + 3U & 0xfffffffc;
  puVar2[2] = uVar4;
  puVar2[3] = (int)((param_2 + param_3) - uVar4) >> 2;
  FUN_4a070802(puVar2,param_5);
  puVar1 = PTR_PTR_4a0a6270;
  uVar4 = param_4 + 3U & 0xfffffffc;
  puVar2[6] = uVar4;
  *puVar2 = puVar1;
  puVar2[7] = uVar4 + 8;
  uVar3 = thunk_FUN_4a0066d8(puVar2[3] << 2);
  puVar2[8] = uVar3;
  for (iVar5 = 0; iVar5 < (int)puVar2[8]; iVar5 = iVar5 + 1) {
    if (iVar5 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_4a0a6172(puVar2,iVar5 + -1);
    }
    *(undefined4 *)(puVar2[2] + iVar5 * puVar2[7]) = uVar3;
    uVar3 = 0;
    if (puVar2[8] + -1 != iVar5) {
      uVar3 = FUN_4a0a6172(puVar2,iVar5 + 1);
    }
    *(undefined4 *)(puVar2[2] + iVar5 * puVar2[7] + 4) = uVar3;
  }
  puVar2[4] = 0;
  puVar2[5] = puVar2[2];
  puVar2[9] = puVar2[8];
  return puVar2;
}



// Address: 4a0a6274

void FUN_4a0a6274(int param_1)

{
  if (param_1 != 0) {
    FUN_4a070830();
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a0a6288

void FUN_4a0a6288(void)

{
  FUN_4a070830();
  return;
}



// Address: 4a0a6294

void FUN_4a0a6294(undefined4 param_1,int param_2)

{
  FUN_4a0a6828(param_1,*(undefined4 *)(param_2 + 0x18));
  return;
}



// Address: 4a0a62a0

void FUN_4a0a62a0(undefined4 param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int local_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 auStack_48 [18];
  ushort local_36;
  uint local_34;
  uint uStack_30;
  uint local_2c;
  uint local_28;
  int local_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined1 *local_18;
  
  uVar1 = *(undefined1 *)(param_2 + 0x1c);
  uVar9 = *(undefined4 *)(param_2 + 8);
  uStack_20 = param_1;
  iStack_1c = param_2;
  local_18 = param_3;
  iVar3 = FUN_4a050ab8(*(undefined1 *)(param_2 + 0x1d));
  if (((iVar3 == 6) || (iVar3 == 3)) || (iVar3 == 0x28)) {
    thunk_FUN_4a0ecbc4(auStack_48);
    if (local_18 == (undefined1 *)0x0) {
      local_18 = auStack_48;
      thunk_FUN_4a0ecab0(local_18,iVar3);
      thunk_FUN_4a0ebe90(local_18,(int)*(short *)(*(int *)(param_2 + 0x14) + 0x18) << 1);
      thunk_FUN_4a0ebe9c(local_18,*(undefined2 *)(param_2 + 6));
      thunk_FUN_4a0ecb88(local_18,*(undefined2 *)(param_2 + 4));
      uVar4 = FUN_4a093ac2(*(undefined4 *)(param_2 + 0x14),param_2);
      thunk_FUN_4a0e4d6c(local_18,uVar4,(uint)local_36 * (local_34 & 0xffff),uVar9);
    }
    puVar2 = PTR_DAT_4a0a6454;
    iVar3 = *(int *)PTR_DAT_4a0a6454;
    local_24 = iVar3 + 0x380;
    local_4c = *(undefined4 *)(iVar3 + 0x388);
    local_50 = *(undefined4 *)(iVar3 + 0x38c);
    local_54 = 0xffffffff;
    uVar5 = FUN_4a0a3a32(local_18,&local_54);
    iVar3 = *(int *)puVar2;
    uVar10 = *(uint *)(iVar3 + 0x38c);
    if (uVar5 < *(int *)(iVar3 + 0x380) - (uVar10 - *(int *)(iVar3 + 900))) {
      *(uint *)(iVar3 + 0x388) = uVar10;
      *(uint *)(iVar3 + 0x38c) = uVar10 + (uVar5 + 3 & 0xfffffffc);
    }
    else {
      uVar10 = thunk_FUN_4a161570();
    }
    FUN_4a0a3996(local_18,local_54,uVar10,(*(uint *)(param_2 + -0x10) & 0xf) >> 3);
    uVar8 = (uint)*(ushort *)(local_18 + 0x10);
    uVar5 = (uint)*(ushort *)(local_18 + 0x12);
    local_5c = 0;
    uVar6 = thunk_FUN_4a0e6b6c(local_18 + 8);
    uVar11 = uVar10;
    while (local_5c = local_5c + 1, (int)(uVar8 | uVar5) >> 1 != 0) {
      uVar7 = (int)uVar8 >> 1;
      uVar8 = 1;
      if (uVar7 != 0) {
        uVar8 = uVar7;
      }
      uVar7 = (int)uVar5 >> 1;
      uVar5 = 1;
      if (uVar7 != 0) {
        uVar5 = uVar7;
      }
      FUN_4a0a648e(*(undefined4 *)PTR_DAT_4a0a6458,param_2,local_5c,uVar11);
      uVar11 = (uVar6 >> 3) * uVar8 * uVar5 + uVar11;
    }
    *(undefined4 *)(local_24 + 8) = local_4c;
    *(undefined4 *)(local_24 + 0xc) = local_50;
    uVar5 = *(uint *)(*(int *)PTR_DAT_4a0a6454 + 900);
    if ((uVar11 < uVar5) || (uVar5 + *(int *)(*(int *)PTR_DAT_4a0a6454 + 0x380) <= uVar11)) {
      thunk_FUN_4a161530(uVar10);
    }
    thunk_FUN_4a0ecbf0(auStack_48);
  }
  else {
    uStack_30 = *(uint *)(param_2 + 0xc) >> 0x10;
    local_34 = *(uint *)(param_2 + 0xc) & 0xffff;
    local_2c = *(uint *)(param_2 + 0x10) & 0xffff;
    local_28 = *(uint *)(param_2 + 0x10) >> 0x10;
    FUN_4a07088a(param_2,local_34,uStack_30,&local_2c);
    FUN_4a09378a(*(undefined4 *)(param_2 + 0x14),uVar9,&local_34,uVar1);
  }
  return;
}



// Address: 4a0a645c

void FUN_4a0a645c(int param_1,undefined4 param_2)

{
  FUN_4a0a6acc(param_1,param_2,param_1 + 0x20,0x10);
  return;
}



// Address: 4a0a646e

void FUN_4a0a646e(undefined4 param_1,int param_2)

{
  FUN_4a0a6828(param_1,*(undefined4 *)(param_2 + 0x18));
  return;
}



// Address: 4a0a647a

void FUN_4a0a647a(int param_1,undefined4 param_2)

{
  FUN_4a0a6acc(param_1,param_2,param_1 + 0x30,0x100);
  return;
}



// Address: 4a0a648e

void FUN_4a0a648e(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  uint local_34;
  uint uStack_30;
  uint local_2c;
  uint local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  uStack_30 = *(uint *)(param_2 + 0xc) >> 0x10;
  local_2c = *(uint *)(param_2 + 0x10) & 0xffff;
  local_34 = *(uint *)(param_2 + 0xc) & 0xffff;
  local_28 = *(uint *)(param_2 + 0x10) >> 0x10;
  uStack_24 = param_1;
  iStack_20 = param_2;
  local_1c = param_3;
  uStack_18 = param_4;
  uVar1 = FUN_4a07088a(param_2,local_34,uStack_30,&local_2c);
  FUN_4a093908(*(undefined4 *)(param_2 + 0x14),&local_34,local_1c,*(undefined1 *)(param_2 + 0x1c),
               uVar1 != *(ushort *)(param_2 + 6),param_4,param_5);
  return;
}



// Address: 4a0a64d8

void FUN_4a0a64d8(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (*(int *)(param_3 + 0x14) != 0) {
    FUN_4a093cee(*(int *)(param_3 + 0x14),*(uint *)(param_3 + 0x10) & 0xffff,
                 *(uint *)(param_3 + 0x10) >> 0x10,*(uint *)(param_3 + 0xc) & 0xffff,
                 *(uint *)(param_3 + 0xc) >> 0x10);
  }
  return;
}



// Address: 4a0a6500

void FUN_4a0a6500(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined2 *param_8,undefined4 param_9,
                 undefined4 param_10)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int iStack_20;
  undefined4 local_1c;
  int local_18;
  
  puVar1 = PTR_DAT_4a0a6600;
  iVar4 = param_5 * param_2 + 0xf;
  uVar7 = (int)(((uint)(iVar4 >> 0x1f) >> 0x1c) + iVar4) >> 4;
  local_24 = param_1;
  iStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  if (*(int *)PTR_DAT_4a0a6600 == 0) {
    FUN_4a0a6838(param_1,uVar7,param_4,&local_30,&local_28,&local_2c,param_10);
    iVar4 = thunk_FUN_4a0015f0(0x10,param_5);
    uVar3 = (undefined2)((int)local_28 >> 1);
    if (param_5 < 0x11) {
      uVar3 = (undefined2)(local_28 << (iVar4 / 2 & 0xffU));
    }
    *param_8 = uVar3;
    param_8[1] = (short)local_2c;
    FUN_4a0708ae(param_8,*(undefined4 *)(*(int *)(local_24 + 0x10) + local_30 * 4));
    *(uint *)(param_8 + 6) = local_2c << 0x10 | local_28 & 0xffff;
    *(uint *)(param_8 + 8) = local_18 << 0x10 | uVar7 & 0xffff;
    *(char *)(param_8 + 0xe) = (char)param_5;
    param_8[2] = (short)local_18;
    param_8[3] = (short)param_2;
    uVar2 = FUN_4a033804(param_9);
    *(undefined1 *)((int)param_8 + 0x1d) = uVar2;
  }
  else {
    thunk_FUN_4a001134(param_8,*(int *)PTR_DAT_4a0a6600 + 0x44,100);
    *(undefined4 *)(param_8 + 0x30) = 0;
    *(undefined4 *)(param_8 + 10) = 0;
    FUN_4a0708ae(param_8,*(undefined4 *)(*(int *)puVar1 + 0x58));
  }
  piVar5 = (int *)0x0;
  if (param_5 == 4) {
    piVar5 = (int *)FUN_4a0a645c(local_24,param_7);
  }
  else if (param_5 == 8) {
    piVar5 = (int *)FUN_4a0a647a(local_24,param_7);
  }
  else {
    param_7 = 0;
  }
  *(int **)(param_8 + 0xc) = piVar5;
  uVar6 = 0;
  if (piVar5 != (int *)0x0) {
    uVar6 = FUN_4a1652c6(piVar5,*(undefined4 *)(*piVar5 + 8));
  }
  *(undefined4 *)(param_8 + 4) = uVar6;
  FUN_4a0a6664(local_24,param_5,param_6,local_1c,param_7,param_8,param_10);
  return;
}



// Address: 4a0a6604

void FUN_4a0a6604(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1[0x12] != 0) {
    FUN_4a16fa70(param_1 + 8);
    uVar1 = thunk_FUN_4a161570(param_1[0x12] * 0x30);
    param_1[2] = uVar1;
    uVar1 = thunk_FUN_4a161570(0x28);
    uVar1 = FUN_4a0a61d0(uVar1,param_1[2],param_1[0x12] * 0x30,0x28,s_Clut16_Bucket_4a0a6644);
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a0a6654

void FUN_4a0a6654(undefined4 param_1,int param_2)

{
  FUN_4a093b22(*(undefined4 *)(param_2 + 0x14));
  return;
}



// Address: 4a0a6664

void FUN_4a0a6664(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  uint local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  local_24 = param_1;
  iStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  if (param_2 == 4) {
    uVar1 = FUN_4a1652c6(*(int **)(param_6 + 0x18),*(undefined4 *)(**(int **)(param_6 + 0x18) + 8));
    uVar2 = 0x20;
  }
  else {
    if (param_2 != 8) goto LAB_4a0a669a;
    uVar1 = FUN_4a1652c6(*(int **)(param_6 + 0x18),*(undefined4 *)(**(int **)(param_6 + 0x18) + 8));
    uVar2 = 0x200;
  }
  thunk_FUN_4a000f84(uVar1,param_5,uVar2);
LAB_4a0a669a:
  if (*(int *)PTR_DAT_4a0a66d0 == 0) {
    uStack_30 = *(uint *)(param_6 + 0xc) >> 0x10;
    local_34 = *(uint *)(param_6 + 0xc) & 0xffff;
    uStack_2c = *(uint *)(param_6 + 0x10) & 0xffff;
    local_28 = *(uint *)(param_6 + 0x10) >> 0x10;
    FUN_4a0a6bb0(local_24,param_6,&local_34,param_3,param_4);
  }
  return;
}



// Address: 4a0a66d4

void FUN_4a0a66d4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_4a16fa70(param_1 + 0x30);
    uVar1 = thunk_FUN_4a161570(*(int *)(param_1 + 0x4c) * 0x210);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar1 = thunk_FUN_4a161570(0x28);
    uVar1 = FUN_4a0a61d0(uVar1,*(undefined4 *)(param_1 + 0xc),*(int *)(param_1 + 0x4c) * 0x210,0x208
                         ,s_Clut256_Bucket_4a0a6718);
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  return;
}



// Address: 4a0a6728

void FUN_4a0a6728(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = host_s3eConfigGetInt_thumb(&DAT_4a0a67c8,s_NumTPages_4a0a67bc,param_1 + 0x40);
  if (iVar1 == 0) {
    uVar2 = *(int *)(param_1 + 0x40) + 1U >> 1;
  }
  else {
    uVar2 = 8;
  }
  *(uint *)(param_1 + 0x40) = uVar2;
  iVar1 = host_s3eConfigGetInt_thumb(&DAT_4a0a67c8,s_NumTPagesNoMipMap_4a0a67cc,param_1 + 0x44);
  if (iVar1 == 0) {
    uVar2 = *(int *)(param_1 + 0x44) + 1U >> 1;
  }
  else {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0x44) = uVar2;
  iVar1 = host_s3eConfigGetInt_thumb(&DAT_4a0a67c8,s_NumPalettes16_4a0a67e0,param_1 + 0x48);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0xc0;
  }
  iVar1 = host_s3eConfigGetInt_thumb(&DAT_4a0a67c8,s_NumPalettes256_4a0a67f0,param_1 + 0x4c);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0x40;
  }
  iVar1 = host_s3eConfigGetInt_thumb(&DAT_4a0a67c8,s_NumTPageFreeRects_4a0a6800,param_1 + 0x50);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0x1c;
  }
  iVar1 = host_s3eConfigGetInt_thumb(&DAT_4a0a67c8,s_MaxTexturesPerTPage_4a0a6814,param_1 + 0x54);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x54) = 0x32;
  }
  return;
}



// Address: 4a0a6828

void FUN_4a0a6828(undefined4 param_1,int param_2)

{
  if ((param_2 != 0) && (*(short *)(param_2 + 4) != 0)) {
    *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + -1;
  }
  return;
}



// Address: 4a0a6838

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_4a0a6838(int param_1,int param_2,int param_3,uint *param_4,undefined4 param_5,undefined4 param_6
            ,int param_7)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int local_4c;
  undefined1 auStack_44 [8];
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  int *local_2c;
  uint local_28;
  int iStack_24;
  int local_20;
  int local_1c;
  uint *local_18;
  
  if (param_7 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x44);
  }
  iStack_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  if ((param_3 < 0x101) && (param_2 < 0x81)) {
    for (; uVar6 < *(uint *)(param_1 + 0x14);
        uVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + uVar6 * 4) + 0x14) + uVar6) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x10) + uVar6 * 4);
      if ((*(short *)(iVar5 + 0x18) == 0x80) &&
         (iVar5 = FUN_4a093b78(iVar5,local_20,local_1c,param_5,param_6), iVar5 != 0)) {
LAB_4a0a69bc:
        *local_18 = uVar6;
        return 1;
      }
    }
  }
  else {
    iVar5 = 0;
    uVar2 = param_2 - 1;
    if (uVar2 >> 0x10 == 0) {
      iVar5 = 0x10;
      uVar2 = uVar2 * 0x10000;
    }
    if (uVar2 >> 0x18 == 0) {
      iVar5 = iVar5 + 8;
      uVar2 = uVar2 << 8;
    }
    if (uVar2 >> 0x1c == 0) {
      iVar5 = iVar5 + 4;
      uVar2 = uVar2 << 4;
    }
    if (uVar2 >> 0x1e == 0) {
      iVar5 = iVar5 + 2;
      uVar2 = uVar2 << 2;
    }
    if (-1 < (int)uVar2) {
      iVar5 = iVar5 + 1;
    }
    local_34 = 1 << (0x20U - iVar5 & 0xff);
    while (uVar6 < *(uint *)(param_1 + 0x14)) {
      piVar7 = *(int **)(*(int *)(param_1 + 0x10) + uVar6 * 4);
      iVar5 = FUN_4a093eae(piVar7);
      if (iVar5 == 0) {
        iVar5 = FUN_4a093b78(piVar7,local_20,local_1c,param_5,param_6);
        if (iVar5 != 0) goto LAB_4a0a69bc;
LAB_4a0a6a10:
        uVar6 = piVar7[5] + uVar6;
      }
      else {
        sVar1 = 0x80;
        if (0x7f < local_34) {
          sVar1 = (short)local_34;
        }
        local_38 = (int)sVar1;
        uVar2 = local_38 - 1;
        iVar5 = 0;
        if (uVar2 >> 0x10 == 0) {
          iVar5 = 0x10;
          uVar2 = uVar2 * 0x10000;
        }
        if (uVar2 >> 0x18 == 0) {
          iVar5 = iVar5 + 8;
          uVar2 = uVar2 << 8;
        }
        if (uVar2 >> 0x1c == 0) {
          iVar5 = iVar5 + 4;
          uVar2 = uVar2 << 4;
        }
        if (uVar2 >> 0x1e == 0) {
          iVar5 = iVar5 + 2;
          uVar2 = uVar2 << 2;
        }
        if (-1 < (int)uVar2) {
          iVar5 = iVar5 + 1;
        }
        uVar2 = 0x100 >> (0x19U - iVar5 & 0xff);
        local_3c = thunk_FUN_4a0015f0(local_1c + uVar2 + -1,uVar2);
        iVar5 = local_3c * uVar2 * 0x10000;
        local_28 = uVar6 + local_3c;
        uVar2 = uVar6;
        local_4c = local_3c;
        do {
          local_4c = local_4c + -1;
          uVar2 = uVar2 + 1;
          if ((*(uint *)(param_1 + 0x14) <= uVar2) || (local_28 <= uVar2)) break;
          iVar3 = FUN_4a093eae(*(undefined4 *)(*(int *)(param_1 + 0x10) + uVar2 * 4));
        } while (iVar3 != 0);
        if (local_4c == 0) {
          FUN_4a09384e(piVar7,param_7,local_38,iVar5 >> 0x10);
          *(short *)(piVar7 + 6) = (short)local_38;
          *(short *)((int)piVar7 + 0x1a) = (short)((uint)iVar5 >> 0x10);
          piVar7[5] = local_3c;
          local_2c = piVar7 + 7;
          FUN_4a16e4a4();
          uVar4 = FUN_4a0a41ae(auStack_44,0,0,(int)(short)piVar7[6],
                               (int)*(short *)((int)piVar7 + 0x1a));
          FUN_4a16e534(piVar7 + 7,uVar4);
          iVar5 = FUN_4a093b78(piVar7,local_20,local_1c,param_5,param_6);
          if (iVar5 == 0) {
            if (param_7 != 0) {
              piVar7[1] = *piVar7 + 0x10000;
            }
            *(undefined2 *)(piVar7 + 6) = 0x80;
            *(undefined2 *)((int)piVar7 + 0x1a) = 0x100;
            piVar7[5] = 1;
            FUN_4a16e4a4(local_2c);
            uVar4 = FUN_4a0a41ae(auStack_44,0,0,0x80,0x100);
            FUN_4a16e534(local_2c,uVar4);
            goto LAB_4a0a6a10;
          }
          goto LAB_4a0a69bc;
        }
        uVar6 = uVar6 + 1;
      }
    }
  }
  if (param_7 == 0) {
    FUN_4a008004(PTR_s_Out_of_Mipmapped_T_Pages__Please_4a0a6ac8 + 0x68,
                 (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x44)) * 2,
                 *(int *)(param_1 + 0x44) << 1);
  }
  else {
    FUN_4a008004(PTR_s_Out_of_Mipmapped_T_Pages__Please_4a0a6ac8,
                 (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x44)) * 2);
  }
  iVar5 = host_s3eDebugIsDebuggerPresent_thumb();
  if (iVar5 != 0) {
    _DAT_fffffff4 = 0;
  }
  uVar4 = thunk_FUN_4a161570(0x4c);
  local_30 = FUN_4a093eec(uVar4,1,0);
  FUN_4a16f9b6(param_1 + 0x10,&local_30);
  iVar5 = FUN_4a093b78(local_30,local_20,local_1c,param_5,param_6);
  if (iVar5 != 0) {
    *local_18 = *(int *)(param_1 + 0x14) - 1;
    return 1;
  }
  return 0;
}



// Address: 4a0a6acc

int * FUN_4a0a6acc(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int *local_2c;
  
  uVar4 = **(uint **)PTR_DAT_4a0a6ba4;
  uVar8 = 0xffffffff;
  uVar1 = 2;
  if (param_4 != 0x10) {
    uVar1 = 1;
  }
  for (uVar6 = 0; uVar6 < (uint)param_3[1]; uVar6 = uVar6 + 1) {
    piVar7 = *(int **)(*param_3 + uVar6 * 4);
    if ((uVar4 & uVar1) != 0) {
      uVar2 = FUN_4a1652c6(piVar7,*(undefined4 *)(*piVar7 + 8));
      iVar3 = FUN_4a0d3818(param_2,uVar2,param_4);
      if (iVar3 != 0) {
        *(short *)(piVar7 + 1) = (short)piVar7[1] + 1;
        return piVar7;
      }
    }
    if ((short)piVar7[1] == 0) {
      uVar8 = uVar6;
    }
  }
  if (-1 < (int)uVar8) {
    *(undefined2 *)(*(int *)(*param_3 + uVar8 * 4) + 4) = 1;
    return *(int **)(*param_3 + uVar8 * 4);
  }
  local_2c = (int *)0x0;
  if (param_4 == 0x10) {
    local_2c = (int *)FUN_4a102134(0x28);
    puVar5 = PTR_DAT_4a0a6ba8;
  }
  else {
    if (param_4 != 0x100) goto LAB_4a0a6b82;
    local_2c = (int *)FUN_4a060258(0x208);
    puVar5 = PTR_DAT_4a0a6bac;
  }
  *local_2c = (int)(puVar5 + 8);
  *(undefined2 *)(local_2c + 1) = 1;
LAB_4a0a6b82:
  FUN_4a16fa70(param_3,param_3[1] + 1);
  *(int **)(*param_3 + param_3[1] * 4) = local_2c;
  param_3[1] = param_3[1] + 1;
  return local_2c;
}



// Address: 4a0a6bb0

void FUN_4a0a6bb0(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,uint param_5
                 )

{
  if ((0 < (int)param_3[2]) && (0 < (int)param_3[3])) {
    FUN_4a093af0(*(undefined4 *)(param_2 + 0x14),*param_3,param_3[1],param_3[2],param_3[3],param_4,
                 param_5 >> 1);
  }
  return;
}



// Address: 4a0a6be0

undefined8 FUN_4a0a6be0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(byte *)(param_1 + 0x1c) = (*(byte *)(param_1 + 0x1c) >> 1 & 0x7e) << 1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  uStack_20 = param_2;
  iStack_1c = param_3;
  uStack_18 = param_4;
  FUN_4a16f988(param_1 + 0x10);
  iVar2 = FUN_4a16faaa(param_1 + 0x20,0);
  iVar2 = FUN_4a16faaa(iVar2 + 0x10,0);
  iVar6 = iVar2 + -0x30;
  *(int *)PTR_DAT_4a0a6cb4 = iVar6;
  FUN_4a0a6728(iVar6);
  if (*(int *)(iVar2 + 0x18) != 0) {
    FUN_4a0a6604(iVar6);
  }
  if (*(int *)(iVar2 + 0x1c) != 0) {
    FUN_4a0a66d4(iVar6);
  }
  iVar3 = thunk_FUN_4a161570((DAT_4a0a6cb8 * *(int *)(iVar2 + 0x10) +
                             *(int *)(iVar2 + 0x14) * 0x8000) * 2);
  *(int *)(iVar2 + 0x28) = iVar3;
  iVar5 = *(int *)(iVar2 + 0x10) + *(int *)(iVar2 + 0x14);
  iStack_1c = iVar2 + -0x20;
  *(int *)(iVar2 + 0x10) = iVar5;
  if (*(int *)(iVar2 + -0x18) < iVar5) {
    FUN_4a16f95c();
  }
  for (uVar7 = 0; uVar7 < *(uint *)(iVar2 + 0x10); uVar7 = uVar7 + 1) {
    bVar1 = *(uint *)(iVar2 + 0x14) <= uVar7;
    uVar4 = thunk_FUN_4a161570(0x4c);
    uStack_20 = FUN_4a093eec(uVar4,bVar1,iVar3);
    FUN_4a16f9b6(iStack_1c,&uStack_20);
    iVar5 = DAT_4a0a6cb8;
    if (!bVar1) {
      iVar5 = 0x8000;
    }
    iVar3 = iVar5 * 2 + iVar3;
  }
  return CONCAT44(uStack_20,iVar6);
}



// Address: 4a0a6cbc

int FUN_4a0a6cbc(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)param_1[4];
  piVar5 = piVar4 + param_1[5];
  for (; piVar4 != piVar5; piVar4 = piVar4 + 1) {
    if (*piVar4 != 0) {
      FUN_4a093fd4();
      thunk_FUN_4a161530();
    }
  }
  FUN_4a16f988(param_1 + 4);
  piVar4 = (int *)param_1[8];
  piVar5 = piVar4 + param_1[9];
  for (; piVar4 != piVar5; piVar4 = piVar4 + 1) {
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      FUN_4a1652c6(piVar1,*(undefined4 *)(*piVar1 + 4));
    }
  }
  FUN_4a16fa5e(param_1 + 8);
  piVar4 = (int *)param_1[0xc];
  piVar5 = piVar4 + param_1[0xd];
  for (; piVar4 != piVar5; piVar4 = piVar4 + 1) {
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      FUN_4a1652c6(piVar1,*(undefined4 *)(*piVar1 + 4));
    }
  }
  FUN_4a16fa5e();
  if (param_1[0x12] != 0) {
    thunk_FUN_4a161530(param_1[2]);
    piVar4 = (int *)*param_1;
    if (piVar4 != (int *)0x0) {
      FUN_4a1652c6(piVar4,*(undefined4 *)(*piVar4 + 4));
    }
  }
  if (param_1[0x13] != 0) {
    thunk_FUN_4a161530(param_1[3]);
    piVar4 = (int *)param_1[1];
    if (piVar4 != (int *)0x0) {
      FUN_4a1652c6(piVar4,*(undefined4 *)(*piVar4 + 4));
    }
  }
  thunk_FUN_4a161530(param_1[0x16]);
  *(undefined4 *)PTR_DAT_4a0a6db4 = 0;
  iVar2 = FUN_4a16fafa(param_1 + 0xc);
  iVar2 = FUN_4a16fafa(iVar2 + -0x10);
  for (uVar3 = 0; uVar3 < *(uint *)(iVar2 + -0xc); uVar3 = uVar3 + 1) {
  }
  if ((*(byte *)(iVar2 + -4) & 1) == 0) {
    FUN_4a0a6f48(*(undefined4 *)(iVar2 + -0x10),4);
    *(undefined4 *)(iVar2 + -0x10) = 0;
  }
  return iVar2 + -0x20;
}



// Address: 4a0a6cc4

int FUN_4a0a6cc4(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)param_1[4];
  piVar5 = piVar4 + param_1[5];
  for (; piVar4 != piVar5; piVar4 = piVar4 + 1) {
    if (*piVar4 != 0) {
      FUN_4a093fd4();
      thunk_FUN_4a161530();
    }
  }
  FUN_4a16f988(param_1 + 4);
  piVar4 = (int *)param_1[8];
  piVar5 = piVar4 + param_1[9];
  for (; piVar4 != piVar5; piVar4 = piVar4 + 1) {
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      FUN_4a1652c6(piVar1,*(undefined4 *)(*piVar1 + 4));
    }
  }
  FUN_4a16fa5e(param_1 + 8);
  piVar4 = (int *)param_1[0xc];
  piVar5 = piVar4 + param_1[0xd];
  for (; piVar4 != piVar5; piVar4 = piVar4 + 1) {
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      FUN_4a1652c6(piVar1,*(undefined4 *)(*piVar1 + 4));
    }
  }
  FUN_4a16fa5e();
  if (param_1[0x12] != 0) {
    thunk_FUN_4a161530(param_1[2]);
    piVar4 = (int *)*param_1;
    if (piVar4 != (int *)0x0) {
      FUN_4a1652c6(piVar4,*(undefined4 *)(*piVar4 + 4));
    }
  }
  if (param_1[0x13] != 0) {
    thunk_FUN_4a161530(param_1[3]);
    piVar4 = (int *)param_1[1];
    if (piVar4 != (int *)0x0) {
      FUN_4a1652c6(piVar4,*(undefined4 *)(*piVar4 + 4));
    }
  }
  thunk_FUN_4a161530(param_1[0x16]);
  *(undefined4 *)PTR_DAT_4a0a6db4 = 0;
  iVar2 = FUN_4a16fafa(param_1 + 0xc);
  iVar2 = FUN_4a16fafa(iVar2 + -0x10);
  for (uVar3 = 0; uVar3 < *(uint *)(iVar2 + -0xc); uVar3 = uVar3 + 1) {
  }
  if ((*(byte *)(iVar2 + -4) & 1) == 0) {
    FUN_4a0a6f48(*(undefined4 *)(iVar2 + -0x10),4);
    *(undefined4 *)(iVar2 + -0x10) = 0;
  }
  return iVar2 + -0x20;
}



// Address: 4a0a6de4

undefined4 *
FUN_4a0a6de4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_4a0a41c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  *puVar1 = PTR_PTR_4a0a6e58;
  puVar1[8] = 0;
  puVar1[7] = param_8;
  uVar2 = thunk_FUN_4a161570(param_8);
  puVar1[8] = uVar2;
  FUN_4a000f84(uVar2,param_9,puVar1[7]);
  return puVar1;
}



// Address: 4a0a6ea0

undefined4 * FUN_4a0a6ea0(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a0a6ed4;
  if (param_1[8] != 0) {
    thunk_FUN_4a161530();
    param_1[8] = 0;
  }
  return param_1;
}



// Address: 4a0a6ed8

void FUN_4a0a6ed8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_4a0a6f14();
  FUN_4a1652cc(uVar1,param_1,param_2);
  return;
}



// Address: 4a0a6ef6

void FUN_4a0a6ef6(undefined4 param_1,undefined4 param_2)

{
  FUN_4a161530(param_2);
  return;
}



// Address: 4a0a6f04

void FUN_4a0a6f04(undefined4 param_1,undefined4 param_2)

{
  FUN_4a161570(param_2);
  return;
}



// Address: 4a0a6f14

undefined4 FUN_4a0a6f14(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar1 = PTR_DAT_4a0a6f28;
  if (*(int *)PTR_DAT_4a0a6f28 == 0) {
    puVar2 = (undefined4 *)(PTR_DAT_4a0a6f28 + 4);
    *puVar2 = PTR_PTR_4a0a6f2c;
    *(undefined4 **)puVar1 = puVar2;
  }
  return *(undefined4 *)puVar1;
}



// Address: 4a0a6f48

void FUN_4a0a6f48(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_4a0a6f14();
  FUN_4a1652ca(piVar1,param_1,param_2,*(undefined4 *)(*piVar1 + 0xc));
  return;
}



// Address: 4a0a6f64

void FUN_4a0a6f64(int param_1)

{
  if (param_1 != 0) {
    FUN_4a0a6f78();
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a0a6f78

void FUN_4a0a6f78(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a0a6f8c;
  if (param_1 == *(undefined4 **)PTR_DAT_4a0a6f90) {
    *(undefined4 *)PTR_DAT_4a0a6f90 = 0;
  }
  return;
}



// Address: 4a0a6f98

undefined4
FUN_4a0a6f98(int *param_1,int param_2,undefined4 param_3,undefined2 *param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  undefined2 *local_28;
  int *piStack_24;
  int iStack_20;
  undefined4 local_1c;
  undefined2 *puStack_18;
  
  if (param_4 == (undefined2 *)0x0) {
LAB_4a0a70ae:
    uVar3 = 0;
  }
  else {
    piStack_24 = param_1;
    iStack_20 = param_2;
    local_1c = param_3;
    puStack_18 = param_4;
    uVar1 = FUN_4a1652c8(param_1,*param_4,*(undefined4 *)(*param_1 + 0x18));
    uVar1 = uVar1 ^ 1;
    if (uVar1 != 0) {
      if (*(int *)(param_2 + 0xb4) == -1) {
        thunk_FUN_4a1502c4(1,param_2 + 0xb4);
      }
      thunk_FUN_4a14fd70(DAT_4a0a70d0,*(undefined4 *)(param_2 + 0xb4));
      uVar3 = DAT_4a0a70dc;
      local_44 = *(undefined4 *)PTR_DAT_4a0a70d4;
      uStack_40 = *(undefined4 *)(PTR_DAT_4a0a70d4 + 4);
      uStack_3c = *(undefined4 *)(PTR_DAT_4a0a70d4 + 8);
      local_38 = *(undefined4 *)(PTR_DAT_4a0a70d4 + 0xc);
      thunk_FUN_4a150ac4(local_1c,0,DAT_4a0a70dc,2,2,0,DAT_4a0a70dc,DAT_4a0a70d8,&local_44);
      thunk_FUN_4a150ac4(local_1c,1,uVar3,1,1,0,uVar3,DAT_4a0a70d8,&local_44);
    }
    if (param_4[1] == 1) {
      local_2c = 0x40;
    }
    else {
      local_2c = 0x48;
    }
    local_2c = (int)param_4 + local_2c;
    local_34 = *(uint *)(param_4 + 10);
    local_30 = *(uint *)(param_4 + 8);
    uVar8 = 0;
    if (-1 < *(int *)(param_2 + 0x34) << 0xd) {
      uVar8 = *(uint *)PTR_DAT_4a0a70e0;
    }
    if (uVar1 == 0) {
      FUN_4a1506f8(DAT_4a0a70d0 + -0xec,1,&local_2c);
    }
    for (uVar7 = 0; uVar7 < *(uint *)(param_4 + 6); uVar7 = uVar7 + 1) {
      uVar4 = local_30 >> (uVar7 & 0xff);
      uVar6 = 1;
      if (uVar4 != 0) {
        uVar6 = uVar4;
      }
      uVar5 = local_34 >> (uVar7 & 0xff);
      uVar4 = 1;
      if (uVar5 != 0) {
        uVar4 = uVar5;
      }
      local_28 = param_4 + uVar7 * 2;
      local_38 = *(undefined4 *)(local_28 + 0xc);
      if (uVar8 <= uVar7) {
        if (uVar1 == 0) {
          thunk_FUN_4a14ff14(local_1c,uVar7 - uVar8,*(undefined4 *)(param_4 + 4),uVar6,uVar4,0,
                             local_38,local_2c);
        }
        iVar2 = FUN_4a051618(param_5,local_1c,uVar7 - uVar8,local_38,1);
        if (iVar2 == 0) goto LAB_4a0a70ae;
      }
      local_2c = *(int *)(local_28 + 0xc) + local_2c;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// Address: 4a0a70ec

void FUN_4a0a70ec(undefined4 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_4a0a70f8;
  param_1[2] = param_1;
  param_1[1] = param_1;
  *param_1 = puVar1;
  return;
}



// Address: 4a0a70fc

void FUN_4a0a70fc(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a0a7134

void FUN_4a0a7134(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  thunk_FUN_4a00121c(param_1 + 0xa8,0xa8,param_3,param_4,param_1,param_2);
  puVar1 = PTR_PTR_4a0a71c4;
  uVar6 = 0;
  do {
    iVar2 = FUN_4a1503f0(param_3,*(undefined4 *)(puVar1 + uVar6 * 0xc));
    *(int *)(param_1 + uVar6 * 4) = iVar2;
    if ((iVar2 != -1) && (iVar2 = *(int *)(puVar1 + uVar6 * 0xc + 4), iVar2 != 0)) {
      uVar3 = iVar2 * 4;
      uVar5 = *(uint *)PTR_DAT_4a0a71c8;
      if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
        *(uint *)PTR_DAT_4a0a71c8 = uVar5 + iVar2 * -4;
        iVar2 = *(int *)PTR_DAT_4a0a71cc;
        *(uint *)PTR_DAT_4a0a71cc = iVar2 + uVar3;
      }
      else {
        iVar2 = 0;
      }
      *(int *)(uVar6 * 4 + param_1 + 0xa8) = iVar2;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x2a);
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  do {
    iVar2 = FUN_4a1502f8(param_3,*(undefined4 *)(PTR_PTR_4a0a71c4 + uVar6 * 4 + -0x24));
    *(int *)(uVar6 * 4 + param_1 + 0x150) = iVar2;
    iVar4 = *(int *)(param_1 + 0x174);
    if (iVar4 < iVar2 + 1) {
      iVar4 = iVar2 + 1;
    }
    uVar6 = uVar6 + 1;
    *(int *)(param_1 + 0x174) = iVar4;
  } while (uVar6 < 9);
  return;
}



// Address: 4a0a71d0

undefined4 FUN_4a0a71d0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 != 0x2b) {
    if (param_2 == 0x34) {
      iVar2 = FUN_4a0083c0(0x11);
      if ((iVar2 == 0) && (iVar2 = FUN_4a0083c0(0x1e), iVar2 == 0)) {
        return 0;
      }
      return 1;
    }
    if (param_2 != 0x35) {
      return 0;
    }
  }
  uVar1 = FUN_4a0083c0(0x11);
  return uVar1;
}



// Address: 4a0a724c

void FUN_4a0a724c(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a0a7258;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



// Address: 4a0a725c

void FUN_4a0a725c(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a0a726e

void FUN_4a0a726e(void)

{
  FUN_4a0083c0(0x16);
  return;
}



// Address: 4a0a72c0

void FUN_4a0a72c0(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a0a72d2

void FUN_4a0a72d2(void)

{
  FUN_4a0083c0(0x52);
  return;
}



// Address: 4a0a72ec

undefined4 FUN_4a0a72ec(undefined4 param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar4;
  int iVar3;
  
  if ((param_3 < 0) || (-1 < param_3 << 0x1c)) {
    uVar1 = *(ushort *)(param_2 + 0x10);
    uVar2 = *(ushort *)(param_2 + 0x12);
    uVar4 = uVar2;
    if (uVar1 < uVar2) {
      uVar4 = uVar1;
    }
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    iVar3 = thunk_FUN_4a0066d8(uVar2,uVar4);
    if (iVar3 < 5) {
      uVar2 = 8;
      if (param_4 == 0x20) {
        uVar2 = 0x20;
      }
      iVar3 = *(int *)(param_2 + 8);
      if ((((3 < iVar3 - 0x20U) && (iVar3 != 0x27)) && (iVar3 != 0x34)) &&
         (((iVar3 != 0x2b && (iVar3 != 0x35)) && ((uVar1 < 0x801 && (uVar2 <= uVar1)))))) {
        return 1;
      }
    }
  }
  return 0;
}



// Address: 4a0a7364

void FUN_4a0a7364(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a0a7378

void FUN_4a0a7378(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  byte bVar2;
  
  FUN_4a0c8ddc(param_2,*(undefined4 *)(param_1 + 8));
  bVar2 = *(char *)(param_1 + 0x28) != '\0';
  if ((bool)bVar2) {
    (**(code **)(*param_2 + 0x1c))
              (param_2,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
               *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x24));
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    bVar2 = bVar2 | 2;
  }
  else if (*(int *)(param_1 + 0x10) == 3) {
    uVar1 = FUN_4a13cff4(param_3);
    (**(code **)(*param_2 + 0x4c))
              (param_2,uVar1,param_4,param_5,param_6,bVar2,*(undefined4 *)(param_1 + 0xc));
    uVar1 = FUN_4a13cff4(param_3);
    (**(code **)(*param_2 + 0x4c))
              (param_2,uVar1,param_4,param_5,param_6,2,*(undefined4 *)(param_1 + 0x20));
    return;
  }
  uVar1 = FUN_4a13cff4(param_3);
  (**(code **)(*param_2 + 0x4c))
            (param_2,uVar1,param_4,param_5,param_6,bVar2,*(undefined4 *)(param_1 + 0xc));
  return;
}



// Address: 4a0a74b4

void FUN_4a0a74b4(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  byte bVar1;
  
  FUN_4a0c8ddc(param_2,*(undefined4 *)(param_1 + 8));
  bVar1 = *(char *)(param_1 + 0x28) != '\0';
  if ((bool)bVar1) {
    (**(code **)(*param_2 + 0x1c))
              (param_2,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
               *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x24));
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    bVar1 = bVar1 | 2;
  }
  else if (*(int *)(param_1 + 0x10) == 3) {
    (**(code **)(*param_2 + 0x4c))
              (param_2,param_3,param_4,param_5,param_6,bVar1,*(undefined4 *)(param_1 + 0xc));
    (**(code **)(*param_2 + 0x4c))
              (param_2,param_3,param_4,param_5,param_6,2,*(undefined4 *)(param_1 + 0x20));
    return;
  }
  (**(code **)(*param_2 + 0x4c))
            (param_2,param_3,param_4,param_5,param_6,bVar1,*(undefined4 *)(param_1 + 0xc));
  return;
}



// Address: 4a0a75d0

void FUN_4a0a75d0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  byte bVar1;
  
  FUN_4a0c8ddc(param_2,*(undefined4 *)(param_1 + 8));
  bVar1 = *(char *)(param_1 + 0x28) != '\0';
  if ((bool)bVar1) {
    (**(code **)(*param_2 + 0x1c))
              (param_2,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
               *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x24));
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    bVar1 = bVar1 | 2;
  }
  else if (*(int *)(param_1 + 0x10) == 3) {
    (**(code **)(*param_2 + 0x50))
              (param_2,param_3,param_4,param_5,param_6,param_7,param_8,bVar1,
               *(undefined4 *)(param_1 + 0xc));
    (**(code **)(*param_2 + 0x50))
              (param_2,param_3,param_4,param_5,param_6,param_7,param_8,2,
               *(undefined4 *)(param_1 + 0x20));
    return;
  }
  (**(code **)(*param_2 + 0x50))
            (param_2,param_3,param_4,param_5,param_6,param_7,param_8,bVar1,
             *(undefined4 *)(param_1 + 0xc));
  return;
}



// Address: 4a0a7828

void FUN_4a0a7828(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0a5f30();
  *puVar1 = PTR_PTR_4a0a786c;
  puVar1[4] = 1;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0xffffff;
  puVar1[9] = 0x30000000;
  *(undefined1 *)(puVar1 + 10) = 0;
  return;
}



// Address: 4a0a7890

undefined2 *
FUN_4a0a7890(undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,int param_6,int *param_7)

{
  int *piVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  
  iVar6 = 0;
  if (param_5 != 0) {
    piVar1 = param_7 + -1;
    if ((param_5 & 1) != 0) {
      iVar6 = *param_7;
      piVar1 = param_7;
    }
    iVar5 = piVar1[1];
    iVar4 = 0;
    for (uVar3 = param_5 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      iVar6 = iVar6 + iVar5;
      iVar5 = piVar1[3];
      iVar4 = iVar4 + piVar1[2];
      piVar1 = piVar1 + 2;
    }
    iVar6 = iVar6 + iVar4;
  }
  puVar2 = (undefined2 *)thunk_FUN_4a161570(iVar6 + 0x48);
  puVar2[1] = 2;
  *(int *)(puVar2 + 2) = iVar6 + 0x48;
  *puVar2 = param_1;
  *(uint *)(puVar2 + 6) = param_5;
  *(undefined4 *)(puVar2 + 8) = param_3;
  *(undefined4 *)(puVar2 + 4) = param_2;
  puVar8 = puVar2 + 0x24;
  *(undefined4 *)(puVar2 + 10) = param_4;
  uVar3 = 0;
  if (param_5 != 0) {
    do {
      FUN_4a000f84(puVar8,*(undefined4 *)(param_6 + uVar3 * 4),param_7[uVar3]);
      uVar7 = uVar3 + 1;
      puVar8 = (undefined2 *)((int)puVar8 + param_7[uVar3]);
      *(int *)(puVar2 + uVar3 * 2 + 0xc) = param_7[uVar3];
      uVar3 = uVar7;
    } while (uVar7 < param_5);
  }
  return puVar2;
}



// Address: 4a0a7970

undefined8
FUN_4a0a7970(undefined4 *param_1,undefined *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *local_18;
  undefined *local_14;
  undefined *local_10;
  
  local_10 = (undefined *)param_4;
  local_18 = param_2;
  local_14 = (undefined *)param_3;
  if (*(int *)(PTR_DAT_4a0a79d0 + 8) == 0) {
    if (PTR_DAT_4a0a79d0[1] != '\0') {
      uVar2 = host_s3eMemoryGetInt_thumb(0);
      param_1[3] = uVar2;
      host_s3eMemorySetInt_thumb(0,6);
      uVar2 = FUN_4a00b94c();
      param_1[4] = uVar2;
      FUN_4a00b958(0);
    }
  }
  else {
    FUN_4a161586(param_1);
    puVar1 = PTR_DAT_4a0a79d8;
    local_10 = PTR_FUN_4a047a1c_1_4a0a79d4;
    if ((undefined *)param_1[2] != PTR_FUN_4a047a1c_1_4a0a79d4) {
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      *(undefined4 *)PTR_DAT_4a0a79d8 = *param_1;
      *(undefined4 *)(puVar1 + 4) = uVar2;
      *(undefined4 *)(puVar1 + 8) = uVar3;
    }
    local_18 = PTR_LAB_4a0483dc_1_4a0a79dc;
    local_14 = PTR_FUN_4a04c794_1_4a0a79e0;
    FUN_4a1615a8(&local_18);
  }
  return CONCAT44(local_18,param_1);
}



// Address: 4a0a79e4

int FUN_4a0a79e4(int param_1)

{
  if (*(int *)(PTR_DAT_4a0a7a14 + 8) == 0) {
    if (PTR_DAT_4a0a7a14[1] != '\0') {
      host_s3eMemorySetInt_thumb(0,*(undefined4 *)(param_1 + 0xc));
      FUN_4a00b958(*(undefined4 *)(param_1 + 0x10));
    }
  }
  else {
    FUN_4a1615a8(param_1);
  }
  return param_1;
}



// Address: 4a0a7a18

void FUN_4a0a7a18(void)

{
  FUN_4a0083c0(0x53);
  return;
}



// Address: 4a0a7a68

void FUN_4a0a7a68(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a0a7a7a

void FUN_4a0a7a7a(int param_1)

{
  FUN_4a0a5a00(*(undefined4 *)(param_1 + 0xc));
  return;
}



// Address: 4a0a7a88

void FUN_4a0a7a88(int param_1)

{
  FUN_4a0a597c(*(undefined4 *)(param_1 + 0xc));
  return;
}



// Address: 4a0a7a96

void FUN_4a0a7a96(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a0a7aa8

void FUN_4a0a7aa8(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_4a057044();
    FUN_4a1652c6(param_1,*(undefined4 *)(iVar1 + 8));
    return;
  }
  return;
}



// Address: 4a0a7ab8

void FUN_4a0a7ab8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_20 [8];
  undefined *local_18;
  undefined *local_14;
  undefined *local_10;
  
  puVar1 = PTR_PTR_4a0a7b08;
  local_10 = PTR_PTR_4a0a7b08;
  puVar3 = (undefined4 *)thunk_FUN_4a161570(4);
  puVar2 = PTR_DAT_4a0a7b0c;
  *puVar3 = puVar1;
  *(undefined4 **)puVar2 = puVar3;
  puVar1 = PTR_PTR_4a0a7b10;
  local_14 = PTR_PTR_4a0a7b10;
  puVar3 = (undefined4 *)thunk_FUN_4a161570(4);
  *puVar3 = puVar1;
  *(undefined4 **)(puVar2 + 4) = puVar3;
  puVar1 = PTR_PTR_4a0a7b14;
  local_18 = PTR_PTR_4a0a7b14;
  puVar3 = (undefined4 *)thunk_FUN_4a161570(4);
  *puVar3 = puVar1;
  *(undefined4 **)(puVar2 + 8) = puVar3;
  FUN_4a0a724c(auStack_20);
  thunk_FUN_4a161570(8);
  uVar4 = FUN_4a0a724c();
  *(undefined4 *)(puVar2 + 0xc) = uVar4;
  return;
}



// Address: 4a0a7b18

undefined4 FUN_4a0a7b18(int param_1)

{
  return *(undefined4 *)(PTR_DAT_4a0a7b20 + param_1 * 4);
}



// Address: 4a0a7b24

undefined4 FUN_4a0a7b24(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(PTR_DAT_4a0a7b4c + iVar2 * 8) == 0) {
      return 0;
    }
    if (*(int *)(PTR_DAT_4a0a7b4c + iVar2 * 8) == param_1) break;
    iVar2 = iVar2 + 1;
  }
  uVar1 = FUN_4a0a7b18(*(undefined4 *)(PTR_DAT_4a0a7b4c + iVar2 * 8 + 4));
  return uVar1;
}



// Address: 4a0a7b50

void FUN_4a0a7b50(void)

{
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  
  puVar1 = PTR_DAT_4a0a7b74;
  uVar3 = 0;
  do {
    piVar2 = *(int **)(puVar1 + uVar3 * 4);
    if (piVar2 != (int *)0x0) {
      FUN_4a1652c6(piVar2,*(undefined4 *)(*piVar2 + 4));
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  return;
}



// Address: 4a0a7b98

void FUN_4a0a7b98(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined2 local_18;
  undefined2 uStack_16;
  
  piVar3 = *(int **)(param_1 + 0xc);
  uVar1 = piVar3[0xd];
  piVar3[0xd] = uVar1 & 0xffffdfff;
  iVar2 = piVar3[0x2f];
  if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(*(int *)(param_1 + 0x10) + 8) != 0)) {
    thunk_FUN_4a0ecc0c(piVar3 + 4);
  }
  *(undefined4 *)PTR_DAT_4a0a7bf4 = *(undefined4 *)(param_1 + 0x14);
  FUN_4a1652c6(piVar3,*(undefined4 *)(*piVar3 + 0x3c));
  local_18 = (undefined2)iVar2;
  *(undefined2 *)(piVar3 + 0x2f) = local_18;
  uStack_16 = (undefined2)((uint)iVar2 >> 0x10);
  *(undefined2 *)((int)piVar3 + 0xbe) = uStack_16;
  if ((uVar1 & 0x3fff) >> 0xd != 0) {
    piVar3[0xd] = piVar3[0xd] | 0x2000;
  }
  return;
}



// Address: 4a0a7bf8

void FUN_4a0a7bf8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 0)) && (*(int *)(iVar1 + 0x1c) == 0)) &&
     ((*(uint *)(*(int *)(param_1 + 0xc) + 0x34) & 1) != 0)) {
    if (*(int *)(PTR_DAT_4a0a7c48 + 4) == 0) {
      thunk_FUN_4a0ecc0c(iVar1,*(int *)(param_1 + 0xc) + 0x10,iVar1,0,param_4);
      thunk_FUN_4a0e4d6c(*(undefined4 *)(param_1 + 0x10),0,0,0,0);
    }
    else {
      PTR_DAT_4a0a7c48[2] = 1;
      FUN_4a0616ac();
    }
  }
  return;
}



// Address: 4a0a7c4c

void FUN_4a0a7c4c(int param_1)

{
  if (param_1 != 0) {
    FUN_4a0a7c60();
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a0a7c60

undefined4 * FUN_4a0a7c60(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a0a7c80;
  if (param_1[4] != 0) {
    thunk_FUN_4a0ecbf0();
    thunk_FUN_4a161530();
  }
  return param_1;
}



// Address: 4a0a7c84

void FUN_4a0a7c84(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 0xc))(param_3);
  }
  iVar3 = 0;
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 8);
  }
  piVar2 = *(int **)(iVar1 + param_2 * 4);
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x4c) + 8);
  }
  *(int **)(iVar3 + param_2 * 4) = param_3;
  return;
}



// Address: 4a0a7d14

void FUN_4a0a7d14(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  FUN_4a0afc60();
  piVar3 = *(int **)(param_1 + 0x3c);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  piVar4 = *(int **)(param_2 + 0x3c);
  if ((piVar4 != (int *)0x0) && (iVar1 = (**(code **)(*piVar4 + 8))(piVar4), iVar1 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  *(int **)(param_2 + 0x3c) = piVar3;
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x4c) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x4c) + 8);
    }
    piVar3 = *(int **)(iVar2 + iVar1 * 4);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))(piVar3);
    }
    if (*(int *)(param_2 + 0x4c) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_2 + 0x4c) + 8);
    }
    piVar4 = *(int **)(iVar2 + iVar1 * 4);
    if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    if (*(int *)(param_2 + 0x4c) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_2 + 0x4c) + 8);
    }
    *(int **)(iVar2 + iVar1 * 4) = piVar3;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  piVar3 = *(int **)(param_1 + 0x54);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  piVar4 = *(int **)(param_2 + 0x54);
  if ((piVar4 != (int *)0x0) && (iVar1 = (**(code **)(*piVar4 + 8))(piVar4), iVar1 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  *(int **)(param_2 + 0x54) = piVar3;
  piVar3 = *(int **)(param_1 + 0x58);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  piVar4 = *(int **)(param_2 + 0x58);
  if ((piVar4 != (int *)0x0) && (iVar1 = (**(code **)(*piVar4 + 8))(piVar4), iVar1 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  *(int **)(param_2 + 0x58) = piVar3;
  return;
}



// Address: 4a0a7ef0

void FUN_4a0a7ef0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar2 = *(int **)(param_1 + 0x54);
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *(int **)(param_1 + 0x54) = param_2;
  return;
}



// Address: 4a0a7f5c

void FUN_4a0a7f5c(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar2 = *(int **)(param_1 + 0x58);
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *(int **)(param_1 + 0x58) = param_2;
  return;
}



// Address: 4a0a7fc8

void FUN_4a0a7fc8(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = (undefined4 *)FUN_4a0afe80();
  *puVar2 = PTR_PTR_4a0a80d4;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  piVar3 = (int *)FUN_4a0c6bc0(puVar2 + 0x10);
  puVar1 = PTR_PTR_4a0a80d8;
  piVar3[2] = 0;
  piVar3[3] = 0;
  *piVar3 = (int)puVar1;
  iVar4 = FUN_4a15e080(8);
  if (iVar4 == 0) {
    iVar4 = FUN_4a1669a8();
  }
  iVar5 = 0;
  do {
    *(undefined4 *)(iVar4 + iVar5 * 4) = 0;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  thunk_FUN_4a161570(0x18);
  puVar2 = (undefined4 *)FUN_4a0c0628();
  puVar2[3] = 4;
  puVar2[4] = 2;
  puVar1 = PTR_PTR_4a0a80dc;
  *puVar2 = PTR_PTR_4a0a80dc;
  puVar2[2] = iVar4;
  *(undefined1 *)(puVar2 + 5) = 1;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)(puVar1 + 0xc))(puVar2);
  }
  (**(code **)(*piVar3 + 0x1c))(piVar3);
  piVar3[2] = 2;
  piVar3[3] = (int)puVar2;
  piVar3[5] = 0;
  iVar5 = 0;
  iVar4 = 1;
  piVar3[6] = 0;
  do {
    iVar4 = iVar4 + 1;
    if (piVar3[3] == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(piVar3[3] + 8);
    }
    *(undefined4 *)(iVar6 + iVar5 * 4) = 0;
    iVar5 = iVar5 + 1;
  } while (iVar4 < 3);
  return;
}



// Address: 4a0a80f8

void FUN_4a0a80f8(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  *param_1 = PTR_PTR_4a0a8338;
  piVar7 = (int *)param_1[0xf];
  if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  iVar2 = 0;
  param_1[0xf] = 0;
  do {
    iVar3 = param_1[0x13];
    if (iVar3 != 0) {
      iVar6 = *(int *)(iVar3 + 8);
    }
    else {
      iVar6 = 0;
    }
    piVar7 = *(int **)(iVar6 + iVar2 * 4);
    if (iVar3 != 0) {
      iVar3 = *(int *)(iVar3 + 8);
    }
    else {
      iVar3 = 0;
    }
    *(undefined4 *)(iVar3 + iVar2 * 4) = 0;
    if ((piVar7 != (int *)0x0) && (iVar3 = (**(code **)(*piVar7 + 8))(piVar7), iVar3 != 0)) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  piVar7 = (int *)param_1[0x15];
  if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  param_1[0x15] = 0;
  piVar7 = (int *)param_1[0x16];
  if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  param_1[0x16] = 0;
  piVar7 = (int *)param_1[0xe];
  if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  puVar4 = PTR_PTR_4a0a833c;
  param_1[0xe] = 0;
  param_1[0x10] = puVar4;
  iVar2 = param_1[0x12];
  piVar7 = (int *)param_1[0x13];
  if (piVar7 != (int *)0x0) {
    iVar3 = piVar7[2];
    puVar4 = (undefined *)(uint)*(byte *)(piVar7 + 5);
  }
  else {
    iVar3 = 0;
  }
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  if ((piVar7 == (int *)0x0) || (iVar6 = (**(code **)(*piVar7 + 8))(piVar7), iVar6 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar7 + 4))(piVar7);
    bVar1 = 1;
  }
  if (!(bool)(bVar1 & (piVar7 != (int *)0x0 && puVar4 != (undefined *)0x0))) {
    iVar3 = 0;
  }
  if (iVar3 != 0) {
    iVar6 = 0;
    if (0 < iVar2) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar2);
      if (iVar3 == 0) goto LAB_4a0a8324;
    }
    FUN_4a14f21c();
  }
LAB_4a0a8324:
  iVar2 = FUN_4a0c6bf4(param_1 + 0x10);
  *(undefined4 *)(iVar2 + -0x40) = PTR_PTR_4a0b0060;
  piVar7 = *(int **)(iVar2 + -0x14);
  if ((piVar7 != (int *)0x0) && (iVar3 = (**(code **)(*piVar7 + 8))(piVar7), iVar3 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  piVar7 = *(int **)(iVar2 + -0x10);
  if ((piVar7 != (int *)0x0) && (iVar3 = (**(code **)(*piVar7 + 8))(piVar7), iVar3 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  piVar7 = *(int **)(iVar2 + -0xc);
  if ((piVar7 != (int *)0x0) && (iVar3 = (**(code **)(*piVar7 + 8))(piVar7), iVar3 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  *(undefined4 *)(iVar2 + -0x40) = PTR_PTR_4a0b77cc;
  piVar7 = *(int **)(iVar2 + -0x38);
  if (piVar7 != (int *)0x0) {
    *(undefined4 *)(iVar2 + -0x38) = 0;
    iVar3 = (**(code **)(*piVar7 + 8))(piVar7);
    if (iVar3 != 0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
  }
  puVar4 = PTR_PTR_4a0b77d0;
  *(undefined **)(iVar2 + -0x2c) = PTR_PTR_4a0b77d0;
  piVar7 = *(int **)(iVar2 + -0x20);
  iVar3 = *(int *)(iVar2 + -0x24);
  if (piVar7 != (int *)0x0) {
    iVar6 = piVar7[2];
    puVar4 = (undefined *)(uint)*(byte *)(piVar7 + 5);
  }
  else {
    iVar6 = 0;
  }
  *(undefined4 *)(iVar2 + -0x20) = 0;
  *(undefined4 *)(iVar2 + -0x24) = 0;
  if ((piVar7 == (int *)0x0) || (iVar5 = (**(code **)(*piVar7 + 8))(piVar7), iVar5 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar7 + 4))(piVar7);
    bVar1 = 1;
  }
  if (!(bool)(bVar1 & (piVar7 != (int *)0x0 && puVar4 != (undefined *)0x0))) {
    iVar6 = 0;
  }
  if (iVar6 != 0) {
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
      if (iVar6 == 0) goto LAB_4a0b77b8;
    }
    FUN_4a14f21c();
  }
LAB_4a0b77b8:
  iVar2 = FUN_4a0c6bf4(iVar2 + -0x2c);
  *(undefined **)(iVar2 + -0x14) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar2 + -0x10) = 0xffffffff;
  return;
}



// Address: 4a0a8340

void FUN_4a0a8340(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2c) = param_2;
  return;
}



// Address: 4a0a8348

void FUN_4a0a8348(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2d) = param_2;
  return;
}



// Address: 4a0a8350

void FUN_4a0a8350(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}



// Address: 4a0a8358

void FUN_4a0a8358(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0b7654();
  *puVar1 = PTR_PTR_4a0a8384;
  puVar1[10] = 0;
  *(undefined1 *)(puVar1 + 0xb) = 1;
  *(undefined1 *)((int)puVar1 + 0x2d) = 1;
  return;
}



// Address: 4a0a83a4

void FUN_4a0a83a4(int *param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x4a0a83b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34))(param_1,param_2,0x20);
  return;
}



// Address: 4a0a83b4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0a83b4(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  code *UNRECOVERED_JUMPTABLE_00;
  
  if (param_2 == (int *)0x0) {
    return;
  }
  (**(code **)(*param_2 + 0xc))(param_2);
  piVar5 = *(int **)(param_1 + 0xe8);
  if ((piVar5 != (int *)0x0) && (iVar1 = (**(code **)(*piVar5 + 8))(piVar5), iVar1 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  *(int **)(param_1 + 0xe8) = param_2;
  *(undefined4 *)(param_1 + 0xf4) = param_3;
  (**(code **)(*param_2 + 0xc))(param_2);
  iVar7 = 0;
  uVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  iVar8 = *(int *)(param_1 + 0x148);
  FUN_4a0015f0(uVar2 & 0x7fffffff,iVar8);
  iVar1 = extraout_r1;
  if (extraout_r1 == 0) {
    iVar1 = iVar8;
  }
  iVar6 = extraout_r1;
  do {
    if (iVar6 == iVar8) {
      iVar6 = 0;
    }
    if (*(int *)(param_1 + 0x14c) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0x14c) + 8);
    }
    iVar3 = *(int *)(iVar3 + iVar6 * 4);
    if (iVar3 < 0) {
      if (iVar3 == -1) break;
    }
    else {
      piVar5 = *(int **)(*(int *)(param_1 + 0x124) + iVar3 * 4);
      uVar4 = (**(code **)(*piVar5 + 0x18))(piVar5);
      if ((uVar4 == uVar2) &&
         ((param_2 == piVar5 || (iVar3 = (**(code **)(*param_2 + 0x14))(param_2,piVar5), iVar3 != 0)
          ))) goto LAB_4a0a8500;
    }
    if (iVar6 == iVar1 + -1) break;
    iVar6 = iVar6 + 1;
  } while( true );
  iVar6 = -1;
LAB_4a0a8500:
  if (iVar6 < 0) {
    if ((param_2 != (int *)0x0) && (iVar1 = (**(code **)(*param_2 + 8))(param_2), iVar1 != 0)) {
      (**(code **)(*param_2 + 4))(param_2);
    }
    iVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x14c) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x14c) + 8);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x13c) + *(int *)(iVar1 + iVar6 * 4) * 4);
    if ((param_2 != (int *)0x0) && (iVar8 = (**(code **)(*param_2 + 8))(param_2), iVar8 != 0)) {
      (**(code **)(*param_2 + 4))(param_2);
    }
  }
  if (iVar1 != 0) {
    return;
  }
  piVar5 = (int *)FUN_4a0b39c4(param_2);
  uVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  iVar8 = *(int *)(param_1 + 0x148);
  FUN_4a0015f0(uVar2 & 0x7fffffff,iVar8);
  iVar1 = extraout_r1_00;
  if (extraout_r1_00 == 0) {
    iVar1 = iVar8;
  }
  iVar6 = extraout_r1_00;
  do {
    if (iVar6 == iVar8) {
      iVar6 = 0;
    }
    iVar3 = iVar7;
    if (*(int *)(param_1 + 0x14c) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x14c) + 8);
    }
    iVar3 = *(int *)(iVar3 + iVar6 * 4);
    if (iVar3 < 0) {
      if (iVar3 == -1) break;
    }
    else {
      piVar9 = *(int **)(*(int *)(param_1 + 0x124) + iVar3 * 4);
      uVar4 = (**(code **)(*piVar9 + 0x18))(piVar9);
      if ((uVar4 == uVar2) &&
         ((param_2 == piVar9 || (iVar3 = (**(code **)(*param_2 + 0x14))(param_2,piVar9), iVar3 != 0)
          ))) goto LAB_4a0a867c;
    }
    if (iVar6 == iVar1 + -1) break;
    iVar6 = iVar6 + 1;
  } while( true );
  iVar6 = -1;
LAB_4a0a867c:
  if (iVar6 < 0) {
    iVar8 = *(int *)(param_1 + 0x148);
    iVar1 = FUN_4a0015f0(*(int *)(param_1 + 0x120) * 100);
    if (0x4a < iVar1) {
      FUN_4a16ce68(param_1 + 0x108,iVar8 * 2 + 1);
    }
    uVar2 = (**(code **)(*param_2 + 0x18))(param_2);
    iVar8 = *(int *)(param_1 + 0x148);
    FUN_4a0015f0(uVar2 & 0x7fffffff,iVar8);
    iVar1 = extraout_r1_01;
    if (extraout_r1_01 == 0) {
      iVar1 = iVar8;
    }
    iVar6 = extraout_r1_01;
    while( true ) {
      if (iVar6 == iVar8) {
        iVar6 = 0;
      }
      iVar3 = iVar7;
      if (*(int *)(param_1 + 0x14c) != 0) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x14c) + 8);
      }
      uVar4 = *(uint *)(iVar3 + iVar6 * 4);
      if ((int)uVar4 < 0) {
        if (0xfffffffd < uVar4) goto LAB_4a0a87ec;
      }
      else {
        piVar9 = *(int **)(*(int *)(param_1 + 0x124) + uVar4 * 4);
        uVar4 = (**(code **)(*piVar9 + 0x18))(piVar9);
        if ((uVar4 == uVar2) &&
           ((param_2 == piVar9 ||
            (iVar3 = (**(code **)(*param_2 + 0x14))(param_2,piVar9), iVar3 != 0))))
        goto LAB_4a0a87ec;
      }
      if (iVar6 == iVar1 + -1) break;
      iVar6 = iVar6 + 1;
    }
    iVar6 = -1;
LAB_4a0a87ec:
    if (*(int *)(param_1 + 0x14c) != 0) {
      iVar7 = *(int *)(*(int *)(param_1 + 0x14c) + 8);
    }
    *(undefined4 *)(iVar7 + iVar6 * 4) = *(undefined4 *)(param_1 + 0x120);
    iVar1 = *(int *)(param_1 + 0x11c);
    if ((*(int *)(param_1 + 0x120) == iVar1) &&
       (iVar7 = *(int *)(param_1 + 0x118) + iVar1, iVar1 < iVar7)) {
      *(int *)(param_1 + 0x11c) = iVar7;
      iVar8 = *(int *)(param_1 + 0x124);
      iVar1 = thunk_FUN_4a161570(iVar7 * 4);
      *(int *)(param_1 + 0x124) = iVar1;
      if (iVar1 != 0) {
        iVar1 = 0;
        if (0 < *(int *)(param_1 + 0x120)) {
          do {
            iVar7 = iVar1 + 1;
            *(undefined4 *)(*(int *)(param_1 + 0x124) + iVar1 * 4) =
                 *(undefined4 *)(iVar8 + iVar1 * 4);
            iVar1 = iVar7;
          } while (iVar7 < *(int *)(param_1 + 0x120));
        }
        thunk_FUN_4a161530(iVar8);
      }
      iVar1 = *(int *)(param_1 + 0x120);
      if (*(int *)(param_1 + 0x120) < *(int *)(param_1 + 0x11c)) {
        do {
          iVar7 = iVar1 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x124) + iVar1 * 4) = 0;
          iVar1 = iVar7;
        } while (iVar7 < *(int *)(param_1 + 0x11c));
      }
    }
    iVar1 = *(int *)(param_1 + 0x120);
    *(int *)(param_1 + 0x120) = iVar1 + 1;
    piVar9 = *(int **)(*(int *)(param_1 + 0x124) + iVar1 * 4);
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 0xc))();
    }
    *(int **)(*(int *)(param_1 + 0x124) + iVar1 * 4) = param_2;
    if ((piVar9 != (int *)0x0) && (iVar1 = (**(code **)(*piVar9 + 8))(piVar9), iVar1 != 0)) {
      (**(code **)(*piVar9 + 4))(piVar9);
    }
    iVar1 = *(int *)(param_1 + 0x134);
    if ((*(int *)(param_1 + 0x138) == iVar1) &&
       (iVar7 = *(int *)(param_1 + 0x130) + iVar1, iVar1 < iVar7)) {
      *(int *)(param_1 + 0x134) = iVar7;
      iVar8 = *(int *)(param_1 + 0x13c);
      iVar1 = thunk_FUN_4a161570(iVar7 * 4);
      *(int *)(param_1 + 0x13c) = iVar1;
      if (iVar1 != 0) {
        iVar1 = 0;
        if (0 < *(int *)(param_1 + 0x138)) {
          do {
            iVar7 = iVar1 + 1;
            *(undefined4 *)(*(int *)(param_1 + 0x13c) + iVar1 * 4) =
                 *(undefined4 *)(iVar8 + iVar1 * 4);
            iVar1 = iVar7;
          } while (iVar7 < *(int *)(param_1 + 0x138));
        }
        thunk_FUN_4a161530(iVar8);
      }
      iVar1 = *(int *)(param_1 + 0x138);
      if (*(int *)(param_1 + 0x138) < *(int *)(param_1 + 0x134)) {
        do {
          iVar7 = iVar1 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x13c) + iVar1 * 4) = 0;
          iVar1 = iVar7;
        } while (iVar7 < *(int *)(param_1 + 0x134));
      }
    }
    iVar1 = *(int *)(param_1 + 0x138);
    *(int *)(param_1 + 0x138) = iVar1 + 1;
    piVar9 = *(int **)(*(int *)(param_1 + 0x13c) + iVar1 * 4);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))();
    }
    *(int **)(*(int *)(param_1 + 0x13c) + iVar1 * 4) = piVar5;
    if (piVar9 == (int *)0x0) {
      return;
    }
    iVar1 = (**(code **)(*piVar9 + 8))(piVar9);
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0a8a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x14c) != 0) {
      iVar7 = *(int *)(*(int *)(param_1 + 0x14c) + 8);
    }
    iVar1 = *(int *)(iVar7 + iVar6 * 4);
    piVar9 = *(int **)(*(int *)(param_1 + 0x13c) + iVar1 * 4);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))();
    }
    *(int **)(*(int *)(param_1 + 0x13c) + iVar1 * 4) = piVar5;
    if (piVar9 == (int *)0x0) {
      return;
    }
    iVar1 = (**(code **)(*piVar9 + 8))(piVar9);
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0a86e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x4a0a8a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar9 + 4))(piVar9);
  return;
}



// Address: 4a0a8a34

void FUN_4a0a8a34(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0xf8) = param_2;
  *(undefined4 *)(param_1 + 0xfc) = param_3;
  *(undefined4 *)(param_1 + 0x100) = param_4;
  *(undefined4 *)(param_1 + 0x104) = param_5;
  piVar1 = (int *)FUN_4a136768();
  (**(code **)(*piVar1 + 0x28))(piVar1,param_3,param_2,param_5,param_4);
  return;
}



// Address: 4a0a8a88

void FUN_4a0a8a88(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0xe8);
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  return;
}



// Address: 4a0a8adc

void FUN_4a0a8adc(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = *(int *)(param_1 + 0x100) != 0;
  iVar2 = 0;
  if (bVar3) {
    iVar2 = *(int *)(param_1 + 0x104);
  }
  if (bVar3 && iVar2 != 0) {
    piVar1 = (int *)FUN_4a136768();
                    /* WARNING: Could not recover jumptable at 0x4a0a8b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x2c))(piVar1,param_2);
    return;
  }
  return;
}



// Address: 4a0a8b14

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0a8b14(int *param_1,int param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar18;
  bool bVar19;
  undefined *puStack_54;
  undefined4 *puStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined *local_2c;
  undefined4 local_28;
  
  if (param_2 == 0) {
    return;
  }
  iVar5 = FUN_4a13bcd4(param_2);
  if (iVar5 == 0) {
    return;
  }
  iVar6 = FUN_4a13b6a8(iVar5,param_2,param_1 + 0x55);
  if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0a8b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  (**(code **)(*param_1 + 0x24))(param_1,iVar5,param_1 + 0x55);
  uVar7 = FUN_4a13bccc(param_2);
  (**(code **)(*param_1 + 0x28))(param_1,uVar7);
  puVar13 = (undefined4 *)param_1[0x67];
  iVar6 = param_1[0x68];
  puVar15 = (undefined4 *)0x0;
  local_28 = 0;
  for (iVar5 = -(DAT_4a1374a0 >> 0x1f); 0 < iVar5; iVar5 = iVar5 + -1) {
    puVar13[2] = *(undefined4 *)(iVar6 + 8);
    puVar13[3] = *(undefined4 *)(iVar6 + 0xc);
    puVar13[4] = *(undefined4 *)(iVar6 + 0x10);
    puVar13[7] = *(undefined4 *)(iVar6 + 0x1c);
    puVar13[8] = *(undefined4 *)(iVar6 + 0x20);
    puVar13[9] = *(undefined4 *)(iVar6 + 0x24);
    puVar13[5] = *(undefined4 *)(iVar6 + 0x14);
    puVar1 = (undefined1 *)(iVar6 + 0x18);
    iVar6 = iVar6 + 0x28;
    *(undefined1 *)(puVar13 + 6) = *puVar1;
    puVar13 = puVar13 + 10;
  }
  puVar16 = (undefined4 *)param_1[0x68];
  local_2c = (undefined *)0x0;
  for (puVar14 = puVar13; puVar14 != puVar16; puVar14 = puVar14 + 10) {
    (**(code **)*puVar14)(puVar14);
  }
  param_1[0x70] = 0;
  param_1[0x68] = (int)puVar13;
  FUN_4a136920(param_1,param_2,0,param_1[3]);
  iVar5 = param_1[0x67];
  iVar6 = param_1[0x68];
  if (iVar5 != iVar6) {
    iVar8 = (int)((ulonglong)((longlong)DAT_4a1374a0 * (longlong)(iVar6 - iVar5)) >> 0x20);
    iVar12 = 0;
    local_28 = 0;
    for (iVar8 = (iVar8 >> 4) - (iVar8 >> 0x1f); iVar8 != 1; iVar8 = iVar8 >> 1) {
      iVar12 = iVar12 + 1;
    }
    FUN_4a166c84(iVar5,iVar6,0,iVar12 << 1);
    local_28 = 0;
    if (iVar6 - iVar5 < 0x2a8) {
      FUN_4a1669f8(iVar5,iVar6,0);
    }
    else {
      FUN_4a1669f8(iVar5,iVar5 + 0x280,0);
      puVar4 = PTR_PTR_4a1374a4;
      for (iVar5 = iVar5 + 0x280; iVar5 != iVar6; iVar5 = iVar5 + 0x28) {
        puVar15 = (undefined4 *)FUN_4a0c6bc0(&puStack_54);
        *puVar15 = puVar4;
        puVar15[2] = *(undefined4 *)(iVar5 + 8);
        puVar15[3] = *(undefined4 *)(iVar5 + 0xc);
        puVar15[4] = *(undefined4 *)(iVar5 + 0x10);
        puVar15[5] = *(undefined4 *)(iVar5 + 0x14);
        *(undefined1 *)(puVar15 + 6) = *(undefined1 *)(iVar5 + 0x18);
        puVar15[7] = *(undefined4 *)(iVar5 + 0x1c);
        puVar15[8] = *(undefined4 *)(iVar5 + 0x20);
        puVar15[9] = *(undefined4 *)(iVar5 + 0x24);
        iVar9 = FUN_4a13758c(puVar15,iVar5 + -0x28);
        iVar12 = iVar5 + -0x28;
        iVar8 = iVar5;
        while (iVar3 = iVar12, iVar9 != 0) {
          *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar3 + 8);
          *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
          *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar3 + 0x10);
          *(undefined4 *)(iVar8 + 0x1c) = *(undefined4 *)(iVar3 + 0x1c);
          *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar3 + 0x20);
          *(undefined4 *)(iVar8 + 0x24) = *(undefined4 *)(iVar3 + 0x24);
          *(undefined4 *)(iVar8 + 0x14) = *(undefined4 *)(iVar3 + 0x14);
          *(undefined1 *)(iVar8 + 0x18) = *(undefined1 *)(iVar3 + 0x18);
          iVar9 = FUN_4a13758c(puVar15,iVar3 + -0x28);
          iVar12 = iVar3 + -0x28;
          iVar8 = iVar3;
        }
        *(undefined4 *)(iVar8 + 8) = puVar15[2];
        *(undefined4 *)(iVar8 + 0xc) = puVar15[3];
        *(undefined4 *)(iVar8 + 0x10) = puVar15[4];
        *(undefined4 *)(iVar8 + 0x1c) = puVar15[7];
        *(undefined4 *)(iVar8 + 0x20) = puVar15[8];
        *(undefined4 *)(iVar8 + 0x24) = puVar15[9];
        *(undefined4 *)(iVar8 + 0x14) = puVar15[5];
        *(undefined1 *)(iVar8 + 0x18) = *(undefined1 *)(puVar15 + 6);
        puStack_54 = puVar4;
        uStack_4c = 0;
        uStack_48 = 0;
        FUN_4a0c6bf4(&puStack_54);
      }
    }
  }
  uVar17 = param_1[3];
  lVar2 = (longlong)DAT_4a1374a0 * (longlong)(param_1[0x68] - param_1[0x67]);
  iVar6 = (int)((ulonglong)lVar2 >> 0x20);
  iVar5 = iVar6 >> 4;
  iVar6 = iVar5 - (iVar6 >> 0x1f);
  piVar10 = (int *)FUN_4a136768(param_1,iVar5,(int)lVar2);
  iVar5 = 0;
  if (0 < iVar6) {
    do {
      iVar12 = param_1[0x67] + iVar5 * 0x28;
      iVar8 = FUN_4a165824(*(undefined4 *)(iVar12 + 8));
      bVar18 = iVar8 != 0;
      uVar11 = 0;
      if (bVar18) {
        uVar11 = *(uint *)(iVar8 + 0xd8);
      }
      bVar19 = (uVar11 & uVar17) != 0;
      if (bVar18 && bVar19) {
        puVar15 = *(undefined4 **)(iVar12 + 0x1c);
      }
      if ((bVar18 && bVar19) && puVar15 != (undefined4 *)0x0) {
        local_28 = *(undefined4 *)(iVar12 + 0x24);
        local_2c = *(undefined **)(iVar12 + 0x20);
        uStack_30 = FUN_4a13b690(iVar8);
        (**(code **)(*piVar10 + 0x20))(piVar10,*(undefined4 *)(iVar12 + 0xc));
        iVar8 = FUN_4a1657c4(iVar8);
        if (iVar8 == 0) {
          (**(code **)(*piVar10 + 0x38))(piVar10,local_28,local_2c,puVar15);
        }
        else {
          FUN_4a138124(iVar8);
          local_34 = FUN_4a137bf8(iVar8);
          uVar7 = FUN_4a13795c(iVar8);
          puStack_54 = local_2c;
          uStack_4c = uStack_30;
          puStack_50 = puVar15;
          (**(code **)(*piVar10 + 0x3c))(piVar10,local_28,uVar7,local_34);
        }
        (**(code **)(*piVar10 + 0x24))(piVar10);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  iVar6 = param_1[0x68];
  puVar15 = (undefined4 *)param_1[0x67];
  local_28 = 0;
  for (iVar5 = -(DAT_4a1374a0 >> 0x1f); 0 < iVar5; iVar5 = iVar5 + -1) {
    puVar15[2] = *(undefined4 *)(iVar6 + 8);
    puVar15[3] = *(undefined4 *)(iVar6 + 0xc);
    puVar15[4] = *(undefined4 *)(iVar6 + 0x10);
    puVar15[7] = *(undefined4 *)(iVar6 + 0x1c);
    puVar15[8] = *(undefined4 *)(iVar6 + 0x20);
    puVar15[9] = *(undefined4 *)(iVar6 + 0x24);
    puVar15[5] = *(undefined4 *)(iVar6 + 0x14);
    puVar1 = (undefined1 *)(iVar6 + 0x18);
    iVar6 = iVar6 + 0x28;
    *(undefined1 *)(puVar15 + 6) = *puVar1;
    puVar15 = puVar15 + 10;
  }
  puVar14 = (undefined4 *)param_1[0x68];
  local_2c = (undefined *)0x0;
  for (puVar13 = puVar15; puVar13 != puVar14; puVar13 = puVar13 + 10) {
    (**(code **)*puVar13)(puVar13);
  }
  param_1[0x68] = (int)puVar15;
  return;
}



// Address: 4a0a8ba8

void FUN_4a0a8ba8(int param_1,int *param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar5 = *(int **)(param_1 + 8);
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  puVar1 = PTR_DAT_4a0a8d00;
  *(int **)(param_1 + 8) = param_2;
  if (param_3 == 0) {
    uVar3 = *(undefined4 *)(puVar1 + 4);
    uVar4 = *(undefined4 *)(puVar1 + 8);
    uVar7 = *(undefined4 *)(puVar1 + 0xc);
    uVar6 = *(undefined4 *)(puVar1 + 0x10);
    uVar8 = *(undefined4 *)(puVar1 + 0x14);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)puVar1;
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    *(undefined4 *)(param_1 + 0x24) = uVar7;
    *(undefined4 *)(param_1 + 0x28) = uVar6;
    *(undefined4 *)(param_1 + 0x2c) = uVar8;
    uVar3 = *(undefined4 *)(puVar1 + 0x1c);
    uVar4 = *(undefined4 *)(puVar1 + 0x20);
    uVar7 = *(undefined4 *)(puVar1 + 0x24);
    uVar6 = *(undefined4 *)(puVar1 + 0x28);
    uVar8 = *(undefined4 *)(puVar1 + 0x2c);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(puVar1 + 0x18);
    *(undefined4 *)(param_1 + 0x34) = uVar3;
    *(undefined4 *)(param_1 + 0x38) = uVar4;
    *(undefined4 *)(param_1 + 0x3c) = uVar7;
    *(undefined4 *)(param_1 + 0x40) = uVar6;
    *(undefined4 *)(param_1 + 0x44) = uVar8;
    uVar3 = *(undefined4 *)(puVar1 + 0x34);
    uVar4 = *(undefined4 *)(puVar1 + 0x38);
    uVar7 = *(undefined4 *)(puVar1 + 0x3c);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(puVar1 + 0x30);
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
    *(undefined4 *)(param_1 + 0x50) = uVar4;
    *(undefined4 *)(param_1 + 0x54) = uVar7;
    uVar3 = *(undefined4 *)(puVar1 + 4);
    uVar4 = *(undefined4 *)(puVar1 + 8);
    uVar7 = *(undefined4 *)(puVar1 + 0xc);
    uVar6 = *(undefined4 *)(puVar1 + 0x10);
    uVar8 = *(undefined4 *)(puVar1 + 0x14);
    uVar9 = *(undefined4 *)(puVar1 + 0x18);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)puVar1;
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(undefined4 *)(param_1 + 0x68) = uVar4;
    *(undefined4 *)(param_1 + 0x6c) = uVar7;
    *(undefined4 *)(param_1 + 0x70) = uVar6;
    *(undefined4 *)(param_1 + 0x74) = uVar8;
    *(undefined4 *)(param_1 + 0x78) = uVar9;
    uVar3 = *(undefined4 *)(puVar1 + 0x20);
    uVar4 = *(undefined4 *)(puVar1 + 0x24);
    uVar7 = *(undefined4 *)(puVar1 + 0x28);
    uVar6 = *(undefined4 *)(puVar1 + 0x2c);
    uVar8 = *(undefined4 *)(puVar1 + 0x30);
    uVar9 = *(undefined4 *)(puVar1 + 0x34);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(puVar1 + 0x1c);
    *(undefined4 *)(param_1 + 0x80) = uVar3;
    *(undefined4 *)(param_1 + 0x84) = uVar4;
    *(undefined4 *)(param_1 + 0x88) = uVar7;
    *(undefined4 *)(param_1 + 0x8c) = uVar6;
    *(undefined4 *)(param_1 + 0x90) = uVar8;
    *(undefined4 *)(param_1 + 0x94) = uVar9;
    uVar3 = *(undefined4 *)(puVar1 + 0x3c);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(puVar1 + 0x38);
    *(undefined4 *)(param_1 + 0x9c) = uVar3;
  }
  else {
    uVar3 = *(undefined4 *)(param_3 + 0xc);
    uVar4 = *(undefined4 *)(param_3 + 0x10);
    uVar7 = *(undefined4 *)(param_3 + 0x14);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    *(undefined4 *)(param_1 + 0x24) = uVar7;
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    uVar4 = *(undefined4 *)(param_3 + 0x20);
    uVar7 = *(undefined4 *)(param_3 + 0x24);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    *(undefined4 *)(param_1 + 0x30) = uVar4;
    *(undefined4 *)(param_1 + 0x34) = uVar7;
    uVar3 = *(undefined4 *)(param_3 + 0x2c);
    uVar4 = *(undefined4 *)(param_3 + 0x30);
    uVar7 = *(undefined4 *)(param_3 + 0x34);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_3 + 0x28);
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    *(undefined4 *)(param_1 + 0x40) = uVar4;
    *(undefined4 *)(param_1 + 0x44) = uVar7;
    uVar3 = *(undefined4 *)(param_3 + 0x3c);
    uVar4 = *(undefined4 *)(param_3 + 0x40);
    uVar7 = *(undefined4 *)(param_3 + 0x44);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_3 + 0x38);
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
    *(undefined4 *)(param_1 + 0x50) = uVar4;
    *(undefined4 *)(param_1 + 0x54) = uVar7;
    uVar3 = *(undefined4 *)(param_3 + 0xc);
    uVar4 = *(undefined4 *)(param_3 + 0x10);
    uVar7 = *(undefined4 *)(param_3 + 0x14);
    uVar6 = *(undefined4 *)(param_3 + 0x18);
    uVar8 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(undefined4 *)(param_1 + 0x68) = uVar4;
    *(undefined4 *)(param_1 + 0x6c) = uVar7;
    *(undefined4 *)(param_1 + 0x70) = uVar6;
    *(undefined4 *)(param_1 + 0x74) = uVar8;
    uVar3 = *(undefined4 *)(param_3 + 0x24);
    uVar4 = *(undefined4 *)(param_3 + 0x28);
    uVar7 = *(undefined4 *)(param_3 + 0x2c);
    uVar6 = *(undefined4 *)(param_3 + 0x30);
    uVar8 = *(undefined4 *)(param_3 + 0x34);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(param_1 + 0x7c) = uVar3;
    *(undefined4 *)(param_1 + 0x80) = uVar4;
    *(undefined4 *)(param_1 + 0x84) = uVar7;
    *(undefined4 *)(param_1 + 0x88) = uVar6;
    *(undefined4 *)(param_1 + 0x8c) = uVar8;
    uVar3 = *(undefined4 *)(param_3 + 0x3c);
    uVar4 = *(undefined4 *)(param_3 + 0x40);
    uVar7 = *(undefined4 *)(param_3 + 0x44);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_3 + 0x38);
    *(undefined4 *)(param_1 + 0x94) = uVar3;
    *(undefined4 *)(param_1 + 0x98) = uVar4;
    *(undefined4 *)(param_1 + 0x9c) = uVar7;
    FUN_4a0b8640(param_1 + 0x58);
  }
  if (param_2 == (int *)0x0) {
    uVar3 = *(undefined4 *)(puVar1 + 4);
    uVar4 = *(undefined4 *)(puVar1 + 8);
    uVar7 = *(undefined4 *)(puVar1 + 0xc);
    uVar6 = *(undefined4 *)(puVar1 + 0x10);
    uVar8 = *(undefined4 *)(puVar1 + 0x14);
    uVar9 = *(undefined4 *)(puVar1 + 0x18);
    uVar10 = *(undefined4 *)(puVar1 + 0x1c);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)puVar1;
    *(undefined4 *)(param_1 + 0xac) = uVar3;
    *(undefined4 *)(param_1 + 0xb0) = uVar4;
    *(undefined4 *)(param_1 + 0xb4) = uVar7;
    *(undefined4 *)(param_1 + 0xb8) = uVar6;
    *(undefined4 *)(param_1 + 0xbc) = uVar8;
    *(undefined4 *)(param_1 + 0xc0) = uVar9;
    *(undefined4 *)(param_1 + 0xc4) = uVar10;
    uVar3 = *(undefined4 *)(puVar1 + 0x24);
    uVar4 = *(undefined4 *)(puVar1 + 0x28);
    uVar7 = *(undefined4 *)(puVar1 + 0x2c);
    uVar6 = *(undefined4 *)(puVar1 + 0x30);
    uVar8 = *(undefined4 *)(puVar1 + 0x34);
    uVar9 = *(undefined4 *)(puVar1 + 0x38);
    uVar10 = *(undefined4 *)(puVar1 + 0x3c);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(puVar1 + 0x20);
    *(undefined4 *)(param_1 + 0xcc) = uVar3;
    *(undefined4 *)(param_1 + 0xd0) = uVar4;
    *(undefined4 *)(param_1 + 0xd4) = uVar7;
    *(undefined4 *)(param_1 + 0xd8) = uVar6;
    *(undefined4 *)(param_1 + 0xdc) = uVar8;
    *(undefined4 *)(param_1 + 0xe0) = uVar9;
    *(undefined4 *)(param_1 + 0xe4) = uVar10;
    iVar2 = -1;
  }
  else {
    FUN_4a13bd60(param_2,param_1 + 0xa0);
    iVar2 = param_2[0x36];
  }
  *(int *)(param_1 + 0xc) = iVar2;
  piVar5 = (int *)FUN_4a136768(param_1);
                    /* WARNING: Could not recover jumptable at 0x4a0a8cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar5 + 0x1c))(piVar5,param_1 + 0xa0,param_1 + 0x58);
  return;
}



// Address: 4a0a8d04

undefined4 * FUN_4a0a8d04(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  puVar3 = (undefined4 *)FUN_4a0c6bc0();
  *puVar3 = PTR_PTR_4a0a8fa4;
  puVar3[2] = 0;
  puVar3[3] = 0xffffffff;
  iVar4 = FUN_4a0b8a1c(puVar3 + 4);
  iVar4 = FUN_4a0b8a1c(iVar4 + 0x48);
  iVar4 = FUN_4a0b8a1c(iVar4 + 0x48);
  *(undefined4 *)(iVar4 + 0x48) = 0;
  *(undefined4 *)(iVar4 + 0x50) = 0x3f800000;
  *(undefined4 *)(iVar4 + 0x4c) = 0;
  *(undefined4 *)(iVar4 + 0x54) = 0;
  *(undefined4 *)(iVar4 + 0x58) = 0;
  *(undefined4 *)(iVar4 + 0x5c) = 0;
  *(undefined4 *)(iVar4 + 0x60) = 0;
  *(undefined4 *)(iVar4 + 100) = 0;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(iVar4 + 0x68);
  *puVar3 = PTR_PTR_4a0a8fa8;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 2);
  puVar1 = PTR_PTR_4a0a8fac;
  *puVar3 = PTR_PTR_4a0a8fac;
  puVar3[4] = 0;
  puVar3[2] = 10;
  puVar3[3] = 0xb;
  puVar3[5] = 0;
  iVar4 = thunk_FUN_4a161570(0x2c);
  puVar3[5] = iVar4;
  if (iVar4 != 0) {
    iVar4 = 0;
    if (0 < (int)puVar3[4]) {
      do {
        iVar5 = iVar4 + 1;
        *(undefined4 *)(puVar3[5] + iVar4 * 4) = *(undefined4 *)(iVar4 * 4);
        iVar4 = iVar5;
      } while (iVar5 < (int)puVar3[4]);
    }
    thunk_FUN_4a161530(0);
  }
  iVar4 = puVar3[4];
  if ((int)puVar3[4] < (int)puVar3[3]) {
    do {
      iVar5 = iVar4 + 1;
      *(undefined4 *)(puVar3[5] + iVar4 * 4) = 0;
      iVar4 = iVar5;
    } while (iVar5 < (int)puVar3[3]);
  }
  puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 6);
  *puVar3 = PTR_PTR_4a0a8fb0;
  puVar3[4] = 0;
  puVar3[2] = 10;
  puVar3[3] = 0xb;
  puVar3[5] = 0;
  iVar4 = thunk_FUN_4a161570(0x2c);
  puVar3[5] = iVar4;
  if (iVar4 != 0) {
    iVar4 = 0;
    if (0 < (int)puVar3[4]) {
      do {
        iVar5 = iVar4 + 1;
        *(undefined4 *)(puVar3[5] + iVar4 * 4) = *(undefined4 *)(iVar4 * 4);
        iVar4 = iVar5;
      } while (iVar5 < (int)puVar3[4]);
    }
    thunk_FUN_4a161530(0);
  }
  iVar4 = puVar3[4];
  if ((int)puVar3[4] < (int)puVar3[3]) {
    do {
      iVar5 = iVar4 + 1;
      *(undefined4 *)(puVar3[5] + iVar4 * 4) = 0;
      iVar4 = iVar5;
    } while (iVar5 < (int)puVar3[3]);
  }
  puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 6);
  puVar2 = PTR_PTR_4a0a8fb4;
  puVar3[2] = 0;
  *puVar3 = puVar2;
  puVar3[3] = 0;
  FUN_4a16ce68(puVar3 + -0xe,0xb);
  iVar4 = FUN_4a0b8a1c(puVar3 + 5);
  *(undefined4 *)(iVar4 + 0x48) = 0;
  *(undefined4 *)(iVar4 + 0x4c) = 0;
  *(undefined4 *)(iVar4 + 0x50) = 0;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(iVar4 + 0x54);
  *puVar3 = puVar1;
  puVar3[4] = 0;
  puVar3[2] = 10;
  puVar3[3] = 10;
  puVar3[5] = 0;
  iVar4 = thunk_FUN_4a161570(0x28);
  puVar3[5] = iVar4;
  if (iVar4 != 0) {
    iVar4 = 0;
    if (0 < (int)puVar3[4]) {
      do {
        iVar5 = iVar4 + 1;
        *(undefined4 *)(puVar3[5] + iVar4 * 4) = *(undefined4 *)(iVar4 * 4);
        iVar4 = iVar5;
      } while (iVar5 < (int)puVar3[4]);
    }
    thunk_FUN_4a161530(0);
  }
  iVar4 = puVar3[4];
  if ((int)puVar3[4] < (int)puVar3[3]) {
    do {
      iVar5 = iVar4 + 1;
      *(undefined4 *)(puVar3[5] + iVar4 * 4) = 0;
      iVar4 = iVar5;
    } while (iVar5 < (int)puVar3[3]);
  }
  puVar3[6] = 0;
  return puVar3 + -0x6a;
}



// Address: 4a0a8fd0

void FUN_4a0a8fd0(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  *param_1 = PTR_PTR_4a0a9120;
  piVar5 = (int *)param_1[2];
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  puVar1 = PTR_PTR_4a0a9124;
  param_1[2] = 0;
  param_1[0x6a] = puVar1;
  iVar2 = 0;
  if (0 < (int)param_1[0x6e]) {
    do {
      piVar5 = *(int **)(param_1[0x6f] + iVar2 * 4);
      *(undefined4 *)(param_1[0x6f] + iVar2 * 4) = 0;
      if ((piVar5 != (int *)0x0) && (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 != 0)) {
        (**(code **)(*piVar5 + 4))(piVar5);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[0x6e]);
  }
  param_1[0x6e] = 0;
  thunk_FUN_4a161530(param_1[0x6f]);
  iVar2 = FUN_4a0c6bf4(param_1 + 0x6a);
  puVar6 = *(undefined4 **)(iVar2 + -8);
  for (puVar4 = *(undefined4 **)(iVar2 + -0xc); puVar4 != puVar6; puVar4 = puVar4 + 10) {
    (**(code **)*puVar4)(puVar4);
  }
  if (*(int *)(iVar2 + -0xc) != 0) {
    FUN_4a14f21c();
  }
  iVar2 = FUN_4a0c6bf4(iVar2 + -0x54);
  iVar2 = FUN_4a16d0e4(iVar2 + -0x4c);
  iVar2 = FUN_4a0c6bf4(iVar2 + -0x68);
  iVar2 = FUN_4a0c6bf4(iVar2 + -0x48);
  iVar2 = FUN_4a0c6bf4(iVar2 + -0x48);
  *(undefined **)(iVar2 + -0x10) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar2 + -0xc) = 0xffffffff;
  return;
}



// Address: 4a0a9150

void FUN_4a0a9150(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0a91ac;
  puVar1[2] = *(undefined4 *)(param_2 + 8);
  puVar1[3] = *(undefined4 *)(param_2 + 0xc);
  puVar1[4] = *(undefined4 *)(param_2 + 0x10);
  puVar1[5] = *(undefined4 *)(param_2 + 0x14);
  *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(param_2 + 0x18);
  puVar1[7] = *(undefined4 *)(param_2 + 0x1c);
  puVar1[8] = *(undefined4 *)(param_2 + 0x20);
  puVar1[9] = *(undefined4 *)(param_2 + 0x24);
  return;
}



// Address: 4a0a91fc

/* WARNING: Removing unreachable block (ram,0x4a0aaebc) */
/* WARNING: Removing unreachable block (ram,0x4a0aaecc) */
/* WARNING: Removing unreachable block (ram,0x4a0aaedc) */
/* WARNING: Removing unreachable block (ram,0x4a0aaef8) */
/* WARNING: Removing unreachable block (ram,0x4a0aaf08) */
/* WARNING: Removing unreachable block (ram,0x4a0aaf28) */
/* WARNING: Removing unreachable block (ram,0x4a0aaf30) */
/* WARNING: Removing unreachable block (ram,0x4a0aaf40) */
/* WARNING: Removing unreachable block (ram,0x4a0aaf44) */
/* WARNING: Removing unreachable block (ram,0x4a0aaf60) */
/* WARNING: Removing unreachable block (ram,0x4a0aaf8c) */
/* WARNING: Removing unreachable block (ram,0x4a0aaf9c) */
/* WARNING: Removing unreachable block (ram,0x4a0aafb8) */
/* WARNING: Removing unreachable block (ram,0x4a0aaf7c) */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_4a0a91fc(int *param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined **ppuVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int *piVar24;
  int **ppiVar25;
  uint auStack_c4 [4];
  int *piStack_b4;
  undefined *puStack_b0;
  undefined *puStack_ac;
  undefined *puStack_a8;
  int *piStack_a4;
  int iStack_a0;
  int *piStack_9c;
  undefined *puStack_98;
  uint uStack_94;
  uint uStack_90;
  int *piStack_8c;
  int *piStack_88;
  undefined *puStack_84;
  int *piStack_80;
  uint uStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 uStack_70;
  int *apiStack_6c [4];
  int *piStack_5c;
  int iStack_58;
  int *piStack_54;
  undefined *puStack_50;
  uint uStack_4c;
  uint uStack_48;
  int *piStack_44;
  int *piStack_40;
  undefined1 auStack_3c [16];
  undefined4 uStack_2c;
  undefined *puStack_28;
  
  iVar4 = (**(code **)(*param_1 + 0x2c))(param_1);
  if (iVar4 == -1) {
    return 0;
  }
  uVar5 = FUN_4a0bf62c(param_1);
  uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  uStack_2c = thunk_FUN_4a161570(uVar5);
  FUN_4a0bfa84(param_1,uStack_2c,uVar5);
  uVar6 = thunk_FUN_4a161570(0x20);
  uVar6 = FUN_4a0c103c(uVar6,uStack_2c,uVar5);
  FUN_4a0bfc44(auStack_3c,uVar6);
  piVar17 = (int *)0x0;
  switch(iVar4) {
  case 0:
    FUN_4a0bf578(auStack_3c);
    FUN_4a0bf578(auStack_3c);
    FUN_4a0bf53c(auStack_3c);
    FUN_4a0bf62c(auStack_3c);
    FUN_4a0bf62c(auStack_3c);
    break;
  case 1:
    thunk_FUN_4a161570(0x40);
    piVar17 = (int *)FUN_4a0b3218();
    FUN_4a0aeacc(piVar17,auStack_3c,param_2,param_3);
    uVar5 = FUN_4a0bf62c(auStack_3c);
    uVar11 = FUN_4a0bf62c(auStack_3c);
    uVar12 = FUN_4a0bf62c(auStack_3c);
    piStack_40 = (int *)(uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                        uVar12 << 0x18);
    uVar12 = FUN_4a0bf62c(auStack_3c);
    uVar13 = FUN_4a0bf62c(auStack_3c);
    uVar22 = FUN_4a0bf62c(auStack_3c);
    uVar22 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 | uVar22 << 0x18;
    FUN_4a0b31c8(piVar17,piStack_40,
                 uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18
                );
    FUN_4a0b31bc(piVar17,uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                         uVar13 << 0x18,uVar22);
    FUN_4a0b31dc(piVar17,uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                         uVar5 << 0x18,uVar22);
    piVar17[0xc] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                   uVar11 << 0x18;
    break;
  case 2:
    thunk_FUN_4a161570(0x5c);
    piVar17 = (int *)FUN_4a0afaac();
    FUN_4a0aeacc(piVar17,auStack_3c,param_2,param_3);
    uVar6 = FUN_4a0ae944(auStack_3c,param_2,param_3);
    uVar18 = FUN_4a0ae944(auStack_3c,param_2,param_3);
    uVar5 = FUN_4a0bf62c(auStack_3c);
    FUN_4a0af928(piVar17,uVar6);
    FUN_4a0af8b4(piVar17,uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                         uVar5 << 0x18);
    FUN_4a0af8bc(piVar17,uVar18);
    break;
  case 3:
    thunk_FUN_4a161570(0x5c);
    piVar17 = (int *)FUN_4a0a7fc8();
    FUN_4a0aeacc(piVar17,auStack_3c,param_2,param_3);
    cVar3 = FUN_4a0bf578(auStack_3c);
    FUN_4a0afe78(piVar17,(int)cVar3);
    uVar6 = FUN_4a0ae944(auStack_3c,param_2,param_3);
    FUN_4a0afe0c(piVar17,uVar6);
    uVar6 = FUN_4a0ae944(auStack_3c,param_2,param_3);
    FUN_4a0a7f5c(piVar17,uVar6);
    uVar6 = FUN_4a0ae944(auStack_3c,param_2,param_3);
    FUN_4a0afda0(piVar17,uVar6);
    uVar6 = FUN_4a0ae944(auStack_3c,param_2,param_3);
    FUN_4a0a7ef0(piVar17,uVar6);
    uVar5 = FUN_4a0bf62c(auStack_3c);
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    iVar4 = 0;
    if (0 < (int)uVar5) {
      do {
        uVar6 = FUN_4a0ae944(auStack_3c,param_2,param_3);
        FUN_4a0a7c84(piVar17,iVar4,uVar6);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar5);
    }
    break;
  case 5:
    thunk_FUN_4a161570(0x13c);
    piVar17 = (int *)FUN_4a0b52ec();
    FUN_4a0b2080(piVar17,auStack_3c,param_2,param_3);
    uVar6 = FUN_4a0bf53c(auStack_3c);
    uVar18 = FUN_4a0bf53c(auStack_3c);
    uVar19 = FUN_4a0bf578(auStack_3c);
    uVar20 = FUN_4a0bf62c(auStack_3c);
    iVar4 = FUN_4a0bf53c(auStack_3c);
    if (iVar4 != 0) {
      FUN_4a0bf578(auStack_3c);
      FUN_4a0bf578(auStack_3c);
      FUN_4a0ae944(auStack_3c,param_2,0);
      FUN_4a0ae944(auStack_3c,param_2,0);
    }
    FUN_4a0b4608(piVar17,uVar6);
    FUN_4a0b4604(piVar17,uVar18);
    uVar6 = FUN_4a171fac(uVar19);
    uVar6 = FUN_4a17211c(uVar6,DAT_4a0aa598);
    FUN_4a0b45d8(piVar17,uVar6);
    FUN_4a0b4704(piVar17,uVar20);
    iVar4 = FUN_4a0bf578(auStack_3c);
    if (iVar4 != 0x30) {
      uVar5 = FUN_4a0bf62c(auStack_3c);
      uVar11 = FUN_4a0bf62c(auStack_3c);
      uVar12 = FUN_4a0bf62c(auStack_3c);
      FUN_4a0bf62c(auStack_3c);
      if (iVar4 == 0x31) {
        FUN_4a0b529c();
      }
      else {
        FUN_4a0b52c4(piVar17,uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                             uVar5 << 0x18,
                     uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                     uVar11 << 0x18,
                     uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                     uVar12 << 0x18);
      }
      break;
    }
    FUN_4a0b8a1c(&puStack_84);
    iVar21 = 0;
    iVar4 = 1;
    do {
      uVar5 = FUN_4a0bf62c(auStack_3c);
      iVar4 = iVar4 + 1;
      auStack_c4[iVar21] =
           uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      iVar21 = iVar21 + 1;
    } while (iVar4 < 0x11);
    uStack_7c = auStack_c4[0];
    iStack_78 = auStack_c4[1];
    iStack_74 = auStack_c4[2];
    uStack_70 = auStack_c4[3];
    apiStack_6c[0] = piStack_b4;
    apiStack_6c[1] = (int *)puStack_b0;
    apiStack_6c[2] = (int *)puStack_ac;
    apiStack_6c[3] = (int *)puStack_a8;
    piStack_5c = piStack_a4;
    iStack_58 = iStack_a0;
    piStack_54 = piStack_9c;
    puStack_50 = puStack_98;
    uStack_4c = uStack_94;
    uStack_48 = uStack_90;
    piStack_44 = piStack_8c;
    piStack_40 = piStack_88;
    FUN_4a0b5258(piVar17,&puStack_84);
    ppuVar9 = &puStack_84;
    goto LAB_4a0a9d94;
  case 6:
    thunk_FUN_4a161570(0x40);
    piVar17 = (int *)FUN_4a0b020c();
    FUN_4a0aeacc(piVar17,auStack_3c,param_2,param_3);
    piStack_40 = (int *)FUN_4a0bf53c(auStack_3c);
    piStack_44 = (int *)FUN_4a0bf53c(auStack_3c);
    uVar6 = FUN_4a0bf53c(auStack_3c);
    uVar18 = FUN_4a0bf53c(auStack_3c);
    uStack_48 = FUN_4a0bf578(auStack_3c);
    FUN_4a0bf578(auStack_3c);
    uVar19 = FUN_4a171fac();
    uVar19 = FUN_4a17211c(uVar19,DAT_4a0aa598);
    uVar5 = FUN_4a0bf62c(auStack_3c);
    uVar11 = FUN_4a0bf62c(auStack_3c);
    FUN_4a0b01ec(piVar17,piStack_40);
    FUN_4a0b0204(piVar17,piStack_44);
    FUN_4a0b01fc(piVar17,uVar6);
    FUN_4a0b01f4(piVar17,uVar18);
    FUN_4a0b0180(piVar17,uStack_48);
    FUN_4a0b01c8(piVar17,uVar19);
    FUN_4a0b0188(piVar17,uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                         uVar5 << 0x18,
                 uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18
                );
    break;
  case 8:
    thunk_FUN_4a161570(0x38);
    piVar17 = (int *)FUN_4a0abadc();
    FUN_4a0aeacc(piVar17,auStack_3c,param_2,param_3);
    uVar6 = FUN_4a0bf578(auStack_3c);
    uVar18 = FUN_4a0bf578(auStack_3c);
    uVar19 = FUN_4a0bf578(auStack_3c);
    uVar20 = FUN_4a0bf53c(auStack_3c);
    uVar7 = FUN_4a0bf53c(auStack_3c);
    piStack_40 = (int *)FUN_4a0bf53c(auStack_3c);
    FUN_4a0aba64(piVar17,uVar6);
    FUN_4a0aba6c(piVar17,uVar18);
    FUN_4a0aba74(piVar17,uVar19);
    FUN_4a0abac4(piVar17,uVar20);
    FUN_4a0abacc(piVar17,uVar7);
    FUN_4a0abad4(piVar17,piStack_40);
    break;
  case 9:
    thunk_FUN_4a161570(0xe0);
    piVar17 = (int *)FUN_4a0b4e14();
    FUN_4a0b2080(piVar17,auStack_3c,param_2,param_3);
    uVar6 = FUN_4a0bf53c(auStack_3c);
    uVar18 = FUN_4a0bf53c(auStack_3c);
    uVar19 = FUN_4a0bf578(auStack_3c);
    uVar20 = FUN_4a0bf62c(auStack_3c);
    iVar4 = FUN_4a0bf53c(auStack_3c);
    if (iVar4 != 0) {
      FUN_4a0bf578(auStack_3c);
      FUN_4a0bf578(auStack_3c);
      FUN_4a0ae944(auStack_3c,param_2,0);
      FUN_4a0ae944(auStack_3c,param_2,0);
    }
    FUN_4a0b4608(piVar17,uVar6);
    FUN_4a0b4604(piVar17,uVar18);
    uVar6 = FUN_4a171fac(uVar19);
    uVar6 = FUN_4a17211c(uVar6,DAT_4a0aa598);
    FUN_4a0b45d8(piVar17,uVar6);
    FUN_4a0b4704(piVar17,uVar20);
    uVar5 = FUN_4a0bf62c(auStack_3c);
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    iVar4 = 0;
    if (0 < (int)uVar5) {
      do {
        uVar6 = FUN_4a0ae944(auStack_3c,param_2,param_3);
        FUN_4a0b4c10(piVar17,uVar6);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar5);
    }
    break;
  case 10:
    thunk_FUN_4a161570(0x4c);
    piVar17 = (int *)FUN_4a0b6eb0();
    FUN_4a0aeacc(piVar17,auStack_3c,param_2,param_3);
    uVar6 = FUN_4a0bf578(auStack_3c);
    iVar4 = FUN_4a0bf53c(auStack_3c);
    uVar5 = FUN_4a0bf62c(auStack_3c);
    uVar11 = FUN_4a0bf62c(auStack_3c);
    FUN_4a0b5d38(piVar17,uVar6,
                 uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18,
                 uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18
                );
    if (iVar4 != 0) break;
    puVar16 = (undefined4 *)FUN_4a0c6bc0(&puStack_50);
    puVar1 = PTR_PTR_4a0aa59c;
    puVar16[2] = 0;
    *puVar16 = puVar1;
    puVar16[3] = 0;
    uVar5 = FUN_4a0bf62c(auStack_3c);
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    if (0 < (int)uVar5) {
      piVar24 = (int *)FUN_4a0c6bc0(apiStack_6c + 2);
      piVar24[2] = 0;
      piVar24[3] = 0;
      *piVar24 = (int)puVar1;
      iVar4 = FUN_4a15e080(uVar5);
      if (iVar4 == 0) {
        iVar4 = FUN_4a1669a8();
      }
      iVar21 = 0;
      do {
        apiStack_6c[1] = (int *)0x0;
        *(undefined1 *)(iVar4 + iVar21) = 0;
        iVar21 = iVar21 + 1;
      } while (iVar21 < (int)uVar5);
      thunk_FUN_4a161570(0x18);
      piVar8 = (int *)FUN_4a0c0628();
      puVar2 = PTR_PTR_4a0aa5a0;
      *piVar8 = (int)PTR_PTR_4a0aa5a0;
      piVar8[3] = 1;
      piVar8[4] = uVar5;
      piVar8[2] = iVar4;
      *(undefined1 *)(piVar8 + 5) = 1;
      if (piVar8 != (int *)0x0) {
        (**(code **)(puVar2 + 0xc))(piVar8);
      }
      (**(code **)(*piVar24 + 0x1c))(piVar24);
      piVar24[2] = uVar5;
      piVar24[3] = (int)piVar8;
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 0xc))(piVar8);
      }
      (**(code **)(puStack_50 + 0x1c))(&puStack_50);
      piVar24 = piStack_5c;
      apiStack_6c[2] = (int *)puVar1;
      uStack_48 = uVar5;
      piStack_44 = piVar8;
      iVar4 = FUN_4a0bcc84(apiStack_6c + 2);
      if (iVar4 != 0) {
        iVar21 = 0;
        if (0 < (int)piVar24) {
          do {
            iVar21 = iVar21 + 1;
          } while (iVar21 < (int)piVar24);
          if (iVar4 == 0) goto LAB_4a0a9cbc;
        }
        FUN_4a14f21c(iVar4);
      }
LAB_4a0a9cbc:
      FUN_4a0c6bf4(apiStack_6c + 2);
      FUN_4a0bfae4(auStack_3c,&puStack_50);
    }
    uVar5 = FUN_4a0bf62c(auStack_3c);
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar6 = thunk_FUN_4a161570(uVar5);
    FUN_4a0bfa84(auStack_3c,uVar6,uVar5);
    if (piStack_44 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = piStack_44[2];
    }
    if (iVar4 == 0) {
      FUN_4a0b5e84(piVar17,uVar6);
    }
    else {
      FUN_4a0b6838(piVar17,&puStack_50,uVar6);
    }
    thunk_FUN_4a161530(uVar6);
    uVar5 = uStack_48;
    ppuVar9 = &puStack_50;
    puStack_50 = puVar1;
    iVar4 = FUN_4a0bcc84(ppuVar9);
    if (iVar4 != 0) {
      iVar21 = 0;
      if (0 < (int)uVar5) {
        do {
          iVar21 = iVar21 + 1;
        } while (iVar21 < (int)uVar5);
        if (iVar4 == 0) goto LAB_4a0a9d94;
      }
      FUN_4a14f21c(iVar4);
    }
LAB_4a0a9d94:
    FUN_4a0c6bf4(ppuVar9);
    break;
  case 0xb:
    thunk_FUN_4a161570(0x60);
    piVar17 = (int *)FUN_4a0b310c();
    FUN_4a0aeacc(piVar17,auStack_3c,param_2,param_3);
    iVar4 = FUN_4a0bf578(auStack_3c);
    if (iVar4 == 0x80) {
      uVar5 = FUN_4a0bf62c(auStack_3c);
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      FUN_4a16be24(&iStack_78,uVar5);
      iVar23 = uVar5 + 1;
      iVar21 = 0;
      iVar4 = 1;
      if (1 < iVar23) {
        do {
          uVar5 = FUN_4a0bf62c(auStack_3c);
          iVar4 = iVar4 + 1;
          if (apiStack_6c[0] == (int *)0x0) {
            iVar14 = 0;
          }
          else {
            iVar14 = apiStack_6c[0][2];
          }
          *(uint *)(iVar14 + iVar21 * 4) =
               uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
          iVar21 = iVar21 + 1;
        } while (iVar4 < iVar23);
      }
      puVar16 = (undefined4 *)FUN_4a0c6bc0(apiStack_6c + 2);
      *puVar16 = PTR_PTR_4a0aa5a4;
      puVar16[2] = uStack_70;
      puVar16[3] = apiStack_6c[0];
joined_r0x4a0aa010:
      if (apiStack_6c[0] != (int *)0x0) {
        (**(code **)(*apiStack_6c[0] + 0xc))();
      }
      *puVar16 = PTR_PTR_4a0aa5a8;
      FUN_4a0aafec(piVar17,puVar16);
      FUN_4a16bef4(apiStack_6c + 2);
      FUN_4a16bef4(&iStack_78);
    }
    else {
      if (0x80 < iVar4) {
        if (iVar4 == 0x81) {
          uVar5 = FUN_4a0bf62c(auStack_3c);
          uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
          FUN_4a16be24(&iStack_78,uVar5);
          iVar23 = uVar5 + 1;
          iVar21 = 0;
          iVar4 = 1;
          if (1 < iVar23) {
            do {
              uVar6 = FUN_4a0bf578(auStack_3c);
              iVar4 = iVar4 + 1;
              if (apiStack_6c[0] == (int *)0x0) {
                iVar14 = 0;
              }
              else {
                iVar14 = apiStack_6c[0][2];
              }
              *(undefined4 *)(iVar14 + iVar21 * 4) = uVar6;
              iVar21 = iVar21 + 1;
            } while (iVar4 < iVar23);
          }
          puVar16 = (undefined4 *)FUN_4a0c6bc0(apiStack_6c + 2);
          *puVar16 = PTR_PTR_4a0aa5a4;
          puVar16[2] = uStack_70;
          puVar16[3] = apiStack_6c[0];
        }
        else {
          if (iVar4 != 0x82) goto LAB_4a0aa0a8;
          uVar5 = FUN_4a0bf62c(auStack_3c);
          uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
          FUN_4a16be24(&iStack_78,uVar5);
          iVar23 = uVar5 + 1;
          iVar21 = 0;
          iVar4 = 1;
          if (1 < iVar23) {
            do {
              iVar14 = FUN_4a0bfbdc(auStack_3c);
              if (apiStack_6c[0] == (int *)0x0) {
                iVar10 = 0;
              }
              else {
                iVar10 = apiStack_6c[0][2];
              }
              iVar4 = iVar4 + 1;
              *(int *)(iVar10 + iVar21 * 4) =
                   (int)(short)((ushort)((uint)iVar14 >> 8) & 0xff | (ushort)(iVar14 << 8));
              iVar21 = iVar21 + 1;
            } while (iVar4 < iVar23);
          }
          puVar16 = (undefined4 *)FUN_4a0c6bc0(apiStack_6c + 2);
          *puVar16 = PTR_PTR_4a0aa5a4;
          puVar16[2] = uStack_70;
          puVar16[3] = apiStack_6c[0];
        }
        goto joined_r0x4a0aa010;
      }
      if (iVar4 == 0) {
        uVar5 = FUN_4a0bf62c(auStack_3c);
        FUN_4a0ab170(piVar17,uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                             uVar5 << 0x18);
      }
      else if (iVar4 == 1) {
        uVar6 = FUN_4a0bf578(auStack_3c);
        FUN_4a0ab170(piVar17,uVar6);
      }
      else if (iVar4 == 2) {
        iVar4 = FUN_4a0bfbdc(auStack_3c);
        FUN_4a0ab170(piVar17,(int)(short)((ushort)((uint)iVar4 >> 8) & 0xff | (ushort)(iVar4 << 8)))
        ;
      }
    }
LAB_4a0aa0a8:
    uVar5 = FUN_4a0bf62c(auStack_3c);
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    FUN_4a16be24(&puStack_50,uVar5);
    iVar23 = uVar5 + 1;
    iVar21 = 0;
    iVar4 = 1;
    if (1 < iVar23) {
      do {
        uVar5 = FUN_4a0bf62c(auStack_3c);
        iVar4 = iVar4 + 1;
        if (piStack_44 == (int *)0x0) {
          iVar14 = 0;
        }
        else {
          iVar14 = piStack_44[2];
        }
        *(uint *)(iVar14 + iVar21 * 4) =
             uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        iVar21 = iVar21 + 1;
      } while (iVar4 < iVar23);
    }
    FUN_4a0ab440(piVar17,&puStack_50);
    FUN_4a16bef4(&puStack_50);
    break;
  case 0xe:
    thunk_FUN_4a161570(0x114);
    piVar17 = (int *)FUN_4a0b4330();
    FUN_4a0b780c(piVar17,auStack_3c,param_2,param_3);
    break;
  case 0x10:
    thunk_FUN_4a161570(0x170);
    piVar17 = (int *)FUN_4a0acdc4();
    FUN_4a0b780c(piVar17,auStack_3c,param_2,param_3);
    uVar6 = FUN_4a0ae944(auStack_3c,param_2,param_3);
    FUN_4a0abb88(piVar17,uVar6);
    FUN_4a0acd10(piVar17,1);
    uVar5 = FUN_4a0bf62c(auStack_3c);
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    iVar4 = 0;
    if (0 < (int)uVar5) {
      do {
        uVar6 = FUN_4a0ae944(auStack_3c,param_2,param_3);
        uVar11 = FUN_4a0bf62c(auStack_3c);
        FUN_4a0bf62c(auStack_3c);
        uVar12 = FUN_4a0bf62c(auStack_3c);
        FUN_4a0abc4c(piVar17,uVar6,
                     uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                     uVar12 << 0x18,
                     uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                     uVar11 << 0x18);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar5);
    }
    break;
  case 0x11:
    thunk_FUN_4a161570(0xe8);
    piVar17 = (int *)FUN_4a0b7b8c();
    FUN_4a0b2080(piVar17,auStack_3c,param_2,param_3);
    uVar6 = FUN_4a0ae944(auStack_3c,param_2,param_3);
    FUN_4a0b7a68(piVar17,uVar6);
    iVar4 = FUN_4a0bf578(auStack_3c);
    iVar21 = FUN_4a0bf578(auStack_3c);
    uVar5 = FUN_4a0bf578(auStack_3c);
    uVar6 = FUN_4a0bf578(auStack_3c);
    piStack_40 = (int *)FUN_4a0bf578(auStack_3c);
    piStack_44 = (int *)FUN_4a0bf578(auStack_3c);
    uVar18 = FUN_4a0bf578(auStack_3c);
    uStack_48 = FUN_4a0bf578(auStack_3c);
    FUN_4a0b7a60(piVar17,iVar4 << 0x10 | iVar21 << 8 | uVar5);
    FUN_4a0b7a40(piVar17,uVar6);
    FUN_4a0b7a48(piVar17,piStack_40,piStack_44);
    FUN_4a0b7a54(piVar17,uVar18,uStack_48);
    break;
  case 0x13:
    thunk_FUN_4a161570(0x78);
    piStack_40 = (int *)FUN_4a0b1ef8();
    FUN_4a0aeacc(piStack_40,auStack_3c,param_2,param_3);
    piStack_44 = (int *)FUN_4a0bf578(auStack_3c);
    uVar6 = FUN_4a0bf578(auStack_3c);
    iVar4 = FUN_4a0bf578(auStack_3c);
    uVar5 = FUN_4a0bf62c(auStack_3c);
    uVar11 = FUN_4a0bf62c(auStack_3c);
    uVar12 = FUN_4a0bf62c(auStack_3c);
    uVar13 = FUN_4a0bf62c(auStack_3c);
    uVar22 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
    uVar13 = FUN_4a0bf62c(auStack_3c);
    uStack_48 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
    FUN_4a0b13e0(piStack_40,piStack_44);
    FUN_4a0b1268(piStack_40,uVar6);
    FUN_4a0b11e8(piStack_40,
                 uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18);
    FUN_4a0b12b8(piStack_40,uStack_48,uVar22);
    FUN_4a0b1288(piStack_40,
                 uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18
                 ,uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                  uVar12 << 0x18);
    if (iVar4 == 0) {
      FUN_4a16b934(apiStack_6c + 3,uVar22);
      iVar4 = 0;
      if (0 < (int)uStack_48) {
        do {
          uVar5 = FUN_4a0bf62c(auStack_3c);
          iVar23 = 0;
          iVar21 = 1;
          if (1 < (int)(uVar22 + 1)) {
            do {
              uVar11 = FUN_4a0bf62c(auStack_3c);
              iVar21 = iVar21 + 1;
              if (piStack_54 == (int *)0x0) {
                iVar14 = 0;
              }
              else {
                iVar14 = piStack_54[2];
              }
              *(uint *)(iVar14 + iVar23 * 4) =
                   uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                   uVar11 << 0x18;
              iVar23 = iVar23 + 1;
            } while (iVar21 < (int)(uVar22 + 1));
          }
          FUN_4a0b1208(piStack_40,iVar4,
                       uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                       uVar5 << 0x18,apiStack_6c + 3);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uStack_48);
      }
      iVar21 = iStack_58;
      ppiVar25 = apiStack_6c + 3;
      apiStack_6c[3] = (int *)PTR_PTR_4a0aa5ac;
      iVar4 = FUN_4a0bcc84(ppiVar25);
      if (iVar4 != 0) {
        iVar23 = 0;
        if (0 < iVar21) {
          do {
            iVar23 = iVar23 + 1;
          } while (iVar23 < iVar21);
joined_r0x4a0aa770:
          if (iVar4 == 0) goto LAB_4a0aa774;
        }
LAB_4a0aa58c:
        FUN_4a14f21c(iVar4);
      }
    }
    else {
      piVar17 = piStack_40;
      if ((iVar4 == 1) || (iVar4 != 2)) break;
      iVar4 = 0;
      if (0 < (int)uVar22) {
        do {
          uVar5 = FUN_4a0bf62c(auStack_3c);
          (&piStack_5c)[iVar4] =
               (int *)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                      uVar5 << 0x18);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar22);
      }
      iVar4 = 0;
      if (0 < (int)uVar22) {
        do {
          uVar5 = FUN_4a0bf62c(auStack_3c);
          apiStack_6c[iVar4] =
               (int *)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                      uVar5 << 0x18);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar22);
      }
      FUN_4a16b934(&piStack_80,uVar22);
      puStack_84 = (undefined *)0x0;
      if (0 < (int)uStack_48) {
        do {
          uVar5 = FUN_4a0bf62c(auStack_3c);
          uStack_4c = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                      uVar5 << 0x18;
          iVar4 = 0;
          iVar21 = 1;
          if (1 < (int)(uVar22 + 1)) {
            do {
              uVar5 = FUN_4a0bfbdc(auStack_3c);
              uVar6 = FUN_4a171fac((uVar5 & 0xffff) >> 8 | (uVar5 & 0xff) << 8);
              uVar6 = FUN_4a17211c(uVar6,0x37800080);
              uVar6 = FUN_4a17211c(uVar6,apiStack_6c[iVar4]);
              uVar6 = FUN_4a171a94(uVar6,(&piStack_5c)[iVar4]);
              iVar21 = iVar21 + 1;
              if (iStack_74 == 0) {
                iVar23 = 0;
              }
              else {
                iVar23 = *(int *)(iStack_74 + 8);
              }
              *(undefined4 *)(iVar23 + iVar4 * 4) = uVar6;
              iVar4 = iVar4 + 1;
            } while (iVar21 < (int)(uVar22 + 1));
          }
          FUN_4a0b1208(piStack_40,puStack_84,uStack_4c,&piStack_80);
          puStack_84 = puStack_84 + 1;
        } while ((int)puStack_84 < (int)uStack_48);
      }
      iVar21 = iStack_78;
      ppiVar25 = &piStack_80;
      piStack_80 = (int *)PTR_PTR_4a0aa5ac;
      iVar4 = FUN_4a0bcc84(ppiVar25);
      if (iVar4 != 0) {
        iVar23 = 0;
        if (0 < iVar21) {
          do {
            iVar23 = iVar23 + 1;
          } while (iVar23 < iVar21);
          goto joined_r0x4a0aa770;
        }
        goto LAB_4a0aa58c;
      }
    }
LAB_4a0aa774:
    FUN_4a0c6bf4(ppiVar25);
    piVar17 = piStack_40;
    break;
  case 0x14:
    piVar17 = (int *)FUN_4a0b0a18(auStack_3c,param_2,param_3);
    break;
  case 0x15:
    thunk_FUN_4a161570(0x74);
    piStack_54 = (int *)FUN_4a0ae56c();
    FUN_4a0aeacc(piStack_54,auStack_3c,param_2,param_3);
    iVar4 = FUN_4a0bf578(auStack_3c);
    iVar21 = FUN_4a0bf578(auStack_3c);
    uVar5 = FUN_4a0bf578(auStack_3c);
    iVar23 = FUN_4a0bf578(auStack_3c);
    FUN_4a0ade00(piStack_54,iVar4 << 0x10 | iVar21 << 8 | uVar5 | iVar23 << 0x18);
    uVar6 = FUN_4a0ae944(auStack_3c,param_2,param_3);
    FUN_4a16b934(apiStack_6c + 1,3);
    uVar5 = FUN_4a0bf62c(auStack_3c);
    if (piStack_5c == (int *)0x0) {
      puVar15 = (uint *)0x0;
    }
    else {
      puVar15 = (uint *)piStack_5c[2];
    }
    *puVar15 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar5 = FUN_4a0bf62c(auStack_3c);
    if (piStack_5c == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = piStack_5c[2];
    }
    *(uint *)(iVar4 + 4) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar5 = FUN_4a0bf62c(auStack_3c);
    if (piStack_5c == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = piStack_5c[2];
    }
    *(uint *)(iVar4 + 8) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar5 = FUN_4a0bf62c(auStack_3c);
    puVar16 = (undefined4 *)FUN_4a0c6bc0(&puStack_50);
    *puVar16 = PTR_PTR_4a0aa5a4;
    puVar16[2] = apiStack_6c[3];
    puVar16[3] = piStack_5c;
    if (piStack_5c != (int *)0x0) {
      (**(code **)(*piStack_5c + 0xc))();
    }
    puVar1 = PTR_PTR_4a0aa5ac;
    *puVar16 = PTR_PTR_4a0aa5ac;
    FUN_4a0adb1c(piStack_54,uVar6,
                 uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18,
                 puVar16);
    uVar5 = uStack_48;
    puStack_50 = puVar1;
    iVar4 = FUN_4a0bcc84(&puStack_50);
    if (iVar4 != 0) {
      iVar21 = 0;
      if (0 < (int)uVar5) {
        do {
          iVar21 = iVar21 + 1;
        } while (iVar21 < (int)uVar5);
        if (iVar4 == 0) goto LAB_4a0aa97c;
      }
      FUN_4a14f21c(iVar4);
    }
LAB_4a0aa97c:
    FUN_4a0c6bf4(&puStack_50);
    uVar6 = FUN_4a0ae944(auStack_3c,param_2,param_3);
    FUN_4a0ad7e4(piStack_54,uVar6);
    uVar6 = FUN_4a0ae944(auStack_3c,param_2,param_3);
    FUN_4a0ae4e8(piStack_54,uVar6);
    uVar5 = FUN_4a0bf62c(auStack_3c);
    apiStack_6c[0] =
         (int *)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18);
    iVar4 = 0;
    if (0 < (int)apiStack_6c[0]) {
      puStack_28 = PTR_PTR_4a0aa5a0;
      do {
        uStack_70 = FUN_4a0ae944(auStack_3c,param_2,param_3);
        piVar17 = (int *)FUN_4a0c6bc0(&puStack_84);
        piVar17[2] = 0;
        piVar17[3] = 0;
        *piVar17 = (int)puVar1;
        iVar21 = FUN_4a15e080(0xc);
        if (iVar21 == 0) {
          iVar21 = FUN_4a1669a8();
        }
        iVar23 = 0;
        do {
          piStack_88 = (int *)0x0;
          *(undefined4 *)(iVar21 + iVar23 * 4) = 0;
          iVar23 = iVar23 + 1;
        } while (iVar23 < 3);
        thunk_FUN_4a161570(0x18);
        puVar16 = (undefined4 *)FUN_4a0c0628();
        puVar16[2] = iVar21;
        puVar16[3] = 4;
        puVar16[4] = 3;
        *puVar16 = puStack_28;
        *(undefined1 *)(puVar16 + 5) = 1;
        if (puVar16 != (undefined4 *)0x0) {
          (**(code **)(puStack_28 + 0xc))(puVar16);
        }
        (**(code **)(*piVar17 + 0x1c))(piVar17);
        piVar17[2] = 3;
        piVar17[3] = (int)puVar16;
        iVar21 = 0;
        uVar5 = FUN_4a0bf62c(auStack_3c);
        if (iStack_78 == 0) {
          puVar15 = (uint *)0x0;
        }
        else {
          puVar15 = *(uint **)(iStack_78 + 8);
        }
        *puVar15 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        uVar5 = FUN_4a0bf62c(auStack_3c);
        if (iStack_78 == 0) {
          iVar23 = 0;
        }
        else {
          iVar23 = *(int *)(iStack_78 + 8);
        }
        *(uint *)(iVar23 + 4) =
             uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        uVar5 = FUN_4a0bf62c(auStack_3c);
        if (iStack_78 != 0) {
          iVar21 = *(int *)(iStack_78 + 8);
        }
        *(uint *)(iVar21 + 8) =
             uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        uVar5 = FUN_4a0bf62c(auStack_3c);
        FUN_4a0addc0(piStack_54,iVar4,uStack_70,
                     uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18
                    );
        uVar5 = uStack_7c;
        puStack_84 = puVar1;
        iVar21 = FUN_4a0bcc84(&puStack_84);
        if (iVar21 != 0) {
          iVar23 = 0;
          if (0 < (int)uVar5) {
            do {
              iVar23 = iVar23 + 1;
            } while (iVar23 < (int)uVar5);
            if (iVar21 == 0) goto LAB_4a0aabd4;
          }
          FUN_4a14f21c(iVar21);
        }
LAB_4a0aabd4:
        FUN_4a0c6bf4(&puStack_84);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)apiStack_6c[0]);
    }
    piVar17 = piStack_54;
    piVar24 = apiStack_6c[3];
    apiStack_6c[1] = (int *)puVar1;
    iVar4 = FUN_4a0bcc84(apiStack_6c + 1);
    if (iVar4 != 0) {
      iVar21 = 0;
      if (0 < (int)piVar24) {
        do {
          iVar21 = iVar21 + 1;
        } while (iVar21 < (int)piVar24);
        if (iVar4 == 0) goto LAB_4a0aac34;
      }
      FUN_4a14f21c(iVar4);
    }
LAB_4a0aac34:
    FUN_4a0c6bf4(apiStack_6c + 1);
    break;
  case 0x16:
    thunk_FUN_4a161570(0xe8);
    piVar17 = (int *)FUN_4a0b50dc();
    FUN_4a0b2080(piVar17,auStack_3c,param_2,param_3);
    uVar6 = FUN_4a0bf53c(auStack_3c);
    uVar18 = FUN_4a0bf53c(auStack_3c);
    uVar19 = FUN_4a0bf578(auStack_3c);
    uVar20 = FUN_4a0bf62c(auStack_3c);
    iVar4 = FUN_4a0bf53c(auStack_3c);
    if (iVar4 != 0) {
      FUN_4a0bf578(auStack_3c);
      FUN_4a0bf578(auStack_3c);
      FUN_4a0ae944(auStack_3c,param_2,0);
      FUN_4a0ae944(auStack_3c,param_2,0);
    }
    FUN_4a0b4608(piVar17,uVar6);
    FUN_4a0b4604(piVar17,uVar18);
    uVar6 = FUN_4a171fac(uVar19);
    uVar6 = FUN_4a17211c(uVar6,DAT_4a0aa598);
    FUN_4a0b45d8(piVar17,uVar6);
    FUN_4a0b4704(piVar17,uVar20);
    uVar5 = FUN_4a0bf62c(auStack_3c);
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    iVar4 = 0;
    if (0 < (int)uVar5) {
      do {
        uVar6 = FUN_4a0ae944(auStack_3c,param_2,param_3);
        FUN_4a0b4c10(piVar17,uVar6);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar5);
    }
    uVar6 = FUN_4a0ae944(auStack_3c,param_2,param_3);
    uVar18 = FUN_4a0ae944(auStack_3c,param_2,param_3);
    FUN_4a0b5070(piVar17,uVar6);
    FUN_4a0b5004(piVar17,uVar18);
  }
  iVar4 = *(int *)(param_2 + 0xc);
  if ((*(int *)(param_2 + 0x10) == iVar4) &&
     (iVar21 = *(int *)(param_2 + 8) + iVar4, iVar4 < iVar21)) {
    *(int *)(param_2 + 0xc) = iVar21;
    iVar23 = *(int *)(param_2 + 0x14);
    iVar4 = thunk_FUN_4a161570(iVar21 * 4);
    *(int *)(param_2 + 0x14) = iVar4;
    if (iVar4 != 0) {
      iVar4 = 0;
      if (0 < *(int *)(param_2 + 0x10)) {
        do {
          iVar21 = iVar4 + 1;
          *(undefined4 *)(*(int *)(param_2 + 0x14) + iVar4 * 4) =
               *(undefined4 *)(iVar23 + iVar4 * 4);
          iVar4 = iVar21;
        } while (iVar21 < *(int *)(param_2 + 0x10));
      }
      thunk_FUN_4a161530(iVar23);
    }
    iVar4 = *(int *)(param_2 + 0x10);
    if (iVar4 < *(int *)(param_2 + 0xc)) {
      do {
        iVar21 = iVar4 + 1;
        *(undefined4 *)(*(int *)(param_2 + 0x14) + iVar4 * 4) = 0;
        iVar4 = iVar21;
      } while (iVar21 < *(int *)(param_2 + 0xc));
    }
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 1;
  piVar24 = *(int **)(*(int *)(param_2 + 0x14) + iVar4 * 4);
  if (piVar17 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4a0aae70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(*piVar17 + 0xc))();
    return uVar6;
  }
  *(undefined4 *)(*(int *)(param_2 + 0x14) + iVar4 * 4) = 0;
  if ((piVar24 != (int *)0x0) && (iVar4 = (**(code **)(*piVar24 + 8))(piVar24), iVar4 != 0)) {
    (**(code **)(*piVar24 + 4))(piVar24);
  }
  thunk_FUN_4a161530(uStack_2c);
  FUN_4a0bfcf4(auStack_3c);
  return 1;
}



// Address: 4a0aafec

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0aafec(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int unaff_r4;
  int iVar10;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  undefined1 auStack_38 [20];
  
  iVar10 = *(int *)(param_2 + 8);
  piVar4 = (int *)FUN_4a0c6bc0(auStack_38);
  puVar3 = PTR_PTR_4a0ab168;
  piVar4[2] = 0;
  piVar4[3] = 0;
  *piVar4 = (int)puVar3;
  if (0 < iVar10) {
    iVar5 = FUN_4a15e080(iVar10 << 1);
    if (iVar5 == 0) {
      iVar5 = FUN_4a1669a8();
    }
    iVar8 = 0;
    do {
      iVar7 = iVar8 * 2;
      iVar8 = iVar8 + 1;
      *(undefined2 *)(iVar5 + iVar7) = 0;
    } while (iVar8 < iVar10);
    thunk_FUN_4a161570(0x18);
    puVar6 = (undefined4 *)FUN_4a0c0628();
    puVar6[3] = 2;
    puVar6[4] = iVar10;
    puVar3 = PTR_PTR_4a0ab16c;
    *puVar6 = PTR_PTR_4a0ab16c;
    puVar6[2] = iVar5;
    *(undefined1 *)(puVar6 + 5) = 1;
    if (puVar6 != (undefined4 *)0x0) {
      (**(code **)(puVar3 + 0xc))(puVar6);
    }
    (**(code **)(*piVar4 + 0x1c))(piVar4);
    piVar4[2] = iVar10;
    piVar4[3] = (int)puVar6;
  }
  iVar5 = piVar4[2];
  piVar4 = (int *)piVar4[3];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))(piVar4);
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x1c))((int *)(param_1 + 0x30));
  *(int *)(param_1 + 0x38) = iVar5;
  *(int **)(param_1 + 0x3c) = piVar4;
  FUN_4a16c348(auStack_38);
  iVar5 = iVar10;
  iVar8 = 0;
  if (iVar10 < 1) {
    iVar5 = unaff_r4;
    param_1 = unaff_r5;
    param_2 = unaff_r6;
    iVar8 = unaff_r7;
  }
  iVar7 = 0;
  if (iVar10 < 1) {
    return;
  }
  do {
    iVar10 = iVar8;
    if (*(int *)(param_2 + 0xc) != 0) {
      iVar10 = *(int *)(*(int *)(param_2 + 0xc) + 8);
    }
    iVar2 = iVar7 * 4;
    iVar9 = iVar8;
    if (*(int *)(param_1 + 0x3c) != 0) {
      iVar9 = *(int *)(*(int *)(param_1 + 0x3c) + 8);
    }
    iVar1 = iVar7 * 2;
    iVar7 = iVar7 + 1;
    *(short *)(iVar9 + iVar1) = (short)*(undefined4 *)(iVar10 + iVar2);
  } while (iVar7 < iVar5);
  return;
}



// Address: 4a0ab170

void FUN_4a0ab170(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}



// Address: 4a0ab178

void FUN_4a0ab178(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int in_lr;
  int iVar13;
  
  iVar13 = 0;
  iVar6 = 0;
  if (0 < *(int *)(param_3 + 8)) {
    do {
      if (*(int *)(param_3 + 0xc) == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *(int *)(*(int *)(param_3 + 0xc) + 8);
      }
      iVar7 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      iVar13 = iVar13 + -2 + *(int *)(iVar11 + iVar7);
    } while (iVar6 < *(int *)(param_3 + 8));
  }
  iVar6 = iVar13 * 3;
  *(int *)(param_2 + 0x2c) = iVar13;
  piVar2 = (int *)FUN_4a0c6bc0();
  puVar1 = PTR_PTR_4a0ab438;
  piVar2[2] = 0;
  piVar2[3] = 0;
  *piVar2 = (int)puVar1;
  if (0 < iVar6) {
    iVar13 = FUN_4a15e080(iVar13 * 0xc);
    if (iVar13 == 0) {
      iVar13 = FUN_4a1669a8();
    }
    iVar11 = 0;
    do {
      *(undefined4 *)(iVar13 + iVar11 * 4) = 0;
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar6);
    thunk_FUN_4a161570(0x18);
    puVar3 = (undefined4 *)FUN_4a0c0628();
    puVar3[3] = 4;
    puVar3[4] = iVar6;
    puVar1 = PTR_PTR_4a0ab43c;
    *puVar3 = PTR_PTR_4a0ab43c;
    puVar3[2] = iVar13;
    *(undefined1 *)(puVar3 + 5) = 1;
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar3);
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
    piVar2[2] = iVar6;
    piVar2[3] = (int)puVar3;
  }
  iVar7 = 0;
  iVar6 = 0;
  iVar13 = param_3;
  iVar11 = 0;
  if (*(int *)(param_3 + 8) < 1) {
    piVar2 = unaff_r4;
    param_4 = unaff_r5;
    iVar6 = unaff_r6;
    iVar13 = unaff_r7;
    iVar11 = in_lr;
  }
  iVar12 = 0;
  if (0 < *(int *)(param_3 + 8)) {
    do {
      iVar8 = iVar6;
      if (*(int *)(iVar13 + 0xc) != 0) {
        iVar8 = *(int *)(*(int *)(iVar13 + 0xc) + 8);
      }
      uVar4 = 0;
      iVar5 = iVar11;
      if (0 < *(int *)(iVar8 + iVar12 * 4) + -2) {
        do {
          if ((uVar4 & 1) == 0) {
            iVar8 = iVar6;
            if (*(int *)(param_4 + 0xc) != 0) {
              iVar8 = *(int *)(*(int *)(param_4 + 0xc) + 8);
            }
            iVar9 = iVar6;
            if (piVar2[3] != 0) {
              iVar9 = *(int *)(piVar2[3] + 8);
            }
            *(undefined4 *)(iVar9 + iVar7 * 4) = *(undefined4 *)(iVar8 + iVar5 * 4);
            iVar8 = iVar6;
            if (*(int *)(param_4 + 0xc) != 0) {
              iVar8 = *(int *)(*(int *)(param_4 + 0xc) + 8);
            }
            iVar9 = iVar6;
            if (piVar2[3] != 0) {
              iVar9 = *(int *)(piVar2[3] + 8);
            }
            *(undefined4 *)(iVar9 + (iVar7 + 1) * 4) = *(undefined4 *)(iVar8 + (iVar5 + 1) * 4);
            iVar8 = iVar6;
            if (*(int *)(param_4 + 0xc) != 0) {
              iVar8 = *(int *)(*(int *)(param_4 + 0xc) + 8);
            }
            uVar10 = *(undefined4 *)(iVar8 + (iVar5 + 2) * 4);
            iVar8 = piVar2[3];
          }
          else {
            iVar8 = iVar6;
            if (*(int *)(param_4 + 0xc) != 0) {
              iVar8 = *(int *)(*(int *)(param_4 + 0xc) + 8);
            }
            iVar9 = iVar6;
            if (piVar2[3] != 0) {
              iVar9 = *(int *)(piVar2[3] + 8);
            }
            *(undefined4 *)(iVar9 + iVar7 * 4) = *(undefined4 *)(iVar8 + (iVar5 + 1) * 4);
            iVar8 = iVar6;
            if (*(int *)(param_4 + 0xc) != 0) {
              iVar8 = *(int *)(*(int *)(param_4 + 0xc) + 8);
            }
            iVar9 = iVar6;
            if (piVar2[3] != 0) {
              iVar9 = *(int *)(piVar2[3] + 8);
            }
            *(undefined4 *)(iVar9 + (iVar7 + 1) * 4) = *(undefined4 *)(iVar8 + iVar5 * 4);
            iVar8 = iVar6;
            if (*(int *)(param_4 + 0xc) != 0) {
              iVar8 = *(int *)(*(int *)(param_4 + 0xc) + 8);
            }
            uVar10 = *(undefined4 *)(iVar8 + (iVar5 + 2) * 4);
            iVar8 = piVar2[3];
          }
          iVar9 = iVar6;
          if (iVar8 != 0) {
            iVar9 = *(int *)(iVar8 + 8);
          }
          *(undefined4 *)(iVar9 + (iVar7 + 2) * 4) = uVar10;
          uVar4 = uVar4 + 1;
          iVar8 = iVar6;
          if (*(int *)(iVar13 + 0xc) != 0) {
            iVar8 = *(int *)(*(int *)(iVar13 + 0xc) + 8);
          }
          iVar5 = iVar5 + 1;
          iVar7 = iVar7 + 3;
        } while ((int)uVar4 < *(int *)(iVar8 + iVar12 * 4) + -2);
      }
      iVar8 = iVar6;
      if (*(int *)(iVar13 + 0xc) != 0) {
        iVar8 = *(int *)(*(int *)(iVar13 + 0xc) + 8);
      }
      iVar5 = iVar12 * 4;
      iVar12 = iVar12 + 1;
      iVar11 = iVar11 + *(int *)(iVar8 + iVar5);
    } while (iVar12 < *(int *)(iVar13 + 8));
    return;
  }
  return;
}



// Address: 4a0ab440

void FUN_4a0ab440(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined2 *extraout_r1;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined1 auStack_38 [20];
  
  uVar10 = *(uint *)(param_2 + 8);
  piVar3 = (int *)FUN_4a0c6bc0(auStack_38);
  puVar2 = PTR_PTR_4a0ab5d8;
  puVar11 = (undefined4 *)0x0;
  piVar3[2] = 0;
  piVar3[3] = 0;
  *piVar3 = (int)puVar2;
  if (0 < (int)uVar10) {
    iVar4 = FUN_4a15e080(uVar10 << 1);
    if (iVar4 == 0) {
      iVar4 = FUN_4a1669a8();
    }
    iVar6 = 0;
    do {
      iVar1 = iVar6 * 2;
      iVar6 = iVar6 + 1;
      *(undefined2 *)(iVar4 + iVar1) = 0;
    } while (iVar6 < (int)uVar10);
    thunk_FUN_4a161570(0x18);
    puVar5 = (undefined4 *)FUN_4a0c0628();
    puVar5[3] = 2;
    puVar5[4] = uVar10;
    puVar2 = PTR_PTR_4a0ab5dc;
    *puVar5 = PTR_PTR_4a0ab5dc;
    puVar5[2] = iVar4;
    *(undefined1 *)(puVar5 + 5) = 1;
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)(puVar2 + 0xc))(puVar5);
    }
    (**(code **)(*piVar3 + 0x1c))(piVar3);
    piVar3[2] = uVar10;
    piVar3[3] = (int)puVar5;
  }
  iVar4 = piVar3[2];
  piVar3 = (int *)piVar3[3];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  (**(code **)(*(int *)(param_1 + 0x44) + 0x1c))((int *)(param_1 + 0x44));
  *(int *)(param_1 + 0x4c) = iVar4;
  *(int **)(param_1 + 0x50) = piVar3;
  FUN_4a16c348(auStack_38);
  iVar4 = *(int *)(param_1 + 0x50);
  puVar7 = extraout_r1;
  if (iVar4 != 0) {
    puVar7 = *(undefined2 **)(iVar4 + 8);
  }
  if (iVar4 == 0) {
    puVar7 = (undefined2 *)0x0;
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    puVar11 = *(undefined4 **)(*(int *)(param_2 + 0xc) + 8);
  }
  if (0 < (int)uVar10) {
    puVar5 = puVar11 + -1;
    puVar8 = puVar7 + -1;
    if ((uVar10 & 1) != 0) {
      *puVar7 = (short)*puVar11;
      puVar5 = puVar11;
      puVar8 = puVar7;
    }
    uVar9 = puVar5[1];
    iVar4 = (int)uVar10 >> 1;
    if (iVar4 != 0) {
      do {
        uVar12 = puVar5[2];
        puVar8[1] = (short)uVar9;
        uVar9 = puVar5[3];
        iVar4 = iVar4 + -1;
        puVar8 = puVar8 + 2;
        *puVar8 = (short)uVar12;
        puVar5 = puVar5 + 2;
      } while (iVar4 != 0);
      return;
    }
    return;
  }
  return;
}



// Address: 4a0ab5e0

void FUN_4a0ab5e0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  return;
}



// Address: 4a0ab5e8

void FUN_4a0ab5e8(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = 0;
  iVar5 = 0;
  iVar8 = 0;
  if (0 < *(int *)(param_3 + 8)) {
    do {
      if (*(int *)(param_3 + 0xc) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(*(int *)(param_3 + 0xc) + 8);
      }
      iVar7 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      iVar10 = iVar10 + -2 + *(int *)(iVar9 + iVar7);
    } while (iVar5 < *(int *)(param_3 + 8));
  }
  iVar5 = iVar10 * 3;
  *(int *)(param_2 + 0x2c) = iVar10;
  piVar2 = (int *)FUN_4a0c6bc0();
  puVar1 = PTR_PTR_4a0ab82c;
  piVar2[2] = 0;
  piVar2[3] = 0;
  *piVar2 = (int)puVar1;
  if (0 < iVar5) {
    iVar10 = FUN_4a15e080(iVar10 * 0xc);
    if (iVar10 == 0) {
      iVar10 = FUN_4a1669a8();
    }
    iVar9 = 0;
    do {
      *(undefined4 *)(iVar10 + iVar9 * 4) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar5);
    thunk_FUN_4a161570(0x18);
    puVar3 = (undefined4 *)FUN_4a0c0628();
    puVar3[3] = 4;
    puVar3[4] = iVar5;
    puVar1 = PTR_PTR_4a0ab830;
    *puVar3 = PTR_PTR_4a0ab830;
    puVar3[2] = iVar10;
    *(undefined1 *)(puVar3 + 5) = 1;
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar3);
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
    piVar2[2] = iVar5;
    piVar2[3] = (int)puVar3;
  }
  iVar5 = 0;
  iVar10 = 0;
  if (0 < *(int *)(param_3 + 8)) {
    do {
      iVar9 = iVar8;
      if (*(int *)(param_3 + 0xc) != 0) {
        iVar9 = *(int *)(*(int *)(param_3 + 0xc) + 8);
      }
      uVar4 = 0;
      iVar7 = param_4;
      if (0 < *(int *)(iVar9 + iVar10 * 4) + -2) {
        do {
          iVar9 = piVar2[3];
          if ((uVar4 & 1) == 0) {
            iVar6 = iVar8;
            if (iVar9 != 0) {
              iVar6 = *(int *)(iVar9 + 8);
            }
            *(int *)(iVar6 + iVar5 * 4) = iVar7;
            iVar9 = iVar8;
            if (piVar2[3] != 0) {
              iVar9 = *(int *)(piVar2[3] + 8);
            }
            *(int *)(iVar9 + (iVar5 + 1) * 4) = iVar7 + 1;
            iVar9 = piVar2[3];
          }
          else {
            iVar6 = iVar8;
            if (iVar9 != 0) {
              iVar6 = *(int *)(iVar9 + 8);
            }
            *(int *)(iVar6 + iVar5 * 4) = iVar7 + 1;
            iVar9 = iVar8;
            if (piVar2[3] != 0) {
              iVar9 = *(int *)(piVar2[3] + 8);
            }
            *(int *)(iVar9 + (iVar5 + 1) * 4) = iVar7;
            iVar9 = piVar2[3];
          }
          iVar6 = iVar8;
          if (iVar9 != 0) {
            iVar6 = *(int *)(iVar9 + 8);
          }
          *(int *)(iVar6 + (iVar5 + 2) * 4) = iVar7 + 2;
          uVar4 = uVar4 + 1;
          iVar9 = iVar8;
          if (*(int *)(param_3 + 0xc) != 0) {
            iVar9 = *(int *)(*(int *)(param_3 + 0xc) + 8);
          }
          iVar7 = iVar7 + 1;
          iVar5 = iVar5 + 3;
        } while ((int)uVar4 < *(int *)(iVar9 + iVar10 * 4) + -2);
      }
      iVar9 = iVar8;
      if (*(int *)(param_3 + 0xc) != 0) {
        iVar9 = *(int *)(*(int *)(param_3 + 0xc) + 8);
      }
      iVar7 = iVar10 * 4;
      iVar10 = iVar10 + 1;
      param_4 = param_4 + *(int *)(iVar9 + iVar7);
    } while (iVar10 < *(int *)(param_3 + 8));
    return;
  }
  return;
}



// Address: 4a0ab840

int FUN_4a0ab840(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_24 [20];
  
  puVar1 = (undefined4 *)FUN_4a0b7654();
  *puVar1 = PTR_PTR_4a0ab8c8;
  puVar1[10] = 0xffffffff;
  puVar1[0xb] = 0xffffffff;
  iVar2 = FUN_4a16c320(puVar1 + 0xc);
  iVar2 = FUN_4a16c320(iVar2 + 0x14);
  iVar3 = iVar2 + -0x44;
  *(undefined1 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  FUN_4a0ab178(auStack_24,iVar3,param_3,param_4);
  *(undefined4 *)(iVar2 + 0x18) = 8;
  FUN_4a0aafec(iVar3,auStack_24);
  FUN_4a16bef4(auStack_24);
  return iVar3;
}



// Address: 4a0ab8cc

int FUN_4a0ab8cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_24 [20];
  
  puVar1 = (undefined4 *)FUN_4a0b7654();
  *puVar1 = PTR_PTR_4a0ab954;
  puVar1[10] = 0xffffffff;
  puVar1[0xb] = 0xffffffff;
  iVar2 = FUN_4a16c320(puVar1 + 0xc);
  iVar2 = FUN_4a16c320(iVar2 + 0x14);
  iVar3 = iVar2 + -0x44;
  *(undefined1 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  FUN_4a0ab5e8(auStack_24,iVar3,param_3,param_4);
  *(undefined4 *)(iVar2 + 0x18) = 8;
  FUN_4a0aafec(iVar3,auStack_24);
  FUN_4a16bef4(auStack_24);
  return iVar3;
}



// Address: 4a0ab958

int FUN_4a0ab958(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_4a0b7654();
  *puVar1 = PTR_PTR_4a0ab9bc;
  puVar1[10] = 0xffffffff;
  puVar1[0xb] = 0xffffffff;
  iVar2 = FUN_4a16c320(puVar1 + 0xc);
  iVar2 = FUN_4a16c320(iVar2 + 0x14);
  *(undefined1 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = param_2;
  *(undefined4 *)(iVar2 + -0x18) = param_3;
  FUN_4a0aafec(iVar2 + -0x44,param_4);
  return iVar2 + -0x44;
}



// Address: 4a0ab9c0

void FUN_4a0ab9c0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_4a0b7654();
  *puVar1 = PTR_PTR_4a0aba04;
  puVar1[10] = 0xffffffff;
  puVar1[0xb] = 0xffffffff;
  iVar2 = FUN_4a16c320(puVar1 + 0xc);
  iVar2 = FUN_4a16c320(iVar2 + 0x14);
  *(undefined1 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  return;
}



// Address: 4a0aba64

void FUN_4a0aba64(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}



// Address: 4a0aba6c

void FUN_4a0aba6c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



// Address: 4a0aba74

void FUN_4a0aba74(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



// Address: 4a0aba7c

void FUN_4a0aba7c(int param_1,int param_2)

{
  FUN_4a0b706c();
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined1 *)(param_2 + 0x34) = *(undefined1 *)(param_1 + 0x34);
  *(undefined1 *)(param_2 + 0x35) = *(undefined1 *)(param_1 + 0x35);
  *(undefined1 *)(param_2 + 0x36) = *(undefined1 *)(param_1 + 0x36);
  return;
}



// Address: 4a0abac4

void FUN_4a0abac4(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x34) = param_2;
  return;
}



// Address: 4a0abacc

void FUN_4a0abacc(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x35) = param_2;
  return;
}



// Address: 4a0abad4

void FUN_4a0abad4(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x36) = param_2;
  return;
}



// Address: 4a0abadc

void FUN_4a0abadc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0b7654();
  *puVar1 = PTR_PTR_4a0abb1c;
  puVar1[10] = 0xa0;
  puVar1[0xb] = 0xa8;
  puVar1[0xc] = 0xa5;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  *(undefined1 *)((int)puVar1 + 0x35) = 0;
  *(undefined1 *)((int)puVar1 + 0x36) = 0;
  return;
}



// Address: 4a0abb3c

void FUN_4a0abb3c(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_4a0b39d8();
  iVar2 = param_1[0x45];
  uVar1 = FUN_4a0b75a8(iVar2);
  FUN_4a0abb88(param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x4a0abb84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,param_2,iVar2,uVar1);
  return;
}



// Address: 4a0abb88

void FUN_4a0abb88(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  FUN_4a13b5e4();
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar2 = *(int **)(param_1 + 0x114);
  *(int **)(param_1 + 0x114) = param_2;
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  FUN_4a0b470c(*(undefined4 *)(param_1 + 0x114),param_1);
  if (*(char *)(param_1 + 0x118) != '\0') {
    uVar3 = *(undefined4 *)(param_1 + 0x114);
    FUN_4a13b5e4(param_1);
    FUN_4a0abd90(param_1,uVar3);
    FUN_4a0ac580(param_1,uVar3,0);
    return;
  }
  return;
}



// Address: 4a0abc4c

void FUN_4a0abc4c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_4a0abd90();
  FUN_4a0ac580(param_1,param_2,param_3,param_4,param_5);
  return;
}



// Address: 4a0abc88

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0abc88(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_4a17006c(param_1[0x49],param_3);
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    iVar4 = 0;
    if (*(int *)(iVar1 + 0xc) != 0) {
      iVar4 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
    }
    iVar1 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = *(int *)(iVar4 + iVar1 * 4);
        if (iVar2 != 0) {
          FUN_4a0abd90(param_2,param_4);
          FUN_4a0ac580(param_2,param_4,iVar2,iVar1);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar3);
    }
  }
  iVar1 = FUN_4a165910(param_3);
  if (iVar1 != 0) {
    iVar4 = FUN_4a165910(param_4);
    iVar2 = 0;
    iVar3 = 0;
    if (*(int *)(iVar1 + 0xdc) != 0) {
      iVar3 = *(int *)(*(int *)(iVar1 + 0xdc) + 0x10);
    }
    if (0 < iVar3) {
      do {
        (**(code **)(*param_1 + 0x38))
                  (param_1,param_2,
                   *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0xdc) + 0x14) + iVar2 * 4),
                   *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0xdc) + 0x14) + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a0abd48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a0abd90

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0abd90(int param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar1 = PTR_PTR_4a0ac570;
  if (*(int *)(param_1 + 0x120) == 0) {
    thunk_FUN_4a161570(0x4c);
    puVar3 = (undefined4 *)FUN_4a0c6bc0();
    *puVar3 = PTR_PTR_4a0ac574;
    puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 2);
    *puVar3 = puVar1;
    puVar3[4] = 0;
    puVar3[2] = 10;
    puVar3[3] = 0xb;
    puVar3[5] = 0;
    iVar4 = thunk_FUN_4a161570(0x2c);
    puVar3[5] = iVar4;
    if (iVar4 != 0) {
      iVar4 = 0;
      if (0 < (int)puVar3[4]) {
        do {
          iVar9 = iVar4 + 1;
          *(undefined4 *)(puVar3[5] + iVar4 * 4) = *(undefined4 *)(iVar4 * 4);
          iVar4 = iVar9;
        } while (iVar9 < (int)puVar3[4]);
      }
      thunk_FUN_4a161530(0);
    }
    iVar4 = puVar3[4];
    if ((int)puVar3[4] < (int)puVar3[3]) {
      do {
        iVar9 = iVar4 + 1;
        *(undefined4 *)(puVar3[5] + iVar4 * 4) = 0;
        iVar4 = iVar9;
      } while (iVar9 < (int)puVar3[3]);
    }
    puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 6);
    *puVar3 = PTR_PTR_4a0ac578;
    puVar3[4] = 0;
    puVar3[2] = 10;
    puVar3[3] = 0xb;
    puVar3[5] = 0;
    iVar4 = thunk_FUN_4a161570(0x2c);
    puVar3[5] = iVar4;
    if (iVar4 != 0) {
      iVar4 = 0;
      if (0 < (int)puVar3[4]) {
        do {
          iVar9 = iVar4 + 1;
          *(undefined4 *)(puVar3[5] + iVar4 * 4) = *(undefined4 *)(iVar4 * 4);
          iVar4 = iVar9;
        } while (iVar9 < (int)puVar3[4]);
      }
      thunk_FUN_4a161530(0);
    }
    iVar4 = puVar3[4];
    if ((int)puVar3[4] < (int)puVar3[3]) {
      do {
        iVar9 = iVar4 + 1;
        *(undefined4 *)(puVar3[5] + iVar4 * 4) = 0;
        iVar4 = iVar9;
      } while (iVar9 < (int)puVar3[3]);
    }
    puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 6);
    puVar2 = PTR_PTR_4a0ac57c;
    puVar3[2] = 0;
    *puVar3 = puVar2;
    piVar5 = puVar3 + -0xe;
    puVar3[3] = 0;
    FUN_4a16ca98(piVar5,0xb);
    *(int **)(param_1 + 0x120) = piVar5;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))();
    }
  }
  if (*(int *)(param_1 + 0x11c) == 0) {
    thunk_FUN_4a161570(0x18);
    piVar5 = (int *)FUN_4a0c6bc0();
    *piVar5 = (int)puVar1;
    piVar5[4] = 0;
    piVar5[2] = 10;
    piVar5[3] = 10;
    piVar5[5] = 0;
    iVar4 = thunk_FUN_4a161570(0x28);
    piVar5[5] = iVar4;
    if (iVar4 != 0) {
      iVar4 = 0;
      if (0 < piVar5[4]) {
        do {
          iVar9 = iVar4 + 1;
          *(undefined4 *)(piVar5[5] + iVar4 * 4) = *(undefined4 *)(iVar4 * 4);
          iVar4 = iVar9;
        } while (iVar9 < piVar5[4]);
      }
      thunk_FUN_4a161530(0);
    }
    iVar4 = piVar5[4];
    if (piVar5[4] < piVar5[3]) {
      do {
        iVar9 = iVar4 + 1;
        *(undefined4 *)(piVar5[5] + iVar4 * 4) = 0;
        iVar4 = iVar9;
      } while (iVar9 < piVar5[3]);
    }
    *(int **)(param_1 + 0x11c) = piVar5;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))();
    }
  }
  iVar9 = *(int *)(param_1 + 0x120);
  uVar6 = (**(code **)(*param_2 + 0x18))(param_2);
  iVar11 = *(int *)(iVar9 + 0x40);
  FUN_4a0015f0(uVar6 & 0x7fffffff,iVar11);
  iVar4 = extraout_r1;
  if (extraout_r1 == 0) {
    iVar4 = iVar11;
  }
  iVar10 = extraout_r1;
  do {
    if (iVar10 == iVar11) {
      iVar10 = 0;
    }
    iVar7 = 0;
    if (*(int *)(iVar9 + 0x44) != 0) {
      iVar7 = *(int *)(*(int *)(iVar9 + 0x44) + 8);
    }
    iVar7 = *(int *)(iVar7 + iVar10 * 4);
    if (iVar7 < 0) {
      if (iVar7 == -1) break;
    }
    else {
      piVar5 = *(int **)(*(int *)(iVar9 + 0x1c) + iVar7 * 4);
      uVar8 = (**(code **)(*piVar5 + 0x18))(piVar5);
      if ((uVar8 == uVar6) &&
         ((param_2 == piVar5 || (iVar7 = (**(code **)(*param_2 + 0x14))(param_2,piVar5), iVar7 != 0)
          ))) goto LAB_4a0ac0cc;
    }
    if (iVar10 == iVar4 + -1) break;
    iVar10 = iVar10 + 1;
  } while( true );
  iVar10 = -1;
LAB_4a0ac0cc:
  if (-1 < iVar10) {
    return;
  }
  thunk_FUN_4a161570(0x48);
  piVar5 = (int *)FUN_4a0b8a1c();
  FUN_4a13b6a8(param_1,param_2,piVar5);
  iVar9 = *(int *)(param_1 + 0x120);
  uVar6 = (**(code **)(*param_2 + 0x18))(param_2);
  iVar11 = *(int *)(iVar9 + 0x40);
  FUN_4a0015f0(uVar6 & 0x7fffffff,iVar11);
  iVar4 = extraout_r1_00;
  if (extraout_r1_00 == 0) {
    iVar4 = iVar11;
  }
  iVar10 = extraout_r1_00;
  do {
    if (iVar10 == iVar11) {
      iVar10 = 0;
    }
    iVar7 = 0;
    if (*(int *)(iVar9 + 0x44) != 0) {
      iVar7 = *(int *)(*(int *)(iVar9 + 0x44) + 8);
    }
    iVar7 = *(int *)(iVar7 + iVar10 * 4);
    if (iVar7 < 0) {
      if (iVar7 == -1) break;
    }
    else {
      piVar12 = *(int **)(*(int *)(iVar9 + 0x1c) + iVar7 * 4);
      uVar8 = (**(code **)(*piVar12 + 0x18))(piVar12);
      if ((uVar8 == uVar6) &&
         ((param_2 == piVar12 ||
          (iVar7 = (**(code **)(*param_2 + 0x14))(param_2,piVar12), iVar7 != 0))))
      goto LAB_4a0ac1c0;
    }
    if (iVar10 == iVar4 + -1) break;
    iVar10 = iVar10 + 1;
  } while( true );
  iVar10 = -1;
LAB_4a0ac1c0:
  if (iVar10 < 0) {
    iVar11 = *(int *)(iVar9 + 0x40);
    iVar4 = FUN_4a0015f0(*(int *)(iVar9 + 0x18) * 100);
    if (0x4a < iVar4) {
      FUN_4a16ca98(iVar9,iVar11 * 2 + 1);
    }
    uVar6 = (**(code **)(*param_2 + 0x18))(param_2);
    iVar11 = *(int *)(iVar9 + 0x40);
    FUN_4a0015f0(uVar6 & 0x7fffffff,iVar11);
    iVar4 = extraout_r1_01;
    if (extraout_r1_01 == 0) {
      iVar4 = iVar11;
    }
    iVar10 = extraout_r1_01;
    while( true ) {
      if (iVar10 == iVar11) {
        iVar10 = 0;
      }
      iVar7 = 0;
      if (*(int *)(iVar9 + 0x44) != 0) {
        iVar7 = *(int *)(*(int *)(iVar9 + 0x44) + 8);
      }
      uVar8 = *(uint *)(iVar7 + iVar10 * 4);
      if ((int)uVar8 < 0) {
        if (0xfffffffd < uVar8) goto LAB_4a0ac324;
      }
      else {
        piVar12 = *(int **)(*(int *)(iVar9 + 0x1c) + uVar8 * 4);
        uVar8 = (**(code **)(*piVar12 + 0x18))(piVar12);
        if ((uVar8 == uVar6) &&
           ((param_2 == piVar12 ||
            (iVar7 = (**(code **)(*param_2 + 0x14))(param_2,piVar12), iVar7 != 0))))
        goto LAB_4a0ac324;
      }
      if (iVar10 == iVar4 + -1) break;
      iVar10 = iVar10 + 1;
    }
    iVar10 = -1;
LAB_4a0ac324:
    iVar4 = 0;
    if (*(int *)(iVar9 + 0x44) != 0) {
      iVar4 = *(int *)(*(int *)(iVar9 + 0x44) + 8);
    }
    *(undefined4 *)(iVar4 + iVar10 * 4) = *(undefined4 *)(iVar9 + 0x18);
    iVar4 = *(int *)(iVar9 + 0x14);
    if ((*(int *)(iVar9 + 0x18) == iVar4) &&
       (iVar11 = *(int *)(iVar9 + 0x10) + iVar4, iVar4 < iVar11)) {
      *(int *)(iVar9 + 0x14) = iVar11;
      iVar10 = *(int *)(iVar9 + 0x1c);
      iVar4 = thunk_FUN_4a161570(iVar11 * 4);
      *(int *)(iVar9 + 0x1c) = iVar4;
      if (iVar4 != 0) {
        iVar4 = 0;
        if (0 < *(int *)(iVar9 + 0x18)) {
          do {
            iVar11 = iVar4 + 1;
            *(undefined4 *)(*(int *)(iVar9 + 0x1c) + iVar4 * 4) =
                 *(undefined4 *)(iVar10 + iVar4 * 4);
            iVar4 = iVar11;
          } while (iVar11 < *(int *)(iVar9 + 0x18));
        }
        thunk_FUN_4a161530(iVar10);
      }
      iVar4 = *(int *)(iVar9 + 0x18);
      if (iVar4 < *(int *)(iVar9 + 0x14)) {
        do {
          iVar11 = iVar4 + 1;
          *(undefined4 *)(*(int *)(iVar9 + 0x1c) + iVar4 * 4) = 0;
          iVar4 = iVar11;
        } while (iVar11 < *(int *)(iVar9 + 0x14));
      }
    }
    iVar4 = *(int *)(iVar9 + 0x18);
    *(int *)(iVar9 + 0x18) = iVar4 + 1;
    piVar12 = *(int **)(*(int *)(iVar9 + 0x1c) + iVar4 * 4);
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 0xc))();
    }
    *(int **)(*(int *)(iVar9 + 0x1c) + iVar4 * 4) = param_2;
    if ((piVar12 != (int *)0x0) && (iVar4 = (**(code **)(*piVar12 + 8))(piVar12), iVar4 != 0)) {
      (**(code **)(*piVar12 + 4))(piVar12);
    }
    iVar4 = *(int *)(iVar9 + 0x2c);
    if ((*(int *)(iVar9 + 0x30) == iVar4) &&
       (iVar11 = *(int *)(iVar9 + 0x28) + iVar4, iVar4 < iVar11)) {
      *(int *)(iVar9 + 0x2c) = iVar11;
      iVar10 = *(int *)(iVar9 + 0x34);
      iVar4 = thunk_FUN_4a161570(iVar11 * 4);
      *(int *)(iVar9 + 0x34) = iVar4;
      if (iVar4 != 0) {
        iVar4 = 0;
        if (0 < *(int *)(iVar9 + 0x30)) {
          do {
            iVar11 = iVar4 + 1;
            *(undefined4 *)(*(int *)(iVar9 + 0x34) + iVar4 * 4) =
                 *(undefined4 *)(iVar10 + iVar4 * 4);
            iVar4 = iVar11;
          } while (iVar11 < *(int *)(iVar9 + 0x30));
        }
        thunk_FUN_4a161530(iVar10);
      }
      iVar4 = *(int *)(iVar9 + 0x30);
      if (iVar4 < *(int *)(iVar9 + 0x2c)) {
        do {
          iVar11 = iVar4 + 1;
          *(undefined4 *)(*(int *)(iVar9 + 0x34) + iVar4 * 4) = 0;
          iVar4 = iVar11;
        } while (iVar11 < *(int *)(iVar9 + 0x2c));
      }
    }
    iVar4 = *(int *)(iVar9 + 0x30);
    *(int *)(iVar9 + 0x30) = iVar4 + 1;
    piVar12 = *(int **)(*(int *)(iVar9 + 0x34) + iVar4 * 4);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))();
    }
    *(int **)(*(int *)(iVar9 + 0x34) + iVar4 * 4) = piVar5;
    if (piVar12 == (int *)0x0) goto LAB_4a0ac560;
    iVar4 = (**(code **)(*piVar12 + 8))(piVar12);
  }
  else {
    iVar4 = 0;
    if (*(int *)(iVar9 + 0x44) != 0) {
      iVar4 = *(int *)(*(int *)(iVar9 + 0x44) + 8);
    }
    iVar4 = *(int *)(iVar4 + iVar10 * 4);
    piVar12 = *(int **)(*(int *)(iVar9 + 0x34) + iVar4 * 4);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))();
    }
    *(int **)(*(int *)(iVar9 + 0x34) + iVar4 * 4) = piVar5;
    if (piVar12 == (int *)0x0) goto LAB_4a0ac560;
    iVar4 = (**(code **)(*piVar12 + 8))(piVar12);
  }
  if (iVar4 != 0) {
    (**(code **)(*piVar12 + 4))(piVar12);
  }
LAB_4a0ac560:
  iVar4 = *(int *)(param_1 + 0x11c);
  iVar9 = *(int *)(iVar4 + 0xc);
  if ((*(int *)(iVar4 + 0x10) == iVar9) && (iVar11 = *(int *)(iVar4 + 8) + iVar9, iVar9 < iVar11)) {
    *(int *)(iVar4 + 0xc) = iVar11;
    iVar10 = *(int *)(iVar4 + 0x14);
    iVar9 = thunk_FUN_4a161570(iVar11 * 4);
    *(int *)(iVar4 + 0x14) = iVar9;
    if (iVar9 != 0) {
      iVar9 = 0;
      if (0 < *(int *)(iVar4 + 0x10)) {
        do {
          iVar11 = iVar9 + 1;
          *(undefined4 *)(*(int *)(iVar4 + 0x14) + iVar9 * 4) = *(undefined4 *)(iVar10 + iVar9 * 4);
          iVar9 = iVar11;
        } while (iVar11 < *(int *)(iVar4 + 0x10));
      }
      thunk_FUN_4a161530(iVar10);
    }
    iVar9 = *(int *)(iVar4 + 0x10);
    if (iVar9 < *(int *)(iVar4 + 0xc)) {
      do {
        iVar11 = iVar9 + 1;
        *(undefined4 *)(*(int *)(iVar4 + 0x14) + iVar9 * 4) = 0;
        iVar9 = iVar11;
      } while (iVar11 < *(int *)(iVar4 + 0xc));
    }
  }
  iVar9 = *(int *)(iVar4 + 0x10);
  *(int *)(iVar4 + 0x10) = iVar9 + 1;
  piVar5 = *(int **)(*(int *)(iVar4 + 0x14) + iVar9 * 4);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  *(int **)(*(int *)(iVar4 + 0x14) + iVar9 * 4) = param_2;
  if (piVar5 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar5 + 8))(piVar5);
    if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a16d7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar5 + 4))(piVar5);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a16d79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a0ac580

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0ac580(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int extraout_r1;
  int extraout_r1_00;
  int iVar10;
  int iVar11;
  int *piVar12;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined1 auStack_3c [20];
  undefined4 local_28;
  
  FUN_4a13b5e4();
  iVar2 = FUN_4a13b5e4(param_1);
  local_28 = *(undefined4 *)(iVar2 + 0x28);
  if (*(int *)(param_1 + 0x124) == 0) {
    thunk_FUN_4a161570(0x4c);
    puVar3 = (undefined4 *)FUN_4a0c6bc0();
    *puVar3 = PTR_PTR_4a0acd00;
    puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 2);
    *puVar3 = PTR_PTR_4a0acd04;
    puVar3[2] = 10;
    puVar3[4] = 0;
    puVar3[3] = 0xb;
    puVar3[5] = 0;
    iVar2 = thunk_FUN_4a161570(0x2c);
    puVar3[5] = iVar2;
    if (iVar2 != 0) {
      iVar2 = 0;
      if (0 < (int)puVar3[4]) {
        do {
          iVar9 = iVar2 + 1;
          *(undefined4 *)(puVar3[5] + iVar2 * 4) = *(undefined4 *)(iVar2 * 4);
          iVar2 = iVar9;
        } while (iVar9 < (int)puVar3[4]);
      }
      thunk_FUN_4a161530(0);
    }
    iVar2 = puVar3[4];
    if ((int)puVar3[4] < (int)puVar3[3]) {
      do {
        iVar9 = iVar2 + 1;
        *(undefined4 *)(puVar3[5] + iVar2 * 4) = 0;
        iVar2 = iVar9;
      } while (iVar9 < (int)puVar3[3]);
    }
    puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 6);
    *puVar3 = PTR_PTR_4a0acd08;
    puVar3[2] = 10;
    puVar3[4] = 0;
    puVar3[3] = 0xb;
    puVar3[5] = 0;
    iVar2 = thunk_FUN_4a161570(0x2c);
    puVar3[5] = iVar2;
    if (iVar2 != 0) {
      iVar2 = 0;
      if (0 < (int)puVar3[4]) {
        do {
          iVar9 = iVar2 + 1;
          *(undefined4 *)(puVar3[5] + iVar2 * 4) = *(undefined4 *)(iVar2 * 4);
          iVar2 = iVar9;
        } while (iVar9 < (int)puVar3[4]);
      }
      thunk_FUN_4a161530(0);
    }
    iVar2 = puVar3[4];
    if ((int)puVar3[4] < (int)puVar3[3]) {
      do {
        iVar9 = iVar2 + 1;
        *(undefined4 *)(puVar3[5] + iVar2 * 4) = 0;
        iVar2 = iVar9;
      } while (iVar9 < (int)puVar3[3]);
    }
    puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 6);
    puVar1 = PTR_PTR_4a0acd0c;
    puVar3[2] = 0;
    *puVar3 = puVar1;
    piVar4 = puVar3 + -0xe;
    puVar3[3] = 0;
    FUN_4a16c6c8(piVar4,0xb);
    *(int **)(param_1 + 0x124) = piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))();
    }
  }
  piVar4 = (int *)FUN_4a17006c(*(undefined4 *)(param_1 + 0x124),param_2);
  if (piVar4 == (int *)0x0) {
    uVar5 = thunk_FUN_4a161570(0x14);
    piVar4 = (int *)FUN_4a16be24(uVar5,local_28);
  }
  if (*(int *)(param_1 + 0x130) == 0) {
    iVar2 = FUN_4a16be24(auStack_3c,local_28);
    uVar5 = *(undefined4 *)(iVar2 + 8);
    piVar12 = *(int **)(iVar2 + 0xc);
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 0xc))(piVar12);
    }
    (**(code **)(*(int *)(param_1 + 0x128) + 0x1c))((int *)(param_1 + 0x128));
    *(undefined4 *)(param_1 + 0x130) = uVar5;
    *(int **)(param_1 + 0x134) = piVar12;
    FUN_4a16bef4(auStack_3c);
  }
  param_5 = param_4 + param_5;
  for (; param_4 < param_5; param_4 = param_4 + 1) {
    if (piVar4[3] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(piVar4[3] + 8);
    }
    iVar2 = *(int *)(iVar2 + param_4 * 4);
    if (*(int *)(param_1 + 0x134) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(*(int *)(param_1 + 0x134) + 8);
    }
    piVar12 = (int *)(iVar9 + param_4 * 4);
    iVar9 = -iVar2;
    if (-iVar2 < iVar2) {
      iVar9 = iVar2;
    }
    *piVar12 = *piVar12 - iVar9;
    iVar2 = iVar2 + param_3;
    if (*(int *)(param_1 + 0x134) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(*(int *)(param_1 + 0x134) + 8);
    }
    piVar12 = (int *)(iVar9 + param_4 * 4);
    iVar9 = -iVar2;
    if (-iVar2 < iVar2) {
      iVar9 = iVar2;
    }
    *piVar12 = iVar9 + *piVar12;
    if (piVar4[3] == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(piVar4[3] + 8);
    }
    *(int *)(iVar9 + param_4 * 4) = iVar2;
  }
  iVar9 = *(int *)(param_1 + 0x124);
  uVar6 = (**(code **)(*param_2 + 0x18))(param_2);
  iVar11 = *(int *)(iVar9 + 0x40);
  FUN_4a0015f0(uVar6 & 0x7fffffff,iVar11);
  iVar2 = extraout_r1;
  if (extraout_r1 == 0) {
    iVar2 = iVar11;
  }
  iVar10 = extraout_r1;
  do {
    if (iVar10 == iVar11) {
      iVar10 = 0;
    }
    iVar7 = 0;
    if (*(int *)(iVar9 + 0x44) != 0) {
      iVar7 = *(int *)(*(int *)(iVar9 + 0x44) + 8);
    }
    iVar7 = *(int *)(iVar7 + iVar10 * 4);
    if (iVar7 < 0) {
      if (iVar7 == -1) break;
    }
    else {
      piVar12 = *(int **)(*(int *)(iVar9 + 0x1c) + iVar7 * 4);
      uVar8 = (**(code **)(*piVar12 + 0x18))(piVar12);
      if ((uVar8 == uVar6) &&
         ((param_2 == piVar12 ||
          (iVar7 = (**(code **)(*param_2 + 0x14))(param_2,piVar12), iVar7 != 0))))
      goto LAB_4a0ac94c;
    }
    if (iVar10 == iVar2 + -1) break;
    iVar10 = iVar10 + 1;
  } while( true );
  iVar10 = -1;
LAB_4a0ac94c:
  if (iVar10 < 0) {
    iVar11 = *(int *)(iVar9 + 0x40);
    iVar2 = FUN_4a0015f0(*(int *)(iVar9 + 0x18) * 100);
    if (0x4a < iVar2) {
      FUN_4a16c6c8(iVar9,iVar11 * 2 + 1);
    }
    uVar6 = (**(code **)(*param_2 + 0x18))(param_2);
    iVar11 = *(int *)(iVar9 + 0x40);
    FUN_4a0015f0(uVar6 & 0x7fffffff,iVar11);
    iVar2 = extraout_r1_00;
    if (extraout_r1_00 == 0) {
      iVar2 = iVar11;
    }
    iVar10 = extraout_r1_00;
    while( true ) {
      if (iVar10 == iVar11) {
        iVar10 = 0;
      }
      iVar7 = 0;
      if (*(int *)(iVar9 + 0x44) != 0) {
        iVar7 = *(int *)(*(int *)(iVar9 + 0x44) + 8);
      }
      uVar8 = *(uint *)(iVar7 + iVar10 * 4);
      if ((int)uVar8 < 0) {
        if (0xfffffffd < uVar8) goto LAB_4a0acab8;
      }
      else {
        piVar12 = *(int **)(*(int *)(iVar9 + 0x1c) + uVar8 * 4);
        uVar8 = (**(code **)(*piVar12 + 0x18))(piVar12);
        if ((uVar8 == uVar6) &&
           ((param_2 == piVar12 ||
            (iVar7 = (**(code **)(*param_2 + 0x14))(param_2,piVar12), iVar7 != 0))))
        goto LAB_4a0acab8;
      }
      if (iVar10 == iVar2 + -1) break;
      iVar10 = iVar10 + 1;
    }
    iVar10 = -1;
LAB_4a0acab8:
    iVar2 = 0;
    if (*(int *)(iVar9 + 0x44) != 0) {
      iVar2 = *(int *)(*(int *)(iVar9 + 0x44) + 8);
    }
    *(undefined4 *)(iVar2 + iVar10 * 4) = *(undefined4 *)(iVar9 + 0x18);
    iVar2 = *(int *)(iVar9 + 0x14);
    if ((*(int *)(iVar9 + 0x18) == iVar2) &&
       (iVar11 = *(int *)(iVar9 + 0x10) + iVar2, iVar2 < iVar11)) {
      *(int *)(iVar9 + 0x14) = iVar11;
      iVar10 = *(int *)(iVar9 + 0x1c);
      iVar2 = thunk_FUN_4a161570(iVar11 * 4);
      *(int *)(iVar9 + 0x1c) = iVar2;
      if (iVar2 != 0) {
        iVar2 = 0;
        if (0 < *(int *)(iVar9 + 0x18)) {
          do {
            iVar11 = iVar2 + 1;
            *(undefined4 *)(*(int *)(iVar9 + 0x1c) + iVar2 * 4) =
                 *(undefined4 *)(iVar10 + iVar2 * 4);
            iVar2 = iVar11;
          } while (iVar11 < *(int *)(iVar9 + 0x18));
        }
        thunk_FUN_4a161530(iVar10);
      }
      iVar2 = *(int *)(iVar9 + 0x18);
      if (iVar2 < *(int *)(iVar9 + 0x14)) {
        do {
          iVar11 = iVar2 + 1;
          *(undefined4 *)(*(int *)(iVar9 + 0x1c) + iVar2 * 4) = 0;
          iVar2 = iVar11;
        } while (iVar11 < *(int *)(iVar9 + 0x14));
      }
    }
    iVar2 = *(int *)(iVar9 + 0x18);
    *(int *)(iVar9 + 0x18) = iVar2 + 1;
    piVar12 = *(int **)(*(int *)(iVar9 + 0x1c) + iVar2 * 4);
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 0xc))();
    }
    *(int **)(*(int *)(iVar9 + 0x1c) + iVar2 * 4) = param_2;
    if ((piVar12 != (int *)0x0) && (iVar2 = (**(code **)(*piVar12 + 8))(piVar12), iVar2 != 0)) {
      (**(code **)(*piVar12 + 4))(piVar12);
    }
    iVar2 = *(int *)(iVar9 + 0x2c);
    if ((*(int *)(iVar9 + 0x30) == iVar2) &&
       (iVar11 = *(int *)(iVar9 + 0x28) + iVar2, iVar2 < iVar11)) {
      *(int *)(iVar9 + 0x2c) = iVar11;
      iVar10 = *(int *)(iVar9 + 0x34);
      iVar2 = thunk_FUN_4a161570(iVar11 * 4);
      *(int *)(iVar9 + 0x34) = iVar2;
      if (iVar2 != 0) {
        iVar2 = 0;
        if (0 < *(int *)(iVar9 + 0x30)) {
          do {
            iVar11 = iVar2 + 1;
            *(undefined4 *)(*(int *)(iVar9 + 0x34) + iVar2 * 4) =
                 *(undefined4 *)(iVar10 + iVar2 * 4);
            iVar2 = iVar11;
          } while (iVar11 < *(int *)(iVar9 + 0x30));
        }
        thunk_FUN_4a161530(iVar10);
      }
      iVar2 = *(int *)(iVar9 + 0x30);
      if (iVar2 < *(int *)(iVar9 + 0x2c)) {
        do {
          iVar11 = iVar2 + 1;
          *(undefined4 *)(*(int *)(iVar9 + 0x34) + iVar2 * 4) = 0;
          iVar2 = iVar11;
        } while (iVar11 < *(int *)(iVar9 + 0x2c));
      }
    }
    iVar2 = *(int *)(iVar9 + 0x30);
    *(int *)(iVar9 + 0x30) = iVar2 + 1;
    piVar12 = *(int **)(*(int *)(iVar9 + 0x34) + iVar2 * 4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))();
    }
    *(int **)(*(int *)(iVar9 + 0x34) + iVar2 * 4) = piVar4;
    if (piVar12 == (int *)0x0) {
      return;
    }
    iVar2 = (**(code **)(*piVar12 + 8))(piVar12);
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0acce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  else {
    iVar2 = 0;
    if (*(int *)(iVar9 + 0x44) != 0) {
      iVar2 = *(int *)(*(int *)(iVar9 + 0x44) + 8);
    }
    iVar2 = *(int *)(iVar2 + iVar10 * 4);
    piVar12 = *(int **)(*(int *)(iVar9 + 0x34) + iVar2 * 4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))();
    }
    *(int **)(*(int *)(iVar9 + 0x34) + iVar2 * 4) = piVar4;
    if (piVar12 == (int *)0x0) {
      return;
    }
    iVar2 = (**(code **)(*piVar12 + 8))(piVar12);
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0ac9b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x4a0accfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar12 + 4))(piVar12);
  return;
}



// Address: 4a0acd10

void FUN_4a0acd10(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x118) = param_2;
  return;
}



// Address: 4a0acd18

undefined4 * FUN_4a0acd18(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 in_stack_00000000;
  
  puVar2 = (undefined4 *)FUN_4a0b4124();
  *puVar2 = PTR_PTR_4a0acdb4;
  puVar2[0x45] = 0;
  *(undefined1 *)(puVar2 + 0x46) = 1;
  puVar2[0x47] = 0;
  puVar2[0x48] = 0;
  puVar2[0x49] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 0x4a);
  puVar1 = PTR_PTR_4a0acdb8;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = puVar1;
  puVar2[5] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 6);
  puVar1 = PTR_PTR_4a0acdbc;
  puVar2[2] = 0;
  *puVar2 = puVar1;
  puVar2[3] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 5);
  puVar1 = PTR_PTR_4a0acdc0;
  puVar2[2] = 0;
  *puVar2 = puVar1;
  puVar2[3] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  FUN_4a0abb88(puVar2 + -0x55,in_stack_00000000);
  return puVar2 + -0x55;
}



// Address: 4a0acdc4

void FUN_4a0acdc4(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_4a0b4330();
  *puVar2 = PTR_PTR_4a0ace48;
  puVar2[0x45] = 0;
  *(undefined1 *)(puVar2 + 0x46) = 1;
  puVar2[0x47] = 0;
  puVar2[0x48] = 0;
  puVar2[0x49] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 0x4a);
  puVar1 = PTR_PTR_4a0ace4c;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = puVar1;
  puVar2[5] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 6);
  puVar1 = PTR_PTR_4a0ace50;
  puVar2[2] = 0;
  *puVar2 = puVar1;
  puVar2[3] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 5);
  puVar1 = PTR_PTR_4a0ace54;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = puVar1;
  puVar2[5] = 0;
  puVar2[6] = 0;
  return;
}



// Address: 4a0ace70

void FUN_4a0ace70(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int *piVar7;
  
  *param_1 = PTR_PTR_4a0ad068;
  piVar7 = (int *)param_1[0x45];
  if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  param_1[0x45] = 0;
  piVar7 = (int *)param_1[0x47];
  if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  param_1[0x47] = 0;
  piVar7 = (int *)param_1[0x48];
  if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  param_1[0x48] = 0;
  piVar7 = (int *)param_1[0x49];
  if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  param_1[0x49] = 0;
  piVar7 = (int *)param_1[0x4f];
  if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  param_1[0x4f] = 0;
  piVar7 = (int *)param_1[0x5a];
  if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  param_1[0x5a] = 0;
  piVar7 = (int *)param_1[0x5b];
  if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  param_1[0x5b] = 0;
  iVar2 = FUN_4a16adcc(param_1 + 0x55);
  iVar2 = FUN_4a16b24c(iVar2 + -0x14);
  iVar2 = FUN_4a16bef4(iVar2 + -0x18);
  *(undefined **)(iVar2 + -0x128) = PTR_PTR_4a0b4558;
  piVar7 = *(int **)(iVar2 + -0x4c);
  if ((piVar7 != (int *)0x0) && (iVar3 = (**(code **)(*piVar7 + 8))(piVar7), iVar3 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  *(undefined4 *)(iVar2 + -0x4c) = 0;
  iVar3 = 0;
  if (0 < *(int *)(iVar2 + -0x38)) {
    do {
      piVar7 = *(int **)(*(int *)(iVar2 + -0x34) + iVar3 * 4);
      *(undefined4 *)(*(int *)(iVar2 + -0x34) + iVar3 * 4) = 0;
      if ((piVar7 != (int *)0x0) && (iVar4 = (**(code **)(*piVar7 + 8))(piVar7), iVar4 != 0)) {
        (**(code **)(*piVar7 + 4))(piVar7);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar2 + -0x38));
  }
  *(undefined4 *)(iVar2 + -0x38) = 0;
  iVar3 = 0;
  if (0 < *(int *)(iVar2 + -0x20)) {
    do {
      piVar7 = *(int **)(*(int *)(iVar2 + -0x1c) + iVar3 * 4);
      *(undefined4 *)(*(int *)(iVar2 + -0x1c) + iVar3 * 4) = 0;
      if ((piVar7 != (int *)0x0) && (iVar4 = (**(code **)(*piVar7 + 8))(piVar7), iVar4 != 0)) {
        (**(code **)(*piVar7 + 4))(piVar7);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar2 + -0x20));
  }
  *(undefined4 *)(iVar2 + -0x20) = 0;
  puVar5 = PTR_PTR_4a0b455c;
  *(undefined4 *)(iVar2 + -0x30) = PTR_PTR_4a0b455c;
  *(undefined4 *)(iVar2 + -0x20) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(iVar2 + -0x1c));
  iVar2 = FUN_4a0c6bf4((undefined4 *)(iVar2 + -0x30));
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



// Address: 4a0ad06c

void FUN_4a0ad06c(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar9 = 0;
  if (*(int *)(param_4 + 0xc) != 0) {
    iVar9 = *(int *)(*(int *)(param_4 + 0xc) + 8);
  }
  iVar3 = *(int *)(param_1 + 0x34);
  iVar11 = *(int *)(param_1 + 0x3c);
  uVar6 = *(uint *)(param_1 + 0x2c);
  iVar8 = 0;
  iVar10 = *(int *)(param_1 + 0x44);
  iVar7 = 0;
  if (param_3 < 1) {
    return;
  }
  do {
    if (0 < (int)uVar6) {
      puVar1 = (undefined1 *)(iVar9 + iVar8);
      puVar4 = (undefined1 *)((param_2 + iVar7) * iVar10 + iVar11 + iVar3);
      puVar2 = puVar1 + -1;
      puVar5 = puVar4 + -1;
      if ((uVar6 & 1) != 0) {
        *puVar4 = *puVar1;
        puVar2 = puVar1;
        puVar5 = puVar4;
      }
      for (iVar12 = (int)uVar6 >> 1; iVar12 != 0; iVar12 = iVar12 + -1) {
        puVar5[1] = puVar2[1];
        puVar2 = puVar2 + 2;
        puVar5 = puVar5 + 2;
        *puVar5 = *puVar2;
      }
      iVar8 = iVar8 + uVar6;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < param_3);
  return;
}



// Address: 4a0ad110

void FUN_4a0ad110(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar9 = 0;
  if (*(int *)(param_4 + 0xc) != 0) {
    iVar9 = *(int *)(*(int *)(param_4 + 0xc) + 8);
  }
  iVar3 = *(int *)(param_1 + 0x34);
  iVar11 = *(int *)(param_1 + 0x3c);
  uVar6 = *(uint *)(param_1 + 0x2c);
  iVar8 = 0;
  iVar10 = *(int *)(param_1 + 0x44);
  iVar7 = 0;
  if (param_3 < 1) {
    return;
  }
  do {
    if (0 < (int)uVar6) {
      puVar1 = (undefined4 *)(iVar9 + iVar8 * 4);
      puVar4 = (undefined4 *)(iVar11 + iVar3 + (param_2 + iVar7) * iVar10 * 4);
      puVar2 = puVar1 + -1;
      puVar5 = puVar4 + -1;
      if ((uVar6 & 1) != 0) {
        *puVar4 = *puVar1;
        puVar2 = puVar1;
        puVar5 = puVar4;
      }
      for (iVar12 = (int)uVar6 >> 1; iVar12 != 0; iVar12 = iVar12 + -1) {
        puVar5[1] = puVar2[1];
        puVar2 = puVar2 + 2;
        puVar5 = puVar5 + 2;
        *puVar5 = *puVar2;
      }
      iVar8 = iVar8 + uVar6;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < param_3);
  return;
}



// Address: 4a0ad1b4

void FUN_4a0ad1b4(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar9 = 0;
  if (*(int *)(param_4 + 0xc) != 0) {
    iVar9 = *(int *)(*(int *)(param_4 + 0xc) + 8);
  }
  iVar3 = *(int *)(param_1 + 0x34);
  iVar11 = *(int *)(param_1 + 0x3c);
  uVar6 = *(uint *)(param_1 + 0x2c);
  iVar8 = 0;
  iVar10 = *(int *)(param_1 + 0x44);
  iVar7 = 0;
  if (param_3 < 1) {
    return;
  }
  do {
    if (0 < (int)uVar6) {
      puVar1 = (undefined4 *)(iVar9 + iVar8 * 4);
      puVar4 = (undefined4 *)(iVar11 + iVar3 + (param_2 + iVar7) * iVar10 * 4);
      puVar2 = puVar1 + -1;
      puVar5 = puVar4 + -1;
      if ((uVar6 & 1) != 0) {
        *puVar4 = *puVar1;
        puVar2 = puVar1;
        puVar5 = puVar4;
      }
      for (iVar12 = (int)uVar6 >> 1; iVar12 != 0; iVar12 = iVar12 + -1) {
        puVar5[1] = puVar2[1];
        puVar2 = puVar2 + 2;
        puVar5 = puVar5 + 2;
        *puVar5 = *puVar2;
      }
      iVar8 = iVar8 + uVar6;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < param_3);
  return;
}



// Address: 4a0ad258

void FUN_4a0ad258(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar9 = 0;
  if (*(int *)(param_4 + 0xc) != 0) {
    iVar9 = *(int *)(*(int *)(param_4 + 0xc) + 8);
  }
  iVar3 = *(int *)(param_1 + 0x34);
  iVar11 = *(int *)(param_1 + 0x3c);
  uVar6 = *(uint *)(param_1 + 0x2c);
  iVar8 = 0;
  iVar10 = *(int *)(param_1 + 0x44);
  iVar7 = 0;
  if (param_3 < 1) {
    return;
  }
  do {
    if (0 < (int)uVar6) {
      puVar1 = (undefined2 *)(iVar9 + iVar8 * 2);
      puVar4 = (undefined2 *)(iVar11 + iVar3 + (param_2 + iVar7) * iVar10 * 2);
      puVar2 = puVar1 + -1;
      puVar5 = puVar4 + -1;
      if ((uVar6 & 1) != 0) {
        *puVar4 = *puVar1;
        puVar2 = puVar1;
        puVar5 = puVar4;
      }
      for (iVar12 = (int)uVar6 >> 1; iVar12 != 0; iVar12 = iVar12 + -1) {
        puVar5[1] = puVar2[1];
        puVar2 = puVar2 + 2;
        puVar5 = puVar5 + 2;
        *puVar5 = *puVar2;
      }
      iVar8 = iVar8 + uVar6;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < param_3);
  return;
}



// Address: 4a0ad2fc

void FUN_4a0ad2fc(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar9 = *(int *)(param_1 + 0x34);
  uVar5 = *(uint *)(param_1 + 0x2c);
  iVar7 = 0;
  iVar8 = *(int *)(param_1 + 0x44);
  iVar6 = 0;
  if (param_3 < 1) {
    return;
  }
  do {
    if (0 < (int)uVar5) {
      puVar1 = (undefined1 *)(param_4 + iVar7);
      puVar10 = (undefined1 *)((param_2 + iVar6) * iVar8 + iVar3 + iVar9);
      puVar2 = puVar1 + -1;
      puVar11 = puVar10 + -1;
      if ((uVar5 & 1) != 0) {
        *puVar10 = *puVar1;
        puVar2 = puVar1;
        puVar11 = puVar10;
      }
      for (iVar4 = (int)uVar5 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar11[1] = puVar2[1];
        puVar2 = puVar2 + 2;
        puVar11 = puVar11 + 2;
        *puVar11 = *puVar2;
      }
      iVar7 = iVar7 + uVar5;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < param_3);
  return;
}



// Address: 4a0ad390

void FUN_4a0ad390(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar9 = *(int *)(param_1 + 0x34);
  uVar5 = *(uint *)(param_1 + 0x2c);
  iVar7 = 0;
  iVar8 = *(int *)(param_1 + 0x44);
  iVar6 = 0;
  if (param_3 < 1) {
    return;
  }
  do {
    if (0 < (int)uVar5) {
      puVar1 = (undefined4 *)(param_4 + iVar7 * 4);
      puVar10 = (undefined4 *)(iVar3 + iVar9 + (param_2 + iVar6) * iVar8 * 4);
      puVar2 = puVar1 + -1;
      puVar11 = puVar10 + -1;
      if ((uVar5 & 1) != 0) {
        *puVar10 = *puVar1;
        puVar2 = puVar1;
        puVar11 = puVar10;
      }
      for (iVar4 = (int)uVar5 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar11[1] = puVar2[1];
        puVar2 = puVar2 + 2;
        puVar11 = puVar11 + 2;
        *puVar11 = *puVar2;
      }
      iVar7 = iVar7 + uVar5;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < param_3);
  return;
}



// Address: 4a0ad424

void FUN_4a0ad424(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar9 = *(int *)(param_1 + 0x34);
  uVar5 = *(uint *)(param_1 + 0x2c);
  iVar7 = 0;
  iVar8 = *(int *)(param_1 + 0x44);
  iVar6 = 0;
  if (param_3 < 1) {
    return;
  }
  do {
    if (0 < (int)uVar5) {
      puVar1 = (undefined2 *)(param_4 + iVar7 * 2);
      puVar10 = (undefined2 *)(iVar3 + iVar9 + (param_2 + iVar6) * iVar8 * 2);
      puVar2 = puVar1 + -1;
      puVar11 = puVar10 + -1;
      if ((uVar5 & 1) != 0) {
        *puVar10 = *puVar1;
        puVar2 = puVar1;
        puVar11 = puVar10;
      }
      for (iVar4 = (int)uVar5 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar11[1] = puVar2[1];
        puVar2 = puVar2 + 2;
        puVar11 = puVar11 + 2;
        *puVar11 = *puVar2;
      }
      iVar7 = iVar7 + uVar5;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < param_3);
  return;
}



// Address: 4a0ad4b8

void FUN_4a0ad4b8(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((*(char *)(param_1 + 0x38) == '\0') && (*(int *)(param_1 + 0x34) != 0)) &&
     (iVar2 = *(int *)(param_1 + 0x30),
     (((iVar2 == 1 || iVar2 == 2) || iVar2 == 3) || iVar2 == 5) || iVar2 == 4)) {
    thunk_FUN_4a161530();
  }
  *(int *)(param_1 + 0x30) = param_4;
  *(int *)(param_1 + 0x28) = param_2;
  *(int *)(param_1 + 0x2c) = param_3;
  if (*(char *)(param_1 + 0x38) != '\0') goto LAB_4a0ad5b8;
  if (param_4 == 1 || param_4 == 2) {
LAB_4a0ad548:
    uVar1 = thunk_FUN_4a161570();
  }
  else if (param_4 == 3) {
LAB_4a0ad55c:
    uVar1 = thunk_FUN_4a161570(param_2 * param_3 * 4);
  }
  else {
    if (param_4 == 5) goto LAB_4a0ad548;
    if (param_4 == 4) goto LAB_4a0ad55c;
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  switch(*(undefined4 *)(param_1 + 0x30)) {
  default:
    iVar2 = 0;
    break;
  case 1:
    iVar2 = 1;
    break;
  case 2:
  case 5:
    iVar2 = 2;
    break;
  case 3:
  case 4:
    iVar2 = 4;
  }
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x2c) * iVar2;
LAB_4a0ad5b8:
  switch(*(undefined4 *)(param_1 + 0x30)) {
  default:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = 1;
    break;
  case 2:
  case 5:
    uVar1 = 2;
    break;
  case 3:
  case 4:
    uVar1 = 4;
  }
  uVar1 = FUN_4a0015f0(*(undefined4 *)(param_1 + 0x40),uVar1);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  return;
}



// Address: 4a0ad610

undefined4 *
FUN_4a0ad610(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0b7654();
  *puVar1 = PTR_PTR_4a0ad670;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined1 *)(puVar1 + 0xe) = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  FUN_4a0ad4b8(puVar1,param_2,param_3,param_4);
  return puVar1;
}



// Address: 4a0ad674

undefined4 *
FUN_4a0ad674(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0b7654();
  *puVar1 = PTR_PTR_4a0ad6e0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = param_5;
  *(undefined1 *)(puVar1 + 0xe) = 1;
  puVar1[0x11] = 0;
  puVar1[0xf] = param_6;
  puVar1[0x10] = param_7;
  FUN_4a0ad4b8(puVar1,param_2,param_3,param_4);
  return puVar1;
}



// Address: 4a0ad6e4

void FUN_4a0ad6e4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0b7654();
  *puVar1 = PTR_PTR_4a0ad720;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined1 *)(puVar1 + 0xe) = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  return;
}



// Address: 4a0ad77c

void FUN_4a0ad77c(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  *param_1 = PTR_PTR_4a0ad7c4;
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar4 = param_1[0xc];
    if ((((iVar4 == 1 || iVar4 == 2) || iVar4 == 3) || iVar4 == 5) || iVar4 == 4) {
      thunk_FUN_4a161530(param_1[0xd]);
    }
  }
  *param_1 = PTR_PTR_4a0b77cc;
  piVar5 = (int *)param_1[2];
  if (piVar5 != (int *)0x0) {
    param_1[2] = 0;
    iVar4 = (**(code **)(*piVar5 + 8))(piVar5);
    if (iVar4 != 0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
  }
  puVar2 = PTR_PTR_4a0b77d0;
  param_1[5] = PTR_PTR_4a0b77d0;
  piVar5 = (int *)param_1[8];
  iVar4 = param_1[7];
  if (piVar5 != (int *)0x0) {
    iVar6 = piVar5[2];
    puVar2 = (undefined *)(uint)*(byte *)(piVar5 + 5);
  }
  else {
    iVar6 = 0;
  }
  param_1[8] = 0;
  param_1[7] = 0;
  if ((piVar5 == (int *)0x0) || (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar5 + 4))(piVar5);
    bVar1 = 1;
  }
  if (!(bool)(bVar1 & (piVar5 != (int *)0x0 && puVar2 != (undefined *)0x0))) {
    iVar6 = 0;
  }
  if (iVar6 != 0) {
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
      if (iVar6 == 0) goto LAB_4a0b77b8;
    }
    FUN_4a14f21c();
  }
LAB_4a0b77b8:
  iVar4 = FUN_4a0c6bf4(param_1 + 5);
  *(undefined **)(iVar4 + -0x14) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar4 + -0x10) = 0xffffffff;
  return;
}



// Address: 4a0ad7e4

void FUN_4a0ad7e4(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  
  if (*(char *)(param_1 + 0x6c) == '\0') {
    return;
  }
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar4 = *(int **)(param_1 + 0x48);
  if ((piVar4 != (int *)0x0) && (iVar1 = (**(code **)(*piVar4 + 8))(piVar4), iVar1 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  *(int **)(param_1 + 0x48) = param_2;
  iVar1 = *(int *)(param_1 + 0x30);
  bVar5 = iVar1 == 0;
  if (bVar5) {
    iVar1 = *(int *)(param_1 + 0x44);
  }
  bVar6 = bVar5 && iVar1 == 0;
  if (bVar5 && iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x48);
    bVar6 = iVar1 == 0;
  }
  if (!bVar6) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar1 + 0x28);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  piVar4 = (int *)0x0;
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)(iVar1 + 8);
  }
  if (*piVar2 != 0) {
    if (iVar1 != 0) {
      piVar4 = *(int **)(iVar1 + 8);
    }
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(*piVar4 + 4) + 0x28);
    return;
  }
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar1 + 8);
  }
  if (*(int *)(iVar3 + 4) != 0) {
    if (iVar1 != 0) {
      piVar4 = *(int **)(iVar1 + 8);
    }
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(piVar4[1] + 4) + 0x28);
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



// Address: 4a0ad868

void FUN_4a0ad868(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_4a0b706c();
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  local_24 = *(undefined4 *)(param_1 + 0x38);
  local_20 = *(undefined4 *)(param_1 + 0x3c);
  local_1c = *(undefined4 *)(param_1 + 0x40);
  piVar4 = *(int **)(param_1 + 0x30);
  local_28 = uVar1;
  if (*(char *)(param_2 + 0x6c) != '\0') {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(piVar4);
    }
    piVar5 = *(int **)(param_2 + 0x30);
    if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(int **)(param_2 + 0x30) = piVar4;
    *(undefined4 *)(param_2 + 0x34) = uVar1;
    *(undefined4 *)(param_2 + 0x38) = local_24;
    *(undefined4 *)(param_2 + 0x3c) = local_20;
    *(undefined4 *)(param_2 + 0x40) = local_1c;
    FUN_4a0ade08(param_2);
  }
  piVar4 = *(int **)(param_1 + 0x44);
  if (*(char *)(param_2 + 0x6c) != '\0') {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(piVar4);
    }
    piVar5 = *(int **)(param_2 + 0x44);
    if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(int **)(param_2 + 0x44) = piVar4;
    FUN_4a0ade08(param_2);
  }
  piVar4 = *(int **)(param_1 + 0x48);
  if (*(char *)(param_2 + 0x6c) != '\0') {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(piVar4);
    }
    piVar5 = *(int **)(param_2 + 0x48);
    if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(int **)(param_2 + 0x48) = piVar4;
    FUN_4a0ade08(param_2);
  }
  piVar4 = *(int **)(param_1 + 0x4c);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))(piVar4);
  }
  piVar5 = *(int **)(param_2 + 0x4c);
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  *(int **)(param_2 + 0x4c) = piVar4;
  FUN_4a0ade08(param_2);
  iVar2 = 0;
  do {
    if ((iVar2 < 0) || (1 < iVar2)) {
LAB_4a0adac0:
      uVar1 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x5c) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x5c) + 8);
      }
      iVar3 = *(int *)(iVar3 + iVar2 * 4);
      if (iVar3 == 0) goto LAB_4a0adac0;
      local_38 = *(undefined4 *)(iVar3 + 8);
      local_34 = *(undefined4 *)(iVar3 + 0xc);
      local_30 = *(undefined4 *)(iVar3 + 0x10);
      uStack_2c = 0;
      uVar1 = *(undefined4 *)(iVar3 + 4);
    }
    FUN_4a0adcbc(param_2,iVar2,uVar1,local_38,&local_34);
    iVar2 = iVar2 + 1;
    if (1 < iVar2) {
      return;
    }
  } while( true );
}



// Address: 4a0adb1c

void FUN_4a0adb1c(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  
  iVar1 = *(int *)(param_4 + 0xc);
  puVar4 = (undefined4 *)0x0;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 8);
  }
  if (iVar2 != 0) {
    if (iVar1 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = *(undefined4 **)(iVar1 + 8);
    }
  }
  if (*(char *)(param_1 + 0x6c) == '\0') {
    return;
  }
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar5 = *(int **)(param_1 + 0x30);
  if ((piVar5 != (int *)0x0) && (iVar1 = (**(code **)(*piVar5 + 8))(piVar5), iVar1 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  *(int **)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  if (puVar4 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = *puVar4;
    *(undefined4 *)(param_1 + 0x3c) = puVar4[1];
    *(undefined4 *)(param_1 + 0x40) = puVar4[2];
  }
  iVar1 = *(int *)(param_1 + 0x30);
  bVar6 = iVar1 == 0;
  if (bVar6) {
    iVar1 = *(int *)(param_1 + 0x44);
  }
  bVar7 = bVar6 && iVar1 == 0;
  if (bVar6 && iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x48);
    bVar7 = iVar1 == 0;
  }
  if (bVar7) {
    iVar1 = *(int *)(param_1 + 0x5c);
    piVar5 = (int *)0x0;
    if (iVar1 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *(int **)(iVar1 + 8);
    }
    if (*piVar3 == 0) {
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar1 + 8);
      }
      if (*(int *)(iVar2 + 4) == 0) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        return;
      }
      if (iVar1 != 0) {
        piVar5 = *(int **)(iVar1 + 8);
      }
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(piVar5[1] + 4) + 0x28);
      return;
    }
    if (iVar1 != 0) {
      piVar5 = *(int **)(iVar1 + 8);
    }
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(*piVar5 + 4) + 0x28);
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar1 + 0x28);
  return;
}



// Address: 4a0adc00

void FUN_4a0adc00(int param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  
  if (*(char *)(param_1 + 0x6c) == '\0') {
    return;
  }
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar5 = *(int **)(param_1 + 0x30);
  if ((piVar5 != (int *)0x0) && (iVar1 = (**(code **)(*piVar5 + 8))(piVar5), iVar1 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  *(int **)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  if (param_4 == (undefined4 *)0x0) {
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = *param_4;
    *(undefined4 *)(param_1 + 0x3c) = param_4[1];
    uVar2 = param_4[2];
  }
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  iVar1 = *(int *)(param_1 + 0x30);
  bVar6 = iVar1 == 0;
  if (bVar6) {
    iVar1 = *(int *)(param_1 + 0x44);
  }
  bVar7 = bVar6 && iVar1 == 0;
  if (bVar6 && iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x48);
    bVar7 = iVar1 == 0;
  }
  if (bVar7) {
    iVar1 = *(int *)(param_1 + 0x5c);
    piVar5 = (int *)0x0;
    if (iVar1 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *(int **)(iVar1 + 8);
    }
    if (*piVar3 == 0) {
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar1 + 8);
      }
      if (*(int *)(iVar4 + 4) != 0) {
        if (iVar1 != 0) {
          piVar5 = *(int **)(iVar1 + 8);
        }
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(piVar5[1] + 4) + 0x28);
        return;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      return;
    }
    if (iVar1 != 0) {
      piVar5 = *(int **)(iVar1 + 8);
    }
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(*piVar5 + 4) + 0x28);
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar1 + 0x28);
  return;
}



// Address: 4a0adcbc

void FUN_4a0adcbc(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  
  if (param_2 < 0) {
    return;
  }
  if (1 < param_2) {
    return;
  }
  if (*(char *)(param_1 + 0x6c) == '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  iVar6 = 0;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar1 + 8);
  }
  piVar5 = *(int **)(iVar3 + param_2 * 4);
  if (param_3 == (int *)0x0) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 8);
    }
    *(undefined4 *)(iVar1 + param_2 * 4) = 0;
  }
  else {
    puVar2 = (undefined4 *)thunk_FUN_4a161570(0x14);
    *puVar2 = PTR_PTR_4a0addbc;
    puVar2[1] = param_3;
    puVar2[2] = 0x3f800000;
    puVar2[3] = 0;
    puVar2[4] = 0;
    (**(code **)(*param_3 + 0xc))(param_3);
    puVar2[2] = param_4;
    if (param_5 == (undefined4 *)0x0) {
      puVar2[3] = 0;
      puVar2[4] = 0;
    }
    else {
      puVar2[3] = *param_5;
      puVar2[4] = param_5[1];
    }
    if (*(int *)(param_1 + 0x5c) != 0) {
      iVar6 = *(int *)(*(int *)(param_1 + 0x5c) + 8);
    }
    *(undefined4 **)(iVar6 + param_2 * 4) = puVar2;
  }
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  iVar1 = *(int *)(param_1 + 0x30);
  bVar7 = iVar1 == 0;
  if (bVar7) {
    iVar1 = *(int *)(param_1 + 0x44);
  }
  bVar8 = bVar7 && iVar1 == 0;
  if (bVar7 && iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x48);
    bVar8 = iVar1 == 0;
  }
  if (bVar8) {
    iVar1 = *(int *)(param_1 + 0x5c);
    piVar5 = (int *)0x0;
    if (iVar1 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)(iVar1 + 8);
    }
    if (*piVar4 != 0) {
      if (iVar1 != 0) {
        piVar5 = *(int **)(iVar1 + 8);
      }
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(*piVar5 + 4) + 0x28);
      return;
    }
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar1 + 8);
    }
    if (*(int *)(iVar6 + 4) != 0) {
      if (iVar1 != 0) {
        piVar5 = *(int **)(iVar1 + 8);
      }
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(piVar5[1] + 4) + 0x28);
      return;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar1 + 0x28);
  return;
}



// Address: 4a0addc0

void FUN_4a0addc0(void)

{
  FUN_4a0adcbc();
  return;
}



// Address: 4a0ade00

void FUN_4a0ade00(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



// Address: 4a0ade08

void FUN_4a0ade08(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  iVar1 = *(int *)(param_1 + 0x30);
  bVar5 = iVar1 == 0;
  if (bVar5) {
    iVar1 = *(int *)(param_1 + 0x44);
  }
  bVar6 = bVar5 && iVar1 == 0;
  if (bVar5 && iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x48);
    bVar6 = iVar1 == 0;
  }
  if (bVar6) {
    iVar1 = *(int *)(param_1 + 0x5c);
    piVar2 = (int *)0x0;
    if (iVar1 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *(int **)(iVar1 + 8);
    }
    if (*piVar3 == 0) {
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar1 + 8);
      }
      if (*(int *)(iVar4 + 4) != 0) {
        if (iVar1 != 0) {
          piVar2 = *(int **)(iVar1 + 8);
        }
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(piVar2[1] + 4) + 0x28);
        return;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      return;
    }
    if (iVar1 != 0) {
      piVar2 = *(int **)(iVar1 + 8);
    }
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(*piVar2 + 4) + 0x28);
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar1 + 0x28);
  return;
}



// Address: 4a0adea0

void FUN_4a0adea0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *apuStack_a8 [2];
  undefined4 uStack_a0;
  int *piStack_9c;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 auStack_8c [8];
  int iStack_84;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined1 auStack_60 [12];
  int iStack_54;
  undefined1 auStack_4c [12];
  int iStack_40;
  undefined1 auStack_38 [12];
  int iStack_2c;
  
  if (*(char *)(param_1 + 0x6c) != '\0') {
    FUN_4a16b934(auStack_38,4);
    piVar1 = (int *)FUN_4a13912c(param_1,auStack_38);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1);
    }
    piVar10 = *(int **)(param_1 + 0x48);
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 0xc))(piVar10);
    }
    piVar11 = *(int **)(param_1 + 0x44);
    if (piVar11 != (int *)0x0) {
      (**(code **)(*piVar11 + 0xc))(piVar11);
    }
    FUN_4a16b934(auStack_4c,4);
    piVar2 = (int *)FUN_4a1391d0(param_1,0,auStack_4c);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))(piVar2);
    }
    FUN_4a16b934(auStack_60,4);
    piVar3 = (int *)FUN_4a1391d0(param_1,1,auStack_60);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))(piVar3);
    }
    uVar4 = FUN_4a138654(piVar1);
    if ((uVar4 & 3) != 0) {
      uVar4 = uVar4 + (4 - (uVar4 & 3));
    }
    uStack_68 = uVar4;
    if (piVar10 != (int *)0x0) {
      iVar5 = FUN_4a138654(piVar10);
      uVar4 = uVar4 + iVar5;
    }
    if ((uVar4 & 3) != 0) {
      uVar4 = uVar4 + (4 - (uVar4 & 3));
    }
    uStack_6c = uVar4;
    if (piVar11 != (int *)0x0) {
      iVar5 = FUN_4a138654(piVar11);
      uVar4 = uVar4 + iVar5;
    }
    if ((uVar4 & 3) != 0) {
      uVar4 = uVar4 + (4 - (uVar4 & 3));
    }
    uStack_70 = uVar4;
    if (piVar2 != (int *)0x0) {
      iVar5 = FUN_4a138654(piVar2);
      uVar4 = uVar4 + iVar5;
    }
    if ((uVar4 & 3) != 0) {
      uVar4 = uVar4 + (4 - (uVar4 & 3));
    }
    uStack_74 = uVar4;
    if (piVar3 != (int *)0x0) {
      iVar5 = FUN_4a138654(piVar3);
      uVar4 = uVar4 + iVar5;
    }
    if ((uVar4 & 3) != 0) {
      uVar4 = uVar4 + (4 - (uVar4 & 3));
    }
    uStack_64 = uVar4;
    uStack_78 = thunk_FUN_4a161570(uVar4 * *(int *)(param_1 + 0x28));
    uStack_90 = FUN_4a0b3374(piVar1,uStack_78,0,uStack_64);
    if (iStack_2c == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = *(undefined4 **)(iStack_2c + 8);
    }
    uStack_94 = *puVar6;
    FUN_4a16b934(apuStack_a8,3);
    if (iStack_2c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iStack_2c + 8);
    }
    if (piStack_9c == (int *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)piStack_9c[2];
    }
    *puVar6 = *(undefined4 *)(iVar5 + 4);
    if (iStack_2c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iStack_2c + 8);
    }
    if (piStack_9c == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = piStack_9c[2];
    }
    *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar5 + 8);
    if (iStack_2c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iStack_2c + 8);
    }
    if (piStack_9c == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = piStack_9c[2];
    }
    *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar5 + 0xc);
    puVar6 = (undefined4 *)FUN_4a0c6bc0(auStack_8c);
    *puVar6 = PTR_PTR_4a0ae4e0;
    puVar6[2] = uStack_a0;
    puVar6[3] = piStack_9c;
    if (piStack_9c != (int *)0x0) {
      (**(code **)(*piStack_9c + 0xc))();
    }
    *puVar6 = PTR_PTR_4a0ae4e4;
    FUN_4a0adb1c(param_1,uStack_90,uStack_94,puVar6);
    FUN_4a16ba04(auStack_8c);
    FUN_4a16ba04(apuStack_a8);
    if (piVar10 != (int *)0x0) {
      uVar8 = FUN_4a0b3374(piVar10,uStack_78,uStack_68,uStack_64);
      FUN_4a0ad7e4(param_1,uVar8);
    }
    if (piVar11 != (int *)0x0) {
      uVar8 = FUN_4a0b3374(piVar11,uStack_78,uStack_6c,uStack_64);
      FUN_4a0ae4e8(param_1,uVar8);
    }
    if (piVar2 != (int *)0x0) {
      uStack_7c = FUN_4a0b3374(piVar2,uStack_78,uStack_70,uStack_64);
      if (iStack_40 == 0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = *(undefined4 **)(iStack_40 + 8);
      }
      uVar8 = *puVar6;
      FUN_4a16b934(&uStack_90,3);
      iVar5 = 0;
      if (iStack_40 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(iStack_40 + 8);
      }
      apuStack_a8[0] = &uStack_90;
      if (iStack_84 == 0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = *(undefined4 **)(iStack_84 + 8);
      }
      *puVar6 = *(undefined4 *)(iVar7 + 4);
      if (iStack_40 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(iStack_40 + 8);
      }
      if (iStack_84 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(iStack_84 + 8);
      }
      *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar7 + 8);
      if (iStack_40 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(iStack_40 + 8);
      }
      if (iStack_84 != 0) {
        iVar5 = *(int *)(iStack_84 + 8);
      }
      *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar7 + 0xc);
      FUN_4a0addc0(param_1,0,uStack_7c,uVar8);
      FUN_4a16ba04(&uStack_90);
    }
    if (piVar3 != (int *)0x0) {
      uStack_7c = FUN_4a0b3374(piVar3,uStack_78,uStack_74,uStack_64);
      if (iStack_54 == 0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = *(undefined4 **)(iStack_54 + 8);
      }
      uVar8 = *puVar6;
      FUN_4a16b934(&uStack_90,3);
      iVar5 = 0;
      if (iStack_54 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(iStack_54 + 8);
      }
      apuStack_a8[0] = &uStack_90;
      if (iStack_84 == 0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = *(undefined4 **)(iStack_84 + 8);
      }
      *puVar6 = *(undefined4 *)(iVar7 + 4);
      if (iStack_54 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(iStack_54 + 8);
      }
      if (iStack_84 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(iStack_84 + 8);
      }
      *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar7 + 8);
      if (iStack_54 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(iStack_54 + 8);
      }
      if (iStack_84 != 0) {
        iVar5 = *(int *)(iStack_84 + 8);
      }
      *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar7 + 0xc);
      FUN_4a0addc0(param_1,1,uStack_7c,uVar8);
      FUN_4a16ba04(&uStack_90);
    }
    if ((piVar1 != (int *)0x0) && (iVar5 = (**(code **)(*piVar1 + 8))(piVar1), iVar5 != 0)) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    if ((piVar10 != (int *)0x0) && (iVar5 = (**(code **)(*piVar10 + 8))(piVar10), iVar5 != 0)) {
      (**(code **)(*piVar10 + 4))(piVar10);
    }
    if ((piVar11 != (int *)0x0) && (iVar5 = (**(code **)(*piVar11 + 8))(piVar11), iVar5 != 0)) {
      (**(code **)(*piVar11 + 4))(piVar11);
    }
    if ((piVar2 != (int *)0x0) && (iVar5 = (**(code **)(*piVar2 + 8))(piVar2), iVar5 != 0)) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    if ((piVar3 != (int *)0x0) && (iVar5 = (**(code **)(*piVar3 + 8))(piVar3), iVar5 != 0)) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(undefined4 *)(param_1 + 0x70) = uStack_78;
    FUN_4a16ba04(auStack_60);
    FUN_4a16ba04(auStack_4c);
    FUN_4a16ba04(auStack_38);
    *(undefined1 *)(param_1 + 0x6c) = 0;
    return;
  }
  return;
}



// Address: 4a0ae4e8

void FUN_4a0ae4e8(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  
  if (*(char *)(param_1 + 0x6c) == '\0') {
    return;
  }
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar4 = *(int **)(param_1 + 0x44);
  if ((piVar4 != (int *)0x0) && (iVar1 = (**(code **)(*piVar4 + 8))(piVar4), iVar1 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  *(int **)(param_1 + 0x44) = param_2;
  iVar1 = *(int *)(param_1 + 0x30);
  bVar5 = iVar1 == 0;
  if (bVar5) {
    iVar1 = *(int *)(param_1 + 0x44);
  }
  bVar6 = bVar5 && iVar1 == 0;
  if (bVar5 && iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x48);
    bVar6 = iVar1 == 0;
  }
  if (!bVar6) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar1 + 0x28);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  piVar4 = (int *)0x0;
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)(iVar1 + 8);
  }
  if (*piVar2 != 0) {
    if (iVar1 != 0) {
      piVar4 = *(int **)(iVar1 + 8);
    }
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(*piVar4 + 4) + 0x28);
    return;
  }
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar1 + 8);
  }
  if (*(int *)(iVar3 + 4) != 0) {
    if (iVar1 != 0) {
      piVar4 = *(int **)(iVar1 + 8);
    }
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(piVar4[1] + 4) + 0x28);
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



// Address: 4a0ae56c

int * FUN_4a0ae56c(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)FUN_4a0b7654();
  *puVar2 = PTR_PTR_4a0ae67c;
  puVar2[0xb] = 0xffffffff;
  puVar2[10] = 0;
  puVar2[0xd] = 0x3f800000;
  puVar2[0xc] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  piVar3 = (int *)FUN_4a0c6bc0(puVar2 + 0x14);
  puVar1 = PTR_PTR_4a0ae680;
  piVar3[2] = 0;
  piVar3[3] = 0;
  *piVar3 = (int)puVar1;
  iVar4 = FUN_4a15e080(8);
  if (iVar4 == 0) {
    iVar4 = FUN_4a1669a8();
  }
  iVar5 = 0;
  do {
    *(undefined4 *)(iVar4 + iVar5 * 4) = 0;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  thunk_FUN_4a161570(0x18);
  puVar2 = (undefined4 *)FUN_4a0c0628();
  puVar1 = PTR_PTR_4a0ae684;
  puVar2[2] = iVar4;
  *puVar2 = puVar1;
  puVar2[3] = 4;
  puVar2[4] = 2;
  *(undefined1 *)(puVar2 + 5) = 1;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)(puVar1 + 0xc))(puVar2);
  }
  (**(code **)(*piVar3 + 0x1c))(piVar3);
  piVar3[2] = 2;
  piVar3[3] = (int)puVar2;
  piVar3[5] = 0;
  piVar3[6] = 0;
  *(undefined1 *)(piVar3 + 7) = 1;
  piVar3[8] = 0;
  return piVar3 + -0x14;
}



// Address: 4a0ae6a0

void FUN_4a0ae6a0(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  *param_1 = PTR_PTR_4a0ae93c;
  piVar7 = (int *)param_1[0xc];
  if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  piVar7 = (int *)param_1[0x12];
  if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  piVar7 = (int *)param_1[0x11];
  if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  piVar7 = (int *)param_1[0x13];
  if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  iVar2 = 0;
  if (0 < (int)param_1[0x16]) {
    do {
      iVar6 = param_1[0x17];
      if (iVar6 != 0) {
        iVar3 = *(int *)(iVar6 + 8);
      }
      else {
        iVar3 = 0;
      }
      piVar7 = *(int **)(iVar3 + iVar2 * 4);
      if (iVar6 != 0) {
        iVar6 = *(int *)(iVar6 + 8);
      }
      else {
        iVar6 = 0;
      }
      *(undefined4 *)(iVar6 + iVar2 * 4) = 0;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 4))();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[0x16]);
  }
  piVar7 = (int *)param_1[0x19];
  if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  piVar7 = (int *)param_1[0x1a];
  if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  if (param_1[0x1c] != 0) {
    thunk_FUN_4a161530();
  }
  puVar4 = PTR_PTR_4a0ae940;
  param_1[0x14] = PTR_PTR_4a0ae940;
  iVar2 = param_1[0x16];
  piVar7 = (int *)param_1[0x17];
  if (piVar7 != (int *)0x0) {
    iVar6 = piVar7[2];
    puVar4 = (undefined *)(uint)*(byte *)(piVar7 + 5);
  }
  else {
    iVar6 = 0;
  }
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  if ((piVar7 == (int *)0x0) || (iVar3 = (**(code **)(*piVar7 + 8))(piVar7), iVar3 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar7 + 4))(piVar7);
    bVar1 = 1;
  }
  if (!(bool)(bVar1 & (piVar7 != (int *)0x0 && puVar4 != (undefined *)0x0))) {
    iVar6 = 0;
  }
  if (iVar6 != 0) {
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
      if (iVar6 == 0) goto LAB_4a0ae928;
    }
    FUN_4a14f21c();
  }
LAB_4a0ae928:
  iVar2 = FUN_4a0c6bf4(param_1 + 0x14);
  *(undefined **)(iVar2 + -0x50) = PTR_PTR_4a0b77cc;
  piVar7 = *(int **)(iVar2 + -0x48);
  if (piVar7 != (int *)0x0) {
    *(undefined4 *)(iVar2 + -0x48) = 0;
    iVar6 = (**(code **)(*piVar7 + 8))(piVar7);
    if (iVar6 != 0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
  }
  puVar4 = PTR_PTR_4a0b77d0;
  *(undefined **)(iVar2 + -0x3c) = PTR_PTR_4a0b77d0;
  piVar7 = *(int **)(iVar2 + -0x30);
  iVar6 = *(int *)(iVar2 + -0x34);
  if (piVar7 != (int *)0x0) {
    iVar3 = piVar7[2];
    puVar4 = (undefined *)(uint)*(byte *)(piVar7 + 5);
  }
  else {
    iVar3 = 0;
  }
  *(undefined4 *)(iVar2 + -0x30) = 0;
  *(undefined4 *)(iVar2 + -0x34) = 0;
  if ((piVar7 == (int *)0x0) || (iVar5 = (**(code **)(*piVar7 + 8))(piVar7), iVar5 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar7 + 4))(piVar7);
    bVar1 = 1;
  }
  if (!(bool)(bVar1 & (piVar7 != (int *)0x0 && puVar4 != (undefined *)0x0))) {
    iVar3 = 0;
  }
  if (iVar3 != 0) {
    iVar5 = 0;
    if (0 < iVar6) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar6);
      if (iVar3 == 0) goto LAB_4a0b77b8;
    }
    FUN_4a14f21c();
  }
LAB_4a0b77b8:
  iVar2 = FUN_4a0c6bf4(iVar2 + -0x3c);
  *(undefined **)(iVar2 + -0x14) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar2 + -0x10) = 0xffffffff;
  return;
}



// Address: 4a0ae944

int FUN_4a0ae944(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  uVar1 = FUN_4a0bf62c();
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  iVar6 = *(int *)(*(int *)(param_2 + 0x14) + uVar1 * 4);
  iVar3 = 0;
  iVar2 = *(int *)(param_2 + 0x14);
  if (param_3 != 0) {
    iVar3 = *(int *)(param_3 + 0x10);
    uVar1 = 0;
    iVar2 = iVar3;
  }
  if ((param_3 == 0 || iVar2 == 0) || iVar3 < 0) {
    return iVar6;
  }
  while (*(int *)(*(int *)(param_3 + 0x14) + uVar1 * 4) != iVar6) {
    uVar1 = uVar1 + 1;
    if (iVar2 <= (int)uVar1) {
      return iVar6;
    }
  }
  if (uVar1 == 0xffffffff) {
    return iVar6;
  }
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if (*(int *)(*(int *)(param_3 + 0x14) + iVar3 * 4) == iVar6) goto LAB_4a0ae9dc;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  iVar3 = -1;
LAB_4a0ae9dc:
  if (iVar3 != -1) {
    iVar3 = iVar3 + 1;
    if (iVar3 < iVar2) {
      do {
        piVar5 = *(int **)(*(int *)(param_3 + 0x14) + iVar3 * 4);
        piVar4 = *(int **)(*(int *)(param_3 + 0x14) + (iVar3 + -1) * 4);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0xc))();
        }
        *(int **)(*(int *)(param_3 + 0x14) + (iVar3 + -1) * 4) = piVar5;
        if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
          (**(code **)(*piVar4 + 4))(piVar4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_3 + 0x10));
    }
    iVar3 = *(int *)(param_3 + 0x10) + -1;
    piVar4 = *(int **)(*(int *)(param_3 + 0x14) + iVar3 * 4);
    *(undefined4 *)(*(int *)(param_3 + 0x14) + iVar3 * 4) = 0;
    if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 8))(piVar4), iVar3 != 0)) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
  }
  return iVar6;
}



// Address: 4a0aeacc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0aeacc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined *apuStack_48 [2];
  int iStack_40;
  int iStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  uVar3 = FUN_4a0bf62c(param_2);
  *(uint *)(param_1 + 0xc) =
       uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar3 = FUN_4a0bf62c(local_30);
  uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  iVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar4 = FUN_4a0ae944(local_30,param_3,param_4);
      FUN_4a0b72b0(param_1,uVar4);
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)uVar3);
  }
  uVar3 = FUN_4a0bf62c(local_30);
  puVar2 = PTR_PTR_4a0aecdc;
  puVar1 = PTR_PTR_4a0aecd8;
  uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  iVar11 = 0;
  if ((int)uVar3 < 1) {
    return;
  }
  do {
    FUN_4a0bf62c(local_30);
    uVar5 = FUN_4a0bf62c(local_30);
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    piVar6 = (int *)FUN_4a0c6bc0(apuStack_48);
    piVar6[2] = 0;
    piVar6[3] = 0;
    *piVar6 = (int)puVar2;
    if (0 < (int)uVar5) {
      iVar7 = FUN_4a15e080(uVar5);
      if (iVar7 == 0) {
        iVar7 = FUN_4a1669a8();
      }
      iVar8 = 0;
      do {
        *(undefined1 *)(iVar7 + iVar8) = 0;
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)uVar5);
      thunk_FUN_4a161570(0x18);
      puVar9 = (undefined4 *)FUN_4a0c0628();
      puVar9[3] = 1;
      puVar9[4] = uVar5;
      puVar9[2] = iVar7;
      *puVar9 = puVar1;
      *(undefined1 *)(puVar9 + 5) = 1;
      if (puVar9 != (undefined4 *)0x0) {
        (**(code **)(puVar1 + 0xc))(puVar9);
      }
      (**(code **)(*piVar6 + 0x1c))(piVar6);
      piVar6[2] = uVar5;
      piVar6[3] = (int)puVar9;
    }
    FUN_4a0bfae4(local_30,apuStack_48);
    iVar7 = iStack_40;
    apuStack_48[0] = puVar2;
    iVar8 = FUN_4a0bcc84(apuStack_48);
    if (iVar8 != 0) {
      iVar10 = 0;
      if (0 < iVar7) {
        do {
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar7);
        if (iVar8 == 0) goto LAB_4a0aecb8;
      }
      FUN_4a14f21c(iVar8);
    }
LAB_4a0aecb8:
    FUN_4a0c6bf4(apuStack_48);
    iVar11 = iVar11 + 1;
    if ((int)uVar3 <= iVar11) {
      return;
    }
  } while( true );
}



// Address: 4a0aed18

void FUN_4a0aed18(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 in_ZR;
  
  FUN_4a0b706c();
  uVar8 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  uVar6 = *(undefined4 *)(param_1 + 0x30);
  FUN_4a171da0(*(undefined4 *)(param_2 + 0x28),uVar8);
  if ((bool)in_ZR) {
    FUN_4a171da0(*(undefined4 *)(param_2 + 0x2c),uVar4);
  }
  if ((bool)in_ZR) {
    FUN_4a171da0(*(undefined4 *)(param_2 + 0x30),uVar6);
  }
  if (!(bool)in_ZR) {
    *(undefined4 *)(param_2 + 0x2c) = uVar4;
    *(undefined4 *)(param_2 + 0x30) = uVar6;
    *(undefined4 *)(param_2 + 0x28) = uVar8;
    *(undefined1 *)(param_2 + 200) = 0;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x34);
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  uVar8 = *(undefined4 *)(param_1 + 0x3c);
  FUN_4a171da0(*(undefined4 *)(param_2 + 0x34),uVar4);
  if ((bool)in_ZR) {
    FUN_4a171da0(*(undefined4 *)(param_2 + 0x38),uVar6);
  }
  if ((bool)in_ZR) {
    FUN_4a171da0(*(undefined4 *)(param_2 + 0x3c),uVar8);
  }
  if (!(bool)in_ZR) {
    *(undefined4 *)(param_2 + 0x34) = uVar4;
    *(undefined4 *)(param_2 + 0x38) = uVar6;
    *(undefined4 *)(param_2 + 0x3c) = uVar8;
    *(undefined1 *)(param_2 + 200) = 0;
  }
  FUN_4a0af308(param_2,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
               *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  iVar3 = *(int *)(param_1 + 0x7c);
  if (iVar3 == 0) {
    piVar2 = *(int **)(param_2 + 0x7c);
    if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 8))(piVar2), iVar3 != 0)) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    *(undefined4 *)(param_2 + 0x7c) = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x7c);
    if (iVar1 == 0) {
      uVar4 = thunk_FUN_4a161570(0x48);
      piVar2 = (int *)FUN_4a0b89d4(uVar4,iVar3);
      *(int **)(param_2 + 0x7c) = piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xc))();
      }
    }
    else {
      uVar4 = *(undefined4 *)(iVar3 + 0xc);
      uVar6 = *(undefined4 *)(iVar3 + 0x10);
      uVar8 = *(undefined4 *)(iVar3 + 0x14);
      uVar5 = *(undefined4 *)(iVar3 + 0x18);
      uVar7 = *(undefined4 *)(iVar3 + 0x1c);
      uVar9 = *(undefined4 *)(iVar3 + 0x20);
      uVar10 = *(undefined4 *)(iVar3 + 0x24);
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar3 + 8);
      *(undefined4 *)(iVar1 + 0xc) = uVar4;
      *(undefined4 *)(iVar1 + 0x10) = uVar6;
      *(undefined4 *)(iVar1 + 0x14) = uVar8;
      *(undefined4 *)(iVar1 + 0x18) = uVar5;
      *(undefined4 *)(iVar1 + 0x1c) = uVar7;
      *(undefined4 *)(iVar1 + 0x20) = uVar9;
      *(undefined4 *)(iVar1 + 0x24) = uVar10;
      uVar4 = *(undefined4 *)(iVar3 + 0x2c);
      uVar6 = *(undefined4 *)(iVar3 + 0x30);
      uVar8 = *(undefined4 *)(iVar3 + 0x34);
      uVar5 = *(undefined4 *)(iVar3 + 0x38);
      uVar7 = *(undefined4 *)(iVar3 + 0x3c);
      uVar9 = *(undefined4 *)(iVar3 + 0x40);
      uVar10 = *(undefined4 *)(iVar3 + 0x44);
      *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(iVar3 + 0x28);
      *(undefined4 *)(iVar1 + 0x2c) = uVar4;
      *(undefined4 *)(iVar1 + 0x30) = uVar6;
      *(undefined4 *)(iVar1 + 0x34) = uVar8;
      *(undefined4 *)(iVar1 + 0x38) = uVar5;
      *(undefined4 *)(iVar1 + 0x3c) = uVar7;
      *(undefined4 *)(iVar1 + 0x40) = uVar9;
      *(undefined4 *)(iVar1 + 0x44) = uVar10;
    }
  }
  *(undefined1 *)(param_2 + 200) = 0;
  return;
}



// Address: 4a0aee78

void FUN_4a0aee78(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  
  FUN_4a0b72ac();
  uVar10 = *(char *)(param_1 + 0x78) == '\0';
  if (!(bool)uVar10) {
    uVar4 = *(undefined4 *)(param_1 + 0x50);
    uVar6 = *(undefined4 *)(param_1 + 0x54);
    uVar8 = *(undefined4 *)(param_1 + 0x58);
    FUN_4a171da0(*(undefined4 *)(param_1 + 0x28),uVar4);
    if ((bool)uVar10) {
      FUN_4a171da0(*(undefined4 *)(param_1 + 0x2c),uVar6);
    }
    if ((bool)uVar10) {
      FUN_4a171da0(*(undefined4 *)(param_1 + 0x30),uVar8);
    }
    if (!(bool)uVar10) {
      *(undefined4 *)(param_1 + 0x28) = uVar4;
      *(undefined4 *)(param_1 + 0x2c) = uVar6;
      *(undefined4 *)(param_1 + 0x30) = uVar8;
      *(undefined1 *)(param_1 + 200) = 0;
    }
  }
  uVar10 = *(char *)(param_1 + 0x79) == '\0';
  if (!(bool)uVar10) {
    uVar4 = *(undefined4 *)(param_1 + 0x5c);
    uVar6 = *(undefined4 *)(param_1 + 0x60);
    uVar8 = *(undefined4 *)(param_1 + 100);
    FUN_4a171da0(*(undefined4 *)(param_1 + 0x34),uVar4);
    if ((bool)uVar10) {
      FUN_4a171da0(*(undefined4 *)(param_1 + 0x38),uVar6);
    }
    if ((bool)uVar10) {
      FUN_4a171da0(*(undefined4 *)(param_1 + 0x3c),uVar8);
    }
    if (!(bool)uVar10) {
      *(undefined4 *)(param_1 + 0x34) = uVar4;
      *(undefined4 *)(param_1 + 0x38) = uVar6;
      *(undefined4 *)(param_1 + 0x3c) = uVar8;
      *(undefined1 *)(param_1 + 200) = 0;
    }
  }
  if (*(char *)(param_1 + 0x7a) != '\0') {
    uVar4 = *(undefined4 *)(param_1 + 0x74);
    uVar6 = FUN_4a17211c(uVar4,uVar4);
    uVar5 = *(undefined4 *)(param_1 + 0x70);
    uVar8 = FUN_4a17211c(uVar5,uVar5);
    uVar7 = *(undefined4 *)(param_1 + 0x6c);
    uVar1 = FUN_4a17211c(uVar7,uVar7);
    uVar9 = *(undefined4 *)(param_1 + 0x68);
    uVar2 = FUN_4a17211c(uVar9,uVar9);
    uVar1 = FUN_4a171a94(uVar2,uVar1);
    uVar8 = FUN_4a171a94(uVar1,uVar8);
    uVar3 = FUN_4a171a94(uVar8,uVar6);
    if ((uVar3 & 0x7fffffff) != 0) {
      uVar4 = FUN_4a17295c(uVar4,0x10);
      FUN_4a171a94(uVar4,0x3f000000);
      uVar4 = FUN_4a171e1c();
      uVar6 = FUN_4a17295c(uVar5,0x10);
      FUN_4a171a94(uVar6,0x3f000000);
      uVar6 = FUN_4a171e1c();
      uVar8 = FUN_4a17295c(uVar7,0x10);
      FUN_4a171a94(uVar8,0x3f000000);
      uVar8 = FUN_4a171e1c();
      uVar1 = FUN_4a17295c(uVar9,0x10);
      FUN_4a171a94(uVar1,0x3f000000);
      uVar1 = FUN_4a171e1c();
      FUN_4a0af308(param_1,uVar1,uVar8,uVar6,uVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  return;
}



// Address: 4a0af058

void FUN_4a0af058(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  piVar4 = *(int **)(param_1 + 0x7c);
  if (param_2 == 0) {
    if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  else if (piVar4 == (int *)0x0) {
    uVar1 = thunk_FUN_4a161570(0x48);
    piVar4 = (int *)FUN_4a0b89d4(uVar1,param_2);
    *(int **)(param_1 + 0x7c) = piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))();
    }
  }
  else {
    iVar2 = *(int *)(param_2 + 0xc);
    iVar3 = *(int *)(param_2 + 0x10);
    iVar5 = *(int *)(param_2 + 0x14);
    iVar6 = *(int *)(param_2 + 0x18);
    iVar7 = *(int *)(param_2 + 0x1c);
    iVar8 = *(int *)(param_2 + 0x20);
    piVar4[2] = *(int *)(param_2 + 8);
    piVar4[3] = iVar2;
    piVar4[4] = iVar3;
    piVar4[5] = iVar5;
    piVar4[6] = iVar6;
    piVar4[7] = iVar7;
    piVar4[8] = iVar8;
    iVar2 = *(int *)(param_2 + 0x28);
    iVar3 = *(int *)(param_2 + 0x2c);
    iVar5 = *(int *)(param_2 + 0x30);
    iVar6 = *(int *)(param_2 + 0x34);
    iVar7 = *(int *)(param_2 + 0x38);
    iVar8 = *(int *)(param_2 + 0x3c);
    piVar4[9] = *(int *)(param_2 + 0x24);
    piVar4[10] = iVar2;
    piVar4[0xb] = iVar3;
    piVar4[0xc] = iVar5;
    piVar4[0xd] = iVar6;
    piVar4[0xe] = iVar7;
    piVar4[0xf] = iVar8;
    iVar2 = *(int *)(param_2 + 0x44);
    piVar4[0x10] = *(int *)(param_2 + 0x40);
    piVar4[0x11] = iVar2;
  }
  *(undefined1 *)(param_1 + 200) = 0;
  return;
}



// Address: 4a0af110

void FUN_4a0af110(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  uVar1 = FUN_4a17295c(param_2,0x10);
  FUN_4a171a94(uVar1,0x3f000000);
  uVar1 = FUN_4a171e1c();
  uVar2 = FUN_4a17295c(param_3,0x10);
  FUN_4a171a94(uVar2,0x3f000000);
  uVar2 = FUN_4a171e1c();
  uVar3 = FUN_4a17295c(param_4,0x10);
  FUN_4a171a94(uVar3,0x3f000000);
  uVar3 = FUN_4a171e1c();
  uVar4 = FUN_4a17295c(param_5,0x10);
  FUN_4a171a94(uVar4,0x3f000000);
  uVar4 = FUN_4a171e1c();
  FUN_4a0b846c(uVar1,uVar2,uVar3,uVar4,&local_28);
  FUN_4a0af308(param_1,local_28,uStack_24,uStack_20,local_1c);
  return;
}



// Address: 4a0af1d4

void FUN_4a0af1d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 in_ZR;
  
  FUN_4a171da0(*(undefined4 *)(param_1 + 0x28));
  if ((bool)in_ZR) {
    FUN_4a171da0(*(undefined4 *)(param_1 + 0x2c),param_3);
  }
  if ((bool)in_ZR) {
    FUN_4a171da0(*(undefined4 *)(param_1 + 0x30),param_4);
  }
  if (!(bool)in_ZR) {
    *(undefined4 *)(param_1 + 0x28) = param_2;
    *(undefined4 *)(param_1 + 0x2c) = param_3;
    *(undefined4 *)(param_1 + 0x30) = param_4;
    *(undefined1 *)(param_1 + 200) = 0;
    return;
  }
  return;
}



// Address: 4a0af228

void FUN_4a0af228(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  FUN_4a0b846c(param_2,param_3,param_4,param_5,&local_18);
  FUN_4a0af308(param_1,local_18,uStack_14,uStack_10,local_c);
  return;
}



// Address: 4a0af278

void FUN_4a0af278(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 in_ZR;
  
  uVar1 = FUN_4a171fac(param_2);
  uVar1 = FUN_4a17295c(uVar1,0xfffffff0);
  uVar2 = FUN_4a171fac(param_3);
  uVar2 = FUN_4a17295c(uVar2,0xfffffff0);
  uVar3 = FUN_4a171fac(param_4);
  uVar3 = FUN_4a17295c(uVar3,0xfffffff0);
  FUN_4a171da0(*(undefined4 *)(param_1 + 0x28),uVar1);
  if ((bool)in_ZR) {
    FUN_4a171da0(*(undefined4 *)(param_1 + 0x2c),uVar2);
  }
  if ((bool)in_ZR) {
    FUN_4a171da0(*(undefined4 *)(param_1 + 0x30),uVar3);
  }
  if (!(bool)in_ZR) {
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(undefined4 *)(param_1 + 0x30) = uVar3;
    *(undefined1 *)(param_1 + 200) = 0;
    return;
  }
  return;
}



// Address: 4a0af308

void FUN_4a0af308(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  ulonglong uVar16;
  
  uVar3 = FUN_4a171fac(param_2);
  uVar3 = FUN_4a17295c(uVar3,0xfffffff0);
  uVar4 = FUN_4a171fac(param_3);
  uVar4 = FUN_4a17295c(uVar4,0xfffffff0);
  uVar5 = FUN_4a171fac(param_4);
  uVar5 = FUN_4a17295c(uVar5,0xfffffff0);
  uVar6 = FUN_4a171fac(param_5);
  uVar6 = FUN_4a17295c(uVar6,0xfffffff0);
  uVar6 = FUN_4a17211c(uVar6,uVar6);
  uVar5 = FUN_4a17211c(uVar5,uVar5);
  uVar4 = FUN_4a17211c(uVar4,uVar4);
  uVar3 = FUN_4a17211c(uVar3,uVar3);
  uVar3 = FUN_4a171a94(uVar3,uVar4);
  uVar3 = FUN_4a171a94(uVar3,uVar5);
  FUN_4a171a94(uVar3,uVar6);
  uVar3 = FUN_4a002b60();
  FUN_4a171bb8(0x47800000,uVar3);
  uVar16 = FUN_4a1727c4();
  iVar9 = (int)(uVar16 >> 0x20);
  iVar7 = (int)uVar16;
  lVar1 = (uVar16 & 0xffffffff) * (ulonglong)param_2;
  uVar13 = (uint)lVar1 >> 0x10 |
           (param_2 * iVar9 + iVar7 * ((int)param_2 >> 0x1f) + (int)((ulonglong)lVar1 >> 0x20)) *
           0x10000;
  lVar1 = (uVar16 & 0xffffffff) * (ulonglong)param_3;
  uVar11 = (uint)lVar1 >> 0x10 |
           (iVar9 * param_3 + iVar7 * ((int)param_3 >> 0x1f) + (int)((ulonglong)lVar1 >> 0x20)) *
           0x10000;
  lVar1 = (uVar16 & 0xffffffff) * (ulonglong)param_4;
  lVar2 = (uVar16 & 0xffffffff) * (ulonglong)param_5;
  uVar12 = (uint)lVar1 >> 0x10 |
           (iVar9 * param_4 + iVar7 * ((int)param_4 >> 0x1f) + (int)((ulonglong)lVar1 >> 0x20)) *
           0x10000;
  uVar8 = (uint)lVar2 >> 0x10 |
          (param_5 * iVar9 + ((int)param_5 >> 0x1f) * iVar7 + (int)((ulonglong)lVar2 >> 0x20)) *
          0x10000;
  uVar10 = *(uint *)(param_1 + 0x40);
  bVar14 = uVar10 == uVar13;
  if (bVar14) {
    uVar10 = *(uint *)(param_1 + 0x44);
  }
  bVar15 = bVar14 && uVar10 == uVar11;
  if (bVar14 && uVar10 == uVar11) {
    bVar15 = *(uint *)(param_1 + 0x48) == uVar12;
  }
  bVar14 = false;
  if (bVar15) {
    bVar14 = *(uint *)(param_1 + 0x4c) == uVar8;
  }
  if (!bVar14) {
    *(uint *)(param_1 + 0x4c) = uVar8;
    *(uint *)(param_1 + 0x44) = uVar11;
    *(uint *)(param_1 + 0x48) = uVar12;
    *(uint *)(param_1 + 0x40) = uVar13;
    *(undefined1 *)(param_1 + 200) = 0;
    return;
  }
  return;
}



// Address: 4a0af484

void FUN_4a0af484(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  FUN_4a0b74a8();
  puVar8 = (undefined4 *)0x0;
  if (*(int *)(param_3 + 0xc) != 0) {
    puVar8 = *(undefined4 **)(*(int *)(param_3 + 0xc) + 8);
  }
  if (param_2 == 0x10c) {
    *(undefined1 *)(param_1 + 0x7a) = 1;
    uVar1 = *(undefined4 *)(param_1 + 0x74);
    uVar2 = FUN_4a17211c(uVar1,puVar8[3]);
    uVar9 = *(undefined4 *)(param_1 + 0x70);
    uVar3 = FUN_4a17211c(uVar9,puVar8[2]);
    uVar10 = *(undefined4 *)(param_1 + 0x6c);
    uVar4 = FUN_4a17211c(uVar10,puVar8[1]);
    uVar7 = *puVar8;
    uVar11 = *(undefined4 *)(param_1 + 0x68);
    uVar5 = FUN_4a17211c(uVar11);
    uVar4 = FUN_4a171a94(uVar5,uVar4);
    uVar3 = FUN_4a171a94(uVar4,uVar3);
    uVar6 = FUN_4a171a94(uVar3,uVar2);
    if (uVar6 < 0x80000001) {
      uVar2 = FUN_4a171a94(uVar11,uVar7);
      *(undefined4 *)(param_1 + 0x68) = uVar2;
      uVar2 = FUN_4a171a94(uVar10,puVar8[1]);
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
      uVar2 = FUN_4a171a94(uVar9,puVar8[2]);
      *(undefined4 *)(param_1 + 0x70) = uVar2;
      uVar1 = FUN_4a171a94(uVar1,puVar8[3]);
    }
    else {
      uVar2 = FUN_4a1725c0();
      *(undefined4 *)(param_1 + 0x68) = uVar2;
      uVar2 = FUN_4a1725c0(uVar10,puVar8[1]);
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
      uVar2 = FUN_4a1725c0(uVar9,puVar8[2]);
      *(undefined4 *)(param_1 + 0x70) = uVar2;
      uVar1 = FUN_4a1725c0(uVar1,puVar8[3]);
    }
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    return;
  }
  if (param_2 == 0x10e) {
    *(undefined1 *)(param_1 + 0x79) = 1;
    uVar1 = FUN_4a171a94(*(undefined4 *)(param_1 + 0x5c),*puVar8);
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    uVar1 = FUN_4a171a94(*(undefined4 *)(param_1 + 0x60),puVar8[1]);
    *(undefined4 *)(param_1 + 0x60) = uVar1;
    uVar1 = FUN_4a171a94(*(undefined4 *)(param_1 + 100),puVar8[2]);
    *(undefined4 *)(param_1 + 100) = uVar1;
    return;
  }
  if (param_2 == 0x113) {
    *(undefined1 *)(param_1 + 0x78) = 1;
    uVar1 = FUN_4a171a94(*(undefined4 *)(param_1 + 0x50),*puVar8);
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    uVar1 = FUN_4a171a94(*(undefined4 *)(param_1 + 0x54),puVar8[1]);
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    uVar1 = FUN_4a171a94(*(undefined4 *)(param_1 + 0x58),puVar8[2]);
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    return;
  }
  return;
}



// Address: 4a0af650

void FUN_4a0af650(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 in_ZR;
  
  FUN_4a171da0(*(undefined4 *)(param_1 + 0x34));
  if ((bool)in_ZR) {
    FUN_4a171da0(*(undefined4 *)(param_1 + 0x38),param_3);
  }
  if ((bool)in_ZR) {
    FUN_4a171da0(*(undefined4 *)(param_1 + 0x3c),param_4);
  }
  if (!(bool)in_ZR) {
    *(undefined4 *)(param_1 + 0x34) = param_2;
    *(undefined4 *)(param_1 + 0x38) = param_3;
    *(undefined4 *)(param_1 + 0x3c) = param_4;
    *(undefined1 *)(param_1 + 200) = 0;
    return;
  }
  return;
}



// Address: 4a0af6a4

void FUN_4a0af6a4(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_4a0b7654();
  *puVar1 = PTR_PTR_4a0af744;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xd] = 0x3f800000;
  puVar1[0xc] = 0;
  puVar1[0xe] = 0x3f800000;
  puVar1[0xf] = 0x3f800000;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x13] = 0x10000;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined1 *)(puVar1 + 0x1e) = 0;
  *(undefined1 *)((int)puVar1 + 0x79) = 0;
  *(undefined1 *)((int)puVar1 + 0x7a) = 0;
  puVar1[0x1f] = 0;
  iVar2 = FUN_4a0b8a1c(puVar1 + 0x20);
  *(undefined1 *)(iVar2 + 0x48) = 0;
  return;
}



// Address: 4a0af7c0

void FUN_4a0af7c0(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
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



// Address: 4a0af82c

void FUN_4a0af82c(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_2c [20];
  
  FUN_4a0b706c();
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x30);
  piVar6 = *(int **)(param_1 + 0x2c);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))(piVar6);
  }
  piVar7 = *(int **)(param_2 + 0x2c);
  if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  *(int **)(param_2 + 0x2c) = piVar6;
  piVar6 = *(int **)(param_1 + 0x28);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))(piVar6);
  }
  piVar7 = *(int **)(param_2 + 0x28);
  if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  *(int **)(param_2 + 0x28) = piVar6;
  iVar2 = piVar6[0xb];
  piVar6 = (int *)FUN_4a0c6bc0(auStack_2c);
  puVar1 = PTR_PTR_4a0afaa4;
  piVar6[2] = 0;
  piVar6[3] = 0;
  *piVar6 = (int)puVar1;
  if (iVar2 < 1) {
    iVar2 = piVar6[2];
  }
  else {
    iVar3 = FUN_4a15e080(iVar2 << 2);
    if (iVar3 == 0) {
      iVar3 = FUN_4a1669a8();
    }
    iVar5 = 0;
    do {
      *(undefined4 *)(iVar3 + iVar5 * 4) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
    thunk_FUN_4a161570(0x18);
    puVar4 = (undefined4 *)FUN_4a0c0628();
    puVar4[3] = 4;
    puVar4[4] = iVar2;
    puVar1 = PTR_PTR_4a0afaa8;
    *puVar4 = PTR_PTR_4a0afaa8;
    puVar4[2] = iVar3;
    *(undefined1 *)(puVar4 + 5) = 1;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar4);
    }
    (**(code **)(*piVar6 + 0x1c))(piVar6);
    piVar6[3] = (int)puVar4;
    piVar6[2] = iVar2;
  }
  piVar6 = (int *)piVar6[3];
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))(piVar6);
  }
  (**(code **)(*(int *)(param_2 + 0x34) + 0x1c))((int *)(param_2 + 0x34));
  *(int *)(param_2 + 0x3c) = iVar2;
  *(int **)(param_2 + 0x40) = piVar6;
  FUN_4a16ba04(auStack_2c);
  return;
}



// Address: 4a0af8b4

void FUN_4a0af8b4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



// Address: 4a0af8bc

void FUN_4a0af8bc(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar2 = *(int **)(param_1 + 0x2c);
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *(int **)(param_1 + 0x2c) = param_2;
  return;
}



// Address: 4a0af928

void FUN_4a0af928(int param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_2c [20];
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar6 = *(int **)(param_1 + 0x28);
  if ((piVar6 != (int *)0x0) && (iVar2 = (**(code **)(*piVar6 + 8))(piVar6), iVar2 != 0)) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  *(int **)(param_1 + 0x28) = param_2;
  iVar2 = param_2[0xb];
  piVar6 = (int *)FUN_4a0c6bc0(auStack_2c);
  puVar1 = PTR_PTR_4a0afaa4;
  piVar6[2] = 0;
  piVar6[3] = 0;
  *piVar6 = (int)puVar1;
  if (iVar2 < 1) {
    iVar2 = piVar6[2];
  }
  else {
    iVar3 = FUN_4a15e080(iVar2 << 2);
    if (iVar3 == 0) {
      iVar3 = FUN_4a1669a8();
    }
    iVar5 = 0;
    do {
      *(undefined4 *)(iVar3 + iVar5 * 4) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
    thunk_FUN_4a161570(0x18);
    puVar4 = (undefined4 *)FUN_4a0c0628();
    puVar4[3] = 4;
    puVar4[4] = iVar2;
    puVar1 = PTR_PTR_4a0afaa8;
    *puVar4 = PTR_PTR_4a0afaa8;
    puVar4[2] = iVar3;
    *(undefined1 *)(puVar4 + 5) = 1;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar4);
    }
    (**(code **)(*piVar6 + 0x1c))(piVar6);
    piVar6[3] = (int)puVar4;
    piVar6[2] = iVar2;
  }
  piVar6 = (int *)piVar6[3];
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))(piVar6);
  }
  (**(code **)(*(int *)(param_1 + 0x34) + 0x1c))((int *)(param_1 + 0x34));
  *(int *)(param_1 + 0x3c) = iVar2;
  *(int **)(param_1 + 0x40) = piVar6;
  FUN_4a16ba04(auStack_2c);
  return;
}



// Address: 4a0afaac

undefined4 * FUN_4a0afaac(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_4a0b7654();
  *puVar2 = PTR_PTR_4a0afafc;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 0xd);
  puVar1 = PTR_PTR_4a0afb00;
  puVar2[2] = 0;
  *puVar2 = puVar1;
  puVar2[3] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 5);
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = puVar1;
  return puVar2 + -0x12;
}



// Address: 4a0afbb8

void FUN_4a0afbb8(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  *param_1 = PTR_PTR_4a0afc5c;
  piVar6 = (int *)param_1[10];
  if ((piVar6 != (int *)0x0) && (iVar2 = (**(code **)(*piVar6 + 8))(piVar6), iVar2 != 0)) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  piVar6 = (int *)param_1[0xb];
  if ((piVar6 != (int *)0x0) && (iVar2 = (**(code **)(*piVar6 + 8))(piVar6), iVar2 != 0)) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  iVar2 = FUN_4a16ba04(param_1 + 0x12);
  iVar2 = FUN_4a16ba04(iVar2 + -0x14);
  *(undefined **)(iVar2 + -0x34) = PTR_PTR_4a0b77cc;
  piVar6 = *(int **)(iVar2 + -0x2c);
  if (piVar6 != (int *)0x0) {
    *(undefined4 *)(iVar2 + -0x2c) = 0;
    iVar3 = (**(code **)(*piVar6 + 8))(piVar6);
    if (iVar3 != 0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
  }
  puVar4 = PTR_PTR_4a0b77d0;
  *(undefined **)(iVar2 + -0x20) = PTR_PTR_4a0b77d0;
  piVar6 = *(int **)(iVar2 + -0x14);
  iVar3 = *(int *)(iVar2 + -0x18);
  if (piVar6 != (int *)0x0) {
    iVar7 = piVar6[2];
    puVar4 = (undefined *)(uint)*(byte *)(piVar6 + 5);
  }
  else {
    iVar7 = 0;
  }
  *(undefined4 *)(iVar2 + -0x14) = 0;
  *(undefined4 *)(iVar2 + -0x18) = 0;
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
  iVar2 = FUN_4a0c6bf4(iVar2 + -0x20);
  *(undefined **)(iVar2 + -0x14) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar2 + -0x10) = 0xffffffff;
  return;
}



// Address: 4a0afc60

void FUN_4a0afc60(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  FUN_4a0b706c();
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x28);
  piVar2 = *(int **)(param_1 + 0x34);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
  }
  piVar3 = *(int **)(param_2 + 0x34);
  if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  *(int **)(param_2 + 0x34) = piVar2;
  piVar2 = *(int **)(param_1 + 0x30);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
  }
  piVar3 = *(int **)(param_2 + 0x30);
  if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  *(int **)(param_2 + 0x30) = piVar2;
  piVar2 = *(int **)(param_1 + 0x2c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
  }
  piVar3 = *(int **)(param_2 + 0x2c);
  if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  *(int **)(param_2 + 0x2c) = piVar2;
  return;
}



// Address: 4a0afda0

void FUN_4a0afda0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar2 = *(int **)(param_1 + 0x30);
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *(int **)(param_1 + 0x30) = param_2;
  return;
}



// Address: 4a0afe0c

void FUN_4a0afe0c(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar2 = *(int **)(param_1 + 0x34);
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *(int **)(param_1 + 0x34) = param_2;
  return;
}



// Address: 4a0afe78

void FUN_4a0afe78(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}



// Address: 4a0afe80

void FUN_4a0afe80(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0b7654();
  *puVar1 = PTR_PTR_4a0afeac;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  return;
}



// Address: 4a0aff90

void FUN_4a0aff90(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  *param_1 = PTR_PTR_4a0b0060;
  piVar5 = (int *)param_1[0xb];
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  piVar5 = (int *)param_1[0xc];
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  piVar5 = (int *)param_1[0xd];
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
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



// Address: 4a0b00b8

void FUN_4a0b00b8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  
  FUN_4a0b706c();
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x28);
  piVar3 = *(int **)(param_1 + 0x2c);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  piVar4 = *(int **)(param_2 + 0x2c);
  if ((piVar4 != (int *)0x0) && (iVar1 = (**(code **)(*piVar4 + 8))(piVar4), iVar1 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  *(int **)(param_2 + 0x2c) = piVar3;
  uVar2 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x30));
  uVar2 = FUN_4a17295c(uVar2,0xfffffff0);
  FUN_4a17295c(uVar2,0x10);
  uVar2 = FUN_4a171e1c();
  *(undefined4 *)(param_2 + 0x30) = uVar2;
  *(undefined1 *)(param_2 + 0x36) = *(undefined1 *)(param_1 + 0x36);
  *(undefined1 *)(param_2 + 0x35) = *(undefined1 *)(param_1 + 0x35);
  *(undefined1 *)(param_2 + 0x34) = *(undefined1 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  return;
}



// Address: 4a0b0180

void FUN_4a0b0180(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}



// Address: 4a0b0188

void FUN_4a0b0188(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_4a17295c(param_2,0x10);
  uVar1 = FUN_4a171e1c();
  FUN_4a17295c(param_3,0x10);
  uVar2 = FUN_4a171e1c();
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  return;
}



// Address: 4a0b01c8

void FUN_4a0b01c8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_4a17295c(param_2,0x10);
  uVar1 = FUN_4a171e1c();
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return;
}



// Address: 4a0b01ec

void FUN_4a0b01ec(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x34) = param_2;
  return;
}



// Address: 4a0b01f4

void FUN_4a0b01f4(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x37) = param_2;
  return;
}



// Address: 4a0b01fc

void FUN_4a0b01fc(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x36) = param_2;
  return;
}



// Address: 4a0b0204

void FUN_4a0b0204(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x35) = param_2;
  return;
}



// Address: 4a0b020c

void FUN_4a0b020c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0b7654();
  *puVar1 = PTR_PTR_4a0b0254;
  puVar1[10] = 0x44;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined1 *)(puVar1 + 0xd) = 1;
  *(undefined1 *)((int)puVar1 + 0x35) = 1;
  *(undefined1 *)((int)puVar1 + 0x36) = 1;
  *(undefined1 *)((int)puVar1 + 0x37) = 1;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  return;
}



// Address: 4a0b02c0

void FUN_4a0b02c0(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  *param_1 = PTR_PTR_4a0b0318;
  piVar5 = (int *)param_1[0xb];
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
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



// Address: 4a0b0338

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0b0338(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int *piStack_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  
  piVar11 = *(int **)(param_2 + 0x28);
  local_38 = *piVar11;
  piStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  if ((local_38 != 0) && ((char)piVar11[5] == '\0')) goto LAB_4a0b0924;
  bVar15 = (char)piVar11[5] != '\0';
  bVar16 = local_38 != 0;
  *(undefined1 *)(piVar11 + 5) = 0;
  uVar1 = FUN_4a13c084(param_2);
  uVar10 = uVar1 & 0xff;
  if (bVar15 && bVar16) {
    (**(code **)(*param_1 + 0x10))(param_1,local_2c,local_38);
  }
  else {
    (**(code **)(*param_1 + 0x18))(param_1,1,&local_38);
    (**(code **)(*param_1 + 0x10))(param_1,local_2c,local_38);
    FUN_4a150b70(local_2c,0x2800,local_28);
    FUN_4a150b70(local_2c,0x2801,param_5);
    FUN_4a150b70(0xde1,0x2802,param_6);
    FUN_4a150b70(0xde1,0x2803,param_7);
  }
  uVar12 = 0x1907;
  local_40 = 0x1401;
  local_3c = 0x1907;
  uVar13 = 0;
  if (uVar10 == 0x78) {
    (**(code **)(*param_1 + 8))(param_1,0xcf5,1);
    uVar12 = 0x8c92;
    goto LAB_4a0b0658;
  }
  if (uVar10 < 0x79) {
    switch(uVar10) {
    case 99:
      (**(code **)(*param_1 + 8))(param_1,0xcf5,1);
      break;
    case 100:
      (**(code **)(*param_1 + 8))(param_1,0xcf5,4);
      local_3c = 0x1908;
      uVar12 = 0x1908;
      break;
    case 0x65:
      (**(code **)(*param_1 + 8))(param_1,0xcf5,2);
      local_40 = 0x8363;
      break;
    case 0x66:
      (**(code **)(*param_1 + 8))(param_1,0xcf5,2);
      local_40 = 0x8034;
      local_3c = 0x1908;
      uVar12 = 0x1908;
      break;
    case 0x67:
      (**(code **)(*param_1 + 8))(param_1,0xcf5,2);
      local_40 = 0x8033;
      local_3c = 0x1908;
      uVar12 = 0x1908;
    }
  }
  else {
    switch(uVar10) {
    case 0x79:
      (**(code **)(*param_1 + 8))(param_1,0xcf5,1);
      uVar12 = 0x8c93;
      break;
    case 0x7a:
      (**(code **)(*param_1 + 8))(param_1,0xcf5,1);
      uVar12 = 0x8c01;
      break;
    case 0x7b:
      (**(code **)(*param_1 + 8))(param_1,0xcf5,1);
      uVar12 = 0x8c03;
      break;
    case 0x7c:
      (**(code **)(*param_1 + 8))(param_1,0xcf5,1);
      uVar12 = 0x8c00;
      break;
    case 0x7d:
      (**(code **)(*param_1 + 8))(param_1,0xcf5,1);
      uVar12 = 0x8c02;
      break;
    default:
      goto switchD_4a0b0484_default;
    }
LAB_4a0b0658:
    uVar13 = 1;
  }
switchD_4a0b0484_default:
  if ((uVar13 & ~(~(uVar1 >> 0xf) & 1)) == 0) {
    iVar3 = 0;
    iVar2 = 0;
    iVar5 = FUN_4a13c044(local_30);
    if (0 < iVar5) {
      do {
        iVar6 = FUN_4a13bf90(local_30,iVar2);
        iVar7 = FUN_4a13bfa0(local_30,iVar2);
        iVar9 = *(int *)PTR_DAT_4a0b0a10;
        iVar5 = iVar6 - iVar9;
        iVar14 = iVar6;
        if (iVar6 <= iVar9) {
          iVar5 = iVar7 - iVar9;
          iVar14 = iVar7;
        }
        if (iVar14 == iVar9 || iVar5 < 0 != SBORROW4(iVar14,iVar9)) {
          uVar4 = FUN_4a13bf78(local_30,iVar2);
          uVar8 = FUN_4a13bfb0(local_30,iVar2);
          if (uVar13 == 0) {
            if (bVar15 && bVar16) {
              (**(code **)(*param_1 + 0x3c))
                        (param_1,local_2c,iVar3,0,0,iVar6,iVar7,local_3c,local_40,uVar4);
            }
            else {
              (**(code **)(*param_1 + 0x40))
                        (param_1,local_2c,iVar3,uVar12,iVar6,iVar7,0,local_3c,local_40,uVar4);
            }
          }
          else if (bVar15 && bVar16) {
            (**(code **)(*param_1 + 0x44))
                      (param_1,local_2c,iVar3,0,0,iVar6,iVar7,local_3c,uVar8,uVar4);
          }
          else {
            (**(code **)(*param_1 + 0x48))(param_1,local_2c,iVar3,uVar12,iVar6,iVar7,0,uVar8,uVar4);
          }
          iVar3 = iVar3 + 1;
        }
        iVar2 = iVar2 + 1;
        iVar5 = FUN_4a13c044(local_30);
      } while (iVar2 < iVar5);
    }
  }
  else {
    iVar2 = FUN_4a13bf90(local_30,0);
    iVar3 = FUN_4a13bfa0(local_30,0);
    uVar4 = FUN_4a13bf78(local_30,0);
    iVar5 = FUN_4a13bfb0(local_30,0);
    iVar14 = 0;
    while( true ) {
      if (bVar15 && bVar16) {
        (**(code **)(*param_1 + 0x44))(param_1,local_2c,iVar14,0,0,iVar2,iVar3,local_3c,iVar5,uVar4)
        ;
      }
      else {
        (**(code **)(*param_1 + 0x48))(param_1,local_2c,iVar14,uVar12,iVar2,iVar3,0,iVar5,uVar4);
      }
      if (iVar2 == 1) break;
      iVar5 = iVar5 >> 2;
      iVar2 = iVar2 >> 1;
      iVar3 = iVar3 >> 1;
      if (iVar5 < 0x20) {
        iVar5 = 0x20;
      }
      iVar14 = iVar14 + 1;
    }
  }
  iVar5 = FUN_4a13c08c(local_30);
  if (iVar5 == 0) {
    FUN_4a0b6ca0(local_30);
  }
  *piVar11 = local_38;
  piVar11[1] = local_28;
  piVar11[2] = param_5;
  piVar11[3] = param_6;
  piVar11[4] = param_7;
  piVar11[6] = (int)PTR_DAT_4a0b0a14;
LAB_4a0b0924:
  (**(code **)(*param_1 + 0x10))(param_1,local_2c,local_38);
  if (piVar11[1] != local_28) {
    FUN_4a150b70(0xde1,0x2800,local_28);
    piVar11[1] = local_28;
  }
  if (piVar11[2] != param_5) {
    FUN_4a150b70(0xde1,0x2801,param_5);
    piVar11[2] = param_5;
  }
  if (piVar11[3] != param_6) {
    FUN_4a150b70(0xde1,0x2802,param_6);
    piVar11[3] = param_6;
  }
  if (piVar11[4] == param_7) {
    return;
  }
  FUN_4a150b70(0xde1,0x2803,param_7);
  piVar11[4] = param_7;
  return;
}



// Address: 4a0b0a18

undefined4 FUN_4a0b0a18(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined *local_5c [2];
  int local_54;
  int *local_50;
  undefined *local_48 [2];
  int local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  thunk_FUN_4a161570(0x48);
  local_34 = FUN_4a0ad6e4();
  FUN_4a0aeacc(local_34,local_30,param_2,param_3);
  uVar6 = FUN_4a0bf578(local_30);
  iVar7 = FUN_4a0bf578(local_30);
  iVar8 = FUN_4a0bf578(local_30);
  iVar9 = FUN_4a0bfbdc(local_30);
  iVar9 = (int)(short)((ushort)((uint)iVar9 >> 8) & 0xff | (ushort)(iVar9 << 8));
  FUN_4a0ad4b8(local_34,iVar9,iVar7,uVar6);
  puVar3 = PTR_PTR_4a0b10b8;
  puVar2 = PTR_PTR_4a0b10b4;
  if (iVar8 != 0) {
    return local_34;
  }
  switch(uVar6) {
  case 1:
    iVar7 = iVar9 * iVar7;
    piVar10 = (int *)FUN_4a0c6bc0(local_5c);
    puVar4 = PTR_PTR_4a0b10bc;
    piVar10[2] = 0;
    piVar10[3] = 0;
    *piVar10 = (int)puVar4;
    if (0 < iVar7) {
      iVar8 = FUN_4a15e080(iVar7);
      if (iVar8 == 0) {
        iVar8 = FUN_4a1669a8();
      }
      iVar11 = 0;
      do {
        *(undefined1 *)(iVar8 + iVar11) = 0;
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar7);
      thunk_FUN_4a161570(0x18);
      puVar12 = (undefined4 *)FUN_4a0c0628();
      puVar12[3] = 1;
      puVar12[4] = iVar7;
      puVar12[2] = iVar8;
      *puVar12 = puVar2;
      *(undefined1 *)(puVar12 + 5) = 1;
      if (puVar12 != (undefined4 *)0x0) {
        (**(code **)(puVar2 + 0xc))(puVar12);
      }
      (**(code **)(*piVar10 + 0x1c))(piVar10);
      piVar10[2] = iVar7;
      piVar10[3] = (int)puVar12;
    }
    iVar11 = 0;
    iVar8 = 1;
    if (1 < iVar7 + 1) {
      do {
        uVar5 = FUN_4a0bf920(local_30);
        iVar8 = iVar8 + 1;
        if (local_50 == (int *)0x0) {
          iVar13 = 0;
        }
        else {
          iVar13 = local_50[2];
        }
        *(undefined1 *)(iVar13 + iVar11) = uVar5;
        iVar11 = iVar11 + 1;
      } while (iVar8 < iVar7 + 1);
    }
    puVar12 = (undefined4 *)FUN_4a0c6bc0(local_48);
    *puVar12 = puVar3;
    puVar12[2] = local_54;
    puVar12[3] = local_50;
    if (local_50 != (int *)0x0) {
      (**(code **)(*local_50 + 0xc))();
    }
    *puVar12 = puVar4;
    FUN_4a0ad06c(local_34,0,iVar9,puVar12);
    local_48[0] = puVar4;
    iVar9 = FUN_4a0bcc84(local_48);
    if (iVar9 != 0) {
      iVar7 = 0;
      if (0 < local_40) {
        do {
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_40);
        if (iVar9 == 0) goto LAB_4a0b0c50;
      }
      FUN_4a14f21c();
    }
LAB_4a0b0c50:
    FUN_4a0c6bf4(local_48);
    local_5c[0] = puVar4;
    iVar9 = FUN_4a0bcc84(local_5c);
    if (iVar9 != 0) {
      iVar7 = 0;
      if (0 < local_54) {
        do {
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_54);
        if (iVar9 == 0) goto LAB_4a0b0c98;
      }
      FUN_4a14f21c();
    }
LAB_4a0b0c98:
    FUN_4a0c6bf4(local_5c);
    break;
  case 2:
  case 5:
    iVar7 = iVar9 * iVar7;
    piVar10 = (int *)FUN_4a0c6bc0(local_5c);
    puVar4 = PTR_PTR_4a0b10c0;
    piVar10[2] = 0;
    piVar10[3] = 0;
    *piVar10 = (int)puVar4;
    if (0 < iVar7) {
      iVar8 = FUN_4a15e080(iVar7 * 2);
      if (iVar8 == 0) {
        iVar8 = FUN_4a1669a8();
      }
      iVar11 = 0;
      do {
        iVar13 = iVar11 * 2;
        iVar11 = iVar11 + 1;
        *(undefined2 *)(iVar8 + iVar13) = 0;
      } while (iVar11 < iVar7);
      thunk_FUN_4a161570(0x18);
      puVar12 = (undefined4 *)FUN_4a0c0628();
      puVar12[3] = 2;
      puVar12[4] = iVar7;
      puVar12[2] = iVar8;
      *puVar12 = puVar2;
      *(undefined1 *)(puVar12 + 5) = 1;
      if (puVar12 != (undefined4 *)0x0) {
        (**(code **)(puVar2 + 0xc))(puVar12);
      }
      (**(code **)(*piVar10 + 0x1c))(piVar10);
      piVar10[2] = iVar7;
      piVar10[3] = (int)puVar12;
    }
    iVar11 = 0;
    iVar8 = 1;
    if (1 < iVar7 + 1) {
      do {
        iVar13 = FUN_4a0bfbdc(local_30);
        if (local_50 == (int *)0x0) {
          iVar14 = 0;
        }
        else {
          iVar14 = local_50[2];
        }
        iVar1 = iVar11 * 2;
        iVar8 = iVar8 + 1;
        iVar11 = iVar11 + 1;
        *(ushort *)(iVar14 + iVar1) = (ushort)((uint)iVar13 >> 8) & 0xff | (ushort)(iVar13 << 8);
      } while (iVar8 < iVar7 + 1);
    }
    puVar12 = (undefined4 *)FUN_4a0c6bc0(local_48);
    *puVar12 = puVar3;
    puVar12[2] = local_54;
    puVar12[3] = local_50;
    if (local_50 != (int *)0x0) {
      (**(code **)(*local_50 + 0xc))();
    }
    *puVar12 = puVar4;
    FUN_4a0ad258(local_34,0,iVar9,puVar12);
    local_48[0] = puVar4;
    iVar9 = FUN_4a0bcc84(local_48);
    if (iVar9 != 0) {
      iVar7 = 0;
      if (0 < local_40) {
        do {
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_40);
        if (iVar9 == 0) goto LAB_4a0b0e40;
      }
      FUN_4a14f21c();
    }
LAB_4a0b0e40:
    FUN_4a0c6bf4(local_48);
    local_5c[0] = puVar4;
    iVar9 = FUN_4a0bcc84(local_5c);
    if (iVar9 != 0) {
      iVar7 = 0;
      if (0 < local_54) {
        do {
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_54);
        if (iVar9 == 0) goto LAB_4a0b10a0;
      }
      FUN_4a14f21c();
    }
    goto LAB_4a0b10a0;
  case 3:
    FUN_4a16be24(local_5c);
    iVar11 = iVar9 * iVar7 + 1;
    iVar8 = 0;
    iVar7 = 1;
    if (1 < iVar11) {
      do {
        uVar15 = FUN_4a0bf62c(local_30);
        iVar7 = iVar7 + 1;
        if (local_50 == (int *)0x0) {
          iVar13 = 0;
        }
        else {
          iVar13 = local_50[2];
        }
        *(uint *)(iVar13 + iVar8 * 4) =
             uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
        iVar8 = iVar8 + 1;
      } while (iVar7 < iVar11);
    }
    puVar12 = (undefined4 *)FUN_4a0c6bc0(local_48);
    *puVar12 = puVar3;
    puVar12[2] = local_54;
    puVar12[3] = local_50;
    if (local_50 != (int *)0x0) {
      (**(code **)(*local_50 + 0xc))();
    }
    *puVar12 = PTR_PTR_4a0b10c4;
    FUN_4a0ad1b4(local_34,0,iVar9,puVar12);
    FUN_4a16bef4(local_48);
    FUN_4a16bef4(local_5c);
    break;
  case 4:
    FUN_4a16b934(local_5c);
    iVar11 = iVar9 * iVar7 + 1;
    iVar8 = 0;
    iVar7 = 1;
    if (1 < iVar11) {
      do {
        uVar15 = FUN_4a0bf62c(local_30);
        iVar7 = iVar7 + 1;
        if (local_50 == (int *)0x0) {
          iVar13 = 0;
        }
        else {
          iVar13 = local_50[2];
        }
        *(uint *)(iVar13 + iVar8 * 4) =
             uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
        iVar8 = iVar8 + 1;
      } while (iVar7 < iVar11);
    }
    puVar12 = (undefined4 *)FUN_4a0c6bc0(local_48);
    *puVar12 = puVar3;
    puVar12[2] = local_54;
    puVar12[3] = local_50;
    if (local_50 != (int *)0x0) {
      (**(code **)(*local_50 + 0xc))();
    }
    puVar2 = PTR_PTR_4a0b10c8;
    *puVar12 = PTR_PTR_4a0b10c8;
    FUN_4a0ad110(local_34,0,iVar9,puVar12);
    local_48[0] = puVar2;
    iVar9 = FUN_4a0bcc84(local_48);
    if (iVar9 != 0) {
      iVar7 = 0;
      if (0 < local_40) {
        do {
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_40);
        if (iVar9 == 0) goto LAB_4a0b1054;
      }
      FUN_4a14f21c();
    }
LAB_4a0b1054:
    FUN_4a0c6bf4(local_48);
    local_5c[0] = puVar2;
    iVar9 = FUN_4a0bcc84(local_5c);
    if (iVar9 != 0) {
      iVar7 = 0;
      if (0 < local_54) {
        do {
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_54);
        if (iVar9 == 0) goto LAB_4a0b10a0;
      }
      FUN_4a14f21c();
    }
LAB_4a0b10a0:
    FUN_4a0c6bf4(local_5c);
  }
  return local_34;
}



// Address: 4a0b10cc

void FUN_4a0b10cc(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iStack_18;
  int iStack_14;
  
  piVar3 = &iStack_18;
  piVar4 = &iStack_18;
  FUN_4a0a83b4();
  if (param_2 == 0) {
    return;
  }
  piVar2 = (int *)FUN_4a136768(param_1);
  puVar1 = PTR_DAT_4a0b117c;
  uVar5 = *(undefined4 *)PTR_DAT_4a0b117c;
  iStack_14 = FUN_4a0bc200(uVar5);
  iStack_18 = FUN_4a0bc1f8(uVar5);
  uVar5 = *(undefined4 *)puVar1;
  if (iStack_18 <= iStack_14) {
    piVar3 = &iStack_14;
  }
  iVar6 = *piVar3;
  iStack_14 = FUN_4a0bc200(uVar5);
  iStack_18 = FUN_4a0bc1f8(uVar5);
  if (iStack_14 <= iStack_18) {
    piVar4 = &iStack_14;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0b1178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x30))(piVar2,*piVar4,iVar6);
  return;
}



// Address: 4a0b1180

void FUN_4a0b1180(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)FUN_4a137518();
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)FUN_4a136768(param_1);
    (**(code **)(*piVar3 + 0x34))();
    (**(code **)(*piVar2 + 0xb8))(piVar2);
  }
  piVar2 = *(int **)(param_1 + 0xe8);
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  return;
}



// Address: 4a0b11e8

void FUN_4a0b11e8(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x34) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x34) = param_2;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  return;
}



// Address: 4a0b1208

void FUN_4a0b1208(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_4 + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_4 + 0xc) + 8);
  }
  if (param_3 != *(int *)(*(int *)(param_1 + 0x44) + param_2 * 4)) {
    *(int *)(*(int *)(param_1 + 0x44) + param_2 * 4) = param_3;
    *(undefined1 *)(param_1 + 0x74) = 0;
    *(undefined1 *)(param_1 + 0x75) = 0;
  }
  FUN_4a0c7348(uVar1,0,*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x2c) * param_2 * 4,0,
               *(int *)(param_1 + 0x2c));
  *(undefined1 *)(param_1 + 0x75) = 0;
  return;
}



// Address: 4a0b1268

void FUN_4a0b1268(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x38) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x38) = param_2;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  return;
}



// Address: 4a0b1288

void FUN_4a0b1288(int param_1,int param_2,int param_3)

{
  if (*(int *)(param_1 + 0x3c) != param_2) {
    *(int *)(param_1 + 0x3c) = param_2;
    *(undefined1 *)(param_1 + 0x74) = 0;
    *(undefined1 *)(param_1 + 0x75) = 0;
  }
  if (*(int *)(param_1 + 0x40) != param_3) {
    *(int *)(param_1 + 0x40) = param_3;
    *(undefined1 *)(param_1 + 0x74) = 0;
    *(undefined1 *)(param_1 + 0x75) = 0;
  }
  return;
}



// Address: 4a0b12b8

void FUN_4a0b12b8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0x28) = param_2;
  *(int *)(param_1 + 0x2c) = param_3;
  if (*(int *)(param_1 + 0x44) != 0) {
    thunk_FUN_4a161530();
  }
  uVar1 = thunk_FUN_4a161570(param_2 << 2);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  if (*(int *)(param_1 + 0x48) != 0) {
    thunk_FUN_4a161530();
  }
  uVar1 = thunk_FUN_4a161570(param_2 * param_3 * 4);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  return;
}



// Address: 4a0b1318

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0b1318(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,uint param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((int)param_6 < 1) {
    return;
  }
  puVar3 = param_3 + -1;
  puVar4 = param_4 + -1;
  puVar5 = param_5 + -1;
  if ((param_6 & 1) != 0) {
    uVar1 = FUN_4a17211c(param_2,*param_4);
    uVar2 = FUN_4a17211c(param_1,*param_3);
    uVar1 = FUN_4a171a94(uVar2,uVar1);
    *param_5 = uVar1;
    puVar3 = param_3;
    puVar4 = param_4;
    puVar5 = param_5;
  }
  iVar6 = (int)param_6 >> 1;
  if (iVar6 != 0) {
    do {
      uVar1 = FUN_4a17211c(param_2,puVar4[1]);
      uVar2 = FUN_4a17211c(param_1,puVar3[1]);
      uVar1 = FUN_4a171a94(uVar2,uVar1);
      puVar5[1] = uVar1;
      puVar4 = puVar4 + 2;
      uVar1 = FUN_4a17211c(param_2,*puVar4);
      puVar3 = puVar3 + 2;
      uVar2 = FUN_4a17211c(param_1,*puVar3);
      uVar1 = FUN_4a171a94(uVar2,uVar1);
      iVar6 = iVar6 + -1;
      puVar5 = puVar5 + 2;
      *puVar5 = uVar1;
    } while (iVar6 != 0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0b137c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a0b13e0

void FUN_4a0b13e0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  return;
}



// Address: 4a0b13f4

void FUN_4a0b13f4(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 uVar14;
  int aiStack_70 [3];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_5c [12];
  int iStack_50;
  undefined1 auStack_48 [12];
  int iStack_3c;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  FUN_4a0b1888();
  if (*(char *)(param_1 + 0x75) == '\0') {
    iStack_28 = *(int *)(param_1 + 0x28);
    iVar13 = *(int *)(param_1 + 0x2c);
    if (*(int *)(param_1 + 100) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 100) + 8);
    }
    if (iVar3 == 0) {
      iVar3 = FUN_4a16b934(aiStack_70,iVar13 * iStack_28 * 2);
      uVar14 = *(undefined4 *)(iVar3 + 8);
      piVar12 = *(int **)(iVar3 + 0xc);
      if (piVar12 != (int *)0x0) {
        (**(code **)(*piVar12 + 0xc))(piVar12);
      }
      (**(code **)(*(int *)(param_1 + 0x58) + 0x1c))((int *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x60) = uVar14;
      *(int **)(param_1 + 100) = piVar12;
      FUN_4a16ba04(aiStack_70);
    }
    iStack_2c = *(int *)(param_1 + 0x3c);
    iStack_30 = *(int *)(param_1 + 0x40);
    iStack_34 = *(int *)(param_1 + 0x38);
    piVar12 = (int *)FUN_4a0c6bc0(auStack_48);
    puVar1 = PTR_PTR_4a0b1880;
    piVar12[2] = 0;
    puVar2 = PTR_PTR_4a0b1884;
    piVar12[3] = 0;
    *piVar12 = (int)puVar1;
    if (0 < iVar13) {
      iVar3 = FUN_4a15e080(iVar13 << 2);
      if (iVar3 == 0) {
        iVar3 = FUN_4a1669a8();
      }
      iVar8 = 0;
      do {
        uStack_60 = 0;
        *(undefined4 *)(iVar3 + iVar8 * 4) = 0;
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar13);
      thunk_FUN_4a161570(0x18);
      puVar4 = (undefined4 *)FUN_4a0c0628();
      puVar4[3] = 4;
      puVar4[4] = iVar13;
      puVar4[2] = iVar3;
      *puVar4 = puVar2;
      *(undefined1 *)(puVar4 + 5) = 1;
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)(puVar2 + 0xc))(puVar4);
      }
      (**(code **)(*piVar12 + 0x1c))(piVar12);
      piVar12[2] = iVar13;
      piVar12[3] = (int)puVar4;
    }
    piVar12 = (int *)FUN_4a0c6bc0(auStack_5c);
    piVar12[2] = 0;
    piVar12[3] = 0;
    *piVar12 = (int)puVar1;
    if (0 < iVar13) {
      iVar3 = FUN_4a15e080(iVar13 << 2);
      if (iVar3 == 0) {
        iVar3 = FUN_4a1669a8();
      }
      iVar8 = 0;
      do {
        uStack_60 = 0;
        *(undefined4 *)(iVar3 + iVar8 * 4) = 0;
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar13);
      thunk_FUN_4a161570(0x18);
      puVar4 = (undefined4 *)FUN_4a0c0628();
      puVar4[3] = 4;
      puVar4[4] = iVar13;
      puVar4[2] = iVar3;
      *puVar4 = puVar2;
      *(undefined1 *)(puVar4 + 5) = 1;
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)(puVar2 + 0xc))(puVar4);
      }
      (**(code **)(*piVar12 + 0x1c))(piVar12);
      piVar12[2] = iVar13;
      piVar12[3] = (int)puVar4;
    }
    if ((iStack_2c <= iStack_30) && (iVar3 = 0, 0 < iStack_28)) {
      do {
        uStack_60 = 0;
        uStack_64 = 0;
        iVar8 = iVar3;
        iVar9 = iVar3;
        if ((iStack_2c <= iVar3) && (iVar3 <= iStack_30)) {
          if (iVar3 == iStack_2c) {
            iVar8 = iStack_2c;
            if (iStack_34 == 0xc1) {
              iVar8 = iStack_30;
            }
          }
          else {
            iVar8 = iVar3 + -1;
          }
          if (iVar3 == iStack_30) {
            iVar9 = iStack_30;
            if (iStack_34 == 0xc1) {
              iVar9 = iStack_2c;
            }
          }
          else {
            iVar9 = iVar3 + 1;
          }
          iVar11 = iStack_2c;
          if (iVar3 == iStack_2c) {
            iVar11 = iStack_34;
          }
          iVar10 = iStack_30;
          if (iVar3 == iStack_30) {
            iVar10 = iStack_34;
          }
          if ((iVar3 != iStack_2c || iVar11 != 0xc0) && (iVar3 != iStack_30 || iVar10 != 0xc0)) {
            iVar5 = *(int *)(*(int *)(param_1 + 0x54) + iVar3 * 4);
            iVar6 = *(int *)(*(int *)(param_1 + 0x54) + iVar8 * 4);
            iVar10 = FUN_4a171a94(iVar5,iVar6);
            iVar11 = iVar5;
            if (0 < iVar5) {
              iVar11 = iVar10;
            }
            if (0 < iVar11) {
              uVar14 = FUN_4a17295c(iVar5,1);
              uStack_60 = FUN_4a171bb8(uVar14,iVar10);
            }
            iVar11 = iVar6;
            if (0 < iVar6) {
              iVar11 = iVar10;
            }
            if (0 < iVar11) {
              uVar14 = FUN_4a17295c(iVar6,1);
              uStack_64 = FUN_4a171bb8(uVar14,iVar10);
            }
          }
        }
        aiStack_70[0] = *(int *)(param_1 + 0x2c);
        uVar14 = 0;
        if (iStack_3c != 0) {
          uVar14 = *(undefined4 *)(iStack_3c + 8);
        }
        FUN_4a0c7348(*(int *)(param_1 + 0x48) + aiStack_70[0] * iVar8 * 4,0,uVar14,0);
        aiStack_70[0] = *(int *)(param_1 + 0x2c);
        FUN_4a0c7348(*(int *)(param_1 + 0x48) + aiStack_70[0] * iVar9 * 4,0);
        iVar9 = *(int *)(param_1 + 0x2c);
        iVar8 = *(int *)(param_1 + 100);
        iVar11 = 0;
        if (iVar8 != 0) {
          iVar10 = *(int *)(iVar8 + 8);
        }
        else {
          iVar10 = 0;
        }
        if (iVar8 != 0) {
          iVar8 = *(int *)(iVar8 + 8);
        }
        else {
          iVar8 = 0;
        }
        if (0 < iVar13) {
          do {
            if (iStack_3c == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)(iStack_3c + 8);
            }
            if (iStack_50 == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(iStack_50 + 8);
            }
            uVar14 = FUN_4a1725c0(*(undefined4 *)(iVar6 + iVar11 * 4),
                                  *(undefined4 *)(iVar5 + iVar11 * 4));
            uVar14 = FUN_4a17295c(uVar14,0xffffffff);
            uVar7 = FUN_4a17211c(uVar14,uStack_60);
            *(undefined4 *)(iVar10 + iVar9 * iVar3 * 2 * 4 + iVar11 * 4) = uVar7;
            uVar14 = FUN_4a17211c(uVar14,uStack_64);
            *(undefined4 *)(iVar8 + (iVar3 * 2 + 1) * iVar9 * 4 + iVar11 * 4) = uVar14;
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar13);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iStack_28);
    }
    *(undefined1 *)(param_1 + 0x75) = 1;
    FUN_4a16ba04(auStack_5c);
    FUN_4a16ba04(auStack_48);
    return;
  }
  return;
}



// Address: 4a0b1888

void FUN_4a0b1888(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  
  if (*(char *)(param_1 + 0x74) != '\0') {
    return;
  }
  iVar7 = *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x54) == 0) {
    uVar9 = thunk_FUN_4a161570(iVar7 << 2);
    param_2 = (int)((ulonglong)uVar9 >> 0x20);
    *(int *)(param_1 + 0x54) = (int)uVar9;
  }
  iVar6 = *(int *)(param_1 + 0x3c);
  iVar8 = *(int *)(param_1 + 0x40);
  if (iVar6 < iVar8) {
    iVar5 = **(int **)(param_1 + 0x44);
    iVar4 = 0;
    if (0 < iVar7) {
      do {
        iVar1 = 0;
        if (iVar6 <= iVar4) {
          if (iVar4 < iVar8) {
            iVar3 = *(int *)(*(int *)(param_1 + 0x44) + (iVar4 + 1) * 4);
            iVar1 = iVar3 - iVar5;
            iVar5 = iVar3;
          }
          else {
            if (iVar4 == iVar8) {
              param_2 = *(int *)(param_1 + 0x38);
            }
            if (iVar4 == iVar8 && param_2 == 0xc1) {
              iVar1 = (*(int *)(param_1 + 0x34) - iVar5) +
                      *(int *)(*(int *)(param_1 + 0x44) + iVar6 * 4);
            }
          }
        }
        uVar2 = FUN_4a171fac(iVar1);
        param_2 = *(int *)(param_1 + 0x54);
        *(undefined4 *)(param_2 + iVar4 * 4) = uVar2;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar7);
    }
  }
  else if (iVar6 == iVar8) {
    if (*(int *)(param_1 + 0x38) == 0xc1) {
      uVar2 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x34));
      *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar6 * 4) = uVar2;
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar6 * 4) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x6c) =
       *(undefined4 *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x3c) * 4);
  *(undefined4 *)(param_1 + 0x70) =
       *(undefined4 *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x40) * 4);
  *(undefined1 *)(param_1 + 0x74) = 1;
  return;
}



// Address: 4a0b19a0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0b19a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = FUN_4a17211c(param_1,param_1);
  uVar2 = FUN_4a17211c(param_1,uVar1);
  uVar3 = FUN_4a17211c(uVar1,0x40400000);
  uVar4 = FUN_4a17295c(uVar2,1);
  uVar3 = FUN_4a1725c0(uVar4,uVar3);
  uVar3 = FUN_4a171a94(uVar3,0x3f800000);
  uVar4 = FUN_4a1725c0(0x3f800000,uVar3);
  uVar2 = FUN_4a1725c0(uVar2,uVar1);
  uVar1 = FUN_4a1725c0(uVar2,uVar1);
  uVar1 = FUN_4a171a94(uVar1,param_1);
  if (0 < param_7) {
    do {
      uVar5 = FUN_4a17211c(*param_5,uVar2);
      uVar6 = FUN_4a17211c(*param_3,uVar4);
      uVar7 = FUN_4a17211c(*param_4,uVar1);
      uVar8 = FUN_4a17211c(*param_2,uVar3);
      uVar7 = FUN_4a171a94(uVar8,uVar7);
      uVar6 = FUN_4a171a94(uVar7,uVar6);
      param_2 = param_2 + 1;
      uVar5 = FUN_4a171a94(uVar6,uVar5);
      param_7 = param_7 + -1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
      param_5 = param_5 + 1;
      *param_6 = uVar5;
      param_6 = param_6 + 1;
    } while (param_7 != 0);
    return;
  }
  return;
}



// Address: 4a0b1ee4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0b1ee4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  bool bVar17;
  undefined1 uVar18;
  bool bVar19;
  
  uVar12 = 0;
  if (*(int *)(param_4 + 0xc) != 0) {
    uVar12 = *(undefined4 *)(*(int *)(param_4 + 0xc) + 8);
  }
  iVar2 = FUN_4a171e1c(param_2);
  iVar13 = *(int *)(param_1 + 0x38);
  if (iVar13 == 0xc0) {
    if (iVar2 < *(int *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x3c) * 4)) {
      FUN_4a0c7348(*(int *)(param_1 + 0x48) +
                   *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x3c) * 4,0,uVar12);
      return;
    }
    if (*(int *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x40) * 4) <= iVar2) {
      puVar3 = (undefined4 *)
               (*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x40) * 4);
      goto LAB_4a0b1c9c;
    }
  }
  else if ((iVar13 == 0xc1) && (iVar14 = *(int *)(param_1 + 0x34), iVar14 <= iVar2)) {
    iVar2 = FUN_4a0015f0(iVar2,iVar14);
    uVar6 = FUN_4a171fac(iVar14 * iVar2);
    param_2 = FUN_4a1724e0(uVar6,param_2);
    iVar2 = FUN_4a171e1c();
  }
  FUN_4a0b1888(param_1);
  iVar14 = *(int *)(param_1 + 0x3c);
  iVar16 = *(int *)(param_1 + 0x40);
  if (iVar14 <= iVar16) {
    iVar4 = iVar16;
    if ((*(int *)(param_1 + 0x6c) <= iVar2) && (iVar2 < *(int *)(param_1 + 0x70))) {
      iVar10 = iVar16 - iVar14;
      iVar1 = iVar14;
      while (5 < iVar10) {
        iVar11 = iVar4 + iVar1 >> 1;
        if (iVar2 < *(int *)(*(int *)(param_1 + 0x44) + iVar11 * 4)) {
          iVar4 = iVar11;
          iVar11 = iVar1;
        }
        iVar1 = iVar11;
        iVar10 = iVar4 - iVar11;
      }
      if (iVar1 < iVar4) {
        do {
          iVar11 = *(int *)(*(int *)(param_1 + 0x44) + iVar4 * 4);
          bVar19 = SBORROW4(iVar11,iVar2);
          iVar10 = iVar11 - iVar2;
          bVar17 = iVar11 == iVar2;
          if (iVar2 < iVar11) {
            iVar4 = iVar4 + -1;
            bVar19 = SBORROW4(iVar4,iVar1);
            iVar10 = iVar4 - iVar1;
            bVar17 = iVar4 == iVar1;
          }
        } while (!bVar17 && iVar10 < 0 == bVar19);
      }
      if (iVar4 == iVar16) {
        if (iVar13 != 0xc1) {
          iVar14 = iVar16;
        }
      }
      else {
        iVar14 = iVar4 + 1;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar4;
    *(int *)(param_1 + 0x50) = iVar14;
  }
  iVar2 = *(int *)(param_1 + 0x4c);
  iVar13 = *(int *)(param_1 + 0x30);
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x2c) * iVar2 * 4);
  if (iVar13 != 0xb4) {
    puVar15 = (undefined4 *)
              (*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x50) * 4);
    uVar12 = FUN_4a171fac(*(undefined4 *)(*(int *)(param_1 + 0x44) + iVar2 * 4));
    uVar5 = FUN_4a1724e0(uVar12,param_2);
    uVar18 = 0x7fffffff < uVar5;
    if (0x80000000 < uVar5) {
      uVar12 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x34));
      uVar5 = FUN_4a171a94(uVar12,uVar5);
    }
    uVar12 = *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar2 * 4);
    FUN_4a1720a0(uVar5,uVar12);
    if ((bool)uVar18) {
      uVar5 = 0x3f800000;
    }
    else {
      uVar5 = FUN_4a171bb8(uVar5,uVar12);
    }
    if (iVar13 != 0xb0) {
      if (iVar13 == 0xb1) {
        uVar12 = FUN_4a17211c(puVar3[3],puVar15[3]);
        uVar6 = FUN_4a17211c(puVar3[2],puVar15[2]);
        uVar7 = FUN_4a17211c(puVar3[1],puVar15[1]);
        uVar8 = FUN_4a17211c(*puVar3,*puVar15);
        uVar7 = FUN_4a171a94(uVar8,uVar7);
        uVar6 = FUN_4a171a94(uVar7,uVar6);
        uVar9 = FUN_4a171a94(uVar6,uVar12);
        if (DAT_4a0b1ee0 < (int)uVar9) {
          uVar12 = FUN_4a1724e0(uVar5,0x3f800000);
        }
        else {
          uVar12 = FUN_4a1724e0(uVar5,0x3f800000);
          if (0x80000000 < uVar9) {
            uVar5 = uVar5 ^ 0x80000000;
          }
        }
        FUN_4a0b1318(uVar12,uVar5,puVar3,puVar15);
        return;
      }
      iVar14 = 0;
      if (iVar13 == 0xb2) {
        FUN_4a0b13f4(param_1);
        if (*(int *)(param_1 + 100) == 0) {
          iVar14 = 0;
        }
        else {
          iVar14 = *(int *)(*(int *)(param_1 + 100) + 8);
        }
        iVar14 = iVar14 + *(int *)(param_1 + 0x2c) * iVar2 * 2 * 4;
      }
      else {
        if (iVar13 != 0xb3) {
          return;
        }
        FUN_4a0b13f4(param_1);
        if (*(int *)(param_1 + 100) != 0) {
          iVar14 = *(int *)(*(int *)(param_1 + 100) + 8);
        }
        iVar14 = iVar14 + *(int *)(param_1 + 0x2c) * iVar2 * 2 * 4;
      }
      FUN_4a0b19a0(uVar5,puVar3,puVar15,iVar14);
      return;
    }
    uVar12 = FUN_4a1724e0(uVar5,0x3f800000);
    FUN_4a0b1318(uVar12,uVar5,puVar3,puVar15);
    return;
  }
LAB_4a0b1c9c:
  FUN_4a0c7348(puVar3,0,uVar12);
  return;
}



// Address: 4a0b1ef8

void FUN_4a0b1ef8(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_4a0b7654();
  *puVar2 = PTR_PTR_4a0b1f74;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 0x16);
  puVar1 = PTR_PTR_4a0b1f78;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = puVar1;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  *(undefined1 *)((int)puVar2 + 0x1d) = 0;
  return;
}



// Address: 4a0b1fd4

void FUN_4a0b1fd4(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  *param_1 = PTR_PTR_4a0b201c;
  if (param_1[0x11] != 0) {
    thunk_FUN_4a161530();
  }
  if (param_1[0x12] != 0) {
    thunk_FUN_4a161530();
  }
  if (param_1[0x15] != 0) {
    thunk_FUN_4a161530();
  }
  iVar2 = FUN_4a16ba04(param_1 + 0x16);
  *(undefined **)(iVar2 + -0x58) = PTR_PTR_4a0b77cc;
  piVar6 = *(int **)(iVar2 + -0x50);
  if (piVar6 != (int *)0x0) {
    *(undefined4 *)(iVar2 + -0x50) = 0;
    iVar3 = (**(code **)(*piVar6 + 8))(piVar6);
    if (iVar3 != 0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
  }
  puVar4 = PTR_PTR_4a0b77d0;
  *(undefined **)(iVar2 + -0x44) = PTR_PTR_4a0b77d0;
  piVar6 = *(int **)(iVar2 + -0x38);
  iVar3 = *(int *)(iVar2 + -0x3c);
  if (piVar6 != (int *)0x0) {
    iVar7 = piVar6[2];
    puVar4 = (undefined *)(uint)*(byte *)(piVar6 + 5);
  }
  else {
    iVar7 = 0;
  }
  *(undefined4 *)(iVar2 + -0x38) = 0;
  *(undefined4 *)(iVar2 + -0x3c) = 0;
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
  iVar2 = FUN_4a0c6bf4(iVar2 + -0x44);
  *(undefined **)(iVar2 + -0x14) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar2 + -0x10) = 0xffffffff;
  return;
}



// Address: 4a0b2074

void FUN_4a0b2074(int param_1)

{
  int aiStack_8 [2];
  
  if (param_1 == 0) {
    return;
  }
  aiStack_8[0] = param_1;
  (**(code **)(**(int **)(PTR_DAT_4a0bfd7c + 4) + 0x1c))
            (*(int **)(PTR_DAT_4a0bfd7c + 4),1,aiStack_8);
  return;
}



// Address: 4a0b2080

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0b2080(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  code *UNRECOVERED_JUMPTABLE_00;
  uint local_58 [16];
  
  FUN_4a0aeacc();
  iVar1 = FUN_4a0bf53c(param_2);
  if (iVar1 != 0) {
    uVar2 = FUN_4a0bf62c(param_2);
    uVar3 = FUN_4a0bf62c(param_2);
    uVar4 = FUN_4a0bf62c(param_2);
    FUN_4a0af1d4(param_1,uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                         uVar2 << 0x18,
                 uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18,
                 uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18);
    uVar2 = FUN_4a0bf62c(param_2);
    uVar3 = FUN_4a0bf62c(param_2);
    uVar4 = FUN_4a0bf62c(param_2);
    FUN_4a0af650(param_1,uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                         uVar2 << 0x18,
                 uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18,
                 uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18);
    uVar2 = FUN_4a0bf62c(param_2);
    uVar3 = FUN_4a0bf62c(param_2);
    uVar4 = FUN_4a0bf62c(param_2);
    uVar5 = FUN_4a0bf62c(param_2);
    local_58[0] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    FUN_4a0af110(param_1,uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                         uVar2 << 0x18,
                 uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18,
                 uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18);
  }
  iVar1 = FUN_4a0bf53c(param_2);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = 0;
  do {
    uVar2 = FUN_4a0bf62c(param_2);
    local_58[iVar1] =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  thunk_FUN_4a161570(0x48);
  piVar6 = (int *)FUN_4a0b8a1c();
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))(piVar6);
  }
  piVar6[2] = local_58[0];
  piVar6[3] = local_58[1];
  piVar6[4] = local_58[2];
  piVar6[5] = local_58[3];
  piVar6[6] = local_58[4];
  piVar6[7] = local_58[5];
  piVar6[8] = local_58[6];
  piVar6[9] = local_58[7];
  piVar6[10] = local_58[8];
  piVar6[0xb] = local_58[9];
  piVar6[0xc] = local_58[10];
  piVar6[0xd] = local_58[0xb];
  piVar6[0xe] = local_58[0xc];
  piVar6[0xf] = local_58[0xd];
  piVar6[0x10] = local_58[0xe];
  piVar6[0x11] = local_58[0xf];
  FUN_4a0af058(param_1,piVar6);
  if (piVar6 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar6 + 8))(piVar6);
    if (iVar1 != 0) {
      (**(code **)(*piVar6 + 4))(piVar6);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a0b22ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0b22c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



// Address: 4a0b2310

void FUN_4a0b2310(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  if (*(int *)PTR_DAT_4a0b2368 == 0 && *(int *)PTR_DAT_4a0b236c == 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x4c))
              (*(int **)(param_1 + 8),param_2,*(int *)(param_1 + 0x188) - (param_3 + param_5),
               param_4);
    return;
  }
  return;
}



// Address: 4a0b2380

void FUN_4a0b2380(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar3 = *(int *)(param_1 + 0x10) * 0x48 + *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10) * 0x48;
  uVar2 = *(undefined4 *)(iVar1 + 0xc);
  uVar4 = *(undefined4 *)(iVar1 + 0x10);
  uVar6 = *(undefined4 *)(iVar1 + 0x14);
  uVar7 = *(undefined4 *)(iVar1 + 0x18);
  *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(iVar3 + 0x54) = uVar2;
  *(undefined4 *)(iVar3 + 0x58) = uVar4;
  *(undefined4 *)(iVar3 + 0x5c) = uVar6;
  *(undefined4 *)(iVar3 + 0x60) = uVar7;
  uVar2 = *(undefined4 *)(iVar1 + 0x20);
  uVar4 = *(undefined4 *)(iVar1 + 0x24);
  uVar6 = *(undefined4 *)(iVar1 + 0x28);
  uVar7 = *(undefined4 *)(iVar1 + 0x2c);
  *(undefined4 *)(iVar3 + 100) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(iVar3 + 0x68) = uVar2;
  *(undefined4 *)(iVar3 + 0x6c) = uVar4;
  *(undefined4 *)(iVar3 + 0x70) = uVar6;
  *(undefined4 *)(iVar3 + 0x74) = uVar7;
  uVar2 = *(undefined4 *)(iVar1 + 0x34);
  uVar4 = *(undefined4 *)(iVar1 + 0x38);
  uVar6 = *(undefined4 *)(iVar1 + 0x3c);
  uVar7 = *(undefined4 *)(iVar1 + 0x40);
  uVar8 = *(undefined4 *)(iVar1 + 0x44);
  *(undefined4 *)(iVar3 + 0x78) = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(iVar3 + 0x7c) = uVar2;
  *(undefined4 *)(iVar3 + 0x80) = uVar4;
  *(undefined4 *)(iVar3 + 0x84) = uVar6;
  *(undefined4 *)(iVar3 + 0x88) = uVar7;
  *(undefined4 *)(iVar3 + 0x8c) = uVar8;
  iVar1 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar1;
  iVar1 = *(int *)(param_1 + 0x14) + iVar1 * 0x48;
  iVar3 = param_2 + 8;
  puVar5 = (undefined4 *)(iVar1 + 8);
  uVar2 = FUN_4a165730(puVar5,iVar3);
  uVar4 = FUN_4a165730(puVar5,param_2 + 0xc);
  uVar6 = FUN_4a165730(puVar5,param_2 + 0x10);
  uVar7 = FUN_4a165730(puVar5,param_2 + 0x14);
  *puVar5 = uVar2;
  *(undefined4 *)(iVar1 + 0xc) = uVar4;
  *(undefined4 *)(iVar1 + 0x10) = uVar6;
  puVar5 = (undefined4 *)(iVar1 + 0x18);
  *(undefined4 *)(iVar1 + 0x14) = uVar7;
  uVar2 = FUN_4a165730(puVar5,iVar3);
  uVar4 = FUN_4a165730(puVar5,param_2 + 0xc);
  uVar6 = FUN_4a165730(puVar5,param_2 + 0x10);
  uVar7 = FUN_4a165730(puVar5,param_2 + 0x14);
  *puVar5 = uVar2;
  *(undefined4 *)(iVar1 + 0x1c) = uVar4;
  *(undefined4 *)(iVar1 + 0x20) = uVar6;
  puVar5 = (undefined4 *)(iVar1 + 0x28);
  *(undefined4 *)(iVar1 + 0x24) = uVar7;
  uVar2 = FUN_4a165730(puVar5,iVar3);
  uVar4 = FUN_4a165730(puVar5,param_2 + 0xc);
  uVar6 = FUN_4a165730(puVar5,param_2 + 0x10);
  uVar7 = FUN_4a165730(puVar5,param_2 + 0x14);
  *puVar5 = uVar2;
  *(undefined4 *)(iVar1 + 0x2c) = uVar4;
  *(undefined4 *)(iVar1 + 0x30) = uVar6;
  puVar5 = (undefined4 *)(iVar1 + 0x38);
  *(undefined4 *)(iVar1 + 0x34) = uVar7;
  uVar2 = FUN_4a165730(puVar5,iVar3);
  uVar4 = FUN_4a165730(puVar5,param_2 + 0xc);
  uVar6 = FUN_4a165730(puVar5,param_2 + 0x10);
  uVar7 = FUN_4a165730(puVar5,param_2 + 0x14);
  *(undefined4 *)(iVar1 + 0x44) = uVar7;
  *(undefined4 *)(iVar1 + 0x40) = uVar6;
  *(undefined4 *)(iVar1 + 0x3c) = uVar4;
  *puVar5 = uVar2;
  return;
}



// Address: 4a0b23e8

void FUN_4a0b23e8(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_4c = *(undefined4 *)(param_2 + 8);
  local_3c = *(undefined4 *)(param_2 + 0xc);
  local_2c = *(undefined4 *)(param_2 + 0x10);
  local_1c = *(undefined4 *)(param_2 + 0x14);
  local_48 = *(undefined4 *)(param_2 + 0x18);
  uStack_38 = *(undefined4 *)(param_2 + 0x1c);
  local_28 = *(undefined4 *)(param_2 + 0x20);
  local_18 = *(undefined4 *)(param_2 + 0x24);
  local_44 = *(undefined4 *)(param_2 + 0x28);
  local_34 = *(undefined4 *)(param_2 + 0x2c);
  uStack_24 = *(undefined4 *)(param_2 + 0x30);
  local_14 = *(undefined4 *)(param_2 + 0x34);
  local_40 = *(undefined4 *)(param_2 + 0x38);
  local_30 = *(undefined4 *)(param_2 + 0x3c);
  local_20 = *(undefined4 *)(param_2 + 0x40);
  uStack_10 = *(undefined4 *)(param_2 + 0x44);
  (**(code **)(**(int **)(param_1 + 8) + 0xac))(*(int **)(param_1 + 8),0x1701);
  FUN_4a150544(&local_4c);
  *(undefined4 *)(param_1 + 0x10) = 0;
  iVar1 = *(int *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  uVar3 = *(undefined4 *)(param_3 + 0x10);
  uVar4 = *(undefined4 *)(param_3 + 0x14);
  uVar5 = *(undefined4 *)(param_3 + 0x18);
  uVar6 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  *(undefined4 *)(iVar1 + 0x10) = uVar3;
  *(undefined4 *)(iVar1 + 0x14) = uVar4;
  *(undefined4 *)(iVar1 + 0x18) = uVar5;
  *(undefined4 *)(iVar1 + 0x1c) = uVar6;
  uVar2 = *(undefined4 *)(param_3 + 0x24);
  uVar3 = *(undefined4 *)(param_3 + 0x28);
  uVar4 = *(undefined4 *)(param_3 + 0x2c);
  uVar5 = *(undefined4 *)(param_3 + 0x30);
  uVar6 = *(undefined4 *)(param_3 + 0x34);
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  *(undefined4 *)(iVar1 + 0x28) = uVar3;
  *(undefined4 *)(iVar1 + 0x2c) = uVar4;
  *(undefined4 *)(iVar1 + 0x30) = uVar5;
  *(undefined4 *)(iVar1 + 0x34) = uVar6;
  uVar2 = *(undefined4 *)(param_3 + 0x3c);
  uVar3 = *(undefined4 *)(param_3 + 0x40);
  uVar4 = *(undefined4 *)(param_3 + 0x44);
  *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(param_3 + 0x38);
  *(undefined4 *)(iVar1 + 0x3c) = uVar2;
  *(undefined4 *)(iVar1 + 0x40) = uVar3;
  *(undefined4 *)(iVar1 + 0x44) = uVar4;
  return;
}



// Address: 4a0b24dc

void FUN_4a0b24dc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x184) = param_2;
  *(undefined4 *)(param_1 + 0x188) = param_3;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a0) = 0xffffffff;
  if ((int)*(uint *)(param_1 + 0x18c) < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x18c) & 1;
  }
  if (uVar2 == 1) {
    **(undefined4 **)(param_1 + 0x1a4) = 0xffffffff;
  }
  if ((int)uVar2 < *(int *)(param_1 + 0x18c)) {
    do {
      iVar1 = uVar2 * 4;
      *(undefined4 *)(*(int *)(param_1 + 0x1a4) + uVar2 * 4) = 0xffffffff;
      uVar2 = uVar2 + 2;
      *(undefined4 *)(*(int *)(param_1 + 0x1a4) + iVar1 + 4) = 0xffffffff;
    } while ((int)uVar2 < *(int *)(param_1 + 0x18c));
  }
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  (**(code **)(**(int **)(param_1 + 8) + 0x28))(*(int **)(param_1 + 8),0xb71);
  (**(code **)(**(int **)(param_1 + 8) + 0x94))(*(int **)(param_1 + 8),1);
  (**(code **)(**(int **)(param_1 + 8) + 0x20))(*(int **)(param_1 + 8),0xb50);
  (**(code **)(**(int **)(param_1 + 8) + 0x20))(*(int **)(param_1 + 8),0xb60);
  (**(code **)(**(int **)(param_1 + 8) + 0x24))(*(int **)(param_1 + 8),0x8075);
  (**(code **)(**(int **)(param_1 + 8) + 0x24))(*(int **)(param_1 + 8),0x8076);
  (**(code **)(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),0x8074);
  (**(code **)(**(int **)(param_1 + 8) + 0xac))(*(int **)(param_1 + 8),0x1701);
  FUN_4a1504dc();
  return;
}



// Address: 4a0b2640

void FUN_4a0b2640(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 == 0) {
    thunk_FUN_4a14fe50(0,0,0,0x10000);
    if (*(int *)PTR_DAT_4a0b2714 == 0 && *(int *)PTR_DAT_4a0b2718 == 0) {
      uVar2 = 0x4000;
    }
  }
  else {
    iVar1 = FUN_4a136750(param_2);
    if (iVar1 != 0) {
      uVar2 = FUN_4a136760(param_2);
      thunk_FUN_4a14fe50((uint)((ulonglong)(uVar2 & 0xff0000) * (ulonglong)DAT_4a0b2710 >> 0x27),
                         (uint)((ulonglong)((uVar2 & 0xff00) << 8) * (ulonglong)DAT_4a0b2710 >> 0x27
                               ),(uint)((ulonglong)((uVar2 & 0xff) << 0x10) *
                                        (ulonglong)DAT_4a0b2710 >> 0x27),
                         (uint)((ulonglong)((uVar2 >> 0x18) << 0x10) * (ulonglong)DAT_4a0b2710 >>
                               0x27));
      uVar2 = 0x4000;
    }
    iVar1 = FUN_4a136758(param_2);
    if (iVar1 == 0) goto LAB_4a0b26c8;
  }
  uVar2 = uVar2 | 0x100;
LAB_4a0b26c8:
  if (uVar2 != 0) {
    FUN_4a154658(uVar2);
    return;
  }
  return;
}



// Address: 4a0b271c

void FUN_4a0b271c(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 local_2c;
  int iStack_28;
  
  iVar11 = *(int *)(param_1 + 0x194);
  iStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  if (*(int *)(param_1 + 400) != param_4) {
    FUN_4a139c90(param_1,param_4);
    *(int *)(param_1 + 400) = param_4;
  }
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  if (iVar11 != param_2) {
    FUN_4a13a580(param_1,param_2);
    *(int *)(param_1 + 0x194) = param_2;
  }
  iVar11 = *(int *)(param_1 + 0x18c);
  while (iVar10 = iVar11, iVar11 = iVar10 + -1, -1 < iVar11) {
    iVar3 = FUN_4a13916c(param_2,iVar11,&local_84);
    if (iVar3 != 0) {
      (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),iVar10 + 0x84bf);
      (**(code **)(**(int **)(param_1 + 8) + 0xac))(*(int **)(param_1 + 8),0x1702);
      uVar7 = uStack_78;
      uVar6 = uStack_7c;
      uVar5 = local_80;
      uVar9 = local_84;
      FUN_4a150738();
      FUN_4a150bec(uVar5,uVar6,uVar7);
      FUN_4a1507c0(uVar9,uVar9,uVar9);
    }
  }
  if (param_2 != 0) {
    if (*(char *)(param_1 + 0x1a8) == '\0') {
      FUN_4a1390fc(param_2,&local_84);
      FUN_4a0b7e44(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10) * 0x48,local_80,uStack_7c,
                   uStack_78);
      FUN_4a0b88fc(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10) * 0x48,local_84,local_84,
                   local_84);
    }
    else if (*(int *)(*(int *)(param_1 + 0x1b4) + 8) <= *(int *)(param_1 + 0x1b8)) {
      FUN_4a1390fc(param_2,&local_84);
    }
  }
  uVar9 = DAT_4a0b2aa8;
  uVar4 = *(uint *)(param_2 + 0x2c);
  uVar5 = FUN_4a171fac(uVar4 >> 0x18);
  uVar5 = FUN_4a17211c(uVar5,uVar9);
  uVar5 = FUN_4a17211c(uVar5,param_5);
  uVar6 = FUN_4a171fac(uVar4 & 0xff);
  uVar6 = FUN_4a17211c(uVar6,uVar9);
  uVar7 = FUN_4a171fac((uVar4 & 0xffff) >> 8);
  uVar7 = FUN_4a17211c(uVar7,uVar9);
  uVar8 = FUN_4a171fac((uVar4 & 0xffffff) >> 0x10);
  uVar9 = FUN_4a17211c(uVar8,uVar9);
  thunk_FUN_4a14febc(uVar9,uVar7,uVar6,uVar5);
  (**(code **)(**(int **)(param_1 + 8) + 0xac))(*(int **)(param_1 + 8),0x1700);
  puVar1 = PTR_DAT_4a0b2abc;
  iVar11 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10) * 0x48;
  local_74 = *(undefined4 *)(iVar11 + 8);
  local_70 = *(undefined4 *)(iVar11 + 0xc);
  local_6c = *(undefined4 *)(iVar11 + 0x10);
  local_68 = *(undefined4 *)(iVar11 + 0x14);
  local_64 = *(undefined4 *)(iVar11 + 0x18);
  uStack_60 = *(undefined4 *)(iVar11 + 0x1c);
  local_5c = *(undefined4 *)(iVar11 + 0x20);
  local_58 = *(undefined4 *)(iVar11 + 0x24);
  local_54 = *(undefined4 *)(iVar11 + 0x28);
  local_50 = *(undefined4 *)(iVar11 + 0x2c);
  uStack_4c = *(undefined4 *)(iVar11 + 0x30);
  local_48 = *(undefined4 *)(iVar11 + 0x34);
  local_44 = *(undefined4 *)(iVar11 + 0x38);
  local_40 = *(undefined4 *)(iVar11 + 0x3c);
  local_3c = *(undefined4 *)(iVar11 + 0x40);
  uStack_38 = *(undefined4 *)(iVar11 + 0x44);
  bVar12 = *(int *)PTR_DAT_4a0b2aac != 0;
  iVar11 = 0;
  if (bVar12) {
    iVar11 = *(int *)PTR_DAT_4a0b2ab0;
  }
  bVar13 = iVar11 != 0;
  if (bVar12 && bVar13) {
    iVar11 = *(int *)PTR_DAT_4a0b2ab4;
  }
  if ((bVar12 && bVar13) && iVar11 != 1) {
    if (*(int *)PTR_DAT_4a0b2ab8 != 0) {
      local_58 = FUN_4a1725c0(local_58,*(undefined4 *)PTR_DAT_4a0b2abc);
    }
    if (*(int *)PTR_DAT_4a0b2ac0 != 0) {
      local_58 = FUN_4a171a94(local_58,*(undefined4 *)puVar1);
    }
  }
  uVar2 = local_3c;
  uVar8 = local_40;
  uVar7 = local_44;
  uVar6 = local_50;
  uVar5 = local_54;
  uVar9 = local_64;
  local_64 = local_70;
  local_70 = uVar9;
  local_54 = local_6c;
  local_6c = uVar5;
  local_44 = local_68;
  local_68 = uVar7;
  local_50 = local_5c;
  local_5c = uVar6;
  local_40 = local_58;
  local_58 = uVar8;
  local_3c = local_48;
  local_48 = uVar2;
  FUN_4a150544(&local_74);
  FUN_4a13a400(param_1,local_2c);
  iVar11 = *(int *)(param_1 + 0x18c) + -1;
  if (iVar11 < 0) {
    return;
  }
  do {
    iVar10 = FUN_4a13916c(param_2,iVar11,0);
    if (iVar10 != 0) {
      (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),iVar11 + 0x84c0);
      (**(code **)(**(int **)(param_1 + 8) + 0xac))(*(int **)(param_1 + 8),0x1702);
      FUN_4a150724();
    }
    iVar11 = iVar11 + -1;
  } while (-1 < iVar11);
  return;
}



// Address: 4a0b2ac4

void FUN_4a0b2ac4(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                 int param_7,undefined4 param_8)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iVar11 = *(int *)(param_1 + 0x194);
  if (*(int *)(param_1 + 400) != param_7) {
    FUN_4a139c90(param_1,param_7);
    *(int *)(param_1 + 400) = param_7;
  }
  *(undefined1 *)(param_1 + 0x1a8) = 1;
  iVar3 = *(int *)(param_1 + 0x1ac);
  bVar12 = iVar3 == param_3;
  if (bVar12) {
    iVar3 = *(int *)(param_1 + 0x1b0);
  }
  bVar13 = bVar12 && iVar3 == param_4;
  if (bVar12 && iVar3 == param_4) {
    bVar13 = *(int *)(param_1 + 0x1b4) == param_5;
  }
  if (bVar13) {
    if (iVar11 == param_2) {
      *(int *)(param_1 + 0x194) = param_2;
      goto LAB_4a0b2b64;
    }
  }
  else {
    *(int *)(param_1 + 0x1ac) = param_3;
    *(int *)(param_1 + 0x1b0) = param_4;
    *(int *)(param_1 + 0x1b4) = param_5;
  }
  FUN_4a13a580(param_1,param_2);
  *(int *)(param_1 + 0x194) = param_2;
LAB_4a0b2b64:
  uVar10 = DAT_4a0b2e8c;
  iVar11 = *(int *)(param_1 + 0x18c);
  while (iVar3 = iVar11, iVar11 = iVar3 + -1, DAT_4a0b2e8c = uVar10, -1 < iVar11) {
    iVar4 = FUN_4a13916c(param_2,iVar11,&local_74);
    uVar10 = DAT_4a0b2e8c;
    if (iVar4 != 0) {
      (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),iVar3 + 0x84bf);
      (**(code **)(**(int **)(param_1 + 8) + 0xac))(*(int **)(param_1 + 8),0x1702);
      uVar8 = uStack_68;
      uVar7 = uStack_6c;
      uVar6 = local_70;
      uVar10 = local_74;
      FUN_4a150738();
      FUN_4a150bec(uVar6,uVar7,uVar8);
      FUN_4a1507c0(uVar10,uVar10,uVar10);
      uVar10 = DAT_4a0b2e8c;
    }
  }
  uVar5 = *(uint *)(param_2 + 0x2c);
  uVar6 = FUN_4a171fac(uVar5 >> 0x18);
  uVar6 = FUN_4a17211c(uVar6,uVar10);
  uVar6 = FUN_4a17211c(uVar6,param_8);
  uVar7 = FUN_4a171fac(uVar5 & 0xff);
  uVar7 = FUN_4a17211c(uVar7,uVar10);
  uVar8 = FUN_4a171fac((uVar5 & 0xffff) >> 8);
  uVar8 = FUN_4a17211c(uVar8,uVar10);
  uVar9 = FUN_4a171fac((uVar5 & 0xffffff) >> 0x10);
  uVar10 = FUN_4a17211c(uVar9,uVar10);
  thunk_FUN_4a14febc(uVar10,uVar8,uVar7,uVar6);
  if (param_2 != 0) {
    if (*(char *)(param_1 + 0x1a8) == '\0') {
      FUN_4a1390fc(param_2,&local_74);
      FUN_4a0b7e44(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10) * 0x48,local_70,uStack_6c,
                   uStack_68);
      FUN_4a0b88fc(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10) * 0x48,local_74,local_74,
                   local_74);
    }
    else if (*(int *)(*(int *)(param_1 + 0x1b4) + 8) <= *(int *)(param_1 + 0x1b8)) {
      FUN_4a1390fc(param_2,&local_74);
    }
  }
  (**(code **)(**(int **)(param_1 + 8) + 0xac))(*(int **)(param_1 + 8),0x1700);
  puVar1 = PTR_DAT_4a0b2ea0;
  iVar11 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10) * 0x48;
  local_64 = *(undefined4 *)(iVar11 + 8);
  local_60 = *(undefined4 *)(iVar11 + 0xc);
  local_5c = *(undefined4 *)(iVar11 + 0x10);
  local_58 = *(undefined4 *)(iVar11 + 0x14);
  local_54 = *(undefined4 *)(iVar11 + 0x18);
  uStack_50 = *(undefined4 *)(iVar11 + 0x1c);
  local_4c = *(undefined4 *)(iVar11 + 0x20);
  local_48 = *(undefined4 *)(iVar11 + 0x24);
  local_44 = *(undefined4 *)(iVar11 + 0x28);
  local_40 = *(undefined4 *)(iVar11 + 0x2c);
  uStack_3c = *(undefined4 *)(iVar11 + 0x30);
  local_38 = *(undefined4 *)(iVar11 + 0x34);
  local_34 = *(undefined4 *)(iVar11 + 0x38);
  local_30 = *(undefined4 *)(iVar11 + 0x3c);
  local_2c = *(undefined4 *)(iVar11 + 0x40);
  uStack_28 = *(undefined4 *)(iVar11 + 0x44);
  bVar12 = *(int *)PTR_DAT_4a0b2e90 != 0;
  iVar11 = 0;
  if (bVar12) {
    iVar11 = *(int *)PTR_DAT_4a0b2e94;
  }
  bVar13 = iVar11 != 0;
  if (bVar12 && bVar13) {
    iVar11 = *(int *)PTR_DAT_4a0b2e98;
  }
  if ((bVar12 && bVar13) && iVar11 != 1) {
    if (*(int *)PTR_DAT_4a0b2e9c != 0) {
      local_48 = FUN_4a1725c0(local_48,*(undefined4 *)PTR_DAT_4a0b2ea0);
    }
    if (*(int *)PTR_DAT_4a0b2ea4 != 0) {
      local_48 = FUN_4a171a94(local_48,*(undefined4 *)puVar1);
    }
  }
  uVar2 = local_2c;
  uVar9 = local_30;
  uVar8 = local_34;
  uVar7 = local_40;
  uVar6 = local_44;
  uVar10 = local_54;
  local_54 = local_60;
  local_60 = uVar10;
  local_44 = local_5c;
  local_5c = uVar6;
  local_34 = local_58;
  local_58 = uVar8;
  local_40 = local_4c;
  local_4c = uVar7;
  local_30 = local_48;
  local_48 = uVar9;
  local_2c = local_38;
  local_38 = uVar2;
  FUN_4a150544(&local_64);
  FUN_4a13a400(param_1,param_6);
  iVar11 = *(int *)(param_1 + 0x18c) + -1;
  if (iVar11 < 0) {
    return;
  }
  do {
    iVar3 = FUN_4a13916c(param_2,iVar11,0);
    if (iVar3 != 0) {
      (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),iVar11 + 0x84c0);
      (**(code **)(**(int **)(param_1 + 8) + 0xac))(*(int **)(param_1 + 8),0x1702);
      FUN_4a150724();
    }
    iVar11 = iVar11 + -1;
  } while (-1 < iVar11);
  return;
}




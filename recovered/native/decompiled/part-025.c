/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a155734

void FUN_4a155734(uint param_1)

{
  int iVar1;
  
  if (*PTR_DAT_4a1557b4 != '\0') {
    iVar1 = *(int *)PTR_DAT_4a1557bc;
    if (param_1 == DAT_4a1557b8) {
      if (*(char *)(iVar1 + 0x1feb) == '\x01') {
        return;
      }
      *(undefined1 *)(iVar1 + 0x1feb) = 1;
    }
    else if ((int)param_1 < (int)DAT_4a1557b8) {
      if (param_1 + DAT_4a1557c0 == 0) {
        if (*(char *)(iVar1 + 0x1fee) == '\x01') {
          return;
        }
        *(undefined1 *)(iVar1 + 0x1fee) = 1;
      }
      else if (param_1 + DAT_4a1557c0 == 1) {
        if (*(char *)(iVar1 + 0x1fec) == '\x01') {
          return;
        }
        *(undefined1 *)(iVar1 + 0x1fec) = 1;
      }
    }
    else if (param_1 - DAT_4a1557b8 == 2) {
      iVar1 = *(int *)(iVar1 + 0x1fc4) * 0xd8 + iVar1 + DAT_4a1557c8;
      if (*(char *)(iVar1 + 0x11) == '\x01') {
        return;
      }
      *(undefined1 *)(iVar1 + 0x11) = 1;
    }
    else if ((param_1 - DAT_4a1557b8) + DAT_4a1557c4 == 0) {
      if (*(char *)(iVar1 + 0x1fed) == '\x01') {
        return;
      }
      *(undefined1 *)(iVar1 + 0x1fed) = 1;
    }
  }
  host_glEnableClientState_thumb(param_1);
  return;
}



// Address: 4a1557cc

void FUN_4a1557cc(uint param_1)

{
  if (*PTR_DAT_4a1557f8 != '\0') {
    if (*(char *)(*(int *)PTR_DAT_4a1557fc + param_1 + 0x2244) == '\x01') {
      return;
    }
    *(undefined1 *)(*(int *)PTR_DAT_4a1557fc + param_1 + 0x2244) = 1;
  }
  host_glEnableVertexAttribArray_thumb(param_1);
  return;
}



// Address: 4a155800

void FUN_4a155800(uint param_1,float param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = PTR_DAT_4a155884;
  if (*PTR_DAT_4a15587c != '\0') {
    iVar2 = param_1 + DAT_4a155880;
    iVar4 = *(int *)PTR_DAT_4a155884;
    iVar3 = DAT_4a155888;
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        iVar3 = DAT_4a155888 + 8;
      }
      else {
        if (iVar2 != 2) {
          if (iVar2 == 3) {
            iVar3 = thunk_FUN_4a171e1c(param_2);
            if (iVar3 == *(int *)(iVar4 + 0x1f90)) {
              return;
            }
            *(int *)(iVar4 + 0x1f90) = iVar3;
          }
          goto LAB_4a15586c;
        }
        iVar3 = DAT_4a155888 + 0x10;
      }
    }
    iVar2 = FUN_4a09c88c(iVar4 + iVar3,param_2);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = *(int *)puVar1;
    *(undefined4 *)(iVar2 + iVar3) = 2;
    ((undefined4 *)(iVar2 + iVar3))[1] = param_2;
  }
LAB_4a15586c:
  host_glFogf_thumb(param_1,param_2);
  return;
}



// Address: 4a15588c

void FUN_4a15588c(uint param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*PTR_DAT_4a155920 != '\0') {
    uVar1 = thunk_FUN_4a1652fc();
    param_2 = (void *)0x2;
    iVar2 = thunk_FUN_4a171e1c(uRam00000002);
    if (iVar2 == *(int *)((uVar1 >> 0x1c) + 0x1f90)) {
      return;
    }
    *(int *)((uVar1 >> 0x1c) + 0x1f90) = iVar2;
  }
  host_glFogfv_thumb(param_1,param_2);
  return;
}



// Address: 4a155930

void FUN_4a155930(uint param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = PTR_DAT_4a1559a8;
  if (*PTR_DAT_4a1559a0 != '\0') {
    iVar3 = param_1 + DAT_4a1559a4;
    iVar2 = *(int *)PTR_DAT_4a1559a8;
    iVar4 = DAT_4a1559ac;
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        iVar4 = DAT_4a1559ac + 8;
      }
      else {
        if (iVar3 != 2) {
          if (iVar3 == 3) {
            if (*(int *)(iVar2 + 0x1f90) == param_2) {
              return;
            }
            *(int *)(iVar2 + 0x1f90) = param_2;
          }
          goto LAB_4a155990;
        }
        iVar4 = DAT_4a1559ac + 0x10;
      }
    }
    iVar2 = FUN_4a09c8a8(iVar2 + iVar4,param_2);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = *(int *)puVar1;
    *(undefined4 *)(iVar2 + iVar4) = 1;
    ((undefined4 *)(iVar2 + iVar4))[1] = param_2;
  }
LAB_4a155990:
  host_glFogx_thumb(param_1,param_2);
  return;
}



// Address: 4a1559b0

void FUN_4a1559b0(uint param_1,int *param_2,int param_3)

{
  if (*PTR_DAT_4a155a3c != '\0') {
    thunk_FUN_4a1652fc(*(undefined4 *)PTR_DAT_4a155a44,DAT_4a155a40,param_3,param_1 + DAT_4a155a40);
    if (*(int *)((param_3 >> 0x10) + 0x1f90) == *param_2) {
      return;
    }
    *(int *)((param_3 >> 0x10) + 0x1f90) = *param_2;
  }
  host_glFogxv_thumb(param_1,param_2);
  return;
}



// Address: 4a155a4c

void FUN_4a155a4c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_DAT_4a155a98;
  if (*(int *)(PTR_DAT_4a155a98 + 0x30) != 0) {
    uVar2 = FUN_4a165506(PTR_DAT_4a155aa0,*(undefined4 *)PTR_DAT_4a155a9c);
    FUN_4a0a4218(uVar2,param_2,param_3,param_4);
  }
  if (*(int *)(puVar1 + 0x20) != 0) {
    param_4 = *(int *)(*(int *)(PTR_DAT_4a155aa0 + 0x14) + param_4 * 8);
  }
  FUN_4a1652cc(param_1,param_2,param_3,param_4);
  return;
}



// Address: 4a155aa4

void FUN_4a155aa4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_1;
  uVar3 = param_4;
  if (*(int *)(PTR_DAT_4a155af0 + 0x30) != 0) {
    uVar1 = FUN_4a165506(PTR_DAT_4a155af8,*(undefined4 *)PTR_DAT_4a155af4);
    FUN_4a0a4218(uVar1,param_2,param_3,param_4);
  }
  FUN_4a00ae6c(param_4);
  uVar1 = FUN_4a00ac3c(param_4);
  FUN_4a1652cc(param_1,param_2,param_3,uVar1,param_5,uVar2,param_2,param_3,uVar3);
  return;
}



// Address: 4a155afc

void FUN_4a155afc(uint param_1)

{
  if (*PTR_DAT_4a155b24 != '\0') {
    if (*(uint *)(*(int *)PTR_DAT_4a155b28 + 0x216c) == param_1) {
      return;
    }
    *(uint *)(*(int *)PTR_DAT_4a155b28 + 0x216c) = param_1;
  }
  host_glFrontFace_thumb(param_1);
  return;
}



// Address: 4a155b2c

void FUN_4a155b2c(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6)

{
  host_glFrustumf_thumb(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// Address: 4a155b48

void FUN_4a155b48(int param_1,void *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_34;
  int local_30;
  undefined1 auStack_2c [16];
  int local_1c;
  void *local_18;
  
  local_1c = param_1;
  local_18 = param_2;
  if (*(int *)(PTR_DAT_4a155be4 + 0x20) == 0) {
    host_glGenBuffers_thumb(param_1,param_2);
  }
  else {
    iVar2 = *(int *)(PTR_DAT_4a155be4 + 0x2c);
    FUN_4a0978b4(auStack_2c);
    puVar1 = PTR_DAT_4a155be8;
    for (iVar7 = 0; iVar7 < local_1c; iVar7 = iVar7 + 1) {
      for (uVar6 = 1; uVar5 = 0xffffffff, uVar6 < *(uint *)(puVar1 + 4); uVar6 = uVar6 + 1) {
        if (*(int *)(*(int *)puVar1 + uVar6 * 8) == 0) {
          uVar3 = FUN_4a06950e(0);
          *(undefined4 *)(*(int *)puVar1 + uVar6 * 8) = uVar3;
          uVar5 = uVar6;
          break;
        }
      }
      iVar4 = uVar5 + 1;
      if (iVar4 == 0) {
        local_34 = iVar4;
        local_30 = iVar4;
        local_34 = FUN_4a06950e();
        FUN_4a16efc2(PTR_DAT_4a155be8,&local_34);
        uVar5 = *(int *)(puVar1 + 4) - 1;
      }
      *(uint *)((int)local_18 + iVar7 * 4) = uVar5;
      if (iVar2 != 0) {
        FUN_4a16544c(PTR_DAT_4a155be8);
      }
    }
    FUN_4a0978e0(auStack_2c);
  }
  return;
}



// Address: 4a155bec

void FUN_4a155bec(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_34;
  int local_30;
  undefined1 auStack_2c [16];
  int local_1c;
  int local_18;
  
  local_1c = param_1;
  local_18 = param_2;
  if (*(int *)(PTR_DAT_4a155c8c + 0x20) == 0) {
    FUN_4a1652c8(param_1,param_2,*(undefined4 *)(PTR_DAT_4a155c94 + 0x2c));
  }
  else {
    iVar2 = *(int *)(PTR_DAT_4a155c8c + 0x30);
    FUN_4a0978b4(auStack_2c);
    puVar1 = PTR_DAT_4a155c90;
    for (iVar7 = 0; iVar7 < local_1c; iVar7 = iVar7 + 1) {
      for (uVar6 = 1; uVar5 = 0xffffffff, uVar6 < *(uint *)(puVar1 + 4); uVar6 = uVar6 + 1) {
        if (*(int *)(*(int *)puVar1 + uVar6 * 8) == 0) {
          uVar3 = FUN_4a0a42d4(0);
          *(undefined4 *)(*(int *)puVar1 + uVar6 * 8) = uVar3;
          uVar5 = uVar6;
          break;
        }
      }
      iVar4 = uVar5 + 1;
      if (iVar4 == 0) {
        local_34 = iVar4;
        local_30 = iVar4;
        local_34 = FUN_4a0a42d4();
        FUN_4a16f24a(PTR_DAT_4a155c90,&local_34);
        uVar5 = *(int *)(puVar1 + 4) - 1;
      }
      *(uint *)(local_18 + iVar7 * 4) = uVar5;
      if (iVar2 != 0) {
        FUN_4a165506(PTR_DAT_4a155c90);
      }
    }
    FUN_4a0978e0(auStack_2c);
  }
  return;
}



// Address: 4a155c98

void FUN_4a155c98(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_34;
  int local_30;
  undefined1 auStack_2c [16];
  int local_1c;
  int local_18;
  
  local_1c = param_1;
  local_18 = param_2;
  if (*(int *)(PTR_DAT_4a155d38 + 0x20) == 0) {
    FUN_4a1652c8(param_1,param_2,*(undefined4 *)(PTR_DAT_4a155d40 + 0x14));
  }
  else {
    iVar2 = *(int *)(PTR_DAT_4a155d38 + 0x30);
    FUN_4a0978b4(auStack_2c);
    puVar1 = PTR_DAT_4a155d3c;
    for (iVar7 = 0; iVar7 < local_1c; iVar7 = iVar7 + 1) {
      for (uVar6 = 1; uVar5 = 0xffffffff, uVar6 < *(uint *)(puVar1 + 4); uVar6 = uVar6 + 1) {
        if (*(int *)(*(int *)puVar1 + uVar6 * 8) == 0) {
          uVar3 = FUN_4a0a56f4(0);
          *(undefined4 *)(*(int *)puVar1 + uVar6 * 8) = uVar3;
          uVar5 = uVar6;
          break;
        }
      }
      iVar4 = uVar5 + 1;
      if (iVar4 == 0) {
        local_34 = iVar4;
        local_30 = iVar4;
        local_34 = FUN_4a0a56f4();
        FUN_4a16f322(PTR_DAT_4a155d3c,&local_34);
        uVar5 = *(int *)(puVar1 + 4) - 1;
      }
      *(uint *)(local_18 + iVar7 * 4) = uVar5;
      if (iVar2 != 0) {
        FUN_4a165544(PTR_DAT_4a155d3c);
      }
    }
    FUN_4a0978e0(auStack_2c);
  }
  return;
}



// Address: 4a155d44

void FUN_4a155d44(uint param_1)

{
  host_glGenerateMipmap_thumb(param_1);
  return;
}



// Address: 4a155d50

void FUN_4a155d50(uint param_1,void *param_2)

{
  if (*(int *)(PTR_DAT_4a155d70 + 0x20) != 0) {
    param_1 = *(uint *)(*(int *)PTR_DAT_4a155d74 + param_1 * 8);
  }
  host_glGetAttribLocation_thumb(param_1,param_2);
  return;
}



// Address: 4a155d78

void FUN_4a155d78(uint param_1,void *param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  int local_10;
  
  puVar1 = PTR_DAT_4a155e00;
  if (param_1 == DAT_4a155dfc) {
    *(bool *)param_2 = *(int *)PTR_DAT_4a155e00 != 0;
    *(bool *)((int)param_2 + 1) = *(int *)(puVar1 + 4) != 0;
    *(bool *)((int)param_2 + 2) = *(int *)(puVar1 + 8) != 0;
    *(bool *)((int)param_2 + 3) = *(int *)(puVar1 + 0xc) != 0;
  }
  else {
    local_10 = param_4;
    iVar2 = FUN_4a00b2d8(param_1,&local_10);
    if ((((iVar2 == 0) && (iVar2 = FUN_4a00a728(param_1,&local_10), iVar2 == 0)) &&
        (iVar2 = FUN_4a00b55c(param_1,&local_10), iVar2 == 0)) &&
       (iVar2 = FUN_4a00ae90(param_1,&local_10), iVar2 == 0)) {
      host_glGetBooleanv_thumb(param_1,param_2);
    }
    else {
      *(bool *)param_2 = local_10 != 0;
    }
  }
  return;
}



// Address: 4a155e04

void FUN_4a155e04(void)

{
  if ((*(int *)(PTR_DAT_4a155e24 + 8) == 1) || (*(int *)(PTR_DAT_4a155e24 + 8) == 0)) {
    host_glGetError_thumb();
  }
  else {
    *(undefined4 *)(PTR_DAT_4a155e24 + 8) = 1;
  }
  return;
}



// Address: 4a155e28

void FUN_4a155e28(uint param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_10;
  
  puVar1 = PTR_DAT_4a155ea4;
  local_10 = param_4;
  if (param_1 == DAT_4a155ea0) {
    uVar2 = thunk_FUN_4a171fac(*(undefined4 *)PTR_DAT_4a155ea4);
    *param_2 = uVar2;
    uVar2 = thunk_FUN_4a171fac(*(undefined4 *)(puVar1 + 4));
    param_2[1] = uVar2;
    uVar2 = thunk_FUN_4a171fac(*(undefined4 *)(puVar1 + 8));
    param_2[2] = uVar2;
    uVar2 = thunk_FUN_4a171fac(*(undefined4 *)(puVar1 + 0xc));
    param_2[3] = uVar2;
  }
  else {
    iVar3 = FUN_4a00b2d8(param_1,&local_10);
    if ((((iVar3 == 0) && (iVar3 = FUN_4a00a728(param_1,&local_10), iVar3 == 0)) &&
        (iVar3 = FUN_4a00b55c(param_1,&local_10), iVar3 == 0)) &&
       (iVar3 = FUN_4a00ae90(param_1,&local_10), iVar3 == 0)) {
      host_glGetFloatv_thumb(param_1,param_2);
    }
    else {
      uVar2 = thunk_FUN_4a171fac(local_10);
      *param_2 = uVar2;
    }
  }
  return;
}



// Address: 4a155ea8

void FUN_4a155ea8(void)

{
                    /* WARNING: Could not recover jumptable at 0x4a155eb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_4a155eb4 + 0x3c))();
  return;
}



// Address: 4a155eb8

void FUN_4a155eb8(uint param_1,int param_2,void *param_3,void *param_4)

{
  if (*(int *)(PTR_DAT_4a155ed8 + 0x20) != 0) {
    param_1 = *(uint *)(*(int *)PTR_DAT_4a155edc + param_1 * 8);
  }
  host_glGetProgramInfoLog_thumb(param_1,param_2,param_3,param_4);
  return;
}



// Address: 4a155ee0

void FUN_4a155ee0(uint param_1,uint param_2,void *param_3)

{
  if (*(int *)(PTR_DAT_4a155f00 + 0x20) != 0) {
    param_1 = *(uint *)(*(int *)PTR_DAT_4a155f04 + param_1 * 8);
  }
  host_glGetProgramiv_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a155f08

void FUN_4a155f08(uint param_1,uint param_2,void *param_3)

{
  host_glGetRenderbufferParameteriv_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a155f14

void FUN_4a155f14(uint param_1,int param_2,void *param_3,void *param_4)

{
  if (*(int *)(PTR_DAT_4a155f34 + 0x20) != 0) {
    param_1 = *(uint *)(*(int *)PTR_DAT_4a155f38 + param_1 * 8);
  }
  host_glGetShaderInfoLog_thumb(param_1,param_2,param_3,param_4);
  return;
}



// Address: 4a155f3c

void FUN_4a155f3c(uint param_1,uint param_2,void *param_3)

{
  if (*(int *)(PTR_DAT_4a155f5c + 0x20) != 0) {
    param_1 = *(uint *)(*(int *)PTR_DAT_4a155f60 + param_1 * 8);
  }
  host_glGetShaderiv_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a155f64

void FUN_4a155f64(uint param_1,uint param_2,void *param_3)

{
  host_glGetTexParameteriv_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a155f70

void FUN_4a155f70(uint param_1,void *param_2)

{
  if (*(int *)(PTR_DAT_4a155f90 + 0x20) != 0) {
    param_1 = *(uint *)(*(int *)PTR_DAT_4a155f94 + param_1 * 8);
  }
  host_glGetUniformLocation_thumb(param_1,param_2);
  return;
}



// Address: 4a155f98

void FUN_4a155f98(uint param_1,uint param_2)

{
  int iVar1;
  
  if (*PTR_DAT_4a156004 != '\0') {
    iVar1 = *(int *)PTR_DAT_4a15600c;
    if (param_1 == DAT_4a156008) {
      if (*(uint *)(iVar1 + 0x221c) == param_2) {
        return;
      }
      *(uint *)(iVar1 + 0x221c) = param_2;
    }
    else if ((int)param_1 < (int)DAT_4a156008) {
      if (param_1 == DAT_4a156010) {
        if (*(uint *)(iVar1 + 0x2214) == param_2) {
          return;
        }
        *(uint *)(iVar1 + 0x2214) = param_2;
      }
      else if (param_1 - DAT_4a156010 == 1) {
        if (*(uint *)(iVar1 + 0x2218) == param_2) {
          return;
        }
        *(uint *)(iVar1 + 0x2218) = param_2;
      }
    }
    else if (param_1 - DAT_4a156008 == 2) {
      if (*(uint *)(iVar1 + 0x2220) == param_2) {
        return;
      }
      *(uint *)(iVar1 + 0x2220) = param_2;
    }
    else if ((param_1 - DAT_4a156008) + DAT_4a156014 == 0) {
      if (*(uint *)(iVar1 + 0x2224) == param_2) {
        return;
      }
      *(uint *)(iVar1 + 0x2224) = param_2;
    }
  }
  host_glHint_thumb(param_1,param_2);
  return;
}



// Address: 4a156018

uchar FUN_4a156018(uint param_1)

{
  uchar uVar1;
  
  uVar1 = host_glIsEnabled_thumb(param_1);
  return uVar1;
}



// Address: 4a156024

void FUN_4a156024(int param_1)

{
  if ((param_1 != 0) && (*(int *)(PTR_DAT_4a156040 + 0x20) != 0)) {
    param_1 = *(int *)(*(int *)PTR_DAT_4a156044 + param_1 * 8);
  }
                    /* WARNING: Could not recover jumptable at 0x4a15603e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_4a156048 + 0x20))(param_1);
  return;
}



// Address: 4a15604c

void FUN_4a15604c(int param_1)

{
  if ((param_1 != 0) && (*(int *)(PTR_DAT_4a156068 + 0x20) != 0)) {
    param_1 = *(int *)(*(int *)PTR_DAT_4a15606c + param_1 * 8);
  }
                    /* WARNING: Could not recover jumptable at 0x4a156066. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_4a156070 + 8))(param_1);
  return;
}



// Address: 4a156074

void FUN_4a156074(uint param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_4a1560b4;
  puVar1 = PTR_DAT_4a1560b0;
  if (*PTR_DAT_4a1560ac != '\0') {
    iVar3 = FUN_4a09c88c(*(int *)PTR_DAT_4a1560b0 + DAT_4a1560b4,param_2,param_3,param_4,param_4);
    if (iVar3 != 0) {
      return;
    }
    iVar3 = *(int *)puVar1;
    *(undefined4 *)(iVar3 + iVar2) = 2;
    ((undefined4 *)(iVar3 + iVar2))[1] = param_2;
  }
  host_glLightModelf_thumb(param_1,param_2);
  return;
}



// Address: 4a1560b8

void FUN_4a1560b8(uint param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  iVar2 = DAT_4a156124;
  puVar1 = PTR_DAT_4a156120;
  if (*PTR_DAT_4a156118 != '\0') {
    if (param_1 + DAT_4a15611c == 0) {
      iVar3 = FUN_4a09c88c(*(int *)PTR_DAT_4a156120 + DAT_4a156124,*param_2,param_3,param_4,param_4)
      ;
      if (iVar3 != 0) {
        return;
      }
      uVar5 = *param_2;
      puVar4 = (undefined4 *)(*(int *)puVar1 + iVar2);
      *puVar4 = 2;
      puVar4[1] = uVar5;
    }
    else if (param_1 + DAT_4a15611c == 1) {
      iVar2 = FUN_4a1656a4(*(int *)PTR_DAT_4a156120 + 0x2080,param_2);
      if (iVar2 != 0) {
        return;
      }
      FUN_4a165684(*(int *)puVar1 + 0x2080,param_2);
    }
  }
  host_glLightModelfv_thumb(param_1,param_2);
  return;
}



// Address: 4a156128

void FUN_4a156128(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_4a156168;
  puVar1 = PTR_DAT_4a156164;
  if (*PTR_DAT_4a156160 != '\0') {
    iVar3 = FUN_4a09c8a8(*(int *)PTR_DAT_4a156164 + DAT_4a156168,param_2,param_3,param_4,param_4);
    if (iVar3 != 0) {
      return;
    }
    iVar3 = *(int *)puVar1;
    *(undefined4 *)(iVar3 + iVar2) = 1;
    ((undefined4 *)(iVar3 + iVar2))[1] = param_2;
  }
  host_glLightModelx_thumb(param_1,param_2);
  return;
}



// Address: 4a15616c

void FUN_4a15616c(uint param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  iVar2 = DAT_4a1561d8;
  puVar1 = PTR_DAT_4a1561d4;
  if (*PTR_DAT_4a1561cc != '\0') {
    if (param_1 + DAT_4a1561d0 == 0) {
      iVar3 = FUN_4a09c8a8(*(int *)PTR_DAT_4a1561d4 + DAT_4a1561d8,*param_2,param_3,param_4,param_4)
      ;
      if (iVar3 != 0) {
        return;
      }
      uVar5 = *param_2;
      puVar4 = (undefined4 *)(*(int *)puVar1 + iVar2);
      *puVar4 = 1;
      puVar4[1] = uVar5;
    }
    else if (param_1 + DAT_4a1561d0 == 1) {
      iVar2 = FUN_4a1656c4(*(int *)PTR_DAT_4a1561d4 + 0x2080,param_2);
      if (iVar2 != 0) {
        return;
      }
      FUN_4a165694(*(int *)puVar1 + 0x2080,param_2);
    }
  }
  host_glLightModelxv_thumb(param_1,param_2);
  return;
}



// Address: 4a1561dc

void FUN_4a1561dc(uint param_1,uint param_2,float param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (*PTR_DAT_4a1562a4 != '\0') {
    uVar4 = thunk_FUN_4a1652fc(*(undefined4 *)PTR_DAT_4a1562ac,param_2,param_3,
                               param_2 + DAT_4a1562a8,param_1,param_2,param_3);
    uVar1 = FUN_4a09bbc4(0x11,param_1);
    iVar2 = FUN_4a09c88c(uVar1,param_3);
    if (iVar2 != 0) {
      return;
    }
    piVar3 = (int *)FUN_4a09bbc4(*(undefined4 *)((int)((ulonglong)uVar4 >> 0x20) * 2),param_1);
    *piVar3 = (int)uVar4 << 0x10;
    piVar3[1] = (int)param_3;
  }
  host_glLightf_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a1562b0

void FUN_4a1562b0(uint param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  if (*PTR_DAT_4a156428 != '\0') {
    puVar4 = param_3;
    uVar5 = thunk_FUN_4a1652fc(*(undefined4 *)PTR_DAT_4a15642c,param_2,param_3,param_2 - 0x1200,
                               param_1,param_2,param_3);
    iVar1 = (int)uVar5;
    *(short *)((int)((ulonglong)uVar5 >> 0x20) + iVar1) = (short)puVar4;
    *(char *)((int)param_3 + 1) = (char)((ulonglong)uVar5 >> 0x20);
    param_3 = &DAT_4a1563dc;
    uVar2 = FUN_4a09bbc4(iVar1,param_1);
    iVar3 = FUN_4a09c88c(uVar2,DAT_4a1563dc);
    if (iVar3 != 0) {
      return;
    }
    puVar4 = (undefined4 *)FUN_4a09bbc4(*(undefined4 *)(iVar1 >> 0xc),param_1);
    uVar2 = DAT_4a1563dc;
    *puVar4 = 2;
    puVar4[1] = uVar2;
  }
  host_glLightfv_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a156430

void FUN_4a156430(uint param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (*PTR_DAT_4a1564f8 != '\0') {
    uVar4 = thunk_FUN_4a1652fc(*(undefined4 *)PTR_DAT_4a156500,param_2,param_3,
                               param_2 + DAT_4a1564fc,param_1,param_2,param_3);
    uVar1 = FUN_4a09bbc4(0x11,param_1);
    iVar2 = FUN_4a09c8a8(uVar1,param_3);
    if (iVar2 != 0) {
      return;
    }
    piVar3 = (int *)FUN_4a09bbc4(*(undefined4 *)((int)((ulonglong)uVar4 >> 0x20) * 2),param_1);
    *piVar3 = (int)uVar4 << 0x10;
    piVar3[1] = param_3;
  }
  host_glLightx_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a156504

void FUN_4a156504(uint param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  if (*PTR_DAT_4a15667c != '\0') {
    puVar4 = param_3;
    uVar5 = thunk_FUN_4a1652fc(*(undefined4 *)PTR_DAT_4a156680,param_2,param_3,param_2 - 0x1200,
                               param_1,param_2,param_3);
    iVar1 = (int)uVar5;
    *(short *)((int)((ulonglong)uVar5 >> 0x20) + iVar1) = (short)puVar4;
    *(char *)((int)param_3 + 1) = (char)((ulonglong)uVar5 >> 0x20);
    param_3 = &DAT_4a156630;
    uVar2 = FUN_4a09bbc4(iVar1,param_1);
    iVar3 = FUN_4a09c8a8(uVar2,DAT_4a156630);
    if (iVar3 != 0) {
      return;
    }
    puVar4 = (undefined4 *)FUN_4a09bbc4(*(undefined4 *)(iVar1 >> 0xc),param_1);
    uVar2 = DAT_4a156630;
    *puVar4 = 1;
    puVar4[1] = uVar2;
  }
  host_glLightxv_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a156684

void FUN_4a156684(float param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_4a1566c0;
  puVar1 = PTR_DAT_4a1566bc;
  if (*PTR_DAT_4a1566b8 != '\0') {
    iVar3 = FUN_4a09c88c(*(int *)PTR_DAT_4a1566bc + DAT_4a1566c0,param_1);
    if (iVar3 != 0) {
      return;
    }
    iVar3 = *(int *)puVar1;
    *(undefined4 *)(iVar3 + iVar2) = 2;
    ((undefined4 *)(iVar3 + iVar2))[1] = param_1;
  }
  host_glLineWidth_thumb(param_1);
  return;
}



// Address: 4a1566c4

void FUN_4a1566c4(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_4a156700;
  puVar1 = PTR_DAT_4a1566fc;
  if (*PTR_DAT_4a1566f8 != '\0') {
    iVar3 = FUN_4a09c8a8(*(int *)PTR_DAT_4a1566fc + DAT_4a156700,param_1);
    if (iVar3 != 0) {
      return;
    }
    iVar3 = *(int *)puVar1;
    *(undefined4 *)(iVar3 + iVar2) = 1;
    ((undefined4 *)(iVar3 + iVar2))[1] = param_1;
  }
  host_glLineWidthx_thumb(param_1);
  return;
}



// Address: 4a156704

void FUN_4a156704(uint param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint program;
  
  puVar3 = (uint *)(*(int *)PTR_DAT_4a15674c + param_1 * 8);
  if (*(int *)(PTR_DAT_4a156748 + 0x34) == 0) {
    if (*(int *)(PTR_DAT_4a156748 + 0x20) != 0) {
      param_1 = *puVar3;
    }
    host_glLinkProgram_thumb(param_1);
  }
  else {
    program = *puVar3;
    uVar2 = FUN_4a1654c8(PTR_DAT_4a15674c,param_1);
    puVar1 = PTR_DAT_4a156750;
    *(undefined4 *)(PTR_DAT_4a156750 + 4) = uVar2;
    host_glLinkProgram_thumb(program);
    FUN_4a097b08(*(undefined4 *)(puVar1 + 4),program);
  }
  return;
}



// Address: 4a156754

void FUN_4a156754(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(PTR_DAT_4a1567a0 + 0xc) == DAT_4a1567a4) && (*(int *)(PTR_DAT_4a1567a8 + 0x1c) != 0)
     ) {
    host_glLoadIdentity_thumb();
    iVar1 = FUN_4a00abc0(2);
    uVar2 = thunk_FUN_4a171fac(-iVar1);
    uVar2 = thunk_FUN_4a17211c(uVar2,DAT_4a1567ac);
    FUN_4a1507a0(uVar2,0,0,0x3f800000);
    FUN_4a150650(param_1);
  }
  else {
    host_glLoadMatrixx_thumb(param_1);
  }
  return;
}



// Address: 4a1567b0

void FUN_4a1567b0(uint param_1)

{
  if (*PTR_DAT_4a1567d8 != '\0') {
    if (*(uint *)(*(int *)PTR_DAT_4a1567dc + 0x2170) == param_1) {
      return;
    }
    *(uint *)(*(int *)PTR_DAT_4a1567dc + 0x2170) = param_1;
  }
  host_glLogicOp_thumb(param_1);
  return;
}



// Address: 4a1567e0

void FUN_4a1567e0(uint param_1,uint param_2,float param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_4a15682c;
  puVar1 = PTR_DAT_4a156828;
  if ((*PTR_DAT_4a156820 != '\0') && (param_2 + DAT_4a156824 == 0)) {
    iVar3 = FUN_4a09c88c(*(int *)PTR_DAT_4a156828 + DAT_4a15682c,param_3);
    if (iVar3 != 0) {
      return;
    }
    iVar3 = *(int *)puVar1;
    *(undefined4 *)(iVar3 + iVar2) = 2;
    ((undefined4 *)(iVar3 + iVar2))[1] = param_3;
  }
  host_glMaterialf_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a156830

void FUN_4a156830(uint param_1,uint param_2,undefined4 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = DAT_4a156910;
  puVar1 = PTR_DAT_4a15690c;
  if (*PTR_DAT_4a156908 == '\0') goto LAB_4a1568fc;
  iVar5 = *(int *)PTR_DAT_4a15690c;
  if (param_2 == 0x1600) {
    iVar6 = DAT_4a156910 + 0x3c;
LAB_4a1568c6:
    iVar5 = FUN_4a1656a4(iVar5 + iVar6,param_3);
    if (iVar5 != 0) {
      return;
    }
    iVar6 = *(int *)puVar1 + iVar6;
  }
  else {
    if ((int)param_2 < 0x1601) {
      if (param_2 != DAT_4a156914) {
        if (param_2 - DAT_4a156914 == 1) {
          iVar6 = DAT_4a156910 + 0x14;
        }
        else {
          if (param_2 - DAT_4a156914 != 2) goto LAB_4a1568fc;
          iVar6 = DAT_4a156910 + 0x28;
        }
        goto LAB_4a1568c6;
      }
      iVar5 = FUN_4a1656a4(iVar5 + DAT_4a156910,param_3);
      if (iVar5 != 0) {
        return;
      }
    }
    else {
      if (param_2 == 0x1601) {
        iVar2 = DAT_4a156910 + -8;
        iVar6 = FUN_4a09c88c(iVar5 + iVar2,*param_3);
        if (iVar6 != 0) {
          return;
        }
        puVar3 = (undefined4 *)(*(int *)puVar1 + iVar2);
        uVar4 = *param_3;
        *puVar3 = 2;
        puVar3[1] = uVar4;
        goto LAB_4a1568fc;
      }
      if (param_2 != 0x1602) goto LAB_4a1568fc;
      iVar5 = FUN_4a1656a4(iVar5 + DAT_4a156910,param_3);
      if (iVar5 == 0) {
        FUN_4a165684(*(int *)puVar1 + iVar6,param_3);
      }
      iVar6 = DAT_4a156910 + 0x14;
      iVar2 = FUN_4a1656a4(*(int *)puVar1 + iVar6,param_3);
      if (iVar2 != 0) {
        if (iVar5 != 0) {
          return;
        }
        goto LAB_4a1568fc;
      }
    }
    iVar6 = *(int *)puVar1 + iVar6;
  }
  FUN_4a165684(iVar6,param_3);
LAB_4a1568fc:
  host_glMaterialfv_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a156918

void FUN_4a156918(uint param_1,uint param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_4a156964;
  puVar1 = PTR_DAT_4a156960;
  if ((*PTR_DAT_4a156958 != '\0') && (param_2 + DAT_4a15695c == 0)) {
    iVar3 = FUN_4a09c8a8(*(int *)PTR_DAT_4a156960 + DAT_4a156964,param_3);
    if (iVar3 != 0) {
      return;
    }
    iVar3 = *(int *)puVar1;
    *(undefined4 *)(iVar3 + iVar2) = 1;
    ((undefined4 *)(iVar3 + iVar2))[1] = param_3;
  }
  host_glMaterialx_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a156968

void FUN_4a156968(uint param_1,uint param_2,undefined4 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = DAT_4a156a48;
  puVar1 = PTR_DAT_4a156a44;
  if (*PTR_DAT_4a156a40 == '\0') goto LAB_4a156a34;
  iVar5 = *(int *)PTR_DAT_4a156a44;
  if (param_2 == 0x1600) {
    iVar6 = DAT_4a156a48 + 0x3c;
LAB_4a1569fe:
    iVar5 = FUN_4a1656c4(iVar5 + iVar6,param_3);
    if (iVar5 != 0) {
      return;
    }
    iVar6 = *(int *)puVar1 + iVar6;
  }
  else {
    if ((int)param_2 < 0x1601) {
      if (param_2 != DAT_4a156a4c) {
        if (param_2 - DAT_4a156a4c == 1) {
          iVar6 = DAT_4a156a48 + 0x14;
        }
        else {
          if (param_2 - DAT_4a156a4c != 2) goto LAB_4a156a34;
          iVar6 = DAT_4a156a48 + 0x28;
        }
        goto LAB_4a1569fe;
      }
      iVar5 = FUN_4a1656c4(iVar5 + DAT_4a156a48,param_3);
      if (iVar5 != 0) {
        return;
      }
    }
    else {
      if (param_2 == 0x1601) {
        iVar2 = DAT_4a156a48 + -8;
        iVar6 = FUN_4a09c8a8(iVar5 + iVar2,*param_3);
        if (iVar6 != 0) {
          return;
        }
        puVar3 = (undefined4 *)(*(int *)puVar1 + iVar2);
        uVar4 = *param_3;
        *puVar3 = 1;
        puVar3[1] = uVar4;
        goto LAB_4a156a34;
      }
      if (param_2 != 0x1602) goto LAB_4a156a34;
      iVar5 = FUN_4a1656c4(iVar5 + DAT_4a156a48,param_3);
      if (iVar5 == 0) {
        FUN_4a165694(*(int *)puVar1 + iVar6,param_3);
      }
      iVar6 = DAT_4a156a48 + 0x14;
      iVar2 = FUN_4a1656c4(*(int *)puVar1 + iVar6,param_3);
      if (iVar2 != 0) {
        if (iVar5 != 0) {
          return;
        }
        goto LAB_4a156a34;
      }
    }
    iVar6 = *(int *)puVar1 + iVar6;
  }
  FUN_4a165694(iVar6,param_3);
LAB_4a156a34:
  host_glMaterialxv_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a156a50

void FUN_4a156a50(void *param_1)

{
  host_glMultMatrixf_thumb(param_1);
  return;
}



// Address: 4a156a5c

void FUN_4a156a5c(void *param_1)

{
  host_glMultMatrixx_thumb(param_1);
  return;
}



// Address: 4a156a68

void FUN_4a156a68(uint param_1,float param_2,float param_3,float param_4,float param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  float local_34;
  float local_30;
  float fStack_2c;
  float local_28;
  uint local_24;
  float local_20;
  float local_1c;
  float fStack_18;
  
  iVar2 = DAT_4a156ac8;
  puVar1 = PTR_DAT_4a156ac4;
  local_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  fStack_18 = param_4;
  if (*PTR_DAT_4a156ac0 != '\0') {
    local_28 = param_5;
    local_34 = param_2;
    local_30 = param_3;
    fStack_2c = param_4;
    iVar3 = FUN_4a1656a4(param_1 * 0xd8 + *(int *)PTR_DAT_4a156ac4 + DAT_4a156ac8,&local_34,param_3,
                         &local_28);
    if (iVar3 != 0) {
      return;
    }
    FUN_4a165684(param_1 * 0xd8 + *(int *)puVar1 + iVar2,&local_34);
  }
  host_glMultiTexCoord4f_thumb(local_24,local_20,local_1c,param_4,param_5);
  return;
}



// Address: 4a156acc

void FUN_4a156acc(uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int local_34;
  int local_30;
  int iStack_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int iStack_18;
  
  iVar2 = DAT_4a156b2c;
  puVar1 = PTR_DAT_4a156b28;
  local_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  iStack_18 = param_4;
  if (*PTR_DAT_4a156b24 != '\0') {
    local_28 = param_5;
    local_34 = param_2;
    local_30 = param_3;
    iStack_2c = param_4;
    iVar3 = FUN_4a1656c4(param_1 * 0xd8 + *(int *)PTR_DAT_4a156b28 + DAT_4a156b2c,&local_34,param_3,
                         &local_28);
    if (iVar3 != 0) {
      return;
    }
    FUN_4a165694(param_1 * 0xd8 + *(int *)puVar1 + iVar2,&local_34);
  }
  host_glMultiTexCoord4x_thumb(local_24,local_20,local_1c,param_4,param_5);
  return;
}



// Address: 4a156b30

void FUN_4a156b30(float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  float local_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  
  iVar2 = DAT_4a156b84;
  puVar1 = PTR_DAT_4a156b80;
  fStack_20 = param_1;
  fStack_1c = param_2;
  local_18 = param_3;
  if (*PTR_DAT_4a156b7c != '\0') {
    local_2c = param_1;
    fStack_28 = param_2;
    local_24 = param_3;
    iVar3 = FUN_4a1655b0(*(int *)PTR_DAT_4a156b80 + DAT_4a156b84,&local_2c);
    if (iVar3 != 0) {
      return;
    }
    puVar4 = (undefined4 *)(*(int *)puVar1 + iVar2);
    *puVar4 = 2;
    puVar4[1] = local_2c;
    puVar4[2] = fStack_28;
    puVar4[3] = local_24;
  }
  host_glNormal3f_thumb(param_1,param_2,local_18);
  return;
}



// Address: 4a156b88

void FUN_4a156b88(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_2c;
  int iStack_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int local_18;
  
  iVar2 = DAT_4a156bdc;
  puVar1 = PTR_DAT_4a156bd8;
  iStack_20 = param_1;
  iStack_1c = param_2;
  local_18 = param_3;
  if (*PTR_DAT_4a156bd4 != '\0') {
    local_2c = param_1;
    iStack_28 = param_2;
    local_24 = param_3;
    iVar3 = FUN_4a1655d0(*(int *)PTR_DAT_4a156bd8 + DAT_4a156bdc,&local_2c);
    if (iVar3 != 0) {
      return;
    }
    puVar4 = (undefined4 *)(*(int *)puVar1 + iVar2);
    *puVar4 = 1;
    puVar4[1] = local_2c;
    puVar4[2] = iStack_28;
    puVar4[3] = local_24;
  }
  host_glNormal3x_thumb(param_1,param_2,local_18);
  return;
}



// Address: 4a156be0

void FUN_4a156be0(uint param_1,int param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (*PTR_DAT_4a156c30 != '\0') {
    iVar2 = *(int *)PTR_DAT_4a156c34;
    piVar1 = (int *)(iVar2 + DAT_4a156c38);
    if ((((piVar1[1] == 3) && (piVar1[2] == param_1)) && (piVar1[4] == param_2)) &&
       (((void *)piVar1[5] == param_3 && (*piVar1 == *(int *)(iVar2 + 0x2104))))) {
      return;
    }
    piVar1[1] = 3;
    piVar1[5] = (int)param_3;
    piVar1[4] = param_2;
    piVar1[2] = param_1;
    *piVar1 = *(int *)(iVar2 + 0x2104);
  }
  host_glNormalPointer_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a156c3c

void FUN_4a156c3c(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6)

{
  host_glOrthof_thumb(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// Address: 4a156c58

void FUN_4a156c58(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  host_glOrthox_thumb(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// Address: 4a156c74

void FUN_4a156c74(uint param_1,int param_2)

{
  int iVar1;
  
  if (*PTR_DAT_4a156cb0 != '\0') {
    iVar1 = *(int *)PTR_DAT_4a156cb8;
    if (param_1 + DAT_4a156cb4 == 0) {
      if (*(int *)(iVar1 + 0x2178) == param_2) {
        return;
      }
      *(int *)(iVar1 + 0x2178) = param_2;
    }
    else if (param_1 + DAT_4a156cb4 == 0x10) {
      if (*(int *)(iVar1 + 0x2174) == param_2) {
        return;
      }
      *(int *)(iVar1 + 0x2174) = param_2;
    }
  }
  host_glPixelStorei_thumb(param_1,param_2);
  return;
}



// Address: 4a156cbc

void FUN_4a156cbc(float param_1,float param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = DAT_4a156d24;
  puVar1 = PTR_DAT_4a156d20;
  if (*PTR_DAT_4a156d1c != '\0') {
    iVar2 = FUN_4a09c88c(*(int *)PTR_DAT_4a156d20 + DAT_4a156d24,param_1);
    if (iVar2 == 0) {
      iVar3 = *(int *)puVar1;
      *(undefined4 *)(iVar3 + iVar4) = 2;
      ((undefined4 *)(iVar3 + iVar4))[1] = param_1;
    }
    iVar3 = DAT_4a156d24 + 8;
    iVar4 = FUN_4a09c88c(*(int *)puVar1 + iVar3,param_2);
    if (iVar4 == 0) {
      puVar5 = (undefined4 *)(*(int *)puVar1 + iVar3);
      *puVar5 = 2;
      puVar5[1] = param_2;
    }
    else if (iVar2 != 0) {
      return;
    }
  }
  host_glPolygonOffset_thumb(param_1,param_2);
  return;
}



// Address: 4a156d28

void FUN_4a156d28(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = DAT_4a156d90;
  puVar1 = PTR_DAT_4a156d8c;
  if (*PTR_DAT_4a156d88 != '\0') {
    iVar2 = FUN_4a09c8a8(*(int *)PTR_DAT_4a156d8c + DAT_4a156d90,param_1);
    if (iVar2 == 0) {
      iVar3 = *(int *)puVar1;
      *(undefined4 *)(iVar3 + iVar4) = 1;
      ((undefined4 *)(iVar3 + iVar4))[1] = param_1;
    }
    iVar3 = DAT_4a156d90 + 8;
    iVar4 = FUN_4a09c8a8(*(int *)puVar1 + iVar3,param_2);
    if (iVar4 == 0) {
      puVar5 = (undefined4 *)(*(int *)puVar1 + iVar3);
      *puVar5 = 1;
      puVar5[1] = param_2;
    }
    else if (iVar2 != 0) {
      return;
    }
  }
  host_glPolygonOffsetx_thumb(param_1,param_2);
  return;
}



// Address: 4a156d94

void FUN_4a156d94(void)

{
  host_glPopMatrix_thumb();
  return;
}



// Address: 4a156da0

void FUN_4a156da0(void)

{
  host_glPushMatrix_thumb();
  return;
}



// Address: 4a156dac

void FUN_4a156dac(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,
                 void *param_7)

{
  host_glReadPixels_thumb(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// Address: 4a156dcc

void FUN_4a156dcc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(PTR_DAT_4a156e08 + 0x30) != 0) {
    uVar1 = FUN_4a165544(PTR_DAT_4a156e10,*(undefined4 *)(PTR_DAT_4a156e0c + 4));
    FUN_4a0a56f0(uVar1,param_2,param_3,param_4);
  }
  FUN_4a1652cc(param_1,param_2,param_3,param_4);
  return;
}



// Address: 4a156e14

void FUN_4a156e14(float param_1,float param_2,float param_3,float param_4)

{
  host_glRotatef_thumb(param_1,param_2,param_3,param_4);
  return;
}



// Address: 4a156e20

void FUN_4a156e20(int param_1,int param_2,int param_3,int param_4)

{
  host_glRotatex_thumb(param_1,param_2,param_3,param_4);
  return;
}



// Address: 4a156e2c

void FUN_4a156e2c(float param_1,float param_2,float param_3)

{
  host_glScalef_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a156e38

void FUN_4a156e38(int param_1,int param_2,int param_3)

{
  host_glScalex_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a156e44

void FUN_4a156e44(uint param_1)

{
  if (*PTR_DAT_4a156e6c != '\0') {
    if (*(uint *)(*(int *)PTR_DAT_4a156e70 + 0x212c) == param_1) {
      return;
    }
    *(uint *)(*(int *)PTR_DAT_4a156e70 + 0x212c) = param_1;
  }
  host_glShadeModel_thumb(param_1);
  return;
}



// Address: 4a156e74

void FUN_4a156e74(int param_1,void *param_2,uint param_3,void *param_4,int param_5)

{
  host_glShaderBinary_thumb(param_1,param_2,param_3,param_4,param_5);
  return;
}



// Address: 4a156e88

void FUN_4a156e88(uint param_1,int param_2,void *param_3,void *param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_DAT_4a156ee4;
  if (*(int *)(PTR_DAT_4a156ee4 + 0x34) != 0) {
    uVar2 = FUN_4a165486(PTR_DAT_4a156ee8,param_1);
    FUN_4a091efa(uVar2,param_2,param_3,param_4);
  }
  if (*(int *)(puVar1 + 0x20) != 0) {
    param_1 = *(uint *)(*(int *)PTR_DAT_4a156ee8 + param_1 * 8);
  }
  host_glShaderSource_thumb(param_1,param_2,param_3,param_4);
  if (*(int *)PTR_DAT_4a156eec != 0) {
    FUN_4a00d53c(0x500);
  }
  return;
}



// Address: 4a156ef0

void FUN_4a156ef0(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  if (*PTR_DAT_4a156f58 != '\0') {
    iVar1 = *(int *)PTR_DAT_4a156f5c;
    bVar2 = *(uint *)(iVar1 + 0x2130) == param_1;
    if (!bVar2) {
      *(uint *)(iVar1 + 0x2130) = param_1;
    }
    bVar3 = *(int *)(iVar1 + 0x2138) == param_2;
    if (!bVar3) {
      *(int *)(iVar1 + 0x2138) = param_2;
    }
    bVar4 = *(uint *)(iVar1 + 0x2140) == param_3;
    if (!bVar4) {
      *(uint *)(iVar1 + 0x2140) = param_3;
    }
    bVar5 = *(uint *)(iVar1 + 0x2134) == param_1;
    if (!bVar5) {
      *(uint *)(iVar1 + 0x2134) = param_1;
    }
    bVar6 = *(int *)(iVar1 + 0x213c) == param_2;
    if (!bVar6) {
      *(int *)(iVar1 + 0x213c) = param_2;
    }
    if (*(uint *)(iVar1 + 0x2144) == param_3) {
      if (bVar6 && (bVar5 && (bVar4 && (bVar3 && bVar2)))) {
        return;
      }
    }
    else {
      *(uint *)(iVar1 + 0x2144) = param_3;
    }
  }
  host_glStencilFunc_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a156f60

void FUN_4a156f60(uint param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  if (*PTR_DAT_4a156fec != '\0') {
    iVar1 = *(int *)PTR_DAT_4a156ff0;
    bVar3 = false;
    if ((param_1 == 0x408) || (param_1 == 0x404)) {
      bVar2 = *(uint *)(iVar1 + 0x2130) != param_2;
      if (bVar2) {
        *(uint *)(iVar1 + 0x2130) = param_2;
      }
      bVar3 = *(int *)(iVar1 + 0x2138) != param_3;
      if (bVar3) {
        *(int *)(iVar1 + 0x2138) = param_3;
      }
      bVar3 = bVar3 || bVar2;
      if (*(uint *)(iVar1 + 0x2140) != param_4) {
        bVar3 = true;
        *(uint *)(iVar1 + 0x2140) = param_4;
      }
    }
    if ((param_1 == 0x408) || (param_1 == 0x405)) {
      if (*(uint *)(iVar1 + 0x2134) != param_2) {
        bVar3 = true;
        *(uint *)(iVar1 + 0x2134) = param_2;
      }
      if (*(int *)(iVar1 + 0x213c) != param_3) {
        bVar3 = true;
        *(int *)(iVar1 + 0x213c) = param_3;
      }
      if (*(uint *)(iVar1 + 0x2144) != param_4) {
        *(uint *)(iVar1 + 0x2144) = param_4;
        goto LAB_4a156fde;
      }
    }
    if (!bVar3) {
      return;
    }
  }
LAB_4a156fde:
  host_glStencilFuncSeparate_thumb(param_1,param_2,param_3,param_4);
  return;
}



// Address: 4a156ff4

void FUN_4a156ff4(uint param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*PTR_DAT_4a15702c != '\0') {
    iVar1 = *(int *)PTR_DAT_4a157030;
    bVar2 = *(uint *)(iVar1 + 0x2148) == param_1;
    if (!bVar2) {
      *(uint *)(iVar1 + 0x2148) = param_1;
    }
    if (*(uint *)(iVar1 + 0x214c) == param_1) {
      if (bVar2) {
        return;
      }
    }
    else {
      *(uint *)(iVar1 + 0x214c) = param_1;
    }
  }
  host_glStencilMask_thumb(param_1);
  return;
}



// Address: 4a157034

void FUN_4a157034(uint param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  
  if (*PTR_DAT_4a157084 != '\0') {
    iVar2 = *(int *)PTR_DAT_4a157088;
    bVar1 = false;
    if (((param_1 == 0x408) || (param_1 == 0x404)) && (*(uint *)(iVar2 + 0x2148) != param_2)) {
      bVar1 = true;
      *(uint *)(iVar2 + 0x2148) = param_2;
    }
    if (((param_1 == 0x408) || (param_1 == DAT_4a15708c)) && (*(uint *)(iVar2 + 0x214c) != param_2))
    {
      *(uint *)(iVar2 + 0x214c) = param_2;
    }
    else if (!bVar1) {
      return;
    }
  }
  host_glStencilMaskSeparate_thumb(param_1,param_2);
  return;
}



// Address: 4a157090

void FUN_4a157090(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  if (*PTR_DAT_4a1570f0 != '\0') {
    iVar1 = *(int *)PTR_DAT_4a1570f4;
    bVar2 = *(uint *)(iVar1 + 0x2150) == param_1;
    if (!bVar2) {
      *(uint *)(iVar1 + 0x2150) = param_1;
    }
    bVar3 = *(uint *)(iVar1 + 0x2158) == param_2;
    if (!bVar3) {
      *(uint *)(iVar1 + 0x2158) = param_2;
    }
    bVar4 = *(uint *)(iVar1 + 0x2160) == param_3;
    if (!bVar4) {
      *(uint *)(iVar1 + 0x2160) = param_3;
    }
    bVar5 = *(uint *)(iVar1 + 0x2154) == param_1;
    if (!bVar5) {
      *(uint *)(iVar1 + 0x2154) = param_1;
    }
    bVar6 = *(uint *)(iVar1 + 0x215c) == param_2;
    if (!bVar6) {
      *(uint *)(iVar1 + 0x215c) = param_2;
    }
    if (*(uint *)(iVar1 + 0x2164) == param_3) {
      if (bVar6 && (bVar5 && (bVar4 && (bVar3 && bVar2)))) {
        return;
      }
    }
    else {
      *(uint *)(iVar1 + 0x2164) = param_3;
    }
  }
  host_glStencilOp_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a1570f8

void FUN_4a1570f8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  if (*PTR_DAT_4a157170 != '\0') {
    iVar1 = *(int *)PTR_DAT_4a157174;
    bVar3 = false;
    if ((param_1 == 0x408) || (param_1 == 0x404)) {
      bVar2 = *(uint *)(iVar1 + 0x2150) != param_2;
      if (bVar2) {
        *(uint *)(iVar1 + 0x2150) = param_2;
      }
      bVar3 = *(uint *)(iVar1 + 0x2158) != param_3;
      if (bVar3) {
        *(uint *)(iVar1 + 0x2158) = param_3;
      }
      bVar3 = bVar3 || bVar2;
      if (*(uint *)(iVar1 + 0x2160) != param_4) {
        bVar3 = true;
        *(uint *)(iVar1 + 0x2160) = param_4;
      }
    }
    if ((param_1 == 0x408) || (param_1 == DAT_4a157178)) {
      if (*(uint *)(iVar1 + 0x2154) != param_2) {
        bVar3 = true;
        *(uint *)(iVar1 + 0x2154) = param_2;
      }
      if (*(uint *)(iVar1 + 0x215c) != param_3) {
        bVar3 = true;
        *(uint *)(iVar1 + 0x215c) = param_3;
      }
      if (*(uint *)(iVar1 + 0x2164) != param_4) {
        *(uint *)(iVar1 + 0x2164) = param_4;
        goto LAB_4a157166;
      }
    }
    if (!bVar3) {
      return;
    }
  }
LAB_4a157166:
  host_glStencilOpSeparate_thumb(param_1,param_2,param_3,param_4);
  return;
}



// Address: 4a15717c

void FUN_4a15717c(int param_1,uint param_2,int param_3,void *param_4)

{
  int *piVar1;
  int iVar2;
  
  if (*PTR_DAT_4a1571dc != '\0') {
    iVar2 = *(int *)PTR_DAT_4a1571e0;
    piVar1 = (int *)(*(int *)(iVar2 + 0x1fc4) * 0xd8 + iVar2 + DAT_4a1571e4);
    if ((((piVar1[1] == param_1) && (piVar1[2] == param_2)) && (piVar1[4] == param_3)) &&
       (((void *)piVar1[5] == param_4 && (*piVar1 == *(int *)(iVar2 + 0x2104))))) {
      return;
    }
    piVar1[5] = (int)param_4;
    piVar1[4] = param_3;
    piVar1[1] = param_1;
    piVar1[2] = param_2;
    *piVar1 = *(int *)(iVar2 + 0x2104);
  }
  host_glTexCoordPointer_thumb(param_1,param_2,param_3,param_4);
  return;
}



// Address: 4a1571e8

void FUN_4a1571e8(uint param_1,uint param_2,float param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  puVar1 = PTR_DAT_4a157480;
  if (*PTR_DAT_4a157478 != '\0') {
    bVar6 = param_1 == 0x2300;
    do {
      if (!bVar6) goto LAB_4a157466;
      iVar4 = param_2 - DAT_4a15747c;
      uVar2 = *(undefined4 *)PTR_DAT_4a157480;
      if (param_2 == DAT_4a15747c) {
        iVar4 = FUN_4a09b214(uVar2);
        iVar5 = *(int *)(iVar4 + 0x8c);
        iVar4 = thunk_FUN_4a171e1c(param_3);
        if (iVar5 == iVar4) {
          return;
        }
        iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
        *(int *)(iVar5 + 0x8c) = iVar4;
        goto LAB_4a157466;
      }
      if ((int)DAT_4a15747c <= (int)param_2) {
        if (iVar4 == 10) {
          iVar4 = FUN_4a09b214(uVar2);
          iVar5 = *(int *)(iVar4 + 0x70);
          iVar4 = thunk_FUN_4a171e1c(param_3);
          if (iVar5 == iVar4) {
            return;
          }
          iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
          *(int *)(iVar5 + 0x70) = iVar4;
        }
        else if (iVar4 < 0xb) {
          if (iVar4 == 1) {
            iVar4 = FUN_4a09b214(uVar2);
            iVar5 = *(int *)(iVar4 + 0x90);
            iVar4 = thunk_FUN_4a171e1c(param_3);
            if (iVar5 == iVar4) {
              return;
            }
            iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
            *(int *)(iVar5 + 0x90) = iVar4;
          }
          else if (iVar4 == 2) {
            iVar4 = FUN_4a09b214(uVar2);
            iVar5 = *(int *)(iVar4 + 0x94);
            iVar4 = thunk_FUN_4a171e1c(param_3);
            if (iVar5 == iVar4) {
              return;
            }
            iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
            *(int *)(iVar5 + 0x94) = iVar4;
          }
          else if (iVar4 == 8) {
            iVar4 = FUN_4a09b214(uVar2);
            iVar5 = *(int *)(iVar4 + 0x68);
            iVar4 = thunk_FUN_4a171e1c(param_3);
            if (iVar5 == iVar4) {
              return;
            }
            iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
            *(int *)(iVar5 + 0x68) = iVar4;
          }
          else if (iVar4 == 9) {
            iVar4 = FUN_4a09b214(uVar2);
            iVar5 = *(int *)(iVar4 + 0x6c);
            iVar4 = thunk_FUN_4a171e1c(param_3);
            if (iVar5 == iVar4) {
              return;
            }
            iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
            *(int *)(iVar5 + 0x6c) = iVar4;
          }
        }
        else if (iVar4 == 0x10) {
          iVar4 = FUN_4a09b214(uVar2);
          iVar5 = *(int *)(iVar4 + 0x74);
          iVar4 = thunk_FUN_4a171e1c(param_3);
          if (iVar5 == iVar4) {
            return;
          }
          iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
          *(int *)(iVar5 + 0x74) = iVar4;
        }
        else if (iVar4 == 0x11) {
          iVar4 = FUN_4a09b214(uVar2);
          iVar5 = *(int *)(iVar4 + 0x78);
          iVar4 = thunk_FUN_4a171e1c(param_3);
          if (iVar5 == iVar4) {
            return;
          }
          iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
          *(int *)(iVar5 + 0x78) = iVar4;
        }
        else if (iVar4 == 0x12) {
          iVar4 = FUN_4a09b214(uVar2);
          iVar5 = *(int *)(iVar4 + 0x7c);
          iVar4 = thunk_FUN_4a171e1c(param_3);
          if (iVar5 == iVar4) {
            return;
          }
          iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
          *(int *)(iVar5 + 0x7c) = iVar4;
        }
        goto LAB_4a157466;
      }
      iVar4 = param_2 - DAT_4a157484;
      if (param_2 == DAT_4a157484) {
        iVar4 = FUN_4a09b214(uVar2);
        iVar4 = FUN_4a09c88c(iVar4 + 0x58,param_3);
        if (iVar4 != 0) {
          return;
        }
        iVar4 = FUN_4a09b214(*(undefined4 *)puVar1);
        puVar3 = (undefined4 *)(iVar4 + 0x58);
LAB_4a157348:
        *puVar3 = 2;
        puVar3[1] = param_3;
        goto LAB_4a157466;
      }
      if ((int)DAT_4a157484 <= (int)param_2) {
        if (iVar4 == 0xd) {
          iVar4 = FUN_4a09b214(uVar2);
          iVar5 = *(int *)(iVar4 + 0x80);
          iVar4 = thunk_FUN_4a171e1c(param_3);
          if (iVar5 == iVar4) {
            return;
          }
          iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
          *(int *)(iVar5 + 0x80) = iVar4;
        }
        else if (iVar4 == 0xe) {
          iVar4 = FUN_4a09b214(uVar2);
          iVar5 = *(int *)(iVar4 + 0x84);
          iVar4 = thunk_FUN_4a171e1c(param_3);
          if (iVar5 == iVar4) {
            return;
          }
          iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
          *(int *)(iVar5 + 0x84) = iVar4;
        }
        else if (iVar4 == 0xf) {
          iVar4 = FUN_4a09b214(uVar2);
          iVar5 = *(int *)(iVar4 + 0x88);
          iVar4 = thunk_FUN_4a171e1c(param_3);
          if (iVar5 == iVar4) {
            return;
          }
          iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
          *(int *)(iVar5 + 0x88) = iVar4;
        }
        goto LAB_4a157466;
      }
      if (param_2 + DAT_4a157488 == 0) {
        iVar4 = FUN_4a09b214(uVar2);
        iVar4 = FUN_4a09c88c(iVar4 + 0x60,param_3);
        if (iVar4 != 0) {
          return;
        }
        iVar4 = FUN_4a09b214(*(undefined4 *)puVar1);
        puVar3 = (undefined4 *)(iVar4 + 0x60);
        goto LAB_4a157348;
      }
      iVar4 = param_2 + DAT_4a157488 + DAT_4a15748c;
      if (iVar4 == 0) {
        iVar4 = FUN_4a09b214(uVar2);
        iVar5 = *(int *)(iVar4 + 0x38);
        iVar4 = thunk_FUN_4a171e1c(param_3);
        if (iVar5 == iVar4) {
          return;
        }
        iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
        *(int *)(iVar5 + 0x38) = iVar4;
        goto LAB_4a157466;
      }
      iVar4 = iVar4 + DAT_4a157490;
      if (iVar4 == 0) {
        iVar4 = FUN_4a09b214(uVar2);
        iVar5 = *(int *)(iVar4 + 0x50);
        iVar4 = thunk_FUN_4a171e1c(param_3);
        if (iVar5 == iVar4) {
          return;
        }
        iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
        *(int *)(iVar5 + 0x50) = iVar4;
        goto LAB_4a157466;
      }
      bVar6 = iVar4 == 1;
    } while (!bVar6);
    iVar4 = FUN_4a09b214(uVar2);
    iVar5 = *(int *)(iVar4 + 0x54);
    iVar4 = thunk_FUN_4a171e1c(param_3);
    if (iVar5 == iVar4) {
      return;
    }
    iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
    *(int *)(iVar5 + 0x54) = iVar4;
  }
LAB_4a157466:
  host_glTexEnvf_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a157494

void FUN_4a157494(uint param_1,uint param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  puVar1 = PTR_DAT_4a157758;
  if (*PTR_DAT_4a157750 != '\0') {
    bVar6 = param_1 == 0x2300;
    do {
      if (!bVar6) goto LAB_4a15773e;
      iVar4 = param_2 - DAT_4a157754;
      uVar2 = *(undefined4 *)PTR_DAT_4a157758;
      if (param_2 == DAT_4a157754) {
        iVar4 = FUN_4a09b214(uVar2);
        iVar5 = *(int *)(iVar4 + 0x8c);
        iVar4 = thunk_FUN_4a171e1c(*param_3);
        if (iVar5 == iVar4) {
          return;
        }
        iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
        *(int *)(iVar5 + 0x8c) = iVar4;
        goto LAB_4a15773e;
      }
      if ((int)DAT_4a157754 <= (int)param_2) {
        if (iVar4 == 10) {
          iVar4 = FUN_4a09b214(uVar2);
          iVar5 = *(int *)(iVar4 + 0x70);
          iVar4 = thunk_FUN_4a171e1c(*param_3);
          if (iVar5 == iVar4) {
            return;
          }
          iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
          *(int *)(iVar5 + 0x70) = iVar4;
        }
        else if (iVar4 < 0xb) {
          if (iVar4 == 1) {
            iVar4 = FUN_4a09b214(uVar2);
            iVar5 = *(int *)(iVar4 + 0x90);
            iVar4 = thunk_FUN_4a171e1c(*param_3);
            if (iVar5 == iVar4) {
              return;
            }
            iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
            *(int *)(iVar5 + 0x90) = iVar4;
          }
          else if (iVar4 == 2) {
            iVar4 = FUN_4a09b214(uVar2);
            iVar5 = *(int *)(iVar4 + 0x94);
            iVar4 = thunk_FUN_4a171e1c(*param_3);
            if (iVar5 == iVar4) {
              return;
            }
            iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
            *(int *)(iVar5 + 0x94) = iVar4;
          }
          else if (iVar4 == 8) {
            iVar4 = FUN_4a09b214(uVar2);
            iVar5 = *(int *)(iVar4 + 0x68);
            iVar4 = thunk_FUN_4a171e1c(*param_3);
            if (iVar5 == iVar4) {
              return;
            }
            iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
            *(int *)(iVar5 + 0x68) = iVar4;
          }
          else if (iVar4 == 9) {
            iVar4 = FUN_4a09b214(uVar2);
            iVar5 = *(int *)(iVar4 + 0x6c);
            iVar4 = thunk_FUN_4a171e1c(*param_3);
            if (iVar5 == iVar4) {
              return;
            }
            iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
            *(int *)(iVar5 + 0x6c) = iVar4;
          }
        }
        else if (iVar4 == 0x10) {
          iVar4 = FUN_4a09b214(uVar2);
          iVar5 = *(int *)(iVar4 + 0x74);
          iVar4 = thunk_FUN_4a171e1c(*param_3);
          if (iVar5 == iVar4) {
            return;
          }
          iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
          *(int *)(iVar5 + 0x74) = iVar4;
        }
        else if (iVar4 == 0x11) {
          iVar4 = FUN_4a09b214(uVar2);
          iVar5 = *(int *)(iVar4 + 0x78);
          iVar4 = thunk_FUN_4a171e1c(*param_3);
          if (iVar5 == iVar4) {
            return;
          }
          iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
          *(int *)(iVar5 + 0x78) = iVar4;
        }
        else if (iVar4 == 0x12) {
          iVar4 = FUN_4a09b214(uVar2);
          iVar5 = *(int *)(iVar4 + 0x7c);
          iVar4 = thunk_FUN_4a171e1c(*param_3);
          if (iVar5 == iVar4) {
            return;
          }
          iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
          *(int *)(iVar5 + 0x7c) = iVar4;
        }
        goto LAB_4a15773e;
      }
      iVar4 = param_2 - DAT_4a15775c;
      if (param_2 == DAT_4a15775c) {
        iVar4 = FUN_4a09b214(uVar2);
        iVar5 = *(int *)(iVar4 + 0x54);
        iVar4 = thunk_FUN_4a171e1c(*param_3);
        if (iVar5 == iVar4) {
          return;
        }
        iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
        *(int *)(iVar5 + 0x54) = iVar4;
        goto LAB_4a15773e;
      }
      if ((int)DAT_4a15775c <= (int)param_2) {
        if (iVar4 == 1) {
          iVar4 = FUN_4a09b214(uVar2);
          iVar4 = FUN_4a09c88c(iVar4 + 0x58,*param_3);
          if (iVar4 != 0) {
            return;
          }
          iVar4 = FUN_4a09b214(*(undefined4 *)puVar1);
          puVar3 = (undefined4 *)(iVar4 + 0x58);
LAB_4a15761a:
          uVar2 = *param_3;
          *puVar3 = 2;
          puVar3[1] = uVar2;
        }
        else if (iVar4 == 0xe) {
          iVar4 = FUN_4a09b214(uVar2);
          iVar5 = *(int *)(iVar4 + 0x80);
          iVar4 = thunk_FUN_4a171e1c(*param_3);
          if (iVar5 == iVar4) {
            return;
          }
          iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
          *(int *)(iVar5 + 0x80) = iVar4;
        }
        else if (iVar4 == 0xf) {
          iVar4 = FUN_4a09b214(uVar2);
          iVar5 = *(int *)(iVar4 + 0x84);
          iVar4 = thunk_FUN_4a171e1c(*param_3);
          if (iVar5 == iVar4) {
            return;
          }
          iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
          *(int *)(iVar5 + 0x84) = iVar4;
        }
        else if (iVar4 == 0x10) {
          iVar4 = FUN_4a09b214(uVar2);
          iVar5 = *(int *)(iVar4 + 0x88);
          iVar4 = thunk_FUN_4a171e1c(*param_3);
          if (iVar5 == iVar4) {
            return;
          }
          iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
          *(int *)(iVar5 + 0x88) = iVar4;
        }
        goto LAB_4a15773e;
      }
      if (param_2 + DAT_4a157760 == 0) {
        iVar4 = FUN_4a09b214(uVar2);
        iVar4 = FUN_4a09c88c(iVar4 + 0x60,*param_3);
        if (iVar4 != 0) {
          return;
        }
        iVar4 = FUN_4a09b214(*(undefined4 *)puVar1);
        puVar3 = (undefined4 *)(iVar4 + 0x60);
        goto LAB_4a15761a;
      }
      iVar4 = param_2 + DAT_4a157760 + DAT_4a157764;
      if (iVar4 == 0) {
        iVar4 = FUN_4a09b214(uVar2);
        iVar5 = *(int *)(iVar4 + 0x38);
        iVar4 = thunk_FUN_4a171e1c(*param_3);
        if (iVar5 == iVar4) {
          return;
        }
        iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
        *(int *)(iVar5 + 0x38) = iVar4;
        goto LAB_4a15773e;
      }
      if (iVar4 == 1) {
        iVar4 = FUN_4a09b214(uVar2);
        iVar4 = FUN_4a1656a4(iVar4 + 0x3c,param_3);
        if (iVar4 != 0) {
          return;
        }
        iVar4 = FUN_4a09b214(*(undefined4 *)puVar1);
        FUN_4a165684(iVar4 + 0x3c,param_3);
        goto LAB_4a15773e;
      }
      bVar6 = iVar4 + DAT_4a157768 == 0;
    } while (!bVar6);
    iVar4 = FUN_4a09b214(uVar2);
    iVar5 = *(int *)(iVar4 + 0x50);
    iVar4 = thunk_FUN_4a171e1c(*param_3);
    if (iVar5 == iVar4) {
      return;
    }
    iVar5 = FUN_4a09b214(*(undefined4 *)puVar1);
    *(int *)(iVar5 + 0x50) = iVar4;
  }
LAB_4a15773e:
  host_glTexEnvfv_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a15776c

void FUN_4a15776c(uint param_1,uint param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  puVar1 = PTR_DAT_4a1579c8;
  if (*PTR_DAT_4a1579bc != '\0') {
    bVar7 = param_1 == 0x2300;
    do {
      if (!bVar7) goto LAB_4a1579ac;
      iVar2 = *(int *)PTR_DAT_4a1579c8;
      iVar5 = param_2 - DAT_4a1579c0;
      iVar6 = DAT_4a1579c4 + 0x40;
      piVar4 = (int *)(iVar2 + 0x1fc0);
      if (param_2 == DAT_4a1579c0) {
        if (*(int *)(*piVar4 * 0xd8 + iVar2 + iVar6 + 0x14) == param_3) {
          return;
        }
        iVar2 = FUN_4a09b214();
        *(int *)(iVar2 + 0x8c) = param_3;
        goto LAB_4a1579ac;
      }
      if ((int)DAT_4a1579c0 <= (int)param_2) {
        if (iVar5 == 10) {
          if (*(int *)(*piVar4 * 0xd8 + iVar2 + DAT_4a1579c4 + 0x38) == param_3) {
            return;
          }
          iVar2 = FUN_4a09b214();
          *(int *)(iVar2 + 0x70) = param_3;
        }
        else if (iVar5 < 0xb) {
          if (iVar5 == 1) {
            if (*(int *)(*piVar4 * 0xd8 + iVar2 + iVar6 + 0x18) == param_3) {
              return;
            }
            iVar2 = FUN_4a09b214();
            *(int *)(iVar2 + 0x90) = param_3;
          }
          else if (iVar5 == 2) {
            if (*(int *)(*piVar4 * 0xd8 + iVar2 + iVar6 + 0x1c) == param_3) {
              return;
            }
            iVar2 = FUN_4a09b214();
            *(int *)(iVar2 + 0x94) = param_3;
          }
          else if (iVar5 == 8) {
            if (*(int *)(*piVar4 * 0xd8 + iVar2 + DAT_4a1579c4 + 0x30) == param_3) {
              return;
            }
            iVar2 = FUN_4a09b214();
            *(int *)(iVar2 + 0x68) = param_3;
          }
          else if (iVar5 == 9) {
            if (*(int *)(*piVar4 * 0xd8 + iVar2 + DAT_4a1579c4 + 0x34) == param_3) {
              return;
            }
            iVar2 = FUN_4a09b214();
            *(int *)(iVar2 + 0x6c) = param_3;
          }
        }
        else if (iVar5 == 0x10) {
          if (*(int *)(*piVar4 * 0xd8 + iVar2 + DAT_4a1579c4 + 0x3c) == param_3) {
            return;
          }
          iVar2 = FUN_4a09b214();
          *(int *)(iVar2 + 0x74) = param_3;
        }
        else if (iVar5 == 0x11) {
          if (*(int *)(*piVar4 * 0xd8 + iVar2 + iVar6) == param_3) {
            return;
          }
          iVar2 = FUN_4a09b214();
          *(int *)(iVar2 + 0x78) = param_3;
        }
        else if (iVar5 == 0x12) {
          if (*(int *)(*piVar4 * 0xd8 + iVar2 + iVar6 + 4) == param_3) {
            return;
          }
          iVar2 = FUN_4a09b214();
          *(int *)(iVar2 + 0x7c) = param_3;
        }
        goto LAB_4a1579ac;
      }
      iVar5 = param_2 - DAT_4a1579cc;
      if (param_2 == DAT_4a1579cc) {
        iVar2 = FUN_4a09b214();
        iVar2 = FUN_4a09c8a8(iVar2 + 0x58,param_3);
        if (iVar2 != 0) {
          return;
        }
        iVar2 = FUN_4a09b214(*(undefined4 *)puVar1);
        puVar3 = (undefined4 *)(iVar2 + 0x58);
LAB_4a1578ba:
        *puVar3 = 1;
LAB_4a15795c:
        puVar3[1] = param_3;
        goto LAB_4a1579ac;
      }
      if ((int)DAT_4a1579cc <= (int)param_2) {
        if (iVar5 == 0xd) {
          if (*(int *)(*piVar4 * 0xd8 + iVar2 + iVar6 + 8) == param_3) {
            return;
          }
          iVar2 = FUN_4a09b214();
          *(int *)(iVar2 + 0x80) = param_3;
        }
        else {
          if (iVar5 == 0xe) {
            if (*(int *)(*piVar4 * 0xd8 + iVar2 + iVar6 + 0xc) == param_3) {
              return;
            }
            iVar2 = FUN_4a09b214();
            puVar3 = (undefined4 *)(iVar2 + 0x80);
            goto LAB_4a15795c;
          }
          if (iVar5 == 0xf) {
            if (*(int *)(*piVar4 * 0xd8 + iVar2 + iVar6 + 0x10) == param_3) {
              return;
            }
            iVar2 = FUN_4a09b214();
            *(int *)(iVar2 + 0x88) = param_3;
          }
        }
        goto LAB_4a1579ac;
      }
      if (param_2 + DAT_4a1579d0 == 0) {
        iVar2 = FUN_4a09b214();
        iVar2 = FUN_4a09c8a8(iVar2 + 0x60,param_3);
        if (iVar2 != 0) {
          return;
        }
        iVar2 = FUN_4a09b214(*(undefined4 *)puVar1);
        puVar3 = (undefined4 *)(iVar2 + 0x60);
        goto LAB_4a1578ba;
      }
      iVar5 = param_2 + DAT_4a1579d0 + DAT_4a1579d4;
      if (iVar5 == 0) {
        if (*(int *)(*piVar4 * 0xd8 + iVar2 + DAT_4a1579c4) == param_3) {
          return;
        }
        iVar2 = FUN_4a09b214();
        *(int *)(iVar2 + 0x38) = param_3;
        goto LAB_4a1579ac;
      }
      iVar5 = iVar5 + DAT_4a1579d8;
      if (iVar5 == 0) {
        if (*(int *)(*piVar4 * 0xd8 + iVar2 + DAT_4a1579c4 + 0x18) == param_3) {
          return;
        }
        iVar2 = FUN_4a09b214();
        *(int *)(iVar2 + 0x50) = param_3;
        goto LAB_4a1579ac;
      }
      bVar7 = iVar5 == 1;
    } while (!bVar7);
    if (*(int *)(*piVar4 * 0xd8 + iVar2 + DAT_4a1579c4 + 0x1c) == param_3) {
      return;
    }
    iVar2 = FUN_4a09b214();
    *(int *)(iVar2 + 0x54) = param_3;
  }
LAB_4a1579ac:
  host_glTexEnvi_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a1579dc

void FUN_4a1579dc(uint param_1,uint param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  puVar1 = PTR_DAT_4a157c38;
  if (*PTR_DAT_4a157c2c != '\0') {
    bVar7 = param_1 == 0x2300;
    do {
      if (!bVar7) goto LAB_4a157c1c;
      iVar2 = *(int *)PTR_DAT_4a157c38;
      iVar5 = param_2 - DAT_4a157c30;
      iVar6 = DAT_4a157c34 + 0x40;
      piVar4 = (int *)(iVar2 + 0x1fc0);
      if (param_2 == DAT_4a157c30) {
        if (*(int *)(*piVar4 * 0xd8 + iVar2 + iVar6 + 0x14) == param_3) {
          return;
        }
        iVar2 = FUN_4a09b214();
        *(int *)(iVar2 + 0x8c) = param_3;
        goto LAB_4a157c1c;
      }
      if ((int)DAT_4a157c30 <= (int)param_2) {
        if (iVar5 == 10) {
          if (*(int *)(*piVar4 * 0xd8 + iVar2 + DAT_4a157c34 + 0x38) == param_3) {
            return;
          }
          iVar2 = FUN_4a09b214();
          *(int *)(iVar2 + 0x70) = param_3;
        }
        else if (iVar5 < 0xb) {
          if (iVar5 == 1) {
            if (*(int *)(*piVar4 * 0xd8 + iVar2 + iVar6 + 0x18) == param_3) {
              return;
            }
            iVar2 = FUN_4a09b214();
            *(int *)(iVar2 + 0x90) = param_3;
          }
          else if (iVar5 == 2) {
            if (*(int *)(*piVar4 * 0xd8 + iVar2 + iVar6 + 0x1c) == param_3) {
              return;
            }
            iVar2 = FUN_4a09b214();
            *(int *)(iVar2 + 0x94) = param_3;
          }
          else if (iVar5 == 8) {
            if (*(int *)(*piVar4 * 0xd8 + iVar2 + DAT_4a157c34 + 0x30) == param_3) {
              return;
            }
            iVar2 = FUN_4a09b214();
            *(int *)(iVar2 + 0x68) = param_3;
          }
          else if (iVar5 == 9) {
            if (*(int *)(*piVar4 * 0xd8 + iVar2 + DAT_4a157c34 + 0x34) == param_3) {
              return;
            }
            iVar2 = FUN_4a09b214();
            *(int *)(iVar2 + 0x6c) = param_3;
          }
        }
        else if (iVar5 == 0x10) {
          if (*(int *)(*piVar4 * 0xd8 + iVar2 + DAT_4a157c34 + 0x3c) == param_3) {
            return;
          }
          iVar2 = FUN_4a09b214();
          *(int *)(iVar2 + 0x74) = param_3;
        }
        else if (iVar5 == 0x11) {
          if (*(int *)(*piVar4 * 0xd8 + iVar2 + iVar6) == param_3) {
            return;
          }
          iVar2 = FUN_4a09b214();
          *(int *)(iVar2 + 0x78) = param_3;
        }
        else if (iVar5 == 0x12) {
          if (*(int *)(*piVar4 * 0xd8 + iVar2 + iVar6 + 4) == param_3) {
            return;
          }
          iVar2 = FUN_4a09b214();
          *(int *)(iVar2 + 0x7c) = param_3;
        }
        goto LAB_4a157c1c;
      }
      iVar5 = param_2 - DAT_4a157c3c;
      if (param_2 == DAT_4a157c3c) {
        iVar2 = FUN_4a09b214();
        iVar2 = FUN_4a09c8a8(iVar2 + 0x58,param_3);
        if (iVar2 != 0) {
          return;
        }
        iVar2 = FUN_4a09b214(*(undefined4 *)puVar1);
        puVar3 = (undefined4 *)(iVar2 + 0x58);
LAB_4a157b2a:
        *puVar3 = 1;
LAB_4a157bcc:
        puVar3[1] = param_3;
        goto LAB_4a157c1c;
      }
      if ((int)DAT_4a157c3c <= (int)param_2) {
        if (iVar5 == 0xd) {
          if (*(int *)(*piVar4 * 0xd8 + iVar2 + iVar6 + 8) == param_3) {
            return;
          }
          iVar2 = FUN_4a09b214();
          *(int *)(iVar2 + 0x80) = param_3;
        }
        else {
          if (iVar5 == 0xe) {
            if (*(int *)(*piVar4 * 0xd8 + iVar2 + iVar6 + 0xc) == param_3) {
              return;
            }
            iVar2 = FUN_4a09b214();
            puVar3 = (undefined4 *)(iVar2 + 0x80);
            goto LAB_4a157bcc;
          }
          if (iVar5 == 0xf) {
            if (*(int *)(*piVar4 * 0xd8 + iVar2 + iVar6 + 0x10) == param_3) {
              return;
            }
            iVar2 = FUN_4a09b214();
            *(int *)(iVar2 + 0x88) = param_3;
          }
        }
        goto LAB_4a157c1c;
      }
      if (param_2 + DAT_4a157c40 == 0) {
        iVar2 = FUN_4a09b214();
        iVar2 = FUN_4a09c8a8(iVar2 + 0x60,param_3);
        if (iVar2 != 0) {
          return;
        }
        iVar2 = FUN_4a09b214(*(undefined4 *)puVar1);
        puVar3 = (undefined4 *)(iVar2 + 0x60);
        goto LAB_4a157b2a;
      }
      iVar5 = param_2 + DAT_4a157c40 + DAT_4a157c44;
      if (iVar5 == 0) {
        if (*(int *)(*piVar4 * 0xd8 + iVar2 + DAT_4a157c34) == param_3) {
          return;
        }
        iVar2 = FUN_4a09b214();
        *(int *)(iVar2 + 0x38) = param_3;
        goto LAB_4a157c1c;
      }
      iVar5 = iVar5 + DAT_4a157c48;
      if (iVar5 == 0) {
        if (*(int *)(*piVar4 * 0xd8 + iVar2 + DAT_4a157c34 + 0x18) == param_3) {
          return;
        }
        iVar2 = FUN_4a09b214();
        *(int *)(iVar2 + 0x50) = param_3;
        goto LAB_4a157c1c;
      }
      bVar7 = iVar5 == 1;
    } while (!bVar7);
    if (*(int *)(*piVar4 * 0xd8 + iVar2 + DAT_4a157c34 + 0x1c) == param_3) {
      return;
    }
    iVar2 = FUN_4a09b214();
    *(int *)(iVar2 + 0x54) = param_3;
  }
LAB_4a157c1c:
  host_glTexEnvx_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a157c4c

void FUN_4a157c4c(uint param_1,uint param_2,int *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  puVar1 = PTR_DAT_4a157f18;
  if (*PTR_DAT_4a157f0c != '\0') {
    bVar7 = param_1 == 0x2300;
    do {
      if (!bVar7) goto LAB_4a157efa;
      iVar2 = *(int *)PTR_DAT_4a157f18;
      iVar5 = param_2 - DAT_4a157f10;
      iVar6 = DAT_4a157f14 + 0x40;
      piVar4 = (int *)(iVar2 + 0x1fc0);
      if (param_2 == DAT_4a157f10) {
        if (*(int *)(*piVar4 * 0xd8 + iVar2 + iVar6 + 0x14) == *param_3) {
          return;
        }
        iVar2 = FUN_4a09b214();
        *(int *)(iVar2 + 0x8c) = *param_3;
        goto LAB_4a157efa;
      }
      if ((int)DAT_4a157f10 <= (int)param_2) {
        if (iVar5 == 10) {
          if (*(int *)(*piVar4 * 0xd8 + iVar2 + DAT_4a157f14 + 0x38) == *param_3) {
            return;
          }
          iVar2 = FUN_4a09b214();
          *(int *)(iVar2 + 0x70) = *param_3;
        }
        else if (iVar5 < 0xb) {
          if (iVar5 == 1) {
            if (*(int *)(*piVar4 * 0xd8 + iVar2 + iVar6 + 0x18) == *param_3) {
              return;
            }
            iVar2 = FUN_4a09b214();
            *(int *)(iVar2 + 0x90) = *param_3;
          }
          else if (iVar5 == 2) {
            if (*(int *)(*piVar4 * 0xd8 + iVar2 + iVar6 + 0x1c) == *param_3) {
              return;
            }
            iVar2 = FUN_4a09b214();
            *(int *)(iVar2 + 0x94) = *param_3;
          }
          else if (iVar5 == 8) {
            if (*(int *)(*piVar4 * 0xd8 + iVar2 + DAT_4a157f14 + 0x30) == *param_3) {
              return;
            }
            iVar2 = FUN_4a09b214();
            *(int *)(iVar2 + 0x68) = *param_3;
          }
          else if (iVar5 == 9) {
            if (*(int *)(*piVar4 * 0xd8 + iVar2 + DAT_4a157f14 + 0x34) == *param_3) {
              return;
            }
            iVar2 = FUN_4a09b214();
            *(int *)(iVar2 + 0x6c) = *param_3;
          }
        }
        else if (iVar5 == 0x10) {
          if (*(int *)(*piVar4 * 0xd8 + iVar2 + DAT_4a157f14 + 0x3c) == *param_3) {
            return;
          }
          iVar2 = FUN_4a09b214();
          *(int *)(iVar2 + 0x74) = *param_3;
        }
        else if (iVar5 == 0x11) {
          if (*(int *)(*piVar4 * 0xd8 + iVar2 + iVar6) == *param_3) {
            return;
          }
          iVar2 = FUN_4a09b214();
          *(int *)(iVar2 + 0x78) = *param_3;
        }
        else if (iVar5 == 0x12) {
          if (*(int *)(*piVar4 * 0xd8 + iVar2 + iVar6 + 4) == *param_3) {
            return;
          }
          iVar2 = FUN_4a09b214();
          *(int *)(iVar2 + 0x7c) = *param_3;
        }
        goto LAB_4a157efa;
      }
      iVar5 = param_2 - DAT_4a157f1c;
      if (param_2 == DAT_4a157f1c) {
        if (*(int *)(*piVar4 * 0xd8 + iVar2 + DAT_4a157f14 + 0x1c) == *param_3) {
          return;
        }
        iVar2 = FUN_4a09b214();
        *(int *)(iVar2 + 0x54) = *param_3;
        goto LAB_4a157efa;
      }
      if ((int)DAT_4a157f1c <= (int)param_2) {
        if (iVar5 == 1) {
          iVar2 = FUN_4a09b214();
          iVar2 = FUN_4a09c8a8(iVar2 + 0x58,*param_3);
          if (iVar2 != 0) {
            return;
          }
          iVar2 = FUN_4a09b214(*(undefined4 *)puVar1);
          puVar3 = (undefined4 *)(iVar2 + 0x58);
          goto LAB_4a157de0;
        }
        if (iVar5 == 0xe) {
          if (*(int *)(*piVar4 * 0xd8 + iVar2 + iVar6 + 8) == *param_3) {
            return;
          }
          iVar2 = FUN_4a09b214();
          *(int *)(iVar2 + 0x80) = *param_3;
        }
        else if (iVar5 == 0xf) {
          if (*(int *)(*piVar4 * 0xd8 + iVar2 + iVar6 + 0xc) == *param_3) {
            return;
          }
          iVar2 = FUN_4a09b214();
          iVar5 = *param_3;
          puVar3 = (undefined4 *)(iVar2 + 0x80);
LAB_4a157e9c:
          puVar3[1] = iVar5;
        }
        else if (iVar5 == 0x10) {
          if (*(int *)(*piVar4 * 0xd8 + iVar2 + iVar6 + 0x10) == *param_3) {
            return;
          }
          iVar2 = FUN_4a09b214();
          *(int *)(iVar2 + 0x88) = *param_3;
        }
        goto LAB_4a157efa;
      }
      if (param_2 + DAT_4a157f20 == 0) {
        iVar2 = FUN_4a09b214();
        iVar2 = FUN_4a09c8a8(iVar2 + 0x60,*param_3);
        if (iVar2 != 0) {
          return;
        }
        iVar2 = FUN_4a09b214(*(undefined4 *)puVar1);
        puVar3 = (undefined4 *)(iVar2 + 0x60);
LAB_4a157de0:
        iVar5 = *param_3;
        *puVar3 = 1;
        goto LAB_4a157e9c;
      }
      iVar5 = param_2 + DAT_4a157f20 + DAT_4a157f24;
      if (iVar5 == 0) {
        if (*(int *)(*piVar4 * 0xd8 + iVar2 + DAT_4a157f14) == *param_3) {
          return;
        }
        iVar2 = FUN_4a09b214();
        *(int *)(iVar2 + 0x38) = *param_3;
        goto LAB_4a157efa;
      }
      if (iVar5 == 1) {
        iVar2 = FUN_4a09b214();
        iVar2 = FUN_4a1656c4(iVar2 + 0x3c,param_3);
        if (iVar2 != 0) {
          return;
        }
        iVar2 = FUN_4a09b214(*(undefined4 *)puVar1);
        FUN_4a165694(iVar2 + 0x3c,param_3);
        goto LAB_4a157efa;
      }
      bVar7 = iVar5 + DAT_4a157f28 == 0;
    } while (!bVar7);
    if (*(int *)(*piVar4 * 0xd8 + iVar2 + DAT_4a157f14 + 0x18) == *param_3) {
      return;
    }
    iVar2 = FUN_4a09b214();
    *(int *)(iVar2 + 0x50) = *param_3;
  }
LAB_4a157efa:
  host_glTexEnvxv_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a157f2c

void FUN_4a157f2c(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if ((*(int *)(PTR_DAT_4a157f78 + 0x28) != 0) &&
     (iVar1 = FUN_4a1653f4(PTR_DAT_4a157f80 + -0x14,
                           *(undefined4 *)
                            (PTR_DAT_4a157f80 +
                            (uint)(param_1 != DAT_4a157f84) * 4 + *(int *)PTR_DAT_4a157f7c * 8)),
     iVar1 != 0)) {
    FUN_4a0692c8(iVar1,param_2,param_3);
  }
  host_glTexParameteri_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a157f88

void FUN_4a157f88(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 uint param_7,uint param_8,void *param_9)

{
  int iVar1;
  
  if ((*(int *)(PTR_DAT_4a158000 + 0x28) != 0) &&
     (iVar1 = FUN_4a1653f4(PTR_DAT_4a158008 + -0x14,
                           *(undefined4 *)
                            (PTR_DAT_4a158008 +
                            (uint)(param_1 != DAT_4a15800c) * 4 + *(int *)PTR_DAT_4a158004 * 8)),
     iVar1 != 0)) {
    FUN_4a06930c(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  host_glTexSubImage2D_thumb
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



// Address: 4a158010

void FUN_4a158010(float param_1,float param_2,float param_3)

{
  host_glTranslatef_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a15801c

void FUN_4a15801c(int param_1,int param_2,int param_3)

{
  host_glTranslatex_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a158028

void FUN_4a158028(int param_1,float param_2)

{
  if (((*(int *)(PTR_DAT_4a158058 + 0x34) != 0) && (*(int *)(PTR_DAT_4a15805c + 4) != 0)) &&
     (-1 < param_1)) {
    FUN_4a097b98(*(int *)(PTR_DAT_4a15805c + 4),param_1,param_2);
  }
  host_glUniform1f_thumb(param_1,param_2);
  return;
}



// Address: 4a158060

void FUN_4a158060(int param_1,int param_2,void *param_3)

{
  if (((*(int *)(PTR_DAT_4a158098 + 0x34) != 0) && (*(int *)(PTR_DAT_4a15809c + 4) != 0)) &&
     (-1 < param_1)) {
    FUN_4a097c3c(*(int *)(PTR_DAT_4a15809c + 4),param_1,param_2,param_3);
  }
  host_glUniform1fv_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a1580a0

void FUN_4a1580a0(int param_1,int param_2)

{
  if (((*(int *)(PTR_DAT_4a1580d0 + 0x34) != 0) && (*(int *)(PTR_DAT_4a1580d4 + 4) != 0)) &&
     (-1 < param_1)) {
    FUN_4a097bb2(*(int *)(PTR_DAT_4a1580d4 + 4),param_1,param_2);
  }
  host_glUniform1i_thumb(param_1,param_2);
  return;
}



// Address: 4a1580d8

void FUN_4a1580d8(int param_1,int param_2,void *param_3)

{
  if (((*(int *)(PTR_DAT_4a158110 + 0x34) != 0) && (*(int *)(PTR_DAT_4a158114 + 4) != 0)) &&
     (-1 < param_1)) {
    FUN_4a097c56(*(int *)(PTR_DAT_4a158114 + 4),param_1,param_2,param_3);
  }
  host_glUniform1iv_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a158118

void FUN_4a158118(int param_1,float param_2,float param_3)

{
  if (((*(int *)(PTR_DAT_4a158150 + 0x34) != 0) && (*(int *)(PTR_DAT_4a158154 + 4) != 0)) &&
     (-1 < param_1)) {
    FUN_4a097bcc(*(int *)(PTR_DAT_4a158154 + 4),param_1,param_2,param_3);
  }
  host_glUniform2f_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a158158

void FUN_4a158158(int param_1,int param_2,void *param_3)

{
  if (((*(int *)(PTR_DAT_4a158190 + 0x34) != 0) && (*(int *)(PTR_DAT_4a158194 + 4) != 0)) &&
     (-1 < param_1)) {
    FUN_4a097c70(*(int *)(PTR_DAT_4a158194 + 4),param_1,param_2,param_3);
  }
  host_glUniform2fv_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a158198

void FUN_4a158198(int param_1,int param_2,void *param_3)

{
  if (((*(int *)(PTR_DAT_4a1581d0 + 0x34) != 0) && (*(int *)(PTR_DAT_4a1581d4 + 4) != 0)) &&
     (-1 < param_1)) {
    FUN_4a097c8a(*(int *)(PTR_DAT_4a1581d4 + 4),param_1,param_2,param_3);
  }
  host_glUniform2iv_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a1581d8

void FUN_4a1581d8(int param_1,float param_2,float param_3,float param_4)

{
  if (((*(int *)(PTR_DAT_4a158214 + 0x34) != 0) && (*(int *)(PTR_DAT_4a158218 + 4) != 0)) &&
     (-1 < param_1)) {
    FUN_4a097bea(*(int *)(PTR_DAT_4a158218 + 4),param_1,param_2,param_3,param_4);
  }
  host_glUniform3f_thumb(param_1,param_2,param_3,param_4);
  return;
}



// Address: 4a15821c

void FUN_4a15821c(int param_1,int param_2,void *param_3)

{
  if (((*(int *)(PTR_DAT_4a158254 + 0x34) != 0) && (*(int *)(PTR_DAT_4a158258 + 4) != 0)) &&
     (-1 < param_1)) {
    FUN_4a097ca4(*(int *)(PTR_DAT_4a158258 + 4),param_1,param_2,param_3);
  }
  host_glUniform3fv_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a15825c

void FUN_4a15825c(int param_1,int param_2,void *param_3)

{
  if (((*(int *)(PTR_DAT_4a158294 + 0x34) != 0) && (*(int *)(PTR_DAT_4a158298 + 4) != 0)) &&
     (-1 < param_1)) {
    FUN_4a097cbe(*(int *)(PTR_DAT_4a158298 + 4),param_1,param_2,param_3);
  }
  host_glUniform3iv_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a15829c

void FUN_4a15829c(int param_1,float param_2,float param_3,float param_4,float param_5)

{
  if (((*(int *)(PTR_DAT_4a1582e0 + 0x34) != 0) && (*(int *)(PTR_DAT_4a1582e4 + 4) != 0)) &&
     (-1 < param_1)) {
    FUN_4a097c0a(*(int *)(PTR_DAT_4a1582e4 + 4),param_1,param_2,param_3,param_4,param_5);
  }
  host_glUniform4f_thumb(param_1,param_2,param_3,param_4,param_5);
  return;
}



// Address: 4a1582e8

void FUN_4a1582e8(int param_1,int param_2,void *param_3)

{
  if (((*(int *)(PTR_DAT_4a158320 + 0x34) != 0) && (*(int *)(PTR_DAT_4a158324 + 4) != 0)) &&
     (-1 < param_1)) {
    FUN_4a097cd8(*(int *)(PTR_DAT_4a158324 + 4),param_1,param_2,param_3);
  }
  host_glUniform4fv_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a158328

void FUN_4a158328(int param_1,int param_2,void *param_3)

{
  if (((*(int *)(PTR_DAT_4a158360 + 0x34) != 0) && (*(int *)(PTR_DAT_4a158364 + 4) != 0)) &&
     (-1 < param_1)) {
    FUN_4a097cf2(*(int *)(PTR_DAT_4a158364 + 4),param_1,param_2,param_3);
  }
  host_glUniform4iv_thumb(param_1,param_2,param_3);
  return;
}



// Address: 4a158368

void FUN_4a158368(int param_1,int param_2,undefined4 param_3,void *param_4)

{
  if (((*(int *)(PTR_DAT_4a1583a4 + 0x34) != 0) && (*(int *)(PTR_DAT_4a1583a8 + 4) != 0)) &&
     (-1 < param_1)) {
    FUN_4a097d44(*(int *)(PTR_DAT_4a1583a8 + 4),param_1,param_2,param_3,param_4);
  }
  host_glUniformMatrix2fv_thumb(param_1,param_2,(uchar)param_3,param_4);
  return;
}



// Address: 4a1583ac

void FUN_4a1583ac(int param_1,int param_2,undefined4 param_3,void *param_4)

{
  if (((*(int *)(PTR_DAT_4a1583e8 + 0x34) != 0) && (*(int *)(PTR_DAT_4a1583ec + 4) != 0)) &&
     (-1 < param_1)) {
    FUN_4a097d5e(*(int *)(PTR_DAT_4a1583ec + 4),param_1,param_2,param_3,param_4);
  }
  host_glUniformMatrix3fv_thumb(param_1,param_2,(uchar)param_3,param_4);
  return;
}



// Address: 4a1583f0

void FUN_4a1583f0(int param_1,int param_2,undefined4 param_3,void *param_4)

{
  if (((*(int *)(PTR_DAT_4a15842c + 0x34) != 0) && (*(int *)(PTR_DAT_4a158430 + 4) != 0)) &&
     (-1 < param_1)) {
    FUN_4a097d78(*(int *)(PTR_DAT_4a158430 + 4),param_1,param_2,param_3,param_4);
  }
  host_glUniformMatrix4fv_thumb(param_1,param_2,(uchar)param_3,param_4);
  return;
}



// Address: 4a158434

void FUN_4a158434(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  if (*PTR_DAT_4a158488 != '\0') {
    if (*(uint *)(*(int *)PTR_DAT_4a15848c + 0x2200) == param_1) {
      return;
    }
    *(uint *)(*(int *)PTR_DAT_4a15848c + 0x2200) = param_1;
  }
  puVar2 = PTR_DAT_4a158494;
  puVar1 = PTR_DAT_4a158490;
  *(uint *)(PTR_DAT_4a158490 + 8) = param_1;
  if (*(int *)(puVar2 + 0x34) != 0) {
    uVar3 = FUN_4a1654c8(PTR_DAT_4a158498,param_1);
    *(undefined4 *)(puVar1 + 4) = uVar3;
  }
  if (*(int *)(puVar2 + 0x20) != 0) {
    param_1 = *(uint *)(*(int *)PTR_DAT_4a158498 + param_1 * 8);
  }
  host_glUseProgram_thumb(param_1);
  return;
}



// Address: 4a15849c

void FUN_4a15849c(uint param_1,int param_2,uint param_3,uint param_4,int param_5,void *param_6)

{
  int *piVar1;
  int iVar2;
  
  if (*PTR_DAT_4a158514 != '\0') {
    iVar2 = *(int *)PTR_DAT_4a158518;
    piVar1 = (int *)(param_1 * 0x18 + iVar2 + DAT_4a15851c);
    if ((((piVar1[1] == param_2) && (piVar1[2] == param_3)) && (*(byte *)(piVar1 + 3) == param_4))
       && (((piVar1[4] == param_5 && ((void *)piVar1[5] == param_6)) &&
           (*piVar1 == *(int *)(iVar2 + 0x2104))))) {
      return;
    }
    piVar1[1] = param_2;
    piVar1[2] = param_3;
    *(uchar *)(piVar1 + 3) = (uchar)param_4;
    piVar1[5] = (int)param_6;
    piVar1[4] = param_5;
    *piVar1 = *(int *)(iVar2 + 0x2104);
  }
  host_glVertexAttribPointer_thumb(param_1,param_2,param_3,(uchar)param_4,param_5,param_6);
  return;
}



// Address: 4a158520

void FUN_4a158520(int param_1,uint param_2,int param_3,void *param_4)

{
  int *piVar1;
  int iVar2;
  
  if (*PTR_DAT_4a158570 != '\0') {
    iVar2 = *(int *)PTR_DAT_4a158574;
    piVar1 = (int *)(iVar2 + DAT_4a158578);
    if ((((piVar1[1] == param_1) && (piVar1[2] == param_2)) && (piVar1[4] == param_3)) &&
       (((void *)piVar1[5] == param_4 && (*piVar1 == *(int *)(iVar2 + 0x2104))))) {
      return;
    }
    piVar1[5] = (int)param_4;
    piVar1[4] = param_3;
    piVar1[1] = param_1;
    piVar1[2] = param_2;
    *piVar1 = *(int *)(iVar2 + 0x2104);
  }
  host_glVertexPointer_thumb(param_1,param_2,param_3,param_4);
  return;
}



// Address: 4a15857c

undefined8 FUN_4a15857c(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint *puVar3;
  uint *puVar4;
  byte *pbVar5;
  uint uVar6;
  byte bVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  byte bVar10;
  uint uVar11;
  undefined4 uVar12;
  uint in_r12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  bool bVar16;
  
  uVar6 = param_3 * 0x80;
  pbVar2 = param_2;
  if (3 < uVar6) {
    uVar11 = (uint)param_2 & 3;
    in_r12 = uVar11;
    if (uVar11 != 0) {
      bVar7 = *param_1;
      pbVar2 = param_1 + 1;
      if (uVar11 < 3) {
        pbVar2 = param_1 + 2;
        in_r12 = (uint)param_1[1];
      }
      *param_2 = bVar7;
      param_1 = pbVar2;
      if (uVar11 < 2) {
        param_1 = pbVar2 + 1;
        bVar7 = *pbVar2;
      }
      pbVar2 = param_2 + 1;
      if (uVar11 < 3) {
        pbVar2 = param_2 + 2;
        param_2[1] = (byte)in_r12;
      }
      uVar6 = (uVar6 + uVar11) - 4;
      param_2 = pbVar2;
      if (uVar11 < 2) {
        param_2 = pbVar2 + 1;
        *pbVar2 = bVar7;
      }
    }
    pbVar2 = (byte *)((uint)param_1 & 3);
    if (pbVar2 == (byte *)0x0) {
      bVar15 = 0x1f < uVar6;
      uVar6 = uVar6 - 0x20;
      uVar9 = 0;
      if (bVar15) {
        do {
          if (bVar15) {
            uVar9 = *(undefined4 *)(param_1 + 4);
            uVar12 = *(undefined4 *)(param_1 + 8);
            uVar13 = *(undefined4 *)(param_1 + 0xc);
            *(undefined4 *)param_2 = *(undefined4 *)param_1;
            *(undefined4 *)(param_2 + 4) = uVar9;
            *(undefined4 *)(param_2 + 8) = uVar12;
            *(undefined4 *)(param_2 + 0xc) = uVar13;
            uVar9 = *(undefined4 *)(param_1 + 0x10);
            uVar12 = *(undefined4 *)(param_1 + 0x14);
            uVar13 = *(undefined4 *)(param_1 + 0x18);
            uVar14 = *(undefined4 *)(param_1 + 0x1c);
            param_1 = param_1 + 0x20;
            *(undefined4 *)(param_2 + 0x10) = uVar9;
            *(undefined4 *)(param_2 + 0x14) = uVar12;
            *(undefined4 *)(param_2 + 0x18) = uVar13;
            *(undefined4 *)(param_2 + 0x1c) = uVar14;
            param_2 = param_2 + 0x20;
            bVar15 = 0x1f < uVar6;
            uVar6 = uVar6 - 0x20;
          }
        } while (bVar15);
      }
      if ((bool)((byte)(uVar6 >> 4) & 1)) {
        uVar9 = *(undefined4 *)param_1;
        uVar12 = *(undefined4 *)(param_1 + 4);
        uVar13 = *(undefined4 *)(param_1 + 8);
        uVar14 = *(undefined4 *)(param_1 + 0xc);
        param_1 = param_1 + 0x10;
        *(undefined4 *)param_2 = uVar9;
        *(undefined4 *)(param_2 + 4) = uVar12;
        *(undefined4 *)(param_2 + 8) = uVar13;
        *(undefined4 *)(param_2 + 0xc) = uVar14;
        param_2 = param_2 + 0x10;
      }
      if ((int)(uVar6 << 0x1c) < 0) {
        uVar9 = *(undefined4 *)param_1;
        uVar12 = *(undefined4 *)(param_1 + 4);
        param_1 = param_1 + 8;
        *(undefined4 *)param_2 = uVar9;
        *(undefined4 *)(param_2 + 4) = uVar12;
        param_2 = param_2 + 8;
      }
      pbVar1 = param_2;
      pbVar2 = param_1;
      if ((bool)((byte)(uVar6 >> 2) & 1)) {
        pbVar2 = param_1 + 4;
        uVar9 = *(undefined4 *)param_1;
        pbVar1 = param_2 + 4;
        *(undefined4 *)param_2 = uVar9;
      }
      uVar8 = (undefined2)uVar9;
      if ((uVar6 & 3) != 0) {
        bVar16 = (bool)((byte)(uVar6 >> 1) & 1);
        uVar6 = uVar6 << 0x1f;
        bVar15 = (int)uVar6 < 0;
        pbVar5 = pbVar2;
        if (bVar16) {
          pbVar5 = pbVar2 + 2;
          uVar8 = *(undefined2 *)pbVar2;
        }
        pbVar2 = pbVar5;
        if (bVar15) {
          pbVar2 = pbVar5 + 1;
          uVar6 = (uint)*pbVar5;
        }
        pbVar5 = pbVar1;
        if (bVar16) {
          pbVar5 = pbVar1 + 2;
          *(undefined2 *)pbVar1 = uVar8;
        }
        pbVar1 = pbVar5;
        if (bVar15) {
          pbVar1 = pbVar5 + 1;
          *pbVar5 = (byte)uVar6;
        }
        return CONCAT44(pbVar2,pbVar1);
      }
      return CONCAT44(pbVar2,pbVar1);
    }
    bVar15 = 3 < uVar6;
    uVar6 = uVar6 - 4;
    if (bVar15) {
      puVar3 = (uint *)(param_1 + -(int)pbVar2);
      in_r12 = *puVar3;
      pbVar1 = param_2;
      if (pbVar2 == (byte *)0x2) {
        do {
          puVar4 = puVar3;
          uVar11 = in_r12 >> 0x10;
          puVar3 = puVar4 + 1;
          in_r12 = *puVar3;
          bVar15 = 3 < uVar6;
          uVar6 = uVar6 - 4;
          pbVar2 = (byte *)(uVar11 | in_r12 << 0x10);
          param_2 = pbVar1 + 4;
          *(byte **)pbVar1 = pbVar2;
          pbVar1 = param_2;
        } while (bVar15);
        param_1 = (byte *)((int)puVar4 + 6);
      }
      else if (pbVar2 < (byte *)0x3) {
        do {
          puVar4 = puVar3;
          uVar11 = in_r12 >> 8;
          puVar3 = puVar4 + 1;
          in_r12 = *puVar3;
          bVar15 = 3 < uVar6;
          uVar6 = uVar6 - 4;
          pbVar2 = (byte *)(uVar11 | in_r12 << 0x18);
          param_2 = pbVar1 + 4;
          *(byte **)pbVar1 = pbVar2;
          pbVar1 = param_2;
        } while (bVar15);
        param_1 = (byte *)((int)puVar4 + 5);
      }
      else {
        do {
          puVar4 = puVar3;
          uVar11 = in_r12 >> 0x18;
          puVar3 = puVar4 + 1;
          in_r12 = *puVar3;
          bVar15 = 3 < uVar6;
          uVar6 = uVar6 - 4;
          pbVar2 = (byte *)(uVar11 | in_r12 << 8);
          param_2 = pbVar1 + 4;
          *(byte **)pbVar1 = pbVar2;
          pbVar1 = param_2;
        } while (bVar15);
        param_1 = (byte *)((int)puVar4 + 7);
      }
    }
  }
  bVar10 = (byte)in_r12;
  bVar7 = (byte)pbVar2;
  bVar16 = (bool)((byte)(uVar6 >> 1) & 1);
  uVar6 = uVar6 << 0x1f;
  bVar15 = (int)uVar6 < 0;
  if (bVar16) {
    pbVar2 = param_1 + 1;
    bVar7 = *param_1;
    param_1 = param_1 + 2;
    bVar10 = *pbVar2;
  }
  pbVar2 = param_1;
  if (bVar15) {
    pbVar2 = param_1 + 1;
    uVar6 = (uint)*param_1;
  }
  if (bVar16) {
    pbVar1 = param_2 + 1;
    *param_2 = bVar7;
    param_2 = param_2 + 2;
    *pbVar1 = bVar10;
  }
  pbVar1 = param_2;
  if (bVar15) {
    pbVar1 = param_2 + 1;
    *param_2 = (byte)uVar6;
  }
  return CONCAT44(pbVar2,pbVar1);
}



// Address: 4a158590

void FUN_4a158590(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(param_1 + param_2 * 4);
  puVar2 = (undefined4 *)(param_3 + param_4 * 4);
  if (0 < param_5) {
    do {
      FUN_4a000f84(*puVar2,*puVar1,param_6);
      param_5 = param_5 + -1;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (0 < param_5);
    return;
  }
  return;
}



// Address: 4a1585d4

longlong FUN_4a1585d4(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  
  uVar1 = (param_1 + param_2) - 1;
  if ((int)(uVar1 | param_2) < 0) {
    uVar5 = param_2 & 0x80000000;
    if ((int)uVar5 < 0) {
      param_2 = -param_2;
    }
    uVar4 = uVar5 ^ (int)uVar1 >> 0x20;
    if (SUB41(uVar1 >> 0x1f,0)) {
      uVar1 = -uVar1;
    }
    uVar2 = param_2;
    if (uVar1 >> 4 < param_2) goto LAB_4a0017bc;
    if (uVar1 >> 8 < param_2) goto LAB_4a00178c;
    uVar2 = param_2 << 6;
    uVar5 = 0xfc000000;
    if (uVar1 >> 8 < uVar2) goto LAB_4a00178c;
    uVar2 = param_2 << 0xc;
    uVar5 = 0xfff00000;
    if (uVar1 >> 8 < uVar2) goto LAB_4a00178c;
    uVar2 = param_2 << 0x12;
    uVar5 = 0xffffc000;
    if (uVar2 <= uVar1 >> 8) {
      uVar2 = param_2 << 0x18;
      uVar5 = 0xffffff00;
    }
    bVar7 = uVar2 == 0;
    if (!bVar7) {
      do {
        if (bVar7) {
          uVar2 = uVar2 >> 6;
        }
LAB_4a00178c:
        bVar7 = uVar2 <= uVar1 >> 7;
        if (bVar7) {
          uVar1 = uVar1 + uVar2 * -0x80;
        }
        bVar8 = uVar2 <= uVar1 >> 6;
        if (bVar8) {
          uVar1 = uVar1 + uVar2 * -0x40;
        }
        bVar9 = uVar2 <= uVar1 >> 5;
        if (bVar9) {
          uVar1 = uVar1 + uVar2 * -0x20;
        }
        bVar10 = uVar2 <= uVar1 >> 4;
        if (bVar10) {
          uVar1 = uVar1 + uVar2 * -0x10;
        }
        uVar5 = (((uVar5 * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10
        ;
LAB_4a0017bc:
        bVar7 = uVar2 <= uVar1 >> 3;
        if (bVar7) {
          uVar1 = uVar1 + uVar2 * -8;
        }
        uVar6 = uVar5 * 2 + (uint)bVar7;
        bVar8 = uVar2 <= uVar1 >> 2;
        if (bVar8) {
          uVar1 = uVar1 + uVar2 * -4;
        }
        uVar5 = uVar6 * 2 + (uint)bVar8;
        bVar7 = true;
      } while (CARRY4(uVar6,uVar6) || CARRY4(uVar6 * 2,(uint)bVar8));
      bVar7 = uVar2 <= uVar1 >> 1;
      if (bVar7) {
        uVar1 = uVar1 + uVar2 * -2;
      }
      uVar6 = uVar1 - uVar2;
      if (uVar2 > uVar1) {
        uVar6 = uVar1;
      }
      iVar3 = (uVar5 * 2 + (uint)bVar7) * 2 + (uint)(uVar2 <= uVar1);
      if ((int)uVar4 >> 0x1f < 0) {
        iVar3 = -iVar3;
      }
      if ((bool)((byte)(uVar4 >> 0x1e) & 1)) {
        uVar6 = -uVar6;
      }
      return CONCAT44(uVar6,iVar3);
    }
LAB_4a004788:
    FUN_4a0063f0(2);
    return 0;
  }
  if (uVar1 >> 1 < param_2) {
    if (uVar1 < param_2) {
      return (ulonglong)uVar1 << 0x20;
    }
    return CONCAT44(uVar1 - param_2,1);
  }
  iVar3 = 0;
  uVar5 = param_2;
  if (param_2 <= uVar1 >> 4) {
    if (param_2 <= uVar1 >> 8) {
      if (uVar1 >> 0xc < param_2) goto LAB_4a00167c;
      if (uVar1 >> 0x10 < param_2) goto LAB_4a00164c;
      uVar5 = param_2 << 8;
      iVar3 = -0x1000000;
      if (uVar5 <= uVar1 >> 0x10) {
        iVar3 = -0x10000;
        uVar5 = param_2 << 0x10;
      }
      if (uVar1 >> 0xc < uVar5) goto LAB_4a00167c;
      bVar7 = false;
      if (uVar5 == 0) goto LAB_4a004788;
      do {
        if (bVar7) {
          uVar5 = uVar5 >> 8;
        }
LAB_4a00164c:
        bVar7 = uVar5 <= uVar1 >> 0xf;
        if (bVar7) {
          uVar1 = uVar1 + uVar5 * -0x8000;
        }
        bVar8 = uVar5 <= uVar1 >> 0xe;
        if (bVar8) {
          uVar1 = uVar1 + uVar5 * -0x4000;
        }
        bVar9 = uVar5 <= uVar1 >> 0xd;
        if (bVar9) {
          uVar1 = uVar1 + uVar5 * -0x2000;
        }
        bVar10 = uVar5 <= uVar1 >> 0xc;
        if (bVar10) {
          uVar1 = uVar1 + uVar5 * -0x1000;
        }
        iVar3 = (((iVar3 * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10
        ;
LAB_4a00167c:
        bVar7 = uVar5 <= uVar1 >> 0xb;
        if (bVar7) {
          uVar1 = uVar1 + uVar5 * -0x800;
        }
        bVar8 = uVar5 <= uVar1 >> 10;
        if (bVar8) {
          uVar1 = uVar1 + uVar5 * -0x400;
        }
        bVar9 = uVar5 <= uVar1 >> 9;
        if (bVar9) {
          uVar1 = uVar1 + uVar5 * -0x200;
        }
        uVar4 = ((iVar3 * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9;
        bVar8 = uVar5 <= uVar1 >> 8;
        if (bVar8) {
          uVar1 = uVar1 + uVar5 * -0x100;
        }
        iVar3 = uVar4 * 2 + (uint)bVar8;
        bVar7 = true;
      } while (CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar8));
    }
    bVar7 = uVar5 <= uVar1 >> 7;
    if (bVar7) {
      uVar1 = uVar1 + uVar5 * -0x80;
    }
    bVar8 = uVar5 <= uVar1 >> 6;
    if (bVar8) {
      uVar1 = uVar1 + uVar5 * -0x40;
    }
    bVar9 = uVar5 <= uVar1 >> 5;
    if (bVar9) {
      uVar1 = uVar1 + uVar5 * -0x20;
    }
    bVar10 = uVar5 <= uVar1 >> 4;
    if (bVar10) {
      uVar1 = uVar1 + uVar5 * -0x10;
    }
    iVar3 = (((iVar3 * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10;
  }
  bVar7 = uVar5 <= uVar1 >> 3;
  if (bVar7) {
    uVar1 = uVar1 + uVar5 * -8;
  }
  bVar8 = uVar5 <= uVar1 >> 2;
  if (bVar8) {
    uVar1 = uVar1 + uVar5 * -4;
  }
  bVar9 = uVar5 <= uVar1 >> 1;
  if (bVar9) {
    uVar1 = uVar1 + uVar5 * -2;
  }
  uVar4 = uVar1 - uVar5;
  if (uVar5 > uVar1) {
    uVar4 = uVar1;
  }
  return CONCAT44(uVar4,(((iVar3 * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 +
                        (uint)(uVar5 <= uVar1));
}



// Address: 4a1585e0

void FUN_4a1585e0(int *param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  
  puVar4 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x58);
  puVar2 = PTR_FUN_4a1589ec;
  param_1[0x73] = (int)puVar4;
  *puVar4 = puVar2;
  puVar4[2] = PTR_DAT_4a1589f0;
  puVar4[3] = PTR_LAB_4a1589f4;
  puVar4[0x11] = 0;
  puVar4[0xd] = 0;
  if (4 < param_1[0x1e]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x37;
    *(undefined4 *)(*param_1 + 0x18) = 4;
    (**(code **)*param_1)(param_1);
  }
  if (0x100 < param_1[0x18]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x39;
    *(undefined4 *)(*param_1 + 0x18) = 0x100;
    (**(code **)*param_1)(param_1);
  }
  iVar5 = param_1[0x73];
  puVar17 = (uint *)(iVar5 + 0x20);
  iVar6 = param_1[0x18];
  uVar18 = param_1[0x1e];
  uVar12 = 1;
  do {
    uVar13 = uVar12;
    uVar12 = uVar13 + 1;
    uVar15 = uVar12;
    if (0 < (int)(uVar18 - 1)) {
      if ((uVar18 & 1) == 0) {
        uVar15 = uVar12 * uVar12;
      }
      for (iVar7 = (int)(uVar18 - 1) >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
        uVar15 = uVar12 * uVar12 * uVar15;
      }
    }
  } while ((int)uVar15 <= iVar6);
  if ((int)uVar13 < 2) {
    *(undefined4 *)(*param_1 + 0x14) = 0x38;
    *(uint *)(*param_1 + 0x18) = uVar15;
    (**(code **)*param_1)(param_1);
  }
  uVar12 = 1;
  if (0 < (int)uVar18) {
    puVar8 = (uint *)(iVar5 + 0x1c);
    if ((uVar18 & 1) != 0) {
      *puVar17 = uVar13;
      puVar8 = puVar17;
      uVar12 = uVar13;
    }
    for (iVar7 = (int)uVar18 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar12 = uVar12 * uVar13 * uVar13;
      puVar8[1] = uVar13;
      puVar8 = puVar8 + 2;
      *puVar8 = uVar13;
    }
  }
  do {
    bVar1 = false;
    iVar7 = 0;
    uVar15 = uVar12;
    if ((int)uVar18 < 1) {
LAB_4a1587dc:
      if (param_1[0x1e] == 3) {
        iVar6 = *param_1;
        *(uint *)(iVar6 + 0x18) = uVar15;
        *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(iVar5 + 0x20);
        *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar5 + 0x24);
        *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)(iVar5 + 0x28);
        *(undefined4 *)(*param_1 + 0x14) = 0x5e;
        (**(code **)(*param_1 + 4))(param_1,1);
      }
      else {
        *(undefined4 *)(*param_1 + 0x14) = 0x5f;
        *(uint *)(*param_1 + 0x18) = uVar15;
        (**(code **)(*param_1 + 4))(param_1,1);
      }
      iVar6 = (**(code **)(param_1[1] + 8))(param_1,1,uVar15,param_1[0x1e]);
      iVar7 = 0;
      uVar12 = uVar15;
      if (0 < param_1[0x1e]) {
        do {
          iVar9 = *(int *)(iVar5 + iVar7 * 4 + 0x20);
          uVar18 = FUN_4a0015f0(uVar12,iVar9);
          iVar19 = 0;
          if (0 < iVar9) {
            do {
              uVar3 = FUN_4a0015f0(iVar19 * 0xff + (iVar9 + -1) / 2,iVar9 + -1);
              for (iVar16 = iVar19 * uVar18; iVar16 < (int)uVar15; iVar16 = iVar16 + uVar12) {
                if (0 < (int)uVar18) {
                  puVar10 = (undefined1 *)(*(int *)(iVar6 + iVar7 * 4) + iVar16 + -1);
                  if ((uVar18 & 1) != 0) {
                    puVar10 = puVar10 + 1;
                    *puVar10 = uVar3;
                  }
                  for (iVar14 = (int)uVar18 >> 1; iVar14 != 0; iVar14 = iVar14 + -1) {
                    puVar10[1] = uVar3;
                    puVar10 = puVar10 + 2;
                    *puVar10 = uVar3;
                  }
                }
              }
              iVar19 = iVar19 + 1;
            } while (iVar19 < iVar9);
          }
          iVar7 = iVar7 + 1;
          uVar12 = uVar18;
        } while (iVar7 < param_1[0x1e]);
      }
      *(int *)(iVar5 + 0x10) = iVar6;
      *(uint *)(iVar5 + 0x14) = uVar15;
      FUN_4a14bef8(param_1);
      if (param_1[0x16] != 2) {
        return;
      }
      iVar5 = param_1[0x1c];
      iVar7 = param_1[0x73];
      iVar6 = 0;
      if (param_1[0x1e] < 1) {
        return;
      }
      do {
        uVar11 = (**(code **)(param_1[1] + 4))(param_1,1,(iVar5 + 2) * 2);
        *(undefined4 *)(iVar7 + iVar6 * 4 + 0x44) = uVar11;
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_1[0x1e]);
      return;
    }
    do {
      iVar19 = iVar7;
      if (param_1[0xb] == 2) {
        iVar19 = *(int *)(PTR_DAT_4a1589f8 + iVar7 * 4);
      }
      uVar13 = puVar17[iVar19];
      iVar9 = FUN_4a0015f0(uVar15);
      uVar12 = (uVar13 + 1) * iVar9;
      if (uVar12 - iVar6 != 0 && iVar6 <= (int)uVar12) {
        uVar12 = uVar15;
        if (!bVar1) goto LAB_4a1587dc;
        break;
      }
      iVar7 = iVar7 + 1;
      bVar1 = true;
      puVar17[iVar19] = uVar13 + 1;
      uVar15 = uVar12;
    } while (iVar7 < (int)uVar18);
  } while( true );
}



// Address: 4a1589fc

/* WARNING: Removing unreachable block (ram,0x4a1539c8) */
/* WARNING: Removing unreachable block (ram,0x4a1539b4) */
/* WARNING: Removing unreachable block (ram,0x4a153994) */
/* WARNING: Removing unreachable block (ram,0x4a1539c4) */
/* WARNING: Removing unreachable block (ram,0x4a153998) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1589fc(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  puVar3 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x2c);
  puVar1 = PTR_FUN_4a158bc0;
  param_1[0x73] = (int)puVar3;
  *puVar3 = puVar1;
  puVar3[3] = PTR_LAB_4a158bc4;
  puVar3[8] = 0;
  puVar3[10] = 0;
  if (param_1[0x1e] != 3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x2f;
    (**(code **)*param_1)(param_1);
  }
  uVar4 = (**(code **)param_1[1])(param_1,1,0x80);
  iVar9 = 0;
  puVar3[6] = uVar4;
  do {
    uVar4 = (**(code **)(param_1[1] + 4))(param_1,1,0x1000);
    *(undefined4 *)(puVar3[6] + iVar9 * 4) = uVar4;
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x20);
  puVar3[7] = 1;
  if (param_1[0x1b] == 0) {
    puVar3[4] = 0;
  }
  else {
    iVar9 = param_1[0x18];
    if (iVar9 < 8) {
      *(undefined4 *)(*param_1 + 0x14) = 0x38;
      *(undefined4 *)(*param_1 + 0x18) = 8;
      (**(code **)*param_1)(param_1);
    }
    if (0x100 < iVar9) {
      *(undefined4 *)(*param_1 + 0x14) = 0x39;
      *(undefined4 *)(*param_1 + 0x18) = 0x100;
      (**(code **)*param_1)(param_1);
    }
    uVar4 = (**(code **)(param_1[1] + 8))(param_1,1,iVar9,3);
    puVar3[4] = uVar4;
    puVar3[5] = iVar9;
  }
  if (param_1[0x16] != 0) {
    param_1[0x16] = 2;
    uVar4 = (**(code **)(param_1[1] + 4))(param_1,1,(param_1[0x1c] + 2) * 6);
    puVar3[8] = uVar4;
    iVar10 = param_1[0x73];
    iVar9 = (**(code **)param_1[1])(param_1,1,0x7fc);
    piVar5 = (int *)(iVar9 + 0x3f8);
    piVar8 = (int *)(iVar9 + 0x400);
    iVar2 = 0;
    iVar6 = 8;
    *(int *)(iVar10 + 0x28) = iVar9 + 0x3fc;
    do {
      piVar5[1] = iVar2;
      piVar8[-1] = -iVar2;
      iVar10 = iVar2 + 1;
      piVar5 = piVar5 + 2;
      *piVar5 = iVar10;
      iVar6 = iVar6 + -1;
      iVar2 = iVar2 + 2;
      piVar8 = piVar8 + -2;
      *piVar8 = -iVar10;
    } while (iVar6 != 0);
    iVar2 = 0x10;
    bVar7 = false;
    iVar6 = 0x20;
    piVar5 = (int *)(iVar9 + 0x43c);
    piVar8 = (int *)(iVar9 + 0x3bc);
    do {
      *piVar5 = iVar2;
      *piVar8 = -iVar2;
      iVar6 = iVar6 + -1;
      iVar2 = iVar2 + (uint)!bVar7;
      bVar7 = (bool)(bVar7 ^ 1);
      piVar5 = piVar5 + 1;
      piVar8 = piVar8 + -1;
    } while (iVar6 != 0);
    piVar5 = (int *)(iVar9 + 0x4b8);
    piVar8 = (int *)(iVar9 + 0x340);
    iVar9 = 0x68;
    do {
      piVar5[1] = iVar2;
      piVar8[-1] = -iVar2;
      piVar5 = piVar5 + 2;
      *piVar5 = iVar2;
      iVar9 = iVar9 + -1;
      piVar8 = piVar8 + -2;
      *piVar8 = -iVar2;
    } while (iVar9 != 0);
    return;
  }
  return;
}



// Address: 4a158bc8

void FUN_4a158bc8(int *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x18);
  puVar1 = PTR_DAT_4a158fe8;
  param_1[0x72] = (int)puVar2;
  *puVar2 = puVar1;
  switch(param_1[10]) {
  default:
    if (param_1[9] < 1) {
LAB_4a158c64:
      *(undefined4 *)(*param_1 + 0x14) = 10;
      (**(code **)*param_1)(param_1);
    }
    break;
  case 1:
    if (param_1[9] != 1) goto LAB_4a158c64;
    break;
  case 2:
  case 3:
    if (param_1[9] != 3) goto LAB_4a158c64;
    break;
  case 4:
  case 5:
    if (param_1[9] != 4) goto LAB_4a158c64;
  }
  puVar1 = PTR_LAB_4a158fec;
  iVar3 = param_1[0xb];
  if (iVar3 == 1) {
    param_1[0x1e] = 1;
    if (param_1[10] == 1 || param_1[10] == 3) {
      puVar2[1] = PTR_FUN_4a158ff4;
      if (0 < (int)(param_1[9] - 1U)) {
        puVar2 = (undefined4 *)(param_1[0x36] + 0x30);
        if ((param_1[9] & 1U) == 0) {
          puVar2 = (undefined4 *)(param_1[0x36] + 0x84);
          *puVar2 = 0;
        }
        for (iVar3 = param_1[9] + -1 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
          puVar2[0x15] = 0;
          puVar2 = puVar2 + 0x2a;
          *puVar2 = 0;
        }
      }
      goto LAB_4a158fc4;
    }
  }
  else if (iVar3 == 2) {
    param_1[0x1e] = 3;
    iVar3 = param_1[10];
    if (iVar3 == 3) {
      puVar2[1] = PTR_FUN_4a158ff8;
      iVar6 = param_1[0x72];
      uVar4 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined4 *)(iVar6 + 8) = uVar4;
      uVar4 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined4 *)(iVar6 + 0xc) = uVar4;
      uVar4 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined4 *)(iVar6 + 0x10) = uVar4;
      uVar4 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined4 *)(iVar6 + 0x14) = uVar4;
      iVar5 = -0x80;
      iVar3 = 0;
      do {
        *(int *)(*(int *)(iVar6 + 8) + iVar3 * 4) = iVar5 * 0x166e9 + 0x8000 >> 0x10;
        *(int *)(*(int *)(iVar6 + 0xc) + iVar3 * 4) = iVar5 * 0x1c5a2 + 0x8000 >> 0x10;
        *(int *)(*(int *)(iVar6 + 0x10) + iVar3 * 4) = iVar5 * -0xb6d2;
        *(int *)(*(int *)(iVar6 + 0x14) + iVar3 * 4) = iVar5 * -0x581a + 0x8000;
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar3 < 0x100);
      goto LAB_4a158fc4;
    }
    if (iVar3 == 1) {
      puVar2[1] = PTR_LAB_4a158ffc;
      goto LAB_4a158fc4;
    }
    if (iVar3 == 2) goto LAB_4a158f88;
  }
  else if (iVar3 == 4) {
    param_1[0x1e] = 4;
    if (param_1[10] == 5) {
      puVar2[1] = PTR_FUN_4a158ff0;
      iVar6 = param_1[0x72];
      uVar4 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined4 *)(iVar6 + 8) = uVar4;
      uVar4 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined4 *)(iVar6 + 0xc) = uVar4;
      uVar4 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined4 *)(iVar6 + 0x10) = uVar4;
      uVar4 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined4 *)(iVar6 + 0x14) = uVar4;
      iVar5 = -0x80;
      iVar3 = 0;
      do {
        *(int *)(*(int *)(iVar6 + 8) + iVar3 * 4) = iVar5 * 0x166e9 + 0x8000 >> 0x10;
        *(int *)(*(int *)(iVar6 + 0xc) + iVar3 * 4) = iVar5 * 0x1c5a2 + 0x8000 >> 0x10;
        *(int *)(*(int *)(iVar6 + 0x10) + iVar3 * 4) = iVar5 * -0xb6d2;
        *(int *)(*(int *)(iVar6 + 0x14) + iVar3 * 4) = iVar5 * -0x581a + 0x8000;
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar3 < 0x100);
      goto LAB_4a158fc4;
    }
    if (param_1[10] == 4) {
LAB_4a158f88:
      puVar2[1] = puVar1;
      goto LAB_4a158fc4;
    }
  }
  else if (iVar3 == param_1[10]) {
    param_1[0x1e] = param_1[9];
    puVar2[1] = puVar1;
    goto LAB_4a158fc4;
  }
  *(undefined4 *)(*param_1 + 0x14) = 0x1b;
  (**(code **)*param_1)(param_1);
LAB_4a158fc4:
  if (param_1[0x15] == 0) {
    param_1[0x1f] = param_1[0x1e];
    return;
  }
  param_1[0x1f] = 1;
  return;
}



// Address: 4a159000

void FUN_4a159000(int param_1,int param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  puVar2 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x74);
  puVar1 = PTR_LAB_4a159170;
  *(undefined4 **)(param_1 + 0x1ac) = puVar2;
  *puVar2 = puVar1;
  puVar2[2] = PTR_FUN_4a159174;
  puVar2[0x1c] = 0;
  if (param_2 != 0) {
    iVar6 = *(int *)(param_1 + 0xd8);
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0x24)) {
      do {
        iVar8 = *(int *)(iVar6 + 0xc);
        iVar5 = iVar8;
        if (*(int *)(param_1 + 0xdc) != 0) {
          iVar5 = iVar8 * 3;
        }
        uVar3 = FUN_4a15cca0(*(undefined4 *)(iVar6 + 0x20),iVar8);
        uVar4 = FUN_4a15cca0(*(undefined4 *)(iVar6 + 0x1c),*(undefined4 *)(iVar6 + 8));
        uVar3 = (**(code **)(*(int *)(param_1 + 4) + 0x14))(param_1,1,1,uVar4,uVar3,iVar5);
        puVar2[iVar7 + 0x12] = uVar3;
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x54;
      } while (iVar7 < *(int *)(param_1 + 0x24));
    }
    puVar2[1] = PTR_FUN_4a159178;
    puVar2[3] = PTR_FUN_4a15917c;
    puVar2[4] = puVar2 + 0x12;
    return;
  }
  iVar7 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,0x500);
  iVar5 = 0;
  iVar6 = 0;
  do {
    puVar2[iVar6 + 8] = iVar7 + iVar6 * 0x80;
    iVar5 = iVar5 + 2;
    puVar2[iVar6 + 9] = iVar7 + (iVar6 + 1) * 0x80;
    iVar6 = iVar6 + 2;
  } while (iVar5 < 10);
  puVar2[1] = PTR_LAB_4a159180;
  puVar2[3] = PTR_FUN_4a159184;
  puVar2[4] = 0;
  return;
}



// Address: 4a159188

void FUN_4a159188(int *param_1,int param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x50);
  puVar1 = PTR_FUN_4a159358;
  param_1[0x6a] = (int)puVar2;
  *puVar2 = puVar1;
  if (param_2 != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 4;
    (**(code **)*param_1)(param_1);
  }
  if (*(int *)(param_1[0x71] + 8) == 0) {
    iVar8 = param_1[0x4f];
  }
  else {
    if (param_1[0x4f] < 2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x2f;
      (**(code **)*param_1)(param_1);
    }
    iVar7 = param_1[0x6a];
    iVar9 = param_1[0x4f];
    iVar8 = (**(code **)param_1[1])(param_1,1,param_1[9] << 3);
    *(int *)(iVar7 + 0x38) = iVar8;
    iVar6 = 0;
    *(int *)(iVar7 + 0x3c) = iVar8 + param_1[9] * 4;
    iVar8 = param_1[0x36];
    if (0 < param_1[9]) {
      do {
        iVar3 = FUN_4a0015f0(*(int *)(iVar8 + 0x24) * *(int *)(iVar8 + 0xc),param_1[0x4f]);
        iVar10 = iVar3 * (iVar9 + 4);
        iVar4 = (**(code **)param_1[1])(param_1,1,iVar10 * 8);
        iVar4 = iVar4 + iVar3 * 4;
        iVar8 = iVar8 + 0x54;
        *(int *)(*(int *)(iVar7 + 0x38) + iVar6 * 4) = iVar4;
        *(int *)(*(int *)(iVar7 + 0x3c) + iVar6 * 4) = iVar4 + iVar10 * 4;
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_1[9]);
    }
    iVar8 = param_1[0x4f] + 2;
  }
  iVar6 = param_1[0x36];
  iVar7 = 0;
  if (0 < param_1[9]) {
    do {
      iVar3 = *(int *)(iVar6 + 0x24);
      iVar9 = FUN_4a0015f0(iVar3 * *(int *)(iVar6 + 0xc),param_1[0x4f]);
      uVar5 = (**(code **)(param_1[1] + 8))(param_1,1,*(int *)(iVar6 + 0x1c) * iVar3,iVar9 * iVar8);
      puVar2[iVar7 + 2] = uVar5;
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x54;
    } while (iVar7 < param_1[9]);
    return;
  }
  return;
}



// Address: 4a15935c

void FUN_4a15935c(int param_1,int param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x1c);
  puVar1 = PTR_FUN_4a159448;
  *(undefined4 **)(param_1 + 0x1b0) = puVar2;
  *puVar2 = puVar1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  if (*(int *)(param_1 + 0x54) == 0) {
    return;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x138);
  puVar2[4] = uVar3;
  if (param_2 == 0) {
    uVar3 = (**(code **)(*(int *)(param_1 + 4) + 8))
                      (param_1,1,*(int *)(param_1 + 0x70) * *(int *)(param_1 + 0x78),uVar3);
    puVar2[3] = uVar3;
    return;
  }
  FUN_4a15cca0(*(undefined4 *)(param_1 + 0x74));
  uVar3 = (**(code **)(*(int *)(param_1 + 4) + 0x10))
                    (param_1,1,0,*(int *)(param_1 + 0x70) * *(int *)(param_1 + 0x78));
  puVar2[2] = uVar3;
  return;
}



// Address: 4a15944c

void FUN_4a15944c(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0xe8);
  puVar1 = PTR_FUN_4a1594b0;
  *(undefined4 **)(param_1 + 0x1bc) = puVar2;
  *puVar2 = puVar1;
  puVar2[1] = PTR_FUN_4a1594b4;
  puVar2[0xe] = 0;
  puVar2[10] = 0;
  puVar2[0xf] = 0;
  puVar2[0xb] = 0;
  puVar2[0x10] = 0;
  puVar2[0xc] = 0;
  puVar2[0x11] = 0;
  puVar2[0xd] = 0;
  return;
}



// Address: 4a1594b8

void FUN_4a1594b8(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x1c);
  puVar1 = PTR_FUN_4a15951c;
  *(undefined4 **)(param_1 + 0x1b4) = puVar2;
  *puVar2 = puVar1;
  puVar2[1] = PTR_FUN_4a159520;
  puVar2[2] = PTR_FUN_4a159524;
  puVar2[3] = PTR_LAB_4a159528;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 1;
  return;
}



// Address: 4a15952c

void FUN_4a15952c(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x54);
  puVar1 = PTR_FUN_4a1595c8;
  *(undefined4 **)(param_1 + 0x1c0) = puVar2;
  *puVar2 = puVar1;
  iVar5 = *(int *)(param_1 + 0xd8);
  iVar4 = 0;
  if (*(int *)(param_1 + 0x24) < 1) {
    return;
  }
  do {
    uVar3 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x100);
    *(undefined4 *)(iVar5 + 0x50) = uVar3;
    FUN_4a001274(uVar3,0x100);
    puVar2[iVar4 + 0xb] = 0xffffffff;
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x54;
  } while (iVar4 < *(int *)(param_1 + 0x24));
  return;
}



// Address: 4a1595cc

void FUN_4a1595cc(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar3 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0xac);
  puVar1 = PTR_LAB_4a159674;
  *(undefined4 **)(param_1 + 0x1b8) = puVar3;
  *puVar3 = puVar1;
  puVar3[1] = PTR_FUN_4a159678;
  puVar1 = PTR_FUN_4a159680;
  puVar3[2] = PTR_FUN_4a15967c;
  puVar3[0x18] = 0;
  iVar6 = 0;
  iVar4 = 0x10;
  puVar3[7] = puVar1;
  puVar5 = puVar3 + 0x19;
  do {
    puVar3[iVar6 + 8] = puVar1;
    iVar4 = iVar4 + -1;
    iVar6 = iVar6 + 1;
    *puVar5 = 0;
    puVar2 = PTR_FUN_4a159684;
    puVar5 = puVar5 + 1;
  } while (iVar4 != 0);
  puVar3[8] = PTR_FUN_4a159684;
  puVar3[0x16] = puVar2;
  iVar4 = *(int *)(param_1 + 0x1b8);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(iVar4 + 0xc) = 0;
  *(undefined4 *)(iVar4 + 0x10) = 0;
  *(undefined4 *)(iVar4 + 0x18) = 0;
  *(undefined4 *)(iVar4 + 0xa4) = 0;
  return;
}



// Address: 4a159688

void FUN_4a159688(int *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  
  puVar3 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x1c);
  puVar1 = PTR_FUN_4a159a54;
  param_1[0x69] = (int)puVar3;
  *puVar3 = puVar1;
  puVar3[1] = PTR_FUN_4a159a58;
  puVar3[2] = 0;
  iVar10 = param_1[0x69];
  FUN_4a15a2ac(param_1);
  iVar4 = (**(code **)param_1[1])(param_1,1,0x580);
  param_1[0x51] = iVar4 + 0x100;
  FUN_4a001274(iVar4,0x100);
  pcVar6 = (char *)(iVar4 + 0xff);
  cVar2 = '\0';
  iVar8 = 0x80;
  do {
    cVar9 = cVar2 + '\x01';
    pcVar6[1] = cVar2;
    iVar8 = iVar8 + -1;
    cVar2 = cVar2 + '\x02';
    pcVar6 = pcVar6 + 2;
    *pcVar6 = cVar9;
  } while (iVar8 != 0);
  FUN_4a000f70(iVar4 + 0x200,0x180,0xff);
  FUN_4a001274(iVar4 + 0x380,0x180);
  FUN_4a000f84(iVar4 + 0x500,param_1[0x51],0x80);
  *(undefined4 *)(iVar10 + 0xc) = 0;
  iVar4 = param_1[0x13];
  bVar11 = iVar4 == 0;
  if (bVar11) {
    iVar4 = param_1[0x4b];
  }
  bVar12 = bVar11 && iVar4 == 0;
  if (bVar11 && iVar4 == 0) {
    bVar12 = param_1[10] == 3;
  }
  bVar11 = false;
  if (bVar12) {
    bVar11 = param_1[9] == 3;
  }
  if (bVar11) {
    iVar4 = param_1[0xb];
    bVar11 = iVar4 == 2;
    if (bVar11) {
      iVar4 = param_1[0x1e];
    }
    bVar12 = bVar11 && iVar4 == 3;
    if (bVar11 && iVar4 == 3) {
      iVar4 = param_1[0x36];
      bVar12 = *(int *)(iVar4 + 8) == 2;
    }
    if (!bVar12) goto LAB_4a1597ec;
    iVar8 = *(int *)(iVar4 + 0x5c);
    bVar11 = iVar8 != 1;
    if (!bVar11) {
      iVar8 = *(int *)(iVar4 + 0xb0);
    }
    if (bVar11 || iVar8 != 1) goto LAB_4a1597ec;
    bVar11 = *(int *)(iVar4 + 0xc) == 2;
    if (*(int *)(iVar4 + 0xc) < 3) {
      bVar11 = *(int *)(iVar4 + 0x60) == 1;
    }
    bVar12 = false;
    if (bVar11) {
      bVar12 = *(int *)(iVar4 + 0xb4) == 1;
    }
    if (!bVar12) goto LAB_4a1597ec;
    iVar8 = *(int *)(iVar4 + 0x24);
    iVar7 = param_1[0x4f];
    bVar11 = iVar8 == iVar7;
    if (bVar11) {
      iVar8 = *(int *)(iVar4 + 0x78);
    }
    bVar12 = bVar11 && iVar8 == iVar7;
    if (bVar11 && iVar8 == iVar7) {
      bVar12 = *(int *)(iVar4 + 0xcc) == iVar7;
    }
    if (!bVar12) goto LAB_4a1597ec;
    uVar5 = 1;
  }
  else {
LAB_4a1597ec:
    uVar5 = 0;
  }
  puVar3 = (undefined4 *)(iVar10 + 0x10);
  *puVar3 = uVar5;
  *(undefined4 *)(iVar10 + 0x14) = 0;
  *(undefined4 *)(iVar10 + 0x18) = 0;
  iVar4 = param_1[0x15];
  if (iVar4 != 0) {
    puVar3 = (undefined4 *)param_1[0x10];
  }
  if (iVar4 == 0 || puVar3 == (undefined4 *)0x0) {
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    if (iVar4 == 0) goto LAB_4a1598d8;
  }
  if (param_1[0x11] != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x2f;
    (**(code **)*param_1)(param_1);
  }
  if (param_1[0x1e] == 3) {
    if (param_1[0x22] == 0) {
      if (param_1[0x17] == 0) {
        param_1[0x19] = 1;
        goto LAB_4a1598a4;
      }
      param_1[0x1b] = 1;
    }
    else {
      param_1[0x1a] = 1;
    }
    if (param_1[0x19] != 0) goto LAB_4a1598a4;
  }
  else {
    param_1[0x19] = 1;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x22] = 0;
LAB_4a1598a4:
    FUN_4a1585e0(param_1);
    *(int *)(iVar10 + 0x14) = param_1[0x73];
  }
  iVar4 = param_1[0x1b];
  bVar11 = iVar4 == 0;
  if (bVar11) {
    iVar4 = param_1[0x1a];
  }
  if (!bVar11 || iVar4 != 0) {
    FUN_4a1589fc(param_1);
    *(int *)(iVar10 + 0x18) = param_1[0x73];
  }
LAB_4a1598d8:
  if (param_1[0x11] == 0) {
    if (*(int *)(iVar10 + 0x10) == 0) {
      FUN_4a158bc8(param_1);
      FUN_4a159e84(param_1);
    }
    else {
      FUN_4a159c04();
    }
    FUN_4a15935c(param_1,param_1[0x1b]);
  }
  FUN_4a15952c(param_1);
  if (param_1[0x38] == 0) {
    if (param_1[0x37] == 0) {
      FUN_4a15944c(param_1);
    }
    else {
      FUN_4a159dcc();
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 1;
    (**(code **)*param_1)(param_1);
  }
  iVar4 = *(int *)(param_1[0x6d] + 0x10);
  bVar11 = iVar4 == 0;
  if (bVar11) {
    iVar4 = param_1[0x10];
  }
  FUN_4a159000(param_1,!bVar11 || iVar4 != 0);
  if (param_1[0x11] == 0) {
    FUN_4a159188(param_1,0);
  }
  (**(code **)(param_1[1] + 0x18))(param_1);
  (**(code **)(param_1[0x6d] + 8))(param_1);
  if (param_1[2] == 0) {
    return;
  }
  if (param_1[0x10] != 0) {
    return;
  }
  if (*(int *)(param_1[0x6d] + 0x10) != 0) {
    iVar4 = param_1[0x37];
    iVar8 = param_1[9];
    *(undefined4 *)(param_1[2] + 4) = 0;
    if (iVar4 != 0) {
      iVar8 = iVar8 * 3 + 2;
    }
    *(int *)(param_1[2] + 8) = param_1[0x50] * iVar8;
    *(undefined4 *)(param_1[2] + 0xc) = 0;
    if (param_1[0x1b] == 0) {
      uVar5 = 2;
    }
    else {
      uVar5 = 3;
    }
    *(undefined4 *)(param_1[2] + 0x10) = uVar5;
    *(int *)(iVar10 + 0xc) = *(int *)(iVar10 + 0xc) + 1;
    return;
  }
  return;
}



// Address: 4a159a5c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a159a5c(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_18;
  int local_14;
  
  param_1[1] = 0;
  local_14 = FUN_4a15c5bc();
  puVar1 = (undefined4 *)FUN_4a15ab38(param_1,0x54);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_4a15c5c4(param_1);
    *(undefined4 *)(*param_1 + 0x14) = 0x36;
    *(undefined4 *)(*param_1 + 0x18) = 0;
    (**(code **)*param_1)(param_1);
  }
  *puVar1 = PTR_FUN_4a159bc4;
  puVar1[1] = PTR_FUN_4a159bc8;
  puVar1[2] = PTR_FUN_4a159bcc;
  puVar1[3] = PTR_FUN_4a159bd0;
  puVar1[4] = PTR_FUN_4a159bd4;
  puVar1[5] = PTR_FUN_4a159bd8;
  puVar1[6] = PTR_FUN_4a159bdc;
  puVar1[7] = PTR_FUN_4a159be0;
  puVar1[8] = PTR_FUN_4a159be4;
  puVar1[9] = PTR_FUN_4a159be8;
  puVar1[10] = PTR_FUN_4a159bec;
  puVar1[0xc] = DAT_4a159bf0;
  puVar1[0xb] = local_14;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xf] = 0;
  puVar1[0x11] = 0;
  puVar1[0x13] = 0x54;
  puVar1[0x12] = 0;
  param_1[1] = (int)puVar1;
  iVar2 = FUN_4a14fc70(s_JPEGMEM_4a159bf4);
  if (iVar2 != 0) {
    uStack_18 = 0x78;
    iVar2 = thunk_FUN_4a000df4(iVar2,s__ld_c_4a159bfc,&local_14,&uStack_18);
    if (0 < iVar2) {
      if ((char)uStack_18 == 'm' || (char)uStack_18 == 'M') {
        local_14 = local_14 * 1000;
      }
      puVar1[0xb] = local_14 * 1000;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a159b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a159c04

void FUN_4a159c04(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x30);
  puVar1 = PTR_LAB_4a159db8;
  *(undefined4 **)(param_1 + 0x1c4) = puVar2;
  *puVar2 = puVar1;
  puVar2[2] = 0;
  puVar2[10] = *(int *)(param_1 + 0x70) * *(int *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x138) == 2) {
    puVar2[1] = PTR_FUN_4a159dbc;
    puVar2[3] = PTR_FUN_4a159dc0;
    uVar3 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1);
    puVar2[8] = uVar3;
  }
  else {
    puVar2[1] = PTR_FUN_4a159dc4;
    puVar2[3] = PTR_FUN_4a159dc8;
    puVar2[8] = 0;
  }
  iVar6 = *(int *)(param_1 + 0x1c4);
  uVar3 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar6 + 0x10) = uVar3;
  uVar3 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar6 + 0x14) = uVar3;
  uVar3 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar6 + 0x18) = uVar3;
  uVar3 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar6 + 0x1c) = uVar3;
  iVar5 = -0x80;
  iVar4 = 0;
  do {
    *(int *)(*(int *)(iVar6 + 0x10) + iVar4 * 4) = iVar5 * 0x166e9 + 0x8000 >> 0x10;
    *(int *)(*(int *)(iVar6 + 0x14) + iVar4 * 4) = iVar5 * 0x1c5a2 + 0x8000 >> 0x10;
    *(int *)(*(int *)(iVar6 + 0x18) + iVar4 * 4) = iVar5 * -0xb6d2;
    *(int *)(*(int *)(iVar6 + 0x1c) + iVar4 * 4) = iVar5 * -0x581a + 0x8000;
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 1;
  } while (iVar4 < 0x100);
  return;
}



// Address: 4a159dcc

void FUN_4a159dcc(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x40);
  puVar1 = PTR_FUN_4a159e80;
  *(undefined4 **)(param_1 + 0x1bc) = puVar2;
  *puVar2 = puVar1;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  iVar3 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x24) << 8);
  *(int *)(param_1 + 0xa0) = iVar3;
  iVar5 = 0;
  if (*(int *)(param_1 + 0x24) < 1) {
    return;
  }
  do {
    puVar2 = (undefined4 *)(iVar3 + -4);
    iVar4 = 0x20;
    do {
      puVar2[1] = 0xffffffff;
      iVar4 = iVar4 + -1;
      puVar2 = puVar2 + 2;
      *puVar2 = 0xffffffff;
    } while (iVar4 != 0);
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 + 0x100;
  } while (iVar5 < *(int *)(param_1 + 0x24));
  return;
}



// Address: 4a159e84

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a159e84(int *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int extraout_r1;
  int extraout_r1_00;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  
  puVar3 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0xa0);
  puVar7 = PTR_LAB_4a15a0a8;
  param_1[0x71] = (int)puVar3;
  *puVar3 = puVar7;
  puVar3[1] = PTR_FUN_4a15a0ac;
  puVar3[2] = 0;
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x19;
    (**(code **)*param_1)(param_1);
  }
  iVar11 = 0;
  bVar15 = param_1[0x13] == 0;
  iVar10 = 0;
  iVar4 = 0;
  if (!bVar15) {
    iVar4 = param_1[0x4f];
    iVar10 = iVar4 + -1;
  }
  bVar16 = iVar4 == 1;
  bVar14 = !bVar15 && SBORROW4(iVar4,1);
  if ((bVar15 || bVar16) || iVar10 < 0 != bVar14) {
    iVar4 = 0;
  }
  if ((!bVar15 && !bVar16) && iVar10 < 0 == bVar14) {
    iVar4 = 1;
  }
  iVar10 = param_1[0x36];
  if (0 < param_1[9]) {
    do {
      iVar9 = *(int *)(iVar10 + 0x24);
      iVar12 = param_1[0x4f];
      iVar5 = FUN_4a0015f0(iVar9 * *(int *)(iVar10 + 8),iVar12);
      iVar9 = FUN_4a0015f0(iVar9 * *(int *)(iVar10 + 0xc),iVar12);
      iVar12 = param_1[0x4d];
      iVar13 = param_1[0x4e];
      puVar3[iVar11 + 0x19] = iVar9;
      puVar7 = PTR_LAB_4a15a0b0;
      if ((*(int *)(iVar10 + 0x30) == 0) ||
         (puVar7 = PTR_LAB_4a15a0b4, iVar5 == iVar12 && iVar9 == iVar13)) {
        puVar3[iVar11 + 0xd] = puVar7;
      }
      else {
        if (iVar12 == iVar5 * 2 && iVar9 == iVar13) {
          uVar6 = 0;
          if (iVar4 != 0) {
            uVar6 = *(uint *)(iVar10 + 0x28);
          }
          puVar7 = PTR_LAB_4a15a0b8;
          if (iVar4 != 0 && 2 < uVar6) {
            puVar7 = PTR_FUN_4a15a0bc;
          }
          puVar3[iVar11 + 0xd] = puVar7;
        }
        else if (iVar12 == iVar5 * 2 && iVar13 == iVar9 * 2) {
          uVar6 = 0;
          if (iVar4 != 0) {
            uVar6 = *(uint *)(iVar10 + 0x28);
          }
          if (iVar4 == 0 || uVar6 < 3) {
            puVar3[iVar11 + 0xd] = PTR_FUN_4a15a0c0;
          }
          else {
            puVar3[iVar11 + 0xd] = PTR_FUN_4a15a0c4;
            puVar3[2] = 1;
          }
        }
        else {
          uVar1 = FUN_4a0015f0(iVar12,iVar5);
          if ((extraout_r1 == 0) && (uVar2 = FUN_4a0015f0(iVar13,iVar9), extraout_r1_00 == 0)) {
            puVar3[iVar11 + 0xd] = PTR_FUN_4a15a0c8;
            *(undefined1 *)((int)puVar3 + iVar11 + 0x8c) = uVar1;
            *(undefined1 *)((int)puVar3 + iVar11 + 0x96) = uVar2;
          }
          else {
            *(undefined4 *)(*param_1 + 0x14) = 0x26;
            (**(code **)*param_1)(param_1);
          }
        }
        uVar8 = FUN_4a15cca0(param_1[0x1c],param_1[0x4d]);
        uVar8 = (**(code **)(param_1[1] + 8))(param_1,1,uVar8,param_1[0x4e]);
        puVar3[iVar11 + 3] = uVar8;
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 0x54;
    } while (iVar11 < param_1[9]);
    return;
  }
  return;
}



// Address: 4a15a0d0

void FUN_4a15a0d0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  param_1[1] = 0;
  if (param_2 != 0x3e) {
    *(undefined4 *)(*param_1 + 0x14) = 0xc;
    *(undefined4 *)(*param_1 + 0x18) = 0x3e;
    *(int *)(*param_1 + 0x1c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (param_3 != 0x1d0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(undefined4 *)(*param_1 + 0x18) = 0x1d0;
    *(int *)(*param_1 + 0x1c) = param_3;
    (**(code **)*param_1)(param_1);
  }
  iVar1 = *param_1;
  iVar2 = param_1[3];
  FUN_4a00121c(param_1,0x1d0);
  param_1[4] = 1;
  *param_1 = iVar1;
  param_1[3] = iVar2;
  FUN_4a159a5c(param_1);
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x34] = 0;
  param_1[0x4c] = 0;
  FUN_4a1595cc(param_1);
  FUN_4a1594b8(param_1);
  param_1[5] = 200;
  return;
}



// Address: 4a15a1e4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a15a1e4(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  iVar1 = 1;
  do {
    (**(code **)(*(int *)(param_1 + 4) + 0x24))(param_1,iVar1);
    iVar1 = iVar1 + -1;
  } while (0 < iVar1);
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x14) = 200;
    *(undefined4 *)(param_1 + 0x130) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = 100;
                    /* WARNING: Could not recover jumptable at 0x4a15a238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a15a254

void FUN_4a15a254(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x118);
  *(undefined4 *)(iVar1 + 0x114) = 0;
  return;
}



// Address: 4a15a280

void FUN_4a15a280(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x84);
  *(undefined4 *)(iVar1 + 0x80) = 0;
  return;
}



// Address: 4a15a2ac

void FUN_4a15a2ac(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  
  if (param_1[5] != 0xca) {
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  uVar1 = param_1[0xd];
  iVar4 = param_1[0xc];
  if (uVar1 < (uint)(iVar4 << 3)) {
    if (uVar1 < (uint)(iVar4 << 2)) {
      if ((uint)(iVar4 << 1) <= uVar1) {
        iVar4 = FUN_4a1585d4(param_1[7],2);
        param_1[0x1c] = iVar4;
        iVar4 = FUN_4a1585d4(param_1[8],2);
        param_1[0x1d] = iVar4;
        param_1[0x4f] = 4;
        goto LAB_4a15a3a4;
      }
      iVar4 = 8;
      param_1[0x1c] = param_1[7];
      param_1[0x1d] = param_1[8];
    }
    else {
      iVar4 = FUN_4a1585d4(param_1[7],4);
      param_1[0x1c] = iVar4;
      iVar4 = FUN_4a1585d4(param_1[8],4);
      param_1[0x1d] = iVar4;
      iVar4 = 2;
    }
    param_1[0x4f] = iVar4;
  }
  else {
    iVar4 = FUN_4a1585d4(param_1[7],8);
    param_1[0x1c] = iVar4;
    iVar4 = FUN_4a1585d4(param_1[8],8);
    param_1[0x1d] = iVar4;
    param_1[0x4f] = 1;
  }
LAB_4a15a3a4:
  iVar4 = param_1[0x36];
  iVar6 = 0;
  if (0 < param_1[9]) {
    do {
      iVar2 = param_1[0x4f];
      for (iVar5 = iVar2;
          ((iVar5 < 8 && (iVar5 * *(int *)(iVar4 + 8) * 2 <= iVar2 * param_1[0x4d])) &&
          (iVar5 * *(int *)(iVar4 + 0xc) * 2 <= iVar2 * param_1[0x4e])); iVar5 = iVar5 << 1) {
      }
      *(int *)(iVar4 + 0x24) = iVar5;
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0x54;
    } while (iVar6 < param_1[9]);
  }
  iVar4 = param_1[0x36];
  iVar6 = 0;
  if (0 < param_1[9]) {
    do {
      uVar3 = FUN_4a1585d4(param_1[7] * *(int *)(iVar4 + 0x24) * *(int *)(iVar4 + 8),
                           param_1[0x4d] << 3);
      *(undefined4 *)(iVar4 + 0x28) = uVar3;
      uVar3 = FUN_4a1585d4(param_1[8] * *(int *)(iVar4 + 0x24) * *(int *)(iVar4 + 0xc),
                           param_1[0x4e] << 3);
      *(undefined4 *)(iVar4 + 0x2c) = uVar3;
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0x54;
    } while (iVar6 < param_1[9]);
  }
  iVar4 = param_1[0xb];
  switch(iVar4) {
  default:
    iVar6 = param_1[9];
    break;
  case 1:
    param_1[0x1e] = 1;
    goto LAB_4a15a4c8;
  case 2:
  case 3:
    iVar6 = 3;
    break;
  case 4:
  case 5:
    param_1[0x1e] = 4;
    goto LAB_4a15a4c8;
  }
  param_1[0x1e] = iVar6;
LAB_4a15a4c8:
  if (param_1[0x15] == 0) {
    iVar6 = param_1[0x1e];
  }
  else {
    iVar6 = 1;
  }
  param_1[0x1f] = iVar6;
  iVar6 = param_1[0x13];
  bVar7 = iVar6 == 0;
  if (bVar7) {
    iVar6 = param_1[0x4b];
  }
  bVar8 = bVar7 && iVar6 == 0;
  if (bVar7 && iVar6 == 0) {
    bVar8 = param_1[10] == 3;
  }
  bVar7 = false;
  if (bVar8) {
    bVar7 = param_1[9] == 3;
  }
  if (bVar7) {
    bVar7 = iVar4 == 2;
    if (bVar7) {
      iVar4 = param_1[0x1e];
    }
    bVar8 = bVar7 && iVar4 == 3;
    if (bVar7 && iVar4 == 3) {
      iVar4 = param_1[0x36];
      bVar8 = *(int *)(iVar4 + 8) == 2;
    }
    if (bVar8) {
      iVar6 = *(int *)(iVar4 + 0x5c);
      bVar7 = iVar6 == 1;
      if (bVar7) {
        iVar6 = *(int *)(iVar4 + 0xb0);
      }
      if (bVar7 && iVar6 == 1) {
        bVar7 = *(int *)(iVar4 + 0xc) == 2;
        if (*(int *)(iVar4 + 0xc) < 3) {
          bVar7 = *(int *)(iVar4 + 0x60) == 1;
        }
        bVar8 = false;
        if (bVar7) {
          bVar8 = *(int *)(iVar4 + 0xb4) == 1;
        }
        if (bVar8) {
          iVar6 = *(int *)(iVar4 + 0x24);
          iVar5 = param_1[0x4f];
          bVar7 = iVar6 == iVar5;
          if (bVar7) {
            iVar6 = *(int *)(iVar4 + 0x78);
          }
          bVar8 = bVar7 && iVar6 == iVar5;
          if (bVar7 && iVar6 == iVar5) {
            bVar8 = *(int *)(iVar4 + 0xcc) == iVar5;
          }
          if (bVar8) {
            param_1[0x20] = param_1[0x4e];
            return;
          }
        }
      }
    }
  }
  param_1[0x20] = 1;
  return;
}



// Address: 4a15a58c

int FUN_4a15a58c(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  switch(param_1[5]) {
  case 200:
    (**(code **)(param_1[0x6d] + 4))(param_1);
    (**(code **)(param_1[6] + 8))(param_1);
    param_1[5] = 0xc9;
  case 0xc9:
    iVar6 = (**(code **)param_1[0x6d])(param_1);
    if (iVar6 != 1) {
      return iVar6;
    }
    iVar6 = param_1[9];
    if (iVar6 == 1) {
      iVar6 = 1;
LAB_4a15a818:
      param_1[10] = iVar6;
    }
    else if (iVar6 == 3) {
      if (param_1[0x46] == 0) {
        if (param_1[0x49] == 0) {
          piVar2 = (int *)param_1[0x36];
          iVar6 = *piVar2;
          iVar4 = piVar2[0x15];
          iVar5 = piVar2[0x2a];
          if (iVar6 == 1) {
            if (iVar4 == 2 && iVar5 == 3) {
              iVar6 = 3;
              goto LAB_4a15a764;
            }
          }
          else if ((iVar6 == 0x52 && iVar4 == 0x47) && iVar5 == 0x42) goto LAB_4a15a728;
          iVar3 = *param_1;
          *(int *)(iVar3 + 0x18) = iVar6;
          *(int *)(iVar3 + 0x1c) = iVar4;
          *(int *)(iVar3 + 0x20) = iVar5;
          *(undefined4 *)(*param_1 + 0x14) = 0x6f;
          (**(code **)(*param_1 + 4))(param_1,1);
          iVar6 = 3;
        }
        else {
          if ((char)param_1[0x4a] != '\0') {
            if ((char)param_1[0x4a] == '\x01') goto LAB_4a15a6a4;
            *(undefined4 *)(*param_1 + 0x14) = 0x72;
            *(uint *)(*param_1 + 0x18) = (uint)*(byte *)(param_1 + 0x4a);
            (**(code **)(*param_1 + 4))(param_1,0xffffffff);
            param_1[10] = 3;
            goto LAB_4a15a768;
          }
LAB_4a15a728:
          iVar6 = 2;
        }
LAB_4a15a764:
        param_1[10] = iVar6;
      }
      else {
LAB_4a15a6a4:
        param_1[10] = 3;
      }
LAB_4a15a768:
      iVar6 = 2;
    }
    else {
      if (iVar6 != 4) {
        iVar6 = 0;
        goto LAB_4a15a818;
      }
      cVar1 = '\0';
      if (param_1[0x49] != 0) {
        cVar1 = (char)param_1[0x4a];
      }
      if (param_1[0x49] != 0 && cVar1 != '\0') {
        if (cVar1 == '\x02') {
          iVar6 = 5;
        }
        else {
          *(undefined4 *)(*param_1 + 0x14) = 0x72;
          *(uint *)(*param_1 + 0x18) = (uint)*(byte *)(param_1 + 0x4a);
          (**(code **)(*param_1 + 4))(param_1,0xffffffff);
          iVar6 = 5;
        }
      }
      else {
        iVar6 = 4;
      }
      param_1[10] = iVar6;
      iVar6 = 4;
    }
    param_1[0xb] = iVar6;
    param_1[0xc] = 1;
    param_1[0xd] = 1;
    iVar6 = DAT_4a15a87c;
    param_1[0xf] = DAT_4a15a880;
    param_1[0x10] = 0;
    param_1[0xe] = iVar6;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 1;
    param_1[0x16] = 2;
    param_1[0x15] = 0;
    param_1[0x14] = 1;
    param_1[0x18] = 0x100;
    param_1[0x22] = 0;
    param_1[0x17] = 1;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[5] = 0xca;
    param_1[0x1b] = 0;
    iVar6 = 1;
    break;
  case 0xca:
    iVar6 = 1;
    break;
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd2:
    iVar6 = (**(code **)param_1[0x6d])(param_1);
    break;
  default:
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  return iVar6;
}



// Address: 4a15a884

void FUN_4a15a884(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0x28))(param_1);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



// Address: 4a15a8c0

undefined4 FUN_4a15a8c0(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  
  pbVar2 = (byte *)*param_1;
  iVar4 = param_1[1];
  piVar5 = (int *)param_1[4];
  if (piVar5[0x68] == 0) {
    for (; param_3 < 0x19; param_3 = param_3 + 8) {
      pbVar3 = pbVar2;
      if (iVar4 == 0) {
        iVar4 = (**(code **)(piVar5[6] + 0xc))(piVar5);
        if (iVar4 == 0) {
          return 0;
        }
        pbVar3 = *(byte **)piVar5[6];
        iVar4 = ((undefined4 *)piVar5[6])[1];
      }
      pbVar2 = pbVar3 + 1;
      uVar1 = (uint)*pbVar3;
      iVar4 = iVar4 + -1;
      pbVar3 = pbVar2;
      if (uVar1 == 0xff) {
        do {
          if (iVar4 == 0) {
            iVar4 = (**(code **)(piVar5[6] + 0xc))(piVar5);
            if (iVar4 == 0) {
              return 0;
            }
            pbVar3 = *(byte **)piVar5[6];
            iVar4 = ((undefined4 *)piVar5[6])[1];
          }
          pbVar2 = pbVar3 + 1;
          uVar1 = (uint)*pbVar3;
          iVar4 = iVar4 + -1;
          pbVar3 = pbVar2;
        } while (uVar1 == 0xff);
        if (uVar1 != 0) {
          piVar5[0x68] = uVar1;
          goto LAB_4a15a984;
        }
        uVar1 = 0xff;
      }
      param_2 = uVar1 | param_2 << 8;
    }
  }
  else {
LAB_4a15a984:
    if (param_3 < param_4) {
      if (*(int *)(piVar5[0x6f] + 8) == 0) {
        *(undefined4 *)(*piVar5 + 0x14) = 0x75;
        (**(code **)(*piVar5 + 4))(piVar5,0xffffffff);
        *(undefined4 *)(piVar5[0x6f] + 8) = 1;
      }
      param_2 = param_2 << (0x19U - param_3 & 0xff);
      param_3 = 0x19;
    }
  }
  *param_1 = pbVar2;
  param_1[1] = iVar4;
  param_1[2] = param_2;
  param_1[3] = param_3;
  return 1;
}



// Address: 4a15aa04

undefined4 FUN_4a15aa04(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[5];
  if ((iVar1 == 0xcd || iVar1 == 0xce) && (param_1[0x10] == 0)) {
    if ((uint)param_1[0x23] < (uint)param_1[0x1d]) {
      *(undefined4 *)(*param_1 + 0x14) = 0x43;
      (**(code **)*param_1)(param_1);
    }
    (**(code **)(param_1[0x69] + 4))(param_1);
    param_1[5] = 0xd2;
  }
  else if (iVar1 == 0xcf) {
    param_1[5] = 0xd2;
  }
  else if (iVar1 != 0xd2) {
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  iVar1 = *(int *)(param_1[0x6d] + 0x14);
  while( true ) {
    if (iVar1 != 0) {
      (**(code **)(param_1[6] + 0x18))(param_1);
      FUN_4a15a1e4(param_1);
      return 1;
    }
    iVar1 = (**(code **)param_1[0x6d])(param_1);
    if (iVar1 == 0) break;
    iVar1 = *(int *)(param_1[0x6d] + 0x14);
  }
  return 0;
}



// Address: 4a15ab20

void FUN_4a15ab20(undefined4 param_1,undefined *param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_4a00d4f0;
  if ((param_2 < PTR_DAT_4a14f238) && (PTR_DAT_4a14f238 + -0x200 <= param_2)) {
    return;
  }
  if (param_2 != (undefined *)0x0) {
    if (*(int *)(PTR_DAT_4a00d4f0 + 0x10) != 0) {
      for (iVar2 = 0; iVar2 < *(int *)PTR_DAT_4a00d4f0; iVar2 = iVar2 + 1) {
        if (*(undefined **)(*(int *)(PTR_DAT_4a00d4f0 + 0x10) + iVar2 * 4) == param_2) {
          FUN_4a161530((int)param_2 - *(int *)(param_2 + -4));
          *(undefined4 *)(*(int *)(puVar1 + 0x10) + iVar2 * 4) = 0;
          return;
        }
      }
    }
    FUN_4a161530();
  }
  return;
}



// Address: 4a15ab28

void FUN_4a15ab28(undefined4 param_1,undefined *param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_4a00d4f0;
  if ((param_2 < PTR_DAT_4a14f238) && (PTR_DAT_4a14f238 + -0x200 <= param_2)) {
    return;
  }
  if (param_2 != (undefined *)0x0) {
    if (*(int *)(PTR_DAT_4a00d4f0 + 0x10) != 0) {
      for (iVar2 = 0; iVar2 < *(int *)PTR_DAT_4a00d4f0; iVar2 = iVar2 + 1) {
        if (*(undefined **)(*(int *)(PTR_DAT_4a00d4f0 + 0x10) + iVar2 * 4) == param_2) {
          FUN_4a161530((int)param_2 - *(int *)(param_2 + -4));
          *(undefined4 *)(*(int *)(puVar1 + 0x10) + iVar2 * 4) = 0;
          return;
        }
      }
    }
    FUN_4a161530();
  }
  return;
}



// Address: 4a15ab30

void FUN_4a15ab30(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int in_lr;
  
  if (param_2 == 0x10) {
    iVar4 = in_lr - (int)PTR_FUN_4a1490b0_1_4a15e0a4;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (iVar4 < 100) {
      uVar3 = *(int *)(PTR_DAT_4a05be94 + 4) + 0x10;
      puVar1 = &DAT_00000010;
      if (uVar3 < 0x200) {
        puVar1 = PTR_DAT_4a05be90 + *(int *)(PTR_DAT_4a05be94 + 4);
      }
      *(uint *)(PTR_DAT_4a05be94 + 4) = uVar3;
      if (uVar3 >= 0x200) {
        puVar2 = (undefined4 *)FUN_4a057044();
        FUN_4a1652c6(puVar1,*puVar2);
        return;
      }
      return;
    }
  }
  FUN_4a161570();
  return;
}



// Address: 4a15ab38

void FUN_4a15ab38(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int in_lr;
  
  if (param_2 == 0x10) {
    iVar4 = in_lr - (int)PTR_FUN_4a1490b0_1_4a15e0a4;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (iVar4 < 100) {
      uVar3 = *(int *)(PTR_DAT_4a05be94 + 4) + 0x10;
      puVar1 = &DAT_00000010;
      if (uVar3 < 0x200) {
        puVar1 = PTR_DAT_4a05be90 + *(int *)(PTR_DAT_4a05be94 + 4);
      }
      *(uint *)(PTR_DAT_4a05be94 + 4) = uVar3;
      if (uVar3 >= 0x200) {
        puVar2 = (undefined4 *)FUN_4a057044();
        FUN_4a1652c6(puVar1,*puVar2);
        return;
      }
      return;
    }
  }
  FUN_4a161570();
  return;
}



// Address: 4a15ab40

uint FUN_4a15ab40(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 < (int)param_5) {
    iVar1 = FUN_4a15a8c0(param_1,param_2,param_3,param_5);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    param_2 = *(int *)(param_1 + 8);
    param_3 = *(int *)(param_1 + 0xc);
  }
  uVar3 = param_3 - param_5;
  uVar2 = (1 << (param_5 & 0xff)) - 1U & param_2 >> (uVar3 & 0xff);
  if (*(int *)(param_4 + param_5 * 4) < (int)uVar2) {
    do {
      if ((int)uVar3 < 1) {
        iVar1 = FUN_4a15a8c0(param_1,param_2,uVar3,1);
        if (iVar1 == 0) {
          return 0xffffffff;
        }
        param_2 = *(int *)(param_1 + 8);
        uVar3 = *(uint *)(param_1 + 0xc);
      }
      param_5 = param_5 + 1;
      uVar3 = uVar3 - 1;
      uVar2 = param_2 >> (uVar3 & 0xff) & 1U | uVar2 << 1;
    } while (*(int *)(param_4 + param_5 * 4) < (int)uVar2);
  }
  *(int *)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 0xc) = uVar3;
  if ((int)param_5 < 0x11) {
    return (uint)*(byte *)(*(int *)(param_4 + 0x8c) + *(int *)(param_4 + param_5 * 4 + 0x48) +
                          uVar2 + 0x11);
  }
  *(undefined4 *)(**(int **)(param_1 + 0x10) + 0x14) = 0x76;
  (**(code **)(**(int **)(param_1 + 0x10) + 4))(*(int **)(param_1 + 0x10),0xffffffff);
  return 0;
}



// Address: 4a15af2c

void FUN_4a15af2c(int param_1,int param_2,short *param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  uint local_b8 [32];
  int local_38;
  int iStack_34;
  int iStack_30;
  short *psStack_2c;
  int local_28;
  
  local_28 = param_4;
  psStack_2c = param_3;
  iStack_30 = param_2;
  iStack_34 = param_1;
  puVar9 = local_b8;
  puVar6 = local_b8;
  iVar11 = *(int *)(param_1 + 0x144) + 0x80;
  piVar7 = *(int **)(param_2 + 0x50);
  iVar5 = 8;
  uVar16 = 0x1ccd;
  do {
    bVar19 = param_3[8] == 0;
    if (bVar19) {
      uVar16 = (uint)(ushort)param_3[0x10];
    }
    bVar20 = bVar19 && uVar16 == 0;
    if (bVar19 && uVar16 == 0) {
      bVar20 = param_3[0x18] == 0;
    }
    bVar19 = false;
    if (bVar20) {
      bVar19 = param_3[0x28] == 0;
    }
    if (bVar19) {
      sVar2 = param_3[0x30];
      bVar19 = sVar2 != 0;
      if (!bVar19) {
        sVar2 = param_3[0x38];
      }
      if (bVar19 || sVar2 != 0) goto LAB_4a15afd0;
      uVar16 = *piVar7 * (int)*param_3 * 4;
      *puVar9 = uVar16;
      puVar9[8] = uVar16;
      puVar9[0x10] = uVar16;
      puVar9[0x18] = uVar16;
    }
    else {
LAB_4a15afd0:
      iVar10 = (int)*param_3 * *piVar7 * 0x4000;
      iVar17 = (int)param_3[0x10] * piVar7[0x10] * 0x3b21 +
               (int)param_3[0x30] * piVar7[0x30] * -0x187e;
      iVar15 = iVar10 + iVar17;
      local_38 = iVar10 - iVar17;
      sVar2 = param_3[0x38];
      sVar3 = param_3[0x28];
      iVar12 = piVar7[0x38];
      iVar17 = piVar7[0x28];
      sVar4 = param_3[0x18];
      iVar13 = piVar7[0x18];
      iVar10 = piVar7[8] * (int)param_3[8];
      iVar14 = iVar10 * 0x5203 +
               iVar12 * sVar2 * -0x1050 + sVar3 * iVar17 * -0x133e + iVar13 * sVar4 * 0x1ccd;
      *puVar9 = iVar15 + iVar14 + 0x800 >> 0xc;
      puVar9[0x18] = (iVar15 - iVar14) + 0x800 >> 0xc;
      iVar10 = iVar13 * sVar4 * -0x4587 + sVar3 * iVar17 * 0x2e75 + iVar12 * sVar2 * -0x6c2 +
               iVar10 * 0x21f9;
      puVar9[8] = local_38 + iVar10 + 0x800 >> 0xc;
      uVar16 = (local_38 - iVar10) + 0x800 >> 0xc;
      puVar9[0x10] = uVar16;
    }
    do {
      iVar5 = iVar5 + -1;
      param_3 = param_3 + 1;
      piVar7 = piVar7 + 1;
      puVar9 = puVar9 + 1;
      if (iVar5 < 1) {
        iVar5 = 0;
        goto LAB_4a15b134;
      }
    } while (iVar5 == 4);
  } while( true );
LAB_4a15b134:
  iVar15 = puVar6[1];
  iVar10 = *(int *)(local_28 + iVar5 * 4);
  bVar19 = iVar15 == 0;
  puVar8 = (undefined1 *)(param_5 + iVar10);
  if (bVar19) {
    iVar10 = puVar6[2];
  }
  bVar20 = bVar19 && iVar10 == 0;
  if (bVar19 && iVar10 == 0) {
    bVar20 = puVar6[3] == 0;
  }
  bVar19 = false;
  if (bVar20) {
    bVar19 = puVar6[5] == 0;
  }
  if (bVar19) {
    iVar10 = puVar6[6];
    bVar19 = iVar10 != 0;
    if (!bVar19) {
      iVar10 = puVar6[7];
    }
    if (bVar19 || iVar10 != 0) goto LAB_4a15b1a0;
    uVar1 = *(undefined1 *)(iVar11 + ((*puVar6 + 0x10 & 0x7fff) >> 5));
    *puVar8 = uVar1;
    puVar8[1] = uVar1;
    puVar8[2] = uVar1;
    puVar8[3] = uVar1;
  }
  else {
LAB_4a15b1a0:
    iVar17 = puVar6[2] * 0x3b21 + puVar6[6] * -0x187e;
    iVar10 = *puVar6 * 0x4000 + iVar17;
    iVar17 = *puVar6 * 0x4000 - iVar17;
    iVar13 = puVar6[5];
    iVar12 = puVar6[7];
    iVar14 = puVar6[3];
    iVar18 = iVar15 * 0x5203 + iVar14 * 0x1ccd + iVar12 * -0x1050 + iVar13 * -0x133e;
    *puVar8 = *(undefined1 *)(iVar11 + ((iVar10 + iVar18 + 0x40000U & 0x1fffffff) >> 0x13));
    iVar15 = iVar13 * 0x2e75 + iVar12 * -0x6c2 + iVar14 * -0x4587 + iVar15 * 0x21f9;
    puVar8[3] = *(undefined1 *)(iVar11 + (((iVar10 - iVar18) + 0x40000U & 0x1fffffff) >> 0x13));
    puVar8[1] = *(undefined1 *)(iVar11 + ((iVar17 + iVar15 + 0x40000U & 0x1fffffff) >> 0x13));
    puVar8[2] = *(undefined1 *)(iVar11 + (((iVar17 - iVar15) + 0x40000U & 0x1fffffff) >> 0x13));
  }
  iVar5 = iVar5 + 1;
  puVar6 = puVar6 + 8;
  if (3 < iVar5) {
    return;
  }
  goto LAB_4a15b134;
}



// Address: 4a15b2d0

void FUN_4a15b2d0(int param_1,int param_2,short *param_3,int param_4,int param_5)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  bool bVar13;
  undefined4 local_164 [16];
  undefined4 local_124 [8];
  undefined4 local_104 [8];
  undefined4 local_e4 [8];
  undefined4 local_c4 [8];
  undefined4 local_a4 [8];
  undefined4 local_84 [8];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
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
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  
  puVar8 = *(undefined4 **)(param_2 + 0x50);
  puVar6 = local_164;
  iVar9 = *(int *)(param_1 + 0x144) + 0x80;
  iVar10 = 8;
  do {
    local_28 = (uint)param_3[8];
    bVar12 = local_28 == 0;
    uVar2 = local_28;
    if (bVar12) {
      uVar2 = (uint)(ushort)param_3[0x10];
    }
    bVar13 = bVar12 && uVar2 == 0;
    if (bVar12 && uVar2 == 0) {
      bVar13 = param_3[0x18] == 0;
    }
    bVar12 = false;
    if (bVar13) {
      bVar12 = param_3[0x20] == 0;
    }
    if (bVar12) {
      sVar1 = param_3[0x28];
      bVar12 = sVar1 == 0;
      if (bVar12) {
        sVar1 = param_3[0x30];
      }
      bVar13 = bVar12 && sVar1 == 0;
      if (bVar12 && sVar1 == 0) {
        bVar13 = param_3[0x38] == 0;
      }
      if (!bVar13) goto LAB_4a15b37c;
      uVar3 = FUN_4a171fac((int)*param_3);
      uVar3 = FUN_4a17211c(uVar3,*puVar8);
      *puVar6 = uVar3;
      puVar6[8] = uVar3;
      puVar6[0x10] = uVar3;
      puVar6[0x18] = uVar3;
      puVar6[0x20] = uVar3;
      puVar6[0x28] = uVar3;
      puVar6[0x30] = uVar3;
      puVar6[0x38] = uVar3;
    }
    else {
LAB_4a15b37c:
      uVar3 = FUN_4a171fac((int)*param_3);
      local_2c = FUN_4a17211c(uVar3,*puVar8);
      uVar3 = FUN_4a171fac((int)param_3[0x10]);
      local_30 = FUN_4a17211c(uVar3,puVar8[0x10]);
      uVar3 = FUN_4a171fac((int)param_3[0x20]);
      uVar3 = FUN_4a17211c(uVar3,puVar8[0x20]);
      uVar11 = FUN_4a171fac((int)param_3[0x30]);
      local_38 = FUN_4a17211c(uVar11,puVar8[0x30]);
      local_48 = FUN_4a171a94(local_2c,uVar3);
      local_4c = FUN_4a1725c0(local_2c,uVar3);
      local_50 = FUN_4a171a94(local_30,local_38);
      uVar3 = FUN_4a1725c0(local_30,local_38);
      uVar3 = FUN_4a17211c(uVar3,DAT_4a15b8d0);
      uVar3 = FUN_4a1725c0(uVar3,local_50);
      local_2c = FUN_4a171a94(local_48,local_50);
      local_38 = FUN_4a1725c0(local_48,local_50);
      local_30 = FUN_4a171a94(local_4c,uVar3);
      local_34 = FUN_4a1725c0(local_4c,uVar3);
      uVar3 = FUN_4a171fac(local_28);
      uVar3 = FUN_4a17211c(uVar3,puVar8[8]);
      uVar11 = FUN_4a171fac((int)param_3[0x18]);
      local_3c = FUN_4a17211c(uVar11,puVar8[0x18]);
      uVar11 = FUN_4a171fac((int)param_3[0x28]);
      local_40 = FUN_4a17211c(uVar11,puVar8[0x28]);
      uVar11 = FUN_4a171fac((int)param_3[0x38]);
      local_44 = FUN_4a17211c(uVar11,puVar8[0x38]);
      local_64 = FUN_4a171a94(local_40,local_3c);
      local_58 = FUN_4a1725c0(local_40,local_3c);
      local_5c = FUN_4a171a94(uVar3,local_44);
      local_60 = FUN_4a1725c0(uVar3,local_44);
      local_44 = FUN_4a171a94(local_5c,local_64);
      uVar3 = FUN_4a1725c0(local_5c,local_64);
      uVar3 = FUN_4a17211c(uVar3,DAT_4a15b8d0);
      uVar11 = FUN_4a171a94(local_58,local_60);
      local_54 = FUN_4a17211c(uVar11,DAT_4a15b8d4);
      uVar11 = FUN_4a17211c(local_60,DAT_4a15b8d8);
      local_48 = FUN_4a1725c0(uVar11,local_54);
      uVar11 = FUN_4a17211c(local_58,DAT_4a15b8dc);
      uVar11 = FUN_4a171a94(uVar11,local_54);
      local_40 = FUN_4a1725c0(uVar11,local_44);
      local_3c = FUN_4a1725c0(uVar3,local_40);
      uVar3 = FUN_4a171a94(local_48,local_3c);
      uVar11 = FUN_4a171a94(local_2c,local_44);
      *puVar6 = uVar11;
      uVar11 = FUN_4a1725c0(local_2c,local_44);
      puVar6[0x38] = uVar11;
      uVar11 = FUN_4a171a94(local_30,local_40);
      puVar6[8] = uVar11;
      uVar11 = FUN_4a1725c0(local_30,local_40);
      puVar6[0x30] = uVar11;
      uVar11 = FUN_4a171a94(local_34,local_3c);
      puVar6[0x10] = uVar11;
      uVar11 = FUN_4a1725c0(local_34,local_3c);
      puVar6[0x28] = uVar11;
      uVar11 = FUN_4a171a94(local_38,uVar3);
      puVar6[0x20] = uVar11;
      uVar3 = FUN_4a1725c0(local_38,uVar3);
      puVar6[0x18] = uVar3;
    }
    puVar8 = puVar8 + 1;
    param_3 = param_3 + 1;
    puVar6 = puVar6 + 1;
    iVar10 = iVar10 + -1;
    if (iVar10 < 1) {
      puVar6 = local_164;
      iVar10 = 0;
      do {
        uVar3 = puVar6[4];
        uVar11 = *puVar6;
        puVar7 = (undefined1 *)(*(int *)(param_4 + iVar10 * 4) + param_5);
        local_48 = FUN_4a171a94(uVar11,uVar3);
        local_4c = FUN_4a1725c0(uVar11,uVar3);
        uVar3 = puVar6[6];
        uVar11 = puVar6[2];
        local_50 = FUN_4a171a94(uVar11,uVar3);
        uVar3 = FUN_4a1725c0(uVar11,uVar3);
        uVar3 = FUN_4a17211c(uVar3,DAT_4a15b8d0);
        uVar3 = FUN_4a1725c0(uVar3,local_50);
        local_2c = FUN_4a171a94(local_48,local_50);
        local_38 = FUN_4a1725c0(local_48,local_50);
        local_30 = FUN_4a171a94(local_4c,uVar3);
        local_34 = FUN_4a1725c0(local_4c,uVar3);
        uVar3 = puVar6[3];
        uVar11 = puVar6[5];
        local_64 = FUN_4a171a94(uVar11,uVar3);
        local_58 = FUN_4a1725c0(uVar11,uVar3);
        uVar3 = puVar6[7];
        uVar11 = puVar6[1];
        local_5c = FUN_4a171a94(uVar11,uVar3);
        uVar3 = FUN_4a1725c0(uVar11,uVar3);
        local_44 = FUN_4a171a94(local_5c,local_64);
        uVar11 = FUN_4a1725c0(local_5c,local_64);
        local_4c = FUN_4a17211c(uVar11,DAT_4a15b8d0);
        uVar11 = FUN_4a171a94(local_58,uVar3);
        uVar11 = FUN_4a17211c(uVar11,DAT_4a15b8d4);
        uVar3 = FUN_4a17211c(uVar3,DAT_4a15b8d8);
        uVar3 = FUN_4a1725c0(uVar3,uVar11);
        uVar4 = FUN_4a17211c(local_58,DAT_4a15b8dc);
        uVar11 = FUN_4a171a94(uVar4,uVar11);
        uVar11 = FUN_4a1725c0(uVar11,local_44);
        local_3c = FUN_4a1725c0(local_4c,uVar11);
        uVar3 = FUN_4a171a94(uVar3,local_3c);
        FUN_4a171a94(local_2c,local_44);
        iVar5 = FUN_4a171e1c();
        *puVar7 = *(undefined1 *)(iVar9 + ((iVar5 + 4U & 0x1fff) >> 3));
        FUN_4a1725c0(local_2c,local_44);
        iVar5 = FUN_4a171e1c();
        puVar7[7] = *(undefined1 *)(iVar9 + ((iVar5 + 4U & 0x1fff) >> 3));
        FUN_4a171a94(local_30,uVar11);
        iVar5 = FUN_4a171e1c();
        puVar7[1] = *(undefined1 *)(iVar9 + ((iVar5 + 4U & 0x1fff) >> 3));
        FUN_4a1725c0(local_30,uVar11);
        iVar5 = FUN_4a171e1c();
        puVar7[6] = *(undefined1 *)(iVar9 + ((iVar5 + 4U & 0x1fff) >> 3));
        FUN_4a171a94(local_34,local_3c);
        iVar5 = FUN_4a171e1c();
        puVar7[2] = *(undefined1 *)(iVar9 + ((iVar5 + 4U & 0x1fff) >> 3));
        FUN_4a1725c0(local_34,local_3c);
        iVar5 = FUN_4a171e1c();
        puVar7[5] = *(undefined1 *)(iVar9 + ((iVar5 + 4U & 0x1fff) >> 3));
        FUN_4a171a94(local_38,uVar3);
        iVar5 = FUN_4a171e1c();
        puVar7[4] = *(undefined1 *)(iVar9 + ((iVar5 + 4U & 0x1fff) >> 3));
        FUN_4a1725c0(local_38,uVar3);
        iVar5 = FUN_4a171e1c();
        iVar10 = iVar10 + 1;
        puVar6 = puVar6 + 8;
        puVar7[3] = *(undefined1 *)(iVar9 + ((iVar5 + 4U & 0x1fff) >> 3));
      } while (iVar10 < 8);
      return;
    }
  } while( true );
}



// Address: 4a15b8e0

void FUN_4a15b8e0(int param_1,int param_2,short *param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  short sVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint in_r12;
  uint uVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  bool bVar22;
  uint local_138 [16];
  uint local_f8 [8];
  uint local_d8 [8];
  uint local_b8 [8];
  uint local_98 [8];
  uint local_78 [8];
  uint local_58 [8];
  int local_38;
  int iStack_34;
  int iStack_30;
  short *psStack_2c;
  int local_28;
  
  local_28 = param_4;
  psStack_2c = param_3;
  iStack_30 = param_2;
  iStack_34 = param_1;
  piVar5 = *(int **)(param_2 + 0x50);
  puVar3 = local_138;
  puVar4 = local_138;
  iVar7 = *(int *)(param_1 + 0x144) + 0x80;
  iVar9 = 8;
  do {
    bVar21 = param_3[8] == 0;
    if (bVar21) {
      in_r12 = (uint)(ushort)param_3[0x10];
    }
    bVar22 = bVar21 && in_r12 == 0;
    if (bVar21 && in_r12 == 0) {
      bVar22 = param_3[0x18] == 0;
    }
    bVar21 = false;
    if (bVar22) {
      bVar21 = param_3[0x20] == 0;
    }
    if (bVar21) {
      sVar2 = param_3[0x28];
      bVar21 = sVar2 == 0;
      if (bVar21) {
        sVar2 = param_3[0x30];
      }
      bVar22 = bVar21 && sVar2 == 0;
      if (bVar21 && sVar2 == 0) {
        bVar22 = param_3[0x38] == 0;
      }
      if (!bVar22) goto LAB_4a15b970;
      in_r12 = *piVar5 * (int)*param_3;
      *puVar3 = in_r12;
      puVar3[8] = in_r12;
      puVar3[0x10] = in_r12;
      puVar3[0x18] = in_r12;
      puVar3[0x20] = in_r12;
      puVar3[0x28] = in_r12;
      puVar3[0x30] = in_r12;
      puVar3[0x38] = in_r12;
    }
    else {
LAB_4a15b970:
      iVar19 = *piVar5 * (int)*param_3 + (int)param_3[0x20] * piVar5[0x20];
      iVar13 = *piVar5 * (int)*param_3 - (int)param_3[0x20] * piVar5[0x20];
      iVar14 = piVar5[0x10] * (int)param_3[0x10] + piVar5[0x30] * (int)param_3[0x30];
      iVar10 = ((piVar5[0x10] * (int)param_3[0x10] - piVar5[0x30] * (int)param_3[0x30]) * 0x16a >> 8
               ) - iVar14;
      iVar11 = iVar19 + iVar14;
      local_38 = iVar19 - iVar14;
      iVar12 = iVar13 + iVar10;
      iVar13 = iVar13 - iVar10;
      iVar19 = (int)param_3[8] * piVar5[8];
      iVar20 = (int)param_3[0x28] * piVar5[0x28] + piVar5[0x18] * (int)param_3[0x18];
      iVar15 = (int)param_3[0x28] * piVar5[0x28] - piVar5[0x18] * (int)param_3[0x18];
      iVar16 = iVar19 + piVar5[0x38] * (int)param_3[0x38];
      iVar19 = iVar19 - piVar5[0x38] * (int)param_3[0x38];
      iVar10 = iVar16 + iVar20;
      iVar14 = (iVar15 + iVar19) * 0x1d9 >> 8;
      iVar17 = (iVar14 + (iVar15 * -0x29d >> 8)) - iVar10;
      puVar3[0x38] = iVar11 - iVar10;
      puVar3[8] = iVar12 + iVar17;
      iVar15 = ((iVar16 - iVar20) * 0x16a >> 8) - iVar17;
      puVar3[0x30] = iVar12 - iVar17;
      puVar3[0x10] = iVar13 + iVar15;
      puVar3[0x28] = iVar13 - iVar15;
      iVar15 = ((iVar19 * 0x115 >> 8) - iVar14) + iVar15;
      *puVar3 = iVar11 + iVar10;
      puVar3[0x20] = local_38 + iVar15;
      in_r12 = local_38 - iVar15;
      puVar3[0x18] = in_r12;
    }
    param_3 = param_3 + 1;
    piVar5 = piVar5 + 1;
    puVar3 = puVar3 + 1;
    iVar9 = iVar9 + -1;
  } while (0 < iVar9);
  iVar9 = 0;
  do {
    uVar8 = puVar4[1];
    uVar18 = *(uint *)(local_28 + iVar9 * 4);
    bVar21 = uVar8 == 0;
    puVar6 = (undefined1 *)(param_5 + uVar18);
    if (bVar21) {
      uVar18 = puVar4[2];
    }
    bVar22 = bVar21 && uVar18 == 0;
    if (bVar21 && uVar18 == 0) {
      bVar22 = puVar4[3] == 0;
    }
    bVar21 = false;
    if (bVar22) {
      bVar21 = puVar4[4] == 0;
    }
    if (bVar21) {
      uVar18 = puVar4[5];
      bVar21 = uVar18 == 0;
      if (bVar21) {
        uVar18 = puVar4[6];
      }
      bVar22 = bVar21 && uVar18 == 0;
      if (bVar21 && uVar18 == 0) {
        bVar22 = puVar4[7] == 0;
      }
      if (!bVar22) goto LAB_4a15bb54;
      uVar1 = *(undefined1 *)(iVar7 + ((*puVar4 & 0x7fff) >> 5));
      *puVar6 = uVar1;
      puVar6[1] = uVar1;
      puVar6[2] = uVar1;
      puVar6[3] = uVar1;
      puVar6[4] = uVar1;
      puVar6[5] = uVar1;
      puVar6[6] = uVar1;
      puVar6[7] = uVar1;
    }
    else {
LAB_4a15bb54:
      iVar13 = *puVar4 - puVar4[4];
      iVar11 = *puVar4 + puVar4[4];
      iVar19 = puVar4[2] + puVar4[6];
      iVar14 = ((int)((puVar4[2] - puVar4[6]) * 0x16a) >> 8) - iVar19;
      iVar10 = iVar11 + iVar19;
      iVar11 = iVar11 - iVar19;
      iVar12 = iVar13 + iVar14;
      iVar13 = iVar13 - iVar14;
      iVar16 = puVar4[5] - puVar4[3];
      iVar15 = puVar4[3] + puVar4[5];
      iVar20 = uVar8 + puVar4[7];
      iVar17 = uVar8 - puVar4[7];
      iVar19 = iVar20 + iVar15;
      iVar14 = (iVar16 + iVar17) * 0x1d9 >> 8;
      iVar16 = (iVar14 + (iVar16 * -0x29d >> 8)) - iVar19;
      *puVar6 = *(undefined1 *)(iVar7 + ((iVar10 + iVar19 & 0x7fffU) >> 5));
      iVar15 = ((iVar20 - iVar15) * 0x16a >> 8) - iVar16;
      iVar14 = ((iVar17 * 0x115 >> 8) - iVar14) + iVar15;
      puVar6[7] = *(undefined1 *)(iVar7 + ((iVar10 - iVar19 & 0x7fffU) >> 5));
      puVar6[1] = *(undefined1 *)(iVar7 + ((iVar12 + iVar16 & 0x7fffU) >> 5));
      puVar6[6] = *(undefined1 *)(iVar7 + ((iVar12 - iVar16 & 0x7fffU) >> 5));
      puVar6[2] = *(undefined1 *)(iVar7 + ((iVar13 + iVar15 & 0x7fffU) >> 5));
      puVar6[5] = *(undefined1 *)(iVar7 + ((iVar13 - iVar15 & 0x7fffU) >> 5));
      puVar6[4] = *(undefined1 *)(iVar7 + ((iVar11 + iVar14 & 0x7fffU) >> 5));
      puVar6[3] = *(undefined1 *)(iVar7 + ((iVar11 - iVar14 & 0x7fffU) >> 5));
    }
    iVar9 = iVar9 + 1;
    puVar4 = puVar4 + 8;
    if (7 < iVar9) {
      return;
    }
  } while( true );
}



// Address: 4a15bca8

void FUN_4a15bca8(int param_1,int param_2,short *param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  short sVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint in_r12;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  bool bVar21;
  uint local_158 [16];
  uint local_118 [8];
  uint local_f8 [8];
  uint local_d8 [8];
  uint local_b8 [8];
  uint local_98 [8];
  uint local_78 [8];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  short *psStack_2c;
  int local_28;
  
  local_28 = param_4;
  psStack_2c = param_3;
  iStack_30 = param_2;
  iStack_34 = param_1;
  piVar5 = *(int **)(param_2 + 0x50);
  puVar3 = local_158;
  puVar4 = local_158;
  iVar7 = *(int *)(param_1 + 0x144) + 0x80;
  iVar11 = 8;
  do {
    bVar20 = param_3[8] == 0;
    if (bVar20) {
      in_r12 = (uint)(ushort)param_3[0x10];
    }
    bVar21 = bVar20 && in_r12 == 0;
    if (bVar20 && in_r12 == 0) {
      bVar21 = param_3[0x18] == 0;
    }
    bVar20 = false;
    if (bVar21) {
      bVar20 = param_3[0x20] == 0;
    }
    if (bVar20) {
      sVar2 = param_3[0x28];
      bVar20 = sVar2 == 0;
      if (bVar20) {
        sVar2 = param_3[0x30];
      }
      bVar21 = bVar20 && sVar2 == 0;
      if (bVar20 && sVar2 == 0) {
        bVar21 = param_3[0x38] == 0;
      }
      if (!bVar21) goto LAB_4a15bd3c;
      in_r12 = *piVar5 * (int)*param_3 * 4;
      *puVar3 = in_r12;
      puVar3[8] = in_r12;
      puVar3[0x10] = in_r12;
      puVar3[0x18] = in_r12;
      puVar3[0x20] = in_r12;
      puVar3[0x28] = in_r12;
      puVar3[0x30] = in_r12;
      puVar3[0x38] = in_r12;
    }
    else {
LAB_4a15bd3c:
      iVar8 = ((int)param_3[0x10] * piVar5[0x10] + (int)param_3[0x30] * piVar5[0x30]) * 0x1151;
      iVar9 = (int)param_3[0x30] * piVar5[0x30] * -0x3b21 + iVar8;
      iVar8 = iVar8 + (int)param_3[0x10] * piVar5[0x10] * 0x187e;
      iVar16 = ((int)*param_3 * *piVar5 + piVar5[0x20] * (int)param_3[0x20]) * 0x2000;
      iVar12 = ((int)*param_3 * *piVar5 - piVar5[0x20] * (int)param_3[0x20]) * 0x2000;
      iVar10 = iVar16 + iVar8;
      local_50 = iVar16 - iVar8;
      local_48 = iVar12 + iVar9;
      local_4c = iVar12 - iVar9;
      iVar14 = (int)param_3[0x28] * piVar5[0x28];
      iVar19 = (int)param_3[0x38] * piVar5[0x38];
      iVar8 = piVar5[8] * (int)param_3[8];
      iVar12 = piVar5[0x18] * (int)param_3[0x18];
      local_54 = iVar19 + iVar8;
      local_58 = iVar14 + iVar12;
      iVar13 = (iVar19 + iVar12 + iVar14 + iVar8) * 0x25a1;
      local_3c = iVar14 * 0x41b3;
      local_44 = iVar8 * 0x300b;
      iVar16 = (iVar19 + iVar8) * -0x1ccd;
      local_40 = iVar12 * 0x6254;
      iVar15 = (iVar14 + iVar12) * -0x5203;
      iVar9 = (iVar19 + iVar12) * -0x3ec5 + iVar13;
      iVar13 = (iVar14 + iVar8) * -0xc7c + iVar13;
      iVar8 = iVar8 * 0x300b + iVar16 + iVar13;
      *puVar3 = iVar10 + iVar8 + 0x400 >> 0xb;
      puVar3[0x38] = (iVar10 - iVar8) + 0x400 >> 0xb;
      iVar12 = iVar9 + iVar15 + iVar12 * 0x6254;
      puVar3[8] = local_48 + iVar12 + 0x400 >> 0xb;
      iVar8 = iVar14 * 0x41b3 + iVar15 + iVar13;
      puVar3[0x30] = (local_48 - iVar12) + 0x400 >> 0xb;
      iVar16 = iVar16 + iVar9 + iVar19 * 0x98e;
      puVar3[0x10] = local_4c + iVar8 + 0x400 >> 0xb;
      puVar3[0x28] = (local_4c - iVar8) + 0x400 >> 0xb;
      puVar3[0x18] = local_50 + iVar16 + 0x400 >> 0xb;
      in_r12 = (local_50 - iVar16) + 0x400 >> 0xb;
      puVar3[0x20] = in_r12;
    }
    param_3 = param_3 + 1;
    piVar5 = piVar5 + 1;
    puVar3 = puVar3 + 1;
    iVar11 = iVar11 + -1;
  } while (0 < iVar11);
  iVar11 = 0;
  do {
    iVar12 = puVar4[1];
    iVar16 = *(int *)(local_28 + iVar11 * 4);
    bVar20 = iVar12 == 0;
    puVar6 = (undefined1 *)(param_5 + iVar16);
    if (bVar20) {
      iVar16 = puVar4[2];
    }
    bVar21 = bVar20 && iVar16 == 0;
    if (bVar20 && iVar16 == 0) {
      bVar21 = puVar4[3] == 0;
    }
    bVar20 = false;
    if (bVar21) {
      bVar20 = puVar4[4] == 0;
    }
    if (bVar20) {
      iVar16 = puVar4[5];
      bVar20 = iVar16 == 0;
      if (bVar20) {
        iVar16 = puVar4[6];
      }
      bVar21 = bVar20 && iVar16 == 0;
      if (bVar20 && iVar16 == 0) {
        bVar21 = puVar4[7] == 0;
      }
      if (!bVar21) goto LAB_4a15c018;
      uVar1 = *(undefined1 *)(iVar7 + ((*puVar4 + 0x10 & 0x7fff) >> 5));
      *puVar6 = uVar1;
      puVar6[1] = uVar1;
      puVar6[2] = uVar1;
      puVar6[3] = uVar1;
      puVar6[4] = uVar1;
      puVar6[5] = uVar1;
      puVar6[6] = uVar1;
      puVar6[7] = uVar1;
    }
    else {
LAB_4a15c018:
      iVar16 = (puVar4[2] + puVar4[6]) * 0x1151;
      iVar8 = puVar4[6] * -0x3b21 + iVar16;
      iVar16 = iVar16 + puVar4[2] * 0x187e;
      local_50 = (*puVar4 + puVar4[4]) * 0x2000;
      local_4c = (*puVar4 - puVar4[4]) * 0x2000;
      iVar15 = local_4c + iVar8;
      iVar14 = local_50 + iVar16;
      local_4c = local_4c - iVar8;
      local_50 = local_50 - iVar16;
      iVar13 = puVar4[7];
      iVar8 = puVar4[5];
      iVar9 = puVar4[3];
      local_54 = iVar13 + iVar12;
      local_58 = iVar8 + iVar9;
      iVar19 = (iVar13 + iVar9 + iVar8 + iVar12) * 0x25a1;
      local_38 = iVar13 * 0x98e;
      local_44 = iVar12 * 0x300b;
      local_40 = iVar9 * 0x6254;
      iVar16 = (iVar13 + iVar12) * -0x1ccd;
      local_3c = iVar8 * 0x41b3;
      iVar10 = (iVar8 + iVar9) * -0x5203;
      iVar17 = (iVar13 + iVar9) * -0x3ec5 + iVar19;
      iVar19 = (iVar8 + iVar12) * -0xc7c + iVar19;
      iVar18 = iVar17 + iVar10 + iVar9 * 0x6254;
      iVar9 = iVar16 + iVar17 + iVar13 * 0x98e;
      iVar16 = iVar12 * 0x300b + iVar16 + iVar19;
      *puVar6 = *(undefined1 *)(iVar7 + ((iVar14 + iVar16 + 0x20000U & 0xfffffff) >> 0x12));
      iVar12 = iVar8 * 0x41b3 + iVar10 + iVar19;
      puVar6[7] = *(undefined1 *)(iVar7 + (((iVar14 - iVar16) + 0x20000U & 0xfffffff) >> 0x12));
      puVar6[1] = *(undefined1 *)(iVar7 + ((iVar15 + iVar18 + 0x20000U & 0xfffffff) >> 0x12));
      puVar6[6] = *(undefined1 *)(iVar7 + (((iVar15 - iVar18) + 0x20000U & 0xfffffff) >> 0x12));
      puVar6[2] = *(undefined1 *)(iVar7 + ((local_4c + iVar12 + 0x20000U & 0xfffffff) >> 0x12));
      puVar6[5] = *(undefined1 *)(iVar7 + (((local_4c - iVar12) + 0x20000U & 0xfffffff) >> 0x12));
      puVar6[3] = *(undefined1 *)(iVar7 + ((local_50 + iVar9 + 0x20000U & 0xfffffff) >> 0x12));
      puVar6[4] = *(undefined1 *)(iVar7 + (((local_50 - iVar9) + 0x20000U & 0xfffffff) >> 0x12));
    }
    iVar11 = iVar11 + 1;
    puVar4 = puVar4 + 8;
    if (7 < iVar11) {
      return;
    }
  } while( true );
}



// Address: 4a15c248

/* WARNING: Type propagation algorithm not settling */

void FUN_4a15c248(int *param_1,int param_2,uint param_3,int *param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  bool bVar13;
  bool bVar14;
  int aiStack_548 [257];
  byte abStack_141 [261];
  int local_3c;
  int *piStack_38;
  int local_34;
  uint uStack_30;
  int *piStack_2c;
  
  piStack_2c = param_4;
  uStack_30 = param_3;
  local_34 = param_2;
  piStack_38 = param_1;
  piVar12 = aiStack_548;
  if (3 < param_3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x32;
    *(uint *)(*param_1 + 0x18) = param_3;
    (**(code **)*param_1)(param_1);
  }
  if (local_34 == 0) {
    pbVar9 = (byte *)param_1[param_3 + 0x31];
  }
  else {
    pbVar9 = (byte *)param_1[param_3 + 0x2d];
  }
  if (pbVar9 == (byte *)0x0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x32;
    *(uint *)(*param_1 + 0x18) = param_3;
    (**(code **)*param_1)(param_1);
  }
  if (*param_4 == 0) {
    iVar3 = (**(code **)param_1[1])(param_1,1,0x590);
    *param_4 = iVar3;
  }
  param_4 = (int *)*param_4;
  iVar3 = 0;
  iVar10 = 1;
  param_4[0x23] = (int)pbVar9;
  do {
    uVar11 = (uint)pbVar9[iVar10];
    if (0x100 < (int)(iVar3 + uVar11)) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    if (uVar11 != 0) {
      bVar1 = (byte)iVar10;
      pbVar4 = abStack_141 + iVar3;
      if ((uVar11 - 1 & 1) == 0) {
        abStack_141[iVar3 + 1] = bVar1;
        pbVar4 = abStack_141 + iVar3 + 1;
      }
      for (iVar6 = (int)uVar11 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
        pbVar4[1] = bVar1;
        pbVar4 = pbVar4 + 2;
        *pbVar4 = bVar1;
      }
      iVar3 = iVar3 + (uVar11 - 1) + 1;
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0x11);
  abStack_141[iVar3 + 1] = 0;
  local_3c = iVar3;
  uVar11 = (uint)abStack_141[1];
  iVar3 = 0;
  iVar10 = 0;
  if (uVar11 != 0) {
    do {
      bVar1 = abStack_141[iVar10 + 1];
      while (bVar1 == uVar11) {
        aiStack_548[iVar10 + 1] = iVar3;
        iVar3 = iVar3 + 1;
        bVar1 = abStack_141[iVar10 + 2];
        iVar10 = iVar10 + 1;
      }
      if (1 << (uVar11 & 0xff) <= iVar3) {
        *(undefined4 *)(*param_1 + 0x14) = 8;
        (**(code **)*param_1)(param_1);
      }
      iVar3 = iVar3 << 1;
      uVar11 = uVar11 + 1;
    } while (abStack_141[iVar10 + 1] != 0);
  }
  iVar3 = 0;
  piVar8 = param_4 + 0x13;
  iVar10 = 0x10;
  pbVar4 = pbVar9;
  piVar5 = param_4;
  do {
    piVar5 = piVar5 + 1;
    pbVar4 = pbVar4 + 1;
    if (*pbVar4 == 0) {
      *piVar5 = -1;
    }
    else {
      *piVar8 = iVar3 - aiStack_548[iVar3 + 1];
      iVar3 = iVar3 + (uint)*pbVar4;
      *piVar5 = aiStack_548[iVar3];
    }
    iVar10 = iVar10 + -1;
    piVar8 = piVar8 + 1;
  } while (iVar10 != 0);
  param_4[0x11] = 0xfffff;
  FUN_4a00121c(param_4 + 0x24,0x400);
  iVar10 = 0;
  iVar3 = 1;
  do {
    iVar6 = 1;
    if (pbVar9[iVar3] != 0 && pbVar9[iVar3] != 0xffffffff) {
      uVar11 = 1 << (8U - iVar3 & 0xff);
      do {
        iVar7 = aiStack_548[iVar10 + 1] << (8U - iVar3 & 0xff);
        if (0 < (int)uVar11) {
          piVar5 = param_4 + iVar7 + 0x23;
          pbVar4 = (byte *)((int)param_4 + iVar7 + 0x48f);
          if ((uVar11 & 1) != 0) {
            piVar5 = param_4 + iVar7 + 0x24;
            *piVar5 = iVar3;
            pbVar4 = (byte *)((int)param_4 + iVar7 + 0x490);
            *pbVar4 = pbVar9[iVar10 + 0x11];
          }
          for (iVar7 = (int)uVar11 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
            piVar5[1] = iVar3;
            pbVar4[1] = pbVar9[iVar10 + 0x11];
            piVar5 = piVar5 + 2;
            *piVar5 = iVar3;
            pbVar4 = pbVar4 + 2;
            *pbVar4 = pbVar9[iVar10 + 0x11];
          }
        }
        iVar6 = iVar6 + 1;
        iVar10 = iVar10 + 1;
      } while (iVar6 < (int)(pbVar9[iVar3] + 1));
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 9);
  bVar13 = local_34 != 0;
  iVar3 = 0;
  if (bVar13) {
    param_4 = (int *)0x0;
    iVar3 = local_3c;
  }
  bVar2 = iVar3 < 0;
  bVar14 = iVar3 == 0;
  if ((!bVar13 || bVar14) || bVar2) {
    piVar12 = (int *)&stack0xffffffd8;
  }
  if ((!bVar13 || bVar14) || bVar2) {
    pbVar9 = (byte *)*piVar12;
    param_4 = (int *)piVar12[1];
    param_1 = (int *)piVar12[6];
    piVar12 = piVar12 + 10;
  }
  if ((!bVar13 || bVar14) || bVar2) {
    return;
  }
  do {
    if (0xf < (pbVar9 + (int)param_4)[0x11]) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    param_4 = (int *)((int)param_4 + 1);
  } while ((int)param_4 < piVar12[0x143]);
  return;
}



// Address: 4a15c5b4

undefined4 FUN_4a15c5b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  return param_3;
}



// Address: 4a15c5bc

undefined4 FUN_4a15c5bc(void)

{
  return 0;
}



// Address: 4a15c5c4

void FUN_4a15c5c4(void)

{
  return;
}



// Address: 4a15c5c8

void FUN_4a15c5c8(int *param_1)

{
  *(undefined4 *)(*param_1 + 0x14) = 0x31;
                    /* WARNING: Could not recover jumptable at 0x4a15c5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}



// Address: 4a15c5e4

uint FUN_4a15c5e4(int *param_1,int param_2)

{
  uint uVar1;
  
  if (param_1[5] != 200 && param_1[5] != 0xc9) {
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  uVar1 = FUN_4a15a58c(param_1);
  if ((1 < uVar1) && (uVar1 == 2)) {
    if (param_2 != 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x33;
      (**(code **)*param_1)(param_1);
    }
    FUN_4a15a1e4(param_1);
  }
  return uVar1;
}



// Address: 4a15c688

int FUN_4a15c688(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int local_18;
  
  local_18 = param_4;
  if (param_1[5] != 0xcd) {
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  if ((uint)param_1[0x1d] <= (uint)param_1[0x23]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x7b;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    return 0;
  }
  if (param_1[2] != 0) {
    *(int *)(param_1[2] + 4) = param_1[0x23];
    *(int *)(param_1[2] + 8) = param_1[0x1d];
    (**(code **)param_1[2])(param_1);
  }
  local_18 = 0;
  (**(code **)(param_1[0x6a] + 4))(param_1,param_2,&local_18,param_3);
  param_1[0x23] = param_1[0x23] + local_18;
  return local_18;
}



// Address: 4a15c780

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_4a15c780(int *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar10;
  
  uVar5 = param_1[0x68];
  *(undefined4 *)(*param_1 + 0x14) = 0x79;
  *(uint *)(*param_1 + 0x18) = uVar5;
  *(int *)(*param_1 + 0x1c) = param_2;
  (**(code **)(*param_1 + 4))(param_1,0xffffffff);
  do {
    if ((int)uVar5 < 0xc0) {
LAB_4a15c834:
      iVar8 = 2;
    }
    else if ((uVar5 - 0xd0 < 8) &&
            ((param_2 + 1U & 7) + 0xd0 != uVar5 && (param_2 + 2U & 7) + 0xd0 != uVar5)) {
      bVar10 = (param_2 - 1U & 7) + 0xd0 != uVar5;
      uVar2 = uVar5 - 0xd0;
      if (bVar10) {
        uVar2 = (param_2 - 2U & 7) + 0xd0;
      }
      if (!bVar10 || uVar2 == uVar5) goto LAB_4a15c834;
      iVar8 = 1;
    }
    else {
      iVar8 = 3;
    }
    *(undefined4 *)(*param_1 + 0x14) = 0x61;
    *(uint *)(*param_1 + 0x18) = uVar5;
    *(int *)(*param_1 + 0x1c) = iVar8;
    (**(code **)(*param_1 + 4))(param_1,4);
    if (iVar8 == 1) {
      param_1[0x68] = 0;
                    /* WARNING: Could not recover jumptable at 0x4a15c880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)(1);
      return uVar3;
    }
    if (iVar8 == 2) {
      puVar9 = (undefined4 *)param_1[6];
      pbVar6 = (byte *)*puVar9;
      iVar8 = puVar9[1];
      while( true ) {
        if (iVar8 == 0) {
          iVar8 = (*(code *)puVar9[3])(param_1);
          if (iVar8 == 0) {
            return 0;
          }
          pbVar6 = (byte *)*puVar9;
          iVar8 = puVar9[1];
        }
        bVar1 = *pbVar6;
        while( true ) {
          iVar8 = iVar8 + -1;
          pbVar6 = pbVar6 + 1;
          pbVar7 = pbVar6;
          if (bVar1 == 0xff) break;
          *(int *)(param_1[0x6e] + 0x18) = *(int *)(param_1[0x6e] + 0x18) + 1;
          *puVar9 = pbVar6;
          puVar9[1] = iVar8;
          if (iVar8 == 0) {
            iVar8 = (*(code *)puVar9[3])(param_1);
            if (iVar8 == 0) {
              return 0;
            }
            pbVar6 = (byte *)*puVar9;
            iVar8 = puVar9[1];
          }
          bVar1 = *pbVar6;
        }
        do {
          if (iVar8 == 0) {
            iVar8 = (*(code *)puVar9[3])(param_1);
            if (iVar8 == 0) {
              return 0;
            }
            pbVar7 = (byte *)*puVar9;
            iVar8 = puVar9[1];
          }
          pbVar6 = pbVar7 + 1;
          uVar5 = (uint)*pbVar7;
          iVar8 = iVar8 + -1;
          pbVar7 = pbVar6;
        } while (uVar5 == 0xff);
        iVar4 = param_1[0x6e];
        if (uVar5 != 0) break;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 2;
        *puVar9 = pbVar6;
        puVar9[1] = iVar8;
      }
      if (*(int *)(iVar4 + 0x18) != 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x74;
        *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(param_1[0x6e] + 0x18);
        *(uint *)(*param_1 + 0x1c) = uVar5;
        (**(code **)(*param_1 + 4))(param_1,0xffffffff);
        *(undefined4 *)(param_1[0x6e] + 0x18) = 0;
      }
      param_1[0x68] = uVar5;
      *puVar9 = pbVar6;
      puVar9[1] = iVar8;
      uVar5 = param_1[0x68];
    }
    else if (iVar8 == 3) {
      return 1;
    }
  } while( true );
}



// Address: 4a15c9ec

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_4a15c9ec(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = param_1[5];
  if (iVar1 == 0xca) {
    FUN_4a159688(param_1);
    if (param_1[0x10] != 0) {
      param_1[5] = 0xcf;
      return 1;
    }
    param_1[5] = 0xcb;
LAB_4a15ca3c:
    if (*(int *)(param_1[0x6d] + 0x10) != 0) {
      while( true ) {
        if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
          (**(code **)param_1[2])(param_1);
        }
        iVar1 = (**(code **)param_1[0x6d])(param_1);
        if (iVar1 == 0) {
          return 0;
        }
        if (iVar1 == 2) break;
        iVar3 = param_1[2];
        if ((iVar3 != 0) && (iVar1 == 3 || iVar1 == 1)) {
          iVar1 = *(int *)(iVar3 + 4) + 1;
          *(int *)(iVar3 + 4) = iVar1;
          iVar3 = *(int *)(param_1[2] + 8);
          if (iVar3 <= iVar1) {
            *(int *)(param_1[2] + 8) = param_1[0x50] + iVar3;
          }
        }
      }
    }
    param_1[0x26] = param_1[0x24];
  }
  else {
    if (iVar1 == 0xcb) goto LAB_4a15ca3c;
    if (iVar1 == 0xcc) goto LAB_4a15cb38;
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  if (param_1[5] != 0xcc) {
    (**(code **)param_1[0x69])(param_1);
    param_1[5] = 0xcc;
    param_1[0x23] = 0;
  }
LAB_4a15cb38:
  iVar1 = *(int *)(param_1[0x69] + 8);
  do {
    if (iVar1 == 0) {
      if (param_1[0x11] == 0) {
        iVar1 = 0xcd;
      }
      else {
        iVar1 = 0xce;
      }
      param_1[5] = iVar1;
      return 1;
    }
    if ((uint)param_1[0x23] < (uint)param_1[0x1d]) {
      do {
        if (param_1[2] != 0) {
          *(int *)(param_1[2] + 4) = param_1[0x23];
          *(int *)(param_1[2] + 8) = param_1[0x1d];
          (**(code **)param_1[2])(param_1);
        }
        uVar4 = param_1[0x23];
        (**(code **)(param_1[0x6a] + 4))(param_1,0,param_1 + 0x23);
        if (param_1[0x23] == uVar4) {
                    /* WARNING: Could not recover jumptable at 0x4a15cbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (*UNRECOVERED_JUMPTABLE)(0);
          return uVar2;
        }
      } while ((uint)param_1[0x23] < (uint)param_1[0x1d]);
    }
    (**(code **)(param_1[0x69] + 4))(param_1);
    (**(code **)param_1[0x69])(param_1);
    param_1[0x23] = 0;
    iVar1 = *(int *)(param_1[0x69] + 8);
  } while( true );
}



// Address: 4a15cc30

void FUN_4a15cc30(undefined4 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_4a15cc9c;
  *param_1 = PTR_FUN_4a15cc88;
  param_1[1] = PTR_FUN_4a15cc8c;
  param_1[2] = PTR_FUN_4a15cc90;
  param_1[3] = PTR_FUN_4a15cc94;
  param_1[4] = PTR_LAB_4a15cc98;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = puVar1;
  param_1[5] = 0;
  param_1[0x1d] = 0x7b;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return;
}



// Address: 4a15cca0

int FUN_4a15cca0(int param_1,int param_2)

{
  int extraout_r1;
  int iVar1;
  
  iVar1 = param_1 + param_2 + -1;
  FUN_4a0015f0(iVar1);
  return iVar1 - extraout_r1;
}



// Address: 4a15ccc4

void FUN_4a15ccc4(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  uint *puVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [4];
  byte *pbStack_94;
  undefined4 uStack_90;
  undefined8 uStack_88;
  uint uStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  
  iVar2 = thunk_FUN_4a0066d8(param_1 + -1,3);
  uVar9 = thunk_FUN_4a17120c(iVar2 + 0x1e);
  puVar1 = PTR_DAT_4a15cf64;
  *(undefined8 *)(PTR_DAT_4a15cf64 + 0x10) = uVar9;
  iVar2 = *(int *)puVar1;
  pbVar5 = (byte *)(iVar2 + 0x29c);
  iStack_1c = *(int *)(puVar1 + 4);
  pbStack_94 = (byte *)(iVar2 + iStack_1c);
  uStack_80 = thunk_FUN_4a0066d8(iStack_1c,param_1 << 2);
  iStack_7c = thunk_FUN_4a0066d8(uStack_80,100);
  uVar7 = DAT_4a15cf6c;
  if (iStack_7c == 0) {
    iStack_7c = 1;
  }
  uStack_90 = DAT_4a15cf68;
  uStack_88._0_4_ = DAT_4a15cf70;
  uStack_88._4_4_ = DAT_4a15cf74;
  puVar4 = &uStack_80;
  uVar6 = 0x20;
  uVar8 = 0;
  iStack_20 = 0x400;
  do {
    thunk_FUN_4a0066d8((iStack_20 - uVar8 * uVar8) * 0x100,iStack_20,puVar4);
    uVar9 = thunk_FUN_4a17120c();
    thunk_FUN_4a1712a8((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uStack_90,uVar7);
    uVar9 = thunk_FUN_4a001ad8();
    puVar4 = (uint *)uVar9;
    iVar2 = uVar8 * 8;
    uVar8 = uVar8 + 1;
    *(undefined8 *)(PTR_DAT_4a15cf78 + iVar2) = uVar9;
  } while (uVar8 < 0x20);
  thunk_FUN_4a0066d8(iStack_1c,499);
  iStack_78 = DAT_4a15cf7c;
  if (extraout_r1 == 0) {
    thunk_FUN_4a0066d8(iStack_1c,0x1eb);
    if (extraout_r1_00 == 0) {
      thunk_FUN_4a0066d8(iStack_1c,0x1e7);
      if (extraout_r1_01 == 0) {
        iStack_78 = DAT_4a15cf7c + 0x10;
      }
      else {
        iStack_78 = DAT_4a15cf7c + -0x30;
      }
    }
    else {
      iStack_78 = DAT_4a15cf7c + -0x20;
    }
  }
  uStack_64 = 0;
  while (puVar1 = PTR_DAT_4a15cf80, uStack_64 < uStack_80) {
    uStack_6c = (uint)pbVar5[3];
    if (uStack_6c == 0) {
      uStack_70 = 0;
      uStack_74 = 0;
      uStack_6c = 0;
    }
    else {
      uStack_70 = thunk_FUN_4a171124(*(undefined4 *)(PTR_DAT_4a15cf80 + (uint)*pbVar5 * 8),
                                     *(undefined4 *)
                                      ((int)(PTR_DAT_4a15cf80 + (uint)*pbVar5 * 8) + 4));
      puVar3 = (undefined4 *)(puVar1 + (uint)pbVar5[1] * 8);
      uStack_74 = thunk_FUN_4a171124(*puVar3,puVar3[1]);
      puVar3 = (undefined4 *)(puVar1 + (uint)pbVar5[2] * 8);
      thunk_FUN_4a171124(*puVar3,puVar3[1]);
    }
    uStack_a0 = thunk_FUN_4a17120c();
    uStack_30 = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    uStack_24 = (undefined4)uStack_a0;
    uStack_2c = uStack_a0;
    uStack_a8 = thunk_FUN_4a17120c(uStack_74,uStack_30,auStack_98);
    uStack_40 = (undefined4)((ulonglong)uStack_a8 >> 0x20);
    uStack_34 = (undefined4)uStack_a8;
    uStack_3c = uStack_a8;
    uVar9 = thunk_FUN_4a17120c(uStack_70,uStack_40,&uStack_a0);
    uStack_50 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uStack_44 = (undefined4)uVar9;
    uStack_4c = uVar9;
    uVar10 = thunk_FUN_4a17120c(uStack_6c,uStack_50,&uStack_a8);
    uStack_60 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uStack_54 = (undefined4)uVar10;
    uStack_5c = uVar10;
    uStack_68 = FUN_4a14b5b0(uStack_54,uStack_60,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20),
                             uStack_a8,uStack_a0);
    uStack_a0._4_4_ = uStack_30;
    uStack_a8._4_4_ = uStack_40;
    FUN_4a14abc0(uStack_90,uVar7,uStack_68,uStack_50,(undefined4)uStack_5c,uStack_60,
                 (undefined4)uStack_4c,uStack_50,(undefined4)uStack_3c,uStack_40,
                 (undefined4)uStack_2c,uStack_30);
    if (uVar6 != 0) {
      uStack_a0._4_4_ = uStack_2c._4_4_;
      uStack_a0._0_4_ = uStack_24;
      uStack_a8._4_4_ = uStack_3c._4_4_;
      FUN_4a14aa20(uVar6,uStack_68,uStack_54,uStack_5c._4_4_,uStack_44,uStack_4c._4_4_,uStack_34,
                   uStack_3c._4_4_,uStack_24,uStack_2c._4_4_);
    }
    puVar1 = PTR_DAT_4a15cf64;
    for (pbVar5 = pbVar5 + iStack_78; pbStack_94 <= pbVar5;
        pbVar5 = pbVar5 + -*(int *)(PTR_DAT_4a15cf64 + 4)) {
    }
    uStack_64 = uStack_64 + 1;
    thunk_FUN_4a0066d8(uStack_64,iStack_7c);
    if (extraout_r1_02 == 0) {
      uVar9 = thunk_FUN_4a170b24(uStack_90,uVar7,*(undefined4 *)(puVar1 + 0x10),
                                 *(undefined4 *)(puVar1 + 0x14));
      uVar9 = thunk_FUN_4a17152c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uStack_90,uVar7);
      uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uStack_90 = (undefined4)uVar9;
      uVar9 = thunk_FUN_4a1712a8((undefined4)uStack_88,uStack_88._4_4_,DAT_4a15cf84,DAT_4a15cf88);
      uVar9 = thunk_FUN_4a17152c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(undefined4)uStack_88,
                                 uStack_88._4_4_);
      uStack_88 = uVar9;
      uVar6 = thunk_FUN_4a171124((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),&uStack_80);
      if (uVar6 < 2) {
        uVar6 = 0;
      }
      for (uVar8 = 0; uVar8 < uVar6; uVar8 = uVar8 + 1) {
        thunk_FUN_4a0066d8((uVar6 * uVar6 - uVar8 * uVar8) * 0x100,uVar6 * uVar6);
        uVar9 = thunk_FUN_4a17120c();
        thunk_FUN_4a1712a8((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uStack_90,uVar7);
        uVar9 = thunk_FUN_4a001ad8();
        *(undefined8 *)(PTR_DAT_4a15cf78 + uVar8 * 8) = uVar9;
      }
    }
  }
  return;
}



// Address: 4a15cf8c

undefined4 FUN_4a15cf8c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  char *pcVar18;
  undefined *puVar19;
  bool bVar20;
  bool bVar21;
  undefined8 uVar22;
  undefined4 local_6c [5];
  undefined4 local_58;
  char *local_54;
  char *local_50;
  int local_4c;
  int local_48;
  int *local_44;
  undefined8 local_40;
  int local_38;
  undefined4 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  
  FUN_4a0bc1c4();
  FUN_4a00e5c4();
  local_34 = (undefined4 *)thunk_FUN_4a161570(0xc);
  local_34[2] = PTR_LAB_4a15d208;
  *local_34 = PTR_LAB_4a15d20c;
  local_34[1] = PTR_FUN_4a15d210;
  FUN_4a1615a0(local_34);
  FUN_4a057954();
  host_s3eConfigGetInt_arm(&DAT_4a15d228,s_10thAnniversary_4a15d218,PTR_DAT_4a15d214);
  host_s3eConfigGetInt_arm(&DAT_4a15d248,s_RemoveLegalLinks_4a15d234,PTR_DAT_4a15d230);
  local_38 = 0;
  host_s3eConfigGetInt_arm(&DAT_4a15d264,s_ForceTextureCache_4a15d250,&local_38);
  host_s3eConfigGetInt_arm(&DAT_4a15d27c,s_isTnbDemo_4a15d270,PTR_DAT_4a15d26c);
  host_s3eConfigGetInt_arm(&DAT_4a15d27c,s_isSFRTnb_4a15d284,PTR_DAT_4a15d280);
  host_s3eConfigGetInt_arm(s_Telefonica_4a15d2a8,s_isTelefonicaDemo_4a15d294,PTR_DAT_4a15d290);
  host_s3eConfigGetInt_arm(&DAT_4a15d264,s_drawEASplash_4a15d2b8,PTR_DAT_4a15d2b4);
  host_s3eConfigGetInt_arm(&DAT_4a15d264,s_AdcChangePhoneLanguageFix_4a15d2cc,PTR_DAT_4a15d2c8);
  puVar1 = PTR_DAT_4a15d2e8;
  if (*(int *)(PTR_DAT_4a15d2e8 + 0x34) != 0) {
    FUN_4a0576e0(0x13);
  }
  iVar9 = host_s3eDeviceGetInt_arm(0);
  if ((iVar9 == 0x13) || (local_38 != 0)) {
    FUN_4a08fe3c();
  }
  FUN_4a039ef0();
  if (*(int *)(puVar1 + 0x34) == 0) {
    FUN_4a03fad0();
    *(undefined **)(puVar1 + 0x98) = PTR_FUN_4a15d2ec;
  }
  local_40 = host_s3eTimerGetMs_arm();
  FUN_4a0bc384();
  puVar10 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar10 = PTR_PTR_4a15d2f0;
  *(undefined4 **)(puVar1 + 0x68) = puVar10;
  FUN_4a0653a0();
  FUN_4a08e2dc();
  FUN_4a081dd4();
  FUN_4a039974();
  FUN_4a02b064();
  thunk_FUN_4a161570(0xc4);
  local_44 = (int *)thunk_FUN_4a0633c4();
  FUN_4a0ecbc4(local_6c);
  FUN_4a0ecab0(local_6c,3);
  FUN_4a0ebe9c(local_6c,1);
  FUN_4a0ecb88(local_6c,1);
  FUN_4a0e4d6c(local_6c,0,0,0,0);
  FUN_4a000f70(local_54,2,0xff);
  thunk_FUN_4a062e34(local_44,local_6c);
  FUN_4a0ecbf0(local_6c);
  (**(code **)(*local_44 + 0x3c))(local_44);
  *(int *)(puVar1 + 0x90) = local_44[0x2d];
  iVar9 = FUN_4a14df5c(s_dlc_dz_4a15d2f4);
  if (iVar9 == 0) {
    puVar1[2] = 1;
  }
  FUN_4a14df5c(s_res_dz_4a15d2fc);
  piVar11 = (int *)thunk_FUN_4a161570(0xc);
  *piVar11 = 0;
  piVar11[1] = 0;
  piVar11[2] = 0;
  iVar9 = thunk_FUN_4a0013e0(s_audio_bgm_home_1_mp3_4a15d304);
  local_50 = s_audio_bgm_home_1_mp3_4a15d304 + iVar9;
  local_4c = 0;
  local_54 = s_audio_bgm_home_1_mp3_4a15d304;
  iVar9 = iVar9 + 1;
  local_58 = 0;
  if (iVar9 == 0) {
    FUN_4a0bcbf4(PTR_s_basic_string_4a15d6dc);
  }
  else {
    iVar12 = FUN_4a15e080(iVar9);
    if (iVar12 == 0) {
      iVar12 = FUN_4a1669a8();
    }
    *piVar11 = iVar12;
    piVar11[1] = iVar12;
    piVar11[2] = iVar12 + iVar9;
  }
  pcVar6 = local_50;
  pcVar5 = local_54;
  pcVar18 = (char *)*piVar11;
  if (local_50 != local_54) {
    iVar9 = FUN_4a000ec8(pcVar18);
    pcVar18 = pcVar6 + (iVar9 - (int)pcVar5);
  }
  piVar11[1] = (int)pcVar18;
  local_58 = 0;
  *(undefined1 *)piVar11[1] = 0;
  uVar13 = host_s3eFileCheckExists_arm(*piVar11);
  cVar7 = '\x01' - (char)uVar13;
  if (1 < uVar13) {
    cVar7 = '\0';
  }
  puVar1[3] = cVar7;
  if (piVar11 != (int *)0x0) {
    if (*piVar11 != 0) {
      FUN_4a14f21c();
    }
    thunk_FUN_4a161530(piVar11);
  }
  local_30 = (undefined1 *)0x0;
  local_2c = (undefined1 *)0x0;
  local_28 = (undefined1 *)0x0;
  iVar9 = thunk_FUN_4a0013e0(&DAT_4a15d22c);
  local_50 = &DAT_4a15d22c + iVar9;
  local_4c = 0;
  local_54 = &DAT_4a15d22c;
  iVar9 = iVar9 + 1;
  local_58 = 0;
  if (iVar9 == 0) {
    FUN_4a0bcbf4(PTR_s_basic_string_4a15d6dc);
  }
  else {
    puVar14 = (undefined1 *)FUN_4a15e080(iVar9);
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = (undefined1 *)FUN_4a1669a8();
    }
    local_28 = puVar14 + iVar9;
    local_30 = puVar14;
    local_2c = puVar14;
  }
  pcVar6 = local_50;
  pcVar5 = local_54;
  puVar14 = local_30;
  if (local_50 != local_54) {
    iVar9 = FUN_4a000ec8(local_30);
    puVar14 = pcVar6 + (iVar9 - (int)pcVar5);
  }
  local_58 = 0;
  *puVar14 = 0;
  local_2c = puVar14;
  uVar15 = FUN_4a0bc374();
  FUN_4a0bc470(uVar15,&local_30);
  if (local_30 != (undefined1 *)0x0) {
    FUN_4a14f21c();
  }
  local_48 = 0;
  host_s3eConfigGetInt_arm(&DAT_4a15d264,s_SoundOrAudio_4a15d6e0,&local_48);
  puVar1[4] = local_48 != 0;
  puVar1[6] = local_48 == 0;
  thunk_FUN_4a161570(0x7c);
  puVar10 = (undefined4 *)FUN_4a0c8404();
  puVar19 = PTR_DAT_4a15d6f4;
  *puVar10 = PTR_PTR_4a15d6f0;
  *(undefined4 **)(puVar1 + 0x48) = puVar10;
  *(undefined4 *)(puVar1 + 0x80) = 0x400;
  *(undefined4 *)(puVar1 + 0x84) = 0x400;
  host_s3eConfigGetInt_arm(&DAT_4a15d264,s_MaxTextureSizeGame_4a15d6f8,puVar19);
  host_s3eConfigGetInt_arm(&DAT_4a15d264,s_MaxTextureSizeUi_4a15d710,PTR_DAT_4a15d70c);
  puVar19 = PTR_DAT_4a15d724;
  *(undefined4 *)(puVar1 + 0x88) = *(undefined4 *)(puVar1 + 0x84);
  host_s3eConfigGetInt_arm(&DAT_4a15d264,s_SnapdragonAlphaWorkaround_4a15d728,puVar19);
  host_s3eConfigGetInt_arm(&DAT_4a15d754,s_EnableS3D_4a15d748,PTR_DAT_4a15d744);
  host_s3eConfigGetInt_arm(&DAT_4a15d754,s_S3DUseJNICall_4a15d75c,PTR_DAT_4a15d758);
  FUN_4a01d828();
  uVar15 = FUN_4a0bf06c();
  uVar16 = FUN_4a04d440();
  FUN_4a0c82a4(*(undefined4 *)(puVar1 + 0x48),uVar16,uVar15);
  piVar11 = (int *)FUN_4a0ff494();
  *(int **)(puVar1 + 0x8c) = piVar11;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  host_s3eConfigGetInt_arm(&DAT_4a15d264,s_KoreanLogoAndTable_4a15d770,PTR_DAT_4a15d76c);
  uVar15 = thunk_FUN_4a161570(0x14);
  uVar15 = FUN_4a0c707c(uVar15,&DAT_4a15d784);
  iVar9 = FUN_4a0ff494();
  uVar16 = FUN_4a06c1b0(iVar9 + 0x278);
  uVar13 = FUN_4a13e614(uVar16,uVar15);
  iVar9 = 1 - uVar13;
  if (1 < uVar13) {
    iVar9 = 0;
  }
  *puVar1 = (char)iVar9;
  if ((*(int *)(puVar1 + 0x18) == 1) || ((*(int *)(puVar1 + 0x18) == 2 && (iVar9 != 0)))) {
    bVar20 = true;
  }
  else {
    bVar20 = false;
  }
  puVar1[1] = bVar20;
  if (bVar20) {
    uVar15 = thunk_FUN_4a161570(0x14);
    local_6c[0] = 0x3f800000;
    uVar15 = FUN_4a101e10(uVar15,s_images_splash_sims_png_4a15d788,0,0,0x3f800000);
    *(undefined4 *)(puVar1 + 8) = uVar15;
    uVar15 = thunk_FUN_4a161570(0x14);
    local_6c[0] = 0x3f800000;
    uVar15 = FUN_4a101e10(uVar15,s_images_grb_icon_a_png_4a15d7a0,0,0,0x3f800000);
    *(undefined4 *)(puVar1 + 0xc) = uVar15;
    uVar15 = thunk_FUN_4a161570(0x14);
    local_6c[0] = 0x3f800000;
    uVar15 = FUN_4a101e10(uVar15,s_images_grb_icon_b_png_4a15d7b8,0,0,0x3f800000);
    *(undefined4 *)(puVar1 + 0x10) = uVar15;
    uVar15 = thunk_FUN_4a161570(0x14);
    local_6c[0] = 0x3f800000;
    uVar15 = FUN_4a101e10(uVar15,s_images_grb_table_png_4a15d7d0,0,0,0x3f800000);
    *(undefined4 *)(puVar1 + 0x14) = uVar15;
    *(undefined **)(puVar1 + 0x98) = PTR_FUN_4a15d7e8;
  }
  piVar11[0xe] = *(int *)(puVar1 + 0x38);
  piVar11[0x11] = *(int *)(puVar1 + 0x34);
  iVar9 = *(int *)(puVar1 + 0x30);
  piVar11[0xf] = iVar9;
  if (iVar9 != 0) {
    uVar8 = FUN_4a05a2c8();
    *(undefined1 *)(piVar11 + 0x10) = uVar8;
  }
  host_s3ePointerRegister_arm(0,PTR_FUN_4a15d7ec);
  host_s3ePointerRegister_arm(1,PTR_FUN_4a15d7f0,0);
  host_s3eKeyboardRegister_arm(0,PTR_FUN_4a15d7f4);
  FUN_4a0c8148(*(undefined4 *)(puVar1 + 0x48));
  FUN_4a095f5c();
  host_s3eDeviceRegister_arm(0,PTR_LAB_4a15d7f8);
  host_s3eDeviceRegister_arm(1,PTR_FUN_4a15d7fc,0);
  uVar22 = local_40;
  if (piVar11[0x11] != 0) {
    while( true ) {
      uVar22 = host_s3eTimerGetMs_arm();
      if ((int)(uint)((uint)uVar22 - (uint)local_40 < 10000) <=
          (int)((int)((ulonglong)uVar22 >> 0x20) -
               (local_40._4_4_ + (uint)((uint)uVar22 < (uint)local_40)))) break;
      host_s3eDeviceYield_arm(0);
    }
    *(undefined **)(puVar1 + 0x98) = PTR_FUN_4a15d2ec;
    uVar22 = host_s3eTimerGetMs_arm();
  }
  local_40 = uVar22;
  iVar9 = host_s3eTimerGetMs_arm();
  puVar3 = PTR_DAT_4a15e054;
  puVar19 = PTR_DAT_4a15e050;
  while( true ) {
    uVar22 = host_s3eTimerGetMs_arm();
    puVar2 = PTR_DAT_4a15d2e8;
    if ((int)(uint)((uint)uVar22 - (uint)local_40 < 3000) <=
        (int)((int)((ulonglong)uVar22 >> 0x20) -
             (local_40._4_4_ + (uint)((uint)uVar22 < (uint)local_40)))) break;
    if (puVar1[1] == '\0') {
      thunk_FUN_4a0361cc(*(undefined4 *)(puVar1 + 0x54));
      (**(code **)(puVar19 + 0x14))(*(undefined4 *)(puVar1 + 0x58),4,3);
      FUN_4a0363b8(*(undefined4 *)(puVar1 + 0x5c),0);
      FUN_4a0360f8(0,0,0);
      (**(code **)(puVar19 + 0x20))(3);
      if ((*(uint *)(*(int *)puVar3 + 4) & 0x800) == 0) {
        *(undefined1 *)(*(int *)puVar3 + 0x680) = 1;
        (**(code **)(puVar19 + 0x24))(3,0,4);
      }
      FUN_4a05a618();
      FUN_4a0363dc();
    }
    else {
      FUN_4a1011a0();
    }
    host_s3eDeviceYield_arm(0);
  }
  *(undefined4 *)(PTR_DAT_4a15d2e8 + 0x98) = 0;
  puVar1 = PTR_PTR_4a15e05c;
  if (puVar2[1] == '\0') {
    FUN_4a040b88();
    puVar1 = PTR_DAT_4a15d2e8;
    iVar12 = *(int *)(PTR_DAT_4a15d2e8 + 0x3c);
    bVar20 = iVar12 == 0;
    if (bVar20) {
      iVar12 = piVar11[0xe];
    }
    bVar21 = bVar20 && iVar12 == 0;
    if (bVar20 && iVar12 == 0) {
      bVar21 = piVar11[0x11] == 0;
    }
    if (!bVar21) {
      FUN_4a046764();
      FUN_4a03fad0();
      *(undefined **)(puVar1 + 0x98) = PTR_FUN_4a15d2ec;
      uVar22 = host_s3eTimerGetMs_arm();
      local_40 = uVar22;
      while( true ) {
        uVar22 = host_s3eTimerGetMs_arm();
        if ((int)(uint)((uint)uVar22 - (uint)local_40 < 3000) <=
            (int)((int)((ulonglong)uVar22 >> 0x20) -
                 (local_40._4_4_ + (uint)((uint)uVar22 < (uint)local_40)))) break;
        thunk_FUN_4a0361cc(*(undefined4 *)(puVar1 + 0x54));
        (**(code **)(puVar19 + 0x14))(*(undefined4 *)(puVar1 + 0x58),4,3);
        FUN_4a0363b8(*(undefined4 *)(puVar1 + 0x5c),0);
        FUN_4a0360f8(0,0,0);
        (**(code **)(puVar19 + 0x20))(3);
        if ((*(uint *)(*(int *)puVar3 + 4) & 0x800) == 0) {
          *(undefined1 *)(*(int *)puVar3 + 0x680) = 1;
          (**(code **)(puVar19 + 0x24))(3,0,4);
        }
        FUN_4a05a618();
        FUN_4a0363dc();
        host_s3eDeviceYield_arm(0);
      }
      *(undefined4 *)(puVar1 + 0x98) = 0;
      FUN_4a040b88();
      if (piVar11[0xe] == 0) {
        cVar7 = '\0';
        if (piVar11[0x11] != 0) {
          cVar7 = (char)piVar11[0x12];
        }
        if (piVar11[0x11] == 0 || cVar7 == '\0') goto LAB_4a15dda8;
      }
      FUN_4a0fd0dc(piVar11);
      FUN_4a0fd02c(piVar11);
      FUN_4a0fdf10(piVar11);
      FUN_4a0fd058(piVar11);
      FUN_4a0fca00(piVar11);
    }
  }
  else {
    if ((*(uint *)PTR_DAT_4a15e058 & 1) == 0) {
      iVar12 = thunk_FUN_4a1491bc(PTR_DAT_4a15e058);
      puVar19 = PTR_DAT_4a15e060;
      if (iVar12 != 0) {
        *(undefined4 *)(PTR_DAT_4a15e060 + 0x14) = 0;
        puVar4 = PTR_FUN_4a15e068;
        puVar2 = PTR_DAT_4a15e064;
        *(undefined **)puVar19 = puVar1;
        thunk_FUN_4a1490b0(puVar19,puVar4,puVar2);
      }
    }
    puVar19 = PTR_DAT_4a15e060;
    if (*(int **)(PTR_DAT_4a15e060 + 0x14) != (int *)0x0) {
      (**(code **)(**(int **)(PTR_DAT_4a15e060 + 0x14) + 4))();
    }
    *(undefined4 *)(puVar19 + 0x14) = 0;
    local_54 = *(char **)(PTR_DAT_4a15d2e8 + 8);
    local_50 = (char *)(*(int *)(*(int *)puVar3 + 0x344) / 2);
    local_4c = *(int *)(*(int *)puVar3 + 0x348) / 2;
    if ((*(uint *)PTR_DAT_4a15e058 & 1) == 0) {
      iVar12 = thunk_FUN_4a1491bc(PTR_DAT_4a15e058);
      puVar19 = PTR_DAT_4a15e060;
      if (iVar12 != 0) {
        *(undefined4 *)(PTR_DAT_4a15e060 + 0x14) = 0;
        puVar4 = PTR_FUN_4a15e068;
        puVar2 = PTR_DAT_4a15e064;
        *(undefined **)puVar19 = puVar1;
        thunk_FUN_4a1490b0(puVar19,puVar4,puVar2);
      }
    }
    iVar12 = *(int *)(PTR_DAT_4a15e060 + 0x14);
    puVar19 = PTR_DAT_4a15e060;
    while (iVar12 != 0) {
      puVar19 = *(undefined **)(puVar19 + 0x14);
      iVar12 = *(int *)(puVar19 + 0x14);
    }
    puVar10 = (undefined4 *)thunk_FUN_4a161570(0x18);
    puVar10[5] = 0;
    *puVar10 = puVar1;
    *(undefined4 **)(puVar19 + 0x14) = puVar10;
    puVar10[1] = local_54;
    *(char **)(*(int *)(puVar19 + 0x14) + 8) = local_50;
    *(int *)(*(int *)(puVar19 + 0x14) + 0xc) = local_4c;
    *(undefined4 *)(*(int *)(puVar19 + 0x14) + 0x10) = 4;
    local_50 = *(char **)(PTR_DAT_4a15d2e8 + 0xc);
    local_4c = (*(int *)(*(int *)puVar3 + 0x344) -
               (uint)*(ushort *)(*(int *)(*(int *)(PTR_DAT_4a15d2e8 + 0x10) + 4) + 0x20)) + -0xf;
    if ((*(uint *)PTR_DAT_4a15e058 & 1) == 0) {
      iVar12 = thunk_FUN_4a1491bc(PTR_DAT_4a15e058);
      puVar19 = PTR_DAT_4a15e060;
      if (iVar12 != 0) {
        *(undefined4 *)(PTR_DAT_4a15e060 + 0x14) = 0;
        puVar4 = PTR_FUN_4a15e068;
        puVar2 = PTR_DAT_4a15e064;
        *(undefined **)puVar19 = puVar1;
        thunk_FUN_4a1490b0(puVar19,puVar4,puVar2);
      }
    }
    iVar12 = *(int *)(PTR_DAT_4a15e060 + 0x14);
    puVar19 = PTR_DAT_4a15e060;
    while (iVar12 != 0) {
      puVar19 = *(undefined **)(puVar19 + 0x14);
      iVar12 = *(int *)(puVar19 + 0x14);
    }
    puVar10 = (undefined4 *)thunk_FUN_4a161570(0x18);
    puVar10[5] = 0;
    *puVar10 = puVar1;
    *(undefined4 **)(puVar19 + 0x14) = puVar10;
    puVar10[1] = local_50;
    *(int *)(*(int *)(puVar19 + 0x14) + 8) = local_4c;
    *(undefined4 *)(*(int *)(puVar19 + 0x14) + 0xc) = 10;
    *(undefined4 *)(*(int *)(puVar19 + 0x14) + 0x10) = 0;
    local_50 = *(char **)(PTR_DAT_4a15d2e8 + 0x10);
    local_4c = *(int *)(*(int *)puVar3 + 0x344) + -10;
    if ((*(uint *)PTR_DAT_4a15e058 & 1) == 0) {
      iVar12 = thunk_FUN_4a1491bc(PTR_DAT_4a15e058);
      puVar19 = PTR_DAT_4a15e060;
      if (iVar12 != 0) {
        *(undefined4 *)(PTR_DAT_4a15e060 + 0x14) = 0;
        puVar4 = PTR_FUN_4a15e068;
        puVar2 = PTR_DAT_4a15e064;
        *(undefined **)puVar19 = puVar1;
        thunk_FUN_4a1490b0(puVar19,puVar4,puVar2);
      }
    }
    iVar12 = *(int *)(PTR_DAT_4a15e060 + 0x14);
    puVar19 = PTR_DAT_4a15e060;
    while (iVar12 != 0) {
      puVar19 = *(undefined **)(puVar19 + 0x14);
      iVar12 = *(int *)(puVar19 + 0x14);
    }
    puVar10 = (undefined4 *)thunk_FUN_4a161570(0x18);
    *puVar10 = puVar1;
    puVar10[5] = 0;
    *(undefined4 **)(puVar19 + 0x14) = puVar10;
    puVar10[1] = local_50;
    *(int *)(*(int *)(puVar19 + 0x14) + 8) = local_4c;
    *(undefined4 *)(*(int *)(puVar19 + 0x14) + 0xc) = 10;
    *(undefined4 *)(*(int *)(puVar19 + 0x14) + 0x10) = 0;
    FUN_4a1011a0();
    puVar1 = PTR_DAT_4a15d2e8;
    *(undefined **)(PTR_DAT_4a15d2e8 + 0x98) = PTR_FUN_4a15d7e8;
    uVar22 = host_s3eTimerGetMs_arm();
    local_40 = uVar22;
    while( true ) {
      uVar22 = host_s3eTimerGetMs_arm();
      uVar13 = (uint)uVar22 - (uint)local_40;
      if ((int)(uint)(uVar13 < 3000) <=
          (int)((int)((ulonglong)uVar22 >> 0x20) -
               (local_40._4_4_ + (uint)((uint)uVar22 < (uint)local_40)))) break;
      FUN_4a1011a0(uVar13 - 3000);
      host_s3eDeviceYield_arm(0);
    }
    *(undefined4 *)(puVar1 + 0x98) = 0;
    FUN_4a040b88();
  }
LAB_4a15dda8:
  if (*(int *)(*(int *)puVar3 + 0xc) == 2) {
    uVar13 = 1;
    do {
      thunk_FUN_4a14fcc4(uVar13 + 0x84c0);
      FUN_4a150618(0x1702);
      FUN_4a1504dc();
      uVar13 = uVar13 - 1;
    } while (uVar13 < 0x80000000);
  }
  thunk_FUN_4a150140(0xbe2);
  thunk_FUN_4a1500c4(0,0x3f800000);
  FUN_4a150094(0x201);
  if (*(int *)PTR_DAT_4a15d744 != 0) {
    if (*(int *)PTR_DAT_4a15e06c == 0) {
      if (*(int *)PTR_DAT_4a15d758 != 0) {
        FUN_4a00e63c();
        goto LAB_4a15de60;
      }
      uVar15 = 0x18;
    }
    else {
      if (*(int *)PTR_DAT_4a15d758 != 0) {
        FUN_4a05a7c4();
        goto LAB_4a15de60;
      }
      uVar15 = 0x17;
    }
    host_s3eDeviceGetString_arm(uVar15);
  }
LAB_4a15de60:
  iVar12 = host_s3eDeviceCheckQuitRequest_arm();
  puVar1 = PTR_DAT_4a15e070;
  while (iVar12 == 0) {
    FUN_4a0bbd10(*(undefined4 *)puVar1);
    host_s3ePointerUpdate_arm();
    iVar17 = host_s3eTimerGetMs_arm();
    iVar9 = iVar17 - iVar9;
    if (iVar9 < 1) {
      iVar9 = 1;
    }
    *(undefined1 *)((int)piVar11 + 0x36) = 1;
    FUN_4a0ff248(piVar11,iVar9);
    *(undefined1 *)((int)piVar11 + 0x36) = 0;
    *(undefined1 *)((int)piVar11 + 0x35) = 1;
    (**(code **)(*piVar11 + 0x58))(piVar11);
    (**(code **)(*piVar11 + 0x60))(piVar11);
    *(undefined1 *)((int)piVar11 + 0x35) = 0;
    host_s3eDeviceYield_arm(0);
    if (*PTR_DAT_4a15e074 == '\0') {
      iVar9 = host_s3eAudioGetInt_arm(1);
      if (iVar9 == 1) {
        host_s3eAudioPause_arm();
      }
    }
    FUN_4a0bbcec(*(undefined4 *)puVar1);
    host_s3eDeviceYield_arm(0);
    iVar12 = host_s3eDeviceCheckQuitRequest_arm();
    iVar9 = iVar17;
  }
  FUN_4a0fdf10(piVar11);
  puVar1 = PTR_DAT_4a15d2e8;
  if (*(int **)(PTR_DAT_4a15d2e8 + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(PTR_DAT_4a15d2e8 + 0x48) + 4))();
  }
  *(undefined4 *)(puVar1 + 0x48) = 0;
  FUN_4a0822b8();
  FUN_4a03b044();
  if (*(int *)PTR_DAT_4a15e078 != 0) {
    FUN_4a08fe08();
  }
  if (local_44 != (int *)0x0) {
    (**(code **)(*local_44 + 4))(local_44);
  }
  if (*(int **)(puVar1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(puVar1 + 8) + 4))();
  }
  if (*(int **)(puVar1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(puVar1 + 0xc) + 4))();
  }
  if (*(int **)(puVar1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(puVar1 + 0x10) + 4))();
  }
  if (*(int **)(puVar1 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(puVar1 + 0x14) + 4))();
  }
  FUN_4a0b4580();
  FUN_4a03bd2c();
  FUN_4a047cdc();
  thunk_FUN_4a14dfdc();
  FUN_4a0bc428();
  FUN_4a0961c8();
  FUN_4a08e300();
  FUN_4a0653c8();
  if (*(int **)(puVar1 + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(puVar1 + 0x68) + 4))();
  }
  FUN_4a0306c8();
  thunk_FUN_4a161530(local_34);
  FUN_4a036828();
  FUN_4a0bc1e8();
  return 0;
}



// Address: 4a15e080

void FUN_4a15e080(int param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int in_lr;
  
  if (param_1 == 0x10) {
    iVar4 = in_lr - (int)PTR_FUN_4a1490b0_1_4a15e0a4;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (iVar4 < 100) {
      uVar3 = *(int *)(PTR_DAT_4a05be94 + 4) + 0x10;
      puVar1 = &DAT_00000010;
      if (uVar3 < 0x200) {
        puVar1 = PTR_DAT_4a05be90 + *(int *)(PTR_DAT_4a05be94 + 4);
      }
      *(uint *)(PTR_DAT_4a05be94 + 4) = uVar3;
      if (uVar3 >= 0x200) {
        puVar2 = (undefined4 *)FUN_4a057044();
        FUN_4a1652c6(puVar1,*puVar2);
        return;
      }
      return;
    }
  }
  FUN_4a161570();
  return;
}



// Address: 4a15e0a8

void FUN_4a15e0a8(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,
                 int *param_6)

{
  (**(code **)(*(int *)(param_1 + 0x1c4) + 0xc))(param_1,param_2,*param_3,param_5 + *param_6 * 4);
  *param_6 = *param_6 + 1;
  *param_3 = *param_3 + 1;
  return;
}



// Address: 4a15e0f4

void FUN_4a15e0f4(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,
                 int *param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar2 = *(int *)(param_1 + 0x1c4);
  if (*(int *)(iVar2 + 0x24) == 0) {
    uVar3 = 2;
    if (*(uint *)(iVar2 + 0x2c) < 2) {
      uVar3 = *(uint *)(iVar2 + 0x2c);
    }
    uVar1 = param_7 - *param_6;
    if (uVar1 < uVar3) {
      uVar3 = uVar1;
    }
    local_1c = *(undefined4 *)(param_5 + *param_6 * 4);
    if (uVar3 < 2) {
      local_18 = *(undefined4 *)(iVar2 + 0x20);
      *(undefined4 *)(iVar2 + 0x24) = 1;
    }
    else {
      local_18 = *(undefined4 *)(param_5 + *param_6 * 4 + 4);
    }
    (**(code **)(iVar2 + 0xc))(param_1,param_2,*param_3,&local_1c);
  }
  else {
    FUN_4a158590(iVar2 + 0x20,0,param_5 + *param_6 * 4,0,1,*(undefined4 *)(iVar2 + 0x28));
    uVar3 = 1;
    *(undefined4 *)(iVar2 + 0x24) = 0;
  }
  *param_6 = *param_6 + uVar3;
  *(uint *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) - uVar3;
  if (*(int *)(iVar2 + 0x24) == 0) {
    *param_3 = *param_3 + 1;
  }
  return;
}



// Address: 4a15e1f0

void FUN_4a15e1f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  bool bVar3;
  
  uVar2 = 0;
  uVar1 = thunk_FUN_4a170798();
  bVar3 = param_1 == 0;
  thunk_FUN_4a171488(param_1,param_2,DAT_4a15e230,DAT_4a15e234,param_4);
  if ((bool)uVar2 && !bVar3) {
    thunk_FUN_4a1725c0(uVar1,0x3f000000);
  }
  else {
    thunk_FUN_4a171a94(uVar1,0x3f000000);
  }
  thunk_FUN_4a171e1c();
  thunk_FUN_4a1711b0();
  return;
}



// Address: 4a15e260

undefined4 FUN_4a15e260(int *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  puVar6 = (undefined4 *)param_1[6];
  pbVar3 = (byte *)*puVar6;
  iVar5 = puVar6[1];
  while( true ) {
    if (iVar5 == 0) {
      iVar5 = (*(code *)puVar6[3])(param_1);
      if (iVar5 == 0) {
        return 0;
      }
      pbVar3 = (byte *)*puVar6;
      iVar5 = puVar6[1];
    }
    bVar1 = *pbVar3;
    while( true ) {
      iVar5 = iVar5 + -1;
      pbVar3 = pbVar3 + 1;
      pbVar4 = pbVar3;
      if (bVar1 == 0xff) break;
      *(int *)(param_1[0x6e] + 0x18) = *(int *)(param_1[0x6e] + 0x18) + 1;
      *puVar6 = pbVar3;
      puVar6[1] = iVar5;
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar6[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        pbVar3 = (byte *)*puVar6;
        iVar5 = puVar6[1];
      }
      bVar1 = *pbVar3;
    }
    do {
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar6[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        pbVar4 = (byte *)*puVar6;
        iVar5 = puVar6[1];
      }
      pbVar3 = pbVar4 + 1;
      uVar7 = (uint)*pbVar4;
      iVar5 = iVar5 + -1;
      pbVar4 = pbVar3;
    } while (uVar7 == 0xff);
    iVar2 = param_1[0x6e];
    if (uVar7 != 0) break;
    *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + 2;
    *puVar6 = pbVar3;
    puVar6[1] = iVar5;
  }
  if (*(int *)(iVar2 + 0x18) != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x74;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(param_1[0x6e] + 0x18);
    *(uint *)(*param_1 + 0x1c) = uVar7;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    *(undefined4 *)(param_1[0x6e] + 0x18) = 0;
  }
  param_1[0x68] = uVar7;
  *puVar6 = pbVar3;
  puVar6[1] = iVar5;
  return 1;
}



// Address: 4a15e46c

void FUN_4a15e46c(int *param_1)

{
  undefined1 auStack_cc [204];
  
  (**(code **)(*param_1 + 0xc))(param_1,auStack_cc);
  FUN_4a000cd4(*(undefined4 *)PTR_PTR_4a15e4ac,&DAT_4a15e4a8,auStack_cc);
  return;
}



// Address: 4a15e4b0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a15e4b0(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  short *psVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  short *psVar18;
  byte *pbVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 *puVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  
  iVar3 = *(int *)(param_1 + 0x1cc);
  iVar4 = *(int *)(iVar3 + 0x18);
  iVar14 = *(int *)(param_1 + 0x70);
  iVar25 = *(int *)(param_1 + 0x144);
  iVar10 = *(int *)(iVar3 + 0x28);
  piVar5 = *(int **)(param_1 + 0x88);
  iVar6 = *piVar5;
  iVar11 = piVar5[1];
  iVar15 = piVar5[2];
  local_70 = 0;
  if (param_4 < 1) {
    return;
  }
  do {
    pbVar19 = *(byte **)(param_2 + local_70 * 4);
    puVar23 = *(undefined1 **)(param_3 + local_70 * 4);
    if (*(int *)(iVar3 + 0x24) == 0) {
      iStack_68 = 1;
      iStack_6c = 3;
      psVar18 = *(short **)(iVar3 + 0x20);
      *(undefined4 *)(iVar3 + 0x24) = 1;
    }
    else {
      pbVar19 = pbVar19 + iVar14 * 3 + -3;
      puVar23 = puVar23 + iVar14 + -1;
      iStack_68 = -1;
      iStack_6c = -3;
      psVar18 = (short *)(*(int *)(iVar3 + 0x20) + iVar14 * 6 + 6);
      *(undefined4 *)(iVar3 + 0x24) = 0;
    }
    iVar12 = 0;
    iStack_4c = 0;
    iStack_60 = 0;
    iVar17 = 0;
    iVar26 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    iStack_5c = 0;
    iStack_58 = 0;
    iVar24 = iVar14;
    while( true ) {
      if (iVar24 == 0) break;
      psVar7 = psVar18 + iStack_6c;
      uVar21 = (uint)*(byte *)(iVar25 + (uint)pbVar19[1] +
                                        *(int *)(iVar10 + (iVar17 + 8 + (int)psVar7[1] >> 4) * 4));
      uVar22 = (uint)*(byte *)(iVar25 + *(int *)(iVar10 + ((int)psVar7[2] + iVar12 + 8 >> 4) * 4) +
                                        (uint)pbVar19[2]);
      uVar20 = (uint)*(byte *)(iVar25 + (uint)*pbVar19 +
                                        *(int *)(iVar10 + ((int)*psVar7 + iVar26 + 8 >> 4) * 4));
      iVar26 = (int)uVar21 >> 2;
      iVar17 = (int)uVar22 >> 3;
      iVar12 = (int)uVar20 >> 3;
      puVar8 = (ushort *)(iVar26 * 0x40 + iVar17 * 2 + *(int *)(iVar4 + iVar12 * 4));
      if (*puVar8 == 0) {
        FUN_4a14e5d8(param_1,iVar12,iVar26,iVar17);
      }
      iVar24 = iVar24 + -1;
      iVar26 = *puVar8 - 1;
      *puVar23 = (char)iVar26;
      bVar1 = *(byte *)(iVar11 + iVar26);
      iVar13 = uVar20 - *(byte *)(iVar6 + iVar26);
      bVar2 = *(byte *)(iVar15 + iVar26);
      *psVar18 = (short)iStack_58 + (short)iVar13 * 3;
      iStack_58 = iStack_4c + iVar13 * 5;
      iVar16 = uVar21 - bVar1;
      iVar26 = iVar13 * 7;
      psVar18[1] = (short)iStack_5c + (short)iVar16 * 3;
      iStack_5c = iStack_50 + iVar16 * 5;
      iVar9 = uVar22 - bVar2;
      iVar17 = iVar16 * 7;
      psVar18[2] = (short)iStack_60 + (short)iVar9 * 3;
      pbVar19 = pbVar19 + iStack_6c;
      iStack_60 = iStack_54 + iVar9 * 5;
      iVar12 = iVar9 * 7;
      puVar23 = puVar23 + iStack_68;
      psVar18 = psVar7;
      iStack_54 = iVar9;
      iStack_50 = iVar16;
      iStack_4c = iVar13;
    }
    *psVar18 = (short)iStack_58;
    psVar18[1] = (short)iStack_5c;
    psVar18[2] = (short)iStack_60;
    local_70 = local_70 + 1;
  } while (local_70 < param_4);
  return;
}



// Address: 4a15e7c4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a15e7c4(int param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  byte *pbVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x1cc) + 0x18);
  iVar7 = *(int *)(param_1 + 0x70);
  if (param_4 < 1) {
    return;
  }
  do {
    pbVar3 = *(byte **)(param_2 + iVar6 * 4);
    pcVar1 = *(char **)(param_3 + iVar6 * 4);
    for (iVar2 = iVar7; iVar2 != 0; iVar2 = iVar2 + -1) {
      psVar4 = (short *)((uint)(pbVar3[1] >> 2) * 0x40 + (uint)(pbVar3[2] >> 3) * 2 +
                        *(int *)(iVar5 + (uint)(*pbVar3 >> 3) * 4));
      pbVar3 = pbVar3 + 3;
      if (*psVar4 == 0) {
        FUN_4a14e5d8(param_1);
      }
      *pcVar1 = (char)*psVar4 + -1;
      pcVar1 = pcVar1 + 1;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < param_4);
  return;
}



// Address: 4a15e878

void FUN_4a15e878(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int *param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  int local_20;
  
  iVar2 = *(int *)(param_1 + 0x1b0);
  uVar1 = param_7 - *param_6;
  if (*(uint *)(iVar2 + 0x10) < (uint)(param_7 - *param_6)) {
    uVar1 = *(uint *)(iVar2 + 0x10);
  }
  local_20 = 0;
  (**(code **)(*(int *)(param_1 + 0x1c4) + 4))
            (param_1,param_2,param_3,param_4,*(undefined4 *)(iVar2 + 0xc),&local_20,uVar1);
  (**(code **)(*(int *)(param_1 + 0x1cc) + 4))
            (param_1,*(undefined4 *)(iVar2 + 0xc),param_5 + *param_6 * 4,local_20);
  *param_6 = *param_6 + local_20;
  return;
}



// Address: 4a15e928

void FUN_4a15e928(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int *param_6,int param_7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0x1b0);
  if (*(int *)(iVar3 + 0x18) == 0) {
    param_4 = 0;
    uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x1c))
                      (param_1,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0x14),
                       *(undefined4 *)(iVar3 + 0x10),0);
    *(undefined4 *)(iVar3 + 0xc) = uVar1;
  }
  uVar4 = *(int *)(iVar3 + 0x10) - *(int *)(iVar3 + 0x18);
  uVar2 = param_7 - *param_6;
  if (uVar2 < uVar4) {
    uVar4 = uVar2;
  }
  uVar2 = *(int *)(param_1 + 0x74) - *(int *)(iVar3 + 0x14);
  if (uVar2 < uVar4) {
    uVar4 = uVar2;
  }
  (**(code **)(*(int *)(param_1 + 0x1cc) + 4))
            (param_1,*(int *)(iVar3 + 0xc) + *(int *)(iVar3 + 0x18) * 4,param_5 + *param_6 * 4,uVar4
             ,param_4);
  *param_6 = *param_6 + uVar4;
  uVar4 = *(int *)(iVar3 + 0x18) + uVar4;
  *(uint *)(iVar3 + 0x18) = uVar4;
  if (*(uint *)(iVar3 + 0x10) <= uVar4) {
    *(uint *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + *(uint *)(iVar3 + 0x10);
    *(undefined4 *)(iVar3 + 0x18) = 0;
    return;
  }
  return;
}



// Address: 4a15ea10

void FUN_4a15ea10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int *param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x1b0);
  if (*(int *)(iVar2 + 0x18) == 0) {
    uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x1c))
                      (param_1,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0x14),
                       *(undefined4 *)(iVar2 + 0x10),1);
    *(undefined4 *)(iVar2 + 0xc) = uVar1;
  }
  uVar3 = *(uint *)(iVar2 + 0x18);
  (**(code **)(*(int *)(param_1 + 0x1c4) + 4))
            (param_1,param_2,param_3,param_4,*(undefined4 *)(iVar2 + 0xc),iVar2 + 0x18,
             *(undefined4 *)(iVar2 + 0x10));
  if (uVar3 < *(uint *)(iVar2 + 0x18)) {
    iVar4 = *(uint *)(iVar2 + 0x18) - uVar3;
    (**(code **)(*(int *)(param_1 + 0x1cc) + 4))(param_1,*(int *)(iVar2 + 0xc) + uVar3 * 4,0,iVar4);
    *param_6 = *param_6 + iVar4;
  }
  if (*(uint *)(iVar2 + 0x10) <= *(uint *)(iVar2 + 0x18)) {
    *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x10) + *(int *)(iVar2 + 0x14);
    *(undefined4 *)(iVar2 + 0x18) = 0;
    return;
  }
  return;
}



// Address: 4a15eb14

void FUN_4a15eb14(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1[0x69];
  if (*(int *)(iVar3 + 8) == 0) {
    if ((param_1[0x15] != 0) && (param_1[0x22] == 0)) {
      iVar1 = 0;
      if (param_1[0x17] != 0) {
        iVar1 = param_1[0x1b];
      }
      if (param_1[0x17] == 0 || iVar1 == 0) {
        if (param_1[0x19] == 0) {
          *(undefined4 *)(*param_1 + 0x14) = 0x2e;
          (**(code **)*param_1)(param_1);
        }
        else {
          param_1[0x73] = *(int *)(iVar3 + 0x14);
        }
      }
      else {
        param_1[0x73] = *(int *)(iVar3 + 0x18);
        *(undefined4 *)(iVar3 + 8) = 1;
      }
    }
    (**(code **)param_1[0x70])(param_1);
    (**(code **)(param_1[0x6b] + 8))(param_1);
    if (param_1[0x11] == 0) {
      if (*(int *)(iVar3 + 0x10) == 0) {
        (**(code **)param_1[0x72])(param_1);
      }
      (**(code **)param_1[0x71])(param_1);
      if (param_1[0x15] != 0) {
        (**(code **)param_1[0x73])(param_1,*(undefined4 *)(iVar3 + 8));
      }
      uVar2 = 0;
      if (*(int *)(iVar3 + 8) != 0) {
        uVar2 = 3;
      }
      (**(code **)param_1[0x6c])(param_1,uVar2);
      (**(code **)param_1[0x6a])(param_1,0);
    }
  }
  else {
    *(undefined4 *)(iVar3 + 8) = 0;
    (**(code **)param_1[0x73])(param_1,0);
    (**(code **)param_1[0x6c])(param_1,2);
    (**(code **)param_1[0x6a])(param_1,2);
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 0xc) = *(undefined4 *)(iVar3 + 0xc);
    if (*(int *)(iVar3 + 8) == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = 2;
    }
    iVar1 = iVar1 + *(int *)(iVar3 + 0xc);
    *(int *)(param_1[2] + 0x10) = iVar1;
    if (param_1[0x10] != 0) {
      if (*(int *)(param_1[0x6d] + 0x14) == 0) {
        if (param_1[0x1b] == 0) {
          iVar3 = 1;
        }
        else {
          iVar3 = 2;
        }
        *(int *)(param_1[2] + 0x10) = iVar1 + iVar3;
        return;
      }
      return;
    }
    return;
  }
  return;
}



// Address: 4a15edcc

void FUN_4a15edcc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_4a164fc0(param_1,&uStack_c);
  return;
}



// Address: 4a15ede8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a15ede8(int param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar12;
  
  iVar11 = *(int *)(param_1 + 0x1a8);
  if (*(int *)(iVar11 + 0x30) == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x1ac) + 0xc))
                      (param_1,*(undefined4 *)(iVar11 + *(int *)(iVar11 + 0x40) * 4 + 0x38));
    if (iVar1 == 0) {
      return;
    }
    *(undefined4 *)(iVar11 + 0x30) = 1;
    *(int *)(iVar11 + 0x4c) = *(int *)(iVar11 + 0x4c) + 1;
  }
  iVar1 = *(int *)(iVar11 + 0x44);
  if (iVar1 != 0) {
    if (iVar1 == 1) goto LAB_4a15efdc;
    if (iVar1 != 2) {
      return;
    }
    (**(code **)(*(int *)(param_1 + 0x1b0) + 4))
              (param_1,*(undefined4 *)(iVar11 + *(int *)(iVar11 + 0x40) * 4 + 0x38),iVar11 + 0x34,
               *(undefined4 *)(iVar11 + 0x48));
    if (*(uint *)(iVar11 + 0x34) < *(uint *)(iVar11 + 0x48)) {
                    /* WARNING: Could not recover jumptable at 0x4a15eeb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    *(undefined4 *)(iVar11 + 0x44) = 0;
    if (param_4 <= *param_3) {
      return;
    }
  }
  *(undefined4 *)(iVar11 + 0x34) = 0;
  *(int *)(iVar11 + 0x48) = *(int *)(param_1 + 0x13c) + -1;
  if (*(int *)(iVar11 + 0x4c) == *(int *)(param_1 + 0x140)) {
    iVar7 = *(int *)(param_1 + 0xd8);
    iVar9 = *(int *)(param_1 + 0x1a8);
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x24)) {
      do {
        iVar10 = *(int *)(iVar7 + 0xc) * *(int *)(iVar7 + 0x24);
        iVar2 = FUN_4a0015f0(iVar10,*(undefined4 *)(param_1 + 0x13c));
        FUN_4a0066d8(*(undefined4 *)(iVar7 + 0x2c),iVar10);
        iVar8 = extraout_r1;
        if (extraout_r1 == 0) {
          iVar8 = iVar10;
        }
        if (iVar1 == 0) {
          iVar10 = FUN_4a0015f0(iVar8 + -1,iVar2);
          *(int *)(iVar9 + 0x48) = iVar10 + 1;
        }
        iVar10 = *(int *)(*(int *)(iVar9 + *(int *)(iVar9 + 0x40) * 4 + 0x38) + iVar1 * 4);
        if (0 < iVar2 * 2) {
          iVar3 = 0;
          iVar5 = 0;
          if (0 < iVar2 * 2) {
            iVar6 = iVar10 + iVar8 * 4;
            do {
              *(undefined4 *)(iVar10 + (iVar8 + iVar3) * 4) = *(undefined4 *)(iVar6 + -4);
              iVar4 = iVar3 + 1;
              iVar5 = iVar5 + 2;
              iVar3 = iVar3 + 2;
              *(undefined4 *)(iVar10 + (iVar8 + iVar4) * 4) = *(undefined4 *)(iVar6 + -4);
            } while (iVar5 < iVar2 * 2);
          }
        }
        iVar1 = iVar1 + 1;
        iVar7 = iVar7 + 0x54;
      } while (iVar1 < *(int *)(param_1 + 0x24));
    }
  }
  *(undefined4 *)(iVar11 + 0x44) = 1;
LAB_4a15efdc:
  (**(code **)(*(int *)(param_1 + 0x1b0) + 4))
            (param_1,*(undefined4 *)(iVar11 + *(int *)(iVar11 + 0x40) * 4 + 0x38),iVar11 + 0x34,
             *(undefined4 *)(iVar11 + 0x48));
  if (*(uint *)(iVar11 + 0x48) <= *(uint *)(iVar11 + 0x34)) {
    if (*(int *)(iVar11 + 0x4c) == 1) {
      iVar1 = *(int *)(param_1 + 0x1a8);
      iVar7 = *(int *)(param_1 + 0x13c);
      iVar8 = *(int *)(param_1 + 0xd8);
      iVar9 = 0;
      if (0 < *(int *)(param_1 + 0x24)) {
        do {
          iVar2 = FUN_4a0015f0(*(int *)(iVar8 + 0x24) * *(int *)(iVar8 + 0xc),
                               *(undefined4 *)(param_1 + 0x13c));
          iVar10 = *(int *)(*(int *)(iVar1 + 0x38) + iVar9 * 4);
          iVar3 = *(int *)(*(int *)(iVar1 + 0x3c) + iVar9 * 4);
          if (0 < iVar2) {
            iVar6 = 0;
            iVar5 = iVar2;
            do {
              iVar4 = iVar2 * iVar7 + iVar2 + iVar6;
              *(undefined4 *)(iVar10 + (iVar6 - iVar2) * 4) = *(undefined4 *)(iVar10 + iVar4 * 4);
              iVar5 = iVar5 + -1;
              *(undefined4 *)(iVar3 + (iVar6 - iVar2) * 4) = *(undefined4 *)(iVar3 + iVar4 * 4);
              iVar12 = iVar2 * (iVar7 + 2) + iVar6;
              *(undefined4 *)(iVar10 + iVar12 * 4) = *(undefined4 *)(iVar10 + iVar6 * 4);
              iVar4 = iVar6 * 4;
              iVar6 = iVar6 + 1;
              *(undefined4 *)(iVar3 + iVar12 * 4) = *(undefined4 *)(iVar3 + iVar4);
            } while (iVar5 != 0);
          }
          iVar9 = iVar9 + 1;
          iVar8 = iVar8 + 0x54;
        } while (iVar9 < *(int *)(param_1 + 0x24));
      }
    }
    *(undefined4 *)(iVar11 + 0x30) = 0;
    *(uint *)(iVar11 + 0x40) = *(uint *)(iVar11 + 0x40) ^ 1;
    *(int *)(iVar11 + 0x34) = *(int *)(param_1 + 0x13c) + 1;
    iVar1 = *(int *)(param_1 + 0x13c);
    *(undefined4 *)(iVar11 + 0x44) = 2;
    *(int *)(iVar11 + 0x48) = iVar1 + 2;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a15f024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



// Address: 4a15f124

void FUN_4a15f124(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(*(int *)(param_1 + 0x1b0) + 4))(param_1,0,0,0,param_2,param_3,param_4);
  return;
}



// Address: 4a15f158

void FUN_4a15f158(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x1a8);
  if (*(int *)(iVar2 + 0x30) == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x1ac) + 0xc))(param_1,iVar2 + 8);
    if (iVar1 == 0) {
      return;
    }
    *(undefined4 *)(iVar2 + 0x30) = 1;
  }
  uVar3 = *(uint *)(param_1 + 0x13c);
  (**(code **)(*(int *)(param_1 + 0x1b0) + 4))(param_1,iVar2 + 8,iVar2 + 0x34,uVar3);
  if (uVar3 <= *(uint *)(iVar2 + 0x34)) {
    *(undefined4 *)(iVar2 + 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x34) = 0;
  }
  return;
}



// Address: 4a15f1f8

undefined4 FUN_4a15f1f8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1bc);
  *(int *)(*(int *)(param_1 + 0x1b8) + 0x18) =
       *(int *)(*(int *)(param_1 + 0x1b8) + 0x18) +
       ((int)(*(int *)(iVar3 + 0x10) + ((uint)(*(int *)(iVar3 + 0x10) >> 0x1f) >> 0x1d)) >> 3);
  *(undefined4 *)(iVar3 + 0x10) = 0;
  iVar1 = (**(code **)(*(int *)(param_1 + 0x1b8) + 8))(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if (0 < (int)*(uint *)(param_1 + 0x148)) {
    puVar2 = (undefined4 *)(iVar3 + 0x14);
    if ((*(uint *)(param_1 + 0x148) & 1) != 0) {
      puVar2 = (undefined4 *)(iVar3 + 0x18);
      *puVar2 = 0;
    }
    for (iVar1 = *(int *)(param_1 + 0x148) >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
      *puVar2 = 0;
    }
  }
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(param_1 + 0x114);
  if (*(int *)(param_1 + 0x1a0) == 0) {
    *(undefined4 *)(iVar3 + 8) = 0;
  }
  return 1;
}



// Address: 4a15f2a0

int FUN_4a15f2a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_4a15f49c();
  piVar1 = (int *)FUN_4a02aeac();
  if (((piVar1 == (int *)0x0) || (*piVar1 == 0)) ||
     (iVar2 = *(int *)(*piVar1 + *param_1 * 4), iVar2 == 0)) {
    iVar2 = 0;
  }
  return iVar2;
}



// Address: 4a15f2c8

undefined4 FUN_4a15f2c8(undefined4 *param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = (int *)FUN_4a00d394(8);
  thunk_FUN_4a001274(piVar2,8);
  *piVar2 = -1;
  puVar1 = PTR_DAT_4a15f344;
  piVar2[1] = param_2;
  FUN_4a15f3b0(puVar1);
  puVar1 = PTR_DAT_4a15f348;
  iVar3 = 0;
  iVar6 = *(int *)PTR_DAT_4a15f348;
  iVar5 = *(int *)(PTR_DAT_4a15f348 + 4);
  do {
    if (iVar5 <= iVar3) {
      iVar3 = *piVar2;
LAB_4a15f308:
      if (iVar3 == -1) {
        if (iVar5 == 0x80) {
          FUN_4a15f428(PTR_DAT_4a15f344);
          return 0xffffffff;
        }
        *piVar2 = iVar5;
        *(int *)(puVar1 + 4) = iVar5 + 1;
        uVar4 = FUN_4a00d3f4(iVar6,(iVar5 + 1) * 4);
        *(undefined4 *)puVar1 = uVar4;
      }
      *(int **)(*(int *)puVar1 + *piVar2 * 4) = piVar2;
      FUN_4a15f428(PTR_DAT_4a15f344);
      *param_1 = piVar2;
      return 0;
    }
    if (*(int *)(iVar6 + iVar3 * 4) == 0) {
      *piVar2 = iVar3;
      goto LAB_4a15f308;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}



// Address: 4a15f34c

undefined4 FUN_4a15f34c(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_DAT_4a15f3ac;
  if (*(int *)PTR_DAT_4a15f3a8 == 0) {
    *(undefined4 *)PTR_DAT_4a15f3a8 = 1;
    iVar2 = FUN_4a16168c();
    *(uint *)puVar1 = (uint)(iVar2 != 0);
  }
  uVar3 = 0xffffffff;
  if ((*(int *)puVar1 != 0) && (param_1 != (undefined4 *)0x0)) {
    thunk_FUN_4a001274(param_1,0x14);
    if (param_2 != (undefined4 *)0x0) {
      param_1[1] = *param_2;
      iVar2 = FUN_4a02db18();
      if (iVar2 == 0) {
        return 0x16;
      }
    }
    uVar3 = FUN_4a1616e4();
    *param_1 = 1;
    param_1[4] = uVar3;
    uVar3 = 0;
  }
  return uVar3;
}



// Address: 4a15f3b0

undefined4 FUN_4a15f3b0(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = PTR_DAT_4a15f424;
  if (*(int *)PTR_DAT_4a15f420 == 0) {
    *(undefined4 *)PTR_DAT_4a15f420 = 1;
    iVar3 = FUN_4a16168c();
    uVar2 = (uint)(iVar3 != 0);
    *(uint *)puVar1 = uVar2;
  }
  else {
    uVar2 = *(uint *)PTR_DAT_4a15f424;
  }
  if (uVar2 != 0) {
    FUN_4a02a3e8(param_1);
    iVar3 = FUN_4a1616a0();
    if ((*(int *)(param_1 + 0xc) == 0) || (*(int *)(param_1 + 0xc) != iVar3)) {
      iVar4 = FUN_4a1616bc(*(undefined4 *)(param_1 + 0x10),0xffffffff);
      if (iVar4 != 0) {
        return 0x10;
      }
      *(undefined4 *)(param_1 + 8) = 1;
      *(int *)(param_1 + 0xc) = iVar3;
    }
    else {
      if (*(int *)(param_1 + 4) != 6) {
        return 0x10;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    return 0;
  }
  return 0xffffffff;
}



// Address: 4a15f428

undefined4 FUN_4a15f428(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_DAT_4a15f498;
  if (*(int *)PTR_DAT_4a15f494 == 0) {
    *(undefined4 *)PTR_DAT_4a15f494 = 1;
    iVar3 = FUN_4a16168c();
    uVar2 = (uint)(iVar3 != 0);
    *(uint *)puVar1 = uVar2;
  }
  else {
    uVar2 = *(uint *)PTR_DAT_4a15f498;
  }
  if (uVar2 == 0) {
    return 0xffffffff;
  }
  FUN_4a02a3e8(param_1);
  iVar3 = FUN_4a1616a0();
  if ((*(int *)(param_1 + 0xc) == 0) || (*(int *)(param_1 + 0xc) == iVar3)) {
    if ((*(int *)(param_1 + 4) != 6) ||
       (iVar3 = *(int *)(param_1 + 8) + -1, *(int *)(param_1 + 8) = iVar3, iVar3 == 0)) {
      uVar4 = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 0xc) = 0;
      iVar3 = FUN_4a161724(*(undefined4 *)(param_1 + 0x10));
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0xc) = uVar4;
        goto LAB_4a15f46a;
      }
    }
    uVar4 = 0;
  }
  else {
LAB_4a15f46a:
    uVar4 = 1;
  }
  return uVar4;
}



// Address: 4a15f49c

undefined4 FUN_4a15f49c(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_DAT_4a15f4d0;
  if (*(int *)PTR_DAT_4a15f4d0 == 0) {
    *(undefined4 *)PTR_DAT_4a15f4d0 = 1;
    iVar3 = FUN_4a16168c();
    uVar2 = (uint)(iVar3 != 0);
    *(uint *)(puVar1 + 4) = uVar2;
  }
  else {
    uVar2 = *(uint *)(PTR_DAT_4a15f4d0 + 4);
  }
  if (uVar2 == 0) {
    uVar4 = 4000;
  }
  else {
    uVar4 = FUN_4a1616a0();
  }
  return uVar4;
}



// Address: 4a15f4d4

undefined4 FUN_4a15f4d4(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_4a15f49c();
  piVar1 = (int *)FUN_4a02aeac();
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (*piVar1 == 0) {
      FUN_4a15f3b0(PTR_DAT_4a15f524);
      if (*piVar1 == 0) {
        iVar3 = FUN_4a00d394(0x200);
        *piVar1 = iVar3;
        thunk_FUN_4a001274(iVar3,0x200);
      }
      FUN_4a15f428(PTR_DAT_4a15f524);
    }
    *(undefined4 *)(*piVar1 + *param_1 * 4) = param_2;
    uVar2 = 0;
  }
  return uVar2;
}



// Address: 4a15f528

undefined4 FUN_4a15f528(undefined4 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_4a15f54c;
  FUN_4a14f15c(param_1,*(undefined4 *)(PTR_DAT_4a15f54c + 0xc));
  FUN_4a14f0dc(10,*(undefined4 *)(puVar1 + 0xc));
  return 1;
}



// Address: 4a15f530

undefined4 FUN_4a15f530(undefined4 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_4a15f54c;
  FUN_4a14f15c(param_1,*(undefined4 *)(PTR_DAT_4a15f54c + 0xc));
  FUN_4a14f0dc(10,*(undefined4 *)(puVar1 + 0xc));
  return 1;
}



// Address: 4a15f550

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a15f550(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  byte *pbVar16;
  char *pcVar17;
  int iVar18;
  int iVar19;
  byte *pbVar20;
  int iStack_48;
  
  iVar8 = *(int *)(param_1 + 0x1cc);
  piVar9 = *(int **)(iVar8 + 0x18);
  iVar5 = *(int *)(param_1 + 0x70);
  iVar13 = piVar9[1];
  iVar18 = *piVar9;
  iVar10 = piVar9[2];
  iStack_48 = 0;
  if (0 < param_4) {
    do {
      iVar11 = *(int *)(iVar8 + 0x30);
      pbVar14 = *(byte **)(param_2 + iStack_48 * 4);
      iVar15 = *(int *)(iVar8 + 0x3c);
      iVar19 = *(int *)(iVar8 + 0x34);
      iVar6 = *(int *)(iVar8 + 0x38);
      uVar7 = 0;
      if (iVar5 != 0) {
        iVar12 = iVar5;
        pbVar16 = pbVar14 + 1;
        pcVar17 = *(char **)(param_3 + iStack_48 * 4);
        pbVar20 = pbVar14 + 2;
        do {
          bVar4 = *pbVar14;
          iVar1 = uVar7 * 4;
          iVar2 = uVar7 * 4;
          iVar3 = uVar7 * 4;
          iVar12 = iVar12 + -1;
          uVar7 = uVar7 + 1 & 0xf;
          pbVar14 = pbVar14 + 3;
          *pcVar17 = *(char *)(iVar18 + (uint)bVar4 + *(int *)(iVar19 + iVar11 * 0x40 + iVar1)) +
                     *(char *)(iVar13 + (uint)*pbVar16 + *(int *)(iVar6 + iVar11 * 0x40 + iVar2)) +
                     *(char *)(iVar10 + (uint)*pbVar20 + *(int *)(iVar15 + iVar11 * 0x40 + iVar3));
          pbVar16 = pbVar16 + 3;
          pcVar17 = pcVar17 + 1;
          pbVar20 = pbVar20 + 3;
        } while (iVar12 != 0);
      }
      *(uint *)(iVar8 + 0x30) = iVar11 + 1U & 0xf;
      iStack_48 = iStack_48 + 1;
    } while (iStack_48 < param_4);
    return;
  }
  return;
}



// Address: 4a15f68c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a15f68c(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  short sVar11;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int local_50;
  int iStack_4c;
  int iVar12;
  
  iVar4 = *(int *)(param_1 + 0x1cc);
  iVar7 = *(int *)(param_1 + 0x78);
  iVar5 = *(int *)(param_1 + 0x70);
  iVar8 = *(int *)(param_1 + 0x144);
  local_50 = 0;
  if (param_4 < 1) {
    return;
  }
  do {
    thunk_FUN_4a001274(*(undefined4 *)(param_3 + local_50 * 4),iVar5);
    iStack_4c = 0;
    if (0 < iVar7) {
      do {
        pbVar9 = (byte *)(*(int *)(param_2 + local_50 * 4) + iStack_4c);
        pcVar3 = *(char **)(param_3 + local_50 * 4);
        if (*(int *)(iVar4 + 0x54) == 0) {
          psVar6 = *(short **)(iVar4 + iStack_4c * 4 + 0x44);
          iVar13 = 1;
          iVar14 = iVar7;
        }
        else {
          pbVar9 = pbVar9 + (iVar5 + -1) * iVar7;
          pcVar3 = pcVar3 + iVar5 + -1;
          iVar13 = -1;
          psVar6 = (short *)(*(int *)(iVar4 + iStack_4c * 4 + 0x44) + iVar5 * 2 + 2);
          iVar14 = -iVar7;
        }
        iVar16 = *(int *)(*(int *)(iVar4 + 0x18) + iStack_4c * 4);
        iVar15 = *(int *)(*(int *)(iVar4 + 0x10) + iStack_4c * 4);
        iVar17 = 0;
        iVar12 = 0;
        sVar11 = 0;
        iVar2 = 0;
        for (iVar10 = iVar5; iVar10 != 0; iVar10 = iVar10 + -1) {
          uVar18 = (uint)*(byte *)(iVar8 + (uint)*pbVar9 + (iVar17 + 8 + (int)psVar6[iVar13] >> 4));
          bVar1 = *(byte *)(iVar16 + uVar18);
          pbVar9 = pbVar9 + iVar14;
          *pcVar3 = *pcVar3 + bVar1;
          iVar19 = uVar18 - *(byte *)(iVar15 + (uint)bVar1);
          *psVar6 = (short)iVar12 + (short)iVar19 * 3;
          iVar12 = iVar2 + iVar19 * 5;
          sVar11 = (short)iVar12;
          iVar17 = iVar19 * 7;
          iVar2 = iVar19;
          pcVar3 = pcVar3 + iVar13;
          psVar6 = psVar6 + iVar13;
        }
        *psVar6 = sVar11;
        iStack_4c = iStack_4c + 1;
      } while (iStack_4c < iVar7);
    }
    *(uint *)(iVar4 + 0x54) = (uint)(*(int *)(iVar4 + 0x54) == 0);
    local_50 = local_50 + 1;
  } while (local_50 < param_4);
  return;
}



// Address: 4a15f8a8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a15f8a8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar10 = *(int *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x78);
  iVar9 = *(int *)(param_1 + 0x1cc);
  iVar8 = 0;
  if (0 < param_4) {
    do {
      thunk_FUN_4a001274(*(undefined4 *)(param_3 + iVar8 * 4),iVar10);
      iVar12 = *(int *)(iVar9 + 0x30);
      iVar11 = 0;
      if (0 < iVar7) {
        do {
          iVar5 = *(int *)(iVar9 + iVar11 * 4 + 0x34);
          iVar13 = *(int *)(*(int *)(iVar9 + 0x18) + iVar11 * 4);
          uVar4 = 0;
          pbVar2 = (byte *)(*(int *)(param_2 + iVar8 * 4) + iVar11);
          pcVar3 = *(char **)(param_3 + iVar8 * 4);
          for (iVar6 = iVar10; iVar6 != 0; iVar6 = iVar6 + -1) {
            iVar1 = uVar4 * 4;
            uVar4 = uVar4 + 1 & 0xf;
            *pcVar3 = *(char *)(iVar13 + (uint)*pbVar2 + *(int *)(iVar5 + iVar12 * 0x40 + iVar1)) +
                      *pcVar3;
            pbVar2 = pbVar2 + iVar7;
            pcVar3 = pcVar3 + 1;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar7);
      }
      *(uint *)(iVar9 + 0x30) = iVar12 + 1U & 0xf;
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_4);
    return;
  }
  return;
}



// Address: 4a15f988

undefined4 FUN_4a15f988(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 2) {
    if (*(int *)PTR_DAT_4a15f9ac != 0) {
      FUN_4a1652c6(2);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// Address: 4a15f9b0

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_4a15f9b0(int *param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  ushort *puVar11;
  int *piVar12;
  int *piVar13;
  byte *pbVar14;
  uint *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  bool bVar23;
  byte local_13c [256];
  byte local_3c [20];
  uint local_28;
  
  iVar5 = param_1[0x68];
  do {
    if (iVar5 == 0) {
      if (*(int *)(param_1[0x6e] + 0xc) == 0) {
        puVar17 = (undefined4 *)param_1[6];
        iVar5 = puVar17[1];
        pbVar14 = (byte *)*puVar17;
        if (iVar5 == 0) {
          iVar5 = (*(code *)puVar17[3])(param_1);
          if (iVar5 == 0) {
            return 0;
          }
          iVar5 = puVar17[1];
          pbVar14 = (byte *)*puVar17;
        }
        iVar5 = iVar5 + -1;
        pbVar9 = pbVar14 + 1;
        bVar2 = *pbVar14;
        if (iVar5 == 0) {
          iVar5 = (*(code *)puVar17[3])(param_1);
          if (iVar5 == 0) {
            return 0;
          }
          iVar5 = puVar17[1];
          pbVar9 = (byte *)*puVar17;
        }
        uVar16 = (uint)*pbVar9;
        if (bVar2 != 0xff || uVar16 != 0xd8) {
          *(undefined4 *)(*param_1 + 0x14) = 0x35;
          *(uint *)(*param_1 + 0x18) = (uint)bVar2;
          *(uint *)(*param_1 + 0x1c) = uVar16;
          (**(code **)*param_1)(param_1);
        }
        param_1[0x68] = uVar16;
        puVar17[1] = iVar5 + -1;
        *puVar17 = pbVar9 + 1;
      }
      else {
        puVar17 = (undefined4 *)param_1[6];
        pbVar14 = (byte *)*puVar17;
        iVar5 = puVar17[1];
        while( true ) {
          if (iVar5 == 0) {
            iVar5 = (*(code *)puVar17[3])(param_1);
            if (iVar5 == 0) {
              return 0;
            }
            pbVar14 = (byte *)*puVar17;
            iVar5 = puVar17[1];
          }
          bVar2 = *pbVar14;
          while( true ) {
            iVar5 = iVar5 + -1;
            pbVar14 = pbVar14 + 1;
            pbVar9 = pbVar14;
            if (bVar2 == 0xff) break;
            *(int *)(param_1[0x6e] + 0x18) = *(int *)(param_1[0x6e] + 0x18) + 1;
            *puVar17 = pbVar14;
            puVar17[1] = iVar5;
            if (iVar5 == 0) {
              iVar5 = (*(code *)puVar17[3])(param_1);
              if (iVar5 == 0) {
                return 0;
              }
              pbVar14 = (byte *)*puVar17;
              iVar5 = puVar17[1];
            }
            bVar2 = *pbVar14;
          }
          do {
            if (iVar5 == 0) {
              iVar5 = (*(code *)puVar17[3])(param_1);
              if (iVar5 == 0) {
                return 0;
              }
              pbVar9 = (byte *)*puVar17;
              iVar5 = puVar17[1];
            }
            pbVar14 = pbVar9 + 1;
            uVar16 = (uint)*pbVar9;
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar14;
          } while (uVar16 == 0xff);
          iVar18 = param_1[0x6e];
          if (uVar16 != 0) break;
          *(int *)(iVar18 + 0x18) = *(int *)(iVar18 + 0x18) + 2;
          *puVar17 = pbVar14;
          puVar17[1] = iVar5;
        }
        if (*(int *)(iVar18 + 0x18) != 0) {
          *(undefined4 *)(*param_1 + 0x14) = 0x74;
          *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(param_1[0x6e] + 0x18);
          *(uint *)(*param_1 + 0x1c) = uVar16;
          (**(code **)(*param_1 + 4))(param_1,0xffffffff);
          *(undefined4 *)(param_1[0x6e] + 0x18) = 0;
        }
        param_1[0x68] = uVar16;
        *puVar17 = pbVar14;
        puVar17[1] = iVar5;
      }
    }
    iVar5 = param_1[0x68];
    if (iVar5 == 0xd7) {
switchD_4a15fce0_caseD_d0:
      *(undefined4 *)(*param_1 + 0x14) = 0x5c;
      *(int *)(*param_1 + 0x18) = param_1[0x68];
      (**(code **)(*param_1 + 4))(param_1,1);
      goto LAB_4a160c08;
    }
    if (iVar5 < 0xd8) {
      if (iVar5 != 0xcb) {
        if (0xcb < iVar5) {
          switch(iVar5) {
          case 0xcc:
            puVar17 = (undefined4 *)param_1[6];
            pbVar14 = (byte *)*puVar17;
            iVar5 = puVar17[1];
            if (iVar5 == 0) {
              iVar5 = (*(code *)puVar17[3])(param_1);
              if (iVar5 == 0) {
                return 0;
              }
              pbVar14 = (byte *)*puVar17;
              iVar5 = puVar17[1];
            }
            pbVar9 = pbVar14 + 1;
            bVar2 = *pbVar14;
            iVar5 = iVar5 + -1;
            if (iVar5 == 0) {
              iVar5 = (*(code *)puVar17[3])(param_1);
              if (iVar5 == 0) {
                return 0;
              }
              pbVar9 = (byte *)*puVar17;
              iVar5 = puVar17[1];
            }
            iVar18 = (uint)*pbVar9 + (uint)bVar2 * 0x100 + -2;
            *(undefined4 *)(*param_1 + 0x14) = 0x5b;
            *(int *)(*param_1 + 0x18) = param_1[0x68];
            *(int *)(*param_1 + 0x1c) = iVar18;
            (**(code **)(*param_1 + 4))(param_1,1);
            puVar17[1] = iVar5 + -1;
            *puVar17 = pbVar9 + 1;
            goto joined_r0x4a1603bc;
          case 0xcd:
          case 0xce:
          case 0xcf:
            goto switchD_4a15fcbc_caseD_c6;
          case 0xd0:
          case 0xd1:
          case 0xd2:
          case 0xd3:
          case 0xd4:
          case 0xd5:
          case 0xd6:
            goto switchD_4a15fce0_caseD_d0;
          default:
            goto switchD_4a15fcbc_default;
          }
        }
        if (iVar5 != 0xc5) {
          if (iVar5 < 0xc6) {
            if (iVar5 == 0xc2) {
              iVar5 = FUN_4a14f798(param_1,1,0);
joined_r0x4a15fecc:
              if (iVar5 == 0) {
                return 0;
              }
              goto LAB_4a160c08;
            }
            if (iVar5 < 0xc3) {
              if (iVar5 == 1) goto switchD_4a15fce0_caseD_d0;
              if (iVar5 == 0xc0 || iVar5 == 0xc1) {
                iVar5 = FUN_4a14f798(param_1,0);
                goto joined_r0x4a15fc20;
              }
            }
            else {
              if (iVar5 == 0xc3) goto switchD_4a15fcbc_caseD_c6;
              if (iVar5 == 0xc4) {
                puVar17 = (undefined4 *)param_1[6];
                pbVar14 = (byte *)*puVar17;
                iVar5 = puVar17[1];
                if (iVar5 == 0) {
                  iVar5 = (*(code *)puVar17[3])(param_1);
                  if (iVar5 == 0) {
                    return 0;
                  }
                  pbVar14 = (byte *)*puVar17;
                  iVar5 = puVar17[1];
                }
                pbVar9 = pbVar14 + 1;
                bVar2 = *pbVar14;
                iVar5 = iVar5 + -1;
                if (iVar5 == 0) {
                  iVar5 = (*(code *)puVar17[3])(param_1);
                  if (iVar5 == 0) {
                    return 0;
                  }
                  pbVar9 = (byte *)*puVar17;
                  iVar5 = puVar17[1];
                }
                pbVar14 = pbVar9 + 1;
                iVar5 = iVar5 + -1;
                local_28 = (uint)*pbVar9 + (uint)bVar2 * 0x100 + -2;
                while (0x10 < (int)local_28) {
                  if (iVar5 == 0) {
                    iVar5 = (*(code *)puVar17[3])(param_1);
                    if (iVar5 == 0) {
                      return 0;
                    }
                    pbVar14 = (byte *)*puVar17;
                    iVar5 = puVar17[1];
                  }
                  bVar2 = *pbVar14;
                  uVar16 = (uint)bVar2;
                  *(undefined4 *)(*param_1 + 0x14) = 0x50;
                  iVar5 = iVar5 + -1;
                  *(uint *)(*param_1 + 0x18) = uVar16;
                  (**(code **)(*param_1 + 4))(param_1,1);
                  iVar19 = 0;
                  iVar18 = 1;
                  local_3c[0] = 0;
                  pbVar9 = pbVar14 + 1;
                  do {
                    if (iVar5 == 0) {
                      iVar5 = (*(code *)puVar17[3])(param_1);
                      if (iVar5 == 0) {
                        return 0;
                      }
                      pbVar9 = (byte *)*puVar17;
                      iVar5 = puVar17[1];
                    }
                    pbVar14 = pbVar9 + 1;
                    bVar3 = *pbVar9;
                    iVar5 = iVar5 + -1;
                    local_3c[iVar18] = bVar3;
                    iVar18 = iVar18 + 1;
                    iVar19 = iVar19 + (uint)bVar3;
                    pbVar9 = pbVar14;
                  } while (iVar18 < 0x11);
                  local_28 = local_28 + -0x11;
                  iVar18 = *param_1;
                  *(uint *)(iVar18 + 0x18) = (uint)local_3c[1];
                  *(uint *)(iVar18 + 0x1c) = (uint)local_3c[2];
                  *(uint *)(iVar18 + 0x20) = (uint)local_3c[3];
                  *(uint *)(iVar18 + 0x24) = (uint)local_3c[4];
                  *(uint *)(iVar18 + 0x28) = (uint)local_3c[5];
                  *(uint *)(iVar18 + 0x2c) = (uint)local_3c[6];
                  *(uint *)(iVar18 + 0x30) = (uint)local_3c[7];
                  *(uint *)(iVar18 + 0x34) = (uint)local_3c[8];
                  *(undefined4 *)(*param_1 + 0x14) = 0x56;
                  (**(code **)(*param_1 + 4))(param_1,2);
                  iVar18 = *param_1;
                  *(uint *)(iVar18 + 0x18) = (uint)local_3c[9];
                  *(uint *)(iVar18 + 0x1c) = (uint)local_3c[10];
                  *(uint *)(iVar18 + 0x20) = (uint)local_3c[0xb];
                  *(uint *)(iVar18 + 0x24) = (uint)local_3c[0xc];
                  *(uint *)(iVar18 + 0x28) = (uint)local_3c[0xd];
                  *(uint *)(iVar18 + 0x2c) = (uint)local_3c[0xe];
                  *(uint *)(iVar18 + 0x30) = (uint)local_3c[0xf];
                  *(uint *)(iVar18 + 0x34) = (uint)local_3c[0x10];
                  *(undefined4 *)(*param_1 + 0x14) = 0x56;
                  (**(code **)(*param_1 + 4))(param_1,2);
                  bVar23 = SBORROW4(iVar19,0x100);
                  iVar18 = iVar19 + -0x100;
                  bVar22 = iVar19 == 0x100;
                  if (iVar19 < 0x101) {
                    bVar23 = SBORROW4(iVar19,local_28);
                    iVar18 = iVar19 - local_28;
                    bVar22 = iVar19 == local_28;
                  }
                  if (!bVar22 && iVar18 < 0 == bVar23) {
                    *(undefined4 *)(*param_1 + 0x14) = 8;
                    (**(code **)*param_1)(param_1);
                  }
                  iVar18 = 0;
                  if (0 < iVar19) {
                    do {
                      if (iVar5 == 0) {
                        iVar5 = (*(code *)puVar17[3])(param_1);
                        if (iVar5 == 0) {
                          return 0;
                        }
                        pbVar9 = (byte *)*puVar17;
                        iVar5 = puVar17[1];
                      }
                      pbVar14 = pbVar9 + 1;
                      iVar5 = iVar5 + -1;
                      local_13c[iVar18] = *pbVar9;
                      iVar18 = iVar18 + 1;
                      pbVar9 = pbVar14;
                    } while (iVar18 < iVar19);
                  }
                  local_28 = local_28 - iVar19;
                  if ((bVar2 & 0x10) == 0) {
                    iVar18 = uVar16 + 0x2d;
                    uVar21 = uVar16;
                  }
                  else {
                    uVar21 = uVar16 - 0x10;
                    iVar18 = uVar16 + 0x21;
                  }
                  piVar6 = param_1 + iVar18;
                  if (3 < uVar21) {
                    *(undefined4 *)(*param_1 + 0x14) = 0x1e;
                    *(uint *)(*param_1 + 0x18) = uVar21;
                    (**(code **)*param_1)(param_1);
                  }
                  if (*piVar6 == 0) {
                    iVar18 = FUN_4a15a254(param_1);
                    *piVar6 = iVar18;
                  }
                  else {
                    iVar18 = *piVar6;
                  }
                  FUN_4a001134(iVar18,local_3c,0x11);
                  FUN_4a000f84(*piVar6 + 0x11,local_13c,0x100);
                }
                if (local_28 != 0) {
                  *(undefined4 *)(*param_1 + 0x14) = 0xb;
                  (**(code **)*param_1)(param_1);
                }
                *puVar17 = pbVar14;
                puVar17[1] = iVar5;
                goto LAB_4a160c08;
              }
            }
          }
          else {
            switch(iVar5) {
            case 0xc6:
            case 199:
            case 200:
              goto switchD_4a15fcbc_caseD_c6;
            case 0xc9:
              iVar5 = FUN_4a14f798(param_1,0,1);
              goto joined_r0x4a15fc20;
            case 0xca:
              iVar5 = FUN_4a14f798(param_1,1);
              goto joined_r0x4a15fecc;
            }
          }
switchD_4a15fcbc_default:
          *(undefined4 *)(*param_1 + 0x14) = 0x44;
          *(int *)(*param_1 + 0x18) = param_1[0x68];
          (**(code **)*param_1)(param_1);
          goto LAB_4a160c08;
        }
      }
switchD_4a15fcbc_caseD_c6:
      *(undefined4 *)(*param_1 + 0x14) = 0x3c;
      *(int *)(*param_1 + 0x18) = param_1[0x68];
      (**(code **)*param_1)(param_1);
      goto LAB_4a160c08;
    }
    switch(iVar5) {
    case 0xd8:
      *(undefined4 *)(*param_1 + 0x14) = 0x66;
      (**(code **)(*param_1 + 4))(param_1,1);
      if (*(int *)(param_1[0x6e] + 0xc) != 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x3d;
        (**(code **)*param_1)(param_1);
      }
      iVar5 = 0x10;
      piVar6 = param_1 + 0x3d;
      piVar12 = param_1 + 0x39;
      piVar13 = param_1 + 0x41;
      do {
        *(undefined1 *)piVar12 = 0;
        *(undefined1 *)piVar6 = 1;
        iVar5 = iVar5 + -1;
        *(undefined1 *)piVar13 = 5;
        piVar6 = (int *)((int)piVar6 + 1);
        piVar12 = (int *)((int)piVar12 + 1);
        piVar13 = (int *)((int)piVar13 + 1);
      } while (iVar5 != 0);
      param_1[0x45] = 0;
      param_1[10] = 0;
      param_1[0x4b] = 0;
      param_1[0x46] = 0;
      *(undefined1 *)(param_1 + 0x47) = 1;
      *(undefined1 *)((int)param_1 + 0x11d) = 1;
      *(undefined1 *)((int)param_1 + 0x11e) = 0;
      *(undefined2 *)(param_1 + 0x48) = 1;
      *(undefined2 *)((int)param_1 + 0x122) = 1;
      param_1[0x49] = 0;
      *(undefined1 *)(param_1 + 0x4a) = 0;
      *(undefined4 *)(param_1[0x6e] + 0xc) = 1;
      break;
    case 0xd9:
      *(undefined4 *)(*param_1 + 0x14) = 0x55;
      (**(code **)(*param_1 + 4))(param_1,1);
      param_1[0x68] = 0;
      return 2;
    case 0xda:
      puVar17 = (undefined4 *)param_1[6];
      pbVar14 = (byte *)*puVar17;
      iVar5 = puVar17[1];
      if (*(int *)(param_1[0x6e] + 0x10) == 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x3e;
        (**(code **)*param_1)(param_1);
      }
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar17[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        pbVar14 = (byte *)*puVar17;
        iVar5 = puVar17[1];
      }
      bVar2 = *pbVar14;
      pbVar14 = pbVar14 + 1;
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar17[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        pbVar14 = (byte *)*puVar17;
        iVar5 = puVar17[1];
      }
      pbVar9 = pbVar14 + 1;
      bVar3 = *pbVar14;
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar17[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        pbVar9 = (byte *)*puVar17;
        iVar5 = puVar17[1];
      }
      pbVar14 = pbVar9 + 1;
      iVar5 = iVar5 + -1;
      local_28 = (uint)*pbVar9;
      *(undefined4 *)(*param_1 + 0x14) = 0x67;
      *(uint *)(*param_1 + 0x18) = local_28;
      (**(code **)(*param_1 + 4))(param_1,1);
      if (((local_28 * 2 + 6 != (uint)bVar2 * 0x100 + (uint)bVar3) || ((int)local_28 < 1)) ||
         (4 < (int)local_28)) {
        *(undefined4 *)(*param_1 + 0x14) = 0xb;
        (**(code **)*param_1)(param_1);
      }
      iVar18 = 0;
      param_1[0x52] = local_28;
      if (0 < (int)local_28) {
        do {
          if (iVar5 == 0) {
            iVar5 = (*(code *)puVar17[3])(param_1);
            if (iVar5 == 0) {
              return 0;
            }
            pbVar14 = (byte *)*puVar17;
            iVar5 = puVar17[1];
          }
          uVar16 = (uint)*pbVar14;
          iVar5 = iVar5 + -1;
          pbVar14 = pbVar14 + 1;
          if (iVar5 == 0) {
            iVar5 = (*(code *)puVar17[3])(param_1);
            if (iVar5 == 0) {
              return 0;
            }
            pbVar14 = (byte *)*puVar17;
            iVar5 = puVar17[1];
          }
          uVar21 = param_1[9];
          bVar2 = *pbVar14;
          pbVar14 = pbVar14 + 1;
          puVar15 = (uint *)param_1[0x36];
          iVar5 = iVar5 + -1;
          if ((int)uVar21 < 1) {
            uVar7 = 0;
          }
          else {
            uVar7 = uVar21 & 1;
          }
          iVar19 = 0;
          if (uVar7 != 0) {
            do {
              if (*puVar15 == uVar16) goto LAB_4a16014c;
              iVar19 = iVar19 + 1;
              puVar15 = puVar15 + 0x15;
            } while (iVar19 < (int)uVar7);
          }
          for (; (int)uVar7 < (int)uVar21; uVar7 = uVar7 + 2) {
            uVar10 = *puVar15;
            bVar22 = uVar10 == uVar16;
            if (!bVar22) {
              puVar15 = puVar15 + 0x15;
              uVar10 = *puVar15;
            }
            if (bVar22 || uVar10 == uVar16) goto LAB_4a16014c;
            puVar15 = puVar15 + 0x15;
          }
          *(undefined4 *)(*param_1 + 0x14) = 5;
          *(uint *)(*param_1 + 0x18) = uVar16;
          (**(code **)*param_1)(param_1);
LAB_4a16014c:
          param_1[iVar18 + 0x53] = (int)puVar15;
          puVar15[5] = (uint)(bVar2 >> 4);
          puVar15[6] = bVar2 & 0xf;
          iVar19 = *param_1;
          *(uint *)(iVar19 + 0x18) = uVar16;
          *(uint *)(iVar19 + 0x1c) = puVar15[5];
          *(uint *)(iVar19 + 0x20) = puVar15[6];
          *(undefined4 *)(*param_1 + 0x14) = 0x68;
          (**(code **)(*param_1 + 4))(param_1,1);
          iVar18 = iVar18 + 1;
        } while (iVar18 < (int)local_28);
      }
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar17[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        pbVar14 = (byte *)*puVar17;
        iVar5 = puVar17[1];
      }
      iVar5 = iVar5 + -1;
      pbVar9 = pbVar14 + 1;
      param_1[100] = (uint)*pbVar14;
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar17[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        pbVar9 = (byte *)*puVar17;
        iVar5 = puVar17[1];
      }
      pbVar14 = pbVar9 + 1;
      iVar5 = iVar5 + -1;
      param_1[0x65] = (uint)*pbVar9;
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar17[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        pbVar14 = (byte *)*puVar17;
        iVar5 = puVar17[1];
      }
      bVar2 = *pbVar14;
      param_1[0x66] = (uint)(bVar2 >> 4);
      param_1[0x67] = bVar2 & 0xf;
      iVar18 = *param_1;
      *(int *)(iVar18 + 0x18) = param_1[100];
      *(int *)(iVar18 + 0x1c) = param_1[0x65];
      *(int *)(iVar18 + 0x20) = param_1[0x66];
      *(int *)(iVar18 + 0x24) = param_1[0x67];
      *(undefined4 *)(*param_1 + 0x14) = 0x69;
      (**(code **)(*param_1 + 4))(param_1,1);
      *(undefined4 *)(param_1[0x6e] + 0x14) = 0;
      param_1[0x24] = param_1[0x24] + 1;
      puVar17[1] = iVar5 + -1;
      *puVar17 = pbVar14 + 1;
      param_1[0x68] = 0;
      return 1;
    case 0xdb:
      puVar17 = (undefined4 *)param_1[6];
      pbVar14 = (byte *)*puVar17;
      iVar5 = puVar17[1];
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar17[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        pbVar14 = (byte *)*puVar17;
        iVar5 = puVar17[1];
      }
      pbVar9 = pbVar14 + 1;
      bVar2 = *pbVar14;
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar17[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        pbVar9 = (byte *)*puVar17;
        iVar5 = puVar17[1];
      }
      iVar5 = iVar5 + -1;
      pbVar14 = pbVar9 + 1;
      iVar18 = (uint)*pbVar9 + (uint)bVar2 * 0x100 + -2;
      while (iVar19 = iVar18, 0 < iVar19) {
        if (iVar5 == 0) {
          iVar5 = (*(code *)puVar17[3])(param_1);
          if (iVar5 == 0) {
            return 0;
          }
          pbVar14 = (byte *)*puVar17;
          iVar5 = puVar17[1];
        }
        pbVar9 = pbVar14 + 1;
        iVar5 = iVar5 + -1;
        iVar1 = (int)(uint)*pbVar14 >> 4;
        uVar16 = *pbVar14 & 0xf;
        *(undefined4 *)(*param_1 + 0x14) = 0x51;
        *(uint *)(*param_1 + 0x18) = uVar16;
        *(int *)(*param_1 + 0x1c) = iVar1;
        (**(code **)(*param_1 + 4))(param_1,1);
        if (3 < uVar16) {
          *(undefined4 *)(*param_1 + 0x14) = 0x1f;
          *(uint *)(*param_1 + 0x18) = uVar16;
          (**(code **)*param_1)(param_1);
        }
        if (param_1[uVar16 + 0x29] == 0) {
          iVar18 = FUN_4a15a280(param_1);
          param_1[uVar16 + 0x29] = iVar18;
        }
        iVar20 = param_1[uVar16 + 0x29];
        iVar18 = 0;
        do {
          if (iVar1 == 0) {
            if (iVar5 == 0) {
              iVar5 = (*(code *)puVar17[3])(param_1);
              if (iVar5 == 0) {
                return 0;
              }
              pbVar9 = (byte *)*puVar17;
              iVar5 = puVar17[1];
            }
            uVar4 = (ushort)*pbVar9;
          }
          else {
            if (iVar5 == 0) {
              iVar5 = (*(code *)puVar17[3])(param_1);
              if (iVar5 == 0) {
                return 0;
              }
              pbVar9 = (byte *)*puVar17;
              iVar5 = puVar17[1];
            }
            bVar2 = *pbVar9;
            pbVar9 = pbVar9 + 1;
            iVar5 = iVar5 + -1;
            if (iVar5 == 0) {
              iVar5 = (*(code *)puVar17[3])(param_1);
              if (iVar5 == 0) {
                return 0;
              }
              pbVar9 = (byte *)*puVar17;
              iVar5 = puVar17[1];
            }
            uVar4 = (ushort)*pbVar9 + (ushort)bVar2 * 0x100;
          }
          iVar5 = iVar5 + -1;
          pbVar9 = pbVar9 + 1;
          iVar8 = iVar18 * 4;
          iVar18 = iVar18 + 1;
          *(ushort *)(iVar20 + *(int *)(PTR_DAT_4a160c14 + iVar8) * 2) = uVar4;
        } while (iVar18 < 0x40);
        if (1 < *(int *)(*param_1 + 0x68)) {
          iVar18 = 0;
          do {
            puVar11 = (ushort *)(iVar20 + iVar18 * 2);
            iVar8 = *param_1;
            *(uint *)(iVar8 + 0x18) = (uint)*puVar11;
            *(uint *)(iVar8 + 0x1c) = (uint)puVar11[1];
            *(uint *)(iVar8 + 0x20) = (uint)puVar11[2];
            *(uint *)(iVar8 + 0x24) = (uint)puVar11[3];
            *(uint *)(iVar8 + 0x28) = (uint)puVar11[4];
            *(uint *)(iVar8 + 0x2c) = (uint)puVar11[5];
            *(uint *)(iVar8 + 0x30) = (uint)puVar11[6];
            *(uint *)(iVar8 + 0x34) = (uint)puVar11[7];
            *(undefined4 *)(*param_1 + 0x14) = 0x5d;
            (**(code **)(*param_1 + 4))(param_1,2);
            iVar18 = iVar18 + 8;
          } while (iVar18 < 0x40);
        }
        pbVar14 = pbVar9;
        iVar18 = iVar19 + -0x41;
        if (iVar1 != 0) {
          iVar18 = iVar19 + -0x81;
        }
      }
      if (iVar19 != 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0xb;
        (**(code **)*param_1)(param_1);
      }
      *puVar17 = pbVar14;
      puVar17[1] = iVar5;
      break;
    case 0xdc:
      puVar17 = (undefined4 *)param_1[6];
      pbVar14 = (byte *)*puVar17;
      iVar5 = puVar17[1];
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar17[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        pbVar14 = (byte *)*puVar17;
        iVar5 = puVar17[1];
      }
      pbVar9 = pbVar14 + 1;
      bVar2 = *pbVar14;
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar17[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        pbVar9 = (byte *)*puVar17;
        iVar5 = puVar17[1];
      }
      iVar18 = (uint)*pbVar9 + (uint)bVar2 * 0x100 + -2;
      *(undefined4 *)(*param_1 + 0x14) = 0x5b;
      *(int *)(*param_1 + 0x18) = param_1[0x68];
      *(int *)(*param_1 + 0x1c) = iVar18;
      (**(code **)(*param_1 + 4))(param_1,1);
      *puVar17 = pbVar9 + 1;
      puVar17[1] = iVar5 + -1;
joined_r0x4a1603bc:
      if (0 < iVar18) {
        (**(code **)(param_1[6] + 0x10))(param_1,iVar18);
      }
      break;
    case 0xdd:
      puVar17 = (undefined4 *)param_1[6];
      pbVar14 = (byte *)*puVar17;
      iVar5 = puVar17[1];
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar17[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        pbVar14 = (byte *)*puVar17;
        iVar5 = puVar17[1];
      }
      pbVar9 = pbVar14 + 1;
      bVar2 = *pbVar14;
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar17[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        pbVar9 = (byte *)*puVar17;
        iVar5 = puVar17[1];
      }
      pbVar14 = pbVar9 + 1;
      iVar5 = iVar5 + -1;
      if ((uint)*pbVar9 + (uint)bVar2 * 0x100 != 4) {
        *(undefined4 *)(*param_1 + 0x14) = 0xb;
        (**(code **)*param_1)(param_1);
      }
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar17[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        pbVar14 = (byte *)*puVar17;
        iVar5 = puVar17[1];
      }
      bVar2 = *pbVar14;
      pbVar14 = pbVar14 + 1;
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar17[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        iVar5 = puVar17[1];
        pbVar14 = (byte *)*puVar17;
      }
      iVar18 = (uint)bVar2 * 0x100 + (uint)*pbVar14;
      *(undefined4 *)(*param_1 + 0x14) = 0x52;
      *(int *)(*param_1 + 0x18) = iVar18;
      (**(code **)(*param_1 + 4))(param_1,1);
      param_1[0x45] = iVar18;
      *puVar17 = pbVar14 + 1;
      puVar17[1] = iVar5 + -1;
      break;
    default:
      goto switchD_4a15fcbc_default;
    case 0xe0:
    case 0xe1:
    case 0xe2:
    case 0xe3:
    case 0xe4:
    case 0xe5:
    case 0xe6:
    case 0xe7:
    case 0xe8:
    case 0xe9:
    case 0xea:
    case 0xeb:
    case 0xec:
    case 0xed:
    case 0xee:
    case 0xef:
      iVar5 = (**(code **)(param_1[0x6e] + param_1[0x68] * 4 + -0x360))(param_1);
      goto joined_r0x4a15fc20;
    case 0xfe:
      iVar5 = (**(code **)(param_1[0x6e] + 0x1c))(param_1);
joined_r0x4a15fc20:
      if (iVar5 == 0) {
        return 0;
      }
    }
LAB_4a160c08:
    iVar5 = 0;
    param_1[0x68] = 0;
  } while( true );
}



// Address: 4a160c18

undefined4 FUN_4a160c18(int *param_1)

{
  int iVar1;
  
  if ((param_1[0x68] == 0) && (iVar1 = FUN_4a15e260(param_1), iVar1 == 0)) {
    return 0;
  }
  if (param_1[0x68] == *(int *)(param_1[0x6e] + 0x14) + 0xd0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x62;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(param_1[0x6e] + 0x14);
    (**(code **)(*param_1 + 4))(param_1,3);
    param_1[0x68] = 0;
  }
  else {
    iVar1 = (**(code **)(param_1[6] + 0x14))(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  *(uint *)(param_1[0x6e] + 0x14) = *(int *)(param_1[0x6e] + 0x14) + 1U & 7;
  return 1;
}



// Address: 4a160cdc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a160cdc(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  code *UNRECOVERED_JUMPTABLE;
  int *piStack_34;
  int iStack_2c;
  
  iVar1 = param_1[1];
  iVar9 = 0;
  iVar11 = 0;
  for (piVar2 = *(int **)(iVar1 + 0x44); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0xb]) {
    if (*piVar2 == 0) {
      iVar9 = piVar2[3] * piVar2[2] + iVar9;
      iVar11 = piVar2[1] * piVar2[2] + iVar11;
    }
  }
  for (piVar2 = *(int **)(iVar1 + 0x48); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0xb]) {
    if (*piVar2 == 0) {
      iVar9 = iVar9 + piVar2[2] * piVar2[3] * 0x80;
      iVar11 = iVar11 + piVar2[1] * piVar2[2] * 0x80;
    }
  }
  if (iVar9 < 1) {
    return;
  }
  iVar3 = FUN_4a15c5b4(param_1,iVar9,iVar11,*(undefined4 *)(iVar1 + 0x4c));
  iStack_2c = DAT_4a161280;
  if ((iVar3 < iVar11) && (iStack_2c = FUN_4a0015f0(iVar3,iVar9), iStack_2c < 1)) {
    iStack_2c = 1;
  }
  for (piVar2 = *(int **)(iVar1 + 0x44); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0xb]) {
    if (*piVar2 == 0) {
      iVar11 = piVar2[3];
      iVar3 = piVar2[1];
      iVar9 = FUN_4a0066d8(iVar3 + -1);
      if (iStack_2c < iVar9 + 1) {
        piVar2[4] = iVar11 * iStack_2c;
        FUN_4a15c5c8(param_1,piVar2 + 0xc,iVar3 * piVar2[2]);
        piVar2[10] = 1;
      }
      else {
        piVar2[4] = iVar3;
      }
      iVar11 = piVar2[2];
      uVar4 = piVar2[4];
      iVar9 = param_1[1];
      uVar5 = FUN_4a0066d8(DAT_4a161284,iVar11);
      if ((int)uVar5 < 1) {
        *(undefined4 *)(*param_1 + 0x14) = 0x46;
        (**(code **)*param_1)(param_1);
      }
      if ((int)uVar4 <= (int)uVar5) {
        uVar5 = uVar4;
      }
      *(uint *)(iVar9 + 0x50) = uVar5;
      iVar9 = FUN_4a14a878(param_1,1,uVar4 << 2);
      uVar12 = 0;
      if (uVar4 != 0) {
        do {
          iVar3 = param_1[1];
          if (uVar4 - uVar12 <= uVar5) {
            uVar5 = uVar4 - uVar12;
          }
          uVar10 = uVar5 * iVar11;
          if (DAT_4a161284 <= uVar10 && uVar10 - DAT_4a161284 != 0) {
            *(undefined4 *)(*param_1 + 0x14) = 0x36;
            *(undefined4 *)(*param_1 + 0x18) = 3;
            (**(code **)*param_1)(param_1);
          }
          if ((uVar10 & 7) != 0) {
            uVar10 = uVar10 + (8 - (uVar10 & 7));
          }
          puVar6 = (undefined4 *)FUN_4a15ab30(param_1,uVar10 + 0x10);
          if (puVar6 == (undefined4 *)0x0) {
            *(undefined4 *)(*param_1 + 0x14) = 0x36;
            *(undefined4 *)(*param_1 + 0x18) = 4;
            (**(code **)*param_1)(param_1);
          }
          *(uint *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + uVar10 + 0x10;
          *puVar6 = *(undefined4 *)(iVar3 + 0x40);
          puVar6[1] = uVar10;
          puVar6[2] = 0;
          *(undefined4 **)(iVar3 + 0x40) = puVar6;
          if (uVar5 != 0) {
            iVar3 = 0;
            uVar10 = uVar5;
            do {
              iVar7 = iVar11 * iVar3;
              iVar8 = uVar12 + iVar3;
              uVar10 = uVar10 - 1;
              iVar3 = iVar3 + 1;
              *(int *)(iVar9 + iVar8 * 4) = (int)puVar6 + iVar7 + 0x10;
            } while (uVar10 != 0);
            uVar12 = uVar12 + uVar5;
          }
        } while (uVar12 < uVar4);
      }
      *piVar2 = iVar9;
      piVar2[5] = *(int *)(iVar1 + 0x50);
      piVar2[6] = 0;
      piVar2[7] = 0;
      piVar2[9] = 0;
    }
  }
  piStack_34 = *(int **)(iVar1 + 0x48);
  if (piStack_34 != (int *)0x0) {
    do {
      if (*piStack_34 == 0) {
        iVar11 = piStack_34[3];
        iVar3 = piStack_34[1];
        iVar9 = FUN_4a0066d8(iVar3 + -1);
        if (iStack_2c < iVar9 + 1) {
          piStack_34[4] = iVar11 * iStack_2c;
          FUN_4a15c5c8(param_1,piStack_34 + 0xc,iVar3 * piStack_34[2] * 0x80);
          piStack_34[10] = 1;
        }
        else {
          piStack_34[4] = iVar3;
        }
        iVar11 = piStack_34[2];
        uVar4 = piStack_34[4];
        iVar9 = param_1[1];
        uVar5 = FUN_4a0066d8(DAT_4a161284,iVar11 << 7);
        if ((int)uVar5 < 1) {
          *(undefined4 *)(*param_1 + 0x14) = 0x46;
          (**(code **)*param_1)(param_1);
        }
        if ((int)uVar4 <= (int)uVar5) {
          uVar5 = uVar4;
        }
        *(uint *)(iVar9 + 0x50) = uVar5;
        iVar9 = FUN_4a14a878(param_1,1,uVar4 << 2);
        uVar12 = 0;
        if (uVar4 != 0) {
          do {
            iVar3 = param_1[1];
            if (uVar4 - uVar12 <= uVar5) {
              uVar5 = uVar4 - uVar12;
            }
            uVar10 = uVar5 * iVar11 * 0x80;
            if (DAT_4a161284 <= uVar10 && uVar10 - DAT_4a161284 != 0) {
              *(undefined4 *)(*param_1 + 0x14) = 0x36;
              *(undefined4 *)(*param_1 + 0x18) = 3;
              (**(code **)*param_1)(param_1);
            }
            puVar6 = (undefined4 *)FUN_4a15ab30(param_1,uVar10 + 0x10);
            if (puVar6 == (undefined4 *)0x0) {
              *(undefined4 *)(*param_1 + 0x14) = 0x36;
              *(undefined4 *)(*param_1 + 0x18) = 4;
              (**(code **)*param_1)(param_1);
            }
            *(uint *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + uVar10 + 0x10;
            *puVar6 = *(undefined4 *)(iVar3 + 0x40);
            puVar6[1] = uVar10;
            puVar6[2] = 0;
            *(undefined4 **)(iVar3 + 0x40) = puVar6;
            if (uVar5 != 0) {
              iVar3 = 0;
              uVar10 = uVar5;
              do {
                iVar7 = iVar11 * iVar3;
                iVar8 = uVar12 + iVar3;
                uVar10 = uVar10 - 1;
                iVar3 = iVar3 + 1;
                *(undefined4 **)(iVar9 + iVar8 * 4) = puVar6 + iVar7 * 0x20 + 4;
              } while (uVar10 != 0);
              uVar12 = uVar12 + uVar5;
            }
          } while (uVar12 < uVar4);
        }
        *piStack_34 = iVar9;
        piStack_34[5] = *(int *)(iVar1 + 0x50);
        piStack_34[6] = 0;
        piStack_34[7] = 0;
        piStack_34[9] = 0;
      }
      piStack_34 = (int *)piStack_34[0xb];
    } while (piStack_34 != (int *)0x0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a161030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a161288

void FUN_4a161288(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (param_2 != 1) {
    *(undefined4 *)(*param_1 + 0x14) = 0xe;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar1 = (undefined4 *)FUN_4a14a878(param_1,param_2,0x80);
  *puVar1 = 0;
  puVar1[1] = param_5;
  puVar1[2] = param_4;
  puVar1[3] = param_6;
  puVar1[8] = param_3;
  puVar1[10] = 0;
  puVar1[0xb] = *(undefined4 *)(iVar2 + 0x48);
  *(undefined4 **)(iVar2 + 0x48) = puVar1;
  return;
}



// Address: 4a161310

void FUN_4a161310(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (param_2 != 1) {
    *(undefined4 *)(*param_1 + 0x14) = 0xe;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar1 = (undefined4 *)FUN_4a14a878(param_1,param_2,0x80);
  *puVar1 = 0;
  puVar1[1] = param_5;
  puVar1[2] = param_4;
  puVar1[3] = param_6;
  puVar1[8] = param_3;
  puVar1[10] = 0;
  puVar1[0xb] = *(undefined4 *)(iVar2 + 0x44);
  *(undefined4 **)(iVar2 + 0x44) = puVar1;
  return;
}



// Address: 4a1613b0

void FUN_4a1613b0(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[0x6d];
  *puVar1 = PTR_FUN_4a16140c;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 1;
  (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)param_1[0x6e])(param_1);
  param_1[0x28] = 0;
  return;
}



// Address: 4a161438

undefined1 FUN_4a161438(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_4a161470;
  if (*PTR_DAT_4a161470 == '\0' && PTR_DAT_4a161470[2] == '\0') {
    iVar2 = host_s3eExtGetHash_thumb(DAT_4a161474,PTR_DAT_4a161470 + 4,4);
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



// Address: 4a161440

undefined1 FUN_4a161440(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_4a161470;
  if (*PTR_DAT_4a161470 == '\0' && PTR_DAT_4a161470[2] == '\0') {
    iVar2 = host_s3eExtGetHash_thumb(DAT_4a161474,PTR_DAT_4a161470 + 4,4);
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



// Address: 4a161478

void FUN_4a161478(void)

{
  int iVar1;
  
  iVar1 = FUN_4a057998();
  if (iVar1 != 0) {
    FUN_4a1652c4(*(undefined4 *)PTR_DAT_4a161498);
  }
  return;
}



// Address: 4a16149c

undefined1 FUN_4a16149c(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_4a1614cc;
  if (*PTR_DAT_4a1614cc == '\0' && PTR_DAT_4a1614cc[2] == '\0') {
    iVar2 = host_s3eExtGetHash_thumb(DAT_4a1614d0,PTR_DAT_4a1614cc + 4,8);
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



// Address: 4a1614d4

void FUN_4a1614d4(void)

{
  FUN_4a1615cc();
  return;
}



// Address: 4a1614e8

void FUN_4a1614e8(void)

{
  FUN_4a161634();
  return;
}



// Address: 4a1614fc

void FUN_4a1614fc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_4a057a5c();
  if (iVar1 != 0) {
    FUN_4a1652c8(param_1,param_2,*(undefined4 *)(PTR_DAT_4a161524 + 8));
  }
  return;
}



// Address: 4a161530

void FUN_4a161530(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_4a057044();
  FUN_4a1652c6(param_1,*(undefined4 *)(iVar1 + 8));
  return;
}



// Address: 4a161548

undefined4 FUN_4a161548(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_4a057b2c();
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_4a1652c4(*(undefined4 *)PTR_DAT_4a161564);
  }
  return uVar2;
}



// Address: 4a161570

void FUN_4a161570(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a057044();
  FUN_4a1652c6(param_1,*puVar1);
  return;
}



// Address: 4a161586

undefined4 FUN_4a161586(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)FUN_4a057044();
  if (param_1 != (undefined4 *)0x0) {
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    *param_1 = *puVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
  }
  return 0;
}



// Address: 4a1615a0

longlong FUN_4a1615a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)FUN_4a057044();
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = *(undefined4 *)(PTR_PTR_4a1615c8 + 4);
    uVar4 = *(undefined4 *)(PTR_PTR_4a1615c8 + 8);
    puVar2 = PTR_PTR_4a1615c8 + 0xc;
    *puVar1 = *(undefined4 *)PTR_PTR_4a1615c8;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
  }
  else {
    puVar2 = (undefined *)*param_1;
    uVar3 = param_1[1];
    uVar4 = param_1[2];
    *puVar1 = puVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
  }
  return ZEXT48(puVar2) << 0x20;
}



// Address: 4a1615a8

longlong FUN_4a1615a8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)FUN_4a057044();
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = *(undefined4 *)(PTR_PTR_4a1615c8 + 4);
    uVar4 = *(undefined4 *)(PTR_PTR_4a1615c8 + 8);
    puVar2 = PTR_PTR_4a1615c8 + 0xc;
    *puVar1 = *(undefined4 *)PTR_PTR_4a1615c8;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
  }
  else {
    puVar2 = (undefined *)*param_1;
    uVar3 = param_1[1];
    uVar4 = param_1[2];
    *puVar1 = puVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
  }
  return ZEXT48(puVar2) << 0x20;
}



// Address: 4a1615cc

undefined1 FUN_4a1615cc(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_4a1615fc;
  if (*PTR_DAT_4a1615fc == '\0' && PTR_DAT_4a1615fc[2] == '\0') {
    iVar2 = host_s3eExtGetHash_thumb(DAT_4a161600,PTR_DAT_4a1615fc + 4,4);
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



// Address: 4a161604

undefined4 FUN_4a161604(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_4a0579fc();
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_4a1652c8(param_1,param_2,*(undefined4 *)PTR_DAT_4a161630);
  }
  return uVar2;
}



// Address: 4a161634

undefined1 FUN_4a161634(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_4a161664;
  if (*PTR_DAT_4a161664 == '\0' && PTR_DAT_4a161664[2] == '\0') {
    iVar2 = host_s3eExtGetHash_thumb(DAT_4a16166c,PTR_DAT_4a161668,0x10);
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



// Address: 4a161670

void FUN_4a161670(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_4a057044();
  FUN_4a1652c8(param_1,param_2,*(undefined4 *)(iVar1 + 4));
  return;
}



// Address: 4a16168c

undefined1 FUN_4a16168c(void)

{
  FUN_4a032c5c();
  return *PTR_DAT_4a16169c;
}



// Address: 4a1616a0

void FUN_4a1616a0(void)

{
  int iVar1;
  
  iVar1 = FUN_4a057ac8();
  if (iVar1 != 0) {
    FUN_4a1652c4(*(undefined4 *)(PTR_DAT_4a1616b8 + 0x10));
  }
  return;
}



// Address: 4a1616bc

undefined4 FUN_4a1616bc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_4a057ac8();
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_4a1652c8(param_1,param_2,*(undefined4 *)(PTR_DAT_4a1616e0 + 0x2c));
  }
  return uVar2;
}



// Address: 4a1616e4

void FUN_4a1616e4(void)

{
  int iVar1;
  
  iVar1 = FUN_4a057ac8();
  if (iVar1 != 0) {
    FUN_4a1652c4(*(undefined4 *)(PTR_DAT_4a1616fc + 0x24));
  }
  return;
}



// Address: 4a161700

undefined4 FUN_4a161700(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_4a057ac8();
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_4a1652c6(param_1,*(undefined4 *)(PTR_DAT_4a161720 + 0x28));
  }
  return uVar2;
}



// Address: 4a161724

undefined4 FUN_4a161724(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_4a057ac8();
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_4a1652c6(param_1,*(undefined4 *)(PTR_DAT_4a161744 + 0x30));
  }
  return uVar2;
}



// Address: 4a161748

int * FUN_4a161748(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 1;
  do {
    iVar4 = param_1[1];
    if (1 < uVar5) {
      *(undefined4 *)(*param_1 + 0x14) = 0xe;
      *(uint *)(*param_1 + 0x18) = uVar5;
      (**(code **)*param_1)(param_1);
    }
    if (uVar5 == 1) {
      for (iVar2 = *(int *)(iVar4 + 0x44); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x2c)) {
        if (*(int *)(iVar2 + 0x28) != 0) {
          *(undefined4 *)(iVar2 + 0x28) = 0;
          (**(code **)(iVar2 + 0x38))(param_1,iVar2 + 0x30);
        }
      }
      *(undefined4 *)(iVar4 + 0x44) = 0;
      for (iVar2 = *(int *)(iVar4 + 0x48); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x2c)) {
        if (*(int *)(iVar2 + 0x28) != 0) {
          *(undefined4 *)(iVar2 + 0x28) = 0;
          (**(code **)(iVar2 + 0x38))(param_1,iVar2 + 0x30);
        }
      }
      *(undefined4 *)(iVar4 + 0x48) = 0;
    }
    iVar2 = iVar4 + uVar5 * 4;
    piVar1 = *(int **)(iVar2 + 0x3c);
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    while (piVar1 != (int *)0x0) {
      iVar3 = *piVar1;
      iVar6 = piVar1[1] + piVar1[2] + 0x10;
      FUN_4a15ab20(param_1,piVar1,iVar6);
      *(int *)(iVar4 + 0x4c) = *(int *)(iVar4 + 0x4c) - iVar6;
      piVar1 = (int *)iVar3;
    }
    piVar1 = *(int **)(iVar2 + 0x34);
    *(undefined4 *)(iVar2 + 0x34) = 0;
    while (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      iVar3 = piVar1[1] + piVar1[2] + 0x10;
      FUN_4a15ab28(param_1,piVar1,iVar3);
      *(int *)(iVar4 + 0x4c) = *(int *)(iVar4 + 0x4c) - iVar3;
      piVar1 = (int *)iVar2;
    }
    uVar5 = uVar5 - 1;
  } while (uVar5 < 0x80000000);
  FUN_4a15ab28(param_1,param_1[1],0x54);
  param_1[1] = 0;
  return param_1;
}



// Address: 4a1618c4

void FUN_4a1618c4(int param_1,int param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,
                 int param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0x1c4);
  if (*(int *)(param_1 + 0x138) <= *(int *)(iVar5 + 0x5c)) {
    iVar6 = *(int *)(param_1 + 0xd8);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x24)) {
      do {
        iVar1 = iVar5 + iVar3 * 4;
        (**(code **)(iVar1 + 0x34))
                  (param_1,iVar6,
                   *(int *)(param_2 + iVar3 * 4) + *(int *)(iVar1 + 100) * *param_3 * 4,iVar1 + 0xc,
                   param_4);
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 0x54;
      } while (iVar3 < *(int *)(param_1 + 0x24));
    }
    *(undefined4 *)(iVar5 + 0x5c) = 0;
  }
  uVar4 = *(int *)(param_1 + 0x138) - *(int *)(iVar5 + 0x5c);
  if (*(uint *)(iVar5 + 0x60) < uVar4) {
    uVar4 = *(uint *)(iVar5 + 0x60);
  }
  uVar2 = param_7 - *param_6;
  if (uVar2 < uVar4) {
    uVar4 = uVar2;
  }
  (**(code **)(*(int *)(param_1 + 0x1c8) + 4))
            (param_1,iVar5 + 0xc,*(int *)(iVar5 + 0x5c),param_5 + *param_6 * 4,uVar4);
  *param_6 = *param_6 + uVar4;
  *(uint *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) - uVar4;
  iVar3 = *(int *)(iVar5 + 0x5c) + uVar4;
  *(int *)(iVar5 + 0x5c) = iVar3;
  if (*(int *)(param_1 + 0x138) <= iVar3) {
    *param_3 = *param_3 + 1;
  }
  return;
}



// Address: 4a1619dc

undefined8 FUN_4a1619dc(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  
  iVar2 = FUN_4a001552(param_1,0x3d);
  puVar1 = PTR_PTR_4a161a74;
  uVar7 = 0xffffffff;
  if (iVar2 == 0) {
    piVar6 = *(int **)(PTR_PTR_4a161a74 + 4);
    do {
      if (*piVar6 == 0) {
LAB_4a161a3c:
        iVar2 = FUN_4a0013e0(param_1);
        iVar4 = FUN_4a0013e0(param_2);
        iVar2 = FUN_4a00d394(iVar2 + iVar4 + 2);
        FUN_4a000d18(iVar2,s__s__s_4a161a78,param_1,param_2);
        if ((*piVar6 != 0) && (*piVar6 != *(int *)puVar1)) {
          FUN_4a00d388();
        }
        *piVar6 = iVar2;
LAB_4a161a18:
        uVar7 = 0;
        goto LAB_4a161a1a;
      }
      uVar5 = FUN_4a0013e0(param_1);
      iVar2 = FUN_4a001314(param_1,*piVar6,uVar5);
      if (iVar2 == 0) {
        if (param_3 != 0) goto LAB_4a161a3c;
        goto LAB_4a161a18;
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != (int *)(*(int *)(puVar1 + 4) + 0x40));
    puVar3 = (undefined4 *)thunk_FUN_4a0007f8();
    uVar5 = 0xc;
  }
  else {
    puVar3 = (undefined4 *)thunk_FUN_4a0007f8();
    uVar5 = 0x16;
  }
  *puVar3 = uVar5;
LAB_4a161a1a:
  return CONCAT44(param_1,uVar7);
}



// Address: 4a161a80

undefined4 FUN_4a161a80(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 - 100U < 0xb) {
    puVar1 = (undefined4 *)(PTR_DAT_4a161ab8 + param_1 * 0x1c + -0xaf0);
    host_s3eSocketClose_thumb(*puVar1);
    uVar2 = 0;
    *puVar1 = 0;
  }
  else {
    puVar1 = (undefined4 *)thunk_FUN_4a0007f8();
    *puVar1 = 9;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// Address: 4a161abc

undefined4 FUN_4a161abc(int *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar5 = (undefined4 *)param_1[6];
  iVar2 = puVar5[1];
  pbVar3 = (byte *)*puVar5;
  if (iVar2 == 0) {
    iVar2 = (*(code *)puVar5[3])(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = puVar5[1];
    pbVar3 = (byte *)*puVar5;
  }
  iVar2 = iVar2 + -1;
  pbVar4 = pbVar3 + 1;
  bVar1 = *pbVar3;
  if (iVar2 == 0) {
    iVar2 = (*(code *)puVar5[3])(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = puVar5[1];
    pbVar4 = (byte *)*puVar5;
  }
  iVar6 = (uint)*pbVar4 + (uint)bVar1 * 0x100 + -2;
  *(undefined4 *)(*param_1 + 0x14) = 0x5b;
  *(int *)(*param_1 + 0x18) = param_1[0x68];
  *(int *)(*param_1 + 0x1c) = iVar6;
  (**(code **)(*param_1 + 4))(param_1,1);
  puVar5[1] = iVar2 + -1;
  *puVar5 = pbVar4 + 1;
  if (0 < iVar6) {
    (**(code **)(param_1[6] + 0x10))(param_1,iVar6);
  }
  return 1;
}



// Address: 4a161bb4

void FUN_4a161bb4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = param_1[0x52];
  if (iVar1 == 1) {
    iVar4 = param_1[0x53];
    param_1[0x57] = *(int *)(iVar4 + 0x1c);
    param_1[0x58] = *(int *)(iVar4 + 0x20);
    *(undefined4 *)(iVar4 + 0x34) = 1;
    *(undefined4 *)(iVar4 + 0x38) = 1;
    *(undefined4 *)(iVar4 + 0x3c) = 1;
    *(undefined4 *)(iVar4 + 0x40) = *(undefined4 *)(iVar4 + 0x24);
    *(undefined4 *)(iVar4 + 0x44) = 1;
    iVar3 = *(int *)(iVar4 + 0xc);
    FUN_4a0066d8(*(undefined4 *)(iVar4 + 0x20));
    iVar1 = extraout_r1;
    if (extraout_r1 == 0) {
      iVar1 = iVar3;
    }
    *(int *)(iVar4 + 0x48) = iVar1;
    param_1[0x59] = 1;
    param_1[0x5a] = 0;
  }
  else {
    if ((iVar1 < 1) || (4 < iVar1)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1a;
      *(int *)(*param_1 + 0x18) = param_1[0x52];
      *(undefined4 *)(*param_1 + 0x1c) = 4;
      (**(code **)*param_1)(param_1);
    }
    iVar1 = FUN_4a1585d4(param_1[7],param_1[0x4d] << 3);
    param_1[0x57] = iVar1;
    iVar1 = FUN_4a1585d4(param_1[8],param_1[0x4e] << 3);
    param_1[0x58] = iVar1;
    param_1[0x59] = 0;
    iVar1 = 0;
    if (0 < param_1[0x52]) {
      do {
        iVar4 = param_1[iVar1 + 0x53];
        iVar6 = *(int *)(iVar4 + 8);
        *(int *)(iVar4 + 0x34) = iVar6;
        iVar7 = *(int *)(iVar4 + 0xc);
        iVar8 = iVar6 * iVar7;
        *(int *)(iVar4 + 0x38) = iVar7;
        *(int *)(iVar4 + 0x3c) = iVar8;
        *(int *)(iVar4 + 0x40) = iVar6 * *(int *)(iVar4 + 0x24);
        FUN_4a0066d8(*(undefined4 *)(iVar4 + 0x1c),iVar6);
        iVar3 = extraout_r1_00;
        if (extraout_r1_00 == 0) {
          iVar3 = iVar6;
        }
        *(int *)(iVar4 + 0x44) = iVar3;
        FUN_4a0066d8(*(undefined4 *)(iVar4 + 0x20),iVar7);
        iVar3 = extraout_r1_01;
        if (extraout_r1_01 == 0) {
          iVar3 = iVar7;
        }
        *(int *)(iVar4 + 0x48) = iVar3;
        if (10 < param_1[0x59] + iVar8) {
          *(undefined4 *)(*param_1 + 0x14) = 0xd;
          (**(code **)*param_1)(param_1);
        }
        iVar3 = 1;
        if (1 < iVar8 + 1) {
          do {
            iVar3 = iVar3 + 1;
            param_1[param_1[0x59] + 0x5a] = iVar1;
            param_1[0x59] = param_1[0x59] + 1;
          } while (iVar3 < iVar8 + 1);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_1[0x52]);
    }
  }
  iVar1 = 0;
  if (0 < param_1[0x52]) {
    do {
      iVar3 = param_1[iVar1 + 0x53];
      if (*(int *)(iVar3 + 0x4c) == 0) {
        uVar5 = *(uint *)(iVar3 + 0x10);
        if ((3 < uVar5) || (param_1[uVar5 + 0x29] == 0)) {
          *(undefined4 *)(*param_1 + 0x14) = 0x34;
          *(uint *)(*param_1 + 0x18) = uVar5;
          (**(code **)*param_1)(param_1);
        }
        uVar2 = (**(code **)param_1[1])(param_1,1,0x84);
        FUN_4a001134(uVar2,param_1[uVar5 + 0x29],0x84);
        *(undefined4 *)(iVar3 + 0x4c) = uVar2;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[0x52]);
  }
  (**(code **)param_1[0x6f])(param_1);
  (**(code **)param_1[0x6b])(param_1);
  *(undefined4 *)param_1[0x6d] = *(undefined4 *)(param_1[0x6b] + 4);
  return;
}



// Address: 4a161eb0

void FUN_4a161eb0(int param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  ushort *puVar5;
  int *piVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint in_r12;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  
  iVar10 = *(int *)(param_1 + 0x1ac);
  if (*(int *)(iVar10 + 0x10) != 0) {
    puVar7 = PTR_FUN_4a162030;
    if (*(int *)(param_1 + 0x50) != 0) {
      bVar11 = *(int *)(param_1 + 0xdc) != 0;
      iVar3 = 0;
      if (bVar11) {
        iVar3 = *(int *)(param_1 + 0xa0);
      }
      bVar2 = false;
      if (bVar11 && iVar3 != 0) {
        if (*(int *)(iVar10 + 0x70) == 0) {
          uVar4 = (*(code *)**(undefined4 **)(param_1 + 4))
                            (param_1,1,*(int *)(param_1 + 0x24) * 0x18);
          *(undefined4 *)(iVar10 + 0x70) = uVar4;
        }
        iVar3 = *(int *)(iVar10 + 0x70);
        iVar9 = *(int *)(param_1 + 0xd8);
        iVar8 = 0;
        if (0 < *(int *)(param_1 + 0x24)) {
          do {
            puVar5 = *(ushort **)(iVar9 + 0x4c);
            bVar11 = puVar5 == (ushort *)0x0;
            if (!bVar11) {
              in_r12 = (uint)*puVar5;
            }
            bVar12 = in_r12 == 0;
            if (!bVar11 && !bVar12) {
              in_r12 = (uint)puVar5[1];
            }
            bVar13 = in_r12 == 0;
            if ((!bVar11 && !bVar12) && !bVar13) {
              in_r12 = (uint)puVar5[8];
            }
            puVar7 = PTR_FUN_4a162030;
            if (((bVar11 || bVar12) || bVar13) || in_r12 == 0) goto LAB_4a16201c;
            bVar11 = puVar5[0x10] == 0;
            uVar1 = 0;
            if (!bVar11) {
              uVar1 = puVar5[9];
            }
            if (!bVar11 && uVar1 != 0) {
              puVar5 = (ushort *)(uint)puVar5[2];
            }
            if (((bVar11 || uVar1 == 0) || puVar5 == (ushort *)0x0) ||
               (piVar6 = (int *)(*(int *)(param_1 + 0xa0) + iVar8 * 0x100), *piVar6 < 0))
            goto LAB_4a16201c;
            iVar8 = iVar8 + 1;
            *(int *)(iVar3 + 4) = piVar6[1];
            iVar9 = iVar9 + 0x54;
            if (piVar6[1] != 0) {
              bVar2 = true;
            }
            *(int *)(iVar3 + 8) = piVar6[2];
            if (piVar6[2] != 0) {
              bVar2 = true;
            }
            *(int *)(iVar3 + 0xc) = piVar6[3];
            if (piVar6[3] != 0) {
              bVar2 = true;
            }
            *(int *)(iVar3 + 0x10) = piVar6[4];
            in_r12 = piVar6[5];
            if (piVar6[4] != 0) {
              bVar2 = true;
            }
            *(uint *)(iVar3 + 0x14) = in_r12;
            iVar3 = iVar3 + 0x18;
            if (piVar6[5] != 0) {
              bVar2 = true;
            }
          } while (iVar8 < *(int *)(param_1 + 0x24));
        }
        puVar7 = PTR_FUN_4a162030;
        if (bVar2) {
          puVar7 = PTR_FUN_4a16202c;
        }
      }
    }
LAB_4a16201c:
    *(undefined **)(iVar10 + 0xc) = puVar7;
  }
  *(undefined4 *)(param_1 + 0x9c) = 0;
  return;
}



// Address: 4a162034

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a162034(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  ushort *puVar12;
  uint *puVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined *puVar16;
  ushort *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  bool bVar22;
  int iStack_64;
  undefined *local_4c;
  int local_48;
  int local_44;
  int iStack_40;
  int local_3c;
  
  iVar5 = param_1[0x70];
  local_3c = 0;
  local_48 = 0;
  local_4c = (undefined *)0x0;
  local_44 = param_1[0x36];
  if (0 < param_1[9]) {
    do {
      iVar6 = *(int *)(local_44 + 0x24);
      if (iVar6 == 1) {
        local_4c = PTR_LAB_4a16241c;
        local_48 = 0;
      }
      else if (iVar6 == 2) {
        local_4c = PTR_LAB_4a162420;
        local_48 = 0;
      }
      else if (iVar6 == 4) {
        local_4c = PTR_FUN_4a162424;
        local_48 = 0;
      }
      else if (iVar6 == 8) {
        iVar6 = param_1[0x12];
        if (iVar6 == 0) {
          local_4c = PTR_FUN_4a162428;
          local_48 = 0;
        }
        else if (iVar6 == 1) {
          local_4c = PTR_FUN_4a162414;
          local_48 = 1;
        }
        else if (iVar6 == 2) {
          local_4c = PTR_FUN_4a162418;
          local_48 = 2;
        }
        else {
          *(undefined4 *)(*param_1 + 0x14) = 0x30;
          (**(code **)*param_1)(param_1);
        }
      }
      else {
        *(undefined4 *)(*param_1 + 0x14) = 7;
        *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(local_44 + 0x24);
        (**(code **)*param_1)(param_1);
      }
      iVar7 = iVar5 + local_3c * 4;
      *(undefined **)(iVar7 + 4) = local_4c;
      bVar22 = *(int *)(local_44 + 0x30) != 0;
      iVar11 = 0;
      iVar6 = local_3c;
      if (bVar22) {
        iVar11 = *(int *)(iVar7 + 0x2c);
        iVar6 = local_48;
      }
      if ((bVar22 && iVar11 != iVar6) &&
         (puVar12 = *(ushort **)(local_44 + 0x4c), puVar12 != (ushort *)0x0)) {
        *(int *)(iVar7 + 0x2c) = local_48;
        if (local_48 == 0) {
          iVar6 = 0x20;
          puVar13 = (uint *)(*(int *)(local_44 + 0x50) + -4);
          uVar1 = *puVar12;
          puVar12 = puVar12 + -1;
          do {
            uVar2 = puVar12[2];
            iVar6 = iVar6 + -1;
            puVar13[1] = (uint)uVar1;
            uVar1 = puVar12[3];
            puVar13 = puVar13 + 2;
            *puVar13 = (uint)uVar2;
            puVar12 = puVar12 + 2;
          } while (iVar6 != 0);
        }
        else if (local_48 == 1) {
          iVar6 = 0x20;
          piVar15 = (int *)(*(int *)(local_44 + 0x50) + -4);
          sVar3 = *(short *)(PTR_DAT_4a16242c + 2);
          uVar1 = *puVar12;
          psVar8 = (short *)PTR_DAT_4a16242c;
          puVar12 = puVar12 + -1;
          do {
            sVar4 = psVar8[2];
            uVar2 = puVar12[2];
            piVar15[1] = (int)((uint)uVar1 * (int)sVar3 + 0x800) >> 0xc;
            sVar3 = psVar8[3];
            uVar1 = puVar12[3];
            iVar6 = iVar6 + -1;
            piVar15 = piVar15 + 2;
            *piVar15 = (int)((uint)uVar2 * (int)sVar4 + 0x800) >> 0xc;
            psVar8 = psVar8 + 2;
            puVar12 = puVar12 + 2;
          } while (iVar6 != 0);
        }
        else if (local_48 == 2) {
          iVar6 = *(int *)(local_44 + 0x50);
          iStack_40 = 0;
          iStack_64 = 0;
          do {
            puVar18 = (undefined4 *)(iVar6 + iStack_40 * 4 + -4);
            uVar20 = *(undefined4 *)PTR_DAT_4a162430;
            uVar21 = *(undefined4 *)(PTR_DAT_4a162430 + 4);
            uVar1 = puVar12[iStack_40];
            iVar11 = 4;
            puVar19 = (undefined4 *)(PTR_DAT_4a162430 + iStack_64 * 8);
            puVar16 = PTR_DAT_4a162430 + -8;
            puVar17 = puVar12 + iStack_40 + -1;
            do {
              uVar9 = *(undefined4 *)(puVar16 + 0x10);
              uVar14 = *(undefined4 *)(puVar16 + 0x14);
              uVar2 = puVar17[2];
              uVar20 = FUN_4a170798(uVar20,uVar21);
              uVar21 = FUN_4a170798(*puVar19,puVar19[1]);
              uVar10 = FUN_4a172098(uVar1);
              uVar21 = FUN_4a17211c(uVar10,uVar21);
              uVar20 = FUN_4a17211c(uVar21,uVar20);
              puVar18[1] = uVar20;
              uVar20 = *(undefined4 *)(puVar16 + 0x18);
              uVar21 = *(undefined4 *)(puVar16 + 0x1c);
              uVar1 = puVar17[3];
              uVar9 = FUN_4a170798(uVar9,uVar14);
              uVar10 = FUN_4a170798(*puVar19,puVar19[1]);
              uVar14 = FUN_4a172098(uVar2);
              uVar10 = FUN_4a17211c(uVar14,uVar10);
              uVar9 = FUN_4a17211c(uVar10,uVar9);
              iVar11 = iVar11 + -1;
              puVar18 = puVar18 + 2;
              *puVar18 = uVar9;
              puVar16 = puVar16 + 0x10;
              puVar17 = puVar17 + 2;
            } while (iVar11 != 0);
            iStack_40 = iStack_40 + 8;
            iStack_64 = iStack_64 + 1;
          } while (iStack_64 < 8);
        }
        else {
          *(undefined4 *)(*param_1 + 0x14) = 0x30;
          (**(code **)*param_1)(param_1);
        }
      }
      local_3c = local_3c + 1;
      local_44 = local_44 + 0x54;
    } while (local_3c < param_1[9]);
    return;
  }
  return;
}



// Address: 4a162434

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a162434(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar8 = param_1[0x73];
  param_1[0x22] = *(int *)(iVar8 + 0x10);
  param_1[0x21] = *(int *)(iVar8 + 0x14);
  iVar1 = param_1[0x16];
  if (iVar1 == 0) {
    puVar2 = PTR_FUN_4a162694;
    if (param_1[0x1e] == 3) {
      puVar2 = PTR_FUN_4a162698;
    }
    *(undefined **)(iVar8 + 4) = puVar2;
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x30;
                    /* WARNING: Could not recover jumptable at 0x4a16268c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1);
      return;
    }
    *(undefined **)(iVar8 + 4) = PTR_FUN_4a162690;
    *(undefined4 *)(iVar8 + 0x54) = 0;
    if (*(int *)(iVar8 + 0x44) == 0) {
      iVar1 = param_1[0x1c];
      iVar9 = param_1[0x73];
      iVar6 = 0;
      if (0 < param_1[0x1e]) {
        do {
          uVar5 = (**(code **)(param_1[1] + 4))(param_1,1,(iVar1 + 2) * 2);
          *(undefined4 *)(iVar9 + iVar6 * 4 + 0x44) = uVar5;
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_1[0x1e]);
      }
    }
    iVar1 = param_1[0x1c];
    iVar6 = 0;
    if (param_1[0x1e] < 1) {
      return;
    }
    do {
      thunk_FUN_4a001274(*(undefined4 *)(iVar8 + iVar6 * 4 + 0x44),(iVar1 + 2) * 2);
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_1[0x1e]);
    return;
  }
  puVar2 = PTR_FUN_4a16269c;
  if (param_1[0x1e] == 3) {
    puVar2 = PTR_FUN_4a1626a0;
  }
  *(undefined **)(iVar8 + 4) = puVar2;
  *(undefined4 *)(iVar8 + 0x30) = 0;
  if (*(int *)(iVar8 + 0x1c) == 0) {
    FUN_4a14bef8(param_1);
  }
  puVar2 = PTR_DAT_4a1626a4;
  if (*(int *)(iVar8 + 0x34) != 0) {
    return;
  }
  iVar8 = param_1[0x73];
  iVar1 = 0;
  if (param_1[0x1e] < 1) {
    return;
  }
  do {
    iVar10 = iVar8 + iVar1 * 4;
    iVar7 = *(int *)(iVar10 + 0x20);
    iVar6 = 0;
    iVar9 = 0;
    if (iVar1 < 1) {
LAB_4a162564:
      iVar6 = (**(code **)param_1[1])(param_1,1,0x400);
      iVar9 = (iVar7 + -1) * 0x200;
      iVar7 = 0;
      do {
        iVar3 = (uint)(byte)puVar2[iVar7] * -2 + 0xff;
        iVar4 = iVar3 * 0xff;
        if (iVar4 < 0) {
          iVar4 = FUN_4a0015f0(iVar3 * -0xff,iVar9);
          iVar4 = -iVar4;
        }
        else {
          iVar4 = FUN_4a0015f0(iVar4,iVar9);
        }
        *(int *)(iVar6 + iVar7 * 4) = iVar4;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x100);
    }
    else {
      do {
        if (*(int *)(iVar8 + iVar9 * 4 + 0x20) == iVar7) {
          iVar6 = *(int *)(iVar8 + iVar9 * 4 + 0x34);
          break;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar1);
      if (iVar6 == 0) goto LAB_4a162564;
    }
    *(int *)(iVar10 + 0x34) = iVar6;
    iVar1 = iVar1 + 1;
    if (param_1[0x1e] <= iVar1) {
      return;
    }
  } while( true );
}



// Address: 4a1626a8

void FUN_4a1626a8(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = param_1[0x73];
  iVar4 = *(int *)(iVar5 + 0x18);
  if (param_1[0x16] != 0) {
    param_1[0x16] = 2;
  }
  if (param_2 == 0) {
    puVar2 = PTR_FUN_4a16281c;
    if (param_1[0x16] == 2) {
      puVar2 = PTR_FUN_4a162820;
    }
    *(undefined **)(iVar5 + 4) = puVar2;
    *(undefined **)(iVar5 + 8) = PTR_DAT_4a162824;
    iVar3 = param_1[0x21];
    if (iVar3 < 1) {
      *(undefined4 *)(*param_1 + 0x14) = 0x38;
      *(undefined4 *)(*param_1 + 0x18) = 1;
      (**(code **)*param_1)(param_1);
    }
    if (0x100 < iVar3) {
      *(undefined4 *)(*param_1 + 0x14) = 0x39;
      *(undefined4 *)(*param_1 + 0x18) = 0x100;
      (**(code **)*param_1)(param_1);
    }
    if (param_1[0x16] == 2) {
      bVar6 = *(int *)(iVar5 + 0x20) != 0;
      uVar1 = 0;
      if (bVar6) {
        uVar1 = *(undefined4 *)(iVar5 + 0x20);
      }
      iVar3 = (param_1[0x1c] + 2) * 6;
      if (!bVar6) {
        uVar1 = (**(code **)(param_1[1] + 4))(param_1,1,iVar3);
        *(undefined4 *)(iVar5 + 0x20) = uVar1;
      }
      thunk_FUN_4a001274(uVar1,iVar3);
      if (*(int *)(iVar5 + 0x28) == 0) {
        FUN_4a1538d8(param_1);
      }
      *(undefined4 *)(iVar5 + 0x24) = 0;
    }
    if (*(int *)(iVar5 + 0x1c) == 0) {
      return;
    }
  }
  else {
    *(undefined **)(iVar5 + 4) = PTR_LAB_4a162814;
    puVar2 = PTR_FUN_4a162818;
    *(undefined4 *)(iVar5 + 0x1c) = 1;
    *(undefined **)(iVar5 + 8) = puVar2;
  }
  iVar3 = 0;
  do {
    thunk_FUN_4a001274(*(undefined4 *)(iVar4 + iVar3 * 4),0x1000);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  *(undefined4 *)(iVar5 + 0x1c) = 0;
  return;
}



// Address: 4a16282c

void FUN_4a16282c(int *param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1[0x6c];
  if (param_2 == 0) {
    if (param_1[0x15] != 0) {
      *(undefined **)(iVar3 + 4) = PTR_FUN_4a162934;
      if (*(int *)(iVar3 + 0xc) == 0) {
        uVar2 = (**(code **)(param_1[1] + 0x1c))
                          (param_1,*(undefined4 *)(iVar3 + 8),0,*(undefined4 *)(iVar3 + 0x10),1);
        *(undefined4 *)(iVar3 + 0xc) = uVar2;
      }
      goto LAB_4a16291c;
    }
    puVar1 = *(undefined **)(param_1[0x71] + 4);
  }
  else {
    if (param_2 == 2) {
      if (*(int *)(iVar3 + 8) == 0) {
        *(undefined4 *)(*param_1 + 0x14) = 4;
        (**(code **)*param_1)();
      }
      *(undefined **)(iVar3 + 4) = PTR_FUN_4a162938;
      goto LAB_4a16291c;
    }
    if (param_2 != 3) {
      *(undefined4 *)(*param_1 + 0x14) = 4;
      (**(code **)*param_1)();
      goto LAB_4a16291c;
    }
    puVar1 = PTR_FUN_4a162930;
    if (*(int *)(iVar3 + 8) == 0) {
      *(undefined4 *)(*param_1 + 0x14) = 4;
      (**(code **)*param_1)();
      puVar1 = PTR_FUN_4a162930;
    }
  }
  *(undefined **)(iVar3 + 4) = puVar1;
LAB_4a16291c:
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  return;
}



// Address: 4a16293c

void FUN_4a16293c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  iVar3 = param_1[0x6f];
  iVar1 = param_1[100];
  bVar5 = iVar1 == 0;
  if (bVar5) {
    iVar1 = param_1[0x65];
  }
  bVar6 = bVar5 && iVar1 == 0x3f;
  if (bVar5 && iVar1 == 0x3f) {
    bVar6 = param_1[0x66] == 0;
  }
  bVar5 = false;
  if (bVar6) {
    bVar5 = param_1[0x67] == 0;
  }
  if (!bVar5) {
    *(undefined4 *)(*param_1 + 0x14) = 0x7a;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
  }
  iVar1 = 0;
  if (0 < param_1[0x52]) {
    do {
      iVar2 = *(int *)(param_1[iVar1 + 0x53] + 0x14);
      iVar4 = *(int *)(param_1[iVar1 + 0x53] + 0x18);
      FUN_4a15c248(param_1,1,iVar2,iVar3 + iVar2 * 4 + 0x28);
      FUN_4a15c248(param_1,0,iVar4,iVar3 + iVar4 * 4 + 0x38);
      *(undefined4 *)(iVar3 + iVar1 * 4 + 0x14) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[0x52]);
  }
  iVar1 = 0;
  if (0 < param_1[0x59]) {
    do {
      iVar4 = param_1[param_1[iVar1 + 0x5a] + 0x53];
      iVar2 = iVar3 + iVar1 * 4;
      *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar3 + *(int *)(iVar4 + 0x14) * 4 + 0x28);
      *(undefined4 *)(iVar2 + 0x70) = *(undefined4 *)(iVar3 + *(int *)(iVar4 + 0x18) * 4 + 0x38);
      if (*(int *)(iVar4 + 0x30) == 0) {
        *(undefined4 *)(iVar2 + 0xc0) = 0;
        *(undefined4 *)(iVar2 + 0x98) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x98) = 1;
        *(uint *)(iVar2 + 0xc0) = (uint)(1 < *(int *)(iVar4 + 0x24));
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[0x59]);
  }
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 8) = 0;
  *(int *)(iVar3 + 0x24) = param_1[0x45];
  return;
}



// Address: 4a162a98

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a162a98(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  iVar1 = param_1[0x6a];
  if (param_2 == 0) {
    if (*(int *)(param_1[0x71] + 8) == 0) {
      *(undefined **)(iVar1 + 4) = PTR_FUN_4a162c98;
    }
    else {
      iVar9 = 0;
      *(undefined **)(iVar1 + 4) = PTR_FUN_4a162c9c;
      iVar8 = param_1[0x4f];
      iVar10 = param_1[0x36];
      iVar14 = param_1[0x6a];
      if (0 < param_1[9]) {
        do {
          uVar2 = FUN_4a0015f0(*(int *)(iVar10 + 0x24) * *(int *)(iVar10 + 0xc),param_1[0x4f]);
          iVar15 = *(int *)(*(int *)(iVar14 + 0x3c) + iVar9 * 4);
          iVar6 = *(int *)(iVar14 + iVar9 * 4 + 8);
          puVar3 = *(undefined4 **)(*(int *)(iVar14 + 0x38) + iVar9 * 4);
          iVar16 = uVar2 * (iVar8 + 2);
          if (0 < iVar16) {
            iVar4 = 0;
            do {
              uVar11 = *(undefined4 *)(iVar6 + iVar4 * 4);
              iVar16 = iVar16 + -1;
              *(undefined4 *)(iVar15 + iVar4 * 4) = uVar11;
              puVar3[iVar4] = uVar11;
              iVar4 = iVar4 + 1;
            } while (iVar16 != 0);
          }
          iVar16 = uVar2 * 2;
          if (0 < iVar16) {
            iVar4 = 0;
            do {
              iVar13 = uVar2 * iVar8 + iVar4;
              iVar12 = uVar2 * (iVar8 + -2) + iVar4;
              iVar16 = iVar16 + -1;
              *(undefined4 *)(iVar15 + iVar12 * 4) = *(undefined4 *)(iVar6 + iVar13 * 4);
              iVar4 = iVar4 + 1;
              *(undefined4 *)(iVar15 + iVar13 * 4) = *(undefined4 *)(iVar6 + iVar12 * 4);
            } while (iVar16 != 0);
          }
          if (0 < (int)uVar2) {
            uVar5 = uVar2 & 1;
            if (uVar5 == 1) {
              puVar3[-uVar2] = *puVar3;
            }
            uVar7 = (uint)(uVar5 == 1);
            for (; (int)uVar5 < (int)uVar2; uVar5 = uVar5 + 2) {
              puVar3[uVar7 - uVar2] = *puVar3;
              iVar6 = uVar7 + 1;
              uVar7 = uVar7 + 2;
              puVar3[iVar6 - uVar2] = *puVar3;
            }
          }
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + 0x54;
        } while (iVar9 < param_1[9]);
      }
      *(undefined4 *)(iVar1 + 0x40) = 0;
      *(undefined4 *)(iVar1 + 0x44) = 0;
      *(undefined4 *)(iVar1 + 0x4c) = 0;
    }
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    return;
  }
  if (param_2 == 2) {
    *(undefined **)(iVar1 + 4) = PTR_FUN_4a162c94;
    return;
  }
  *(undefined4 *)(*param_1 + 0x14) = 4;
                    /* WARNING: Could not recover jumptable at 0x4a162af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1);
  return;
}



// Address: 4a162cb8

void FUN_4a162cb8(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  
  uVar5 = param_1[100];
  iVar8 = param_1[0x6f];
  iVar9 = 1 - uVar5;
  iVar3 = param_1[0x65];
  if (1 < uVar5) {
    iVar9 = 0;
  }
  bVar11 = false;
  if (iVar9 == 0) {
    bVar11 = SBORROW4(uVar5,iVar3);
    iVar4 = uVar5 - iVar3;
    if ((int)uVar5 <= iVar3) {
      bVar11 = SBORROW4(iVar3,0x40);
      iVar4 = iVar3 + -0x40;
    }
    bVar11 = iVar4 < 0 == bVar11;
    if (param_1[0x52] == 1) goto LAB_4a162d08;
  }
  else if (iVar3 == 0) goto LAB_4a162d08;
  bVar11 = true;
LAB_4a162d08:
  iVar3 = param_1[0x66];
  iVar4 = param_1[0x67];
  bVar10 = iVar3 != 0;
  if (bVar10) {
    iVar3 = iVar3 + -1;
  }
  if (bVar10 && iVar4 != iVar3) {
    bVar11 = true;
  }
  bVar10 = iVar4 == 0xd;
  if (iVar4 < 0xe) {
    bVar10 = !bVar11;
  }
  if (!bVar10) {
    *(undefined4 *)(*param_1 + 0x14) = 0x10;
    *(int *)(*param_1 + 0x18) = param_1[100];
    *(int *)(*param_1 + 0x1c) = param_1[0x65];
    *(int *)(*param_1 + 0x20) = param_1[0x66];
    *(int *)(*param_1 + 0x24) = param_1[0x67];
    (**(code **)*param_1)(param_1);
  }
  iVar3 = 0;
  if (0 < param_1[0x52]) {
    do {
      iVar4 = *(int *)(param_1[iVar3 + 0x53] + 4);
      piVar7 = (int *)(param_1[0x28] + iVar4 * 0x100);
      if ((iVar9 == 0) && (*piVar7 < 0)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x73;
        *(int *)(*param_1 + 0x18) = iVar4;
        *(undefined4 *)(*param_1 + 0x1c) = 0;
        (**(code **)(*param_1 + 4))(param_1,0xffffffff);
      }
      iVar6 = param_1[100];
      if (iVar6 < param_1[0x65] + 1) {
        do {
          iVar1 = piVar7[iVar6];
          if (iVar1 < 1) {
            iVar1 = 0;
          }
          if (param_1[0x66] != iVar1) {
            *(undefined4 *)(*param_1 + 0x14) = 0x73;
            *(int *)(*param_1 + 0x18) = iVar4;
            *(int *)(*param_1 + 0x1c) = iVar6;
            (**(code **)(*param_1 + 4))(param_1,0xffffffff);
          }
          piVar7[iVar6] = param_1[0x67];
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_1[0x65] + 1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[0x52]);
  }
  if (param_1[0x66] == 0) {
    puVar2 = PTR_FUN_4a162f50;
    if (iVar9 != 0) {
      puVar2 = PTR_FUN_4a162f54;
    }
  }
  else {
    puVar2 = PTR_FUN_4a162f58;
    if (iVar9 != 0) {
      puVar2 = PTR_FUN_4a162f5c;
    }
  }
  iVar3 = 0;
  *(undefined **)(iVar8 + 4) = puVar2;
  if (0 < param_1[0x52]) {
    do {
      if (iVar9 == 0) {
        iVar4 = *(int *)(param_1[iVar3 + 0x53] + 0x18);
        iVar6 = iVar8 + iVar4 * 4;
        FUN_4a15c248(param_1,0,iVar4,iVar6 + 0x2c);
        *(undefined4 *)(iVar8 + 0x3c) = *(undefined4 *)(iVar6 + 0x2c);
      }
      else if (param_1[0x66] == 0) {
        iVar4 = *(int *)(param_1[iVar3 + 0x53] + 0x14);
        FUN_4a15c248(param_1,1,iVar4,iVar8 + iVar4 * 4 + 0x2c);
      }
      *(undefined4 *)(iVar8 + iVar3 * 4 + 0x18) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[0x52]);
  }
  *(undefined4 *)(iVar8 + 0x10) = 0;
  *(undefined4 *)(iVar8 + 0xc) = 0;
  *(undefined4 *)(iVar8 + 8) = 0;
  *(undefined4 *)(iVar8 + 0x14) = 0;
  *(int *)(iVar8 + 0x28) = param_1[0x45];
  return;
}



// Address: 4a162f7c

int FUN_4a162f7c(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (*param_1 == '\0') {
    if (*param_2 == '\0') {
      return 0;
    }
  }
  else {
    do {
      pcVar6 = param_2;
      pcVar5 = param_1;
      param_1 = pcVar5 + 1;
      iVar1 = FUN_4a000ca8(*pcVar5);
      param_2 = pcVar6 + 1;
      iVar2 = FUN_4a000ca8(*pcVar6);
      if (iVar1 != iVar2) {
        if (*param_1 != '\0') goto LAB_4a162fe4;
        break;
      }
    } while (*param_1 != '\0');
    if (*param_2 == '\0') {
LAB_4a162fe4:
      param_1 = pcVar5;
      param_2 = pcVar6;
    }
  }
  uVar3 = FUN_4a000ca8(*param_1);
  uVar4 = FUN_4a000ca8(*param_2);
  return (uVar3 & 0xff) - (uVar4 & 0xff);
}



// Address: 4a163010

int FUN_4a163010(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_4a0013e0();
  if (uVar1 < param_3 - 1U) {
    iVar2 = FUN_4a16303e(param_1 + uVar1,param_2,param_3 - uVar1);
  }
  else {
    iVar2 = FUN_4a0013e0(param_2);
  }
  return iVar2 + uVar1;
}



// Address: 4a16303e

uint FUN_4a16303e(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_4a0013e0(param_2);
  if (param_3 != 0) {
    uVar2 = uVar1;
    if (param_3 - 1U <= uVar1) {
      uVar2 = param_3 - 1;
    }
    if (uVar2 != 0) {
      thunk_FUN_4a000f84(param_1,param_2,uVar2);
    }
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return uVar1;
}



// Address: 4a163078

void FUN_4a163078(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  uVar6 = host_s3eTimerGetLocaltimeOffset_thumb(0);
  iVar3 = thunk_FUN_4a00080c((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
  *(int *)(PTR_DAT_4a1630cc + 8) = -iVar3;
  uVar4 = host_s3eDeviceGetString_thumb(0x1f);
  FUN_4a16303e(PTR_DAT_4a1630d0,uVar4,0x20);
  pcVar5 = PTR_DAT_4a1630d0;
  do {
    if (*pcVar5 == '\0') {
LAB_4a1630ba:
      puVar2 = PTR_DAT_4a1630d0;
      puVar1 = PTR_DAT_4a1630cc;
      *(undefined **)(PTR_DAT_4a1630cc + 0x10) = PTR_DAT_4a1630d0;
      *(undefined **)(puVar1 + 0x14) = puVar2;
      return;
    }
    iVar3 = FUN_4a000c5c();
    if (iVar3 == 0) {
      *pcVar5 = '\0';
      goto LAB_4a1630ba;
    }
    pcVar5 = pcVar5 + 1;
  } while( true );
}



// Address: 4a1630d4

undefined4 FUN_4a1630d4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char in_CY;
  char cVar2;
  undefined8 uVar3;
  
  thunk_FUN_4a17121c(param_1,param_2,DAT_4a16313c,DAT_4a163140);
  if (in_CY == '\0') {
    uVar1 = 0;
  }
  else {
    uVar3 = thunk_FUN_4a1712a8(param_1,param_2,DAT_4a163144,DAT_4a163148);
    cVar2 = (undefined *)0xffffffe7 < PTR_DAT_4a16314c;
    uVar3 = thunk_FUN_4a001cc0((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),
                               *(undefined4 *)(PTR_DAT_4a16314c + 0x18),
                               *(undefined4 *)(PTR_DAT_4a16314c + 0x1c));
    uVar3 = thunk_FUN_4a1712a8((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_4a163150,DAT_4a163154)
    ;
    uVar3 = thunk_FUN_4a1712a8((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_4a163144,DAT_4a163148)
    ;
    thunk_FUN_4a1728ec((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),8);
    uVar3 = thunk_FUN_4a001ad8();
    uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
    thunk_FUN_4a171488((int)uVar3,uVar1,DAT_4a163150,DAT_4a163154);
    if (cVar2 == '\0') {
      uVar1 = 0xff;
    }
    else {
      uVar1 = thunk_FUN_4a171124((int)uVar3,uVar1);
    }
  }
  return uVar1;
}



// Address: 4a163158

undefined4 FUN_4a163158(int param_1,int param_2)

{
  int iVar1;
  int extraout_r1;
  int extraout_r1_00;
  int *piVar2;
  bool bVar3;
  
  if (param_1 != 0) {
    piVar2 = *(int **)(param_1 + 0x9c);
    if (piVar2 != (int *)0x0) {
      iVar1 = piVar2[0x17];
      bVar3 = iVar1 == 0;
      if (bVar3) {
        iVar1 = piVar2[0x23];
      }
      if (bVar3 && iVar1 == 0) {
        param_2 = piVar2[0x15];
      }
      if (*piVar2 != 0) {
        FUN_4a14f21c(*piVar2,param_2);
        param_2 = extraout_r1;
      }
      *piVar2 = 0;
      if (piVar2[0x10] != 0) {
        FUN_4a152c7c(piVar2 + 1);
        param_2 = extraout_r1_00;
      }
      piVar2[0x10] = 0;
      FUN_4a14f21c(piVar2,param_2);
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
    (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
    FUN_4a14f21c(param_1);
    return 0;
  }
  return 0xffffff9a;
}



// Address: 4a1631f4

undefined4 FUN_4a1631f4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if ((param_1 != 0) && (piVar2 = *(int **)(param_1 + 0x9c), piVar2 != (int *)0x0)) {
    iVar1 = piVar2[0x17];
    bVar4 = iVar1 == 0;
    if (bVar4) {
      iVar1 = piVar2[0x23];
    }
    if ((bVar4 && iVar1 == 0) && (piVar2[0x14] != piVar2[0x15])) {
      uVar3 = 0xffffff97;
    }
    if (*piVar2 != 0) {
      FUN_4a14f21c();
    }
    *piVar2 = 0;
    if (piVar2[0x10] != 0) {
      FUN_4a152c7c(piVar2 + 1);
    }
    piVar2[0x10] = 0;
    FUN_4a14f21c(piVar2);
    *(undefined4 *)(param_1 + 0x9c) = 0;
    return uVar3;
  }
  return 0xffffff9a;
}



// Address: 4a163284

void FUN_4a163284(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_4a164398(param_1,param_2,0,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



// Address: 4a1632cc

undefined4 FUN_4a1632cc(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    *param_2 = *(undefined4 *)(param_1 + 0x24);
    param_2[1] = uVar1;
    return 0;
  }
  return 0xffffff9a;
}



// Address: 4a1632ec

void FUN_4a1632ec(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x30) = 0;
    uVar1 = FUN_4a164398(param_1,param_1 + 0x48,param_1 + 0x98,0,0,0,0,0,0);
    iVar2 = 1 - uVar1;
    if (1 < uVar1) {
      iVar2 = 0;
    }
    *(int *)(param_1 + 0x38) = iVar2;
    return;
  }
  return;
}



// Address: 4a163354

uint FUN_4a163354(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0xffffff9a;
  }
  if ((*(int *)(param_1 + 0x38) != 0) &&
     ((*(int *)(param_1 + 0x24) == 0xffff ||
      (*(int *)(param_1 + 0x30) + 1 != *(int *)(param_1 + 0x24))))) {
    *(int *)(param_1 + 0x34) =
         *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x6c) +
         *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x68) + 0x2e;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    uVar1 = FUN_4a164398(param_1,param_1 + 0x48,param_1 + 0x98,0,0,0,0,0,0);
    iVar2 = 1 - uVar1;
    if (1 < uVar1) {
      iVar2 = 0;
    }
    *(int *)(param_1 + 0x38) = iVar2;
    return uVar1;
  }
  return 0xffffff9c;
}



// Address: 4a163418

uint FUN_4a163418(int param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte abStack_184 [260];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [80];
  undefined4 uStack_28;
  
  if ((param_1 == 0) || (uVar1 = thunk_FUN_4a0013e0(param_2), 0xff < uVar1)) {
    return 0xffffff9a;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    return 0xffffff9c;
  }
  uStack_7c = *(undefined4 *)(param_1 + 0x30);
  uStack_80 = *(undefined4 *)(param_1 + 0x34);
  FUN_4a001134(auStack_78,param_1 + 0x48,0x50);
  uStack_28 = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x30) = 0;
  uVar1 = FUN_4a164398(param_1,param_1 + 0x48,param_1 + 0x98,0);
  *(uint *)(param_1 + 0x38) = (uint)(uVar1 == 0);
  if (uVar1 == 0) {
    do {
      uVar1 = FUN_4a164398(param_1,0);
      if (uVar1 != 0) break;
      if (param_3 < 2) {
        iVar2 = FUN_4a00142c(abStack_184,param_2);
      }
      else {
        pbVar4 = param_2;
        pbVar5 = abStack_184;
        while( true ) {
          uVar3 = (uint)*pbVar5;
          uVar1 = (uint)*pbVar4;
          if (uVar3 - 0x61 < 0x1a) {
            uVar3 = uVar3 - 0x20 & 0xff;
          }
          if (uVar1 - 0x61 < 0x1a) {
            uVar1 = uVar1 - 0x20 & 0xff;
          }
          if (uVar3 == 0) break;
          iVar2 = 1;
          if (((uVar1 == 0) || (iVar2 = -1, uVar3 < uVar1)) ||
             (iVar2 = 1, pbVar4 = pbVar4 + 1, pbVar5 = pbVar5 + 1, uVar1 < uVar3))
          goto LAB_4a1635a8;
        }
        iVar2 = 0;
        if (uVar1 != 0) {
          iVar2 = -1;
        }
      }
LAB_4a1635a8:
      if (iVar2 == 0) {
        return 0;
      }
      if (param_1 == 0) {
        uVar1 = 0xffffff9a;
      }
      else {
        uVar1 = 0xffffff9c;
        if ((*(int *)(param_1 + 0x38) != 0) &&
           ((*(int *)(param_1 + 0x24) == 0xffff ||
            (*(int *)(param_1 + 0x30) + 1 != *(int *)(param_1 + 0x24))))) {
          *(int *)(param_1 + 0x34) =
               *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x68) +
               *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x70) + 0x2e;
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
          uVar1 = FUN_4a164398(param_1,param_1 + 0x48,param_1 + 0x98);
          iVar2 = 1 - uVar1;
          if (1 < uVar1) {
            iVar2 = 0;
          }
          *(int *)(param_1 + 0x38) = iVar2;
        }
      }
    } while (uVar1 == 0);
  }
  *(undefined4 *)(param_1 + 0x30) = uStack_7c;
  *(undefined4 *)(param_1 + 0x34) = uStack_80;
  FUN_4a001134(param_1 + 0x48,auStack_78,0x50);
  *(undefined4 *)(param_1 + 0x98) = uStack_28;
  return uVar1;
}



// Address: 4a1636a4

/* WARNING: Removing unreachable block (ram,0x4a1636d0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a1636a4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  code *pcVar13;
  bool bVar14;
  bool bVar15;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  undefined1 auStack_dc [4];
  code *local_d8;
  code *pcStack_d4;
  code *pcStack_cc;
  code *pcStack_c8;
  code *pcStack_c4;
  undefined4 local_bc;
  int local_b8;
  int iStack_b4;
  undefined1 auStack_b0 [4];
  int iStack_ac;
  uint uStack_9c;
  int iStack_98;
  int aiStack_94 [22];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  iVar12 = 0;
  FUN_4a14e578(&local_d8);
  iVar1 = (*local_d8)(local_bc,param_1,5);
  if (iVar1 == 0) {
    return 0;
  }
  uVar11 = 0;
  local_b8 = iVar1;
  iVar2 = (*pcStack_c8)(local_bc,iVar1,0,2);
  if (iVar2 == 0) {
    uVar3 = (*pcStack_cc)(local_bc,iVar1);
    uVar6 = 0xffff;
    if (uVar3 < 0xffff) {
      uVar6 = uVar3;
    }
    iVar2 = FUN_4a15e080(0x404);
    if (iVar2 != 0) {
      uVar8 = 4;
      if (4 < uVar6) {
        while( true ) {
          uVar9 = uVar6;
          if (uVar8 + 0x400 <= uVar6) {
            uVar9 = uVar8 + 0x400;
          }
          iVar10 = uVar3 - uVar9;
          uVar8 = uVar3 - iVar10;
          if (0x404 < uVar3 - iVar10) {
            uVar8 = 0x404;
          }
          iVar4 = (*pcStack_c8)(local_bc,iVar1,iVar10,0);
          if ((iVar4 != 0) ||
             (pcVar13 = pcStack_d4, uVar5 = (*pcStack_d4)(local_bc,iVar1,iVar2,uVar8),
             uVar5 != uVar8)) break;
          iVar7 = uVar8 - 3;
          iVar4 = 1;
          if (1 < (int)(uVar8 - 2)) {
            do {
              iVar7 = iVar7 + -1;
              uVar5 = (uint)*(byte *)(iVar2 + iVar7);
              bVar14 = uVar5 == 0x50;
              if (bVar14) {
                uVar5 = iVar2 + iVar7;
                pcVar13 = (code *)(uint)*(byte *)(uVar5 + 1);
              }
              bVar15 = bVar14 && pcVar13 == (code *)0x4b;
              if (bVar14 && pcVar13 == (code *)0x4b) {
                pcVar13 = (code *)(uint)*(byte *)(uVar5 + 2);
                bVar15 = pcVar13 == (code *)0x5;
              }
              if ((bVar15) && (*(char *)(uVar5 + 3) == '\x06')) {
                uVar11 = iVar10 + iVar7;
                break;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)(uVar8 - 2));
          }
          if ((uVar11 != 0) || (uVar8 = uVar9, uVar6 <= uVar9)) break;
        }
        if (iVar2 == 0) goto LAB_4a163870;
      }
      FUN_4a14f21c(iVar2);
      goto LAB_4a163870;
    }
  }
  uVar11 = 0;
LAB_4a163870:
  if (uVar11 == 0) {
    iVar12 = -1;
  }
  iVar1 = (*pcStack_c8)(local_bc,local_b8,uVar11,0);
  if (iVar1 != 0) {
    iVar12 = -1;
  }
  iVar1 = FUN_4a1647d4(&local_d8,local_b8,auStack_dc);
  if (iVar1 != 0) {
    iVar12 = -1;
  }
  iVar1 = FUN_4a164954(&local_d8,local_b8,&iStack_e0);
  if (iVar1 != 0) {
    iVar12 = -1;
  }
  iVar1 = FUN_4a164954(&local_d8,local_b8,&iStack_e4);
  if (iVar1 != 0) {
    iVar12 = -1;
  }
  iVar1 = FUN_4a164954(&local_d8,local_b8,&iStack_b4);
  if (iVar1 != 0) {
    iVar12 = -1;
  }
  iVar1 = FUN_4a164954(&local_d8,local_b8,&iStack_e8);
  if (iVar1 != 0) {
    iVar12 = -1;
  }
  bVar14 = iStack_b4 == iStack_e8;
  if (bVar14) {
    iStack_b4 = iStack_e4;
  }
  bVar15 = bVar14 && iStack_b4 == 0;
  if (bVar14 && iStack_b4 == 0) {
    bVar15 = iStack_e0 == 0;
  }
  if (!bVar15) {
    iVar12 = -0x67;
  }
  iVar1 = FUN_4a1647d4(&local_d8,local_b8,&iStack_98);
  if (iVar1 != 0) {
    iVar12 = -1;
  }
  iVar1 = FUN_4a1647d4(&local_d8,local_b8,aiStack_94);
  if (iVar1 != 0) {
    iVar12 = -1;
  }
  iVar1 = FUN_4a164954(&local_d8,local_b8,auStack_b0);
  if (iVar1 != 0) {
    iVar12 = -1;
  }
  uVar6 = aiStack_94[0] + iStack_98;
  bVar14 = uVar6 == uVar11;
  if (uVar6 <= uVar11) {
    bVar14 = iVar12 == 0;
  }
  if (bVar14) {
    iStack_ac = uVar11 - uVar6;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_9c = uVar11;
    iVar1 = FUN_4a15e080(0xb4);
    FUN_4a001134(iVar1,&local_d8,0xb4);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x44);
      *(undefined4 *)(iVar1 + 0x30) = 0;
      uVar11 = FUN_4a164398(iVar1,iVar1 + 0x48,iVar1 + 0x98);
      iVar12 = 1 - uVar11;
      if (1 < uVar11) {
        iVar12 = 0;
      }
      *(int *)(iVar1 + 0x38) = iVar12;
    }
    return iVar1;
  }
  (*pcStack_c4)(local_bc,local_b8);
  return 0;
}



// Address: 4a163a44

void FUN_4a163a44(undefined4 param_1)

{
  FUN_4a163a64(param_1,0,0,0,0);
  return;
}



// Address: 4a163a64

int FUN_4a163a64(int *param_1,int *param_2,undefined4 *param_3,int param_4,byte *param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int extraout_r1;
  int extraout_r1_00;
  int *piVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  byte local_34 [12];
  int local_28;
  
  if ((param_1 == (int *)0x0) || (iVar7 = param_1[0xe], iVar7 == 0)) {
    return -0x66;
  }
  piVar8 = (int *)param_1[0x27];
  if (piVar8 != (int *)0x0) {
    iVar2 = piVar8[0x17];
    bVar11 = iVar2 == 0;
    if (bVar11) {
      iVar2 = piVar8[0x23];
    }
    if (bVar11 && iVar2 == 0) {
      iVar7 = piVar8[0x15];
    }
    if (*piVar8 != 0) {
      FUN_4a14f21c(*piVar8,iVar7);
      iVar7 = extraout_r1;
    }
    *piVar8 = 0;
    if (piVar8[0x10] != 0) {
      FUN_4a152c7c(piVar8 + 1);
      iVar7 = extraout_r1_00;
    }
    piVar8[0x10] = 0;
    FUN_4a14f21c(piVar8,iVar7);
    param_1[0x27] = 0;
  }
  iVar2 = 0;
  iVar7 = (*(code *)param_1[4])(param_1[7],param_1[8],param_1[0x26] + param_1[0xb],0);
  if (iVar7 != 0) {
    return -0x67;
  }
  iVar7 = FUN_4a1647d4(param_1,param_1[8],&local_38);
  if (iVar7 == 0) {
    if (local_38 != 0x4034b50) {
      iVar2 = -0x67;
    }
  }
  else {
    iVar2 = -1;
  }
  iVar7 = FUN_4a164954(param_1,param_1[8],&local_3c);
  if (iVar7 != 0) {
    iVar2 = -1;
  }
  iVar7 = FUN_4a164954(param_1,param_1[8],&local_40);
  if (iVar7 != 0) {
    iVar2 = -1;
  }
  iVar7 = FUN_4a164954(param_1,param_1[8],&local_3c);
  if (iVar7 == 0) {
    if ((iVar2 == 0) && ((iVar7 = param_1[0x15], iVar7 != local_3c || (iVar7 != 0 && iVar7 != 8))))
    {
      iVar2 = -0x67;
    }
  }
  else {
    iVar2 = -1;
  }
  iVar7 = FUN_4a1647d4(param_1,param_1[8],&local_3c);
  if (iVar7 != 0) {
    iVar2 = -1;
  }
  iVar7 = FUN_4a1647d4(param_1,param_1[8],&local_3c);
  if (iVar7 == 0) {
    if (((iVar2 == 0) && (param_1[0x17] != local_3c)) && ((local_40 & 8) == 0)) {
      iVar2 = -0x67;
    }
  }
  else {
    iVar2 = -1;
  }
  iVar7 = FUN_4a1647d4(param_1,param_1[8],&local_3c);
  if (iVar7 == 0) {
    if (((iVar2 == 0) && (param_1[0x18] != local_3c)) && ((local_40 & 8) == 0)) {
      iVar2 = -0x67;
    }
  }
  else {
    iVar2 = -1;
  }
  iVar7 = FUN_4a1647d4(param_1,param_1[8],&local_3c);
  if (iVar7 == 0) {
    if (((iVar2 == 0) && (param_1[0x19] != local_3c)) && ((local_40 & 8) == 0)) {
      iVar2 = -0x67;
    }
  }
  else {
    iVar2 = -1;
  }
  iVar3 = FUN_4a164954(param_1,param_1[8],&local_44);
  iVar7 = local_44;
  if (iVar3 == 0) {
    if ((iVar2 == 0) && (param_1[0x1a] != local_44)) {
      iVar2 = -0x67;
    }
  }
  else {
    iVar2 = -1;
  }
  iVar3 = FUN_4a164954(param_1,param_1[8],&local_48);
  iVar4 = param_1[0x26];
  if (iVar3 != 0) {
    iVar2 = -1;
  }
  local_28 = local_48;
  if (iVar2 != 0) {
    return -0x67;
  }
  piVar8 = (int *)FUN_4a15e080(0x90);
  if (piVar8 == (int *)0x0) {
    return -0x68;
  }
  iVar2 = FUN_4a15e080(0x4000);
  *piVar8 = iVar2;
  piVar8[0x11] = iVar4 + local_44 + 0x1e;
  piVar8[0x12] = local_28;
  piVar8[0x13] = 0;
  piVar8[0x23] = param_4;
  if (iVar2 == 0) {
    FUN_4a14f21c(piVar8);
    return -0x68;
  }
  piVar8[0x10] = 0;
  if (param_2 != (int *)0x0) {
    *param_2 = param_1[0x15];
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 6;
    uVar5 = param_1[0x14] & 6;
    if (uVar5 == 2) {
      uVar6 = 9;
    }
    else {
      if (uVar5 != 4) {
        if (uVar5 == 6) {
          *param_3 = 1;
        }
        goto LAB_4a163dd4;
      }
      uVar6 = 2;
    }
    *param_3 = uVar6;
  }
LAB_4a163dd4:
  piVar8[0x15] = param_1[0x17];
  piVar8[0x14] = 0;
  piVar8[0x21] = param_1[0x15];
  piVar8[0x20] = param_1[8];
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  iVar4 = param_1[3];
  iVar9 = param_1[4];
  iVar10 = param_1[5];
  piVar8[0x18] = *param_1;
  piVar8[0x19] = iVar2;
  piVar8[0x1a] = iVar3;
  piVar8[0x1b] = iVar4;
  piVar8[0x1c] = iVar9;
  piVar8[0x1d] = iVar10;
  iVar2 = param_1[7];
  piVar8[0x1e] = param_1[6];
  piVar8[0x1f] = iVar2;
  piVar8[0x22] = param_1[0xb];
  piVar8[6] = 0;
  if (param_1[0x15] == 8 && param_4 == 0) {
    piVar8[9] = 0;
    piVar8[10] = 0;
    piVar8[0xb] = 0;
    piVar8[1] = 0;
    piVar8[2] = 0;
    iVar2 = FUN_4a152cd8(piVar8 + 1,0xfffffff1,s_1_2_3_4a16403c,0x38);
    if (iVar2 != 0) {
      FUN_4a14f21c(piVar8);
      return iVar2;
    }
    piVar8[0x10] = 1;
  }
  piVar8[0x16] = param_1[0x18];
  piVar8[0x17] = param_1[0x19];
  piVar8[0xf] = param_1[0x26] + iVar7 + local_48 + 0x1e;
  piVar8[2] = 0;
  param_1[0x27] = (int)piVar8;
  if (param_5 != (byte *)0x0) {
    iVar3 = FUN_4a14f538();
    param_1[0x2c] = iVar3;
    iVar2 = DAT_4a16404c;
    param_1[0x29] = DAT_4a164044;
    iVar7 = DAT_4a164048;
    param_1[0x2a] = DAT_4a164048;
    param_1[0x2b] = iVar7 << 4;
    bVar1 = *param_5;
    while (bVar1 != 0) {
      uVar5 = *(uint *)(iVar3 + (((uint)*param_5 ^ param_1[0x29]) & 0xff) * 4) ^
              (uint)param_1[0x29] >> 8;
      param_1[0x29] = uVar5;
      uVar5 = iVar2 * ((uVar5 & 0xff) + param_1[0x2a]) + 1;
      param_1[0x2a] = uVar5;
      param_1[0x2b] =
           *(uint *)(iVar3 + ((uVar5 >> 0x18 ^ param_1[0x2b]) & 0xff) * 4) ^
           (uint)param_1[0x2b] >> 8;
      param_5 = param_5 + 1;
      bVar1 = *param_5;
    }
    iVar7 = (*(code *)param_1[4])
                      (param_1[7],param_1[8],
                       *(int *)(param_1[0x27] + 0x3c) + *(int *)(param_1[0x27] + 0x88),0);
    if ((iVar7 != 0) ||
       (uVar5 = (*(code *)param_1[1])(param_1[7],param_1[8],local_34,0xc), uVar5 < 0xc)) {
      return -0x68;
    }
    iVar7 = 0;
    do {
      uVar5 = (uint)local_34[iVar7] ^ ((param_1[0x2b] | 2U) ^ 1) * (param_1[0x2b] | 2U) >> 8;
      local_34[iVar7] = (byte)uVar5;
      iVar7 = iVar7 + 1;
      uVar5 = *(uint *)(param_1[0x2c] + ((uVar5 ^ param_1[0x29]) & 0xff) * 4) ^
              (uint)param_1[0x29] >> 8;
      param_1[0x29] = uVar5;
      uVar5 = iVar2 * ((uVar5 & 0xff) + param_1[0x2a]) + 1;
      param_1[0x2a] = uVar5;
      param_1[0x2b] =
           *(uint *)(param_1[0x2c] + ((uVar5 >> 0x18 ^ param_1[0x2b]) & 0xff) * 4) ^
           (uint)param_1[0x2b] >> 8;
    } while (iVar7 < 0xc);
    *(int *)(param_1[0x27] + 0x3c) = *(int *)(param_1[0x27] + 0x3c) + 0xc;
    param_1[0x28] = 1;
  }
  return 0;
}



// Address: 4a164050

int FUN_4a164050(int param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = 0;
  iVar8 = 0;
  if ((param_1 == 0) || (piVar7 = *(int **)(param_1 + 0x9c), piVar7 == (int *)0x0)) {
    return -0x66;
  }
  if (*piVar7 == 0) {
    return -100;
  }
  if (param_3 != 0) {
    piVar7[4] = param_2;
    piVar7[5] = param_3;
    if (((uint)piVar7[0x17] < param_3) && (piVar7[0x23] == 0)) {
      piVar7[5] = piVar7[0x17];
    }
    if (((uint)(piVar7[0x16] + piVar7[2]) < param_3) && (piVar7[0x23] != 0)) {
      piVar7[5] = piVar7[0x16] + piVar7[2];
    }
    iVar2 = DAT_4a164394;
    if (piVar7[5] != 0) {
      do {
        if ((piVar7[2] == 0) && (uVar3 = piVar7[0x16], uVar3 != 0)) {
          uVar5 = 0x4000;
          if (uVar3 < 0x4000) {
            uVar5 = uVar3;
          }
          iVar4 = (*(code *)piVar7[0x1c])(piVar7[0x1f],piVar7[0x20],piVar7[0xf] + piVar7[0x22],0);
          if ((iVar4 != 0) ||
             (uVar3 = (*(code *)piVar7[0x19])(piVar7[0x1f],piVar7[0x20],*piVar7,uVar5),
             uVar3 != uVar5)) {
            return -1;
          }
          uVar3 = 0;
          if (*(int *)(param_1 + 0xa0) != 0 && uVar5 != 0) {
            do {
              uVar6 = *(uint *)(param_1 + 0xac) | 2;
              uVar6 = (uVar6 ^ 1) * uVar6 >> 8 ^ (uint)*(byte *)(*piVar7 + uVar3);
              uVar1 = (undefined1)uVar6;
              *(undefined1 *)(*piVar7 + uVar3) = uVar1;
              uVar6 = *(uint *)(*(int *)(param_1 + 0xb0) +
                               ((*(uint *)(param_1 + 0xa4) ^ uVar6) & 0xff) * 4) ^
                      *(uint *)(param_1 + 0xa4) >> 8;
              *(uint *)(param_1 + 0xa4) = uVar6;
              uVar6 = iVar2 * ((uVar6 & 0xff) + *(int *)(param_1 + 0xa8)) + 1;
              *(uint *)(param_1 + 0xa8) = uVar6;
              *(uint *)(param_1 + 0xac) =
                   *(uint *)(*(int *)(param_1 + 0xb0) +
                            ((uVar6 >> 0x18 ^ *(uint *)(param_1 + 0xac)) & 0xff) * 4) ^
                   *(uint *)(param_1 + 0xac) >> 8;
              uVar6 = uVar3 + 1;
              *(undefined1 *)(*piVar7 + uVar3) = uVar1;
              uVar3 = uVar6;
            } while (uVar6 < uVar5);
          }
          piVar7[0xf] = piVar7[0xf] + uVar5;
          piVar7[0x16] = piVar7[0x16] - uVar5;
          piVar7[1] = *piVar7;
          piVar7[2] = uVar5;
        }
        iVar4 = 0;
        if ((piVar7[0x21] == 0) || (iVar4 = piVar7[0x23], iVar4 != 0)) {
          uVar3 = piVar7[2];
          if (uVar3 == 0) {
            iVar4 = piVar7[0x16];
          }
          if (uVar3 == 0 && iVar4 == 0) {
            return iVar8;
          }
          if ((uint)piVar7[5] < uVar3) {
            uVar3 = piVar7[5];
          }
          uVar5 = 0;
          if (uVar3 != 0) {
            do {
              uVar6 = uVar5 + 1;
              *(undefined1 *)(piVar7[4] + uVar5) = *(undefined1 *)(piVar7[1] + uVar5);
              uVar5 = uVar6;
            } while (uVar6 < uVar3);
          }
          iVar4 = FUN_4a14b808(piVar7[0x14],piVar7[4],uVar3);
          piVar7[0x14] = iVar4;
          iVar8 = iVar8 + uVar3;
          piVar7[0x17] = piVar7[0x17] - uVar3;
          piVar7[2] = piVar7[2] - uVar3;
          piVar7[5] = piVar7[5] - uVar3;
          piVar7[4] = piVar7[4] + uVar3;
          piVar7[1] = piVar7[1] + uVar3;
          piVar7[6] = piVar7[6] + uVar3;
        }
        else {
          iVar4 = piVar7[6];
          iVar10 = piVar7[4];
          iVar9 = FUN_4a15152c(piVar7 + 1,2);
          if ((-1 < iVar9) && (piVar7[7] != 0)) {
            iVar9 = -3;
          }
          iVar4 = piVar7[6] - iVar4;
          iVar10 = FUN_4a14b808(piVar7[0x14],iVar10,iVar4);
          piVar7[0x14] = iVar10;
          iVar8 = iVar8 + iVar4;
          piVar7[0x17] = piVar7[0x17] - iVar4;
          if (iVar9 == 1) {
            return iVar8;
          }
          if (iVar9 != 0) {
            return iVar9;
          }
        }
      } while (piVar7[5] != 0);
      if (iVar9 != 0) {
        return iVar9;
      }
    }
    return iVar8;
  }
  return 0;
}



// Address: 4a164398

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a164398(int param_1,int param_2,undefined4 *param_3,int param_4,uint param_5,int param_6,
                uint param_7,int param_8,uint param_9)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  uint uStack_74;
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  int iStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 *puStack_2c;
  int iStack_28;
  
  iVar4 = 0;
  if (param_1 == 0) {
    return -0x66;
  }
  iStack_34 = param_1;
  iStack_30 = param_2;
  puStack_2c = param_3;
  iStack_28 = param_4;
  iVar1 = (**(code **)(param_1 + 0x10))
                    (*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                     *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x2c),0);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_4a1647d4(param_1,*(undefined4 *)(param_1 + 0x20),&iStack_8c), iVar1 == 0)) {
    if (iStack_8c != 0x2014b50) {
      iVar4 = -0x67;
    }
  }
  else {
    iVar4 = -1;
  }
  iVar1 = FUN_4a164954(param_1,*(undefined4 *)(param_1 + 0x20),auStack_84);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_4a164954(param_1,*(undefined4 *)(param_1 + 0x20),auStack_80);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_4a164954(param_1,*(undefined4 *)(param_1 + 0x20),auStack_7c);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_4a164954(param_1,*(undefined4 *)(param_1 + 0x20),auStack_78);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_4a1647d4(param_1,*(undefined4 *)(param_1 + 0x20),&uStack_74);
  uStack_40 = uStack_74 >> 0x10 & 0x1f;
  iStack_3c = ((uStack_74 >> 0x10 & 0x1e0) >> 5) - 1;
  iStack_38 = (uStack_74 >> 0x19) + 0x7bc;
  uStack_44 = (uStack_74 & 0xf800) >> 0xb;
  uStack_48 = (uStack_74 & 0x7e0) >> 5;
  iStack_4c = (uStack_74 & 0x1f) << 1;
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_4a1647d4(param_1,*(undefined4 *)(param_1 + 0x20),auStack_70);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_4a1647d4(param_1,*(undefined4 *)(param_1 + 0x20),auStack_6c);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_4a1647d4(param_1,*(undefined4 *)(param_1 + 0x20),auStack_68);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_4a164954(param_1,*(undefined4 *)(param_1 + 0x20),&uStack_64);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_4a164954(param_1,*(undefined4 *)(param_1 + 0x20),&uStack_60);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_4a164954(param_1,*(undefined4 *)(param_1 + 0x20),&uStack_5c);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_4a164954(param_1,*(undefined4 *)(param_1 + 0x20),auStack_58);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_4a164954(param_1,*(undefined4 *)(param_1 + 0x20),auStack_54);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_4a1647d4(param_1,*(undefined4 *)(param_1 + 0x20),auStack_50);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_4a1647d4(param_1,*(undefined4 *)(param_1 + 0x20),&uStack_88);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  uVar5 = uStack_64;
  if (iVar4 == 0) {
    if (iStack_28 != 0) {
      uVar5 = param_5;
      if (uStack_64 < param_5) {
        *(undefined1 *)(iStack_28 + uStack_64) = 0;
        uVar5 = uStack_64;
      }
      if ((uStack_64 != 0 && param_5 != 0) &&
         (uVar2 = (**(code **)(param_1 + 4))
                            (*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                             iStack_28,uVar5), uVar2 != uVar5)) {
        iVar4 = -1;
      }
      uVar5 = uStack_64 - uVar5;
      if (iVar4 != 0) goto LAB_4a1646f4;
    }
    if (param_6 != 0) {
      uVar2 = uStack_60;
      if (param_7 <= uStack_60) {
        uVar2 = param_7;
      }
      if (uVar5 != 0) {
        iVar1 = (**(code **)(param_1 + 0x10))
                          (*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),uVar5,1);
        if (iVar1 == 0) {
          uVar5 = 0;
        }
        else {
          iVar4 = -1;
        }
      }
      if ((uStack_60 != 0 && param_7 != 0) &&
         (uVar3 = (**(code **)(param_1 + 4))
                            (*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),param_6
                             ,uVar2), uVar3 != uVar2)) {
        iVar4 = -1;
      }
      uStack_60 = uStack_60 - uVar2;
    }
  }
LAB_4a1646f4:
  if ((iVar4 == 0) && (param_8 != 0)) {
    uVar2 = param_9;
    if (uStack_5c < param_9) {
      *(undefined1 *)(param_8 + uStack_5c) = 0;
      uVar2 = uStack_5c;
    }
    if ((uStack_60 + uVar5 != 0) &&
       (iVar1 = (**(code **)(param_1 + 0x10))
                          (*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                           uStack_60 + uVar5,1), iVar1 != 0)) {
      iVar4 = -1;
    }
    if ((uStack_5c != 0 && param_9 != 0) &&
       (uVar5 = (**(code **)(param_1 + 4))
                          (*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),param_8,
                           uVar2), uVar5 != uVar2)) {
      iVar4 = -1;
    }
  }
  if (iVar4 == 0) {
    if (iStack_30 != 0) {
      FUN_4a001134(iStack_30,auStack_84,0x50);
    }
    if (puStack_2c != (undefined4 *)0x0) {
      *puStack_2c = uStack_88;
    }
  }
  return iVar4;
}



// Address: 4a1647d4

void FUN_4a1647d4(int param_1,undefined4 param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r5;
  uint uVar4;
  uint local_28;
  
  local_28 = param_4;
  iVar3 = (**(code **)(param_1 + 4))(*(undefined4 *)(param_1 + 0x1c),param_2,&local_28,1);
  if (iVar3 == 1) {
    unaff_r5 = local_28 & 0xff;
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x1c),param_2);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = -1;
    }
  }
  uVar4 = unaff_r5;
  if (iVar3 == 0) {
    iVar3 = (**(code **)(param_1 + 4))(*(undefined4 *)(param_1 + 0x1c),param_2,&local_28,1);
    if (iVar3 == 1) {
      iVar3 = 0;
      uVar4 = local_28 & 0xff;
    }
    else {
      iVar3 = (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x1c),param_2);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = -1;
      }
    }
  }
  iVar1 = uVar4 * 0x100;
  if (iVar3 == 0) {
    iVar3 = (**(code **)(param_1 + 4))(*(undefined4 *)(param_1 + 0x1c),param_2,&local_28,1);
    if (iVar3 == 1) {
      uVar4 = local_28 & 0xff;
      iVar3 = 0;
    }
    else {
      iVar3 = (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x1c),param_2);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = -1;
      }
    }
  }
  iVar2 = uVar4 * 0x10000;
  if (iVar3 == 0) {
    iVar3 = (**(code **)(param_1 + 4))(*(undefined4 *)(param_1 + 0x1c),param_2,&local_28,1);
    if (iVar3 == 1) {
      uVar4 = local_28 & 0xff;
      iVar3 = 0;
    }
    else {
      iVar3 = (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x1c),param_2);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = -1;
      }
    }
  }
  if (iVar3 == 0) {
    *param_3 = unaff_r5 + iVar1 + iVar2 + uVar4 * 0x1000000;
  }
  else {
    *param_3 = 0;
  }
  return;
}



// Address: 4a164954

void FUN_4a164954(int param_1,undefined4 param_2,int *param_3,uint param_4)

{
  int iVar1;
  uint unaff_r5;
  uint uVar2;
  uint local_28;
  
  local_28 = param_4;
  iVar1 = (**(code **)(param_1 + 4))(*(undefined4 *)(param_1 + 0x1c),param_2,&local_28,1);
  if (iVar1 == 1) {
    unaff_r5 = local_28 & 0xff;
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x1c),param_2);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = -1;
    }
  }
  uVar2 = unaff_r5;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(param_1 + 4))(*(undefined4 *)(param_1 + 0x1c),param_2,&local_28,1);
    if (iVar1 == 1) {
      iVar1 = 0;
      uVar2 = local_28 & 0xff;
    }
    else {
      iVar1 = (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x1c),param_2);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = -1;
      }
    }
  }
  if (iVar1 == 0) {
    *param_3 = unaff_r5 + uVar2 * 0x100;
  }
  else {
    *param_3 = 0;
  }
  return;
}



// Address: 4a164a24

void FUN_4a164a24(int param_1,int *param_2)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_50;
  int local_4c;
  
  iVar6 = *param_2;
  iVar7 = param_2[1];
  iVar4 = *(int *)(*(int *)(param_1 + 0x1cc) + 0x18);
  local_4c = param_2[3];
  iVar3 = param_2[4];
  iVar5 = param_2[2];
  local_50 = param_2[5];
  if ((iVar6 < iVar7) && (iVar6 < iVar7 + 1)) {
    iVar9 = iVar6;
    do {
      if (iVar5 < local_4c + 1) {
        iVar8 = iVar5;
        do {
          psVar2 = (short *)(iVar8 * 0x40 + iVar3 * 2 + *(int *)(iVar4 + iVar9 * 4));
          for (iVar1 = iVar3; iVar1 < local_50 + 1; iVar1 = iVar1 + 1) {
            if (*psVar2 != 0) {
              *param_2 = iVar9;
              iVar6 = iVar9;
              goto LAB_4a164ae0;
            }
            psVar2 = psVar2 + 1;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < local_4c + 1);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar7 + 1);
  }
LAB_4a164ae0:
  if ((iVar6 < iVar7) && (iVar6 + -1 < iVar7)) {
    iVar9 = iVar7;
    do {
      if (iVar5 < local_4c + 1) {
        iVar8 = iVar5;
        do {
          psVar2 = (short *)(iVar8 * 0x40 + iVar3 * 2 + *(int *)(iVar4 + iVar9 * 4));
          for (iVar1 = iVar3; iVar1 < local_50 + 1; iVar1 = iVar1 + 1) {
            if (*psVar2 != 0) {
              param_2[1] = iVar9;
              iVar7 = iVar9;
              goto LAB_4a164b70;
            }
            psVar2 = psVar2 + 1;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < local_4c + 1);
      }
      iVar9 = iVar9 + -1;
    } while (iVar6 + -1 < iVar9);
  }
LAB_4a164b70:
  if ((iVar5 < local_4c) && (iVar5 < local_4c + 1)) {
    iVar9 = iVar5;
    do {
      if (iVar6 < iVar7 + 1) {
        iVar8 = iVar6;
        do {
          psVar2 = (short *)(*(int *)(iVar4 + iVar8 * 4) + iVar9 * 0x40 + iVar3 * 2);
          for (iVar1 = iVar3; iVar1 < local_50 + 1; iVar1 = iVar1 + 1) {
            if (*psVar2 != 0) {
              param_2[2] = iVar9;
              iVar5 = iVar9;
              goto LAB_4a164c04;
            }
            psVar2 = psVar2 + 1;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar7 + 1);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < local_4c + 1);
  }
LAB_4a164c04:
  if ((iVar5 < local_4c) && (iVar5 + -1 < local_4c)) {
    iVar9 = local_4c;
    do {
      if (iVar6 < iVar7 + 1) {
        iVar8 = iVar6;
        do {
          psVar2 = (short *)(*(int *)(iVar4 + iVar8 * 4) + iVar9 * 0x40 + iVar3 * 2);
          for (iVar1 = iVar3; iVar1 < local_50 + 1; iVar1 = iVar1 + 1) {
            if (*psVar2 != 0) {
              param_2[3] = iVar9;
              local_4c = iVar9;
              goto LAB_4a164c94;
            }
            psVar2 = psVar2 + 1;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar7 + 1);
      }
      iVar9 = iVar9 + -1;
    } while (iVar5 + -1 < iVar9);
  }
LAB_4a164c94:
  if ((iVar3 < local_50) && (iVar3 < local_50 + 1)) {
    iVar9 = iVar3;
    do {
      if (iVar6 < iVar7 + 1) {
        iVar8 = iVar6;
        do {
          psVar2 = (short *)(*(int *)(iVar4 + iVar8 * 4) + iVar5 * 0x40 + iVar9 * 2);
          for (iVar1 = iVar5; iVar1 < local_4c + 1; iVar1 = iVar1 + 1) {
            if (*psVar2 != 0) {
              param_2[4] = iVar9;
              iVar3 = iVar9;
              goto LAB_4a164d34;
            }
            psVar2 = psVar2 + 0x20;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar7 + 1);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < local_50 + 1);
  }
LAB_4a164d34:
  if ((iVar3 < local_50) && (iVar3 + -1 < local_50)) {
    iVar9 = local_50;
    do {
      if (iVar6 < iVar7 + 1) {
        iVar8 = iVar6;
        do {
          psVar2 = (short *)(*(int *)(iVar4 + iVar8 * 4) + iVar5 * 0x40 + iVar9 * 2);
          for (iVar1 = iVar5; iVar1 < local_4c + 1; iVar1 = iVar1 + 1) {
            if (*psVar2 != 0) {
              param_2[5] = iVar9;
              local_50 = iVar9;
              goto LAB_4a164dd0;
            }
            psVar2 = psVar2 + 0x20;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar7 + 1);
      }
      iVar9 = iVar9 + -1;
    } while (iVar3 + -1 < iVar9);
  }
LAB_4a164dd0:
  iVar9 = (iVar7 - iVar6) * 0x10;
  iVar8 = (local_4c - iVar5) * 0xc;
  iVar1 = 0;
  local_50 = local_50 - iVar3;
  param_2[6] = local_50 * 8 * local_50 * 8 + iVar8 * iVar8 + iVar9 * iVar9;
  if (iVar6 < iVar7 + 1) {
    do {
      if (iVar5 < local_4c + 1) {
        iVar9 = iVar5;
        do {
          if (0 < local_50 + 1) {
            iVar8 = local_50 + 1;
            psVar2 = (short *)(iVar9 * 0x40 + iVar3 * 2 + *(int *)(iVar4 + iVar6 * 4));
            do {
              if (*psVar2 != 0) {
                iVar1 = iVar1 + 1;
              }
              iVar8 = iVar8 + -1;
              psVar2 = psVar2 + 1;
            } while (iVar8 != 0);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < local_4c + 1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar7 + 1);
  }
  param_2[7] = iVar1;
  return;
}




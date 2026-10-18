/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a00a728

undefined4 FUN_4a00a728(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == DAT_4a00a748) {
    uVar1 = *(undefined4 *)PTR_DAT_4a00a74c;
  }
  else {
    if (param_1 != DAT_4a00a748 + 1) {
      return 0;
    }
    uVar1 = *(undefined4 *)(PTR_DAT_4a00a74c + 4);
  }
  *param_2 = uVar1;
  return 1;
}



// Address: 4a00a750

void FUN_4a00a750(void)

{
  undefined1 auStack_24 [16];
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_4a0978b4(auStack_24);
  FUN_4a16f22e(PTR_DAT_4a00a7dc,0x96);
  local_14 = 0;
  local_10 = 0;
  FUN_4a16f24a(PTR_DAT_4a00a7dc,&local_14);
  *(char **)(PTR_DAT_4a00a7dc + 0x10) = s_FrameBufferObject_4a00a7c8;
  FUN_4a0978e0(auStack_24);
  FUN_4a0978b4(auStack_24);
  FUN_4a16f306(PTR_DAT_4a00a7dc + 0x14,0x96);
  local_14 = 0;
  local_10 = 0;
  FUN_4a16f322(PTR_DAT_4a00a7dc + 0x14,&local_14);
  *(char **)(PTR_DAT_4a00a7dc + 0x24) = s_RenderBufferObject_4a00a7e0;
  FUN_4a0978e0(auStack_24);
  FUN_4a00a9c4();
  host_glGetIntegerv_thumb(DAT_4a00a7f8,PTR_DAT_4a00a7f4);
  if (*PTR_DAT_4a00a7fc != '\0') {
    host_glGetError_thumb();
  }
  return;
}



// Address: 4a00a800

undefined8 FUN_4a00a800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  host_glGetIntegerv_thumb(DAT_4a00a88c,PTR_DAT_4a00a888);
  if (*PTR_DAT_4a00a890 != '\0') {
    host_glGetError_thumb();
  }
  FUN_4a0978b4(&uStack_20);
  puVar1 = PTR_DAT_4a00a894;
  for (uVar2 = 1; uVar2 < *(uint *)(puVar1 + 4); uVar2 = uVar2 + 1) {
    if (*(int *)(*(int *)puVar1 + uVar2 * 8 + 4) != 0) {
      FUN_4a0a56a4();
    }
  }
  FUN_4a0978e0(&uStack_20);
  FUN_4a0978b4(&uStack_20);
  puVar1 = PTR_DAT_4a00a894;
  piVar3 = (int *)(PTR_DAT_4a00a894 + -0x14);
  for (uVar2 = 1; uVar2 < *(uint *)(puVar1 + -0x10); uVar2 = uVar2 + 1) {
    if (*(int *)(*piVar3 + uVar2 * 8 + 4) != 0) {
      FUN_4a0a4240();
    }
  }
  FUN_4a0978e0(&uStack_20);
  puVar1 = PTR_DAT_4a00a898;
  FUN_4a14fd2c(DAT_4a00a88c + 0x9a,*(undefined4 *)PTR_DAT_4a00a898);
  FUN_4a14fd50(DAT_4a00a88c + 0x9b,*(undefined4 *)(puVar1 + 4));
  return CONCAT44(uStack_1c,uStack_20);
}



// Address: 4a00a89c

void FUN_4a00a89c(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined1 auStack_28 [20];
  
  FUN_4a0978b4(auStack_28);
  puVar1 = PTR_DAT_4a00a914;
  for (uVar3 = 1; uVar3 < *(uint *)(puVar1 + 4); uVar3 = uVar3 + 1) {
    puVar2 = (undefined4 *)(*(int *)puVar1 + uVar3 * 8);
    if (puVar2[1] == 0) {
      FUN_4a0a4200(uVar3,*puVar2);
      *(undefined4 *)(*(int *)puVar1 + uVar3 * 8) = 0;
    }
  }
  FUN_4a0978e0(auStack_28);
  FUN_4a0978b4(auStack_28);
  puVar1 = PTR_DAT_4a00a914;
  piVar4 = (int *)(PTR_DAT_4a00a914 + 0x14);
  for (uVar3 = 1; uVar3 < *(uint *)(puVar1 + 0x18); uVar3 = uVar3 + 1) {
    puVar2 = (undefined4 *)(*piVar4 + uVar3 * 8);
    if (puVar2[1] == 0) {
      FUN_4a0a568c(uVar3,*puVar2);
      *(undefined4 *)(*piVar4 + uVar3 * 8) = 0;
    }
  }
  FUN_4a0978e0(auStack_28);
  return;
}



// Address: 4a00a918

void FUN_4a00a918(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined1 auStack_28 [20];
  
  FUN_4a0978b4(auStack_28);
  puVar1 = PTR_DAT_4a00a9c0;
  for (uVar4 = 0; puVar2 = PTR_DAT_4a00a9c0, uVar4 < *(uint *)(puVar1 + 4); uVar4 = uVar4 + 1) {
    if (*(int *)(*(int *)puVar1 + uVar4 * 8) != 0) {
      FUN_4a0a4200(uVar4);
      thunk_FUN_4a161530(*(undefined4 *)(*(int *)puVar1 + uVar4 * 8 + 4));
    }
  }
  for (uVar4 = 0; uVar4 < *(uint *)(puVar1 + 4); uVar4 = uVar4 + 1) {
  }
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_4a16f202(puVar2,0);
  FUN_4a0978e0(auStack_28);
  FUN_4a0978b4(auStack_28);
  puVar1 = PTR_DAT_4a00a9c0;
  piVar5 = (int *)(PTR_DAT_4a00a9c0 + 0x14);
  for (uVar4 = 0; uVar3 = *(uint *)(puVar1 + 0x18), uVar4 < uVar3; uVar4 = uVar4 + 1) {
    if (*(int *)(*piVar5 + uVar4 * 8) != 0) {
      FUN_4a0a568c(uVar4);
      thunk_FUN_4a161530(*(undefined4 *)(*piVar5 + uVar4 * 8 + 4));
    }
  }
  for (uVar4 = 0; uVar4 < uVar3; uVar4 = uVar4 + 1) {
  }
  puVar2 = PTR_DAT_4a00a9c0 + 0x14;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  FUN_4a16f2da(puVar2,0);
  FUN_4a0978e0(auStack_28);
  return;
}



// Address: 4a00a9c4

void FUN_4a00a9c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  
  puVar1 = PTR_DAT_4a00aacc;
  if (*PTR_DAT_4a00aac8 == '\0') {
    iVar8 = FUN_4a0083c0(0xe);
    puVar3 = PTR_DAT_4a00ab1c;
    puVar2 = PTR_DAT_4a00ab10;
    if (iVar8 != 0) {
      *(undefined4 *)(puVar1 + 8) = *(undefined4 *)PTR_DAT_4a00ab0c;
      puVar4 = PTR_DAT_4a00ab20;
      *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)puVar2;
      puVar7 = PTR_FUN_4a150430_1_4a00ab48;
      puVar5 = PTR_DAT_4a00ab24;
      *(undefined4 *)(puVar1 + 0x10) = *(undefined4 *)PTR_DAT_4a00ab14;
      *(undefined4 *)(puVar1 + 0x14) = *(undefined4 *)PTR_DAT_4a00ab18;
      *(undefined4 *)(puVar1 + 0x18) = *(undefined4 *)puVar3;
      *(undefined4 *)(puVar1 + 0x1c) = *(undefined4 *)puVar4;
      *(undefined4 *)(puVar1 + 0x20) = *(undefined4 *)puVar5;
      *(undefined4 *)(puVar1 + 0x24) = *(undefined4 *)PTR_DAT_4a00ab28;
      *(undefined4 *)(puVar1 + 0x28) = *(undefined4 *)PTR_DAT_4a00ab2c;
      *(undefined4 *)(puVar1 + 0x2c) = *(undefined4 *)PTR_DAT_4a00ab30;
      *(undefined4 *)(puVar1 + 0x30) = *(undefined4 *)PTR_DAT_4a00ab34;
      puVar6 = PTR_DAT_4a00ab3c;
      *(undefined4 *)(puVar1 + 0x34) = *(undefined4 *)PTR_DAT_4a00ab38;
      *(undefined4 *)(puVar1 + 0x38) = *(undefined4 *)puVar6;
      *(undefined4 *)(puVar1 + 0x3c) = *(undefined4 *)PTR_DAT_4a00ab40;
      *(undefined4 *)(puVar1 + 0x40) = *(undefined4 *)PTR_DAT_4a00ab44;
      *(undefined **)PTR_DAT_4a00ab0c = puVar7;
      *(undefined **)puVar2 = PTR_FUN_4a14fd50_1_4a00ab4c;
      *(undefined **)PTR_DAT_4a00ab14 = PTR_FUN_4a150040_1_4a00ab50;
      *(undefined **)PTR_DAT_4a00ab18 = PTR_FUN_4a1502a4_1_4a00ab54;
      *(undefined **)puVar3 = PTR_FUN_4a150774_1_4a00ab58;
      puVar1 = PTR_FUN_4a14fd2c_1_4a00ab64;
      *(undefined **)puVar4 = PTR_FUN_4a1503a0_1_4a00ab5c;
      *(undefined **)puVar5 = PTR_FUN_4a150424_1_4a00ab60;
      *(undefined **)PTR_DAT_4a00ab28 = puVar1;
      *(undefined **)PTR_DAT_4a00ab2c = PTR_FUN_4a150010_1_4a00ab68;
      *(undefined **)PTR_DAT_4a00ab30 = PTR_FUN_4a150280_1_4a00ab6c;
      *(undefined **)PTR_DAT_4a00ab34 = PTR_FUN_4a14fe00_1_4a00ab70;
      *(undefined **)PTR_DAT_4a00ab38 = PTR_FUN_4a1501cc_1_4a00ab74;
      *(undefined **)puVar6 = PTR_FUN_4a1501f8_1_4a00ab78;
      *(undefined **)PTR_DAT_4a00ab40 = PTR_FUN_4a150338_1_4a00ab7c;
      *(undefined **)PTR_DAT_4a00ab44 = PTR_FUN_4a1502ec_1_4a00ab80;
    }
  }
  else {
    *(undefined **)(PTR_DAT_4a00aacc + 8) = PTR_host_glIsRenderbuffer_arm_4a00aad0;
    *(undefined **)(puVar1 + 0xc) = PTR_host_glBindRenderbuffer_arm_4a00aad4;
    *(undefined **)(puVar1 + 0x10) = PTR_host_glDeleteRenderbuffers_arm_4a00aad8;
    *(undefined **)(puVar1 + 0x14) = PTR_host_glGenRenderbuffers_arm_4a00aadc;
    *(undefined **)(puVar1 + 0x18) = PTR_host_glRenderbufferStorage_arm_4a00aae0;
    *(undefined **)(puVar1 + 0x1c) = PTR_host_glGetRenderbufferParameteriv_arm_4a00aae4;
    *(undefined **)(puVar1 + 0x20) = PTR_host_glIsFramebuffer_arm_4a00aae8;
    *(undefined **)(puVar1 + 0x24) = PTR_host_glBindFramebuffer_arm_4a00aaec;
    *(undefined **)(puVar1 + 0x28) = PTR_host_glDeleteFramebuffers_arm_4a00aaf0;
    *(undefined **)(puVar1 + 0x2c) = PTR_host_glGenFramebuffers_arm_4a00aaf4;
    *(undefined **)(puVar1 + 0x30) = PTR_host_glCheckFramebufferStatus_arm_4a00aaf8;
    *(undefined **)(puVar1 + 0x34) = PTR_host_glFramebufferRenderbuffer_arm_4a00aafc;
    *(undefined **)(puVar1 + 0x38) = PTR_host_glFramebufferTexture2D_arm_4a00ab00;
    *(undefined **)(puVar1 + 0x3c) = PTR_host_glGetFramebufferAttachmentParameteriv_arm_4a00ab04;
    *(undefined **)(puVar1 + 0x40) = PTR_host_glGenerateMipmap_arm_4a00ab08;
  }
  return;
}



// Address: 4a00ab84

undefined4 FUN_4a00ab84(void)

{
  return *(undefined4 *)(PTR_DAT_4a00ab94 + 0x10);
}



// Address: 4a00ab98

undefined4 FUN_4a00ab98(void)

{
  return *(undefined4 *)(PTR_DAT_4a00aba8 + 8);
}



// Address: 4a00abac

undefined4 FUN_4a00abac(void)

{
  return *(undefined4 *)(PTR_DAT_4a00abbc + 0xc);
}



// Address: 4a00abc0

int FUN_4a00abc0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)PTR_DAT_4a00ac08;
  if ((param_1 == 0) || (piVar1 = (int *)PTR_DAT_4a00ac0c, param_1 == 1)) {
    return *piVar1;
  }
  if (param_1 != 2) {
    return *(int *)(PTR_DAT_4a00ac04 + param_1 * 4);
  }
  if (*PTR_DAT_4a00ac10 == '\0') {
    return (*(int *)PTR_DAT_4a00ac14 + *(int *)PTR_DAT_4a00ac18) % 4;
  }
  return 0;
}



// Address: 4a00ac1c

int FUN_4a00ac1c(int param_1)

{
  if ((param_1 != 0) && (*(int *)(PTR_DAT_4a00ac34 + 0x20) != 0)) {
    param_1 = *(int *)(*(int *)PTR_DAT_4a00ac38 + param_1 * 8);
  }
  return param_1;
}



// Address: 4a00ac3c

int FUN_4a00ac3c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if ((*(int *)(PTR_DAT_4a00ac6c + 0x20) != 0) && (param_1 != 0)) {
    iVar2 = FUN_4a16542e(PTR_DAT_4a00ac70,param_1);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(*(int *)PTR_DAT_4a00ac70 + param_1 * 8);
    }
  }
  return iVar1;
}



// Address: 4a00ac74

undefined4 FUN_4a00ac74(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_r3;
  int iVar4;
  int iVar5;
  uint local_18;
  
  iVar2 = *(int *)(PTR_DAT_4a00ad70 + 4);
  *(int *)(PTR_DAT_4a00ad70 + 4) = iVar2 + 1;
  local_18 = in_r3;
  if (iVar2 < 1) {
    iVar2 = FUN_4a00d564();
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_4a15f49c();
      *(undefined4 *)(PTR_DAT_4a00ad70 + 0x14) = uVar3;
      iVar2 = host_s3eGLGetInt_thumb(2);
      if ((iVar2 != 0) != 0) {
        host_s3eGLRegister_thumb(0,PTR_FUN_4a02ca04_1_4a00ad74);
        host_s3eGLRegister_thumb(1,PTR_FUN_4a029dfc_1_4a00ad78,0);
      }
      puVar1 = PTR_DAT_4a00ad7c;
      iVar4 = 0;
      do {
        iVar5 = iVar4 * 4;
        local_18 = *(uint *)(PTR_DAT_4a00ad70 + iVar5 + 0x18);
        if (local_18 != 0xffffff2f) {
          if (local_18 == 0xffffff2e) {
            local_18 = (uint)(iVar2 != 0);
          }
          host_s3eConfigGetInt_thumb
                    (&DAT_4a00ad80,*(undefined4 *)(PTR_DAT_4a00ad70 + iVar5 + 0x54),&local_18);
        }
        iVar4 = iVar4 + 1;
        *(uint *)(puVar1 + iVar5) = local_18;
      } while (iVar4 < 0xf);
      if ((((*(int *)(puVar1 + 0x28) != 0) || (*(int *)(puVar1 + 0x2c) != 0)) ||
          (*(int *)(puVar1 + 0x30) != 0)) || (*(int *)(puVar1 + 0x34) != 0)) {
        *(undefined4 *)(puVar1 + 0x20) = 1;
      }
      puVar1 = PTR_DAT_4a00ad88;
      *(undefined **)PTR_DAT_4a00ad88 = PTR_host_s3eMallocBase_arm_4a00ad84;
      *(undefined **)(puVar1 + 4) = PTR_host_s3eReallocBase_arm_4a00ad8c;
      *(undefined **)(puVar1 + 8) = PTR_host_s3eFreeBase_arm_4a00ad90;
      FUN_4a0083cc();
      FUN_4a00b6b4();
      FUN_4a00b324();
      FUN_4a00b584();
      puVar1 = PTR_DAT_4a00ad94;
      if ((((*PTR_DAT_4a00ad94 != '\0') && (FUN_4a00aeac(), *puVar1 != '\0')) ||
          (iVar2 = FUN_4a0083c0(0xe), iVar2 != 0)) && (FUN_4a00a750(), *PTR_DAT_4a00ad98 != '\0')) {
        FUN_4a150318();
      }
      FUN_4a0082ec();
      FUN_4a00b108();
      *PTR_DAT_4a00ad70 = 0;
      uVar3 = 1;
    }
  }
  else {
    uVar3 = FUN_4a00ad9c();
  }
  return uVar3;
}



// Address: 4a00ad9c

undefined1 FUN_4a00ad9c(void)

{
  return PTR_DAT_4a00ada4[1];
}



// Address: 4a00ada8

bool FUN_4a00ada8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = PTR_DAT_4a00add4;
  puVar1 = PTR_DAT_4a00add0;
  iVar4 = *(int *)(PTR_DAT_4a00add0 + 0x10);
  if (iVar4 != 0xc) {
    iVar3 = iVar4 * 0xc;
    *(undefined4 *)(PTR_DAT_4a00add4 + iVar3) = param_1;
    *(undefined4 *)(puVar2 + iVar3 + 4) = param_2;
    *(undefined4 *)(puVar2 + iVar3 + 8) = param_3;
    *(int *)(puVar1 + 0x10) = iVar4 + 1;
  }
  return iVar4 == 0xc;
}



// Address: 4a00add8

void FUN_4a00add8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_4a00ae38;
  if (*PTR_DAT_4a00ae38 != '\0') {
    FUN_4a00d564();
    FUN_4a0083cc();
    FUN_4a00a9c4();
    puVar2 = PTR_DAT_4a00ae3c;
    if (*PTR_DAT_4a00ae3c != '\0') {
      FUN_4a00af60();
    }
    FUN_4a00b3a4();
    FUN_4a00b5cc();
    if ((*puVar2 != '\0') || (iVar3 = FUN_4a0083c0(0xe), iVar3 != 0)) {
      FUN_4a00a800();
    }
    FUN_4a0396c4(1);
    FUN_4a0479ec();
    *puVar1 = 0;
    *PTR_DAT_4a00ae44 = *(int *)(PTR_DAT_4a00ae40 + 0x24) != 0;
  }
  return;
}



// Address: 4a00ae50

void FUN_4a00ae50(int param_1,undefined4 param_2)

{
  *(undefined4 *)(PTR_DAT_4a00ae68 + param_1 * 4) = param_2;
  if (param_1 - 3U < 5) {
    FUN_4a00b530();
  }
  return;
}



// Address: 4a00ae6c

void FUN_4a00ae6c(undefined4 param_1)

{
  if (*(int *)(PTR_DAT_4a00ae88 + 0x28) != 0) {
    FUN_4a1653f4(PTR_DAT_4a00ae8c,param_1);
    FUN_4a068dc4();
  }
  return;
}



// Address: 4a00ae90

undefined4 FUN_4a00ae90(int param_1,undefined4 *param_2)

{
  if (param_1 == DAT_4a00aea4) {
    *param_2 = *(undefined4 *)(PTR_DAT_4a00aea8 + 8);
    return 1;
  }
  return 0;
}



// Address: 4a00aeac

void FUN_4a00aeac(void)

{
  undefined1 auStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  FUN_4a0978b4(auStack_28);
  FUN_4a16f07e(PTR_DAT_4a00af2c,0x96);
  local_18 = 0;
  local_14 = 0;
  FUN_4a16f09a(PTR_DAT_4a00af2c,&local_18);
  *(char **)(PTR_DAT_4a00af2c + 0x10) = s_Shader_4a00af24;
  FUN_4a0978e0(auStack_28);
  FUN_4a0978b4(auStack_28);
  FUN_4a16f156(PTR_DAT_4a00af2c + 0x14,0x96);
  local_18 = 0;
  local_14 = 0;
  FUN_4a16f172(PTR_DAT_4a00af2c + 0x14,&local_18);
  *(char **)(PTR_DAT_4a00af2c + 0x24) = s_Program_4a00af30;
  FUN_4a0978e0(auStack_28);
  local_10 = 0;
  host_s3eConfigGetInt_thumb(&DAT_4a00af58,s_AllowNegativeUniformLocation_4a00af38,&local_10);
  *PTR_DAT_4a00af5c = local_10 != 0;
  return;
}



// Address: 4a00af60

undefined8 FUN_4a00af60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  FUN_4a0978b4(&uStack_20);
  puVar1 = PTR_DAT_4a00afc0;
  for (uVar2 = 1; uVar2 < *(uint *)(puVar1 + 4); uVar2 = uVar2 + 1) {
    if (*(int *)(*(int *)puVar1 + uVar2 * 8 + 4) != 0) {
      FUN_4a091fae();
    }
  }
  FUN_4a0978e0(&uStack_20);
  FUN_4a0978b4(&uStack_20);
  puVar1 = PTR_DAT_4a00afc0;
  piVar3 = (int *)(PTR_DAT_4a00afc0 + 0x14);
  for (uVar2 = 1; uVar2 < *(uint *)(puVar1 + 0x18); uVar2 = uVar2 + 1) {
    if (*(int *)(*piVar3 + uVar2 * 8 + 4) != 0) {
      FUN_4a097ddc();
    }
  }
  FUN_4a0978e0(&uStack_20);
  return CONCAT44(uStack_1c,uStack_20);
}



// Address: 4a00afc4

void FUN_4a00afc4(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined1 auStack_28 [20];
  
  FUN_4a0978b4(auStack_28);
  puVar1 = PTR_DAT_4a00b048;
  for (uVar3 = 1; uVar3 < *(uint *)(puVar1 + 4); uVar3 = uVar3 + 1) {
    puVar2 = (undefined4 *)(*(int *)puVar1 + uVar3 * 8);
    if (puVar2[1] == 0) {
      FUN_4a091eec(uVar3,*puVar2);
      *(undefined4 *)(*(int *)puVar1 + uVar3 * 8) = 0;
    }
    else {
      FUN_4a091ff2();
    }
  }
  FUN_4a0978e0(auStack_28);
  FUN_4a0978b4(auStack_28);
  puVar1 = PTR_DAT_4a00b048;
  piVar4 = (int *)(PTR_DAT_4a00b048 + 0x14);
  for (uVar3 = 1; uVar3 < *(uint *)(puVar1 + 0x18); uVar3 = uVar3 + 1) {
    puVar2 = (undefined4 *)(*piVar4 + uVar3 * 8);
    if (puVar2[1] == 0) {
      FUN_4a097c2e(uVar3,*puVar2);
      *(undefined4 *)(*piVar4 + uVar3 * 8) = 0;
    }
    else {
      FUN_4a097e60();
    }
  }
  FUN_4a0978e0(auStack_28);
  return;
}



// Address: 4a00b04c

void FUN_4a00b04c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined1 auStack_28 [20];
  
  FUN_4a0978b4(auStack_28);
  puVar1 = PTR_DAT_4a00b104;
  for (uVar4 = 0; puVar2 = PTR_DAT_4a00b104, uVar4 < *(uint *)(puVar1 + 4); uVar4 = uVar4 + 1) {
    if (*(int *)(*(int *)puVar1 + uVar4 * 8) != 0) {
      FUN_4a097c2e(uVar4);
      if (*(int *)(*(int *)puVar1 + uVar4 * 8 + 4) != 0) {
        FUN_4a097e70();
        thunk_FUN_4a161530();
      }
    }
  }
  for (uVar4 = 0; uVar4 < *(uint *)(puVar1 + 4); uVar4 = uVar4 + 1) {
  }
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_4a16f12a(puVar2,0);
  FUN_4a0978e0(auStack_28);
  FUN_4a0978b4(auStack_28);
  puVar1 = PTR_DAT_4a00b104;
  piVar5 = (int *)(PTR_DAT_4a00b104 + -0x14);
  for (uVar4 = 0; uVar3 = *(uint *)(puVar1 + -0x10), uVar4 < uVar3; uVar4 = uVar4 + 1) {
    if (*(int *)(*piVar5 + uVar4 * 8) != 0) {
      FUN_4a091eec(uVar4);
      if (*(int *)(*piVar5 + uVar4 * 8 + 4) != 0) {
        FUN_4a092000();
        thunk_FUN_4a161530();
      }
    }
  }
  for (uVar4 = 0; uVar4 < uVar3; uVar4 = uVar4 + 1) {
  }
  puVar2 = PTR_DAT_4a00b104 + -0x14;
  *(undefined4 *)(puVar1 + -0x10) = 0;
  FUN_4a16f052(puVar2,0);
  FUN_4a0978e0(auStack_28);
  return;
}



// Address: 4a00b108

void FUN_4a00b108(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  thunk_FUN_4a161570(DAT_4a00b144);
  uVar2 = FUN_4a09bc5c();
  puVar1 = PTR_DAT_4a00b148;
  *(undefined4 *)(PTR_DAT_4a00b148 + 4) = uVar2;
  FUN_4a09aea0();
  FUN_4a09bba8(*(undefined4 *)(puVar1 + 4));
  iVar3 = *(int *)(PTR_DAT_4a00b14c + 0x24);
  *puVar1 = iVar3 != 0;
  if (iVar3 == 0) {
    thunk_FUN_4a161530(*(undefined4 *)(puVar1 + 4));
    *(undefined4 *)(puVar1 + 4) = 0;
  }
  return;
}



// Address: 4a00b150

void FUN_4a00b150(void)

{
  thunk_FUN_4a161530(*(undefined4 *)(PTR_DAT_4a00b160 + 4));
  return;
}



// Address: 4a00b164

void FUN_4a00b164(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  puVar1 = PTR_DAT_4a00b220;
  if (*PTR_DAT_4a00b220 == '\0') {
    FUN_4a047a04();
    *PTR_DAT_4a00b224 = 0;
    FUN_4a0396c4(0);
    puVar2 = PTR_DAT_4a00b228;
    if (((*PTR_DAT_4a00b228 != '\0') && (FUN_4a00afc4(), *puVar2 != '\0')) ||
       (iVar3 = FUN_4a0083c0(0xe), iVar3 != 0)) {
      FUN_4a00a89c();
    }
    FUN_4a00b3ec();
    FUN_4a00b604();
    FUN_4a14fe28(0x100);
    uVar4 = DAT_4a00b22c;
    thunk_FUN_4a14fd70(DAT_4a00b22c,0);
    if (*puVar2 == '\0') {
      FUN_4a1500f8(uVar4);
    }
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    uVar4 = host_s3eSurfaceGetInt_thumb(4);
    uStack_20 = host_s3eSurfaceGetInt_thumb(5);
    local_1c = 0;
    local_18 = 0;
    local_24 = uVar4;
    FUN_4a00808c(&local_1c,&local_24,&local_2c,&local_34,0,0,0,0);
    if (*(int *)(puVar1 + 0xc) != 0) {
      FUN_4a00b238();
    }
    FUN_4a00d654(1);
    *puVar1 = 1;
    return;
  }
  return;
}



// Address: 4a00b238

void FUN_4a00b238(void)

{
  if (*(void **)(PTR_DAT_4a00b250 + 8) != (void *)0x0) {
    host_eglSwapBuffers_thumb(*(void **)(PTR_DAT_4a00b250 + 8),*(void **)(PTR_DAT_4a00b250 + 0xc));
  }
  return;
}



// Address: 4a00b25c

void FUN_4a00b25c(void)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(PTR_DAT_4a00b2c8 + 4);
  *(int *)(PTR_DAT_4a00b2c8 + 4) = iVar2 + -1;
  if (iVar2 + -1 != 0) {
    return;
  }
  iVar2 = FUN_4a00ad9c();
  if (iVar2 != 0) {
    iVar2 = host_s3eGLGetInt_thumb(2);
    if (iVar2 != 0) {
      host_s3eGLUnRegister_thumb(0,PTR_FUN_4a02ca04_1_4a00b2cc);
      host_s3eGLUnRegister_thumb(1,PTR_FUN_4a029dfc_1_4a00b2d0);
    }
    FUN_4a008380();
    puVar1 = PTR_DAT_4a00b2d4;
    if (((*PTR_DAT_4a00b2d4 != '\0') && (FUN_4a00b04c(), *puVar1 != '\0')) ||
       (iVar2 = FUN_4a0083c0(0xe), iVar2 != 0)) {
      FUN_4a00a918();
    }
    FUN_4a00b464();
    FUN_4a00b650();
    FUN_4a00b150();
    FUN_4a00d654(0);
    return;
  }
  return;
}



// Address: 4a00b2d8

undefined4 FUN_4a00b2d8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == DAT_4a00b310) && (*(int *)(PTR_DAT_4a00b31c + 0x28) != 0)) {
    uVar1 = *(undefined4 *)(PTR_DAT_4a00b318 + *(int *)PTR_DAT_4a00b314 * 8);
  }
  else {
    if ((param_1 != DAT_4a00b320) || (*(int *)(PTR_DAT_4a00b31c + 0x28) == 0)) {
      return 0;
    }
    uVar1 = *(undefined4 *)(PTR_DAT_4a00b318 + *(int *)PTR_DAT_4a00b314 * 8 + 4);
  }
  *param_2 = uVar1;
  return 1;
}



// Address: 4a00b324

void FUN_4a00b324(void)

{
  undefined1 auStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_4a0978b4(auStack_28);
  FUN_4a16ef38(PTR_DAT_4a00b380,0x96);
  local_18 = 0;
  local_14 = 0;
  FUN_4a16ef54(PTR_DAT_4a00b380,&local_18);
  *(char **)(PTR_DAT_4a00b380 + 0x10) = s_Texture_4a00b378;
  FUN_4a0978e0(auStack_28);
  thunk_FUN_4a00121c(PTR_DAT_4a00b380 + 0x14,0x100);
  local_10 = 0;
  host_s3eConfigGetInt_thumb(&DAT_4a00b39c,s_AllowTextureAllocInBind_4a00b384,&local_10);
  *(undefined4 *)(PTR_DAT_4a00b3a0 + 4) = local_10;
  return;
}



// Address: 4a00b3a4

void FUN_4a00b3a4(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  
  FUN_4a0978b4(auStack_1c);
  FUN_4a0978b4(auStack_2c);
  puVar1 = PTR_DAT_4a00b3e8;
  for (uVar2 = 1; uVar2 < *(uint *)(puVar1 + 4); uVar2 = uVar2 + 1) {
    if (*(int *)(*(int *)puVar1 + uVar2 * 8 + 4) != 0) {
      FUN_4a068e04();
    }
  }
  FUN_4a0978e0(auStack_2c);
  FUN_4a0978e0(auStack_1c);
  return;
}



// Address: 4a00b3ec

void FUN_4a00b3ec(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  
  FUN_4a0978b4(auStack_24);
  thunk_FUN_4a161570(DAT_4a00b45c);
  uVar2 = FUN_4a09bc5c();
  FUN_4a09aea0();
  FUN_4a09b2a0(uVar2);
  thunk_FUN_4a161530(uVar2);
  FUN_4a0978b4(auStack_34);
  puVar1 = PTR_DAT_4a00b460;
  for (uVar4 = 1; uVar4 < *(uint *)(puVar1 + 4); uVar4 = uVar4 + 1) {
    puVar3 = (undefined4 *)(*(int *)puVar1 + uVar4 * 8);
    if (puVar3[1] == 0) {
      FUN_4a068d88(uVar4,*puVar3);
      *(undefined4 *)(*(int *)puVar1 + uVar4 * 8) = 0;
    }
    else {
      FUN_4a068f5c();
    }
  }
  FUN_4a0978e0(auStack_34);
  FUN_4a0978e0(auStack_24);
  return;
}



// Address: 4a00b464

void FUN_4a00b464(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined1 auStack_28 [20];
  
  FUN_4a0978b4(auStack_28);
  puVar1 = PTR_DAT_4a00b4c4;
  for (uVar3 = 0; puVar2 = PTR_DAT_4a00b4c4, uVar3 < *(uint *)(puVar1 + 4); uVar3 = uVar3 + 1) {
    if (*(int *)(*(int *)puVar1 + uVar3 * 8) != 0) {
      FUN_4a068d88(uVar3);
      if (*(int *)(*(int *)puVar1 + uVar3 * 8 + 4) != 0) {
        FUN_4a069410();
        thunk_FUN_4a161530();
      }
    }
  }
  for (uVar3 = 0; uVar3 < *(uint *)(puVar1 + 4); uVar3 = uVar3 + 1) {
  }
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_4a16eec2(puVar2,0);
  FUN_4a0978e0(auStack_28);
  return;
}



// Address: 4a00b4c8

uint FUN_4a00b4c8(int param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar2 = PTR_DAT_4a00b52c;
  puVar1 = PTR_DAT_4a00b528;
  uVar3 = 0;
  for (iVar5 = 0; iVar5 < *(int *)(puVar2 + 0x10); iVar5 = iVar5 + 1) {
    if ((*(int *)(puVar1 + iVar5 * 0xc) == param_1) &&
       (*(int *)(puVar1 + iVar5 * 0xc + 4) == param_2)) {
      *(int *)(puVar2 + 0x10) = *(int *)(puVar2 + 0x10) + -1;
      for (iVar4 = iVar5; iVar4 < *(int *)(puVar2 + 0x10); iVar4 = iVar4 + 1) {
        puVar6 = (undefined4 *)(puVar1 + iVar4 * 0xc);
        *puVar6 = puVar6[3];
        puVar6[1] = puVar6[4];
        puVar6[2] = puVar6[5];
      }
      uVar3 = 1;
      *(undefined4 *)(puVar1 + *(int *)(puVar2 + 0x10) * 0xc) = 0;
    }
  }
  return uVar3 ^ 1;
}



// Address: 4a00b530

void FUN_4a00b530(void)

{
  undefined1 auStack_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = host_s3eSurfaceGetInt_thumb(0);
  local_10 = host_s3eSurfaceGetInt_thumb(1);
  local_c = host_s3eSurfaceGetInt_thumb(0xb);
  FUN_4a04e708(auStack_18,0);
  return;
}



// Address: 4a00b55c

undefined4 FUN_4a00b55c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == DAT_4a00b57c) {
    uVar1 = *(undefined4 *)PTR_DAT_4a00b580;
  }
  else {
    if (param_1 != DAT_4a00b57c + 1) {
      return 0;
    }
    uVar1 = *(undefined4 *)(PTR_DAT_4a00b580 + 4);
  }
  *param_2 = uVar1;
  return 1;
}



// Address: 4a00b584

undefined * FUN_4a00b584(void)

{
  undefined *puVar1;
  undefined1 auStack_24 [16];
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_4a0978b4(auStack_24);
  FUN_4a16efa6(PTR_DAT_4a00b5c4,0x96);
  local_14 = 0;
  local_10 = 0;
  FUN_4a16efc2(PTR_DAT_4a00b5c4,&local_14);
  *(undefined **)(PTR_DAT_4a00b5c4 + 0x10) = &DAT_4a00b5c0;
  FUN_4a0978e0(auStack_24);
  puVar1 = PTR_DAT_4a00b5c8;
  *(undefined4 *)PTR_DAT_4a00b5c8 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return puVar1 + 8;
}



// Address: 4a00b5cc

undefined8 FUN_4a00b5cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  FUN_4a0978b4(&uStack_20);
  puVar1 = PTR_DAT_4a00b600;
  for (uVar2 = 1; uVar2 < *(uint *)(puVar1 + 4); uVar2 = uVar2 + 1) {
    if (*(int *)(*(int *)puVar1 + uVar2 * 8 + 4) != 0) {
      FUN_4a0694e0();
    }
  }
  FUN_4a0978e0(&uStack_20);
  return CONCAT44(uStack_1c,uStack_20);
}



// Address: 4a00b604

void FUN_4a00b604(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 auStack_28 [20];
  
  FUN_4a0978b4(auStack_28);
  puVar1 = PTR_DAT_4a00b64c;
  for (uVar3 = 1; uVar3 < *(uint *)(puVar1 + 4); uVar3 = uVar3 + 1) {
    puVar2 = (undefined4 *)(*(int *)puVar1 + uVar3 * 8);
    if (puVar2[1] == 0) {
      FUN_4a069494(uVar3,*puVar2);
      *(undefined4 *)(*(int *)puVar1 + uVar3 * 8) = 0;
    }
    else {
      FUN_4a06950c();
    }
  }
  FUN_4a0978e0(auStack_28);
  return;
}



// Address: 4a00b650

void FUN_4a00b650(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined1 auStack_28 [20];
  
  FUN_4a0978b4(auStack_28);
  puVar1 = PTR_DAT_4a00b6b0;
  for (uVar3 = 0; puVar2 = PTR_DAT_4a00b6b0, uVar3 < *(uint *)(puVar1 + 4); uVar3 = uVar3 + 1) {
    if (*(int *)(*(int *)puVar1 + uVar3 * 8) != 0) {
      FUN_4a069494(uVar3);
      if (*(int *)(*(int *)puVar1 + uVar3 * 8 + 4) != 0) {
        FUN_4a06952c();
        thunk_FUN_4a161530();
      }
    }
  }
  for (uVar3 = 0; uVar3 < *(uint *)(puVar1 + 4); uVar3 = uVar3 + 1) {
  }
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_4a16ef7a(puVar2,0);
  FUN_4a0978e0(auStack_28);
  return;
}



// Address: 4a00b6b4

void FUN_4a00b6b4(void)

{
  undefined4 uVar1;
  
  uVar1 = host_s3eSurfaceGetInt_thumb(3);
  host_s3eSurfaceSetup_thumb(uVar1,0,0,4);
  FUN_4a00b530();
  host_s3eSurfaceRegister_thumb(1,PTR_FUN_4a04e708_1_4a00b6dc,0);
  return;
}



// Address: 4a00b6e0

void FUN_4a00b6e0(void)

{
  int x;
  int y;
  
  y = *(int *)(PTR_DAT_4a00b724 + 0x20);
  x = *(int *)(PTR_DAT_4a00b724 + 0x1c);
  if (((x == 0) || (*(int *)(PTR_DAT_4a00b724 + 0x28) <= *(int *)(PTR_DAT_4a00b724 + 0x14) + x * -2)
      ) && ((y == 0 ||
            (*(int *)(PTR_DAT_4a00b724 + 0x24) <= *(int *)(PTR_DAT_4a00b724 + 0x10) + y * -2)))) {
    host_glDisable_thumb(DAT_4a00b728);
  }
  else {
    host_glScissor_thumb
              (x,y,*(int *)(PTR_DAT_4a00b724 + 0x10) + x * -2,
               *(int *)(PTR_DAT_4a00b724 + 0x14) + y * -2);
  }
  return;
}



// Address: 4a00b72c

/* WARNING: Removing unreachable block (ram,0x4a00b770) */
/* WARNING: Removing unreachable block (ram,0x4a00b7a0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a00b72c(void)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  puVar1 = PTR_LAB_4a00b7d8;
  *(undefined4 *)PTR_LAB_4a00b7d8 = *(undefined4 *)PTR_DAT_4a00b7d4;
  host_s3eConfigGetInt_arm
            (PTR_s_NumSpansBuffered_4a00b7dc + -4,PTR_s_NumSpansBuffered_4a00b7dc,&stack0xfffffff0);
  host_s3eConfigGetInt_arm
            (PTR_s_PixelsDrawnBeforeYield_4a00b7e0 + -0x18,PTR_s_PixelsDrawnBeforeYield_4a00b7e0,
             &stack0xffffffec);
  *(undefined4 *)(puVar1 + 100) = 0x1400;
  *(undefined4 *)(puVar1 + 0x60) = 0x1400;
  puVar1 = PTR_LAB_4a09df04;
  piVar2 = *(int **)PTR_DAT_4a00b7e4;
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



// Address: 4a00b7e8

undefined4 FUN_4a00b7e8(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_1a4 [256];
  undefined1 auStack_a4 [16];
  undefined *local_94;
  int aiStack_90 [31];
  
  FUN_4a0012bc(PTR_DAT_4a00b87c,&DAT_4a00b878);
  host_s3eConfigGetString_thumb(&DAT_4a00b890,s_SysAppCaption_4a00b880,PTR_DAT_4a00b87c);
  iVar3 = 1;
  local_94 = PTR_DAT_4a00b87c;
  do {
    FUN_4a000d78(auStack_a4,0x10,s_argv__d__4a00b894,iVar3);
    iVar1 = host_s3eConfigGetString_thumb(s_commandline_4a00b8a0,auStack_a4,auStack_1a4);
    if (iVar1 == 1) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_4a0013e0(auStack_1a4);
      iVar1 = FUN_4a00d994(iVar1 + 1);
      FUN_4a0012bc(iVar1,auStack_1a4);
    }
    aiStack_90[iVar3 + -1] = iVar1;
  } while ((iVar1 != 0) && (iVar3 = iVar3 + 1, iVar3 < 0x1f));
  aiStack_90[iVar3 + -1] = 0;
  uVar2 = thunk_FUN_4a0007cc(iVar3,&local_94);
  for (iVar1 = 1; iVar1 < iVar3; iVar1 = iVar1 + 1) {
    FUN_4a00d4ac(aiStack_90[iVar1 + -1]);
  }
  return uVar2;
}



// Address: 4a00b8ac

void FUN_4a00b8ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  
  puVar1 = PTR_DAT_4a00b948;
  iVar3 = *(int *)(PTR_DAT_4a00b948 + 4);
  for (uVar4 = 0; uVar4 < *(uint *)(iVar3 + 0xc); uVar4 = uVar4 + 1) {
  }
  piVar8 = (int *)(*(int *)(iVar3 + 8) + param_1 * 0x28);
  uVar6 = *(uint *)(iVar3 + 0x1c);
  uVar5 = piVar8[1];
  for (uVar4 = 0; uVar4 < uVar6; uVar4 = uVar4 + 1) {
    if (*(uint *)(*(int *)(iVar3 + 0x18) + uVar4 * 4) == uVar5) goto LAB_4a00b8ec;
  }
LAB_4a00b90c:
  piVar2 = (int *)piVar8[1];
  if (piVar2 != (int *)0x0) {
    FUN_4a1652c6(piVar2,*(undefined4 *)(*piVar2 + 4),uVar5,uVar6,param_4);
  }
  if ((*piVar8 != piVar8[1]) && (*piVar8 != 0)) {
    thunk_FUN_4a14f21c();
  }
  iVar3 = FUN_4a170748(*(int *)(puVar1 + 4) + 8,piVar8[2]);
  *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + -1;
  *piVar8 = 0;
  piVar8[1] = 0;
  return;
LAB_4a00b8ec:
  for (; uVar6 = *(uint *)(iVar3 + 0x1c), uVar4 < uVar6 - 1; uVar4 = uVar4 + 1) {
    iVar7 = *(int *)(iVar3 + 0x18);
    *(undefined4 *)(iVar7 + uVar4 * 4) = *(undefined4 *)(iVar7 + (uVar4 + 1) * 4);
  }
  uVar5 = *(int *)(iVar3 + 0x1c) - 1;
  for (uVar4 = uVar5; uVar4 < uVar6; uVar4 = uVar4 + 1) {
  }
  *(uint *)(iVar3 + 0x1c) = uVar5;
  goto LAB_4a00b90c;
}



// Address: 4a00b94c

undefined4 FUN_4a00b94c(void)

{
  return *(undefined4 *)(*(int *)(PTR_DAT_4a00b954 + 4) + 0x3c);
}



// Address: 4a00b958

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_4a00b958(int param_1)

{
  int iVar1;
  
  if (param_1 == 1) {
    FUN_4a008004(PTR_s_Can_never_set_bucket_1_in_releas_4a00b990);
    iVar1 = host_s3eDebugIsDebuggerPresent_thumb();
    if (iVar1 != 0) {
      _DAT_fffffff4 = 0;
    }
  }
  iVar1 = *(int *)(PTR_DAT_4a00b994 + 4);
  *(int *)(iVar1 + 0x3c) = param_1;
  *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(*(int *)(iVar1 + 8) + param_1 * 0x28 + 4);
  return;
}



// Address: 4a00b998

char * FUN_4a00b998(char *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_4a0013e0();
  pcVar2 = param_1 + iVar1;
  do {
    if (pcVar2 <= param_1) goto LAB_4a00b9d0;
    pcVar2 = pcVar2 + -1;
  } while ((*pcVar2 != '/') && (*pcVar2 != '\\'));
  for (; (param_1 + 1 < pcVar2 && ((pcVar2[-1] == '/' || (pcVar2[-1] == '\\'))));
      pcVar2 = pcVar2 + -1) {
  }
LAB_4a00b9d0:
  if (param_1 != param_2) {
    FUN_4a0012bc(param_2,param_1);
  }
  param_2[(int)pcVar2 - (int)param_1] = '\0';
  return param_2;
}



// Address: 4a00b9ea

undefined1 * FUN_4a00b9ea(char *param_1,undefined1 *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  iVar1 = FUN_4a0013e0();
  pcVar3 = param_1 + iVar1 + -1;
  if (param_1[iVar1 + -1] != '.') {
    do {
      pcVar2 = pcVar3 + -1;
      if (*pcVar2 == '.') {
        FUN_4a0012bc(param_2,pcVar3);
        return param_2;
      }
      pcVar3 = pcVar2;
    } while (param_1 < pcVar2);
  }
  *param_2 = 0;
  return param_2;
}



// Address: 4a00ba22

int FUN_4a00ba22(char *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar5;
  undefined1 auStack_a0 [128];
  char *pcStack_20;
  int local_1c;
  int iStack_18;
  char *pcVar4;
  
  pcStack_20 = param_1;
  local_1c = param_2;
  iStack_18 = param_3;
  iVar2 = FUN_4a0013e0();
  pcVar4 = param_1 + iVar2;
  pcVar5 = (char *)0x0;
  while (((pcVar3 = pcVar4 + -1, param_1 <= pcVar3 && (cVar1 = *pcVar3, cVar1 != '/')) &&
         (cVar1 != '\\'))) {
    pcVar4 = pcVar3;
    if (cVar1 == '.') {
      pcVar5 = pcVar3;
    }
  }
  thunk_FUN_4a001368(auStack_a0,pcVar4,0x7f);
  FUN_4a16303e(local_1c,auStack_a0,0x80);
  if ((param_3 == 0) && (pcVar5 != (char *)0x0)) {
    pcVar5[(local_1c - (int)pcVar3) + -1] = '\0';
  }
  return local_1c;
}



// Address: 4a00ba7c

bool FUN_4a00ba7c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_4a0015c0(param_1,&DAT_4a00ba90);
  return iVar1 != 0;
}



// Address: 4a00ba94

int FUN_4a00ba94(int param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar1 = FUN_4a0013e0();
  iVar2 = FUN_4a0013e0(param_2);
  if (iVar1 + 1 < param_3) {
    if ((iVar1 != 0) && (iVar2 != 0)) {
      puVar3 = (undefined1 *)(param_1 + iVar1);
      if ((puVar3[-1] == '/') || (puVar3[-1] == '\\')) {
        if ((*param_2 == '/') || (*param_2 == '\\')) {
          param_2 = param_2 + 1;
        }
      }
      else if ((*param_2 != '/') && (*param_2 != '\\')) {
        *puVar3 = 0x2f;
        puVar3[1] = 0;
      }
    }
    FUN_4a163010(param_1,param_2,param_3);
  }
  else {
    *(undefined1 *)(param_1 + param_3 + -1) = 0;
  }
  return param_1;
}



// Address: 4a00bb00

char * FUN_4a00bb00(char *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar5 = FUN_4a0013e0();
  if (iVar5 == 0) {
    return param_1;
  }
  for (iVar9 = 0; iVar9 < iVar5; iVar9 = iVar9 + 1) {
    if (param_1[iVar9] == '\\') {
      param_1[iVar9] = '/';
    }
    if (param_2 == 0) {
      cVar4 = FUN_4a000c88(param_1[iVar9]);
      param_1[iVar9] = cVar4;
    }
  }
  cVar4 = *param_1;
  iVar9 = FUN_4a0015c0(param_1,&DAT_4a00bce4);
  pcVar8 = param_1;
  if (iVar9 != 0) {
    pcVar8 = (char *)(iVar9 + 3);
  }
  iVar9 = (int)pcVar8 - (int)param_1;
  iVar5 = iVar5 - iVar9;
  while (*pcVar8 == '/') {
    thunk_FUN_4a00105c(pcVar8,pcVar8 + 1,iVar5);
    iVar5 = iVar5 + -1;
  }
  for (iVar10 = 0; iVar10 < iVar5 + -1; iVar10 = iVar10 + 1) {
    if (((pcVar8[iVar10] == '/') && (pcVar6 = pcVar8 + iVar10, pcVar6[1] == '.')) &&
       ((iVar10 == iVar5 + -2 || (pcVar6[2] == '/')))) {
      thunk_FUN_4a00105c(pcVar6,pcVar6 + 2,(iVar5 - iVar10) + -1);
      iVar5 = iVar5 + -2;
      iVar10 = iVar10 + -1;
    }
  }
  if ((*pcVar8 == '.') && (1 < iVar5)) {
    if (pcVar8[1] == '/') {
      thunk_FUN_4a00105c(pcVar8,pcVar8 + 2,iVar5 + -1);
      iVar5 = iVar5 + -2;
      goto LAB_4a00bbc6;
    }
  }
  else {
LAB_4a00bbc6:
    if ((iVar5 == 0) || (*pcVar8 != '.')) goto LAB_4a00bbda;
  }
  if (pcVar8[1] == '\0') {
    iVar5 = iVar5 + -1;
    *pcVar8 = '\0';
  }
LAB_4a00bbda:
  bVar3 = false;
  if ((0 < iVar5) && (pcVar8[1] == ':')) {
    bVar3 = true;
  }
  bVar1 = false;
  for (iVar10 = 0; iVar10 < iVar5; iVar10 = iVar10 + 1) {
    if (pcVar8[iVar10] == '/') {
      if (bVar1) {
        thunk_FUN_4a00105c(pcVar8 + iVar10,pcVar8 + iVar10 + 1,iVar5 - iVar10);
        iVar5 = iVar5 + -1;
        iVar10 = iVar10 + -1;
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
    }
  }
  do {
    iVar10 = 0;
    iVar12 = 0;
    do {
      do {
        iVar13 = iVar12;
        iVar7 = iVar10;
        if (iVar5 + -3 < iVar13) {
          for (; (0 < iVar5 &&
                 (((iVar10 = FUN_4a000c72(pcVar8[iVar5 + -1]), iVar10 != 0 ||
                   (pcVar8[iVar5 + -1] == '/')) || (pcVar8[iVar5 + -1] == '\r'))));
              iVar5 = iVar5 + -1) {
            pcVar8[iVar5 + -1] = '\0';
          }
          if (iVar9 == 0 && iVar5 == 0) {
            if (cVar4 == '/') {
              cVar4 = '/';
            }
            else {
              cVar4 = '.';
            }
            *pcVar8 = cVar4;
            iVar5 = iVar5 + 1;
            pcVar8[1] = '\0';
          }
          if (0x7f < iVar5 + iVar9) {
            pcVar8[0x7f] = '\0';
          }
          return param_1;
        }
        iVar11 = iVar13 + 1;
        iVar10 = iVar7;
        iVar12 = iVar11;
      } while (((pcVar8[iVar13] != '/') ||
               (iVar10 = iVar11, iVar12 = iVar13 + 2, pcVar8[iVar11] != '.')) ||
              ((iVar12 = iVar13 + 3, pcVar8[iVar13 + 2] != '.' ||
               ((iVar12 != iVar5 && (pcVar6 = pcVar8 + iVar12, iVar12 = iVar13 + 4, *pcVar6 != '/'))
               ))));
      bVar1 = false;
      if ((bVar3) && ((iVar7 + 1 < iVar5 && (pcVar8[iVar7 + 1] == ':')))) {
        bVar1 = true;
      }
      bVar2 = false;
      if (((pcVar8[iVar7] == '.') && (pcVar8[iVar7 + 1] == '.')) && (pcVar8[iVar7 + 2] == '/')) {
        bVar2 = true;
      }
    } while (bVar1 || bVar2);
    thunk_FUN_4a00105c(pcVar8 + iVar7,pcVar8 + iVar12,(iVar5 - iVar12) + 1);
    iVar5 = iVar5 - (iVar12 - iVar7);
  } while( true );
}



// Address: 4a00bce8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a00bce8(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  ushort *puVar23;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar24;
  
  uVar18 = param_1 - 3;
  iVar2 = *(int *)(*(int *)PTR_DAT_4a00c8a4 + 0x354);
  uVar17 = param_3 - 3;
  uVar19 = param_2 - 3;
  uVar20 = param_4 - 3;
  if (iVar2 == 1) {
    uVar18 = param_1 - 0xb;
    uVar17 = param_3 - 0xb;
  }
  else if (iVar2 == 2) {
    uVar18 = param_1 - 0xb;
    uVar17 = param_3 - 0xb;
    uVar19 = param_2 - 0xb;
    uVar20 = param_4 - 0xb;
  }
  else if (iVar2 == 3) {
    uVar19 = param_2 - 0xb;
    uVar20 = param_4 - 0xb;
  }
  iVar3 = *(int *)(PTR_LAB_4a00c8a8 + 0x18) + -1;
  iVar4 = *(int *)(PTR_LAB_4a00c8a8 + 0x14);
  iVar12 = *(int *)(PTR_LAB_4a00c8a8 + 0x20) + -1;
  iVar13 = *(int *)(PTR_LAB_4a00c8a8 + 0x1c);
  uVar5 = iVar3 * 8 + 4;
  uVar6 = iVar12 * 8 + 4;
  uVar7 = iVar4 * 8 - 3;
  uVar8 = iVar13 * 8 - 3;
  iVar15 = *(int *)(PTR_LAB_4a00c8a8 + 0x38);
  iVar2 = *(int *)(PTR_LAB_4a00c8a8 + 0x48);
  uVar16 = (uint)(*(byte *)(iVar2 + ((param_5 & 0xffffff) >> 0x13)) >> 1) |
           (uint)*(byte *)(iVar2 + ((param_5 & 0xffff) >> 0xb)) << 5 |
           (*(byte *)(iVar2 + ((param_5 & 0xff) >> 3)) >> 1 & 0x1fff9f) << 0xb;
  iVar2 = (int)(uVar17 + 3) >> 3;
  iVar22 = *(int *)(PTR_LAB_4a00c8a8 + 0x40);
  iVar21 = (int)(uVar19 + 3) >> 3;
  iVar10 = (int)(uVar20 + 3) >> 3;
  iVar14 = (int)(uVar18 + 3) >> 3;
  uVar11 = (ushort)uVar16;
  if (iVar21 == iVar10) {
    if (iVar21 < iVar4) {
      return;
    }
    if (iVar3 < iVar21) {
      return;
    }
    iVar10 = iVar2;
    if (iVar14 < iVar2) {
      iVar10 = iVar14;
    }
    if ((iVar13 < iVar10) && (iVar13 = iVar2, iVar14 < iVar2)) {
      iVar13 = iVar14;
    }
    iVar10 = iVar2;
    if (iVar2 < iVar14) {
      iVar10 = iVar14;
    }
    if ((iVar10 < iVar12) && (iVar12 = iVar14, iVar14 <= iVar2)) {
      iVar12 = iVar2;
    }
    if (iVar12 < iVar13) {
      return;
    }
    puVar23 = (ushort *)(iVar13 * 2 + iVar15 * iVar21 * 2 + iVar22);
    if (param_6 == 0) {
      uVar17 = (iVar12 - iVar13) + 1;
      if ((int)uVar17 < 1) {
        return;
      }
      puVar23 = puVar23 + -1;
      for (uVar18 = uVar17 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        puVar23 = puVar23 + 1;
        *puVar23 = uVar11;
      }
      iVar2 = (int)uVar17 >> 2;
      if (iVar2 != 0) {
        do {
          puVar23[1] = uVar11;
          puVar23[2] = uVar11;
          puVar23[3] = uVar11;
          iVar2 = iVar2 + -1;
          puVar23 = puVar23 + 4;
          *puVar23 = uVar11;
        } while (iVar2 != 0);
        return;
      }
      return;
    }
    uVar17 = (iVar12 - iVar13) + 1;
    if ((int)uVar17 < 1) {
      return;
    }
    puVar9 = puVar23 + -1;
    if ((uVar17 & 1) != 0) {
      *puVar23 = (short)((uVar16 & 0xfffff7df) >> 1) + (short)((*puVar23 & 0xfffff7df) >> 1);
      puVar9 = puVar23;
    }
    iVar2 = (int)uVar17 >> 1;
    if (iVar2 != 0) {
      do {
        iVar2 = iVar2 + -1;
        sVar1 = (short)((uVar16 & 0xfffff7df) >> 1);
        puVar9[1] = sVar1 + (short)((puVar9[1] & 0xfffff7df) >> 1);
        puVar23 = puVar9 + 2;
        puVar9 = puVar9 + 2;
        *puVar9 = sVar1 + (short)((*puVar23 & 0xfffff7df) >> 1);
      } while (iVar2 != 0);
      return;
    }
    return;
  }
  if (iVar14 == iVar2) {
    if (iVar14 < iVar13) {
      return;
    }
    if (iVar12 < iVar14) {
      return;
    }
    iVar2 = iVar10;
    if (iVar21 < iVar10) {
      iVar2 = iVar21;
    }
    if ((iVar4 < iVar2) && (iVar4 = iVar10, iVar21 < iVar10)) {
      iVar4 = iVar21;
    }
    iVar2 = iVar10;
    if (iVar10 < iVar21) {
      iVar2 = iVar21;
    }
    if ((iVar2 < iVar3) && (iVar3 = iVar21, iVar21 <= iVar10)) {
      iVar3 = iVar10;
    }
    if (iVar3 < iVar4) {
      return;
    }
    iVar22 = iVar22 + iVar14 * 2 + iVar4 * iVar15 * 2;
    if (param_6 == 0) {
      uVar17 = (iVar3 - iVar4) + 1;
      if ((int)uVar17 < 1) {
        return;
      }
      puVar23 = (ushort *)(iVar22 + iVar15 * -2);
      for (uVar18 = uVar17 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        puVar23 = puVar23 + iVar15;
        *puVar23 = uVar11;
      }
      iVar2 = (int)uVar17 >> 2;
      if (iVar2 != 0) {
        do {
          puVar23[iVar15] = uVar11;
          puVar23[iVar15 * 2] = uVar11;
          puVar9 = puVar23 + iVar15 * 3;
          puVar23 = puVar23 + iVar15 * 4;
          *puVar9 = uVar11;
          iVar2 = iVar2 + -1;
          *puVar23 = uVar11;
        } while (iVar2 != 0);
        return;
      }
      return;
    }
    uVar17 = (iVar3 - iVar4) + 1;
    if ((int)uVar17 < 1) {
      return;
    }
    puVar23 = (ushort *)(iVar22 + iVar15 * -2);
    if ((uVar17 & 1) != 0) {
      puVar23 = puVar23 + iVar15;
      *puVar23 = (short)((uVar16 & 0xfffff7df) >> 1) + (short)((*puVar23 & 0xfffff7df) >> 1);
    }
    iVar2 = (int)uVar17 >> 1;
    if (iVar2 != 0) {
      do {
        puVar9 = puVar23 + iVar15;
        puVar23 = puVar23 + iVar15 * 2;
        iVar2 = iVar2 + -1;
        sVar1 = (short)((uVar16 & 0xfffff7df) >> 1);
        *puVar9 = sVar1 + (short)((*puVar9 & 0xfffff7df) >> 1);
        *puVar23 = sVar1 + (short)((*puVar23 & 0xfffff7df) >> 1);
      } while (iVar2 != 0);
      return;
    }
    return;
  }
  iVar2 = uVar17 - uVar18;
  iVar21 = uVar20 - uVar19;
  if ((int)uVar18 < (int)uVar8) {
    if ((int)uVar17 < (int)uVar8) {
      return;
    }
    iVar10 = FUN_4a0015f0(iVar21 * (uVar8 - uVar18),iVar2);
    uVar19 = uVar19 + iVar10;
    uVar18 = uVar8;
  }
  else if ((int)uVar17 < (int)uVar8) {
    iVar10 = FUN_4a0015f0(iVar21 * (uVar8 - uVar17),iVar2);
    uVar20 = uVar20 + iVar10;
    uVar17 = uVar8;
  }
  if ((int)uVar6 < (int)uVar18) {
    if ((int)uVar6 < (int)uVar17) {
      return;
    }
    iVar10 = FUN_4a0015f0(iVar21 * (uVar6 - uVar18),iVar2);
    uVar19 = uVar19 + iVar10;
    uVar18 = uVar6;
  }
  else if ((int)uVar6 < (int)uVar17) {
    iVar10 = FUN_4a0015f0(iVar21 * (uVar6 - uVar17),iVar2);
    uVar20 = uVar20 + iVar10;
    uVar17 = uVar6;
  }
  if ((int)uVar19 < (int)uVar7) {
    if ((int)uVar20 < (int)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x4a00c238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    iVar10 = FUN_4a0015f0((uVar7 - uVar19) * iVar2,iVar21);
    uVar18 = uVar18 + iVar10;
    uVar19 = uVar7;
  }
  else if ((int)uVar20 < (int)uVar7) {
    iVar10 = FUN_4a0015f0((uVar7 - uVar20) * iVar2,iVar21);
    uVar17 = uVar17 + iVar10;
    uVar20 = uVar7;
  }
  if ((int)uVar5 < (int)uVar19) {
    if ((int)uVar5 < (int)uVar20) {
                    /* WARNING: Could not recover jumptable at 0x4a00c2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    iVar10 = FUN_4a0015f0((uVar5 - uVar19) * iVar2,iVar21);
    uVar18 = uVar18 + iVar10;
    uVar19 = uVar5;
  }
  else if ((int)uVar5 < (int)uVar20) {
    iVar10 = FUN_4a0015f0((uVar5 - uVar20) * iVar2,iVar21);
    uVar17 = uVar17 + iVar10;
    uVar20 = uVar5;
  }
  iVar10 = iVar21;
  if (iVar21 < 1) {
    iVar10 = -iVar21;
  }
  iVar14 = iVar2;
  if (iVar2 < 1) {
    iVar14 = -iVar2;
  }
  if (iVar14 <= iVar10) {
    if (uVar20 == uVar19) {
                    /* WARNING: Could not recover jumptable at 0x4a00c5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    uVar5 = uVar17;
    uVar6 = uVar19;
    if ((int)uVar20 < (int)uVar19) {
      uVar5 = uVar18;
      uVar18 = uVar17;
      uVar6 = uVar20;
      uVar20 = uVar19;
    }
    iVar12 = uVar18 * 0x10000 + 0x3ffff;
    iVar3 = FUN_4a0015f0(iVar2 * 0x10000,iVar21);
    iVar2 = (int)(uVar20 + 3) >> 3;
    iVar21 = (int)(uVar18 + 3) >> 3;
    bVar24 = (uVar6 & 7) == 0;
    iVar10 = (int)(uVar5 + 3) >> 3;
    iVar14 = uVar5 + 3;
    if (bVar24) {
      iVar14 = iVar12;
    }
    iVar4 = (int)(uVar6 + 3) >> 3;
    iVar13 = 0;
    if (!bVar24) {
      iVar13 = iVar4 * 8 - uVar6;
      iVar14 = iVar13 * iVar3 + iVar12;
    }
    uVar18 = iVar2 - iVar4;
    iVar14 = iVar14 >> 3;
    iVar22 = iVar22 + iVar4 * iVar15 * 2;
    uVar17 = uVar18;
    if (iVar13 < 0) {
      if (param_6 == 0) {
        *(ushort *)(iVar22 + iVar21 * 2) = uVar11;
      }
      else {
        puVar23 = (ushort *)(iVar22 + iVar21 * 2);
        *puVar23 = (short)((uVar16 & 0xfffff7df) >> 1) + (short)((*puVar23 & 0xfffff7df) >> 1);
      }
      iVar14 = iVar14 + iVar3;
      iVar22 = iVar22 + iVar15 * 2;
      uVar17 = uVar18 - 1;
    }
    if (param_6 == 0) {
      if (0 < (int)uVar17) {
        uVar19 = uVar17 & 1;
        if (uVar19 == 1) {
          *(ushort *)(iVar22 + (iVar14 >> 0x10) * 2) = uVar11;
        }
        uVar5 = (uint)(uVar19 == 1);
        for (; (int)uVar19 < (int)uVar17; uVar19 = uVar19 + 2) {
          iVar21 = uVar5 + 1;
          *(ushort *)(iVar22 + (iVar15 * uVar5 + ((int)(iVar3 * uVar5 + iVar14) >> 0x10)) * 2) =
               uVar11;
          uVar5 = uVar5 + 2;
          *(ushort *)(iVar22 + (iVar15 * iVar21 + (iVar3 * iVar21 + iVar14 >> 0x10)) * 2) = uVar11;
        }
        goto LAB_4a00c7e4;
      }
    }
    else if (0 < (int)uVar17) {
      uVar19 = uVar17 & 1;
      if (uVar19 == 1) {
        puVar23 = (ushort *)(iVar22 + (iVar14 >> 0x10) * 2);
        *puVar23 = (short)((*puVar23 & 0xfffff7df) >> 1) + (short)((uVar16 & 0xfffff7df) >> 1);
      }
      uVar5 = (uint)(uVar19 == 1);
      if ((int)uVar19 < (int)uVar17) {
        do {
          puVar23 = (ushort *)
                    (iVar22 + (iVar15 * uVar5 + ((int)(iVar3 * uVar5 + iVar14) >> 0x10)) * 2);
          uVar19 = uVar19 + 2;
          *puVar23 = (short)((*puVar23 & 0xfffff7df) >> 1) + (short)((uVar16 & 0xfffff7df) >> 1);
          puVar23 = (ushort *)
                    (iVar22 + (iVar15 * (uVar5 + 1) + ((int)(iVar3 * (uVar5 + 1) + iVar14) >> 0x10))
                              * 2);
          uVar5 = uVar5 + 2;
          *puVar23 = (short)((*puVar23 & 0xfffff7df) >> 1) + (short)((uVar16 & 0xfffff7df) >> 1);
        } while ((int)uVar19 < (int)uVar17);
      }
LAB_4a00c7e4:
      iVar22 = iVar22 + uVar17 * iVar15 * 2;
      iVar14 = iVar14 + uVar17 * iVar3;
    }
    if ((int)uVar18 < 1) {
      return;
    }
    if (-1 < (int)(iVar2 * 8 - uVar20)) {
      if (param_6 != 0) {
        puVar23 = (ushort *)(iVar22 + iVar10 * 2);
        uVar11 = (short)((uVar16 & 0xfffff7df) >> 1) + (short)((*puVar23 & 0xfffff7df) >> 1);
        goto LAB_4a00c880;
      }
      puVar23 = (ushort *)(iVar22 + iVar10 * 2);
      goto LAB_4a00c894;
    }
    if (param_6 == 0) {
      *(ushort *)(iVar22 + (iVar14 >> 0x10) * 2) = uVar11;
      return;
    }
    puVar23 = (ushort *)(iVar22 + (iVar14 >> 0x10) * 2);
    uVar11 = (short)((uVar16 & 0xfffff7df) >> 1) + (short)((*puVar23 & 0xfffff7df) >> 1);
    goto LAB_4a00c880;
  }
  if (uVar17 == uVar18) {
                    /* WARNING: Could not recover jumptable at 0x4a00c32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uVar5 = uVar17;
  uVar6 = uVar19;
  if ((int)uVar17 < (int)uVar18) {
    uVar5 = uVar18;
    uVar18 = uVar17;
    uVar6 = uVar20;
    uVar20 = uVar19;
  }
  iVar3 = uVar6 * 0x10000 + 0x3ffff;
  iVar4 = FUN_4a0015f0(iVar21 * 0x10000,iVar2);
  iVar2 = (int)(uVar18 + 3) >> 3;
  iVar21 = (int)(uVar5 + 3) >> 3;
  iVar10 = (int)(uVar6 + 3) >> 3;
  iVar14 = (int)(uVar20 + 3) >> 3;
  bVar24 = (uVar18 & 7) == 0;
  iVar12 = iVar14;
  if (bVar24) {
    iVar12 = iVar3;
  }
  iVar13 = 0;
  if (!bVar24) {
    iVar13 = iVar2 * 8 - uVar18;
    iVar12 = iVar13 * iVar4 + iVar3;
  }
  iVar12 = iVar12 >> 3;
  uVar18 = iVar21 - iVar2;
  iVar22 = iVar22 + iVar2 * 2;
  uVar17 = uVar18;
  if (iVar13 < 0) {
    if (param_6 == 0) {
      *(ushort *)(iVar22 + iVar10 * iVar15 * 2) = uVar11;
    }
    else {
      puVar23 = (ushort *)(iVar22 + iVar10 * iVar15 * 2);
      *puVar23 = (short)((uVar16 & 0xfffff7df) >> 1) + (short)((*puVar23 & 0xfffff7df) >> 1);
    }
    iVar12 = iVar12 + iVar4;
    iVar22 = iVar22 + 2;
    uVar17 = uVar18 - 1;
  }
  if (param_6 == 0) {
    if (0 < (int)uVar17) {
      uVar19 = uVar17 & 1;
      if (uVar19 == 1) {
        *(ushort *)(iVar22 + (iVar12 >> 0x10) * iVar15 * 2) = uVar11;
      }
      uVar20 = (uint)(uVar19 == 1);
      for (; (int)uVar19 < (int)uVar17; uVar19 = uVar19 + 2) {
        iVar2 = uVar20 + 1;
        *(ushort *)(iVar22 + (iVar15 * ((int)(iVar4 * uVar20 + iVar12) >> 0x10) + uVar20) * 2) =
             uVar11;
        uVar20 = uVar20 + 2;
        *(ushort *)(iVar22 + (iVar15 * (iVar4 * iVar2 + iVar12 >> 0x10) + iVar2) * 2) = uVar11;
      }
      goto LAB_4a00c528;
    }
  }
  else if (0 < (int)uVar17) {
    uVar19 = uVar17 & 1;
    if (uVar19 == 1) {
      puVar23 = (ushort *)(iVar22 + (iVar12 >> 0x10) * iVar15 * 2);
      *puVar23 = (short)((uVar16 & 0xfffff7df) >> 1) + (short)((*puVar23 & 0xfffff7df) >> 1);
    }
    uVar20 = (uint)(uVar19 == 1);
    if ((int)uVar19 < (int)uVar17) {
      do {
        puVar23 = (ushort *)
                  (iVar22 + (iVar15 * ((int)(iVar4 * uVar20 + iVar12) >> 0x10) + uVar20) * 2);
        uVar19 = uVar19 + 2;
        sVar1 = (short)((uVar16 & 0xfffff7df) >> 1);
        *puVar23 = sVar1 + (short)((*puVar23 & 0xfffff7df) >> 1);
        puVar23 = (ushort *)
                  (iVar22 + (iVar15 * ((int)(iVar4 * (uVar20 + 1) + iVar12) >> 0x10) + uVar20 + 1) *
                            2);
        uVar20 = uVar20 + 2;
        *puVar23 = sVar1 + (short)((*puVar23 & 0xfffff7df) >> 1);
      } while ((int)uVar19 < (int)uVar17);
    }
LAB_4a00c528:
    iVar22 = iVar22 + uVar17 * 2;
    iVar12 = iVar12 + uVar17 * iVar4;
  }
  if ((int)uVar18 < 1) {
    return;
  }
  if ((int)(iVar21 * 8 - uVar5) < 0) {
    if (param_6 == 0) {
      *(ushort *)(iVar22 + iVar15 * (iVar12 >> 0x10) * 2) = uVar11;
      return;
    }
    puVar23 = (ushort *)(iVar22 + iVar15 * (iVar12 >> 0x10) * 2);
    uVar11 = (short)((uVar16 & 0xfffff7df) >> 1) + (short)((*puVar23 & 0xfffff7df) >> 1);
  }
  else {
    if (param_6 == 0) {
      puVar23 = (ushort *)(iVar22 + iVar15 * iVar14 * 2);
LAB_4a00c894:
      *puVar23 = uVar11;
      return;
    }
    puVar23 = (ushort *)(iVar22 + iVar15 * iVar14 * 2);
    uVar11 = (short)((uVar16 & 0xfffff7df) >> 1) + (short)((*puVar23 & 0xfffff7df) >> 1);
  }
LAB_4a00c880:
  *puVar23 = uVar11;
  return;
}



// Address: 4a00c8ac

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a00c8ac(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  
  uVar13 = param_1 - 3;
  iVar2 = *(int *)(*(int *)PTR_DAT_4a00d270 + 0x354);
  uVar16 = param_3 - 3;
  uVar14 = param_2 - 3;
  uVar17 = param_4 - 3;
  if (iVar2 == 1) {
    uVar13 = param_1 - 0xb;
    uVar16 = param_3 - 0xb;
  }
  else if (iVar2 == 2) {
    uVar13 = param_1 - 0xb;
    uVar16 = param_3 - 0xb;
    uVar14 = param_2 - 0xb;
    uVar17 = param_4 - 0xb;
  }
  else if (iVar2 == 3) {
    uVar14 = param_2 - 0xb;
    uVar17 = param_4 - 0xb;
  }
  iVar3 = *(int *)(PTR_LAB_4a00d274 + 0x2c) + -1;
  iVar11 = *(int *)(PTR_LAB_4a00d274 + 0x38);
  iVar19 = *(int *)(PTR_LAB_4a00d274 + 0x48);
  iVar2 = (int)(uVar16 + 3) >> 3;
  iVar20 = *(int *)(PTR_LAB_4a00d274 + 0x30) + -1;
  uVar12 = (uint)(*(byte *)(iVar19 + ((param_5 & 0xffffff) >> 0x13)) >> 1) |
           (uint)*(byte *)(iVar19 + ((param_5 & 0xffff) >> 0xb)) << 5 |
           (*(byte *)(iVar19 + ((param_5 & 0xff) >> 3)) >> 1 & 0x1fff9f) << 0xb;
  iVar18 = *(int *)(PTR_LAB_4a00d274 + 0x40);
  iVar19 = (int)(uVar14 + 3) >> 3;
  iVar8 = (int)(uVar17 + 3) >> 3;
  iVar9 = (int)(uVar13 + 3) >> 3;
  uVar7 = (ushort)uVar12;
  if (iVar19 == iVar8) {
    if (iVar19 < 0) {
      return;
    }
    if (iVar20 < iVar19) {
      return;
    }
    iVar8 = iVar2;
    if (iVar9 < iVar2) {
      iVar8 = iVar9;
    }
    if (iVar8 < 1) {
      iVar8 = 0;
    }
    else {
      iVar8 = iVar2;
      if (iVar9 < iVar2) {
        iVar8 = iVar9;
      }
    }
    iVar20 = iVar2;
    if (iVar2 < iVar9) {
      iVar20 = iVar9;
    }
    if ((iVar20 < iVar3) && (iVar3 = iVar9, iVar9 <= iVar2)) {
      iVar3 = iVar2;
    }
    if (iVar3 < iVar8) {
      return;
    }
    puVar4 = (ushort *)(iVar8 * 2 + iVar11 * iVar19 * 2 + iVar18);
    if (param_6 == 0) {
      uVar16 = (iVar3 - iVar8) + 1;
      if ((int)uVar16 < 1) {
        return;
      }
      puVar4 = puVar4 + -1;
      for (uVar17 = uVar16 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        puVar4 = puVar4 + 1;
        *puVar4 = uVar7;
      }
      iVar2 = (int)uVar16 >> 2;
      if (iVar2 != 0) {
        do {
          puVar4[1] = uVar7;
          puVar4[2] = uVar7;
          puVar4[3] = uVar7;
          iVar2 = iVar2 + -1;
          puVar4 = puVar4 + 4;
          *puVar4 = uVar7;
        } while (iVar2 != 0);
        return;
      }
      return;
    }
    uVar16 = (iVar3 - iVar8) + 1;
    if ((int)uVar16 < 1) {
      return;
    }
    puVar5 = puVar4 + -1;
    if ((uVar16 & 1) != 0) {
      *puVar4 = (short)((uVar12 & 0xfffff7df) >> 1) + (short)((*puVar4 & 0xfffff7df) >> 1);
      puVar5 = puVar4;
    }
    iVar2 = (int)uVar16 >> 1;
    if (iVar2 != 0) {
      do {
        iVar2 = iVar2 + -1;
        sVar1 = (short)((uVar12 & 0xfffff7df) >> 1);
        puVar5[1] = sVar1 + (short)((puVar5[1] & 0xfffff7df) >> 1);
        puVar4 = puVar5 + 2;
        puVar5 = puVar5 + 2;
        *puVar5 = sVar1 + (short)((*puVar4 & 0xfffff7df) >> 1);
      } while (iVar2 != 0);
      return;
    }
    return;
  }
  if (iVar9 == iVar2) {
    if (iVar9 < 0) {
      return;
    }
    if (iVar3 < iVar9) {
      return;
    }
    iVar2 = iVar8;
    if (iVar19 < iVar8) {
      iVar2 = iVar19;
    }
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar8;
      if (iVar19 < iVar8) {
        iVar2 = iVar19;
      }
    }
    iVar3 = iVar8;
    if (iVar8 < iVar19) {
      iVar3 = iVar19;
    }
    if ((iVar3 < iVar20) && (iVar20 = iVar19, iVar19 <= iVar8)) {
      iVar20 = iVar8;
    }
    if (iVar20 < iVar2) {
      return;
    }
    iVar18 = iVar9 * 2 + iVar2 * iVar11 * 2 + iVar18;
    if (param_6 != 0) {
      uVar16 = (iVar20 - iVar2) + 1;
      if ((int)uVar16 < 1) {
        return;
      }
      puVar4 = (ushort *)(iVar18 + iVar11 * -2);
      if ((uVar16 & 1) != 0) {
        puVar4 = puVar4 + iVar11;
        *puVar4 = (short)((uVar12 & 0xfffff7df) >> 1) + (short)((*puVar4 & 0xfffff7df) >> 1);
      }
      iVar2 = (int)uVar16 >> 1;
      if (iVar2 != 0) {
        do {
          puVar5 = puVar4 + iVar11;
          puVar4 = puVar4 + iVar11 * 2;
          iVar2 = iVar2 + -1;
          sVar1 = (short)((uVar12 & 0xfffff7df) >> 1);
          *puVar5 = sVar1 + (short)((*puVar5 & 0xfffff7df) >> 1);
          *puVar4 = sVar1 + (short)((*puVar4 & 0xfffff7df) >> 1);
        } while (iVar2 != 0);
        return;
      }
      return;
    }
    uVar16 = (iVar20 - iVar2) + 1;
    if ((int)uVar16 < 1) {
      return;
    }
    puVar4 = (ushort *)(iVar18 + iVar11 * -2);
    for (uVar17 = uVar16 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      puVar4 = puVar4 + iVar11;
      *puVar4 = uVar7;
    }
    iVar2 = (int)uVar16 >> 2;
    if (iVar2 != 0) {
      do {
        puVar4[iVar11] = uVar7;
        puVar4[iVar11 * 2] = uVar7;
        puVar5 = puVar4 + iVar11 * 3;
        puVar4 = puVar4 + iVar11 * 4;
        *puVar5 = uVar7;
        iVar2 = iVar2 + -1;
        *puVar4 = uVar7;
      } while (iVar2 != 0);
      return;
    }
    return;
  }
  iVar19 = uVar17 - uVar14;
  iVar8 = uVar16 - uVar13;
  iVar2 = iVar19;
  if (iVar19 < 1) {
    iVar2 = -iVar19;
  }
  iVar9 = iVar8;
  if (iVar8 < 1) {
    iVar9 = -iVar8;
  }
  if (iVar9 <= iVar2) {
    if (uVar17 == uVar14) {
      return;
    }
    uVar10 = uVar13;
    uVar15 = uVar14;
    if ((int)uVar17 < (int)uVar14) {
      uVar10 = uVar16;
      uVar15 = uVar17;
      uVar16 = uVar13;
      uVar17 = uVar14;
    }
    iVar20 = uVar10 * 0x10000 + 0x3ffff;
    iVar3 = FUN_4a0015f0(iVar8 * 0x10000);
    iVar2 = (int)(uVar17 + 3) >> 3;
    iVar19 = (int)(uVar10 + 3) >> 3;
    iVar8 = (int)(uVar16 + 3) >> 3;
    bVar22 = (uVar15 & 7) == 0;
    iVar9 = iVar8;
    if (bVar22) {
      iVar9 = iVar20;
    }
    iVar6 = (int)(uVar15 + 3) >> 3;
    iVar21 = 0;
    if (!bVar22) {
      iVar21 = iVar6 * 8 - uVar15;
      iVar9 = iVar21 * iVar3 + iVar20;
    }
    uVar13 = iVar2 - iVar6;
    iVar18 = iVar18 + iVar6 * iVar11 * 2;
    iVar9 = iVar9 >> 3;
    uVar16 = uVar13;
    if (iVar21 < 0) {
      if (param_6 == 0) {
        *(ushort *)(iVar18 + iVar19 * 2) = uVar7;
      }
      else {
        puVar4 = (ushort *)(iVar18 + iVar19 * 2);
        *puVar4 = (short)((uVar12 & 0xfffff7df) >> 1) + (short)((*puVar4 & 0xfffff7df) >> 1);
      }
      iVar9 = iVar9 + iVar3;
      iVar18 = iVar18 + iVar11 * 2;
      uVar16 = uVar13 - 1;
    }
    if (param_6 == 0) {
      if (0 < (int)uVar16) {
        uVar14 = uVar16 & 1;
        if (uVar14 == 1) {
          *(ushort *)(iVar18 + (iVar9 >> 0x10) * 2) = uVar7;
        }
        uVar10 = (uint)(uVar14 == 1);
        for (; (int)uVar14 < (int)uVar16; uVar14 = uVar14 + 2) {
          iVar19 = uVar10 + 1;
          *(ushort *)(iVar18 + (iVar11 * uVar10 + ((int)(iVar3 * uVar10 + iVar9) >> 0x10)) * 2) =
               uVar7;
          uVar10 = uVar10 + 2;
          *(ushort *)(iVar18 + (iVar11 * iVar19 + (iVar3 * iVar19 + iVar9 >> 0x10)) * 2) = uVar7;
        }
        goto LAB_4a00d1b0;
      }
    }
    else if (0 < (int)uVar16) {
      uVar14 = uVar16 & 1;
      if (uVar14 == 1) {
        puVar4 = (ushort *)(iVar18 + (iVar9 >> 0x10) * 2);
        *puVar4 = (short)((*puVar4 & 0xfffff7df) >> 1) + (short)((uVar12 & 0xfffff7df) >> 1);
      }
      uVar10 = (uint)(uVar14 == 1);
      if ((int)uVar14 < (int)uVar16) {
        do {
          puVar4 = (ushort *)
                   (iVar18 + (iVar11 * uVar10 + ((int)(iVar3 * uVar10 + iVar9) >> 0x10)) * 2);
          uVar14 = uVar14 + 2;
          *puVar4 = (short)((*puVar4 & 0xfffff7df) >> 1) + (short)((uVar12 & 0xfffff7df) >> 1);
          puVar4 = (ushort *)
                   (iVar18 + (iVar11 * (uVar10 + 1) + ((int)(iVar3 * (uVar10 + 1) + iVar9) >> 0x10))
                             * 2);
          uVar10 = uVar10 + 2;
          *puVar4 = (short)((*puVar4 & 0xfffff7df) >> 1) + (short)((uVar12 & 0xfffff7df) >> 1);
        } while ((int)uVar14 < (int)uVar16);
      }
LAB_4a00d1b0:
      iVar18 = iVar18 + uVar16 * iVar11 * 2;
      iVar9 = iVar9 + uVar16 * iVar3;
    }
    if ((int)uVar13 < 1) {
      return;
    }
    if ((int)(iVar2 * 8 - uVar17) < 0) {
      if (param_6 == 0) {
        *(ushort *)(iVar18 + (iVar9 >> 0x10) * 2) = uVar7;
        return;
      }
      puVar4 = (ushort *)(iVar18 + (iVar9 >> 0x10) * 2);
      uVar7 = (short)((uVar12 & 0xfffff7df) >> 1) + (short)((*puVar4 & 0xfffff7df) >> 1);
    }
    else {
      if (param_6 == 0) {
        *(ushort *)(iVar18 + iVar8 * 2) = uVar7;
        return;
      }
      puVar4 = (ushort *)(iVar18 + iVar8 * 2);
      uVar7 = (short)((uVar12 & 0xfffff7df) >> 1) + (short)((*puVar4 & 0xfffff7df) >> 1);
    }
    goto LAB_4a00d260;
  }
  if (uVar16 == uVar13) {
    return;
  }
  uVar10 = uVar13;
  uVar15 = uVar14;
  if ((int)uVar16 < (int)uVar13) {
    uVar10 = uVar16;
    uVar15 = uVar17;
    uVar16 = uVar13;
    uVar17 = uVar14;
  }
  iVar3 = uVar15 * 0x10000 + 0x3ffff;
  iVar6 = FUN_4a0015f0(iVar19 * 0x10000,iVar8);
  iVar2 = (int)(uVar10 + 3) >> 3;
  iVar19 = (int)(uVar16 + 3) >> 3;
  iVar8 = (int)(uVar15 + 3) >> 3;
  iVar9 = (int)(uVar17 + 3) >> 3;
  bVar22 = (uVar10 & 7) == 0;
  iVar20 = iVar9;
  if (bVar22) {
    iVar20 = iVar3;
  }
  iVar21 = 0;
  if (!bVar22) {
    iVar21 = iVar2 * 8 - uVar10;
    iVar20 = iVar21 * iVar6 + iVar3;
  }
  iVar20 = iVar20 >> 3;
  iVar18 = iVar18 + iVar2 * 2;
  uVar13 = iVar19 - iVar2;
  uVar17 = uVar13;
  if (iVar21 < 0) {
    if (param_6 == 0) {
      *(ushort *)(iVar18 + iVar8 * iVar11 * 2) = uVar7;
    }
    else {
      puVar4 = (ushort *)(iVar18 + iVar8 * iVar11 * 2);
      *puVar4 = (short)((uVar12 & 0xfffff7df) >> 1) + (short)((*puVar4 & 0xfffff7df) >> 1);
    }
    iVar20 = iVar20 + iVar6;
    iVar18 = iVar18 + 2;
    uVar17 = uVar13 - 1;
  }
  if (param_6 == 0) {
    if (0 < (int)uVar17) {
      uVar14 = uVar17 & 1;
      if (uVar14 == 1) {
        *(ushort *)(iVar18 + (iVar20 >> 0x10) * iVar11 * 2) = uVar7;
      }
      uVar10 = (uint)(uVar14 == 1);
      for (; (int)uVar14 < (int)uVar17; uVar14 = uVar14 + 2) {
        iVar2 = uVar10 + 1;
        *(ushort *)(iVar18 + (iVar11 * ((int)(iVar6 * uVar10 + iVar20) >> 0x10) + uVar10) * 2) =
             uVar7;
        uVar10 = uVar10 + 2;
        *(ushort *)(iVar18 + (iVar11 * (iVar6 * iVar2 + iVar20 >> 0x10) + iVar2) * 2) = uVar7;
      }
      goto LAB_4a00ceec;
    }
  }
  else if (0 < (int)uVar17) {
    uVar14 = uVar17 & 1;
    if (uVar14 == 1) {
      puVar4 = (ushort *)(iVar18 + (iVar20 >> 0x10) * iVar11 * 2);
      *puVar4 = (short)((uVar12 & 0xfffff7df) >> 1) + (short)((*puVar4 & 0xfffff7df) >> 1);
    }
    uVar10 = (uint)(uVar14 == 1);
    if ((int)uVar14 < (int)uVar17) {
      do {
        puVar4 = (ushort *)
                 (iVar18 + (iVar11 * ((int)(iVar6 * uVar10 + iVar20) >> 0x10) + uVar10) * 2);
        uVar14 = uVar14 + 2;
        sVar1 = (short)((uVar12 & 0xfffff7df) >> 1);
        *puVar4 = sVar1 + (short)((*puVar4 & 0xfffff7df) >> 1);
        puVar4 = (ushort *)
                 (iVar18 + (iVar11 * ((int)(iVar6 * (uVar10 + 1) + iVar20) >> 0x10) + uVar10 + 1) *
                           2);
        uVar10 = uVar10 + 2;
        *puVar4 = sVar1 + (short)((*puVar4 & 0xfffff7df) >> 1);
      } while ((int)uVar14 < (int)uVar17);
    }
LAB_4a00ceec:
    iVar18 = iVar18 + uVar17 * 2;
    iVar20 = iVar20 + uVar17 * iVar6;
  }
  if ((int)uVar13 < 1) {
    return;
  }
  if ((int)(iVar19 * 8 - uVar16) < 0) {
    if (param_6 == 0) {
      *(ushort *)(iVar18 + iVar11 * (iVar20 >> 0x10) * 2) = uVar7;
      return;
    }
    puVar4 = (ushort *)(iVar18 + iVar11 * (iVar20 >> 0x10) * 2);
    uVar7 = (short)((uVar12 & 0xfffff7df) >> 1) + (short)((*puVar4 & 0xfffff7df) >> 1);
  }
  else {
    if (param_6 == 0) {
      *(ushort *)(iVar18 + iVar11 * iVar9 * 2) = uVar7;
      return;
    }
    puVar4 = (ushort *)(iVar18 + iVar11 * iVar9 * 2);
    uVar7 = (short)((uVar12 & 0xfffff7df) >> 1) + (short)((*puVar4 & 0xfffff7df) >> 1);
  }
LAB_4a00d260:
  *puVar4 = uVar7;
  return;
}



// Address: 4a00d278

void FUN_4a00d278(void)

{
  int iVar1;
  undefined1 auStack_84 [132];
  
  if (*PTR_DAT_4a00d2b4 == '\0') {
    *PTR_DAT_4a00d2b4 = 1;
    iVar1 = host_s3eConfigGetString_thumb(s_derbh_4a00d2c4,s_autoload_4a00d2b8,auStack_84);
    if ((iVar1 == 0) && (iVar1 = host_s3eFileCheckExists_thumb(auStack_84), iVar1 != 0)) {
      FUN_4a14df64(auStack_84);
    }
  }
  return;
}



// Address: 4a00d2cc

void FUN_4a00d2cc(void)

{
  FUN_4a14dfdc();
  return;
}



// Address: 4a00d2e0

undefined4 FUN_4a00d2e0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_4a161570();
  thunk_FUN_4a001274(uVar1,param_2 * param_1);
  return uVar1;
}



// Address: 4a00d2fc

undefined4 FUN_4a00d2fc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  
  if ((10 < param_1 - 100U) || (iVar1 = FUN_4a161a80(param_1,0), iVar1 == -1)) {
    iVar2 = FUN_4a0350f8(param_1,1);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x10);
    }
    if ((iVar1 == 0) || (iVar1 = host_s3eFileClose_thumb(), iVar1 != 0)) {
      if (((param_1 != 0) && ((param_1 != 1 && (param_1 != 2)))) &&
         ((iVar2 == 0 || (*(int *)(iVar2 + 8) == 0)))) {
        puVar3 = (undefined4 *)thunk_FUN_4a0007f8();
        *puVar3 = 9;
        return 0xffffffff;
      }
    }
    else {
      iVar1 = 0;
      do {
        if (*(int *)(PTR_DAT_4a00d384 + iVar1 * 0x14) == param_1) {
          puVar4 = PTR_DAT_4a00d384 + iVar1 * 0x14;
          host_s3eFreeBase_thumb(*(undefined4 *)(puVar4 + 0xc));
          thunk_FUN_4a00121c(puVar4,0x14);
          return 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0x20);
    }
  }
  return 0;
}



// Address: 4a00d388

void FUN_4a00d388(void)

{
  host_s3eFreeBase_thumb();
  return;
}



// Address: 4a00d394

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_4a00d394(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = host_s3eMemoryGetInt_thumb(0);
  host_s3eMemorySetInt_thumb(0,7);
  iVar2 = host_s3eMallocBase_thumb(param_1);
  if (iVar2 == 0) {
    FUN_4a008004(s_CRT_out_of_memory___d__4a00d3dc,param_1);
    iVar3 = host_s3eDebugIsDebuggerPresent_thumb();
    if (iVar3 != 0) {
      _DAT_fffffff4 = 0;
    }
  }
  host_s3eMemorySetInt_thumb(0,uVar1);
  return iVar2;
}



// Address: 4a00d3f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_4a00d3f4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = host_s3eMemoryGetInt_thumb(0);
  host_s3eMemorySetInt_thumb(0,7);
  iVar2 = host_s3eReallocBase_thumb(param_1,param_2);
  if (iVar2 == 0) {
    FUN_4a008004(s_CRT_out_of_memory___d__4a00d440,param_2);
    iVar3 = host_s3eDebugIsDebuggerPresent_thumb();
    if (iVar3 != 0) {
      _DAT_fffffff4 = 0;
    }
  }
  host_s3eMemorySetInt_thumb(0,uVar1);
  return iVar2;
}



// Address: 4a00d458

void FUN_4a00d458(void)

{
  host_s3eDeviceExit_thumb();
  return;
}



// Address: 4a00d46c

int FUN_4a00d46c(short *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 10);
  if (param_3 < *(int *)(param_1 + 10)) {
    iVar1 = param_3;
  }
  iVar2 = iVar1;
  while (bVar4 = iVar2 != 0, iVar2 = iVar2 + -1, bVar4) {
    iVar3 = *(int *)(param_1 + 10);
    *(int *)(param_1 + 10) = iVar3 + -1;
    *param_2 = *(undefined1 *)((int)param_1 + iVar3 + 0x17);
    param_2 = param_2 + 1;
  }
  iVar2 = FUN_4a00da04((int)*param_1,param_2,param_3 - iVar1);
  return iVar2 + iVar1;
}



// Address: 4a00d4ac

void FUN_4a00d4ac(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_4a00d4f0;
  if (param_1 != 0) {
    if (*(int *)(PTR_DAT_4a00d4f0 + 0x10) != 0) {
      for (iVar2 = 0; iVar2 < *(int *)PTR_DAT_4a00d4f0; iVar2 = iVar2 + 1) {
        if (*(int *)(*(int *)(PTR_DAT_4a00d4f0 + 0x10) + iVar2 * 4) == param_1) {
          FUN_4a161530(param_1 - *(int *)(param_1 + -4));
          *(undefined4 *)(*(int *)(puVar1 + 0x10) + iVar2 * 4) = 0;
          return;
        }
      }
    }
    FUN_4a161530();
  }
  return;
}



// Address: 4a00d4f4

undefined4 FUN_4a00d4f4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (((param_1 == 0) || (param_1 == 1)) || (param_1 == 2)) {
    thunk_FUN_4a001274(param_2,0x3c);
    *(undefined4 *)(param_2 + 4) = 0x2000;
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_4a0350f8(param_1,0);
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)thunk_FUN_4a0007f8();
      *puVar3 = 9;
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = FUN_4a00da48(*(undefined4 *)(iVar2 + 0xc),param_2);
    }
  }
  return uVar1;
}



// Address: 4a00d53c

void FUN_4a00d53c(uint param_1)

{
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = PTR_DAT_4a00d560;
  if ((*(int *)(PTR_DAT_4a00d560 + 8) == 1) || (*(int *)(PTR_DAT_4a00d560 + 8) == 0)) {
    uVar2 = host_glGetError_thumb();
    *(uint *)(puVar1 + 8) = uVar2;
    if (uVar2 == param_1) {
      *(undefined4 *)(puVar1 + 8) = 1;
    }
  }
  return;
}



// Address: 4a00d564

undefined4 FUN_4a00d564(void)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  int iVar4;
  
  pvVar3 = host_eglGetCurrentContext_thumb();
  puVar1 = PTR_DAT_4a00d610;
  if (pvVar3 == (void *)0x0) {
    iVar4 = FUN_4a0406c0();
    if (iVar4 == 0) {
      return 0;
    }
  }
  else {
    PTR_DAT_4a00d610[3] = 0;
    pvVar3 = host_eglGetCurrentDisplay_thumb();
    *(void **)(puVar1 + 8) = pvVar3;
    pvVar3 = host_eglGetCurrentSurface_thumb(DAT_4a00d614);
    *(void **)(puVar1 + 0xc) = pvVar3;
    pvVar3 = host_eglGetCurrentContext_thumb();
    iVar4 = DAT_4a00d614;
    *(void **)(puVar1 + 0x10) = pvVar3;
    host_eglQueryContext_thumb(*(void **)(puVar1 + 8),pvVar3,iVar4 + -0x31,puVar1 + 4);
  }
  iVar4 = host_s3eGLGetInt_thumb(0);
  *(int *)(puVar1 + 0x1c) = iVar4;
  puVar1[2] = 0x1ff < iVar4;
  host_glGetString_thumb(0x1f00);
  pvVar3 = host_glGetString_thumb(DAT_4a00d618);
  host_glGetString_thumb(DAT_4a00d618 + 1);
  host_glGetString_thumb(DAT_4a00d618 + 2);
  iVar4 = FUN_4a0015c0(pvVar3,s_PVRVFrame_4a00d61c);
  puVar2 = PTR_DAT_4a00d628;
  if (iVar4 != 0) {
    *(undefined4 *)PTR_DAT_4a00d628 = 1;
    iVar4 = FUN_4a0015c0(pvVar3,s_Intel_4a00d62c);
    if ((iVar4 != 0) && (iVar4 = FUN_4a0015c0(pvVar3,&DAT_4a00d634), iVar4 != 0)) {
      *(undefined4 *)puVar2 = 2;
    }
  }
  FUN_4a047000();
  puVar1[1] = 1;
  return 1;
}



// Address: 4a00d638

void FUN_4a00d638(void)

{
  FUN_4a14fee4(*PTR_DAT_4a00d650,PTR_DAT_4a00d650[1],PTR_DAT_4a00d650[2],PTR_DAT_4a00d650[3]);
  return;
}



// Address: 4a00d654

void FUN_4a00d654(int param_1)

{
  undefined *puVar1;
  
  FUN_4a04d8f8();
  puVar1 = PTR_DAT_4a00d6a4;
  if (param_1 != 0 || PTR_DAT_4a00d6a4[3] != '\0') {
    if (*(void **)(PTR_DAT_4a00d6a4 + 8) != (void *)0x0) {
      host_eglMakeCurrent_thumb
                (*(void **)(PTR_DAT_4a00d6a4 + 8),(void *)0x0,(void *)0x0,(void *)0x0);
      if (*(void **)(puVar1 + 0x10) != (void *)0x0) {
        host_eglDestroyContext_thumb(*(void **)(puVar1 + 8),*(void **)(puVar1 + 0x10));
        *(undefined4 *)(puVar1 + 0x10) = 0;
      }
      if (*(void **)(puVar1 + 0xc) != (void *)0x0) {
        host_eglDestroySurface_thumb(*(void **)(puVar1 + 8),*(void **)(puVar1 + 0xc));
        *(undefined4 *)(puVar1 + 0xc) = 0;
      }
      host_eglTerminate_thumb(*(void **)(puVar1 + 8));
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    puVar1[1] = 0;
  }
  return;
}



// Address: 4a00d6a8

undefined4 FUN_4a00d6a8(char *param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((((*param_1 == '/') || (*param_1 == '\\')) || (iVar1 = FUN_4a00ba7c(param_1), iVar1 != 0)) ||
     ((iVar1 = FUN_4a0013e0(PTR_DAT_4a00d704), iVar1 == 0 ||
      (iVar1 = FUN_4a0013e0(param_1), iVar1 == 0)))) {
    FUN_4a16303e(param_2,param_1,0x80);
  }
  else {
    FUN_4a0012bc(param_2,PTR_DAT_4a00d704);
    FUN_4a00ba94(param_2,param_1,0x80);
    FUN_4a00bb00(param_2,0);
  }
  return param_2;
}



// Address: 4a00d70c

void FUN_4a00d70c(void)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_4a00d740;
  *(undefined4 *)(iVar1 + 0x39c) = *(undefined4 *)(iVar1 + 0x3a4);
  *(int *)(iVar1 + 0x3ac) =
       *(int *)(iVar1 + 0x3b8) + *(int *)(iVar1 + 0x3b0) + *(int *)(iVar1 + 0x3b4);
  *(undefined4 *)(iVar1 + 0x3bc) = 0xffffffff;
  return;
}



// Address: 4a00d744

void FUN_4a00d744(void)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_4a00d768;
  *(undefined4 *)(iVar1 + 0x39c) = *(undefined4 *)(iVar1 + 0x3a8);
  *(undefined4 *)(iVar1 + 0x3ac) = *(undefined4 *)(iVar1 + 0x3b8);
  *(undefined4 *)(iVar1 + 0x3bc) = *(undefined4 *)(iVar1 + 0x3c4);
  return;
}



// Address: 4a00d76c

void FUN_4a00d76c(void)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_4a00d790;
  *(undefined4 *)(iVar1 + 0x39c) = *(undefined4 *)(iVar1 + 0x3a4);
  *(undefined4 *)(iVar1 + 0x3ac) = *(undefined4 *)(iVar1 + 0x3b4);
  *(undefined4 *)(iVar1 + 0x3bc) = *(undefined4 *)(iVar1 + 0x3c0);
  return;
}



// Address: 4a00d798

void FUN_4a00d798(void)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_4a00d7bc;
  *(undefined4 *)(iVar1 + 0x39c) = *(undefined4 *)(iVar1 + 0x3a0);
  *(undefined4 *)(iVar1 + 0x3ac) = *(undefined4 *)(iVar1 + 0x3b0);
  *(undefined4 *)(iVar1 + 0x3bc) = 0;
  return;
}



// Address: 4a00d7c0

undefined8 FUN_4a00d7c0(undefined4 param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_20;
  
  puVar1 = PTR_DAT_4a00d864;
  iVar4 = FUN_4a16168c();
  if (iVar4 != 0) {
    FUN_4a15f3b0(puVar1);
  }
  puVar2 = PTR_DAT_4a00d868;
  if (*PTR_DAT_4a00d868 == '\0') {
    FUN_4a01d5a0();
  }
  uVar3 = DAT_4a00d86c;
  if (puVar2[1] == '\0') {
    if (*(int *)(puVar2 + 0x14) != 0) {
      param_2 = host_s3eFileRead_thumb(param_1,1,param_2);
      goto LAB_4a00d858;
    }
  }
  else {
    while (*(int *)(puVar2 + 0x24) == 0 && puVar2[2] == '\0') {
      host_s3eDeviceYieldUntilEvent_thumb(uVar3);
    }
    if (puVar2[2] == '\0') {
      if (*(uint *)(puVar2 + 0x24) <= param_2) {
        param_2 = *(uint *)(puVar2 + 0x24);
      }
      thunk_FUN_4a000f84(param_1,*(undefined4 *)(puVar2 + 0x20),param_2);
      thunk_FUN_4a00105c(*(int *)(puVar2 + 0x20),*(int *)(puVar2 + 0x20) + param_2,0x200 - param_2);
      *(uint *)(puVar2 + 0x24) = *(int *)(puVar2 + 0x24) - param_2;
LAB_4a00d858:
      iVar4 = FUN_4a16168c();
      if (iVar4 != 0) {
        FUN_4a15f428(puVar1);
      }
      goto LAB_4a00d810;
    }
  }
  iVar4 = FUN_4a16168c();
  if (iVar4 != 0) {
    FUN_4a15f428(puVar1);
  }
  param_2 = 0;
LAB_4a00d810:
  return CONCAT44(uStack_20,param_2);
}



// Address: 4a00d870

void FUN_4a00d870(int param_1,undefined4 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  puVar1 = PTR_DAT_4a00d980;
  iVar3 = FUN_4a16168c();
  if (iVar3 != 0) {
    FUN_4a15f3b0(puVar1);
  }
  puVar2 = PTR_DAT_4a00d984;
  if (*PTR_DAT_4a00d984 == '\0') {
    FUN_4a01d5a0();
  }
  if (puVar2[1] != '\0') {
    FUN_4a03b65c(param_2,param_3,0);
  }
  iVar3 = DAT_4a00d988;
  if (param_1 == 0) {
    if (*(int *)(puVar2 + 8) == 0) {
      uVar4 = FUN_4a00d394(DAT_4a00d988);
      *(undefined4 *)(puVar2 + 8) = uVar4;
      thunk_FUN_4a001274(uVar4,iVar3);
    }
    puVar8 = *(undefined1 **)(puVar2 + 8);
    iVar3 = *(int *)(puVar2 + 0xc);
  }
  else {
    if (*(int *)(puVar2 + 4) == 0) {
      uVar4 = FUN_4a00d394(DAT_4a00d988);
      *(undefined4 *)(puVar2 + 4) = uVar4;
      thunk_FUN_4a001274(uVar4,iVar3);
    }
    puVar8 = *(undefined1 **)(puVar2 + 4);
    iVar3 = *(int *)(puVar2 + 0x10);
  }
  iVar5 = FUN_4a0013e0(puVar8);
  uVar6 = (DAT_4a00d988 + -1) - iVar5;
  if (uVar6 <= param_3) {
    param_3 = uVar6;
  }
  FUN_4a00156c(puVar8,param_2,param_3);
  iVar5 = FUN_4a0013e0(puVar8);
  if (iVar5 != 0) {
    while (puVar7 = (undefined1 *)FUN_4a001552(puVar8,10), puVar7 != (undefined1 *)0x0) {
      if (iVar3 != 0) {
        host_s3eFileWrite_thumb(puVar8,(int)puVar7 - (int)puVar8,1,iVar3);
      }
      *puVar7 = 0;
      host_s3eDebugOutputString_thumb(puVar8);
      iVar5 = FUN_4a0013e0(puVar7 + 1);
      thunk_FUN_4a00105c(puVar8,puVar7 + 1,iVar5 + 1);
    }
    uVar6 = FUN_4a0013e0(puVar8);
    if ((uVar6 != 0) && (0x7e < uVar6)) {
      puVar8[uVar6] = 0;
      host_s3eDebugOutputString_thumb(puVar8);
      if (iVar3 != 0) {
        puVar8[uVar6] = 10;
        host_s3eFileWrite_thumb(puVar8,uVar6,1,iVar3);
      }
      *puVar8 = 0;
    }
  }
  iVar3 = FUN_4a16168c();
  if (iVar3 != 0) {
    FUN_4a15f428(puVar1);
  }
  return;
}



// Address: 4a00d994

void FUN_4a00d994(void)

{
  FUN_4a161570();
  return;
}



// Address: 4a00d9a0

undefined4 FUN_4a00d9a0(undefined4 param_1,uint param_2,char *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char acStack_9c [8];
  undefined1 auStack_94 [128];
  
  uVar1 = FUN_4a00d6a8(param_1,auStack_94);
  uVar4 = 0xffffffff;
  if (param_3 == (char *)0x0) {
    iVar2 = FUN_4a05a1b0(uVar1,acStack_9c,param_2);
    if (iVar2 == -1) {
      return 0xffffffff;
    }
    param_3 = acStack_9c;
    goto LAB_4a00d9e8;
  }
  if (*param_3 == 'a') {
    param_2 = param_2 | 0x400;
LAB_4a00d9ca:
    param_2 = param_2 | 1;
  }
  else if (*param_3 == 'w') goto LAB_4a00d9ca;
  if (param_3[1] == '+') {
    param_2 = param_2 | 2;
  }
LAB_4a00d9e8:
  puVar3 = (undefined4 *)FUN_4a05bf7c(uVar1,param_3);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = param_2;
    uVar4 = *puVar3;
  }
  return uVar4;
}



// Address: 4a00da04

undefined4 FUN_4a00da04(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else if (param_1 == 0) {
    uVar1 = FUN_4a00d7c0(param_2,param_3);
  }
  else {
    iVar2 = FUN_4a01d2b8();
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)thunk_FUN_4a0007f8();
      *puVar3 = 9;
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = host_s3eFileRead_thumb(param_2,1,param_3,iVar2);
    }
  }
  return uVar1;
}



// Address: 4a00da48

undefined4 FUN_4a00da48(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_4a0013e0();
  uVar3 = 0xffffffff;
  if (iVar1 != 0) {
    thunk_FUN_4a001274(param_2,0x3c);
    lVar4 = host_s3eFileGetFileInt_thumb(param_1,1);
    if (lVar4 == 1) {
      *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x4000;
    }
    else {
      *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x8000;
      iVar1 = host_s3eFileCheckExists_thumb(param_1);
      if (iVar1 == 0) {
        puVar2 = (undefined4 *)thunk_FUN_4a0007f8();
        *puVar2 = 2;
        return 0xffffffff;
      }
    }
    iVar1 = 0;
    if ((*(int *)(param_2 + 4) << 0x11 < 0) ||
       (iVar1 = host_s3eFileGetFileInt_thumb(param_1,4), iVar1 != -1)) {
      *(undefined4 *)(param_2 + 0x2c) = 0x1000;
      *(int *)(param_2 + 0x10) = iVar1;
      uVar5 = host_s3eFileGetFileInt_thumb(param_1,5);
      uVar3 = thunk_FUN_4a00080c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
      *(undefined4 *)(param_2 + 0x1c) = uVar3;
      uVar3 = 0;
    }
    else {
      FUN_4a048980(&DAT_4a00dae0);
    }
  }
  return uVar3;
}



// Address: 4a00dae8

undefined4 FUN_4a00dae8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_1 == 1) || (param_1 == 2)) {
    FUN_4a00d870(param_1 == 2,param_2,param_3);
  }
  else {
    iVar1 = FUN_4a01d2b8();
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)thunk_FUN_4a0007f8();
      *puVar2 = 9;
      param_3 = 0xffffffff;
    }
    else {
      param_3 = host_s3eFileWrite_thumb(param_2,1,param_3,iVar1);
    }
  }
  return param_3;
}



// Address: 4a00db34

undefined4 FUN_4a00db34(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (((int)(param_1 | param_2) >> 8 == 0) ||
     ((iVar1 = FUN_4a00dd5c(param_1), iVar1 == 0 && (iVar1 = FUN_4a00dd5c(param_2), iVar1 == 0)))) {
LAB_4a00db9e:
    uVar3 = 0;
  }
  else {
    if ((param_1 != DAT_4a00dbac) &&
       (((param_1 != DAT_4a00dbac + 1 && (param_1 != DAT_4a00dbb0)) && (param_1 != DAT_4a00dbb0 + 2)
        ))) {
      iVar1 = (int)param_2 >> 8;
      if (((iVar1 == 0x20) || (iVar1 == 0x30)) || (iVar1 == 0xff)) {
        uVar2 = 0;
        do {
          if (*(ushort *)(PTR_DAT_4a00dbb4 + uVar2 * 2) == param_2) goto LAB_4a00db9e;
          uVar2 = uVar2 + 1 & 0xffff;
        } while (uVar2 < 0x2a);
      }
      if ((param_2 + DAT_4a00dbb8 < 0xbf) || (param_1 + DAT_4a00dbb8 < 0xbf)) goto LAB_4a00db9e;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// Address: 4a00dbc4

void FUN_4a00dbc4(void)

{
  if (*(int *)(PTR_DAT_4a00dbe0 + 8) == 0) {
    thunk_FUN_4a15e080();
  }
  else {
    FUN_4a1652c6();
  }
  return;
}



// Address: 4a00dbe4

void FUN_4a00dbe4(void)

{
  undefined *puVar1;
  int iVar2;
  undefined2 local_f8;
  undefined2 local_f6;
  undefined1 auStack_f4 [196];
  undefined4 local_30;
  undefined1 auStack_2c [36];
  
  *PTR_DAT_4a00dce8 = 0;
  FUN_4a0ecbc4(auStack_2c);
  FUN_4a0ecab0(auStack_2c,0xd);
  FUN_4a0ebe9c(auStack_2c,1);
  FUN_4a0ecb88(auStack_2c,1);
  FUN_4a0e4d6c(auStack_2c,0,0,0,0);
  local_30 = 0;
  FUN_4a0e4d40(auStack_2c,&local_30);
  thunk_FUN_4a0633c4(auStack_f4);
  thunk_FUN_4a062e34(auStack_f4,auStack_2c);
  thunk_FUN_4a062c78(auStack_f4);
  puVar1 = PTR_DAT_4a00dcec;
  iVar2 = *(int *)PTR_DAT_4a00dcec;
  *(int *)(iVar2 + 0x388) = *(int *)(iVar2 + 0x38c);
  *(int *)(iVar2 + 0x38c) = *(int *)(iVar2 + 0x38c) + 0x58;
  iVar2 = thunk_FUN_4a069e28();
  *(undefined1 **)(iVar2 + 0x2c) = auStack_f4;
  *(undefined1 **)(iVar2 + 0x30) = auStack_f4;
  thunk_FUN_4a0361cc();
  local_f8 = (undefined2)*(undefined4 *)(*(int *)puVar1 + 0x344);
  local_f6 = (undefined2)*(undefined4 *)(*(int *)puVar1 + 0x348);
  (**(code **)(PTR_DAT_4a00dcf0 + 0x20))(2);
  FUN_4a048e6c(PTR_DAT_4a00dcf4,&local_f8);
  FUN_4a05a618();
  FUN_4a0634a8(auStack_f4);
  FUN_4a0ecbf0(auStack_2c);
  return;
}



// Address: 4a00dcf8

void FUN_4a00dcf8(int param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  
  iVar2 = host_s3eDebugGetInt_thumb(6);
  iVar3 = host_s3eDebugGetInt_thumb(5);
  puVar1 = PTR_DAT_4a00dd54;
  puVar6 = (undefined *)0x4a00dd50;
  if (((uint)(byte)PTR_DAT_4a00dd54[3] & ~param_2) != 0) {
    puVar6 = &DAT_4a00dd58;
  }
  iVar4 = *(int *)(PTR_DAT_4a00dd54 + 0x1c);
  iVar5 = FUN_4a0013e0(*(undefined4 *)(PTR_DAT_4a00dd54 + 0x18));
  if (param_2 != 0) {
    iVar5 = iVar5 + -1;
  }
  host_s3eDebugPrint_thumb(iVar3 * iVar5,iVar2 * iVar4,puVar6,0);
  if (param_1 != 0) {
    puVar1[3] = puVar1[3] ^ 1;
  }
  return;
}



// Address: 4a00dd5c

undefined4 FUN_4a00dd5c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (((0xff < param_1 - 0x3000U) && (DAT_4a00dd84 < param_1 - 0x4e00U)) &&
     (0xfd < param_1 - 0xff00U)) {
    uVar1 = 0;
  }
  return uVar1;
}



// Address: 4a00dd8c

void FUN_4a00dd8c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  short local_130;
  short local_12e;
  short local_12c;
  undefined2 local_12a;
  int local_128;
  undefined2 local_124;
  undefined2 local_122;
  undefined2 local_120;
  undefined2 local_11e;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined2 local_b4;
  undefined2 local_b2;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined2 local_ac;
  undefined2 local_aa;
  undefined2 local_a8;
  undefined2 local_a4;
  undefined2 local_a2;
  undefined4 local_a0;
  undefined4 local_9c;
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
  undefined4 local_6c;
  undefined4 local_68;
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
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar5 = *(int *)PTR_DAT_4a00e418;
  *(int *)PTR_DAT_4a00e418 = iVar5 + 1;
  puVar1 = PTR_DAT_4a00e41c;
  if (iVar5 < 1) {
    local_40 = 0x1000;
    local_28 = 0;
    local_20 = 0x1000;
    local_30 = 0x1000;
    local_24 = 0;
    local_2c = 0;
    local_3c = 0;
    local_34 = 0;
    local_38 = 0;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    *(undefined4 *)PTR_DAT_4a00e41c = 0x1000;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0x1000;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 0x20) = 0x1000;
    puVar1 = PTR_DAT_4a00e41c;
    *(undefined4 *)(PTR_DAT_4a00e41c + 0x24) = 0;
    *(undefined4 *)(puVar1 + 0x28) = 0;
    *(undefined4 *)(puVar1 + 0x2c) = 0;
    puVar1 = PTR_DAT_4a00e420;
    local_70 = 0x3f800000;
    local_58 = 0;
    local_50 = 0x3f800000;
    local_60 = 0x3f800000;
    local_54 = 0;
    local_5c = 0;
    local_6c = 0;
    local_64 = 0;
    local_68 = 0;
    local_44 = 0;
    local_48 = 0;
    local_4c = 0;
    *(undefined4 *)PTR_DAT_4a00e420 = 0x3f800000;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 0x20) = 0x3f800000;
    puVar2 = PTR_DAT_4a00e424;
    puVar1 = PTR_DAT_4a00e420;
    *(undefined4 *)(PTR_DAT_4a00e420 + 0x24) = 0;
    *(undefined4 *)(puVar1 + 0x28) = 0;
    *(undefined4 *)(puVar1 + 0x2c) = 0;
    local_88 = 0x1000;
    local_7c = 0x1000;
    local_80 = 0;
    local_84 = 0;
    local_74 = 0;
    local_78 = 0;
    *(undefined4 *)puVar2 = 0x1000;
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0x1000;
    *(undefined4 *)(puVar2 + 0x10) = 0;
    *(undefined4 *)(puVar2 + 0x14) = 0;
    puVar1 = PTR_DAT_4a00e428;
    local_a0 = 0x3f800000;
    local_94 = 0x3f800000;
    local_98 = 0;
    local_9c = 0;
    local_8c = 0;
    local_90 = 0;
    *(undefined4 *)PTR_DAT_4a00e428 = 0x3f800000;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    puVar2 = PTR_DAT_4a00e430;
    puVar1 = PTR_DAT_4a00e42c;
    *(undefined2 *)PTR_DAT_4a00e42c = 0;
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)puVar2 = 0x1000;
    *(undefined2 *)(puVar2 + 2) = 0;
    puVar1 = PTR_DAT_4a00e434;
    local_a4 = 0;
    local_a2 = 0x1000;
    *(undefined2 *)PTR_DAT_4a00e434 = 0;
    *(undefined2 *)(puVar1 + 2) = 0x1000;
    puVar1 = PTR_DAT_4a00e438;
    *(undefined2 *)PTR_DAT_4a00e438 = 0;
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)(puVar1 + 4) = 0;
    puVar2 = PTR_DAT_4a00e440;
    puVar1 = PTR_DAT_4a00e43c;
    *(undefined2 *)PTR_DAT_4a00e43c = 0x1000;
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)(puVar1 + 4) = 0;
    local_ac = 0;
    *(undefined2 *)puVar2 = 0;
    *(undefined2 *)(puVar2 + 2) = 0x1000;
    *(undefined2 *)(puVar2 + 4) = 0;
    puVar1 = PTR_DAT_4a00e444;
    local_aa = 0;
    local_a8 = 0x1000;
    *(undefined2 *)PTR_DAT_4a00e444 = 0;
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)(puVar1 + 4) = 0x1000;
    puVar3 = PTR_DAT_4a00e448;
    *(undefined2 *)PTR_DAT_4a00e448 = 0;
    *(undefined2 *)(puVar3 + 2) = 0;
    *(undefined2 *)(puVar3 + 4) = 0;
    *(undefined2 *)(puVar3 + 6) = 0;
    puVar3 = PTR_DAT_4a00e44c;
    *(undefined2 *)PTR_DAT_4a00e44c = 0x1000;
    *(undefined2 *)(puVar3 + 2) = 0;
    *(undefined2 *)(puVar3 + 4) = 0;
    *(undefined2 *)(puVar3 + 6) = 0;
    puVar3 = PTR_DAT_4a00e450;
    local_b4 = 0;
    *(undefined2 *)PTR_DAT_4a00e450 = 0;
    *(undefined2 *)(puVar3 + 2) = 0x1000;
    *(undefined2 *)(puVar3 + 4) = 0;
    *(undefined2 *)(puVar3 + 6) = 0;
    puVar3 = PTR_DAT_4a00e454;
    local_b2 = 0;
    *(undefined2 *)PTR_DAT_4a00e454 = 0;
    *(undefined2 *)(puVar3 + 2) = 0;
    *(undefined2 *)(puVar3 + 4) = 0x1000;
    *(undefined2 *)(puVar3 + 6) = 0;
    puVar3 = PTR_DAT_4a00e458;
    local_b0 = 0;
    local_ae = 0x1000;
    *(undefined2 *)PTR_DAT_4a00e458 = 0;
    *(undefined2 *)(puVar3 + 2) = 0;
    *(undefined2 *)(puVar3 + 4) = 0;
    *(undefined2 *)(puVar3 + 6) = 0x1000;
    puVar3 = PTR_DAT_4a00e45c;
    *(undefined4 *)PTR_DAT_4a00e45c = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    puVar3 = PTR_DAT_4a00e460;
    *(undefined4 *)PTR_DAT_4a00e460 = 0x1000;
    *(undefined4 *)(puVar3 + 4) = 0;
    puVar3 = PTR_DAT_4a00e464;
    local_bc = 0;
    uStack_b8 = 0x1000;
    *(undefined4 *)PTR_DAT_4a00e464 = 0;
    *(undefined4 *)(puVar3 + 4) = 0x1000;
    puVar3 = PTR_DAT_4a00e468;
    *(undefined4 *)PTR_DAT_4a00e468 = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    puVar3 = PTR_DAT_4a00e46c;
    *(undefined4 *)(PTR_DAT_4a00e46c + 4) = 0;
    *(undefined4 *)puVar3 = 0x1000;
    *(undefined4 *)(puVar3 + 8) = 0;
    puVar3 = PTR_DAT_4a00e470;
    local_c8 = 0;
    *(undefined4 *)PTR_DAT_4a00e470 = 0;
    *(undefined4 *)(puVar3 + 4) = 0x1000;
    *(undefined4 *)(puVar3 + 8) = 0;
    puVar3 = PTR_DAT_4a00e474;
    local_c4 = 0;
    local_c0 = 0x1000;
    *(undefined4 *)PTR_DAT_4a00e474 = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 8) = 0x1000;
    puVar3 = PTR_DAT_4a00e478;
    *(undefined4 *)PTR_DAT_4a00e478 = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
    puVar3 = PTR_DAT_4a00e47c;
    *(undefined4 *)PTR_DAT_4a00e47c = 0x1000;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
    puVar3 = PTR_DAT_4a00e480;
    local_d8 = 0;
    *(undefined4 *)PTR_DAT_4a00e480 = 0;
    *(undefined4 *)(puVar3 + 4) = 0x1000;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
    puVar3 = PTR_DAT_4a00e484;
    local_d4 = 0;
    *(undefined4 *)PTR_DAT_4a00e484 = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 8) = 0x1000;
    *(undefined4 *)(puVar3 + 0xc) = 0;
    puVar3 = PTR_DAT_4a00e488;
    local_d0 = 0;
    local_cc = 0x1000;
    *(undefined4 *)PTR_DAT_4a00e488 = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0x1000;
    puVar4 = PTR_DAT_4a00e490;
    puVar3 = PTR_DAT_4a00e48c;
    *(undefined4 *)PTR_DAT_4a00e48c = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)puVar4 = 0x3f800000;
    *(undefined4 *)(puVar4 + 4) = 0;
    puVar3 = PTR_DAT_4a00e494;
    uStack_e0 = 0;
    uStack_dc = 0x3f800000;
    *(undefined4 *)PTR_DAT_4a00e494 = 0;
    *(undefined4 *)(puVar3 + 4) = 0x3f800000;
    puVar3 = PTR_DAT_4a00e498;
    *(undefined4 *)PTR_DAT_4a00e498 = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    puVar3 = PTR_DAT_4a00e49c;
    *(undefined4 *)(PTR_DAT_4a00e49c + 4) = 0;
    *(undefined4 *)puVar3 = 0x3f800000;
    *(undefined4 *)(puVar3 + 8) = 0;
    puVar3 = PTR_DAT_4a00e4a0;
    local_ec = 0;
    *(undefined4 *)PTR_DAT_4a00e4a0 = 0;
    *(undefined4 *)(puVar3 + 4) = 0x3f800000;
    *(undefined4 *)(puVar3 + 8) = 0;
    puVar3 = PTR_DAT_4a00e4a4;
    local_e8 = 0;
    local_e4 = 0x3f800000;
    *(undefined4 *)PTR_DAT_4a00e4a4 = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 8) = 0x3f800000;
    puVar3 = PTR_DAT_4a00e4a8;
    *(undefined4 *)PTR_DAT_4a00e4a8 = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
    puVar3 = PTR_DAT_4a00e4ac;
    *(undefined4 *)(PTR_DAT_4a00e4ac + 4) = 0;
    *(undefined4 *)puVar3 = 0x3f800000;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
    puVar3 = PTR_DAT_4a00e4b0;
    local_fc = 0;
    *(undefined4 *)PTR_DAT_4a00e4b0 = 0;
    *(undefined4 *)(puVar3 + 4) = 0x3f800000;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
    puVar3 = PTR_DAT_4a00e4b4;
    local_f8 = 0;
    *(undefined4 *)PTR_DAT_4a00e4b4 = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 8) = 0x3f800000;
    *(undefined4 *)(puVar3 + 0xc) = 0;
    puVar3 = PTR_DAT_4a00e4b8;
    local_f4 = 0;
    local_f0 = 0x3f800000;
    *(undefined4 *)PTR_DAT_4a00e4b8 = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0x3f800000;
    puVar3 = PTR_DAT_4a00e4bc;
    local_108 = 0;
    local_10c = 0x40000000;
    local_104 = 0;
    local_100 = 0;
    *(undefined4 *)(PTR_DAT_4a00e4bc + 4) = 0;
    *(undefined4 *)puVar3 = 0x40000000;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
    puVar3 = PTR_DAT_4a00e4c0;
    local_118 = 0;
    local_11c = 0x3f800000;
    local_114 = 0;
    local_110 = 0;
    *(undefined4 *)(PTR_DAT_4a00e4c0 + 4) = 0;
    *(undefined4 *)puVar3 = 0x3f800000;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
    puVar3 = PTR_DAT_4a00e4c4;
    local_124 = 0x1000;
    local_120 = 0;
    local_122 = 0;
    local_11e = 0;
    *(undefined2 *)PTR_DAT_4a00e4c4 = 0x1000;
    *(undefined2 *)(puVar3 + 2) = 0;
    *(undefined2 *)(puVar3 + 4) = 0;
    *(undefined2 *)(puVar3 + 6) = 0;
    local_130 = 0x1000;
    local_12e = 0;
    local_12c = 0;
    iVar5 = FUN_4a142ecc(&local_130);
    if (iVar5 == 0) {
      FUN_4a0ecd40(&local_130);
    }
    puVar4 = PTR_DAT_4a00e4c8;
    puVar3 = PTR_DAT_4a00e468;
    local_128 = (int)local_12c * *(int *)(PTR_DAT_4a00e468 + 8) +
                (int)local_12e * *(int *)(PTR_DAT_4a00e468 + 4) +
                (int)local_130 * *(int *)PTR_DAT_4a00e468 >> 0xc;
    *(short *)PTR_DAT_4a00e4c8 = local_130;
    *(short *)(puVar4 + 2) = local_12e;
    *(short *)(puVar4 + 4) = local_12c;
    *(undefined2 *)(puVar4 + 6) = local_12a;
    *(int *)(puVar4 + 8) = local_128;
    local_130 = *(short *)puVar2;
    local_12e = *(short *)(puVar2 + 2);
    local_12c = *(short *)(puVar2 + 4);
    iVar5 = FUN_4a142ecc(&local_130);
    if (iVar5 == 0) {
      FUN_4a0ecd40(&local_130);
    }
    puVar2 = PTR_DAT_4a00e4cc;
    local_128 = (int)local_12c * *(int *)(puVar3 + 8) +
                (int)local_12e * *(int *)(puVar3 + 4) + (int)local_130 * *(int *)puVar3 >> 0xc;
    *(short *)PTR_DAT_4a00e4cc = local_130;
    *(short *)(puVar2 + 2) = local_12e;
    *(short *)(puVar2 + 4) = local_12c;
    *(undefined2 *)(puVar2 + 6) = local_12a;
    *(int *)(puVar2 + 8) = local_128;
    local_130 = *(short *)puVar1;
    local_12e = *(short *)(puVar1 + 2);
    local_12c = *(short *)(puVar1 + 4);
    iVar5 = FUN_4a142ecc(&local_130);
    if (iVar5 == 0) {
      FUN_4a0ecd40(&local_130);
    }
    puVar1 = PTR_DAT_4a00e4d0;
    local_128 = (int)local_12c * *(int *)(puVar3 + 8) +
                (int)local_12e * *(int *)(puVar3 + 4) + (int)local_130 * *(int *)puVar3 >> 0xc;
    *(short *)PTR_DAT_4a00e4d0 = local_130;
    *(short *)(puVar1 + 2) = local_12e;
    *(short *)(puVar1 + 4) = local_12c;
    *(undefined2 *)(puVar1 + 6) = local_12a;
    *(int *)(puVar1 + 8) = local_128;
    FUN_4a00e594();
    FUN_4a03bffc();
    return;
  }
  return;
}



// Address: 4a00e4d4

void FUN_4a00e4d4(void)

{
  **(uint **)PTR_DAT_4a00e4e4 = **(uint **)PTR_DAT_4a00e4e4 & 0xffff7fff;
  return;
}



// Address: 4a00e4e8

int FUN_4a00e4e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_4a00e590;
  iVar2 = *(int *)(PTR_DAT_4a00e590 + 8);
  if (*(int *)(PTR_DAT_4a00e590 + 0xc) == 0 && iVar2 == 0) {
    iVar2 = *(int *)(PTR_DAT_4a00e590 + 4);
    goto LAB_4a00e588;
  }
  if (param_1 == 0) {
    if (iVar2 != 0) {
      iVar2 = FUN_4a0a5d86(iVar2,param_2,param_3,param_4,param_4);
      goto LAB_4a00e51a;
    }
LAB_4a00e51e:
    iVar2 = *(int *)(puVar1 + 0xc);
    if (iVar2 == 0) {
      iVar3 = *(int *)(puVar1 + 8);
      if (iVar3 == 0) {
        return 0;
      }
      iVar2 = *(int *)(puVar1 + 4);
      if (iVar2 == 0) {
        if (iVar3 == 0) {
          return 0;
        }
        for (iVar2 = *(int *)(iVar3 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
          FUN_4a1652d2(iVar2,0,param_1,param_2);
        }
        return 0;
      }
    }
  }
  else {
    if (iVar2 == 0) goto LAB_4a00e51e;
    iVar2 = FUN_4a0a5d80(iVar2,param_1);
LAB_4a00e51a:
    if (iVar2 == 0) goto LAB_4a00e51e;
  }
  if ((((param_1 != 0) && (*(int *)(puVar1 + 8) != 0)) &&
      (iVar3 = FUN_4a0a5d8c(*(int *)(puVar1 + 8),iVar2,param_1,param_2), iVar3 != iVar2)) &&
     ((iVar3 != 0 && (iVar3 = FUN_4a04870c(iVar2,param_1,iVar3,param_2), iVar3 != 0)))) {
    return iVar3;
  }
LAB_4a00e588:
  iVar2 = FUN_4a0364a8(iVar2,param_1,param_2);
  return iVar2;
}



// Address: 4a00e594

void FUN_4a00e594(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_4a00e5c0;
  puVar1 = PTR_DAT_4a00e5bc;
  iVar5 = 0;
  do {
    uVar3 = FUN_4a030118(iVar5 << 0xc);
    iVar4 = iVar5 * 4;
    iVar5 = iVar5 + 1;
    *(undefined4 *)(puVar1 + iVar4) = uVar3;
  } while (iVar5 < iVar2);
  return;
}



// Address: 4a00e5c4

void FUN_4a00e5c4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar1 = *(int *)PTR_DAT_4a00e60c;
  *(int *)PTR_DAT_4a00e60c = iVar1 + 1;
  if (iVar1 < 1) {
    uStack_c = 8;
    uStack_10 = param_3;
    host_s3eConfigGetInt_thumb(&DAT_4a00e620,s_NumMemBuckets_4a00e610,&uStack_c);
    FUN_4a03b250(uStack_c);
    FUN_4a007ff8();
    uStack_10 = 0xc0;
    host_s3eConfigGetInt_thumb(&DAT_4a00e620,s_NumClassFactories_4a00e628,&uStack_10);
    FUN_4a0414a8(uStack_10);
  }
  return;
}



// Address: 4a00e5cc

void FUN_4a00e5cc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = *(int *)PTR_DAT_4a00e60c;
  *(int *)PTR_DAT_4a00e60c = iVar1 + 1;
  if (iVar1 < 1) {
    local_c = 8;
    local_10 = param_3;
    host_s3eConfigGetInt_thumb(&DAT_4a00e620,s_NumMemBuckets_4a00e610,&local_c);
    FUN_4a03b250(local_c);
    FUN_4a007ff8();
    local_10 = 0xc0;
    host_s3eConfigGetInt_thumb(&DAT_4a00e620,s_NumClassFactories_4a00e628,&local_10);
    FUN_4a0414a8(local_10);
  }
  return;
}



// Address: 4a00e63c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a00e63c(void)

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
                    /* WARNING: Could not recover jumptable at 0x4a00e668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  piStack_10 = (int *)0x0;
  (**(code **)(*piVar2 + 0x18))(piVar2,&piStack_10,0x10006);
  iVar1 = (**(code **)(*piStack_10 + 0x18))(piStack_10,s_com_cp_app_MainActivity_4a00e770);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a00e6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iVar3 = (**(code **)(*piStack_10 + 0x240))
                    (piStack_10,iVar1,s_m_Activity_4a00e788,s_Lcom_cp_app_MainActivity__4a00e794);
  if (iVar3 != 0) {
    iVar3 = (**(code **)(*piStack_10 + 0x244))(piStack_10,iVar1,iVar3);
    if (iVar3 != 0) {
      uVar4 = (**(code **)(*piStack_10 + 0x84))(piStack_10,iVar1,s_S3DOffJNI_4a00e7b0,&DAT_4a00e7bc)
      ;
      iVar1 = (**(code **)(*piStack_10 + 0x98))(piStack_10,iVar3,uVar4,&piStack_10);
      if (iVar1 == 0) {
        host_s3eDeviceRequestQuit_arm();
      }
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a00e714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a00e6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



// Address: 4a00e7c0

void FUN_4a00e7c0(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  puVar3 = (undefined4 *)param_1[1];
  uVar16 = param_1[2];
  uVar1 = param_1[6];
  iVar8 = param_1[7];
  iVar11 = param_1[8];
  uVar4 = param_1[3];
  iVar6 = param_1[4];
  iVar7 = param_1[5];
  uVar9 = param_1[9];
  iVar2 = *param_1 + -1;
  if ((uVar9 & 0x80000000) == 0) {
    iVar14 = param_1[10];
    if (((uint)puVar3 & 3) == 0) goto joined_r0x4a00e8e0;
    do {
      uVar12 = uVar4 >> 0xc;
      uVar5 = uVar16 & uVar1;
      uVar13 = uVar9 & 0xf800000;
      iVar2 = iVar2 + -1;
      uVar4 = uVar4 + iVar7;
      uVar16 = uVar16 + iVar6;
      uVar9 = uVar9 + iVar14;
      *(undefined2 *)puVar3 =
           *(undefined2 *)
            (iVar11 + (uVar13 >> 0xe) +
            (uint)*(byte *)(iVar8 + (uVar1 & uVar12 | uVar5 >> 0x14)) * 2);
      puVar3 = (undefined4 *)((int)puVar3 + 2);
      if (iVar2 < 0) {
        return;
      }
joined_r0x4a00e8e0:
      for (; 0 < iVar2; iVar2 = iVar2 + -2) {
        uVar12 = uVar4 >> 0xc;
        uVar15 = uVar16 & uVar1;
        uVar5 = uVar16 + iVar6;
        uVar17 = uVar9 & 0xf800000;
        uVar13 = uVar4 + iVar7;
        uVar10 = uVar9 + iVar14;
        uVar16 = uVar5 + iVar6;
        uVar4 = uVar13 + iVar7;
        uVar9 = uVar10 + iVar14;
        *puVar3 = CONCAT22(*(undefined2 *)
                            (iVar11 + ((uVar10 & 0xf800000) >> 0xe) +
                            (uint)*(byte *)(iVar8 + (uVar1 & uVar13 >> 0xc | (uVar5 & uVar1) >> 0x14
                                                    )) * 2),
                           *(undefined2 *)
                            (iVar11 + (uVar17 >> 0xe) +
                            (uint)*(byte *)(iVar8 + (uVar1 & uVar12 | uVar15 >> 0x14)) * 2));
        puVar3 = puVar3 + 1;
      }
    } while (-1 < iVar2);
    return;
  }
  iVar11 = iVar11 + ((uVar9 & 0xf800000) >> 0xe);
  if (((uint)puVar3 & 3) == 0) goto joined_r0x4a00e82c;
  do {
    uVar9 = uVar4 >> 0xc;
    uVar12 = uVar16 & uVar1;
    iVar2 = iVar2 + -1;
    uVar4 = uVar4 + iVar7;
    uVar16 = uVar16 + iVar6;
    *(undefined2 *)puVar3 =
         *(undefined2 *)(iVar11 + (uint)*(byte *)(iVar8 + (uVar1 & uVar9 | uVar12 >> 0x14)) * 2);
    puVar3 = (undefined4 *)((int)puVar3 + 2);
    if (iVar2 < 0) {
      return;
    }
joined_r0x4a00e82c:
    for (; 0 < iVar2; iVar2 = iVar2 + -2) {
      uVar9 = uVar4 >> 0xc;
      uVar13 = uVar16 & uVar1;
      uVar12 = uVar16 + iVar6;
      uVar5 = uVar4 + iVar7;
      uVar16 = uVar12 + iVar6;
      uVar4 = uVar5 + iVar7;
      *puVar3 = CONCAT22(*(undefined2 *)
                          (iVar11 + (uint)*(byte *)(iVar8 + (uVar1 & uVar5 >> 0xc |
                                                            (uVar12 & uVar1) >> 0x14)) * 2),
                         *(undefined2 *)
                          (iVar11 + (uint)*(byte *)(iVar8 + (uVar1 & uVar9 | uVar13 >> 0x14)) * 2));
      puVar3 = puVar3 + 1;
    }
  } while (-1 < iVar2);
  return;
}



// Address: 4a00e960

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a00e960(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  uVar6 = param_1[3];
  iVar7 = param_1[4];
  iVar8 = param_1[5];
  iVar11 = *(int *)PTR_LAB_4a00ebc4;
  uVar3 = param_1[6];
  iVar9 = param_1[7];
  puVar5 = (uint *)param_1[1];
  uVar10 = param_1[9];
  uVar16 = param_1[2];
  iVar4 = *param_1 + -1;
  if ((uVar10 & 0x80000000) == 0) {
    iVar1 = param_1[10];
    if (((uint)puVar5 & 3) == 0) goto joined_r0x4a00eb04;
    do {
      uVar12 = (uint)*(ushort *)(iVar9 + (uVar3 & uVar6 >> 0xd | (uVar16 & uVar3) >> 0x14) * 2);
      iVar13 = iVar11 + ((uVar10 & 0xf800000) >> 0xc);
      iVar4 = iVar4 + -1;
      uVar6 = uVar6 + iVar8;
      *(ushort *)puVar5 =
           *(ushort *)(iVar13 + ((uVar12 & 0xffff7fff) >> 5) * 2) |
           *(short *)(iVar13 + (uVar12 & 0x1f) * 0x40) << 0xb;
      uVar16 = uVar16 + iVar7;
      uVar10 = uVar10 + iVar1;
      puVar5 = (uint *)((int)puVar5 + 2);
      if (iVar4 < 0) {
        return;
      }
joined_r0x4a00eb04:
      for (; 0 < iVar4; iVar4 = iVar4 + -2) {
        uVar14 = (uint)*(ushort *)(iVar9 + (uVar3 & uVar6 >> 0xd | (uVar16 & uVar3) >> 0x14) * 2);
        uVar12 = uVar10 + iVar1;
        iVar13 = iVar11 + ((uVar10 & 0xf800000) >> 0xc);
        uVar15 = (uint)*(ushort *)
                        (iVar9 + (uVar3 & uVar6 + iVar8 >> 0xd | (uVar16 + iVar7 & uVar3) >> 0x14) *
                                 2);
        uVar10 = uVar12 + iVar1;
        iVar2 = iVar11 + ((uVar12 & 0xf800000) >> 0xc);
        uVar6 = uVar6 + iVar8 + iVar8;
        uVar16 = uVar16 + iVar7 + iVar7;
        *puVar5 = (uint)*(ushort *)(iVar13 + ((uVar14 & 0xffff7fff) >> 5) * 2) |
                  (uint)*(ushort *)(iVar13 + (uVar14 & 0x1f) * 0x40) << 0xb |
                  ((uint)*(ushort *)(iVar2 + ((uVar15 & 0xffff7fff) >> 5) * 2) |
                  (uint)*(ushort *)(iVar2 + (uVar15 & 0x1f) * 0x40) << 0xb) << 0x10;
        puVar5 = puVar5 + 1;
      }
    } while (-1 < iVar4);
    return;
  }
  iVar11 = iVar11 + ((uVar10 & 0xf800000) >> 0xc);
  if (((uint)puVar5 & 3) == 0) goto joined_r0x4a00e9f4;
  do {
    uVar10 = (uint)*(ushort *)(iVar9 + (uVar3 & uVar6 >> 0xd | (uVar16 & uVar3) >> 0x14) * 2);
    iVar4 = iVar4 + -1;
    uVar6 = uVar6 + iVar8;
    uVar16 = uVar16 + iVar7;
    *(ushort *)puVar5 =
         *(ushort *)(iVar11 + ((uVar10 & 0xffff7fff) >> 5) * 2) |
         *(short *)(iVar11 + (uVar10 & 0x1f) * 0x40) << 0xb;
    puVar5 = (uint *)((int)puVar5 + 2);
    if (iVar4 < 0) {
      return;
    }
joined_r0x4a00e9f4:
    for (; 0 < iVar4; iVar4 = iVar4 + -2) {
      uVar10 = (uint)*(ushort *)(iVar9 + (uVar3 & uVar6 >> 0xd | (uVar16 & uVar3) >> 0x14) * 2);
      uVar12 = (uint)*(ushort *)
                      (iVar9 + (uVar3 & uVar6 + iVar8 >> 0xd | (uVar16 + iVar7 & uVar3) >> 0x14) * 2
                      );
      uVar6 = uVar6 + iVar8 + iVar8;
      uVar16 = uVar16 + iVar7 + iVar7;
      *puVar5 = (uint)*(ushort *)(iVar11 + ((uVar10 & 0xffff7fff) >> 5) * 2) |
                (uint)*(ushort *)(iVar11 + (uVar10 & 0x1f) * 0x40) << 0xb |
                ((uint)*(ushort *)(iVar11 + ((uVar12 & 0xffff7fff) >> 5) * 2) |
                (uint)*(ushort *)(iVar11 + (uVar12 & 0x1f) * 0x40) << 0xb) << 0x10;
      puVar5 = puVar5 + 1;
    }
  } while (-1 < iVar4);
  return;
}



// Address: 4a00ebc8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a00ebc8(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  
  uVar7 = param_1[3];
  iVar8 = param_1[4];
  iVar9 = param_1[5];
  iVar15 = *(int *)PTR_LAB_4a00ee80;
  uVar4 = param_1[6];
  iVar10 = param_1[7];
  puVar6 = (uint *)param_1[1];
  uVar13 = param_1[9];
  uVar16 = param_1[2];
  iVar5 = *param_1 + -1;
  if ((uVar13 & 0x80000000) == 0) {
    iVar3 = param_1[10];
    if (((uint)puVar6 & 3) == 0) goto joined_r0x4a00ed9c;
    do {
      uVar1 = *(ushort *)(iVar10 + (uVar4 & uVar7 >> 0xd | (uVar16 & uVar4) >> 0x14) * 2);
      iVar11 = iVar15 + ((uVar13 & 0xf800000) >> 0xc);
      iVar5 = iVar5 + -1;
      uVar7 = uVar7 + iVar9;
      *(ushort *)puVar6 =
           *(ushort *)(iVar11 + ((uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5) * 2) |
           *(short *)(iVar11 + (uint)(uVar1 >> 0xb) * 0x40) << 0xb;
      uVar16 = uVar16 + iVar8;
      uVar13 = uVar13 + iVar3;
      puVar6 = (uint *)((int)puVar6 + 2);
      if (iVar5 < 0) {
        return;
      }
joined_r0x4a00ed9c:
      for (; 0 < iVar5; iVar5 = iVar5 + -2) {
        uVar14 = uVar13 + iVar3;
        uVar1 = *(ushort *)(iVar10 + (uVar4 & uVar7 >> 0xd | (uVar16 & uVar4) >> 0x14) * 2);
        uVar2 = *(ushort *)
                 (iVar10 + (uVar4 & uVar7 + iVar9 >> 0xd | (uVar16 + iVar8 & uVar4) >> 0x14) * 2);
        iVar12 = iVar15 + ((uVar13 & 0xf800000) >> 0xc);
        uVar13 = uVar14 + iVar3;
        iVar11 = iVar15 + ((uVar14 & 0xf800000) >> 0xc);
        uVar7 = uVar7 + iVar9 + iVar9;
        uVar16 = uVar16 + iVar8 + iVar8;
        *puVar6 = (uint)*(ushort *)(iVar12 + ((uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5) * 2) |
                  (uint)*(ushort *)(iVar12 + (uint)(uVar1 >> 0xb) * 0x40) << 0xb |
                  ((uint)*(ushort *)(iVar11 + ((uVar2 & 0x7ff) >> 6 | (uVar2 & 0x1f) << 5) * 2) |
                  (uint)*(ushort *)(iVar11 + (uint)(uVar2 >> 0xb) * 0x40) << 0xb) << 0x10;
        puVar6 = puVar6 + 1;
      }
    } while (-1 < iVar5);
    return;
  }
  iVar15 = iVar15 + ((uVar13 & 0xf800000) >> 0xc);
  if (((uint)puVar6 & 3) == 0) goto joined_r0x4a00ec6c;
  do {
    uVar1 = *(ushort *)(iVar10 + (uVar4 & uVar7 >> 0xd | (uVar16 & uVar4) >> 0x14) * 2);
    iVar5 = iVar5 + -1;
    uVar7 = uVar7 + iVar9;
    uVar16 = uVar16 + iVar8;
    *(ushort *)puVar6 =
         *(ushort *)(iVar15 + ((uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5) * 2) |
         *(short *)(iVar15 + (uint)(uVar1 >> 0xb) * 0x40) << 0xb;
    puVar6 = (uint *)((int)puVar6 + 2);
    if (iVar5 < 0) {
      return;
    }
joined_r0x4a00ec6c:
    for (; 0 < iVar5; iVar5 = iVar5 + -2) {
      uVar1 = *(ushort *)(iVar10 + (uVar4 & uVar7 >> 0xd | (uVar16 & uVar4) >> 0x14) * 2);
      uVar2 = *(ushort *)
               (iVar10 + (uVar4 & uVar7 + iVar9 >> 0xd | (uVar16 + iVar8 & uVar4) >> 0x14) * 2);
      uVar7 = uVar7 + iVar9 + iVar9;
      uVar16 = uVar16 + iVar8 + iVar8;
      *puVar6 = (uint)*(ushort *)(iVar15 + ((uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5) * 2) |
                (uint)*(ushort *)(iVar15 + (uint)(uVar1 >> 0xb) * 0x40) << 0xb |
                ((uint)*(ushort *)(iVar15 + ((uVar2 & 0x7ff) >> 6 | (uVar2 & 0x1f) << 5) * 2) |
                (uint)*(ushort *)(iVar15 + (uint)(uVar2 >> 0xb) * 0x40) << 0xb) << 0x10;
      puVar6 = puVar6 + 1;
    }
  } while (-1 < iVar5);
  return;
}



// Address: 4a00ee84

void FUN_4a00ee84(int *param_1)

{
  int *piVar1;
  byte bVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined1 auStack_34 [8];
  int local_2c [2];
  
  uVar5 = param_1[6];
  iVar11 = param_1[7];
  iVar12 = param_1[8];
  uVar8 = param_1[3];
  iVar9 = param_1[4];
  iVar10 = param_1[5];
  uVar16 = param_1[2];
  puVar17 = (uint *)auStack_34;
  local_2c[1] = *(int *)PTR_LAB_4a00f19c;
  iVar6 = *param_1 + -1;
  uVar13 = param_1[9];
  puVar7 = (uint *)param_1[1];
  if ((uVar13 & 0x80000000) == 0) {
    local_2c[0] = param_1[10];
    puVar3 = (uint *)auStack_34;
    if (((uint)puVar7 & 3) == 0) goto joined_r0x4a00f098;
    do {
      bVar2 = *(byte *)(iVar11 + (uVar5 & uVar8 >> 0xc | (uVar16 & uVar5) >> 0x15));
      if ((bool)((byte)((uVar16 & uVar5) >> 0x14) & 1)) {
        bVar2 = bVar2 >> 4;
      }
      uVar15 = (uint)*(ushort *)(iVar12 + (bVar2 & 0xf) * 2);
      iVar4 = *(int *)((int)puVar17 + 0xc) + ((uVar13 & 0xf800000) >> 0xc);
      iVar6 = iVar6 + -1;
      uVar16 = uVar16 + iVar9;
      uVar8 = uVar8 + iVar10;
      *(ushort *)puVar7 =
           *(ushort *)(iVar4 + ((uVar15 & 0xf00) >> 2 | (uVar15 & 0xf0) >> 3) * 2) |
           *(short *)(iVar4 + (uVar15 & 0xf) * 0x80) << 0xb;
      piVar1 = (int *)((int)puVar17 + 8);
      if (iVar6 < 0) {
        puVar17 = (uint *)((int)puVar17 + 0x10);
      }
      uVar13 = uVar13 + *piVar1;
      puVar7 = (uint *)((int)puVar7 + 2);
      puVar3 = puVar17;
      if (iVar6 < 0) {
        return;
      }
joined_r0x4a00f098:
      while (puVar17 = puVar3, 0 < iVar6) {
        bVar2 = *(byte *)(iVar11 + (uVar5 & uVar8 >> 0xc | (uVar16 & uVar5) >> 0x15));
        iVar4 = puVar17[3] + ((uVar13 & 0xf800000) >> 0xc);
        if ((bool)((byte)((uVar16 & uVar5) >> 0x14) & 1)) {
          bVar2 = bVar2 >> 4;
        }
        uVar14 = (uint)*(ushort *)(iVar12 + (bVar2 & 0xf) * 2);
        uVar15 = uVar16 + iVar9 & uVar5;
        bVar2 = *(byte *)(iVar11 + (uVar5 & uVar8 + iVar10 >> 0xc | uVar15 >> 0x15));
        iVar6 = iVar6 + -2;
        if ((bool)((byte)(uVar15 >> 0x14) & 1)) {
          bVar2 = bVar2 >> 4;
        }
        *puVar17 = (uint)bVar2 << 0x1c;
        uVar16 = uVar16 + iVar9 + iVar9;
        puVar17[1] = (uint)*(ushort *)(iVar4 + ((uVar14 & 0xf00) >> 2 | (uVar14 & 0xf0) >> 3) * 2) |
                     (uint)*(ushort *)(iVar4 + (uVar14 & 0xf) * 0x80) << 0xb;
        iVar4 = puVar17[3] + ((puVar17[2] + uVar13 & 0xf800000) >> 0xc);
        uVar8 = uVar8 + iVar10 + iVar10;
        uVar13 = puVar17[2] + uVar13 + puVar17[2];
        uVar15 = (uint)*(ushort *)(iVar12 + (*puVar17 >> 0x1b | *puVar17 << 5));
        *puVar7 = puVar17[1] |
                  ((uint)*(ushort *)(iVar4 + ((uVar15 & 0xf00) >> 2 | (uVar15 & 0xf0) >> 3) * 2) |
                  (uint)*(ushort *)(iVar4 + (uVar15 & 0xf) * 0x80) << 0xb) << 0x10;
        puVar7 = puVar7 + 1;
        puVar3 = puVar17;
      }
    } while (-1 < iVar6);
    return;
  }
  iVar4 = *(int *)PTR_LAB_4a00f19c + ((uVar13 & 0xf800000) >> 0xc);
  if (((uint)puVar7 & 3) == 0) goto joined_r0x4a00ef40;
  while( true ) {
    uVar13 = uVar16 & uVar5;
    bVar2 = *(byte *)(iVar11 + (uVar5 & uVar8 >> 0xc | uVar13 >> 0x15));
    uVar16 = uVar16 + iVar9;
    uVar8 = uVar8 + iVar10;
    if ((bool)((byte)(uVar13 >> 0x14) & 1)) {
      bVar2 = bVar2 >> 4;
    }
    uVar13 = (uint)*(ushort *)(iVar12 + (bVar2 & 0xf) * 2);
    iVar6 = iVar6 + -1;
    *(ushort *)puVar7 =
         *(ushort *)(iVar4 + ((uVar13 & 0xf00) >> 2 | (uVar13 & 0xf0) >> 3) * 2) |
         *(short *)(iVar4 + (uVar13 & 0xf) * 0x80) << 0xb;
    puVar7 = (uint *)((int)puVar7 + 2);
    if (iVar6 < 0) break;
joined_r0x4a00ef40:
    for (; 0 < iVar6; iVar6 = iVar6 + -2) {
      bVar2 = *(byte *)(iVar11 + (uVar5 & uVar8 >> 0xc | (uVar16 & uVar5) >> 0x15));
      if ((bool)((byte)((uVar16 & uVar5) >> 0x14) & 1)) {
        bVar2 = bVar2 >> 4;
      }
      uVar15 = (uint)*(ushort *)(iVar12 + (bVar2 & 0xf) * 2);
      uVar13 = uVar16 + iVar9 & uVar5;
      bVar2 = *(byte *)(iVar11 + (uVar5 & uVar8 + iVar10 >> 0xc | uVar13 >> 0x15));
      if ((bool)((byte)(uVar13 >> 0x14) & 1)) {
        bVar2 = bVar2 >> 4;
      }
      uVar13 = (uint)*(ushort *)(iVar12 + (bVar2 & 0xf) * 2);
      uVar16 = uVar16 + iVar9 + iVar9;
      uVar8 = uVar8 + iVar10 + iVar10;
      *puVar7 = (uint)*(ushort *)(iVar4 + ((uVar15 & 0xf00) >> 2 | (uVar15 & 0xf0) >> 3) * 2) |
                (uint)*(ushort *)(iVar4 + (uVar15 & 0xf) * 0x80) << 0xb |
                ((uint)*(ushort *)(iVar4 + ((uVar13 & 0xf00) >> 2 | (uVar13 & 0xf0) >> 3) * 2) |
                (uint)*(ushort *)(iVar4 + (uVar13 & 0xf) * 0x80) << 0xb) << 0x10;
      puVar7 = puVar7 + 1;
    }
    if (iVar6 < 0) {
      return;
    }
  }
  return;
}



// Address: 4a00f1a0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a00f1a0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  
  uVar5 = param_1[3];
  iVar6 = param_1[4];
  iVar7 = param_1[5];
  iVar14 = *(int *)PTR_LAB_4a00f458;
  uVar2 = param_1[6];
  iVar8 = param_1[7];
  puVar4 = (uint *)param_1[1];
  uVar11 = param_1[9];
  uVar16 = param_1[2];
  iVar3 = *param_1 + -1;
  if ((uVar11 & 0x80000000) == 0) {
    iVar1 = param_1[10];
    if (((uint)puVar4 & 3) == 0) goto joined_r0x4a00f374;
    do {
      uVar12 = (uint)*(ushort *)(iVar8 + (uVar2 & uVar5 >> 0xd | (uVar16 & uVar2) >> 0x14) * 2);
      iVar9 = iVar14 + ((uVar11 & 0xf800000) >> 0xc);
      iVar3 = iVar3 + -1;
      uVar5 = uVar5 + iVar7;
      *(ushort *)puVar4 =
           *(ushort *)(iVar9 + ((uVar12 & 0xf00) >> 2 | (uVar12 & 0xf0) >> 3) * 2) |
           *(short *)(iVar9 + (uVar12 & 0xf) * 0x80) << 0xb;
      uVar16 = uVar16 + iVar6;
      uVar11 = uVar11 + iVar1;
      puVar4 = (uint *)((int)puVar4 + 2);
      if (iVar3 < 0) {
        return;
      }
joined_r0x4a00f374:
      for (; 0 < iVar3; iVar3 = iVar3 + -2) {
        uVar13 = uVar11 + iVar1;
        uVar12 = (uint)*(ushort *)(iVar8 + (uVar2 & uVar5 >> 0xd | (uVar16 & uVar2) >> 0x14) * 2);
        uVar15 = (uint)*(ushort *)
                        (iVar8 + (uVar2 & uVar5 + iVar7 >> 0xd | (uVar16 + iVar6 & uVar2) >> 0x14) *
                                 2);
        iVar10 = iVar14 + ((uVar11 & 0xf800000) >> 0xc);
        uVar11 = uVar13 + iVar1;
        iVar9 = iVar14 + ((uVar13 & 0xf800000) >> 0xc);
        uVar5 = uVar5 + iVar7 + iVar7;
        uVar16 = uVar16 + iVar6 + iVar6;
        *puVar4 = (uint)*(ushort *)(iVar10 + ((uVar12 & 0xf00) >> 2 | (uVar12 & 0xf0) >> 3) * 2) |
                  (uint)*(ushort *)(iVar10 + (uVar12 & 0xf) * 0x80) << 0xb |
                  ((uint)*(ushort *)(iVar9 + ((uVar15 & 0xf00) >> 2 | (uVar15 & 0xf0) >> 3) * 2) |
                  (uint)*(ushort *)(iVar9 + (uVar15 & 0xf) * 0x80) << 0xb) << 0x10;
        puVar4 = puVar4 + 1;
      }
    } while (-1 < iVar3);
    return;
  }
  iVar14 = iVar14 + ((uVar11 & 0xf800000) >> 0xc);
  if (((uint)puVar4 & 3) == 0) goto joined_r0x4a00f244;
  do {
    uVar11 = (uint)*(ushort *)(iVar8 + (uVar2 & uVar5 >> 0xd | (uVar16 & uVar2) >> 0x14) * 2);
    iVar3 = iVar3 + -1;
    uVar5 = uVar5 + iVar7;
    uVar16 = uVar16 + iVar6;
    *(ushort *)puVar4 =
         *(ushort *)(iVar14 + ((uVar11 & 0xf00) >> 2 | (uVar11 & 0xf0) >> 3) * 2) |
         *(short *)(iVar14 + (uVar11 & 0xf) * 0x80) << 0xb;
    puVar4 = (uint *)((int)puVar4 + 2);
    if (iVar3 < 0) {
      return;
    }
joined_r0x4a00f244:
    for (; 0 < iVar3; iVar3 = iVar3 + -2) {
      uVar11 = (uint)*(ushort *)(iVar8 + (uVar2 & uVar5 >> 0xd | (uVar16 & uVar2) >> 0x14) * 2);
      uVar12 = (uint)*(ushort *)
                      (iVar8 + (uVar2 & uVar5 + iVar7 >> 0xd | (uVar16 + iVar6 & uVar2) >> 0x14) * 2
                      );
      uVar5 = uVar5 + iVar7 + iVar7;
      uVar16 = uVar16 + iVar6 + iVar6;
      *puVar4 = (uint)*(ushort *)(iVar14 + ((uVar11 & 0xf00) >> 2 | (uVar11 & 0xf0) >> 3) * 2) |
                (uint)*(ushort *)(iVar14 + (uVar11 & 0xf) * 0x80) << 0xb |
                ((uint)*(ushort *)(iVar14 + ((uVar12 & 0xf00) >> 2 | (uVar12 & 0xf0) >> 3) * 2) |
                (uint)*(ushort *)(iVar14 + (uVar12 & 0xf) * 0x80) << 0xb) << 0x10;
      puVar4 = puVar4 + 1;
    }
  } while (-1 < iVar3);
  return;
}



// Address: 4a00f45c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a00f45c(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  
  uVar5 = param_1[3];
  iVar6 = param_1[4];
  iVar7 = param_1[5];
  iVar13 = *(int *)PTR_LAB_4a00f710;
  uVar2 = param_1[6];
  iVar8 = param_1[7];
  puVar4 = (uint *)param_1[1];
  uVar10 = param_1[9];
  uVar15 = param_1[2];
  iVar3 = *param_1 + -1;
  if ((uVar10 & 0x80000000) == 0) {
    iVar1 = param_1[10];
    if (((uint)puVar4 & 3) == 0) goto joined_r0x4a00f62c;
    do {
      uVar11 = *(uint *)(iVar8 + (uVar2 & uVar5 >> 0xe | (uVar15 & uVar2) >> 0x14) * 4);
      iVar16 = iVar13 + ((uVar10 & 0xf800000) >> 0xc);
      iVar3 = iVar3 + -1;
      uVar5 = uVar5 + iVar7;
      *(ushort *)puVar4 =
           *(ushort *)(iVar16 + ((uVar11 & 0xffff) >> 0xb | (uVar11 & 0xf8) << 2) * 2) |
           *(short *)(iVar16 + (uVar11 >> 0xe & 0x3e0) * 2) << 0xb;
      uVar15 = uVar15 + iVar6;
      uVar10 = uVar10 + iVar1;
      puVar4 = (uint *)((int)puVar4 + 2);
      if (iVar3 < 0) {
        return;
      }
joined_r0x4a00f62c:
      for (; 0 < iVar3; iVar3 = iVar3 + -2) {
        uVar12 = uVar10 + iVar1;
        uVar11 = *(uint *)(iVar8 + (uVar2 & uVar5 >> 0xe | (uVar15 & uVar2) >> 0x14) * 4);
        uVar14 = *(uint *)(iVar8 + (uVar2 & uVar5 + iVar7 >> 0xe | (uVar15 + iVar6 & uVar2) >> 0x14)
                                   * 4);
        iVar9 = iVar13 + ((uVar10 & 0xf800000) >> 0xc);
        uVar10 = uVar12 + iVar1;
        iVar16 = iVar13 + ((uVar12 & 0xf800000) >> 0xc);
        uVar5 = uVar5 + iVar7 + iVar7;
        uVar15 = uVar15 + iVar6 + iVar6;
        *puVar4 = (uint)*(ushort *)(iVar9 + ((uVar11 & 0xffff) >> 0xb | (uVar11 & 0xf8) << 2) * 2) |
                  (uint)*(ushort *)(iVar9 + (uVar11 >> 0xe & 0x3e0) * 2) << 0xb |
                  ((uint)*(ushort *)(iVar16 + ((uVar14 & 0xffff) >> 0xb | (uVar14 & 0xf8) << 2) * 2)
                  | (uint)*(ushort *)(iVar16 + (uVar14 >> 0xe & 0x3e0) * 2) << 0xb) << 0x10;
        puVar4 = puVar4 + 1;
      }
    } while (-1 < iVar3);
    return;
  }
  iVar13 = iVar13 + ((uVar10 & 0xf800000) >> 0xc);
  if (((uint)puVar4 & 3) == 0) goto joined_r0x4a00f500;
  do {
    uVar10 = *(uint *)(iVar8 + (uVar2 & uVar5 >> 0xe | (uVar15 & uVar2) >> 0x14) * 4);
    iVar3 = iVar3 + -1;
    uVar5 = uVar5 + iVar7;
    uVar15 = uVar15 + iVar6;
    *(ushort *)puVar4 =
         *(ushort *)(iVar13 + ((uVar10 & 0xffff) >> 0xb | (uVar10 & 0xf8) << 2) * 2) |
         *(short *)(iVar13 + (uVar10 >> 0xe & 0x3e0) * 2) << 0xb;
    puVar4 = (uint *)((int)puVar4 + 2);
    if (iVar3 < 0) {
      return;
    }
joined_r0x4a00f500:
    for (; 0 < iVar3; iVar3 = iVar3 + -2) {
      uVar11 = *(uint *)(iVar8 + (uVar2 & uVar5 >> 0xe | (uVar15 & uVar2) >> 0x14) * 4);
      uVar10 = *(uint *)(iVar8 + (uVar2 & uVar5 + iVar7 >> 0xe | (uVar15 + iVar6 & uVar2) >> 0x14) *
                                 4);
      uVar5 = uVar5 + iVar7 + iVar7;
      uVar15 = uVar15 + iVar6 + iVar6;
      *puVar4 = (uint)*(ushort *)(iVar13 + ((uVar11 & 0xffff) >> 0xb | (uVar11 & 0xf8) << 2) * 2) |
                (uint)*(ushort *)(iVar13 + (uVar11 >> 0xe & 0x3e0) * 2) << 0xb |
                ((uint)*(ushort *)(iVar13 + ((uVar10 & 0xffff) >> 0xb | (uVar10 & 0xf8) << 2) * 2) |
                (uint)*(ushort *)(iVar13 + (uVar10 >> 0xe & 0x3e0) * 2) << 0xb) << 0x10;
      puVar4 = puVar4 + 1;
    }
  } while (-1 < iVar3);
  return;
}



// Address: 4a00f718

void FUN_4a00f718(int *param_1)

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
  
  iVar9 = *(int *)PTR_LAB_4a00f7e0;
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



// Address: 4a00f7e4

void FUN_4a00f7e4(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar8 = *(int *)PTR_LAB_4a00f8a4;
  iVar12 = *param_1 + -1;
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  iVar13 = param_1[4];
  iVar9 = param_1[5];
  uVar7 = param_1[6];
  uVar2 = param_1[9];
  iVar10 = param_1[7];
  iVar11 = param_1[8];
  puVar4 = (ushort *)param_1[1];
  do {
    iVar12 = iVar12 + -1;
    uVar3 = (uint)*(ushort *)
                   (iVar11 + (uint)*(byte *)(iVar10 + (uVar7 & uVar6 >> 0xc |
                                                      (uVar5 & uVar7) >> 0x14)) * 2);
    uVar6 = uVar6 + iVar9;
    uVar5 = uVar5 + iVar13;
    uVar1 = (uVar3 & 0xffff7fff) >> 5;
    *puVar4 = *(ushort *)(iVar8 + (uVar2 & 0x1f) * 0x800 + uVar1 * 2) & 0x1f |
              *(ushort *)(iVar8 + (uVar2 & 0x7c0) * 0x20 + uVar1 * 2) & 0xffe0 |
              *(ushort *)(iVar8 + (((uVar2 & 0xf800) >> 6) + 0x8000) * 2 + (uVar3 & 0x1f) * 2);
    puVar4 = puVar4 + 1;
  } while (-1 < iVar12);
  return;
}



// Address: 4a00f8a8

void FUN_4a00f8a8(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar8 = *(int *)PTR_LAB_4a00f954;
  iVar11 = *param_1 + -1;
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  iVar9 = param_1[4];
  iVar12 = param_1[5];
  uVar2 = param_1[9];
  uVar7 = param_1[6];
  iVar10 = param_1[7];
  puVar4 = (ushort *)param_1[1];
  do {
    uVar3 = (uint)*(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
    iVar11 = iVar11 + -1;
    uVar6 = uVar6 + iVar12;
    uVar1 = (uVar3 & 0xffff7fff) >> 5;
    uVar5 = uVar5 + iVar9;
    *puVar4 = *(ushort *)(iVar8 + (uVar2 & 0x1f) * 0x800 + uVar1 * 2) & 0x1f |
              *(ushort *)(iVar8 + (uVar2 & 0x7c0) * 0x20 + uVar1 * 2) & 0xffe0 |
              *(ushort *)(iVar8 + (((uVar2 & 0xf800) >> 6) + 0x8000) * 2 + (uVar3 & 0x1f) * 2);
    puVar4 = puVar4 + 1;
  } while (-1 < iVar11);
  return;
}



// Address: 4a00f958

void FUN_4a00f958(int *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar8 = *(int *)PTR_LAB_4a00fa0c;
  iVar11 = *param_1 + -1;
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  iVar9 = param_1[4];
  iVar12 = param_1[5];
  uVar2 = param_1[9];
  uVar7 = param_1[6];
  iVar10 = param_1[7];
  puVar4 = (ushort *)param_1[1];
  do {
    uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
    iVar11 = iVar11 + -1;
    uVar6 = uVar6 + iVar12;
    uVar3 = (uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5;
    uVar5 = uVar5 + iVar9;
    *puVar4 = *(ushort *)(iVar8 + (uVar2 & 0x1f) * 0x800 + uVar3 * 2) & 0x1f |
              *(ushort *)(iVar8 + (uVar2 & 0x7c0) * 0x20 + uVar3 * 2) & 0xffe0 |
              *(ushort *)(iVar8 + (((uVar2 & 0xf800) >> 6) + 0x8000) * 2 + (uint)(uVar1 >> 0xb) * 2)
    ;
    puVar4 = puVar4 + 1;
  } while (-1 < iVar11);
  return;
}



// Address: 4a00fa10

void FUN_4a00fa10(int *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar11 = *param_1 + -1;
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  iVar7 = param_1[4];
  iVar12 = param_1[5];
  uVar2 = param_1[9];
  uVar8 = param_1[6];
  iVar9 = param_1[7];
  iVar10 = param_1[8];
  puVar4 = (ushort *)param_1[1];
  do {
    uVar3 = uVar5 & uVar8;
    bVar1 = *(byte *)(iVar9 + (uVar8 & uVar6 >> 0xc | uVar3 >> 0x15));
    uVar6 = uVar6 + iVar12;
    if ((bool)((byte)(uVar3 >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    uVar3 = (uint)*(ushort *)(iVar10 + (bVar1 & 0xf) * 2);
    uVar5 = uVar5 + iVar7;
    iVar11 = iVar11 + -1;
    *puVar4 = (ushort)((((uVar2 & 0xffff) >> 0xb) * (uVar3 & 0xf) >> 4) << 0xb) |
              (ushort)((((uVar2 & 0x7ff) >> 5) * ((uVar3 & 0xff) >> 4) >> 4) << 5) |
              (ushort)(((uVar3 & 0xfff) >> 8) * (uVar2 & 0x1f) >> 4);
    puVar4 = puVar4 + 1;
  } while (-1 < iVar11);
  return;
}



// Address: 4a00fab8

void FUN_4a00fab8(int *param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = *param_1 + -1;
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  iVar10 = param_1[4];
  iVar7 = param_1[5];
  uVar1 = param_1[9];
  uVar5 = param_1[6];
  iVar8 = param_1[7];
  puVar2 = (ushort *)param_1[1];
  do {
    uVar6 = (uint)*(ushort *)(iVar8 + (uVar5 & uVar4 >> 0xd | (uVar3 & uVar5) >> 0x14) * 2);
    iVar9 = iVar9 + -1;
    uVar4 = uVar4 + iVar7;
    uVar3 = uVar3 + iVar10;
    *puVar2 = (ushort)((((uVar1 & 0xffff) >> 0xb) * (uVar6 & 0xf) >> 4) << 0xb) |
              (ushort)((((uVar1 & 0x7ff) >> 5) * ((uVar6 & 0xff) >> 4) >> 4) << 5) |
              (ushort)(((uVar6 & 0xfff) >> 8) * (uVar1 & 0x1f) >> 4);
    puVar2 = puVar2 + 1;
  } while (-1 < iVar9);
  return;
}



// Address: 4a00fb50

void FUN_4a00fb50(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar8 = *(int *)PTR_LAB_4a00fc04;
  iVar11 = *param_1 + -1;
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  iVar9 = param_1[4];
  iVar12 = param_1[5];
  uVar1 = param_1[9];
  uVar7 = param_1[6];
  iVar10 = param_1[7];
  puVar4 = (ushort *)param_1[1];
  do {
    uVar2 = *(uint *)(iVar10 + (uVar7 & uVar6 >> 0xe | (uVar5 & uVar7) >> 0x14) * 4);
    iVar11 = iVar11 + -1;
    uVar3 = (uVar2 & 0xffff) >> 0xb | (uVar2 & 0xf8) << 2;
    uVar6 = uVar6 + iVar12;
    uVar5 = uVar5 + iVar9;
    *puVar4 = *(ushort *)(iVar8 + (uVar1 & 0x1f) * 0x800 + uVar3 * 2) & 0x1f |
              *(ushort *)(iVar8 + (uVar1 & 0x7c0) * 0x20 + uVar3 * 2) & 0xffe0 |
              *(ushort *)
               (iVar8 + (((uVar1 & 0xf800) >> 6) + 0x8000) * 2 + ((uVar2 & 0xffffff) >> 0x13) * 2);
    puVar4 = puVar4 + 1;
  } while (-1 < iVar11);
  return;
}



// Address: 4a00fc08

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a00fc08(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  
  uVar7 = *param_1;
  puVar11 = (uint *)param_1[1];
  iVar13 = uVar7 - 1;
  uVar16 = param_1[10];
  uVar17 = param_1[0xc];
  uVar2 = param_1[0xe];
  uVar3 = (param_1[9] & 0xfff0ffff) << 0xc;
  uVar4 = (param_1[0xd] & 0xfff0ffff) << 0xc;
  uVar8 = (param_1[0xb] & 0xfff0ffff) << 0xc;
  if (uVar2 == 0 && (uVar16 == 0 && uVar17 == 0)) {
    bVar18 = ((uint)puVar11 & 3) != 0;
    uVar3 = (param_1[9] & 0xf800) +
            ((param_1[0xb] & 0xffff) >> 5 & 0x7e0) + ((param_1[0xd] & 0xffff) >> 0xb);
    if (bVar18) {
      uVar7 = uVar7 - 1;
    }
    uVar4 = uVar3 | uVar3 * 0x10000;
    iVar13 = (int)uVar7 >> 3;
    puVar12 = puVar11;
    if (bVar18) {
      puVar12 = (uint *)((int)puVar11 + 2);
      *(short *)puVar11 = (short)uVar3;
    }
    uVar8 = (int)uVar7 >> 1 & 3;
    puVar11 = puVar12;
    if (uVar8 == 0) goto LAB_4a00fcc8;
    if (uVar8 == 1) goto LAB_4a00fcc4;
    if (uVar8 == 2) goto LAB_4a00fcc0;
    if (uVar8 == 3) {
      while( true ) {
        puVar11 = puVar12 + 1;
        *puVar12 = uVar4;
LAB_4a00fcc0:
        puVar12 = puVar11 + 1;
        *puVar11 = uVar4;
LAB_4a00fcc4:
        puVar11 = puVar12 + 1;
        *puVar12 = uVar4;
LAB_4a00fcc8:
        bVar18 = iVar13 == 0;
        iVar13 = iVar13 + -1;
        if (bVar18) break;
        puVar12 = puVar11 + 1;
        *puVar11 = uVar4;
      }
    }
    if ((uVar7 & 1) != 0) {
      *(short *)puVar11 = (short)uVar3;
    }
    return;
  }
  puVar12 = puVar11;
  iVar14 = iVar13;
  if (((uint)puVar11 & 3) == 0) goto LAB_4a00fd28;
  do {
    do {
      iVar14 = iVar13 + -1;
      puVar11 = (uint *)((int)puVar12 + 2);
      *(ushort *)puVar12 =
           ((ushort)(uVar3 >> 0xc) & 0xf800) +
           ((ushort)(uVar8 >> 0x11) & 0x7e0) + (ushort)(uVar4 >> 0x17);
      uVar3 = uVar3 + uVar16;
      uVar8 = uVar8 + uVar17;
      uVar4 = uVar4 + uVar2;
      if (iVar14 < 0) {
        return;
      }
LAB_4a00fd28:
      iVar13 = 0;
      puVar12 = puVar11;
    } while (iVar14 == 0);
    uVar7 = uVar8 >> 0x11;
    uVar1 = uVar4 >> 0x17;
    uVar6 = uVar3 >> 0xc;
    uVar5 = uVar3 + uVar16;
    uVar9 = uVar8 + uVar17;
    uVar10 = uVar2 + uVar4;
    uVar3 = uVar5 + uVar16;
    uVar4 = uVar10 + uVar2;
    uVar8 = uVar9 + uVar17;
    uVar15 = iVar14 - 2;
    puVar12 = puVar11 + 1;
    *puVar11 = (uVar7 & 0x7e0) + uVar1 + (uVar6 & 0xf800) & 0xfffeffff |
               ((uVar9 >> 0x11 & 0x7e0) + (uVar10 >> 0x17) + (uVar5 >> 0xc & 0xf800)) * 0x10000;
    iVar14 = 1;
    iVar13 = FUN_4a0015f0(~uVar15,0xfffffffe);
    puVar11 = puVar12;
    if (1 < iVar13 + 1) {
      do {
        uVar7 = uVar4 >> 0x17;
        uVar1 = uVar3 >> 0xc;
        uVar6 = uVar3 + uVar16;
        uVar5 = uVar2 + uVar4;
        uVar3 = uVar6 + uVar16;
        iVar14 = iVar14 + 1;
        uVar4 = uVar5 + uVar2;
        puVar12 = puVar11 + 1;
        *puVar11 = (uVar8 >> 0x11 & 0x7e0) + uVar7 + (uVar1 & 0xf800) & 0xfffeffff |
                   ((uVar8 + uVar17 >> 0x11 & 0x7e0) + (uVar5 >> 0x17) + (uVar6 >> 0xc & 0xf800)) *
                   0x10000;
        uVar8 = uVar8 + uVar17 + uVar17;
        uVar15 = uVar15 - 2;
        puVar11 = puVar12;
      } while (iVar14 < iVar13 + 1);
    }
    iVar13 = 0;
  } while (uVar15 == 0);
  return;
}



// Address: 4a00fe24

void FUN_4a00fe24(int *param_1)

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
  iVar8 = *(int *)PTR_LAB_4a00ff58;
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



// Address: 4a00ff5c

void FUN_4a00ff5c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
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
  uint uVar21;
  
  iVar16 = *param_1 + -1;
  uVar8 = param_1[2];
  uVar21 = param_1[3];
  iVar12 = param_1[4];
  iVar6 = *(int *)PTR_LAB_4a010088;
  iVar9 = param_1[5];
  uVar17 = param_1[6];
  iVar10 = param_1[7];
  iVar13 = param_1[8];
  iVar20 = param_1[10];
  iVar18 = param_1[0xc];
  iVar5 = param_1[0xe];
  uVar11 = (param_1[9] & 0xfff0ffffU) << 0xc;
  uVar14 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar15 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  puVar7 = (ushort *)param_1[1];
  do {
    uVar1 = uVar21 >> 0xc;
    uVar19 = uVar8 & uVar17;
    uVar21 = uVar21 + iVar9;
    uVar2 = uVar15 >> 0x17;
    uVar8 = uVar8 + iVar12;
    uVar3 = uVar11 >> 0x17;
    uVar11 = uVar11 + iVar20;
    uVar4 = uVar14 >> 0x17;
    uVar14 = uVar14 + iVar18;
    uVar19 = (uint)*(ushort *)
                    (iVar13 + (uint)*(byte *)(iVar10 + (uVar17 & uVar1 | uVar19 >> 0x14)) * 2);
    uVar15 = uVar15 + iVar5;
    uVar1 = (uVar19 & 0xffff7fff) >> 5;
    iVar16 = iVar16 + -1;
    *puVar7 = *(ushort *)(iVar6 + uVar4 * 0x800 + uVar1 * 2) & 0xffe0 |
              *(ushort *)(iVar6 + uVar2 * 0x800 + uVar1 * 2) & 0x1f |
              *(ushort *)(iVar6 + (uVar3 * 0x20 + 0x8000) * 2 + (uVar19 & 0x1f) * 2);
    puVar7 = puVar7 + 1;
  } while (-1 < iVar16);
  return;
}



// Address: 4a01008c

void FUN_4a01008c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
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
  int iVar19;
  uint uVar20;
  
  iVar16 = *param_1 + -1;
  uVar9 = param_1[2];
  uVar20 = param_1[3];
  iVar13 = param_1[4];
  iVar7 = *(int *)PTR_LAB_4a0101a8;
  iVar10 = param_1[5];
  uVar17 = param_1[6];
  iVar11 = param_1[7];
  iVar18 = param_1[10];
  iVar19 = param_1[0xc];
  iVar5 = param_1[0xe];
  uVar12 = (param_1[9] & 0xfff0ffffU) << 0xc;
  uVar14 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar15 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  puVar8 = (ushort *)param_1[1];
  do {
    uVar1 = uVar20 >> 0xd;
    uVar20 = uVar20 + iVar10;
    uVar6 = (uint)*(ushort *)(iVar11 + (uVar17 & uVar1 | (uVar9 & uVar17) >> 0x14) * 2);
    uVar9 = uVar9 + iVar13;
    uVar1 = uVar12 >> 0x17;
    uVar12 = uVar12 + iVar18;
    uVar2 = uVar14 >> 0x17;
    uVar14 = uVar14 + iVar19;
    uVar3 = uVar15 >> 0x17;
    uVar15 = uVar15 + iVar5;
    uVar4 = (uVar6 & 0xffff7fff) >> 5;
    iVar16 = iVar16 + -1;
    *puVar8 = *(ushort *)(iVar7 + uVar2 * 0x800 + uVar4 * 2) & 0xffe0 |
              *(ushort *)(iVar7 + uVar3 * 0x800 + uVar4 * 2) & 0x1f |
              *(ushort *)(iVar7 + (uVar1 * 0x20 + 0x8000) * 2 + (uVar6 & 0x1f) * 2);
    puVar8 = puVar8 + 1;
  } while (-1 < iVar16);
  return;
}



// Address: 4a0101ac

void FUN_4a0101ac(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
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
  int iVar19;
  uint uVar20;
  
  iVar16 = *param_1 + -1;
  uVar9 = param_1[2];
  uVar20 = param_1[3];
  iVar13 = param_1[4];
  iVar7 = *(int *)PTR_LAB_4a0102d8;
  iVar10 = param_1[5];
  uVar17 = param_1[6];
  iVar11 = param_1[7];
  iVar18 = param_1[10];
  iVar19 = param_1[0xc];
  iVar5 = param_1[0xe];
  uVar12 = (param_1[9] & 0xfff0ffffU) << 0xc;
  uVar14 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar15 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  puVar8 = (ushort *)param_1[1];
  do {
    uVar1 = uVar15 >> 0x17;
    uVar4 = *(ushort *)(iVar11 + (uVar17 & uVar20 >> 0xd | (uVar9 & uVar17) >> 0x14) * 2);
    uVar20 = uVar20 + iVar10;
    uVar9 = uVar9 + iVar13;
    uVar2 = uVar12 >> 0x17;
    uVar12 = uVar12 + iVar18;
    uVar3 = uVar14 >> 0x17;
    uVar14 = uVar14 + iVar19;
    uVar15 = uVar15 + iVar5;
    uVar6 = (uVar4 & 0x7ff) >> 6 | (uVar4 & 0x1f) << 5;
    iVar16 = iVar16 + -1;
    *puVar8 = *(ushort *)(iVar7 + uVar3 * 0x800 + uVar6 * 2) & 0xffe0 |
              *(ushort *)(iVar7 + uVar1 * 0x800 + uVar6 * 2) & 0x1f |
              *(ushort *)(iVar7 + (uVar2 * 0x20 + 0x8000) * 2 + (uint)(uVar4 >> 0xb) * 2);
    puVar8 = puVar8 + 1;
  } while (-1 < iVar16);
  return;
}



// Address: 4a0102dc

void FUN_4a0102dc(int *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  
  iVar7 = param_1[5];
  iVar11 = *param_1 + -1;
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  iVar16 = param_1[4];
  uVar12 = param_1[6];
  iVar8 = param_1[7];
  iVar17 = param_1[8];
  iVar13 = param_1[10];
  iVar14 = param_1[0xc];
  iVar15 = param_1[0xe];
  uVar10 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  puVar4 = (ushort *)param_1[1];
  uVar9 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar18 = (param_1[9] & 0xfff0ffffU) << 0xc;
  do {
    uVar2 = uVar5 & uVar12;
    bVar1 = *(byte *)(iVar8 + (uVar12 & uVar6 >> 0xc | uVar2 >> 0x15));
    uVar5 = uVar5 + iVar16;
    if ((bool)((byte)(uVar2 >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    uVar6 = uVar6 + iVar7;
    uVar3 = (uint)*(ushort *)(iVar17 + (bVar1 & 0xf) * 2);
    uVar2 = uVar10 & 0xfffffff;
    iVar11 = iVar11 + -1;
    uVar10 = uVar10 + iVar15;
    *puVar4 = (ushort)((((uVar18 & 0xfffffff) >> 0x17) * (uVar3 & 0xf) >> 4) << 0xb) |
              (ushort)((((uVar3 & 0xff) >> 4) * ((uVar9 & 0xfffffff) >> 0x16) >> 4) << 5) |
              (ushort)(((uVar3 & 0xfff) >> 8) * (uVar2 >> 0x17) >> 4);
    puVar4 = puVar4 + 1;
    uVar9 = uVar9 + iVar14;
    uVar18 = uVar18 + iVar13;
  } while (-1 < iVar11);
  return;
}



// Address: 4a0103f8

void FUN_4a0103f8(int *param_1)

{
  uint uVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
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
  
  iVar6 = param_1[5];
  iVar9 = *param_1 + -1;
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  iVar14 = param_1[4];
  uVar10 = param_1[6];
  iVar15 = param_1[7];
  iVar11 = param_1[10];
  iVar12 = param_1[0xc];
  iVar13 = param_1[0xe];
  uVar8 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  puVar3 = (ushort *)param_1[1];
  uVar7 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar16 = (param_1[9] & 0xfff0ffffU) << 0xc;
  do {
    uVar1 = uVar5 >> 0xd;
    uVar5 = uVar5 + iVar6;
    uVar2 = (uint)*(ushort *)(iVar15 + (uVar10 & uVar1 | (uVar4 & uVar10) >> 0x14) * 2);
    uVar4 = uVar4 + iVar14;
    uVar1 = uVar8 & 0xfffffff;
    iVar9 = iVar9 + -1;
    uVar8 = uVar8 + iVar13;
    *puVar3 = (ushort)((((uVar16 & 0xfffffff) >> 0x17) * (uVar2 & 0xf) >> 4) << 0xb) |
              (ushort)((((uVar2 & 0xff) >> 4) * ((uVar7 & 0xfffffff) >> 0x16) >> 4) << 5) |
              (ushort)(((uVar2 & 0xfff) >> 8) * (uVar1 >> 0x17) >> 4);
    puVar3 = puVar3 + 1;
    uVar7 = uVar7 + iVar12;
    uVar16 = uVar16 + iVar11;
  } while (-1 < iVar9);
  return;
}



// Address: 4a0104fc

void FUN_4a0104fc(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
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
  int iVar19;
  uint uVar20;
  
  iVar16 = *param_1 + -1;
  uVar9 = param_1[2];
  uVar20 = param_1[3];
  iVar13 = param_1[4];
  iVar7 = *(int *)PTR_LAB_4a010628;
  iVar10 = param_1[5];
  uVar17 = param_1[6];
  iVar11 = param_1[7];
  iVar18 = param_1[10];
  iVar19 = param_1[0xc];
  iVar4 = param_1[0xe];
  uVar12 = (param_1[9] & 0xfff0ffffU) << 0xc;
  uVar14 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar15 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  puVar8 = (ushort *)param_1[1];
  do {
    uVar1 = uVar15 >> 0x17;
    uVar5 = *(uint *)(iVar11 + (uVar17 & uVar20 >> 0xe | (uVar9 & uVar17) >> 0x14) * 4);
    uVar20 = uVar20 + iVar10;
    uVar9 = uVar9 + iVar13;
    uVar2 = uVar12 >> 0x17;
    uVar12 = uVar12 + iVar18;
    uVar3 = uVar14 >> 0x17;
    uVar14 = uVar14 + iVar19;
    uVar15 = uVar15 + iVar4;
    uVar6 = (uVar5 & 0xffff) >> 0xb | (uVar5 & 0xf8) << 2;
    iVar16 = iVar16 + -1;
    *puVar8 = *(ushort *)(iVar7 + uVar3 * 0x800 + uVar6 * 2) & 0xffe0 |
              *(ushort *)(iVar7 + uVar1 * 0x800 + uVar6 * 2) & 0x1f |
              *(ushort *)(iVar7 + (uVar2 * 0x20 + 0x8000) * 2 + ((uVar5 & 0xffffff) >> 0x13) * 2);
    puVar8 = puVar8 + 1;
  } while (-1 < iVar16);
  return;
}



// Address: 4a010ff4

void FUN_4a010ff4(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
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
  
  iVar15 = *param_1 + -1;
  puVar4 = (ushort *)param_1[1];
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  iVar10 = param_1[4];
  iVar11 = param_1[5];
  uVar8 = param_1[6];
  iVar12 = param_1[7];
  iVar13 = param_1[8];
  uVar9 = param_1[9];
  if (*(int *)(PTR_LAB_4a011230 + 0x5c) != 0) {
    if ((uVar9 & 0x80000000) != 0) {
      do {
        uVar3 = uVar6 & uVar8;
        bVar1 = *(byte *)(iVar12 + (uVar8 & uVar7 >> 0xc | uVar3 >> 0x15));
        uVar6 = uVar6 + iVar10;
        if ((bool)((byte)(uVar3 >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        uVar2 = *(ushort *)(iVar13 + ((uVar9 & 0xf800000) >> 0x12) + (bVar1 & 0xf) * 2);
        iVar15 = iVar15 + -1;
        uVar7 = uVar7 + iVar11;
        *puVar4 = (ushort)(((uVar2 ^ *puVar4) & 0x820 ^ (uint)*puVar4 + (uint)uVar2) >> 1);
        puVar4 = puVar4 + 1;
      } while (-1 < iVar15);
      return;
    }
    iVar14 = param_1[10];
    do {
      uVar3 = uVar6 & uVar8;
      bVar1 = *(byte *)(iVar12 + (uVar8 & uVar7 >> 0xc | uVar3 >> 0x15));
      uVar6 = uVar6 + iVar10;
      if ((bool)((byte)(uVar3 >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar2 = *(ushort *)(iVar13 + ((uVar9 & 0xf800000) >> 0x12) + (bVar1 & 0xf) * 2);
      iVar15 = iVar15 + -1;
      uVar7 = uVar7 + iVar11;
      uVar9 = uVar9 + iVar14;
      *puVar4 = (ushort)(((uVar2 ^ *puVar4) & 0x820 ^ (uint)*puVar4 + (uint)uVar2) >> 1);
      puVar4 = puVar4 + 1;
    } while (-1 < iVar15);
    return;
  }
  if ((uVar9 & 0x80000000) != 0) {
    do {
      bVar1 = *(byte *)(iVar12 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
      if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      while( true ) {
        uVar7 = uVar7 + iVar11;
        uVar6 = uVar6 + iVar10;
        if ((bVar1 & 0xf) == 0) break;
        uVar2 = *(ushort *)(iVar13 + ((uVar9 & 0xf800000) >> 0x12) + (bVar1 & 0xf) * 2);
        iVar15 = iVar15 + -1;
        puVar5 = puVar4 + 1;
        *puVar4 = (ushort)(((uVar2 ^ *puVar4) & 0x820 ^ (uint)*puVar4 + (uint)uVar2) >> 1);
        if (iVar15 < 0) {
          return;
        }
        bVar1 = *(byte *)(iVar12 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
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
  iVar14 = param_1[10];
  do {
    bVar1 = *(byte *)(iVar12 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
    if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    while( true ) {
      uVar7 = uVar7 + iVar11;
      uVar6 = uVar6 + iVar10;
      if ((bVar1 & 0xf) == 0) break;
      uVar2 = *(ushort *)(iVar13 + ((uVar9 & 0xf800000) >> 0x12) + (bVar1 & 0xf) * 2);
      iVar15 = iVar15 + -1;
      uVar9 = uVar9 + iVar14;
      puVar5 = puVar4 + 1;
      *puVar4 = (ushort)(((uVar2 ^ *puVar4) & 0x820 ^ (uint)*puVar4 + (uint)uVar2) >> 1);
      if (iVar15 < 0) {
        return;
      }
      bVar1 = *(byte *)(iVar12 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
      puVar4 = puVar5;
      if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
    }
    iVar15 = iVar15 + -1;
    puVar4 = puVar4 + 1;
    uVar9 = uVar9 + iVar14;
    if (iVar15 < 0) {
      return;
    }
  } while( true );
}



// Address: 4a011234

void FUN_4a011234(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar13 = *param_1 + -1;
  puVar3 = (ushort *)param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  iVar8 = param_1[4];
  iVar9 = param_1[5];
  uVar6 = param_1[6];
  iVar10 = param_1[7];
  iVar11 = param_1[8];
  uVar7 = param_1[9];
  if (*(int *)(PTR_LAB_4a011450 + 0x5c) != 0) {
    if ((uVar7 & 0x80000000) == 0) {
      iVar12 = param_1[10];
      do {
        uVar2 = *(ushort *)
                 (iVar11 + ((uVar7 & 0xf800000) >> 0xe) +
                 (uint)*(byte *)(iVar10 + (uVar6 & uVar5 >> 0xc | (uVar4 & uVar6) >> 0x14)) * 2);
        iVar13 = iVar13 + -1;
        uVar5 = uVar5 + iVar9;
        uVar4 = uVar4 + iVar8;
        uVar7 = uVar7 + iVar12;
        *puVar3 = (ushort)(((uint)uVar2 + (uint)*puVar3 ^ (*puVar3 ^ uVar2) & 0x820) >> 1);
        puVar3 = puVar3 + 1;
      } while (-1 < iVar13);
      return;
    }
    do {
      iVar13 = iVar13 + -1;
      uVar2 = *(ushort *)
               (iVar11 + ((uVar7 & 0xf800000) >> 0xe) +
               (uint)*(byte *)(iVar10 + (uVar6 & uVar5 >> 0xc | (uVar4 & uVar6) >> 0x14)) * 2);
      uVar5 = uVar5 + iVar9;
      uVar4 = uVar4 + iVar8;
      *puVar3 = (ushort)(((uint)uVar2 + (uint)*puVar3 ^ (*puVar3 ^ uVar2) & 0x820) >> 1);
      puVar3 = puVar3 + 1;
    } while (-1 < iVar13);
    return;
  }
  if ((uVar7 & 0x80000000) == 0) {
    iVar12 = param_1[10];
    do {
      bVar1 = *(byte *)(iVar10 + (uVar6 & uVar5 >> 0xc | (uVar4 & uVar6) >> 0x14));
      while( true ) {
        uVar4 = uVar4 + iVar8;
        uVar5 = uVar5 + iVar9;
        if (bVar1 == 0) break;
        uVar2 = *(ushort *)(iVar11 + ((uVar7 & 0xf800000) >> 0xe) + (uint)bVar1 * 2);
        iVar13 = iVar13 + -1;
        uVar7 = uVar7 + iVar12;
        *puVar3 = (ushort)(((uint)uVar2 + (uint)*puVar3 ^ (*puVar3 ^ uVar2) & 0x820) >> 1);
        if (iVar13 < 0) {
          return;
        }
        bVar1 = *(byte *)(iVar10 + (uVar6 & uVar5 >> 0xc | (uVar4 & uVar6) >> 0x14));
        puVar3 = puVar3 + 1;
      }
      iVar13 = iVar13 + -1;
      puVar3 = puVar3 + 1;
      uVar7 = uVar7 + iVar12;
    } while (-1 < iVar13);
    return;
  }
  do {
    bVar1 = *(byte *)(iVar10 + (uVar6 & uVar5 >> 0xc | (uVar4 & uVar6) >> 0x14));
    while( true ) {
      uVar4 = uVar4 + iVar8;
      uVar5 = uVar5 + iVar9;
      if (bVar1 == 0) break;
      uVar2 = *(ushort *)(iVar11 + ((uVar7 & 0xf800000) >> 0xe) + (uint)bVar1 * 2);
      iVar13 = iVar13 + -1;
      *puVar3 = (ushort)(((uint)uVar2 + (uint)*puVar3 ^ (*puVar3 ^ uVar2) & 0x820) >> 1);
      if (iVar13 < 0) {
        return;
      }
      bVar1 = *(byte *)(iVar10 + (uVar6 & uVar5 >> 0xc | (uVar4 & uVar6) >> 0x14));
      puVar3 = puVar3 + 1;
    }
    iVar13 = iVar13 + -1;
    puVar3 = puVar3 + 1;
  } while (-1 < iVar13);
  return;
}



// Address: 4a011454

void FUN_4a011454(int *param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar14 = *param_1 + -1;
  puVar3 = (ushort *)param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  iVar9 = param_1[4];
  iVar10 = param_1[5];
  iVar12 = *(int *)PTR_LAB_4a0116ec;
  uVar6 = param_1[6];
  iVar11 = param_1[7];
  uVar7 = param_1[9];
  if (*(int *)(PTR_LAB_4a0116ec + 0x5c) != 0) {
    if ((uVar7 & 0x80000000) == 0) {
      iVar13 = param_1[10];
      do {
        uVar2 = (uint)*(ushort *)(iVar11 + (uVar6 & uVar5 >> 0xd | (uVar4 & uVar6) >> 0x14) * 2);
        iVar8 = iVar12 + ((uVar7 & 0xf800000) >> 0xc);
        iVar14 = iVar14 + -1;
        uVar2 = (uint)*(ushort *)(iVar8 + ((uVar2 & 0xffff7fff) >> 5) * 2) |
                (uint)*(ushort *)(iVar8 + (uVar2 & 0x1f) * 0x40) << 0xb;
        uVar5 = uVar5 + iVar10;
        uVar4 = uVar4 + iVar9;
        uVar7 = uVar7 + iVar13;
        *puVar3 = (ushort)(((uVar2 ^ *puVar3) & 0x820 ^ *puVar3 + uVar2) >> 1);
        puVar3 = puVar3 + 1;
      } while (-1 < iVar14);
      return;
    }
    iVar12 = iVar12 + ((uVar7 & 0xf800000) >> 0xc);
    do {
      uVar7 = (uint)*(ushort *)(iVar11 + (uVar6 & uVar5 >> 0xd | (uVar4 & uVar6) >> 0x14) * 2);
      iVar14 = iVar14 + -1;
      uVar5 = uVar5 + iVar10;
      uVar4 = uVar4 + iVar9;
      uVar7 = (uint)*(ushort *)(iVar12 + ((uVar7 & 0xffff7fff) >> 5) * 2) |
              (uint)*(ushort *)(iVar12 + (uVar7 & 0x1f) * 0x40) << 0xb;
      *puVar3 = (ushort)(((uVar7 ^ *puVar3) & 0x820 ^ *puVar3 + uVar7) >> 1);
      puVar3 = puVar3 + 1;
    } while (-1 < iVar14);
    return;
  }
  if ((uVar7 & 0x80000000) == 0) {
    iVar13 = param_1[10];
    do {
      uVar1 = *(ushort *)(iVar11 + (uVar6 & uVar5 >> 0xd | (uVar4 & uVar6) >> 0x14) * 2);
      while( true ) {
        uVar2 = (uint)uVar1;
        uVar4 = uVar4 + iVar9;
        uVar5 = uVar5 + iVar10;
        if (uVar2 == 0) break;
        iVar8 = iVar12 + ((uVar7 & 0xf800000) >> 0xc);
        iVar14 = iVar14 + -1;
        uVar2 = (uint)*(ushort *)(iVar8 + ((uVar2 & 0xffff7fff) >> 5) * 2) |
                (uint)*(ushort *)(iVar8 + (uVar2 & 0x1f) * 0x40) << 0xb;
        uVar7 = uVar7 + iVar13;
        *puVar3 = (ushort)(((uVar2 ^ *puVar3) & 0x820 ^ *puVar3 + uVar2) >> 1);
        if (iVar14 < 0) {
          return;
        }
        uVar1 = *(ushort *)(iVar11 + (uVar6 & uVar5 >> 0xd | (uVar4 & uVar6) >> 0x14) * 2);
        puVar3 = puVar3 + 1;
      }
      iVar14 = iVar14 + -1;
      puVar3 = puVar3 + 1;
      uVar7 = uVar7 + iVar13;
    } while (-1 < iVar14);
    return;
  }
  iVar12 = iVar12 + ((uVar7 & 0xf800000) >> 0xc);
  do {
    uVar1 = *(ushort *)(iVar11 + (uVar6 & uVar5 >> 0xd | (uVar4 & uVar6) >> 0x14) * 2);
    while( true ) {
      uVar7 = (uint)uVar1;
      uVar4 = uVar4 + iVar9;
      uVar5 = uVar5 + iVar10;
      if (uVar7 == 0) break;
      iVar14 = iVar14 + -1;
      uVar7 = (uint)*(ushort *)(iVar12 + ((uVar7 & 0xffff7fff) >> 5) * 2) |
              (uint)*(ushort *)(iVar12 + (uVar7 & 0x1f) * 0x40) << 0xb;
      *puVar3 = (ushort)(((uVar7 ^ *puVar3) & 0x820 ^ *puVar3 + uVar7) >> 1);
      if (iVar14 < 0) {
        return;
      }
      uVar1 = *(ushort *)(iVar11 + (uVar6 & uVar5 >> 0xd | (uVar4 & uVar6) >> 0x14) * 2);
      puVar3 = puVar3 + 1;
    }
    iVar14 = iVar14 + -1;
    puVar3 = puVar3 + 1;
  } while (-1 < iVar14);
  return;
}



// Address: 4a0116f0

void FUN_4a0116f0(int *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
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
  
  iVar14 = *param_1 + -1;
  puVar4 = (ushort *)param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  iVar9 = param_1[4];
  iVar10 = param_1[5];
  iVar13 = *(int *)PTR_LAB_4a0119bc;
  uVar7 = param_1[6];
  iVar11 = param_1[7];
  uVar8 = param_1[9];
  if (*(int *)(PTR_LAB_4a0119bc + 0x5c) != 0) {
    if ((uVar8 & 0x80000000) == 0) {
      iVar2 = param_1[10];
      do {
        uVar1 = *(ushort *)(iVar11 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
        iVar12 = iVar13 + ((uVar8 & 0xf800000) >> 0xc);
        iVar14 = iVar14 + -1;
        uVar3 = (uint)*(ushort *)(iVar12 + ((uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5) * 2) |
                (uint)*(ushort *)(iVar12 + (uint)(uVar1 >> 0xb) * 0x40) << 0xb;
        *puVar4 = (ushort)(((uVar3 ^ *puVar4) & 0x820 ^ *puVar4 + uVar3) >> 1);
        uVar6 = uVar6 + iVar10;
        uVar5 = uVar5 + iVar9;
        uVar8 = uVar8 + iVar2;
        puVar4 = puVar4 + 1;
      } while (-1 < iVar14);
      return;
    }
    iVar13 = iVar13 + ((uVar8 & 0xf800000) >> 0xc);
    do {
      uVar1 = *(ushort *)(iVar11 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
      iVar14 = iVar14 + -1;
      uVar6 = uVar6 + iVar10;
      uVar5 = uVar5 + iVar9;
      uVar8 = (uint)*(ushort *)(iVar13 + ((uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5) * 2) |
              (uint)*(ushort *)(iVar13 + (uint)(uVar1 >> 0xb) * 0x40) << 0xb;
      *puVar4 = (ushort)(((uVar8 ^ *puVar4) & 0x820 ^ *puVar4 + uVar8) >> 1);
      puVar4 = puVar4 + 1;
    } while (-1 < iVar14);
    return;
  }
  if ((uVar8 & 0x80000000) == 0) {
    iVar2 = param_1[10];
    do {
      uVar1 = *(ushort *)(iVar11 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
      while( true ) {
        uVar3 = (uint)uVar1;
        uVar5 = uVar5 + iVar9;
        uVar6 = uVar6 + iVar10;
        if (uVar3 == 0) break;
        iVar12 = iVar13 + ((uVar8 & 0xf800000) >> 0xc);
        iVar14 = iVar14 + -1;
        uVar3 = (uint)*(ushort *)(iVar12 + ((uVar3 & 0x7ff) >> 6 | (uVar3 & 0x1f) << 5) * 2) |
                (uint)*(ushort *)(iVar12 + (uint)(uVar1 >> 0xb) * 0x40) << 0xb;
        *puVar4 = (ushort)(((uVar3 ^ *puVar4) & 0x820 ^ *puVar4 + uVar3) >> 1);
        uVar8 = uVar8 + iVar2;
        if (iVar14 < 0) {
          return;
        }
        uVar1 = *(ushort *)(iVar11 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
        puVar4 = puVar4 + 1;
      }
      iVar14 = iVar14 + -1;
      puVar4 = puVar4 + 1;
      uVar8 = uVar8 + iVar2;
    } while (-1 < iVar14);
    return;
  }
  iVar13 = iVar13 + ((uVar8 & 0xf800000) >> 0xc);
  do {
    uVar1 = *(ushort *)(iVar11 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
    while( true ) {
      uVar8 = (uint)uVar1;
      uVar5 = uVar5 + iVar9;
      uVar6 = uVar6 + iVar10;
      if (uVar8 == 0) break;
      iVar14 = iVar14 + -1;
      uVar8 = (uint)*(ushort *)(iVar13 + ((uVar8 & 0x7ff) >> 6 | (uVar8 & 0x1f) << 5) * 2) |
              (uint)*(ushort *)(iVar13 + (uint)(uVar1 >> 0xb) * 0x40) << 0xb;
      *puVar4 = (ushort)(((uVar8 ^ *puVar4) & 0x820 ^ *puVar4 + uVar8) >> 1);
      if (iVar14 < 0) {
        return;
      }
      uVar1 = *(ushort *)(iVar11 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
      puVar4 = puVar4 + 1;
    }
    iVar14 = iVar14 + -1;
    puVar4 = puVar4 + 1;
  } while (-1 < iVar14);
  return;
}



// Address: 4a0119c0

void FUN_4a0119c0(int *param_1)

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
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  iVar16 = *param_1 + -1;
  puVar4 = (ushort *)param_1[1];
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  iVar9 = param_1[4];
  iVar10 = param_1[5];
  uVar8 = param_1[6];
  iVar11 = param_1[7];
  iVar12 = param_1[8];
  uVar13 = param_1[9];
  iVar15 = *(int *)PTR_LAB_4a011ce0;
  if (*(int *)(PTR_LAB_4a011ce0 + 0x5c) == 0) {
    if ((uVar13 & 0x80000000) == 0) {
      iVar2 = param_1[10];
      do {
        bVar1 = *(byte *)(iVar11 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
        if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        while( true ) {
          uVar7 = uVar7 + iVar10;
          uVar6 = uVar6 + iVar9;
          if ((bVar1 & 0xf) == 0) break;
          uVar3 = (uint)*(ushort *)(iVar12 + (bVar1 & 0xf) * 2);
          iVar14 = iVar15 + ((uVar13 & 0xf800000) >> 0xc);
          iVar16 = iVar16 + -1;
          uVar3 = (uint)*(ushort *)(iVar14 + ((uVar3 & 0xf00) >> 2 | (uVar3 & 0xf0) >> 3) * 2) |
                  (uint)*(ushort *)(iVar14 + (uVar3 & 0xf) * 0x80) << 0xb;
          puVar5 = puVar4 + 1;
          *puVar4 = (ushort)(((uVar3 ^ *puVar4) & 0x820 ^ *puVar4 + uVar3) >> 1);
          uVar13 = uVar13 + iVar2;
          if (iVar16 < 0) {
            return;
          }
          bVar1 = *(byte *)(iVar11 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
          puVar4 = puVar5;
          if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
            bVar1 = bVar1 >> 4;
          }
        }
        iVar16 = iVar16 + -1;
        puVar4 = puVar4 + 1;
        uVar13 = uVar13 + iVar2;
        if (iVar16 < 0) {
          return;
        }
      } while( true );
    }
    iVar15 = iVar15 + ((uVar13 & 0xf800000) >> 0xc);
    do {
      bVar1 = *(byte *)(iVar11 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
      if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      while( true ) {
        uVar7 = uVar7 + iVar10;
        uVar6 = uVar6 + iVar9;
        if ((bVar1 & 0xf) == 0) break;
        uVar13 = (uint)*(ushort *)(iVar12 + (bVar1 & 0xf) * 2);
        iVar16 = iVar16 + -1;
        uVar13 = (uint)*(ushort *)(iVar15 + ((uVar13 & 0xf00) >> 2 | (uVar13 & 0xf0) >> 3) * 2) |
                 (uint)*(ushort *)(iVar15 + (uVar13 & 0xf) * 0x80) << 0xb;
        puVar5 = puVar4 + 1;
        *puVar4 = (ushort)(((uVar13 ^ *puVar4) & 0x820 ^ *puVar4 + uVar13) >> 1);
        if (iVar16 < 0) {
          return;
        }
        bVar1 = *(byte *)(iVar11 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
        puVar4 = puVar5;
        if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
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
  if ((uVar13 & 0x80000000) != 0) {
    iVar15 = iVar15 + ((uVar13 & 0xf800000) >> 0xc);
    do {
      uVar13 = uVar6 & uVar8;
      bVar1 = *(byte *)(iVar11 + (uVar8 & uVar7 >> 0xc | uVar13 >> 0x15));
      uVar6 = uVar6 + iVar9;
      uVar7 = uVar7 + iVar10;
      if ((bool)((byte)(uVar13 >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar13 = (uint)*(ushort *)(iVar12 + (bVar1 & 0xf) * 2);
      iVar16 = iVar16 + -1;
      uVar13 = (uint)*(ushort *)(iVar15 + ((uVar13 & 0xf00) >> 2 | (uVar13 & 0xf0) >> 3) * 2) |
               (uint)*(ushort *)(iVar15 + (uVar13 & 0xf) * 0x80) << 0xb;
      *puVar4 = (ushort)(((uVar13 ^ *puVar4) & 0x820 ^ *puVar4 + uVar13) >> 1);
      puVar4 = puVar4 + 1;
    } while (-1 < iVar16);
    return;
  }
  iVar2 = param_1[10];
  do {
    bVar1 = *(byte *)(iVar11 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
    if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    uVar3 = (uint)*(ushort *)(iVar12 + (bVar1 & 0xf) * 2);
    iVar14 = iVar15 + ((uVar13 & 0xf800000) >> 0xc);
    iVar16 = iVar16 + -1;
    uVar6 = uVar6 + iVar9;
    uVar3 = (uint)*(ushort *)(iVar14 + ((uVar3 & 0xf00) >> 2 | (uVar3 & 0xf0) >> 3) * 2) |
            (uint)*(ushort *)(iVar14 + (uVar3 & 0xf) * 0x80) << 0xb;
    *puVar4 = (ushort)(((uVar3 ^ *puVar4) & 0x820 ^ *puVar4 + uVar3) >> 1);
    uVar7 = uVar7 + iVar10;
    uVar13 = uVar13 + iVar2;
    puVar4 = puVar4 + 1;
  } while (-1 < iVar16);
  return;
}



// Address: 4a011ce4

void FUN_4a011ce4(int *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
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
  
  iVar14 = *param_1 + -1;
  puVar4 = (ushort *)param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  iVar9 = param_1[4];
  iVar10 = param_1[5];
  iVar13 = *(int *)PTR_LAB_4a011fb0;
  uVar7 = param_1[6];
  iVar11 = param_1[7];
  uVar8 = param_1[9];
  if (*(int *)(PTR_LAB_4a011fb0 + 0x5c) != 0) {
    if ((uVar8 & 0x80000000) == 0) {
      iVar2 = param_1[10];
      do {
        uVar3 = (uint)*(ushort *)(iVar11 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
        iVar12 = iVar13 + ((uVar8 & 0xf800000) >> 0xc);
        iVar14 = iVar14 + -1;
        uVar3 = (uint)*(ushort *)(iVar12 + ((uVar3 & 0xf00) >> 2 | (uVar3 & 0xf0) >> 3) * 2) |
                (uint)*(ushort *)(iVar12 + (uVar3 & 0xf) * 0x80) << 0xb;
        *puVar4 = (ushort)(((uVar3 ^ *puVar4) & 0x820 ^ *puVar4 + uVar3) >> 1);
        uVar6 = uVar6 + iVar10;
        uVar5 = uVar5 + iVar9;
        uVar8 = uVar8 + iVar2;
        puVar4 = puVar4 + 1;
      } while (-1 < iVar14);
      return;
    }
    iVar13 = iVar13 + ((uVar8 & 0xf800000) >> 0xc);
    do {
      uVar8 = (uint)*(ushort *)(iVar11 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
      iVar14 = iVar14 + -1;
      uVar6 = uVar6 + iVar10;
      uVar5 = uVar5 + iVar9;
      uVar8 = (uint)*(ushort *)(iVar13 + ((uVar8 & 0xf00) >> 2 | (uVar8 & 0xf0) >> 3) * 2) |
              (uint)*(ushort *)(iVar13 + (uVar8 & 0xf) * 0x80) << 0xb;
      *puVar4 = (ushort)(((uVar8 ^ *puVar4) & 0x820 ^ *puVar4 + uVar8) >> 1);
      puVar4 = puVar4 + 1;
    } while (-1 < iVar14);
    return;
  }
  if ((uVar8 & 0x80000000) == 0) {
    iVar2 = param_1[10];
    do {
      uVar1 = *(ushort *)(iVar11 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
      while( true ) {
        uVar3 = (uint)uVar1;
        uVar5 = uVar5 + iVar9;
        uVar6 = uVar6 + iVar10;
        if (uVar3 == 0) break;
        iVar12 = iVar13 + ((uVar8 & 0xf800000) >> 0xc);
        iVar14 = iVar14 + -1;
        uVar3 = (uint)*(ushort *)(iVar12 + ((uVar3 & 0xf00) >> 2 | (uVar3 & 0xf0) >> 3) * 2) |
                (uint)*(ushort *)(iVar12 + (uVar3 & 0xf) * 0x80) << 0xb;
        *puVar4 = (ushort)(((uVar3 ^ *puVar4) & 0x820 ^ *puVar4 + uVar3) >> 1);
        uVar8 = uVar8 + iVar2;
        if (iVar14 < 0) {
          return;
        }
        uVar1 = *(ushort *)(iVar11 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
        puVar4 = puVar4 + 1;
      }
      iVar14 = iVar14 + -1;
      puVar4 = puVar4 + 1;
      uVar8 = uVar8 + iVar2;
    } while (-1 < iVar14);
    return;
  }
  iVar13 = iVar13 + ((uVar8 & 0xf800000) >> 0xc);
  do {
    uVar1 = *(ushort *)(iVar11 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
    while( true ) {
      uVar8 = (uint)uVar1;
      uVar5 = uVar5 + iVar9;
      uVar6 = uVar6 + iVar10;
      if (uVar8 == 0) break;
      iVar14 = iVar14 + -1;
      uVar8 = (uint)*(ushort *)(iVar13 + ((uVar8 & 0xf00) >> 2 | (uVar8 & 0xf0) >> 3) * 2) |
              (uint)*(ushort *)(iVar13 + (uVar8 & 0xf) * 0x80) << 0xb;
      *puVar4 = (ushort)(((uVar8 ^ *puVar4) & 0x820 ^ *puVar4 + uVar8) >> 1);
      if (iVar14 < 0) {
        return;
      }
      uVar1 = *(ushort *)(iVar11 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
      puVar4 = puVar4 + 1;
    }
    iVar14 = iVar14 + -1;
    puVar4 = puVar4 + 1;
  } while (-1 < iVar14);
  return;
}



// Address: 4a011fb4

void FUN_4a011fb4(int *param_1)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar13 = *param_1 + -1;
  puVar3 = (ushort *)param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  iVar7 = param_1[4];
  iVar8 = param_1[5];
  iVar11 = *(int *)PTR_LAB_4a012274;
  uVar6 = param_1[6];
  iVar9 = param_1[7];
  uVar10 = param_1[9];
  if (*(int *)(PTR_LAB_4a012274 + 0x5c) != 0) {
    if ((uVar10 & 0x80000000) == 0) {
      iVar1 = param_1[10];
      do {
        uVar2 = *(uint *)(iVar9 + (uVar6 & uVar5 >> 0xe | (uVar4 & uVar6) >> 0x14) * 4);
        iVar12 = iVar11 + ((uVar10 & 0xf800000) >> 0xc);
        iVar13 = iVar13 + -1;
        uVar2 = (uint)*(ushort *)(iVar12 + ((uVar2 & 0xffff) >> 0xb | (uVar2 & 0xf8) << 2) * 2) |
                (uint)*(ushort *)(iVar12 + (uVar2 >> 0xe & 0x3e0) * 2) << 0xb;
        *puVar3 = (ushort)(((uVar2 ^ *puVar3) & 0x820 ^ *puVar3 + uVar2) >> 1);
        uVar5 = uVar5 + iVar8;
        uVar4 = uVar4 + iVar7;
        uVar10 = uVar10 + iVar1;
        puVar3 = puVar3 + 1;
      } while (-1 < iVar13);
      return;
    }
    iVar11 = iVar11 + ((uVar10 & 0xf800000) >> 0xc);
    do {
      uVar10 = *(uint *)(iVar9 + (uVar6 & uVar5 >> 0xe | (uVar4 & uVar6) >> 0x14) * 4);
      iVar13 = iVar13 + -1;
      uVar5 = uVar5 + iVar8;
      uVar10 = (uint)*(ushort *)(iVar11 + ((uVar10 & 0xffff) >> 0xb | (uVar10 & 0xf8) << 2) * 2) |
               (uint)*(ushort *)(iVar11 + (uVar10 >> 0xe & 0x3e0) * 2) << 0xb;
      uVar4 = uVar4 + iVar7;
      *puVar3 = (ushort)(((uVar10 ^ *puVar3) & 0x820 ^ *puVar3 + uVar10) >> 1);
      puVar3 = puVar3 + 1;
    } while (-1 < iVar13);
    return;
  }
  if ((uVar10 & 0x80000000) == 0) {
    iVar1 = param_1[10];
    do {
      uVar2 = *(uint *)(iVar9 + (uVar6 & uVar5 >> 0xe | (uVar4 & uVar6) >> 0x14) * 4);
      while( true ) {
        uVar4 = uVar4 + iVar7;
        uVar5 = uVar5 + iVar8;
        if (uVar2 == 0) break;
        iVar12 = iVar11 + ((uVar10 & 0xf800000) >> 0xc);
        iVar13 = iVar13 + -1;
        uVar2 = (uint)*(ushort *)(iVar12 + ((uVar2 & 0xffff) >> 0xb | (uVar2 & 0xf8) << 2) * 2) |
                (uint)*(ushort *)(iVar12 + (uVar2 >> 0xe & 0x3e0) * 2) << 0xb;
        *puVar3 = (ushort)(((uVar2 ^ *puVar3) & 0x820 ^ *puVar3 + uVar2) >> 1);
        uVar10 = uVar10 + iVar1;
        if (iVar13 < 0) {
          return;
        }
        uVar2 = *(uint *)(iVar9 + (uVar6 & uVar5 >> 0xe | (uVar4 & uVar6) >> 0x14) * 4);
        puVar3 = puVar3 + 1;
      }
      iVar13 = iVar13 + -1;
      puVar3 = puVar3 + 1;
      uVar10 = uVar10 + iVar1;
    } while (-1 < iVar13);
    return;
  }
  iVar11 = iVar11 + ((uVar10 & 0xf800000) >> 0xc);
  do {
    uVar10 = *(uint *)(iVar9 + (uVar6 & uVar5 >> 0xe | (uVar4 & uVar6) >> 0x14) * 4);
    while( true ) {
      uVar4 = uVar4 + iVar7;
      uVar5 = uVar5 + iVar8;
      if (uVar10 == 0) break;
      iVar13 = iVar13 + -1;
      uVar10 = (uint)*(ushort *)(iVar11 + ((uVar10 & 0xffff) >> 0xb | (uVar10 & 0xf8) << 2) * 2) |
               (uint)*(ushort *)(iVar11 + (uVar10 >> 0xe & 0x3e0) * 2) << 0xb;
      *puVar3 = (ushort)(((uVar10 ^ *puVar3) & 0x820 ^ *puVar3 + uVar10) >> 1);
      if (iVar13 < 0) {
        return;
      }
      uVar10 = *(uint *)(iVar9 + (uVar6 & uVar5 >> 0xe | (uVar4 & uVar6) >> 0x14) * 4);
      puVar3 = puVar3 + 1;
    }
    iVar13 = iVar13 + -1;
    puVar3 = puVar3 + 1;
  } while (-1 < iVar13);
  return;
}



// Address: 4a01227c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a01227c(int *param_1)

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
  iVar6 = *(int *)PTR_LAB_4a0125ac;
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
  if (*(int *)(PTR_LAB_4a0125ac + 0x5c) != 0) {
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



// Address: 4a0125b0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0125b0(int *param_1)

{
  byte bVar1;
  int iVar2;
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
  iVar5 = *(int *)PTR_LAB_4a0128c0;
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
  iVar2 = param_1[8];
  if (*(int *)(PTR_LAB_4a0128c0 + 0x5c) != 0) {
    if (uVar8 == 0) {
      return;
    }
    if (uVar8 == 0x1f) {
      do {
        iVar15 = iVar15 + -1;
        uVar3 = (uint)*(ushort *)
                       (iVar2 + (uint)*(byte *)(iVar12 + (uVar9 & uVar7 >> 0xc |
                                                         (uVar6 & uVar9) >> 0x14)) * 2);
        uVar7 = uVar7 + iVar11;
        uVar6 = uVar6 + iVar10;
        uVar8 = (uVar3 & 0xffff7fff) >> 5;
        uVar8 = *(ushort *)(iVar5 + uVar8 * 2) & 0x1f | *(ushort *)(iVar14 + uVar8 * 2) & 0xffffffe0
                | (uint)*(ushort *)(iVar13 + (uVar3 & 0x1f) * 2);
        *puVar4 = (ushort)(((uVar8 ^ *puVar4) & 0x820 ^ *puVar4 + uVar8) >> 1);
        puVar4 = puVar4 + 1;
      } while (-1 < iVar15);
      return;
    }
    do {
      iVar15 = iVar15 + -1;
      uVar3 = (uint)*(ushort *)
                     (iVar2 + (uint)*(byte *)(iVar12 + (uVar9 & uVar7 >> 0xc |
                                                       (uVar6 & uVar9) >> 0x14)) * 2);
      uVar7 = uVar7 + iVar11;
      uVar6 = uVar6 + iVar10;
      uVar8 = (uVar3 & 0xffff7fff) >> 5;
      uVar8 = *(ushort *)(iVar5 + uVar8 * 2) & 0x1f | *(ushort *)(iVar14 + uVar8 * 2) & 0xffffffe0 |
              (uint)*(ushort *)(iVar13 + (uVar3 & 0x1f) * 2);
      *puVar4 = (ushort)(((uVar8 ^ *puVar4) & 0x820 ^ *puVar4 + uVar8) >> 1);
      puVar4 = puVar4 + 1;
    } while (-1 < iVar15);
    return;
  }
  if (uVar8 == 0x1f) {
    do {
      bVar1 = *(byte *)(iVar12 + (uVar9 & uVar7 >> 0xc | (uVar6 & uVar9) >> 0x14));
      while( true ) {
        uVar6 = uVar6 + iVar10;
        uVar7 = uVar7 + iVar11;
        if (bVar1 == 0) break;
        iVar15 = iVar15 + -1;
        uVar3 = (uint)*(ushort *)(iVar2 + (uint)bVar1 * 2);
        uVar8 = (uVar3 & 0xffff7fff) >> 5;
        uVar8 = *(ushort *)(iVar5 + uVar8 * 2) & 0x1f | *(ushort *)(iVar14 + uVar8 * 2) & 0xffffffe0
                | (uint)*(ushort *)(iVar13 + (uVar3 & 0x1f) * 2);
        *puVar4 = (ushort)(((uVar8 ^ *puVar4) & 0x820 ^ *puVar4 + uVar8) >> 1);
        if (iVar15 < 0) {
          return;
        }
        bVar1 = *(byte *)(iVar12 + (uVar9 & uVar7 >> 0xc | (uVar6 & uVar9) >> 0x14));
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
    bVar1 = *(byte *)(iVar12 + (uVar9 & uVar7 >> 0xc | (uVar6 & uVar9) >> 0x14));
    while( true ) {
      uVar6 = uVar6 + iVar10;
      uVar7 = uVar7 + iVar11;
      if (bVar1 == 0) break;
      iVar15 = iVar15 + -1;
      uVar3 = (uint)*(ushort *)(iVar2 + (uint)bVar1 * 2);
      uVar8 = (uVar3 & 0xffff7fff) >> 5;
      uVar8 = *(ushort *)(iVar5 + uVar8 * 2) & 0x1f | *(ushort *)(iVar14 + uVar8 * 2) & 0xffffffe0 |
              (uint)*(ushort *)(iVar13 + (uVar3 & 0x1f) * 2);
      *puVar4 = (ushort)(((uVar8 ^ *puVar4) & 0x820 ^ *puVar4 + uVar8) >> 1);
      if (iVar15 < 0) {
        return;
      }
      bVar1 = *(byte *)(iVar12 + (uVar9 & uVar7 >> 0xc | (uVar6 & uVar9) >> 0x14));
      puVar4 = puVar4 + 1;
    }
    iVar15 = iVar15 + -1;
    puVar4 = puVar4 + 1;
  } while (-1 < iVar15);
  return;
}



// Address: 4a0128c4

void FUN_4a0128c4(int *param_1)

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
  iVar4 = *(int *)PTR_LAB_4a012bb0;
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
  if (*(int *)(PTR_LAB_4a012bb0 + 0x5c) != 0) {
    if (uVar7 == 0) {
      return;
    }
    if (uVar7 == 0x1f) {
      do {
        uVar2 = (uint)*(ushort *)(iVar11 + (uVar8 & uVar6 >> 0xd | (uVar5 & uVar8) >> 0x14) * 2);
        iVar14 = iVar14 + -1;
        uVar6 = uVar6 + iVar10;
        uVar7 = (uVar2 & 0xffff7fff) >> 5;
        uVar5 = uVar5 + iVar9;
        uVar7 = *(ushort *)(iVar4 + uVar7 * 2) & 0x1f | *(ushort *)(iVar13 + uVar7 * 2) & 0xffffffe0
                | (uint)*(ushort *)(iVar12 + (uVar2 & 0x1f) * 2);
        *puVar3 = (ushort)(((uVar7 ^ *puVar3) & 0x820 ^ *puVar3 + uVar7) >> 1);
        puVar3 = puVar3 + 1;
      } while (-1 < iVar14);
      return;
    }
    do {
      uVar2 = (uint)*(ushort *)(iVar11 + (uVar8 & uVar6 >> 0xd | (uVar5 & uVar8) >> 0x14) * 2);
      iVar14 = iVar14 + -1;
      uVar6 = uVar6 + iVar10;
      uVar7 = (uVar2 & 0xffff7fff) >> 5;
      uVar5 = uVar5 + iVar9;
      uVar7 = *(ushort *)(iVar4 + uVar7 * 2) & 0x1f | *(ushort *)(iVar13 + uVar7 * 2) & 0xffffffe0 |
              (uint)*(ushort *)(iVar12 + (uVar2 & 0x1f) * 2);
      *puVar3 = (ushort)(((uVar7 ^ *puVar3) & 0x820 ^ *puVar3 + uVar7) >> 1);
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
        uVar2 = (uVar7 & 0xffff7fff) >> 5;
        iVar14 = iVar14 + -1;
        uVar7 = *(ushort *)(iVar4 + uVar2 * 2) & 0x1f | *(ushort *)(iVar13 + uVar2 * 2) & 0xffffffe0
                | (uint)*(ushort *)(iVar12 + (uVar7 & 0x1f) * 2);
        *puVar3 = (ushort)(((uVar7 ^ *puVar3) & 0x820 ^ *puVar3 + uVar7) >> 1);
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
      uVar7 = (uint)uVar1;
      uVar5 = uVar5 + iVar9;
      uVar6 = uVar6 + iVar10;
      if (uVar7 == 0) break;
      uVar2 = (uVar7 & 0xffff7fff) >> 5;
      iVar14 = iVar14 + -1;
      uVar7 = *(ushort *)(iVar4 + uVar2 * 2) & 0x1f | *(ushort *)(iVar13 + uVar2 * 2) & 0xffffffe0 |
              (uint)*(ushort *)(iVar12 + (uVar7 & 0x1f) * 2);
      *puVar3 = (ushort)(((uVar7 ^ *puVar3) & 0x820 ^ *puVar3 + uVar7) >> 1);
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



// Address: 4a012bb4

void FUN_4a012bb4(int *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  uVar6 = param_1[9];
  iVar13 = *param_1 + -1;
  iVar3 = *(int *)PTR_LAB_4a012ec0;
  iVar11 = iVar3 + (((uVar6 & 0xf800) >> 6) + 0x8000) * 2;
  iVar12 = iVar3 + (uVar6 & 0x7c0) * 0x20;
  iVar3 = iVar3 + (uVar6 & 0x1f) * 0x800;
  puVar2 = (ushort *)param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  iVar8 = param_1[4];
  iVar9 = param_1[5];
  uVar6 = uVar6 >> 0x1b;
  uVar7 = param_1[6];
  iVar10 = param_1[7];
  if (*(int *)(PTR_LAB_4a012ec0 + 0x5c) != 0) {
    if (uVar6 == 0) {
      return;
    }
    if (uVar6 == 0x1f) {
      do {
        uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar5 >> 0xd | (uVar4 & uVar7) >> 0x14) * 2);
        iVar13 = iVar13 + -1;
        uVar5 = uVar5 + iVar9;
        uVar6 = (uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5;
        uVar4 = uVar4 + iVar8;
        uVar6 = *(ushort *)(iVar3 + uVar6 * 2) & 0x1f | *(ushort *)(iVar12 + uVar6 * 2) & 0xffffffe0
                | (uint)*(ushort *)(iVar11 + (uint)(uVar1 >> 0xb) * 2);
        *puVar2 = (ushort)(((uVar6 ^ *puVar2) & 0x820 ^ *puVar2 + uVar6) >> 1);
        puVar2 = puVar2 + 1;
      } while (-1 < iVar13);
      return;
    }
    do {
      uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar5 >> 0xd | (uVar4 & uVar7) >> 0x14) * 2);
      iVar13 = iVar13 + -1;
      uVar5 = uVar5 + iVar9;
      uVar6 = (uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5;
      uVar4 = uVar4 + iVar8;
      uVar6 = *(ushort *)(iVar3 + uVar6 * 2) & 0x1f | *(ushort *)(iVar12 + uVar6 * 2) & 0xffffffe0 |
              (uint)*(ushort *)(iVar11 + (uint)(uVar1 >> 0xb) * 2);
      *puVar2 = (ushort)(((uVar6 ^ *puVar2) & 0x820 ^ *puVar2 + uVar6) >> 1);
      puVar2 = puVar2 + 1;
    } while (-1 < iVar13);
    return;
  }
  if (uVar6 == 0x1f) {
    do {
      uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar5 >> 0xd | (uVar4 & uVar7) >> 0x14) * 2);
      while( true ) {
        uVar6 = (uint)uVar1;
        uVar4 = uVar4 + iVar8;
        uVar5 = uVar5 + iVar9;
        if (uVar6 == 0) break;
        uVar6 = (uVar6 & 0x7ff) >> 6 | (uVar6 & 0x1f) << 5;
        iVar13 = iVar13 + -1;
        uVar6 = *(ushort *)(iVar3 + uVar6 * 2) & 0x1f | *(ushort *)(iVar12 + uVar6 * 2) & 0xffffffe0
                | (uint)*(ushort *)(iVar11 + (uint)(uVar1 >> 0xb) * 2);
        *puVar2 = (ushort)(((uVar6 ^ *puVar2) & 0x820 ^ *puVar2 + uVar6) >> 1);
        if (iVar13 < 0) {
          return;
        }
        uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar5 >> 0xd | (uVar4 & uVar7) >> 0x14) * 2);
        puVar2 = puVar2 + 1;
      }
      iVar13 = iVar13 + -1;
      puVar2 = puVar2 + 1;
    } while (-1 < iVar13);
    return;
  }
  if (uVar6 == 0) {
    return;
  }
  do {
    uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar5 >> 0xd | (uVar4 & uVar7) >> 0x14) * 2);
    while( true ) {
      uVar6 = (uint)uVar1;
      uVar4 = uVar4 + iVar8;
      uVar5 = uVar5 + iVar9;
      if (uVar6 == 0) break;
      uVar6 = (uVar6 & 0x7ff) >> 6 | (uVar6 & 0x1f) << 5;
      iVar13 = iVar13 + -1;
      uVar6 = *(ushort *)(iVar3 + uVar6 * 2) & 0x1f | *(ushort *)(iVar12 + uVar6 * 2) & 0xffffffe0 |
              (uint)*(ushort *)(iVar11 + (uint)(uVar1 >> 0xb) * 2);
      *puVar2 = (ushort)(((uVar6 ^ *puVar2) & 0x820 ^ *puVar2 + uVar6) >> 1);
      if (iVar13 < 0) {
        return;
      }
      uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar5 >> 0xd | (uVar4 & uVar7) >> 0x14) * 2);
      puVar2 = puVar2 + 1;
    }
    iVar13 = iVar13 + -1;
    puVar2 = puVar2 + 1;
  } while (-1 < iVar13);
  return;
}



// Address: 4a012ec4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a012ec4(int *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  
  uVar8 = param_1[9];
  puVar4 = (ushort *)param_1[1];
  iVar15 = *param_1 + -1;
  uVar1 = (uVar8 & 0x7ff) >> 5;
  uVar2 = (uVar8 & 0xffff) >> 0xb;
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  iVar10 = param_1[4];
  iVar11 = param_1[5];
  uVar13 = uVar8 & 0x1f;
  uVar8 = uVar8 >> 0x1b;
  uVar9 = param_1[6];
  iVar12 = param_1[7];
  iVar14 = param_1[8];
  if (*(int *)(PTR_LAB_4a013238 + 0x5c) != 0) {
    if (uVar8 == 0) {
      return;
    }
    if (uVar8 != 0x1f) {
      do {
        uVar8 = uVar6 & uVar9;
        bVar3 = *(byte *)(iVar12 + (uVar9 & uVar7 >> 0xc | uVar8 >> 0x15));
        uVar6 = uVar6 + iVar10;
        uVar7 = uVar7 + iVar11;
        if ((bool)((byte)(uVar8 >> 0x14) & 1)) {
          bVar3 = bVar3 >> 4;
        }
        uVar8 = (uint)*(ushort *)(iVar14 + (bVar3 & 0xf) * 2);
        iVar15 = iVar15 + -1;
        uVar8 = (uVar2 * (uVar8 & 0xf) >> 4) << 0xb | (((uVar8 & 0xff) >> 4) * uVar1 >> 4) << 5 |
                uVar13 * ((uVar8 & 0xfff) >> 8) >> 4;
        *puVar4 = (ushort)(((uVar8 ^ *puVar4) & 0x820 ^ *puVar4 + uVar8) >> 1);
        puVar4 = puVar4 + 1;
      } while (-1 < iVar15);
      return;
    }
    do {
      uVar8 = uVar6 & uVar9;
      bVar3 = *(byte *)(iVar12 + (uVar9 & uVar7 >> 0xc | uVar8 >> 0x15));
      uVar6 = uVar6 + iVar10;
      uVar7 = uVar7 + iVar11;
      if ((bool)((byte)(uVar8 >> 0x14) & 1)) {
        bVar3 = bVar3 >> 4;
      }
      uVar8 = (uint)*(ushort *)(iVar14 + (bVar3 & 0xf) * 2);
      iVar15 = iVar15 + -1;
      uVar8 = (uVar2 * (uVar8 & 0xf) >> 4) << 0xb | (((uVar8 & 0xff) >> 4) * uVar1 >> 4) << 5 |
              uVar13 * ((uVar8 & 0xfff) >> 8) >> 4;
      *puVar4 = (ushort)(((uVar8 ^ *puVar4) & 0x820 ^ *puVar4 + uVar8) >> 1);
      puVar4 = puVar4 + 1;
    } while (-1 < iVar15);
    return;
  }
  if (uVar8 == 0x1f) {
    do {
      bVar3 = *(byte *)(iVar12 + (uVar9 & uVar7 >> 0xc | (uVar6 & uVar9) >> 0x15));
      if ((bool)((byte)((uVar6 & uVar9) >> 0x14) & 1)) {
        bVar3 = bVar3 >> 4;
      }
      while( true ) {
        uVar7 = uVar7 + iVar11;
        uVar6 = uVar6 + iVar10;
        if ((bVar3 & 0xf) == 0) break;
        uVar8 = (uint)*(ushort *)(iVar14 + (bVar3 & 0xf) * 2);
        iVar15 = iVar15 + -1;
        uVar8 = (uVar2 * (uVar8 & 0xf) >> 4) << 0xb | (((uVar8 & 0xff) >> 4) * uVar1 >> 4) << 5 |
                uVar13 * ((uVar8 & 0xfff) >> 8) >> 4;
        puVar5 = puVar4 + 1;
        *puVar4 = (ushort)(((uVar8 ^ *puVar4) & 0x820 ^ *puVar4 + uVar8) >> 1);
        if (iVar15 < 0) {
          return;
        }
        bVar3 = *(byte *)(iVar12 + (uVar9 & uVar7 >> 0xc | (uVar6 & uVar9) >> 0x15));
        puVar4 = puVar5;
        if ((bool)((byte)((uVar6 & uVar9) >> 0x14) & 1)) {
          bVar3 = bVar3 >> 4;
        }
      }
      iVar15 = iVar15 + -1;
      puVar4 = puVar4 + 1;
      if (iVar15 < 0) {
        return;
      }
    } while( true );
  }
  if (uVar8 != 0) {
    do {
      bVar3 = *(byte *)(iVar12 + (uVar9 & uVar7 >> 0xc | (uVar6 & uVar9) >> 0x15));
      if ((bool)((byte)((uVar6 & uVar9) >> 0x14) & 1)) {
        bVar3 = bVar3 >> 4;
      }
      while( true ) {
        uVar7 = uVar7 + iVar11;
        uVar6 = uVar6 + iVar10;
        if ((bVar3 & 0xf) == 0) break;
        uVar8 = (uint)*(ushort *)(iVar14 + (bVar3 & 0xf) * 2);
        iVar15 = iVar15 + -1;
        uVar8 = (uVar2 * (uVar8 & 0xf) >> 4) << 0xb | (((uVar8 & 0xff) >> 4) * uVar1 >> 4) << 5 |
                uVar13 * ((uVar8 & 0xfff) >> 8) >> 4;
        puVar5 = puVar4 + 1;
        *puVar4 = (ushort)(((uVar8 ^ *puVar4) & 0x820 ^ *puVar4 + uVar8) >> 1);
        if (iVar15 < 0) {
          return;
        }
        bVar3 = *(byte *)(iVar12 + (uVar9 & uVar7 >> 0xc | (uVar6 & uVar9) >> 0x15));
        puVar4 = puVar5;
        if ((bool)((byte)((uVar6 & uVar9) >> 0x14) & 1)) {
          bVar3 = bVar3 >> 4;
        }
      }
      iVar15 = iVar15 + -1;
      puVar4 = puVar4 + 1;
      if (iVar15 < 0) {
        return;
      }
    } while( true );
  }
  return;
}



// Address: 4a01323c

void FUN_4a01323c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  
  uVar7 = param_1[9];
  uVar12 = uVar7 & 0x1f;
  iVar13 = *param_1 + -1;
  uVar1 = (uVar7 & 0x7ff) >> 5;
  uVar2 = (uVar7 & 0xffff) >> 0xb;
  puVar4 = (ushort *)param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  iVar9 = param_1[4];
  iVar10 = param_1[5];
  uVar7 = uVar7 >> 0x1b;
  uVar8 = param_1[6];
  iVar11 = param_1[7];
  if (*(int *)(PTR_LAB_4a013514 + 0x5c) != 0) {
    if (uVar7 == 0) {
      return;
    }
    if (uVar7 == 0x1f) {
      do {
        uVar7 = (uint)*(ushort *)(iVar11 + (uVar8 & uVar6 >> 0xd | (uVar5 & uVar8) >> 0x14) * 2);
        iVar13 = iVar13 + -1;
        uVar6 = uVar6 + iVar10;
        uVar7 = (uVar2 * (uVar7 & 0xf) >> 4) << 0xb | (uVar1 * ((uVar7 & 0xff) >> 4) >> 4) << 5 |
                uVar12 * ((uVar7 & 0xfff) >> 8) >> 4;
        uVar5 = uVar5 + iVar9;
        *puVar4 = (ushort)(((uVar7 ^ *puVar4) & 0x820 ^ *puVar4 + uVar7) >> 1);
        puVar4 = puVar4 + 1;
      } while (-1 < iVar13);
      return;
    }
    do {
      uVar7 = (uint)*(ushort *)(iVar11 + (uVar8 & uVar6 >> 0xd | (uVar5 & uVar8) >> 0x14) * 2);
      iVar13 = iVar13 + -1;
      uVar6 = uVar6 + iVar10;
      uVar7 = (uVar2 * (uVar7 & 0xf) >> 4) << 0xb | (uVar1 * ((uVar7 & 0xff) >> 4) >> 4) << 5 |
              uVar12 * ((uVar7 & 0xfff) >> 8) >> 4;
      uVar5 = uVar5 + iVar9;
      *puVar4 = (ushort)(((uVar7 ^ *puVar4) & 0x820 ^ *puVar4 + uVar7) >> 1);
      puVar4 = puVar4 + 1;
    } while (-1 < iVar13);
    return;
  }
  if (uVar7 == 0x1f) {
    do {
      uVar3 = *(ushort *)(iVar11 + (uVar8 & uVar6 >> 0xd | (uVar5 & uVar8) >> 0x14) * 2);
      while( true ) {
        uVar7 = (uint)uVar3;
        uVar5 = uVar5 + iVar9;
        uVar6 = uVar6 + iVar10;
        if (uVar7 == 0) break;
        uVar7 = (uVar2 * (uVar7 & 0xf) >> 4) << 0xb | (uVar1 * ((uVar7 & 0xff) >> 4) >> 4) << 5 |
                uVar12 * ((uVar7 & 0xfff) >> 8) >> 4;
        iVar13 = iVar13 + -1;
        *puVar4 = (ushort)(((uVar7 ^ *puVar4) & 0x820 ^ *puVar4 + uVar7) >> 1);
        if (iVar13 < 0) {
          return;
        }
        uVar3 = *(ushort *)(iVar11 + (uVar8 & uVar6 >> 0xd | (uVar5 & uVar8) >> 0x14) * 2);
        puVar4 = puVar4 + 1;
      }
      iVar13 = iVar13 + -1;
      puVar4 = puVar4 + 1;
    } while (-1 < iVar13);
    return;
  }
  if (uVar7 == 0) {
    return;
  }
  do {
    uVar3 = *(ushort *)(iVar11 + (uVar8 & uVar6 >> 0xd | (uVar5 & uVar8) >> 0x14) * 2);
    while( true ) {
      uVar7 = (uint)uVar3;
      uVar5 = uVar5 + iVar9;
      uVar6 = uVar6 + iVar10;
      if (uVar7 == 0) break;
      uVar7 = (uVar2 * (uVar7 & 0xf) >> 4) << 0xb | (uVar1 * ((uVar7 & 0xff) >> 4) >> 4) << 5 |
              uVar12 * ((uVar7 & 0xfff) >> 8) >> 4;
      iVar13 = iVar13 + -1;
      *puVar4 = (ushort)(((uVar7 ^ *puVar4) & 0x820 ^ *puVar4 + uVar7) >> 1);
      if (iVar13 < 0) {
        return;
      }
      uVar3 = *(ushort *)(iVar11 + (uVar8 & uVar6 >> 0xd | (uVar5 & uVar8) >> 0x14) * 2);
      puVar4 = puVar4 + 1;
    }
    iVar13 = iVar13 + -1;
    puVar4 = puVar4 + 1;
  } while (-1 < iVar13);
  return;
}



// Address: 4a013518

void FUN_4a013518(int *param_1)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  uVar6 = param_1[9];
  iVar13 = *param_1 + -1;
  iVar3 = *(int *)PTR_LAB_4a01381c;
  iVar11 = iVar3 + (((uVar6 & 0xf800) >> 6) + 0x8000) * 2;
  iVar12 = iVar3 + (uVar6 & 0x7c0) * 0x20;
  iVar3 = iVar3 + (uVar6 & 0x1f) * 0x800;
  puVar2 = (ushort *)param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  iVar8 = param_1[4];
  iVar9 = param_1[5];
  uVar6 = uVar6 >> 0x1b;
  uVar7 = param_1[6];
  iVar10 = param_1[7];
  if (*(int *)(PTR_LAB_4a01381c + 0x5c) != 0) {
    if (uVar6 == 0) {
      return;
    }
    if (uVar6 == 0x1f) {
      do {
        uVar6 = *(uint *)(iVar10 + (uVar7 & uVar5 >> 0xe | (uVar4 & uVar7) >> 0x14) * 4);
        iVar13 = iVar13 + -1;
        uVar1 = (uVar6 & 0xffff) >> 0xb | (uVar6 & 0xf8) << 2;
        uVar5 = uVar5 + iVar9;
        uVar6 = *(ushort *)(iVar3 + uVar1 * 2) & 0x1f | *(ushort *)(iVar12 + uVar1 * 2) & 0xffffffe0
                | (uint)*(ushort *)(iVar11 + ((uVar6 & 0xffffff) >> 0x13) * 2);
        uVar4 = uVar4 + iVar8;
        *puVar2 = (ushort)(((uVar6 ^ *puVar2) & 0x820 ^ *puVar2 + uVar6) >> 1);
        puVar2 = puVar2 + 1;
      } while (-1 < iVar13);
      return;
    }
    do {
      uVar6 = *(uint *)(iVar10 + (uVar7 & uVar5 >> 0xe | (uVar4 & uVar7) >> 0x14) * 4);
      iVar13 = iVar13 + -1;
      uVar1 = (uVar6 & 0xffff) >> 0xb | (uVar6 & 0xf8) << 2;
      uVar5 = uVar5 + iVar9;
      uVar6 = *(ushort *)(iVar3 + uVar1 * 2) & 0x1f | *(ushort *)(iVar12 + uVar1 * 2) & 0xffffffe0 |
              (uint)*(ushort *)(iVar11 + ((uVar6 & 0xffffff) >> 0x13) * 2);
      uVar4 = uVar4 + iVar8;
      *puVar2 = (ushort)(((uVar6 ^ *puVar2) & 0x820 ^ *puVar2 + uVar6) >> 1);
      puVar2 = puVar2 + 1;
    } while (-1 < iVar13);
    return;
  }
  if (uVar6 == 0x1f) {
    do {
      uVar6 = *(uint *)(iVar10 + (uVar7 & uVar5 >> 0xe | (uVar4 & uVar7) >> 0x14) * 4);
      while( true ) {
        uVar4 = uVar4 + iVar8;
        uVar5 = uVar5 + iVar9;
        if (uVar6 == 0) break;
        uVar1 = (uVar6 & 0xffff) >> 0xb | (uVar6 & 0xf8) << 2;
        iVar13 = iVar13 + -1;
        uVar6 = *(ushort *)(iVar3 + uVar1 * 2) & 0x1f | *(ushort *)(iVar12 + uVar1 * 2) & 0xffffffe0
                | (uint)*(ushort *)(iVar11 + ((uVar6 & 0xffffff) >> 0x13) * 2);
        *puVar2 = (ushort)(((uVar6 ^ *puVar2) & 0x820 ^ *puVar2 + uVar6) >> 1);
        if (iVar13 < 0) {
          return;
        }
        uVar6 = *(uint *)(iVar10 + (uVar7 & uVar5 >> 0xe | (uVar4 & uVar7) >> 0x14) * 4);
        puVar2 = puVar2 + 1;
      }
      iVar13 = iVar13 + -1;
      puVar2 = puVar2 + 1;
    } while (-1 < iVar13);
    return;
  }
  if (uVar6 == 0) {
    return;
  }
  do {
    uVar6 = *(uint *)(iVar10 + (uVar7 & uVar5 >> 0xe | (uVar4 & uVar7) >> 0x14) * 4);
    while( true ) {
      uVar4 = uVar4 + iVar8;
      uVar5 = uVar5 + iVar9;
      if (uVar6 == 0) break;
      uVar1 = (uVar6 & 0xffff) >> 0xb | (uVar6 & 0xf8) << 2;
      iVar13 = iVar13 + -1;
      uVar6 = *(ushort *)(iVar3 + uVar1 * 2) & 0x1f | *(ushort *)(iVar12 + uVar1 * 2) & 0xffffffe0 |
              (uint)*(ushort *)(iVar11 + ((uVar6 & 0xffffff) >> 0x13) * 2);
      *puVar2 = (ushort)(((uVar6 ^ *puVar2) & 0x820 ^ *puVar2 + uVar6) >> 1);
      if (iVar13 < 0) {
        return;
      }
      uVar6 = *(uint *)(iVar10 + (uVar7 & uVar5 >> 0xe | (uVar4 & uVar7) >> 0x14) * 4);
      puVar2 = puVar2 + 1;
    }
    iVar13 = iVar13 + -1;
    puVar2 = puVar2 + 1;
  } while (-1 < iVar13);
  return;
}



// Address: 4a013a9c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a013a9c(int *param_1)

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
  
  iVar17 = *(int *)PTR_LAB_4a014384;
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
  if (*(int *)(PTR_LAB_4a014384 + 0x5c) != 0) {
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



// Address: 4a014388

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a014388(int *param_1)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
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
  int iVar22;
  uint uVar23;
  
  iVar15 = *(int *)PTR_LAB_4a014c60;
  iVar21 = *param_1 + -1;
  puVar3 = (ushort *)param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  iVar16 = param_1[4];
  iVar7 = param_1[5];
  uVar6 = param_1[6];
  iVar8 = param_1[8];
  uVar12 = param_1[9];
  iVar17 = param_1[7];
  uVar10 = param_1[0xb];
  uVar13 = param_1[0xd];
  iVar18 = param_1[10];
  iVar22 = param_1[0xc];
  iVar19 = param_1[0xe];
  uVar23 = param_1[0xf];
  iVar2 = param_1[0x10];
  uVar9 = (uVar12 & 0xfff0ffff) << 0xc;
  uVar11 = (uVar10 & 0xfff0ffff) << 0xc;
  uVar14 = (uVar13 & 0xfff0ffff) << 0xc;
  if (*(int *)(PTR_LAB_4a014c60 + 0x5c) != 0) {
    if ((uVar23 & 0xffff) >> 0xb == 0x1f && iVar2 == 0) {
      do {
        uVar10 = uVar5 >> 0xc;
        uVar5 = uVar5 + iVar7;
        uVar20 = (uint)*(ushort *)
                        (iVar8 + (uint)*(byte *)(iVar17 + (uVar6 & uVar10 | (uVar4 & uVar6) >> 0x14)
                                                ) * 2);
        uVar10 = uVar9 >> 0x17;
        uVar12 = uVar14 >> 0x17;
        uVar13 = uVar11 >> 0x17;
        uVar9 = uVar9 + iVar18;
        uVar11 = uVar11 + iVar22;
        uVar14 = uVar14 + iVar19;
        uVar23 = (uVar20 & 0xffff7fff) >> 5;
        iVar21 = iVar21 + -1;
        uVar10 = *(ushort *)(iVar15 + uVar13 * 0x800 + uVar23 * 2) & 0xffffffe0 |
                 *(ushort *)(iVar15 + uVar12 * 0x800 + uVar23 * 2) & 0x1f |
                 (uint)*(ushort *)(iVar15 + (uVar10 * 0x20 + 0x8000) * 2 + (uVar20 & 0x1f) * 2);
        uVar4 = uVar4 + iVar16;
        *puVar3 = (ushort)(((uVar10 ^ *puVar3) & 0x820 ^ *puVar3 + uVar10) >> 1);
        puVar3 = puVar3 + 1;
      } while (-1 < iVar21);
      return;
    }
    do {
      uVar10 = uVar5 >> 0xc;
      uVar5 = uVar5 + iVar7;
      iVar21 = iVar21 + -1;
      uVar20 = (uint)*(ushort *)
                      (iVar8 + (uint)*(byte *)(iVar17 + (uVar6 & uVar10 | (uVar4 & uVar6) >> 0x14))
                               * 2);
      uVar10 = uVar9 >> 0x17;
      uVar12 = uVar11 >> 0x17;
      uVar13 = uVar14 >> 0x17;
      uVar9 = uVar9 + iVar18;
      uVar11 = uVar11 + iVar22;
      uVar14 = uVar14 + iVar19;
      uVar23 = (uVar20 & 0xffff7fff) >> 5;
      uVar4 = uVar4 + iVar16;
      uVar10 = *(ushort *)(iVar15 + uVar12 * 0x800 + uVar23 * 2) & 0xffffffe0 |
               *(ushort *)(iVar15 + uVar13 * 0x800 + uVar23 * 2) & 0x1f |
               (uint)*(ushort *)(iVar15 + (uVar10 * 0x20 + 0x8000) * 2 + (uVar20 & 0x1f) * 2);
      *puVar3 = (ushort)(((uVar10 ^ *puVar3) & 0x820 ^ *puVar3 + uVar10) >> 1);
      puVar3 = puVar3 + 1;
    } while (-1 < iVar21);
    return;
  }
  if ((uVar23 & 0xffff) >> 0xb == 0x1f) {
    if (iVar2 == 0) {
      do {
        bVar1 = *(byte *)(iVar17 + (uVar6 & uVar5 >> 0xc | (uVar4 & uVar6) >> 0x14));
        while( true ) {
          uVar5 = uVar5 + iVar7;
          uVar4 = uVar4 + iVar16;
          if (bVar1 == 0) break;
          uVar20 = (uint)*(ushort *)(iVar8 + (uint)bVar1 * 2);
          uVar10 = uVar9 >> 0x17;
          uVar12 = uVar14 >> 0x17;
          uVar13 = uVar11 >> 0x17;
          uVar9 = uVar9 + iVar18;
          uVar11 = uVar11 + iVar22;
          uVar14 = uVar14 + iVar19;
          uVar23 = (uVar20 & 0xffff7fff) >> 5;
          iVar21 = iVar21 + -1;
          uVar10 = *(ushort *)(iVar15 + uVar13 * 0x800 + uVar23 * 2) & 0xffffffe0 |
                   *(ushort *)(iVar15 + uVar12 * 0x800 + uVar23 * 2) & 0x1f |
                   (uint)*(ushort *)(iVar15 + (uVar10 * 0x20 + 0x8000) * 2 + (uVar20 & 0x1f) * 2);
          *puVar3 = (ushort)(((uVar10 ^ *puVar3) & 0x820 ^ *puVar3 + uVar10) >> 1);
          if (iVar21 < 0) {
            return;
          }
          bVar1 = *(byte *)(iVar17 + (uVar6 & uVar5 >> 0xc | (uVar4 & uVar6) >> 0x14));
          puVar3 = puVar3 + 1;
        }
        iVar21 = iVar21 + -1;
        uVar9 = uVar9 + iVar18;
        puVar3 = puVar3 + 1;
        uVar11 = uVar11 + iVar22;
        uVar14 = uVar14 + iVar19;
        if (iVar21 < 0) {
          return;
        }
      } while( true );
    }
  }
  else if (iVar2 == 0) {
    if ((uVar23 & 0xffff) >> 0xb == 0) {
      return;
    }
    if ((iVar18 != 0 || iVar22 != 0) || iVar19 != 0) {
      do {
        bVar1 = *(byte *)(iVar17 + (uVar6 & uVar5 >> 0xc | (uVar4 & uVar6) >> 0x14));
        while( true ) {
          uVar5 = uVar5 + iVar7;
          uVar4 = uVar4 + iVar16;
          if (bVar1 == 0) break;
          uVar20 = (uint)*(ushort *)(iVar8 + (uint)bVar1 * 2);
          uVar10 = uVar9 >> 0x17;
          uVar12 = uVar14 >> 0x17;
          uVar13 = uVar11 >> 0x17;
          uVar9 = uVar9 + iVar18;
          uVar11 = uVar11 + iVar22;
          uVar14 = uVar14 + iVar19;
          uVar23 = (uVar20 & 0xffff7fff) >> 5;
          iVar21 = iVar21 + -1;
          uVar10 = *(ushort *)(iVar15 + uVar13 * 0x800 + uVar23 * 2) & 0xffffffe0 |
                   *(ushort *)(iVar15 + uVar12 * 0x800 + uVar23 * 2) & 0x1f |
                   (uint)*(ushort *)(iVar15 + (uVar10 * 0x20 + 0x8000) * 2 + (uVar20 & 0x1f) * 2);
          *puVar3 = (ushort)(((uVar10 ^ *puVar3) & 0x820 ^ *puVar3 + uVar10) >> 1);
          if (iVar21 < 0) {
            return;
          }
          bVar1 = *(byte *)(iVar17 + (uVar6 & uVar5 >> 0xc | (uVar4 & uVar6) >> 0x14));
          puVar3 = puVar3 + 1;
        }
        iVar21 = iVar21 + -1;
        uVar9 = uVar9 + iVar18;
        puVar3 = puVar3 + 1;
        uVar11 = uVar11 + iVar22;
        uVar14 = uVar14 + iVar19;
        if (iVar21 < 0) {
          return;
        }
      } while( true );
    }
    do {
      bVar1 = *(byte *)(iVar17 + (uVar6 & uVar5 >> 0xc | (uVar4 & uVar6) >> 0x14));
      while( true ) {
        uVar5 = uVar5 + iVar7;
        uVar4 = uVar4 + iVar16;
        if (bVar1 == 0) break;
        iVar21 = iVar21 + -1;
        uVar11 = (uint)*(ushort *)(iVar8 + (uint)bVar1 * 2);
        uVar9 = (uVar11 & 0xffff7fff) >> 5;
        uVar9 = *(ushort *)(iVar15 + (uVar10 & 0xf800) + uVar9 * 2) & 0xffffffe0 |
                *(ushort *)(iVar15 + (uVar13 & 0xf800) + uVar9 * 2) & 0x1f |
                (uint)*(ushort *)
                       (iVar15 + (((uVar12 & 0xffff) >> 0xb) * 0x20 + 0x8000) * 2 +
                       (uVar11 & 0x1f) * 2);
        *puVar3 = (ushort)(((uVar9 ^ *puVar3) & 0x820 ^ *puVar3 + uVar9) >> 1);
        if (iVar21 < 0) {
          return;
        }
        bVar1 = *(byte *)(iVar17 + (uVar6 & uVar5 >> 0xc | (uVar4 & uVar6) >> 0x14));
        puVar3 = puVar3 + 1;
      }
      iVar21 = iVar21 + -1;
      puVar3 = puVar3 + 1;
      if (iVar21 < 0) {
        return;
      }
    } while( true );
  }
  if ((iVar18 != 0 || iVar22 != 0) || iVar19 != 0) {
    do {
      bVar1 = *(byte *)(iVar17 + (uVar6 & uVar5 >> 0xc | (uVar4 & uVar6) >> 0x14));
      while( true ) {
        uVar5 = uVar5 + iVar7;
        uVar4 = uVar4 + iVar16;
        if (bVar1 == 0) break;
        uVar20 = (uint)*(ushort *)(iVar8 + (uint)bVar1 * 2);
        uVar10 = uVar9 >> 0x17;
        uVar12 = uVar14 >> 0x17;
        uVar13 = uVar11 >> 0x17;
        uVar9 = uVar9 + iVar18;
        iVar21 = iVar21 + -1;
        uVar11 = uVar11 + iVar22;
        uVar14 = uVar14 + iVar19;
        uVar23 = (uVar20 & 0xffff7fff) >> 5;
        uVar10 = (uint)*(ushort *)(iVar15 + (uVar10 * 0x20 + 0x8000) * 2 + (uVar20 & 0x1f) * 2) |
                 *(ushort *)(iVar15 + uVar13 * 0x800 + uVar23 * 2) & 0xffffffe0 |
                 *(ushort *)(iVar15 + uVar12 * 0x800 + uVar23 * 2) & 0x1f;
        *puVar3 = (ushort)(((uVar10 ^ *puVar3) & 0x820 ^ *puVar3 + uVar10) >> 1);
        if (iVar21 < 0) {
          return;
        }
        bVar1 = *(byte *)(iVar17 + (uVar6 & uVar5 >> 0xc | (uVar4 & uVar6) >> 0x14));
        puVar3 = puVar3 + 1;
      }
      iVar21 = iVar21 + -1;
      uVar9 = uVar9 + iVar18;
      puVar3 = puVar3 + 1;
      uVar11 = uVar11 + iVar22;
      uVar14 = uVar14 + iVar19;
      if (iVar21 < 0) {
        return;
      }
    } while( true );
  }
  do {
    bVar1 = *(byte *)(iVar17 + (uVar6 & uVar5 >> 0xc | (uVar4 & uVar6) >> 0x14));
    while( true ) {
      uVar5 = uVar5 + iVar7;
      uVar4 = uVar4 + iVar16;
      if (bVar1 == 0) break;
      iVar21 = iVar21 + -1;
      uVar11 = (uint)*(ushort *)(iVar8 + (uint)bVar1 * 2);
      uVar9 = (uVar11 & 0xffff7fff) >> 5;
      uVar9 = *(ushort *)(iVar15 + (uVar10 & 0xf800) + uVar9 * 2) & 0xffffffe0 |
              *(ushort *)(iVar15 + (uVar13 & 0xf800) + uVar9 * 2) & 0x1f |
              (uint)*(ushort *)
                     (iVar15 + (((uVar12 & 0xffff) >> 0xb) * 0x20 + 0x8000) * 2 +
                     (uVar11 & 0x1f) * 2);
      *puVar3 = (ushort)(((uVar9 ^ *puVar3) & 0x820 ^ *puVar3 + uVar9) >> 1);
      if (iVar21 < 0) {
        return;
      }
      bVar1 = *(byte *)(iVar17 + (uVar6 & uVar5 >> 0xc | (uVar4 & uVar6) >> 0x14));
      puVar3 = puVar3 + 1;
    }
    iVar21 = iVar21 + -1;
    puVar3 = puVar3 + 1;
    if (iVar21 < 0) {
      return;
    }
  } while( true );
}



// Address: 4a014c64

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a014c64(int *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
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
  int iVar20;
  int iVar21;
  uint uVar22;
  
  iVar15 = *(int *)PTR_LAB_4a0154e0;
  iVar20 = *param_1 + -1;
  puVar4 = (ushort *)param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  iVar16 = param_1[4];
  iVar17 = param_1[5];
  uVar7 = param_1[6];
  iVar8 = param_1[7];
  uVar9 = param_1[9];
  uVar11 = param_1[0xb];
  uVar13 = param_1[0xd];
  iVar18 = param_1[10];
  iVar21 = param_1[0xc];
  iVar19 = param_1[0xe];
  uVar22 = param_1[0xf];
  iVar2 = param_1[0x10];
  uVar10 = (uVar9 & 0xfff0ffff) << 0xc;
  uVar12 = (uVar11 & 0xfff0ffff) << 0xc;
  uVar14 = (uVar13 & 0xfff0ffff) << 0xc;
  if (*(int *)(PTR_LAB_4a0154e0 + 0x5c) != 0) {
    if ((uVar22 & 0xffff) >> 0xb == 0x1f && iVar2 == 0) {
      do {
        uVar9 = uVar14 >> 0x17;
        uVar3 = (uint)*(ushort *)(iVar8 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
        iVar20 = iVar20 + -1;
        uVar11 = uVar10 >> 0x17;
        uVar13 = uVar12 >> 0x17;
        uVar10 = uVar10 + iVar18;
        uVar6 = uVar6 + iVar17;
        uVar12 = uVar12 + iVar21;
        uVar5 = uVar5 + iVar16;
        uVar14 = uVar14 + iVar19;
        uVar22 = (uVar3 & 0xffff7fff) >> 5;
        uVar9 = *(ushort *)(iVar15 + uVar13 * 0x800 + uVar22 * 2) & 0xffffffe0 |
                *(ushort *)(iVar15 + uVar9 * 0x800 + uVar22 * 2) & 0x1f |
                (uint)*(ushort *)(iVar15 + (uVar11 * 0x20 + 0x8000) * 2 + (uVar3 & 0x1f) * 2);
        *puVar4 = (ushort)(((uVar9 ^ *puVar4) & 0x820 ^ *puVar4 + uVar9) >> 1);
        puVar4 = puVar4 + 1;
      } while (-1 < iVar20);
      return;
    }
    do {
      uVar9 = uVar14 >> 0x17;
      uVar3 = (uint)*(ushort *)(iVar8 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
      iVar20 = iVar20 + -1;
      uVar11 = uVar10 >> 0x17;
      uVar13 = uVar12 >> 0x17;
      uVar10 = uVar10 + iVar18;
      uVar6 = uVar6 + iVar17;
      uVar12 = uVar12 + iVar21;
      uVar5 = uVar5 + iVar16;
      uVar14 = uVar14 + iVar19;
      uVar22 = (uVar3 & 0xffff7fff) >> 5;
      uVar9 = *(ushort *)(iVar15 + uVar13 * 0x800 + uVar22 * 2) & 0xffffffe0 |
              *(ushort *)(iVar15 + uVar9 * 0x800 + uVar22 * 2) & 0x1f |
              (uint)*(ushort *)(iVar15 + (uVar11 * 0x20 + 0x8000) * 2 + (uVar3 & 0x1f) * 2);
      *puVar4 = (ushort)(((uVar9 ^ *puVar4) & 0x820 ^ *puVar4 + uVar9) >> 1);
      puVar4 = puVar4 + 1;
    } while (-1 < iVar20);
    return;
  }
  if ((uVar22 & 0xffff) >> 0xb == 0x1f) {
    if (iVar2 == 0) {
      do {
        uVar1 = *(ushort *)(iVar8 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
        while( true ) {
          uVar9 = (uint)uVar1;
          uVar5 = uVar5 + iVar16;
          uVar6 = uVar6 + iVar17;
          if (uVar9 == 0) break;
          uVar11 = uVar10 >> 0x17;
          uVar13 = uVar12 >> 0x17;
          uVar22 = uVar14 >> 0x17;
          uVar10 = uVar10 + iVar18;
          iVar20 = iVar20 + -1;
          uVar12 = uVar12 + iVar21;
          uVar14 = uVar14 + iVar19;
          uVar3 = (uVar9 & 0xffff7fff) >> 5;
          uVar9 = *(ushort *)(iVar15 + uVar13 * 0x800 + uVar3 * 2) & 0xffffffe0 |
                  *(ushort *)(iVar15 + uVar22 * 0x800 + uVar3 * 2) & 0x1f |
                  (uint)*(ushort *)(iVar15 + (uVar11 * 0x20 + 0x8000) * 2 + (uVar9 & 0x1f) * 2);
          *puVar4 = (ushort)(((uVar9 ^ *puVar4) & 0x820 ^ *puVar4 + uVar9) >> 1);
          if (iVar20 < 0) {
            return;
          }
          uVar1 = *(ushort *)(iVar8 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
          puVar4 = puVar4 + 1;
        }
        iVar20 = iVar20 + -1;
        uVar10 = uVar10 + iVar18;
        puVar4 = puVar4 + 1;
        uVar12 = uVar12 + iVar21;
        uVar14 = uVar14 + iVar19;
        if (iVar20 < 0) {
          return;
        }
      } while( true );
    }
  }
  else if (iVar2 == 0) {
    if ((uVar22 & 0xffff) >> 0xb == 0) {
      return;
    }
    if (iVar19 != 0 || (iVar21 != 0 || iVar18 != 0)) {
      do {
        uVar1 = *(ushort *)(iVar8 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
        while( true ) {
          uVar9 = (uint)uVar1;
          uVar5 = uVar5 + iVar16;
          uVar6 = uVar6 + iVar17;
          if (uVar9 == 0) break;
          uVar11 = uVar10 >> 0x17;
          uVar13 = uVar12 >> 0x17;
          uVar22 = uVar14 >> 0x17;
          uVar10 = uVar10 + iVar18;
          iVar20 = iVar20 + -1;
          uVar12 = uVar12 + iVar21;
          uVar14 = uVar14 + iVar19;
          uVar3 = (uVar9 & 0xffff7fff) >> 5;
          uVar9 = *(ushort *)(iVar15 + uVar13 * 0x800 + uVar3 * 2) & 0xffffffe0 |
                  *(ushort *)(iVar15 + uVar22 * 0x800 + uVar3 * 2) & 0x1f |
                  (uint)*(ushort *)(iVar15 + (uVar11 * 0x20 + 0x8000) * 2 + (uVar9 & 0x1f) * 2);
          *puVar4 = (ushort)(((uVar9 ^ *puVar4) & 0x820 ^ *puVar4 + uVar9) >> 1);
          if (iVar20 < 0) {
            return;
          }
          uVar1 = *(ushort *)(iVar8 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
          puVar4 = puVar4 + 1;
        }
        iVar20 = iVar20 + -1;
        uVar10 = uVar10 + iVar18;
        puVar4 = puVar4 + 1;
        uVar12 = uVar12 + iVar21;
        uVar14 = uVar14 + iVar19;
        if (iVar20 < 0) {
          return;
        }
      } while( true );
    }
    do {
      uVar1 = *(ushort *)(iVar8 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
      while( true ) {
        uVar10 = (uint)uVar1;
        uVar5 = uVar5 + iVar16;
        uVar6 = uVar6 + iVar17;
        if (uVar10 == 0) break;
        uVar12 = (uVar10 & 0xffff7fff) >> 5;
        uVar10 = *(ushort *)(iVar15 + (uVar11 & 0xf800) + uVar12 * 2) & 0xffffffe0 |
                 *(ushort *)(iVar15 + (uVar13 & 0xf800) + uVar12 * 2) & 0x1f |
                 (uint)*(ushort *)
                        (iVar15 + (((uVar9 & 0xffff) >> 0xb) * 0x20 + 0x8000) * 2 +
                        (uVar10 & 0x1f) * 2);
        iVar20 = iVar20 + -1;
        *puVar4 = (ushort)(((uVar10 ^ *puVar4) & 0x820 ^ *puVar4 + uVar10) >> 1);
        if (iVar20 < 0) {
          return;
        }
        uVar1 = *(ushort *)(iVar8 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
        puVar4 = puVar4 + 1;
      }
      iVar20 = iVar20 + -1;
      puVar4 = puVar4 + 1;
      if (iVar20 < 0) {
        return;
      }
    } while( true );
  }
  if ((iVar18 != 0 || iVar21 != 0) || iVar19 != 0) {
    do {
      uVar1 = *(ushort *)(iVar8 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
      while( true ) {
        uVar9 = (uint)uVar1;
        uVar5 = uVar5 + iVar16;
        uVar6 = uVar6 + iVar17;
        if (uVar9 == 0) break;
        uVar11 = uVar10 >> 0x17;
        uVar13 = uVar12 >> 0x17;
        uVar22 = uVar14 >> 0x17;
        uVar10 = uVar10 + iVar18;
        iVar20 = iVar20 + -1;
        uVar12 = uVar12 + iVar21;
        uVar14 = uVar14 + iVar19;
        uVar3 = (uVar9 & 0xffff7fff) >> 5;
        uVar9 = *(ushort *)(iVar15 + uVar13 * 0x800 + uVar3 * 2) & 0xffffffe0 |
                *(ushort *)(iVar15 + uVar22 * 0x800 + uVar3 * 2) & 0x1f |
                (uint)*(ushort *)(iVar15 + (uVar11 * 0x20 + 0x8000) * 2 + (uVar9 & 0x1f) * 2);
        *puVar4 = (ushort)(((uVar9 ^ *puVar4) & 0x820 ^ *puVar4 + uVar9) >> 1);
        if (iVar20 < 0) {
          return;
        }
        uVar1 = *(ushort *)(iVar8 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
        puVar4 = puVar4 + 1;
      }
      iVar20 = iVar20 + -1;
      uVar10 = uVar10 + iVar18;
      puVar4 = puVar4 + 1;
      uVar12 = uVar12 + iVar21;
      uVar14 = uVar14 + iVar19;
      if (iVar20 < 0) {
        return;
      }
    } while( true );
  }
  do {
    uVar1 = *(ushort *)(iVar8 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
    while( true ) {
      uVar10 = (uint)uVar1;
      uVar5 = uVar5 + iVar16;
      uVar6 = uVar6 + iVar17;
      if (uVar10 == 0) break;
      uVar12 = (uVar10 & 0xffff7fff) >> 5;
      uVar10 = *(ushort *)(iVar15 + (uVar11 & 0xf800) + uVar12 * 2) & 0xffffffe0 |
               *(ushort *)(iVar15 + (uVar13 & 0xf800) + uVar12 * 2) & 0x1f |
               (uint)*(ushort *)
                      (iVar15 + (((uVar9 & 0xffff) >> 0xb) * 0x20 + 0x8000) * 2 +
                      (uVar10 & 0x1f) * 2);
      iVar20 = iVar20 + -1;
      *puVar4 = (ushort)(((uVar10 ^ *puVar4) & 0x820 ^ *puVar4 + uVar10) >> 1);
      if (iVar20 < 0) {
        return;
      }
      uVar1 = *(ushort *)(iVar8 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
      puVar4 = puVar4 + 1;
    }
    iVar20 = iVar20 + -1;
    puVar4 = puVar4 + 1;
    if (iVar20 < 0) {
      return;
    }
  } while( true );
}



// Address: 4a0154e4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0154e4(int *param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
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
  uint uVar21;
  
  iVar14 = *(int *)PTR_LAB_4a015dd8;
  iVar19 = *param_1 + -1;
  puVar3 = (ushort *)param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  iVar15 = param_1[4];
  iVar16 = param_1[5];
  uVar6 = param_1[6];
  iVar7 = param_1[7];
  uVar8 = param_1[9];
  uVar10 = param_1[0xb];
  uVar12 = param_1[0xd];
  iVar17 = param_1[10];
  iVar20 = param_1[0xc];
  iVar18 = param_1[0xe];
  uVar21 = param_1[0xf];
  iVar2 = param_1[0x10];
  uVar9 = (uVar8 & 0xfff0ffff) << 0xc;
  uVar11 = (uVar10 & 0xfff0ffff) << 0xc;
  uVar13 = (uVar12 & 0xfff0ffff) << 0xc;
  if (*(int *)(PTR_LAB_4a015dd8 + 0x5c) != 0) {
    if ((uVar21 & 0xffff) >> 0xb == 0x1f && iVar2 == 0) {
      do {
        uVar8 = uVar13 >> 0x17;
        uVar1 = *(ushort *)(iVar7 + (uVar6 & uVar5 >> 0xd | (uVar4 & uVar6) >> 0x14) * 2);
        uVar10 = uVar9 >> 0x17;
        uVar12 = uVar11 >> 0x17;
        uVar9 = uVar9 + iVar17;
        uVar11 = uVar11 + iVar20;
        uVar13 = uVar13 + iVar18;
        iVar19 = iVar19 + -1;
        uVar21 = (uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5;
        uVar5 = uVar5 + iVar16;
        uVar4 = uVar4 + iVar15;
        uVar8 = *(ushort *)(iVar14 + uVar12 * 0x800 + uVar21 * 2) & 0xffffffe0 |
                *(ushort *)(iVar14 + uVar8 * 0x800 + uVar21 * 2) & 0x1f |
                (uint)*(ushort *)(iVar14 + (uVar10 * 0x20 + 0x8000) * 2 + (uint)(uVar1 >> 0xb) * 2);
        *puVar3 = (ushort)(((uVar8 ^ *puVar3) & 0x820 ^ *puVar3 + uVar8) >> 1);
        puVar3 = puVar3 + 1;
      } while (-1 < iVar19);
      return;
    }
    do {
      uVar8 = uVar13 >> 0x17;
      uVar1 = *(ushort *)(iVar7 + (uVar6 & uVar5 >> 0xd | (uVar4 & uVar6) >> 0x14) * 2);
      uVar10 = uVar9 >> 0x17;
      uVar12 = uVar11 >> 0x17;
      uVar9 = uVar9 + iVar17;
      uVar11 = uVar11 + iVar20;
      uVar13 = uVar13 + iVar18;
      iVar19 = iVar19 + -1;
      uVar21 = (uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5;
      uVar5 = uVar5 + iVar16;
      uVar4 = uVar4 + iVar15;
      uVar8 = *(ushort *)(iVar14 + uVar12 * 0x800 + uVar21 * 2) & 0xffffffe0 |
              *(ushort *)(iVar14 + uVar8 * 0x800 + uVar21 * 2) & 0x1f |
              (uint)*(ushort *)(iVar14 + (uVar10 * 0x20 + 0x8000) * 2 + (uint)(uVar1 >> 0xb) * 2);
      *puVar3 = (ushort)(((uVar8 ^ *puVar3) & 0x820 ^ *puVar3 + uVar8) >> 1);
      puVar3 = puVar3 + 1;
    } while (-1 < iVar19);
    return;
  }
  if ((uVar21 & 0xffff) >> 0xb == 0x1f) {
    if (iVar2 == 0) {
      do {
        uVar1 = *(ushort *)(iVar7 + (uVar6 & uVar5 >> 0xd | (uVar4 & uVar6) >> 0x14) * 2);
        while( true ) {
          uVar8 = (uint)uVar1;
          uVar4 = uVar4 + iVar15;
          uVar5 = uVar5 + iVar16;
          if (uVar8 == 0) break;
          uVar10 = uVar9 >> 0x17;
          uVar12 = uVar13 >> 0x17;
          uVar21 = uVar11 >> 0x17;
          iVar19 = iVar19 + -1;
          uVar9 = uVar9 + iVar17;
          uVar11 = uVar11 + iVar20;
          uVar13 = uVar13 + iVar18;
          uVar8 = (uVar8 & 0x7ff) >> 6 | (uVar8 & 0x1f) << 5;
          uVar8 = (uint)*(ushort *)
                         (iVar14 + (uVar10 * 0x20 + 0x8000) * 2 + (uint)(uVar1 >> 0xb) * 2) |
                  *(ushort *)(iVar14 + uVar12 * 0x800 + uVar8 * 2) & 0x1f |
                  *(ushort *)(iVar14 + uVar21 * 0x800 + uVar8 * 2) & 0xffffffe0;
          *puVar3 = (ushort)(((uVar8 ^ *puVar3) & 0x820 ^ *puVar3 + uVar8) >> 1);
          if (iVar19 < 0) {
            return;
          }
          uVar1 = *(ushort *)(iVar7 + (uVar6 & uVar5 >> 0xd | (uVar4 & uVar6) >> 0x14) * 2);
          puVar3 = puVar3 + 1;
        }
        iVar19 = iVar19 + -1;
        uVar9 = uVar9 + iVar17;
        puVar3 = puVar3 + 1;
        uVar11 = uVar11 + iVar20;
        uVar13 = uVar13 + iVar18;
        if (iVar19 < 0) {
          return;
        }
      } while( true );
    }
  }
  else if (iVar2 == 0) {
    if ((uVar21 & 0xffff) >> 0xb == 0) {
      return;
    }
    if (iVar18 != 0 || (iVar20 != 0 || iVar17 != 0)) {
      do {
        uVar1 = *(ushort *)(iVar7 + (uVar6 & uVar5 >> 0xd | (uVar4 & uVar6) >> 0x14) * 2);
        while( true ) {
          uVar8 = (uint)uVar1;
          uVar4 = uVar4 + iVar15;
          uVar5 = uVar5 + iVar16;
          if (uVar8 == 0) break;
          uVar10 = uVar9 >> 0x17;
          uVar12 = uVar11 >> 0x17;
          uVar21 = uVar13 >> 0x17;
          uVar9 = uVar9 + iVar17;
          uVar11 = uVar11 + iVar20;
          iVar19 = iVar19 + -1;
          uVar13 = uVar13 + iVar18;
          uVar8 = (uVar8 & 0x7ff) >> 6 | (uVar8 & 0x1f) << 5;
          uVar8 = (uint)*(ushort *)
                         (iVar14 + (uVar10 * 0x20 + 0x8000) * 2 + (uint)(uVar1 >> 0xb) * 2) |
                  *(ushort *)(iVar14 + uVar21 * 0x800 + uVar8 * 2) & 0x1f |
                  *(ushort *)(iVar14 + uVar12 * 0x800 + uVar8 * 2) & 0xffffffe0;
          *puVar3 = (ushort)(((uVar8 ^ *puVar3) & 0x820 ^ *puVar3 + uVar8) >> 1);
          if (iVar19 < 0) {
            return;
          }
          uVar1 = *(ushort *)(iVar7 + (uVar6 & uVar5 >> 0xd | (uVar4 & uVar6) >> 0x14) * 2);
          puVar3 = puVar3 + 1;
        }
        iVar19 = iVar19 + -1;
        uVar9 = uVar9 + iVar17;
        puVar3 = puVar3 + 1;
        uVar11 = uVar11 + iVar20;
        uVar13 = uVar13 + iVar18;
        if (iVar19 < 0) {
          return;
        }
      } while( true );
    }
    do {
      uVar1 = *(ushort *)(iVar7 + (uVar6 & uVar5 >> 0xd | (uVar4 & uVar6) >> 0x14) * 2);
      while( true ) {
        uVar9 = (uint)uVar1;
        uVar4 = uVar4 + iVar15;
        uVar5 = uVar5 + iVar16;
        if (uVar9 == 0) break;
        uVar9 = (uVar9 & 0x7ff) >> 6 | (uVar9 & 0x1f) << 5;
        uVar9 = *(ushort *)(iVar14 + (uVar10 & 0xf800) + uVar9 * 2) & 0xffffffe0 |
                *(ushort *)(iVar14 + (uVar12 & 0xf800) + uVar9 * 2) & 0x1f |
                (uint)*(ushort *)
                       (iVar14 + (((uVar8 & 0xffff) >> 0xb) * 0x20 + 0x8000) * 2 +
                       (uint)(uVar1 >> 0xb) * 2);
        iVar19 = iVar19 + -1;
        *puVar3 = (ushort)(((uVar9 ^ *puVar3) & 0x820 ^ *puVar3 + uVar9) >> 1);
        if (iVar19 < 0) {
          return;
        }
        uVar1 = *(ushort *)(iVar7 + (uVar6 & uVar5 >> 0xd | (uVar4 & uVar6) >> 0x14) * 2);
        puVar3 = puVar3 + 1;
      }
      iVar19 = iVar19 + -1;
      puVar3 = puVar3 + 1;
      if (iVar19 < 0) {
        return;
      }
    } while( true );
  }
  if (iVar18 != 0 || (iVar20 != 0 || iVar17 != 0)) {
    do {
      uVar1 = *(ushort *)(iVar7 + (uVar6 & uVar5 >> 0xd | (uVar4 & uVar6) >> 0x14) * 2);
      while( true ) {
        uVar8 = (uint)uVar1;
        uVar4 = uVar4 + iVar15;
        uVar5 = uVar5 + iVar16;
        if (uVar8 == 0) break;
        uVar10 = uVar9 >> 0x17;
        uVar12 = uVar11 >> 0x17;
        uVar21 = uVar13 >> 0x17;
        uVar9 = uVar9 + iVar17;
        uVar11 = uVar11 + iVar20;
        iVar19 = iVar19 + -1;
        uVar13 = uVar13 + iVar18;
        uVar8 = (uVar8 & 0x7ff) >> 6 | (uVar8 & 0x1f) << 5;
        uVar8 = (uint)*(ushort *)(iVar14 + (uVar10 * 0x20 + 0x8000) * 2 + (uint)(uVar1 >> 0xb) * 2)
                | *(ushort *)(iVar14 + uVar21 * 0x800 + uVar8 * 2) & 0x1f |
                  *(ushort *)(iVar14 + uVar12 * 0x800 + uVar8 * 2) & 0xffffffe0;
        *puVar3 = (ushort)(((uVar8 ^ *puVar3) & 0x820 ^ *puVar3 + uVar8) >> 1);
        if (iVar19 < 0) {
          return;
        }
        uVar1 = *(ushort *)(iVar7 + (uVar6 & uVar5 >> 0xd | (uVar4 & uVar6) >> 0x14) * 2);
        puVar3 = puVar3 + 1;
      }
      iVar19 = iVar19 + -1;
      uVar9 = uVar9 + iVar17;
      puVar3 = puVar3 + 1;
      uVar11 = uVar11 + iVar20;
      uVar13 = uVar13 + iVar18;
      if (iVar19 < 0) {
        return;
      }
    } while( true );
  }
  do {
    uVar1 = *(ushort *)(iVar7 + (uVar6 & uVar5 >> 0xd | (uVar4 & uVar6) >> 0x14) * 2);
    while( true ) {
      uVar9 = (uint)uVar1;
      uVar4 = uVar4 + iVar15;
      uVar5 = uVar5 + iVar16;
      if (uVar9 == 0) break;
      uVar9 = (uVar9 & 0x7ff) >> 6 | (uVar9 & 0x1f) << 5;
      uVar9 = *(ushort *)(iVar14 + (uVar10 & 0xf800) + uVar9 * 2) & 0xffffffe0 |
              *(ushort *)(iVar14 + (uVar12 & 0xf800) + uVar9 * 2) & 0x1f |
              (uint)*(ushort *)
                     (iVar14 + (((uVar8 & 0xffff) >> 0xb) * 0x20 + 0x8000) * 2 +
                     (uint)(uVar1 >> 0xb) * 2);
      iVar19 = iVar19 + -1;
      *puVar3 = (ushort)(((uVar9 ^ *puVar3) & 0x820 ^ *puVar3 + uVar9) >> 1);
      if (iVar19 < 0) {
        return;
      }
      uVar1 = *(ushort *)(iVar7 + (uVar6 & uVar5 >> 0xd | (uVar4 & uVar6) >> 0x14) * 2);
      puVar3 = puVar3 + 1;
    }
    iVar19 = iVar19 + -1;
    puVar3 = puVar3 + 1;
    if (iVar19 < 0) {
      return;
    }
  } while( true );
}



// Address: 4a015ddc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a015ddc(int *param_1)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  
  iVar20 = *param_1 + -1;
  puVar3 = (ushort *)param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  iVar8 = param_1[4];
  iVar9 = param_1[5];
  uVar7 = param_1[6];
  iVar10 = param_1[7];
  iVar11 = param_1[8];
  uVar12 = param_1[9];
  uVar14 = param_1[0xb];
  uVar16 = param_1[0xd];
  iVar18 = param_1[10];
  iVar21 = param_1[0xc];
  iVar19 = param_1[0xe];
  uVar22 = param_1[0xf];
  iVar2 = param_1[0x10];
  uVar13 = (uVar12 & 0xfff0ffff) << 0xc;
  uVar15 = (uVar14 & 0xfff0ffff) << 0xc;
  uVar17 = (uVar16 & 0xfff0ffff) << 0xc;
  if (*(int *)(PTR_LAB_4a01660c + 0x5c) != 0) {
    if ((uVar22 & 0xffff) >> 0xb == 0x1f && iVar2 == 0) {
      do {
        uVar12 = uVar5 & uVar7;
        bVar1 = *(byte *)(iVar10 + (uVar7 & uVar6 >> 0xc | uVar12 >> 0x15));
        uVar5 = uVar5 + iVar8;
        if ((bool)((byte)(uVar12 >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        uVar22 = (uint)*(ushort *)(iVar11 + (bVar1 & 0xf) * 2);
        uVar12 = uVar17 & 0xfffffff;
        uVar14 = uVar15 & 0xfffffff;
        uVar16 = uVar13 & 0xfffffff;
        uVar13 = uVar13 + iVar18;
        iVar20 = iVar20 + -1;
        uVar15 = uVar15 + iVar21;
        uVar6 = uVar6 + iVar9;
        uVar17 = uVar17 + iVar19;
        uVar12 = ((uVar22 & 0xf) * (uVar16 >> 0x17) >> 4) << 0xb |
                 (((uVar22 & 0xff) >> 4) * (uVar14 >> 0x16) >> 4) << 5 |
                 ((uVar22 & 0xfff) >> 8) * (uVar12 >> 0x17) >> 4;
        *puVar3 = (ushort)(((uVar12 ^ *puVar3) & 0x820 ^ *puVar3 + uVar12) >> 1);
        puVar3 = puVar3 + 1;
      } while (-1 < iVar20);
      return;
    }
    do {
      uVar12 = uVar5 & uVar7;
      bVar1 = *(byte *)(iVar10 + (uVar7 & uVar6 >> 0xc | uVar12 >> 0x15));
      uVar5 = uVar5 + iVar8;
      if ((bool)((byte)(uVar12 >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar22 = (uint)*(ushort *)(iVar11 + (bVar1 & 0xf) * 2);
      uVar12 = uVar17 & 0xfffffff;
      uVar14 = uVar15 & 0xfffffff;
      uVar16 = uVar13 & 0xfffffff;
      uVar13 = uVar13 + iVar18;
      iVar20 = iVar20 + -1;
      uVar15 = uVar15 + iVar21;
      uVar6 = uVar6 + iVar9;
      uVar17 = uVar17 + iVar19;
      uVar12 = ((uVar22 & 0xf) * (uVar16 >> 0x17) >> 4) << 0xb |
               (((uVar22 & 0xff) >> 4) * (uVar14 >> 0x16) >> 4) << 5 |
               ((uVar22 & 0xfff) >> 8) * (uVar12 >> 0x17) >> 4;
      *puVar3 = (ushort)(((uVar12 ^ *puVar3) & 0x820 ^ *puVar3 + uVar12) >> 1);
      puVar3 = puVar3 + 1;
    } while (-1 < iVar20);
    return;
  }
  if ((uVar22 & 0xffff) >> 0xb == 0x1f) {
    if (iVar2 == 0) {
      do {
        bVar1 = *(byte *)(iVar10 + (uVar7 & uVar6 >> 0xc | (uVar5 & uVar7) >> 0x15));
        if ((bool)((byte)((uVar5 & uVar7) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        while( true ) {
          uVar6 = uVar6 + iVar9;
          uVar5 = uVar5 + iVar8;
          if ((bVar1 & 0xf) == 0) break;
          uVar22 = (uint)*(ushort *)(iVar11 + (bVar1 & 0xf) * 2);
          uVar12 = uVar17 & 0xfffffff;
          uVar14 = uVar15 & 0xfffffff;
          uVar16 = uVar13 & 0xfffffff;
          iVar20 = iVar20 + -1;
          uVar13 = uVar13 + iVar18;
          uVar15 = uVar15 + iVar21;
          uVar17 = uVar17 + iVar19;
          uVar12 = ((uVar16 >> 0x17) * (uVar22 & 0xf) >> 4) << 0xb |
                   (((uVar22 & 0xff) >> 4) * (uVar14 >> 0x16) >> 4) << 5 |
                   ((uVar22 & 0xfff) >> 8) * (uVar12 >> 0x17) >> 4;
          puVar4 = puVar3 + 1;
          *puVar3 = (ushort)(((uVar12 ^ *puVar3) & 0x820 ^ *puVar3 + uVar12) >> 1);
          if (iVar20 < 0) {
            return;
          }
          bVar1 = *(byte *)(iVar10 + (uVar7 & uVar6 >> 0xc | (uVar5 & uVar7) >> 0x15));
          puVar3 = puVar4;
          if ((bool)((byte)((uVar5 & uVar7) >> 0x14) & 1)) {
            bVar1 = bVar1 >> 4;
          }
        }
        iVar20 = iVar20 + -1;
        uVar13 = uVar13 + iVar18;
        puVar3 = puVar3 + 1;
        uVar15 = uVar15 + iVar21;
        uVar17 = uVar17 + iVar19;
        if (iVar20 < 0) {
          return;
        }
      } while( true );
    }
  }
  else if (iVar2 == 0) {
    if ((uVar22 & 0xffff) >> 0xb == 0) {
      return;
    }
    if (iVar19 != 0 || (iVar21 != 0 || iVar18 != 0)) {
      do {
        bVar1 = *(byte *)(iVar10 + (uVar7 & uVar6 >> 0xc | (uVar5 & uVar7) >> 0x15));
        if ((bool)((byte)((uVar5 & uVar7) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        while( true ) {
          uVar6 = uVar6 + iVar9;
          uVar5 = uVar5 + iVar8;
          if ((bVar1 & 0xf) == 0) break;
          uVar22 = (uint)*(ushort *)(iVar11 + (bVar1 & 0xf) * 2);
          uVar12 = uVar17 & 0xfffffff;
          uVar14 = uVar15 & 0xfffffff;
          uVar16 = uVar13 & 0xfffffff;
          iVar20 = iVar20 + -1;
          uVar13 = uVar13 + iVar18;
          uVar15 = uVar15 + iVar21;
          uVar17 = uVar17 + iVar19;
          uVar12 = ((uVar16 >> 0x17) * (uVar22 & 0xf) >> 4) << 0xb |
                   (((uVar22 & 0xff) >> 4) * (uVar14 >> 0x16) >> 4) << 5 |
                   ((uVar22 & 0xfff) >> 8) * (uVar12 >> 0x17) >> 4;
          puVar4 = puVar3 + 1;
          *puVar3 = (ushort)(((uVar12 ^ *puVar3) & 0x820 ^ *puVar3 + uVar12) >> 1);
          if (iVar20 < 0) {
            return;
          }
          bVar1 = *(byte *)(iVar10 + (uVar7 & uVar6 >> 0xc | (uVar5 & uVar7) >> 0x15));
          puVar3 = puVar4;
          if ((bool)((byte)((uVar5 & uVar7) >> 0x14) & 1)) {
            bVar1 = bVar1 >> 4;
          }
        }
        iVar20 = iVar20 + -1;
        uVar13 = uVar13 + iVar18;
        puVar3 = puVar3 + 1;
        uVar15 = uVar15 + iVar21;
        uVar17 = uVar17 + iVar19;
        if (iVar20 < 0) {
          return;
        }
      } while( true );
    }
    do {
      bVar1 = *(byte *)(iVar10 + (uVar7 & uVar6 >> 0xc | (uVar5 & uVar7) >> 0x15));
      if ((bool)((byte)((uVar5 & uVar7) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      while( true ) {
        uVar6 = uVar6 + iVar9;
        uVar5 = uVar5 + iVar8;
        if ((bVar1 & 0xf) == 0) break;
        uVar13 = (uint)*(ushort *)(iVar11 + (bVar1 & 0xf) * 2);
        iVar20 = iVar20 + -1;
        uVar13 = (((uVar12 & 0xffff) >> 0xb) * (uVar13 & 0xf) >> 4) << 0xb |
                 (((uVar14 & 0xffff) >> 10) * ((uVar13 & 0xff) >> 4) >> 4) << 5 |
                 ((uVar16 & 0xffff) >> 0xb) * ((uVar13 & 0xfff) >> 8) >> 4;
        puVar4 = puVar3 + 1;
        *puVar3 = (ushort)(((uVar13 ^ *puVar3) & 0x820 ^ *puVar3 + uVar13) >> 1);
        if (iVar20 < 0) {
          return;
        }
        bVar1 = *(byte *)(iVar10 + (uVar7 & uVar6 >> 0xc | (uVar5 & uVar7) >> 0x15));
        puVar3 = puVar4;
        if ((bool)((byte)((uVar5 & uVar7) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
      }
      iVar20 = iVar20 + -1;
      puVar3 = puVar3 + 1;
      if (iVar20 < 0) {
        return;
      }
    } while( true );
  }
  if (iVar19 != 0 || (iVar21 != 0 || iVar18 != 0)) {
    do {
      bVar1 = *(byte *)(iVar10 + (uVar7 & uVar6 >> 0xc | (uVar5 & uVar7) >> 0x15));
      if ((bool)((byte)((uVar5 & uVar7) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      while( true ) {
        uVar6 = uVar6 + iVar9;
        uVar5 = uVar5 + iVar8;
        if ((bVar1 & 0xf) == 0) break;
        uVar22 = (uint)*(ushort *)(iVar11 + (bVar1 & 0xf) * 2);
        uVar12 = uVar17 & 0xfffffff;
        uVar14 = uVar15 & 0xfffffff;
        uVar16 = uVar13 & 0xfffffff;
        iVar20 = iVar20 + -1;
        uVar13 = uVar13 + iVar18;
        uVar15 = uVar15 + iVar21;
        uVar17 = uVar17 + iVar19;
        uVar12 = ((uVar16 >> 0x17) * (uVar22 & 0xf) >> 4) << 0xb |
                 (((uVar22 & 0xff) >> 4) * (uVar14 >> 0x16) >> 4) << 5 |
                 ((uVar22 & 0xfff) >> 8) * (uVar12 >> 0x17) >> 4;
        puVar4 = puVar3 + 1;
        *puVar3 = (ushort)(((uVar12 ^ *puVar3) & 0x820 ^ *puVar3 + uVar12) >> 1);
        if (iVar20 < 0) {
          return;
        }
        bVar1 = *(byte *)(iVar10 + (uVar7 & uVar6 >> 0xc | (uVar5 & uVar7) >> 0x15));
        puVar3 = puVar4;
        if ((bool)((byte)((uVar5 & uVar7) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
      }
      iVar20 = iVar20 + -1;
      uVar13 = uVar13 + iVar18;
      puVar3 = puVar3 + 1;
      uVar15 = uVar15 + iVar21;
      uVar17 = uVar17 + iVar19;
      if (iVar20 < 0) {
        return;
      }
    } while( true );
  }
  do {
    bVar1 = *(byte *)(iVar10 + (uVar7 & uVar6 >> 0xc | (uVar5 & uVar7) >> 0x15));
    if ((bool)((byte)((uVar5 & uVar7) >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    while( true ) {
      uVar6 = uVar6 + iVar9;
      uVar5 = uVar5 + iVar8;
      if ((bVar1 & 0xf) == 0) break;
      uVar13 = (uint)*(ushort *)(iVar11 + (bVar1 & 0xf) * 2);
      iVar20 = iVar20 + -1;
      uVar13 = (((uVar12 & 0xffff) >> 0xb) * (uVar13 & 0xf) >> 4) << 0xb |
               (((uVar14 & 0xffff) >> 10) * ((uVar13 & 0xff) >> 4) >> 4) << 5 |
               ((uVar16 & 0xffff) >> 0xb) * ((uVar13 & 0xfff) >> 8) >> 4;
      puVar4 = puVar3 + 1;
      *puVar3 = (ushort)(((uVar13 ^ *puVar3) & 0x820 ^ *puVar3 + uVar13) >> 1);
      if (iVar20 < 0) {
        return;
      }
      bVar1 = *(byte *)(iVar10 + (uVar7 & uVar6 >> 0xc | (uVar5 & uVar7) >> 0x15));
      puVar3 = puVar4;
      if ((bool)((byte)((uVar5 & uVar7) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
    }
    iVar20 = iVar20 + -1;
    puVar3 = puVar3 + 1;
    if (iVar20 < 0) {
      return;
    }
  } while( true );
}



// Address: 4a016610

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a016610(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
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
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  
  iVar19 = *param_1 + -1;
  puVar4 = (ushort *)param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  iVar8 = param_1[4];
  iVar9 = param_1[5];
  uVar11 = param_1[9];
  uVar13 = param_1[0xb];
  uVar15 = param_1[0xd];
  uVar7 = param_1[6];
  iVar10 = param_1[7];
  iVar17 = param_1[10];
  iVar20 = param_1[0xc];
  iVar18 = param_1[0xe];
  uVar21 = param_1[0xf];
  iVar3 = param_1[0x10];
  uVar12 = (uVar11 & 0xfff0ffff) << 0xc;
  uVar14 = (uVar13 & 0xfff0ffff) << 0xc;
  uVar16 = (uVar15 & 0xfff0ffff) << 0xc;
  if (*(int *)(PTR_LAB_4a016df4 + 0x5c) != 0) {
    bVar22 = (uVar21 & 0xffff) >> 0xb == 0x1f;
    iVar2 = 0x1f;
    if (bVar22) {
      iVar2 = iVar3;
    }
    if (bVar22 && iVar2 == 0) {
      do {
        uVar21 = (uint)*(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
        uVar11 = uVar16 & 0xfffffff;
        uVar13 = uVar14 & 0xfffffff;
        uVar15 = uVar12 & 0xfffffff;
        uVar12 = uVar12 + iVar17;
        iVar19 = iVar19 + -1;
        uVar14 = uVar14 + iVar20;
        uVar6 = uVar6 + iVar9;
        uVar16 = uVar16 + iVar18;
        uVar5 = uVar5 + iVar8;
        uVar11 = ((uVar21 & 0xf) * (uVar15 >> 0x17) >> 4) << 0xb |
                 (((uVar21 & 0xff) >> 4) * (uVar13 >> 0x16) >> 4) << 5 |
                 ((uVar21 & 0xfff) >> 8) * (uVar11 >> 0x17) >> 4;
        *puVar4 = (ushort)(((uVar11 ^ *puVar4) & 0x820 ^ *puVar4 + uVar11) >> 1);
        puVar4 = puVar4 + 1;
      } while (-1 < iVar19);
      return;
    }
    do {
      uVar21 = (uint)*(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
      uVar11 = uVar16 & 0xfffffff;
      uVar13 = uVar14 & 0xfffffff;
      uVar15 = uVar12 & 0xfffffff;
      uVar12 = uVar12 + iVar17;
      iVar19 = iVar19 + -1;
      uVar14 = uVar14 + iVar20;
      uVar6 = uVar6 + iVar9;
      uVar16 = uVar16 + iVar18;
      uVar5 = uVar5 + iVar8;
      uVar11 = ((uVar21 & 0xf) * (uVar15 >> 0x17) >> 4) << 0xb |
               (((uVar21 & 0xff) >> 4) * (uVar13 >> 0x16) >> 4) << 5 |
               ((uVar21 & 0xfff) >> 8) * (uVar11 >> 0x17) >> 4;
      *puVar4 = (ushort)(((uVar11 ^ *puVar4) & 0x820 ^ *puVar4 + uVar11) >> 1);
      puVar4 = puVar4 + 1;
    } while (-1 < iVar19);
    return;
  }
  if ((uVar21 & 0xffff) >> 0xb == 0x1f) {
    if (iVar3 == 0) {
      do {
        uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
        while( true ) {
          uVar11 = (uint)uVar1;
          uVar5 = uVar5 + iVar8;
          uVar6 = uVar6 + iVar9;
          if (uVar11 == 0) break;
          uVar13 = uVar16 & 0xfffffff;
          uVar15 = uVar14 & 0xfffffff;
          uVar21 = uVar12 & 0xfffffff;
          uVar12 = uVar12 + iVar17;
          iVar19 = iVar19 + -1;
          uVar14 = uVar14 + iVar20;
          uVar16 = uVar16 + iVar18;
          uVar11 = ((uVar21 >> 0x17) * (uVar11 & 0xf) >> 4) << 0xb |
                   (((uVar11 & 0xff) >> 4) * (uVar15 >> 0x16) >> 4) << 5 |
                   ((uVar11 & 0xfff) >> 8) * (uVar13 >> 0x17) >> 4;
          *puVar4 = (ushort)(((uVar11 ^ *puVar4) & 0x820 ^ *puVar4 + uVar11) >> 1);
          if (iVar19 < 0) {
            return;
          }
          uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
          puVar4 = puVar4 + 1;
        }
        iVar19 = iVar19 + -1;
        uVar12 = uVar12 + iVar17;
        puVar4 = puVar4 + 1;
        uVar14 = uVar14 + iVar20;
        uVar16 = uVar16 + iVar18;
      } while (-1 < iVar19);
      return;
    }
  }
  else if (iVar3 == 0) {
    if ((uVar21 & 0xffff) >> 0xb == 0) {
      return;
    }
    if (iVar18 != 0 || (iVar17 != 0 || iVar20 != 0)) {
      do {
        uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
        while( true ) {
          uVar11 = (uint)uVar1;
          uVar5 = uVar5 + iVar8;
          uVar6 = uVar6 + iVar9;
          if (uVar11 == 0) break;
          uVar13 = uVar16 & 0xfffffff;
          uVar15 = uVar14 & 0xfffffff;
          uVar21 = uVar12 & 0xfffffff;
          uVar12 = uVar12 + iVar17;
          iVar19 = iVar19 + -1;
          uVar14 = uVar14 + iVar20;
          uVar16 = uVar16 + iVar18;
          uVar11 = ((uVar11 & 0xf) * (uVar21 >> 0x17) >> 4) << 0xb |
                   (((uVar11 & 0xff) >> 4) * (uVar15 >> 0x16) >> 4) << 5 |
                   ((uVar11 & 0xfff) >> 8) * (uVar13 >> 0x17) >> 4;
          *puVar4 = (ushort)(((uVar11 ^ *puVar4) & 0x820 ^ *puVar4 + uVar11) >> 1);
          if (iVar19 < 0) {
            return;
          }
          uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
          puVar4 = puVar4 + 1;
        }
        iVar19 = iVar19 + -1;
        uVar12 = uVar12 + iVar17;
        puVar4 = puVar4 + 1;
        uVar14 = uVar14 + iVar20;
        uVar16 = uVar16 + iVar18;
      } while (-1 < iVar19);
      return;
    }
    do {
      uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
      while( true ) {
        uVar12 = (uint)uVar1;
        uVar5 = uVar5 + iVar8;
        uVar6 = uVar6 + iVar9;
        if (uVar12 == 0) break;
        uVar12 = (((uVar11 & 0xffff) >> 0xb) * (uVar12 & 0xf) >> 4) << 0xb |
                 (((uVar13 & 0xffff) >> 10) * ((uVar12 & 0xff) >> 4) >> 4) << 5 |
                 ((uVar15 & 0xffff) >> 0xb) * ((uVar12 & 0xfff) >> 8) >> 4;
        iVar19 = iVar19 + -1;
        *puVar4 = (ushort)(((uVar12 ^ *puVar4) & 0x820 ^ *puVar4 + uVar12) >> 1);
        if (iVar19 < 0) {
          return;
        }
        uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
        puVar4 = puVar4 + 1;
      }
      iVar19 = iVar19 + -1;
      puVar4 = puVar4 + 1;
    } while (-1 < iVar19);
    return;
  }
  if (iVar18 != 0 || (iVar17 != 0 || iVar20 != 0)) {
    do {
      uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
      while( true ) {
        uVar11 = (uint)uVar1;
        uVar5 = uVar5 + iVar8;
        uVar6 = uVar6 + iVar9;
        if (uVar11 == 0) break;
        uVar13 = uVar16 & 0xfffffff;
        uVar15 = uVar14 & 0xfffffff;
        uVar21 = uVar12 & 0xfffffff;
        uVar12 = uVar12 + iVar17;
        iVar19 = iVar19 + -1;
        uVar14 = uVar14 + iVar20;
        uVar16 = uVar16 + iVar18;
        uVar11 = ((uVar11 & 0xf) * (uVar21 >> 0x17) >> 4) << 0xb |
                 (((uVar11 & 0xff) >> 4) * (uVar15 >> 0x16) >> 4) << 5 |
                 ((uVar11 & 0xfff) >> 8) * (uVar13 >> 0x17) >> 4;
        *puVar4 = (ushort)(((uVar11 ^ *puVar4) & 0x820 ^ *puVar4 + uVar11) >> 1);
        if (iVar19 < 0) {
          return;
        }
        uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
        puVar4 = puVar4 + 1;
      }
      iVar19 = iVar19 + -1;
      uVar12 = uVar12 + iVar17;
      puVar4 = puVar4 + 1;
      uVar14 = uVar14 + iVar20;
      uVar16 = uVar16 + iVar18;
    } while (-1 < iVar19);
    return;
  }
  do {
    uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
    while( true ) {
      uVar12 = (uint)uVar1;
      uVar5 = uVar5 + iVar8;
      uVar6 = uVar6 + iVar9;
      if (uVar12 == 0) break;
      uVar12 = (((uVar11 & 0xffff) >> 0xb) * (uVar12 & 0xf) >> 4) << 0xb |
               (((uVar13 & 0xffff) >> 10) * ((uVar12 & 0xff) >> 4) >> 4) << 5 |
               ((uVar15 & 0xffff) >> 0xb) * ((uVar12 & 0xfff) >> 8) >> 4;
      iVar19 = iVar19 + -1;
      *puVar4 = (ushort)(((uVar12 ^ *puVar4) & 0x820 ^ *puVar4 + uVar12) >> 1);
      if (iVar19 < 0) {
        return;
      }
      uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
      puVar4 = puVar4 + 1;
    }
    iVar19 = iVar19 + -1;
    puVar4 = puVar4 + 1;
  } while (-1 < iVar19);
  return;
}



// Address: 4a016df8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a016df8(int *param_1)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
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
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  
  iVar13 = *(int *)PTR_LAB_4a0176dc;
  iVar18 = *param_1 + -1;
  puVar2 = (ushort *)param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  iVar14 = param_1[4];
  iVar15 = param_1[5];
  uVar5 = param_1[6];
  iVar6 = param_1[7];
  uVar7 = param_1[9];
  uVar9 = param_1[0xb];
  uVar11 = param_1[0xd];
  iVar16 = param_1[10];
  iVar19 = param_1[0xc];
  iVar17 = param_1[0xe];
  uVar20 = param_1[0xf];
  iVar1 = param_1[0x10];
  uVar8 = (uVar7 & 0xfff0ffff) << 0xc;
  uVar10 = (uVar9 & 0xfff0ffff) << 0xc;
  uVar12 = (uVar11 & 0xfff0ffff) << 0xc;
  if (*(int *)(PTR_LAB_4a0176dc + 0x5c) != 0) {
    if ((uVar20 & 0xffff) >> 0xb == 0x1f && iVar1 == 0) {
      do {
        uVar7 = uVar12 >> 0x17;
        uVar20 = *(uint *)(iVar6 + (uVar5 & uVar4 >> 0xe | (uVar3 & uVar5) >> 0x14) * 4);
        uVar9 = uVar8 >> 0x17;
        uVar11 = uVar10 >> 0x17;
        uVar8 = uVar8 + iVar16;
        uVar10 = uVar10 + iVar19;
        uVar12 = uVar12 + iVar17;
        uVar21 = (uVar20 & 0xffff) >> 0xb | (uVar20 & 0xf8) << 2;
        iVar18 = iVar18 + -1;
        uVar4 = uVar4 + iVar15;
        uVar3 = uVar3 + iVar14;
        uVar7 = *(ushort *)(iVar13 + uVar11 * 0x800 + uVar21 * 2) & 0xffffffe0 |
                *(ushort *)(iVar13 + uVar7 * 0x800 + uVar21 * 2) & 0x1f |
                (uint)*(ushort *)
                       (iVar13 + (uVar9 * 0x20 + 0x8000) * 2 + ((uVar20 & 0xffffff) >> 0x13) * 2);
        *puVar2 = (ushort)(((uVar7 ^ *puVar2) & 0x820 ^ *puVar2 + uVar7) >> 1);
        puVar2 = puVar2 + 1;
      } while (-1 < iVar18);
      return;
    }
    do {
      uVar7 = uVar12 >> 0x17;
      uVar20 = *(uint *)(iVar6 + (uVar5 & uVar4 >> 0xe | (uVar3 & uVar5) >> 0x14) * 4);
      uVar9 = uVar8 >> 0x17;
      uVar11 = uVar10 >> 0x17;
      uVar8 = uVar8 + iVar16;
      uVar10 = uVar10 + iVar19;
      uVar12 = uVar12 + iVar17;
      uVar21 = (uVar20 & 0xffff) >> 0xb | (uVar20 & 0xf8) << 2;
      iVar18 = iVar18 + -1;
      uVar4 = uVar4 + iVar15;
      uVar3 = uVar3 + iVar14;
      uVar7 = *(ushort *)(iVar13 + uVar11 * 0x800 + uVar21 * 2) & 0xffffffe0 |
              *(ushort *)(iVar13 + uVar7 * 0x800 + uVar21 * 2) & 0x1f |
              (uint)*(ushort *)
                     (iVar13 + (uVar9 * 0x20 + 0x8000) * 2 + ((uVar20 & 0xffffff) >> 0x13) * 2);
      *puVar2 = (ushort)(((uVar7 ^ *puVar2) & 0x820 ^ *puVar2 + uVar7) >> 1);
      puVar2 = puVar2 + 1;
    } while (-1 < iVar18);
    return;
  }
  if ((uVar20 & 0xffff) >> 0xb == 0x1f) {
    if (iVar1 == 0) {
      do {
        uVar7 = *(uint *)(iVar6 + (uVar5 & uVar4 >> 0xe | (uVar3 & uVar5) >> 0x14) * 4);
        while( true ) {
          uVar3 = uVar3 + iVar14;
          uVar4 = uVar4 + iVar15;
          if (uVar7 == 0) break;
          uVar9 = uVar8 >> 0x17;
          uVar11 = uVar10 >> 0x17;
          uVar20 = uVar12 >> 0x17;
          uVar8 = uVar8 + iVar16;
          uVar10 = uVar10 + iVar19;
          iVar18 = iVar18 + -1;
          uVar12 = uVar12 + iVar17;
          uVar21 = (uVar7 & 0xffff) >> 0xb | (uVar7 & 0xf8) << 2;
          uVar7 = (uint)*(ushort *)
                         (iVar13 + (uVar9 * 0x20 + 0x8000) * 2 + ((uVar7 & 0xffffff) >> 0x13) * 2) |
                  *(ushort *)(iVar13 + uVar20 * 0x800 + uVar21 * 2) & 0x1f |
                  *(ushort *)(iVar13 + uVar11 * 0x800 + uVar21 * 2) & 0xffffffe0;
          *puVar2 = (ushort)(((uVar7 ^ *puVar2) & 0x820 ^ *puVar2 + uVar7) >> 1);
          if (iVar18 < 0) {
            return;
          }
          uVar7 = *(uint *)(iVar6 + (uVar5 & uVar4 >> 0xe | (uVar3 & uVar5) >> 0x14) * 4);
          puVar2 = puVar2 + 1;
        }
        iVar18 = iVar18 + -1;
        uVar8 = uVar8 + iVar16;
        puVar2 = puVar2 + 1;
        uVar10 = uVar10 + iVar19;
        uVar12 = uVar12 + iVar17;
        if (iVar18 < 0) {
          return;
        }
      } while( true );
    }
  }
  else if (iVar1 == 0) {
    if ((uVar20 & 0xffff) >> 0xb == 0) {
      return;
    }
    if (iVar17 != 0 || (iVar19 != 0 || iVar16 != 0)) {
      do {
        uVar7 = *(uint *)(iVar6 + (uVar5 & uVar4 >> 0xe | (uVar3 & uVar5) >> 0x14) * 4);
        while( true ) {
          uVar3 = uVar3 + iVar14;
          uVar4 = uVar4 + iVar15;
          if (uVar7 == 0) break;
          uVar9 = uVar8 >> 0x17;
          uVar11 = uVar10 >> 0x17;
          uVar20 = uVar12 >> 0x17;
          uVar8 = uVar8 + iVar16;
          uVar10 = uVar10 + iVar19;
          iVar18 = iVar18 + -1;
          uVar12 = uVar12 + iVar17;
          uVar21 = (uVar7 & 0xffff) >> 0xb | (uVar7 & 0xf8) << 2;
          uVar7 = (uint)*(ushort *)
                         (iVar13 + (uVar9 * 0x20 + 0x8000) * 2 + ((uVar7 & 0xffffff) >> 0x13) * 2) |
                  *(ushort *)(iVar13 + uVar20 * 0x800 + uVar21 * 2) & 0x1f |
                  *(ushort *)(iVar13 + uVar11 * 0x800 + uVar21 * 2) & 0xffffffe0;
          *puVar2 = (ushort)(((uVar7 ^ *puVar2) & 0x820 ^ *puVar2 + uVar7) >> 1);
          if (iVar18 < 0) {
            return;
          }
          uVar7 = *(uint *)(iVar6 + (uVar5 & uVar4 >> 0xe | (uVar3 & uVar5) >> 0x14) * 4);
          puVar2 = puVar2 + 1;
        }
        iVar18 = iVar18 + -1;
        uVar8 = uVar8 + iVar16;
        puVar2 = puVar2 + 1;
        uVar10 = uVar10 + iVar19;
        uVar12 = uVar12 + iVar17;
        if (iVar18 < 0) {
          return;
        }
      } while( true );
    }
    do {
      uVar8 = *(uint *)(iVar6 + (uVar5 & uVar4 >> 0xe | (uVar3 & uVar5) >> 0x14) * 4);
      while( true ) {
        uVar3 = uVar3 + iVar14;
        uVar4 = uVar4 + iVar15;
        if (uVar8 == 0) break;
        uVar10 = (uVar8 & 0xffff) >> 0xb | (uVar8 & 0xf8) << 2;
        uVar8 = *(ushort *)(iVar13 + (uVar9 & 0xf800) + uVar10 * 2) & 0xffffffe0 |
                *(ushort *)(iVar13 + (uVar11 & 0xf800) + uVar10 * 2) & 0x1f |
                (uint)*(ushort *)
                       (iVar13 + (((uVar7 & 0xffff) >> 0xb) * 0x20 + 0x8000) * 2 +
                       ((uVar8 & 0xffffff) >> 0x13) * 2);
        iVar18 = iVar18 + -1;
        *puVar2 = (ushort)(((uVar8 ^ *puVar2) & 0x820 ^ *puVar2 + uVar8) >> 1);
        if (iVar18 < 0) {
          return;
        }
        uVar8 = *(uint *)(iVar6 + (uVar5 & uVar4 >> 0xe | (uVar3 & uVar5) >> 0x14) * 4);
        puVar2 = puVar2 + 1;
      }
      iVar18 = iVar18 + -1;
      puVar2 = puVar2 + 1;
      if (iVar18 < 0) {
        return;
      }
    } while( true );
  }
  if (iVar17 != 0 || (iVar19 != 0 || iVar16 != 0)) {
    do {
      uVar7 = *(uint *)(iVar6 + (uVar5 & uVar4 >> 0xe | (uVar3 & uVar5) >> 0x14) * 4);
      while( true ) {
        uVar3 = uVar3 + iVar14;
        uVar4 = uVar4 + iVar15;
        if (uVar7 == 0) break;
        uVar9 = uVar8 >> 0x17;
        uVar11 = uVar12 >> 0x17;
        uVar20 = uVar10 >> 0x17;
        iVar18 = iVar18 + -1;
        uVar8 = uVar8 + iVar16;
        uVar10 = uVar10 + iVar19;
        uVar12 = uVar12 + iVar17;
        uVar21 = (uVar7 & 0xffff) >> 0xb | (uVar7 & 0xf8) << 2;
        uVar7 = (uint)*(ushort *)
                       (iVar13 + (uVar9 * 0x20 + 0x8000) * 2 + ((uVar7 & 0xffffff) >> 0x13) * 2) |
                *(ushort *)(iVar13 + uVar11 * 0x800 + uVar21 * 2) & 0x1f |
                *(ushort *)(iVar13 + uVar20 * 0x800 + uVar21 * 2) & 0xffffffe0;
        *puVar2 = (ushort)(((uVar7 ^ *puVar2) & 0x820 ^ *puVar2 + uVar7) >> 1);
        if (iVar18 < 0) {
          return;
        }
        uVar7 = *(uint *)(iVar6 + (uVar5 & uVar4 >> 0xe | (uVar3 & uVar5) >> 0x14) * 4);
        puVar2 = puVar2 + 1;
      }
      iVar18 = iVar18 + -1;
      uVar8 = uVar8 + iVar16;
      puVar2 = puVar2 + 1;
      uVar10 = uVar10 + iVar19;
      uVar12 = uVar12 + iVar17;
      if (iVar18 < 0) {
        return;
      }
    } while( true );
  }
  do {
    uVar8 = *(uint *)(iVar6 + (uVar5 & uVar4 >> 0xe | (uVar3 & uVar5) >> 0x14) * 4);
    while( true ) {
      uVar3 = uVar3 + iVar14;
      uVar4 = uVar4 + iVar15;
      if (uVar8 == 0) break;
      uVar10 = (uVar8 & 0xffff) >> 0xb | (uVar8 & 0xf8) << 2;
      uVar8 = *(ushort *)(iVar13 + (uVar9 & 0xf800) + uVar10 * 2) & 0xffffffe0 |
              *(ushort *)(iVar13 + (uVar11 & 0xf800) + uVar10 * 2) & 0x1f |
              (uint)*(ushort *)
                     (iVar13 + (((uVar7 & 0xffff) >> 0xb) * 0x20 + 0x8000) * 2 +
                     ((uVar8 & 0xffffff) >> 0x13) * 2);
      iVar18 = iVar18 + -1;
      *puVar2 = (ushort)(((uVar8 ^ *puVar2) & 0x820 ^ *puVar2 + uVar8) >> 1);
      if (iVar18 < 0) {
        return;
      }
      uVar8 = *(uint *)(iVar6 + (uVar5 & uVar4 >> 0xe | (uVar3 & uVar5) >> 0x14) * 4);
      puVar2 = puVar2 + 1;
    }
    iVar18 = iVar18 + -1;
    puVar2 = puVar2 + 1;
    if (iVar18 < 0) {
      return;
    }
  } while( true );
}



// Address: 4a017804

void FUN_4a017804(int *param_1)

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
  
  uVar5 = DAT_4a017bb4;
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
    if (((uint)puVar7 & 3) == 0) goto LAB_4a017afc;
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
LAB_4a017afc:
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
    if (((uint)puVar7 & 3) == 0) goto LAB_4a0178c4;
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
LAB_4a0178c4:
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
  if (((uint)puVar7 & 3) == 0) goto LAB_4a0179dc;
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
LAB_4a0179dc:
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



// Address: 4a017bb8

void FUN_4a017bb8(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  
  uVar3 = DAT_4a017f08;
  puVar5 = (uint *)param_1[1];
  uVar9 = param_1[2];
  uVar11 = param_1[3];
  iVar16 = param_1[7];
  iVar10 = param_1[4];
  iVar15 = param_1[5];
  uVar18 = param_1[6];
  iVar7 = *param_1 + -1;
  iVar4 = param_1[8] + ((param_1[9] & 0xf800000U) >> 0xe);
  if (iVar15 == 0) {
    iVar16 = (uVar18 & uVar11 >> 0xc) + iVar16;
    if ((~param_1[9] & 0xf800000U) == 0) {
      iVar15 = iVar7;
      if (((uint)puVar5 & 3) == 0) goto LAB_4a017d60;
      do {
        do {
          uVar11 = (uint)*(ushort *)
                          (iVar4 + (uint)*(byte *)(iVar16 + ((uVar9 & uVar18) >> 0x14)) * 2);
          iVar15 = iVar7 + -1;
          uVar13 = (ushort)*puVar5 + uVar11;
          uVar12 = (uVar11 ^ uVar13 ^ (uint)(ushort)*puVar5) & 0x10820;
          uVar11 = uVar12 >> 5;
          uVar2 = (ushort)uVar12;
          uVar1 = uVar2 - ((short)uVar11 - (short)((uVar11 & 0x40) >> 1));
          uVar9 = uVar9 + iVar10;
          *(ushort *)puVar5 = ((ushort)uVar13 | uVar1) - (uVar2 & ~uVar1);
          puVar5 = (uint *)((int)puVar5 + 2);
          if (iVar15 < 0) {
            return;
          }
LAB_4a017d60:
          iVar7 = 0;
          puVar6 = puVar5;
        } while (iVar15 == 0);
        do {
          uVar12 = uVar9 & uVar18;
          uVar11 = uVar9 + iVar10;
          iVar15 = iVar15 + -2;
          uVar9 = uVar11 + iVar10;
          uVar11 = CONCAT22(*(undefined2 *)
                             (iVar4 + (uint)*(byte *)(iVar16 + ((uVar11 & uVar18) >> 0x14)) * 2),
                            *(undefined2 *)(iVar4 + (uint)*(byte *)(iVar16 + (uVar12 >> 0x14)) * 2))
          ;
          uVar13 = *puVar6;
          uVar14 = (uVar11 ^ uVar13 ^ uVar11 + uVar13) & uVar3;
          uVar12 = (uVar14 >> 5) - (((uVar3 ^ uVar3 >> 5) & uVar14 >> 5) >> 1);
          if (CARRY4(uVar11,uVar13)) {
            uVar12 = uVar12 | 0x8000000;
          }
          *puVar6 = uVar14;
          puVar5 = puVar6 + 1;
          *puVar6 = (uVar14 - uVar12 | uVar11 + uVar13) - (uVar14 & ~(uVar14 - uVar12));
          puVar6 = puVar5;
        } while (0 < iVar15);
        iVar7 = 0;
      } while (iVar15 == 0);
      return;
    }
    iVar15 = iVar7;
    if (((uint)puVar5 & 3) == 0) goto LAB_4a017c6c;
    do {
      do {
        uVar11 = (uint)*(ushort *)(iVar4 + (uint)*(byte *)(iVar16 + ((uVar9 & uVar18) >> 0x14)) * 2)
        ;
        iVar15 = iVar7 + -1;
        uVar13 = (ushort)*puVar5 + uVar11;
        uVar12 = (uVar11 ^ uVar13 ^ (uint)(ushort)*puVar5) & 0x10820;
        uVar11 = uVar12 >> 5;
        uVar2 = (ushort)uVar12;
        uVar1 = uVar2 - ((short)uVar11 - (short)((uVar11 & 0x40) >> 1));
        uVar9 = uVar9 + iVar10;
        *(ushort *)puVar5 = ((ushort)uVar13 | uVar1) - (uVar2 & ~uVar1);
        puVar5 = (uint *)((int)puVar5 + 2);
        if (iVar15 < 0) {
          return;
        }
LAB_4a017c6c:
        iVar7 = 0;
        puVar6 = puVar5;
      } while (iVar15 == 0);
      do {
        uVar12 = uVar9 & uVar18;
        uVar11 = uVar9 + iVar10;
        iVar15 = iVar15 + -2;
        uVar9 = uVar11 + iVar10;
        uVar11 = CONCAT22(*(undefined2 *)
                           (iVar4 + (uint)*(byte *)(iVar16 + ((uVar11 & uVar18) >> 0x14)) * 2),
                          *(undefined2 *)(iVar4 + (uint)*(byte *)(iVar16 + (uVar12 >> 0x14)) * 2));
        uVar13 = *puVar6;
        uVar14 = (uVar11 ^ uVar13 ^ uVar11 + uVar13) & uVar3;
        uVar12 = (uVar14 >> 5) - (((uVar3 ^ uVar3 >> 5) & uVar14 >> 5) >> 1);
        if (CARRY4(uVar11,uVar13)) {
          uVar12 = uVar12 | 0x8000000;
        }
        *puVar6 = uVar14;
        puVar5 = puVar6 + 1;
        *puVar6 = (uVar14 - uVar12 | uVar11 + uVar13) - (uVar14 & ~(uVar14 - uVar12));
        puVar6 = puVar5;
      } while (0 < iVar15);
      iVar7 = 0;
    } while (iVar15 == 0);
    return;
  }
  iVar8 = iVar7;
  if (((uint)puVar5 & 3) == 0) goto LAB_4a017e60;
  do {
    do {
      uVar12 = (uint)*(ushort *)
                      (iVar4 + (uint)*(byte *)(iVar16 + (uVar18 & uVar11 >> 0xc |
                                                        (uVar9 & uVar18) >> 0x14)) * 2);
      iVar8 = iVar7 + -1;
      uVar13 = (ushort)*puVar5 + uVar12;
      uVar14 = (uVar12 ^ uVar13 ^ (uint)(ushort)*puVar5) & 0x10820;
      uVar12 = uVar14 >> 5;
      uVar2 = (ushort)uVar14;
      uVar1 = uVar2 - ((short)uVar12 - (short)((uVar12 & 0x40) >> 1));
      uVar11 = uVar11 + iVar15;
      uVar9 = uVar9 + iVar10;
      *(ushort *)puVar5 = ((ushort)uVar13 | uVar1) - (uVar2 & ~uVar1);
      puVar5 = (uint *)((int)puVar5 + 2);
      if (iVar8 < 0) {
        return;
      }
LAB_4a017e60:
      iVar7 = 0;
      puVar6 = puVar5;
    } while (iVar8 == 0);
    do {
      uVar12 = uVar11 >> 0xc;
      uVar13 = uVar11 + iVar15;
      uVar14 = *puVar6;
      iVar8 = iVar8 + -2;
      uVar11 = uVar13 + iVar15;
      uVar12 = CONCAT22(*(undefined2 *)
                         (iVar4 + (uint)*(byte *)(iVar16 + (uVar18 & uVar13 >> 0xc |
                                                           (uVar9 + iVar10 & uVar18) >> 0x14)) * 2),
                        *(undefined2 *)
                         (iVar4 + (uint)*(byte *)(iVar16 + (uVar18 & uVar12 |
                                                           (uVar9 & uVar18) >> 0x14)) * 2));
      uVar13 = (uVar12 ^ uVar14 ^ uVar12 + uVar14) & uVar3;
      uVar17 = (uVar13 >> 5) - (((uVar3 ^ uVar3 >> 5) & uVar13 >> 5) >> 1);
      if (CARRY4(uVar12,uVar14)) {
        uVar17 = uVar17 | 0x8000000;
      }
      *puVar6 = uVar13;
      uVar9 = uVar9 + iVar10 + iVar10;
      puVar5 = puVar6 + 1;
      *puVar6 = (uVar12 + uVar14 | uVar13 - uVar17) - (uVar13 & ~(uVar13 - uVar17));
      puVar6 = puVar5;
    } while (0 < iVar8);
    iVar7 = 0;
  } while (iVar8 == 0);
  return;
}



// Address: 4a017f0c

void FUN_4a017f0c(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  
  uVar3 = DAT_4a018348;
  puVar5 = (uint *)param_1[1];
  uVar9 = param_1[2];
  uVar11 = param_1[3];
  iVar10 = param_1[4];
  iVar15 = param_1[5];
  uVar18 = param_1[6];
  iVar16 = param_1[7];
  iVar7 = *param_1 + -1;
  iVar4 = *(int *)PTR_LAB_4a018344 + ((param_1[9] & 0xf800000U) >> 0xc);
  if (iVar15 == 0) {
    iVar16 = iVar16 + (uVar18 & uVar11 >> 0xd) * 2;
    if ((~param_1[9] & 0xf800000U) == 0) {
      iVar4 = iVar7;
      if (((uint)puVar5 & 3) == 0) goto LAB_4a018124;
      do {
        do {
          uVar2 = *(ushort *)(iVar16 + ((uVar9 & uVar18) >> 0x14) * 2);
          uVar11 = (uint)(uVar2 >> 10) | (uVar2 & 0x3e0) << 1 | (uVar2 & 0x1f) << 0xb;
          uVar13 = (ushort)*puVar5 + uVar11;
          uVar12 = (uVar11 ^ uVar13 ^ (uint)(ushort)*puVar5) & 0x10820;
          uVar11 = uVar12 >> 5;
          uVar1 = (ushort)uVar12;
          uVar2 = uVar1 - ((short)uVar11 - (short)((uVar11 & 0x40) >> 1));
          iVar4 = iVar7 + -1;
          uVar9 = uVar9 + iVar10;
          *(ushort *)puVar5 = ((ushort)uVar13 | uVar2) - (uVar1 & ~uVar2);
          puVar5 = (uint *)((int)puVar5 + 2);
          if (iVar4 < 0) {
            return;
          }
LAB_4a018124:
          iVar7 = 0;
          puVar6 = puVar5;
        } while (iVar4 == 0);
        do {
          uVar2 = *(ushort *)(iVar16 + ((uVar9 & uVar18) >> 0x14) * 2);
          iVar4 = iVar4 + -2;
          uVar1 = *(ushort *)(iVar16 + ((uVar9 + iVar10 & uVar18) >> 0x14) * 2);
          uVar9 = uVar9 + iVar10 + iVar10;
          uVar11 = (uint)(uVar2 >> 10) | (uVar2 & 0x3e0) << 1 | (uVar2 & 0x1f) << 0xb |
                   ((uint)(uVar1 >> 10) | (uVar1 & 0x3e0) << 1 | (uint)uVar1 << 0xb) << 0x10;
          uVar13 = *puVar6;
          uVar14 = (uVar11 ^ uVar13 ^ uVar11 + uVar13) & uVar3;
          uVar12 = (uVar14 >> 5) - (((uVar3 ^ uVar3 >> 5) & uVar14 >> 5) >> 1);
          if (CARRY4(uVar11,uVar13)) {
            uVar12 = uVar12 | 0x8000000;
          }
          *puVar6 = uVar14;
          puVar5 = puVar6 + 1;
          *puVar6 = (uVar14 - uVar12 | uVar11 + uVar13) - (uVar14 & ~(uVar14 - uVar12));
          puVar6 = puVar5;
        } while (0 < iVar4);
        iVar7 = 0;
      } while (iVar4 == 0);
      return;
    }
    iVar15 = iVar7;
    if (((uint)puVar5 & 3) == 0) goto LAB_4a017fdc;
    do {
      do {
        uVar11 = (uint)*(ushort *)(iVar16 + ((uVar9 & uVar18) >> 0x14) * 2);
        iVar15 = iVar7 + -1;
        uVar11 = (uint)*(ushort *)(iVar4 + ((uVar11 & 0xffff7fff) >> 5) * 2) |
                 (uint)*(ushort *)(iVar4 + (uVar11 & 0x1f) * 0x40) << 0xb;
        uVar13 = (ushort)*puVar5 + uVar11;
        uVar12 = (uVar11 ^ uVar13 ^ (uint)(ushort)*puVar5) & 0x10820;
        uVar11 = uVar12 >> 5;
        uVar1 = (ushort)uVar12;
        uVar2 = uVar1 - ((short)uVar11 - (short)((uVar11 & 0x40) >> 1));
        uVar9 = uVar9 + iVar10;
        *(ushort *)puVar5 = ((ushort)uVar13 | uVar2) - (uVar1 & ~uVar2);
        puVar5 = (uint *)((int)puVar5 + 2);
        if (iVar15 < 0) {
          return;
        }
LAB_4a017fdc:
        iVar7 = 0;
        puVar6 = puVar5;
      } while (iVar15 == 0);
      do {
        uVar11 = (uint)*(ushort *)(iVar16 + ((uVar9 & uVar18) >> 0x14) * 2);
        iVar15 = iVar15 + -2;
        uVar12 = (uint)*(ushort *)(iVar16 + ((uVar9 + iVar10 & uVar18) >> 0x14) * 2);
        uVar9 = uVar9 + iVar10 + iVar10;
        uVar11 = (uint)*(ushort *)(iVar4 + ((uVar11 & 0xffff7fff) >> 5) * 2) |
                 (uint)*(ushort *)(iVar4 + (uVar11 & 0x1f) * 0x40) << 0xb |
                 ((uint)*(ushort *)(iVar4 + ((uVar12 & 0xffff7fff) >> 5) * 2) |
                 (uint)*(ushort *)(iVar4 + (uVar12 & 0x1f) * 0x40) << 0xb) << 0x10;
        uVar13 = *puVar6;
        uVar14 = (uVar11 ^ uVar13 ^ uVar11 + uVar13) & uVar3;
        uVar12 = (uVar14 >> 5) - (((uVar3 ^ uVar3 >> 5) & uVar14 >> 5) >> 1);
        if (CARRY4(uVar11,uVar13)) {
          uVar12 = uVar12 | 0x8000000;
        }
        *puVar6 = uVar14;
        puVar5 = puVar6 + 1;
        *puVar6 = (uVar14 - uVar12 | uVar11 + uVar13) - (uVar14 & ~(uVar14 - uVar12));
        puVar6 = puVar5;
      } while (0 < iVar15);
      iVar7 = 0;
    } while (iVar15 == 0);
    return;
  }
  iVar8 = iVar7;
  if (((uint)puVar5 & 3) == 0) goto LAB_4a018264;
  do {
    do {
      uVar12 = (uint)*(ushort *)(iVar16 + (uVar18 & uVar11 >> 0xd | (uVar9 & uVar18) >> 0x14) * 2);
      iVar8 = iVar7 + -1;
      uVar12 = (uint)*(ushort *)(iVar4 + ((uVar12 & 0xffff7fff) >> 5) * 2) |
               (uint)*(ushort *)(iVar4 + (uVar12 & 0x1f) * 0x40) << 0xb;
      uVar13 = (ushort)*puVar5 + uVar12;
      uVar14 = (uVar12 ^ uVar13 ^ (uint)(ushort)*puVar5) & 0x10820;
      uVar12 = uVar14 >> 5;
      uVar1 = (ushort)uVar14;
      uVar2 = uVar1 - ((short)uVar12 - (short)((uVar12 & 0x40) >> 1));
      uVar11 = uVar11 + iVar15;
      uVar9 = uVar9 + iVar10;
      *(ushort *)puVar5 = ((ushort)uVar13 | uVar2) - (uVar1 & ~uVar2);
      puVar5 = (uint *)((int)puVar5 + 2);
      if (iVar8 < 0) {
        return;
      }
LAB_4a018264:
      iVar7 = 0;
      puVar6 = puVar5;
    } while (iVar8 == 0);
    do {
      uVar12 = (uint)*(ushort *)(iVar16 + (uVar18 & uVar11 >> 0xd | (uVar9 & uVar18) >> 0x14) * 2);
      uVar13 = (uint)*(ushort *)
                      (iVar16 + (uVar18 & uVar11 + iVar15 >> 0xd | (uVar9 + iVar10 & uVar18) >> 0x14
                                ) * 2);
      iVar8 = iVar8 + -2;
      uVar11 = uVar11 + iVar15 + iVar15;
      uVar9 = uVar9 + iVar10 + iVar10;
      uVar14 = *puVar6;
      uVar12 = (uint)*(ushort *)(iVar4 + ((uVar12 & 0xffff7fff) >> 5) * 2) |
               (uint)*(ushort *)(iVar4 + (uVar12 & 0x1f) * 0x40) << 0xb |
               ((uint)*(ushort *)(iVar4 + ((uVar13 & 0xffff7fff) >> 5) * 2) |
               (uint)*(ushort *)(iVar4 + (uVar13 & 0x1f) * 0x40) << 0xb) << 0x10;
      uVar13 = (uVar12 ^ uVar14 ^ uVar12 + uVar14) & uVar3;
      uVar17 = (uVar13 >> 5) - (((uVar3 ^ uVar3 >> 5) & uVar13 >> 5) >> 1);
      if (CARRY4(uVar12,uVar14)) {
        uVar17 = uVar17 | 0x8000000;
      }
      *puVar6 = uVar13;
      puVar5 = puVar6 + 1;
      *puVar6 = (uVar12 + uVar14 | uVar13 - uVar17) - (uVar13 & ~(uVar13 - uVar17));
      puVar6 = puVar5;
    } while (0 < iVar8);
    iVar7 = 0;
  } while (iVar8 == 0);
  return;
}



// Address: 4a01834c

void FUN_4a01834c(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  
  uVar3 = DAT_4a018780;
  puVar5 = (uint *)param_1[1];
  uVar9 = param_1[2];
  uVar11 = param_1[3];
  iVar10 = param_1[4];
  iVar15 = param_1[5];
  uVar18 = param_1[6];
  iVar16 = param_1[7];
  iVar7 = *param_1 + -1;
  iVar4 = *(int *)PTR_LAB_4a01877c + ((param_1[9] & 0xf800000U) >> 0xc);
  if (iVar15 == 0) {
    iVar16 = iVar16 + (uVar18 & uVar11 >> 0xd) * 2;
    if ((~param_1[9] & 0xf800000U) == 0) {
      iVar4 = iVar7;
      if (((uint)puVar5 & 3) == 0) goto LAB_4a018568;
      do {
        do {
          uVar11 = (uint)*(ushort *)(iVar16 + ((uVar9 & uVar18) >> 0x14) * 2);
          uVar13 = (ushort)*puVar5 + uVar11;
          uVar12 = (uVar11 ^ uVar13 ^ (uint)(ushort)*puVar5) & 0x10820;
          uVar11 = uVar12 >> 5;
          uVar2 = (ushort)uVar12;
          uVar1 = uVar2 - ((short)uVar11 - (short)((uVar11 & 0x40) >> 1));
          iVar4 = iVar7 + -1;
          uVar9 = uVar9 + iVar10;
          *(ushort *)puVar5 = ((ushort)uVar13 | uVar1) - (uVar2 & ~uVar1);
          puVar5 = (uint *)((int)puVar5 + 2);
          if (iVar4 < 0) {
            return;
          }
LAB_4a018568:
          iVar7 = 0;
          puVar6 = puVar5;
        } while (iVar4 == 0);
        do {
          uVar11 = uVar9 & uVar18;
          uVar12 = uVar9 + iVar10;
          uVar9 = uVar12 + iVar10;
          iVar4 = iVar4 + -2;
          uVar11 = CONCAT22(*(undefined2 *)(iVar16 + ((uVar12 & uVar18) >> 0x14) * 2),
                            *(undefined2 *)(iVar16 + (uVar11 >> 0x14) * 2));
          uVar13 = *puVar6;
          uVar14 = (uVar11 ^ uVar13 ^ uVar11 + uVar13) & uVar3;
          uVar12 = (uVar14 >> 5) - (((uVar3 ^ uVar3 >> 5) & uVar14 >> 5) >> 1);
          if (CARRY4(uVar11,uVar13)) {
            uVar12 = uVar12 | 0x8000000;
          }
          *puVar6 = uVar14;
          puVar5 = puVar6 + 1;
          *puVar6 = (uVar14 - uVar12 | uVar11 + uVar13) - (uVar14 & ~(uVar14 - uVar12));
          puVar6 = puVar5;
        } while (0 < iVar4);
        iVar7 = 0;
      } while (iVar4 == 0);
      return;
    }
    iVar15 = iVar7;
    if (((uint)puVar5 & 3) == 0) goto LAB_4a018424;
    do {
      do {
        uVar1 = *(ushort *)(iVar16 + ((uVar9 & uVar18) >> 0x14) * 2);
        iVar15 = iVar7 + -1;
        uVar11 = (uint)*(ushort *)(iVar4 + ((uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5) * 2) |
                 (uint)*(ushort *)(iVar4 + (uint)(uVar1 >> 0xb) * 0x40) << 0xb;
        uVar13 = (ushort)*puVar5 + uVar11;
        uVar12 = (uVar11 ^ uVar13 ^ (uint)(ushort)*puVar5) & 0x10820;
        uVar11 = uVar12 >> 5;
        uVar2 = (ushort)uVar12;
        uVar1 = uVar2 - ((short)uVar11 - (short)((uVar11 & 0x40) >> 1));
        uVar9 = uVar9 + iVar10;
        *(ushort *)puVar5 = ((ushort)uVar13 | uVar1) - (uVar2 & ~uVar1);
        puVar5 = (uint *)((int)puVar5 + 2);
        if (iVar15 < 0) {
          return;
        }
LAB_4a018424:
        iVar7 = 0;
        puVar6 = puVar5;
      } while (iVar15 == 0);
      do {
        uVar1 = *(ushort *)(iVar16 + ((uVar9 & uVar18) >> 0x14) * 2);
        iVar15 = iVar15 + -2;
        uVar2 = *(ushort *)(iVar16 + ((uVar9 + iVar10 & uVar18) >> 0x14) * 2);
        uVar9 = uVar9 + iVar10 + iVar10;
        uVar11 = (uint)*(ushort *)(iVar4 + ((uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5) * 2) |
                 (uint)*(ushort *)(iVar4 + (uint)(uVar1 >> 0xb) * 0x40) << 0xb |
                 ((uint)*(ushort *)(iVar4 + ((uVar2 & 0x7ff) >> 6 | (uVar2 & 0x1f) << 5) * 2) |
                 (uint)*(ushort *)(iVar4 + (uint)(uVar2 >> 0xb) * 0x40) << 0xb) << 0x10;
        uVar13 = *puVar6;
        uVar14 = (uVar11 ^ uVar13 ^ uVar11 + uVar13) & uVar3;
        uVar12 = (uVar14 >> 5) - (((uVar3 ^ uVar3 >> 5) & uVar14 >> 5) >> 1);
        if (CARRY4(uVar11,uVar13)) {
          uVar12 = uVar12 | 0x8000000;
        }
        *puVar6 = uVar14;
        puVar5 = puVar6 + 1;
        *puVar6 = (uVar14 - uVar12 | uVar11 + uVar13) - (uVar14 & ~(uVar14 - uVar12));
        puVar6 = puVar5;
      } while (0 < iVar15);
      iVar7 = 0;
    } while (iVar15 == 0);
    return;
  }
  iVar8 = iVar7;
  if (((uint)puVar5 & 3) == 0) goto LAB_4a01868c;
  do {
    do {
      uVar1 = *(ushort *)(iVar16 + (uVar18 & uVar11 >> 0xd | (uVar9 & uVar18) >> 0x14) * 2);
      iVar8 = iVar7 + -1;
      uVar12 = (uint)*(ushort *)(iVar4 + ((uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5) * 2) |
               (uint)*(ushort *)(iVar4 + (uint)(uVar1 >> 0xb) * 0x40) << 0xb;
      uVar13 = (ushort)*puVar5 + uVar12;
      uVar14 = (uVar12 ^ uVar13 ^ (uint)(ushort)*puVar5) & 0x10820;
      uVar12 = uVar14 >> 5;
      uVar2 = (ushort)uVar14;
      uVar1 = uVar2 - ((short)uVar12 - (short)((uVar12 & 0x40) >> 1));
      uVar11 = uVar11 + iVar15;
      uVar9 = uVar9 + iVar10;
      *(ushort *)puVar5 = ((ushort)uVar13 | uVar1) - (uVar2 & ~uVar1);
      puVar5 = (uint *)((int)puVar5 + 2);
      if (iVar8 < 0) {
        return;
      }
LAB_4a01868c:
      iVar7 = 0;
      puVar6 = puVar5;
    } while (iVar8 == 0);
    do {
      uVar1 = *(ushort *)(iVar16 + (uVar18 & uVar11 >> 0xd | (uVar9 & uVar18) >> 0x14) * 2);
      uVar2 = *(ushort *)
               (iVar16 + (uVar18 & uVar11 + iVar15 >> 0xd | (uVar9 + iVar10 & uVar18) >> 0x14) * 2);
      iVar8 = iVar8 + -2;
      uVar11 = uVar11 + iVar15 + iVar15;
      uVar9 = uVar9 + iVar10 + iVar10;
      uVar14 = *puVar6;
      uVar12 = (uint)*(ushort *)(iVar4 + ((uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5) * 2) |
               (uint)*(ushort *)(iVar4 + (uint)(uVar1 >> 0xb) * 0x40) << 0xb |
               ((uint)*(ushort *)(iVar4 + ((uVar2 & 0x7ff) >> 6 | (uVar2 & 0x1f) << 5) * 2) |
               (uint)*(ushort *)(iVar4 + (uint)(uVar2 >> 0xb) * 0x40) << 0xb) << 0x10;
      uVar13 = (uVar12 ^ uVar14 ^ uVar12 + uVar14) & uVar3;
      uVar17 = (uVar13 >> 5) - (((uVar3 ^ uVar3 >> 5) & uVar13 >> 5) >> 1);
      if (CARRY4(uVar12,uVar14)) {
        uVar17 = uVar17 | 0x8000000;
      }
      *puVar6 = uVar13;
      puVar5 = puVar6 + 1;
      *puVar6 = (uVar12 + uVar14 | uVar13 - uVar17) - (uVar13 & ~(uVar13 - uVar17));
      puVar6 = puVar5;
    } while (0 < iVar8);
    iVar7 = 0;
  } while (iVar8 == 0);
  return;
}



// Address: 4a018784

void FUN_4a018784(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  iVar8 = *param_1 + -1;
  puVar5 = (uint *)param_1[1];
  uVar7 = param_1[2];
  uVar12 = param_1[3];
  iVar10 = param_1[4];
  iVar13 = param_1[5];
  uVar19 = param_1[6];
  iVar16 = param_1[7];
  iVar11 = param_1[8];
  iVar4 = *(int *)PTR_LAB_4a018c70 + ((param_1[9] & 0xf800000U) >> 0xc);
  if (iVar13 != 0) {
    iVar9 = iVar8;
    if (((uint)puVar5 & 3) == 0) goto LAB_4a018b64;
    do {
      do {
        bVar1 = *(byte *)(iVar16 + (uVar19 & uVar12 >> 0xc | (uVar7 & uVar19) >> 0x15));
        if ((bool)((byte)((uVar7 & uVar19) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        uVar14 = (uint)*(ushort *)(iVar11 + (bVar1 & 0xf) * 2);
        iVar9 = iVar8 + -1;
        uVar7 = uVar7 + iVar10;
        uVar12 = uVar12 + iVar13;
        uVar14 = (uint)*(ushort *)(iVar4 + ((uVar14 & 0xf00) >> 2 | (uVar14 & 0xf0) >> 3) * 2) |
                 (uint)*(ushort *)(iVar4 + (uVar14 & 0xf) * 0x80) << 0xb;
        uVar17 = (ushort)*puVar5 + uVar14;
        uVar15 = (uVar14 ^ uVar17 ^ (uint)(ushort)*puVar5) & 0x10820;
        uVar14 = uVar15 >> 5;
        uVar3 = (ushort)uVar15;
        uVar2 = uVar3 - ((short)uVar14 - (short)((uVar14 & 0x40) >> 1));
        *(ushort *)puVar5 = ((ushort)uVar17 | uVar2) - (uVar3 & ~uVar2);
        puVar5 = (uint *)((int)puVar5 + 2);
        if (iVar9 < 0) {
          return;
        }
LAB_4a018b64:
        iVar8 = 0;
        puVar6 = puVar5;
      } while (iVar9 == 0);
      do {
        bVar1 = *(byte *)(iVar16 + (uVar19 & uVar12 >> 0xc | (uVar7 & uVar19) >> 0x15));
        if ((bool)((byte)((uVar7 & uVar19) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        uVar17 = (uint)*(ushort *)(iVar11 + (bVar1 & 0xf) * 2);
        uVar14 = uVar7 + iVar10 & uVar19;
        bVar1 = *(byte *)(iVar16 + (uVar19 & uVar12 + iVar13 >> 0xc | uVar14 >> 0x15));
        if ((bool)((byte)(uVar14 >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        uVar14 = (uint)*(ushort *)(iVar11 + (bVar1 & 0xf) * 2);
        iVar9 = iVar9 + -2;
        uVar7 = uVar7 + iVar10 + iVar10;
        uVar15 = *puVar6;
        uVar14 = (uint)*(ushort *)(iVar4 + ((uVar17 & 0xf00) >> 2 | (uVar17 & 0xf0) >> 3) * 2) |
                 (uint)*(ushort *)(iVar4 + (uVar17 & 0xf) * 0x80) << 0xb |
                 ((uint)*(ushort *)(iVar4 + ((uVar14 & 0xf00) >> 2 | (uVar14 & 0xf0) >> 3) * 2) |
                 (uint)*(ushort *)(iVar4 + (uVar14 & 0xf) * 0x80) << 0xb) << 0x10;
        uVar17 = (uVar14 ^ uVar15 ^ uVar14 + uVar15) & DAT_4a018c74;
        uVar18 = (uVar17 >> 5) - (((DAT_4a018c74 ^ DAT_4a018c74 >> 5) & uVar17 >> 5) >> 1);
        if (CARRY4(uVar14,uVar15)) {
          uVar18 = uVar18 | 0x8000000;
        }
        *puVar6 = uVar17;
        uVar12 = uVar12 + iVar13 + iVar13;
        puVar5 = puVar6 + 1;
        *puVar6 = (uVar14 + uVar15 | uVar17 - uVar18) - (uVar17 & ~(uVar17 - uVar18));
        puVar6 = puVar5;
      } while (0 < iVar9);
      iVar8 = 0;
    } while (iVar9 == 0);
    return;
  }
  iVar16 = (uVar19 & uVar12 >> 0xc) + iVar16;
  if ((~param_1[9] & 0xf800000U) != 0) {
    puVar6 = puVar5;
    iVar13 = iVar8;
    if (((uint)puVar5 & 3) == 0) goto LAB_4a018868;
    do {
      do {
        bVar1 = *(byte *)(iVar16 + ((uVar7 & uVar19) >> 0x15));
        if ((uVar7 & 0x100000) != 0) {
          bVar1 = bVar1 >> 4;
        }
        uVar12 = (uint)*(ushort *)(iVar11 + (bVar1 & 0xf) * 2);
        iVar13 = iVar8 + -1;
        uVar7 = uVar7 + iVar10;
        uVar12 = (uint)*(ushort *)(iVar4 + ((uVar12 & 0xf00) >> 2 | (uVar12 & 0xf0) >> 3) * 2) |
                 (uint)*(ushort *)(iVar4 + (uVar12 & 0xf) * 0x80) << 0xb;
        uVar17 = (ushort)*puVar6 + uVar12;
        uVar14 = (uVar12 ^ uVar17 ^ (uint)(ushort)*puVar6) & 0x10820;
        uVar12 = uVar14 >> 5;
        uVar3 = (ushort)uVar14;
        uVar2 = uVar3 - ((short)uVar12 - (short)((uVar12 & 0x40) >> 1));
        puVar5 = (uint *)((int)puVar6 + 2);
        *(ushort *)puVar6 = ((ushort)uVar17 | uVar2) - (uVar3 & ~uVar2);
        if (iVar13 < 0) {
          return;
        }
LAB_4a018868:
        uVar12 = DAT_4a018c74;
        iVar8 = 0;
        puVar6 = puVar5;
      } while (iVar13 == 0);
      do {
        bVar1 = *(byte *)(iVar16 + ((uVar7 & uVar19) >> 0x15));
        uVar14 = uVar7 + iVar10;
        if ((uVar7 & 0x100000) != 0) {
          bVar1 = bVar1 >> 4;
        }
        uVar17 = (uint)*(ushort *)(iVar11 + (bVar1 & 0xf) * 2);
        iVar13 = iVar13 + -2;
        bVar1 = *(byte *)(iVar16 + ((uVar14 & uVar19) >> 0x15));
        if ((uVar14 & 0x100000) != 0) {
          bVar1 = bVar1 >> 4;
        }
        uVar15 = (uint)*(ushort *)(iVar11 + (bVar1 & 0xf) * 2);
        uVar7 = uVar14 + iVar10;
        uVar14 = (uint)*(ushort *)(iVar4 + ((uVar17 & 0xf00) >> 2 | (uVar17 & 0xf0) >> 3) * 2) |
                 (uint)*(ushort *)(iVar4 + (uVar17 & 0xf) * 0x80) << 0xb |
                 ((uint)*(ushort *)(iVar4 + ((uVar15 & 0xf00) >> 2 | (uVar15 & 0xf0) >> 3) * 2) |
                 (uint)*(ushort *)(iVar4 + (uVar15 & 0xf) * 0x80) << 0xb) << 0x10;
        uVar15 = *puVar5;
        uVar18 = (uVar14 ^ uVar15 ^ uVar14 + uVar15) & uVar12;
        uVar17 = (uVar18 >> 5) - (((uVar12 ^ uVar12 >> 5) & uVar18 >> 5) >> 1);
        if (CARRY4(uVar14,uVar15)) {
          uVar17 = uVar17 | 0x8000000;
        }
        *puVar5 = uVar18;
        puVar6 = puVar5 + 1;
        *puVar5 = (uVar18 - uVar17 | uVar14 + uVar15) - (uVar18 & ~(uVar18 - uVar17));
        puVar5 = puVar6;
      } while (0 < iVar13);
      iVar8 = 0;
    } while (iVar13 == 0);
    return;
  }
  puVar6 = puVar5;
  iVar4 = iVar8;
  if (((uint)puVar5 & 3) == 0) goto LAB_4a0189ec;
  do {
    do {
      bVar1 = *(byte *)(iVar16 + ((uVar7 & uVar19) >> 0x15));
      if ((uVar7 & 0x100000) != 0) {
        bVar1 = bVar1 >> 4;
      }
      uVar12 = (uint)*(ushort *)(iVar11 + (bVar1 & 0xf) * 2);
      iVar4 = iVar8 + -1;
      uVar17 = (uint)(ushort)*puVar6 +
               ((uVar12 & 0xf00) >> 7 | (uVar12 & 0xf0) << 3 | (uVar12 & 0xf) << 0xc);
      uVar14 = (uVar17 ^ (ushort)*puVar6) & 0x10820;
      uVar12 = uVar14 >> 5;
      uVar3 = (ushort)uVar14;
      uVar2 = uVar3 - ((short)uVar12 - (short)((uVar12 & 0x40) >> 1));
      uVar7 = uVar7 + iVar10;
      puVar5 = (uint *)((int)puVar6 + 2);
      *(ushort *)puVar6 = ((ushort)uVar17 | uVar2) - (uVar3 & ~uVar2);
      if (iVar4 < 0) {
        return;
      }
LAB_4a0189ec:
      uVar12 = DAT_4a018c74;
      iVar8 = 0;
      puVar6 = puVar5;
    } while (iVar4 == 0);
    do {
      bVar1 = *(byte *)(iVar16 + ((uVar7 & uVar19) >> 0x15));
      uVar14 = uVar7 + iVar10;
      if ((uVar7 & 0x100000) != 0) {
        bVar1 = bVar1 >> 4;
      }
      uVar17 = (uint)*(ushort *)(iVar11 + (bVar1 & 0xf) * 2);
      iVar4 = iVar4 + -2;
      bVar1 = *(byte *)(iVar16 + ((uVar14 & uVar19) >> 0x15));
      uVar7 = uVar14 + iVar10;
      if ((uVar14 & 0x100000) != 0) {
        bVar1 = bVar1 >> 4;
      }
      uVar14 = (uint)*(ushort *)(iVar11 + (bVar1 & 0xf) * 2);
      uVar15 = *puVar5;
      uVar14 = (uVar17 & 0xf00) >> 7 | (uVar17 & 0xf0) << 3 | (uVar17 & 0xf) << 0xc |
               ((uVar14 & 0xf00) >> 7 | (uVar14 & 0xf0) << 3 | uVar14 << 0xc) << 0x10;
      uVar18 = (uVar14 ^ uVar15 ^ uVar14 + uVar15) & uVar12;
      uVar17 = (uVar18 >> 5) - (((uVar12 ^ uVar12 >> 5) & uVar18 >> 5) >> 1);
      if (CARRY4(uVar14,uVar15)) {
        uVar17 = uVar17 | 0x8000000;
      }
      *puVar5 = uVar18;
      puVar6 = puVar5 + 1;
      *puVar5 = (uVar18 - uVar17 | uVar14 + uVar15) - (uVar18 & ~(uVar18 - uVar17));
      puVar5 = puVar6;
    } while (0 < iVar4);
    iVar8 = 0;
  } while (iVar4 == 0);
  return;
}



// Address: 4a018c78

void FUN_4a018c78(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  
  uVar3 = DAT_4a0190f0;
  puVar5 = (uint *)param_1[1];
  uVar9 = param_1[2];
  uVar11 = param_1[3];
  iVar10 = param_1[4];
  iVar15 = param_1[5];
  uVar18 = param_1[6];
  iVar16 = param_1[7];
  iVar7 = *param_1 + -1;
  iVar4 = *(int *)PTR_LAB_4a0190ec + ((param_1[9] & 0xf800000U) >> 0xc);
  if (iVar15 == 0) {
    iVar16 = iVar16 + (uVar18 & uVar11 >> 0xd) * 2;
    if ((~param_1[9] & 0xf800000U) == 0) {
      iVar4 = iVar7;
      if (((uint)puVar5 & 3) == 0) goto LAB_4a018eac;
      do {
        do {
          uVar11 = (uint)*(ushort *)(iVar16 + ((uVar9 & uVar18) >> 0x14) * 2);
          uVar13 = (uint)(ushort)*puVar5 +
                   ((uVar11 & 0xf00) >> 7 | (uVar11 & 0xf0) << 3 | (uVar11 & 0xf) << 0xc);
          uVar12 = (uVar13 ^ (ushort)*puVar5) & 0x10820;
          uVar11 = uVar12 >> 5;
          uVar2 = (ushort)uVar12;
          uVar1 = uVar2 - ((short)uVar11 - (short)((uVar11 & 0x40) >> 1));
          iVar4 = iVar7 + -1;
          uVar9 = uVar9 + iVar10;
          *(ushort *)puVar5 = ((ushort)uVar13 | uVar1) - (uVar2 & ~uVar1);
          puVar5 = (uint *)((int)puVar5 + 2);
          if (iVar4 < 0) {
            return;
          }
LAB_4a018eac:
          iVar7 = 0;
          puVar6 = puVar5;
        } while (iVar4 == 0);
        do {
          uVar11 = (uint)*(ushort *)(iVar16 + ((uVar9 & uVar18) >> 0x14) * 2);
          iVar4 = iVar4 + -2;
          uVar12 = (uint)*(ushort *)(iVar16 + ((uVar9 + iVar10 & uVar18) >> 0x14) * 2);
          uVar9 = uVar9 + iVar10 + iVar10;
          uVar11 = (uVar11 & 0xf00) >> 7 | (uVar11 & 0xf0) << 3 | (uVar11 & 0xf) << 0xc |
                   ((uVar12 & 0xf00) >> 7 | (uVar12 & 0xf0) << 3 | uVar12 << 0xc) << 0x10;
          uVar13 = *puVar6;
          uVar14 = (uVar11 ^ uVar13 ^ uVar11 + uVar13) & uVar3;
          uVar12 = (uVar14 >> 5) - (((uVar3 ^ uVar3 >> 5) & uVar14 >> 5) >> 1);
          if (CARRY4(uVar11,uVar13)) {
            uVar12 = uVar12 | 0x8000000;
          }
          *puVar6 = uVar14;
          puVar5 = puVar6 + 1;
          *puVar6 = (uVar14 - uVar12 | uVar11 + uVar13) - (uVar14 & ~(uVar14 - uVar12));
          puVar6 = puVar5;
        } while (0 < iVar4);
        iVar7 = 0;
      } while (iVar4 == 0);
      return;
    }
    iVar15 = iVar7;
    if (((uint)puVar5 & 3) == 0) goto LAB_4a018d50;
    do {
      do {
        uVar11 = (uint)*(ushort *)(iVar16 + ((uVar9 & uVar18) >> 0x14) * 2);
        iVar15 = iVar7 + -1;
        uVar11 = (uint)*(ushort *)(iVar4 + ((uVar11 & 0xf00) >> 2 | (uVar11 & 0xf0) >> 3) * 2) |
                 (uint)*(ushort *)(iVar4 + (uVar11 & 0xf) * 0x80) << 0xb;
        uVar13 = (ushort)*puVar5 + uVar11;
        uVar12 = (uVar11 ^ uVar13 ^ (uint)(ushort)*puVar5) & 0x10820;
        uVar11 = uVar12 >> 5;
        uVar2 = (ushort)uVar12;
        uVar1 = uVar2 - ((short)uVar11 - (short)((uVar11 & 0x40) >> 1));
        uVar9 = uVar9 + iVar10;
        *(ushort *)puVar5 = ((ushort)uVar13 | uVar1) - (uVar2 & ~uVar1);
        puVar5 = (uint *)((int)puVar5 + 2);
        if (iVar15 < 0) {
          return;
        }
LAB_4a018d50:
        iVar7 = 0;
        puVar6 = puVar5;
      } while (iVar15 == 0);
      do {
        uVar11 = (uint)*(ushort *)(iVar16 + ((uVar9 & uVar18) >> 0x14) * 2);
        iVar15 = iVar15 + -2;
        uVar12 = (uint)*(ushort *)(iVar16 + ((uVar9 + iVar10 & uVar18) >> 0x14) * 2);
        uVar9 = uVar9 + iVar10 + iVar10;
        uVar11 = (uint)*(ushort *)(iVar4 + ((uVar11 & 0xf00) >> 2 | (uVar11 & 0xf0) >> 3) * 2) |
                 (uint)*(ushort *)(iVar4 + (uVar11 & 0xf) * 0x80) << 0xb |
                 ((uint)*(ushort *)(iVar4 + ((uVar12 & 0xf00) >> 2 | (uVar12 & 0xf0) >> 3) * 2) |
                 (uint)*(ushort *)(iVar4 + (uVar12 & 0xf) * 0x80) << 0xb) << 0x10;
        uVar13 = *puVar6;
        uVar14 = (uVar11 ^ uVar13 ^ uVar11 + uVar13) & uVar3;
        uVar12 = (uVar14 >> 5) - (((uVar3 ^ uVar3 >> 5) & uVar14 >> 5) >> 1);
        if (CARRY4(uVar11,uVar13)) {
          uVar12 = uVar12 | 0x8000000;
        }
        *puVar6 = uVar14;
        puVar5 = puVar6 + 1;
        *puVar6 = (uVar14 - uVar12 | uVar11 + uVar13) - (uVar14 & ~(uVar14 - uVar12));
        puVar6 = puVar5;
      } while (0 < iVar15);
      iVar7 = 0;
    } while (iVar15 == 0);
    return;
  }
  iVar8 = iVar7;
  if (((uint)puVar5 & 3) == 0) goto LAB_4a018ffc;
  do {
    do {
      uVar12 = (uint)*(ushort *)(iVar16 + (uVar18 & uVar11 >> 0xd | (uVar9 & uVar18) >> 0x14) * 2);
      iVar8 = iVar7 + -1;
      uVar12 = (uint)*(ushort *)(iVar4 + ((uVar12 & 0xf00) >> 2 | (uVar12 & 0xf0) >> 3) * 2) |
               (uint)*(ushort *)(iVar4 + (uVar12 & 0xf) * 0x80) << 0xb;
      uVar13 = (ushort)*puVar5 + uVar12;
      uVar14 = (uVar12 ^ uVar13 ^ (uint)(ushort)*puVar5) & 0x10820;
      uVar12 = uVar14 >> 5;
      uVar2 = (ushort)uVar14;
      uVar1 = uVar2 - ((short)uVar12 - (short)((uVar12 & 0x40) >> 1));
      uVar11 = uVar11 + iVar15;
      uVar9 = uVar9 + iVar10;
      *(ushort *)puVar5 = ((ushort)uVar13 | uVar1) - (uVar2 & ~uVar1);
      puVar5 = (uint *)((int)puVar5 + 2);
      if (iVar8 < 0) {
        return;
      }
LAB_4a018ffc:
      iVar7 = 0;
      puVar6 = puVar5;
    } while (iVar8 == 0);
    do {
      uVar13 = (uint)*(ushort *)(iVar16 + (uVar18 & uVar11 >> 0xd | (uVar9 & uVar18) >> 0x14) * 2);
      uVar12 = (uint)*(ushort *)
                      (iVar16 + (uVar18 & uVar11 + iVar15 >> 0xd | (uVar9 + iVar10 & uVar18) >> 0x14
                                ) * 2);
      iVar8 = iVar8 + -2;
      uVar11 = uVar11 + iVar15 + iVar15;
      uVar9 = uVar9 + iVar10 + iVar10;
      uVar14 = *puVar6;
      uVar12 = (uint)*(ushort *)(iVar4 + ((uVar13 & 0xf00) >> 2 | (uVar13 & 0xf0) >> 3) * 2) |
               (uint)*(ushort *)(iVar4 + (uVar13 & 0xf) * 0x80) << 0xb |
               ((uint)*(ushort *)(iVar4 + ((uVar12 & 0xf00) >> 2 | (uVar12 & 0xf0) >> 3) * 2) |
               (uint)*(ushort *)(iVar4 + (uVar12 & 0xf) * 0x80) << 0xb) << 0x10;
      uVar13 = (uVar12 ^ uVar14 ^ uVar12 + uVar14) & uVar3;
      uVar17 = (uVar13 >> 5) - (((uVar3 ^ uVar3 >> 5) & uVar13 >> 5) >> 1);
      if (CARRY4(uVar12,uVar14)) {
        uVar17 = uVar17 | 0x8000000;
      }
      *puVar6 = uVar13;
      puVar5 = puVar6 + 1;
      *puVar6 = (uVar12 + uVar14 | uVar13 - uVar17) - (uVar13 & ~(uVar13 - uVar17));
      puVar6 = puVar5;
    } while (0 < iVar8);
    iVar7 = 0;
  } while (iVar8 == 0);
  return;
}



// Address: 4a0190f4

void FUN_4a0190f4(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  
  puVar4 = (uint *)param_1[1];
  uVar8 = param_1[2];
  uVar10 = param_1[3];
  iVar9 = param_1[4];
  iVar13 = param_1[5];
  uVar17 = param_1[6];
  iVar16 = param_1[7];
  iVar6 = *param_1 + -1;
  iVar3 = *(int *)PTR_LAB_4a01954c + ((param_1[9] & 0xf800000U) >> 0xc);
  if (iVar13 == 0) {
    iVar16 = iVar16 + (uVar17 & uVar10 >> 0xe) * 4;
    if ((~param_1[9] & 0xf800000U) == 0) {
      puVar5 = puVar4;
      iVar3 = iVar6;
      if (((uint)puVar4 & 3) == 0) goto LAB_4a01931c;
      do {
        do {
          uVar10 = *(uint *)(iVar16 + ((uVar8 & uVar17) >> 0x14) * 4);
          uVar10 = uVar10 >> 8 & 0xf800 | (uVar10 & 0xfc00) >> 5 | (uVar10 & 0xf8) >> 3;
          iVar3 = iVar6 + -1;
          uVar12 = (ushort)*puVar5 + uVar10;
          uVar11 = (uVar10 ^ uVar12 ^ (uint)(ushort)*puVar5) & 0x10820;
          uVar10 = uVar11 >> 5;
          uVar2 = (ushort)uVar11;
          uVar1 = uVar2 - ((short)uVar10 - (short)((uVar10 & 0x40) >> 1));
          uVar8 = uVar8 + iVar9;
          puVar4 = (uint *)((int)puVar5 + 2);
          *(ushort *)puVar5 = ((ushort)uVar12 | uVar1) - (uVar2 & ~uVar1);
          if (iVar3 < 0) {
            return;
          }
LAB_4a01931c:
          uVar10 = DAT_4a019550;
          iVar6 = 0;
          puVar5 = puVar4;
        } while (iVar3 == 0);
        do {
          uVar11 = *(uint *)(iVar16 + ((uVar8 & uVar17) >> 0x14) * 4);
          uVar12 = *(uint *)(iVar16 + ((uVar8 + iVar9 & uVar17) >> 0x14) * 4);
          iVar3 = iVar3 + -2;
          uVar11 = uVar11 >> 8 & 0xf800 | (uVar11 & 0xfc00) >> 5 | (uVar11 & 0xf8) >> 3 |
                   (uVar12 >> 8 & 0xf800 | (uVar12 & 0xfc00) >> 5 | (uVar12 & 0xf8) >> 3) << 0x10;
          uVar14 = *puVar4;
          uVar8 = uVar8 + iVar9 + iVar9;
          uVar15 = (uVar11 ^ uVar14 ^ uVar11 + uVar14) & uVar10;
          uVar12 = (uVar15 >> 5) - (((uVar10 ^ uVar10 >> 5) & uVar15 >> 5) >> 1);
          if (CARRY4(uVar11,uVar14)) {
            uVar12 = uVar12 | 0x8000000;
          }
          *puVar4 = uVar15;
          puVar5 = puVar4 + 1;
          *puVar4 = (uVar15 - uVar12 | uVar11 + uVar14) - (uVar15 & ~(uVar15 - uVar12));
          puVar4 = puVar5;
        } while (0 < iVar3);
        iVar6 = 0;
      } while (iVar3 == 0);
      return;
    }
    puVar5 = puVar4;
    iVar13 = iVar6;
    if (((uint)puVar4 & 3) == 0) goto LAB_4a0191c8;
    do {
      do {
        uVar10 = *(uint *)(iVar16 + ((uVar8 & uVar17) >> 0x14) * 4);
        uVar10 = (uint)*(ushort *)(iVar3 + ((uVar10 & 0xffff) >> 0xb | (uVar10 & 0xf8) << 2) * 2) |
                 (uint)*(ushort *)(iVar3 + (uVar10 >> 0xe & 0x3e0) * 2) << 0xb;
        uVar12 = (ushort)*puVar5 + uVar10;
        uVar11 = (uVar10 ^ uVar12 ^ (uint)(ushort)*puVar5) & 0x10820;
        uVar10 = uVar11 >> 5;
        uVar2 = (ushort)uVar11;
        uVar1 = uVar2 - ((short)uVar10 - (short)((uVar10 & 0x40) >> 1));
        iVar13 = iVar6 + -1;
        uVar8 = uVar8 + iVar9;
        puVar4 = (uint *)((int)puVar5 + 2);
        *(ushort *)puVar5 = ((ushort)uVar12 | uVar1) - (uVar2 & ~uVar1);
        if (iVar13 < 0) {
          return;
        }
LAB_4a0191c8:
        uVar10 = DAT_4a019550;
        iVar6 = 0;
        puVar5 = puVar4;
      } while (iVar13 == 0);
      do {
        uVar11 = *(uint *)(iVar16 + ((uVar8 & uVar17) >> 0x14) * 4);
        uVar12 = *(uint *)(iVar16 + ((uVar8 + iVar9 & uVar17) >> 0x14) * 4);
        iVar13 = iVar13 + -2;
        uVar8 = uVar8 + iVar9 + iVar9;
        uVar14 = *puVar4;
        uVar11 = (uint)*(ushort *)(iVar3 + ((uVar11 & 0xffff) >> 0xb | (uVar11 & 0xf8) << 2) * 2) |
                 (uint)*(ushort *)(iVar3 + (uVar11 >> 0xe & 0x3e0) * 2) << 0xb |
                 ((uint)*(ushort *)(iVar3 + ((uVar12 & 0xffff) >> 0xb | (uVar12 & 0xf8) << 2) * 2) |
                 (uint)*(ushort *)(iVar3 + (uVar12 >> 0xe & 0x3e0) * 2) << 0xb) << 0x10;
        uVar12 = (uVar11 ^ uVar14 ^ uVar11 + uVar14) & uVar10;
        uVar15 = (uVar12 >> 5) - (((uVar10 ^ uVar10 >> 5) & uVar12 >> 5) >> 1);
        if (CARRY4(uVar11,uVar14)) {
          uVar15 = uVar15 | 0x8000000;
        }
        *puVar4 = uVar12;
        puVar5 = puVar4 + 1;
        *puVar4 = (uVar11 + uVar14 | uVar12 - uVar15) - (uVar12 & ~(uVar12 - uVar15));
        puVar4 = puVar5;
      } while (0 < iVar13);
      iVar6 = 0;
    } while (iVar13 == 0);
    return;
  }
  iVar7 = iVar6;
  if (((uint)puVar4 & 3) == 0) goto LAB_4a019460;
  do {
    do {
      uVar11 = *(uint *)(iVar16 + (uVar17 & uVar10 >> 0xe | (uVar8 & uVar17) >> 0x14) * 4);
      iVar7 = iVar6 + -1;
      uVar11 = (uint)*(ushort *)(iVar3 + ((uVar11 & 0xffff) >> 0xb | (uVar11 & 0xf8) << 2) * 2) |
               (uint)*(ushort *)(iVar3 + (uVar11 >> 0xe & 0x3e0) * 2) << 0xb;
      uVar10 = uVar10 + iVar13;
      uVar8 = uVar8 + iVar9;
      uVar14 = (ushort)*puVar4 + uVar11;
      uVar12 = ((uint)(ushort)*puVar4 ^ uVar11 ^ uVar14) & 0x10820;
      uVar11 = uVar12 >> 5;
      uVar2 = (ushort)uVar12;
      uVar1 = uVar2 - ((short)uVar11 - (short)((uVar11 & 0x40) >> 1));
      *(ushort *)puVar4 = ((ushort)uVar14 | uVar1) - (uVar2 & ~uVar1);
      puVar4 = (uint *)((int)puVar4 + 2);
      if (iVar7 < 0) {
        return;
      }
LAB_4a019460:
      iVar6 = 0;
      puVar5 = puVar4;
    } while (iVar7 == 0);
    do {
      uVar12 = *(uint *)(iVar16 + (uVar17 & uVar10 >> 0xe | (uVar8 & uVar17) >> 0x14) * 4);
      uVar11 = *(uint *)(iVar16 + (uVar17 & uVar10 + iVar13 >> 0xe |
                                  (uVar8 + iVar9 & uVar17) >> 0x14) * 4);
      iVar7 = iVar7 + -2;
      uVar10 = uVar10 + iVar13 + iVar13;
      uVar14 = *puVar5;
      uVar11 = (uint)*(ushort *)(iVar3 + ((uVar12 & 0xffff) >> 0xb | (uVar12 & 0xf8) << 2) * 2) |
               (uint)*(ushort *)(iVar3 + (uVar12 >> 0xe & 0x3e0) * 2) << 0xb |
               ((uint)*(ushort *)(iVar3 + ((uVar11 & 0xffff) >> 0xb | (uVar11 & 0xf8) << 2) * 2) |
               (uint)*(ushort *)(iVar3 + (uVar11 >> 0xe & 0x3e0) * 2) << 0xb) << 0x10;
      uVar12 = (uVar11 ^ uVar14 ^ uVar11 + uVar14) & DAT_4a019550;
      uVar15 = (uVar12 >> 5) - (((DAT_4a019550 ^ DAT_4a019550 >> 5) & uVar12 >> 5) >> 1);
      if (CARRY4(uVar11,uVar14)) {
        uVar15 = uVar15 | 0x8000000;
      }
      *puVar5 = uVar12;
      uVar8 = uVar8 + iVar9 + iVar9;
      puVar4 = puVar5 + 1;
      *puVar5 = (uVar11 + uVar14 | uVar12 - uVar15) - (uVar12 & ~(uVar12 - uVar15));
      puVar5 = puVar4;
    } while (0 < iVar7);
    iVar6 = 0;
  } while (iVar7 == 0);
  return;
}



// Address: 4a019558

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a019558(int *param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
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
  uint uVar20;
  
  uVar8 = param_1[6];
  iVar13 = param_1[7];
  iVar17 = param_1[8];
  uVar10 = param_1[3];
  iVar11 = param_1[4];
  iVar12 = param_1[5];
  uVar14 = param_1[9];
  puVar7 = (uint *)param_1[1];
  uVar20 = param_1[2];
  iVar9 = *param_1 + -1;
  if ((uVar14 & 0x80000000) != 0) {
    iVar17 = iVar17 + ((uVar14 & 0xf800000) >> 0x12);
    uVar14 = DAT_4a01982c;
    if (((uint)puVar7 & 3) == 0) goto joined_r0x4a019608;
    do {
      bVar1 = *(byte *)(iVar13 + (uVar8 & uVar10 >> 0xc | (uVar20 & uVar8) >> 0x15));
      if ((bool)((byte)((uVar20 & uVar8) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar14 = (uint)*(ushort *)(iVar17 + (bVar1 & 0xf) * 2);
      iVar9 = iVar9 + -1;
      uVar15 = (ushort)*puVar7 + uVar14;
      uVar5 = (uVar14 ^ uVar15 ^ (uint)(ushort)*puVar7) & 0x10820;
      uVar14 = uVar5 >> 5;
      uVar4 = (ushort)uVar5;
      uVar3 = uVar4 - ((short)uVar14 - (short)((uVar14 & 0x40) >> 1));
      uVar20 = uVar20 + iVar11;
      uVar10 = uVar10 + iVar12;
      *(ushort *)puVar7 = ((ushort)uVar15 | uVar3) - (uVar4 & ~uVar3);
      puVar7 = (uint *)((int)puVar7 + 2);
      uVar14 = DAT_4a01982c;
      if (iVar9 < 0) {
        return;
      }
joined_r0x4a019608:
      while (uVar5 = DAT_4a01982c, 0 < iVar9) {
        bVar1 = *(byte *)(iVar13 + (uVar8 & uVar10 >> 0xc | (uVar20 & uVar8) >> 0x15));
        if ((bool)((byte)((uVar20 & uVar8) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        uVar15 = uVar20 + iVar11 & uVar8;
        bVar2 = *(byte *)(iVar13 + (uVar8 & uVar10 + iVar12 >> 0xc | uVar15 >> 0x15));
        uVar18 = *puVar7;
        iVar9 = iVar9 + -2;
        if ((bool)((byte)(uVar15 >> 0x14) & 1)) {
          bVar2 = bVar2 >> 4;
        }
        uVar20 = uVar20 + iVar11 + iVar11;
        uVar10 = uVar10 + iVar12 + iVar12;
        uVar15 = CONCAT22(*(undefined2 *)(iVar17 + (bVar2 & 0xf) * 2),
                          *(undefined2 *)(iVar17 + (bVar1 & 0xf) * 2));
        uVar16 = (uVar15 ^ uVar18 ^ uVar15 + uVar18) & DAT_4a01982c;
        uVar19 = (uVar16 >> 5) - (((DAT_4a01982c ^ DAT_4a01982c >> 5) & uVar16 >> 5) >> 1);
        if (CARRY4(uVar15,uVar18)) {
          uVar19 = uVar19 | 0x8000000;
        }
        DAT_4a01982c = uVar14;
        *puVar7 = uVar16;
        *puVar7 = (uVar15 + uVar18 | uVar16 - uVar19) - (uVar16 & ~(uVar16 - uVar19));
        puVar7 = puVar7 + 1;
        uVar14 = DAT_4a01982c;
        DAT_4a01982c = uVar5;
      }
      DAT_4a01982c = uVar14;
    } while (-1 < iVar9);
    return;
  }
  iVar6 = param_1[10];
  if (((uint)puVar7 & 3) == 0) goto joined_r0x4a019754;
  do {
    bVar1 = *(byte *)(iVar13 + (uVar8 & uVar10 >> 0xc | (uVar20 & uVar8) >> 0x15));
    if ((bool)((byte)((uVar20 & uVar8) >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    uVar5 = (uint)*(ushort *)(iVar17 + ((uVar14 & 0xf800000) >> 0x12) + (bVar1 & 0xf) * 2);
    iVar9 = iVar9 + -1;
    uVar20 = uVar20 + iVar11;
    uVar18 = (ushort)*puVar7 + uVar5;
    uVar15 = (uVar5 ^ uVar18 ^ (uint)(ushort)*puVar7) & 0x10820;
    uVar5 = uVar15 >> 5;
    uVar4 = (ushort)uVar15;
    uVar3 = uVar4 - ((short)uVar5 - (short)((uVar5 & 0x40) >> 1));
    *(ushort *)puVar7 = ((ushort)uVar18 | uVar3) - (uVar4 & ~uVar3);
    uVar10 = uVar10 + iVar12;
    uVar14 = uVar14 + iVar6;
    puVar7 = (uint *)((int)puVar7 + 2);
    if (iVar9 < 0) {
      return;
    }
joined_r0x4a019754:
    while (0 < iVar9) {
      bVar1 = *(byte *)(iVar13 + (uVar8 & uVar10 >> 0xc | (uVar20 & uVar8) >> 0x15));
      if ((bool)((byte)((uVar20 & uVar8) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar5 = uVar14 & 0xf800000;
      iVar9 = iVar9 + -2;
      uVar15 = iVar6 + uVar14;
      uVar14 = uVar20 + iVar11 & uVar8;
      bVar2 = *(byte *)(iVar13 + (uVar8 & uVar10 + iVar12 >> 0xc | uVar14 >> 0x15));
      uVar20 = uVar20 + iVar11 + iVar11;
      uVar10 = uVar10 + iVar12 + iVar12;
      if ((bool)((byte)(uVar14 >> 0x14) & 1)) {
        bVar2 = bVar2 >> 4;
      }
      uVar14 = iVar6 + uVar15;
      uVar5 = CONCAT22(*(undefined2 *)(iVar17 + ((uVar15 & 0xf800000) >> 0x12) + (bVar2 & 0xf) * 2),
                       *(undefined2 *)(iVar17 + (uVar5 >> 0x12) + (bVar1 & 0xf) * 2));
      uVar18 = *puVar7;
      uVar15 = (uVar5 ^ uVar18 ^ uVar5 + uVar18) & DAT_4a01982c;
      uVar16 = (uVar15 >> 5) - (((DAT_4a01982c ^ DAT_4a01982c >> 5) & uVar15 >> 5) >> 1);
      if (CARRY4(uVar5,uVar18)) {
        uVar16 = uVar16 | 0x8000000;
      }
      *puVar7 = uVar15;
      *puVar7 = (uVar5 + uVar18 | uVar15 - uVar16) - (uVar15 & ~(uVar15 - uVar16));
      puVar7 = puVar7 + 1;
    }
  } while (-1 < iVar9);
  return;
}



// Address: 4a019830

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a019830(int *param_1)

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
    uVar14 = DAT_4a019ad4;
    if (((uint)puVar6 & 3) == 0) goto joined_r0x4a0198d8;
    do {
      uVar14 = (uint)*(ushort *)
                      (iVar17 + (uint)*(byte *)(iVar13 + (uVar7 & uVar9 >> 0xc |
                                                         (uVar19 & uVar7) >> 0x14)) * 2);
      iVar8 = iVar8 + -1;
      uVar15 = (ushort)*puVar6 + uVar14;
      uVar3 = (uVar14 ^ uVar15 ^ (uint)(ushort)*puVar6) & 0x10820;
      uVar14 = uVar3 >> 5;
      uVar2 = (ushort)uVar3;
      uVar1 = uVar2 - ((short)uVar14 - (short)((uVar14 & 0x40) >> 1));
      uVar9 = uVar9 + iVar12;
      uVar19 = uVar19 + iVar11;
      *(ushort *)puVar6 = ((ushort)uVar15 | uVar1) - (uVar2 & ~uVar1);
      puVar6 = (uint *)((int)puVar6 + 2);
      uVar14 = DAT_4a019ad4;
      if (iVar8 < 0) {
        return;
      }
joined_r0x4a0198d8:
      while (uVar3 = DAT_4a019ad4, 0 < iVar8) {
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
        uVar4 = (uVar15 ^ uVar18 ^ uVar15 + uVar18) & DAT_4a019ad4;
        uVar10 = (uVar4 >> 5) - (((DAT_4a019ad4 ^ DAT_4a019ad4 >> 5) & uVar4 >> 5) >> 1);
        if (CARRY4(uVar15,uVar18)) {
          uVar10 = uVar10 | 0x8000000;
        }
        DAT_4a019ad4 = uVar14;
        *puVar6 = uVar4;
        *puVar6 = (uVar15 + uVar18 | uVar4 - uVar10) - (uVar4 & ~(uVar4 - uVar10));
        puVar6 = puVar6 + 1;
        uVar14 = DAT_4a019ad4;
        DAT_4a019ad4 = uVar3;
      }
      DAT_4a019ad4 = uVar14;
    } while (-1 < iVar8);
    return;
  }
  iVar5 = param_1[10];
  if (((uint)puVar6 & 3) == 0) goto joined_r0x4a019a0c;
  do {
    uVar3 = (uint)*(ushort *)
                   (iVar17 + ((uVar14 & 0xf800000) >> 0xe) +
                   (uint)*(byte *)(iVar13 + (uVar7 & uVar9 >> 0xc | (uVar19 & uVar7) >> 0x14)) * 2);
    uVar4 = (ushort)*puVar6 + uVar3;
    uVar15 = (uVar3 ^ uVar4 ^ (uint)(ushort)*puVar6) & 0x10820;
    uVar3 = uVar15 >> 5;
    uVar2 = (ushort)uVar15;
    uVar1 = uVar2 - ((short)uVar3 - (short)((uVar3 & 0x40) >> 1));
    *(ushort *)puVar6 = ((ushort)uVar4 | uVar1) - (uVar2 & ~uVar1);
    iVar8 = iVar8 + -1;
    uVar9 = uVar9 + iVar12;
    uVar19 = uVar19 + iVar11;
    uVar14 = uVar14 + iVar5;
    puVar6 = (uint *)((int)puVar6 + 2);
    if (iVar8 < 0) {
      return;
    }
joined_r0x4a019a0c:
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
      uVar15 = (uVar3 ^ uVar4 ^ uVar3 + uVar4) & DAT_4a019ad4;
      uVar10 = (uVar15 >> 5) - (((DAT_4a019ad4 ^ DAT_4a019ad4 >> 5) & uVar15 >> 5) >> 1);
      if (CARRY4(uVar3,uVar4)) {
        uVar10 = uVar10 | 0x8000000;
      }
      *puVar6 = uVar15;
      uVar9 = uVar9 + iVar12 + iVar12;
      *puVar6 = (uVar3 + uVar4 | uVar15 - uVar10) - (uVar15 & ~(uVar15 - uVar10));
      puVar6 = puVar6 + 1;
    }
  } while (-1 < iVar8);
  return;
}



// Address: 4a019ad8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a019ad8(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  
  uVar9 = param_1[3];
  iVar10 = param_1[4];
  iVar11 = param_1[5];
  uVar7 = param_1[6];
  iVar12 = param_1[7];
  iVar15 = *(int *)PTR_LAB_4a019e30;
  uVar13 = param_1[9];
  uVar20 = param_1[2];
  puVar6 = (uint *)param_1[1];
  iVar8 = *param_1 + -1;
  if ((uVar13 & 0x80000000) != 0) {
    iVar15 = iVar15 + ((uVar13 & 0xf800000) >> 0xc);
    uVar13 = DAT_4a019e34;
    if (((uint)puVar6 & 3) == 0) goto joined_r0x4a019ba8;
    do {
      uVar13 = (uint)*(ushort *)(iVar12 + (uVar7 & uVar9 >> 0xd | (uVar20 & uVar7) >> 0x14) * 2);
      iVar8 = iVar8 + -1;
      uVar13 = (uint)*(ushort *)(iVar15 + ((uVar13 & 0xffff7fff) >> 5) * 2) |
               (uint)*(ushort *)(iVar15 + (uVar13 & 0x1f) * 0x40) << 0xb;
      uVar16 = (ushort)*puVar6 + uVar13;
      uVar14 = (uVar13 ^ uVar16 ^ (uint)(ushort)*puVar6) & 0x10820;
      uVar13 = uVar14 >> 5;
      uVar2 = (ushort)uVar14;
      uVar1 = uVar2 - ((short)uVar13 - (short)((uVar13 & 0x40) >> 1));
      uVar9 = uVar9 + iVar11;
      uVar20 = uVar20 + iVar10;
      *(ushort *)puVar6 = ((ushort)uVar16 | uVar1) - (uVar2 & ~uVar1);
      puVar6 = (uint *)((int)puVar6 + 2);
      uVar13 = DAT_4a019e34;
      if (iVar8 < 0) {
        return;
      }
joined_r0x4a019ba8:
      while (uVar14 = DAT_4a019e34, 0 < iVar8) {
        uVar17 = (uint)*(ushort *)(iVar12 + (uVar7 & uVar9 >> 0xd | (uVar20 & uVar7) >> 0x14) * 2);
        uVar16 = (uint)*(ushort *)
                        (iVar12 + (uVar7 & uVar9 + iVar11 >> 0xd | (uVar20 + iVar10 & uVar7) >> 0x14
                                  ) * 2);
        iVar8 = iVar8 + -2;
        uVar9 = uVar9 + iVar11 + iVar11;
        uVar20 = uVar20 + iVar10 + iVar10;
        uVar18 = *puVar6;
        uVar16 = (uint)*(ushort *)(iVar15 + ((uVar17 & 0xffff7fff) >> 5) * 2) |
                 (uint)*(ushort *)(iVar15 + (uVar17 & 0x1f) * 0x40) << 0xb |
                 ((uint)*(ushort *)(iVar15 + ((uVar16 & 0xffff7fff) >> 5) * 2) |
                 (uint)*(ushort *)(iVar15 + (uVar16 & 0x1f) * 0x40) << 0xb) << 0x10;
        uVar17 = (uVar16 ^ uVar18 ^ uVar16 + uVar18) & DAT_4a019e34;
        uVar19 = (uVar17 >> 5) - (((DAT_4a019e34 ^ DAT_4a019e34 >> 5) & uVar17 >> 5) >> 1);
        if (CARRY4(uVar16,uVar18)) {
          uVar19 = uVar19 | 0x8000000;
        }
        DAT_4a019e34 = uVar13;
        *puVar6 = uVar17;
        *puVar6 = (uVar16 + uVar18 | uVar17 - uVar19) - (uVar17 & ~(uVar17 - uVar19));
        puVar6 = puVar6 + 1;
        uVar13 = DAT_4a019e34;
        DAT_4a019e34 = uVar14;
      }
      DAT_4a019e34 = uVar13;
    } while (-1 < iVar8);
    return;
  }
  iVar3 = param_1[10];
  if (((uint)puVar6 & 3) == 0) goto joined_r0x4a019d30;
  do {
    uVar14 = (uint)*(ushort *)(iVar12 + (uVar7 & uVar9 >> 0xd | (uVar20 & uVar7) >> 0x14) * 2);
    iVar4 = iVar15 + ((uVar13 & 0xf800000) >> 0xc);
    uVar14 = (uint)*(ushort *)(iVar4 + ((uVar14 & 0xffff7fff) >> 5) * 2) |
             (uint)*(ushort *)(iVar4 + (uVar14 & 0x1f) * 0x40) << 0xb;
    uVar17 = (ushort)*puVar6 + uVar14;
    uVar16 = (uVar14 ^ uVar17 ^ (uint)(ushort)*puVar6) & 0x10820;
    uVar14 = uVar16 >> 5;
    uVar2 = (ushort)uVar16;
    uVar1 = uVar2 - ((short)uVar14 - (short)((uVar14 & 0x40) >> 1));
    *(ushort *)puVar6 = ((ushort)uVar17 | uVar1) - (uVar2 & ~uVar1);
    iVar8 = iVar8 + -1;
    uVar9 = uVar9 + iVar11;
    uVar20 = uVar20 + iVar10;
    uVar13 = uVar13 + iVar3;
    puVar6 = (uint *)((int)puVar6 + 2);
    if (iVar8 < 0) {
      return;
    }
joined_r0x4a019d30:
    while (0 < iVar8) {
      uVar16 = (uint)*(ushort *)(iVar12 + (uVar7 & uVar9 >> 0xd | (uVar20 & uVar7) >> 0x14) * 2);
      uVar14 = uVar13 + iVar3;
      iVar4 = iVar15 + ((uVar13 & 0xf800000) >> 0xc);
      uVar17 = (uint)*(ushort *)
                      (iVar12 + (uVar7 & uVar9 + iVar11 >> 0xd | (uVar20 + iVar10 & uVar7) >> 0x14)
                                * 2);
      uVar13 = uVar14 + iVar3;
      iVar5 = iVar15 + ((uVar14 & 0xf800000) >> 0xc);
      iVar8 = iVar8 + -2;
      uVar9 = uVar9 + iVar11 + iVar11;
      uVar18 = *puVar6;
      uVar14 = (uint)*(ushort *)(iVar4 + ((uVar16 & 0xffff7fff) >> 5) * 2) |
               (uint)*(ushort *)(iVar4 + (uVar16 & 0x1f) * 0x40) << 0xb |
               ((uint)*(ushort *)(iVar5 + ((uVar17 & 0xffff7fff) >> 5) * 2) |
               (uint)*(ushort *)(iVar5 + (uVar17 & 0x1f) * 0x40) << 0xb) << 0x10;
      uVar16 = (uVar14 ^ uVar18 ^ uVar14 + uVar18) & DAT_4a019e34;
      uVar17 = (uVar16 >> 5) - (((DAT_4a019e34 ^ DAT_4a019e34 >> 5) & uVar16 >> 5) >> 1);
      if (CARRY4(uVar14,uVar18)) {
        uVar17 = uVar17 | 0x8000000;
      }
      *puVar6 = uVar16;
      uVar20 = uVar20 + iVar10 + iVar10;
      *puVar6 = (uVar14 + uVar18 | uVar16 - uVar17) - (uVar16 & ~(uVar16 - uVar17));
      puVar6 = puVar6 + 1;
    }
  } while (-1 < iVar8);
  return;
}



// Address: 4a019e38

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a019e38(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  
  uVar7 = param_1[3];
  iVar8 = param_1[4];
  iVar9 = param_1[5];
  uVar5 = param_1[6];
  iVar10 = param_1[7];
  iVar17 = *(int *)PTR_LAB_4a01a1e4;
  uVar14 = param_1[9];
  uVar20 = param_1[2];
  puVar4 = (uint *)param_1[1];
  iVar6 = *param_1 + -1;
  if ((uVar14 & 0x80000000) == 0) {
    iVar3 = param_1[10];
    if (((uint)puVar4 & 3) == 0) goto joined_r0x4a01a0c0;
    do {
      uVar1 = *(ushort *)(iVar10 + (uVar5 & uVar7 >> 0xd | (uVar20 & uVar5) >> 0x14) * 2);
      iVar12 = iVar17 + ((uVar14 & 0xf800000) >> 0xc);
      uVar11 = (uint)*(ushort *)(iVar12 + ((uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5) * 2) |
               (uint)*(ushort *)(iVar12 + (uint)(uVar1 >> 0xb) * 0x40) << 0xb;
      uVar16 = (ushort)*puVar4 + uVar11;
      uVar15 = (uVar11 ^ uVar16 ^ (uint)(ushort)*puVar4) & 0x10820;
      uVar11 = uVar15 >> 5;
      uVar2 = (ushort)uVar15;
      uVar1 = uVar2 - ((short)uVar11 - (short)((uVar11 & 0x40) >> 1));
      *(ushort *)puVar4 = ((ushort)uVar16 | uVar1) - (uVar2 & ~uVar1);
      iVar6 = iVar6 + -1;
      uVar7 = uVar7 + iVar9;
      uVar20 = uVar20 + iVar8;
      uVar14 = uVar14 + iVar3;
      puVar4 = (uint *)((int)puVar4 + 2);
      if (iVar6 < 0) {
        return;
      }
joined_r0x4a01a0c0:
      while (0 < iVar6) {
        uVar11 = uVar14 + iVar3;
        uVar1 = *(ushort *)(iVar10 + (uVar5 & uVar7 >> 0xd | (uVar20 & uVar5) >> 0x14) * 2);
        uVar2 = *(ushort *)
                 (iVar10 + (uVar5 & uVar7 + iVar9 >> 0xd | (uVar20 + iVar8 & uVar5) >> 0x14) * 2);
        iVar13 = iVar17 + ((uVar14 & 0xf800000) >> 0xc);
        iVar6 = iVar6 + -2;
        uVar14 = uVar11 + iVar3;
        iVar12 = iVar17 + ((uVar11 & 0xf800000) >> 0xc);
        uVar16 = *puVar4;
        uVar11 = (uint)*(ushort *)(iVar13 + ((uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5) * 2) |
                 (uint)*(ushort *)(iVar13 + (uint)(uVar1 >> 0xb) * 0x40) << 0xb |
                 ((uint)*(ushort *)(iVar12 + ((uVar2 & 0x7ff) >> 6 | (uVar2 & 0x1f) << 5) * 2) |
                 (uint)*(ushort *)(iVar12 + (uint)(uVar2 >> 0xb) * 0x40) << 0xb) << 0x10;
        uVar15 = (uVar11 ^ uVar16 ^ uVar11 + uVar16) & DAT_4a01a1e8;
        uVar18 = (uVar15 >> 5) - (((DAT_4a01a1e8 ^ DAT_4a01a1e8 >> 5) & uVar15 >> 5) >> 1);
        if (CARRY4(uVar11,uVar16)) {
          uVar18 = uVar18 | 0x8000000;
        }
        *puVar4 = uVar15;
        uVar7 = uVar7 + iVar9 + iVar9;
        uVar20 = uVar20 + iVar8 + iVar8;
        *puVar4 = (uVar11 + uVar16 | uVar15 - uVar18) - (uVar15 & ~(uVar15 - uVar18));
        puVar4 = puVar4 + 1;
      }
    } while (-1 < iVar6);
    return;
  }
  iVar17 = iVar17 + ((uVar14 & 0xf800000) >> 0xc);
  uVar14 = DAT_4a01a1e8;
  if (((uint)puVar4 & 3) == 0) goto joined_r0x4a019f18;
  do {
    uVar1 = *(ushort *)(iVar10 + (uVar5 & uVar7 >> 0xd | (uVar20 & uVar5) >> 0x14) * 2);
    iVar6 = iVar6 + -1;
    uVar14 = (uint)*(ushort *)(iVar17 + ((uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5) * 2) |
             (uint)*(ushort *)(iVar17 + (uint)(uVar1 >> 0xb) * 0x40) << 0xb;
    uVar15 = (ushort)*puVar4 + uVar14;
    uVar11 = (uVar14 ^ uVar15 ^ (uint)(ushort)*puVar4) & 0x10820;
    uVar14 = uVar11 >> 5;
    uVar2 = (ushort)uVar11;
    uVar1 = uVar2 - ((short)uVar14 - (short)((uVar14 & 0x40) >> 1));
    *(ushort *)puVar4 = ((ushort)uVar15 | uVar1) - (uVar2 & ~uVar1);
    uVar7 = uVar7 + iVar9;
    uVar20 = uVar20 + iVar8;
    puVar4 = (uint *)((int)puVar4 + 2);
    uVar14 = DAT_4a01a1e8;
    if (iVar6 < 0) {
      return;
    }
joined_r0x4a019f18:
    while (uVar11 = DAT_4a01a1e8, 0 < iVar6) {
      uVar1 = *(ushort *)(iVar10 + (uVar5 & uVar7 >> 0xd | (uVar20 & uVar5) >> 0x14) * 2);
      uVar2 = *(ushort *)
               (iVar10 + (uVar5 & uVar7 + iVar9 >> 0xd | (uVar20 + iVar8 & uVar5) >> 0x14) * 2);
      iVar6 = iVar6 + -2;
      uVar7 = uVar7 + iVar9 + iVar9;
      uVar20 = uVar20 + iVar8 + iVar8;
      uVar18 = *puVar4;
      uVar15 = (uint)*(ushort *)(iVar17 + ((uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5) * 2) |
               (uint)*(ushort *)(iVar17 + (uint)(uVar1 >> 0xb) * 0x40) << 0xb |
               ((uint)*(ushort *)(iVar17 + ((uVar2 & 0x7ff) >> 6 | (uVar2 & 0x1f) << 5) * 2) |
               (uint)*(ushort *)(iVar17 + (uint)(uVar2 >> 0xb) * 0x40) << 0xb) << 0x10;
      uVar16 = (uVar15 ^ uVar18 ^ uVar15 + uVar18) & DAT_4a01a1e8;
      uVar19 = (uVar16 >> 5) - (((DAT_4a01a1e8 ^ DAT_4a01a1e8 >> 5) & uVar16 >> 5) >> 1);
      if (CARRY4(uVar15,uVar18)) {
        uVar19 = uVar19 | 0x8000000;
      }
      DAT_4a01a1e8 = uVar14;
      *puVar4 = uVar16;
      *puVar4 = (uVar15 + uVar18 | uVar16 - uVar19) - (uVar16 & ~(uVar16 - uVar19));
      puVar4 = puVar4 + 1;
      uVar14 = DAT_4a01a1e8;
      DAT_4a01a1e8 = uVar11;
    }
    DAT_4a01a1e8 = uVar14;
  } while (-1 < iVar6);
  return;
}



// Address: 4a01a1ec

void FUN_4a01a1ec(int *param_1)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  undefined1 auStack_34 [8];
  int local_2c [2];
  
  uVar8 = param_1[6];
  iVar13 = param_1[7];
  iVar14 = param_1[8];
  uVar10 = param_1[3];
  iVar11 = param_1[4];
  iVar12 = param_1[5];
  uVar20 = param_1[2];
  puVar21 = (uint *)auStack_34;
  local_2c[1] = *(int *)PTR_LAB_4a01a5f4;
  uVar15 = param_1[9];
  puVar7 = (uint *)param_1[1];
  iVar9 = *param_1 + -1;
  if ((uVar15 & 0x80000000) != 0) {
    iVar6 = *(int *)PTR_LAB_4a01a5f4 + ((uVar15 & 0xf800000) >> 0xc);
    if (((uint)puVar7 & 3) == 0) goto joined_r0x4a01a2e0;
    do {
      bVar2 = *(byte *)(iVar13 + (uVar8 & uVar10 >> 0xc | (uVar20 & uVar8) >> 0x15));
      if ((bool)((byte)((uVar20 & uVar8) >> 0x14) & 1)) {
        bVar2 = bVar2 >> 4;
      }
      uVar15 = (uint)*(ushort *)(iVar14 + (bVar2 & 0xf) * 2);
      iVar9 = iVar9 + -1;
      uVar20 = uVar20 + iVar11;
      uVar10 = uVar10 + iVar12;
      uVar15 = (uint)*(ushort *)(iVar6 + ((uVar15 & 0xf00) >> 2 | (uVar15 & 0xf0) >> 3) * 2) |
               (uint)*(ushort *)(iVar6 + (uVar15 & 0xf) * 0x80) << 0xb;
      uVar16 = (ushort)*puVar7 + uVar15;
      uVar17 = (uVar15 ^ uVar16 ^ (uint)(ushort)*puVar7) & 0x10820;
      uVar15 = uVar17 >> 5;
      uVar4 = (ushort)uVar17;
      uVar3 = uVar4 - ((short)uVar15 - (short)((uVar15 & 0x40) >> 1));
      *(ushort *)puVar7 = ((ushort)uVar16 | uVar3) - (uVar4 & ~uVar3);
      puVar7 = (uint *)((int)puVar7 + 2);
      if (iVar9 < 0) {
        return;
      }
joined_r0x4a01a2e0:
      while (0 < iVar9) {
        bVar2 = *(byte *)(iVar13 + (uVar8 & uVar10 >> 0xc | (uVar20 & uVar8) >> 0x15));
        if ((bool)((byte)((uVar20 & uVar8) >> 0x14) & 1)) {
          bVar2 = bVar2 >> 4;
        }
        uVar16 = (uint)*(ushort *)(iVar14 + (bVar2 & 0xf) * 2);
        uVar15 = uVar20 + iVar11 & uVar8;
        bVar2 = *(byte *)(iVar13 + (uVar8 & uVar10 + iVar12 >> 0xc | uVar15 >> 0x15));
        if ((bool)((byte)(uVar15 >> 0x14) & 1)) {
          bVar2 = bVar2 >> 4;
        }
        uVar15 = (uint)*(ushort *)(iVar14 + (bVar2 & 0xf) * 2);
        iVar9 = iVar9 + -2;
        uVar20 = uVar20 + iVar11 + iVar11;
        uVar17 = *puVar7;
        uVar15 = (uint)*(ushort *)(iVar6 + ((uVar16 & 0xf00) >> 2 | (uVar16 & 0xf0) >> 3) * 2) |
                 (uint)*(ushort *)(iVar6 + (uVar16 & 0xf) * 0x80) << 0xb |
                 ((uint)*(ushort *)(iVar6 + ((uVar15 & 0xf00) >> 2 | (uVar15 & 0xf0) >> 3) * 2) |
                 (uint)*(ushort *)(iVar6 + (uVar15 & 0xf) * 0x80) << 0xb) << 0x10;
        uVar16 = (uVar15 ^ uVar17 ^ uVar15 + uVar17) & DAT_4a01a5f8;
        uVar18 = (uVar16 >> 5) - (((DAT_4a01a5f8 ^ DAT_4a01a5f8 >> 5) & uVar16 >> 5) >> 1);
        if (CARRY4(uVar15,uVar17)) {
          uVar18 = uVar18 | 0x8000000;
        }
        *puVar7 = uVar16;
        uVar10 = uVar10 + iVar12 + iVar12;
        *puVar7 = (uVar15 + uVar17 | uVar16 - uVar18) - (uVar16 & ~(uVar16 - uVar18));
        puVar7 = puVar7 + 1;
      }
    } while (-1 < iVar9);
    return;
  }
  local_2c[0] = param_1[10];
  puVar5 = (uint *)auStack_34;
  if (((uint)puVar7 & 3) == 0) goto joined_r0x4a01a4b0;
  do {
    bVar2 = *(byte *)(iVar13 + (uVar8 & uVar10 >> 0xc | (uVar20 & uVar8) >> 0x15));
    if ((bool)((byte)((uVar20 & uVar8) >> 0x14) & 1)) {
      bVar2 = bVar2 >> 4;
    }
    uVar16 = (uint)*(ushort *)(iVar14 + (bVar2 & 0xf) * 2);
    iVar6 = *(int *)((int)puVar21 + 0xc) + ((uVar15 & 0xf800000) >> 0xc);
    iVar9 = iVar9 + -1;
    uVar16 = (uint)*(ushort *)(iVar6 + ((uVar16 & 0xf00) >> 2 | (uVar16 & 0xf0) >> 3) * 2) |
             (uint)*(ushort *)(iVar6 + (uVar16 & 0xf) * 0x80) << 0xb;
    uVar20 = uVar20 + iVar11;
    uVar10 = uVar10 + iVar12;
    uVar17 = (ushort)*puVar7 + uVar16;
    uVar18 = (uVar16 ^ uVar17 ^ (uint)(ushort)*puVar7) & 0x10820;
    uVar16 = uVar18 >> 5;
    uVar4 = (ushort)uVar18;
    uVar3 = uVar4 - ((short)uVar16 - (short)((uVar16 & 0x40) >> 1));
    *(ushort *)puVar7 = ((ushort)uVar17 | uVar3) - (uVar4 & ~uVar3);
    piVar1 = (int *)((int)puVar21 + 8);
    if (iVar9 < 0) {
      puVar21 = (uint *)((int)puVar21 + 0x10);
    }
    uVar15 = uVar15 + *piVar1;
    puVar7 = (uint *)((int)puVar7 + 2);
    puVar5 = puVar21;
    if (iVar9 < 0) {
      return;
    }
joined_r0x4a01a4b0:
    while (puVar21 = puVar5, 0 < iVar9) {
      bVar2 = *(byte *)(iVar13 + (uVar8 & uVar10 >> 0xc | (uVar20 & uVar8) >> 0x15));
      iVar6 = puVar21[3] + ((uVar15 & 0xf800000) >> 0xc);
      if ((bool)((byte)((uVar20 & uVar8) >> 0x14) & 1)) {
        bVar2 = bVar2 >> 4;
      }
      uVar17 = (uint)*(ushort *)(iVar14 + (bVar2 & 0xf) * 2);
      uVar16 = uVar20 + iVar11 & uVar8;
      bVar2 = *(byte *)(iVar13 + (uVar8 & uVar10 + iVar12 >> 0xc | uVar16 >> 0x15));
      iVar9 = iVar9 + -2;
      if ((bool)((byte)(uVar16 >> 0x14) & 1)) {
        bVar2 = bVar2 >> 4;
      }
      *puVar21 = (uint)bVar2 << 0x1c;
      uVar20 = uVar20 + iVar11 + iVar11;
      uVar10 = uVar10 + iVar12 + iVar12;
      puVar21[1] = (uint)*(ushort *)(iVar6 + ((uVar17 & 0xf00) >> 2 | (uVar17 & 0xf0) >> 3) * 2) |
                   (uint)*(ushort *)(iVar6 + (uVar17 & 0xf) * 0x80) << 0xb;
      iVar6 = puVar21[3] + ((puVar21[2] + uVar15 & 0xf800000) >> 0xc);
      uVar15 = puVar21[2] + uVar15 + puVar21[2];
      uVar16 = (uint)*(ushort *)(iVar14 + (*puVar21 >> 0x1b | *puVar21 << 5));
      uVar18 = *puVar7;
      uVar16 = puVar21[1] |
               ((uint)*(ushort *)(iVar6 + ((uVar16 & 0xf00) >> 2 | (uVar16 & 0xf0) >> 3) * 2) |
               (uint)*(ushort *)(iVar6 + (uVar16 & 0xf) * 0x80) << 0xb) << 0x10;
      uVar17 = (uVar16 ^ uVar18 ^ uVar16 + uVar18) & DAT_4a01a5f8;
      uVar19 = (uVar17 >> 5) - (((DAT_4a01a5f8 ^ DAT_4a01a5f8 >> 5) & uVar17 >> 5) >> 1);
      if (CARRY4(uVar16,uVar18)) {
        uVar19 = uVar19 | 0x8000000;
      }
      *puVar7 = uVar17;
      *puVar7 = (uVar16 + uVar18 | uVar17 - uVar19) - (uVar17 & ~(uVar17 - uVar19));
      puVar7 = puVar7 + 1;
      puVar5 = puVar21;
    }
  } while (-1 < iVar9);
  return;
}



// Address: 4a01a5fc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a01a5fc(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  
  uVar7 = param_1[3];
  iVar8 = param_1[4];
  iVar9 = param_1[5];
  uVar5 = param_1[6];
  iVar10 = param_1[7];
  iVar17 = *(int *)PTR_LAB_4a01a9a8;
  uVar14 = param_1[9];
  uVar20 = param_1[2];
  puVar4 = (uint *)param_1[1];
  iVar6 = *param_1 + -1;
  if ((uVar14 & 0x80000000) == 0) {
    iVar3 = param_1[10];
    if (((uint)puVar4 & 3) == 0) goto joined_r0x4a01a884;
    do {
      uVar11 = (uint)*(ushort *)(iVar10 + (uVar5 & uVar7 >> 0xd | (uVar20 & uVar5) >> 0x14) * 2);
      iVar12 = iVar17 + ((uVar14 & 0xf800000) >> 0xc);
      uVar11 = (uint)*(ushort *)(iVar12 + ((uVar11 & 0xf00) >> 2 | (uVar11 & 0xf0) >> 3) * 2) |
               (uint)*(ushort *)(iVar12 + (uVar11 & 0xf) * 0x80) << 0xb;
      uVar16 = (ushort)*puVar4 + uVar11;
      uVar15 = (uVar11 ^ uVar16 ^ (uint)(ushort)*puVar4) & 0x10820;
      uVar11 = uVar15 >> 5;
      uVar2 = (ushort)uVar15;
      uVar1 = uVar2 - ((short)uVar11 - (short)((uVar11 & 0x40) >> 1));
      *(ushort *)puVar4 = ((ushort)uVar16 | uVar1) - (uVar2 & ~uVar1);
      iVar6 = iVar6 + -1;
      uVar7 = uVar7 + iVar9;
      uVar20 = uVar20 + iVar8;
      uVar14 = uVar14 + iVar3;
      puVar4 = (uint *)((int)puVar4 + 2);
      if (iVar6 < 0) {
        return;
      }
joined_r0x4a01a884:
      while (0 < iVar6) {
        uVar15 = uVar14 + iVar3;
        uVar11 = (uint)*(ushort *)(iVar10 + (uVar5 & uVar7 >> 0xd | (uVar20 & uVar5) >> 0x14) * 2);
        uVar16 = (uint)*(ushort *)
                        (iVar10 + (uVar5 & uVar7 + iVar9 >> 0xd | (uVar20 + iVar8 & uVar5) >> 0x14)
                                  * 2);
        iVar13 = iVar17 + ((uVar14 & 0xf800000) >> 0xc);
        iVar6 = iVar6 + -2;
        uVar14 = uVar15 + iVar3;
        iVar12 = iVar17 + ((uVar15 & 0xf800000) >> 0xc);
        uVar18 = *puVar4;
        uVar11 = (uint)*(ushort *)(iVar13 + ((uVar11 & 0xf00) >> 2 | (uVar11 & 0xf0) >> 3) * 2) |
                 (uint)*(ushort *)(iVar13 + (uVar11 & 0xf) * 0x80) << 0xb |
                 ((uint)*(ushort *)(iVar12 + ((uVar16 & 0xf00) >> 2 | (uVar16 & 0xf0) >> 3) * 2) |
                 (uint)*(ushort *)(iVar12 + (uVar16 & 0xf) * 0x80) << 0xb) << 0x10;
        uVar15 = (uVar11 ^ uVar18 ^ uVar11 + uVar18) & DAT_4a01a9ac;
        uVar16 = (uVar15 >> 5) - (((DAT_4a01a9ac ^ DAT_4a01a9ac >> 5) & uVar15 >> 5) >> 1);
        if (CARRY4(uVar11,uVar18)) {
          uVar16 = uVar16 | 0x8000000;
        }
        *puVar4 = uVar15;
        uVar7 = uVar7 + iVar9 + iVar9;
        uVar20 = uVar20 + iVar8 + iVar8;
        *puVar4 = (uVar11 + uVar18 | uVar15 - uVar16) - (uVar15 & ~(uVar15 - uVar16));
        puVar4 = puVar4 + 1;
      }
    } while (-1 < iVar6);
    return;
  }
  iVar17 = iVar17 + ((uVar14 & 0xf800000) >> 0xc);
  uVar14 = DAT_4a01a9ac;
  if (((uint)puVar4 & 3) == 0) goto joined_r0x4a01a6dc;
  do {
    uVar14 = (uint)*(ushort *)(iVar10 + (uVar5 & uVar7 >> 0xd | (uVar20 & uVar5) >> 0x14) * 2);
    iVar6 = iVar6 + -1;
    uVar14 = (uint)*(ushort *)(iVar17 + ((uVar14 & 0xf00) >> 2 | (uVar14 & 0xf0) >> 3) * 2) |
             (uint)*(ushort *)(iVar17 + (uVar14 & 0xf) * 0x80) << 0xb;
    uVar15 = (ushort)*puVar4 + uVar14;
    uVar11 = (uVar14 ^ uVar15 ^ (uint)(ushort)*puVar4) & 0x10820;
    uVar14 = uVar11 >> 5;
    uVar2 = (ushort)uVar11;
    uVar1 = uVar2 - ((short)uVar14 - (short)((uVar14 & 0x40) >> 1));
    *(ushort *)puVar4 = ((ushort)uVar15 | uVar1) - (uVar2 & ~uVar1);
    uVar7 = uVar7 + iVar9;
    uVar20 = uVar20 + iVar8;
    puVar4 = (uint *)((int)puVar4 + 2);
    uVar14 = DAT_4a01a9ac;
    if (iVar6 < 0) {
      return;
    }
joined_r0x4a01a6dc:
    while (uVar11 = DAT_4a01a9ac, 0 < iVar6) {
      uVar16 = (uint)*(ushort *)(iVar10 + (uVar5 & uVar7 >> 0xd | (uVar20 & uVar5) >> 0x14) * 2);
      uVar15 = (uint)*(ushort *)
                      (iVar10 + (uVar5 & uVar7 + iVar9 >> 0xd | (uVar20 + iVar8 & uVar5) >> 0x14) *
                                2);
      iVar6 = iVar6 + -2;
      uVar7 = uVar7 + iVar9 + iVar9;
      uVar20 = uVar20 + iVar8 + iVar8;
      uVar18 = *puVar4;
      uVar15 = (uint)*(ushort *)(iVar17 + ((uVar16 & 0xf00) >> 2 | (uVar16 & 0xf0) >> 3) * 2) |
               (uint)*(ushort *)(iVar17 + (uVar16 & 0xf) * 0x80) << 0xb |
               ((uint)*(ushort *)(iVar17 + ((uVar15 & 0xf00) >> 2 | (uVar15 & 0xf0) >> 3) * 2) |
               (uint)*(ushort *)(iVar17 + (uVar15 & 0xf) * 0x80) << 0xb) << 0x10;
      uVar16 = (uVar15 ^ uVar18 ^ uVar15 + uVar18) & DAT_4a01a9ac;
      uVar19 = (uVar16 >> 5) - (((DAT_4a01a9ac ^ DAT_4a01a9ac >> 5) & uVar16 >> 5) >> 1);
      if (CARRY4(uVar15,uVar18)) {
        uVar19 = uVar19 | 0x8000000;
      }
      DAT_4a01a9ac = uVar14;
      *puVar4 = uVar16;
      *puVar4 = (uVar15 + uVar18 | uVar16 - uVar19) - (uVar16 & ~(uVar16 - uVar19));
      puVar4 = puVar4 + 1;
      uVar14 = DAT_4a01a9ac;
      DAT_4a01a9ac = uVar11;
    }
    DAT_4a01a9ac = uVar14;
  } while (-1 < iVar6);
  return;
}



// Address: 4a01a9b0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a01a9b0(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  uVar7 = param_1[3];
  iVar8 = param_1[4];
  iVar9 = param_1[5];
  uVar5 = param_1[6];
  iVar10 = param_1[7];
  iVar16 = *(int *)PTR_LAB_4a01ad58;
  uVar14 = param_1[9];
  uVar19 = param_1[2];
  puVar4 = (uint *)param_1[1];
  iVar6 = *param_1 + -1;
  if ((uVar14 & 0x80000000) == 0) {
    iVar3 = param_1[10];
    if (((uint)puVar4 & 3) == 0) goto joined_r0x4a01ac34;
    do {
      uVar11 = *(uint *)(iVar10 + (uVar5 & uVar7 >> 0xe | (uVar19 & uVar5) >> 0x14) * 4);
      iVar12 = iVar16 + ((uVar14 & 0xf800000) >> 0xc);
      uVar11 = (uint)*(ushort *)(iVar12 + ((uVar11 & 0xffff) >> 0xb | (uVar11 & 0xf8) << 2) * 2) |
               (uint)*(ushort *)(iVar12 + (uVar11 >> 0xe & 0x3e0) * 2) << 0xb;
      uVar17 = (ushort)*puVar4 + uVar11;
      uVar15 = (uVar11 ^ uVar17 ^ (uint)(ushort)*puVar4) & 0x10820;
      uVar11 = uVar15 >> 5;
      uVar2 = (ushort)uVar15;
      uVar1 = uVar2 - ((short)uVar11 - (short)((uVar11 & 0x40) >> 1));
      *(ushort *)puVar4 = ((ushort)uVar17 | uVar1) - (uVar2 & ~uVar1);
      iVar6 = iVar6 + -1;
      uVar7 = uVar7 + iVar9;
      uVar19 = uVar19 + iVar8;
      uVar14 = uVar14 + iVar3;
      puVar4 = (uint *)((int)puVar4 + 2);
      if (iVar6 < 0) {
        return;
      }
joined_r0x4a01ac34:
      while (0 < iVar6) {
        uVar15 = uVar14 + iVar3;
        uVar11 = *(uint *)(iVar10 + (uVar5 & uVar7 >> 0xe | (uVar19 & uVar5) >> 0x14) * 4);
        uVar17 = *(uint *)(iVar10 + (uVar5 & uVar7 + iVar9 >> 0xe | (uVar19 + iVar8 & uVar5) >> 0x14
                                    ) * 4);
        iVar13 = iVar16 + ((uVar14 & 0xf800000) >> 0xc);
        iVar6 = iVar6 + -2;
        uVar14 = uVar15 + iVar3;
        iVar12 = iVar16 + ((uVar15 & 0xf800000) >> 0xc);
        uVar18 = *puVar4;
        uVar11 = (uint)*(ushort *)(iVar13 + ((uVar11 & 0xffff) >> 0xb | (uVar11 & 0xf8) << 2) * 2) |
                 (uint)*(ushort *)(iVar13 + (uVar11 >> 0xe & 0x3e0) * 2) << 0xb |
                 ((uint)*(ushort *)(iVar12 + ((uVar17 & 0xffff) >> 0xb | (uVar17 & 0xf8) << 2) * 2)
                 | (uint)*(ushort *)(iVar12 + (uVar17 >> 0xe & 0x3e0) * 2) << 0xb) << 0x10;
        uVar15 = (uVar11 ^ uVar18 ^ uVar11 + uVar18) & DAT_4a01ad5c;
        uVar17 = (uVar15 >> 5) - (((DAT_4a01ad5c ^ DAT_4a01ad5c >> 5) & uVar15 >> 5) >> 1);
        if (CARRY4(uVar11,uVar18)) {
          uVar17 = uVar17 | 0x8000000;
        }
        *puVar4 = uVar15;
        uVar7 = uVar7 + iVar9 + iVar9;
        uVar19 = uVar19 + iVar8 + iVar8;
        *puVar4 = (uVar11 + uVar18 | uVar15 - uVar17) - (uVar15 & ~(uVar15 - uVar17));
        puVar4 = puVar4 + 1;
      }
    } while (-1 < iVar6);
    return;
  }
  iVar16 = iVar16 + ((uVar14 & 0xf800000) >> 0xc);
  if (((uint)puVar4 & 3) == 0) goto joined_r0x4a01aa90;
  do {
    uVar14 = *(uint *)(iVar10 + (uVar5 & uVar7 >> 0xe | (uVar19 & uVar5) >> 0x14) * 4);
    iVar6 = iVar6 + -1;
    uVar14 = (uint)*(ushort *)(iVar16 + ((uVar14 & 0xffff) >> 0xb | (uVar14 & 0xf8) << 2) * 2) |
             (uint)*(ushort *)(iVar16 + (uVar14 >> 0xe & 0x3e0) * 2) << 0xb;
    uVar7 = uVar7 + iVar9;
    uVar19 = uVar19 + iVar8;
    uVar15 = (ushort)*puVar4 + uVar14;
    uVar11 = (uVar14 ^ uVar15 ^ (uint)(ushort)*puVar4) & 0x10820;
    uVar14 = uVar11 >> 5;
    uVar2 = (ushort)uVar11;
    uVar1 = uVar2 - ((short)uVar14 - (short)((uVar14 & 0x40) >> 1));
    *(ushort *)puVar4 = ((ushort)uVar15 | uVar1) - (uVar2 & ~uVar1);
    puVar4 = (uint *)((int)puVar4 + 2);
    if (iVar6 < 0) {
      return;
    }
joined_r0x4a01aa90:
    while (0 < iVar6) {
      uVar11 = *(uint *)(iVar10 + (uVar5 & uVar7 >> 0xe | (uVar19 & uVar5) >> 0x14) * 4);
      uVar14 = *(uint *)(iVar10 + (uVar5 & uVar7 + iVar9 >> 0xe | (uVar19 + iVar8 & uVar5) >> 0x14)
                                  * 4);
      iVar6 = iVar6 + -2;
      uVar7 = uVar7 + iVar9 + iVar9;
      uVar15 = *puVar4;
      uVar14 = (uint)*(ushort *)(iVar16 + ((uVar11 & 0xffff) >> 0xb | (uVar11 & 0xf8) << 2) * 2) |
               (uint)*(ushort *)(iVar16 + (uVar11 >> 0xe & 0x3e0) * 2) << 0xb |
               ((uint)*(ushort *)(iVar16 + ((uVar14 & 0xffff) >> 0xb | (uVar14 & 0xf8) << 2) * 2) |
               (uint)*(ushort *)(iVar16 + (uVar14 >> 0xe & 0x3e0) * 2) << 0xb) << 0x10;
      uVar11 = (uVar14 ^ uVar15 ^ uVar14 + uVar15) & DAT_4a01ad5c;
      uVar17 = (uVar11 >> 5) - (((DAT_4a01ad5c ^ DAT_4a01ad5c >> 5) & uVar11 >> 5) >> 1);
      if (CARRY4(uVar14,uVar15)) {
        uVar17 = uVar17 | 0x8000000;
      }
      *puVar4 = uVar11;
      uVar19 = uVar19 + iVar8 + iVar8;
      *puVar4 = (uVar14 + uVar15 | uVar11 - uVar17) - (uVar11 & ~(uVar11 - uVar17));
      puVar4 = puVar4 + 1;
    }
  } while (-1 < iVar6);
  return;
}




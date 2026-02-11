
undefined8 DummyWriter(void)

{
  return 1;
}



undefined8 WebPMemoryWrite(void *param_1,size_t param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  void *__dest;
  ulong uVar3;
  
  plVar1 = *(long **)(param_3 + 0x68);
  if (plVar1 != (long *)0x0) {
    uVar3 = plVar1[1] + param_2;
    if ((ulong)plVar1[2] < uVar3) {
      uVar2 = plVar1[2] * 2;
      if (uVar3 <= uVar2) {
        uVar3 = uVar2;
      }
      if (uVar3 < 0x2000) {
        uVar3 = 0x2000;
      }
      __dest = (void *)WebPSafeMalloc(uVar3,1);
      if (__dest == (void *)0x0) {
        return 0;
      }
      if (plVar1[1] != 0) {
        memcpy(__dest,(void *)*plVar1,plVar1[1]);
      }
      WebPSafeFree(*plVar1);
      *plVar1 = (long)__dest;
      plVar1[2] = uVar3;
    }
    if (param_2 != 0) {
      memcpy((void *)(plVar1[1] + *plVar1),param_1,param_2);
      plVar1[1] = plVar1[1] + param_2;
    }
  }
  return 1;
}



undefined8
Encode(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,code *param_5,
      undefined4 param_6,undefined8 *param_7)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  byte bVar5;
  undefined4 local_1e8 [32];
  undefined8 local_168;
  undefined1 local_160 [16];
  undefined4 local_148 [2];
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_100;
  undefined4 local_f8;
  code *local_e8;
  undefined8 *local_e0;
  undefined1 local_68 [16];
  long local_40;
  
  bVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_7 != (undefined8 *)0x0) {
    iVar1 = WebPConfigInitInternal(local_1e8,0,0x20f);
    if (iVar1 != 0) {
      puVar4 = (undefined8 *)local_148;
      for (lVar3 = 0x20; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
      }
      local_e8 = DummyWriter;
      WebPEncodingSetError(local_148,0);
      local_e8 = WebPMemoryWrite;
      local_e0 = &local_168;
      local_168 = 0;
      local_160 = (undefined1  [16])0x0;
      local_1e8[0] = param_6;
      local_148[0] = param_6;
      local_140 = param_2;
      local_13c = param_3;
      iVar1 = (*param_5)(local_148,param_1,param_4);
      if (iVar1 == 0) {
        WebPSafeFree(local_68._0_8_);
        WebPSafeFree(local_68._8_8_);
      }
      else {
        iVar1 = WebPEncode(local_1e8,local_148);
        WebPSafeFree(local_68._0_8_);
        WebPSafeFree(local_68._8_8_);
        local_100 = 0;
        local_f8 = 0;
        local_118 = 0;
        local_128 = 0;
        local_120 = 0;
        local_110 = 0;
        local_68 = (undefined1  [16])0x0;
        local_138 = (undefined1  [16])0x0;
        if (iVar1 != 0) {
          *param_7 = local_168;
          uVar2 = local_160._0_8_;
          goto LAB_0010030e;
        }
      }
      local_68 = (undefined1  [16])0x0;
      local_f8 = 0;
      local_100 = 0;
      local_110 = 0;
      local_118 = 0;
      local_120 = 0;
      local_128 = 0;
      local_138 = (undefined1  [16])0x0;
      WebPSafeFree(local_168);
      *param_7 = 0;
      uVar2 = 0;
      goto LAB_0010030e;
    }
  }
  uVar2 = 0;
LAB_0010030e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 WebPPictureInitInternal(undefined8 *param_1,int param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if (param_2 >> 8 != 2) {
    return 0;
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[0x1f] = 0;
    puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
    for (uVar1 = (ulong)(((int)param_1 -
                         (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x100U >>
                        3); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    param_1[0xc] = 0x100000;
    WebPEncodingSetError(param_1,0);
    return 1;
  }
  return 1;
}



undefined8 WebPValidatePicture(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((0 < *(int *)(param_1 + 8)) && (0 < *(int *)(param_1 + 0xc))) {
    if ((*(uint *)(param_1 + 4) & 0xfffffffb) == 0) {
      return 1;
    }
    uVar1 = WebPEncodingSetError(param_1,4);
    return uVar1;
  }
  uVar1 = WebPEncodingSetError(param_1,5);
  return uVar1;
}



void WebPPictureResetBuffers(long param_1)

{
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 (*) [16])(param_1 + 0xe0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
  return;
}



undefined8 WebPPictureAllocARGB(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = WebPValidatePicture();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  WebPSafeFree(*(undefined8 *)(param_1 + 0xe8));
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  lVar4 = WebPSafeMalloc((long)iVar1 * (long)iVar2 + 0x1f,4);
  if (lVar4 != 0) {
    *(long *)(param_1 + 0xe8) = lVar4;
    *(int *)(param_1 + 0x50) = iVar1;
    *(ulong *)(param_1 + 0x48) = lVar4 + 0x1fU & 0xffffffffffffffe0;
    return 1;
  }
  uVar3 = WebPEncodingSetError(param_1,1);
  return uVar3;
}



undefined8 WebPPictureAllocYUVA(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  
  uVar1 = *(uint *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0xc);
  uVar4 = WebPValidatePicture();
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  WebPSafeFree(*(undefined8 *)(param_1 + 0xe0));
  *(undefined8 *)(param_1 + 0xe0) = 0;
  lVar10 = (long)iVar2 * (long)iVar3;
  bVar11 = (uVar1 & 4) != 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar6 = 0;
  if (bVar11) {
    iVar6 = iVar2;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  lVar9 = 0;
  if (bVar11) {
    lVar9 = lVar10;
  }
  *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
  if ((iVar2 < 1) || (iVar3 < 1)) {
    uVar4 = 5;
  }
  else {
    lVar7 = (long)iVar2 + 1 >> 1;
    lVar8 = ((long)iVar3 + 1 >> 1) * lVar7;
    lVar5 = WebPSafeMalloc(lVar10 + lVar8 * 2 + lVar9,1);
    if (lVar5 != 0) {
      *(long *)(param_1 + 0xe0) = lVar5;
      *(long *)(param_1 + 0x10) = lVar5;
      *(long *)(param_1 + 0x18) = lVar5 + lVar10;
      lVar10 = lVar5 + lVar10 + lVar8;
      *(int *)(param_1 + 0x38) = iVar6;
      *(long *)(param_1 + 0x20) = lVar10;
      *(ulong *)(param_1 + 0x28) = CONCAT44((int)lVar7,iVar2);
      if (lVar9 != 0) {
        *(long *)(param_1 + 0x30) = lVar10 + lVar8;
      }
      return 1;
    }
    uVar4 = 1;
  }
  uVar4 = WebPEncodingSetError(param_1,uVar4);
  return uVar4;
}



undefined8 WebPPictureAlloc(int *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (int *)0x0) {
    return 1;
  }
  WebPSafeFree(*(undefined8 *)(param_1 + 0x38));
  WebPSafeFree(*(undefined8 *)(param_1 + 0x3a));
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  *(undefined1 (*) [16])(param_1 + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
  if (*param_1 == 0) {
    uVar1 = WebPPictureAllocYUVA();
    return uVar1;
  }
  uVar1 = WebPPictureAllocARGB(param_1);
  return uVar1;
}



void WebPPictureFree(long param_1)

{
  if (param_1 != 0) {
    WebPSafeFree(*(undefined8 *)(param_1 + 0xe0));
    WebPSafeFree(*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined1 (*) [16])(param_1 + 0xe0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
    return;
  }
  return;
}



void WebPMemoryWriterInit(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  return;
}



void WebPMemoryWriterClear(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    WebPSafeFree(*param_1);
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
    return;
  }
  return;
}



void WebPEncodeRGB(void)

{
  Encode();
  return;
}



void WebPEncodeRGBA(void)

{
  Encode();
  return;
}



void WebPEncodeBGR(void)

{
  Encode();
  return;
}



void WebPEncodeBGRA(void)

{
  Encode();
  return;
}



void WebPEncodeLosslessRGB(void)

{
  Encode(_LC0);
  return;
}



void WebPEncodeLosslessRGBA(void)

{
  Encode(_LC0);
  return;
}



void WebPEncodeLosslessBGR(void)

{
  Encode(_LC0);
  return;
}



void WebPEncodeLosslessBGRA(void)

{
  Encode(_LC0);
  return;
}



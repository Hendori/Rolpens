
undefined8 BitWriterResize(long param_1,long param_2)

{
  void *__dest;
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_2 + *(long *)(param_1 + 0x18);
  if (*(ulong *)(param_1 + 0x20) < uVar2) {
    uVar1 = *(ulong *)(param_1 + 0x20) * 2;
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    if (uVar1 < 0x400) {
      uVar1 = 0x400;
    }
    __dest = (void *)WebPSafeMalloc(1,uVar1);
    if (__dest == (void *)0x0) {
      *(undefined4 *)(param_1 + 0x28) = 1;
      return 0;
    }
    if (*(size_t *)(param_1 + 0x18) != 0) {
      memcpy(__dest,*(void **)(param_1 + 0x10),*(size_t *)(param_1 + 0x18));
    }
    WebPSafeFree(*(undefined8 *)(param_1 + 0x10));
    *(void **)(param_1 + 0x10) = __dest;
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return 1;
}



void Flush(long param_1)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  bVar4 = (char)*(int *)(param_1 + 0xc) + 8;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
  uVar8 = *(int *)(param_1 + 4) >> (bVar4 & 0x1f);
  iVar2 = *(int *)(param_1 + 8) + 1;
  *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) - (uVar8 << (bVar4 & 0x1f));
  if ((uVar8 & 0xff) == 0xff) {
    *(int *)(param_1 + 8) = iVar2;
    return;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  iVar2 = BitWriterResize(param_1,(long)iVar2);
  if (iVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if ((uVar8 & 0x100) == 0) {
    uVar5 = 0xff;
    lVar6 = lVar7 + 1;
    if (*(int *)(param_1 + 8) < 1) goto LAB_00100123;
  }
  else if (lVar7 == 0) {
    lVar6 = 1;
    if (*(int *)(param_1 + 8) < 1) goto LAB_00100123;
    uVar5 = 0;
  }
  else {
    pcVar1 = (char *)(lVar3 + -1 + lVar7);
    *pcVar1 = *pcVar1 + '\x01';
    if (*(int *)(param_1 + 8) < 1) {
      lVar3 = *(long *)(param_1 + 0x10);
      lVar6 = lVar7 + 1;
      goto LAB_00100123;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    uVar5 = 0;
  }
  while( true ) {
    *(undefined1 *)(lVar3 + lVar7) = uVar5;
    iVar2 = *(int *)(param_1 + 8) + -1;
    *(int *)(param_1 + 8) = iVar2;
    if (iVar2 < 1) break;
    lVar3 = *(long *)(param_1 + 0x10);
    lVar7 = lVar7 + 1;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  lVar6 = lVar7 + 2;
  lVar7 = lVar7 + 1;
LAB_00100123:
  *(char *)(lVar3 + lVar7) = (char)uVar8;
  *(long *)(param_1 + 0x18) = lVar6;
  return;
}



undefined8 VP8LBitWriterResize(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  void *__dest;
  size_t __n;
  ulong uVar3;
  
  __n = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
  uVar3 = param_2 + __n;
  uVar2 = *(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x10);
  if ((uVar2 == 0) || (uVar2 < uVar3)) {
    uVar2 = uVar2 * 3 >> 1;
    if (uVar2 < uVar3) {
      uVar2 = uVar3;
    }
    lVar1 = (uVar2 & 0xfffffffffffffc00) + 0x400;
    __dest = (void *)WebPSafeMalloc(1,lVar1);
    if (__dest == (void *)0x0) {
      *(undefined4 *)(param_1 + 0x28) = 1;
      return 0;
    }
    if (__n != 0) {
      memcpy(__dest,*(void **)(param_1 + 0x10),__n);
    }
    WebPSafeFree(*(undefined8 *)(param_1 + 0x10));
    *(void **)(param_1 + 0x10) = __dest;
    *(size_t *)(param_1 + 0x18) = __n + (long)__dest;
    *(long *)(param_1 + 0x20) = (long)__dest + lVar1;
  }
  return 1;
}



int VP8PutBit(uint *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = (int)(param_3 * *param_1) >> 8;
  if (param_2 != 0) {
    param_1[1] = param_1[1] + uVar3 + 1;
    uVar3 = *param_1 - (uVar3 + 1);
  }
  *param_1 = uVar3;
  if ((int)uVar3 < 0x7f) {
    bVar1 = kNorm[(int)uVar3];
    bVar2 = kNewRange[(int)uVar3];
    param_1[1] = param_1[1] << (bVar1 & 0x1f);
    uVar3 = (uint)bVar1 + param_1[3];
    *param_1 = (uint)bVar2;
    param_1[3] = uVar3;
    if (0 < (int)uVar3) {
      Flush();
      return param_2;
    }
  }
  return param_2;
}



int VP8PutBitUniform(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (int)*param_1 >> 1;
  if (param_2 != 0) {
    param_1[1] = param_1[1] + uVar2 + 1;
    uVar2 = *param_1 - (uVar2 + 1);
  }
  *param_1 = uVar2;
  if ((int)uVar2 < 0x7f) {
    uVar1 = param_1[3];
    param_1[1] = param_1[1] << 1;
    *param_1 = (uint)(byte)kNewRange[(int)uVar2];
    param_1[3] = uVar1 + 1;
    if (0 < (int)(uVar1 + 1)) {
      Flush();
      return param_2;
    }
  }
  return param_2;
}



void VP8PutBits(uint *param_1,uint param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 1 << (param_3 - 1U & 0x1f);
  do {
    uVar1 = (int)*param_1 >> 1;
    if ((param_2 & uVar2) != 0) {
      param_1[1] = param_1[1] + uVar1 + 1;
      uVar1 = *param_1 - (uVar1 + 1);
    }
    *param_1 = uVar1;
    if ((int)uVar1 < 0x7f) {
      param_1[1] = param_1[1] << 1;
      *param_1 = (uint)(byte)kNewRange[(int)uVar1];
      uVar1 = param_1[3];
      param_1[3] = uVar1 + 1;
      if (0 < (int)(uVar1 + 1)) {
        Flush(param_1);
      }
    }
    uVar2 = uVar2 >> 1;
  } while (uVar2 != 0);
  return;
}



void VP8PutSignedBits(uint *param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (int)*param_1 >> 1;
  if (param_2 == 0) {
    *param_1 = uVar2;
    if (0x7e < (int)uVar2) {
      return;
    }
    param_1[1] = param_1[1] << 1;
    *param_1 = (uint)(byte)kNewRange[(int)uVar2];
    uVar2 = param_1[3];
    param_1[3] = uVar2 + 1;
    if (0 < (int)(uVar2 + 1)) {
      Flush();
      return;
    }
    return;
  }
  uVar3 = *param_1 - (uVar2 + 1);
  uVar2 = param_1[1] + uVar2 + 1;
  *param_1 = uVar3;
  param_1[1] = uVar2;
  if ((int)uVar3 < 0x7f) {
    bVar1 = kNewRange[(int)uVar3];
    param_1[1] = uVar2 * 2;
    *param_1 = (uint)bVar1;
    uVar2 = param_1[3];
    param_1[3] = uVar2 + 1;
    if (0 < (int)(uVar2 + 1)) {
      Flush();
      if (-1 < param_2) {
        VP8PutBits(param_1,param_2 * 2,param_3 + 1);
        return;
      }
      VP8PutBits(param_1,param_2 * -2 + 1,param_3 + 1);
      return;
    }
  }
  if (-1 < param_2) {
    VP8PutBits(param_1,param_2 * 2,param_3 + 1);
    return;
  }
  VP8PutBits(param_1,param_2 * -2 + 1,param_3 + 1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 VP8BitWriterInit(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _UNK_001009a8;
  uVar2 = __LC0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[2] = 0;
  *param_1 = uVar2;
  param_1[1] = uVar1;
  *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
  if (param_2 == 0) {
    return 1;
  }
  uVar2 = BitWriterResize();
  return uVar2;
}



undefined8 VP8BitWriterFinish(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 1 << (8U - (char)param_1[3] & 0x1f);
  do {
    uVar1 = (int)*param_1 >> 1;
    *param_1 = uVar1;
    if ((int)uVar1 < 0x7f) {
      param_1[1] = param_1[1] << 1;
      *param_1 = (uint)(byte)kNewRange[(int)uVar1];
      uVar1 = param_1[3];
      param_1[3] = uVar1 + 1;
      if (0 < (int)(uVar1 + 1)) {
        Flush(param_1);
      }
    }
    uVar2 = uVar2 >> 1;
  } while (uVar2 != 0);
  param_1[3] = 0;
  Flush(param_1);
  return *(undefined8 *)(param_1 + 4);
}



undefined8 VP8BitWriterAppend(long param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) != -8) {
    return 0;
  }
  iVar1 = BitWriterResize(param_1,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  memcpy((void *)(*(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x10)),param_2,param_3);
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + param_3;
  return 1;
}



void VP8BitWriterWipeOut(undefined1 (*param_1) [16])

{
  if (param_1 != (undefined1 (*) [16])0x0) {
    WebPSafeFree(*(undefined8 *)param_1[1]);
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
    param_1[2] = (undefined1  [16])0x0;
    return;
  }
  return;
}



void VP8LBitWriterInit(undefined1 (*param_1) [16])

{
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  param_1[2] = (undefined1  [16])0x0;
  VP8LBitWriterResize();
  return;
}



undefined8 VP8LBitWriterClone(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  size_t __n;
  
  __n = param_1[3] - param_1[2];
  uVar2 = VP8LBitWriterResize(param_2,__n);
  if ((int)uVar2 != 0) {
    memcpy((void *)param_2[2],(void *)param_1[2],__n);
    *param_2 = *param_1;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
    uVar1 = *(undefined4 *)(param_1 + 5);
    param_2[3] = __n + param_2[2];
    *(undefined4 *)(param_2 + 5) = uVar1;
    uVar2 = 1;
  }
  return uVar2;
}



void VP8LBitWriterWipeOut(undefined1 (*param_1) [16])

{
  if (param_1 != (undefined1 (*) [16])0x0) {
    WebPSafeFree(*(undefined8 *)param_1[1]);
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
    param_1[2] = (undefined1  [16])0x0;
    return;
  }
  return;
}



void VP8LBitWriterReset(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  param_2[3] = (param_1[3] - param_1[2]) + param_2[2];
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 5);
  return;
}



void VP8LBitWriterSwap(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = param_2[1];
  uVar3 = *param_1;
  uVar1 = *(undefined4 *)(param_1 + 1);
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar7 = param_2[3];
  uVar4 = param_1[4];
  uVar2 = *(undefined4 *)(param_1 + 5);
  param_1[2] = param_2[2];
  param_1[3] = uVar7;
  uVar7 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  *param_2 = uVar3;
  *(undefined4 *)(param_2 + 1) = uVar1;
  param_2[4] = uVar4;
  *(undefined4 *)(param_2 + 5) = uVar2;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  return;
}



void VP8LPutBitsFlushBits(ulong *param_1)

{
  ulong uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1[3];
  puVar3 = puVar4 + 1;
  if ((undefined4 *)param_1[4] < puVar3) {
    iVar2 = VP8LBitWriterResize(param_1,(long)param_1[4] + (0x8000 - param_1[2]));
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 5) = 1;
      param_1[3] = param_1[2];
      return;
    }
    puVar4 = (undefined4 *)param_1[3];
    puVar3 = puVar4 + 1;
  }
  uVar1 = *param_1;
  *puVar4 = (int)uVar1;
  *(int *)(param_1 + 1) = (int)param_1[1] + -0x20;
  param_1[3] = (ulong)puVar3;
  *param_1 = uVar1 >> 0x20;
  return;
}



void VP8LPutBitsInternal(ulong *param_1,ulong param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  ulong uVar5;
  
  if (param_3 < 1) {
    return;
  }
  iVar4 = (int)param_1[1];
  uVar5 = *param_1;
  if (0x1f < iVar4) {
    puVar3 = (undefined4 *)param_1[3];
    do {
      puVar2 = puVar3 + 1;
      if ((undefined4 *)param_1[4] < puVar2) {
        iVar1 = VP8LBitWriterResize(param_1,(long)param_1[4] + (0x8000 - param_1[2]));
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 5) = 1;
          param_1[3] = param_1[2];
          return;
        }
        puVar3 = (undefined4 *)param_1[3];
        puVar2 = puVar3 + 1;
      }
      iVar4 = iVar4 + -0x20;
      *puVar3 = (int)uVar5;
      uVar5 = uVar5 >> 0x20;
      param_1[3] = (ulong)puVar2;
      puVar3 = puVar2;
    } while (0x1f < iVar4);
  }
  *(int *)(param_1 + 1) = param_3 + iVar4;
  *param_1 = (param_2 & 0xffffffff) << ((byte)iVar4 & 0x3f) | uVar5;
  return;
}



ulong VP8LBitWriterFinish(ulong *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = VP8LBitWriterResize(param_1,(long)((int)param_1[1] + 7 >> 3));
  if (iVar2 != 0) {
    if (0 < (int)param_1[1]) {
      uVar3 = *param_1;
      do {
        puVar1 = (undefined1 *)param_1[3];
        param_1[3] = (ulong)(puVar1 + 1);
        *puVar1 = (char)uVar3;
        uVar3 = *param_1 >> 8;
        iVar2 = (int)param_1[1] + -8;
        *param_1 = uVar3;
        *(int *)(param_1 + 1) = iVar2;
      } while (0 < iVar2);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return param_1[2];
}



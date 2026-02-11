
long ChunkEmit(uint *param_1,ulong *param_2)

{
  uint uVar1;
  ulong __n;
  
  __n = *(ulong *)(param_1 + 4);
  uVar1 = *param_1;
  *param_2 = (((((((__n >> 0x18 & 0xff) << 8 | __n >> 0x10 & 0xff) << 8 | __n >> 8 & 0xff) << 8 |
                __n & 0xff) << 8 | (ulong)(uVar1 >> 0x18)) << 8 | (ulong)(uVar1 >> 0x10 & 0xff)) <<
              8 | (ulong)(uVar1 >> 8 & 0xff)) << 8 | (ulong)(uVar1 & 0xff);
  memcpy(param_2 + 1,*(void **)(param_1 + 2),__n);
  if ((__n & 1) != 0) {
    *(undefined1 *)((long)param_2 + __n + 8) = 0;
  }
  return (long)param_2 + (ulong)((int)*(undefined8 *)(param_1 + 4) + 1U & 0xfffffffe) + 8;
}



undefined8 WebPGetMuxVersion(void)

{
  return 0x10400;
}



void ChunkInit(undefined1 (*param_1) [16])

{
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  return;
}



undefined8 ChunkRelease(undefined1 (*param_1) [16])

{
  undefined8 uVar1;
  
  if (param_1 != (undefined1 (*) [16])0x0) {
    if (*(int *)(*param_1 + 4) != 0) {
      WebPFree(*(undefined8 *)(*param_1 + 8));
    }
    uVar1 = *(undefined8 *)(param_1[1] + 8);
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
    return uVar1;
  }
  return 0;
}



int ChunkGetIndexFromTag(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(kChunks + 0xc);
  iVar1 = 0;
  iVar3 = 0x58385056;
  do {
    if (param_1 == iVar3) {
      return iVar1;
    }
    iVar3 = *piVar2;
    piVar2 = piVar2 + 3;
    iVar1 = iVar1 + 1;
  } while (iVar3 != 0);
  return 9;
}



undefined4 ChunkGetIdFromTag(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(kChunks + 0xc);
  iVar2 = 0;
  iVar1 = 0x58385056;
  do {
    if (param_1 == iVar1) {
      return *(undefined4 *)(kChunks + (long)iVar2 * 0xc + 4);
    }
    iVar1 = *piVar3;
    piVar3 = piVar3 + 3;
    iVar2 = iVar2 + 1;
  } while (iVar1 != 0);
  return 9;
}



uint ChunkGetTagFromFourCC(char *param_1)

{
  return (int)param_1[1] << 8 | (int)param_1[2] << 0x10 | (int)*param_1 | (int)param_1[3] << 0x18;
}



int ChunkGetIndexFromFourCC(char *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = 0x58385056;
  puVar2 = (uint *)(kChunks + 0xc);
  iVar1 = 0;
  do {
    if (((int)param_1[1] << 8 | (int)param_1[2] << 0x10 | (int)*param_1 | (int)param_1[3] << 0x18)
        == uVar3) {
      return iVar1;
    }
    uVar3 = *puVar2;
    puVar2 = puVar2 + 3;
    iVar1 = iVar1 + 1;
  } while (uVar3 != 0);
  return 9;
}



int * ChunkSearchList(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    do {
      if (param_3 == *param_1) {
        iVar2 = param_2 + -1;
        do {
          if (iVar2 == 0) {
            return param_1;
          }
          piVar1 = *(int **)(param_1 + 6);
          while( true ) {
            if (piVar1 == (int *)0x0) {
              if (param_2 != 0) {
                param_1 = (int *)0x0;
              }
              return param_1;
            }
            if (param_3 == *piVar1) break;
            piVar1 = *(int **)(piVar1 + 6);
          }
          iVar2 = iVar2 + -1;
          param_1 = piVar1;
        } while( true );
      }
      param_1 = *(int **)(param_1 + 6);
    } while (param_1 != (int *)0x0);
    param_1 = (int *)0x0;
  }
  return param_1;
}



undefined8 ChunkAssignData(int *param_1,long *param_2,int param_3,int param_4)

{
  long lVar1;
  void *__dest;
  
  if ((param_4 == 0x4d494e41) || (param_4 == 0x58385056)) {
    ChunkRelease(param_1);
    if (param_2 == (long *)0x0) goto LAB_001002e2;
  }
  else {
    ChunkRelease();
    if (param_2 == (long *)0x0) goto LAB_001002e2;
    if (param_3 == 0) {
      lVar1 = param_2[1];
      *(long *)(param_1 + 2) = *param_2;
      *(long *)(param_1 + 4) = lVar1;
      goto LAB_001002e2;
    }
  }
  *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    __dest = (void *)WebPMalloc();
    *(void **)(param_1 + 2) = __dest;
    if (__dest == (void *)0x0) {
      return 0xfffffffd;
    }
    memcpy(__dest,(void *)*param_2,param_2[1]);
    *(long *)(param_1 + 4) = param_2[1];
  }
  param_1[1] = 1;
LAB_001002e2:
  *param_1 = param_4;
  return 1;
}



undefined8 ChunkSetHead(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*param_2 != 0) {
    return 0;
  }
  puVar1 = (undefined8 *)WebPSafeMalloc(1,0x20);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0xfffffffd;
  }
  else {
    uVar2 = param_1[1];
    *puVar1 = *param_1;
    puVar1[1] = uVar2;
    uVar2 = param_1[3];
    puVar1[2] = param_1[2];
    puVar1[3] = uVar2;
    *(undefined4 *)((long)param_1 + 4) = 0;
    puVar1[3] = 0;
    *param_2 = (long)puVar1;
    uVar2 = 1;
  }
  return uVar2;
}



undefined8 ChunkAppend(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  plVar1 = (long *)*param_2;
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    puVar5 = (undefined8 *)WebPSafeMalloc(1,0x20);
    if (puVar5 == (undefined8 *)0x0) {
      return 0xfffffffd;
    }
    uVar3 = param_1[1];
    *puVar5 = *param_1;
    puVar5[1] = uVar3;
    uVar3 = param_1[3];
    puVar5[2] = param_1[2];
    puVar5[3] = uVar3;
    *(undefined4 *)((long)param_1 + 4) = 0;
    puVar5[3] = 0;
    *plVar1 = (long)puVar5;
  }
  else {
    do {
      lVar4 = lVar2;
      lVar2 = *(long *)(lVar4 + 0x18);
    } while (*(long *)(lVar4 + 0x18) != 0);
    puVar5 = (undefined8 *)WebPSafeMalloc(1,0x20);
    if (puVar5 == (undefined8 *)0x0) {
      return 0xfffffffd;
    }
    uVar3 = param_1[1];
    *puVar5 = *param_1;
    puVar5[1] = uVar3;
    uVar3 = param_1[3];
    puVar5[2] = param_1[2];
    puVar5[3] = uVar3;
    *(undefined4 *)((long)param_1 + 4) = 0;
    puVar5[3] = 0;
    *(undefined8 **)(lVar4 + 0x18) = puVar5;
    *param_2 = lVar4 + 0x18;
  }
  return 1;
}



undefined8 ChunkDelete(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ChunkRelease();
  WebPSafeFree(param_1);
  return uVar1;
}



void ChunkListDelete(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    lVar2 = ChunkRelease(lVar1);
    WebPSafeFree(lVar1);
    *param_1 = lVar2;
    lVar1 = lVar2;
  }
  return;
}



undefined8 ChunkListEmit(long param_1,undefined8 param_2)

{
  if (param_1 == 0) {
    return param_2;
  }
  do {
    param_2 = ChunkEmit(param_1,param_2);
    param_1 = *(long *)(param_1 + 0x18);
  } while (param_1 != 0);
  return param_2;
}



long ChunkListDiskSize(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  if (param_1 != 0) {
    do {
      puVar1 = (undefined8 *)(param_1 + 0x10);
      param_1 = *(long *)(param_1 + 0x18);
      lVar2 = lVar2 + 8 + (ulong)((int)*puVar1 + 1U & 0xfffffffe);
    } while (param_1 != 0);
  }
  return lVar2;
}



void MuxImageInit(undefined1 (*param_1) [16])

{
  *(undefined8 *)param_1[3] = 0;
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  param_1[2] = (undefined1  [16])0x0;
  return;
}



undefined8 MuxImageRelease(undefined1 (*param_1) [16])

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == (undefined1 (*) [16])0x0) {
    return 0;
  }
  lVar2 = *(long *)*param_1;
  while (lVar2 != 0) {
    lVar3 = ChunkRelease(lVar2);
    WebPSafeFree(lVar2);
    *(long *)*param_1 = lVar3;
    lVar2 = lVar3;
  }
  lVar2 = *(long *)(*param_1 + 8);
  while (lVar2 != 0) {
    lVar3 = ChunkRelease(lVar2);
    WebPSafeFree(lVar2);
    *(long *)(*param_1 + 8) = lVar3;
    lVar2 = lVar3;
  }
  lVar2 = *(long *)param_1[1];
  while (lVar2 != 0) {
    lVar3 = ChunkRelease(lVar2);
    WebPSafeFree(lVar2);
    *(long *)param_1[1] = lVar3;
    lVar2 = lVar3;
  }
  lVar2 = *(long *)(param_1[1] + 8);
  while (lVar2 != 0) {
    lVar3 = ChunkRelease(lVar2);
    WebPSafeFree(lVar2);
    *(long *)(param_1[1] + 8) = lVar3;
    lVar2 = lVar3;
  }
  uVar1 = *(undefined8 *)param_1[3];
  *(undefined8 *)param_1[3] = 0;
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  param_1[2] = (undefined1  [16])0x0;
  return uVar1;
}



int MuxImageCount(undefined8 *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = 0;
  if (param_1 != (undefined8 *)0x0) {
    if (param_2 != 10) {
LAB_001006b0:
      if (param_2 == 5) goto LAB_00100760;
LAB_001006b9:
      puVar3 = param_1 + 2;
      if ((param_2 != 6) && (puVar3 = param_1, param_2 != 3)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      do {
        if ((int *)*puVar3 == (int *)0x0) {
LAB_001006d6:
          param_1 = (undefined8 *)param_1[6];
          if (param_1 == (undefined8 *)0x0) {
            return iVar6;
          }
          goto LAB_001006b0;
        }
        piVar5 = (int *)(kChunks + 0xc);
        iVar4 = 0;
        iVar2 = 0x58385056;
        while (*(int *)*puVar3 != iVar2) {
          iVar2 = *piVar5;
          piVar5 = piVar5 + 3;
          iVar4 = iVar4 + 1;
          if (iVar2 == 0) goto LAB_001006d6;
        }
        if (param_2 != *(int *)(kChunks + (long)iVar4 * 0xc + 4)) goto LAB_001006d6;
        param_1 = (undefined8 *)param_1[6];
        iVar6 = iVar6 + 1;
        if (param_1 == (undefined8 *)0x0) {
          return iVar6;
        }
        if (param_2 != 5) goto LAB_001006b9;
LAB_00100760:
        puVar3 = param_1 + 1;
      } while( true );
    }
    do {
      if (param_1[6] == 0) {
        return iVar6 + 1;
      }
      param_1 = *(undefined8 **)(param_1[6] + 0x30);
      iVar6 = iVar6 + 2;
    } while (param_1 != (undefined8 *)0x0);
  }
  return iVar6;
}



undefined8 MuxImagePush(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar3 = *param_2;
  if ((lVar3 != 0) && (lVar1 = *(long *)(lVar3 + 0x30), *(long *)(lVar3 + 0x30) != 0)) {
    do {
      lVar6 = lVar3;
      lVar3 = lVar1;
      lVar1 = *(long *)(lVar3 + 0x30);
    } while (lVar1 != 0);
    param_2 = (long *)(lVar6 + 0x30);
  }
  puVar4 = (undefined8 *)WebPSafeMalloc(1,0x38);
  if (puVar4 == (undefined8 *)0x0) {
    uVar5 = 0xfffffffd;
  }
  else {
    uVar5 = param_1[1];
    *puVar4 = *param_1;
    puVar4[1] = uVar5;
    uVar5 = param_1[3];
    puVar4[2] = param_1[2];
    puVar4[3] = uVar5;
    uVar5 = param_1[4];
    uVar2 = param_1[5];
    puVar4[6] = 0;
    puVar4[4] = uVar5;
    puVar4[5] = uVar2;
    if (*param_2 == 0) {
      *param_2 = (long)puVar4;
    }
    else {
      *(undefined8 **)(*param_2 + 0x30) = puVar4;
    }
    uVar5 = 1;
  }
  return uVar5;
}



undefined8 MuxImageDelete(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = MuxImageRelease();
  WebPSafeFree(param_1);
  return uVar1;
}



undefined8 MuxImageDeleteNth(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (param_2 == 0) {
    if (lVar3 != 0) {
      param_2 = 0;
      lVar2 = lVar3;
      do {
        lVar2 = *(long *)(lVar2 + 0x30);
        param_2 = param_2 + 1;
      } while (lVar2 != 0);
      goto LAB_00100857;
    }
  }
  else if (lVar3 != 0) {
LAB_00100857:
    iVar1 = 1;
    if (param_2 != 1) {
      do {
        lVar2 = lVar3;
        lVar3 = *(long *)(lVar2 + 0x30);
        if (lVar3 == 0) {
          return 0;
        }
        iVar1 = iVar1 + 1;
      } while (param_2 != iVar1);
      param_1 = (long *)(lVar2 + 0x30);
    }
    lVar2 = MuxImageRelease(lVar3);
    WebPSafeFree(lVar3);
    *param_1 = lVar2;
    return 1;
  }
  return 0;
}



long MuxImageGetNth(long *param_1,int param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    if (lVar1 == 0) {
      return 0;
    }
    param_2 = 0;
    lVar3 = lVar1;
    do {
      lVar3 = *(long *)(lVar3 + 0x30);
      param_2 = param_2 + 1;
    } while (lVar3 != 0);
  }
  else if (lVar1 == 0) {
    return 0;
  }
  iVar2 = 1;
  if (param_2 != 1) {
    do {
      lVar1 = *(long *)(lVar1 + 0x30);
      if (lVar1 == 0) {
        return lVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != param_2);
  }
  *param_3 = lVar1;
  return 1;
}



long MuxImageDiskSize(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = 0;
  if (*param_1 != 0) {
    lVar4 = (ulong)((int)*(undefined8 *)(*param_1 + 0x10) + 1U & 0xfffffffe) + 8;
  }
  if (param_1[1] != 0) {
    lVar4 = lVar4 + 8 + (ulong)((int)*(undefined8 *)(param_1[1] + 0x10) + 1U & 0xfffffffe);
  }
  if (param_1[2] != 0) {
    lVar4 = lVar4 + 8 + (ulong)((int)*(undefined8 *)(param_1[2] + 0x10) + 1U & 0xfffffffe);
  }
  lVar3 = param_1[3];
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      puVar1 = (undefined8 *)(lVar3 + 0x10);
      lVar3 = *(long *)(lVar3 + 0x18);
      lVar2 = lVar2 + 8 + (ulong)((int)*puVar1 + 1U & 0xfffffffe);
    } while (lVar3 != 0);
    lVar4 = lVar4 + lVar2;
  }
  return lVar4;
}



ulong * MuxImageEmit(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint *puVar3;
  ulong __n;
  long lVar4;
  undefined8 *puVar5;
  
  puVar3 = (uint *)*param_1;
  if (puVar3 != (uint *)0x0) {
    lVar4 = MuxImageDiskSize();
    uVar2 = *puVar3;
    __n = *(ulong *)(puVar3 + 4);
    uVar1 = lVar4 - 8;
    *param_2 = (((((((uVar1 >> 0x18 & 0xff) << 8 | uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 8 & 0xff)
                   << 8 | uVar1 & 0xff) << 8 | (ulong)(uVar2 >> 0x18)) << 8 |
                (ulong)(uVar2 >> 0x10 & 0xff)) << 8 | (ulong)(uVar2 >> 8 & 0xff)) << 8 |
               (ulong)(uVar2 & 0xff);
    memcpy(param_2 + 1,*(void **)(puVar3 + 2),__n);
    if ((__n & 1) != 0) {
      *(undefined1 *)((long)param_2 + __n + 8) = 0;
    }
    param_2 = (ulong *)((long)param_2 +
                       (ulong)((int)*(undefined8 *)(puVar3 + 4) + 1U & 0xfffffffe) + 8);
  }
  if (param_1[1] != 0) {
    param_2 = (ulong *)ChunkEmit();
  }
  puVar5 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[2] != (undefined8 *)0x0) goto LAB_00100ab3;
  while (param_1 = (undefined8 *)param_1[3], puVar5 = param_1, param_1 != (undefined8 *)0x0) {
LAB_00100ab3:
    param_2 = (ulong *)ChunkEmit(puVar5);
  }
  return param_2;
}



int MuxHasAlpha(long param_1)

{
  int *piVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  do {
    piVar1 = (int *)(param_1 + 0x28);
    if (*piVar1 != 0) {
      return 1;
    }
    param_1 = *(long *)(param_1 + 0x30);
  } while (param_1 != 0);
  return *piVar1;
}



undefined4 * MuxEmitRiffHeader(undefined4 *param_1,int param_2)

{
  *param_1 = 0x46464952;
  param_1[1] = param_2 + -8;
  param_1[2] = 0x50424557;
  return param_1 + 3;
}



long MuxGetChunkListFromId(long param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    return param_1 + 0x28;
  case 1:
    return param_1 + 8;
  case 2:
    return param_1 + 0x20;
  default:
    return param_1 + 0x30;
  case 7:
    return param_1 + 0x10;
  case 8:
    return param_1 + 0x18;
  }
}



int MuxValidate(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    iVar4 = WebPMuxGetFeatures(param_1,&local_24);
    uVar2 = local_24;
    if ((iVar4 != 1) ||
       (iVar4 = WebPMuxNumChunks(param_1,1,&local_44), uVar3 = local_24, iVar4 != 1))
    goto LAB_00100bd3;
    if ((local_44 < 2) && ((bool)((byte)(uVar2 >> 5) & 1) == (local_44 == 1))) {
      iVar4 = WebPMuxNumChunks(param_1,7,&local_40);
      uVar2 = local_24;
      if (iVar4 != 1) goto LAB_00100bd3;
      if ((local_40 < 2) && ((bool)((byte)(uVar3 >> 3) & 1) == (local_40 == 1))) {
        iVar4 = WebPMuxNumChunks(param_1,8,&local_3c);
        if (iVar4 != 1) goto LAB_00100bd3;
        if ((local_3c < 2) && ((bool)((byte)(uVar2 >> 2) & 1) == (local_3c == 1))) {
          iVar4 = WebPMuxNumChunks(param_1,2,&local_38);
          if (iVar4 != 1) goto LAB_00100bd3;
          if (local_38 < 2) {
            iVar4 = WebPMuxNumChunks(param_1,3,&local_34);
            if (iVar4 != 1) goto LAB_00100bd3;
            if ((local_24 & 2) == 0) {
              if (((((local_38 != 1) && (local_34 < 1)) && (lVar1 = *param_1, lVar1 != 0)) &&
                  (*(long *)(lVar1 + 0x30) == 0)) &&
                 (((int)param_1[7] < 1 || (*(long *)(lVar1 + 0x20) == param_1[7]))))
              goto LAB_00100d2d;
            }
            else if ((local_38 != 0) && (local_34 != 0)) {
LAB_00100d2d:
              iVar4 = WebPMuxNumChunks(param_1,0,&local_30);
              if (iVar4 != 1) goto LAB_00100bd3;
              if (local_30 < 2) {
                iVar5 = WebPMuxNumChunks(param_1,6,&local_2c);
                iVar4 = iVar5;
                if (iVar5 != 1) goto LAB_00100bd3;
                if ((local_30 != 0) || (local_2c == 1)) {
                  for (lVar1 = *param_1; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x30)) {
                    if (*(int *)(lVar1 + 0x28) != 0) {
                      if (local_30 < 1) {
                        iVar4 = WebPMuxNumChunks(param_1,5,&local_28);
                        if ((iVar4 == 1) && (iVar4 = iVar5, 0 < local_28)) goto LAB_00100db8;
                      }
                      else if ((local_24 & 0x10) == 0) goto LAB_00100db8;
                      break;
                    }
                  }
                  goto LAB_00100bd3;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00100db8:
  iVar4 = -1;
LAB_00100bd3:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void MuxImageCount_cold(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



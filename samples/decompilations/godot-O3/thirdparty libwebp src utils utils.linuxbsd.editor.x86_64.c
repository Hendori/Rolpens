
void * WebPSafeMalloc(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  
  if ((param_1 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_1,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x400000000)) / auVar1,0) < param_2)) {
    return (void *)0x0;
  }
  pvVar2 = malloc(param_1 * param_2);
  return pvVar2;
}



void * WebPSafeCalloc(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  
  if ((param_1 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_1,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x400000000)) / auVar1,0) < param_2)) {
    return (void *)0x0;
  }
  pvVar2 = calloc(param_1,param_2);
  return pvVar2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void WebPSafeFree(void *__ptr)

{
  free(__ptr);
  return;
}



void * WebPMalloc(ulong param_1)

{
  void *pvVar1;
  
  if (param_1 < 0x400000001) {
    pvVar1 = malloc(param_1);
    return pvVar1;
  }
  return (void *)0x0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void WebPFree(void *__ptr)

{
  free(__ptr);
  return;
}



void WebPCopyPlane(void *param_1,int param_2,void *param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  
  if (0 < param_6) {
    param_6 = param_6 + -1;
    do {
      param_3 = memcpy(param_3,param_1,(long)param_5);
      param_3 = (void *)((long)param_3 + (long)param_4);
      bVar1 = param_6 != 0;
      param_6 = param_6 + -1;
      param_1 = (void *)((long)param_1 + (long)param_2);
    } while (bVar1);
    return;
  }
  return;
}



void WebPCopyPixels(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *__src;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  pvVar5 = *(void **)(param_2 + 0x48);
  iVar3 = *(int *)(param_2 + 0x50);
  iVar4 = *(int *)(param_1 + 0x50);
  if (0 < iVar2) {
    __src = *(void **)(param_1 + 0x48);
    do {
      iVar2 = iVar2 + -1;
      pvVar5 = memcpy(pvVar5,__src,(long)(iVar1 * 4));
      pvVar5 = (void *)((long)pvVar5 + (long)(iVar3 * 4));
      __src = (void *)((long)__src + (long)(iVar4 * 4));
    } while (iVar2 != 0);
  }
  return;
}



void WebPGetColorPalette(void)

{
  GetColorPalette();
  return;
}



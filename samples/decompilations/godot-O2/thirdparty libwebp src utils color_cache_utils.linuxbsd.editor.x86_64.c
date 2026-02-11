
undefined8 VP8LColorCacheInit(long *param_1,int param_2)

{
  long lVar1;
  
  lVar1 = WebPSafeCalloc((long)(1 << ((byte)param_2 & 0x1f)),4);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    *(int *)((long)param_1 + 0xc) = param_2;
    *(int *)(param_1 + 1) = 0x20 - param_2;
    return 1;
  }
  return 0;
}



void VP8LColorCacheClear(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    WebPSafeFree(*param_1);
    *param_1 = 0;
    return;
  }
  return;
}



void VP8LColorCacheCopy(undefined8 *param_1,undefined8 *param_2)

{
  memcpy((void *)*param_2,(void *)*param_1,4L << ((byte)*(undefined4 *)((long)param_2 + 0xc) & 0x3f)
        );
  return;
}




int oc_ilog(uint param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = 0x1f;
    if (param_1 != 0) {
      for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    return iVar1 + 1;
  }
  return 0;
}



long oc_aligned_malloc(ulong param_1,ulong param_2)

{
  void *pvVar1;
  uint uVar2;
  
  if (0xff < param_2 - 1) {
    return 0;
  }
  if (((param_2 - 1 & param_2) == 0) && (!CARRY8(param_1,param_2))) {
    pvVar1 = malloc(param_1 + param_2);
    if (pvVar1 != (void *)0x0) {
      uVar2 = (int)pvVar1 - 1U & (int)param_2 - 1U;
      *(char *)((long)pvVar1 + (ulong)uVar2) = (char)uVar2;
      return (long)pvVar1 + (ulong)uVar2 + 1;
    }
  }
  return 0;
}



void oc_aligned_free(long param_1)

{
  if (param_1 != 0) {
    free((void *)(param_1 + ~(ulong)*(byte *)(param_1 + -1)));
    return;
  }
  return;
}



void oc_malloc_2d(long param_1,long param_2,long param_3)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar1 = malloc(param_1 * param_3 * param_2 + param_1 * 8);
  if ((pvVar1 != (void *)0x0) && (pvVar3 = (void *)((long)pvVar1 + param_1 * 8), param_1 != 0)) {
    lVar2 = 0;
    do {
      *(void **)((long)pvVar1 + lVar2 * 8) = pvVar3;
      lVar2 = lVar2 + 1;
      pvVar3 = (void *)((long)pvVar3 + param_3 * param_2);
    } while (lVar2 != param_1);
  }
  return;
}



void oc_calloc_2d(long param_1,long param_2,long param_3)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar1 = calloc(param_1 * param_3 * param_2 + param_1 * 8,1);
  if ((pvVar1 != (void *)0x0) && (pvVar3 = (void *)((long)pvVar1 + param_1 * 8), param_1 != 0)) {
    lVar2 = 0;
    do {
      *(void **)((long)pvVar1 + lVar2 * 8) = pvVar3;
      lVar2 = lVar2 + 1;
      pvVar3 = (void *)((long)pvVar3 + param_3 * param_2);
    } while (lVar2 != param_1);
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void oc_free_2d(void *__ptr)

{
  free(__ptr);
  return;
}



void oc_ycbcr_buffer_flip(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = param_2;
  do {
    uVar1 = *puVar3;
    puVar4 = puVar3 + 3;
    *param_1 = uVar1;
    iVar2 = *(int *)(puVar3 + 1);
    *(int *)(param_1 + 1) = -iVar2;
    param_1[2] = (long)(1 - (int)((ulong)uVar1 >> 0x20)) * (long)-iVar2 + puVar3[2];
    puVar3 = puVar4;
    param_1 = param_1 + 3;
  } while (puVar4 != param_2 + 9);
  return;
}



char * th_version_string(void)

{
  return "Xiph.Org libtheora 1.2.0alpha 20100924 (Ptalarbvorm)";
}



undefined8 th_version_number(void)

{
  return 0x30201;
}



byte th_packet_isheader(undefined8 *param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (0 < (long)param_1[1]) {
    bVar1 = *(byte *)*param_1 >> 7;
  }
  return bVar1;
}



uint th_packet_iskeyframe(undefined8 *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (0 < (long)param_1[1]) {
    uVar1 = 0xffffffff;
    if (-1 < (char)*(byte *)*param_1) {
      uVar1 = (*(byte *)*param_1 >> 6 ^ 1) & 1;
    }
  }
  return uVar1;
}



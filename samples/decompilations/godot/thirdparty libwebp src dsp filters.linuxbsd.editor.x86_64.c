
void HorizontalUnfilter_C(char *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  char cVar2;
  
  cVar2 = '\0';
  if (param_1 != (char *)0x0) {
    cVar2 = *param_1;
  }
  if (0 < param_4) {
    lVar1 = 0;
    do {
      cVar2 = cVar2 + *(char *)(param_2 + lVar1);
      *(char *)(param_3 + lVar1) = cVar2;
      lVar1 = lVar1 + 1;
    } while (param_4 != lVar1);
  }
  return;
}



void NoneUnfilter_C(undefined8 param_1,void *param_2,void *param_3,int param_4)

{
  if (param_3 != param_2) {
    memcpy(param_3,param_2,(long)param_4);
    return;
  }
  return;
}



void GradientUnfilter_C(byte *param_1,long param_2,long param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  uint uVar5;
  
  if (param_1 == (byte *)0x0) {
    if (0 < param_4) {
      lVar4 = 0;
      cVar3 = '\0';
      do {
        cVar3 = cVar3 + *(char *)(param_2 + lVar4);
        *(char *)(param_3 + lVar4) = cVar3;
        lVar4 = lVar4 + 1;
      } while (lVar4 != param_4);
      return;
    }
  }
  else {
    uVar5 = (uint)*param_1;
    if (0 < param_4) {
      lVar4 = 0;
      uVar2 = uVar5;
      do {
        bVar1 = param_1[lVar4];
        uVar2 = ((uint)bVar1 + (uVar5 & 0xff)) - uVar2;
        uVar5 = *(byte *)(param_2 + lVar4) + uVar2;
        if (0xff < uVar2) {
          uVar5 = (uint)(byte)(*(byte *)(param_2 + lVar4) - (uVar2 < 0x80000000));
        }
        *(char *)(param_3 + lVar4) = (char)uVar5;
        lVar4 = lVar4 + 1;
        uVar2 = (uint)bVar1;
      } while (lVar4 != param_4);
      return;
    }
  }
  return;
}



void VerticalUnfilter_C(long param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  char cVar2;
  
  if (param_1 == 0) {
    if (0 < param_4) {
      lVar1 = 0;
      cVar2 = '\0';
      do {
        cVar2 = cVar2 + *(char *)(param_2 + lVar1);
        *(char *)(param_3 + lVar1) = cVar2;
        lVar1 = lVar1 + 1;
      } while (param_4 != lVar1);
      return;
    }
  }
  else {
    lVar1 = 0;
    if (param_4 < 1) {
      return;
    }
    do {
      *(char *)(param_3 + lVar1) = *(char *)(param_2 + lVar1) + *(char *)(param_1 + lVar1);
      lVar1 = lVar1 + 1;
    } while (param_4 != lVar1);
  }
  return;
}



void GradientFilter_C(undefined1 *param_1,uint param_2,int param_3,int param_4,undefined1 *param_5)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  
  *param_5 = *param_1;
  uVar2 = 1;
  if (1 < (int)param_2) {
    do {
      param_5[uVar2] = param_1[uVar2] - param_1[uVar2 - 1];
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_2);
  }
  lVar6 = (long)param_4;
  pcVar4 = param_1 + lVar6;
  pcVar5 = param_5 + lVar6;
  iVar3 = 1;
  if (1 < param_3) {
    do {
      uVar2 = 1;
      *pcVar5 = *pcVar4 - pcVar4[-lVar6];
      if (1 < (int)param_2) {
        do {
          uVar1 = ((uint)(byte)param_1[uVar2] + (uint)(byte)pcVar4[uVar2 - 1]) -
                  (uint)(byte)param_1[uVar2 - 1];
          if (0xff < uVar1) {
            uVar1 = (int)~uVar1 >> 0x1f;
          }
          pcVar5[uVar2] = pcVar4[uVar2] - (char)uVar1;
          uVar2 = uVar2 + 1;
        } while (param_2 != uVar2);
      }
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar4 + lVar6;
      pcVar5 = pcVar5 + lVar6;
      param_1 = param_1 + lVar6;
    } while (param_3 != iVar3);
  }
  return;
}



void VerticalFilter_C(undefined1 *param_1,uint param_2,int param_3,int param_4,undefined1 *param_5)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  *param_5 = *param_1;
  if (1 < (int)param_2) {
    uVar2 = 1;
    do {
      param_5[uVar2] = param_1[uVar2] - param_1[uVar2 - 1];
      uVar2 = uVar2 + 1;
    } while (param_2 != uVar2);
  }
  iVar4 = 1;
  puVar6 = param_1 + param_4;
  param_5 = param_5 + param_4;
  puVar1 = puVar6;
  if (1 < param_3) {
    while( true ) {
      puVar5 = puVar1;
      lVar3 = 0;
      if (0 < (int)param_2) {
        do {
          param_5[lVar3] = puVar6[lVar3] - param_1[lVar3];
          lVar3 = lVar3 + 1;
        } while ((int)param_2 != lVar3);
      }
      iVar4 = iVar4 + 1;
      puVar6 = puVar6 + param_4;
      param_5 = param_5 + param_4;
      if (param_3 == iVar4) break;
      puVar1 = puVar5 + param_4;
      param_1 = puVar5;
    }
  }
  return;
}



void HorizontalFilter_C(undefined1 *param_1,uint param_2,int param_3,int param_4,undefined1 *param_5
                       )

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  
  *param_5 = *param_1;
  uVar2 = 1;
  if (0 < (int)(param_2 - 1)) {
    do {
      param_5[uVar2] = param_1[uVar2] - param_1[uVar2 - 1];
      uVar2 = uVar2 + 1;
    } while (param_2 != uVar2);
  }
  lVar5 = (long)param_4;
  pcVar3 = param_5 + lVar5;
  pcVar1 = param_1 + lVar5;
  iVar4 = 1;
  if (1 < param_3) {
    do {
      *pcVar3 = *pcVar1 - pcVar1[-lVar5];
      uVar2 = 1;
      if (0 < (int)(param_2 - 1)) {
        do {
          pcVar3[uVar2] = pcVar1[uVar2] - pcVar1[uVar2 - 1];
          uVar2 = uVar2 + 1;
        } while (param_2 != uVar2);
      }
      iVar4 = iVar4 + 1;
      pcVar1 = pcVar1 + lVar5;
      pcVar3 = pcVar3 + lVar5;
    } while (param_3 != iVar4);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8FiltersInit(void)

{
  int iVar1;
  
  if ((code *)VP8FiltersInit_body_last_cpuinfo_used_0 == _VP8GetCPUInfo) {
    return;
  }
  WebPFilters._0_8_ = 0;
  WebPUnfilters._0_8_ = NoneUnfilter_C;
  WebPUnfilters._8_8_ = 0x100000;
  WebPFilters._8_8_ = HorizontalFilter_C;
  WebPFilters._16_8_ = VerticalFilter_C;
  WebPFilters._24_8_ = GradientFilter_C;
  WebPUnfilters._16_8_ = VerticalUnfilter_C;
  WebPUnfilters._24_8_ = GradientUnfilter_C;
  if (_VP8GetCPUInfo != (code *)0x0) {
    iVar1 = (*_VP8GetCPUInfo)(0);
    if (iVar1 != 0) {
      VP8FiltersInitSSE2();
    }
    VP8FiltersInit_body_last_cpuinfo_used_0 = _VP8GetCPUInfo;
    return;
  }
  VP8FiltersInit_body_last_cpuinfo_used_0 = _VP8GetCPUInfo;
  return;
}



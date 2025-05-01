
void WebPMultARGBRow_C(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  if (0 < param_2) {
    puVar3 = param_1;
    do {
      while (uVar1 = *puVar3, uVar1 < 0xff000000) {
        if (uVar1 < 0x1000000) {
          *puVar3 = 0;
          break;
        }
        if (param_3 == 0) {
          iVar2 = (uVar1 >> 0x18) * 0x10101;
        }
        else {
          iVar2 = (int)(0xff000000 / (ulong)(uVar1 >> 0x18));
        }
        puVar4 = puVar3 + 1;
        *puVar3 = ((uVar1 >> 0x10 & 0xff) * iVar2 + 0x800000 >> 0x18) << 0x10 |
                  ((uVar1 >> 8 & 0xff) * iVar2 + 0x800000 >> 0x18) << 8 |
                  (uVar1 & 0xff) * iVar2 + 0x800000 >> 0x18 | uVar1 & 0xff000000;
        puVar3 = puVar4;
        if (puVar4 == param_1 + param_2) {
          return;
        }
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != param_1 + param_2);
  }
  return;
}



void WebPMultRow_C(long param_1,long param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = 0;
  if (0 < param_3) {
    do {
      bVar1 = *(byte *)(param_2 + lVar3);
      if (bVar1 != 0xff) {
        if (bVar1 == 0) {
          *(undefined1 *)(param_1 + lVar3) = 0;
        }
        else {
          if (param_4 == 0) {
            iVar2 = (uint)bVar1 * 0x10101;
          }
          else {
            iVar2 = (int)(0xff000000 / (ulong)(uint)bVar1);
          }
          *(char *)(param_1 + lVar3) =
               (char)((uint)*(byte *)(param_1 + lVar3) * iVar2 + 0x800000 >> 0x18);
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != param_3);
    return;
  }
  return;
}



void ApplyAlphaMultiply_C(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  if (param_4 < 1) {
    return;
  }
  param_4 = param_4 + -1;
  do {
    pbVar4 = (byte *)(param_1 + (ulong)(-(uint)(param_2 == 0) & 3));
    pbVar2 = (byte *)((param_1 + 1) - (ulong)(param_2 == 0));
    pbVar1 = pbVar2 + (long)param_3 * 4;
    if (0 < param_3) {
      do {
        if (*pbVar4 != 0xff) {
          iVar3 = (uint)*pbVar4 * 0x8081;
          *pbVar2 = (byte)((uint)*pbVar2 * iVar3 >> 0x17);
          pbVar2[1] = (byte)((uint)pbVar2[1] * iVar3 >> 0x17);
          pbVar2[2] = (byte)(iVar3 * (uint)pbVar2[2] >> 0x17);
        }
        pbVar2 = pbVar2 + 4;
        pbVar4 = pbVar4 + 4;
      } while (pbVar1 != pbVar2);
    }
    param_1 = param_1 + param_5;
    bVar5 = param_4 != 0;
    param_4 = param_4 + -1;
  } while (bVar5);
  return;
}



bool DispatchAlpha_C(long param_1,int param_2,int param_3,int param_4,long param_5,int param_6)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  
  if (param_4 < 1) {
    return false;
  }
  iVar4 = 0;
  bVar3 = 0xff;
  do {
    lVar2 = 0;
    if (0 < param_3) {
      do {
        bVar1 = *(byte *)(param_1 + lVar2);
        *(byte *)(param_5 + lVar2 * 4) = bVar1;
        lVar2 = lVar2 + 1;
        bVar3 = bVar3 & bVar1;
      } while (lVar2 != param_3);
    }
    iVar4 = iVar4 + 1;
    param_1 = param_1 + param_2;
    param_5 = param_5 + param_6;
  } while (param_4 != iVar4);
  return bVar3 != 0xff;
}



void DispatchAlphaToGreen_C
               (long param_1,int param_2,int param_3,int param_4,long param_5,int param_6)

{
  long lVar1;
  int iVar2;
  
  if (param_4 < 1) {
    return;
  }
  iVar2 = 0;
  do {
    lVar1 = 0;
    if (0 < param_3) {
      do {
        *(uint *)(param_5 + lVar1 * 4) = (uint)*(byte *)(param_1 + lVar1) << 8;
        lVar1 = lVar1 + 1;
      } while (param_3 != lVar1);
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + param_2;
    param_5 = param_5 + (long)param_6 * 4;
  } while (param_4 != iVar2);
  return;
}



bool ExtractAlpha_C(long param_1,int param_2,int param_3,int param_4,long param_5,int param_6)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  
  if (param_4 < 1) {
    return true;
  }
  iVar4 = 0;
  bVar3 = 0xff;
  do {
    lVar2 = 0;
    if (0 < param_3) {
      do {
        bVar1 = *(byte *)(param_1 + lVar2 * 4);
        *(byte *)(param_5 + lVar2) = bVar1;
        lVar2 = lVar2 + 1;
        bVar3 = bVar3 & bVar1;
      } while (lVar2 != param_3);
    }
    iVar4 = iVar4 + 1;
    param_1 = param_1 + param_2;
    param_5 = param_5 + param_6;
  } while (param_4 != iVar4);
  return bVar3 == 0xff;
}



void ExtractGreen_C(long param_1,long param_2,int param_3)

{
  long lVar1;
  
  if (0 < param_3) {
    lVar1 = 0;
    do {
      *(char *)(param_2 + lVar1) = (char)((uint)*(undefined4 *)(param_1 + lVar1 * 4) >> 8);
      lVar1 = lVar1 + 1;
    } while (param_3 != lVar1);
  }
  return;
}



undefined8 HasAlpha8b_C(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    if ((param_2 + (int)param_1) - (int)pcVar2 < 1) {
      return 0;
    }
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 == -1);
  return 1;
}



undefined8 HasAlpha32b_C(char *param_1,int param_2)

{
  char *pcVar1;
  
  if (0 < param_2) {
    pcVar1 = param_1 + (ulong)(param_2 - 1) * 4 + 4;
    do {
      if (*param_1 != -1) {
        return 1;
      }
      param_1 = param_1 + 4;
    } while (param_1 != pcVar1);
  }
  return 0;
}



void AlphaReplace_C(uint *param_1,int param_2,uint param_3)

{
  uint *puVar1;
  
  if (0 < param_2) {
    puVar1 = param_1 + param_2;
    do {
      if (*param_1 >> 0x18 == 0) {
        *param_1 = param_3;
      }
      param_1 = param_1 + 1;
    } while (param_1 != puVar1);
  }
  return;
}



void PackRGB_C(long param_1,long param_2,long param_3,int param_4,int param_5,uint *param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  
  if (0 < param_4) {
    lVar4 = 0;
    puVar5 = param_6;
    do {
      pbVar1 = (byte *)(param_1 + lVar4);
      pbVar2 = (byte *)(param_2 + lVar4);
      puVar6 = puVar5 + 1;
      pbVar3 = (byte *)(param_3 + lVar4);
      lVar4 = lVar4 + param_5;
      *puVar5 = (uint)*pbVar1 << 0x10 | (uint)*pbVar2 << 8 | (uint)*pbVar3 | 0xff000000;
      puVar5 = puVar6;
    } while (puVar6 != param_6 + param_4);
  }
  return;
}



void ApplyAlphaMultiply_16b_C(byte *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  if (0 < param_3) {
    param_3 = param_3 + -1;
    pbVar5 = param_1 + (long)param_2 * 2;
    do {
      pbVar6 = param_1;
      if (0 < param_2) {
        do {
          do {
            bVar1 = *param_1;
            bVar2 = param_1[1];
            pbVar3 = param_1 + 2;
            iVar4 = (bVar2 & 0xf) * 0x1111;
            *param_1 = (byte)((bVar1 & 0xf | (bVar1 & 0xf) << 4) * iVar4 >> 0x14) & 0xf |
                       (byte)((bVar1 & 0xfffffff0 | (uint)(bVar1 >> 4)) * iVar4 >> 0x10) & 0xf0;
            param_1[1] = (byte)((bVar2 & 0xfffffff0 | (uint)(bVar2 >> 4)) * iVar4 >> 0x10) & 0xf0 |
                         bVar2 & 0xf;
            param_1 = pbVar3;
          } while (pbVar5 != pbVar3);
          do {
            param_3 = param_3 + -1;
            if (param_3 == -1) {
              return;
            }
            param_1 = pbVar6 + param_4;
            pbVar5 = pbVar5 + param_4;
            pbVar6 = param_1;
          } while (param_2 < 1);
        } while( true );
      }
      param_3 = param_3 + -1;
      param_1 = param_1 + param_4;
      pbVar5 = pbVar5 + param_4;
    } while (param_3 != -1);
  }
  return;
}



void WebPMultARGBRows(long param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  if (0 < param_4) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      (*WebPMultARGBRow)(param_1,param_3,param_5);
      param_1 = param_1 + param_2;
    } while (param_4 != iVar1);
    return;
  }
  return;
}



void WebPMultRows(long param_1,int param_2,long param_3,int param_4,undefined4 param_5,int param_6,
                 undefined4 param_7)

{
  int iVar1;
  
  if (0 < param_6) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      (*WebPMultRow)(param_1,param_3,param_5,param_7);
      param_3 = param_3 + param_4;
      param_1 = param_1 + param_2;
    } while (param_6 != iVar1);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void WebPInitAlphaProcessing(void)

{
  int iVar1;
  
  if ((code *)WebPInitAlphaProcessing_body_last_cpuinfo_used_0 == _VP8GetCPUInfo) {
    return;
  }
  WebPMultARGBRow = 0x100000;
  WebPMultRow = WebPMultRow_C;
  WebPApplyAlphaMultiply4444 = ApplyAlphaMultiply_16b_C;
  WebPPackRGB = PackRGB_C;
  WebPApplyAlphaMultiply = ApplyAlphaMultiply_C;
  WebPDispatchAlpha = DispatchAlpha_C;
  WebPDispatchAlphaToGreen = DispatchAlphaToGreen_C;
  WebPExtractAlpha = ExtractAlpha_C;
  WebPExtractGreen = ExtractGreen_C;
  WebPHasAlpha8b = HasAlpha8b_C;
  WebPHasAlpha32b = HasAlpha32b_C;
  WebPAlphaReplace = AlphaReplace_C;
  if (_VP8GetCPUInfo != (code *)0x0) {
    iVar1 = (*_VP8GetCPUInfo)(0);
    if (iVar1 != 0) {
      WebPInitAlphaProcessingSSE2();
    }
    WebPInitAlphaProcessing_body_last_cpuinfo_used_0 = _VP8GetCPUInfo;
    return;
  }
  WebPInitAlphaProcessing_body_last_cpuinfo_used_0 = _VP8GetCPUInfo;
  return;
}



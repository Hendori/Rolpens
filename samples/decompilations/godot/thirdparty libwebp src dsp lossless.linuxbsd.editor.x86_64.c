
undefined8 VP8LPredictor0_C(void)

{
  return 0xff000000;
}



undefined4 VP8LPredictor1_C(undefined4 *param_1)

{
  return *param_1;
}



undefined4 VP8LPredictor2_C(undefined8 param_1,undefined4 *param_2)

{
  return *param_2;
}



undefined4 VP8LPredictor3_C(undefined8 param_1,long param_2)

{
  return *(undefined4 *)(param_2 + 4);
}



undefined4 VP8LPredictor4_C(undefined8 param_1,long param_2)

{
  return *(undefined4 *)(param_2 + -4);
}



int VP8LPredictor5_C(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = ((param_2[1] ^ *param_1) >> 1 & 0x7f7f7f7f) + (param_2[1] & *param_1);
  return ((*param_2 ^ uVar1) >> 1 & 0x7f7f7f7f) + (*param_2 & uVar1);
}



int VP8LPredictor6_C(uint *param_1,long param_2)

{
  return ((*(uint *)(param_2 + -4) ^ *param_1) >> 1 & 0x7f7f7f7f) +
         (*(uint *)(param_2 + -4) & *param_1);
}



int VP8LPredictor7_C(uint *param_1,uint *param_2)

{
  return ((*param_2 ^ *param_1) >> 1 & 0x7f7f7f7f) + (*param_2 & *param_1);
}



int VP8LPredictor8_C(undefined8 param_1,uint *param_2)

{
  return ((*param_2 ^ param_2[-1]) >> 1 & 0x7f7f7f7f) + (*param_2 & param_2[-1]);
}



int VP8LPredictor9_C(undefined8 param_1,uint *param_2)

{
  return ((param_2[1] ^ *param_2) >> 1 & 0x7f7f7f7f) + (param_2[1] & *param_2);
}



int VP8LPredictor10_C(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = ((param_2[1] ^ *param_2) >> 1 & 0x7f7f7f7f) + (param_2[1] & *param_2);
  uVar1 = ((param_2[-1] ^ *param_1) >> 1 & 0x7f7f7f7f) + (param_2[-1] & *param_1);
  return ((uVar2 ^ uVar1) >> 1 & 0x7f7f7f7f) + (uVar2 & uVar1);
}



uint VP8LPredictor11_C(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  uVar1 = *param_1;
  uVar2 = param_2[-1];
  uVar3 = *param_2;
  uVar8 = uVar2 >> 8 & 0xff;
  uVar10 = uVar2 >> 0x10 & 0xff;
  iVar9 = (uVar1 >> 0x10 & 0xff) - uVar10;
  iVar4 = -iVar9;
  if (0 < iVar9) {
    iVar4 = iVar9;
  }
  iVar9 = (uVar3 >> 0x10 & 0xff) - uVar10;
  if (iVar9 < 1) {
    iVar9 = -iVar9;
  }
  iVar11 = (uVar1 >> 0x18) - (uVar2 >> 0x18);
  iVar5 = -iVar11;
  if (0 < iVar11) {
    iVar5 = iVar11;
  }
  iVar11 = (uVar3 >> 0x18) - (uVar2 >> 0x18);
  if (iVar11 < 1) {
    iVar11 = -iVar11;
  }
  iVar12 = (uVar1 >> 8 & 0xff) - uVar8;
  iVar6 = -iVar12;
  if (0 < iVar12) {
    iVar6 = iVar12;
  }
  iVar12 = (uVar3 >> 8 & 0xff) - uVar8;
  if (iVar12 < 1) {
    iVar12 = -iVar12;
  }
  iVar13 = (uVar1 & 0xff) - (uVar2 & 0xff);
  iVar7 = -iVar13;
  if (0 < iVar13) {
    iVar7 = iVar13;
  }
  iVar13 = (uVar3 & 0xff) - (uVar2 & 0xff);
  if (iVar13 < 1) {
    iVar13 = -iVar13;
  }
  if ((iVar4 - iVar9) + (iVar5 - iVar11) + (iVar6 - iVar12) + (iVar7 - iVar13) < 1) {
    uVar1 = uVar3;
  }
  return uVar1;
}



uint VP8LPredictor12_C(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = *param_2;
  uVar1 = *param_1;
  uVar2 = param_2[-1];
  uVar4 = ((uVar3 >> 0x18) + (uVar1 >> 0x18)) - (uVar2 >> 0x18);
  if (0xff < uVar4) {
    uVar4 = ~uVar4 >> 0x18;
  }
  uVar5 = ((uVar3 >> 0x10 & 0xff) + (uVar1 >> 0x10 & 0xff)) - (uVar2 >> 0x10 & 0xff);
  if (0xff < uVar5) {
    uVar5 = ~uVar5 >> 0x18;
  }
  uVar6 = ((uVar3 >> 8 & 0xff) + (uVar1 >> 8 & 0xff)) - (uVar2 >> 8 & 0xff);
  if (0xff < uVar6) {
    uVar6 = ~uVar6 >> 0x18;
  }
  uVar3 = ((uVar3 & 0xff) + (uVar1 & 0xff)) - (uVar2 & 0xff);
  if (0xff < uVar3) {
    uVar3 = ~uVar3 >> 0x18;
  }
  return uVar4 << 0x18 | uVar5 << 0x10 | uVar6 << 8 | uVar3;
}



uint VP8LPredictor13_C(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_2[-1];
  uVar1 = ((*param_2 ^ *param_1) >> 1 & 0x7f7f7f7f) + (*param_2 & *param_1);
  uVar3 = (int)((uVar1 >> 0x18) - (uVar5 >> 0x18)) / 2 + (uVar1 >> 0x18);
  if (0xff < uVar3) {
    uVar3 = ~uVar3 >> 0x18;
  }
  uVar2 = uVar1 >> 0x10 & 0xff;
  uVar4 = uVar1 >> 8 & 0xff;
  uVar2 = (int)(uVar2 - (uVar5 >> 0x10 & 0xff)) / 2 + uVar2;
  if (0xff < uVar2) {
    uVar2 = ~uVar2 >> 0x18;
  }
  uVar4 = (int)(uVar4 - (uVar5 >> 8 & 0xff)) / 2 + uVar4;
  if (0xff < uVar4) {
    uVar4 = ~uVar4 >> 0x18;
  }
  uVar5 = (int)((uVar1 & 0xff) - (uVar5 & 0xff)) / 2 + (uVar1 & 0xff);
  if (0xff < uVar5) {
    uVar5 = ~uVar5 >> 0x18;
  }
  return uVar3 << 0x18 | uVar2 << 0x10 | uVar4 << 8 | uVar5;
}



void PredictorAdd0_C(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (0 < param_3) {
    lVar1 = 0;
    do {
      *(uint *)(param_4 + lVar1) =
           (*(uint *)(param_1 + lVar1) & 0xff00ff00) - 0x1000000 |
           *(uint *)(param_1 + lVar1) & 0xff00ff;
      lVar1 = lVar1 + 4;
    } while ((long)param_3 * 4 - lVar1 != 0);
  }
  return;
}



void PredictorAdd1_C(long param_1,undefined8 param_2,int param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_4 + -4);
  if (0 < param_3) {
    lVar2 = 0;
    do {
      uVar1 = (uVar1 & 0xff00ff) + (*(uint *)(param_1 + lVar2) & 0xff00ff) & 0xff00ff |
              (*(uint *)(param_1 + lVar2) & 0xff00ff00) + (uVar1 & 0xff00ff00) & 0xff00ff00;
      *(uint *)(param_4 + lVar2) = uVar1;
      lVar2 = lVar2 + 4;
    } while ((long)param_3 * 4 - lVar2 != 0);
  }
  return;
}



void PredictorAdd2_C(long param_1,long param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (0 < param_3) {
    lVar1 = 0;
    do {
      *(uint *)(param_4 + lVar1) =
           (*(uint *)(param_1 + lVar1) & 0xff00ff) + (*(uint *)(param_2 + lVar1) & 0xff00ff) &
           0xff00ff |
           (*(uint *)(param_2 + lVar1) & 0xff00ff00) + (*(uint *)(param_1 + lVar1) & 0xff00ff00) &
           0xff00ff00;
      lVar1 = lVar1 + 4;
    } while ((long)param_3 * 4 - lVar1 != 0);
  }
  return;
}



void PredictorAdd3_C(long param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  
  if (0 < param_3) {
    lVar2 = 0;
    do {
      uVar1 = *(uint *)(param_2 + 4 + lVar2);
      *(uint *)(param_4 + lVar2) =
           (*(uint *)(param_1 + lVar2) & 0xff00ff) + (uVar1 & 0xff00ff) & 0xff00ff |
           (uVar1 & 0xff00ff00) + (*(uint *)(param_1 + lVar2) & 0xff00ff00) & 0xff00ff00;
      lVar2 = lVar2 + 4;
    } while ((long)param_3 * 4 - lVar2 != 0);
  }
  return;
}



void PredictorAdd4_C(long param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  
  if (0 < param_3) {
    lVar2 = 0;
    do {
      uVar1 = *(uint *)(param_2 + -4 + lVar2);
      *(uint *)(param_4 + lVar2) =
           (*(uint *)(param_1 + lVar2) & 0xff00ff) + (uVar1 & 0xff00ff) & 0xff00ff |
           (uVar1 & 0xff00ff00) + (*(uint *)(param_1 + lVar2) & 0xff00ff00) & 0xff00ff00;
      lVar2 = lVar2 + 4;
    } while ((long)param_3 * 4 - lVar2 != 0);
  }
  return;
}



void PredictorAdd6_C(long param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if (0 < param_3) {
    uVar2 = *(uint *)(param_4 + -4);
    lVar3 = 0;
    do {
      uVar1 = *(uint *)(param_2 + -4 + lVar3);
      uVar2 = ((uVar1 ^ uVar2) >> 1 & 0x7f7f7f7f) + (uVar1 & uVar2);
      uVar2 = (uVar2 & 0xff00ff00) + (*(uint *)(param_1 + lVar3) & 0xff00ff00) & 0xff00ff00 |
              (*(uint *)(param_1 + lVar3) & 0xff00ff) + (uVar2 & 0xff00ff) & 0xff00ff;
      *(uint *)(param_4 + lVar3) = uVar2;
      lVar3 = lVar3 + 4;
    } while ((long)param_3 * 4 - lVar3 != 0);
  }
  return;
}



void PredictorAdd7_C(long param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  
  if (0 < param_3) {
    uVar1 = *(uint *)(param_4 + -4);
    lVar2 = 0;
    do {
      uVar1 = ((*(uint *)(param_2 + lVar2) ^ uVar1) >> 1 & 0x7f7f7f7f) +
              (*(uint *)(param_2 + lVar2) & uVar1);
      uVar1 = (uVar1 & 0xff00ff00) + (*(uint *)(param_1 + lVar2) & 0xff00ff00) & 0xff00ff00 |
              (*(uint *)(param_1 + lVar2) & 0xff00ff) + (uVar1 & 0xff00ff) & 0xff00ff;
      *(uint *)(param_4 + lVar2) = uVar1;
      lVar2 = lVar2 + 4;
    } while ((long)param_3 * 4 - lVar2 != 0);
  }
  return;
}



void PredictorAdd8_C(long param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  
  if (0 < param_3) {
    lVar2 = 0;
    do {
      uVar1 = *(uint *)(param_2 + -4 + lVar2);
      uVar1 = ((*(uint *)(param_2 + lVar2) ^ uVar1) >> 1 & 0x7f7f7f7f) +
              (*(uint *)(param_2 + lVar2) & uVar1);
      *(uint *)(param_4 + lVar2) =
           (uVar1 & 0xff00ff00) + (*(uint *)(param_1 + lVar2) & 0xff00ff00) & 0xff00ff00 |
           (*(uint *)(param_1 + lVar2) & 0xff00ff) + (uVar1 & 0xff00ff) & 0xff00ff;
      lVar2 = lVar2 + 4;
    } while ((long)param_3 * 4 - lVar2 != 0);
  }
  return;
}



void PredictorAdd9_C(long param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  
  if (0 < param_3) {
    lVar2 = 0;
    do {
      uVar1 = *(uint *)(param_2 + 4 + lVar2);
      uVar1 = ((uVar1 ^ *(uint *)(param_2 + lVar2)) >> 1 & 0x7f7f7f7f) +
              (uVar1 & *(uint *)(param_2 + lVar2));
      *(uint *)(param_4 + lVar2) =
           (uVar1 & 0xff00ff00) + (*(uint *)(param_1 + lVar2) & 0xff00ff00) & 0xff00ff00 |
           (*(uint *)(param_1 + lVar2) & 0xff00ff) + (uVar1 & 0xff00ff) & 0xff00ff;
      lVar2 = lVar2 + 4;
    } while ((long)param_3 * 4 - lVar2 != 0);
  }
  return;
}



void VP8LAddGreenToBlueAndRed_C(long param_1,int param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  
  if (0 < param_2) {
    lVar2 = 0;
    do {
      uVar1 = *(uint *)(param_1 + lVar2);
      *(uint *)(param_3 + lVar2) =
           uVar1 & 0xff00ff00 | (uVar1 >> 8 & 0xff) * 0x10001 + (uVar1 & 0xff00ff) & 0xff00ff;
      lVar2 = lVar2 + 4;
    } while ((long)param_2 * 4 - lVar2 != 0);
  }
  return;
}



void VP8LTransformColorInverse_C(char *param_1,long param_2,int param_3,long param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  
  if (0 < param_3) {
    lVar6 = 0;
    cVar1 = *param_1;
    cVar2 = param_1[1];
    cVar3 = param_1[2];
    do {
      uVar4 = *(uint *)(param_2 + lVar6);
      iVar7 = (int)(char)(uVar4 >> 8);
      uVar5 = (cVar1 * iVar7 >> 5) + (uVar4 >> 0x10 & 0xff);
      *(uint *)(param_4 + lVar6) =
           (uVar5 & 0xff) << 0x10 | uVar4 & 0xff00ff00 |
           ((int)(char)uVar5 * (int)cVar3 >> 5) + (iVar7 * cVar2 >> 5) + (uVar4 & 0xff) & 0xff;
      lVar6 = lVar6 + 4;
    } while ((long)param_3 * 4 - lVar6 != 0);
    return;
  }
  return;
}



void MapARGB_C(long param_1,long param_2,long param_3,int param_4,int param_5,int param_6)

{
  long lVar1;
  long lVar2;
  
  if (param_5 <= param_4) {
    return;
  }
  lVar1 = (ulong)(param_6 - 1) * 4 + 4;
  do {
    lVar2 = 0;
    if (0 < param_6) {
      do {
        *(undefined4 *)(param_3 + lVar2) =
             *(undefined4 *)(param_2 + (ulong)(*(uint *)(param_1 + lVar2) >> 8 & 0xff) * 4);
        lVar2 = lVar2 + 4;
      } while ((long)param_6 * 4 != lVar2);
      param_1 = param_1 + lVar1;
      param_3 = param_3 + lVar1;
    }
    param_4 = param_4 + 1;
  } while (param_5 != param_4);
  return;
}



void MapAlpha_C(long param_1,long param_2,long param_3,int param_4,int param_5,uint param_6)

{
  long lVar1;
  
  if (param_5 <= param_4) {
    return;
  }
  do {
    lVar1 = 0;
    if (0 < (int)param_6) {
      do {
        *(char *)(param_3 + lVar1) =
             (char)((uint)*(undefined4 *)(param_2 + (ulong)*(byte *)(param_1 + lVar1) * 4) >> 8);
        lVar1 = lVar1 + 1;
      } while ((int)param_6 != lVar1);
      param_1 = param_1 + (ulong)param_6;
      param_3 = param_3 + (ulong)param_6;
    }
    param_4 = param_4 + 1;
  } while (param_5 != param_4);
  return;
}



void VP8LConvertBGRAToRGB_C(undefined4 *param_1,int param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = param_1 + param_2;
  if (param_1 < puVar1) {
    do {
      uVar2 = *param_1;
      param_1 = param_1 + 1;
      param_3[1] = (char)((uint)uVar2 >> 8);
      *param_3 = (char)((uint)uVar2 >> 0x10);
      param_3[2] = (char)uVar2;
      param_3 = param_3 + 3;
    } while (param_1 < puVar1);
  }
  return;
}



void VP8LConvertBGRAToRGBA_C(uint *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = param_1 + param_2;
  if (param_1 < puVar1) {
    do {
      uVar2 = *param_1;
      param_1 = param_1 + 1;
      *param_3 = (((uVar2 >> 0x18) << 8 | uVar2 & 0xff) << 8 | uVar2 >> 8 & 0xff) << 8 |
                 uVar2 >> 0x10 & 0xff;
      param_3 = param_3 + 1;
    } while (param_1 < puVar1);
  }
  return;
}



void VP8LConvertBGRAToRGBA4444_C(uint *param_1,int param_2,byte *param_3)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = param_1 + param_2;
  if (param_1 < puVar1) {
    do {
      uVar2 = *param_1;
      param_1 = param_1 + 1;
      *param_3 = (byte)(uVar2 >> 0x10) & 0xf0 | (byte)(uVar2 >> 0xc) & 0xf;
      param_3[1] = (byte)(uVar2 >> 0x1c) | (byte)uVar2 & 0xf0;
      param_3 = param_3 + 2;
    } while (param_1 < puVar1);
  }
  return;
}



void VP8LConvertBGRAToRGB565_C(uint *param_1,int param_2,byte *param_3)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = param_1 + param_2;
  if (param_1 < puVar1) {
    do {
      uVar2 = *param_1;
      param_1 = param_1 + 1;
      *param_3 = (byte)(uVar2 >> 0x10) & 0xf8 | (byte)(uVar2 >> 0xd) & 7;
      param_3[1] = (byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 >> 5) & 0xe0;
      param_3 = param_3 + 2;
    } while (param_1 < puVar1);
  }
  return;
}



void VP8LConvertBGRAToBGR_C(undefined4 *param_1,int param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = param_1 + param_2;
  if (puVar1 <= param_1) {
    return;
  }
  do {
    uVar2 = *param_1;
    param_1 = param_1 + 1;
    *param_3 = (char)uVar2;
    param_3[1] = (char)((uint)uVar2 >> 8);
    param_3[2] = (char)((uint)uVar2 >> 0x10);
    param_3 = param_3 + 3;
  } while (param_1 < puVar1);
  return;
}



void ColorIndexInverseTransform_C_isra_0
               (byte param_1,int param_2,long param_3,int param_4,int param_5,uint *param_6,
               long param_7)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 8 >> (param_1 & 0x1f);
  if (iVar4 != 8) {
    bVar2 = (byte)iVar4;
    if (param_4 < param_5) {
      do {
        lVar1 = 0;
        uVar3 = 0;
        if (0 < param_2) {
          do {
            if (((1 << (param_1 & 0x1f)) - 1U & (uint)lVar1) == 0) {
              uVar3 = *param_6;
              param_6 = param_6 + 1;
              uVar3 = uVar3 >> 8 & 0xff;
            }
            *(undefined4 *)(param_7 + lVar1 * 4) =
                 *(undefined4 *)(param_3 + (ulong)((1 << (bVar2 & 0x1f)) - 1U & uVar3) * 4);
            lVar1 = lVar1 + 1;
            uVar3 = uVar3 >> (bVar2 & 0x1f);
          } while (param_2 != lVar1);
          param_7 = param_7 + (ulong)(param_2 - 1) * 4 + 4;
        }
        param_4 = param_4 + 1;
      } while (param_4 != param_5);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100b9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*VP8LMapColor32b)(param_6,param_3,param_7,param_4,param_5,param_2);
  return;
}



void PredictorAdd10_C(long param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  
  if (0 < param_3) {
    uVar4 = *(uint *)(param_4 + -4);
    lVar2 = 0;
    do {
      uVar3 = *(uint *)(param_2 + 4 + lVar2);
      uVar1 = *(uint *)(param_2 + -4 + lVar2);
      uVar3 = ((uVar3 ^ *(uint *)(param_2 + lVar2)) >> 1 & 0x7f7f7f7f) +
              (uVar3 & *(uint *)(param_2 + lVar2));
      uVar4 = ((uVar1 ^ uVar4) >> 1 & 0x7f7f7f7f) + (uVar1 & uVar4);
      uVar4 = ((uVar3 ^ uVar4) >> 1 & 0x7f7f7f7f) + (uVar3 & uVar4);
      uVar4 = (uVar4 & 0xff00ff00) + (*(uint *)(param_1 + lVar2) & 0xff00ff00) & 0xff00ff00 |
              (*(uint *)(param_1 + lVar2) & 0xff00ff) + (uVar4 & 0xff00ff) & 0xff00ff;
      *(uint *)(param_4 + lVar2) = uVar4;
      lVar2 = lVar2 + 4;
    } while ((long)param_3 * 4 - lVar2 != 0);
    return;
  }
  return;
}



void PredictorAdd5_C(long param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if (0 < param_3) {
    uVar2 = *(uint *)(param_4 + -4);
    lVar3 = 0;
    do {
      uVar1 = *(uint *)(param_2 + 4 + lVar3);
      uVar2 = ((uVar1 ^ uVar2) >> 1 & 0x7f7f7f7f) + (uVar1 & uVar2);
      uVar2 = ((*(uint *)(param_2 + lVar3) ^ uVar2) >> 1 & 0x7f7f7f7f) +
              (*(uint *)(param_2 + lVar3) & uVar2);
      uVar2 = (uVar2 & 0xff00ff00) + (*(uint *)(param_1 + lVar3) & 0xff00ff00) & 0xff00ff00 |
              (*(uint *)(param_1 + lVar3) & 0xff00ff) + (uVar2 & 0xff00ff) & 0xff00ff;
      *(uint *)(param_4 + lVar3) = uVar2;
      lVar3 = lVar3 + 4;
    } while ((long)param_3 * 4 - lVar3 != 0);
  }
  return;
}



void PredictorAdd11_C(long param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  
  if (0 < param_3) {
    lVar11 = 0;
    uVar6 = *(uint *)(param_4 + -4);
    do {
      uVar1 = *(uint *)(param_2 + -4 + lVar11);
      uVar2 = *(uint *)(param_2 + lVar11);
      uVar7 = uVar1 >> 8 & 0xff;
      uVar12 = uVar1 >> 0x10 & 0xff;
      iVar8 = (uVar6 >> 0x10 & 0xff) - uVar12;
      iVar3 = -iVar8;
      if (0 < iVar8) {
        iVar3 = iVar8;
      }
      iVar8 = (uVar2 >> 0x10 & 0xff) - uVar12;
      if (iVar8 < 1) {
        iVar8 = -iVar8;
      }
      iVar9 = (uVar6 >> 0x18) - (uVar1 >> 0x18);
      iVar4 = -iVar9;
      if (0 < iVar9) {
        iVar4 = iVar9;
      }
      iVar10 = (uVar2 >> 0x18) - (uVar1 >> 0x18);
      iVar9 = -iVar10;
      if (0 < iVar10) {
        iVar9 = iVar10;
      }
      iVar13 = (uVar6 >> 8 & 0xff) - uVar7;
      iVar10 = -iVar13;
      if (0 < iVar13) {
        iVar10 = iVar13;
      }
      iVar13 = (uVar2 >> 8 & 0xff) - uVar7;
      if (iVar13 < 1) {
        iVar13 = -iVar13;
      }
      iVar14 = (uVar6 & 0xff) - (uVar1 & 0xff);
      iVar5 = -iVar14;
      if (0 < iVar14) {
        iVar5 = iVar14;
      }
      iVar14 = (uVar2 & 0xff) - (uVar1 & 0xff);
      if (iVar14 < 1) {
        iVar14 = -iVar14;
      }
      if ((iVar3 - iVar8) + (iVar4 - iVar9) + (iVar10 - iVar13) + (iVar5 - iVar14) < 1) {
        uVar6 = uVar2;
      }
      uVar6 = (uVar6 & 0xff00ff00) + (*(uint *)(param_1 + lVar11) & 0xff00ff00) & 0xff00ff00 |
              (uVar6 & 0xff00ff) + (*(uint *)(param_1 + lVar11) & 0xff00ff) & 0xff00ff;
      *(uint *)(param_4 + lVar11) = uVar6;
      lVar11 = lVar11 + 4;
    } while (lVar11 != (long)param_3 * 4);
    return;
  }
  return;
}



void PredictorAdd12_C(long param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  if (0 < param_3) {
    lVar6 = 0;
    uVar4 = *(uint *)(param_4 + -4);
    do {
      uVar1 = *(uint *)(param_2 + lVar6);
      uVar2 = *(uint *)(param_2 + -4 + lVar6);
      uVar7 = ((uVar4 >> 0x18) + (uVar1 >> 0x18)) - (uVar2 >> 0x18);
      if (0xff < uVar7) {
        uVar7 = ~uVar7 >> 0x18;
      }
      uVar3 = ((uVar4 >> 0x10 & 0xff) + (uVar1 >> 0x10 & 0xff)) - (uVar2 >> 0x10 & 0xff);
      if (0xff < uVar3) {
        uVar3 = ~uVar3 >> 0x18;
      }
      uVar5 = ((uVar4 >> 8 & 0xff) + (uVar1 >> 8 & 0xff)) - (uVar2 >> 8 & 0xff);
      if (0xff < uVar5) {
        uVar5 = ~uVar5 >> 0x18;
      }
      uVar4 = ((uVar4 & 0xff) + (uVar1 & 0xff)) - (uVar2 & 0xff);
      if (0xff < uVar4) {
        uVar4 = ~uVar4 >> 0x18;
      }
      uVar4 = uVar3 << 0x10 | uVar7 << 0x18 | uVar5 << 8 | uVar4;
      uVar4 = (uVar4 & 0xff00ff) + (*(uint *)(param_1 + lVar6) & 0xff00ff) & 0xff00ff |
              (uVar4 & 0xff00ff00) + (*(uint *)(param_1 + lVar6) & 0xff00ff00) & 0xff00ff00;
      *(uint *)(param_4 + lVar6) = uVar4;
      lVar6 = lVar6 + 4;
    } while (lVar6 != (long)param_3 * 4);
    return;
  }
  return;
}



void PredictorAdd13_C(long param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  if (0 < param_3) {
    lVar6 = 0;
    uVar1 = *(uint *)(param_4 + -4);
    do {
      uVar5 = *(uint *)(param_2 + -4 + lVar6);
      uVar4 = ((*(uint *)(param_2 + lVar6) ^ uVar1) >> 1 & 0x7f7f7f7f) +
              (*(uint *)(param_2 + lVar6) & uVar1);
      uVar1 = (int)((uVar4 >> 0x18) - (uVar5 >> 0x18)) / 2 + (uVar4 >> 0x18);
      if (0xff < uVar1) {
        uVar1 = ~uVar1 >> 0x18;
      }
      uVar2 = uVar4 >> 0x10 & 0xff;
      uVar2 = (int)(uVar2 - (uVar5 >> 0x10 & 0xff)) / 2 + uVar2;
      if (0xff < uVar2) {
        uVar2 = ~uVar2 >> 0x18;
      }
      uVar3 = uVar4 >> 8 & 0xff;
      uVar3 = (int)(uVar3 - (uVar5 >> 8 & 0xff)) / 2 + uVar3;
      if (0xff < uVar3) {
        uVar3 = ~uVar3 >> 0x18;
      }
      uVar5 = (int)((uVar4 & 0xff) - (uVar5 & 0xff)) / 2 + (uVar4 & 0xff);
      if (0xff < uVar5) {
        uVar5 = ~uVar5 >> 0x18;
      }
      uVar5 = uVar2 << 0x10 | uVar1 << 0x18 | uVar3 << 8 | uVar5;
      uVar1 = (uVar5 & 0xff00ff00) + (*(uint *)(param_1 + lVar6) & 0xff00ff00) & 0xff00ff00 |
              (uVar5 & 0xff00ff) + (*(uint *)(param_1 + lVar6) & 0xff00ff) & 0xff00ff;
      *(uint *)(param_4 + lVar6) = uVar1;
      lVar6 = lVar6 + 4;
    } while ((long)param_3 * 4 - lVar6 != 0);
    return;
  }
  return;
}



void VP8LColorIndexInverseTransformAlpha
               (long param_1,int param_2,int param_3,byte *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  bVar4 = (byte)*(undefined4 *)(param_1 + 4);
  iVar7 = 8 >> (bVar4 & 0x1f);
  if (iVar7 == 8) {
                    /* WARNING: Could not recover jumptable at 0x001011ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*VP8LMapColor8b)(param_4,lVar2,param_5,param_2,param_3);
    return;
  }
  bVar5 = (byte)iVar7;
  if (param_2 < param_3) {
    do {
      lVar3 = 0;
      uVar6 = 0;
      if (0 < (int)uVar1) {
        do {
          if (((1 << (bVar4 & 0x1f)) - 1U & (uint)lVar3) == 0) {
            uVar6 = (uint)*param_4;
            param_4 = param_4 + 1;
          }
          *(char *)(param_5 + lVar3) =
               (char)((uint)*(undefined4 *)(lVar2 + (ulong)(uVar6 & (1 << (bVar5 & 0x1f)) - 1U) * 4)
                     >> 8);
          lVar3 = lVar3 + 1;
          uVar6 = uVar6 >> (bVar5 & 0x1f);
        } while ((int)uVar1 != lVar3);
        param_5 = param_5 + (ulong)uVar1;
      }
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



void VP8LInverseTransform(uint *param_1,uint param_2,uint param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  byte bVar6;
  uint *puVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 *puVar16;
  uint *puVar17;
  long in_FS_OFFSET;
  undefined1 local_44 [4];
  long local_40;
  
  uVar1 = param_1[2];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = *param_1;
  if (uVar9 == 2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010145c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*VP8LAddGreenToBlueAndRed)(param_4,(param_3 - param_2) * uVar1,param_5);
      return;
    }
  }
  else {
    if (uVar9 < 3) {
      if (uVar9 == 0) {
        puVar13 = param_5;
        uVar9 = param_2;
        if (param_2 == 0) {
          uVar8 = 1;
          uVar9 = (*param_4 & 0xff00ff00) - 0x1000000 | *param_4 & 0xff00ff;
          *param_5 = uVar9;
          if (1 < (int)uVar1) {
            do {
              uVar9 = (uVar9 & 0xff00ff) + (param_4[uVar8] & 0xff00ff) & 0xff00ff |
                      (param_4[uVar8] & 0xff00ff00) + (uVar9 & 0xff00ff00) & 0xff00ff00;
              param_5[uVar8] = uVar9;
              uVar8 = uVar8 + 1;
            } while (uVar8 != uVar1);
          }
          uVar9 = 1;
          param_4 = param_4 + (int)uVar1;
          puVar13 = param_5 + (int)uVar1;
        }
        bVar6 = (byte)param_1[1];
        iVar10 = 1 << (bVar6 & 0x1f);
        uVar3 = (uVar1 - 1) + iVar10 >> (bVar6 & 0x1f);
        puVar7 = (uint *)(*(long *)(param_1 + 4) +
                         (long)(int)(((int)uVar9 >> (bVar6 & 0x1f)) * uVar3) * 4);
        if ((int)uVar9 < (int)param_3) {
          lVar11 = (long)(int)uVar1;
          do {
            *puVar13 = (*param_4 & 0xff00ff00) + (puVar13[-lVar11] & 0xff00ff00) & 0xff00ff00 |
                       (*param_4 & 0xff00ff) + (puVar13[-lVar11] & 0xff00ff) & 0xff00ff;
            if (1 < (int)uVar1) {
              puVar17 = puVar7;
              uVar12 = 1;
              do {
                uVar4 = (uVar12 & -iVar10) + iVar10;
                if ((int)uVar1 < (int)uVar4) {
                  uVar4 = uVar1;
                }
                (**(code **)(VP8LPredictorsAdd + (ulong)(*puVar17 >> 8 & 0xf) * 8))
                          (param_4 + (int)uVar12,puVar13 + ((int)uVar12 - lVar11),uVar4 - uVar12,
                           puVar13 + (int)uVar12);
                puVar17 = puVar17 + 1;
                uVar12 = uVar4;
              } while ((int)uVar4 < (int)uVar1);
            }
            param_4 = param_4 + lVar11;
            puVar13 = puVar13 + lVar11;
            uVar9 = uVar9 + 1;
            if ((iVar10 - 1U & uVar9) == 0) {
              puVar7 = puVar7 + (int)uVar3;
            }
          } while (param_3 != uVar9);
        }
        if (param_1[3] != param_3) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            memcpy(param_5 + -(long)(int)uVar1,param_5 + (int)(((param_3 - param_2) + -1) * uVar1),
                   (long)(int)uVar1 * 4);
            return;
          }
          goto LAB_00101768;
        }
      }
      else {
        bVar6 = (byte)param_1[1];
        iVar10 = 1 << (bVar6 & 0x1f);
        uVar9 = (uVar1 - 1) + iVar10 >> (bVar6 & 0x1f);
        iVar15 = uVar1 - (-iVar10 & uVar1);
        puVar14 = (undefined4 *)
                  (*(long *)(param_1 + 4) +
                  (long)(int)(((int)param_2 >> (bVar6 & 0x1f)) * uVar9) * 4);
        if ((int)param_2 < (int)param_3) {
          do {
            local_44._0_3_ = local_44._0_3_ & 0xff;
            puVar7 = param_4 + (int)(-iVar10 & uVar1);
            puVar13 = param_4 + (int)uVar1;
            puVar16 = puVar14;
            for (; param_4 < puVar7; param_4 = param_4 + iVar10) {
              uVar2 = *puVar16;
              puVar16 = puVar16 + 1;
              local_44._0_3_ = (undefined3)uVar2;
              (*VP8LTransformColorInverse)(local_44,param_4,iVar10,param_5);
              param_5 = param_5 + iVar10;
            }
            if (param_4 < puVar13) {
              local_44[2] = (char)((uint)*puVar16 >> 0x10);
              local_44._0_2_ = *(undefined2 *)puVar16;
              (*VP8LTransformColorInverse)(local_44,param_4,iVar15,param_5);
              param_4 = param_4 + iVar15;
              param_5 = param_5 + iVar15;
            }
            param_2 = param_2 + 1;
            if ((iVar10 - 1U & param_2) == 0) {
              puVar14 = puVar14 + (int)uVar9;
            }
          } while (param_3 != param_2);
        }
      }
    }
    else if (uVar9 == 3) {
      if ((param_4 == param_5) && (0 < (int)param_1[1])) {
        bVar6 = (byte)param_1[1];
        lVar11 = (long)(int)(((uVar1 - 1) + (1 << (bVar6 & 0x1f)) >> (bVar6 & 0x1f)) *
                            (param_3 - param_2));
        pvVar5 = memmove(param_4 + ((int)((param_3 - param_2) * uVar1) - lVar11),param_4,lVar11 * 4)
        ;
        ColorIndexInverseTransform_C_isra_0
                  (param_1[1],param_1[2],*(undefined8 *)(param_1 + 4),param_2,param_3,pvVar5,param_4
                  );
      }
      else {
        ColorIndexInverseTransform_C_isra_0
                  (param_1[1],uVar1,*(undefined8 *)(param_1 + 4),param_2,param_3,param_4,param_5);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_00101768:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8LConvertFromBGRA(uint *param_1,int param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  
  if (10 < param_3) {
    return;
  }
  switch(param_3) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x00101813. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*VP8LConvertBGRAToRGB)(param_1,param_2,param_4);
    return;
  case 1:
                    /* WARNING: Could not recover jumptable at 0x0010182b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*VP8LConvertBGRAToRGBA)(param_1,param_2,param_4);
    return;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x00101843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*VP8LConvertBGRAToBGR)(param_1,param_2,param_4);
    return;
  case 3:
    memcpy(param_4,param_1,(long)param_2 << 2);
    return;
  case 4:
    puVar1 = param_1 + param_2;
    if (param_1 < puVar1) {
      do {
        uVar2 = *param_1;
        param_1 = param_1 + 1;
        *param_4 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        param_4 = param_4 + 1;
      } while (param_1 < puVar1);
    }
    return;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x001018ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*VP8LConvertBGRAToRGBA4444)(param_1,param_2,param_4);
    return;
  case 6:
                    /* WARNING: Could not recover jumptable at 0x00101903. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*VP8LConvertBGRAToRGB565)(param_1,param_2,param_4);
    return;
  case 7:
    (*VP8LConvertBGRAToRGBA)(param_1,param_2,param_4);
    break;
  case 8:
    memcpy(param_4,param_1,(long)param_2 << 2);
    break;
  case 9:
    puVar1 = param_1 + param_2;
    puVar3 = param_4;
    if (param_1 < puVar1) {
      do {
        uVar2 = *param_1;
        param_1 = param_1 + 1;
        *puVar3 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        puVar3 = puVar3 + 1;
      } while (param_1 < puVar1);
    }
    uVar4 = 1;
    goto LAB_001018cf;
  case 10:
    (*VP8LConvertBGRAToRGBA4444)(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x001017fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_WebPApplyAlphaMultiply4444)(param_4,param_2,1,0);
    return;
  }
  uVar4 = 0;
LAB_001018cf:
                    /* WARNING: Could not recover jumptable at 0x001018d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_WebPApplyAlphaMultiply)(param_4,uVar4,param_2,1,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8LDspInit(void)

{
  int iVar1;
  
  if ((code *)VP8LDspInit_body_last_cpuinfo_used_0 == _VP8GetCPUInfo) {
    return;
  }
  VP8LPredictorsAdd._0_8_ = PredictorAdd0_C;
  VP8LPredictorsAdd._8_8_ = PredictorAdd1_C;
  VP8LPredictorsAdd_C._0_8_ = PredictorAdd0_C;
  VP8LPredictorsAdd_C._8_8_ = PredictorAdd1_C;
  VP8LPredictorsAdd._16_8_ = PredictorAdd2_C;
  VP8LPredictorsAdd._24_8_ = PredictorAdd3_C;
  VP8LPredictorsAdd._32_8_ = PredictorAdd4_C;
  VP8LPredictorsAdd._40_8_ = PredictorAdd5_C;
  VP8LPredictorsAdd._48_8_ = PredictorAdd6_C;
  VP8LPredictorsAdd._56_8_ = PredictorAdd7_C;
  VP8LPredictorsAdd._64_8_ = PredictorAdd8_C;
  VP8LPredictorsAdd._72_8_ = PredictorAdd9_C;
  VP8LPredictorsAdd._80_8_ = PredictorAdd10_C;
  VP8LPredictorsAdd._88_8_ = PredictorAdd11_C;
  VP8LPredictorsAdd._96_8_ = PredictorAdd12_C;
  VP8LPredictorsAdd._104_8_ = PredictorAdd13_C;
  VP8LPredictorsAdd_C._16_8_ = PredictorAdd2_C;
  VP8LPredictorsAdd_C._24_8_ = PredictorAdd3_C;
  VP8LPredictors._112_8_ = 0x100000;
  VP8LPredictors._120_8_ = 0x100000;
  VP8LPredictors._0_8_ = 0x100000;
  VP8LPredictors._8_8_ = VP8LPredictor1_C;
  VP8LPredictorsAdd._112_8_ = PredictorAdd0_C;
  VP8LPredictorsAdd._120_8_ = PredictorAdd0_C;
  VP8LPredictors._16_8_ = VP8LPredictor2_C;
  VP8LPredictors._24_8_ = VP8LPredictor3_C;
  VP8LPredictorsAdd_C._32_8_ = PredictorAdd4_C;
  VP8LPredictorsAdd_C._40_8_ = PredictorAdd5_C;
  VP8LPredictors._32_8_ = VP8LPredictor4_C;
  VP8LPredictors._40_8_ = VP8LPredictor5_C;
  VP8LPredictorsAdd_C._48_8_ = PredictorAdd6_C;
  VP8LPredictorsAdd_C._56_8_ = PredictorAdd7_C;
  VP8LPredictors._48_8_ = VP8LPredictor6_C;
  VP8LPredictors._56_8_ = VP8LPredictor7_C;
  VP8LAddGreenToBlueAndRed = VP8LAddGreenToBlueAndRed_C;
  VP8LPredictors._64_8_ = VP8LPredictor8_C;
  VP8LPredictors._72_8_ = VP8LPredictor9_C;
  VP8LTransformColorInverse = VP8LTransformColorInverse_C;
  VP8LPredictors._80_8_ = VP8LPredictor10_C;
  VP8LPredictors._88_8_ = VP8LPredictor11_C;
  VP8LConvertBGRAToRGBA = VP8LConvertBGRAToRGBA_C;
  VP8LConvertBGRAToRGB = VP8LConvertBGRAToRGB_C;
  VP8LConvertBGRAToBGR = VP8LConvertBGRAToBGR_C;
  VP8LConvertBGRAToRGBA4444 = VP8LConvertBGRAToRGBA4444_C;
  VP8LConvertBGRAToRGB565 = VP8LConvertBGRAToRGB565_C;
  VP8LMapColor32b = MapARGB_C;
  VP8LPredictors._96_8_ = VP8LPredictor12_C;
  VP8LPredictors._104_8_ = VP8LPredictor13_C;
  VP8LPredictorsAdd_C._64_8_ = PredictorAdd8_C;
  VP8LPredictorsAdd_C._72_8_ = PredictorAdd9_C;
  VP8LPredictorsAdd_C._80_8_ = PredictorAdd10_C;
  VP8LPredictorsAdd_C._88_8_ = PredictorAdd11_C;
  VP8LPredictorsAdd_C._96_8_ = PredictorAdd12_C;
  VP8LPredictorsAdd_C._104_8_ = PredictorAdd13_C;
  VP8LPredictorsAdd_C._112_8_ = PredictorAdd0_C;
  VP8LPredictorsAdd_C._120_8_ = PredictorAdd0_C;
  VP8LMapColor8b = MapAlpha_C;
  if (_VP8GetCPUInfo != (code *)0x0) {
    iVar1 = (*_VP8GetCPUInfo)(0);
    if (iVar1 != 0) {
      VP8LDspInitSSE2();
    }
    VP8LDspInit_body_last_cpuinfo_used_0 = _VP8GetCPUInfo;
    return;
  }
  VP8LDspInit_body_last_cpuinfo_used_0 = _VP8GetCPUInfo;
  return;
}



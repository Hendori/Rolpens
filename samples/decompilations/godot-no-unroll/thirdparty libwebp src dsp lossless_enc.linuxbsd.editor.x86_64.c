
void VP8LSubtractGreenFromBlueAndRed_C(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  if (0 < param_2) {
    puVar3 = param_1;
    do {
      uVar1 = *puVar3;
      puVar4 = puVar3 + 1;
      uVar2 = uVar1 >> 8 & 0xff;
      *puVar3 = (((int)uVar1 >> 0x10) - uVar2 & 0xff) << 0x10 |
                uVar1 & 0xff00ff00 | uVar1 - uVar2 & 0xff;
      puVar3 = puVar4;
    } while (param_1 + param_2 != puVar4);
  }
  return;
}



void VP8LTransformColor_C(char *param_1,uint *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  
  if (0 < param_3) {
    cVar1 = *param_1;
    cVar2 = param_1[1];
    cVar3 = param_1[2];
    puVar7 = param_2;
    do {
      uVar4 = *puVar7;
      puVar8 = puVar7 + 1;
      iVar6 = (int)(char)(uVar4 >> 8);
      iVar5 = (int)(char)(uVar4 >> 0x10);
      *puVar7 = (iVar5 - (iVar6 * cVar1 >> 5) & 0xffU) << 0x10 |
                ((uVar4 & 0xff) - (cVar2 * iVar6 >> 5)) - (iVar5 * cVar3 >> 5) & 0xff |
                uVar4 & 0xff00ff00;
      puVar7 = puVar8;
    } while (param_2 + param_3 != puVar8);
    return;
  }
  return;
}



void VP8LCollectColorRedTransforms_C
               (uint *param_1,int param_2,int param_3,int param_4,char param_5,long param_6)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  if (param_4 < 1) {
    return;
  }
  param_4 = param_4 + -1;
  puVar4 = param_1 + param_3;
  do {
    puVar2 = param_1;
    if (0 < param_3) {
      do {
        puVar3 = puVar2 + 1;
        piVar1 = (int *)(param_6 +
                        (ulong)((*puVar2 >> 0x10) - ((int)(char)(*puVar2 >> 8) * (int)param_5 >> 5)
                               & 0xff) * 4);
        *piVar1 = *piVar1 + 1;
        puVar2 = puVar3;
      } while (puVar3 != puVar4);
    }
    param_4 = param_4 + -1;
    param_1 = param_1 + param_2;
    puVar4 = puVar4 + param_2;
  } while (param_4 != -1);
  return;
}



void VP8LCollectColorBlueTransforms_C
               (uint *param_1,int param_2,int param_3,int param_4,char param_5,char param_6,
               long param_7)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  if (0 < param_4) {
    param_4 = param_4 + -1;
    puVar3 = param_1 + param_3;
    do {
      puVar4 = param_1;
      if (0 < param_3) {
        do {
          uVar2 = *puVar4;
          puVar4 = puVar4 + 1;
          piVar1 = (int *)(param_7 +
                          (ulong)(((uVar2 & 0xff) - ((int)(char)(uVar2 >> 8) * (int)param_5 >> 5)) -
                                  ((int)(char)(uVar2 >> 0x10) * (int)param_6 >> 5) & 0xff) * 4);
          *piVar1 = *piVar1 + 1;
        } while (puVar4 != puVar3);
      }
      param_4 = param_4 + -1;
      param_1 = param_1 + param_2;
      puVar3 = puVar3 + param_2;
    } while (param_4 != -1);
  }
  return;
}



ulong VectorMismatch_C(long param_1,long param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_3 < 1) {
    return 0;
  }
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    if (*(int *)(param_1 + uVar2 * 4) != *(int *)(param_2 + uVar2 * 4)) {
      return uVar2;
    }
    uVar1 = uVar2 + 1;
  } while (uVar2 + 1 != (long)param_3);
  return (ulong)((int)uVar2 + 1);
}



int ExtraCost_C(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  iVar3 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10);
  if (7 < param_2) {
    lVar5 = 2;
    do {
      lVar1 = lVar5 * 8;
      lVar2 = lVar5 * 8;
      iVar4 = (int)lVar5;
      lVar5 = lVar5 + 1;
      iVar3 = iVar3 + (*(int *)(param_1 + 0xc + lVar1) + *(int *)(param_1 + 8 + lVar2)) * iVar4;
    } while ((int)lVar5 < param_2 / 2 + -1);
  }
  return iVar3;
}



int ExtraCostCombined_C(long param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  
  iVar5 = *(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x10) + *(int *)(param_1 + 0x10) +
          *(int *)(param_1 + 0x14);
  if (7 < param_3) {
    lVar7 = 2;
    do {
      lVar1 = lVar7 * 8;
      lVar2 = lVar7 * 8;
      lVar3 = lVar7 * 8;
      lVar4 = lVar7 * 8;
      iVar6 = (int)lVar7;
      lVar7 = lVar7 + 1;
      iVar5 = iVar5 + (*(int *)(param_2 + 8 + lVar1) + *(int *)(param_1 + 8 + lVar3) +
                      *(int *)(param_2 + 0xc + lVar2) + *(int *)(param_1 + 0xc + lVar4)) * iVar6;
    } while ((int)lVar7 < param_3 / 2 + -1);
  }
  return iVar5;
}



void AddVector_C(long param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  
  if (0 < param_4) {
    lVar1 = 0;
    do {
      *(int *)(param_3 + lVar1) = *(int *)(param_2 + lVar1) + *(int *)(param_1 + lVar1);
      lVar1 = lVar1 + 4;
    } while ((long)param_4 * 4 - lVar1 != 0);
  }
  return;
}



void AddVectorEq_C(long param_1,long param_2,int param_3)

{
  long lVar1;
  
  if (0 < param_3) {
    lVar1 = 0;
    do {
      *(int *)(param_2 + lVar1) = *(int *)(param_2 + lVar1) + *(int *)(param_1 + lVar1);
      lVar1 = lVar1 + 4;
    } while ((long)param_3 * 4 - lVar1 != 0);
  }
  return;
}



void PredictorSub0_C(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (0 < param_3) {
    lVar1 = 0;
    do {
      *(uint *)(param_4 + lVar1) =
           (*(uint *)(param_1 + lVar1) & 0xff00ff00) + 0x1ff00ff & 0xff00ff00 |
           *(uint *)(param_1 + lVar1) & 0xff00ff;
      lVar1 = lVar1 + 4;
    } while ((long)param_3 * 4 - lVar1 != 0);
  }
  return;
}



void PredictorSub13_C(long param_1,long param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  
  if (0 < param_3) {
    lVar3 = param_2;
    puVar5 = (uint *)(param_1 + -4);
    do {
      lVar4 = lVar3 + 4;
      uVar2 = VP8LPredictor13_C(puVar5,lVar3);
      uVar1 = puVar5[1];
      *param_4 = (0xff00ff - (uVar2 & 0xff00ff00)) + (uVar1 & 0xff00ff00) & 0xff00ff00 |
                 (-0xff0100 - (uVar2 & 0xff00ff)) + (uVar1 & 0xff00ff) & 0xff00ff;
      lVar3 = lVar4;
      param_4 = param_4 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar4 != param_2 + (long)param_3 * 4);
    return;
  }
  return;
}



void VP8LBundleColorMap_C(long param_1,int param_2,int param_3,long param_4)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  if (0 < param_3) {
    bVar4 = (byte)param_3;
    if (0 < param_2) {
      lVar3 = 0;
      uVar6 = 0xff000000;
      do {
        pbVar1 = (byte *)(param_1 + lVar3);
        uVar2 = (uint)lVar3;
        uVar5 = (1 << (bVar4 & 0x1f)) - 1U & uVar2;
        if (uVar5 == 0) {
          uVar6 = 0xff000000;
        }
        lVar3 = lVar3 + 1;
        uVar6 = uVar6 | (uint)*pbVar1 << ((char)(uVar5 << (3 - bVar4 & 0x1f)) + 8U & 0x1f);
        *(uint *)(param_4 + (long)((int)uVar2 >> (bVar4 & 0x1f)) * 4) = uVar6;
      } while (param_2 != lVar3);
    }
    return;
  }
  lVar3 = 0;
  if (0 < param_2) {
    do {
      *(uint *)(param_4 + lVar3 * 4) = (uint)*(byte *)(param_1 + lVar3) << 8 | 0xff000000;
      lVar3 = lVar3 + 1;
    } while (lVar3 != param_2);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FastSLog2Slow_C(uint param_1)

{
  int iVar1;
  byte bVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_1 < 0x10000) {
    iVar1 = 0x1f;
    if (param_1 != 0) {
      for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    bVar2 = (byte)(iVar1 + -7);
    auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar4._0_4_ = ((float)(iVar1 + -7) +
                   *(float *)(kLog2Table + (ulong)(param_1 >> (bVar2 & 0x1f)) * 4)) *
                   (float)(int)param_1 + (float)(((1 << (bVar2 & 0x1f)) - 1U & param_1) * 0x17 >> 4)
    ;
    return auVar4._0_8_;
  }
  dVar3 = log((double)param_1);
  auVar5._0_8_ = dVar3 * (double)param_1 * __LC0;
  auVar5._8_8_ = extraout_XMM0_Qb;
  auVar6._4_12_ = auVar5._4_12_;
  auVar6._0_4_ = (float)auVar5._0_8_;
  return auVar6._0_8_;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FastLog2Slow_C(uint param_1)

{
  int iVar1;
  byte bVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (0xffff < param_1) {
    dVar3 = log((double)param_1);
    auVar5._0_8_ = dVar3 * __LC0;
    auVar5._8_8_ = extraout_XMM0_Qb;
    auVar6._4_12_ = auVar5._4_12_;
    auVar6._0_4_ = (float)auVar5._0_8_;
    return auVar6._0_8_;
  }
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  bVar2 = (byte)(iVar1 + -7);
  auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar4._0_4_ = (float)(iVar1 + -7) +
                 *(float *)(kLog2Table + (ulong)(param_1 >> (bVar2 & 0x1f)) * 4);
  if (0xfff < param_1) {
    dVar3 = (double)auVar4._0_4_ +
            (double)(((1 << (bVar2 & 0x1f)) - 1U & param_1) * 0x17 >> 4) / (double)(int)param_1;
    return CONCAT44((int)((ulong)dVar3 >> 0x20),(float)dVar3);
  }
  return auVar4._0_8_;
}



void PredictorSub1_C(long param_1,undefined8 param_2,int param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  
  if (0 < param_3) {
    lVar2 = 0;
    do {
      uVar1 = *(uint *)(param_1 + -4 + lVar2);
      *(uint *)(param_4 + lVar2) =
           (*(uint *)(param_1 + lVar2) | 0xff00ff00) - (uVar1 & 0xff00ff) & 0xff00ff |
           (*(uint *)(param_1 + lVar2) | 0xff00ff) - (uVar1 & 0xff00ff00) & 0xff00ff00;
      lVar2 = lVar2 + 4;
    } while ((long)param_3 * 4 - lVar2 != 0);
  }
  return;
}



void PredictorSub9_C(long param_1,long param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  
  if (0 < param_3) {
    lVar3 = param_2;
    puVar5 = (uint *)(param_1 + -4);
    do {
      lVar4 = lVar3 + 4;
      uVar2 = VP8LPredictor9_C(puVar5,lVar3);
      uVar1 = puVar5[1];
      *param_4 = (0xff00ff - (uVar2 & 0xff00ff00)) + (uVar1 & 0xff00ff00) & 0xff00ff00 |
                 (-0xff0100 - (uVar2 & 0xff00ff)) + (uVar1 & 0xff00ff) & 0xff00ff;
      lVar3 = lVar4;
      param_4 = param_4 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar4 != param_2 + (long)param_3 * 4);
    return;
  }
  return;
}



void PredictorSub10_C(long param_1,long param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  
  if (0 < param_3) {
    lVar3 = param_2;
    puVar5 = (uint *)(param_1 + -4);
    do {
      lVar4 = lVar3 + 4;
      uVar2 = VP8LPredictor10_C(puVar5,lVar3);
      uVar1 = puVar5[1];
      *param_4 = (0xff00ff - (uVar2 & 0xff00ff00)) + (uVar1 & 0xff00ff00) & 0xff00ff00 |
                 (-0xff0100 - (uVar2 & 0xff00ff)) + (uVar1 & 0xff00ff) & 0xff00ff;
      lVar3 = lVar4;
      param_4 = param_4 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar4 != param_2 + (long)param_3 * 4);
    return;
  }
  return;
}



void PredictorSub11_C(long param_1,long param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  
  if (0 < param_3) {
    lVar3 = param_2;
    puVar5 = (uint *)(param_1 + -4);
    do {
      lVar4 = lVar3 + 4;
      uVar2 = VP8LPredictor11_C(puVar5,lVar3);
      uVar1 = puVar5[1];
      *param_4 = (0xff00ff - (uVar2 & 0xff00ff00)) + (uVar1 & 0xff00ff00) & 0xff00ff00 |
                 (-0xff0100 - (uVar2 & 0xff00ff)) + (uVar1 & 0xff00ff) & 0xff00ff;
      lVar3 = lVar4;
      param_4 = param_4 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar4 != param_2 + (long)param_3 * 4);
    return;
  }
  return;
}



void PredictorSub12_C(long param_1,long param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  
  if (0 < param_3) {
    lVar3 = param_2;
    puVar5 = (uint *)(param_1 + -4);
    do {
      lVar4 = lVar3 + 4;
      uVar2 = VP8LPredictor12_C(puVar5,lVar3);
      uVar1 = puVar5[1];
      *param_4 = (0xff00ff - (uVar2 & 0xff00ff00)) + (uVar1 & 0xff00ff00) & 0xff00ff00 |
                 (-0xff0100 - (uVar2 & 0xff00ff)) + (uVar1 & 0xff00ff) & 0xff00ff;
      lVar3 = lVar4;
      param_4 = param_4 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar4 != param_2 + (long)param_3 * 4);
    return;
  }
  return;
}



void PredictorSub2_C(long param_1,long param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  
  if (0 < param_3) {
    lVar3 = param_2;
    puVar5 = (uint *)(param_1 + -4);
    do {
      lVar4 = lVar3 + 4;
      uVar2 = VP8LPredictor2_C(puVar5,lVar3);
      uVar1 = puVar5[1];
      *param_4 = (0xff00ff - (uVar2 & 0xff00ff00)) + (uVar1 & 0xff00ff00) & 0xff00ff00 |
                 (-0xff0100 - (uVar2 & 0xff00ff)) + (uVar1 & 0xff00ff) & 0xff00ff;
      lVar3 = lVar4;
      param_4 = param_4 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar4 != param_2 + (long)param_3 * 4);
    return;
  }
  return;
}



void PredictorSub3_C(long param_1,long param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  
  if (0 < param_3) {
    lVar3 = param_2;
    puVar5 = (uint *)(param_1 + -4);
    do {
      lVar4 = lVar3 + 4;
      uVar2 = VP8LPredictor3_C(puVar5,lVar3);
      uVar1 = puVar5[1];
      *param_4 = (0xff00ff - (uVar2 & 0xff00ff00)) + (uVar1 & 0xff00ff00) & 0xff00ff00 |
                 (-0xff0100 - (uVar2 & 0xff00ff)) + (uVar1 & 0xff00ff) & 0xff00ff;
      lVar3 = lVar4;
      param_4 = param_4 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar4 != param_2 + (long)param_3 * 4);
    return;
  }
  return;
}



void PredictorSub4_C(long param_1,long param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  
  if (0 < param_3) {
    lVar3 = param_2;
    puVar5 = (uint *)(param_1 + -4);
    do {
      lVar4 = lVar3 + 4;
      uVar2 = VP8LPredictor4_C(puVar5,lVar3);
      uVar1 = puVar5[1];
      *param_4 = (0xff00ff - (uVar2 & 0xff00ff00)) + (uVar1 & 0xff00ff00) & 0xff00ff00 |
                 (-0xff0100 - (uVar2 & 0xff00ff)) + (uVar1 & 0xff00ff) & 0xff00ff;
      lVar3 = lVar4;
      param_4 = param_4 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar4 != param_2 + (long)param_3 * 4);
    return;
  }
  return;
}



void PredictorSub5_C(long param_1,long param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  
  if (0 < param_3) {
    lVar3 = param_2;
    puVar5 = (uint *)(param_1 + -4);
    do {
      lVar4 = lVar3 + 4;
      uVar2 = VP8LPredictor5_C(puVar5,lVar3);
      uVar1 = puVar5[1];
      *param_4 = (0xff00ff - (uVar2 & 0xff00ff00)) + (uVar1 & 0xff00ff00) & 0xff00ff00 |
                 (-0xff0100 - (uVar2 & 0xff00ff)) + (uVar1 & 0xff00ff) & 0xff00ff;
      lVar3 = lVar4;
      param_4 = param_4 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar4 != param_2 + (long)param_3 * 4);
    return;
  }
  return;
}



void PredictorSub6_C(long param_1,long param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  
  if (0 < param_3) {
    lVar3 = param_2;
    puVar5 = (uint *)(param_1 + -4);
    do {
      lVar4 = lVar3 + 4;
      uVar2 = VP8LPredictor6_C(puVar5,lVar3);
      uVar1 = puVar5[1];
      *param_4 = (0xff00ff - (uVar2 & 0xff00ff00)) + (uVar1 & 0xff00ff00) & 0xff00ff00 |
                 (-0xff0100 - (uVar2 & 0xff00ff)) + (uVar1 & 0xff00ff) & 0xff00ff;
      lVar3 = lVar4;
      param_4 = param_4 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar4 != param_2 + (long)param_3 * 4);
    return;
  }
  return;
}



void PredictorSub7_C(long param_1,long param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  
  if (0 < param_3) {
    lVar3 = param_2;
    puVar5 = (uint *)(param_1 + -4);
    do {
      lVar4 = lVar3 + 4;
      uVar2 = VP8LPredictor7_C(puVar5,lVar3);
      uVar1 = puVar5[1];
      *param_4 = (0xff00ff - (uVar2 & 0xff00ff00)) + (uVar1 & 0xff00ff00) & 0xff00ff00 |
                 (-0xff0100 - (uVar2 & 0xff00ff)) + (uVar1 & 0xff00ff) & 0xff00ff;
      lVar3 = lVar4;
      param_4 = param_4 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar4 != param_2 + (long)param_3 * 4);
    return;
  }
  return;
}



void PredictorSub8_C(long param_1,long param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  
  if (0 < param_3) {
    lVar3 = param_2;
    puVar5 = (uint *)(param_1 + -4);
    do {
      lVar4 = lVar3 + 4;
      uVar2 = VP8LPredictor8_C(puVar5,lVar3);
      uVar1 = puVar5[1];
      *param_4 = (0xff00ff - (uVar2 & 0xff00ff00)) + (uVar1 & 0xff00ff00) & 0xff00ff00 |
                 (-0xff0100 - (uVar2 & 0xff00ff)) + (uVar1 & 0xff00ff) & 0xff00ff;
      lVar3 = lVar4;
      param_4 = param_4 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar4 != param_2 + (long)param_3 * 4);
    return;
  }
  return;
}



float CombinedShannonEntropy_C(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = 0.0;
  uVar5 = 0;
  uVar4 = 0;
  lVar2 = 0;
  do {
    while( true ) {
      uVar1 = *(uint *)(param_1 + lVar2);
      uVar3 = *(uint *)(param_2 + lVar2);
      if (uVar1 == 0) break;
      uVar3 = uVar3 + uVar1;
      uVar4 = (ulong)((int)uVar4 + uVar1);
      if (uVar1 < 0x100) {
        fVar6 = *(float *)(kSLog2Table + (ulong)uVar1 * 4);
      }
      else {
        fVar6 = (float)(*VP8LFastSLog2Slow)(uVar1);
      }
      fVar8 = fVar8 - fVar6;
      uVar5 = (ulong)((int)uVar5 + uVar3);
      if (uVar3 < 0x100) {
        fVar6 = *(float *)(kSLog2Table + (ulong)uVar3 * 4);
      }
      else {
        fVar6 = (float)(*VP8LFastSLog2Slow)(uVar3);
      }
LAB_00100eb0:
      lVar2 = lVar2 + 4;
      fVar8 = fVar8 - fVar6;
      if (lVar2 == 0x400) goto LAB_00100ec1;
    }
    if (uVar3 != 0) {
      uVar5 = (ulong)((int)uVar5 + uVar3);
      if (uVar3 < 0x100) {
        fVar6 = *(float *)(kSLog2Table + (ulong)uVar3 * 4);
      }
      else {
        fVar6 = (float)(*VP8LFastSLog2Slow)();
      }
      goto LAB_00100eb0;
    }
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x400);
LAB_00100ec1:
  if ((uint)uVar4 < 0x100) {
    fVar6 = *(float *)(kSLog2Table + uVar4 * 4);
  }
  else {
    fVar6 = (float)(*VP8LFastSLog2Slow)(uVar4);
  }
  if ((uint)uVar5 < 0x100) {
    fVar7 = *(float *)(kSLog2Table + uVar5 * 4);
  }
  else {
    fVar7 = (float)(*VP8LFastSLog2Slow)(uVar5);
  }
  return fVar7 + fVar6 + fVar8;
}



void GetCombinedEntropyUnrefined_C
               (int *param_1,int *param_2,uint param_3,float *param_4,undefined1 (*param_5) [16])

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  ulong uVar5;
  int iVar6;
  float fVar7;
  
  fVar3 = (float)(*param_2 + *param_1);
  *(undefined8 *)param_5[1] = 0;
  *param_5 = (undefined1  [16])0x0;
  param_4[0] = 0.0;
  param_4[1] = 0.0;
  param_4[2] = 0.0;
  param_4[3] = 0.0;
  param_4[4] = -NAN;
  if ((int)param_3 < 2) {
    uVar1 = 0;
    uVar5 = 0;
    iVar6 = 1;
    fVar7 = 0.0;
  }
  else {
    uVar2 = 1;
    uVar5 = 0;
    uVar1 = 0;
    fVar4 = fVar3;
    do {
      fVar3 = (float)(param_2[uVar2] + param_1[uVar2]);
      if (fVar3 != fVar4) {
        iVar6 = (int)uVar2 - (int)(float)uVar1;
        if (fVar4 != 0.0) {
          param_4[2] = (float)((int)param_4[2] + iVar6);
          param_4[4] = (float)uVar1;
          param_4[1] = (float)(iVar6 * (int)fVar4 + (int)uVar5);
          if ((uint)fVar4 < 0x100) {
            fVar7 = *(float *)(kSLog2Table + (ulong)(uint)fVar4 * 4);
          }
          else {
            fVar7 = (float)(*VP8LFastSLog2Slow)(fVar4);
          }
          *param_4 = *param_4 - (float)iVar6 * fVar7;
          if ((uint)param_4[3] < (uint)fVar4) {
            param_4[3] = fVar4;
          }
          uVar5 = (ulong)(uint)param_4[1];
        }
        uVar1 = uVar2 & 0xffffffff;
        *(uint *)(*param_5 + (ulong)(fVar4 != 0.0) * 4) =
             *(int *)(*param_5 + (ulong)(fVar4 != 0.0) * 4) + (uint)(3 < iVar6);
        *(int *)(*param_5 + ((ulong)(3 < iVar6) + (ulong)(fVar4 != 0.0) * 2) * 4 + 8) =
             *(int *)(*param_5 + ((ulong)(3 < iVar6) + (ulong)(fVar4 != 0.0) * 2) * 4 + 8) + iVar6;
      }
      fVar7 = (float)uVar1;
      uVar2 = uVar2 + 1;
      fVar4 = fVar3;
    } while (param_3 != uVar2);
    iVar6 = param_3 - (int)fVar7;
    uVar1 = (ulong)(3 < iVar6);
  }
  if (fVar3 != 0.0) {
    param_4[2] = (float)((int)param_4[2] + iVar6);
    param_4[4] = fVar7;
    param_4[1] = (float)(iVar6 * (int)fVar3 + (int)uVar5);
    if ((uint)fVar3 < 0x100) {
      fVar7 = *(float *)(kSLog2Table + (ulong)(uint)fVar3 * 4);
    }
    else {
      fVar7 = (float)(*VP8LFastSLog2Slow)(fVar3);
    }
    *param_4 = *param_4 - (float)iVar6 * fVar7;
    if ((uint)param_4[3] < (uint)fVar3) {
      param_4[3] = fVar3;
    }
    uVar5 = (ulong)(uint)param_4[1];
  }
  *(int *)(*param_5 + (ulong)(fVar3 != 0.0) * 4) =
       *(int *)(*param_5 + (ulong)(fVar3 != 0.0) * 4) + (int)uVar1;
  *(int *)(*param_5 + (uVar1 + (ulong)(fVar3 != 0.0) * 2) * 4 + 8) =
       *(int *)(*param_5 + (uVar1 + (ulong)(fVar3 != 0.0) * 2) * 4 + 8) + iVar6;
  if ((uint)uVar5 < 0x100) {
    fVar3 = *(float *)(kSLog2Table + uVar5 * 4);
  }
  else {
    fVar3 = (float)(*VP8LFastSLog2Slow)();
  }
  *param_4 = fVar3 + *param_4;
  return;
}



void GetEntropyUnrefined_C(float *param_1,uint param_2,float *param_3,undefined1 (*param_4) [16])

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *param_1;
  *(undefined8 *)param_4[1] = 0;
  *param_4 = (undefined1  [16])0x0;
  param_3[0] = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  param_3[3] = 0.0;
  param_3[4] = -NAN;
  if ((int)param_2 < 2) {
    uVar1 = 0;
    uVar3 = 0;
    iVar5 = 1;
    fVar7 = 0.0;
  }
  else {
    uVar2 = 1;
    uVar3 = 0;
    uVar1 = 0;
    fVar4 = fVar6;
    do {
      fVar6 = param_1[uVar2];
      if (fVar6 != fVar4) {
        iVar5 = (int)uVar2 - (int)(float)uVar1;
        if (fVar4 != 0.0) {
          param_3[2] = (float)((int)param_3[2] + iVar5);
          param_3[4] = (float)uVar1;
          param_3[1] = (float)(iVar5 * (int)fVar4 + (int)uVar3);
          if ((uint)fVar4 < 0x100) {
            fVar7 = *(float *)(kSLog2Table + (ulong)(uint)fVar4 * 4);
          }
          else {
            fVar7 = (float)(*VP8LFastSLog2Slow)(fVar4);
          }
          *param_3 = *param_3 - (float)iVar5 * fVar7;
          if ((uint)param_3[3] < (uint)fVar4) {
            param_3[3] = fVar4;
          }
          uVar3 = (ulong)(uint)param_3[1];
        }
        uVar1 = uVar2 & 0xffffffff;
        *(uint *)(*param_4 + (ulong)(fVar4 != 0.0) * 4) =
             *(int *)(*param_4 + (ulong)(fVar4 != 0.0) * 4) + (uint)(3 < iVar5);
        *(int *)(*param_4 + ((ulong)(3 < iVar5) + (ulong)(fVar4 != 0.0) * 2) * 4 + 8) =
             *(int *)(*param_4 + ((ulong)(3 < iVar5) + (ulong)(fVar4 != 0.0) * 2) * 4 + 8) + iVar5;
      }
      fVar7 = (float)uVar1;
      uVar2 = uVar2 + 1;
      fVar4 = fVar6;
    } while (param_2 != uVar2);
    iVar5 = param_2 - (int)fVar7;
    uVar1 = (ulong)(3 < iVar5);
  }
  if (fVar6 != 0.0) {
    param_3[2] = (float)((int)param_3[2] + iVar5);
    param_3[4] = fVar7;
    param_3[1] = (float)(iVar5 * (int)fVar6 + (int)uVar3);
    if ((uint)fVar6 < 0x100) {
      fVar7 = *(float *)(kSLog2Table + (ulong)(uint)fVar6 * 4);
    }
    else {
      fVar7 = (float)(*VP8LFastSLog2Slow)(fVar6);
    }
    *param_3 = *param_3 - (float)iVar5 * fVar7;
    if ((uint)param_3[3] < (uint)fVar6) {
      param_3[3] = fVar6;
    }
    uVar3 = (ulong)(uint)param_3[1];
  }
  *(int *)(*param_4 + (ulong)(fVar6 != 0.0) * 4) =
       *(int *)(*param_4 + (ulong)(fVar6 != 0.0) * 4) + (int)uVar1;
  *(int *)(*param_4 + (uVar1 + (ulong)(fVar6 != 0.0) * 2) * 4 + 8) =
       *(int *)(*param_4 + (uVar1 + (ulong)(fVar6 != 0.0) * 2) * 4 + 8) + iVar5;
  if ((uint)uVar3 < 0x100) {
    fVar6 = *(float *)(kSLog2Table + uVar3 * 4);
  }
  else {
    fVar6 = (float)(*VP8LFastSLog2Slow)();
  }
  *param_3 = fVar6 + *param_3;
  return;
}



void VP8LBitEntropyInit(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  return;
}



void VP8LBitsEntropyUnrefined(long param_1,int param_2,float *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  param_3[0] = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  param_3[3] = 0.0;
  param_3[4] = -NAN;
  if (param_2 < 1) {
    *param_3 = 0.0;
    return;
  }
  lVar2 = 0;
  uVar3 = 0;
  do {
    while (iVar1 = *(int *)(param_1 + lVar2 * 4), iVar1 != 0) {
      param_3[2] = (float)((int)param_3[2] + 1);
      param_3[1] = (float)(iVar1 + (int)uVar3);
      param_3[4] = (float)lVar2;
      fVar4 = *(float *)(param_1 + lVar2 * 4);
      if ((uint)fVar4 < 0x100) {
        fVar5 = *(float *)(kSLog2Table + (ulong)(uint)fVar4 * 4);
      }
      else {
        fVar5 = (float)(*VP8LFastSLog2Slow)();
        fVar4 = *(float *)(param_1 + lVar2 * 4);
      }
      *param_3 = *param_3 - fVar5;
      if ((uint)param_3[3] < (uint)fVar4) {
        param_3[3] = fVar4;
      }
      lVar2 = lVar2 + 1;
      uVar3 = (ulong)(uint)param_3[1];
      if (param_2 == lVar2) goto LAB_00101514;
    }
    lVar2 = lVar2 + 1;
  } while (param_2 != lVar2);
LAB_00101514:
  if (0xff < (uint)uVar3) {
    fVar4 = (float)(*VP8LFastSLog2Slow)();
    *param_3 = fVar4 + *param_3;
    return;
  }
  *param_3 = *(float *)(kSLog2Table + uVar3 * 4) + *param_3;
  return;
}



void VP8LHistogramAdd(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *__s;
  long lVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  iVar3 = 0x118;
  if (0 < *(int *)(param_1 + 0x195)) {
    iVar3 = (1 << ((byte)*(int *)(param_1 + 0x195) & 0x1f)) + 0x118;
  }
  if (param_2 == param_3) {
    if (*(char *)(param_1 + 0x198) != '\0') {
      if (*(char *)(param_3 + 0x198) == '\0') {
        memcpy((void *)*param_3,(void *)*param_1,(long)iVar3 << 2);
      }
      else {
        (*VP8LAddVectorEq)((void *)*param_1,(void *)*param_3);
      }
    }
    if (*(char *)((long)param_1 + 0xcc1) != '\0') {
      if (*(char *)((long)param_3 + 0xcc1) == '\0') {
        lVar1 = (long)param_3 + (8 - (long)((ulong)(param_3 + 2) & 0xfffffffffffffff8));
        param_3[1] = param_1[1];
        param_3[0x80] = param_1[0x80];
        puVar5 = (undefined8 *)((long)param_1 + (8 - lVar1));
        puVar6 = (undefined8 *)((ulong)(param_3 + 2) & 0xfffffffffffffff8);
        for (uVar2 = (ulong)((int)lVar1 + 0x400U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
          puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
        }
      }
      else {
        (*VP8LAddVectorEq)(param_1 + 1,param_3 + 1,0x100);
      }
    }
    if (*(char *)((long)param_1 + 0xcc2) != '\0') {
      if (*(char *)((long)param_3 + 0xcc2) == '\0') {
        lVar1 = (long)param_3 + (0x408 - (long)((ulong)(param_3 + 0x82) & 0xfffffffffffffff8));
        param_3[0x81] = param_1[0x81];
        param_3[0x100] = param_1[0x100];
        puVar5 = (undefined8 *)((long)param_1 + (0x408 - lVar1));
        puVar6 = (undefined8 *)((ulong)(param_3 + 0x82) & 0xfffffffffffffff8);
        for (uVar2 = (ulong)((int)lVar1 + 0x400U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
          puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
        }
      }
      else {
        (*VP8LAddVectorEq)(param_1 + 0x81,param_3 + 0x81,0x100);
      }
    }
    if (*(char *)((long)param_1 + 0xcc3) != '\0') {
      if (*(char *)((long)param_3 + 0xcc3) == '\0') {
        lVar1 = (long)param_3 + (0x808 - (long)((ulong)(param_3 + 0x102) & 0xfffffffffffffff8));
        param_3[0x101] = param_1[0x101];
        param_3[0x180] = param_1[0x180];
        puVar5 = (undefined8 *)((long)param_1 + (0x808 - lVar1));
        puVar6 = (undefined8 *)((ulong)(param_3 + 0x102) & 0xfffffffffffffff8);
        for (uVar2 = (ulong)((int)lVar1 + 0x400U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
          puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
        }
      }
      else {
        (*VP8LAddVectorEq)(param_1 + 0x101,param_3 + 0x101,0x100);
      }
    }
    if (*(char *)((long)param_1 + 0xcc4) != '\0') {
      if (*(char *)((long)param_3 + 0xcc4) == '\0') {
        uVar4 = param_1[0x182];
        param_3[0x181] = param_1[0x181];
        param_3[0x182] = uVar4;
        uVar4 = param_1[0x184];
        param_3[0x183] = param_1[0x183];
        param_3[0x184] = uVar4;
        uVar4 = param_1[0x186];
        param_3[0x185] = param_1[0x185];
        param_3[0x186] = uVar4;
        uVar4 = param_1[0x188];
        param_3[0x187] = param_1[0x187];
        param_3[0x188] = uVar4;
        uVar4 = param_1[0x18a];
        param_3[0x189] = param_1[0x189];
        param_3[0x18a] = uVar4;
        uVar4 = param_1[0x18c];
        param_3[0x18b] = param_1[0x18b];
        param_3[0x18c] = uVar4;
        uVar4 = param_1[0x18e];
        param_3[0x18d] = param_1[0x18d];
        param_3[0x18e] = uVar4;
        uVar4 = param_1[400];
        param_3[399] = param_1[399];
        param_3[400] = uVar4;
        uVar4 = param_1[0x192];
        param_3[0x191] = param_1[0x191];
        param_3[0x192] = uVar4;
        uVar4 = param_1[0x194];
        param_3[0x193] = param_1[0x193];
        param_3[0x194] = uVar4;
      }
      else {
        (*VP8LAddVectorEq)(param_1 + 0x181,param_3 + 0x181,0x28);
      }
    }
    lVar1 = 0xcc0;
    do {
      *(byte *)((long)param_3 + lVar1) =
           *(byte *)((long)param_3 + lVar1) | *(byte *)((long)param_1 + lVar1);
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0xcc5);
    return;
  }
  __s = (void *)*param_3;
  if (*(char *)(param_1 + 0x198) == '\0') {
    if (*(char *)(param_2 + 0x198) == '\0') {
      memset(__s,0,(long)iVar3 << 2);
    }
    else {
      memcpy(__s,(void *)*param_2,(long)iVar3 << 2);
    }
  }
  else if (*(char *)(param_2 + 0x198) == '\0') {
    memcpy(__s,(void *)*param_1,(long)iVar3 << 2);
  }
  else {
    (*VP8LAddVector)((void *)*param_1,*param_2,__s,iVar3);
  }
  iVar3 = (int)param_3;
  if (*(char *)((long)param_1 + 0xcc1) == '\0') {
    if (*(char *)((long)param_2 + 0xcc1) != '\0') {
      puVar5 = param_2 + 1;
      param_3[1] = param_2[1];
      uVar4 = param_2[0x80];
      goto LAB_001018d2;
    }
    param_3[1] = 0;
    param_3[0x80] = 0;
    puVar5 = (undefined8 *)((ulong)(param_3 + 2) & 0xfffffffffffffff8);
    for (uVar2 = (ulong)((iVar3 - (int)(undefined8 *)((ulong)(param_3 + 2) & 0xfffffffffffffff8)) +
                         0x408U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
    }
  }
  else if (*(char *)((long)param_2 + 0xcc1) == '\0') {
    puVar5 = param_1 + 1;
    param_3[1] = param_1[1];
    uVar4 = param_1[0x80];
LAB_001018d2:
    param_3[0x80] = uVar4;
    lVar1 = (long)param_3 + (8 - (long)((ulong)(param_3 + 2) & 0xfffffffffffffff8));
    puVar5 = (undefined8 *)((long)puVar5 - lVar1);
    puVar6 = (undefined8 *)((ulong)(param_3 + 2) & 0xfffffffffffffff8);
    for (uVar2 = (ulong)((int)lVar1 + 0x400U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
      puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
    }
  }
  else {
    (*VP8LAddVector)(param_1 + 1,param_2 + 1,param_3 + 1,0x100);
  }
  if (*(char *)((long)param_1 + 0xcc2) == '\0') {
    if (*(char *)((long)param_2 + 0xcc2) != '\0') {
      puVar5 = param_2 + 0x81;
      param_3[0x81] = param_2[0x81];
      uVar4 = param_2[0x100];
      goto LAB_0010187e;
    }
    param_3[0x81] = 0;
    param_3[0x100] = 0;
    puVar5 = (undefined8 *)((ulong)(param_3 + 0x82) & 0xfffffffffffffff8);
    for (uVar2 = (ulong)((iVar3 - (int)(undefined8 *)((ulong)(param_3 + 0x82) & 0xfffffffffffffff8))
                         + 0x808U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
    }
  }
  else if (*(char *)((long)param_2 + 0xcc2) == '\0') {
    puVar5 = param_1 + 0x81;
    param_3[0x81] = param_1[0x81];
    uVar4 = param_1[0x100];
LAB_0010187e:
    param_3[0x100] = uVar4;
    lVar1 = (long)param_3 + (0x408 - (long)((ulong)(param_3 + 0x82) & 0xfffffffffffffff8));
    puVar5 = (undefined8 *)((long)puVar5 - lVar1);
    puVar6 = (undefined8 *)((ulong)(param_3 + 0x82) & 0xfffffffffffffff8);
    for (uVar2 = (ulong)((int)lVar1 + 0x400U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
      puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
    }
  }
  else {
    (*VP8LAddVector)(param_1 + 0x81,param_2 + 0x81,param_3 + 0x81,0x100);
  }
  if (*(char *)((long)param_1 + 0xcc3) == '\0') {
    if (*(char *)((long)param_2 + 0xcc3) == '\0') {
      param_3[0x101] = 0;
      param_3[0x180] = 0;
      puVar5 = (undefined8 *)((ulong)(param_3 + 0x102) & 0xfffffffffffffff8);
      for (uVar2 = (ulong)((iVar3 - (int)(undefined8 *)
                                         ((ulong)(param_3 + 0x102) & 0xfffffffffffffff8)) + 0xc08U
                          >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
      }
      goto LAB_001016b3;
    }
    puVar5 = param_2 + 0x101;
    param_3[0x101] = param_2[0x101];
    uVar4 = param_2[0x180];
  }
  else {
    if (*(char *)((long)param_2 + 0xcc3) != '\0') {
      (*VP8LAddVector)(param_1 + 0x101,param_2 + 0x101,param_3 + 0x101,0x100);
      goto LAB_001016b3;
    }
    puVar5 = param_1 + 0x101;
    param_3[0x101] = param_1[0x101];
    uVar4 = param_1[0x180];
  }
  param_3[0x180] = uVar4;
  lVar1 = (long)param_3 + (0x808 - (long)((ulong)(param_3 + 0x102) & 0xfffffffffffffff8));
  puVar5 = (undefined8 *)((long)puVar5 - lVar1);
  puVar6 = (undefined8 *)((ulong)(param_3 + 0x102) & 0xfffffffffffffff8);
  for (uVar2 = (ulong)((int)lVar1 + 0x400U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
    puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
  }
LAB_001016b3:
  if (*(char *)((long)param_1 + 0xcc4) == '\0') {
    if (*(char *)((long)param_2 + 0xcc4) == '\0') {
      param_3[0x181] = 0;
      param_3[0x194] = 0;
      puVar5 = (undefined8 *)((ulong)(param_3 + 0x182) & 0xfffffffffffffff8);
      for (uVar2 = (ulong)((iVar3 - (int)(undefined8 *)
                                         ((ulong)(param_3 + 0x182) & 0xfffffffffffffff8)) + 0xca8U
                          >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
      }
    }
    else {
      uVar4 = param_2[0x182];
      param_3[0x181] = param_2[0x181];
      param_3[0x182] = uVar4;
      uVar4 = param_2[0x184];
      param_3[0x183] = param_2[0x183];
      param_3[0x184] = uVar4;
      uVar4 = param_2[0x186];
      param_3[0x185] = param_2[0x185];
      param_3[0x186] = uVar4;
      uVar4 = param_2[0x188];
      param_3[0x187] = param_2[0x187];
      param_3[0x188] = uVar4;
      uVar4 = param_2[0x18a];
      param_3[0x189] = param_2[0x189];
      param_3[0x18a] = uVar4;
      uVar4 = param_2[0x18c];
      param_3[0x18b] = param_2[0x18b];
      param_3[0x18c] = uVar4;
      uVar4 = param_2[0x18e];
      param_3[0x18d] = param_2[0x18d];
      param_3[0x18e] = uVar4;
      uVar4 = param_2[400];
      param_3[399] = param_2[399];
      param_3[400] = uVar4;
      uVar4 = param_2[0x192];
      param_3[0x191] = param_2[0x191];
      param_3[0x192] = uVar4;
      uVar4 = param_2[0x194];
      param_3[0x193] = param_2[0x193];
      param_3[0x194] = uVar4;
    }
  }
  else if (*(char *)((long)param_2 + 0xcc4) == '\0') {
    uVar4 = param_1[0x182];
    param_3[0x181] = param_1[0x181];
    param_3[0x182] = uVar4;
    uVar4 = param_1[0x184];
    param_3[0x183] = param_1[0x183];
    param_3[0x184] = uVar4;
    uVar4 = param_1[0x186];
    param_3[0x185] = param_1[0x185];
    param_3[0x186] = uVar4;
    uVar4 = param_1[0x188];
    param_3[0x187] = param_1[0x187];
    param_3[0x188] = uVar4;
    uVar4 = param_1[0x18a];
    param_3[0x189] = param_1[0x189];
    param_3[0x18a] = uVar4;
    uVar4 = param_1[0x18c];
    param_3[0x18b] = param_1[0x18b];
    param_3[0x18c] = uVar4;
    uVar4 = param_1[0x18e];
    param_3[0x18d] = param_1[0x18d];
    param_3[0x18e] = uVar4;
    uVar4 = param_1[400];
    param_3[399] = param_1[399];
    param_3[400] = uVar4;
    uVar4 = param_1[0x192];
    param_3[0x191] = param_1[0x191];
    param_3[0x192] = uVar4;
    uVar4 = param_1[0x194];
    param_3[0x193] = param_1[0x193];
    param_3[0x194] = uVar4;
  }
  else {
    (*VP8LAddVector)(param_1 + 0x181,param_2 + 0x181,param_3 + 0x181,0x28);
  }
  lVar1 = 0xcc0;
  do {
    *(byte *)((long)param_3 + lVar1) =
         *(byte *)((long)param_1 + lVar1) | *(byte *)((long)param_2 + lVar1);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0xcc5);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8LEncDspInit(void)

{
  int iVar1;
  
  if ((code *)VP8LEncDspInit_body_last_cpuinfo_used_0 == _VP8GetCPUInfo) {
    return;
  }
  VP8LDspInit();
  VP8LSubtractGreenFromBlueAndRed = 0x100000;
  VP8LTransformColor = VP8LTransformColor_C;
  VP8LCollectColorBlueTransforms = VP8LCollectColorBlueTransforms_C;
  VP8LCollectColorRedTransforms = VP8LCollectColorRedTransforms_C;
  VP8LFastLog2Slow = FastLog2Slow_C;
  VP8LFastSLog2Slow = FastSLog2Slow_C;
  VP8LExtraCost = ExtraCost_C;
  VP8LExtraCostCombined = ExtraCostCombined_C;
  VP8LCombinedShannonEntropy = CombinedShannonEntropy_C;
  VP8LGetEntropyUnrefined = GetEntropyUnrefined_C;
  VP8LGetCombinedEntropyUnrefined = GetCombinedEntropyUnrefined_C;
  VP8LAddVector = AddVector_C;
  VP8LAddVectorEq = AddVectorEq_C;
  VP8LVectorMismatch = VectorMismatch_C;
  VP8LBundleColorMap = VP8LBundleColorMap_C;
  VP8LPredictorsSub._0_8_ = PredictorSub0_C;
  VP8LPredictorsSub._8_8_ = PredictorSub1_C;
  VP8LPredictorsSub._16_8_ = PredictorSub2_C;
  VP8LPredictorsSub._24_8_ = PredictorSub3_C;
  VP8LPredictorsSub._32_8_ = PredictorSub4_C;
  VP8LPredictorsSub._40_8_ = PredictorSub5_C;
  VP8LPredictorsSub._48_8_ = PredictorSub6_C;
  VP8LPredictorsSub._56_8_ = PredictorSub7_C;
  VP8LPredictorsSub._64_8_ = PredictorSub8_C;
  VP8LPredictorsSub._72_8_ = PredictorSub9_C;
  VP8LPredictorsSub._80_8_ = PredictorSub10_C;
  VP8LPredictorsSub._88_8_ = PredictorSub11_C;
  VP8LPredictorsSub._96_8_ = PredictorSub12_C;
  VP8LPredictorsSub._104_8_ = PredictorSub13_C;
  VP8LPredictorsSub._112_8_ = PredictorSub0_C;
  VP8LPredictorsSub._120_8_ = PredictorSub0_C;
  VP8LPredictorsSub_C._0_8_ = PredictorSub0_C;
  VP8LPredictorsSub_C._8_8_ = PredictorSub1_C;
  VP8LPredictorsSub_C._16_8_ = PredictorSub2_C;
  VP8LPredictorsSub_C._24_8_ = PredictorSub3_C;
  VP8LPredictorsSub_C._32_8_ = PredictorSub4_C;
  VP8LPredictorsSub_C._40_8_ = PredictorSub5_C;
  VP8LPredictorsSub_C._48_8_ = PredictorSub6_C;
  VP8LPredictorsSub_C._56_8_ = PredictorSub7_C;
  VP8LPredictorsSub_C._64_8_ = PredictorSub8_C;
  VP8LPredictorsSub_C._72_8_ = PredictorSub9_C;
  VP8LPredictorsSub_C._80_8_ = PredictorSub10_C;
  VP8LPredictorsSub_C._88_8_ = PredictorSub11_C;
  VP8LPredictorsSub_C._96_8_ = PredictorSub12_C;
  VP8LPredictorsSub_C._104_8_ = PredictorSub13_C;
  VP8LPredictorsSub_C._112_8_ = PredictorSub0_C;
  VP8LPredictorsSub_C._120_8_ = PredictorSub0_C;
  if ((_VP8GetCPUInfo != (code *)0x0) && (iVar1 = (*_VP8GetCPUInfo)(0), iVar1 != 0)) {
    VP8LEncDspInitSSE2();
  }
  VP8LEncDspInit_body_last_cpuinfo_used_0 = _VP8GetCPUInfo;
  return;
}



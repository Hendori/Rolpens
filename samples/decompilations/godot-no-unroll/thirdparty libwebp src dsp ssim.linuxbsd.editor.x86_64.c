
double SSIMGetClipped_C(long param_1,int param_2,long param_3,int param_4,int param_5,int param_6,
                       int param_7,int param_8)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  
  iVar13 = 3;
  if (2 < param_6) {
    iVar13 = param_6;
  }
  iVar7 = iVar13 + -3;
  iVar4 = param_8 + -1;
  if (param_6 + 2 < param_8 + -1) {
    iVar4 = param_6 + 3;
  }
  iVar9 = 3;
  if (2 < param_5) {
    iVar9 = param_5;
  }
  iVar17 = param_7 + -1;
  if (param_5 + 2 < param_7 + -1) {
    iVar17 = param_5 + 3;
  }
  param_1 = param_1 + iVar7 * param_2;
  param_3 = param_3 + iVar7 * param_4;
  if (iVar4 < iVar7) {
    dVar18 = 0.0;
    dVar19 = dVar18;
  }
  else {
    iVar13 = iVar13 - param_6;
    uVar6 = 0;
    uVar15 = 0;
    uVar5 = 0;
    uVar14 = 0;
    uVar16 = 0;
    uVar12 = 0;
    do {
      if (iVar9 + -3 <= iVar17) {
        lVar10 = (long)(iVar9 + -3);
        do {
          lVar2 = lVar10 * 4;
          bVar3 = *(byte *)(param_3 + lVar10);
          pbVar1 = (byte *)(param_1 + lVar10);
          lVar10 = lVar10 + 1;
          iVar7 = *(int *)(&UNK_001006bc + lVar2 + ((long)(iVar9 - param_5) - (long)iVar9) * 4) *
                  (&kWeight)[iVar13];
          uVar16 = (ulong)(uint)((int)uVar16 + iVar7);
          iVar8 = iVar7 * (uint)*pbVar1;
          iVar7 = iVar7 * (uint)bVar3;
          uVar14 = (ulong)(uint)((int)uVar14 + iVar8);
          uVar5 = (ulong)(uint)((int)uVar5 + iVar7);
          uVar15 = uVar15 + (uint)*pbVar1 * iVar8;
          uVar12 = uVar12 + iVar8 * (uint)bVar3;
          uVar6 = (ulong)((int)uVar6 + iVar7 * (uint)bVar3);
        } while ((int)lVar10 <= iVar17);
      }
      iVar13 = iVar13 + 1;
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
    } while ((iVar4 - param_6) + 4 != iVar13);
    iVar13 = (int)uVar16 * (int)uVar16;
    uVar11 = uVar14 * uVar14 + uVar5 * uVar5;
    if (uVar11 < (uint)(iVar13 * 0x40)) {
      return _LC1;
    }
    lVar10 = uVar12 * uVar16 - uVar5 * uVar14;
    if (lVar10 < 0) {
      lVar10 = 0;
    }
    uVar5 = ((ulong)(uint)(iVar13 * 0x3c) + lVar10 * 2 >> 8) *
            ((ulong)(uint)(iVar13 * 0x14) + uVar5 * uVar14 * 2);
    if ((long)uVar5 < 0) {
      dVar18 = (double)(uVar5 >> 1) + (double)(uVar5 >> 1);
    }
    else {
      dVar18 = (double)(long)uVar5;
    }
    uVar6 = (((uVar15 + uVar6) * uVar16 + (ulong)(uint)(iVar13 * 0x3c)) - uVar11 >> 8) *
            ((uint)(iVar13 * 0x14) + uVar11);
    if ((long)uVar6 < 0) {
      dVar19 = (double)uVar6;
    }
    else {
      dVar19 = (double)(long)uVar6;
    }
  }
  return dVar18 / dVar19;
}



int AccumulateSSE_C(long param_1,long param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  if (0 < param_3) {
    lVar4 = 0;
    iVar5 = 0;
    do {
      pbVar1 = (byte *)(param_1 + lVar4);
      pbVar2 = (byte *)(param_2 + lVar4);
      lVar4 = lVar4 + 1;
      iVar3 = (uint)*pbVar1 - (uint)*pbVar2;
      iVar5 = iVar5 + iVar3 * iVar3;
    } while (param_3 != lVar4);
    return iVar5;
  }
  return 0;
}



double SSIMGet_C(long param_1,int param_2,long param_3,int param_4)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  double dVar14;
  
  uVar13 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar5 = 0;
  piVar10 = &kWeight;
  uVar9 = 0;
  do {
    lVar7 = 0;
    do {
      piVar1 = &kWeight + lVar7;
      bVar3 = *(byte *)(param_3 + lVar7);
      pbVar2 = (byte *)(param_1 + lVar7);
      lVar7 = lVar7 + 1;
      iVar4 = *piVar1 * *piVar10 * (uint)bVar3;
      iVar6 = *piVar1 * *piVar10 * (uint)*pbVar2;
      uVar12 = (ulong)(uint)((int)uVar12 + iVar4);
      uVar5 = (ulong)(uint)((int)uVar5 + iVar6);
      uVar9 = (ulong)((int)uVar9 + iVar4 * (uint)bVar3);
      uVar11 = uVar11 + (uint)*pbVar2 * iVar6;
      uVar13 = uVar13 + iVar6 * (uint)bVar3;
    } while (lVar7 != 7);
    param_3 = param_3 + param_4;
    param_1 = param_1 + param_2;
    piVar10 = piVar10 + 1;
  } while (piVar10 != (int *)0x1006cc);
  uVar8 = uVar12 * uVar12 + uVar5 * uVar5;
  if (uVar8 < 0x400000) {
    return _LC1;
  }
  lVar7 = (ulong)uVar13 * 0x100 - uVar5 * uVar12;
  if (lVar7 < 0) {
    lVar7 = 0;
  }
  uVar5 = (lVar7 * 2 + 0x3c0000U >> 8) * (uVar5 * uVar12 * 2 + 0x140000);
  if ((long)uVar5 < 0) {
    dVar14 = (double)(uVar5 >> 1) + (double)(uVar5 >> 1);
  }
  else {
    dVar14 = (double)(long)uVar5;
  }
  return dVar14 / (double)((((uVar11 + uVar9) * 0x100 - uVar8) + 0x3c0000 >> 8) * (uVar8 + 0x140000)
                          );
}



double VP8SSIMFromStats(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  double dVar6;
  
  uVar2 = (ulong)*(uint *)(param_1 + 4);
  uVar4 = (ulong)*(uint *)(param_1 + 8);
  uVar1 = uVar4 * uVar4 + uVar2 * uVar2;
  if (uVar1 < 0x400000) {
    return _LC1;
  }
  lVar5 = (ulong)*(uint *)(param_1 + 0x10) * 0x100 - uVar2 * uVar4;
  if (lVar5 < 0) {
    lVar5 = 0;
  }
  uVar3 = (uVar2 * uVar4 * 2 + 0x140000) * (lVar5 * 2 + 0x3c0000U >> 8);
  if ((long)uVar3 < 0) {
    dVar6 = (double)(uVar3 >> 1) + (double)(uVar3 >> 1);
  }
  else {
    dVar6 = (double)(long)uVar3;
  }
  return dVar6 / (double)((((((ulong)*(uint *)(param_1 + 0xc) + (ulong)*(uint *)(param_1 + 0x14)) *
                             0x100 - uVar2 * uVar2) + 0x3c0000) - uVar4 * uVar4 >> 8) *
                         (uVar1 + 0x140000));
}



double VP8SSIMFromStatsClipped(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  
  uVar1 = *param_1;
  uVar7 = (ulong)param_1[1];
  uVar6 = (ulong)param_1[2];
  iVar3 = uVar1 * uVar1;
  uVar2 = uVar6 * uVar6 + uVar7 * uVar7;
  if (uVar2 < (uint)(iVar3 * 0x40)) {
    return _LC1;
  }
  lVar4 = (ulong)param_1[4] * (ulong)uVar1 - uVar7 * uVar6;
  if (lVar4 < 0) {
    lVar4 = 0;
  }
  uVar5 = ((ulong)(uint)(iVar3 * 0x3c) + lVar4 * 2 >> 8) *
          ((ulong)(uint)(iVar3 * 0x14) + uVar7 * uVar6 * 2);
  if ((long)uVar5 < 0) {
    dVar8 = (double)(uVar5 >> 1) + (double)(uVar5 >> 1);
  }
  else {
    dVar8 = (double)(long)uVar5;
  }
  uVar2 = (((((ulong)param_1[5] + (ulong)param_1[3]) * (ulong)uVar1 + (ulong)(uint)(iVar3 * 0x3c)) -
           uVar7 * uVar7) - uVar6 * uVar6 >> 8) * ((uint)(iVar3 * 0x14) + uVar2);
  if (-1 < (long)uVar2) {
    return dVar8 / (double)(long)uVar2;
  }
  return dVar8 / (double)uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8SSIMDspInit(void)

{
  int iVar1;
  
  if ((code *)VP8SSIMDspInit_body_last_cpuinfo_used_0 == _VP8GetCPUInfo) {
    return;
  }
  VP8SSIMGetClipped = 0x100000;
  VP8SSIMGet = SSIMGet_C;
  VP8AccumulateSSE = AccumulateSSE_C;
  if (_VP8GetCPUInfo != (code *)0x0) {
    iVar1 = (*_VP8GetCPUInfo)(0);
    if (iVar1 != 0) {
      VP8SSIMDspInitSSE2();
    }
    VP8SSIMDspInit_body_last_cpuinfo_used_0 = _VP8GetCPUInfo;
    return;
  }
  VP8SSIMDspInit_body_last_cpuinfo_used_0 = _VP8GetCPUInfo;
  return;
}



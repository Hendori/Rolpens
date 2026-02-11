
void BrotliInitBitReader(undefined1 (*param_1) [16])

{
  *param_1 = (undefined1  [16])0x0;
  return;
}



undefined8 BrotliWarmupBitReader(ulong *param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  if (param_1[1] != 0) {
    return 1;
  }
  *param_1 = 0;
  pbVar2 = (byte *)param_1[2];
  if (pbVar2 != (byte *)param_1[4]) {
    bVar1 = *pbVar2;
    param_1[1] = 8;
    param_1[2] = (ulong)(pbVar2 + 1);
    *param_1 = (ulong)bVar1;
    return 1;
  }
  return 0;
}



undefined8 BrotliSafeReadBits32Slow(ulong *param_1,long param_2,ulong *param_3)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  pbVar11 = (byte *)param_1[2];
  pbVar2 = (byte *)param_1[4];
  lVar12 = (long)pbVar2 - (long)pbVar11;
  pbVar9 = pbVar11;
  uVar7 = uVar3;
  uVar6 = uVar4;
  while (uVar6 < 0x10) {
    if (pbVar2 == pbVar9) goto LAB_001000bf;
    bVar1 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    param_1[2] = (ulong)pbVar9;
    bVar5 = (byte)uVar6;
    uVar6 = uVar6 + 8;
    uVar7 = (ulong)bVar1 << (bVar5 & 0x3f) | *param_1;
    *param_1 = uVar7;
    param_1[1] = uVar6;
  }
  uVar6 = uVar6 - 0x10;
  uVar8 = param_2 - 0x10;
  uVar10 = uVar7 >> 0x10;
  param_1[1] = uVar6;
  *param_1 = uVar10;
  if (uVar6 < uVar8) {
    pbVar9 = (byte *)param_1[2];
    do {
      if (pbVar2 == pbVar9) {
LAB_001000bf:
        param_1[2] = (ulong)pbVar11;
        *param_1 = uVar3;
        param_1[1] = uVar4;
        if (lVar12 == 0) {
          param_1[4] = (ulong)pbVar11;
          param_1[3] = (ulong)pbVar11;
        }
        else {
          if (0x1c < lVar12 + 1U) {
            pbVar11 = pbVar11 + lVar12 + -0x1b;
          }
          param_1[3] = (ulong)pbVar11;
        }
        return 0;
      }
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      param_1[2] = (ulong)pbVar9;
      bVar5 = (byte)uVar6;
      uVar6 = uVar6 + 8;
      uVar10 = (ulong)bVar1 << (bVar5 & 0x3f) | *param_1;
      *param_1 = uVar10;
      param_1[1] = uVar6;
    } while (uVar6 < uVar8);
  }
  uVar3 = *(ulong *)(kBrotliBitMask + uVar8 * 8);
  param_1[1] = uVar6 - uVar8;
  *param_1 = uVar10 >> ((byte)uVar8 & 0x3f);
  *param_3 = (uVar3 & uVar10) << 0x10 | uVar7 & 0xffff;
  return 1;
}



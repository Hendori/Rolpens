
uint GetResidualCost_C(int param_1,int *param_2)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ushort *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ushort uVar14;
  
  iVar8 = *param_2;
  lVar9 = (long)iVar8;
  bVar2 = *(byte *)(lVar9 * 0x21 + *(long *)(param_2 + 6) + (long)param_1 * 0xb);
  uVar13 = 0;
  if (param_1 == 0) {
    uVar13 = (uint)*(ushort *)(VP8EntropyCost + (ulong)(byte)~bVar2 * 2);
  }
  iVar4 = param_2[1];
  if (-1 < iVar4) {
    lVar5 = *(long *)(param_2 + 2);
    lVar12 = *(long *)(*(long *)(param_2 + 10) + (long)param_1 * 8 + lVar9 * 0x18);
    if (iVar8 < iVar4) {
      lVar11 = *(long *)(param_2 + 10) + 0x18 + lVar9 * 0x18;
      puVar7 = (ushort *)(lVar9 * 2 + lVar5);
      do {
        uVar3 = *puVar7;
        uVar14 = -uVar3;
        if (0 < (short)uVar3) {
          uVar14 = uVar3;
        }
        uVar6 = 2;
        if (uVar14 < 3) {
          uVar6 = (ulong)uVar14;
        }
        lVar10 = (ulong)uVar14 * 2;
        if (0x43 < uVar14) {
          lVar10 = 0x86;
        }
        puVar7 = puVar7 + 1;
        puVar1 = (ushort *)(lVar12 + lVar10);
        lVar12 = *(long *)(lVar11 + uVar6 * 8);
        lVar11 = lVar11 + 0x18;
        uVar13 = uVar13 + (uint)*puVar1 + (uint)*(ushort *)(VP8LevelFixedCosts + (ulong)uVar14 * 2);
      } while ((ushort *)(lVar5 + ((ulong)(uint)(iVar4 - iVar8) + lVar9) * 2) != puVar7);
      lVar9 = (long)iVar4;
      iVar8 = iVar4;
    }
    uVar3 = *(ushort *)(lVar5 + lVar9 * 2);
    uVar14 = -uVar3;
    if (0 < (short)uVar3) {
      uVar14 = uVar3;
    }
    if (uVar14 < 0x44) {
      uVar13 = (uint)*(ushort *)(lVar12 + (ulong)uVar14 * 2) +
               (uint)*(ushort *)(VP8LevelFixedCosts + (ulong)uVar14 * 2) + uVar13;
      if (0xe < iVar8) {
        return uVar13;
      }
      bVar2 = VP8EncBands[iVar8 + 1];
      iVar8 = (uVar14 != 1) + 1;
    }
    else {
      uVar13 = (uint)*(ushort *)(lVar12 + 0x86) +
               (uint)*(ushort *)(VP8LevelFixedCosts + (ulong)uVar14 * 2) + uVar13;
      if (0xe < iVar8) {
        return uVar13;
      }
      bVar2 = VP8EncBands[iVar8 + 1];
      iVar8 = 2;
    }
    return uVar13 + *(ushort *)
                     (VP8EntropyCost +
                     (ulong)*(byte *)((ulong)bVar2 * 0x21 + *(long *)(param_2 + 6) +
                                     (long)iVar8 * 0xb) * 2);
  }
  return (uint)*(ushort *)(VP8EntropyCost + (ulong)bVar2 * 2);
}



void SetResidualCoeffs_C(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  
  *(undefined4 *)(param_2 + 4) = 0xffffffff;
  lVar1 = 0xf;
  do {
    if (*(short *)(param_1 + lVar1 * 2) != 0) {
      *(int *)(param_2 + 4) = (int)lVar1;
      *(long *)(param_2 + 8) = param_1;
      return;
    }
    bVar2 = lVar1 != 0;
    lVar1 = lVar1 + -1;
  } while (bVar2);
  *(long *)(param_2 + 8) = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8EncDspCostInit(void)

{
  int iVar1;
  
  if ((code *)VP8EncDspCostInit_body_last_cpuinfo_used_0 == _VP8GetCPUInfo) {
    return;
  }
  VP8GetResidualCost = 0x100000;
  VP8SetResidualCoeffs = SetResidualCoeffs_C;
  if (_VP8GetCPUInfo != (code *)0x0) {
    iVar1 = (*_VP8GetCPUInfo)(0);
    if (iVar1 != 0) {
      VP8EncDspCostInitSSE2();
    }
    VP8EncDspCostInit_body_last_cpuinfo_used_0 = _VP8GetCPUInfo;
    return;
  }
  VP8EncDspCostInit_body_last_cpuinfo_used_0 = _VP8GetCPUInfo;
  return;
}



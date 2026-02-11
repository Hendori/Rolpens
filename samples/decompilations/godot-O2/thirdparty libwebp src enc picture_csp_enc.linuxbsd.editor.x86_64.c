
void ConvertRowsToUV(long param_1,long param_2,long param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  if (0 < param_4) {
    lVar3 = 0;
    do {
      while( true ) {
        uVar10 = (uint)*(ushort *)(param_1 + 2 + lVar3 * 8);
        uVar7 = (uint)*(ushort *)(param_1 + lVar3 * 8);
        uVar9 = (uint)*(ushort *)(param_1 + 4 + lVar3 * 8);
        iVar5 = uVar7 * -0x25f7 + uVar10 * -0x4a89 + uVar9 * 0x7080;
        if (param_5 != (int *)0x0) break;
        uVar11 = iVar5 + 0x2020000;
        uVar6 = (int)uVar11 >> 0x12;
        if (0x3ffffff < uVar11) {
          uVar6 = (int)~uVar6 >> 0x1f;
        }
        *(char *)(param_2 + lVar3) = (char)uVar6;
        uVar7 = uVar7 * 0x7080 + uVar10 * -0x5e34 + 0x2020000 + uVar9 * -0x124c;
        iVar5 = (int)uVar7 >> 0x12;
        if (uVar7 < 0x4000000) goto LAB_00100143;
        if (iVar5 < 0) goto LAB_00100141;
LAB_001001de:
        *(undefined1 *)(param_3 + lVar3) = 0xff;
        lVar3 = lVar3 + 1;
        if (param_4 == lVar3) {
          return;
        }
      }
      iVar1 = *param_5;
      iVar2 = param_5[1];
      iVar12 = param_5[(long)iVar1 + 2] - param_5[(long)iVar2 + 2];
      iVar8 = iVar2 + 1;
      if (iVar12 < 0) {
        iVar12 = iVar12 + -0x80000000;
      }
      iVar13 = iVar1 + 1;
      if (iVar1 == 0x36) {
        iVar13 = 0;
      }
      if (iVar2 == 0x36) {
        iVar8 = 0;
      }
      iVar2 = param_5[0x39];
      param_5[(long)iVar1 + 2] = iVar12;
      *param_5 = iVar13;
      param_5[1] = iVar8;
      iVar5 = ((iVar12 * 2 >> 0xe) * iVar2 >> 8) + 0x2020000 + iVar5;
      uVar11 = iVar5 >> 0x12;
      cVar4 = (char)~(byte)(iVar5 >> 0x1f) >> 7;
      if (uVar11 < 0x100) {
        cVar4 = (char)uVar11;
      }
      *(char *)(param_2 + lVar3) = cVar4;
      iVar5 = *param_5;
      iVar1 = param_5[1];
      iVar2 = param_5[0x39];
      iVar12 = param_5[(long)iVar5 + 2] - param_5[(long)iVar1 + 2];
      if (iVar12 < 0) {
        iVar12 = iVar12 + -0x80000000;
      }
      iVar13 = iVar1 + 1;
      param_5[(long)iVar5 + 2] = iVar12;
      iVar8 = iVar5 + 1;
      if (iVar5 == 0x36) {
        iVar8 = 0;
      }
      if (iVar1 == 0x36) {
        iVar13 = 0;
      }
      *param_5 = iVar8;
      param_5[1] = iVar13;
      uVar7 = ((iVar12 * 2 >> 0xe) * iVar2 >> 8) + 0x2020000 +
              uVar7 * 0x7080 + uVar10 * -0x5e34 + uVar9 * -0x124c;
      iVar5 = (int)uVar7 >> 0x12;
      if (0x3ffffff < uVar7) {
        if (-1 < iVar5) goto LAB_001001de;
LAB_00100141:
        iVar5 = 0;
      }
LAB_00100143:
      *(char *)(param_3 + lVar3) = (char)iVar5;
      lVar3 = lVar3 + 1;
    } while (param_4 != lVar3);
  }
  return;
}



void AccumulateRGB(long param_1,long param_2,long param_3,int param_4,int param_5,
                  undefined2 *param_6,uint param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  
  uVar15 = (int)param_7 >> 1;
  if ((int)uVar15 < 1) {
    iVar13 = 0;
  }
  else {
    lVar7 = (long)param_4;
    lVar12 = (long)param_5;
    lVar10 = (long)(param_4 + param_5);
    lVar14 = (long)(param_4 * 2);
    lVar11 = 0;
    puVar8 = param_6;
    do {
      puVar9 = puVar8 + 4;
      uVar5 = (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_1 + lVar10)] +
              (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_1 + lVar7)] +
              (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_1 + lVar11)] +
              (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_1 + lVar12)];
      uVar6 = uVar5 & 0x1ff;
      iVar13 = (int)uVar5 >> 9;
      *puVar8 = (short)((int)((&kLinearToGammaTab)[iVar13 + 1] * uVar6 + 0x40 +
                             (0x200 - uVar6) * (&kLinearToGammaTab)[iVar13]) >> 7);
      uVar5 = (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_2 + lVar10)] +
              (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_2 + lVar7)] +
              (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_2 + lVar11)] +
              (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_2 + lVar12)];
      uVar6 = uVar5 & 0x1ff;
      iVar13 = (int)uVar5 >> 9;
      puVar8[1] = (short)((int)((&kLinearToGammaTab)[iVar13 + 1] * uVar6 + 0x40 +
                               (0x200 - uVar6) * (&kLinearToGammaTab)[iVar13]) >> 7);
      pbVar1 = (byte *)(param_3 + lVar11);
      lVar11 = lVar11 + lVar14;
      pbVar2 = (byte *)(param_3 + lVar7);
      lVar7 = lVar7 + lVar14;
      pbVar3 = (byte *)(param_3 + lVar12);
      lVar12 = lVar12 + lVar14;
      pbVar4 = (byte *)(param_3 + lVar10);
      lVar10 = lVar10 + lVar14;
      uVar5 = (uint)(ushort)(&kGammaToLinearTab)[*pbVar4] +
              (uint)(ushort)(&kGammaToLinearTab)[*pbVar1] +
              (uint)(ushort)(&kGammaToLinearTab)[*pbVar2] +
              (uint)(ushort)(&kGammaToLinearTab)[*pbVar3];
      uVar6 = uVar5 & 0x1ff;
      iVar13 = (int)uVar5 >> 9;
      puVar8[2] = (short)((int)((&kLinearToGammaTab)[iVar13 + 1] * uVar6 + 0x40 +
                               (0x200 - uVar6) * (&kLinearToGammaTab)[iVar13]) >> 7);
      puVar8 = puVar9;
    } while (puVar9 != param_6 + (long)(int)uVar15 * 4);
    iVar13 = param_4 * 2 * uVar15;
    param_6 = param_6 + (ulong)uVar15 * 4;
  }
  if ((param_7 & 1) != 0) {
    lVar7 = (long)iVar13;
    lVar10 = param_5 + lVar7;
    uVar15 = (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_1 + lVar10)] +
             (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_1 + lVar7)] >> 8;
    uVar5 = ((uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_1 + lVar10)] +
            (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_1 + lVar7)]) * 2 & 0x1ff;
    *param_6 = (short)((int)((&kLinearToGammaTab)[(int)(uVar15 + 1)] * uVar5 + 0x40 +
                            (0x200 - uVar5) * (&kLinearToGammaTab)[uVar15]) >> 7);
    uVar15 = (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_2 + lVar10)] +
             (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_2 + lVar7)] >> 8;
    uVar5 = ((uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_2 + lVar10)] +
            (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_2 + lVar7)]) * 2 & 0x1ff;
    param_6[1] = (short)((int)((&kLinearToGammaTab)[(int)(uVar15 + 1)] * uVar5 + 0x40 +
                              (0x200 - uVar5) * (&kLinearToGammaTab)[uVar15]) >> 7);
    uVar15 = (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_3 + lVar10)] +
             (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_3 + lVar7)] >> 8;
    uVar5 = ((uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_3 + lVar10)] +
            (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_3 + lVar7)]) * 2 & 0x1ff;
    param_6[2] = (short)((int)((&kLinearToGammaTab)[(int)(uVar15 + 1)] * uVar5 + 0x40 +
                              (0x200 - uVar5) * (&kLinearToGammaTab)[uVar15]) >> 7);
  }
  return;
}



void AccumulateRGBA(long param_1,long param_2,long param_3,long param_4,int param_5,ulong *param_6,
                   uint param_7)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long local_78;
  ushort local_70;
  ulong *local_58;
  
  uVar6 = (int)param_7 >> 1;
  if ((int)uVar6 < 1) {
    iVar11 = 0;
    local_58 = param_6;
  }
  else {
    lVar13 = (long)param_5;
    local_78 = (long)(param_5 + 4);
    lVar4 = 4;
    do {
      uVar7 = (uint)*(byte *)(param_4 + -4 + lVar4);
      uVar10 = (uint)*(byte *)(param_4 + lVar4);
      uVar8 = (uint)*(byte *)(param_4 + lVar13);
      uVar5 = *(byte *)(param_4 + 4 + lVar13) + uVar10 + uVar7 + uVar8;
      if ((uVar5 == 0x3fc) || (uVar5 == 0)) {
        uVar7 = (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_1 + 4 + lVar13)] +
                (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_1 + lVar4)] +
                (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_1 + -4 + lVar4)] +
                (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_1 + lVar13)];
        uVar8 = uVar7 & 0x1ff;
        iVar11 = (int)uVar7 >> 9;
        iVar11 = (&kLinearToGammaTab)[iVar11 + 1] * uVar8 + 0x40 +
                 (0x200 - uVar8) * (&kLinearToGammaTab)[iVar11];
        uVar7 = (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_2 + 4 + lVar13)] +
                (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_2 + lVar4)] +
                (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_2 + -4 + lVar4)] +
                (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_2 + lVar13)];
        uVar8 = uVar7 & 0x1ff;
        iVar9 = (int)uVar7 >> 9;
        iVar9 = (&kLinearToGammaTab)[iVar9 + 1] * uVar8 + 0x40 +
                (0x200 - uVar8) * (&kLinearToGammaTab)[iVar9];
        uVar7 = (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_3 + 4 + lVar13)] +
                (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_3 + lVar4)] +
                (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_3 + -4 + lVar4)] +
                (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_3 + lVar13)];
        uVar8 = uVar7 & 0x1ff;
        iVar12 = (int)uVar7 >> 9;
        iVar12 = (&kLinearToGammaTab)[iVar12 + 1] * uVar8 + 0x40 +
                 (0x200 - uVar8) * (&kLinearToGammaTab)[iVar12];
      }
      else {
        uVar15 = (uint)*(byte *)(param_4 + local_78);
        iVar12 = *(int *)(kInvAlpha + (ulong)uVar5 * 4);
        uVar16 = ((ushort)(&kGammaToLinearTab)[*(byte *)(param_1 + -4 + lVar4)] * uVar7 +
                  (ushort)(&kGammaToLinearTab)[*(byte *)(param_1 + lVar4)] * uVar10 +
                  (ushort)(&kGammaToLinearTab)[*(byte *)(param_1 + local_78)] * uVar15 +
                 (ushort)(&kGammaToLinearTab)[*(byte *)(param_1 + lVar13)] * uVar8) * iVar12;
        uVar17 = uVar16 >> 0x1a;
        uVar16 = uVar16 >> 0x11 & 0x1ff;
        iVar11 = (&kLinearToGammaTab)[(int)(uVar17 + 1)] * uVar16 + 0x40 +
                 (0x200 - uVar16) * (&kLinearToGammaTab)[uVar17];
        uVar16 = ((ushort)(&kGammaToLinearTab)[*(byte *)(param_2 + -4 + lVar4)] * uVar7 +
                  (ushort)(&kGammaToLinearTab)[*(byte *)(param_2 + lVar4)] * uVar10 +
                  (ushort)(&kGammaToLinearTab)[*(byte *)(param_2 + local_78)] * uVar15 +
                 (ushort)(&kGammaToLinearTab)[*(byte *)(param_2 + lVar13)] * uVar8) * iVar12;
        uVar17 = uVar16 >> 0x1a;
        uVar16 = uVar16 >> 0x11 & 0x1ff;
        iVar9 = (&kLinearToGammaTab)[(int)(uVar17 + 1)] * uVar16 + 0x40 +
                (0x200 - uVar16) * (&kLinearToGammaTab)[uVar17];
        uVar7 = ((ushort)(&kGammaToLinearTab)[*(byte *)(param_3 + lVar13)] * uVar8 +
                (ushort)(&kGammaToLinearTab)[*(byte *)(param_3 + local_78)] * uVar15 +
                (ushort)(&kGammaToLinearTab)[*(byte *)(param_3 + lVar4)] * uVar10 +
                (ushort)(&kGammaToLinearTab)[*(byte *)(param_3 + -4 + lVar4)] * uVar7) * iVar12;
        uVar8 = uVar7 >> 0x1a;
        uVar7 = uVar7 >> 0x11 & 0x1ff;
        iVar12 = (&kLinearToGammaTab)[(int)(uVar8 + 1)] * uVar7 + 0x40 +
                 (0x200 - uVar7) * (&kLinearToGammaTab)[uVar8];
      }
      local_70 = (ushort)uVar5;
      lVar13 = lVar13 + 8;
      local_78 = local_78 + 8;
      *(ulong *)((long)param_6 + lVar4 + -4) =
           (((ulong)local_70 << 0x10 | (ulong)(iVar12 >> 7 & 0xffff)) << 0x10 |
           (ulong)(iVar9 >> 7 & 0xffff)) << 0x10 | (ulong)(iVar11 >> 7 & 0xffff);
      lVar4 = lVar4 + 8;
    } while (lVar4 != (long)(int)uVar6 * 8 + 4);
    local_58 = param_6 + uVar6;
    iVar11 = uVar6 * 8;
  }
  if ((param_7 & 1) != 0) {
    lVar13 = (long)iVar11;
    lVar14 = (long)param_5;
    lVar4 = lVar13 + lVar14;
    bVar2 = *(byte *)(param_4 + lVar13);
    bVar3 = *(byte *)(param_4 + lVar4);
    iVar11 = (uint)bVar2 + (uint)bVar3;
    if ((iVar11 == 0x1fe) || (iVar11 == 0)) {
      uVar6 = (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_1 + lVar4)] +
              (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_1 + lVar13)];
      uVar5 = uVar6 >> 8;
      uVar6 = uVar6 * 2 & 0x1ff;
      uVar7 = (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_2 + lVar4)] +
              (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_2 + lVar13)];
      iVar9 = (&kLinearToGammaTab)[(int)(uVar5 + 1)] * uVar6 + 0x40 +
              (0x200 - uVar6) * (&kLinearToGammaTab)[(int)uVar5];
      uVar6 = uVar7 >> 8;
      uVar5 = uVar7 * 2 & 0x1ff;
      iVar12 = (&kLinearToGammaTab)[(int)(uVar6 + 1)] * uVar5 + 0x40 +
               (0x200 - uVar5) * (&kLinearToGammaTab)[uVar6];
      uVar6 = (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_3 + lVar4)] +
              (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(lVar13 + param_3)];
      uVar5 = uVar6 >> 8;
      uVar6 = uVar6 * 2 & 0x1ff;
      iVar1 = (&kLinearToGammaTab)[(int)(uVar5 + 1)] * uVar6 + 0x40 +
              (0x200 - uVar6) * (&kLinearToGammaTab)[uVar5];
    }
    else {
      iVar9 = *(int *)(kInvAlpha + (ulong)(uint)(iVar11 * 2) * 4);
      uVar6 = ((uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_2 + lVar13)] * (uint)bVar2 +
              (uint)(ushort)(&kGammaToLinearTab)[((byte *)(param_2 + lVar13))[lVar14]] * (uint)bVar3
              ) * iVar9 * 2;
      uVar5 = ((uint)(ushort)(&kGammaToLinearTab)[((byte *)(param_1 + lVar13))[lVar14]] *
               (uint)bVar3 +
              (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(param_1 + lVar13)] * (uint)bVar2) * iVar9
              * 2;
      uVar16 = uVar6 >> 0x1a;
      uVar10 = uVar5 >> 0x1a;
      uVar7 = ((uint)(ushort)(&kGammaToLinearTab)[((byte *)(lVar13 + param_3))[lVar14]] *
               (uint)bVar3 +
              (uint)(ushort)(&kGammaToLinearTab)[*(byte *)(lVar13 + param_3)] * (uint)bVar2) * iVar9
              * 2;
      uVar17 = uVar5 >> 0x11 & 0x1ff;
      uVar8 = uVar6 >> 0x11 & 0x1ff;
      uVar5 = uVar7 >> 0x1a;
      uVar6 = uVar7 >> 0x11 & 0x1ff;
      iVar9 = (&kLinearToGammaTab)[(int)(uVar10 + 1)] * uVar17 + 0x40 +
              (0x200 - uVar17) * (&kLinearToGammaTab)[uVar10];
      iVar12 = (&kLinearToGammaTab)[(int)(uVar16 + 1)] * uVar8 + 0x40 +
               (0x200 - uVar8) * (&kLinearToGammaTab)[uVar16];
      iVar1 = (&kLinearToGammaTab)[(int)(uVar5 + 1)] * uVar6 + 0x40 +
              (0x200 - uVar6) * (&kLinearToGammaTab)[uVar5];
    }
    *local_58 = (((ulong)(ushort)(iVar11 * 2) << 0x10 | (ulong)(iVar1 >> 7 & 0xffff)) << 0x10 |
                (ulong)(iVar12 >> 7 & 0xffff)) << 0x10 | (ulong)(iVar9 >> 7 & 0xffff);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
ImportYUVAFromRGBA(float param_1,ulong param_2,long param_3,ulong param_4,long param_5,int param_6,
                  int param_7,int param_8,undefined8 *param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 uVar18;
  int *piVar19;
  ulong uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
  int iVar26;
  long in_FS_OFFSET;
  double dVar27;
  long local_1b8;
  undefined1 *local_1b0;
  uint local_1a8;
  long local_198;
  long local_190;
  ulong local_188;
  ulong local_178;
  long local_170;
  long local_158;
  int local_128 [58];
  long local_40;
  
  iVar1 = *(int *)(param_9 + 1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(uint *)((long)param_9 + 0xc);
  if (param_5 == 0) {
LAB_00101103:
    bVar8 = false;
    uVar11 = 0;
LAB_00100c65:
    *(undefined4 *)((long)param_9 + 4) = uVar11;
    *(undefined4 *)param_9 = 0;
    if ((iVar1 < 4) || ((int)uVar2 < 4)) goto LAB_00100d80;
    iVar10 = WebPPictureAllocYUVA(param_9);
    if (iVar10 != 0) {
      if (param_8 != 0) {
        SharpYuvInit(_VP8GetCPUInfo);
        uVar14 = SharpYuvGetConversionMatrix(0);
        iVar10 = SharpYuvConvert(param_2,param_3,param_4,param_6,param_7,8,param_9[2],
                                 *(undefined4 *)(param_9 + 5),param_9[3],
                                 *(undefined4 *)((long)param_9 + 0x2c),param_9[4],
                                 *(undefined4 *)((long)param_9 + 0x2c),8,
                                 *(undefined4 *)(param_9 + 1),*(undefined4 *)((long)param_9 + 0xc),
                                 uVar14);
        if ((iVar10 != 0) || (iVar10 = WebPEncodingSetError(param_9,1), iVar10 != 0)) {
          if (bVar8) {
            (*_WebPExtractAlpha)
                      (param_5,param_7,iVar1,uVar2,param_9[6],*(undefined4 *)(param_9 + 7));
          }
          uVar14 = 1;
          goto LAB_001010d2;
        }
        goto LAB_001010d0;
      }
      goto LAB_00100d9a;
    }
  }
  else {
    WebPInitAlphaProcessing();
    if (0 < (int)uVar2) {
      lVar15 = param_5;
      uVar7 = uVar2;
      do {
        uVar7 = uVar7 - 1;
        iVar10 = (*_WebPHasAlpha32b)(lVar15,iVar1);
        if (iVar10 != 0) {
          bVar8 = true;
          uVar11 = 4;
          goto LAB_00100c65;
        }
        lVar15 = lVar15 + param_7;
      } while (uVar7 != 0);
      goto LAB_00101103;
    }
    *param_9 = 0;
    bVar8 = false;
LAB_00100d80:
    iVar10 = WebPPictureAllocYUVA(param_9);
    if (iVar10 != 0) {
LAB_00100d9a:
      iVar10 = iVar1 + 1 >> 1;
      lVar15 = WebPSafeMalloc((long)(iVar10 * 4));
      local_1b0 = (undefined1 *)param_9[2];
      local_198 = param_9[3];
      local_190 = param_9[4];
      local_170 = param_9[6];
      bVar5 = 0.0 < param_1;
      if (bVar5) {
        piVar19 = local_128;
        VP8InitRandom(param_1,piVar19);
      }
      else {
        piVar19 = (int *)0x0;
      }
      WebPInitConvertARGBToYUV();
      puVar9 = _VP8GetCPUInfo;
      if (InitGammaTables_body_last_cpuinfo_used_0 != _VP8GetCPUInfo) {
        if (kGammaTablesOk == 0) {
          lVar24 = 0;
          do {
            dVar27 = pow((double)(int)lVar24 * __LC2,_LC1);
            (&kGammaToLinearTab)[lVar24] = (short)(int)(dVar27 * __LC3 + __LC4);
            lVar24 = lVar24 + 1;
          } while (lVar24 != 0x100);
          lVar24 = 0;
          do {
            dVar27 = pow((double)(int)lVar24 * __LC6,_LC5);
            (&kLinearToGammaTab)[lVar24] = (int)(dVar27 * __LC7 + __LC4);
            lVar24 = lVar24 + 1;
          } while (lVar24 != 0x21);
          kGammaTablesOk = 1;
        }
        InitGammaTables_body_last_cpuinfo_used_0 = puVar9;
      }
      if (lVar15 == 0) {
        uVar14 = WebPEncodingSetError(param_9,1);
      }
      else {
        local_1b8 = param_5;
        local_188 = param_2;
        local_178 = param_4;
        local_158 = param_3;
        if (0 < (int)uVar2 >> 1) {
          local_1a8 = 0;
          local_158 = (long)(param_7 * 2);
          lVar16 = (long)param_6;
          uVar20 = param_2;
          uVar25 = param_4;
          lVar24 = param_3;
          local_1b8 = param_5;
          do {
            if (bVar5 || param_6 != 3) {
              if (0 < iVar1) {
                lVar17 = 0;
                puVar22 = local_1b0;
                do {
                  while (iVar12 = (uint)*(byte *)(uVar20 + lVar17) * 0x41c7 +
                                  (uint)*(byte *)(lVar24 + lVar17) * 0x8123 +
                                  (uint)*(byte *)(uVar25 + lVar17) * 0x1914, piVar19 != (int *)0x0)
                  {
                    iVar13 = *piVar19;
                    iVar3 = piVar19[1];
                    iVar4 = piVar19[0x39];
                    iVar23 = piVar19[(long)iVar13 + 2] - piVar19[(long)iVar3 + 2];
                    if (iVar23 < 0) {
                      iVar23 = iVar23 + -0x80000000;
                    }
                    piVar19[(long)iVar13 + 2] = iVar23;
                    iVar26 = iVar13 + 1;
                    if (iVar13 == 0x36) {
                      iVar26 = 0;
                    }
                    iVar13 = iVar3 + 1;
                    if (iVar3 == 0x36) {
                      iVar13 = 0;
                    }
                    puVar21 = puVar22 + 1;
                    *piVar19 = iVar26;
                    lVar17 = lVar17 + lVar16;
                    piVar19[1] = iVar13;
                    *puVar22 = (char)((uint)(((iVar23 * 2 >> 0x10) * iVar4 >> 8) + 0x108000 + iVar12
                                            ) >> 0x10);
                    puVar22 = puVar21;
                    if (puVar21 == local_1b0 + iVar1) goto LAB_0010127d;
                  }
                  puVar21 = puVar22 + 1;
                  lVar17 = lVar17 + lVar16;
                  *puVar22 = (char)((uint)(iVar12 + 0x108000) >> 0x10);
                  puVar22 = puVar21;
                } while (puVar21 != local_1b0 + iVar1);
LAB_0010127d:
                lVar17 = (long)param_7;
                iVar12 = *(int *)(param_9 + 5);
                puVar22 = local_1b0 + iVar12;
                do {
                  while (iVar13 = (uint)*(byte *)(uVar20 + lVar17) * 0x41c7 +
                                  (uint)*(byte *)(lVar24 + lVar17) * 0x8123 +
                                  (uint)*(byte *)(uVar25 + lVar17) * 0x1914, piVar19 != (int *)0x0)
                  {
                    iVar3 = *piVar19;
                    iVar4 = piVar19[1];
                    iVar23 = piVar19[0x39];
                    iVar26 = piVar19[(long)iVar3 + 2] - piVar19[(long)iVar4 + 2];
                    if (iVar26 < 0) {
                      iVar26 = iVar26 + -0x80000000;
                    }
                    piVar19[(long)iVar3 + 2] = iVar26;
                    iVar6 = iVar3 + 1;
                    if (iVar3 == 0x36) {
                      iVar6 = 0;
                    }
                    iVar3 = iVar4 + 1;
                    if (iVar4 == 0x36) {
                      iVar3 = 0;
                    }
                    puVar21 = puVar22 + 1;
                    *piVar19 = iVar6;
                    lVar17 = lVar17 + lVar16;
                    piVar19[1] = iVar3;
                    *puVar22 = (char)((uint)(((iVar26 * 2 >> 0x10) * iVar23 >> 8) + 0x108000 +
                                            iVar13) >> 0x10);
                    puVar22 = puVar21;
                    if (local_1b0 + (long)iVar12 + (long)iVar1 == puVar21) goto LAB_0010100f;
                  }
                  puVar21 = puVar22 + 1;
                  lVar17 = lVar17 + lVar16;
                  *puVar22 = (char)((uint)(iVar13 + 0x108000) >> 0x10);
                  puVar22 = puVar21;
                } while (local_1b0 + (long)iVar12 + (long)iVar1 != puVar21);
              }
            }
            else if (param_2 < param_4) {
              (*_WebPConvertRGB24ToY)(uVar20);
              (*_WebPConvertRGB24ToY)
                        (uVar20 + (long)param_7,local_1b0 + *(int *)(param_9 + 5),iVar1);
            }
            else {
              (*_WebPConvertBGR24ToY)(uVar25,local_1b0,iVar1);
              (*_WebPConvertBGR24ToY)
                        (uVar25 + (long)param_7,local_1b0 + *(int *)(param_9 + 5),iVar1);
            }
LAB_0010100f:
            local_1b0 = local_1b0 + *(int *)(param_9 + 5) * 2;
            if (bVar8) {
              iVar12 = (*_WebPExtractAlpha)
                                 (local_1b8,param_7,iVar1,2,local_170,*(undefined4 *)(param_9 + 7));
              local_170 = local_170 + *(int *)(param_9 + 7) * 2;
              if (iVar12 != 0) goto LAB_0010105c;
              AccumulateRGBA(uVar20,lVar24,uVar25,local_1b8,param_7,lVar15,iVar1);
            }
            else {
LAB_0010105c:
              AccumulateRGB(uVar20,lVar24,uVar25,param_6,param_7,lVar15,iVar1);
            }
            if (piVar19 == (int *)0x0) {
              (*_WebPConvertRGBA32ToUV)(lVar15,local_198,local_190,iVar10);
            }
            else {
              ConvertRowsToUV(lVar15,local_198,local_190,iVar10,piVar19);
            }
            uVar20 = uVar20 + local_158;
            uVar25 = uVar25 + local_158;
            lVar24 = lVar24 + local_158;
            local_198 = local_198 + *(int *)((long)param_9 + 0x2c);
            local_190 = local_190 + *(int *)((long)param_9 + 0x2c);
            lVar17 = local_1b8 + local_158;
            if (!bVar8) {
              lVar17 = local_1b8;
            }
            local_1a8 = local_1a8 + 1;
            local_1b8 = lVar17;
          } while (local_1a8 != (int)uVar2 >> 1);
          local_158 = (ulong)local_1a8 * local_158;
          local_188 = param_2 + local_158;
          local_178 = param_4 + local_158;
          local_158 = param_3 + local_158;
        }
        if ((uVar2 & 1) != 0) {
          if (bVar5 || param_6 != 3) {
            if (0 < iVar1) {
              lVar24 = 0;
              puVar22 = local_1b0 + iVar1;
              do {
                iVar12 = (uint)*(byte *)(local_188 + lVar24) * 0x41c7 +
                         (uint)*(byte *)(local_158 + lVar24) * 0x8123 +
                         (uint)*(byte *)(local_178 + lVar24) * 0x1914;
                if (piVar19 == (int *)0x0) {
                  uVar18 = (undefined1)((uint)(iVar12 + 0x108000) >> 0x10);
                }
                else {
                  iVar13 = *piVar19;
                  iVar3 = piVar19[1];
                  iVar4 = piVar19[0x39];
                  iVar23 = piVar19[(long)iVar13 + 2] - piVar19[(long)iVar3 + 2];
                  if (iVar23 < 0) {
                    iVar23 = iVar23 + -0x80000000;
                  }
                  piVar19[(long)iVar13 + 2] = iVar23;
                  iVar26 = iVar13 + 1;
                  if (iVar13 == 0x36) {
                    iVar26 = 0;
                  }
                  iVar13 = iVar3 + 1;
                  if (iVar3 == 0x36) {
                    iVar13 = 0;
                  }
                  *piVar19 = iVar26;
                  piVar19[1] = iVar13;
                  uVar18 = (undefined1)
                           ((uint)(((iVar23 * 2 >> 0x10) * iVar4 >> 8) + 0x108000 + iVar12) >> 0x10)
                  ;
                }
                *local_1b0 = uVar18;
                local_1b0 = local_1b0 + 1;
                lVar24 = lVar24 + param_6;
              } while (local_1b0 != puVar22);
            }
          }
          else if (local_188 < local_178) {
            (*_WebPConvertRGB24ToY)(local_188,local_1b0,iVar1);
          }
          else {
            (*_WebPConvertBGR24ToY)(local_178);
          }
          if ((bVar8) &&
             (iVar12 = (*_WebPExtractAlpha)(local_1b8,0,iVar1,1,local_170,0), iVar12 == 0)) {
            AccumulateRGBA(local_188,local_158,local_178,local_1b8,0,lVar15,iVar1);
          }
          else {
            AccumulateRGB(local_188,local_158,local_178,param_6,0,lVar15,iVar1);
          }
          if (piVar19 == (int *)0x0) {
            (*_WebPConvertRGBA32ToUV)(lVar15,local_198,local_190,iVar10);
          }
          else {
            ConvertRowsToUV(lVar15,local_198,local_190,iVar10,piVar19);
          }
        }
        WebPSafeFree(lVar15);
        uVar14 = 1;
      }
      goto LAB_001010d2;
    }
  }
LAB_001010d0:
  uVar14 = 0;
LAB_001010d2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Import(int *param_1,void *param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  int iVar4;
  void *extraout_RDX;
  void *extraout_RDX_00;
  void *extraout_RDX_01;
  void *extraout_RDX_02;
  void *extraout_RDX_03;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  void *pvVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  
  lVar7 = (long)param_3;
  pvVar5 = param_2;
  pvVar9 = (void *)((long)param_2 + 2U);
  if (param_5 == 0) {
    pvVar5 = (void *)((long)param_2 + 2U);
    pvVar9 = param_2;
  }
  iVar1 = param_1[2];
  iVar2 = param_1[3];
  iVar4 = -param_3;
  if (0 < param_3) {
    iVar4 = param_3;
  }
  pvVar10 = pvVar5;
  if (param_6 == 0) {
    if (iVar1 * 3 <= iVar4) {
      lVar6 = 0;
      if (*param_1 == 0) {
LAB_0010167e:
        uVar13 = 0;
        auVar11._0_8_ =
             ImportYUVAFromRGBA(0,pvVar9,(long)param_2 + 1U,pvVar5,lVar6,param_4,param_3,0,param_1);
        auVar11._8_8_ = uVar13;
        return auVar11;
      }
      iVar4 = WebPPictureAlloc(param_1);
      pvVar10 = extraout_RDX;
      if (iVar4 != 0) {
        VP8LDspInit();
        WebPInitAlphaProcessing();
        lVar6 = *(long *)(param_1 + 0x12);
        if (0 < iVar2) {
          iVar4 = 0;
          lVar8 = (long)param_2 + 1U;
          pvVar10 = pvVar5;
          do {
            (*_WebPPackRGB)(pvVar9,lVar8,pvVar10,iVar1,param_4,lVar6);
            pvVar10 = (void *)((long)pvVar10 + lVar7);
            iVar4 = iVar4 + 1;
            lVar6 = lVar6 + (long)param_1[0x14] * 4;
            pvVar5 = extraout_RDX_00;
            lVar8 = lVar8 + lVar7;
            pvVar9 = (void *)((long)pvVar9 + lVar7);
          } while (iVar2 != iVar4);
        }
LAB_00101793:
        auVar12._8_8_ = pvVar5;
        auVar12._0_8_ = 1;
        return auVar12;
      }
    }
  }
  else if (iVar1 * 4 <= iVar4) {
    if (*param_1 == 0) {
      lVar6 = (long)param_2 + 3;
      goto LAB_0010167e;
    }
    iVar4 = WebPPictureAlloc(param_1);
    pvVar10 = extraout_RDX_01;
    if (iVar4 != 0) {
      VP8LDspInit();
      WebPInitAlphaProcessing();
      pvVar9 = *(void **)(param_1 + 0x12);
      pvVar5 = extraout_RDX_02;
      if (param_5 == 0) {
        if (0 < iVar2) {
          iVar4 = 0;
          do {
            iVar4 = iVar4 + 1;
            (*_VP8LConvertBGRAToRGBA)(param_2,iVar1,pvVar9);
            pvVar5 = (void *)(long)param_1[0x14];
            param_2 = (void *)((long)param_2 + lVar7);
            pvVar9 = (void *)((long)pvVar9 + (long)pvVar5 * 4);
          } while (iVar2 != iVar4);
        }
      }
      else if (0 < iVar2) {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
          memcpy(pvVar9,param_2,(long)(iVar1 * 4));
          pvVar9 = (void *)((long)pvVar9 + (long)param_1[0x14] * 4);
          pvVar5 = extraout_RDX_03;
          param_2 = (void *)((long)param_2 + lVar7);
        } while (iVar2 != iVar4);
      }
      goto LAB_00101793;
    }
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = pvVar10;
  return auVar3 << 0x40;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 WebPPictureHasTransparency(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
    lVar5 = *(long *)(param_1 + 0xc);
    iVar1 = param_1[0xe];
    iVar2 = param_1[3];
    iVar3 = param_1[2];
    if ((lVar5 != 0) && (WebPInitAlphaProcessing(), 0 < iVar2)) {
      do {
        iVar2 = iVar2 + -1;
        iVar4 = (*_WebPHasAlpha8b)(lVar5,iVar3);
        if (iVar4 != 0) {
          return 1;
        }
        lVar5 = lVar5 + iVar1;
      } while (iVar2 != 0);
    }
  }
  else if (*(long *)(param_1 + 0x12) != 0) {
    iVar1 = param_1[0x14];
    iVar2 = param_1[3];
    lVar5 = *(long *)(param_1 + 0x12) + 3;
    iVar3 = param_1[2];
    WebPInitAlphaProcessing();
    if (0 < iVar2) {
      do {
        iVar2 = iVar2 + -1;
        iVar4 = (*_WebPHasAlpha32b)(lVar5,iVar3);
        if (iVar4 != 0) {
          return 1;
        }
        lVar5 = lVar5 + iVar1 * 4;
      } while (iVar2 != 0);
    }
  }
  return 0;
}



undefined8 WebPPictureARGBToYUVADithered(long param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    if ((param_2 & 3) != 0) {
      uVar2 = WebPEncodingSetError(param_1,4);
      return uVar2;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    uVar2 = ImportYUVAFromRGBA(lVar1 + 2,lVar1 + 1,lVar1,lVar1 + 3,4,*(int *)(param_1 + 0x50) * 4,0,
                               param_1);
    return uVar2;
  }
  uVar2 = WebPEncodingSetError(param_1,3);
  return uVar2;
}



undefined8 WebPPictureARGBToYUVA(long param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    if ((param_2 & 3) != 0) {
      uVar2 = WebPEncodingSetError(param_1,4);
      return uVar2;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    uVar2 = ImportYUVAFromRGBA(0,lVar1 + 2,lVar1 + 1,lVar1,lVar1 + 3,4,*(int *)(param_1 + 0x50) * 4,
                               0,param_1);
    return uVar2;
  }
  uVar2 = WebPEncodingSetError(param_1,3);
  return uVar2;
}



undefined8 WebPPictureSharpARGBToYUVA(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    uVar2 = ImportYUVAFromRGBA(0,lVar1 + 2,lVar1 + 1,lVar1,lVar1 + 3,4,*(int *)(param_1 + 0x50) * 4,
                               1,param_1);
    return uVar2;
  }
  uVar2 = WebPEncodingSetError(param_1,3);
  return uVar2;
}



undefined8 WebPPictureSmartARGBToYUVA(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    uVar2 = ImportYUVAFromRGBA(0,lVar1 + 2,lVar1 + 1,lVar1,lVar1 + 3,4,*(int *)(param_1 + 0x50) * 4,
                               1,param_1);
    return uVar2;
  }
  uVar2 = WebPEncodingSetError(param_1,3);
  return uVar2;
}



undefined8 WebPPictureYUVAToARGB(undefined4 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if ((((*(long *)(param_1 + 4) == 0) || (*(long *)(param_1 + 6) == 0)) ||
      (*(long *)(param_1 + 8) == 0)) || (((param_1[1] & 4) != 0 && (*(long *)(param_1 + 0xc) == 0)))
     ) {
    uVar13 = 3;
LAB_00101bd5:
    uVar13 = WebPEncodingSetError(param_1,uVar13);
    return uVar13;
  }
  if ((param_1[1] & 3) != 0) {
    uVar13 = 4;
    goto LAB_00101bd5;
  }
  iVar5 = WebPPictureAllocARGB(param_1);
  if (iVar5 == 0) {
    return 0;
  }
  *param_1 = 1;
  uVar3 = param_1[3];
  iVar5 = param_1[2];
  lVar9 = *(long *)(param_1 + 0x12);
  lVar16 = *(long *)(param_1 + 6);
  lVar18 = *(long *)(param_1 + 8);
  lVar11 = *(long *)(param_1 + 4);
  iVar10 = param_1[0x14];
  pcVar6 = (code *)WebPGetLinePairConverter(1);
  (*pcVar6)(lVar11,0,lVar16,lVar18,lVar16,lVar18,lVar9,0,iVar5);
  lVar7 = (long)(int)param_1[10];
  lVar14 = (long)(iVar10 * 4);
  lVar11 = lVar11 + lVar7;
  lVar9 = lVar9 + lVar14;
  if ((int)uVar3 < 3) {
    if (uVar3 != 2) {
      if ((*(byte *)(param_1 + 1) & 4) == 0) {
        return 1;
      }
      if (uVar3 != 1) {
        return 1;
      }
      goto LAB_00101d42;
    }
LAB_00101dd9:
    (*pcVar6)(lVar11,0,lVar16,lVar18,lVar16,lVar18,lVar9,0,iVar5);
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    lVar12 = (long)(iVar10 * 8);
    iVar10 = 1;
    lVar15 = lVar16;
    lVar17 = lVar18;
    lVar19 = lVar9;
    do {
      iVar10 = iVar10 + 2;
      lVar16 = lVar15 + (int)param_1[0xb];
      lVar18 = lVar17 + (int)param_1[0xb];
      (*pcVar6)(lVar11,lVar7 + lVar11,lVar15,lVar17,lVar16,lVar18,lVar19,lVar19 + lVar14,iVar5);
      lVar7 = (long)(int)param_1[10];
      lVar19 = lVar19 + lVar12;
      lVar11 = lVar11 + param_1[10] * 2;
      lVar15 = lVar16;
      lVar17 = lVar18;
    } while (iVar10 != (uVar3 - 3 & 0xfffffffe) + 3);
    if ((uVar3 & 1) == 0) {
      lVar9 = lVar9 + (ulong)((uVar3 - 3 >> 1) + 1) * lVar12;
      goto LAB_00101dd9;
    }
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 4) == 0) {
    return 1;
  }
LAB_00101d42:
  lVar9 = *(long *)(param_1 + 0x12);
  iVar10 = 0;
  lVar16 = *(long *)(param_1 + 0xc);
  do {
    iVar4 = param_1[0x14];
    if (0 < iVar5) {
      puVar8 = (undefined1 *)(param_1[0xe] * iVar10 + lVar16);
      lVar18 = lVar9 + (long)(iVar4 * iVar10) * 4;
      do {
        uVar2 = *puVar8;
        lVar11 = lVar18 + 4;
        puVar8 = puVar8 + 1;
        *(undefined1 *)(lVar18 + 3) = uVar2;
        lVar18 = lVar11;
      } while (lVar9 + ((long)(iVar4 * iVar10) + (long)iVar5) * 4 != lVar11);
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < (int)uVar3);
  return 1;
}



undefined8 WebPPictureImportBGR(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = Import();
    return uVar1;
  }
  return 0;
}



undefined8 WebPPictureImportBGRA(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = Import();
    return uVar1;
  }
  return 0;
}



undefined8 WebPPictureImportBGRX(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = Import();
    return uVar1;
  }
  return 0;
}



undefined8 WebPPictureImportRGB(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = Import();
    return uVar1;
  }
  return 0;
}



undefined8 WebPPictureImportRGBA(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = Import();
    return uVar1;
  }
  return 0;
}



undefined8 WebPPictureImportRGBX(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = Import();
    return uVar1;
  }
  return 0;
}




undefined8 WebPGetEncoderVersion(void)

{
  return 0x10400;
}



undefined8 WebPEncodingSetError(long param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x88) == 0) {
    *(undefined4 *)(param_1 + 0x88) = param_2;
  }
  return 0;
}



undefined8 WebPReportProgress(long param_1,int param_2,int *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_3 == (int *)0x0) {
    return 1;
  }
  if (*param_3 != param_2) {
    pcVar1 = *(code **)(param_1 + 0x90);
    *param_3 = param_2;
    if ((pcVar1 != (code *)0x0) && (uVar2 = (*pcVar1)(param_2,param_1), (int)uVar2 == 0)) {
      if (*(int *)(param_1 + 0x88) != 0) {
        return uVar2;
      }
      *(undefined4 *)(param_1 + 0x88) = 10;
      return uVar2;
    }
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong WebPEncode(int *param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *__s;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  ulong uVar19;
  undefined4 uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  int iVar25;
  uint uVar26;
  byte bVar27;
  double dVar28;
  float fVar29;
  long local_80;
  
  bVar27 = 0;
  if (param_2 == (int *)0x0) {
    return 0;
  }
  param_2[0x22] = 0;
  if (param_1 == (int *)0x0) {
    param_2[0x22] = 3;
    return 0;
  }
  iVar4 = WebPValidateConfig();
  if (iVar4 == 0) {
    if (param_2[0x22] != 0) {
      return 0;
    }
    param_2[0x22] = 4;
    return 0;
  }
  iVar4 = WebPValidatePicture(param_2);
  if (iVar4 == 0) {
    return 0;
  }
  if ((0x3fff < param_2[2]) || (0x3fff < param_2[3])) {
    if (param_2[0x22] != 0) {
      return 0;
    }
    param_2[0x22] = 5;
    return 0;
  }
  puVar21 = *(undefined8 **)(param_2 + 0x20);
  if (puVar21 != (undefined8 *)0x0) {
    *puVar21 = 0;
    *(undefined8 *)((long)puVar21 + 0xb4) = 0;
    uVar11 = (ulong)(((int)puVar21 - (int)(undefined8 *)((ulong)(puVar21 + 1) & 0xfffffffffffffff8))
                     + 0xbcU >> 3);
    puVar21 = (undefined8 *)((ulong)(puVar21 + 1) & 0xfffffffffffffff8);
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar21 = 0;
      puVar21 = puVar21 + (ulong)bVar27 * -2 + 1;
    }
  }
  if (*param_1 != 0) {
    if ((*(long *)(param_2 + 0x12) == 0) && (iVar4 = WebPPictureYUVAToARGB(param_2), iVar4 == 0)) {
      return 0;
    }
    if (param_1[0x18] == 0) {
      WebPReplaceTransparentPixels(param_2,0);
    }
    uVar11 = VP8LEncodeImage(param_1,param_2);
    return uVar11;
  }
  if ((((*param_2 != 0) || (*(long *)(param_2 + 4) == 0)) || (*(long *)(param_2 + 6) == 0)) ||
     (*(long *)(param_2 + 8) == 0)) {
    if ((param_1[0x1a] == 0) && ((param_1[0x11] & 4U) == 0)) {
      fVar29 = 0.0;
      if ((param_1[0x11] & 2U) != 0) {
        fVar29 = ((float)param_1[1] / __LC2) * ((float)param_1[1] / __LC2);
        fVar29 = _LC3 * fVar29 * fVar29 + __LC4;
      }
      iVar4 = WebPPictureARGBToYUVADithered(fVar29,param_2,0);
    }
    else {
      iVar4 = WebPPictureSharpARGBToYUVA(param_2);
    }
    if (iVar4 == 0) {
      return 0;
    }
  }
  if (param_1[0x18] == 0) {
    WebPCleanupTransparentArea(param_2);
  }
  iVar4 = param_1[8];
  iVar15 = param_1[0xb];
  iVar23 = param_2[2] + 0xf >> 4;
  iVar25 = param_2[3] + 0xf >> 4;
  iVar5 = iVar23 * 4 + 1;
  iVar14 = iVar23 * iVar25;
  lVar7 = (long)((iVar25 * 4 + 1) * iVar5);
  lVar16 = (long)iVar14 * 4;
  lVar8 = (long)(iVar23 + 1) * 4;
  lVar9 = lVar8 + 0x1f;
  uVar11 = (ulong)(-(uint)(iVar15 != 0) & 0x81f);
  if (((float)param_1[1] <= _LC5) || (local_80 = 0, 1 < param_1[0xf])) {
    local_80 = lVar8 + -4;
  }
  __s = (long *)WebPSafeMalloc(lVar16 + 0x5cd6 + (long)(iVar23 << 5) + lVar7 + lVar9 + uVar11 +
                               local_80,1,(long)(iVar23 << 5),-iVar15);
  if (__s == (long *)0x0) {
    if (param_2[0x22] != 0) {
      return 0;
    }
    param_2[0x22] = 1;
    return 0;
  }
  uVar24 = (long)__s + 0x5cb7U & 0xffffffffffffffe0;
  memset(__s,0,0x5c98);
  iVar1 = param_1[0x12];
  *__s = (long)param_1;
  __s[0xb8c] = uVar24;
  lVar16 = lVar16 + uVar24;
  lVar7 = lVar16 + lVar7;
  __s[6] = CONCAT44(iVar25,iVar23);
  __s[7] = CONCAT44(1 << ((byte)iVar1 & 0x1f),iVar5);
  __s[0xb8d] = (iVar23 * 4 + 2) + lVar16;
  lVar9 = lVar7 + lVar9;
  __s[0xb8e] = (lVar7 + 0x1fU & 0xffffffffffffffe0) + 4;
  uVar24 = lVar9 + 0x1fU & 0xffffffffffffffe0;
  if (uVar11 == 0) {
    uVar24 = 0;
  }
  uVar11 = lVar9 + 0x1f + uVar11 & 0xffffffffffffffe0;
  __s[0xb8f] = uVar11;
  lVar9 = uVar11 + (long)(iVar23 << 4);
  __s[0xb91] = uVar24;
  __s[0xb90] = lVar9;
  uVar11 = lVar9 + (iVar23 << 4);
  if (local_80 == 0) {
    uVar11 = 0;
  }
  __s[0xb92] = uVar11;
  uVar26 = 2;
  if (0 < iVar4 || 0 < iVar15) {
    uVar26 = (uint)(param_1[10] != 1);
  }
  iVar4 = param_1[2];
  *(uint *)((long)__s + 0x2c) = uVar26;
  uVar26 = 3;
  __s[1] = (long)param_2;
  iVar15 = param_1[0x13];
  *(int *)(__s + 0xb88) = iVar4;
  if ((iVar4 < 6) && (uVar26 = 2, iVar4 != 5)) {
    uVar26 = (uint)(2 < iVar4);
  }
  iVar4 = param_1[4];
  *(uint *)((long)__s + 0x5c44) = uVar26;
  *(uint *)(__s + 0xb89) = (uint)((100 - iVar15) * (100 - iVar15) * 0x10000) / 10000;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = SUB168(SEXT816(0x3fc00000),8);
  *(int *)((long)__s + 0x5c4c) =
       SUB164((auVar3 << 0x40 | ZEXT816(0x3fc00000)) / SEXT816((long)iVar14),0);
  *(int *)(__s + 0xb8a) = param_1[0x15];
  uVar6 = 1;
  if (iVar4 < 1) {
    uVar6 = (uint)(0.0 < (float)param_1[5]);
  }
  iVar4 = param_1[0x16];
  *(uint *)((long)__s + 0x5c54) = uVar6;
  if ((iVar4 == 0) && (*(uint *)(__s + 0xb8b) = (uint)(uVar26 != 0), uVar26 != 0)) {
    *(undefined4 *)((long)__s + 0x3c) = 1;
  }
  VP8EncDspInit();
  VP8DefaultProbas(__s);
  lVar9 = __s[0xb8d];
  iVar4 = *(int *)(*__s + 0x18);
  *(undefined4 *)(__s + 5) = 0;
  lVar7 = -1;
  lVar8 = __s[7];
  __s[4] = (ulong)CONCAT14(1 < iVar4,iVar4);
  lVar16 = _UNK_00100b98;
  __s[2] = __LC6;
  __s[3] = lVar16;
  if (-1 < (int)__s[6]) {
    do {
      *(undefined1 *)((lVar9 - (int)lVar8) + lVar7) = 0;
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < (int)__s[6] << 2);
  }
  uVar20 = 0;
  iVar4 = 0;
  if (0 < *(int *)((long)__s + 0x34)) {
    do {
      iVar15 = (int)__s[7] * iVar4;
      iVar4 = iVar4 + 1;
      *(undefined1 *)(lVar9 + -1 + (long)iVar15) = 0;
    } while (iVar4 < *(int *)((long)__s + 0x34) * 4);
  }
  *(undefined4 *)(__s[0xb8e] + -4) = 0;
  VP8EncDspCostInit();
  VP8EncInitAlpha(__s);
  VP8TBufferInit(__s + 0x3e,
                 CONCAT44(uVar20,(int)(((_LC7 * (float)param_1[1]) / __LC2 + __LC4) *
                                      (float)(iVar14 * 4))));
  iVar4 = VP8EncAnalyze(__s);
  if ((iVar4 == 0) || (iVar4 = VP8EncStartAlpha(__s), iVar4 == 0)) {
    iVar4 = 0;
    puVar18 = *(undefined4 **)(__s[1] + 0x80);
joined_r0x0010058c:
    if (puVar18 != (undefined4 *)0x0) {
LAB_00100592:
      puVar10 = puVar18 + 0xb;
      plVar12 = __s + 0xa1;
      puVar17 = (undefined4 *)((long)__s + 0x5c04);
      do {
        plVar13 = plVar12 + 0x5d;
        puVar10[0x14] = *(undefined4 *)((long)plVar12 + 4);
        puVar10[0x10] = (int)*plVar12;
        *puVar10 = *puVar17;
        puVar10[4] = puVar17[4];
        puVar10[8] = puVar17[8];
        puVar10 = puVar10 + 1;
        plVar12 = plVar13;
        puVar17 = puVar17 + 1;
      } while (__s + 0x215 != plVar13);
      uVar11 = __s[0xb7f];
      uVar24 = __s[0xb7b];
      fVar29 = _LC1;
      if ((uVar24 != 0) && (uVar11 != 0)) {
        dVar28 = log10(((double)uVar11 * __LC8) / (double)uVar24);
        fVar29 = (float)(dVar28 * __LC9);
      }
      uVar2 = __s[0xb7c];
      puVar18[1] = fVar29;
      uVar22 = uVar11 >> 2;
      fVar29 = _LC1;
      if ((uVar2 != 0) && (uVar22 != 0)) {
        dVar28 = log10(((double)uVar22 * __LC8) / (double)uVar2);
        fVar29 = (float)(dVar28 * __LC9);
      }
      uVar19 = __s[0xb7d];
      puVar18[2] = fVar29;
      fVar29 = _LC1;
      if ((uVar19 != 0) && (uVar22 != 0)) {
        dVar28 = log10(((double)uVar22 * __LC8) / (double)uVar19);
        fVar29 = (float)(dVar28 * __LC9);
      }
      puVar18[3] = fVar29;
      uVar22 = uVar11 * 3 >> 1;
      uVar19 = uVar24 + uVar2 + uVar19;
      fVar29 = _LC1;
      if ((uVar19 != 0) && (uVar22 != 0)) {
        dVar28 = log10(((double)uVar22 * __LC8) / (double)uVar19);
        fVar29 = (float)(dVar28 * __LC9);
      }
      uVar24 = __s[0xb7e];
      puVar18[4] = fVar29;
      fVar29 = _LC1;
      if ((uVar24 != 0) && (uVar11 != 0)) {
        dVar28 = log10(((double)uVar11 * __LC8) / (double)uVar24);
        fVar29 = (float)(dVar28 * __LC9);
      }
      lVar9 = __s[0xb80];
      puVar18[5] = fVar29;
      *puVar18 = (int)lVar9;
      *(undefined8 *)(puVar18 + 6) = *(undefined8 *)((long)__s + 0x5c34);
      puVar18[8] = *(undefined4 *)((long)__s + 0x5c3c);
      if (iVar4 != 0) goto LAB_00100840;
    }
    VP8EncFreeBitWriters(__s);
    uVar26 = 0;
  }
  else {
    if ((int)__s[0xb8b] == 0) {
      iVar4 = VP8EncLoop(__s);
      if (iVar4 != 0) goto LAB_00100a13;
LAB_00100a26:
      puVar18 = *(undefined4 **)(__s[1] + 0x80);
      goto joined_r0x0010058c;
    }
    iVar4 = VP8EncTokenLoop(__s);
    if (iVar4 == 0) {
      iVar4 = 0;
      goto LAB_00100a26;
    }
LAB_00100a13:
    iVar4 = VP8EncFinishAlpha(__s);
    if ((iVar4 == 0) || (iVar4 = VP8EncWrite(__s), iVar4 == 0)) goto LAB_00100a26;
    iVar4 = 1;
    puVar18 = *(undefined4 **)(__s[1] + 0x80);
    if (puVar18 != (undefined4 *)0x0) goto LAB_00100592;
LAB_00100840:
    uVar26 = 1;
  }
  uVar6 = VP8EncDeleteAlpha(__s);
  VP8TBufferClear(__s + 0x3e);
  WebPSafeFree(__s);
  return (ulong)(uVar6 & uVar26);
}



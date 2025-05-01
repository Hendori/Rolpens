
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PruneContactPoints(JPH::Vec3, JPH::StaticArray<JPH::Vec3, 64u>&, JPH::StaticArray<JPH::Vec3,
   64u>&, JPH::Vec3) */

void JPH::PruneContactPoints
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               float *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  float *pfVar18;
  long lVar19;
  float fVar20;
  ulong uVar21;
  uint uVar22;
  int iVar23;
  undefined8 *puVar24;
  float *pfVar25;
  undefined8 *puVar26;
  ulong uVar27;
  long lVar28;
  float fVar29;
  long in_FS_OFFSET;
  byte bVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_648;
  undefined8 uStack_640;
  float local_638;
  float fStack_634;
  float fStack_630;
  ulong local_628;
  float *local_618;
  float *local_610;
  float local_608 [2];
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  float local_5b8 [2];
  undefined8 auStack_5b0 [9];
  float local_568;
  float local_564 [67];
  float local_458 [4];
  float local_448 [258];
  long local_40;
  
  uVar12 = (undefined4)Color::sOrange;
  uVar11 = DebugRenderer::sInstance;
  fVar37 = (float)param_2;
  fVar29 = (float)((ulong)param_1 >> 0x20);
  fVar20 = (float)param_1;
  bVar30 = 0;
  fVar1 = *param_5;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_458[0] = 0.0;
  local_568 = 0.0;
  local_638 = (float)param_3;
  fStack_634 = (float)((ulong)param_3 >> 0x20);
  fStack_630 = (float)param_4;
  if (fVar1 == 0.0) {
    local_608[0] = 2.8026e-45;
    local_5b8[0] = 2.8026e-45;
    local_618 = param_5 + 0x400000000;
    local_5f8 = *(undefined8 *)(param_5 + 4);
    uStack_5f0 = *(undefined8 *)(param_5 + 6);
    auStack_5b0[1] = *(undefined8 *)(param_6 + 4);
    auStack_5b0[2] = *(undefined8 *)(param_6 + 6);
    local_5e8 = *(undefined8 *)local_618;
    uStack_5e0 = *(undefined8 *)(param_5 + 0x400000002);
    auStack_5b0[3] = *(undefined8 *)(param_6 + 0x400000000);
    auStack_5b0[4] = *(undefined8 *)(param_6 + 0x400000002);
    if ((char)ContactConstraintManager::sDrawContactPointReduction == '\0') {
      fVar20 = 2.8026e-45;
      local_628 = 2;
      goto LAB_0010046f;
    }
    local_610 = param_5 + 4;
    fVar20 = 2.8026e-45;
  }
  else {
    local_568 = 0.0;
    lVar17 = 0;
    do {
      local_568 = (float)((int)local_568 + 1);
      local_458[0] = local_568;
      fVar31 = (float)*(undefined8 *)(param_5 + lVar17 + 6) * fVar37 +
               (float)((ulong)*(undefined8 *)(param_5 + lVar17 + 4) >> 0x20) * fVar29 +
               (float)*(undefined8 *)(param_5 + lVar17 + 4) * fVar20 + 0.0;
      pfVar25 = param_5 + lVar17 + 4;
      fVar32 = pfVar25[1];
      fVar33 = pfVar25[2];
      fVar34 = pfVar25[3];
      pfVar18 = param_6 + lVar17 + 4;
      fVar38 = *pfVar18;
      fVar35 = pfVar18[1];
      fVar36 = pfVar18[2];
      pfVar18 = param_5 + lVar17 + 4;
      fVar2 = *pfVar18;
      fVar3 = pfVar18[1];
      fVar4 = pfVar18[2];
      local_458[lVar17 + 4] = *pfVar25 - fVar31 * fVar20;
      local_458[lVar17 + 5] = fVar32 - fVar31 * fVar29;
      local_458[lVar17 + 6] = fVar33 - fVar31 * fVar37;
      local_458[lVar17 + 7] = fVar34 - fVar31 * (float)((ulong)param_2 >> 0x20);
      fVar32 = (fVar36 - fVar4) * (fVar36 - fVar4) +
               (fVar35 - fVar3) * (fVar35 - fVar3) + (fVar38 - fVar2) * (fVar38 - fVar2) + 0.0;
      if (fVar32 <= _LC0) {
        fVar32 = _LC0;
      }
      *(float *)((long)local_564 + lVar17) = fVar32;
      lVar17 = lVar17 + 4;
    } while (local_568 != fVar1);
    fVar32 = local_448[2] * local_448[2] +
             local_448[0] * local_448[0] + 0.0 + local_448[1] * local_448[1];
    if (fVar32 <= _LC0) {
      fVar32 = _LC0;
    }
    uVar14 = 0;
    uVar22 = 0;
    pfVar25 = local_458 + 4;
    pfVar18 = pfVar25;
    fVar32 = fVar32 * local_564[0];
    do {
      fVar33 = pfVar18[2] * pfVar18[2] + *pfVar18 * *pfVar18 + 0.0 + pfVar18[1] * pfVar18[1];
      if (fVar33 <= _LC0) {
        fVar33 = _LC0;
      }
      fVar33 = fVar33 * local_564[uVar14];
      fVar34 = fVar33;
      if (fVar33 <= fVar32) {
        fVar34 = fVar32;
      }
      if (fVar32 < fVar33) {
        uVar22 = (uint)uVar14;
      }
      uVar14 = uVar14 + 1;
      pfVar18 = pfVar18 + 4;
      fVar32 = fVar34;
    } while (uVar14 != (uint)fVar1);
    uVar15 = 0;
    lVar17 = (ulong)uVar22 + 1;
    uVar14 = 0xffffffff;
    fVar32 = local_458[lVar17 * 4];
    fVar33 = local_458[lVar17 * 4 + 1];
    fVar34 = local_458[lVar17 * 4 + 2];
    pfVar18 = pfVar25;
    fVar38 = _LC1;
    do {
      if ((uint)uVar15 != uVar22) {
        fVar35 = (pfVar18[2] - fVar34) * (pfVar18[2] - fVar34) +
                 (pfVar18[1] - fVar33) * (pfVar18[1] - fVar33) +
                 (*pfVar18 - fVar32) * (*pfVar18 - fVar32) + 0.0;
        if (fVar35 <= _LC0) {
          fVar35 = _LC0;
        }
        if (fVar38 < fVar35 * local_564[uVar15]) {
          uVar14 = uVar15 & 0xffffffff;
          fVar38 = fVar35 * local_564[uVar15];
        }
      }
      uVar15 = uVar15 + 1;
      pfVar18 = pfVar18 + 4;
    } while (uVar15 != (uint)fVar1);
    fVar38 = 0.0;
    uVar16 = 0;
    lVar28 = uVar14 + 1;
    uVar27 = 0xffffffff;
    uVar15 = 0xffffffff;
    fVar35 = 0.0;
    do {
      while (((uVar13 = (uint)uVar16, uVar21 = uVar15, fVar36 = fVar35, uVar13 != uVar22 &&
              ((uint)uVar14 != uVar13)) &&
             (fVar36 = (pfVar25[2] - fVar34) *
                       (fVar29 * (local_458[lVar28 * 4] - fVar32) -
                       (local_458[lVar28 * 4 + 1] - fVar33) * fVar20) +
                       (pfVar25[1] - fVar33) *
                       (fVar20 * (local_458[lVar28 * 4 + 2] - fVar34) -
                       (local_458[lVar28 * 4] - fVar32) * fVar37) +
                       (*pfVar25 - fVar32) *
                       (fVar37 * (local_458[lVar28 * 4 + 1] - fVar33) -
                       (local_458[lVar28 * 4 + 2] - fVar34) * fVar29) + 0.0, uVar21 = uVar16,
             fVar35 <= fVar36))) {
        if (fVar38 < fVar36) {
          uVar27 = uVar16;
          fVar38 = fVar36;
        }
        uVar16 = (ulong)(uVar13 + 1);
        pfVar25 = pfVar25 + 4;
        if ((float)(uVar13 + 1) == fVar1) goto LAB_00100378;
      }
      uVar16 = (ulong)(uVar13 + 1);
      pfVar25 = pfVar25 + 4;
      uVar15 = uVar21;
      fVar35 = fVar36;
    } while ((float)(uVar13 + 1) != fVar1);
LAB_00100378:
    local_610 = param_5 + lVar17 * 4;
    local_5f8 = *(undefined8 *)local_610;
    uStack_5f0 = *(undefined8 *)(local_610 + 2);
    auStack_5b0[1] = *(undefined8 *)(param_6 + lVar17 * 4);
    auStack_5b0[2] = *(undefined8 *)(param_6 + lVar17 * 4 + 2);
    if ((int)uVar15 == -1) {
      lVar19 = 0x20;
      lVar17 = 2;
      fVar20 = 2.8026e-45;
      iVar23 = 1;
    }
    else {
      lVar19 = 0x30;
      lVar17 = 3;
      iVar23 = 2;
      fVar20 = 4.2039e-45;
      local_5e8 = *(undefined8 *)(param_5 + (uVar15 + 1) * 4);
      uStack_5e0 = *(undefined8 *)(param_5 + (uVar15 + 1) * 4 + 2);
      auStack_5b0[3] = *(undefined8 *)(param_6 + (uVar15 + 1) * 4);
      auStack_5b0[4] = *(undefined8 *)(param_6 + (uVar15 + 1) * 4 + 2);
    }
    local_618 = param_5 + lVar28 * 4;
    uVar8 = *(undefined8 *)(param_6 + lVar28 * 4);
    uVar9 = *(undefined8 *)(param_6 + lVar28 * 4 + 2);
    uVar10 = *(undefined8 *)(local_618 + 2);
    local_5b8[0] = fVar20;
    *(undefined8 *)((long)local_608 + lVar19) = *(undefined8 *)local_618;
    *(undefined8 *)((long)&uStack_600 + lVar19) = uVar10;
    *(undefined8 *)((long)local_5b8 + lVar19) = uVar8;
    *(undefined8 *)((long)auStack_5b0 + lVar19) = uVar9;
    if ((int)uVar27 != -1) {
      lVar17 = lVar17 + 1;
      fVar20 = (float)(iVar23 + 2);
      uVar8 = *(undefined8 *)(param_5 + (uVar27 + 1) * 4 + 2);
      uVar9 = *(undefined8 *)(param_6 + (uVar27 + 1) * 4);
      uVar10 = *(undefined8 *)(param_6 + (uVar27 + 1) * 4 + 2);
      local_5b8[0] = fVar20;
      *(undefined8 *)(local_608 + lVar17 * 4) = *(undefined8 *)(param_5 + (uVar27 + 1) * 4);
      (&uStack_600)[lVar17 * 2] = uVar8;
      *(undefined8 *)(local_5b8 + lVar17 * 4) = uVar9;
      auStack_5b0[lVar17 * 2] = uVar10;
    }
    local_608[0] = fVar20;
    if ((char)ContactConstraintManager::sDrawContactPointReduction == '\0') {
      local_628 = (ulong)(uint)fVar20;
      goto LAB_0010046f;
    }
    fVar29 = 0.0;
    pfVar25 = param_5 + 4;
    do {
      fVar29 = (float)((int)fVar29 + 1);
      pfVar18 = param_5 + (ulong)((uint)fVar29 % (uint)fVar1 + 1) * 4;
      fVar1 = *pfVar18;
      fVar37 = pfVar18[1];
      fVar32 = pfVar18[2];
      local_668 = CONCAT44(fVar32 * _UNK_00101754 + fVar1 * _UNK_00101734 + fVar37 * _UNK_00101744 +
                           fStack_634,fVar32 * __LC5 + fVar1 * _LC3 + fVar37 * __LC4 + local_638);
      uStack_660 = CONCAT44(fVar32 * _UNK_0010175c + fVar1 * _UNK_0010173c + fVar37 * _UNK_0010174c
                            + 1.0,fVar32 * _UNK_00101758 +
                                  fVar1 * _UNK_00101738 + fVar37 * _UNK_00101748 + fStack_630);
      fVar1 = *pfVar25;
      fVar37 = pfVar25[1];
      fVar32 = pfVar25[2];
      JPH::DebugRenderer::DrawArrow
                (CONCAT44(fVar32 * _UNK_00101754 + fVar1 * _UNK_00101734 + fVar37 * _UNK_00101744 +
                          fStack_634,fVar32 * __LC5 + fVar1 * _LC3 + fVar37 * __LC4 + local_638),
                 CONCAT44(fVar32 * _UNK_0010175c + fVar1 * _UNK_0010173c + fVar37 * _UNK_0010174c +
                          1.0,fVar32 * _UNK_00101758 +
                              fVar1 * _UNK_00101738 + fVar37 * _UNK_00101748 + fStack_630),local_668
                 ,uStack_660,uVar11,uVar12);
      fVar1 = *param_5;
      pfVar25 = pfVar25 + 4;
    } while ((uint)fVar29 < (uint)fVar1);
  }
  uStack_640._4_4_ = (float)((ulong)param_4 >> 0x20);
  fVar1 = uStack_640._4_4_;
  local_668 = CONCAT44(fStack_634 + local_618[1],local_638 + *local_618);
  uStack_660 = CONCAT44(uStack_640._4_4_ + local_618[3],fStack_630 + local_618[2]);
  local_648 = CONCAT44(fStack_634 + local_610[1],local_638 + *local_610);
  uStack_640 = CONCAT44(uStack_640._4_4_ + local_610[3],fStack_630 + local_610[2]);
  JPH::DebugRenderer::DrawArrow
            (local_648,uStack_640,local_668,uStack_660,DebugRenderer::sInstance,
             (undefined4)Color::sRed);
  pfVar18 = (float *)&local_5f8;
  local_628 = (ulong)(uint)fVar20;
  pfVar25 = pfVar18 + local_628 * 4;
  do {
    fVar29 = *pfVar18;
    pfVar5 = pfVar18 + 1;
    pfVar6 = pfVar18 + 2;
    pfVar7 = pfVar18 + 3;
    pfVar18 = pfVar18 + 4;
    local_668 = CONCAT44(fStack_634 + *pfVar5,local_638 + fVar29);
    uStack_660 = CONCAT44(fVar1 + *pfVar7,fStack_630 + *pfVar6);
    JPH::DebugRenderer::DrawMarker
              (local_668,uStack_660,DebugRenderer::sInstance,(undefined4)Color::sGreen);
  } while (pfVar25 != pfVar18);
LAB_0010046f:
  *(undefined8 *)(param_5 + 4) = local_5f8;
  iVar23 = (int)local_628 * 0x10;
  *(undefined8 *)(param_5 + local_628 * 4 + 2) = (&uStack_600)[local_628 * 2];
  lVar17 = (long)(param_5 + 4) - (long)((ulong)(param_5 + 6) & 0xfffffffffffffff8);
  puVar24 = (undefined8 *)((long)&local_5f8 - lVar17);
  puVar26 = (undefined8 *)((ulong)(param_5 + 6) & 0xfffffffffffffff8);
  for (uVar14 = (ulong)((uint)(iVar23 + (int)lVar17) >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
    *puVar26 = *puVar24;
    puVar24 = puVar24 + (ulong)bVar30 * -2 + 1;
    puVar26 = puVar26 + (ulong)bVar30 * -2 + 1;
  }
  *param_5 = fVar20;
  lVar17 = (long)param_6 + (0x10 - (long)((ulong)(param_6 + 6) & 0xfffffffffffffff8));
  *(undefined8 *)(param_6 + 4) = auStack_5b0[1];
  *(undefined8 *)(param_6 + local_628 * 4 + 2) = auStack_5b0[local_628 * 2];
  puVar24 = (undefined8 *)((long)auStack_5b0 + (8 - lVar17));
  puVar26 = (undefined8 *)((ulong)(param_6 + 6) & 0xfffffffffffffff8);
  for (uVar14 = (ulong)((uint)(iVar23 + (int)lVar17) >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
    *puVar26 = *puVar24;
    puVar24 = puVar24 + (ulong)bVar30 * -2 + 1;
    puVar26 = puVar26 + (ulong)bVar30 * -2 + 1;
  }
  *param_6 = fVar20;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ManifoldBetweenTwoFaces(JPH::Vec3, JPH::Vec3, JPH::Vec3, float, JPH::StaticArray<JPH::Vec3,
   32u> const&, JPH::StaticArray<JPH::Vec3, 32u> const&, JPH::StaticArray<JPH::Vec3, 64u>&,
   JPH::StaticArray<JPH::Vec3, 64u>&, JPH::Vec3) */

void JPH::ManifoldBetweenTwoFaces
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               JPH *param_5,undefined8 param_6,float param_7,uint *param_8,uint *param_9,
               uint *param_10,uint *param_11,undefined8 param_12,undefined8 param_13,
               undefined8 param_14,undefined8 param_15)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  ulong uVar13;
  float *pfVar14;
  uint uVar15;
  float *pfVar16;
  float fVar17;
  uint uVar18;
  long in_FS_OFFSET;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar25;
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float local_328;
  float fStack_324;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_298;
  float fStack_294;
  float fStack_28c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_258 [4];
  float local_248 [130];
  long local_40;
  
  fVar28 = (float)param_6;
  local_328 = SUB84(param_5,0);
  fStack_324 = (float)((ulong)param_5 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((char)ContactConstraintManager::sDrawContactPoint != '\0') {
    local_318 = (float)param_1;
    fStack_314 = (float)((ulong)param_1 >> 0x20);
    fStack_310 = (float)param_2;
    fStack_30c = (float)((ulong)param_2 >> 0x20);
    local_308 = (float)param_3;
    fStack_304 = (float)((ulong)param_3 >> 0x20);
    fStack_300 = (float)param_4;
    fStack_2fc = (float)((ulong)param_4 >> 0x20);
    local_2f8 = CONCAT44(fStack_314 + param_14._4_4_,local_318 + (float)param_14);
    uVar7 = local_2f8;
    uStack_2f0._0_4_ = fStack_310 + (float)param_15;
    uStack_2f0._4_4_ = fStack_30c + param_15._4_4_;
    local_2e8 = CONCAT44(fStack_304 + param_14._4_4_,local_308 + (float)param_14);
    uStack_2e0 = CONCAT44(fStack_2fc + param_15._4_4_,fStack_300 + (float)param_15);
    JPH::DebugRenderer::DrawMarker
              (local_2f8,uStack_2f0,DebugRenderer::sInstance,(undefined4)Color::sRed);
    JPH::DebugRenderer::DrawMarker
              (local_2e8,uStack_2e0,DebugRenderer::sInstance,(undefined4)Color::sGreen);
    auVar20._8_4_ = fVar28;
    auVar20._0_8_ = param_5;
    auVar20._12_4_ = (int)((ulong)param_6 >> 0x20);
    auVar21._0_4_ = SQRT(fVar28 * fVar28 + local_328 * local_328 + 0.0 + fStack_324 * fStack_324);
    auVar21._4_4_ = auVar21._0_4_;
    auVar21._8_4_ = auVar21._0_4_;
    auVar21._12_4_ = auVar21._0_4_;
    auVar20 = divps(auVar20,auVar21);
    local_2f8 = CONCAT44(auVar20._4_4_ + fStack_314 + param_14._4_4_,
                         auVar20._0_4_ + local_318 + (float)param_14);
    JPH::DebugRenderer::DrawArrow
              (uVar7,uStack_2f0,local_2f8,DebugRenderer::sInstance,(undefined4)Color::sRed);
  }
  uVar2 = *param_10;
  if ((1 < *param_8) && (2 < *param_9)) {
    local_258[0] = 0.0;
    if (*param_8 == 2) {
      ClipPolyVsEdge<JPH::StaticArray<JPH::Vec3,32u>>
                (*(undefined8 *)(param_8 + 4),*(undefined8 *)(param_8 + 6),
                 *(undefined8 *)(param_8 + 8),*(undefined8 *)(param_8 + 10),param_5,param_6,param_9,
                 local_258);
      local_278 = (float)param_8[4];
      fStack_274 = (float)param_8[5];
      fStack_270 = (float)param_8[6];
      fStack_26c = (float)param_8[7];
      auVar23._0_4_ = (float)param_8[8] - local_278;
      auVar23._4_4_ = (float)param_8[9] - fStack_274;
      auVar23._8_4_ = (float)param_8[10] - fStack_270;
LAB_001010c6:
      fVar22 = auVar23._0_4_;
      fVar25 = auVar23._4_4_;
      fVar17 = auVar23._8_4_;
      fVar26 = fStack_324 * fVar22 - local_328 * fVar25;
      fVar27 = fVar28 * fVar25 - fStack_324 * fVar17;
      fVar28 = local_328 * fVar17 - fVar28 * fVar22;
      fStack_28c = fVar27 * fVar25 - fVar28 * fVar22;
      local_298 = fVar28 * fVar17 - fVar26 * fVar25;
      fStack_294 = fVar26 * fVar22 - fVar27 * fVar17;
    }
    else {
      ClipPolyVsPoly<JPH::StaticArray<JPH::Vec3,32u>>(param_5,param_6,param_9,param_8,local_258);
      local_278 = (float)param_8[4];
      fStack_274 = (float)param_8[5];
      fStack_270 = (float)param_8[6];
      fStack_26c = (float)param_8[7];
      auVar23._0_4_ = (float)param_8[8] - local_278;
      auVar23._4_4_ = (float)param_8[9] - fStack_274;
      auVar23._8_4_ = (float)param_8[10] - fStack_270;
      if (*param_8 < 3) goto LAB_001010c6;
      fStack_28c = ((float)param_8[0xd] - fStack_274) * auVar23._0_4_ -
                   auVar23._4_4_ * ((float)param_8[0xc] - local_278);
      local_298 = ((float)param_8[0xe] - fStack_270) * auVar23._4_4_ -
                  auVar23._8_4_ * ((float)param_8[0xd] - fStack_274);
      fStack_294 = ((float)param_8[0xc] - local_278) * auVar23._8_4_ -
                   auVar23._0_4_ * ((float)param_8[0xe] - fStack_270);
    }
    fVar28 = local_258[0];
    fVar22 = fStack_28c * fStack_28c + fStack_294 * fStack_294 + local_298 * local_298 + 0.0;
    if (0.0 < fVar22) {
      pfVar14 = local_258 + 4;
      pfVar16 = pfVar14 + (ulong)(uint)local_258[0] * 4;
      if ((ulong)(uint)local_258[0] != 0) {
        do {
          fVar25 = *pfVar14;
          fVar17 = pfVar14[1];
          fVar26 = pfVar14[2];
          fVar27 = pfVar14[3];
          fVar19 = (fVar26 - fStack_270) * fStack_28c +
                   (fVar17 - fStack_274) * fStack_294 + (fVar25 - local_278) * local_298 + 0.0;
          if ((fVar19 <= 0.0) || (fVar19 * fVar19 < fVar22 * param_7)) {
            fVar19 = fVar19 / fVar22;
            uVar15 = *param_10;
            *param_10 = uVar15 + 1;
            pfVar1 = (float *)(param_10 + (ulong)uVar15 * 4 + 4);
            *pfVar1 = fVar25 - fVar19 * local_298;
            pfVar1[1] = fVar17 - fVar19 * fStack_294;
            pfVar1[2] = fVar26 - fVar19 * fStack_28c;
            pfVar1[3] = fVar27 - fVar19 * fStack_28c;
            uVar15 = *param_11;
            *param_11 = uVar15 + 1;
            pfVar1 = (float *)(param_11 + (ulong)uVar15 * 4 + 4);
            *pfVar1 = fVar25;
            pfVar1[1] = fVar17;
            pfVar1[2] = fVar26;
            pfVar1[3] = fVar27;
          }
          pfVar14 = pfVar14 + 4;
        } while (pfVar16 != pfVar14);
      }
    }
    uVar12 = (undefined4)Color::sOrange;
    uVar11 = DebugRenderer::sInstance;
    uVar10 = _UNK_00101758;
    uVar9 = __LC5;
    uVar8 = _UNK_00101748;
    uVar7 = __LC4;
    fVar25 = _LC3;
    if ((char)ContactConstraintManager::sDrawSupportingFaces == '\0') {
      uVar15 = *param_10;
    }
    else {
      local_328 = (float)DebugRenderer::sInstance;
      fStack_324 = (float)((ulong)DebugRenderer::sInstance >> 0x20);
      if (local_258[0] != 0.0) {
        fVar17 = 0.0;
        pfVar16 = local_258;
        do {
          pfVar16 = pfVar16 + 4;
          fVar17 = (float)((int)fVar17 + 1);
          local_2e8._0_4_ = (float)uVar7;
          local_2e8._4_4_ = (float)((ulong)uVar7 >> 0x20);
          uStack_2e0._0_4_ = (float)uVar8;
          uStack_2e0._4_4_ = (float)((ulong)uVar8 >> 0x20);
          local_2d8 = (float)uVar9;
          fStack_2d4 = (float)((ulong)uVar9 >> 0x20);
          fStack_2d0 = (float)uVar10;
          fStack_2cc = (float)((ulong)uVar10 >> 0x20);
          uVar13 = (ulong)((uint)fVar17 % (uint)fVar28 + 1);
          fVar26 = local_258[uVar13 * 4];
          fVar27 = local_258[uVar13 * 4 + 1];
          fVar19 = local_258[uVar13 * 4 + 2];
          fVar3 = *pfVar16;
          fVar4 = pfVar16[1];
          fVar5 = pfVar16[2];
          JPH::DebugRenderer::DrawArrow
                    (CONCAT44(fVar5 * fStack_2d4 + fVar3 * 0.0 + fVar4 * local_2e8._4_4_ +
                              param_14._4_4_,
                              fVar5 * local_2d8 + fVar3 * fVar25 + fVar4 * (float)local_2e8 +
                              (float)param_14),
                     CONCAT44(fVar5 * fStack_2cc + fVar3 * 0.0 + fVar4 * uStack_2e0._4_4_ + 1.0,
                              fVar5 * fStack_2d0 + fVar3 * 0.0 + fVar4 * (float)uStack_2e0 +
                              (float)param_15),
                     CONCAT44(fVar19 * fStack_2d4 + fVar26 * 0.0 + fVar27 * local_2e8._4_4_ +
                              param_14._4_4_,
                              fVar19 * local_2d8 + fVar26 * fVar25 + fVar27 * (float)local_2e8 +
                              (float)param_14),
                     CONCAT44(fVar19 * fStack_2cc + fVar26 * 0.0 + fVar27 * uStack_2e0._4_4_ + 1.0,
                              fVar19 * fStack_2d0 + fVar26 * 0.0 + fVar27 * (float)uStack_2e0 +
                              (float)param_15),0,uVar11,uVar12);
        } while (fVar17 != fVar28);
        local_328 = (float)DebugRenderer::sInstance;
        fStack_324 = (float)((ulong)DebugRenderer::sInstance >> 0x20);
      }
      uVar12 = (undefined4)Color::sRed;
      uVar10 = _UNK_00101758;
      uVar9 = __LC5;
      uVar8 = _UNK_00101748;
      uVar7 = __LC4;
      fVar28 = _LC3;
      uVar15 = *param_8;
      if (uVar15 != 0) {
        pfVar16 = (float *)(param_8 + 4);
        uVar18 = 0;
        do {
          uVar18 = uVar18 + 1;
          local_2e8._0_4_ = (float)uVar7;
          local_2e8._4_4_ = (float)((ulong)uVar7 >> 0x20);
          uStack_2e0._0_4_ = (float)uVar8;
          uStack_2e0._4_4_ = (float)((ulong)uVar8 >> 0x20);
          local_2d8 = (float)uVar9;
          fStack_2d4 = (float)((ulong)uVar9 >> 0x20);
          fStack_2d0 = (float)uVar10;
          fStack_2cc = (float)((ulong)uVar10 >> 0x20);
          pfVar14 = (float *)(param_8 + (ulong)(uVar18 % uVar15 + 1) * 4);
          fVar25 = *pfVar14;
          fVar17 = pfVar14[1];
          fVar26 = pfVar14[2];
          fVar27 = *pfVar16;
          fVar19 = pfVar16[1];
          fVar3 = pfVar16[2];
          JPH::DebugRenderer::DrawArrow
                    (CONCAT44(fVar3 * fStack_2d4 + fVar27 * 0.0 + fVar19 * local_2e8._4_4_ +
                              param_14._4_4_,
                              fVar3 * local_2d8 + fVar27 * fVar28 + fVar19 * (float)local_2e8 +
                              (float)param_14),
                     CONCAT44(fVar3 * fStack_2cc + fVar27 * 0.0 + fVar19 * uStack_2e0._4_4_ + 1.0,
                              fVar3 * fStack_2d0 + fVar27 * 0.0 + fVar19 * (float)uStack_2e0 +
                              (float)param_15),
                     CONCAT44(fVar26 * fStack_2d4 + fVar25 * 0.0 + fVar17 * local_2e8._4_4_ +
                              param_14._4_4_,
                              fVar26 * local_2d8 + fVar25 * fVar28 + fVar17 * (float)local_2e8 +
                              (float)param_14),
                     CONCAT44(fVar26 * fStack_2cc + fVar25 * 0.0 + fVar17 * uStack_2e0._4_4_ + 1.0,
                              fVar26 * fStack_2d0 + fVar25 * 0.0 + fVar17 * (float)uStack_2e0 +
                              (float)param_15),CONCAT44(fStack_324,local_328),uVar12);
          uVar15 = *param_8;
          pfVar16 = pfVar16 + 4;
        } while (uVar18 < uVar15);
        local_328 = (float)DebugRenderer::sInstance;
        fStack_324 = (float)((ulong)DebugRenderer::sInstance >> 0x20);
      }
      uVar12 = (undefined4)Color::sGreen;
      uVar10 = _UNK_00101758;
      uVar9 = __LC5;
      uVar8 = _UNK_00101748;
      uVar7 = __LC4;
      fVar28 = _LC3;
      uVar15 = *param_9;
      if (uVar15 != 0) {
        pfVar16 = (float *)(param_9 + 4);
        uVar18 = 0;
        do {
          uVar18 = uVar18 + 1;
          local_2e8._0_4_ = (float)uVar7;
          local_2e8._4_4_ = (float)((ulong)uVar7 >> 0x20);
          uStack_2e0._0_4_ = (float)uVar8;
          uStack_2e0._4_4_ = (float)((ulong)uVar8 >> 0x20);
          local_2d8 = (float)uVar9;
          fStack_2d4 = (float)((ulong)uVar9 >> 0x20);
          fStack_2d0 = (float)uVar10;
          fStack_2cc = (float)((ulong)uVar10 >> 0x20);
          pfVar14 = (float *)(param_9 + (ulong)(uVar18 % uVar15 + 1) * 4);
          fVar25 = *pfVar14;
          fVar17 = pfVar14[1];
          fVar26 = pfVar14[2];
          fVar27 = *pfVar16;
          fVar19 = pfVar16[1];
          fVar3 = pfVar16[2];
          JPH::DebugRenderer::DrawArrow
                    (CONCAT44(fVar3 * fStack_2d4 + fVar27 * 0.0 + fVar19 * local_2e8._4_4_ +
                              param_14._4_4_,
                              fVar3 * local_2d8 + fVar27 * fVar28 + fVar19 * (float)local_2e8 +
                              (float)param_14),
                     CONCAT44(fVar3 * fStack_2cc + fVar27 * 0.0 + fVar19 * uStack_2e0._4_4_ + 1.0,
                              fVar3 * fStack_2d0 + fVar27 * 0.0 + fVar19 * (float)uStack_2e0 +
                              (float)param_15),
                     CONCAT44(fVar26 * fStack_2d4 + fVar25 * 0.0 + fVar17 * local_2e8._4_4_ +
                              param_14._4_4_,
                              fVar26 * local_2d8 + fVar25 * fVar28 + fVar17 * (float)local_2e8 +
                              (float)param_14),
                     CONCAT44(fVar26 * fStack_2cc + fVar25 * 0.0 + fVar17 * uStack_2e0._4_4_ + 1.0,
                              fVar26 * fStack_2d0 + fVar25 * 0.0 + fVar17 * (float)uStack_2e0 +
                              (float)param_15),CONCAT44(fStack_324,local_328),uVar12);
          uVar15 = *param_9;
          pfVar16 = pfVar16 + 4;
        } while (uVar18 < uVar15);
      }
      if (0.0 < fVar22) {
        auVar6._4_4_ = fStack_294;
        auVar6._0_4_ = local_298;
        auVar6._8_4_ = fStack_28c;
        auVar6._12_4_ = fStack_28c;
        auVar24._0_4_ = SQRT(fVar22);
        auVar24._4_4_ = auVar24._0_4_;
        auVar24._8_4_ = auVar24._0_4_;
        auVar24._12_4_ = auVar24._0_4_;
        auVar20 = divps(auVar6,auVar24);
        local_2f8 = CONCAT44(auVar20._4_4_ + fStack_274 + param_14._4_4_,
                             auVar20._0_4_ + local_278 + (float)param_14);
        uStack_2f0._0_4_ = auVar20._8_4_ + fStack_270 + (float)param_15;
        uStack_2f0._4_4_ = auVar20._12_4_ + fStack_26c + param_15._4_4_;
        JPH::DebugRenderer::DrawArrow
                  (CONCAT44(fStack_274 + param_14._4_4_,local_278 + (float)param_14),
                   CONCAT44(fStack_26c + param_15._4_4_,fStack_270 + (float)param_15),local_2f8,
                   uStack_2f0,DebugRenderer::sInstance,_sYellow);
      }
      uVar15 = *param_10;
      uVar13 = (ulong)uVar2;
      if (uVar2 < uVar15) {
        do {
          uVar18 = (int)uVar13 + 1;
          pfVar16 = (float *)(param_10 + (ulong)uVar18 * 4);
          JPH::DebugRenderer::DrawMarker
                    (CONCAT44(param_14._4_4_ + pfVar16[1],(float)param_14 + *pfVar16),
                     CONCAT44(param_15._4_4_ + pfVar16[3],(float)param_15 + pfVar16[2]),
                     DebugRenderer::sInstance,_sYellow);
          uVar15 = *param_10;
          uVar13 = (ulong)uVar18;
        } while (uVar18 < uVar15);
      }
    }
    if (uVar2 != uVar15) goto LAB_00100884;
  }
  *param_10 = uVar2 + 1;
  uVar15 = *param_11;
  *(undefined8 *)(param_10 + (ulong)uVar2 * 4 + 4) = param_1;
  *(undefined8 *)(param_10 + (ulong)uVar2 * 4 + 4 + 2) = param_2;
  *param_11 = uVar15 + 1;
  *(undefined8 *)(param_11 + (ulong)uVar15 * 4 + 4) = param_3;
  *(undefined8 *)(param_11 + (ulong)uVar15 * 4 + 4 + 2) = param_4;
LAB_00100884:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void JPH::ClipPolyVsPoly<JPH::StaticArray<JPH::Vec3, 32u> >(JPH::StaticArray<JPH::Vec3, 32u>
   const&, JPH::StaticArray<JPH::Vec3, 32u> const&, JPH::Vec3, JPH::StaticArray<JPH::Vec3, 32u>&) */

void __thiscall
JPH::ClipPolyVsPoly<JPH::StaticArray<JPH::Vec3,32u>>
          (undefined8 param_1_00,float param_2_00,JPH *this,uint *param_1,uint *param_2)

{
  float *pfVar1;
  JPH *pJVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  JPH *pJVar11;
  long lVar12;
  bool bVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  long in_FS_OFFSET;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint local_448 [132];
  undefined4 local_238;
  long local_20;
  
  fVar21 = (float)((ulong)param_1_00 >> 0x20);
  uVar14 = *param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_448[0] = 0;
  local_238 = 0;
  if (uVar14 != 0) {
    uVar18 = 0;
    lVar17 = 0;
    do {
      iVar16 = (int)lVar17;
      pfVar1 = (float *)(param_1 + lVar17 * 4 + 4);
      fVar3 = *pfVar1;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      pfVar1 = (float *)(param_1 + (ulong)((iVar16 + 1U) % uVar14 + 1) * 4);
      fVar22 = (pfVar1[1] - fVar4) * (float)param_1_00 - (*pfVar1 - fVar3) * fVar21;
      fVar23 = (pfVar1[2] - fVar5) * fVar21 - (pfVar1[1] - fVar4) * param_2_00;
      fVar24 = (*pfVar1 - fVar3) * param_2_00 - (pfVar1[2] - fVar5) * (float)param_1_00;
      pJVar11 = this;
      if (iVar16 != 0) {
        pJVar11 = (JPH *)((long)local_448 + (ulong)(-uVar18 & 0x210));
      }
      uVar18 = uVar18 ^ 1;
      puVar15 = param_2;
      if (uVar14 - 1 != iVar16) {
        puVar15 = (uint *)((long)local_448 + (ulong)(-uVar18 & 0x210));
      }
      *puVar15 = 0;
      pJVar2 = pJVar11 + (ulong)(*(uint *)pJVar11 - 1) * 0x10 + 0x10;
      fVar29 = (fVar5 - *(float *)(pJVar2 + 8)) * fVar22 +
               (fVar4 - *(float *)(pJVar2 + 4)) * fVar24 + (fVar3 - *(float *)pJVar2) * fVar23 + 0.0
      ;
      bVar13 = fVar29 < 0.0;
      if (*(uint *)pJVar11 == 0) {
LAB_0010139a:
        *param_2 = 0;
        break;
      }
      lVar12 = 0;
      uVar10 = 0;
      fVar25 = *(float *)pJVar2;
      fVar26 = *(float *)(pJVar2 + 4);
      fVar27 = *(float *)(pJVar2 + 8);
      fVar28 = *(float *)(pJVar2 + 0xc);
      do {
        pJVar2 = pJVar11 + lVar12 * 0x10 + 0x10;
        fVar6 = *(float *)pJVar2;
        fVar7 = *(float *)(pJVar2 + 4);
        fVar8 = *(float *)(pJVar2 + 8);
        fVar9 = *(float *)(pJVar2 + 0xc);
        fVar19 = (fVar5 - fVar8) * fVar22 +
                 (fVar4 - fVar7) * fVar24 + (fVar3 - fVar6) * fVar23 + 0.0;
        if (fVar19 < 0.0 != bVar13) {
          fVar20 = (fVar8 - fVar27) * fVar22 +
                   (fVar7 - fVar26) * fVar24 + (fVar6 - fVar25) * fVar23 + 0.0;
          if (fVar20 != 0.0) {
            fVar29 = fVar29 / fVar20;
            uVar14 = (int)uVar10 + 1;
            *puVar15 = uVar14;
            pfVar1 = (float *)(puVar15 + uVar10 * 4 + 4);
            *pfVar1 = fVar29 * (fVar6 - fVar25) + fVar25;
            pfVar1[1] = fVar29 * (fVar7 - fVar26) + fVar26;
            pfVar1[2] = fVar29 * (fVar8 - fVar27) + fVar27;
            pfVar1[3] = fVar29 * (fVar9 - fVar28) + fVar28;
            uVar10 = (ulong)uVar14;
            bVar13 = fVar19 < 0.0;
          }
        }
        if (bVar13 != false) {
          uVar14 = (int)uVar10 + 1;
          *puVar15 = uVar14;
          pfVar1 = (float *)(puVar15 + uVar10 * 4 + 4);
          *pfVar1 = fVar6;
          pfVar1[1] = fVar7;
          pfVar1[2] = fVar8;
          pfVar1[3] = fVar9;
          uVar10 = (ulong)uVar14;
        }
        lVar12 = lVar12 + 1;
        fVar25 = fVar6;
        fVar26 = fVar7;
        fVar27 = fVar8;
        fVar28 = fVar9;
        fVar29 = fVar19;
      } while ((uint)lVar12 < *(uint *)pJVar11);
      if ((uint)uVar10 < 3) goto LAB_0010139a;
      uVar14 = *param_1;
      lVar17 = lVar17 + 1;
    } while ((uint)lVar17 < uVar14);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void JPH::ClipPolyVsEdge<JPH::StaticArray<JPH::Vec3, 32u> >(JPH::StaticArray<JPH::Vec3, 32u>
   const&, JPH::Vec3, JPH::Vec3, JPH::Vec3, JPH::StaticArray<JPH::Vec3, 32u>&) */

void JPH::ClipPolyVsEdge<JPH::StaticArray<JPH::Vec3,32u>>
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,float param_6,uint *param_1,uint *param_8)

{
  undefined1 auVar1 [16];
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  bool bVar8;
  long lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_28;
  float fStack_24;
  undefined8 local_18;
  undefined8 uStack_10;
  
  fVar20 = (float)((ulong)param_5 >> 0x20);
  fVar23 = (float)param_4;
  fVar14 = (float)param_2;
  fVar13 = (float)((ulong)param_1_00 >> 0x20);
  fVar11 = (float)param_1_00;
  local_28 = (float)param_3;
  fStack_24 = (float)((ulong)param_3 >> 0x20);
  fVar26 = (fStack_24 - fVar13) * (float)param_5 - fVar20 * (local_28 - fVar11);
  fVar27 = (fVar23 - fVar14) * fVar20 - param_6 * (fStack_24 - fVar13);
  fVar28 = (local_28 - fVar11) * param_6 - (float)param_5 * (fVar23 - fVar14);
  fVar20 = (float)param_1[4];
  fVar29 = (float)param_1[5];
  fVar30 = (float)param_1[6];
  fVar17 = ((float)param_1[9] - fVar29) * ((float)param_1[0xc] - fVar20) -
           ((float)param_1[0xd] - fVar29) * ((float)param_1[8] - fVar20);
  fVar18 = ((float)param_1[10] - fVar30) * ((float)param_1[0xd] - fVar29) -
           ((float)param_1[0xe] - fVar30) * ((float)param_1[9] - fVar29);
  fVar19 = ((float)param_1[8] - fVar20) * ((float)param_1[0xe] - fVar30) -
           ((float)param_1[0xc] - fVar20) * ((float)param_1[10] - fVar30);
  fVar16 = fVar17 * fVar17 + fVar19 * fVar19 + fVar18 * fVar18 + 0.0;
  pfVar7 = (float *)(param_1 + (ulong)(*param_1 - 1) * 4 + 4);
  fVar24 = (fVar30 - fVar14) * fVar17 +
           (fVar29 - fVar13) * fVar19 + (fVar20 - fVar11) * fVar18 + 0.0;
  auVar25._0_4_ = fVar24 * fVar18;
  auVar25._4_4_ = fVar24 * fVar19;
  auVar25._8_4_ = fVar24 * fVar17;
  auVar25._12_4_ = fVar24 * fVar17;
  fVar20 = (fVar30 - fVar23) * fVar17 +
           (fVar29 - fStack_24) * fVar19 + fVar18 * (fVar20 - local_28) + 0.0;
  auVar21._0_4_ = fVar20 * fVar18;
  auVar21._4_4_ = fVar20 * fVar19;
  auVar21._8_4_ = fVar20 * fVar17;
  auVar21._12_4_ = fVar20 * fVar17;
  auVar22._4_4_ = fVar16;
  auVar22._0_4_ = fVar16;
  auVar22._8_4_ = fVar16;
  auVar22._12_4_ = fVar16;
  auVar25 = divps(auVar25,auVar22);
  auVar1._4_4_ = fVar16;
  auVar1._0_4_ = fVar16;
  auVar1._8_4_ = fVar16;
  auVar1._12_4_ = fVar16;
  auVar22 = divps(auVar21,auVar1);
  fVar18 = auVar25._0_4_ + fVar11;
  fVar19 = auVar25._4_4_ + fVar13;
  fVar24 = auVar25._8_4_ + fVar14;
  local_28 = auVar22._0_4_ + local_28;
  fStack_24 = auVar22._4_4_ + fStack_24;
  fVar23 = auVar22._8_4_ + fVar23;
  local_18 = CONCAT44(fStack_24,local_28);
  uStack_10 = CONCAT44(auVar22._12_4_ + (float)((ulong)param_4 >> 0x20),fVar23);
  local_28 = local_28 - fVar18;
  fStack_24 = fStack_24 - fVar19;
  fVar23 = fVar23 - fVar24;
  fVar20 = (fVar14 - pfVar7[2]) * fVar26 +
           (fVar13 - pfVar7[1]) * fVar28 + (fVar11 - *pfVar7) * fVar27 + 0.0;
  lVar9 = 0;
  fVar29 = *pfVar7;
  fVar30 = pfVar7[1];
  fVar16 = pfVar7[2];
  fVar17 = pfVar7[3];
  bVar8 = fVar20 < 0.0;
  if (*param_1 == 0) {
    return;
  }
  do {
    while( true ) {
      pfVar7 = (float *)(param_1 + lVar9 * 4 + 4);
      fVar3 = *pfVar7;
      fVar4 = pfVar7[1];
      fVar5 = pfVar7[2];
      fVar6 = pfVar7[3];
      fVar15 = (fVar14 - fVar5) * fVar26 +
               (fVar13 - fVar4) * fVar28 + (fVar11 - fVar3) * fVar27 + 0.0;
      bVar2 = fVar15 < 0.0;
      if (bVar8 != bVar2) break;
LAB_001015a0:
      lVar9 = lVar9 + 1;
      fVar20 = fVar15;
      fVar29 = fVar3;
      fVar30 = fVar4;
      fVar16 = fVar5;
      fVar17 = fVar6;
      bVar8 = bVar2;
      if (*param_1 <= (uint)lVar9) {
        return;
      }
    }
    fVar12 = (fVar5 - fVar16) * fVar26 + (fVar4 - fVar30) * fVar28 + (fVar3 - fVar29) * fVar27 + 0.0
    ;
    if (fVar12 != 0.0) {
      fVar20 = fVar20 / fVar12;
      fVar29 = fVar29 + fVar20 * (fVar3 - fVar29);
      fVar30 = fVar30 + fVar20 * (fVar4 - fVar30);
      fVar16 = fVar16 + fVar20 * (fVar5 - fVar16);
      fVar17 = fVar17 + fVar20 * (fVar6 - fVar17);
    }
    uVar10 = *param_8 + 1;
    pfVar7 = (float *)(param_8 + ((ulong)*param_8 + 1) * 4);
    fVar20 = (fVar16 - fVar24) * fVar23 +
             (fVar30 - fVar19) * fStack_24 + (fVar29 - fVar18) * local_28 + 0.0;
    if (fVar20 < 0.0) {
      *param_8 = uVar10;
      *pfVar7 = fVar18;
      pfVar7[1] = fVar19;
      pfVar7[2] = fVar24;
      pfVar7[3] = auVar25._12_4_ + (float)((ulong)param_2 >> 0x20);
      goto LAB_001015a0;
    }
    *param_8 = uVar10;
    if (fVar20 <= fVar23 * fVar23 + fStack_24 * fStack_24 + local_28 * local_28 + 0.0) {
      *pfVar7 = fVar29;
      pfVar7[1] = fVar30;
      pfVar7[2] = fVar16;
      pfVar7[3] = fVar17;
      goto LAB_001015a0;
    }
    lVar9 = lVar9 + 1;
    *(undefined8 *)pfVar7 = local_18;
    *(undefined8 *)(pfVar7 + 2) = uStack_10;
    fVar20 = fVar15;
    fVar29 = fVar3;
    fVar30 = fVar4;
    fVar16 = fVar5;
    fVar17 = fVar6;
    bVar8 = bVar2;
    if (*param_1 <= (uint)lVar9) {
      return;
    }
  } while( true );
}



/* JPH::PruneContactPoints(JPH::Vec3, JPH::StaticArray<JPH::Vec3, 64u>&, JPH::StaticArray<JPH::Vec3,
   64u>&, JPH::Vec3) */

void JPH::_GLOBAL__sub_I_PruneContactPoints(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC8;
  }
  return;
}



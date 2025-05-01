
void meshopt_spatialSortRemap(uint *param_1,float *param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  uint *puVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  uint *puVar15;
  uint *puVar16;
  uint **ppuVar17;
  ulong uVar18;
  uint *puVar19;
  long lVar20;
  long in_FS_OFFSET;
  bool bVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 local_3128;
  float local_3120;
  float local_311c;
  uint *local_3118;
  uint *local_3110 [23];
  undefined8 local_3058;
  undefined8 local_3048;
  float local_3040 [3070];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ppuVar17 = local_3110;
  for (lVar11 = 0x17; lVar11 != 0; lVar11 = lVar11 + -1) {
    *ppuVar17 = (uint *)0x0;
    ppuVar17 = ppuVar17 + 1;
  }
  if (param_3 >> 0x3e == 0) {
    lVar11 = param_3 * 4;
    local_3118 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(lVar11);
    local_3128 = CONCAT44(_LC0._4_4_,(float)_LC0);
    local_3120 = (float)_LC0;
    local_3048 = CONCAT44(_LC1._4_4_,(float)_LC1);
    local_3040[0] = (float)_LC1;
    if (param_3 != 0) goto LAB_001000e6;
    fVar27 = (float)_LC0;
    fVar28 = (float)_LC0;
    if (0.0 <= (float)_LC1 - (float)_LC0) {
      lVar11 = 0;
      fVar22 = (float)_LC1 - (float)_LC0;
      goto LAB_0010018a;
    }
    lVar11 = 0;
    fVar26 = (float)_LC1;
LAB_00100591:
    fVar22 = 0.0;
  }
  else {
    lVar11 = -1;
    local_3118 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(0xffffffffffffffff);
    local_3120 = 3.4028235e+38;
    local_3128 = CONCAT44(_LC0._4_4_,(float)_LC0);
    local_3040[0] = -3.4028235e+38;
    local_3048 = CONCAT44(_LC1._4_4_,(float)_LC1);
LAB_001000e6:
    lVar20 = 0;
    uVar18 = 0;
    do {
      pfVar14 = param_2 + lVar20;
      pfVar7 = (float *)&local_3128;
      pfVar13 = (float *)&local_3048;
      do {
        fVar22 = *pfVar14;
        pfVar8 = pfVar7 + 1;
        pfVar14 = pfVar14 + 1;
        fVar26 = fVar22;
        if (fVar22 <= *pfVar13) {
          fVar26 = *pfVar13;
        }
        if (*pfVar7 <= fVar22) {
          fVar22 = *pfVar7;
        }
        *pfVar13 = fVar26;
        *pfVar7 = fVar22;
        pfVar7 = pfVar8;
        pfVar13 = pfVar13 + 1;
      } while (pfVar8 != &local_311c);
      uVar18 = uVar18 + 1;
      lVar20 = lVar20 + (param_4 >> 2);
    } while (param_3 != uVar18);
    fVar22 = (float)local_3048 - (float)local_3128;
    fVar26 = local_3048._4_4_;
    fVar27 = (float)local_3128;
    fVar28 = local_3128._4_4_;
    if (fVar22 < 0.0) goto LAB_00100591;
  }
  if (fVar22 <= fVar26 - fVar28) {
    fVar22 = fVar26 - fVar28;
  }
LAB_0010018a:
  puVar6 = local_3118;
  fVar5 = _LC7;
  fVar26 = _LC6;
  local_3058 = 1;
  if (fVar22 <= local_3040[0] - local_3120) {
    fVar22 = local_3040[0] - local_3120;
  }
  fVar25 = 0.0;
  if (fVar22 != 0.0) {
    fVar25 = _LC5 / fVar22;
  }
  if (param_3 == 0) {
    puVar9 = (undefined8 *)memset(&local_3048,0,0x3000);
  }
  else {
    puVar19 = local_3118 + param_3;
    puVar16 = local_3118;
    do {
      fVar22 = *param_2;
      pfVar14 = param_2 + 1;
      pfVar7 = param_2 + 2;
      puVar15 = puVar16 + 1;
      param_2 = (float *)((long)param_2 + (param_4 & 0xfffffffffffffffc));
      *puVar16 = (((((int)((fVar22 - fVar27) * fVar25 * fVar26 + fVar5) & 0x3ffU) * 0x10001 &
                   0xff0000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) * 5 & 0x9249249 |
                 (((((int)((*pfVar14 - fVar28) * fVar25 * fVar26 + fVar5) & 0x3ffU) * 0x10001 &
                   0xff0000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) * 10 & 0x12492492 |
                 ((((((int)((*pfVar7 - local_3120) * fVar25 * fVar26 + fVar5) & 0x3ffU) * 0x10001 &
                    0xff0000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) * 5 & 0x9249249) << 2;
      puVar16 = puVar15;
    } while (puVar15 != puVar19);
    puVar9 = (undefined8 *)memset(&local_3048,0,0x3000);
    puVar16 = puVar6;
    do {
      uVar2 = *puVar16;
      puVar16 = puVar16 + 1;
      local_3040[(ulong)(uVar2 & 0x3ff) * 3 + -2] =
           (float)((int)local_3040[(ulong)(uVar2 & 0x3ff) * 3 + -2] + 1);
      local_3040[(ulong)(uVar2 >> 10 & 0x3ff) * 3 + -1] =
           (float)((int)local_3040[(ulong)(uVar2 >> 10 & 0x3ff) * 3 + -1] + 1);
      local_3040[(ulong)(uVar2 >> 0x14 & 0x3ff) * 3] =
           (float)((int)local_3040[(ulong)(uVar2 >> 0x14 & 0x3ff) * 3] + 1);
    } while (puVar19 != puVar16);
  }
  iVar12 = 0;
  auVar23 = (undefined1  [16])0x0;
  do {
    uVar1 = *puVar9;
    iVar3 = *(int *)(puVar9 + 1);
    *(int *)(puVar9 + 1) = iVar12;
    *puVar9 = auVar23._0_8_;
    puVar9 = (undefined8 *)((long)puVar9 + 0xc);
    auVar24._0_4_ = auVar23._0_4_ + (int)uVar1;
    auVar24._4_4_ = auVar23._4_4_ + (int)((ulong)uVar1 >> 0x20);
    auVar24._8_4_ = auVar23._8_4_;
    auVar24._12_4_ = auVar23._12_4_;
    iVar12 = iVar12 + iVar3;
    auVar23 = auVar24;
  } while (&local_48 != puVar9);
  local_3110[0] = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(lVar11);
  local_3058 = 2;
  uVar18 = 0;
  if (param_3 != 0) {
    do {
      uVar10 = uVar18;
      param_1[uVar10] = (uint)uVar10;
      uVar18 = uVar10 + 1;
    } while (param_3 != uVar10 + 1);
    puVar19 = param_1;
    do {
      uVar2 = *puVar19;
      puVar19 = puVar19 + 1;
      uVar4 = puVar6[uVar2];
      fVar26 = local_3040[(ulong)(uVar4 & 0x3ff) * 3 + -2];
      local_3110[0][(uint)fVar26] = uVar2;
      local_3040[(ulong)(uVar4 & 0x3ff) * 3 + -2] = (float)((int)fVar26 + 1);
    } while (param_1 + param_3 != puVar19);
    puVar19 = local_3110[0];
    do {
      uVar2 = *puVar19;
      puVar19 = puVar19 + 1;
      uVar18 = (ulong)(puVar6[uVar2] >> 10 & 0x3ff);
      fVar26 = local_3040[uVar18 * 3 + -1];
      param_1[(uint)fVar26] = uVar2;
      local_3040[uVar18 * 3 + -1] = (float)((int)fVar26 + 1);
      puVar16 = param_1;
    } while (puVar19 != local_3110[0] + param_3);
    do {
      uVar2 = *puVar16;
      puVar16 = puVar16 + 1;
      uVar18 = (ulong)(puVar6[uVar2] >> 0x14 & 0x3ff);
      fVar26 = local_3040[uVar18 * 3];
      local_3110[0][(uint)fVar26] = uVar2;
      local_3040[uVar18 * 3] = (float)((int)fVar26 + 1);
    } while (param_1 + param_3 != puVar16);
    uVar18 = 0;
    do {
      param_1[local_3110[0][uVar18]] = (uint)uVar18;
      bVar21 = uVar10 != uVar18;
      uVar18 = uVar18 + 1;
    } while (bVar21);
  }
  (*(code *)meshopt_Allocator::StorageT<void>::deallocate)();
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  (*(code *)meshopt_Allocator::StorageT<void>::deallocate)(puVar6);
  return;
}



void meshopt_spatialSortTriangles
               (uint *param_1,uint *param_2,ulong param_3,long param_4,undefined8 param_5,
               ulong param_6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  long lVar8;
  uint *puVar9;
  float *pfVar10;
  long *plVar11;
  ulong uVar12;
  float *pfVar13;
  float *pfVar14;
  long lVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  float *local_108;
  long local_100;
  void *local_f8;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar11 = &local_100;
  for (lVar8 = 0x17; lVar8 != 0; lVar8 = lVar8 + -1) {
    *plVar11 = 0;
    plVar11 = plVar11 + 1;
  }
  uVar16 = param_3 / 3;
  pfVar6 = (float *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)();
  fVar5 = _LC8;
  local_48 = 1;
  local_108 = pfVar6;
  if (param_3 < 3) {
    lVar15 = 2;
    lVar8 = (*(code *)meshopt_Allocator::StorageT<void>::allocate)(0);
    local_48 = 2;
    local_100 = lVar8;
    meshopt_spatialSortRemap(lVar8,pfVar6,0,0xc);
    if (param_1 != param_2) goto LAB_001007b0;
    lVar15 = param_3 * 4;
LAB_00100876:
    local_f8 = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(lVar15);
    lVar15 = 3;
    local_48 = 3;
    param_2 = (uint *)memcpy(local_f8,param_2,param_3 * 4);
    if (param_3 < 3) goto LAB_001007b0;
  }
  else {
    uVar12 = 0;
    param_6 = param_6 & 0xfffffffffffffffc;
    puVar9 = param_2;
    pfVar10 = pfVar6;
    do {
      uVar12 = uVar12 + 1;
      pfVar14 = (float *)(*puVar9 * param_6 + param_4);
      pfVar13 = (float *)(puVar9[1] * param_6 + param_4);
      pfVar7 = (float *)(puVar9[2] * param_6 + param_4);
      *pfVar10 = (*pfVar14 + *pfVar13 + *pfVar7) / fVar5;
      pfVar10[1] = (pfVar14[1] + pfVar13[1] + pfVar7[1]) / fVar5;
      pfVar10[2] = (pfVar14[2] + pfVar13[2] + pfVar7[2]) / fVar5;
      puVar9 = puVar9 + 3;
      pfVar10 = pfVar10 + 3;
    } while (uVar12 < uVar16);
    if (param_3 < 0xc000000000000000) {
      lVar8 = (*(code *)meshopt_Allocator::StorageT<void>::allocate)(uVar16 * 4);
      local_48 = 2;
      local_100 = lVar8;
      meshopt_spatialSortRemap(lVar8,pfVar6,uVar16,0xc);
      if (param_1 == param_2) {
        lVar15 = -1;
        if (param_3 < 0x4000000000000000) {
          lVar15 = param_3 * 4;
        }
        goto LAB_00100876;
      }
    }
    else {
      lVar8 = (*(code *)meshopt_Allocator::StorageT<void>::allocate)(0xffffffffffffffff);
      local_48 = 2;
      local_100 = lVar8;
      meshopt_spatialSortRemap(lVar8,pfVar6,uVar16,0xc);
      if (param_1 == param_2) {
        lVar15 = -1;
        goto LAB_00100876;
      }
    }
    lVar15 = 2;
  }
  uVar12 = 0;
  do {
    lVar1 = uVar12 * 4;
    uVar12 = uVar12 + 1;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = *(int *)(lVar8 + lVar1) * 3;
    param_1[uVar4] = *param_2;
    param_1[uVar4 + 1] = uVar2;
    param_1[uVar4 + 2] = uVar3;
    param_2 = param_2 + 3;
  } while (uVar12 < uVar16);
LAB_001007b0:
  do {
    lVar15 = lVar15 + -1;
    (*(code *)meshopt_Allocator::StorageT<void>::deallocate)((&local_108)[lVar15]);
  } while (lVar15 != 0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



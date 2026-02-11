
/* meshopt::calculateSortOrderRadix(unsigned int*, float const*, unsigned short*, unsigned long) */

void meshopt::calculateSortOrderRadix(uint *param_1,float *param_2,ushort *param_3,ulong param_4)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  ulong uVar9;
  ushort *puVar10;
  long lVar11;
  ushort uVar12;
  uint *puVar13;
  uint *puVar14;
  long in_FS_OFFSET;
  float fVar15;
  float fVar16;
  uint local_2018 [2048];
  int local_18 [2];
  long local_10;
  
  fVar6 = _LC5;
  fVar5 = _LC4;
  fVar4 = _LC2;
  puVar14 = local_2018;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
    puVar13 = local_2018;
    for (lVar11 = 0x400; lVar11 != 0; lVar11 = lVar11 + -1) {
      *(undefined8 *)puVar13 = 0;
      puVar13 = (uint *)((long)puVar13 + 8);
    }
  }
  else {
    pfVar8 = param_2;
    fVar16 = _LC0;
    do {
      fVar1 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      fVar15 = (float)((uint)fVar1 & _LC1);
      if ((float)((uint)fVar1 & _LC1) <= fVar16) {
        fVar15 = fVar16;
      }
      fVar16 = fVar15;
    } while (param_2 + param_4 != pfVar8);
    uVar9 = 0;
    do {
      uVar12 = 0;
      fVar16 = fVar4 - (param_2[uVar9] / fVar15) * fVar4;
      if ((0.0 <= fVar16) && (uVar12 = 0x7ff, fVar16 <= fVar5)) {
        uVar12 = (ushort)(int)(fVar16 * fVar6 + fVar4) & 0x7ff;
      }
      param_3[uVar9] = uVar12;
      uVar9 = uVar9 + 1;
    } while (param_4 != uVar9);
    puVar13 = local_2018;
    for (lVar11 = 0x400; lVar11 != 0; lVar11 = lVar11 + -1) {
      *(undefined8 *)puVar13 = 0;
      puVar13 = (uint *)((long)puVar13 + 8);
    }
    puVar10 = param_3;
    do {
      uVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      local_2018[uVar12] = local_2018[uVar12] + 1;
    } while (puVar10 != param_3 + param_4);
  }
  iVar7 = 0;
  do {
    iVar2 = *puVar14;
    *puVar14 = iVar7;
    puVar14 = (uint *)((int *)puVar14 + 1);
    iVar7 = iVar7 + iVar2;
  } while (puVar14 != (uint *)local_18);
  uVar9 = 0;
  if (param_4 != 0) {
    do {
      uVar12 = param_3[uVar9];
      uVar3 = local_2018[uVar12];
      param_1[uVar3] = (uint)uVar9;
      uVar9 = uVar9 + 1;
      local_2018[uVar12] = uVar3 + 1;
    } while (param_4 != uVar9);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* meshopt::updateCache(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int*,
   unsigned int&) [clone .constprop.0] */

char meshopt::updateCache
               (uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5,uint *param_6)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  undefined4 in_register_0000000c;
  long lVar4;
  
  lVar4 = CONCAT44(in_register_0000000c,param_4);
  uVar2 = *param_5;
  puVar1 = (uint *)(lVar4 + (ulong)param_1 * 4);
  cVar3 = 0x10 < uVar2 - *puVar1;
  if ((bool)cVar3) {
    *param_5 = uVar2 + 1;
    *puVar1 = uVar2;
    uVar2 = *param_5;
  }
  puVar1 = (uint *)(lVar4 + (ulong)param_2 * 4);
  if (0x10 < uVar2 - *puVar1) {
    cVar3 = cVar3 + '\x01';
    *param_5 = uVar2 + 1;
    *puVar1 = uVar2;
    uVar2 = *param_5;
  }
  puVar1 = (uint *)(lVar4 + (ulong)param_3 * 4);
  if (0x10 < uVar2 - *puVar1) {
    cVar3 = cVar3 + '\x01';
    *param_5 = uVar2 + 1;
    *puVar1 = uVar2;
  }
  return cVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void meshopt_optimizeOverdraw
               (uint *param_1,uint *param_2,ulong param_3,long param_4,ulong param_5,uint *param_6)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  long lVar12;
  float *pfVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  ulong uVar18;
  ulong uVar19;
  float *pfVar20;
  uint **ppuVar21;
  size_t sVar22;
  size_t sVar23;
  uint *puVar24;
  ulong uVar25;
  uint *puVar26;
  uint *puVar27;
  uint *puVar28;
  uint *puVar29;
  ulong uVar30;
  uint uVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  long in_FS_OFFSET;
  float extraout_XMM0_Da;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  long local_198;
  long local_190;
  uint *local_170;
  long local_158;
  long local_148;
  long local_140;
  long local_130;
  long local_128;
  uint local_10c;
  uint *local_108 [24];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  ppuVar21 = local_108;
  for (lVar12 = 0x18; lVar12 != 0; lVar12 = lVar12 + -1) {
    *ppuVar21 = (uint *)0x0;
    ppuVar21 = ppuVar21 + 1;
  }
  if ((param_3 == 0) || (param_5 == 0)) goto LAB_00100abb;
  puVar8 = param_6;
  if (param_1 == param_2) {
    lVar12 = 7;
    sVar23 = 0xffffffffffffffff;
    if (param_3 < 0x4000000000000000) {
      sVar23 = param_3 * 4;
    }
    param_2 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar23);
    lVar33 = 1;
    local_108[0] = param_2;
    memcpy(param_2,param_1,param_3 * 4);
    local_190 = 2;
    local_198 = 3;
    local_130 = 6;
    local_140 = 5;
    local_158 = 4;
  }
  else {
    local_190 = 1;
    lVar12 = 6;
    lVar33 = 0;
    local_198 = 2;
    local_130 = 5;
    local_140 = 4;
    local_158 = 3;
  }
  sVar23 = param_5 * 4;
  sVar22 = 0xffffffffffffffff;
  if (param_5 < 0x4000000000000000) {
    sVar22 = sVar23;
  }
  puVar7 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar22);
  local_108[lVar33] = puVar7;
  puVar16 = (uint *)(param_3 / 3);
  if (param_3 < 0xc000000000000000) {
    local_170 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)((long)puVar16 * 4);
    local_48 = local_198;
    local_108[local_190] = local_170;
    memset(puVar7,0,sVar23);
    if (2 < param_3) goto LAB_00100364;
    puVar8 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(4);
    local_108[local_198] = puVar8;
    memset(puVar7,0,sVar23);
LAB_00100ce5:
    local_128 = 0;
    uVar34 = 0;
    local_148 = 0;
  }
  else {
    local_170 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(0xffffffffffffffff);
    local_108[local_190] = local_170;
    memset(puVar7,0,sVar23);
LAB_00100364:
    local_10c = 0x11;
    puVar14 = (uint *)0x0;
    uVar32 = 0;
    puVar24 = &local_10c;
    puVar17 = param_2;
    puVar27 = puVar16;
    do {
      while( true ) {
        uVar11 = (uint)puVar7;
        iVar5 = meshopt::updateCache(*puVar17,puVar17[1],puVar17[2],uVar11,puVar24,puVar8);
        if ((puVar14 != (uint *)0x0) && (iVar5 != 3)) break;
        local_170[uVar32] = (uint)puVar14;
        puVar14 = (uint *)((long)puVar14 + 1);
        uVar32 = uVar32 + 1;
        puVar17 = puVar17 + 3;
        if (puVar27 <= puVar14) goto LAB_001003de;
      }
      puVar14 = (uint *)((long)puVar14 + 1);
      puVar17 = puVar17 + 3;
    } while (puVar14 < puVar27);
LAB_001003de:
    puVar8 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)((long)puVar16 * 4 + 4);
    local_48 = local_158;
    local_108[local_198] = puVar8;
    memset(puVar7,0,sVar23);
    local_10c = 0;
    if (uVar32 == 0) goto LAB_00100ce5;
    uVar34 = 0;
    local_10c = 0;
    uVar19 = 0;
    do {
      uVar3 = local_170[uVar19];
      puVar7 = (uint *)(ulong)uVar3;
      uVar19 = uVar19 + 1;
      puVar17 = puVar16;
      if (uVar19 < uVar32) {
        puVar17 = (uint *)(ulong)local_170[uVar19];
      }
      puVar27 = puVar8 + uVar34;
      uVar34 = uVar34 + 1;
      if (puVar7 < puVar17) {
        uVar15 = 0;
        puVar14 = param_2 + (long)puVar7 * 3;
        puVar26 = puVar7;
        puVar28 = puVar14;
        local_10c = local_10c + 0x11;
        do {
          puVar29 = puVar28 + 3;
          iVar5 = meshopt::updateCache(*puVar28,puVar28[1],puVar28[2],uVar11,puVar24,puVar26);
          uVar15 = uVar15 + iVar5;
          puVar28 = puVar29;
        } while (param_2 + (long)puVar17 * 3 != puVar29);
        puVar26 = (uint *)(ulong)uVar3;
        *puVar27 = uVar3;
        uVar31 = 0;
        local_10c = local_10c + 0x11;
        uVar6 = 0;
        fVar43 = ((float)uVar15 / (float)(ulong)((long)puVar17 - (long)puVar7)) * extraout_XMM0_Da;
        do {
          puVar7 = (uint *)((long)puVar7 + 1);
          uVar31 = uVar31 + 1;
          iVar5 = meshopt::updateCache(*puVar14,puVar14[1],puVar14[2],uVar11,puVar24,puVar26);
          uVar6 = iVar5 + uVar6;
          if ((float)uVar6 / (float)uVar31 <= fVar43) {
            local_10c = local_10c + 0x11;
            uVar31 = 0;
            uVar6 = 0;
            puVar8[uVar34] = (uint)puVar7;
            uVar34 = uVar34 + 1;
          }
          puVar14 = puVar14 + 3;
        } while (puVar7 != puVar17);
      }
      else {
        local_10c = local_10c + 0x22;
        *puVar27 = uVar3;
      }
      if (uVar3 != puVar8[uVar34 - 1]) {
        uVar34 = uVar34 - 1;
      }
    } while (uVar19 != uVar32);
    local_128 = uVar34 * 2;
    local_148 = -1;
    if (uVar34 < 0x4000000000000000) {
      local_148 = uVar34 * 4;
    }
  }
  pfVar9 = (float *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(local_148);
  puVar4 = meshopt_Allocator::StorageT<void>::allocate;
  fVar50 = 0.0;
  uVar32 = 0;
  fVar52 = 0.0;
  uVar19 = (ulong)param_6 & 0xfffffffffffffffc;
  local_48 = local_140;
  local_108[local_158] = (uint *)pfVar9;
  fVar43 = fVar52;
  do {
    puVar7 = param_2 + uVar32;
    uVar32 = uVar32 + 1;
    pfVar10 = (float *)(*puVar7 * uVar19 + param_4);
    fVar43 = fVar43 + *pfVar10;
    fVar52 = fVar52 + pfVar10[1];
    fVar50 = fVar50 + pfVar10[2];
  } while (uVar32 < param_3);
  fVar44 = (float)(long)param_3;
  if (uVar34 == 0) {
    puVar8 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(local_128);
    local_108[local_140] = puVar8;
    puVar7 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(local_148);
    local_108[local_130] = puVar7;
    meshopt::calculateSortOrderRadix(puVar7,pfVar9,(ushort *)puVar8,0);
  }
  else {
    uVar32 = 0;
    do {
      uVar18 = uVar32 + 1;
      uVar25 = (ulong)(puVar8[uVar32] * 3);
      uVar30 = param_3;
      if (uVar18 < uVar34) {
        uVar30 = (ulong)(puVar8[uVar18] * 3);
      }
      if (uVar25 < uVar30) {
        fVar49 = 0.0;
        fVar38 = 0.0;
        fVar41 = 0.0;
        fVar47 = 0.0;
        fVar42 = 0.0;
        fVar45 = 0.0;
        fVar46 = 0.0;
        do {
          lVar33 = uVar25 + 1;
          puVar7 = param_2 + uVar25;
          lVar35 = uVar25 + 2;
          uVar25 = uVar25 + 3;
          pfVar20 = (float *)(param_2[lVar33] * uVar19 + param_4);
          pfVar10 = (float *)(*puVar7 * uVar19 + param_4);
          pfVar13 = (float *)(param_2[lVar35] * uVar19 + param_4);
          fVar39 = pfVar10[1];
          fVar1 = pfVar10[2];
          fVar48 = pfVar20[1] - fVar39;
          fVar40 = pfVar20[2] - fVar1;
          fVar2 = *pfVar10;
          fVar51 = pfVar13[2] - fVar1;
          fVar36 = *pfVar20 - fVar2;
          fVar54 = pfVar13[1] - fVar39;
          fVar53 = *pfVar13 - fVar2;
          fVar37 = fVar48 * fVar51 - fVar40 * fVar54;
          fVar40 = fVar40 * fVar53 - fVar51 * fVar36;
          fVar47 = fVar37 + fVar47;
          fVar36 = fVar36 * fVar54 - fVar48 * fVar53;
          fVar41 = fVar40 + fVar41;
          fVar38 = fVar36 + fVar38;
          fVar36 = SQRT(fVar40 * fVar40 + fVar37 * fVar37 + fVar36 * fVar36);
          fVar37 = fVar36 / __LC6;
          fVar49 = fVar36 + fVar49;
          fVar46 = (*pfVar20 + fVar2 + *pfVar13) * fVar37 + fVar46;
          fVar45 = (pfVar20[1] + fVar39 + pfVar13[1]) * fVar37 + fVar45;
          fVar42 = (pfVar20[2] + fVar1 + pfVar13[2]) * fVar37 + fVar42;
        } while (uVar25 < uVar30);
        fVar39 = SQRT(fVar47 * fVar47 + fVar41 * fVar41 + fVar38 * fVar38);
        if (fVar49 == 0.0) {
          fVar46 = fVar46 * 0.0;
          fVar45 = fVar45 * 0.0;
          fVar49 = fVar42 * 0.0;
        }
        else {
          fVar49 = _LC4 / fVar49;
          fVar46 = fVar46 * fVar49;
          fVar45 = fVar45 * fVar49;
          fVar49 = fVar49 * fVar42;
        }
        fVar42 = 0.0;
        if (fVar39 != 0.0) {
          fVar42 = _LC4 / fVar39;
        }
      }
      else {
        fVar49 = 0.0;
        fVar45 = 0.0;
        fVar46 = 0.0;
        fVar47 = 0.0;
        fVar42 = 0.0;
        fVar41 = 0.0;
        fVar38 = 0.0;
      }
      pfVar9[uVar32] =
           fVar47 * fVar42 * (fVar46 - fVar43 / fVar44) +
           fVar41 * fVar42 * (fVar45 - fVar52 / fVar44) +
           fVar42 * fVar38 * (fVar49 - fVar50 / fVar44);
      uVar32 = uVar18;
    } while (uVar34 != uVar18);
    puVar7 = (uint *)(*(code *)puVar4)(local_128);
    local_108[local_140] = puVar7;
    puVar16 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(local_148);
    lVar33 = 0;
    local_108[local_130] = puVar16;
    meshopt::calculateSortOrderRadix(puVar16,pfVar9,(ushort *)puVar7,uVar18);
    puVar7 = puVar16 + uVar18;
    do {
      uVar11 = *puVar16;
      uVar34 = (ulong)(uVar11 + 1);
      uVar32 = param_3;
      if (uVar34 < uVar18) {
        uVar32 = (ulong)(puVar8[uVar34] * 3);
      }
      puVar16 = puVar16 + 1;
      lVar35 = uVar32 - puVar8[uVar11] * 3;
      puVar24 = param_1 + lVar33;
      lVar33 = lVar33 + lVar35;
      memcpy(puVar24,param_2 + puVar8[uVar11] * 3,lVar35 * 4);
    } while (puVar7 != puVar16);
  }
  do {
    lVar12 = lVar12 + -1;
    (*(code *)meshopt_Allocator::StorageT<void>::deallocate)(local_108[lVar12]);
  } while (lVar12 != 0);
LAB_00100abb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



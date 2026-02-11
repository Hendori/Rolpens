
/* meshopt::buildTriangleAdjacency(meshopt::TriangleAdjacency&, unsigned int const*, unsigned long,
   unsigned long, meshopt_Allocator&) */

void meshopt::buildTriangleAdjacency
               (TriangleAdjacency *param_1,uint *param_2,ulong param_3,ulong param_4,
               meshopt_Allocator *param_5)

{
  int *piVar1;
  size_t __n;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  size_t sVar13;
  long lVar14;
  
  __n = param_4 * 4;
  sVar13 = 0xffffffffffffffff;
  if (param_4 < 0x4000000000000000) {
    sVar13 = __n;
  }
  uVar9 = (*(code *)meshopt_Allocator::StorageT<void>::allocate)();
  lVar14 = *(long *)(param_5 + 0xc0);
  *(long *)(param_5 + 0xc0) = lVar14 + 1;
  *(undefined8 *)(param_5 + lVar14 * 8) = uVar9;
  *(undefined8 *)param_1 = uVar9;
  uVar9 = (*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar13);
  lVar14 = *(long *)(param_5 + 0xc0);
  *(long *)(param_5 + 0xc0) = lVar14 + 1;
  *(undefined8 *)(param_5 + lVar14 * 8) = uVar9;
  *(undefined8 *)(param_1 + 8) = uVar9;
  if (param_3 < 0x4000000000000000) {
    uVar9 = (*(code *)meshopt_Allocator::StorageT<void>::allocate)(param_3 * 4);
    lVar14 = *(long *)(param_5 + 0xc0);
    pvVar5 = *(void **)param_1;
    *(long *)(param_5 + 0xc0) = lVar14 + 1;
    *(undefined8 *)(param_5 + lVar14 * 8) = uVar9;
    *(undefined8 *)(param_1 + 0x10) = uVar9;
    memset(pvVar5,0,__n);
    if (param_3 != 0) goto LAB_00100101;
    if (param_4 == 0) {
      return;
    }
    lVar14 = *(long *)param_1;
LAB_00100129:
    lVar10 = *(long *)(param_1 + 8);
    uVar12 = 0;
    iVar7 = 0;
    do {
      *(int *)(lVar10 + uVar12 * 4) = iVar7;
      iVar7 = iVar7 + *(int *)(lVar14 + uVar12 * 4);
      uVar12 = uVar12 + 1;
    } while (uVar12 < param_4);
    if (param_3 < 3) goto LAB_001001b3;
  }
  else {
    uVar9 = (*(code *)meshopt_Allocator::StorageT<void>::allocate)(0xffffffffffffffff);
    lVar14 = *(long *)(param_5 + 0xc0);
    pvVar5 = *(void **)param_1;
    *(long *)(param_5 + 0xc0) = lVar14 + 1;
    *(undefined8 *)(param_5 + lVar14 * 8) = uVar9;
    *(undefined8 *)(param_1 + 0x10) = uVar9;
    memset(pvVar5,0,__n);
LAB_00100101:
    lVar14 = *(long *)param_1;
    puVar11 = param_2;
    do {
      uVar2 = *puVar11;
      puVar11 = puVar11 + 1;
      piVar1 = (int *)(lVar14 + (ulong)uVar2 * 4);
      *piVar1 = *piVar1 + 1;
    } while (param_2 + param_3 != puVar11);
    if (param_4 != 0) goto LAB_00100129;
    if (param_3 < 3) {
      return;
    }
    lVar10 = *(long *)(param_1 + 8);
  }
  lVar6 = *(long *)(param_1 + 0x10);
  uVar12 = 0;
  do {
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    puVar11 = (uint *)(lVar10 + (ulong)*param_2 * 4);
    uVar4 = *puVar11;
    *puVar11 = uVar4 + 1;
    uVar8 = (undefined4)uVar12;
    *(undefined4 *)(lVar6 + (ulong)uVar4 * 4) = uVar8;
    puVar11 = (uint *)(lVar10 + (ulong)uVar2 * 4);
    uVar2 = *puVar11;
    *puVar11 = uVar2 + 1;
    puVar11 = (uint *)(lVar10 + (ulong)uVar3 * 4);
    *(undefined4 *)(lVar6 + (ulong)uVar2 * 4) = uVar8;
    uVar2 = *puVar11;
    *puVar11 = uVar2 + 1;
    *(undefined4 *)(lVar6 + (ulong)uVar2 * 4) = uVar8;
    uVar12 = uVar12 + 1;
    param_2 = param_2 + 3;
  } while (uVar12 < param_3 / 3);
  if (param_4 == 0) {
    return;
  }
LAB_001001b3:
  uVar12 = 0;
  do {
    piVar1 = (int *)(lVar10 + uVar12 * 4);
    *piVar1 = *piVar1 - *(int *)(lVar14 + uVar12 * 4);
    uVar12 = uVar12 + 1;
  } while (param_4 != uVar12);
  return;
}



/* meshopt_optimizeVertexCacheTable(unsigned int*, unsigned int const*, unsigned long, unsigned
   long, meshopt::VertexScoreTable const*) */

void meshopt_optimizeVertexCacheTable
               (uint *param_1,uint *param_2,ulong param_3,ulong param_4,VertexScoreTable *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  void *__s;
  void *pvVar10;
  ulong uVar11;
  void *pvVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  uint *puVar18;
  uint *puVar19;
  ulong uVar20;
  meshopt_Allocator *pmVar21;
  long lVar22;
  size_t sVar23;
  uint *puVar24;
  uint *puVar25;
  ulong uVar26;
  float *pfVar27;
  int iVar28;
  long lVar29;
  ulong __n;
  long in_FS_OFFSET;
  float fVar30;
  float fVar31;
  uint *local_228;
  uint *local_208;
  ulong local_1e8;
  uint local_1dc;
  undefined1 local_1c8 [16];
  long local_1b8;
  uint local_1a8 [20];
  uint local_158 [20];
  void *local_108 [24];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  pmVar21 = (meshopt_Allocator *)local_108;
  for (lVar14 = 0x18; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined8 *)pmVar21 = 0;
    pmVar21 = pmVar21 + 8;
  }
  if ((param_3 == 0) || (param_4 == 0)) goto LAB_001006e3;
  local_208 = param_2;
  if (param_1 == param_2) {
    sVar23 = 0xffffffffffffffff;
    if (param_3 < 0x4000000000000000) {
      sVar23 = param_3 * 4;
    }
    local_108[0] = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar23);
    local_48 = 1;
    local_208 = (uint *)memcpy(local_108[0],param_1,param_3 * 4);
  }
  local_1c8 = (undefined1  [16])0x0;
  local_1b8 = 0;
  __n = param_3 / 3;
  meshopt::buildTriangleAdjacency
            ((TriangleAdjacency *)local_1c8,local_208,param_3,param_4,(meshopt_Allocator *)local_108
            );
  uVar8 = local_1c8._0_8_;
  __s = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(__n);
  lVar29 = local_48;
  lVar14 = local_48 + 1;
  local_108[local_48] = __s;
  memset(__s,0,__n);
  lVar22 = param_4 * 4;
  if (0x3fffffffffffffff < param_4) {
    lVar22 = -1;
  }
  pvVar10 = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(lVar22);
  uVar17 = 0;
  local_108[lVar14] = pvVar10;
  do {
    uVar9 = *(uint *)(uVar8 + uVar17 * 4);
    uVar11 = (ulong)uVar9;
    if (8 < uVar9) {
      uVar11 = 8;
    }
    *(float *)((long)pvVar10 + uVar17 * 4) =
         *(float *)(param_5 + uVar11 * 4 + 0x44) + *(float *)param_5;
    uVar17 = uVar17 + 1;
  } while (uVar17 < param_4);
  if (param_3 < 0xc000000000000000) {
    pvVar12 = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(__n << 2);
    local_48 = lVar29 + 3;
    local_108[lVar29 + 2] = pvVar12;
    if (param_3 < 3) goto LAB_0010042d;
  }
  else {
    pvVar12 = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(0xffffffffffffffff);
    local_48 = lVar29 + 3;
    local_108[lVar29 + 2] = pvVar12;
  }
  uVar17 = 0;
  puVar13 = local_208;
  do {
    *(float *)((long)pvVar12 + uVar17 * 4) =
         *(float *)((long)pvVar10 + (ulong)*puVar13 * 4) +
         *(float *)((long)pvVar10 + (ulong)puVar13[1] * 4) +
         *(float *)((long)pvVar10 + (ulong)puVar13[2] * 4);
    uVar17 = uVar17 + 1;
    puVar13 = puVar13 + 3;
  } while (uVar17 < __n);
LAB_0010042d:
  lVar29 = lVar29 + 3;
  uVar17 = 0;
  uVar11 = 0;
  uVar9 = 0;
  local_1dc = 1;
  local_1e8 = 1;
  puVar13 = local_158;
  local_228 = local_1a8;
  do {
    puVar25 = puVar13;
    uVar6 = uVar9 * 3;
    puVar13 = local_208 + uVar6;
    uVar4 = local_208[uVar6 + 1];
    uVar5 = *puVar13;
    uVar6 = local_208[uVar6 + 2];
    iVar16 = (int)uVar11;
    param_1[uVar11] = uVar5;
    param_1[iVar16 + 1] = uVar4;
    param_1[iVar16 + 2] = uVar6;
    puVar25[2] = uVar6;
    *(undefined1 *)((long)__s + (ulong)uVar9) = 1;
    *(ulong *)puVar25 = CONCAT44(uVar4,uVar5);
    *(undefined4 *)((long)pvVar12 + (ulong)uVar9 * 4) = 0;
    if (uVar17 == 0) {
      uVar11 = 3;
      uVar17 = 3;
    }
    else {
      uVar11 = 3;
      puVar19 = local_228;
      puVar24 = puVar13;
      lVar14 = local_1b8;
      do {
        uVar7 = *puVar19;
        puVar25[uVar11] = uVar7;
        lVar14 = CONCAT71((int7)((ulong)lVar14 >> 8),uVar5 != uVar7);
        puVar24 = (uint *)(ulong)((uint)CONCAT71((int7)((ulong)puVar24 >> 8),uVar4 != uVar7) &
                                 (uint)lVar14);
        puVar19 = puVar19 + 1;
        uVar11 = uVar11 + ((ulong)(uVar6 != uVar7) & (ulong)puVar24);
      } while (puVar19 != local_228 + uVar17);
      uVar17 = 0x10;
      if (uVar11 < 0x11) {
        uVar17 = uVar11;
      }
    }
    lVar14 = 0;
    do {
      puVar24 = (uint *)(uVar8 + (ulong)puVar13[lVar14] * 4);
      uVar20 = (ulong)*puVar24;
      puVar19 = (uint *)(local_1b8 +
                        (ulong)*(uint *)(local_1c8._8_8_ + (ulong)puVar13[lVar14] * 4) * 4);
      if (uVar20 != 0) {
        uVar15 = 0;
        puVar18 = puVar19;
        do {
          if (*puVar18 == uVar9) {
            *puVar18 = puVar19[uVar20 - 1];
            *puVar24 = *puVar24 - 1;
            break;
          }
          uVar15 = uVar15 + 1;
          puVar18 = puVar18 + 1;
        } while (uVar20 != uVar15);
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != 3);
    uVar20 = 0;
    fVar31 = 0.0;
    uVar9 = 0xffffffff;
    if (uVar11 == 0) {
LAB_00100750:
      if (__n <= local_1e8) break;
      uVar11 = (ulong)local_1dc;
      while (uVar9 = (uint)uVar11, *(char *)((long)__s + local_1e8) != '\0') {
        local_1e8 = (ulong)(uVar9 + 1);
        uVar11 = local_1e8;
        if (__n <= local_1e8) goto joined_r0x001006c4;
      }
      local_1dc = uVar9;
      if (uVar9 == 0xffffffff) break;
    }
    else {
      do {
        while( true ) {
          uVar15 = (ulong)puVar25[uVar20];
          uVar4 = *(uint *)(uVar8 + uVar15 * 4);
          if (uVar4 == 0) break;
          iVar28 = (int)uVar20 + 1;
          if (0xf < uVar20) {
            iVar28 = 0;
          }
          puVar13 = (uint *)(local_1b8 + (ulong)*(uint *)(local_1c8._8_8_ + uVar15 * 4) * 4);
          uVar26 = 8;
          if (uVar4 < 9) {
            uVar26 = (ulong)uVar4;
          }
          fVar1 = *(float *)(param_5 + uVar26 * 4 + 0x44);
          fVar2 = *(float *)(param_5 + (long)iVar28 * 4);
          pfVar27 = (float *)(uVar15 * 4 + (long)pvVar10);
          fVar3 = *pfVar27;
          *pfVar27 = fVar1 + fVar2;
          puVar19 = puVar13 + uVar4;
          do {
            uVar4 = *puVar13;
            pfVar27 = (float *)((long)pvVar12 + (ulong)uVar4 * 4);
            fVar30 = *pfVar27 + ((fVar1 + fVar2) - fVar3);
            *pfVar27 = fVar30;
            if (fVar31 < fVar30) {
              uVar9 = uVar4;
              fVar31 = fVar30;
            }
            puVar13 = puVar13 + 1;
          } while (puVar19 != puVar13);
          uVar20 = uVar20 + 1;
          if (uVar20 == uVar11) goto LAB_00100695;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar11);
LAB_00100695:
      if (uVar9 == 0xffffffff) goto LAB_00100750;
    }
    uVar11 = (ulong)(iVar16 + 3);
    puVar13 = local_228;
    local_228 = puVar25;
  } while( true );
joined_r0x001006c4:
  while (lVar29 != 0) {
    lVar29 = lVar29 + -1;
    (*(code *)meshopt_Allocator::StorageT<void>::deallocate)
              (*(undefined8 *)((meshopt_Allocator *)local_108 + lVar29 * 8));
  }
LAB_001006e3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void meshopt_optimizeVertexCache(uint *param_1,uint *param_2,ulong param_3,ulong param_4)

{
  meshopt_optimizeVertexCacheTable
            (param_1,param_2,param_3,param_4,(VertexScoreTable *)meshopt::kVertexScoreTable);
  return;
}



void meshopt_optimizeVertexCacheStrip(uint *param_1,uint *param_2,ulong param_3,ulong param_4)

{
  meshopt_optimizeVertexCacheTable
            (param_1,param_2,param_3,param_4,(VertexScoreTable *)meshopt::kVertexScoreTableStrip);
  return;
}



/* WARNING: Type propagation algorithm not settling */

void meshopt_optimizeVertexCacheFifo
               (uint *param_1,uint *param_2,ulong param_3,ulong param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  void *__dest;
  void *__s;
  void *pvVar11;
  void *__s_00;
  long lVar12;
  int *piVar13;
  int *piVar14;
  size_t sVar15;
  int iVar16;
  meshopt_Allocator *pmVar17;
  char *pcVar18;
  size_t sVar19;
  uint *puVar20;
  ulong uVar21;
  uint *puVar22;
  ulong uVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  long in_FS_OFFSET;
  ulong local_190;
  uint *local_168;
  uint local_134;
  undefined1 local_128 [16];
  long local_118;
  void *local_108 [24];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  pmVar17 = (meshopt_Allocator *)local_108;
  for (lVar12 = 0x18; lVar12 != 0; lVar12 = lVar12 + -1) {
    *(undefined8 *)pmVar17 = 0;
    pmVar17 = pmVar17 + 8;
  }
  if ((param_3 != 0) && (param_4 != 0)) {
    local_168 = param_2;
    if (param_1 == param_2) {
      sVar19 = 0xffffffffffffffff;
      if (param_3 < 0x4000000000000000) {
        sVar19 = param_3 * 4;
      }
      local_108[0] = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar19);
      local_48 = 1;
      local_168 = (uint *)memcpy(local_108[0],param_1,param_3 * 4);
    }
    local_128 = (undefined1  [16])0x0;
    local_118 = 0;
    sVar19 = param_4 * 4;
    meshopt::buildTriangleAdjacency
              ((TriangleAdjacency *)local_128,local_168,param_3,param_4,
               (meshopt_Allocator *)local_108);
    sVar15 = 0xffffffffffffffff;
    if (param_4 < 0x4000000000000000) {
      sVar15 = sVar19;
    }
    __dest = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar15);
    lVar10 = local_48;
    local_108[local_48] = __dest;
    uVar9 = local_128._0_8_;
    memcpy(__dest,(void *)local_128._0_8_,sVar19);
    __s = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar15);
    local_108[lVar10 + 1] = __s;
    memset(__s,0,sVar19);
    lVar12 = param_3 * 4;
    if (0x3fffffffffffffff < param_3) {
      lVar12 = -1;
    }
    lVar26 = lVar10 + 4;
    pvVar11 = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(lVar12);
    local_108[lVar10 + 2] = pvVar11;
    __s_00 = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(param_3 / 3);
    local_48 = lVar26;
    local_108[lVar10 + 3] = __s_00;
    memset(__s_00,0,param_3 / 3);
    uVar23 = 0;
    uVar21 = 0;
    iVar16 = param_5 + 1;
    local_134 = 1;
    local_190 = 0;
    iVar24 = 0;
LAB_00100a38:
    do {
      puVar22 = (uint *)((long)pvVar11 + local_190 * 4);
      puVar20 = (uint *)(local_118 + (ulong)*(uint *)(local_128._8_8_ + uVar21 * 4) * 4);
      puVar1 = puVar20 + *(uint *)(uVar9 + uVar21 * 4);
      if (puVar20 != puVar1) {
        do {
          pcVar18 = (char *)((ulong)*puVar20 + (long)__s_00);
          if (*pcVar18 == '\0') {
            uVar4 = *puVar20 * 3;
            uVar7 = iVar24 * 3;
            iVar24 = iVar24 + 1;
            uVar2 = local_168[uVar4];
            uVar3 = local_168[uVar4 + 1];
            uVar4 = local_168[uVar4 + 2];
            param_1[uVar7] = uVar2;
            param_1[uVar7 + 1] = uVar3;
            param_1[uVar7 + 2] = uVar4;
            iVar25 = (int)uVar23;
            *(uint *)((long)pvVar11 + local_190 * 4) = uVar2;
            *(uint *)((long)pvVar11 + (ulong)(iVar25 + 1) * 4) = uVar3;
            uVar23 = (ulong)(iVar25 + 3);
            *(uint *)((long)pvVar11 + (ulong)(iVar25 + 2) * 4) = uVar4;
            piVar14 = (int *)((long)__dest + (ulong)uVar2 * 4);
            *piVar14 = *piVar14 + -1;
            piVar13 = (int *)((ulong)uVar2 * 4 + (long)__s);
            piVar14 = (int *)((long)__dest + (ulong)uVar3 * 4);
            *piVar14 = *piVar14 + -1;
            piVar14 = (int *)((long)__dest + (ulong)uVar4 * 4);
            *piVar14 = *piVar14 + -1;
            if (param_5 < (uint)(iVar16 - *piVar13)) {
              *piVar13 = iVar16;
              iVar16 = iVar16 + 1;
            }
            piVar14 = (int *)((ulong)uVar3 * 4 + (long)__s);
            if (param_5 < (uint)(iVar16 - *piVar14)) {
              *piVar14 = iVar16;
              iVar16 = iVar16 + 1;
            }
            piVar14 = (int *)((ulong)uVar4 * 4 + (long)__s);
            if (param_5 < (uint)(iVar16 - *piVar14)) {
              *piVar14 = iVar16;
              iVar16 = iVar16 + 1;
            }
            *pcVar18 = '\x01';
            local_190 = uVar23;
          }
          puVar20 = puVar20 + 1;
        } while (puVar1 != puVar20);
        puVar20 = (uint *)((long)pvVar11 + local_190 * 4);
        if (puVar22 != puVar20) {
          uVar21 = 0xffffffff;
          iVar25 = -1;
          do {
            uVar2 = *puVar22;
            iVar5 = *(int *)((long)__dest + (ulong)uVar2 * 4);
            if (iVar5 != 0) {
              iVar6 = *(int *)((long)__s + (ulong)uVar2 * 4);
              iVar8 = iVar16 - iVar6;
              if (param_5 < (uint)((iVar16 + iVar5 * 2) - iVar6)) {
                iVar8 = 0;
              }
              if (iVar25 < iVar8) {
                uVar21 = (ulong)uVar2;
                iVar25 = iVar8;
              }
            }
            puVar22 = puVar22 + 1;
          } while (puVar20 != puVar22);
          if ((int)uVar21 != -1) goto LAB_00100a38;
        }
      }
      do {
        if ((int)uVar23 == 0) {
          if (param_4 <= local_134) goto joined_r0x00100ca5;
          uVar21 = (ulong)local_134;
          goto LAB_00100c1b;
        }
        local_190 = (ulong)((int)uVar23 - 1);
        uVar2 = *(uint *)((long)pvVar11 + local_190 * 4);
        uVar21 = (ulong)uVar2;
        uVar23 = local_190;
      } while (*(int *)((long)__dest + uVar21 * 4) == 0);
joined_r0x00100c2d:
      if (uVar2 == 0xffffffff) goto joined_r0x00100ca5;
    } while( true );
  }
LAB_00100c5b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100c1b:
  local_134 = (uint)uVar21;
  uVar2 = local_134;
  if (*(int *)((long)__dest + uVar21 * 4) != 0) goto joined_r0x00100c2d;
  uVar21 = (ulong)(local_134 + 1);
  if (param_4 <= uVar21) goto joined_r0x00100ca5;
  goto LAB_00100c1b;
joined_r0x00100ca5:
  while (lVar26 != 0) {
    lVar26 = lVar26 + -1;
    (*(code *)meshopt_Allocator::StorageT<void>::deallocate)
              (*(undefined8 *)((meshopt_Allocator *)local_108 + lVar26 * 8));
  }
  goto LAB_00100c5b;
}



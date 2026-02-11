
/* unsigned int* meshopt::hashLookup<unsigned int, meshopt::VertexHasher>(unsigned int*, unsigned
   long, meshopt::VertexHasher const&, unsigned int const&, unsigned int const&) [clone
   .constprop.0] [clone .isra.0] */

uint * meshopt::hashLookup<unsigned_int,meshopt::VertexHasher>
                 (uint *param_1,ulong param_2,VertexHasher *param_3,uint *param_4,uint *param_5)

{
  ulong uVar1;
  int *__s2;
  uint *puVar2;
  long lVar3;
  long lVar4;
  ulong __n;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  
  uVar1 = param_2 - 1;
  lVar3 = *(long *)(param_3 + 0x10);
  lVar4 = *(long *)param_3;
  __n = *(ulong *)(param_3 + 8);
  __s2 = (int *)(lVar4 + ((ulong)param_4 & 0xffffffff) * lVar3);
  if (__n < 4) {
    uVar7 = 0;
  }
  else {
    uVar6 = 0;
    piVar8 = __s2;
    do {
      iVar5 = *piVar8;
      piVar8 = piVar8 + 1;
      uVar6 = uVar6 * 0x5bd1e995 ^
              (iVar5 * 0x5bd1e995 ^ (uint)(iVar5 * 0x5bd1e995) >> 0x18) * 0x5bd1e995;
    } while (piVar8 != (int *)((long)__s2 + (__n - 4 & 0xfffffffffffffffc) + 4));
    uVar7 = (ulong)(uVar6 & (uint)uVar1);
  }
  uVar9 = 0;
  while( true ) {
    puVar2 = param_1 + uVar7;
    if (*puVar2 == 0xffffffff) {
      return puVar2;
    }
    iVar5 = memcmp((void *)((ulong)*puVar2 * lVar3 + lVar4),__s2,__n);
    if (iVar5 == 0) break;
    uVar7 = uVar7 + 1 + uVar9;
    uVar9 = uVar9 + 1;
    uVar7 = uVar7 & uVar1;
    if (uVar1 < uVar9) {
      return (uint *)0x0;
    }
  }
  return puVar2;
}



/* unsigned long long* meshopt::hashLookup<unsigned long long, meshopt::EdgeHasher>(unsigned long
   long*, unsigned long, meshopt::EdgeHasher const&, unsigned long long const&, unsigned long long
   const&) [clone .constprop.0] [clone .isra.0] */

ulonglong *
meshopt::hashLookup<unsigned_long_long,meshopt::EdgeHasher>
          (ulonglong *param_1,ulong param_2,EdgeHasher *param_3,ulonglong *param_4,
          ulonglong *param_5)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  
  lVar4 = *(long *)param_3;
  uVar8 = param_2 - 1;
  uVar2 = *(uint *)(lVar4 + ((ulong)param_4 & 0xffffffff) * 4);
  uVar3 = *(uint *)(lVar4 + ((ulong)param_4 >> 0x20) * 4);
  uVar9 = (uVar2 >> 0x12 ^ uVar3) * 0x5bd1e995;
  uVar7 = (uVar9 >> 0x16 ^ uVar2) * 0x5bd1e995;
  uVar10 = 0;
  uVar6 = ((uVar7 >> 0x11 ^ uVar9) * 0x5bd1e995 >> 0x13 ^ uVar7) * 0x5bd1e995 & uVar8;
  puVar1 = param_1 + uVar6;
  uVar5 = *puVar1;
  if (uVar5 == 0xffffffffffffffff) {
    return puVar1;
  }
  uVar7 = *(uint *)(lVar4 + (uVar5 >> 0x20) * 4);
  while( true ) {
    if ((uVar3 == uVar7) && (uVar2 == *(uint *)(lVar4 + (uVar5 & 0xffffffff) * 4))) {
      return puVar1;
    }
    uVar6 = uVar6 + 1 + uVar10;
    uVar10 = uVar10 + 1;
    uVar6 = uVar6 & uVar8;
    if (uVar8 < uVar10) {
      return (ulonglong *)0x0;
    }
    puVar1 = param_1 + uVar6;
    uVar5 = *puVar1;
    if (uVar5 == 0xffffffffffffffff) break;
    uVar7 = *(uint *)(lVar4 + (uVar5 >> 0x20) * 4);
  }
  return puVar1;
}



/* unsigned int* meshopt::hashLookup<unsigned int, meshopt::VertexStreamHasher>(unsigned int*,
   unsigned long, meshopt::VertexStreamHasher const&, unsigned int const&, unsigned int const&)
   [clone .constprop.0] [clone .isra.0] */

uint * meshopt::hashLookup<unsigned_int,meshopt::VertexStreamHasher>
                 (uint *param_1,ulong param_2,VertexStreamHasher *param_3,uint *param_4,
                 uint *param_5)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong local_60;
  uint *local_58;
  uint local_50;
  
  uVar1 = param_2 - 1;
  lVar3 = *(long *)(param_3 + 8);
  plVar4 = *(long **)param_3;
  if (lVar3 == 0) {
    local_60 = 0;
  }
  else {
    uVar7 = 0;
    plVar8 = plVar4;
    do {
      piVar6 = (int *)(plVar8[2] * ((ulong)param_4 & 0xffffffff) + *plVar8);
      if (3 < (ulong)plVar8[1]) {
        piVar2 = (int *)((long)piVar6 + (plVar8[1] - 4U & 0xfffffffffffffffc) + 4);
        do {
          iVar5 = *piVar6;
          piVar6 = piVar6 + 1;
          uVar7 = uVar7 * 0x5bd1e995 ^
                  (iVar5 * 0x5bd1e995 ^ (uint)(iVar5 * 0x5bd1e995) >> 0x18) * 0x5bd1e995;
        } while (piVar2 != piVar6);
      }
      plVar8 = plVar8 + 3;
    } while (plVar8 != plVar4 + lVar3 * 3);
    local_50 = (uint)uVar1;
    local_60 = (ulong)(uVar7 & local_50);
  }
  local_58 = param_1 + local_60;
  uVar7 = *local_58;
  if ((uVar7 != 0xffffffff) && (lVar3 != 0)) {
    uVar9 = 0;
    do {
      lVar10 = 0;
      plVar8 = plVar4;
      while (iVar5 = memcmp((void *)(*plVar8 + plVar8[2] * (ulong)uVar7),
                            (void *)(plVar8[2] * ((ulong)param_4 & 0xffffffff) + *plVar8),plVar8[1])
            , iVar5 == 0) {
        lVar10 = lVar10 + 1;
        plVar8 = plVar8 + 3;
        if (lVar3 == lVar10) {
          return local_58;
        }
      }
      local_60 = local_60 + 1 + uVar9;
      uVar9 = uVar9 + 1;
      local_60 = local_60 & uVar1;
      if (uVar1 < uVar9) {
        return (uint *)0x0;
      }
      local_58 = param_1 + local_60;
      uVar7 = *local_58;
    } while (uVar7 != 0xffffffff);
  }
  return local_58;
}



/* meshopt::buildPositionRemap(unsigned int*, float const*, unsigned long, unsigned long,
   meshopt_Allocator&) */

void meshopt::buildPositionRemap
               (uint *param_1,float *param_2,ulong param_3,ulong param_4,meshopt_Allocator *param_5)

{
  long lVar1;
  ulong uVar2;
  uint *__s;
  uint *puVar3;
  ulong uVar4;
  uint uVar5;
  size_t __n;
  size_t sVar6;
  meshopt_Allocator *pmVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  float *local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0xc;
  uVar2 = (param_3 >> 2) + param_3;
  if (uVar2 < 2) {
    __n = 4;
    uVar8 = 1;
  }
  else {
    uVar8 = 1;
    do {
      uVar4 = uVar8;
      uVar8 = uVar4 * 2;
    } while (uVar8 < uVar2);
    __n = uVar4 * 8;
    sVar6 = 0xffffffffffffffff;
    if (uVar8 >> 0x3e != 0) goto LAB_001003c7;
  }
  sVar6 = __n;
LAB_001003c7:
  pmVar7 = param_5;
  local_58 = param_2;
  local_48 = param_4;
  __s = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar6);
  lVar1 = *(long *)(param_5 + 0xc0);
  *(long *)(param_5 + 0xc0) = lVar1 + 1;
  uVar2 = 0;
  *(uint **)(param_5 + lVar1 * 8) = __s;
  memset(__s,-1,__n);
  if (param_3 != 0) {
    do {
      puVar3 = hashLookup<unsigned_int,meshopt::VertexHasher>
                         (__s,uVar8,(VertexHasher *)&local_58,(uint *)(uVar2 & 0xffffffff),
                          (uint *)pmVar7);
      uVar5 = *puVar3;
      if (*puVar3 == 0xffffffff) {
        *puVar3 = (uint)uVar2;
        uVar5 = (uint)uVar2;
      }
      uVar4 = uVar2 & 0xffffffff;
      uVar2 = uVar2 + 1;
      param_1[uVar4] = uVar5;
    } while (param_3 != uVar2);
  }
  (*(code *)meshopt_Allocator::StorageT<void>::deallocate)(__s);
  *(long *)(param_5 + 0xc0) = *(long *)(param_5 + 0xc0) + -1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



uint meshopt_generateVertexRemap
               (void *param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5,
               undefined8 param_6)

{
  uint *puVar1;
  uint *__s;
  uint *puVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  size_t __n;
  undefined8 *puVar6;
  size_t sVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  uint local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_108 [24];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  puVar6 = local_108;
  for (lVar3 = 0x18; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  memset(param_1,-1,param_5 * 4);
  param_5 = (param_5 >> 2) + param_5;
  if (param_5 < 2) {
    __n = 4;
    uVar8 = 1;
  }
  else {
    uVar8 = 1;
    do {
      uVar5 = uVar8;
      uVar8 = uVar5 * 2;
    } while (uVar8 < param_5);
    __n = uVar5 * 8;
    sVar7 = 0xffffffffffffffff;
    if (uVar8 >> 0x3e != 0) goto LAB_0010055e;
  }
  sVar7 = __n;
LAB_0010055e:
  local_128 = param_4;
  local_120 = param_6;
  uStack_118 = param_6;
  __s = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar7);
  local_108[local_48] = __s;
  local_48 = local_48 + 1;
  memset(__s,-1,__n);
  if (param_3 == 0) {
    local_12c = 0;
    lVar3 = local_48;
  }
  else {
    local_12c = 0;
    uVar5 = 0;
    do {
      while( true ) {
        puVar4 = (uint *)(uVar5 & 0xffffffff);
        if (param_2 != 0) {
          puVar4 = (uint *)(ulong)*(uint *)(param_2 + uVar5 * 4);
        }
        puVar1 = (uint *)((long)param_1 + (long)puVar4 * 4);
        if (*puVar1 == 0xffffffff) break;
LAB_001005b0:
        uVar5 = uVar5 + 1;
        lVar3 = local_48;
        if (param_3 == uVar5) goto joined_r0x0010061d;
      }
      puVar2 = meshopt::hashLookup<unsigned_int,meshopt::VertexHasher>
                         (__s,uVar8,(VertexHasher *)&local_128,puVar4,puVar1);
      if (*puVar2 == 0xffffffff) {
        *puVar2 = (uint)puVar4;
        *puVar1 = local_12c;
        local_12c = local_12c + 1;
        goto LAB_001005b0;
      }
      uVar5 = uVar5 + 1;
      *puVar1 = *(uint *)((long)param_1 + (ulong)*puVar2 * 4);
      lVar3 = local_48;
    } while (param_3 != uVar5);
  }
joined_r0x0010061d:
  while (lVar3 != 0) {
    (*(code *)meshopt_Allocator::StorageT<void>::deallocate)(local_108[lVar3 + -1]);
    lVar3 = lVar3 + -1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_12c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int meshopt_generateVertexRemapMulti
              (void *param_1,long param_2,ulong param_3,ulong param_4,uint *param_5,
              undefined8 param_6)

{
  int *piVar1;
  uint *__s;
  uint *puVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  size_t __n;
  undefined8 *puVar6;
  size_t sVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  int local_11c;
  uint *local_118;
  undefined8 local_110;
  undefined8 local_108 [24];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  puVar6 = local_108;
  for (lVar3 = 0x18; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  memset(param_1,-1,param_4 * 4);
  param_4 = (param_4 >> 2) + param_4;
  if (param_4 < 2) {
    __n = 4;
    uVar8 = 1;
  }
  else {
    uVar8 = 1;
    do {
      uVar5 = uVar8;
      uVar8 = uVar5 * 2;
    } while (uVar8 < param_4);
    __n = uVar5 * 8;
    sVar7 = 0xffffffffffffffff;
    if (uVar8 >> 0x3e != 0) goto LAB_0010076e;
  }
  sVar7 = __n;
LAB_0010076e:
  local_118 = param_5;
  local_110 = param_6;
  __s = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar7);
  local_108[local_48] = __s;
  local_48 = local_48 + 1;
  memset(__s,-1,__n);
  if (param_3 == 0) {
    local_11c = 0;
    lVar3 = local_48;
  }
  else {
    local_11c = 0;
    uVar5 = 0;
    do {
      while( true ) {
        puVar4 = (uint *)(uVar5 & 0xffffffff);
        if (param_2 != 0) {
          puVar4 = (uint *)(ulong)*(uint *)(param_2 + uVar5 * 4);
        }
        piVar1 = (int *)((long)param_1 + (long)puVar4 * 4);
        if (*piVar1 == -1) break;
LAB_001007c0:
        uVar5 = uVar5 + 1;
        lVar3 = local_48;
        if (param_3 == uVar5) goto joined_r0x0010082c;
      }
      puVar2 = meshopt::hashLookup<unsigned_int,meshopt::VertexStreamHasher>
                         (__s,uVar8,(VertexStreamHasher *)&local_118,puVar4,param_5);
      if (*puVar2 == 0xffffffff) {
        *puVar2 = (uint)puVar4;
        *piVar1 = local_11c;
        local_11c = local_11c + 1;
        goto LAB_001007c0;
      }
      uVar5 = uVar5 + 1;
      *piVar1 = *(int *)((long)param_1 + (ulong)*puVar2 * 4);
      lVar3 = local_48;
    } while (param_3 != uVar5);
  }
joined_r0x0010082c:
  while (lVar3 != 0) {
    (*(code *)meshopt_Allocator::StorageT<void>::deallocate)(local_108[lVar3 + -1]);
    lVar3 = lVar3 + -1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_11c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void meshopt_remapVertexBuffer
               (undefined8 *param_1,undefined8 *param_2,long param_3,ulong param_4,uint *param_5)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  void **ppvVar7;
  long in_FS_OFFSET;
  void *local_108 [24];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  ppvVar7 = local_108;
  for (lVar6 = 0x18; lVar6 != 0; lVar6 = lVar6 + -1) {
    *ppvVar7 = (void *)0x0;
    ppvVar7 = ppvVar7 + 1;
  }
  if (param_1 == param_2) {
    bVar5 = true;
    local_108[0] = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(param_3 * param_4)
    ;
    local_48 = 1;
    param_2 = (undefined8 *)memcpy(local_108[0],param_1,param_3 * param_4);
    if (param_4 != 0xc) goto LAB_00100914;
    if (param_3 != 0) goto LAB_00100a0a;
LAB_00100961:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      (*(code *)meshopt_Allocator::StorageT<void>::deallocate)(local_108[0]);
      return;
    }
  }
  else {
    bVar5 = false;
    if (param_4 == 0xc) {
      if (param_3 != 0) {
LAB_00100a0a:
        puVar1 = param_5 + param_3;
        do {
          if (*param_5 != 0xffffffff) {
            puVar2 = (undefined8 *)((long)param_1 + (ulong)*param_5 * 0xc);
            *puVar2 = *param_2;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 1);
          }
          param_5 = param_5 + 1;
          param_2 = (undefined8 *)((long)param_2 + 0xc);
        } while (param_5 != puVar1);
        goto LAB_00100958;
      }
    }
    else {
LAB_00100914:
      if (param_4 < 0xd) {
        if (param_4 == 4) {
          lVar6 = 0;
          if (param_3 != 0) {
            do {
              if (param_5[lVar6] != 0xffffffff) {
                *(undefined4 *)((long)param_1 + (ulong)param_5[lVar6] * 4) =
                     *(undefined4 *)((long)param_2 + lVar6 * 4);
              }
              lVar6 = lVar6 + 1;
            } while (param_3 != lVar6);
          }
        }
        else {
          if (param_4 != 8) goto LAB_00100a7f;
          lVar6 = 0;
          if (param_3 != 0) {
            do {
              if (param_5[lVar6] != 0xffffffff) {
                param_1[param_5[lVar6]] = param_2[lVar6];
              }
              lVar6 = lVar6 + 1;
            } while (param_3 != lVar6);
          }
        }
      }
      else if (param_4 == 0x10) {
        puVar1 = param_5 + param_3;
        if (param_3 != 0) {
          do {
            uVar3 = *param_5;
            if (uVar3 != 0xffffffff) {
              uVar4 = param_2[1];
              param_1[(ulong)uVar3 * 2] = *param_2;
              (param_1 + (ulong)uVar3 * 2)[1] = uVar4;
            }
            param_5 = param_5 + 1;
            param_2 = param_2 + 2;
          } while (puVar1 != param_5);
        }
      }
      else {
LAB_00100a7f:
        if (param_3 != 0) {
          puVar1 = param_5 + param_3;
          do {
            if (*param_5 != 0xffffffff) {
              memcpy((undefined8 *)((long)param_1 + *param_5 * param_4),param_2,param_4);
            }
            param_5 = param_5 + 1;
            param_2 = (undefined8 *)((long)param_2 + param_4);
          } while (puVar1 != param_5);
        }
      }
LAB_00100958:
      if (bVar5) goto LAB_00100961;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void meshopt_remapIndexBuffer(long param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      uVar2 = uVar1 & 0xffffffff;
      if (param_2 != 0) {
        uVar2 = (ulong)*(uint *)(param_2 + uVar1 * 4);
      }
      *(undefined4 *)(param_1 + uVar1 * 4) = *(undefined4 *)(param_4 + uVar2 * 4);
      uVar1 = uVar1 + 1;
    } while (param_3 != uVar1);
  }
  return;
}



void meshopt_generateShadowIndexBuffer
               (uint *param_1,uint *param_2,long param_3,undefined8 param_4,ulong param_5,
               undefined8 param_6,undefined8 param_7)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  void *__s;
  uint *__s_00;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  size_t sVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  size_t sVar11;
  long in_FS_OFFSET;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_108 [24];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  puVar10 = local_108;
  for (lVar5 = 0x18; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  sVar7 = 0xffffffffffffffff;
  if (param_5 < 0x4000000000000000) {
    sVar7 = param_5 * 4;
  }
  __s = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar7);
  local_108[local_48] = __s;
  local_48 = local_48 + 1;
  memset(__s,-1,param_5 * 4);
  local_118 = param_7;
  param_5 = (param_5 >> 2) + param_5;
  if (param_5 < 2) {
    sVar7 = 4;
    uVar9 = 1;
  }
  else {
    uVar9 = 1;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 * 2;
    } while (uVar9 < param_5);
    sVar7 = uVar8 * 8;
    sVar11 = 0xffffffffffffffff;
    if (uVar9 >> 0x3e != 0) goto LAB_00100c4e;
  }
  sVar11 = sVar7;
LAB_00100c4e:
  local_128 = param_4;
  local_120 = param_6;
  __s_00 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar11);
  local_108[local_48] = __s_00;
  local_48 = local_48 + 1;
  memset(__s_00,-1,sVar7);
  lVar5 = local_48;
  if (param_3 != 0) {
    puVar2 = param_2 + param_3;
    do {
      uVar3 = *param_2;
      puVar1 = (uint *)((long)__s + (long)(ulong)uVar3 * 4);
      uVar6 = *puVar1;
      if (uVar6 == 0xffffffff) {
        puVar4 = meshopt::hashLookup<unsigned_int,meshopt::VertexHasher>
                           (__s_00,uVar9,(VertexHasher *)&local_128,(uint *)(ulong)uVar3,puVar1);
        uVar6 = *puVar4;
        if (*puVar4 == 0xffffffff) {
          *puVar4 = uVar3;
          uVar6 = uVar3;
        }
        *puVar1 = uVar6;
      }
      param_2 = param_2 + 1;
      *param_1 = uVar6;
      param_1 = param_1 + 1;
      lVar5 = local_48;
    } while (puVar2 != param_2);
  }
  while (lVar5 != 0) {
    (*(code *)meshopt_Allocator::StorageT<void>::deallocate)(local_108[lVar5 + -1]);
    lVar5 = lVar5 + -1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void meshopt_generateShadowIndexBufferMulti
               (uint *param_1,uint *param_2,long param_3,ulong param_4,undefined8 param_5,
               undefined8 param_6)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  void *__s;
  uint *__s_00;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  size_t sVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  size_t sVar11;
  long in_FS_OFFSET;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108 [24];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  puVar10 = local_108;
  for (lVar5 = 0x18; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  sVar7 = 0xffffffffffffffff;
  if (param_4 < 0x4000000000000000) {
    sVar7 = param_4 * 4;
  }
  __s = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar7);
  local_108[local_48] = __s;
  local_48 = local_48 + 1;
  memset(__s,-1,param_4 * 4);
  param_4 = (param_4 >> 2) + param_4;
  if (param_4 < 2) {
    sVar7 = 4;
    uVar9 = 1;
  }
  else {
    uVar9 = 1;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 * 2;
    } while (uVar9 < param_4);
    sVar7 = uVar8 << 3;
    sVar11 = 0xffffffffffffffff;
    if (uVar9 >> 0x3e != 0) goto LAB_00100e6a;
  }
  sVar11 = sVar7;
LAB_00100e6a:
  local_118 = param_5;
  local_110 = param_6;
  __s_00 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar11);
  local_108[local_48] = __s_00;
  local_48 = local_48 + 1;
  memset(__s_00,-1,sVar7);
  lVar5 = local_48;
  if (param_3 != 0) {
    puVar2 = param_2 + param_3;
    do {
      uVar3 = *param_2;
      puVar1 = (uint *)((long)__s + (long)(ulong)uVar3 * 4);
      uVar6 = *puVar1;
      if (uVar6 == 0xffffffff) {
        puVar4 = meshopt::hashLookup<unsigned_int,meshopt::VertexStreamHasher>
                           (__s_00,uVar9,(VertexStreamHasher *)&local_118,(uint *)(ulong)uVar3,
                            puVar1);
        uVar6 = *puVar4;
        if (*puVar4 == 0xffffffff) {
          *puVar4 = uVar3;
          uVar6 = uVar3;
        }
        *puVar1 = uVar6;
      }
      param_2 = param_2 + 1;
      *param_1 = uVar6;
      param_1 = param_1 + 1;
      lVar5 = local_48;
    } while (puVar2 != param_2);
  }
  while (lVar5 != 0) {
    (*(code *)meshopt_Allocator::StorageT<void>::deallocate)(local_108[lVar5 + -1]);
    lVar5 = lVar5 + -1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void meshopt_generateAdjacencyIndexBuffer
               (undefined8 *param_1,long param_2,ulong param_3,float *param_4,ulong param_5,
               ulong param_6)

{
  uint *puVar1;
  ulong uVar2;
  ulonglong *__s;
  void *__s_00;
  ulonglong *puVar3;
  long lVar4;
  size_t __n;
  ulonglong *puVar5;
  long lVar6;
  meshopt_Allocator *pmVar7;
  size_t sVar8;
  int *piVar9;
  size_t __n_00;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 uVar13;
  long in_FS_OFFSET;
  uint *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  meshopt_Allocator local_108 [192];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  pmVar7 = local_108;
  for (lVar4 = 0x18; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)pmVar7 = 0;
    pmVar7 = pmVar7 + 8;
  }
  lVar4 = param_5 * 4;
  if (0x3fffffffffffffff < param_5) {
    lVar4 = -1;
  }
  puVar1 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(lVar4);
  *(uint **)(local_108 + local_48 * 8) = puVar1;
  pmVar7 = local_108;
  local_48 = local_48 + 1;
  meshopt::buildPositionRemap(puVar1,param_4,param_5,param_6,local_108);
  uVar2 = (param_3 >> 2) + param_3;
  local_130 = puVar1;
  if (uVar2 < 2) {
    __n = 4;
    __n_00 = 8;
    uVar12 = 1;
  }
  else {
    uVar12 = 1;
    do {
      uVar11 = uVar12;
      uVar12 = uVar11 * 2;
    } while (uVar12 < uVar2);
    __n = uVar11 << 3;
    __n_00 = uVar11 << 4;
    if (uVar12 >> 0x3d != 0) {
      __s = (ulonglong *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(0xffffffffffffffff);
      lVar4 = local_48 + 1;
      *(ulonglong **)(local_108 + local_48 * 8) = __s;
      sVar8 = 0xffffffffffffffff;
      local_48 = lVar4;
      if (uVar12 < 0x4000000000000000) {
        sVar8 = __n;
      }
      goto LAB_001010ce;
    }
  }
  __s = (ulonglong *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(__n_00);
  *(ulonglong **)(local_108 + local_48 * 8) = __s;
  sVar8 = __n;
  local_48 = local_48 + 1;
LAB_001010ce:
  __s_00 = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar8);
  *(void **)(local_108 + local_48 * 8) = __s_00;
  local_48 = local_48 + 1;
  memset(__s,-1,__n_00);
  memset(__s_00,-1,__n);
  uVar2 = 0;
  lVar4 = local_48;
  if (param_3 != 0) {
    do {
      puVar10 = (undefined4 *)(param_2 + uVar2 * 4);
      piVar9 = &meshopt_generateAdjacencyIndexBuffer::next;
      do {
        puVar5 = (ulonglong *)
                 CONCAT44(*puVar10,*(undefined4 *)(param_2 + ((long)*piVar9 + uVar2) * 4));
        puVar3 = meshopt::hashLookup<unsigned_long_long,meshopt::EdgeHasher>
                           (__s,uVar12,(EdgeHasher *)&local_130,puVar5,(ulonglong *)pmVar7);
        if (*puVar3 == 0xffffffffffffffff) {
          uVar13 = *(undefined4 *)(param_2 + ((long)piVar9[1] + uVar2) * 4);
          *puVar3 = (ulonglong)puVar5;
          *(undefined4 *)((long)__s_00 + ((long)puVar3 - (long)__s >> 3) * 4) = uVar13;
        }
        piVar9 = piVar9 + 1;
        puVar10 = puVar10 + 1;
      } while (piVar9 != (int *)&DAT_001019fc);
      uVar2 = uVar2 + 3;
    } while (uVar2 < param_3);
    uVar2 = 0;
    lVar6 = param_2;
    do {
      lVar4 = 0;
      do {
        uVar13 = *(undefined4 *)(lVar6 + lVar4);
        puVar3 = meshopt::hashLookup<unsigned_long_long,meshopt::EdgeHasher>
                           (__s,uVar12,(EdgeHasher *)&local_130,
                            (ulonglong *)
                            CONCAT44(*(undefined4 *)
                                      (param_2 +
                                      ((long)*(int *)((long)&meshopt_generateAdjacencyIndexBuffer::
                                                             next + lVar4) + uVar2) * 4),uVar13),
                            (ulonglong *)pmVar7);
        *(undefined4 *)((long)&local_128 + lVar4 * 2) = uVar13;
        if (*puVar3 != 0xffffffffffffffff) {
          uVar13 = *(undefined4 *)((long)__s_00 + ((long)puVar3 - (long)__s >> 3) * 4);
        }
        *(undefined4 *)((long)&local_128 + lVar4 * 2 + 4) = uVar13;
        lVar4 = lVar4 + 4;
      } while (lVar4 != 0xc);
      uVar2 = uVar2 + 3;
      lVar6 = lVar6 + 0xc;
      *param_1 = local_128;
      param_1[1] = uStack_120;
      param_1[2] = local_118;
      param_1 = param_1 + 3;
      lVar4 = local_48;
    } while (uVar2 < param_3);
  }
  while (lVar4 != 0) {
    (*(code *)meshopt_Allocator::StorageT<void>::deallocate)
              (*(undefined8 *)(local_108 + (lVar4 + -1) * 8));
    lVar4 = lVar4 + -1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void meshopt_generateTessellationIndexBuffer
               (undefined8 *param_1,long param_2,ulong param_3,float *param_4,ulong param_5,
               ulong param_6)

{
  uint uVar1;
  uint *puVar2;
  ulong uVar3;
  void *__s;
  ulonglong *puVar4;
  ulonglong *puVar5;
  long lVar6;
  size_t __n;
  undefined4 *puVar7;
  meshopt_Allocator *pmVar8;
  size_t sVar9;
  ulonglong *puVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long in_FS_OFFSET;
  long local_190;
  uint *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  meshopt_Allocator local_108 [192];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  pmVar8 = local_108;
  for (lVar6 = 0x18; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined8 *)pmVar8 = 0;
    pmVar8 = pmVar8 + 8;
  }
  lVar6 = param_5 * 4;
  if (0x3fffffffffffffff < param_5) {
    lVar6 = -1;
  }
  puVar2 = (uint *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(lVar6);
  *(uint **)(local_108 + local_48 * 8) = puVar2;
  pmVar8 = local_108;
  local_48 = local_48 + 1;
  meshopt::buildPositionRemap(puVar2,param_4,param_5,param_6,local_108);
  uVar3 = (param_3 >> 2) + param_3;
  if (uVar3 < 2) {
    __n = 8;
    uVar12 = 1;
  }
  else {
    uVar12 = 1;
    do {
      uVar11 = uVar12;
      uVar12 = uVar11 * 2;
    } while (uVar12 < uVar3);
    __n = uVar11 << 4;
    sVar9 = 0xffffffffffffffff;
    if (uVar12 >> 0x3d != 0) goto LAB_0010142a;
  }
  sVar9 = __n;
LAB_0010142a:
  local_140 = puVar2;
  __s = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar9);
  uVar3 = 0;
  *(void **)(local_108 + local_48 * 8) = __s;
  local_48 = local_48 + 1;
  puVar4 = (ulonglong *)memset(__s,-1,__n);
  lVar6 = local_48;
  if (param_3 != 0) {
    do {
      puVar7 = (undefined4 *)(param_2 + uVar3 * 4);
      piVar13 = &meshopt_generateTessellationIndexBuffer::next;
      do {
        puVar10 = (ulonglong *)
                  CONCAT44(*puVar7,*(undefined4 *)(param_2 + ((long)*piVar13 + uVar3) * 4));
        puVar5 = meshopt::hashLookup<unsigned_long_long,meshopt::EdgeHasher>
                           (puVar4,uVar12,(EdgeHasher *)&local_140,puVar10,(ulonglong *)pmVar8);
        if (*puVar5 == 0xffffffffffffffff) {
          *puVar5 = (ulonglong)puVar10;
        }
        piVar13 = piVar13 + 1;
        puVar7 = puVar7 + 1;
      } while (piVar13 != (int *)&DAT_001019ec);
      uVar3 = uVar3 + 3;
    } while (uVar3 < param_3);
    uVar3 = 0;
    local_190 = param_2;
    do {
      lVar6 = 0;
      do {
        uVar1 = *(uint *)(local_190 + lVar6);
        puVar10 = (ulonglong *)
                  CONCAT44(*(undefined4 *)
                            (param_2 +
                            ((long)*(int *)((long)&meshopt_generateTessellationIndexBuffer::next +
                                           lVar6) + uVar3) * 4),uVar1);
        puVar5 = meshopt::hashLookup<unsigned_long_long,meshopt::EdgeHasher>
                           (puVar4,uVar12,(EdgeHasher *)&local_140,puVar10,(ulonglong *)pmVar8);
        puVar5 = (ulonglong *)*puVar5;
        *(uint *)((long)&local_138 + lVar6) = uVar1;
        if (puVar5 != (ulonglong *)0xffffffffffffffff) {
          puVar10 = puVar5;
        }
        *(int *)((long)&uStack_130 + lVar6 * 2 + 4) = (int)puVar10;
        *(int *)((long)&local_128 + lVar6 * 2) = (int)((ulong)puVar10 >> 0x20);
        *(uint *)((long)&local_118 + lVar6 + 4) = puVar2[uVar1];
        lVar6 = lVar6 + 4;
      } while (lVar6 != 0xc);
      uVar3 = uVar3 + 3;
      local_190 = local_190 + 0xc;
      *param_1 = local_138;
      param_1[1] = uStack_130;
      param_1[2] = local_128;
      param_1[3] = uStack_120;
      param_1[4] = local_118;
      param_1[5] = uStack_110;
      param_1 = param_1 + 6;
      lVar6 = local_48;
    } while (uVar3 < param_3);
  }
  while (lVar6 != 0) {
    (*(code *)meshopt_Allocator::StorageT<void>::deallocate)
              (*(undefined8 *)(local_108 + (lVar6 + -1) * 8));
    lVar6 = lVar6 + -1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



uint meshopt_generateProvokingIndexBuffer
               (long param_1,long param_2,uint *param_3,ulong param_4,ulong param_5)

{
  byte *pbVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  void *__s;
  void *pvVar10;
  uint *puVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint uVar22;
  undefined8 *puVar23;
  size_t sVar24;
  uint uVar25;
  uint uVar26;
  int *piVar27;
  int iVar28;
  long in_FS_OFFSET;
  byte *local_140;
  uint local_134;
  undefined8 local_108 [24];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  puVar23 = local_108;
  for (lVar12 = 0x18; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar23 = 0;
    puVar23 = puVar23 + 1;
  }
  sVar24 = 0xffffffffffffffff;
  if (param_5 < 0x4000000000000000) {
    sVar24 = param_5 * 4;
  }
  __s = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar24);
  local_108[local_48] = __s;
  local_48 = local_48 + 1;
  memset(__s,-1,param_5 * 4);
  pvVar10 = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(param_5);
  local_108[local_48] = pvVar10;
  local_48 = local_48 + 1;
  pvVar10 = memset(pvVar10,0,param_5);
  lVar12 = local_48;
  if (param_4 != 0) {
    puVar11 = param_3;
    do {
      uVar19 = *puVar11;
      puVar11 = puVar11 + 1;
      *(char *)((long)pvVar10 + (ulong)uVar19) = *(char *)((long)pvVar10 + (ulong)uVar19) + '\x01';
    } while (puVar11 != param_3 + param_4);
    uVar17 = 0;
    uVar15 = 0;
    do {
      uVar19 = param_3[uVar17];
      local_134 = 0xffffffff;
      uVar25 = param_3[uVar17 + 1];
      uVar26 = param_3[uVar17 + 2];
      piVar3 = (int *)((long)__s + (ulong)uVar19 * 4);
      pbVar13 = (byte *)((ulong)uVar19 + (long)pvVar10);
      iVar6 = *piVar3;
      if (iVar6 == -1) {
        local_134 = (uint)*pbVar13;
      }
      piVar4 = (int *)((long)__s + (ulong)uVar25 * 4);
      pbVar1 = (byte *)((long)pvVar10 + (ulong)uVar26);
      pbVar20 = (byte *)((ulong)uVar25 + (long)pvVar10);
      piVar27 = (int *)((long)__s + (ulong)uVar26 * 4);
      iVar28 = (int)uVar15;
      pbVar14 = pbVar13;
      pbVar21 = pbVar20;
      uVar9 = uVar25;
      uVar7 = uVar26;
      uVar8 = uVar19;
      local_140 = pbVar1;
      if (*piVar4 == -1) {
        bVar5 = *pbVar20;
        if (*piVar27 == -1) {
          uVar18 = (uint)*pbVar1;
          uVar22 = (uint)bVar5;
          if (local_134 < uVar22) {
            if (local_134 <= uVar22) {
              uVar22 = local_134;
            }
            goto LAB_001018a8;
          }
          if (bVar5 <= uVar18) goto LAB_00101856;
        }
        else {
          if (local_134 < bVar5) goto LAB_00101799;
LAB_00101856:
          pbVar14 = pbVar1;
          pbVar21 = pbVar13;
          piVar27 = piVar4;
          uVar9 = uVar19;
          uVar7 = uVar25;
          uVar8 = uVar26;
          local_140 = pbVar20;
        }
LAB_00101877:
        uVar25 = uVar8;
        uVar19 = uVar7;
        uVar26 = uVar9;
        *piVar27 = iVar28;
        pbVar13 = local_140;
        pbVar20 = pbVar14;
        pbVar1 = pbVar21;
      }
      else {
        if (*piVar27 == -1) {
          uVar18 = (uint)*pbVar1;
          uVar22 = local_134;
LAB_001018a8:
          local_134 = uVar22;
          if (uVar18 <= local_134) goto LAB_00101877;
        }
LAB_00101799:
        pbVar14 = pbVar20;
        pbVar21 = pbVar1;
        piVar27 = piVar3;
        uVar9 = uVar26;
        uVar7 = uVar19;
        uVar8 = uVar25;
        local_140 = pbVar13;
        if (iVar6 == -1) goto LAB_00101877;
      }
      local_140 = pbVar1;
      uVar9 = iVar28 + 1;
      *(uint *)(param_2 + uVar15 * 4) = uVar19;
      *(int *)(param_1 + uVar17 * 4) = iVar28;
      *(uint *)(param_1 + 4 + uVar17 * 4) = uVar25;
      *(uint *)(param_1 + 8 + uVar17 * 4) = uVar26;
      uVar17 = uVar17 + 3;
      *pbVar13 = *pbVar13 - 1;
      *pbVar20 = *pbVar20 - 1;
      *local_140 = *local_140 - 1;
      if (param_4 <= uVar17) goto LAB_001018d8;
      uVar15 = (ulong)uVar9;
    } while( true );
  }
  uVar9 = 0;
joined_r0x00101942:
  while (lVar12 != 0) {
    (*(code *)meshopt_Allocator::StorageT<void>::deallocate)(local_108[lVar12 + -1]);
    lVar12 = lVar12 + -1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001018d8:
  if (param_4 != 1) {
    uVar17 = 1;
    uVar19 = 1;
    do {
      puVar11 = (uint *)(param_1 + uVar17 * 4);
      uVar25 = *puVar11;
      puVar2 = (uint *)((long)__s + (ulong)uVar25 * 4);
      uVar26 = *puVar2;
      if (uVar26 == 0xffffffff) {
        uVar15 = (ulong)uVar9;
        *puVar2 = uVar9;
        uVar9 = uVar9 + 1;
        *(uint *)(param_2 + uVar15 * 4) = uVar25;
        uVar26 = *puVar2;
      }
      *puVar11 = uVar26;
      lVar16 = (long)(int)uVar19;
      uVar19 = uVar19 ^ 3;
      uVar17 = uVar17 + lVar16;
    } while (uVar17 < param_4);
  }
  goto joined_r0x00101942;
}



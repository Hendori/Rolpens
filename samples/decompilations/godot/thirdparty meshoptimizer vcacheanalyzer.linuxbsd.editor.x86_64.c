
ulong meshopt_analyzeVertexCache
                (long param_1,ulong param_2,ulong param_3,uint param_4,uint param_5,int param_6)

{
  uint *puVar1;
  size_t __n;
  int iVar2;
  void *pvVar3;
  long lVar4;
  uint *puVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  void **ppvVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  long in_FS_OFFSET;
  int local_120;
  void *local_108 [24];
  undefined8 local_48;
  long local_40;
  
  __n = param_3 * 4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ppvVar9 = local_108;
  for (lVar4 = 0x18; lVar4 != 0; lVar4 = lVar4 + -1) {
    *ppvVar9 = (void *)0x0;
    ppvVar9 = ppvVar9 + 1;
  }
  if (param_3 >> 0x3e == 0) {
    local_108[0] = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(__n);
    local_48 = 1;
    pvVar3 = memset(local_108[0],0,__n);
    if (param_2 == 0) {
      uVar13 = 0;
      uVar12 = 0;
      if (param_3 == 0) {
        uVar12 = 0;
        goto LAB_001001a2;
      }
    }
    else {
LAB_001000a3:
      local_120 = param_4 + 1;
      puVar5 = (uint *)(param_1 + 0xc);
      iVar14 = 0;
      uVar12 = 0;
      uVar13 = 0;
      iVar8 = 0;
      iVar11 = 0;
      iVar6 = local_120;
      do {
        iVar2 = *(int *)((long)pvVar3 + (ulong)puVar5[-3] * 4);
        if (((param_6 == iVar8) && (param_6 != 0)) ||
           ((param_5 != 0 &&
            (param_5 < (uint)(param_4 <
                             (uint)(iVar6 - *(int *)((long)pvVar3 + (ulong)puVar5[-2] * 4))) +
                       iVar11 + (uint)(param_4 < (uint)(iVar6 - iVar2)) +
                       (uint)(param_4 <
                             (uint)(iVar6 - *(int *)((long)pvVar3 + (ulong)puVar5[-1] * 4))))))) {
          iVar8 = 1;
          iVar14 = (iVar14 + 1) - (uint)(iVar11 == 0);
          iVar11 = 0;
          iVar6 = iVar6 + local_120;
        }
        else {
          iVar8 = iVar8 + 1;
        }
        puVar1 = puVar5 + -3;
        uVar10 = iVar6 - iVar2;
        while( true ) {
          if (param_4 < uVar10) {
            uVar12 = (ulong)((int)uVar12 + 1);
            iVar11 = iVar11 + 1;
            *(int *)((long)pvVar3 + (ulong)*puVar1 * 4) = iVar6;
            iVar6 = iVar6 + 1;
          }
          puVar1 = puVar1 + 1;
          if (puVar5 == puVar1) break;
          uVar10 = iVar6 - *(int *)((long)pvVar3 + (ulong)*puVar1 * 4);
        }
        uVar13 = uVar13 + 3;
        puVar5 = puVar5 + 3;
      } while (uVar13 < param_2);
      uVar13 = (ulong)((iVar14 + 1) - (uint)(iVar11 == 0));
      if (param_3 == 0) goto LAB_001001a2;
    }
  }
  else {
    uVar13 = 0;
    local_108[0] = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)
                                     (0xffffffffffffffff);
    local_48 = 1;
    pvVar3 = memset(local_108[0],0,__n);
    uVar12 = 0;
    if (param_2 != 0) goto LAB_001000a3;
  }
  pvVar7 = (void *)((long)pvVar3 + param_3 * 4);
  do {
    pvVar3 = (void *)((long)pvVar3 + 4);
  } while (pvVar7 != pvVar3);
LAB_001001a2:
  (*(code *)meshopt_Allocator::StorageT<void>::deallocate)();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13 << 0x20 | uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



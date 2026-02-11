
int meshopt_optimizeVertexFetchRemap(void *param_1,uint *param_2,long param_3,long param_4)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  
  pvVar4 = memset(param_1,-1,param_4 * 4);
  if (param_3 != 0) {
    puVar1 = param_2 + param_3;
    iVar3 = 0;
    do {
      piVar2 = (int *)((long)pvVar4 + (ulong)*param_2 * 4);
      if (*piVar2 == -1) {
        *piVar2 = iVar3;
        iVar3 = iVar3 + 1;
      }
      param_2 = param_2 + 1;
    } while (puVar1 != param_2);
    return iVar3;
  }
  return 0;
}



uint meshopt_optimizeVertexFetch
               (void *param_1,uint *param_2,long param_3,void *param_4,ulong param_5,size_t param_6)

{
  uint *puVar1;
  uint uVar2;
  void *__s;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  size_t sVar7;
  uint uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
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
  if (param_1 == param_4) {
    param_4 = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(param_5 * param_6);
    local_108[local_48] = param_4;
    local_48 = local_48 + 1;
    memcpy(param_4,param_1,param_5 * param_6);
  }
  sVar7 = 0xffffffffffffffff;
  if (param_5 < 0x4000000000000000) {
    sVar7 = param_5 * 4;
  }
  __s = (void *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(sVar7);
  local_108[local_48] = __s;
  local_48 = local_48 + 1;
  memset(__s,-1,param_5 * 4);
  if (param_3 == 0) {
    lVar3 = local_48;
    uVar8 = 0;
  }
  else {
    uVar9 = 0;
    puVar4 = param_2;
    do {
      while( true ) {
        uVar8 = (uint)uVar9;
        puVar1 = (uint *)((long)__s + (ulong)*puVar4 * 4);
        uVar2 = *puVar1;
        if (uVar2 != 0xffffffff) break;
        puVar5 = puVar4 + 1;
        memcpy((void *)(uVar9 * param_6 + (long)param_1),(void *)(*puVar4 * param_6 + (long)param_4)
               ,param_6);
        *puVar1 = uVar8;
        uVar9 = (ulong)(uVar8 + 1);
        *puVar4 = uVar8;
        puVar4 = puVar5;
        lVar3 = local_48;
        uVar8 = uVar8 + 1;
        if (param_2 + param_3 == puVar5) goto joined_r0x001001af;
      }
      *puVar4 = uVar2;
      puVar4 = puVar4 + 1;
      lVar3 = local_48;
    } while (param_2 + param_3 != puVar4);
  }
joined_r0x001001af:
  while (lVar3 != 0) {
    (*(code *)meshopt_Allocator::StorageT<void>::deallocate)(local_108[lVar3 + -1]);
    lVar3 = lVar3 + -1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



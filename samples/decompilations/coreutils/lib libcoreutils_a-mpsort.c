
/* WARNING: Unknown calling convention */

void mpsort_with_tmp(void **base,size_t n,void **tmp,comparison_function cmp)

{
  void **base_00;
  void *pvVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  void **ppvVar12;
  void **__dest;
  void *local_78;
  ulong local_48;
  
  uVar3 = n >> 1;
  sVar5 = n - uVar3;
  base_00 = base + uVar3;
  if (sVar5 < 3) {
    if (sVar5 == 2) {
      pvVar4 = *base_00;
      pvVar1 = base_00[1];
      iVar2 = (*cmp)(pvVar4,pvVar1);
      if (0 < iVar2) {
        *base_00 = pvVar1;
        base_00[1] = pvVar4;
      }
    }
  }
  else {
    mpsort_with_tmp(base_00,sVar5,tmp,cmp);
  }
  if (n == 3) {
    local_78 = *base;
    *tmp = local_78;
    goto LAB_00100060;
  }
  uVar6 = n >> 2;
  sVar5 = uVar3 - uVar6;
  ppvVar12 = base + uVar6;
  if (sVar5 < 3) {
    if (sVar5 == 2) {
      pvVar4 = *ppvVar12;
      pvVar1 = ppvVar12[1];
      iVar2 = (*cmp)(pvVar4,pvVar1);
      if (0 < iVar2) {
        *ppvVar12 = pvVar1;
        ppvVar12[1] = pvVar4;
      }
    }
  }
  else {
    mpsort_with_tmp(ppvVar12,sVar5,tmp,cmp);
  }
  if (uVar6 < 3) {
    pvVar4 = *base;
    local_78 = pvVar4;
    if (uVar6 == 2) {
      local_78 = base[1];
      iVar2 = (*cmp)(pvVar4,local_78);
      if (iVar2 < 1) goto LAB_00100259;
      *base = local_78;
      base[1] = pvVar4;
    }
  }
  else {
    mpsort_with_tmp(base,uVar6,tmp,cmp);
LAB_00100259:
    local_78 = *base;
  }
  pvVar4 = *ppvVar12;
  uVar8 = 0;
  uVar7 = uVar6;
  ppvVar12 = tmp;
  while( true ) {
    while( true ) {
      __dest = ppvVar12 + 1;
      iVar2 = (*cmp)(local_78,pvVar4);
      if (0 < iVar2) break;
      uVar8 = uVar8 + 1;
      *ppvVar12 = local_78;
      uVar9 = uVar7;
      local_48 = uVar3;
      if (uVar6 == uVar8) goto LAB_001001ed;
      local_78 = base[uVar8];
      ppvVar12 = __dest;
    }
    *ppvVar12 = pvVar4;
    uVar7 = uVar7 + 1;
    uVar9 = uVar8;
    local_48 = uVar6;
    if (uVar3 == uVar7) break;
    pvVar4 = base[uVar7];
    ppvVar12 = __dest;
  }
LAB_001001ed:
  memcpy(__dest,base + uVar9,(local_48 - uVar9) * 8);
  local_78 = *tmp;
LAB_00100060:
  uVar7 = 0;
  pvVar4 = *base_00;
  uVar6 = uVar3;
  lVar10 = 0;
  while( true ) {
    while( true ) {
      lVar11 = lVar10 + 1;
      iVar2 = (*cmp)(local_78,pvVar4);
      if (0 < iVar2) break;
      uVar7 = uVar7 + 1;
      base[lVar10] = local_78;
      if (uVar3 == uVar7) {
        return;
      }
      local_78 = tmp[uVar7];
      lVar10 = lVar11;
    }
    base[lVar10] = pvVar4;
    uVar6 = uVar6 + 1;
    if (n == uVar6) break;
    pvVar4 = base[uVar6];
    lVar10 = lVar11;
  }
  memcpy(base + lVar11,tmp + uVar7,(uVar3 - uVar7) * 8);
  return;
}



/* WARNING: Unknown calling convention */

void mpsort(void **base,size_t n,comparison_function cmp)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  
  if (2 < n) {
    mpsort_with_tmp(base,n,base + n,cmp);
    return;
  }
  if (n == 2) {
    pvVar1 = *base;
    pvVar2 = base[1];
    iVar3 = (*cmp)(pvVar1,pvVar2);
    if (0 < iVar3) {
      *base = pvVar2;
      base[1] = pvVar1;
      return;
    }
  }
  return;
}



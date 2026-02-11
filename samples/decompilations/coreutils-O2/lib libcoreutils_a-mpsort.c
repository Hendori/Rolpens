
void mpsort_with_tmp_part_0(undefined8 *param_1,ulong param_2,undefined8 *param_3,code *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *__dest;
  undefined8 local_78;
  ulong local_48;
  
  uVar4 = param_2 >> 1;
  uVar6 = param_2 - uVar4;
  puVar1 = param_1 + uVar4;
  if (uVar6 < 3) {
    if (uVar6 == 2) {
      uVar5 = *puVar1;
      uVar2 = puVar1[1];
      iVar3 = (*param_4)(uVar5,uVar2);
      if (0 < iVar3) {
        *puVar1 = uVar2;
        puVar1[1] = uVar5;
      }
    }
  }
  else {
    mpsort_with_tmp_part_0(puVar1,uVar6,param_3);
  }
  if (param_2 == 3) {
    local_78 = *param_1;
    *param_3 = local_78;
    goto LAB_00100060;
  }
  uVar6 = param_2 >> 2;
  uVar7 = uVar4 - uVar6;
  puVar12 = param_1 + uVar6;
  if (uVar7 < 3) {
    if (uVar7 == 2) {
      uVar5 = *puVar12;
      uVar2 = puVar12[1];
      iVar3 = (*param_4)(uVar5,uVar2);
      if (0 < iVar3) {
        *puVar12 = uVar2;
        puVar12[1] = uVar5;
      }
    }
  }
  else {
    mpsort_with_tmp_part_0(puVar12,uVar7,param_3,param_4);
  }
  if (uVar6 < 3) {
    uVar5 = *param_1;
    local_78 = uVar5;
    if (uVar6 == 2) {
      local_78 = param_1[1];
      iVar3 = (*param_4)(uVar5,local_78);
      if (iVar3 < 1) goto LAB_00100259;
      *param_1 = local_78;
      param_1[1] = uVar5;
    }
  }
  else {
    mpsort_with_tmp_part_0(param_1,uVar6,param_3,param_4);
LAB_00100259:
    local_78 = *param_1;
  }
  uVar5 = *puVar12;
  uVar8 = 0;
  uVar7 = uVar6;
  puVar12 = param_3;
  while( true ) {
    while( true ) {
      __dest = puVar12 + 1;
      iVar3 = (*param_4)(local_78,uVar5);
      if (0 < iVar3) break;
      uVar8 = uVar8 + 1;
      *puVar12 = local_78;
      uVar9 = uVar7;
      local_48 = uVar4;
      if (uVar6 == uVar8) goto LAB_001001ed;
      local_78 = param_1[uVar8];
      puVar12 = __dest;
    }
    *puVar12 = uVar5;
    uVar7 = uVar7 + 1;
    uVar9 = uVar8;
    local_48 = uVar6;
    if (uVar4 == uVar7) break;
    uVar5 = param_1[uVar7];
    puVar12 = __dest;
  }
LAB_001001ed:
  memcpy(__dest,param_1 + uVar9,(local_48 - uVar9) * 8);
  local_78 = *param_3;
LAB_00100060:
  uVar7 = 0;
  uVar5 = *puVar1;
  uVar6 = uVar4;
  lVar10 = 0;
  while( true ) {
    while( true ) {
      lVar11 = lVar10 + 1;
      iVar3 = (*param_4)(local_78,uVar5);
      if (0 < iVar3) break;
      uVar7 = uVar7 + 1;
      param_1[lVar10] = local_78;
      if (uVar4 == uVar7) {
        return;
      }
      local_78 = param_3[uVar7];
      lVar10 = lVar11;
    }
    param_1[lVar10] = uVar5;
    uVar6 = uVar6 + 1;
    if (param_2 == uVar6) break;
    uVar5 = param_1[uVar6];
    lVar10 = lVar11;
  }
  memcpy(param_1 + lVar11,param_3 + uVar7,(uVar4 - uVar7) * 8);
  return;
}



void mpsort(undefined8 *param_1,ulong param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (2 < param_2) {
    mpsort_with_tmp_part_0(param_1,param_2,param_1 + param_2,param_3);
    return;
  }
  if (param_2 == 2) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    iVar3 = (*param_3)(uVar1,uVar2);
    if (0 < iVar3) {
      *param_1 = uVar2;
      param_1[1] = uVar1;
      return;
    }
  }
  return;
}



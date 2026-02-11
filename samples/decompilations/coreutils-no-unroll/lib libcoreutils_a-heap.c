
undefined8 heap_default_compare(void)

{
  return 0;
}



undefined8 * heap_alloc(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)xmalloc(0x20);
  if (param_2 == 0) {
    param_2 = 1;
  }
  puVar2 = (undefined8 *)xnmalloc(param_2,8);
  puVar1[1] = param_2;
  *puVar1 = puVar2;
  *puVar2 = 0;
  if (param_1 == 0) {
    param_1 = 0x100000;
  }
  puVar1[2] = 0;
  puVar1[3] = param_1;
  return puVar1;
}



void heap_free(undefined8 *param_1)

{
  free((void *)*param_1);
  free(param_1);
  return;
}



undefined8 heap_insert(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = param_1[2];
  lVar6 = *param_1;
  if (param_1[1] + -1 <= lVar7) {
    lVar6 = xpalloc(lVar6,param_1 + 1,1,0xffffffffffffffff,8);
    lVar7 = param_1[2];
    *param_1 = lVar6;
  }
  lVar7 = lVar7 + 1;
  param_1[2] = lVar7;
  *(undefined8 *)(lVar6 + lVar7 * 8) = param_2;
  lVar6 = *param_1;
  pcVar2 = (code *)param_1[3];
  uVar3 = *(undefined8 *)(lVar6 + lVar7 * 8);
  while (lVar7 != 1) {
    puVar1 = (undefined8 *)(lVar6 + (lVar7 >> 1) * 8);
    iVar4 = (*pcVar2)(*puVar1,uVar3);
    lVar5 = lVar7 * 8;
    if (0 < iVar4) goto LAB_00100123;
    *(undefined8 *)(lVar6 + lVar5) = *puVar1;
    lVar7 = lVar7 >> 1;
  }
  lVar5 = 8;
LAB_00100123:
  *(undefined8 *)(lVar6 + lVar5) = uVar3;
  return 0;
}



undefined8 heap_remove_top(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 local_40;
  
  lVar3 = param_1[2];
  local_40 = 0;
  if (lVar3 != 0) {
    lVar8 = *param_1;
    lVar1 = lVar3 + -1;
    local_40 = *(undefined8 *)(lVar8 + 8);
    uVar4 = *(undefined8 *)(lVar8 + lVar3 * 8);
    param_1[2] = lVar1;
    *(undefined8 *)(lVar8 + 8) = uVar4;
    pcVar5 = (code *)param_1[3];
    lVar3 = *param_1;
    uVar4 = *(undefined8 *)(lVar3 + 8);
    if (lVar1 >> 1 < 1) {
      puVar7 = (undefined8 *)(lVar3 + 8);
    }
    else {
      lVar8 = 1;
      do {
        lVar9 = lVar8 * 2;
        puVar2 = (undefined8 *)(lVar3 + lVar8 * 0x10);
        puVar10 = puVar2;
        if (lVar1 != lVar9 && SBORROW8(lVar1,lVar9) == lVar1 + lVar8 * -2 < 0) {
          puVar7 = (undefined8 *)(lVar3 + (lVar9 + 1) * 8);
          iVar6 = (*pcVar5)(*puVar2,*puVar7);
          if (iVar6 < 0) {
            lVar9 = lVar9 + 1;
            puVar10 = puVar7;
          }
        }
        iVar6 = (*pcVar5)(*puVar10,uVar4);
        puVar7 = puVar2 + -lVar8;
      } while ((0 < iVar6) &&
              (puVar2[-lVar8] = *puVar10, puVar7 = puVar10, lVar8 = lVar9, lVar9 <= lVar1 >> 1));
    }
    *puVar7 = uVar4;
  }
  return local_40;
}



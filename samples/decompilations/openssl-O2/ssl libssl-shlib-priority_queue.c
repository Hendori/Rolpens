
undefined8 ossl_pqueue_peek(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1[3] != 0) {
    uVar1 = *(undefined8 *)*param_1;
  }
  return uVar1;
}



undefined8 ossl_pqueue_pop(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 local_48;
  
  if ((param_1 == (long *)0x0) || (param_1[3] == 0)) {
    local_48 = 0;
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    uVar10 = param_1[3] - 1;
    local_48 = *puVar2;
    lVar3 = puVar2[1];
    param_1[3] = uVar10;
    if (uVar10 != 0) {
      lVar4 = param_1[1];
      uVar15 = 1;
      uVar6 = (puVar2 + uVar10 * 2)[1];
      *puVar2 = puVar2[uVar10 * 2];
      puVar2[1] = uVar6;
      *(undefined8 *)(lVar4 + puVar2[1] * 8) = 0;
      if (2 < uVar10) {
        iVar9 = (*(code *)param_1[2])(puVar2[2],puVar2[4]);
        uVar10 = param_1[3];
        if (0 < iVar9) {
          uVar15 = 2;
        }
      }
      uVar14 = 0;
      if (uVar15 < uVar10) {
        do {
          iVar9 = (*(code *)param_1[2])(puVar2[uVar15 * 2],puVar2[uVar14 * 2]);
          if (-1 < iVar9) break;
          lVar4 = param_1[1];
          puVar1 = (undefined8 *)(*param_1 + uVar14 * 0x10);
          puVar12 = (undefined8 *)(*param_1 + uVar15 * 0x10);
          lVar5 = puVar1[1];
          uVar8 = puVar12[1];
          uVar6 = *puVar1;
          *puVar1 = *puVar12;
          puVar1[1] = uVar8;
          puVar12[1] = lVar5;
          lVar7 = puVar1[1];
          *puVar12 = uVar6;
          *(ulong *)(lVar4 + lVar7 * 8) = uVar14;
          uVar11 = param_1[3];
          uVar10 = uVar15 * 2 + 2;
          uVar13 = uVar15 * 2 + 1;
          *(ulong *)(lVar4 + lVar5 * 8) = uVar15;
          if (uVar10 < uVar11) {
            iVar9 = (*(code *)param_1[2])(puVar2[uVar13 * 2],puVar2[uVar15 * 4 + 4]);
            uVar11 = param_1[3];
            if (0 < iVar9) {
              uVar13 = uVar10;
            }
          }
          uVar14 = uVar15;
          uVar15 = uVar13;
        } while (uVar13 < uVar11);
      }
    }
    *(long *)(param_1[1] + lVar3 * 8) = param_1[5];
    param_1[5] = lVar3;
  }
  return local_48;
}



undefined8 ossl_pqueue_remove(long *param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  
  if (((param_1 == (long *)0x0) || ((ulong)param_1[4] <= param_2)) || (param_1[3] == 0)) {
    return 0;
  }
  lVar10 = param_1[1];
  uVar5 = param_1[3] - 1;
  puVar1 = (ulong *)(lVar10 + param_2 * 8);
  uVar9 = *puVar1;
  if (uVar5 == uVar9) {
    *puVar1 = param_1[5];
    param_1[3] = uVar5;
    param_1[5] = param_2;
    return *(undefined8 *)(uVar5 * 0x10 + *param_1);
  }
  if (uVar9 == 0) {
    uVar6 = ossl_pqueue_pop();
    return uVar6;
  }
  while( true ) {
    uVar5 = uVar9 - 1 >> 1;
    puVar7 = (undefined8 *)(uVar9 * 0x10 + *param_1);
    lVar2 = puVar7[1];
    uVar6 = *puVar7;
    puVar8 = (undefined8 *)(*param_1 + uVar5 * 0x10);
    uVar4 = puVar8[1];
    *puVar7 = *puVar8;
    puVar7[1] = uVar4;
    puVar8[1] = lVar2;
    lVar3 = puVar7[1];
    *puVar8 = uVar6;
    *(ulong *)(lVar10 + lVar3 * 8) = uVar9;
    *(ulong *)(lVar10 + lVar2 * 8) = uVar5;
    if (uVar5 == 0) break;
    lVar10 = param_1[1];
    uVar9 = uVar5;
  }
  uVar6 = ossl_pqueue_pop();
  return uVar6;
}



undefined8 ossl_pqueue_reserve(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  uVar5 = param_1[4];
  if ((ulong)(param_1[3] + param_2) < uVar5) {
    return 1;
  }
  if (uVar5 < param_2 + uVar5) {
    uVar3 = uVar5;
    if (uVar5 < 0xfffffffffffffff) {
      do {
        uVar1 = uVar3 * 8;
        uVar3 = uVar1 / 5;
        if (0xfffffffffffffff < uVar3) {
          uVar3 = 0xfffffffffffffff;
        }
        if (param_2 + uVar5 <= uVar3) goto LAB_00100324;
      } while (uVar1 < 0x4ffffffffffffffb);
    }
  }
  else {
    uVar3 = uVar5;
    if (uVar5 != 0) {
LAB_00100324:
      pvVar2 = CRYPTO_realloc((void *)*param_1,(int)(uVar3 << 4),"ssl/priority_queue.c",0x139);
      if (pvVar2 == (void *)0x0) {
        return 0;
      }
      *param_1 = pvVar2;
      pvVar2 = CRYPTO_realloc((void *)param_1[1],(int)uVar3 * 8,"ssl/priority_queue.c",0x13e);
      if (pvVar2 == (void *)0x0) {
        return 0;
      }
      param_1[1] = pvVar2;
      param_1[4] = uVar3;
      *(undefined8 *)((long)pvVar2 + uVar5 * 8) = param_1[5];
      if (uVar5 + 1 < uVar3) {
        uVar1 = uVar5 + 1;
        while (uVar4 = uVar1, *(ulong *)((long)pvVar2 + uVar5 * 8 + 8) = uVar5, uVar3 - 1 != uVar4)
        {
          uVar5 = uVar4;
          uVar1 = uVar4 + 1;
        }
      }
      param_1[5] = uVar3 - 1;
      return 1;
    }
  }
  ERR_new();
  ERR_set_debug("ssl/priority_queue.c",0x135,"ossl_pqueue_reserve");
  ERR_set_error(0x14,0xc0103,0);
  return 0;
}



undefined8 ossl_pqueue_push(long *param_1,undefined8 param_2,long *param_3)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar9 = ossl_pqueue_reserve(param_1,1);
  if ((int)uVar9 == 0) {
    return uVar9;
  }
  uVar14 = param_1[3];
  lVar2 = param_1[5];
  lVar3 = *param_1;
  param_1[3] = uVar14 + 1;
  puVar1 = (ulong *)(param_1[1] + lVar2 * 8);
  param_1[5] = *puVar1;
  puVar10 = (undefined8 *)(uVar14 * 0x10 + lVar3);
  *puVar10 = param_2;
  puVar10[1] = lVar2;
  *puVar1 = uVar14;
  if (uVar14 != 0) {
    while( true ) {
      uVar13 = uVar14 - 1 >> 1;
      puVar10 = (undefined8 *)(lVar3 + uVar13 * 0x10);
      iVar8 = (*(code *)param_1[2])(param_2,*puVar10);
      if (-1 < iVar8) break;
      lVar4 = param_1[1];
      puVar11 = (undefined8 *)(uVar14 * 0x10 + *param_1);
      puVar12 = (undefined8 *)(*param_1 + uVar13 * 0x10);
      lVar5 = puVar11[1];
      uVar7 = puVar12[1];
      uVar9 = *puVar11;
      *puVar11 = *puVar12;
      puVar11[1] = uVar7;
      puVar12[1] = lVar5;
      lVar6 = puVar11[1];
      *puVar12 = uVar9;
      *(ulong *)(lVar4 + lVar6 * 8) = uVar14;
      *(ulong *)(lVar4 + lVar5 * 8) = uVar13;
      if (uVar13 == 0) break;
      param_2 = *puVar10;
      uVar14 = uVar13;
    }
  }
  if (param_3 != (long *)0x0) {
    *param_3 = lVar2;
  }
  return 1;
}



void ossl_pqueue_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CRYPTO_free((void *)*param_1);
    CRYPTO_free((void *)param_1[1]);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * ossl_pqueue_new(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  if ((param_1 != 0) &&
     (plVar3 = (long *)CRYPTO_malloc(0x30,"ssl/priority_queue.c",0x14f), lVar6 = _UNK_00100758,
     lVar1 = __LC1, plVar3 != (long *)0x0)) {
    plVar3[2] = param_1;
    plVar3[5] = 0;
    plVar3[3] = lVar1;
    plVar3[4] = lVar6;
    pvVar4 = CRYPTO_malloc(0x80,"ssl/priority_queue.c",0x156);
    *plVar3 = (long)pvVar4;
    plVar5 = (long *)CRYPTO_malloc(0x40,"ssl/priority_queue.c",0x157);
    plVar3[1] = (long)plVar5;
    if ((*plVar3 != 0) && (plVar5 != (long *)0x0)) {
      uVar2 = plVar3[4];
      *plVar5 = plVar3[5];
      lVar1 = uVar2 - 1;
      if (1 < uVar2) {
        lVar6 = 0;
        if ((uVar2 & 1) == 0) {
          plVar5[1] = 0;
          lVar6 = 1;
          if (lVar1 == 1) goto LAB_00100677;
        }
        do {
          plVar5[lVar6 + 1] = lVar6;
          lVar7 = lVar6 + 2;
          plVar5[lVar6 + 2] = lVar6 + 1;
          lVar6 = lVar7;
        } while (lVar7 != lVar1);
      }
LAB_00100677:
      plVar3[5] = lVar1;
      return plVar3;
    }
    ossl_pqueue_free(plVar3);
  }
  return (long *)0x0;
}



void ossl_pqueue_pop_free(long *param_1,code *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != (long *)0x0) {
    if (param_1[3] != 0) {
      uVar1 = 0;
      do {
        uVar2 = uVar1 + 1;
        (*param_2)(*(undefined8 *)(uVar1 * 0x10 + *param_1));
        uVar1 = uVar2;
      } while (uVar2 < (ulong)param_1[3]);
    }
    ossl_pqueue_free(param_1);
    return;
  }
  return;
}



undefined8 ossl_pqueue_num(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  return uVar1;
}



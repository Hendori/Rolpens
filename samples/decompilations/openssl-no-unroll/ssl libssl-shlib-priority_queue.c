
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
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  if (((param_1 == (long *)0x0) || ((ulong)param_1[4] <= param_2)) || (param_1[3] == 0)) {
    return 0;
  }
  lVar2 = param_1[1];
  uVar8 = param_1[3] - 1;
  puVar1 = (ulong *)(lVar2 + param_2 * 8);
  uVar7 = *puVar1;
  if (uVar8 == uVar7) {
    *puVar1 = param_1[5];
    param_1[3] = uVar8;
    param_1[5] = param_2;
    return *(undefined8 *)(uVar8 * 0x10 + *param_1);
  }
  if (uVar7 == 0) {
    uVar6 = ossl_pqueue_pop();
    return uVar6;
  }
  lVar3 = *param_1;
  puVar9 = (undefined8 *)(uVar7 * 0x10 + lVar3);
  lVar4 = puVar9[1];
  uVar6 = *puVar9;
  do {
    uVar8 = uVar7 - 1 >> 1;
    puVar9 = (undefined8 *)(uVar7 * 0x10 + lVar3);
    puVar10 = (undefined8 *)(uVar8 * 0x10 + lVar3);
    uVar5 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar5;
    *puVar10 = uVar6;
    puVar10[1] = lVar4;
    *(ulong *)(lVar2 + puVar9[1] * 8) = uVar7;
    uVar7 = uVar8;
  } while (uVar8 != 0);
  *(undefined8 *)(lVar2 + lVar4 * 8) = 0;
  uVar6 = ossl_pqueue_pop();
  return uVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ossl_pqueue_reserve(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  uVar3 = param_1[4];
  if ((ulong)(param_1[3] + param_2) < uVar3) {
    return 1;
  }
  if (uVar3 < param_2 + uVar3) {
    uVar9 = uVar3;
    if (uVar3 < 0xfffffffffffffff) {
      do {
        uVar10 = uVar9 * 8;
        uVar9 = uVar10 / 5;
        if (0xfffffffffffffff < uVar9) {
          uVar9 = 0xfffffffffffffff;
        }
        if (param_2 + uVar3 <= uVar9) goto LAB_00100334;
      } while (uVar10 < 0x4ffffffffffffffb);
    }
  }
  else {
    uVar9 = uVar3;
    if (uVar3 != 0) {
LAB_00100334:
      pvVar6 = CRYPTO_realloc((void *)*param_1,(int)(uVar9 << 4),"ssl/priority_queue.c",0x139);
      if (pvVar6 == (void *)0x0) {
        return 0;
      }
      *param_1 = pvVar6;
      pvVar6 = CRYPTO_realloc((void *)param_1[1],(int)uVar9 * 8,"ssl/priority_queue.c",0x13e);
      if (pvVar6 == (void *)0x0) {
        return 0;
      }
      param_1[1] = pvVar6;
      uVar10 = uVar3 + 1;
      param_1[4] = uVar9;
      *(undefined8 *)((long)pvVar6 + uVar3 * 8) = param_1[5];
      lVar5 = _UNK_00100808;
      lVar4 = __LC1;
      if (uVar10 < uVar9) {
        uVar1 = (uVar9 - uVar3) - 1;
        if (uVar9 - uVar3 != 2) {
          plVar2 = (long *)((long)pvVar6 + uVar3 * 8 + 8);
          plVar7 = plVar2;
          uVar11 = uVar10;
          lVar12 = uVar3 + 2;
          do {
            plVar8 = plVar7 + 2;
            *plVar7 = uVar11 - 1;
            plVar7[1] = lVar12 + -1;
            plVar7 = plVar8;
            uVar11 = uVar11 + lVar4;
            lVar12 = lVar12 + lVar5;
          } while (plVar2 + (uVar1 & 0xfffffffffffffffe) != plVar8);
          if ((uVar1 & 1) == 0) goto LAB_0010041e;
          uVar10 = uVar10 + (uVar1 & 0xfffffffffffffffe);
        }
        *(ulong *)((long)pvVar6 + uVar10 * 8) = uVar10 - 1;
      }
LAB_0010041e:
      param_1[5] = uVar9 - 1;
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
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  if ((param_1 != 0) &&
     (plVar4 = (long *)CRYPTO_malloc(0x30,"ssl/priority_queue.c",0x14f), lVar3 = _UNK_00100828,
     lVar2 = __LC3, plVar4 != (long *)0x0)) {
    plVar4[2] = param_1;
    plVar4[5] = 0;
    plVar4[3] = lVar2;
    plVar4[4] = lVar3;
    pvVar5 = CRYPTO_malloc(0x80,"ssl/priority_queue.c",0x156);
    *plVar4 = (long)pvVar5;
    plVar6 = (long *)CRYPTO_malloc(0x40,"ssl/priority_queue.c",0x157);
    plVar4[1] = (long)plVar6;
    if ((*plVar4 != 0) && (plVar6 != (long *)0x0)) {
      *plVar6 = plVar4[5];
      lVar3 = _UNK_00100808;
      lVar2 = __LC1;
      uVar9 = plVar4[4];
      uVar1 = uVar9 - 1;
      if (1 < uVar9) {
        if (uVar9 == 2) {
          uVar9 = 1;
        }
        else {
          plVar7 = plVar6;
          lVar10 = __LC2;
          lVar11 = _UNK_00100818;
          do {
            plVar8 = plVar7 + 2;
            plVar7[1] = lVar10 + -1;
            plVar7[2] = lVar11 + -1;
            plVar7 = plVar8;
            lVar10 = lVar10 + lVar2;
            lVar11 = lVar11 + lVar3;
          } while (plVar8 != plVar6 + (uVar1 & 0xfffffffffffffffe));
          if ((uVar1 & 1) == 0) goto LAB_0010071e;
          uVar9 = uVar1 | 1;
        }
        plVar6[uVar9] = uVar9 - 1;
      }
LAB_0010071e:
      plVar4[5] = uVar1;
      return plVar4;
    }
    ossl_pqueue_free(plVar4);
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



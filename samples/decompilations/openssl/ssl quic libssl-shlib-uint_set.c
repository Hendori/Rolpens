
void uint_set_merge_adjacent(long *param_1,long param_2)

{
  undefined1 (*ptr) [16];
  long *plVar1;
  long lVar2;
  
  ptr = *(undefined1 (**) [16])(param_2 + 8);
  if ((ptr != (undefined1 (*) [16])0x0) && (*(long *)(param_2 + 0x10) + -1 == *(long *)(ptr[1] + 8))
     ) {
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)ptr[1];
    lVar2 = *(long *)*ptr;
    if (ptr == (undefined1 (*) [16])*param_1) {
      *param_1 = lVar2;
    }
    plVar1 = *(long **)(*ptr + 8);
    if (ptr == (undefined1 (*) [16])param_1[1]) {
      param_1[1] = (long)plVar1;
    }
    if (plVar1 != (long *)0x0) {
      *plVar1 = lVar2;
      lVar2 = *(long *)*ptr;
    }
    if (lVar2 != 0) {
      *(long **)(lVar2 + 8) = plVar1;
    }
    param_1[2] = param_1[2] + -1;
    *ptr = (undefined1  [16])0x0;
    CRYPTO_free(ptr);
    return;
  }
  return;
}



void ossl_uint_set_init(undefined1 (*param_1) [16])

{
  *(undefined8 *)param_1[1] = 0;
  *param_1 = (undefined1  [16])0x0;
  return;
}



void ossl_uint_set_destroy(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *ptr;
  
  ptr = (undefined8 *)*param_1;
  while (ptr != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*ptr;
    CRYPTO_free(ptr);
    ptr = puVar1;
  }
  return;
}



undefined8 ossl_uint_set_insert(long *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  ulong uVar12;
  undefined1 (*ptr) [16];
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  
  uVar5 = *param_2;
  uVar3 = param_2[1];
  if (uVar3 < uVar5) {
    return 0;
  }
  lVar13 = param_1[2];
  if (lVar13 == 0) {
    plVar7 = (long *)CRYPTO_malloc(0x20,"ssl/quic/uint_set.c",0x72);
    if (plVar7 == (long *)0x0) {
      return 0;
    }
    lVar13 = *param_1;
    plVar7[2] = uVar5;
    plVar7[3] = uVar3;
    if (lVar13 != 0) {
      *(long **)(lVar13 + 8) = plVar7;
    }
    lVar4 = param_1[1];
    *plVar7 = lVar13;
    plVar7[1] = 0;
    *param_1 = (long)plVar7;
    if (lVar4 == 0) {
      param_1[1] = (long)plVar7;
    }
  }
  else {
    pauVar11 = (undefined1 (*) [16])param_1[1];
    uVar12 = *(ulong *)(pauVar11[1] + 8);
    if (uVar12 < uVar5) {
      if (uVar12 + 1 == uVar5) {
        *(ulong *)(pauVar11[1] + 8) = uVar3;
        return 1;
      }
      puVar6 = (undefined8 *)CRYPTO_malloc(0x20,"ssl/quic/uint_set.c",0x72);
      if (puVar6 == (undefined8 *)0x0) {
        return 0;
      }
      puVar1 = (undefined8 *)param_1[1];
      puVar6[2] = uVar5;
      puVar6[3] = uVar3;
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = puVar6;
      }
      lVar13 = *param_1;
      puVar6[1] = puVar1;
      *puVar6 = 0;
      param_1[1] = (long)puVar6;
      if (lVar13 != 0) goto LAB_00100198;
    }
    else {
      pauVar16 = (undefined1 (*) [16])*param_1;
      uVar9 = *(ulong *)pauVar16[1];
      if ((uVar5 <= uVar9) && (uVar12 <= uVar3)) {
        pauVar8 = *(undefined1 (**) [16])*pauVar16;
        *(ulong *)pauVar16[1] = uVar5;
        *(ulong *)(pauVar16[1] + 8) = uVar3;
        if (pauVar8 == (undefined1 (*) [16])0x0) {
          return 1;
        }
        while( true ) {
          pauVar2 = *(undefined1 (**) [16])*pauVar8;
          if (pauVar8 == pauVar16) {
            *param_1 = (long)pauVar2;
            puVar6 = *(undefined8 **)(*pauVar8 + 8);
          }
          else {
            puVar6 = *(undefined8 **)(*pauVar8 + 8);
          }
          if (pauVar8 == pauVar11) {
            param_1[1] = (long)puVar6;
          }
          pauVar11 = pauVar2;
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = pauVar2;
            pauVar11 = *(undefined1 (**) [16])*pauVar8;
          }
          if (pauVar11 != (undefined1 (*) [16])0x0) {
            *(undefined8 **)(*pauVar11 + 8) = puVar6;
          }
          param_1[2] = lVar13 + -1;
          *pauVar8 = (undefined1  [16])0x0;
          if (pauVar2 == (undefined1 (*) [16])0x0) break;
          pauVar16 = (undefined1 (*) [16])*param_1;
          pauVar11 = (undefined1 (*) [16])param_1[1];
          lVar13 = param_1[2];
          pauVar8 = pauVar2;
        }
        return 1;
      }
      pauVar8 = pauVar16;
      if (uVar9 <= uVar3) {
        uVar9 = *(ulong *)pauVar11[1];
        pauVar8 = pauVar11;
      }
      while( true ) {
        pauVar2 = *(undefined1 (**) [16])(*pauVar8 + 8);
        uVar12 = *(ulong *)(pauVar8[1] + 8);
        if (uVar5 < uVar9) break;
        if (uVar3 <= uVar12) {
          return 1;
        }
        uVar15 = uVar5;
        if (uVar5 <= uVar9) {
          uVar15 = uVar9;
        }
        uVar14 = uVar3;
        if (uVar12 <= uVar3) {
          uVar14 = uVar12;
        }
        if (uVar15 <= uVar14) {
LAB_001003e0:
          if (uVar12 < uVar3) {
            uVar12 = uVar3;
          }
          *(ulong *)(pauVar8[1] + 8) = uVar12;
          if (pauVar2 == (undefined1 (*) [16])0x0) {
            if (uVar5 < uVar9) {
              uVar9 = uVar5;
            }
            *(ulong *)pauVar8[1] = uVar9;
            return 1;
          }
          ptr = pauVar8;
          do {
            pauVar10 = pauVar2;
            uVar3 = *(ulong *)pauVar10[1];
            uVar12 = *(ulong *)(pauVar10[1] + 8);
            if (param_2[1] <= *(ulong *)(pauVar10[1] + 8)) {
              uVar12 = param_2[1];
            }
            uVar15 = uVar5;
            if (uVar5 <= uVar3) {
              uVar15 = uVar3;
            }
          } while ((uVar15 <= uVar12) &&
                  (uVar9 = uVar3, pauVar2 = *(undefined1 (**) [16])(*pauVar10 + 8), ptr = pauVar10,
                  *(undefined1 (**) [16])(*pauVar10 + 8) != (undefined1 (*) [16])0x0));
          if (uVar5 < uVar9) {
            uVar9 = uVar5;
          }
          *(ulong *)pauVar8[1] = uVar9;
          if (pauVar8 == ptr) {
            return 1;
          }
          while( true ) {
            pauVar2 = *(undefined1 (**) [16])*ptr;
            if (pauVar16 == ptr) {
              *param_1 = (long)pauVar2;
              puVar6 = *(undefined8 **)(*ptr + 8);
            }
            else {
              puVar6 = *(undefined8 **)(*ptr + 8);
            }
            if (pauVar11 == ptr) {
              param_1[1] = (long)puVar6;
            }
            pauVar11 = pauVar2;
            if (puVar6 != (undefined8 *)0x0) {
              *puVar6 = pauVar2;
              pauVar11 = *(undefined1 (**) [16])*ptr;
            }
            if (pauVar11 == (undefined1 (*) [16])0x0) {
              param_1[2] = lVar13 + -1;
              *ptr = (undefined1  [16])0x0;
            }
            else {
              *(undefined8 **)(*pauVar11 + 8) = puVar6;
              param_1[2] = lVar13 + -1;
              *ptr = (undefined1  [16])0x0;
            }
            CRYPTO_free(ptr);
            if (pauVar2 == pauVar8) break;
            pauVar16 = (undefined1 (*) [16])*param_1;
            pauVar11 = (undefined1 (*) [16])param_1[1];
            lVar13 = param_1[2];
            ptr = pauVar2;
          }
          return 1;
        }
LAB_0010021f:
        if (pauVar2 == (undefined1 (*) [16])0x0) {
          return 1;
        }
LAB_00100268:
        uVar9 = *(ulong *)pauVar2[1];
        pauVar8 = pauVar2;
      }
      uVar15 = uVar3;
      if (uVar12 <= uVar3) {
        uVar15 = uVar12;
      }
      uVar14 = uVar5;
      if (uVar5 <= uVar9) {
        uVar14 = uVar9;
      }
      if (uVar14 <= uVar15) goto LAB_001003e0;
      if (uVar9 <= uVar3) goto LAB_0010021f;
      if (pauVar2 == (undefined1 (*) [16])0x0) {
        if (uVar3 + 1 == uVar9) {
LAB_001004ed:
          *(ulong *)pauVar8[1] = uVar5;
          uint_set_merge_adjacent(param_1,pauVar8);
          return 1;
        }
      }
      else {
        if (uVar5 <= *(ulong *)(pauVar2[1] + 8)) goto LAB_00100268;
        if (uVar3 + 1 == uVar9) goto LAB_001004ed;
        if (*(ulong *)(pauVar2[1] + 8) + 1 == uVar5) {
          *(ulong *)(pauVar2[1] + 8) = uVar3;
          uint_set_merge_adjacent(param_1,pauVar8);
          return 1;
        }
      }
      puVar6 = (undefined8 *)CRYPTO_malloc(0x20,"ssl/quic/uint_set.c",0x72);
      if (puVar6 == (undefined8 *)0x0) {
        return 0;
      }
      puVar6[1] = 0;
      puVar1 = *(undefined8 **)(*pauVar8 + 8);
      puVar6[2] = uVar5;
      puVar6[3] = uVar3;
      *puVar6 = pauVar8;
      puVar6[1] = puVar1;
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = puVar6;
      }
      *(undefined8 **)(*pauVar8 + 8) = puVar6;
      if ((undefined1 (*) [16])*param_1 != pauVar8) goto LAB_00100198;
    }
    *param_1 = (long)puVar6;
  }
LAB_00100198:
  param_1[2] = param_1[2] + 1;
  return 1;
}



undefined8 ossl_uint_set_remove(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 (*pauVar3) [16];
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined1 (*ptr) [16];
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if (uVar2 < uVar1) {
    return 0;
  }
  pauVar3 = (undefined1 (*) [16])param_1[1];
  while( true ) {
    ptr = pauVar3;
    if (ptr == (undefined1 (*) [16])0x0) {
      return 1;
    }
    pauVar3 = *(undefined1 (**) [16])(*ptr + 8);
    uVar4 = *(ulong *)(ptr[1] + 8);
    if (uVar4 < uVar1) break;
    if (*(ulong *)ptr[1] < uVar1) {
      if (uVar2 < uVar4) {
        plVar5 = (long *)CRYPTO_malloc(0x20,"ssl/quic/uint_set.c",0x72);
        if (plVar5 != (long *)0x0) {
          *plVar5 = 0;
          plVar5[2] = uVar2 + 1;
          plVar5[3] = uVar4;
        }
        lVar6 = *(long *)*ptr;
        *plVar5 = lVar6;
        plVar5[1] = (long)ptr;
        if (lVar6 != 0) {
          *(long **)(lVar6 + 8) = plVar5;
        }
        *(long **)*ptr = plVar5;
        if (ptr == (undefined1 (*) [16])param_1[1]) {
          param_1[1] = (long)plVar5;
        }
        param_1[2] = param_1[2] + 1;
      }
      *(ulong *)(ptr[1] + 8) = uVar1 - 1;
      return 1;
    }
    if (uVar2 < uVar4) {
      if (*(ulong *)ptr[1] <= uVar2) {
        *(ulong *)ptr[1] = uVar2 + 1;
      }
    }
    else {
      lVar6 = *(long *)*ptr;
      if (ptr == (undefined1 (*) [16])*param_1) {
        *param_1 = lVar6;
      }
      if (ptr == (undefined1 (*) [16])param_1[1]) {
        param_1[1] = (long)pauVar3;
      }
      if (pauVar3 != (undefined1 (*) [16])0x0) {
        *(long *)*pauVar3 = lVar6;
        lVar6 = *(long *)*ptr;
      }
      if (lVar6 != 0) {
        *(undefined1 (**) [16])(lVar6 + 8) = pauVar3;
      }
      param_1[2] = param_1[2] + -1;
      *ptr = (undefined1  [16])0x0;
      CRYPTO_free(ptr);
    }
  }
  return 1;
}



bool ossl_uint_set_query(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((*(long *)(param_1 + 0x10) != 0) && (lVar1 = *(long *)(param_1 + 8), lVar1 != 0)) {
    while (param_2 < *(ulong *)(lVar1 + 0x10)) {
      if ((*(ulong *)(lVar1 + 0x18) < param_2) || (lVar1 = *(long *)(lVar1 + 8), lVar1 == 0)) {
        return false;
      }
    }
    bVar2 = param_2 <= *(ulong *)(lVar1 + 0x18);
  }
  return bVar2;
}



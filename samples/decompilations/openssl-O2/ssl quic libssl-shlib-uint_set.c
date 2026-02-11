
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
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  ulong uVar9;
  undefined1 (*pauVar10) [16];
  ulong uVar11;
  undefined1 (*ptr) [16];
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  
  uVar4 = *param_2;
  uVar8 = param_2[1];
  if (uVar8 < uVar4) {
    return 0;
  }
  lVar12 = param_1[2];
  if (lVar12 == 0) {
    plVar6 = (long *)CRYPTO_malloc(0x20,"ssl/quic/uint_set.c",0x72);
    if (plVar6 == (long *)0x0) {
      return 0;
    }
    lVar12 = *param_1;
    plVar6[2] = uVar4;
    plVar6[3] = uVar8;
    if (lVar12 != 0) {
      *(long **)(lVar12 + 8) = plVar6;
    }
    lVar3 = param_1[1];
    *plVar6 = lVar12;
    plVar6[1] = 0;
    *param_1 = (long)plVar6;
    if (lVar3 == 0) {
      param_1[1] = (long)plVar6;
    }
  }
  else {
    pauVar10 = (undefined1 (*) [16])param_1[1];
    uVar9 = *(ulong *)(pauVar10[1] + 8);
    if (uVar9 < uVar4) {
      if (uVar9 + 1 == uVar4) {
        *(ulong *)(pauVar10[1] + 8) = uVar8;
        return 1;
      }
      puVar5 = (undefined8 *)CRYPTO_malloc(0x20,"ssl/quic/uint_set.c",0x72);
      if (puVar5 == (undefined8 *)0x0) {
        return 0;
      }
      puVar1 = (undefined8 *)param_1[1];
      puVar5[2] = uVar4;
      puVar5[3] = uVar8;
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = puVar5;
      }
      lVar12 = *param_1;
      puVar5[1] = puVar1;
      *puVar5 = 0;
      param_1[1] = (long)puVar5;
      if (lVar12 != 0) goto LAB_00100199;
    }
    else {
      pauVar16 = (undefined1 (*) [16])*param_1;
      uVar11 = *(ulong *)pauVar16[1];
      if ((uVar4 <= uVar11) && (uVar9 <= uVar8)) {
        pauVar7 = *(undefined1 (**) [16])*pauVar16;
        *(ulong *)pauVar16[1] = uVar4;
        *(ulong *)(pauVar16[1] + 8) = uVar8;
        if (pauVar7 != (undefined1 (*) [16])0x0) {
          while( true ) {
            pauVar2 = *(undefined1 (**) [16])*pauVar7;
            if (pauVar7 == pauVar16) {
              *param_1 = (long)pauVar2;
              puVar5 = *(undefined8 **)(*pauVar7 + 8);
            }
            else {
              puVar5 = *(undefined8 **)(*pauVar7 + 8);
            }
            if (pauVar7 == pauVar10) {
              param_1[1] = (long)puVar5;
            }
            pauVar10 = pauVar2;
            if (puVar5 != (undefined8 *)0x0) {
              *puVar5 = pauVar2;
              pauVar10 = *(undefined1 (**) [16])*pauVar7;
            }
            if (pauVar10 != (undefined1 (*) [16])0x0) {
              *(undefined8 **)(*pauVar10 + 8) = puVar5;
            }
            param_1[2] = lVar12 + -1;
            *pauVar7 = (undefined1  [16])0x0;
            if (pauVar2 == (undefined1 (*) [16])0x0) break;
            pauVar16 = (undefined1 (*) [16])*param_1;
            pauVar10 = (undefined1 (*) [16])param_1[1];
            lVar12 = param_1[2];
            pauVar7 = pauVar2;
          }
        }
        return 1;
      }
      pauVar7 = pauVar16;
      if (uVar11 <= uVar8) {
        uVar11 = *(ulong *)pauVar10[1];
        pauVar7 = pauVar10;
      }
      while( true ) {
        pauVar2 = *(undefined1 (**) [16])(*pauVar7 + 8);
        uVar9 = *(ulong *)(pauVar7[1] + 8);
        if (uVar4 < uVar11) break;
        if (uVar8 <= uVar9) {
          return 1;
        }
        uVar13 = uVar4;
        if (uVar4 <= uVar11) {
          uVar13 = uVar11;
        }
        uVar14 = uVar8;
        if (uVar9 <= uVar8) {
          uVar14 = uVar9;
        }
        if (uVar13 <= uVar14) goto LAB_00100368;
LAB_0010021f:
        if (pauVar2 == (undefined1 (*) [16])0x0) {
          return 1;
        }
LAB_00100268:
        uVar11 = *(ulong *)pauVar2[1];
        pauVar7 = pauVar2;
      }
      uVar13 = uVar8;
      if (uVar9 <= uVar8) {
        uVar13 = uVar9;
      }
      uVar14 = uVar4;
      if (uVar4 <= uVar11) {
        uVar14 = uVar11;
      }
      if (uVar14 <= uVar13) {
LAB_00100368:
        if (uVar9 < uVar8) {
          uVar9 = uVar8;
        }
        *(ulong *)(pauVar7[1] + 8) = uVar9;
        if (pauVar2 == (undefined1 (*) [16])0x0) {
          if (uVar4 < uVar11) {
            uVar11 = uVar4;
          }
          *(ulong *)pauVar7[1] = uVar11;
          return 1;
        }
        pauVar15 = pauVar7;
        while( true ) {
          ptr = pauVar2;
          uVar8 = *(ulong *)ptr[1];
          uVar9 = *(ulong *)(ptr[1] + 8);
          if (param_2[1] <= *(ulong *)(ptr[1] + 8)) {
            uVar9 = param_2[1];
          }
          uVar11 = uVar4;
          if (uVar4 <= uVar8) {
            uVar11 = uVar8;
          }
          if (uVar9 < uVar11) break;
          pauVar2 = *(undefined1 (**) [16])(*ptr + 8);
          pauVar15 = ptr;
          if (*(undefined1 (**) [16])(*ptr + 8) == (undefined1 (*) [16])0x0) {
LAB_001003bc:
            if (uVar4 < uVar8) {
              uVar8 = uVar4;
            }
            *(ulong *)pauVar7[1] = uVar8;
            if (pauVar7 != ptr) {
              while( true ) {
                pauVar2 = *(undefined1 (**) [16])*ptr;
                if (pauVar16 == ptr) {
                  *param_1 = (long)pauVar2;
                  puVar5 = *(undefined8 **)(*ptr + 8);
                }
                else {
                  puVar5 = *(undefined8 **)(*ptr + 8);
                }
                if (pauVar10 == ptr) {
                  param_1[1] = (long)puVar5;
                }
                pauVar10 = pauVar2;
                if (puVar5 != (undefined8 *)0x0) {
                  *puVar5 = pauVar2;
                  pauVar10 = *(undefined1 (**) [16])*ptr;
                }
                if (pauVar10 != (undefined1 (*) [16])0x0) {
                  *(undefined8 **)(*pauVar10 + 8) = puVar5;
                }
                param_1[2] = lVar12 + -1;
                *ptr = (undefined1  [16])0x0;
                CRYPTO_free(ptr);
                if (pauVar2 == pauVar7) break;
                pauVar16 = (undefined1 (*) [16])*param_1;
                pauVar10 = (undefined1 (*) [16])param_1[1];
                lVar12 = param_1[2];
                ptr = pauVar2;
              }
              return 1;
            }
            return 1;
          }
        }
        uVar8 = *(ulong *)pauVar15[1];
        ptr = pauVar15;
        goto LAB_001003bc;
      }
      if (uVar11 <= uVar8) goto LAB_0010021f;
      if (pauVar2 == (undefined1 (*) [16])0x0) {
        if (uVar11 == uVar8 + 1) {
LAB_001004e1:
          *(ulong *)pauVar7[1] = uVar4;
          uint_set_merge_adjacent(param_1,pauVar7);
          return 1;
        }
      }
      else {
        if (uVar4 <= *(ulong *)(pauVar2[1] + 8)) goto LAB_00100268;
        if (uVar11 == uVar8 + 1) goto LAB_001004e1;
        if (*(ulong *)(pauVar2[1] + 8) + 1 == uVar4) {
          *(ulong *)(pauVar2[1] + 8) = uVar8;
          uint_set_merge_adjacent(param_1,pauVar7);
          return 1;
        }
      }
      puVar5 = (undefined8 *)CRYPTO_malloc(0x20,"ssl/quic/uint_set.c",0x72);
      if (puVar5 == (undefined8 *)0x0) {
        return 0;
      }
      puVar5[1] = 0;
      puVar1 = *(undefined8 **)(*pauVar7 + 8);
      puVar5[2] = uVar4;
      puVar5[3] = uVar8;
      *puVar5 = pauVar7;
      puVar5[1] = puVar1;
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = puVar5;
      }
      *(undefined8 **)(*pauVar7 + 8) = puVar5;
      if ((undefined1 (*) [16])*param_1 != pauVar7) goto LAB_00100199;
    }
    *param_1 = (long)puVar5;
  }
LAB_00100199:
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



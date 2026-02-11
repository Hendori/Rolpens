
/* CowData<Vector2i>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2i>::_copy_on_write(CowData<Vector2i> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 8;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
    if (*(long *)this != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)this + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)this;
        *(undefined8 *)this = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<Vector2i>::_ref(CowData<Vector2i> const&) [clone .part.0] */

void __thiscall CowData<Vector2i>::_ref(CowData<Vector2i> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] [clone .constprop.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* SortArray<FuzzySearchToken, FuzzySearch::set_query(String const&)::TokenComparator,
   true>::adjust_heap(long, long, long, FuzzySearchToken, FuzzySearchToken*) const [clone .isra.0]
    */

void SortArray<FuzzySearchToken,FuzzySearch::set_query(String_const&)::TokenComparator,true>::
     adjust_heap(long param_1,long param_2,long param_3,int *param_4,long param_5)

{
  long *plVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  bool bVar14;
  long local_50 [2];
  long local_40;
  
  lVar12 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = param_2;
  if (lVar12 < param_3) {
    do {
      piVar3 = (int *)((param_1 + lVar12) * 0x10 + param_5);
      lVar4 = *(long *)(piVar3 + 2);
      piVar5 = (int *)((lVar12 + -1 + param_1) * 0x10 + param_5);
      lVar13 = *(long *)(piVar5 + 2);
      if (lVar4 == 0) {
        if (((lVar13 != 0) && (iVar8 = (int)*(undefined8 *)(lVar13 + -8), iVar8 != 0)) &&
           (iVar8 = iVar8 + -1, iVar8 != 0)) {
          iVar10 = 0;
          goto LAB_00100376;
        }
LAB_00100401:
        bVar14 = *piVar3 < *piVar5;
      }
      else {
        iVar9 = (int)*(undefined8 *)(lVar4 + -8);
        if (iVar9 == 0) {
          if (lVar13 != 0) {
            iVar8 = (int)*(undefined8 *)(lVar13 + -8);
            iVar10 = 0;
            if (iVar8 != 0) goto LAB_00100410;
          }
          goto LAB_00100401;
        }
        iVar10 = iVar9 + -1;
        if (lVar13 == 0) {
          if (iVar10 != 0) {
            iVar8 = 0;
            goto LAB_00100376;
          }
          goto LAB_00100401;
        }
        iVar8 = (int)*(undefined8 *)(lVar13 + -8);
        if (iVar8 == 0) {
          iVar8 = 0;
          if (iVar10 == 0) goto LAB_00100401;
        }
        else {
LAB_00100410:
          iVar8 = iVar8 + -1;
          if (iVar8 == iVar10) goto LAB_00100401;
          iVar10 = iVar9 + -1 + (uint)(iVar9 == 0);
        }
LAB_00100376:
        bVar14 = iVar8 < iVar10;
      }
      lVar11 = lVar12;
      lVar6 = lVar12 + -1;
      if (!bVar14) {
        lVar11 = lVar12 + 1;
        piVar5 = piVar3;
        lVar13 = lVar4;
        lVar6 = lVar12;
      }
      piVar3 = (int *)((lVar7 + param_1) * 0x10 + param_5);
      *piVar3 = *piVar5;
      if (*(long *)(piVar3 + 2) != lVar13) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(piVar3 + 2),(CowData *)(piVar5 + 2));
      }
      lVar12 = lVar11 * 2;
      lVar7 = lVar6;
    } while (lVar12 < param_3);
  }
  else {
    piVar5 = (int *)((param_2 + param_1) * 0x10 + param_5);
    lVar6 = param_2;
  }
  piVar3 = piVar5;
  if (param_3 == lVar12) {
    lVar6 = param_3 + -1;
    piVar3 = (int *)((param_1 + lVar6) * 0x10 + param_5);
    *piVar5 = *piVar3;
    if (*(long *)(piVar5 + 2) != *(long *)(piVar3 + 2)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(piVar5 + 2),(CowData *)(piVar3 + 2));
    }
  }
  iVar8 = *param_4;
  lVar12 = *(long *)(param_4 + 2);
  local_50[0] = 0;
  if (lVar12 != 0) {
    plVar1 = (long *)(lVar12 + -0x10);
    do {
      lVar7 = *plVar1;
      lVar12 = local_50[0];
      if (lVar7 == 0) goto LAB_001004ad;
      LOCK();
      lVar4 = *plVar1;
      bVar14 = lVar7 == lVar4;
      if (bVar14) {
        *plVar1 = lVar7 + 1;
        lVar4 = lVar7;
      }
      UNLOCK();
    } while (!bVar14);
    if (lVar4 != -1) {
      local_50[0] = *(long *)(param_4 + 2);
      lVar12 = local_50[0];
    }
  }
LAB_001004ad:
  lVar7 = *(long *)(piVar3 + 2);
  while (piVar5 = piVar3, param_2 < lVar6) {
    lVar13 = (lVar6 + -1) / 2;
    piVar3 = (int *)((param_1 + lVar13) * 0x10 + param_5);
    lVar4 = *(long *)(piVar3 + 2);
    if (lVar4 == 0) {
      if (((lVar12 != 0) && (iVar10 = (int)*(undefined8 *)(lVar12 + -8), iVar10 != 0)) &&
         (iVar10 = iVar10 + -1, iVar10 != 0)) {
        iVar9 = 0;
        goto LAB_00100506;
      }
LAB_0010059f:
      bVar14 = *piVar3 < iVar8;
    }
    else {
      iVar2 = (int)*(undefined8 *)(lVar4 + -8);
      if (iVar2 == 0) {
        if (lVar12 != 0) {
          iVar10 = (int)*(undefined8 *)(lVar12 + -8);
          iVar9 = 0;
          if (iVar10 != 0) goto LAB_00100600;
        }
        goto LAB_0010059f;
      }
      iVar9 = iVar2 + -1;
      if (lVar12 == 0) {
        iVar10 = 0;
        if (iVar9 != 0) goto LAB_00100506;
        goto LAB_0010059f;
      }
      iVar10 = (int)*(undefined8 *)(lVar12 + -8);
      if (iVar10 == 0) {
        iVar10 = 0;
        if (iVar9 == 0) goto LAB_0010059f;
      }
      else {
LAB_00100600:
        iVar10 = iVar10 + -1;
        if (iVar9 == iVar10) goto LAB_0010059f;
        iVar9 = iVar2 + -1 + (uint)(iVar2 == 0);
      }
LAB_00100506:
      bVar14 = iVar10 < iVar9;
    }
    piVar5 = (int *)(param_5 + (lVar6 + param_1) * 0x10);
    if (!bVar14) break;
    *piVar5 = *piVar3;
    lVar6 = lVar13;
    if (lVar4 != lVar7) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(piVar5 + 2),(CowData *)(piVar3 + 2));
      lVar7 = *(long *)(piVar3 + 2);
    }
  }
  *piVar5 = iVar8;
  if (lVar12 != lVar7) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(piVar5 + 2),(CowData *)local_50);
  }
  if (lVar12 != 0) {
    LOCK();
    plVar1 = (long *)(lVar12 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_50[0] + -0x10),false);
        return;
      }
      goto LAB_0010076e;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010076e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00101205) */
/* SortArray<FuzzySearchToken, FuzzySearch::set_query(String const&)::TokenComparator,
   true>::introsort(long, long, FuzzySearchToken*, long) const [clone .isra.0] */

void SortArray<FuzzySearchToken,FuzzySearch::set_query(String_const&)::TokenComparator,true>::
     introsort(long param_1,long param_2,FuzzySearchToken_conflict *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  FuzzySearchToken_conflict *pFVar9;
  FuzzySearchToken_conflict *pFVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  FuzzySearchToken_conflict *pFVar17;
  FuzzySearchToken_conflict *pFVar18;
  long in_FS_OFFSET;
  bool bVar19;
  long local_90;
  long local_70;
  undefined4 local_58 [2];
  long local_50;
  long local_40;
  
  lVar12 = param_2 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar12) {
    local_90 = param_2;
    if (param_4 != 0) {
      pFVar17 = param_3 + param_1 * 0x10;
      local_70 = param_4;
LAB_001007da:
      lVar13 = *(long *)(pFVar17 + 8);
      local_70 = local_70 + -1;
      pFVar18 = param_3 + param_2 * 0x10 + -0x10;
      pFVar9 = param_3 + ((lVar12 >> 1) + param_1) * 0x10;
      lVar12 = *(long *)(pFVar9 + 8);
      pFVar10 = pFVar9;
      lVar6 = lVar12;
      lVar5 = lVar12;
      if (lVar13 == 0) {
        if (lVar12 == 0) {
          if (*(int *)pFVar17 < *(int *)pFVar9) goto LAB_00101309;
LAB_00101254:
          lVar4 = *(long *)(pFVar18 + 8);
          if (((lVar4 == 0) || (iVar11 = (int)*(undefined8 *)(lVar4 + -8), iVar11 == 0)) ||
             (iVar11 == 1)) goto LAB_00100f0f;
          if (iVar11 + -1 < 0) {
LAB_00100f00:
            iVar11 = *(int *)pFVar17;
            lVar5 = 0;
            goto LAB_00100b5b;
          }
LAB_001009ed:
          if (lVar6 == 0) {
LAB_0010139c:
            iVar11 = 0;
            uVar7 = (uint)*(undefined8 *)(lVar4 + -8);
            iVar14 = uVar7 - 1;
            if (uVar7 < 2) goto LAB_00100c19;
          }
          else {
            iVar16 = (int)*(undefined8 *)(lVar6 + -8);
            if (iVar16 != 0) {
              iVar11 = iVar16 + -1;
              goto LAB_00100f41;
            }
LAB_00100a06:
            if (*(uint *)(lVar4 + -8) < 2) goto LAB_00100c19;
LAB_00100a10:
            iVar14 = (int)*(undefined8 *)(lVar4 + -8);
            pFVar10 = pFVar9;
            lVar5 = lVar12;
            if (iVar14 == 0) goto LAB_00100b27;
            iVar14 = iVar14 + -1;
            iVar11 = 0;
          }
LAB_00100a22:
          bVar19 = iVar14 < iVar11;
          goto LAB_00100c22;
        }
        iVar11 = (int)*(undefined8 *)(lVar12 + -8);
        if (iVar11 == 0) {
          if (*(int *)pFVar17 < *(int *)pFVar9) goto LAB_001008f6;
          goto LAB_00101254;
        }
        if (iVar11 == 1) {
          if (*(int *)pFVar9 <= *(int *)pFVar17) goto LAB_00101254;
LAB_00100848:
          lVar12 = *(long *)(pFVar18 + 8);
          iVar16 = iVar11 + -1;
          if (lVar12 != 0) {
LAB_00100859:
            iVar14 = (int)*(undefined8 *)(lVar12 + -8);
            if (iVar14 == 0) {
              if (iVar16 == 0) goto LAB_00100a3b;
              iVar14 = 0;
            }
            else if (iVar14 + -1 == iVar16) goto LAB_00100a3b;
            goto LAB_00100870;
          }
          if (iVar16 == 0) goto LAB_00100a3b;
          if (0 < iVar16) goto LAB_00100b27;
          if ((lVar13 == 0) || (iVar16 = (int)*(undefined8 *)(lVar13 + -8), iVar16 == 0))
          goto LAB_00100b0d;
          iVar16 = iVar16 + -1;
LAB_001013dd:
          uVar7 = 0;
          if (iVar16 == 0) goto LAB_00100b0d;
LAB_001008c0:
          bVar19 = (int)uVar7 < iVar16;
        }
        else {
          if (0 < iVar11) goto LAB_00101254;
          lVar12 = *(long *)(pFVar18 + 8);
          iVar16 = iVar11 + -1;
          if (lVar12 != 0) goto LAB_00100859;
LAB_00100b0d:
          bVar19 = *(int *)pFVar17 < *(int *)pFVar18;
        }
        pFVar10 = pFVar18;
        lVar5 = lVar12;
        if (!bVar19) {
          pFVar10 = pFVar17;
          lVar5 = lVar13;
        }
LAB_00100b27:
        iVar11 = *(int *)pFVar10;
        if (lVar5 == 0) goto LAB_00100b5b;
      }
      else {
        iVar16 = (int)*(undefined8 *)(lVar13 + -8);
        if (iVar16 != 0) {
          iVar14 = iVar16 + -1;
          if (lVar12 == 0) {
            if (iVar14 == 0) {
              lVar6 = 0;
              if (*(int *)pFVar17 < *(int *)pFVar9) goto LAB_00101309;
LAB_0010149f:
              lVar4 = *(long *)(pFVar18 + 8);
              if ((lVar4 == 0) || (iVar8 = (int)*(undefined8 *)(lVar4 + -8), iVar8 == 0))
              goto LAB_00100f0f;
              iVar14 = 0;
LAB_0010140e:
              iVar11 = iVar8 + -1;
              if (iVar11 == iVar14) goto LAB_00100f0f;
              goto LAB_001009d5;
            }
            if (0 < iVar14) {
LAB_00101309:
              lVar12 = *(long *)(pFVar18 + 8);
              if ((lVar12 == 0) || (uVar7 = (uint)*(undefined8 *)(lVar12 + -8), uVar7 < 2))
              goto LAB_00100a3b;
              if ((int)uVar7 < 1) goto LAB_00100b27;
              if (lVar13 != 0) {
                iVar11 = (int)*(undefined8 *)(lVar13 + -8);
                if (iVar11 == 0) goto LAB_001012a4;
                iVar16 = iVar11 + -1;
LAB_00101343:
                iVar14 = (int)*(undefined8 *)(lVar12 + -8);
                if (iVar14 == 0) goto LAB_0010089b;
                if (iVar14 + -1 == iVar16) goto LAB_00100b0d;
                goto joined_r0x001012b3;
              }
LAB_00100ef6:
              if (uVar7 != 0) {
LAB_001008bb:
                iVar16 = 0;
                goto LAB_001008bd;
              }
              goto LAB_00100f00;
            }
            lVar4 = *(long *)(pFVar18 + 8);
            if (lVar4 == 0) goto LAB_00100c19;
            iVar8 = (int)*(undefined8 *)(lVar4 + -8);
            if (iVar8 != 0) {
              lVar6 = 0;
              goto joined_r0x00101429;
            }
            lVar6 = 0;
LAB_00100a82:
            if (1 < iVar16) goto LAB_00100a8c;
            if (lVar6 == 0) goto LAB_0010139c;
            iVar16 = (int)*(undefined8 *)(lVar6 + -8);
            if (iVar16 == 0) goto LAB_00100a06;
LAB_00100f34:
            iVar11 = iVar16 + -1;
            if (lVar4 == 0) goto LAB_0010143c;
LAB_00100f41:
            iVar14 = (int)*(undefined8 *)(lVar4 + -8);
            if (iVar14 == 0) {
              if (iVar11 != 0) {
                iVar11 = (int)*(undefined8 *)(lVar6 + -8);
                if (iVar11 == 0) goto LAB_00100a10;
LAB_00100ab7:
                iVar11 = iVar11 + -1;
                iVar14 = (int)*(undefined8 *)(lVar4 + -8);
                if (iVar14 == 0) goto LAB_00100a22;
                goto LAB_00100f56;
              }
            }
            else if (iVar16 != iVar14) {
LAB_00100f56:
              iVar14 = iVar14 + -1;
              goto LAB_00100a22;
            }
          }
          else {
            iVar11 = (int)*(undefined8 *)(lVar12 + -8);
            if (iVar11 != 0) {
              if (iVar16 != iVar11) goto LAB_00100840;
LAB_00100991:
              if (*(int *)pFVar9 <= *(int *)pFVar17) goto LAB_0010099d;
              if (iVar11 != 0) goto LAB_00100848;
LAB_001008f6:
              lVar12 = *(long *)(pFVar18 + 8);
              if (((lVar12 != 0) && (iVar14 = (int)*(undefined8 *)(lVar12 + -8), iVar14 != 0)) &&
                 (iVar14 != 1)) {
                if (iVar11 == 0) {
                  iVar11 = 0;
                  if (iVar14 != 0) {
LAB_00100ed8:
                    if (iVar11 < iVar14) {
                      if (lVar13 != 0) goto LAB_00100a4f;
                      goto LAB_00100ee9;
                    }
                    goto LAB_00100b27;
                  }
                  if (((lVar13 == 0) || (iVar11 = (int)*(undefined8 *)(lVar13 + -8), iVar11 == 0))
                     || (iVar11 == 1)) goto LAB_00100b0d;
                }
                else {
LAB_00100870:
                  iVar11 = iVar11 + -1;
                  if (iVar14 != 0) goto LAB_00100ed8;
                  if (0 < iVar11) goto LAB_00100b27;
                  if (lVar13 == 0) goto LAB_00100b0d;
                  iVar11 = (int)*(undefined8 *)(lVar13 + -8);
                  if (iVar11 == 0) goto LAB_001012a4;
                  iVar16 = iVar11 + -1;
LAB_0010089b:
                  if (iVar16 == 0) goto LAB_00100b0d;
joined_r0x001012b3:
                  if (iVar11 == 0) {
                    uVar7 = (uint)*(undefined8 *)(lVar12 + -8);
                    if (uVar7 == 0) goto LAB_00100a8c;
                    goto LAB_001008bb;
                  }
                }
                iVar16 = iVar11 + -1;
                uVar7 = (uint)*(undefined8 *)(lVar12 + -8);
                if (uVar7 == 0) goto LAB_001008c0;
LAB_001008bd:
                uVar7 = uVar7 - 1;
                goto LAB_001008c0;
              }
LAB_00100a3b:
              if (*(int *)pFVar18 <= *(int *)pFVar9) {
                if (lVar13 == 0) {
                  if (lVar12 == 0) goto LAB_00100b0d;
LAB_00100ee9:
                  uVar7 = (uint)*(undefined8 *)(lVar12 + -8);
                  if (1 < uVar7) goto LAB_00100ef6;
                }
                else {
LAB_00100a4f:
                  iVar11 = (int)*(undefined8 *)(lVar13 + -8);
                  if (iVar11 != 0) {
                    iVar16 = iVar11 + -1;
                    if (lVar12 != 0) goto LAB_00101343;
                    goto LAB_001013dd;
                  }
                  if (lVar12 != 0) {
LAB_001012a4:
                    if (1 < *(uint *)(lVar12 + -8)) goto joined_r0x001012b3;
                  }
                }
                goto LAB_00100b0d;
              }
              goto LAB_00100b27;
            }
            if (iVar14 == 0) {
              if (*(int *)pFVar9 <= *(int *)pFVar17) goto LAB_0010149f;
              goto LAB_001008f6;
            }
            if (0 < iVar14) goto LAB_001008f6;
            lVar4 = *(long *)(pFVar18 + 8);
            if (lVar4 != 0) {
              iVar8 = (int)*(undefined8 *)(lVar4 + -8);
              if (iVar8 != 0) goto LAB_0010140e;
LAB_00100a78:
              if (iVar16 != 0) goto LAB_00100a82;
              if (((lVar12 == 0) || (iVar11 == 0)) || (iVar11 == 1)) goto LAB_00100c19;
              goto LAB_00100ab7;
            }
LAB_00100c10:
            if (iVar11 == 0) goto LAB_00100c19;
            iVar11 = iVar11 + -1;
LAB_0010143c:
            iVar14 = 0;
            if (iVar11 != 0) goto LAB_00100a22;
          }
LAB_00100c19:
          bVar19 = *(int *)pFVar9 < *(int *)pFVar18;
LAB_00100c22:
          pFVar10 = pFVar9;
          lVar5 = lVar12;
          if (bVar19) {
            pFVar10 = pFVar18;
            lVar5 = lVar4;
          }
          goto LAB_00100b27;
        }
        if (lVar12 == 0) {
          lVar6 = 0;
          if (*(int *)pFVar17 < *(int *)pFVar9) goto LAB_00101309;
LAB_00101219:
          lVar4 = *(long *)(pFVar18 + 8);
          if (((lVar4 != 0) && (iVar8 = (int)*(undefined8 *)(lVar4 + -8), iVar8 != 0)) &&
             (iVar11 = iVar8 + -1, iVar11 != 0)) {
LAB_001009d5:
            if (iVar16 != 0) {
              iVar16 = iVar16 + -1;
              iVar11 = iVar8 + -1;
            }
            if (iVar11 < iVar16) goto LAB_00100a8c;
            goto LAB_001009ed;
          }
LAB_00100f0f:
          pFVar10 = pFVar17;
          lVar5 = lVar13;
          if (*(int *)pFVar18 <= *(int *)pFVar17) {
            if (lVar6 == 0) {
              if (lVar4 != 0) goto LAB_0010139c;
            }
            else {
              iVar16 = (int)*(undefined8 *)(lVar6 + -8);
              if (iVar16 != 0) goto LAB_00100f34;
              if (lVar4 != 0) goto LAB_00100a06;
            }
            goto LAB_00100c19;
          }
          goto LAB_00100b27;
        }
        iVar11 = (int)*(undefined8 *)(lVar12 + -8);
        if (iVar11 == 0) {
          if (*(int *)pFVar17 < *(int *)pFVar9) goto LAB_001008f6;
          goto LAB_00101219;
        }
        iVar14 = 0;
        if (iVar11 == 1) goto LAB_00100991;
LAB_00100840:
        if (iVar11 <= iVar14) goto LAB_00100848;
LAB_0010099d:
        if (iVar16 == 0) goto LAB_00101219;
        lVar4 = *(long *)(pFVar18 + 8);
        if (lVar4 != 0) {
          iVar8 = (int)*(undefined8 *)(lVar4 + -8);
          if (iVar8 == 0) {
            if (iVar16 != 1) goto LAB_00100a78;
          }
          else {
joined_r0x00101429:
            iVar11 = iVar8 + -1;
            if (iVar16 != iVar8) goto LAB_001009d5;
          }
          goto LAB_00100f0f;
        }
        if (iVar16 == 1) goto LAB_00100f0f;
        if (iVar16 + -1 < 1) {
          if (lVar12 != 0) goto LAB_00100c10;
          goto LAB_00100c19;
        }
LAB_00100a8c:
        iVar11 = *(int *)pFVar17;
        pFVar10 = pFVar17;
        lVar5 = lVar13;
      }
      plVar1 = (long *)(lVar5 + -0x10);
      do {
        lVar12 = *plVar1;
        if (lVar12 == 0) {
          lVar13 = *(long *)(pFVar17 + 8);
          lVar5 = 0;
          goto LAB_00100b5b;
        }
        LOCK();
        lVar6 = *plVar1;
        bVar19 = lVar12 == lVar6;
        if (bVar19) {
          *plVar1 = lVar12 + 1;
          lVar6 = lVar12;
        }
        UNLOCK();
      } while (!bVar19);
      lVar13 = *(long *)(pFVar17 + 8);
      lVar5 = 0;
      if (lVar6 != -1) {
        lVar5 = *(long *)(pFVar10 + 8);
      }
LAB_00100b5b:
      local_90 = param_1;
      lVar12 = param_2;
      pFVar18 = pFVar17;
      do {
        lVar6 = lVar5;
        if (lVar13 == 0) {
          if (((lVar5 == 0) || (iVar16 = (int)*(undefined8 *)(lVar5 + -8), iVar16 == 0)) ||
             (iVar16 = iVar16 + -1, iVar16 == 0)) goto LAB_00100bf2;
          iVar14 = 0;
LAB_00100ba9:
          bVar19 = iVar16 < iVar14;
LAB_00100bae:
          if (!bVar19) goto LAB_00100c79;
          if (param_2 + -1 == local_90) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                             "bad comparison function; sorting will be broken",0);
            goto LAB_00100c79;
          }
        }
        else {
          iVar8 = (int)*(undefined8 *)(lVar13 + -8);
          if (iVar8 != 0) {
            iVar14 = iVar8 + -1;
            if (lVar5 == 0) {
              if (iVar14 != 0) {
LAB_00100ec8:
                iVar14 = iVar8 + -1;
                iVar16 = 0;
                lVar6 = 0;
                goto LAB_00100ba9;
              }
            }
            else {
              iVar16 = (int)*(undefined8 *)(lVar5 + -8);
              if (iVar16 != 0) goto LAB_00100da0;
              iVar16 = 0;
              if (iVar14 != 0) goto LAB_00100ba9;
            }
LAB_00100bf2:
            bVar19 = *(int *)pFVar18 < iVar11;
            goto LAB_00100bae;
          }
          if (lVar5 == 0) goto LAB_00100bf2;
          iVar16 = (int)*(undefined8 *)(lVar5 + -8);
          iVar14 = 0;
          if (iVar16 == 0) goto LAB_00100bf2;
LAB_00100da0:
          if (iVar14 == iVar16 + -1) goto LAB_00100bf2;
          if (iVar8 != 0) {
            iVar14 = iVar8 + -1;
            if (lVar5 == 0) goto LAB_00100ec8;
            if (iVar16 == 0) {
              iVar16 = 0;
              goto LAB_00100ba9;
            }
LAB_00100dc5:
            iVar16 = iVar16 + -1;
            goto LAB_00100ba9;
          }
          if (lVar5 == 0) {
            lVar6 = 0;
          }
          else {
            iVar14 = 0;
            if (iVar16 != 0) goto LAB_00100dc5;
          }
LAB_00100c79:
          pFVar10 = param_3 + lVar12 * 0x10 + -0x10;
          do {
            pFVar9 = pFVar10;
            lVar12 = lVar12 + -1;
            uVar15 = *(ulong *)(pFVar9 + 8);
            if (lVar6 == 0) {
              if (((uVar15 == 0) || (iVar16 = (int)*(undefined8 *)(uVar15 - 8), iVar16 == 0)) ||
                 (iVar16 = iVar16 + -1, iVar16 == 0)) goto LAB_00100ced;
              iVar14 = 0;
LAB_00100ca8:
              bVar19 = iVar16 < iVar14;
            }
            else {
              iVar8 = (int)*(undefined8 *)(lVar6 + -8);
              if (iVar8 == 0) {
                if (uVar15 != 0) {
                  iVar16 = (int)*(undefined8 *)(uVar15 - 8);
                  iVar14 = 0;
                  if (iVar16 != 0) goto LAB_00100cf8;
                }
              }
              else {
                iVar14 = iVar8 + -1;
                if (uVar15 != 0) {
                  iVar16 = (int)*(ulong *)(uVar15 - 8);
                  uVar15 = *(ulong *)(uVar15 - 8) & 0xffffffff;
                  if (iVar16 != 0) {
LAB_00100cf8:
                    iVar16 = iVar16 + -1;
                    if (iVar14 != iVar16) {
                      iVar14 = iVar8 + -1 + (uint)(iVar8 == 0);
                      goto LAB_00100ca8;
                    }
                    goto LAB_00100ced;
                  }
                }
                iVar16 = (int)uVar15;
                if (iVar14 != 0) goto LAB_00100ca8;
              }
LAB_00100ced:
              bVar19 = iVar11 < *(int *)pFVar9;
            }
            if (!bVar19) goto LAB_00100d51;
            pFVar10 = pFVar9 + -0x10;
          } while (param_1 != lVar12);
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                           "bad comparison function; sorting will be broken",0);
LAB_00100d51:
          if (lVar12 <= local_90) goto LAB_00100e58;
          iVar16 = *(int *)pFVar9;
          iVar14 = *(int *)pFVar18;
          lVar13 = *(long *)(pFVar18 + 8);
          *(undefined8 *)(pFVar18 + 8) = 0;
          *(int *)pFVar18 = iVar16;
          if (*(long *)(pFVar9 + 8) == 0) {
            *(int *)pFVar9 = iVar14;
          }
          else {
            *(long *)(pFVar18 + 8) = *(long *)(pFVar9 + 8);
            *(undefined8 *)(pFVar9 + 8) = 0;
            *(int *)pFVar9 = iVar14;
          }
          if (lVar13 != 0) {
            *(long *)(pFVar9 + 8) = lVar13;
          }
        }
        lVar13 = *(long *)(pFVar18 + 0x18);
        local_90 = local_90 + 1;
        pFVar18 = pFVar18 + 0x10;
      } while( true );
    }
LAB_00100f61:
    lVar13 = lVar12 + -2 >> 1;
    pFVar17 = param_3 + (lVar13 + param_1) * 0x10 + 8;
    do {
      local_50 = 0;
      local_58[0] = *(undefined4 *)(pFVar17 + -8);
      plVar1 = (long *)(*(long *)pFVar17 + -0x10);
      if (*(long *)pFVar17 == 0) {
        adjust_heap(param_1,lVar13,lVar12,local_58,param_3);
      }
      else {
        do {
          lVar5 = *plVar1;
          if (lVar5 == 0) goto LAB_00100fb0;
          LOCK();
          lVar6 = *plVar1;
          bVar19 = lVar5 == lVar6;
          if (bVar19) {
            *plVar1 = lVar5 + 1;
            lVar6 = lVar5;
          }
          UNLOCK();
        } while (!bVar19);
        if (lVar6 != -1) {
          local_50 = *(long *)pFVar17;
        }
LAB_00100fb0:
        lVar5 = local_50;
        adjust_heap(param_1,lVar13,lVar12,local_58,param_3);
        if (lVar5 != 0) {
          LOCK();
          plVar1 = (long *)(lVar5 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_50 + -0x10),false);
          }
        }
      }
      if (lVar13 == 0) goto LAB_00101030;
      pFVar17 = pFVar17 + -0x10;
      lVar13 = lVar13 + -1;
    } while( true );
  }
  goto LAB_00100962;
LAB_00100e58:
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + -0x10);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static(plVar1,false);
    }
  }
  introsort(local_90,param_2,param_3,local_70);
  lVar12 = local_90 - param_1;
  if (lVar12 < 0x11) goto LAB_00100962;
  param_2 = local_90;
  if (local_70 == 0) goto LAB_00100f61;
  goto LAB_001007da;
LAB_00101030:
  pFVar18 = param_3 + param_1 * 0x10;
  pFVar17 = param_3 + (local_90 + -1) * 0x10 + 8;
  lVar12 = (local_90 + -1) - param_1;
  do {
    uVar3 = *(undefined4 *)((CowData<char32_t> *)pFVar17 + -8);
    plVar1 = (long *)(*(long *)pFVar17 + -0x10);
    if (*(long *)pFVar17 == 0) {
      *(undefined4 *)((CowData<char32_t> *)pFVar17 + -8) = *(undefined4 *)pFVar18;
      if (*(long *)(pFVar18 + 8) != 0) {
LAB_00101168:
        CowData<char32_t>::_ref((CowData<char32_t> *)pFVar17,(CowData *)(pFVar18 + 8));
      }
LAB_00101186:
      local_50 = 0;
      local_58[0] = uVar3;
      adjust_heap(param_1,0,lVar12,local_58,param_3);
    }
    else {
      do {
        lVar13 = *plVar1;
        if (lVar13 == 0) goto LAB_001011bb;
        LOCK();
        lVar5 = *plVar1;
        bVar19 = lVar13 == lVar5;
        if (bVar19) {
          *plVar1 = lVar13 + 1;
          lVar5 = lVar13;
        }
        UNLOCK();
      } while (!bVar19);
      if (lVar5 == -1) {
LAB_001011bb:
        *(undefined4 *)((CowData<char32_t> *)pFVar17 + -8) = *(undefined4 *)pFVar18;
        if (*(long *)pFVar17 != *(long *)(pFVar18 + 8)) goto LAB_00101168;
        goto LAB_00101186;
      }
      lVar13 = *(long *)pFVar17;
      *(undefined4 *)((CowData<char32_t> *)pFVar17 + -8) = *(undefined4 *)pFVar18;
      if (lVar13 != *(long *)(pFVar18 + 8)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pFVar17,(CowData *)(pFVar18 + 8));
      }
      local_50 = 0;
      if (lVar13 == 0) goto LAB_00101186;
      plVar1 = (long *)(lVar13 + -0x10);
      do {
        lVar5 = *plVar1;
        if (lVar5 == 0) goto LAB_001011df;
        LOCK();
        lVar6 = *plVar1;
        bVar19 = lVar5 == lVar6;
        if (bVar19) {
          *plVar1 = lVar5 + 1;
          lVar6 = lVar5;
        }
        UNLOCK();
      } while (!bVar19);
      if (lVar6 == -1) {
LAB_001011df:
        local_58[0] = uVar3;
        adjust_heap(param_1,0,lVar12,local_58,param_3);
      }
      else {
        local_58[0] = uVar3;
        local_50 = lVar13;
        adjust_heap(param_1,0,lVar12,local_58,param_3);
        LOCK();
        plVar2 = (long *)(lVar13 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          Memory::free_static((void *)(local_50 + -0x10),false);
        }
      }
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static(plVar1,false);
      }
    }
    pFVar17 = (FuzzySearchToken_conflict *)((CowData<char32_t> *)pFVar17 + -0x10);
    bVar19 = 1 < lVar12;
    lVar12 = lVar12 + -1;
  } while (bVar19);
LAB_00100962:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FuzzyTokenMatch::intersects(Vector2i const&) const */

bool __thiscall FuzzyTokenMatch::intersects(FuzzyTokenMatch *this,Vector2i *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = *(int *)(this + 0xc);
  bVar3 = false;
  if (((-1 < iVar1) && (iVar1 <= *(int *)(this + 0x10))) && (iVar2 = *(int *)param_1, -1 < iVar2)) {
    bVar3 = (iVar2 <= *(int *)(this + 0x10) && iVar1 <= *(int *)(param_1 + 4)) &&
            iVar2 <= *(int *)(param_1 + 4);
  }
  return bVar3;
}



/* FuzzySearchResult::can_add_token_match(FuzzyTokenMatch const&) const */

bool __thiscall
FuzzySearchResult::can_add_token_match(FuzzySearchResult_conflict *this,FuzzyTokenMatch *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  
  bVar6 = false;
  if (*(int *)(param_1 + 4) - *(int *)param_1 <= *(int *)this) {
    iVar2 = *(int *)(param_1 + 0xc);
    bVar6 = true;
    if (((-1 < iVar2) && (iVar3 = *(int *)(param_1 + 0x10), iVar2 <= iVar3)) &&
       (iVar4 = *(int *)(this + 4), -1 < iVar4)) {
      iVar5 = *(int *)(this + 8);
      bVar6 = (iVar2 <= iVar5 && iVar4 <= iVar3) && iVar4 <= iVar5;
      if ((iVar2 > iVar5 || iVar4 > iVar3) || iVar4 > iVar5) {
        return true;
      }
      lVar7 = *(long *)(this + 0x28);
      if (lVar7 != 0) {
        if (*(long *)(lVar7 + -8) != 1) {
          lVar1 = lVar7 + *(long *)(lVar7 + -8) * 0x28;
          if (lVar7 == lVar1) {
            return bVar6;
          }
          while (((iVar4 = *(int *)(lVar7 + 0xc), iVar4 < 0 || (*(int *)(lVar7 + 0x10) < iVar4)) ||
                 ((*(int *)(lVar7 + 0x10) < iVar2 || (iVar3 < iVar4))))) {
            lVar7 = lVar7 + 0x28;
            if (lVar1 == lVar7) {
              return bVar6;
            }
          }
        }
        bVar6 = false;
      }
    }
  }
  return bVar6;
}



/* FuzzyTokenMatch::is_case_insensitive(String const&, String const&) const */

undefined8 __thiscall
FuzzyTokenMatch::is_case_insensitive(FuzzyTokenMatch *this,String *param_1,String *param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  
  piVar12 = *(int **)(this + 0x20);
  if (piVar12 == (int *)0x0) {
    return 0;
  }
  piVar1 = piVar12 + *(long *)(piVar12 + -2) * 2;
  do {
    if (piVar1 == piVar12) {
      return 0;
    }
    iVar3 = *piVar12;
    lVar8 = (long)iVar3;
    if (iVar3 < iVar3 + piVar12[1]) {
      lVar4 = *(long *)param_1;
      lVar9 = lVar8 * 4;
      lVar2 = (ulong)(uint)piVar12[1] + lVar8;
      do {
        if (lVar4 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = *(long *)(lVar4 + -8);
        }
        if (lVar8 == lVar11) {
          piVar7 = (int *)&String::_null;
        }
        else {
          if ((lVar11 <= lVar8) || (lVar8 < 0)) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar11,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          piVar7 = (int *)(lVar4 + lVar9);
        }
        lVar11 = *(long *)param_2;
        if (lVar11 == 0) {
          if (lVar8 != 0) {
            lVar10 = 0;
LAB_001016f8:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar10,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
LAB_00101750:
          piVar6 = (int *)&String::_null;
        }
        else {
          lVar10 = *(long *)(lVar11 + -8);
          if (lVar10 == lVar8) goto LAB_00101750;
          if ((lVar8 < 0) || (lVar10 <= lVar8)) goto LAB_001016f8;
          piVar6 = (int *)(lVar11 + lVar9);
        }
        if (*piVar7 != *piVar6) {
          return 1;
        }
        lVar8 = lVar8 + 1;
        lVar9 = lVar9 + 4;
      } while (lVar2 != lVar8);
    }
    piVar12 = piVar12 + 2;
  } while( true );
}



/* FuzzySearchResult::score_token_match(FuzzyTokenMatch&, bool) const */

void __thiscall
FuzzySearchResult::score_token_match
          (FuzzySearchResult_conflict *this,FuzzyTokenMatch *param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = (*(int *)(param_1 + 4) - *(int *)param_1) * -0x14;
  if (param_2) {
    iVar2 = iVar2 + -3;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  CowData<Vector2i>::_copy_on_write((CowData<Vector2i> *)(param_1 + 0x20));
  piVar3 = *(int **)(param_1 + 0x20);
  CowData<Vector2i>::_copy_on_write((CowData<Vector2i> *)(param_1 + 0x20));
  piVar4 = *(int **)(param_1 + 0x20);
  if (piVar4 != (int *)0x0) {
    piVar4 = piVar4 + *(long *)(piVar4 + -2) * 2;
  }
  for (; piVar3 != piVar4; piVar3 = piVar3 + 2) {
    iVar2 = piVar3[1] * piVar3[1];
    if (*(int *)(this + 0x1c) < *piVar3) {
      iVar2 = iVar2 * 2;
    }
    cVar1 = _is_word_boundary((String *)(this + 0x10),*piVar3 + -1);
    if ((cVar1 != '\0') ||
       (cVar1 = _is_word_boundary((String *)(this + 0x10),piVar3[1] + *piVar3), cVar1 != '\0')) {
      iVar2 = iVar2 + 4;
    }
    if (piVar3[1] == *(int *)(param_1 + 4)) {
      iVar2 = iVar2 + 100;
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar2;
  }
  return;
}



/* CowData<FuzzyTokenMatch>::_ref(CowData<FuzzyTokenMatch> const&) [clone .part.0] */

void __thiscall CowData<FuzzyTokenMatch>::_ref(CowData<FuzzyTokenMatch> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* CowData<FuzzyTokenMatch>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<FuzzyTokenMatch>::_copy_on_write(CowData<FuzzyTokenMatch> *this)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar2 * 0x28 != 0) {
    uVar7 = lVar2 * 0x28 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar9 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    puVar8 = puVar5 + 2;
    if (lVar2 != 0) {
      do {
        puVar6 = (undefined8 *)((long)puVar8 + *(long *)this + (-0x10 - (long)puVar5));
        *puVar8 = *puVar6;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar6 + 1);
        *(undefined8 *)((long)puVar8 + 0xc) = *(undefined8 *)((long)puVar6 + 0xc);
        uVar1 = *(undefined4 *)((long)puVar6 + 0x14);
        puVar8[4] = 0;
        lVar3 = puVar6[4];
        *(undefined4 *)((long)puVar8 + 0x14) = uVar1;
        if (lVar3 != 0) {
          CowData<Vector2i>::_ref((CowData<Vector2i> *)(puVar8 + 4),(CowData *)(puVar6 + 4));
        }
        lVar9 = lVar9 + 1;
        puVar8 = puVar8 + 5;
      } while (lVar2 != lVar9);
    }
    _unref(this);
    *(undefined8 **)this = puVar5 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* FuzzySearchResult::maybe_apply_score_bonus() */

void __thiscall FuzzySearchResult::maybe_apply_score_bonus(FuzzySearchResult_conflict *this)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar11;
  int *piVar12;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long local_30;
  undefined1 *puVar10;
  
  puVar9 = auStack_38;
  puVar10 = auStack_38;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x28) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(this + 0x28) + -8) << 2;
  }
  puVar3 = auStack_38;
  while (puVar10 != auStack_38 + -(lVar4 + 0x17U & 0xfffffffffffff000)) {
    puVar9 = puVar3 + -0x1000;
    *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
    puVar10 = puVar3 + -0x1000;
    puVar3 = puVar3 + -0x1000;
  }
  uVar7 = (ulong)((uint)(lVar4 + 0x17U) & 0xff0);
  lVar4 = -uVar7;
  if (uVar7 != 0) {
    *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
  }
  piVar12 = (int *)((ulong)(puVar9 + lVar4 + 0xf) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar9 + lVar4 + -8) = 0x101aa0;
  CowData<FuzzyTokenMatch>::_copy_on_write((CowData<FuzzyTokenMatch> *)(this + 0x28));
  lVar8 = *(long *)(this + 0x28);
  *(undefined8 *)(puVar9 + lVar4 + -8) = 0x101aac;
  CowData<FuzzyTokenMatch>::_copy_on_write((CowData<FuzzyTokenMatch> *)(this + 0x28));
  lVar5 = *(long *)(this + 0x28);
  if (lVar5 == 0) {
    lVar11 = 0;
    lVar5 = 0;
    if (lVar8 == 0) goto LAB_00101b30;
LAB_00101ad0:
    do {
      piVar1 = (int *)(lVar8 + 8);
      piVar2 = (int *)(lVar8 + 0xc);
      lVar8 = lVar8 + 0x28;
      piVar12[*piVar1] = *piVar2;
    } while (lVar8 != lVar5);
  }
  else {
    lVar11 = *(long *)(lVar5 + -8);
    lVar5 = lVar5 + lVar11 * 0x28;
    if (lVar5 != lVar8) goto LAB_00101ad0;
  }
  if (1 < lVar11) {
    lVar5 = 1;
    iVar6 = *piVar12;
    do {
      piVar1 = piVar12 + lVar5;
      if (*piVar1 < iVar6) goto LAB_00101b0b;
      lVar5 = lVar5 + 1;
      iVar6 = *piVar1;
    } while (lVar5 != lVar11);
  }
LAB_00101b30:
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
LAB_00101b0b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + lVar4 + -8) = &UNK_00101b57;
  __stack_chk_fail();
}



/* SortArray<FuzzySearchResult, FuzzySearch::sort_and_filter(Vector<FuzzySearchResult>&)
   const::FuzzySearchResultComparator, true>::adjust_heap(long, long, long, FuzzySearchResult,
   FuzzySearchResult*) const [clone .isra.0] */

void SortArray<FuzzySearchResult,FuzzySearch::sort_and_filter(Vector<FuzzySearchResult>&)const::FuzzySearchResultComparator,true>
     ::adjust_heap(long param_1,long param_2,long param_3,undefined4 *param_4,long param_5)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  long local_50 [2];
  long local_40;
  
  lVar15 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = param_2;
  if (lVar15 < param_3) {
    do {
      puVar8 = (undefined4 *)((lVar15 + -1 + param_1) * 0x30 + param_5);
      puVar13 = (undefined4 *)((param_1 + lVar15) * 0x30 + param_5);
      bVar4 = (int)puVar8[6] < (int)puVar13[6];
      if (puVar13[6] == puVar8[6]) {
        uVar11 = *(ulong *)(puVar8 + 4);
        if (*(long *)(puVar13 + 4) == 0) {
          if (((uVar11 != 0) && (iVar14 = (int)*(undefined8 *)(uVar11 - 8), iVar14 != 0)) &&
             (iVar14 = iVar14 + -1, iVar14 != 0)) {
            iVar12 = 0;
LAB_00101c81:
            bVar4 = iVar12 < iVar14;
            goto LAB_00101ba8;
          }
        }
        else {
          iVar6 = (int)*(undefined8 *)(*(long *)(puVar13 + 4) + -8);
          if (iVar6 == 0) {
            if (uVar11 != 0) {
              iVar14 = (int)*(undefined8 *)(uVar11 - 8);
              iVar12 = 0;
              if (iVar14 != 0) goto LAB_00101ce0;
            }
          }
          else {
            iVar12 = iVar6 + -1;
            if (uVar11 != 0) {
              iVar14 = (int)*(ulong *)(uVar11 - 8);
              uVar11 = *(ulong *)(uVar11 - 8) & 0xffffffff;
              if (iVar14 != 0) {
LAB_00101ce0:
                iVar14 = iVar14 + -1;
                if (iVar14 != iVar12) {
                  iVar12 = iVar6 + -1 + (uint)(iVar6 == 0);
                  goto LAB_00101c81;
                }
                goto LAB_00101ca1;
              }
            }
            iVar14 = (int)uVar11;
            if (iVar12 != 0) goto LAB_00101c81;
          }
        }
LAB_00101ca1:
        cVar5 = String::operator<((String *)(puVar13 + 4),(String *)(puVar8 + 4));
        if (cVar5 != '\0') goto LAB_00101bb1;
LAB_00101cc8:
        lVar10 = *(long *)(puVar13 + 4);
        lVar16 = lVar15 + 1;
        lVar9 = lVar15;
      }
      else {
LAB_00101ba8:
        if (!bVar4) goto LAB_00101cc8;
LAB_00101bb1:
        lVar10 = *(long *)(puVar8 + 4);
        puVar13 = puVar8;
        lVar9 = lVar15 + -1;
        lVar16 = lVar15;
      }
      puVar8 = (undefined4 *)((lVar7 + param_1) * 0x30 + param_5);
      *puVar8 = *puVar13;
      *(undefined8 *)(puVar8 + 1) = *(undefined8 *)(puVar13 + 1);
      if (*(long *)(puVar8 + 4) != lVar10) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar8 + 4),(CowData *)(puVar13 + 4));
      }
      lVar15 = *(long *)(puVar13 + 10);
      *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar13 + 6);
      if (*(long *)(puVar8 + 10) != lVar15) {
        CowData<FuzzyTokenMatch>::_ref
                  ((CowData<FuzzyTokenMatch> *)(puVar8 + 10),(CowData *)(puVar13 + 10));
      }
      lVar15 = lVar16 * 2;
      lVar7 = lVar9;
    } while (lVar15 < param_3);
  }
  else {
    puVar13 = (undefined4 *)((param_2 + param_1) * 0x30 + param_5);
    lVar9 = param_2;
  }
  puVar8 = puVar13;
  if (param_3 == lVar15) {
    lVar9 = param_3 + -1;
    puVar8 = (undefined4 *)((param_1 + lVar9) * 0x30 + param_5);
    *puVar13 = *puVar8;
    *(undefined8 *)(puVar13 + 1) = *(undefined8 *)(puVar8 + 1);
    if (*(long *)(puVar13 + 4) != *(long *)(puVar8 + 4)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar13 + 4),(CowData *)(puVar8 + 4));
    }
    *(undefined8 *)(puVar13 + 6) = *(undefined8 *)(puVar8 + 6);
    if (*(long *)(puVar13 + 10) != *(long *)(puVar8 + 10)) {
      CowData<FuzzyTokenMatch>::_ref
                ((CowData<FuzzyTokenMatch> *)(puVar13 + 10),(CowData *)(puVar8 + 10));
    }
  }
  local_68 = 0;
  uVar2 = *param_4;
  uVar3 = *(undefined8 *)(param_4 + 1);
  if (*(long *)(param_4 + 4) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(param_4 + 4));
  }
  local_50[0] = 0;
  local_60 = *(undefined8 *)(param_4 + 6);
  if (*(long *)(param_4 + 10) != 0) {
    CowData<FuzzyTokenMatch>::_ref((CowData<FuzzyTokenMatch> *)local_50,(CowData *)(param_4 + 10));
  }
  do {
    if (lVar9 <= param_2) {
LAB_00101ef5:
      *puVar8 = uVar2;
      *(undefined8 *)(puVar8 + 1) = uVar3;
      if (*(long *)(puVar8 + 4) != local_68) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar8 + 4),(CowData *)&local_68);
      }
      *(undefined8 *)(puVar8 + 6) = local_60;
      if (*(long *)(puVar8 + 10) != local_50[0]) {
        CowData<FuzzyTokenMatch>::_ref
                  ((CowData<FuzzyTokenMatch> *)(puVar8 + 10),(CowData *)local_50);
      }
      CowData<FuzzyTokenMatch>::_unref((CowData<FuzzyTokenMatch> *)local_50);
      lVar15 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar15 = (lVar9 + -1) / 2;
    puVar8 = (undefined4 *)((param_1 + lVar15) * 0x30 + param_5);
    if (puVar8[6] == (int)local_60) {
      lVar7 = *(long *)(puVar8 + 4);
      if (lVar7 == 0) {
        if (((local_68 != 0) && (iVar14 = (int)*(undefined8 *)(local_68 + -8), iVar14 != 0)) &&
           (iVar14 = iVar14 + -1, iVar14 != 0)) {
          iVar12 = 0;
          goto LAB_00101e79;
        }
LAB_00101ea9:
        cVar5 = String::operator<((String *)(puVar8 + 4),(String *)&local_68);
        if (cVar5 != '\0') goto LAB_00101dae;
        puVar8 = (undefined4 *)((param_1 + lVar9) * 0x30 + param_5);
        goto LAB_00101ef5;
      }
      iVar6 = (int)*(undefined8 *)(lVar7 + -8);
      if (iVar6 == 0) {
        if (local_68 != 0) {
          iVar14 = (int)*(undefined8 *)(local_68 + -8);
          iVar12 = 0;
          if (iVar14 != 0) goto LAB_00101ed8;
        }
        goto LAB_00101ea9;
      }
      iVar12 = iVar6 + -1;
      if (local_68 == 0) {
        if (iVar12 != 0) {
          iVar14 = 0;
          goto LAB_00101e79;
        }
        goto LAB_00101ea9;
      }
      iVar14 = (int)*(undefined8 *)(local_68 + -8);
      if (iVar14 == 0) {
        iVar14 = 0;
        if (iVar12 == 0) goto LAB_00101ea9;
      }
      else {
LAB_00101ed8:
        iVar14 = iVar14 + -1;
        if (iVar12 == iVar14) goto LAB_00101ea9;
        iVar12 = iVar6 + -1 + (uint)(iVar6 == 0);
      }
LAB_00101e79:
      if (iVar14 <= iVar12) {
        puVar8 = (undefined4 *)((param_1 + lVar9) * 0x30 + param_5);
        goto LAB_00101ef5;
      }
    }
    else {
      if ((int)puVar8[6] <= (int)local_60) {
        puVar8 = (undefined4 *)((param_1 + lVar9) * 0x30 + param_5);
        goto LAB_00101ef5;
      }
LAB_00101dae:
      lVar7 = *(long *)(puVar8 + 4);
    }
    puVar13 = (undefined4 *)((param_1 + lVar9) * 0x30 + param_5);
    *puVar13 = *puVar8;
    *(undefined8 *)(puVar13 + 1) = *(undefined8 *)(puVar8 + 1);
    if (*(long *)(puVar13 + 4) != lVar7) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar13 + 4),(CowData *)(puVar8 + 4));
    }
    *(undefined8 *)(puVar13 + 6) = *(undefined8 *)(puVar8 + 6);
    lVar9 = lVar15;
    if (*(long *)(puVar13 + 10) != *(long *)(puVar8 + 10)) {
      CowData<FuzzyTokenMatch>::_ref
                ((CowData<FuzzyTokenMatch> *)(puVar13 + 10),(CowData *)(puVar8 + 10));
    }
  } while( true );
}



/* SortArray<FuzzySearchResult, FuzzySearch::sort_and_filter(Vector<FuzzySearchResult>&)
   const::FuzzySearchResultComparator, true>::partial_sort(long, long, long, FuzzySearchResult*)
   const [clone .isra.0] */

void SortArray<FuzzySearchResult,FuzzySearch::sort_and_filter(Vector<FuzzySearchResult>&)const::FuzzySearchResultComparator,true>
     ::partial_sort(long param_1,long param_2,long param_3,FuzzySearchResult_conflict *param_4)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  FuzzySearchResult_conflict *pFVar14;
  FuzzySearchResult_conflict *pFVar15;
  long in_FS_OFFSET;
  undefined4 *local_f8;
  long local_98;
  undefined8 local_90;
  long local_80;
  undefined4 local_78;
  undefined8 local_74;
  long local_68;
  undefined8 local_60;
  undefined8 local_50 [2];
  long local_40;
  
  lVar12 = param_3 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar12 < 2) {
    if (param_2 <= param_3) goto LAB_00102680;
LAB_001021e8:
    pFVar14 = param_4 + param_1 * 0x30;
    pFVar15 = param_4 + param_3 * 0x30 + 0x10;
    lVar8 = param_3;
    do {
      while( true ) {
        if (*(int *)((CowData<char32_t> *)pFVar15 + 8) == *(int *)(pFVar14 + 0x18)) break;
        if (*(int *)(pFVar14 + 0x18) < *(int *)((CowData<char32_t> *)pFVar15 + 8))
        goto LAB_001022ad;
LAB_00102252:
        lVar8 = lVar8 + 1;
        pFVar15 = (FuzzySearchResult_conflict *)((CowData<char32_t> *)pFVar15 + 0x30);
        if (param_2 <= lVar8) goto LAB_00102458;
      }
      uVar11 = *(ulong *)(pFVar14 + 0x10);
      if (*(long *)pFVar15 == 0) {
        if (((uVar11 != 0) && (iVar10 = (int)*(undefined8 *)(uVar11 - 8), iVar10 != 0)) &&
           (iVar10 = iVar10 + -1, iVar10 != 0)) {
          iVar9 = 0;
LAB_001022a9:
          if (iVar9 < iVar10) goto LAB_001022ad;
          goto LAB_00102252;
        }
      }
      else {
        iVar7 = (int)*(undefined8 *)(*(long *)pFVar15 + -8);
        if (iVar7 == 0) {
          if (uVar11 != 0) {
            iVar10 = (int)*(undefined8 *)(uVar11 - 8);
            iVar9 = 0;
            if (iVar10 != 0) goto LAB_001026e0;
          }
        }
        else {
          iVar9 = iVar7 + -1;
          if (uVar11 != 0) {
            iVar10 = (int)*(ulong *)(uVar11 - 8);
            uVar11 = *(ulong *)(uVar11 - 8) & 0xffffffff;
            if (iVar10 != 0) {
LAB_001026e0:
              iVar10 = iVar10 + -1;
              if (iVar9 != iVar10) {
                iVar9 = iVar7 + -1 + (uint)(iVar7 == 0);
                goto LAB_001022a9;
              }
              goto LAB_001026bf;
            }
          }
          iVar10 = (int)uVar11;
          if (iVar9 != 0) goto LAB_001022a9;
        }
      }
LAB_001026bf:
      cVar6 = String::operator<((String *)pFVar15,(String *)(pFVar14 + 0x10));
      if (cVar6 == '\0') goto LAB_00102252;
LAB_001022ad:
      uVar2 = *(undefined4 *)((CowData<char32_t> *)pFVar15 + -0x10);
      local_98 = 0;
      uVar3 = *(undefined8 *)((CowData<char32_t> *)pFVar15 + -0xc);
      if (*(long *)pFVar15 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)pFVar15);
      }
      local_90 = *(undefined8 *)((CowData<char32_t> *)pFVar15 + 8);
      local_80 = 0;
      lVar13 = *(long *)((CowData<char32_t> *)pFVar15 + 0x18);
      if (*(long *)((CowData<char32_t> *)pFVar15 + 0x18) != 0) {
        CowData<FuzzyTokenMatch>::_ref
                  ((CowData<FuzzyTokenMatch> *)&local_80,
                   (CowData *)((CowData<char32_t> *)pFVar15 + 0x18));
        lVar13 = local_80;
      }
      uVar5 = local_90;
      *(undefined4 *)((CowData<char32_t> *)pFVar15 + -0x10) = *(undefined4 *)pFVar14;
      *(undefined8 *)((CowData<char32_t> *)pFVar15 + -0xc) = *(undefined8 *)(pFVar14 + 4);
      if (*(long *)pFVar15 != *(long *)(pFVar14 + 0x10)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pFVar15,(CowData *)(pFVar14 + 0x10));
      }
      *(undefined8 *)((CowData<char32_t> *)pFVar15 + 8) = *(undefined8 *)(pFVar14 + 0x18);
      if (*(long *)((CowData<char32_t> *)pFVar15 + 0x18) != *(long *)(pFVar14 + 0x28)) {
        CowData<FuzzyTokenMatch>::_ref
                  ((CowData<FuzzyTokenMatch> *)((CowData<char32_t> *)pFVar15 + 0x18),
                   (CowData *)(pFVar14 + 0x28));
      }
      local_68 = 0;
      local_78 = uVar2;
      local_74 = uVar3;
      if (local_98 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_98);
      }
      local_50[0] = 0;
      local_60 = uVar5;
      if (lVar13 != 0) {
        CowData<FuzzyTokenMatch>::_ref((CowData<FuzzyTokenMatch> *)local_50,(CowData *)&local_80);
      }
      adjust_heap(param_1,0,lVar12,&local_78,param_4);
      CowData<FuzzyTokenMatch>::_unref((CowData<FuzzyTokenMatch> *)local_50);
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_68 + -0x10),false);
        }
      }
      CowData<FuzzyTokenMatch>::_unref((CowData<FuzzyTokenMatch> *)&local_80);
      if (local_98 == 0) goto LAB_00102252;
      LOCK();
      plVar1 = (long *)(local_98 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00102252;
      lVar8 = lVar8 + 1;
      pFVar15 = (FuzzySearchResult_conflict *)((CowData<char32_t> *)pFVar15 + 0x30);
      Memory::free_static((void *)(local_98 + -0x10),false);
    } while (lVar8 < param_2);
LAB_00102458:
    if (lVar12 < 2) goto LAB_00102680;
  }
  else {
    lVar8 = lVar12 + -2 >> 1;
    pFVar14 = param_4 + (param_1 + lVar8) * 0x30 + 0x28;
    while( true ) {
      local_78 = *(undefined4 *)((CowData *)pFVar14 + -0x28);
      local_68 = 0;
      local_74 = *(undefined8 *)((CowData *)pFVar14 + -0x24);
      if (*(long *)((CowData *)pFVar14 + -0x18) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)pFVar14 + -0x18);
      }
      local_60 = *(undefined8 *)((CowData *)pFVar14 + -0x10);
      local_50[0] = 0;
      if (*(long *)pFVar14 != 0) {
        CowData<FuzzyTokenMatch>::_ref((CowData<FuzzyTokenMatch> *)local_50,(CowData *)pFVar14);
      }
      adjust_heap(param_1,lVar8,lVar12,&local_78,param_4);
      CowData<FuzzyTokenMatch>::_unref((CowData<FuzzyTokenMatch> *)local_50);
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_68 + -0x10),false);
        }
      }
      pFVar14 = (FuzzySearchResult_conflict *)((CowData *)pFVar14 + -0x30);
      if (lVar8 == 0) break;
      lVar8 = lVar8 + -1;
    }
    if (param_3 < param_2) goto LAB_001021e8;
  }
  local_f8 = &local_78;
  pFVar14 = param_4 + param_1 * 0x30;
  pFVar15 = param_4 + param_3 * 0x30 + -8;
  lVar12 = (param_3 + -1) - param_1;
  do {
    uVar2 = *(undefined4 *)((CowData<FuzzyTokenMatch> *)pFVar15 + -0x28);
    local_98 = 0;
    uVar3 = *(undefined8 *)((CowData<FuzzyTokenMatch> *)pFVar15 + -0x24);
    if (*(long *)((CowData<FuzzyTokenMatch> *)pFVar15 + -0x18) != 0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_98,
                 (CowData *)((CowData<FuzzyTokenMatch> *)pFVar15 + -0x18));
    }
    local_90 = *(undefined8 *)((CowData<FuzzyTokenMatch> *)pFVar15 + -0x10);
    local_80 = 0;
    lVar8 = *(long *)pFVar15;
    if (*(long *)pFVar15 != 0) {
      CowData<FuzzyTokenMatch>::_ref((CowData<FuzzyTokenMatch> *)&local_80,(CowData *)pFVar15);
      lVar8 = local_80;
    }
    uVar5 = local_90;
    lVar13 = *(long *)(pFVar14 + 0x10);
    *(undefined4 *)((CowData<FuzzyTokenMatch> *)pFVar15 + -0x28) = *(undefined4 *)pFVar14;
    *(undefined8 *)((CowData<FuzzyTokenMatch> *)pFVar15 + -0x24) = *(undefined8 *)(pFVar14 + 4);
    if (*(long *)((CowData<FuzzyTokenMatch> *)pFVar15 + -0x18) != lVar13) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)((CowData<FuzzyTokenMatch> *)pFVar15 + -0x18),
                 (CowData *)(pFVar14 + 0x10));
    }
    lVar13 = *(long *)(pFVar14 + 0x28);
    *(undefined8 *)((CowData<FuzzyTokenMatch> *)pFVar15 + -0x10) = *(undefined8 *)(pFVar14 + 0x18);
    if (*(long *)pFVar15 != lVar13) {
      CowData<FuzzyTokenMatch>::_ref
                ((CowData<FuzzyTokenMatch> *)pFVar15,(CowData *)(pFVar14 + 0x28));
    }
    local_68 = 0;
    local_78 = uVar2;
    local_74 = uVar3;
    if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_98);
    }
    local_50[0] = 0;
    local_60 = uVar5;
    if (lVar8 != 0) {
      CowData<FuzzyTokenMatch>::_ref((CowData<FuzzyTokenMatch> *)local_50,(CowData *)&local_80);
    }
    adjust_heap(param_1,0,lVar12,local_f8,param_4);
    CowData<FuzzyTokenMatch>::_unref((CowData<FuzzyTokenMatch> *)local_50);
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_68 + -0x10),false);
      }
    }
    CowData<FuzzyTokenMatch>::_unref((CowData<FuzzyTokenMatch> *)&local_80);
    if (local_98 != 0) {
      LOCK();
      plVar1 = (long *)(local_98 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_98 + -0x10),false);
      }
    }
    pFVar15 = (FuzzySearchResult_conflict *)((CowData<FuzzyTokenMatch> *)pFVar15 + -0x30);
    bVar4 = 1 < lVar12;
    lVar12 = lVar12 + -1;
  } while (bVar4);
LAB_00102680:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SortArray<FuzzySearchResult, FuzzySearch::sort_and_filter(Vector<FuzzySearchResult>&)
   const::FuzzySearchResultComparator, true>::introsort(long, long, FuzzySearchResult*, long) const
   [clone .isra.0] */

void SortArray<FuzzySearchResult,FuzzySearch::sort_and_filter(Vector<FuzzySearchResult>&)const::FuzzySearchResultComparator,true>
     ::introsort(long param_1,long param_2,FuzzySearchResult_conflict *param_3,long param_4)

{
  long *plVar1;
  FuzzySearchResult_conflict *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  bool bVar6;
  char cVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  FuzzySearchResult_conflict *pFVar16;
  String *this;
  ulong uVar17;
  undefined8 uVar18;
  int iVar19;
  long lVar20;
  FuzzySearchResult_conflict *pFVar21;
  long in_FS_OFFSET;
  ulong local_98;
  ulong local_90;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  long local_68;
  undefined8 local_60;
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = param_2 - param_1;
  if (lVar8 < 0x11) {
LAB_00102e85:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    if (param_4 != 0) {
      pFVar2 = param_3 + param_1 * 0x30;
      lVar20 = param_2;
LAB_001027b8:
      param_4 = param_4 + -1;
      pFVar16 = param_3 + lVar20 * 0x30 + -0x30;
      pFVar21 = param_3 + ((lVar8 >> 1) + param_1) * 0x30;
      iVar12 = *(int *)(pFVar2 + 0x18);
      iVar11 = *(int *)(pFVar21 + 0x18);
      bVar6 = iVar11 < iVar12;
      if (iVar12 == iVar11) {
        uVar9 = *(ulong *)(pFVar21 + 0x10);
        if (*(long *)(pFVar2 + 0x10) == 0) {
          if (((uVar9 != 0) && (iVar13 = (int)*(undefined8 *)(uVar9 - 8), iVar13 != 0)) &&
             (iVar13 = iVar13 + -1, iVar13 != 0)) {
            iVar19 = 0;
LAB_00102de0:
            bVar6 = iVar19 < iVar13;
            goto LAB_001027f7;
          }
        }
        else {
          iVar14 = (int)*(undefined8 *)(*(long *)(pFVar2 + 0x10) + -8);
          if (iVar14 == 0) {
            if (uVar9 != 0) {
              iVar13 = (int)*(undefined8 *)(uVar9 - 8);
              iVar19 = 0;
              if (iVar13 != 0) goto LAB_00102dcd;
            }
          }
          else {
            iVar19 = iVar14 + -1;
            if (uVar9 != 0) {
              iVar13 = (int)*(ulong *)(uVar9 - 8);
              uVar9 = *(ulong *)(uVar9 - 8) & 0xffffffff;
              if (iVar13 != 0) {
LAB_00102dcd:
                iVar13 = iVar13 + -1;
                if (iVar13 != iVar19) {
                  iVar19 = iVar14 + -1 + (uint)(iVar14 == 0);
                  goto LAB_00102de0;
                }
                goto LAB_00102949;
              }
            }
            iVar13 = (int)uVar9;
            if (iVar19 != 0) goto LAB_00102de0;
          }
        }
LAB_00102949:
        cVar7 = String::operator<((String *)(pFVar2 + 0x10),(String *)(pFVar21 + 0x10));
        if (cVar7 != '\0') {
          iVar11 = *(int *)(pFVar21 + 0x18);
          goto LAB_001027ff;
        }
        iVar12 = *(int *)(pFVar2 + 0x18);
LAB_0010296c:
        iVar11 = *(int *)(pFVar16 + 0x18);
        bVar6 = iVar11 < iVar12;
        if (iVar11 == iVar12) {
          if (*(long *)(pFVar2 + 0x10) == 0) {
            if (((*(long *)(pFVar16 + 0x10) == 0) ||
                (iVar12 = (int)*(undefined8 *)(*(long *)(pFVar16 + 0x10) + -8), iVar12 == 0)) ||
               (iVar13 = 0, iVar12 == 1)) goto LAB_0010309b;
LAB_00102f90:
            iVar12 = iVar12 + -1;
LAB_00102e7b:
            bVar6 = iVar13 < iVar12;
            goto LAB_0010297a;
          }
          uVar9 = *(ulong *)(pFVar16 + 0x10);
          iVar19 = (int)*(undefined8 *)(*(long *)(pFVar2 + 0x10) + -8);
          if (iVar19 != 0) {
            iVar13 = iVar19 + -1;
            if (uVar9 != 0) {
              iVar12 = (int)*(ulong *)(uVar9 - 8);
              uVar9 = *(ulong *)(uVar9 - 8) & 0xffffffff;
              if (iVar12 != 0) {
                if (iVar12 == iVar19) goto LAB_0010309b;
                if (iVar19 == 0) goto LAB_00102f88;
                iVar13 = iVar19 + -1;
                if (iVar12 != 0) goto LAB_00102f90;
                iVar12 = 0;
                goto LAB_00102e7b;
              }
            }
            iVar12 = (int)uVar9;
            if (iVar13 != 0) goto LAB_00102e7b;
LAB_0010309b:
            cVar7 = String::operator<((String *)(pFVar2 + 0x10),(String *)(pFVar16 + 0x10));
            if (cVar7 == '\0') {
              iVar11 = *(int *)(pFVar16 + 0x18);
              goto LAB_00102982;
            }
            goto LAB_00102d86;
          }
          if (((uVar9 == 0) || (iVar12 = (int)*(undefined8 *)(uVar9 - 8), iVar12 == 0)) ||
             (iVar12 == 1)) goto LAB_0010309b;
LAB_00102f88:
          iVar13 = iVar19;
          if (iVar12 != 0) goto LAB_00102f90;
        }
        else {
LAB_0010297a:
          if (bVar6) {
LAB_00102d86:
            lVar8 = *(long *)(pFVar2 + 0x10);
            pFVar21 = pFVar2;
            goto LAB_00102829;
          }
        }
LAB_00102982:
        bVar6 = iVar11 < *(int *)(pFVar21 + 0x18);
        if (*(int *)(pFVar21 + 0x18) == iVar11) {
          uVar9 = *(ulong *)(pFVar16 + 0x10);
          if (*(long *)(pFVar21 + 0x10) == 0) {
            if (((uVar9 != 0) && (iVar12 = (int)*(undefined8 *)(uVar9 - 8), iVar12 != 0)) &&
               (iVar12 = iVar12 + -1, iVar12 != 0)) {
              iVar11 = 0;
LAB_0010300d:
              bVar6 = iVar11 < iVar12;
              goto LAB_00102991;
            }
          }
          else {
            iVar13 = (int)*(undefined8 *)(*(long *)(pFVar21 + 0x10) + -8);
            if (iVar13 == 0) {
              if (uVar9 != 0) {
                iVar12 = (int)*(undefined8 *)(uVar9 - 8);
                iVar11 = 0;
                if (iVar12 != 0) goto LAB_001030f7;
              }
            }
            else {
              iVar11 = iVar13 + -1;
              if (uVar9 != 0) {
                iVar12 = (int)*(ulong *)(uVar9 - 8);
                uVar9 = *(ulong *)(uVar9 - 8) & 0xffffffff;
                if (iVar12 != 0) {
LAB_001030f7:
                  iVar12 = iVar12 + -1;
                  if (iVar12 != iVar11) {
                    iVar11 = iVar13 + -1 + (uint)(iVar13 == 0);
                    goto LAB_0010300d;
                  }
                  goto LAB_0010305b;
                }
              }
              iVar12 = (int)uVar9;
              if (iVar11 != 0) goto LAB_0010300d;
            }
          }
LAB_0010305b:
          cVar7 = String::operator<((String *)(pFVar21 + 0x10),(String *)(pFVar16 + 0x10));
          if (cVar7 != '\0') goto LAB_00102825;
          goto LAB_00102999;
        }
LAB_00102991:
        if (!bVar6) goto LAB_00102999;
LAB_00102825:
        lVar8 = *(long *)(pFVar16 + 0x10);
        pFVar21 = pFVar16;
        goto LAB_00102829;
      }
LAB_001027f7:
      if (!bVar6) goto LAB_0010296c;
LAB_001027ff:
      iVar12 = *(int *)(pFVar16 + 0x18);
      bVar6 = iVar12 < iVar11;
      if (iVar12 == iVar11) {
        uVar9 = *(ulong *)(pFVar16 + 0x10);
        if (*(long *)(pFVar21 + 0x10) == 0) {
          if (((uVar9 != 0) && (iVar11 = (int)*(undefined8 *)(uVar9 - 8), iVar11 != 0)) &&
             (iVar11 = iVar11 + -1, iVar11 != 0)) {
            iVar13 = 0;
LAB_00102e36:
            bVar6 = iVar13 < iVar11;
            goto LAB_0010280d;
          }
        }
        else {
          iVar19 = (int)*(undefined8 *)(*(long *)(pFVar21 + 0x10) + -8);
          if (iVar19 == 0) {
            if (uVar9 != 0) {
              iVar11 = (int)*(undefined8 *)(uVar9 - 8);
              iVar13 = 0;
              if (iVar11 != 0) goto LAB_00102e23;
            }
          }
          else {
            iVar13 = iVar19 + -1;
            if (uVar9 != 0) {
              iVar11 = (int)*(ulong *)(uVar9 - 8);
              uVar9 = *(ulong *)(uVar9 - 8) & 0xffffffff;
              if (iVar11 != 0) {
LAB_00102e23:
                iVar11 = iVar11 + -1;
                if (iVar11 != iVar13) {
                  iVar13 = iVar19 + -1 + (uint)(iVar19 == 0);
                  goto LAB_00102e36;
                }
                goto LAB_00102f23;
              }
            }
            iVar11 = (int)uVar9;
            if (iVar13 != 0) goto LAB_00102e36;
          }
        }
LAB_00102f23:
        cVar7 = String::operator<((String *)(pFVar21 + 0x10),(String *)(pFVar16 + 0x10));
        if (cVar7 != '\0') goto LAB_00102999;
        iVar12 = *(int *)(pFVar16 + 0x18);
      }
      else {
LAB_0010280d:
        if (bVar6) {
LAB_00102999:
          lVar8 = *(long *)(pFVar21 + 0x10);
          goto LAB_00102829;
        }
      }
      if (*(int *)(pFVar2 + 0x18) == iVar12) {
        lVar15 = *(long *)(pFVar2 + 0x10);
        lVar8 = *(long *)(pFVar16 + 0x10);
        if (lVar15 == 0) {
          if (((lVar8 != 0) && (iVar12 = (int)*(undefined8 *)(lVar8 + -8), iVar12 != 0)) &&
             (iVar12 = iVar12 + -1, iVar12 != 0)) {
            iVar11 = 0;
            goto LAB_0010303b;
          }
LAB_00102ee2:
          cVar7 = String::operator<((String *)(pFVar2 + 0x10),(String *)(pFVar16 + 0x10));
          if (cVar7 != '\0') goto LAB_00102825;
          goto LAB_00102f01;
        }
        iVar13 = (int)*(undefined8 *)(lVar15 + -8);
        if (iVar13 == 0) {
          if (lVar8 != 0) {
            iVar12 = (int)*(undefined8 *)(lVar8 + -8);
            iVar11 = 0;
            if (iVar12 != 0) goto LAB_0010310f;
          }
          goto LAB_00102ee2;
        }
        iVar11 = iVar13 + -1;
        if (lVar8 == 0) {
          if (iVar11 != 0) {
            iVar12 = 0;
            goto LAB_0010303b;
          }
          goto LAB_00102ee2;
        }
        iVar12 = (int)*(undefined8 *)(lVar8 + -8);
        if (iVar12 == 0) {
          iVar12 = 0;
          if (iVar11 == 0) goto LAB_00102ee2;
        }
        else {
LAB_0010310f:
          iVar12 = iVar12 + -1;
          if (iVar12 == iVar11) goto LAB_00102ee2;
          iVar11 = iVar13 + -1 + (uint)(iVar13 == 0);
        }
LAB_0010303b:
        pFVar21 = pFVar16;
        if (iVar11 < iVar12) goto LAB_00102829;
      }
      else {
        if (iVar12 < *(int *)(pFVar2 + 0x18)) goto LAB_00102825;
LAB_00102f01:
        lVar15 = *(long *)(pFVar2 + 0x10);
      }
      lVar8 = lVar15;
      pFVar21 = pFVar2;
LAB_00102829:
      local_98 = 0;
      if (lVar8 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)(pFVar21 + 0x10));
      }
      local_90 = *(ulong *)(pFVar21 + 0x18);
      local_80 = 0;
      lVar8 = lVar20;
      this = (String *)(param_3 + param_1 * 0x30 + 0x10);
      param_2 = param_1;
      if (*(long *)(pFVar21 + 0x28) != 0) {
        CowData<FuzzyTokenMatch>::_ref
                  ((CowData<FuzzyTokenMatch> *)&local_80,(CowData *)(pFVar21 + 0x28));
      }
LAB_001028e2:
      uVar9 = local_90 & 0xffffffff;
      bVar6 = (int)local_90 < *(int *)(this + 8);
      if (*(int *)(this + 8) == (int)local_90) {
        if (*(long *)this == 0) {
          if (((local_98 != 0) && (iVar12 = (int)*(undefined8 *)(local_98 - 8), iVar12 != 0)) &&
             (iVar12 = iVar12 + -1, iVar12 != 0)) {
            iVar11 = 0;
LAB_0010292d:
            bVar6 = iVar11 < iVar12;
            goto LAB_001028c0;
          }
        }
        else {
          iVar13 = (int)*(undefined8 *)(*(long *)this + -8);
          if (iVar13 == 0) {
            if (local_98 != 0) {
              iVar12 = (int)*(undefined8 *)(local_98 - 8);
              iVar11 = 0;
              if (iVar12 != 0) goto LAB_00102d30;
            }
          }
          else {
            iVar11 = iVar13 + -1;
            uVar17 = local_98;
            if (local_98 != 0) {
              iVar12 = (int)*(ulong *)(local_98 - 8);
              uVar17 = *(ulong *)(local_98 - 8) & 0xffffffff;
              if (iVar12 != 0) {
LAB_00102d30:
                iVar12 = iVar12 + -1;
                if (iVar11 != iVar12) {
                  iVar11 = iVar13 + -1 + (uint)(iVar13 == 0);
                  goto LAB_0010292d;
                }
                goto LAB_00102d0f;
              }
            }
            iVar12 = (int)uVar17;
            if (iVar11 != 0) goto LAB_0010292d;
          }
        }
LAB_00102d0f:
        cVar7 = String::operator<(this,(String *)&local_98);
        if (cVar7 == '\0') {
          uVar9 = local_90 & 0xffffffff;
          goto LAB_001029ce;
        }
      }
      else {
LAB_001028c0:
        if (!bVar6) goto LAB_001029ce;
      }
      if (lVar20 + -1 == param_2) {
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                         "bad comparison function; sorting will be broken",0,0);
        uVar9 = local_90 & 0xffffffff;
LAB_001029ce:
        pFVar16 = param_3 + lVar8 * 0x30 + -0x20;
        do {
          lVar8 = lVar8 + -1;
          bVar6 = *(int *)((String *)pFVar16 + 8) < (int)uVar9;
          if (*(int *)((String *)pFVar16 + 8) == (int)uVar9) {
            uVar9 = *(ulong *)pFVar16;
            if (local_98 == 0) {
              if (((uVar9 != 0) && (iVar12 = (int)*(undefined8 *)(uVar9 - 8), iVar12 != 0)) &&
                 (iVar12 = iVar12 + -1, iVar12 != 0)) {
                iVar11 = 0;
LAB_00102a4e:
                bVar6 = iVar11 < iVar12;
                goto LAB_001029f0;
              }
            }
            else {
              iVar13 = (int)*(undefined8 *)(local_98 - 8);
              if (iVar13 == 0) {
                if (uVar9 != 0) {
                  iVar12 = (int)*(undefined8 *)(uVar9 - 8);
                  iVar11 = 0;
                  if (iVar12 != 0) goto LAB_00102c18;
                }
              }
              else {
                iVar11 = iVar13 + -1;
                if (uVar9 != 0) {
                  iVar12 = (int)*(ulong *)(uVar9 - 8);
                  uVar9 = *(ulong *)(uVar9 - 8) & 0xffffffff;
                  if (iVar12 != 0) {
LAB_00102c18:
                    iVar12 = iVar12 + -1;
                    if (iVar11 != iVar12) {
                      iVar11 = iVar13 + -1 + (uint)(iVar13 == 0);
                      goto LAB_00102a4e;
                    }
                    goto LAB_00102a6b;
                  }
                }
                iVar12 = (int)uVar9;
                if (iVar11 != 0) goto LAB_00102a4e;
              }
            }
LAB_00102a6b:
            cVar7 = String::operator<((String *)&local_98,(String *)pFVar16);
            if (cVar7 == '\0') goto joined_r0x00102a83;
          }
          else {
LAB_001029f0:
            if (!bVar6) goto joined_r0x00102a83;
          }
          if (param_1 == lVar8) goto LAB_00102c30;
          uVar9 = local_90 & 0xffffffff;
          pFVar16 = (FuzzySearchResult_conflict *)((String *)pFVar16 + -0x30);
        } while( true );
      }
      goto LAB_001028d6;
    }
LAB_00102f9b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      partial_sort(param_1,param_2,param_2,param_3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00102c30:
  _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                   "bad comparison function; sorting will be broken",0,0);
joined_r0x00102a83:
  if (lVar8 <= param_2) goto LAB_00102c5e;
  uVar3 = *(undefined4 *)((String *)pFVar16 + -0x10);
  local_74 = *(undefined8 *)(this + -0xc);
  uVar4 = *(undefined4 *)(this + -0x10);
  lVar15 = *(long *)this;
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + -0x10) = uVar3;
  uVar18 = *(undefined8 *)(this + 8);
  lVar10 = *(long *)(this + 0x18);
  *(undefined8 *)(this + -0xc) = *(undefined8 *)((String *)pFVar16 + -0xc);
  lVar5 = *(long *)pFVar16;
  *(undefined8 *)(this + 0x18) = 0;
  if (lVar5 != 0) {
    *(long *)this = lVar5;
    *(undefined8 *)pFVar16 = 0;
  }
  lVar5 = *(long *)((String *)pFVar16 + 0x18);
  *(undefined8 *)(this + 8) = *(undefined8 *)((String *)pFVar16 + 8);
  local_78 = uVar4;
  local_68 = lVar15;
  local_60 = uVar18;
  local_50[0] = lVar10;
  if (lVar5 != 0) {
    CowData<FuzzyTokenMatch>::_unref((CowData<FuzzyTokenMatch> *)(this + 0x18));
    *(undefined8 *)(this + 0x18) = *(undefined8 *)((String *)pFVar16 + 0x18);
    *(undefined8 *)((String *)pFVar16 + 0x18) = 0;
  }
  *(undefined4 *)((String *)pFVar16 + -0x10) = uVar4;
  *(undefined8 *)((String *)pFVar16 + -0xc) = local_74;
  lVar5 = *(long *)pFVar16;
  if (lVar15 != lVar5) {
    if (lVar5 != 0) {
      LOCK();
      plVar1 = (long *)(lVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      lVar10 = local_50[0];
      lVar15 = local_68;
      uVar18 = local_60;
      if (*plVar1 == 0) {
        lVar15 = *(long *)pFVar16;
        *(undefined8 *)pFVar16 = 0;
        Memory::free_static((void *)(lVar15 + -0x10),false);
        lVar10 = local_50[0];
        lVar15 = local_68;
        uVar18 = local_60;
      }
    }
    *(long *)pFVar16 = lVar15;
    local_68 = 0;
  }
  *(undefined8 *)((String *)pFVar16 + 8) = uVar18;
  if (*(long *)((String *)pFVar16 + 0x18) != lVar10) {
    CowData<FuzzyTokenMatch>::_unref((CowData<FuzzyTokenMatch> *)((String *)pFVar16 + 0x18));
    local_50[0] = 0;
    *(long *)((String *)pFVar16 + 0x18) = lVar10;
  }
  CowData<FuzzyTokenMatch>::_unref((CowData<FuzzyTokenMatch> *)local_50);
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_68 + -0x10),false);
    }
  }
LAB_001028d6:
  param_2 = param_2 + 1;
  this = this + 0x30;
  goto LAB_001028e2;
LAB_00102c5e:
  CowData<FuzzyTokenMatch>::_unref((CowData<FuzzyTokenMatch> *)&local_80);
  uVar9 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(uVar9 - 0x10),false);
    }
  }
  introsort(param_2,lVar20,param_3,param_4);
  lVar8 = param_2 - param_1;
  if (lVar8 < 0x11) goto LAB_00102e85;
  lVar20 = param_2;
  if (param_4 == 0) goto LAB_00102f9b;
  goto LAB_001027b8;
}



/* CowData<FuzzySearchResult>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<FuzzySearchResult>::_copy_on_write(CowData<FuzzySearchResult> *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 0x30 != 0) {
    uVar7 = lVar1 * 0x30 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar8 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar1;
    puVar9 = puVar5 + 2;
    if (lVar1 != 0) {
      do {
        puVar6 = (undefined4 *)((long)puVar9 + *(long *)this + (-0x10 - (long)puVar5));
        *(undefined4 *)puVar9 = *puVar6;
        uVar2 = *(undefined8 *)(puVar6 + 1);
        puVar9[2] = 0;
        lVar3 = *(long *)(puVar6 + 4);
        *(undefined8 *)((long)puVar9 + 4) = uVar2;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar9 + 2),(CowData *)(puVar6 + 4));
        }
        uVar2 = *(undefined8 *)(puVar6 + 6);
        puVar9[5] = 0;
        lVar3 = *(long *)(puVar6 + 10);
        puVar9[3] = uVar2;
        if (lVar3 != 0) {
          CowData<FuzzyTokenMatch>::_ref
                    ((CowData<FuzzyTokenMatch> *)(puVar9 + 5),(CowData *)(puVar6 + 10));
        }
        lVar8 = lVar8 + 1;
        puVar9 = puVar9 + 6;
      } while (lVar1 != lVar8);
    }
    _unref(this);
    *(undefined8 **)this = puVar5 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* remove_low_scores(Vector<FuzzySearchResult>&, float) */

void remove_low_scores(Vector *param_1,float param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  CowData *pCVar7;
  
  if (*(long *)(param_1 + 8) == 0) {
    iVar6 = -1;
  }
  else {
    iVar6 = (int)*(undefined8 *)(*(long *)(param_1 + 8) + -8) + -1;
  }
  iVar5 = 0;
  CowData<FuzzySearchResult>::_copy_on_write((CowData<FuzzySearchResult> *)(param_1 + 8));
  lVar1 = *(long *)(param_1 + 8);
  pCVar7 = (CowData *)(lVar1 + 0x28 + (long)iVar6 * 0x30);
  for (; iVar5 <= iVar6; iVar6 = iVar6 + -1) {
    iVar3 = *(int *)(pCVar7 + -0x10);
    if (param_2 <= (float)iVar3) {
      if (iVar6 <= iVar5) break;
      puVar4 = (undefined4 *)((long)iVar5 * 0x30 + lVar1);
      while( true ) {
        iVar5 = iVar5 + 1;
        if ((float)(int)puVar4[6] < param_2) break;
        puVar4 = puVar4 + 0xc;
        if (iVar6 == iVar5) goto LAB_001033b5;
      }
      lVar2 = *(long *)(pCVar7 + -0x18);
      *puVar4 = *(undefined4 *)(pCVar7 + -0x28);
      *(undefined8 *)(puVar4 + 1) = *(undefined8 *)(pCVar7 + -0x24);
      if (*(long *)(puVar4 + 4) != lVar2) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 4),pCVar7 + -0x18);
        iVar3 = *(int *)(pCVar7 + -0x10);
      }
      lVar2 = *(long *)pCVar7;
      *(ulong *)(puVar4 + 6) = CONCAT44(*(undefined4 *)(pCVar7 + -0xc),iVar3);
      if (*(long *)(puVar4 + 10) != lVar2) {
        CowData<FuzzyTokenMatch>::_ref((CowData<FuzzyTokenMatch> *)(puVar4 + 10),pCVar7);
      }
    }
    pCVar7 = pCVar7 + -0x30;
  }
LAB_001033b5:
  CowData<FuzzySearchResult>::resize<false>
            ((CowData<FuzzySearchResult> *)(param_1 + 8),(long)(iVar6 + 1));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FuzzySearch::sort_and_filter(Vector<FuzzySearchResult>&) const [clone .part.0] */

void __thiscall FuzzySearch::sort_and_filter(FuzzySearch *this,Vector *param_1)

{
  CowData<FuzzySearchResult> *this_00;
  CowData *pCVar1;
  long *plVar2;
  undefined4 uVar3;
  FuzzySearchResult_conflict *pFVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  FuzzySearchResult_conflict *pFVar14;
  int iVar15;
  FuzzySearchResult_conflict *pFVar16;
  CowData *pCVar17;
  long in_FS_OFFSET;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  CowData *local_c8;
  long local_98;
  undefined8 local_90;
  long local_80;
  undefined4 local_78;
  undefined8 local_74;
  long local_68;
  undefined8 local_60;
  long local_50 [2];
  long local_40;
  
  this_00 = (CowData<FuzzySearchResult> *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  CowData<FuzzySearchResult>::_copy_on_write(this_00);
  lVar12 = *(long *)(param_1 + 8);
  CowData<FuzzySearchResult>::_copy_on_write(this_00);
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 == 0) {
    fVar21 = 0.0;
    lVar9 = 0;
  }
  else {
    fVar21 = (float)*(long *)(lVar9 + -8);
    lVar9 = lVar9 + *(long *)(lVar9 + -8) * 0x30;
  }
  fVar18 = 0.0;
  if (lVar12 == lVar9) {
    fVar21 = (0.0 - 0.0 / fVar21) * __LC20 + 0.0 / fVar21;
  }
  else {
    fVar20 = 0.0;
    do {
      lVar13 = lVar12 + 0x30;
      fVar19 = (float)*(int *)(lVar12 + 0x18);
      fVar20 = fVar20 + fVar19;
      if (fVar18 <= fVar19) {
        fVar18 = fVar19;
      }
      lVar12 = lVar13;
    } while (lVar13 != lVar9);
    fVar21 = (fVar18 - fVar20 / fVar21) * __LC20 + fVar20 / fVar21;
    if (_LC19 < fVar21) {
      fVar21 = _LC19;
    }
  }
  remove_low_scores(param_1,fVar21);
  if (*(long *)(param_1 + 8) == 0) {
    if (-1 < *(int *)(this + 0x18)) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        CowData<FuzzySearchResult>::_copy_on_write(this_00);
        return;
      }
      goto LAB_0010433b;
    }
  }
  else {
    lVar12 = *(long *)(*(long *)(param_1 + 8) + -8);
    if (lVar12 <= *(int *)(this + 0x18)) {
      CowData<FuzzySearchResult>::_copy_on_write(this_00);
      pFVar4 = *(FuzzySearchResult_conflict **)(param_1 + 8);
      if (lVar12 == 0) {
LAB_00103961:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
      }
      else {
        if (lVar12 != 1) {
          lVar13 = 0;
          lVar9 = lVar12;
          do {
            lVar9 = lVar9 >> 1;
            lVar13 = lVar13 + 1;
          } while (lVar9 != 1);
          pFVar14 = pFVar4 + 0x58;
          SortArray<FuzzySearchResult,FuzzySearch::sort_and_filter(Vector<FuzzySearchResult>&)const::FuzzySearchResultComparator,true>
          ::introsort(0,lVar12,pFVar4,lVar13 * 2);
          if (lVar12 < 0x11) {
            lVar9 = 1;
LAB_00103a20:
            uVar3 = *(undefined4 *)((CowData *)pFVar14 + -0x28);
            uVar5 = *(undefined8 *)((CowData *)pFVar14 + -0x24);
            local_98 = 0;
            if (*(long *)((CowData *)pFVar14 + -0x18) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)pFVar14 + -0x18);
            }
            local_90 = *(undefined8 *)((CowData *)pFVar14 + -0x10);
            local_80 = 0;
            if (*(long *)pFVar14 != 0) {
              CowData<FuzzyTokenMatch>::_ref
                        ((CowData<FuzzyTokenMatch> *)&local_80,(CowData *)pFVar14);
            }
            iVar15 = *(int *)(pFVar4 + 0x18);
            bVar6 = (int)local_90 != iVar15 && iVar15 <= (int)local_90;
            if ((int)local_90 == iVar15) {
              uVar11 = *(ulong *)(pFVar4 + 0x10);
              if (local_98 == 0) {
                if (((uVar11 != 0) && (iVar15 = (int)*(undefined8 *)(uVar11 - 8), iVar15 != 0)) &&
                   (iVar15 = iVar15 + -1, iVar15 != 0)) {
                  iVar10 = 0;
LAB_001040ee:
                  bVar6 = iVar10 < iVar15;
                  goto LAB_00103a8c;
                }
              }
              else {
                iVar8 = (int)*(undefined8 *)(local_98 + -8);
                if (iVar8 == 0) {
                  if (uVar11 != 0) {
                    iVar15 = (int)*(undefined8 *)(uVar11 - 8);
                    iVar10 = 0;
                    if (iVar15 != 0) goto LAB_001041c0;
                  }
                }
                else {
                  iVar10 = iVar8 + -1;
                  if (uVar11 != 0) {
                    iVar15 = (int)*(ulong *)(uVar11 - 8);
                    uVar11 = *(ulong *)(uVar11 - 8) & 0xffffffff;
                    if (iVar15 != 0) {
LAB_001041c0:
                      iVar15 = iVar15 + -1;
                      if (iVar15 != iVar10) {
                        iVar10 = iVar8 + -1 + (uint)(iVar8 == 0);
                        goto LAB_001040ee;
                      }
                      goto LAB_00103ba3;
                    }
                  }
                  iVar15 = (int)uVar11;
                  if (iVar10 != 0) goto LAB_001040ee;
                }
              }
LAB_00103ba3:
              cVar7 = String::operator<((String *)&local_98,(String *)(pFVar4 + 0x10));
              if (cVar7 == '\0') goto LAB_00103bb9;
            }
            else {
LAB_00103a8c:
              if (!bVar6) {
LAB_00103bb9:
                local_68 = 0;
                local_78 = uVar3;
                local_74 = uVar5;
                if (local_98 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_98);
                }
                local_50[0] = 0;
                local_60 = local_90;
                if (local_80 == 0) {
                  iVar15 = (int)local_90;
                }
                else {
                  CowData<FuzzyTokenMatch>::_ref
                            ((CowData<FuzzyTokenMatch> *)local_50,(CowData *)&local_80);
                  iVar15 = (int)local_60;
                }
                local_c8 = (CowData *)local_50;
                pCVar17 = (CowData *)pFVar14 + -0x48;
                lVar13 = lVar9;
                do {
                  bVar6 = *(int *)(pCVar17 + 8) < iVar15;
                  if (iVar15 == *(int *)(pCVar17 + 8)) {
                    uVar11 = *(ulong *)pCVar17;
                    if (local_68 == 0) {
                      if (((uVar11 != 0) && (iVar15 = (int)*(undefined8 *)(uVar11 - 8), iVar15 != 0)
                          ) && (iVar15 = iVar15 + -1, iVar15 != 0)) {
                        iVar10 = 0;
LAB_00103cdc:
                        bVar6 = iVar10 < iVar15;
                        goto LAB_00103c38;
                      }
                    }
                    else {
                      iVar8 = (int)*(undefined8 *)(local_68 + -8);
                      if (iVar8 == 0) {
                        if (uVar11 != 0) {
                          iVar15 = (int)*(undefined8 *)(uVar11 - 8);
                          iVar10 = 0;
                          if (iVar15 != 0) goto LAB_00104120;
                        }
                      }
                      else {
                        iVar10 = iVar8 + -1;
                        if (uVar11 != 0) {
                          iVar15 = (int)*(ulong *)(uVar11 - 8);
                          uVar11 = *(ulong *)(uVar11 - 8) & 0xffffffff;
                          if (iVar15 != 0) {
LAB_00104120:
                            iVar15 = iVar15 + -1;
                            if (iVar15 != iVar10) {
                              iVar10 = iVar8 + -1 + (uint)(iVar8 == 0);
                              goto LAB_00103cdc;
                            }
                            goto LAB_00103d03;
                          }
                        }
                        iVar15 = (int)uVar11;
                        if (iVar10 != 0) goto LAB_00103cdc;
                      }
                    }
LAB_00103d03:
                    cVar7 = String::operator<((String *)&local_68,(String *)pCVar17);
                    if (cVar7 == '\0') goto LAB_00103d1d;
                  }
                  else {
LAB_00103c38:
                    if (!bVar6) goto LAB_00103d1d;
                  }
                  if (lVar13 == 1) goto LAB_00104194;
                  *(undefined4 *)(pCVar17 + 0x20) = *(undefined4 *)(pCVar17 + -0x10);
                  *(undefined8 *)(pCVar17 + 0x24) = *(undefined8 *)(pCVar17 + -0xc);
                  if (*(long *)(pCVar17 + 0x30) != *(long *)pCVar17) {
                    CowData<char32_t>::_ref((CowData<char32_t> *)(pCVar17 + 0x30),pCVar17);
                  }
                  *(undefined8 *)(pCVar17 + 0x38) = *(undefined8 *)(pCVar17 + 8);
                  if (*(long *)(pCVar17 + 0x48) != *(long *)(pCVar17 + 0x18)) {
                    CowData<FuzzyTokenMatch>::_ref
                              ((CowData<FuzzyTokenMatch> *)(pCVar17 + 0x48),pCVar17 + 0x18);
                  }
                  pCVar17 = pCVar17 + -0x30;
                  lVar13 = lVar13 + -1;
                  iVar15 = (int)local_60;
                } while( true );
              }
            }
            pCVar17 = (CowData *)pFVar14;
            do {
              *(undefined4 *)((CowData<FuzzyTokenMatch> *)pCVar17 + -0x28) =
                   *(undefined4 *)((CowData<FuzzyTokenMatch> *)pCVar17 + -0x58);
              *(undefined8 *)((CowData<FuzzyTokenMatch> *)pCVar17 + -0x24) =
                   *(undefined8 *)((CowData<FuzzyTokenMatch> *)pCVar17 + -0x54);
              if (*(long *)((CowData<FuzzyTokenMatch> *)pCVar17 + -0x18) !=
                  *(long *)((CowData<FuzzyTokenMatch> *)pCVar17 + -0x48)) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)((CowData<FuzzyTokenMatch> *)pCVar17 + -0x18),
                           (CowData *)((CowData<FuzzyTokenMatch> *)pCVar17 + -0x48));
              }
              *(undefined8 *)((CowData<FuzzyTokenMatch> *)pCVar17 + -0x10) =
                   *(undefined8 *)((CowData<FuzzyTokenMatch> *)pCVar17 + -0x40);
              pCVar1 = (CowData *)((CowData<FuzzyTokenMatch> *)pCVar17 + -0x30);
              if (*(long *)pCVar17 != *(long *)((CowData<FuzzyTokenMatch> *)pCVar17 + -0x30)) {
                CowData<FuzzyTokenMatch>::_ref((CowData<FuzzyTokenMatch> *)pCVar17,pCVar1);
              }
              pCVar17 = pCVar1;
            } while (pCVar1 != (CowData *)(pFVar4 + 0x28));
            *(undefined4 *)pFVar4 = uVar3;
            *(undefined8 *)(pFVar4 + 4) = uVar5;
            if (*(long *)(pFVar4 + 0x10) != local_98) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(pFVar4 + 0x10),(CowData *)&local_98);
            }
            *(undefined8 *)(pFVar4 + 0x18) = local_90;
            if (*(long *)(pFVar4 + 0x28) != local_80) {
              CowData<FuzzyTokenMatch>::_ref
                        ((CowData<FuzzyTokenMatch> *)(pFVar4 + 0x28),(CowData *)&local_80);
            }
            goto LAB_00103b3c;
          }
          lVar9 = 1;
LAB_00103620:
          uVar3 = *(undefined4 *)((CowData *)pFVar14 + -0x28);
          uVar5 = *(undefined8 *)((CowData *)pFVar14 + -0x24);
          local_98 = 0;
          if (*(long *)((CowData *)pFVar14 + -0x18) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)pFVar14 + -0x18);
          }
          local_90 = *(undefined8 *)((CowData *)pFVar14 + -0x10);
          local_80 = 0;
          if (*(long *)pFVar14 != 0) {
            CowData<FuzzyTokenMatch>::_ref((CowData<FuzzyTokenMatch> *)&local_80,(CowData *)pFVar14)
            ;
          }
          bVar6 = *(int *)(pFVar4 + 0x18) < (int)local_90;
          if (*(int *)(pFVar4 + 0x18) == (int)local_90) {
            uVar11 = *(ulong *)(pFVar4 + 0x10);
            if (local_98 == 0) {
              if (((uVar11 != 0) && (iVar15 = (int)*(undefined8 *)(uVar11 - 8), iVar15 != 0)) &&
                 (iVar15 = iVar15 + -1, iVar15 != 0)) {
                iVar10 = 0;
LAB_001040a6:
                bVar6 = iVar10 < iVar15;
                goto LAB_0010368a;
              }
            }
            else {
              iVar8 = (int)*(undefined8 *)(local_98 + -8);
              if (iVar8 == 0) {
                if (uVar11 != 0) {
                  iVar15 = (int)*(undefined8 *)(uVar11 - 8);
                  iVar10 = 0;
                  if (iVar15 != 0) goto LAB_001041e0;
                }
              }
              else {
                iVar10 = iVar8 + -1;
                if (uVar11 != 0) {
                  iVar15 = (int)*(ulong *)(uVar11 - 8);
                  uVar11 = *(ulong *)(uVar11 - 8) & 0xffffffff;
                  if (iVar15 != 0) {
LAB_001041e0:
                    iVar15 = iVar15 + -1;
                    if (iVar15 != iVar10) {
                      iVar10 = iVar8 + -1 + (uint)(iVar8 == 0);
                      goto LAB_001040a6;
                    }
                    goto LAB_00103dd3;
                  }
                }
                iVar15 = (int)uVar11;
                if (iVar10 != 0) goto LAB_001040a6;
              }
            }
LAB_00103dd3:
            cVar7 = String::operator<((String *)&local_98,(String *)(pFVar4 + 0x10));
            if (cVar7 == '\0') goto LAB_00103de9;
          }
          else {
LAB_0010368a:
            if (!bVar6) {
LAB_00103de9:
              local_68 = 0;
              local_78 = uVar3;
              local_74 = uVar5;
              if (local_98 != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_98);
              }
              local_50[0] = 0;
              local_60 = local_90;
              if (local_80 != 0) {
                CowData<FuzzyTokenMatch>::_ref
                          ((CowData<FuzzyTokenMatch> *)local_50,(CowData *)&local_80);
              }
              pCVar17 = (CowData *)pFVar14 + -0x48;
              lVar13 = lVar9;
              do {
                if (*(int *)(pCVar17 + 8) == (int)local_60) {
                  uVar11 = *(ulong *)pCVar17;
                  if (local_68 == 0) {
                    if (((uVar11 != 0) && (iVar15 = (int)*(undefined8 *)(uVar11 - 8), iVar15 != 0))
                       && (iVar15 = iVar15 + -1, iVar15 != 0)) {
                      iVar10 = 0;
LAB_00103f12:
                      if (iVar10 < iVar15) goto LAB_00103e66;
                      goto LAB_00103f20;
                    }
                  }
                  else {
                    iVar8 = (int)*(undefined8 *)(local_68 + -8);
                    if (iVar8 == 0) {
                      if (uVar11 != 0) {
                        iVar15 = (int)*(undefined8 *)(uVar11 - 8);
                        iVar10 = 0;
                        if (iVar15 != 0) goto LAB_00104100;
                      }
                    }
                    else {
                      iVar10 = iVar8 + -1;
                      if (uVar11 != 0) {
                        iVar15 = (int)*(ulong *)(uVar11 - 8);
                        uVar11 = *(ulong *)(uVar11 - 8) & 0xffffffff;
                        if (iVar15 != 0) {
LAB_00104100:
                          iVar15 = iVar15 + -1;
                          if (iVar15 != iVar10) {
                            iVar10 = iVar8 + -1 + (uint)(iVar8 == 0);
                            goto LAB_00103f12;
                          }
                          goto LAB_00104043;
                        }
                      }
                      iVar15 = (int)uVar11;
                      if (iVar10 != 0) goto LAB_00103f12;
                    }
                  }
LAB_00104043:
                  cVar7 = String::operator<((String *)&local_68,(String *)pCVar17);
                  if (cVar7 == '\0') goto LAB_00103f20;
                }
                else if ((int)local_60 <= *(int *)(pCVar17 + 8)) goto LAB_00103f20;
LAB_00103e66:
                if (lVar13 == 1) goto LAB_00104165;
                *(undefined4 *)(pCVar17 + 0x20) = *(undefined4 *)(pCVar17 + -0x10);
                *(undefined8 *)(pCVar17 + 0x24) = *(undefined8 *)(pCVar17 + -0xc);
                if (*(long *)(pCVar17 + 0x30) != *(long *)pCVar17) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)(pCVar17 + 0x30),pCVar17);
                }
                *(undefined8 *)(pCVar17 + 0x38) = *(undefined8 *)(pCVar17 + 8);
                if (*(long *)(pCVar17 + 0x48) != *(long *)(pCVar17 + 0x18)) {
                  CowData<FuzzyTokenMatch>::_ref
                            ((CowData<FuzzyTokenMatch> *)(pCVar17 + 0x48),pCVar17 + 0x18);
                }
                pCVar17 = pCVar17 + -0x30;
                lVar13 = lVar13 + -1;
              } while( true );
            }
          }
          pCVar17 = (CowData *)pFVar14;
          do {
            *(undefined4 *)((CowData<FuzzyTokenMatch> *)pCVar17 + -0x28) =
                 *(undefined4 *)((CowData<FuzzyTokenMatch> *)pCVar17 + -0x58);
            *(undefined8 *)((CowData<FuzzyTokenMatch> *)pCVar17 + -0x24) =
                 *(undefined8 *)((CowData<FuzzyTokenMatch> *)pCVar17 + -0x54);
            if (*(long *)((CowData<FuzzyTokenMatch> *)pCVar17 + -0x18) !=
                *(long *)((CowData<FuzzyTokenMatch> *)pCVar17 + -0x48)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)((CowData<FuzzyTokenMatch> *)pCVar17 + -0x18),
                         (CowData *)((CowData<FuzzyTokenMatch> *)pCVar17 + -0x48));
            }
            *(undefined8 *)((CowData<FuzzyTokenMatch> *)pCVar17 + -0x10) =
                 *(undefined8 *)((CowData<FuzzyTokenMatch> *)pCVar17 + -0x40);
            pCVar1 = (CowData *)((CowData<FuzzyTokenMatch> *)pCVar17 + -0x30);
            if (*(long *)pCVar17 != *(long *)((CowData<FuzzyTokenMatch> *)pCVar17 + -0x30)) {
              CowData<FuzzyTokenMatch>::_ref((CowData<FuzzyTokenMatch> *)pCVar17,pCVar1);
            }
            pCVar17 = pCVar1;
          } while (pCVar1 != (CowData *)(pFVar4 + 0x28));
          *(undefined4 *)pFVar4 = uVar3;
          *(undefined8 *)(pFVar4 + 4) = uVar5;
          if (*(long *)(pFVar4 + 0x10) != local_98) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(pFVar4 + 0x10),(CowData *)&local_98);
          }
          *(undefined8 *)(pFVar4 + 0x18) = local_90;
          if (*(long *)(pFVar4 + 0x28) != local_80) {
            CowData<FuzzyTokenMatch>::_ref
                      ((CowData<FuzzyTokenMatch> *)(pFVar4 + 0x28),(CowData *)&local_80);
          }
          goto LAB_00103737;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          SortArray<FuzzySearchResult,FuzzySearch::sort_and_filter(Vector<FuzzySearchResult>&)const::FuzzySearchResultComparator,true>
          ::introsort(0,1,pFVar4,0);
          return;
        }
      }
      goto LAB_0010433b;
    }
  }
  CowData<FuzzySearchResult>::_copy_on_write(this_00);
  pFVar4 = *(FuzzySearchResult_conflict **)(param_1 + 8);
  if (pFVar4 == (FuzzySearchResult_conflict *)0x0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(pFVar4 + -8);
  }
  SortArray<FuzzySearchResult,FuzzySearch::sort_and_filter(Vector<FuzzySearchResult>&)const::FuzzySearchResultComparator,true>
  ::partial_sort(0,lVar12,(long)*(int *)(this + 0x18),pFVar4);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    CowData<FuzzySearchResult>::resize<false>(this_00,(long)*(int *)(this + 0x18));
    return;
  }
LAB_0010433b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00104194:
  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                   "bad comparison function; sorting will be broken",0,0);
LAB_00103d1d:
  pFVar16 = pFVar4 + lVar13 * 0x30;
  *(undefined4 *)pFVar16 = local_78;
  *(undefined8 *)(pFVar16 + 4) = local_74;
  if (local_68 != *(long *)(pFVar16 + 0x10)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(pFVar16 + 0x10),(CowData *)&local_68);
  }
  *(undefined8 *)(pFVar16 + 0x18) = local_60;
  if (*(long *)(pFVar16 + 0x28) != local_50[0]) {
    CowData<FuzzyTokenMatch>::_ref((CowData<FuzzyTokenMatch> *)(pFVar16 + 0x28),local_c8);
  }
  CowData<FuzzyTokenMatch>::_unref((CowData<FuzzyTokenMatch> *)local_c8);
  lVar13 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar2 = (long *)(local_68 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
LAB_00103b3c:
  CowData<FuzzyTokenMatch>::_unref((CowData<FuzzyTokenMatch> *)&local_80);
  lVar13 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar2 = (long *)(local_98 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  lVar9 = lVar9 + 1;
  pFVar14 = (FuzzySearchResult_conflict *)((CowData *)pFVar14 + 0x30);
  if (lVar12 == lVar9) goto LAB_00103961;
  goto LAB_00103a20;
LAB_00104165:
  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                   "bad comparison function; sorting will be broken",0,0);
LAB_00103f20:
  pFVar16 = pFVar4 + lVar13 * 0x30;
  *(undefined4 *)pFVar16 = local_78;
  *(undefined8 *)(pFVar16 + 4) = local_74;
  if (*(long *)(pFVar16 + 0x10) != local_68) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(pFVar16 + 0x10),(CowData *)&local_68);
  }
  *(undefined8 *)(pFVar16 + 0x18) = local_60;
  if (*(long *)(pFVar16 + 0x28) != local_50[0]) {
    CowData<FuzzyTokenMatch>::_ref((CowData<FuzzyTokenMatch> *)(pFVar16 + 0x28),(CowData *)local_50)
    ;
  }
  CowData<FuzzyTokenMatch>::_unref((CowData<FuzzyTokenMatch> *)local_50);
  lVar13 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar2 = (long *)(local_68 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
LAB_00103737:
  CowData<FuzzyTokenMatch>::_unref((CowData<FuzzyTokenMatch> *)&local_80);
  lVar13 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar2 = (long *)(local_98 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  lVar9 = lVar9 + 1;
  pFVar14 = (FuzzySearchResult_conflict *)((CowData *)pFVar14 + 0x30);
  if (lVar9 == 0x10) goto code_r0x0010377c;
  goto LAB_00103620;
code_r0x0010377c:
  pFVar14 = pFVar4 + 0x328;
  lVar9 = 0x10;
LAB_001037b0:
  local_78 = *(undefined4 *)((CowData *)pFVar14 + -0x28);
  local_74 = *(undefined8 *)((CowData *)pFVar14 + -0x24);
  local_68 = 0;
  if (*(long *)((CowData *)pFVar14 + -0x18) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)pFVar14 + -0x18);
  }
  local_60 = *(undefined8 *)((CowData *)pFVar14 + -0x10);
  local_50[0] = 0;
  if (*(long *)pFVar14 != 0) {
    CowData<FuzzyTokenMatch>::_ref((CowData<FuzzyTokenMatch> *)local_50,(CowData *)pFVar14);
  }
  pCVar17 = (CowData *)pFVar14 + -0x48;
  lVar13 = lVar9;
  do {
    if (*(int *)(pCVar17 + 8) == (int)local_60) {
      uVar11 = *(ulong *)pCVar17;
      if (local_68 == 0) {
        if (((uVar11 != 0) && (iVar15 = (int)*(undefined8 *)(uVar11 - 8), iVar15 != 0)) &&
           (iVar15 = iVar15 + -1, iVar15 != 0)) {
          iVar10 = 0;
LAB_001038bd:
          if (iVar10 < iVar15) goto LAB_0010381e;
          goto LAB_001038c8;
        }
      }
      else {
        iVar8 = (int)*(undefined8 *)(local_68 + -8);
        if (iVar8 == 0) {
          if (uVar11 != 0) {
            iVar15 = (int)*(undefined8 *)(uVar11 - 8);
            iVar10 = 0;
            if (iVar15 != 0) goto LAB_00103ff0;
          }
        }
        else {
          iVar10 = iVar8 + -1;
          if (uVar11 != 0) {
            iVar15 = (int)*(ulong *)(uVar11 - 8);
            uVar11 = *(ulong *)(uVar11 - 8) & 0xffffffff;
            if (iVar15 != 0) {
LAB_00103ff0:
              iVar15 = iVar15 + -1;
              if (iVar10 != iVar15) {
                iVar10 = iVar8 + -1 + (uint)(iVar8 == 0);
                goto LAB_001038bd;
              }
              goto LAB_00103fcf;
            }
          }
          iVar15 = (int)uVar11;
          if (iVar10 != 0) goto LAB_001038bd;
        }
      }
LAB_00103fcf:
      cVar7 = String::operator<((String *)&local_68,(String *)pCVar17);
      if (cVar7 == '\0') goto LAB_001038c8;
    }
    else if ((int)local_60 <= *(int *)(pCVar17 + 8)) goto LAB_001038c8;
LAB_0010381e:
    if (lVar13 == 1) break;
    *(undefined4 *)(pCVar17 + 0x20) = *(undefined4 *)(pCVar17 + -0x10);
    *(undefined8 *)(pCVar17 + 0x24) = *(undefined8 *)(pCVar17 + -0xc);
    if (*(long *)(pCVar17 + 0x30) != *(long *)pCVar17) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pCVar17 + 0x30),pCVar17);
    }
    *(undefined8 *)(pCVar17 + 0x38) = *(undefined8 *)(pCVar17 + 8);
    if (*(long *)(pCVar17 + 0x48) != *(long *)(pCVar17 + 0x18)) {
      CowData<FuzzyTokenMatch>::_ref((CowData<FuzzyTokenMatch> *)(pCVar17 + 0x48),pCVar17 + 0x18);
    }
    pCVar17 = pCVar17 + -0x30;
    lVar13 = lVar13 + -1;
  } while( true );
  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                   "bad comparison function; sorting will be broken",0,0);
LAB_001038c8:
  pFVar16 = pFVar4 + lVar13 * 0x30;
  *(undefined4 *)pFVar16 = local_78;
  *(undefined8 *)(pFVar16 + 4) = local_74;
  if (*(long *)(pFVar16 + 0x10) != local_68) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(pFVar16 + 0x10),(CowData *)&local_68);
  }
  *(undefined8 *)(pFVar16 + 0x18) = local_60;
  if (*(long *)(pFVar16 + 0x28) != local_50[0]) {
    CowData<FuzzyTokenMatch>::_ref((CowData<FuzzyTokenMatch> *)(pFVar16 + 0x28),(CowData *)local_50)
    ;
  }
  CowData<FuzzyTokenMatch>::_unref((CowData<FuzzyTokenMatch> *)local_50);
  lVar13 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar2 = (long *)(local_68 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  lVar9 = lVar9 + 1;
  pFVar14 = (FuzzySearchResult_conflict *)((CowData *)pFVar14 + 0x30);
  if (lVar12 == lVar9) goto LAB_00103961;
  goto LAB_001037b0;
}



/* FuzzySearch::sort_and_filter(Vector<FuzzySearchResult>&) const */

void __thiscall FuzzySearch::sort_and_filter(FuzzySearch *this,Vector *param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    sort_and_filter(this,param_1);
    return;
  }
  return;
}



/* CowData<String>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<String>::_copy_on_write(CowData<String> *this)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  CowData<char32_t> *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar7 = lVar2 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        lVar3 = *(long *)this;
        *(undefined8 *)this_00 = 0;
        pCVar1 = (CowData *)(lVar3 + lVar6 * 8);
        if (*(long *)pCVar1 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar1);
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 8;
      } while (lVar2 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<FuzzySearchToken>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<FuzzySearchToken>::_copy_on_write(CowData<FuzzySearchToken> *this)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar2 * 0x10 != 0) {
    uVar7 = lVar2 * 0x10 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar9 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar2;
  puVar8 = puVar5 + 2;
  if (lVar2 != 0) {
    do {
      puVar6 = (undefined4 *)(lVar9 * 0x10 + *(long *)this);
      uVar1 = *puVar6;
      puVar8[1] = 0;
      lVar3 = *(long *)(puVar6 + 2);
      *(undefined4 *)puVar8 = uVar1;
      if (lVar3 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar8 + 1),(CowData *)(puVar6 + 2));
      }
      lVar9 = lVar9 + 1;
      puVar8 = puVar8 + 2;
    } while (lVar2 != lVar9);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* FuzzySearch::set_query(String const&) */

void __thiscall FuzzySearch::set_query(FuzzySearch *this,String *param_1)

{
  CowData<FuzzySearchToken> *this_00;
  FuzzySearchToken_conflict *pFVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  CowData *pCVar16;
  long *plVar17;
  FuzzySearchToken_conflict *pFVar18;
  FuzzySearchToken_conflict *pFVar19;
  long in_FS_OFFSET;
  bool bVar20;
  int local_68 [2];
  long *local_60;
  int local_58;
  long *local_50 [2];
  long local_40;
  
  this_00 = (CowData<FuzzySearchToken> *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 8) != 0) && (*(long *)(*(long *)(this + 8) + -8) != 0)) {
    CowData<FuzzySearchToken>::_unref(this_00);
  }
  String::split((char *)local_68,SUB81(param_1,0),0x10605d);
  CowData<String>::_copy_on_write((CowData<String> *)&local_60);
  plVar12 = local_60;
  CowData<String>::_copy_on_write((CowData<String> *)&local_60);
  plVar10 = local_60;
  if (local_60 != (long *)0x0) {
    plVar10 = local_60 + local_60[-1];
  }
  for (; plVar12 != plVar10; plVar12 = plVar12 + 1) {
    lVar6 = *(long *)(this + 8);
    if (lVar6 == 0) {
      local_58 = 0;
    }
    else {
      local_58 = *(int *)(lVar6 + -8);
    }
    plVar17 = (long *)(*plVar12 + -0x10);
    if (*plVar12 == 0) {
      local_50[0] = (long *)0x0;
      plVar17 = (long *)0x0;
      lVar14 = 0;
      if (lVar6 != 0) goto LAB_001046dd;
LAB_001047ba:
      plVar13 = local_50[0];
      iVar4 = CowData<FuzzySearchToken>::resize<false>(this_00,1);
      plVar17 = (long *)lVar14;
      if (iVar4 == 0) goto LAB_001046f5;
LAB_001047d0:
      _err_print_error("push_back","./core/templates/vector.h",0x142,
                       "Condition \"err\" is true. Returning: true",0,0);
    }
    else {
      do {
        lVar6 = *plVar17;
        if (lVar6 == 0) goto LAB_001048d0;
        LOCK();
        lVar14 = *plVar17;
        bVar20 = lVar6 == lVar14;
        if (bVar20) {
          *plVar17 = lVar6 + 1;
          lVar14 = lVar6;
        }
        UNLOCK();
      } while (!bVar20);
      if (lVar14 == -1) {
LAB_001048d0:
        lVar6 = *(long *)(this + 8);
        plVar17 = (long *)0x0;
        local_50[0] = (long *)0x0;
      }
      else {
        plVar17 = (long *)*plVar12;
        local_50[0] = (long *)0x0;
        if (plVar17 == (long *)0x0) {
          lVar6 = *(long *)(this + 8);
        }
        else {
          plVar13 = plVar17 + -2;
          do {
            lVar6 = *plVar13;
            if (lVar6 == 0) goto LAB_00104800;
            LOCK();
            lVar14 = *plVar13;
            bVar20 = lVar6 == lVar14;
            if (bVar20) {
              *plVar13 = lVar6 + 1;
              lVar14 = lVar6;
            }
            UNLOCK();
          } while (!bVar20);
          if (lVar14 == -1) {
LAB_00104800:
            lVar6 = *(long *)(this + 8);
          }
          else {
            lVar6 = *(long *)(this + 8);
            local_50[0] = plVar17;
          }
        }
      }
      lVar14 = (long)plVar17;
      if (lVar6 == 0) goto LAB_001047ba;
LAB_001046dd:
      plVar13 = local_50[0];
      iVar4 = CowData<FuzzySearchToken>::resize<false>(this_00,*(long *)(lVar6 + -8) + 1);
      if (iVar4 != 0) goto LAB_001047d0;
LAB_001046f5:
      if (*(long *)(this + 8) == 0) {
        lVar14 = -1;
        lVar6 = 0;
LAB_0010487a:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar14,lVar6,"p_index","size()","",false,
                   false);
      }
      else {
        lVar6 = *(long *)(*(long *)(this + 8) + -8);
        lVar14 = lVar6 + -1;
        if (lVar14 < 0) goto LAB_0010487a;
        CowData<FuzzySearchToken>::_copy_on_write(this_00);
        piVar11 = (int *)(lVar14 * 0x10 + *(long *)(this + 8));
        *piVar11 = local_58;
        if (plVar13 != *(long **)(piVar11 + 2)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(piVar11 + 2),(CowData *)local_50);
        }
      }
    }
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar13 = plVar13 + -2;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (*plVar13 == 0) {
        Memory::free_static(local_50[0] + -2,false);
      }
    }
    if (plVar17 != (long *)0x0) {
      plVar17 = (long *)((long)plVar17 + -0x10);
      LOCK();
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
        Memory::free_static(plVar17,false);
      }
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_60);
  bVar3 = String::is_lowercase();
  this[0x14] = (FuzzySearch)(bVar3 ^ 1);
  if ((*(long *)(this + 8) == 0) || (lVar6 = *(long *)(*(long *)(this + 8) + -8), lVar6 == 0)) {
LAB_0010484a:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    CowData<FuzzySearchToken>::_copy_on_write(this_00);
    pFVar1 = *(FuzzySearchToken_conflict **)(this + 8);
    if (lVar6 != 1) {
      lVar9 = 0;
      lVar14 = lVar6;
      do {
        lVar14 = lVar14 >> 1;
        lVar9 = lVar9 + 1;
      } while (lVar14 != 1);
      SortArray<FuzzySearchToken,FuzzySearch::set_query(String_const&)::TokenComparator,true>::
      introsort(0,lVar6,pFVar1,lVar9 * 2);
      pFVar19 = pFVar1 + 0x18;
      if (lVar6 < 0x11) {
        lVar14 = 1;
LAB_00104b88:
        iVar4 = *(int *)(pFVar19 + -8);
        local_60 = (long *)0x0;
        plVar10 = (long *)(*(long *)pFVar19 + -0x10);
        pCVar16 = (CowData *)pFVar19;
        lVar9 = lVar14;
        local_68[0] = iVar4;
        if (*(long *)pFVar19 == 0) {
          plVar10 = *(long **)(pFVar1 + 8);
LAB_00104cb4:
          plVar12 = plVar10;
          if (plVar10 == (long *)0x0) {
LAB_00104cd0:
            bVar20 = iVar4 < *(int *)pFVar1;
          }
          else {
            iVar5 = (int)plVar10[-1];
            if (iVar5 == 0) {
              plVar12 = (long *)0x0;
              goto LAB_00104cd0;
            }
            plVar12 = (long *)0x0;
            iVar8 = 0;
            if (iVar5 == 1) {
              plVar12 = (long *)0x0;
              goto LAB_00104cd0;
            }
LAB_00104f51:
            bVar20 = iVar5 <= iVar8;
          }
          if (!bVar20) {
            local_50[0] = (long *)0x0;
            local_58 = iVar4;
            if (plVar12 == (long *)0x0) goto LAB_001050a4;
LAB_00105016:
            local_50[0] = (long *)0x0;
            plVar12 = plVar12 + -2;
            do {
              lVar2 = *plVar12;
              if (lVar2 == 0) goto LAB_0010525f;
              LOCK();
              lVar7 = *plVar12;
              bVar20 = lVar2 == lVar7;
              if (bVar20) {
                *plVar12 = lVar2 + 1;
                lVar7 = lVar2;
              }
              UNLOCK();
            } while (!bVar20);
            if (lVar7 == -1) {
LAB_0010525f:
              plVar12 = (long *)0x0;
              local_58 = iVar4;
            }
            else {
              local_50[0] = local_60;
              local_58 = iVar4;
              plVar12 = local_60;
            }
LAB_001050a4:
            do {
              lVar2 = *(long *)((CowData<char32_t> *)pCVar16 + -0x10);
              if (plVar12 == (long *)0x0) {
                if (((lVar2 != 0) && (iVar15 = (int)*(undefined8 *)(lVar2 + -8), iVar15 != 0)) &&
                   (iVar15 = iVar15 + -1, iVar15 != 0)) {
                  iVar8 = 0;
                  goto LAB_0010507c;
                }
LAB_001050cc:
                if (*(int *)((CowData<char32_t> *)pCVar16 + -0x18) <= iVar4) goto LAB_00105124;
              }
              else {
                iVar5 = (int)plVar12[-1];
                if (iVar5 == 0) {
                  if (lVar2 != 0) {
                    iVar15 = (int)*(undefined8 *)(lVar2 + -8);
                    iVar8 = 0;
                    if (iVar15 != 0) goto LAB_001050e0;
                  }
                  goto LAB_001050cc;
                }
                iVar8 = iVar5 + -1;
                if (lVar2 == 0) {
                  iVar15 = 0;
                  if (iVar8 != 0) goto LAB_0010507c;
                  goto LAB_001050cc;
                }
                iVar15 = (int)*(undefined8 *)(lVar2 + -8);
                if (iVar15 != 0) {
LAB_001050e0:
                  iVar15 = iVar15 + -1;
                  if (iVar8 != iVar15) {
                    iVar8 = iVar5 + -1 + (uint)(iVar5 == 0);
                    goto LAB_0010507c;
                  }
                  goto LAB_001050cc;
                }
                iVar15 = 0;
                if (iVar8 == 0) goto LAB_001050cc;
LAB_0010507c:
                if (iVar8 <= iVar15) goto LAB_00105124;
              }
              if (lVar9 == 1) goto LAB_001050f8;
              *(undefined4 *)((CowData<char32_t> *)pCVar16 + -8) =
                   *(undefined4 *)((CowData<char32_t> *)pCVar16 + -0x18);
              if (*(long *)pCVar16 != lVar2) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)pCVar16,
                           (CowData *)((CowData<char32_t> *)pCVar16 + -0x10));
              }
              pCVar16 = (CowData *)((CowData<char32_t> *)pCVar16 + -0x10);
              lVar9 = lVar9 + -1;
            } while( true );
          }
        }
        else {
          do {
            lVar2 = *plVar10;
            if (lVar2 == 0) goto LAB_00104bd5;
            LOCK();
            lVar7 = *plVar10;
            bVar20 = lVar2 == lVar7;
            if (bVar20) {
              *plVar10 = lVar2 + 1;
              lVar7 = lVar2;
            }
            UNLOCK();
          } while (!bVar20);
          if (lVar7 != -1) {
            local_60 = *(long **)pFVar19;
          }
LAB_00104bd5:
          plVar10 = *(long **)(pFVar1 + 8);
          if (local_60 == (long *)0x0) goto LAB_00104cb4;
          iVar15 = (int)local_60[-1];
          plVar12 = local_60;
          if (iVar15 == 0) {
            if (plVar10 != (long *)0x0) {
              iVar5 = (int)plVar10[-1];
              iVar8 = 0;
              if (iVar5 != 0) goto LAB_00104f2f;
            }
            goto LAB_00104cd0;
          }
          iVar8 = iVar15 + -1;
          if (plVar10 != (long *)0x0) {
            iVar5 = (int)plVar10[-1];
            if (iVar5 != 0) {
LAB_00104f2f:
              if (iVar5 + -1 == iVar8) goto LAB_00104cd0;
              if (iVar15 == 0) {
                iVar8 = 0;
                if (iVar5 == 0) goto LAB_00105016;
              }
              else {
                iVar8 = iVar15 + -1;
                if (iVar5 == 0) goto LAB_00104c17;
              }
              goto LAB_00104f51;
            }
            if (iVar8 != 0) {
LAB_00104c17:
              bVar20 = iVar15 == 1;
              goto LAB_00104c19;
            }
            goto LAB_00104cd0;
          }
          bVar20 = iVar8 == 0;
          if (bVar20) goto LAB_00104cd0;
LAB_00104c19:
          if (bVar20 || iVar15 + -1 < 0) goto LAB_00105016;
        }
        do {
          *(undefined4 *)((CowData<char32_t> *)pCVar16 + -8) =
               *(undefined4 *)((CowData<char32_t> *)pCVar16 + -0x18);
          if (*(long *)pCVar16 != *(long *)((CowData<char32_t> *)pCVar16 + -0x10)) {
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)pCVar16,
                       (CowData *)((CowData<char32_t> *)pCVar16 + -0x10));
          }
          lVar9 = lVar9 + -1;
          pCVar16 = (CowData *)((CowData<char32_t> *)pCVar16 + -0x10);
        } while (lVar9 != 0);
        *(int *)pFVar1 = iVar4;
        if (plVar12 != *(long **)(pFVar1 + 8)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(pFVar1 + 8),(CowData *)&local_60);
        }
        goto LAB_00104c74;
      }
      lVar14 = 1;
LAB_00104958:
      iVar4 = *(int *)(pFVar19 + -8);
      local_60 = (long *)0x0;
      plVar10 = (long *)(*(long *)pFVar19 + -0x10);
      pCVar16 = (CowData *)pFVar19;
      lVar9 = lVar14;
      local_68[0] = iVar4;
      if (*(long *)pFVar19 == 0) {
        plVar10 = *(long **)(pFVar1 + 8);
LAB_00104fb4:
        plVar12 = plVar10;
        if (plVar10 == (long *)0x0) {
LAB_00104ee7:
          bVar20 = iVar4 < *(int *)pFVar1;
        }
        else {
          iVar5 = (int)plVar10[-1];
          if (iVar5 == 0) {
LAB_00104fd1:
            plVar12 = (long *)0x0;
            goto LAB_00104ee7;
          }
          plVar12 = (long *)0x0;
          iVar8 = 0;
          if (iVar5 == 1) goto LAB_00104fd1;
LAB_00104f7b:
          bVar20 = iVar5 <= iVar8;
        }
        if (!bVar20) {
          local_50[0] = (long *)0x0;
          local_58 = iVar4;
          if (plVar12 == (long *)0x0) goto LAB_00104e80;
LAB_00104dee:
          local_50[0] = (long *)0x0;
          plVar12 = plVar12 + -2;
          do {
            lVar2 = *plVar12;
            if (lVar2 == 0) goto LAB_00105250;
            LOCK();
            lVar7 = *plVar12;
            bVar20 = lVar2 == lVar7;
            if (bVar20) {
              *plVar12 = lVar2 + 1;
              lVar7 = lVar2;
            }
            UNLOCK();
          } while (!bVar20);
          if (lVar7 == -1) {
LAB_00105250:
            plVar12 = (long *)0x0;
            local_58 = iVar4;
          }
          else {
            local_50[0] = local_60;
            local_58 = iVar4;
            plVar12 = local_60;
          }
LAB_00104e80:
          do {
            lVar2 = *(long *)((CowData<char32_t> *)pCVar16 + -0x10);
            if (plVar12 == (long *)0x0) {
              if (((lVar2 != 0) && (iVar15 = (int)*(undefined8 *)(lVar2 + -8), iVar15 != 0)) &&
                 (iVar15 = iVar15 + -1, iVar15 != 0)) {
                iVar8 = 0;
                goto LAB_00104e54;
              }
LAB_00104ea8:
              if (*(int *)((CowData<char32_t> *)pCVar16 + -0x18) <= iVar4) goto LAB_0010519c;
            }
            else {
              iVar5 = (int)plVar12[-1];
              if (iVar5 == 0) {
                if (lVar2 != 0) {
                  iVar15 = (int)*(undefined8 *)(lVar2 + -8);
                  iVar8 = 0;
                  if (iVar15 != 0) goto LAB_00104ec0;
                }
                goto LAB_00104ea8;
              }
              iVar8 = iVar5 + -1;
              if (lVar2 == 0) {
                iVar15 = 0;
                if (iVar8 != 0) goto LAB_00104e54;
                goto LAB_00104ea8;
              }
              iVar15 = (int)*(undefined8 *)(lVar2 + -8);
              if (iVar15 != 0) {
LAB_00104ec0:
                iVar15 = iVar15 + -1;
                if (iVar15 != iVar8) {
                  iVar8 = iVar5 + -1 + (uint)(iVar5 == 0);
                  goto LAB_00104e54;
                }
                goto LAB_00104ea8;
              }
              iVar15 = 0;
              if (iVar8 == 0) goto LAB_00104ea8;
LAB_00104e54:
              if (iVar8 <= iVar15) goto LAB_0010519c;
            }
            if (lVar9 == 1) goto LAB_00105170;
            *(undefined4 *)((CowData<char32_t> *)pCVar16 + -8) =
                 *(undefined4 *)((CowData<char32_t> *)pCVar16 + -0x18);
            if (*(long *)pCVar16 != lVar2) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar16,
                         (CowData *)((CowData<char32_t> *)pCVar16 + -0x10));
            }
            pCVar16 = (CowData *)((CowData<char32_t> *)pCVar16 + -0x10);
            lVar9 = lVar9 + -1;
          } while( true );
        }
      }
      else {
        do {
          lVar2 = *plVar10;
          if (lVar2 == 0) goto LAB_001049a3;
          LOCK();
          lVar7 = *plVar10;
          bVar20 = lVar2 == lVar7;
          if (bVar20) {
            *plVar10 = lVar2 + 1;
            lVar7 = lVar2;
          }
          UNLOCK();
        } while (!bVar20);
        if (lVar7 != -1) {
          local_60 = *(long **)pFVar19;
        }
LAB_001049a3:
        plVar10 = *(long **)(pFVar1 + 8);
        if (local_60 == (long *)0x0) goto LAB_00104fb4;
        iVar15 = (int)local_60[-1];
        plVar12 = local_60;
        if (iVar15 == 0) {
          if (plVar10 != (long *)0x0) {
            iVar5 = (int)plVar10[-1];
            iVar8 = 0;
            if (iVar5 != 0) goto LAB_00104f60;
          }
          goto LAB_00104ee7;
        }
        iVar8 = iVar15 + -1;
        if (plVar10 == (long *)0x0) {
          if (iVar8 == 0) goto LAB_00104ee7;
joined_r0x00104dd5:
          if (0 < iVar15 + -1) goto LAB_001049ee;
          goto LAB_00104dee;
        }
        iVar5 = (int)plVar10[-1];
        if (iVar5 != 0) {
LAB_00104f60:
          if (iVar8 == iVar5 + -1) goto LAB_00104ee7;
          if (iVar15 == 0) {
            iVar8 = 0;
            if (iVar5 == 0) goto LAB_00104dee;
          }
          else {
            iVar8 = iVar15 + -1;
            if (iVar5 == 0) goto joined_r0x00104dd5;
          }
          goto LAB_00104f7b;
        }
        if (iVar8 == 0) goto LAB_00104ee7;
        if (iVar15 < 2) goto LAB_00104dee;
      }
LAB_001049ee:
      pFVar18 = pFVar19;
      do {
        pCVar16 = (CowData *)((CowData<char32_t> *)pFVar18 + -0x10);
        *(undefined4 *)((CowData<char32_t> *)pFVar18 + -8) =
             *(undefined4 *)((CowData<char32_t> *)pFVar18 + -0x18);
        if (*(long *)pFVar18 != *(long *)((CowData<char32_t> *)pFVar18 + -0x10)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)pFVar18,pCVar16);
        }
        pFVar18 = (FuzzySearchToken_conflict *)pCVar16;
      } while ((CowData<char32_t> *)(pFVar1 + 8) != (CowData<char32_t> *)pCVar16);
      *(int *)pFVar1 = iVar4;
      if (plVar12 != *(long **)(pFVar1 + 8)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(pFVar1 + 8),(CowData *)&local_60);
      }
      goto LAB_00104a37;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      SortArray<FuzzySearchToken,FuzzySearch::set_query(String_const&)::TokenComparator,true>::
      introsort(0,1,pFVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001050f8:
  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                   "bad comparison function; sorting will be broken",0,0);
LAB_00105124:
  pFVar18 = pFVar1 + lVar9 * 0x10;
  *(int *)pFVar18 = iVar4;
  if (*(long **)(pFVar18 + 8) != plVar12) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(pFVar18 + 8),(CowData *)local_50);
  }
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar12 = plVar12 + -2;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (*plVar12 == 0) {
      Memory::free_static(local_50[0] + -2,false);
    }
  }
LAB_00104c74:
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar10 = local_60 + -2;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      Memory::free_static(local_60 + -2,false);
    }
  }
  lVar14 = lVar14 + 1;
  pFVar19 = pFVar19 + 0x10;
  if (lVar6 == lVar14) goto LAB_0010484a;
  goto LAB_00104b88;
LAB_00105170:
  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                   "bad comparison function; sorting will be broken",0,0);
LAB_0010519c:
  pFVar18 = pFVar1 + lVar9 * 0x10;
  *(int *)pFVar18 = iVar4;
  if (*(long **)(pFVar18 + 8) != plVar12) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(pFVar18 + 8),(CowData *)local_50);
  }
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar12 = plVar12 + -2;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (*plVar12 == 0) {
      Memory::free_static(local_50[0] + -2,false);
    }
  }
LAB_00104a37:
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar10 = local_60 + -2;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      Memory::free_static(local_60 + -2,false);
    }
  }
  lVar14 = lVar14 + 1;
  pFVar19 = pFVar19 + 0x10;
  if (lVar14 == 0x10) goto code_r0x00104a6b;
  goto LAB_00104958;
code_r0x00104a6b:
  pFVar19 = pFVar1 + 0x108;
  lVar14 = 0x10;
LAB_00104a80:
  iVar4 = *(int *)(pFVar19 + -8);
  plVar10 = *(long **)pFVar19;
  local_50[0] = (long *)0x0;
  pCVar16 = (CowData *)pFVar19;
  lVar9 = lVar14;
  local_58 = iVar4;
  if (plVar10 != (long *)0x0) {
    plVar12 = plVar10 + -2;
    do {
      lVar2 = *plVar12;
      plVar10 = local_50[0];
      if (lVar2 == 0) goto LAB_00104b2c;
      LOCK();
      lVar7 = *plVar12;
      bVar20 = lVar2 == lVar7;
      if (bVar20) {
        *plVar12 = lVar2 + 1;
        lVar7 = lVar2;
      }
      UNLOCK();
    } while (!bVar20);
    if (lVar7 != -1) {
      local_50[0] = *(long **)pFVar19;
      plVar10 = local_50[0];
    }
  }
LAB_00104b2c:
  do {
    lVar2 = *(long *)((CowData<char32_t> *)pCVar16 + -0x10);
    if (plVar10 == (long *)0x0) {
      if (((lVar2 != 0) && (iVar15 = (int)*(undefined8 *)(lVar2 + -8), iVar15 != 0)) &&
         (iVar15 = iVar15 + -1, iVar15 != 0)) {
        iVar8 = 0;
        goto LAB_00104b00;
      }
LAB_00104b58:
      if (*(int *)((CowData<char32_t> *)pCVar16 + -0x18) <= iVar4) goto LAB_00104d4c;
    }
    else {
      iVar5 = (int)plVar10[-1];
      if (iVar5 == 0) {
        if (lVar2 != 0) {
          iVar15 = (int)*(undefined8 *)(lVar2 + -8);
          iVar8 = 0;
          if (iVar15 != 0) goto LAB_00104d00;
        }
        goto LAB_00104b58;
      }
      iVar8 = iVar5 + -1;
      if (lVar2 == 0) {
        iVar15 = 0;
        if (iVar8 != 0) goto LAB_00104b00;
        goto LAB_00104b58;
      }
      iVar15 = (int)*(undefined8 *)(lVar2 + -8);
      if (iVar15 != 0) {
LAB_00104d00:
        iVar15 = iVar15 + -1;
        if (iVar8 != iVar15) {
          iVar8 = iVar5 + -1 + (uint)(iVar5 == 0);
          goto LAB_00104b00;
        }
        goto LAB_00104b58;
      }
      iVar15 = 0;
      if (iVar8 == 0) goto LAB_00104b58;
LAB_00104b00:
      if (iVar8 <= iVar15) goto LAB_00104d4c;
    }
    if (lVar9 == 1) break;
    *(undefined4 *)((CowData<char32_t> *)pCVar16 + -8) =
         *(undefined4 *)((CowData<char32_t> *)pCVar16 + -0x18);
    if (*(long *)pCVar16 != lVar2) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)pCVar16,(CowData *)((CowData<char32_t> *)pCVar16 + -0x10));
    }
    pCVar16 = (CowData *)((CowData<char32_t> *)pCVar16 + -0x10);
    lVar9 = lVar9 + -1;
  } while( true );
  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                   "bad comparison function; sorting will be broken",0,0);
LAB_00104d4c:
  pFVar18 = pFVar1 + lVar9 * 0x10;
  *(int *)pFVar18 = iVar4;
  if (*(long **)(pFVar18 + 8) != plVar10) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(pFVar18 + 8),(CowData *)local_50);
  }
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar10 = plVar10 + -2;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      Memory::free_static(local_50[0] + -2,false);
    }
  }
  lVar14 = lVar14 + 1;
  pFVar19 = pFVar19 + 0x10;
  if (lVar6 == lVar14) goto LAB_0010484a;
  goto LAB_00104a80;
}



/* FuzzyTokenMatch::add_substring(int, int) */

void __thiscall FuzzyTokenMatch::add_substring(FuzzyTokenMatch *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(this + 0x20) == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = *(long *)(*(long *)(this + 0x20) + -8) + 1;
  }
  iVar4 = CowData<Vector2i>::resize<false>((CowData<Vector2i> *)(this + 0x20),lVar5);
  if (iVar4 == 0) {
    if (*(long *)(this + 0x20) == 0) {
      lVar6 = -1;
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(*(long *)(this + 0x20) + -8);
      lVar6 = lVar5 + -1;
      if (-1 < lVar6) {
        CowData<Vector2i>::_copy_on_write((CowData<Vector2i> *)(this + 0x20));
        piVar1 = (int *)(*(long *)(this + 0x20) + lVar6 * 8);
        *piVar1 = param_1;
        piVar1[1] = param_2;
        goto LAB_00105361;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar6,lVar5,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_00105361:
  iVar2 = *(int *)(this + 0xc);
  *(int *)this = *(int *)this + param_2;
  iVar4 = param_1 + -1 + param_2;
  if ((-1 < iVar2) && (iVar3 = *(int *)(this + 0x10), iVar2 <= iVar3)) {
    if ((iVar4 < param_1) || (param_1 < 0)) {
      *(int *)(this + 0xc) = iVar2;
      *(int *)(this + 0x10) = iVar3;
      return;
    }
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    if (iVar2 < param_1) {
      param_1 = iVar2;
    }
  }
  *(int *)(this + 0xc) = param_1;
  *(int *)(this + 0x10) = iVar4;
  return;
}



/* FuzzySearchToken::try_exact_match(FuzzyTokenMatch&, String const&, int) const */

undefined8 FuzzySearchToken::try_exact_match(FuzzyTokenMatch *param_1,String *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 in_register_00000014;
  
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)param_1;
  if (*(long *)(param_1 + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 8) + -8);
    iVar1 = iVar1 + -1 + (uint)(iVar1 == 0);
  }
  *(int *)(param_2 + 4) = iVar1;
  iVar1 = String::find((String *)CONCAT44(in_register_00000014,param_3),(int)param_1 + 8);
  uVar2 = 0;
  if (iVar1 != -1) {
    if (*(long *)(param_1 + 8) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)*(undefined8 *)(*(long *)(param_1 + 8) + -8);
      iVar3 = iVar3 + -1 + (uint)(iVar3 == 0);
    }
    FuzzyTokenMatch::add_substring((FuzzyTokenMatch *)param_2,iVar1,iVar3);
    uVar2 = 1;
  }
  return uVar2;
}



/* FuzzySearchToken::try_fuzzy_match(FuzzyTokenMatch&, String const&, int, int) const */

undefined8 __thiscall
FuzzySearchToken::try_fuzzy_match
          (FuzzySearchToken_conflict *this,FuzzyTokenMatch *param_1,String *param_2,int param_3,
          int param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)this;
  lVar3 = *(long *)(this + 8);
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    lVar5 = *(long *)(lVar3 + -8);
    iVar7 = -1;
    lVar6 = 0;
    iVar8 = 0;
    *(uint *)(param_1 + 4) = (int)lVar5 + -1 + (uint)((int)lVar5 == 0);
    while (((int)lVar5 != 0 && ((int)lVar6 < (int)lVar5 + -1))) {
      if (lVar5 == lVar6) {
        piVar4 = (int *)&String::_null;
      }
      else {
        if (lVar5 <= lVar6) {
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar5,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        piVar4 = (int *)(lVar3 + lVar6 * 4);
      }
      iVar2 = String::find_char((wchar32)param_2,*piVar4);
      if (iVar2 < 0) {
        param_4 = param_4 + -1;
        if (param_4 < 0) {
          return 0;
        }
      }
      else {
        if (iVar7 == -1) {
LAB_001055ce:
          iVar8 = 1;
          iVar7 = iVar2;
        }
        else {
          if (iVar2 != param_3) {
            if (iVar7 != -1) {
              FuzzyTokenMatch::add_substring(param_1,iVar7,iVar8);
            }
            goto LAB_001055ce;
          }
          iVar8 = iVar8 + 1;
        }
        param_3 = iVar2 + 1;
      }
      lVar3 = *(long *)(this + 8);
      lVar6 = lVar6 + 1;
      if (lVar3 == 0) break;
      lVar5 = *(long *)(lVar3 + -8);
    }
    if (iVar7 != -1) {
      FuzzyTokenMatch::add_substring(param_1,iVar7,iVar8);
    }
  }
  return 1;
}



/* FuzzySearchResult::add_token_match(FuzzyTokenMatch const&) */

void __thiscall
FuzzySearchResult::add_token_match(FuzzySearchResult_conflict *this,FuzzyTokenMatch *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  iVar4 = *(int *)(param_1 + 0x14);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar9 = *(int *)(this + 4);
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + iVar4;
  if ((iVar9 < 0) || (iVar10 = *(int *)(this + 8), iVar10 < iVar9)) {
    iVar10 = *(int *)(param_1 + 0x10);
    iVar9 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar6 = *(int *)(param_1 + 0xc);
    if ((-1 < iVar6) && (iVar7 = *(int *)(param_1 + 0x10), iVar6 <= iVar7)) {
      if (iVar10 < iVar7) {
        iVar10 = iVar7;
      }
      if (iVar6 < iVar9) {
        iVar9 = iVar6;
      }
    }
  }
  *(int *)(this + 4) = iVar9;
  lVar11 = *(long *)(param_1 + 0x20);
  *(int *)(this + 8) = iVar10;
  uVar3 = *(undefined8 *)param_1;
  local_38 = 0;
  *(int *)this = *(int *)this - ((int)((ulong)uVar3 >> 0x20) - (int)uVar3);
  uVar5 = *(undefined4 *)(param_1 + 8);
  uVar8 = *(undefined8 *)(param_1 + 0xc);
  if (lVar11 != 0) {
    CowData<Vector2i>::_ref((CowData<Vector2i> *)&local_38,(CowData *)(param_1 + 0x20));
    lVar11 = local_38;
  }
  if (*(long *)(this + 0x28) == 0) {
    lVar12 = 1;
  }
  else {
    lVar12 = *(long *)(*(long *)(this + 0x28) + -8) + 1;
  }
  iVar9 = CowData<FuzzyTokenMatch>::resize<false>((CowData<FuzzyTokenMatch> *)(this + 0x28),lVar12);
  if (iVar9 == 0) {
    if (*(long *)(this + 0x28) == 0) {
      lVar13 = -1;
      lVar12 = 0;
    }
    else {
      lVar12 = *(long *)(*(long *)(this + 0x28) + -8);
      lVar13 = lVar12 + -1;
      if (-1 < lVar13) {
        CowData<FuzzyTokenMatch>::_copy_on_write((CowData<FuzzyTokenMatch> *)(this + 0x28));
        puVar2 = (undefined8 *)(*(long *)(this + 0x28) + lVar13 * 0x28);
        *puVar2 = uVar3;
        *(undefined4 *)(puVar2 + 1) = uVar5;
        *(undefined8 *)((long)puVar2 + 0xc) = uVar8;
        *(int *)((long)puVar2 + 0x14) = iVar4;
        if (lVar11 != puVar2[4]) {
          CowData<Vector2i>::_ref((CowData<Vector2i> *)(puVar2 + 4),(CowData *)&local_38);
        }
        goto LAB_00105776;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar13,lVar12,"p_index","size()","",false,
               false);
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_00105776:
  if (lVar11 != 0) {
    LOCK();
    plVar1 = (long *)(lVar11 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_38 + -0x10),false);
        return;
      }
      goto LAB_0010589a;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010589a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FuzzySearch::search(String const&, FuzzySearchResult&) const */

undefined8 __thiscall
FuzzySearch::search(FuzzySearch *this,String *param_1,FuzzySearchResult_conflict *param_2)

{
  long *plVar1;
  FuzzySearch FVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  FuzzySearchToken_conflict *pFVar8;
  int iVar9;
  long lVar10;
  FuzzySearchToken_conflict *this_00;
  undefined8 uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  long local_a0;
  undefined8 local_98;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  long local_78 [2];
  undefined8 local_68;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_2 + 0x10) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_2 + 0x10),(CowData *)param_1);
  }
  uVar6 = String::rfind_char((wchar32)param_1,0x2f);
  FVar2 = this[0x14];
  *(undefined4 *)(param_2 + 0x1c) = uVar6;
  *(undefined4 *)param_2 = *(undefined4 *)(this + 0x1c);
  if (FVar2 == (FuzzySearch)0x0) {
    String::to_lower();
  }
  else {
    local_a0 = 0;
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    if (*(long *)param_1 != 0) {
      do {
        lVar10 = *plVar1;
        if (lVar10 == 0) goto LAB_0010594a;
        LOCK();
        lVar7 = *plVar1;
        bVar12 = lVar10 == lVar7;
        if (bVar12) {
          *plVar1 = lVar10 + 1;
          lVar7 = lVar10;
        }
        UNLOCK();
      } while (!bVar12);
      if (lVar7 != -1) {
        local_a0 = *(long *)param_1;
      }
    }
  }
LAB_0010594a:
  uVar11 = _LC30;
  this_00 = *(FuzzySearchToken_conflict **)(this + 8);
  if ((this_00 != (FuzzySearchToken_conflict *)0x0) &&
     (pFVar8 = this_00 + *(long *)(this_00 + -8) * 0x10, pFVar8 != this_00)) {
    do {
      iVar9 = *(int *)(this + 0x10);
      iStack_88 = (int)uVar11;
      iVar3 = iStack_88;
      iStack_84 = (int)((ulong)uVar11 >> 0x20);
      iVar4 = iStack_84;
      local_78[0] = 0;
      local_98 = __LC29;
      iStack_90 = (int)_UNK_00107378;
      iStack_8c = (int)((ulong)_UNK_00107378 >> 0x20);
      while( true ) {
        local_48 = 0;
        local_68 = __LC29;
        iStack_60 = (int)_UNK_00107378;
        iStack_5c = (int)((ulong)_UNK_00107378 >> 0x20);
        iStack_58 = iVar3;
        iStack_54 = iVar4;
        if (this[0x20] == (FuzzySearch)0x0) {
          cVar5 = FuzzySearchToken::try_exact_match
                            ((FuzzyTokenMatch *)this_00,(String *)&local_68,(int)(String *)&local_a0
                            );
          lVar10 = local_48;
        }
        else {
          cVar5 = FuzzySearchToken::try_fuzzy_match
                            (this_00,(FuzzyTokenMatch *)&local_68,(String *)&local_a0,iVar9,
                             *(int *)param_2);
          lVar10 = local_48;
        }
        local_48 = lVar10;
        if (cVar5 == '\0') break;
        cVar5 = FuzzySearchResult::can_add_token_match(param_2,(FuzzyTokenMatch *)&local_68);
        lVar10 = local_48;
        if (cVar5 != '\0') {
          bVar12 = (bool)FuzzyTokenMatch::is_case_insensitive
                                   ((FuzzyTokenMatch *)&local_68,param_1,(String *)&local_a0);
          FuzzySearchResult::score_token_match(param_2,(FuzzyTokenMatch *)&local_68,bVar12);
          lVar10 = local_48;
          if ((iStack_90 == -1) || (iStack_84 < iStack_54)) {
            local_98 = local_68;
            iStack_90 = iStack_60;
            iStack_8c = iStack_5c;
            iStack_88 = iStack_58;
            iStack_84 = iStack_54;
            if (local_78[0] != local_48) {
              CowData<Vector2i>::_ref((CowData<Vector2i> *)local_78,(CowData *)&local_48);
            }
          }
        }
        if ((iStack_5c < 0) || (iStack_58 < iStack_5c)) break;
        iVar9 = iStack_5c + 1;
        if (lVar10 != 0) {
          LOCK();
          plVar1 = (long *)(lVar10 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_48 + -0x10),false);
          }
        }
      }
      if (lVar10 != 0) {
        LOCK();
        plVar1 = (long *)(lVar10 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_48 + -0x10),false);
        }
      }
      lVar10 = local_78[0];
      if (iStack_90 == -1) {
        if (local_78[0] != 0) {
          LOCK();
          plVar1 = (long *)(local_78[0] + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            uVar11 = 0;
            Memory::free_static((void *)(local_78[0] + -0x10),false);
            goto LAB_00105ae6;
          }
        }
        uVar11 = 0;
        goto LAB_00105ae6;
      }
      FuzzySearchResult::add_token_match(param_2,(FuzzyTokenMatch *)&local_98);
      if (lVar10 != 0) {
        LOCK();
        plVar1 = (long *)(lVar10 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_78[0] + -0x10),false);
        }
      }
      this_00 = this_00 + 0x10;
    } while (pFVar8 != this_00);
  }
  uVar11 = 1;
  FuzzySearchResult::maybe_apply_score_bonus(param_2);
LAB_00105ae6:
  lVar10 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FuzzySearch::search_all(Vector<String> const&, Vector<FuzzySearchResult>&) const */

void __thiscall FuzzySearch::search_all(FuzzySearch *this,Vector *param_1,Vector *param_2)

{
  CowData<FuzzySearchResult> *this_00;
  long *plVar1;
  String *pSVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  String *pSVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  long local_98;
  undefined8 local_90;
  long local_80;
  undefined4 local_78;
  undefined8 local_74;
  long local_68;
  undefined8 local_60;
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (CowData<FuzzySearchResult> *)(param_2 + 8);
  if (*(long *)(param_2 + 8) == 0) {
    pSVar8 = *(String **)(param_1 + 8);
    if (pSVar8 != (String *)0x0) goto LAB_00105c99;
LAB_00105ee0:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    if (*(long *)(*(long *)(param_2 + 8) + -8) == 0) {
      pSVar8 = *(String **)(param_1 + 8);
      if (pSVar8 != (String *)0x0) goto LAB_00105c99;
    }
    else {
      CowData<FuzzySearchResult>::_unref(this_00);
      pSVar8 = *(String **)(param_1 + 8);
      if (pSVar8 != (String *)0x0) {
LAB_00105c99:
        uVar3 = _LC17;
        pSVar2 = pSVar8 + *(long *)(pSVar8 + -8) * 8;
        if (pSVar2 != pSVar8) {
          do {
            local_a8 = (undefined4)uVar3;
            uStack_a4 = (undefined4)((ulong)uVar3 >> 0x20);
            local_a0 = 0xffffffff;
            local_98 = 0;
            local_90 = uVar3;
            local_80 = 0;
            cVar4 = search(this,pSVar8,(FuzzySearchResult_conflict *)&local_a8);
            if (cVar4 != '\0') {
              local_68 = 0;
              local_78 = local_a8;
              local_74 = CONCAT44(local_a0,uStack_a4);
              if (local_98 != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_98);
              }
              local_50[0] = 0;
              local_60 = local_90;
              if (local_80 != 0) {
                CowData<FuzzyTokenMatch>::_ref
                          ((CowData<FuzzyTokenMatch> *)local_50,(CowData *)&local_80);
              }
              if (*(long *)(param_2 + 8) == 0) {
                lVar9 = 1;
              }
              else {
                lVar9 = *(long *)(*(long *)(param_2 + 8) + -8) + 1;
              }
              iVar5 = CowData<FuzzySearchResult>::resize<false>(this_00,lVar9);
              if (iVar5 == 0) {
                if (*(long *)(param_2 + 8) == 0) {
                  lVar7 = -1;
                  lVar9 = 0;
                }
                else {
                  lVar9 = *(long *)(*(long *)(param_2 + 8) + -8);
                  lVar7 = lVar9 + -1;
                  if (-1 < lVar7) {
                    CowData<FuzzySearchResult>::_copy_on_write(this_00);
                    puVar6 = (undefined4 *)(lVar7 * 0x30 + *(long *)(param_2 + 8));
                    *puVar6 = local_78;
                    *(undefined8 *)(puVar6 + 1) = local_74;
                    if (*(long *)(puVar6 + 4) != local_68) {
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)(puVar6 + 4),(CowData *)&local_68);
                    }
                    *(undefined8 *)(puVar6 + 6) = local_60;
                    if (*(long *)(puVar6 + 10) != local_50[0]) {
                      CowData<FuzzyTokenMatch>::_ref
                                ((CowData<FuzzyTokenMatch> *)(puVar6 + 10),(CowData *)local_50);
                    }
                    goto LAB_00105e54;
                  }
                }
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar9,"p_index","size()",""
                           ,false,false);
              }
              else {
                _err_print_error("push_back","./core/templates/vector.h",0x142,
                                 "Condition \"err\" is true. Returning: true",0,0);
              }
LAB_00105e54:
              CowData<FuzzyTokenMatch>::_unref((CowData<FuzzyTokenMatch> *)local_50);
              if (local_68 != 0) {
                LOCK();
                plVar1 = (long *)(local_68 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_68 + -0x10),false);
                }
              }
            }
            CowData<FuzzyTokenMatch>::_unref((CowData<FuzzyTokenMatch> *)&local_80);
            if (local_98 != 0) {
              LOCK();
              plVar1 = (long *)(local_98 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_98 + -0x10),false);
              }
            }
            pSVar8 = pSVar8 + 8;
          } while (pSVar2 != pSVar8);
        }
      }
      if (*(long *)(param_2 + 8) == 0) goto LAB_00105ee0;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      sort_and_filter(this,param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector2i>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2i>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<FuzzyTokenMatch>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<FuzzyTokenMatch>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<FuzzySearchResult>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<FuzzySearchResult>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<FuzzySearchToken>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<FuzzySearchToken>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* String::~String() */

void __thiscall String::~String(String *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* CowData<FuzzyTokenMatch>::_unref() */

void __thiscall CowData<FuzzyTokenMatch>::_unref(CowData<FuzzyTokenMatch> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 0x20) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x20) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x20);
              *(undefined8 *)(lVar6 + 0x20) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x28;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<FuzzySearchResult>::_unref() */

void __thiscall CowData<FuzzySearchResult>::_unref(CowData<FuzzySearchResult> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  CowData<FuzzyTokenMatch> *this_00;
  long lVar6;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        this_00 = (CowData<FuzzyTokenMatch> *)(lVar2 + 0x28);
        lVar6 = 0;
        do {
          CowData<FuzzyTokenMatch>::_unref(this_00);
          if (*(long *)(this_00 + -0x18) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(this_00 + -0x18) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(this_00 + -0x18);
              *(undefined8 *)(this_00 + -0x18) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          this_00 = this_00 + 0x30;
        } while (lVar3 != lVar6);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<FuzzySearchResult>::_realloc(long) */

undefined8 __thiscall
CowData<FuzzySearchResult>::_realloc(CowData<FuzzySearchResult> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<FuzzySearchResult>::resize<false>(long) */

undefined8 __thiscall
CowData<FuzzySearchResult>::resize<false>(CowData<FuzzySearchResult> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar7 = 0;
    lVar9 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar9 = lVar7 * 0x30;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x30 == 0) {
LAB_001066d8:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar10 = param_1 * 0x30 - 1;
  uVar10 = uVar10 >> 1 | uVar10;
  uVar10 = uVar10 | uVar10 >> 2;
  uVar10 = uVar10 | uVar10 >> 4;
  uVar10 = uVar10 | uVar10 >> 8;
  uVar10 = uVar10 | uVar10 >> 0x10;
  uVar10 = uVar10 | uVar10 >> 0x20;
  lVar11 = uVar10 + 1;
  if (lVar11 == 0) goto LAB_001066d8;
  uVar12 = param_1;
  if (param_1 <= lVar7) {
    while (lVar7 = *(long *)this, lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar12) {
        if (lVar11 != lVar9) {
          uVar6 = _realloc(this,lVar11);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      lVar7 = lVar7 + uVar12 * 0x30;
      CowData<FuzzyTokenMatch>::_unref((CowData<FuzzyTokenMatch> *)(lVar7 + 0x28));
      if (*(long *)(lVar7 + 0x10) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar7 + 0x10) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar7 + 0x10);
          *(undefined8 *)(lVar7 + 0x10) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      uVar12 = uVar12 + 1;
    }
    goto LAB_0010672e;
  }
  if (lVar11 == lVar9) {
LAB_00106643:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
LAB_0010672e:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_00106577;
  }
  else {
    if (lVar7 != 0) {
      uVar6 = _realloc(this,lVar11);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_00106643;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar7 = 0;
  }
  uVar6 = _LC17;
  puVar4 = puVar8 + lVar7 * 6;
  do {
    *puVar4 = uVar6;
    puVar5 = puVar4 + 6;
    *(undefined4 *)(puVar4 + 1) = 0xffffffff;
    puVar4[2] = 0;
    puVar4[3] = uVar6;
    puVar4[5] = 0;
    puVar4 = puVar5;
  } while (puVar5 != puVar8 + param_1 * 6);
LAB_00106577:
  puVar8[-1] = param_1;
  return 0;
}



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<FuzzySearchToken>::_unref() */

void __thiscall CowData<FuzzySearchToken>::_unref(CowData<FuzzySearchToken> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<FuzzySearchToken>::_realloc(long) */

undefined8 __thiscall
CowData<FuzzySearchToken>::_realloc(CowData<FuzzySearchToken> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<FuzzySearchToken>::resize<false>(long) */

undefined8 __thiscall
CowData<FuzzySearchToken>::resize<false>(CowData<FuzzySearchToken> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar7 = 0;
    lVar9 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar9 = lVar7 * 0x10;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00106bc0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar10 = param_1 * 0x10 - 1;
  uVar10 = uVar10 >> 1 | uVar10;
  uVar10 = uVar10 | uVar10 >> 2;
  uVar10 = uVar10 | uVar10 >> 4;
  uVar10 = uVar10 | uVar10 >> 8;
  uVar10 = uVar10 | uVar10 >> 0x10;
  uVar10 = uVar10 | uVar10 >> 0x20;
  lVar11 = uVar10 + 1;
  if (lVar11 == 0) goto LAB_00106bc0;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar10 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar10) {
LAB_00106a72:
        if (lVar11 != lVar9) {
          uVar4 = _realloc(this,lVar11);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      while( true ) {
        lVar3 = uVar10 * 0x10 + lVar7;
        if (*(long *)(lVar3 + 8) != 0) break;
        uVar10 = uVar10 + 1;
        if (*(ulong *)(lVar7 + -8) <= uVar10) goto LAB_00106a72;
      }
      LOCK();
      plVar1 = (long *)(*(long *)(lVar3 + 8) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar7 = *(long *)(lVar3 + 8);
        *(undefined8 *)(lVar3 + 8) = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
      uVar10 = uVar10 + 1;
      lVar7 = *(long *)this;
    }
    goto LAB_00106c16;
  }
  if (lVar11 == lVar9) {
LAB_00106b2f:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
LAB_00106c16:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_00106b17;
  }
  else {
    if (lVar7 != 0) {
      uVar4 = _realloc(this,lVar11);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00106b2f;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar7 = 0;
  }
  puVar5 = puVar8 + lVar7 * 2;
  do {
    *(undefined4 *)puVar5 = 0xffffffff;
    puVar6 = puVar5 + 2;
    puVar5[1] = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar8 + param_1 * 2);
LAB_00106b17:
  puVar8[-1] = param_1;
  return 0;
}



/* CowData<Vector2i>::_realloc(long) */

undefined8 __thiscall CowData<Vector2i>::_realloc(CowData<Vector2i> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector2i>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2i>::resize<false>(CowData<Vector2i> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar8 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00106ed0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_00106ed0;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar7 == lVar3) {
LAB_00106e3c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00106dd1;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_00106e3c;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset(puVar9 + lVar3,0,(param_1 - lVar3) * 8);
LAB_00106dd1:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<FuzzyTokenMatch>::_realloc(long) */

undefined8 __thiscall
CowData<FuzzyTokenMatch>::_realloc(CowData<FuzzyTokenMatch> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<FuzzyTokenMatch>::resize<false>(long) */

undefined8 __thiscall
CowData<FuzzyTokenMatch>::resize<false>(CowData<FuzzyTokenMatch> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar11 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar10) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar11 = lVar10 * 0x28;
    if (lVar11 != 0) {
      uVar12 = lVar11 - 1U | lVar11 - 1U >> 1;
      uVar12 = uVar12 | uVar12 >> 2;
      uVar12 = uVar12 | uVar12 >> 4;
      uVar12 = uVar12 | uVar12 >> 8;
      uVar12 = uVar12 | uVar12 >> 0x10;
      lVar11 = (uVar12 | uVar12 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x28 == 0) {
LAB_00107270:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar12 = param_1 * 0x28 - 1;
  uVar12 = uVar12 >> 1 | uVar12;
  uVar12 = uVar12 | uVar12 >> 2;
  uVar12 = uVar12 | uVar12 >> 4;
  uVar12 = uVar12 | uVar12 >> 8;
  uVar12 = uVar12 | uVar12 >> 0x10;
  uVar12 = uVar12 | uVar12 >> 0x20;
  lVar13 = uVar12 + 1;
  if (lVar13 == 0) goto LAB_00107270;
  if (param_1 <= lVar10) {
    lVar10 = *(long *)this;
    uVar12 = param_1;
    while (lVar10 != 0) {
      if (*(ulong *)(lVar10 + -8) <= uVar12) {
LAB_00107101:
        if (lVar13 != lVar11) {
          uVar6 = _realloc(this,lVar13);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          lVar10 = *(long *)this;
          if (lVar10 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar10 + -8) = param_1;
        return 0;
      }
      while( true ) {
        lVar2 = lVar10 + uVar12 * 0x28;
        if (*(long *)(lVar2 + 0x20) != 0) break;
        uVar12 = uVar12 + 1;
        if (*(ulong *)(lVar10 + -8) <= uVar12) goto LAB_00107101;
      }
      LOCK();
      plVar1 = (long *)(*(long *)(lVar2 + 0x20) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar10 = *(long *)(lVar2 + 0x20);
        *(undefined8 *)(lVar2 + 0x20) = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
      uVar12 = uVar12 + 1;
      lVar10 = *(long *)this;
    }
    goto LAB_001072c6;
  }
  if (lVar13 == lVar11) {
LAB_001071e3:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_001072c6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar10 = puVar9[-1];
    if (param_1 <= lVar10) goto LAB_001071c1;
  }
  else {
    if (lVar10 != 0) {
      uVar6 = _realloc(this,lVar13);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_001071e3;
    }
    puVar7 = (undefined8 *)Memory::alloc_static(uVar12 + 0x11,false);
    if (puVar7 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar7 + 2;
    *puVar7 = 1;
    puVar7[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar10 = 0;
  }
  uVar5 = _UNK_00107378;
  uVar4 = __LC29;
  uVar6 = _LC30;
  puVar7 = puVar9 + lVar10 * 5;
  do {
    puVar7[2] = uVar6;
    puVar8 = puVar7 + 5;
    *puVar7 = uVar4;
    puVar7[1] = uVar5;
    puVar7[4] = 0;
    puVar7 = puVar8;
  } while (puVar8 != puVar9 + param_1 * 5);
LAB_001071c1:
  puVar9[-1] = param_1;
  return 0;
}



/* FuzzySearchToken::try_exact_match(FuzzyTokenMatch&, String const&, int) const */

void FuzzySearchToken::_GLOBAL__sub_I_try_exact_match(void)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  boundary_chars = 0;
  String::parse_latin1((StrRange *)&boundary_chars);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    __cxa_atexit(String::~String,&boundary_chars,&__dso_handle);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* String::~String() */

void __thiscall String::~String(String *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



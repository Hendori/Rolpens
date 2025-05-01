
/* WARNING: Unknown calling convention */

int heap_default_compare(void *a,void *b)

{
  return 0;
}



/* WARNING: Unknown calling convention */

heap * heap_alloc(_func_int_void_ptr_void_ptr *compare,idx_t n_reserve)

{
  heap *phVar1;
  void **ppvVar2;
  
  phVar1 = (heap *)xmalloc(0x20);
  if (n_reserve == 0) {
    n_reserve = 1;
  }
  ppvVar2 = (void **)xnmalloc(n_reserve,8);
  phVar1->capacity = n_reserve;
  phVar1->array = ppvVar2;
  *ppvVar2 = (void *)0x0;
  if (compare == (_func_int_void_ptr_void_ptr *)0x0) {
    compare = heap_default_compare;
  }
  phVar1->count = 0;
  phVar1->compare = compare;
  return phVar1;
}



/* WARNING: Unknown calling convention */

void heap_free(heap *heap)

{
  free(heap->array);
  free(heap);
  return;
}



/* WARNING: Unknown calling convention */

int heap_insert(heap *heap,void *item)

{
  _func_int_void_ptr_void_ptr *p_Var1;
  void *pvVar2;
  int iVar3;
  long lVar4;
  void **ppvVar5;
  long lVar6;
  
  lVar6 = heap->count;
  ppvVar5 = heap->array;
  if (heap->capacity + -1 <= lVar6) {
    ppvVar5 = (void **)xpalloc(ppvVar5,&heap->capacity,1,0xffffffffffffffff,8);
    lVar6 = heap->count;
    heap->array = ppvVar5;
  }
  lVar6 = lVar6 + 1;
  heap->count = lVar6;
  ppvVar5[lVar6] = item;
  ppvVar5 = heap->array;
  p_Var1 = heap->compare;
  pvVar2 = ppvVar5[lVar6];
  while (lVar6 != 1) {
    iVar3 = (*p_Var1)(ppvVar5[lVar6 >> 1],pvVar2);
    lVar4 = lVar6 * 8;
    if (0 < iVar3) goto LAB_00100123;
    ppvVar5[lVar6] = ppvVar5[lVar6 >> 1];
    lVar6 = lVar6 >> 1;
  }
  lVar4 = 8;
LAB_00100123:
  *(void **)((long)ppvVar5 + lVar4) = pvVar2;
  return 0;
}



/* WARNING: Unknown calling convention */

void * heap_remove_top(heap *heap)

{
  long lVar1;
  long lVar2;
  void **ppvVar3;
  void **ppvVar4;
  void *pvVar5;
  _func_int_void_ptr_void_ptr *p_Var6;
  int iVar7;
  void **ppvVar8;
  long lVar9;
  long lVar10;
  void **ppvVar11;
  void *local_40;
  
  lVar9 = heap->count;
  local_40 = (void *)0x0;
  if (lVar9 != 0) {
    ppvVar4 = heap->array;
    lVar1 = lVar9 + -1;
    local_40 = ppvVar4[1];
    pvVar5 = ppvVar4[lVar9];
    heap->count = lVar1;
    ppvVar4[1] = pvVar5;
    p_Var6 = heap->compare;
    ppvVar4 = heap->array;
    pvVar5 = ppvVar4[1];
    if (lVar1 >> 1 < 1) {
      ppvVar8 = ppvVar4 + 1;
    }
    else {
      lVar9 = 1;
      do {
        lVar10 = lVar9 * 2;
        ppvVar3 = ppvVar4 + lVar9 * 2;
        ppvVar11 = ppvVar3;
        if (lVar1 != lVar10 && SBORROW8(lVar1,lVar10) == lVar1 + lVar9 * -2 < 0) {
          lVar2 = lVar10 + 1;
          iVar7 = (*p_Var6)(*ppvVar3,ppvVar4[lVar2]);
          if (iVar7 < 0) {
            lVar10 = lVar2;
            ppvVar11 = ppvVar4 + lVar2;
          }
        }
        iVar7 = (*p_Var6)(*ppvVar11,pvVar5);
        ppvVar8 = ppvVar3 + -lVar9;
      } while ((0 < iVar7) &&
              (ppvVar3[-lVar9] = *ppvVar11, ppvVar8 = ppvVar11, lVar9 = lVar10, lVar10 <= lVar1 >> 1
              ));
    }
    *ppvVar8 = pvVar5;
  }
  return local_40;
}



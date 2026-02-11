
/* (anonymous namespace)::Is01Longest(linalg::vec<double, 2>, linalg::vec<double, 2>,
   linalg::vec<double, 2>) */

bool (anonymous_namespace)::Is01Longest
               (double param_1,double param_2,double param_3,double param_4,double param_5,
               double param_6)

{
  double dVar1;
  
  dVar1 = (param_3 - param_1) * (param_3 - param_1) + 0.0 +
          (param_4 - param_2) * (param_4 - param_2);
  if ((param_5 - param_3) * (param_5 - param_3) + 0.0 + (param_6 - param_4) * (param_6 - param_4) <
      dVar1) {
    return (param_1 - param_5) * (param_1 - param_5) + 0.0 +
           (param_2 - param_6) * (param_2 - param_6) < dVar1;
  }
  return false;
}



/* std::_Function_handler<void (int),
   manifold::Manifold::Impl::SplitPinchedVerts()::{lambda(int)#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */

undefined8
std::_Function_handler<void(int),manifold::Manifold::Impl::SplitPinchedVerts()::{lambda(int)#1}>::
_M_manager(long *param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = *param_2;
    }
    else if (param_3 == 2) {
      puVar1 = (undefined8 *)*param_2;
      puVar3 = (undefined8 *)operator_new(0x18);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (long)puVar3;
    }
    else if ((param_3 == 3) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1,0x18);
    }
    return 0;
  }
  *param_1 = (long)&manifold::Manifold::Impl::SplitPinchedVerts()::{lambda(int)#1}::typeinfo;
  return 0;
}



/* std::_Function_handler<void (int),
   manifold::Manifold::Impl::DedupeEdge(int)::{lambda(int)#2}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */

undefined8
std::_Function_handler<void(int),manifold::Manifold::Impl::DedupeEdge(int)::{lambda(int)#2}>::
_M_manager(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = param_2;
    }
    else if (param_3 == 2) {
      uVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar1;
    }
    return 0;
  }
  *param_1 = &manifold::Manifold::Impl::DedupeEdge(int)::{lambda(int)#2}::typeinfo;
  return 0;
}



/* std::_Function_handler<void (int),
   manifold::Manifold::Impl::DedupeEdge(int)::{lambda(int)#2}>::_M_invoke(std::_Any_data const&,
   int&&) */

void std::_Function_handler<void(int),manifold::Manifold::Impl::DedupeEdge(int)::{lambda(int)#2}>::
     _M_invoke(_Any_data *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  lVar3 = *(long *)(*(long *)param_1 + 0x60);
  puVar1 = (undefined4 *)(lVar3 + (long)*param_2 * 0xc);
  *puVar1 = uVar2;
  *(undefined4 *)(lVar3 + 4 + (long)(int)puVar1[2] * 0xc) = uVar2;
  return;
}



/* std::_Function_handler<void (int),
   manifold::Manifold::Impl::DedupeEdge(int)::{lambda(int)#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */

undefined8
std::_Function_handler<void(int),manifold::Manifold::Impl::DedupeEdge(int)::{lambda(int)#1}>::
_M_manager(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = param_2;
    }
    else if (param_3 == 2) {
      uVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar1;
    }
    return 0;
  }
  *param_1 = &manifold::Manifold::Impl::DedupeEdge(int)::{lambda(int)#1}::typeinfo;
  return 0;
}



/* std::_Function_handler<void (int),
   manifold::Manifold::Impl::DedupeEdge(int)::{lambda(int)#1}>::_M_invoke(std::_Any_data const&,
   int&&) */

void std::_Function_handler<void(int),manifold::Manifold::Impl::DedupeEdge(int)::{lambda(int)#1}>::
     _M_invoke(_Any_data *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  lVar3 = *(long *)(*(long *)param_1 + 0x60);
  puVar1 = (undefined4 *)(lVar3 + (long)*param_2 * 0xc);
  *puVar1 = uVar2;
  *(undefined4 *)(lVar3 + 4 + (long)(int)puVar1[2] * 0xc) = uVar2;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* (anonymous namespace)::SortEntry* std::__lower_bound<(anonymous namespace)::SortEntry*,
   (anonymous namespace)::SortEntry, __gnu_cxx::__ops::_Iter_less_val>((anonymous
   namespace)::SortEntry*, (anonymous namespace)::SortEntry*, (anonymous namespace)::SortEntry
   const&, __gnu_cxx::__ops::_Iter_less_val) [clone .isra.0] */

SortEntry *
std::
__lower_bound<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry,__gnu_cxx::__ops::_Iter_less_val>
          (SortEntry *param_1,long param_2,int param_3,int param_4)

{
  long lVar1;
  SortEntry *pSVar2;
  long lVar3;
  
  lVar3 = param_2 - (long)param_1 >> 4;
joined_r0x00100203:
  do {
    lVar1 = lVar3;
    if (lVar1 < 1) {
      return param_1;
    }
    lVar3 = lVar1 >> 1;
    pSVar2 = param_1 + lVar3 * 0x10;
    if (*(int *)pSVar2 == param_3) goto LAB_00100230;
  } while (param_3 <= *(int *)pSVar2);
  goto LAB_0010021c;
LAB_00100230:
  if (*(int *)(pSVar2 + 4) < param_4) {
LAB_0010021c:
    param_1 = pSVar2 + 0x10;
    lVar3 = (lVar1 - lVar3) + -1;
  }
  goto joined_r0x00100203;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* (anonymous namespace)::SortEntry* std::__upper_bound<(anonymous namespace)::SortEntry*,
   (anonymous namespace)::SortEntry, __gnu_cxx::__ops::_Val_less_iter>((anonymous
   namespace)::SortEntry*, (anonymous namespace)::SortEntry*, (anonymous namespace)::SortEntry
   const&, __gnu_cxx::__ops::_Val_less_iter) [clone .isra.0] */

SortEntry *
std::
__upper_bound<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry,__gnu_cxx::__ops::_Val_less_iter>
          (SortEntry *param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  SortEntry *pSVar3;
  long lVar4;
  
  lVar4 = param_2 - (long)param_1 >> 4;
joined_r0x00100253:
  do {
    lVar2 = lVar4;
    if (lVar2 < 1) {
      return param_1;
    }
    lVar4 = lVar2 >> 1;
    pSVar3 = param_1 + lVar4 * 0x10;
    iVar1 = *(int *)pSVar3;
    if (iVar1 == param_3) goto LAB_00100280;
  } while (iVar1 != param_3 && param_3 <= iVar1);
  goto LAB_0010026c;
LAB_00100280:
  if (*(int *)(pSVar3 + 4) <= param_4) {
LAB_0010026c:
    param_1 = pSVar3 + 0x10;
    lVar4 = (lVar2 - lVar4) + -1;
  }
  goto joined_r0x00100253;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<(anonymous namespace)::SortEntry*,
   __gnu_cxx::__ops::_Iter_less_iter>((anonymous namespace)::SortEntry*, (anonymous
   namespace)::SortEntry*, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::__insertion_sort<(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
               (int *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  size_t __n;
  int *piVar7;
  int iVar8;
  
  if (param_1 == param_2) {
    return;
  }
  piVar7 = param_1 + 4;
  do {
    if (param_2 == piVar7) {
      return;
    }
    while( true ) {
      uVar1 = *(undefined8 *)piVar7;
      iVar6 = (int)uVar1;
      iVar8 = (int)((ulong)uVar1 >> 0x20);
      bVar3 = iVar6 < *param_1;
      if (*param_1 == iVar6) {
        bVar3 = iVar8 < param_1[1];
      }
      uVar2 = *(undefined8 *)(piVar7 + 2);
      piVar5 = piVar7;
      if (bVar3) break;
      while( true ) {
        bVar3 = iVar6 < piVar5[-4];
        if (iVar6 == piVar5[-4]) {
          bVar3 = iVar8 < piVar5[-3];
        }
        if (!bVar3) break;
        *(undefined8 *)piVar5 = *(undefined8 *)(piVar5 + -4);
        *(undefined8 *)(piVar5 + 2) = *(undefined8 *)(piVar5 + -2);
        piVar5 = piVar5 + -4;
      }
      piVar7 = piVar7 + 4;
      *(undefined8 *)(piVar5 + 2) = uVar2;
      *(undefined8 *)piVar5 = uVar1;
      if (param_2 == piVar7) {
        return;
      }
    }
    __n = (long)piVar7 - (long)param_1;
    if ((long)__n < 0x11) {
      if (__n == 0x10) {
        uVar4 = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)piVar7 = *(undefined8 *)param_1;
        *(undefined8 *)(piVar7 + 2) = uVar4;
      }
    }
    else {
      memmove((void *)((0x10 - __n) + (long)piVar7),param_1,__n);
    }
    piVar7 = piVar7 + 4;
    *(undefined8 *)(param_1 + 2) = uVar2;
    *(undefined8 *)param_1 = uVar1;
  } while( true );
}



/* std::_Function_handler<void (int),
   manifold::Manifold::Impl::SplitPinchedVerts()::{lambda(int)#1}>::_M_invoke(std::_Any_data const&,
   int&&) */

void std::
     _Function_handler<void(int),manifold::Manifold::Impl::SplitPinchedVerts()::{lambda(int)#1}>::
     _M_invoke(_Any_data *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  
  plVar3 = *(long **)param_1;
  iVar2 = *param_2;
  lVar5 = (long)iVar2;
  lVar7 = lVar5 + 0x3f;
  if (-1 < lVar5) {
    lVar7 = lVar5;
  }
  puVar8 = (ulong *)(*(long *)plVar3[1] + (lVar7 >> 6) * 8);
  uVar6 = (ulong)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1a) & 0x3f) - ((ulong)(lVar5 >> 0x3f) >> 0x3a)
  ;
  if ((long)uVar6 < 0) {
    puVar8 = puVar8 + -1;
    uVar6 = (ulong)((int)uVar6 + 0x40);
  }
  *puVar8 = *puVar8 | 1L << ((byte)uVar6 & 0x3f);
  lVar4 = plVar3[2];
  lVar7 = *(long *)(*plVar3 + 0x60);
  puVar1 = (undefined4 *)(lVar7 + lVar5 * 0xc);
  *puVar1 = (int)lVar4;
  *(int *)(lVar7 + 4 + (long)(int)puVar1[2] * 0xc) = (int)lVar4;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* (anonymous namespace)::SortEntry* std::__move_merge<(anonymous namespace)::SortEntry*, (anonymous
   namespace)::SortEntry*, __gnu_cxx::__ops::_Iter_less_iter>((anonymous namespace)::SortEntry*,
   (anonymous namespace)::SortEntry*, (anonymous namespace)::SortEntry*, (anonymous
   namespace)::SortEntry*, (anonymous namespace)::SortEntry*, __gnu_cxx::__ops::_Iter_less_iter)
   [clone .isra.0] */

SortEntry *
std::
__move_merge<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
          (int *param_1,int *param_2,int *param_3,int *param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  size_t __n;
  undefined8 *puVar3;
  size_t __n_00;
  
  puVar3 = param_5;
  if (param_2 != param_1) {
    do {
      while( true ) {
        param_5 = puVar3;
        if (param_4 == param_3) goto LAB_00100459;
        if (*param_3 != *param_1) break;
        if (param_3[1] < param_1[1]) goto LAB_0010041a;
LAB_00100443:
        uVar1 = *(undefined8 *)param_1;
        uVar2 = *(undefined8 *)(param_1 + 2);
        param_1 = param_1 + 4;
        param_5 = puVar3 + 2;
        *puVar3 = uVar1;
        puVar3[1] = uVar2;
        puVar3 = param_5;
        if (param_2 == param_1) goto LAB_00100459;
      }
      if (*param_1 <= *param_3) goto LAB_00100443;
LAB_0010041a:
      uVar1 = *(undefined8 *)param_3;
      uVar2 = *(undefined8 *)(param_3 + 2);
      param_5 = puVar3 + 2;
      param_3 = param_3 + 4;
      *puVar3 = uVar1;
      puVar3[1] = uVar2;
      puVar3 = param_5;
    } while (param_2 != param_1);
  }
LAB_00100459:
  __n = (long)param_2 - (long)param_1;
  if ((long)__n < 0x11) {
    if (__n == 0x10) {
      uVar1 = *(undefined8 *)(param_1 + 2);
      *param_5 = *(undefined8 *)param_1;
      param_5[1] = uVar1;
    }
  }
  else {
    param_5 = (undefined8 *)memmove(param_5,param_1,__n);
  }
  __n_00 = (long)param_4 - (long)param_3;
  param_5 = (undefined8 *)((long)param_5 + __n);
  if ((long)__n_00 < 0x11) {
    if (__n_00 == 0x10) {
      uVar1 = *(undefined8 *)(param_3 + 2);
      *param_5 = *(undefined8 *)param_3;
      param_5[1] = uVar1;
    }
  }
  else {
    param_5 = (undefined8 *)memmove(param_5,param_3,__n_00);
  }
  return (SortEntry *)((long)param_5 + __n_00);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_sort_loop<(anonymous namespace)::SortEntry*, (anonymous namespace)::SortEntry*,
   long, __gnu_cxx::__ops::_Iter_less_iter>((anonymous namespace)::SortEntry*, (anonymous
   namespace)::SortEntry*, (anonymous namespace)::SortEntry*, long,
   __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::
     __merge_sort_loop<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,long,__gnu_cxx::__ops::_Iter_less_iter>
               (long param_1,long param_2,SortEntry *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2 - param_1 >> 4;
  if (param_4 * 2 <= lVar1) {
    lVar2 = param_1;
    do {
      param_1 = lVar2 + param_4 * 0x20;
      lVar1 = param_1 + param_4 * -0x10;
      param_3 = __move_merge<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
                          (lVar2,lVar1,lVar1,param_1,param_3);
      lVar1 = param_2 - param_1 >> 4;
      lVar2 = param_1;
    } while (param_4 * 2 <= lVar1);
  }
  if (param_4 <= lVar1) {
    lVar1 = param_4;
  }
  lVar1 = param_1 + lVar1 * 0x10;
  __move_merge<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
            (param_1,lVar1,lVar1,param_2,param_3);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_sort_with_buffer<(anonymous namespace)::SortEntry*, (anonymous
   namespace)::SortEntry*, __gnu_cxx::__ops::_Iter_less_iter>((anonymous namespace)::SortEntry*,
   (anonymous namespace)::SortEntry*, (anonymous namespace)::SortEntry*,
   __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::
     __merge_sort_with_buffer<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
               (long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_2 - param_1;
  lVar3 = param_1;
  if (lVar1 < 0x61) {
    __insertion_sort<(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>();
    return;
  }
  do {
    lVar2 = lVar3 + 0x70;
    __insertion_sort<(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
              (lVar3,lVar2);
    lVar3 = lVar2;
  } while (0x60 < param_2 - lVar2);
  __insertion_sort<(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
            (lVar2,param_2);
  if (0x70 < lVar1) {
    lVar3 = 7;
    do {
      __merge_sort_loop<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,long,__gnu_cxx::__ops::_Iter_less_iter>
                (param_1,param_2,param_3,lVar3);
      lVar2 = lVar3 * 2;
      lVar3 = lVar3 * 4;
      __merge_sort_loop<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,long,__gnu_cxx::__ops::_Iter_less_iter>
                (param_3,param_3 + lVar1,param_1,lVar2);
    } while (lVar3 < lVar1 >> 4);
  }
  return;
}



/* void std::vector<int, std::allocator<int> >::_M_range_insert<int
   const*>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int const*,
   int const*, std::forward_iterator_tag) [clone .isra.0] */

void std::vector<int,std::allocator<int>>::_M_range_insert<int_const*>
               (undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  size_t sVar5;
  ulong uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong __n;
  long local_50;
  
  if (param_3 == param_4) {
    return;
  }
  __n = (long)param_4 - (long)param_3;
  uVar8 = (long)__n >> 2;
  puVar2 = (undefined4 *)param_1[1];
  if (__n <= (ulong)(param_1[2] - (long)puVar2)) {
    uVar6 = (long)puVar2 - (long)param_2;
    if (__n < uVar6) {
      puVar7 = (undefined4 *)((long)puVar2 - __n);
      if ((long)__n < 5) {
        puVar1 = puVar2;
        if (__n == 4) {
          *puVar2 = *puVar7;
        }
      }
      else {
        puVar1 = (undefined4 *)memmove(puVar2,puVar7,__n);
        puVar2 = (undefined4 *)param_1[1];
      }
      sVar5 = (long)puVar7 - (long)param_2;
      param_1[1] = (long)puVar2 + __n;
      if ((long)sVar5 < 5) {
        if (sVar5 == 4) {
          puVar1[-1] = *param_2;
        }
      }
      else {
        memmove((void *)((long)puVar1 - sVar5),param_2,sVar5);
      }
      if (4 < (long)__n) {
LAB_001006d7:
        memmove(param_2,param_3,__n);
        return;
      }
      if (__n != 4) {
        return;
      }
    }
    else {
      puVar7 = (undefined4 *)((long)param_3 + uVar6);
      sVar5 = (long)param_4 - (long)puVar7;
      if ((long)sVar5 < 5) {
        if (sVar5 == 4) {
          *puVar2 = *puVar7;
        }
      }
      else {
        memmove(puVar2,puVar7,sVar5);
        puVar2 = (undefined4 *)param_1[1];
      }
      puVar2 = puVar2 + (uVar8 - ((long)uVar6 >> 2));
      param_1[1] = puVar2;
      if (4 < (long)uVar6) {
        memmove(puVar2,param_2,uVar6);
        param_1[1] = param_1[1] + uVar6;
        __n = uVar6;
        goto LAB_001006d7;
      }
      if (uVar6 != 4) {
        param_1[1] = (long)puVar2 + uVar6;
        return;
      }
      *puVar2 = *param_2;
      param_1[1] = puVar2 + 1;
    }
    *param_2 = *param_3;
    return;
  }
  puVar7 = (undefined4 *)*param_1;
  uVar6 = (long)puVar2 - (long)puVar7 >> 2;
  if (0x1fffffffffffffff - uVar6 < uVar8) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_range_insert");
  }
  if ((ulong)((long)puVar2 - (long)puVar7) < __n) {
    uVar8 = uVar8 + uVar6;
LAB_00100873:
    if (uVar8 == 0) {
      local_50 = 0;
      puVar1 = (undefined4 *)0x0;
      goto LAB_0010075e;
    }
    if (0x1fffffffffffffff < uVar8) {
      uVar8 = 0x1fffffffffffffff;
    }
    uVar3 = uVar8 * 4;
  }
  else {
    uVar3 = 0x7ffffffffffffffc;
    uVar8 = uVar6 * 2;
    if (uVar6 <= uVar8) goto LAB_00100873;
  }
  puVar1 = (undefined4 *)operator_new(uVar3);
  local_50 = (long)puVar1 + uVar3;
LAB_0010075e:
  sVar5 = (long)param_2 - (long)puVar7;
  if ((long)sVar5 < 5) {
    if (sVar5 == 4) {
      *puVar1 = *puVar7;
    }
  }
  else {
    memmove(puVar1,puVar7,sVar5);
  }
  puVar4 = (undefined4 *)(sVar5 + (long)puVar1);
  if ((long)__n < 5) {
    *puVar4 = *param_3;
  }
  else {
    puVar4 = (undefined4 *)memcpy(puVar4,param_3,__n);
  }
  sVar5 = (long)puVar2 - (long)param_2;
  puVar4 = (undefined4 *)((long)puVar4 + __n);
  if ((long)sVar5 < 5) {
    if (sVar5 == 4) {
      *puVar4 = *param_2;
    }
  }
  else {
    puVar4 = (undefined4 *)memcpy(puVar4,param_2,sVar5);
  }
  if (puVar7 != (undefined4 *)0x0) {
    operator_delete(puVar7,param_1[2] - (long)puVar7);
  }
  *param_1 = puVar1;
  param_1[1] = sVar5 + (long)puVar4;
  param_1[2] = local_50;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__move_merge_adaptive<(anonymous namespace)::SortEntry*, (anonymous
   namespace)::SortEntry*, (anonymous namespace)::SortEntry*,
   __gnu_cxx::__ops::_Iter_less_iter>((anonymous namespace)::SortEntry*, (anonymous
   namespace)::SortEntry*, (anonymous namespace)::SortEntry*, (anonymous namespace)::SortEntry*,
   (anonymous namespace)::SortEntry*, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::
     __move_merge_adaptive<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
               (int *param_1,int *param_2,int *param_3,int *param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  size_t __n;
  
  do {
    if (param_2 == param_1) {
      return;
    }
    if (param_4 == param_3) {
      if (param_2 == param_1) {
        return;
      }
      __n = (long)param_2 - (long)param_1;
      if ((long)__n < 0x11) {
        if (__n != 0x10) {
          return;
        }
        uVar1 = *(undefined8 *)(param_1 + 2);
        *param_5 = *(undefined8 *)param_1;
        param_5[1] = uVar1;
        return;
      }
      memmove(param_5,param_1,__n);
      return;
    }
    if (*param_3 == *param_1) {
      if (param_3[1] < param_1[1]) goto LAB_0010098a;
LAB_001009b2:
      uVar1 = *(undefined8 *)param_1;
      uVar2 = *(undefined8 *)(param_1 + 2);
      param_1 = param_1 + 4;
      *param_5 = uVar1;
      param_5[1] = uVar2;
    }
    else {
      if (*param_1 <= *param_3) goto LAB_001009b2;
LAB_0010098a:
      uVar1 = *(undefined8 *)param_3;
      uVar2 = *(undefined8 *)(param_3 + 2);
      param_3 = param_3 + 4;
      *param_5 = uVar1;
      param_5[1] = uVar2;
    }
    param_5 = param_5 + 2;
  } while( true );
}



void FUN_0010099a(int *param_1,int *param_2,int *param_3,int *param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  size_t __n;
  
  do {
    if (param_2 == param_1) {
      return;
    }
    if (param_4 == param_3) {
      if (param_2 == param_1) {
        return;
      }
      __n = (long)param_2 - (long)param_1;
      if ((long)__n < 0x11) {
        if (__n != 0x10) {
          return;
        }
        uVar1 = *(undefined8 *)(param_1 + 2);
        *param_5 = *(undefined8 *)param_1;
        param_5[1] = uVar1;
        return;
      }
      memmove(param_5,param_1,__n);
      return;
    }
    if (*param_3 == *param_1) {
      if (param_3[1] < param_1[1]) goto LAB_0010098a;
LAB_001009b2:
      uVar1 = *(undefined8 *)param_1;
      uVar2 = *(undefined8 *)(param_1 + 2);
      param_1 = param_1 + 4;
      *param_5 = uVar1;
      param_5[1] = uVar2;
    }
    else {
      if (*param_1 <= *param_3) goto LAB_001009b2;
LAB_0010098a:
      uVar1 = *(undefined8 *)param_3;
      uVar2 = *(undefined8 *)(param_3 + 2);
      param_3 = param_3 + 4;
      *param_5 = uVar1;
      param_5[1] = uVar2;
    }
    param_5 = param_5 + 2;
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__move_merge_adaptive_backward<(anonymous namespace)::SortEntry*, (anonymous
   namespace)::SortEntry*, (anonymous namespace)::SortEntry*,
   __gnu_cxx::__ops::_Iter_less_iter>((anonymous namespace)::SortEntry*, (anonymous
   namespace)::SortEntry*, (anonymous namespace)::SortEntry*, (anonymous namespace)::SortEntry*,
   (anonymous namespace)::SortEntry*, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::
     __move_merge_adaptive_backward<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
               (int *param_1,int *param_2,int *param_3,int *param_4,long param_5)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 *puVar3;
  
  if (param_1 == param_2) {
    sVar2 = (long)param_4 - (long)param_3;
    if (0x10 < (long)sVar2) {
      memmove((void *)(param_5 - sVar2),param_3,sVar2);
      return;
    }
    if (sVar2 == 0x10) {
      uVar1 = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)param_3;
      *(undefined8 *)(param_5 + -8) = uVar1;
      return;
    }
  }
  else if (param_3 != param_4) {
    param_2 = param_2 + -4;
    param_4 = param_4 + -4;
    puVar3 = (undefined8 *)(param_5 + -0x10);
    do {
      if (*param_4 == *param_2) {
        if (param_4[1] < param_2[1]) goto LAB_00100a22;
LAB_00100a44:
        uVar1 = *(undefined8 *)(param_4 + 2);
        *puVar3 = *(undefined8 *)param_4;
        puVar3[1] = uVar1;
        if (param_3 == param_4) {
          return;
        }
        param_4 = param_4 + -4;
      }
      else {
        if (*param_2 <= *param_4) goto LAB_00100a44;
LAB_00100a22:
        uVar1 = *(undefined8 *)(param_2 + 2);
        *puVar3 = *(undefined8 *)param_2;
        puVar3[1] = uVar1;
        if (param_1 == param_2) {
          sVar2 = (long)param_4 + (0x10 - (long)param_3);
          if (0x10 < (long)sVar2) {
            memmove((void *)((long)puVar3 - sVar2),param_3,sVar2);
            return;
          }
          if (sVar2 != 0x10) {
            return;
          }
          uVar1 = *(undefined8 *)(param_3 + 2);
          puVar3[-2] = *(undefined8 *)param_3;
          puVar3[-1] = uVar1;
          return;
        }
        param_2 = param_2 + -4;
      }
      puVar3 = puVar3 + -2;
    } while( true );
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__stable_sort_adaptive<(anonymous namespace)::SortEntry*, (anonymous
   namespace)::SortEntry*, __gnu_cxx::__ops::_Iter_less_iter>((anonymous namespace)::SortEntry*,
   (anonymous namespace)::SortEntry*, (anonymous namespace)::SortEntry*, (anonymous
   namespace)::SortEntry*, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::
     __stable_sort_adaptive<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
               (undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  size_t __n;
  size_t __n_00;
  
  __n = param_3 - (long)param_2;
  __n_00 = (long)param_2 - (long)param_1;
  __merge_sort_with_buffer<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
            (param_1,param_2,param_4);
  __merge_sort_with_buffer<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
            (param_2,param_3,param_4);
  if ((long)__n_00 <= (long)__n) {
    if ((long)__n_00 < 0x11) {
      if (__n_00 == 0x10) {
        uVar1 = param_1[1];
        *param_4 = *param_1;
        param_4[1] = uVar1;
      }
    }
    else {
      memmove(param_4,param_1,__n_00);
    }
    __move_merge_adaptive<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
              (param_4,(long)param_4 + __n_00,param_2,param_3,param_1);
    return;
  }
  if ((long)__n < 0x11) {
    if (__n == 0x10) {
      uVar1 = param_2[1];
      *param_4 = *param_2;
      param_4[1] = uVar1;
    }
  }
  else {
    memmove(param_4,param_2,__n);
  }
  __move_merge_adaptive_backward<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
            (param_1,param_2,param_4,(long)param_4 + __n,param_3);
  return;
}



/* (anonymous namespace)::SortEntry* std::_V2::__rotate<(anonymous
   namespace)::SortEntry*>((anonymous namespace)::SortEntry*, (anonymous namespace)::SortEntry*,
   (anonymous namespace)::SortEntry*, std::random_access_iterator_tag) [clone .isra.0] */

SortEntry *
std::_V2::__rotate<(anonymous_namespace)::SortEntry*>
          (SortEntry *param_1,SortEntry *param_2,SortEntry *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  SortEntry *pSVar6;
  SortEntry *pSVar7;
  SortEntry *pSVar8;
  size_t sVar9;
  SortEntry *pSVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 != param_2) {
    if (param_2 == param_3) {
      return param_1;
    }
    lVar4 = (long)param_3 - (long)param_1 >> 4;
    lVar12 = (long)param_2 - (long)param_1 >> 4;
    pSVar6 = param_2;
    pSVar10 = param_1;
    if (lVar12 != lVar4 - lVar12) {
      while( true ) {
        lVar13 = lVar4 - lVar12;
        lVar11 = lVar4;
        lVar5 = lVar4;
        lVar4 = lVar13;
        if (lVar12 < lVar13) {
          do {
            lVar5 = lVar12;
            if (lVar5 == 1) {
              uVar1 = *(undefined8 *)pSVar10;
              uVar2 = *(undefined8 *)(pSVar10 + 8);
              sVar9 = lVar11 * 0x10 - 0x10;
              if ((long)sVar9 < 0x11) {
                if (sVar9 == 0x10) {
                  *(undefined8 *)pSVar10 = *(undefined8 *)(pSVar10 + 0x10);
                  *(undefined8 *)(pSVar10 + 8) = *(undefined8 *)(pSVar10 + 0x18);
                }
              }
              else {
                memmove(pSVar10,pSVar10 + 0x10,sVar9);
              }
              *(undefined8 *)(pSVar10 + sVar9) = uVar1;
              *(undefined8 *)(pSVar10 + sVar9 + 8) = uVar2;
              goto LAB_00100d3d;
            }
            if (0 < lVar13) {
              lVar12 = 0;
              pSVar6 = pSVar10;
              pSVar7 = pSVar10 + lVar5 * 0x10;
              do {
                uVar1 = *(undefined8 *)pSVar6;
                uVar2 = *(undefined8 *)(pSVar6 + 8);
                lVar12 = lVar12 + 1;
                uVar3 = *(undefined8 *)(pSVar7 + 8);
                *(undefined8 *)pSVar6 = *(undefined8 *)pSVar7;
                *(undefined8 *)(pSVar6 + 8) = uVar3;
                *(undefined8 *)pSVar7 = uVar1;
                *(undefined8 *)(pSVar7 + 8) = uVar2;
                pSVar6 = pSVar6 + 0x10;
                pSVar7 = pSVar7 + 0x10;
              } while (lVar13 != lVar12);
              pSVar10 = pSVar10 + lVar13 * 0x10;
            }
            if (lVar11 % lVar5 == 0) goto LAB_00100d3d;
            lVar12 = lVar5 - lVar11 % lVar5;
            lVar13 = lVar5 - lVar12;
            lVar11 = lVar5;
            lVar4 = lVar13;
          } while (lVar12 < lVar13);
        }
        pSVar6 = pSVar10 + lVar5 * 0x10;
        if (lVar4 == 1) break;
        pSVar7 = pSVar10 + lVar12 * 0x10;
        if (0 < lVar12) {
          lVar11 = 0;
          pSVar8 = pSVar7;
          do {
            uVar1 = *(undefined8 *)(pSVar8 + -0x10);
            uVar2 = *(undefined8 *)(pSVar8 + -8);
            lVar11 = lVar11 + 1;
            uVar3 = *(undefined8 *)(pSVar6 + -8);
            *(undefined8 *)(pSVar8 + -0x10) = *(undefined8 *)(pSVar6 + -0x10);
            *(undefined8 *)(pSVar8 + -8) = uVar3;
            *(undefined8 *)(pSVar6 + -0x10) = uVar1;
            *(undefined8 *)(pSVar6 + -8) = uVar2;
            pSVar6 = pSVar6 + -0x10;
            pSVar8 = pSVar8 + -0x10;
            pSVar7 = pSVar10;
          } while (lVar12 != lVar11);
        }
        lVar12 = lVar5 % lVar4;
        pSVar10 = pSVar7;
        if (lVar12 == 0) {
LAB_00100d3d:
          return param_1 + ((long)param_3 - (long)param_2);
        }
      }
      sVar9 = lVar5 * 0x10 - 0x10;
      uVar1 = *(undefined8 *)(pSVar10 + sVar9);
      uVar2 = *(undefined8 *)(pSVar10 + sVar9 + 8);
      if ((long)sVar9 < 0x11) {
        if (sVar9 == 0x10) {
          uVar3 = *(undefined8 *)(pSVar10 + 8);
          *(undefined8 *)(pSVar6 + -0x10) = *(undefined8 *)pSVar10;
          *(undefined8 *)(pSVar6 + -8) = uVar3;
        }
      }
      else {
        memmove(pSVar10 + 0x10,pSVar10,sVar9);
      }
      *(undefined8 *)pSVar10 = uVar1;
      *(undefined8 *)(pSVar10 + 8) = uVar2;
      goto LAB_00100d3d;
    }
    do {
      uVar3 = *(undefined8 *)(pSVar6 + 8);
      uVar1 = *(undefined8 *)param_1;
      pSVar10 = param_1 + 0x10;
      uVar2 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)pSVar6;
      *(undefined8 *)(param_1 + 8) = uVar3;
      *(undefined8 *)pSVar6 = uVar1;
      *(undefined8 *)(pSVar6 + 8) = uVar2;
      param_3 = param_2;
      pSVar6 = pSVar6 + 0x10;
      param_1 = pSVar10;
    } while (param_2 != pSVar10);
  }
  return param_3;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_without_buffer<(anonymous namespace)::SortEntry*, long,
   __gnu_cxx::__ops::_Iter_less_iter>((anonymous namespace)::SortEntry*, (anonymous
   namespace)::SortEntry*, (anonymous namespace)::SortEntry*, long, long,
   __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::
     __merge_without_buffer<(anonymous_namespace)::SortEntry*,long,__gnu_cxx::__ops::_Iter_less_iter>
               (SortEntry *param_1,SortEntry *param_2,undefined8 param_3,long param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  SortEntry *pSVar4;
  int iVar5;
  SortEntry *pSVar6;
  SortEntry *pSVar7;
  long lVar8;
  long lVar9;
  SortEntry *pSVar10;
  
  if ((param_5 != 0) && (param_4 != 0)) {
    if (param_4 + param_5 != 2) {
      if (param_4 <= param_5) goto LAB_00100ec2;
      do {
        lVar8 = param_4 / 2;
        pSVar6 = param_1 + lVar8 * 0x10;
        pSVar4 = __lower_bound<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry,__gnu_cxx::__ops::_Iter_less_val>
                           (param_2,param_3,*(undefined4 *)pSVar6,*(undefined4 *)(pSVar6 + 4));
        lVar9 = (long)pSVar4 - (long)param_2 >> 4;
        pSVar7 = param_2;
        pSVar10 = param_1;
        param_2 = pSVar4;
        while( true ) {
          param_1 = _V2::__rotate<(anonymous_namespace)::SortEntry*>(pSVar6,pSVar7,param_2);
          param_5 = param_5 - lVar9;
          __merge_without_buffer<(anonymous_namespace)::SortEntry*,long,__gnu_cxx::__ops::_Iter_less_iter>
                    (pSVar10,pSVar6,param_1,lVar8,lVar9);
          param_4 = param_4 - lVar8;
          if (param_4 == 0) {
            return;
          }
          if (param_5 == 0) {
            return;
          }
          if (param_5 + param_4 == 2) goto LAB_00100f06;
          if (param_5 < param_4) break;
LAB_00100ec2:
          lVar9 = param_5 / 2;
          pSVar4 = param_2 + lVar9 * 0x10;
          pSVar6 = __upper_bound<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry,__gnu_cxx::__ops::_Val_less_iter>
                             (param_1,param_2,*(int *)pSVar4,*(int *)(pSVar4 + 4));
          lVar8 = (long)pSVar6 - (long)param_1 >> 4;
          pSVar7 = param_2;
          pSVar10 = param_1;
          param_2 = pSVar4;
        }
      } while( true );
    }
LAB_00100f06:
    iVar1 = *(int *)param_1;
    if (*(int *)param_2 == iVar1) {
      iVar5 = *(int *)(param_1 + 4);
      if (iVar5 <= *(int *)(param_2 + 4)) {
        return;
      }
    }
    else {
      if (iVar1 <= *(int *)param_2) {
        return;
      }
      iVar5 = *(int *)(param_1 + 4);
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 8) = uVar3;
    *(undefined8 *)(param_2 + 8) = uVar2;
    *(ulong *)param_2 = CONCAT44(iVar5,iVar1);
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__inplace_stable_sort<(anonymous namespace)::SortEntry*,
   __gnu_cxx::__ops::_Iter_less_iter>((anonymous namespace)::SortEntry*, (anonymous
   namespace)::SortEntry*, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::__inplace_stable_sort<(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
               (long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (0xe0 < param_2 - param_1) {
    lVar2 = (param_2 - param_1 >> 5) * 0x10;
    lVar1 = param_1 + lVar2;
    __inplace_stable_sort<(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
              (param_1,lVar1);
    __inplace_stable_sort<(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
              (lVar1,param_2);
    __merge_without_buffer<(anonymous_namespace)::SortEntry*,long,__gnu_cxx::__ops::_Iter_less_iter>
              (param_1,lVar1,param_2,lVar2 >> 4,param_2 - lVar1 >> 4);
    return;
  }
  __insertion_sort<(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_adaptive_resize<(anonymous namespace)::SortEntry*, long, (anonymous
   namespace)::SortEntry*, __gnu_cxx::__ops::_Iter_less_iter>((anonymous namespace)::SortEntry*,
   (anonymous namespace)::SortEntry*, (anonymous namespace)::SortEntry*, long, long, (anonymous
   namespace)::SortEntry*, long, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::
     __merge_adaptive_resize<(anonymous_namespace)::SortEntry*,long,(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
               (SortEntry *param_1,SortEntry *param_2,long param_3,long param_4,long param_5,
               undefined8 *param_6,long param_7)

{
  undefined8 uVar1;
  SortEntry *pSVar2;
  SortEntry *__src;
  size_t sVar3;
  long lVar4;
  long lVar5;
  SortEntry *pSVar6;
  size_t sVar7;
  long local_78;
  SortEntry *local_70;
  
  lVar5 = param_5;
  if (param_4 <= param_5) {
    lVar5 = param_4;
  }
  if (lVar5 <= param_7) {
LAB_00101203:
    if (param_5 < param_4) {
      sVar3 = param_3 - (long)param_2;
      if ((long)sVar3 < 0x11) {
        if (sVar3 == 0x10) {
          uVar1 = *(undefined8 *)(param_2 + 8);
          *param_6 = *(undefined8 *)param_2;
          param_6[1] = uVar1;
        }
      }
      else {
        memmove(param_6,param_2,sVar3);
      }
      __move_merge_adaptive_backward<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
                (param_1,param_2,param_6,(long)param_6 + sVar3,param_3);
      return;
    }
    sVar3 = (long)param_2 - (long)param_1;
    if ((long)sVar3 < 0x11) {
      if (sVar3 == 0x10) {
        uVar1 = *(undefined8 *)(param_1 + 8);
        *param_6 = *(undefined8 *)param_1;
        param_6[1] = uVar1;
      }
    }
    else {
      memmove(param_6,param_1,sVar3);
    }
    __move_merge_adaptive<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
              (param_6,(long)param_6 + sVar3,param_2,param_3,param_1);
    return;
  }
  local_70 = param_1;
  if (param_4 <= param_5) goto LAB_001010fa;
LAB_00101033:
  local_78 = param_4 / 2;
  __src = local_70 + local_78 * 0x10;
  pSVar2 = __lower_bound<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry,__gnu_cxx::__ops::_Iter_less_val>
                     (param_2,param_3,*(undefined4 *)__src,*(undefined4 *)(__src + 4));
  lVar5 = (long)pSVar2 - (long)param_2 >> 4;
  param_4 = param_4 - local_78;
  if (param_4 <= lVar5) goto LAB_00101151;
  do {
    if (param_7 < lVar5) break;
    param_1 = __src;
    if (lVar5 != 0) {
      sVar7 = (long)pSVar2 - (long)param_2;
      sVar3 = (long)param_2 - (long)__src;
      if ((long)sVar7 < 0x11) {
        if (sVar7 == 0x10) {
          uVar1 = *(undefined8 *)(param_2 + 8);
          *param_6 = *(undefined8 *)param_2;
          param_6[1] = uVar1;
          if ((long)sVar3 < 0x11) {
            if (sVar3 == 0x10) {
              uVar1 = *(undefined8 *)(__src + 8);
              *(undefined8 *)(pSVar2 + -0x10) = *(undefined8 *)__src;
              *(undefined8 *)(pSVar2 + -8) = uVar1;
            }
          }
          else {
            memmove(pSVar2 + -sVar3,__src,sVar3);
          }
          uVar1 = param_6[1];
          *(undefined8 *)__src = *param_6;
          *(undefined8 *)(__src + 8) = uVar1;
        }
        else if ((long)sVar3 < 0x11) {
          if (sVar3 == 0x10) {
            uVar1 = *(undefined8 *)(__src + 8);
            *(undefined8 *)(pSVar2 + -0x10) = *(undefined8 *)__src;
            *(undefined8 *)(pSVar2 + -8) = uVar1;
          }
        }
        else {
          memmove(pSVar2 + -sVar3,__src,sVar3);
        }
      }
      else {
        memmove(param_6,param_2,sVar7);
        if ((long)sVar3 < 0x11) {
          if (sVar3 == 0x10) {
            uVar1 = *(undefined8 *)(__src + 8);
            *(undefined8 *)(pSVar2 + -0x10) = *(undefined8 *)__src;
            *(undefined8 *)(pSVar2 + -8) = uVar1;
          }
        }
        else {
          memmove(pSVar2 + -sVar3,__src,sVar3);
        }
        memmove(__src,param_6,sVar7);
      }
      param_1 = __src + sVar7;
    }
LAB_001010a4:
    param_2 = pSVar2;
    param_5 = param_5 - lVar5;
    __merge_adaptive_resize<(anonymous_namespace)::SortEntry*,long,(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
              (local_70,__src,param_1,local_78,lVar5,param_6,param_7);
    lVar5 = param_5;
    if (param_4 <= param_5) {
      lVar5 = param_4;
    }
    if (lVar5 <= param_7) goto LAB_00101203;
    local_70 = param_1;
    if (param_5 < param_4) goto LAB_00101033;
LAB_001010fa:
    lVar5 = param_5 / 2;
    pSVar2 = param_2 + lVar5 * 0x10;
    pSVar6 = local_70;
    __src = __upper_bound<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry,__gnu_cxx::__ops::_Val_less_iter>
                      (local_70,param_2,*(undefined4 *)pSVar2,*(undefined4 *)(pSVar2 + 4));
    local_78 = (long)__src - (long)pSVar6 >> 4;
    param_4 = param_4 - local_78;
  } while (lVar5 < param_4);
LAB_00101151:
  if (param_7 < param_4) {
    param_1 = _V2::__rotate<(anonymous_namespace)::SortEntry*>(__src,param_2,pSVar2);
  }
  else {
    param_1 = pSVar2;
    if (param_4 != 0) {
      sVar3 = (long)param_2 - (long)__src;
      sVar7 = (long)pSVar2 - (long)param_2;
      if ((long)sVar3 < 0x11) {
        if (sVar3 == 0x10) {
          uVar1 = *(undefined8 *)(__src + 8);
          *param_6 = *(undefined8 *)__src;
          param_6[1] = uVar1;
          if ((long)sVar7 < 0x11) {
            if (sVar7 == 0x10) {
              uVar1 = *(undefined8 *)(param_2 + 8);
              *(undefined8 *)__src = *(undefined8 *)param_2;
              *(undefined8 *)(__src + 8) = uVar1;
            }
          }
          else {
            memmove(__src,param_2,sVar7);
          }
          lVar4 = -0x10;
          uVar1 = param_6[1];
          *(undefined8 *)(pSVar2 + -0x10) = *param_6;
          *(undefined8 *)(pSVar2 + -8) = uVar1;
        }
        else {
          lVar4 = -sVar3;
          if ((long)sVar7 < 0x11) {
            param_1 = pSVar2 + lVar4;
            if (sVar7 != 0x10) goto LAB_001010a4;
            uVar1 = *(undefined8 *)(param_2 + 8);
            *(undefined8 *)__src = *(undefined8 *)param_2;
            *(undefined8 *)(__src + 8) = uVar1;
          }
          else {
            memmove(__src,param_2,sVar7);
          }
        }
        param_1 = pSVar2 + lVar4;
        goto LAB_001010a4;
      }
      memmove(param_6,__src,sVar3);
      if ((long)sVar7 < 0x11) {
        if (sVar7 == 0x10) {
          uVar1 = *(undefined8 *)(param_2 + 8);
          *(undefined8 *)__src = *(undefined8 *)param_2;
          *(undefined8 *)(__src + 8) = uVar1;
        }
      }
      else {
        memmove(__src,param_2,sVar7);
      }
      param_1 = (SortEntry *)memmove(pSVar2 + -sVar3,param_6,sVar3);
    }
  }
  goto LAB_001010a4;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__stable_sort_adaptive_resize<(anonymous namespace)::SortEntry*, (anonymous
   namespace)::SortEntry*, long, __gnu_cxx::__ops::_Iter_less_iter>((anonymous
   namespace)::SortEntry*, (anonymous namespace)::SortEntry*, (anonymous namespace)::SortEntry*,
   long, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::
     __stable_sort_adaptive_resize<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,long,__gnu_cxx::__ops::_Iter_less_iter>
               (long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = ((param_2 - param_1 >> 4) + 1) / 2;
  lVar3 = lVar2 * 0x10;
  lVar1 = param_1 + lVar3;
  if (param_4 < lVar2) {
    __stable_sort_adaptive_resize<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,long,__gnu_cxx::__ops::_Iter_less_iter>
              (param_1,lVar1,param_3);
    __stable_sort_adaptive_resize<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,long,__gnu_cxx::__ops::_Iter_less_iter>
              (lVar1,param_2,param_3,param_4);
    __merge_adaptive_resize<(anonymous_namespace)::SortEntry*,long,(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
              (param_1,lVar1,param_2,lVar3 >> 4,param_2 - lVar1 >> 4,param_3,param_4);
    return;
  }
  __stable_sort_adaptive<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
            (param_1,lVar1,param_2,param_3);
  return;
}



/* manifold::Manifold::Impl::DedupeEdge(int) */

void manifold::Manifold::Impl::DedupeEdge(int param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined4 uVar3;
  undefined1 (*pauVar4) [16];
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined8 *puVar13;
  undefined1 (*__dest) [16];
  int iVar14;
  uint uVar15;
  code *pcVar16;
  undefined4 uVar17;
  ulong uVar18;
  uint *puVar19;
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  int in_ESI;
  uint uVar22;
  undefined4 in_register_0000003c;
  long lVar23;
  size_t sVar24;
  undefined1 (*in_R8) [16];
  ulong uVar25;
  undefined1 (*in_R10) [16];
  ulong in_R11;
  undefined1 (*pauVar26) [16];
  ulong uVar27;
  uint uVar28;
  uint uVar29;
  long lVar30;
  ulong uVar31;
  size_t sVar32;
  undefined1 (*pauVar33) [16];
  ulong uVar34;
  long in_FS_OFFSET;
  undefined1 uVar35;
  undefined8 uVar36;
  undefined8 extraout_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 uVar37;
  undefined1 local_148 [16];
  undefined1 (*local_138) [16];
  undefined1 (*local_120) [16];
  undefined8 local_118;
  undefined1 (*local_f8) [16];
  uint local_90;
  uint local_8c;
  long alStack_88 [2];
  code *local_78;
  code *pcStack_70;
  long local_68 [2];
  code *local_58;
  code *pcStack_50;
  long local_40;
  
  lVar23 = CONCAT44(in_register_0000003c,param_1);
  lVar30 = *(long *)(lVar23 + 0x60);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar34 = (long)in_ESI * 0xc;
  uVar28 = ((int *)(lVar30 + uVar34))[1];
  pauVar11 = (undefined1 (*) [16])(uVar34 - 0x18);
  if (0x55555554 < (in_ESI + 1) * -0x55555555 + 0x2aaaaaaaU) {
    pauVar11 = (undefined1 (*) [16])(uVar34 + 0xc);
  }
  iVar14 = *(int *)(*pauVar11 + lVar30 + 8);
  if (in_ESI == iVar14) {
    local_148._8_8_ = local_148._0_8_;
    local_148._0_8_ = (long)(int)uVar28;
    in_ESI = iVar14;
  }
  else {
    do {
      iVar2 = iVar14 + 1;
      lVar7 = (long)iVar14;
      in_R8 = (undefined1 (*) [16])(long)iVar2;
      in_R10 = (undefined1 (*) [16])(lVar7 * 3);
      in_R11 = (ulong)(uint)((iVar2 / 3) * 3);
      if (*(int *)(lVar30 + uVar34) == *(int *)(lVar30 + lVar7 * 0xc)) {
        uVar18 = *(ulong *)(lVar23 + 0x50);
        lVar30 = (long)(int)uVar28;
        puVar13 = *(undefined8 **)(lVar23 + 0x48);
        uVar27 = *(ulong *)(lVar23 + 0x58);
        local_148._8_8_ = local_148._0_8_;
        local_148._0_8_ = lVar30;
        uVar17 = (undefined4)uVar18;
        local_f8 = (undefined1 (*) [16])CONCAT44(uVar28,uVar17);
        pauVar26 = (undefined1 (*) [16])(puVar13 + lVar30 * 3);
        if (uVar18 < uVar27) {
          auVar1 = *pauVar26;
          pauVar12 = *(undefined1 (**) [16])(lVar23 + 0x80);
          *(ulong *)(lVar23 + 0x50) = uVar18 + 1;
          *(undefined1 (*) [16])(puVar13 + uVar18 * 3) = auVar1;
          *(undefined8 *)((undefined1 (*) [16])(puVar13 + uVar18 * 3))[1] =
               *(undefined8 *)pauVar26[1];
        }
        else {
          uVar36 = *(undefined8 *)*pauVar26;
          uVar37 = *(undefined8 *)(*pauVar26 + 8);
          pauVar26 = *(undefined1 (**) [16])pauVar26[1];
          if (uVar27 == 0) {
            sVar32 = 0xc00;
            uVar25 = 0x80;
LAB_001021f7:
            local_118 = (undefined1 (*) [16])CONCAT44(local_118._4_4_,iVar14);
            puVar9 = (undefined8 *)malloc(sVar32);
            if (uVar18 == 0) {
LAB_00102289:
              if (puVar13 != (undefined8 *)0x0) goto LAB_001034ef;
            }
            else {
              sVar32 = uVar18 * 0x18;
              if ((long)sVar32 < 0x19) {
                if (sVar32 != 0x18) goto LAB_00102289;
                uVar5 = puVar13[1];
                *puVar9 = *puVar13;
                puVar9[1] = uVar5;
                puVar9[2] = puVar13[2];
              }
              else {
                memmove(puVar9,puVar13,sVar32);
              }
LAB_001034ef:
              free(puVar13);
              uVar18 = *(ulong *)(lVar23 + 0x50);
              local_118 = pauVar26;
            }
            *(ulong *)(lVar23 + 0x58) = uVar25;
            *(undefined8 **)(lVar23 + 0x48) = puVar9;
          }
          else {
            uVar25 = uVar27 * 2;
            puVar9 = puVar13;
            if (uVar27 < uVar25) {
              sVar32 = uVar27 * 0x30;
              goto LAB_001021f7;
            }
          }
          pauVar12 = *(undefined1 (**) [16])(lVar23 + 0x80);
          *(ulong *)(lVar23 + 0x50) = uVar18 + 1;
          puVar9 = puVar9 + uVar18 * 3;
          *puVar9 = uVar36;
          puVar9[1] = uVar37;
          puVar9[2] = pauVar26;
        }
        if (pauVar12 != (undefined1 (*) [16])0x0) {
          pauVar10 = *(undefined1 (**) [16])(lVar23 + 0x78);
          pauVar33 = *(undefined1 (**) [16])(lVar23 + 0x88);
          sVar32 = (long)pauVar12 * 0x18;
          pauVar26 = (undefined1 (*) [16])((long)pauVar10 + lVar30 * 0x18);
          if (pauVar12 < pauVar33) {
            auVar1 = *pauVar26;
            *(undefined1 **)(lVar23 + 0x80) = *pauVar12 + 1;
            *(undefined1 (*) [16])((long)pauVar10 + sVar32) = auVar1;
            *(undefined8 *)((long)pauVar10 + sVar32 + 0x10) = *(undefined8 *)pauVar26[1];
          }
          else {
            uVar37 = *(undefined8 *)*pauVar26;
            uVar5 = *(undefined8 *)(*pauVar26 + 8);
            uVar36 = *(undefined8 *)pauVar26[1];
            if (pauVar33 == (undefined1 (*) [16])0x0) {
              local_138 = (undefined1 (*) [16])0x80;
              sVar24 = 0xc00;
LAB_00102b96:
              pauVar26 = (undefined1 (*) [16])malloc(sVar24);
              if ((long)sVar32 < 0x19) {
                if (sVar32 == 0x18) {
                  uVar6 = *(undefined8 *)(*pauVar10 + 8);
                  *(undefined8 *)*pauVar26 = *(undefined8 *)*pauVar10;
                  *(undefined8 *)(*pauVar26 + 8) = uVar6;
                  *(undefined8 *)pauVar26[1] = *(undefined8 *)pauVar10[1];
                  local_118 = pauVar12;
                  goto LAB_00102c88;
                }
                local_118 = pauVar12;
                if (pauVar10 != (undefined1 (*) [16])0x0) goto LAB_00102c88;
              }
              else {
                memmove(pauVar26,pauVar10,sVar32);
                local_118 = pauVar10;
LAB_00102c88:
                local_118 = (undefined1 (*) [16])CONCAT44(local_118._4_4_,iVar14);
                free(pauVar10);
                pauVar12 = *(undefined1 (**) [16])(lVar23 + 0x80);
                sVar32 = (long)pauVar12 * 0x18;
              }
              *(undefined1 (**) [16])(lVar23 + 0x78) = pauVar26;
              *(undefined1 (**) [16])(lVar23 + 0x88) = local_138;
              pauVar10 = pauVar26;
            }
            else {
              local_138 = (undefined1 (*) [16])((long)pauVar33 * 2);
              if (pauVar33 < local_138) {
                sVar24 = (long)pauVar33 * 0x30;
                goto LAB_00102b96;
              }
            }
            puVar13 = (undefined8 *)(*pauVar10 + sVar32);
            *(undefined1 **)(lVar23 + 0x80) = *pauVar12 + 1;
            *puVar13 = uVar37;
            puVar13[1] = uVar5;
            puVar13[2] = uVar36;
          }
        }
        puVar13 = *(undefined8 **)(lVar23 + 0x60);
        if (iVar2 % 3 == 0) {
          in_R8 = (undefined1 (*) [16])(long)(iVar14 + -2);
        }
        uVar15 = *(uint *)((long)(puVar13 + 1) + (long)pauVar11);
        uVar29 = *(uint *)((long)puVar13 + (long)in_R8 * 0xc + 8);
        uVar22 = uVar29;
        while (uVar22 != uVar15) {
          lVar7 = (long)(int)uVar22 * 0xc;
          *(undefined4 *)((long)puVar13 + lVar7 + 4) = uVar17;
          lVar30 = lVar7 + -0x18;
          if (0x55555554 < (uVar22 + 1) * -0x55555555 + 0x2aaaaaaa) {
            lVar30 = lVar7 + 0xc;
          }
          uVar22 = ((undefined4 *)(lVar30 + (long)puVar13))[2];
          *(undefined4 *)(lVar30 + (long)puVar13) = uVar17;
        }
        pauVar11 = *(undefined1 (**) [16])(lVar23 + 0x68);
        local_120 = *(undefined1 (**) [16])(lVar23 + 0x70);
        lVar30 = (long)(int)uVar29 * 0xc;
        iVar14 = (int)uVar29 / 3;
        uVar37 = CONCAT44(*(undefined4 *)((long)puVar13 + lVar30),uVar17);
        uVar36 = CONCAT44(uVar28,*(undefined4 *)((long)puVar13 + lVar30));
        uVar22 = (uint)pauVar11;
        pauVar26 = pauVar11;
        puVar9 = puVar13;
        if (local_120 <= pauVar11) {
          if (local_120 == (undefined1 (*) [16])0x0) {
            sVar32 = 0x600;
            local_120 = (undefined1 (*) [16])0x80;
          }
          else {
            if ((undefined1 (*) [16])((long)local_120 * 2) <= local_120) goto LAB_001017b0;
            sVar32 = (long)local_120 * 0x18;
            local_120 = (undefined1 (*) [16])((long)local_120 * 2);
          }
          puVar9 = (undefined8 *)malloc(sVar32);
          if (pauVar11 == (undefined1 (*) [16])0x0) {
LAB_0010233b:
            local_118 = pauVar11;
            if (puVar13 != (undefined8 *)0x0) goto LAB_00103363;
          }
          else {
            sVar32 = (long)pauVar11 * 0xc;
            if ((long)sVar32 < 0xd) {
              if (sVar32 != 0xc) goto LAB_0010233b;
              *puVar9 = *puVar13;
              *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar13 + 1);
              local_118 = pauVar11;
            }
            else {
              local_118._4_4_ = (undefined4)((ulong)pauVar11 >> 0x20);
              local_118 = (undefined1 (*) [16])CONCAT44(local_118._4_4_,uVar29);
              memmove(puVar9,puVar13,sVar32);
            }
LAB_00103363:
            local_118 = (undefined1 (*) [16])CONCAT44(local_118._4_4_,uVar29);
            free(puVar13);
            pauVar26 = *(undefined1 (**) [16])(lVar23 + 0x68);
          }
          *(undefined1 (**) [16])(lVar23 + 0x70) = local_120;
          *(undefined8 **)(lVar23 + 0x60) = puVar9;
        }
LAB_001017b0:
        in_R10 = (undefined1 (*) [16])((ulong)pauVar11 & 0xffffffff);
        pauVar11 = (undefined1 (*) [16])(*pauVar26 + 1);
        puVar13 = (undefined8 *)((long)puVar9 + (long)pauVar26 * 0xc);
        *(undefined1 (**) [16])(lVar23 + 0x68) = pauVar11;
        *(undefined4 *)(puVar13 + 1) = 0xffffffff;
        *puVar13 = CONCAT44(uVar17,uVar28);
        if (pauVar11 < local_120) {
          pauVar26 = (undefined1 (*) [16])(*pauVar26 + 2);
          puVar13 = (undefined8 *)((long)puVar9 + (long)pauVar11 * 0xc);
          *(undefined1 (**) [16])(lVar23 + 0x68) = pauVar26;
          *(undefined4 *)(puVar13 + 1) = 0xffffffff;
          *puVar13 = uVar37;
          if (local_120 <= pauVar26) {
LAB_00102173:
            if (local_120 < (undefined1 (*) [16])((long)local_120 * 2)) {
              sVar32 = (long)local_120 * 0x18;
              local_120 = (undefined1 (*) [16])((long)local_120 * 2);
              goto LAB_00101f66;
            }
            puVar9 = *(undefined8 **)(lVar23 + 0x60);
            goto LAB_00102189;
          }
LAB_001017f8:
          *(undefined1 **)(lVar23 + 0x68) = *pauVar26 + 1;
          puVar13 = (undefined8 *)((long)puVar9 + (long)pauVar26 * 0xc);
          *(undefined4 *)(puVar13 + 1) = 0xffffffff;
          *puVar13 = uVar36;
        }
        else {
          pauVar26 = (undefined1 (*) [16])((long)local_120 * 2);
          if (local_120 < pauVar26) {
            puVar9 = (undefined8 *)malloc((long)local_120 * 0x18);
            pauVar12 = *(undefined1 (**) [16])(lVar23 + 0x60);
            sVar32 = (long)pauVar11 * 0xc;
            if ((long)sVar32 < 0xd) {
              if (sVar32 == 0xc) {
                *puVar9 = *(undefined8 *)*pauVar12;
                *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(*pauVar12 + 8);
                local_118 = pauVar11;
                goto LAB_00102dd0;
              }
              local_118 = pauVar11;
              if (pauVar12 != (undefined1 (*) [16])0x0) goto LAB_00102dd0;
            }
            else {
              memmove(puVar9,pauVar12,sVar32);
              local_118 = pauVar12;
LAB_00102dd0:
              local_118 = (undefined1 (*) [16])CONCAT44(local_118._4_4_,uVar29);
              free(pauVar12);
            }
            *(undefined8 **)(lVar23 + 0x60) = puVar9;
            *(undefined1 (**) [16])(lVar23 + 0x70) = pauVar26;
            local_120 = pauVar26;
          }
          else {
            puVar9 = *(undefined8 **)(lVar23 + 0x60);
            local_120 = *(undefined1 (**) [16])(lVar23 + 0x70);
          }
          pauVar26 = (undefined1 (*) [16])(*(long *)(lVar23 + 0x68) + 1);
          puVar13 = (undefined8 *)((long)puVar9 + *(long *)(lVar23 + 0x68) * 0xc);
          *(undefined1 (**) [16])(lVar23 + 0x68) = pauVar26;
          *(undefined4 *)(puVar13 + 1) = 0xffffffff;
          *puVar13 = uVar37;
          if (pauVar26 < local_120) goto LAB_001017f8;
          if (local_120 != (undefined1 (*) [16])0x0) goto LAB_00102173;
          local_120 = (undefined1 (*) [16])0x80;
          sVar32 = 0x600;
LAB_00101f66:
          local_118 = (undefined1 (*) [16])CONCAT44(local_118._4_4_,uVar29);
          puVar9 = (undefined8 *)malloc(sVar32);
          pauVar11 = *(undefined1 (**) [16])(lVar23 + 0x60);
          if (pauVar26 == (undefined1 (*) [16])0x0) {
LAB_00101fbd:
            if (pauVar11 != (undefined1 (*) [16])0x0) goto LAB_0010342b;
          }
          else {
            sVar32 = (long)pauVar26 * 0xc;
            if ((long)sVar32 < 0xd) {
              if (sVar32 != 0xc) goto LAB_00101fbd;
              *puVar9 = *(undefined8 *)*pauVar11;
              *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(*pauVar11 + 8);
            }
            else {
              memmove(puVar9,pauVar11,sVar32);
              local_118 = pauVar11;
            }
LAB_0010342b:
            local_118 = (undefined1 (*) [16])CONCAT44(local_118._4_4_,uVar29);
            free(pauVar11);
          }
          *(undefined8 **)(lVar23 + 0x60) = puVar9;
          *(undefined1 (**) [16])(lVar23 + 0x70) = local_120;
LAB_00102189:
          puVar13 = (undefined8 *)((long)puVar9 + *(long *)(lVar23 + 0x68) * 0xc);
          *(long *)(lVar23 + 0x68) = *(long *)(lVar23 + 0x68) + 1;
          *(undefined4 *)(puVar13 + 1) = 0xffffffff;
          *puVar13 = uVar36;
        }
        in_R11 = (ulong)uVar29;
        iVar2 = *(int *)((long)puVar9 + lVar30 + 8);
        in_R8 = (undefined1 (*) [16])((long)(int)(uVar22 + 2) * 0xc);
        *(int *)((long)(puVar9 + 1) + (long)in_R8) = iVar2;
        *(uint *)((long)puVar9 + (long)iVar2 * 0xc + 8) = uVar22 + 2;
        *(uint *)((long)puVar9 + (long)(in_R8[-1] + 0xc)) = uVar29;
        uVar18 = *(ulong *)(lVar23 + 0x118);
        *(uint *)((long)puVar9 + lVar30 + 8) = uVar22 + 1;
        if (uVar18 == 0) {
LAB_00101854:
          pauVar26 = *(undefined1 (**) [16])(lVar23 + 0x130);
        }
        else {
          pauVar11 = *(undefined1 (**) [16])(lVar23 + 0x110);
          uVar27 = *(ulong *)(lVar23 + 0x120);
          sVar32 = uVar18 * 0x10;
          pauVar26 = pauVar11 + iVar14;
          if (uVar27 <= uVar18) {
            uVar36 = *(undefined8 *)*pauVar26;
            uVar37 = *(undefined8 *)(*pauVar26 + 8);
            if (uVar27 == 0) {
              sVar24 = 0x800;
              uVar25 = 0x80;
LAB_0010292d:
              local_118 = (undefined1 (*) [16])CONCAT44(local_118._4_4_,uVar29);
              pauVar26 = (undefined1 (*) [16])malloc(sVar24);
              if ((long)sVar32 < 0x11) {
                if (sVar32 == 0x10) {
                  uVar5 = *(undefined8 *)(*pauVar11 + 8);
                  *(undefined8 *)*pauVar26 = *(undefined8 *)*pauVar11;
                  *(undefined8 *)(*pauVar26 + 8) = uVar5;
                  goto LAB_001029ee;
                }
                if (pauVar11 != (undefined1 (*) [16])0x0) goto LAB_001029ee;
              }
              else {
                memmove(pauVar26,pauVar11,sVar32);
                local_118 = pauVar11;
LAB_001029ee:
                local_118 = (undefined1 (*) [16])CONCAT44(local_118._4_4_,uVar29);
                free(pauVar11);
                uVar18 = *(ulong *)(lVar23 + 0x118);
                sVar32 = uVar18 << 4;
              }
              *(ulong *)(lVar23 + 0x120) = uVar25;
              *(undefined1 (**) [16])(lVar23 + 0x110) = pauVar26;
              pauVar11 = pauVar26;
            }
            else {
              uVar25 = uVar27 * 2;
              if (uVar27 < uVar25) {
                sVar24 = uVar27 << 5;
                goto LAB_0010292d;
              }
            }
            *(ulong *)(lVar23 + 0x118) = uVar18 + 1;
            *(undefined8 *)(*pauVar11 + sVar32) = uVar36;
            *(undefined8 *)((long)(*pauVar11 + sVar32) + 8) = uVar37;
            goto LAB_00101854;
          }
          uVar36 = *(undefined8 *)*pauVar26;
          uVar37 = *(undefined8 *)(*pauVar26 + 8);
          *(ulong *)(lVar23 + 0x118) = uVar18 + 1;
          pauVar26 = *(undefined1 (**) [16])(lVar23 + 0x130);
          *(undefined8 *)pauVar11[uVar18] = uVar36;
          *(undefined8 *)(pauVar11[uVar18] + 8) = uVar37;
        }
        if (pauVar26 != (undefined1 (*) [16])0x0) {
          puVar9 = *(undefined8 **)(lVar23 + 0x128);
          sVar32 = (long)pauVar26 * 0xc;
          puVar13 = (undefined8 *)((long)puVar9 + (long)iVar14 * 0xc);
          pauVar11 = *(undefined1 (**) [16])(lVar23 + 0x138);
          if (pauVar26 < pauVar11) {
            uVar36 = *puVar13;
            *(undefined1 **)(lVar23 + 0x130) = *pauVar26 + 1;
            *(undefined8 *)((long)puVar9 + sVar32) = uVar36;
            *(undefined4 *)((long)puVar9 + sVar32 + 8) = *(undefined4 *)(puVar13 + 1);
          }
          else {
            uVar36 = *puVar13;
            uVar3 = *(undefined4 *)(puVar13 + 1);
            if (pauVar11 == (undefined1 (*) [16])0x0) {
              local_118 = (undefined1 (*) [16])0x80;
              sVar24 = 0x600;
LAB_00102fd3:
              puVar13 = (undefined8 *)malloc(sVar24);
              if ((long)sVar32 < 0xd) {
                if (sVar32 == 0xc) {
                  *puVar13 = *puVar9;
                  *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar9 + 1);
                  goto LAB_001030a2;
                }
                if (puVar9 != (undefined8 *)0x0) goto LAB_001030a2;
              }
              else {
                memmove(puVar13,puVar9,sVar32);
LAB_001030a2:
                free(puVar9);
                pauVar26 = *(undefined1 (**) [16])(lVar23 + 0x130);
                sVar32 = (long)pauVar26 * 0xc;
              }
              *(undefined8 **)(lVar23 + 0x128) = puVar13;
              *(undefined1 (**) [16])(lVar23 + 0x138) = local_118;
              puVar9 = puVar13;
            }
            else {
              local_118 = (undefined1 (*) [16])((long)pauVar11 * 2);
              if (pauVar11 < local_118) {
                sVar24 = (long)pauVar11 * 0x18;
                goto LAB_00102fd3;
              }
            }
            *(undefined1 **)(lVar23 + 0x130) = *pauVar26 + 1;
            *(undefined4 *)((undefined8 *)(sVar32 + (long)puVar9) + 1) = uVar3;
            *(undefined8 *)(sVar32 + (long)puVar9) = uVar36;
          }
        }
        uVar18 = *(ulong *)(lVar23 + 0x98);
        if (uVar18 == 0) goto LAB_00101874;
        pauVar11 = *(undefined1 (**) [16])(lVar23 + 0x90);
        sVar32 = uVar18 * 0x18;
        puVar13 = (undefined8 *)((long)pauVar11 + (long)iVar14 * 0x18);
        uVar27 = *(ulong *)(lVar23 + 0xa0);
        if (uVar18 < uVar27) {
          uVar36 = *puVar13;
          uVar37 = puVar13[1];
          *(ulong *)(lVar23 + 0x98) = uVar18 + 1;
          *(undefined8 *)((long)pauVar11 + sVar32) = uVar36;
          ((undefined8 *)((long)pauVar11 + sVar32))[1] = uVar37;
          *(undefined8 *)((long)pauVar11 + sVar32 + 0x10) = puVar13[2];
          goto LAB_00101874;
        }
        uVar37 = *puVar13;
        uVar5 = puVar13[1];
        uVar36 = puVar13[2];
        if (uVar27 == 0) {
          local_138 = (undefined1 (*) [16])0x80;
          sVar24 = 0xc00;
LAB_00102e4e:
          local_118 = (undefined1 (*) [16])CONCAT44(local_118._4_4_,uVar29);
          pauVar26 = (undefined1 (*) [16])malloc(sVar24);
          if ((long)sVar32 < 0x19) {
            if (sVar32 == 0x18) {
              *pauVar26 = *pauVar11;
              *(undefined8 *)pauVar26[1] = *(undefined8 *)pauVar11[1];
              goto LAB_00102f22;
            }
            if (pauVar11 != (undefined1 (*) [16])0x0) goto LAB_00102f22;
          }
          else {
            memmove(pauVar26,pauVar11,sVar32);
            local_118 = pauVar11;
LAB_00102f22:
            local_118 = (undefined1 (*) [16])CONCAT44(local_118._4_4_,uVar29);
            free(pauVar11);
            uVar18 = *(ulong *)(lVar23 + 0x98);
            sVar32 = uVar18 * 0x18;
          }
          *(undefined1 (**) [16])(lVar23 + 0x90) = pauVar26;
          *(undefined1 (**) [16])(lVar23 + 0xa0) = local_138;
          pauVar11 = pauVar26;
        }
        else {
          local_138 = (undefined1 (*) [16])(uVar27 * 2);
          if (uVar27 < local_138) {
            sVar24 = uVar27 * 0x30;
            goto LAB_00102e4e;
          }
        }
        puVar13 = (undefined8 *)(*pauVar11 + sVar32);
        *(ulong *)(lVar23 + 0x98) = uVar18 + 1;
        *puVar13 = uVar37;
        puVar13[1] = uVar5;
        puVar13[2] = uVar36;
LAB_00101874:
        pauVar26 = *(undefined1 (**) [16])(lVar23 + 0x60);
        local_138 = (undefined1 (*) [16])(ulong)(uVar22 + 3);
        pauVar12 = *(undefined1 (**) [16])(lVar23 + 0x70);
        pauVar11 = (undefined1 (*) [16])((long)(int)uVar15 * 0xc);
        in_XMM2_Qa = CONCAT44(*(undefined4 *)(*pauVar11 + (long)*pauVar26),uVar28);
        pauVar10 = *(undefined1 (**) [16])(lVar23 + 0x68);
        uVar36 = CONCAT44(uVar17,*(undefined4 *)(*pauVar11 + (long)*pauVar26));
        local_120 = (undefined1 (*) [16])(ulong)(uint)((int)uVar15 / 3);
        if (pauVar10 < pauVar12) goto LAB_001018d0;
        if (pauVar12 == (undefined1 (*) [16])0x0) {
          sVar32 = 0x600;
          pauVar33 = (undefined1 (*) [16])0x80;
        }
        else {
          pauVar33 = (undefined1 (*) [16])((long)pauVar12 * 2);
          if (pauVar33 <= pauVar12) goto LAB_001018d0;
          sVar32 = (long)pauVar12 * 0x18;
        }
        local_118 = (undefined1 (*) [16])malloc(sVar32);
        if (pauVar10 == (undefined1 (*) [16])0x0) goto LAB_00102150;
        sVar32 = (long)pauVar10 * 0xc;
        uVar35 = sVar32 == 0xc;
        if ((long)sVar32 < 0xd) goto LAB_00103950;
        memmove(local_118,pauVar26,sVar32);
        goto LAB_001035c8;
      }
      lVar8 = lVar7 * 0xc + -0x18;
      if (iVar2 % 3 != 0) {
        lVar8 = lVar7 * 0xc + 0xc;
      }
      iVar14 = *(int *)(lVar30 + 8 + lVar8);
    } while (in_ESI != iVar14);
    local_148._8_8_ = local_148._0_8_;
    local_148._0_8_ = (long)(int)uVar28;
  }
  do {
    pauVar33 = *(undefined1 (**) [16])(lVar23 + 0x50);
    pauVar10 = *(undefined1 (**) [16])(lVar23 + 0x48);
    pauVar4 = *(undefined1 (**) [16])(lVar23 + 0x58);
    pauVar26 = (undefined1 (*) [16])(local_148._0_8_ * 0x18);
    pauVar12 = (undefined1 (*) [16])((long)pauVar10 + (long)pauVar26);
    if (pauVar33 < pauVar4) {
      auVar1 = *pauVar12;
      *(undefined1 **)(lVar23 + 0x50) = *pauVar33 + 1;
      pauVar10 = (undefined1 (*) [16])((long)pauVar10 + (long)pauVar33 * 0x18);
      *pauVar10 = auVar1;
      *(undefined8 *)pauVar10[1] = *(undefined8 *)pauVar12[1];
    }
    else {
      uVar36 = *(undefined8 *)*pauVar12;
      uVar37 = *(undefined8 *)(*pauVar12 + 8);
      pauVar12 = *(undefined1 (**) [16])pauVar12[1];
      pauVar20 = pauVar33;
      if (pauVar4 == (undefined1 (*) [16])0x0) {
        sVar32 = 0xc00;
        in_R8 = (undefined1 (*) [16])0x80;
LAB_00102518:
        pauVar11 = (undefined1 (*) [16])malloc(sVar32);
        if (pauVar33 == (undefined1 (*) [16])0x0) {
LAB_0010255c:
          local_120 = pauVar10;
          local_118 = in_R8;
          local_f8 = pauVar12;
          if (pauVar10 != (undefined1 (*) [16])0x0) goto LAB_0010373c;
        }
        else {
          sVar32 = (long)pauVar33 * 0x18;
          if ((long)sVar32 < 0x19) {
            if (sVar32 != 0x18) goto LAB_0010255c;
            *pauVar11 = *pauVar10;
            *(undefined8 *)pauVar11[1] = *(undefined8 *)pauVar10[1];
          }
          else {
            pauVar11 = (undefined1 (*) [16])memmove(pauVar11,pauVar10,sVar32);
          }
LAB_0010373c:
          free(pauVar10);
          pauVar20 = *(undefined1 (**) [16])(lVar23 + 0x50);
          local_120 = pauVar12;
          local_118 = pauVar11;
          local_f8 = in_R8;
        }
        pauVar10 = pauVar11;
        *(undefined1 (**) [16])(lVar23 + 0x48) = pauVar10;
        *(undefined1 (**) [16])(lVar23 + 0x58) = in_R8;
        pauVar11 = pauVar10;
      }
      else {
        in_R8 = (undefined1 (*) [16])((long)pauVar4 * 2);
        if (pauVar4 < in_R8) {
          sVar32 = (long)pauVar4 * 0x30;
          goto LAB_00102518;
        }
      }
      *(undefined1 **)(lVar23 + 0x50) = *pauVar20 + 1;
      puVar13 = (undefined8 *)((long)pauVar10 + (long)pauVar20 * 0x18);
      *puVar13 = uVar36;
      puVar13[1] = uVar37;
      puVar13[2] = pauVar12;
    }
    pauVar12 = *(undefined1 (**) [16])(lVar23 + 0x80);
    if (pauVar12 != (undefined1 (*) [16])0x0) {
      pauVar10 = *(undefined1 (**) [16])(lVar23 + 0x78);
      pauVar4 = *(undefined1 (**) [16])(lVar23 + 0x88);
      pauVar11 = (undefined1 (*) [16])((long)pauVar12 * 0x18);
      pauVar26 = (undefined1 (*) [16])(*pauVar10 + (long)*pauVar26);
      if (pauVar12 < pauVar4) {
        uVar36 = *(undefined8 *)*pauVar26;
        uVar37 = *(undefined8 *)(*pauVar26 + 8);
        *(undefined1 **)(lVar23 + 0x80) = *pauVar12 + 1;
        *(undefined8 *)((long)pauVar10 + (long)pauVar11) = uVar36;
        ((undefined8 *)((long)pauVar10 + (long)pauVar11))[1] = uVar37;
        *(undefined8 *)((long)(pauVar10 + 1) + (long)pauVar11) = *(undefined8 *)pauVar26[1];
        in_R10 = pauVar11;
      }
      else {
        uVar36 = *(undefined8 *)*pauVar26;
        uVar37 = *(undefined8 *)(*pauVar26 + 8);
        local_120 = *(undefined1 (**) [16])pauVar26[1];
        pauVar20 = pauVar11;
        if (pauVar4 == (undefined1 (*) [16])0x0) {
          sVar32 = 0xc00;
          pauVar21 = (undefined1 (*) [16])0x80;
LAB_0010386f:
          local_f8 = (undefined1 (*) [16])CONCAT44(local_f8._4_4_,in_ESI);
          __dest = (undefined1 (*) [16])malloc(sVar32);
          if ((long)pauVar11 < 0x19) {
            local_118 = pauVar12;
            if (pauVar11 == (undefined1 (*) [16])0x18) {
              *__dest = *pauVar10;
              *(undefined8 *)__dest[1] = *(undefined8 *)pauVar10[1];
              goto LAB_001038ce;
            }
            if (pauVar10 != (undefined1 (*) [16])0x0) goto LAB_001038ce;
          }
          else {
            local_118._4_4_ = (undefined4)((ulong)pauVar12 >> 0x20);
            local_118 = (undefined1 (*) [16])CONCAT44(local_118._4_4_,in_ESI);
            memmove(__dest,pauVar10,(size_t)pauVar11);
            local_f8 = pauVar10;
LAB_001038ce:
            local_f8 = (undefined1 (*) [16])CONCAT44(local_f8._4_4_,in_ESI);
            free(pauVar10);
            pauVar12 = *(undefined1 (**) [16])(lVar23 + 0x80);
            pauVar20 = (undefined1 (*) [16])((long)pauVar12 * 0x18);
          }
          *(undefined1 (**) [16])(lVar23 + 0x78) = __dest;
          *(undefined1 (**) [16])(lVar23 + 0x88) = pauVar21;
          pauVar26 = __dest;
        }
        else {
          pauVar21 = (undefined1 (*) [16])((long)pauVar4 * 2);
          __dest = pauVar10;
          if (pauVar4 < pauVar21) {
            sVar32 = (long)pauVar4 * 0x30;
            goto LAB_0010386f;
          }
        }
        in_R10 = (undefined1 (*) [16])(*__dest + (long)*pauVar20);
        *(undefined1 **)(lVar23 + 0x80) = *pauVar12 + 1;
        *(undefined8 *)*in_R10 = uVar36;
        *(undefined8 *)(*in_R10 + 8) = uVar37;
        *(undefined1 (**) [16])in_R10[1] = local_120;
      }
    }
    alStack_88[1]._0_4_ = SUB84(pauVar33,0);
    local_138 = (undefined1 (*) [16])(ulong)uVar28;
    local_78 = std::
               _Function_handler<void(int),manifold::Manifold::Impl::DedupeEdge(int)::{lambda(int)#1}>
               ::_M_manager;
    pcStack_70 = std::
                 _Function_handler<void(int),manifold::Manifold::Impl::DedupeEdge(int)::{lambda(int)#1}>
                 ::_M_invoke;
    puVar19 = &local_90;
    uVar15 = in_ESI + 1U;
    if ((in_ESI + 1U) * -0x55555555 + 0x2aaaaaaa < 0x55555555) {
      uVar15 = in_ESI - 2;
    }
    pauVar33 = (undefined1 (*) [16])(ulong)uVar15;
    uVar29 = uVar15;
    alStack_88[0] = lVar23;
    do {
      iVar14 = *(int *)(*(long *)(lVar23 + 0x60) + (long)(int)uVar29 * 0xc + 8);
      uVar29 = iVar14 + 1;
      uVar22 = uVar29 * -0x55555555 + 0x2aaaaaaa;
      pauVar10 = (undefined1 (*) [16])(ulong)uVar22;
      if (uVar22 < 0x55555555) {
        uVar29 = iVar14 - 2;
      }
      uVar35 = local_78 == (code *)0x0;
      pcVar16 = local_78;
      local_90 = uVar29;
      if ((bool)uVar35) goto LAB_0010394b;
      pauVar26 = (undefined1 (*) [16])alStack_88;
      (*pcStack_70)(pauVar26,puVar19);
    } while (uVar15 != uVar29);
    if (local_78 != (code *)0x0) {
      (*local_78)(pauVar26,pauVar26,3);
    }
    do {
      lVar30 = *(long *)(lVar23 + 0x60);
      uVar15 = *(uint *)(lVar30 + 8 + uVar34);
      pauVar10 = (undefined1 (*) [16])(ulong)uVar15;
      iVar14 = uVar15 + 1;
      if ((uVar15 + 1) * -0x55555555 + 0x2aaaaaaa < 0x55555555) {
        iVar14 = uVar15 - 2;
      }
      uVar22 = *(uint *)(lVar30 + 8 + (long)iVar14 * 0xc);
      while (uVar15 != uVar22) {
        lVar7 = (long)(int)uVar22 * 0xc;
        if (uVar28 == *(uint *)(lVar30 + (long)(int)uVar22 * 0xc)) {
          if (uVar15 != uVar22) goto LAB_00101a22;
          break;
        }
        lVar8 = lVar7 + -0x18;
        if (0x55555554 < (uVar22 + 1) * -0x55555555 + 0x2aaaaaaa) {
          lVar8 = lVar7 + 0xc;
        }
        uVar22 = *(uint *)(lVar30 + 8 + lVar8);
      }
      uVar18 = *(ulong *)(lVar23 + 0x50);
      pauVar33 = *(undefined1 (**) [16])(lVar23 + 0x48);
      uVar27 = *(ulong *)(lVar23 + 0x58);
      uVar34 = uVar18 & 0xffffffff;
      lVar30 = local_148._0_8_ * 0x18;
      pauVar26 = (undefined1 (*) [16])((long)pauVar33 + lVar30);
      if (uVar18 < uVar27) {
        uVar36 = *(undefined8 *)*pauVar26;
        uVar37 = *(undefined8 *)(*pauVar26 + 8);
        *(ulong *)(lVar23 + 0x50) = uVar18 + 1;
        puVar13 = (undefined8 *)((long)pauVar33 + uVar18 * 0x18);
        *puVar13 = uVar36;
        puVar13[1] = uVar37;
        puVar13[2] = *(undefined8 *)pauVar26[1];
      }
      else {
        uVar36 = *(undefined8 *)*pauVar26;
        uVar37 = *(undefined8 *)(*pauVar26 + 8);
        pauVar12 = *(undefined1 (**) [16])pauVar26[1];
        uVar25 = uVar18;
        if (uVar27 == 0) {
          sVar32 = 0xc00;
          uVar31 = 0x80;
LAB_00101bb7:
          in_R8 = (undefined1 (*) [16])malloc(sVar32);
          if (uVar18 == 0) {
LAB_00101be7:
            if (pauVar33 != (undefined1 (*) [16])0x0) goto LAB_001037b0;
          }
          else {
            sVar32 = uVar18 * 0x18;
            if ((long)sVar32 < 0x19) {
              if (sVar32 != 0x18) goto LAB_00101be7;
              uVar5 = *(undefined8 *)(*pauVar33 + 8);
              *(undefined8 *)*in_R8 = *(undefined8 *)*pauVar33;
              *(undefined8 *)(*in_R8 + 8) = uVar5;
              *(undefined8 *)in_R8[1] = *(undefined8 *)pauVar33[1];
            }
            else {
              pauVar10 = pauVar33;
              in_R8 = (undefined1 (*) [16])memmove(in_R8,pauVar33,sVar32);
            }
LAB_001037b0:
            free(pauVar33);
            uVar25 = *(ulong *)(lVar23 + 0x50);
            local_f8 = in_R8;
          }
          local_148 = *pauVar26;
          *(undefined1 (**) [16])(lVar23 + 0x48) = in_R8;
          *(ulong *)(lVar23 + 0x58) = uVar31;
          pauVar33 = in_R8;
          local_138 = (undefined1 (*) [16])uVar31;
          local_120 = pauVar12;
        }
        else {
          uVar31 = uVar27 * 2;
          if (uVar27 < uVar31) {
            sVar32 = uVar27 * 0x30;
            goto LAB_00101bb7;
          }
        }
        *(ulong *)(lVar23 + 0x50) = uVar25 + 1;
        puVar13 = (undefined8 *)((long)pauVar33 + uVar25 * 0x18);
        *puVar13 = uVar36;
        puVar13[1] = uVar37;
        puVar13[2] = pauVar12;
      }
      uVar27 = *(ulong *)(lVar23 + 0x80);
      if (uVar27 != 0) {
        pauVar26 = *(undefined1 (**) [16])(lVar23 + 0x78);
        uVar25 = *(ulong *)(lVar23 + 0x88);
        pauVar33 = (undefined1 (*) [16])(uVar27 * 0x18);
        pauVar12 = (undefined1 (*) [16])(lVar30 + (long)pauVar26);
        if (uVar27 < uVar25) {
          auVar1 = *pauVar12;
          *(ulong *)(lVar23 + 0x80) = uVar27 + 1;
          *(undefined1 (*) [16])((long)pauVar26 + (long)pauVar33) = auVar1;
          *(undefined8 *)((long)(pauVar26 + 1) + (long)pauVar33) = *(undefined8 *)pauVar12[1];
          pauVar10 = pauVar33;
        }
        else {
          local_148 = *pauVar12;
          local_138 = *(undefined1 (**) [16])pauVar12[1];
          pauVar12 = pauVar33;
          if (uVar25 == 0) {
            sVar32 = 0xc00;
            uVar31 = 0x80;
LAB_001037f5:
            pauVar10 = (undefined1 (*) [16])malloc(sVar32);
            if ((long)pauVar33 < 0x19) {
              if (pauVar33 == (undefined1 (*) [16])0x18) {
                uVar36 = *(undefined8 *)(*pauVar26 + 8);
                *(undefined8 *)*pauVar10 = *(undefined8 *)*pauVar26;
                *(undefined8 *)(*pauVar10 + 8) = uVar36;
                *(undefined8 *)pauVar10[1] = *(undefined8 *)pauVar26[1];
                goto LAB_00103831;
              }
              local_120 = pauVar26;
              if (pauVar26 != (undefined1 (*) [16])0x0) goto LAB_00103831;
            }
            else {
              pauVar10 = (undefined1 (*) [16])memmove(pauVar10,pauVar26,(size_t)pauVar33);
LAB_00103831:
              free(pauVar26);
              uVar27 = *(ulong *)(lVar23 + 0x80);
              pauVar12 = (undefined1 (*) [16])(uVar27 * 0x18);
              local_120 = pauVar10;
            }
            pauVar26 = pauVar10;
            *(undefined1 (**) [16])(lVar23 + 0x78) = pauVar26;
            *(ulong *)(lVar23 + 0x88) = uVar31;
            in_R8 = pauVar26;
            local_f8 = pauVar33;
          }
          else {
            uVar31 = uVar25 * 2;
            if (uVar25 < uVar31) {
              sVar32 = uVar25 * 0x30;
              goto LAB_001037f5;
            }
          }
          pauVar10 = (undefined1 (*) [16])(*pauVar26 + (long)*pauVar12);
          *(ulong *)(lVar23 + 0x80) = uVar27 + 1;
          *pauVar10 = local_148;
          *(undefined1 (**) [16])pauVar10[1] = local_138;
        }
      }
      local_68[1]._0_4_ = (undefined4)uVar18;
      pauVar26 = (undefined1 (*) [16])&local_8c;
      local_58 = std::
                 _Function_handler<void(int),manifold::Manifold::Impl::DedupeEdge(int)::{lambda(int)#2}>
                 ::_M_manager;
      pcStack_50 = std::
                   _Function_handler<void(int),manifold::Manifold::Impl::DedupeEdge(int)::{lambda(int)#2}>
                   ::_M_invoke;
      uVar29 = uVar22 + 1;
      if ((uVar22 + 1) * -0x55555555 + 0x2aaaaaaa < 0x55555555) {
        uVar29 = uVar22 - 2;
      }
      puVar19 = (uint *)(ulong)uVar29;
      local_68[0] = lVar23;
      while( true ) {
        iVar14 = *(int *)(*(long *)(lVar23 + 0x60) + (long)(int)puVar19 * 0xc + 8);
        uVar28 = iVar14 + 1;
        if (uVar28 * -0x55555555 + 0x2aaaaaaa < 0x55555555) {
          uVar28 = iVar14 - 2;
        }
        puVar19 = (uint *)(ulong)uVar28;
        uVar35 = local_58 == (code *)0x0;
        pcVar16 = local_58;
        local_8c = uVar28;
        if ((bool)uVar35) break;
        pauVar33 = (undefined1 (*) [16])local_68;
        pauVar10 = pauVar26;
        (*pcStack_50)(pauVar33);
        if (uVar29 == uVar28) {
          if (local_58 != (code *)0x0) {
            (*local_58)(pauVar33,pauVar33,3);
          }
LAB_00101a22:
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
LAB_0010394b:
      uVar28 = uVar29;
      uVar15 = (uint)pcVar16;
      in_ESI = (int)puVar19;
      std::__throw_bad_function_call();
      uVar36 = extraout_XMM1_Qa;
LAB_00103950:
      uVar29 = (uint)in_R11;
      uVar22 = (uint)in_R10;
      if ((bool)uVar35) {
        *(undefined8 *)*local_118 = *(undefined8 *)*pauVar26;
        *(undefined4 *)(*local_118 + 8) = *(undefined4 *)(*pauVar26 + 8);
LAB_001035c8:
        free(pauVar26);
        pauVar10 = *(undefined1 (**) [16])(lVar23 + 0x68);
        in_R10 = (undefined1 (*) [16])(ulong)uVar22;
        in_R11 = (ulong)uVar29;
        pauVar12 = pauVar33;
      }
      else {
LAB_00102150:
        uVar29 = (uint)in_R11;
        uVar22 = (uint)in_R10;
        pauVar12 = pauVar33;
        if (pauVar26 != (undefined1 (*) [16])0x0) goto LAB_001035c8;
      }
      *(undefined1 (**) [16])(lVar23 + 0x70) = pauVar12;
      *(undefined1 (**) [16])(lVar23 + 0x60) = local_118;
      pauVar26 = local_118;
LAB_001018d0:
      pauVar33 = (undefined1 (*) [16])(*pauVar10 + 1);
      *(undefined1 (**) [16])(lVar23 + 0x68) = pauVar33;
      *(undefined1 (**) [16])(*pauVar26 + (long)pauVar10 * 0xc) = local_f8;
      *(undefined4 *)((long)(*pauVar26 + (long)pauVar10 * 0xc) + 8) = 0xffffffff;
      if (pauVar33 < pauVar12) {
        pauVar33 = (undefined1 (*) [16])(*pauVar10 + 2);
        *(undefined1 (**) [16])(lVar23 + 0x68) = pauVar33;
        *(undefined4 *)((long)(*pauVar26 + (long)*pauVar10 * 0xc + 0xc) + 8) = 0xffffffff;
        *(undefined8 *)(*pauVar26 + (long)*pauVar10 * 0xc + 0xc) = in_XMM2_Qa;
        if (pauVar12 <= pauVar33) {
LAB_001021b2:
          uVar22 = (uint)in_R11;
          uVar29 = (uint)in_R10;
          local_f8 = (undefined1 (*) [16])((long)pauVar12 * 2);
          if (pauVar12 < local_f8) {
            sVar32 = (long)pauVar12 * 0x18;
            goto LAB_00102046;
          }
          pauVar26 = *(undefined1 (**) [16])(lVar23 + 0x60);
          goto LAB_001021c8;
        }
LAB_0010191c:
        *(undefined1 **)(lVar23 + 0x68) = *pauVar33 + 1;
        *(undefined4 *)((long)(*pauVar26 + (long)pauVar33 * 0xc) + 8) = 0xffffffff;
        *(undefined8 *)(*pauVar26 + (long)pauVar33 * 0xc) = uVar36;
      }
      else {
        local_f8 = (undefined1 (*) [16])((long)pauVar12 * 2);
        if (pauVar12 < local_f8) {
          pauVar26 = (undefined1 (*) [16])malloc((long)pauVar12 * 0x18);
          puVar13 = *(undefined8 **)(lVar23 + 0x60);
          sVar32 = (long)pauVar33 * 0xc;
          if ((long)sVar32 < 0xd) {
            if (sVar32 == 0xc) {
              *(undefined8 *)*pauVar26 = *puVar13;
              *(undefined4 *)(*pauVar26 + 8) = *(undefined4 *)(puVar13 + 1);
              goto LAB_0010278b;
            }
            if (puVar13 != (undefined8 *)0x0) goto LAB_0010278b;
          }
          else {
            memmove(pauVar26,puVar13,sVar32);
LAB_0010278b:
            free(puVar13);
          }
          local_118 = (undefined1 (*) [16])CONCAT44(local_118._4_4_,(int)in_R11);
          in_R11 = in_R11 & 0xffffffff;
          in_R10 = (undefined1 (*) [16])((ulong)in_R10 & 0xffffffff);
          *(undefined1 (**) [16])(lVar23 + 0x60) = pauVar26;
          *(undefined1 (**) [16])(lVar23 + 0x70) = local_f8;
        }
        else {
          local_f8 = *(undefined1 (**) [16])(lVar23 + 0x70);
          pauVar26 = *(undefined1 (**) [16])(lVar23 + 0x60);
        }
        uVar22 = (uint)in_R11;
        uVar29 = (uint)in_R10;
        lVar30 = *(long *)(lVar23 + 0x68);
        pauVar33 = (undefined1 (*) [16])(lVar30 + 1);
        *(undefined1 (**) [16])(lVar23 + 0x68) = pauVar33;
        *(undefined4 *)((long)(*pauVar26 + lVar30 * 0xc) + 8) = 0xffffffff;
        *(undefined8 *)(*pauVar26 + lVar30 * 0xc) = in_XMM2_Qa;
        if (pauVar33 < local_f8) goto LAB_0010191c;
        pauVar12 = local_f8;
        if (local_f8 != (undefined1 (*) [16])0x0) goto LAB_001021b2;
        local_f8 = (undefined1 (*) [16])0x80;
        sVar32 = 0x600;
LAB_00102046:
        pauVar26 = (undefined1 (*) [16])malloc(sVar32);
        puVar13 = *(undefined8 **)(lVar23 + 0x60);
        if (pauVar33 == (undefined1 (*) [16])0x0) {
LAB_001020ad:
          if (puVar13 != (undefined8 *)0x0) goto LAB_00103684;
        }
        else {
          sVar32 = (long)pauVar33 * 0xc;
          if ((long)sVar32 < 0xd) {
            if (sVar32 != 0xc) goto LAB_001020ad;
            *(undefined8 *)*pauVar26 = *puVar13;
            *(undefined4 *)(*pauVar26 + 8) = *(undefined4 *)(puVar13 + 1);
          }
          else {
            memmove(pauVar26,puVar13,sVar32);
          }
LAB_00103684:
          free(puVar13);
        }
        local_118 = (undefined1 (*) [16])CONCAT44(local_118._4_4_,uVar22);
        in_R11 = (ulong)uVar22;
        in_R10 = (undefined1 (*) [16])(ulong)uVar29;
        *(undefined1 (**) [16])(lVar23 + 0x60) = pauVar26;
        *(undefined1 (**) [16])(lVar23 + 0x70) = local_f8;
LAB_001021c8:
        lVar30 = *(long *)(lVar23 + 0x68);
        *(long *)(lVar23 + 0x68) = lVar30 + 1;
        *(undefined4 *)((long)(*pauVar26 + lVar30 * 0xc) + 8) = 0xffffffff;
        *(undefined8 *)(*pauVar26 + lVar30 * 0xc) = uVar36;
      }
      pauVar11 = (undefined1 (*) [16])(*pauVar26 + (long)*pauVar11);
      iVar2 = (int)in_R10;
      iVar14 = *(int *)(*pauVar11 + 8);
      *(int *)(pauVar26[2] + 0xc + (long)in_R8) = iVar14;
      *(int *)(*pauVar26 + (long)iVar14 * 0xc + 8) = iVar2 + 5;
      *(uint *)(*in_R8 + (long)pauVar26[2]) = uVar15;
      *(int *)(*pauVar11 + 8) = iVar2 + 4;
      *(int *)(pauVar26[1] + 4 + (long)in_R8) = iVar2;
      *(undefined4 *)(*in_R8 + (long)pauVar26[-1]) = local_138._0_4_;
      pauVar26 = *(undefined1 (**) [16])(lVar23 + 0x118);
      if (pauVar26 == (undefined1 (*) [16])0x0) {
LAB_0010197b:
        pauVar10 = *(undefined1 (**) [16])(lVar23 + 0x130);
      }
      else {
        pauVar12 = *(undefined1 (**) [16])(lVar23 + 0x110);
        pauVar10 = *(undefined1 (**) [16])(lVar23 + 0x120);
        sVar32 = (long)pauVar26 * 0x10;
        pauVar33 = pauVar12 + (int)local_120;
        if (pauVar10 <= pauVar26) {
          pauVar4 = *(undefined1 (**) [16])*pauVar33;
          uVar18 = *(ulong *)(*pauVar33 + 8);
          if (pauVar10 == (undefined1 (*) [16])0x0) {
            sVar24 = 0x800;
            in_R8 = (undefined1 (*) [16])0x80;
LAB_001025ed:
            pauVar10 = (undefined1 (*) [16])malloc(sVar24);
            if ((long)sVar32 < 0x11) {
              if (sVar32 == 0x10) {
                uVar36 = *(undefined8 *)(*pauVar12 + 8);
                *(undefined8 *)*pauVar10 = *(undefined8 *)*pauVar12;
                *(undefined8 *)(*pauVar10 + 8) = uVar36;
                goto LAB_00102646;
              }
              local_118 = pauVar4;
              if (pauVar12 != (undefined1 (*) [16])0x0) goto LAB_00102646;
            }
            else {
              pauVar10 = (undefined1 (*) [16])memmove(pauVar10,pauVar12,sVar32);
LAB_00102646:
              free(pauVar12);
              pauVar26 = *(undefined1 (**) [16])(lVar23 + 0x118);
              sVar32 = (long)pauVar26 << 4;
              local_118 = pauVar10;
            }
            local_138 = (undefined1 (*) [16])(in_R11 & 0xffffffff);
            in_R11 = in_R11 & 0xffffffff;
            *(undefined1 (**) [16])(lVar23 + 0x110) = pauVar10;
            *(undefined1 (**) [16])(lVar23 + 0x120) = in_R8;
            pauVar12 = pauVar10;
            local_f8 = in_R8;
          }
          else {
            in_R8 = (undefined1 (*) [16])((long)pauVar10 * 2);
            sVar24 = (long)pauVar10 << 5;
            if (pauVar10 < in_R8) goto LAB_001025ed;
          }
          *(undefined1 **)(lVar23 + 0x118) = *pauVar26 + 1;
          *(undefined1 (**) [16])(*pauVar12 + sVar32) = pauVar4;
          *(ulong *)((long)(*pauVar12 + sVar32) + 8) = uVar18;
          goto LAB_0010197b;
        }
        uVar36 = *(undefined8 *)*pauVar33;
        uVar37 = *(undefined8 *)(*pauVar33 + 8);
        *(undefined1 **)(lVar23 + 0x118) = *pauVar26 + 1;
        pauVar10 = *(undefined1 (**) [16])(lVar23 + 0x130);
        *(undefined8 *)pauVar12[(long)pauVar26] = uVar36;
        *(undefined8 *)(pauVar12[(long)pauVar26] + 8) = uVar37;
      }
      if (pauVar10 != (undefined1 (*) [16])0x0) {
        pauVar26 = *(undefined1 (**) [16])(lVar23 + 0x128);
        sVar32 = (long)pauVar10 * 0xc;
        puVar13 = (undefined8 *)(*pauVar26 + (long)(int)local_120 * 0xc);
        pauVar12 = *(undefined1 (**) [16])(lVar23 + 0x138);
        if (pauVar10 < pauVar12) {
          uVar36 = *puVar13;
          *(undefined1 **)(lVar23 + 0x130) = *pauVar10 + 1;
          *(undefined8 *)(*pauVar26 + sVar32) = uVar36;
          *(undefined4 *)(*pauVar26 + sVar32 + 8) = *(undefined4 *)(puVar13 + 1);
        }
        else {
          in_R10 = (undefined1 (*) [16])*puVar13;
          uVar17 = *(undefined4 *)(puVar13 + 1);
          if (pauVar12 == (undefined1 (*) [16])0x0) {
            sVar24 = 0x600;
            pauVar11 = (undefined1 (*) [16])0x80;
LAB_00102a89:
            local_118._4_4_ = (undefined4)((ulong)local_118 >> 0x20);
            local_118 = (undefined1 (*) [16])CONCAT44(local_118._4_4_,uVar17);
            pauVar12 = (undefined1 (*) [16])malloc(sVar24);
            if ((long)sVar32 < 0xd) {
              if (sVar32 == 0xc) {
                *(undefined8 *)*pauVar12 = *(undefined8 *)*pauVar26;
                *(undefined4 *)(*pauVar12 + 8) = *(undefined4 *)(*pauVar26 + 8);
                local_f8 = pauVar26;
                goto LAB_00102b05;
              }
              local_f8 = pauVar26;
              if (pauVar26 != (undefined1 (*) [16])0x0) goto LAB_00102b05;
            }
            else {
              local_f8 = (undefined1 (*) [16])((ulong)pauVar26 & 0xffffffff00000000);
              pauVar12 = (undefined1 (*) [16])memmove(pauVar12,pauVar26,sVar32);
LAB_00102b05:
              local_f8 = (undefined1 (*) [16])CONCAT44(local_f8._4_4_,uVar17);
              free(pauVar26);
              pauVar10 = *(undefined1 (**) [16])(lVar23 + 0x130);
              sVar32 = (long)pauVar10 * 0xc;
              local_118 = pauVar11;
            }
            pauVar26 = pauVar12;
            local_138 = (undefined1 (*) [16])(in_R11 & 0xffffffff);
            in_R11 = in_R11 & 0xffffffff;
            *(undefined1 (**) [16])(lVar23 + 0x128) = pauVar26;
            *(undefined1 (**) [16])(lVar23 + 0x138) = pauVar11;
            in_R8 = pauVar26;
          }
          else {
            pauVar11 = (undefined1 (*) [16])((long)pauVar12 * 2);
            if (pauVar12 < pauVar11) {
              sVar24 = (long)pauVar12 * 0x18;
              goto LAB_00102a89;
            }
          }
          *(undefined1 **)(lVar23 + 0x130) = *pauVar10 + 1;
          *(undefined1 (**) [16])(*pauVar26 + sVar32) = in_R10;
          *(undefined4 *)((long)(*pauVar26 + sVar32) + 8) = uVar17;
        }
      }
      pauVar26 = *(undefined1 (**) [16])(lVar23 + 0x98);
      if (pauVar26 != (undefined1 (*) [16])0x0) {
        pauVar10 = *(undefined1 (**) [16])(lVar23 + 0x90);
        sVar32 = (long)pauVar26 * 0x18;
        pauVar12 = (undefined1 (*) [16])((long)pauVar10 + (long)(int)local_120 * 0x18);
        pauVar33 = *(undefined1 (**) [16])(lVar23 + 0xa0);
        if (pauVar26 < pauVar33) {
          auVar1 = *pauVar12;
          *(undefined1 **)(lVar23 + 0x98) = *pauVar26 + 1;
          *(undefined1 (*) [16])((long)pauVar10 + sVar32) = auVar1;
          *(undefined8 *)((long)pauVar10 + sVar32 + 0x10) = *(undefined8 *)pauVar12[1];
        }
        else {
          uVar36 = *(undefined8 *)*pauVar12;
          uVar37 = *(undefined8 *)(*pauVar12 + 8);
          pauVar12 = *(undefined1 (**) [16])pauVar12[1];
          if (pauVar33 == (undefined1 (*) [16])0x0) {
            sVar24 = 0xc00;
            in_R8 = (undefined1 (*) [16])0x80;
LAB_00102816:
            pauVar11 = (undefined1 (*) [16])malloc(sVar24);
            if ((long)sVar32 < 0x19) {
              if (sVar32 == 0x18) {
                uVar5 = *(undefined8 *)(*pauVar10 + 8);
                *(undefined8 *)*pauVar11 = *(undefined8 *)*pauVar10;
                *(undefined8 *)(*pauVar11 + 8) = uVar5;
                *(undefined8 *)pauVar11[1] = *(undefined8 *)pauVar10[1];
                goto LAB_0010289d;
              }
              local_120 = pauVar10;
              local_118 = in_R8;
              local_f8 = pauVar12;
              if (pauVar10 != (undefined1 (*) [16])0x0) goto LAB_0010289d;
            }
            else {
              pauVar11 = (undefined1 (*) [16])memmove(pauVar11,pauVar10,sVar32);
LAB_0010289d:
              free(pauVar10);
              pauVar26 = *(undefined1 (**) [16])(lVar23 + 0x98);
              sVar32 = (long)pauVar26 * 0x18;
              local_120 = pauVar12;
              local_118 = pauVar11;
              local_f8 = in_R8;
            }
            pauVar10 = pauVar11;
            local_138 = (undefined1 (*) [16])(in_R11 & 0xffffffff);
            in_R11 = in_R11 & 0xffffffff;
            *(undefined1 (**) [16])(lVar23 + 0x90) = pauVar10;
            *(undefined1 (**) [16])(lVar23 + 0xa0) = in_R8;
            pauVar11 = pauVar10;
          }
          else {
            in_R8 = (undefined1 (*) [16])((long)pauVar33 * 2);
            if (pauVar33 < in_R8) {
              sVar24 = (long)pauVar33 * 0x30;
              goto LAB_00102816;
            }
          }
          puVar13 = (undefined8 *)(*pauVar10 + sVar32);
          *(undefined1 **)(lVar23 + 0x98) = *pauVar26 + 1;
          *puVar13 = uVar36;
          puVar13[1] = uVar37;
          puVar13[2] = pauVar12;
        }
      }
    } while (in_ESI != (int)in_R11);
  } while( true );
}



/* manifold::Manifold::Impl::PairUp(int, int) */

void __thiscall manifold::Manifold::Impl::PairUp(Impl *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x60);
  *(int *)(lVar1 + 8 + (long)param_1 * 0xc) = param_2;
  *(int *)(lVar1 + 8 + (long)param_2 * 0xc) = param_1;
  return;
}



/* manifold::Manifold::Impl::UpdateVert(int, int, int) */

void __thiscall manifold::Manifold::Impl::UpdateVert(Impl *this,int param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  
  if (param_2 != param_3) {
    lVar1 = *(long *)(this + 0x60);
    do {
      lVar2 = (long)param_2 * 0xc;
      *(int *)(lVar1 + 4 + lVar2) = param_1;
      lVar4 = lVar2 + -0x18;
      if (0x55555554 < (param_2 + 1) * -0x55555555 + 0x2aaaaaaaU) {
        lVar4 = lVar2 + 0xc;
      }
      piVar3 = (int *)(lVar4 + lVar1);
      param_2 = piVar3[2];
      *piVar3 = param_1;
    } while (param_3 != param_2);
  }
  return;
}



/* manifold::Manifold::Impl::CollapseTri(linalg::vec<int, 3> const&) */

void __thiscall manifold::Manifold::Impl::CollapseTri(Impl *this,vec *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined4 local_18;
  int local_14;
  long local_10;
  
  lVar4 = *(long *)(this + 0x60);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)(lVar4 + 8 + (long)*(int *)(param_1 + 4) * 0xc);
  if (iVar2 != -1) {
    local_18 = 2;
    iVar3 = *(int *)(lVar4 + 8 + (long)*(int *)(param_1 + 8) * 0xc);
    *(int *)(lVar4 + 8 + (long)iVar2 * 0xc) = iVar3;
    uVar5 = _LC3;
    *(int *)(lVar4 + 8 + (long)iVar3 * 0xc) = iVar2;
    piVar7 = (int *)&local_20;
    local_20 = _LC2;
    do {
      if (*piVar7 == 0) {
        lVar6 = (long)*(int *)param_1;
      }
      else if (*piVar7 == 1) {
        lVar6 = (long)*(int *)(param_1 + 4);
      }
      else {
        lVar6 = (long)*(int *)(param_1 + 8);
      }
      piVar7 = piVar7 + 1;
      puVar1 = (undefined8 *)(lVar4 + lVar6 * 0xc);
      *puVar1 = uVar5;
      *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    } while (piVar7 != &local_14);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Impl::RemoveIfFolded(int) */

void __thiscall manifold::Manifold::Impl::RemoveIfFolded(Impl *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  int *piVar13;
  undefined8 *puVar14;
  int *piVar15;
  int *piVar16;
  long in_FS_OFFSET;
  undefined8 uVar17;
  undefined8 local_40;
  undefined4 local_38;
  int local_34;
  long local_30;
  
  uVar12 = _LC5;
  uVar17 = _LC2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = param_1 + 1;
  if ((param_1 + 1) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
    iVar7 = param_1 + -2;
  }
  iVar8 = iVar7 + 1;
  if ((iVar7 + 1) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
    iVar8 = iVar7 + -2;
  }
  lVar9 = *(long *)(this + 0x60);
  piVar1 = (int *)(lVar9 + (long)param_1 * 0xc);
  iVar5 = piVar1[2];
  iVar11 = iVar5 + 1;
  if ((iVar5 + 1) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
    iVar11 = iVar5 + -2;
  }
  piVar2 = (int *)(lVar9 + (long)iVar7 * 0xc);
  iVar7 = iVar11 + 1;
  if ((iVar11 + 1) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
    iVar7 = iVar11 + -2;
  }
  iVar6 = piVar2[2];
  if ((iVar6 == -1) || (piVar3 = (int *)(lVar9 + (long)iVar11 * 0xc), piVar2[1] != piVar3[1])) {
LAB_00103dbf:
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  piVar4 = (int *)(lVar9 + (long)iVar8 * 0xc);
  if (iVar6 == iVar7) {
    lVar10 = *(long *)(this + 0x48);
    if (iVar11 == piVar4[2]) {
      piVar16 = (int *)&local_40;
      local_38 = 2;
      local_40 = _LC2;
      do {
        piVar13 = piVar1;
        if ((*piVar16 != 0) && (piVar13 = piVar2, *piVar16 != 1)) {
          piVar13 = piVar4;
        }
        piVar16 = piVar16 + 1;
        puVar14 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x18);
        *puVar14 = uVar12;
        puVar14[1] = uVar12;
        puVar14[2] = uVar12;
      } while (piVar16 != &local_34);
      goto LAB_00103e10;
    }
    puVar14 = (undefined8 *)(lVar10 + (long)*piVar2 * 0x18);
  }
  else {
    if (iVar11 != piVar4[2]) goto LAB_00103e10;
    puVar14 = (undefined8 *)(*(long *)(this + 0x48) + (long)*piVar3 * 0x18);
  }
  puVar14[2] = _LC5;
  *puVar14 = uVar12;
  puVar14[1] = uVar12;
  uVar17 = _LC2;
LAB_00103e10:
  local_38 = 2;
  piVar13 = (int *)&local_40;
  local_40 = uVar17;
  uVar17 = local_40;
  piVar16 = (int *)(lVar9 + (long)iVar7 * 0xc);
  iVar7 = piVar16[2];
  *(int *)(lVar9 + 8 + (long)iVar6 * 0xc) = iVar7;
  *(int *)(lVar9 + 8 + (long)iVar7 * 0xc) = iVar6;
  iVar7 = piVar4[2];
  iVar8 = piVar3[2];
  *(int *)(lVar9 + 8 + (long)iVar7 * 0xc) = iVar8;
  *(int *)(lVar9 + 8 + (long)iVar8 * 0xc) = iVar7;
  uVar12 = _LC3;
  local_40._0_4_ = (int)uVar17;
  if ((int)local_40 != 0) goto LAB_00103e9d;
  do {
    *(undefined8 *)piVar1 = uVar12;
    piVar1[2] = -1;
    piVar15 = (int *)(lVar9 + (long)iVar5 * 0xc);
    while( true ) {
      piVar13 = piVar13 + 1;
      *(undefined8 *)piVar15 = uVar12;
      piVar15[2] = -1;
      local_40 = uVar17;
      if (piVar13 == &local_34) goto LAB_00103dbf;
      local_40._0_4_ = *piVar13;
      if ((int)local_40 == 0) break;
LAB_00103e9d:
      if ((int)local_40 == 1) {
        *(undefined8 *)piVar2 = uVar12;
        piVar2[2] = -1;
        piVar15 = piVar3;
      }
      else {
        *(undefined8 *)piVar4 = uVar12;
        piVar4[2] = -1;
        piVar15 = piVar16;
      }
    }
  } while( true );
}



/* manifold::Manifold::Impl::FormLoop(int, int) */

void __thiscall manifold::Manifold::Impl::FormLoop(Impl *this,int param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  size_t sVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined4 uVar18;
  long lVar19;
  int *piVar20;
  
  lVar19 = (long)param_1 * 0xc;
  lVar14 = *(long *)(this + 0x60);
  uVar15 = *(ulong *)(this + 0x50);
  puVar16 = *(undefined8 **)(this + 0x48);
  uVar11 = *(ulong *)(this + 0x58);
  piVar20 = (int *)(lVar14 + lVar19);
  uVar18 = (undefined4)uVar15;
  puVar10 = puVar16 + (long)*piVar20 * 3;
  if (uVar15 < uVar11) {
    uVar12 = uVar15 + 1;
    uVar2 = *puVar10;
    uVar5 = puVar10[1];
    *(ulong *)(this + 0x50) = uVar12;
    puVar1 = puVar16 + uVar15 * 3;
    *puVar1 = uVar2;
    puVar1[1] = uVar5;
    puVar1[2] = puVar10[2];
  }
  else {
    uVar5 = *puVar10;
    uVar6 = puVar10[1];
    uVar2 = puVar10[2];
    if (uVar11 == 0) {
      sVar13 = 0xc00;
      uVar11 = 0x80;
LAB_0010412c:
      puVar10 = (undefined8 *)malloc(sVar13);
      if (uVar15 == 0) {
LAB_0010417a:
        if (puVar16 != (undefined8 *)0x0) goto LAB_00104327;
      }
      else {
        sVar13 = uVar15 * 0x18;
        if ((long)sVar13 < 0x19) {
          if (sVar13 != 0x18) goto LAB_0010417a;
          uVar7 = puVar16[1];
          *puVar10 = *puVar16;
          puVar10[1] = uVar7;
          puVar10[2] = puVar16[2];
        }
        else {
          puVar10 = (undefined8 *)memmove(puVar10,puVar16,sVar13);
        }
LAB_00104327:
        free(puVar16);
        lVar14 = *(long *)(this + 0x60);
        uVar15 = *(ulong *)(this + 0x50);
        piVar20 = (int *)(lVar14 + lVar19);
      }
      puVar16 = puVar10;
      *(undefined8 **)(this + 0x48) = puVar16;
      *(ulong *)(this + 0x58) = uVar11;
    }
    else if (uVar11 < uVar11 * 2) {
      sVar13 = uVar11 * 0x30;
      uVar11 = uVar11 * 2;
      goto LAB_0010412c;
    }
    uVar12 = uVar15 + 1;
    puVar10 = puVar16 + uVar15 * 3;
    *(ulong *)(this + 0x50) = uVar12;
    *puVar10 = uVar5;
    puVar10[1] = uVar6;
    puVar10[2] = uVar2;
  }
  puVar10 = puVar16 + (long)piVar20[1] * 3;
  if (uVar12 < uVar11) {
    uVar2 = *puVar10;
    uVar5 = puVar10[1];
    puVar16 = puVar16 + uVar12 * 3;
    *(ulong *)(this + 0x50) = uVar12 + 1;
    *puVar16 = uVar2;
    puVar16[1] = uVar5;
    puVar16[2] = puVar10[2];
    goto LAB_00104037;
  }
  uVar5 = *puVar10;
  uVar6 = puVar10[1];
  uVar2 = puVar10[2];
  if (uVar11 < uVar11 * 2) {
    puVar10 = (undefined8 *)malloc(uVar11 * 0x30);
    sVar13 = uVar12 * 0x18;
    if ((long)sVar13 < 0x19) {
      if (sVar13 == 0x18) {
        uVar7 = puVar16[1];
        *puVar10 = *puVar16;
        puVar10[1] = uVar7;
        puVar10[2] = puVar16[2];
        goto LAB_001042a3;
      }
      if (puVar16 != (undefined8 *)0x0) goto LAB_001042a3;
    }
    else {
      memmove(puVar10,puVar16,sVar13);
LAB_001042a3:
      free(puVar16);
    }
    *(undefined8 **)(this + 0x48) = puVar10;
    *(ulong *)(this + 0x58) = uVar11 * 2;
  }
  else {
    puVar10 = *(undefined8 **)(this + 0x48);
  }
  puVar10 = puVar10 + *(long *)(this + 0x50) * 3;
  lVar14 = *(long *)(this + 0x60);
  *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
  *puVar10 = uVar5;
  puVar10[1] = uVar6;
  puVar10[2] = uVar2;
  piVar20 = (int *)(lVar14 + lVar19);
LAB_00104037:
  iVar3 = piVar20[2];
  lVar19 = lVar14 + (long)param_2 * 0xc;
  iVar4 = *(int *)(lVar19 + 8);
  iVar17 = iVar3;
  while (iVar17 != iVar4) {
    lVar8 = (long)iVar17 * 0xc;
    *(undefined4 *)(lVar14 + 4 + lVar8) = uVar18;
    lVar9 = lVar8 + -0x18;
    if (0x55555554 < (iVar17 + 1) * -0x55555555 + 0x2aaaaaaaU) {
      lVar9 = lVar8 + 0xc;
    }
    iVar17 = ((undefined4 *)(lVar9 + lVar14))[2];
    *(undefined4 *)(lVar9 + lVar14) = uVar18;
  }
  iVar17 = param_2;
  if (param_1 != param_2) {
    do {
      lVar8 = (long)iVar17 * 0xc;
      *(int *)(lVar14 + 4 + lVar8) = (int)uVar12;
      lVar9 = lVar8 + -0x18;
      if (0x55555554 < (iVar17 + 1) * -0x55555555 + 0x2aaaaaaaU) {
        lVar9 = lVar8 + 0xc;
      }
      iVar17 = ((undefined4 *)(lVar9 + lVar14))[2];
      *(undefined4 *)(lVar9 + lVar14) = (int)uVar12;
    } while (param_1 != iVar17);
  }
  piVar20[2] = iVar4;
  *(int *)(lVar14 + 8 + (long)iVar4 * 0xc) = param_1;
  *(int *)(lVar19 + 8) = iVar3;
  *(int *)(lVar14 + 8 + (long)iVar3 * 0xc) = param_2;
  RemoveIfFolded(this,param_2);
  return;
}



/* manifold::Manifold::Impl::RecursiveEdgeSwap(int, int&, std::vector<int, std::allocator<int> >&,
   std::vector<int, std::allocator<int> >&, std::vector<int, std::allocator<int>
   >&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
manifold::Manifold::Impl::
RecursiveEdgeSwap(int,int&,std::vector<int,std::allocator<int>>&,std::vector<int,std::allocator<int>>&,std::vector<int,std::allocator<int>>&)
::{lambda()#1}::operator()(_lambda___1_ *this)

{
  Impl *pIVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double *pdVar4;
  ulong uVar5;
  undefined8 uVar6;
  double dVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  Impl *this_00;
  undefined8 *puVar15;
  int *piVar16;
  size_t sVar17;
  int *piVar18;
  long lVar19;
  int *piVar20;
  int *piVar21;
  ulong uVar22;
  int iVar23;
  int *piVar24;
  int iVar25;
  long lVar26;
  int *piVar27;
  ulong uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  int local_80;
  
  piVar16 = *(int **)(this + 0x10);
  this_00 = *(Impl **)this;
  piVar18 = *(int **)(this + 8);
  lVar26 = *(long *)(this_00 + 0x60);
  uVar2 = *(undefined4 *)(lVar26 + (long)piVar16[2] * 0xc);
  uVar3 = *(undefined4 *)(lVar26 + (long)piVar18[2] * 0xc);
  *(undefined4 *)(lVar26 + (long)*piVar18 * 0xc) = uVar2;
  *(undefined4 *)(lVar26 + 4 + (long)piVar18[2] * 0xc) = uVar2;
  *(undefined4 *)(lVar26 + (long)*piVar16 * 0xc) = uVar3;
  *(undefined4 *)(lVar26 + 4 + (long)piVar16[2] * 0xc) = uVar3;
  iVar23 = *(int *)(lVar26 + 8 + (long)piVar16[2] * 0xc);
  iVar8 = *piVar18;
  lVar14 = *(long *)(this_00 + 0x90);
  *(int *)(lVar26 + 8 + (long)iVar8 * 0xc) = iVar23;
  *(int *)(lVar26 + 8 + (long)iVar23 * 0xc) = iVar8;
  iVar23 = *piVar16;
  iVar8 = *(int *)(lVar26 + 8 + (long)piVar18[2] * 0xc);
  *(int *)(lVar26 + 8 + (long)iVar23 * 0xc) = iVar8;
  *(int *)(lVar26 + 8 + (long)iVar8 * 0xc) = iVar23;
  iVar23 = piVar18[2];
  iVar8 = piVar16[2];
  *(int *)(lVar26 + 8 + (long)iVar23 * 0xc) = iVar8;
  *(int *)(lVar26 + 8 + (long)iVar8 * 0xc) = iVar23;
  lVar19 = (long)(*piVar16 / 3);
  lVar9 = (long)(*piVar18 / 3);
  puVar15 = (undefined8 *)(lVar14 + lVar9 * 0x18);
  puVar12 = (undefined8 *)(lVar14 + lVar19 * 0x18);
  uVar6 = puVar12[1];
  *puVar15 = *puVar12;
  puVar15[1] = uVar6;
  puVar15[2] = puVar12[2];
  puVar15 = (undefined8 *)(**(long **)(this + 0x18) + lVar19 * 0x10);
  uVar6 = puVar15[1];
  puVar12 = (undefined8 *)(**(long **)(this + 0x18) + lVar9 * 0x10);
  *puVar12 = *puVar15;
  puVar12[1] = uVar6;
  dVar7 = _LC6;
  pdVar4 = *(double **)(this + 0x20);
  dVar29 = pdVar4[2] - *pdVar4;
  dVar31 = pdVar4[3] - pdVar4[1];
  dVar32 = pdVar4[4] - *pdVar4;
  dVar30 = pdVar4[5] - pdVar4[1];
  dVar30 = SQRT(dVar30 * dVar30 + dVar32 * dVar32 + 0.0) /
           SQRT(dVar29 * dVar29 + 0.0 + dVar31 * dVar31);
  dVar29 = _LC6;
  if ((dVar30 < _LC6) && (dVar29 = dVar30, dVar30 <= 0.0)) {
    dVar29 = 0.0;
  }
  uVar28 = *(ulong *)(this_00 + 0xd0);
  if (uVar28 == 0) goto LAB_001047a2;
  piVar21 = *(int **)(this + 0x30);
  piVar20 = (int *)(*(long *)(this_00 + 0x128) + lVar19 * 0xc);
  piVar24 = (int *)(*(long *)(this_00 + 0x128) + lVar9 * 0xc);
  *(undefined8 *)piVar24 = *(undefined8 *)piVar20;
  piVar24[2] = piVar20[2];
  if (*piVar21 == 0) {
    iVar23 = *piVar20;
  }
  else if (*piVar21 == 1) {
    iVar23 = piVar20[1];
  }
  else {
    iVar23 = piVar20[2];
  }
  piVar27 = *(int **)(this + 0x28);
  piVar10 = piVar24;
  if (piVar27[1] != 0) {
    piVar10 = piVar24 + 2;
    if (piVar27[1] == 1) {
      piVar10 = piVar24 + 1;
    }
  }
  *piVar10 = iVar23;
  if (piVar21[2] == 0) {
    iVar23 = *piVar20;
  }
  else if (piVar21[2] == 1) {
    iVar23 = piVar20[1];
  }
  else {
    iVar23 = piVar20[2];
  }
  piVar10 = piVar24;
  if (*piVar27 != 0) {
    piVar10 = piVar24 + 2;
    if (*piVar27 == 1) {
      piVar10 = piVar24 + 1;
    }
  }
  *piVar10 = iVar23;
  iVar23 = *(int *)(this_00 + 0xc4);
  uVar11 = uVar28 / (ulong)(long)iVar23;
  iVar8 = *piVar21;
  if (iVar8 == 0) {
    iVar13 = *piVar20;
  }
  else if (iVar8 == 1) {
    iVar13 = piVar20[1];
  }
  else {
    iVar13 = piVar20[2];
  }
  if (piVar21[1] == 0) {
    iVar25 = *piVar20;
  }
  else if (piVar21[1] == 1) {
    iVar25 = piVar20[1];
  }
  else {
    iVar25 = piVar20[2];
  }
  if (0 < iVar23) {
    lVar14 = (long)(iVar13 * iVar23);
    lVar26 = lVar14 * 8;
    do {
      puVar15 = *(undefined8 **)(this_00 + 200);
      uVar5 = *(ulong *)(this_00 + 0xd8);
      dVar30 = *(double *)((long)puVar15 + lVar26);
      dVar31 = *(double *)((long)puVar15 + (iVar25 * iVar23 - lVar14) * 8 + lVar26);
      if (uVar5 <= uVar28) {
        if (uVar5 == 0) {
          sVar17 = 0x400;
          uVar22 = 0x80;
        }
        else {
          uVar22 = uVar5 * 2;
          if (uVar22 <= uVar5) goto LAB_001046b8;
          sVar17 = uVar5 << 4;
        }
        puVar12 = (undefined8 *)malloc(sVar17);
        if (uVar28 == 0) {
LAB_001048a2:
          if (puVar15 != (undefined8 *)0x0) goto LAB_001048a7;
        }
        else {
          sVar17 = uVar28 * 8;
          if (8 < (long)sVar17) {
            puVar12 = (undefined8 *)memmove(puVar12,puVar15,sVar17);
            puVar15 = *(undefined8 **)(this_00 + 200);
            goto LAB_001048a2;
          }
          if (sVar17 != 8) goto LAB_001048a2;
          *puVar12 = *puVar15;
LAB_001048a7:
          free(puVar15);
        }
        puVar15 = puVar12;
        *(undefined8 **)(this_00 + 200) = puVar15;
        uVar28 = *(ulong *)(this_00 + 0xd0);
        *(ulong *)(this_00 + 0xd8) = uVar22;
      }
LAB_001046b8:
      lVar26 = lVar26 + 8;
      *(ulong *)(this_00 + 0xd0) = uVar28 + 1;
      puVar15[uVar28] = dVar31 * (dVar7 - dVar29) + dVar30 * dVar29;
      if (lVar26 == (iVar23 + lVar14) * 8) goto LAB_00104730;
      uVar28 = *(ulong *)(this_00 + 0xd0);
    } while( true );
  }
LAB_0010476a:
  piVar21 = piVar20;
  if (iVar8 != 0) {
    piVar21 = piVar20 + 2;
    if (iVar8 == 1) {
      piVar21 = piVar20 + 1;
    }
  }
  local_80 = (int)uVar11;
  *piVar21 = local_80;
  piVar20 = piVar24;
  if (piVar27[2] != 0) {
    piVar20 = piVar24 + 2;
    if (piVar27[2] == 1) {
      piVar20 = piVar24 + 1;
    }
  }
  *piVar20 = local_80;
LAB_001047a2:
  iVar23 = *(int *)(lVar26 + 8 + (long)*piVar16 * 0xc);
  while( true ) {
    if (iVar23 == piVar18[1]) {
      return;
    }
    iVar8 = iVar23 + 1;
    if ((iVar23 + 1) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
      iVar8 = iVar23 + -2;
    }
    lVar14 = lVar26 + (long)iVar8 * 0xc;
    if (*(int *)(lVar14 + 4) == *(int *)(lVar26 + 4 + (long)piVar16[1] * 0xc)) break;
    iVar23 = *(int *)(lVar14 + 8);
  }
  FormLoop(this_00,piVar18[2],iVar8);
  RemoveIfFolded(*(Impl **)this,*(int *)(*(long *)(this + 8) + 8));
  return;
LAB_00104730:
  pIVar1 = this_00 + 0x128;
  this_00 = *(Impl **)this;
  piVar24 = (int *)(lVar9 * 0xc + *(long *)pIVar1);
  piVar27 = *(int **)(this + 0x28);
  piVar20 = (int *)(*(long *)pIVar1 + lVar19 * 0xc);
  piVar16 = *(int **)(this + 0x10);
  iVar8 = **(int **)(this + 0x30);
  lVar26 = *(long *)(this_00 + 0x60);
  piVar18 = *(int **)(this + 8);
  goto LAB_0010476a;
}



/* manifold::Manifold::Impl::SplitPinchedVerts() */

void manifold::Manifold::Impl::SplitPinchedVerts(void)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  void *pvVar7;
  long *plVar8;
  size_t sVar9;
  undefined8 *puVar10;
  byte bVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined1 *puVar14;
  code *pcVar15;
  long in_RDI;
  ulong uVar16;
  undefined1 *in_R9;
  undefined8 *in_R10;
  ulong uVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  undefined1 uVar21;
  undefined8 uVar22;
  undefined8 extraout_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM1_Qb;
  void *local_e8;
  void *local_e0;
  void *local_a8;
  undefined4 local_a0;
  void *local_98;
  ulong local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined1 local_68 [16];
  code *local_58;
  code *pcStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e0 = (void *)0x0;
  local_e8 = (void *)0x0;
  if (*(long *)(in_RDI + 0x50) != 0) {
    uVar20 = (*(long *)(in_RDI + 0x50) + 0x3fU >> 6) * 8;
    local_e8 = operator_new(uVar20);
    local_e0 = (void *)((long)local_e8 + uVar20);
    memset(local_e8,0,uVar20);
  }
  local_98 = (void *)0x0;
  uVar20 = *(ulong *)(in_RDI + 0x68);
  local_90 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = (void *)0x0;
  if (uVar20 != 0) {
    uVar17 = (uVar20 + 0x3f >> 6) * 8;
    local_98 = operator_new(uVar17);
    local_90 = local_90 & 0xffffffff00000000;
    uVar12 = uVar20 + 0x3f;
    if (-1 < (long)uVar20) {
      uVar12 = uVar20;
    }
    local_78 = (void *)((long)local_98 + uVar17);
    puVar19 = (undefined1 *)((long)uVar12 >> 6);
    local_a8 = (void *)((long)local_98 + (long)puVar19 * 8);
    lVar6 = (long)uVar20 % 0x40;
    if (lVar6 < 0) {
      lVar6 = lVar6 + 0x40;
      local_a8 = (void *)((long)local_a8 + -8);
    }
    local_a0 = (undefined4)lVar6;
    local_80 = CONCAT44(local_80._4_4_,local_a0);
    local_88 = local_a8;
    pvVar7 = memset(local_98,0,uVar17);
    puVar5 = PTR__M_manager_001080e0;
    if (*(long *)(in_RDI + 0x68) != 0) {
      uVar20 = 0;
      do {
        uVar12 = uVar20 + 0x3f;
        if (-1 < (long)uVar20) {
          uVar12 = uVar20;
        }
        puVar13 = (ulong *)((long)pvVar7 + ((long)uVar12 >> 6) * 8);
        uVar12 = (long)uVar20 % 0x40;
        if ((long)uVar12 < 0) {
          puVar13 = puVar13 + -1;
          uVar12 = (ulong)((int)uVar12 + 0x40);
        }
        if ((1L << ((byte)uVar12 & 0x3f) & *puVar13) == 0) {
          iVar2 = *(int *)(*(long *)(in_RDI + 0x60) + uVar20 * 0xc);
          uVar17 = (ulong)iVar2;
          uVar12 = uVar17 + 0x3f;
          if (-1 < (long)uVar17) {
            uVar12 = uVar17;
          }
          puVar13 = (ulong *)((long)local_e8 + ((long)uVar12 >> 6) * 8);
          lVar6 = (ulong)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1a) & 0x3f) -
                  ((ulong)((long)uVar17 >> 0x3f) >> 0x3a);
          bVar11 = (byte)lVar6;
          if (lVar6 < 0) {
            puVar13 = puVar13 + -1;
            uVar16 = 1L << (bVar11 + 0x40 & 0x3f);
            uVar12 = *puVar13;
            uVar3 = uVar12 & uVar16;
          }
          else {
            uVar16 = 1L << (bVar11 & 0x3f);
            uVar12 = *puVar13;
            uVar3 = uVar12 & uVar16;
          }
          if (uVar3 != 0) {
            puVar18 = *(undefined8 **)(in_RDI + 0x48);
            puVar19 = *(undefined1 **)(in_RDI + 0x50);
            puVar10 = puVar18 + uVar17 * 3;
            puVar14 = *(undefined1 **)(in_RDI + 0x58);
            if (puVar19 < puVar14) {
              uVar22 = *puVar10;
              uVar4 = puVar10[1];
              puVar14 = puVar19 + 1;
              puVar18 = puVar18 + (long)puVar19 * 3;
              *(undefined1 **)(in_RDI + 0x50) = puVar14;
              *puVar18 = uVar22;
              puVar18[1] = uVar4;
              puVar18[2] = puVar10[2];
              goto LAB_00104dac;
            }
            in_XMM1_Qa = *puVar10;
            in_XMM1_Qb = puVar10[1];
            uVar22 = puVar10[2];
            if (puVar14 == (undefined1 *)0x0) {
              sVar9 = 0xc00;
              in_R9 = (undefined1 *)0x80;
            }
            else {
              in_R9 = (undefined1 *)((long)puVar14 * 2);
              if (in_R9 <= puVar14) goto LAB_00104dd3;
              sVar9 = (long)puVar14 * 0x30;
            }
            puVar10 = (undefined8 *)malloc(sVar9);
            in_R10 = puVar10;
            if (puVar19 == (undefined1 *)0x0) goto LAB_00104e27;
            sVar9 = (long)puVar19 * 0x18;
            uVar21 = sVar9 == 0x18;
            if ((long)sVar9 < 0x19) goto LAB_00104ec0;
            in_R10 = (undefined8 *)memmove(puVar10,puVar18,sVar9);
            goto LAB_00104e73;
          }
          *puVar13 = uVar12 | uVar16;
          do {
            local_58 = (code *)0x0;
            pcStack_50 = (code *)0x0;
            local_68 = (undefined1  [16])0x0;
            plVar8 = (long *)operator_new(0x18);
            *(int *)(plVar8 + 2) = (int)uVar17;
            puVar18 = (undefined8 *)(uVar20 & 0xffffffff);
            *plVar8 = in_RDI;
            plVar8[1] = (long)&local_98;
            local_68._0_8_ = plVar8;
            local_58 = (code *)puVar5;
            pcStack_50 = std::
                         _Function_handler<void(int),manifold::Manifold::Impl::SplitPinchedVerts()::{lambda(int)#1}>
                         ::_M_invoke;
            pcVar15 = std::
                      _Function_handler<void(int),manifold::Manifold::Impl::SplitPinchedVerts()::{lambda(int)#1}>
                      ::_M_manager;
            while( true ) {
              iVar2 = *(int *)(*(long *)(in_RDI + 0x60) + (long)(int)puVar18 * 0xc + 8);
              uVar1 = iVar2 + 1;
              if (uVar1 * -0x55555555 + 0x2aaaaaaa < 0x55555555) {
                uVar1 = iVar2 - 2;
              }
              puVar18 = (undefined8 *)(ulong)uVar1;
              local_a8 = (void *)CONCAT44(local_a8._4_4_,uVar1);
              uVar21 = pcVar15 == (code *)0x0;
              if ((bool)uVar21) break;
              puVar19 = local_68;
              (*pcStack_50)(puVar19,&local_a8);
              pcVar15 = local_58;
              if (uVar1 == (uint)uVar20) {
                pvVar7 = local_98;
                if (local_58 != (code *)0x0) {
                  (*local_58)(puVar19,puVar19,3);
                  pvVar7 = local_98;
                }
                goto LAB_00104d27;
              }
            }
            puVar10 = (undefined8 *)std::__throw_bad_function_call();
            uVar22 = extraout_XMM0_Qa;
LAB_00104ec0:
            if ((bool)uVar21) {
              uVar4 = puVar18[1];
              *puVar10 = *puVar18;
              puVar10[1] = uVar4;
              in_R10[2] = puVar18[2];
LAB_00104e73:
              free(puVar18);
              puVar19 = *(undefined1 **)(in_RDI + 0x50);
            }
            else {
LAB_00104e27:
              if (puVar18 != (undefined8 *)0x0) goto LAB_00104e73;
            }
            *(undefined8 **)(in_RDI + 0x48) = in_R10;
            *(undefined1 **)(in_RDI + 0x58) = in_R9;
            puVar18 = in_R10;
LAB_00104dd3:
            puVar14 = puVar19 + 1;
            puVar18 = puVar18 + (long)puVar19 * 3;
            *(undefined1 **)(in_RDI + 0x50) = puVar14;
            *puVar18 = in_XMM1_Qa;
            puVar18[1] = in_XMM1_Qb;
            puVar18[2] = uVar22;
LAB_00104dac:
            uVar17 = (ulong)((int)puVar14 - 1);
          } while( true );
        }
LAB_00104d27:
        uVar20 = uVar20 + 1;
      } while (uVar20 < *(ulong *)(in_RDI + 0x68));
      if (pvVar7 == (void *)0x0) goto LAB_00104a80;
    }
    operator_delete(pvVar7,(long)local_78 - (long)pvVar7);
  }
LAB_00104a80:
  if (local_e8 == (void *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator_delete((void *)((long)local_e0 - ((long)local_e0 - (long)local_e8)),
                    (long)local_e0 - (long)local_e8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Impl::CleanupTopology() [clone .part.0] */

void __thiscall manifold::Manifold::Impl::CleanupTopology(Impl *this)

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *__src;
  undefined8 *puVar8;
  size_t __n;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  size_t __size;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  
  SplitPinchedVerts();
LAB_00104ef6:
  uVar13 = *(ulong *)(this + 0x68);
  if (1 < uVar13) goto LAB_001050a4;
LAB_00104f04:
  __src = (undefined8 *)0x0;
  uVar12 = 0;
  lVar14 = -1;
  if (uVar13 == 0) goto LAB_0010501e;
  do {
    puVar10 = *(undefined8 **)(this + 0x60);
    uVar9 = 0;
    uVar15 = 0;
    do {
      while (uVar4 = *puVar10, (int)((ulong)uVar4 >> 0x20) <= (int)uVar4) {
        uVar9 = uVar9 + 1;
        puVar10 = (undefined8 *)((long)puVar10 + 0xc);
        if (uVar13 <= uVar9) goto LAB_00104f7a;
      }
      uVar1 = uVar15 + 1;
      __n = uVar15 * 0x10;
      puVar8 = __src;
      if (uVar12 <= uVar15) {
        if (uVar12 == 0) {
          __size = 0x800;
          uVar12 = 0x80;
        }
        else {
          if (uVar12 * 2 <= uVar12) goto LAB_00104f5f;
          __size = uVar12 << 5;
          uVar12 = uVar12 * 2;
        }
        puVar8 = (undefined8 *)malloc(__size);
        if (uVar15 == 0) {
LAB_00105152:
          if (__src == (undefined8 *)0x0) goto LAB_00104f5f;
        }
        else if ((long)__n < 0x11) {
          if (__n != 0x10) goto LAB_00105152;
          uVar5 = __src[1];
          *puVar8 = *__src;
          puVar8[1] = uVar5;
        }
        else {
          puVar8 = (undefined8 *)memmove(puVar8,__src,__n);
        }
        free(__src);
      }
LAB_00104f5f:
      puVar10 = (undefined8 *)((long)puVar10 + 0xc);
      (puVar8 + uVar15 * 2)[1] = uVar9;
      uVar9 = uVar9 + 1;
      puVar8[uVar15 * 2] = uVar4;
      __src = puVar8;
      uVar15 = uVar1;
    } while (uVar9 < uVar13);
LAB_00104f7a:
    lVar14 = uVar15 - 1;
    puVar10 = __src + uVar15 * 2;
    if (puVar10 != __src) {
      lVar6 = (((long)(uVar15 * 0x10) >> 4) + 1) / 2;
      lVar11 = lVar6;
      if ((long)(uVar15 * 0x10) < 1) {
        uVar13 = 0;
        pvVar7 = (void *)0x0;
        puVar8 = __src;
        if (lVar6 == 0) goto LAB_00104ffc;
LAB_00105170:
        uVar13 = 0;
        pvVar7 = (void *)0x0;
        std::
        __inplace_stable_sort<(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
                  (__src,puVar10);
      }
      else {
        while( true ) {
          uVar13 = lVar11 * 0x10;
          pvVar7 = operator_new(uVar13,(nothrow_t *)&std::nothrow);
          if (pvVar7 != (void *)0x0) break;
          if (lVar11 == 1) goto LAB_00105170;
          lVar11 = lVar11 + 1 >> 1;
        }
        puVar8 = __src + lVar11 * 2;
        if (lVar11 == lVar6) {
LAB_00104ffc:
          std::
          __stable_sort_adaptive<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,__gnu_cxx::__ops::_Iter_less_iter>
                    (__src,puVar8,puVar10,pvVar7);
        }
        else {
          std::
          __stable_sort_adaptive_resize<(anonymous_namespace)::SortEntry*,(anonymous_namespace)::SortEntry*,long,__gnu_cxx::__ops::_Iter_less_iter>
                    (__src,puVar10,pvVar7);
        }
      }
      operator_delete(pvVar7,uVar13);
    }
    if (lVar14 == 0) {
LAB_001050f0:
      if (__src == (undefined8 *)0x0) {
        return;
      }
      free(__src);
      return;
    }
LAB_0010501e:
    puVar10 = __src + 1;
    lVar6 = 0;
    lVar11 = 0;
    do {
      while( true ) {
        lVar11 = lVar11 + 1;
        piVar2 = (int *)(*(long *)(this + 0x60) + (long)(int)*puVar10 * 0xc);
        piVar3 = (int *)(*(long *)(this + 0x60) + (long)*(int *)(puVar10 + 2) * 0xc);
        if ((*piVar2 != *piVar3) || (piVar2[1] != piVar3[1])) break;
        lVar6 = lVar6 + 1;
        puVar10 = puVar10 + 2;
        DedupeEdge((int)this);
        if (lVar11 == lVar14) goto LAB_00105080;
      }
      puVar10 = puVar10 + 2;
    } while (lVar11 != lVar14);
LAB_00105080:
    if (lVar6 == 0) goto LAB_001050f0;
    if (__src == (undefined8 *)0x0) goto LAB_00104ef6;
    free(__src);
    uVar13 = *(ulong *)(this + 0x68);
    if (uVar13 < 2) goto LAB_00104f04;
LAB_001050a4:
    uVar12 = uVar13 >> 1;
    __src = (undefined8 *)malloc(uVar12 << 4);
  } while( true );
}



/* manifold::Manifold::Impl::CleanupTopology() */

void __thiscall manifold::Manifold::Impl::CleanupTopology(Impl *this)

{
  if (*(long *)(this + 0x68) == 0) {
    return;
  }
  CleanupTopology(this);
  return;
}



/* manifold::Manifold::Impl::CollapseEdge(int, std::vector<int, std::allocator<int> >&) */

void __thiscall manifold::Manifold::Impl::CollapseEdge(Impl *this,int param_1,vector *param_2)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  long lVar4;
  ulong *puVar5;
  undefined4 *puVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  int iVar19;
  void *__dest;
  undefined4 *puVar20;
  int iVar21;
  undefined4 uVar22;
  int iVar23;
  undefined8 *puVar24;
  int iVar25;
  int *__n;
  int *piVar26;
  int iVar27;
  ulong uVar28;
  int *piVar29;
  long lVar30;
  int iVar31;
  int iVar32;
  long lVar33;
  long lVar34;
  long in_FS_OFFSET;
  ulong uVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  long local_1c8;
  int local_1c0;
  int local_190;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_a0;
  int local_98;
  undefined8 local_90;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  double local_78;
  double dStack_70;
  double local_68;
  double local_58;
  double dStack_50;
  double local_48;
  long local_40;
  
  lVar30 = *(long *)(this + 0x60);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar24 = (undefined8 *)(lVar30 + (long)param_1 * 0xc);
  uVar11 = *puVar24;
  iVar23 = *(int *)(puVar24 + 1);
  local_90 = uVar11;
  local_88 = iVar23;
  if (iVar23 < 0) {
LAB_001057aa:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_001062cd;
  }
  local_80 = param_1 + 1;
  local_90._4_4_ = (int)((ulong)uVar11 >> 0x20);
  iVar19 = local_90._4_4_;
  iVar32 = local_80 % 3;
  if (iVar32 == 0) {
    local_80 = param_1 + -2;
  }
  lVar34 = *(long *)(this + 0x48);
  iVar31 = *(int *)(lVar30 + 8 + (long)local_80 * 0xc);
  iVar1 = local_80 + 1;
  if ((local_80 + 1) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
    iVar1 = local_80 + -2;
  }
  iVar2 = iVar23 + 1;
  if ((uint)((iVar23 + 1) * -0x55555555) < 0x55555556) {
    iVar2 = iVar23 + -2;
  }
  local_a0 = CONCAT44(iVar2,iVar23);
  iVar25 = iVar2 + 1;
  if ((iVar2 + 1) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
    iVar25 = iVar2 + -2;
  }
  pdVar3 = (double *)(lVar34 + (long)local_90._4_4_ * 0x18);
  dVar15 = *pdVar3;
  dVar16 = pdVar3[1];
  dVar12 = pdVar3[2];
  local_90._0_4_ = (int)uVar11;
  lVar33 = (long)(int)local_90 * 0x18;
  dVar17 = *(double *)(lVar34 + lVar33);
  dVar18 = ((double *)(lVar34 + lVar33))[1];
  dVar13 = *(double *)(lVar34 + 0x10 + lVar33);
  dVar36 = *(double *)(this + 0x38);
  local_98 = iVar25;
  local_84 = param_1;
  local_7c = iVar1;
  local_78 = dVar15;
  dStack_70 = dVar16;
  local_68 = dVar12;
  local_58 = dVar17;
  dStack_50 = dVar18;
  local_48 = dVar13;
  if (iVar31 != iVar25) {
    do {
      piVar26 = *(int **)(param_2 + 8);
      iVar27 = iVar31 + 1;
      if ((iVar31 + 1) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
        iVar27 = iVar31 + -2;
      }
      if (piVar26 == *(int **)(param_2 + 0x10)) {
        piVar29 = *(int **)param_2;
        __n = (int *)((long)piVar26 - (long)piVar29);
        uVar28 = (long)__n >> 2;
        if (uVar28 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        if (piVar26 == piVar29) {
          if (0xfffffffffffffffe < uVar28) goto LAB_001059a0;
          uVar35 = 0x1fffffffffffffff;
          if (uVar28 + 1 < 0x2000000000000000) {
            uVar35 = uVar28 + 1;
          }
          uVar35 = uVar35 << 2;
LAB_001059aa:
          __dest = operator_new(uVar35);
          lVar34 = uVar35 + (long)__dest;
          *(int *)((long)__dest + (long)__n) = iVar27;
          piVar26 = (int *)((long)__dest + 4 + (long)__n);
          if ((long)__n < 1) goto LAB_00105555;
LAB_001059de:
          __dest = memmove(__dest,piVar29,(size_t)__n);
          uVar28 = *(long *)(param_2 + 0x10) - (long)piVar29;
LAB_001059fd:
          operator_delete(piVar29,uVar28);
        }
        else {
          uVar35 = uVar28 * 2;
          if (uVar35 < uVar28) {
LAB_001059a0:
            uVar35 = 0x7ffffffffffffffc;
            goto LAB_001059aa;
          }
          if (uVar35 != 0) {
            if (0x1fffffffffffffff < uVar35) {
              uVar35 = 0x1fffffffffffffff;
            }
            uVar35 = uVar35 * 4;
            goto LAB_001059aa;
          }
          __dest = (void *)0x0;
          lVar34 = 0;
          *__n = iVar27;
          piVar26 = __n + 1;
          if (0 < (long)__n) goto LAB_001059de;
LAB_00105555:
          if (piVar29 != (int *)0x0) {
            uVar28 = *(long *)(param_2 + 0x10) - (long)piVar29;
            goto LAB_001059fd;
          }
        }
        *(void **)param_2 = __dest;
        lVar30 = *(long *)(this + 0x60);
        *(int **)(param_2 + 8) = piVar26;
        *(long *)(param_2 + 0x10) = lVar34;
      }
      else {
        *piVar26 = iVar27;
        *(int **)(param_2 + 8) = piVar26 + 1;
      }
      iVar31 = *(int *)(lVar30 + 8 + (long)iVar27 * 0xc);
    } while (iVar31 != iVar25);
    lVar34 = *(long *)(this + 0x48);
  }
  uVar11 = _LC5;
  lVar4 = lVar30 + (long)iVar2 * 0xc;
  iVar31 = *(int *)(lVar4 + 8);
  iVar2 = param_1 / 3;
  iVar25 = iVar1;
  if ((dVar15 - dVar17) * (dVar15 - dVar17) + 0.0 + (dVar16 - dVar18) * (dVar16 - dVar18) +
      (dVar12 - dVar13) * (dVar12 - dVar13) < dVar36 * dVar36) {
    puVar24 = (undefined8 *)(lVar34 + lVar33);
    puVar24[2] = _LC5;
    *puVar24 = uVar11;
    puVar24[1] = uVar11;
    CollapseTri(this,(vec *)&local_a0);
    if (iVar31 != iVar1) goto LAB_00105848;
  }
  else {
    lVar14 = *(long *)(this + 0x110);
    piVar26 = (int *)((long)(iVar23 / 3) * 0x10 + lVar14);
    local_190 = piVar26[3];
    iVar27 = *piVar26;
    pdVar3 = (double *)(lVar34 + (long)*(int *)(lVar4 + 4) * 0x18);
    if (iVar31 != iVar1) {
      lVar4 = *(long *)(this + 0x90);
      piVar26 = (int *)(lVar14 + (long)iVar2 * 0x10);
      dVar38 = pdVar3[2];
      iVar25 = iVar31;
      dVar36 = *pdVar3;
      dVar37 = pdVar3[1];
      do {
        uVar28 = _LC11;
        iVar21 = iVar25 + 1;
        if ((iVar25 + 1) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
          iVar21 = iVar25 + -2;
        }
        lVar7 = lVar30 + (long)iVar21 * 0xc;
        pdVar3 = (double *)(lVar34 + (long)*(int *)(lVar7 + 4) * 0x18);
        dVar8 = *pdVar3;
        dVar9 = pdVar3[1];
        dVar10 = pdVar3[2];
        puVar5 = (ulong *)(lVar4 + (long)(iVar21 / 3) * 0x18);
        dVar44 = (double)puVar5[2];
        puVar24 = (undefined8 *)((long)(iVar21 / 3) * 0x10 + lVar14);
        dVar39 = (double)(*puVar5 & _LC10);
        dVar42 = (double)(puVar5[1] & _LC10);
        if (((double)((ulong)dVar44 & _LC10) <= dVar39) ||
           ((double)((ulong)dVar44 & _LC10) <= dVar42)) {
          uVar35 = -(ulong)(dVar39 < dVar42);
          dVar43 = (double)((ulong)_LC6 & uVar35);
          dVar42 = (double)(~uVar35 & (ulong)_LC6);
          dVar44 = (double)(~uVar35 & *puVar5 | puVar5[1] & uVar35);
          dVar39 = 0.0;
        }
        else {
          dVar43 = 0.0;
          dVar42 = 0.0;
          dVar39 = _LC6;
        }
        iVar21 = (int)*puVar24;
        iVar25 = (int)((ulong)puVar24[1] >> 0x20);
        if (dVar44 < 0.0) {
          dVar41 = (double)((ulong)dVar39 ^ _LC11);
          dVar45 = (double)((ulong)dVar42 ^ _LC11);
          dVar44 = (double)(_LC11 ^ (ulong)dVar43);
          if (iVar21 == iVar27) goto LAB_00105b2c;
LAB_0010579a:
          iVar27 = *piVar26;
          if ((iVar27 != iVar21) || (local_190 = piVar26[3], local_190 != iVar25))
          goto LAB_001057aa;
          local_158 = *(double *)(this + 0x30);
          local_140 = dVar16 * dVar45 + dVar15 * dVar41 + dVar12 * dVar44;
          local_138 = dVar16 * dVar39 + dVar15 * dVar43 + dVar12 * dVar42;
          local_150 = dVar41 * dVar36 + dVar37 * dVar45 + dVar44 * dVar38;
          local_148 = dVar36 * dVar43 + dVar37 * dVar39 + dVar38 * dVar42;
          dVar38 = dVar18 * dVar45 + dVar17 * dVar41 + dVar13 * dVar44;
          dVar46 = local_140 - dVar38;
          dVar38 = local_150 - dVar38;
          dVar36 = dVar18 * dVar39 + dVar17 * dVar43 + dVar13 * dVar42;
          dVar40 = local_148 - dVar36;
          dVar36 = local_138 - dVar36;
          dVar37 = fma(dVar38,dVar36,(double)((ulong)dVar40 ^ _LC11) * dVar46);
          dVar36 = dVar46 * dVar46 + 0.0 + dVar36 * dVar36;
          dVar38 = dVar38 * dVar38 + 0.0 + dVar40 * dVar40;
          if (dVar36 <= dVar38) {
            dVar36 = dVar38;
          }
          if (dVar36 * local_158 * local_158 < dVar37 * dVar37 * _LC12) goto LAB_001057aa;
        }
        else {
          dVar44 = dVar43;
          dVar45 = dVar42;
          dVar41 = dVar39;
          if (iVar21 != iVar27) goto LAB_0010579a;
LAB_00105b2c:
          if (local_190 != iVar25) goto LAB_0010579a;
          local_158 = *(double *)(this + 0x30);
          local_150 = dVar37 * dVar45 + dVar41 * dVar36 + dVar44 * dVar38;
          local_148 = dVar37 * dVar39 + dVar36 * dVar43 + dVar38 * dVar42;
          local_140 = dVar16 * dVar45 + dVar15 * dVar41 + dVar12 * dVar44;
          local_138 = dVar15 * dVar43 + dVar16 * dVar39 + dVar12 * dVar42;
        }
        dVar37 = _LC12;
        dVar36 = dVar39 * dVar9 + dVar43 * dVar8 + dVar42 * dVar10;
        dVar38 = dVar41 * dVar8 + dVar45 * dVar9 + dVar44 * dVar10;
        local_148 = local_148 - dVar36;
        local_138 = local_138 - dVar36;
        local_140 = local_140 - dVar38;
        local_150 = local_150 - dVar38;
        dVar38 = fma(local_150,local_138,(double)(uVar28 ^ (ulong)local_148) * local_140);
        uVar11 = _LC5;
        dVar36 = local_140 * local_140 + 0.0 + local_138 * local_138;
        dVar44 = local_148 * local_148 + local_150 * local_150 + 0.0;
        if (dVar36 <= dVar44) {
          dVar36 = dVar44;
        }
        if ((dVar36 * local_158 * local_158 < dVar38 * dVar38 * dVar37) && (dVar38 <= 0.0))
        goto LAB_001057aa;
        iVar25 = *(int *)(lVar7 + 8);
        dVar38 = dVar10;
        dVar36 = dVar8;
        dVar37 = dVar9;
      } while (iVar25 != iVar1);
      puVar24 = (undefined8 *)(lVar34 + lVar33);
      *puVar24 = _LC5;
      puVar24[1] = uVar11;
      puVar24[2] = uVar11;
      CollapseTri(this,(vec *)&local_a0);
LAB_00105848:
      local_1c0 = iVar23 % 3;
      local_1c8 = (long)(iVar23 / 3);
      iVar25 = iVar31;
      do {
        iVar23 = iVar31 + 1;
        if ((iVar31 + 1) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
          iVar23 = iVar31 + -2;
        }
        if (*(long *)(this + 0x130) != 0) {
          lVar34 = *(long *)(this + 0x110);
          piVar29 = (int *)((long)(iVar23 / 3) * 0x10 + lVar34);
          piVar26 = (int *)(lVar34 + (long)iVar2 * 0x10);
          if ((*piVar29 == *piVar26) && (piVar29[3] == piVar26[3])) {
            lVar34 = *(long *)(this + 0x128);
            puVar6 = (undefined4 *)(lVar34 + (long)iVar2 * 0xc);
            iVar31 = iVar32;
          }
          else {
            piVar26 = (int *)(lVar34 + local_1c8 * 0x10);
            if ((*piVar29 != *piVar26) || (piVar29[3] != piVar26[3])) goto LAB_001058fb;
            lVar34 = *(long *)(this + 0x128);
            puVar6 = (undefined4 *)(lVar34 + local_1c8 * 0xc);
            iVar31 = local_1c0;
          }
          if (iVar31 == 0) {
            uVar22 = *puVar6;
          }
          else if (iVar31 == 1) {
            uVar22 = puVar6[1];
          }
          else {
            uVar22 = puVar6[2];
          }
          puVar6 = (undefined4 *)(lVar34 + (long)(iVar23 / 3) * 0xc);
          puVar20 = puVar6;
          if (iVar23 % 3 != 0) {
            puVar20 = puVar6 + 2;
            if (iVar23 % 3 == 1) {
              puVar20 = puVar6 + 1;
            }
          }
          *puVar20 = uVar22;
        }
LAB_001058fb:
        lVar33 = *(long *)param_2;
        lVar34 = lVar30 + (long)iVar23 * 0xc;
        iVar31 = *(int *)(lVar34 + 8);
        if (*(long *)(param_2 + 8) != lVar33) {
          uVar28 = 0;
          do {
            iVar27 = *(int *)(lVar33 + uVar28 * 4);
            if (*(int *)(lVar30 + 4 + (long)iVar27 * 0xc) == *(int *)(lVar34 + 4)) {
              FormLoop(this,iVar27,iVar23);
              uVar35 = *(long *)(param_2 + 8) - *(long *)param_2 >> 2;
              iVar25 = iVar31;
              if (uVar35 < uVar28) {
                std::vector<int,std::allocator<int>>::_M_default_append
                          ((vector<int,std::allocator<int>> *)param_2,uVar28 - uVar35);
              }
              else if ((uVar28 < uVar35) &&
                      (lVar30 = *(long *)param_2 + uVar28 * 4, *(long *)(param_2 + 8) != lVar30)) {
                *(long *)(param_2 + 8) = lVar30;
              }
              break;
            }
            uVar28 = uVar28 + 1;
          } while (uVar28 < (ulong)(*(long *)(param_2 + 8) - lVar33 >> 2));
        }
        if (iVar31 == iVar1) goto LAB_00105de0;
        lVar30 = *(long *)(this + 0x60);
      } while( true );
    }
    puVar24 = (undefined8 *)(lVar34 + lVar33);
    puVar24[2] = _LC5;
    *puVar24 = uVar11;
    puVar24[1] = uVar11;
    CollapseTri(this,(vec *)&local_a0);
  }
  goto LAB_00105e3c;
LAB_00105de0:
  if (iVar1 != iVar25) {
    lVar30 = *(long *)(this + 0x60);
    iVar23 = iVar25;
    do {
      lVar33 = (long)iVar23 * 0xc;
      *(int *)(lVar30 + 4 + lVar33) = iVar19;
      lVar34 = lVar33 + -0x18;
      if (0x55555554 < (iVar23 + 1) * -0x55555555 + 0x2aaaaaaaU) {
        lVar34 = lVar33 + 0xc;
      }
      piVar26 = (int *)(lVar34 + lVar30);
      iVar23 = piVar26[2];
      *piVar26 = iVar19;
    } while (iVar1 != iVar23);
  }
LAB_00105e3c:
  CollapseTri(this,(vec *)&local_84);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    RemoveIfFolded(this,iVar25);
    return;
  }
LAB_001062cd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Impl::RecursiveEdgeSwap(int, int&, std::vector<int, std::allocator<int> >&,
   std::vector<int, std::allocator<int> >&, std::vector<int, std::allocator<int> >&) */

void __thiscall
manifold::Manifold::Impl::RecursiveEdgeSwap
          (Impl *this,int param_1,int *param_2,vector *param_3,vector *param_4,vector *param_5)

{
  int *piVar1;
  double *pdVar2;
  ulong *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined1 auVar10 [8];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char cVar14;
  long lVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  int *piVar22;
  long lVar23;
  int *piVar24;
  long lVar25;
  long in_FS_OFFSET;
  ulong uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined8 local_108;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  Impl *local_d8;
  int *local_d0;
  undefined8 *local_c8;
  Impl *local_c0;
  undefined1 *local_b8;
  int *local_b0;
  int *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [8];
  double dStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  uVar9 = _LC11;
  dVar32 = _LC6;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (-1 < param_1) {
    lVar23 = *(long *)(this + 0x60);
    lVar25 = (long)param_1;
    piVar1 = (int *)(lVar23 + lVar25 * 0xc);
    iVar4 = piVar1[2];
    if (-1 < iVar4) {
      lVar19 = (long)iVar4;
      if ((*(int *)(*(long *)param_3 + lVar25 * 4) != *param_2) ||
         (*param_2 != *(int *)(*(long *)param_3 + lVar19 * 4))) {
        iVar7 = param_1 + 1;
        if ((uint)((param_1 + 1) * -0x55555555) < 0x55555556) {
          iVar7 = param_1 + -2;
        }
        iVar18 = iVar7 + 1;
        if ((iVar7 + 1) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
          iVar18 = iVar7 + -2;
        }
        iVar16 = iVar4 + 1;
        if ((uint)((iVar4 + 1) * -0x55555555) < 0x55555556) {
          iVar16 = iVar4 + -2;
        }
        local_108 = CONCAT44(iVar16,iVar4);
        iVar8 = iVar16 + 1;
        if ((iVar16 + 1) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
          iVar8 = iVar16 + -2;
        }
        iVar21 = param_1 >> 0x1f;
        iVar16 = param_1 / 3 + iVar21;
        local_f0 = param_1 + (iVar16 - iVar21) * -3;
        local_ec = local_f0 + 1;
        if ((uint)((local_f0 + 1) * -0x55555555) < 0x55555556) {
          local_ec = local_f0 + -2;
        }
        local_e8 = local_ec + 1;
        if ((local_ec + 1) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
          local_e8 = local_ec + -2;
        }
        local_e4 = iVar4 % 3;
        local_e0 = local_e4 + 1;
        if ((uint)((local_e4 + 1) * -0x55555555) < 0x55555556) {
          local_e0 = local_e4 + -2;
        }
        lVar5 = *(long *)(this + 0x90);
        local_dc = local_e0 + 1;
        if ((local_e0 + 1) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
          local_dc = local_e0 + -2;
        }
        pdVar2 = (double *)(lVar5 + (long)(iVar16 - iVar21) * 0x18);
        dVar28 = pdVar2[2];
        dVar33 = pdVar2[1];
        dVar27 = (double)((ulong)*pdVar2 & _LC10);
        if (((double)((ulong)dVar28 & _LC10) <= dVar27) ||
           ((double)((ulong)dVar28 & _LC10) <= (double)((ulong)dVar33 & _LC10))) {
          if (dVar27 < (double)((ulong)dVar33 & _LC10)) {
            dVar27 = 0.0;
            dVar29 = _LC6;
          }
          else {
            dVar27 = _LC6;
            dVar33 = *pdVar2;
            dVar29 = 0.0;
          }
          dVar30 = 0.0;
          dVar28 = dVar33;
        }
        else {
          dVar29 = 0.0;
          dVar27 = 0.0;
          dVar30 = _LC6;
        }
        dVar33 = dVar27;
        dVar31 = dVar29;
        dVar36 = dVar30;
        if (dVar28 < 0.0) {
          dVar33 = (double)(_LC11 ^ (ulong)dVar27);
          dVar31 = (double)(_LC11 ^ (ulong)dVar29);
          dVar36 = (double)(_LC11 ^ (ulong)dVar30);
        }
        lVar20 = *(long *)(this + 0x48);
        uStack_90 = CONCAT44(uStack_90._4_4_,2);
        _local_88 = (undefined1  [16])0x0;
        piVar24 = (int *)((long)&uStack_90 + 4);
        local_98 = _LC2;
        local_78 = (undefined1  [16])0x0;
        local_68 = (undefined1  [16])0x0;
        local_58._0_16_ = (undefined1  [16])0x0;
        piVar17 = (int *)&local_98;
        do {
          iVar16 = *piVar17;
          piVar22 = piVar1;
          if (iVar16 != 0) {
            if (iVar16 == 1) {
              piVar22 = (int *)(lVar23 + (long)iVar7 * 0xc);
            }
            else {
              piVar22 = (int *)(lVar23 + (long)iVar18 * 0xc);
            }
          }
          piVar17 = piVar17 + 1;
          pdVar2 = (double *)(lVar20 + (long)*piVar22 * 0x18);
          dVar28 = pdVar2[1];
          dVar34 = *pdVar2;
          dVar35 = pdVar2[2];
          *(double *)(local_88 + (long)iVar16 * 0x10) =
               dVar36 * dVar34 + dVar33 * dVar28 + dVar31 * dVar35;
          *(double *)(local_88 + (long)iVar16 * 0x10 + 8) =
               dVar34 * dVar29 + dVar28 * dVar30 + dVar35 * dVar27;
        } while (piVar17 != piVar24);
        dVar33 = *(double *)(this + 0x38);
        dVar31 = (double)local_78._8_8_ - dStack_80;
        dVar30 = (double)local_68._0_8_ - (double)local_88;
        dVar29 = (double)local_78._0_8_ - (double)local_88;
        dVar28 = (double)local_68._8_8_ - dStack_80;
        local_100 = iVar8;
        local_fc = param_1;
        local_f8 = iVar7;
        local_f4 = iVar18;
        dVar27 = fma(dVar29,dVar28,(double)(_LC11 ^ (ulong)dVar31) * dVar30);
        lVar15 = (long)iVar8;
        dVar28 = dVar30 * dVar30 + 0.0 + dVar28 * dVar28;
        dVar29 = dVar29 * dVar29 + 0.0 + dVar31 * dVar31;
        if (dVar28 <= dVar29) {
          dVar28 = dVar29;
        }
        if ((dVar27 * dVar27 * _LC12 <= dVar28 * dVar33 * dVar33) || (dVar27 <= 0.0)) {
          cVar14 = (anonymous_namespace)::Is01Longest
                             (local_88,dStack_80,local_78._0_8_,local_78._8_8_,local_68._0_8_,
                              local_68._8_8_);
          if (cVar14 != '\0') {
            puVar3 = (ulong *)(lVar5 + (long)(iVar4 / 3) * 0x18);
            dVar28 = (double)puVar3[2];
            dVar27 = (double)(*puVar3 & _LC10);
            dVar29 = (double)(puVar3[1] & _LC10);
            if (((double)(_LC10 & (ulong)dVar28) <= dVar27) ||
               ((double)(_LC10 & (ulong)dVar28) <= dVar29)) {
              uVar26 = -(ulong)(dVar27 < dVar29);
              dVar29 = (double)((ulong)dVar32 & uVar26);
              dVar27 = (double)(~uVar26 & (ulong)dVar32);
              dVar28 = (double)(~uVar26 & *puVar3 | puVar3[1] & uVar26);
              dVar32 = 0.0;
            }
            else {
              dVar29 = 0.0;
              dVar27 = 0.0;
            }
            dVar30 = dVar32;
            dVar31 = dVar27;
            dVar36 = dVar29;
            if (dVar28 < 0.0) {
              dVar30 = (double)(uVar9 ^ (ulong)dVar32);
              dVar31 = (double)(uVar9 ^ (ulong)dVar27);
              dVar36 = (double)(uVar9 ^ (ulong)dVar29);
            }
            uStack_90 = CONCAT44(uStack_90._4_4_,2);
            local_98 = _LC2;
            piVar17 = (int *)&local_98;
            do {
              iVar4 = *piVar17;
              piVar22 = piVar1;
              if (iVar4 != 0) {
                if (iVar4 == 1) {
                  piVar22 = (int *)(lVar23 + (long)iVar7 * 0xc);
                }
                else {
                  piVar22 = (int *)(lVar23 + (long)iVar18 * 0xc);
                }
              }
              piVar17 = piVar17 + 1;
              pdVar2 = (double *)(lVar20 + (long)*piVar22 * 0x18);
              dVar28 = pdVar2[1];
              dVar34 = *pdVar2;
              dVar35 = pdVar2[2];
              *(double *)(local_88 + (long)iVar4 * 0x10) =
                   dVar30 * dVar34 + dVar31 * dVar28 + dVar36 * dVar35;
              *(double *)(local_88 + (long)iVar4 * 0x10 + 8) =
                   dVar34 * dVar29 + dVar28 * dVar32 + dVar35 * dVar27;
            } while (piVar17 != piVar24);
            dVar28 = dStack_80;
            auVar10 = local_88;
            pdVar2 = (double *)(lVar20 + (long)*(int *)(lVar23 + lVar15 * 0xc) * 0x18);
            local_d0 = &local_fc;
            local_c8 = &local_108;
            local_c0 = this + 0x110;
            local_b0 = &local_f0;
            local_a8 = &local_e4;
            dVar30 = dVar31 * pdVar2[1] + dVar30 * *pdVar2 + dVar36 * pdVar2[2];
            uVar11 = local_78._8_8_;
            uVar6 = local_78._0_8_;
            dVar36 = dStack_80 - (double)local_78._8_8_;
            dVar31 = dVar32 * pdVar2[1] + dVar29 * *pdVar2 + dVar27 * pdVar2[2];
            dVar27 = (double)local_88 - (double)local_78._0_8_;
            dVar35 = dVar30 - (double)local_78._0_8_;
            dVar34 = dVar31 - (double)local_78._8_8_;
            local_58._8_8_ = dVar31;
            local_58._0_8_ = dVar30;
            local_d8 = this;
            local_b8 = local_88;
            dVar29 = fma(dVar27,dVar34,(double)(uVar9 ^ (ulong)dVar36) * dVar35);
            dVar32 = dVar35 * dVar35 + 0.0 + dVar34 * dVar34;
            dVar36 = dVar27 * dVar27 + 0.0 + dVar36 * dVar36;
            dVar27 = dVar32;
            if (dVar32 <= dVar36) {
              dVar27 = dVar36;
            }
            if ((dVar29 * dVar29 * _LC12 <= dVar27 * dVar33 * dVar33) || (dVar29 <= 0.0)) {
              cVar14 = (anonymous_namespace)::Is01Longest
                                 (local_78._0_8_,local_78._8_8_,local_88,dStack_80,local_58._0_8_,
                                  local_58._8_8_);
              if (cVar14 != '\0') {
                RecursiveEdgeSwap(int,int&,std::vector<int,std::allocator<int>>&,std::vector<int,std::allocator<int>>&,std::vector<int,std::allocator<int>>&)
                ::{lambda()#1}::operator()((_lambda___1_ *)&local_d8);
                if (*(double *)(this + 0x38) * *(double *)(this + 0x38) <=
                    ((double)local_58._0_8_ - (double)local_68._0_8_) *
                    ((double)local_58._0_8_ - (double)local_68._0_8_) + 0.0 +
                    ((double)local_58._8_8_ - (double)local_68._8_8_) *
                    ((double)local_58._8_8_ - (double)local_68._8_8_)) {
                  iVar4 = *param_2;
                  lVar23 = *(long *)param_3;
                  uVar6 = *(undefined8 *)(param_4 + 8);
                  *(int *)(lVar23 + lVar25 * 4) = iVar4;
                  *(int *)(lVar23 + lVar19 * 4) = iVar4;
                  uStack_90 = CONCAT44(local_fc,local_f8);
                  local_98 = CONCAT44((int)local_108,local_108._4_4_);
                  std::vector<int,std::allocator<int>>::_M_range_insert<int_const*>
                            (param_4,uVar6,&local_98,local_88);
                }
                else {
                  *param_2 = *param_2 + 1;
                  CollapseEdge(this,local_f4,param_5);
                  if (*(long *)(param_5 + 8) != *(long *)param_5) {
                    *(long *)(param_5 + 8) = *(long *)param_5;
                  }
                }
              }
            }
            else {
              uVar12 = local_68._0_8_;
              dVar31 = dVar31 - dVar28;
              uVar13 = local_68._8_8_;
              dVar29 = (double)local_68._0_8_ - (double)auVar10;
              dVar30 = dVar30 - (double)auVar10;
              dVar28 = (double)local_68._8_8_ - dVar28;
              dVar27 = fma(dVar30,dVar28,(double)(uVar9 ^ (ulong)dVar31) * dVar29);
              dVar28 = dVar29 * dVar29 + 0.0 + dVar28 * dVar28;
              dVar29 = dVar30 * dVar30 + 0.0 + dVar31 * dVar31;
              if (dVar28 <= dVar29) {
                dVar28 = dVar29;
              }
              if ((dVar28 * dVar33 * dVar33 < dVar27 * dVar27 * _LC12) && (0.0 < dVar27)) {
                dVar29 = (double)uVar13 - (double)uVar11;
                dVar27 = (double)uVar12 - (double)uVar6;
                dVar28 = fma(dVar34,dVar27,(double)(uVar9 ^ (ulong)dVar29) * dVar35);
                dVar27 = dVar27 * dVar27 + 0.0 + dVar29 * dVar29;
                if (dVar32 <= dVar27) {
                  dVar32 = dVar27;
                }
                if ((dVar32 * dVar33 * dVar33 < dVar28 * dVar28 * _LC12) && (0.0 < dVar28)) {
                  RecursiveEdgeSwap(int,int&,std::vector<int,std::allocator<int>>&,std::vector<int,std::allocator<int>>&,std::vector<int,std::allocator<int>>&)
                  ::{lambda()#1}::operator()((_lambda___1_ *)&local_d8);
                  iVar4 = *param_2;
                  lVar23 = *(long *)param_3;
                  *(int *)(lVar23 + lVar25 * 4) = iVar4;
                  *(int *)(lVar23 + lVar19 * 4) = iVar4;
                  local_98 = CONCAT44(*(undefined4 *)
                                       (*(long *)(this + 0x60) + 8 + (long)local_f8 * 0xc),
                                      *(undefined4 *)
                                       (*(long *)(this + 0x60) + 8 + (long)(int)local_108 * 0xc));
                  std::vector<int,std::allocator<int>>::_M_range_insert<int_const*>
                            (param_4,*(undefined8 *)(param_4 + 8),&local_98,&uStack_90);
                }
              }
            }
          }
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Impl::SimplifyTopology() */

void __thiscall manifold::Manifold::Impl::SimplifyTopology(Impl *this)

{
  double *pdVar1;
  double *pdVar2;
  ulong *puVar3;
  void *pvVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulong __size;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  char cVar12;
  undefined1 uVar13;
  int iVar14;
  long lVar15;
  void *__ptr;
  ulong uVar16;
  void *__s;
  int iVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int *piVar25;
  undefined8 *puVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  ulong uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  int local_ec;
  void *local_e8;
  void *pvStack_e0;
  long local_d8;
  undefined1 local_c8 [16];
  long local_b8;
  void *local_a8;
  void *pvStack_a0;
  void *pvStack_98;
  undefined8 local_88;
  undefined4 local_80;
  int local_7c;
  undefined1 local_78 [8];
  double dStack_70;
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x68) != 0) {
    CleanupTopology(this);
    lVar15 = manifold::ManifoldParams();
    if (*(char *)(lVar15 + 4) != '\0') {
      __size = *(ulong *)(this + 0x68);
      if ((__size < 0x186a1) && (__size == 0)) {
        __ptr = (void *)0x0;
        local_e8 = operator_new(0x28);
        local_d8 = (long)local_e8 + 0x28;
        uVar16 = *(ulong *)(this + 0x68);
        pvStack_e0 = local_e8;
      }
      else {
        __ptr = malloc(__size);
        local_e8 = operator_new(0x28);
        local_d8 = (long)local_e8 + 0x28;
        lVar15 = *(long *)(this + 0x60);
        lVar8 = *(long *)(this + 0x48);
        dVar5 = *(double *)(this + 0x30);
        uVar16 = 0;
        do {
          bVar21 = false;
          piVar19 = (int *)(lVar15 + (long)(int)uVar16 * 0xc);
          if (-1 < piVar19[2]) {
            pdVar1 = (double *)(lVar8 + (long)*piVar19 * 0x18);
            pdVar2 = (double *)(lVar8 + (long)piVar19[1] * 0x18);
            bVar21 = (*pdVar2 - *pdVar1) * (*pdVar2 - *pdVar1) + 0.0 +
                     (pdVar2[1] - pdVar1[1]) * (pdVar2[1] - pdVar1[1]) +
                     (pdVar2[2] - pdVar1[2]) * (pdVar2[2] - pdVar1[2]) < dVar5 * dVar5;
          }
          *(bool *)((long)__ptr + uVar16) = bVar21;
          uVar16 = uVar16 + 1;
        } while (__size != uVar16);
        uVar16 = 0;
        pvStack_e0 = local_e8;
        do {
          while ((*(char *)((long)__ptr + uVar16) != '\0' &&
                 (CollapseEdge(this,(int)uVar16,(vector *)&local_e8), pvStack_e0 != local_e8))) {
            uVar16 = uVar16 + 1;
            pvStack_e0 = local_e8;
            if (__size == uVar16) goto LAB_001071b0;
          }
          uVar16 = uVar16 + 1;
        } while (__size != uVar16);
LAB_001071b0:
        lVar15 = *(long *)(this + 0x60);
        lVar8 = *(long *)(this + 0x110);
        uVar16 = 0;
        do {
          iVar14 = (int)uVar16;
          iVar23 = *(int *)(lVar15 + 8 + (long)iVar14 * 0xc);
          if (-1 < iVar23) {
            piVar19 = (int *)((long)(iVar14 / 3) * 0x10 + lVar8);
            iVar22 = iVar23 + 1;
            if ((uint)((iVar23 + 1) * -0x55555555) < 0x55555556) {
              iVar22 = iVar23 + -2;
            }
            piVar25 = (int *)((long)(iVar22 / 3) * 0x10 + lVar8);
            do {
              if (iVar22 == iVar14) {
                uVar13 = 1;
                goto LAB_001072ad;
              }
              iVar23 = *(int *)(lVar15 + 8 + (long)iVar22 * 0xc);
              iVar22 = iVar23 + 1;
              if (iVar22 * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
                iVar22 = iVar23 + -2;
              }
              puVar26 = (undefined8 *)((long)(iVar22 / 3) * 0x10 + lVar8);
              iVar23 = (int)*puVar26;
              iVar24 = (int)((ulong)puVar26[1] >> 0x20);
            } while (((iVar23 == *piVar19) &&
                     (iVar24 == (int)((ulong)*(undefined8 *)(piVar19 + 2) >> 0x20))) ||
                    ((iVar23 == *piVar25 &&
                     (iVar24 == (int)((ulong)*(undefined8 *)(piVar25 + 2) >> 0x20)))));
          }
          uVar13 = 0;
LAB_001072ad:
          *(undefined1 *)((long)__ptr + uVar16) = uVar13;
          uVar16 = uVar16 + 1;
        } while (__size != uVar16);
        uVar16 = 0;
LAB_001072d9:
        do {
          if (*(char *)((long)__ptr + uVar16) != '\0') {
            CollapseEdge(this,(int)uVar16,(vector *)&local_e8);
            if (pvStack_e0 != local_e8) {
              uVar16 = uVar16 + 1;
              pvStack_e0 = local_e8;
              if (__size == uVar16) break;
              goto LAB_001072d9;
            }
          }
          uVar16 = uVar16 + 1;
        } while (__size != uVar16);
        uVar16 = *(ulong *)(this + 0x68);
        lVar15 = *(long *)(this + 0x90);
        dVar5 = *(double *)(this + 0x38);
        lVar8 = *(long *)(this + 0x60);
        lVar9 = *(long *)(this + 0x48);
        uVar27 = 0;
        do {
          uVar10 = _LC11;
          dVar31 = _LC6;
          iVar14 = (int)uVar27;
          piVar19 = (int *)(lVar8 + (long)iVar14 * 0xc);
          iVar23 = piVar19[2];
          if (iVar23 < 0) {
LAB_00107621:
            uVar13 = 0;
          }
          else {
            puVar3 = (ulong *)(lVar15 + (long)(iVar14 / 3) * 0x18);
            dVar30 = (double)puVar3[2];
            iVar22 = iVar14 + 1;
            if ((iVar14 + 1) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
              iVar22 = iVar14 + -2;
            }
            dVar29 = (double)(*puVar3 & _LC10);
            dVar32 = (double)(puVar3[1] & _LC10);
            iVar14 = iVar22 + 1;
            if ((iVar22 + 1) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
              iVar14 = iVar22 + -2;
            }
            if (((double)((ulong)dVar30 & _LC10) <= dVar29) ||
               ((double)((ulong)dVar30 & _LC10) <= dVar32)) {
              dVar33 = (double)((ulong)_LC6 & -(ulong)(dVar29 < dVar32));
              dVar34 = (double)(~-(ulong)(dVar29 < dVar32) & (ulong)_LC6);
              dVar30 = (double)(~-(ulong)(dVar29 < dVar32) & *puVar3 |
                               puVar3[1] & -(ulong)(dVar29 < dVar32));
              dVar29 = 0.0;
            }
            else {
              dVar33 = 0.0;
              dVar34 = 0.0;
              dVar29 = _LC6;
            }
            dVar32 = dVar33;
            dVar35 = dVar29;
            dVar36 = dVar34;
            if (dVar30 < 0.0) {
              dVar32 = (double)((ulong)dVar33 ^ _LC11);
              dVar35 = (double)((ulong)dVar29 ^ _LC11);
              dVar36 = (double)((ulong)dVar34 ^ _LC11);
            }
            local_80 = 2;
            piVar25 = (int *)&local_88;
            _local_78 = (undefined1  [16])0x0;
            local_88 = _LC2;
            local_68 = (undefined1  [16])0x0;
            local_58._0_16_ = (undefined1  [16])0x0;
            piVar20 = piVar25;
            do {
              iVar24 = *piVar20;
              piVar18 = piVar19;
              if (iVar24 != 0) {
                if (iVar24 == 1) {
                  piVar18 = (int *)(lVar8 + (long)iVar22 * 0xc);
                }
                else {
                  piVar18 = (int *)(lVar8 + (long)iVar14 * 0xc);
                }
              }
              piVar20 = piVar20 + 1;
              pdVar1 = (double *)(lVar9 + (long)*piVar18 * 0x18);
              dVar30 = pdVar1[1];
              dVar6 = *pdVar1;
              dVar7 = pdVar1[2];
              *(double *)(local_78 + (long)iVar24 * 0x10) =
                   dVar35 * dVar6 + dVar36 * dVar30 + dVar32 * dVar7;
              *(double *)(local_78 + (long)iVar24 * 0x10 + 8) =
                   dVar6 * dVar33 + dVar30 * dVar29 + dVar7 * dVar34;
            } while (&local_7c != piVar20);
            dVar34 = (double)local_68._8_8_ - dStack_70;
            dVar32 = (double)local_68._0_8_ - (double)local_78;
            dVar33 = (double)local_58._0_8_ - (double)local_78;
            dVar30 = (double)local_58._8_8_ - dStack_70;
            dVar29 = fma(dVar32,dVar30,(double)(_LC11 ^ (ulong)dVar34) * dVar33);
            dVar30 = dVar33 * dVar33 + 0.0 + dVar30 * dVar30;
            dVar32 = dVar32 * dVar32 + 0.0 + dVar34 * dVar34;
            if (dVar30 <= dVar32) {
              dVar30 = dVar32;
            }
            if ((dVar30 * dVar5 * dVar5 < dVar29 * dVar29 * _LC12) && (0.0 < dVar29))
            goto LAB_00107621;
            cVar12 = (anonymous_namespace)::Is01Longest
                               (local_78,dStack_70,local_68._0_8_,local_68._8_8_,local_58._0_8_);
            if (cVar12 == '\0') goto LAB_00107621;
            iVar14 = iVar23 + 1;
            if ((uint)((iVar23 + 1) * -0x55555555) < 0x55555556) {
              iVar14 = iVar23 + -2;
            }
            iVar22 = iVar14 + 1;
            if ((iVar14 + 1) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
              iVar22 = iVar14 + -2;
            }
            puVar3 = (ulong *)(lVar15 + (long)(iVar23 / 3) * 0x18);
            dVar30 = (double)puVar3[2];
            dVar29 = (double)(*puVar3 & _LC10);
            dVar32 = (double)(puVar3[1] & _LC10);
            if (((double)((ulong)dVar30 & _LC10) <= dVar29) ||
               ((double)((ulong)dVar30 & _LC10) <= dVar32)) {
              uVar28 = -(ulong)(dVar29 < dVar32);
              dVar32 = (double)((ulong)dVar31 & uVar28);
              dVar29 = (double)(~uVar28 & (ulong)dVar31);
              dVar30 = (double)(~uVar28 & *puVar3 | puVar3[1] & uVar28);
              dVar31 = 0.0;
            }
            else {
              dVar32 = 0.0;
              dVar29 = 0.0;
            }
            dVar33 = dVar32;
            dVar34 = dVar31;
            dVar35 = dVar29;
            if (dVar30 < 0.0) {
              dVar33 = (double)(uVar10 ^ (ulong)dVar32);
              dVar34 = (double)(uVar10 ^ (ulong)dVar31);
              dVar35 = (double)(uVar10 ^ (ulong)dVar29);
            }
            local_80 = 2;
            local_88 = _LC2;
            do {
              iVar24 = *piVar25;
              iVar17 = iVar23;
              if ((iVar24 != 0) && (iVar17 = iVar22, iVar24 == 1)) {
                iVar17 = iVar14;
              }
              piVar25 = piVar25 + 1;
              pdVar1 = (double *)(lVar9 + (long)*(int *)(lVar8 + (long)iVar17 * 0xc) * 0x18);
              dVar30 = pdVar1[1];
              dVar36 = *pdVar1;
              dVar6 = pdVar1[2];
              *(double *)(local_78 + (long)iVar24 * 0x10) =
                   dVar34 * dVar36 + dVar35 * dVar30 + dVar33 * dVar6;
              *(double *)(local_78 + (long)iVar24 * 0x10 + 8) =
                   dVar36 * dVar32 + dVar30 * dVar31 + dVar6 * dVar29;
            } while (&local_7c != piVar25);
            dVar33 = (double)local_68._8_8_ - dStack_70;
            dVar29 = (double)local_68._0_8_ - (double)local_78;
            dVar32 = (double)local_58._0_8_ - (double)local_78;
            dVar31 = (double)local_58._8_8_ - dStack_70;
            dVar30 = fma(dVar29,dVar31,(double)(uVar10 ^ (ulong)dVar33) * dVar32);
            dVar31 = dVar32 * dVar32 + 0.0 + dVar31 * dVar31;
            dVar29 = dVar29 * dVar29 + 0.0 + dVar33 * dVar33;
            if (dVar31 <= dVar29) {
              dVar31 = dVar29;
            }
            if ((dVar30 * dVar30 * _LC12 <= dVar31 * dVar5 * dVar5) || (uVar13 = 1, dVar30 <= 0.0))
            {
              uVar13 = (anonymous_namespace)::Is01Longest
                                 (local_78,dStack_70,local_68._0_8_,local_68._8_8_,local_58._0_8_);
            }
          }
          *(undefined1 *)((long)__ptr + uVar27) = uVar13;
          uVar27 = uVar27 + 1;
        } while (__size != uVar27);
      }
      local_b8 = 0;
      local_c8 = (undefined1  [16])0x0;
      if (uVar16 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("cannot create std::vector larger than max_size()");
      }
      pvStack_a0 = (void *)0x0;
      pvStack_98 = (void *)0x0;
      if (uVar16 == 0) {
        pvStack_98 = (void *)0x0;
        local_ec = 0;
        local_a8 = (void *)0x0;
        pvStack_a0 = (void *)0x0;
        if (__size == 0) goto LAB_00107d37;
        __s = (void *)0x0;
        uVar16 = 0;
LAB_001076d7:
        local_ec = 0;
        uVar27 = 0;
LAB_0010770d:
        do {
          if (*(char *)((long)__ptr + uVar27) != '\0') {
            local_ec = local_ec + 1;
            RecursiveEdgeSwap(this,(int)uVar27,&local_ec,(vector *)&local_a8,(vector *)local_c8,
                              (vector *)&local_e8);
            if (local_c8._0_8_ != local_c8._8_8_) {
              do {
                piVar19 = (int *)(local_c8._8_8_ + -4);
                local_c8._8_8_ = local_c8._8_8_ + -4;
                RecursiveEdgeSwap(this,*piVar19,&local_ec,(vector *)&local_a8,(vector *)local_c8,
                                  (vector *)&local_e8);
              } while (local_c8._8_8_ != local_c8._0_8_);
              uVar27 = uVar27 + 1;
              if (__size <= uVar27) break;
              goto LAB_0010770d;
            }
          }
          uVar27 = uVar27 + 1;
        } while (uVar27 < __size);
        lVar15 = local_b8;
        uVar11 = local_c8._0_8_;
        if (__s != (void *)0x0) {
          operator_delete(__s,uVar16);
        }
        if ((void *)uVar11 != (void *)0x0) {
          operator_delete((void *)uVar11,lVar15 - uVar11);
        }
        if (local_e8 != (void *)0x0) {
          operator_delete(local_e8,local_d8 - (long)local_e8);
        }
      }
      else {
        uVar16 = uVar16 * 4;
        __s = operator_new(uVar16);
        pvVar4 = (void *)((long)__s + uVar16);
        local_a8 = __s;
        pvStack_98 = pvVar4;
        memset(__s,0xff,uVar16);
        local_ec = 0;
        pvStack_a0 = pvVar4;
        if (__size != 0) goto LAB_001076d7;
        operator_delete(__s,uVar16);
LAB_00107d37:
        if (local_e8 != (void *)0x0) {
          operator_delete(local_e8,local_d8 - (long)local_e8);
        }
        if (__ptr == (void *)0x0) goto LAB_0010702f;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        free(__ptr);
        return;
      }
      goto LAB_00107d62;
    }
  }
LAB_0010702f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00107d62:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::vector<int, std::allocator<int> >::_M_default_append(unsigned long) */

void __thiscall
std::vector<int,std::allocator<int>>::_M_default_append
          (vector<int,std::allocator<int>> *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  void *__dest;
  void *pvVar3;
  undefined4 *__s;
  size_t sVar4;
  ulong uVar5;
  undefined4 *puVar6;
  
  if (param_1 == 0) {
    return;
  }
  puVar6 = *(undefined4 **)(this + 8);
  pvVar3 = *(void **)this;
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar6 >> 2)) {
    *puVar6 = 0;
    __s = puVar6 + 1;
    if (param_1 - 1 != 0) {
      sVar4 = (long)__s + ((param_1 - 1) * 4 - (long)puVar6) + -4;
      pvVar3 = memset(__s,0,sVar4);
      __s = (undefined4 *)((long)pvVar3 + sVar4);
    }
    *(undefined4 **)(this + 8) = __s;
    return;
  }
  sVar4 = (long)puVar6 - (long)pvVar3;
  uVar2 = (long)sVar4 >> 2;
  if (0x1fffffffffffffff - uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_default_append");
  }
  uVar1 = param_1 + uVar2;
  if (uVar2 < param_1) {
    uVar2 = 0x1fffffffffffffff;
    if (uVar1 < 0x2000000000000000) {
      uVar2 = uVar1;
    }
    uVar2 = uVar2 * 4;
    __dest = operator_new(uVar2);
    puVar6 = (undefined4 *)((long)__dest + sVar4);
    *puVar6 = 0;
    if (param_1 - 1 != 0) goto LAB_00107e74;
LAB_00107e88:
    if (sVar4 != 0) goto LAB_00107f58;
    if (pvVar3 == (void *)0x0) goto LAB_00107e9a;
    uVar5 = *(long *)(this + 0x10) - (long)pvVar3;
  }
  else {
    uVar2 = uVar2 * 2;
    if (0x1fffffffffffffff < uVar2) {
      uVar2 = 0x1fffffffffffffff;
    }
    uVar2 = uVar2 * 4;
    __dest = operator_new(uVar2);
    puVar6 = (undefined4 *)((long)__dest + sVar4);
    *puVar6 = 0;
    if (param_1 != 1) {
LAB_00107e74:
      memset(puVar6 + 1,0,(param_1 - 1) * 4);
      goto LAB_00107e88;
    }
LAB_00107f58:
    memmove(__dest,pvVar3,sVar4);
    uVar5 = *(long *)(this + 0x10) - (long)pvVar3;
  }
  operator_delete(pvVar3,uVar5);
LAB_00107e9a:
  *(void **)this = __dest;
  *(void **)(this + 8) = (void *)((long)__dest + uVar1 * 4);
  *(ulong *)(this + 0x10) = (long)__dest + uVar2;
  return;
}




/* void manifold::for_each<manifold::CountingIterator<unsigned long>, (anonymous
   namespace)::ReindexFace>(manifold::ExecutionPolicy, manifold::CountingIterator<unsigned long>,
   manifold::CountingIterator<unsigned long>, (anonymous namespace)::ReindexFace) [clone
   .constprop.0] */

void manifold::
     for_each<manifold::CountingIterator<unsigned_long>,(anonymous_namespace)::ReindexFace>
               (undefined8 param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  int *piVar17;
  long lVar18;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  uVar12 = _LC0;
  lVar4 = *param_3;
  lVar5 = param_3[4];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = param_3[2];
  lVar7 = param_3[6];
  lVar8 = param_3[7];
  lVar9 = param_3[10];
  lVar10 = param_3[8];
  if (param_2 != 0) {
    lVar18 = 0;
    do {
      local_48 = 2;
      iVar1 = *(int *)(lVar10 + (long)(int)lVar18 * 4);
      local_50 = uVar12;
      piVar17 = (int *)&local_50;
      do {
        lVar13 = (long)(*piVar17 + iVar1 * 3);
        lVar15 = (long)(*piVar17 + (int)lVar18 * 3);
        puVar16 = (undefined8 *)(lVar5 + lVar13 * 0xc);
        iVar2 = *(int *)(puVar16 + 1);
        iVar3 = *(int *)(lVar9 + (long)(iVar2 / 3) * 4);
        puVar14 = (undefined8 *)(lVar4 + lVar15 * 0xc);
        *puVar14 = *puVar16;
        *(int *)(puVar14 + 1) = iVar2 % 3 + iVar3 * 3;
        if (lVar8 != 0) {
          puVar16 = (undefined8 *)(lVar15 * 0x20 + lVar6);
          puVar14 = (undefined8 *)(lVar13 * 0x20 + lVar7);
          uVar11 = puVar14[1];
          *puVar16 = *puVar14;
          puVar16[1] = uVar11;
          uVar11 = puVar14[3];
          puVar16[2] = puVar14[2];
          puVar16[3] = uVar11;
        }
        piVar17 = piVar17 + 1;
      } while (piVar17 != &local_44);
      lVar18 = lVar18 + 1;
    } while (param_2 != lVar18);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Rb_tree<int, std::pair<int const, manifold::Manifold::Impl::Relation>,
   std::_Select1st<std::pair<int const, manifold::Manifold::Impl::Relation> >, std::less<int>,
   std::allocator<std::pair<int const, manifold::Manifold::Impl::Relation> >
   >::_M_get_insert_unique_pos(int const&) [clone .isra.0] */

undefined1  [16] __thiscall
std::
_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
::_M_get_insert_unique_pos
          (_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
           *this,int *param_1)

{
  undefined1 auVar1 [16];
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  
  iVar6 = (int)param_1;
  p_Var2 = *(_Rb_tree_node_base **)(this + 0x10);
  if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
    p_Var2 = (_Rb_tree_node_base *)(this + 8);
  }
  else {
    do {
      p_Var4 = p_Var2;
      iVar5 = *(int *)(p_Var4 + 0x20);
      p_Var2 = *(_Rb_tree_node_base **)(p_Var4 + 0x18);
      if (iVar6 < iVar5) {
        p_Var2 = *(_Rb_tree_node_base **)(p_Var4 + 0x10);
      }
    } while (p_Var2 != (_Rb_tree_node_base *)0x0);
    p_Var2 = p_Var4;
    if (iVar5 <= iVar6) goto LAB_001001a8;
  }
  if (*(_Rb_tree_node_base **)(this + 0x18) == p_Var2) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = p_Var2;
    return auVar1 << 0x40;
  }
  p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var2);
  iVar5 = *(int *)(p_Var4 + 0x20);
LAB_001001a8:
  p_Var3 = (_Rb_tree_node_base *)0x0;
  if (iVar5 < iVar6) {
    p_Var4 = p_Var3;
    p_Var3 = p_Var2;
  }
  auVar7._8_8_ = p_Var3;
  auVar7._0_8_ = p_Var4;
  return auVar7;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__lower_bound<int*, int, __gnu_cxx::__ops::_Iter_comp_val<(anonymous
   namespace)::MergeMeshGLP<float, unsigned int>(manifold::MeshGLP<float, unsigned
   int>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int const&,
   __gnu_cxx::__ops::_Iter_comp_val<(anonymous namespace)::MergeMeshGLP<float, unsigned
   int>(manifold::MeshGLP<float, unsigned int>&)::{lambda(int const&, int const&)#1}>) [clone
   .isra.0] */

int * std::
      __lower_bound<int*,int,__gnu_cxx::__ops::_Iter_comp_val<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                (int *param_1,long param_2,int param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  do {
    lVar2 = lVar1;
    if (lVar1 < 1) {
      return param_1;
    }
    while( true ) {
      lVar1 = lVar2 >> 1;
      if (*(uint *)(*param_4 + (long)param_3 * 4) <= *(uint *)(*param_4 + (long)param_1[lVar1] * 4))
      break;
      param_1 = param_1 + lVar1 + 1;
      lVar2 = (lVar2 - lVar1) + -1;
      if (lVar2 < 1) {
        return param_1;
      }
    }
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__lower_bound<int*, int,
   __gnu_cxx::__ops::_Iter_comp_val<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,
   manifold::Vec<unsigned int>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int const&,
   __gnu_cxx::__ops::_Iter_comp_val<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,
   manifold::Vec<unsigned int>&)::{lambda(int const&, int const&)#1}>) [clone .isra.0] */

int * std::
      __lower_bound<int*,int,__gnu_cxx::__ops::_Iter_comp_val<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                (int *param_1,long param_2,int param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  do {
    lVar2 = lVar1;
    if (lVar1 < 1) {
      return param_1;
    }
    while( true ) {
      lVar1 = lVar2 >> 1;
      if (*(uint *)(*param_4 + (long)param_3 * 4) <= *(uint *)(*param_4 + (long)param_1[lVar1] * 4))
      break;
      param_1 = param_1 + lVar1 + 1;
      lVar2 = (lVar2 - lVar1) + -1;
      if (lVar2 < 1) {
        return param_1;
      }
    }
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__upper_bound<int*, int,
   __gnu_cxx::__ops::_Val_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,
   manifold::Vec<unsigned int>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int const&,
   __gnu_cxx::__ops::_Val_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,
   manifold::Vec<unsigned int>&)::{lambda(int const&, int const&)#1}>) [clone .isra.0] */

int * std::
      __upper_bound<int*,int,__gnu_cxx::__ops::_Val_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                (int *param_1,long param_2,int param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  do {
    lVar2 = lVar1;
    if (lVar1 < 1) {
      return param_1;
    }
    while( true ) {
      lVar1 = lVar2 >> 1;
      if (*(uint *)(*param_4 + (long)param_3 * 4) < *(uint *)(*param_4 + (long)param_1[lVar1] * 4))
      break;
      param_1 = param_1 + lVar1 + 1;
      lVar2 = (lVar2 - lVar1) + -1;
      if (lVar2 < 1) {
        return param_1;
      }
    }
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__upper_bound<int*, int, __gnu_cxx::__ops::_Val_comp_iter<(anonymous
   namespace)::MergeMeshGLP<double, unsigned long>(manifold::MeshGLP<double, unsigned
   long>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int const&,
   __gnu_cxx::__ops::_Val_comp_iter<(anonymous namespace)::MergeMeshGLP<double, unsigned
   long>(manifold::MeshGLP<double, unsigned long>&)::{lambda(int const&, int const&)#1}>) [clone
   .isra.0] */

int * std::
      __upper_bound<int*,int,__gnu_cxx::__ops::_Val_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
                (int *param_1,long param_2,int param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  do {
    lVar2 = lVar1;
    if (lVar1 < 1) {
      return param_1;
    }
    while( true ) {
      lVar1 = lVar2 >> 1;
      if (*(uint *)(*param_4 + (long)param_3 * 4) < *(uint *)(*param_4 + (long)param_1[lVar1] * 4))
      break;
      param_1 = param_1 + lVar1 + 1;
      lVar2 = (lVar2 - lVar1) + -1;
      if (lVar2 < 1) {
        return param_1;
      }
    }
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__upper_bound<int*, int, __gnu_cxx::__ops::_Val_comp_iter<(anonymous
   namespace)::MergeMeshGLP<float, unsigned int>(manifold::MeshGLP<float, unsigned
   int>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int const&,
   __gnu_cxx::__ops::_Val_comp_iter<(anonymous namespace)::MergeMeshGLP<float, unsigned
   int>(manifold::MeshGLP<float, unsigned int>&)::{lambda(int const&, int const&)#1}>) [clone
   .isra.0] */

int * std::
      __upper_bound<int*,int,__gnu_cxx::__ops::_Val_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                (int *param_1,long param_2,int param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  do {
    lVar2 = lVar1;
    if (lVar1 < 1) {
      return param_1;
    }
    while( true ) {
      lVar1 = lVar2 >> 1;
      if (*(uint *)(*param_4 + (long)param_3 * 4) < *(uint *)(*param_4 + (long)param_1[lVar1] * 4))
      break;
      param_1 = param_1 + lVar1 + 1;
      lVar2 = (lVar2 - lVar1) + -1;
      if (lVar2 < 1) {
        return param_1;
      }
    }
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__lower_bound<int*, int, __gnu_cxx::__ops::_Iter_comp_val<(anonymous
   namespace)::MergeMeshGLP<double, unsigned long>(manifold::MeshGLP<double, unsigned
   long>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int const&,
   __gnu_cxx::__ops::_Iter_comp_val<(anonymous namespace)::MergeMeshGLP<double, unsigned
   long>(manifold::MeshGLP<double, unsigned long>&)::{lambda(int const&, int const&)#1}>) [clone
   .isra.0] */

int * std::
      __lower_bound<int*,int,__gnu_cxx::__ops::_Iter_comp_val<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
                (int *param_1,long param_2,int param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  do {
    lVar2 = lVar1;
    if (lVar1 < 1) {
      return param_1;
    }
    while( true ) {
      lVar1 = lVar2 >> 1;
      if (*(uint *)(*param_4 + (long)param_3 * 4) <= *(uint *)(*param_4 + (long)param_1[lVar1] * 4))
      break;
      param_1 = param_1 + lVar1 + 1;
      lVar2 = (lVar2 - lVar1) + -1;
      if (lVar2 < 1) {
        return param_1;
      }
    }
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__upper_bound<int*, int,
   __gnu_cxx::__ops::_Val_comp_iter<manifold::Manifold::Impl::SortVerts()::{lambda(int const&, int
   const&)#1}> >(int*, int*, int const&,
   __gnu_cxx::__ops::_Val_comp_iter<manifold::Manifold::Impl::SortVerts()::{lambda(int const&, int
   const&)#1}>) [clone .isra.0] */

int * std::
      __upper_bound<int*,int,__gnu_cxx::__ops::_Val_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
                (int *param_1,long param_2,int param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  do {
    lVar2 = lVar1;
    if (lVar1 < 1) {
      return param_1;
    }
    while( true ) {
      lVar1 = lVar2 >> 1;
      if (*(uint *)(*param_4 + (long)param_3 * 4) < *(uint *)(*param_4 + (long)param_1[lVar1] * 4))
      break;
      param_1 = param_1 + lVar1 + 1;
      lVar2 = (lVar2 - lVar1) + -1;
      if (lVar2 < 1) {
        return param_1;
      }
    }
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__lower_bound<int*, int,
   __gnu_cxx::__ops::_Iter_comp_val<manifold::Manifold::Impl::SortVerts()::{lambda(int const&, int
   const&)#1}> >(int*, int*, int const&,
   __gnu_cxx::__ops::_Iter_comp_val<manifold::Manifold::Impl::SortVerts()::{lambda(int const&, int
   const&)#1}>) [clone .isra.0] */

int * std::
      __lower_bound<int*,int,__gnu_cxx::__ops::_Iter_comp_val<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
                (int *param_1,long param_2,int param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  do {
    lVar2 = lVar1;
    if (lVar1 < 1) {
      return param_1;
    }
    while( true ) {
      lVar1 = lVar2 >> 1;
      if (*(uint *)(*param_4 + (long)param_3 * 4) <= *(uint *)(*param_4 + (long)param_1[lVar1] * 4))
      break;
      param_1 = param_1 + lVar1 + 1;
      lVar2 = (lVar2 - lVar1) + -1;
      if (lVar2 < 1) {
        return param_1;
      }
    }
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<int*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::MergeMeshGLP<double, unsigned long>(manifold::MeshGLP<double, unsigned
   long>&)::{lambda(int const&, int const&)#1}> >(int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::MergeMeshGLP<double, unsigned
   long>(manifold::MeshGLP<double, unsigned long>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
               (int *param_1,int *param_2,long *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  size_t __n;
  int *piVar6;
  int *piVar7;
  long lVar8;
  
  if (param_1 == param_2) {
    return;
  }
  piVar6 = param_1 + 1;
  do {
    if (param_2 == piVar6) {
      return;
    }
    while( true ) {
      iVar2 = *piVar6;
      lVar4 = *param_3;
      piVar7 = piVar6 + 1;
      puVar1 = (uint *)(lVar4 + (long)iVar2 * 4);
      uVar3 = *puVar1;
      if (uVar3 < *(uint *)(lVar4 + (long)*param_1 * 4)) break;
      lVar8 = (long)piVar6[-1];
      piVar5 = piVar6;
      if (uVar3 < *(uint *)(lVar4 + lVar8 * 4)) {
        do {
          piVar6 = piVar5 + -1;
          *piVar5 = (int)lVar8;
          lVar8 = (long)piVar5[-2];
          piVar5 = piVar6;
        } while (*puVar1 < *(uint *)(lVar4 + lVar8 * 4));
      }
      *piVar6 = iVar2;
      piVar6 = piVar7;
      if (param_2 == piVar7) {
        return;
      }
    }
    __n = (long)piVar6 - (long)param_1;
    if ((long)__n < 5) {
      if (__n == 4) {
        *piVar6 = *param_1;
      }
    }
    else {
      memmove((void *)((4 - __n) + (long)piVar6),param_1,__n);
    }
    *param_1 = iVar2;
    piVar6 = piVar7;
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<int*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::MergeMeshGLP<float, unsigned int>(manifold::MeshGLP<float, unsigned
   int>&)::{lambda(int const&, int const&)#1}> >(int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::MergeMeshGLP<float, unsigned
   int>(manifold::MeshGLP<float, unsigned int>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
               (int *param_1,int *param_2,long *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  size_t __n;
  int *piVar6;
  int *piVar7;
  long lVar8;
  
  if (param_1 == param_2) {
    return;
  }
  piVar6 = param_1 + 1;
  do {
    if (param_2 == piVar6) {
      return;
    }
    while( true ) {
      iVar2 = *piVar6;
      lVar4 = *param_3;
      piVar7 = piVar6 + 1;
      puVar1 = (uint *)(lVar4 + (long)iVar2 * 4);
      uVar3 = *puVar1;
      if (uVar3 < *(uint *)(lVar4 + (long)*param_1 * 4)) break;
      lVar8 = (long)piVar6[-1];
      piVar5 = piVar6;
      if (uVar3 < *(uint *)(lVar4 + lVar8 * 4)) {
        do {
          piVar6 = piVar5 + -1;
          *piVar5 = (int)lVar8;
          lVar8 = (long)piVar5[-2];
          piVar5 = piVar6;
        } while (*puVar1 < *(uint *)(lVar4 + lVar8 * 4));
      }
      *piVar6 = iVar2;
      piVar6 = piVar7;
      if (param_2 == piVar7) {
        return;
      }
    }
    __n = (long)piVar6 - (long)param_1;
    if ((long)__n < 5) {
      if (__n == 4) {
        *piVar6 = *param_1;
      }
    }
    else {
      memmove((void *)((4 - __n) + (long)piVar6),param_1,__n);
    }
    *param_1 = iVar2;
    piVar6 = piVar7;
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::{lambda(int const&, int
   const&)#1}> >(int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::{lambda(int const&, int
   const&)#1}>) */

void std::
     __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
               (int *param_1,int *param_2,long *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  size_t __n;
  int *piVar6;
  int *piVar7;
  long lVar8;
  
  if (param_1 == param_2) {
    return;
  }
  piVar6 = param_1 + 1;
  do {
    if (param_2 == piVar6) {
      return;
    }
    while( true ) {
      iVar2 = *piVar6;
      lVar4 = *param_3;
      piVar7 = piVar6 + 1;
      puVar1 = (uint *)(lVar4 + (long)iVar2 * 4);
      uVar3 = *puVar1;
      if (uVar3 < *(uint *)(lVar4 + (long)*param_1 * 4)) break;
      lVar8 = (long)piVar6[-1];
      piVar5 = piVar6;
      if (uVar3 < *(uint *)(lVar4 + lVar8 * 4)) {
        do {
          piVar6 = piVar5 + -1;
          *piVar5 = (int)lVar8;
          lVar8 = (long)piVar5[-2];
          piVar5 = piVar6;
        } while (*puVar1 < *(uint *)(lVar4 + lVar8 * 4));
      }
      *piVar6 = iVar2;
      piVar6 = piVar7;
      if (param_2 == piVar7) {
        return;
      }
    }
    __n = (long)piVar6 - (long)param_1;
    if ((long)__n < 5) {
      if (__n == 4) {
        *piVar6 = *param_1;
      }
    }
    else {
      memmove((void *)((4 - __n) + (long)piVar6),param_1,__n);
    }
    *param_1 = iVar2;
    piVar6 = piVar7;
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,
   manifold::Vec<unsigned int>&)::{lambda(int const&, int const&)#1}> >(int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,
   manifold::Vec<unsigned int>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
               (int *param_1,int *param_2,long *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  size_t __n;
  int *piVar6;
  int *piVar7;
  long lVar8;
  
  if (param_1 == param_2) {
    return;
  }
  piVar6 = param_1 + 1;
  do {
    if (param_2 == piVar6) {
      return;
    }
    while( true ) {
      iVar2 = *piVar6;
      lVar4 = *param_3;
      piVar7 = piVar6 + 1;
      puVar1 = (uint *)(lVar4 + (long)iVar2 * 4);
      uVar3 = *puVar1;
      if (uVar3 < *(uint *)(lVar4 + (long)*param_1 * 4)) break;
      lVar8 = (long)piVar6[-1];
      piVar5 = piVar6;
      if (uVar3 < *(uint *)(lVar4 + lVar8 * 4)) {
        do {
          piVar6 = piVar5 + -1;
          *piVar5 = (int)lVar8;
          lVar8 = (long)piVar5[-2];
          piVar5 = piVar6;
        } while (*puVar1 < *(uint *)(lVar4 + lVar8 * 4));
      }
      *piVar6 = iVar2;
      piVar6 = piVar7;
      if (param_2 == piVar7) {
        return;
      }
    }
    __n = (long)piVar6 - (long)param_1;
    if ((long)__n < 5) {
      if (__n == 4) {
        *piVar6 = *param_1;
      }
    }
    else {
      memmove((void *)((4 - __n) + (long)piVar6),param_1,__n);
    }
    *param_1 = iVar2;
    piVar6 = piVar7;
  } while( true );
}



/* std::_Rb_tree<std::pair<int, int>, std::pair<int, int>, std::_Identity<std::pair<int, int> >,
   std::less<std::pair<int, int> >, std::allocator<std::pair<int, int> >
   >::_M_erase(std::_Rb_tree_node<std::pair<int, int> >*) [clone .isra.0] */

void std::
     _Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
     ::_M_erase(_Rb_tree_node *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  _Rb_tree_node *p_Var9;
  void *pvVar10;
  _Rb_tree_node *local_48;
  
  local_48 = param_1;
  if (param_1 != (_Rb_tree_node *)0x0) {
    do {
      pvVar10 = *(void **)(local_48 + 0x18);
      while (pvVar10 != (void *)0x0) {
        pvVar8 = *(void **)((long)pvVar10 + 0x18);
        while (pvVar8 != (void *)0x0) {
          pvVar7 = *(void **)((long)pvVar8 + 0x18);
          while (pvVar7 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar7 + 0x18);
            while (pvVar5 != (void *)0x0) {
              pvVar3 = *(void **)((long)pvVar5 + 0x18);
              while (pvVar3 != (void *)0x0) {
                pvVar4 = *(void **)((long)pvVar3 + 0x18);
                while (pvVar4 != (void *)0x0) {
                  pvVar6 = *(void **)((long)pvVar4 + 0x18);
                  while (pvVar6 != (void *)0x0) {
                    pvVar2 = *(void **)((long)pvVar6 + 0x18);
                    while (pvVar2 != (void *)0x0) {
                      _M_erase(*(_Rb_tree_node **)((long)pvVar2 + 0x18));
                      pvVar1 = *(void **)((long)pvVar2 + 0x10);
                      operator_delete(pvVar2,0x28);
                      pvVar2 = pvVar1;
                    }
                    pvVar2 = *(void **)((long)pvVar6 + 0x10);
                    operator_delete(pvVar6,0x28);
                    pvVar6 = pvVar2;
                  }
                  pvVar6 = *(void **)((long)pvVar4 + 0x10);
                  operator_delete(pvVar4,0x28);
                  pvVar4 = pvVar6;
                }
                pvVar4 = *(void **)((long)pvVar3 + 0x10);
                operator_delete(pvVar3,0x28);
                pvVar3 = pvVar4;
              }
              pvVar3 = *(void **)((long)pvVar5 + 0x10);
              operator_delete(pvVar5,0x28);
              pvVar5 = pvVar3;
            }
            pvVar5 = *(void **)((long)pvVar7 + 0x10);
            operator_delete(pvVar7,0x28);
            pvVar7 = pvVar5;
          }
          pvVar7 = *(void **)((long)pvVar8 + 0x10);
          operator_delete(pvVar8,0x28);
          pvVar8 = pvVar7;
        }
        pvVar8 = *(void **)((long)pvVar10 + 0x10);
        operator_delete(pvVar10,0x28);
        pvVar10 = pvVar8;
      }
      p_Var9 = *(_Rb_tree_node **)(local_48 + 0x10);
      operator_delete(local_48,0x28);
      local_48 = p_Var9;
    } while (p_Var9 != (_Rb_tree_node *)0x0);
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__move_merge<int*, int*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::MergeMeshGLP<float, unsigned int>(manifold::MeshGLP<float, unsigned
   int>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::MergeMeshGLP<float, unsigned
   int>(manifold::MeshGLP<float, unsigned int>&)::{lambda(int const&, int const&)#1}>) */

int * std::
      __move_merge<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                (int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,long *param_6)

{
  int iVar1;
  long lVar2;
  size_t __n;
  size_t __n_00;
  int *piVar3;
  
  if ((param_1 != param_2) && (param_3 != param_4)) {
    lVar2 = *param_6;
    piVar3 = param_5;
    do {
      iVar1 = *param_3;
      if (*(uint *)(lVar2 + (long)iVar1 * 4) < *(uint *)(lVar2 + (long)*param_1 * 4)) {
        param_3 = param_3 + 1;
        *piVar3 = iVar1;
      }
      else {
        *piVar3 = *param_1;
        param_1 = param_1 + 1;
      }
      param_5 = piVar3 + 1;
    } while ((param_4 != param_3) && (param_5 = piVar3 + 1, piVar3 = param_5, param_2 != param_1));
  }
  __n_00 = (long)param_2 - (long)param_1;
  if ((long)__n_00 < 5) {
    if (__n_00 == 4) {
      *param_5 = *param_1;
    }
  }
  else {
    param_5 = (int *)memmove(param_5,param_1,__n_00);
  }
  __n = (long)param_4 - (long)param_3;
  param_5 = (int *)((long)param_5 + __n_00);
  if ((long)__n < 5) {
    if (__n == 4) {
      *param_5 = *param_3;
    }
  }
  else {
    param_5 = (int *)memmove(param_5,param_3,__n);
  }
  return (int *)((long)param_5 + __n);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_sort_loop<int*, int*, long, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::MergeMeshGLP<float, unsigned int>(manifold::MeshGLP<float, unsigned
   int>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::MergeMeshGLP<float, unsigned
   int>(manifold::MeshGLP<float, unsigned int>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __merge_sort_loop<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
               (long param_1,long param_2,int *param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2 - param_1 >> 2;
  if (param_4 * 2 <= lVar1) {
    lVar2 = param_1;
    do {
      param_1 = lVar2 + param_4 * 8;
      lVar1 = param_1 + param_4 * -4;
      param_3 = __move_merge<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                          (lVar2,lVar1,lVar1,param_1,param_3,param_5);
      lVar1 = param_2 - param_1 >> 2;
      lVar2 = param_1;
    } while (SBORROW8(lVar1,param_4 * 2) == lVar1 + param_4 * -2 < 0);
  }
  if (lVar1 < param_4) {
    param_4 = lVar1;
  }
  lVar1 = param_1 + param_4 * 4;
  __move_merge<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
            (param_1,lVar1,lVar1,param_2,param_3,param_5);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_sort_with_buffer<int*, int*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::MergeMeshGLP<float, unsigned int>(manifold::MeshGLP<float, unsigned
   int>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::MergeMeshGLP<float, unsigned
   int>(manifold::MeshGLP<float, unsigned int>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __merge_sort_with_buffer<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
               (long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_2 - param_1;
  lVar3 = param_1;
  if (lVar1 < 0x19) {
    __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
              (param_1,param_2,param_4);
    return;
  }
  do {
    lVar2 = lVar3 + 0x1c;
    __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
              (lVar3,lVar2,param_4);
    lVar3 = lVar2;
  } while (0x18 < param_2 - lVar2);
  __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
            (lVar2,param_2,param_4);
  if (0x1c < lVar1) {
    lVar3 = 7;
    do {
      __merge_sort_loop<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                (param_1,param_2,param_3,lVar3,param_4);
      lVar2 = lVar3 * 2;
      lVar3 = lVar3 * 4;
      __merge_sort_loop<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                (param_3,param_3 + lVar1,param_1,lVar2,param_4);
    } while (lVar3 < lVar1 >> 2);
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__move_merge<int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::{lambda(int const&, int
   const&)#1}> >(int*, int*, int*, int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::{lambda(int const&, int
   const&)#1}>) */

int * std::
      __move_merge<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
                (int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,long *param_6)

{
  int iVar1;
  long lVar2;
  size_t __n;
  size_t __n_00;
  int *piVar3;
  
  if ((param_1 != param_2) && (param_3 != param_4)) {
    lVar2 = *param_6;
    piVar3 = param_5;
    do {
      iVar1 = *param_3;
      if (*(uint *)(lVar2 + (long)iVar1 * 4) < *(uint *)(lVar2 + (long)*param_1 * 4)) {
        param_3 = param_3 + 1;
        *piVar3 = iVar1;
      }
      else {
        *piVar3 = *param_1;
        param_1 = param_1 + 1;
      }
      param_5 = piVar3 + 1;
    } while ((param_4 != param_3) && (param_5 = piVar3 + 1, piVar3 = param_5, param_2 != param_1));
  }
  __n_00 = (long)param_2 - (long)param_1;
  if ((long)__n_00 < 5) {
    if (__n_00 == 4) {
      *param_5 = *param_1;
    }
  }
  else {
    param_5 = (int *)memmove(param_5,param_1,__n_00);
  }
  __n = (long)param_4 - (long)param_3;
  param_5 = (int *)((long)param_5 + __n_00);
  if ((long)__n < 5) {
    if (__n == 4) {
      *param_5 = *param_3;
    }
  }
  else {
    param_5 = (int *)memmove(param_5,param_3,__n);
  }
  return (int *)((long)param_5 + __n);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_sort_loop<int*, int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::{lambda(int const&, int
   const&)#1}> >(int*, int*, int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::{lambda(int const&, int
   const&)#1}>) */

void std::
     __merge_sort_loop<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
               (long param_1,long param_2,int *param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2 - param_1 >> 2;
  if (param_4 * 2 <= lVar1) {
    lVar2 = param_1;
    do {
      param_1 = lVar2 + param_4 * 8;
      lVar1 = param_1 + param_4 * -4;
      param_3 = __move_merge<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
                          (lVar2,lVar1,lVar1,param_1,param_3,param_5);
      lVar1 = param_2 - param_1 >> 2;
      lVar2 = param_1;
    } while (SBORROW8(lVar1,param_4 * 2) == lVar1 + param_4 * -2 < 0);
  }
  if (lVar1 < param_4) {
    param_4 = lVar1;
  }
  lVar1 = param_1 + param_4 * 4;
  __move_merge<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
            (param_1,lVar1,lVar1,param_2,param_3,param_5);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_sort_with_buffer<int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::{lambda(int const&, int
   const&)#1}> >(int*, int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::{lambda(int const&, int
   const&)#1}>) */

void std::
     __merge_sort_with_buffer<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
               (long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_2 - param_1;
  lVar3 = param_1;
  if (lVar1 < 0x19) {
    __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
              (param_1,param_2,param_4);
    return;
  }
  do {
    lVar2 = lVar3 + 0x1c;
    __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
              (lVar3,lVar2,param_4);
    lVar3 = lVar2;
  } while (0x18 < param_2 - lVar2);
  __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
            (lVar2,param_2,param_4);
  if (0x1c < lVar1) {
    lVar3 = 7;
    do {
      __merge_sort_loop<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
                (param_1,param_2,param_3,lVar3,param_4);
      lVar2 = lVar3 * 2;
      lVar3 = lVar3 * 4;
      __merge_sort_loop<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
                (param_3,param_3 + lVar1,param_1,lVar2,param_4);
    } while (lVar3 < lVar1 >> 2);
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__move_merge<int*, int*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::MergeMeshGLP<double, unsigned long>(manifold::MeshGLP<double, unsigned
   long>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::MergeMeshGLP<double, unsigned
   long>(manifold::MeshGLP<double, unsigned long>&)::{lambda(int const&, int const&)#1}>) */

int * std::
      __move_merge<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
                (int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,long *param_6)

{
  int iVar1;
  long lVar2;
  size_t __n;
  size_t __n_00;
  int *piVar3;
  
  if ((param_1 != param_2) && (param_3 != param_4)) {
    lVar2 = *param_6;
    piVar3 = param_5;
    do {
      iVar1 = *param_3;
      if (*(uint *)(lVar2 + (long)iVar1 * 4) < *(uint *)(lVar2 + (long)*param_1 * 4)) {
        param_3 = param_3 + 1;
        *piVar3 = iVar1;
      }
      else {
        *piVar3 = *param_1;
        param_1 = param_1 + 1;
      }
      param_5 = piVar3 + 1;
    } while ((param_4 != param_3) && (param_5 = piVar3 + 1, piVar3 = param_5, param_2 != param_1));
  }
  __n_00 = (long)param_2 - (long)param_1;
  if ((long)__n_00 < 5) {
    if (__n_00 == 4) {
      *param_5 = *param_1;
    }
  }
  else {
    param_5 = (int *)memmove(param_5,param_1,__n_00);
  }
  __n = (long)param_4 - (long)param_3;
  param_5 = (int *)((long)param_5 + __n_00);
  if ((long)__n < 5) {
    if (__n == 4) {
      *param_5 = *param_3;
    }
  }
  else {
    param_5 = (int *)memmove(param_5,param_3,__n);
  }
  return (int *)((long)param_5 + __n);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_sort_loop<int*, int*, long, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::MergeMeshGLP<double, unsigned long>(manifold::MeshGLP<double, unsigned
   long>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::MergeMeshGLP<double, unsigned
   long>(manifold::MeshGLP<double, unsigned long>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __merge_sort_loop<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
               (long param_1,long param_2,int *param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2 - param_1 >> 2;
  if (param_4 * 2 <= lVar1) {
    lVar2 = param_1;
    do {
      param_1 = lVar2 + param_4 * 8;
      lVar1 = param_1 + param_4 * -4;
      param_3 = __move_merge<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
                          (lVar2,lVar1,lVar1,param_1,param_3,param_5);
      lVar1 = param_2 - param_1 >> 2;
      lVar2 = param_1;
    } while (SBORROW8(lVar1,param_4 * 2) == lVar1 + param_4 * -2 < 0);
  }
  if (lVar1 < param_4) {
    param_4 = lVar1;
  }
  lVar1 = param_1 + param_4 * 4;
  __move_merge<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
            (param_1,lVar1,lVar1,param_2,param_3,param_5);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_sort_with_buffer<int*, int*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::MergeMeshGLP<double, unsigned long>(manifold::MeshGLP<double, unsigned
   long>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::MergeMeshGLP<double, unsigned
   long>(manifold::MeshGLP<double, unsigned long>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __merge_sort_with_buffer<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
               (long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_2 - param_1;
  lVar3 = param_1;
  if (lVar1 < 0x19) {
    __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
              (param_1,param_2,param_4);
    return;
  }
  do {
    lVar2 = lVar3 + 0x1c;
    __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
              (lVar3,lVar2,param_4);
    lVar3 = lVar2;
  } while (0x18 < param_2 - lVar2);
  __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
            (lVar2,param_2,param_4);
  if (0x1c < lVar1) {
    lVar3 = 7;
    do {
      __merge_sort_loop<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
                (param_1,param_2,param_3,lVar3,param_4);
      lVar2 = lVar3 * 2;
      lVar3 = lVar3 * 4;
      __merge_sort_loop<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
                (param_3,param_3 + lVar1,param_1,lVar2,param_4);
    } while (lVar3 < lVar1 >> 2);
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__move_merge<int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,
   manifold::Vec<unsigned int>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, int*,
   int*, 
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,
   manifold::Vec<unsigned int>&)::{lambda(int const&, int const&)#1}>) */

int * std::
      __move_merge<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                (int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,long *param_6)

{
  int iVar1;
  long lVar2;
  size_t __n;
  size_t __n_00;
  int *piVar3;
  
  if ((param_1 != param_2) && (param_3 != param_4)) {
    lVar2 = *param_6;
    piVar3 = param_5;
    do {
      iVar1 = *param_3;
      if (*(uint *)(lVar2 + (long)iVar1 * 4) < *(uint *)(lVar2 + (long)*param_1 * 4)) {
        param_3 = param_3 + 1;
        *piVar3 = iVar1;
      }
      else {
        *piVar3 = *param_1;
        param_1 = param_1 + 1;
      }
      param_5 = piVar3 + 1;
    } while ((param_4 != param_3) && (param_5 = piVar3 + 1, piVar3 = param_5, param_2 != param_1));
  }
  __n_00 = (long)param_2 - (long)param_1;
  if ((long)__n_00 < 5) {
    if (__n_00 == 4) {
      *param_5 = *param_1;
    }
  }
  else {
    param_5 = (int *)memmove(param_5,param_1,__n_00);
  }
  __n = (long)param_4 - (long)param_3;
  param_5 = (int *)((long)param_5 + __n_00);
  if ((long)__n < 5) {
    if (__n == 4) {
      *param_5 = *param_3;
    }
  }
  else {
    param_5 = (int *)memmove(param_5,param_3,__n);
  }
  return (int *)((long)param_5 + __n);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_sort_loop<int*, int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,
   manifold::Vec<unsigned int>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,
   manifold::Vec<unsigned int>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __merge_sort_loop<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
               (long param_1,long param_2,int *param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2 - param_1 >> 2;
  if (param_4 * 2 <= lVar1) {
    lVar2 = param_1;
    do {
      param_1 = lVar2 + param_4 * 8;
      lVar1 = param_1 + param_4 * -4;
      param_3 = __move_merge<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                          (lVar2,lVar1,lVar1,param_1,param_3,param_5);
      lVar1 = param_2 - param_1 >> 2;
      lVar2 = param_1;
    } while (SBORROW8(lVar1,param_4 * 2) == lVar1 + param_4 * -2 < 0);
  }
  if (lVar1 < param_4) {
    param_4 = lVar1;
  }
  lVar1 = param_1 + param_4 * 4;
  __move_merge<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
            (param_1,lVar1,lVar1,param_2,param_3,param_5);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_sort_with_buffer<int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,
   manifold::Vec<unsigned int>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,
   manifold::Vec<unsigned int>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __merge_sort_with_buffer<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
               (long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_2 - param_1;
  lVar3 = param_1;
  if (lVar1 < 0x19) {
    __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
              (param_1,param_2,param_4);
    return;
  }
  do {
    lVar2 = lVar3 + 0x1c;
    __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
              (lVar3,lVar2,param_4);
    lVar3 = lVar2;
  } while (0x18 < param_2 - lVar2);
  __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
            (lVar2,param_2,param_4);
  if (0x1c < lVar1) {
    lVar3 = 7;
    do {
      __merge_sort_loop<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                (param_1,param_2,param_3,lVar3,param_4);
      lVar2 = lVar3 * 2;
      lVar3 = lVar3 * 4;
      __merge_sort_loop<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                (param_3,param_3 + lVar1,param_1,lVar2,param_4);
    } while (lVar3 < lVar1 >> 2);
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_adaptive<int*, long, int*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::MergeMeshGLP<double, unsigned long>(manifold::MeshGLP<double, unsigned
   long>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, long, long, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::MergeMeshGLP<double, unsigned
   long>(manifold::MeshGLP<double, unsigned long>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __merge_adaptive<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
               (int *param_1,int *param_2,int *param_3,long param_4,long param_5,int *param_6,
               long *param_7)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  void *__dest;
  int *piVar4;
  size_t sVar5;
  
  if (param_4 <= param_5) {
    sVar5 = (long)param_2 - (long)param_1;
    if ((long)sVar5 < 5) {
      if (sVar5 == 4) {
        *param_6 = *param_1;
      }
    }
    else {
      param_6 = (int *)memmove(param_6,param_1,sVar5);
    }
    piVar3 = (int *)((long)param_6 + sVar5);
    if ((param_2 != param_3) && (param_6 != piVar3)) {
      lVar2 = *param_7;
      piVar4 = param_1;
      while( true ) {
        iVar1 = *param_2;
        if (*(uint *)(lVar2 + (long)iVar1 * 4) < *(uint *)(lVar2 + (long)*param_6 * 4)) {
          param_2 = param_2 + 1;
          *piVar4 = iVar1;
        }
        else {
          *piVar4 = *param_6;
          param_6 = param_6 + 1;
        }
        param_1 = piVar4 + 1;
        if (param_3 == param_2) break;
        piVar4 = piVar4 + 1;
        if (piVar3 == param_6) {
          return;
        }
      }
    }
    if (piVar3 == param_6) {
      return;
    }
    sVar5 = (long)piVar3 - (long)param_6;
    if ((long)sVar5 < 5) {
      if (sVar5 != 4) {
        return;
      }
      *param_1 = *param_6;
      return;
    }
    memmove(param_1,param_6,sVar5);
    return;
  }
  sVar5 = (long)param_3 - (long)param_2;
  if ((long)sVar5 < 5) {
    if (sVar5 == 4) {
      iVar1 = *param_2;
      piVar3 = param_6 + 1;
      *param_6 = iVar1;
      if (param_2 == param_1) {
        param_3[-1] = iVar1;
        return;
      }
    }
    else {
      piVar3 = (int *)((long)param_6 + sVar5);
      if (param_2 == param_1) {
        return;
      }
    }
  }
  else {
    param_6 = (int *)memmove(param_6,param_2,sVar5);
    piVar3 = (int *)((long)param_6 + sVar5);
    if (param_2 == param_1) {
      __dest = (void *)((long)param_3 - sVar5);
      goto LAB_00101550;
    }
  }
  if (param_6 != piVar3) {
    lVar2 = *param_7;
    param_2 = param_2 + -1;
    piVar3 = piVar3 + -1;
    while( true ) {
      while( true ) {
        piVar4 = param_3 + -1;
        if (*(uint *)(lVar2 + (long)*piVar3 * 4) < *(uint *)(lVar2 + (long)*param_2 * 4)) break;
        param_3[-1] = *piVar3;
        if (param_6 == piVar3) {
          return;
        }
        piVar3 = piVar3 + -1;
        param_3 = piVar4;
      }
      param_3[-1] = *param_2;
      if (param_1 == param_2) break;
      param_2 = param_2 + -1;
      param_3 = piVar4;
    }
    sVar5 = (long)piVar3 + (4 - (long)param_6);
    if (4 < (long)sVar5) {
      __dest = (void *)((long)piVar4 - sVar5);
LAB_00101550:
      memmove(__dest,param_6,sVar5);
      return;
    }
    if (sVar5 == 4) {
      param_3[-2] = *param_6;
    }
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__stable_sort_adaptive<int*, int*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::MergeMeshGLP<double, unsigned long>(manifold::MeshGLP<double, unsigned
   long>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::MergeMeshGLP<double, unsigned
   long>(manifold::MeshGLP<double, unsigned long>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __stable_sort_adaptive<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
               (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  __merge_sort_with_buffer<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
            (param_1,param_2,param_4,param_5);
  __merge_sort_with_buffer<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
            (param_2,param_3,param_4,param_5);
  __merge_adaptive<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
            (param_1,param_2,param_3,param_2 - param_1 >> 2,param_3 - param_2 >> 2,param_4,param_5);
  return;
}



/* int* std::_V2::__rotate<int*>(int*, int*, int*, std::random_access_iterator_tag) [clone .isra.0]
    */

int * std::_V2::__rotate<int*>(int *param_1,int *param_2,int *param_3)

{
  size_t sVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 == param_2) {
    return param_3;
  }
  if (param_2 == param_3) {
    return param_1;
  }
  lVar3 = (long)param_3 - (long)param_1 >> 2;
  lVar10 = (long)param_2 - (long)param_1 >> 2;
  piVar5 = param_2;
  piVar7 = param_1;
  if (lVar10 == lVar3 - lVar10) {
    do {
      iVar2 = *param_1;
      piVar7 = param_1 + 1;
      *param_1 = *piVar5;
      *piVar5 = iVar2;
      piVar5 = piVar5 + 1;
      param_1 = piVar7;
    } while (param_2 != piVar7);
    return param_2;
  }
  while( true ) {
    lVar11 = lVar3 - lVar10;
    lVar9 = lVar3;
    lVar4 = lVar3;
    lVar3 = lVar11;
    if (lVar10 < lVar11) {
      do {
        lVar4 = lVar10;
        if (lVar4 == 1) {
          iVar2 = *piVar7;
          sVar1 = lVar9 * 4 - 4;
          if ((long)sVar1 < 5) {
            if (sVar1 == 4) {
              *piVar7 = piVar7[1];
            }
          }
          else {
            memmove(piVar7,piVar7 + 1,sVar1);
          }
          piVar7[lVar9 + -1] = iVar2;
          goto LAB_001017a0;
        }
        if (0 < lVar11) {
          lVar10 = 0;
          do {
            iVar2 = piVar7[lVar10];
            piVar7[lVar10] = piVar7[lVar4 + lVar10];
            piVar7[lVar4 + lVar10] = iVar2;
            lVar10 = lVar10 + 1;
          } while (lVar11 != lVar10);
          piVar7 = piVar7 + lVar11;
        }
        if (lVar9 % lVar4 == 0) goto LAB_001017a0;
        lVar10 = lVar4 - lVar9 % lVar4;
        lVar11 = lVar4 - lVar10;
        lVar9 = lVar4;
        lVar3 = lVar11;
      } while (lVar10 < lVar11);
    }
    piVar5 = piVar7 + lVar4;
    if (lVar3 == 1) break;
    piVar6 = piVar7 + lVar10;
    piVar8 = piVar6;
    if (0 < lVar10) {
      lVar9 = 0;
      do {
        iVar2 = piVar6[-1];
        piVar8 = piVar5 + -1;
        lVar9 = lVar9 + 1;
        piVar6 = piVar6 + -1;
        piVar5 = piVar5 + -1;
        *piVar6 = *piVar8;
        *piVar5 = iVar2;
        piVar8 = piVar7;
      } while (lVar10 != lVar9);
    }
    lVar10 = lVar4 % lVar3;
    piVar7 = piVar8;
    if (lVar10 == 0) {
LAB_001017a0:
      return (int *)((long)param_1 + ((long)param_3 - (long)param_2));
    }
  }
  sVar1 = lVar4 * 4 - 4;
  iVar2 = piVar7[lVar4 + -1];
  if ((long)sVar1 < 5) {
    if (sVar1 == 4) {
      piVar5[-1] = *piVar7;
    }
  }
  else {
    memmove(piVar7 + 1,piVar7,sVar1);
  }
  *piVar7 = iVar2;
  goto LAB_001017a0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_without_buffer<int*, long, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::MergeMeshGLP<double, unsigned long>(manifold::MeshGLP<double, unsigned
   long>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, long, long,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::MergeMeshGLP<double, unsigned
   long>(manifold::MeshGLP<double, unsigned long>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __merge_without_buffer<int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
               (int *param_1,int *param_2,undefined8 param_3,long param_4,long param_5,long *param_6
               )

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  
  if ((param_5 != 0) && (param_4 != 0)) {
    if (param_5 + param_4 != 2) {
      if (param_4 <= param_5) goto LAB_001018e7;
      do {
        lVar4 = param_4 / 2;
        piVar3 = param_1 + lVar4;
        piVar2 = __lower_bound<int*,int,__gnu_cxx::__ops::_Iter_comp_val<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
                           (param_2,param_3,*piVar3,param_6);
        lVar6 = (long)piVar2 - (long)param_2 >> 2;
        piVar5 = param_2;
        param_2 = piVar2;
        piVar2 = param_1;
        while( true ) {
          param_1 = _V2::__rotate<int*>(piVar3,piVar5,param_2);
          param_5 = param_5 - lVar6;
          __merge_without_buffer<int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
                    (piVar2,piVar3,param_1,lVar4,lVar6,param_6);
          param_4 = param_4 - lVar4;
          if (param_4 == 0) {
            return;
          }
          if (param_5 == 0) {
            return;
          }
          if (param_5 + param_4 == 2) goto LAB_00101936;
          if (param_5 < param_4) break;
LAB_001018e7:
          lVar6 = param_5 / 2;
          piVar3 = __upper_bound<int*,int,__gnu_cxx::__ops::_Val_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
                             (param_1,param_2,param_2[lVar6],param_6);
          lVar4 = (long)piVar3 - (long)param_1 >> 2;
          piVar5 = param_2;
          param_2 = param_2 + lVar6;
          piVar2 = param_1;
        }
      } while( true );
    }
LAB_00101936:
    iVar1 = *param_1;
    if (*(uint *)(*param_6 + (long)*param_2 * 4) < *(uint *)(*param_6 + (long)iVar1 * 4)) {
      *param_1 = *param_2;
      *param_2 = iVar1;
    }
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__inplace_stable_sort<int*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::MergeMeshGLP<double, unsigned long>(manifold::MeshGLP<double, unsigned
   long>&)::{lambda(int const&, int const&)#1}> >(int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::MergeMeshGLP<double, unsigned
   long>(manifold::MeshGLP<double, unsigned long>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __inplace_stable_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
               (long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  if (0x38 < param_2 - param_1) {
    lVar2 = (param_2 - param_1 >> 3) * 4;
    lVar1 = param_1 + lVar2;
    __inplace_stable_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
              (param_1,lVar1);
    __inplace_stable_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
              (lVar1,param_2,param_3);
    __merge_without_buffer<int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
              (param_1,lVar1,param_2,lVar2 >> 2,param_2 - lVar1 >> 2,param_3);
    return;
  }
  __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
            ();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_without_buffer<int*, long, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::MergeMeshGLP<float, unsigned int>(manifold::MeshGLP<float, unsigned
   int>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, long, long,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::MergeMeshGLP<float, unsigned
   int>(manifold::MeshGLP<float, unsigned int>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __merge_without_buffer<int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
               (int *param_1,int *param_2,undefined8 param_3,long param_4,long param_5,long *param_6
               )

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  
  if ((param_5 != 0) && (param_4 != 0)) {
    if (param_5 + param_4 != 2) {
      if (param_4 <= param_5) goto LAB_00101ae7;
      do {
        lVar4 = param_4 / 2;
        piVar3 = param_1 + lVar4;
        piVar2 = __lower_bound<int*,int,__gnu_cxx::__ops::_Iter_comp_val<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                           (param_2,param_3,*piVar3,param_6);
        lVar6 = (long)piVar2 - (long)param_2 >> 2;
        piVar5 = param_2;
        param_2 = piVar2;
        piVar2 = param_1;
        while( true ) {
          param_1 = _V2::__rotate<int*>(piVar3,piVar5,param_2);
          param_5 = param_5 - lVar6;
          __merge_without_buffer<int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                    (piVar2,piVar3,param_1,lVar4,lVar6,param_6);
          param_4 = param_4 - lVar4;
          if (param_4 == 0) {
            return;
          }
          if (param_5 == 0) {
            return;
          }
          if (param_5 + param_4 == 2) goto LAB_00101b36;
          if (param_5 < param_4) break;
LAB_00101ae7:
          lVar6 = param_5 / 2;
          piVar3 = __upper_bound<int*,int,__gnu_cxx::__ops::_Val_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                             (param_1,param_2,param_2[lVar6],param_6);
          lVar4 = (long)piVar3 - (long)param_1 >> 2;
          piVar5 = param_2;
          param_2 = param_2 + lVar6;
          piVar2 = param_1;
        }
      } while( true );
    }
LAB_00101b36:
    iVar1 = *param_1;
    if (*(uint *)(*param_6 + (long)*param_2 * 4) < *(uint *)(*param_6 + (long)iVar1 * 4)) {
      *param_1 = *param_2;
      *param_2 = iVar1;
    }
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__inplace_stable_sort<int*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::MergeMeshGLP<float, unsigned int>(manifold::MeshGLP<float, unsigned
   int>&)::{lambda(int const&, int const&)#1}> >(int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::MergeMeshGLP<float, unsigned
   int>(manifold::MeshGLP<float, unsigned int>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __inplace_stable_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
               (long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  if (0x38 < param_2 - param_1) {
    lVar2 = (param_2 - param_1 >> 3) * 4;
    lVar1 = param_1 + lVar2;
    __inplace_stable_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
              (param_1,lVar1);
    __inplace_stable_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
              (lVar1,param_2,param_3);
    __merge_without_buffer<int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
              (param_1,lVar1,param_2,lVar2 >> 2,param_2 - lVar1 >> 2,param_3);
    return;
  }
  __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
            ();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_without_buffer<int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,
   manifold::Vec<unsigned int>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, long,
   long, 
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,
   manifold::Vec<unsigned int>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __merge_without_buffer<int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
               (int *param_1,int *param_2,undefined8 param_3,long param_4,long param_5,long *param_6
               )

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  
  if ((param_5 != 0) && (param_4 != 0)) {
    if (param_5 + param_4 != 2) {
      if (param_4 <= param_5) goto LAB_00101ce7;
      do {
        lVar4 = param_4 / 2;
        piVar3 = param_1 + lVar4;
        piVar2 = __lower_bound<int*,int,__gnu_cxx::__ops::_Iter_comp_val<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                           (param_2,param_3,*piVar3,param_6);
        lVar6 = (long)piVar2 - (long)param_2 >> 2;
        piVar5 = param_2;
        param_2 = piVar2;
        piVar2 = param_1;
        while( true ) {
          param_1 = _V2::__rotate<int*>(piVar3,piVar5,param_2);
          param_5 = param_5 - lVar6;
          __merge_without_buffer<int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                    (piVar2,piVar3,param_1,lVar4,lVar6,param_6);
          param_4 = param_4 - lVar4;
          if (param_4 == 0) {
            return;
          }
          if (param_5 == 0) {
            return;
          }
          if (param_5 + param_4 == 2) goto LAB_00101d36;
          if (param_5 < param_4) break;
LAB_00101ce7:
          lVar6 = param_5 / 2;
          piVar3 = __upper_bound<int*,int,__gnu_cxx::__ops::_Val_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                             (param_1,param_2,param_2[lVar6],param_6);
          lVar4 = (long)piVar3 - (long)param_1 >> 2;
          piVar5 = param_2;
          param_2 = param_2 + lVar6;
          piVar2 = param_1;
        }
      } while( true );
    }
LAB_00101d36:
    iVar1 = *param_1;
    if (*(uint *)(*param_6 + (long)*param_2 * 4) < *(uint *)(*param_6 + (long)iVar1 * 4)) {
      *param_1 = *param_2;
      *param_2 = iVar1;
    }
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__inplace_stable_sort<int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,
   manifold::Vec<unsigned int>&)::{lambda(int const&, int const&)#1}> >(int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,
   manifold::Vec<unsigned int>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __inplace_stable_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
               (long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  if (0x38 < param_2 - param_1) {
    lVar2 = (param_2 - param_1 >> 3) * 4;
    lVar1 = param_1 + lVar2;
    __inplace_stable_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
              (param_1,lVar1);
    __inplace_stable_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
              (lVar1,param_2,param_3);
    __merge_without_buffer<int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
              (param_1,lVar1,param_2,lVar2 >> 2,param_2 - lVar1 >> 2,param_3);
    return;
  }
  __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
            ();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_without_buffer<int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::{lambda(int const&, int
   const&)#1}> >(int*, int*, int*, long, long,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::{lambda(int const&, int
   const&)#1}>) */

void std::
     __merge_without_buffer<int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
               (int *param_1,int *param_2,undefined8 param_3,long param_4,long param_5,long *param_6
               )

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  
  if ((param_5 != 0) && (param_4 != 0)) {
    if (param_5 + param_4 != 2) {
      if (param_4 <= param_5) goto LAB_00101ee7;
      do {
        lVar4 = param_4 / 2;
        piVar3 = param_1 + lVar4;
        piVar2 = __lower_bound<int*,int,__gnu_cxx::__ops::_Iter_comp_val<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
                           (param_2,param_3,*piVar3,param_6);
        lVar6 = (long)piVar2 - (long)param_2 >> 2;
        piVar5 = param_2;
        param_2 = piVar2;
        piVar2 = param_1;
        while( true ) {
          param_1 = _V2::__rotate<int*>(piVar3,piVar5,param_2);
          param_5 = param_5 - lVar6;
          __merge_without_buffer<int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
                    (piVar2,piVar3,param_1,lVar4,lVar6,param_6);
          param_4 = param_4 - lVar4;
          if (param_4 == 0) {
            return;
          }
          if (param_5 == 0) {
            return;
          }
          if (param_5 + param_4 == 2) goto LAB_00101f36;
          if (param_5 < param_4) break;
LAB_00101ee7:
          lVar6 = param_5 / 2;
          piVar3 = __upper_bound<int*,int,__gnu_cxx::__ops::_Val_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
                             (param_1,param_2,param_2[lVar6],param_6);
          lVar4 = (long)piVar3 - (long)param_1 >> 2;
          piVar5 = param_2;
          param_2 = param_2 + lVar6;
          piVar2 = param_1;
        }
      } while( true );
    }
LAB_00101f36:
    iVar1 = *param_1;
    if (*(uint *)(*param_6 + (long)*param_2 * 4) < *(uint *)(*param_6 + (long)iVar1 * 4)) {
      *param_1 = *param_2;
      *param_2 = iVar1;
    }
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__inplace_stable_sort<int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::{lambda(int const&, int
   const&)#1}> >(int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::{lambda(int const&, int
   const&)#1}>) */

void std::
     __inplace_stable_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
               (long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  if (0x38 < param_2 - param_1) {
    lVar2 = (param_2 - param_1 >> 3) * 4;
    lVar1 = param_1 + lVar2;
    __inplace_stable_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
              (param_1,lVar1);
    __inplace_stable_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
              (lVar1,param_2,param_3);
    __merge_without_buffer<int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
              (param_1,lVar1,param_2,lVar2 >> 2,param_2 - lVar1 >> 2,param_3);
    return;
  }
  __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
            ();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_adaptive<int*, long, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::{lambda(int const&, int
   const&)#1}> >(int*, int*, int*, long, long, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::{lambda(int const&, int
   const&)#1}>) */

void std::
     __merge_adaptive<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
               (int *param_1,int *param_2,int *param_3,long param_4,long param_5,int *param_6,
               long *param_7)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  void *__dest;
  int *piVar4;
  size_t sVar5;
  
  if (param_4 <= param_5) {
    sVar5 = (long)param_2 - (long)param_1;
    if ((long)sVar5 < 5) {
      if (sVar5 == 4) {
        *param_6 = *param_1;
      }
    }
    else {
      param_6 = (int *)memmove(param_6,param_1,sVar5);
    }
    piVar3 = (int *)((long)param_6 + sVar5);
    if ((param_2 != param_3) && (param_6 != piVar3)) {
      lVar2 = *param_7;
      piVar4 = param_1;
      while( true ) {
        iVar1 = *param_2;
        if (*(uint *)(lVar2 + (long)iVar1 * 4) < *(uint *)(lVar2 + (long)*param_6 * 4)) {
          param_2 = param_2 + 1;
          *piVar4 = iVar1;
        }
        else {
          *piVar4 = *param_6;
          param_6 = param_6 + 1;
        }
        param_1 = piVar4 + 1;
        if (param_3 == param_2) break;
        piVar4 = piVar4 + 1;
        if (piVar3 == param_6) {
          return;
        }
      }
    }
    if (piVar3 == param_6) {
      return;
    }
    sVar5 = (long)piVar3 - (long)param_6;
    if ((long)sVar5 < 5) {
      if (sVar5 != 4) {
        return;
      }
      *param_1 = *param_6;
      return;
    }
    memmove(param_1,param_6,sVar5);
    return;
  }
  sVar5 = (long)param_3 - (long)param_2;
  if ((long)sVar5 < 5) {
    if (sVar5 == 4) {
      iVar1 = *param_2;
      piVar3 = param_6 + 1;
      *param_6 = iVar1;
      if (param_2 == param_1) {
        param_3[-1] = iVar1;
        return;
      }
    }
    else {
      piVar3 = (int *)((long)param_6 + sVar5);
      if (param_2 == param_1) {
        return;
      }
    }
  }
  else {
    param_6 = (int *)memmove(param_6,param_2,sVar5);
    piVar3 = (int *)((long)param_6 + sVar5);
    if (param_2 == param_1) {
      __dest = (void *)((long)param_3 - sVar5);
      goto LAB_00102170;
    }
  }
  if (param_6 != piVar3) {
    lVar2 = *param_7;
    param_2 = param_2 + -1;
    piVar3 = piVar3 + -1;
    while( true ) {
      while( true ) {
        piVar4 = param_3 + -1;
        if (*(uint *)(lVar2 + (long)*piVar3 * 4) < *(uint *)(lVar2 + (long)*param_2 * 4)) break;
        param_3[-1] = *piVar3;
        if (param_6 == piVar3) {
          return;
        }
        piVar3 = piVar3 + -1;
        param_3 = piVar4;
      }
      param_3[-1] = *param_2;
      if (param_1 == param_2) break;
      param_2 = param_2 + -1;
      param_3 = piVar4;
    }
    sVar5 = (long)piVar3 + (4 - (long)param_6);
    if (4 < (long)sVar5) {
      __dest = (void *)((long)piVar4 - sVar5);
LAB_00102170:
      memmove(__dest,param_6,sVar5);
      return;
    }
    if (sVar5 == 4) {
      param_3[-2] = *param_6;
    }
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__stable_sort_adaptive<int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::{lambda(int const&, int
   const&)#1}> >(int*, int*, int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::{lambda(int const&, int
   const&)#1}>) */

void std::
     __stable_sort_adaptive<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
               (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  __merge_sort_with_buffer<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
            (param_1,param_2,param_4,param_5);
  __merge_sort_with_buffer<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
            (param_2,param_3,param_4,param_5);
  __merge_adaptive<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
            (param_1,param_2,param_3,param_2 - param_1 >> 2,param_3 - param_2 >> 2,param_4,param_5);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_adaptive<int*, long, int*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::MergeMeshGLP<float, unsigned int>(manifold::MeshGLP<float, unsigned
   int>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, long, long, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::MergeMeshGLP<float, unsigned
   int>(manifold::MeshGLP<float, unsigned int>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __merge_adaptive<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
               (int *param_1,int *param_2,int *param_3,long param_4,long param_5,int *param_6,
               long *param_7)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  void *__dest;
  int *piVar4;
  size_t sVar5;
  
  if (param_4 <= param_5) {
    sVar5 = (long)param_2 - (long)param_1;
    if ((long)sVar5 < 5) {
      if (sVar5 == 4) {
        *param_6 = *param_1;
      }
    }
    else {
      param_6 = (int *)memmove(param_6,param_1,sVar5);
    }
    piVar3 = (int *)((long)param_6 + sVar5);
    if ((param_2 != param_3) && (param_6 != piVar3)) {
      lVar2 = *param_7;
      piVar4 = param_1;
      while( true ) {
        iVar1 = *param_2;
        if (*(uint *)(lVar2 + (long)iVar1 * 4) < *(uint *)(lVar2 + (long)*param_6 * 4)) {
          param_2 = param_2 + 1;
          *piVar4 = iVar1;
        }
        else {
          *piVar4 = *param_6;
          param_6 = param_6 + 1;
        }
        param_1 = piVar4 + 1;
        if (param_3 == param_2) break;
        piVar4 = piVar4 + 1;
        if (piVar3 == param_6) {
          return;
        }
      }
    }
    if (piVar3 == param_6) {
      return;
    }
    sVar5 = (long)piVar3 - (long)param_6;
    if ((long)sVar5 < 5) {
      if (sVar5 != 4) {
        return;
      }
      *param_1 = *param_6;
      return;
    }
    memmove(param_1,param_6,sVar5);
    return;
  }
  sVar5 = (long)param_3 - (long)param_2;
  if ((long)sVar5 < 5) {
    if (sVar5 == 4) {
      iVar1 = *param_2;
      piVar3 = param_6 + 1;
      *param_6 = iVar1;
      if (param_2 == param_1) {
        param_3[-1] = iVar1;
        return;
      }
    }
    else {
      piVar3 = (int *)((long)param_6 + sVar5);
      if (param_2 == param_1) {
        return;
      }
    }
  }
  else {
    param_6 = (int *)memmove(param_6,param_2,sVar5);
    piVar3 = (int *)((long)param_6 + sVar5);
    if (param_2 == param_1) {
      __dest = (void *)((long)param_3 - sVar5);
      goto LAB_001023b0;
    }
  }
  if (param_6 != piVar3) {
    lVar2 = *param_7;
    param_2 = param_2 + -1;
    piVar3 = piVar3 + -1;
    while( true ) {
      while( true ) {
        piVar4 = param_3 + -1;
        if (*(uint *)(lVar2 + (long)*piVar3 * 4) < *(uint *)(lVar2 + (long)*param_2 * 4)) break;
        param_3[-1] = *piVar3;
        if (param_6 == piVar3) {
          return;
        }
        piVar3 = piVar3 + -1;
        param_3 = piVar4;
      }
      param_3[-1] = *param_2;
      if (param_1 == param_2) break;
      param_2 = param_2 + -1;
      param_3 = piVar4;
    }
    sVar5 = (long)piVar3 + (4 - (long)param_6);
    if (4 < (long)sVar5) {
      __dest = (void *)((long)piVar4 - sVar5);
LAB_001023b0:
      memmove(__dest,param_6,sVar5);
      return;
    }
    if (sVar5 == 4) {
      param_3[-2] = *param_6;
    }
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__stable_sort_adaptive<int*, int*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::MergeMeshGLP<float, unsigned int>(manifold::MeshGLP<float, unsigned
   int>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::MergeMeshGLP<float, unsigned
   int>(manifold::MeshGLP<float, unsigned int>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __stable_sort_adaptive<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
               (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  __merge_sort_with_buffer<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
            (param_1,param_2,param_4,param_5);
  __merge_sort_with_buffer<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
            (param_2,param_3,param_4,param_5);
  __merge_adaptive<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
            (param_1,param_2,param_3,param_2 - param_1 >> 2,param_3 - param_2 >> 2,param_4,param_5);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_adaptive<int*, long, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,
   manifold::Vec<unsigned int>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, long,
   long, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,
   manifold::Vec<unsigned int>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __merge_adaptive<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
               (int *param_1,int *param_2,int *param_3,long param_4,long param_5,int *param_6,
               long *param_7)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  void *__dest;
  int *piVar4;
  size_t sVar5;
  
  if (param_4 <= param_5) {
    sVar5 = (long)param_2 - (long)param_1;
    if ((long)sVar5 < 5) {
      if (sVar5 == 4) {
        *param_6 = *param_1;
      }
    }
    else {
      param_6 = (int *)memmove(param_6,param_1,sVar5);
    }
    piVar3 = (int *)((long)param_6 + sVar5);
    if ((param_2 != param_3) && (param_6 != piVar3)) {
      lVar2 = *param_7;
      piVar4 = param_1;
      while( true ) {
        iVar1 = *param_2;
        if (*(uint *)(lVar2 + (long)iVar1 * 4) < *(uint *)(lVar2 + (long)*param_6 * 4)) {
          param_2 = param_2 + 1;
          *piVar4 = iVar1;
        }
        else {
          *piVar4 = *param_6;
          param_6 = param_6 + 1;
        }
        param_1 = piVar4 + 1;
        if (param_3 == param_2) break;
        piVar4 = piVar4 + 1;
        if (piVar3 == param_6) {
          return;
        }
      }
    }
    if (piVar3 == param_6) {
      return;
    }
    sVar5 = (long)piVar3 - (long)param_6;
    if ((long)sVar5 < 5) {
      if (sVar5 != 4) {
        return;
      }
      *param_1 = *param_6;
      return;
    }
    memmove(param_1,param_6,sVar5);
    return;
  }
  sVar5 = (long)param_3 - (long)param_2;
  if ((long)sVar5 < 5) {
    if (sVar5 == 4) {
      iVar1 = *param_2;
      piVar3 = param_6 + 1;
      *param_6 = iVar1;
      if (param_2 == param_1) {
        param_3[-1] = iVar1;
        return;
      }
    }
    else {
      piVar3 = (int *)((long)param_6 + sVar5);
      if (param_2 == param_1) {
        return;
      }
    }
  }
  else {
    param_6 = (int *)memmove(param_6,param_2,sVar5);
    piVar3 = (int *)((long)param_6 + sVar5);
    if (param_2 == param_1) {
      __dest = (void *)((long)param_3 - sVar5);
      goto LAB_001025f0;
    }
  }
  if (param_6 != piVar3) {
    lVar2 = *param_7;
    param_2 = param_2 + -1;
    piVar3 = piVar3 + -1;
    while( true ) {
      while( true ) {
        piVar4 = param_3 + -1;
        if (*(uint *)(lVar2 + (long)*piVar3 * 4) < *(uint *)(lVar2 + (long)*param_2 * 4)) break;
        param_3[-1] = *piVar3;
        if (param_6 == piVar3) {
          return;
        }
        piVar3 = piVar3 + -1;
        param_3 = piVar4;
      }
      param_3[-1] = *param_2;
      if (param_1 == param_2) break;
      param_2 = param_2 + -1;
      param_3 = piVar4;
    }
    sVar5 = (long)piVar3 + (4 - (long)param_6);
    if (4 < (long)sVar5) {
      __dest = (void *)((long)piVar4 - sVar5);
LAB_001025f0:
      memmove(__dest,param_6,sVar5);
      return;
    }
    if (sVar5 == 4) {
      param_3[-2] = *param_6;
    }
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__stable_sort_adaptive<int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,
   manifold::Vec<unsigned int>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,
   manifold::Vec<unsigned int>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __stable_sort_adaptive<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
               (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  __merge_sort_with_buffer<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
            (param_1,param_2,param_4,param_5);
  __merge_sort_with_buffer<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
            (param_2,param_3,param_4,param_5);
  __merge_adaptive<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
            (param_1,param_2,param_3,param_2 - param_1 >> 2,param_3 - param_2 >> 2,param_4,param_5);
  return;
}



/* manifold::Manifold::Impl::ReindexVerts(manifold::Vec<int> const&, unsigned long) */

void __thiscall manifold::Manifold::Impl::ReindexVerts(Impl *this,Vec *param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  void *__ptr;
  
  __ptr = (void *)0x0;
  if (param_2 != 0) {
    __ptr = malloc(param_2 * 4);
  }
  iVar2 = *(int *)(this + 0x50);
  lVar3 = *(long *)param_1;
  if ((long)iVar2 != 0) {
    lVar4 = 0;
    do {
      *(int *)((long)__ptr + (long)*(int *)(lVar3 + lVar4 * 4) * 4) = (int)lVar4;
      lVar4 = lVar4 + 1;
    } while (iVar2 != lVar4);
  }
  piVar5 = *(int **)(this + 0x60);
  piVar1 = piVar5 + *(long *)(this + 0x68) * 3;
  for (; piVar5 != piVar1; piVar5 = piVar5 + 3) {
    if (-1 < *piVar5) {
      *(ulong *)piVar5 =
           CONCAT44(*(undefined4 *)((long)__ptr + (long)piVar5[1] * 4),
                    *(undefined4 *)((long)__ptr + (long)*piVar5 * 4));
    }
  }
  if (__ptr == (void *)0x0) {
    return;
  }
  free(__ptr);
  return;
}



/* manifold::Manifold::Impl::CompactProps() */

void __thiscall manifold::Manifold::Impl::CompactProps(Impl *this)

{
  size_t __size;
  int iVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulong uVar5;
  int *__ptr;
  long lVar6;
  int *piVar7;
  void *__ptr_00;
  undefined8 *puVar8;
  undefined8 *__dest;
  ulong uVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long in_FS_OFFSET;
  ulong local_80;
  size_t local_78;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0xc4) != 0) {
    uVar16 = *(ulong *)(this + 0xd0);
    uVar15 = (ulong)*(int *)(this + 0xc4);
    __ptr = (int *)0x0;
    uVar5 = uVar16 / uVar15;
    piVar14 = (int *)(uVar5 * 4);
    piVar13 = piVar14;
    if (uVar15 <= uVar16) {
      __ptr = (int *)calloc((size_t)piVar14,1);
      piVar13 = __ptr + uVar5;
    }
    uVar4 = _LC0;
    piVar12 = *(int **)(this + 0x128);
    piVar7 = piVar12 + *(long *)(this + 0x130) * 3;
    if (piVar12 != piVar7) {
      do {
        iVar10 = *piVar12;
        iVar17 = piVar12[1];
        local_50 = uVar4;
        local_48 = 2;
        iVar1 = piVar12[2];
        piVar11 = (int *)&local_50;
        do {
          lVar6 = (long)iVar10;
          if ((*piVar11 != 0) && (lVar6 = (long)iVar1, *piVar11 == 1)) {
            lVar6 = (long)iVar17;
          }
          __ptr[lVar6] = 1;
          piVar11 = piVar11 + 1;
        } while (&local_44 != piVar11);
        piVar12 = piVar12 + 3;
      } while (piVar7 != piVar12);
    }
    if (uVar5 == 0xffffffffffffffff) {
      __ptr_00 = (void *)0x0;
    }
    else {
      __ptr_00 = calloc((size_t)(piVar14 + 1),1);
    }
    if (__ptr != piVar13) {
      iVar10 = *__ptr;
      *(int *)((long)__ptr_00 + 4) = iVar10;
      if (piVar13 != __ptr + 1) {
        lVar6 = 8;
        do {
          iVar10 = iVar10 + *(int *)((long)__ptr + lVar6 + -4);
          *(int *)((long)__ptr_00 + lVar6) = iVar10;
          lVar6 = lVar6 + 4;
        } while ((long)piVar13 + (4 - (long)__ptr) != lVar6);
      }
    }
    uVar2 = *(ulong *)(this + 0xd0);
    puVar19 = *(undefined8 **)(this + 200);
    uVar9 = uVar2;
    if (uVar2 == 0) {
      iVar10 = *(int *)(this + 0xc4);
      uVar18 = (ulong)(*(int *)((long)__ptr_00 + uVar5 * 4) * iVar10);
      local_80 = uVar18 * 2;
      if (*(ulong *)(this + 0xd8) < uVar18) {
        local_78 = uVar18 * 8;
        puVar8 = (undefined8 *)malloc(local_78);
        if (puVar19 != (undefined8 *)0x0) {
          __dest = (undefined8 *)0x0;
          goto LAB_00102c9c;
        }
        *(undefined8 **)(this + 200) = puVar8;
        __dest = (undefined8 *)0x0;
        uVar9 = 0;
        *(ulong *)(this + 0xd8) = uVar18;
LAB_00102ab0:
        if (puVar8 + uVar9 != (undefined8 *)((long)puVar8 + local_78)) {
          memset(puVar8 + uVar9,0,local_78 + uVar9 * -8);
        }
LAB_00102adc:
        *(ulong *)(this + 0xd0) = uVar18;
        if (local_80 < uVar2) {
LAB_00102aee:
          puVar8 = (undefined8 *)malloc(local_78);
          puVar19 = *(undefined8 **)(this + 200);
          if ((long)local_78 < 9) {
            if (local_78 != 8) goto LAB_00102c32;
            *puVar8 = *puVar19;
          }
          else {
            memmove(puVar8,puVar19,local_78);
          }
          goto LAB_00102b2b;
        }
      }
      else {
        if (uVar18 != 0) {
          __dest = (undefined8 *)0x0;
LAB_00102aa0:
          local_78 = uVar18 * 8;
          puVar8 = puVar19;
          goto LAB_00102ab0;
        }
        *(undefined8 *)(this + 0xd0) = 0;
        __dest = (undefined8 *)0x0;
      }
    }
    else {
      __size = uVar2 * 8;
      __dest = (undefined8 *)malloc(__size);
      if ((long)__size < 9) {
        if (__size == 8) {
          *__dest = *puVar19;
        }
      }
      else {
        memcpy(__dest,puVar19,__size);
      }
      iVar10 = *(int *)(this + 0xc4);
      uVar18 = (ulong)(*(int *)((long)__ptr_00 + uVar5 * 4) * iVar10);
      local_80 = uVar18 * 2;
      if (*(ulong *)(this + 0xd8) < uVar18) {
        local_78 = uVar18 * 8;
        puVar8 = (undefined8 *)malloc(local_78);
        if ((long)__size < 9) {
          if (__size == 8) {
            *puVar8 = *puVar19;
            goto LAB_00102c9c;
          }
          if (puVar19 != (undefined8 *)0x0) goto LAB_00102c9c;
        }
        else {
          puVar8 = (undefined8 *)memmove(puVar8,puVar19,__size);
LAB_00102c9c:
          free(puVar19);
          uVar9 = *(ulong *)(this + 0xd0);
        }
        *(undefined8 **)(this + 200) = puVar8;
        *(ulong *)(this + 0xd8) = uVar18;
        if (uVar9 < uVar18) goto LAB_00102ab0;
        goto LAB_00102adc;
      }
      if (uVar2 < uVar18) goto LAB_00102aa0;
      *(ulong *)(this + 0xd0) = uVar18;
      if (uVar2 <= local_80) goto LAB_0010292a;
      if (uVar18 != 0) {
        local_78 = uVar18 * 8;
        goto LAB_00102aee;
      }
      puVar19 = *(undefined8 **)(this + 200);
      puVar8 = (undefined8 *)0x0;
LAB_00102c32:
      if (puVar19 != (undefined8 *)0x0) {
LAB_00102b2b:
        free(puVar19);
      }
      *(undefined8 **)(this + 200) = puVar8;
      *(undefined8 *)(this + 0xd8) = *(undefined8 *)(this + 0xd0);
    }
LAB_0010292a:
    if (uVar15 <= uVar16) {
      iVar17 = 0;
      uVar16 = 0;
      do {
        if ((__ptr[(int)uVar16] != 0) && (0 < iVar10)) {
          memcpy((void *)(*(long *)(this + 200) +
                         (long)(*(int *)((long)__ptr_00 + (long)(int)uVar16 * 4) * iVar10) * 8),
                 __dest + iVar17,(ulong)(iVar10 - 1) * 8 + 8);
        }
        uVar16 = uVar16 + 1;
        iVar17 = iVar17 + iVar10;
      } while (uVar5 != uVar16);
    }
    uVar4 = _LC0;
    piVar14 = *(int **)(this + 0x128);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulong *)(this + 0x68);
    piVar13 = piVar14 + (SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar3,8) & 0xfffffffffffffffe) +
                        *(ulong *)(this + 0x68) / 3;
    if (piVar14 != piVar13) {
      do {
        local_50 = uVar4;
        local_48 = 2;
        piVar7 = (int *)&local_50;
        do {
          if (*piVar7 == 0) {
            iVar10 = *(int *)((long)__ptr_00 + (long)*piVar14 * 4);
            piVar12 = piVar14;
          }
          else if (*piVar7 == 1) {
            iVar10 = *(int *)((long)__ptr_00 + (long)piVar14[1] * 4);
            piVar12 = piVar14 + 1;
          }
          else {
            iVar10 = *(int *)((long)__ptr_00 + (long)piVar14[2] * 4);
            piVar12 = piVar14 + 2;
          }
          piVar7 = piVar7 + 1;
          *piVar12 = iVar10;
        } while (piVar7 != &local_44);
        piVar14 = piVar14 + 3;
      } while (piVar13 != piVar14);
    }
    if (__dest != (undefined8 *)0x0) {
      free(__dest);
    }
    if (__ptr_00 != (void *)0x0) {
      free(__ptr_00);
    }
    if (__ptr != (int *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        free(__ptr);
        return;
      }
      goto LAB_00102d91;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102d91:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Impl::GatherFaces(manifold::Manifold::Impl const&, manifold::Vec<int> const&)
    */

void __thiscall manifold::Manifold::Impl::GatherFaces(Impl *this,Impl *param_1,Vec *param_2)

{
  _Rb_tree_node_base *p_Var1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  _Rb_tree_node_base *p_Var7;
  _Rb_tree_node_base *p_Var8;
  _Rb_tree_node_base *p_Var9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined1 (*pauVar12) [16];
  void *__ptr;
  int *piVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int *piVar16;
  long lVar17;
  ulong uVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  size_t sVar21;
  ulong uVar22;
  _Rb_tree_node_base *p_Var23;
  long in_FS_OFFSET;
  bool bVar24;
  byte bVar25;
  undefined1 auVar26 [16];
  undefined8 local_a8 [2];
  undefined8 *local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  void *local_58;
  long local_40;
  
  bVar25 = 0;
  uVar4 = *(ulong *)(param_2 + 8);
  uVar22 = *(ulong *)(this + 0x118);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = uVar4 * 2;
  uVar18 = uVar22;
  if (*(ulong *)(this + 0x120) < uVar4) {
    puVar15 = (undefined8 *)malloc(uVar4 << 4);
    puVar14 = *(undefined8 **)(this + 0x110);
    if (uVar22 == 0) {
      if (puVar14 == (undefined8 *)0x0) {
        *(undefined8 **)(this + 0x110) = puVar15;
        uVar18 = 0;
        *(ulong *)(this + 0x120) = uVar4;
        goto LAB_00102e12;
      }
LAB_0010369c:
      free(puVar14);
      uVar18 = *(ulong *)(this + 0x118);
    }
    else {
      sVar21 = uVar22 * 0x10;
      if (0x10 < (long)sVar21) {
        memmove(puVar15,puVar14,sVar21);
        goto LAB_0010369c;
      }
      if (sVar21 == 0x10) {
        uVar5 = puVar14[1];
        *puVar15 = *puVar14;
        puVar15[1] = uVar5;
        goto LAB_0010369c;
      }
      if (puVar14 != (undefined8 *)0x0) goto LAB_0010369c;
    }
    *(undefined8 **)(this + 0x110) = puVar15;
    *(ulong *)(this + 0x120) = uVar4;
    if (uVar18 < uVar4) goto LAB_00102e12;
LAB_001036e0:
    *(ulong *)(this + 0x118) = uVar4;
    if (uVar10 < uVar22) {
LAB_001036f2:
      sVar21 = uVar4 << 4;
      puVar15 = (undefined8 *)malloc(sVar21);
      puVar14 = *(undefined8 **)(this + 0x110);
      if ((long)sVar21 < 0x11) {
        if (sVar21 != 0x10) goto LAB_001031c7;
        uVar5 = puVar14[1];
        *puVar15 = *puVar14;
        puVar15[1] = uVar5;
      }
      else {
        memmove(puVar15,puVar14,sVar21);
      }
LAB_00103726:
      free(puVar14);
LAB_001031d0:
      *(undefined8 **)(this + 0x110) = puVar15;
      *(undefined8 *)(this + 0x120) = *(undefined8 *)(this + 0x118);
    }
    uVar18 = *(ulong *)(param_2 + 8);
  }
  else {
    if (uVar22 < uVar4) {
      puVar15 = *(undefined8 **)(this + 0x110);
LAB_00102e12:
      puVar14 = puVar15 + uVar18 * 2;
      if (puVar15 + uVar4 * 2 == puVar14) goto LAB_001036e0;
      uVar18 = 0;
      do {
        uVar6 = uVar18 + 1;
        *(undefined1 (*) [16])(puVar14 + uVar18 * 2) = (undefined1  [16])0x0;
        uVar18 = uVar6;
      } while (uVar6 < ((ulong)((long)(puVar15 + uVar4 * 2) + (-0x10 - (long)puVar14)) >> 4) + 1);
      *(ulong *)(this + 0x118) = uVar4;
      if (uVar10 < uVar22) goto LAB_001036f2;
      uVar18 = *(ulong *)(param_2 + 8);
    }
    else {
      *(ulong *)(this + 0x118) = uVar4;
      uVar18 = uVar4;
      if (uVar10 < uVar22) {
        if (uVar4 != 0) goto LAB_001036f2;
        puVar14 = *(undefined8 **)(this + 0x110);
        puVar15 = (undefined8 *)0x0;
LAB_001031c7:
        if (puVar14 != (undefined8 *)0x0) goto LAB_00103726;
        goto LAB_001031d0;
      }
    }
    puVar15 = *(undefined8 **)(this + 0x110);
  }
  lVar17 = *(long *)(param_1 + 0x110);
  piVar13 = *(int **)param_2;
  piVar16 = piVar13 + uVar18;
  if ((uVar18 & 0x3fffffffffffffff) != 0) {
    do {
      iVar2 = *piVar13;
      piVar13 = piVar13 + 1;
      puVar14 = (undefined8 *)(lVar17 + (long)iVar2 * 0x10);
      uVar5 = puVar14[1];
      *puVar15 = *puVar14;
      puVar15[1] = uVar5;
      puVar15 = puVar15 + 2;
    } while (piVar13 != piVar16);
  }
  p_Var1 = (_Rb_tree_node_base *)(this + 0xe8);
  for (p_Var9 = *(_Rb_tree_node_base **)(param_1 + 0xf8);
      p_Var9 != (_Rb_tree_node_base *)(param_1 + 0xe8);
      p_Var9 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var9)) {
    p_Var23 = p_Var1;
    if (*(_Rb_tree_node_base **)(this + 0xf0) == (_Rb_tree_node_base *)0x0) {
LAB_00102f40:
      p_Var7 = (_Rb_tree_node_base *)operator_new(0x98);
      uVar3 = *(uint *)(p_Var9 + 0x20);
      *(uint *)(p_Var7 + 0x20) = uVar3;
      p_Var8 = p_Var7 + 0x28;
      for (lVar17 = 0xe; lVar17 != 0; lVar17 = lVar17 + -1) {
        *(undefined8 *)p_Var8 = 0;
        p_Var8 = p_Var8 + (ulong)bVar25 * -0x10 + 8;
      }
      *(undefined4 *)(p_Var7 + 0x28) = 0xffffffff;
      *(undefined2 *)(p_Var7 + 0x36) = 0x3ff0;
      *(undefined2 *)(p_Var7 + 0x56) = 0x3ff0;
      *(undefined2 *)(p_Var7 + 0x76) = 0x3ff0;
      if (p_Var1 == p_Var23) {
        if ((*(long *)(this + 0x108) == 0) ||
           (p_Var8 = *(_Rb_tree_node_base **)(this + 0x100), (int)uVar3 <= *(int *)(p_Var8 + 0x20)))
        {
LAB_00103210:
          auVar26 = std::
                    _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
                    ::_M_get_insert_unique_pos
                              ((_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
                                *)(this + 0xe0),(int *)(ulong)uVar3);
          p_Var8 = auVar26._8_8_;
          p_Var23 = auVar26._0_8_;
          if (p_Var8 == (_Rb_tree_node_base *)0x0) {
LAB_0010322a:
            operator_delete(p_Var7,0x98);
            goto LAB_00102fe6;
          }
          bVar24 = p_Var23 != (_Rb_tree_node_base *)0x0;
        }
        else {
LAB_00103275:
          bVar24 = false;
        }
LAB_00103277:
        p_Var23 = p_Var8;
        if ((p_Var1 == p_Var8) || (bVar24)) goto LAB_00102fc8;
LAB_00103288:
        bVar24 = (int)uVar3 < *(int *)(p_Var23 + 0x20);
      }
      else {
        if (*(int *)(p_Var23 + 0x20) <= (int)uVar3) {
          if ((int)uVar3 <= *(int *)(p_Var23 + 0x20)) goto LAB_0010322a;
          if (*(_Rb_tree_node_base **)(this + 0x100) != p_Var23) {
            p_Var8 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var23);
            if (*(int *)(p_Var8 + 0x20) <= (int)uVar3) goto LAB_00103210;
            if (*(long *)(p_Var23 + 0x18) != 0) {
              bVar24 = true;
              goto LAB_00103277;
            }
          }
          goto LAB_00103288;
        }
        if (*(_Rb_tree_node_base **)(this + 0xf8) != p_Var23) {
          p_Var8 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var23);
          if ((int)uVar3 <= *(int *)(p_Var8 + 0x20)) goto LAB_00103210;
          if (*(long *)(p_Var8 + 0x18) == 0) goto LAB_00103275;
        }
LAB_00102fc8:
        bVar24 = true;
      }
      std::_Rb_tree_insert_and_rebalance(bVar24,p_Var7,p_Var23,p_Var1);
      *(long *)(this + 0x108) = *(long *)(this + 0x108) + 1;
      p_Var23 = p_Var7;
    }
    else {
      p_Var8 = *(_Rb_tree_node_base **)(this + 0xf0);
      do {
        while( true ) {
          p_Var7 = p_Var8;
          if (*(int *)(p_Var7 + 0x20) < *(int *)(p_Var9 + 0x20)) break;
          p_Var8 = *(_Rb_tree_node_base **)(p_Var7 + 0x10);
          p_Var23 = p_Var7;
          if (*(_Rb_tree_node_base **)(p_Var7 + 0x10) == (_Rb_tree_node_base *)0x0)
          goto LAB_00102f30;
        }
        p_Var8 = *(_Rb_tree_node_base **)(p_Var7 + 0x18);
      } while (*(_Rb_tree_node_base **)(p_Var7 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_00102f30:
      if ((p_Var1 == p_Var23) || (*(int *)(p_Var9 + 0x20) < *(int *)(p_Var23 + 0x20)))
      goto LAB_00102f40;
    }
LAB_00102fe6:
    uVar5 = *(undefined8 *)(p_Var9 + 0x30);
    *(undefined8 *)(p_Var23 + 0x28) = *(undefined8 *)(p_Var9 + 0x28);
    *(undefined8 *)(p_Var23 + 0x30) = uVar5;
    uVar5 = *(undefined8 *)(p_Var9 + 0x40);
    *(undefined8 *)(p_Var23 + 0x38) = *(undefined8 *)(p_Var9 + 0x38);
    *(undefined8 *)(p_Var23 + 0x40) = uVar5;
    uVar5 = *(undefined8 *)(p_Var9 + 0x50);
    *(undefined8 *)(p_Var23 + 0x48) = *(undefined8 *)(p_Var9 + 0x48);
    *(undefined8 *)(p_Var23 + 0x50) = uVar5;
    uVar5 = *(undefined8 *)(p_Var9 + 0x60);
    *(undefined8 *)(p_Var23 + 0x58) = *(undefined8 *)(p_Var9 + 0x58);
    *(undefined8 *)(p_Var23 + 0x60) = uVar5;
    uVar5 = *(undefined8 *)(p_Var9 + 0x70);
    *(undefined8 *)(p_Var23 + 0x68) = *(undefined8 *)(p_Var9 + 0x68);
    *(undefined8 *)(p_Var23 + 0x70) = uVar5;
    uVar5 = *(undefined8 *)(p_Var9 + 0x80);
    *(undefined8 *)(p_Var23 + 0x78) = *(undefined8 *)(p_Var9 + 0x78);
    *(undefined8 *)(p_Var23 + 0x80) = uVar5;
    uVar5 = *(undefined8 *)(p_Var9 + 0x89);
    *(undefined8 *)(p_Var23 + 0x81) = *(undefined8 *)(p_Var9 + 0x81);
    *(undefined8 *)(p_Var23 + 0x89) = uVar5;
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    uVar22 = *(ulong *)(this + 0x130);
    uVar18 = uVar22;
    if (*(ulong *)(this + 0x138) < uVar4) {
      puVar14 = (undefined8 *)malloc(uVar4 * 0xc);
      puVar15 = *(undefined8 **)(this + 0x128);
      if (uVar22 == 0) {
        if (puVar15 == (undefined8 *)0x0) {
          *(undefined8 **)(this + 0x128) = puVar14;
          uVar18 = 0;
          *(ulong *)(this + 0x138) = uVar4;
          goto LAB_001039bc;
        }
LAB_00103b8f:
        free(puVar15);
        uVar18 = *(ulong *)(this + 0x130);
      }
      else {
        sVar21 = uVar22 * 0xc;
        if (0xc < (long)sVar21) {
          puVar14 = (undefined8 *)memmove(puVar14,puVar15,sVar21);
          goto LAB_00103b8f;
        }
        if (sVar21 == 0xc) {
          *puVar14 = *puVar15;
          *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar15 + 1);
          goto LAB_00103b8f;
        }
        if (puVar15 != (undefined8 *)0x0) goto LAB_00103b8f;
      }
      *(undefined8 **)(this + 0x128) = puVar14;
      *(ulong *)(this + 0x138) = uVar4;
      if (uVar18 < uVar4) goto LAB_001039bc;
LAB_00103bc9:
      *(ulong *)(this + 0x130) = uVar4;
      if (uVar10 < uVar22) {
LAB_00103bdb:
        sVar21 = uVar4 * 0xc;
        puVar14 = (undefined8 *)malloc(sVar21);
        puVar15 = *(undefined8 **)(this + 0x128);
        if ((long)sVar21 < 0xd) {
          if (sVar21 != 0xc) goto LAB_001034e6;
          *puVar14 = *puVar15;
          *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar15 + 1);
        }
        else {
          puVar14 = (undefined8 *)memmove(puVar14,puVar15,sVar21);
        }
LAB_00103c0f:
        free(puVar15);
LAB_001034ef:
        *(undefined8 **)(this + 0x128) = puVar14;
        *(undefined8 *)(this + 0x138) = *(undefined8 *)(this + 0x130);
      }
    }
    else {
      if (uVar22 < uVar4) {
        puVar14 = *(undefined8 **)(this + 0x128);
LAB_001039bc:
        puVar15 = (undefined8 *)((long)puVar14 + uVar4 * 0xc);
        puVar11 = (undefined8 *)((long)puVar14 + uVar18 * 0xc);
        if (puVar15 == puVar11) goto LAB_00103bc9;
        do {
          *puVar11 = 0;
          puVar14 = (undefined8 *)((long)puVar11 + 0xc);
          *(undefined4 *)(puVar11 + 1) = 0;
          puVar11 = puVar14;
        } while (puVar15 != puVar14);
        *(ulong *)(this + 0x130) = uVar4;
        if (uVar10 < uVar22) goto LAB_00103bdb;
      }
      else {
        *(ulong *)(this + 0x130) = uVar4;
        if (uVar10 < uVar22) {
          if (uVar4 != 0) goto LAB_00103bdb;
          puVar15 = *(undefined8 **)(this + 0x128);
          puVar14 = (undefined8 *)0x0;
LAB_001034e6:
          if (puVar15 != (undefined8 *)0x0) goto LAB_00103c0f;
          goto LAB_001034ef;
        }
      }
      puVar14 = *(undefined8 **)(this + 0x128);
    }
    lVar17 = *(long *)(param_1 + 0x128);
    piVar13 = *(int **)param_2;
    piVar16 = piVar13 + *(ulong *)(param_2 + 8);
    if ((*(ulong *)(param_2 + 8) & 0x3fffffffffffffff) != 0) {
      do {
        iVar2 = *piVar13;
        piVar13 = piVar13 + 1;
        puVar15 = (undefined8 *)(lVar17 + (long)iVar2 * 0xc);
        *puVar14 = *puVar15;
        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar15 + 1);
        puVar14 = (undefined8 *)((long)puVar14 + 0xc);
      } while (piVar16 != piVar13);
    }
    *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
    if (param_1 + 200 != this + 200) {
      if (*(void **)(this + 200) != (void *)0x0) {
        free(*(void **)(this + 200));
      }
      lVar17 = *(long *)(param_1 + 0xd0);
      *(long *)(this + 0xd0) = lVar17;
      *(long *)(this + 0xd8) = lVar17;
      if (lVar17 != 0) {
        sVar21 = lVar17 * 8;
        puVar15 = (undefined8 *)malloc(sVar21);
        *(undefined8 **)(this + 200) = puVar15;
        if ((long)sVar21 < 9) {
          if (sVar21 == 8) {
            *puVar15 = **(undefined8 **)(param_1 + 200);
          }
        }
        else {
          memmove(puVar15,*(undefined8 **)(param_1 + 200),sVar21);
        }
      }
    }
  }
  uVar22 = *(ulong *)(param_1 + 0x68);
  uVar18 = uVar22 / 3;
  if (uVar18 == *(ulong *)(param_1 + 0x98)) {
    uVar18 = *(ulong *)(this + 0x98);
    uVar6 = uVar18;
    if (*(ulong *)(this + 0xa0) < uVar4) {
      puVar15 = (undefined8 *)malloc(uVar4 * 0x18);
      puVar14 = *(undefined8 **)(this + 0x90);
      if (uVar18 == 0) {
        if (puVar14 == (undefined8 *)0x0) {
          *(undefined8 **)(this + 0x90) = puVar15;
          uVar6 = 0;
          *(ulong *)(this + 0xa0) = uVar4;
          goto LAB_00103a90;
        }
LAB_00103cae:
        free(puVar14);
        uVar6 = *(ulong *)(this + 0x98);
      }
      else {
        sVar21 = uVar18 * 0x18;
        if (0x18 < (long)sVar21) {
          puVar15 = (undefined8 *)memmove(puVar15,puVar14,sVar21);
          goto LAB_00103cae;
        }
        if (sVar21 == 0x18) {
          uVar5 = puVar14[1];
          *puVar15 = *puVar14;
          puVar15[1] = uVar5;
          puVar15[2] = puVar14[2];
          goto LAB_00103cae;
        }
        if (puVar14 != (undefined8 *)0x0) goto LAB_00103cae;
      }
      *(undefined8 **)(this + 0x90) = puVar15;
      *(ulong *)(this + 0xa0) = uVar4;
      if (uVar6 < uVar4) goto LAB_00103a90;
LAB_00103ce8:
      *(ulong *)(this + 0x98) = uVar4;
      if (uVar10 < uVar18) {
LAB_00103cfa:
        sVar21 = uVar4 * 0x18;
        puVar15 = (undefined8 *)malloc(sVar21);
        puVar14 = *(undefined8 **)(this + 0x90);
        if ((long)sVar21 < 0x19) {
          if (sVar21 != 0x18) goto LAB_00103913;
          uVar5 = puVar14[1];
          *puVar15 = *puVar14;
          puVar15[1] = uVar5;
          puVar15[2] = puVar14[2];
        }
        else {
          puVar15 = (undefined8 *)memmove(puVar15,puVar14,sVar21);
        }
LAB_00103d2e:
        free(puVar14);
LAB_0010391c:
        *(undefined8 **)(this + 0x90) = puVar15;
        *(undefined8 *)(this + 0xa0) = *(undefined8 *)(this + 0x98);
      }
      uVar22 = *(ulong *)(param_1 + 0x68);
    }
    else {
      if (uVar18 < uVar4) {
        puVar15 = *(undefined8 **)(this + 0x90);
LAB_00103a90:
        pauVar12 = (undefined1 (*) [16])(puVar15 + uVar6 * 3);
        if ((undefined1 (*) [16])(puVar15 + uVar4 * 3) == pauVar12) goto LAB_00103ce8;
        do {
          *(undefined8 *)pauVar12[1] = 0;
          pauVar19 = pauVar12 + 1;
          *pauVar12 = (undefined1  [16])0x0;
          pauVar12 = (undefined1 (*) [16])(*pauVar19 + 8);
        } while ((undefined1 (*) [16])(puVar15 + uVar4 * 3) != (undefined1 (*) [16])(*pauVar19 + 8))
        ;
        *(ulong *)(this + 0x98) = uVar4;
        if (uVar10 < uVar18) goto LAB_00103cfa;
        uVar22 = *(ulong *)(param_1 + 0x68);
      }
      else {
        *(ulong *)(this + 0x98) = uVar4;
        if (uVar10 < uVar18) {
          if (uVar4 != 0) goto LAB_00103cfa;
          puVar14 = *(undefined8 **)(this + 0x90);
          puVar15 = (undefined8 *)0x0;
LAB_00103913:
          if (puVar14 != (undefined8 *)0x0) goto LAB_00103d2e;
          goto LAB_0010391c;
        }
      }
      puVar15 = *(undefined8 **)(this + 0x90);
    }
    lVar17 = *(long *)(param_1 + 0x90);
    piVar16 = *(int **)param_2;
    uVar18 = uVar22 / 3;
    if ((*(ulong *)(param_2 + 8) & 0x3fffffffffffffff) != 0) {
      piVar13 = piVar16 + *(ulong *)(param_2 + 8);
      do {
        iVar2 = *piVar16;
        piVar16 = piVar16 + 1;
        puVar14 = (undefined8 *)(lVar17 + (long)iVar2 * 0x18);
        uVar5 = puVar14[1];
        *puVar15 = *puVar14;
        puVar15[1] = uVar5;
        puVar15[2] = puVar14[2];
        puVar15 = puVar15 + 3;
      } while (piVar13 != piVar16);
    }
  }
  __ptr = (void *)0x0;
  if (2 < uVar22) {
    __ptr = malloc(uVar18 * 4);
  }
  uVar22 = *(ulong *)(this + 0x68);
  lVar17 = *(long *)param_2;
  if (uVar4 == 0) {
    *(undefined8 *)(this + 0x68) = 0;
    if (uVar22 != 0) {
      puVar15 = *(undefined8 **)(this + 0x60);
      uVar18 = 0;
      uVar10 = 0;
      puVar14 = (undefined8 *)0x0;
LAB_00103af5:
      if (puVar15 != (undefined8 *)0x0) {
LAB_001033d1:
        free(puVar15);
      }
      *(undefined8 **)(this + 0x60) = puVar14;
      lVar17 = *(long *)(param_1 + 0xb0);
      *(undefined8 *)(this + 0x70) = *(undefined8 *)(this + 0x68);
      goto joined_r0x001030ff;
    }
    if (*(long *)(param_1 + 0xb0) == 0) goto LAB_00103105;
    lVar17 = *(long *)(this + 0xb0);
    *(undefined8 *)(this + 0xb0) = 0;
    if (lVar17 != 0) {
      uVar10 = 0;
      goto LAB_00103a4b;
    }
  }
  else {
    uVar10 = 0;
    do {
      *(int *)((long)__ptr + (long)*(int *)(lVar17 + uVar10 * 4) * 4) = (int)uVar10;
      uVar10 = uVar10 + 1;
    } while (uVar4 != uVar10);
    uVar10 = uVar4 * 3;
    uVar18 = uVar4 * 6;
    uVar6 = uVar22;
    if (*(ulong *)(this + 0x70) < uVar10) {
      puVar15 = (undefined8 *)malloc(uVar4 * 0x24);
      puVar14 = *(undefined8 **)(this + 0x60);
      if (uVar22 != 0) {
        sVar21 = uVar22 * 0xc;
        if ((long)sVar21 < 0xd) {
          if (sVar21 == 0xc) {
            *puVar15 = *puVar14;
            *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
            goto LAB_00103771;
          }
          if (puVar14 != (undefined8 *)0x0) goto LAB_00103771;
        }
        else {
          puVar15 = (undefined8 *)memmove(puVar15,puVar14,sVar21);
LAB_00103771:
          free(puVar14);
          uVar6 = *(ulong *)(this + 0x68);
        }
        *(undefined8 **)(this + 0x60) = puVar15;
        *(ulong *)(this + 0x70) = uVar10;
        goto LAB_001030e0;
      }
      if (puVar14 != (undefined8 *)0x0) goto LAB_00103771;
      puVar14 = (undefined8 *)(uVar4 * 0x24 + (long)puVar15);
      *(undefined8 **)(this + 0x60) = puVar15;
      *(ulong *)(this + 0x70) = uVar10;
      if (puVar14 != puVar15) goto LAB_00103360;
      *(ulong *)(this + 0x68) = uVar10;
    }
    else {
LAB_001030e0:
      if (uVar6 < uVar10) {
        puVar14 = (undefined8 *)(*(long *)(this + 0x60) + uVar4 * 0x24);
        puVar15 = (undefined8 *)(*(long *)(this + 0x60) + uVar6 * 0xc);
        if (puVar14 == puVar15) goto LAB_001030e9;
LAB_00103360:
        do {
          *puVar15 = 0;
          puVar11 = (undefined8 *)((long)puVar15 + 0xc);
          *(undefined4 *)(puVar15 + 1) = 0;
          puVar15 = puVar11;
        } while (puVar11 != puVar14);
        *(ulong *)(this + 0x68) = uVar10;
      }
      else {
LAB_001030e9:
        *(ulong *)(this + 0x68) = uVar10;
      }
      if (uVar18 < uVar22) {
        sVar21 = uVar4 * 0x24;
        puVar14 = (undefined8 *)malloc(sVar21);
        puVar15 = *(undefined8 **)(this + 0x60);
        if ((long)sVar21 < 0xd) {
          if (sVar21 != 0xc) goto LAB_00103af5;
          *puVar14 = *puVar15;
          *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar15 + 1);
        }
        else {
          memmove(puVar14,puVar15,sVar21);
        }
        goto LAB_001033d1;
      }
    }
    lVar17 = *(long *)(param_1 + 0xb0);
joined_r0x001030ff:
    if (lVar17 == 0) {
LAB_00103105:
      puVar15 = *(undefined8 **)(this + 0xa8);
      local_70 = 0;
      goto LAB_0010310e;
    }
    uVar22 = *(ulong *)(this + 0xb0);
    uVar6 = uVar22;
    if (*(ulong *)(this + 0xb8) < uVar10) {
      puVar14 = (undefined8 *)malloc(uVar4 * 0x60);
      puVar15 = *(undefined8 **)(this + 0xa8);
      if (uVar22 == 0) {
LAB_0010383b:
        if (puVar15 != (undefined8 *)0x0) goto LAB_00103b36;
      }
      else {
        sVar21 = uVar22 * 0x20;
        if ((long)sVar21 < 0x21) {
          if (sVar21 != 0x20) goto LAB_0010383b;
          uVar5 = puVar15[1];
          *puVar14 = *puVar15;
          puVar14[1] = uVar5;
          uVar5 = puVar15[3];
          puVar14[2] = puVar15[2];
          puVar14[3] = uVar5;
        }
        else {
          puVar14 = (undefined8 *)memmove(puVar14,puVar15,sVar21);
        }
LAB_00103b36:
        free(puVar15);
        uVar6 = *(ulong *)(this + 0xb0);
      }
      *(undefined8 **)(this + 0xa8) = puVar14;
      *(ulong *)(this + 0xb8) = uVar10;
    }
    if (uVar6 < uVar10) {
      pauVar12 = (undefined1 (*) [16])(uVar4 * 0x60 + *(long *)(this + 0xa8));
      pauVar19 = (undefined1 (*) [16])(*(long *)(this + 0xa8) + uVar6 * 0x20);
      if (pauVar12 != pauVar19) {
        uVar6 = 0;
        pauVar20 = pauVar19;
        do {
          uVar6 = uVar6 + 1;
          *pauVar20 = (undefined1  [16])0x0;
          pauVar20[1] = (undefined1  [16])0x0;
          pauVar20 = pauVar20 + 2;
        } while (uVar6 < ((ulong)((long)pauVar12 + (-0x20 - (long)pauVar19)) >> 5) + 1);
      }
    }
    *(ulong *)(this + 0xb0) = uVar10;
    if (uVar18 < uVar22) {
      if (uVar4 == 0) {
LAB_00103a4b:
        puVar14 = *(undefined8 **)(this + 0xa8);
        puVar15 = (undefined8 *)0x0;
LAB_00103a55:
        if (puVar14 != (undefined8 *)0x0) goto LAB_001038b4;
      }
      else {
        sVar21 = uVar4 * 0x60;
        puVar15 = (undefined8 *)malloc(sVar21);
        puVar14 = *(undefined8 **)(this + 0xa8);
        if ((long)sVar21 < 0x21) {
          if (sVar21 != 0x20) goto LAB_00103a55;
          uVar5 = puVar14[1];
          *puVar15 = *puVar14;
          puVar15[1] = uVar5;
          uVar5 = puVar14[3];
          puVar15[2] = puVar14[2];
          puVar15[3] = uVar5;
        }
        else {
          memmove(puVar15,puVar14,sVar21);
        }
LAB_001038b4:
        free(puVar14);
        uVar10 = *(ulong *)(this + 0xb0);
      }
      *(undefined8 **)(this + 0xa8) = puVar15;
      local_70 = *(undefined8 *)(param_1 + 0xb0);
      *(ulong *)(this + 0xb8) = uVar10;
      goto LAB_0010310e;
    }
  }
  local_70 = *(undefined8 *)(param_1 + 0xb0);
  puVar15 = *(undefined8 **)(this + 0xa8);
LAB_0010310e:
  local_88 = *(undefined8 *)(param_1 + 0x60);
  local_78 = *(undefined8 *)(param_1 + 0xa8);
  local_a8[0] = *(undefined8 *)(this + 0x60);
  local_68 = *(undefined8 *)param_2;
  local_98 = puVar15;
  local_58 = __ptr;
  for_each<manifold::CountingIterator<unsigned_long>,(anonymous_namespace)::ReindexFace>
            (0,uVar4,local_a8);
  if (__ptr == (void *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::Manifold::Impl::GetFaceBoxMorton(manifold::Vec<manifold::Box>&, manifold::Vec<unsigned
   int>&) const */

void __thiscall manifold::Manifold::Impl::GetFaceBoxMorton(Impl *this,Vec *param_1,Vec *param_2)

{
  double *pdVar1;
  void *__s;
  size_t sVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  int iVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  double *pdVar14;
  undefined4 *puVar15;
  ulong uVar16;
  int iVar17;
  int *piVar18;
  ulong uVar19;
  ulong uVar20;
  undefined4 *puVar21;
  long in_FS_OFFSET;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Vec<manifold::Box>::resize();
  uVar3 = *(ulong *)(this + 0x68);
  uVar19 = *(ulong *)(param_2 + 8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar3;
  uVar20 = uVar3 / 3;
  uVar16 = uVar19;
  if (*(ulong *)(param_2 + 0x10) < uVar20) {
    puVar15 = (undefined4 *)malloc(uVar20 * 4);
    puVar21 = *(undefined4 **)param_2;
    if (uVar19 != 0) {
      sVar2 = uVar19 * 4;
      if ((long)sVar2 < 5) {
        if (sVar2 == 4) {
          *puVar15 = *puVar21;
          goto LAB_00104542;
        }
        if (puVar21 != (undefined4 *)0x0) goto LAB_00104542;
      }
      else {
        puVar15 = (undefined4 *)memmove(puVar15,puVar21,sVar2);
LAB_00104542:
        free(puVar21);
        uVar16 = *(ulong *)(param_2 + 8);
      }
      *(undefined4 **)param_2 = puVar15;
      *(ulong *)(param_2 + 0x10) = uVar20;
      goto LAB_00103f6f;
    }
    if (puVar21 != (undefined4 *)0x0) goto LAB_00104542;
    *(undefined4 **)param_2 = puVar15;
    *(ulong *)(param_2 + 0x10) = uVar20;
LAB_00104468:
    __s = (void *)(*(long *)param_2 + uVar16 * 4);
    if (__s == (void *)(*(long *)param_2 + uVar20 * 4)) goto LAB_00103f80;
    memset(__s,0,(uVar20 - uVar16) * 4);
    *(ulong *)(param_2 + 8) = uVar20;
  }
  else {
LAB_00103f6f:
    if (uVar16 < uVar20) goto LAB_00104468;
LAB_00103f80:
    *(ulong *)(param_2 + 8) = uVar20;
  }
  if (uVar19 <= (SUB168(auVar7 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe))
  goto LAB_00103f8e;
  if (uVar3 < 3) {
    puVar21 = *(undefined4 **)param_2;
    puVar15 = (undefined4 *)0x0;
LAB_001044b2:
    if (puVar21 == (undefined4 *)0x0) {
      *(undefined4 **)param_2 = puVar15;
      *(ulong *)(param_2 + 0x10) = uVar20;
      goto LAB_00103f8e;
    }
  }
  else {
    sVar2 = uVar20 * 4;
    puVar15 = (undefined4 *)malloc(sVar2);
    puVar21 = *(undefined4 **)param_2;
    if ((long)sVar2 < 5) {
      if (sVar2 != 4) goto LAB_001044b2;
      *puVar15 = *puVar21;
    }
    else {
      memmove(puVar15,puVar21,sVar2);
    }
  }
  free(puVar21);
  *(undefined4 **)param_2 = puVar15;
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_2 + 8);
LAB_00103f8e:
  dVar11 = _LC13;
  dVar10 = _LC12;
  uVar9 = _LC0;
  uVar3 = *(ulong *)(this + 0x68);
  if (2 < uVar3) {
    lVar4 = *(long *)(this + 0x60);
    lVar5 = *(long *)param_2;
    uVar19 = 0;
    do {
      iVar8 = (int)uVar19;
      iVar17 = -1;
      if (-1 < *(int *)(lVar4 + 8 + (long)(iVar8 * 3) * 0xc)) {
        local_50 = uVar9;
        dVar26 = 0.0;
        lVar6 = *(long *)(this + 0x48);
        dVar24 = 0.0;
        dVar22 = 0.0;
        pdVar14 = (double *)((long)iVar8 * 0x30 + *(long *)param_1);
        dVar23 = *pdVar14;
        local_48 = 2;
        piVar18 = (int *)&local_50;
        dVar25 = pdVar14[1];
        dVar27 = pdVar14[2];
        dVar32 = pdVar14[3];
        dVar31 = pdVar14[4];
        dVar30 = pdVar14[5];
        do {
          iVar17 = *piVar18;
          piVar18 = piVar18 + 1;
          pdVar1 = (double *)
                   (lVar6 + (long)*(int *)(lVar4 + (long)(iVar17 + iVar8 * 3) * 0xc) * 0x18);
          dVar12 = *pdVar1;
          dVar29 = pdVar1[1];
          dVar28 = pdVar1[2];
          if (dVar12 <= dVar23) {
            dVar23 = dVar12;
          }
          if (dVar29 <= dVar25) {
            dVar25 = dVar29;
          }
          dVar22 = dVar22 + dVar12;
          dVar24 = dVar24 + dVar29;
          if (dVar12 <= dVar32) {
            dVar12 = dVar32;
          }
          dVar32 = dVar12;
          if (dVar29 <= dVar31) {
            dVar29 = dVar31;
          }
          if (dVar28 <= dVar27) {
            dVar27 = dVar28;
          }
          dVar26 = dVar26 + dVar28;
          if (dVar28 <= dVar30) {
            dVar28 = dVar30;
          }
          *pdVar14 = dVar23;
          pdVar14[1] = dVar25;
          pdVar14[2] = dVar27;
          pdVar14[3] = dVar32;
          pdVar14[4] = dVar29;
          pdVar14[5] = dVar28;
          dVar31 = dVar29;
          dVar30 = dVar28;
        } while (&local_44 != piVar18);
        if (NAN(dVar22 / dVar10)) {
          iVar17 = -1;
        }
        else {
          dVar23 = ((dVar22 / dVar10 - *(double *)this) /
                   (*(double *)(this + 0x18) - *(double *)this)) * dVar11;
          dVar25 = ((dVar24 / dVar10 - *(double *)(this + 8)) /
                   (*(double *)(this + 0x20) - *(double *)(this + 8))) * dVar11;
          dVar27 = ((dVar26 / dVar10 - *(double *)(this + 0x10)) /
                   (*(double *)(this + 0x28) - *(double *)(this + 0x10))) * dVar11;
          if (0.0 < dVar23) {
            if (0.0 < dVar25) {
              if (0.0 < dVar27) {
                iVar17 = 0x12492492;
                if (dVar23 <= _LC14) {
                  iVar17 = (((((int)(long)dVar23 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) *
                             0x11 & 0xc30c30c3) * 5 & 0x49249249) * 2;
                }
                goto LAB_0010437a;
              }
              if (dVar23 <= _LC14) {
                iVar17 = (((((int)(long)dVar23 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11
                          & 0xc30c30c3) * 5 & 0x49249249) * 2;
                goto LAB_0010424d;
              }
              iVar17 = 0x36db6db6;
              if (dVar25 <= _LC14) {
                iVar17 = (((((int)(long)dVar25 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11
                          & 0xc30c30c3) * 5 & 0x49249249) * 2 + 0x24924924;
              }
            }
            else if (0.0 < dVar27) {
              iVar13 = 0x24924924;
              if (_LC14 < dVar23) goto LAB_0010418b;
              iVar13 = (((((int)(long)dVar23 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                        0xc30c30c3) * 5 & 0x49249249) * 4;
              iVar17 = iVar13 + 0x9249249;
              if (_LC14 < dVar27) goto LAB_0010419b;
LAB_00104324:
              iVar17 = (((((int)(long)dVar27 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                        0xc30c30c3) * 5 & 0x49249249) + iVar13;
            }
            else {
              iVar17 = 0x24924924;
              if (dVar23 <= _LC14) {
                iVar17 = (((((int)(long)dVar23 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11
                          & 0xc30c30c3) * 5 & 0x49249249) << 2;
              }
            }
          }
          else if (0.0 < dVar25) {
            if (0.0 < dVar27) {
              iVar17 = 0;
LAB_0010437a:
              iVar13 = iVar17 * 2 + 0x12492492;
              if (dVar25 <= _LC14) {
                iVar13 = ((((((int)(long)dVar25 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11
                           & 0xc30c30c3) * 5 & 0x49249249) + iVar17) * 2;
              }
              goto LAB_0010418b;
            }
            iVar17 = 0;
LAB_0010424d:
            if (dVar25 <= _LC14) {
              iVar17 = ((((((int)(long)dVar25 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                         0xc30c30c3) * 5 & 0x49249249) + iVar17) * 2;
            }
            else {
              iVar17 = iVar17 * 2 + 0x12492492;
            }
          }
          else {
            iVar17 = 0;
            if (0.0 < dVar27) {
              iVar13 = 0;
LAB_0010418b:
              iVar17 = iVar13 + 0x9249249;
              if (dVar27 <= _LC14) goto LAB_00104324;
            }
          }
        }
      }
LAB_0010419b:
      uVar19 = uVar19 + 1;
      *(int *)(lVar5 + (long)iVar8 * 4) = iVar17;
    } while (uVar3 / 3 != uVar19);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Impl::GatherFaces(manifold::Vec<int> const&) */

void __thiscall manifold::Manifold::Impl::GatherFaces(Impl *this,Vec *param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  void *__ptr;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  void *__ptr_00;
  undefined1 (*pauVar9) [16];
  ulong uVar10;
  undefined8 *puVar11;
  int *piVar12;
  ulong uVar13;
  size_t __size;
  long lVar14;
  long in_FS_OFFSET;
  long local_b0;
  undefined8 *local_a8 [2];
  undefined1 (*local_98) [16];
  void *local_88;
  void *local_78;
  long local_70;
  long local_68;
  void *local_58;
  long local_40;
  
  uVar13 = *(ulong *)(this + 0x68);
  lVar3 = *(long *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = uVar13 / 3;
  if (*(ulong *)(this + 0x118) == uVar10) {
    Permute<manifold::TriRef,int>((Vec *)(this + 0x110),param_1);
    uVar13 = *(ulong *)(this + 0x68);
    uVar10 = uVar13 / 3;
  }
  if (*(ulong *)(this + 0x130) == uVar10) {
    pvVar4 = *(void **)(this + 0x128);
    *(undefined8 *)(this + 0x128) = 0;
    *(undefined1 (*) [16])(this + 0x130) = (undefined1  [16])0x0;
    uVar6 = *(ulong *)(param_1 + 8);
    if (uVar6 == 0) {
      *(undefined8 *)(this + 0x130) = 0;
    }
    else {
      puVar8 = (undefined8 *)malloc(uVar6 * 0xc);
      *(ulong *)(this + 0x138) = uVar6;
      *(undefined8 **)(this + 0x128) = puVar8;
      for (puVar11 = puVar8; (undefined8 *)((long)puVar8 + uVar6 * 0xc) != puVar11;
          puVar11 = (undefined8 *)((long)puVar11 + 0xc)) {
        *puVar11 = 0;
        *(undefined4 *)(puVar11 + 1) = 0;
      }
      *(ulong *)(this + 0x130) = uVar6;
      piVar12 = *(int **)param_1;
      if ((uVar6 & 0x3fffffffffffffff) != 0) {
        piVar1 = piVar12 + uVar6;
        do {
          iVar2 = *piVar12;
          piVar12 = piVar12 + 1;
          puVar11 = (undefined8 *)((long)pvVar4 + (long)iVar2 * 0xc);
          *puVar8 = *puVar11;
          *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar11 + 1);
          puVar8 = (undefined8 *)((long)puVar8 + 0xc);
        } while (piVar12 != piVar1);
      }
    }
    if (pvVar4 != (void *)0x0) {
      free(pvVar4);
      uVar13 = *(ulong *)(this + 0x68);
      uVar10 = uVar13 / 3;
    }
  }
  if (*(ulong *)(this + 0x98) == uVar10) {
    Permute<linalg::vec<double,3>,int>((Vec *)(this + 0x90),param_1);
    uVar13 = *(ulong *)(this + 0x68);
    uVar10 = uVar13 / 3;
  }
  pvVar4 = *(void **)(this + 0x60);
  __ptr_00 = (void *)0x0;
  __ptr = *(void **)(this + 0xa8);
  lVar5 = *(long *)(this + 0xb0);
  *(undefined1 (*) [16])(this + 0x68) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined1 (*) [16])(this + 0xb0) = (undefined1  [16])0x0;
  if (uVar13 < 3) {
    lVar14 = *(long *)param_1;
    if (lVar3 != 0) goto LAB_001046e0;
LAB_00104870:
    *(undefined8 *)(this + 0x68) = 0;
    if (lVar5 == 0) goto LAB_0010477c;
    local_b0 = 0;
    local_98 = (undefined1 (*) [16])0x0;
  }
  else {
    __ptr_00 = malloc(uVar10 * 4);
    lVar14 = *(long *)param_1;
    if (lVar3 == 0) goto LAB_00104870;
LAB_001046e0:
    lVar7 = 0;
    do {
      *(int *)((long)__ptr_00 + (long)*(int *)(lVar14 + lVar7 * 4) * 4) = (int)lVar7;
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    local_b0 = lVar3 * 3;
    local_a8[0] = (undefined8 *)malloc(lVar3 * 0x24);
    *(undefined8 **)(this + 0x60) = local_a8[0];
    puVar11 = (undefined8 *)(lVar3 * 0x24 + (long)local_a8[0]);
    *(long *)(this + 0x70) = local_b0;
    if (puVar11 == local_a8[0]) {
      *(long *)(this + 0x68) = local_b0;
      local_98 = (undefined1 (*) [16])0x0;
      if (lVar5 == 0) goto LAB_00104783;
    }
    else {
      do {
        *local_a8[0] = 0;
        puVar8 = (undefined8 *)((long)local_a8[0] + 0xc);
        *(undefined4 *)(local_a8[0] + 1) = 0;
        local_a8[0] = puVar8;
      } while (puVar11 != puVar8);
      *(long *)(this + 0x68) = local_b0;
      if (lVar5 == 0) {
LAB_0010477c:
        local_a8[0] = *(undefined8 **)(this + 0x60);
        local_98 = (undefined1 (*) [16])0x0;
        goto LAB_00104783;
      }
    }
    __size = lVar3 * 0x60;
    local_98 = (undefined1 (*) [16])malloc(__size);
    *(undefined1 (**) [16])(this + 0xa8) = local_98;
    *(long *)(this + 0xb8) = local_b0;
    if (__size != 0) {
      uVar13 = 0;
      pauVar9 = local_98;
      do {
        uVar13 = uVar13 + 1;
        *pauVar9 = (undefined1  [16])0x0;
        pauVar9[1] = (undefined1  [16])0x0;
        pauVar9 = pauVar9 + 2;
      } while (uVar13 < (__size - 0x20 >> 5) + 1);
      *(long *)(this + 0xb0) = local_b0;
      local_a8[0] = *(undefined8 **)(this + 0x60);
      goto LAB_00104783;
    }
  }
  *(long *)(this + 0xb0) = local_b0;
  local_a8[0] = *(undefined8 **)(this + 0x60);
LAB_00104783:
  local_88 = pvVar4;
  local_78 = __ptr;
  local_70 = lVar5;
  local_68 = lVar14;
  local_58 = __ptr_00;
  for_each<manifold::CountingIterator<unsigned_long>,(anonymous_namespace)::ReindexFace>
            (0,lVar3,local_a8);
  if (__ptr_00 != (void *)0x0) {
    free(__ptr_00);
  }
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  if (pvVar4 == (void *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    free(pvVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_adaptive_resize<int*, long, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::{lambda(int const&, int
   const&)#1}> >(int*, int*, int*, long, long, int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::{lambda(int const&, int
   const&)#1}>) */

void std::
     __merge_adaptive_resize<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
               (int *param_1,int *param_2,undefined8 param_3,long param_4,long param_5,int *param_6,
               long param_7,undefined8 param_8)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  int *local_68;
  
  lVar3 = param_5;
  if (param_4 <= param_5) {
    lVar3 = param_4;
  }
  if (param_7 < lVar3) {
    piVar2 = param_2;
    local_68 = param_1;
    if (param_4 <= param_5) goto LAB_00104bdb;
    do {
      lVar4 = param_4 / 2;
      piVar1 = local_68 + lVar4;
      param_2 = __lower_bound<int*,int,__gnu_cxx::__ops::_Iter_comp_val<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
                          (piVar2,param_3,*piVar1,param_8);
      lVar3 = (long)param_2 - (long)piVar2 >> 2;
      while( true ) {
        param_4 = param_4 - lVar4;
        param_5 = param_5 - lVar3;
        param_1 = __rotate_adaptive<int*,int*,long>
                            (piVar1,piVar2,param_2,param_4,lVar3,param_6,param_7);
        __merge_adaptive_resize<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
                  (local_68,piVar1,param_1,lVar4,lVar3,param_6,param_7,param_8);
        lVar3 = param_5;
        if (param_4 <= param_5) {
          lVar3 = param_4;
        }
        if (lVar3 <= param_7) goto LAB_00104c45;
        piVar2 = param_2;
        local_68 = param_1;
        if (param_5 < param_4) break;
LAB_00104bdb:
        lVar3 = param_5 / 2;
        param_2 = piVar2 + lVar3;
        piVar1 = __upper_bound<int*,int,__gnu_cxx::__ops::_Val_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
                           (local_68,piVar2,*param_2,param_8);
        lVar4 = (long)piVar1 - (long)local_68 >> 2;
      }
    } while( true );
  }
LAB_00104c45:
  __merge_adaptive<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
            (param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__stable_sort_adaptive_resize<int*, int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::{lambda(int const&, int
   const&)#1}> >(int*, int*, int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::{lambda(int const&, int
   const&)#1}>) */

void std::
     __stable_sort_adaptive_resize<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
               (long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = ((param_2 - param_1 >> 2) + 1) / 2;
  lVar2 = lVar3 * 4;
  lVar1 = param_1 + lVar2;
  if (param_4 < lVar3) {
    __stable_sort_adaptive_resize<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
              (param_1,lVar1,param_3);
    __stable_sort_adaptive_resize<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
              (lVar1,param_2,param_3,param_4,param_5);
    __merge_adaptive_resize<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
              (param_1,lVar1,param_2,lVar2 >> 2,param_2 - lVar1 >> 2,param_3,param_4,param_5);
    return;
  }
  __stable_sort_adaptive<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
            (param_1,lVar1,param_2,param_3);
  return;
}



/* manifold::Manifold::Impl::SortVerts() */

void __thiscall manifold::Manifold::Impl::SortVerts(Impl *this)

{
  double *pdVar1;
  size_t __size;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  size_t __size_00;
  int *piVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *__src;
  ulong uVar18;
  long lVar19;
  long in_FS_OFFSET;
  double dVar20;
  double dVar21;
  double dVar22;
  int *local_b8;
  size_t local_a0;
  void *local_98;
  ulong local_90;
  ulong uStack_88;
  int *local_78;
  ulong local_70;
  ulong uStack_68;
  long local_58;
  long local_50;
  void *local_48;
  long local_40;
  
  uVar8 = *(ulong *)(this + 0x50);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (void *)0x0;
  uStack_88 = 0;
  __size = uVar8 * 4;
  if (uVar8 == 0) {
    piVar11 = (int *)0x0;
    local_90 = 0;
    local_78 = (int *)0x0;
    uStack_68 = 0;
    local_70 = 0;
    ReindexVerts(this,(Vec *)&local_78,0);
    local_b8 = (int *)0x0;
    local_a0 = 0;
    piVar13 = local_b8;
LAB_00104dd6:
    local_b8 = piVar13;
  }
  else {
    local_98 = malloc(__size);
    dVar10 = _LC14;
    dVar9 = _LC13;
    lVar19 = *(long *)(this + 0x48);
    uVar18 = 0;
    dVar2 = *(double *)(this + 0x10);
    dVar3 = *(double *)(this + 0x28);
    dVar4 = *(double *)(this + 8);
    dVar5 = *(double *)(this + 0x20);
    dVar6 = *(double *)this;
    dVar7 = *(double *)(this + 0x18);
    do {
      while( true ) {
        lVar14 = (long)(int)uVar18;
        pdVar1 = (double *)(lVar19 + lVar14 * 0x18);
        if (!NAN(*pdVar1)) break;
        iVar16 = -1;
LAB_00104f6c:
        uVar18 = uVar18 + 1;
        *(int *)((long)local_98 + lVar14 * 4) = iVar16;
        if (uVar8 == uVar18) goto LAB_00105028;
      }
      dVar20 = ((*pdVar1 - dVar6) / (dVar7 - dVar6)) * dVar9;
      dVar21 = ((pdVar1[1] - dVar4) / (dVar5 - dVar4)) * dVar9;
      dVar22 = ((pdVar1[2] - dVar2) / (dVar3 - dVar2)) * dVar9;
      if (dVar20 <= 0.0) {
        if (0.0 < dVar21) {
          if (0.0 < dVar22) {
            iVar15 = 0;
            goto LAB_00105337;
          }
          iVar15 = 0;
LAB_001051a2:
          iVar16 = iVar15 * 2 + 0x12492492;
          if (dVar21 <= dVar10) {
            iVar16 = ((((((int)(long)dVar21 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                       0xc30c30c3) * 5 & 0x49249249) + iVar15) * 2;
          }
        }
        else {
          iVar16 = 0;
          if (0.0 < dVar22) {
            iVar17 = 0;
            goto joined_r0x00104f66;
          }
        }
        goto LAB_00104f6c;
      }
      if (0.0 < dVar21) {
        if (0.0 < dVar22) {
          iVar15 = 0x12492492;
          if (dVar20 <= dVar10) {
            iVar15 = (((((int)(long)dVar20 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                      0xc30c30c3) * 5 & 0x49249249) * 2;
          }
LAB_00105337:
          iVar17 = iVar15 * 2 + 0x12492492;
          if (dVar21 <= dVar10) {
            iVar17 = ((((((int)(long)dVar21 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                       0xc30c30c3) * 5 & 0x49249249) + iVar15) * 2;
          }
          goto joined_r0x00104f66;
        }
        if (dVar20 <= dVar10) {
          iVar15 = (((((int)(long)dVar20 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                    0xc30c30c3) * 5 & 0x49249249) * 2;
          goto LAB_001051a2;
        }
        iVar16 = 0x36db6db6;
        if (dVar21 <= dVar10) {
          iVar16 = (((((int)(long)dVar21 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                    0xc30c30c3) * 5 & 0x49249249) * 2 + 0x24924924;
        }
        goto LAB_00104f6c;
      }
      if (0.0 < dVar22) {
        iVar17 = 0x24924924;
        if (dVar20 <= dVar10) {
          iVar17 = (((((int)(long)dVar20 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                    0xc30c30c3) * 5 & 0x49249249) * 4;
        }
joined_r0x00104f66:
        iVar16 = iVar17 + 0x9249249;
        if (dVar22 <= dVar10) {
          iVar16 = (((((int)(long)dVar22 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                    0xc30c30c3) * 5 & 0x49249249) + iVar17;
        }
        goto LAB_00104f6c;
      }
      if (dVar20 <= dVar10) {
        iVar16 = (((((int)(long)dVar20 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                  0xc30c30c3) * 5 & 0x49249249) << 2;
        goto LAB_00104f6c;
      }
      uVar18 = uVar18 + 1;
      *(undefined4 *)((long)local_98 + lVar14 * 4) = 0x24924924;
    } while (uVar8 != uVar18);
LAB_00105028:
    uVar18 = (long)__size >> 2;
    local_90 = uVar8;
    uStack_88 = uVar8;
    piVar11 = (int *)malloc(__size);
    piVar13 = piVar11 + uVar8;
    local_b8 = piVar11;
    local_78 = piVar11;
    local_70 = uVar8;
    uStack_68 = uVar8;
    if (uVar18 == 0) {
      if (piVar13 != piVar11) {
        local_a0 = 0;
        lVar19 = 0;
        goto LAB_001050b3;
      }
      ReindexVerts(this,(Vec *)&local_78,uVar8);
      local_a0 = 0;
      goto LAB_00104dd6;
    }
    uVar12 = 0;
    if ((uVar18 & 1) == 0) {
LAB_00105088:
      do {
        piVar11[uVar12] = (int)uVar12;
        lVar19 = uVar12 + 1;
        uVar12 = uVar12 + 2;
        piVar11[lVar19] = (int)lVar19;
      } while (uVar18 != uVar12);
    }
    else {
      *piVar11 = 0;
      uVar12 = 1;
      if (uVar18 != 1) goto LAB_00105088;
    }
    lVar19 = (long)__size >> 4;
    local_a0 = __size;
    if (piVar13 != piVar11) {
LAB_001050b3:
      std::_Temporary_buffer<int*,int>::_Temporary_buffer
                ((_Temporary_buffer<int*,int> *)&local_58,piVar11,(long)(uVar18 + 1) >> 1);
      if (local_58 == local_50) {
        uVar18 = local_50 * 4;
        std::
        __stable_sort_adaptive<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
                  (piVar11,piVar11 + local_50,piVar13,local_48);
      }
      else {
        if (local_48 == (void *)0x0) {
          std::
          __inplace_stable_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
                    (piVar11,piVar13,&local_98);
        }
        else {
          std::
          __stable_sort_adaptive_resize<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortVerts()::_lambda(int_const&,int_const&)_1_>>
                    (piVar11,piVar13,local_48,local_50);
        }
        uVar18 = local_50 << 2;
      }
      operator_delete(local_48,uVar18);
      ReindexVerts(this,(Vec *)&local_78,uVar8);
      goto joined_r0x0010512b;
    }
    ReindexVerts(this,(Vec *)&local_78,uVar8);
    if (lVar19 == 0) goto LAB_00104dd6;
    do {
      if (*(int *)((long)local_98 + (long)*local_b8 * 4) == -1) goto LAB_00104de0;
      if (*(int *)((long)local_98 + (long)local_b8[1] * 4) == -1) {
        local_b8 = local_b8 + 1;
        goto LAB_00104de0;
      }
      if (*(int *)((long)local_98 + (long)local_b8[2] * 4) == -1) {
        local_b8 = local_b8 + 2;
        goto LAB_00104de0;
      }
      if (*(int *)((long)local_98 + (long)local_b8[3] * 4) == -1) {
        local_b8 = local_b8 + 3;
        goto LAB_00104de0;
      }
      local_b8 = local_b8 + 4;
      lVar19 = lVar19 + -1;
joined_r0x0010512b:
    } while (lVar19 != 0);
    lVar19 = (long)piVar13 - (long)local_b8;
    if (lVar19 == 8) {
LAB_001054a8:
      if (*(int *)((long)local_98 + (long)*local_b8 * 4) != -1) {
        local_b8 = local_b8 + 1;
LAB_0010547e:
        if (*(int *)((long)local_98 + (long)*local_b8 * 4) != -1) goto LAB_00104dd6;
      }
    }
    else {
      if (lVar19 != 0xc) {
        if (lVar19 != 4) goto LAB_00104dd6;
        goto LAB_0010547e;
      }
      if (*(int *)((long)local_98 + (long)*local_b8 * 4) != -1) {
        local_b8 = local_b8 + 1;
        goto LAB_001054a8;
      }
    }
  }
LAB_00104de0:
  __size_00 = (long)local_b8 - (long)piVar11;
  uVar18 = (long)__size_00 >> 2;
  if (uStack_68 < uVar18) {
    piVar13 = (int *)malloc(__size_00);
    if (uVar8 == 0) {
      if (piVar11 != (int *)0x0) {
        free(piVar11);
        local_78 = piVar13;
        uStack_68 = uVar18;
        goto LAB_00104e0e;
      }
      piVar11 = (int *)((long)piVar13 + __size_00);
      local_78 = piVar13;
      uStack_68 = uVar18;
LAB_00104e1f:
      __src = local_78;
      memset(piVar13,0,(long)piVar11 - (long)piVar13);
    }
    else {
      if ((long)local_a0 < 5) {
        if (local_a0 == 4) {
          *piVar13 = *piVar11;
          goto LAB_00105562;
        }
        if (piVar11 != (int *)0x0) goto LAB_00105562;
      }
      else {
        piVar13 = (int *)memmove(piVar13,piVar11,__size);
LAB_00105562:
        free(piVar11);
      }
      local_78 = piVar13;
      uStack_68 = uVar18;
      __src = piVar13;
      if (uVar8 < uVar18) goto LAB_00104e0e;
    }
joined_r0x0010559d:
    piVar13 = __src;
    piVar11 = local_78;
    local_70 = uVar18;
    uVar12 = uStack_68;
    if (uVar8 <= uVar18 * 2) goto LAB_00104e45;
LAB_001055a3:
    local_70 = uVar18;
    piVar13 = (int *)malloc(__size_00);
    if ((long)__size_00 < 5) {
      if (__size_00 != 4) goto LAB_00104eb6;
      *piVar13 = *__src;
    }
    else {
      memmove(piVar13,__src,__size_00);
    }
  }
  else {
    if (uVar8 < uVar18) {
LAB_00104e0e:
      piVar11 = (int *)((long)local_78 + __size_00);
      piVar13 = local_78 + uVar8;
      __src = local_78;
      if (piVar11 != piVar13) goto LAB_00104e1f;
      goto joined_r0x0010559d;
    }
    piVar13 = local_78;
    piVar11 = local_78;
    local_70 = uVar18;
    uVar12 = uStack_68;
    if (uVar8 <= uVar18 * 2) goto LAB_00104e45;
    __src = local_78;
    if (uVar18 != 0) goto LAB_001055a3;
    piVar13 = (int *)0x0;
LAB_00104eb6:
    piVar11 = piVar13;
    uVar12 = uVar18;
    if (__src == (int *)0x0) goto LAB_00104e45;
  }
  free(__src);
  piVar11 = piVar13;
  uVar12 = uVar18;
LAB_00104e45:
  uStack_68 = uVar12;
  local_78 = piVar11;
  Permute<linalg::vec<double,3>,int>((Vec *)(this + 0x48),(Vec *)&local_78);
  if (*(ulong *)(this + 0x80) == uVar8) {
    Permute<linalg::vec<double,3>,int>((Vec *)(this + 0x78),(Vec *)&local_78);
  }
  if (piVar13 != (int *)0x0) {
    free(piVar13);
  }
  if (local_98 != (void *)0x0) {
    free(local_98);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_adaptive_resize<int*, long, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,
   manifold::Vec<unsigned int>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, long,
   long, int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,
   manifold::Vec<unsigned int>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __merge_adaptive_resize<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
               (int *param_1,int *param_2,undefined8 param_3,long param_4,long param_5,int *param_6,
               long param_7,undefined8 param_8)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  int *local_68;
  
  lVar3 = param_5;
  if (param_4 <= param_5) {
    lVar3 = param_4;
  }
  if (param_7 < lVar3) {
    piVar2 = param_2;
    local_68 = param_1;
    if (param_4 <= param_5) goto LAB_0010587b;
    do {
      lVar4 = param_4 / 2;
      piVar1 = local_68 + lVar4;
      param_2 = __lower_bound<int*,int,__gnu_cxx::__ops::_Iter_comp_val<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                          (piVar2,param_3,*piVar1,param_8);
      lVar3 = (long)param_2 - (long)piVar2 >> 2;
      while( true ) {
        param_4 = param_4 - lVar4;
        param_5 = param_5 - lVar3;
        param_1 = __rotate_adaptive<int*,int*,long>
                            (piVar1,piVar2,param_2,param_4,lVar3,param_6,param_7);
        __merge_adaptive_resize<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                  (local_68,piVar1,param_1,lVar4,lVar3,param_6,param_7,param_8);
        lVar3 = param_5;
        if (param_4 <= param_5) {
          lVar3 = param_4;
        }
        if (lVar3 <= param_7) goto LAB_001058e5;
        piVar2 = param_2;
        local_68 = param_1;
        if (param_5 < param_4) break;
LAB_0010587b:
        lVar3 = param_5 / 2;
        param_2 = piVar2 + lVar3;
        piVar1 = __upper_bound<int*,int,__gnu_cxx::__ops::_Val_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                           (local_68,piVar2,*param_2,param_8);
        lVar4 = (long)piVar1 - (long)local_68 >> 2;
      }
    } while( true );
  }
LAB_001058e5:
  __merge_adaptive<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
            (param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__stable_sort_adaptive_resize<int*, int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,
   manifold::Vec<unsigned int>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,
   manifold::Vec<unsigned int>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __stable_sort_adaptive_resize<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
               (long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = ((param_2 - param_1 >> 2) + 1) / 2;
  lVar2 = lVar3 * 4;
  lVar1 = param_1 + lVar2;
  if (param_4 < lVar3) {
    __stable_sort_adaptive_resize<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
              (param_1,lVar1,param_3);
    __stable_sort_adaptive_resize<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
              (lVar1,param_2,param_3,param_4,param_5);
    __merge_adaptive_resize<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
              (param_1,lVar1,param_2,lVar2 >> 2,param_2 - lVar1 >> 2,param_3,param_4,param_5);
    return;
  }
  __stable_sort_adaptive<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
            (param_1,lVar1,param_2,param_3);
  return;
}



/* manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&, manifold::Vec<unsigned int>&)
    */

void __thiscall manifold::Manifold::Impl::SortFaces(Impl *this,Vec *param_1,Vec *param_2)

{
  size_t __size;
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  size_t sVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  int *local_78;
  undefined1 local_70 [16];
  long local_58;
  long local_50;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(ulong *)(this + 0x68);
  local_70 = (undefined1  [16])0x0;
  local_70._8_8_ = 0;
  local_78 = (int *)0x0;
  uVar8 = uVar1 / 3;
  sVar10 = uVar8 * 4;
  if (2 < uVar1) {
    local_78 = (int *)malloc(sVar10);
    local_70._8_8_ = uVar8;
  }
  piVar6 = local_78;
  piVar5 = local_78 + uVar8;
  uVar11 = (long)sVar10 >> 2;
  iVar9 = (int)uVar11;
  piVar4 = piVar6;
  local_70._0_8_ = uVar8;
  if (uVar11 == 0) {
    if (piVar5 != local_78) goto LAB_00105ab1;
    piVar6 = (int *)0x0;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    uVar11 = 0;
    piVar5 = local_78;
    if (uVar1 < 3) goto LAB_00105be8;
LAB_00105d5e:
    if (piVar5 == (int *)0x0) {
      local_70._8_8_ = uVar11;
      piVar5 = piVar6;
      local_78 = piVar6;
      goto LAB_00105be8;
    }
  }
  else {
    uVar3 = 0;
    if ((uVar11 & 1) == 0) {
LAB_00105a90:
      do {
        local_78[uVar3] = (int)uVar3;
        lVar7 = uVar3 + 1;
        uVar3 = uVar3 + 2;
        local_78[lVar7] = (int)lVar7;
      } while (uVar11 != uVar3);
    }
    else {
      *local_78 = 0;
      uVar3 = 1;
      if (uVar11 != 1) goto LAB_00105a90;
    }
    if (piVar5 == local_78) {
      uVar3 = uVar11;
      if (sVar10 != 0) goto LAB_00105b21;
    }
    else {
LAB_00105ab1:
      std::_Temporary_buffer<int*,int>::_Temporary_buffer
                ((_Temporary_buffer<int*,int> *)&local_58,local_78,(long)(uVar11 + 1) >> 1);
      if (local_58 == local_50) {
        uVar3 = local_50 * 4;
        std::
        __stable_sort_adaptive<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                  (piVar6,piVar6 + local_50,piVar5,local_48,param_2);
      }
      else {
        if (local_48 == (void *)0x0) {
          std::
          __inplace_stable_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                    (piVar6,piVar5,param_2);
        }
        else {
          std::
          __stable_sort_adaptive_resize<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::SortFaces(manifold::Vec<manifold::Box>&,manifold::Vec<unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                    (piVar6,piVar5,local_48,local_50,param_2);
        }
        uVar3 = local_50 << 2;
      }
      operator_delete(local_48,uVar3);
      uVar3 = (long)sVar10 >> 4;
      if ((long)sVar10 >> 4 != 0) {
LAB_00105b21:
        lVar7 = *(long *)param_2;
        do {
          if (*(int *)(lVar7 + (long)*piVar4 * 4) == -1) goto LAB_00105b78;
          if (*(int *)(lVar7 + (long)piVar4[1] * 4) == -1) {
            iVar9 = (int)((long)piVar4 + (4 - (long)piVar6) >> 2);
            goto LAB_00105b82;
          }
          if (*(int *)(lVar7 + (long)piVar4[2] * 4) == -1) {
            iVar9 = (int)((long)piVar4 + (8 - (long)piVar6) >> 2);
            goto LAB_00105b82;
          }
          if (*(int *)(lVar7 + (long)piVar4[3] * 4) == -1) {
            iVar9 = (int)((long)piVar4 + (0xc - (long)piVar6) >> 2);
            goto LAB_00105b82;
          }
          piVar4 = piVar4 + 4;
        } while (piVar4 != piVar6 + uVar3 * 4);
        uVar11 = (long)piVar5 - (long)piVar4 >> 2;
      }
      if (uVar11 == 2) {
        lVar7 = *(long *)param_2;
LAB_00105f33:
        if (*(int *)(lVar7 + (long)*piVar4 * 4) != -1) {
          piVar4 = piVar4 + 1;
LAB_00105e55:
          if (*(int *)(lVar7 + (long)*piVar4 * 4) != -1) goto LAB_00105b82;
        }
      }
      else {
        if (uVar11 != 3) {
          if (uVar11 != 1) goto LAB_00105b82;
          lVar7 = *(long *)param_2;
          goto LAB_00105e55;
        }
        lVar7 = *(long *)param_2;
        if (*(int *)(lVar7 + (long)*piVar4 * 4) != -1) {
          piVar4 = piVar4 + 1;
          goto LAB_00105f33;
        }
      }
LAB_00105b78:
      iVar9 = (int)((long)piVar4 - (long)piVar6 >> 2);
    }
LAB_00105b82:
    uVar11 = (ulong)iVar9;
    uVar3 = uVar11 * 2;
    if ((ulong)local_70._8_8_ < uVar11) {
      __size = uVar11 * 4;
      piVar5 = (int *)malloc(__size);
      if (uVar1 < 3) {
LAB_00105c99:
        if (piVar6 != (int *)0x0) goto LAB_00105db2;
      }
      else {
        if ((long)sVar10 < 5) {
          if (sVar10 != 4) goto LAB_00105c99;
          *piVar5 = *piVar6;
        }
        else {
          memmove(piVar5,piVar6,sVar10);
        }
LAB_00105db2:
        free(piVar6);
      }
      local_78 = piVar5;
      local_70._8_8_ = uVar11;
      if (uVar8 < uVar11) goto LAB_00105bae;
      local_70._0_8_ = uVar11;
      if (uVar8 <= uVar3) goto LAB_00105be8;
      piVar6 = (int *)malloc(__size);
      if (__size == 4) goto LAB_00105f09;
    }
    else {
      if (uVar8 < uVar11) {
LAB_00105bae:
        piVar5 = local_78;
        if (local_78 + uVar8 != local_78 + uVar11) {
          memset(local_78 + uVar8,0,uVar11 * 4 + uVar8 * -4);
        }
        local_70._0_8_ = uVar11;
        if (uVar8 <= uVar3) goto LAB_00105be8;
      }
      else {
        local_70._0_8_ = uVar11;
        piVar5 = local_78;
        if (uVar8 <= uVar3) goto LAB_00105be8;
        if (uVar11 == 0) {
          piVar6 = (int *)0x0;
          goto LAB_00105d5e;
        }
      }
      sVar10 = uVar11 * 4;
      piVar6 = (int *)malloc(sVar10);
      if ((long)sVar10 < 5) {
        if (sVar10 != 4) goto LAB_00105d5e;
LAB_00105f09:
        *piVar6 = *piVar5;
        goto LAB_00105cf7;
      }
    }
    memmove(piVar6,piVar5,uVar11 * 4);
  }
LAB_00105cf7:
  free(piVar5);
  local_70._8_8_ = uVar11;
  piVar5 = piVar6;
  local_78 = piVar6;
LAB_00105be8:
  Permute<unsigned_int,int>(param_2,(Vec *)&local_78);
  Permute<manifold::Box,int>(param_1,(Vec *)&local_78);
  GatherFaces(this,(Vec *)&local_78);
  if (piVar5 == (int *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    free(piVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Impl::Finish() */

void __thiscall manifold::Manifold::Impl::Finish(Impl *this)

{
  void *__ptr;
  long in_FS_OFFSET;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined1 local_a0 [16];
  void *local_88;
  undefined1 local_80 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x68) != 0) {
    manifold::Manifold::Impl::CalculateBBox();
    manifold::Manifold::Impl::SetEpsilon(*(double *)(this + 0x30),SUB81(this,0));
    if ((((_LC17 < (double)(*(ulong *)this & _LC16) ||
           _LC17 < (double)(*(ulong *)(this + 8) & _LC16)) ||
         (_LC17 < (double)(*(ulong *)(this + 0x10) & _LC16))) ||
        (_LC17 < (double)(*(ulong *)(this + 0x18) & _LC16) ||
         _LC17 < (double)(*(ulong *)(this + 0x20) & _LC16))) ||
       (_LC17 < (double)(_LC16 & *(ulong *)(this + 0x28)))) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        manifold::Manifold::Impl::MarkFailure(this,0);
        return;
      }
      goto LAB_0010625b;
    }
    SortVerts(this);
    local_a0 = (undefined1  [16])0x0;
    local_80 = (undefined1  [16])0x0;
    local_a8 = (void *)0x0;
    local_88 = (void *)0x0;
    GetFaceBoxMorton(this,(Vec *)&local_a8,(Vec *)&local_88);
    SortFaces(this,(Vec *)&local_a8,(Vec *)&local_88);
    if (*(long *)(this + 0x68) == 0) {
      if (local_88 != (void *)0x0) {
        free(local_88);
      }
      if (local_a8 != (void *)0x0) {
        __ptr = local_a8;
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00106115:
          free(__ptr);
          return;
        }
        goto LAB_0010625b;
      }
    }
    else {
      CompactProps(this);
      manifold::Manifold::Impl::CalculateNormals();
      __ptr = local_a8;
      local_b8 = local_88;
      local_c8 = local_a8;
      local_b0 = local_80._0_8_;
      local_c0 = local_a0._0_8_;
      Collider::Collider((Collider *)&local_68,(VecView *)&local_c8,(VecView *)&local_b8);
      if (*(void **)(this + 0x140) != (void *)0x0) {
        free(*(void **)(this + 0x140));
      }
      *(undefined8 *)(this + 0x140) = local_68;
      *(undefined8 *)(this + 0x148) = local_60;
      *(undefined8 *)(this + 0x150) = uStack_58;
      if (*(void **)(this + 0x158) != (void *)0x0) {
        free(*(void **)(this + 0x158));
      }
      *(undefined8 *)(this + 0x158) = local_50;
      *(undefined8 *)(this + 0x160) = local_48;
      *(undefined8 *)(this + 0x168) = uStack_40;
      if (*(void **)(this + 0x170) != (void *)0x0) {
        free(*(void **)(this + 0x170));
      }
      *(undefined8 *)(this + 0x170) = local_38;
      *(undefined8 *)(this + 0x178) = local_30;
      *(undefined8 *)(this + 0x180) = uStack_28;
      if (local_88 != (void *)0x0) {
        free(local_88);
      }
      if (__ptr != (void *)0x0) {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00106115;
        goto LAB_0010625b;
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010625b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_adaptive_resize<int*, long, int*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::MergeMeshGLP<float, unsigned int>(manifold::MeshGLP<float, unsigned
   int>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, long, long, int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::MergeMeshGLP<float, unsigned
   int>(manifold::MeshGLP<float, unsigned int>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __merge_adaptive_resize<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
               (int *param_1,int *param_2,undefined8 param_3,long param_4,long param_5,int *param_6,
               long param_7,undefined8 param_8)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  int *local_68;
  
  lVar3 = param_5;
  if (param_4 <= param_5) {
    lVar3 = param_4;
  }
  if (param_7 < lVar3) {
    piVar2 = param_2;
    local_68 = param_1;
    if (param_4 <= param_5) goto LAB_0010637b;
    do {
      lVar4 = param_4 / 2;
      piVar1 = local_68 + lVar4;
      param_2 = __lower_bound<int*,int,__gnu_cxx::__ops::_Iter_comp_val<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                          (piVar2,param_3,*piVar1,param_8);
      lVar3 = (long)param_2 - (long)piVar2 >> 2;
      while( true ) {
        param_4 = param_4 - lVar4;
        param_5 = param_5 - lVar3;
        param_1 = __rotate_adaptive<int*,int*,long>
                            (piVar1,piVar2,param_2,param_4,lVar3,param_6,param_7);
        __merge_adaptive_resize<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                  (local_68,piVar1,param_1,lVar4,lVar3,param_6,param_7,param_8);
        lVar3 = param_5;
        if (param_4 <= param_5) {
          lVar3 = param_4;
        }
        if (lVar3 <= param_7) goto LAB_001063e5;
        piVar2 = param_2;
        local_68 = param_1;
        if (param_5 < param_4) break;
LAB_0010637b:
        lVar3 = param_5 / 2;
        param_2 = piVar2 + lVar3;
        piVar1 = __upper_bound<int*,int,__gnu_cxx::__ops::_Val_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                           (local_68,piVar2,*param_2,param_8);
        lVar4 = (long)piVar1 - (long)local_68 >> 2;
      }
    } while( true );
  }
LAB_001063e5:
  __merge_adaptive<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
            (param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__stable_sort_adaptive_resize<int*, int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::MergeMeshGLP<float, unsigned
   int>(manifold::MeshGLP<float, unsigned int>&)::{lambda(int const&, int const&)#1}> >(int*, int*,
   int*, long, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::MergeMeshGLP<float, unsigned
   int>(manifold::MeshGLP<float, unsigned int>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __stable_sort_adaptive_resize<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
               (long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = ((param_2 - param_1 >> 2) + 1) / 2;
  lVar2 = lVar3 * 4;
  lVar1 = param_1 + lVar2;
  if (param_4 < lVar3) {
    __stable_sort_adaptive_resize<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
              (param_1,lVar1,param_3);
    __stable_sort_adaptive_resize<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
              (lVar1,param_2,param_3,param_4,param_5);
    __merge_adaptive_resize<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
              (param_1,lVar1,param_2,lVar2 >> 2,param_2 - lVar1 >> 2,param_3,param_4,param_5);
    return;
  }
  __stable_sort_adaptive<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
            (param_1,lVar1,param_2,param_3);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_adaptive_resize<int*, long, int*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::MergeMeshGLP<double, unsigned long>(manifold::MeshGLP<double, unsigned
   long>&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, long, long, int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::MergeMeshGLP<double, unsigned
   long>(manifold::MeshGLP<double, unsigned long>&)::{lambda(int const&, int const&)#1}>) */

void std::
     __merge_adaptive_resize<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
               (int *param_1,int *param_2,undefined8 param_3,long param_4,long param_5,int *param_6,
               long param_7,undefined8 param_8)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  int *local_68;
  
  lVar3 = param_5;
  if (param_4 <= param_5) {
    lVar3 = param_4;
  }
  if (param_7 < lVar3) {
    piVar2 = param_2;
    local_68 = param_1;
    if (param_4 <= param_5) goto LAB_001065fb;
    do {
      lVar4 = param_4 / 2;
      piVar1 = local_68 + lVar4;
      param_2 = __lower_bound<int*,int,__gnu_cxx::__ops::_Iter_comp_val<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
                          (piVar2,param_3,*piVar1,param_8);
      lVar3 = (long)param_2 - (long)piVar2 >> 2;
      while( true ) {
        param_4 = param_4 - lVar4;
        param_5 = param_5 - lVar3;
        param_1 = __rotate_adaptive<int*,int*,long>
                            (piVar1,piVar2,param_2,param_4,lVar3,param_6,param_7);
        __merge_adaptive_resize<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
                  (local_68,piVar1,param_1,lVar4,lVar3,param_6,param_7,param_8);
        lVar3 = param_5;
        if (param_4 <= param_5) {
          lVar3 = param_4;
        }
        if (lVar3 <= param_7) goto LAB_00106665;
        piVar2 = param_2;
        local_68 = param_1;
        if (param_5 < param_4) break;
LAB_001065fb:
        lVar3 = param_5 / 2;
        param_2 = piVar2 + lVar3;
        piVar1 = __upper_bound<int*,int,__gnu_cxx::__ops::_Val_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
                           (local_68,piVar2,*param_2,param_8);
        lVar4 = (long)piVar1 - (long)local_68 >> 2;
      }
    } while( true );
  }
LAB_00106665:
  __merge_adaptive<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
            (param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__stable_sort_adaptive_resize<int*, int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::MergeMeshGLP<double, unsigned
   long>(manifold::MeshGLP<double, unsigned long>&)::{lambda(int const&, int const&)#1}> >(int*,
   int*, int*, long, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::MergeMeshGLP<double,
   unsigned long>(manifold::MeshGLP<double, unsigned long>&)::{lambda(int const&, int const&)#1}>)
    */

void std::
     __stable_sort_adaptive_resize<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
               (long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = ((param_2 - param_1 >> 2) + 1) / 2;
  lVar2 = lVar3 * 4;
  lVar1 = param_1 + lVar2;
  if (param_4 < lVar3) {
    __stable_sort_adaptive_resize<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
              (param_1,lVar1,param_3);
    __stable_sort_adaptive_resize<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
              (lVar1,param_2,param_3,param_4,param_5);
    __merge_adaptive_resize<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
              (param_1,lVar1,param_2,lVar2 >> 2,param_2 - lVar1 >> 2,param_3,param_4,param_5);
    return;
  }
  __stable_sort_adaptive<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
            (param_1,lVar1,param_2,param_3);
  return;
}



/* void manifold::for_each<manifold::CountingIterator<unsigned long>,
   manifold::collider_internal::FindCollision<manifold::Box, true,
   manifold::collider_internal::SeqCollisionRecorder<false> > >(manifold::ExecutionPolicy,
   manifold::CountingIterator<unsigned long>, manifold::CountingIterator<unsigned long>,
   manifold::collider_internal::FindCollision<manifold::Box, true,
   manifold::collider_internal::SeqCollisionRecorder<false> >) [clone .isra.0] */

void manifold::
     for_each<manifold::CountingIterator<unsigned_long>,manifold::collider_internal::FindCollision<manifold::Box,true,manifold::collider_internal::SeqCollisionRecorder<false>>>
               (long param_1,long param_2,long *param_3)

{
  double *pdVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  size_t __n;
  ulong uVar8;
  SparseIndices *pSVar9;
  int iVar10;
  ulong uVar11;
  double *pdVar12;
  long lVar13;
  undefined1 *__dest;
  ulong uVar14;
  int iVar15;
  undefined1 *__src;
  int iVar16;
  int iVar17;
  long in_FS_OFFSET;
  size_t local_1d8;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  SparseIndices *local_158;
  int aiStack_148 [66];
  long local_40;
  
  lVar5 = param_3[4];
  lVar6 = *param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_180 = param_3[1];
  lVar7 = param_3[2];
  local_170 = param_3[3];
  local_160 = param_3[5];
  local_158 = (SparseIndices *)param_3[6];
  local_188 = lVar6;
  local_178 = lVar7;
  local_168 = lVar5;
  if (param_2 != param_1) {
    do {
      pSVar9 = local_158;
      iVar17 = (int)param_1;
      iVar15 = -1;
      pdVar1 = (double *)(lVar6 + (long)iVar17 * 0x30);
      iVar16 = 1;
LAB_00106820:
      do {
        piVar2 = (int *)(lVar5 + (long)((iVar16 + -1) / 2) * 8);
        iVar3 = *piVar2;
        uVar4 = piVar2[1];
        iVar10 = collider_internal::
                 FindCollision<manifold::Box,true,manifold::collider_internal::SeqCollisionRecorder<false>>
                 ::RecordCollision((FindCollision<manifold::Box,true,manifold::collider_internal::SeqCollisionRecorder<false>>
                                    *)&local_188,iVar3,iVar17,pSVar9);
        uVar11 = (ulong)(int)uVar4;
        pdVar12 = (double *)(uVar11 * 0x30 + lVar7);
        if (((((*pdVar12 <= pdVar1[3]) && (pdVar12[1] <= pdVar1[4])) && (pdVar12[2] <= pdVar1[5]))
            && ((*pdVar1 <= pdVar12[3] && (pdVar1[1] <= pdVar12[4])))) && (pdVar1[2] <= pdVar12[5]))
        {
          if (((uVar11 & 1) == 0) && ((int)uVar4 / 2 != iVar17)) {
            __n = *(size_t *)(pSVar9 + 8);
            uVar8 = *(ulong *)(pSVar9 + 0x10);
            uVar14 = __n + 8;
            if (uVar14 < uVar8) {
LAB_0010692a:
              __dest = *(undefined1 **)pSVar9;
            }
            else {
              if (uVar8 == 0) {
                local_1d8 = 0x80;
              }
              else {
                local_1d8 = uVar8 * 2;
                if (uVar8 * 2 < uVar14) {
                  local_1d8 = uVar14;
                }
                if (local_1d8 <= uVar8) goto LAB_0010692a;
              }
              __dest = (undefined1 *)malloc(local_1d8);
              __src = *(undefined1 **)pSVar9;
              if (__n != 0) {
                if ((long)__n < 2) {
                  if (__n == 1) {
                    *__dest = *__src;
                    __src = *(undefined1 **)pSVar9;
                  }
                }
                else {
                  __dest = (undefined1 *)memmove(__dest,__src,__n);
                  __src = *(undefined1 **)pSVar9;
                }
              }
              uVar11 = (ulong)uVar4;
              if (__src != (undefined1 *)0x0) {
                free(__src);
              }
              *(undefined1 **)pSVar9 = __dest;
              *(size_t *)(pSVar9 + 0x10) = local_1d8;
              uVar14 = *(long *)(pSVar9 + 8) + 8;
            }
            *(ulong *)(pSVar9 + 8) = uVar14;
            *(long *)(__dest + ((uVar14 & 0xfffffffffffffff8) - 8)) =
                 (long)((int)uVar4 / 2) | (long)iVar17 << 0x20;
          }
          iVar16 = (int)uVar11;
          uVar4 = (uint)(uVar11 >> 0x1f) & 1;
          if ((iVar16 + uVar4 & 1) - uVar4 == 1) {
            if (iVar10 != 0) {
              iVar15 = iVar15 + 1;
              aiStack_148[iVar15] = iVar16;
              iVar16 = iVar3;
            }
            goto LAB_00106820;
          }
        }
        iVar16 = iVar3;
      } while (iVar10 != 0);
      if (-1 < iVar15) {
        lVar13 = (long)iVar15;
        iVar15 = iVar15 + -1;
        iVar16 = aiStack_148[lVar13];
        goto LAB_00106820;
      }
      param_1 = param_1 + 1;
    } while (param_2 != param_1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool (anonymous namespace)::MergeMeshGLP<float, unsigned int>(manifold::MeshGLP<float, unsigned
   int>&) */

bool (anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(MeshGLP *param_1)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  size_t __size;
  float fVar4;
  float fVar5;
  char cVar6;
  undefined4 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  void *pvVar12;
  void *__ptr;
  uint uVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long lVar16;
  _Rb_tree_node_base *p_Var17;
  void *pvVar18;
  undefined4 *puVar19;
  size_t __size_00;
  double *pdVar20;
  int *__ptr_00;
  int iVar21;
  float *pfVar22;
  uint uVar23;
  int iVar24;
  undefined1 (*pauVar25) [16];
  ulong uVar26;
  int *piVar27;
  int iVar28;
  long lVar29;
  int *piVar30;
  long lVar31;
  long in_FS_OFFSET;
  bool bVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  double dVar47;
  undefined4 *local_298;
  ulong local_248;
  ulong local_240;
  int local_1ec;
  undefined4 *local_1e8;
  long local_1e0;
  long lStack_1d8;
  void *local_1c8;
  long local_1c0;
  long lStack_1b8;
  void *local_1a8;
  long local_1a0;
  long lStack_198;
  int *local_188;
  long local_180;
  long lStack_178;
  int *local_168;
  undefined1 local_160 [16];
  _Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
  local_148 [8];
  undefined4 local_140 [2];
  _Rb_tree_node *local_138;
  _Rb_tree_node_base *local_130;
  _Rb_tree_node_base *local_128;
  long local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double adStack_100 [3];
  void *local_e8;
  long local_e0;
  void *local_d8;
  void *local_d0;
  void *local_c8;
  undefined8 local_c0;
  VecView *local_b8;
  void *local_a8;
  void *local_a0;
  void *local_98;
  void *local_90;
  void *local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  puVar14 = (undefined4 *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 2;
  local_248 = SUB168(auVar8 / ZEXT416(*(uint *)param_1),0);
  local_140[0] = 0;
  local_138 = (_Rb_tree_node *)0x0;
  local_120 = 0;
  uVar13 = SUB164(auVar8 / ZEXT416(*(uint *)param_1),0);
  uVar15 = (ulong)uVar13;
  local_240 = uVar15;
  local_130 = (_Rb_tree_node_base *)local_140;
  local_128 = (_Rb_tree_node_base *)local_140;
  if (uVar13 != 0) {
    local_240 = uVar15 * 4;
    puVar14 = (undefined4 *)operator_new(local_240);
    *puVar14 = 0;
    puVar7 = puVar14 + 1;
    if (uVar15 == 1) {
      local_240 = 4;
      puVar19 = puVar7;
    }
    else {
      puVar19 = puVar14 + uVar15;
      if (puVar7 != puVar19) {
        memset(puVar7,0,local_240 - 4);
      }
    }
    local_248 = (ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 2) /
                (ulong)*(uint *)param_1;
    if (puVar19 != puVar14) {
      uVar15 = 0;
      do {
        puVar14[uVar15] = (int)uVar15;
        bVar32 = uVar15 != (ulong)((long)puVar19 + (-4 - (long)puVar14)) >> 2;
        uVar15 = uVar15 + 1;
      } while (bVar32);
    }
  }
  lVar29 = *(long *)(param_1 + 0x40);
  lVar31 = *(long *)(param_1 + 0x38);
  if (lVar31 != lVar29) {
    lVar16 = *(long *)(param_1 + 0x50);
    uVar15 = 0;
    do {
      lVar1 = uVar15 * 4;
      lVar2 = uVar15 * 4;
      uVar15 = uVar15 + 1;
      puVar14[*(uint *)(lVar31 + lVar1)] = *(undefined4 *)(lVar16 + lVar2);
    } while (uVar15 < (ulong)(lVar29 - lVar31 >> 2));
  }
  lVar29 = *(long *)(param_1 + 0x20);
  local_58 = 0;
  local_60 = _LC18;
  uVar15 = (ulong)(*(long *)(param_1 + 0x28) - lVar29 >> 2) / 3;
  if ((int)uVar15 != 0) {
    lVar31 = 0;
    while( true ) {
      local_48 = 2;
      local_50 = _LC0;
      lVar16 = 1;
      piVar27 = (int *)&local_50;
      while( true ) {
        uVar43 = puVar14[*(uint *)(lVar29 + (lVar16 + lVar31) * 4)];
        uVar44 = puVar14[*(uint *)(lVar29 + (*piVar27 + lVar31) * 4)];
        local_a8 = (void *)CONCAT44(uVar44,uVar43);
        p_Var17 = (_Rb_tree_node_base *)
                  std::
                  _Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
                  ::find(local_148,(pair *)&local_a8);
        if (p_Var17 == (_Rb_tree_node_base *)local_140) {
          local_a8 = (void *)CONCAT44(uVar43,uVar44);
          std::
          _Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
          ::_M_insert_equal<std::pair<int,int>const&>(local_148,(pair *)&local_a8);
        }
        else {
          pvVar18 = (void *)std::_Rb_tree_rebalance_for_erase
                                      (p_Var17,(_Rb_tree_node_base *)local_140);
          operator_delete(pvVar18,0x28);
          local_120 = local_120 + -1;
        }
        piVar27 = piVar27 + 1;
        if (piVar27 == &local_44) break;
        lVar29 = *(long *)(param_1 + 0x20);
        lVar16 = (long)*(int *)((long)&local_60 + (long)*piVar27 * 4);
      }
      lVar31 = lVar31 + 3;
      if (lVar31 == (uVar15 & 0xffffffff) * 3) break;
      lVar29 = *(long *)(param_1 + 0x20);
    }
  }
  lVar29 = local_120;
  bVar32 = false;
  if (local_120 == 0) goto LAB_00106df5;
  __size = local_120 * 4;
  puVar19 = (undefined4 *)malloc(__size);
  puVar7 = puVar19;
  local_1e8 = puVar19;
  local_1e0 = lVar29;
  lStack_1d8 = lVar29;
  p_Var17 = local_130;
  while (p_Var17 != (_Rb_tree_node_base *)local_140) {
    *puVar7 = *(undefined4 *)(p_Var17 + 0x20);
    p_Var17 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var17);
    puVar7 = puVar7 + 1;
  }
  puVar7 = *(undefined4 **)(param_1 + 8);
  __size_00 = *(long *)(param_1 + 0x10) - (long)puVar7;
  if (__size_00 == 0) {
    local_298 = (undefined4 *)0x0;
  }
  else {
    local_298 = (undefined4 *)malloc(__size_00);
    if ((long)__size_00 < 5) {
      if (__size_00 == 4) {
        *local_298 = *puVar7;
      }
    }
    else {
      memcpy(local_298,puVar7,__size_00);
    }
  }
  local_48 = 2;
  piVar27 = (int *)&local_50;
  local_50 = _LC0;
  uVar13 = *(uint *)param_1;
  local_118 = _LC5;
  dStack_110 = _LC5;
  uVar15 = (ulong)(int)uVar13;
  local_108 = _LC5;
  adStack_100[0] = _LC8;
  adStack_100[1] = _LC8;
  adStack_100[2] = _LC8;
  do {
    iVar21 = *piVar27;
    pfVar22 = (float *)(local_298 + iVar21);
    lVar31 = ((((long)(__size_00 + (long)iVar21 * -4) >> 2) + ((ulong)uVar13 - 1)) / (ulong)uVar13)
             * uVar15 * 4;
    pfVar3 = (float *)((long)pfVar22 + lVar31);
    dVar34 = _LC5;
    dVar35 = _LC8;
    while (dVar40 = dVar34, 3 < (long)((ulong)(lVar31 >> 2) / uVar15)) {
      fVar4 = pfVar22[uVar15];
      fVar5 = *pfVar22;
      dVar34 = (double)fVar5;
      dVar36 = (double)fVar4;
      dVar33 = dVar34;
      if ((fVar4 <= fVar5) && (dVar36 = dVar34, dVar33 = (double)fVar4, fVar5 <= fVar4)) {
        dVar33 = dVar34;
      }
      fVar4 = pfVar22[uVar15 * 3];
      fVar5 = pfVar22[uVar15 * 2];
      dVar34 = (double)fVar5;
      dVar37 = (double)fVar4;
      if ((fVar4 <= fVar5) && (dVar37 = dVar34, fVar4 < fVar5)) {
        dVar34 = (double)fVar4;
      }
      pfVar22 = pfVar22 + uVar15 * 4;
      if (dVar37 <= dVar36) {
        dVar37 = dVar36;
      }
      lVar31 = (long)pfVar3 - (long)pfVar22;
      if (dVar33 <= dVar34) {
        dVar34 = dVar33;
      }
      if (dVar37 <= dVar35) {
        dVar37 = dVar35;
      }
      dVar35 = dVar37;
      if (dVar40 <= dVar34) {
        dVar34 = dVar40;
      }
    }
    while (dVar34 = dVar35, pfVar3 != pfVar22) {
      dVar35 = (double)*pfVar22;
      dVar36 = dVar35;
      if (dVar40 <= dVar35) {
        dVar36 = dVar40;
      }
      pfVar22 = pfVar22 + uVar15;
      dVar40 = dVar36;
      if (dVar35 <= dVar34) {
        dVar35 = dVar34;
      }
    }
    if (iVar21 == 0) {
      local_118 = dVar40;
      pdVar20 = adStack_100;
    }
    else if (iVar21 == 1) {
      dStack_110 = dVar40;
      pdVar20 = adStack_100 + 1;
    }
    else {
      local_108 = dVar40;
      pdVar20 = adStack_100 + 2;
    }
    dVar36 = local_108;
    dVar40 = dStack_110;
    dVar35 = local_118;
    *pdVar20 = dVar34;
    dVar37 = adStack_100[2];
    dVar33 = adStack_100[1];
    dVar34 = adStack_100[0];
    piVar27 = piVar27 + 1;
  } while (&local_44 != piVar27);
  dVar38 = (double)((ulong)local_118 & _LC16);
  dVar39 = (double)((ulong)dStack_110 & _LC16);
  dVar42 = (double)((ulong)adStack_100[0] & _LC16);
  uVar45 = SUB84(dVar42,0);
  uVar46 = (undefined4)((ulong)dVar42 >> 0x20);
  dVar47 = (double)((ulong)adStack_100[1] & _LC16);
  uVar43 = SUB84(dVar47,0);
  uVar44 = (undefined4)((ulong)dVar47 >> 0x20);
  dVar41 = (double)((ulong)adStack_100[2] & _LC16);
  if ((double)((ulong)adStack_100[2] & _LC16) <= (double)(_LC16 & (ulong)local_108)) {
    dVar41 = (double)(_LC16 & (ulong)local_108);
  }
  if (dVar47 <= dVar39) {
    uVar43 = SUB84(dVar39,0);
    uVar44 = (undefined4)((ulong)dVar39 >> 0x20);
  }
  if (dVar42 <= dVar38) {
    uVar45 = SUB84(dVar38,0);
    uVar46 = (undefined4)((ulong)dVar38 >> 0x20);
  }
  if (dVar41 <= (double)CONCAT44(uVar44,uVar43)) {
    dVar41 = (double)CONCAT44(uVar44,uVar43);
  }
  if (dVar41 <= (double)CONCAT44(uVar46,uVar45)) {
    dVar41 = (double)CONCAT44(uVar46,uVar45);
  }
  dVar47 = _LC19 * dVar41;
  if (_LC19 * dVar41 <= (double)*(float *)(param_1 + 0xe0)) {
    dVar47 = (double)*(float *)(param_1 + 0xe0);
  }
  pvVar18 = malloc(lVar29 * 0x30);
  local_1c0 = lVar29;
  lStack_1b8 = lVar29;
  local_1c8 = pvVar18;
  local_1a8 = malloc(__size);
  dVar41 = _LC13;
  lVar31 = 0;
  local_1a0 = lVar29;
  lStack_198 = lVar29;
  dVar47 = dVar47 * __LC20;
  do {
    while( true ) {
      lVar16 = (long)(int)lVar31;
      uVar23 = uVar13 * puVar19[lVar16];
      fVar4 = (float)puVar7[uVar23];
      fVar5 = (float)puVar7[uVar23 + 2];
      pauVar25 = (undefined1 (*) [16])(lVar16 * 0x30 + (long)pvVar18);
      dVar39 = (double)fVar4;
      dVar11 = (double)(float)puVar7[uVar23 + 1];
      dVar38 = dVar11 - dVar47;
      dVar42 = (double)fVar5;
      *(double *)pauVar25[2] = (double)(float)puVar7[uVar23 + 1] + dVar47;
      *(double *)(pauVar25[2] + 8) = (double)fVar5 + dVar47;
      auVar10._8_4_ = SUB84(dVar38,0);
      auVar10._0_8_ = dVar39 - dVar47;
      auVar10._12_4_ = (int)((ulong)dVar38 >> 0x20);
      *pauVar25 = auVar10;
      dVar38 = (double)fVar4 + dVar47;
      auVar9._8_4_ = SUB84(dVar38,0);
      auVar9._0_8_ = dVar42 - dVar47;
      auVar9._12_4_ = (int)((ulong)dVar38 >> 0x20);
      pauVar25[1] = auVar9;
      if (!NAN(dVar39)) break;
      iVar24 = -1;
LAB_001072c6:
      lVar31 = lVar31 + 1;
      *(int *)((long)local_1a8 + lVar16 * 4) = iVar24;
      if (lVar29 == lVar31) goto LAB_001073f0;
    }
    dVar38 = ((dVar39 - dVar35) / (dVar34 - dVar35)) * dVar41;
    dVar39 = ((dVar11 - dVar40) / (dVar33 - dVar40)) * dVar41;
    dVar42 = ((dVar42 - dVar36) / (dVar37 - dVar36)) * dVar41;
    if (dVar38 <= 0.0) {
      if (0.0 < dVar39) {
        if (0.0 < dVar42) {
          iVar21 = 0;
          goto LAB_00107b0a;
        }
        iVar21 = 0;
LAB_001079d5:
        iVar24 = iVar21 * 2 + 0x12492492;
        if (dVar39 <= _LC14) {
          iVar24 = ((((((int)(long)dVar39 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                     0xc30c30c3) * 5 & 0x49249249) + iVar21) * 2;
        }
      }
      else {
        iVar24 = 0;
        if (0.0 < dVar42) {
          iVar28 = 0;
          goto LAB_001072b6;
        }
      }
      goto LAB_001072c6;
    }
    if (0.0 < dVar39) {
      if (0.0 < dVar42) {
        iVar21 = 0x12492492;
        if (dVar38 <= _LC14) {
          iVar21 = (((((int)(long)dVar38 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                    0xc30c30c3) * 5 & 0x49249249) * 2;
        }
LAB_00107b0a:
        iVar28 = iVar21 * 2 + 0x12492492;
        if (dVar39 <= _LC14) {
          iVar28 = ((((((int)(long)dVar39 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                     0xc30c30c3) * 5 & 0x49249249) + iVar21) * 2;
        }
        goto LAB_001072b6;
      }
      if (dVar38 <= _LC14) {
        iVar21 = (((((int)(long)dVar38 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                  0xc30c30c3) * 5 & 0x49249249) * 2;
        goto LAB_001079d5;
      }
      iVar24 = 0x36db6db6;
      if (dVar39 <= _LC14) {
        iVar24 = (((((int)(long)dVar39 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                  0xc30c30c3) * 5 & 0x49249249) * 2 + 0x24924924;
      }
      goto LAB_001072c6;
    }
    if (0.0 < dVar42) {
      iVar28 = 0x24924924;
      if (dVar38 <= _LC14) {
        iVar28 = (((((int)(long)dVar38 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                  0xc30c30c3) * 5 & 0x49249249) << 2;
      }
LAB_001072b6:
      iVar24 = iVar28 + 0x9249249;
      if (dVar42 <= _LC14) {
        iVar24 = (((((int)(long)dVar42 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                  0xc30c30c3) * 5 & 0x49249249) + iVar28;
      }
      goto LAB_001072c6;
    }
    if (dVar38 <= _LC14) {
      iVar24 = (((((int)(long)dVar38 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                0xc30c30c3) * 5 & 0x49249249) << 2;
      goto LAB_001072c6;
    }
    lVar31 = lVar31 + 1;
    *(undefined4 *)((long)local_1a8 + lVar16 * 4) = 0x24924924;
  } while (lVar29 != lVar31);
LAB_001073f0:
  __ptr_00 = (int *)malloc(__size);
  piVar27 = __ptr_00 + lVar29;
  uVar15 = 0;
  uVar26 = (long)__size >> 2;
  local_180 = lVar29;
  lStack_178 = lVar29;
  if (uVar26 != 0) {
    if ((uVar26 & 1) != 0) {
      *__ptr_00 = 0;
      uVar15 = 1;
      if (uVar26 == 1) goto LAB_00107465;
    }
    do {
      __ptr_00[uVar15] = (int)uVar15;
      lVar29 = uVar15 + 1;
      uVar15 = uVar15 + 2;
      __ptr_00[lVar29] = (int)lVar29;
    } while (uVar26 != uVar15);
  }
LAB_00107465:
  local_188 = __ptr_00;
  if (piVar27 != __ptr_00) {
    std::_Temporary_buffer<int*,int>::_Temporary_buffer
              ((_Temporary_buffer<int*,int> *)&local_a8,__ptr_00,(long)(uVar26 + 1) >> 1);
    pvVar18 = local_a0;
    if (local_a8 == local_a0) {
      uVar15 = (long)local_a0 * 4;
      std::
      __stable_sort_adaptive<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                (__ptr_00,__ptr_00 + (long)local_a0,piVar27,local_98,(Vec *)&local_1a8);
    }
    else {
      if (local_98 == (void *)0x0) {
        std::
        __inplace_stable_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                  (__ptr_00,piVar27,(Vec *)&local_1a8);
      }
      else {
        std::
        __stable_sort_adaptive_resize<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<float,unsigned_int>(manifold::MeshGLP<float,unsigned_int>&)::_lambda(int_const&,int_const&)_1_>>
                  (__ptr_00,piVar27,local_98,local_a0,(Vec *)&local_1a8);
      }
      uVar15 = (long)pvVar18 << 2;
    }
    operator_delete(local_98,uVar15);
  }
  manifold::Permute<unsigned_int,int>((Vec *)&local_1a8,(Vec *)&local_188);
  manifold::Permute<manifold::Box,int>((Vec *)&local_1c8,(Vec *)&local_188);
  manifold::Permute<int,int>((Vec *)&local_1e8,(Vec *)&local_188);
  lVar29 = local_1c0;
  pvVar18 = local_1c8;
  local_e8 = local_1a8;
  local_168 = (int *)local_1c8;
  local_e0 = local_1a0;
  local_160._0_8_ = local_1c0;
  manifold::Collider::Collider((Collider *)&local_a8,(VecView *)&local_168,(VecView *)&local_e8);
  __ptr = local_a8;
  local_160 = (undefined1  [16])0x0;
  local_d0 = local_a0;
  local_d8 = local_a8;
  local_c8 = local_78;
  local_c0 = local_70;
  local_168 = (int *)0x0;
  local_e8 = pvVar18;
  local_e0 = lVar29;
  local_b8 = (VecView *)&local_168;
  manifold::
  for_each<manifold::CountingIterator<unsigned_long>,manifold::collider_internal::FindCollision<manifold::Box,true,manifold::collider_internal::SeqCollisionRecorder<false>>>
            (0,lVar29,(UnionFind<int,unsigned_char> *)&local_e8);
  manifold::UnionFind<int,unsigned_char>::UnionFind
            ((UnionFind<int,unsigned_char> *)&local_e8,(int)local_248);
  pvVar12 = local_e8;
  lVar29 = *(long *)(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != lVar29) {
    uVar15 = 0;
    do {
      iVar21 = *(int *)(*(long *)(param_1 + 0x50) + uVar15 * 4);
      iVar24 = *(int *)(lVar29 + uVar15 * 4);
      if (iVar21 != iVar24) {
        lVar29 = (long)iVar24;
        if (*(char *)((long)local_d0 + lVar29) == '\0') {
          *(char *)((long)local_d0 + lVar29) = '\x01';
        }
        lVar31 = (long)iVar21;
        if (*(char *)((long)local_d0 + lVar31) == '\0') {
          *(char *)((long)local_d0 + lVar31) = '\x01';
        }
        piVar27 = (int *)((long)local_e8 + lVar29 * 4);
        iVar28 = *piVar27;
        if (iVar24 != iVar28) {
          do {
            iVar24 = *(int *)((long)local_e8 + (long)iVar28 * 4);
            lVar29 = (long)iVar24;
            *piVar27 = iVar24;
            piVar27 = (int *)((long)local_e8 + lVar29 * 4);
            iVar28 = *piVar27;
          } while (iVar28 != iVar24);
        }
        piVar27 = (int *)((long)local_e8 + lVar31 * 4);
        iVar24 = *piVar27;
        if (iVar21 != iVar24) {
          do {
            iVar21 = *(int *)((long)local_e8 + (long)iVar24 * 4);
            lVar31 = (long)iVar21;
            *piVar27 = iVar21;
            piVar27 = (int *)((long)local_e8 + lVar31 * 4);
            iVar24 = *piVar27;
          } while (iVar24 != iVar21);
        }
        iVar24 = (int)lVar29;
        if (iVar24 != iVar21) {
          if (*(byte *)((long)local_d0 + lVar31) <= *(byte *)((long)local_d0 + lVar29)) {
            lVar29 = (long)iVar21;
            iVar21 = iVar24;
          }
          cVar6 = *(char *)((long)iVar21 + (long)local_d0);
          if (cVar6 == *(char *)((long)local_d0 + lVar29)) {
            *(char *)((long)iVar21 + (long)local_d0) = cVar6 + '\x01';
          }
          *(int *)((long)local_e8 + lVar29 * 4) = iVar21;
        }
        lVar29 = *(long *)(param_1 + 0x38);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < (ulong)(*(long *)(param_1 + 0x40) - lVar29 >> 2));
  }
  if ((ulong)local_160._0_8_ >> 3 != 0) {
    piVar27 = local_168;
    do {
      iVar21 = local_1e8[*piVar27];
      iVar24 = local_1e8[piVar27[1]];
      if (iVar21 != iVar24) {
        lVar29 = (long)iVar24;
        if (*(char *)((long)local_d0 + lVar29) == '\0') {
          *(char *)((long)local_d0 + lVar29) = '\x01';
        }
        lVar31 = (long)iVar21;
        if (*(char *)((long)local_d0 + lVar31) == '\0') {
          *(char *)((long)local_d0 + lVar31) = '\x01';
        }
        piVar30 = (int *)((long)local_e8 + lVar29 * 4);
        iVar28 = *piVar30;
        if (iVar24 != iVar28) {
          do {
            iVar24 = *(int *)((long)local_e8 + (long)iVar28 * 4);
            lVar29 = (long)iVar24;
            *piVar30 = iVar24;
            piVar30 = (int *)((long)local_e8 + lVar29 * 4);
            iVar28 = *piVar30;
          } while (iVar28 != iVar24);
        }
        piVar30 = (int *)((long)local_e8 + lVar31 * 4);
        iVar24 = *piVar30;
        if (iVar21 != iVar24) {
          do {
            iVar21 = *(int *)((long)local_e8 + (long)iVar24 * 4);
            lVar31 = (long)iVar21;
            *piVar30 = iVar21;
            piVar30 = (int *)((long)local_e8 + lVar31 * 4);
            iVar24 = *piVar30;
          } while (iVar24 != iVar21);
        }
        iVar24 = (int)lVar29;
        if (iVar24 != iVar21) {
          if (*(byte *)((long)local_d0 + lVar31) <= *(byte *)((long)local_d0 + lVar29)) {
            lVar29 = (long)iVar21;
            iVar21 = iVar24;
          }
          cVar6 = *(char *)((long)iVar21 + (long)local_d0);
          if (cVar6 == *(char *)((long)local_d0 + lVar29)) {
            *(char *)((long)iVar21 + (long)local_d0) = cVar6 + '\x01';
          }
          *(int *)((long)local_e8 + lVar29 * 4) = iVar21;
        }
      }
      piVar27 = piVar27 + 2;
    } while (piVar27 != local_168 + ((ulong)local_160._0_8_ >> 3) * 2);
    lVar29 = *(long *)(param_1 + 0x38);
  }
  if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x58)) {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
  }
  if (lVar29 != *(long *)(param_1 + 0x40)) {
    *(long *)(param_1 + 0x40) = lVar29;
  }
  if ((int)local_248 != 0) {
    uVar15 = 0;
    do {
      iVar24 = (int)uVar15;
      uVar26 = (ulong)iVar24;
      piVar27 = (int *)((long)pvVar12 + uVar26 * 4);
      iVar21 = *piVar27;
      if (iVar21 != iVar24) {
        do {
          iVar28 = *(int *)((long)pvVar12 + (long)iVar21 * 4);
          uVar26 = (ulong)iVar28;
          *piVar27 = iVar28;
          piVar27 = (int *)((long)pvVar12 + uVar26 * 4);
          iVar21 = *piVar27;
        } while (iVar21 != iVar28);
      }
      if (uVar15 != uVar26) {
        piVar27 = *(int **)(param_1 + 0x40);
        if (piVar27 == *(int **)(param_1 + 0x48)) {
          local_1ec = iVar24;
          std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>
                    ((vector<unsigned_int,std::allocator<unsigned_int>> *)(param_1 + 0x38),piVar27,
                     &local_1ec);
        }
        else {
          *piVar27 = iVar24;
          *(int **)(param_1 + 0x40) = piVar27 + 1;
        }
        local_1ec = (int)uVar26;
        piVar27 = *(int **)(param_1 + 0x58);
        if (piVar27 == *(int **)(param_1 + 0x60)) {
          std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>
                    ((vector<unsigned_int,std::allocator<unsigned_int>> *)(param_1 + 0x50),piVar27,
                     &local_1ec);
        }
        else {
          *piVar27 = local_1ec;
          *(int **)(param_1 + 0x58) = piVar27 + 1;
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != (local_248 & 0xffffffff));
  }
  if (local_d0 != (void *)0x0) {
    free(local_d0);
  }
  if (local_e8 != (void *)0x0) {
    free(local_e8);
  }
  if (local_168 != (int *)0x0) {
    free(local_168);
  }
  if (local_78 != (void *)0x0) {
    free(local_78);
  }
  if (local_90 != (void *)0x0) {
    free(local_90);
  }
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  if (__ptr_00 != (int *)0x0) {
    free(__ptr_00);
  }
  if (local_1a8 != (void *)0x0) {
    free(local_1a8);
  }
  if (pvVar18 != (void *)0x0) {
    free(pvVar18);
  }
  if (local_298 != (undefined4 *)0x0) {
    free(local_298);
  }
  if (local_1e8 != (undefined4 *)0x0) {
    free(local_1e8);
  }
  bVar32 = true;
LAB_00106df5:
  if (puVar14 != (undefined4 *)0x0) {
    operator_delete(puVar14,local_240);
  }
  std::
  _Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
  ::_M_erase(local_138);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar32;
}



/* manifold::MeshGLP<float, unsigned int>::Merge() */

void __thiscall manifold::MeshGLP<float,unsigned_int>::Merge(MeshGLP<float,unsigned_int> *this)

{
  (anonymous_namespace)::MergeMeshGLP<float,unsigned_int>((MeshGLP *)this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool (anonymous namespace)::MergeMeshGLP<double, unsigned long>(manifold::MeshGLP<double,
   unsigned long>&) */

bool (anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(MeshGLP *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *__src;
  ulong *puVar9;
  void *pvVar10;
  void *__ptr;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  _Rb_tree_node_base *p_Var14;
  void *pvVar15;
  size_t __size;
  undefined4 *puVar16;
  size_t __size_00;
  long lVar17;
  int *__ptr_00;
  int iVar18;
  long lVar19;
  double *pdVar20;
  int iVar21;
  ulong uVar22;
  int *piVar23;
  int iVar24;
  long lVar25;
  int *piVar26;
  long in_FS_OFFSET;
  bool bVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined8 *local_278;
  ulong local_248;
  ulong local_240;
  ulong local_238;
  ulong local_230;
  ulong local_1f8;
  ulong local_1f0;
  undefined4 *local_1e8;
  long local_1e0;
  long lStack_1d8;
  void *local_1c8;
  long local_1c0;
  long lStack_1b8;
  void *local_1a8;
  long local_1a0;
  long lStack_198;
  int *local_188;
  long local_180;
  long lStack_178;
  int *local_168;
  undefined1 local_160 [16];
  _Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
  local_148 [8];
  undefined4 local_140 [2];
  _Rb_tree_node *local_138;
  _Rb_tree_node_base *local_130;
  _Rb_tree_node_base *local_128;
  long local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double adStack_100 [3];
  void *local_e8;
  long local_e0;
  void *local_d8;
  void *local_d0;
  void *local_c8;
  undefined8 local_c0;
  VecView *local_b8;
  void *local_a8;
  void *local_a0;
  void *local_98;
  void *local_90;
  void *local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_248 = *(ulong *)param_1;
  local_238 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3;
  local_140[0] = 0;
  local_240 = local_238 / local_248;
  local_138 = (_Rb_tree_node *)0x0;
  local_120 = 0;
  local_130 = (_Rb_tree_node_base *)local_140;
  local_128 = (_Rb_tree_node_base *)local_140;
  if (local_240 >> 0x3d != 0) {
    std::__throw_length_error("cannot create std::vector larger than max_size()");
    goto LAB_00109044;
  }
  local_230 = local_240 * 4;
  puVar11 = (undefined4 *)0x0;
  if (local_248 <= local_238) {
    puVar11 = (undefined4 *)operator_new(local_230);
    *puVar11 = 0;
    puVar1 = puVar11 + 1;
    if (local_240 == 1) {
      local_230 = 4;
      puVar16 = puVar1;
    }
    else {
      puVar16 = puVar11 + local_240;
      if (puVar16 != puVar1) {
        memset(puVar1,0,local_230 - 4);
      }
    }
    local_248 = *(ulong *)param_1;
    local_238 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3;
    local_240 = local_238 / local_248;
    if (puVar16 != puVar11) {
      uVar12 = 0;
      do {
        puVar11[uVar12] = (int)uVar12;
        bVar27 = uVar12 != (ulong)((long)puVar16 + (-4 - (long)puVar11)) >> 2;
        uVar12 = uVar12 + 1;
      } while (bVar27);
    }
  }
  lVar25 = *(long *)(param_1 + 0x40);
  lVar13 = *(long *)(param_1 + 0x38);
  if (lVar13 != lVar25) {
    lVar17 = *(long *)(param_1 + 0x50);
    uVar12 = 0;
    do {
      lVar19 = uVar12 * 8;
      lVar2 = uVar12 * 8;
      uVar12 = uVar12 + 1;
      puVar11[*(long *)(lVar13 + lVar19)] = (int)*(undefined8 *)(lVar17 + lVar2);
    } while (uVar12 < (ulong)(lVar25 - lVar13 >> 3));
  }
  lVar25 = *(long *)(param_1 + 0x20);
  local_58 = 0;
  uVar12 = *(long *)(param_1 + 0x28) - lVar25;
  local_60 = _LC18;
  if (0x10 < uVar12) {
    uVar22 = 0;
    while( true ) {
      local_48 = 2;
      local_50 = _LC0;
      lVar13 = 1;
      piVar23 = (int *)&local_50;
      while( true ) {
        uVar7 = puVar11[*(long *)(lVar25 + (lVar13 + uVar22 * 3) * 8)];
        uVar8 = puVar11[*(long *)(lVar25 + ((long)*piVar23 + uVar22 * 3) * 8)];
        local_a8 = (void *)CONCAT44(uVar8,uVar7);
        p_Var14 = (_Rb_tree_node_base *)
                  std::
                  _Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
                  ::find(local_148,(pair *)&local_a8);
        if (p_Var14 == (_Rb_tree_node_base *)local_140) {
          local_a8 = (void *)CONCAT44(uVar7,uVar8);
          std::
          _Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
          ::_M_insert_equal<std::pair<int,int>const&>(local_148,(pair *)&local_a8);
        }
        else {
          pvVar15 = (void *)std::_Rb_tree_rebalance_for_erase
                                      (p_Var14,(_Rb_tree_node_base *)local_140);
          operator_delete(pvVar15,0x28);
          local_120 = local_120 + -1;
        }
        piVar23 = piVar23 + 1;
        if (&local_44 == piVar23) break;
        lVar25 = *(long *)(param_1 + 0x20);
        lVar13 = (long)*(int *)((long)&local_60 + (long)*piVar23 * 4);
      }
      uVar22 = uVar22 + 1;
      if ((ulong)((long)uVar12 >> 3) / 3 <= uVar22) break;
      lVar25 = *(long *)(param_1 + 0x20);
    }
  }
  lVar25 = local_120;
  bVar27 = false;
  if (local_120 != 0) {
    __size = local_120 * 4;
    puVar16 = (undefined4 *)malloc(__size);
    puVar1 = puVar16;
    local_1e8 = puVar16;
    local_1e0 = lVar25;
    lStack_1d8 = lVar25;
    p_Var14 = local_130;
    while (p_Var14 != (_Rb_tree_node_base *)local_140) {
      *puVar1 = *(undefined4 *)(p_Var14 + 0x20);
      p_Var14 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var14);
      puVar1 = puVar1 + 1;
    }
    __src = *(undefined8 **)(param_1 + 8);
    __size_00 = *(long *)(param_1 + 0x10) - (long)__src;
    if (__size_00 == 0) {
      local_278 = (undefined8 *)0x0;
    }
    else {
      local_278 = (undefined8 *)malloc(__size_00);
      if ((long)__size_00 < 9) {
        if (__size_00 == 8) {
          *local_278 = *__src;
        }
      }
      else {
        memcpy(local_278,__src,__size_00);
      }
    }
    uVar12 = *(ulong *)param_1;
    local_48 = 2;
    piVar23 = (int *)&local_50;
    uVar22 = (ulong)(int)uVar12;
    local_50 = _LC0;
    local_118 = _LC5;
    dStack_110 = _LC5;
    local_108 = _LC5;
    adStack_100[0] = _LC8;
    adStack_100[1] = _LC8;
    adStack_100[2] = _LC8;
    do {
      iVar21 = *piVar23;
      pdVar20 = (double *)(local_278 + iVar21);
      lVar13 = ((((long)(__size_00 + (long)iVar21 * -8) >> 3) + (uVar12 - 1)) / uVar12) * uVar22 * 8
      ;
      pdVar3 = (double *)((long)pdVar20 + lVar13);
      dVar32 = _LC5;
      dVar5 = _LC8;
      while (dVar36 = dVar32, 3 < (long)((ulong)(lVar13 >> 3) / uVar22)) {
        dVar32 = pdVar20[uVar22];
        dVar4 = *pdVar20;
        dVar30 = dVar32;
        dVar28 = dVar4;
        if ((dVar32 <= dVar4) && (dVar30 = dVar4, dVar28 = dVar32, dVar4 <= dVar32)) {
          dVar28 = dVar4;
        }
        dVar4 = pdVar20[uVar22 * 3];
        dVar32 = pdVar20[uVar22 * 2];
        dVar35 = dVar4;
        if ((dVar4 <= dVar32) && (dVar35 = dVar32, dVar4 < dVar32)) {
          dVar32 = dVar4;
        }
        pdVar20 = pdVar20 + uVar22 * 4;
        if (dVar35 <= dVar30) {
          dVar35 = dVar30;
        }
        lVar13 = (long)pdVar3 - (long)pdVar20;
        if (dVar28 <= dVar32) {
          dVar32 = dVar28;
        }
        if (dVar35 <= dVar5) {
          dVar35 = dVar5;
        }
        dVar5 = dVar35;
        if (dVar36 <= dVar32) {
          dVar32 = dVar36;
        }
      }
      while (dVar32 = dVar5, pdVar3 != pdVar20) {
        dVar5 = *pdVar20;
        pdVar20 = pdVar20 + uVar22;
        dVar4 = dVar5;
        if (dVar36 <= dVar5) {
          dVar4 = dVar36;
        }
        dVar36 = dVar4;
        if (dVar5 <= dVar32) {
          dVar5 = dVar32;
        }
      }
      if (iVar21 == 0) {
        local_118 = dVar36;
        pdVar20 = adStack_100;
      }
      else if (iVar21 == 1) {
        dStack_110 = dVar36;
        pdVar20 = adStack_100 + 1;
      }
      else {
        local_108 = dVar36;
        pdVar20 = adStack_100 + 2;
      }
      dVar4 = local_108;
      dVar36 = dStack_110;
      dVar5 = local_118;
      *pdVar20 = dVar32;
      dVar28 = adStack_100[2];
      dVar30 = adStack_100[1];
      dVar32 = adStack_100[0];
      piVar23 = piVar23 + 1;
    } while (&local_44 != piVar23);
    dVar35 = (double)((ulong)adStack_100[0] & _LC16);
    if ((double)((ulong)adStack_100[0] & _LC16) <= (double)((ulong)local_118 & _LC16)) {
      dVar35 = (double)((ulong)local_118 & _LC16);
    }
    dVar33 = (double)((ulong)adStack_100[2] & _LC16);
    if ((double)((ulong)adStack_100[2] & _LC16) <= (double)(_LC16 & (ulong)local_108)) {
      dVar33 = (double)(_LC16 & (ulong)local_108);
    }
    dVar34 = (double)((ulong)adStack_100[1] & _LC16);
    if ((double)((ulong)adStack_100[1] & _LC16) <= (double)((ulong)dStack_110 & _LC16)) {
      dVar34 = (double)((ulong)dStack_110 & _LC16);
    }
    if (dVar33 <= dVar34) {
      dVar33 = dVar34;
    }
    if (dVar33 <= dVar35) {
      dVar33 = dVar35;
    }
    dVar35 = _LC22 * dVar33;
    if (_LC22 * dVar33 <= *(double *)(param_1 + 0xe0)) {
      dVar35 = *(double *)(param_1 + 0xe0);
    }
    pvVar15 = malloc(lVar25 * 0x30);
    local_1c0 = lVar25;
    lStack_1b8 = lVar25;
    local_1c8 = pvVar15;
    local_1a8 = malloc(__size);
    dVar33 = _LC13;
    lVar13 = 0;
    dVar35 = dVar35 * __LC20;
    local_1a0 = lVar25;
    lStack_198 = lVar25;
    do {
      while( true ) {
        lVar17 = (long)(int)lVar13;
        lVar19 = (long)(int)puVar16[lVar17] * uVar12;
        dVar34 = (double)__src[lVar19 + 2];
        dVar29 = (double)__src[lVar19];
        dVar31 = (double)__src[lVar19 + 1];
        pdVar20 = (double *)(lVar17 * 0x30 + (long)pvVar15);
        *pdVar20 = dVar29 - dVar35;
        pdVar20[1] = dVar31 - dVar35;
        pdVar20[2] = dVar34 - dVar35;
        pdVar20[3] = dVar29 + dVar35;
        pdVar20[4] = dVar31 + dVar35;
        pdVar20[5] = dVar34 + dVar35;
        if (!NAN(dVar29)) break;
        iVar18 = -1;
LAB_00108570:
        lVar13 = lVar13 + 1;
        *(int *)((long)local_1a8 + lVar17 * 4) = iVar18;
        if (lVar25 == lVar13) goto LAB_001086a0;
      }
      dVar29 = ((dVar29 - dVar5) / (dVar32 - dVar5)) * dVar33;
      dVar31 = ((dVar31 - dVar36) / (dVar30 - dVar36)) * dVar33;
      dVar34 = ((dVar34 - dVar4) / (dVar28 - dVar4)) * dVar33;
      if (dVar29 <= 0.0) {
        if (0.0 < dVar31) {
          if (0.0 < dVar34) {
            iVar21 = 0;
            goto LAB_00108de3;
          }
          iVar21 = 0;
LAB_00108c96:
          iVar18 = iVar21 * 2 + 0x12492492;
          if (dVar31 <= _LC14) {
            iVar18 = ((((((int)(long)dVar31 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                       0xc30c30c3) * 5 & 0x49249249) + iVar21) * 2;
          }
        }
        else {
          iVar18 = 0;
          if (0.0 < dVar34) {
            iVar24 = 0;
            goto LAB_0010855e;
          }
        }
        goto LAB_00108570;
      }
      if (0.0 < dVar31) {
        if (0.0 < dVar34) {
          iVar21 = 0x12492492;
          if (dVar29 <= _LC14) {
            iVar21 = (((((int)(long)dVar29 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                      0xc30c30c3) * 5 & 0x49249249) * 2;
          }
LAB_00108de3:
          iVar24 = iVar21 * 2 + 0x12492492;
          if (dVar31 <= _LC14) {
            iVar24 = ((((((int)(long)dVar31 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                       0xc30c30c3) * 5 & 0x49249249) + iVar21) * 2;
          }
          goto LAB_0010855e;
        }
        if (dVar29 <= _LC14) {
          iVar21 = (((((int)(long)dVar29 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                    0xc30c30c3) * 5 & 0x49249249) * 2;
          goto LAB_00108c96;
        }
        iVar18 = 0x36db6db6;
        if (dVar31 <= _LC14) {
          iVar18 = (((((int)(long)dVar31 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                    0xc30c30c3) * 5 & 0x49249249) * 2 + 0x24924924;
        }
        goto LAB_00108570;
      }
      if (0.0 < dVar34) {
        iVar24 = 0x24924924;
        if (dVar29 <= _LC14) {
          iVar24 = (((((int)(long)dVar29 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                    0xc30c30c3) * 5 & 0x49249249) << 2;
        }
LAB_0010855e:
        iVar18 = iVar24 + 0x9249249;
        if (dVar34 <= _LC14) {
          iVar18 = (((((int)(long)dVar34 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                    0xc30c30c3) * 5 & 0x49249249) + iVar24;
        }
        goto LAB_00108570;
      }
      if (dVar29 <= _LC14) {
        iVar18 = (((((int)(long)dVar29 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                  0xc30c30c3) * 5 & 0x49249249) << 2;
        goto LAB_00108570;
      }
      lVar13 = lVar13 + 1;
      *(undefined4 *)((long)local_1a8 + lVar17 * 4) = 0x24924924;
    } while (lVar25 != lVar13);
LAB_001086a0:
    __ptr_00 = (int *)malloc(__size);
    piVar23 = __ptr_00 + lVar25;
    uVar12 = 0;
    uVar22 = (long)__size >> 2;
    local_180 = lVar25;
    lStack_178 = lVar25;
    if (uVar22 != 0) {
      if ((uVar22 & 1) != 0) {
        *__ptr_00 = 0;
        uVar12 = 1;
        if (uVar22 == 1) goto LAB_0010870d;
      }
      do {
        __ptr_00[uVar12] = (int)uVar12;
        lVar25 = uVar12 + 1;
        uVar12 = uVar12 + 2;
        __ptr_00[lVar25] = (int)lVar25;
      } while (uVar22 != uVar12);
    }
LAB_0010870d:
    local_188 = __ptr_00;
    if (piVar23 != __ptr_00) {
      std::_Temporary_buffer<int*,int>::_Temporary_buffer
                ((_Temporary_buffer<int*,int> *)&local_a8,__ptr_00,(long)(uVar22 + 1) >> 1);
      pvVar15 = local_a0;
      if (local_a8 == local_a0) {
        uVar12 = (long)local_a0 * 4;
        std::
        __stable_sort_adaptive<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
                  (__ptr_00,__ptr_00 + (long)local_a0,piVar23,local_98,(Vec *)&local_1a8);
      }
      else {
        if (local_98 == (void *)0x0) {
          std::
          __inplace_stable_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
                    (__ptr_00,piVar23,(Vec *)&local_1a8);
        }
        else {
          std::
          __stable_sort_adaptive_resize<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MergeMeshGLP<double,unsigned_long>(manifold::MeshGLP<double,unsigned_long>&)::_lambda(int_const&,int_const&)_1_>>
                    (__ptr_00,piVar23,local_98,local_a0,(Vec *)&local_1a8);
        }
        uVar12 = (long)pvVar15 << 2;
      }
      operator_delete(local_98,uVar12);
    }
    manifold::Permute<unsigned_int,int>((Vec *)&local_1a8,(Vec *)&local_188);
    manifold::Permute<manifold::Box,int>((Vec *)&local_1c8,(Vec *)&local_188);
    manifold::Permute<int,int>((Vec *)&local_1e8,(Vec *)&local_188);
    lVar25 = local_1c0;
    pvVar15 = local_1c8;
    local_e8 = local_1a8;
    local_168 = (int *)local_1c8;
    local_e0 = local_1a0;
    local_160._0_8_ = local_1c0;
    manifold::Collider::Collider((Collider *)&local_a8,(VecView *)&local_168,(VecView *)&local_e8);
    __ptr = local_a8;
    local_160 = (undefined1  [16])0x0;
    local_d0 = local_a0;
    local_d8 = local_a8;
    local_c8 = local_78;
    local_c0 = local_70;
    local_168 = (int *)0x0;
    local_e8 = pvVar15;
    local_e0 = lVar25;
    local_b8 = (VecView *)&local_168;
    manifold::
    for_each<manifold::CountingIterator<unsigned_long>,manifold::collider_internal::FindCollision<manifold::Box,true,manifold::collider_internal::SeqCollisionRecorder<false>>>
              (0,lVar25,(UnionFind<int,unsigned_char> *)&local_e8);
    manifold::UnionFind<int,unsigned_char>::UnionFind
              ((UnionFind<int,unsigned_char> *)&local_e8,(int)local_240);
    pvVar10 = local_e8;
    lVar25 = *(long *)(param_1 + 0x38);
    if (lVar25 != *(long *)(param_1 + 0x40)) {
      uVar12 = 0;
      do {
        iVar18 = (int)*(undefined8 *)(*(long *)(param_1 + 0x50) + uVar12 * 8);
        iVar21 = (int)*(undefined8 *)(lVar25 + uVar12 * 8);
        if (iVar18 != iVar21) {
          lVar25 = (long)iVar21;
          if (*(char *)((long)local_d0 + lVar25) == '\0') {
            *(char *)((long)local_d0 + lVar25) = '\x01';
          }
          lVar13 = (long)iVar18;
          if (*(char *)((long)local_d0 + lVar13) == '\0') {
            *(char *)((long)local_d0 + lVar13) = '\x01';
          }
          piVar23 = (int *)((long)local_e8 + lVar25 * 4);
          iVar24 = *piVar23;
          if (iVar21 != iVar24) {
            do {
              iVar21 = *(int *)((long)local_e8 + (long)iVar24 * 4);
              lVar25 = (long)iVar21;
              *piVar23 = iVar21;
              piVar23 = (int *)((long)local_e8 + lVar25 * 4);
              iVar24 = *piVar23;
            } while (iVar24 != iVar21);
          }
          piVar23 = (int *)((long)local_e8 + lVar13 * 4);
          iVar24 = *piVar23;
          if (iVar18 != iVar24) {
            do {
              iVar18 = *(int *)((long)local_e8 + (long)iVar24 * 4);
              lVar13 = (long)iVar18;
              *piVar23 = iVar18;
              piVar23 = (int *)((long)local_e8 + lVar13 * 4);
              iVar24 = *piVar23;
            } while (iVar24 != iVar18);
          }
          if (iVar18 != iVar21) {
            iVar24 = iVar18;
            if (*(byte *)((long)local_d0 + lVar13) <= *(byte *)((long)local_d0 + lVar25)) {
              iVar24 = iVar21;
              iVar21 = iVar18;
            }
            cVar6 = *(char *)((long)iVar24 + (long)local_d0);
            if (cVar6 == *(char *)((long)local_d0 + (long)iVar21)) {
              *(char *)((long)iVar24 + (long)local_d0) = cVar6 + '\x01';
            }
            *(int *)((long)local_e8 + (long)iVar21 * 4) = iVar24;
          }
          lVar25 = *(long *)(param_1 + 0x38);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < (ulong)(*(long *)(param_1 + 0x40) - lVar25 >> 3));
    }
    if ((ulong)local_160._0_8_ >> 3 != 0) {
      piVar23 = local_168;
      do {
        iVar21 = local_1e8[*piVar23];
        iVar18 = local_1e8[piVar23[1]];
        if (iVar21 != iVar18) {
          lVar25 = (long)iVar18;
          if (*(char *)((long)local_d0 + lVar25) == '\0') {
            *(char *)((long)local_d0 + lVar25) = '\x01';
          }
          lVar13 = (long)iVar21;
          if (*(char *)((long)local_d0 + lVar13) == '\0') {
            *(char *)((long)local_d0 + lVar13) = '\x01';
          }
          piVar26 = (int *)((long)local_e8 + lVar25 * 4);
          iVar24 = *piVar26;
          if (iVar18 != iVar24) {
            do {
              iVar18 = *(int *)((long)local_e8 + (long)iVar24 * 4);
              lVar25 = (long)iVar18;
              *piVar26 = iVar18;
              piVar26 = (int *)((long)local_e8 + lVar25 * 4);
              iVar24 = *piVar26;
            } while (iVar24 != iVar18);
          }
          piVar26 = (int *)((long)local_e8 + lVar13 * 4);
          iVar18 = *piVar26;
          if (iVar21 != iVar18) {
            do {
              iVar21 = *(int *)((long)local_e8 + (long)iVar18 * 4);
              lVar13 = (long)iVar21;
              *piVar26 = iVar21;
              piVar26 = (int *)((long)local_e8 + lVar13 * 4);
              iVar18 = *piVar26;
            } while (iVar18 != iVar21);
          }
          iVar18 = (int)lVar25;
          if (iVar18 != iVar21) {
            if (*(byte *)((long)local_d0 + lVar13) <= *(byte *)((long)local_d0 + lVar25)) {
              lVar25 = (long)iVar21;
              iVar21 = iVar18;
            }
            cVar6 = *(char *)((long)iVar21 + (long)local_d0);
            if (cVar6 == *(char *)((long)local_d0 + lVar25)) {
              *(char *)((long)iVar21 + (long)local_d0) = cVar6 + '\x01';
            }
            *(int *)((long)local_e8 + lVar25 * 4) = iVar21;
          }
        }
        piVar23 = piVar23 + 2;
      } while (piVar23 != local_168 + ((ulong)local_160._0_8_ >> 3) * 2);
      lVar25 = *(long *)(param_1 + 0x38);
    }
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x58)) {
      *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
    }
    if (lVar25 != *(long *)(param_1 + 0x40)) {
      *(long *)(param_1 + 0x40) = lVar25;
    }
    local_1f8 = 0;
    if (local_248 <= local_238) {
      do {
        uVar12 = local_1f8;
        uVar22 = (ulong)(int)local_1f8;
        piVar23 = (int *)((long)pvVar10 + uVar22 * 4);
        iVar21 = *piVar23;
        if (iVar21 != (int)local_1f8) {
          do {
            iVar18 = *(int *)((long)pvVar10 + (long)iVar21 * 4);
            uVar22 = (ulong)iVar18;
            *piVar23 = iVar18;
            piVar23 = (int *)((long)pvVar10 + uVar22 * 4);
            iVar21 = *piVar23;
          } while (iVar21 != iVar18);
        }
        local_1f0 = uVar22;
        if (uVar22 != local_1f8) {
          puVar9 = *(ulong **)(param_1 + 0x40);
          if (puVar9 == *(ulong **)(param_1 + 0x48)) {
            std::vector<unsigned_long,std::allocator<unsigned_long>>::
            _M_realloc_insert<unsigned_long_const&>
                      ((vector<unsigned_long,std::allocator<unsigned_long>> *)(param_1 + 0x38),
                       puVar9,&local_1f8);
          }
          else {
            *puVar9 = local_1f8;
            *(ulong **)(param_1 + 0x40) = puVar9 + 1;
          }
          puVar9 = *(ulong **)(param_1 + 0x58);
          if (puVar9 == *(ulong **)(param_1 + 0x60)) {
            std::vector<unsigned_long,std::allocator<unsigned_long>>::
            _M_realloc_insert<unsigned_long_const&>
                      ((vector<unsigned_long,std::allocator<unsigned_long>> *)(param_1 + 0x50),
                       puVar9,&local_1f0);
          }
          else {
            *puVar9 = uVar22;
            *(ulong **)(param_1 + 0x58) = puVar9 + 1;
          }
        }
        local_1f8 = uVar12 + 1;
      } while (local_1f8 < local_240);
    }
    if (local_d0 != (void *)0x0) {
      free(local_d0);
    }
    if (local_e8 != (void *)0x0) {
      free(local_e8);
    }
    if (local_168 != (int *)0x0) {
      free(local_168);
    }
    if (local_78 != (void *)0x0) {
      free(local_78);
    }
    if (local_90 != (void *)0x0) {
      free(local_90);
    }
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
    if (__ptr_00 != (int *)0x0) {
      free(__ptr_00);
    }
    if (local_1a8 != (void *)0x0) {
      free(local_1a8);
    }
    if (pvVar15 != (void *)0x0) {
      free(pvVar15);
    }
    if (local_278 != (undefined8 *)0x0) {
      free(local_278);
    }
    if (local_1e8 != (undefined4 *)0x0) {
      free(local_1e8);
    }
    bVar27 = true;
  }
  if (puVar11 != (undefined4 *)0x0) {
    operator_delete(puVar11,local_230);
  }
  std::
  _Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
  ::_M_erase(local_138);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar27;
  }
LAB_00109044:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::MeshGLP<double, unsigned long>::Merge() */

void __thiscall manifold::MeshGLP<double,unsigned_long>::Merge(MeshGLP<double,unsigned_long> *this)

{
  (anonymous_namespace)::MergeMeshGLP<double,unsigned_long>((MeshGLP *)this);
  return;
}



/* manifold::Vec<manifold::Box>::resize(unsigned long, manifold::Box) */

void manifold::Vec<manifold::Box>::resize(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  size_t sVar7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  uVar1 = param_1[1];
  uVar6 = uVar1;
  if ((ulong)param_1[2] < param_2) {
    puVar4 = (undefined8 *)malloc(param_2 * 0x30);
    puVar5 = (undefined8 *)*param_1;
    if (uVar1 == 0) {
      if (puVar5 == (undefined8 *)0x0) {
        *param_1 = puVar4;
        uVar6 = 0;
        param_1[2] = param_2;
        goto LAB_001090d2;
      }
LAB_00109217:
      free(puVar5);
      uVar6 = param_1[1];
    }
    else {
      sVar7 = uVar1 * 0x30;
      if (0x30 < (long)sVar7) {
        memmove(puVar4,puVar5,sVar7);
        goto LAB_00109217;
      }
      if (sVar7 == 0x30) {
        uVar2 = puVar5[1];
        *puVar4 = *puVar5;
        puVar4[1] = uVar2;
        uVar2 = puVar5[3];
        puVar4[2] = puVar5[2];
        puVar4[3] = uVar2;
        uVar2 = puVar5[5];
        puVar4[4] = puVar5[4];
        puVar4[5] = uVar2;
        goto LAB_00109217;
      }
      if (puVar5 != (undefined8 *)0x0) goto LAB_00109217;
    }
    *param_1 = puVar4;
    param_1[2] = param_2;
    if (uVar6 < param_2) goto LAB_001090d2;
LAB_00109233:
    param_1[1] = param_2;
joined_r0x0010923a:
    if (uVar1 <= param_2 * 2) {
      return;
    }
LAB_00109240:
    sVar7 = param_2 * 0x30;
    puVar5 = (undefined8 *)malloc(sVar7);
    puVar4 = (undefined8 *)*param_1;
    if (0x30 < (long)sVar7) {
      memmove(puVar5,puVar4,sVar7);
      goto LAB_00109262;
    }
    if (sVar7 == 0x30) {
      uVar2 = puVar4[1];
      *puVar5 = *puVar4;
      puVar5[1] = uVar2;
      uVar2 = puVar4[3];
      puVar5[2] = puVar4[2];
      puVar5[3] = uVar2;
      uVar2 = puVar4[5];
      puVar5[4] = puVar4[4];
      puVar5[5] = uVar2;
      goto LAB_00109262;
    }
  }
  else {
    if (uVar1 < param_2) {
      puVar4 = (undefined8 *)*param_1;
LAB_001090d2:
      puVar5 = puVar4 + uVar6 * 6;
      if (puVar4 + param_2 * 6 == puVar5) goto LAB_00109233;
      uVar6 = 0;
      puVar3 = puVar5;
      do {
        uVar6 = uVar6 + 1;
        *puVar3 = in_stack_00000008;
        puVar3[1] = in_stack_00000010;
        puVar3[2] = in_stack_00000018;
        puVar3[3] = in_stack_00000020;
        puVar3[4] = in_stack_00000028;
        puVar3[5] = in_stack_00000030;
        puVar3 = puVar3 + 6;
      } while (uVar6 < (((ulong)((long)(puVar4 + param_2 * 6) + (-0x30 - (long)puVar5)) >> 4) *
                        0xaaaaaaaaaaaaaab & 0xfffffffffffffff) + 1);
      param_1[1] = param_2;
      goto joined_r0x0010923a;
    }
    param_1[1] = param_2;
    if (uVar1 <= param_2 * 2) {
      return;
    }
    if (param_2 != 0) goto LAB_00109240;
    puVar4 = (undefined8 *)*param_1;
    puVar5 = (undefined8 *)0x0;
  }
  if (puVar4 == (undefined8 *)0x0) {
    *param_1 = puVar5;
    param_1[2] = param_1[1];
    return;
  }
LAB_00109262:
  free(puVar4);
  *param_1 = puVar5;
  param_1[2] = param_1[1];
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::Collider::Collider(manifold::VecView<manifold::Box const> const&,
   manifold::VecView<unsigned int const> const&) */

void __thiscall manifold::Collider::Collider(Collider *this,VecView *param_1,VecView *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  void *pvVar13;
  double *pdVar14;
  undefined4 *puVar15;
  void *pvVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  double *pdVar20;
  uint *puVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  long lVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  ulong uVar35;
  uint uVar36;
  uint uVar37;
  size_t sVar38;
  bool bVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  ulong local_a0;
  
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  uVar24 = (ulong)((int)uVar6 * 2 + -1);
  *(undefined8 *)(this + 0x30) = 0;
  Vec<manifold::Box>::resize(this,uVar24);
  uVar35 = *(ulong *)(this + 0x20);
  uVar17 = uVar35;
  if (*(ulong *)(this + 0x28) < uVar24) {
    puVar15 = (undefined4 *)malloc(uVar24 * 4);
    puVar7 = *(undefined4 **)(this + 0x18);
    if (uVar35 != 0) {
      sVar38 = uVar35 * 4;
      if ((long)sVar38 < 5) {
        if (sVar38 == 4) {
          *puVar15 = *puVar7;
          goto LAB_00109b4f;
        }
        if (puVar7 != (undefined4 *)0x0) goto LAB_00109b4f;
      }
      else {
        puVar15 = (undefined4 *)memmove(puVar15,puVar7,sVar38);
LAB_00109b4f:
        free(puVar7);
        uVar17 = *(ulong *)(this + 0x20);
      }
      *(undefined4 **)(this + 0x18) = puVar15;
      *(ulong *)(this + 0x28) = uVar24;
      goto LAB_001093b2;
    }
    if (puVar7 != (undefined4 *)0x0) goto LAB_00109b4f;
    *(undefined4 **)(this + 0x18) = puVar15;
    *(ulong *)(this + 0x28) = uVar24;
    memset(puVar15,0xff,uVar24 * 4);
    *(ulong *)(this + 0x20) = uVar24;
  }
  else {
LAB_001093b2:
    if ((uVar17 < uVar24) &&
       (pvVar16 = (void *)(*(long *)(this + 0x18) + uVar17 * 4),
       pvVar16 != (void *)(*(long *)(this + 0x18) + uVar24 * 4))) {
      memset(pvVar16,0xff,(uVar24 - uVar17) * 4);
      *(ulong *)(this + 0x20) = uVar24;
    }
    else {
      *(ulong *)(this + 0x20) = uVar24;
    }
    if (uVar24 * 2 < uVar35) {
      sVar38 = uVar24 * 4;
      puVar15 = (undefined4 *)malloc(sVar38);
      puVar7 = *(undefined4 **)(this + 0x18);
      if ((long)sVar38 < 5) {
        if (sVar38 == 4) {
          *puVar15 = *puVar7;
          goto LAB_00109a53;
        }
        if (puVar7 != (undefined4 *)0x0) goto LAB_00109a53;
      }
      else {
        memmove(puVar15,puVar7,sVar38);
LAB_00109a53:
        free(puVar7);
        uVar24 = *(ulong *)(this + 0x20);
      }
      *(undefined4 **)(this + 0x18) = puVar15;
      *(ulong *)(this + 0x28) = uVar24;
    }
  }
  uVar35 = *(ulong *)(this + 0x38);
  local_a0 = *(long *)(param_1 + 8) - 1;
  uVar24 = local_a0 * 2;
  uVar17 = uVar35;
  if (*(ulong *)(this + 0x40) < local_a0) {
    pvVar16 = malloc(local_a0 * 8);
    pvVar13 = *(void **)(this + 0x30);
    if (uVar35 == 0) {
      if (pvVar13 == (void *)0x0) {
        *(void **)(this + 0x30) = pvVar16;
        *(ulong *)(this + 0x40) = local_a0;
        uVar17 = 0;
        goto LAB_00109409;
      }
LAB_00109c01:
      free(pvVar13);
      uVar17 = *(ulong *)(this + 0x38);
    }
    else {
      if (0 < (long)(uVar35 * 8)) {
        uVar17 = 0;
        do {
          *(undefined8 *)((long)pvVar16 + uVar17 * 8) = *(undefined8 *)((long)pvVar13 + uVar17 * 8);
          uVar17 = uVar17 + 1;
        } while (uVar17 < (ulong)((long)(uVar35 * 8) >> 3));
        goto LAB_00109c01;
      }
      if (pvVar13 != (void *)0x0) goto LAB_00109c01;
    }
    *(void **)(this + 0x30) = pvVar16;
    *(ulong *)(this + 0x40) = local_a0;
    if (uVar17 < local_a0) goto LAB_00109409;
    *(ulong *)(this + 0x38) = local_a0;
joined_r0x00109c31:
    if (uVar24 < uVar35) {
LAB_00109b8e:
      sVar38 = local_a0 * 8;
      pvVar16 = malloc(sVar38);
      pvVar13 = *(void **)(this + 0x30);
      if ((long)sVar38 < 1) {
LAB_00109677:
        if (pvVar13 != (void *)0x0) goto LAB_00109bc1;
      }
      else {
        uVar35 = 0;
        do {
          *(undefined8 *)((long)pvVar16 + uVar35 * 8) = *(undefined8 *)((long)pvVar13 + uVar35 * 8);
          uVar35 = uVar35 + 1;
        } while (uVar35 < (ulong)((long)sVar38 >> 3));
LAB_00109bc1:
        free(pvVar13);
      }
      local_a0 = *(ulong *)(this + 0x38);
      *(void **)(this + 0x30) = pvVar16;
      *(ulong *)(this + 0x40) = local_a0;
      goto LAB_00109466;
    }
    lVar25 = *(long *)(this + 0x18);
    lVar19 = *(long *)param_2;
    iVar33 = (int)*(undefined8 *)(param_2 + 8);
    lVar22 = *(long *)this;
    lVar27 = *(long *)param_1;
    lVar18 = *(long *)(param_1 + 8) * 0x30;
    lVar12 = (lVar18 >> 4) * -0x5555555555555555;
LAB_001094aa:
    uVar35 = 0;
    uVar26 = 1;
    uVar23 = 0xffffffff;
    do {
      uVar34 = (uint)uVar35;
      puVar21 = (uint *)(lVar19 + (long)(int)uVar34 * 4);
      uVar37 = uVar34;
      if ((int)uVar26 < 0) {
LAB_00109b04:
        uVar8 = 0xffffffff;
        uVar30 = 0;
LAB_00109b0d:
        iVar31 = 0x40;
LAB_00109602:
        iVar10 = 0;
        do {
          uVar9 = (iVar31 + iVar10) * uVar30 + uVar34;
          if ((-1 < (int)uVar9) && ((int)uVar9 < iVar33)) {
            uVar36 = *(uint *)(lVar19 + (long)(int)uVar9 * 4);
            if (*puVar21 == uVar36) {
              uVar36 = 0x1f;
              if ((uVar9 ^ uVar34) != 0) {
                for (; (uVar9 ^ uVar34) >> uVar36 == 0; uVar36 = uVar36 - 1) {
                }
              }
              uVar9 = (uVar36 ^ 0x1f) + 0x20;
            }
            else {
              uVar36 = *puVar21 ^ uVar36;
              uVar9 = 0x1f;
              if (uVar36 != 0) {
                for (; uVar36 >> uVar9 == 0; uVar9 = uVar9 - 1) {
                }
              }
              uVar9 = uVar9 ^ 0x1f;
            }
            if ((int)uVar8 < (int)uVar9) {
              iVar10 = iVar31 + iVar10;
            }
          }
          iVar31 = iVar31 >> 1;
        } while (iVar31 != 0);
        iVar10 = iVar10 * uVar30;
        uVar8 = uVar34 + iVar10;
        uVar30 = uVar8;
        if ((int)uVar8 < (int)uVar34) {
          iVar10 = -iVar10;
          puVar21 = (uint *)(lVar19 + (long)(int)uVar8 * 4);
          uVar30 = uVar34;
          uVar37 = uVar8;
        }
      }
      else {
        if ((int)uVar26 < iVar33) {
          uVar8 = *(uint *)(lVar19 + (long)(int)uVar26 * 4);
          if (*puVar21 == uVar8) {
            uVar30 = 0x1f;
            if ((uVar26 ^ uVar34) != 0) {
              for (; (uVar26 ^ uVar34) >> uVar30 == 0; uVar30 = uVar30 - 1) {
              }
            }
            uVar30 = (uVar30 ^ 0x1f) + 0x20;
          }
          else {
            uVar8 = *puVar21 ^ uVar8;
            uVar30 = 0x1f;
            if (uVar8 != 0) {
              for (; uVar8 >> uVar30 == 0; uVar30 = uVar30 - 1) {
              }
            }
            uVar30 = uVar30 ^ 0x1f;
          }
        }
        else {
          uVar30 = 0xffffffff;
        }
        if ((int)uVar23 < 0) {
          uVar30 = ~uVar30 >> 0x1f;
          if (uVar30 != uVar34) goto LAB_00109c74;
          if (iVar33 < 1) goto LAB_00109b04;
          uVar8 = 0;
          uVar30 = 0;
LAB_00109567:
          uVar9 = *(uint *)(lVar19 + (long)(int)uVar8 * 4);
          if (*puVar21 == uVar9) {
            uVar9 = 0x1f;
            if ((uVar8 ^ uVar34) != 0) {
              for (; (uVar8 ^ uVar34) >> uVar9 == 0; uVar9 = uVar9 - 1) {
              }
            }
            uVar8 = (uVar9 ^ 0x1f) + 0x20;
          }
          else {
            uVar9 = *puVar21 ^ uVar9;
            uVar8 = 0x1f;
            if (uVar9 != 0) {
              for (; uVar9 >> uVar8 == 0; uVar8 = uVar8 - 1) {
              }
            }
            uVar8 = uVar8 ^ 0x1f;
          }
        }
        else {
          if ((int)uVar23 < iVar33) {
            uVar8 = *(uint *)(lVar19 + (ulong)uVar23 * 4);
            if (*puVar21 == uVar8) {
              uVar8 = 0x1f;
              if ((uVar34 ^ uVar23) != 0) {
                for (; (uVar34 ^ uVar23) >> uVar8 == 0; uVar8 = uVar8 - 1) {
                }
              }
              uVar9 = (uVar8 ^ 0x1f) + 0x20;
            }
            else {
              uVar8 = *puVar21 ^ uVar8;
              uVar9 = 0x1f;
              if (uVar8 != 0) {
                for (; uVar8 >> uVar9 == 0; uVar9 = uVar9 - 1) {
                }
              }
              uVar9 = uVar9 ^ 0x1f;
            }
            uVar30 = (uint)(0 < (int)(uVar30 - uVar9)) + ((int)(uVar30 - uVar9) >> 0x1f);
          }
          else {
            uVar30 = ~uVar30 >> 0x1f;
          }
          uVar8 = uVar34 - uVar30;
          if ((int)uVar8 < iVar33) goto LAB_00109567;
LAB_00109c74:
          uVar8 = 0xffffffff;
        }
        uVar9 = uVar30 * 0x80 + uVar34;
        if (((int)uVar9 < 0) || (iVar33 <= (int)uVar9)) goto LAB_00109b0d;
        iVar10 = 0x80;
        while( true ) {
          uVar36 = *(uint *)(lVar19 + (long)(int)uVar9 * 4);
          if (*puVar21 == uVar36) {
            uVar36 = 0x1f;
            if ((uVar9 ^ uVar34) != 0) {
              for (; (uVar9 ^ uVar34) >> uVar36 == 0; uVar36 = uVar36 - 1) {
              }
            }
            uVar9 = (uVar36 ^ 0x1f) + 0x20;
          }
          else {
            uVar36 = uVar36 ^ *puVar21;
            uVar9 = 0x1f;
            if (uVar36 != 0) {
              for (; uVar36 >> uVar9 == 0; uVar9 = uVar9 - 1) {
              }
            }
            uVar9 = uVar9 ^ 0x1f;
          }
          if ((int)uVar9 <= (int)uVar8) break;
          iVar10 = iVar10 * 4;
          uVar9 = uVar30 * iVar10 + uVar34;
          if (((int)uVar9 < 0) || (iVar33 <= (int)uVar9)) break;
        }
        iVar31 = iVar10 >> 1;
        if (1 < iVar10) goto LAB_00109602;
        iVar10 = 0;
        uVar30 = uVar34;
      }
      uVar8 = uVar37;
      if (((int)uVar30 < 0) || (iVar33 <= (int)uVar30)) {
        uVar9 = 0xffffffff;
      }
      else {
        uVar36 = *(uint *)(lVar19 + (long)(int)uVar30 * 4);
        if (*puVar21 == uVar36) {
          uVar9 = 0x1f;
          if ((uVar37 ^ uVar30) != 0) {
            for (; (uVar37 ^ uVar30) >> uVar9 == 0; uVar9 = uVar9 - 1) {
            }
          }
          uVar9 = (uVar9 ^ 0x1f) + 0x20;
        }
        else {
          uVar36 = *puVar21 ^ uVar36;
          uVar9 = 0x1f;
          if (uVar36 != 0) {
            for (; uVar36 >> uVar9 == 0; uVar9 = uVar9 - 1) {
            }
          }
          uVar9 = uVar9 ^ 0x1f;
        }
      }
      do {
        iVar10 = iVar10 + 1 >> 1;
        uVar36 = iVar10 + uVar8;
        if ((((int)uVar36 < (int)uVar30) && (-1 < (int)uVar36)) && ((int)uVar36 < iVar33)) {
          uVar28 = *(uint *)(lVar19 + (long)(int)uVar36 * 4);
          if (*puVar21 == uVar28) {
            uVar28 = 0x1f;
            if ((uVar37 ^ uVar36) != 0) {
              for (; (uVar37 ^ uVar36) >> uVar28 == 0; uVar28 = uVar28 - 1) {
              }
            }
            uVar29 = (uVar28 ^ 0x1f) + 0x20;
          }
          else {
            uVar28 = *puVar21 ^ uVar28;
            uVar29 = 0x1f;
            if (uVar28 != 0) {
              for (; uVar28 >> uVar29 == 0; uVar29 = uVar29 - 1) {
              }
            }
            uVar29 = uVar29 ^ 0x1f;
          }
          if ((int)uVar9 < (int)uVar29) {
            uVar8 = uVar36;
          }
        }
      } while (1 < iVar10);
      iVar10 = (uint)(uVar37 != uVar8) + uVar8 * 2;
      uVar35 = uVar35 + 1;
      uVar26 = uVar26 + 1;
      uVar23 = uVar23 + 1;
      iVar32 = (uVar30 != uVar8 + 1) + 2 + uVar8 * 2;
      piVar2 = (int *)((long)pvVar16 + (long)(int)uVar34 * 8);
      *piVar2 = iVar10;
      piVar2[1] = iVar32;
      iVar31 = uVar34 * 2 + 1;
      *(int *)(lVar25 + (long)iVar10 * 4) = iVar31;
      *(int *)(lVar25 + (long)iVar32 * 4) = iVar31;
    } while (uVar35 != local_a0);
    if (0 < lVar18) goto LAB_001097ec;
  }
  else {
    if (uVar35 < local_a0) {
      pvVar16 = *(void **)(this + 0x30);
LAB_00109409:
      uVar6 = _LC9;
      puVar1 = (undefined8 *)((long)pvVar16 + local_a0 * 8);
      puVar11 = (undefined8 *)((long)pvVar16 + uVar17 * 8);
      if (puVar1 == puVar11) {
        *(ulong *)(this + 0x38) = local_a0;
        goto joined_r0x00109c31;
      }
      if (((int)puVar1 - (int)puVar11 & 8U) == 0) goto LAB_00109440;
      *puVar11 = _LC9;
      for (puVar11 = puVar11 + 1; puVar1 != puVar11; puVar11 = puVar11 + 2) {
LAB_00109440:
        *puVar11 = uVar6;
        puVar11[1] = uVar6;
      }
      *(ulong *)(this + 0x38) = local_a0;
      if (uVar24 < uVar35) goto LAB_00109b8e;
    }
    else {
      *(ulong *)(this + 0x38) = local_a0;
      if (uVar24 < uVar35) {
        if (local_a0 != 0) goto LAB_00109b8e;
        pvVar13 = *(void **)(this + 0x30);
        pvVar16 = (void *)0x0;
        goto LAB_00109677;
      }
    }
    pvVar16 = *(void **)(this + 0x30);
LAB_00109466:
    lVar25 = *(long *)(this + 0x18);
    lVar19 = *(long *)param_2;
    iVar33 = (int)*(undefined8 *)(param_2 + 8);
    lVar22 = *(long *)this;
    lVar18 = *(long *)(param_1 + 8) * 0x30;
    lVar12 = (lVar18 >> 4) * -0x5555555555555555;
    lVar27 = *(long *)param_1;
    if (local_a0 != 0) goto LAB_001094aa;
    if (lVar18 < 1) {
      return;
    }
LAB_001097ec:
    lVar19 = 0;
    do {
      uVar6 = ((undefined8 *)(lVar27 + lVar19))[1];
      puVar1 = (undefined8 *)(lVar22 + lVar19 * 2);
      *puVar1 = *(undefined8 *)(lVar27 + lVar19);
      puVar1[1] = uVar6;
      puVar1 = (undefined8 *)(lVar27 + 0x10 + lVar19);
      uVar6 = puVar1[1];
      puVar11 = (undefined8 *)(lVar22 + 0x10 + lVar19 * 2);
      *puVar11 = *puVar1;
      puVar11[1] = uVar6;
      puVar1 = (undefined8 *)(lVar27 + 0x20 + lVar19);
      uVar6 = puVar1[1];
      puVar11 = (undefined8 *)(lVar22 + 0x20 + lVar19 * 2);
      *puVar11 = *puVar1;
      puVar11[1] = uVar6;
      lVar19 = lVar19 + 0x30;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    if (local_a0 == 0) {
      return;
    }
  }
  pvVar13 = calloc(local_a0 * 4,1);
  if (local_a0 * 4 == 0) {
    if (local_a0 != 0xffffffffffffffff) goto LAB_00109870;
  }
  else {
    if (local_a0 == 0xffffffffffffffff) goto LAB_001099b9;
LAB_00109870:
    uVar35 = 0;
    do {
      lVar19 = (long)((int)uVar35 * 2);
      do {
        iVar31 = *(int *)(lVar25 + lVar19 * 4);
        lVar19 = (long)((iVar31 + -1) / 2);
        LOCK();
        piVar2 = (int *)((long)pvVar13 + lVar19 * 4);
        iVar33 = *piVar2;
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        if (iVar33 == 0) break;
        piVar2 = (int *)((long)pvVar16 + lVar19 * 8);
        pdVar14 = (double *)((long)*piVar2 * 0x30 + lVar22);
        pdVar20 = (double *)((long)piVar2[1] * 0x30 + lVar22);
        dVar41 = *pdVar14;
        if (*pdVar20 <= *pdVar14) {
          dVar41 = *pdVar20;
        }
        dVar3 = pdVar14[1];
        if (pdVar20[1] <= pdVar14[1]) {
          dVar3 = pdVar20[1];
        }
        dVar40 = pdVar14[2];
        if (pdVar20[2] <= pdVar14[2]) {
          dVar40 = pdVar20[2];
        }
        dVar42 = pdVar20[5];
        if (pdVar20[5] <= pdVar14[5]) {
          dVar42 = pdVar14[5];
        }
        dVar4 = pdVar20[3];
        if (pdVar20[3] <= pdVar14[3]) {
          dVar4 = pdVar14[3];
        }
        lVar19 = (long)iVar31;
        dVar5 = pdVar20[4];
        if (pdVar20[4] <= pdVar14[4]) {
          dVar5 = pdVar14[4];
        }
        pdVar14 = (double *)(lVar19 * 0x30 + lVar22);
        *pdVar14 = dVar41;
        pdVar14[1] = dVar3;
        pdVar14[2] = dVar40;
        pdVar14[3] = dVar4;
        pdVar14[4] = dVar5;
        pdVar14[5] = dVar42;
      } while (iVar31 != 1);
      bVar39 = uVar35 != local_a0;
      uVar35 = uVar35 + 1;
    } while (bVar39);
  }
  if (pvVar13 == (void *)0x0) {
    return;
  }
LAB_001099b9:
  free(pvVar13);
  return;
}



/* void manifold::Permute<linalg::vec<double, 3>, int>(manifold::Vec<linalg::vec<double, 3> >&,
   manifold::Vec<int> const&) */

void manifold::Permute<linalg::vec<double,3>,int>(Vec *param_1,Vec *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  void *__ptr;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  int *piVar8;
  
  __ptr = *(void **)param_1;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  uVar4 = *(ulong *)(param_2 + 8);
  *(undefined8 *)param_1 = 0;
  if (uVar4 == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    pauVar6 = (undefined1 (*) [16])malloc(uVar4 * 0x18);
    *(ulong *)(param_1 + 0x10) = uVar4;
    *(undefined1 (**) [16])param_1 = pauVar6;
    for (pauVar7 = pauVar6; (undefined1 (*) [16])((long)pauVar6 + uVar4 * 0x18) != pauVar7;
        pauVar7 = (undefined1 (*) [16])(pauVar7[1] + 8)) {
      *(undefined8 *)pauVar7[1] = 0;
      *pauVar7 = (undefined1  [16])0x0;
    }
    *(ulong *)(param_1 + 8) = uVar4;
    piVar8 = *(int **)param_2;
    if ((uVar4 & 0x3fffffffffffffff) != 0) {
      piVar1 = piVar8 + uVar4;
      do {
        iVar3 = *piVar8;
        piVar8 = piVar8 + 1;
        puVar2 = (undefined8 *)((long)__ptr + (long)iVar3 * 0x18);
        uVar5 = puVar2[1];
        *(undefined8 *)*pauVar6 = *puVar2;
        *(undefined8 *)(*pauVar6 + 8) = uVar5;
        *(undefined8 *)pauVar6[1] = puVar2[2];
        pauVar6 = (undefined1 (*) [16])(pauVar6[1] + 8);
      } while (piVar1 != piVar8);
    }
  }
  if (__ptr == (void *)0x0) {
    return;
  }
  free(__ptr);
  return;
}



/* void manifold::Permute<unsigned int, int>(manifold::Vec<unsigned int>&, manifold::Vec<int>
   const&) */

void manifold::Permute<unsigned_int,int>(Vec *param_1,Vec *param_2)

{
  size_t __nmemb;
  void *__ptr;
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  __ptr = *(void **)param_1;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  lVar1 = *(long *)(param_2 + 8);
  *(undefined8 *)param_1 = 0;
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    __nmemb = lVar1 * 4;
    pvVar2 = calloc(__nmemb,1);
    *(long *)(param_1 + 0x10) = lVar1;
    *(void **)param_1 = pvVar2;
    *(long *)(param_1 + 8) = lVar1;
    if (__nmemb != 0) {
      lVar1 = *(long *)param_2;
      lVar3 = 0;
      do {
        *(undefined4 *)((long)pvVar2 + lVar3) =
             *(undefined4 *)((long)__ptr + (long)*(int *)(lVar1 + lVar3) * 4);
        lVar3 = lVar3 + 4;
      } while (__nmemb - lVar3 != 0);
    }
  }
  if (__ptr == (void *)0x0) {
    return;
  }
  free(__ptr);
  return;
}



/* void manifold::Permute<manifold::Box, int>(manifold::Vec<manifold::Box>&, manifold::Vec<int>
   const&) */

void manifold::Permute<manifold::Box,int>(Vec *param_1,Vec *param_2)

{
  int *piVar1;
  int iVar2;
  void *__ptr;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  size_t __size;
  
  __ptr = *(void **)param_1;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  uVar3 = *(ulong *)(param_2 + 8);
  *(undefined8 *)param_1 = 0;
  if (uVar3 == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    __size = uVar3 * 0x30;
    puVar6 = (undefined8 *)malloc(__size);
    *(ulong *)(param_1 + 0x10) = uVar3;
    *(undefined8 **)param_1 = puVar6;
    uVar5 = _LC8;
    uVar4 = _LC5;
    if (__size != 0) {
      uVar8 = 0;
      puVar7 = puVar6;
      do {
        uVar8 = uVar8 + 1;
        *puVar7 = uVar4;
        puVar7[1] = uVar4;
        puVar7[2] = uVar4;
        puVar7[3] = uVar5;
        puVar7[4] = uVar5;
        puVar7[5] = uVar5;
        puVar7 = puVar7 + 6;
      } while (uVar8 < ((__size - 0x30 >> 4) * 0xaaaaaaaaaaaaaab & 0xfffffffffffffff) + 1);
    }
    *(ulong *)(param_1 + 8) = uVar3;
    piVar9 = *(int **)param_2;
    if ((uVar3 & 0x3fffffffffffffff) != 0) {
      piVar1 = piVar9 + uVar3;
      do {
        iVar2 = *piVar9;
        piVar9 = piVar9 + 1;
        puVar7 = (undefined8 *)((long)iVar2 * 0x30 + (long)__ptr);
        uVar4 = puVar7[1];
        *puVar6 = *puVar7;
        puVar6[1] = uVar4;
        uVar4 = puVar7[3];
        puVar6[2] = puVar7[2];
        puVar6[3] = uVar4;
        uVar4 = puVar7[5];
        puVar6[4] = puVar7[4];
        puVar6[5] = uVar4;
        puVar6 = puVar6 + 6;
      } while (piVar9 != piVar1);
    }
  }
  if (__ptr == (void *)0x0) {
    return;
  }
  free(__ptr);
  return;
}



/* void manifold::Permute<manifold::TriRef, int>(manifold::Vec<manifold::TriRef>&,
   manifold::Vec<int> const&) */

void manifold::Permute<manifold::TriRef,int>(Vec *param_1,Vec *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  void *__ptr;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  size_t __size;
  
  __ptr = *(void **)param_1;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  uVar4 = *(ulong *)(param_2 + 8);
  *(undefined8 *)param_1 = 0;
  if (uVar4 == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    __size = uVar4 * 0x10;
    puVar6 = (undefined8 *)malloc(__size);
    *(ulong *)(param_1 + 0x10) = uVar4;
    *(undefined8 **)param_1 = puVar6;
    if (__size != 0) {
      uVar7 = 0;
      do {
        uVar8 = uVar7 + 1;
        *(undefined1 (*) [16])(puVar6 + uVar7 * 2) = (undefined1  [16])0x0;
        uVar7 = uVar8;
      } while (uVar8 < (__size - 0x10 >> 4) + 1);
    }
    *(ulong *)(param_1 + 8) = uVar4;
    piVar9 = *(int **)param_2;
    if ((uVar4 & 0x3fffffffffffffff) != 0) {
      piVar1 = piVar9 + uVar4;
      do {
        iVar3 = *piVar9;
        piVar9 = piVar9 + 1;
        puVar2 = (undefined8 *)((long)__ptr + (long)iVar3 * 0x10);
        uVar5 = puVar2[1];
        *puVar6 = *puVar2;
        puVar6[1] = uVar5;
        puVar6 = puVar6 + 2;
      } while (piVar9 != piVar1);
    }
  }
  if (__ptr == (void *)0x0) {
    return;
  }
  free(__ptr);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<unsigned long, std::allocator<unsigned long> >::_M_realloc_insert<unsigned long
   const&>(__gnu_cxx::__normal_iterator<unsigned long*, std::vector<unsigned long,
   std::allocator<unsigned long> > >, unsigned long const&) */

void __thiscall
std::vector<unsigned_long,std::allocator<unsigned_long>>::_M_realloc_insert<unsigned_long_const&>
          (vector<unsigned_long,std::allocator<unsigned_long>> *this,void *param_2,
          undefined8 *param_3)

{
  void *__dest;
  void *pvVar1;
  void *__src;
  ulong uVar2;
  void *__dest_00;
  ulong uVar3;
  size_t __n;
  long lVar4;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar2 = (long)pvVar1 - (long)__src >> 3;
  if (uVar2 == 0xfffffffffffffff) {
    std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_0010a1d0;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_0010a1da:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_0010a1d0:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_0010a1da;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_0010a1da;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 8);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined8 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_0010a1ac;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010a1ac:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* void manifold::Permute<int, int>(manifold::Vec<int>&, manifold::Vec<int> const&) */

void manifold::Permute<int,int>(Vec *param_1,Vec *param_2)

{
  long lVar1;
  void *__ptr;
  long lVar2;
  void *pvVar3;
  long lVar4;
  
  pvVar3 = (void *)0x0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  lVar1 = *(long *)(param_2 + 8);
  __ptr = *(void **)param_1;
  *(undefined8 *)param_1 = 0;
  if (lVar1 != 0) {
    pvVar3 = calloc(lVar1 * 4,1);
    *(long *)(param_1 + 0x10) = lVar1;
    *(void **)param_1 = pvVar3;
  }
  *(long *)(param_1 + 8) = lVar1;
  lVar1 = *(long *)(param_2 + 8);
  lVar4 = 0;
  lVar2 = *(long *)param_2;
  if (lVar1 << 2 != 0) {
    do {
      *(undefined4 *)((long)pvVar3 + lVar4) =
           *(undefined4 *)((long)__ptr + (long)*(int *)(lVar2 + lVar4) * 4);
      lVar4 = lVar4 + 4;
    } while (lVar1 << 2 != lVar4);
  }
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
  return;
}



/* manifold::UnionFind<int, unsigned char>::UnionFind(int) */

void __thiscall
manifold::UnionFind<int,unsigned_char>::UnionFind(UnionFind<int,unsigned_char> *this,int param_1)

{
  long lVar1;
  size_t __size;
  undefined4 *puVar2;
  void *pvVar3;
  long lVar4;
  size_t __nmemb;
  
  __nmemb = (size_t)param_1;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (__nmemb == 0) {
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
  }
  else {
    __size = __nmemb * 4;
    puVar2 = (undefined4 *)malloc(__size);
    *(undefined4 **)this = puVar2;
    *(size_t *)(this + 8) = __nmemb;
    *(size_t *)(this + 0x10) = __nmemb;
    pvVar3 = calloc(__nmemb,1);
    *(size_t *)(this + 0x28) = __nmemb;
    *(void **)(this + 0x18) = pvVar3;
    lVar4 = 0;
    *(size_t *)(this + 0x20) = __nmemb;
    if ((__size & 4) != 0) {
      lVar4 = 1;
      *puVar2 = 0;
      if ((long)__size >> 2 == 1) {
        return;
      }
    }
    do {
      puVar2[lVar4] = (int)lVar4;
      lVar1 = lVar4 + 1;
      lVar4 = lVar4 + 2;
      puVar2[lVar1] = (int)lVar1;
    } while (lVar4 != (long)__size >> 2);
  }
  return;
}



/* std::_Rb_tree<std::pair<int, int>, std::pair<int, int>, std::_Identity<std::pair<int, int> >,
   std::less<std::pair<int, int> >, std::allocator<std::pair<int, int> > >::find(std::pair<int, int>
   const&) */

_Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
* __thiscall
std::
_Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
::find(_Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
       *this,pair *param_1)

{
  _Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
  *p_Var1;
  int iVar2;
  _Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
  *p_Var3;
  _Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
  *p_Var4;
  _Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
  *p_Var5;
  _Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
  *p_Var6;
  
  iVar2 = *(int *)param_1;
  p_Var6 = this + 8;
  p_Var3 = *(_Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
             **)(this + 0x10);
  p_Var4 = p_Var6;
  if (*(_Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
        **)(this + 0x10) !=
      (_Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
       *)0x0) {
    do {
      while ((p_Var5 = p_Var3, iVar2 <= *(int *)(p_Var5 + 0x20) &&
             ((iVar2 != *(int *)(p_Var5 + 0x20) ||
              (*(int *)(param_1 + 4) <= *(int *)(p_Var5 + 0x24)))))) {
        p_Var3 = *(_Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
                   **)(p_Var5 + 0x10);
        p_Var4 = p_Var5;
        if (*(_Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
              **)(p_Var5 + 0x10) ==
            (_Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
             *)0x0) goto LAB_0010a461;
      }
      p_Var1 = p_Var5 + 0x18;
      p_Var3 = *(_Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
                 **)p_Var1;
      p_Var5 = p_Var4;
    } while (*(_Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
               **)p_Var1 !=
             (_Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
              *)0x0);
LAB_0010a461:
    if ((p_Var6 != p_Var5) && (*(int *)(p_Var5 + 0x20) <= iVar2)) {
      if (*(int *)(p_Var5 + 0x20) != iVar2) {
        return p_Var5;
      }
      if (*(int *)(p_Var5 + 0x24) <= *(int *)(param_1 + 4)) {
        p_Var6 = p_Var5;
      }
      return p_Var6;
    }
  }
  return p_Var6;
}



/* std::_Rb_tree_iterator<std::pair<int, int> > std::_Rb_tree<std::pair<int, int>, std::pair<int,
   int>, std::_Identity<std::pair<int, int> >, std::less<std::pair<int, int> >,
   std::allocator<std::pair<int, int> > >::_M_insert_equal<std::pair<int, int>
   const&>(std::pair<int, int> const&) */

_Rb_tree_node_base * __thiscall
std::
_Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
::_M_insert_equal<std::pair<int,int>const&>
          (_Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>
           *this,pair *param_1)

{
  _Rb_tree_node_base *p_Var1;
  int iVar2;
  int iVar3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  bool bVar6;
  
  p_Var1 = (_Rb_tree_node_base *)(this + 8);
  iVar2 = *(int *)param_1;
  p_Var4 = *(_Rb_tree_node_base **)(this + 0x10);
  if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
    bVar6 = true;
    p_Var5 = p_Var1;
  }
  else {
    do {
      p_Var5 = p_Var4;
      iVar3 = *(int *)(p_Var5 + 0x20);
      if ((iVar2 < iVar3) || ((iVar2 == iVar3 && (*(int *)(param_1 + 4) < *(int *)(p_Var5 + 0x24))))
         ) {
        p_Var4 = *(_Rb_tree_node_base **)(p_Var5 + 0x10);
      }
      else {
        p_Var4 = *(_Rb_tree_node_base **)(p_Var5 + 0x18);
      }
    } while (p_Var4 != (_Rb_tree_node_base *)0x0);
    bVar6 = true;
    if (((p_Var1 != p_Var5) && (iVar3 <= iVar2)) && (bVar6 = false, iVar2 == iVar3)) {
      bVar6 = *(int *)(param_1 + 4) < *(int *)(p_Var5 + 0x24);
    }
  }
  p_Var4 = (_Rb_tree_node_base *)operator_new(0x28);
  *(undefined8 *)(p_Var4 + 0x20) = *(undefined8 *)param_1;
  std::_Rb_tree_insert_and_rebalance(bVar6,p_Var4,p_Var5,p_Var1);
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  return p_Var4;
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<unsigned int, std::allocator<unsigned int> >::_M_realloc_insert<unsigned
   int>(__gnu_cxx::__normal_iterator<unsigned int*, std::vector<unsigned int,
   std::allocator<unsigned int> > >, unsigned int&&) */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>
          (vector<unsigned_int,std::allocator<unsigned_int>> *this,void *param_2,undefined4 *param_3
          )

{
  void *__dest;
  void *pvVar1;
  void *__src;
  ulong uVar2;
  void *__dest_00;
  ulong uVar3;
  size_t __n;
  long lVar4;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar2 = (long)pvVar1 - (long)__src >> 2;
  if (uVar2 == 0x1fffffffffffffff) {
    std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_0010a620;
    uVar3 = 0x1fffffffffffffff;
    if (uVar2 + 1 < 0x2000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 2;
LAB_0010a62a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_0010a620:
      uVar3 = 0x7ffffffffffffffc;
      goto LAB_0010a62a;
    }
    if (uVar3 != 0) {
      if (0x1fffffffffffffff < uVar3) {
        uVar3 = 0x1fffffffffffffff;
      }
      uVar3 = uVar3 * 4;
      goto LAB_0010a62a;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 4);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined4 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_0010a5fb;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010a5fb:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* std::_Temporary_buffer<int*, int>::_Temporary_buffer(int*, long) */

void __thiscall
std::_Temporary_buffer<int*,int>::_Temporary_buffer
          (_Temporary_buffer<int*,int> *this,int *param_1,long param_2)

{
  void *pvVar1;
  long lVar2;
  
  *(long *)this = param_2;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  lVar2 = 0x1fffffffffffffff;
  if (param_2 < 0x2000000000000000) {
    lVar2 = param_2;
  }
  if (0 < param_2) {
    while( true ) {
      pvVar1 = operator_new(lVar2 * 4,(nothrow_t *)&nothrow);
      if (pvVar1 != (void *)0x0) {
        *(void **)(this + 0x10) = pvVar1;
        *(long *)(this + 8) = lVar2;
        return;
      }
      if (lVar2 == 1) break;
      lVar2 = lVar2 + 1 >> 1;
    }
    return;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__rotate_adaptive<int*, int*, long>(int*, int*, int*, long, long, int*, long) */

int * std::__rotate_adaptive<int*,int*,long>
                (int *param_1,int *param_2,int *param_3,long param_4,long param_5,int *param_6,
                long param_7)

{
  size_t sVar1;
  int *piVar2;
  size_t sVar3;
  long lVar4;
  
  if ((param_5 < param_4) && (param_5 <= param_7)) {
    piVar2 = param_1;
    if (param_5 != 0) {
      sVar1 = (long)param_3 - (long)param_2;
      sVar3 = (long)param_2 - (long)param_1;
      if ((long)sVar1 < 5) {
        if (sVar1 == 4) {
          *param_6 = *param_2;
          if ((long)sVar3 < 5) {
            if (sVar3 == 4) {
              param_3[-1] = *param_1;
            }
          }
          else {
            memmove((void *)((long)param_3 - sVar3),param_1,sVar3);
          }
          *param_1 = *param_6;
        }
        else if ((long)sVar3 < 5) {
          if (sVar3 == 4) {
            param_3[-1] = *param_1;
          }
        }
        else {
          memmove((void *)((long)param_3 - sVar3),param_1,sVar3);
        }
      }
      else {
        memmove(param_6,param_2,sVar1);
        if ((long)sVar3 < 5) {
          if (sVar3 == 4) {
            param_3[-1] = *param_1;
          }
        }
        else {
          memmove((void *)((long)param_3 - sVar3),param_1,sVar3);
        }
        memmove(param_1,param_6,sVar1);
      }
      piVar2 = (int *)(sVar1 + (long)param_1);
    }
  }
  else {
    if (param_7 < param_4) {
      piVar2 = _V2::__rotate<int*>(param_1,param_2,param_3);
      return piVar2;
    }
    piVar2 = param_3;
    if (param_4 != 0) {
      sVar3 = (long)param_2 - (long)param_1;
      sVar1 = (long)param_3 - (long)param_2;
      if ((long)sVar3 < 5) {
        if (sVar3 == 4) {
          *param_6 = *param_1;
          if ((long)sVar1 < 5) {
            if (sVar1 == 4) {
              *param_1 = *param_2;
            }
          }
          else {
            memmove(param_1,param_2,sVar1);
          }
          lVar4 = -4;
          param_3[-1] = *param_6;
        }
        else {
          lVar4 = -sVar3;
          if ((long)sVar1 < 5) {
            if (sVar1 != 4) {
              return (int *)((long)param_3 + lVar4);
            }
            *param_1 = *param_2;
          }
          else {
            memmove(param_1,param_2,sVar1);
          }
        }
        piVar2 = (int *)((long)param_3 + lVar4);
      }
      else {
        memmove(param_6,param_1,sVar3);
        if ((long)sVar1 < 5) {
          if (sVar1 == 4) {
            *param_1 = *param_2;
          }
        }
        else {
          memmove(param_1,param_2,sVar1);
        }
        piVar2 = (int *)((long)param_3 - sVar3);
        memmove(piVar2,param_6,sVar3);
      }
    }
  }
  return piVar2;
}



/* manifold::collider_internal::FindCollision<manifold::Box, true,
   manifold::collider_internal::SeqCollisionRecorder<false> >::RecordCollision(int, int,
   manifold::SparseIndices&) */

bool __thiscall
manifold::collider_internal::
FindCollision<manifold::Box,true,manifold::collider_internal::SeqCollisionRecorder<false>>::
RecordCollision(FindCollision<manifold::Box,true,manifold::collider_internal::SeqCollisionRecorder<false>>
                *this,int param_1,int param_2,SparseIndices *param_3)

{
  size_t __n;
  ulong uVar1;
  undefined1 *__src;
  uint uVar2;
  ulong uVar3;
  double *pdVar4;
  undefined1 *__dest;
  double *pdVar5;
  ulong __size;
  int iVar6;
  ulong uVar7;
  
  uVar3 = (ulong)param_1;
  pdVar4 = (double *)((long)param_2 * 0x30 + *(long *)this);
  pdVar5 = (double *)(uVar3 * 0x30 + *(long *)(this + 0x10));
  if (((((pdVar4[3] < *pdVar5) || (pdVar4[4] < pdVar5[1])) || (pdVar4[5] < pdVar5[2])) ||
      ((pdVar5[3] < *pdVar4 || (pdVar5[4] < pdVar4[1])))) || (pdVar5[5] < pdVar4[2])) {
    return false;
  }
  if (((uVar3 & 1) != 0) ||
     (iVar6 = (int)(((uint)(uVar3 >> 0x1f) & 1) + param_1) >> 1, param_2 == iVar6))
  goto LAB_0010aa89;
  __n = *(size_t *)(param_3 + 8);
  uVar1 = *(ulong *)(param_3 + 0x10);
  uVar7 = __n + 8;
  if (uVar7 < uVar1) {
LAB_0010aa6f:
    __dest = *(undefined1 **)param_3;
  }
  else {
    if (uVar1 == 0) {
      __size = 0x80;
    }
    else {
      __size = uVar1 * 2;
      if (uVar1 * 2 < uVar7) {
        __size = uVar7;
      }
      if (__size <= uVar1) goto LAB_0010aa6f;
    }
    __dest = (undefined1 *)malloc(__size);
    __src = *(undefined1 **)param_3;
    if (__n == 0) {
LAB_0010aadb:
      if (__src != (undefined1 *)0x0) goto LAB_0010ab09;
    }
    else {
      if ((long)__n < 2) {
        if (__n != 1) goto LAB_0010aadb;
        *__dest = *__src;
      }
      else {
        memmove(__dest,__src,__n);
      }
LAB_0010ab09:
      free(__src);
      uVar7 = *(long *)(param_3 + 8) + 8;
    }
    *(undefined1 **)param_3 = __dest;
    *(ulong *)(param_3 + 0x10) = __size;
  }
  *(ulong *)(param_3 + 8) = uVar7;
  *(long *)(__dest + ((uVar7 & 0xfffffffffffffff8) - 8)) = (long)param_2 << 0x20 | (long)iVar6;
LAB_0010aa89:
  uVar2 = (uint)(uVar3 >> 0x1f) & 1;
  return (param_1 + uVar2 & 1) - uVar2 == 1;
}



/* WARNING: Control flow encountered bad instruction data */
/* manifold::Collider::Collider(manifold::VecView<manifold::Box const> const&,
   manifold::VecView<unsigned int const> const&) */

void __thiscall manifold::Collider::Collider(Collider *this,VecView *param_1,VecView *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Temporary_buffer<int*, int>::_Temporary_buffer(int*, long) */

void std::_Temporary_buffer<int*,int>::_Temporary_buffer(int *param_1,long param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* manifold::UnionFind<int, unsigned char>::UnionFind(int) */

void manifold::UnionFind<int,unsigned_char>::UnionFind(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



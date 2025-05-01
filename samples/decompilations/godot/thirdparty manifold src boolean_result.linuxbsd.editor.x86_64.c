
/* std::_Function_handler<void (unsigned long), (anonymous namespace)::AddNewEdgeVerts(std::map<int,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> >,
   std::less<int>, std::allocator<std::pair<int const, std::vector<(anonymous namespace)::EdgePos,
   std::allocator<(anonymous namespace)::EdgePos> > > > >&, std::map<std::pair<int, int>,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> >,
   std::less<std::pair<int, int> >, std::allocator<std::pair<std::pair<int, int> const,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > > >
   >&, manifold::SparseIndices const&, manifold::Vec<int> const&, manifold::Vec<int> const&,
   manifold::Vec<manifold::Halfedge> const&, bool)::{lambda(unsigned
   long)#1}>::_M_invoke(std::_Any_data const&, unsigned long&&) */

void std::
     _Function_handler<void(unsigned_long),(anonymous_namespace)::AddNewEdgeVerts(std::map<int,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>&,std::map<std::pair<int,int>,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>&,manifold::SparseIndices_const&,manifold::Vec<int>const&,manifold::Vec<int>const&,manifold::Vec<manifold::Halfedge>const&,bool)::{lambda(unsigned_long)#1}>
     ::_M_invoke(_Any_data *param_1,ulong *param_2)

{
  return;
}



/* void manifold::for_each<manifold::CountingIterator<unsigned long>, (anonymous
   namespace)::CountVerts<true> >(manifold::ExecutionPolicy, manifold::CountingIterator<unsigned
   long>, manifold::CountingIterator<unsigned long>, (anonymous namespace)::CountVerts<true>) [clone
   .constprop.0] */

void manifold::
     for_each<manifold::CountingIterator<unsigned_long>,(anonymous_namespace)::CountVerts<true>>
               (ulong param_1,ulong param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  
  lVar3 = param_3[2];
  lVar4 = param_3[4];
  if (param_2 != param_1) {
    piVar6 = (int *)(*param_3 + param_1 * 0xc);
    do {
      iVar2 = *(int *)(lVar4 + (long)*piVar6 * 4);
      iVar5 = -iVar2;
      if (0 < iVar2) {
        iVar5 = iVar2;
      }
      LOCK();
      piVar1 = (int *)(lVar3 + (param_1 / 3) * 4);
      *piVar1 = *piVar1 + iVar5;
      UNLOCK();
      param_1 = param_1 + 1;
      piVar6 = piVar6 + 3;
    } while (param_2 != param_1);
  }
  return;
}



/* void manifold::for_each<manifold::CountingIterator<unsigned long>, (anonymous
   namespace)::CountVerts<false> >(manifold::ExecutionPolicy, manifold::CountingIterator<unsigned
   long>, manifold::CountingIterator<unsigned long>, (anonymous namespace)::CountVerts<false>)
   [clone .constprop.0] */

void manifold::
     for_each<manifold::CountingIterator<unsigned_long>,(anonymous_namespace)::CountVerts<false>>
               (ulong param_1,ulong param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  
  lVar3 = param_3[2];
  lVar4 = param_3[4];
  if (param_2 != param_1) {
    piVar7 = (int *)(*param_3 + param_1 * 0xc);
    do {
      iVar2 = *(int *)(lVar4 + (long)*piVar7 * 4);
      uVar6 = param_1 / 3;
      iVar5 = -iVar2;
      if (0 < iVar2) {
        iVar5 = iVar2;
      }
      param_1 = param_1 + 1;
      piVar1 = (int *)(lVar3 + uVar6 * 4);
      *piVar1 = *piVar1 + iVar5;
      piVar7 = piVar7 + 3;
    } while (param_2 != param_1);
  }
  return;
}



/* void manifold::for_each_n<manifold::CountingIterator<unsigned long>, (anonymous
   namespace)::DuplicateVerts>(manifold::ExecutionPolicy, manifold::CountingIterator<unsigned long>,
   unsigned long, (anonymous namespace)::DuplicateVerts) [clone .constprop.0] [clone .isra.0] */

void manifold::
     for_each_n<manifold::CountingIterator<unsigned_long>,(anonymous_namespace)::DuplicateVerts>
               (long param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  
  lVar3 = *param_3;
  lVar4 = param_3[2];
  lVar5 = param_3[4];
  lVar6 = param_3[6];
  if (param_2 != param_1) {
    do {
      lVar11 = (long)(int)param_1;
      iVar2 = *(int *)(lVar4 + lVar11 * 4);
      iVar7 = -iVar2;
      if (0 < iVar2) {
        iVar7 = iVar2;
      }
      if (iVar2 != 0) {
        lVar12 = (long)*(int *)(lVar5 + lVar11 * 4);
        puVar1 = (undefined8 *)(lVar6 + lVar11 * 0x18);
        puVar9 = (undefined8 *)(lVar3 + lVar12 * 0x18);
        do {
          uVar8 = puVar1[1];
          puVar10 = puVar9 + 3;
          *puVar9 = *puVar1;
          puVar9[1] = uVar8;
          puVar9[2] = puVar1[2];
          puVar9 = puVar10;
        } while ((undefined8 *)(lVar3 + (iVar7 + lVar12) * 0x18) != puVar10);
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}



/* std::_Function_handler<void (unsigned long), (anonymous namespace)::AddNewEdgeVerts(std::map<int,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> >,
   std::less<int>, std::allocator<std::pair<int const, std::vector<(anonymous namespace)::EdgePos,
   std::allocator<(anonymous namespace)::EdgePos> > > > >&, std::map<std::pair<int, int>,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> >,
   std::less<std::pair<int, int> >, std::allocator<std::pair<std::pair<int, int> const,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > > >
   >&, manifold::SparseIndices const&, manifold::Vec<int> const&, manifold::Vec<int> const&,
   manifold::Vec<manifold::Halfedge> const&, bool)::{lambda(unsigned
   long)#2}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(unsigned_long),(anonymous_namespace)::AddNewEdgeVerts(std::map<int,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>&,std::map<std::pair<int,int>,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>&,manifold::SparseIndices_const&,manifold::Vec<int>const&,manifold::Vec<int>const&,manifold::Vec<manifold::Halfedge>const&,bool)::{lambda(unsigned_long)#2}>
::_M_manager(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = *param_2;
    }
    else if (param_3 == 2) {
      pvVar1 = operator_new(1);
      *param_1 = pvVar1;
    }
    else if ((param_3 == 3) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1,1);
    }
    return 0;
  }
  *param_1 = &(anonymous_namespace)::
              AddNewEdgeVerts(std::map<int,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>&,std::map<std::pair<int,int>,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>&,manifold::SparseIndices_const&,manifold::Vec<int>const&,manifold::Vec<int>const&,manifold::Vec<manifold::Halfedge>const&,bool)
              ::{lambda(unsigned_long)#2}::typeinfo;
  return 0;
}



/* std::_Function_handler<void (unsigned long), (anonymous namespace)::AddNewEdgeVerts(std::map<int,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> >,
   std::less<int>, std::allocator<std::pair<int const, std::vector<(anonymous namespace)::EdgePos,
   std::allocator<(anonymous namespace)::EdgePos> > > > >&, std::map<std::pair<int, int>,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> >,
   std::less<std::pair<int, int> >, std::allocator<std::pair<std::pair<int, int> const,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > > >
   >&, manifold::SparseIndices const&, manifold::Vec<int> const&, manifold::Vec<int> const&,
   manifold::Vec<manifold::Halfedge> const&, bool)::{lambda(unsigned
   long)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(unsigned_long),(anonymous_namespace)::AddNewEdgeVerts(std::map<int,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>&,std::map<std::pair<int,int>,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>&,manifold::SparseIndices_const&,manifold::Vec<int>const&,manifold::Vec<int>const&,manifold::Vec<manifold::Halfedge>const&,bool)::{lambda(unsigned_long)#1}>
::_M_manager(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = *param_2;
    }
    else if (param_3 == 2) {
      pvVar1 = operator_new(1);
      *param_1 = pvVar1;
    }
    else if ((param_3 == 3) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1,1);
    }
    return 0;
  }
  *param_1 = &(anonymous_namespace)::
              AddNewEdgeVerts(std::map<int,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>&,std::map<std::pair<int,int>,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>&,manifold::SparseIndices_const&,manifold::Vec<int>const&,manifold::Vec<int>const&,manifold::Vec<manifold::Halfedge>const&,bool)
              ::{lambda(unsigned_long)#1}::typeinfo;
  return 0;
}



/* void std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos>
   >::_M_realloc_insert<(anonymous namespace)::EdgePos>(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EdgePos*, std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous
   namespace)::EdgePos> > >, (anonymous namespace)::EdgePos&&) */

void __thiscall
std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>::
_M_realloc_insert<(anonymous_namespace)::EdgePos>
          (vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>
           *this,void *param_2,undefined8 *param_3)

{
  void *__dest;
  void *pvVar1;
  void *__src;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  void *__dest_00;
  ulong uVar6;
  size_t __n;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  lVar4 = (long)pvVar1 - (long)__src >> 3;
  uVar5 = lVar4 * -0x5555555555555555;
  if (uVar5 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    uVar6 = uVar5 + 1;
    if (0xfffffffffffffffe < uVar5) goto LAB_001002e0;
    if (0x555555555555555 < uVar6) {
      uVar6 = 0x555555555555555;
    }
    uVar6 = uVar6 * 0x18;
LAB_001002ea:
    __dest_00 = operator_new(uVar6);
    lVar4 = uVar6 + (long)__dest_00;
  }
  else {
    uVar6 = lVar4 * 0x5555555555555556;
    if (uVar6 < uVar5) {
LAB_001002e0:
      uVar6 = 0x7ffffffffffffff8;
      goto LAB_001002ea;
    }
    if (uVar6 != 0) {
      if (0x555555555555555 < uVar6) {
        uVar6 = 0x555555555555555;
      }
      uVar6 = uVar6 * 0x18;
      goto LAB_001002ea;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  uVar2 = *param_3;
  uVar3 = param_3[1];
  __dest = (void *)((long)__dest_00 + __n + 0x18);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined8 *)((long)__dest_00 + __n + 0x10) = param_3[2];
  *(undefined8 *)((long)__dest_00 + __n) = uVar2;
  ((undefined8 *)((long)__dest_00 + __n))[1] = uVar3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_001002c2;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_001002c2:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
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
    if (iVar5 <= iVar6) goto LAB_001003e8;
  }
  if (*(_Rb_tree_node_base **)(this + 0x18) == p_Var2) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = p_Var2;
    return auVar1 << 0x40;
  }
  p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var2);
  iVar5 = *(int *)(p_Var4 + 0x20);
LAB_001003e8:
  p_Var3 = (_Rb_tree_node_base *)0x0;
  if (iVar5 < iVar6) {
    p_Var4 = p_Var3;
    p_Var3 = p_Var2;
  }
  auVar7._8_8_ = p_Var3;
  auVar7._0_8_ = p_Var4;
  return auVar7;
}



/* std::_Rb_tree<std::pair<int, int>, std::pair<std::pair<int, int> const, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   std::_Select1st<std::pair<std::pair<int, int> const, std::vector<(anonymous namespace)::EdgePos,
   std::allocator<(anonymous namespace)::EdgePos> > > >, std::less<std::pair<int, int> >,
   std::allocator<std::pair<std::pair<int, int> const, std::vector<(anonymous namespace)::EdgePos,
   std::allocator<(anonymous namespace)::EdgePos> > > > >::_M_get_insert_unique_pos(std::pair<int,
   int> const&) [clone .isra.0] */

undefined1  [16]
std::
_Rb_tree<std::pair<int,int>,std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,std::_Select1st<std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>
::_M_get_insert_unique_pos(pair *param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  _Rb_tree_node_base *p_Var5;
  int in_EDX;
  _Rb_tree_node_base *p_Var6;
  int in_ESI;
  undefined1 auVar7 [16];
  
  p_Var5 = *(_Rb_tree_node_base **)(param_1 + 0x10);
  if (*(_Rb_tree_node_base **)(param_1 + 0x10) == (_Rb_tree_node_base *)0x0) {
    p_Var6 = (_Rb_tree_node_base *)(param_1 + 8);
  }
  else {
    do {
      p_Var6 = p_Var5;
      iVar1 = *(int *)(p_Var6 + 0x20);
      if ((in_ESI < iVar1) || ((iVar1 == in_ESI && (in_EDX < *(int *)(p_Var6 + 0x24))))) {
        p_Var5 = *(_Rb_tree_node_base **)(p_Var6 + 0x10);
        bVar4 = true;
      }
      else {
        p_Var5 = *(_Rb_tree_node_base **)(p_Var6 + 0x18);
        bVar4 = false;
      }
    } while (p_Var5 != (_Rb_tree_node_base *)0x0);
    p_Var5 = p_Var6;
    if (!bVar4) goto joined_r0x0010048d;
  }
  if (*(_Rb_tree_node_base **)(param_1 + 0x18) == p_Var6) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = p_Var6;
    return auVar3 << 0x40;
  }
  p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var6);
  iVar1 = *(int *)(p_Var5 + 0x20);
joined_r0x0010048d:
  if ((in_ESI <= iVar1) && ((iVar1 != in_ESI || (in_EDX <= *(int *)(p_Var5 + 0x24))))) {
    auVar7._8_8_ = 0;
    auVar7._0_8_ = p_Var5;
    return auVar7;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = p_Var6;
  return auVar2 << 0x40;
}



/* std::_Rb_tree<int, std::pair<int const, std::vector<(anonymous namespace)::EdgePos,
   std::allocator<(anonymous namespace)::EdgePos> > >, std::_Select1st<std::pair<int const,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > > >,
   std::less<int>, std::allocator<std::pair<int const, std::vector<(anonymous namespace)::EdgePos,
   std::allocator<(anonymous namespace)::EdgePos> > > > >::_M_get_insert_unique_pos(int const&)
   [clone .isra.0] */

undefined1  [16] __thiscall
std::
_Rb_tree<int,std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,std::_Select1st<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>
::_M_get_insert_unique_pos
          (_Rb_tree<int,std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,std::_Select1st<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>
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
    if (iVar5 <= iVar6) goto LAB_00100528;
  }
  if (*(_Rb_tree_node_base **)(this + 0x18) == p_Var2) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = p_Var2;
    return auVar1 << 0x40;
  }
  p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var2);
  iVar5 = *(int *)(p_Var4 + 0x20);
LAB_00100528:
  p_Var3 = (_Rb_tree_node_base *)0x0;
  if (iVar5 < iVar6) {
    p_Var4 = p_Var3;
    p_Var3 = p_Var2;
  }
  auVar7._8_8_ = p_Var3;
  auVar7._0_8_ = p_Var4;
  return auVar7;
}



/* std::_Rb_tree<int, std::pair<int const, manifold::Manifold::Impl::Relation>,
   std::_Select1st<std::pair<int const, manifold::Manifold::Impl::Relation> >, std::less<int>,
   std::allocator<std::pair<int const, manifold::Manifold::Impl::Relation> >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<int const,
   manifold::Manifold::Impl::Relation> >, int const&) [clone .isra.0] */

undefined1  [16] __thiscall
std::
_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
           *this,_Rb_tree_node_base *param_2,uint param_3)

{
  undefined1 auVar1 [16];
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 != (_Rb_tree_node_base *)(this + 8)) {
    if ((int)param_3 < *(int *)(param_2 + 0x20)) {
      p_Var3 = param_2;
      if (*(_Rb_tree_node_base **)(this + 0x18) != param_2) {
        p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
        if ((int)param_3 <= *(int *)(p_Var2 + 0x20)) goto LAB_00100617;
        if (*(long *)(p_Var2 + 0x18) == 0) {
          p_Var3 = (_Rb_tree_node_base *)0x0;
          param_2 = p_Var2;
        }
      }
    }
    else {
      if ((int)param_3 <= *(int *)(param_2 + 0x20)) {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = param_2;
        return auVar5;
      }
      if (*(_Rb_tree_node_base **)(this + 0x20) == param_2) goto LAB_00100649;
      p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
      if (*(int *)(p_Var2 + 0x20) <= (int)param_3) goto LAB_00100617;
      p_Var3 = (_Rb_tree_node_base *)0x0;
      if (*(long *)(param_2 + 0x18) != 0) {
        p_Var3 = p_Var2;
        param_2 = p_Var2;
      }
    }
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = p_Var3;
    return auVar4;
  }
  if ((*(long *)(this + 0x28) == 0) ||
     (param_2 = *(_Rb_tree_node_base **)(this + 0x20), (int)param_3 <= *(int *)(param_2 + 0x20))) {
LAB_00100617:
    auVar5 = _M_get_insert_unique_pos(this,(int *)(ulong)param_3);
    return auVar5;
  }
LAB_00100649:
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}



/* std::_Function_handler<void (unsigned long), (anonymous namespace)::AddNewEdgeVerts(std::map<int,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> >,
   std::less<int>, std::allocator<std::pair<int const, std::vector<(anonymous namespace)::EdgePos,
   std::allocator<(anonymous namespace)::EdgePos> > > > >&, std::map<std::pair<int, int>,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> >,
   std::less<std::pair<int, int> >, std::allocator<std::pair<std::pair<int, int> const,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > > >
   >&, manifold::SparseIndices const&, manifold::Vec<int> const&, manifold::Vec<int> const&,
   manifold::Vec<manifold::Halfedge> const&, bool)::{lambda(unsigned
   long)#2}>::_M_invoke(std::_Any_data const&, unsigned long&&) */

void std::
     _Function_handler<void(unsigned_long),(anonymous_namespace)::AddNewEdgeVerts(std::map<int,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>&,std::map<std::pair<int,int>,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>&,manifold::SparseIndices_const&,manifold::Vec<int>const&,manifold::Vec<int>const&,manifold::Vec<manifold::Halfedge>const&,bool)::{lambda(unsigned_long)#2}>
     ::_M_invoke(_Any_data *param_1,ulong *param_2)

{
  return;
}



/* std::_Rb_tree_iterator<std::pair<std::pair<int, int> const, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > > >
   std::_Rb_tree<std::pair<int, int>, std::pair<std::pair<int, int> const, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   std::_Select1st<std::pair<std::pair<int, int> const, std::vector<(anonymous namespace)::EdgePos,
   std::allocator<(anonymous namespace)::EdgePos> > > >, std::less<std::pair<int, int> >,
   std::allocator<std::pair<std::pair<int, int> const, std::vector<(anonymous namespace)::EdgePos,
   std::allocator<(anonymous namespace)::EdgePos> > > >
   >::_M_emplace_hint_unique<std::piecewise_construct_t const&, std::tuple<std::pair<int, int>
   const&>, std::tuple<> >(std::_Rb_tree_const_iterator<std::pair<std::pair<int, int> const,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > > >,
   std::piecewise_construct_t const&, std::tuple<std::pair<int, int> const&>&&, std::tuple<>&&)
   [clone .constprop.0] [clone .isra.0] */

_Rb_tree_node_base *
std::
_Rb_tree<std::pair<int,int>,std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,std::_Select1st<std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>
::
_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<std::pair<int,int>const&>,std::tuple<>>
          (pair *param_1,_Rb_tree_node_base *param_2,undefined8 *param_3)

{
  _Rb_tree_node_base *p_Var1;
  undefined8 uVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  int iVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  
  p_Var1 = (_Rb_tree_node_base *)(param_1 + 8);
  p_Var3 = (_Rb_tree_node_base *)operator_new(0x40);
  uVar2 = *(undefined8 *)*param_3;
  *(undefined8 *)(p_Var3 + 0x38) = 0;
  *(undefined1 (*) [16])(p_Var3 + 0x28) = (undefined1  [16])0x0;
  *(undefined8 *)(p_Var3 + 0x20) = uVar2;
  if (p_Var1 == param_2) {
    if (*(long *)(param_1 + 0x28) != 0) {
      p_Var4 = *(_Rb_tree_node_base **)(param_1 + 0x20);
      if (*(int *)(p_Var4 + 0x20) < *(int *)(p_Var3 + 0x20)) goto LAB_00100850;
      if ((*(int *)(p_Var4 + 0x20) != *(int *)(p_Var3 + 0x20)) ||
         (*(int *)(p_Var3 + 0x24) <= *(int *)(p_Var4 + 0x24))) goto LAB_00100828;
      bVar6 = true;
      if (p_Var1 == p_Var4) goto LAB_00100755;
      goto LAB_00100711;
    }
LAB_00100828:
    auVar7 = _M_get_insert_unique_pos(param_1);
LAB_00100839:
    p_Var4 = auVar7._8_8_;
    param_2 = auVar7._0_8_;
    if (p_Var4 == (_Rb_tree_node_base *)0x0) {
LAB_00100740:
      operator_delete(p_Var3,0x40);
      return param_2;
    }
    bVar6 = param_2 != (_Rb_tree_node_base *)0x0;
LAB_001006f1:
    param_2 = p_Var4;
    if ((p_Var1 != p_Var4) && (!bVar6)) {
      iVar5 = *(int *)(p_Var3 + 0x20);
      goto LAB_001006fe;
    }
  }
  else {
    iVar5 = *(int *)(p_Var3 + 0x20);
    if (*(int *)(param_2 + 0x20) <= iVar5) {
      if (iVar5 == *(int *)(param_2 + 0x20)) {
        if (*(int *)(p_Var3 + 0x24) < *(int *)(param_2 + 0x24)) goto LAB_001006c9;
        if (*(int *)(p_Var3 + 0x24) <= *(int *)(param_2 + 0x24)) goto LAB_00100740;
      }
      p_Var4 = param_2;
      if (*(_Rb_tree_node_base **)(param_1 + 0x20) == param_2) {
LAB_00100850:
        bVar6 = false;
        goto LAB_001006f1;
      }
      p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
      if ((*(int *)(p_Var4 + 0x20) <= iVar5) &&
         ((iVar5 != *(int *)(p_Var4 + 0x20) || (*(int *)(p_Var4 + 0x24) <= *(int *)(p_Var3 + 0x24)))
         )) goto LAB_0010080e;
      if (*(long *)(param_2 + 0x18) != 0) {
        bVar6 = true;
        goto LAB_00100755;
      }
LAB_001006fe:
      p_Var4 = param_2;
      bVar6 = true;
      if ((iVar5 < *(int *)(p_Var4 + 0x20)) || (bVar6 = false, iVar5 != *(int *)(p_Var4 + 0x20)))
      goto LAB_00100755;
LAB_00100711:
      bVar6 = *(int *)(p_Var3 + 0x24) < *(int *)(p_Var4 + 0x24);
      goto LAB_00100755;
    }
LAB_001006c9:
    if (*(_Rb_tree_node_base **)(param_1 + 0x18) != param_2) {
      p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
      if ((iVar5 <= *(int *)(p_Var4 + 0x20)) &&
         ((iVar5 != *(int *)(p_Var4 + 0x20) || (*(int *)(p_Var3 + 0x24) <= *(int *)(p_Var4 + 0x24)))
         )) {
LAB_0010080e:
        auVar7 = _M_get_insert_unique_pos(param_1);
        goto LAB_00100839;
      }
      if (*(long *)(p_Var4 + 0x18) == 0) {
        bVar6 = false;
        goto LAB_001006f1;
      }
    }
  }
  p_Var4 = param_2;
  bVar6 = true;
LAB_00100755:
  std::_Rb_tree_insert_and_rebalance(bVar6,p_Var3,p_Var4,p_Var1);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return p_Var3;
}



/* (anonymous namespace)::AppendWholeEdges(manifold::Manifold::Impl&, manifold::Vec<int>&,
   manifold::Vec<manifold::TriRef>&, manifold::Manifold::Impl const&, manifold::Vec<char>,
   manifold::Vec<int> const&, manifold::Vec<int> const&, manifold::VecView<int const>, bool) [clone
   .isra.0] */

void (anonymous_namespace)::AppendWholeEdges
               (long param_1,long *param_2,long *param_3,long param_4,long param_5,
               undefined8 param_6,long param_7,undefined8 param_8,long param_9,undefined8 param_10,
               long param_11,undefined8 param_12,byte param_13)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  uint *puVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  
  lVar8 = *param_2;
  lVar9 = *(long *)(param_4 + 0x68);
  lVar10 = *param_3;
  lVar11 = *(long *)(param_1 + 0x60);
  lVar12 = *(long *)(param_4 + 0x60);
  if (lVar9 != 0) {
    lVar19 = 0;
    do {
      iVar18 = (int)lVar19;
      if (*(char *)(param_5 + iVar18) != '\0') {
        piVar2 = (int *)(lVar12 + (long)iVar18 * 0xc);
        iVar22 = *piVar2;
        if (iVar22 < piVar2[1]) {
          lVar20 = (long)iVar22 * 4;
          iVar22 = *(int *)(param_7 + (long)iVar22 * 4);
          if (iVar22 != 0) {
            lVar15 = (long)piVar2[1] << 2;
            lVar16 = lVar15;
            if (-1 < iVar22) {
              lVar16 = lVar20;
              lVar20 = lVar15;
            }
            iVar7 = piVar2[2];
            piVar2 = (int *)(lVar8 + (long)*(int *)(param_11 + (long)(iVar18 / 3) * 4) * 4);
            piVar3 = (int *)(lVar8 + (long)*(int *)(param_11 + (long)(iVar7 / 3) * 4) * 4);
            iVar14 = *(int *)(param_9 + lVar16);
            iVar21 = -iVar22;
            if (0 < iVar22) {
              iVar21 = iVar22;
            }
            iVar22 = *(int *)(param_9 + lVar20) - iVar14;
            iVar21 = iVar21 + iVar14;
            do {
              iVar1 = iVar22 + iVar14;
              LOCK();
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + 1;
              UNLOCK();
              LOCK();
              iVar6 = *piVar3;
              *piVar3 = *piVar3 + 1;
              UNLOCK();
              piVar4 = (int *)(lVar11 + (long)iVar5 * 0xc);
              puVar17 = (uint *)((long)iVar5 * 0x10 + lVar10);
              piVar4[2] = iVar6;
              *piVar4 = iVar14;
              piVar4[1] = iVar1;
              piVar4 = (int *)(lVar11 + (long)iVar6 * 0xc);
              puVar13 = (uint *)((long)iVar6 * 0x10 + lVar10);
              piVar4[1] = iVar14;
              iVar14 = iVar14 + 1;
              *piVar4 = iVar1;
              piVar4[2] = iVar5;
              *puVar17 = (uint)(param_13 ^ 1);
              puVar17[1] = 0xffffffff;
              puVar17[2] = iVar18 / 3;
              puVar17[3] = 0;
              *puVar13 = (uint)(param_13 ^ 1);
              puVar13[1] = 0xffffffff;
              puVar13[2] = iVar7 / 3;
              puVar13[3] = 0;
            } while (iVar14 != iVar21);
          }
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar9 != lVar19);
  }
  return;
}



/* std::_Rb_tree_iterator<std::pair<int const, manifold::Manifold::Impl::Relation> >
   std::_Rb_tree<int, std::pair<int const, manifold::Manifold::Impl::Relation>,
   std::_Select1st<std::pair<int const, manifold::Manifold::Impl::Relation> >, std::less<int>,
   std::allocator<std::pair<int const, manifold::Manifold::Impl::Relation> >
   >::_M_emplace_hint_unique<std::piecewise_construct_t const&, std::tuple<int&&>, std::tuple<>
   >(std::_Rb_tree_const_iterator<std::pair<int const, manifold::Manifold::Impl::Relation> >,
   std::piecewise_construct_t const&, std::tuple<int&&>&&, std::tuple<>&&) [clone .isra.0] */

_Rb_tree_node_base *
std::
_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int&&>,std::tuple<>>
          (_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
           *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  _Rb_tree_node_base *p_Var2;
  long lVar3;
  bool bVar4;
  _Rb_tree_node_base *p_Var5;
  byte bVar6;
  undefined1 auVar7 [16];
  
  bVar6 = 0;
  p_Var2 = (_Rb_tree_node_base *)operator_new(0x98);
  iVar1 = *(int *)*param_3;
  *(int *)(p_Var2 + 0x20) = iVar1;
  p_Var5 = p_Var2 + 0x28;
  for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)p_Var5 = 0;
    p_Var5 = p_Var5 + (ulong)bVar6 * -0x10 + 8;
  }
  *(undefined2 *)(p_Var2 + 0x56) = 0x3ff0;
  *(undefined4 *)(p_Var2 + 0x28) = 0xffffffff;
  *(undefined2 *)(p_Var2 + 0x36) = 0x3ff0;
  *(undefined2 *)(p_Var2 + 0x76) = 0x3ff0;
  auVar7 = _M_get_insert_hint_unique_pos(param_1,param_2,iVar1);
  p_Var5 = auVar7._8_8_;
  if (p_Var5 != (_Rb_tree_node_base *)0x0) {
    bVar4 = true;
    if ((auVar7._0_8_ == (_Rb_tree_node_base *)0x0) &&
       (p_Var5 != (_Rb_tree_node_base *)(param_1 + 8))) {
      bVar4 = iVar1 < *(int *)(p_Var5 + 0x20);
    }
    std::_Rb_tree_insert_and_rebalance(bVar4,p_Var2,p_Var5,(_Rb_tree_node_base *)(param_1 + 8));
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    return p_Var2;
  }
  operator_delete(p_Var2,0x98);
  return auVar7._0_8_;
}



/* std::_Rb_tree<int, std::pair<int const, std::vector<(anonymous namespace)::EdgePos,
   std::allocator<(anonymous namespace)::EdgePos> > >, std::_Select1st<std::pair<int const,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > > >,
   std::less<int>, std::allocator<std::pair<int const, std::vector<(anonymous namespace)::EdgePos,
   std::allocator<(anonymous namespace)::EdgePos> > > > >::_M_erase(std::_Rb_tree_node<std::pair<int
   const, std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos>
   > > >*) [clone .isra.0] */

void std::
     _Rb_tree<int,std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,std::_Select1st<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>
     ::_M_erase(_Rb_tree_node *param_1)

{
  void *pvVar1;
  _Rb_tree_node *p_Var2;
  
  if (param_1 == (_Rb_tree_node *)0x0) {
    return;
  }
  do {
    _M_erase(*(_Rb_tree_node **)(param_1 + 0x18));
    pvVar1 = *(void **)(param_1 + 0x28);
    p_Var2 = *(_Rb_tree_node **)(param_1 + 0x10);
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1,*(long *)(param_1 + 0x38) - (long)pvVar1);
    }
    operator_delete(param_1,0x40);
    param_1 = p_Var2;
  } while (p_Var2 != (_Rb_tree_node *)0x0);
  return;
}



/* std::_Rb_tree<std::pair<int, int>, std::pair<std::pair<int, int> const, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   std::_Select1st<std::pair<std::pair<int, int> const, std::vector<(anonymous namespace)::EdgePos,
   std::allocator<(anonymous namespace)::EdgePos> > > >, std::less<std::pair<int, int> >,
   std::allocator<std::pair<std::pair<int, int> const, std::vector<(anonymous namespace)::EdgePos,
   std::allocator<(anonymous namespace)::EdgePos> > > >
   >::_M_erase(std::_Rb_tree_node<std::pair<std::pair<int, int> const, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > > >*) [clone .isra.0] */

void std::
     _Rb_tree<std::pair<int,int>,std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,std::_Select1st<std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>
     ::_M_erase(_Rb_tree_node *param_1)

{
  void *pvVar1;
  _Rb_tree_node *p_Var2;
  
  if (param_1 == (_Rb_tree_node *)0x0) {
    return;
  }
  do {
    _M_erase(*(_Rb_tree_node **)(param_1 + 0x18));
    pvVar1 = *(void **)(param_1 + 0x28);
    p_Var2 = *(_Rb_tree_node **)(param_1 + 0x10);
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1,*(long *)(param_1 + 0x38) - (long)pvVar1);
    }
    operator_delete(param_1,0x40);
    param_1 = p_Var2;
  } while (p_Var2 != (_Rb_tree_node *)0x0);
  return;
}



/* __gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >
   std::__upper_bound<__gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   (anonymous namespace)::EdgePos, __gnu_cxx::__ops::_Val_comp_iter<(anonymous
   namespace)::PairUp(std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous
   namespace)::EdgePos> >&)::{lambda((anonymous namespace)::EdgePos, (anonymous
   namespace)::EdgePos)#1}> >(__gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >, (anonymous
   namespace)::EdgePos const&, __gnu_cxx::__ops::_Val_comp_iter<(anonymous
   namespace)::PairUp(std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous
   namespace)::EdgePos> >&)::{lambda((anonymous namespace)::EdgePos, (anonymous
   namespace)::EdgePos)#1}>) [clone .isra.0] */

void std::
     __upper_bound<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,(anonymous_namespace)::EdgePos,__gnu_cxx::__ops::_Val_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
               (double param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (param_3 - param_2 >> 3) * -0x5555555555555555;
  if (param_3 - param_2 < 1) {
    return;
  }
  do {
    while( true ) {
      uVar3 = (long)uVar2 >> 1;
      lVar1 = param_2 + ((uVar2 & 0xfffffffffffffffe) + uVar3) * 8;
      if (param_1 < *(double *)(lVar1 + 8)) break;
      param_2 = lVar1 + 0x18;
      uVar2 = (uVar2 - uVar3) - 1;
      if ((long)uVar2 < 1) {
        return;
      }
    }
    uVar2 = uVar3;
  } while (0 < (long)uVar3);
  return;
}



/* __gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >
   std::__lower_bound<__gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   (anonymous namespace)::EdgePos, __gnu_cxx::__ops::_Iter_comp_val<(anonymous
   namespace)::PairUp(std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous
   namespace)::EdgePos> >&)::{lambda((anonymous namespace)::EdgePos, (anonymous
   namespace)::EdgePos)#1}> >(__gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >, (anonymous
   namespace)::EdgePos const&, __gnu_cxx::__ops::_Iter_comp_val<(anonymous
   namespace)::PairUp(std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous
   namespace)::EdgePos> >&)::{lambda((anonymous namespace)::EdgePos, (anonymous
   namespace)::EdgePos)#1}>) [clone .isra.0] */

void std::
     __lower_bound<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,(anonymous_namespace)::EdgePos,__gnu_cxx::__ops::_Iter_comp_val<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
               (double param_1,long param_2,long param_3)

{
  double *pdVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = (param_3 - param_2 >> 3) * -0x5555555555555555;
  if (param_3 - param_2 < 1) {
    return;
  }
  do {
    while( true ) {
      uVar4 = (long)uVar3 >> 1;
      lVar2 = param_2 + ((uVar3 & 0xfffffffffffffffe) + uVar4) * 8;
      pdVar1 = (double *)(lVar2 + 8);
      if (param_1 < *pdVar1 || param_1 == *pdVar1) break;
      param_2 = lVar2 + 0x18;
      uVar3 = (uVar3 - uVar4) - 1;
      if ((long)uVar3 < 1) {
        return;
      }
    }
    uVar3 = uVar4;
  } while (0 < (long)uVar4);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<__gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::PairUp(std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> >&)::{lambda((anonymous
   namespace)::EdgePos, (anonymous namespace)::EdgePos)#1}>
   >(__gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::PairUp(std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> >&)::{lambda((anonymous
   namespace)::EdgePos, (anonymous namespace)::EdgePos)#1}>) [clone .isra.0] */

void std::
     __insertion_sort<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
               (undefined8 *param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  size_t __n;
  undefined8 *puVar7;
  
  if (param_1 == param_2) {
    return;
  }
  puVar7 = param_1 + 3;
  do {
    if (param_2 == puVar7) {
      return;
    }
    while( true ) {
      dVar1 = (double)puVar7[1];
      uVar4 = *(undefined4 *)puVar7;
      uVar3 = *(undefined1 *)(puVar7 + 2);
      if (dVar1 < (double)param_1[1]) break;
      dVar2 = (double)puVar7[-2];
      puVar6 = puVar7;
      while (dVar1 < dVar2) {
        *puVar6 = puVar6[-3];
        puVar6[1] = puVar6[-2];
        puVar6[2] = puVar6[-1];
        dVar2 = (double)puVar6[-5];
        puVar6 = puVar6 + -3;
      }
      puVar7 = puVar7 + 3;
      *(undefined4 *)puVar6 = uVar4;
      *(undefined1 *)(puVar6 + 2) = uVar3;
      puVar6[1] = dVar1;
      if (param_2 == puVar7) {
        return;
      }
    }
    __n = (long)puVar7 - (long)param_1;
    if ((long)__n < 0x19) {
      if (__n == 0x18) {
        uVar5 = param_1[1];
        *puVar7 = *param_1;
        puVar7[1] = uVar5;
        puVar7[2] = param_1[2];
      }
    }
    else {
      memmove((void *)((0x18 - __n) + (long)puVar7),param_1,__n);
    }
    puVar7 = puVar7 + 3;
    *(undefined4 *)param_1 = uVar4;
    *(undefined1 *)(param_1 + 2) = uVar3;
    param_1[1] = dVar1;
  } while( true );
}



/* (anonymous namespace)::AddNewEdgeVerts(std::map<int, std::vector<(anonymous namespace)::EdgePos,
   std::allocator<(anonymous namespace)::EdgePos> >, std::less<int>, std::allocator<std::pair<int
   const, std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos>
   > > > >&, std::map<std::pair<int, int>, std::vector<(anonymous namespace)::EdgePos,
   std::allocator<(anonymous namespace)::EdgePos> >, std::less<std::pair<int, int> >,
   std::allocator<std::pair<std::pair<int, int> const, std::vector<(anonymous namespace)::EdgePos,
   std::allocator<(anonymous namespace)::EdgePos> > > > >&, manifold::SparseIndices const&,
   manifold::Vec<int> const&, manifold::Vec<int> const&, manifold::Vec<manifold::Halfedge> const&,
   bool) */

void (anonymous_namespace)::AddNewEdgeVerts
               (map *param_1,map *param_2,SparseIndices *param_3,Vec *param_4,Vec *param_5,
               Vec *param_6,bool param_7)

{
  map *pmVar1;
  map *pmVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>> *pvVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  byte bVar10;
  void *pvVar11;
  _Rb_tree_node_base *p_Var12;
  _Rb_tree_node_base *p_Var13;
  map *pmVar14;
  map *pmVar15;
  _Rb_tree_node_base *p_Var16;
  int iVar17;
  uint uVar18;
  map *pmVar19;
  map *pmVar20;
  _Rb_tree_node_base *p_Var21;
  long lVar22;
  _Rb_tree_node_base **pp_Var23;
  ulong uVar24;
  int iVar25;
  long in_FS_OFFSET;
  bool bVar26;
  undefined1 auVar27 [16];
  _Rb_tree_node_base *local_100;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  _Rb_tree_node_base *local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined1 local_c8 [16];
  code *local_b8;
  code *pcStack_b0;
  undefined1 local_a8 [16];
  code *local_98;
  code *pcStack_90;
  _Rb_tree_node_base *local_88;
  long local_80;
  byte local_78;
  map *local_70;
  long local_68;
  bool local_60;
  map *local_58;
  long local_50;
  byte local_48;
  _Rb_tree_node_base *local_40 [2];
  
  local_40[0] = *(_Rb_tree_node_base **)(in_FS_OFFSET + 0x28);
  if (*(ulong *)(param_3 + 8) >> 3 != 0) {
    p_Var21 = (_Rb_tree_node_base *)(param_1 + 8);
    pmVar1 = param_2 + 8;
    uVar24 = 0;
    do {
      local_b8 = (code *)0x0;
      local_c8 = (undefined1  [16])0x0;
      pcStack_b0 = (code *)0x0;
      pvVar11 = operator_new(1);
      local_c8._0_8_ = pvVar11;
      local_98 = (code *)0x0;
      pcStack_90 = (code *)0x0;
      local_b8 = std::
                 _Function_handler<void(unsigned_long),(anonymous_namespace)::AddNewEdgeVerts(std::map<int,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>&,std::map<std::pair<int,int>,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>&,manifold::SparseIndices_const&,manifold::Vec<int>const&,manifold::Vec<int>const&,manifold::Vec<manifold::Halfedge>const&,bool)::{lambda(unsigned_long)#2}>
                 ::_M_manager;
      pcStack_b0 = std::
                   _Function_handler<void(unsigned_long),(anonymous_namespace)::AddNewEdgeVerts(std::map<int,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>&,std::map<std::pair<int,int>,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>&,manifold::SparseIndices_const&,manifold::Vec<int>const&,manifold::Vec<int>const&,manifold::Vec<manifold::Halfedge>const&,bool)::{lambda(unsigned_long)#2}>
                   ::_M_invoke;
      local_a8 = (undefined1  [16])0x0;
      pvVar11 = operator_new(1);
      lVar22 = *(long *)param_3;
      local_a8._0_8_ = pvVar11;
      local_98 = std::
                 _Function_handler<void(unsigned_long),(anonymous_namespace)::AddNewEdgeVerts(std::map<int,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>&,std::map<std::pair<int,int>,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>&,manifold::SparseIndices_const&,manifold::Vec<int>const&,manifold::Vec<int>const&,manifold::Vec<manifold::Halfedge>const&,bool)::{lambda(unsigned_long)#1}>
                 ::_M_manager;
      pcStack_90 = std::
                   _Function_handler<void(unsigned_long),(anonymous_namespace)::AddNewEdgeVerts(std::map<int,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>&,std::map<std::pair<int,int>,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>&,manifold::SparseIndices_const&,manifold::Vec<int>const&,manifold::Vec<int>const&,manifold::Vec<manifold::Halfedge>const&,bool)::{lambda(unsigned_long)#1}>
                   ::_M_invoke;
      if (param_7) {
        uVar18 = *(uint *)(lVar22 + 4 + uVar24 * 8);
        local_ec = *(uint *)(lVar22 + uVar24 * 8);
      }
      else {
        uVar18 = *(uint *)(lVar22 + uVar24 * 8);
        local_ec = *(uint *)(lVar22 + 4 + uVar24 * 8);
      }
      lVar22 = (long)(int)uVar18;
      iVar4 = *(int *)(*(long *)param_5 + uVar24 * 4);
      iVar5 = *(int *)(*(long *)param_4 + uVar24 * 4);
      uVar9 = *(int *)(lVar22 * 0xc + *(long *)param_6 + 8) / 3;
      local_f8 = uVar9;
      local_f4 = local_ec;
      local_f0 = (int)uVar18 / 3;
      if (!param_7) {
        local_f8 = local_ec;
        local_f4 = uVar9;
        local_f0 = local_ec;
        local_ec = (int)uVar18 / 3;
      }
      p_Var12 = *(_Rb_tree_node_base **)(param_1 + 0x10);
      p_Var16 = p_Var21;
      if (*(_Rb_tree_node_base **)(param_1 + 0x10) == (_Rb_tree_node_base *)0x0) {
LAB_0010151f:
        p_Var12 = (_Rb_tree_node_base *)operator_new(0x40);
        *(uint *)(p_Var12 + 0x20) = uVar18;
        lVar8 = *(long *)(param_1 + 0x28);
        *(undefined8 *)(p_Var12 + 0x38) = 0;
        *(undefined1 (*) [16])(p_Var12 + 0x28) = (undefined1  [16])0x0;
        if ((lVar8 != 0) &&
           (p_Var16 = *(_Rb_tree_node_base **)(param_1 + 0x20),
           *(int *)(p_Var16 + 0x20) < (int)uVar18)) {
          bVar26 = false;
LAB_0010156e:
          if ((p_Var16 == p_Var21) || (bVar26)) {
            bVar26 = true;
          }
          else {
LAB_001015cb:
            bVar26 = (int)uVar18 < *(int *)(p_Var16 + 0x20);
          }
          goto LAB_00101581;
        }
LAB_001010b6:
        auVar27 = std::
                  _Rb_tree<int,std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,std::_Select1st<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>
                  ::_M_get_insert_unique_pos
                            ((_Rb_tree<int,std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,std::_Select1st<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>
                              *)param_1,(int *)(ulong)uVar18);
LAB_001010dd:
        p_Var16 = auVar27._0_8_;
        if (auVar27._8_8_ != (_Rb_tree_node_base *)0x0) {
          bVar26 = p_Var16 != (_Rb_tree_node_base *)0x0;
          p_Var16 = auVar27._8_8_;
          goto LAB_0010156e;
        }
LAB_001010e6:
        operator_delete(p_Var12,0x40);
        p_Var12 = p_Var16;
      }
      else {
        do {
          while( true ) {
            p_Var13 = p_Var12;
            if (*(int *)(p_Var13 + 0x20) < (int)uVar18) break;
            p_Var12 = *(_Rb_tree_node_base **)(p_Var13 + 0x10);
            p_Var16 = p_Var13;
            if (*(_Rb_tree_node_base **)(p_Var13 + 0x10) == (_Rb_tree_node_base *)0x0)
            goto LAB_00101028;
          }
          p_Var12 = *(_Rb_tree_node_base **)(p_Var13 + 0x18);
        } while (*(_Rb_tree_node_base **)(p_Var13 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_00101028:
        if (p_Var16 == p_Var21) goto LAB_0010151f;
        p_Var12 = p_Var16;
        if (*(int *)(p_Var16 + 0x20) <= (int)uVar18) goto LAB_00101105;
        p_Var12 = (_Rb_tree_node_base *)operator_new(0x40);
        *(uint *)(p_Var12 + 0x20) = uVar18;
        iVar25 = *(int *)(p_Var16 + 0x20);
        *(undefined8 *)(p_Var12 + 0x38) = 0;
        *(undefined1 (*) [16])(p_Var12 + 0x28) = (undefined1  [16])0x0;
        if (iVar25 <= (int)uVar18) {
          if ((int)uVar18 <= iVar25) goto LAB_001010e6;
          if (p_Var16 != *(_Rb_tree_node_base **)(param_1 + 0x20)) {
            p_Var13 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var16);
            if ((int)uVar18 < *(int *)(p_Var13 + 0x20)) {
              if (*(long *)(p_Var16 + 0x18) != 0) {
                bVar26 = true;
                p_Var16 = p_Var13;
                goto LAB_0010156e;
              }
              goto LAB_001015cb;
            }
            auVar27 = std::
                      _Rb_tree<int,std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,std::_Select1st<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>
                      ::_M_get_insert_unique_pos
                                ((_Rb_tree<int,std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,std::_Select1st<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>
                                  *)param_1,(int *)(ulong)uVar18);
            goto LAB_001010dd;
          }
          goto LAB_001015cb;
        }
        if (p_Var16 != *(_Rb_tree_node_base **)(param_1 + 0x18)) {
          p_Var13 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var16);
          if ((int)uVar18 <= *(int *)(p_Var13 + 0x20)) goto LAB_001010b6;
          if (*(long *)(p_Var13 + 0x18) != 0) {
            bVar26 = true;
            goto LAB_00101581;
          }
          bVar26 = false;
          p_Var16 = p_Var13;
          goto LAB_0010156e;
        }
        bVar26 = true;
LAB_00101581:
        std::_Rb_tree_insert_and_rebalance(bVar26,p_Var12,p_Var16,p_Var21);
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
      }
LAB_00101105:
      local_88 = p_Var12 + 0x28;
      pmVar15 = *(map **)(param_2 + 0x10);
      bVar10 = (byte)((uint)iVar5 >> 0x18);
      bVar26 = (bool)(bVar10 >> 7);
      pmVar14 = pmVar15;
      pmVar20 = pmVar1;
      pmVar19 = pmVar1;
      local_80 = lVar22;
      local_78 = bVar26;
      if (pmVar15 == (map *)0x0) {
LAB_00101420:
        local_e8 = (_Rb_tree_node_base *)&local_f8;
        lVar22 = std::
                 _Rb_tree<std::pair<int,int>,std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,std::_Select1st<std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>
                 ::
                 _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<std::pair<int,int>const&>,std::tuple<>>
                           (param_2,pmVar19,&local_e8);
        pmVar15 = *(map **)(param_2 + 0x10);
        local_70 = (map *)(lVar22 + 0x28);
        local_68 = (long)(int)(local_f8 ^ local_f4);
        pmVar14 = pmVar1;
        if (pmVar15 != (map *)0x0) goto LAB_001011c6;
LAB_00101210:
        local_60 = bVar26 == param_7;
        local_e8 = (_Rb_tree_node_base *)&local_f0;
        pmVar14 = (map *)std::
                         _Rb_tree<std::pair<int,int>,std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,std::_Select1st<std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>
                         ::
                         _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<std::pair<int,int>const&>,std::tuple<>>
                                   (param_2,pmVar14,&local_e8);
      }
      else {
        do {
          while ((pmVar19 = pmVar14, (int)local_f8 <= (int)*(uint *)(pmVar19 + 0x20) &&
                 ((local_f8 != *(uint *)(pmVar19 + 0x20) ||
                  ((int)local_f4 <= *(int *)(pmVar19 + 0x24)))))) {
            pmVar14 = *(map **)(pmVar19 + 0x10);
            pmVar20 = pmVar19;
            if (*(map **)(pmVar19 + 0x10) == (map *)0x0) goto LAB_00101171;
          }
          pmVar2 = pmVar19 + 0x18;
          pmVar14 = *(map **)pmVar2;
          pmVar19 = pmVar20;
        } while (*(map **)pmVar2 != (map *)0x0);
LAB_00101171:
        if (((pmVar19 == pmVar1) || ((int)local_f8 < (int)*(uint *)(pmVar19 + 0x20))) ||
           ((*(uint *)(pmVar19 + 0x20) == local_f8 && ((int)local_f4 < *(int *)(pmVar19 + 0x24)))))
        goto LAB_00101420;
        local_70 = pmVar19 + 0x28;
        local_68 = (long)(int)(local_f8 ^ local_f4);
LAB_001011c6:
        local_60 = bVar26 == param_7;
        pmVar20 = pmVar1;
        do {
          while ((pmVar14 = pmVar15, (int)*(uint *)(pmVar14 + 0x20) < (int)local_f0 ||
                 ((local_f0 == *(uint *)(pmVar14 + 0x20) &&
                  (*(int *)(pmVar14 + 0x24) < (int)local_ec))))) {
            pmVar19 = pmVar14 + 0x18;
            pmVar15 = *(map **)pmVar19;
            pmVar14 = pmVar20;
            if (*(map **)pmVar19 == (map *)0x0) goto LAB_001011f1;
          }
          pmVar15 = *(map **)(pmVar14 + 0x10);
          pmVar20 = pmVar14;
        } while (*(map **)(pmVar14 + 0x10) != (map *)0x0);
LAB_001011f1:
        if (((pmVar1 == pmVar14) || ((int)local_f0 < (int)*(uint *)(pmVar14 + 0x20))) ||
           ((*(uint *)(pmVar14 + 0x20) == local_f0 && ((int)local_ec < *(int *)(pmVar14 + 0x24)))))
        goto LAB_00101210;
      }
      local_58 = pmVar14 + 0x28;
      local_50 = (long)(int)(local_f0 ^ local_ec);
      local_48 = param_7 ^ bVar10 >> 7;
      iVar25 = -iVar5;
      if (0 < iVar5) {
        iVar25 = iVar5;
      }
      iVar25 = iVar25 + iVar4;
      pp_Var23 = &local_88;
      do {
        p_Var16 = pp_Var23[1];
        local_100 = p_Var16;
        if (local_98 == (code *)0x0) {
LAB_0010162b:
          std::__throw_bad_function_call();
          goto LAB_00101630;
        }
        (*pcStack_90)(local_a8,&local_100);
        if (iVar5 != 0) {
          pvVar6 = (vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>
                    *)*pp_Var23;
          uVar3 = *(undefined1 *)(pp_Var23 + 2);
          iVar17 = iVar4;
          do {
            while( true ) {
              local_e8 = (_Rb_tree_node_base *)CONCAT44(local_e8._4_4_,iVar17);
              plVar7 = *(long **)(pvVar6 + 8);
              uStack_e0 = 0;
              local_d8 = uVar3;
              if (plVar7 != *(long **)(pvVar6 + 0x10)) break;
              iVar17 = iVar17 + 1;
              std::
              vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>
              ::_M_realloc_insert<(anonymous_namespace)::EdgePos>(pvVar6,plVar7,&local_e8);
              if (iVar25 == iVar17) goto LAB_00101358;
            }
            iVar17 = iVar17 + 1;
            *plVar7 = (long)local_e8;
            plVar7[1] = 0;
            plVar7[2] = CONCAT71(uStack_d7,uVar3);
            *(long **)(pvVar6 + 8) = plVar7 + 3;
          } while (iVar25 != iVar17);
        }
LAB_00101358:
        local_e8 = p_Var16;
        if (local_b8 == (code *)0x0) goto LAB_0010162b;
        pp_Var23 = pp_Var23 + 3;
        (*pcStack_b0)(local_c8,&local_e8);
      } while (local_40 != pp_Var23);
      if (local_98 != (code *)0x0) {
        (*local_98)(local_a8,local_a8,3);
      }
      if (local_b8 != (code *)0x0) {
        (*local_b8)(local_c8,local_c8,3);
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 < *(ulong *)(param_3 + 8) >> 3);
  }
  if (local_40[0] == *(_Rb_tree_node_base **)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101630:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* __gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >
   std::__move_merge<(anonymous namespace)::EdgePos*, __gnu_cxx::__normal_iterator<(anonymous
   namespace)::EdgePos*, std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous
   namespace)::EdgePos> > >, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::PairUp(std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous
   namespace)::EdgePos> >&)::{lambda((anonymous namespace)::EdgePos, (anonymous
   namespace)::EdgePos)#1}> >((anonymous namespace)::EdgePos*, (anonymous namespace)::EdgePos*,
   (anonymous namespace)::EdgePos*, (anonymous namespace)::EdgePos*,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::PairUp(std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> >&)::{lambda((anonymous
   namespace)::EdgePos, (anonymous namespace)::EdgePos)#1}>) [clone .isra.0] */

long std::
     __move_merge<(anonymous_namespace)::EdgePos*,__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  size_t __n;
  undefined8 *puVar3;
  undefined8 *puVar4;
  size_t __n_00;
  
  puVar2 = param_3;
  puVar4 = param_5;
  if (param_2 != param_1) {
    do {
      while( true ) {
        param_3 = puVar2;
        param_5 = puVar4;
        if (param_4 == puVar2) goto LAB_001016a5;
        if ((double)puVar2[1] <= (double)param_1[1] && (double)param_1[1] != (double)puVar2[1])
        break;
        uVar1 = param_1[1];
        puVar3 = param_1 + 3;
        param_5 = puVar4 + 3;
        *puVar4 = *param_1;
        puVar4[1] = uVar1;
        puVar4[2] = param_1[2];
        param_1 = puVar3;
        puVar4 = param_5;
        if (param_2 == puVar3) goto LAB_001016a5;
      }
      uVar1 = puVar2[1];
      param_5 = puVar4 + 3;
      param_3 = puVar2 + 3;
      *puVar4 = *puVar2;
      puVar4[1] = uVar1;
      puVar4[2] = puVar2[2];
      puVar2 = param_3;
      puVar4 = param_5;
    } while (param_2 != param_1);
  }
LAB_001016a5:
  __n = (long)param_2 - (long)param_1;
  if ((long)__n < 0x19) {
    if (__n == 0x18) {
      uVar1 = param_1[1];
      *param_5 = *param_1;
      param_5[1] = uVar1;
      param_5[2] = param_1[2];
    }
  }
  else {
    param_5 = (undefined8 *)memmove(param_5,param_1,__n);
  }
  __n_00 = (long)param_4 - (long)param_3;
  param_5 = (undefined8 *)((long)param_5 + __n);
  if ((long)__n_00 < 0x19) {
    if (__n_00 == 0x18) {
      uVar1 = param_3[1];
      *param_5 = *param_3;
      param_5[1] = uVar1;
      param_5[2] = param_3[2];
    }
  }
  else {
    param_5 = (undefined8 *)memmove(param_5,param_3,__n_00);
  }
  return (long)param_5 + __n_00;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* (anonymous namespace)::EdgePos* std::__move_merge<__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EdgePos*, std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous
   namespace)::EdgePos> > >, (anonymous namespace)::EdgePos*,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::PairUp(std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> >&)::{lambda((anonymous
   namespace)::EdgePos, (anonymous namespace)::EdgePos)#1}>
   >(__gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >, (anonymous
   namespace)::EdgePos*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::PairUp(std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous
   namespace)::EdgePos> >&)::{lambda((anonymous namespace)::EdgePos, (anonymous
   namespace)::EdgePos)#1}>) [clone .isra.0] */

EdgePos * std::
          __move_merge<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,(anonymous_namespace)::EdgePos*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
                    (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4
                    ,undefined8 *param_5)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *__dest;
  size_t __n;
  size_t __n_00;
  
  __dest = param_5;
  if (param_1 != param_2) {
    do {
      while( true ) {
        if (param_4 == param_3) {
          __n = (long)param_2 - (long)param_1;
          if (0x18 < (long)__n) {
            __n_00 = (long)param_4 - (long)param_3;
            pvVar2 = memmove(__dest,param_1,__n);
            param_5 = (undefined8 *)((long)pvVar2 + __n);
            if (0x18 < (long)__n_00) goto LAB_001017a0;
            goto LAB_001017e6;
          }
          param_5 = (undefined8 *)((long)__dest + __n);
          if (__n == 0x18) {
            uVar1 = param_1[1];
            *__dest = *param_1;
            __dest[1] = uVar1;
            __dest[2] = param_1[2];
          }
          goto LAB_0010178d;
        }
        if ((double)param_3[1] <= (double)param_1[1] && (double)param_1[1] != (double)param_3[1])
        break;
        uVar1 = param_1[1];
        puVar3 = param_1 + 3;
        param_5 = __dest + 3;
        *__dest = *param_1;
        __dest[1] = uVar1;
        __dest[2] = param_1[2];
        param_1 = puVar3;
        __dest = param_5;
        if (puVar3 == param_2) goto LAB_0010178d;
      }
      uVar1 = param_3[1];
      param_5 = __dest + 3;
      puVar3 = param_3 + 3;
      *__dest = *param_3;
      __dest[1] = uVar1;
      __dest[2] = param_3[2];
      param_3 = puVar3;
      __dest = param_5;
    } while (param_1 != param_2);
  }
LAB_0010178d:
  __n_00 = (long)param_4 - (long)param_3;
  if ((long)__n_00 < 0x19) {
LAB_001017e6:
    if (__n_00 == 0x18) {
      uVar1 = param_3[1];
      *param_5 = *param_3;
      param_5[1] = uVar1;
      param_5[2] = param_3[2];
    }
  }
  else {
LAB_001017a0:
    param_5 = (undefined8 *)memmove(param_5,param_3,__n_00);
  }
  return (EdgePos *)((long)param_5 + __n_00);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_sort_with_buffer<__gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   (anonymous namespace)::EdgePos*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::PairUp(std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous
   namespace)::EdgePos> >&)::{lambda((anonymous namespace)::EdgePos, (anonymous
   namespace)::EdgePos)#1}> >(__gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >, (anonymous
   namespace)::EdgePos*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::PairUp(std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous
   namespace)::EdgePos> >&)::{lambda((anonymous namespace)::EdgePos, (anonymous
   namespace)::EdgePos)#1}>) [clone .isra.0] */

void std::
     __merge_sort_with_buffer<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,(anonymous_namespace)::EdgePos*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
               (long param_1,long param_2,EdgePos *param_3)

{
  EdgePos *pEVar1;
  EdgePos *pEVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  EdgePos *pEVar10;
  long local_68;
  
  lVar8 = param_2 - param_1;
  pEVar1 = param_3 + lVar8;
  lVar3 = (lVar8 >> 3) * -0x5555555555555555;
  lVar6 = param_1;
  if (lVar8 < 0x91) {
    __insertion_sort<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
              (param_1);
    return;
  }
  do {
    lVar7 = lVar6 + 0xa8;
    __insertion_sort<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
              (lVar6,lVar7);
    lVar6 = lVar7;
  } while (0x90 < param_2 - lVar7);
  __insertion_sort<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
            (lVar7,param_2);
  if (0xa8 < lVar8) {
    local_68 = 7;
    lVar6 = 0xe;
    do {
      lVar8 = lVar3;
      pEVar2 = param_3;
      lVar7 = param_1;
      if (lVar6 <= lVar3) {
        lVar9 = local_68 * 4 + lVar6;
        lVar5 = param_1;
        do {
          lVar7 = lVar5 + lVar9 * 8;
          lVar8 = lVar7 + (lVar6 + local_68) * 8 + lVar9 * -8;
          pEVar2 = __move_merge<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,(anonymous_namespace)::EdgePos*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
                             (lVar5,lVar8,lVar8,lVar7,pEVar2);
          lVar4 = param_2 - lVar7 >> 3;
          lVar8 = lVar4 * -0x5555555555555555;
          lVar5 = lVar7;
        } while (lVar6 == lVar8 || SBORROW8(lVar6,lVar8) != lVar6 + lVar4 * 0x5555555555555555 < 0);
      }
      lVar9 = local_68 * 4;
      if (local_68 <= lVar8) {
        lVar8 = local_68;
      }
      lVar8 = lVar7 + lVar8 * 0x18;
      __move_merge<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,(anonymous_namespace)::EdgePos*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
                (lVar7,lVar8,lVar8,param_2,pEVar2);
      if (lVar3 < lVar9) {
        if (lVar6 < lVar3) {
          lVar3 = lVar6;
        }
        __move_merge<(anonymous_namespace)::EdgePos*,__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
                  (param_3,param_3 + lVar3 * 0x18,param_3 + lVar3 * 0x18,pEVar1,param_1);
        return;
      }
      lVar8 = param_1;
      pEVar2 = param_3;
      do {
        pEVar10 = pEVar2 + local_68 * 0x60;
        lVar8 = __move_merge<(anonymous_namespace)::EdgePos*,__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
                          (pEVar2,pEVar10 + lVar6 * 0x18 + local_68 * -0x60,
                           pEVar10 + lVar6 * 0x18 + local_68 * -0x60,pEVar10,lVar8);
        lVar5 = (long)pEVar1 - (long)pEVar10 >> 3;
        lVar7 = lVar5 * -0x5555555555555555;
        pEVar2 = pEVar10;
      } while (lVar9 == lVar7 || SBORROW8(lVar9,lVar7) != lVar9 + lVar5 * 0x5555555555555555 < 0);
      if (lVar7 - lVar6 != 0 && lVar6 <= lVar7) {
        lVar7 = lVar6;
      }
      __move_merge<(anonymous_namespace)::EdgePos*,__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
                (pEVar10,pEVar10 + lVar7 * 0x18,pEVar10 + lVar7 * 0x18,pEVar1,lVar8);
      lVar6 = local_68 << 3;
      local_68 = lVar9;
    } while (lVar9 < lVar3);
  }
  return;
}



/* std::_Rb_tree<int, std::pair<int const, manifold::Manifold::Impl::Relation>,
   std::_Select1st<std::pair<int const, manifold::Manifold::Impl::Relation> >, std::less<int>,
   std::allocator<std::pair<int const, manifold::Manifold::Impl::Relation> >
   >::_M_erase(std::_Rb_tree_node<std::pair<int const, manifold::Manifold::Impl::Relation> >*)
   [clone .isra.0] */

void std::
     _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
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
                      operator_delete(pvVar2,0x98);
                      pvVar2 = pvVar1;
                    }
                    pvVar2 = *(void **)((long)pvVar6 + 0x10);
                    operator_delete(pvVar6,0x98);
                    pvVar6 = pvVar2;
                  }
                  pvVar6 = *(void **)((long)pvVar4 + 0x10);
                  operator_delete(pvVar4,0x98);
                  pvVar4 = pvVar6;
                }
                pvVar4 = *(void **)((long)pvVar3 + 0x10);
                operator_delete(pvVar3,0x98);
                pvVar3 = pvVar4;
              }
              pvVar3 = *(void **)((long)pvVar5 + 0x10);
              operator_delete(pvVar5,0x98);
              pvVar5 = pvVar3;
            }
            pvVar5 = *(void **)((long)pvVar7 + 0x10);
            operator_delete(pvVar7,0x98);
            pvVar7 = pvVar5;
          }
          pvVar7 = *(void **)((long)pvVar8 + 0x10);
          operator_delete(pvVar8,0x98);
          pvVar8 = pvVar7;
        }
        pvVar8 = *(void **)((long)pvVar10 + 0x10);
        operator_delete(pvVar10,0x98);
        pvVar10 = pvVar8;
      }
      p_Var9 = *(_Rb_tree_node **)(local_48 + 0x10);
      operator_delete(local_48,0x98);
      local_48 = p_Var9;
    } while (p_Var9 != (_Rb_tree_node *)0x0);
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_adaptive<__gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   long, (anonymous namespace)::EdgePos*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::PairUp(std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous
   namespace)::EdgePos> >&)::{lambda((anonymous namespace)::EdgePos, (anonymous
   namespace)::EdgePos)#1}> >(__gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >, long, long, (anonymous
   namespace)::EdgePos*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::PairUp(std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous
   namespace)::EdgePos> >&)::{lambda((anonymous namespace)::EdgePos, (anonymous
   namespace)::EdgePos)#1}>) [clone .isra.0] */

void std::
     __merge_adaptive<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,long,(anonymous_namespace)::EdgePos*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
               long param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  size_t sVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_4 <= param_5) {
    sVar4 = (long)param_2 - (long)param_1;
    if ((long)sVar4 < 0x19) {
      if (sVar4 == 0x18) {
        uVar1 = param_1[1];
        *param_6 = *param_1;
        param_6[1] = uVar1;
        param_6[2] = param_1[2];
      }
    }
    else {
      param_6 = (undefined8 *)memmove(param_6,param_1,sVar4);
    }
    puVar3 = (undefined8 *)((long)param_6 + sVar4);
    do {
      puVar5 = param_1;
      if (param_6 == puVar3) {
        return;
      }
      while( true ) {
        if (param_3 == param_2) {
          if (puVar3 == param_6) {
            return;
          }
          sVar4 = (long)puVar3 - (long)param_6;
          if ((long)sVar4 < 0x19) {
            if (sVar4 != 0x18) {
              return;
            }
            uVar1 = param_6[1];
            *puVar5 = *param_6;
            puVar5[1] = uVar1;
            puVar5[2] = param_6[2];
            return;
          }
          goto LAB_00101e24;
        }
        if ((double)param_2[1] <= (double)param_6[1] && (double)param_6[1] != (double)param_2[1])
        break;
        uVar1 = param_6[1];
        puVar6 = param_6 + 3;
        *puVar5 = *param_6;
        puVar5[1] = uVar1;
        puVar5[2] = param_6[2];
        puVar5 = puVar5 + 3;
        param_6 = puVar6;
        if (puVar6 == puVar3) {
          return;
        }
      }
      uVar1 = param_2[1];
      param_1 = puVar5 + 3;
      *puVar5 = *param_2;
      puVar5[1] = uVar1;
      puVar5[2] = param_2[2];
      param_2 = param_2 + 3;
    } while( true );
  }
  sVar4 = (long)param_3 - (long)param_2;
  puVar3 = (undefined8 *)((long)param_6 + sVar4);
  if ((long)sVar4 < 0x19) {
    if (sVar4 == 0x18) {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      *param_6 = uVar1;
      param_6[1] = uVar2;
      param_6[2] = param_2[2];
      if (param_1 == param_2) {
        param_3[-3] = uVar1;
        param_3[-2] = uVar2;
        param_3[-1] = param_6[2];
        return;
      }
    }
    else if (param_1 == param_2) {
      return;
    }
  }
  else {
    param_6 = (undefined8 *)memmove(param_6,param_2,sVar4);
    if (param_1 == param_2) {
      puVar5 = (undefined8 *)((long)param_3 - sVar4);
      goto LAB_00101e24;
    }
  }
  if (param_6 != puVar3) {
    param_2 = param_2 + -3;
    puVar3 = puVar3 + -3;
    while( true ) {
      for (; puVar5 = param_3 + -3,
          (double)param_2[1] < (double)puVar3[1] || (double)param_2[1] == (double)puVar3[1];
          puVar3 = puVar3 + -3) {
        uVar1 = puVar3[1];
        param_3[-3] = *puVar3;
        param_3[-2] = uVar1;
        param_3[-1] = puVar3[2];
        if (param_6 == puVar3) {
          return;
        }
        param_3 = puVar5;
      }
      uVar1 = param_2[1];
      param_3[-3] = *param_2;
      param_3[-2] = uVar1;
      param_3[-1] = param_2[2];
      if (param_2 == param_1) break;
      param_2 = param_2 + -3;
      param_3 = puVar5;
    }
    sVar4 = (long)puVar3 + (0x18 - (long)param_6);
    if (0x18 < (long)sVar4) {
      puVar5 = (undefined8 *)((long)puVar5 - sVar4);
LAB_00101e24:
      memmove(puVar5,param_6,sVar4);
      return;
    }
    if (sVar4 == 0x18) {
      uVar1 = param_6[1];
      param_3[-6] = *param_6;
      param_3[-5] = uVar1;
      param_3[-4] = param_6[2];
    }
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__stable_sort_adaptive<__gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   (anonymous namespace)::EdgePos*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::PairUp(std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous
   namespace)::EdgePos> >&)::{lambda((anonymous namespace)::EdgePos, (anonymous
   namespace)::EdgePos)#1}> >(__gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >, (anonymous
   namespace)::EdgePos*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::PairUp(std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous
   namespace)::EdgePos> >&)::{lambda((anonymous namespace)::EdgePos, (anonymous
   namespace)::EdgePos)#1}>) [clone .isra.0] */

void std::
     __stable_sort_adaptive<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,(anonymous_namespace)::EdgePos*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
               (long param_1,long param_2,long param_3,undefined8 param_4)

{
  __merge_sort_with_buffer<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,(anonymous_namespace)::EdgePos*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
            (param_1,param_2,param_4);
  __merge_sort_with_buffer<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,(anonymous_namespace)::EdgePos*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
            (param_2,param_3,param_4);
  __merge_adaptive<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,long,(anonymous_namespace)::EdgePos*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
            (param_1,param_2,param_3,(param_2 - param_1 >> 3) * -0x5555555555555555,
             (param_3 - param_2 >> 3) * -0x5555555555555555,param_4);
  return;
}



/* __gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >
   std::_V2::__rotate<__gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >
   >(__gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   std::random_access_iterator_tag) [clone .isra.0] */

undefined8 *
std::_V2::
__rotate<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  size_t sVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  if (param_1 == param_2) {
    return param_3;
  }
  if (param_2 == param_3) {
    return param_1;
  }
  lVar6 = (long)param_3 - (long)param_1 >> 3;
  lVar14 = (long)param_2 - (long)param_1 >> 3;
  puVar8 = (undefined8 *)((long)param_1 + ((long)param_3 - (long)param_2));
  lVar7 = lVar6 * -0x5555555555555555;
  lVar15 = lVar14 * -0x5555555555555555;
  puVar9 = param_2;
  if (lVar6 * 0x5555555555555555 + lVar14 * 0x5555555555555556 == 0) {
    do {
      uVar5 = puVar9[1];
      uVar3 = *(undefined4 *)param_1;
      puVar12 = param_1 + 3;
      uVar1 = param_1[1];
      uVar2 = *(undefined1 *)(param_1 + 2);
      *param_1 = *puVar9;
      param_1[1] = uVar5;
      param_1[2] = puVar9[2];
      *(undefined4 *)puVar9 = uVar3;
      puVar9[1] = uVar1;
      *(undefined1 *)(puVar9 + 2) = uVar2;
      puVar8 = param_2;
      param_1 = puVar12;
      puVar9 = puVar9 + 3;
    } while (param_2 != puVar12);
  }
  else {
    do {
      lVar16 = lVar7 - lVar15;
      lVar6 = lVar7;
      lVar14 = lVar7;
      lVar7 = lVar16;
      if (lVar15 < lVar16) {
        do {
          lVar14 = lVar15;
          if (lVar14 == 1) {
            uVar3 = *(undefined4 *)param_1;
            uVar1 = param_1[1];
            uVar2 = *(undefined1 *)(param_1 + 2);
            sVar11 = lVar6 * 0x18 - 0x18;
            if ((long)sVar11 < 0x19) {
              if (sVar11 == 0x18) {
                *param_1 = param_1[3];
                param_1[1] = param_1[4];
                param_1[2] = param_1[5];
              }
            }
            else {
              memmove(param_1,param_1 + 3,sVar11);
            }
            *(undefined4 *)(param_1 + lVar6 * 3 + -3) = uVar3;
            *(undefined1 *)(param_1 + lVar6 * 3 + -1) = uVar2;
            param_1[lVar6 * 3 + -2] = uVar1;
            return puVar8;
          }
          if (0 < lVar16) {
            lVar15 = 0;
            puVar9 = param_1 + lVar14 * 3;
            puVar12 = param_1;
            do {
              uVar5 = puVar9[1];
              uVar3 = *(undefined4 *)puVar12;
              lVar15 = lVar15 + 1;
              uVar1 = puVar12[1];
              uVar2 = *(undefined1 *)(puVar12 + 2);
              *puVar12 = *puVar9;
              puVar12[1] = uVar5;
              puVar12[2] = puVar9[2];
              *(undefined4 *)puVar9 = uVar3;
              puVar9[1] = uVar1;
              *(undefined1 *)(puVar9 + 2) = uVar2;
              puVar9 = puVar9 + 3;
              puVar12 = puVar12 + 3;
            } while (lVar16 != lVar15);
            param_1 = param_1 + lVar16 * 3;
          }
          if (lVar6 % lVar14 == 0) {
            return puVar8;
          }
          lVar15 = lVar14 - lVar6 % lVar14;
          lVar16 = lVar14 - lVar15;
          lVar6 = lVar14;
          lVar7 = lVar16;
        } while (lVar15 < lVar16);
      }
      puVar9 = param_1 + lVar14 * 3;
      if (lVar7 == 1) {
        uVar3 = *(undefined4 *)(puVar9 + -3);
        uVar1 = puVar9[-2];
        sVar11 = (long)puVar9 + (-0x18 - (long)param_1);
        uVar2 = *(undefined1 *)(puVar9 + -1);
        if ((long)sVar11 < 0x19) {
          if (sVar11 == 0x18) {
            uVar5 = param_1[1];
            puVar9[-3] = *param_1;
            puVar9[-2] = uVar5;
            puVar9[-1] = param_1[2];
          }
        }
        else {
          memmove((void *)((long)puVar9 - sVar11),param_1,sVar11);
        }
        *(undefined4 *)param_1 = uVar3;
        *(undefined1 *)(param_1 + 2) = uVar2;
        param_1[1] = uVar1;
        return puVar8;
      }
      puVar12 = param_1 + lVar15 * 3;
      if (0 < lVar15) {
        lVar6 = 0;
        puVar4 = puVar12;
        do {
          puVar13 = puVar9 + -3;
          puVar10 = puVar4 + -3;
          uVar5 = puVar9[-2];
          uVar3 = *(undefined4 *)puVar10;
          lVar6 = lVar6 + 1;
          uVar1 = puVar4[-2];
          uVar2 = *(undefined1 *)(puVar4 + -1);
          *puVar10 = *puVar13;
          puVar4[-2] = uVar5;
          puVar4[-1] = puVar9[-1];
          *(undefined4 *)puVar13 = uVar3;
          puVar9[-2] = uVar1;
          *(undefined1 *)(puVar9 + -1) = uVar2;
          puVar12 = param_1;
          puVar4 = puVar10;
          puVar9 = puVar13;
        } while (lVar15 != lVar6);
      }
      lVar15 = lVar14 % lVar7;
      param_1 = puVar12;
    } while (lVar15 != 0);
  }
  return puVar8;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_without_buffer<__gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   long, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::PairUp(std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> >&)::{lambda((anonymous
   namespace)::EdgePos, (anonymous namespace)::EdgePos)#1}>
   >(__gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >, long, long,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::PairUp(std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> >&)::{lambda((anonymous
   namespace)::EdgePos, (anonymous namespace)::EdgePos)#1}>) [clone .isra.0] */

void std::
     __merge_without_buffer<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4,long param_5
               )

{
  double dVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  while( true ) {
    if (param_4 == 0) {
      return;
    }
    if (param_5 == 0) break;
    if (param_4 + param_5 == 2) {
      dVar1 = (double)param_1[1];
      if ((double)param_2[1] <= dVar1 && dVar1 != (double)param_2[1]) {
        uVar4 = param_2[1];
        uVar3 = *(undefined4 *)param_1;
        uVar2 = *(undefined1 *)(param_1 + 2);
        *param_1 = *param_2;
        param_1[1] = uVar4;
        param_1[2] = param_2[2];
        *(undefined4 *)param_2 = uVar3;
        *(undefined1 *)(param_2 + 2) = uVar2;
        param_2[1] = dVar1;
      }
      return;
    }
    if (param_5 < param_4) {
      lVar9 = param_4 / 2;
      puVar5 = param_1 + (param_4 - (param_4 >> 0x3f) & 0xfffffffffffffffeU) + lVar9;
      puVar7 = (undefined8 *)
               __lower_bound<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,(anonymous_namespace)::EdgePos,__gnu_cxx::__ops::_Iter_comp_val<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
                         (puVar5[1],param_2,param_3);
      lVar8 = ((long)puVar7 - (long)param_2 >> 3) * -0x5555555555555555;
      puVar6 = param_2;
      param_2 = puVar7;
    }
    else {
      lVar8 = param_5 / 2;
      puVar7 = param_2 + (param_5 - (param_5 >> 0x3f) & 0xfffffffffffffffeU) + lVar8;
      puVar6 = param_1;
      puVar5 = (undefined8 *)
               __upper_bound<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,(anonymous_namespace)::EdgePos,__gnu_cxx::__ops::_Val_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
                         (puVar7[1]);
      lVar9 = ((long)puVar5 - (long)puVar6 >> 3) * -0x5555555555555555;
      puVar6 = param_2;
      param_2 = puVar7;
    }
    puVar6 = (undefined8 *)
             _V2::
             __rotate<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>
                       (puVar5,puVar6,param_2);
    param_4 = param_4 - lVar9;
    __merge_without_buffer<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
              (param_1,puVar5,puVar6,lVar9,lVar8);
    param_5 = param_5 - lVar8;
    param_1 = puVar6;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__inplace_stable_sort<__gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::PairUp(std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> >&)::{lambda((anonymous
   namespace)::EdgePos, (anonymous namespace)::EdgePos)#1}>
   >(__gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::PairUp(std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> >&)::{lambda((anonymous
   namespace)::EdgePos, (anonymous namespace)::EdgePos)#1}>) [clone .isra.0] */

void std::
     __inplace_stable_sort<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
               (long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if (0x150 < param_2 - param_1) {
    uVar2 = (param_2 - param_1 >> 3) * -0x5555555555555555;
    lVar3 = ((uVar2 & 0xfffffffffffffffe) + ((long)uVar2 >> 1)) * 8;
    lVar1 = param_1 + lVar3;
    __inplace_stable_sort<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
              (param_1,lVar1);
    __inplace_stable_sort<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
              (lVar1,param_2);
    __merge_without_buffer<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
              (param_1,lVar1,param_2,(lVar3 >> 3) * -0x5555555555555555,
               (param_2 - lVar1 >> 3) * -0x5555555555555555);
    return;
  }
  __insertion_sort<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
            ();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_adaptive_resize<__gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   long, (anonymous namespace)::EdgePos*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::PairUp(std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous
   namespace)::EdgePos> >&)::{lambda((anonymous namespace)::EdgePos, (anonymous
   namespace)::EdgePos)#1}> >(__gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*,
   std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >, long, long, (anonymous
   namespace)::EdgePos*, long, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::PairUp(std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous
   namespace)::EdgePos> >&)::{lambda((anonymous namespace)::EdgePos, (anonymous
   namespace)::EdgePos)#1}>) [clone .isra.0] */

void std::
     __merge_adaptive_resize<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,long,(anonymous_namespace)::EdgePos*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4,long param_5
               ,undefined8 *param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 *__dest;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  size_t sVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *local_70;
  
  local_70 = param_1;
  do {
    lVar4 = param_5;
    if (param_4 <= param_5) {
      lVar4 = param_4;
    }
    if (lVar4 <= param_7) {
      __merge_adaptive<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,long,(anonymous_namespace)::EdgePos*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
                ();
      return;
    }
    if (param_5 < param_4) {
      lVar4 = param_4 / 2;
      __dest = local_70 + (param_4 - (param_4 >> 0x3f) & 0xfffffffffffffffeU) + lVar4;
      puVar2 = (undefined8 *)
               __lower_bound<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,(anonymous_namespace)::EdgePos,__gnu_cxx::__ops::_Iter_comp_val<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
                         (__dest[1],param_2,param_3);
      param_4 = param_4 - lVar4;
      lVar3 = (long)puVar2 - (long)param_2 >> 3;
      lVar8 = lVar3 * -0x5555555555555555;
      puVar7 = local_70;
      if (param_4 != lVar8 && SBORROW8(param_4,lVar8) == param_4 + lVar3 * 0x5555555555555555 < 0)
      goto LAB_001024d5;
LAB_001025aa:
      if (param_7 < param_4) {
        local_70 = (undefined8 *)
                   _V2::
                   __rotate<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>
                             (__dest,param_2,puVar2);
      }
      else {
        local_70 = puVar2;
        if (param_4 != 0) {
          sVar6 = (long)param_2 - (long)__dest;
          sVar5 = (long)puVar2 - (long)param_2;
          local_70 = (undefined8 *)((long)puVar2 - sVar6);
          if ((long)sVar6 < 0x19) {
            if (sVar6 == 0x18) {
              uVar1 = __dest[1];
              *param_6 = *__dest;
              param_6[1] = uVar1;
              param_6[2] = __dest[2];
              if ((long)sVar5 < 0x19) {
                if (sVar5 == 0x18) goto LAB_00102880;
              }
              else {
                __dest = (undefined8 *)memmove(__dest,param_2,sVar5);
              }
LAB_0010289b:
              uVar1 = param_6[1];
              puVar2[-3] = *param_6;
              puVar2[-2] = uVar1;
              puVar2[-1] = param_6[2];
            }
            else if ((long)sVar5 < 0x19) {
              if (sVar5 == 0x18) {
                uVar1 = param_2[1];
                *__dest = *param_2;
                __dest[1] = uVar1;
                __dest[2] = param_2[2];
              }
            }
            else {
              __dest = (undefined8 *)memmove(__dest,param_2,sVar5);
            }
          }
          else {
            memmove(param_6,__dest,sVar6);
            if ((long)sVar5 < 0x19) {
              if (sVar5 == 0x18) {
LAB_00102880:
                uVar1 = param_2[1];
                *__dest = *param_2;
                __dest[1] = uVar1;
                __dest[2] = param_2[2];
                if (sVar6 == 0x18) goto LAB_0010289b;
              }
            }
            else {
              __dest = (undefined8 *)memmove(__dest,param_2,sVar5);
            }
            memmove(local_70,param_6,sVar6);
          }
        }
      }
    }
    else {
      lVar8 = param_5 / 2;
      puVar2 = param_2 + (param_5 - (param_5 >> 0x3f) & 0xfffffffffffffffeU) + lVar8;
      puVar7 = local_70;
      __dest = (undefined8 *)
               __upper_bound<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,(anonymous_namespace)::EdgePos,__gnu_cxx::__ops::_Val_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
                         (puVar2[1]);
      lVar3 = (long)__dest - (long)local_70 >> 3;
      lVar4 = lVar3 * -0x5555555555555555;
      param_4 = param_4 + lVar3 * 0x5555555555555555;
      if (param_4 <= lVar8) goto LAB_001025aa;
LAB_001024d5:
      if (param_7 < lVar8) goto LAB_001025aa;
      local_70 = __dest;
      if (lVar8 != 0) {
        sVar5 = (long)puVar2 - (long)param_2;
        sVar6 = (long)param_2 - (long)__dest;
        if ((long)sVar5 < 0x19) {
          if (sVar5 == 0x18) {
            uVar1 = param_2[1];
            *param_6 = *param_2;
            param_6[1] = uVar1;
            param_6[2] = param_2[2];
            if (0x18 < (long)sVar6) goto LAB_0010274a;
            if (sVar6 == 0x18) goto LAB_00102829;
LAB_00102807:
            uVar1 = param_6[1];
            *__dest = *param_6;
            __dest[1] = uVar1;
            __dest[2] = param_6[2];
          }
          else {
            if (0x18 < (long)sVar6) {
              memmove((void *)((long)puVar2 - sVar6),__dest,sVar6);
              goto LAB_001027ff;
            }
            if (sVar6 == 0x18) {
              uVar1 = __dest[1];
              puVar2[-3] = *__dest;
              puVar2[-2] = uVar1;
              puVar2[-1] = __dest[2];
            }
          }
        }
        else {
          memmove(param_6,param_2,sVar5);
          if ((long)sVar6 < 0x19) {
            if (sVar6 == 0x18) {
LAB_00102829:
              uVar1 = __dest[1];
              puVar2[-3] = *__dest;
              puVar2[-2] = uVar1;
              puVar2[-1] = __dest[2];
              goto LAB_00102779;
            }
          }
          else {
LAB_0010274a:
            memmove((void *)((long)puVar2 - sVar6),__dest,sVar6);
LAB_00102779:
            if ((long)sVar5 < 0x19) {
LAB_001027ff:
              if (sVar5 == 0x18) goto LAB_00102807;
              goto LAB_001027aa;
            }
          }
          __dest = (undefined8 *)memmove(__dest,param_6,sVar5);
        }
LAB_001027aa:
        local_70 = (undefined8 *)(sVar5 + (long)__dest);
      }
    }
    param_2 = puVar2;
    param_5 = param_5 - lVar8;
    __merge_adaptive_resize<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,long,(anonymous_namespace)::EdgePos*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
              (puVar7,__dest,local_70,lVar4,lVar8,param_6,param_7);
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__stable_sort_adaptive_resize<__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EdgePos*, std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous
   namespace)::EdgePos> > >, (anonymous namespace)::EdgePos*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::PairUp(std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> >&)::{lambda((anonymous
   namespace)::EdgePos, (anonymous namespace)::EdgePos)#1}>
   >(__gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EdgePos*, std::vector<(anonymous
   namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos> > >, (anonymous
   namespace)::EdgePos*, long, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::PairUp(std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous
   namespace)::EdgePos> >&)::{lambda((anonymous namespace)::EdgePos, (anonymous
   namespace)::EdgePos)#1}>) [clone .isra.0] */

void std::
     __stable_sort_adaptive_resize<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,(anonymous_namespace)::EdgePos*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
               (long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (param_2 - param_1 >> 3) * -0x5555555555555555 + 1;
  lVar3 = ((lVar2 - (lVar2 >> 0x3f) & 0xfffffffffffffffeU) + lVar2 / 2) * 8;
  lVar1 = param_1 + lVar3;
  if (param_4 < lVar2 / 2) {
    __stable_sort_adaptive_resize<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,(anonymous_namespace)::EdgePos*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
              (param_1,lVar1,param_3);
    __stable_sort_adaptive_resize<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,(anonymous_namespace)::EdgePos*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
              (lVar1,param_2,param_3,param_4);
    __merge_adaptive_resize<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,long,(anonymous_namespace)::EdgePos*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
              (param_1,lVar1,param_2,(lVar3 >> 3) * -0x5555555555555555,
               (param_2 - lVar1 >> 3) * -0x5555555555555555,param_3,param_4);
    return;
  }
  __stable_sort_adaptive<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,(anonymous_namespace)::EdgePos*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
            (param_1,lVar1,param_2,param_3);
  return;
}



/* (anonymous namespace)::PairUp(std::vector<(anonymous namespace)::EdgePos,
   std::allocator<(anonymous namespace)::EdgePos> >&) */

_anonymous_namespace_ * __thiscall
(anonymous_namespace)::PairUp(_anonymous_namespace_ *this,vector *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long in_FS_OFFSET;
  bool bVar15;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  
  puVar5 = *(undefined8 **)(param_1 + 8);
  puVar10 = *(undefined8 **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (ulong)(((long)puVar5 - (long)puVar10 >> 3) * -0x5555555555555555) >> 1;
  puVar6 = puVar5;
  puVar8 = puVar10;
  puVar12 = puVar10 + 3;
  if (puVar5 == puVar10) goto LAB_00102cce;
  do {
    while (*(char *)(puVar8 + 2) == '\0') {
      do {
        puVar6 = puVar6 + -3;
        puVar9 = puVar8;
        if (puVar6 == puVar8) goto LAB_00102b50;
      } while (*(char *)(puVar6 + 2) == '\0');
      uVar3 = puVar6[1];
      uVar2 = *(undefined4 *)puVar8;
      uVar1 = puVar8[1];
      *puVar8 = *puVar6;
      puVar8[1] = uVar3;
      puVar8[2] = puVar6[2];
      *(undefined4 *)puVar6 = uVar2;
      *(undefined1 *)(puVar6 + 2) = 0;
      puVar6[1] = uVar1;
      bVar15 = puVar6 == puVar12;
      puVar8 = puVar8 + 3;
      puVar9 = puVar12;
      puVar12 = puVar12 + 3;
      if (bVar15) goto LAB_00102b50;
    }
    puVar8 = puVar8 + 3;
    bVar15 = puVar6 != puVar12;
    puVar9 = puVar12;
    puVar12 = puVar12 + 3;
  } while (bVar15);
LAB_00102b50:
  if (puVar10 != puVar9) {
    lVar14 = (((long)puVar9 - (long)puVar10 >> 3) * -0x5555555555555555 + 1) / 2;
    lVar7 = lVar14;
    if ((long)puVar9 - (long)puVar10 < 1) {
LAB_00102d9e:
      uVar13 = 0;
      pvVar4 = (void *)0x0;
      puVar5 = puVar10;
      if (lVar14 == 0) {
LAB_00102be9:
        std::
        __stable_sort_adaptive<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,(anonymous_namespace)::EdgePos*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
                  (puVar10,puVar5,puVar9,pvVar4);
      }
      else {
        std::
        __inplace_stable_sort<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
                  (puVar10,puVar9);
        pvVar4 = (void *)0x0;
      }
    }
    else {
      while( true ) {
        uVar13 = lVar7 * 0x18;
        pvVar4 = operator_new(uVar13,(nothrow_t *)&std::nothrow);
        if (pvVar4 != (void *)0x0) break;
        if (lVar7 == 1) goto LAB_00102d9e;
        lVar7 = lVar7 + 1 >> 1;
      }
      if (lVar7 == lVar14) {
        puVar5 = puVar10 + lVar7 * 3;
        goto LAB_00102be9;
      }
      std::
      __stable_sort_adaptive_resize<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,(anonymous_namespace)::EdgePos*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
                (puVar10,puVar9,pvVar4);
    }
    operator_delete(pvVar4,uVar13);
    puVar5 = *(undefined8 **)(param_1 + 8);
  }
  if (puVar9 == puVar5) goto LAB_00102cce;
  lVar14 = (((long)puVar5 - (long)puVar9 >> 3) * -0x5555555555555555 + 1) / 2;
  lVar7 = lVar14;
  if ((long)puVar5 - (long)puVar9 < 1) {
LAB_00102dc4:
    uVar13 = 0;
    pvVar4 = (void *)0x0;
    puVar10 = puVar9;
    if (lVar14 == 0) {
LAB_00102caa:
      std::
      __stable_sort_adaptive<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,(anonymous_namespace)::EdgePos*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
                (puVar9,puVar10,puVar5,pvVar4);
    }
    else {
      std::
      __inplace_stable_sort<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
                (puVar9,puVar5);
      pvVar4 = (void *)0x0;
    }
  }
  else {
    while( true ) {
      uVar13 = lVar7 * 0x18;
      pvVar4 = operator_new(uVar13,(nothrow_t *)&std::nothrow);
      if (pvVar4 != (void *)0x0) break;
      if (lVar7 == 1) goto LAB_00102dc4;
      lVar7 = lVar7 + 1 >> 1;
    }
    if (lVar14 == lVar7) {
      puVar10 = puVar9 + lVar7 * 3;
      goto LAB_00102caa;
    }
    std::
    __stable_sort_adaptive_resize<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EdgePos*,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,(anonymous_namespace)::EdgePos*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::PairUp(std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>&)::_lambda((anonymous_namespace)::EdgePos,(anonymous_namespace)::EdgePos)_1_>>
              (puVar9,puVar5,pvVar4);
  }
  operator_delete(pvVar4,uVar13);
LAB_00102cce:
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  if (uVar11 != 0) {
    puVar10 = (undefined8 *)0x0;
    puVar5 = (undefined8 *)0x0;
    lVar7 = 0;
    lVar14 = uVar11 * 0x18;
    while( true ) {
      local_48 = 0xffffffff;
      local_50 = CONCAT44(*(undefined4 *)(*(long *)param_1 + lVar14),
                          *(undefined4 *)(*(long *)param_1 + lVar7 * 0x18));
      if (puVar10 == puVar5) {
        std::vector<manifold::Halfedge,std::allocator<manifold::Halfedge>>::
        _M_realloc_insert<manifold::Halfedge>
                  ((vector<manifold::Halfedge,std::allocator<manifold::Halfedge>> *)this,puVar10,
                   &local_50);
      }
      else {
        *(undefined4 *)(puVar5 + 1) = 0xffffffff;
        *puVar5 = local_50;
        *(long *)(this + 8) = (long)puVar5 + 0xc;
      }
      if (uVar11 == lVar7 + 1U) break;
      lVar14 = lVar14 + 0x18;
      lVar7 = lVar7 + 1;
      puVar5 = *(undefined8 **)(this + 8);
      puVar10 = *(undefined8 **)(this + 0x10);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* (anonymous namespace)::AppendPartialEdges(manifold::Manifold::Impl&, manifold::Vec<char>&,
   manifold::Vec<int>&, std::map<int, std::vector<(anonymous namespace)::EdgePos,
   std::allocator<(anonymous namespace)::EdgePos> >, std::less<int>, std::allocator<std::pair<int
   const, std::vector<(anonymous namespace)::EdgePos, std::allocator<(anonymous namespace)::EdgePos>
   > > > >&, manifold::Vec<manifold::TriRef>&, manifold::Manifold::Impl const&, manifold::Vec<int>
   const&, manifold::Vec<int> const&, int const*, bool) */

void (anonymous_namespace)::AppendPartialEdges
               (Impl *param_1,Vec *param_2,Vec *param_3,map *param_4,Vec *param_5,Impl *param_6,
               Vec *param_7,Vec *param_8,int *param_9,bool param_10)

{
  vector *pvVar1;
  int *piVar2;
  double *pdVar3;
  double *pdVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  map *pmVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  int *piVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long in_FS_OFFSET;
  double dVar22;
  double dVar23;
  double dVar24;
  int local_78;
  undefined4 uStack_74;
  double dStack_70;
  byte local_68;
  undefined7 uStack_67;
  undefined8 *local_58;
  undefined8 *local_50;
  long local_48;
  long local_40;
  
  pmVar10 = *(map **)(param_4 + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 + 8 != pmVar10) {
    do {
      iVar7 = *(int *)((_Rb_tree_node_base *)pmVar10 + 0x20);
      pvVar1 = (vector *)((_Rb_tree_node_base *)pmVar10 + 0x28);
      piVar2 = (int *)(*(long *)(param_6 + 0x60) + (long)iVar7 * 0xc);
      *(undefined1 *)(*(long *)param_2 + (long)iVar7) = 0;
      *(undefined1 *)(*(long *)param_2 + (long)piVar2[2]) = 0;
      lVar9 = (long)*piVar2;
      lVar19 = (long)piVar2[1];
      pdVar3 = (double *)(*(long *)(param_6 + 0x48) + lVar9 * 0x18);
      pdVar4 = (double *)(*(long *)(param_6 + 0x48) + lVar19 * 0x18);
      piVar18 = *(int **)((_Rb_tree_node_base *)pmVar10 + 0x30);
      dVar22 = *pdVar4 - *pdVar3;
      dVar24 = pdVar4[1] - pdVar3[1];
      dVar23 = pdVar4[2] - pdVar3[2];
      lVar12 = *(long *)(param_1 + 0x48);
      for (piVar14 = *(int **)((_Rb_tree_node_base *)pmVar10 + 0x28); piVar14 != piVar18;
          piVar14 = piVar14 + 6) {
        pdVar3 = (double *)(lVar12 + (long)*piVar14 * 0x18);
        *(double *)(piVar14 + 2) = *pdVar3 * dVar22 + 0.0 + pdVar3[1] * dVar24 + pdVar3[2] * dVar23;
      }
      lVar20 = *(long *)param_8;
      lVar21 = *(long *)param_7;
      iVar16 = *(int *)(lVar20 + lVar9 * 4);
      iVar11 = *(int *)(lVar21 + lVar9 * 4);
      pdVar3 = (double *)(lVar12 + (long)iVar16 * 0x18);
      local_68 = 0 < iVar11;
      iVar8 = -iVar11;
      if (0 < iVar11) {
        iVar8 = iVar11;
      }
      dStack_70 = *pdVar3 * dVar22 + 0.0 + pdVar3[1] * dVar24 + pdVar3[2] * dVar23;
      if (iVar11 != 0) {
        iVar11 = iVar16 + 1;
        local_78 = iVar16;
        while( true ) {
          iVar17 = iVar11;
          if (*(int **)((_Rb_tree_node_base *)pmVar10 + 0x38) == piVar18) {
            std::
            vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>::
            _M_realloc_insert<(anonymous_namespace)::EdgePos>
                      ((vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>
                        *)pvVar1,piVar18,&local_78);
          }
          else {
            *(ulong *)piVar18 = CONCAT44(uStack_74,local_78);
            *(double *)(piVar18 + 2) = dStack_70;
            *(ulong *)(piVar18 + 4) = CONCAT71(uStack_67,local_68);
            *(int **)((_Rb_tree_node_base *)pmVar10 + 0x30) = piVar18 + 6;
          }
          if (iVar17 + 1 == iVar16 + 1 + iVar8) break;
          piVar18 = *(int **)((_Rb_tree_node_base *)pmVar10 + 0x30);
          iVar11 = iVar17 + 1;
          local_78 = iVar17;
        }
        lVar20 = *(long *)param_8;
        lVar21 = *(long *)param_7;
        lVar12 = *(long *)(param_1 + 0x48);
      }
      local_78 = *(int *)(lVar20 + lVar19 * 4);
      iVar16 = *(int *)(lVar21 + lVar19 * 4);
      pdVar3 = (double *)(lVar12 + (long)local_78 * 0x18);
      local_68 = (byte)((uint)iVar16 >> 0x1f);
      iVar11 = -iVar16;
      if (0 < iVar16) {
        iVar11 = iVar16;
      }
      iVar11 = iVar11 + local_78 + 1;
      dStack_70 = dVar22 * *pdVar3 + 0.0 + dVar24 * pdVar3[1] + dVar23 * pdVar3[2];
      iVar8 = local_78 + 1;
      if (iVar16 != 0) {
        do {
          while (iVar16 = iVar8, puVar13 = *(undefined8 **)((_Rb_tree_node_base *)pmVar10 + 0x30),
                puVar13 != *(undefined8 **)((_Rb_tree_node_base *)pmVar10 + 0x38)) {
            *puVar13 = CONCAT44(uStack_74,local_78);
            puVar13[1] = dStack_70;
            puVar13[2] = CONCAT71(uStack_67,local_68);
            *(undefined8 **)((_Rb_tree_node_base *)pmVar10 + 0x30) = puVar13 + 3;
            iVar8 = iVar16 + 1;
            local_78 = iVar16;
            if (iVar16 + 1 == iVar11) goto LAB_001031ed;
          }
          std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>
          ::_M_realloc_insert<(anonymous_namespace)::EdgePos>
                    ((vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>
                      *)pvVar1,puVar13,&local_78);
          iVar8 = iVar16 + 1;
          local_78 = iVar16;
        } while (iVar16 + 1 != iVar11);
      }
LAB_001031ed:
      PairUp((_anonymous_namespace_ *)&local_58,pvVar1);
      iVar16 = piVar2[2];
      if (local_50 != local_58) {
        piVar2 = (int *)(*(long *)param_3 + (long)param_9[iVar16 / 3] * 4);
        piVar18 = (int *)(*(long *)param_3 + (long)param_9[iVar7 / 3] * 4);
        lVar12 = *(long *)(param_1 + 0x60);
        lVar9 = *(long *)param_5;
        puVar13 = local_58;
        do {
          iVar11 = *piVar18;
          uVar6 = *puVar13;
          puVar13 = (undefined8 *)((long)puVar13 + 0xc);
          *piVar18 = iVar11 + 1;
          iVar8 = *piVar2;
          *piVar2 = iVar8 + 1;
          puVar15 = (uint *)((long)iVar11 * 0x10 + lVar9);
          puVar5 = (undefined8 *)(lVar12 + (long)iVar11 * 0xc);
          *(int *)(puVar5 + 1) = iVar8;
          *puVar5 = uVar6;
          *puVar15 = (uint)!param_10;
          puVar15[1] = 0xffffffff;
          puVar15[2] = iVar7 / 3;
          puVar15[3] = 0;
          puVar15 = (uint *)((long)iVar8 * 0x10 + lVar9);
          puVar5 = (undefined8 *)(lVar12 + (long)iVar8 * 0xc);
          *(int *)(puVar5 + 1) = iVar11;
          *puVar5 = CONCAT44((int)uVar6,(int)((ulong)uVar6 >> 0x20));
          *puVar15 = (uint)!param_10;
          puVar15[1] = 0xffffffff;
          puVar15[2] = iVar16 / 3;
          puVar15[3] = 0;
        } while (local_50 != puVar13);
      }
      if (local_58 != (undefined8 *)0x0) {
        operator_delete(local_58,local_48 - (long)local_58);
      }
      pmVar10 = (map *)std::_Rb_tree_increment((_Rb_tree_node_base *)pmVar10);
    } while (param_4 + 8 != pmVar10);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* (anonymous namespace)::SizeOutput(manifold::Manifold::Impl&, manifold::Manifold::Impl const&,
   manifold::Manifold::Impl const&, manifold::Vec<int> const&, manifold::Vec<int> const&,
   manifold::Vec<int> const&, manifold::Vec<int> const&, manifold::SparseIndices const&,
   manifold::SparseIndices const&, bool) */

_anonymous_namespace_ * __thiscall
(anonymous_namespace)::SizeOutput
          (_anonymous_namespace_ *this,Impl *param_1,Impl *param_2,Impl *param_3,Vec *param_4,
          Vec *param_5,Vec *param_6,Vec *param_7,SparseIndices *param_8,SparseIndices *param_9,
          bool param_10)

{
  vec *pvVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  size_t sVar9;
  vec *pvVar10;
  int *piVar11;
  undefined4 *puVar12;
  void *pvVar13;
  int *__ptr;
  long lVar14;
  undefined1 (*pauVar15) [16];
  ulong *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined4 *__dest;
  long lVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  vec *pvVar26;
  int iVar27;
  ulong *puVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  size_t sVar32;
  ulong *puVar33;
  long in_FS_OFFSET;
  bool bVar34;
  double dVar35;
  size_t local_d8;
  ulong *local_c0;
  long local_88;
  ulong local_78;
  ulong local_70;
  int *local_68;
  ulong local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  uVar31 = *(ulong *)(param_2 + 0x68);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar29 = *(ulong *)(param_3 + 0x68);
  uVar23 = uVar31 / 3;
  uVar24 = uVar29 / 3;
  lVar5 = uVar23 + uVar24;
  if (lVar5 == 0) {
    __ptr = (int *)0x0;
    sVar32 = 0;
  }
  else {
    sVar32 = lVar5 * 4;
    __ptr = (int *)calloc(sVar32,1);
  }
  local_58 = *(undefined8 *)param_4;
  piVar11 = __ptr + uVar23;
  uVar6 = *(ulong *)(param_2 + 0x60);
  dVar35 = _LC9;
  local_78 = uVar6;
  local_68 = __ptr;
  if ((double)uVar31 < _LC9) {
    manifold::
    for_each<manifold::CountingIterator<unsigned_long>,(anonymous_namespace)::CountVerts<false>>
              (0,uVar31,&local_78);
    local_78 = *(ulong *)(param_3 + 0x60);
    local_58 = *(undefined8 *)param_5;
    local_68 = piVar11;
    manifold::
    for_each<manifold::CountingIterator<unsigned_long>,(anonymous_namespace)::CountVerts<false>>
              (0,uVar29,&local_78);
  }
  else {
    local_50 = *(undefined8 *)(param_4 + 8);
    local_70 = uVar31;
    local_60 = uVar23;
    manifold::
    for_each<manifold::CountingIterator<unsigned_long>,(anonymous_namespace)::CountVerts<true>>
              (0,uVar31,&local_78);
    local_78 = *(ulong *)(param_3 + 0x60);
    local_58 = *(undefined8 *)param_5;
    local_70 = *(ulong *)(param_3 + 0x68);
    local_50 = *(undefined8 *)(param_5 + 8);
    local_68 = piVar11;
    local_60 = uVar24;
    manifold::
    for_each<manifold::CountingIterator<unsigned_long>,(anonymous_namespace)::CountVerts<true>>
              (0,local_70,&local_78);
    uVar6 = *(ulong *)(param_2 + 0x60);
  }
  local_c0 = &local_78;
  uVar31 = *(ulong *)(param_6 + 8);
  lVar5 = *(long *)param_6;
  if ((double)uVar31 < dVar35) {
    if (uVar31 != 0) {
      lVar25 = *(long *)param_8;
      uVar29 = 0;
      do {
        lVar30 = (long)(int)uVar29;
        iVar22 = *(int *)(lVar5 + lVar30 * 4);
        iVar2 = *(int *)(lVar25 + 4 + lVar30 * 8);
        iVar27 = -iVar22;
        if (0 < iVar22) {
          iVar27 = iVar22;
        }
        piVar11[*(int *)(lVar25 + lVar30 * 8)] = piVar11[*(int *)(lVar25 + lVar30 * 8)] + iVar27;
        uVar29 = uVar29 + 1;
        puVar16 = (ulong *)(uVar6 + (long)iVar2 * 0xc);
        local_78 = *puVar16;
        iVar22 = (int)puVar16[1];
        local_70 = CONCAT44(local_70._4_4_,iVar22);
        __ptr[iVar2 / 3] = __ptr[iVar2 / 3] + iVar27;
        __ptr[iVar22 / 3] = __ptr[iVar22 / 3] + iVar27;
      } while (uVar31 != uVar29);
    }
    lVar5 = *(long *)param_7;
    lVar25 = *(long *)(param_7 + 8);
    lVar30 = *(long *)(param_3 + 0x60);
    if (lVar25 != 0) {
      lVar20 = *(long *)param_9;
      lVar7 = 0;
      do {
        lVar14 = (long)(int)lVar7;
        iVar22 = *(int *)(lVar5 + lVar14 * 4);
        iVar2 = *(int *)(lVar20 + lVar14 * 8);
        iVar27 = -iVar22;
        if (0 < iVar22) {
          iVar27 = iVar22;
        }
        __ptr[*(int *)(lVar20 + 4 + lVar14 * 8)] = __ptr[*(int *)(lVar20 + 4 + lVar14 * 8)] + iVar27
        ;
        lVar7 = lVar7 + 1;
        puVar16 = (ulong *)(lVar30 + (long)iVar2 * 0xc);
        local_78 = *puVar16;
        iVar22 = (int)puVar16[1];
        local_70 = CONCAT44(local_70._4_4_,iVar22);
        piVar11[iVar2 / 3] = piVar11[iVar2 / 3] + iVar27;
        piVar11[iVar22 / 3] = piVar11[iVar22 / 3] + iVar27;
      } while (lVar25 != lVar7);
    }
  }
  else {
    uVar29 = 0;
    if (uVar31 != 0) {
      do {
        lVar25 = (long)(int)uVar29;
        iVar22 = *(int *)(lVar5 + lVar25 * 4);
        iVar2 = *(int *)(*(long *)param_8 + 4 + lVar25 * 8);
        iVar27 = -iVar22;
        if (0 < iVar22) {
          iVar27 = iVar22;
        }
        LOCK();
        piVar11[*(int *)(*(long *)param_8 + lVar25 * 8)] =
             piVar11[*(int *)(*(long *)param_8 + lVar25 * 8)] + iVar27;
        UNLOCK();
        puVar16 = (ulong *)(uVar6 + (long)iVar2 * 0xc);
        local_78 = *puVar16;
        iVar22 = (int)puVar16[1];
        local_70 = CONCAT44(local_70._4_4_,iVar22);
        LOCK();
        __ptr[iVar2 / 3] = __ptr[iVar2 / 3] + iVar27;
        UNLOCK();
        LOCK();
        __ptr[iVar22 / 3] = __ptr[iVar22 / 3] + iVar27;
        UNLOCK();
        uVar29 = uVar29 + 1;
      } while (uVar31 != uVar29);
    }
    lVar20 = 0;
    lVar5 = *(long *)param_7;
    lVar25 = *(long *)(param_7 + 8);
    lVar30 = *(long *)(param_3 + 0x60);
    if (lVar25 != 0) {
      do {
        lVar7 = (long)(int)lVar20;
        iVar22 = *(int *)(lVar5 + lVar7 * 4);
        iVar2 = *(int *)(*(long *)param_9 + lVar7 * 8);
        iVar27 = -iVar22;
        if (0 < iVar22) {
          iVar27 = iVar22;
        }
        LOCK();
        __ptr[*(int *)(*(long *)param_9 + 4 + lVar7 * 8)] =
             __ptr[*(int *)(*(long *)param_9 + 4 + lVar7 * 8)] + iVar27;
        UNLOCK();
        puVar16 = (ulong *)(lVar30 + (long)iVar2 * 0xc);
        local_78 = *puVar16;
        iVar22 = (int)puVar16[1];
        local_70 = CONCAT44(local_70._4_4_,iVar22);
        LOCK();
        piVar11[iVar2 / 3] = piVar11[iVar2 / 3] + iVar27;
        UNLOCK();
        LOCK();
        piVar11[iVar22 / 3] = piVar11[iVar22 / 3] + iVar27;
        UNLOCK();
        lVar20 = lVar20 + 1;
      } while (lVar25 != lVar20);
    }
  }
  lVar5 = *(ulong *)(param_3 + 0x68) / 3 + *(ulong *)(param_2 + 0x68) / 3;
  puVar8 = (undefined4 *)calloc((lVar5 + 1U) * 4,1);
  piVar11 = (int *)((long)__ptr + sVar32);
  if (piVar11 != __ptr) {
    uVar21 = (uint)(0 < *__ptr);
    puVar8[1] = (uint)(0 < *__ptr);
    if (piVar11 != __ptr + 1) {
      sVar9 = 8;
      do {
        uVar21 = uVar21 + (0 < *(int *)((long)__ptr + (sVar9 - 4)));
        *(uint *)((long)puVar8 + sVar9) = uVar21;
        bVar34 = sVar32 != sVar9;
        sVar9 = sVar9 + 4;
      } while (bVar34);
    }
  }
  uVar31 = (ulong)(int)puVar8[lVar5];
  __dest = puVar8;
  if ((ulong)(lVar5 * 2) < lVar5 + 1U) {
    __dest = (undefined4 *)0x0;
    if (lVar5 == 0) {
LAB_00103f4f:
      if (puVar8 == (undefined4 *)0x0) goto LAB_00103703;
    }
    else {
      sVar32 = lVar5 * 4;
      __dest = (undefined4 *)malloc(sVar32);
      if ((long)sVar32 < 5) {
        if (sVar32 != 4) goto LAB_00103f4f;
        *__dest = *puVar8;
      }
      else {
        memcpy(__dest,puVar8,sVar32);
      }
    }
    free(puVar8);
  }
LAB_00103703:
  uVar29 = *(ulong *)(param_1 + 0x98);
  uVar23 = uVar31 * 2;
  uVar24 = uVar29;
  if (*(ulong *)(param_1 + 0xa0) < uVar31) {
    puVar19 = (undefined8 *)malloc(uVar31 * 0x18);
    puVar18 = *(undefined8 **)(param_1 + 0x90);
    if (uVar29 == 0) {
      if (puVar18 == (undefined8 *)0x0) {
        *(undefined8 **)(param_1 + 0x90) = puVar19;
        uVar24 = 0;
        *(ulong *)(param_1 + 0xa0) = uVar31;
        goto LAB_00103d4a;
      }
LAB_00103fa1:
      free(puVar18);
      uVar24 = *(ulong *)(param_1 + 0x98);
    }
    else {
      sVar32 = uVar29 * 0x18;
      if (0x18 < (long)sVar32) {
        puVar19 = (undefined8 *)memmove(puVar19,puVar18,sVar32);
        goto LAB_00103fa1;
      }
      if (sVar32 == 0x18) {
        uVar3 = puVar18[1];
        *puVar19 = *puVar18;
        puVar19[1] = uVar3;
        puVar19[2] = puVar18[2];
        goto LAB_00103fa1;
      }
      if (puVar18 != (undefined8 *)0x0) goto LAB_00103fa1;
    }
    *(undefined8 **)(param_1 + 0x90) = puVar19;
    *(ulong *)(param_1 + 0xa0) = uVar31;
    if (uVar24 < uVar31) goto LAB_00103d4a;
LAB_00103fdb:
    *(ulong *)(param_1 + 0x98) = uVar31;
    if (uVar29 <= uVar23) goto LAB_00103d8d;
LAB_00103feb:
    sVar32 = uVar31 * 0x18;
    puVar18 = (undefined8 *)malloc(sVar32);
    puVar19 = *(undefined8 **)(param_1 + 0x90);
    if ((long)sVar32 < 0x19) {
      if (sVar32 != 0x18) goto LAB_00103743;
      uVar3 = puVar19[1];
      *puVar18 = *puVar19;
      puVar18[1] = uVar3;
      puVar18[2] = puVar19[2];
    }
    else {
      memmove(puVar18,puVar19,sVar32);
    }
LAB_00104015:
    free(puVar19);
LAB_0010374c:
    *(undefined8 **)(param_1 + 0x90) = puVar18;
    uVar31 = *(ulong *)(param_1 + 0x98);
    *(ulong *)(param_1 + 0xa0) = uVar31;
LAB_00103761:
    puVar16 = (ulong *)0x0;
    if (uVar31 != 0) goto LAB_00103d8d;
  }
  else {
    if (uVar31 <= uVar29) {
      *(ulong *)(param_1 + 0x98) = uVar31;
      if (uVar23 < uVar29) {
        if (uVar31 != 0) goto LAB_00103feb;
        puVar19 = *(undefined8 **)(param_1 + 0x90);
        puVar18 = (undefined8 *)0x0;
LAB_00103743:
        if (puVar19 != (undefined8 *)0x0) goto LAB_00104015;
        goto LAB_0010374c;
      }
      goto LAB_00103761;
    }
    puVar19 = *(undefined8 **)(param_1 + 0x90);
LAB_00103d4a:
    pauVar15 = (undefined1 (*) [16])(puVar19 + uVar24 * 3);
    if ((undefined1 (*) [16])(puVar19 + uVar31 * 3) == pauVar15) goto LAB_00103fdb;
    do {
      *(undefined8 *)pauVar15[1] = 0;
      pauVar4 = pauVar15 + 1;
      *pauVar15 = (undefined1  [16])0x0;
      pauVar15 = (undefined1 (*) [16])(*pauVar4 + 8);
    } while ((undefined1 (*) [16])(puVar19 + uVar31 * 3) != (undefined1 (*) [16])(*pauVar4 + 8));
    *(ulong *)(param_1 + 0x98) = uVar31;
    if (uVar23 < uVar29) goto LAB_00103feb;
LAB_00103d8d:
    puVar16 = (ulong *)malloc(uVar31 * 8);
  }
  uVar31 = *(ulong *)(param_2 + 0x98);
  puVar33 = puVar16;
  if (uVar31 == 0) {
    local_88 = 0;
    lVar25 = 0;
  }
  else {
    uVar29 = 0;
    do {
      if (0 < __ptr[uVar29]) {
        *puVar33 = uVar29;
        puVar33 = puVar33 + 1;
      }
      uVar29 = uVar29 + 1;
    } while (uVar31 != uVar29);
    lVar25 = (long)puVar33 - (long)puVar16 >> 3;
    local_88 = lVar25 * 0x18;
  }
  pvVar10 = *(vec **)(param_1 + 0x90);
  manifold::gather<unsigned_long*,linalg::vec<double,3>const*,linalg::vec<double,3>*>
            (puVar16,puVar33,*(vec **)(param_2 + 0x90),pvVar10);
  uVar29 = *(ulong *)(param_3 + 0x98);
  puVar28 = puVar33;
  if (uVar29 == 0) {
    pvVar26 = *(vec **)(param_3 + 0x90);
    if (!param_10) goto LAB_00103ae8;
  }
  else {
    uVar23 = 0;
    do {
      if (0 < __ptr[uVar31 + uVar23]) {
        *puVar28 = uVar23;
        puVar28 = puVar28 + 1;
      }
      uVar24 = _LC12;
      uVar23 = uVar23 + 1;
    } while (uVar29 != uVar23);
    pvVar26 = *(vec **)(param_3 + 0x90);
    if (param_10) {
      if ((long)puVar28 - (long)puVar33 != 0) {
        puVar28 = (ulong *)(((long)puVar28 - (long)puVar33) + (long)puVar33);
        pvVar10 = pvVar10 + lVar25 * 0x18 + 0x10;
        do {
          uVar31 = *puVar33;
          puVar33 = puVar33 + 1;
          pvVar1 = pvVar26 + uVar31 * 0x18;
          uVar31 = *(ulong *)(pvVar1 + 0x10);
          uVar29 = *(ulong *)(pvVar1 + 8);
          *(ulong *)(pvVar10 + -0x10) = *(ulong *)pvVar1 ^ uVar24;
          *(ulong *)(pvVar10 + -8) = uVar29 ^ uVar24;
          *(ulong *)pvVar10 = uVar31 ^ uVar24;
          pvVar10 = pvVar10 + 0x18;
        } while (puVar33 != puVar28);
      }
    }
    else {
LAB_00103ae8:
      manifold::gather<unsigned_long*,linalg::vec<double,3>const*,linalg::vec<double,3>*>
                (puVar33,puVar28,pvVar26,pvVar10 + local_88);
    }
  }
  local_78 = local_78 & 0xffffffff00000000;
  piVar11 = std::__remove_if<int*,__gnu_cxx::__ops::_Iter_equals_val<int_const>>
                      (__ptr,piVar11,local_c0);
  lVar30 = (long)piVar11 - (long)__ptr;
  lVar25 = (lVar30 >> 2) + 1;
  if (lVar25 == 0) {
    local_d8 = 0;
    lVar30 = -4;
    puVar8 = (undefined4 *)0x0;
  }
  else {
    local_d8 = lVar30 + 4;
    puVar8 = (undefined4 *)calloc(local_d8,1);
  }
  if (piVar11 != __ptr) {
    iVar22 = *__ptr;
    puVar8[1] = iVar22;
    if (piVar11 != __ptr + 1) {
      lVar20 = 8;
      do {
        iVar22 = iVar22 + *(int *)((long)__ptr + lVar20 + -4);
        *(int *)((long)puVar8 + lVar20) = iVar22;
        lVar20 = lVar20 + 4;
      } while (lVar20 != (long)piVar11 + (4 - (long)__ptr));
    }
  }
  uVar23 = (ulong)*(int *)((long)puVar8 + lVar30);
  uVar31 = *(ulong *)(param_1 + 0x68);
  uVar29 = uVar31;
  if (*(ulong *)(param_1 + 0x70) < uVar23) {
    puVar19 = (undefined8 *)malloc(uVar23 * 0xc);
    puVar18 = *(undefined8 **)(param_1 + 0x60);
    if (uVar31 == 0) {
      if (puVar18 == (undefined8 *)0x0) {
        *(undefined8 **)(param_1 + 0x60) = puVar19;
        uVar29 = 0;
        *(ulong *)(param_1 + 0x70) = uVar23;
        goto LAB_00103db7;
      }
LAB_00104077:
      free(puVar18);
      uVar29 = *(ulong *)(param_1 + 0x68);
    }
    else {
      sVar32 = uVar31 * 0xc;
      if (0xc < (long)sVar32) {
        puVar19 = (undefined8 *)memmove(puVar19,puVar18,sVar32);
        goto LAB_00104077;
      }
      if (sVar32 == 0xc) {
        *puVar19 = *puVar18;
        *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(puVar18 + 1);
        goto LAB_00104077;
      }
      if (puVar18 != (undefined8 *)0x0) goto LAB_00104077;
    }
    *(undefined8 **)(param_1 + 0x60) = puVar19;
    *(ulong *)(param_1 + 0x70) = uVar23;
    if (uVar29 < uVar23) goto LAB_00103db7;
LAB_001040c6:
    *(ulong *)(param_1 + 0x68) = uVar23;
joined_r0x001040cd:
    if (uVar23 * 2 < uVar31) {
LAB_00103dfc:
      sVar32 = uVar23 * 0xc;
      puVar18 = (undefined8 *)malloc(sVar32);
      puVar19 = *(undefined8 **)(param_1 + 0x60);
      if ((long)sVar32 < 0xd) {
        if (sVar32 != 0xc) goto LAB_00103968;
        *puVar18 = *puVar19;
        *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(puVar19 + 1);
      }
      else {
        puVar18 = (undefined8 *)memmove(puVar18,puVar19,sVar32);
      }
LAB_00103e37:
      free(puVar19);
LAB_00103971:
      *(undefined8 **)(param_1 + 0x60) = puVar18;
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x68);
    }
  }
  else {
    if (uVar31 < uVar23) {
      puVar19 = *(undefined8 **)(param_1 + 0x60);
LAB_00103db7:
      puVar18 = (undefined8 *)((long)puVar19 + uVar23 * 0xc);
      puVar19 = (undefined8 *)((long)puVar19 + uVar29 * 0xc);
      if (puVar18 == puVar19) goto LAB_001040c6;
      do {
        *puVar19 = 0;
        puVar17 = (undefined8 *)((long)puVar19 + 0xc);
        *(undefined4 *)(puVar19 + 1) = 0;
        puVar19 = puVar17;
      } while (puVar18 != puVar17);
      *(ulong *)(param_1 + 0x68) = uVar23;
      goto joined_r0x001040cd;
    }
    *(ulong *)(param_1 + 0x68) = uVar23;
    if (uVar23 * 2 < uVar31) {
      if (uVar23 != 0) goto LAB_00103dfc;
      puVar19 = *(undefined8 **)(param_1 + 0x60);
      puVar18 = (undefined8 *)0x0;
LAB_00103968:
      if (puVar19 != (undefined8 *)0x0) goto LAB_00103e37;
      goto LAB_00103971;
    }
  }
  puVar12 = (undefined4 *)0x0;
  *(undefined8 *)this = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (lVar5 != 0) {
    sVar32 = lVar5 * 4;
    puVar12 = (undefined4 *)malloc(sVar32);
    if ((long)sVar32 < 5) {
      if (sVar32 == 4) {
        *puVar12 = *__dest;
      }
    }
    else {
      puVar12 = (undefined4 *)memcpy(puVar12,__dest,sVar32);
    }
  }
  *(undefined4 **)this = puVar12;
  *(undefined8 *)(this + 0x18) = 0;
  *(long *)(this + 8) = lVar5;
  *(long *)(this + 0x10) = lVar5;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  puVar12 = (undefined4 *)0x0;
  if (lVar25 == 0) {
LAB_001039c8:
    *(undefined4 **)(this + 0x18) = puVar12;
    *(long *)(this + 0x20) = lVar25;
    *(long *)(this + 0x28) = lVar25;
    if (puVar8 == (undefined4 *)0x0) goto LAB_001039e3;
  }
  else {
    puVar12 = (undefined4 *)malloc(local_d8);
    if ((long)local_d8 < 5) {
      if (local_d8 != 4) goto LAB_001039c8;
      *puVar12 = *puVar8;
      *(undefined4 **)(this + 0x18) = puVar12;
      *(long *)(this + 0x20) = lVar25;
      *(long *)(this + 0x28) = lVar25;
    }
    else {
      pvVar13 = memcpy(puVar12,puVar8,local_d8);
      *(void **)(this + 0x18) = pvVar13;
      *(long *)(this + 0x20) = lVar25;
      *(long *)(this + 0x28) = lVar25;
    }
  }
  free(puVar8);
LAB_001039e3:
  if (puVar16 != (ulong *)0x0) {
    free(puVar16);
  }
  if (__dest != (undefined4 *)0x0) {
    free(__dest);
  }
  if (__ptr != (int *)0x0) {
    free(__ptr);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Boolean3::Result(manifold::OpType) const */

Impl * manifold::Boolean3::Result(Impl *param_1,long *param_2,int param_3)

{
  double *pdVar1;
  vector<std::pair<linalg::vec<int,3>,int>,std::allocator<std::pair<linalg::vec<int,3>,int>>>
  *pvVar2;
  size_t sVar3;
  size_t __size;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  Impl *pIVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  void *pvVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 (*pauVar27) [16];
  int iVar28;
  size_t sVar29;
  size_t sVar30;
  undefined1 (*pauVar31) [16];
  undefined1 (*pauVar32) [16];
  ulong uVar33;
  int *piVar34;
  _Rb_tree_node_base *p_Var35;
  uint *puVar36;
  long lVar37;
  int *piVar38;
  undefined8 *puVar39;
  _Rb_tree_node_base *p_Var40;
  _Rb_tree_node_base *p_Var41;
  long lVar42;
  undefined1 *puVar43;
  ulong uVar44;
  undefined8 *puVar45;
  int *piVar46;
  size_t sVar47;
  char cVar48;
  int iVar49;
  long lVar50;
  int *piVar51;
  undefined8 *puVar52;
  long lVar53;
  uint *puVar54;
  _anonymous_namespace_ *p_Var55;
  int iVar56;
  ulong uVar57;
  uint uVar58;
  uint uVar59;
  _Rb_tree_node_base *p_Var60;
  uint uVar61;
  ulong uVar62;
  int iVar63;
  int iVar64;
  uint uVar65;
  uint uVar66;
  int iVar67;
  long lVar68;
  _Rb_tree_node_base *p_Var69;
  int iVar70;
  int iVar71;
  Impl *pIVar72;
  long in_FS_OFFSET;
  bool bVar73;
  byte bVar74;
  undefined8 uVar75;
  double dVar76;
  undefined8 uVar77;
  double dVar78;
  double dVar79;
  double dVar80;
  double dVar81;
  double dVar82;
  undefined1 auVar83 [16];
  void *local_5d8;
  void *local_5c8;
  long *local_5c0;
  void *local_5b8;
  undefined1 (*local_5a8) [16];
  undefined1 (*local_5a0) [16];
  void *local_598;
  void *local_588;
  uint local_580;
  uint local_578;
  uint local_560;
  undefined1 *local_538;
  undefined1 *local_530;
  int local_4cc;
  undefined1 (*local_4c8) [16];
  undefined1 local_4c0 [16];
  void *local_4a8;
  undefined1 local_4a0 [16];
  void *local_488;
  undefined1 local_480 [16];
  void *local_468;
  undefined1 local_460 [16];
  void *local_448;
  undefined1 local_440 [16];
  void *local_428;
  undefined1 local_420 [16];
  void *local_408;
  long local_400;
  long lStack_3f8;
  void *local_3e8;
  long local_3e0;
  long lStack_3d8;
  undefined4 *local_3c8;
  undefined1 local_3c0 [16];
  undefined4 *local_3a8;
  undefined1 local_3a0 [16];
  undefined1 *local_388;
  undefined1 local_380 [16];
  undefined1 *local_368;
  undefined1 local_360 [16];
  void *local_348;
  undefined1 local_340 [16];
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  map local_308 [8];
  undefined4 local_300 [2];
  _Rb_tree_node *local_2f8;
  undefined4 *local_2f0;
  undefined4 *local_2e8;
  undefined8 local_2e0;
  map local_2d8 [8];
  undefined4 local_2d0 [2];
  _Rb_tree_node *local_2c8;
  undefined4 *local_2c0;
  undefined4 *local_2b8;
  undefined8 local_2b0;
  map local_2a8 [8];
  undefined4 local_2a0 [2];
  _Rb_tree_node *local_298;
  _Rb_tree_node_base *local_290;
  _Rb_tree_node_base *local_288;
  undefined8 local_280;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined8 local_238;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined4 local_1e8;
  undefined1 (*local_1e0) [16];
  undefined1 local_1d8 [16];
  void *local_1c8;
  undefined1 local_1c0 [16];
  void *local_1b0;
  undefined1 local_1a8 [16];
  void *local_198;
  undefined1 local_190 [16];
  void *local_180;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 *local_160;
  undefined1 local_158 [16];
  _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
  local_148 [8];
  undefined4 local_140 [2];
  _Rb_tree_node_base *local_138;
  _Rb_tree_node_base *local_130;
  _Rb_tree_node_base *local_128;
  long local_120;
  int *local_118;
  undefined1 local_110 [16];
  undefined8 *local_100;
  undefined1 local_f8 [16];
  void *local_e8;
  undefined1 local_e0 [16];
  void *local_d0;
  undefined1 local_c8 [16];
  void *local_b8;
  undefined1 local_b0 [16];
  undefined8 local_98;
  undefined4 local_90;
  int local_8c;
  undefined8 local_88;
  undefined4 local_80;
  int local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  dVar82 = _LC16;
  uVar77 = _LC20;
  bVar74 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    pIVar72 = (Impl *)*param_2;
    iVar64 = 1;
    iVar70 = -1;
    if (*(int *)(pIVar72 + 0x40) != 0) goto LAB_00104404;
LAB_0010426b:
    pIVar10 = (Impl *)param_2[1];
    if (*(int *)(pIVar10 + 0x40) != 0) {
      local_1e0 = (undefined1 (*) [16])0x0;
      local_168 = _LC20;
      local_130 = (_Rb_tree_node_base *)local_140;
      local_228 = _LC16;
      dStack_220 = _LC16;
      local_218 = _LC16;
      dStack_210 = _LC13;
      local_1c8 = (void *)0x0;
      local_208 = _LC13;
      dStack_200 = _LC13;
      local_1b0 = (void *)0x0;
      local_198 = (void *)0x0;
      local_1f8 = _LC19;
      dStack_1f0 = _LC19;
      local_1d8 = (undefined1  [16])0x0;
      local_1c0 = (undefined1  [16])0x0;
      local_1a8 = (undefined1  [16])0x0;
      local_190 = (undefined1  [16])0x0;
      local_178 = (undefined1  [16])0x0;
      local_158 = (undefined1  [16])0x0;
      local_110 = (undefined1  [16])0x0;
      local_f8 = (undefined1  [16])0x0;
      local_180 = (void *)0x0;
      local_160 = (undefined8 *)0x0;
      local_140[0] = 0;
      local_138 = (_Rb_tree_node_base *)0x0;
      local_120 = 0;
      local_118 = (int *)0x0;
      local_100 = (undefined8 *)0x0;
      local_e8 = (void *)0x0;
      local_1e8 = *(undefined4 *)(pIVar10 + 0x40);
      local_e0 = (undefined1  [16])0x0;
      local_d0 = (void *)0x0;
      local_b8 = (void *)0x0;
      local_c8 = (undefined1  [16])0x0;
      local_b0 = (undefined1  [16])0x0;
      local_128 = local_130;
      Manifold::Impl::Impl(param_1,(Impl *)&local_228);
      if (local_b8 != (void *)0x0) {
        free(local_b8);
      }
      if (local_d0 != (void *)0x0) {
        free(local_d0);
      }
      if (local_e8 != (void *)0x0) {
        free(local_e8);
      }
      if (local_100 != (undefined8 *)0x0) {
        free(local_100);
      }
      p_Var35 = local_138;
      if (local_118 != (int *)0x0) {
        free(local_118);
        p_Var35 = local_138;
      }
      while (p_Var35 != (_Rb_tree_node_base *)0x0) {
        std::
        _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
        ::_M_erase(*(_Rb_tree_node **)(p_Var35 + 0x18));
        p_Var69 = *(_Rb_tree_node_base **)(p_Var35 + 0x10);
        operator_delete(p_Var35,0x98);
        p_Var35 = p_Var69;
      }
      goto LAB_00104627;
    }
    if (*(ulong *)(pIVar72 + 0x68) < 3) {
      if ((param_3 == 0) && (2 < *(ulong *)(pIVar10 + 0x68))) {
        Manifold::Impl::Impl(param_1,pIVar10);
        goto LAB_00104693;
      }
LAB_00104299:
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(double *)param_1 = dVar82;
      *(double *)(param_1 + 8) = dVar82;
      dVar79 = _LC13;
      dVar82 = _LC16;
      *(undefined8 *)(param_1 + 0xc0) = uVar77;
      *(double *)(param_1 + 0x10) = dVar82;
      *(double *)(param_1 + 0x18) = dVar79;
      dVar82 = _LC13;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(double *)(param_1 + 0x20) = dVar82;
      *(double *)(param_1 + 0x28) = dVar82;
      dVar82 = _LC19;
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(double *)(param_1 + 0x30) = dVar82;
      *(double *)(param_1 + 0x38) = dVar82;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined4 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(Impl **)(param_1 + 0xf8) = param_1 + 0xe8;
      *(Impl **)(param_1 + 0x100) = param_1 + 0xe8;
      *(undefined8 *)(param_1 + 0x108) = 0;
      *(undefined8 *)(param_1 + 0x110) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
      *(undefined1 (*) [16])(param_1 + 0x50) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(param_1 + 0x68) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(param_1 + 0x80) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(param_1 + 0x98) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(param_1 + 0xb0) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(param_1 + 0xd0) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(param_1 + 0x118) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(param_1 + 0x130) = (undefined1  [16])0x0;
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined8 *)(param_1 + 0x158) = 0;
      *(undefined8 *)(param_1 + 0x170) = 0;
      *(undefined1 (*) [16])(param_1 + 0x148) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(param_1 + 0x160) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(param_1 + 0x178) = (undefined1  [16])0x0;
      goto LAB_00104693;
    }
    if (*(ulong *)(pIVar10 + 0x68) < 3) {
      if (param_3 != 2) {
        Manifold::Impl::Impl(param_1,pIVar72);
        goto LAB_00104693;
      }
      goto LAB_00104299;
    }
    lVar42 = param_2[10];
    local_4c8 = (undefined1 (*) [16])0x0;
    sVar47 = lVar42 * 4;
    local_4c0 = (undefined1  [16])0x0;
    local_4c0._8_8_ = 0;
    if (lVar42 != 0) {
      local_4c8 = (undefined1 (*) [16])malloc(sVar47);
      local_4c0._8_8_ = lVar42;
    }
    local_5a8 = local_4c8;
    local_4a8 = (void *)0x0;
    local_4c0._0_8_ = lVar42;
    lVar37 = param_2[0xd];
    local_4a0 = (undefined1  [16])0x0;
    local_4a0._8_8_ = 0;
    sVar3 = lVar37 * 4;
    if (lVar37 != 0) {
      local_4a8 = malloc(sVar3);
      local_4a0._8_8_ = lVar37;
    }
    local_5d8 = local_4a8;
    local_488 = (void *)0x0;
    local_4a0._0_8_ = lVar37;
    lVar53 = param_2[0x10];
    local_480 = (undefined1  [16])0x0;
    local_480._8_8_ = 0;
    sVar30 = lVar53 * 4;
    if (lVar53 != 0) {
      local_488 = malloc(sVar30);
      local_480._8_8_ = lVar53;
    }
    local_5c8 = local_488;
    local_468 = (void *)0x0;
    local_480._0_8_ = lVar53;
    lVar11 = param_2[0x13];
    local_460 = (undefined1  [16])0x0;
    local_460._8_8_ = 0;
    __size = lVar11 * 4;
    if (lVar11 != 0) {
      local_468 = malloc(__size);
      local_460._8_8_ = lVar11;
    }
    local_5c0 = (long *)local_468;
    lVar12 = param_2[9];
    local_460._0_8_ = lVar11;
    sVar29 = 0;
    if (sVar47 != 0) {
      do {
        *(int *)(*local_5a8 + sVar29) = *(int *)(lVar12 + sVar29) * iVar70;
        sVar29 = sVar29 + 4;
      } while (sVar29 != sVar47);
    }
    lVar12 = param_2[0xc];
    sVar29 = 0;
    if (sVar3 != 0) {
      do {
        *(int *)((long)local_5d8 + sVar29) = *(int *)(lVar12 + sVar29) * iVar70;
        sVar29 = sVar29 + 4;
      } while (sVar3 != sVar29);
    }
    lVar12 = param_2[0xf];
    sVar29 = 0;
    if (sVar30 != 0) {
      do {
        *(uint *)((long)local_5c8 + sVar29) =
             *(int *)(lVar12 + sVar29) * iVar70 + (uint)(param_3 != 2);
        sVar29 = sVar29 + 4;
      } while (sVar30 != sVar29);
    }
    lVar12 = param_2[0x12];
    sVar29 = 0;
    if (__size != 0) {
      do {
        *(int *)((long)local_468 + sVar29) = *(int *)(lVar12 + sVar29) * iVar70 + iVar64;
        sVar29 = sVar29 + 4;
      } while (sVar29 != __size);
    }
    lVar12 = *(long *)(pIVar72 + 0x50);
    local_448 = (void *)0x0;
    local_440 = (undefined1  [16])0x0;
    local_440._8_8_ = 0;
    if (lVar12 != 0) {
      local_448 = malloc(lVar12 * 4);
      local_440._8_8_ = lVar12;
    }
    local_5a0 = (undefined1 (*) [16])local_448;
    iVar64 = 0;
    local_440._0_8_ = lVar12;
    sVar29 = 0;
    if (sVar30 != 0) {
      do {
        iVar70 = *(int *)((long)local_5c8 + sVar29);
        *(int *)((long)local_448 + sVar29) = iVar64;
        iVar28 = -iVar70;
        if (0 < iVar70) {
          iVar28 = iVar70;
        }
        sVar29 = sVar29 + 4;
        iVar64 = iVar64 + iVar28;
      } while (sVar30 != sVar29);
    }
    local_428 = (void *)0x0;
    local_420 = (undefined1  [16])0x0;
    local_420._8_8_ = 0;
    iVar64 = *(int *)((long)local_5c8 + (sVar30 - 4));
    iVar70 = -iVar64;
    if (0 < iVar64) {
      iVar70 = iVar64;
    }
    iVar64 = *(int *)((long)local_448 + (lVar12 * 4 - 4U));
    iVar28 = -iVar64;
    if (0 < iVar64) {
      iVar28 = iVar64;
    }
    iVar70 = iVar70 + iVar28;
    lVar68 = *(long *)(pIVar10 + 0x50);
    if (lVar68 != 0) {
      local_428 = malloc(lVar68 * 4);
      local_420._8_8_ = lVar68;
    }
    local_598 = local_428;
    local_420._0_8_ = lVar68;
    sVar30 = 0;
    if (__size != 0) {
      do {
        iVar64 = *(int *)((long)local_5c0 + sVar30);
        *(int *)((long)local_428 + sVar30) = iVar70;
        iVar28 = -iVar64;
        if (0 < iVar64) {
          iVar28 = iVar64;
        }
        sVar30 = sVar30 + 4;
        iVar70 = iVar70 + iVar28;
      } while (sVar30 != __size);
    }
    local_408 = (void *)0x0;
    lStack_3f8 = 0;
    iVar64 = *(int *)((long)local_5c0 + (__size - 4));
    iVar70 = -iVar64;
    if (0 < iVar64) {
      iVar70 = iVar64;
    }
    iVar64 = *(int *)((long)local_428 + (lVar68 * 4 - 4U));
    iVar28 = -iVar64;
    if (0 < iVar64) {
      iVar28 = iVar64;
    }
    lVar50 = param_2[0x16];
    iVar70 = iVar70 + iVar28;
    if (lVar50 != 0) {
      local_408 = malloc(lVar50 * 4);
      sVar30 = 0;
      if (sVar47 != 0) {
        do {
          iVar64 = *(int *)(*local_5a8 + sVar30);
          *(int *)((long)local_408 + sVar30) = iVar70;
          iVar28 = -iVar64;
          if (0 < iVar64) {
            iVar28 = iVar64;
          }
          sVar30 = sVar30 + 4;
          iVar70 = iVar70 + iVar28;
        } while (sVar30 != sVar47);
      }
      iVar64 = *(int *)((long)local_408 + (lVar50 * 4 - 4U));
      iVar70 = -iVar64;
      if (0 < iVar64) {
        iVar70 = iVar64;
      }
      iVar64 = *(int *)(local_5a8[-1] + sVar47 + 0xc);
      iVar28 = -iVar64;
      if (0 < iVar64) {
        iVar28 = iVar64;
      }
      iVar70 = iVar70 + iVar28;
      lStack_3f8 = lVar50;
    }
    local_588 = local_408;
    lVar50 = param_2[0x19];
    local_3e8 = (void *)0x0;
    lStack_3d8 = 0;
    local_400 = lStack_3f8;
    if (lVar50 != 0) {
      local_3e8 = malloc(lVar50 * 4);
      sVar47 = 0;
      if (sVar3 != 0) {
        do {
          iVar64 = *(int *)((long)local_5d8 + sVar47);
          *(int *)((long)local_3e8 + sVar47) = iVar70;
          iVar28 = -iVar64;
          if (0 < iVar64) {
            iVar28 = iVar64;
          }
          sVar47 = sVar47 + 4;
          iVar70 = iVar70 + iVar28;
        } while (sVar3 != sVar47);
      }
      iVar64 = *(int *)((long)local_3e8 + (lVar50 * 4 - 4U));
      iVar70 = -iVar64;
      if (0 < iVar64) {
        iVar70 = iVar64;
      }
      iVar64 = *(int *)((long)local_5d8 + (sVar3 - 4));
      iVar28 = -iVar64;
      if (0 < iVar64) {
        iVar28 = iVar64;
      }
      iVar70 = iVar70 + iVar28;
      lStack_3d8 = lVar50;
    }
    local_5b8 = local_3e8;
    local_1e8 = 0;
    local_1e0 = (undefined1 (*) [16])0x0;
    local_168 = _LC20;
    local_228 = _LC16;
    dStack_220 = _LC16;
    local_218 = _LC16;
    dStack_210 = _LC13;
    local_1c8 = (void *)0x0;
    local_1b0 = (void *)0x0;
    local_208 = _LC13;
    dStack_200 = _LC13;
    local_198 = (void *)0x0;
    local_180 = (void *)0x0;
    local_1f8 = _LC19;
    dStack_1f0 = _LC19;
    local_160 = (undefined8 *)0x0;
    local_140[0] = 0;
    local_138 = (_Rb_tree_node_base *)0x0;
    local_120 = 0;
    local_118 = (int *)0x0;
    local_1d8 = (undefined1  [16])0x0;
    local_1c0 = (undefined1  [16])0x0;
    local_1a8 = (undefined1  [16])0x0;
    local_190 = (undefined1  [16])0x0;
    local_178 = (undefined1  [16])0x0;
    local_158 = (undefined1  [16])0x0;
    local_110 = (undefined1  [16])0x0;
    local_100 = (undefined8 *)0x0;
    local_e8 = (void *)0x0;
    local_d0 = (void *)0x0;
    local_b8 = (void *)0x0;
    local_f8 = (undefined1  [16])0x0;
    local_e0 = (undefined1  [16])0x0;
    local_c8 = (undefined1  [16])0x0;
    local_b0 = (undefined1  [16])0x0;
    local_3e0 = lStack_3d8;
    local_130 = (_Rb_tree_node_base *)local_140;
    local_128 = (_Rb_tree_node_base *)local_140;
    if (iVar70 == 0) {
      Manifold::Impl::Impl(param_1,(Impl *)&local_228);
    }
    else {
      local_1f8 = *(double *)(pIVar10 + 0x30);
      if (*(double *)(pIVar10 + 0x30) <= *(double *)(pIVar72 + 0x30)) {
        local_1f8 = *(double *)(pIVar72 + 0x30);
      }
      lVar50 = (long)iVar70;
      dStack_1f0 = *(double *)(pIVar10 + 0x38);
      if (*(double *)(pIVar10 + 0x38) <= *(double *)(pIVar72 + 0x38)) {
        dStack_1f0 = *(double *)(pIVar72 + 0x38);
      }
      pauVar31 = (undefined1 (*) [16])malloc(lVar50 * 0x18);
      pauVar32 = pauVar31;
      do {
        *(undefined8 *)pauVar32[1] = 0;
        pauVar27 = pauVar32 + 1;
        *pauVar32 = (undefined1  [16])0x0;
        pauVar32 = (undefined1 (*) [16])(*pauVar27 + 8);
      } while ((undefined1 (*) [16])(lVar50 * 0x18 + (long)pauVar31) !=
               (undefined1 (*) [16])(*pauVar27 + 8));
      local_1d8._8_8_ = lVar50;
      local_1d8._0_8_ = lVar50;
      local_268._0_8_ = local_5c8;
      local_258._0_8_ = local_5a0;
      local_248._0_8_ = *(undefined8 *)(pIVar72 + 0x48);
      local_1e0 = pauVar31;
      local_278._0_8_ = pauVar31;
      for_each_n<manifold::CountingIterator<unsigned_long>,(anonymous_namespace)::DuplicateVerts>
                (0,*(undefined8 *)(pIVar72 + 0x50),(_anonymous_namespace_ *)local_278);
      local_268._0_8_ = local_5c0;
      local_258._0_8_ = local_598;
      local_248._0_8_ = *(undefined8 *)(pIVar10 + 0x48);
      local_278._0_8_ = pauVar31;
      for_each_n<manifold::CountingIterator<unsigned_long>,(anonymous_namespace)::DuplicateVerts>
                (0,*(undefined8 *)(pIVar10 + 0x50),(_anonymous_namespace_ *)local_278);
      local_268._0_8_ = local_5a8;
      local_258._0_8_ = local_588;
      local_248._0_8_ = param_2[0x15];
      local_278._0_8_ = pauVar31;
      for_each_n<manifold::CountingIterator<unsigned_long>,(anonymous_namespace)::DuplicateVerts>
                (0,lVar42,(_anonymous_namespace_ *)local_278);
      local_278._0_8_ = pauVar31;
      local_268._0_8_ = local_5d8;
      local_248._0_8_ = param_2[0x18];
      local_258._0_8_ = local_5b8;
      for_each_n<manifold::CountingIterator<unsigned_long>,(anonymous_namespace)::DuplicateVerts>
                (0,lVar37,(_anonymous_namespace_ *)local_278);
      local_300[0] = 0;
      local_2f8 = (_Rb_tree_node *)0x0;
      local_2e0 = 0;
      local_2d0[0] = 0;
      local_2c8 = (_Rb_tree_node *)0x0;
      local_2b0 = 0;
      local_2a0[0] = 0;
      local_298 = (_Rb_tree_node *)0x0;
      local_280 = 0;
      local_2f0 = local_300;
      local_2e8 = local_300;
      local_2c0 = local_2d0;
      local_2b8 = local_2d0;
      local_290 = (_Rb_tree_node_base *)local_2a0;
      local_288 = (_Rb_tree_node_base *)local_2a0;
      (anonymous_namespace)::AddNewEdgeVerts
                (local_308,local_2a8,(SparseIndices *)(param_2 + 3),(Vec *)&local_4c8,
                 (Vec *)&local_408,(Vec *)(pIVar72 + 0x60),true);
      (anonymous_namespace)::AddNewEdgeVerts
                (local_2d8,local_2a8,(SparseIndices *)(param_2 + 6),(Vec *)&local_4a8,
                 (Vec *)&local_3e8,(Vec *)(param_2[1] + 0x60),false);
      local_400 = 0;
      if (local_588 != (void *)0x0) {
        free(local_588);
      }
      local_408 = (void *)0x0;
      lStack_3f8 = 0;
      local_3e0 = 0;
      if (local_5b8 != (void *)0x0) {
        free(local_5b8);
      }
      local_3e8 = (void *)0x0;
      lStack_3d8 = 0;
      local_3c8 = (undefined4 *)0x0;
      local_3c0 = (undefined1  [16])0x0;
      (anonymous_namespace)::SizeOutput
                ((_anonymous_namespace_ *)local_278,(Impl *)&local_228,(Impl *)*param_2,
                 (Impl *)param_2[1],(Vec *)&local_488,(Vec *)&local_468,(Vec *)&local_4c8,
                 (Vec *)&local_4a8,(SparseIndices *)(param_2 + 3),(SparseIndices *)(param_2 + 6),
                 param_3 == 1);
      if (local_3c8 != (undefined4 *)0x0) {
        free(local_3c8);
      }
      uVar77 = local_278._0_8_;
      uVar75 = local_258._0_8_;
      auVar83._8_8_ = 0;
      auVar83._0_8_ = local_4c0._8_8_;
      local_4c0 = auVar83 << 0x40;
      uVar13 = local_268._8_8_;
      local_3c8 = (undefined4 *)local_268._8_8_;
      local_3c0 = local_258;
      uVar33 = 0;
      if (local_5a8 != (undefined1 (*) [16])0x0) {
        free(local_5a8);
        uVar33 = local_4c0._0_8_;
      }
      local_4c0._0_8_ = uVar33;
      local_4c8 = (undefined1 (*) [16])0x0;
      local_4c0._8_8_ = 0;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = local_4a0._8_8_;
      local_4a0 = auVar18 << 0x40;
      uVar33 = 0;
      if (local_5d8 != (void *)0x0) {
        free(local_5d8);
        uVar33 = local_4a0._0_8_;
      }
      local_4a0._0_8_ = uVar33;
      local_4a8 = (void *)0x0;
      local_4a0._8_8_ = 0;
      local_3a8 = (undefined4 *)0x0;
      local_5a8 = (undefined1 (*) [16])0x0;
      local_3a0 = (undefined1  [16])0x0;
      if (uVar75 != 0) {
        sVar47 = uVar75 * 4;
        local_5a8 = (undefined1 (*) [16])malloc(sVar47);
        if ((long)sVar47 < 5) {
          if (sVar47 == 4) {
            *(undefined4 *)local_5a8 = *(undefined4 *)uVar13;
          }
        }
        else {
          memmove(local_5a8,(void *)uVar13,sVar47);
        }
      }
      pIVar72 = (Impl *)*param_2;
      local_388 = (undefined1 *)0x0;
      local_380._0_8_ = 0;
      local_380._8_8_ = 0;
      uVar13 = local_380._8_8_;
      local_380._8_8_ = 0;
      sVar47 = *(size_t *)(pIVar72 + 0x68);
      local_3a0._8_8_ = uVar75;
      local_3a0._0_8_ = uVar75;
      local_3a8 = (undefined4 *)local_5a8;
      local_538 = (undefined1 *)0x0;
      if (sVar47 != 0) {
        local_380._8_8_ = uVar13;
        local_538 = (undefined1 *)malloc(sVar47);
        local_388 = local_538;
        local_380._8_8_ = sVar47;
        memset(local_538,1,sVar47);
      }
      local_380._0_8_ = sVar47;
      local_368 = (undefined1 *)0x0;
      sVar3 = *(size_t *)(param_2[1] + 0x68);
      local_360._0_8_ = 0;
      local_360._8_8_ = 0;
      uVar13 = local_360._8_8_;
      local_360._8_8_ = 0;
      local_530 = (undefined1 *)0x0;
      if (sVar3 != 0) {
        local_360._8_8_ = uVar13;
        local_530 = (undefined1 *)malloc(sVar3);
        local_368 = local_530;
        local_360._8_8_ = sVar3;
        memset(local_530,1,sVar3);
      }
      local_360._0_8_ = sVar3;
      local_348 = (void *)0x0;
      local_340 = (undefined1  [16])0x0;
      local_340._8_8_ = 0;
      uVar33 = local_1c0._0_8_ & 0xfffffffffffffffe;
      if ((local_1c0 & (undefined1  [16])0xfffffffffffffffe) != (undefined1  [16])0x0) {
        local_348 = malloc(((ulong)local_1c0._0_8_ >> 1) << 5);
        local_340._8_8_ = uVar33;
      }
      local_340._0_8_ = uVar33;
      (anonymous_namespace)::AppendPartialEdges
                ((Impl *)&local_228,(Vec *)&local_388,(Vec *)&local_3a8,local_308,(Vec *)&local_348,
                 pIVar72,(Vec *)&local_488,(Vec *)&local_448,(int *)uVar77,true);
      (anonymous_namespace)::AppendPartialEdges
                ((Impl *)&local_228,(Vec *)&local_368,(Vec *)&local_3a8,local_2d8,(Vec *)&local_348,
                 (Impl *)param_2[1],(Vec *)&local_468,(Vec *)&local_428,
                 (int *)(uVar77 + (*(ulong *)(*param_2 + 0x68) / 3) * 4),false);
      std::
      _Rb_tree<int,std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,std::_Select1st<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>
      ::_M_erase(local_2f8);
      local_2f8 = (_Rb_tree_node *)0x0;
      local_2e0 = 0;
      local_2f0 = local_300;
      local_2e8 = local_300;
      std::
      _Rb_tree<int,std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,std::_Select1st<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>
      ::_M_erase(local_2c8);
      uVar13 = _LC22;
      local_2c8 = (_Rb_tree_node *)0x0;
      uVar33 = *(ulong *)(*param_2 + 0x68);
      local_2b0 = 0;
      local_2c0 = local_2d0;
      local_2b8 = local_2d0;
      if (local_290 != (_Rb_tree_node_base *)local_2a0) {
        p_Var35 = local_290;
        do {
          piVar34 = *(int **)(p_Var35 + 0x28);
          piVar38 = *(int **)(p_Var35 + 0x30);
          iVar64 = *(int *)(p_Var35 + 0x20);
          iVar70 = *(int *)(p_Var35 + 0x24);
          piVar46 = piVar34;
          dVar82 = _LC16;
          dVar79 = _LC13;
          dVar76 = _LC13;
          dVar78 = _LC13;
          dVar80 = _LC16;
          dVar81 = _LC16;
          if (piVar34 != piVar38) {
            do {
              piVar51 = piVar46 + 6;
              pdVar1 = (double *)((long)local_1e0 + (long)*piVar46 * 0x18);
              dVar4 = *pdVar1;
              dVar5 = pdVar1[1];
              dVar6 = pdVar1[2];
              if (dVar4 <= dVar82) {
                dVar82 = dVar4;
              }
              if (dVar5 <= dVar81) {
                dVar81 = dVar5;
              }
              if (dVar6 <= dVar80) {
                dVar80 = dVar6;
              }
              if (dVar4 <= dVar79) {
                dVar4 = dVar79;
              }
              if (dVar5 <= dVar76) {
                dVar5 = dVar76;
              }
              if (dVar6 <= dVar78) {
                dVar6 = dVar78;
              }
              piVar46 = piVar51;
              dVar79 = dVar4;
              dVar76 = dVar5;
              dVar78 = dVar6;
            } while (piVar38 != piVar51);
            if ((dVar4 - dVar82 <= dVar5 - dVar81) ||
               (cVar48 = '\0', dVar4 - dVar82 <= dVar6 - dVar80)) {
              cVar48 = (dVar5 - dVar81 <= dVar6 - dVar80) + '\x01';
            }
LAB_0010565b:
            do {
              puVar45 = (undefined8 *)((long)local_1e0 + (long)*piVar34 * 0x18);
              if (cVar48 == '\0') {
                uVar75 = *puVar45;
              }
              else {
                if (cVar48 != '\x01') {
                  piVar46 = piVar34 + 6;
                  *(undefined8 *)(piVar34 + 2) = puVar45[2];
                  piVar34 = piVar46;
                  if (piVar38 == piVar46) break;
                  goto LAB_0010565b;
                }
                uVar75 = puVar45[1];
              }
              *(undefined8 *)(piVar34 + 2) = uVar75;
              piVar34 = piVar34 + 6;
            } while (piVar38 != piVar34);
          }
          (anonymous_namespace)::PairUp
                    ((_anonymous_namespace_ *)local_278,(vector *)(p_Var35 + 0x28));
          uVar75 = _LC21;
          iVar28 = *(int *)(uVar77 + (long)iVar64 * 4);
          iVar49 = *(int *)(uVar77 + (long)((int)(uVar33 / 3) + iVar70) * 4);
          if (local_278._0_8_ != local_278._8_8_) {
            puVar45 = (undefined8 *)local_278._0_8_;
            do {
              iVar71 = *(int *)((long)local_5a8 + (long)iVar28 * 4);
              uVar7 = *puVar45;
              puVar45 = (undefined8 *)((long)puVar45 + 0xc);
              *(int *)((long)local_5a8 + (long)iVar28 * 4) = iVar71 + 1;
              iVar56 = *(int *)((long)local_5a8 + (long)iVar49 * 4);
              *(int *)((long)local_5a8 + (long)iVar49 * 4) = iVar56 + 1;
              puVar52 = (undefined8 *)((long)iVar71 * 0x10 + (long)local_348);
              puVar39 = (undefined8 *)((long)local_1c8 + (long)iVar71 * 0xc);
              *(int *)(puVar39 + 1) = iVar56;
              *puVar39 = uVar7;
              *(int *)(puVar52 + 1) = iVar64;
              *puVar52 = uVar75;
              *(undefined4 *)((long)puVar52 + 0xc) = 0;
              puVar52 = (undefined8 *)((long)iVar56 * 0x10 + (long)local_348);
              puVar39 = (undefined8 *)((long)local_1c8 + (long)iVar56 * 0xc);
              *(int *)(puVar39 + 1) = iVar71;
              *puVar39 = CONCAT44((int)uVar7,(int)((ulong)uVar7 >> 0x20));
              *puVar52 = uVar13;
              *(int *)(puVar52 + 1) = iVar70;
              *(undefined4 *)((long)puVar52 + 0xc) = 0;
            } while ((undefined8 *)local_278._8_8_ != puVar45);
          }
          if ((undefined8 *)local_278._0_8_ != (undefined8 *)0x0) {
            operator_delete((void *)local_278._0_8_,local_268._0_8_ - local_278._0_8_);
          }
          p_Var35 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var35);
        } while (p_Var35 != (_Rb_tree_node_base *)local_2a0);
      }
      std::
      _Rb_tree<std::pair<int,int>,std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,std::_Select1st<std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>
      ::_M_erase(local_298);
      lVar42 = *param_2;
      local_298 = (_Rb_tree_node *)0x0;
      local_280 = 0;
      uVar33 = *(ulong *)(lVar42 + 0x68) / 3;
      if (sVar47 == 0) {
        local_290 = (_Rb_tree_node_base *)local_2a0;
        local_288 = (_Rb_tree_node_base *)local_2a0;
        (anonymous_namespace)::AppendWholeEdges
                  ((Impl *)&local_228,(Vec *)&local_3a8,(Vec *)&local_348,lVar42,0,0,local_5c8,
                   lVar53,local_5a0,lVar12,uVar77,uVar33,1);
      }
      else {
        local_290 = (_Rb_tree_node_base *)local_2a0;
        local_288 = (_Rb_tree_node_base *)local_2a0;
        puVar43 = (undefined1 *)malloc(sVar47);
        if ((long)sVar47 < 2) {
          if (sVar47 == 1) {
            *puVar43 = *local_538;
            goto LAB_001072da;
          }
          (anonymous_namespace)::AppendWholeEdges
                    ((Impl *)&local_228,(Vec *)&local_3a8,(Vec *)&local_348,lVar42,puVar43,sVar47,
                     local_5c8,lVar53,local_5a0,lVar12,uVar77,uVar33,1);
          if (puVar43 == (undefined1 *)0x0) goto LAB_00105857;
        }
        else {
          memcpy(puVar43,local_538,sVar47);
LAB_001072da:
          (anonymous_namespace)::AppendWholeEdges
                    ((Impl *)&local_228,(Vec *)&local_3a8,(Vec *)&local_348,lVar42,puVar43,sVar47,
                     local_5c8,lVar53,local_5a0,lVar12,uVar77,uVar33,1);
        }
        free(puVar43);
      }
LAB_00105857:
      lVar42 = param_2[1];
      uVar33 = *(ulong *)(lVar42 + 0x68) / 3;
      piVar34 = (int *)(uVar77 + (*(ulong *)(*param_2 + 0x68) / 3) * 4);
      if (sVar3 == 0) {
        (anonymous_namespace)::AppendWholeEdges
                  ((Impl *)&local_228,(Vec *)&local_3a8,(Vec *)&local_348,lVar42,0,0,local_5c0,
                   lVar11,local_598,lVar68,piVar34,uVar33,0);
      }
      else {
        puVar43 = (undefined1 *)malloc(sVar3);
        if ((long)sVar3 < 2) {
          if (sVar3 == 1) {
            *puVar43 = *local_530;
            goto LAB_0010738a;
          }
          (anonymous_namespace)::AppendWholeEdges
                    ((Impl *)&local_228,(Vec *)&local_3a8,(Vec *)&local_348,lVar42,puVar43,sVar3,
                     local_5c0,lVar11,local_598,lVar68,piVar34,uVar33,0);
          if (puVar43 == (undefined1 *)0x0) goto LAB_001058db;
        }
        else {
          memcpy(puVar43,local_530,sVar3);
LAB_0010738a:
          (anonymous_namespace)::AppendWholeEdges
                    ((Impl *)&local_228,(Vec *)&local_3a8,(Vec *)&local_348,lVar42,puVar43,sVar3,
                     local_5c0,lVar11,local_598,lVar68,piVar34,uVar33,0);
        }
        free(puVar43);
      }
LAB_001058db:
      auVar19._8_8_ = 0;
      auVar19._0_8_ = local_380._8_8_;
      local_380 = auVar19 << 0x40;
      uVar33 = 0;
      if (local_538 != (undefined1 *)0x0) {
        free(local_538);
        uVar33 = local_380._0_8_;
      }
      local_380._0_8_ = uVar33;
      local_388 = (undefined1 *)0x0;
      local_380._8_8_ = 0;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = local_360._8_8_;
      local_360 = auVar20 << 0x40;
      uVar33 = 0;
      if (local_530 != (undefined1 *)0x0) {
        free(local_530);
        uVar33 = local_360._0_8_;
      }
      local_360._0_8_ = uVar33;
      local_368 = (undefined1 *)0x0;
      local_360._8_8_ = 0;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = local_3a0._8_8_;
      local_3a0 = auVar21 << 0x40;
      uVar33 = 0;
      if (local_5a8 != (undefined1 (*) [16])0x0) {
        free(local_5a8);
        uVar33 = local_3a0._0_8_;
      }
      local_3a0._0_8_ = uVar33;
      local_3a8 = (undefined4 *)0x0;
      local_3a0._8_8_ = 0;
      if ((int *)uVar77 != (int *)0x0) {
        free((void *)uVar77);
      }
      auVar22._8_8_ = 0;
      auVar22._0_8_ = local_480._8_8_;
      local_480 = auVar22 << 0x40;
      uVar33 = 0;
      if (local_5c8 != (void *)0x0) {
        free(local_5c8);
        uVar33 = local_480._0_8_;
      }
      local_480._0_8_ = uVar33;
      local_488 = (void *)0x0;
      local_480._8_8_ = 0;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = local_460._8_8_;
      local_460 = auVar23 << 0x40;
      uVar33 = 0;
      if (local_5c0 != (long *)0x0) {
        free(local_5c0);
        uVar33 = local_460._0_8_;
      }
      local_460._0_8_ = uVar33;
      local_468 = (void *)0x0;
      local_460._8_8_ = 0;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = local_440._8_8_;
      local_440 = auVar24 << 0x40;
      uVar33 = 0;
      if (local_5a0 != (undefined1 (*) [16])0x0) {
        free(local_5a0);
        uVar33 = local_440._0_8_;
      }
      local_440._0_8_ = uVar33;
      local_448 = (void *)0x0;
      local_440._8_8_ = 0;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = local_420._8_8_;
      local_420 = auVar25 << 0x40;
      uVar33 = 0;
      if (local_598 != (void *)0x0) {
        free(local_598);
        uVar33 = local_420._0_8_;
      }
      local_420._0_8_ = uVar33;
      local_428 = (void *)0x0;
      local_420._8_8_ = 0;
      manifold::ManifoldParams();
      manifold::Manifold::Impl::Face2Tri((Vec *)&local_228,(Vec *)&local_3c8);
      auVar16._8_8_ = 0;
      auVar16._0_8_ = local_340._8_8_;
      local_340 = auVar16 << 0x40;
      uVar77 = 0;
      if (local_348 != (void *)0x0) {
        free(local_348);
        uVar77 = local_340._0_8_;
      }
      local_340._0_8_ = uVar77;
      local_340._8_8_ = local_340._0_8_;
      local_348 = (void *)0x0;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = local_3c0._8_8_;
      local_3c0 = auVar26 << 0x40;
      uVar77 = 0;
      if (local_3c8 != (undefined4 *)0x0) {
        free(local_3c8);
        uVar77 = local_3c0._0_8_;
      }
      local_3c0._0_8_ = uVar77;
      local_3c8 = (undefined4 *)0x0;
      local_3c0._8_8_ = local_3c0._0_8_;
      manifold::ManifoldParams();
      local_5a8 = (undefined1 (*) [16])param_2[1];
      lVar42 = *param_2;
      iVar64 = *(int *)(lVar42 + 0xc4);
      iVar70 = *(int *)((long)local_5a8 + 0xc4);
      iVar28 = iVar70;
      if (iVar70 <= iVar64) {
        iVar28 = iVar64;
      }
      local_168 = CONCAT44(iVar28,(undefined4)local_168);
      if (iVar28 != 0) {
        uVar77 = local_f8._0_8_;
        iVar49 = (int)((ulong)local_1c0._0_8_ / 3);
        uVar33 = (ulong)iVar49;
        if ((ulong)local_f8._8_8_ < uVar33) {
          puVar39 = (undefined8 *)malloc(uVar33 * 0xc);
          puVar45 = local_100;
          local_f8._8_8_ = uVar33;
          if (uVar77 == 0) {
            if (local_100 == (undefined8 *)0x0) {
              local_100 = puVar39;
              local_f8._0_8_ = 0;
              goto LAB_001075a2;
            }
LAB_001077dd:
            free(puVar45);
            uVar57 = local_f8._0_8_;
          }
          else {
            sVar47 = uVar77 * 0xc;
            if (0xc < (long)sVar47) {
              memmove(puVar39,local_100,sVar47);
              goto LAB_001077dd;
            }
            if (sVar47 == 0xc) {
              *puVar39 = *local_100;
              *(undefined4 *)(puVar39 + 1) = *(undefined4 *)(local_100 + 1);
              goto LAB_001077dd;
            }
            uVar57 = uVar77;
            if (local_100 != (undefined8 *)0x0) goto LAB_001077dd;
          }
          local_100 = puVar39;
          local_f8._0_8_ = uVar57;
          if (uVar57 < uVar33) goto LAB_001075a2;
joined_r0x0010782f:
          local_f8._0_8_ = uVar33;
          if (uVar33 * 2 < (ulong)uVar77) {
LAB_001075f4:
            puVar45 = local_100;
            sVar47 = uVar33 * 0xc;
            puVar39 = (undefined8 *)malloc(sVar47);
            if ((long)sVar47 < 0xd) {
              if (sVar47 != 0xc) goto LAB_00105bb2;
              *puVar39 = *puVar45;
              *(undefined4 *)(puVar39 + 1) = *(undefined4 *)(puVar45 + 1);
            }
            else {
              memmove(puVar39,puVar45,sVar47);
            }
LAB_00107649:
            free(puVar45);
LAB_00105bbe:
            local_100 = puVar39;
            local_f8._8_8_ = local_f8._0_8_;
          }
        }
        else {
          if ((ulong)local_f8._0_8_ < uVar33) {
LAB_001075a2:
            for (puVar45 = (undefined8 *)((long)local_100 + local_f8._0_8_ * 0xc);
                (undefined8 *)((long)local_100 + uVar33 * 0xc) != puVar45;
                puVar45 = (undefined8 *)((long)puVar45 + 0xc)) {
              *puVar45 = 0;
              *(undefined4 *)(puVar45 + 1) = 0;
            }
            goto joined_r0x0010782f;
          }
          local_f8._0_8_ = uVar33;
          if (uVar33 * 2 < (ulong)uVar77) {
            if (uVar33 != 0) goto LAB_001075f4;
            puVar39 = (undefined8 *)0x0;
LAB_00105bb2:
            puVar45 = local_100;
            if (local_100 != (undefined8 *)0x0) goto LAB_00107649;
            goto LAB_00105bbe;
          }
        }
        local_5d8 = (void *)0x0;
        if (local_1c0._0_8_ != 0) {
          local_5d8 = malloc(local_1c0._0_8_ * 0x18);
        }
        piVar34 = local_118;
        pvVar14 = local_1c8;
        auVar83 = local_1d8;
        pauVar32 = local_1e0;
        dVar82 = local_1f8;
        uVar57 = 0;
        uVar77 = local_1d8._0_8_;
        lVar37 = *(long *)(lVar42 + 0x48);
        lVar53 = *(long *)((long)local_5a8 + 0x48);
        lVar11 = *(long *)((long)local_5a8 + 0x60);
        lVar12 = *(long *)(lVar42 + 0x60);
        if (uVar33 != 0) {
          do {
            iVar56 = (int)uVar57 * 3;
            uVar13 = *(undefined8 *)(piVar34 + (long)(int)uVar57 * 4 + 2);
            iVar71 = *(int *)((long)pvVar14 + (long)iVar56 * 0xc);
            if (-1 < iVar71) {
              lVar68 = lVar11;
              lVar50 = lVar53;
              if ((int)*(undefined8 *)(piVar34 + (long)(int)uVar57 * 4) == 0) {
                lVar68 = lVar12;
                lVar50 = lVar37;
              }
              local_238 = 0;
              local_278 = (undefined1  [16])0x0;
              piVar38 = (int *)local_78;
              local_78._8_4_ = 2;
              local_78._0_8_ = _LC4;
              local_268 = (undefined1  [16])0x0;
              local_258 = (undefined1  [16])0x0;
              local_248 = (undefined1  [16])0x0;
              piVar46 = piVar38;
              do {
                iVar67 = *piVar46;
                puVar45 = (undefined8 *)
                          (lVar50 + (long)*(int *)(lVar68 + (long)((int)uVar13 * 3 + iVar67) * 0xc)
                                    * 0x18);
                p_Var55 = (_anonymous_namespace_ *)local_278;
                if ((iVar67 != 0) &&
                   (p_Var55 = (_anonymous_namespace_ *)(local_268 + 8), iVar67 != 1)) {
                  p_Var55 = (_anonymous_namespace_ *)local_248;
                }
                uVar75 = *puVar45;
                uVar7 = puVar45[1];
                piVar46 = piVar46 + 1;
                *(undefined8 *)(p_Var55 + 0x10) = puVar45[2];
                *(undefined8 *)p_Var55 = uVar75;
                *(undefined8 *)(p_Var55 + 8) = uVar7;
              } while ((int *)(local_78 + 0xc) != piVar46);
              local_78._8_4_ = 2;
              local_78._0_8_ = _LC4;
              while( true ) {
                iVar67 = *piVar38;
                piVar38 = piVar38 + 1;
                GetBarycentric((manifold *)&local_328,(vec *)((long)pauVar32 + (long)iVar71 * 0x18),
                               (mat *)local_278,dVar82);
                puVar45 = (undefined8 *)((long)local_5d8 + (long)(iVar67 + iVar56) * 0x18);
                puVar45[2] = local_318;
                *puVar45 = local_328;
                puVar45[1] = uStack_320;
                if ((int *)(local_78 + 0xc) == piVar38) break;
                iVar71 = *(int *)((long)pvVar14 + (long)(*piVar38 + iVar56) * 0xc);
              }
            }
            uVar57 = uVar57 + 1;
          } while (uVar33 != uVar57);
        }
        iVar71 = auVar83._0_4_;
        uVar33 = uVar77 + 1;
        if (0x555555555555555 < uVar33) {
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("cannot create std::vector larger than max_size()");
        }
        if (uVar33 == 0) {
          local_5a0 = (undefined1 (*) [16])0x0;
          pauVar32 = (undefined1 (*) [16])0x0;
          uVar33 = 0;
        }
        else {
          uVar33 = uVar33 * 0x18;
          local_5a0 = (undefined1 (*) [16])operator_new(uVar33);
          pauVar32 = (undefined1 (*) [16])((long)local_5a0 + uVar33);
          pauVar31 = local_5a0;
          do {
            *(undefined8 *)pauVar31[1] = 0;
            pauVar27 = pauVar31 + 1;
            *pauVar31 = (undefined1  [16])0x0;
            pauVar31 = (undefined1 (*) [16])(*pauVar27 + 8);
          } while ((undefined1 (*) [16])(*pauVar27 + 8) != pauVar32);
        }
        local_278._0_4_ = 0xffffffff;
        local_78 = (undefined1  [16])0x0;
        local_68 = (undefined1  [16])0x0;
        local_58 = (undefined1  [16])0x0;
        if (*(int *)((long)local_5a8 + 0xc4) == 0) {
          uVar57 = *(ulong *)((long)local_5a8 + 0x50);
        }
        else {
          uVar57 = *(ulong *)((long)local_5a8 + 0xd0) /
                   (ulong)(long)*(int *)((long)local_5a8 + 0xc4);
        }
        local_68._8_8_ = 0;
        local_58._0_8_ = 0;
        if (uVar57 != 0) {
          std::vector<int,std::allocator<int>>::_M_fill_insert
                    ((vector<int,std::allocator<int>> *)local_78,0,uVar57,
                     (_anonymous_namespace_ *)local_278);
          uVar57 = (long)(local_58._0_8_ - local_68._8_8_) >> 2;
        }
        local_278._0_4_ = 0xffffffff;
        if (*(int *)(lVar42 + 0xc4) == 0) {
          uVar44 = *(ulong *)(lVar42 + 0x50);
        }
        else {
          uVar44 = *(ulong *)(lVar42 + 0xd0) / (ulong)(long)*(int *)(lVar42 + 0xc4);
        }
        if (uVar57 < uVar44) {
          std::vector<int,std::allocator<int>>::_M_fill_insert
                    ((vector<int,std::allocator<int>> *)(local_68 + 8),local_58._0_8_,
                     uVar44 - uVar57,(_anonymous_namespace_ *)local_278);
        }
        else if ((uVar44 < uVar57) &&
                (lVar37 = local_68._8_8_ + uVar44 * 4, local_58._0_8_ != lVar37)) {
          local_58._0_8_ = lVar37;
        }
        uVar57 = (long)iVar28 * local_1d8._0_8_;
        if ((ulong)local_158._8_8_ < uVar57) {
          puVar39 = (undefined8 *)malloc(uVar57 * 8);
          puVar45 = local_160;
          if (local_158._0_8_ == 0) {
LAB_00107703:
            if (local_160 != (undefined8 *)0x0) goto LAB_001078cb;
          }
          else {
            sVar47 = local_158._0_8_ * 8;
            if ((long)sVar47 < 9) {
              if (sVar47 != 8) goto LAB_00107703;
              *puVar39 = *local_160;
            }
            else {
              puVar39 = (undefined8 *)memmove(puVar39,local_160,sVar47);
            }
LAB_001078cb:
            free(puVar45);
          }
          local_160 = puVar39;
          local_158._8_8_ = uVar57;
        }
        if (0 < iVar49) {
          uVar61 = 0;
          uVar57 = 0;
          uVar77 = _LC4;
          do {
            iVar56 = *(int *)((long)local_1c8 + uVar57 * 0x24);
            if (-1 < iVar56) {
              bVar73 = local_118[uVar57 * 4] == 0;
              iVar67 = (int)*(undefined8 *)(local_118 + uVar57 * 4 + 2);
              if (bVar73) {
                local_5c0 = (long *)(lVar42 + 200);
                if (iVar64 == 0) goto LAB_001067f0;
                puVar36 = (uint *)(*(long *)(lVar42 + 0x128) + (long)iVar67 * 0xc);
                iVar67 = iVar64;
              }
              else {
                local_5c0 = (long *)((long)local_5a8 + 200);
                if (iVar70 == 0) {
LAB_001067f0:
                  local_5c8._0_4_ = 0;
                  iVar67 = 0;
                  local_580 = 0xffffffff;
                  local_578 = 0xffffffff;
                  local_560 = 0xffffffff;
                  goto LAB_001061f9;
                }
                puVar36 = (uint *)(*(long *)((long)local_5a8 + 0x128) + (long)iVar67 * 0xc);
                iVar67 = iVar70;
              }
              local_560 = *puVar36;
              local_578 = puVar36[1];
              local_580 = puVar36[2];
              local_5c8._0_4_ = local_560 * iVar67;
LAB_001061f9:
              iVar15 = (int)uVar57 * 3;
              local_80 = 2;
              lVar37 = uVar57 * 0xc;
              local_88 = uVar77;
              piVar34 = (int *)&local_88;
              do {
                lVar53 = (long)iVar56;
                iVar8 = *piVar34;
                pdVar1 = (double *)((long)local_5d8 + (long)(iVar15 + iVar8) * 0x18);
                if (iVar67 < 1) {
LAB_0010626f:
                  lVar53 = (long)iVar71;
                  uVar65 = 0xffffffff;
                  uVar58 = 0xffffffff;
LAB_0010627f:
                  pvVar2 = (vector<std::pair<linalg::vec<int,3>,int>,std::allocator<std::pair<linalg::vec<int,3>,int>>>
                            *)((long)local_5a0 + lVar53 * 0x18);
                  puVar36 = *(uint **)(pvVar2 + 8);
                  for (puVar54 = *(uint **)pvVar2; puVar54 != puVar36; puVar54 = puVar54 + 4) {
                    if ((((uint)bVar73 == *puVar54) && (puVar54[1] == uVar58)) &&
                       (uVar65 == puVar54[2])) {
                      uVar58 = puVar54[3];
                      goto joined_r0x001066bf;
                    }
                  }
                  local_278._0_8_ = CONCAT44(uVar58,(uint)bVar73);
                  local_278._8_8_ = CONCAT44(uVar61,uVar65);
                  if (puVar36 == *(uint **)(pvVar2 + 0x10)) {
                    std::
                    vector<std::pair<linalg::vec<int,3>,int>,std::allocator<std::pair<linalg::vec<int,3>,int>>>
                    ::_M_realloc_insert<std::pair<linalg::vec<int,3>,int>>
                              (pvVar2,puVar36,(_anonymous_namespace_ *)local_278);
                    uVar77 = _LC4;
                  }
                  else {
                    *(undefined8 *)puVar36 = local_278._0_8_;
                    *(ulong *)(puVar36 + 2) = CONCAT44(uVar61,uVar65);
                    *(uint **)(pvVar2 + 8) = puVar36 + 4;
                  }
LAB_001062f7:
                  uVar58 = uVar61 + 1;
                  puVar54 = (uint *)((long)local_100 + lVar37);
                  puVar36 = puVar54;
                  if (iVar8 != 0) {
                    puVar36 = puVar54 + 2;
                    if (iVar8 == 1) {
                      puVar36 = puVar54 + 1;
                    }
                  }
                  *puVar36 = uVar61;
                  uVar61 = uVar58;
                  if (0 < iVar28) {
                    iVar56 = 0;
                    do {
                      puVar45 = local_160;
                      uVar44 = local_158._0_8_;
                      uVar13 = local_158._8_8_;
                      if (iVar56 < iVar67) {
                        auVar17._8_8_ = 0;
                        auVar17._0_8_ = local_268._8_8_;
                        local_268 = auVar17 << 0x40;
                        piVar38 = (int *)&local_98;
                        local_278 = (undefined1  [16])0x0;
                        local_90 = 2;
                        lVar53 = *local_5c0;
                        local_98 = uVar77;
                        do {
                          if (*piVar38 == 0) {
                            uVar75 = *(undefined8 *)(lVar53 + (long)((int)local_5c8 + iVar56) * 8);
                            p_Var55 = (_anonymous_namespace_ *)local_278;
                          }
                          else if (*piVar38 == 1) {
                            uVar75 = *(undefined8 *)
                                      (lVar53 + (long)(int)(local_578 * iVar67 + iVar56) * 8);
                            p_Var55 = (_anonymous_namespace_ *)(local_278 + 8);
                          }
                          else {
                            uVar75 = *(undefined8 *)
                                      (lVar53 + (long)(int)(local_580 * iVar67 + iVar56) * 8);
                            p_Var55 = (_anonymous_namespace_ *)local_268;
                          }
                          piVar38 = piVar38 + 1;
                          *(undefined8 *)p_Var55 = uVar75;
                        } while (piVar38 != &local_8c);
                        dVar82 = *pdVar1;
                        dVar79 = pdVar1[1];
                        dVar76 = (double)local_268._0_8_ * pdVar1[2];
                        puVar39 = puVar45;
                        if ((ulong)uVar13 <= uVar44) {
                          if (uVar13 == 0) {
                            sVar47 = 0x400;
                            uVar62 = 0x80;
                          }
                          else {
                            uVar62 = uVar13 * 2;
                            if (uVar62 <= (ulong)uVar13) goto LAB_00106470;
                            sVar47 = uVar13 << 4;
                          }
                          puVar39 = (undefined8 *)malloc(sVar47);
                          if (uVar44 == 0) {
LAB_0010676b:
                            if (puVar45 != (undefined8 *)0x0) goto LAB_001074d4;
                          }
                          else {
                            sVar47 = uVar44 * 8;
                            if ((long)sVar47 < 9) {
                              if (sVar47 != 8) goto LAB_0010676b;
                              *puVar39 = *puVar45;
                            }
                            else {
                              puVar39 = (undefined8 *)memmove(puVar39,puVar45,sVar47);
                            }
LAB_001074d4:
                            free(puVar45);
                            uVar44 = local_158._0_8_;
                          }
                          local_160 = puVar39;
                          uVar77 = _LC4;
                          local_158._8_8_ = uVar62;
                        }
LAB_00106470:
                        local_158._0_8_ = uVar44 + 1;
                        puVar39[uVar44] = dVar82 * 0.0 + 0.0 + dVar79 * 0.0 + dVar76;
                      }
                      else {
                        if ((ulong)local_158._8_8_ <= (ulong)local_158._0_8_) {
                          if (local_158._8_8_ == 0) {
                            sVar47 = 0x400;
                            uVar62 = 0x80;
                          }
                          else {
                            uVar62 = local_158._8_8_ * 2;
                            if (uVar62 <= (ulong)local_158._8_8_) goto LAB_00106381;
                            sVar47 = local_158._8_8_ << 4;
                          }
                          puVar39 = (undefined8 *)malloc(sVar47);
                          if (uVar44 == 0) {
LAB_001065b9:
                            if (puVar45 != (undefined8 *)0x0) goto LAB_00107266;
                          }
                          else {
                            sVar47 = uVar44 * 8;
                            if ((long)sVar47 < 9) {
                              if (sVar47 != 8) goto LAB_001065b9;
                              *puVar39 = *puVar45;
                            }
                            else {
                              puVar39 = (undefined8 *)memmove(puVar39,puVar45,sVar47);
                            }
LAB_00107266:
                            free(puVar45);
                            uVar44 = local_158._0_8_;
                          }
                          local_160 = puVar39;
                          uVar77 = _LC4;
                          local_158._8_8_ = uVar62;
                        }
LAB_00106381:
                        local_158._0_8_ = uVar44 + 1;
                        local_160[uVar44] = 0;
                      }
                      iVar56 = iVar56 + 1;
                    } while (iVar56 != iVar28);
                  }
                }
                else {
                  local_90 = 2;
                  piVar38 = (int *)&local_98;
                  local_98 = uVar77;
                  iVar63 = -2;
                  do {
                    iVar9 = *piVar38;
                    if (iVar9 == 0) {
                      dVar82 = *pdVar1;
                      uVar58 = local_560;
                    }
                    else if (iVar9 == 1) {
                      dVar82 = pdVar1[1];
                      uVar58 = local_578;
                    }
                    else {
                      dVar82 = pdVar1[2];
                      uVar58 = local_580;
                    }
                    if (dVar82 == _LC5) {
                      uVar65 = 0xffffffff;
                      goto LAB_00106687;
                    }
                    if (dVar82 == 0.0) {
                      iVar63 = iVar9;
                    }
                    piVar38 = piVar38 + 1;
                  } while (piVar38 != &local_8c);
                  if (iVar63 < 0) {
                    if (iVar63 != -2) goto LAB_0010626f;
                    uVar65 = 0xffffffff;
                    uVar58 = 0xffffffff;
                    goto LAB_0010627f;
                  }
                  uVar66 = local_578;
                  uVar59 = local_580;
                  if ((iVar63 != 0) && (uVar66 = local_580, uVar59 = local_560, iVar63 != 1)) {
                    uVar66 = local_560;
                    uVar59 = local_578;
                  }
                  uVar65 = uVar66;
                  uVar58 = uVar59;
                  if (((int)uVar66 <= (int)uVar59) &&
                     (uVar65 = uVar59, uVar58 = uVar66, (int)uVar59 < (int)uVar66)) {
                    uVar65 = uVar66;
                  }
                  if (iVar71 != iVar56) goto LAB_0010627f;
LAB_00106687:
                  if ((int)uVar58 < 0) {
                    lVar53 = (long)iVar71;
                    goto LAB_0010627f;
                  }
                  puVar36 = (uint *)(*(long *)(local_78 + (ulong)bVar73 * 0x18) +
                                    (long)(int)uVar58 * 4);
                  uVar58 = *puVar36;
                  if ((int)uVar58 < 0) {
                    *puVar36 = uVar61;
                    goto LAB_001062f7;
                  }
joined_r0x001066bf:
                  puVar36 = (uint *)((long)local_100 + lVar37);
                  if (iVar8 != 0) {
                    puVar36 = (uint *)((long)local_100 + lVar37 + 8);
                    if (iVar8 == 1) {
                      puVar36 = (uint *)((long)local_100 + lVar37 + 4);
                    }
                  }
                  *puVar36 = uVar58;
                }
                piVar34 = piVar34 + 1;
                if (piVar34 == &local_7c) break;
                iVar56 = *(int *)((long)local_1c8 + (long)(*piVar34 + iVar15) * 0xc);
              } while( true );
            }
            bVar73 = iVar49 - 1 != uVar57;
            uVar57 = uVar57 + 1;
          } while (bVar73);
        }
        if ((void *)local_68._8_8_ != (void *)0x0) {
          operator_delete((void *)local_68._8_8_,local_58._8_8_ - local_68._8_8_);
        }
        pauVar31 = local_5a0;
        if ((void *)local_78._0_8_ != (void *)0x0) {
          operator_delete((void *)local_78._0_8_,local_68._0_8_ - local_78._0_8_);
        }
        for (; pauVar31 != pauVar32; pauVar31 = (undefined1 (*) [16])(pauVar31[1] + 8)) {
          pvVar14 = *(void **)*pauVar31;
          if (pvVar14 != (void *)0x0) {
            operator_delete(pvVar14,*(long *)pauVar31[1] - (long)pvVar14);
          }
        }
        if (local_5a0 != (undefined1 (*) [16])0x0) {
          operator_delete(local_5a0,uVar33);
        }
        if (local_5d8 != (void *)0x0) {
          free(local_5d8);
        }
        local_5a8 = (undefined1 (*) [16])param_2[1];
        lVar42 = *param_2;
      }
      iVar64 = (int)Manifold::Impl::meshIDCounter_;
      lVar37 = *(long *)(lVar42 + 0x110);
      lVar53 = *(long *)((long)local_5a8 + 0x110);
      for (piVar34 = local_118; piVar34 != local_118 + ((ulong)local_1c0._0_8_ / 3) * 4;
          piVar34 = piVar34 + 4) {
        if (*piVar34 == 0) {
          puVar45 = (undefined8 *)(lVar37 + (long)piVar34[2] * 0x10);
          uVar77 = puVar45[1];
          *(undefined8 *)piVar34 = *puVar45;
          *(undefined8 *)(piVar34 + 2) = uVar77;
        }
        else {
          puVar45 = (undefined8 *)(lVar53 + (long)piVar34[2] * 0x10);
          uVar77 = puVar45[1];
          *(undefined8 *)piVar34 = *puVar45;
          *(undefined8 *)(piVar34 + 2) = uVar77;
          *piVar34 = *piVar34 + iVar64;
        }
      }
      for (p_Var35 = *(_Rb_tree_node_base **)(lVar42 + 0xf8);
          p_Var35 != (_Rb_tree_node_base *)(lVar42 + 0xe8);
          p_Var35 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var35)) {
        p_Var69 = (_Rb_tree_node_base *)local_140;
        if (local_138 == (_Rb_tree_node_base *)0x0) {
LAB_00106a20:
          p_Var40 = (_Rb_tree_node_base *)operator_new(0x98);
          iVar70 = *(int *)(p_Var35 + 0x20);
          *(int *)(p_Var40 + 0x20) = iVar70;
          p_Var60 = p_Var40 + 0x28;
          for (lVar37 = 0xe; lVar37 != 0; lVar37 = lVar37 + -1) {
            *(undefined8 *)p_Var60 = 0;
            p_Var60 = p_Var60 + (ulong)bVar74 * -0x10 + 8;
          }
          *(undefined2 *)(p_Var40 + 0x56) = 0x3ff0;
          *(undefined2 *)(p_Var40 + 0x36) = 0x3ff0;
          *(undefined4 *)(p_Var40 + 0x28) = 0xffffffff;
          *(undefined2 *)(p_Var40 + 0x76) = 0x3ff0;
          auVar83 = std::
                    _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
                    ::_M_get_insert_hint_unique_pos(local_148,p_Var69,iVar70);
          p_Var60 = auVar83._8_8_;
          p_Var69 = auVar83._0_8_;
          if (p_Var60 == (_Rb_tree_node_base *)0x0) {
            operator_delete(p_Var40,0x98);
          }
          else {
            if (((_Rb_tree_node_base *)local_140 == p_Var60) ||
               (p_Var69 != (_Rb_tree_node_base *)0x0)) {
              bVar73 = true;
            }
            else {
              bVar73 = iVar70 < *(int *)(p_Var60 + 0x20);
            }
            std::_Rb_tree_insert_and_rebalance
                      (bVar73,p_Var40,p_Var60,(_Rb_tree_node_base *)local_140);
            local_120 = local_120 + 1;
            p_Var69 = p_Var40;
          }
        }
        else {
          p_Var60 = local_138;
          do {
            while( true ) {
              p_Var40 = p_Var60;
              if (*(int *)(p_Var40 + 0x20) < *(int *)(p_Var35 + 0x20)) break;
              p_Var60 = *(_Rb_tree_node_base **)(p_Var40 + 0x10);
              p_Var69 = p_Var40;
              if (*(_Rb_tree_node_base **)(p_Var40 + 0x10) == (_Rb_tree_node_base *)0x0)
              goto LAB_00106a10;
            }
            p_Var60 = *(_Rb_tree_node_base **)(p_Var40 + 0x18);
          } while (*(_Rb_tree_node_base **)(p_Var40 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_00106a10:
          if ((p_Var69 == (_Rb_tree_node_base *)local_140) ||
             (*(int *)(p_Var35 + 0x20) < *(int *)(p_Var69 + 0x20))) goto LAB_00106a20;
        }
        uVar77 = *(undefined8 *)(p_Var35 + 0x30);
        *(undefined8 *)(p_Var69 + 0x28) = *(undefined8 *)(p_Var35 + 0x28);
        *(undefined8 *)(p_Var69 + 0x30) = uVar77;
        uVar77 = *(undefined8 *)(p_Var35 + 0x40);
        *(undefined8 *)(p_Var69 + 0x38) = *(undefined8 *)(p_Var35 + 0x38);
        *(undefined8 *)(p_Var69 + 0x40) = uVar77;
        uVar77 = *(undefined8 *)(p_Var35 + 0x50);
        *(undefined8 *)(p_Var69 + 0x48) = *(undefined8 *)(p_Var35 + 0x48);
        *(undefined8 *)(p_Var69 + 0x50) = uVar77;
        uVar77 = *(undefined8 *)(p_Var35 + 0x60);
        *(undefined8 *)(p_Var69 + 0x58) = *(undefined8 *)(p_Var35 + 0x58);
        *(undefined8 *)(p_Var69 + 0x60) = uVar77;
        uVar77 = *(undefined8 *)(p_Var35 + 0x70);
        *(undefined8 *)(p_Var69 + 0x68) = *(undefined8 *)(p_Var35 + 0x68);
        *(undefined8 *)(p_Var69 + 0x70) = uVar77;
        uVar77 = *(undefined8 *)(p_Var35 + 0x80);
        *(undefined8 *)(p_Var69 + 0x78) = *(undefined8 *)(p_Var35 + 0x78);
        *(undefined8 *)(p_Var69 + 0x80) = uVar77;
        uVar77 = *(undefined8 *)(p_Var35 + 0x89);
        *(undefined8 *)(p_Var69 + 0x81) = *(undefined8 *)(p_Var35 + 0x81);
        *(undefined8 *)(p_Var69 + 0x89) = uVar77;
      }
      for (p_Var35 = *(_Rb_tree_node_base **)((long)local_5a8 + 0xf8);
          p_Var35 != (_Rb_tree_node_base *)((long)local_5a8 + 0xe8);
          p_Var35 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var35)) {
        local_4cc = *(int *)(p_Var35 + 0x20) + iVar64;
        p_Var69 = local_138;
        p_Var40 = (_Rb_tree_node_base *)local_140;
        p_Var60 = (_Rb_tree_node_base *)local_140;
        if (local_138 == (_Rb_tree_node_base *)0x0) {
LAB_00106f48:
          local_278._0_8_ = &local_4cc;
          lVar42 = std::
                   _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
                   ::
                   _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int&&>,std::tuple<>>
                             (local_148,p_Var40,(_anonymous_namespace_ *)local_278);
          uVar77 = *(undefined8 *)(p_Var35 + 0x30);
          *(undefined8 *)(lVar42 + 0x28) = *(undefined8 *)(p_Var35 + 0x28);
          *(undefined8 *)(lVar42 + 0x30) = uVar77;
          uVar77 = *(undefined8 *)(p_Var35 + 0x40);
          *(undefined8 *)(lVar42 + 0x38) = *(undefined8 *)(p_Var35 + 0x38);
          *(undefined8 *)(lVar42 + 0x40) = uVar77;
          uVar77 = *(undefined8 *)(p_Var35 + 0x50);
          *(undefined8 *)(lVar42 + 0x48) = *(undefined8 *)(p_Var35 + 0x48);
          *(undefined8 *)(lVar42 + 0x50) = uVar77;
          uVar77 = *(undefined8 *)(p_Var35 + 0x60);
          *(undefined8 *)(lVar42 + 0x58) = *(undefined8 *)(p_Var35 + 0x58);
          *(undefined8 *)(lVar42 + 0x60) = uVar77;
          uVar77 = *(undefined8 *)(p_Var35 + 0x70);
          *(undefined8 *)(lVar42 + 0x68) = *(undefined8 *)(p_Var35 + 0x68);
          *(undefined8 *)(lVar42 + 0x70) = uVar77;
          uVar77 = *(undefined8 *)(p_Var35 + 0x80);
          *(undefined8 *)(lVar42 + 0x78) = *(undefined8 *)(p_Var35 + 0x78);
          *(undefined8 *)(lVar42 + 0x80) = uVar77;
          uVar77 = *(undefined8 *)(p_Var35 + 0x89);
          *(undefined8 *)(lVar42 + 0x81) = *(undefined8 *)(p_Var35 + 0x81);
          *(undefined8 *)(lVar42 + 0x89) = uVar77;
          local_4cc = *(int *)(p_Var35 + 0x20) + iVar64;
          if (local_138 != (_Rb_tree_node_base *)0x0) goto LAB_00106c0c;
LAB_00106c66:
          local_278._0_8_ = &local_4cc;
          p_Var40 = (_Rb_tree_node_base *)
                    std::
                    _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
                    ::
                    _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int&&>,std::tuple<>>
                              (local_148,p_Var60,(_anonymous_namespace_ *)local_278);
        }
        else {
          do {
            while( true ) {
              p_Var41 = p_Var69;
              if (*(int *)(p_Var41 + 0x20) < local_4cc) break;
              p_Var69 = *(_Rb_tree_node_base **)(p_Var41 + 0x10);
              p_Var40 = p_Var41;
              if (*(_Rb_tree_node_base **)(p_Var41 + 0x10) == (_Rb_tree_node_base *)0x0)
              goto LAB_00106ba0;
            }
            p_Var69 = *(_Rb_tree_node_base **)(p_Var41 + 0x18);
          } while (*(_Rb_tree_node_base **)(p_Var41 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_00106ba0:
          if ((p_Var40 == (_Rb_tree_node_base *)local_140) || (local_4cc < *(int *)(p_Var40 + 0x20))
             ) goto LAB_00106f48;
          uVar77 = *(undefined8 *)(p_Var35 + 0x30);
          *(undefined8 *)(p_Var40 + 0x28) = *(undefined8 *)(p_Var35 + 0x28);
          *(undefined8 *)(p_Var40 + 0x30) = uVar77;
          uVar77 = *(undefined8 *)(p_Var35 + 0x40);
          *(undefined8 *)(p_Var40 + 0x38) = *(undefined8 *)(p_Var35 + 0x38);
          *(undefined8 *)(p_Var40 + 0x40) = uVar77;
          uVar77 = *(undefined8 *)(p_Var35 + 0x50);
          *(undefined8 *)(p_Var40 + 0x48) = *(undefined8 *)(p_Var35 + 0x48);
          *(undefined8 *)(p_Var40 + 0x50) = uVar77;
          uVar77 = *(undefined8 *)(p_Var35 + 0x60);
          *(undefined8 *)(p_Var40 + 0x58) = *(undefined8 *)(p_Var35 + 0x58);
          *(undefined8 *)(p_Var40 + 0x60) = uVar77;
          uVar77 = *(undefined8 *)(p_Var35 + 0x70);
          *(undefined8 *)(p_Var40 + 0x68) = *(undefined8 *)(p_Var35 + 0x68);
          *(undefined8 *)(p_Var40 + 0x70) = uVar77;
          uVar77 = *(undefined8 *)(p_Var35 + 0x80);
          *(undefined8 *)(p_Var40 + 0x78) = *(undefined8 *)(p_Var35 + 0x78);
          *(undefined8 *)(p_Var40 + 0x80) = uVar77;
          uVar77 = *(undefined8 *)(p_Var35 + 0x89);
          *(undefined8 *)(p_Var40 + 0x81) = *(undefined8 *)(p_Var35 + 0x81);
          *(undefined8 *)(p_Var40 + 0x89) = uVar77;
          local_4cc = *(int *)(p_Var35 + 0x20) + iVar64;
LAB_00106c0c:
          p_Var69 = local_138;
          p_Var40 = (_Rb_tree_node_base *)local_140;
          do {
            while( true ) {
              p_Var41 = p_Var69;
              if (*(int *)(p_Var41 + 0x20) < local_4cc) break;
              p_Var69 = *(_Rb_tree_node_base **)(p_Var41 + 0x10);
              p_Var40 = p_Var41;
              if (*(_Rb_tree_node_base **)(p_Var41 + 0x10) == (_Rb_tree_node_base *)0x0)
              goto LAB_00106c38;
            }
            p_Var69 = *(_Rb_tree_node_base **)(p_Var41 + 0x18);
          } while (*(_Rb_tree_node_base **)(p_Var41 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_00106c38:
          if ((p_Var40 == (_Rb_tree_node_base *)local_140) ||
             (p_Var60 = p_Var40, local_4cc < *(int *)(p_Var40 + 0x20))) goto LAB_00106c66;
        }
        p_Var40[0x90] = (_Rb_tree_node_base)((byte)p_Var40[0x90] ^ param_3 == 1);
      }
      manifold::Manifold::Impl::SimplifyTopology();
      manifold::Manifold::Impl::RemoveUnreferencedVerts();
      manifold::ManifoldParams();
      manifold::Manifold::Impl::Finish();
      manifold::Manifold::Impl::IncrementMeshIDs();
      Manifold::Impl::Impl(param_1,(Impl *)&local_228);
      if (local_348 != (void *)0x0) {
        free(local_348);
      }
      if (local_368 != (undefined1 *)0x0) {
        free(local_368);
      }
      if (local_388 != (undefined1 *)0x0) {
        free(local_388);
      }
      if (local_3a8 != (undefined4 *)0x0) {
        free(local_3a8);
      }
      if (local_3c8 != (undefined4 *)0x0) {
        free(local_3c8);
      }
      std::
      _Rb_tree<std::pair<int,int>,std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,std::_Select1st<std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>
      ::_M_erase(local_298);
      std::
      _Rb_tree<int,std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,std::_Select1st<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>
      ::_M_erase(local_2c8);
      std::
      _Rb_tree<int,std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>,std::_Select1st<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<(anonymous_namespace)::EdgePos,std::allocator<(anonymous_namespace)::EdgePos>>>>>
      ::_M_erase(local_2f8);
      local_5a8 = local_4c8;
      local_5d8 = local_4a8;
      local_5c8 = local_488;
      local_5c0 = (long *)local_468;
      local_5a0 = (undefined1 (*) [16])local_448;
      local_598 = local_428;
      local_588 = local_408;
      local_5b8 = local_3e8;
    }
    if (local_b8 != (void *)0x0) {
      free(local_b8);
    }
    if (local_d0 != (void *)0x0) {
      free(local_d0);
    }
    if (local_e8 != (void *)0x0) {
      free(local_e8);
    }
    if (local_100 != (undefined8 *)0x0) {
      free(local_100);
    }
    p_Var35 = local_138;
    if (local_118 != (int *)0x0) {
      free(local_118);
      p_Var35 = local_138;
    }
    while (p_Var35 != (_Rb_tree_node_base *)0x0) {
      std::
      _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
      ::_M_erase(*(_Rb_tree_node **)(p_Var35 + 0x18));
      p_Var69 = *(_Rb_tree_node_base **)(p_Var35 + 0x10);
      operator_delete(p_Var35,0x98);
      p_Var35 = p_Var69;
    }
    if (local_160 != (undefined8 *)0x0) {
      free(local_160);
    }
    if (local_180 != (void *)0x0) {
      free(local_180);
    }
    if (local_198 != (void *)0x0) {
      free(local_198);
    }
    if (local_1b0 != (void *)0x0) {
      free(local_1b0);
    }
    if (local_1c8 != (void *)0x0) {
      free(local_1c8);
    }
    if (local_1e0 != (undefined1 (*) [16])0x0) {
      free(local_1e0);
    }
    if (local_5b8 != (void *)0x0) {
      free(local_5b8);
    }
    if (local_588 != (void *)0x0) {
      free(local_588);
    }
    if (local_598 != (void *)0x0) {
      free(local_598);
    }
    if (local_5a0 != (undefined1 (*) [16])0x0) {
      free(local_5a0);
    }
    if (local_5c0 != (long *)0x0) {
      free(local_5c0);
    }
    if (local_5c8 != (void *)0x0) {
      free(local_5c8);
    }
    if (local_5d8 != (void *)0x0) {
      free(local_5d8);
    }
  }
  else {
    pIVar72 = (Impl *)*param_2;
    iVar64 = 0;
    iVar70 = ((param_3 == 2) - 1) + (uint)(param_3 == 2);
    if (*(int *)(pIVar72 + 0x40) == 0) goto LAB_0010426b;
LAB_00104404:
    local_1e0 = (undefined1 (*) [16])0x0;
    local_168 = _LC20;
    local_130 = (_Rb_tree_node_base *)local_140;
    local_228 = _LC16;
    dStack_220 = _LC16;
    local_218 = _LC16;
    dStack_210 = _LC13;
    local_1c8 = (void *)0x0;
    local_208 = _LC13;
    dStack_200 = _LC13;
    local_1b0 = (void *)0x0;
    local_198 = (void *)0x0;
    local_1f8 = _LC19;
    dStack_1f0 = _LC19;
    local_1d8 = (undefined1  [16])0x0;
    local_1c0 = (undefined1  [16])0x0;
    local_1a8 = (undefined1  [16])0x0;
    local_190 = (undefined1  [16])0x0;
    local_178 = (undefined1  [16])0x0;
    local_158 = (undefined1  [16])0x0;
    local_110 = (undefined1  [16])0x0;
    local_f8 = (undefined1  [16])0x0;
    local_180 = (void *)0x0;
    local_160 = (undefined8 *)0x0;
    local_140[0] = 0;
    local_138 = (_Rb_tree_node_base *)0x0;
    local_120 = 0;
    local_118 = (int *)0x0;
    local_100 = (undefined8 *)0x0;
    local_e8 = (void *)0x0;
    local_1e8 = *(undefined4 *)(pIVar72 + 0x40);
    local_e0 = (undefined1  [16])0x0;
    local_d0 = (void *)0x0;
    local_b8 = (void *)0x0;
    local_c8 = (undefined1  [16])0x0;
    local_b0 = (undefined1  [16])0x0;
    local_128 = local_130;
    Manifold::Impl::Impl(param_1,(Impl *)&local_228);
    if (local_b8 != (void *)0x0) {
      free(local_b8);
    }
    if (local_d0 != (void *)0x0) {
      free(local_d0);
    }
    if (local_e8 != (void *)0x0) {
      free(local_e8);
    }
    if (local_100 != (undefined8 *)0x0) {
      free(local_100);
    }
    p_Var35 = local_138;
    if (local_118 != (int *)0x0) {
      free(local_118);
      p_Var35 = local_138;
    }
    while (p_Var35 != (_Rb_tree_node_base *)0x0) {
      std::
      _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
      ::_M_erase(*(_Rb_tree_node **)(p_Var35 + 0x18));
      p_Var69 = *(_Rb_tree_node_base **)(p_Var35 + 0x10);
      operator_delete(p_Var35,0x98);
      p_Var35 = p_Var69;
    }
LAB_00104627:
    if (local_160 != (undefined8 *)0x0) {
      free(local_160);
    }
    if (local_180 != (void *)0x0) {
      free(local_180);
    }
    if (local_198 != (void *)0x0) {
      free(local_198);
    }
    if (local_1b0 != (void *)0x0) {
      free(local_1b0);
    }
    local_5a8 = local_1e0;
    if (local_1c8 != (void *)0x0) {
      free(local_1c8);
      local_5a8 = local_1e0;
    }
  }
  if (local_5a8 != (undefined1 (*) [16])0x0) {
    free(local_5a8);
  }
LAB_00104693:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Rb_tree_node<std::pair<int const, manifold::Manifold::Impl::Relation> >* std::_Rb_tree<int,
   std::pair<int const, manifold::Manifold::Impl::Relation>, std::_Select1st<std::pair<int const,
   manifold::Manifold::Impl::Relation> >, std::less<int>, std::allocator<std::pair<int const,
   manifold::Manifold::Impl::Relation> > >::_M_copy<false, std::_Rb_tree<int, std::pair<int const,
   manifold::Manifold::Impl::Relation>, std::_Select1st<std::pair<int const,
   manifold::Manifold::Impl::Relation> >, std::less<int>, std::allocator<std::pair<int const,
   manifold::Manifold::Impl::Relation> > >::_Alloc_node>(std::_Rb_tree_node<std::pair<int const,
   manifold::Manifold::Impl::Relation> >*, std::_Rb_tree_node_base*, std::_Rb_tree<int,
   std::pair<int const, manifold::Manifold::Impl::Relation>, std::_Select1st<std::pair<int const,
   manifold::Manifold::Impl::Relation> >, std::less<int>, std::allocator<std::pair<int const,
   manifold::Manifold::Impl::Relation> > >::_Alloc_node&) [clone .isra.0] */

_Rb_tree_node *
std::
_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
::
_M_copy<false,std::_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>::_Alloc_node>
          (_Rb_tree_node *param_1,_Rb_tree_node_base *param_2,_Alloc_node *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  _Rb_tree_node_base *p_Var13;
  _Rb_tree_node_base *p_Var14;
  _Rb_tree_node *p_Var15;
  _Rb_tree_node_base *p_Var16;
  _Alloc_node *extraout_RDX;
  _Alloc_node *extraout_RDX_00;
  
  p_Var14 = (_Rb_tree_node_base *)operator_new(0x98);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  uVar8 = *(undefined8 *)(param_1 + 0x70);
  uVar9 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(p_Var14 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(p_Var14 + 0x28) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  uVar11 = *(undefined8 *)(param_1 + 0x80);
  uVar12 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(p_Var14 + 0x50) = uVar4;
  *(undefined8 *)(p_Var14 + 0x58) = uVar5;
  p_Var15 = *(_Rb_tree_node **)(param_1 + 0x18);
  *(undefined8 *)(p_Var14 + 0x30) = uVar2;
  *(undefined8 *)(p_Var14 + 0x38) = uVar10;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(p_Var14 + 0x60) = uVar6;
  *(undefined8 *)(p_Var14 + 0x68) = uVar7;
  *(undefined8 *)(p_Var14 + 0x40) = uVar2;
  *(undefined8 *)(p_Var14 + 0x48) = uVar4;
  *(undefined8 *)(p_Var14 + 0x70) = uVar8;
  *(undefined8 *)(p_Var14 + 0x78) = uVar9;
  *(undefined8 *)(p_Var14 + 0x80) = uVar11;
  *(undefined8 *)(p_Var14 + 0x88) = uVar12;
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(p_Var14 + 0x10) = 0;
  *(undefined8 *)(p_Var14 + 0x90) = uVar2;
  uVar1 = *(undefined4 *)param_1;
  *(undefined8 *)(p_Var14 + 0x18) = 0;
  *(undefined4 *)p_Var14 = uVar1;
  *(_Rb_tree_node_base **)(p_Var14 + 8) = param_2;
  if (p_Var15 != (_Rb_tree_node *)0x0) {
    p_Var15 = _M_copy<false,std::_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>::_Alloc_node>
                        (p_Var15,p_Var14,extraout_RDX);
    *(_Rb_tree_node **)(p_Var14 + 0x18) = p_Var15;
  }
  p_Var13 = p_Var14;
  for (puVar3 = *(undefined4 **)(param_1 + 0x10); puVar3 != (undefined4 *)0x0;
      puVar3 = *(undefined4 **)(puVar3 + 4)) {
    p_Var16 = (_Rb_tree_node_base *)operator_new(0x98);
    uVar2 = *(undefined8 *)(puVar3 + 10);
    *(undefined8 *)(p_Var16 + 0x20) = *(undefined8 *)(puVar3 + 8);
    *(undefined8 *)(p_Var16 + 0x28) = uVar2;
    uVar2 = *(undefined8 *)(puVar3 + 0xe);
    *(undefined8 *)(p_Var16 + 0x30) = *(undefined8 *)(puVar3 + 0xc);
    *(undefined8 *)(p_Var16 + 0x38) = uVar2;
    uVar2 = *(undefined8 *)(puVar3 + 0x12);
    *(undefined8 *)(p_Var16 + 0x40) = *(undefined8 *)(puVar3 + 0x10);
    *(undefined8 *)(p_Var16 + 0x48) = uVar2;
    uVar2 = *(undefined8 *)(puVar3 + 0x16);
    *(undefined8 *)(p_Var16 + 0x50) = *(undefined8 *)(puVar3 + 0x14);
    *(undefined8 *)(p_Var16 + 0x58) = uVar2;
    uVar2 = *(undefined8 *)(puVar3 + 0x1a);
    *(undefined8 *)(p_Var16 + 0x60) = *(undefined8 *)(puVar3 + 0x18);
    *(undefined8 *)(p_Var16 + 0x68) = uVar2;
    uVar2 = *(undefined8 *)(puVar3 + 0x1e);
    *(undefined8 *)(p_Var16 + 0x70) = *(undefined8 *)(puVar3 + 0x1c);
    *(undefined8 *)(p_Var16 + 0x78) = uVar2;
    uVar2 = *(undefined8 *)(puVar3 + 0x22);
    *(undefined8 *)(p_Var16 + 0x80) = *(undefined8 *)(puVar3 + 0x20);
    *(undefined8 *)(p_Var16 + 0x88) = uVar2;
    *(undefined8 *)(p_Var16 + 0x90) = *(undefined8 *)(puVar3 + 0x24);
    uVar1 = *puVar3;
    *(undefined8 *)(p_Var16 + 0x10) = 0;
    *(undefined8 *)(p_Var16 + 0x18) = 0;
    *(undefined4 *)p_Var16 = uVar1;
    *(_Rb_tree_node_base **)(p_Var13 + 0x10) = p_Var16;
    *(_Rb_tree_node_base **)(p_Var16 + 8) = p_Var13;
    if (*(_Rb_tree_node **)(puVar3 + 6) != (_Rb_tree_node *)0x0) {
      p_Var15 = _M_copy<false,std::_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>::_Alloc_node>
                          (*(_Rb_tree_node **)(puVar3 + 6),p_Var16,extraout_RDX_00);
      *(_Rb_tree_node **)(p_Var16 + 0x18) = p_Var15;
    }
    p_Var13 = p_Var16;
  }
  return (_Rb_tree_node *)p_Var14;
}



/* manifold::GetBarycentric(linalg::vec<double, 3> const&, linalg::mat<double, 3, 3> const&, double)
    */

manifold * __thiscall
manifold::GetBarycentric(manifold *this,vec *param_1,mat *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  int iVar9;
  int *piVar10;
  int *piVar11;
  double *pdVar12;
  char cVar13;
  long in_FS_OFFSET;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
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
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double local_a0;
  double local_98;
  double local_90;
  undefined1 local_38 [8];
  double dStack_30;
  double local_28;
  undefined8 local_20;
  undefined4 local_18;
  int local_14;
  long local_10;
  
  dVar18 = _LC5;
  local_20 = _LC4;
  local_a0 = *(double *)(param_2 + 0x18);
  dVar19 = *(double *)param_2;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = *(double *)(param_2 + 0x20);
  dVar20 = *(double *)(param_2 + 8);
  local_90 = *(double *)(param_2 + 0x28);
  dVar1 = *(double *)(param_2 + 0x10);
  dVar15 = local_a0 - dVar19;
  dVar2 = *(double *)(param_2 + 0x30);
  dVar3 = *(double *)(param_2 + 0x38);
  dVar25 = local_98 - dVar20;
  dVar4 = *(double *)(param_2 + 0x40);
  dVar35 = local_90 - dVar1;
  dVar23 = dVar19 - dVar2;
  dVar33 = dVar20 - dVar3;
  dVar34 = dVar1 - dVar4;
  dVar24 = dVar2 - local_a0;
  dVar22 = dVar3 - local_98;
  dVar21 = dVar4 - local_90;
  dVar26 = dVar25 * dVar25 + dVar15 * dVar15 + 0.0 + dVar35 * dVar35;
  dVar27 = dVar33 * dVar33 + dVar23 * dVar23 + 0.0 + dVar34 * dVar34;
  dVar16 = dVar22 * dVar22 + dVar24 * dVar24 + 0.0 + dVar21 * dVar21;
  if ((dVar16 <= dVar27) || (cVar13 = '\0', dVar16 <= dVar26)) {
    cVar13 = (dVar27 <= dVar26) + '\x01';
  }
  local_28 = 0.0;
  piVar11 = (int *)&local_20;
  dVar5 = *(double *)param_1;
  local_18 = 2;
  dVar6 = *(double *)(param_1 + 8);
  dVar14 = param_3 * param_3;
  dVar28 = dVar22 * dVar34 - dVar21 * dVar33;
  dVar29 = dVar21 * dVar23 - dVar24 * dVar34;
  dVar30 = dVar24 * dVar33 - dVar22 * dVar23;
  dVar7 = *(double *)(param_1 + 0x10);
  dVar17 = dVar29 * dVar29 + dVar28 * dVar28 + 0.0 + dVar30 * dVar30;
  _local_38 = (undefined1  [16])0x0;
  piVar10 = piVar11;
  do {
    iVar9 = *piVar10;
    dVar32 = dVar20;
    dVar31 = dVar19;
    dVar37 = dVar1;
    if ((iVar9 != 0) && (dVar32 = local_98, dVar31 = local_a0, dVar37 = local_90, iVar9 != 1)) {
      dVar32 = dVar3;
      dVar31 = dVar2;
      dVar37 = dVar4;
    }
    if ((dVar5 - dVar31) * (dVar5 - dVar31) + 0.0 + (dVar6 - dVar32) * (dVar6 - dVar32) +
        (dVar7 - dVar37) * (dVar7 - dVar37) < dVar14) {
      pdVar12 = (double *)local_38;
      if (iVar9 != 0) {
        pdVar12 = &local_28;
        if (iVar9 == 1) {
          pdVar12 = (double *)(local_38 + 8);
        }
      }
      *pdVar12 = _LC5;
      *(double *)(this + 0x10) = local_28;
      *(undefined1 (*) [8])this = local_38;
      *(double *)(this + 8) = dStack_30;
      goto LAB_00108135;
    }
    piVar10 = piVar10 + 1;
  } while (piVar10 != &local_14);
  if (cVar13 == '\0') {
    if (dVar16 < dVar14) goto LAB_00108122;
    iVar9 = 1;
    if (dVar17 <= dVar16 * dVar14) goto LAB_001081ab;
  }
  else if (cVar13 == '\x01') {
    if (dVar27 < dVar14) goto LAB_00108122;
    if (dVar17 <= dVar27 * dVar14) {
      iVar9 = 2;
      dVar21 = dVar34;
      dVar22 = dVar33;
      dVar24 = dVar23;
      local_a0 = dVar2;
      local_98 = dVar3;
      local_90 = dVar4;
      goto LAB_001081ab;
    }
  }
  else {
    if (dVar26 < dVar14) {
LAB_00108122:
      *(undefined8 *)(this + 0x10) = 0;
      *(double *)this = dVar18;
      *(undefined8 *)(this + 8) = 0;
      goto LAB_00108135;
    }
    if (dVar17 <= dVar26 * dVar14) {
      iVar9 = 0;
      dVar21 = dVar35;
      dVar22 = dVar25;
      dVar24 = dVar15;
      local_a0 = dVar19;
      local_98 = dVar20;
      local_90 = dVar1;
LAB_001081ab:
      dVar19 = (dVar5 - local_a0) * dVar24 + 0.0 + (dVar6 - local_98) * dVar22 +
               (dVar7 - local_90) * dVar21;
      if (cVar13 == '\0') {
        pdVar12 = (double *)local_38;
        dVar19 = dVar19 / dVar16;
      }
      else if (cVar13 == '\x01') {
        pdVar12 = (double *)(local_38 + 8);
        dVar19 = dVar19 / dVar27;
      }
      else {
        pdVar12 = &local_28;
        dVar19 = dVar19 / dVar26;
      }
      *pdVar12 = 0.0;
      dVar20 = _LC5 - dVar19;
      if (iVar9 == 0) {
        local_38 = (undefined1  [8])dVar20;
        pdVar12 = (double *)(local_38 + 8);
      }
      else if (iVar9 == 1) {
        dStack_30 = dVar20;
        pdVar12 = &local_28;
      }
      else {
        pdVar12 = (double *)local_38;
        local_28 = dVar20;
      }
      *pdVar12 = dVar19;
      *(double *)(this + 0x10) = local_28;
      *(undefined1 (*) [8])this = local_38;
      *(double *)(this + 8) = dStack_30;
      goto LAB_00108135;
    }
  }
  local_18 = 2;
  do {
    iVar9 = *piVar11;
    if (iVar9 == 0) {
      dVar31 = dVar5 - local_a0;
      dVar38 = dVar6 - local_98;
      dVar37 = dVar7 - local_90;
      dVar18 = dVar22;
      dVar17 = dVar21;
      dVar32 = dVar24;
    }
    else if (iVar9 == 1) {
      dVar31 = dVar5 - dVar2;
      dVar38 = dVar6 - dVar3;
      dVar37 = dVar7 - dVar4;
      dVar18 = dVar33;
      dVar17 = dVar34;
      dVar32 = dVar23;
    }
    else {
      dVar31 = dVar5 - dVar19;
      dVar38 = dVar6 - dVar20;
      dVar37 = dVar7 - dVar1;
      dVar18 = dVar25;
      dVar17 = dVar35;
      dVar32 = dVar15;
    }
    dVar36 = dVar18 * dVar37 - dVar38 * dVar17;
    dVar17 = dVar17 * dVar31 - dVar37 * dVar32;
    dVar18 = dVar32 * dVar38 - dVar31 * dVar18;
    dVar32 = dVar36 * dVar36 + 0.0 + dVar17 * dVar17 + dVar18 * dVar18;
    if (iVar9 == 0) {
      if (dVar16 * dVar14 <= dVar32) {
        pdVar12 = (double *)local_38;
        dVar31 = dVar36 * dVar28 + 0.0 + dVar17 * dVar29 + dVar18 * dVar30;
      }
      else {
        dVar31 = 0.0;
        pdVar12 = (double *)local_38;
      }
    }
    else if (iVar9 == 1) {
      if (dVar27 * dVar14 <= dVar32) {
        pdVar12 = (double *)(local_38 + 8);
        dVar31 = dVar36 * dVar28 + 0.0 + dVar17 * dVar29 + dVar18 * dVar30;
      }
      else {
        dVar31 = 0.0;
        pdVar12 = (double *)(local_38 + 8);
      }
    }
    else {
      dVar31 = 0.0;
      if (dVar26 * dVar14 <= dVar32) {
        dVar31 = dVar36 * dVar28 + 0.0 + dVar17 * dVar29 + dVar18 * dVar30;
      }
      pdVar12 = &local_28;
    }
    piVar11 = piVar11 + 1;
    *pdVar12 = dVar31;
  } while (&local_14 != piVar11);
  dVar19 = (double)local_38 + dStack_30 + local_28;
  local_28 = local_28 / dVar19;
  auVar8._8_8_ = dVar19;
  auVar8._0_8_ = dVar19;
  _local_38 = divpd(_local_38,auVar8);
  *(double *)(this + 0x10) = local_28;
  *(undefined1 (*) [16])this = _local_38;
LAB_00108135:
  local_18 = 2;
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* manifold::Manifold::Impl::Impl(manifold::Manifold::Impl&&) */

void __thiscall manifold::Manifold::Impl::Impl(Impl *this,Impl *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar3 = *(undefined8 *)param_1;
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x50) = 0;
  uVar11 = *(undefined8 *)(param_1 + 0x50);
  uVar12 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x48) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)this = uVar3;
  *(undefined8 *)(this + 8) = uVar4;
  *(undefined8 *)(this + 0x10) = uVar5;
  *(undefined8 *)(this + 0x18) = uVar6;
  *(undefined8 *)(this + 0x20) = uVar7;
  *(undefined8 *)(this + 0x28) = uVar8;
  *(undefined8 *)(this + 0x48) = uVar1;
  *(undefined8 *)(this + 0x30) = uVar9;
  *(undefined8 *)(this + 0x38) = uVar10;
  *(undefined8 *)(this + 0x50) = uVar11;
  *(undefined8 *)(this + 0x58) = uVar12;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined1 (*) [16])(param_1 + 0x50) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x68) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(this + 0x60) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined1 (*) [16])(param_1 + 0x68) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(this + 0x60) = uVar1;
  *(undefined8 *)(this + 0x78) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x68) = uVar3;
  *(undefined8 *)(this + 0x70) = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(this + 0x78) = uVar1;
  *(undefined8 *)(this + 0x80) = uVar3;
  *(undefined8 *)(this + 0x88) = uVar4;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined1 (*) [16])(param_1 + 0x80) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x90) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(this + 0x98) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined1 (*) [16])(param_1 + 0x98) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x90) = uVar1;
  *(undefined8 *)(this + 0xa8) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(this + 0x98) = uVar3;
  *(undefined8 *)(this + 0xa0) = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined1 (*) [16])(param_1 + 0xb0) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xb0) = uVar3;
  *(undefined8 *)(this + 0xb8) = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  uVar4 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(this + 200) = uVar1;
  lVar2 = *(long *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(this + 0xd0) = uVar3;
  *(undefined8 *)(this + 0xd8) = uVar4;
  *(undefined1 (*) [16])(param_1 + 0xd0) = (undefined1  [16])0x0;
  if (lVar2 == 0) {
    *(undefined4 *)(this + 0xe8) = 0;
    *(undefined8 *)(this + 0xf0) = 0;
    *(Impl **)(this + 0xf8) = this + 0xe8;
    *(Impl **)(this + 0x100) = this + 0xe8;
    *(undefined8 *)(this + 0x108) = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0xf8);
    *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
    uVar3 = *(undefined8 *)(param_1 + 0x100);
    *(long *)(this + 0xf0) = lVar2;
    *(undefined8 *)(this + 0xf8) = uVar1;
    *(undefined8 *)(this + 0x100) = uVar3;
    *(Impl **)(lVar2 + 8) = this + 0xe8;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(this + 0x108) = *(undefined8 *)(param_1 + 0x108);
    *(Impl **)(param_1 + 0xf8) = param_1 + 0xe8;
    *(Impl **)(param_1 + 0x100) = param_1 + 0xe8;
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  *(undefined8 *)(this + 0x118) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x118);
  uVar4 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(this + 0x110) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  *(undefined1 (*) [16])(param_1 + 0x118) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = uVar3;
  *(undefined8 *)(this + 0x120) = uVar4;
  *(undefined8 *)(this + 0x130) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x130);
  uVar4 = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x110) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  *(undefined1 (*) [16])(param_1 + 0x130) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = uVar3;
  *(undefined8 *)(this + 0x138) = uVar4;
  *(undefined8 *)(this + 0x148) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x148);
  uVar4 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x128) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  *(undefined1 (*) [16])(param_1 + 0x148) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(this + 0x140) = uVar1;
  *(undefined8 *)(this + 0x158) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x148) = uVar3;
  *(undefined8 *)(this + 0x150) = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0x160);
  uVar4 = *(undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(this + 0x158) = uVar1;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = uVar3;
  *(undefined8 *)(this + 0x168) = uVar4;
  *(undefined1 (*) [16])(param_1 + 0x160) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x170) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 *)(this + 0x178) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x178);
  uVar4 = *(undefined8 *)(param_1 + 0x180);
  *(undefined8 *)(this + 0x170) = uVar1;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = uVar3;
  *(undefined8 *)(this + 0x180) = uVar4;
  *(undefined1 (*) [16])(param_1 + 0x178) = (undefined1  [16])0x0;
  return;
}



/* manifold::Manifold::Impl::Impl(manifold::Manifold::Impl const&) */

void __thiscall manifold::Manifold::Impl::Impl(Impl *this,Impl *param_1)

{
  Impl *pIVar1;
  _Rb_tree_node_base *p_Var2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  _Rb_tree_node *p_Var7;
  undefined4 *__src;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  _Rb_tree_node *p_Var16;
  undefined4 *__ptr;
  undefined8 *puVar17;
  _Alloc_node *p_Var18;
  _Rb_tree_node *p_Var19;
  ulong uVar20;
  _Alloc_node *extraout_RDX;
  _Alloc_node *extraout_RDX_00;
  _Alloc_node *extraout_RDX_01;
  _Alloc_node *extraout_RDX_02;
  size_t sVar21;
  long in_FS_OFFSET;
  undefined8 *local_58;
  long local_50;
  long lStack_48;
  long local_40;
  
  pIVar1 = this + 0x48;
  uVar6 = *(undefined8 *)param_1;
  uVar9 = *(undefined8 *)(param_1 + 8);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x40);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  local_58 = (undefined8 *)0x0;
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  uVar15 = *(undefined8 *)(param_1 + 0x38);
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0x40) = uVar3;
  lVar4 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x48) = 0;
  puVar5 = *(undefined8 **)(param_1 + 0x48);
  *(undefined8 *)this = uVar6;
  *(undefined8 *)(this + 8) = uVar9;
  *(undefined8 *)(this + 0x10) = uVar10;
  *(undefined8 *)(this + 0x18) = uVar11;
  *(undefined8 *)(this + 0x20) = uVar12;
  *(undefined8 *)(this + 0x28) = uVar13;
  *(undefined8 *)(this + 0x30) = uVar14;
  *(undefined8 *)(this + 0x38) = uVar15;
  if (lVar4 == 0) {
    if (pIVar1 != (Impl *)&local_58) {
      puVar17 = (undefined8 *)0x0;
LAB_00108988:
      *(undefined8 **)(this + 0x48) = puVar17;
      *(long *)(this + 0x50) = lVar4;
      *(long *)(this + 0x58) = lVar4;
    }
  }
  else {
    sVar21 = lVar4 * 0x18;
    local_50 = lVar4;
    lStack_48 = lVar4;
    puVar17 = (undefined8 *)malloc(sVar21);
    local_58 = puVar17;
    if ((long)sVar21 < 0x19) {
      if (sVar21 != 0x18) {
        if (pIVar1 != (Impl *)&local_58) goto LAB_00108988;
        if (puVar17 != (undefined8 *)0x0) {
          free(puVar17);
        }
        goto LAB_00108990;
      }
      uVar6 = puVar5[1];
      *puVar17 = *puVar5;
      puVar17[1] = uVar6;
      puVar17[2] = puVar5[2];
    }
    else {
      puVar17 = (undefined8 *)memmove(puVar17,puVar5,sVar21);
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_00108988;
    free(puVar17);
  }
LAB_00108990:
  *(undefined8 *)(this + 0x60) = 0;
  pIVar1 = this + 0x60;
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  *(undefined1 (*) [16])(this + 0x68) = (undefined1  [16])0x0;
  lVar4 = *(long *)(param_1 + 0x68);
  local_58 = (undefined8 *)0x0;
  if (lVar4 == 0) {
    if (pIVar1 != (Impl *)&local_58) {
      puVar17 = (undefined8 *)0x0;
LAB_001089d3:
      *(undefined8 **)(this + 0x60) = puVar17;
      *(long *)(this + 0x68) = lVar4;
      *(long *)(this + 0x70) = lVar4;
    }
  }
  else {
    sVar21 = lVar4 * 0xc;
    local_50 = lVar4;
    lStack_48 = lVar4;
    puVar17 = (undefined8 *)malloc(sVar21);
    local_58 = puVar17;
    if ((long)sVar21 < 0xd) {
      if (sVar21 != 0xc) {
        if (pIVar1 != (Impl *)&local_58) goto LAB_001089d3;
        if (puVar17 != (undefined8 *)0x0) {
          free(puVar17);
        }
        goto LAB_001089db;
      }
      *puVar17 = *puVar5;
      *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar5 + 1);
    }
    else {
      puVar17 = (undefined8 *)memmove(puVar17,puVar5,sVar21);
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_001089d3;
    free(puVar17);
  }
LAB_001089db:
  *(undefined8 *)(this + 0x78) = 0;
  pIVar1 = this + 0x78;
  puVar5 = *(undefined8 **)(param_1 + 0x78);
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  lVar4 = *(long *)(param_1 + 0x80);
  local_58 = (undefined8 *)0x0;
  if (lVar4 == 0) {
    if (pIVar1 != (Impl *)&local_58) {
      puVar17 = (undefined8 *)0x0;
LAB_00108a24:
      *(undefined8 **)(this + 0x78) = puVar17;
      *(long *)(this + 0x80) = lVar4;
      *(long *)(this + 0x88) = lVar4;
    }
  }
  else {
    sVar21 = lVar4 * 0x18;
    local_50 = lVar4;
    lStack_48 = lVar4;
    puVar17 = (undefined8 *)malloc(sVar21);
    local_58 = puVar17;
    if ((long)sVar21 < 0x19) {
      if (sVar21 != 0x18) {
        if (pIVar1 != (Impl *)&local_58) goto LAB_00108a24;
        if (puVar17 != (undefined8 *)0x0) {
          free(puVar17);
        }
        goto LAB_00108a2f;
      }
      uVar6 = puVar5[1];
      *puVar17 = *puVar5;
      puVar17[1] = uVar6;
      puVar17[2] = puVar5[2];
    }
    else {
      puVar17 = (undefined8 *)memmove(puVar17,puVar5,sVar21);
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_00108a24;
    free(puVar17);
  }
LAB_00108a2f:
  pIVar1 = this + 0x90;
  *(undefined8 *)(this + 0x90) = 0;
  puVar5 = *(undefined8 **)(param_1 + 0x90);
  *(undefined1 (*) [16])(this + 0x98) = (undefined1  [16])0x0;
  lVar4 = *(long *)(param_1 + 0x98);
  local_58 = (undefined8 *)0x0;
  if (lVar4 == 0) {
    if (pIVar1 != (Impl *)&local_58) {
      puVar17 = (undefined8 *)0x0;
LAB_00108a81:
      *(undefined8 **)(this + 0x90) = puVar17;
      *(long *)(this + 0x98) = lVar4;
      *(long *)(this + 0xa0) = lVar4;
    }
  }
  else {
    sVar21 = lVar4 * 0x18;
    local_50 = lVar4;
    lStack_48 = lVar4;
    puVar17 = (undefined8 *)malloc(sVar21);
    local_58 = puVar17;
    if ((long)sVar21 < 0x19) {
      if (sVar21 != 0x18) {
        if (pIVar1 != (Impl *)&local_58) goto LAB_00108a81;
        if (puVar17 != (undefined8 *)0x0) {
          free(puVar17);
        }
        goto LAB_00108a8f;
      }
      uVar6 = puVar5[1];
      *puVar17 = *puVar5;
      puVar17[1] = uVar6;
      puVar17[2] = puVar5[2];
    }
    else {
      puVar17 = (undefined8 *)memmove(puVar17,puVar5,sVar21);
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_00108a81;
    free(puVar17);
  }
LAB_00108a8f:
  pIVar1 = this + 0xa8;
  *(undefined8 *)(this + 0xa8) = 0;
  puVar5 = *(undefined8 **)(param_1 + 0xa8);
  *(undefined1 (*) [16])(this + 0xb0) = (undefined1  [16])0x0;
  lVar4 = *(long *)(param_1 + 0xb0);
  local_58 = (undefined8 *)0x0;
  if (lVar4 == 0) {
    if (pIVar1 != (Impl *)&local_58) {
      puVar17 = (undefined8 *)0x0;
LAB_00108ae1:
      *(undefined8 **)(this + 0xa8) = puVar17;
      *(long *)(this + 0xb0) = lVar4;
      *(long *)(this + 0xb8) = lVar4;
    }
  }
  else {
    sVar21 = lVar4 * 0x20;
    local_50 = lVar4;
    lStack_48 = lVar4;
    puVar17 = (undefined8 *)malloc(sVar21);
    local_58 = puVar17;
    if ((long)sVar21 < 0x21) {
      if (sVar21 != 0x20) {
        if (pIVar1 != (Impl *)&local_58) goto LAB_00108ae1;
        if (puVar17 != (undefined8 *)0x0) {
          free(puVar17);
        }
        goto LAB_00108aef;
      }
      uVar6 = puVar5[1];
      *puVar17 = *puVar5;
      puVar17[1] = uVar6;
      uVar6 = puVar5[3];
      puVar17[2] = puVar5[2];
      puVar17[3] = uVar6;
    }
    else {
      puVar17 = (undefined8 *)memmove(puVar17,puVar5,sVar21);
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_00108ae1;
    free(puVar17);
  }
LAB_00108aef:
  uVar6 = *(undefined8 *)(param_1 + 0xc0);
  local_58 = (undefined8 *)0x0;
  pIVar1 = this + 200;
  *(undefined1 (*) [16])(this + 0xd0) = (undefined1  [16])0x0;
  lVar4 = *(long *)(param_1 + 0xd0);
  *(undefined8 *)(this + 200) = 0;
  puVar5 = *(undefined8 **)(param_1 + 200);
  *(undefined8 *)(this + 0xc0) = uVar6;
  local_50 = lVar4;
  lStack_48 = lVar4;
  if (lVar4 == 0) {
    p_Var18 = (_Alloc_node *)0x0;
    if (pIVar1 != (Impl *)&local_58) {
      puVar17 = (undefined8 *)0x0;
LAB_00108b4f:
      *(undefined8 **)(this + 200) = puVar17;
      *(long *)(this + 0xd0) = lVar4;
      *(long *)(this + 0xd8) = lVar4;
    }
  }
  else {
    sVar21 = lVar4 * 8;
    puVar17 = (undefined8 *)malloc(sVar21);
    local_58 = puVar17;
    if ((long)sVar21 < 9) {
      p_Var18 = extraout_RDX;
      if (sVar21 != 8) {
        if (pIVar1 != (Impl *)&local_58) goto LAB_00108b4f;
        if (puVar17 != (undefined8 *)0x0) {
          free(puVar17);
          p_Var18 = extraout_RDX_02;
        }
        goto LAB_00108b5d;
      }
      *puVar17 = *puVar5;
    }
    else {
      puVar17 = (undefined8 *)memmove(puVar17,puVar5,sVar21);
      p_Var18 = extraout_RDX_00;
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_00108b4f;
    free(puVar17);
    p_Var18 = extraout_RDX_01;
  }
LAB_00108b5d:
  *(undefined8 *)(this + 0xf0) = 0;
  p_Var7 = *(_Rb_tree_node **)(param_1 + 0xf0);
  p_Var2 = (_Rb_tree_node_base *)(this + 0xe8);
  *(undefined4 *)(this + 0xe8) = 0;
  *(_Rb_tree_node_base **)(this + 0xf8) = p_Var2;
  *(_Rb_tree_node_base **)(this + 0x100) = p_Var2;
  *(undefined8 *)(this + 0x108) = 0;
  if (p_Var7 != (_Rb_tree_node *)0x0) {
    p_Var16 = std::
              _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
              ::
              _M_copy<false,std::_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>::_Alloc_node>
                        (p_Var7,p_Var2,p_Var18);
    p_Var7 = p_Var16;
    do {
      p_Var19 = p_Var7;
      p_Var7 = *(_Rb_tree_node **)(p_Var19 + 0x10);
    } while (p_Var7 != (_Rb_tree_node *)0x0);
    *(_Rb_tree_node **)(this + 0xf8) = p_Var19;
    p_Var7 = p_Var16;
    do {
      p_Var19 = p_Var7;
      p_Var7 = *(_Rb_tree_node **)(p_Var19 + 0x18);
    } while (p_Var7 != (_Rb_tree_node *)0x0);
    uVar6 = *(undefined8 *)(param_1 + 0x108);
    *(_Rb_tree_node **)(this + 0x100) = p_Var19;
    *(_Rb_tree_node **)(this + 0xf0) = p_Var16;
    *(undefined8 *)(this + 0x108) = uVar6;
  }
  pIVar1 = this + 0x110;
  *(undefined8 *)(this + 0x110) = 0;
  puVar5 = *(undefined8 **)(param_1 + 0x110);
  *(undefined1 (*) [16])(this + 0x118) = (undefined1  [16])0x0;
  lVar4 = *(long *)(param_1 + 0x118);
  local_58 = (undefined8 *)0x0;
  if (lVar4 == 0) {
    if (pIVar1 != (Impl *)&local_58) {
      puVar17 = (undefined8 *)0x0;
LAB_00108c4a:
      *(undefined8 **)(this + 0x110) = puVar17;
      *(long *)(this + 0x118) = lVar4;
      *(long *)(this + 0x120) = lVar4;
    }
  }
  else {
    sVar21 = lVar4 * 0x10;
    local_50 = lVar4;
    lStack_48 = lVar4;
    puVar17 = (undefined8 *)malloc(sVar21);
    local_58 = puVar17;
    if ((long)sVar21 < 0x11) {
      if (sVar21 != 0x10) {
        if (pIVar1 != (Impl *)&local_58) goto LAB_00108c4a;
        if (puVar17 != (undefined8 *)0x0) {
          free(puVar17);
        }
        goto LAB_00108c58;
      }
      uVar6 = puVar5[1];
      *puVar17 = *puVar5;
      puVar17[1] = uVar6;
    }
    else {
      puVar17 = (undefined8 *)memmove(puVar17,puVar5,sVar21);
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_00108c4a;
    free(puVar17);
  }
LAB_00108c58:
  pIVar1 = this + 0x128;
  *(undefined8 *)(this + 0x128) = 0;
  puVar5 = *(undefined8 **)(param_1 + 0x128);
  *(undefined1 (*) [16])(this + 0x130) = (undefined1  [16])0x0;
  lVar4 = *(long *)(param_1 + 0x130);
  local_58 = (undefined8 *)0x0;
  if (lVar4 == 0) {
    if (pIVar1 != (Impl *)&local_58) {
      puVar17 = (undefined8 *)0x0;
LAB_00108caa:
      *(undefined8 **)(this + 0x128) = puVar17;
      *(long *)(this + 0x130) = lVar4;
      *(long *)(this + 0x138) = lVar4;
    }
  }
  else {
    sVar21 = lVar4 * 0xc;
    local_50 = lVar4;
    lStack_48 = lVar4;
    puVar17 = (undefined8 *)malloc(sVar21);
    local_58 = puVar17;
    if ((long)sVar21 < 0xd) {
      if (sVar21 != 0xc) {
        if (pIVar1 != (Impl *)&local_58) goto LAB_00108caa;
        if (puVar17 != (undefined8 *)0x0) {
          free(puVar17);
        }
        goto LAB_00108cb8;
      }
      *puVar17 = *puVar5;
      *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar5 + 1);
    }
    else {
      puVar17 = (undefined8 *)memmove(puVar17,puVar5,sVar21);
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_00108caa;
    free(puVar17);
  }
LAB_00108cb8:
  pIVar1 = this + 0x140;
  *(undefined8 *)(this + 0x140) = 0;
  puVar5 = *(undefined8 **)(param_1 + 0x140);
  *(undefined1 (*) [16])(this + 0x148) = (undefined1  [16])0x0;
  lVar4 = *(long *)(param_1 + 0x148);
  local_58 = (undefined8 *)0x0;
  if (lVar4 == 0) {
    if (pIVar1 != (Impl *)&local_58) {
      puVar17 = (undefined8 *)0x0;
LAB_00108d0a:
      *(undefined8 **)(this + 0x140) = puVar17;
      *(long *)(this + 0x148) = lVar4;
      *(long *)(this + 0x150) = lVar4;
    }
  }
  else {
    sVar21 = lVar4 * 0x30;
    local_50 = lVar4;
    lStack_48 = lVar4;
    puVar17 = (undefined8 *)malloc(sVar21);
    local_58 = puVar17;
    if ((long)sVar21 < 0x31) {
      if (sVar21 != 0x30) {
        if (pIVar1 != (Impl *)&local_58) goto LAB_00108d0a;
        if (puVar17 != (undefined8 *)0x0) {
          free(puVar17);
        }
        goto LAB_00108d18;
      }
      uVar6 = puVar5[1];
      *puVar17 = *puVar5;
      puVar17[1] = uVar6;
      uVar6 = puVar5[3];
      puVar17[2] = puVar5[2];
      puVar17[3] = uVar6;
      uVar6 = puVar5[5];
      puVar17[4] = puVar5[4];
      puVar17[5] = uVar6;
    }
    else {
      puVar17 = (undefined8 *)memmove(puVar17,puVar5,sVar21);
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_00108d0a;
    free(puVar17);
  }
LAB_00108d18:
  pIVar1 = this + 0x158;
  *(undefined8 *)(this + 0x158) = 0;
  __src = *(undefined4 **)(param_1 + 0x158);
  *(undefined1 (*) [16])(this + 0x160) = (undefined1  [16])0x0;
  lVar4 = *(long *)(param_1 + 0x160);
  local_58 = (undefined8 *)0x0;
  if (lVar4 == 0) {
    if (pIVar1 != (Impl *)&local_58) {
      __ptr = (undefined4 *)0x0;
LAB_00108d6a:
      *(undefined4 **)(this + 0x158) = __ptr;
      *(long *)(this + 0x160) = lVar4;
      *(long *)(this + 0x168) = lVar4;
    }
  }
  else {
    sVar21 = lVar4 * 4;
    local_50 = lVar4;
    lStack_48 = lVar4;
    __ptr = (undefined4 *)malloc(sVar21);
    local_58 = (undefined8 *)__ptr;
    if ((long)sVar21 < 5) {
      if (sVar21 != 4) {
        if (pIVar1 != (Impl *)&local_58) goto LAB_00108d6a;
        if (__ptr != (undefined4 *)0x0) {
          free(__ptr);
        }
        goto LAB_00108d78;
      }
      *__ptr = *__src;
    }
    else {
      __ptr = (undefined4 *)memmove(__ptr,__src,sVar21);
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_00108d6a;
    free(__ptr);
  }
LAB_00108d78:
  pIVar1 = this + 0x170;
  *(undefined8 *)(this + 0x170) = 0;
  lVar4 = *(long *)(param_1 + 0x170);
  *(undefined1 (*) [16])(this + 0x178) = (undefined1  [16])0x0;
  lVar8 = *(long *)(param_1 + 0x178);
  local_58 = (undefined8 *)0x0;
  local_50 = lVar8;
  lStack_48 = lVar8;
  if (lVar8 == 0) {
    if (pIVar1 != (Impl *)&local_58) goto LAB_00108dca;
  }
  else {
    sVar21 = lVar8 * 8;
    local_58 = (undefined8 *)malloc(sVar21);
    uVar20 = 0;
    if ((long)sVar21 < 1) {
      if (pIVar1 == (Impl *)&local_58) {
        if (local_58 == (undefined8 *)0x0) goto LAB_00108dd8;
        goto LAB_00108f03;
      }
    }
    else {
      do {
        *(undefined8 *)((long)local_58 + uVar20 * 8) = *(undefined8 *)(lVar4 + uVar20 * 8);
        uVar20 = uVar20 + 1;
      } while (uVar20 < (ulong)((long)sVar21 >> 3));
      if (pIVar1 == (Impl *)&local_58) {
LAB_00108f03:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          free(local_58);
          return;
        }
        goto LAB_0010941d;
      }
    }
LAB_00108dca:
    *(undefined8 **)(this + 0x170) = local_58;
    *(long *)(this + 0x178) = lVar8;
    *(long *)(this + 0x180) = lVar8;
  }
LAB_00108dd8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010941d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void manifold::gather<unsigned long*, linalg::vec<double, 3> const*, linalg::vec<double,
   3>*>(unsigned long*, unsigned long*, linalg::vec<double, 3> const*, linalg::vec<double, 3>*) */

void manifold::gather<unsigned_long*,linalg::vec<double,3>const*,linalg::vec<double,3>*>
               (ulong *param_1,ulong *param_2,vec *param_3,vec *param_4)

{
  vec *pvVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  
  if ((long)param_2 - (long)param_1 != 0) {
    puVar4 = (ulong *)(((long)param_2 - (long)param_1) + (long)param_1);
    do {
      uVar2 = *param_1;
      param_1 = param_1 + 1;
      pvVar1 = param_3 + uVar2 * 0x18;
      uVar3 = *(undefined8 *)(pvVar1 + 8);
      *(undefined8 *)param_4 = *(undefined8 *)pvVar1;
      *(undefined8 *)(param_4 + 8) = uVar3;
      *(undefined8 *)(param_4 + 0x10) = *(undefined8 *)(pvVar1 + 0x10);
      param_4 = param_4 + 0x18;
    } while (puVar4 != param_1);
  }
  return;
}



/* std::vector<int, std::allocator<int> >::_M_fill_insert(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, unsigned long, int const&) */

void __thiscall
std::vector<int,std::allocator<int>>::_M_fill_insert
          (vector<int,std::allocator<int>> *this,undefined4 *param_2,ulong param_3,
          undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 *__dest;
  undefined4 *puVar4;
  undefined4 *puVar5;
  size_t sVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  size_t __n;
  ulong local_50;
  
  if (param_3 == 0) {
    return;
  }
  puVar8 = *(undefined4 **)(this + 8);
  if (param_3 <= (ulong)(*(long *)(this + 0x10) - (long)puVar8 >> 2)) {
    uVar1 = *param_4;
    sVar6 = (long)puVar8 - (long)param_2;
    if (param_3 < (ulong)((long)sVar6 >> 2)) {
      sVar6 = param_3 * 4;
      puVar9 = puVar8 + -param_3;
      if ((long)sVar6 < 5) {
        puVar2 = puVar8;
        if (sVar6 == 4) {
          *puVar8 = *puVar9;
        }
      }
      else {
        memmove(puVar8,puVar9,sVar6);
        puVar2 = *(undefined4 **)(this + 8);
      }
      sVar6 = (long)puVar9 - (long)param_2;
      *(undefined4 **)(this + 8) = puVar2 + param_3;
      if ((long)sVar6 < 5) {
        if (sVar6 == 4) {
          puVar8[-1] = *param_2;
        }
      }
      else {
        memmove((void *)((long)puVar8 - sVar6),param_2,sVar6);
      }
      puVar8 = param_2 + param_3;
      if (param_2 == puVar8) {
        return;
      }
      puVar9 = param_2;
      if (((long)puVar8 - (long)param_2 & 4U) != 0) {
        *param_2 = uVar1;
        puVar9 = param_2 + 1;
        if (puVar8 == param_2 + 1) {
          return;
        }
      }
      do {
        *puVar9 = uVar1;
        puVar2 = puVar9 + 2;
        puVar9[1] = uVar1;
        puVar9 = puVar2;
      } while (puVar8 != puVar2);
      return;
    }
    lVar7 = param_3 - ((long)sVar6 >> 2);
    puVar9 = puVar8;
    if ((lVar7 != 0) && (puVar9 = puVar8 + lVar7, puVar8 != puVar9)) {
      puVar2 = puVar8;
      if (((int)puVar9 - (int)puVar8 & 4U) != 0) {
        puVar2 = puVar8 + 1;
        *puVar8 = uVar1;
        if (puVar9 == puVar2) goto LAB_00109518;
      }
      do {
        *puVar2 = uVar1;
        puVar4 = puVar2 + 2;
        puVar2[1] = uVar1;
        puVar2 = puVar4;
      } while (puVar9 != puVar4);
    }
LAB_00109518:
    *(undefined4 **)(this + 8) = puVar9;
    if ((long)sVar6 < 5) {
      if (sVar6 == 4) {
        *puVar9 = *param_2;
      }
    }
    else {
      memmove(puVar9,param_2,sVar6);
      puVar9 = *(undefined4 **)(this + 8);
    }
    *(size_t *)(this + 8) = (long)puVar9 + sVar6;
    if (puVar8 != param_2) {
      puVar9 = param_2;
      if (((long)puVar8 - (long)param_2 & 4U) != 0) {
        *param_2 = uVar1;
        puVar9 = param_2 + 1;
        if (puVar8 == param_2 + 1) {
          return;
        }
      }
      do {
        *puVar9 = uVar1;
        puVar2 = puVar9 + 2;
        puVar9[1] = uVar1;
        puVar9 = puVar2;
      } while (puVar8 != puVar2);
    }
    return;
  }
  puVar9 = *(undefined4 **)this;
  uVar3 = (long)puVar8 - (long)puVar9 >> 2;
  if (0x1fffffffffffffff - uVar3 < param_3) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_fill_insert");
  }
  sVar6 = (long)param_2 - (long)puVar9;
  if (uVar3 < param_3) {
    uVar3 = uVar3 + param_3;
    if (0x1fffffffffffffff < uVar3) {
      uVar3 = 0x1fffffffffffffff;
    }
    local_50 = uVar3 << 2;
  }
  else {
    uVar10 = uVar3 * 2;
    local_50 = 0x7ffffffffffffffc;
    if (uVar3 <= uVar10) {
      if (0x1fffffffffffffff < uVar10) {
        uVar10 = 0x1fffffffffffffff;
      }
      local_50 = uVar10 * 4;
    }
  }
  __dest = (undefined4 *)operator_new(local_50);
  puVar2 = (undefined4 *)((long)__dest + sVar6);
  uVar1 = *param_4;
  puVar4 = puVar2;
  if ((param_3 * 4 & 4) != 0) {
    *puVar2 = uVar1;
    puVar4 = puVar2 + 1;
    if (puVar2 + param_3 == puVar2 + 1) goto LAB_00109626;
  }
  do {
    *puVar4 = uVar1;
    puVar5 = puVar4 + 2;
    puVar4[1] = uVar1;
    puVar4 = puVar5;
  } while (puVar2 + param_3 != puVar5);
LAB_00109626:
  if ((long)sVar6 < 5) {
    if (sVar6 == 4) {
      *__dest = *puVar9;
    }
  }
  else {
    memmove(__dest,puVar9,sVar6);
  }
  __n = (long)puVar8 - (long)param_2;
  puVar8 = (undefined4 *)(param_3 * 4 + sVar6 + (long)__dest);
  if ((long)__n < 5) {
    if (__n == 4) {
      *puVar8 = *param_2;
    }
  }
  else {
    memcpy(puVar8,param_2,__n);
  }
  if (puVar9 != (undefined4 *)0x0) {
    operator_delete(puVar9,*(long *)(this + 0x10) - (long)puVar9);
  }
  *(undefined4 **)this = __dest;
  *(size_t *)(this + 8) = (long)puVar8 + __n;
  *(ulong *)(this + 0x10) = (long)__dest + local_50;
  return;
}



/* void std::vector<manifold::Halfedge, std::allocator<manifold::Halfedge>
   >::_M_realloc_insert<manifold::Halfedge>(__gnu_cxx::__normal_iterator<manifold::Halfedge*,
   std::vector<manifold::Halfedge, std::allocator<manifold::Halfedge> > >, manifold::Halfedge&&) */

void __thiscall
std::vector<manifold::Halfedge,std::allocator<manifold::Halfedge>>::
_M_realloc_insert<manifold::Halfedge>
          (vector<manifold::Halfedge,std::allocator<manifold::Halfedge>> *this,void *param_2,
          undefined8 *param_3)

{
  void *__dest;
  void *pvVar1;
  void *__src;
  long lVar2;
  ulong uVar3;
  void *__dest_00;
  ulong uVar4;
  size_t __n;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  lVar2 = (long)pvVar1 - (long)__src >> 2;
  uVar3 = lVar2 * -0x5555555555555555;
  if (uVar3 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    uVar4 = uVar3 + 1;
    if (0xfffffffffffffffe < uVar3) goto LAB_001098d0;
    if (0xaaaaaaaaaaaaaaa < uVar4) {
      uVar4 = 0xaaaaaaaaaaaaaaa;
    }
    uVar4 = uVar4 * 0xc;
LAB_001098da:
    __dest_00 = operator_new(uVar4);
    lVar2 = uVar4 + (long)__dest_00;
  }
  else {
    uVar4 = lVar2 * 0x5555555555555556;
    if (uVar4 < uVar3) {
LAB_001098d0:
      uVar4 = 0x7ffffffffffffff8;
      goto LAB_001098da;
    }
    if (uVar4 != 0) {
      if (0xaaaaaaaaaaaaaaa < uVar4) {
        uVar4 = 0xaaaaaaaaaaaaaaa;
      }
      uVar4 = uVar4 * 0xc;
      goto LAB_001098da;
    }
    lVar2 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 0xc);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined8 *)((long)__dest_00 + __n) = *param_3;
  *(undefined4 *)((long)__dest_00 + __n + 8) = *(undefined4 *)(param_3 + 1);
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_001098b3;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_001098b3:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar2;
  return;
}



/* void std::vector<std::pair<linalg::vec<int, 3>, int>, std::allocator<std::pair<linalg::vec<int,
   3>, int> > >::_M_realloc_insert<std::pair<linalg::vec<int, 3>, int>
   >(__gnu_cxx::__normal_iterator<std::pair<linalg::vec<int, 3>, int>*,
   std::vector<std::pair<linalg::vec<int, 3>, int>, std::allocator<std::pair<linalg::vec<int, 3>,
   int> > > >, std::pair<linalg::vec<int, 3>, int>&&) */

void __thiscall
std::vector<std::pair<linalg::vec<int,3>,int>,std::allocator<std::pair<linalg::vec<int,3>,int>>>::
_M_realloc_insert<std::pair<linalg::vec<int,3>,int>>
          (vector<std::pair<linalg::vec<int,3>,int>,std::allocator<std::pair<linalg::vec<int,3>,int>>>
           *this,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar5 = (long)puVar1 - (long)puVar2 >> 4;
  if (uVar5 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar8 = (undefined8 *)((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar5) goto LAB_00109aa8;
    uVar7 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 4;
LAB_00109ab2:
    puVar6 = (undefined8 *)operator_new(uVar7);
    uVar3 = param_3[1];
    lVar11 = uVar7 + (long)puVar6;
    puVar10 = puVar6 + 2;
    *(undefined8 *)((long)puVar6 + (long)puVar8) = *param_3;
    ((undefined8 *)((long)puVar6 + (long)puVar8))[1] = uVar3;
    if (param_2 != puVar2) {
LAB_00109a1a:
      puVar8 = puVar6;
      puVar9 = puVar2;
      do {
        puVar10 = puVar8;
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        puVar9 = puVar9 + 2;
        *puVar10 = uVar3;
        puVar10[1] = uVar4;
        puVar8 = puVar10 + 2;
      } while (puVar10 + 2 != (undefined8 *)(((long)param_2 - (long)puVar2) + (long)puVar6));
      puVar10 = puVar10 + 4;
    }
    puVar8 = puVar10;
    if (param_2 == puVar1) goto LAB_00109a6c;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_00109aa8:
      uVar7 = 0x7ffffffffffffff0;
      goto LAB_00109ab2;
    }
    if (uVar7 != 0) {
      if (0x7ffffffffffffff < uVar7) {
        uVar7 = 0x7ffffffffffffff;
      }
      uVar7 = uVar7 << 4;
      goto LAB_00109ab2;
    }
    uVar3 = param_3[1];
    lVar11 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x10;
    *puVar8 = *param_3;
    puVar8[1] = uVar3;
    if (param_2 != puVar2) goto LAB_00109a1a;
  }
  puVar8 = (undefined8 *)((long)puVar10 + ((long)puVar1 - (long)param_2));
  memcpy(puVar10,param_2,(long)puVar1 - (long)param_2);
LAB_00109a6c:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = lVar11;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__remove_if<int*, __gnu_cxx::__ops::_Iter_equals_val<int const> >(int*, int*,
   __gnu_cxx::__ops::_Iter_equals_val<int const>) */

int * std::__remove_if<int*,__gnu_cxx::__ops::_Iter_equals_val<int_const>>
                (int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = (long)param_2 - (long)param_1;
  if (0 < lVar2 >> 4) {
    iVar1 = *param_3;
    piVar3 = param_1 + (lVar2 >> 4) * 4;
    do {
      if (*param_1 == iVar1) goto LAB_00109b8b;
      if (iVar1 == param_1[1]) {
        param_1 = param_1 + 1;
        goto LAB_00109b8b;
      }
      if (iVar1 == param_1[2]) {
        param_1 = param_1 + 2;
        goto LAB_00109b8b;
      }
      if (iVar1 == param_1[3]) {
        param_1 = param_1 + 3;
        goto LAB_00109b8b;
      }
      param_1 = param_1 + 4;
    } while (piVar3 != param_1);
    lVar2 = (long)param_2 - (long)param_1;
  }
  lVar2 = lVar2 >> 2;
  if (lVar2 == 2) {
    iVar1 = *param_3;
LAB_00109beb:
    if (*param_1 == iVar1) goto LAB_00109b8b;
    param_1 = param_1 + 1;
  }
  else {
    if (lVar2 == 3) {
      iVar1 = *param_3;
      if (*param_1 == iVar1) goto LAB_00109b8b;
      param_1 = param_1 + 1;
      goto LAB_00109beb;
    }
    if (lVar2 != 1) {
      return param_2;
    }
    iVar1 = *param_3;
  }
  if (*param_1 != iVar1) {
    return param_2;
  }
LAB_00109b8b:
  if ((param_2 != param_1) && (piVar3 = param_1 + 1, param_2 != piVar3)) {
    do {
      if (*piVar3 != *param_3) {
        *param_1 = *piVar3;
        param_1 = param_1 + 1;
      }
      piVar3 = piVar3 + 1;
    } while (param_2 != piVar3);
    return param_1;
  }
  return param_1;
}



/* WARNING: Control flow encountered bad instruction data */
/* manifold::Manifold::Impl::Impl(manifold::Manifold::Impl&&) */

void __thiscall manifold::Manifold::Impl::Impl(Impl *this,Impl *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* manifold::Manifold::Impl::Impl(manifold::Manifold::Impl const&) */

void __thiscall manifold::Manifold::Impl::Impl(Impl *this,Impl *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



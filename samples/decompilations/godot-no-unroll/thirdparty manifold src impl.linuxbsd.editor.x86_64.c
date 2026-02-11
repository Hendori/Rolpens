
/* (anonymous namespace)::AtomicAddVec3(linalg::vec<double, 3>&, linalg::vec<double, 3> const&) */

void (anonymous_namespace)::AtomicAddVec3(vec *param_1,vec *param_2)

{
  int iVar1;
  double dVar2;
  vec *pvVar3;
  int *piVar4;
  long in_FS_OFFSET;
  bool bVar5;
  double dVar6;
  double local_38;
  undefined8 local_30;
  undefined4 local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar4 = (int *)&local_30;
  local_28 = 2;
  local_30 = _LC9;
LAB_00100042:
  iVar1 = *piVar4;
  pvVar3 = param_1;
  if ((iVar1 != 0) && (pvVar3 = param_1 + 8, iVar1 != 1)) {
    pvVar3 = param_1 + 0x10;
  }
  dVar2 = *(double *)pvVar3;
  local_38 = dVar2;
  if (iVar1 != 0) goto LAB_00100085;
  do {
    dVar6 = *(double *)param_2;
    while( true ) {
      LOCK();
      dVar2 = *(double *)pvVar3;
      bVar5 = local_38 == dVar2;
      if (bVar5) {
        *(double *)pvVar3 = dVar6 + local_38;
        dVar2 = local_38;
      }
      UNLOCK();
      if (bVar5) {
        piVar4 = piVar4 + 1;
        if (piVar4 == &local_24) {
          if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        goto LAB_00100042;
      }
      local_38 = dVar2;
      if (iVar1 == 0) break;
LAB_00100085:
      local_38 = dVar2;
      if (iVar1 == 1) {
        dVar6 = *(double *)(param_2 + 8);
      }
      else {
        dVar6 = *(double *)(param_2 + 0x10);
      }
    }
  } while( true );
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
    if (iVar5 <= iVar6) goto LAB_00100108;
  }
  if (*(_Rb_tree_node_base **)(this + 0x18) == p_Var2) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = p_Var2;
    return auVar1 << 0x40;
  }
  p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var2);
  iVar5 = *(int *)(p_Var4 + 0x20);
LAB_00100108:
  p_Var3 = (_Rb_tree_node_base *)0x0;
  if (iVar5 < iVar6) {
    p_Var4 = p_Var3;
    p_Var3 = p_Var2;
  }
  auVar7._8_8_ = p_Var3;
  auVar7._0_8_ = p_Var4;
  return auVar7;
}



/* std::_Function_handler<void (manifold::VecView<linalg::vec<double, 3> >),
   manifold::Manifold::Impl::Warp(std::function<void (linalg::vec<double,
   3>&)>)::{lambda(manifold::VecView<linalg::vec<double, 3> >)#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(manifold::VecView<linalg::vec<double,3>>),manifold::Manifold::Impl::Warp(std::function<void(linalg::vec<double,3>&)>)::{lambda(manifold::VecView<linalg::vec<double,3>>)#1}>
::_M_manager(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = param_2;
    }
    else if (param_3 == 2) {
      *param_1 = *param_2;
    }
    return 0;
  }
  *param_1 = &manifold::Manifold::Impl::Warp(std::function<void(linalg::vec<double,3>&)>)::
              {lambda(manifold::VecView<linalg::vec<double,3>>)#1}::typeinfo;
  return 0;
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
        if ((int)param_3 <= *(int *)(p_Var2 + 0x20)) goto LAB_00100237;
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
      if (*(_Rb_tree_node_base **)(this + 0x20) == param_2) goto LAB_00100269;
      p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
      if (*(int *)(p_Var2 + 0x20) <= (int)param_3) goto LAB_00100237;
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
LAB_00100237:
    auVar5 = _M_get_insert_unique_pos(this,(int *)(ulong)param_3);
    return auVar5;
  }
LAB_00100269:
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__upper_bound<int*, int,
   __gnu_cxx::__ops::_Val_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,
   3> > const&)::{lambda(int const&, int const&)#1}> >(int*, int*, int const&,
   __gnu_cxx::__ops::_Val_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,
   3> > const&)::{lambda(int const&, int const&)#1}>) [clone .isra.0] */

int * std::
      __upper_bound<int*,int,__gnu_cxx::__ops::_Val_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
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
      if (*(ulong *)(*param_4 + (long)param_3 * 8) < *(ulong *)(*param_4 + (long)param_1[lVar1] * 8)
         ) break;
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
   __gnu_cxx::__ops::_Iter_comp_val<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,
   3> > const&)::{lambda(int const&, int const&)#1}> >(int*, int*, int const&,
   __gnu_cxx::__ops::_Iter_comp_val<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,
   3> > const&)::{lambda(int const&, int const&)#1}>) [clone .isra.0] */

int * std::
      __lower_bound<int*,int,__gnu_cxx::__ops::_Iter_comp_val<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
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
      if (*(ulong *)(*param_4 + (long)param_3 * 8) <=
          *(ulong *)(*param_4 + (long)param_1[lVar1] * 8)) break;
      param_1 = param_1 + lVar1 + 1;
      lVar2 = (lVar2 - lVar1) + -1;
      if (lVar2 < 1) {
        return param_1;
      }
    }
  } while( true );
}



/* std::_Rb_tree_node<std::pair<int const, manifold::Manifold::Impl::Relation> >* std::_Rb_tree<int,
   std::pair<int const, manifold::Manifold::Impl::Relation>, std::_Select1st<std::pair<int const,
   manifold::Manifold::Impl::Relation> >, std::less<int>, std::allocator<std::pair<int const,
   manifold::Manifold::Impl::Relation> > >::_M_copy<false, std::_Rb_tree<int, std::pair<int const,
   manifold::Manifold::Impl::Relation>, std::_Select1st<std::pair<int const,
   manifold::Manifold::Impl::Relation> >, std::less<int>, std::allocator<std::pair<int const,
   manifold::Manifold::Impl::Relation> > >::_Reuse_or_alloc_node>(std::_Rb_tree_node<std::pair<int
   const, manifold::Manifold::Impl::Relation> >*, std::_Rb_tree_node_base*, std::_Rb_tree<int,
   std::pair<int const, manifold::Manifold::Impl::Relation>, std::_Select1st<std::pair<int const,
   manifold::Manifold::Impl::Relation> >, std::less<int>, std::allocator<std::pair<int const,
   manifold::Manifold::Impl::Relation> > >::_Reuse_or_alloc_node&) [clone .isra.0] */

_Rb_tree_node *
std::
_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
::
_M_copy<false,std::_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>::_Reuse_or_alloc_node>
          (_Rb_tree_node *param_1,_Rb_tree_node_base *param_2,_Reuse_or_alloc_node *param_3)

{
  undefined4 uVar1;
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
  _Rb_tree_node *p_Var13;
  _Rb_tree_node_base *p_Var14;
  _Rb_tree_node_base *p_Var15;
  long lVar16;
  _Rb_tree_node_base *p_Var17;
  undefined4 *puVar18;
  _Rb_tree_node_base *p_Var19;
  
  p_Var15 = *(_Rb_tree_node_base **)(param_3 + 8);
  if (p_Var15 == (_Rb_tree_node_base *)0x0) {
    p_Var15 = (_Rb_tree_node_base *)operator_new(0x98);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    uVar8 = *(undefined8 *)(param_1 + 0x50);
    uVar9 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(p_Var15 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(p_Var15 + 0x28) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    uVar10 = *(undefined8 *)(param_1 + 0x68);
    uVar11 = *(undefined8 *)(param_1 + 0x70);
    uVar12 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(p_Var15 + 0x30) = uVar4;
    *(undefined8 *)(p_Var15 + 0x38) = uVar5;
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(p_Var15 + 0x40) = uVar6;
    *(undefined8 *)(p_Var15 + 0x48) = uVar7;
    *(undefined8 *)(p_Var15 + 0x50) = uVar8;
    *(undefined8 *)(p_Var15 + 0x58) = uVar9;
    *(undefined8 *)(p_Var15 + 0x60) = uVar3;
    *(undefined8 *)(p_Var15 + 0x68) = uVar10;
    *(undefined8 *)(p_Var15 + 0x70) = uVar11;
    *(undefined8 *)(p_Var15 + 0x78) = uVar12;
    *(undefined8 *)(p_Var15 + 0x80) = uVar4;
    *(undefined8 *)(p_Var15 + 0x88) = uVar5;
    *(undefined8 *)(p_Var15 + 0x90) = *(undefined8 *)(param_1 + 0x90);
  }
  else {
    lVar2 = *(long *)(p_Var15 + 8);
    *(long *)(param_3 + 8) = lVar2;
    if (lVar2 == 0) {
      *(undefined8 *)param_3 = 0;
    }
    else if (p_Var15 == *(_Rb_tree_node_base **)(lVar2 + 0x18)) {
      lVar16 = *(long *)(lVar2 + 0x10);
      *(undefined8 *)(lVar2 + 0x18) = 0;
      if (lVar16 != 0) {
        lVar2 = *(long *)(lVar16 + 0x18);
        *(long *)(param_3 + 8) = lVar16;
        if (lVar2 != 0) {
          do {
            lVar16 = lVar2;
            lVar2 = *(long *)(lVar16 + 0x18);
          } while (*(long *)(lVar16 + 0x18) != 0);
          *(long *)(param_3 + 8) = lVar16;
        }
        if (*(long *)(lVar16 + 0x10) != 0) {
          *(long *)(param_3 + 8) = *(long *)(lVar16 + 0x10);
        }
      }
    }
    else {
      *(undefined8 *)(lVar2 + 0x10) = 0;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(p_Var15 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(p_Var15 + 0x28) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(p_Var15 + 0x30) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(p_Var15 + 0x38) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(p_Var15 + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(p_Var15 + 0x48) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(p_Var15 + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(p_Var15 + 0x58) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(p_Var15 + 0x60) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(p_Var15 + 0x68) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(p_Var15 + 0x70) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(p_Var15 + 0x78) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(p_Var15 + 0x80) = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(p_Var15 + 0x88) = uVar3;
    *(undefined8 *)(p_Var15 + 0x90) = *(undefined8 *)(param_1 + 0x90);
  }
  uVar1 = *(undefined4 *)param_1;
  *(_Rb_tree_node_base **)(p_Var15 + 8) = param_2;
  *(undefined8 *)(p_Var15 + 0x10) = 0;
  *(undefined8 *)(p_Var15 + 0x18) = 0;
  p_Var13 = *(_Rb_tree_node **)(param_1 + 0x18);
  *(undefined4 *)p_Var15 = uVar1;
  if (p_Var13 != (_Rb_tree_node *)0x0) {
    p_Var13 = _M_copy<false,std::_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>::_Reuse_or_alloc_node>
                        (p_Var13,p_Var15,param_3);
    *(_Rb_tree_node **)(p_Var15 + 0x18) = p_Var13;
  }
  puVar18 = *(undefined4 **)(param_1 + 0x10);
  if (puVar18 != (undefined4 *)0x0) {
    p_Var17 = *(_Rb_tree_node_base **)(param_3 + 8);
    p_Var19 = p_Var15;
    if (p_Var17 == (_Rb_tree_node_base *)0x0) goto LAB_001004fb;
    do {
      lVar2 = *(long *)(p_Var17 + 8);
      *(long *)(param_3 + 8) = lVar2;
      if (lVar2 == 0) {
        *(undefined8 *)param_3 = 0;
      }
      else if (p_Var17 == *(_Rb_tree_node_base **)(lVar2 + 0x18)) {
        lVar16 = *(long *)(lVar2 + 0x10);
        *(undefined8 *)(lVar2 + 0x18) = 0;
        if (lVar16 != 0) {
          lVar2 = *(long *)(lVar16 + 0x18);
          *(long *)(param_3 + 8) = lVar16;
          if (lVar2 != 0) {
            do {
              lVar16 = lVar2;
              lVar2 = *(long *)(lVar16 + 0x18);
            } while (*(long *)(lVar16 + 0x18) != 0);
            *(long *)(param_3 + 8) = lVar16;
          }
          if (*(long *)(lVar16 + 0x10) != 0) {
            *(long *)(param_3 + 8) = *(long *)(lVar16 + 0x10);
          }
        }
      }
      else {
        *(undefined8 *)(lVar2 + 0x10) = 0;
      }
      uVar3 = *(undefined8 *)(puVar18 + 10);
      *(undefined8 *)(p_Var17 + 0x20) = *(undefined8 *)(puVar18 + 8);
      *(undefined8 *)(p_Var17 + 0x28) = uVar3;
      uVar3 = *(undefined8 *)(puVar18 + 0xe);
      *(undefined8 *)(p_Var17 + 0x30) = *(undefined8 *)(puVar18 + 0xc);
      *(undefined8 *)(p_Var17 + 0x38) = uVar3;
      uVar3 = *(undefined8 *)(puVar18 + 0x12);
      *(undefined8 *)(p_Var17 + 0x40) = *(undefined8 *)(puVar18 + 0x10);
      *(undefined8 *)(p_Var17 + 0x48) = uVar3;
      uVar3 = *(undefined8 *)(puVar18 + 0x16);
      *(undefined8 *)(p_Var17 + 0x50) = *(undefined8 *)(puVar18 + 0x14);
      *(undefined8 *)(p_Var17 + 0x58) = uVar3;
      uVar3 = *(undefined8 *)(puVar18 + 0x1a);
      *(undefined8 *)(p_Var17 + 0x60) = *(undefined8 *)(puVar18 + 0x18);
      *(undefined8 *)(p_Var17 + 0x68) = uVar3;
      uVar3 = *(undefined8 *)(puVar18 + 0x1e);
      *(undefined8 *)(p_Var17 + 0x70) = *(undefined8 *)(puVar18 + 0x1c);
      *(undefined8 *)(p_Var17 + 0x78) = uVar3;
      uVar3 = *(undefined8 *)(puVar18 + 0x22);
      *(undefined8 *)(p_Var17 + 0x80) = *(undefined8 *)(puVar18 + 0x20);
      *(undefined8 *)(p_Var17 + 0x88) = uVar3;
      *(undefined8 *)(p_Var17 + 0x90) = *(undefined8 *)(puVar18 + 0x24);
      p_Var14 = p_Var17;
      while( true ) {
        uVar1 = *puVar18;
        *(undefined8 *)(p_Var14 + 0x10) = 0;
        *(undefined8 *)(p_Var14 + 0x18) = 0;
        *(undefined4 *)p_Var14 = uVar1;
        *(_Rb_tree_node_base **)(p_Var19 + 0x10) = p_Var14;
        *(_Rb_tree_node_base **)(p_Var14 + 8) = p_Var19;
        if (*(_Rb_tree_node **)(puVar18 + 6) != (_Rb_tree_node *)0x0) {
          p_Var13 = _M_copy<false,std::_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>::_Reuse_or_alloc_node>
                              (*(_Rb_tree_node **)(puVar18 + 6),p_Var14,param_3);
          *(_Rb_tree_node **)(p_Var14 + 0x18) = p_Var13;
        }
        puVar18 = *(undefined4 **)(puVar18 + 4);
        if (puVar18 == (undefined4 *)0x0) {
          return (_Rb_tree_node *)p_Var15;
        }
        p_Var17 = *(_Rb_tree_node_base **)(param_3 + 8);
        p_Var19 = p_Var14;
        if (p_Var17 != (_Rb_tree_node_base *)0x0) break;
LAB_001004fb:
        p_Var14 = (_Rb_tree_node_base *)operator_new(0x98);
        uVar3 = *(undefined8 *)(puVar18 + 10);
        *(undefined8 *)(p_Var14 + 0x20) = *(undefined8 *)(puVar18 + 8);
        *(undefined8 *)(p_Var14 + 0x28) = uVar3;
        uVar3 = *(undefined8 *)(puVar18 + 0xe);
        *(undefined8 *)(p_Var14 + 0x30) = *(undefined8 *)(puVar18 + 0xc);
        *(undefined8 *)(p_Var14 + 0x38) = uVar3;
        uVar3 = *(undefined8 *)(puVar18 + 0x12);
        *(undefined8 *)(p_Var14 + 0x40) = *(undefined8 *)(puVar18 + 0x10);
        *(undefined8 *)(p_Var14 + 0x48) = uVar3;
        uVar3 = *(undefined8 *)(puVar18 + 0x16);
        *(undefined8 *)(p_Var14 + 0x50) = *(undefined8 *)(puVar18 + 0x14);
        *(undefined8 *)(p_Var14 + 0x58) = uVar3;
        uVar3 = *(undefined8 *)(puVar18 + 0x1a);
        *(undefined8 *)(p_Var14 + 0x60) = *(undefined8 *)(puVar18 + 0x18);
        *(undefined8 *)(p_Var14 + 0x68) = uVar3;
        uVar3 = *(undefined8 *)(puVar18 + 0x1e);
        *(undefined8 *)(p_Var14 + 0x70) = *(undefined8 *)(puVar18 + 0x1c);
        *(undefined8 *)(p_Var14 + 0x78) = uVar3;
        uVar3 = *(undefined8 *)(puVar18 + 0x22);
        *(undefined8 *)(p_Var14 + 0x80) = *(undefined8 *)(puVar18 + 0x20);
        *(undefined8 *)(p_Var14 + 0x88) = uVar3;
        *(undefined8 *)(p_Var14 + 0x90) = *(undefined8 *)(puVar18 + 0x24);
      }
    } while( true );
  }
  return (_Rb_tree_node *)p_Var15;
}



/* std::_Function_handler<void (manifold::VecView<linalg::vec<double, 3> >),
   manifold::Manifold::Impl::Warp(std::function<void (linalg::vec<double,
   3>&)>)::{lambda(manifold::VecView<linalg::vec<double, 3> >)#1}>::_M_invoke(std::_Any_data const&,
   manifold::VecView<linalg::vec<double, 3> >&&) */

void std::
     _Function_handler<void(manifold::VecView<linalg::vec<double,3>>),manifold::Manifold::Impl::Warp(std::function<void(linalg::vec<double,3>&)>)::{lambda(manifold::VecView<linalg::vec<double,3>>)#1}>
     ::_M_invoke(_Any_data *param_1,VecView *param_2)

{
  code *pcVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined1 local_98 [16];
  code *local_88;
  code *pcStack_80;
  undefined1 local_78 [16];
  code *local_68;
  code *local_60;
  undefined1 local_58 [16];
  code *local_48;
  code *pcStack_40;
  long local_30;
  
  lVar4 = *(long *)param_1;
  lVar3 = *(long *)param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = *(long *)(param_2 + 8);
  local_98 = (undefined1  [16])0x0;
  local_88 = (code *)0x0;
  pcStack_80 = (code *)0x0;
  if (*(code **)(lVar4 + 0x10) == (code *)0x0) {
    local_58 = (undefined1  [16])0x0;
    local_48 = (code *)0x0;
    lVar5 = lVar3 + lVar5 * 0x18;
    pcStack_40 = (code *)0x0;
    pcVar2 = pcStack_40;
    pcStack_40 = (code *)0x0;
    if (lVar3 != lVar5) {
LAB_00100760:
      local_88 = local_48;
      pcStack_80 = pcStack_40;
      do {
        if (local_48 == (code *)0x0) goto LAB_0010084f;
        lVar4 = lVar3 + 0x18;
        (*pcStack_40)(local_58,lVar3);
        lVar3 = lVar4;
      } while (lVar4 != lVar5);
      goto LAB_0010078c;
    }
  }
  else {
    (**(code **)(lVar4 + 0x10))(local_98,lVar4,2);
    local_88 = *(code **)(lVar4 + 0x10);
    pcStack_80 = *(code **)(lVar4 + 0x18);
    lVar5 = lVar3 + lVar5 * 0x18;
    local_48 = (code *)0x0;
    pcStack_40 = (code *)0x0;
    local_58 = (undefined1  [16])0x0;
    if (*(code **)(lVar4 + 0x10) == (code *)0x0) {
      pcVar2 = pcStack_40;
      if (lVar3 != lVar5) {
LAB_0010084f:
        std::__throw_bad_function_call();
        goto LAB_00100854;
      }
    }
    else {
      (**(code **)(lVar4 + 0x10))(local_58,local_98,2);
      local_48 = local_88;
      local_48 = local_88;
      pcStack_40 = pcStack_80;
      if (lVar3 != lVar5) goto LAB_00100760;
LAB_0010078c:
      pcVar1 = local_48;
      local_68 = (code *)0x0;
      local_78 = (undefined1  [16])0x0;
      local_60 = pcStack_40;
      pcVar2 = pcStack_40;
      if (local_48 != (code *)0x0) {
        local_48 = (code *)0x0;
        pcStack_40 = (code *)0x0;
        local_78 = local_58;
        local_68 = pcVar1;
        (*pcVar1)(local_78,local_78,3);
        pcVar2 = pcStack_40;
        if (local_48 != (code *)0x0) {
          (*local_48)(local_58,local_58,3);
          pcVar2 = pcStack_40;
        }
      }
    }
  }
  pcStack_40 = pcVar2;
  if (local_88 != (code *)0x0) {
    (*local_88)(local_98,local_98,3);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100854:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,
   3> > const&)::{lambda(int const&, int const&)#1}> >(int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,
   3> > const&)::{lambda(int const&, int const&)#1}>) */

void std::
     __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
               (int *param_1,int *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  size_t __n;
  int *piVar6;
  int *piVar7;
  
  if (param_1 == param_2) {
    return;
  }
  piVar6 = param_1 + 1;
  do {
    if (param_2 == piVar6) {
      return;
    }
    while( true ) {
      iVar1 = *piVar6;
      lVar2 = *param_3;
      piVar7 = piVar6 + 1;
      uVar3 = *(ulong *)(lVar2 + (long)iVar1 * 8);
      if (uVar3 < *(ulong *)(lVar2 + (long)*param_1 * 8)) break;
      lVar5 = (long)piVar6[-1];
      uVar4 = *(ulong *)(lVar2 + lVar5 * 8);
      while (uVar3 < uVar4) {
        *piVar6 = (int)lVar5;
        lVar5 = (long)piVar6[-2];
        piVar6 = piVar6 + -1;
        uVar4 = *(ulong *)(lVar2 + lVar5 * 8);
      }
      *piVar6 = iVar1;
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
    *param_1 = iVar1;
    piVar6 = piVar7;
  } while( true );
}



/* void manifold::transform<linalg::vec<double, 3> const*, linalg::vec<double, 3>*, (anonymous
   namespace)::TransformNormals>(linalg::vec<double, 3> const*, linalg::vec<double, 3> const*,
   linalg::vec<double, 3>*, (anonymous namespace)::TransformNormals) */

void manifold::
     transform<linalg::vec<double,3>const*,linalg::vec<double,3>*,(anonymous_namespace)::TransformNormals>
               (double *param_1,double *param_2,undefined1 (*param_3) [16])

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  double in_stack_00000020;
  double in_stack_00000028;
  double in_stack_00000030;
  double in_stack_00000038;
  double in_stack_00000040;
  double in_stack_00000048;
  
  if (param_1 != param_2) {
    do {
      dVar1 = param_1[2];
      auVar2._0_8_ = param_1[1] * in_stack_00000020 + *param_1 * in_stack_00000008 +
                     dVar1 * in_stack_00000038;
      auVar2._8_8_ = param_1[1] * in_stack_00000028 + *param_1 * in_stack_00000010 +
                     dVar1 * in_stack_00000040;
      dVar4 = *param_1 * in_stack_00000018 + param_1[1] * in_stack_00000030 +
              dVar1 * in_stack_00000048;
      dVar1 = SQRT(dVar4 * dVar4 + auVar2._0_8_ * auVar2._0_8_ + 0.0 + auVar2._8_8_ * auVar2._8_8_);
      dVar4 = dVar4 / dVar1;
      auVar3._8_8_ = dVar1;
      auVar3._0_8_ = dVar1;
      auVar3 = divpd(auVar2,auVar3);
      if (NAN(auVar3._0_8_)) {
        auVar3 = (undefined1  [16])0x0;
        dVar4 = 0.0;
      }
      param_1 = param_1 + 3;
      *param_3 = auVar3;
      *(double *)param_3[1] = dVar4;
      param_3 = (undefined1 (*) [16])(param_3[1] + 8);
    } while (param_2 != param_1);
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__move_merge<int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,
   3> > const&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,
   3> > const&)::{lambda(int const&, int const&)#1}>) */

int * std::
      __move_merge<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
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
      if (*(ulong *)(lVar2 + (long)iVar1 * 8) < *(ulong *)(lVar2 + (long)*param_1 * 8)) {
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
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,
   3> > const&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,
   3> > const&)::{lambda(int const&, int const&)#1}>) */

void std::
     __merge_sort_loop<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
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
      param_3 = __move_merge<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
                          (lVar2,lVar1,lVar1,param_1,param_3,param_5);
      lVar1 = param_2 - param_1 >> 2;
      lVar2 = param_1;
    } while (SBORROW8(lVar1,param_4 * 2) == lVar1 + param_4 * -2 < 0);
  }
  if (lVar1 < param_4) {
    param_4 = lVar1;
  }
  lVar1 = param_1 + param_4 * 4;
  __move_merge<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
            (param_1,lVar1,lVar1,param_2,param_3,param_5);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_sort_with_buffer<int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,
   3> > const&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,
   3> > const&)::{lambda(int const&, int const&)#1}>) */

void std::
     __merge_sort_with_buffer<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
               (long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_2 - param_1;
  lVar3 = param_1;
  if (lVar1 < 0x19) {
    __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
              (param_1,param_2,param_4);
    return;
  }
  do {
    lVar2 = lVar3 + 0x1c;
    __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
              (lVar3,lVar2,param_4);
    lVar3 = lVar2;
  } while (0x18 < param_2 - lVar2);
  __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
            (lVar2,param_2,param_4);
  if (0x1c < lVar1) {
    lVar3 = 7;
    do {
      __merge_sort_loop<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
                (param_1,param_2,param_3,lVar3,param_4);
      lVar2 = lVar3 * 2;
      lVar3 = lVar3 * 4;
      __merge_sort_loop<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
                (param_3,param_3 + lVar1,param_1,lVar2,param_4);
    } while (lVar3 < lVar1 >> 2);
  }
  return;
}



/* void std::vector<linalg::vec<double, 3>, std::allocator<linalg::vec<double, 3> >
   >::_M_assign_aux<linalg::vec<double, 3> const*>(linalg::vec<double, 3> const*,
   linalg::vec<double, 3> const*, std::forward_iterator_tag) [clone .isra.0] */

void std::vector<linalg::vec<double,3>,std::allocator<linalg::vec<double,3>>>::
     _M_assign_aux<linalg::vec<double,3>const*>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *__dest;
  undefined8 *puVar4;
  undefined8 *puVar5;
  size_t __n;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong __n_00;
  
  __n_00 = (long)param_3 - (long)param_2;
  puVar4 = (undefined8 *)*param_1;
  if ((ulong)(param_1[2] - (long)puVar4) < __n_00) {
    if (0x7ffffffffffffff8 < __n_00) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("cannot create std::vector larger than max_size()");
    }
    __dest = operator_new(__n_00);
    if (param_3 != param_2) {
      memcpy(__dest,param_2,(__n_00 - 0x18 & 0xfffffffffffffff8) + 0x18);
    }
    pvVar2 = (void *)*param_1;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2,param_1[2] - (long)pvVar2);
    }
    *param_1 = __dest;
    param_1[1] = (long)__dest + __n_00;
    param_1[2] = (long)__dest + __n_00;
  }
  else {
    puVar7 = (undefined8 *)param_1[1];
    __n = (long)puVar7 - (long)puVar4;
    if (__n < __n_00) {
      puVar1 = (undefined8 *)((long)param_2 + __n);
      if ((long)__n < 0x19) {
        if (__n == 0x18) {
          uVar3 = param_2[1];
          *puVar4 = *param_2;
          puVar4[1] = uVar3;
          puVar4[2] = param_2[2];
        }
      }
      else {
        memmove(puVar4,param_2,__n);
        puVar7 = (undefined8 *)param_1[1];
      }
      puVar4 = puVar1;
      puVar6 = puVar7;
      if (param_3 != puVar1) {
        do {
          uVar3 = puVar4[1];
          puVar5 = puVar4 + 3;
          *puVar6 = *puVar4;
          puVar6[1] = uVar3;
          puVar6[2] = puVar4[2];
          puVar4 = puVar5;
          puVar6 = puVar6 + 3;
        } while (param_3 != puVar5);
        puVar7 = (undefined8 *)
                 ((long)puVar7 +
                 ((long)param_3 + (-0x18 - (long)puVar1) & 0xfffffffffffffff8U) + 0x18);
      }
      param_1[1] = puVar7;
      return;
    }
    if ((long)__n_00 < 0x19) {
      if (__n_00 == 0x18) {
        uVar3 = param_2[1];
        *puVar4 = *param_2;
        puVar4[1] = uVar3;
        puVar4[2] = param_2[2];
      }
    }
    else {
      puVar4 = (undefined8 *)memmove(puVar4,param_2,__n_00);
      puVar7 = (undefined8 *)param_1[1];
    }
    if (puVar7 != (undefined8 *)((long)puVar4 + __n_00)) {
      param_1[1] = (undefined8 *)((long)puVar4 + __n_00);
      return;
    }
  }
  return;
}



/* void std::vector<linalg::vec<int, 3>, std::allocator<linalg::vec<int, 3> >
   >::_M_assign_aux<linalg::vec<int, 3> const*>(linalg::vec<int, 3> const*, linalg::vec<int, 3>
   const*, std::forward_iterator_tag) [clone .isra.0] */

void std::vector<linalg::vec<int,3>,std::allocator<linalg::vec<int,3>>>::
     _M_assign_aux<linalg::vec<int,3>const*>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *__dest;
  undefined8 *puVar3;
  undefined8 *puVar4;
  size_t __n;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong __n_00;
  
  __n_00 = (long)param_3 - (long)param_2;
  puVar3 = (undefined8 *)*param_1;
  if ((ulong)(param_1[2] - (long)puVar3) < __n_00) {
    if (0x7ffffffffffffff8 < __n_00) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("cannot create std::vector larger than max_size()");
    }
    __dest = operator_new(__n_00);
    if (param_3 != param_2) {
      memcpy(__dest,param_2,(__n_00 - 0xc & 0xfffffffffffffffc) + 0xc);
    }
    pvVar2 = (void *)*param_1;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2,param_1[2] - (long)pvVar2);
    }
    *param_1 = __dest;
    param_1[1] = (long)__dest + __n_00;
    param_1[2] = (long)__dest + __n_00;
  }
  else {
    puVar6 = (undefined8 *)param_1[1];
    __n = (long)puVar6 - (long)puVar3;
    if (__n < __n_00) {
      puVar1 = (undefined8 *)((long)param_2 + __n);
      if ((long)__n < 0xd) {
        if (__n == 0xc) {
          *puVar3 = *param_2;
          *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
        }
      }
      else {
        memmove(puVar3,param_2,__n);
        puVar6 = (undefined8 *)param_1[1];
      }
      puVar3 = puVar1;
      puVar5 = puVar6;
      if (param_3 != puVar1) {
        do {
          puVar4 = (undefined8 *)((long)puVar3 + 0xc);
          *puVar5 = *puVar3;
          *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar3 + 1);
          puVar3 = puVar4;
          puVar5 = (undefined8 *)((long)puVar5 + 0xc);
        } while (param_3 != puVar4);
        puVar6 = (undefined8 *)
                 ((long)puVar6 + ((long)param_3 + (-0xc - (long)puVar1) & 0xfffffffffffffffcU) + 0xc
                 );
      }
      param_1[1] = puVar6;
      return;
    }
    if ((long)__n_00 < 0xd) {
      if (__n_00 == 0xc) {
        *puVar3 = *param_2;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
      }
    }
    else {
      puVar3 = (undefined8 *)memmove(puVar3,param_2,__n_00);
      puVar6 = (undefined8 *)param_1[1];
    }
    if (puVar6 != (undefined8 *)(__n_00 + (long)puVar3)) {
      param_1[1] = (undefined8 *)(__n_00 + (long)puVar3);
      return;
    }
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_adaptive<int*, long, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,
   3> > const&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, long, long, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,
   3> > const&)::{lambda(int const&, int const&)#1}>) */

void std::
     __merge_adaptive<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
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
        if (*(ulong *)(lVar2 + (long)iVar1 * 8) < *(ulong *)(lVar2 + (long)*param_6 * 8)) {
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
      goto LAB_00101120;
    }
  }
  if (param_6 != piVar3) {
    lVar2 = *param_7;
    param_2 = param_2 + -1;
    piVar3 = piVar3 + -1;
    while( true ) {
      while( true ) {
        piVar4 = param_3 + -1;
        if (*(ulong *)(lVar2 + (long)*piVar3 * 8) < *(ulong *)(lVar2 + (long)*param_2 * 8)) break;
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
LAB_00101120:
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
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,
   3> > const&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,
   3> > const&)::{lambda(int const&, int const&)#1}>) */

void std::
     __stable_sort_adaptive<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
               (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  __merge_sort_with_buffer<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
            (param_1,param_2,param_4,param_5);
  __merge_sort_with_buffer<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
            (param_2,param_3,param_4,param_5);
  __merge_adaptive<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
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
          goto LAB_00101370;
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
        if (lVar9 % lVar4 == 0) goto LAB_00101370;
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
LAB_00101370:
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
  goto LAB_00101370;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_without_buffer<int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,
   3> > const&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, long, long,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,
   3> > const&)::{lambda(int const&, int const&)#1}>) */

void std::
     __merge_without_buffer<int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
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
      if (param_4 <= param_5) goto LAB_001014b7;
      do {
        lVar4 = param_4 / 2;
        piVar3 = param_1 + lVar4;
        piVar2 = __lower_bound<int*,int,__gnu_cxx::__ops::_Iter_comp_val<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
                           (param_2,param_3,*piVar3,param_6);
        lVar6 = (long)piVar2 - (long)param_2 >> 2;
        piVar5 = param_2;
        param_2 = piVar2;
        piVar2 = param_1;
        while( true ) {
          param_1 = _V2::__rotate<int*>(piVar3,piVar5,param_2);
          param_5 = param_5 - lVar6;
          __merge_without_buffer<int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
                    (piVar2,piVar3,param_1,lVar4,lVar6,param_6);
          param_4 = param_4 - lVar4;
          if (param_4 == 0) {
            return;
          }
          if (param_5 == 0) {
            return;
          }
          if (param_5 + param_4 == 2) goto LAB_00101506;
          if (param_5 < param_4) break;
LAB_001014b7:
          lVar6 = param_5 / 2;
          piVar3 = __upper_bound<int*,int,__gnu_cxx::__ops::_Val_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
                             (param_1,param_2,param_2[lVar6],param_6);
          lVar4 = (long)piVar3 - (long)param_1 >> 2;
          piVar5 = param_2;
          param_2 = param_2 + lVar6;
          piVar2 = param_1;
        }
      } while( true );
    }
LAB_00101506:
    iVar1 = *param_1;
    if (*(ulong *)(*param_6 + (long)*param_2 * 8) < *(ulong *)(*param_6 + (long)iVar1 * 8)) {
      *param_1 = *param_2;
      *param_2 = iVar1;
    }
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__inplace_stable_sort<int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,
   3> > const&)::{lambda(int const&, int const&)#1}> >(int*, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,
   3> > const&)::{lambda(int const&, int const&)#1}>) */

void std::
     __inplace_stable_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
               (long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  if (0x38 < param_2 - param_1) {
    lVar2 = (param_2 - param_1 >> 3) * 4;
    lVar1 = param_1 + lVar2;
    __inplace_stable_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
              (param_1,lVar1);
    __inplace_stable_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
              (lVar1,param_2,param_3);
    __merge_without_buffer<int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
              (param_1,lVar1,param_2,lVar2 >> 2,param_2 - lVar1 >> 2,param_3);
    return;
  }
  __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
            ();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_adaptive_resize<int*, long, int*,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,
   3> > const&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, long, long, int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,
   3> > const&)::{lambda(int const&, int const&)#1}>) */

void std::
     __merge_adaptive_resize<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
               (int *param_1,int *param_2,undefined8 param_3,long param_4,long param_5,int *param_6,
               long param_7,undefined8 param_8)

{
  int iVar1;
  int *piVar2;
  int *__src;
  size_t sVar3;
  long lVar4;
  size_t sVar5;
  long lVar6;
  int *local_78;
  long local_70;
  
  lVar6 = param_5;
  if (param_4 <= param_5) {
    lVar6 = param_4;
  }
  if (lVar6 <= param_7) {
LAB_0010185a:
    __merge_adaptive<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
              (param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  local_78 = param_1;
  if (param_4 <= param_5) goto LAB_00101749;
LAB_00101625:
  local_70 = param_4 / 2;
  __src = local_78 + local_70;
  piVar2 = __lower_bound<int*,int,__gnu_cxx::__ops::_Iter_comp_val<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
                     (param_2,param_3,*__src,param_8);
  lVar6 = (long)piVar2 - (long)param_2 >> 2;
  param_4 = param_4 - local_70;
  if (param_4 <= lVar6) goto LAB_0010179d;
  do {
    if (param_7 < lVar6) break;
    param_1 = __src;
    if (lVar6 != 0) {
      sVar5 = (long)piVar2 - (long)param_2;
      sVar3 = (long)param_2 - (long)__src;
      if ((long)sVar5 < 5) {
        if (sVar5 == 4) {
          *param_6 = *param_2;
          if ((long)sVar3 < 5) {
            if (sVar3 == 4) {
              piVar2[-1] = *__src;
            }
          }
          else {
            memmove((void *)((long)piVar2 - sVar3),__src,sVar3);
          }
          *__src = *param_6;
        }
        else if ((long)sVar3 < 5) {
          if (sVar3 == 4) {
            piVar2[-1] = *__src;
          }
        }
        else {
          memmove((void *)((long)piVar2 - sVar3),__src,sVar3);
        }
      }
      else {
        memmove(param_6,param_2,sVar5);
        if ((long)sVar3 < 5) {
          if (sVar3 == 4) {
            piVar2[-1] = *__src;
          }
        }
        else {
          memmove((void *)((long)piVar2 - sVar3),__src,sVar3);
        }
        memmove(__src,param_6,sVar5);
      }
      param_1 = (int *)(sVar5 + (long)__src);
    }
LAB_001016f4:
    param_2 = piVar2;
    param_5 = param_5 - lVar6;
    __merge_adaptive_resize<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
              (local_78,__src,param_1,local_70,lVar6,param_6,param_7,param_8);
    lVar6 = param_5;
    if (param_4 <= param_5) {
      lVar6 = param_4;
    }
    if (lVar6 <= param_7) goto LAB_0010185a;
    local_78 = param_1;
    if (param_5 < param_4) goto LAB_00101625;
LAB_00101749:
    lVar6 = param_5 / 2;
    piVar2 = param_2 + lVar6;
    __src = __upper_bound<int*,int,__gnu_cxx::__ops::_Val_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
                      (local_78,param_2,*piVar2,param_8);
    local_70 = (long)__src - (long)local_78 >> 2;
    param_4 = param_4 - local_70;
  } while (lVar6 < param_4);
LAB_0010179d:
  if (param_7 < param_4) {
    param_1 = _V2::__rotate<int*>(__src,param_2,piVar2);
  }
  else {
    param_1 = piVar2;
    if (param_4 != 0) {
      sVar3 = (long)param_2 - (long)__src;
      sVar5 = (long)piVar2 - (long)param_2;
      if ((long)sVar3 < 5) {
        if (sVar3 == 4) {
          iVar1 = *__src;
          *param_6 = iVar1;
          if ((long)sVar5 < 5) {
            if (sVar5 == 4) {
              *__src = *param_2;
              goto LAB_00101952;
            }
          }
          else {
            memmove(__src,param_2,sVar5);
LAB_00101952:
            iVar1 = *param_6;
          }
          lVar4 = -4;
          piVar2[-1] = iVar1;
        }
        else {
          lVar4 = -sVar3;
          if ((long)sVar5 < 5) {
            param_1 = (int *)((long)piVar2 + lVar4);
            if (sVar5 != 4) goto LAB_001016f4;
            *__src = *param_2;
          }
          else {
            memmove(__src,param_2,sVar5);
          }
        }
        param_1 = (int *)((long)piVar2 + lVar4);
        goto LAB_001016f4;
      }
      memmove(param_6,__src,sVar3);
      if ((long)sVar5 < 5) {
        if (sVar5 == 4) {
          *__src = *param_2;
        }
      }
      else {
        memmove(__src,param_2,sVar5);
      }
      param_1 = (int *)memmove((void *)((long)piVar2 - sVar3),param_6,sVar3);
    }
  }
  goto LAB_001016f4;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__stable_sort_adaptive_resize<int*, int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,
   3> > const&)::{lambda(int const&, int const&)#1}> >(int*, int*, int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,
   3> > const&)::{lambda(int const&, int const&)#1}>) */

void std::
     __stable_sort_adaptive_resize<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
               (long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = ((param_2 - param_1 >> 2) + 1) / 2;
  lVar2 = lVar3 * 4;
  lVar1 = param_1 + lVar2;
  if (param_4 < lVar3) {
    __stable_sort_adaptive_resize<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
              (param_1,lVar1,param_3);
    __stable_sort_adaptive_resize<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
              (lVar1,param_2,param_3,param_4,param_5);
    __merge_adaptive_resize<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
              (param_1,lVar1,param_2,lVar2 >> 2,param_2 - lVar1 >> 2,param_3,param_4,param_5);
    return;
  }
  __stable_sort_adaptive<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
            (param_1,lVar1,param_2,param_3);
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



/* manifold::Manifold::Impl::ReserveIDs(unsigned int) */

int manifold::Manifold::Impl::ReserveIDs(uint param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = meshIDCounter_;
  meshIDCounter_ = meshIDCounter_ + param_1;
  UNLOCK();
  return iVar1;
}



/* manifold::Manifold::Impl::RemoveUnreferencedVerts() */

void __thiscall manifold::Manifold::Impl::RemoveUnreferencedVerts(Impl *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  void *__ptr;
  int *piVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)*(int *)(this + 0x50);
  if (lVar6 == 0) {
    piVar4 = *(int **)(this + 0x60);
    __ptr = (void *)0x0;
    piVar3 = piVar4 + *(long *)(this + 0x68) * 3;
    if (piVar4 == piVar3) {
      return;
    }
LAB_00101cc8:
    do {
      if (-1 < *piVar4) {
        *(undefined4 *)((long)__ptr + (long)*piVar4 * 4) = 1;
      }
      piVar4 = piVar4 + 3;
    } while (piVar4 != piVar3);
    if (lVar6 == 0) goto LAB_00101d27;
  }
  else {
    __ptr = calloc(lVar6 * 4,1);
    piVar4 = *(int **)(this + 0x60);
    piVar3 = piVar4 + *(long *)(this + 0x68) * 3;
    if (piVar4 != piVar3) goto LAB_00101cc8;
  }
  uVar2 = _LC18;
  lVar5 = 0;
  do {
    if (*(int *)((long)__ptr + (long)(int)lVar5 * 4) == 0) {
      puVar1 = (undefined8 *)(*(long *)(this + 0x48) + (long)(int)lVar5 * 0x18);
      *puVar1 = uVar2;
      puVar1[1] = uVar2;
      puVar1[2] = uVar2;
    }
    lVar5 = lVar5 + 1;
  } while (lVar6 != lVar5);
LAB_00101d27:
  if (__ptr == (void *)0x0) {
    return;
  }
  free(__ptr);
  return;
}



/* manifold::Manifold::Impl::InitializeOriginal(bool) */

void __thiscall manifold::Manifold::Impl::InitializeOriginal(Impl *this,bool param_1)

{
  _Rb_tree_node_base *p_Var1;
  ulong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *pvVar5;
  int iVar6;
  undefined8 *puVar7;
  _Rb_tree_node_base *p_Var8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  size_t sVar16;
  long lVar17;
  bool bVar18;
  _Rb_tree_node_base *p_Var19;
  ulong uVar20;
  byte bVar21;
  int iVar22;
  undefined1 auVar23 [16];
  _Rb_tree_node_base *p_Var15;
  
  iVar6 = meshIDCounter_;
  bVar21 = 0;
  LOCK();
  UNLOCK();
  uVar2 = *(ulong *)(this + 0x68);
  uVar13 = *(ulong *)(this + 0x118);
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar2;
  iVar22 = meshIDCounter_ + 1;
  *(int *)(this + 0xc0) = meshIDCounter_;
  meshIDCounter_ = iVar22;
  uVar20 = uVar2 / 3;
  uVar9 = uVar13;
  if (*(ulong *)(this + 0x120) < uVar20) {
    puVar11 = (undefined8 *)malloc(uVar20 << 4);
    puVar7 = *(undefined8 **)(this + 0x110);
    if (uVar13 != 0) {
      sVar16 = uVar13 * 0x10;
      if ((long)sVar16 < 0x11) {
        if (sVar16 == 0x10) {
          uVar4 = puVar7[1];
          *puVar11 = *puVar7;
          puVar11[1] = uVar4;
          goto LAB_00102118;
        }
        if (puVar7 != (undefined8 *)0x0) goto LAB_00102118;
      }
      else {
        puVar11 = (undefined8 *)memmove(puVar11,puVar7,sVar16);
LAB_00102118:
        free(puVar7);
        uVar9 = *(ulong *)(this + 0x118);
      }
      *(undefined8 **)(this + 0x110) = puVar11;
      *(ulong *)(this + 0x120) = uVar20;
      goto LAB_00101de0;
    }
    if (puVar7 != (undefined8 *)0x0) goto LAB_00102118;
    *(undefined8 **)(this + 0x110) = puVar11;
    *(ulong *)(this + 0x120) = uVar20;
LAB_00101f88:
    lVar14 = uVar20 * 0x10 + *(long *)(this + 0x110);
    lVar17 = *(long *)(this + 0x110) + uVar9 * 0x10;
    if (lVar14 == lVar17) goto LAB_00101de9;
    uVar9 = 0;
    do {
      uVar10 = uVar9 + 1;
      *(undefined1 (*) [16])(lVar17 + uVar9 * 0x10) = (undefined1  [16])0x0;
      uVar9 = uVar10;
    } while (uVar10 < ((ulong)((lVar14 + -0x10) - lVar17) >> 4) + 1);
    *(ulong *)(this + 0x118) = uVar20;
  }
  else {
LAB_00101de0:
    if (uVar9 < uVar20) goto LAB_00101f88;
LAB_00101de9:
    *(ulong *)(this + 0x118) = uVar20;
  }
  if (uVar13 <= (SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar23,8) & 0xfffffffffffffffe))
  goto LAB_00101df9;
  if (uVar2 < 3) {
    puVar7 = *(undefined8 **)(this + 0x110);
    puVar11 = (undefined8 *)0x0;
LAB_00101ff8:
    if (puVar7 == (undefined8 *)0x0) {
      *(undefined8 **)(this + 0x110) = puVar11;
      *(ulong *)(this + 0x120) = uVar20;
      goto LAB_00101df9;
    }
  }
  else {
    sVar16 = uVar20 << 4;
    puVar11 = (undefined8 *)malloc(sVar16);
    puVar7 = *(undefined8 **)(this + 0x110);
    if ((long)sVar16 < 0x11) {
      if (sVar16 != 0x10) goto LAB_00101ff8;
      uVar4 = puVar7[1];
      *puVar11 = *puVar7;
      puVar11[1] = uVar4;
    }
    else {
      memmove(puVar11,puVar7,sVar16);
    }
  }
  free(puVar7);
  *(undefined8 **)(this + 0x110) = puVar11;
  *(undefined8 *)(this + 0x120) = *(undefined8 *)(this + 0x118);
LAB_00101df9:
  uVar2 = *(ulong *)(this + 0x68);
  if (2 < uVar2) {
    lVar14 = *(long *)(this + 0x110);
    uVar13 = 0;
    do {
      iVar12 = (int)uVar13;
      puVar7 = (undefined8 *)((long)iVar12 * 0x10 + lVar14);
      iVar22 = iVar12;
      if (param_1) {
        iVar22 = *(int *)((long)puVar7 + 0xc);
      }
      uVar13 = uVar13 + 1;
      *puVar7 = CONCAT44(iVar6,iVar6);
      puVar7[1] = CONCAT44(iVar22,iVar12);
    } while (uVar2 / 3 != uVar13);
  }
  pvVar5 = *(void **)(this + 0xf0);
  while (pvVar5 != (void *)0x0) {
    std::
    _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
    ::_M_erase(*(_Rb_tree_node **)((long)pvVar5 + 0x18));
    pvVar3 = *(void **)((long)pvVar5 + 0x10);
    operator_delete(pvVar5,0x98);
    pvVar5 = pvVar3;
  }
  p_Var1 = (_Rb_tree_node_base *)(this + 0xe8);
  *(undefined8 *)(this + 0xf0) = 0;
  *(_Rb_tree_node_base **)(this + 0xf8) = p_Var1;
  *(_Rb_tree_node_base **)(this + 0x100) = p_Var1;
  *(undefined8 *)(this + 0x108) = 0;
  p_Var8 = (_Rb_tree_node_base *)operator_new(0x98);
  *(int *)(p_Var8 + 0x20) = iVar6;
  p_Var19 = p_Var8 + 0x28;
  for (lVar14 = 0xe; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined8 *)p_Var19 = 0;
    p_Var19 = p_Var19 + (ulong)bVar21 * -0x10 + 8;
  }
  *(undefined2 *)(p_Var8 + 0x56) = 0x3ff0;
  *(undefined2 *)(p_Var8 + 0x36) = 0x3ff0;
  *(undefined4 *)(p_Var8 + 0x28) = 0xffffffff;
  *(undefined2 *)(p_Var8 + 0x76) = 0x3ff0;
  auVar23 = std::
            _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
            ::_M_get_insert_hint_unique_pos
                      ((_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
                        *)(this + 0xe0),p_Var1,iVar6);
  p_Var15 = auVar23._8_8_;
  p_Var19 = auVar23._0_8_;
  if (p_Var15 == (_Rb_tree_node_base *)0x0) {
    operator_delete(p_Var8,0x98);
  }
  else {
    if ((p_Var19 == (_Rb_tree_node_base *)0x0) && (p_Var1 != p_Var15)) {
      bVar18 = iVar6 < *(int *)(p_Var15 + 0x20);
    }
    else {
      bVar18 = true;
    }
    std::_Rb_tree_insert_and_rebalance(bVar18,p_Var8,p_Var15,p_Var1);
    *(long *)(this + 0x108) = *(long *)(this + 0x108) + 1;
    p_Var19 = p_Var8;
  }
  uVar4 = _LC5;
  *(int *)(p_Var19 + 0x28) = iVar6;
  p_Var19[0x90] = (_Rb_tree_node_base)0x0;
  *(undefined8 *)(p_Var19 + 0x30) = uVar4;
  *(undefined8 *)(p_Var19 + 0x38) = 0;
  *(undefined1 (*) [16])(p_Var19 + 0x40) = (undefined1  [16])0x0;
  *(undefined8 *)(p_Var19 + 0x50) = uVar4;
  *(undefined8 *)(p_Var19 + 0x58) = 0;
  *(undefined1 (*) [16])(p_Var19 + 0x60) = (undefined1  [16])0x0;
  *(undefined8 *)(p_Var19 + 0x70) = uVar4;
  *(undefined8 *)(p_Var19 + 0x78) = 0;
  *(undefined1 (*) [16])(p_Var19 + 0x80) = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int, 3> > const&) */

void __thiscall manifold::Manifold::Impl::CreateHalfedges(Impl *this,Vec *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  void *pvVar12;
  void *__ptr;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  size_t sVar18;
  ulong uVar19;
  int *piVar20;
  int iVar21;
  int *piVar22;
  int iVar23;
  void *pvVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  int iVar29;
  long lVar30;
  ulong uVar31;
  long in_FS_OFFSET;
  void *local_68;
  ulong local_60;
  ulong uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  lVar16 = *(long *)(param_1 + 8);
  lVar30 = *(long *)(this + 0x68);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x68) = 0;
  iVar6 = (int)lVar16 * 3;
  uVar19 = (ulong)iVar6;
  uVar11 = uVar19 * 2;
  if (lVar30 == 0) {
    uVar31 = 0;
    if (*(ulong *)(this + 0x70) < uVar19) {
      puVar15 = (undefined8 *)malloc(uVar19 * 0xc);
      pvVar24 = *(void **)(this + 0x60);
      if (pvVar24 != (void *)0x0) goto LAB_0010282d;
      *(undefined8 **)(this + 0x60) = puVar15;
      uVar25 = *(ulong *)(this + 0x68);
      *(ulong *)(this + 0x70) = uVar19;
joined_r0x00102951:
      if (uVar25 < uVar19) {
LAB_0010285b:
        puVar13 = (undefined8 *)((long)puVar15 + uVar25 * 0xc);
        puVar15 = (undefined8 *)((long)puVar15 + uVar19 * 0xc);
        if (puVar15 != puVar13) goto LAB_001026c0;
        *(ulong *)(this + 0x68) = uVar19;
        if (uVar31 <= uVar11) goto LAB_00102568;
        goto LAB_001026ec;
      }
LAB_00102564:
      *(ulong *)(this + 0x68) = uVar19;
    }
    else {
      if (uVar19 == 0) goto LAB_001021f2;
      puVar15 = (undefined8 *)((long)*(undefined8 **)(this + 0x60) + uVar19 * 0xc);
      puVar13 = *(undefined8 **)(this + 0x60);
LAB_001026c0:
      do {
        *puVar13 = 0;
        puVar14 = (undefined8 *)((long)puVar13 + 0xc);
        *(undefined4 *)(puVar13 + 1) = 0;
        puVar13 = puVar14;
      } while (puVar14 != puVar15);
LAB_001026d7:
      *(ulong *)(this + 0x68) = uVar19;
      if (uVar11 < uVar31) {
LAB_001026ec:
        sVar18 = uVar19 * 0xc;
        puVar15 = (undefined8 *)malloc(sVar18);
        puVar13 = *(undefined8 **)(this + 0x60);
        if ((long)sVar18 < 0xd) {
          if (sVar18 == 0xc) {
            *puVar15 = *puVar13;
            *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar13 + 1);
          }
          else if (puVar13 == (undefined8 *)0x0) goto LAB_0010272f;
        }
        else {
          memmove(puVar15,puVar13,sVar18);
        }
        free(puVar13);
LAB_0010272f:
        *(undefined8 **)(this + 0x60) = puVar15;
        *(undefined8 *)(this + 0x70) = *(undefined8 *)(this + 0x68);
        goto LAB_0010273b;
      }
    }
LAB_00102568:
    sVar18 = uVar19 * 4;
    local_68 = malloc(uVar19 * 8);
    local_60 = uVar19;
    uStack_58 = uVar19;
    __ptr = malloc(sVar18);
    lVar17 = 0;
    lVar30 = (long)sVar18 >> 2;
    do {
      *(int *)((long)__ptr + lVar17 * 4) = (int)lVar17;
      lVar17 = lVar17 + 1;
    } while (lVar17 != lVar30);
    pvVar24 = (void *)((long)__ptr + sVar18);
    if (lVar16 != 0) goto LAB_0010220b;
  }
  else {
    if (*(void **)(this + 0x60) == (void *)0x0) {
      *(undefined8 *)(this + 0x70) = 0;
      if (uVar19 != 0) {
        puVar15 = (undefined8 *)malloc(uVar19 * 0xc);
        *(ulong *)(this + 0x70) = uVar19;
        *(undefined8 **)(this + 0x60) = puVar15;
        uVar25 = *(ulong *)(this + 0x68);
        if (uVar25 < uVar19) {
          uVar31 = 0;
          goto LAB_0010285b;
        }
        goto LAB_00102564;
      }
    }
    else {
      free(*(void **)(this + 0x60));
      uVar31 = *(ulong *)(this + 0x68);
      *(undefined8 *)(this + 0x60) = 0;
      *(ulong *)(this + 0x70) = uVar31;
      if (uVar31 < uVar19) {
        puVar15 = (undefined8 *)malloc(uVar19 * 0xc);
        if (uVar31 == 0) {
          *(undefined8 **)(this + 0x60) = puVar15;
          uVar25 = *(ulong *)(this + 0x68);
          *(ulong *)(this + 0x70) = uVar19;
          goto joined_r0x00102951;
        }
        sVar18 = uVar31 * 0xc;
        if ((long)sVar18 < 0xd) {
          if (sVar18 == 0xc) {
            pvVar24 = (void *)0x0;
            *puVar15 = _DAT_00000000;
            *(undefined4 *)(puVar15 + 1) = _DAT_00000008;
            goto LAB_0010282d;
          }
        }
        else {
          puVar15 = (undefined8 *)memmove(puVar15,(void *)0x0,sVar18);
          pvVar24 = (void *)0x0;
LAB_0010282d:
          free(pvVar24);
        }
        uVar25 = *(ulong *)(this + 0x68);
        *(undefined8 **)(this + 0x60) = puVar15;
        *(ulong *)(this + 0x70) = uVar19;
        if (uVar25 < uVar19) goto LAB_0010285b;
        goto LAB_001026d7;
      }
      *(ulong *)(this + 0x68) = uVar19;
      if (uVar11 < uVar31) {
        puVar15 = (undefined8 *)0x0;
        if (uVar19 != 0) goto LAB_001026ec;
        goto LAB_0010272f;
      }
LAB_0010273b:
      local_68 = (void *)0x0;
      uStack_58 = 0;
      if (uVar19 != 0) goto LAB_00102568;
    }
LAB_001021f2:
    uStack_58 = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    pvVar24 = (void *)0x0;
    lVar30 = 0;
    __ptr = (void *)0x0;
    if (lVar16 == 0) goto LAB_001024f6;
LAB_0010220b:
    local_50 = _LC9;
    lVar17 = *(long *)param_1;
    lVar27 = 0;
    lVar7 = *(long *)(this + 0x60);
    do {
      local_48 = 2;
      puVar1 = (uint *)(lVar17 + (long)(int)lVar27 * 0xc);
      piVar20 = (int *)&local_50;
      do {
        iVar29 = *piVar20;
        lVar26 = (long)(iVar29 + (int)lVar27 * 3);
        puVar15 = (undefined8 *)(lVar7 + lVar26 * 0xc);
        if (iVar29 == 0) {
          uVar8 = *(undefined8 *)puVar1;
          *(undefined4 *)(puVar15 + 1) = 0xffffffff;
          *puVar15 = uVar8;
          uVar3 = *puVar1;
          uVar4 = puVar1[1];
LAB_001022a7:
          uVar19 = (ulong)(int)uVar3;
          uVar11 = (ulong)(int)uVar4;
          uVar10 = uVar4;
          if ((int)uVar3 <= (int)uVar4) {
            uVar10 = uVar3;
          }
          uVar25 = (ulong)((int)uVar3 < (int)uVar4) << 0x3f | (ulong)uVar10 << 0x20;
        }
        else {
          uVar3 = puVar1[2];
          if (iVar29 == 1) {
            uVar8 = *(undefined8 *)(puVar1 + 1);
            *(undefined4 *)(puVar15 + 1) = 0xffffffff;
            *puVar15 = uVar8;
            uVar3 = puVar1[1];
            uVar4 = puVar1[2];
            goto LAB_001022a7;
          }
          iVar29 = (iVar29 + 1) % 3;
          if (iVar29 == 0) {
            uVar4 = *puVar1;
            *(undefined4 *)(puVar15 + 1) = 0xffffffff;
            *puVar15 = CONCAT44(uVar4,uVar3);
            uVar3 = puVar1[2];
            uVar19 = (ulong)(int)uVar3;
            uVar4 = *puVar1;
            uVar11 = (ulong)(int)uVar4;
            uVar10 = uVar3;
            if ((int)uVar4 <= (int)uVar3) {
              uVar10 = uVar4;
            }
            uVar25 = (ulong)uVar10 << 0x20 | (ulong)((int)uVar3 < (int)uVar4) << 0x3f;
          }
          else if (iVar29 == 1) {
            uVar4 = puVar1[1];
            *(undefined4 *)(puVar15 + 1) = 0xffffffff;
            *puVar15 = CONCAT44(uVar4,uVar3);
            uVar3 = puVar1[1];
            uVar4 = puVar1[2];
            uVar19 = (ulong)(int)uVar4;
            uVar10 = uVar4;
            if ((int)uVar3 <= (int)uVar4) {
              uVar10 = uVar3;
            }
            uVar25 = (ulong)uVar10 << 0x20 | (ulong)((int)uVar4 < (int)uVar3) << 0x3f;
            uVar11 = (ulong)(int)uVar3;
          }
          else {
            *(undefined4 *)(puVar15 + 1) = 0xffffffff;
            *puVar15 = CONCAT44(uVar3,uVar3);
            uVar19 = (ulong)(int)puVar1[2];
            uVar11 = (ulong)(int)puVar1[2];
            uVar25 = uVar19 << 0x20;
          }
        }
        if ((int)uVar11 < (int)uVar19) {
          uVar11 = uVar19;
        }
        piVar20 = piVar20 + 1;
        *(ulong *)((long)local_68 + lVar26 * 8) = uVar11 | uVar25;
      } while (&local_44 != piVar20);
      lVar27 = lVar27 + 1;
    } while (lVar16 != lVar27);
  }
  if (__ptr != pvVar24) {
    lVar30 = lVar30 + 1 >> 1;
    lVar16 = lVar30;
    while( true ) {
      uVar11 = lVar16 * 4;
      pvVar12 = operator_new(uVar11,(nothrow_t *)&std::nothrow);
      if (pvVar12 != (void *)0x0) break;
      if (lVar16 == 1) {
        uVar11 = 0;
        std::
        __inplace_stable_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
                  (__ptr,pvVar24,&local_68);
        goto LAB_00102380;
      }
      lVar16 = lVar16 + 1 >> 1;
    }
    if (lVar30 == lVar16) {
      std::
      __stable_sort_adaptive<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
                (__ptr,(void *)((long)__ptr + uVar11),pvVar24,pvVar12);
    }
    else {
      std::
      __stable_sort_adaptive_resize<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<manifold::Manifold::Impl::CreateHalfedges(manifold::Vec<linalg::vec<int,3>>const&)::_lambda(int_const&,int_const&)_1_>>
                (__ptr,pvVar24,pvVar12);
    }
LAB_00102380:
    operator_delete(pvVar12,uVar11);
  }
  iVar29 = iVar6 / 2;
  if (iVar6 < 2) {
    if (iVar29 != 0) {
      lVar16 = *(long *)(this + 0x60);
      goto LAB_001024a8;
    }
  }
  else {
    lVar16 = *(long *)(this + 0x60);
    iVar28 = 0;
    piVar20 = (int *)((long)__ptr + (long)iVar29 * 4);
    iVar21 = iVar29;
    do {
      iVar23 = piVar20[-(long)iVar29];
      piVar2 = (int *)(lVar16 + (long)iVar23 * 0xc);
      iVar9 = iVar23 + -2;
      if (0x55555554 < (iVar23 + 1) * -0x55555555 + 0x2aaaaaaaU) {
        iVar9 = iVar23 + 1;
      }
      piVar22 = piVar20;
      iVar23 = iVar21;
      do {
        iVar5 = *piVar22;
        lVar30 = (long)iVar5 * 0xc;
        if ((((int *)(lVar16 + lVar30))[1] != *piVar2) || (*(int *)(lVar16 + lVar30) != piVar2[1]))
        break;
        lVar17 = lVar30 + -0x18;
        if (0x55555554 < (iVar5 + 1) * -0x55555555 + 0x2aaaaaaaU) {
          lVar17 = lVar30 + 0xc;
        }
        if (*(int *)(lVar16 + (long)iVar9 * 0xc + 4) == *(int *)(lVar16 + 4 + lVar17)) {
          if (iVar23 != iVar21) {
            iVar23 = *piVar20;
            *piVar20 = iVar5;
            *piVar22 = iVar23;
          }
          break;
        }
        iVar23 = iVar23 + 1;
        piVar22 = piVar22 + 1;
      } while (iVar23 < iVar6);
      iVar28 = iVar28 + 1;
      piVar20 = piVar20 + 1;
      iVar21 = iVar21 + 1;
    } while (iVar28 < iVar29);
LAB_001024a8:
    lVar30 = 0;
    do {
      iVar6 = *(int *)((long)__ptr + (long)(int)lVar30 * 4);
      piVar20 = (int *)(lVar16 + (long)iVar6 * 0xc);
      if (-1 < *piVar20) {
        iVar21 = *(int *)((long)__ptr + (long)(iVar29 + (int)lVar30) * 4);
        piVar20[2] = iVar21;
        *(int *)(lVar16 + 8 + (long)iVar21 * 0xc) = iVar6;
      }
      lVar30 = lVar30 + 1;
    } while (lVar30 != iVar29);
  }
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
LAB_001024f6:
  if (local_68 != (void *)0x0) {
    free(local_68);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Impl::Update() */

void __thiscall manifold::Manifold::Impl::Update(Impl *this)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  void *__ptr;
  double *pdVar14;
  long lVar15;
  double *pdVar16;
  long lVar17;
  long in_FS_OFFSET;
  bool bVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  void *local_68;
  undefined1 local_60 [16];
  void *local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  manifold::Manifold::Impl::CalculateBBox();
  local_68 = (void *)0x0;
  local_48 = (void *)0x0;
  local_60 = (undefined1  [16])0x0;
  local_40 = (undefined1  [16])0x0;
  manifold::Manifold::Impl::GetFaceBoxMorton((Vec *)this,(Vec *)&local_68);
  lVar9 = *(long *)(this + 0x140);
  if (0 < local_60._0_8_ * 0x30) {
    lVar13 = 0;
    do {
      uVar12 = ((undefined8 *)((long)local_68 + lVar13))[1];
      puVar1 = (undefined8 *)(lVar9 + lVar13 * 2);
      *puVar1 = *(undefined8 *)((long)local_68 + lVar13);
      puVar1[1] = uVar12;
      puVar1 = (undefined8 *)((long)local_68 + lVar13 + 0x10);
      uVar12 = puVar1[1];
      puVar3 = (undefined8 *)(lVar9 + 0x10 + lVar13 * 2);
      *puVar3 = *puVar1;
      puVar3[1] = uVar12;
      puVar1 = (undefined8 *)((long)local_68 + lVar13 + 0x20);
      uVar12 = puVar1[1];
      puVar3 = (undefined8 *)(lVar9 + 0x20 + lVar13 * 2);
      *puVar3 = *puVar1;
      puVar3[1] = uVar12;
      lVar13 = lVar13 + 0x30;
    } while (local_60._0_8_ * 0x30 != lVar13);
  }
  lVar13 = *(long *)(this + 0x178);
  if (lVar13 == 0) goto LAB_00102a5d;
  __ptr = calloc(lVar13 * 4,1);
  lVar10 = *(long *)(this + 0x158);
  lVar11 = *(long *)(this + 0x170);
  if (lVar13 * 4 == 0) {
    if (lVar13 != -1) goto LAB_00102ad4;
LAB_00102bb8:
    if (__ptr == (void *)0x0) goto LAB_00102a5d;
  }
  else if (lVar13 != -1) {
LAB_00102ad4:
    lVar17 = 0;
    do {
      lVar15 = (long)((int)lVar17 * 2);
      do {
        iVar8 = *(int *)(lVar10 + lVar15 * 4);
        lVar15 = (long)((iVar8 + -1) / 2);
        LOCK();
        piVar2 = (int *)((long)__ptr + lVar15 * 4);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        if (iVar4 == 0) break;
        piVar2 = (int *)(lVar11 + lVar15 * 8);
        pdVar14 = (double *)((long)*piVar2 * 0x30 + lVar9);
        pdVar16 = (double *)((long)piVar2[1] * 0x30 + lVar9);
        dVar20 = *pdVar14;
        if (*pdVar16 <= *pdVar14) {
          dVar20 = *pdVar16;
        }
        dVar5 = pdVar14[1];
        if (pdVar16[1] <= pdVar14[1]) {
          dVar5 = pdVar16[1];
        }
        dVar19 = pdVar14[2];
        if (pdVar16[2] <= pdVar14[2]) {
          dVar19 = pdVar16[2];
        }
        dVar21 = pdVar16[5];
        if (pdVar16[5] <= pdVar14[5]) {
          dVar21 = pdVar14[5];
        }
        dVar6 = pdVar16[3];
        if (pdVar16[3] <= pdVar14[3]) {
          dVar6 = pdVar14[3];
        }
        lVar15 = (long)iVar8;
        dVar7 = pdVar16[4];
        if (pdVar16[4] <= pdVar14[4]) {
          dVar7 = pdVar14[4];
        }
        pdVar14 = (double *)(lVar15 * 0x30 + lVar9);
        *pdVar14 = dVar20;
        pdVar14[1] = dVar5;
        pdVar14[2] = dVar19;
        pdVar14[3] = dVar6;
        pdVar14[4] = dVar7;
        pdVar14[5] = dVar21;
      } while (iVar8 != 1);
      bVar18 = lVar13 != lVar17;
      lVar17 = lVar17 + 1;
    } while (bVar18);
    goto LAB_00102bb8;
  }
  free(__ptr);
LAB_00102a5d:
  if (local_48 != (void *)0x0) {
    free(local_48);
  }
  if (local_68 != (void *)0x0) {
    free(local_68);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00102ea1) */
/* manifold::Manifold::Impl::MarkFailure(manifold::Manifold::Error) */

void __thiscall manifold::Manifold::Impl::MarkFailure(Impl *this,undefined4 param_2)

{
  Impl *pIVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *pvVar5;
  long in_FS_OFFSET;
  undefined8 local_90;
  void *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  void *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  uVar4 = _LC22;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(this + 0x50);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)this = uVar4;
  *(undefined8 *)(this + 8) = uVar4;
  uVar4 = _LC25;
  *(undefined8 *)(this + 0x10) = _LC22;
  *(undefined8 *)(this + 0x18) = uVar4;
  uVar4 = _LC25;
  *(undefined8 *)(this + 0x20) = _LC25;
  *(undefined8 *)(this + 0x28) = uVar4;
  if (lVar2 != 0) {
    uVar4 = 0;
    if (*(void **)(this + 0x48) != (void *)0x0) {
      free(*(void **)(this + 0x48));
      uVar4 = *(undefined8 *)(this + 0x50);
    }
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x58) = uVar4;
  }
  lVar2 = *(long *)(this + 0x68);
  *(undefined8 *)(this + 0x68) = 0;
  if (lVar2 != 0) {
    uVar4 = 0;
    if (*(void **)(this + 0x60) != (void *)0x0) {
      free(*(void **)(this + 0x60));
      uVar4 = *(undefined8 *)(this + 0x68);
    }
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x70) = uVar4;
  }
  lVar2 = *(long *)(this + 0x80);
  *(undefined8 *)(this + 0x80) = 0;
  if (lVar2 != 0) {
    uVar4 = 0;
    if (*(void **)(this + 0x78) != (void *)0x0) {
      free(*(void **)(this + 0x78));
      uVar4 = *(undefined8 *)(this + 0x80);
    }
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x88) = uVar4;
  }
  lVar2 = *(long *)(this + 0x98);
  *(undefined8 *)(this + 0x98) = 0;
  if (lVar2 != 0) {
    uVar4 = 0;
    if (*(void **)(this + 0x90) != (void *)0x0) {
      free(*(void **)(this + 0x90));
      uVar4 = *(undefined8 *)(this + 0x98);
    }
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0xa0) = uVar4;
  }
  lVar2 = *(long *)(this + 0xb0);
  *(undefined8 *)(this + 0xb0) = 0;
  if (lVar2 != 0) {
    uVar4 = 0;
    if (*(void **)(this + 0xa8) != (void *)0x0) {
      free(*(void **)(this + 0xa8));
      uVar4 = *(undefined8 *)(this + 0xb0);
    }
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined8 *)(this + 0xb8) = uVar4;
  }
  pvVar5 = *(void **)(this + 200);
  local_90 = 0;
  local_88 = (void *)0x0;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_50 = 0;
  *(undefined8 *)(this + 0xc0) = _LC26;
  local_60 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_80 = &local_90;
  local_78 = &local_90;
  if (pvVar5 != (void *)0x0) {
    free(pvVar5);
    pvVar5 = (void *)0x0;
  }
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(void **)(this + 200) = pvVar5;
  pvVar5 = *(void **)(this + 0xf0);
  while (pvVar5 != (void *)0x0) {
    std::
    _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
    ::_M_erase(*(_Rb_tree_node **)((long)pvVar5 + 0x18));
    pvVar3 = *(void **)((long)pvVar5 + 0x10);
    operator_delete(pvVar5,0x98);
    pvVar5 = pvVar3;
  }
  pIVar1 = this + 0xe8;
  *(undefined8 *)(this + 0xf0) = 0;
  *(Impl **)(this + 0xf8) = pIVar1;
  *(Impl **)(this + 0x100) = pIVar1;
  *(undefined8 *)(this + 0x108) = 0;
  if (local_88 != (void *)0x0) {
    *(undefined4 *)(this + 0xe8) = (undefined4)local_90;
    *(void **)(this + 0xf0) = local_88;
    *(undefined8 **)(this + 0xf8) = local_80;
    *(undefined8 **)(this + 0x100) = local_78;
    *(Impl **)((long)local_88 + 8) = pIVar1;
    local_88 = (void *)0x0;
    *(undefined8 *)(this + 0x108) = local_70;
    local_70 = 0;
    local_80 = &local_90;
    local_78 = &local_90;
  }
  if (*(void **)(this + 0x110) != (void *)0x0) {
    free(*(void **)(this + 0x110));
  }
  pvVar5 = local_68;
  local_68 = (void *)0x0;
  *(void **)(this + 0x110) = pvVar5;
  *(undefined8 *)(this + 0x118) = local_60._0_8_;
  *(undefined8 *)(this + 0x120) = local_60._8_8_;
  if (*(void **)(this + 0x128) == (void *)0x0) {
    *(undefined8 *)(this + 0x130) = local_48._0_8_;
    *(undefined8 *)(this + 0x138) = local_48._8_8_;
    *(undefined8 *)(this + 0x128) = local_50;
    pvVar5 = local_88;
  }
  else {
    free(*(void **)(this + 0x128));
    *(undefined8 *)(this + 0x128) = local_50;
    *(undefined8 *)(this + 0x130) = local_48._0_8_;
    *(undefined8 *)(this + 0x138) = local_48._8_8_;
    pvVar5 = local_88;
    if (local_68 != (void *)0x0) {
      free(local_68);
      pvVar5 = local_88;
    }
  }
  while (pvVar5 != (void *)0x0) {
    std::
    _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
    ::_M_erase(*(_Rb_tree_node **)((long)pvVar5 + 0x18));
    pvVar3 = *(void **)((long)pvVar5 + 0x10);
    operator_delete(pvVar5,0x98);
    pvVar5 = pvVar3;
  }
  *(undefined4 *)(this + 0x40) = param_2;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::Manifold::Impl::SetEpsilon(double, bool) */

void __thiscall manifold::Manifold::Impl::SetEpsilon(Impl *this,double param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)(*(ulong *)(this + 0x18) & _LC14);
  if ((double)(*(ulong *)(this + 0x18) & _LC14) <= (double)(*(ulong *)this & _LC14)) {
    dVar1 = (double)(*(ulong *)this & _LC14);
  }
  dVar3 = (double)(*(ulong *)(this + 0x28) & _LC14);
  if ((double)(*(ulong *)(this + 0x28) & _LC14) <= (double)(*(ulong *)(this + 0x10) & _LC14)) {
    dVar3 = (double)(*(ulong *)(this + 0x10) & _LC14);
  }
  dVar2 = (double)(*(ulong *)(this + 0x20) & _LC14);
  if ((double)(*(ulong *)(this + 0x20) & _LC14) <= (double)(*(ulong *)(this + 8) & _LC14)) {
    dVar2 = (double)(*(ulong *)(this + 8) & _LC14);
  }
  if (dVar3 <= dVar2) {
    dVar3 = dVar2;
  }
  if (dVar3 <= dVar1) {
    dVar3 = dVar1;
  }
  dVar2 = dVar3 * __LC29;
  dVar1 = dVar2;
  if (dVar2 <= param_1) {
    dVar2 = (double)(_LC14 & (ulong)param_1);
    dVar1 = param_1;
  }
  if (_LC6 < dVar2) {
    dVar1 = _LC28;
  }
  *(double *)(this + 0x30) = dVar1;
  dVar2 = dVar1;
  if ((param_2) && (dVar2 = dVar3 * __LC30, dVar3 * __LC30 <= dVar1)) {
    dVar2 = dVar1;
  }
  if (dVar2 <= *(double *)(this + 0x38)) {
    dVar2 = *(double *)(this + 0x38);
  }
  *(double *)(this + 0x38) = dVar2;
  return;
}



/* manifold::Manifold::Impl::Transform(linalg::mat<double, 3, 4> const&) const */

mat * manifold::Manifold::Impl::Transform(mat *param_1)

{
  ulong *puVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  _Rb_tree_node *p_Var8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  void *pvVar22;
  _Rb_tree_node *p_Var23;
  char cVar24;
  undefined1 (*pauVar25) [16];
  undefined1 (*pauVar26) [16];
  _Rb_tree_node_base *p_Var27;
  long lVar28;
  ulong uVar29;
  undefined8 *puVar30;
  int iVar31;
  double *pdVar32;
  undefined8 *puVar33;
  long lVar34;
  double *in_RDX;
  ulong uVar35;
  double *pdVar36;
  double *pdVar37;
  size_t sVar38;
  Impl *in_RSI;
  int *piVar39;
  ulong uVar40;
  long in_FS_OFFSET;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar49;
  undefined1 auVar48 [16];
  double dVar50;
  undefined8 uVar51;
  undefined1 auVar52 [16];
  undefined8 uVar53;
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  undefined1 auVar62 [16];
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2d8;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  int local_198;
  double *local_190;
  undefined1 local_188 [16];
  undefined8 *local_178;
  undefined1 local_170 [16];
  undefined8 *local_160;
  undefined1 local_158 [16];
  undefined8 *local_148;
  undefined1 local_140 [16];
  undefined8 *local_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 *local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [8];
  undefined4 local_f0 [2];
  _Rb_tree_node *local_e8;
  _Rb_tree_node_base *local_e0;
  _Rb_tree_node_base *local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined1 local_c0 [16];
  undefined8 *local_b0;
  undefined1 local_a8 [16];
  undefined8 *local_98;
  undefined1 local_90 [16];
  undefined4 *local_80;
  undefined1 local_78 [16];
  void *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  dVar46 = *in_RDX;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (dVar46 == _LC5) {
    dVar50 = in_RDX[1];
    if ((dVar50 == 0.0) && (dVar50 = in_RDX[2], dVar50 == 0.0)) {
      if (in_RDX[3] != 0.0) goto LAB_001031a0;
      dVar60 = in_RDX[4];
      dVar61 = dVar46;
      dVar50 = dVar60;
      if (dVar60 == _LC5) {
        if (in_RDX[5] == 0.0) {
          if (in_RDX[6] != 0.0) goto LAB_001031a0;
          dVar50 = in_RDX[7];
          if (dVar50 == 0.0) {
            dVar50 = in_RDX[8];
            dVar61 = dVar60;
            if (dVar50 == _LC5) {
              if (in_RDX[9] == 0.0) {
                dVar50 = in_RDX[10];
                if (dVar50 == 0.0) {
                  dVar50 = in_RDX[0xb];
                }
                goto LAB_001041f0;
              }
              goto LAB_001031a0;
            }
          }
          else {
            dVar61 = 0.0;
          }
        }
        else {
          dVar61 = 0.0;
          dVar50 = in_RDX[5];
        }
      }
    }
    else {
LAB_001041f0:
      dVar61 = 0.0;
    }
    if (dVar61 == dVar50) {
      Impl((Impl *)param_1,in_RSI);
      goto LAB_0010417c;
    }
  }
LAB_001031a0:
  local_198 = 0;
  local_190 = (double *)0x0;
  local_118 = _LC26;
  local_1d8 = _LC22;
  uStack_1d0 = _LC22;
  local_178 = (undefined8 *)0x0;
  local_1c8 = _LC22;
  uStack_1c0 = _LC25;
  local_160 = (undefined8 *)0x0;
  local_148 = (undefined8 *)0x0;
  local_1b8 = _LC25;
  uStack_1b0 = _LC25;
  local_130 = (undefined8 *)0x0;
  local_110 = (undefined8 *)0x0;
  local_1a8 = _LC28;
  dStack_1a0 = _LC28;
  local_f0[0] = 0;
  local_e8 = (_Rb_tree_node *)0x0;
  local_d0 = 0;
  local_c8 = (undefined8 *)0x0;
  local_b0 = (undefined8 *)0x0;
  local_188 = (undefined1  [16])0x0;
  local_170 = (undefined1  [16])0x0;
  local_158 = (undefined1  [16])0x0;
  local_140 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_c0 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined8 *)0x0;
  local_80 = (undefined4 *)0x0;
  local_68 = (void *)0x0;
  local_90 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  local_e0 = (_Rb_tree_node_base *)local_f0;
  local_d8 = (_Rb_tree_node_base *)local_f0;
  if (*(int *)(in_RSI + 0x40) == 0) {
    if (((((((((((_LC6 < (double)((ulong)in_RDX[1] & _LC14) ||
                 _LC6 < (double)((ulong)dVar46 & _LC14)) ||
                _LC6 < (double)((ulong)in_RDX[2] & _LC14)) ||
               _LC6 < (double)((ulong)in_RDX[3] & _LC14)) ||
              _LC6 < (double)((ulong)in_RDX[4] & _LC14)) ||
             _LC6 < (double)((ulong)in_RDX[5] & _LC14)) || _LC6 < (double)((ulong)in_RDX[6] & _LC14)
            ) || _LC6 < (double)((ulong)in_RDX[7] & _LC14)) ||
          _LC6 < (double)((ulong)in_RDX[8] & _LC14)) || _LC6 < (double)((ulong)in_RDX[9] & _LC14))
         || _LC6 < (double)((ulong)in_RDX[10] & _LC14)) ||
       (_LC6 < (double)(_LC14 & (ulong)in_RDX[0xb]))) {
      MarkFailure((Impl *)&local_1d8,1);
      Impl((Impl *)param_1,(Impl *)&local_1d8);
    }
    else {
      local_90._8_8_ = *(undefined8 *)(in_RSI + 0x148);
      local_90._0_8_ = local_90._8_8_;
      if (local_90._8_8_ != 0) {
        sVar38 = local_90._8_8_ * 0x30;
        local_98 = (undefined8 *)malloc(sVar38);
        puVar33 = *(undefined8 **)(in_RSI + 0x140);
        if ((long)sVar38 < 0x31) {
          if (sVar38 == 0x30) {
            uVar51 = puVar33[1];
            *local_98 = *puVar33;
            local_98[1] = uVar51;
            uVar51 = puVar33[3];
            local_98[2] = puVar33[2];
            local_98[3] = uVar51;
            uVar51 = puVar33[5];
            local_98[4] = puVar33[4];
            local_98[5] = uVar51;
          }
        }
        else {
          memmove(local_98,puVar33,sVar38);
        }
      }
      local_78._8_8_ = *(undefined8 *)(in_RSI + 0x160);
      local_78._0_8_ = local_78._8_8_;
      if (local_78._8_8_ != 0) {
        sVar38 = local_78._8_8_ * 4;
        local_80 = (undefined4 *)malloc(sVar38);
        if ((long)sVar38 < 5) {
          if (sVar38 == 4) {
            *local_80 = **(undefined4 **)(in_RSI + 0x158);
          }
        }
        else {
          memmove(local_80,*(undefined4 **)(in_RSI + 0x158),sVar38);
        }
      }
      local_60._8_8_ = *(undefined8 *)(in_RSI + 0x178);
      local_60._0_8_ = local_60._8_8_;
      if (local_60._8_8_ != 0) {
        sVar38 = local_60._8_8_ * 8;
        local_68 = malloc(sVar38);
        lVar7 = *(long *)(in_RSI + 0x170);
        if (0 < (long)sVar38) {
          uVar40 = 0;
          do {
            *(undefined8 *)((long)local_68 + uVar40 * 8) = *(undefined8 *)(lVar7 + uVar40 * 8);
            uVar40 = uVar40 + 1;
          } while (uVar40 < (ulong)((long)sVar38 >> 3));
        }
      }
      local_108._8_8_ = *(undefined8 *)(in_RSI + 0xd0);
      local_118 = *(undefined8 *)(in_RSI + 0xc0);
      local_108._0_8_ = local_108._8_8_;
      if (local_108._8_8_ != 0) {
        sVar38 = local_108._8_8_ * 8;
        local_110 = (undefined8 *)malloc(sVar38);
        if ((long)sVar38 < 9) {
          if (sVar38 == 8) {
            *local_110 = **(undefined8 **)(in_RSI + 200);
          }
        }
        else {
          memmove(local_110,*(undefined8 **)(in_RSI + 200),sVar38);
        }
      }
      local_218._0_8_ = local_f8;
      local_228 = (undefined1  [16])0x0;
      if (*(_Rb_tree_node **)(in_RSI + 0xf0) != (_Rb_tree_node *)0x0) {
        local_e8 = std::
                   _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
                   ::
                   _M_copy<false,std::_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>::_Reuse_or_alloc_node>
                             (*(_Rb_tree_node **)(in_RSI + 0xf0),(_Rb_tree_node_base *)local_f0,
                              (_Reuse_or_alloc_node *)local_228);
        p_Var23 = local_e8;
        do {
          local_e0 = (_Rb_tree_node_base *)p_Var23;
          p_Var27 = (_Rb_tree_node_base *)local_e8;
          p_Var23 = (_Rb_tree_node *)*(_Rb_tree_node_base **)(local_e0 + 0x10);
        } while (*(_Rb_tree_node_base **)(local_e0 + 0x10) != (_Rb_tree_node_base *)0x0);
        do {
          local_d8 = p_Var27;
          p_Var27 = *(_Rb_tree_node_base **)(local_d8 + 0x18);
        } while (*(_Rb_tree_node_base **)(local_d8 + 0x18) != (_Rb_tree_node_base *)0x0);
        local_d0 = *(undefined8 *)(in_RSI + 0x108);
        pvVar22 = (void *)local_228._0_8_;
        while (pvVar22 != (void *)0x0) {
          std::
          _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
          ::_M_erase(*(_Rb_tree_node **)((long)pvVar22 + 0x18));
          pvVar6 = *(void **)((long)pvVar22 + 0x10);
          operator_delete(pvVar22,0x98);
          pvVar22 = pvVar6;
        }
        if (local_c8 != (undefined8 *)0x0) {
          free(local_c8);
        }
      }
      local_c0._8_8_ = *(undefined8 *)(in_RSI + 0x118);
      local_c0._0_8_ = local_c0._8_8_;
      if (local_c0._8_8_ != 0) {
        sVar38 = local_c0._8_8_ * 0x10;
        local_c8 = (undefined8 *)malloc(sVar38);
        puVar33 = *(undefined8 **)(in_RSI + 0x110);
        if ((long)sVar38 < 0x11) {
          if (sVar38 == 0x10) {
            uVar51 = puVar33[1];
            *local_c8 = *puVar33;
            local_c8[1] = uVar51;
          }
        }
        else {
          memmove(local_c8,puVar33,sVar38);
        }
      }
      if (local_b0 != (undefined8 *)0x0) {
        free(local_b0);
      }
      local_a8._8_8_ = *(undefined8 *)(in_RSI + 0x130);
      local_a8._0_8_ = local_a8._8_8_;
      if (local_a8._8_8_ != 0) {
        sVar38 = local_a8._8_8_ * 0xc;
        local_b0 = (undefined8 *)malloc(sVar38);
        puVar33 = *(undefined8 **)(in_RSI + 0x128);
        if ((long)sVar38 < 0xd) {
          if (sVar38 == 0xc) {
            *local_b0 = *puVar33;
            *(undefined4 *)(local_b0 + 1) = *(undefined4 *)(puVar33 + 1);
          }
        }
        else {
          memmove(local_b0,puVar33,sVar38);
        }
      }
      local_1a8 = *(double *)(in_RSI + 0x30);
      dStack_1a0 = *(double *)(in_RSI + 0x38);
      local_1d8 = *(undefined8 *)in_RSI;
      uStack_1d0 = *(undefined8 *)(in_RSI + 8);
      local_1c8 = *(undefined8 *)(in_RSI + 0x10);
      uStack_1c0 = *(undefined8 *)(in_RSI + 0x18);
      local_1b8 = *(undefined8 *)(in_RSI + 0x20);
      uStack_1b0 = *(undefined8 *)(in_RSI + 0x28);
      if (local_178 != (undefined8 *)0x0) {
        free(local_178);
      }
      local_170._8_8_ = *(undefined8 *)(in_RSI + 0x68);
      local_170._0_8_ = local_170._8_8_;
      if (local_170._8_8_ != 0) {
        sVar38 = local_170._8_8_ * 0xc;
        local_178 = (undefined8 *)malloc(sVar38);
        puVar33 = *(undefined8 **)(in_RSI + 0x60);
        if ((long)sVar38 < 0xd) {
          if (sVar38 == 0xc) {
            *local_178 = *puVar33;
            *(undefined4 *)(local_178 + 1) = *(undefined4 *)(puVar33 + 1);
          }
        }
        else {
          memmove(local_178,puVar33,sVar38);
        }
      }
      uVar40 = *(ulong *)(in_RSI + 0xb0);
      uVar51 = local_128._0_8_;
      if ((ulong)local_128._8_8_ < uVar40) {
        puVar30 = (undefined8 *)malloc(uVar40 << 5);
        puVar33 = local_130;
        local_128._8_8_ = uVar40;
        if (uVar51 == 0) {
          if (local_130 == (undefined8 *)0x0) {
            local_128._0_8_ = 0;
            local_130 = puVar30;
            goto LAB_00103670;
          }
LAB_00104949:
          free(puVar33);
          uVar35 = local_128._0_8_;
        }
        else {
          sVar38 = uVar51 * 0x20;
          if (0x20 < (long)sVar38) {
            puVar30 = (undefined8 *)memmove(puVar30,local_130,sVar38);
            goto LAB_00104949;
          }
          if (sVar38 == 0x20) {
            uVar53 = local_130[1];
            *puVar30 = *local_130;
            puVar30[1] = uVar53;
            uVar53 = local_130[3];
            puVar30[2] = local_130[2];
            puVar30[3] = uVar53;
            goto LAB_00104949;
          }
          uVar35 = uVar51;
          if (local_130 != (undefined8 *)0x0) goto LAB_00104949;
        }
        local_128._0_8_ = uVar35;
        local_130 = puVar30;
        if (uVar35 < uVar40) goto LAB_00103670;
joined_r0x001049a3:
        local_128._0_8_ = uVar40;
        if (uVar40 * 2 < (ulong)uVar51) {
LAB_001049a9:
          puVar33 = local_130;
          sVar38 = uVar40 << 5;
          puVar30 = (undefined8 *)malloc(sVar38);
          if ((long)sVar38 < 0x21) {
            if (sVar38 != 0x20) goto LAB_00104375;
            uVar51 = puVar33[1];
            *puVar30 = *puVar33;
            puVar30[1] = uVar51;
            uVar51 = puVar33[3];
            puVar30[2] = puVar33[2];
            puVar30[3] = uVar51;
          }
          else {
            memmove(puVar30,puVar33,sVar38);
          }
LAB_001049e6:
          free(puVar33);
LAB_0010437e:
          local_128._8_8_ = local_128._0_8_;
          local_130 = puVar30;
        }
      }
      else {
        if ((ulong)local_128._0_8_ < uVar40) {
LAB_00103670:
          pauVar25 = (undefined1 (*) [16])(local_130 + local_128._0_8_ * 4);
          if ((undefined1 (*) [16])(local_130 + uVar40 * 4) != pauVar25) {
            uVar35 = 0;
            pauVar26 = pauVar25;
            do {
              uVar35 = uVar35 + 1;
              *pauVar26 = (undefined1  [16])0x0;
              pauVar26[1] = (undefined1  [16])0x0;
              pauVar26 = pauVar26 + 2;
            } while (uVar35 < ((ulong)((long)(local_130 + uVar40 * 4) + (-0x20 - (long)pauVar25)) >>
                              5) + 1);
          }
          goto joined_r0x001049a3;
        }
        local_128._0_8_ = uVar40;
        if (uVar40 * 2 < (ulong)uVar51) {
          if (uVar40 != 0) goto LAB_001049a9;
          puVar30 = (undefined8 *)0x0;
          puVar33 = local_130;
LAB_00104375:
          if (puVar33 != (undefined8 *)0x0) goto LAB_001049e6;
          goto LAB_0010437e;
        }
      }
      local_118 = CONCAT44(local_118._4_4_,0xffffffff);
      pdVar32 = local_190;
      p_Var27 = local_e0;
      while (local_190 = pdVar32, p_Var27 != (_Rb_tree_node_base *)local_f0) {
        dVar20 = in_RDX[9];
        dVar21 = in_RDX[10];
        dVar46 = in_RDX[8];
        dVar50 = in_RDX[9];
        dVar60 = *(double *)(p_Var27 + 0x30);
        dVar61 = *(double *)(p_Var27 + 0x38);
        dVar45 = *in_RDX;
        dVar3 = in_RDX[1];
        dVar2 = in_RDX[10];
        dVar43 = in_RDX[0xb];
        dVar58 = in_RDX[3];
        dVar47 = in_RDX[4];
        dVar57 = *(double *)(p_Var27 + 0x40);
        dVar54 = *(double *)(p_Var27 + 0x48);
        dVar41 = in_RDX[6];
        dVar42 = in_RDX[7];
        dVar49 = *(double *)(p_Var27 + 0x50);
        dVar11 = *(double *)(p_Var27 + 0x58);
        dVar12 = *(double *)(p_Var27 + 0x60);
        dVar13 = *(double *)(p_Var27 + 0x68);
        dVar14 = in_RDX[4];
        dVar59 = in_RDX[5];
        dVar44 = in_RDX[2];
        dVar15 = in_RDX[3];
        dVar16 = *(double *)(p_Var27 + 0x70);
        dVar17 = *(double *)(p_Var27 + 0x78);
        dVar18 = *(double *)(p_Var27 + 0x80);
        dVar19 = *(double *)(p_Var27 + 0x88);
        *(double *)(p_Var27 + 0x30) =
             dVar57 * dVar41 + dVar60 * dVar45 + dVar61 * dVar58 + dVar20 * 0.0;
        *(double *)(p_Var27 + 0x38) =
             dVar57 * dVar42 + dVar60 * dVar3 + dVar61 * dVar47 + dVar21 * 0.0;
        *(double *)(p_Var27 + 0x40) =
             dVar60 * dVar44 + dVar61 * dVar59 + dVar46 * dVar57 + dVar43 * 0.0;
        *(double *)(p_Var27 + 0x48) =
             dVar15 * dVar49 + dVar54 * dVar45 + dVar11 * dVar41 + dVar50 * 0.0;
        *(double *)(p_Var27 + 0x50) =
             dVar14 * dVar49 + dVar54 * dVar3 + dVar11 * dVar42 + dVar2 * 0.0;
        *(double *)(p_Var27 + 0x58) =
             dVar59 * dVar49 + dVar54 * dVar44 + dVar46 * dVar11 + dVar43 * 0.0;
        *(double *)(p_Var27 + 0x60) =
             dVar15 * dVar13 + dVar12 * dVar45 + dVar41 * dVar16 + dVar50 * 0.0;
        *(double *)(p_Var27 + 0x68) =
             dVar3 * dVar12 + dVar13 * dVar14 + dVar42 * dVar16 + dVar2 * 0.0;
        *(double *)(p_Var27 + 0x70) =
             dVar44 * dVar12 + dVar13 * dVar59 + dVar46 * dVar16 + dVar43 * 0.0;
        *(double *)(p_Var27 + 0x78) = dVar17 * dVar45 + dVar18 * dVar58 + dVar19 * dVar41 + dVar20;
        *(double *)(p_Var27 + 0x80) = dVar17 * dVar3 + dVar18 * dVar47 + dVar19 * dVar42 + dVar21;
        *(double *)(p_Var27 + 0x88) = dVar18 * dVar59 + dVar17 * dVar44 + dVar19 * dVar46 + dVar43;
        p_Var27 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var27);
        pdVar32 = local_190;
      }
      uVar40 = *(ulong *)(in_RSI + 0x50);
      uVar51 = local_188._0_8_;
      if ((ulong)local_188._8_8_ < uVar40) {
        pdVar37 = (double *)malloc(uVar40 * 0x18);
        pdVar32 = local_190;
        local_188._8_8_ = uVar40;
        if (uVar51 == 0) {
          if (local_190 == (double *)0x0) {
            local_188._0_8_ = 0;
            local_190 = pdVar37;
            goto LAB_00104473;
          }
LAB_00104b05:
          free(pdVar32);
          uVar35 = local_188._0_8_;
        }
        else {
          sVar38 = uVar51 * 0x18;
          if (0x18 < (long)sVar38) {
            pdVar37 = (double *)memmove(pdVar37,local_190,sVar38);
            goto LAB_00104b05;
          }
          if (sVar38 == 0x18) {
            dVar46 = local_190[1];
            *pdVar37 = *local_190;
            pdVar37[1] = dVar46;
            pdVar37[2] = local_190[2];
            goto LAB_00104b05;
          }
          uVar35 = uVar51;
          if (local_190 != (double *)0x0) goto LAB_00104b05;
        }
        local_188._0_8_ = uVar35;
        local_190 = pdVar37;
        if (uVar35 < uVar40) goto LAB_00104473;
joined_r0x00104b55:
        local_188._0_8_ = uVar40;
        if (uVar40 * 2 < (ulong)uVar51) {
LAB_00104b5b:
          pdVar32 = local_190;
          sVar38 = uVar40 * 0x18;
          pdVar37 = (double *)malloc(sVar38);
          if ((long)sVar38 < 0x19) {
            if (sVar38 != 0x18) goto LAB_001039a2;
            dVar46 = pdVar32[1];
            *pdVar37 = *pdVar32;
            pdVar37[1] = dVar46;
            pdVar37[2] = pdVar32[2];
          }
          else {
            memmove(pdVar37,pdVar32,sVar38);
          }
LAB_00104b98:
          free(pdVar32);
LAB_001039ab:
          local_188._8_8_ = local_188._0_8_;
          local_190 = pdVar37;
        }
      }
      else {
        if ((ulong)local_188._0_8_ < uVar40) {
LAB_00104473:
          for (pauVar25 = (undefined1 (*) [16])(local_190 + local_188._0_8_ * 3);
              (undefined1 (*) [16])(local_190 + uVar40 * 3) != pauVar25;
              pauVar25 = (undefined1 (*) [16])(pauVar25[1] + 8)) {
            *(undefined8 *)pauVar25[1] = 0;
            *pauVar25 = (undefined1  [16])0x0;
          }
          goto joined_r0x00104b55;
        }
        local_188._0_8_ = uVar40;
        if (uVar40 * 2 < (ulong)uVar51) {
          if (uVar40 != 0) goto LAB_00104b5b;
          pdVar37 = (double *)0x0;
LAB_001039a2:
          if (pdVar32 != (double *)0x0) goto LAB_00104b98;
          goto LAB_001039ab;
        }
      }
      uVar40 = *(ulong *)(in_RSI + 0x98);
      uVar51 = local_140._0_8_;
      if ((ulong)local_140._8_8_ < uVar40) {
        puVar30 = (undefined8 *)malloc(uVar40 * 0x18);
        puVar33 = local_148;
        local_140._8_8_ = uVar40;
        if (uVar51 == 0) {
          if (local_148 == (undefined8 *)0x0) {
            local_140._0_8_ = 0;
            local_148 = puVar30;
            goto LAB_00104403;
          }
LAB_00104a2c:
          free(puVar33);
          uVar35 = local_140._0_8_;
        }
        else {
          sVar38 = uVar51 * 0x18;
          if (0x18 < (long)sVar38) {
            puVar30 = (undefined8 *)memmove(puVar30,local_148,sVar38);
            goto LAB_00104a2c;
          }
          if (sVar38 == 0x18) {
            uVar53 = local_148[1];
            *puVar30 = *local_148;
            puVar30[1] = uVar53;
            puVar30[2] = local_148[2];
            goto LAB_00104a2c;
          }
          uVar35 = uVar51;
          if (local_148 != (undefined8 *)0x0) goto LAB_00104a2c;
        }
        local_140._0_8_ = uVar35;
        local_148 = puVar30;
        if (uVar35 < uVar40) goto LAB_00104403;
joined_r0x00104a7c:
        local_140._0_8_ = uVar40;
        if (uVar40 * 2 < (ulong)uVar51) {
LAB_00104a82:
          puVar33 = local_148;
          sVar38 = uVar40 * 0x18;
          puVar30 = (undefined8 *)malloc(sVar38);
          if ((long)sVar38 < 0x19) {
            if (sVar38 != 0x18) goto LAB_00103a0f;
            uVar51 = puVar33[1];
            *puVar30 = *puVar33;
            puVar30[1] = uVar51;
            puVar30[2] = puVar33[2];
          }
          else {
            memmove(puVar30,puVar33,sVar38);
          }
LAB_00104abf:
          free(puVar33);
LAB_00103a18:
          local_140._8_8_ = local_140._0_8_;
          local_148 = puVar30;
        }
      }
      else {
        if ((ulong)local_140._0_8_ < uVar40) {
LAB_00104403:
          for (pauVar25 = (undefined1 (*) [16])(local_148 + local_140._0_8_ * 3);
              (undefined1 (*) [16])(local_148 + uVar40 * 3) != pauVar25;
              pauVar25 = (undefined1 (*) [16])(pauVar25[1] + 8)) {
            *(undefined8 *)pauVar25[1] = 0;
            *pauVar25 = (undefined1  [16])0x0;
          }
          goto joined_r0x00104a7c;
        }
        local_140._0_8_ = uVar40;
        if (uVar40 * 2 < (ulong)uVar51) {
          if (uVar40 != 0) goto LAB_00104a82;
          puVar30 = (undefined8 *)0x0;
          puVar33 = local_148;
LAB_00103a0f:
          if (puVar33 != (undefined8 *)0x0) goto LAB_00104abf;
          goto LAB_00103a18;
        }
      }
      puVar33 = local_160;
      uVar40 = *(ulong *)(in_RSI + 0x80);
      uVar51 = local_158._0_8_;
      uVar35 = uVar40 * 2;
      if ((ulong)local_158._8_8_ < uVar40) {
        puVar30 = (undefined8 *)malloc(uVar40 * 0x18);
        local_158._8_8_ = uVar40;
        if (uVar51 == 0) {
          if (puVar33 == (undefined8 *)0x0) {
            local_158._0_8_ = 0;
            local_160 = puVar30;
            goto LAB_00103a6d;
          }
LAB_00104be5:
          free(puVar33);
          uVar29 = local_158._0_8_;
        }
        else {
          sVar38 = uVar51 * 0x18;
          if (0x18 < (long)sVar38) {
            memmove(puVar30,puVar33,sVar38);
            goto LAB_00104be5;
          }
          if (sVar38 == 0x18) {
            uVar53 = puVar33[1];
            *puVar30 = *puVar33;
            puVar30[1] = uVar53;
            puVar30[2] = puVar33[2];
            goto LAB_00104be5;
          }
          uVar29 = uVar51;
          if (puVar33 != (undefined8 *)0x0) goto LAB_00104be5;
        }
        local_158._0_8_ = uVar29;
        local_160 = puVar30;
        if (uVar29 < uVar40) goto LAB_00103a6d;
        local_158._0_8_ = uVar40;
        if ((ulong)uVar51 <= uVar35) goto LAB_00103ac0;
LAB_00104c3b:
        puVar33 = local_160;
        sVar38 = uVar40 * 0x18;
        puVar30 = (undefined8 *)malloc(sVar38);
        if ((long)sVar38 < 0x19) {
          if (sVar38 == 0x18) {
            uVar51 = puVar33[1];
            *puVar30 = *puVar33;
            puVar30[1] = uVar51;
            puVar30[2] = puVar33[2];
            goto LAB_00104c6f;
          }
LAB_001043c0:
          if (puVar33 != (undefined8 *)0x0) goto LAB_00104c6f;
        }
        else {
          puVar30 = (undefined8 *)memmove(puVar30,puVar33,sVar38);
LAB_00104c6f:
          free(puVar33);
        }
        local_158._8_8_ = local_158._0_8_;
        local_160 = puVar30;
      }
      else if ((ulong)local_158._0_8_ < uVar40) {
LAB_00103a6d:
        for (pauVar25 = (undefined1 (*) [16])(local_160 + local_158._0_8_ * 3);
            (undefined1 (*) [16])(local_160 + uVar40 * 3) != pauVar25;
            pauVar25 = (undefined1 (*) [16])(pauVar25[1] + 8)) {
          *(undefined8 *)pauVar25[1] = 0;
          *pauVar25 = (undefined1  [16])0x0;
        }
        local_158._0_8_ = uVar40;
        if (uVar35 < (ulong)uVar51) goto LAB_00104c3b;
      }
      else {
        local_158._0_8_ = uVar40;
        if (uVar35 < (ulong)uVar51) {
          if (uVar40 != 0) goto LAB_00104c3b;
          puVar30 = (undefined8 *)0x0;
          goto LAB_001043c0;
        }
      }
LAB_00103ac0:
      puVar33 = local_160;
      dVar43 = in_RDX[4];
      dVar58 = in_RDX[5];
      pdVar37 = *(double **)(in_RSI + 0x48);
      dVar47 = in_RDX[2];
      dVar57 = in_RDX[3];
      dVar54 = in_RDX[8];
      dVar41 = *in_RDX;
      dVar42 = in_RDX[1];
      pdVar32 = pdVar37 + *(long *)(in_RSI + 0x50) * 3;
      local_2d8 = in_RDX[6];
      dVar49 = in_RDX[7];
      dVar2 = in_RDX[1];
      dVar3 = in_RDX[2];
      dVar11 = in_RDX[3];
      dVar12 = in_RDX[4];
      dVar61 = in_RDX[4];
      dVar45 = in_RDX[5];
      dVar50 = in_RDX[7];
      dVar60 = in_RDX[8];
      dVar13 = in_RDX[9];
      dVar14 = in_RDX[10];
      dVar46 = in_RDX[0xb];
      pdVar36 = local_190;
      dVar59 = dVar57;
      dVar44 = dVar58;
      dStack_310 = dVar49;
      local_308 = dVar49;
      dStack_300 = dVar54;
      local_2f8 = dVar43;
      dStack_2f0 = dVar58;
      if (pdVar37 != pdVar32) {
        do {
          dVar60 = *pdVar37;
          dVar61 = pdVar37[1];
          dVar50 = pdVar37[2];
          pdVar37 = pdVar37 + 3;
          *pdVar36 = dVar60 * dVar41 + dVar61 * dVar11 + dVar50 * local_2d8 + dVar13;
          pdVar36[1] = dVar60 * dVar42 + dVar61 * dVar12 + dVar50 * dVar49 + dVar14;
          pdVar36[2] = dVar60 * dVar47 + dVar61 * dVar58 + dVar50 * dVar54 + dVar46;
          pdVar36 = pdVar36 + 3;
        } while (pdVar32 != pdVar37);
        dVar50 = in_RDX[7];
        dVar60 = in_RDX[8];
        local_2d8 = in_RDX[6];
        dVar49 = in_RDX[7];
        dVar47 = in_RDX[2];
        dVar57 = in_RDX[3];
        dVar43 = in_RDX[4];
        dVar61 = in_RDX[4];
        dVar45 = in_RDX[5];
        dVar2 = in_RDX[1];
        dVar41 = *in_RDX;
        dVar42 = in_RDX[1];
        dVar3 = in_RDX[2];
        dVar58 = dVar45;
        dVar59 = in_RDX[3];
        dVar54 = dVar60;
        dVar44 = in_RDX[5];
        dStack_310 = dVar50;
        local_308 = in_RDX[7];
        dStack_300 = in_RDX[8];
        local_2f8 = in_RDX[4];
        dStack_2f0 = in_RDX[5];
      }
      dVar46 = (dVar45 * dVar2 - dVar61 * dVar3) * local_2d8 +
               (dVar60 * dVar61 - dVar50 * dVar45) * dVar41 +
               (dVar50 * dVar3 - dVar60 * dVar2) * dVar59;
      auVar52._0_8_ = dVar43 * dVar54 - dVar44 * local_308;
      auVar52._8_8_ = dVar44 * local_2d8 - dVar57 * dStack_300;
      auVar55._0_8_ = dVar54 * dVar41 - local_2d8 * dVar47;
      auVar55._8_8_ = local_2d8 * dVar42 - dVar49 * dVar41;
      auVar56._8_8_ = dVar46;
      auVar56._0_8_ = dVar46;
      auVar52 = divpd(auVar52,auVar56);
      auVar48._0_8_ = dVar42 * dVar58 - dVar47 * local_2f8;
      auVar48._8_8_ = dVar47 * dVar59 - dVar41 * dStack_2f0;
      auVar55 = divpd(auVar55,auVar56);
      uVar51 = auVar52._0_8_;
      uVar53 = auVar52._8_8_;
      auVar62._0_8_ = dVar57 * dStack_310 - dVar43 * local_2d8;
      auVar62._8_8_ = dVar47 * dStack_310 - dVar42 * dVar54;
      auVar48 = divpd(auVar48,auVar56);
      dVar46 = (dVar43 * dVar41 - dVar42 * dVar59) / dVar46;
      auVar52 = divpd(auVar62,auVar56);
      local_258 = auVar55._0_8_;
      uStack_250 = auVar55._8_8_;
      local_248 = auVar48._0_8_;
      uStack_240 = auVar48._8_8_;
      transform<linalg::vec<double,3>const*,linalg::vec<double,3>*,(anonymous_namespace)::TransformNormals>
                (*(long *)(in_RSI + 0x90),*(long *)(in_RSI + 0x90) + *(long *)(in_RSI + 0x98) * 0x18
                 ,local_148);
      local_208 = local_258;
      uStack_200 = uStack_250;
      local_1f8 = local_248;
      uStack_1f0 = uStack_240;
      local_228._8_8_ = uVar53;
      local_228._0_8_ = uVar51;
      local_218 = auVar52;
      local_1e8 = dVar46;
      transform<linalg::vec<double,3>const*,linalg::vec<double,3>*,(anonymous_namespace)::TransformNormals>
                (*(long *)(in_RSI + 0x78),*(long *)(in_RSI + 0x78) + *(long *)(in_RSI + 0x80) * 0x18
                 ,puVar33);
      dVar61 = in_RDX[6];
      dVar45 = in_RDX[7];
      dVar46 = in_RDX[8];
      dVar3 = *in_RDX;
      dVar2 = in_RDX[1];
      dVar50 = in_RDX[2];
      lVar7 = *(long *)(in_RSI + 0xb0);
      dVar43 = in_RDX[3];
      dVar58 = in_RDX[4];
      dVar60 = in_RDX[5];
      dVar47 = (dVar46 * dVar58 - dVar60 * dVar45) * dVar3 +
               (dVar60 * dVar61 - dVar46 * dVar43) * dVar2 +
               (dVar45 * dVar43 - dVar58 * dVar61) * dVar50;
      if (lVar7 != 0) {
        lVar9 = *(long *)(in_RSI + 0xa8);
        lVar34 = 0;
        lVar10 = *(long *)(in_RSI + 0x60);
        do {
          iVar31 = (int)lVar34;
          lVar28 = (long)iVar31;
          if (dVar47 < 0.0) {
            iVar31 = *(int *)(lVar10 + 8 + (long)(((iVar31 / 3) * 6 - iVar31) + 2) * 0xc);
          }
          lVar34 = lVar34 + 1;
          pdVar37 = (double *)((long)iVar31 * 0x20 + lVar9);
          pdVar32 = (double *)(local_130 + lVar28 * 4);
          dVar57 = *pdVar37;
          dVar54 = pdVar37[1];
          dVar41 = pdVar37[2];
          pdVar32[3] = pdVar37[3];
          *pdVar32 = dVar54 * dVar43 + dVar57 * dVar3 + dVar41 * dVar61;
          pdVar32[1] = dVar54 * dVar58 + dVar57 * dVar2 + dVar41 * dVar45;
          pdVar32[2] = dVar57 * dVar50 + dVar54 * dVar60 + dVar41 * dVar46;
        } while (lVar7 != lVar34);
      }
      uVar51 = _LC9;
      if (dVar47 < 0.0) {
        if (2 < (ulong)local_170._0_8_) {
          uVar40 = 0;
          do {
            iVar31 = (int)uVar40 * 3;
            local_48 = 2;
            local_50 = uVar51;
            puVar33 = (undefined8 *)((long)local_178 + (long)iVar31 * 0xc);
            puVar30 = (undefined8 *)((long)local_178 + (long)(iVar31 + 2) * 0xc);
            uVar53 = *puVar33;
            uVar4 = *(undefined4 *)(puVar33 + 1);
            *puVar33 = *puVar30;
            *(undefined4 *)(puVar33 + 1) = *(undefined4 *)(puVar30 + 1);
            *(undefined4 *)(puVar30 + 1) = uVar4;
            *puVar30 = uVar53;
            piVar39 = (int *)&local_50;
            do {
              iVar5 = *piVar39;
              piVar39 = piVar39 + 1;
              puVar1 = (ulong *)((long)local_178 + (long)(iVar5 + iVar31) * 0xc);
              *puVar1 = *puVar1 << 0x20 | *puVar1 >> 0x20;
              *(int *)(puVar1 + 1) = (((int)puVar1[1] / 3) * 6 - (int)puVar1[1]) + 2;
            } while (&local_44 != piVar39);
            uVar40 = uVar40 + 1;
          } while ((ulong)local_170._0_8_ / 3 != uVar40);
        }
      }
      cVar24 = Collider::Transform(&local_98);
      if (cVar24 == '\0') {
        Update((Impl *)&local_1d8);
      }
      manifold::Manifold::Impl::CalculateBBox();
      dVar46 = (double)SpectralNorm();
      SetEpsilon((Impl *)&local_1d8,dVar46 * local_1a8,false);
      Impl((Impl *)param_1,(Impl *)&local_1d8);
    }
  }
  else {
    local_198 = *(int *)(in_RSI + 0x40);
    Impl((Impl *)param_1,(Impl *)&local_1d8);
  }
  if (local_68 != (void *)0x0) {
    free(local_68);
  }
  if (local_80 != (undefined4 *)0x0) {
    free(local_80);
  }
  if (local_98 != (undefined8 *)0x0) {
    free(local_98);
  }
  if (local_b0 != (undefined8 *)0x0) {
    free(local_b0);
  }
  p_Var23 = local_e8;
  if (local_c8 != (undefined8 *)0x0) {
    free(local_c8);
    p_Var23 = local_e8;
  }
  while (p_Var23 != (_Rb_tree_node *)0x0) {
    std::
    _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
    ::_M_erase(*(_Rb_tree_node **)(p_Var23 + 0x18));
    p_Var8 = *(_Rb_tree_node **)(p_Var23 + 0x10);
    operator_delete(p_Var23,0x98);
    p_Var23 = p_Var8;
  }
  if (local_110 != (undefined8 *)0x0) {
    free(local_110);
  }
  if (local_130 != (undefined8 *)0x0) {
    free(local_130);
  }
  if (local_148 != (undefined8 *)0x0) {
    free(local_148);
  }
  if (local_160 != (undefined8 *)0x0) {
    free(local_160);
  }
  if (local_178 != (undefined8 *)0x0) {
    free(local_178);
  }
  if (local_190 != (double *)0x0) {
    free(local_190);
  }
LAB_0010417c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Impl::CalculateNormals() */

void __thiscall manifold::Manifold::Impl::CalculateNormals(Impl *this)

{
  double *pdVar1;
  int iVar2;
  double *pdVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 (*pauVar12) [16];
  int *piVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *__dest;
  undefined1 (*pauVar17) [16];
  int *piVar18;
  undefined1 (*pauVar19) [16];
  ulong uVar20;
  size_t sVar21;
  undefined8 *puVar22;
  int iVar23;
  double *pdVar24;
  long lVar25;
  double *pdVar26;
  double *pdVar27;
  ulong uVar28;
  ulong uVar29;
  long in_FS_OFFSET;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  vec *local_188;
  int *local_178;
  undefined8 *local_f0;
  int local_c8 [4];
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined8 local_98;
  undefined4 local_90;
  int local_8c;
  undefined1 local_88 [12];
  int iStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  double local_48;
  long local_40;
  
  uVar29 = *(ulong *)(this + 0x50);
  uVar28 = *(ulong *)(this + 0x80);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar20 = uVar29 * 2;
  uVar16 = uVar28;
  if (*(ulong *)(this + 0x88) < uVar29) {
    pauVar17 = (undefined1 (*) [16])malloc(uVar29 * 0x18);
    puVar22 = *(undefined8 **)(this + 0x78);
    if (uVar28 == 0) {
      if (puVar22 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x78) = pauVar17;
        uVar16 = 0;
        *(ulong *)(this + 0x88) = uVar29;
        goto LAB_00104f60;
      }
LAB_00105fc1:
      free(puVar22);
      uVar16 = *(ulong *)(this + 0x80);
    }
    else {
      sVar21 = uVar28 * 0x18;
      if (0x18 < (long)sVar21) {
        memmove(pauVar17,puVar22,sVar21);
        goto LAB_00105fc1;
      }
      if (sVar21 == 0x18) {
        uVar5 = puVar22[1];
        *(undefined8 *)*pauVar17 = *puVar22;
        *(undefined8 *)(*pauVar17 + 8) = uVar5;
        *(undefined8 *)pauVar17[1] = puVar22[2];
        goto LAB_00105fc1;
      }
      if (puVar22 != (undefined8 *)0x0) goto LAB_00105fc1;
    }
    *(undefined1 (**) [16])(this + 0x78) = pauVar17;
    *(ulong *)(this + 0x88) = uVar29;
    if (uVar16 < uVar29) goto LAB_00104f60;
    *(ulong *)(this + 0x80) = uVar29;
    if (uVar20 < uVar28) goto LAB_00105f65;
    pauVar19 = (undefined1 (*) [16])(uVar29 * 0x18 + (long)pauVar17);
  }
  else {
    if (uVar28 < uVar29) {
      pauVar17 = *(undefined1 (**) [16])(this + 0x78);
LAB_00104f60:
      pauVar19 = (undefined1 (*) [16])((long)pauVar17 + uVar29 * 0x18);
      pauVar12 = (undefined1 (*) [16])((long)pauVar17 + uVar16 * 0x18);
      if (pauVar19 == pauVar12) {
        *(ulong *)(this + 0x80) = uVar29;
        if (uVar28 <= uVar20) goto LAB_00104fb2;
      }
      else {
        do {
          *(undefined8 *)pauVar12[1] = 0;
          pauVar17 = pauVar12 + 1;
          *pauVar12 = (undefined1  [16])0x0;
          pauVar12 = (undefined1 (*) [16])(*pauVar17 + 8);
        } while (pauVar19 != (undefined1 (*) [16])(*pauVar17 + 8));
        *(ulong *)(this + 0x80) = uVar29;
        if (uVar28 <= uVar20) goto LAB_00104fa6;
      }
LAB_00105f65:
      sVar21 = uVar29 * 0x18;
      pauVar17 = (undefined1 (*) [16])malloc(sVar21);
      puVar22 = *(undefined8 **)(this + 0x78);
      if ((long)sVar21 < 0x19) {
        if (sVar21 != 0x18) goto LAB_0010564f;
        uVar5 = puVar22[1];
        *(undefined8 *)*pauVar17 = *puVar22;
        *(undefined8 *)(*pauVar17 + 8) = uVar5;
        *(undefined8 *)pauVar17[1] = puVar22[2];
      }
      else {
        memmove(pauVar17,puVar22,sVar21);
      }
LAB_00105f8d:
      free(puVar22);
    }
    else {
      *(ulong *)(this + 0x80) = uVar29;
      if (uVar28 <= uVar20) {
LAB_00104fa6:
        pauVar17 = *(undefined1 (**) [16])(this + 0x78);
        pauVar19 = (undefined1 (*) [16])((long)pauVar17 + uVar29 * 0x18);
        goto LAB_00104fb2;
      }
      if (uVar29 != 0) goto LAB_00105f65;
      puVar22 = *(undefined8 **)(this + 0x78);
      pauVar17 = (undefined1 (*) [16])0x0;
LAB_0010564f:
      if (puVar22 != (undefined8 *)0x0) goto LAB_00105f8d;
    }
    *(undefined1 (**) [16])(this + 0x78) = pauVar17;
    *(long *)(this + 0x88) = *(long *)(this + 0x80);
    pauVar19 = (undefined1 (*) [16])((long)pauVar17 + *(long *)(this + 0x80) * 0x18);
  }
LAB_00104fb2:
  uVar29 = *(ulong *)(this + 0x68);
  uVar5 = _LC9;
  dVar6 = _LC32;
  dVar32 = _LC28;
  for (pauVar12 = pauVar17; _LC9 = uVar5, _LC32 = dVar6, _LC28 = dVar32, pauVar12 != pauVar19;
      pauVar12 = (undefined1 (*) [16])(pauVar12[1] + 8)) {
    *(undefined8 *)pauVar12[1] = 0;
    *pauVar12 = (undefined1  [16])0x0;
    uVar5 = _LC9;
    dVar6 = _LC32;
    dVar32 = _LC28;
  }
  uVar28 = *(ulong *)(this + 0x98);
  uVar20 = uVar29 / 3;
  if (uVar28 == uVar20) {
    lVar4 = *(long *)(this + 0x90);
    lVar14 = *(long *)(this + 0x60);
    pdVar3 = *(double **)(this + 0x48);
    dVar30 = _LC6;
    uVar28 = _LC14;
    if (uVar29 < 3) goto joined_r0x00105599;
    uVar29 = 0;
    do {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_c8[2] = 0;
      local_88._8_4_ = 2;
      pdVar1 = (double *)(lVar4 + (long)(int)uVar29 * 0x18);
      local_88._0_8_ = uVar5;
      piVar13 = (int *)local_88;
      do {
        local_178 = (int *)&local_98;
        iVar2 = *piVar13;
        piVar18 = local_c8;
        if ((iVar2 != 0) && (piVar18 = local_c8 + 2, iVar2 == 1)) {
          piVar18 = local_c8 + 1;
        }
        piVar13 = piVar13 + 1;
        *piVar18 = *(int *)(lVar14 + (long)((int)uVar29 * 3 + iVar2) * 0xc);
      } while (piVar13 != (int *)(local_88 + 0xc));
      local_48 = 0.0;
      local_90 = 2;
      lVar15 = (long)local_c8[2];
      _local_88 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      pdVar24 = pdVar3 + lVar15 * 3;
      do {
        iVar2 = *local_178;
        pdVar26 = pdVar3;
        pdVar27 = pdVar3;
        if ((iVar2 != 0) &&
           ((iVar2 == 1 ||
            ((iVar23 = (iVar2 + 1) % 3, pdVar26 = pdVar24, iVar23 != 0 && (iVar23 != 1)))))) {
          pdVar27 = pdVar24;
        }
        dVar34 = pdVar27[2] - pdVar26[2];
        local_178 = local_178 + 1;
        auVar38._0_8_ = *pdVar27 - *pdVar26;
        auVar38._8_8_ = pdVar27[1] - pdVar26[1];
        dVar30 = SQRT(dVar34 * dVar34 +
                      auVar38._0_8_ * auVar38._0_8_ + 0.0 + auVar38._8_8_ * auVar38._8_8_);
        auVar36._8_8_ = dVar30;
        auVar36._0_8_ = dVar30;
        auVar36 = divpd(auVar38,auVar36);
        *(undefined1 (*) [16])((long)local_88 + (long)iVar2 * 6 * 4) = auVar36;
        *(double *)(local_78 + (long)iVar2 * 0x18) = dVar34 / dVar30;
      } while (&local_8c != local_178);
      uVar7 = local_88._0_8_;
      dVar30 = stack0xffffffffffffff80;
      uVar8 = local_78._0_8_;
      dVar40 = (double)local_58._0_8_ * (double)local_88._0_8_ + 0.0 +
               (double)local_58._8_8_ * stack0xffffffffffffff80 + local_48 * (double)local_78._0_8_;
      dVar34 = 0.0;
      local_98 = uVar5;
      if ((dVar32 < dVar40) && (dVar34 = dVar6, dVar40 < _LC5)) {
        dVar34 = acos((double)((ulong)dVar40 ^ _LC8));
      }
      dVar40 = (double)uVar7 * (double)local_78._8_8_ + 0.0 + dVar30 * (double)local_68._0_8_ +
               (double)uVar8 * (double)local_68._8_8_;
      dVar30 = 0.0;
      if ((dVar32 < dVar40) && (dVar30 = dVar6, dVar40 < _LC5)) {
        dVar30 = acos((double)((ulong)dVar40 ^ _LC8));
      }
      local_178 = (int *)&local_98;
      local_90 = 2;
      dVar40 = (dVar6 - dVar34) - dVar30;
      local_98 = uVar5;
      do {
        local_188 = (vec *)&local_b8;
        local_b8 = *pdVar1;
        dStack_b0 = pdVar1[1];
        local_a8 = pdVar1[2];
        if (*local_178 == 0) {
          local_b8 = local_b8 * dVar34;
          dStack_b0 = dStack_b0 * dVar34;
          local_a8 = local_a8 * dVar34;
          lVar25 = 0;
        }
        else if (*local_178 == 1) {
          local_b8 = local_b8 * dVar30;
          dStack_b0 = dStack_b0 * dVar30;
          local_a8 = local_a8 * dVar30;
          lVar25 = (long)local_c8[1] * 0x18;
        }
        else {
          local_b8 = local_b8 * dVar40;
          dStack_b0 = dStack_b0 * dVar40;
          local_a8 = local_a8 * dVar40;
          lVar25 = lVar15 * 0x18;
        }
        local_178 = local_178 + 1;
        (anonymous_namespace)::AtomicAddVec3((vec *)(*pauVar17 + lVar25),local_188);
      } while (&local_8c != local_178);
      uVar29 = uVar29 + 1;
    } while (uVar20 != uVar29);
LAB_00105579:
    pauVar17 = *(undefined1 (**) [16])(this + 0x78);
  }
  else {
    uVar16 = uVar28;
    if (*(ulong *)(this + 0xa0) < uVar20) {
      __dest = (undefined8 *)malloc(uVar20 * 0x18);
      puVar22 = *(undefined8 **)(this + 0x90);
      if (uVar28 != 0) {
        sVar21 = uVar28 * 0x18;
        if ((long)sVar21 < 0x19) {
          if (sVar21 == 0x18) {
            uVar5 = puVar22[1];
            *__dest = *puVar22;
            __dest[1] = uVar5;
            __dest[2] = puVar22[2];
            goto LAB_00106087;
          }
          if (puVar22 != (undefined8 *)0x0) goto LAB_00106087;
        }
        else {
          memmove(__dest,puVar22,sVar21);
LAB_00106087:
          free(puVar22);
          uVar16 = *(ulong *)(this + 0x98);
        }
        *(undefined8 **)(this + 0x90) = __dest;
        *(ulong *)(this + 0xa0) = uVar20;
        goto LAB_00105016;
      }
      if (puVar22 != (undefined8 *)0x0) goto LAB_00106087;
      *(undefined8 **)(this + 0x90) = __dest;
      *(ulong *)(this + 0xa0) = uVar20;
LAB_00105ec2:
      pauVar17 = (undefined1 (*) [16])(*(long *)(this + 0x90) + uVar20 * 0x18);
      pauVar19 = (undefined1 (*) [16])(*(long *)(this + 0x90) + uVar16 * 0x18);
      if (pauVar17 == pauVar19) goto LAB_0010501f;
      do {
        *(undefined8 *)pauVar19[1] = 0;
        pauVar12 = pauVar19 + 1;
        *pauVar19 = (undefined1  [16])0x0;
        pauVar19 = (undefined1 (*) [16])(*pauVar12 + 8);
      } while (pauVar17 != (undefined1 (*) [16])(*pauVar12 + 8));
      *(ulong *)(this + 0x98) = uVar20;
      if (uVar28 <= uVar20 * 2) goto LAB_00105030;
LAB_00105f16:
      if (uVar29 < 3) {
        local_f0 = (undefined8 *)0x0;
        puVar22 = *(undefined8 **)(this + 0x90);
LAB_00105f34:
        if (puVar22 != (undefined8 *)0x0) goto LAB_00106043;
      }
      else {
        sVar21 = uVar20 * 0x18;
        local_f0 = (undefined8 *)malloc(sVar21);
        puVar22 = *(undefined8 **)(this + 0x90);
        if ((long)sVar21 < 0x19) {
          if (sVar21 != 0x18) goto LAB_00105f34;
          uVar5 = puVar22[1];
          *local_f0 = *puVar22;
          local_f0[1] = uVar5;
          local_f0[2] = puVar22[2];
        }
        else {
          memmove(local_f0,puVar22,sVar21);
        }
LAB_00106043:
        free(puVar22);
        uVar20 = *(ulong *)(this + 0x98);
      }
      *(ulong *)(this + 0xa0) = uVar20;
      *(undefined8 **)(this + 0x90) = local_f0;
    }
    else {
LAB_00105016:
      if (uVar16 < uVar20) goto LAB_00105ec2;
LAB_0010501f:
      *(ulong *)(this + 0x98) = uVar20;
      if (uVar20 * 2 < uVar28) goto LAB_00105f16;
LAB_00105030:
      local_f0 = *(undefined8 **)(this + 0x90);
    }
    dVar32 = _LC28;
    dVar6 = _LC32;
    uVar5 = _LC9;
    uVar29 = *(ulong *)(this + 0x68);
    pauVar17 = *(undefined1 (**) [16])(this + 0x78);
    pdVar3 = *(double **)(this + 0x48);
    lVar4 = *(long *)(this + 0x60);
    if (2 < uVar29) {
      uVar28 = 0;
      do {
        local_c8[0] = 0;
        local_c8[1] = 0;
        local_c8[2] = 0;
        local_88._8_4_ = 2;
        pauVar19 = (undefined1 (*) [16])(local_f0 + (long)(int)uVar28 * 3);
        local_88._0_8_ = uVar5;
        piVar13 = (int *)local_88;
        do {
          iVar2 = *piVar13;
          piVar18 = local_c8;
          if ((iVar2 != 0) && (piVar18 = local_c8 + 2, iVar2 == 1)) {
            piVar18 = local_c8 + 1;
          }
          *piVar18 = *(int *)(lVar4 + (long)((int)uVar28 * 3 + iVar2) * 0xc);
          piVar13 = piVar13 + 1;
        } while ((int *)(local_88 + 0xc) != piVar13);
        local_48 = 0.0;
        local_90 = 2;
        lVar14 = (long)local_c8[2];
        _local_88 = (undefined1  [16])0x0;
        local_78 = (undefined1  [16])0x0;
        local_68 = (undefined1  [16])0x0;
        local_58 = (undefined1  [16])0x0;
        pdVar1 = pdVar3 + lVar14 * 3;
        piVar13 = (int *)&local_98;
        do {
          iVar2 = *piVar13;
          pdVar24 = pdVar3;
          pdVar26 = pdVar3;
          if ((iVar2 != 0) &&
             ((iVar2 == 1 ||
              ((iVar23 = (iVar2 + 1) % 3, pdVar24 = pdVar1, iVar23 != 0 && (iVar23 != 1)))))) {
            pdVar26 = pdVar1;
          }
          piVar13 = piVar13 + 1;
          dVar34 = pdVar26[2] - pdVar24[2];
          auVar35._0_8_ = *pdVar26 - *pdVar24;
          auVar35._8_8_ = pdVar26[1] - pdVar24[1];
          dVar30 = SQRT(dVar34 * dVar34 +
                        auVar35._0_8_ * auVar35._0_8_ + 0.0 + auVar35._8_8_ * auVar35._8_8_);
          auVar33._8_8_ = dVar30;
          auVar33._0_8_ = dVar30;
          auVar36 = divpd(auVar35,auVar33);
          *(undefined1 (*) [16])((long)local_88 + (long)iVar2 * 6 * 4) = auVar36;
          *(double *)(local_78 + (long)iVar2 * 0x18) = dVar34 / dVar30;
        } while (piVar13 != &local_8c);
        uVar10 = local_68._0_8_;
        uVar11 = local_68._8_8_;
        dVar34 = stack0xffffffffffffff80;
        uVar8 = local_78._0_8_;
        uVar9 = local_78._8_8_;
        uVar7 = local_88._0_8_;
        auVar39._0_8_ =
             (double)local_68._8_8_ * stack0xffffffffffffff80 -
             (double)local_78._0_8_ * (double)local_68._0_8_;
        auVar39._8_8_ =
             (double)local_78._8_8_ * (double)local_78._0_8_ -
             (double)local_68._8_8_ * (double)local_88._0_8_;
        dVar40 = (double)local_88._0_8_ * (double)local_68._0_8_ -
                 stack0xffffffffffffff80 * (double)local_78._8_8_;
        dVar30 = SQRT(dVar40 * dVar40 +
                      auVar39._0_8_ * auVar39._0_8_ + 0.0 + auVar39._8_8_ * auVar39._8_8_);
        auVar37._8_8_ = dVar30;
        auVar37._0_8_ = dVar30;
        auVar36 = divpd(auVar39,auVar37);
        *(double *)pauVar19[1] = dVar40 / dVar30;
        *pauVar19 = auVar36;
        dVar30 = _LC5;
        if (NAN(auVar36._0_8_)) {
          *pauVar19 = (undefined1  [16])0x0;
          *(double *)pauVar19[1] = dVar30;
        }
        dVar40 = (double)local_58._0_8_ * (double)local_88._0_8_ + 0.0 +
                 (double)local_58._8_8_ * stack0xffffffffffffff80 +
                 local_48 * (double)local_78._0_8_;
        dVar30 = 0.0;
        local_98 = uVar5;
        if ((dVar32 < dVar40) && (dVar30 = dVar6, dVar40 < _LC5)) {
          dVar30 = acos((double)((ulong)dVar40 ^ _LC8));
        }
        dVar40 = (double)uVar7 * (double)uVar9 + 0.0 + dVar34 * (double)uVar10 +
                 (double)uVar11 * (double)uVar8;
        dVar34 = 0.0;
        if ((dVar32 < dVar40) && (dVar34 = dVar6, dVar40 < _LC5)) {
          dVar34 = acos((double)((ulong)dVar40 ^ _LC8));
        }
        local_90 = 2;
        dVar40 = (dVar6 - dVar30) - dVar34;
        piVar13 = (int *)&local_98;
        local_98 = uVar5;
        do {
          local_a8 = *(double *)pauVar19[1];
          local_b8 = *(double *)*pauVar19;
          dStack_b0 = *(double *)(*pauVar19 + 8);
          if (*piVar13 == 0) {
            local_b8 = local_b8 * dVar30;
            dStack_b0 = dStack_b0 * dVar30;
            local_a8 = local_a8 * dVar30;
            lVar15 = 0;
          }
          else if (*piVar13 == 1) {
            local_b8 = local_b8 * dVar34;
            dStack_b0 = dStack_b0 * dVar34;
            local_a8 = local_a8 * dVar34;
            lVar15 = (long)local_c8[1] * 0x18;
          }
          else {
            local_b8 = local_b8 * dVar40;
            dStack_b0 = dStack_b0 * dVar40;
            local_a8 = local_a8 * dVar40;
            lVar15 = lVar14 * 0x18;
          }
          piVar13 = piVar13 + 1;
          (anonymous_namespace)::AtomicAddVec3((vec *)(*pauVar17 + lVar15),(vec *)&local_b8);
        } while (&local_8c != piVar13);
        uVar28 = uVar28 + 1;
      } while (uVar29 / 3 != uVar28);
      goto LAB_00105579;
    }
  }
  pauVar19 = (undefined1 (*) [16])((long)pauVar17 + *(long *)(this + 0x80) * 0x18);
  dVar30 = _LC6;
  uVar28 = _LC14;
joined_r0x00105599:
  for (; uVar29 = _LC14, dVar6 = _LC6, pauVar17 != pauVar19;
      pauVar17 = (undefined1 (*) [16])(pauVar17[1] + 8)) {
    dVar32 = *(double *)*pauVar17;
    dVar34 = *(double *)(*pauVar17 + 8);
    dVar40 = *(double *)pauVar17[1];
    dVar31 = SQRT(dVar32 * dVar32 + 0.0 + dVar34 * dVar34 + dVar40 * dVar40);
    dVar32 = dVar32 / dVar31;
    if ((double)((ulong)dVar32 & _LC14) <= _LC6) {
      dVar34 = dVar34 / dVar31;
      dVar40 = dVar40 / dVar31;
    }
    else {
      dVar32 = 0.0;
      dVar34 = 0.0;
      dVar40 = 0.0;
    }
    _LC6 = dVar30;
    _LC14 = uVar28;
    *(double *)*pauVar17 = dVar32;
    *(double *)(*pauVar17 + 8) = dVar34;
    *(double *)pauVar17[1] = dVar40;
    dVar30 = _LC6;
    uVar28 = _LC14;
    _LC14 = uVar29;
    _LC6 = dVar6;
  }
  _LC6 = dVar30;
  _LC14 = uVar28;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* manifold::Manifold::Impl::IncrementMeshIDs() */

void __thiscall manifold::Manifold::Impl::IncrementMeshIDs(Impl *this)

{
  _Rb_tree_node_base *p_Var1;
  ulong *puVar2;
  int *piVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  _Rb_tree_node_base *p_Var9;
  _Rb_tree_node_base *p_Var10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  size_t __size;
  bool bVar15;
  _Rb_tree_node_base *p_Var16;
  int *piVar17;
  _Rb_tree_node_base *p_Var18;
  long in_FS_OFFSET;
  byte bVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined4 local_b0 [2];
  void *local_a8;
  _Rb_tree_node_base *p_Stack_a0;
  _Rb_tree_node_base *local_98;
  ulong local_90;
  void *local_88;
  undefined1 auStack_80 [16];
  void *pvStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  int iStack_50;
  long lStack_40;
  
  bVar19 = 0;
  uVar8 = *(ulong *)(this + 0x108);
  lStack_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar12 = uVar8 * 2;
  if (lVar12 == 0) {
    local_88 = (void *)0x0;
    pvStack_70 = (void *)0x0;
    lStack_60 = 0;
    auStack_80 = (undefined1  [16])0x0;
  }
  else {
    if (lVar12 < 0) {
      dVar21 = (double)(uVar8 & 0x7fffffffffffffff) + (double)(uVar8 & 0x7fffffffffffffff);
    }
    else {
      dVar21 = (double)lVar12;
    }
    dVar20 = log2(dVar21);
    if ((double)((ulong)dVar20 & _LC14) < _LC34) {
      dVar20 = (double)((ulong)((double)(long)dVar20 +
                               (double)(-(ulong)((double)(long)dVar20 < dVar20) & _LC5)) |
                       ~_LC14 & (ulong)dVar20);
    }
    __size = 8L << ((byte)(int)dVar20 & 0x3f);
    lVar12 = 1L << ((byte)(int)dVar20 & 0x3f);
    local_88 = malloc(__size);
    auStack_80._8_8_ = lVar12;
    if (__size != 0) {
      memset(local_88,0xff,__size);
    }
    auStack_80._0_8_ = lVar12;
    dVar21 = log2(dVar21);
    if ((double)((ulong)dVar21 & _LC14) < _LC34) {
      dVar21 = (double)((ulong)((double)(long)dVar21 +
                               (double)(-(ulong)((double)(long)dVar21 < dVar21) & _LC5)) |
                       ~_LC14 & (ulong)dVar21);
    }
    pvStack_70 = calloc(4L << ((byte)(int)dVar21 & 0x3f),1);
    lStack_60 = 1L << ((byte)(int)dVar21 & 0x3f);
  }
  pvVar4 = *(void **)(this + 0xf0);
  iVar14 = 0;
  local_58 = 0;
  iStack_50 = 1;
  local_b0[0] = 0;
  local_a8 = (void *)0x0;
  local_90 = 0;
  p_Stack_a0 = (_Rb_tree_node_base *)local_b0;
  local_98 = (_Rb_tree_node_base *)local_b0;
  if (pvVar4 != (void *)0x0) {
    local_b0[0] = *(undefined4 *)(this + 0xe8);
    iVar14 = (int)uVar8;
    p_Stack_a0 = *(_Rb_tree_node_base **)(this + 0xf8);
    local_98 = *(_Rb_tree_node_base **)(this + 0x100);
    *(_Rb_tree_node_base **)((long)pvVar4 + 8) = (_Rb_tree_node_base *)local_b0;
    *(undefined8 *)(this + 0xf0) = 0;
    *(Impl **)(this + 0xf8) = this + 0xe8;
    *(Impl **)(this + 0x100) = this + 0xe8;
    *(undefined8 *)(this + 0x108) = 0;
    local_a8 = pvVar4;
    local_90 = uVar8;
  }
  LOCK();
  UNLOCK();
  p_Var1 = (_Rb_tree_node_base *)(this + 0xe8);
  iVar7 = meshIDCounter_ + iVar14;
  iVar14 = meshIDCounter_;
  p_Var10 = p_Stack_a0;
  local_68 = lStack_60;
  do {
    meshIDCounter_ = iVar7;
    iVar7 = auStack_80._0_4_;
    if (p_Var10 == (_Rb_tree_node_base *)local_b0) {
      piVar17 = *(int **)(this + 0x110);
      piVar3 = piVar17 + (*(ulong *)(this + 0x68) / 3) * 4;
      for (; pvVar4 = local_a8, piVar17 != piVar3; piVar17 = piVar17 + 4) {
        uVar11 = (ulong)*piVar17;
        uVar8 = (uVar11 >> 0x1e ^ uVar11) * -0x40a7b892e31b1a47;
        uVar8 = (uVar8 >> 0x1b ^ uVar8) * -0x6b2fb644ecceee15;
        uVar13 = (uint)uVar8 ^ (uint)(uVar8 >> 0x1f);
        while( true ) {
          uVar13 = uVar13 & iVar7 - 1U;
          uVar8 = *(ulong *)((long)local_88 + (ulong)uVar13 * 8);
          if ((uVar11 == uVar8) || (uVar8 == 0xffffffffffffffff)) break;
          uVar13 = uVar13 + iStack_50;
        }
        *piVar17 = *(int *)((long)pvStack_70 + (ulong)uVar13 * 4);
      }
      while (pvVar4 != (void *)0x0) {
        std::
        _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
        ::_M_erase(*(_Rb_tree_node **)((long)pvVar4 + 0x18));
        pvVar5 = *(void **)((long)pvVar4 + 0x10);
        operator_delete(pvVar4,0x98);
        pvVar4 = pvVar5;
      }
      if (pvStack_70 != (void *)0x0) {
        free(pvStack_70);
      }
      if (local_88 != (void *)0x0) {
        free(local_88);
      }
      if (lStack_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    uVar11 = (ulong)*(int *)(p_Var10 + 0x20);
    uVar8 = (uVar11 >> 0x1e ^ uVar11) * -0x40a7b892e31b1a47;
    uVar8 = (uVar8 >> 0x1b ^ uVar8) * -0x6b2fb644ecceee15;
    uVar13 = (uint)uVar8 ^ (uint)(uVar8 >> 0x1f);
    while (uVar13 = uVar13 & iVar7 - 1U, (ulong)(local_58 * 2) <= (ulong)(long)iVar7) {
      puVar2 = (ulong *)((long)local_88 + (ulong)uVar13 * 8);
      LOCK();
      uVar8 = *puVar2;
      if (uVar8 == 0xffffffffffffffff) {
        *puVar2 = uVar11;
        uVar8 = 0xffffffffffffffff;
      }
      UNLOCK();
      if (uVar8 == 0xffffffffffffffff) {
        LOCK();
        local_58 = local_58 + 1;
        UNLOCK();
        *(int *)((long)pvStack_70 + (ulong)uVar13 * 4) = iVar14;
        break;
      }
      if (uVar11 == uVar8) break;
      uVar13 = uVar13 + iStack_50;
    }
    p_Var16 = *(_Rb_tree_node_base **)(this + 0xf0);
    p_Var18 = p_Var1;
    if (*(_Rb_tree_node_base **)(this + 0xf0) == (_Rb_tree_node_base *)0x0) {
LAB_0010636f:
      p_Var9 = (_Rb_tree_node_base *)operator_new(0x98);
      *(int *)(p_Var9 + 0x20) = iVar14;
      p_Var16 = p_Var9 + 0x28;
      for (lVar12 = 0xe; lVar12 != 0; lVar12 = lVar12 + -1) {
        *(undefined8 *)p_Var16 = 0;
        p_Var16 = p_Var16 + (ulong)bVar19 * -0x10 + 8;
      }
      *(undefined2 *)(p_Var9 + 0x56) = 0x3ff0;
      *(undefined2 *)(p_Var9 + 0x36) = 0x3ff0;
      *(undefined4 *)(p_Var9 + 0x28) = 0xffffffff;
      *(undefined2 *)(p_Var9 + 0x76) = 0x3ff0;
      auVar22 = std::
                _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
                ::_M_get_insert_hint_unique_pos
                          ((_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
                            *)(this + 0xe0),p_Var18,iVar14);
      p_Var16 = auVar22._8_8_;
      p_Var18 = auVar22._0_8_;
      if (p_Var16 == (_Rb_tree_node_base *)0x0) {
        operator_delete(p_Var9,0x98);
      }
      else {
        if ((p_Var1 == p_Var16) || (p_Var18 != (_Rb_tree_node_base *)0x0)) {
          bVar15 = true;
        }
        else {
          bVar15 = iVar14 < *(int *)(p_Var16 + 0x20);
        }
        std::_Rb_tree_insert_and_rebalance(bVar15,p_Var9,p_Var16,p_Var1);
        *(long *)(this + 0x108) = *(long *)(this + 0x108) + 1;
        p_Var18 = p_Var9;
      }
    }
    else {
      do {
        while( true ) {
          p_Var9 = p_Var16;
          if (*(int *)(p_Var9 + 0x20) < iVar14) break;
          p_Var16 = *(_Rb_tree_node_base **)(p_Var9 + 0x10);
          p_Var18 = p_Var9;
          if (*(_Rb_tree_node_base **)(p_Var9 + 0x10) == (_Rb_tree_node_base *)0x0)
          goto LAB_00106360;
        }
        p_Var16 = *(_Rb_tree_node_base **)(p_Var9 + 0x18);
      } while (*(_Rb_tree_node_base **)(p_Var9 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_00106360:
      if ((p_Var1 == p_Var18) || (iVar14 < *(int *)(p_Var18 + 0x20))) goto LAB_0010636f;
    }
    uVar6 = *(undefined8 *)(p_Var10 + 0x30);
    iVar14 = iVar14 + 1;
    *(undefined8 *)(p_Var18 + 0x28) = *(undefined8 *)(p_Var10 + 0x28);
    *(undefined8 *)(p_Var18 + 0x30) = uVar6;
    uVar6 = *(undefined8 *)(p_Var10 + 0x40);
    *(undefined8 *)(p_Var18 + 0x38) = *(undefined8 *)(p_Var10 + 0x38);
    *(undefined8 *)(p_Var18 + 0x40) = uVar6;
    uVar6 = *(undefined8 *)(p_Var10 + 0x50);
    *(undefined8 *)(p_Var18 + 0x48) = *(undefined8 *)(p_Var10 + 0x48);
    *(undefined8 *)(p_Var18 + 0x50) = uVar6;
    uVar6 = *(undefined8 *)(p_Var10 + 0x60);
    *(undefined8 *)(p_Var18 + 0x58) = *(undefined8 *)(p_Var10 + 0x58);
    *(undefined8 *)(p_Var18 + 0x60) = uVar6;
    uVar6 = *(undefined8 *)(p_Var10 + 0x70);
    *(undefined8 *)(p_Var18 + 0x68) = *(undefined8 *)(p_Var10 + 0x68);
    *(undefined8 *)(p_Var18 + 0x70) = uVar6;
    uVar6 = *(undefined8 *)(p_Var10 + 0x80);
    *(undefined8 *)(p_Var18 + 0x78) = *(undefined8 *)(p_Var10 + 0x78);
    *(undefined8 *)(p_Var18 + 0x80) = uVar6;
    uVar6 = *(undefined8 *)(p_Var10 + 0x89);
    *(undefined8 *)(p_Var18 + 0x81) = *(undefined8 *)(p_Var10 + 0x81);
    *(undefined8 *)(p_Var18 + 0x89) = uVar6;
    p_Var10 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var10);
    iVar7 = meshIDCounter_;
  } while( true );
}



/* manifold::Manifold::Impl::EdgeCollisions(manifold::Manifold::Impl const&, bool) const */

Impl * manifold::Manifold::Impl::EdgeCollisions(Impl *param_1,bool param_2)

{
  uint *puVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  double *pdVar8;
  long lVar9;
  int *piVar10;
  void *__ptr;
  char in_CL;
  uint uVar11;
  int iVar12;
  long lVar13;
  long in_RDX;
  ulong uVar14;
  int *piVar15;
  ulong uVar16;
  double *pdVar17;
  undefined7 in_register_00000031;
  int *piVar18;
  double *pdVar19;
  ulong uVar20;
  ulong uVar21;
  ulong __size;
  void *__ptr_00;
  long lVar22;
  int iVar23;
  int iVar24;
  long in_FS_OFFSET;
  bool bVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  void *local_188;
  long local_180;
  int *local_168;
  undefined1 local_160 [16];
  uint auStack_148 [66];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  CreateTmpEdges((manifold *)&local_188,(Vec *)(in_RDX + 0x60));
  if (local_180 == 0) {
    __ptr = (void *)0x0;
    __ptr_00 = local_188;
  }
  else {
    __ptr = malloc(local_180 * 0x30);
    lVar5 = *(long *)(in_RDX + 0x48);
    lVar13 = 0;
    do {
      iVar24 = (int)lVar13;
      piVar18 = (int *)((long)local_188 + (long)iVar24 * 0xc);
      pdVar17 = (double *)(lVar5 + (long)piVar18[1] * 0x18);
      pdVar8 = (double *)(lVar5 + (long)*piVar18 * 0x18);
      dVar31 = *pdVar8;
      dVar27 = *pdVar17;
      dVar2 = pdVar8[1];
      dVar29 = pdVar8[2];
      dVar26 = pdVar17[1];
      dVar3 = pdVar17[2];
      dVar28 = dVar3;
      dVar30 = dVar3;
      dVar33 = dVar2;
      if (dVar31 < dVar27) {
        dVar32 = dVar31;
        if (dVar2 < dVar26) {
          if (dVar29 < dVar3) goto LAB_00107502;
        }
        else {
          dVar30 = dVar29;
          dVar33 = dVar26;
          if (dVar3 <= dVar29) {
            dVar30 = dVar3;
          }
        }
LAB_0010741a:
        if (dVar2 < dVar26) {
LAB_001074d4:
          dVar2 = dVar26;
        }
        bVar25 = dVar29 < dVar3;
        dVar28 = dVar29;
        dVar29 = dVar30;
        dVar31 = dVar27;
        dVar26 = dVar2;
        if (bVar25) {
          dVar28 = dVar3;
        }
      }
      else {
        dVar32 = dVar27;
        if (dVar26 <= dVar2) {
          dVar33 = dVar26;
          if (dVar3 <= dVar29) {
            if (dVar27 <= dVar31) {
              dVar27 = dVar31;
            }
            goto LAB_0010741a;
          }
        }
        else if (dVar3 <= dVar29) {
          if (dVar27 <= dVar31) {
            dVar27 = dVar31;
          }
          goto LAB_001074d4;
        }
LAB_00107502:
        if (dVar31 < dVar27) {
          dVar31 = dVar27;
          if (dVar26 <= dVar2) {
            dVar26 = dVar2;
          }
        }
        else if (dVar26 <= dVar2) {
          dVar26 = dVar2;
        }
      }
      lVar13 = lVar13 + 1;
      pdVar17 = (double *)((long)iVar24 * 0x30 + (long)__ptr);
      *pdVar17 = dVar32;
      pdVar17[1] = dVar33;
      pdVar17[2] = dVar29;
      pdVar17[3] = dVar31;
      pdVar17[4] = dVar26;
      pdVar17[5] = dVar28;
      __ptr_00 = local_188;
    } while (local_180 != lVar13);
  }
  lVar5 = *(long *)(CONCAT71(in_register_00000031,param_2) + 0x140);
  lVar22 = 0;
  piVar18 = (int *)0x0;
  *(undefined8 *)param_1 = 0;
  lVar13 = *(long *)(CONCAT71(in_register_00000031,param_2) + 0x170);
  local_168 = (int *)0x0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  local_160 = (undefined1  [16])0x0;
  if (in_CL == '\0') {
    if (local_180 != 0) {
      do {
        iVar24 = -1;
        uVar14 = (long)(int)lVar22 << 0x20;
        pdVar17 = (double *)((long)(int)lVar22 * 0x30 + (long)__ptr);
        dVar31 = pdVar17[3];
        uVar11 = 1;
LAB_00106eb8:
        while( true ) {
          puVar1 = (uint *)(lVar13 + (long)((int)(uVar11 - 1) / 2) * 8);
          uVar4 = *puVar1;
          uVar11 = puVar1[1];
          uVar16 = (ulong)(int)uVar11;
          pdVar19 = (double *)(uVar16 * 0x30 + lVar5);
          pdVar8 = (double *)((long)(int)uVar4 * 0x30 + lVar5);
          if (dVar31 < *pdVar8) break;
          dVar27 = pdVar17[4];
          if ((((dVar27 < pdVar8[1]) || (dVar2 = pdVar17[5], dVar2 < pdVar8[2])) ||
              (pdVar8[3] < *pdVar17)) || ((pdVar8[4] < pdVar17[1] || (pdVar8[5] < pdVar17[2])))) {
            if (*pdVar19 <= dVar31) goto LAB_00106f02;
            goto LAB_00106f60;
          }
          if ((uVar4 & 1) == 0) {
            uVar7 = local_160._0_8_;
            uVar21 = local_160._0_8_ + 8;
            if ((ulong)local_160._8_8_ <= uVar21) {
              if (local_160._8_8_ == 0) {
                uVar20 = 0x80;
              }
              else {
                uVar20 = local_160._8_8_ * 2;
                if ((ulong)(local_160._8_8_ * 2) < uVar21) {
                  uVar20 = uVar21;
                }
                if (uVar20 <= (ulong)local_160._8_8_) goto LAB_0010711e;
              }
              piVar15 = (int *)malloc(uVar20);
              if (uVar7 == 0) {
LAB_001071c4:
                if (piVar18 != (int *)0x0) goto LAB_001072e1;
              }
              else {
                if ((long)uVar7 < 2) {
                  if (uVar7 != 1) goto LAB_001071c4;
                  *(char *)piVar15 = (char)*piVar18;
                }
                else {
                  memmove(piVar15,piVar18,uVar7);
                }
LAB_001072e1:
                free(piVar18);
              }
              uVar16 = (ulong)uVar11;
              piVar18 = piVar15;
              local_168 = piVar15;
              local_160._8_8_ = uVar20;
            }
LAB_0010711e:
            local_160._0_8_ = uVar21;
            *(ulong *)((long)piVar18 + ((uVar21 & 0xfffffffffffffff8) - 8)) =
                 (long)((int)uVar4 / 2) | uVar14;
          }
          bVar25 = (int)uVar4 % 2 == 1;
          if (((dVar31 < *pdVar19) || (dVar27 < pdVar19[1])) ||
             ((dVar2 < pdVar19[2] || (pdVar19[3] < *pdVar17)))) {
LAB_00106f50:
            uVar11 = uVar4;
            if (!bVar25) goto LAB_00106f60;
          }
          else {
LAB_00106f2a:
            if ((pdVar19[4] < pdVar17[1]) || (pdVar19[5] < pdVar17[2])) goto LAB_00106f50;
            if ((uVar16 & 1) == 0) {
              uVar7 = local_160._0_8_;
              iVar23 = (int)uVar16;
              uVar20 = uVar16 >> 0x1f;
              uVar21 = local_160._0_8_ + 8;
              if ((ulong)local_160._8_8_ <= uVar21) {
                if (local_160._8_8_ == 0) {
                  __size = 0x80;
                }
                else {
                  __size = local_160._8_8_ * 2;
                  if ((ulong)(local_160._8_8_ * 2) < uVar21) {
                    __size = uVar21;
                  }
                  if (__size <= (ulong)local_160._8_8_) goto LAB_001070be;
                }
                piVar15 = (int *)malloc(__size);
                if (uVar7 == 0) {
LAB_0010725d:
                  if (piVar18 != (int *)0x0) goto LAB_00107386;
                }
                else {
                  if ((long)uVar7 < 2) {
                    if (uVar7 != 1) goto LAB_0010725d;
                    *(char *)piVar15 = (char)*piVar18;
                  }
                  else {
                    memmove(piVar15,piVar18,uVar7);
                  }
LAB_00107386:
                  free(piVar18);
                }
                uVar16 = uVar16 & 0xffffffff;
                piVar18 = piVar15;
                local_168 = piVar15;
                local_160._8_8_ = __size;
              }
LAB_001070be:
              local_160._0_8_ = uVar21;
              *(ulong *)((long)piVar18 + ((uVar21 & 0xfffffffffffffff8) - 8)) =
                   (long)((int)(((uint)uVar20 & 1) + iVar23) >> 1) | uVar14;
            }
            uVar11 = (uint)uVar16;
            uVar6 = (uint)(uVar16 >> 0x1f) & 1;
            if ((uVar11 + uVar6 & 1) - uVar6 != 1) goto LAB_00106f50;
            if (bVar25) {
              iVar24 = iVar24 + 1;
              auStack_148[iVar24] = uVar11;
              uVar11 = uVar4;
            }
          }
        }
        if (*pdVar19 <= dVar31) {
          dVar27 = pdVar17[4];
LAB_00106f02:
          if (((pdVar19[1] <= dVar27) && (pdVar19[2] <= pdVar17[5])) && (*pdVar17 <= pdVar19[3])) {
            bVar25 = false;
            goto LAB_00106f2a;
          }
        }
LAB_00106f60:
        if (-1 < iVar24) {
          lVar9 = (long)iVar24;
          iVar24 = iVar24 + -1;
          uVar11 = auStack_148[lVar9];
          goto LAB_00106eb8;
        }
        lVar22 = lVar22 + 1;
      } while (local_180 != lVar22);
      *(int **)param_1 = piVar18;
      *(undefined8 *)(param_1 + 8) = local_160._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_160._8_8_;
      if ((ulong)local_160._0_8_ >> 3 != 0) {
        piVar15 = piVar18 + 1;
        do {
          piVar10 = piVar15 + 2;
          *piVar15 = *(int *)((long)__ptr_00 + (long)*piVar15 * 0xc + 8);
          piVar15 = piVar10;
        } while (piVar18 + ((ulong)local_160._0_8_ >> 3) * 2 + 1 != piVar10);
      }
    }
  }
  else if (local_180 != 0) {
    do {
      iVar24 = (int)lVar22;
      iVar23 = -1;
      pdVar17 = (double *)((long)iVar24 * 0x30 + (long)__ptr);
      dVar31 = pdVar17[3];
      uVar11 = 1;
LAB_00106820:
      do {
        puVar1 = (uint *)(lVar13 + (long)((int)(uVar11 - 1) / 2) * 8);
        uVar4 = *puVar1;
        uVar11 = puVar1[1];
        uVar14 = (ulong)(int)uVar11;
        pdVar19 = (double *)(uVar14 * 0x30 + lVar5);
        pdVar8 = (double *)((long)(int)uVar4 * 0x30 + lVar5);
        if (dVar31 < *pdVar8) {
          if (*pdVar19 <= dVar31) {
            dVar27 = pdVar17[4];
LAB_0010686a:
            if (((pdVar19[1] <= dVar27) && (pdVar19[2] <= pdVar17[5])) && (*pdVar17 <= pdVar19[3]))
            {
              bVar25 = false;
              goto LAB_0010688f;
            }
          }
          break;
        }
        dVar27 = pdVar17[4];
        if (((dVar27 < pdVar8[1]) || (dVar2 = pdVar17[5], dVar2 < pdVar8[2])) ||
           ((pdVar8[3] < *pdVar17 || ((pdVar8[4] < pdVar17[1] || (pdVar8[5] < pdVar17[2])))))) {
          if (*pdVar19 <= dVar31) goto LAB_0010686a;
          break;
        }
        if ((uVar4 & 1) == 0) {
          uVar7 = local_160._0_8_;
          uVar16 = local_160._0_8_ + 8;
          if ((ulong)local_160._8_8_ <= uVar16) {
            if (local_160._8_8_ == 0) {
              uVar21 = 0x80;
            }
            else {
              uVar21 = local_160._8_8_ * 2;
              if ((ulong)(local_160._8_8_ * 2) < uVar16) {
                uVar21 = uVar16;
              }
              if (uVar21 <= (ulong)local_160._8_8_) goto LAB_00106ba6;
            }
            piVar15 = (int *)malloc(uVar21);
            if (uVar7 == 0) {
LAB_00106cf4:
              if (piVar18 != (int *)0x0) goto LAB_00106df7;
            }
            else {
              if ((long)uVar7 < 2) {
                if (uVar7 != 1) goto LAB_00106cf4;
                *(char *)piVar15 = (char)*piVar18;
              }
              else {
                memmove(piVar15,piVar18,uVar7);
              }
LAB_00106df7:
              free(piVar18);
            }
            uVar14 = (ulong)uVar11;
            piVar18 = piVar15;
            local_168 = piVar15;
            local_160._8_8_ = uVar21;
          }
LAB_00106ba6:
          local_160._0_8_ = uVar16;
          *(ulong *)((long)piVar18 + ((uVar16 & 0xfffffffffffffff8) - 8)) =
               (ulong)(uint)((int)uVar4 / 2) << 0x20 | (long)iVar24;
        }
        bVar25 = (int)uVar4 % 2 == 1;
        if ((((*pdVar19 <= dVar31) && (pdVar19[1] <= dVar27)) && (pdVar19[2] <= dVar2)) &&
           (*pdVar17 <= pdVar19[3])) {
LAB_0010688f:
          if ((pdVar17[1] <= pdVar19[4]) && (pdVar17[2] <= pdVar19[5])) {
            if ((uVar14 & 1) == 0) {
              uVar7 = local_160._0_8_;
              iVar12 = (int)uVar14;
              uVar21 = uVar14 >> 0x1f;
              uVar16 = local_160._0_8_ + 8;
              if ((ulong)local_160._8_8_ <= uVar16) {
                if (local_160._8_8_ == 0) {
                  uVar20 = 0x80;
                }
                else {
                  uVar20 = local_160._8_8_ * 2;
                  if ((ulong)(local_160._8_8_ * 2) < uVar16) {
                    uVar20 = uVar16;
                  }
                  if (uVar20 <= (ulong)local_160._8_8_) goto LAB_00106b3e;
                }
                piVar15 = (int *)malloc(uVar20);
                if (uVar7 == 0) {
LAB_00106c3d:
                  if (piVar18 != (int *)0x0) goto LAB_00106d5d;
                }
                else {
                  if ((long)uVar7 < 2) {
                    if (uVar7 != 1) goto LAB_00106c3d;
                    *(char *)piVar15 = (char)*piVar18;
                  }
                  else {
                    memmove(piVar15,piVar18,uVar7);
                  }
LAB_00106d5d:
                  free(piVar18);
                }
                uVar14 = uVar14 & 0xffffffff;
                piVar18 = piVar15;
                local_168 = piVar15;
                local_160._8_8_ = uVar20;
              }
LAB_00106b3e:
              local_160._0_8_ = uVar16;
              *(ulong *)((long)piVar18 + ((uVar16 & 0xfffffffffffffff8) - 8)) =
                   (ulong)(uint)((int)(((uint)uVar21 & 1) + iVar12) >> 1) << 0x20 | (long)iVar24;
            }
            uVar11 = (uint)uVar14;
            uVar6 = (uint)(uVar14 >> 0x1f) & 1;
            if ((uVar11 + uVar6 & 1) - uVar6 != 1) goto LAB_001068b0;
            if (bVar25) {
              iVar23 = iVar23 + 1;
              auStack_148[iVar23] = uVar11;
              uVar11 = uVar4;
            }
            goto LAB_00106820;
          }
        }
LAB_001068b0:
        uVar11 = uVar4;
      } while (bVar25);
      if (-1 < iVar23) {
        lVar9 = (long)iVar23;
        iVar23 = iVar23 + -1;
        uVar11 = auStack_148[lVar9];
        goto LAB_00106820;
      }
      lVar22 = lVar22 + 1;
    } while (local_180 != lVar22);
    *(int **)param_1 = piVar18;
    *(undefined8 *)(param_1 + 8) = local_160._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_160._8_8_;
    piVar15 = (int *)((local_160._0_8_ & 0xfffffffffffffff8) + (long)piVar18);
    if ((ulong)local_160._0_8_ >> 3 != 0) {
      do {
        piVar10 = piVar18 + 2;
        *piVar18 = *(int *)((long)__ptr_00 + (long)*piVar18 * 0xc + 8);
        piVar18 = piVar10;
      } while (piVar10 != piVar15);
    }
  }
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  if (__ptr_00 != (void *)0x0) {
    free(__ptr_00);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Impl::VertexCollisionsZ(manifold::VecView<linalg::vec<double, 3> const>,
   bool) const */

undefined8 *
manifold::Manifold::Impl::VertexCollisionsZ
          (undefined8 *param_1,long param_2,long *param_3,char param_4)

{
  double *pdVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  size_t sVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  double *pdVar13;
  long lVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  double *pdVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  int iVar23;
  long in_FS_OFFSET;
  bool bVar24;
  double dVar25;
  double dVar26;
  undefined1 *local_1b8;
  size_t local_1a0;
  size_t local_198;
  uint auStack_148 [66];
  long local_40;
  
  lVar5 = *param_3;
  lVar6 = *(long *)(param_2 + 0x140);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = *(long *)(param_2 + 0x170);
  if (param_4 == '\0') {
    *param_1 = 0;
    lVar21 = 0;
    *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
    lVar8 = param_3[1];
    if (lVar8 != 0) {
      do {
        uVar18 = 1;
        iVar23 = -1;
        pdVar1 = (double *)(lVar5 + (long)(int)lVar21 * 0x18);
LAB_001078f8:
        do {
          while( true ) {
            dVar25 = *pdVar1;
            dVar26 = pdVar1[1];
            puVar2 = (uint *)(lVar7 + (long)(((int)uVar18 + -1) / 2) * 8);
            uVar3 = *puVar2;
            uVar18 = (ulong)uVar3;
            uVar4 = puVar2[1];
            uVar16 = (ulong)(int)uVar4;
            pdVar19 = (double *)(uVar16 * 0x30 + lVar6);
            pdVar13 = (double *)((long)(int)uVar3 * 0x30 + lVar6);
            if ((((dVar25 <= pdVar13[3]) && (*pdVar13 <= dVar25)) && (dVar26 <= pdVar13[4])) &&
               (pdVar13[1] <= dVar26)) break;
            if (((pdVar19[3] < dVar25) || (dVar25 < *pdVar19)) ||
               ((pdVar19[4] < dVar26 || (dVar26 < pdVar19[1])))) goto LAB_001079ab;
            bVar24 = false;
LAB_001079e1:
            if ((uVar16 & 1) == 0) {
              iVar22 = (int)uVar16;
              sVar9 = param_1[1];
              uVar12 = uVar16 >> 0x1f;
              uVar17 = sVar9 + 8;
              uVar10 = param_1[2];
              if (uVar17 < uVar10) {
LAB_00107a82:
                puVar15 = (undefined1 *)*param_1;
              }
              else {
                if (uVar10 == 0) {
                  local_198 = 0x80;
                }
                else {
                  local_198 = uVar10 * 2;
                  if (uVar10 * 2 < uVar17) {
                    local_198 = uVar17;
                  }
                  if (local_198 <= uVar10) goto LAB_00107a82;
                }
                puVar15 = (undefined1 *)malloc(local_198);
                puVar11 = (undefined1 *)*param_1;
                if (sVar9 == 0) {
LAB_00107cbc:
                  if (puVar11 != (undefined1 *)0x0) goto LAB_00107f00;
                }
                else {
                  if ((long)sVar9 < 2) {
                    if (sVar9 != 1) goto LAB_00107cbc;
                    *puVar15 = *puVar11;
                  }
                  else {
                    memmove(puVar15,puVar11,sVar9);
                  }
LAB_00107f00:
                  free(puVar11);
                  uVar17 = param_1[1] + 8;
                }
                uVar16 = uVar16 & 0xffffffff;
                *param_1 = puVar15;
                param_1[2] = local_198;
              }
              param_1[1] = uVar17;
              *(long *)(puVar15 + ((uVar17 & 0xfffffffffffffff8) - 8)) =
                   lVar21 << 0x20 | (long)((int)(((uint)uVar12 & 1) + iVar22) >> 1);
            }
            uVar3 = (uint)(uVar16 >> 0x1f) & 1;
            if (((uint)uVar16 + uVar3 & 1) - uVar3 != 1) goto LAB_00107990;
            if (bVar24) {
              iVar23 = iVar23 + 1;
              auStack_148[iVar23] = (uint)uVar16;
            }
            else {
              uVar18 = uVar16 & 0xffffffff;
            }
          }
          if ((uVar3 & 1) == 0) {
            sVar9 = param_1[1];
            uVar17 = sVar9 + 8;
            uVar10 = param_1[2];
            if (uVar17 < uVar10) {
LAB_00107af0:
              local_1b8 = (undefined1 *)*param_1;
            }
            else {
              if (uVar10 == 0) {
                local_198 = 0x80;
              }
              else {
                local_198 = uVar10 * 2;
                if (uVar10 * 2 < uVar17) {
                  local_198 = uVar17;
                }
                if (local_198 <= uVar10) goto LAB_00107af0;
              }
              local_1b8 = (undefined1 *)malloc(local_198);
              puVar15 = (undefined1 *)*param_1;
              if (sVar9 == 0) {
LAB_00107d5b:
                if (puVar15 != (undefined1 *)0x0) goto LAB_00107dc3;
              }
              else {
                if ((long)sVar9 < 2) {
                  if (sVar9 != 1) goto LAB_00107d5b;
                  *local_1b8 = *puVar15;
                }
                else {
                  memmove(local_1b8,puVar15,sVar9);
                }
LAB_00107dc3:
                free(puVar15);
                dVar25 = *pdVar1;
                dVar26 = pdVar1[1];
                uVar17 = param_1[1] + 8;
              }
              uVar16 = (ulong)uVar4;
              *param_1 = local_1b8;
              param_1[2] = local_198;
            }
            param_1[1] = uVar17;
            *(long *)(local_1b8 + ((uVar17 & 0xfffffffffffffff8) - 8)) =
                 lVar21 << 0x20 | (long)((int)uVar3 / 2);
          }
          bVar24 = (int)uVar3 % 2 == 1;
          if (((dVar25 <= pdVar19[3]) && (*pdVar19 <= dVar25)) &&
             ((dVar26 <= pdVar19[4] && (pdVar19[1] <= dVar26)))) goto LAB_001079e1;
LAB_00107990:
        } while (bVar24);
LAB_001079ab:
        if (-1 < iVar23) {
          lVar14 = (long)iVar23;
          iVar23 = iVar23 + -1;
          uVar18 = (ulong)auStack_148[lVar14];
          goto LAB_001078f8;
        }
        lVar21 = lVar21 + 1;
      } while (lVar8 != lVar21);
    }
  }
  else {
    *param_1 = 0;
    lVar21 = 0;
    *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
    lVar8 = param_3[1];
    if (lVar8 != 0) {
      do {
        iVar23 = (int)lVar21;
        uVar18 = 1;
        iVar22 = -1;
        pdVar1 = (double *)(lVar5 + (long)iVar23 * 0x18);
LAB_00107650:
        do {
          while( true ) {
            dVar25 = *pdVar1;
            dVar26 = pdVar1[1];
            puVar2 = (uint *)(lVar7 + (long)(((int)uVar18 + -1) / 2) * 8);
            uVar3 = *puVar2;
            uVar18 = (ulong)uVar3;
            uVar4 = puVar2[1];
            uVar16 = (ulong)(int)uVar4;
            pdVar19 = (double *)(uVar16 * 0x30 + lVar6);
            pdVar13 = (double *)((long)(int)uVar3 * 0x30 + lVar6);
            if ((((dVar25 <= pdVar13[3]) && (*pdVar13 <= dVar25)) && (dVar26 <= pdVar13[4])) &&
               (pdVar13[1] <= dVar26)) break;
            if (((pdVar19[3] < dVar25) || (dVar25 < *pdVar19)) ||
               ((pdVar19[4] < dVar26 || (dVar26 < pdVar19[1])))) goto LAB_00107753;
            bVar24 = false;
LAB_0010778d:
            if ((uVar16 & 1) == 0) {
              iVar20 = (int)uVar16;
              sVar9 = param_1[1];
              uVar12 = uVar16 >> 0x1f;
              uVar17 = sVar9 + 8;
              uVar10 = param_1[2];
              if (uVar17 < uVar10) {
LAB_0010781a:
                puVar15 = (undefined1 *)*param_1;
              }
              else {
                if (uVar10 == 0) {
                  local_1a0 = 0x80;
                }
                else {
                  local_1a0 = uVar10 * 2;
                  if (uVar10 * 2 < uVar17) {
                    local_1a0 = uVar17;
                  }
                  if (local_1a0 <= uVar10) goto LAB_0010781a;
                }
                puVar15 = (undefined1 *)malloc(local_1a0);
                puVar11 = (undefined1 *)*param_1;
                if (sVar9 == 0) {
LAB_00107c32:
                  if (puVar11 != (undefined1 *)0x0) goto LAB_00107f93;
                }
                else {
                  if ((long)sVar9 < 2) {
                    if (sVar9 != 1) goto LAB_00107c32;
                    *puVar15 = *puVar11;
                  }
                  else {
                    memmove(puVar15,puVar11,sVar9);
                  }
LAB_00107f93:
                  free(puVar11);
                  uVar17 = param_1[1] + 8;
                }
                uVar16 = uVar16 & 0xffffffff;
                *param_1 = puVar15;
                param_1[2] = local_1a0;
              }
              param_1[1] = uVar17;
              *(ulong *)(puVar15 + ((uVar17 & 0xfffffffffffffff8) - 8)) =
                   (ulong)(uint)((int)(((uint)uVar12 & 1) + iVar20) >> 1) << 0x20 | (long)iVar23;
            }
            uVar3 = (uint)(uVar16 >> 0x1f) & 1;
            if (((uint)uVar16 + uVar3 & 1) - uVar3 != 1) goto LAB_001076f8;
            if (bVar24) {
              iVar22 = iVar22 + 1;
              auStack_148[iVar22] = (uint)uVar16;
            }
            else {
              uVar18 = uVar16 & 0xffffffff;
            }
          }
          if ((uVar3 & 1) == 0) {
            sVar9 = param_1[1];
            uVar17 = sVar9 + 8;
            uVar10 = param_1[2];
            if (uVar17 < uVar10) {
LAB_00107880:
              local_1b8 = (undefined1 *)*param_1;
            }
            else {
              if (uVar10 == 0) {
                local_1a0 = 0x80;
              }
              else {
                local_1a0 = uVar10 * 2;
                if (uVar10 * 2 < uVar17) {
                  local_1a0 = uVar17;
                }
                if (local_1a0 <= uVar10) goto LAB_00107880;
              }
              local_1b8 = (undefined1 *)malloc(local_1a0);
              puVar15 = (undefined1 *)*param_1;
              if (sVar9 == 0) {
LAB_00107ba4:
                if (puVar15 != (undefined1 *)0x0) goto LAB_00107e62;
              }
              else {
                if ((long)sVar9 < 2) {
                  if (sVar9 != 1) goto LAB_00107ba4;
                  *local_1b8 = *puVar15;
                }
                else {
                  memmove(local_1b8,puVar15,sVar9);
                }
LAB_00107e62:
                free(puVar15);
                dVar25 = *pdVar1;
                dVar26 = pdVar1[1];
                uVar17 = param_1[1] + 8;
              }
              uVar16 = (ulong)uVar4;
              *param_1 = local_1b8;
              param_1[2] = local_1a0;
            }
            param_1[1] = uVar17;
            *(ulong *)(local_1b8 + ((uVar17 & 0xfffffffffffffff8) - 8)) =
                 (ulong)(uint)((int)uVar3 / 2) << 0x20 | (long)iVar23;
          }
          bVar24 = (int)uVar3 % 2 == 1;
          if (((dVar25 <= pdVar19[3]) && (*pdVar19 <= dVar25)) &&
             ((dVar26 <= pdVar19[4] && (pdVar19[1] <= dVar26)))) goto LAB_0010778d;
LAB_001076f8:
        } while (bVar24);
LAB_00107753:
        if (-1 < iVar22) {
          lVar14 = (long)iVar22;
          iVar22 = iVar22 + -1;
          uVar18 = (ulong)auStack_148[lVar14];
          goto LAB_00107650;
        }
        lVar21 = lVar21 + 1;
      } while (lVar8 != lVar21);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* (anonymous namespace)::GetLabels(std::vector<int, std::allocator<int> >&,
   manifold::Vec<std::pair<int, int> > const&, int) [clone .constprop.0] */

undefined4 (anonymous_namespace)::GetLabels(vector *param_1,Vec *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *__ptr;
  int iVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  size_t __nmemb;
  long in_FS_OFFSET;
  void *local_68;
  size_t local_60;
  size_t sStack_58;
  void *local_50;
  undefined1 local_48 [16];
  long local_30;
  
  __nmemb = (size_t)param_3;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (void *)0x0;
  sStack_58 = 0;
  if (__nmemb == 0) {
    local_60 = 0;
    __ptr = (void *)0x0;
    local_50 = (void *)0x0;
    local_48 = (undefined1  [16])0x0;
  }
  else {
    __ptr = malloc(__nmemb * 4);
    local_68 = __ptr;
    local_60 = __nmemb;
    sStack_58 = __nmemb;
    local_50 = calloc(__nmemb,1);
    local_48._8_8_ = __nmemb;
    local_48._0_8_ = __nmemb;
    lVar10 = 0;
    do {
      *(int *)((long)__ptr + lVar10 * 4) = (int)lVar10;
      lVar10 = lVar10 + 1;
    } while ((long)(__nmemb * 4) >> 2 != lVar10);
  }
  piVar8 = *(int **)param_2;
  piVar1 = piVar8 + *(long *)(param_2 + 8) * 2;
  for (; piVar8 != piVar1; piVar8 = piVar8 + 2) {
    iVar6 = piVar8[1];
    iVar4 = *piVar8;
    if ((iVar6 != -1 && iVar4 != -1) && (iVar4 != iVar6)) {
      lVar10 = (long)iVar4;
      if (*(char *)((long)local_50 + lVar10) == '\0') {
        *(char *)((long)local_50 + lVar10) = '\x01';
      }
      lVar9 = (long)iVar6;
      if (*(char *)((long)local_50 + lVar9) == '\0') {
        *(char *)((long)local_50 + lVar9) = '\x01';
      }
      piVar7 = (int *)((long)__ptr + lVar10 * 4);
      iVar3 = *piVar7;
      if (iVar4 != iVar3) {
        do {
          iVar4 = *(int *)((long)__ptr + (long)iVar3 * 4);
          lVar10 = (long)iVar4;
          *piVar7 = iVar4;
          piVar7 = (int *)((long)__ptr + lVar10 * 4);
          iVar3 = *piVar7;
        } while (iVar3 != iVar4);
      }
      piVar7 = (int *)((long)__ptr + lVar9 * 4);
      iVar4 = *piVar7;
      if (iVar6 != iVar4) {
        do {
          iVar6 = *(int *)((long)__ptr + (long)iVar4 * 4);
          lVar9 = (long)iVar6;
          *piVar7 = iVar6;
          piVar7 = (int *)((long)__ptr + lVar9 * 4);
          iVar4 = *piVar7;
        } while (iVar4 != iVar6);
      }
      iVar4 = (int)lVar10;
      if (iVar4 != iVar6) {
        if (*(byte *)((long)local_50 + lVar9) <= *(byte *)((long)local_50 + lVar10)) {
          lVar10 = (long)iVar6;
          iVar6 = iVar4;
        }
        cVar2 = *(char *)((long)iVar6 + (long)local_50);
        if (cVar2 == *(char *)((long)local_50 + lVar10)) {
          *(char *)((long)iVar6 + (long)local_50) = cVar2 + '\x01';
        }
        *(int *)((long)__ptr + lVar10 * 4) = iVar6;
      }
    }
  }
  uVar5 = manifold::UnionFind<int,unsigned_char>::connectedComponents
                    ((UnionFind<int,unsigned_char> *)&local_68,param_1);
  if (local_50 != (void *)0x0) {
    free(local_50);
  }
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Impl::CreateFaces() */

void __thiscall manifold::Manifold::Impl::CreateFaces(Impl *this)

{
  int *piVar1;
  double *pdVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [12];
  size_t __size;
  double *pdVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  void *__ptr;
  undefined4 *puVar15;
  int *piVar16;
  void *pvVar17;
  void *__ptr_00;
  long lVar18;
  int *piVar19;
  int *piVar20;
  int iVar21;
  int iVar22;
  ulong uVar23;
  int iVar24;
  long lVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  long in_FS_OFFSET;
  double dVar32;
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
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  ulong local_130;
  long local_120;
  long local_118;
  int local_108;
  int local_104;
  undefined8 *local_100;
  undefined8 *local_e8;
  undefined1 local_e0 [16];
  undefined8 *local_c8;
  undefined1 local_c0 [16];
  undefined1 local_a8 [16];
  long local_98;
  double local_88;
  double dStack_80;
  double local_78;
  undefined1 local_68 [16];
  double local_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_130 = *(ulong *)(this + 0x68);
  local_e0 = (undefined1  [16])0x0;
  local_e8 = (undefined8 *)0x0;
  if (local_130 == 0) {
    local_c0 = (undefined1  [16])0x0;
    local_e0 = ZEXT816(0) << 0x40;
    local_c8 = (undefined8 *)0x0;
    iVar11 = *(int *)(this + 0xc4);
    uVar23 = (ulong)iVar11;
    if (uVar23 == 0) {
      local_100 = (undefined8 *)0x0;
      __ptr = (void *)0x0;
    }
    else {
      __ptr = (void *)0x0;
LAB_0010890e:
      local_68 = (undefined1  [16])0x0;
      uVar12 = *(ulong *)(this + 0xd0);
      local_58 = 0.0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar23;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar12;
      iVar11 = (anonymous_namespace)::GetLabels
                         ((vector *)local_68,(Vec *)&local_c8,SUB164(auVar7 / auVar6,0));
      uVar29 = (ulong)iVar11;
      if (uVar29 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("cannot create std::vector larger than max_size()");
      }
      puVar15 = (undefined4 *)0x0;
      uVar31 = uVar29;
      if (uVar29 != 0) {
        uVar31 = uVar29 * 4;
        puVar15 = (undefined4 *)operator_new(uVar31);
        *puVar15 = 0;
        if (uVar29 == 1) {
          uVar31 = 4;
        }
        else if (puVar15 + 1 != puVar15 + uVar29) {
          memset(puVar15 + 1,0,uVar31 - 4);
        }
      }
      uVar9 = local_68._0_8_;
      uVar29 = 0;
      if (uVar23 <= uVar12) {
        do {
          puVar15[*(int *)(local_68._0_8_ + uVar29 * 4)] = (int)uVar29;
          uVar29 = uVar29 + 1;
        } while (uVar29 < SUB168(auVar7 / auVar6,0));
      }
      uVar10 = _LC9;
      piVar19 = *(int **)(this + 0x128);
      piVar1 = piVar19 + *(long *)(this + 0x130) * 3;
      if (piVar19 != piVar1) {
        do {
          local_50 = uVar10;
          local_48 = 2;
          piVar16 = (int *)&local_50;
          do {
            if (*piVar16 == 0) {
              iVar11 = puVar15[*(int *)(local_68._0_8_ + (long)*piVar19 * 4)];
              piVar20 = piVar19;
            }
            else if (*piVar16 == 1) {
              iVar11 = puVar15[*(int *)(local_68._0_8_ + (long)piVar19[1] * 4)];
              piVar20 = piVar19 + 1;
            }
            else {
              iVar11 = puVar15[*(int *)(local_68._0_8_ + (long)piVar19[2] * 4)];
              piVar20 = piVar19 + 2;
            }
            piVar16 = piVar16 + 1;
            *piVar20 = iVar11;
          } while (piVar16 != &local_44);
          piVar19 = piVar19 + 3;
        } while (piVar1 != piVar19);
      }
      if (puVar15 != (undefined4 *)0x0) {
        operator_delete(puVar15,uVar31);
      }
      if ((void *)uVar9 != (void *)0x0) {
        operator_delete((void *)uVar9,(long)local_58 - uVar9);
      }
      local_100 = local_e8;
      local_104 = *(int *)(this + 0xc4);
      lVar25 = *(long *)(this + 0x60);
      local_120 = *(long *)(this + 0x48);
      lVar30 = *(long *)(this + 0x110);
      dVar45 = *(double *)(this + 0x30);
      dVar32 = *(double *)(this + 0x38);
      local_130 = *(ulong *)(this + 0x68);
      local_118 = *(long *)(this + 0x128);
      iVar11 = (int)(local_130 / 3);
      if (local_130 != 0) goto LAB_00108af7;
      iVar11 = 0;
    }
  }
  else {
    local_100 = (undefined8 *)malloc(local_130 * 8);
    uVar9 = _LC38;
    for (puVar13 = local_100; local_100 + local_130 != puVar13; puVar13 = puVar13 + 1) {
      *puVar13 = uVar9;
    }
    local_e0._8_8_ = local_130;
    local_e0._0_8_ = local_130;
    local_e8 = local_100;
    puVar14 = (undefined8 *)malloc(local_130 * 8);
    uVar9 = _LC38;
    for (puVar13 = puVar14; puVar14 + local_130 != puVar13; puVar13 = puVar13 + 1) {
      *puVar13 = uVar9;
    }
    local_c0._8_8_ = local_130;
    local_c0._0_8_ = local_130;
    local_c8 = puVar14;
    if (local_130 < 3) {
      uVar23 = (ulong)*(int *)(this + 0xc4);
      if (uVar23 != 0) {
        __ptr = (void *)0x0;
        goto LAB_001087bd;
      }
      uVar12 = 0;
      __ptr = (void *)0x0;
    }
    else {
      uVar12 = local_130 / 3;
      __ptr = malloc(uVar12 * 8);
      uVar23 = (ulong)*(int *)(this + 0xc4);
      if (uVar23 != 0) {
LAB_001087bd:
        uVar12 = 0;
        lVar25 = *(long *)(this + 0x60);
        lVar30 = *(long *)(this + 0x110);
        do {
          while( true ) {
            iVar22 = (int)uVar12;
            iVar11 = *(int *)(lVar25 + (long)iVar22 * 0xc + 8);
            lVar18 = (long)(iVar11 / 3);
            if (*(int *)(lVar30 + (long)(iVar22 / 3) * 0x10) == *(int *)(lVar30 + lVar18 * 0x10))
            break;
LAB_001088fc:
            uVar12 = uVar12 + 1;
            if (local_130 == uVar12) goto LAB_0010890e;
          }
          iVar11 = iVar11 % 3;
          piVar1 = (int *)(*(long *)(this + 0x128) + (long)(iVar22 / 3) * 0xc);
          if (iVar22 % 3 == 0) {
            iVar21 = *piVar1;
          }
          else if (iVar22 % 3 == 1) {
            iVar21 = piVar1[1];
          }
          else {
            iVar21 = piVar1[2];
          }
          piVar1 = (int *)(*(long *)(this + 0x128) + lVar18 * 0xc);
          if ((iVar11 == 2) || (iVar11 == -1)) {
            iVar11 = *piVar1;
          }
          else if (iVar11 == 0) {
            iVar11 = piVar1[1];
          }
          else {
            iVar11 = piVar1[2];
          }
          if (iVar21 == iVar11) goto LAB_001088fc;
          uVar29 = 0;
          do {
            if (*(double *)((long)iVar21 * uVar23 * 8 + *(long *)(this + 200) + uVar29 * 8) !=
                *(double *)(*(long *)(this + 200) + (long)iVar11 * uVar23 * 8 + uVar29 * 8))
            goto LAB_001088fc;
            uVar29 = uVar29 + 1;
          } while (uVar23 != uVar29);
          uVar12 = uVar12 + 1;
          *(int *)(puVar14 + iVar22) = iVar21;
          *(int *)((long)(puVar14 + iVar22) + 4) = iVar11;
        } while (local_130 != uVar12);
        goto LAB_0010890e;
      }
    }
    iVar11 = (int)uVar12;
    local_104 = 0;
    local_120 = *(long *)(this + 0x48);
    lVar25 = *(long *)(this + 0x60);
    lVar30 = *(long *)(this + 0x110);
    dVar45 = *(double *)(this + 0x30);
    local_118 = *(long *)(this + 0x128);
    dVar32 = *(double *)(this + 0x38);
LAB_00108af7:
    uVar23 = 0;
    do {
      iVar24 = (int)uVar23;
      pauVar4 = (undefined1 (*) [12])(lVar25 + (long)iVar24 * 0xc);
      iVar22 = *(int *)(*pauVar4 + 8);
      pdVar5 = (double *)(lVar25 + (long)iVar22 * 0xc);
      local_88 = *pdVar5;
      dStack_80 = (double)CONCAT44(dStack_80._4_4_,*(undefined4 *)(pdVar5 + 1));
      iVar8 = iVar22 / 3;
      iVar21 = iVar24 / 3;
      lVar18 = (long)iVar21;
      if (*(int *)(lVar30 + lVar18 * 0x10) != *(int *)(lVar30 + (long)iVar8 * 0x10))
      goto LAB_00108e20;
      local_a8._0_4_ = SUB124(*pauVar4,0);
      pauVar3 = (undefined1 (*) [16])(local_120 + (long)(int)local_a8._0_4_ * 0x18);
      dVar33 = *(double *)*pauVar3;
      dVar35 = *(double *)(*pauVar3 + 8);
      local_68 = *pauVar3;
      local_58 = *(double *)pauVar3[1];
      iVar22 = iVar22 % 3;
      iVar26 = iVar24 % 3;
      if (local_104 < 1) {
LAB_00108b66:
        local_a8._4_4_ = (undefined4)((ulong)*(undefined8 *)*pauVar4 >> 0x20);
        if ((int)local_a8._0_4_ < (int)local_a8._4_4_) {
          iVar28 = iVar26 + -1;
          if (iVar26 == 0) {
            iVar28 = 2;
          }
          iVar26 = iVar22 + -1;
          if (iVar22 == 0) {
            iVar26 = 2;
          }
          pdVar5 = (double *)(local_120 + (long)local_88._0_4_ * 0x18);
          dVar40 = *pdVar5 - dVar33;
          dVar41 = pdVar5[2] - local_58;
          dVar36 = pdVar5[1] - dVar35;
          pdVar5 = (double *)
                   (local_120 + (long)*(int *)(lVar25 + (long)(iVar28 + iVar21 * 3) * 0xc) * 0x18);
          pdVar2 = (double *)
                   (local_120 + (long)*(int *)(lVar25 + (long)(iVar26 + iVar8 * 3) * 0xc) * 0x18);
          dVar38 = *pdVar5 - dVar33;
          dVar39 = pdVar5[1] - dVar35;
          dVar33 = *pdVar2 - dVar33;
          dVar46 = pdVar5[2] - local_58;
          dVar35 = pdVar2[1] - dVar35;
          dVar42 = pdVar2[2] - local_58;
          dVar37 = SQRT(dVar38 * dVar38 + 0.0 + dVar39 * dVar39 + dVar46 * dVar46);
          dVar34 = SQRT(dVar40 * dVar40 + 0.0 + dVar36 * dVar36 + dVar41 * dVar41);
          if (dVar37 <= dVar34) {
            dVar37 = dVar34;
          }
          dVar43 = SQRT(dVar33 * dVar33 + 0.0 + dVar35 * dVar35 + dVar42 * dVar42);
          if (dVar43 <= dVar34) {
            dVar43 = dVar34;
          }
          dVar44 = dVar36 * dVar46 - dVar41 * dVar39;
          dVar46 = dVar41 * dVar38 - dVar46 * dVar40;
          dVar38 = dVar39 * dVar40 - dVar38 * dVar36;
          dVar34 = SQRT(dVar44 * dVar44 + 0.0 + dVar46 * dVar46 + dVar38 * dVar38);
          if (iVar24 * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
            *(double *)((long)__ptr + lVar18 * 8) = dVar34;
          }
          if ((dVar37 * dVar45 <= dVar34) &&
             (dVar37 = dVar41 * dVar35 - dVar36 * dVar42, dVar39 = dVar40 * dVar42 - dVar41 * dVar33
             , dVar36 = dVar36 * dVar33 - dVar40 * dVar35,
             dVar37 = SQRT(dVar36 * dVar36 + dVar39 * dVar39 + dVar37 * dVar37 + 0.0),
             dVar43 * dVar45 <= dVar37)) {
            if (dVar37 <= dVar34) {
              dVar37 = dVar34;
            }
            if ((double)((ulong)(dVar33 * dVar44 + 0.0 + dVar35 * dVar46 + dVar42 * dVar38) & _LC14)
                <= dVar37 * dVar32) {
              *(int *)(local_100 + iVar24) = iVar21;
              *(int *)((long)(local_100 + iVar24) + 4) = iVar8;
            }
          }
        }
      }
      else {
        piVar1 = (int *)(local_118 + lVar18 * 0xc);
        if (iVar26 == 0) {
          local_108 = *piVar1;
        }
        else if (iVar26 == 1) {
          local_108 = piVar1[1];
        }
        else {
          local_108 = piVar1[2];
        }
        piVar19 = (int *)(local_118 + (long)iVar8 * 0xc);
        if (iVar22 == 0) {
          if (piVar19[1] != local_108) goto LAB_00108e20;
          if (iVar26 != 0) goto LAB_00109048;
          iVar28 = piVar1[1];
LAB_0010905e:
          iVar27 = *piVar19;
LAB_00108b5d:
          if (iVar27 == iVar28) goto LAB_00108b66;
        }
        else if (iVar22 == 1) {
          if (local_108 == piVar19[2]) {
            if (iVar26 != 0) goto LAB_00109048;
            iVar28 = piVar1[1];
            goto LAB_00109093;
          }
        }
        else if (*piVar19 == local_108) {
          if (iVar26 == 0) {
            iVar28 = piVar1[1];
          }
          else {
LAB_00109048:
            if (iVar26 == 1) {
              iVar28 = piVar1[2];
            }
            else {
              iVar28 = *piVar1;
            }
            if (iVar22 == 0) goto LAB_0010905e;
          }
          if (iVar22 != 1) {
            iVar27 = piVar19[2];
            goto LAB_00108b5d;
          }
LAB_00109093:
          iVar27 = piVar19[1];
          goto LAB_00108b5d;
        }
      }
LAB_00108e20:
      uVar23 = uVar23 + 1;
    } while (uVar23 != local_130);
  }
  local_98 = 0;
  local_a8 = (undefined1  [16])0x0;
  iVar11 = (anonymous_namespace)::GetLabels((vector *)local_a8,(Vec *)&local_e8,iVar11);
  if ((long)iVar11 != 0) {
    __size = (long)iVar11 * 4;
    pvVar17 = malloc(__size);
    __ptr_00 = memset(pvVar17,0xff,__size);
    uVar23 = *(ulong *)(this + 0x68);
    pvVar17 = (void *)local_a8._0_8_;
    if (2 < uVar23) goto LAB_0010836b;
    goto LAB_00108633;
  }
  __ptr_00 = (void *)0x0;
  uVar23 = *(ulong *)(this + 0x68);
  pvVar17 = (void *)local_a8._0_8_;
  if (uVar23 < 3) {
LAB_00108638:
    if (pvVar17 != (void *)0x0) {
LAB_0010863d:
      operator_delete(pvVar17,local_98 - (long)pvVar17);
    }
    if (__ptr == (void *)0x0) goto LAB_00108655;
  }
  else {
LAB_0010836b:
    uVar12 = 0;
    do {
      lVar25 = (long)*(int *)((long)pvVar17 + uVar12 * 4);
      dVar45 = *(double *)((long)__ptr + uVar12 * 8);
      piVar1 = (int *)((long)__ptr_00 + lVar25 * 4);
      iVar11 = *piVar1;
      if ((iVar11 < 0) ||
         (pdVar5 = (double *)((long)__ptr + (long)iVar11 * 8),
         *pdVar5 <= dVar45 && dVar45 != *pdVar5)) {
        *piVar1 = (int)uVar12;
        *(double *)((long)__ptr + lVar25 * 8) = dVar45;
      }
      uVar29 = _LC14;
      uVar9 = _LC9;
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar23 / 3);
    lVar25 = *(long *)(this + 0x60);
    lVar30 = *(long *)(this + 0x48);
    dVar45 = *(double *)(this + 0x38);
    uVar12 = 0;
    do {
      iVar22 = (int)uVar12;
      piVar1 = (int *)((long)__ptr_00 + (long)*(int *)((long)pvVar17 + (long)iVar22 * 4) * 4);
      iVar11 = *piVar1;
      if ((-1 < iVar11) && (iVar11 != iVar22)) {
        local_50 = uVar9;
        local_48 = 2;
        lVar18 = (long)(iVar11 * 3 + 2);
        pdVar5 = (double *)(lVar30 + (long)*(int *)(lVar25 + (long)(iVar11 * 3) * 0xc) * 0x18);
        local_88 = *pdVar5;
        dStack_80 = pdVar5[1];
        local_78 = pdVar5[2];
        pdVar5 = (double *)(lVar30 + (long)*(int *)(lVar25 + lVar18 * 0xc) * 0x18);
        pdVar2 = (double *)(lVar30 + (long)*(int *)(lVar25 + -0xc + lVar18 * 0xc) * 0x18);
        piVar19 = (int *)&local_50;
        dVar37 = (pdVar5[2] - local_78) * (pdVar2[1] - dStack_80) -
                 (pdVar5[1] - dStack_80) * (pdVar2[2] - local_78);
        dVar35 = (pdVar2[2] - local_78) * (*pdVar5 - local_88) -
                 (pdVar5[2] - local_78) * (*pdVar2 - local_88);
        dVar33 = (pdVar5[1] - dStack_80) * (*pdVar2 - local_88) -
                 (*pdVar5 - local_88) * (pdVar2[1] - dStack_80);
        dVar32 = SQRT(dVar37 * dVar37 + 0.0 + dVar35 * dVar35 + dVar33 * dVar33);
        do {
          pauVar3 = (undefined1 (*) [16])
                    (lVar30 + (long)*(int *)(lVar25 + (long)(*piVar19 + iVar22 * 3) * 0xc) * 0x18);
          local_68 = *pauVar3;
          local_58 = *(double *)pauVar3[1];
          if (dVar45 < (double)((ulong)((*(double *)*pauVar3 - local_88) * (dVar37 / dVar32) + 0.0 +
                                        (*(double *)(*pauVar3 + 8) - dStack_80) * (dVar35 / dVar32)
                                       + (local_58 - local_78) * (dVar33 / dVar32)) & uVar29)) {
            *piVar1 = -1;
            pvVar17 = (void *)local_a8._0_8_;
            break;
          }
          piVar19 = piVar19 + 1;
        } while (piVar19 != &local_44);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar23 / 3);
    uVar23 = *(ulong *)(this + 0x68);
    local_100 = local_e8;
    uVar12 = 0;
    if (2 < uVar23) {
      do {
        iVar11 = *(int *)((long)__ptr_00 + (long)*(int *)((long)pvVar17 + uVar12 * 4) * 4);
        if (-1 < iVar11) {
          *(int *)(uVar12 * 0x10 + *(long *)(this + 0x110) + 0xc) = iVar11;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar23 / 3);
      if (__ptr_00 != (void *)0x0) goto LAB_00108633;
      goto LAB_0010863d;
    }
    if (__ptr_00 != (void *)0x0) {
LAB_00108633:
      free(__ptr_00);
      goto LAB_00108638;
    }
    if (pvVar17 != (void *)0x0) goto LAB_0010863d;
  }
  free(__ptr);
LAB_00108655:
  if (local_c8 != (undefined8 *)0x0) {
    free(local_c8);
  }
  if (local_100 == (undefined8 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    free(local_100);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Impl::WarpBatch(std::function<void (manifold::VecView<linalg::vec<double, 3>
   >)>) */

void __thiscall manifold::Manifold::Impl::WarpBatch(Impl *this,long param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long alStack_60 [2];
  code *pcStack_50;
  code *pcStack_48;
  long lStack_38;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_2 + 0x10) == 0) {
    std::__throw_bad_function_call();
    lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
    alStack_60[1] = 0;
    pcStack_50 = std::
                 _Function_handler<void(manifold::VecView<linalg::vec<double,3>>),manifold::Manifold::Impl::Warp(std::function<void(linalg::vec<double,3>&)>)::{lambda(manifold::VecView<linalg::vec<double,3>>)#1}>
                 ::_M_manager;
    pcStack_48 = std::
                 _Function_handler<void(manifold::VecView<linalg::vec<double,3>>),manifold::Manifold::Impl::Warp(std::function<void(linalg::vec<double,3>&)>)::{lambda(manifold::VecView<linalg::vec<double,3>>)#1}>
                 ::_M_invoke;
    alStack_60[0] = param_2;
    WarpBatch();
    if (pcStack_50 != (code *)0x0) {
      (*pcStack_50)(alStack_60,alStack_60,3);
    }
    if (lStack_38 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  (**(code **)(param_2 + 0x18))(param_2);
  manifold::Manifold::Impl::CalculateBBox();
  cVar3 = manifold::Manifold::Impl::IsFinite();
  if (cVar3 == '\0') {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      MarkFailure(this,1);
      return;
    }
  }
  else {
    Update(this);
    lVar2 = *(long *)(this + 0x98);
    *(undefined8 *)(this + 0x98) = 0;
    if (lVar2 != 0) {
      uVar4 = 0;
      if (*(void **)(this + 0x90) != (void *)0x0) {
        free(*(void **)(this + 0x90));
        uVar4 = *(undefined8 *)(this + 0x98);
      }
      *(undefined8 *)(this + 0x90) = 0;
      *(undefined8 *)(this + 0xa0) = uVar4;
    }
    CalculateNormals(this);
    SetEpsilon(this,_LC28,false);
    manifold::Manifold::Impl::Finish();
    CreateFaces(this);
    *(undefined4 *)(this + 0xc0) = 0xffffffff;
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Impl::Warp(std::function<void (linalg::vec<double, 3>&)>) */

void __thiscall manifold::Manifold::Impl::Warp(Impl *this,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  code *local_28;
  code *pcStack_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  local_28 = std::
             _Function_handler<void(manifold::VecView<linalg::vec<double,3>>),manifold::Manifold::Impl::Warp(std::function<void(linalg::vec<double,3>&)>)::{lambda(manifold::VecView<linalg::vec<double,3>>)#1}>
             ::_M_manager;
  pcStack_20 = std::
               _Function_handler<void(manifold::VecView<linalg::vec<double,3>>),manifold::Manifold::Impl::Warp(std::function<void(linalg::vec<double,3>&)>)::{lambda(manifold::VecView<linalg::vec<double,3>>)#1}>
               ::_M_invoke;
  local_38 = param_2;
  WarpBatch(this,&local_38);
  if (local_28 != (code *)0x0) {
    (*local_28)(&local_38,&local_38,3);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::Manifold::Impl::Impl(manifold::Manifold::Impl::Shape, linalg::mat<double, 3, 4>) */

void __thiscall manifold::Manifold::Impl::Impl(Impl *this,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *__dest;
  double *pdVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  double *__ptr;
  long lVar10;
  size_t __size;
  double *pdVar11;
  size_t __size_00;
  long in_FS_OFFSET;
  long lVar12;
  double in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  double in_stack_00000020;
  double in_stack_00000028;
  double in_stack_00000030;
  double in_stack_00000038;
  double in_stack_00000040;
  double in_stack_00000048;
  double in_stack_00000050;
  double in_stack_00000058;
  double in_stack_00000060;
  long lStack_1a0;
  ulong local_178;
  undefined1 local_168 [16];
  long local_158;
  undefined1 local_148 [16];
  long local_138;
  double *local_128;
  long local_120;
  long lStack_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  ulong local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  ulong local_b8;
  ulong uStack_b0;
  undefined1 local_a8 [16];
  ulong local_98;
  undefined8 uStack_90;
  ulong local_88;
  undefined8 uStack_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  undefined8 uStack_60;
  ulong local_58;
  ulong uStack_50;
  undefined1 local_48 [8];
  long local_40;
  
  uVar6 = _LC28;
  uVar4 = _LC22;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)this = uVar4;
  *(undefined8 *)(this + 8) = uVar4;
  uVar5 = _LC25;
  uVar4 = _LC22;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x10) = uVar4;
  *(undefined8 *)(this + 0x18) = uVar5;
  uVar4 = _LC25;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x30) = uVar6;
  *(undefined8 *)(this + 0x38) = uVar6;
  *(undefined8 *)(this + 0x20) = uVar4;
  *(undefined8 *)(this + 0x28) = uVar4;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x98) = (undefined1  [16])0x0;
  uVar4 = _LC26;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xc0) = uVar4;
  *(undefined8 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(Impl **)(this + 0xf8) = this + 0xe8;
  *(Impl **)(this + 0x100) = this + 0xe8;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  local_158 = 0;
  local_138 = 0;
  *(undefined1 (*) [16])(this + 0xb0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xd0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x118) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x130) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x148) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x160) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x178) = (undefined1  [16])0x0;
  local_168 = (undefined1  [16])0x0;
  local_148 = (undefined1  [16])0x0;
  if (param_2 == 1) {
    local_108 = (undefined1  [16])0x0;
    local_f8 = (undefined1  [16])0x0;
    local_c8 = (undefined1  [16])0x0;
    local_e8._0_8_ = __LC12;
    local_e8._8_8_ = _UNK_0010ce88;
    local_d8 = __LC12;
    uStack_d0 = _UNK_0010ce88;
    local_98 = __LC12;
    uStack_90 = _UNK_0010ce88;
    local_88 = __LC12;
    uStack_80 = _UNK_0010ce88;
    local_68 = __LC12;
    uStack_60 = _UNK_0010ce88;
    local_b8 = _LC5;
    uStack_b0 = _LC5;
    local_a8._8_8_ = 0;
    local_a8._0_8_ = _LC5;
    local_78 = _LC5;
    uStack_70 = _LC5;
    local_58 = _LC5;
    uStack_50 = _LC5;
    std::vector<linalg::vec<double,3>,std::allocator<linalg::vec<double,3>>>::
    _M_assign_aux<linalg::vec<double,3>const*>(local_168,local_108,local_48);
    puVar8 = &local_78;
    local_108._8_8_ = _UNK_0010cf18;
    local_108._0_8_ = __LC45;
    local_f8._8_8_ = _UNK_0010cf28;
    local_f8._0_8_ = __LC46;
    local_e8._8_8_ = _UNK_0010cf38;
    local_e8._0_8_ = __LC47;
    local_d8 = __LC48;
    uStack_d0 = _UNK_0010cf48;
    local_c8._8_8_ = _UNK_0010cf58;
    local_c8._0_8_ = __LC49;
    local_b8 = __LC50;
    uStack_b0 = _UNK_0010cf68;
    local_a8._8_8_ = _UNK_0010cf78;
    local_a8._0_8_ = __LC51;
    local_98 = __LC52;
    uStack_90 = _UNK_0010cf88;
    local_88 = __LC53;
    uStack_80 = _UNK_0010cf98;
LAB_001095a2:
    std::vector<linalg::vec<int,3>,std::allocator<linalg::vec<int,3>>>::
    _M_assign_aux<linalg::vec<int,3>const*>(local_148,local_108,puVar8);
    puVar9 = (undefined8 *)local_148._0_8_;
    pdVar11 = (double *)local_168._0_8_;
    local_128 = (double *)0x0;
    __size_00 = local_168._8_8_ - local_168._0_8_;
    __size = local_148._8_8_ - local_148._0_8_;
    local_178 = local_138 - local_148._0_8_;
    lVar10 = ((long)__size_00 >> 3) * -0x5555555555555555;
    lStack_1a0 = ((long)__size >> 2) * -0x5555555555555555;
    lStack_118 = lVar10;
    if (lVar10 == 0) goto LAB_0010962e;
    local_120 = lVar10;
    pdVar7 = (double *)malloc(__size_00);
    local_128 = pdVar7;
    if (0x18 < (long)__size_00) {
      pdVar7 = (double *)memmove(pdVar7,pdVar11,__size_00);
LAB_001098fb:
      if ((Impl *)&local_128 == this + 0x48) {
LAB_00109910:
        free(pdVar7);
        goto LAB_00109918;
      }
LAB_00109b60:
      __ptr = *(double **)(this + 0x48);
      lVar12 = lVar10;
      goto LAB_00109650;
    }
    if (__size_00 == 0x18) {
      dVar1 = *(double *)((undefined8)pdVar11 + 1);
      *pdVar7 = *pdVar11;
      pdVar7[1] = dVar1;
      pdVar7[2] = *(double *)((undefined8)pdVar11 + 2);
      goto LAB_001098fb;
    }
    if ((Impl *)&local_128 != this + 0x48) goto LAB_00109b60;
    if (pdVar7 != (double *)0x0) goto LAB_00109910;
LAB_00109918:
    lVar10 = *(long *)(this + 0x50);
    __ptr = *(double **)(this + 0x48);
  }
  else {
    if (param_2 == 2) {
      local_d8 = __LC12;
      uStack_d0 = _UNK_0010ce88;
      local_e8 = (undefined1  [16])0x0;
      local_c8 = (undefined1  [16])0x0;
      local_a8 = (undefined1  [16])0x0;
      local_108._8_8_ = 0;
      local_108._0_8_ = _LC5;
      local_f8._0_8_ = __LC54;
      local_f8._8_8_ = _UNK_0010cfa8;
      local_b8 = _LC55;
      uStack_b0 = 0;
      local_98 = _LC5;
      uStack_90 = 0;
      local_88 = __LC54;
      uStack_80 = _UNK_0010cfa8;
      std::vector<linalg::vec<double,3>,std::allocator<linalg::vec<double,3>>>::
      _M_assign_aux<linalg::vec<double,3>const*>(local_168,local_108,&local_78);
      puVar8 = (ulong *)local_a8;
      local_108._8_8_ = _UNK_0010cfc8;
      local_108._0_8_ = __LC56;
      local_f8._8_8_ = _UNK_0010cfd8;
      local_f8._0_8_ = __LC57;
      local_e8._8_8_ = _UNK_0010cfe8;
      local_e8._0_8_ = __LC58;
      local_d8 = __LC59;
      uStack_d0 = _UNK_0010cff8;
      local_c8._8_8_ = _UNK_0010d008;
      local_c8._0_8_ = __LC60;
      local_b8 = __LC61;
      uStack_b0 = _UNK_0010d018;
      goto LAB_001095a2;
    }
    if (param_2 == 0) {
      local_108._0_8_ = uVar6;
      local_108._8_8_ = uVar6;
      local_f8._0_8_ = __LC39;
      local_f8._8_8_ = _UNK_0010cec8;
      local_e8._0_8_ = __LC39;
      local_e8._8_8_ = _UNK_0010cec8;
      local_d8 = __LC39;
      uStack_d0 = _UNK_0010cec8;
      local_c8._8_8_ = _UNK_0010ced8;
      local_c8._0_8_ = _LC28;
      local_b8 = _LC5;
      uStack_b0 = _LC5;
      std::vector<linalg::vec<double,3>,std::allocator<linalg::vec<double,3>>>::
      _M_assign_aux<linalg::vec<double,3>const*>(local_168,local_108,local_a8);
      puVar8 = &local_d8;
      local_108._8_8_ = _UNK_0010cee8;
      local_108._0_8_ = __LC42;
      local_f8._8_8_ = _UNK_0010cef8;
      local_f8._0_8_ = __LC43;
      local_e8._8_8_ = _UNK_0010cf08;
      local_e8._0_8_ = __LC44;
      goto LAB_001095a2;
    }
    lStack_118 = 0;
    local_148._0_8_ = (undefined8 *)0x0;
    lStack_1a0 = 0;
    __size = 0;
    local_168._0_8_ = (double *)0x0;
    local_178 = 0;
LAB_0010962e:
    local_128 = (double *)0x0;
    __ptr = *(double **)(this + 0x48);
    pdVar11 = (double *)local_168._0_8_;
    puVar9 = (undefined8 *)local_148._0_8_;
    if ((Impl *)&local_128 == this + 0x48) {
      lVar10 = *(long *)(this + 0x50);
    }
    else {
      lVar10 = 0;
      pdVar7 = (double *)0x0;
      lVar12 = lStack_118;
      local_120 = lStack_118;
LAB_00109650:
      if (__ptr != (double *)0x0) {
        free(__ptr);
      }
      *(double **)(this + 0x48) = pdVar7;
      *(long *)(this + 0x50) = lVar12;
      *(long *)(this + 0x58) = lVar12;
      __ptr = pdVar7;
    }
  }
  pdVar7 = __ptr + lVar10 * 3;
  for (; pdVar7 != __ptr; __ptr = __ptr + 3) {
    dVar2 = *__ptr;
    dVar3 = __ptr[1];
    dVar1 = __ptr[2];
    *__ptr = dVar3 * in_stack_00000020 + dVar2 * in_stack_00000008 + dVar1 * in_stack_00000038 +
             in_stack_00000050;
    __ptr[1] = dVar3 * in_stack_00000028 + dVar2 * in_stack_00000010 + dVar1 * in_stack_00000040 +
               in_stack_00000058;
    __ptr[2] = dVar2 * in_stack_00000018 + dVar3 * in_stack_00000030 + dVar1 * in_stack_00000048 +
               in_stack_00000060;
  }
  local_128 = (double *)0x0;
  lStack_118 = lStack_1a0;
  local_120 = lStack_1a0;
  if (lStack_1a0 == 0) {
    CreateHalfedges(this,(Vec *)&local_128);
  }
  else {
    __dest = (undefined8 *)malloc(__size);
    local_128 = (double *)__dest;
    if ((long)__size < 0xd) {
      if (__size == 0xc) {
        *__dest = *puVar9;
        *(undefined4 *)(__dest + 1) = *(undefined4 *)(puVar9 + 1);
        CreateHalfedges(this,(Vec *)&local_128);
      }
      else {
        CreateHalfedges(this,(Vec *)&local_128);
        if (__dest == (undefined8 *)0x0) goto LAB_00109785;
      }
    }
    else {
      memmove(__dest,puVar9,__size);
      CreateHalfedges(this,(Vec *)&local_128);
    }
    free(__dest);
  }
LAB_00109785:
  manifold::Manifold::Impl::Finish();
  InitializeOriginal(this,false);
  CreateFaces(this);
  if (puVar9 != (undefined8 *)0x0) {
    operator_delete(puVar9,local_178);
  }
  if (pdVar11 == (double *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator_delete(pdVar11,local_158 - (long)pdVar11);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* (anonymous namespace)::JacobiConjugation(int, int, int, (anonymous namespace)::Symmetric3x3&,
   linalg::vec<double, 4>&) */

void (anonymous_namespace)::JacobiConjugation
               (int param_1,int param_2,int param_3,Symmetric3x3 *param_4,vec *param_5)

{
  vec *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double local_98;
  double local_90;
  
  dVar11 = *(double *)param_4;
  dVar10 = *(double *)(param_4 + 0x10);
  dVar12 = *(double *)(param_4 + 8);
  local_90 = (dVar11 - dVar10) + (dVar11 - dVar10);
  dVar6 = hypot(local_90,dVar12);
  uVar5 = _LC8;
  dVar6 = _LC5 / dVar6;
  dVar14 = _LC1;
  dVar13 = _LC4;
  dVar15 = _LC0;
  dVar7 = _LC2;
  if (_LC6 < dVar6) {
    local_90 = _LC3;
  }
  else if (local_90 * local_90 <= _LC7 * dVar12 * dVar12) {
    local_90 = _LC3;
  }
  else {
    local_90 = local_90 * dVar6;
    dVar13 = dVar6 * dVar12;
    dVar14 = (double)(_LC8 ^ (ulong)(dVar13 * dVar13));
    dVar15 = (dVar13 + dVar13) * local_90;
    dVar7 = dVar13 * dVar13;
  }
  dVar7 = fma(local_90,local_90,dVar7);
  dVar7 = _LC5 / dVar7;
  dVar6 = fma(local_90,local_90,dVar14);
  dVar14 = *(double *)(param_4 + 0x20);
  dVar6 = dVar6 * dVar7;
  dVar7 = dVar7 * dVar15;
  dVar15 = *(double *)(param_4 + 0x18);
  dVar8 = fma(dVar6,dVar12,dVar10 * dVar7);
  dVar9 = fma(dVar6,dVar11,dVar7 * dVar12);
  dVar8 = fma(dVar9,dVar6,dVar8 * dVar7);
  dVar9 = (double)((ulong)dVar7 ^ uVar5);
  dVar10 = fma(dVar9,dVar12,dVar10 * dVar6);
  dVar11 = fma(dVar9,dVar11,dVar12 * dVar6);
  dVar12 = fma(dVar11,dVar6,dVar10 * dVar7);
  *(double *)param_4 = dVar8;
  *(double *)(param_4 + 8) = dVar12;
  dVar11 = fma(dVar9,dVar11,dVar10 * dVar6);
  dVar10 = fma(dVar15,dVar6,dVar7 * dVar14);
  *(double *)(param_4 + 0x10) = dVar11;
  *(double *)(param_4 + 0x18) = dVar10;
  dVar12 = fma(dVar9,dVar15,dVar6 * dVar14);
  dVar11 = *(double *)(param_5 + 8);
  dVar10 = *(double *)(param_5 + 0x10);
  *(double *)(param_4 + 0x20) = dVar12;
  local_98 = dVar11 * dVar13;
  dVar15 = *(double *)param_5 * dVar13;
  dVar14 = dVar10 * dVar13;
  dVar12 = *(double *)(param_5 + 0x18);
  dVar13 = dVar13 * dVar12;
  if (param_3 == 0) {
    dVar11 = fma(*(double *)param_5,local_90,dVar13);
    *(double *)param_5 = dVar11;
    dVar11 = dVar15;
  }
  else if (param_3 == 1) {
    dVar11 = fma(dVar11,local_90,dVar13);
    *(double *)(param_5 + 8) = dVar11;
    dVar11 = local_98;
  }
  else {
    dVar11 = fma(dVar10,local_90,dVar13);
    *(double *)(param_5 + 0x10) = dVar11;
    dVar11 = dVar14;
  }
  dVar11 = fma(dVar12,local_90,(double)((ulong)dVar11 ^ uVar5));
  *(double *)(param_5 + 0x18) = dVar11;
  dVar11 = dVar15;
  if ((param_2 != 0) && (dVar11 = local_98, param_2 != 1)) {
    dVar11 = dVar14;
  }
  if (param_1 == 0) {
    dVar11 = fma(*(double *)param_5,local_90,dVar11);
    *(double *)param_5 = dVar11;
    local_98 = dVar15;
  }
  else if (param_1 == 1) {
    dVar11 = fma(*(double *)(param_5 + 8),local_90,dVar11);
    *(double *)(param_5 + 8) = dVar11;
  }
  else {
    dVar11 = fma(*(double *)(param_5 + 0x10),local_90,dVar11);
    *(double *)(param_5 + 0x10) = dVar11;
    local_98 = dVar14;
  }
  local_98 = (double)((ulong)local_98 ^ uVar5);
  if (param_2 == 0) {
    dVar11 = fma(*(double *)param_5,local_90,local_98);
  }
  else if (param_2 == 1) {
    pvVar1 = param_5 + 8;
    param_5 = param_5 + 8;
    dVar11 = fma(*(double *)pvVar1,local_90,local_98);
  }
  else {
    pvVar1 = param_5 + 0x10;
    param_5 = param_5 + 0x10;
    dVar11 = fma(*(double *)pvVar1,local_90,local_98);
  }
  *(double *)param_5 = dVar11;
  uVar3 = *(undefined8 *)param_4;
  uVar4 = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)param_4 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(param_4 + 8) = *(undefined8 *)(param_4 + 0x20);
  uVar2 = *(undefined8 *)(param_4 + 0x28);
  *(undefined8 *)(param_4 + 0x20) = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(param_4 + 0x28) = uVar3;
  *(undefined8 *)(param_4 + 0x10) = uVar2;
  *(undefined8 *)(param_4 + 0x18) = uVar4;
  return;
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



/* manifold::Collider::Transform(linalg::mat<double, 3, 4>) */

char manifold::Collider::Transform(undefined8 *param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  double *pdVar4;
  int *piVar5;
  double *pdVar6;
  char cVar7;
  int iVar8;
  long in_FS_OFFSET;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  double in_stack_00000020;
  double in_stack_00000028;
  double in_stack_00000030;
  double in_stack_00000038;
  double in_stack_00000040;
  double in_stack_00000048;
  double in_stack_00000050;
  double in_stack_00000058;
  double in_stack_00000060;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  cVar7 = '\x01';
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar5 = (int *)&local_60;
  local_58 = 2;
  local_60 = _LC9;
  do {
    local_48 = 2;
    iVar8 = 0;
    local_50 = _LC9;
    piVar3 = (int *)&local_50;
    do {
      iVar1 = *piVar3;
      pdVar6 = &stack0x00000020;
      if (((iVar1 != 1) && (pdVar6 = &stack0x00000038, iVar1 != 2)) &&
         (pdVar6 = &stack0x00000008, iVar1 != 0)) {
        pdVar6 = &stack0x00000050;
      }
      if (*piVar5 == 0) {
        dVar9 = *pdVar6;
      }
      else if (*piVar5 == 1) {
        dVar9 = pdVar6[1];
      }
      else {
        dVar9 = pdVar6[2];
      }
      if (dVar9 == 0.0) {
        iVar8 = iVar8 + 1;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != &local_44);
    if (iVar8 != 2) {
      cVar7 = '\0';
    }
    piVar5 = piVar5 + 1;
  } while (piVar5 != &local_54);
  if (cVar7 != '\0') {
    pdVar6 = (double *)*param_1;
    pdVar4 = pdVar6 + param_1[1] * 6;
    for (; pdVar6 != pdVar4; pdVar6 = pdVar6 + 6) {
      dVar9 = *pdVar6;
      dVar17 = pdVar6[1];
      dVar14 = pdVar6[2];
      dVar10 = pdVar6[3];
      dVar15 = in_stack_00000020 * dVar17 + in_stack_00000008 * dVar9 + in_stack_00000038 * dVar14 +
               in_stack_00000050;
      dVar12 = pdVar6[5];
      dVar13 = in_stack_00000028 * dVar17 + in_stack_00000010 * dVar9 + in_stack_00000040 * dVar14 +
               in_stack_00000058;
      dVar11 = dVar17 * in_stack_00000030 + dVar9 * in_stack_00000018 + dVar14 * in_stack_00000048 +
               in_stack_00000060;
      dVar9 = pdVar6[4];
      dVar14 = in_stack_00000020 * dVar9 + in_stack_00000008 * dVar10 + in_stack_00000038 * dVar12 +
               in_stack_00000050;
      dVar18 = in_stack_00000028 * dVar9 + in_stack_00000010 * dVar10 + in_stack_00000040 * dVar12 +
               in_stack_00000058;
      dVar12 = dVar9 * in_stack_00000030 + dVar10 * in_stack_00000018 + dVar12 * in_stack_00000048 +
               in_stack_00000060;
      dVar10 = dVar12;
      dVar9 = dVar12;
      dVar17 = dVar13;
      if (dVar15 < dVar14) {
        dVar16 = dVar15;
        if (dVar13 < dVar18) {
          if (dVar11 < dVar12) goto LAB_0010a6a2;
        }
        else {
          dVar9 = dVar11;
          dVar17 = dVar18;
          if (dVar12 <= dVar11) {
            dVar9 = dVar12;
          }
        }
LAB_0010a4dc:
        if (dVar13 < dVar18) {
LAB_0010a657:
          dVar13 = dVar18;
        }
        bVar2 = dVar11 < dVar12;
        dVar10 = dVar11;
        dVar11 = dVar9;
        dVar15 = dVar14;
        dVar18 = dVar13;
        if (bVar2) {
          dVar10 = dVar12;
        }
      }
      else {
        dVar16 = dVar14;
        if (dVar18 <= dVar13) {
          dVar17 = dVar18;
          if (dVar12 <= dVar11) {
            if (dVar14 <= dVar15) {
              dVar14 = dVar15;
            }
            goto LAB_0010a4dc;
          }
        }
        else if (dVar12 <= dVar11) {
          if (dVar14 <= dVar15) {
            dVar14 = dVar15;
          }
          goto LAB_0010a657;
        }
LAB_0010a6a2:
        if (dVar15 < dVar14) {
          dVar15 = dVar14;
          if (dVar18 <= dVar13) {
            dVar18 = dVar13;
          }
        }
        else if (dVar18 <= dVar13) {
          dVar18 = dVar13;
        }
      }
      *pdVar6 = dVar16;
      pdVar6[1] = dVar17;
      pdVar6[2] = dVar11;
      pdVar6[3] = dVar15;
      pdVar6[4] = dVar18;
      pdVar6[5] = dVar10;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return cVar7;
}



/* manifold::CreateTmpEdges(manifold::Vec<manifold::Halfedge> const&) */

manifold * __thiscall manifold::CreateTmpEdges(manifold *this,Vec *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  size_t __size;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  size_t __size_00;
  ulong uVar14;
  int iVar15;
  int iVar17;
  undefined8 uVar16;
  undefined8 *puVar9;
  
  uVar1 = *(ulong *)(param_1 + 8);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x10) = 0;
  __size_00 = uVar1 * 0xc;
  if (uVar1 == 0) {
    *(undefined8 *)(this + 8) = 0;
    uVar12 = 0;
    uVar14 = 0;
    __size = 0;
LAB_0010a759:
    uVar4 = *(ulong *)(this + 8);
    if (uVar4 < uVar14) {
      puVar10 = *(undefined8 **)this;
LAB_0010a79c:
      for (puVar5 = (undefined4 *)((long)puVar10 + uVar4 * 0xc);
          (undefined4 *)((long)puVar10 + __size) != puVar5; puVar5 = puVar5 + 3) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
      }
      *(ulong *)(this + 8) = uVar14;
      goto joined_r0x0010a9d5;
    }
    *(ulong *)(this + 8) = uVar14;
    if (uVar1 <= uVar12) {
      return this;
    }
    if (uVar14 != 0) goto LAB_0010a9db;
    puVar6 = *(undefined8 **)this;
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)malloc(__size_00);
    lVar8 = *(long *)param_1;
    uVar12 = 0;
    *(undefined8 **)this = puVar6;
    *(ulong *)(this + 8) = uVar1;
    *(ulong *)(this + 0x10) = uVar1;
    do {
      iVar11 = (int)uVar12;
      lVar7 = (long)iVar11;
      puVar10 = (undefined8 *)(lVar8 + lVar7 * 0xc);
      uVar16 = *puVar10;
      iVar15 = (int)uVar16;
      iVar17 = (int)((ulong)uVar16 >> 0x20);
      if (iVar17 <= iVar15) {
        if (iVar15 <= iVar17) {
          iVar17 = iVar15;
        }
        iVar11 = -1;
        uVar16 = CONCAT44(*(undefined4 *)puVar10,iVar17);
      }
      puVar10 = (undefined8 *)(lVar7 * 0xc + (long)puVar6);
      uVar12 = uVar12 + 1;
      *(int *)(puVar10 + 1) = iVar11;
      *puVar10 = uVar16;
    } while (uVar12 != uVar1);
    puVar10 = (undefined8 *)((long)puVar6 + __size_00);
    lVar8 = ((long)__size_00 >> 2) * -0x5555555555555555 >> 2;
    puVar9 = puVar6;
    if (0 < lVar8) {
      puVar13 = puVar6;
      do {
        if (*(int *)(puVar13 + 1) < 0) goto LAB_0010a8eb;
        if (*(int *)((long)puVar13 + 0x14) < 0) {
          puVar13 = (undefined8 *)((long)puVar13 + 0xc);
          goto LAB_0010a8eb;
        }
        if (*(int *)(puVar13 + 4) < 0) {
          puVar13 = puVar13 + 3;
          goto LAB_0010a8eb;
        }
        if (*(int *)((long)puVar13 + 0x2c) < 0) {
          puVar13 = (undefined8 *)((long)puVar13 + 0x24);
          goto LAB_0010a8eb;
        }
        puVar13 = puVar13 + 6;
        puVar9 = puVar6 + lVar8 * 6;
      } while (puVar6 + lVar8 * 6 != puVar13);
    }
    puVar13 = puVar9;
    lVar8 = (long)puVar10 - (long)puVar13;
    puVar9 = puVar10;
    if (lVar8 == 0x18) {
LAB_0010aa8b:
      if (-1 < *(int *)(puVar13 + 1)) {
        puVar13 = (undefined8 *)((long)puVar13 + 0xc);
LAB_0010aa68:
        if (-1 < *(int *)(puVar13 + 1)) goto LAB_0010a921;
      }
LAB_0010a8eb:
      puVar9 = puVar13;
      puVar2 = puVar13;
      if (puVar10 != puVar13) {
        while (puVar3 = puVar2, puVar2 = (undefined8 *)((long)puVar3 + 0xc), puVar9 = puVar13,
              puVar10 != puVar2) {
          if (-1 < *(int *)((long)puVar3 + 0x14)) {
            *puVar13 = *puVar2;
            *(undefined4 *)(puVar13 + 1) = *(undefined4 *)((long)puVar3 + 0x14);
            puVar13 = (undefined8 *)((long)puVar13 + 0xc);
          }
        }
      }
    }
    else {
      if (lVar8 == 0x24) {
        if (-1 < *(int *)(puVar13 + 1)) {
          puVar13 = (undefined8 *)((long)puVar13 + 0xc);
          goto LAB_0010aa8b;
        }
        goto LAB_0010a8eb;
      }
      if (lVar8 == 0xc) goto LAB_0010aa68;
    }
LAB_0010a921:
    __size = (long)puVar9 - (long)puVar6;
    uVar14 = ((long)__size >> 2) * -0x5555555555555555;
    uVar12 = ((long)__size >> 2) * 0x5555555555555556;
    if (uVar14 <= uVar1) goto LAB_0010a759;
    puVar10 = (undefined8 *)malloc(__size);
    if ((long)__size_00 < 0xd) {
      if (__size_00 == 0xc) {
        *puVar10 = *puVar6;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
        goto LAB_0010a990;
      }
      if (puVar6 != (undefined8 *)0x0) goto LAB_0010a990;
    }
    else {
      puVar10 = (undefined8 *)memcpy(puVar10,puVar6,__size_00);
LAB_0010a990:
      free(puVar6);
    }
    uVar4 = *(ulong *)(this + 8);
    *(undefined8 **)this = puVar10;
    *(ulong *)(this + 0x10) = uVar14;
    if (uVar4 < uVar14) goto LAB_0010a79c;
    *(ulong *)(this + 8) = uVar14;
joined_r0x0010a9d5:
    if (uVar1 <= uVar12) {
      return this;
    }
LAB_0010a9db:
    puVar10 = (undefined8 *)malloc(__size);
    puVar6 = *(undefined8 **)this;
    if (0xc < (long)__size) {
      memmove(puVar10,puVar6,__size);
      goto LAB_0010aa02;
    }
    if (__size == 0xc) {
      *puVar10 = *puVar6;
      *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
      goto LAB_0010aa02;
    }
  }
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined8 **)this = puVar10;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 8);
    return this;
  }
LAB_0010aa02:
  free(puVar6);
  *(undefined8 **)this = puVar10;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 8);
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::SpectralNorm(linalg::mat<double, 3, 3>) */

double manifold::SpectralNorm(void)

{
  undefined8 __x;
  undefined8 __x_00;
  int iVar1;
  long in_FS_OFFSET;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  double in_stack_00000020;
  double in_stack_00000028;
  double in_stack_00000030;
  double in_stack_00000038;
  double in_stack_00000040;
  double in_stack_00000048;
  double local_120;
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  long local_20;
  
  iVar1 = 0xc;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = in_stack_00000010 * in_stack_00000010 + in_stack_00000008 * in_stack_00000008 +
             in_stack_00000018 * in_stack_00000018;
  dStack_50 = in_stack_00000010 * in_stack_00000028 + in_stack_00000008 * in_stack_00000020 +
              in_stack_00000030 * in_stack_00000018;
  local_48 = in_stack_00000028 * in_stack_00000028 + in_stack_00000020 * in_stack_00000020 +
             in_stack_00000030 * in_stack_00000030;
  dStack_40 = in_stack_00000010 * in_stack_00000040 + in_stack_00000008 * in_stack_00000038 +
              in_stack_00000018 * in_stack_00000048;
  local_38 = in_stack_00000038 * in_stack_00000020 + in_stack_00000040 * in_stack_00000028 +
             in_stack_00000048 * in_stack_00000030;
  dStack_30 = in_stack_00000038 * in_stack_00000038 + in_stack_00000040 * in_stack_00000040 +
              in_stack_00000048 * in_stack_00000048;
  local_78 = (undefined1  [16])0x0;
  local_68 = __LC12;
  dStack_60 = _UNK_0010ce88;
  do {
    (anonymous_namespace)::JacobiConjugation(0,1,2,(Symmetric3x3 *)&local_58,(vec *)local_78);
    (anonymous_namespace)::JacobiConjugation(1,2,0,(Symmetric3x3 *)&local_58,(vec *)local_78);
    (anonymous_namespace)::JacobiConjugation(2,0,1,(Symmetric3x3 *)&local_58,(vec *)local_78);
    dVar7 = local_68;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  __x_00 = local_78._8_8_;
  __x = local_78._0_8_;
  dVar13 = (double)local_78._8_8_ * dStack_60;
  dVar3 = fma(local_68,(double)local_78._0_8_,dVar13);
  dVar9 = (double)((ulong)dStack_60 ^ _LC8);
  dVar3 = dVar3 + dVar3;
  dVar17 = (double)__x * dVar9;
  dVar4 = fma((double)__x_00,dVar7,dVar17);
  dVar4 = dVar4 + dVar4;
  dVar5 = fma((double)__x,(double)__x,(double)__x_00 * (double)__x_00);
  dVar9 = dVar9 * dVar7;
  dVar21 = _LC5 - (dVar5 + dVar5);
  dVar5 = fma((double)__x_00,(double)__x,dVar9);
  dVar5 = dVar5 + dVar5;
  dVar6 = fma((double)__x,(double)__x,dVar7 * dVar7);
  dVar16 = _LC5 - (dVar6 + dVar6);
  dVar6 = fma((double)__x_00,dVar7,(double)((ulong)dVar17 ^ _LC8));
  dVar6 = dVar6 + dVar6;
  dVar17 = fma((double)__x_00,(double)__x_00,dVar7 * dVar7);
  dVar11 = _LC5 - (dVar17 + dVar17);
  dVar17 = fma((double)__x_00,(double)__x,(double)((ulong)dVar9 ^ _LC8));
  dVar17 = dVar17 + dVar17;
  dVar7 = fma(dVar7,(double)__x,(double)((ulong)dVar13 ^ _LC8));
  dVar7 = dVar7 + dVar7;
  dVar18 = in_stack_00000020 * dVar17 + in_stack_00000008 * dVar11 + in_stack_00000038 * dVar7;
  dVar19 = in_stack_00000028 * dVar17 + in_stack_00000010 * dVar11 + in_stack_00000040 * dVar7;
  local_120 = dVar17 * in_stack_00000030 + dVar11 * in_stack_00000018 + dVar7 * in_stack_00000048;
  dVar14 = in_stack_00000020 * dVar16 + in_stack_00000008 * dVar5 + in_stack_00000038 * dVar6;
  dVar13 = in_stack_00000028 * dVar16 + in_stack_00000010 * dVar5 + in_stack_00000040 * dVar6;
  dVar9 = dVar16 * in_stack_00000030 + dVar5 * in_stack_00000018 + dVar6 * in_stack_00000048;
  dVar5 = in_stack_00000020 * dVar4 + in_stack_00000008 * dVar3 + in_stack_00000038 * dVar21;
  dVar6 = in_stack_00000028 * dVar4 + in_stack_00000010 * dVar3 + in_stack_00000040 * dVar21;
  dVar11 = dVar4 * in_stack_00000030 + dVar3 * in_stack_00000018 + dVar21 * in_stack_00000048;
  dVar16 = dVar18 * dVar18 + 0.0 + dVar19 * dVar19 + local_120 * local_120;
  dVar17 = dVar14 * dVar14 + 0.0 + dVar13 * dVar13 + dVar9 * dVar9;
  dVar4 = dVar5 * dVar5 + 0.0 + dVar6 * dVar6 + dVar11 * dVar11;
  dVar7 = dVar11;
  dVar3 = dVar6;
  if (dVar16 < dVar17) {
    dVar21 = dVar14;
    dVar20 = dVar13;
    dVar8 = dVar16;
    dVar10 = (double)((ulong)local_120 ^ _LC8);
    dVar12 = (double)((ulong)dVar19 ^ _LC8);
    dVar15 = (double)((ulong)dVar18 ^ _LC8);
    local_120 = dVar9;
    if (dVar17 < dVar4) {
      dVar14 = (double)((ulong)dVar14 ^ _LC8);
      dVar13 = (double)((ulong)dVar13 ^ _LC8);
      dVar9 = (double)((ulong)dVar9 ^ _LC8);
      local_120 = dVar11;
      goto LAB_0010b208;
    }
  }
  else {
    dVar21 = dVar18;
    dVar20 = dVar19;
    dVar8 = dVar17;
    dVar10 = dVar9;
    dVar12 = dVar13;
    dVar15 = dVar14;
    if (dVar16 < dVar4) {
      dVar7 = (double)((ulong)local_120 ^ _LC8);
      dVar21 = dVar5;
      dVar3 = (double)((ulong)dVar19 ^ _LC8);
      dVar20 = dVar6;
      dVar4 = dVar16;
      dVar5 = (double)((ulong)dVar18 ^ _LC8);
      local_120 = dVar11;
    }
  }
  uVar2 = -(ulong)(dVar4 <= dVar8);
  dVar9 = (double)((ulong)dVar10 & uVar2 | ~uVar2 & (ulong)dVar7);
  dVar14 = (double)((ulong)dVar15 & uVar2 | ~uVar2 & (ulong)dVar5);
  dVar13 = (double)((ulong)dVar12 & uVar2 | ~uVar2 & (ulong)dVar3);
  dVar5 = dVar21;
  dVar6 = dVar20;
LAB_0010b208:
  dVar7 = hypot(dVar5,dVar6);
  dVar4 = fmax(dVar7,_LC13);
  dVar4 = (double)((ulong)dVar5 & _LC14) + dVar4;
  dVar7 = (double)(-(ulong)(_LC13 < dVar7) & (ulong)dVar6);
  dVar3 = dVar4;
  if (dVar5 < 0.0) {
    dVar3 = dVar7;
    dVar7 = dVar4;
  }
  dVar4 = hypot(dVar3,dVar7);
  dVar4 = _LC5 / dVar4;
  dVar7 = dVar7 * dVar4;
  dVar17 = fma(dVar7 * dVar7,_LC15,_LC5);
  dVar3 = dVar3 * dVar4;
  dVar7 = (dVar3 + dVar3) * dVar7;
  dVar3 = fma(dVar17,dVar5,dVar6 * dVar7);
  dVar6 = fma(dVar17,dVar14,dVar7 * dVar13);
  dVar4 = fma((double)((ulong)dVar7 ^ _LC8),dVar14,dVar17 * dVar13);
  dVar7 = hypot(dVar3,local_120);
  dVar17 = fmax(dVar7,_LC13);
  dVar17 = (double)((ulong)dVar3 & _LC14) + dVar17;
  dVar5 = (double)(-(ulong)(_LC13 < dVar7) & (ulong)local_120);
  dVar7 = dVar17;
  if (dVar3 < 0.0) {
    dVar7 = dVar5;
    dVar5 = dVar17;
  }
  dVar17 = hypot(dVar7,dVar5);
  dVar17 = _LC5 / dVar17;
  dVar5 = dVar5 * dVar17;
  dVar11 = fma(dVar5 * dVar5,_LC15,_LC5);
  dVar7 = dVar7 * dVar17;
  dVar5 = (dVar7 + dVar7) * dVar5;
  dVar3 = fma(dVar3,dVar11,local_120 * dVar5);
  dVar6 = fma(dVar6,(double)((ulong)dVar5 ^ _LC8),dVar11 * dVar9);
  dVar7 = hypot(dVar4,dVar6);
  dVar5 = fmax(dVar7,_LC13);
  dVar5 = (double)((ulong)dVar4 & _LC14) + dVar5;
  dVar6 = (double)((ulong)dVar6 & -(ulong)(_LC13 < dVar7));
  dVar7 = dVar6;
  if (dVar4 < 0.0) {
    dVar7 = dVar5;
    dVar5 = dVar6;
  }
  hypot(dVar5,dVar7);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return dVar3;
}



/* manifold::Manifold::Impl::MeshRelationD::MeshRelationD(manifold::Manifold::Impl::MeshRelationD
   const&) */

void __thiscall
manifold::Manifold::Impl::MeshRelationD::MeshRelationD(MeshRelationD *this,MeshRelationD *param_1)

{
  MeshRelationD *pMVar1;
  _Rb_tree_node_base *p_Var2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  _Rb_tree_node *p_Var6;
  _Rb_tree_node *p_Var7;
  undefined8 *puVar8;
  _Alloc_node *p_Var9;
  _Rb_tree_node *p_Var10;
  _Alloc_node *extraout_RDX;
  _Alloc_node *extraout_RDX_00;
  _Alloc_node *extraout_RDX_01;
  _Alloc_node *extraout_RDX_02;
  size_t sVar11;
  long in_FS_OFFSET;
  undefined8 *local_58;
  long local_50;
  long lStack_48;
  long local_40;
  
  pMVar1 = this + 8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(undefined8 *)param_1;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  lVar4 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = 0;
  puVar5 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)this = uVar3;
  local_58 = (undefined8 *)0x0;
  local_50 = lVar4;
  lStack_48 = lVar4;
  if (lVar4 == 0) {
    p_Var9 = (_Alloc_node *)0x0;
    if (pMVar1 != (MeshRelationD *)&local_58) {
      puVar8 = (undefined8 *)0x0;
LAB_0010b6f6:
      *(undefined8 **)(this + 8) = puVar8;
      *(long *)(this + 0x10) = lVar4;
      *(long *)(this + 0x18) = lVar4;
    }
  }
  else {
    sVar11 = lVar4 * 8;
    puVar8 = (undefined8 *)malloc(sVar11);
    local_58 = puVar8;
    if ((long)sVar11 < 9) {
      p_Var9 = extraout_RDX;
      if (sVar11 != 8) {
        if (pMVar1 != (MeshRelationD *)&local_58) goto LAB_0010b6f6;
        if (puVar8 != (undefined8 *)0x0) {
          free(puVar8);
          p_Var9 = extraout_RDX_02;
        }
        goto LAB_0010b6fe;
      }
      *puVar8 = *puVar5;
    }
    else {
      puVar8 = (undefined8 *)memmove(puVar8,puVar5,sVar11);
      p_Var9 = extraout_RDX_00;
    }
    if (pMVar1 != (MeshRelationD *)&local_58) goto LAB_0010b6f6;
    free(puVar8);
    p_Var9 = extraout_RDX_01;
  }
LAB_0010b6fe:
  *(undefined8 *)(this + 0x30) = 0;
  p_Var6 = *(_Rb_tree_node **)(param_1 + 0x30);
  p_Var2 = (_Rb_tree_node_base *)(this + 0x28);
  *(undefined4 *)(this + 0x28) = 0;
  *(_Rb_tree_node_base **)(this + 0x38) = p_Var2;
  *(_Rb_tree_node_base **)(this + 0x40) = p_Var2;
  *(undefined8 *)(this + 0x48) = 0;
  if (p_Var6 != (_Rb_tree_node *)0x0) {
    p_Var7 = std::
             _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
             ::
             _M_copy<false,std::_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>::_Alloc_node>
                       (p_Var6,p_Var2,p_Var9);
    p_Var6 = p_Var7;
    do {
      p_Var10 = p_Var6;
      p_Var6 = *(_Rb_tree_node **)(p_Var10 + 0x10);
    } while (p_Var6 != (_Rb_tree_node *)0x0);
    *(_Rb_tree_node **)(this + 0x38) = p_Var10;
    p_Var6 = p_Var7;
    do {
      p_Var10 = p_Var6;
      p_Var6 = *(_Rb_tree_node **)(p_Var10 + 0x18);
    } while (p_Var6 != (_Rb_tree_node *)0x0);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(_Rb_tree_node **)(this + 0x40) = p_Var10;
    *(_Rb_tree_node **)(this + 0x30) = p_Var7;
    *(undefined8 *)(this + 0x48) = uVar3;
  }
  *(undefined8 *)(this + 0x50) = 0;
  pMVar1 = this + 0x50;
  puVar5 = *(undefined8 **)(param_1 + 0x50);
  *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
  lVar4 = *(long *)(param_1 + 0x58);
  local_58 = (undefined8 *)0x0;
  if (lVar4 == 0) {
    if (pMVar1 != (MeshRelationD *)&local_58) {
      puVar8 = (undefined8 *)0x0;
LAB_0010b7af:
      *(undefined8 **)(this + 0x50) = puVar8;
      *(long *)(this + 0x58) = lVar4;
      *(long *)(this + 0x60) = lVar4;
    }
  }
  else {
    sVar11 = lVar4 * 0x10;
    local_50 = lVar4;
    lStack_48 = lVar4;
    puVar8 = (undefined8 *)malloc(sVar11);
    local_58 = puVar8;
    if ((long)sVar11 < 0x11) {
      if (sVar11 != 0x10) {
        if (pMVar1 != (MeshRelationD *)&local_58) goto LAB_0010b7af;
        if (puVar8 != (undefined8 *)0x0) {
          free(puVar8);
        }
        goto LAB_0010b7b7;
      }
      uVar3 = puVar5[1];
      *puVar8 = *puVar5;
      puVar8[1] = uVar3;
    }
    else {
      puVar8 = (undefined8 *)memmove(puVar8,puVar5,sVar11);
    }
    if (pMVar1 != (MeshRelationD *)&local_58) goto LAB_0010b7af;
    free(puVar8);
  }
LAB_0010b7b7:
  *(undefined8 *)(this + 0x68) = 0;
  pMVar1 = this + 0x68;
  puVar5 = *(undefined8 **)(param_1 + 0x68);
  *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
  lVar4 = *(long *)(param_1 + 0x70);
  local_58 = (undefined8 *)0x0;
  local_50 = lVar4;
  lStack_48 = lVar4;
  if (lVar4 == 0) {
    if (pMVar1 != (MeshRelationD *)&local_58) {
      puVar8 = (undefined8 *)0x0;
LAB_0010b7fa:
      *(undefined8 **)(this + 0x68) = puVar8;
      *(long *)(this + 0x70) = lVar4;
      *(long *)(this + 0x78) = lVar4;
    }
LAB_0010b802:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    sVar11 = lVar4 * 0xc;
    puVar8 = (undefined8 *)malloc(sVar11);
    local_58 = puVar8;
    if ((long)sVar11 < 0xd) {
      if (sVar11 == 0xc) {
        *puVar8 = *puVar5;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar5 + 1);
        goto LAB_0010b91e;
      }
      if (pMVar1 != (MeshRelationD *)&local_58) goto LAB_0010b7fa;
      if (puVar8 == (undefined8 *)0x0) goto LAB_0010b802;
    }
    else {
      puVar8 = (undefined8 *)memmove(puVar8,puVar5,sVar11);
LAB_0010b91e:
      if (pMVar1 != (MeshRelationD *)&local_58) goto LAB_0010b7fa;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      free(puVar8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Impl::Impl(manifold::Manifold::Impl const&) */

void __thiscall manifold::Manifold::Impl::Impl(Impl *this,Impl *param_1)

{
  Impl *pIVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *__src;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *__ptr;
  undefined8 *puVar14;
  ulong uVar15;
  size_t sVar16;
  long in_FS_OFFSET;
  undefined8 *local_58;
  long local_50;
  long lStack_48;
  long local_40;
  
  pIVar1 = this + 0x48;
  uVar6 = *(undefined8 *)param_1;
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  local_58 = (undefined8 *)0x0;
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0x40) = uVar2;
  lVar3 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x48) = 0;
  puVar4 = *(undefined8 **)(param_1 + 0x48);
  *(undefined8 *)this = uVar6;
  *(undefined8 *)(this + 8) = uVar7;
  *(undefined8 *)(this + 0x10) = uVar8;
  *(undefined8 *)(this + 0x18) = uVar9;
  *(undefined8 *)(this + 0x20) = uVar10;
  *(undefined8 *)(this + 0x28) = uVar11;
  *(undefined8 *)(this + 0x30) = uVar12;
  *(undefined8 *)(this + 0x38) = uVar13;
  if (lVar3 == 0) {
    if (pIVar1 != (Impl *)&local_58) {
      puVar14 = (undefined8 *)0x0;
LAB_0010ba78:
      *(undefined8 **)(this + 0x48) = puVar14;
      *(long *)(this + 0x50) = lVar3;
      *(long *)(this + 0x58) = lVar3;
    }
  }
  else {
    sVar16 = lVar3 * 0x18;
    local_50 = lVar3;
    lStack_48 = lVar3;
    puVar14 = (undefined8 *)malloc(sVar16);
    local_58 = puVar14;
    if ((long)sVar16 < 0x19) {
      if (sVar16 != 0x18) {
        if (pIVar1 != (Impl *)&local_58) goto LAB_0010ba78;
        if (puVar14 != (undefined8 *)0x0) {
          free(puVar14);
        }
        goto LAB_0010ba80;
      }
      uVar6 = puVar4[1];
      *puVar14 = *puVar4;
      puVar14[1] = uVar6;
      puVar14[2] = puVar4[2];
    }
    else {
      puVar14 = (undefined8 *)memmove(puVar14,puVar4,sVar16);
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_0010ba78;
    free(puVar14);
  }
LAB_0010ba80:
  *(undefined8 *)(this + 0x60) = 0;
  pIVar1 = this + 0x60;
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  *(undefined1 (*) [16])(this + 0x68) = (undefined1  [16])0x0;
  lVar3 = *(long *)(param_1 + 0x68);
  local_58 = (undefined8 *)0x0;
  if (lVar3 == 0) {
    if (pIVar1 != (Impl *)&local_58) {
      puVar14 = (undefined8 *)0x0;
LAB_0010bac3:
      *(undefined8 **)(this + 0x60) = puVar14;
      *(long *)(this + 0x68) = lVar3;
      *(long *)(this + 0x70) = lVar3;
    }
  }
  else {
    sVar16 = lVar3 * 0xc;
    local_50 = lVar3;
    lStack_48 = lVar3;
    puVar14 = (undefined8 *)malloc(sVar16);
    local_58 = puVar14;
    if ((long)sVar16 < 0xd) {
      if (sVar16 != 0xc) {
        if (pIVar1 != (Impl *)&local_58) goto LAB_0010bac3;
        if (puVar14 != (undefined8 *)0x0) {
          free(puVar14);
        }
        goto LAB_0010bacb;
      }
      *puVar14 = *puVar4;
      *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar4 + 1);
    }
    else {
      puVar14 = (undefined8 *)memmove(puVar14,puVar4,sVar16);
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_0010bac3;
    free(puVar14);
  }
LAB_0010bacb:
  *(undefined8 *)(this + 0x78) = 0;
  pIVar1 = this + 0x78;
  puVar4 = *(undefined8 **)(param_1 + 0x78);
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  lVar3 = *(long *)(param_1 + 0x80);
  local_58 = (undefined8 *)0x0;
  if (lVar3 == 0) {
    if (pIVar1 != (Impl *)&local_58) {
      puVar14 = (undefined8 *)0x0;
LAB_0010bb14:
      *(undefined8 **)(this + 0x78) = puVar14;
      *(long *)(this + 0x80) = lVar3;
      *(long *)(this + 0x88) = lVar3;
    }
  }
  else {
    sVar16 = lVar3 * 0x18;
    local_50 = lVar3;
    lStack_48 = lVar3;
    puVar14 = (undefined8 *)malloc(sVar16);
    local_58 = puVar14;
    if ((long)sVar16 < 0x19) {
      if (sVar16 != 0x18) {
        if (pIVar1 != (Impl *)&local_58) goto LAB_0010bb14;
        if (puVar14 != (undefined8 *)0x0) {
          free(puVar14);
        }
        goto LAB_0010bb1f;
      }
      uVar6 = puVar4[1];
      *puVar14 = *puVar4;
      puVar14[1] = uVar6;
      puVar14[2] = puVar4[2];
    }
    else {
      puVar14 = (undefined8 *)memmove(puVar14,puVar4,sVar16);
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_0010bb14;
    free(puVar14);
  }
LAB_0010bb1f:
  pIVar1 = this + 0x90;
  *(undefined8 *)(this + 0x90) = 0;
  puVar4 = *(undefined8 **)(param_1 + 0x90);
  *(undefined1 (*) [16])(this + 0x98) = (undefined1  [16])0x0;
  lVar3 = *(long *)(param_1 + 0x98);
  local_58 = (undefined8 *)0x0;
  if (lVar3 == 0) {
    if (pIVar1 != (Impl *)&local_58) {
      puVar14 = (undefined8 *)0x0;
LAB_0010bb71:
      *(undefined8 **)(this + 0x90) = puVar14;
      *(long *)(this + 0x98) = lVar3;
      *(long *)(this + 0xa0) = lVar3;
    }
  }
  else {
    sVar16 = lVar3 * 0x18;
    local_50 = lVar3;
    lStack_48 = lVar3;
    puVar14 = (undefined8 *)malloc(sVar16);
    local_58 = puVar14;
    if ((long)sVar16 < 0x19) {
      if (sVar16 != 0x18) {
        if (pIVar1 != (Impl *)&local_58) goto LAB_0010bb71;
        if (puVar14 != (undefined8 *)0x0) {
          free(puVar14);
        }
        goto LAB_0010bb7f;
      }
      uVar6 = puVar4[1];
      *puVar14 = *puVar4;
      puVar14[1] = uVar6;
      puVar14[2] = puVar4[2];
    }
    else {
      puVar14 = (undefined8 *)memmove(puVar14,puVar4,sVar16);
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_0010bb71;
    free(puVar14);
  }
LAB_0010bb7f:
  pIVar1 = this + 0xa8;
  *(undefined8 *)(this + 0xa8) = 0;
  puVar4 = *(undefined8 **)(param_1 + 0xa8);
  *(undefined1 (*) [16])(this + 0xb0) = (undefined1  [16])0x0;
  lVar3 = *(long *)(param_1 + 0xb0);
  local_58 = (undefined8 *)0x0;
  local_50 = lVar3;
  lStack_48 = lVar3;
  if (lVar3 == 0) {
    if (pIVar1 != (Impl *)&local_58) {
      puVar14 = (undefined8 *)0x0;
LAB_0010bbd1:
      *(undefined8 **)(this + 0xa8) = puVar14;
      *(long *)(this + 0xb0) = lVar3;
      *(long *)(this + 0xb8) = lVar3;
    }
  }
  else {
    sVar16 = lVar3 * 0x20;
    puVar14 = (undefined8 *)malloc(sVar16);
    local_58 = puVar14;
    if ((long)sVar16 < 0x21) {
      if (sVar16 != 0x20) {
        if (pIVar1 != (Impl *)&local_58) goto LAB_0010bbd1;
        if (puVar14 != (undefined8 *)0x0) {
          free(puVar14);
        }
        goto LAB_0010bbdf;
      }
      uVar6 = puVar4[1];
      *puVar14 = *puVar4;
      puVar14[1] = uVar6;
      uVar6 = puVar4[3];
      puVar14[2] = puVar4[2];
      puVar14[3] = uVar6;
    }
    else {
      puVar14 = (undefined8 *)memmove(puVar14,puVar4,sVar16);
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_0010bbd1;
    free(puVar14);
  }
LAB_0010bbdf:
  MeshRelationD::MeshRelationD((MeshRelationD *)(this + 0xc0),(MeshRelationD *)(param_1 + 0xc0));
  pIVar1 = this + 0x140;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined1 (*) [16])(this + 0x148) = (undefined1  [16])0x0;
  lVar3 = *(long *)(param_1 + 0x148);
  puVar4 = *(undefined8 **)(param_1 + 0x140);
  local_58 = (undefined8 *)0x0;
  if (lVar3 == 0) {
    if (pIVar1 != (Impl *)&local_58) {
      puVar14 = (undefined8 *)0x0;
LAB_0010bc44:
      *(undefined8 **)(this + 0x140) = puVar14;
      *(long *)(this + 0x148) = lVar3;
      *(long *)(this + 0x150) = lVar3;
    }
  }
  else {
    sVar16 = lVar3 * 0x30;
    local_50 = lVar3;
    lStack_48 = lVar3;
    puVar14 = (undefined8 *)malloc(sVar16);
    local_58 = puVar14;
    if ((long)sVar16 < 0x31) {
      if (sVar16 != 0x30) {
        if (pIVar1 != (Impl *)&local_58) goto LAB_0010bc44;
        if (puVar14 != (undefined8 *)0x0) {
          free(puVar14);
        }
        goto LAB_0010bc52;
      }
      uVar6 = puVar4[1];
      *puVar14 = *puVar4;
      puVar14[1] = uVar6;
      uVar6 = puVar4[3];
      puVar14[2] = puVar4[2];
      puVar14[3] = uVar6;
      uVar6 = puVar4[5];
      puVar14[4] = puVar4[4];
      puVar14[5] = uVar6;
    }
    else {
      puVar14 = (undefined8 *)memmove(puVar14,puVar4,sVar16);
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_0010bc44;
    free(puVar14);
  }
LAB_0010bc52:
  pIVar1 = this + 0x158;
  *(undefined8 *)(this + 0x158) = 0;
  __src = *(undefined4 **)(param_1 + 0x158);
  *(undefined1 (*) [16])(this + 0x160) = (undefined1  [16])0x0;
  lVar3 = *(long *)(param_1 + 0x160);
  local_58 = (undefined8 *)0x0;
  if (lVar3 == 0) {
    if (pIVar1 != (Impl *)&local_58) {
      __ptr = (undefined4 *)0x0;
LAB_0010bca4:
      *(undefined4 **)(this + 0x158) = __ptr;
      *(long *)(this + 0x160) = lVar3;
      *(long *)(this + 0x168) = lVar3;
    }
  }
  else {
    sVar16 = lVar3 * 4;
    local_50 = lVar3;
    lStack_48 = lVar3;
    __ptr = (undefined4 *)malloc(sVar16);
    local_58 = (undefined8 *)__ptr;
    if ((long)sVar16 < 5) {
      if (sVar16 != 4) {
        if (pIVar1 != (Impl *)&local_58) goto LAB_0010bca4;
        if (__ptr != (undefined4 *)0x0) {
          free(__ptr);
        }
        goto LAB_0010bcb2;
      }
      *__ptr = *__src;
    }
    else {
      __ptr = (undefined4 *)memmove(__ptr,__src,sVar16);
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_0010bca4;
    free(__ptr);
  }
LAB_0010bcb2:
  pIVar1 = this + 0x170;
  *(undefined8 *)(this + 0x170) = 0;
  lVar3 = *(long *)(param_1 + 0x170);
  *(undefined1 (*) [16])(this + 0x178) = (undefined1  [16])0x0;
  lVar5 = *(long *)(param_1 + 0x178);
  local_58 = (undefined8 *)0x0;
  local_50 = lVar5;
  lStack_48 = lVar5;
  if (lVar5 == 0) {
    if (pIVar1 != (Impl *)&local_58) goto LAB_0010bd00;
  }
  else {
    sVar16 = lVar5 * 8;
    local_58 = (undefined8 *)malloc(sVar16);
    uVar15 = 0;
    if ((long)sVar16 < 1) {
      if (pIVar1 == (Impl *)&local_58) {
        if (local_58 == (undefined8 *)0x0) goto LAB_0010bd0e;
        goto LAB_0010bd8b;
      }
    }
    else {
      do {
        *(undefined8 *)((long)local_58 + uVar15 * 8) = *(undefined8 *)(lVar3 + uVar15 * 8);
        uVar15 = uVar15 + 1;
      } while (uVar15 < (ulong)((long)sVar16 >> 3));
      if (pIVar1 == (Impl *)&local_58) {
LAB_0010bd8b:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          free(local_58);
          return;
        }
        goto LAB_0010c037;
      }
    }
LAB_0010bd00:
    *(undefined8 **)(this + 0x170) = local_58;
    *(long *)(this + 0x178) = lVar5;
    *(long *)(this + 0x180) = lVar5;
  }
LAB_0010bd0e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010c037:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if (param_1 - 1 != 0) goto LAB_0010c684;
LAB_0010c698:
    if (sVar4 != 0) goto LAB_0010c768;
    if (pvVar3 == (void *)0x0) goto LAB_0010c6aa;
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
LAB_0010c684:
      memset(puVar6 + 1,0,(param_1 - 1) * 4);
      goto LAB_0010c698;
    }
LAB_0010c768:
    memmove(__dest,pvVar3,sVar4);
    uVar5 = *(long *)(this + 0x10) - (long)pvVar3;
  }
  operator_delete(pvVar3,uVar5);
LAB_0010c6aa:
  *(void **)this = __dest;
  *(void **)(this + 8) = (void *)((long)__dest + uVar1 * 4);
  *(ulong *)(this + 0x10) = (long)__dest + uVar2;
  return;
}



/* manifold::UnionFind<int, unsigned char>::connectedComponents(std::vector<int, std::allocator<int>
   >&) */

int __thiscall
manifold::UnionFind<int,unsigned_char>::connectedComponents
          (UnionFind<int,unsigned_char> *this,vector *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  char cVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  void *__s;
  undefined8 *puVar13;
  int iVar14;
  int *piVar15;
  ulong extraout_RDX;
  ulong uVar16;
  size_t __n;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  undefined8 *local_78;
  ulong local_70;
  long *local_68;
  ulong local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar16 = *(ulong *)(this + 8);
  uVar9 = *(long *)(param_1 + 8) - *(long *)param_1 >> 2;
  if (uVar9 < uVar16) {
    std::vector<int,std::allocator<int>>::_M_default_append
              ((vector<int,std::allocator<int>> *)param_1,uVar16 - uVar9);
    uVar16 = *(ulong *)(this + 8);
  }
  else if ((uVar16 < uVar9) &&
          (lVar1 = *(long *)param_1 + uVar16 * 4, *(long *)(param_1 + 8) != lVar1)) {
    *(long *)(param_1 + 8) = lVar1;
  }
  local_70 = 1;
  local_68 = (long *)0x0;
  local_60 = 0;
  local_58[0] = 0x3f800000;
  local_50 = 0;
  local_48 = 0;
  local_78 = &local_48;
  if (uVar16 != 0) {
    uVar16 = 0;
    uVar9 = 0;
    iVar17 = 0;
LAB_0010c87d:
    lVar1 = uVar9 * 4;
    if (*(char *)(*(long *)(this + 0x18) + uVar9) == '\0') {
      iVar14 = iVar17 + (int)uVar16;
      iVar17 = iVar17 + 1;
      *(int *)(*(long *)param_1 + uVar9 * 4) = iVar14;
      goto LAB_0010c86f;
    }
    lVar3 = *(long *)this;
    uVar18 = (ulong)(int)uVar9;
    piVar15 = (int *)(lVar3 + uVar18 * 4);
    iVar14 = *piVar15;
    iVar8 = iVar14;
    if (iVar14 != (int)uVar9) {
      do {
        iVar14 = *(int *)(lVar3 + (long)iVar8 * 4);
        uVar18 = (ulong)iVar14;
        *piVar15 = iVar14;
        piVar15 = (int *)(lVar3 + uVar18 * 4);
        iVar8 = *piVar15;
      } while (*piVar15 != iVar14);
    }
    *(int *)(lVar3 + lVar1) = iVar14;
    plVar10 = local_68;
    if (uVar16 == 0) {
      for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        if ((int)plVar10[1] == iVar14) goto LAB_0010c8f1;
      }
    }
    else {
      puVar13 = (undefined8 *)local_78[uVar18 % local_70];
      if (puVar13 != (undefined8 *)0x0) {
        iVar8 = *(int *)((undefined8 *)*puVar13 + 1);
        puVar6 = (undefined8 *)*puVar13;
        while (iVar14 != iVar8) {
          puVar4 = (undefined8 *)*puVar6;
          if ((puVar4 == (undefined8 *)0x0) ||
             (iVar8 = *(int *)(puVar4 + 1), puVar13 = puVar6, puVar6 = puVar4,
             uVar18 % local_70 != (ulong)(long)iVar8 % local_70)) goto LAB_0010ca00;
        }
        plVar10 = (long *)*puVar13;
        if (plVar10 != (long *)0x0) goto LAB_0010c8f1;
      }
    }
LAB_0010ca00:
    iVar8 = iVar17 + (int)uVar16;
    plVar11 = (long *)operator_new(0x10);
    *plVar11 = 0;
    *(int *)(plVar11 + 1) = iVar14;
    *(int *)((long)plVar11 + 0xc) = iVar8;
    plVar10 = local_68;
    if (local_60 == 0) {
      for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        if ((int)plVar10[1] == iVar14) goto LAB_0010cab3;
      }
    }
    else {
      plVar10 = (long *)local_78[uVar18 % local_70];
      if (plVar10 != (long *)0x0) {
        iVar2 = *(int *)((long *)*plVar10 + 1);
        plVar12 = (long *)*plVar10;
        while (iVar2 != iVar14) {
          plVar5 = (long *)*plVar12;
          if ((plVar5 == (long *)0x0) ||
             (iVar2 = (int)plVar5[1], plVar10 = plVar12, plVar12 = plVar5,
             uVar18 % local_70 != (ulong)(long)iVar2 % local_70)) goto LAB_0010cb26;
        }
        if (*plVar10 != 0) goto LAB_0010cab3;
      }
    }
LAB_0010cb26:
    cVar7 = std::__detail::_Prime_rehash_policy::_M_need_rehash((ulong)local_58,local_70,local_60);
    if (cVar7 == '\0') {
      plVar10 = local_78 + uVar18 % local_70;
      plVar12 = (long *)*plVar10;
      if (plVar12 != (long *)0x0) goto LAB_0010cb75;
LAB_0010ccc4:
      *plVar11 = (long)local_68;
      if (local_68 != (long *)0x0) {
        local_78[(ulong)(long)(int)local_68[1] % local_70] = plVar11;
      }
      *plVar10 = (long)&local_68;
      local_68 = plVar11;
    }
    else {
      if (extraout_RDX == 1) {
LAB_0010cd4d:
        local_48 = 0;
        puVar13 = &local_48;
      }
      else {
        if (extraout_RDX >> 0x3c != 0) {
          if (extraout_RDX >> 0x3d != 0) {
            std::__throw_bad_array_new_length();
            goto LAB_0010cd4d;
          }
          std::__throw_bad_alloc();
          goto LAB_0010cd65;
        }
        __s = operator_new(extraout_RDX * 8);
        puVar13 = (undefined8 *)memset(__s,0,extraout_RDX * 8);
      }
      plVar10 = local_68;
      local_68 = (long *)0x0;
      uVar16 = 0;
      while (uVar19 = uVar16, plVar12 = plVar10, plVar10 != (long *)0x0) {
        while( true ) {
          plVar10 = (long *)*plVar12;
          uVar16 = (ulong)(long)(int)plVar12[1] % extraout_RDX;
          plVar5 = puVar13 + uVar16;
          if ((long *)*plVar5 == (long *)0x0) break;
          *plVar12 = *(long *)*plVar5;
          *(long **)*plVar5 = plVar12;
          plVar12 = plVar10;
          if (plVar10 == (long *)0x0) goto LAB_0010cc60;
        }
        *plVar12 = (long)local_68;
        *plVar5 = (long)&local_68;
        local_68 = plVar12;
        if (*plVar12 != 0) {
          puVar13[uVar19] = plVar12;
        }
      }
LAB_0010cc60:
      if (local_78 != &local_48) {
        operator_delete(local_78,local_70 * 8);
      }
      plVar10 = puVar13 + uVar18 % extraout_RDX;
      plVar12 = (long *)*plVar10;
      local_78 = puVar13;
      local_70 = extraout_RDX;
      if (plVar12 == (long *)0x0) goto LAB_0010ccc4;
LAB_0010cb75:
      *plVar11 = *plVar12;
      *(long **)*plVar10 = plVar11;
    }
    local_60 = local_60 + 1;
    goto LAB_0010cacf;
  }
  __n = 8;
  iVar17 = 0;
LAB_0010c947:
  memset(local_78,0,__n);
  local_60 = 0;
  local_68 = (long *)0x0;
  if (local_78 != &local_48) {
    operator_delete(local_78,local_70 << 3);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar17;
  }
LAB_0010cd65:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010c8f1:
  uVar9 = uVar9 + 1;
  *(undefined4 *)(*(long *)param_1 + lVar1) = *(undefined4 *)((long)plVar10 + 0xc);
  if (*(ulong *)(this + 8) <= uVar9) goto LAB_0010c909;
  goto LAB_0010c87d;
LAB_0010cab3:
  operator_delete(plVar11,0x10);
LAB_0010cacf:
  *(int *)(*(long *)param_1 + lVar1) = iVar8;
  uVar16 = local_60;
LAB_0010c86f:
  uVar9 = uVar9 + 1;
  if (*(ulong *)(this + 8) <= uVar9) goto LAB_0010c909;
  goto LAB_0010c87d;
LAB_0010c909:
  iVar17 = iVar17 + (int)uVar16;
  plVar10 = local_68;
  while (plVar10 != (long *)0x0) {
    plVar11 = (long *)*plVar10;
    operator_delete(plVar10,0x10);
    plVar10 = plVar11;
  }
  __n = local_70 * 8;
  goto LAB_0010c947;
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



/* WARNING: Control flow encountered bad instruction data */
/* manifold::Manifold::Impl::MeshRelationD::MeshRelationD(manifold::Manifold::Impl::MeshRelationD
   const&) */

void __thiscall
manifold::Manifold::Impl::MeshRelationD::MeshRelationD(MeshRelationD *this,MeshRelationD *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}




/* std::_Function_handler<void (double*, linalg::vec<double, 3>, double const*),
   manifold::Manifold::SetProperties(int, std::function<void (double*, linalg::vec<double, 3>,
   double const*)>) const::{lambda(double*, linalg::vec<double, 3>, double
   const*)#1}>::_M_invoke(std::_Any_data const&, double*&&, linalg::vec<double, 3>&&, double
   const*&&) */

void std::
     _Function_handler<void(double*,linalg::vec<double,3>,double_const*),manifold::Manifold::SetProperties(int,std::function<void(double*,linalg::vec<double,3>,double_const*)>)const::{lambda(double*,linalg::vec<double,3>,double_const*)#1}>
     ::_M_invoke(_Any_data *param_1,double **param_2,vec *param_3,double **param_4)

{
  **param_2 = 0.0;
  return;
}



/* std::_Function_handler<int (linalg::vec<double, 3>, linalg::vec<double, 4>, linalg::vec<double,
   4>), manifold::Manifold::Refine(int) const::{lambda(linalg::vec<double, 3>, linalg::vec<double,
   4>, linalg::vec<double, 4>)#1}>::_M_invoke(std::_Any_data const&, linalg::vec<double, 3>&&,
   linalg::vec<double, 4>&&, linalg::vec<double, 4>&&) */

int std::
    _Function_handler<int(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>),manifold::Manifold::Refine(int)const::{lambda(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>)#1}>
    ::_M_invoke(_Any_data *param_1,vec *param_2,vec *param_3,vec *param_4)

{
  return *(int *)param_1 + -1;
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
    if (iVar5 <= iVar6) goto LAB_00100058;
  }
  if (*(_Rb_tree_node_base **)(this + 0x18) == p_Var2) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = p_Var2;
    return auVar1 << 0x40;
  }
  p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var2);
  iVar5 = *(int *)(p_Var4 + 0x20);
LAB_00100058:
  p_Var3 = (_Rb_tree_node_base *)0x0;
  if (iVar5 < iVar6) {
    p_Var4 = p_Var3;
    p_Var3 = p_Var2;
  }
  auVar7._8_8_ = p_Var3;
  auVar7._0_8_ = p_Var4;
  return auVar7;
}



/* std::_Function_handler<int (linalg::vec<double, 3>, linalg::vec<double, 4>, linalg::vec<double,
   4>), manifold::Manifold::RefineToTolerance(double) const::{lambda(linalg::vec<double, 3>,
   linalg::vec<double, 4>, linalg::vec<double, 4>)#1}>::_M_manager(std::_Any_data&, std::_Any_data
   const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<int(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>),manifold::Manifold::RefineToTolerance(double)const::{lambda(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>)#1}>
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
  *param_1 = &const::{lambda(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>)#1}::
              typeinfo;
  return 0;
}



/* std::_Function_handler<int (linalg::vec<double, 3>, linalg::vec<double, 4>, linalg::vec<double,
   4>), manifold::Manifold::RefineToLength(double) const::{lambda(linalg::vec<double, 3>,
   linalg::vec<double, 4>, linalg::vec<double, 4>)#1}>::_M_manager(std::_Any_data&, std::_Any_data
   const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<int(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>),manifold::Manifold::RefineToLength(double)const::{lambda(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>)#1}>
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
  *param_1 = &const::{lambda(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>)#1}::
              typeinfo;
  return 0;
}



/* std::_Function_handler<int (linalg::vec<double, 3>, linalg::vec<double, 4>, linalg::vec<double,
   4>), manifold::Manifold::Refine(int) const::{lambda(linalg::vec<double, 3>, linalg::vec<double,
   4>, linalg::vec<double, 4>)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8
std::
_Function_handler<int(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>),manifold::Manifold::Refine(int)const::{lambda(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>)#1}>
::_M_manager(undefined8 *param_1,undefined4 *param_2,int param_3)

{
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = param_2;
    }
    else if (param_3 == 2) {
      *(undefined4 *)param_1 = *param_2;
    }
    return 0;
  }
  *param_1 = &const::{lambda(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>)#1}::
              typeinfo;
  return 0;
}



/* std::_Function_handler<void (double*, linalg::vec<double, 3>, double const*),
   manifold::Manifold::SetProperties(int, std::function<void (double*, linalg::vec<double, 3>,
   double const*)>) const::{lambda(double*, linalg::vec<double, 3>, double
   const*)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(double*,linalg::vec<double,3>,double_const*),manifold::Manifold::SetProperties(int,std::function<void(double*,linalg::vec<double,3>,double_const*)>)const::{lambda(double*,linalg::vec<double,3>,double_const*)#1}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &const::{lambda(double*,linalg::vec<double,3>,double_const*)#1}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Rb_tree_iterator<std::pair<int const, manifold::Manifold::Impl::Relation> >
   std::_Rb_tree<int, std::pair<int const, manifold::Manifold::Impl::Relation>,
   std::_Select1st<std::pair<int const, manifold::Manifold::Impl::Relation> >, std::less<int>,
   std::allocator<std::pair<int const, manifold::Manifold::Impl::Relation> >
   >::_M_emplace_hint_unique<std::piecewise_construct_t const&, std::tuple<int const&>, std::tuple<>
   >(std::_Rb_tree_const_iterator<std::pair<int const, manifold::Manifold::Impl::Relation> >,
   std::piecewise_construct_t const&, std::tuple<int const&>&&, std::tuple<>&&) [clone .isra.0] */

_Rb_tree_node_base *
std::
_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
          (_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
           *param_1,_Rb_tree_node_base *param_2,undefined8 *param_3)

{
  _Rb_tree_node_base *p_Var1;
  uint uVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  long lVar5;
  bool bVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  
  bVar7 = 0;
  p_Var1 = (_Rb_tree_node_base *)(param_1 + 8);
  p_Var3 = (_Rb_tree_node_base *)operator_new(0x98);
  uVar2 = *(uint *)*param_3;
  *(uint *)(p_Var3 + 0x20) = uVar2;
  p_Var4 = p_Var3 + 0x28;
  for (lVar5 = 0xe; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)p_Var4 = 0;
    p_Var4 = p_Var4 + (ulong)bVar7 * -0x10 + 8;
  }
  *(undefined2 *)(p_Var3 + 0x56) = 0x3ff0;
  *(undefined4 *)(p_Var3 + 0x28) = 0xffffffff;
  *(undefined2 *)(p_Var3 + 0x36) = 0x3ff0;
  *(undefined2 *)(p_Var3 + 0x76) = 0x3ff0;
  if (p_Var1 == param_2) {
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (p_Var4 = *(_Rb_tree_node_base **)(param_1 + 0x20), (int)uVar2 <= *(int *)(p_Var4 + 0x20))) {
LAB_001002a8:
      auVar8 = _M_get_insert_unique_pos(param_1,(int *)(ulong)uVar2);
      param_2 = auVar8._0_8_;
      bVar6 = param_2 != (_Rb_tree_node_base *)0x0;
      p_Var4 = auVar8._8_8_;
      if (auVar8._8_8_ == (_Rb_tree_node_base *)0x0) {
LAB_001002c1:
        operator_delete(p_Var3,0x98);
        return param_2;
      }
    }
    else {
LAB_001002eb:
      bVar6 = false;
    }
joined_r0x0010027c:
    param_2 = p_Var4;
    p_Var4 = param_2;
    if ((p_Var1 == param_2) || (bVar6)) {
LAB_00100282:
      param_2 = p_Var4;
      bVar6 = true;
      goto LAB_00100287;
    }
  }
  else {
    if ((int)uVar2 < *(int *)(param_2 + 0x20)) {
      p_Var4 = *(_Rb_tree_node_base **)(param_1 + 0x18);
      if (*(_Rb_tree_node_base **)(param_1 + 0x18) != param_2) {
        p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
        if ((int)uVar2 <= *(int *)(p_Var4 + 0x20)) goto LAB_001002a8;
        if (*(long *)(p_Var4 + 0x18) != 0) {
          bVar6 = true;
          goto LAB_00100287;
        }
        goto LAB_001002eb;
      }
      goto LAB_00100282;
    }
    if ((int)uVar2 <= *(int *)(param_2 + 0x20)) goto LAB_001002c1;
    if (*(_Rb_tree_node_base **)(param_1 + 0x20) != param_2) {
      p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
      if (*(int *)(p_Var4 + 0x20) <= (int)uVar2) goto LAB_001002a8;
      bVar6 = true;
      if (*(long *)(param_2 + 0x18) != 0) goto joined_r0x0010027c;
    }
  }
  bVar6 = (int)uVar2 < *(int *)(param_2 + 0x20);
LAB_00100287:
  std::_Rb_tree_insert_and_rebalance(bVar6,p_Var3,param_2,p_Var1);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return p_Var3;
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



/* unsigned long& std::vector<unsigned long, std::allocator<unsigned long> >::emplace_back<unsigned
   long>(unsigned long&&) [clone .isra.0] */

ulong * __thiscall
std::vector<unsigned_long,std::allocator<unsigned_long>>::emplace_back<unsigned_long>
          (vector<unsigned_long,std::allocator<unsigned_long>> *this,ulong *param_1)

{
  ulong *__src;
  ulong *puVar1;
  ulong *extraout_RAX;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  size_t __n;
  
  puVar1 = *(ulong **)(this + 8);
  if (puVar1 != *(ulong **)(this + 0x10)) {
    *puVar1 = *param_1;
    *(ulong **)(this + 8) = puVar1 + 1;
    return puVar1 + 1;
  }
  __src = *(ulong **)this;
  __n = (long)puVar1 - (long)__src;
  uVar3 = (long)__n >> 3;
  if (uVar3 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar1 == __src) {
    if (0xfffffffffffffffe < uVar3) goto LAB_001005a0;
    uVar2 = 0xfffffffffffffff;
    if (uVar3 + 1 < 0x1000000000000000) {
      uVar2 = uVar3 + 1;
    }
    uVar2 = uVar2 << 3;
LAB_0010057e:
    __dest = operator_new(uVar2);
    lVar4 = uVar2 + (long)__dest;
  }
  else {
    uVar2 = uVar3 * 2;
    if (uVar2 < uVar3) {
LAB_001005a0:
      uVar2 = 0x7ffffffffffffff8;
      goto LAB_0010057e;
    }
    if (uVar2 != 0) {
      if (0xfffffffffffffff < uVar2) {
        uVar2 = 0xfffffffffffffff;
      }
      uVar2 = uVar2 * 8;
      goto LAB_0010057e;
    }
    lVar4 = 0;
    __dest = (void *)0x0;
  }
  puVar1 = (ulong *)*param_1;
  *(ulong **)((long)__dest + __n) = puVar1;
  if ((long)__n < 1) {
    if (__src == (ulong *)0x0) goto LAB_0010051d;
    uVar3 = *(long *)(this + 0x10) - (long)__src;
  }
  else {
    memmove(__dest,__src,__n);
    uVar3 = *(long *)(this + 0x10) - (long)__src;
  }
  operator_delete(__src,uVar3);
  puVar1 = extraout_RAX;
LAB_0010051d:
  *(void **)this = __dest;
  *(size_t *)(this + 8) = (long)__dest + __n + 8;
  *(long *)(this + 0x10) = lVar4;
  return puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__push_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >, long, int, __gnu_cxx::__ops::_Iter_comp_val<(anonymous namespace)::GetMeshGLImpl<double,
   unsigned long>(manifold::Manifold::Impl const&, int)::{lambda(int, int)#1}>
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, long, long, int,
   __gnu_cxx::__ops::_Iter_comp_val<(anonymous namespace)::GetMeshGLImpl<double, unsigned
   long>(manifold::Manifold::Impl const&, int)::{lambda(int, int)#1}>&) */

void std::
     __push_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,int,__gnu_cxx::__ops::_Iter_comp_val<(anonymous_namespace)::GetMeshGLImpl<double,unsigned_long>(manifold::Manifold::Impl_const&,int)::_lambda(int,int)_1_>>
               (long param_1,long param_2,long param_3,int param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  
  lVar5 = (param_2 + -1) - (param_2 + -1 >> 0x3f);
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = param_4;
    return;
  }
  lVar3 = *param_5;
  piVar8 = (int *)((long)param_4 * 0x10 + lVar3);
  do {
    lVar6 = lVar5 >> 1;
    piVar7 = (int *)(param_1 + lVar6 * 4);
    iVar1 = piVar8[1];
    piVar4 = (int *)((long)*piVar7 * 0x10 + lVar3);
    iVar2 = piVar4[1];
    if (iVar2 == iVar1) {
      if (*piVar8 <= *piVar4) {
LAB_00100654:
        piVar7 = (int *)(param_1 + param_2 * 4);
        break;
      }
    }
    else if (iVar1 <= iVar2) goto LAB_00100654;
    *(int *)(param_1 + param_2 * 4) = *piVar7;
    lVar5 = (lVar6 + -1) - (lVar6 + -1 >> 0x3f);
    param_2 = lVar6;
  } while (param_3 < lVar6);
  *piVar7 = param_4;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >, long, int, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::GetMeshGLImpl<double,
   unsigned long>(manifold::Manifold::Impl const&, int)::{lambda(int, int)#1}>
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, long, long, int,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::GetMeshGLImpl<double, unsigned
   long>(manifold::Manifold::Impl const&, int)::{lambda(int, int)#1}>) */

void std::
     __adjust_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,int,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::GetMeshGLImpl<double,unsigned_long>(manifold::Manifold::Impl_const&,int)::_lambda(int,int)_1_>>
               (long param_1,long param_2,ulong param_3,undefined4 param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  long local_48 [3];
  long local_30;
  
  local_48[0] = *param_5;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar10 = (long)(param_3 - 1) / 2;
  lVar9 = param_2;
  if (param_2 < lVar10) {
    do {
      lVar1 = lVar9 * 2 + 2;
      lVar8 = lVar9 * 2 + 1;
      iVar2 = *(int *)(param_1 + lVar1 * 4);
      iVar3 = *(int *)(param_1 + lVar8 * 4);
      piVar6 = (int *)((long)iVar2 * 0x10 + local_48[0]);
      piVar7 = (int *)((long)iVar3 * 0x10 + local_48[0]);
      iVar4 = piVar6[1];
      iVar5 = piVar7[1];
      if (iVar5 == iVar4) {
        if (*piVar7 <= *piVar6) {
          lVar8 = lVar1;
          iVar3 = iVar2;
        }
        *(int *)(param_1 + lVar9 * 4) = iVar3;
        lVar9 = lVar8;
      }
      else {
        if (iVar5 <= iVar4) {
          lVar8 = lVar1;
          iVar3 = iVar2;
        }
        *(int *)(param_1 + lVar9 * 4) = iVar3;
        lVar9 = lVar8;
      }
    } while (lVar9 < lVar10);
  }
  lVar10 = lVar9;
  if (((param_3 & 1) == 0) && ((long)(param_3 - 2) / 2 == lVar9)) {
    lVar10 = lVar9 * 2 + 1;
    *(undefined4 *)(param_1 + lVar9 * 4) = *(undefined4 *)(param_1 + lVar10 * 4);
  }
  __push_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,int,__gnu_cxx::__ops::_Iter_comp_val<(anonymous_namespace)::GetMeshGLImpl<double,unsigned_long>(manifold::Manifold::Impl_const&,int)::_lambda(int,int)_1_>>
            (param_1,lVar10,param_2,param_4,local_48);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >, long, int, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::GetMeshGLImpl<float,
   unsigned int>(manifold::Manifold::Impl const&, int)::{lambda(int, int)#1}>
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, long, long, int,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::GetMeshGLImpl<float, unsigned
   int>(manifold::Manifold::Impl const&, int)::{lambda(int, int)#1}>) */

void std::
     __adjust_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,int,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::GetMeshGLImpl<float,unsigned_int>(manifold::Manifold::Impl_const&,int)::_lambda(int,int)_1_>>
               (long param_1,long param_2,ulong param_3,undefined4 param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  long local_48 [3];
  long local_30;
  
  local_48[0] = *param_5;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar10 = (long)(param_3 - 1) / 2;
  lVar9 = param_2;
  if (param_2 < lVar10) {
    do {
      lVar1 = lVar9 * 2 + 2;
      lVar8 = lVar9 * 2 + 1;
      iVar2 = *(int *)(param_1 + lVar1 * 4);
      iVar3 = *(int *)(param_1 + lVar8 * 4);
      piVar6 = (int *)((long)iVar2 * 0x10 + local_48[0]);
      piVar7 = (int *)((long)iVar3 * 0x10 + local_48[0]);
      iVar4 = piVar6[1];
      iVar5 = piVar7[1];
      if (iVar5 == iVar4) {
        if (*piVar7 <= *piVar6) {
          lVar8 = lVar1;
          iVar3 = iVar2;
        }
        *(int *)(param_1 + lVar9 * 4) = iVar3;
        lVar9 = lVar8;
      }
      else {
        if (iVar5 <= iVar4) {
          lVar8 = lVar1;
          iVar3 = iVar2;
        }
        *(int *)(param_1 + lVar9 * 4) = iVar3;
        lVar9 = lVar8;
      }
    } while (lVar9 < lVar10);
  }
  lVar10 = lVar9;
  if (((param_3 & 1) == 0) && ((long)(param_3 - 2) / 2 == lVar9)) {
    lVar10 = lVar9 * 2 + 1;
    *(undefined4 *)(param_1 + lVar9 * 4) = *(undefined4 *)(param_1 + lVar10 * 4);
  }
  __push_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,int,__gnu_cxx::__ops::_Iter_comp_val<(anonymous_namespace)::GetMeshGLImpl<double,unsigned_long>(manifold::Manifold::Impl_const&,int)::_lambda(int,int)_1_>>
            (param_1,lVar10,param_2,param_4,local_48);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::GetMeshGLImpl<double, unsigned long>(manifold::Manifold::Impl const&,
   int)::{lambda(int, int)#1}> >(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::GetMeshGLImpl<double, unsigned
   long>(manifold::Manifold::Impl const&, int)::{lambda(int, int)#1}>) */

void std::
     __insertion_sort<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::GetMeshGLImpl<double,unsigned_long>(manifold::Manifold::Impl_const&,int)::_lambda(int,int)_1_>>
               (int *param_1,int *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  size_t __n;
  int *piVar8;
  int *piVar9;
  
  if (param_1 == param_2) {
    return;
  }
  piVar8 = param_1 + 1;
  do {
    if (param_2 == piVar8) {
      return;
    }
    while( true ) {
      iVar1 = *piVar8;
      lVar3 = *param_3;
      piVar5 = (int *)((long)*param_1 * 0x10 + lVar3);
      piVar9 = (int *)((long)iVar1 * 0x10 + lVar3);
      iVar2 = piVar5[1];
      iVar7 = piVar9[1];
      bVar4 = iVar7 < iVar2;
      if (iVar7 == iVar2) {
        bVar4 = *piVar9 < *piVar5;
      }
      piVar5 = piVar8;
      if (bVar4) break;
      while( true ) {
        piVar6 = (int *)((long)piVar5[-1] * 0x10 + lVar3);
        iVar2 = piVar6[1];
        bVar4 = iVar7 < iVar2;
        if (iVar2 == iVar7) {
          bVar4 = *piVar9 < *piVar6;
        }
        if (!bVar4) break;
        *piVar5 = piVar5[-1];
        iVar7 = piVar9[1];
        piVar5 = piVar5 + -1;
      }
      piVar8 = piVar8 + 1;
      *piVar5 = iVar1;
      if (param_2 == piVar8) {
        return;
      }
    }
    __n = (long)piVar8 - (long)param_1;
    if ((long)__n < 5) {
      if (__n == 4) {
        *piVar8 = *param_1;
      }
    }
    else {
      memmove((void *)((4 - __n) + (long)piVar8),param_1,__n);
    }
    piVar8 = piVar8 + 1;
    *param_1 = iVar1;
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::GetMeshGLImpl<float, unsigned int>(manifold::Manifold::Impl const&,
   int)::{lambda(int, int)#1}> >(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::GetMeshGLImpl<float, unsigned
   int>(manifold::Manifold::Impl const&, int)::{lambda(int, int)#1}>) */

void std::
     __insertion_sort<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::GetMeshGLImpl<float,unsigned_int>(manifold::Manifold::Impl_const&,int)::_lambda(int,int)_1_>>
               (int *param_1,int *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  size_t __n;
  int *piVar8;
  int *piVar9;
  
  if (param_1 == param_2) {
    return;
  }
  piVar8 = param_1 + 1;
  do {
    if (param_2 == piVar8) {
      return;
    }
    while( true ) {
      iVar1 = *piVar8;
      lVar3 = *param_3;
      piVar5 = (int *)((long)*param_1 * 0x10 + lVar3);
      piVar9 = (int *)((long)iVar1 * 0x10 + lVar3);
      iVar2 = piVar5[1];
      iVar7 = piVar9[1];
      bVar4 = iVar7 < iVar2;
      if (iVar7 == iVar2) {
        bVar4 = *piVar9 < *piVar5;
      }
      piVar5 = piVar8;
      if (bVar4) break;
      while( true ) {
        piVar6 = (int *)((long)piVar5[-1] * 0x10 + lVar3);
        iVar2 = piVar6[1];
        bVar4 = iVar7 < iVar2;
        if (iVar2 == iVar7) {
          bVar4 = *piVar9 < *piVar6;
        }
        if (!bVar4) break;
        *piVar5 = piVar5[-1];
        iVar7 = piVar9[1];
        piVar5 = piVar5 + -1;
      }
      piVar8 = piVar8 + 1;
      *piVar5 = iVar1;
      if (param_2 == piVar8) {
        return;
      }
    }
    __n = (long)piVar8 - (long)param_1;
    if ((long)__n < 5) {
      if (__n == 4) {
        *piVar8 = *param_1;
      }
    }
    else {
      memmove((void *)((4 - __n) + (long)piVar8),param_1,__n);
    }
    piVar8 = piVar8 + 1;
    *param_1 = iVar1;
  } while( true );
}



/* std::_Function_handler<int (linalg::vec<double, 3>, linalg::vec<double, 4>, linalg::vec<double,
   4>), manifold::Manifold::RefineToLength(double) const::{lambda(linalg::vec<double, 3>,
   linalg::vec<double, 4>, linalg::vec<double, 4>)#1}>::_M_invoke(std::_Any_data const&,
   linalg::vec<double, 3>&&, linalg::vec<double, 4>&&, linalg::vec<double, 4>&&) */

int std::
    _Function_handler<int(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>),manifold::Manifold::RefineToLength(double)const::{lambda(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>)#1}>
    ::_M_invoke(_Any_data *param_1,vec *param_2,vec *param_3,vec *param_4)

{
  return (int)(SQRT(*(double *)param_2 * *(double *)param_2 + 0.0 +
                    *(double *)(param_2 + 8) * *(double *)(param_2 + 8) +
                    *(double *)(param_2 + 0x10) * *(double *)(param_2 + 0x10)) / *(double *)param_1)
  ;
}



/* manifold::Vec<linalg::vec<int, 3> >::push_back(linalg::vec<int, 3> const&, bool) [clone .isra.0]
    */

void manifold::Vec<linalg::vec<int,3>>::push_back(vec *param_1,bool param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined7 in_register_00000031;
  size_t sVar7;
  ulong uVar8;
  
  puVar5 = (undefined8 *)CONCAT71(in_register_00000031,param_2);
  uVar6 = *(ulong *)(param_1 + 8);
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar6 < uVar3) {
    *(ulong *)(param_1 + 8) = uVar6 + 1;
    puVar1 = (undefined8 *)(*(long *)param_1 + uVar6 * 0xc);
    *puVar1 = *puVar5;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar5 + 1);
    return;
  }
  uVar4 = *puVar5;
  uVar2 = *(undefined4 *)(puVar5 + 1);
  if (uVar3 == 0) {
    sVar7 = 0x600;
    uVar8 = 0x80;
  }
  else {
    uVar8 = uVar3 * 2;
    if (uVar8 <= uVar3) {
      puVar5 = *(undefined8 **)param_1;
      goto LAB_00100b73;
    }
    sVar7 = uVar3 * 0x18;
  }
  puVar5 = (undefined8 *)malloc(sVar7);
  puVar1 = *(undefined8 **)param_1;
  if (uVar6 == 0) {
LAB_00100b67:
    if (puVar1 != (undefined8 *)0x0) goto LAB_00100bd4;
  }
  else {
    sVar7 = uVar6 * 0xc;
    if ((long)sVar7 < 0xd) {
      if (sVar7 != 0xc) goto LAB_00100b67;
      *puVar5 = *puVar1;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar1 + 1);
    }
    else {
      memmove(puVar5,puVar1,sVar7);
    }
LAB_00100bd4:
    free(puVar1);
    uVar6 = *(ulong *)(param_1 + 8);
  }
  *(undefined8 **)param_1 = puVar5;
  *(ulong *)(param_1 + 0x10) = uVar8;
LAB_00100b73:
  *(ulong *)(param_1 + 8) = uVar6 + 1;
  puVar5 = (undefined8 *)((long)puVar5 + uVar6 * 0xc);
  *puVar5 = uVar4;
  *(undefined4 *)(puVar5 + 1) = uVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<int (linalg::vec<double, 3>, linalg::vec<double, 4>, linalg::vec<double,
   4>), manifold::Manifold::RefineToTolerance(double) const::{lambda(linalg::vec<double, 3>,
   linalg::vec<double, 4>, linalg::vec<double, 4>)#1}>::_M_invoke(std::_Any_data const&,
   linalg::vec<double, 3>&&, linalg::vec<double, 4>&&, linalg::vec<double, 4>&&) */

int std::
    _Function_handler<int(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>),manifold::Manifold::RefineToTolerance(double)const::{lambda(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>)#1}>
    ::_M_invoke(_Any_data *param_1,vec *param_2,vec *param_3,vec *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar6 = *(double *)param_2;
  dVar3 = *(double *)(param_2 + 8);
  dVar8 = *(double *)(param_2 + 0x10);
  dVar1 = SQRT(dVar6 * dVar6 + 0.0 + dVar3 * dVar3 + dVar8 * dVar8);
  dVar6 = dVar6 / dVar1;
  dVar3 = dVar3 / dVar1;
  dVar8 = dVar8 / dVar1;
  dVar1 = *(double *)param_3 * dVar6 + 0.0 + *(double *)(param_3 + 8) * dVar3 +
          *(double *)(param_3 + 0x10) * dVar8;
  dVar2 = *(double *)param_3 - dVar1 * dVar6;
  dVar4 = *(double *)(param_3 + 0x10) - dVar1 * dVar8;
  dVar5 = *(double *)(param_3 + 8) - dVar1 * dVar3;
  dVar1 = *(double *)param_4 * dVar6 + 0.0 + *(double *)(param_4 + 8) * dVar3 +
          *(double *)(param_4 + 0x10) * dVar8;
  dVar7 = *(double *)param_4 - dVar6 * dVar1;
  dVar6 = *(double *)(param_4 + 8) - dVar3 * dVar1;
  dVar3 = *(double *)(param_4 + 0x10) - dVar1 * dVar8;
  dVar6 = (((SQRT(dVar3 * dVar3 + dVar7 * dVar7 + 0.0 + dVar6 * dVar6) +
            SQRT(dVar2 * dVar2 + 0.0 + dVar5 * dVar5 + dVar4 * dVar4)) * _LC2 +
           SQRT((dVar2 - dVar7) * (dVar2 - dVar7) + 0.0 + (dVar5 - dVar6) * (dVar5 - dVar6) +
                (dVar4 - dVar3) * (dVar4 - dVar3))) * __LC3) / (_LC4 * *(double *)param_1);
  if (0.0 <= dVar6) {
    return (int)SQRT(dVar6);
  }
  dVar6 = sqrt(dVar6);
  return (int)dVar6;
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



/* std::_Rb_tree<int, std::pair<int const, manifold::Manifold::Impl::Relation>,
   std::_Select1st<std::pair<int const, manifold::Manifold::Impl::Relation> >, std::less<int>,
   std::allocator<std::pair<int const, manifold::Manifold::Impl::Relation> > >::erase(int const&)
   [clone .isra.0] */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
::erase(_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
        *this,int *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node *p_Var2;
  _Rb_tree_node_base *p_Var3;
  void *pvVar4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  int iVar7;
  _Rb_tree_node_base *p_Var8;
  _Rb_tree_node_base *p_Var9;
  bool bVar10;
  
  p_Var1 = (_Rb_tree_node_base *)(this + 8);
  p_Var2 = *(_Rb_tree_node **)(this + 0x10);
  p_Var6 = (_Rb_tree_node_base *)p_Var2;
  p_Var8 = p_Var1;
  if (p_Var2 != (_Rb_tree_node *)0x0) {
LAB_00100fe1:
    do {
      p_Var3 = p_Var6;
      iVar7 = (int)param_1;
      if (*(int *)(p_Var3 + 0x20) < iVar7) goto LAB_00100fd8;
      p_Var6 = *(_Rb_tree_node_base **)(p_Var3 + 0x10);
      if (*(int *)(p_Var3 + 0x20) <= iVar7) {
        p_Var5 = *(_Rb_tree_node_base **)(p_Var3 + 0x18);
        while (p_Var9 = p_Var8, p_Var5 != (_Rb_tree_node_base *)0x0) {
          while( true ) {
            p_Var9 = p_Var5;
            p_Var5 = *(_Rb_tree_node_base **)(p_Var9 + 0x18);
            if (*(int *)(p_Var9 + 0x20) <= iVar7) break;
            p_Var5 = *(_Rb_tree_node_base **)(p_Var9 + 0x10);
            p_Var8 = p_Var9;
            if (*(_Rb_tree_node_base **)(p_Var9 + 0x10) == (_Rb_tree_node_base *)0x0)
            goto joined_r0x00101063;
          }
        }
joined_r0x00101063:
        while (p_Var8 = p_Var6, p_Var8 != (_Rb_tree_node_base *)0x0) {
          p_Var6 = *(_Rb_tree_node_base **)(p_Var8 + 0x18);
          if (iVar7 <= *(int *)(p_Var8 + 0x20)) {
            p_Var6 = *(_Rb_tree_node_base **)(p_Var8 + 0x10);
            p_Var3 = p_Var8;
          }
        }
        if (*(_Rb_tree_node_base **)(this + 0x18) != p_Var3) goto LAB_001010c3;
        if (p_Var9 != p_Var1) {
          p_Var6 = p_Var3;
          if (p_Var9 == p_Var3) {
            return;
          }
          do {
            p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var6);
            pvVar4 = (void *)std::_Rb_tree_rebalance_for_erase(p_Var6,p_Var1);
            operator_delete(pvVar4,0x98);
            *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
LAB_001010c3:
            p_Var6 = p_Var3;
          } while (p_Var9 != p_Var3);
          return;
        }
        goto LAB_00101007;
      }
      p_Var8 = p_Var3;
    } while (p_Var6 != (_Rb_tree_node_base *)0x0);
    goto LAB_00100ff7;
  }
  bVar10 = true;
LAB_00100ffd:
  if ((*(_Rb_tree_node_base **)(this + 0x18) == p_Var8) && (bVar10)) {
LAB_00101007:
    _M_erase(p_Var2);
    *(undefined8 *)(this + 0x10) = 0;
    *(_Rb_tree_node_base **)(this + 0x18) = p_Var1;
    *(_Rb_tree_node_base **)(this + 0x20) = p_Var1;
    *(undefined8 *)(this + 0x28) = 0;
  }
  return;
LAB_00100fd8:
  p_Var6 = *(_Rb_tree_node_base **)(p_Var3 + 0x18);
  if (*(_Rb_tree_node_base **)(p_Var3 + 0x18) == (_Rb_tree_node_base *)0x0) goto LAB_00100ff7;
  goto LAB_00100fe1;
LAB_00100ff7:
  bVar10 = p_Var1 == p_Var8;
  goto LAB_00100ffd;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, long, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::GetMeshGLImpl<float, unsigned int>(manifold::Manifold::Impl const&,
   int)::{lambda(int, int)#1}> >(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, long, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::GetMeshGLImpl<float, unsigned
   int>(manifold::Manifold::Impl const&, int)::{lambda(int, int)#1}>) */

void std::
     __introsort_loop<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::GetMeshGLImpl<float,unsigned_int>(manifold::Manifold::Impl_const&,int)::_lambda(int,int)_1_>>
               (int *param_1,int *param_2,long param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  long lVar18;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = (long)param_2 - (long)param_1;
  if (0x40 < lVar9) {
    lVar7 = *param_4;
    if (param_3 != 0) {
      lVar18 = param_4[1];
      piVar1 = param_1 + 1;
      piVar12 = param_2;
      do {
        lVar11 = (long)param_1[1];
        param_3 = param_3 + -1;
        piVar14 = param_1 + (lVar9 >> 3);
        iVar2 = *piVar14;
        piVar16 = (int *)(lVar11 * 0x10 + lVar7);
        piVar15 = (int *)((long)iVar2 * 0x10 + lVar7);
        iVar3 = piVar16[1];
        iVar4 = piVar15[1];
        bVar8 = iVar3 < iVar4;
        if (iVar3 == iVar4) {
          bVar8 = *piVar16 < *piVar15;
        }
        iVar5 = piVar12[-1];
        piVar10 = (int *)((long)iVar5 * 0x10 + lVar7);
        iVar6 = piVar10[1];
        piVar13 = piVar1;
        piVar17 = piVar12;
        if (bVar8) {
          if (iVar4 == iVar6) {
            if (*piVar10 <= *piVar15) goto LAB_001013b0;
          }
          else if (iVar6 <= iVar4) {
LAB_001013b0:
            bVar8 = iVar3 < iVar6;
            if (iVar3 == iVar6) {
              bVar8 = *piVar16 < *piVar10;
            }
            iVar3 = *param_1;
            if (!bVar8) goto LAB_001012db;
            *param_1 = iVar5;
            piVar12[-1] = iVar3;
            lVar11 = (long)*param_1;
            goto LAB_001011e8;
          }
          iVar3 = *param_1;
          *param_1 = iVar2;
          *piVar14 = iVar3;
          lVar11 = (long)*param_1;
        }
        else {
          bVar8 = iVar3 < iVar6;
          if (iVar3 == iVar6) {
            bVar8 = *piVar16 < *piVar10;
          }
          iVar3 = *param_1;
          if (bVar8) {
LAB_001012db:
            *(ulong *)param_1 = CONCAT44(iVar3,param_1[1]);
          }
          else {
            bVar8 = iVar4 < iVar6;
            if (iVar4 == iVar6) {
              bVar8 = *piVar15 < *piVar10;
            }
            if (bVar8) {
              *param_1 = iVar5;
              piVar12[-1] = iVar3;
              lVar11 = (long)*param_1;
            }
            else {
              *param_1 = iVar2;
              *piVar14 = iVar3;
              lVar11 = (long)*param_1;
            }
          }
        }
LAB_001011e8:
        while( true ) {
          piVar14 = (int *)(lVar11 * 0x10 + lVar7);
          iVar2 = piVar14[1];
          do {
            param_2 = piVar13;
            iVar3 = *param_2;
            piVar15 = (int *)((long)iVar3 * 0x10 + lVar7);
            iVar4 = piVar15[1];
            bVar8 = iVar4 < iVar2;
            if (iVar4 == iVar2) {
              bVar8 = *piVar15 < *piVar14;
            }
            piVar13 = param_2 + 1;
          } while (bVar8);
          do {
            piVar17 = piVar17 + -1;
            piVar15 = (int *)((long)*piVar17 * 0x10 + lVar7);
            iVar4 = piVar15[1];
            bVar8 = iVar2 < iVar4;
            if (iVar2 == iVar4) {
              bVar8 = *piVar14 < *piVar15;
            }
          } while (bVar8);
          if (piVar17 <= param_2) break;
          *param_2 = *piVar17;
          *piVar17 = iVar3;
          lVar11 = (long)*param_1;
          piVar13 = param_2 + 1;
        }
        local_58 = lVar7;
        local_50 = lVar18;
        __introsort_loop<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::GetMeshGLImpl<float,unsigned_int>(manifold::Manifold::Impl_const&,int)::_lambda(int,int)_1_>>
                  (param_2,piVar12,param_3,&local_58);
        lVar9 = (long)param_2 - (long)param_1;
        if (lVar9 < 0x41) goto LAB_0010135d;
        piVar12 = param_2;
      } while (param_3 != 0);
    }
    for (lVar18 = (lVar9 >> 2) + -2 >> 1; local_58 = lVar7,
        __adjust_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,int,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::GetMeshGLImpl<float,unsigned_int>(manifold::Manifold::Impl_const&,int)::_lambda(int,int)_1_>>
                  (param_1,lVar18,lVar9 >> 2,param_1[lVar18],&local_58), lVar18 != 0;
        lVar18 = lVar18 + -1) {
    }
    do {
      param_2 = param_2 + -1;
      iVar2 = *param_2;
      *param_2 = *param_1;
      local_58 = lVar7;
      __adjust_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,int,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::GetMeshGLImpl<float,unsigned_int>(manifold::Manifold::Impl_const&,int)::_lambda(int,int)_1_>>
                (param_1,0,(long)param_2 - (long)param_1 >> 2,iVar2,&local_58);
    } while (4 < (long)param_2 - (long)param_1);
  }
LAB_0010135d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, long, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::GetMeshGLImpl<double, unsigned long>(manifold::Manifold::Impl const&,
   int)::{lambda(int, int)#1}> >(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, long, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous namespace)::GetMeshGLImpl<double,
   unsigned long>(manifold::Manifold::Impl const&, int)::{lambda(int, int)#1}>) */

void std::
     __introsort_loop<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::GetMeshGLImpl<double,unsigned_long>(manifold::Manifold::Impl_const&,int)::_lambda(int,int)_1_>>
               (int *param_1,int *param_2,long param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  long lVar18;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = (long)param_2 - (long)param_1;
  if (0x40 < lVar9) {
    lVar7 = *param_4;
    if (param_3 != 0) {
      lVar18 = param_4[1];
      piVar1 = param_1 + 1;
      piVar12 = param_2;
      do {
        lVar11 = (long)param_1[1];
        param_3 = param_3 + -1;
        piVar14 = param_1 + (lVar9 >> 3);
        iVar2 = *piVar14;
        piVar16 = (int *)(lVar11 * 0x10 + lVar7);
        piVar15 = (int *)((long)iVar2 * 0x10 + lVar7);
        iVar3 = piVar16[1];
        iVar4 = piVar15[1];
        bVar8 = iVar3 < iVar4;
        if (iVar3 == iVar4) {
          bVar8 = *piVar16 < *piVar15;
        }
        iVar5 = piVar12[-1];
        piVar10 = (int *)((long)iVar5 * 0x10 + lVar7);
        iVar6 = piVar10[1];
        piVar13 = piVar1;
        piVar17 = piVar12;
        if (bVar8) {
          if (iVar4 == iVar6) {
            if (*piVar10 <= *piVar15) goto LAB_001016c0;
          }
          else if (iVar6 <= iVar4) {
LAB_001016c0:
            bVar8 = iVar3 < iVar6;
            if (iVar3 == iVar6) {
              bVar8 = *piVar16 < *piVar10;
            }
            iVar3 = *param_1;
            if (!bVar8) goto LAB_001015eb;
            *param_1 = iVar5;
            piVar12[-1] = iVar3;
            lVar11 = (long)*param_1;
            goto LAB_001014f8;
          }
          iVar3 = *param_1;
          *param_1 = iVar2;
          *piVar14 = iVar3;
          lVar11 = (long)*param_1;
        }
        else {
          bVar8 = iVar3 < iVar6;
          if (iVar3 == iVar6) {
            bVar8 = *piVar16 < *piVar10;
          }
          iVar3 = *param_1;
          if (bVar8) {
LAB_001015eb:
            *(ulong *)param_1 = CONCAT44(iVar3,param_1[1]);
          }
          else {
            bVar8 = iVar4 < iVar6;
            if (iVar4 == iVar6) {
              bVar8 = *piVar15 < *piVar10;
            }
            if (bVar8) {
              *param_1 = iVar5;
              piVar12[-1] = iVar3;
              lVar11 = (long)*param_1;
            }
            else {
              *param_1 = iVar2;
              *piVar14 = iVar3;
              lVar11 = (long)*param_1;
            }
          }
        }
LAB_001014f8:
        while( true ) {
          piVar14 = (int *)(lVar11 * 0x10 + lVar7);
          iVar2 = piVar14[1];
          do {
            param_2 = piVar13;
            iVar3 = *param_2;
            piVar15 = (int *)((long)iVar3 * 0x10 + lVar7);
            iVar4 = piVar15[1];
            bVar8 = iVar4 < iVar2;
            if (iVar4 == iVar2) {
              bVar8 = *piVar15 < *piVar14;
            }
            piVar13 = param_2 + 1;
          } while (bVar8);
          do {
            piVar17 = piVar17 + -1;
            piVar15 = (int *)((long)*piVar17 * 0x10 + lVar7);
            iVar4 = piVar15[1];
            bVar8 = iVar2 < iVar4;
            if (iVar2 == iVar4) {
              bVar8 = *piVar14 < *piVar15;
            }
          } while (bVar8);
          if (piVar17 <= param_2) break;
          *param_2 = *piVar17;
          *piVar17 = iVar3;
          lVar11 = (long)*param_1;
          piVar13 = param_2 + 1;
        }
        local_58 = lVar7;
        local_50 = lVar18;
        __introsort_loop<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::GetMeshGLImpl<double,unsigned_long>(manifold::Manifold::Impl_const&,int)::_lambda(int,int)_1_>>
                  (param_2,piVar12,param_3,&local_58);
        lVar9 = (long)param_2 - (long)param_1;
        if (lVar9 < 0x41) goto LAB_0010166d;
        piVar12 = param_2;
      } while (param_3 != 0);
    }
    for (lVar18 = (lVar9 >> 2) + -2 >> 1; local_58 = lVar7,
        __adjust_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,int,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::GetMeshGLImpl<double,unsigned_long>(manifold::Manifold::Impl_const&,int)::_lambda(int,int)_1_>>
                  (param_1,lVar18,lVar9 >> 2,param_1[lVar18],&local_58), lVar18 != 0;
        lVar18 = lVar18 + -1) {
    }
    do {
      param_2 = param_2 + -1;
      iVar2 = *param_2;
      *param_2 = *param_1;
      local_58 = lVar7;
      __adjust_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,int,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::GetMeshGLImpl<double,unsigned_long>(manifold::Manifold::Impl_const&,int)::_lambda(int,int)_1_>>
                (param_1,0,(long)param_2 - (long)param_1 >> 2,iVar2,&local_58);
    } while (4 < (long)param_2 - (long)param_1);
  }
LAB_0010166d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* manifold::Manifold::Manifold() */

void __thiscall manifold::Manifold::Manifold(Manifold *this)

{
  CsgLeafNode *this_00;
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  bool bVar5;
  
  puVar3 = (undefined8 *)operator_new(0x98);
  this_00 = (CsgLeafNode *)(puVar3 + 2);
  puVar3[1] = _LC5;
  *puVar3 = &PTR___Sp_counted_ptr_inplace_00111378;
  manifold::CsgLeafNode::CsgLeafNode(this_00);
  if ((puVar3[4] != 0) && (*(int *)(puVar3[4] + 8) != 0)) {
    *(CsgLeafNode **)this = this_00;
    *(undefined8 **)(this + 8) = puVar3;
    return;
  }
  bVar5 = __libc_single_threaded == '\0';
  puVar3[3] = this_00;
  if (bVar5) {
    LOCK();
    *(int *)((long)puVar3 + 0xc) = *(int *)((long)puVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = (long *)puVar3[4];
    if (plVar4 == (long *)0x0) goto LAB_001017ae;
    if (__libc_single_threaded != '\0') goto LAB_0010179a;
    LOCK();
    piVar1 = (int *)((long)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  else {
    plVar4 = (long *)puVar3[4];
    *(int *)((long)puVar3 + 0xc) = *(int *)((long)puVar3 + 0xc) + 1;
    if (plVar4 == (long *)0x0) goto LAB_001017ae;
LAB_0010179a:
    iVar2 = *(int *)((long)plVar4 + 0xc);
    *(int *)((long)plVar4 + 0xc) = iVar2 + -1;
  }
  if (iVar2 == 1) {
    (**(code **)(*plVar4 + 0x18))();
  }
LAB_001017ae:
  puVar3[4] = puVar3;
  *(CsgLeafNode **)this = this_00;
  *(undefined8 **)(this + 8) = puVar3;
  return;
}



/* manifold::Manifold::Manifold(manifold::Manifold&&) */

void __thiscall manifold::Manifold::Manifold(Manifold *this,Manifold *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = uVar1;
  *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  return;
}



/* manifold::Manifold::Manifold(manifold::Manifold const&) */

void __thiscall manifold::Manifold::Manifold(Manifold *this,Manifold *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar2;
  lVar1 = *(long *)(this + 8);
  if (lVar1 != 0) {
    if (__libc_single_threaded != '\0') {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      return;
    }
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



/* manifold::Manifold::Manifold(std::shared_ptr<manifold::CsgNode>) */

void __thiscall manifold::Manifold::Manifold(Manifold *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  *(undefined8 *)this = *param_2;
  *(undefined8 *)(this + 8) = uVar2;
  lVar1 = *(long *)(this + 8);
  if (lVar1 != 0) {
    if (__libc_single_threaded != '\0') {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      return;
    }
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



/* manifold::Manifold::ReserveIDs(unsigned int) */

void manifold::Manifold::ReserveIDs(uint param_1)

{
  manifold::Manifold::Impl::ReserveIDs(param_1);
  return;
}



/* manifold::ManifoldParams() */

undefined5 * manifold::ManifoldParams(void)

{
  return &(anonymous_namespace)::manifoldParams;
}



/* manifold::Manifold::Mirror(linalg::vec<double, 3>) const */

Manifold * __thiscall manifold::Manifold::Mirror(Manifold *this,undefined8 *param_2)

{
  long in_FS_OFFSET;
  double dVar1;
  double in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  undefined8 local_88;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  undefined1 local_30 [16];
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  dVar1 = SQRT(in_stack_00000008 * in_stack_00000008 + 0.0 + in_stack_00000010 * in_stack_00000010 +
               in_stack_00000018 * in_stack_00000018);
  if (dVar1 == 0.0) {
    Manifold(this);
  }
  else {
    in_stack_00000008 = in_stack_00000008 / dVar1;
    local_20 = 0;
    in_stack_00000010 = in_stack_00000010 / dVar1;
    in_stack_00000018 = in_stack_00000018 / dVar1;
    local_70 = 0.0 - (in_stack_00000008 * in_stack_00000010 + in_stack_00000008 * in_stack_00000010)
    ;
    local_68 = 0.0 - (in_stack_00000008 * in_stack_00000018 + in_stack_00000008 * in_stack_00000018)
    ;
    local_50 = 0.0 - (in_stack_00000010 * in_stack_00000018 + in_stack_00000010 * in_stack_00000018)
    ;
    local_78 = _LC6 - (in_stack_00000008 * in_stack_00000008 + in_stack_00000008 * in_stack_00000008
                      );
    local_58 = _LC6 - (in_stack_00000010 * in_stack_00000010 + in_stack_00000010 * in_stack_00000010
                      );
    local_38 = _LC6 - (in_stack_00000018 * in_stack_00000018 + in_stack_00000018 * in_stack_00000018
                      );
    local_30 = (undefined1  [16])0x0;
    local_60 = local_70;
    local_48 = local_68;
    local_40 = local_50;
    (**(code **)(*(long *)*param_2 + 8))(&local_88,(long *)*param_2,&local_78);
    *(undefined8 *)this = local_88;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8) = p_Stack_80;
    if (p_Stack_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(p_Stack_80 + 8) = *(int *)(p_Stack_80 + 8) + 1;
        UNLOCK();
        if (p_Stack_80 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00101910;
      }
      else {
        *(int *)(p_Stack_80 + 8) = *(int *)(p_Stack_80 + 8) + 1;
      }
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Stack_80);
    }
  }
LAB_00101910:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::TEMPNAMEPLACEHOLDERVALUE(manifold::Manifold const&) */

void __thiscall manifold::Manifold::operator=(Manifold *this,Manifold *param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  
  if (this != param_1) {
    p_Var1 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 8);
    *(undefined8 *)this = *(undefined8 *)param_1;
    this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
    if (p_Var1 != this_00) {
      if (p_Var1 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(p_Var1 + 8) = *(int *)(p_Var1 + 8) + 1;
          UNLOCK();
          this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
        }
        else {
          *(int *)(p_Var1 + 8) = *(int *)(p_Var1 + 8) + 1;
        }
      }
      if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(this_00);
      }
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8) = p_Var1;
    }
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (anonymous namespace)::Halfspace(manifold::Box, linalg::vec<double, 3>, double) */

double * (anonymous_namespace)::Halfspace(double param_1,double *param_2)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  long in_FS_OFFSET;
  double dVar1;
  double dVar2;
  double dVar3;
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
  undefined1 local_98 [8];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_90;
  vec local_88 [8];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_80;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_78;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_70;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_68;
  double local_58;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_50;
  double local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = _LC9;
  dVar1 = SQRT(in_stack_00000038 * in_stack_00000038 + 0.0 + in_stack_00000040 * in_stack_00000040 +
               in_stack_00000048 * in_stack_00000048);
  local_78 = _LC9;
  p_Stack_70 = _LC9;
  manifold::Manifold::Cube(local_98,1);
  local_48 = 0.0;
  local_58 = (double)_LC6;
  p_Stack_50 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
  manifold::CsgNode::Translate(local_88);
  if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
      if (local_80 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00101c19;
    }
    else {
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
    }
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_80);
  }
LAB_00101c19:
  if (local_90 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_90);
  }
  dVar2 = (in_stack_00000008 + in_stack_00000020) * _LC2 - (in_stack_00000038 / dVar1) * param_1;
  dVar4 = (in_stack_00000010 + in_stack_00000028) * _LC2 - (in_stack_00000040 / dVar1) * param_1;
  dVar3 = (in_stack_00000018 + in_stack_00000030) * _LC2 - param_1 * (in_stack_00000048 / dVar1);
  local_58 = SQRT((in_stack_00000020 - in_stack_00000008) * (in_stack_00000020 - in_stack_00000008)
                  + 0.0 + (in_stack_00000028 - in_stack_00000010) *
                          (in_stack_00000028 - in_stack_00000010) +
                  (in_stack_00000030 - in_stack_00000018) * (in_stack_00000030 - in_stack_00000018))
             * _LC2 + SQRT(dVar2 * dVar2 + 0.0 + dVar4 * dVar4 + dVar3 * dVar3);
  p_Stack_50 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_58;
  local_48 = local_58;
  manifold::CsgNode::Scale((vec *)&local_78);
  this = p_Stack_70;
  if (p_Stack_70 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(p_Stack_70 + 8) = *(int *)(p_Stack_70 + 8) + 1;
      UNLOCK();
      if (p_Stack_70 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00101d5f;
    }
    else {
      *(int *)(p_Stack_70 + 8) = *(int *)(p_Stack_70 + 8) + 1;
    }
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Stack_70);
  }
LAB_00101d5f:
  p_Stack_50 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
  local_48 = 0.0;
  local_58 = param_1;
  manifold::CsgNode::Translate((vec *)&local_78);
  this_00 = p_Stack_70;
  if (p_Stack_70 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(p_Stack_70 + 8) = *(int *)(p_Stack_70 + 8) + 1;
      UNLOCK();
      if (p_Stack_70 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00101db4;
    }
    else {
      *(int *)(p_Stack_70 + 8) = *(int *)(p_Stack_70 + 8) + 1;
    }
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Stack_70);
  }
LAB_00101db4:
  if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_80);
  }
  if (this != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(this);
  }
  dVar2 = asin(in_stack_00000048 / dVar1);
  dVar1 = atan2(in_stack_00000040 / dVar1,in_stack_00000038 / dVar1);
  manifold::CsgNode::Rotate
            (0.0,((double)((ulong)dVar2 ^ __LC13) * _LC11) / _LC12,(dVar1 * _LC11) / _LC12);
  *param_2 = local_58;
  param_2[1] = (double)p_Stack_50;
  if (p_Stack_50 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(p_Stack_50 + 8) = *(int *)(p_Stack_50 + 8) + 1;
      UNLOCK();
      if (p_Stack_50 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00101e54;
    }
    else {
      *(int *)(p_Stack_50 + 8) = *(int *)(p_Stack_50 + 8) + 1;
    }
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Stack_50);
  }
LAB_00101e54:
  if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(this_00);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}



/* manifold::Manifold::~Manifold() */

void __thiscall manifold::Manifold::~Manifold(Manifold *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  int iVar2;
  
  this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
  if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = this_00 + 8;
    if (*(long *)(this_00 + 8) == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
                    /* WARNING: Could not recover jumptable at 0x00101f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
      return;
    }
    if (__libc_single_threaded == '\0') {
      LOCK();
      iVar2 = *(int *)p_Var1;
      *(int *)p_Var1 = *(int *)p_Var1 + -1;
      UNLOCK();
    }
    else {
      iVar2 = *(int *)(this_00 + 8);
      *(int *)(this_00 + 8) = iVar2 + -1;
    }
    if (iVar2 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      return;
    }
  }
  return;
}



/* manifold::Manifold::TEMPNAMEPLACEHOLDERVALUE(manifold::Manifold&&) */

Manifold * __thiscall manifold::Manifold::operator=(Manifold *this,Manifold *param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar2 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
  this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
  *(undefined8 *)this = uVar2;
  *(undefined8 *)(this + 8) = uVar3;
  if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = this_00 + 8;
    if (*(long *)(this_00 + 8) == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
      return this;
    }
    if (__libc_single_threaded == '\0') {
      LOCK();
      iVar4 = *(int *)p_Var1;
      *(int *)p_Var1 = *(int *)p_Var1 + -1;
      UNLOCK();
    }
    else {
      iVar4 = *(int *)(this_00 + 8);
      *(int *)(this_00 + 8) = iVar4 + -1;
    }
    if (iVar4 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
    }
  }
  return this;
}



/* manifold::Manifold::Translate(linalg::vec<double, 3>) const */

undefined8 * manifold::Manifold::Translate(undefined8 *param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  manifold::CsgNode::Translate((vec *)&local_38);
  *param_1 = local_38;
  param_1[1] = p_Stack_30;
  if (p_Stack_30 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(p_Stack_30 + 8) = *(int *)(p_Stack_30 + 8) + 1;
      UNLOCK();
      if (p_Stack_30 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001020cb;
    }
    else {
      *(int *)(p_Stack_30 + 8) = *(int *)(p_Stack_30 + 8) + 1;
    }
    p_Var1 = p_Stack_30 + 8;
    if (*(long *)(p_Stack_30 + 8) == 0x100000001) {
      *(undefined8 *)(p_Stack_30 + 8) = 0;
      (**(code **)(*(long *)p_Stack_30 + 0x10))(p_Stack_30);
      (**(code **)(*(long *)p_Stack_30 + 0x18))(p_Stack_30);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar2 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar2 = *(int *)(p_Stack_30 + 8);
        *(int *)(p_Stack_30 + 8) = iVar2 + -1;
      }
      if (iVar2 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_30);
      }
    }
  }
LAB_001020cb:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* manifold::Manifold::Scale(linalg::vec<double, 3>) const */

undefined8 * manifold::Manifold::Scale(undefined8 *param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  manifold::CsgNode::Scale((vec *)&local_38);
  *param_1 = local_38;
  param_1[1] = p_Stack_30;
  if (p_Stack_30 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(p_Stack_30 + 8) = *(int *)(p_Stack_30 + 8) + 1;
      UNLOCK();
      if (p_Stack_30 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001021bb;
    }
    else {
      *(int *)(p_Stack_30 + 8) = *(int *)(p_Stack_30 + 8) + 1;
    }
    p_Var1 = p_Stack_30 + 8;
    if (*(long *)(p_Stack_30 + 8) == 0x100000001) {
      *(undefined8 *)(p_Stack_30 + 8) = 0;
      (**(code **)(*(long *)p_Stack_30 + 0x10))(p_Stack_30);
      (**(code **)(*(long *)p_Stack_30 + 0x18))(p_Stack_30);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar2 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar2 = *(int *)(p_Stack_30 + 8);
        *(int *)(p_Stack_30 + 8) = iVar2 + -1;
      }
      if (iVar2 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_30);
      }
    }
  }
LAB_001021bb:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* manifold::Manifold::Rotate(double, double, double) const */

Manifold * __thiscall
manifold::Manifold::Rotate(Manifold *this,double param_1,double param_2,double param_3)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined8 local_38;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_30;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  manifold::CsgNode::Rotate(param_1,param_2,param_3);
  *(undefined8 *)this = local_38;
  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8) = p_Stack_30;
  if (p_Stack_30 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(p_Stack_30 + 8) = *(int *)(p_Stack_30 + 8) + 1;
      UNLOCK();
      if (p_Stack_30 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001022a6;
    }
    else {
      *(int *)(p_Stack_30 + 8) = *(int *)(p_Stack_30 + 8) + 1;
    }
    p_Var1 = p_Stack_30 + 8;
    if (*(long *)(p_Stack_30 + 8) == 0x100000001) {
      *(undefined8 *)(p_Stack_30 + 8) = 0;
      (**(code **)(*(long *)p_Stack_30 + 0x10))(p_Stack_30);
      (**(code **)(*(long *)p_Stack_30 + 0x18))(p_Stack_30);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar3 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar3 = *(int *)(p_Stack_30 + 8);
        *(int *)(p_Stack_30 + 8) = iVar3 + -1;
      }
      if (iVar3 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_30);
      }
    }
  }
LAB_001022a6:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* manifold::Manifold::Transform(linalg::mat<double, 3, 4> const&) const */

Manifold * __thiscall manifold::Manifold::Transform(Manifold *this,mat *param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(**(long **)param_1 + 8))(&local_38);
  *(undefined8 *)this = local_38;
  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8) = p_Stack_30;
  if (p_Stack_30 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(p_Stack_30 + 8) = *(int *)(p_Stack_30 + 8) + 1;
      UNLOCK();
      if (p_Stack_30 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00102397;
    }
    else {
      *(int *)(p_Stack_30 + 8) = *(int *)(p_Stack_30 + 8) + 1;
    }
    p_Var1 = p_Stack_30 + 8;
    if (*(long *)(p_Stack_30 + 8) == 0x100000001) {
      *(undefined8 *)(p_Stack_30 + 8) = 0;
      (**(code **)(*(long *)p_Stack_30 + 0x10))(p_Stack_30);
      (**(code **)(*(long *)p_Stack_30 + 0x18))(p_Stack_30);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar2 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar2 = *(int *)(p_Stack_30 + 8);
        *(int *)(p_Stack_30 + 8) = iVar2 + -1;
      }
      if (iVar2 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_30);
      }
    }
  }
LAB_00102397:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* manifold::Manifold::Boolean(manifold::Manifold const&, manifold::OpType) const */

undefined8 * manifold::Manifold::Boolean(undefined8 *param_1,undefined8 *param_2)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)*param_2 + 0x18))(&local_38);
  *param_1 = local_38;
  param_1[1] = p_Stack_30;
  if (p_Stack_30 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(p_Stack_30 + 8) = *(int *)(p_Stack_30 + 8) + 1;
      UNLOCK();
      if (p_Stack_30 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00102487;
    }
    else {
      *(int *)(p_Stack_30 + 8) = *(int *)(p_Stack_30 + 8) + 1;
    }
    p_Var1 = p_Stack_30 + 8;
    if (*(long *)(p_Stack_30 + 8) == 0x100000001) {
      *(undefined8 *)(p_Stack_30 + 8) = 0;
      (**(code **)(*(long *)p_Stack_30 + 0x10))(p_Stack_30);
      (**(code **)(*(long *)p_Stack_30 + 0x18))(p_Stack_30);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar2 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar2 = *(int *)(p_Stack_30 + 8);
        *(int *)(p_Stack_30 + 8) = iVar2 + -1;
      }
      if (iVar2 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_30);
      }
    }
  }
LAB_00102487:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* manifold::Manifold::TEMPNAMEPLACEHOLDERVALUE(manifold::Manifold const&) const */

Manifold * __thiscall manifold::Manifold::operator+(Manifold *this,Manifold *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Boolean();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::TEMPNAMEPLACEHOLDERVALUE(manifold::Manifold const&) const */

Manifold * __thiscall manifold::Manifold::operator-(Manifold *this,Manifold *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Boolean();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::TEMPNAMEPLACEHOLDERVALUE(manifold::Manifold const&) const */

Manifold * __thiscall manifold::Manifold::operator^(Manifold *this,Manifold *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Boolean();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::GetCsgLeafNode() const */

undefined8 __thiscall manifold::Manifold::GetCsgLeafNode(Manifold *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  undefined8 uVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  long in_FS_OFFSET;
  undefined1 local_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = (**(code **)(**(long **)this + 0x10))();
  if (iVar2 != 3) {
    (**(code **)**(undefined8 **)this)(local_28);
    uVar3 = local_28._0_8_;
    this_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_28._8_8_;
    p_Var1 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
    local_28._0_16_ = (undefined1  [16])0x0;
    *(undefined8 *)this = uVar3;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8) = this_00;
    if (p_Var1 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010265d;
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var1);
    if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_28._8_8_ !=
        (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release
                ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_28._8_8_);
    }
  }
  uVar3 = *(undefined8 *)this;
  this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
LAB_0010265d:
  if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = this_00 + 8;
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    }
    if (*(long *)p_Var1 == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar2 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar2 = *(int *)(this_00 + 8);
        *(int *)(this_00 + 8) = iVar2 + -1;
      }
      if (iVar2 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      }
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* manifold::Manifold::IsEmpty() const */

bool __thiscall manifold::Manifold::IsEmpty(Manifold *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_28;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_20;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(this);
  manifold::CsgLeafNode::GetImpl();
  uVar3 = *(ulong *)(local_28 + 0x68);
  if (local_20 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_20 + 8;
    if (*(long *)(local_20 + 8) == 0x100000001) {
      *(undefined8 *)(local_20 + 8) = 0;
      (**(code **)(*(long *)local_20 + 0x10))(local_20);
      (**(code **)(*(long *)local_20 + 0x18))(local_20);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar4 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar4 = *(int *)(local_20 + 8);
        *(int *)(local_20 + 8) = iVar4 + -1;
      }
      if (iVar4 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_20);
      }
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3 < 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Status() const */

undefined4 __thiscall manifold::Manifold::Status(Manifold *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_28;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_20;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(this);
  manifold::CsgLeafNode::GetImpl();
  uVar2 = *(undefined4 *)(local_28 + 0x40);
  if (local_20 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_20 + 8;
    if (*(long *)(local_20 + 8) == 0x100000001) {
      *(undefined8 *)(local_20 + 8) = 0;
      (**(code **)(*(long *)local_20 + 0x10))(local_20);
      (**(code **)(*(long *)local_20 + 0x18))(local_20);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar4 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar4 = *(int *)(local_20 + 8);
        *(int *)(local_20 + 8) = iVar4 + -1;
      }
      if (iVar4 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_20);
      }
    }
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::NumVert() const */

undefined8 __thiscall manifold::Manifold::NumVert(Manifold *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_28;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_20;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(this);
  manifold::CsgLeafNode::GetImpl();
  uVar3 = *(undefined8 *)(local_28 + 0x50);
  if (local_20 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_20 + 8;
    if (*(long *)(local_20 + 8) == 0x100000001) {
      *(undefined8 *)(local_20 + 8) = 0;
      (**(code **)(*(long *)local_20 + 0x10))(local_20);
      (**(code **)(*(long *)local_20 + 0x18))(local_20);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar4 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar4 = *(int *)(local_20 + 8);
        *(int *)(local_20 + 8) = iVar4 + -1;
      }
      if (iVar4 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_20);
      }
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::NumEdge() const */

ulong __thiscall manifold::Manifold::NumEdge(Manifold *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_28;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_20;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(this);
  manifold::CsgLeafNode::GetImpl();
  uVar3 = *(ulong *)(local_28 + 0x68);
  if (local_20 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_20 + 8;
    if (*(long *)(local_20 + 8) == 0x100000001) {
      *(undefined8 *)(local_20 + 8) = 0;
      (**(code **)(*(long *)local_20 + 0x10))(local_20);
      (**(code **)(*(long *)local_20 + 0x18))(local_20);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar4 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar4 = *(int *)(local_20 + 8);
        *(int *)(local_20 + 8) = iVar4 + -1;
      }
      if (iVar4 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_20);
      }
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3 >> 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::NumTri() const */

ulong __thiscall manifold::Manifold::NumTri(Manifold *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_28;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_20;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(this);
  manifold::CsgLeafNode::GetImpl();
  uVar3 = *(ulong *)(local_28 + 0x68);
  if (local_20 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_20 + 8;
    if (*(long *)(local_20 + 8) == 0x100000001) {
      *(undefined8 *)(local_20 + 8) = 0;
      (**(code **)(*(long *)local_20 + 0x10))(local_20);
      (**(code **)(*(long *)local_20 + 0x18))(local_20);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar4 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar4 = *(int *)(local_20 + 8);
        *(int *)(local_20 + 8) = iVar4 + -1;
      }
      if (iVar4 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_20);
      }
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3 / 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::NumProp() const */

long __thiscall manifold::Manifold::NumProp(Manifold *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_28;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_20;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(this);
  manifold::CsgLeafNode::GetImpl();
  iVar2 = *(int *)(local_28 + 0xc4);
  if (local_20 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_20 + 8;
    if (*(long *)(local_20 + 8) == 0x100000001) {
      *(undefined8 *)(local_20 + 8) = 0;
      (**(code **)(*(long *)local_20 + 0x10))(local_20);
      (**(code **)(*(long *)local_20 + 0x18))(local_20);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar4 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar4 = *(int *)(local_20 + 8);
        *(int *)(local_20 + 8) = iVar4 + -1;
      }
      if (iVar4 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_20);
      }
    }
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (long)iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::NumPropVert() const */

ulong __thiscall manifold::Manifold::NumPropVert(Manifold *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_28;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_20;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(this);
  manifold::CsgLeafNode::GetImpl();
  if (*(int *)(local_28 + 0xc4) == 0) {
    uVar3 = *(ulong *)(local_28 + 0x50);
  }
  else {
    uVar3 = *(ulong *)(local_28 + 0xd0) / (ulong)(long)*(int *)(local_28 + 0xc4);
  }
  if (local_20 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_20 + 8;
    if (*(long *)(local_20 + 8) == 0x100000001) {
      *(undefined8 *)(local_20 + 8) = 0;
      (**(code **)(*(long *)local_20 + 0x10))(local_20);
      (**(code **)(*(long *)local_20 + 0x18))(local_20);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar4 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar4 = *(int *)(local_20 + 8);
        *(int *)(local_20 + 8) = iVar4 + -1;
      }
      if (iVar4 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_20);
      }
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::BoundingBox() const */

void manifold::Manifold::BoundingBox(void)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  Manifold *in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  undefined8 *local_38;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_30;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(in_RSI);
  manifold::CsgLeafNode::GetImpl();
  uVar3 = local_38[1];
  uVar4 = local_38[2];
  uVar5 = local_38[3];
  uVar6 = local_38[4];
  uVar7 = local_38[5];
  *in_RDI = *local_38;
  in_RDI[1] = uVar3;
  in_RDI[2] = uVar4;
  in_RDI[3] = uVar5;
  in_RDI[4] = uVar6;
  in_RDI[5] = uVar7;
  if (local_30 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_30 + 8;
    if (*(long *)(local_30 + 8) == 0x100000001) {
      *(undefined8 *)(local_30 + 8) = 0;
      (**(code **)(*(long *)local_30 + 0x10))(local_30);
      (**(code **)(*(long *)local_30 + 0x18))(local_30);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar8 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar8 = *(int *)(local_30 + 8);
        *(int *)(local_30 + 8) = iVar8 + -1;
      }
      if (iVar8 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_30);
      }
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::GetEpsilon() const */

void __thiscall manifold::Manifold::GetEpsilon(Manifold *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_28;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_20;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(this);
  manifold::CsgLeafNode::GetImpl();
  uVar2 = *(undefined8 *)(local_28 + 0x30);
  if (local_20 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_20 + 8;
    if (*(long *)(local_20 + 8) == 0x100000001) {
      *(undefined8 *)(local_20 + 8) = 0;
      (**(code **)(*(long *)local_20 + 0x10))(local_20);
      (**(code **)(*(long *)local_20 + 0x18))(local_20);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar4 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar4 = *(int *)(local_20 + 8);
        *(int *)(local_20 + 8) = iVar4 + -1;
      }
      if (iVar4 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_20);
      }
    }
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* manifold::Manifold::GetTolerance() const */

void __thiscall manifold::Manifold::GetTolerance(Manifold *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_28;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_20;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(this);
  manifold::CsgLeafNode::GetImpl();
  uVar2 = *(undefined8 *)(local_28 + 0x38);
  if (local_20 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_20 + 8;
    if (*(long *)(local_20 + 8) == 0x100000001) {
      *(undefined8 *)(local_20 + 8) = 0;
      (**(code **)(*(long *)local_20 + 0x10))(local_20);
      (**(code **)(*(long *)local_20 + 0x18))(local_20);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar4 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar4 = *(int *)(local_20 + 8);
        *(int *)(local_20 + 8) = iVar4 + -1;
      }
      if (iVar4 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_20);
      }
    }
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* manifold::Manifold::SurfaceArea() const */

void __thiscall manifold::Manifold::SurfaceArea(Manifold *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined8 uVar4;
  undefined8 local_28;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_20;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(this);
  manifold::CsgLeafNode::GetImpl();
  uVar4 = manifold::Manifold::Impl::GetProperty(local_28,1);
  if (local_20 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_20 + 8;
    if (*(long *)(local_20 + 8) == 0x100000001) {
      *(undefined8 *)(local_20 + 8) = 0;
      (**(code **)(*(long *)local_20 + 0x10))(local_20);
      (**(code **)(*(long *)local_20 + 0x18))(local_20);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar3 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar3 = *(int *)(local_20 + 8);
        *(int *)(local_20 + 8) = iVar3 + -1;
      }
      if (iVar3 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_20);
      }
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}



/* manifold::Manifold::Volume() const */

void __thiscall manifold::Manifold::Volume(Manifold *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined8 uVar4;
  undefined8 local_28;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_20;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(this);
  manifold::CsgLeafNode::GetImpl();
  uVar4 = manifold::Manifold::Impl::GetProperty(local_28,0);
  if (local_20 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_20 + 8;
    if (*(long *)(local_20 + 8) == 0x100000001) {
      *(undefined8 *)(local_20 + 8) = 0;
      (**(code **)(*(long *)local_20 + 0x10))(local_20);
      (**(code **)(*(long *)local_20 + 0x18))(local_20);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar3 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar3 = *(int *)(local_20 + 8);
        *(int *)(local_20 + 8) = iVar3 + -1;
      }
      if (iVar3 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_20);
      }
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}



/* manifold::Manifold::OriginalID() const */

undefined4 __thiscall manifold::Manifold::OriginalID(Manifold *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_28;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_20;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(this);
  manifold::CsgLeafNode::GetImpl();
  uVar2 = *(undefined4 *)(local_28 + 0xc0);
  if (local_20 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_20 + 8;
    if (*(long *)(local_20 + 8) == 0x100000001) {
      *(undefined8 *)(local_20 + 8) = 0;
      (**(code **)(*(long *)local_20 + 0x10))(local_20);
      (**(code **)(*(long *)local_20 + 0x18))(local_20);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar4 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar4 = *(int *)(local_20 + 8);
        *(int *)(local_20 + 8) = iVar4 + -1;
      }
      if (iVar4 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_20);
      }
    }
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::MatchesTriNormals() const */

ulong __thiscall manifold::Manifold::MatchesTriNormals(Manifold *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long in_FS_OFFSET;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_20;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(this);
  manifold::CsgLeafNode::GetImpl();
  uVar3 = manifold::Manifold::Impl::MatchesTriNormals();
  if (local_20 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_20 + 8;
    if (*(long *)(local_20 + 8) == 0x100000001) {
      *(undefined8 *)(local_20 + 8) = 0;
      (**(code **)(*(long *)local_20 + 0x10))(local_20);
      (**(code **)(*(long *)local_20 + 0x18))(local_20);
      uVar3 = uVar3 & 0xff;
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar4 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar4 = *(int *)(local_20 + 8);
        *(int *)(local_20 + 8) = iVar4 + -1;
      }
      if (iVar4 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_20);
        uVar3 = uVar3 & 0xff;
      }
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::NumDegenerateTris() const */

long __thiscall manifold::Manifold::NumDegenerateTris(Manifold *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long lVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_20;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(this);
  manifold::CsgLeafNode::GetImpl();
  iVar3 = manifold::Manifold::Impl::NumDegenerateTris();
  if (local_20 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_20 + 8;
    if (*(long *)(local_20 + 8) == 0x100000001) {
      *(undefined8 *)(local_20 + 8) = 0;
      (**(code **)(*(long *)local_20 + 0x10))(local_20);
      (**(code **)(*(long *)local_20 + 0x18))(local_20);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar4 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar4 = *(int *)(local_20 + 8);
        *(int *)(local_20 + 8) = iVar4 + -1;
      }
      if (iVar4 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_20);
      }
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (long)iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Slice(double) const */

void manifold::Manifold::Slice(double param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long lVar2;
  int iVar3;
  Manifold *in_RSI;
  long in_FS_OFFSET;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_30;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(in_RSI);
  manifold::CsgLeafNode::GetImpl();
  manifold::Manifold::Impl::Slice(param_1);
  if (local_30 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_30 + 8;
    if (*(long *)(local_30 + 8) == 0x100000001) {
      *(undefined8 *)(local_30 + 8) = 0;
      (**(code **)(*(long *)local_30 + 0x10))(local_30);
      (**(code **)(*(long *)local_30 + 0x18))(local_30);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar3 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar3 = *(int *)(local_30 + 8);
        *(int *)(local_30 + 8) = iVar3 + -1;
      }
      if (iVar3 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_30);
      }
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Project() const */

void manifold::Manifold::Project(void)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long lVar2;
  int iVar3;
  Manifold *in_RSI;
  long in_FS_OFFSET;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_30;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(in_RSI);
  manifold::CsgLeafNode::GetImpl();
  manifold::Manifold::Impl::Project();
  if (local_30 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_30 + 8;
    if (*(long *)(local_30 + 8) == 0x100000001) {
      *(undefined8 *)(local_30 + 8) = 0;
      (**(code **)(*(long *)local_30 + 0x10))(local_30);
      (**(code **)(*(long *)local_30 + 0x18))(local_30);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar3 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar3 = *(int *)(local_30 + 8);
        *(int *)(local_30 + 8) = iVar3 + -1;
      }
      if (iVar3 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_30);
      }
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::TEMPNAMEPLACEHOLDERVALUE(manifold::Manifold const&) */

Manifold * __thiscall manifold::Manifold::operator-=(Manifold *this,Manifold *param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Boolean(local_38,this,param_1,1);
  uVar3 = local_38._0_8_;
  uVar4 = local_38._8_8_;
  p_Var2 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
  local_38._0_16_ = (undefined1  [16])0x0;
  *(undefined8 *)this = uVar3;
  *(undefined8 *)(this + 8) = uVar4;
  if (p_Var2 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = p_Var2 + 8;
    if (*(long *)(p_Var2 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var2 + 8) = 0;
      (**(code **)(*(long *)p_Var2 + 0x10))(p_Var2);
      (**(code **)(*(long *)p_Var2 + 0x18))(p_Var2);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar5 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar5 = *(int *)(p_Var2 + 8);
        *(int *)(p_Var2 + 8) = iVar5 + -1;
      }
      if (iVar5 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var2);
      }
    }
    uVar3 = local_38._8_8_;
    if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_38._8_8_ !=
        (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var2 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_38._8_8_ + 8);
      if (*(long *)(local_38._8_8_ + 8) == 0x100000001) {
        *(undefined8 *)(local_38._8_8_ + 8) = 0;
        (**(code **)(*(long *)local_38._8_8_ + 0x10))(local_38._8_8_);
        (**(code **)(*(long *)uVar3 + 0x18))(uVar3);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar5 = *(int *)p_Var2;
          *(int *)p_Var2 = *(int *)p_Var2 + -1;
          UNLOCK();
        }
        else {
          iVar5 = *(int *)(local_38._8_8_ + 8);
          *(int *)(local_38._8_8_ + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                    ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_38._8_8_);
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::TEMPNAMEPLACEHOLDERVALUE(manifold::Manifold const&) */

Manifold * __thiscall manifold::Manifold::operator+=(Manifold *this,Manifold *param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Boolean(local_38,this,param_1,0);
  uVar3 = local_38._0_8_;
  uVar4 = local_38._8_8_;
  p_Var2 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
  local_38._0_16_ = (undefined1  [16])0x0;
  *(undefined8 *)this = uVar3;
  *(undefined8 *)(this + 8) = uVar4;
  if (p_Var2 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = p_Var2 + 8;
    if (*(long *)(p_Var2 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var2 + 8) = 0;
      (**(code **)(*(long *)p_Var2 + 0x10))(p_Var2);
      (**(code **)(*(long *)p_Var2 + 0x18))(p_Var2);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar5 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar5 = *(int *)(p_Var2 + 8);
        *(int *)(p_Var2 + 8) = iVar5 + -1;
      }
      if (iVar5 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var2);
      }
    }
    uVar3 = local_38._8_8_;
    if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_38._8_8_ !=
        (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var2 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_38._8_8_ + 8);
      if (*(long *)(local_38._8_8_ + 8) == 0x100000001) {
        *(undefined8 *)(local_38._8_8_ + 8) = 0;
        (**(code **)(*(long *)local_38._8_8_ + 0x10))(local_38._8_8_);
        (**(code **)(*(long *)uVar3 + 0x18))(uVar3);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar5 = *(int *)p_Var2;
          *(int *)p_Var2 = *(int *)p_Var2 + -1;
          UNLOCK();
        }
        else {
          iVar5 = *(int *)(local_38._8_8_ + 8);
          *(int *)(local_38._8_8_ + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                    ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_38._8_8_);
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::TEMPNAMEPLACEHOLDERVALUE(manifold::Manifold const&) */

Manifold * __thiscall manifold::Manifold::operator^=(Manifold *this,Manifold *param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Boolean(local_38,this,param_1,2);
  uVar3 = local_38._0_8_;
  uVar4 = local_38._8_8_;
  p_Var2 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
  local_38._0_16_ = (undefined1  [16])0x0;
  *(undefined8 *)this = uVar3;
  *(undefined8 *)(this + 8) = uVar4;
  if (p_Var2 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = p_Var2 + 8;
    if (*(long *)(p_Var2 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var2 + 8) = 0;
      (**(code **)(*(long *)p_Var2 + 0x10))(p_Var2);
      (**(code **)(*(long *)p_Var2 + 0x18))(p_Var2);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar5 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar5 = *(int *)(p_Var2 + 8);
        *(int *)(p_Var2 + 8) = iVar5 + -1;
      }
      if (iVar5 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var2);
      }
    }
    uVar3 = local_38._8_8_;
    if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_38._8_8_ !=
        (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var2 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_38._8_8_ + 8);
      if (*(long *)(local_38._8_8_ + 8) == 0x100000001) {
        *(undefined8 *)(local_38._8_8_ + 8) = 0;
        (**(code **)(*(long *)local_38._8_8_ + 0x10))(local_38._8_8_);
        (**(code **)(*(long *)uVar3 + 0x18))(uVar3);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar5 = *(int *)p_Var2;
          *(int *)p_Var2 = *(int *)p_Var2 + -1;
          UNLOCK();
        }
        else {
          iVar5 = *(int *)(local_38._8_8_ + 8);
          *(int *)(local_38._8_8_ + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                    ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_38._8_8_);
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::MinGap(manifold::Manifold const&, double) const */

void __thiscall manifold::Manifold::MinGap(Manifold *this,Manifold *param_1,double param_2)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  ulong uVar2;
  int iVar3;
  long in_FS_OFFSET;
  Manifold local_68 [8];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  Impl *local_58;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_50;
  long local_48;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Boolean(local_68,this,param_1,2);
  GetCsgLeafNode(local_68);
  manifold::CsgLeafNode::GetImpl();
  uVar2 = *(ulong *)(local_48 + 0x68);
  if (local_40 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_40);
  }
  if (uVar2 < 3) {
    GetCsgLeafNode(this);
    manifold::CsgLeafNode::GetImpl();
    GetCsgLeafNode(param_1);
    manifold::CsgLeafNode::GetImpl();
    manifold::Manifold::Impl::MinGap(local_58,param_2);
    if (local_40 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_40);
    }
    if (local_50 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_50);
    }
  }
  if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_60 + 8;
    if (*(long *)(local_60 + 8) == 0x100000001) {
      *(undefined8 *)(local_60 + 8) = 0;
      (**(code **)(*(long *)local_60 + 0x10))(local_60);
      (**(code **)(*(long *)local_60 + 0x18))(local_60);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar3 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar3 = *(int *)(local_60 + 8);
        *(int *)(local_60 + 8) = iVar3 + -1;
      }
      if (iVar3 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::TrimByPlane(linalg::vec<double, 3>, double) const */

Manifold * __thiscall
manifold::Manifold::TrimByPlane(undefined8 param_1,Manifold *this,Manifold *param_3)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  int iVar3;
  long in_FS_OFFSET;
  undefined8 *local_78;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(param_3);
  manifold::CsgLeafNode::GetImpl();
  p_Var1 = local_70;
  local_68 = *local_78;
  uStack_60 = local_78[1];
  local_58 = local_78[2];
  uStack_50 = local_78[3];
  local_48 = local_78[4];
  uStack_40 = local_78[5];
  if (local_70 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var2 = local_70 + 8;
    if (*(long *)(local_70 + 8) == 0x100000001) {
      *(undefined8 *)(local_70 + 8) = 0;
      (**(code **)(*(long *)local_70 + 0x10))(local_70);
      (**(code **)(*(long *)p_Var1 + 0x18))(p_Var1);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar3 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
      }
      else {
        iVar3 = *(int *)(local_70 + 8);
        *(int *)(local_70 + 8) = iVar3 + -1;
      }
      if (iVar3 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_70);
      }
    }
  }
  (anonymous_namespace)::Halfspace(param_1,&local_78);
  Boolean(this,param_3,&local_78,2);
  if (local_70 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_70 + 8;
    if (*(long *)(local_70 + 8) == 0x100000001) {
      *(undefined8 *)(local_70 + 8) = 0;
      (**(code **)(*(long *)local_70 + 0x10))(local_70);
      (**(code **)(*(long *)local_70 + 0x18))(local_70);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar3 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar3 = *(int *)(local_70 + 8);
        *(int *)(local_70 + 8) = iVar3 + -1;
      }
      if (iVar3 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_70);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Genus() const */

int __thiscall manifold::Manifold::Genus(Manifold *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  long in_FS_OFFSET;
  long local_48;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_40;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(this);
  manifold::CsgLeafNode::GetImpl();
  uVar3 = *(undefined8 *)(local_48 + 0x50);
  if (local_40 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_40);
  }
  GetCsgLeafNode(this);
  manifold::CsgLeafNode::GetImpl();
  uVar4 = *(ulong *)(local_48 + 0x68);
  if (local_40 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_40 + 8;
    if (*(long *)(local_40 + 8) == 0x100000001) {
      *(undefined8 *)(local_40 + 8) = 0;
      (**(code **)(*(long *)local_40 + 0x10))(local_40);
      (**(code **)(*(long *)local_40 + 0x18))(local_40);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar6 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar6 = *(int *)(local_40 + 8);
        *(int *)(local_40 + 8) = iVar6 + -1;
      }
      if (iVar6 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_40);
      }
    }
  }
  GetCsgLeafNode(this);
  manifold::CsgLeafNode::GetImpl();
  uVar5 = *(ulong *)(local_48 + 0x68);
  if (local_40 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_40 + 8;
    if (*(long *)(local_40 + 8) == 0x100000001) {
      *(undefined8 *)(local_40 + 8) = 0;
      (**(code **)(*(long *)local_40 + 0x10))(local_40);
      (**(code **)(*(long *)local_40 + 0x18))(local_40);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar6 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar6 = *(int *)(local_40 + 8);
        *(int *)(local_40 + 8) = iVar6 + -1;
      }
      if (iVar6 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_40);
      }
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1 - (((int)uVar3 + (int)(uVar5 / 3)) - (int)(uVar4 >> 1)) / 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Manifold(std::shared_ptr<manifold::Manifold::Impl>) */

void __thiscall manifold::Manifold::Manifold(Manifold *this,undefined8 *param_2)

{
  CsgLeafNode *pCVar1;
  int *piVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long in_FS_OFFSET;
  bool bVar8;
  undefined8 local_48;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = (undefined8 *)operator_new(0x98);
  local_48 = *param_2;
  p_Stack_40 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)param_2[1];
  pCVar1 = (CsgLeafNode *)(puVar6 + 2);
  puVar6[1] = _LC5;
  *puVar6 = &PTR___Sp_counted_ptr_inplace_00111378;
  if (p_Stack_40 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(p_Stack_40 + 8) = *(int *)(p_Stack_40 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(p_Stack_40 + 8) = *(int *)(p_Stack_40 + 8) + 1;
    }
  }
  manifold::CsgLeafNode::CsgLeafNode(pCVar1,&local_48);
  p_Var4 = p_Stack_40;
  if (p_Stack_40 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var3 = p_Stack_40 + 8;
    if (*(long *)(p_Stack_40 + 8) == 0x100000001) {
      *(undefined8 *)(p_Stack_40 + 8) = 0;
      (**(code **)(*(long *)p_Stack_40 + 0x10))(p_Stack_40);
      (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar5 = *(int *)p_Var3;
        *(int *)p_Var3 = *(int *)p_Var3 + -1;
        UNLOCK();
      }
      else {
        iVar5 = *(int *)(p_Stack_40 + 8);
        *(int *)(p_Stack_40 + 8) = iVar5 + -1;
      }
      if (iVar5 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_40);
      }
    }
  }
  if ((puVar6[4] != 0) && (*(int *)(puVar6[4] + 8) != 0)) goto LAB_00104194;
  bVar8 = __libc_single_threaded == '\0';
  puVar6[3] = pCVar1;
  if (bVar8) {
    LOCK();
    *(int *)((long)puVar6 + 0xc) = *(int *)((long)puVar6 + 0xc) + 1;
    UNLOCK();
    plVar7 = (long *)puVar6[4];
    if (plVar7 != (long *)0x0) {
      if (__libc_single_threaded != '\0') goto LAB_001041da;
      LOCK();
      piVar2 = (int *)((long)plVar7 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      goto LAB_001041e3;
    }
  }
  else {
    plVar7 = (long *)puVar6[4];
    *(int *)((long)puVar6 + 0xc) = *(int *)((long)puVar6 + 0xc) + 1;
    if (plVar7 != (long *)0x0) {
LAB_001041da:
      iVar5 = *(int *)((long)plVar7 + 0xc);
      *(int *)((long)plVar7 + 0xc) = iVar5 + -1;
LAB_001041e3:
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
  }
  puVar6[4] = puVar6;
LAB_00104194:
  *(CsgLeafNode **)this = pCVar1;
  *(undefined8 **)(this + 8) = puVar6;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::NumOverlaps(manifold::Manifold const&) const */

long __thiscall manifold::Manifold::NumOverlaps(Manifold *this,Manifold *param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  bool local_88;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_80;
  bool local_78;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_70;
  void *local_68;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  undefined8 uStack_58;
  void *local_48;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(this);
  manifold::CsgLeafNode::GetImpl();
  GetCsgLeafNode(param_1);
  manifold::CsgLeafNode::GetImpl();
  manifold::Manifold::Impl::EdgeCollisions((Impl *)&local_68,local_78);
  p_Var2 = local_40;
  if (local_40 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_40 + 8;
    if (*(long *)(local_40 + 8) == 0x100000001) {
      *(undefined8 *)(local_40 + 8) = 0;
      (**(code **)(*(long *)local_40 + 0x10))(local_40);
      (**(code **)(*(long *)p_Var2 + 0x18))(p_Var2);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar3 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar3 = *(int *)(local_40 + 8);
        *(int *)(local_40 + 8) = iVar3 + -1;
      }
      if (iVar3 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_40);
      }
    }
  }
  if (local_70 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_70);
  }
  GetCsgLeafNode(param_1);
  uVar5 = (ulong)local_60 >> 3;
  manifold::CsgLeafNode::GetImpl();
  GetCsgLeafNode(this);
  manifold::CsgLeafNode::GetImpl();
  manifold::Manifold::Impl::EdgeCollisions((Impl *)&local_48,local_88);
  if (local_68 != (void *)0x0) {
    free(local_68);
  }
  local_68 = local_48;
  local_60 = local_40;
  uStack_58 = uStack_38;
  if (local_70 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_70);
  }
  if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_80);
  }
  uVar4 = (ulong)local_60 >> 3;
  if (local_68 != (void *)0x0) {
    free(local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (long)(int)uVar5 + uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::BatchBoolean(std::vector<manifold::Manifold,
   std::allocator<manifold::Manifold> > const&, manifold::OpType) */

Manifold * __thiscall
manifold::Manifold::BatchBoolean(Manifold *this,long *param_1,undefined4 param_3)

{
  CsgOpNode *pCVar1;
  int *piVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  void *pvVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  undefined1 local_58 [16];
  undefined8 *local_48;
  long local_40;
  
  puVar14 = (undefined8 *)param_1[1];
  puVar10 = (undefined8 *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar15 = (long)puVar14 - (long)puVar10;
  if (puVar14 == puVar10) {
    Manifold(this);
    goto LAB_001044d8;
  }
  if (uVar15 == 0x10) {
    uVar4 = puVar10[1];
    *(undefined8 *)this = *puVar10;
    *(undefined8 *)(this + 8) = uVar4;
    lVar8 = *(long *)(this + 8);
    if (lVar8 != 0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      }
    }
    goto LAB_001044d8;
  }
  local_48 = (undefined8 *)0x0;
  local_58 = (undefined1  [16])0x0;
  if (0x7ffffffffffffff0 < uVar15) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::reserve");
  }
  if (uVar15 == 0) {
LAB_00104531:
    do {
      while ((undefined8 *)local_58._8_8_ == local_48) {
        puVar11 = puVar10 + 2;
        std::
        vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>
        ::_M_realloc_insert<std::shared_ptr<manifold::CsgNode>const&>
                  ((vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>
                    *)local_58,local_58._8_8_,puVar10);
        puVar10 = puVar11;
        if (puVar14 == puVar11) goto LAB_00104598;
      }
      uVar4 = puVar10[1];
      lVar8 = puVar10[1];
      *(undefined8 *)local_58._8_8_ = *puVar10;
      *(undefined8 *)(local_58._8_8_ + 8) = uVar4;
      if (lVar8 != 0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        }
      }
      puVar10 = puVar10 + 2;
      local_58._8_8_ = (undefined8 *)(local_58._8_8_ + 0x10);
    } while (puVar14 != puVar10);
  }
  else {
    pvVar12 = operator_new(uVar15);
    if (local_58._8_8_ == local_58._0_8_) {
      if ((void *)local_58._0_8_ != (void *)0x0) goto LAB_0010475e;
    }
    else {
      uVar9 = 0;
      lVar8 = 0;
      do {
        uVar4 = ((undefined8 *)(local_58._0_8_ + lVar8))[1];
        uVar9 = uVar9 + 1;
        *(undefined8 *)((long)pvVar12 + lVar8) = *(undefined8 *)(local_58._0_8_ + lVar8);
        ((undefined8 *)((long)pvVar12 + lVar8))[1] = uVar4;
        lVar8 = lVar8 + 0x10;
      } while (uVar9 < ((ulong)(local_58._8_8_ + (-0x10 - local_58._0_8_)) >> 4) + 1);
LAB_0010475e:
      operator_delete((void *)local_58._0_8_,(long)local_48 - local_58._0_8_);
    }
    local_48 = (undefined8 *)((long)pvVar12 + uVar15);
    puVar14 = (undefined8 *)param_1[1];
    puVar10 = (undefined8 *)*param_1;
    local_58._8_8_ = pvVar12;
    local_58._0_8_ = pvVar12;
    if (puVar10 != puVar14) goto LAB_00104531;
  }
LAB_00104598:
  p_Var7 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator_new(0xc0);
  pCVar1 = (CsgOpNode *)(p_Var7 + 0x10);
  *(undefined8 *)(p_Var7 + 8) = _LC5;
  *(undefined ***)p_Var7 = &PTR___Sp_counted_ptr_inplace_001113e8;
  manifold::CsgOpNode::CsgOpNode(pCVar1,local_58,param_3);
  if ((*(long *)(p_Var7 + 0x20) == 0) || (*(int *)(*(long *)(p_Var7 + 0x20) + 8) == 0)) {
    bVar16 = __libc_single_threaded == '\0';
    *(CsgOpNode **)(p_Var7 + 0x18) = pCVar1;
    if (bVar16) {
      LOCK();
      *(int *)(p_Var7 + 0xc) = *(int *)(p_Var7 + 0xc) + 1;
      UNLOCK();
      plVar13 = *(long **)(p_Var7 + 0x20);
      if (plVar13 != (long *)0x0) {
        if (__libc_single_threaded != '\0') goto LAB_001047ca;
        LOCK();
        piVar2 = (int *)((long)plVar13 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        goto LAB_001047d3;
      }
LAB_001047de:
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var7 + 0x20) = p_Var7;
      cVar5 = __libc_single_threaded;
      *(CsgOpNode **)this = pCVar1;
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8) = p_Var7;
      goto LAB_001045f3;
    }
    plVar13 = *(long **)(p_Var7 + 0x20);
    *(int *)(p_Var7 + 0xc) = *(int *)(p_Var7 + 0xc) + 1;
    if (plVar13 != (long *)0x0) {
LAB_001047ca:
      iVar6 = *(int *)((long)plVar13 + 0xc);
      *(int *)((long)plVar13 + 0xc) = iVar6 + -1;
LAB_001047d3:
      if (iVar6 == 1) {
        (**(code **)(*plVar13 + 0x18))();
      }
      goto LAB_001047de;
    }
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var7 + 0x20) = p_Var7;
    *(CsgOpNode **)this = pCVar1;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8) = p_Var7;
LAB_001045fb:
    *(int *)(p_Var7 + 8) = *(int *)(p_Var7 + 8) + 1;
  }
  else {
    *(CsgOpNode **)this = pCVar1;
    cVar5 = __libc_single_threaded;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8) = p_Var7;
LAB_001045f3:
    if (cVar5 != '\0') goto LAB_001045fb;
    LOCK();
    *(int *)(p_Var7 + 8) = *(int *)(p_Var7 + 8) + 1;
    UNLOCK();
  }
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var7);
  uVar4 = local_58._8_8_;
  pvVar12 = (void *)local_58._0_8_;
  if (local_58._8_8_ != local_58._0_8_) {
LAB_00104643:
    do {
      p_Var7 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar12 + 8);
      if (p_Var7 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var3 = p_Var7 + 8;
        if (*(long *)(p_Var7 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var7 + 8) = 0;
          (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
          (**(code **)(*(long *)p_Var7 + 0x18))(p_Var7);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar6 = *(int *)p_Var3;
            *(int *)p_Var3 = *(int *)p_Var3 + -1;
            UNLOCK();
          }
          else {
            iVar6 = *(int *)(p_Var7 + 8);
            *(int *)(p_Var7 + 8) = iVar6 + -1;
          }
          if (iVar6 == 1) {
            pvVar12 = (void *)((long)pvVar12 + 0x10);
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var7);
            if ((void *)uVar4 == pvVar12) break;
            goto LAB_00104643;
          }
        }
      }
      pvVar12 = (void *)((long)pvVar12 + 0x10);
    } while ((void *)uVar4 != pvVar12);
  }
  if ((void *)local_58._0_8_ != (void *)0x0) {
    operator_delete((void *)local_58._0_8_,(long)local_48 - local_58._0_8_);
  }
LAB_001044d8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00104b64) */
/* WARNING: Removing unreachable block (ram,0x00104b76) */
/* WARNING: Removing unreachable block (ram,0x00104b98) */
/* manifold::Manifold::AsOriginal() const */

void manifold::Manifold::AsOriginal(void)

{
  undefined4 uVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this;
  Manifold *in_RSI;
  bool bVar6;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  undefined1 local_69;
  long local_68;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_58;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(in_RSI);
  manifold::CsgLeafNode::GetImpl();
  if (*(int *)(local_68 + 0x40) == 0) {
    std::shared_ptr<manifold::Manifold::Impl>::
    shared_ptr<std::allocator<void>,manifold::Manifold::Impl_const&>
              ((shared_ptr<manifold::Manifold::Impl> *)&local_58,
               (__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)local_48);
    bVar6 = SUB81(local_58,0);
    manifold::Manifold::Impl::InitializeOriginal(bVar6);
    manifold::Manifold::Impl::CreateFaces();
    manifold::Manifold::Impl::SimplifyTopology();
    manifold::Manifold::Impl::Finish();
    manifold::Manifold::Impl::InitializeOriginal(bVar6);
    std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
    __shared_ptr<std::allocator<void>,std::shared_ptr<manifold::Manifold::Impl>&>
              ((__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)local_48,&local_69,
               (shared_ptr<manifold::Manifold::Impl> *)&local_58);
    uVar3 = local_48._0_8_;
    uVar4 = local_48._8_8_;
    local_48 = (undefined1  [16])0x0;
    *in_RDI = uVar3;
    in_RDI[1] = uVar4;
    p_Var2 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)in_RDI[1];
    if (p_Var2 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(p_Var2 + 8) = *(int *)(p_Var2 + 8) + 1;
        UNLOCK();
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var2);
      }
      else {
        *(int *)(p_Var2 + 8) = *(int *)(p_Var2 + 8) + 1;
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var2);
      }
    }
    if (local_50 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_50);
    }
  }
  else {
    this = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator_new(0x198);
    uVar4 = _LC18;
    uVar3 = _LC5;
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x10) = uVar4;
    *(undefined8 *)(this + 0x18) = uVar4;
    uVar5 = _LC21;
    uVar4 = _LC18;
    *(undefined8 *)(this + 8) = uVar3;
    *(undefined8 *)(this + 0x20) = uVar4;
    *(undefined8 *)(this + 0x28) = uVar5;
    uVar3 = _LC21;
    *(undefined ***)this = &PTR___Sp_counted_ptr_inplace_001113b0;
    uVar4 = _LC24;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x30) = uVar3;
    *(undefined8 *)(this + 0x38) = uVar3;
    uVar3 = _LC23;
    *(undefined8 *)(this + 0xd0) = uVar4;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x108) = this + 0xf8;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x110) = this + 0xf8;
    local_58 = this + 0x10;
    *(undefined8 *)(this + 0x40) = uVar3;
    *(undefined8 *)(this + 0x48) = uVar3;
    *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0xc0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0xe0) = (undefined1  [16])0x0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)(this + 0xb8) = 0;
    *(undefined8 *)(this + 0xd8) = 0;
    *(undefined4 *)(this + 0xf8) = 0;
    *(undefined8 *)(this + 0x100) = 0;
    *(undefined8 *)(this + 0x118) = 0;
    *(undefined8 *)(this + 0x120) = 0;
    *(undefined1 (*) [16])(this + 0x128) = (undefined1  [16])0x0;
    *(undefined8 *)(this + 0x138) = 0;
    uVar1 = *(undefined4 *)(local_68 + 0x40);
    *(undefined8 *)(this + 0x150) = 0;
    *(undefined8 *)(this + 0x168) = 0;
    *(undefined8 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 0x50) = uVar1;
    *(undefined1 (*) [16])(this + 0x140) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x158) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x170) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x188) = (undefined1  [16])0x0;
    local_50 = this;
    std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
    __shared_ptr<std::allocator<void>,std::shared_ptr<manifold::Manifold::Impl>&>
              ((__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)local_48,&local_69,
               &local_58);
    uVar3 = local_48._0_8_;
    uVar4 = local_48._8_8_;
    local_48 = (undefined1  [16])0x0;
    *in_RDI = uVar3;
    in_RDI[1] = uVar4;
    p_Var2 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)in_RDI[1];
    if (p_Var2 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(p_Var2 + 8) = *(int *)(p_Var2 + 8) + 1;
        UNLOCK();
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var2);
      }
      else {
        *(int *)(p_Var2 + 8) = *(int *)(p_Var2 + 8) + 1;
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var2);
      }
      this = local_50;
      if (local_50 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00104a6d;
    }
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(this);
  }
LAB_00104a6d:
  if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_60);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00104f0c) */
/* WARNING: Removing unreachable block (ram,0x00104f1e) */
/* WARNING: Removing unreachable block (ram,0x00104f40) */
/* manifold::Manifold::Warp(std::function<void (linalg::vec<double, 3>&)>) const */

undefined8 * manifold::Manifold::Warp(undefined8 *param_1,Manifold *param_2,long param_3)

{
  undefined4 uVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this;
  long in_FS_OFFSET;
  undefined1 local_99;
  long local_98;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_90;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_88;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  code *local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(param_2);
  manifold::CsgLeafNode::GetImpl();
  if (*(int *)(local_98 + 0x40) == 0) {
    std::shared_ptr<manifold::Manifold::Impl>::
    shared_ptr<std::allocator<void>,manifold::Manifold::Impl_const&>
              ((shared_ptr<manifold::Manifold::Impl> *)&local_88,
               (__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)local_78);
    p_Var2 = local_88;
    local_58 = (code *)0x0;
    uStack_50 = 0;
    local_68 = (undefined1  [16])0x0;
    if (*(code **)(param_3 + 0x10) != (code *)0x0) {
      (**(code **)(param_3 + 0x10))(local_68,param_3,2);
      local_58 = *(code **)(param_3 + 0x10);
      uStack_50 = *(undefined8 *)(param_3 + 0x18);
    }
    manifold::Manifold::Impl::Warp(p_Var2,local_68);
    if (local_58 != (code *)0x0) {
      (*local_58)(local_68,local_68,3);
    }
    std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
    __shared_ptr<std::allocator<void>,std::shared_ptr<manifold::Manifold::Impl>&>
              ((__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)local_78,&local_99,
               (shared_ptr<manifold::Manifold::Impl> *)&local_88);
    uVar3 = local_78._0_8_;
    uVar4 = local_78._8_8_;
    local_78 = (undefined1  [16])0x0;
    *param_1 = uVar3;
    param_1[1] = uVar4;
    p_Var2 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)param_1[1];
    if (p_Var2 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(p_Var2 + 8) = *(int *)(p_Var2 + 8) + 1;
        UNLOCK();
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var2);
      }
      else {
        *(int *)(p_Var2 + 8) = *(int *)(p_Var2 + 8) + 1;
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var2);
      }
    }
    if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_80);
    }
  }
  else {
    this = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator_new(0x198);
    uVar4 = _LC18;
    uVar3 = _LC5;
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x10) = uVar4;
    *(undefined8 *)(this + 0x18) = uVar4;
    uVar5 = _LC21;
    uVar4 = _LC18;
    *(undefined8 *)(this + 8) = uVar3;
    *(undefined8 *)(this + 0x20) = uVar4;
    *(undefined8 *)(this + 0x28) = uVar5;
    uVar3 = _LC21;
    *(undefined ***)this = &PTR___Sp_counted_ptr_inplace_001113b0;
    uVar4 = _LC24;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x30) = uVar3;
    *(undefined8 *)(this + 0x38) = uVar3;
    uVar3 = _LC23;
    *(undefined8 *)(this + 0xd0) = uVar4;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x108) = this + 0xf8;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x110) = this + 0xf8;
    local_88 = this + 0x10;
    *(undefined8 *)(this + 0x40) = uVar3;
    *(undefined8 *)(this + 0x48) = uVar3;
    *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0xc0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0xe0) = (undefined1  [16])0x0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)(this + 0xb8) = 0;
    *(undefined8 *)(this + 0xd8) = 0;
    *(undefined4 *)(this + 0xf8) = 0;
    *(undefined8 *)(this + 0x100) = 0;
    *(undefined8 *)(this + 0x118) = 0;
    *(undefined8 *)(this + 0x120) = 0;
    *(undefined1 (*) [16])(this + 0x128) = (undefined1  [16])0x0;
    *(undefined8 *)(this + 0x138) = 0;
    uVar1 = *(undefined4 *)(local_98 + 0x40);
    *(undefined8 *)(this + 0x150) = 0;
    *(undefined8 *)(this + 0x168) = 0;
    *(undefined8 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 0x50) = uVar1;
    *(undefined1 (*) [16])(this + 0x140) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x158) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x170) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x188) = (undefined1  [16])0x0;
    local_80 = this;
    std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
    __shared_ptr<std::allocator<void>,std::shared_ptr<manifold::Manifold::Impl>&>
              ((__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)local_78,&local_99,
               &local_88);
    uVar3 = local_78._0_8_;
    uVar4 = local_78._8_8_;
    local_78 = (undefined1  [16])0x0;
    *param_1 = uVar3;
    param_1[1] = uVar4;
    p_Var2 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)param_1[1];
    if (p_Var2 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(p_Var2 + 8) = *(int *)(p_Var2 + 8) + 1;
        UNLOCK();
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var2);
      }
      else {
        *(int *)(p_Var2 + 8) = *(int *)(p_Var2 + 8) + 1;
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var2);
      }
      this = local_80;
      if (local_80 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00104dd4;
    }
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(this);
  }
LAB_00104dd4:
  if (local_90 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_90);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001052bc) */
/* WARNING: Removing unreachable block (ram,0x001052ce) */
/* WARNING: Removing unreachable block (ram,0x001052f0) */
/* manifold::Manifold::WarpBatch(std::function<void (manifold::VecView<linalg::vec<double, 3> >)>)
   const */

undefined8 * manifold::Manifold::WarpBatch(undefined8 *param_1,Manifold *param_2,long param_3)

{
  undefined4 uVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this;
  long in_FS_OFFSET;
  undefined1 local_99;
  long local_98;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_90;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_88;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  code *local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(param_2);
  manifold::CsgLeafNode::GetImpl();
  if (*(int *)(local_98 + 0x40) == 0) {
    std::shared_ptr<manifold::Manifold::Impl>::
    shared_ptr<std::allocator<void>,manifold::Manifold::Impl_const&>
              ((shared_ptr<manifold::Manifold::Impl> *)&local_88,
               (__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)local_78);
    p_Var2 = local_88;
    local_58 = (code *)0x0;
    uStack_50 = 0;
    local_68 = (undefined1  [16])0x0;
    if (*(code **)(param_3 + 0x10) != (code *)0x0) {
      (**(code **)(param_3 + 0x10))(local_68,param_3,2);
      local_58 = *(code **)(param_3 + 0x10);
      uStack_50 = *(undefined8 *)(param_3 + 0x18);
    }
    manifold::Manifold::Impl::WarpBatch(p_Var2,local_68);
    if (local_58 != (code *)0x0) {
      (*local_58)(local_68,local_68,3);
    }
    std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
    __shared_ptr<std::allocator<void>,std::shared_ptr<manifold::Manifold::Impl>&>
              ((__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)local_78,&local_99,
               (shared_ptr<manifold::Manifold::Impl> *)&local_88);
    uVar3 = local_78._0_8_;
    uVar4 = local_78._8_8_;
    local_78 = (undefined1  [16])0x0;
    *param_1 = uVar3;
    param_1[1] = uVar4;
    p_Var2 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)param_1[1];
    if (p_Var2 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(p_Var2 + 8) = *(int *)(p_Var2 + 8) + 1;
        UNLOCK();
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var2);
      }
      else {
        *(int *)(p_Var2 + 8) = *(int *)(p_Var2 + 8) + 1;
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var2);
      }
    }
    if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_80);
    }
  }
  else {
    this = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator_new(0x198);
    uVar4 = _LC18;
    uVar3 = _LC5;
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x10) = uVar4;
    *(undefined8 *)(this + 0x18) = uVar4;
    uVar5 = _LC21;
    uVar4 = _LC18;
    *(undefined8 *)(this + 8) = uVar3;
    *(undefined8 *)(this + 0x20) = uVar4;
    *(undefined8 *)(this + 0x28) = uVar5;
    uVar3 = _LC21;
    *(undefined ***)this = &PTR___Sp_counted_ptr_inplace_001113b0;
    uVar4 = _LC24;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x30) = uVar3;
    *(undefined8 *)(this + 0x38) = uVar3;
    uVar3 = _LC23;
    *(undefined8 *)(this + 0xd0) = uVar4;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x108) = this + 0xf8;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x110) = this + 0xf8;
    local_88 = this + 0x10;
    *(undefined8 *)(this + 0x40) = uVar3;
    *(undefined8 *)(this + 0x48) = uVar3;
    *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0xc0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0xe0) = (undefined1  [16])0x0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)(this + 0xb8) = 0;
    *(undefined8 *)(this + 0xd8) = 0;
    *(undefined4 *)(this + 0xf8) = 0;
    *(undefined8 *)(this + 0x100) = 0;
    *(undefined8 *)(this + 0x118) = 0;
    *(undefined8 *)(this + 0x120) = 0;
    *(undefined1 (*) [16])(this + 0x128) = (undefined1  [16])0x0;
    *(undefined8 *)(this + 0x138) = 0;
    uVar1 = *(undefined4 *)(local_98 + 0x40);
    *(undefined8 *)(this + 0x150) = 0;
    *(undefined8 *)(this + 0x168) = 0;
    *(undefined8 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 0x50) = uVar1;
    *(undefined1 (*) [16])(this + 0x140) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x158) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x170) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x188) = (undefined1  [16])0x0;
    local_80 = this;
    std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
    __shared_ptr<std::allocator<void>,std::shared_ptr<manifold::Manifold::Impl>&>
              ((__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)local_78,&local_99,
               &local_88);
    uVar3 = local_78._0_8_;
    uVar4 = local_78._8_8_;
    local_78 = (undefined1  [16])0x0;
    *param_1 = uVar3;
    param_1[1] = uVar4;
    p_Var2 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)param_1[1];
    if (p_Var2 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(p_Var2 + 8) = *(int *)(p_Var2 + 8) + 1;
        UNLOCK();
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var2);
      }
      else {
        *(int *)(p_Var2 + 8) = *(int *)(p_Var2 + 8) + 1;
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var2);
      }
      this = local_80;
      if (local_80 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00105184;
    }
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(this);
  }
LAB_00105184:
  if (local_90 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_90);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00105444) */
/* manifold::Manifold::CalculateCurvature(int, int) const */

Manifold * __thiscall manifold::Manifold::CalculateCurvature(Manifold *this,int param_1,int param_2)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  undefined1 local_69;
  int local_68 [2];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode((Manifold *)CONCAT44(in_register_00000034,param_1));
  manifold::CsgLeafNode::GetImpl();
  std::shared_ptr<manifold::Manifold::Impl>::
  shared_ptr<std::allocator<void>,manifold::Manifold::Impl_const&>
            ((shared_ptr<manifold::Manifold::Impl> *)local_68,&local_69,local_58._0_8_);
  uVar2 = local_58._8_8_;
  if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_58._8_8_ !=
      (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_58._8_8_ + 8);
    if (*(long *)(local_58._8_8_ + 8) == 0x100000001) {
      *(undefined8 *)(local_58._8_8_ + 8) = 0;
      (**(code **)(*(long *)local_58._8_8_ + 0x10))();
      (**(code **)(*(long *)uVar2 + 0x18))();
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar4 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar4 = *(int *)(local_58._8_8_ + 8);
        *(int *)(local_58._8_8_ + 8) = iVar4 + -1;
      }
      if (iVar4 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                  ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_58._8_8_);
      }
    }
  }
  manifold::Manifold::Impl::CalculateCurvature(local_68[0],param_2);
  std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
  __shared_ptr<std::allocator<void>,std::shared_ptr<manifold::Manifold::Impl>&>
            ((__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)local_58,&local_69,
             (shared_ptr<manifold::Manifold::Impl> *)local_68);
  uVar2 = local_58._0_8_;
  uVar3 = local_58._8_8_;
  local_58._0_16_ = (undefined1  [16])0x0;
  *(undefined8 *)this = uVar2;
  *(undefined8 *)(this + 8) = uVar3;
  p_Var1 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
  if (p_Var1 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(p_Var1 + 8) = *(int *)(p_Var1 + 8) + 1;
      UNLOCK();
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var1);
    }
    else {
      *(int *)(p_Var1 + 8) = *(int *)(p_Var1 + 8) + 1;
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var1);
    }
  }
  if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_60);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* manifold::Manifold::CalculateNormals(int, double) const */

Manifold * __thiscall
manifold::Manifold::CalculateNormals(Manifold *this,int param_1,double param_2)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 uVar2;
  undefined8 this_00;
  int iVar3;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  undefined1 local_69;
  int local_68 [2];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode((Manifold *)CONCAT44(in_register_00000034,param_1));
  manifold::CsgLeafNode::GetImpl();
  std::shared_ptr<manifold::Manifold::Impl>::
  shared_ptr<std::allocator<void>,manifold::Manifold::Impl_const&>
            ((shared_ptr<manifold::Manifold::Impl> *)local_68,&local_69,local_58._0_8_);
  if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_58._8_8_ !=
      (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release
              ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_58._8_8_);
  }
  manifold::Manifold::Impl::SetNormals(local_68[0],param_2);
  std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
  __shared_ptr<std::allocator<void>,std::shared_ptr<manifold::Manifold::Impl>&>
            ((__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)local_58,&local_69,
             (shared_ptr<manifold::Manifold::Impl> *)local_68);
  uVar2 = local_58._0_8_;
  this_00 = local_58._8_8_;
  local_58._0_16_ = (undefined1  [16])0x0;
  *(undefined8 *)this = uVar2;
  *(undefined8 *)(this + 8) = this_00;
  if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)this_00 !=
      (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(this_00 + 8);
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    }
    if (*(long *)(this_00 + 8) == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar3 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar3 = *(int *)(this_00 + 8);
        *(int *)(this_00 + 8) = iVar3 + -1;
      }
      if (iVar3 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                  ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)this_00);
      }
    }
    if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_58._8_8_ !=
        (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release
                ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_58._8_8_);
    }
  }
  if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001057b0) */
/* manifold::Manifold::SmoothByNormals(int) const */

Manifold * __thiscall manifold::Manifold::SmoothByNormals(Manifold *this,int param_1)

{
  ulong uVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  undefined1 local_69;
  int local_68 [2];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode((Manifold *)CONCAT44(in_register_00000034,param_1));
  manifold::CsgLeafNode::GetImpl();
  std::shared_ptr<manifold::Manifold::Impl>::
  shared_ptr<std::allocator<void>,manifold::Manifold::Impl_const&>
            ((shared_ptr<manifold::Manifold::Impl> *)local_68,&local_69,local_58._0_8_);
  if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_58._8_8_ !=
      (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release
              ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_58._8_8_);
  }
  GetCsgLeafNode((Manifold *)CONCAT44(in_register_00000034,param_1));
  manifold::CsgLeafNode::GetImpl();
  uVar1 = *(ulong *)(local_58._0_8_ + 0x68);
  if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_58._8_8_ !=
      (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release
              ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_58._8_8_);
  }
  if (2 < uVar1) {
    manifold::Manifold::Impl::CreateTangents(local_68[0]);
  }
  std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
  __shared_ptr<std::allocator<void>,std::shared_ptr<manifold::Manifold::Impl>&>
            ((__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)local_58,&local_69,
             (shared_ptr<manifold::Manifold::Impl> *)local_68);
  uVar3 = local_58._0_8_;
  uVar4 = local_58._8_8_;
  local_58._0_16_ = (undefined1  [16])0x0;
  *(undefined8 *)this = uVar3;
  *(undefined8 *)(this + 8) = uVar4;
  p_Var2 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
  if (p_Var2 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(p_Var2 + 8) = *(int *)(p_Var2 + 8) + 1;
      UNLOCK();
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var2);
    }
    else {
      *(int *)(p_Var2 + 8) = *(int *)(p_Var2 + 8) + 1;
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var2);
    }
  }
  if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var2 = local_60 + 8;
    if (*(long *)(local_60 + 8) == 0x100000001) {
      *(undefined8 *)(local_60 + 8) = 0;
      (**(code **)(*(long *)local_60 + 0x10))(local_60);
      (**(code **)(*(long *)local_60 + 0x18))(local_60);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar5 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
      }
      else {
        iVar5 = *(int *)(local_60 + 8);
        *(int *)(local_60 + 8) = iVar5 + -1;
      }
      if (iVar5 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* WARNING: Removing unreachable block (ram,0x001059b8) */
/* manifold::Manifold::Refine(int) const */

undefined8 * manifold::Manifold::Refine(int param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int in_EDX;
  Manifold *in_RSI;
  undefined4 in_register_0000003c;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined1 local_89;
  undefined8 local_88;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined4 local_5c;
  code *local_58;
  code *pcStack_50;
  long local_40;
  
  puVar5 = (undefined8 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(in_RSI);
  manifold::CsgLeafNode::GetImpl();
  std::shared_ptr<manifold::Manifold::Impl>::
  shared_ptr<std::allocator<void>,manifold::Manifold::Impl_const&>
            ((shared_ptr<manifold::Manifold::Impl> *)&local_88,&local_89,local_78._0_8_);
  uVar2 = local_78._8_8_;
  if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_78._8_8_ !=
      (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_78._8_8_ + 8);
    if (*(long *)(local_78._8_8_ + 8) == 0x100000001) {
      *(undefined8 *)(local_78._8_8_ + 8) = 0;
      (**(code **)(*(long *)local_78._8_8_ + 0x10))(local_78._8_8_);
      (**(code **)(*(long *)uVar2 + 0x18))(uVar2);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar4 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar4 = *(int *)(local_78._8_8_ + 8);
        *(int *)(local_78._8_8_ + 8) = iVar4 + -1;
      }
      if (iVar4 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                  ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_78._8_8_);
      }
    }
  }
  if (1 < in_EDX) {
    local_64 = 0;
    local_5c = 0;
    local_58 = std::
               _Function_handler<int(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>),manifold::Manifold::Refine(int)const::{lambda(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>)#1}>
               ::_M_manager;
    pcStack_50 = std::
                 _Function_handler<int(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>),manifold::Manifold::Refine(int)const::{lambda(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>)#1}>
                 ::_M_invoke;
    manifold::Manifold::Impl::Refine(local_88,local_68,0);
    if (local_58 != (code *)0x0) {
      (*local_58)(local_68,local_68,3);
    }
  }
  std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
  __shared_ptr<std::allocator<void>,std::shared_ptr<manifold::Manifold::Impl>&>
            ((__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)local_78,&local_89,
             (shared_ptr<manifold::Manifold::Impl> *)&local_88);
  uVar2 = local_78._0_8_;
  uVar3 = local_78._8_8_;
  local_78 = (undefined1  [16])0x0;
  *puVar5 = uVar2;
  puVar5[1] = uVar3;
  p_Var1 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)puVar5[1];
  if (p_Var1 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(p_Var1 + 8) = *(int *)(p_Var1 + 8) + 1;
      UNLOCK();
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var1);
    }
    else {
      *(int *)(p_Var1 + 8) = *(int *)(p_Var1 + 8) + 1;
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var1);
    }
  }
  if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_80);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* WARNING: Removing unreachable block (ram,0x00105bac) */
/* manifold::Manifold::RefineToLength(double) const */

void manifold::Manifold::RefineToLength(double param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  Manifold *in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  ulong uVar5;
  undefined1 local_89;
  undefined8 local_88;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_80;
  undefined1 local_78 [16];
  ulong local_68 [2];
  code *local_58;
  code *pcStack_50;
  long local_40;
  
  uVar5 = (ulong)param_1 & _LC26;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(in_RSI);
  manifold::CsgLeafNode::GetImpl();
  std::shared_ptr<manifold::Manifold::Impl>::
  shared_ptr<std::allocator<void>,manifold::Manifold::Impl_const&>
            ((shared_ptr<manifold::Manifold::Impl> *)&local_88,&local_89,local_78._0_8_);
  uVar2 = local_78._8_8_;
  if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_78._8_8_ !=
      (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_78._8_8_ + 8);
    if (*(long *)(local_78._8_8_ + 8) == 0x100000001) {
      *(undefined8 *)(local_78._8_8_ + 8) = 0;
      (**(code **)(*(long *)local_78._8_8_ + 0x10))(local_78._8_8_);
      (**(code **)(*(long *)uVar2 + 0x18))(uVar2);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar4 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar4 = *(int *)(local_78._8_8_ + 8);
        *(int *)(local_78._8_8_ + 8) = iVar4 + -1;
      }
      if (iVar4 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                  ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_78._8_8_);
      }
    }
  }
  local_68[1] = 0;
  local_58 = std::
             _Function_handler<int(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>),manifold::Manifold::RefineToLength(double)const::{lambda(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>)#1}>
             ::_M_manager;
  pcStack_50 = std::
               _Function_handler<int(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>),manifold::Manifold::RefineToLength(double)const::{lambda(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>)#1}>
               ::_M_invoke;
  local_68[0] = uVar5;
  manifold::Manifold::Impl::Refine(local_88,local_68,0);
  if (local_58 != (code *)0x0) {
    (*local_58)(local_68,local_68,3);
  }
  std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
  __shared_ptr<std::allocator<void>,std::shared_ptr<manifold::Manifold::Impl>&>
            ((__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)local_78,&local_89,
             (shared_ptr<manifold::Manifold::Impl> *)&local_88);
  uVar2 = local_78._0_8_;
  uVar3 = local_78._8_8_;
  local_78 = (undefined1  [16])0x0;
  *in_RDI = uVar2;
  in_RDI[1] = uVar3;
  p_Var1 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)in_RDI[1];
  if (p_Var1 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(p_Var1 + 8) = *(int *)(p_Var1 + 8) + 1;
      UNLOCK();
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var1);
    }
    else {
      *(int *)(p_Var1 + 8) = *(int *)(p_Var1 + 8) + 1;
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var1);
    }
  }
  if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_80);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00105dd8) */
/* manifold::Manifold::RefineToTolerance(double) const */

void manifold::Manifold::RefineToTolerance(double param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  Manifold *in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  undefined1 local_89;
  long local_88;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_80;
  undefined1 local_78 [16];
  ulong local_68 [2];
  code *local_58;
  code *pcStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(in_RSI);
  manifold::CsgLeafNode::GetImpl();
  std::shared_ptr<manifold::Manifold::Impl>::
  shared_ptr<std::allocator<void>,manifold::Manifold::Impl_const&>
            ((shared_ptr<manifold::Manifold::Impl> *)&local_88,&local_89,local_78._0_8_);
  uVar2 = local_78._8_8_;
  if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_78._8_8_ !=
      (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_78._8_8_ + 8);
    if (*(long *)(local_78._8_8_ + 8) == 0x100000001) {
      *(undefined8 *)(local_78._8_8_ + 8) = 0;
      (**(code **)(*(long *)local_78._8_8_ + 0x10))(local_78._8_8_);
      (**(code **)(*(long *)uVar2 + 0x18))(uVar2);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar4 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar4 = *(int *)(local_78._8_8_ + 8);
        *(int *)(local_78._8_8_ + 8) = iVar4 + -1;
      }
      if (iVar4 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                  ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_78._8_8_);
      }
    }
  }
  if (*(long *)(local_88 + 0xb0) != 0) {
    local_68[1] = 0;
    local_68[0] = (ulong)param_1 & _LC26;
    local_58 = std::
               _Function_handler<int(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>),manifold::Manifold::RefineToTolerance(double)const::{lambda(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>)#1}>
               ::_M_manager;
    pcStack_50 = std::
                 _Function_handler<int(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>),manifold::Manifold::RefineToTolerance(double)const::{lambda(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>)#1}>
                 ::_M_invoke;
    manifold::Manifold::Impl::Refine(local_88,local_68,1);
    if (local_58 != (code *)0x0) {
      (*local_58)(local_68,local_68,3);
    }
  }
  std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
  __shared_ptr<std::allocator<void>,std::shared_ptr<manifold::Manifold::Impl>&>
            ((__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)local_78,&local_89,
             (shared_ptr<manifold::Manifold::Impl> *)&local_88);
  uVar2 = local_78._0_8_;
  uVar3 = local_78._8_8_;
  local_78 = (undefined1  [16])0x0;
  *in_RDI = uVar2;
  in_RDI[1] = uVar3;
  p_Var1 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)in_RDI[1];
  if (p_Var1 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(p_Var1 + 8) = *(int *)(p_Var1 + 8) + 1;
      UNLOCK();
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var1);
    }
    else {
      *(int *)(p_Var1 + 8) = *(int *)(p_Var1 + 8) + 1;
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var1);
    }
  }
  if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_80);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x001060b4) */
/* manifold::Manifold::Hull() const */

void manifold::Manifold::Hull(void)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  Manifold *in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_68;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  long local_58;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator_new(0x198);
  uVar2 = _LC18;
  uVar1 = _LC5;
  *(undefined4 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x10) = uVar2;
  *(undefined8 *)(this_00 + 0x18) = uVar2;
  uVar3 = _LC21;
  uVar2 = _LC18;
  *(undefined8 *)(this_00 + 8) = uVar1;
  *(undefined8 *)(this_00 + 0x20) = uVar2;
  *(undefined8 *)(this_00 + 0x28) = uVar3;
  uVar1 = _LC21;
  *(undefined ***)this_00 = &PTR___Sp_counted_ptr_inplace_001113b0;
  uVar2 = _LC24;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x30) = uVar1;
  *(undefined8 *)(this_00 + 0x38) = uVar1;
  uVar1 = _LC23;
  *(undefined8 *)(this_00 + 0xd0) = uVar2;
  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this_00 + 0x108) = this_00 + 0xf8;
  *(undefined8 *)(this_00 + 0x40) = uVar1;
  *(undefined8 *)(this_00 + 0x48) = uVar1;
  *(undefined1 (*) [16])(this_00 + 0x60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0xa8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0xc0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0xe0) = (undefined1  [16])0x0;
  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this_00 + 0x110) = this_00 + 0xf8;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined4 *)(this_00 + 0xf8) = 0;
  *(undefined8 *)(this_00 + 0x100) = 0;
  *(undefined8 *)(this_00 + 0x118) = 0;
  *(undefined8 *)(this_00 + 0x120) = 0;
  *(undefined1 (*) [16])(this_00 + 0x128) = (undefined1  [16])0x0;
  *(undefined8 *)(this_00 + 0x138) = 0;
  *(undefined8 *)(this_00 + 0x150) = 0;
  *(undefined8 *)(this_00 + 0x168) = 0;
  *(undefined8 *)(this_00 + 0x180) = 0;
  *(undefined1 (*) [16])(this_00 + 0x140) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x158) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x170) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
  local_68 = this_00 + 0x10;
  local_60 = this_00;
  GetCsgLeafNode(in_RSI);
  manifold::CsgLeafNode::GetImpl();
  local_48 = *(undefined1 (*) [16])(local_58 + 0x48);
  manifold::Manifold::Impl::Hull
            (this_00 + 0x10,
             (__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)local_48);
  if (local_50 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_50);
  }
  std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
  __shared_ptr<std::allocator<void>,std::shared_ptr<manifold::Manifold::Impl>&>
            ((__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)local_48,&local_58,
             &local_68);
  uVar1 = local_48._0_8_;
  uVar2 = local_48._8_8_;
  local_48 = (undefined1  [16])0x0;
  *in_RDI = uVar1;
  in_RDI[1] = uVar2;
  this = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)in_RDI[1];
  if (this != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      UNLOCK();
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(this);
    }
    else {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(this);
    }
    this_00 = local_60;
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010606d;
  }
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(this_00);
LAB_0010606d:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* manifold::Manifold::Hull(std::vector<manifold::Manifold, std::allocator<manifold::Manifold> >
   const&) */

vector * manifold::Manifold::Hull(vector *param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  long in_FS_OFFSET;
  vector avStack_38 [8];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  manifold::Manifold::Compose(avStack_38);
  Hull();
  if (local_30 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_30 + 8;
    if (*(long *)(local_30 + 8) == 0x100000001) {
      *(undefined8 *)(local_30 + 8) = 0;
      (**(code **)(*(long *)local_30 + 0x10))(local_30);
      (**(code **)(*(long *)local_30 + 0x18))(local_30);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar2 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar2 = *(int *)(local_30 + 8);
        *(int *)(local_30 + 8) = iVar2 + -1;
      }
      if (iVar2 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_30);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00106480) */
/* manifold::Manifold::Hull(std::vector<linalg::vec<double, 3>, std::allocator<linalg::vec<double,
   3> > > const&) */

Manifold * __thiscall manifold::Manifold::Hull(Manifold *this,vector *param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 *__src;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  undefined8 *__dest;
  size_t __size;
  long in_FS_OFFSET;
  undefined1 local_69;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_68;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator_new(0x198);
  uVar4 = _LC18;
  uVar3 = _LC5;
  *(undefined4 *)(this_00 + 0x50) = 0;
  p_Var1 = this_00 + 0x10;
  *(undefined8 *)(this_00 + 0x10) = uVar4;
  *(undefined8 *)(this_00 + 0x18) = uVar4;
  uVar5 = _LC21;
  uVar4 = _LC18;
  *(undefined8 *)(this_00 + 8) = uVar3;
  *(undefined8 *)(this_00 + 0x20) = uVar4;
  *(undefined8 *)(this_00 + 0x28) = uVar5;
  uVar3 = _LC21;
  *(undefined ***)this_00 = &PTR___Sp_counted_ptr_inplace_001113b0;
  uVar4 = _LC24;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x30) = uVar3;
  *(undefined8 *)(this_00 + 0x38) = uVar3;
  uVar3 = _LC23;
  *(undefined8 *)(this_00 + 0xd0) = uVar4;
  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this_00 + 0x108) = this_00 + 0xf8;
  *(undefined8 *)(this_00 + 0x40) = uVar3;
  *(undefined8 *)(this_00 + 0x48) = uVar3;
  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this_00 + 0x110) = this_00 + 0xf8;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined4 *)(this_00 + 0xf8) = 0;
  *(undefined8 *)(this_00 + 0x100) = 0;
  *(undefined8 *)(this_00 + 0x118) = 0;
  *(undefined8 *)(this_00 + 0x120) = 0;
  *(undefined1 (*) [16])(this_00 + 0x60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0xa8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0xc0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0xe0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x128) = (undefined1  [16])0x0;
  __src = *(undefined8 **)param_1;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined8 *)(this_00 + 0x138) = 0;
  __size = lVar2 - (long)__src;
  *(undefined8 *)(this_00 + 0x150) = 0;
  local_58._8_8_ = ((long)__size >> 3) * -0x5555555555555555;
  *(undefined1 (*) [16])(this_00 + 0x140) = (undefined1  [16])0x0;
  *(undefined8 *)(this_00 + 0x168) = 0;
  *(undefined8 *)(this_00 + 0x180) = 0;
  *(undefined1 (*) [16])(this_00 + 0x158) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x170) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
  local_68 = p_Var1;
  local_60 = this_00;
  if (local_58._8_8_ == 0) {
    local_58 = ZEXT816(0);
    manifold::Manifold::Impl::Hull(p_Var1,local_58);
  }
  else {
    __dest = (undefined8 *)malloc(__size);
    if ((long)__size < 0x19) {
      if (__size == 0x18) {
        uVar3 = __src[1];
        *__dest = *__src;
        __dest[1] = uVar3;
        __dest[2] = __src[2];
        goto LAB_00106432;
      }
      local_58._0_8_ = __dest;
      manifold::Manifold::Impl::Hull(p_Var1,local_58);
      if (__dest == (undefined8 *)0x0) goto LAB_00106387;
    }
    else {
      __dest = (undefined8 *)memmove(__dest,__src,__size);
LAB_00106432:
      local_58._0_8_ = __dest;
      manifold::Manifold::Impl::Hull(p_Var1,local_58);
    }
    free(__dest);
  }
LAB_00106387:
  std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
  __shared_ptr<std::allocator<void>,std::shared_ptr<manifold::Manifold::Impl>&>
            ((__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)local_58,&local_69,
             &local_68);
  uVar3 = local_58._0_8_;
  uVar4 = local_58._8_8_;
  local_58 = (undefined1  [16])0x0;
  *(undefined8 *)this = uVar3;
  *(undefined8 *)(this + 8) = uVar4;
  p_Var1 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
  if (p_Var1 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(p_Var1 + 8) = *(int *)(p_Var1 + 8) + 1;
      UNLOCK();
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var1);
    }
    else {
      *(int *)(p_Var1 + 8) = *(int *)(p_Var1 + 8) + 1;
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var1);
    }
    this_00 = local_60;
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001063d7;
  }
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(this_00);
LAB_001063d7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010700a) */
/* manifold::Manifold::SetProperties(int, std::function<void (double*, linalg::vec<double, 3>,
   double const*)>) const */

undefined8 *
manifold::Manifold::SetProperties(undefined8 *param_1,Manifold *param_2,uint param_3,void **param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 this;
  long lVar5;
  code *pcVar6;
  undefined8 *puVar7;
  void **ppvVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  size_t sVar14;
  long lVar15;
  int *piVar16;
  undefined4 *puVar17;
  int iVar18;
  code *pcVar19;
  code *pcVar20;
  code *pcVar21;
  int iVar22;
  void **ppvVar23;
  void *pvVar24;
  undefined4 *puVar25;
  ulong uVar26;
  long in_FS_OFFSET;
  undefined1 uVar27;
  void **local_240;
  undefined8 *local_220;
  void *local_1f8;
  undefined8 *local_1f0;
  long local_1e8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_1e0;
  undefined1 local_1d8 [16];
  undefined8 local_1c8;
  void *local_1b8;
  int local_1b0;
  undefined8 *local_1a8;
  int local_1a0;
  code *local_198;
  long lStack_190;
  code *local_188;
  undefined1 local_180 [16];
  code *local_170;
  void *pvStack_168;
  void *local_158;
  int local_150;
  undefined8 *local_148;
  int local_140;
  code *local_138;
  long local_130;
  code *local_128;
  undefined1 local_120 [16];
  code *local_110;
  void *pvStack_108;
  void *local_f8;
  int local_f0;
  undefined1 local_ec [12];
  int local_e0;
  code *local_d8;
  long local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  code *local_b0;
  undefined8 local_a8;
  void *local_98;
  int local_90;
  undefined1 local_8c [12];
  int local_80;
  code *local_78;
  long local_70;
  code *local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  ppvVar23 = (void **)(ulong)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(param_2);
  manifold::CsgLeafNode::GetImpl();
  std::shared_ptr<manifold::Manifold::Impl>::
  shared_ptr<std::allocator<void>,manifold::Manifold::Impl_const&>
            ((shared_ptr<manifold::Manifold::Impl> *)&local_1e8,&local_1f0,local_1d8._0_8_);
  if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_1d8._8_8_ !=
      (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release
              ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_1d8._8_8_);
  }
  GetCsgLeafNode(param_2);
  manifold::CsgLeafNode::GetImpl();
  pvVar24 = (void *)(ulong)*(uint *)(local_1d8._0_8_ + 0xc4);
  if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_1d8._8_8_ !=
      (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release
              ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_1d8._8_8_);
  }
  local_220 = (undefined8 *)0x0;
  puVar11 = *(undefined8 **)(local_1e8 + 200);
  if (*(long *)(local_1e8 + 0xd0) != 0) {
    sVar14 = *(long *)(local_1e8 + 0xd0) * 8;
    local_220 = (undefined8 *)malloc(sVar14);
    if ((long)sVar14 < 9) {
      if (sVar14 == 8) {
        *local_220 = *puVar11;
      }
    }
    else {
      memmove(local_220,puVar11,sVar14);
    }
  }
  if (param_3 == 0) {
    lVar15 = *(long *)(local_1e8 + 0x130);
    *(undefined8 *)(local_1e8 + 0x130) = 0;
    if (lVar15 != 0) {
      uVar10 = 0;
      if (*(void **)(local_1e8 + 0x128) != (void *)0x0) {
        free(*(void **)(local_1e8 + 0x128));
        uVar10 = *(undefined8 *)(local_1e8 + 0x130);
      }
      *(undefined8 *)(local_1e8 + 0x128) = 0;
      *(undefined8 *)(local_1e8 + 0x138) = uVar10;
    }
    lVar15 = *(long *)(local_1e8 + 0xd0);
    *(undefined8 *)(local_1e8 + 0xd0) = 0;
    iVar22 = 0;
    if (lVar15 != 0) {
      uVar10 = 0;
      if (*(void **)(local_1e8 + 200) != (void *)0x0) {
        free(*(void **)(local_1e8 + 200));
        uVar10 = *(undefined8 *)(local_1e8 + 0xd0);
      }
      *(undefined8 *)(local_1e8 + 200) = 0;
      *(undefined8 *)(local_1e8 + 0xd8) = uVar10;
    }
  }
  else {
    uVar26 = (ulong)(int)param_3;
    lVar15 = local_1e8;
    if (*(long *)(local_1e8 + 0x130) == 0) {
      GetCsgLeafNode(param_2);
      manifold::CsgLeafNode::GetImpl();
      iVar22 = (int)(*(ulong *)(local_1d8._0_8_ + 0x68) / 3);
      if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_1d8._8_8_ !=
          (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release
                  ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_1d8._8_8_);
      }
      pcVar19 = (code *)(long)iVar22;
      pcVar6 = *(code **)(local_1e8 + 0x130);
      pcVar21 = (code *)((long)pcVar19 * 2);
      if (pcVar19 <= *(code **)(local_1e8 + 0x138)) {
        if (pcVar6 < pcVar19) {
          puVar11 = *(undefined8 **)(local_1e8 + 0x128);
          local_240 = (void **)((long)pcVar19 * 0xc);
          pcVar20 = pcVar6;
          goto LAB_00106ac7;
        }
        *(code **)(local_1e8 + 0x130) = pcVar19;
        if (pcVar6 <= pcVar21) goto LAB_00106b0f;
        if (pcVar19 != (code *)0x0) goto LAB_001071d4;
        puVar11 = *(undefined8 **)(local_1e8 + 0x128);
        puVar12 = (undefined8 *)0x0;
        if (puVar11 != (undefined8 *)0x0) goto LAB_00106fbc;
        *(undefined8 *)(local_1e8 + 0x138) = 0;
        goto LAB_00106bc9;
      }
      local_240 = (void **)((long)pcVar19 * 0xc);
      puVar11 = (undefined8 *)malloc((size_t)local_240);
      puVar12 = *(undefined8 **)(local_1e8 + 0x128);
      if (pcVar6 == (code *)0x0) goto LAB_00107067;
      sVar14 = (long)pcVar6 * 0xc;
      uVar27 = sVar14 == 0xc;
      if ((long)sVar14 < 0xd) goto LAB_001071ee;
      puVar11 = (undefined8 *)memmove(puVar11,puVar12,sVar14);
      puVar12 = *(undefined8 **)(local_1e8 + 0x128);
      goto LAB_00107067;
    }
    lVar5 = NumPropVert(param_2);
    lVar5 = lVar5 * uVar26;
    while( true ) {
      iVar22 = (int)ppvVar23;
      pvVar9 = (void *)0x0;
      lVar13 = 0;
      if (lVar5 != 0) {
        pvVar9 = calloc(lVar5 * 8,1);
        lVar13 = lVar5;
      }
      if (*(void **)(lVar15 + 200) != (void *)0x0) {
        free(*(void **)(lVar15 + 200));
      }
      *(long *)(lVar15 + 0xd8) = lVar13;
      local_198 = *(code **)(lVar15 + 0x48);
      *(long *)(lVar15 + 0xd0) = lVar5;
      local_1a8 = local_220;
      lStack_190 = *(long *)(lVar15 + 0x128);
      *(void **)(lVar15 + 200) = pvVar9;
      local_188 = *(code **)(lVar15 + 0x60);
      local_1b8 = pvVar9;
      local_1b0 = iVar22;
      local_1a0 = (int)pvVar24;
      if ((code *)param_4[2] == (code *)0x0) {
        local_180 = (undefined1  [16])0x0;
        local_170 = std::
                    _Function_handler<void(double*,linalg::vec<double,3>,double_const*),manifold::Manifold::SetProperties(int,std::function<void(double*,linalg::vec<double,3>,double_const*)>)const::{lambda(double*,linalg::vec<double,3>,double_const*)#1}>
                    ::_M_manager;
        pvStack_168 = (void *)0x100000;
      }
      else {
        local_170 = (code *)0x0;
        local_180 = (undefined1  [16])0x0;
        pvStack_168 = (void *)0x0;
        (*(code *)param_4[2])(local_180,param_4,2);
        local_170 = (code *)param_4[2];
        pvStack_168 = param_4[3];
      }
      GetCsgLeafNode(param_2);
      manifold::CsgLeafNode::GetImpl();
      uVar3 = *(ulong *)(local_1d8._0_8_ + 0x68);
      if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_1d8._8_8_ !=
          (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release
                  ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_1d8._8_8_);
      }
      local_110 = (code *)0x0;
      pvStack_108 = (void *)0x0;
      local_158 = local_1b8;
      local_150 = local_1b0;
      local_148 = local_1a8;
      local_140 = local_1a0;
      local_138 = local_198;
      local_130 = lStack_190;
      local_128 = local_188;
      local_120 = (undefined1  [16])0x0;
      if (local_170 == (code *)0x0) {
        local_50 = ZEXT816(0);
        local_60 = (undefined1  [16])0x0;
        pcVar19 = local_170;
        local_98 = local_1b8;
        local_90 = local_1b0;
        local_8c._4_8_ = local_1a8;
        local_80 = local_1a0;
        local_78 = local_198;
        local_70 = lStack_190;
        local_68 = local_188;
      }
      else {
        (*local_170)(local_120,local_180,2);
        local_98 = local_158;
        local_90 = local_150;
        local_8c._4_8_ = local_148;
        local_80 = local_140;
        local_78 = local_138;
        local_70 = local_130;
        local_68 = local_128;
        local_50 = ZEXT816(0);
        local_110 = local_170;
        pvStack_108 = pvStack_168;
        local_60 = (undefined1  [16])0x0;
        pcVar19 = local_170;
        if (local_170 != (code *)0x0) {
          (*local_170)(local_60,local_120,2);
          local_50._8_8_ = pvStack_108;
          local_50._0_8_ = local_110;
          pcVar19 = local_110;
        }
      }
      pvVar9 = _LC27;
      if (uVar3 < 3) break;
      uVar26 = 0;
      local_240 = (void **)local_ec;
      param_4 = &local_1f8;
LAB_00106938:
      local_f0 = 2;
      uVar4 = (int)uVar26 * 3;
      param_2 = (Manifold *)(ulong)uVar4;
      local_f8 = pvVar9;
      lVar5 = (long)(int)uVar26 * 0xc;
      ppvVar23 = &local_f8;
      while( true ) {
        pvVar24 = local_98;
        uVar1 = *(uint *)ppvVar23;
        puVar12 = (undefined8 *)(ulong)uVar1;
        piVar16 = (int *)(local_70 + lVar5);
        lVar13 = (long)*(int *)(local_68 + (long)(int)(uVar1 + uVar4) * 0xc);
        if (uVar1 == 0) {
          iVar18 = *piVar16;
        }
        else if (uVar1 == 1) {
          iVar18 = piVar16[1];
        }
        else {
          iVar18 = piVar16[2];
        }
        local_1f8 = (void *)((long)local_98 + (long)(local_90 * iVar18) * 8);
        local_1f0 = (undefined8 *)(local_8c._4_8_ + (long)(iVar18 * local_80) * 8);
        local_1d8 = *(undefined1 (*) [16])(local_78 + lVar13 * 0x18);
        local_1c8 = *(undefined8 *)((undefined1 (*) [16])(local_78 + lVar13 * 0x18))[1];
        uVar27 = pcVar19 == (code *)0x0;
        if ((bool)uVar27) break;
        ppvVar23 = (void **)((long)ppvVar23 + 4);
        (*(code *)local_50._8_8_)
                  (local_60,param_4,
                   (__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)local_1d8,
                   &local_1f0);
        pcVar19 = (code *)local_50._0_8_;
        if (ppvVar23 == local_240) goto LAB_00106c58;
      }
      pcVar6 = local_68;
      pcVar21 = local_78;
      puVar11 = (undefined8 *)local_8c._4_8_;
      std::__throw_bad_function_call();
      iVar22 = (int)lVar13;
      local_1e8 = lVar5;
LAB_001071ee:
      if ((bool)uVar27) {
        *puVar11 = *puVar12;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar12 + 1);
        lVar15 = local_1e8;
LAB_0010706c:
        free(puVar12);
        local_1e8 = lVar15;
        pcVar20 = pcVar6;
      }
      else {
LAB_00107067:
        lVar15 = local_1e8;
        pcVar20 = pcVar6;
        if (puVar12 != (undefined8 *)0x0) goto LAB_0010706c;
      }
      pcVar6 = *(code **)(local_1e8 + 0x130);
      *(undefined8 **)(local_1e8 + 0x128) = puVar11;
      *(code **)(local_1e8 + 0x138) = pcVar19;
      if (pcVar6 < pcVar19) {
LAB_00106ac7:
        puVar12 = (undefined8 *)((long)puVar11 + (long)pcVar6 * 0xc);
        if ((undefined8 *)((long)puVar11 + (long)local_240) == puVar12) goto LAB_001070c1;
        do {
          *puVar12 = 0;
          puVar7 = (undefined8 *)((long)puVar12 + 0xc);
          *(undefined4 *)(puVar12 + 1) = 0;
          puVar12 = puVar7;
        } while ((undefined8 *)((long)puVar11 + (long)local_240) != puVar7);
        *(code **)(local_1e8 + 0x130) = pcVar19;
        lVar15 = local_1e8;
        if (pcVar21 < pcVar20) {
LAB_001071d4:
          local_240 = (void **)((long)(pcVar19 + (long)pcVar21) * 4);
          goto LAB_001070d1;
        }
      }
      else {
LAB_001070c1:
        *(code **)(local_1e8 + 0x130) = pcVar19;
        lVar15 = local_1e8;
        if (pcVar21 < pcVar20) {
LAB_001070d1:
          puVar12 = (undefined8 *)malloc((size_t)local_240);
          puVar11 = *(undefined8 **)(lVar15 + 0x128);
          if ((long)local_240 < 0xd) {
            if (local_240 != (void **)0xc) goto LAB_0010711d;
            *puVar12 = *puVar11;
            *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar11 + 1);
LAB_00106fbc:
            free(puVar11);
            local_1e8 = lVar15;
          }
          else {
            puVar12 = (undefined8 *)memmove(puVar12,puVar11,(size_t)local_240);
            puVar11 = *(undefined8 **)(lVar15 + 0x128);
LAB_0010711d:
            local_1e8 = lVar15;
            if (puVar11 != (undefined8 *)0x0) goto LAB_00106fbc;
          }
          *(undefined8 **)(local_1e8 + 0x128) = puVar12;
          *(undefined8 *)(local_1e8 + 0x138) = *(undefined8 *)(local_1e8 + 0x130);
        }
      }
LAB_00106b0f:
      pvVar9 = _LC27;
      lVar15 = local_1e8;
      if (0 < iVar22) {
        lVar5 = *(long *)(local_1e8 + 0x60);
        iVar18 = 0;
        puVar17 = *(undefined4 **)(local_1e8 + 0x128);
        do {
          local_90 = 2;
          local_98 = pvVar9;
          ppvVar8 = &local_98;
          do {
            iVar2 = *(int *)ppvVar8;
            puVar25 = puVar17;
            if ((iVar2 != 0) && (puVar25 = puVar17 + 2, iVar2 == 1)) {
              puVar25 = puVar17 + 1;
            }
            ppvVar8 = (void **)((long)ppvVar8 + 4);
            *puVar25 = *(undefined4 *)(lVar5 + (long)(iVar2 + iVar18) * 0xc);
          } while (ppvVar8 != (void **)local_8c);
          iVar18 = iVar18 + 3;
          puVar17 = puVar17 + 3;
        } while (iVar22 * 3 != iVar18);
        pvVar24 = (void *)((ulong)pvVar24 & 0xffffffff);
      }
LAB_00106bc9:
      GetCsgLeafNode(param_2);
      manifold::CsgLeafNode::GetImpl();
      lVar5 = *(long *)(local_1d8._0_8_ + 0x50);
      if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_1d8._8_8_ !=
          (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release
                  ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_1d8._8_8_);
      }
      lVar5 = lVar5 * uVar26;
    }
LAB_00106caf:
    local_a8 = local_50._8_8_;
    local_f8 = local_98;
    local_f0 = local_90;
    local_ec._4_8_ = local_8c._4_8_;
    local_e0 = local_80;
    local_d8 = local_78;
    local_d0 = local_70;
    local_c8 = local_68;
    if (pcVar19 != (code *)0x0) {
      local_50 = (undefined1  [16])0x0;
      local_c0 = local_60._0_8_;
      uStack_b8 = local_60._8_8_;
      local_b0 = pcVar19;
      (*pcVar19)(&local_c0,&local_c0,3);
      if ((code *)local_50._0_8_ != (code *)0x0) {
        (*(code *)local_50._0_8_)(local_60,local_60,3);
      }
    }
    if (local_110 != (code *)0x0) {
      (*local_110)(local_120,local_120,3);
    }
    local_1e8 = lVar15;
    if (local_170 != (code *)0x0) {
      (*local_170)(local_180,local_180,3);
    }
  }
  *(int *)(local_1e8 + 0xc4) = iVar22;
  std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
  __shared_ptr<std::allocator<void>,std::shared_ptr<manifold::Manifold::Impl>&>
            ((__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)local_1d8,&local_1f0,
             (shared_ptr<manifold::Manifold::Impl> *)&local_1e8);
  uVar10 = local_1d8._0_8_;
  this = local_1d8._8_8_;
  local_1d8 = (undefined1  [16])0x0;
  *param_1 = uVar10;
  param_1[1] = this;
  if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)this !=
      (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      UNLOCK();
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release
                ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)this);
    }
    else {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release
                ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)this);
    }
  }
  if (local_220 != (undefined8 *)0x0) {
    free(local_220);
  }
  if (local_1e0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_1e0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00106c58:
  uVar26 = uVar26 + 1;
  if (uVar3 / 3 == uVar26) goto LAB_00106caf;
  goto LAB_00106938;
}



/* WARNING: Removing unreachable block (ram,0x001074c8) */
/* manifold::Manifold::SmoothOut(double, double) const */

void manifold::Manifold::SmoothOut(double param_1,double param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  void *__ptr;
  void *__ptr_00;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *__dest;
  size_t sVar8;
  Manifold *in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  undefined8 *local_c0;
  undefined1 local_69;
  long local_68;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  undefined1 local_58 [16];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(in_RSI);
  manifold::CsgLeafNode::GetImpl();
  std::shared_ptr<manifold::Manifold::Impl>::
  shared_ptr<std::allocator<void>,manifold::Manifold::Impl_const&>
            ((shared_ptr<manifold::Manifold::Impl> *)&local_68,&local_69,local_58._0_8_);
  if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_58._8_8_ !=
      (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release
              ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_58._8_8_);
  }
  GetCsgLeafNode(in_RSI);
  manifold::CsgLeafNode::GetImpl();
  uVar2 = *(ulong *)(local_58._0_8_ + 0x68);
  if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_58._8_8_ !=
      (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release
              ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_58._8_8_);
  }
  if (2 < uVar2) {
    if (param_2 == 0.0) {
      lVar3 = *(long *)(local_68 + 0xd0);
      uVar1 = *(undefined4 *)(local_68 + 0xc4);
      local_c0 = (undefined8 *)0x0;
      puVar4 = *(undefined8 **)(local_68 + 200);
      if (lVar3 != 0) {
        sVar8 = lVar3 * 8;
        local_c0 = (undefined8 *)malloc(sVar8);
        if ((long)sVar8 < 9) {
          if (sVar8 == 8) {
            *local_c0 = *puVar4;
          }
        }
        else {
          memmove(local_c0,puVar4,sVar8);
        }
      }
      lVar5 = *(long *)(local_68 + 0x130);
      puVar4 = *(undefined8 **)(local_68 + 0x128);
      __dest = (undefined8 *)0x0;
      if (lVar5 != 0) {
        sVar8 = lVar5 * 0xc;
        __dest = (undefined8 *)malloc(sVar8);
        if ((long)sVar8 < 0xd) {
          if (sVar8 == 0xc) {
            *__dest = *puVar4;
            *(undefined4 *)(__dest + 1) = *(undefined4 *)(puVar4 + 1);
          }
        }
        else {
          memmove(__dest,puVar4,sVar8);
        }
      }
      manifold::Manifold::Impl::SetNormals((int)local_68,param_1);
      manifold::Manifold::Impl::CreateTangents((int)local_68);
      __ptr = *(void **)(local_68 + 0x128);
      *(undefined8 **)(local_68 + 0x128) = __dest;
      *(undefined4 *)(local_68 + 0xc4) = uVar1;
      *(long *)(local_68 + 0xd0) = lVar3;
      *(long *)(local_68 + 0xd8) = lVar3;
      __ptr_00 = *(void **)(local_68 + 200);
      *(long *)(local_68 + 0x130) = lVar5;
      *(long *)(local_68 + 0x138) = lVar5;
      *(undefined8 **)(local_68 + 200) = local_c0;
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
      if (__ptr_00 != (void *)0x0) {
        free(__ptr_00);
      }
    }
    else {
      manifold::Manifold::Impl::SharpenEdges(param_1,param_2);
      manifold::Manifold::Impl::CreateTangents
                (local_68,(__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)local_58
                );
      if ((void *)local_58._0_8_ != (void *)0x0) {
        operator_delete((void *)local_58._0_8_,local_48 - local_58._0_8_);
      }
    }
  }
  std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
  __shared_ptr<std::allocator<void>,std::shared_ptr<manifold::Manifold::Impl>&>
            ((__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)local_58,&local_69,
             (shared_ptr<manifold::Manifold::Impl> *)&local_68);
  uVar6 = local_58._0_8_;
  uVar7 = local_58._8_8_;
  local_58 = (undefined1  [16])0x0;
  *in_RDI = uVar6;
  in_RDI[1] = uVar7;
  this = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)in_RDI[1];
  if (this != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      UNLOCK();
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(this);
    }
    else {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(this);
    }
  }
  if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Invalid() */

Manifold * __thiscall manifold::Manifold::Invalid(Manifold *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  long in_FS_OFFSET;
  bool bVar6;
  undefined1 local_59;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_58;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator_new(0x198);
  uVar3 = _LC18;
  uVar2 = _LC5;
  p_Var1 = this_00 + 8;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x10) = uVar3;
  *(undefined8 *)(this_00 + 0x18) = uVar3;
  uVar4 = _LC21;
  uVar3 = _LC18;
  *(undefined8 *)(this_00 + 8) = uVar2;
  *(undefined8 *)(this_00 + 0x20) = uVar3;
  *(undefined8 *)(this_00 + 0x28) = uVar4;
  uVar2 = _LC21;
  *(undefined ***)this_00 = &PTR___Sp_counted_ptr_inplace_001113b0;
  uVar3 = _LC24;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x30) = uVar2;
  *(undefined8 *)(this_00 + 0x38) = uVar2;
  uVar2 = _LC23;
  *(undefined8 *)(this_00 + 0xd0) = uVar3;
  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this_00 + 0x108) = this_00 + 0xf8;
  *(undefined8 *)(this_00 + 0x40) = uVar2;
  *(undefined8 *)(this_00 + 0x48) = uVar2;
  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this_00 + 0x110) = this_00 + 0xf8;
  local_58 = this_00 + 0x10;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined4 *)(this_00 + 0xf8) = 0;
  *(undefined8 *)(this_00 + 0x100) = 0;
  *(undefined8 *)(this_00 + 0x118) = 0;
  *(undefined8 *)(this_00 + 0x120) = 0;
  *(undefined1 (*) [16])(this_00 + 0x60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0xa8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0xc0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0xe0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x128) = (undefined1  [16])0x0;
  *(undefined8 *)(this_00 + 0x138) = 0;
  bVar6 = __libc_single_threaded == '\0';
  *(undefined8 *)(this_00 + 0x150) = 0;
  *(undefined8 *)(this_00 + 0x168) = 0;
  *(undefined8 *)(this_00 + 0x180) = 0;
  *(undefined4 *)(this_00 + 0x50) = 0xb;
  *(undefined1 (*) [16])(this_00 + 0x140) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x158) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x170) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
  local_50 = this_00;
  if (bVar6) {
    LOCK();
    *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    UNLOCK();
    std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
    __shared_ptr<std::allocator<void>,std::shared_ptr<manifold::Manifold::Impl>&>
              ((__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)&local_48,&local_59
               ,&local_58);
    *(undefined8 *)this = local_48;
    *(undefined8 *)(this + 8) = uStack_40;
    if (this_00 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00107766;
  }
  else {
    *(undefined4 *)(this_00 + 8) = 2;
    std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
    __shared_ptr<std::allocator<void>,std::shared_ptr<manifold::Manifold::Impl>&>
              ((__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)&local_48,&local_59
               ,&local_58);
    *(undefined8 *)this = local_48;
    *(undefined8 *)(this + 8) = uStack_40;
  }
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(this_00);
LAB_00107766:
  if (*(long *)(this_00 + 8) == 0x100000001) {
    *(undefined8 *)(this_00 + 8) = 0;
    (**(code **)(*(long *)this_00 + 0x10))(this_00);
    (**(code **)(*(long *)this_00 + 0x18))(this_00);
  }
  else {
    if (__libc_single_threaded == '\0') {
      LOCK();
      iVar5 = *(int *)p_Var1;
      *(int *)p_Var1 = *(int *)p_Var1 + -1;
      UNLOCK();
    }
    else {
      iVar5 = *(int *)(this_00 + 8);
      *(int *)(this_00 + 8) = iVar5 + -1;
    }
    if (iVar5 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* manifold::Manifold::SetTolerance(double) const */

void manifold::Manifold::SetTolerance(double param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  Manifold *in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  undefined1 local_69;
  long local_68;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  long local_58;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_50;
  undefined8 local_48;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(in_RSI);
  manifold::CsgLeafNode::GetImpl();
  std::shared_ptr<manifold::Manifold::Impl>::
  shared_ptr<std::allocator<void>,manifold::Manifold::Impl_const&>
            ((shared_ptr<manifold::Manifold::Impl> *)&local_68,&local_58,local_48);
  if (p_Stack_40 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Stack_40);
  }
  if (*(double *)(local_68 + 0x38) <= param_1 && param_1 != *(double *)(local_68 + 0x38)) {
    *(double *)(local_68 + 0x38) = param_1;
    manifold::Manifold::Impl::CreateFaces();
    manifold::Manifold::Impl::SimplifyTopology();
    manifold::Manifold::Impl::Finish();
  }
  else {
    if (param_1 <= *(double *)(local_68 + 0x30)) {
      param_1 = *(double *)(local_68 + 0x30);
    }
    *(double *)(local_68 + 0x38) = param_1;
  }
  local_58 = local_68;
  p_Stack_50 = local_60;
  if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
    __shared_ptr<std::allocator<void>,std::shared_ptr<manifold::Manifold::Impl>&>
              ((__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)&local_48,&local_69
               ,&local_58);
    *in_RDI = local_48;
    in_RDI[1] = p_Stack_40;
    goto LAB_0010796d;
  }
  if (__libc_single_threaded == '\0') {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
    std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
    __shared_ptr<std::allocator<void>,std::shared_ptr<manifold::Manifold::Impl>&>
              ((__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)&local_48,&local_69
               ,&local_58);
    *in_RDI = local_48;
    in_RDI[1] = p_Stack_40;
    if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010792b;
  }
  else {
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
    __shared_ptr<std::allocator<void>,std::shared_ptr<manifold::Manifold::Impl>&>
              ((__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)&local_48,&local_69
               ,&local_58);
    *in_RDI = local_48;
    in_RDI[1] = p_Stack_40;
LAB_0010792b:
    p_Var1 = local_60 + 8;
    if (*(long *)(local_60 + 8) == 0x100000001) {
      *(undefined8 *)(local_60 + 8) = 0;
      (**(code **)(*(long *)local_60 + 0x10))(local_60);
      (**(code **)(*(long *)local_60 + 0x18))(local_60);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar2 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar2 = *(int *)(local_60 + 8);
        *(int *)(local_60 + 8) = iVar2 + -1;
      }
      if (iVar2 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
      }
    }
  }
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_60);
LAB_0010796d:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* manifold::Manifold::Split(manifold::Manifold const&) const */

Manifold * manifold::Manifold::Split(Manifold *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  Impl *pIVar4;
  Manifold *in_RDX;
  Manifold *in_RSI;
  long in_FS_OFFSET;
  undefined1 local_2f1;
  Impl *local_2f0;
  undefined8 local_2e8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_2e0;
  undefined8 local_2d8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_2d0;
  undefined8 local_2c8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_2c0;
  Impl *local_2b8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_2b0;
  Boolean3 local_2a8 [24];
  void *local_290;
  void *local_278;
  void *local_260;
  void *local_248;
  void *local_230;
  void *local_218;
  void *local_200;
  void *local_1e8;
  Impl local_1c8 [72];
  void *local_180;
  void *local_168;
  void *local_150;
  void *local_138;
  void *local_120;
  void *local_100;
  void *local_d8;
  void *local_b8;
  void *local_a0;
  void *local_88;
  void *local_70;
  void *local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(in_RSI);
  manifold::CsgLeafNode::GetImpl();
  GetCsgLeafNode(in_RDX);
  manifold::CsgLeafNode::GetImpl();
  manifold::Boolean3::Boolean3(local_2a8,local_2e8,local_2d8,1);
  manifold::Boolean3::Result(local_1c8,local_2a8,2);
  pIVar4 = (Impl *)operator_new(0x188);
  Impl::Impl(pIVar4,local_1c8);
  local_2b8 = pIVar4;
  std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
  __shared_ptr<std::allocator<void>,std::unique_ptr<manifold::Manifold::Impl,std::default_delete<manifold::Manifold::Impl>>>
            ((__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)&local_2c8,&local_2f0
             ,(__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)&local_2b8);
  pIVar4 = local_2b8;
  if (local_2b8 != (Impl *)0x0) {
    if (*(void **)(local_2b8 + 0x170) != (void *)0x0) {
      free(*(void **)(local_2b8 + 0x170));
    }
    if (*(void **)(pIVar4 + 0x158) != (void *)0x0) {
      free(*(void **)(pIVar4 + 0x158));
    }
    if (*(void **)(pIVar4 + 0x140) != (void *)0x0) {
      free(*(void **)(pIVar4 + 0x140));
    }
    if (*(void **)(pIVar4 + 0x128) != (void *)0x0) {
      free(*(void **)(pIVar4 + 0x128));
    }
    if (*(void **)(pIVar4 + 0x110) != (void *)0x0) {
      free(*(void **)(pIVar4 + 0x110));
    }
    pvVar2 = *(void **)(pIVar4 + 0xf0);
    while (pvVar2 != (void *)0x0) {
      std::
      _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
      ::_M_erase(*(_Rb_tree_node **)((long)pvVar2 + 0x18));
      pvVar1 = *(void **)((long)pvVar2 + 0x10);
      operator_delete(pvVar2,0x98);
      pvVar2 = pvVar1;
    }
    if (*(void **)(pIVar4 + 200) != (void *)0x0) {
      free(*(void **)(pIVar4 + 200));
    }
    if (*(void **)(pIVar4 + 0xa8) != (void *)0x0) {
      free(*(void **)(pIVar4 + 0xa8));
    }
    if (*(void **)(pIVar4 + 0x90) != (void *)0x0) {
      free(*(void **)(pIVar4 + 0x90));
    }
    if (*(void **)(pIVar4 + 0x78) != (void *)0x0) {
      free(*(void **)(pIVar4 + 0x78));
    }
    if (*(void **)(pIVar4 + 0x60) != (void *)0x0) {
      free(*(void **)(pIVar4 + 0x60));
    }
    if (*(void **)(pIVar4 + 0x48) != (void *)0x0) {
      free(*(void **)(pIVar4 + 0x48));
    }
    operator_delete(pIVar4,0x188);
  }
  if (local_58 != (void *)0x0) {
    free(local_58);
  }
  if (local_70 != (void *)0x0) {
    free(local_70);
  }
  if (local_88 != (void *)0x0) {
    free(local_88);
  }
  if (local_a0 != (void *)0x0) {
    free(local_a0);
  }
  pvVar2 = local_d8;
  if (local_b8 != (void *)0x0) {
    free(local_b8);
    pvVar2 = local_d8;
  }
  while (pvVar2 != (void *)0x0) {
    std::
    _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
    ::_M_erase(*(_Rb_tree_node **)((long)pvVar2 + 0x18));
    pvVar1 = *(void **)((long)pvVar2 + 0x10);
    operator_delete(pvVar2,0x98);
    pvVar2 = pvVar1;
  }
  if (local_100 != (void *)0x0) {
    free(local_100);
  }
  if (local_120 != (void *)0x0) {
    free(local_120);
  }
  if (local_138 != (void *)0x0) {
    free(local_138);
  }
  if (local_150 != (void *)0x0) {
    free(local_150);
  }
  if (local_168 != (void *)0x0) {
    free(local_168);
  }
  if (local_180 != (void *)0x0) {
    free(local_180);
  }
  manifold::Boolean3::Result(local_1c8,local_2a8,1);
  pIVar4 = (Impl *)operator_new(0x188);
  Impl::Impl(pIVar4,local_1c8);
  local_2f0 = pIVar4;
  std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
  __shared_ptr<std::allocator<void>,std::unique_ptr<manifold::Manifold::Impl,std::default_delete<manifold::Manifold::Impl>>>
            ((__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *)&local_2b8,&local_2f1
             ,&local_2f0);
  pIVar4 = local_2f0;
  if (local_2f0 != (Impl *)0x0) {
    if (*(void **)(local_2f0 + 0x170) != (void *)0x0) {
      free(*(void **)(local_2f0 + 0x170));
    }
    if (*(void **)(pIVar4 + 0x158) != (void *)0x0) {
      free(*(void **)(pIVar4 + 0x158));
    }
    if (*(void **)(pIVar4 + 0x140) != (void *)0x0) {
      free(*(void **)(pIVar4 + 0x140));
    }
    if (*(void **)(pIVar4 + 0x128) != (void *)0x0) {
      free(*(void **)(pIVar4 + 0x128));
    }
    if (*(void **)(pIVar4 + 0x110) != (void *)0x0) {
      free(*(void **)(pIVar4 + 0x110));
    }
    pvVar2 = *(void **)(pIVar4 + 0xf0);
    while (pvVar2 != (void *)0x0) {
      std::
      _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
      ::_M_erase(*(_Rb_tree_node **)((long)pvVar2 + 0x18));
      pvVar1 = *(void **)((long)pvVar2 + 0x10);
      operator_delete(pvVar2,0x98);
      pvVar2 = pvVar1;
    }
    if (*(void **)(pIVar4 + 200) != (void *)0x0) {
      free(*(void **)(pIVar4 + 200));
    }
    if (*(void **)(pIVar4 + 0xa8) != (void *)0x0) {
      free(*(void **)(pIVar4 + 0xa8));
    }
    if (*(void **)(pIVar4 + 0x90) != (void *)0x0) {
      free(*(void **)(pIVar4 + 0x90));
    }
    if (*(void **)(pIVar4 + 0x78) != (void *)0x0) {
      free(*(void **)(pIVar4 + 0x78));
    }
    if (*(void **)(pIVar4 + 0x60) != (void *)0x0) {
      free(*(void **)(pIVar4 + 0x60));
    }
    if (*(void **)(pIVar4 + 0x48) != (void *)0x0) {
      free(*(void **)(pIVar4 + 0x48));
    }
    operator_delete(pIVar4,0x188);
  }
  if (local_58 != (void *)0x0) {
    free(local_58);
  }
  if (local_70 != (void *)0x0) {
    free(local_70);
  }
  if (local_88 != (void *)0x0) {
    free(local_88);
  }
  if (local_a0 != (void *)0x0) {
    free(local_a0);
  }
  if (local_b8 != (void *)0x0) {
    free(local_b8);
  }
  while (local_d8 != (void *)0x0) {
    std::
    _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
    ::_M_erase(*(_Rb_tree_node **)((long)local_d8 + 0x18));
    pvVar2 = *(void **)((long)local_d8 + 0x10);
    operator_delete(local_d8,0x98);
    local_d8 = pvVar2;
  }
  if (local_100 != (void *)0x0) {
    free(local_100);
  }
  if (local_120 != (void *)0x0) {
    free(local_120);
  }
  if (local_138 != (void *)0x0) {
    free(local_138);
  }
  if (local_150 != (void *)0x0) {
    free(local_150);
  }
  if (local_168 != (void *)0x0) {
    free(local_168);
  }
  if (local_180 != (void *)0x0) {
    free(local_180);
  }
  if (p_Stack_2b0 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_001080d7:
    if (local_2c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded != '\0') goto LAB_00107fa1;
      LOCK();
      *(int *)(local_2c0 + 8) = *(int *)(local_2c0 + 8) + 1;
      UNLOCK();
      if (__libc_single_threaded != '\0') {
        iVar3 = *(int *)(local_2c0 + 8);
        goto LAB_00107fad;
      }
      LOCK();
      *(int *)(local_2c0 + 8) = *(int *)(local_2c0 + 8) + 1;
      UNLOCK();
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 8) = local_2c0;
      *(undefined8 *)param_1 = local_2c8;
      *(Impl **)(param_1 + 0x10) = local_2b8;
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x18) = p_Stack_2b0;
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_2c0);
      goto joined_r0x0010812f;
    }
    *(undefined8 *)param_1 = local_2c8;
    *(undefined8 *)(param_1 + 8) = 0;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x18) = p_Stack_2b0;
    *(Impl **)(param_1 + 0x10) = local_2b8;
    if (p_Stack_2b0 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00107fe7;
LAB_00108135:
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Stack_2b0);
  }
  else {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(p_Stack_2b0 + 8) = *(int *)(p_Stack_2b0 + 8) + 1;
      UNLOCK();
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(p_Stack_2b0 + 8) = *(int *)(p_Stack_2b0 + 8) + 1;
        UNLOCK();
        goto LAB_001080d7;
      }
      iVar3 = *(int *)(p_Stack_2b0 + 8);
    }
    else {
      iVar3 = *(int *)(p_Stack_2b0 + 8) + 1;
    }
    *(int *)(p_Stack_2b0 + 8) = iVar3 + 1;
    if (local_2c0 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      *(undefined8 *)param_1 = local_2c8;
      *(undefined8 *)(param_1 + 8) = 0;
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x18) = p_Stack_2b0;
      *(Impl **)(param_1 + 0x10) = local_2b8;
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Stack_2b0);
      if (p_Stack_2b0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Stack_2b0);
      }
      goto LAB_00107fe7;
    }
LAB_00107fa1:
    iVar3 = *(int *)(local_2c0 + 8) + 1;
    *(int *)(local_2c0 + 8) = iVar3;
LAB_00107fad:
    *(int *)(local_2c0 + 8) = iVar3 + 1;
    *(undefined8 *)param_1 = local_2c8;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 8) = local_2c0;
    *(Impl **)(param_1 + 0x10) = local_2b8;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x18) = p_Stack_2b0;
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_2c0);
joined_r0x0010812f:
    if (p_Stack_2b0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00108135;
  }
  if (p_Stack_2b0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Stack_2b0);
  }
  if (local_2c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_2c0);
  }
LAB_00107fe7:
  if (local_1e8 != (void *)0x0) {
    free(local_1e8);
  }
  if (local_200 != (void *)0x0) {
    free(local_200);
  }
  if (local_218 != (void *)0x0) {
    free(local_218);
  }
  if (local_230 != (void *)0x0) {
    free(local_230);
  }
  if (local_248 != (void *)0x0) {
    free(local_248);
  }
  if (local_260 != (void *)0x0) {
    free(local_260);
  }
  if (local_278 != (void *)0x0) {
    free(local_278);
  }
  if (local_290 != (void *)0x0) {
    free(local_290);
  }
  if (local_2d0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_2d0);
  }
  if (local_2e0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_2e0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* manifold::Manifold::SplitByPlane(linalg::vec<double, 3>, double) const */

Manifold * __thiscall
manifold::Manifold::SplitByPlane(undefined8 param_1,Manifold *this,Manifold *param_3)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  int iVar3;
  long in_FS_OFFSET;
  undefined8 *local_78;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(param_3);
  manifold::CsgLeafNode::GetImpl();
  p_Var1 = local_70;
  local_68 = *local_78;
  uStack_60 = local_78[1];
  local_58 = local_78[2];
  uStack_50 = local_78[3];
  local_48 = local_78[4];
  uStack_40 = local_78[5];
  if (local_70 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var2 = local_70 + 8;
    if (*(long *)(local_70 + 8) == 0x100000001) {
      *(undefined8 *)(local_70 + 8) = 0;
      (**(code **)(*(long *)local_70 + 0x10))(local_70);
      (**(code **)(*(long *)p_Var1 + 0x18))(p_Var1);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar3 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
      }
      else {
        iVar3 = *(int *)(local_70 + 8);
        *(int *)(local_70 + 8) = iVar3 + -1;
      }
      if (iVar3 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_70);
      }
    }
  }
  (anonymous_namespace)::Halfspace(param_1,&local_78);
  Split(this);
  if (local_70 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_70 + 8;
    if (*(long *)(local_70 + 8) == 0x100000001) {
      *(undefined8 *)(local_70 + 8) = 0;
      (**(code **)(*(long *)local_70 + 0x10))(local_70);
      (**(code **)(*(long *)local_70 + 0x18))(local_70);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar3 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar3 = *(int *)(local_70 + 8);
        *(int *)(local_70 + 8) = iVar3 + -1;
      }
      if (iVar3 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_70);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* linalg::mat<double, 3, 3>& std::vector<linalg::mat<double, 3, 3>,
   std::allocator<linalg::mat<double, 3, 3> > >::emplace_back<linalg::mat<double, 3, 3>
   >(linalg::mat<double, 3, 3>&&) [clone .isra.0] */

mat * __thiscall
std::vector<linalg::mat<double,3,3>,std::allocator<linalg::mat<double,3,3>>>::
emplace_back<linalg::mat<double,3,3>>
          (vector<linalg::mat<double,3,3>,std::allocator<linalg::mat<double,3,3>>> *this,
          mat *param_1)

{
  undefined8 *puVar1;
  mat *pmVar2;
  undefined8 uVar3;
  mat *extraout_RAX;
  
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar1 != *(undefined8 **)(this + 0x10)) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    *puVar1 = *(undefined8 *)param_1;
    puVar1[1] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    puVar1[5] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    puVar1[7] = uVar3;
    pmVar2 = *(mat **)(param_1 + 0x40);
    puVar1[8] = pmVar2;
    *(undefined8 **)(this + 8) = puVar1 + 9;
    return pmVar2;
  }
  _M_realloc_insert<linalg::mat<double,3,3>>();
  return extraout_RAX;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (anonymous namespace)::GetMeshGLImpl<double, unsigned long>(manifold::Manifold::Impl const&,
   int)::{lambda(manifold::MeshGLP<double, unsigned long>&, std::vector<linalg::mat<double, 3, 3>,
   std::allocator<linalg::mat<double, 3, 3> > >&, int, manifold::Manifold::Impl::Relation
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(manifold::MeshGLP<double, unsigned long>&,
   std::vector<linalg::mat<double, 3, 3>, std::allocator<linalg::mat<double, 3, 3> > >&, int,
   manifold::Manifold::Impl::Relation const&) const */

void __thiscall
(anonymous_namespace)::GetMeshGLImpl<double,unsigned_long>(manifold::Manifold::Impl_const&,int)::
{lambda(manifold::MeshGLP<double,unsigned_long>&,std::vector<linalg::mat<double,3,3>,std::allocator<linalg::mat<double,3,3>>>&,int,manifold::Manifold::Impl::Relation_const&)#1}
::operator()(_lambda_manifold__MeshGLP<double,unsigned_long>__std__vector<linalg::mat<double,3,3>,std::allocator<linalg::mat<double,3,3>>>__int_manifold__Manifold__Impl__Relation_const___1_
             *this,MeshGLP *param_1,vector *param_2,int param_3,Relation *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  Relation *pRVar4;
  Relation *pRVar5;
  int *piVar6;
  undefined8 uVar7;
  int *piVar8;
  long in_FS_OFFSET;
  double dVar9;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 local_68;
  undefined4 local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = (double)(long)(param_3 * 3);
  std::vector<unsigned_long,std::allocator<unsigned_long>>::emplace_back<unsigned_long>
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(param_1 + 0x68),
             (ulong *)&local_b8);
  puVar2 = *(undefined4 **)(param_1 + 0x88);
  local_b8 = (double)CONCAT44(local_b8._4_4_,*(undefined4 *)param_4);
  if (puVar2 == *(undefined4 **)(param_1 + 0x90)) {
    std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)(param_1 + 0x80),puVar2,
               (mat *)&local_b8);
  }
  else {
    *puVar2 = *(undefined4 *)param_4;
    *(undefined4 **)(param_1 + 0x88) = puVar2 + 1;
  }
  if (*this != (_lambda_manifold__MeshGLP<double,unsigned_long>__std__vector<linalg::mat<double,3,3>,std::allocator<linalg::mat<double,3,3>>>__int_manifold__Manifold__Impl__Relation_const___1_
                )0x0) {
    dVar9 = _LC6;
    if (param_4[0x68] != (Relation)0x0) {
      dVar9 = _LC23;
    }
    manifold::NormalTransform((manifold *)&local_108,(mat *)(param_4 + 8));
    local_b8 = local_108 * dVar9;
    dStack_b0 = dStack_100 * dVar9;
    local_a8 = local_f8 * dVar9;
    dStack_a0 = dStack_f0 * dVar9;
    local_98 = local_e8 * dVar9;
    dStack_90 = dStack_e0 * dVar9;
    local_78 = dVar9 * local_c8;
    local_88 = dVar9 * local_d8;
    dStack_80 = dVar9 * dStack_d0;
    std::vector<linalg::mat<double,3,3>,std::allocator<linalg::mat<double,3,3>>>::
    emplace_back<linalg::mat<double,3,3>>
              ((vector<linalg::mat<double,3,3>,std::allocator<linalg::mat<double,3,3>>> *)param_2,
               (mat *)&local_b8);
  }
  if (this[1] ==
      (_lambda_manifold__MeshGLP<double,unsigned_long>__std__vector<linalg::mat<double,3,3>,std::allocator<linalg::mat<double,3,3>>>__int_manifold__Manifold__Impl__Relation_const___1_
       )0x0) {
    piVar8 = (int *)&local_58;
    local_58 = _LC27;
    uStack_50 = _UNK_001114f8;
    uVar7 = _LC27;
    do {
      local_68 = uVar7;
      iVar1 = *piVar8;
      local_60 = 2;
      piVar6 = (int *)&local_68;
      do {
        pRVar4 = param_4 + 8;
        if ((iVar1 != 0) && (pRVar4 = param_4 + 0x20, iVar1 != 1)) {
          pRVar4 = param_4 + 0x50;
          if (iVar1 == 2) {
            pRVar4 = param_4 + 0x38;
          }
        }
        pRVar5 = pRVar4;
        if (*piVar6 != 0) {
          pRVar5 = pRVar4 + 0x10;
          if (*piVar6 == 1) {
            pRVar5 = pRVar4 + 8;
          }
        }
        puVar3 = *(undefined8 **)(param_1 + 0xa0);
        if (puVar3 == *(undefined8 **)(param_1 + 0xa8)) {
          std::vector<double,std::allocator<double>>::_M_realloc_insert<double_const&>
                    ((vector<double,std::allocator<double>> *)(param_1 + 0x98));
          uVar7 = _LC27;
        }
        else {
          *puVar3 = *(undefined8 *)pRVar5;
          *(undefined8 **)(param_1 + 0xa0) = puVar3 + 1;
        }
        piVar6 = piVar6 + 1;
      } while (&local_5c != piVar6);
      piVar8 = piVar8 + 1;
    } while (local_48 != piVar8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (anonymous namespace)::GetMeshGLImpl<float, unsigned int>(manifold::Manifold::Impl const&,
   int)::{lambda(manifold::MeshGLP<float, unsigned int>&, std::vector<linalg::mat<double, 3, 3>,
   std::allocator<linalg::mat<double, 3, 3> > >&, int, manifold::Manifold::Impl::Relation
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(manifold::MeshGLP<float, unsigned int>&,
   std::vector<linalg::mat<double, 3, 3>, std::allocator<linalg::mat<double, 3, 3> > >&, int,
   manifold::Manifold::Impl::Relation const&) const */

void __thiscall
(anonymous_namespace)::GetMeshGLImpl<float,unsigned_int>(manifold::Manifold::Impl_const&,int)::
{lambda(manifold::MeshGLP<float,unsigned_int>&,std::vector<linalg::mat<double,3,3>,std::allocator<linalg::mat<double,3,3>>>&,int,manifold::Manifold::Impl::Relation_const&)#1}
::operator()(_lambda_manifold__MeshGLP<float,unsigned_int>__std__vector<linalg::mat<double,3,3>,std::allocator<linalg::mat<double,3,3>>>__int_manifold__Manifold__Impl__Relation_const___1_
             *this,MeshGLP *param_1,vector *param_2,int param_3,Relation *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  float *pfVar3;
  Relation *pRVar4;
  int *piVar5;
  undefined8 uVar6;
  int *piVar7;
  long in_FS_OFFSET;
  double dVar8;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 local_68;
  undefined4 local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48 [2];
  long local_40;
  
  piVar7 = *(int **)(param_1 + 0x70);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (piVar7 == *(int **)(param_1 + 0x78)) {
    local_b8._0_4_ = param_3 * 3;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)(param_1 + 0x68),piVar7,
               &local_b8);
  }
  else {
    *piVar7 = param_3 * 3;
    *(int **)(param_1 + 0x70) = piVar7 + 1;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x88);
  local_b8 = (double)CONCAT44(local_b8._4_4_,*(undefined4 *)param_4);
  if (puVar2 == *(undefined4 **)(param_1 + 0x90)) {
    std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)(param_1 + 0x80),puVar2,
               &local_b8);
  }
  else {
    *puVar2 = *(undefined4 *)param_4;
    *(undefined4 **)(param_1 + 0x88) = puVar2 + 1;
  }
  if (*this != (_lambda_manifold__MeshGLP<float,unsigned_int>__std__vector<linalg::mat<double,3,3>,std::allocator<linalg::mat<double,3,3>>>__int_manifold__Manifold__Impl__Relation_const___1_
                )0x0) {
    dVar8 = _LC6;
    if (param_4[0x68] != (Relation)0x0) {
      dVar8 = _LC23;
    }
    manifold::NormalTransform((manifold *)&local_108,(mat *)(param_4 + 8));
    local_b8 = local_108 * dVar8;
    dStack_b0 = dStack_100 * dVar8;
    local_a8 = local_f8 * dVar8;
    dStack_a0 = dStack_f0 * dVar8;
    local_98 = local_e8 * dVar8;
    dStack_90 = dStack_e0 * dVar8;
    local_78 = dVar8 * local_c8;
    local_88 = dVar8 * local_d8;
    dStack_80 = dVar8 * dStack_d0;
    std::vector<linalg::mat<double,3,3>,std::allocator<linalg::mat<double,3,3>>>::
    emplace_back<linalg::mat<double,3,3>>
              ((vector<linalg::mat<double,3,3>,std::allocator<linalg::mat<double,3,3>>> *)param_2,
               (mat *)&local_b8);
  }
  if (this[1] ==
      (_lambda_manifold__MeshGLP<float,unsigned_int>__std__vector<linalg::mat<double,3,3>,std::allocator<linalg::mat<double,3,3>>>__int_manifold__Manifold__Impl__Relation_const___1_
       )0x0) {
    piVar7 = (int *)&local_58;
    local_58 = _LC27;
    uStack_50 = _UNK_001114f8;
    uVar6 = _LC27;
    do {
      local_68 = uVar6;
      iVar1 = *piVar7;
      local_60 = 2;
      piVar5 = (int *)&local_68;
      do {
        pRVar4 = param_4 + 8;
        if ((iVar1 != 0) && (pRVar4 = param_4 + 0x20, iVar1 != 1)) {
          pRVar4 = param_4 + 0x50;
          if (iVar1 == 2) {
            pRVar4 = param_4 + 0x38;
          }
        }
        if (*piVar5 == 0) {
          dVar8 = *(double *)pRVar4;
        }
        else if (*piVar5 == 1) {
          dVar8 = *(double *)(pRVar4 + 8);
        }
        else {
          dVar8 = *(double *)(pRVar4 + 0x10);
        }
        pfVar3 = *(float **)(param_1 + 0xa0);
        local_b8 = (double)CONCAT44(local_b8._4_4_,(float)dVar8);
        if (pfVar3 == *(float **)(param_1 + 0xa8)) {
          std::vector<float,std::allocator<float>>::_M_realloc_insert<float>
                    ((vector<float,std::allocator<float>> *)(param_1 + 0x98),pfVar3,&local_b8);
          uVar6 = _LC27;
        }
        else {
          *pfVar3 = (float)dVar8;
          *(float **)(param_1 + 0xa0) = pfVar3 + 1;
        }
        piVar5 = piVar5 + 1;
      } while (&local_5c != piVar5);
      piVar7 = piVar7 + 1;
    } while (local_48 != piVar7);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* manifold::MeshGLP<float, unsigned int> (anonymous namespace)::GetMeshGLImpl<float, unsigned
   int>(manifold::Manifold::Impl const&, int) */

_anonymous_namespace_ * __thiscall
(anonymous_namespace)::GetMeshGLImpl<float,unsigned_int>
          (_anonymous_namespace_ *this,Impl *param_1,int param_2)

{
  vector<float,std::allocator<float>> *this_00;
  undefined8 *puVar1;
  vector<linalg::vec<int,2>,std::allocator<linalg::vec<int,2>>> *pvVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double *pdVar9;
  void *pvVar10;
  int *piVar11;
  float fVar12;
  _Rb_tree_node *p_Var13;
  undefined8 uVar14;
  int iVar15;
  ulong *puVar16;
  _Rb_tree_node_base *p_Var17;
  _Rb_tree_node_base *p_Var18;
  undefined1 (*pauVar19) [16];
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined1 (*pauVar23) [16];
  long lVar24;
  void *__dest;
  float *pfVar25;
  int iVar26;
  _Alloc_node *p_Var27;
  ulong uVar28;
  _Alloc_node *extraout_RDX;
  _Alloc_node *extraout_RDX_00;
  _Alloc_node *extraout_RDX_01;
  double *pdVar29;
  _Alloc_node *extraout_RDX_02;
  _Alloc_node *p_Var30;
  undefined1 (*pauVar31) [16];
  long lVar32;
  _Rb_tree_node_base *p_Var33;
  _Alloc_node *p_Var34;
  ulong uVar35;
  int *piVar36;
  int *piVar37;
  int iVar38;
  long in_FS_OFFSET;
  bool bVar39;
  double dVar40;
  undefined8 uVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  byte local_1f8;
  _lambda_manifold__MeshGLP<float,unsigned_int>__std__vector<linalg::mat<double,3,3>,std::allocator<linalg::mat<double,3,3>>>__int_manifold__Manifold__Impl__Relation_const___1_
  local_1f0;
  _Alloc_node *local_1e0;
  int local_1b8;
  void *local_190;
  ulong local_180;
  void *local_170;
  ulong local_168;
  undefined1 (*local_160) [16];
  _lambda_manifold__MeshGLP<float,unsigned_int>__std__vector<linalg::mat<double,3,3>,std::allocator<linalg::mat<double,3,3>>>__int_manifold__Manifold__Impl__Relation_const___1_
  local_136;
  byte local_135;
  undefined8 local_134;
  int local_12c;
  undefined1 local_128 [16];
  long local_118;
  _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
  local_108 [8];
  undefined4 local_100 [2];
  _Rb_tree_node_base *local_f8;
  _Rb_tree_node_base *local_f0;
  _Rb_tree_node_base *local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [8];
  double dStack_d0;
  double dStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 local_70;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  uVar21 = _LC26;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = *(int *)(param_1 + 0xc4);
  if (iVar4 == 0) {
    local_1b8 = (int)*(undefined8 *)(param_1 + 0x50);
  }
  else {
    local_1b8 = (int)(*(ulong *)(param_1 + 0xd0) / (ulong)(long)iVar4);
  }
  uVar5 = *(uint *)(param_1 + 0xc0);
  uVar28 = *(ulong *)(param_1 + 0x68);
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  p_Var27 = (_Alloc_node *)(uVar28 / 3);
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x88) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 200) = (undefined1  [16])0x0;
  uVar28 = *(ulong *)(param_1 + 0x18);
  dVar40 = *(double *)(param_1 + 0x38);
  this_00 = (vector<float,std::allocator<float>> *)(this + 8);
  uVar20 = *(ulong *)(param_1 + 0x20);
  iVar26 = (int)p_Var27;
  uVar35 = *(ulong *)(param_1 + 0x28);
  *(undefined8 *)(this + 0xd8) = 0;
  *(int *)this = iVar4 + 3;
  iVar8 = iVar26 * 3;
  dVar42 = (double)(uVar28 & uVar21);
  if ((double)(uVar28 & uVar21) <= (double)(*(ulong *)param_1 & uVar21)) {
    dVar42 = (double)(*(ulong *)param_1 & uVar21);
  }
  dVar43 = (double)(uVar35 & uVar21);
  if ((double)(uVar35 & uVar21) <= (double)(uVar21 & *(ulong *)(param_1 + 0x10))) {
    dVar43 = (double)(uVar21 & *(ulong *)(param_1 + 0x10));
  }
  dVar45 = (double)(uVar20 & uVar21);
  if ((double)(uVar20 & uVar21) <= (double)(*(ulong *)(param_1 + 8) & uVar21)) {
    dVar45 = (double)(*(ulong *)(param_1 + 8) & uVar21);
  }
  if (dVar43 <= dVar45) {
    dVar43 = dVar45;
  }
  if (dVar43 <= dVar42) {
    dVar43 = dVar42;
  }
  fVar12 = (float)(_LC32 * dVar43);
  if ((float)(_LC32 * dVar43) <= (float)dVar40) {
    fVar12 = (float)dVar40;
  }
  *(float *)(this + 0xe0) = fVar12;
  if ((long)iVar8 == 0) {
    iVar15 = (int)*(undefined8 *)(param_1 + 0xb0);
    local_168 = (ulong)(iVar15 << 2);
    if (local_168 != 0) {
LAB_0010934e:
      std::vector<float,std::allocator<float>>::_M_default_append
                ((vector<float,std::allocator<float>> *)(this + 200),local_168);
      lVar24 = *(long *)(this + 0xb8);
      lVar32 = *(long *)(this + 0xb0);
      lVar22 = lVar24 - lVar32;
      p_Var27 = extraout_RDX;
      goto LAB_00109384;
    }
LAB_00108b50:
    local_1e0 = (_Alloc_node *)0x0;
LAB_00108b59:
    dVar40 = *(double *)(param_1 + 0x110);
  }
  else {
    std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_default_append
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x20),(long)iVar8);
    iVar15 = (int)*(undefined8 *)(param_1 + 0xb0);
    p_Var34 = (_Alloc_node *)(long)(iVar15 << 2);
    p_Var27 = (_Alloc_node *)(*(long *)(this + 0xd0) - *(long *)(this + 200) >> 2);
    if (p_Var27 < p_Var34) {
      local_168 = (long)p_Var34 - (long)p_Var27;
      goto LAB_0010934e;
    }
    if ((p_Var34 < p_Var27) &&
       (lVar32 = *(long *)(this + 200) + (long)p_Var34 * 4, *(long *)(this + 0xd0) != lVar32)) {
      *(long *)(this + 0xd0) = lVar32;
    }
    lVar24 = *(long *)(this + 0xb8);
    lVar32 = *(long *)(this + 0xb0);
    lVar22 = lVar24 - lVar32;
LAB_00109384:
    uVar21 = lVar22 >> 2;
    if (0 < iVar15) {
      pauVar31 = *(undefined1 (**) [16])(param_1 + 0xa8);
      pauVar19 = pauVar31;
      p_Var34 = *(_Alloc_node **)(this + 200);
      do {
        _local_d8 = *pauVar19;
        dStack_c8 = *(double *)pauVar19[1];
        pauVar23 = pauVar19 + 2;
        p_Var27 = p_Var34 + 0x10;
        auStack_c0._0_8_ = *(undefined8 *)(pauVar19[1] + 8);
        dVar40 = *(double *)pauVar19[1];
        dVar42 = *(double *)(pauVar19[1] + 8);
        *(ulong *)p_Var34 = CONCAT44((float)*(double *)(*pauVar19 + 8),(float)*(double *)*pauVar19);
        *(ulong *)(p_Var34 + 8) = CONCAT44((float)dVar42,(float)dVar40);
        pauVar19 = pauVar23;
        p_Var34 = p_Var27;
      } while (pauVar23 != pauVar31 + (long)iVar15 * 2);
    }
    uVar28 = (ulong)iVar26;
    if (uVar21 < uVar28) {
      std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_default_append
                ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0xb0),uVar28 - uVar21)
      ;
      if (uVar28 >> 0x3d != 0) goto LAB_00109cc9;
    }
    else {
      if ((uVar28 < uVar21) && (lVar32 = lVar32 + uVar28 * 4, lVar32 != lVar24)) {
        *(long *)(this + 0xb8) = lVar32;
      }
      if (uVar28 >> 0x3d != 0) goto LAB_00109cc9;
      local_168 = uVar28;
      if (uVar28 == 0) goto LAB_00108b50;
    }
    local_168 = uVar28 * 4;
    local_1e0 = (_Alloc_node *)operator_new(local_168);
    p_Var34 = local_1e0 + 4;
    *(int *)local_1e0 = 0;
    p_Var27 = extraout_RDX_00;
    if (uVar28 == 1) {
      local_168 = 4;
      p_Var30 = p_Var34;
    }
    else {
      p_Var30 = local_1e0 + local_168;
      if (p_Var34 != p_Var30) {
        memset(p_Var34,0,local_168 - 4);
        p_Var27 = extraout_RDX_01;
      }
    }
    if (p_Var30 == local_1e0) goto LAB_00108b59;
    p_Var34 = (_Alloc_node *)0x0;
    do {
      p_Var27 = p_Var34;
      *(int *)(local_1e0 + (long)p_Var27 * 4) = (int)p_Var27;
      p_Var34 = p_Var27 + 1;
    } while ((_Alloc_node *)((ulong)(p_Var30 + (-4 - (long)local_1e0)) >> 2) != p_Var27);
    dVar40 = *(double *)(param_1 + 0x110);
    if ((int)uVar5 < 0) {
      uVar41 = *(undefined8 *)(param_1 + 0x118);
      lVar32 = -2;
      uVar21 = (long)p_Var30 - (long)local_1e0 >> 2;
      if (uVar21 != 0) {
        lVar32 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar32 == 0; lVar32 = lVar32 + -1) {
          }
        }
        lVar32 = (long)(int)lVar32 * 2;
      }
      local_d8 = (undefined1  [8])dVar40;
      dStack_d0 = (double)uVar41;
      std::
      __introsort_loop<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::GetMeshGLImpl<float,unsigned_int>(manifold::Manifold::Impl_const&,int)::_lambda(int,int)_1_>>
                (local_1e0,p_Var30,lVar32,local_d8);
      dStack_d0 = (double)uVar41;
      local_d8 = (undefined1  [8])dVar40;
      if ((long)p_Var30 - (long)local_1e0 < 0x41) {
        std::
        __insertion_sort<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::GetMeshGLImpl<float,unsigned_int>(manifold::Manifold::Impl_const&,int)::_lambda(int,int)_1_>>
                  (local_1e0,p_Var30,local_d8);
        p_Var27 = extraout_RDX_02;
      }
      else {
        p_Var27 = local_1e0 + 0x40;
        std::
        __insertion_sort<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::GetMeshGLImpl<float,unsigned_int>(manifold::Manifold::Impl_const&,int)::_lambda(int,int)_1_>>
                  (local_1e0,p_Var27,local_d8);
        for (; p_Var30 != p_Var27; p_Var27 = p_Var27 + 4) {
          iVar15 = *(int *)p_Var27;
          piVar37 = (int *)((long)iVar15 * 0x10 + (long)dVar40);
          p_Var34 = p_Var27;
          while( true ) {
            iVar6 = piVar37[1];
            piVar36 = (int *)((long)*(int *)(p_Var34 + -4) * 0x10 + (long)dVar40);
            iVar38 = piVar36[1];
            bVar39 = iVar6 < iVar38;
            if (iVar6 == iVar38) {
              bVar39 = *piVar37 < *piVar36;
            }
            if (!bVar39) break;
            *(int *)p_Var34 = *(int *)(p_Var34 + -4);
            p_Var34 = p_Var34 + -4;
          }
          *(int *)p_Var34 = iVar15;
        }
      }
    }
  }
  local_1f0 = SUB41((~param_2 & uVar5) >> 0x1f,0);
  local_118 = 0;
  local_136 = local_1f0;
  local_1f8 = (byte)~(byte)(uVar5 >> 0x18) >> 7;
  local_100[0] = 0;
  local_135 = local_1f8;
  local_f8 = (_Rb_tree_node_base *)0x0;
  local_e0 = 0;
  local_128 = (undefined1  [16])0x0;
  local_f0 = (_Rb_tree_node_base *)local_100;
  local_e8 = (_Rb_tree_node_base *)local_100;
  if (*(_Rb_tree_node **)(param_1 + 0xf0) == (_Rb_tree_node *)0x0) {
    if (0 < iVar26) {
LAB_00108c43:
      uVar21 = 0;
      iVar15 = -1;
      uVar41 = _LC6;
      do {
        lVar32 = *(long *)(param_1 + 0x60);
        lVar24 = *(long *)(this + 0x20);
        local_48 = 2;
        iVar6 = *(int *)(local_1e0 + uVar21 * 4);
        puVar16 = (ulong *)((long)iVar6 * 0x10 + (long)dVar40);
        uVar28 = *puVar16;
        iVar38 = (int)uVar28;
        *(int *)(*(long *)(this + 0xb0) + uVar21 * 4) = (int)puVar16[1];
        local_50 = _LC27;
        piVar37 = (int *)&local_50;
        do {
          iVar7 = *piVar37;
          piVar37 = piVar37 + 1;
          *(undefined4 *)(lVar24 + (long)((int)uVar21 * 3 + iVar7) * 4) =
               *(undefined4 *)(lVar32 + (long)(iVar7 + iVar6 * 3) * 0xc);
        } while (piVar37 != &local_44);
        if (iVar38 != iVar15) {
          local_d8._0_4_ = 0xffffffff;
          local_70 = 0;
          dStack_d0 = (double)uVar41;
          dStack_c8 = 0.0;
          auStack_c0 = (undefined1  [16])0x0;
          local_b0 = uVar41;
          uStack_a8 = 0;
          local_a0 = (undefined1  [16])0x0;
          local_90 = uVar41;
          uStack_88 = 0;
          local_80 = 0;
          uStack_7f = 0;
          uStack_78 = 0;
          uStack_77 = 0;
          p_Var18 = local_f8;
          p_Var33 = (_Rb_tree_node_base *)local_100;
          if (local_f8 != (_Rb_tree_node_base *)0x0) {
            do {
              while( true ) {
                p_Var17 = p_Var18;
                if (*(int *)(p_Var17 + 0x20) < iVar38) break;
                p_Var18 = *(_Rb_tree_node_base **)(p_Var17 + 0x10);
                p_Var33 = p_Var17;
                if (*(_Rb_tree_node_base **)(p_Var17 + 0x10) == (_Rb_tree_node_base *)0x0)
                goto LAB_00108d90;
              }
              p_Var18 = *(_Rb_tree_node_base **)(p_Var17 + 0x18);
            } while (*(_Rb_tree_node_base **)(p_Var17 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_00108d90:
            if ((p_Var33 != (_Rb_tree_node_base *)local_100) && (*(int *)(p_Var33 + 0x20) <= iVar38)
               ) {
              local_90 = *(undefined8 *)(p_Var33 + 0x70);
              _local_d8 = *(undefined1 (*) [16])(p_Var33 + 0x28);
              dStack_c8 = *(double *)(p_Var33 + 0x38);
              auStack_c0._8_8_ = 0;
              auStack_c0._0_8_ = *(ulong *)(p_Var33 + 0x40);
              auStack_c0 = *(undefined1 (*) [16])(p_Var33 + 0x40);
              local_b0 = *(undefined8 *)(p_Var33 + 0x50);
              uStack_88 = *(undefined8 *)(p_Var33 + 0x78);
              uStack_a8 = *(undefined8 *)(p_Var33 + 0x58);
              local_a0._8_8_ = 0;
              local_a0._0_8_ = *(ulong *)(p_Var33 + 0x60);
              local_80 = (undefined1)*(undefined8 *)(p_Var33 + 0x80);
              uStack_7f = (undefined7)*(undefined8 *)(p_Var33 + 0x81);
              uStack_78 = (undefined1)((ulong)*(undefined8 *)(p_Var33 + 0x81) >> 0x38);
              uStack_77 = (undefined7)*(undefined8 *)(p_Var33 + 0x89);
              local_70 = (undefined1)((ulong)*(undefined8 *)(p_Var33 + 0x89) >> 0x38);
              local_a0 = *(undefined1 (*) [16])(p_Var33 + 0x60);
            }
          }
          GetMeshGLImpl<float,unsigned_int>(manifold::Manifold::Impl_const&,int)::
          {lambda(manifold::MeshGLP<float,unsigned_int>&,std::vector<linalg::mat<double,3,3>,std::allocator<linalg::mat<double,3,3>>>&,int,manifold::Manifold::Impl::Relation_const&)#1}
          ::operator()(&local_136,(MeshGLP *)this,(vector *)local_128,(int)uVar21,
                       (Relation *)local_d8);
          std::
          _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
          ::erase(local_108,(int *)(uVar28 & 0xffffffff));
          uVar41 = _LC6;
        }
        bVar39 = iVar26 - 1 != uVar21;
        uVar21 = uVar21 + 1;
        iVar15 = iVar38;
      } while (bVar39);
      goto LAB_00108e49;
    }
  }
  else {
    local_f8 = (_Rb_tree_node_base *)
               std::
               _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
               ::
               _M_copy<false,std::_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>::_Alloc_node>
                         (*(_Rb_tree_node **)(param_1 + 0xf0),(_Rb_tree_node_base *)local_100,
                          p_Var27);
    p_Var13 = (_Rb_tree_node *)local_f8;
    do {
      local_f0 = (_Rb_tree_node_base *)p_Var13;
      p_Var18 = local_f8;
      p_Var13 = (_Rb_tree_node *)*(_Rb_tree_node_base **)(local_f0 + 0x10);
    } while (*(_Rb_tree_node_base **)(local_f0 + 0x10) != (_Rb_tree_node_base *)0x0);
    do {
      local_e8 = p_Var18;
      p_Var18 = *(_Rb_tree_node_base **)(local_e8 + 0x18);
    } while (*(_Rb_tree_node_base **)(local_e8 + 0x18) != (_Rb_tree_node_base *)0x0);
    local_e0 = *(undefined8 *)(param_1 + 0x108);
    if (0 < iVar26) goto LAB_00108c43;
LAB_00108e49:
    for (p_Var18 = local_f0; p_Var18 != (_Rb_tree_node_base *)local_100;
        p_Var18 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var18)) {
      GetMeshGLImpl<float,unsigned_int>(manifold::Manifold::Impl_const&,int)::
      {lambda(manifold::MeshGLP<float,unsigned_int>&,std::vector<linalg::mat<double,3,3>,std::allocator<linalg::mat<double,3,3>>>&,int,manifold::Manifold::Impl::Relation_const&)#1}
      ::operator()(&local_136,(MeshGLP *)this,(vector *)local_128,iVar26,
                   (Relation *)(p_Var18 + 0x28));
    }
  }
  piVar37 = *(int **)(this + 0x70);
  local_d8._0_4_ = iVar8;
  if (piVar37 == *(int **)(this + 0x78)) {
    std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x68),piVar37,local_d8);
  }
  else {
    *piVar37 = iVar8;
    *(int **)(this + 0x70) = piVar37 + 1;
  }
  if (iVar4 == 0) {
    uVar21 = (ulong)(local_1b8 * 3);
    uVar28 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 2;
    if (uVar28 < uVar21) {
      std::vector<float,std::allocator<float>>::_M_default_append(this_00,uVar21 - uVar28);
    }
    else if ((uVar21 < uVar28) &&
            (lVar32 = *(long *)(this + 8) + uVar21 * 4, *(long *)(this + 0x10) != lVar32)) {
      *(long *)(this + 0x10) = lVar32;
    }
    local_170 = (void *)local_128._0_8_;
    if (0 < local_1b8) {
      lVar32 = *(long *)(param_1 + 0x48);
      lVar24 = *(long *)(this + 8);
      lVar22 = 0;
      do {
        dStack_c8 = *(double *)(lVar32 + 0x10 + lVar22 * 2);
        pdVar29 = (double *)(lVar32 + lVar22 * 2);
        _local_d8 = *(undefined1 (*) [16])(lVar32 + lVar22 * 2);
        *(ulong *)(lVar24 + lVar22) = CONCAT44((float)pdVar29[1],(float)*pdVar29);
        *(float *)(lVar24 + 8 + lVar22) = (float)dStack_c8;
        lVar22 = lVar22 + 0xc;
      } while (lVar22 != ((ulong)(local_1b8 - 1) * 3 + 3) * 4);
    }
    goto LAB_001092d3;
  }
  uVar21 = *(ulong *)(param_1 + 0x50);
  if (uVar21 >> 0x3d != 0) {
LAB_00109cc9:
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  }
  if (uVar21 == 0) {
    local_190 = (void *)0x0;
    uVar21 = 0;
    pauVar31 = (undefined1 (*) [16])0x0;
    local_160 = (undefined1 (*) [16])0x0;
    uVar28 = 0;
  }
  else {
    uVar21 = uVar21 * 4;
    local_190 = operator_new(uVar21);
    memset(local_190,0xff,uVar21);
    uVar28 = *(ulong *)(param_1 + 0x50);
    if (0x555555555555555 < uVar28) goto LAB_00109cc9;
    if (uVar28 == 0) {
      local_160 = (undefined1 (*) [16])0x0;
      pauVar31 = (undefined1 (*) [16])0x0;
      uVar28 = 0;
    }
    else {
      uVar28 = uVar28 * 0x18;
      local_160 = (undefined1 (*) [16])operator_new(uVar28);
      pauVar31 = (undefined1 (*) [16])((long)local_160 + uVar28);
      pauVar19 = local_160;
      do {
        *(undefined8 *)pauVar19[1] = 0;
        pauVar23 = pauVar19 + 1;
        *pauVar19 = (undefined1  [16])0x0;
        pauVar19 = (undefined1 (*) [16])(*pauVar23 + 8);
      } while ((undefined1 (*) [16])(*pauVar23 + 8) != pauVar31);
    }
  }
  uVar20 = (ulong)*(uint *)this * (long)local_1b8;
  if (uVar20 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::reserve");
  }
  lVar32 = *(long *)(this + 8);
  if ((ulong)(*(long *)(this + 0x18) - lVar32 >> 2) < uVar20) {
    lVar24 = *(long *)(this + 0x10);
    __dest = operator_new(uVar20 * 4);
    pvVar10 = *(void **)(this + 8);
    if (*(long *)(this + 0x10) - (long)pvVar10 < 1) {
      if (pvVar10 != (void *)0x0) {
        uVar35 = *(long *)(this + 0x18) - (long)pvVar10;
        goto LAB_00109c88;
      }
    }
    else {
      memmove(__dest,pvVar10,*(long *)(this + 0x10) - (long)pvVar10);
      uVar35 = *(long *)(this + 0x18) - (long)pvVar10;
LAB_00109c88:
      operator_delete(pvVar10,uVar35);
    }
    *(void **)(this + 8) = __dest;
    *(long *)(this + 0x10) = (lVar24 - lVar32) + (long)__dest;
    *(void **)(this + 0x18) = (void *)(uVar20 * 4 + (long)__dest);
  }
  uVar41 = local_128._0_8_;
  lVar32 = *(long *)(this + 0x88);
  local_170 = (void *)local_128._0_8_;
  pauVar19 = local_160;
  if (lVar32 != *(long *)(this + 0x80)) {
    local_180 = 0;
    lVar24 = *(long *)(this + 0x68);
    do {
      lVar3 = local_180 * 4;
      lVar22 = local_180 * 4;
      local_180 = local_180 + 1;
      uVar20 = (ulong)*(uint *)(lVar24 + lVar22) / 3;
      if (uVar20 < (ulong)*(uint *)(lVar24 + 4 + lVar3) / 3) {
        do {
          local_58 = 2;
          puVar1 = (undefined8 *)
                   (*(long *)(param_1 + 0x128) + (long)*(int *)(local_1e0 + uVar20 * 4) * 0xc);
          local_134 = *puVar1;
          local_12c = *(int *)(puVar1 + 1);
          local_60 = _LC27;
          piVar37 = (int *)&local_60;
          do {
            iVar8 = *piVar37;
            if (iVar8 == 0) {
              iVar26 = (int)local_134;
            }
            else {
              iVar26 = local_12c;
              if (iVar8 == 1) {
                iVar26 = local_134._4_4_;
              }
            }
            piVar36 = (int *)(*(long *)(this + 0x20) + ((long)iVar8 + uVar20 * 3) * 4);
            iVar8 = *piVar36;
            lVar32 = (long)iVar8 * 0x18;
            pvVar2 = (vector<linalg::vec<int,2>,std::allocator<linalg::vec<int,2>>> *)
                     ((long)local_160 + lVar32);
            pdVar9 = *(double **)(pvVar2 + 8);
            for (pdVar29 = *(double **)pvVar2; pdVar9 != pdVar29; pdVar29 = pdVar29 + 1) {
              if (iVar26 == *(int *)pdVar29) {
                *piVar36 = *(int *)((long)pdVar29 + 4);
                goto LAB_001095d6;
              }
            }
            pfVar25 = *(float **)(this + 0x10);
            iVar15 = (int)((ulong)((long)pfVar25 - *(long *)(this + 8) >> 2) / (ulong)*(uint *)this)
            ;
            *piVar36 = iVar15;
            local_d8._4_4_ = iVar15;
            local_d8._0_4_ = iVar26;
            if (pdVar9 == *(double **)(pvVar2 + 0x10)) {
              std::vector<linalg::vec<int,2>,std::allocator<linalg::vec<int,2>>>::
              _M_realloc_insert<linalg::vec<int,2>>(pvVar2,pdVar9,local_d8);
              pfVar25 = *(float **)(this + 0x10);
            }
            else {
              *pdVar9 = (double)local_d8;
              *(double **)(pvVar2 + 8) = pdVar9 + 1;
            }
            lVar24 = *(long *)(param_1 + 0x48);
            local_48 = 2;
            local_50._0_4_ = (int)_LC27;
            piVar36 = (int *)&local_50;
            uVar14 = _LC27;
            iVar6 = (int)local_50;
            while( true ) {
              local_50 = uVar14;
              pdVar29 = (double *)(lVar24 + lVar32);
              if (iVar6 == 0) {
                dVar40 = *pdVar29;
              }
              else if (iVar6 == 1) {
                dVar40 = pdVar29[1];
              }
              else {
                dVar40 = pdVar29[2];
              }
              local_d8._0_4_ = (float)dVar40;
              if (*(float **)(this + 0x18) == pfVar25) {
                std::vector<float,std::allocator<float>>::_M_realloc_insert<float>
                          (this_00,pfVar25,local_d8);
              }
              else {
                *pfVar25 = (float)dVar40;
                *(float **)(this + 0x10) = pfVar25 + 1;
              }
              piVar36 = piVar36 + 1;
              if (piVar36 == &local_44) break;
              lVar24 = *(long *)(param_1 + 0x48);
              iVar6 = *piVar36;
              pfVar25 = *(float **)(this + 0x10);
              uVar14 = local_50;
            }
            if (0 < iVar4) {
              lVar32 = (long)(iVar26 * iVar4) * 8;
              do {
                pfVar25 = *(float **)(this + 0x10);
                local_d8._0_4_ = (float)*(double *)(*(long *)(param_1 + 200) + lVar32);
                if (pfVar25 == *(float **)(this + 0x18)) {
                  std::vector<float,std::allocator<float>>::_M_realloc_insert<float>
                            (this_00,pfVar25,local_d8);
                }
                else {
                  *pfVar25 = (float)*(double *)(*(long *)(param_1 + 200) + lVar32);
                  *(float **)(this + 0x10) = pfVar25 + 1;
                }
                lVar32 = lVar32 + 8;
              } while (lVar32 != ((long)(iVar26 * iVar4) + (long)iVar4) * 8);
            }
            if ((int)(~param_2 & uVar5) < 0) {
              lVar32 = *(long *)(this + 8);
              dStack_c8 = 0.0;
              _local_d8 = (undefined1  [16])0x0;
              iVar26 = ((int)(*(long *)(this + 0x10) - lVar32 >> 2) - *(int *)this) + 3 + param_2;
              piVar36 = (int *)&local_50;
              do {
                iVar6 = *piVar36;
                pdVar29 = (double *)local_d8;
                if ((iVar6 != 0) && (pdVar29 = (double *)(local_d8 + 8), iVar6 != 1)) {
                  pdVar29 = &dStack_c8;
                }
                piVar36 = piVar36 + 1;
                *pdVar29 = (double)*(float *)(lVar32 + (long)(iVar6 + iVar26) * 4);
              } while (piVar36 != &local_44);
              local_48 = 2;
              dVar45 = *(double *)(uVar41 + local_180 * 0x48 + -0x30) * 0.0 +
                       *(double *)(uVar41 + local_180 * 0x48 + -0x48) * 0.0 +
                       *(double *)(uVar41 + local_180 * 0x48 + -0x18) * dStack_c8;
              local_50 = _LC27;
              dVar42 = *(double *)(uVar41 + local_180 * 0x48 + -0x28) * 0.0 +
                       *(double *)(uVar41 + local_180 * 0x48 + -0x40) * 0.0 +
                       *(double *)(uVar41 + local_180 * 0x48 + -0x10) * dStack_c8;
              dVar40 = *(double *)(uVar41 + local_180 * 0x48 + -0x20) * 0.0 +
                       *(double *)(uVar41 + local_180 * 0x48 + -0x38) * 0.0 +
                       dStack_c8 * *(double *)(uVar41 + local_180 * 0x48 + -8);
              dVar43 = SQRT(dVar45 * dVar45 + 0.0 + dVar42 * dVar42 + dVar40 * dVar40);
              piVar36 = (int *)&local_50;
              do {
                iVar6 = *piVar36;
                dVar44 = dVar45 / dVar43;
                if ((iVar6 != 0) && (dVar44 = dVar42 / dVar43, iVar6 != 1)) {
                  dVar44 = dVar40 / dVar43;
                }
                piVar36 = piVar36 + 1;
                *(float *)(lVar32 + (long)(iVar6 + iVar26) * 4) = (float)dVar44;
              } while (piVar36 != &local_44);
            }
            piVar36 = (int *)((long)local_190 + (long)iVar8 * 4);
            if (*piVar36 == -1) {
              *piVar36 = iVar15;
            }
            else {
              piVar11 = *(int **)(this + 0x40);
              if (piVar11 == *(int **)(this + 0x48)) {
                local_d8._0_4_ = iVar15;
                std::vector<unsigned_int,std::allocator<unsigned_int>>::
                _M_realloc_insert<unsigned_int>
                          ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x38),
                           piVar11,local_d8);
              }
              else {
                *piVar11 = iVar15;
                *(int **)(this + 0x40) = piVar11 + 1;
              }
              piVar11 = *(int **)(this + 0x58);
              local_d8._0_4_ = *piVar36;
              if (piVar11 == *(int **)(this + 0x60)) {
                std::vector<unsigned_int,std::allocator<unsigned_int>>::
                _M_realloc_insert<unsigned_int>
                          ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x50),
                           piVar11,local_d8);
              }
              else {
                *piVar11 = *piVar36;
                *(int **)(this + 0x58) = piVar11 + 1;
              }
            }
LAB_001095d6:
            piVar37 = piVar37 + 1;
          } while (piVar37 != &local_54);
          lVar24 = *(long *)(this + 0x68);
          uVar20 = uVar20 + 1;
        } while (uVar20 < (ulong)*(uint *)(lVar24 + lVar3 + 4) / 3);
        lVar32 = *(long *)(this + 0x88);
      }
    } while (local_180 < (ulong)(lVar32 - *(long *)(this + 0x80) >> 2));
  }
  for (; pauVar19 != pauVar31; pauVar19 = (undefined1 (*) [16])(pauVar19[1] + 8)) {
    pvVar10 = *(void **)*pauVar19;
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10,*(long *)pauVar19[1] - (long)pvVar10);
    }
  }
  if (local_160 != (undefined1 (*) [16])0x0) {
    operator_delete(local_160,uVar28);
  }
  if (local_190 != (void *)0x0) {
    operator_delete(local_190,uVar21);
  }
LAB_001092d3:
  std::
  _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
  ::_M_erase((_Rb_tree_node *)local_f8);
  if (local_170 != (void *)0x0) {
    operator_delete(local_170,local_118 - (long)local_170);
  }
  if (local_1e0 != (_Alloc_node *)0x0) {
    operator_delete(local_1e0,local_168);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::GetMeshGL(int) const */

_anonymous_namespace_ * manifold::Manifold::GetMeshGL(int param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long lVar2;
  int iVar3;
  int in_EDX;
  Manifold *in_RSI;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  Impl *local_38;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_30;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(in_RSI);
  manifold::CsgLeafNode::GetImpl();
  if (local_30 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_30 + 8;
    if (*(long *)(local_30 + 8) == 0x100000001) {
      *(undefined8 *)(local_30 + 8) = 0;
      (**(code **)(*(long *)local_30 + 0x10))(local_30);
      (**(code **)(*(long *)local_30 + 0x18))(local_30);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar3 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar3 = *(int *)(local_30 + 8);
        *(int *)(local_30 + 8) = iVar3 + -1;
      }
      if (iVar3 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_30);
      }
    }
  }
  (anonymous_namespace)::GetMeshGLImpl<float,unsigned_int>
            ((_anonymous_namespace_ *)CONCAT44(in_register_0000003c,param_1),local_38,in_EDX);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (_anonymous_namespace_ *)CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* manifold::MeshGLP<double, unsigned long> (anonymous namespace)::GetMeshGLImpl<double, unsigned
   long>(manifold::Manifold::Impl const&, int) */

_anonymous_namespace_ * __thiscall
(anonymous_namespace)::GetMeshGLImpl<double,unsigned_long>
          (_anonymous_namespace_ *this,Impl *param_1,int param_2)

{
  vector<double,std::allocator<double>> *this_00;
  undefined8 *puVar1;
  long *plVar2;
  vector<linalg::vec<int,2>,std::allocator<linalg::vec<int,2>>> *pvVar3;
  double *pdVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  void *pvVar9;
  undefined1 (*pauVar10) [16];
  undefined8 uVar11;
  _Rb_tree_node *p_Var12;
  int iVar13;
  ulong uVar14;
  ulong *puVar15;
  _Rb_tree_node_base *p_Var16;
  _Rb_tree_node_base *p_Var17;
  undefined1 (*pauVar18) [16];
  ulong uVar19;
  long lVar20;
  long lVar21;
  void *__dest;
  undefined8 *puVar22;
  _Alloc_node *p_Var23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  _Alloc_node *extraout_RDX;
  _Alloc_node *extraout_RDX_00;
  _Alloc_node *extraout_RDX_01;
  Relation *pRVar27;
  _Alloc_node *extraout_RDX_02;
  long lVar28;
  _Alloc_node *p_Var29;
  int iVar30;
  int iVar31;
  _Rb_tree_node_base *p_Var32;
  long lVar33;
  _Alloc_node *p_Var34;
  int *piVar35;
  int *piVar36;
  int iVar37;
  undefined1 (*pauVar38) [16];
  long lVar39;
  long in_FS_OFFSET;
  bool bVar40;
  double dVar41;
  undefined8 uVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  byte local_200;
  undefined1 (*local_1f8) [16];
  _Alloc_node *local_1e0;
  int local_1c0;
  Relation *local_198;
  void *local_190;
  void *local_168;
  ulong local_158;
  _lambda_manifold__MeshGLP<double,unsigned_long>__std__vector<linalg::mat<double,3,3>,std::allocator<linalg::mat<double,3,3>>>__int_manifold__Manifold__Impl__Relation_const___1_
  local_136;
  byte local_135;
  undefined8 local_134;
  int local_12c;
  undefined1 local_128 [16];
  long local_118;
  _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
  local_108 [8];
  undefined4 local_100 [2];
  _Rb_tree_node_base *local_f8;
  _Rb_tree_node_base *local_f0;
  _Rb_tree_node_base *local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  double dStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 local_70;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *(int *)(param_1 + 0xc4);
  if (iVar5 == 0) {
    local_1c0 = (int)*(undefined8 *)(param_1 + 0x50);
  }
  else {
    local_1c0 = (int)(*(ulong *)(param_1 + 0xd0) / (ulong)(long)iVar5);
  }
  uVar6 = *(uint *)(param_1 + 0xc0);
  uVar14 = *(ulong *)(param_1 + 0x68);
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  p_Var23 = (_Alloc_node *)(uVar14 / 3);
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  this_00 = (vector<double,std::allocator<double>> *)(this + 8);
  *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
  *(long *)this = (long)(iVar5 + 3);
  iVar13 = (int)p_Var23;
  *(undefined1 (*) [16])(this + 0x88) = (undefined1  [16])0x0;
  uVar14 = (ulong)(iVar13 * 3);
  *(undefined1 (*) [16])(this + 0x98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 200) = (undefined1  [16])0x0;
  uVar42 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = uVar42;
  if (uVar14 == 0) {
    lVar28 = (long)(int)*(undefined8 *)(param_1 + 0xb0);
    local_158 = (ulong)((int)*(undefined8 *)(param_1 + 0xb0) << 2);
    if (local_158 != 0) {
LAB_0010a841:
      std::vector<double,std::allocator<double>>::_M_default_append
                ((vector<double,std::allocator<double>> *)(this + 200),local_158);
      lVar20 = *(long *)(this + 0xb8);
      lVar39 = *(long *)(this + 0xb0);
      lVar33 = lVar20 - lVar39;
      p_Var23 = extraout_RDX;
      goto LAB_0010a877;
    }
LAB_00109f39:
    local_1e0 = (_Alloc_node *)0x0;
LAB_00109f42:
    lVar28 = *(long *)(param_1 + 0x110);
  }
  else {
    std::vector<unsigned_long,std::allocator<unsigned_long>>::_M_default_append
              ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x20),uVar14);
    lVar28 = (long)(int)*(undefined8 *)(param_1 + 0xb0);
    p_Var34 = (_Alloc_node *)(long)((int)*(undefined8 *)(param_1 + 0xb0) << 2);
    p_Var23 = (_Alloc_node *)(*(long *)(this + 0xd0) - *(long *)(this + 200) >> 3);
    if (p_Var23 < p_Var34) {
      local_158 = (long)p_Var34 - (long)p_Var23;
      goto LAB_0010a841;
    }
    if ((p_Var34 < p_Var23) &&
       (lVar39 = *(long *)(this + 200) + (long)p_Var34 * 8, *(long *)(this + 0xd0) != lVar39)) {
      *(long *)(this + 0xd0) = lVar39;
    }
    lVar20 = *(long *)(this + 0xb8);
    lVar39 = *(long *)(this + 0xb0);
    lVar33 = lVar20 - lVar39;
LAB_0010a877:
    uVar26 = lVar33 >> 3;
    if (0 < (int)lVar28) {
      lVar33 = *(long *)(param_1 + 0xa8);
      p_Var23 = *(_Alloc_node **)(this + 200);
      lVar21 = 0;
      do {
        pauVar38 = (undefined1 (*) [16])(lVar33 + lVar21);
        uVar42 = *(undefined8 *)(*pauVar38 + 8);
        local_d8 = *pauVar38;
        pdVar4 = (double *)(lVar33 + 0x10 + lVar21);
        dStack_c8 = *pdVar4;
        dVar41 = pdVar4[1];
        *(undefined8 *)(p_Var23 + lVar21) = *(undefined8 *)*pauVar38;
        *(undefined8 *)(p_Var23 + lVar21 + 8) = uVar42;
        *(double *)(p_Var23 + lVar21 + 0x10) = dStack_c8;
        *(double *)(p_Var23 + lVar21 + 0x10 + 8) = dVar41;
        lVar21 = lVar21 + 0x20;
        auStack_c0._0_8_ = dVar41;
      } while (lVar21 != lVar28 * 0x20);
    }
    uVar19 = (ulong)iVar13;
    if (uVar26 < uVar19) {
      std::vector<unsigned_long,std::allocator<unsigned_long>>::_M_default_append
                ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0xb0),
                 uVar19 - uVar26);
      if (uVar19 >> 0x3d != 0) goto LAB_0010aff4;
    }
    else {
      if ((uVar19 < uVar26) && (lVar39 = lVar39 + uVar19 * 8, lVar39 != lVar20)) {
        *(long *)(this + 0xb8) = lVar39;
      }
      if (uVar19 >> 0x3d != 0) goto LAB_0010aff4;
      local_158 = uVar19;
      if (uVar19 == 0) goto LAB_00109f39;
    }
    local_158 = uVar19 * 4;
    local_1e0 = (_Alloc_node *)operator_new(local_158);
    p_Var34 = local_1e0 + 4;
    *(int *)local_1e0 = 0;
    p_Var23 = extraout_RDX_00;
    if (uVar19 == 1) {
      local_158 = 4;
      p_Var29 = p_Var34;
    }
    else {
      p_Var29 = local_1e0 + local_158;
      if (p_Var34 != p_Var29) {
        memset(p_Var34,0,local_158 - 4);
        p_Var23 = extraout_RDX_01;
      }
    }
    if (p_Var29 == local_1e0) goto LAB_00109f42;
    p_Var34 = (_Alloc_node *)0x0;
    do {
      p_Var23 = p_Var34;
      *(int *)(local_1e0 + (long)p_Var23 * 4) = (int)p_Var23;
      p_Var34 = p_Var23 + 1;
    } while ((_Alloc_node *)((ulong)(p_Var29 + (-4 - (long)local_1e0)) >> 2) != p_Var23);
    lVar28 = *(long *)(param_1 + 0x110);
    if ((int)uVar6 < 0) {
      uVar42 = *(undefined8 *)(param_1 + 0x118);
      lVar39 = -2;
      uVar26 = (long)p_Var29 - (long)local_1e0 >> 2;
      if (uVar26 != 0) {
        lVar39 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar39 == 0; lVar39 = lVar39 + -1) {
          }
        }
        lVar39 = (long)(int)lVar39 * 2;
      }
      local_d8._0_8_ = lVar28;
      local_d8._8_8_ = uVar42;
      std::
      __introsort_loop<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::GetMeshGLImpl<double,unsigned_long>(manifold::Manifold::Impl_const&,int)::_lambda(int,int)_1_>>
                (local_1e0,p_Var29,lVar39,local_d8);
      local_d8._8_8_ = uVar42;
      local_d8._0_8_ = lVar28;
      if ((long)p_Var29 - (long)local_1e0 < 0x41) {
        std::
        __insertion_sort<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::GetMeshGLImpl<double,unsigned_long>(manifold::Manifold::Impl_const&,int)::_lambda(int,int)_1_>>
                  (local_1e0,p_Var29,local_d8);
        p_Var23 = extraout_RDX_02;
      }
      else {
        p_Var23 = local_1e0 + 0x40;
        std::
        __insertion_sort<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::GetMeshGLImpl<double,unsigned_long>(manifold::Manifold::Impl_const&,int)::_lambda(int,int)_1_>>
                  (local_1e0,p_Var23,local_d8);
        for (; p_Var29 != p_Var23; p_Var23 = p_Var23 + 4) {
          iVar30 = *(int *)p_Var23;
          piVar36 = (int *)((long)iVar30 * 0x10 + lVar28);
          p_Var34 = p_Var23;
          while( true ) {
            iVar31 = piVar36[1];
            piVar35 = (int *)((long)*(int *)(p_Var34 + -4) * 0x10 + lVar28);
            iVar37 = piVar35[1];
            bVar40 = iVar31 < iVar37;
            if (iVar31 == iVar37) {
              bVar40 = *piVar36 < *piVar35;
            }
            if (!bVar40) break;
            *(int *)p_Var34 = *(int *)(p_Var34 + -4);
            p_Var34 = p_Var34 + -4;
          }
          *(int *)p_Var34 = iVar30;
        }
      }
    }
  }
  local_198 = (Relation *)local_d8;
  local_200 = (byte)~(byte)(uVar6 >> 0x18) >> 7;
  local_118 = 0;
  local_136 = SUB41((~param_2 & uVar6) >> 0x1f,0);
  local_135 = local_200;
  local_100[0] = 0;
  local_f8 = (_Rb_tree_node_base *)0x0;
  local_e0 = 0;
  local_128 = (undefined1  [16])0x0;
  local_f0 = (_Rb_tree_node_base *)local_100;
  local_e8 = (_Rb_tree_node_base *)local_100;
  if (*(_Rb_tree_node **)(param_1 + 0xf0) == (_Rb_tree_node *)0x0) {
    if (0 < iVar13) {
LAB_0010a033:
      uVar26 = 0;
      iVar30 = -1;
      uVar42 = _LC6;
      do {
        local_48 = 2;
        lVar39 = *(long *)(param_1 + 0x60);
        iVar31 = *(int *)(local_1e0 + uVar26 * 4);
        lVar20 = *(long *)(this + 0x20);
        puVar15 = (ulong *)((long)iVar31 * 0x10 + lVar28);
        uVar19 = *puVar15;
        *(long *)(*(long *)(this + 0xb0) + uVar26 * 8) = (long)(int)puVar15[1];
        iVar37 = (int)uVar19;
        local_50 = _LC27;
        piVar36 = (int *)&local_50;
        do {
          iVar7 = *piVar36;
          piVar36 = piVar36 + 1;
          *(long *)(lVar20 + (long)((int)uVar26 * 3 + iVar7) * 8) =
               (long)*(int *)(lVar39 + (long)(iVar7 + iVar31 * 3) * 0xc);
        } while (&local_44 != piVar36);
        if (iVar37 != iVar30) {
          local_d8._0_4_ = 0xffffffff;
          local_70 = 0;
          local_d8._8_8_ = uVar42;
          dStack_c8 = 0.0;
          auStack_c0 = (undefined1  [16])0x0;
          local_b0 = uVar42;
          uStack_a8 = 0;
          local_a0 = (undefined1  [16])0x0;
          local_90 = uVar42;
          uStack_88 = 0;
          local_80 = 0;
          uStack_7f = 0;
          uStack_78 = 0;
          uStack_77 = 0;
          p_Var17 = local_f8;
          p_Var32 = (_Rb_tree_node_base *)local_100;
          if (local_f8 != (_Rb_tree_node_base *)0x0) {
            do {
              while( true ) {
                p_Var16 = p_Var17;
                if (*(int *)(p_Var16 + 0x20) < iVar37) break;
                p_Var17 = *(_Rb_tree_node_base **)(p_Var16 + 0x10);
                p_Var32 = p_Var16;
                if (*(_Rb_tree_node_base **)(p_Var16 + 0x10) == (_Rb_tree_node_base *)0x0)
                goto LAB_0010a180;
              }
              p_Var17 = *(_Rb_tree_node_base **)(p_Var16 + 0x18);
            } while (*(_Rb_tree_node_base **)(p_Var16 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_0010a180:
            if ((p_Var32 != (_Rb_tree_node_base *)local_100) && (*(int *)(p_Var32 + 0x20) <= iVar37)
               ) {
              local_d8 = *(undefined1 (*) [16])(p_Var32 + 0x28);
              dStack_c8 = *(double *)(p_Var32 + 0x38);
              auStack_c0._8_8_ = 0;
              auStack_c0._0_8_ = *(ulong *)(p_Var32 + 0x40);
              auStack_c0 = *(undefined1 (*) [16])(p_Var32 + 0x40);
              local_b0 = *(undefined8 *)(p_Var32 + 0x50);
              uStack_a8 = *(undefined8 *)(p_Var32 + 0x58);
              local_a0._8_8_ = 0;
              local_a0._0_8_ = *(ulong *)(p_Var32 + 0x60);
              uStack_88 = *(undefined8 *)(p_Var32 + 0x78);
              local_a0 = *(undefined1 (*) [16])(p_Var32 + 0x60);
              local_90 = *(undefined8 *)(p_Var32 + 0x70);
              local_80 = (undefined1)*(undefined8 *)(p_Var32 + 0x80);
              uStack_7f = (undefined7)*(undefined8 *)(p_Var32 + 0x81);
              uStack_78 = (undefined1)((ulong)*(undefined8 *)(p_Var32 + 0x81) >> 0x38);
              uStack_77 = (undefined7)*(undefined8 *)(p_Var32 + 0x89);
              local_70 = (undefined1)((ulong)*(undefined8 *)(p_Var32 + 0x89) >> 0x38);
            }
          }
          GetMeshGLImpl<double,unsigned_long>(manifold::Manifold::Impl_const&,int)::
          {lambda(manifold::MeshGLP<double,unsigned_long>&,std::vector<linalg::mat<double,3,3>,std::allocator<linalg::mat<double,3,3>>>&,int,manifold::Manifold::Impl::Relation_const&)#1}
          ::operator()(&local_136,(MeshGLP *)this,(vector *)local_128,(int)uVar26,local_198);
          std::
          _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
          ::erase(local_108,(int *)(uVar19 & 0xffffffff));
          uVar42 = _LC6;
        }
        bVar40 = uVar26 != iVar13 - 1;
        uVar26 = uVar26 + 1;
        iVar30 = iVar37;
      } while (bVar40);
      goto LAB_0010a23a;
    }
  }
  else {
    local_f8 = (_Rb_tree_node_base *)
               std::
               _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
               ::
               _M_copy<false,std::_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>::_Alloc_node>
                         (*(_Rb_tree_node **)(param_1 + 0xf0),(_Rb_tree_node_base *)local_100,
                          p_Var23);
    p_Var12 = (_Rb_tree_node *)local_f8;
    do {
      local_f0 = (_Rb_tree_node_base *)p_Var12;
      p_Var17 = local_f8;
      p_Var12 = (_Rb_tree_node *)*(_Rb_tree_node_base **)(local_f0 + 0x10);
    } while (*(_Rb_tree_node_base **)(local_f0 + 0x10) != (_Rb_tree_node_base *)0x0);
    do {
      local_e8 = p_Var17;
      p_Var17 = *(_Rb_tree_node_base **)(local_e8 + 0x18);
    } while (*(_Rb_tree_node_base **)(local_e8 + 0x18) != (_Rb_tree_node_base *)0x0);
    local_e0 = *(undefined8 *)(param_1 + 0x108);
    if (0 < iVar13) goto LAB_0010a033;
LAB_0010a23a:
    p_Var17 = local_f0;
    while (p_Var17 != (_Rb_tree_node_base *)local_100) {
      GetMeshGLImpl<double,unsigned_long>(manifold::Manifold::Impl_const&,int)::
      {lambda(manifold::MeshGLP<double,unsigned_long>&,std::vector<linalg::mat<double,3,3>,std::allocator<linalg::mat<double,3,3>>>&,int,manifold::Manifold::Impl::Relation_const&)#1}
      ::operator()(&local_136,(MeshGLP *)this,(vector *)local_128,iVar13,
                   (Relation *)(p_Var17 + 0x28));
      p_Var17 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var17);
    }
  }
  local_d8._0_8_ = uVar14;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::emplace_back<unsigned_long>
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x68),(ulong *)local_198
            );
  if (iVar5 == 0) {
    uVar14 = (ulong)(local_1c0 * 3);
    uVar26 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    if (uVar26 < uVar14) {
      std::vector<double,std::allocator<double>>::_M_default_append(this_00,uVar14 - uVar26);
    }
    else if ((uVar14 < uVar26) &&
            (lVar28 = *(long *)(this + 8) + uVar14 * 8, *(long *)(this + 0x10) != lVar28)) {
      *(long *)(this + 0x10) = lVar28;
    }
    local_168 = (void *)local_128._0_8_;
    if (0 < local_1c0) {
      lVar28 = *(long *)(param_1 + 0x48);
      lVar39 = *(long *)(this + 8);
      lVar20 = 0;
      do {
        pauVar38 = (undefined1 (*) [16])(lVar28 + lVar20);
        uVar42 = *(undefined8 *)(*pauVar38 + 8);
        local_d8 = *pauVar38;
        dStack_c8 = *(double *)(lVar28 + 0x10 + lVar20);
        puVar22 = (undefined8 *)(lVar39 + lVar20);
        *puVar22 = *(undefined8 *)*pauVar38;
        puVar22[1] = uVar42;
        *(double *)(lVar39 + 0x10 + lVar20) = dStack_c8;
        lVar20 = lVar20 + 0x18;
      } while (lVar20 != ((ulong)(local_1c0 - 1) * 3 + 3) * 8);
    }
    goto LAB_0010a7c6;
  }
  uVar14 = *(ulong *)(param_1 + 0x50);
  if (uVar14 >> 0x3d != 0) {
LAB_0010aff4:
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  }
  if (uVar14 == 0) {
    local_190 = (void *)0x0;
    uVar14 = 0;
    pauVar38 = (undefined1 (*) [16])0x0;
    local_1f8 = (undefined1 (*) [16])0x0;
    uVar26 = 0;
  }
  else {
    uVar14 = uVar14 * 4;
    local_190 = operator_new(uVar14);
    memset(local_190,0xff,uVar14);
    uVar26 = *(ulong *)(param_1 + 0x50);
    if (0x555555555555555 < uVar26) goto LAB_0010aff4;
    if (uVar26 == 0) {
      local_1f8 = (undefined1 (*) [16])0x0;
      pauVar38 = (undefined1 (*) [16])0x0;
      uVar26 = 0;
    }
    else {
      uVar26 = uVar26 * 0x18;
      local_1f8 = (undefined1 (*) [16])operator_new(uVar26);
      pauVar38 = (undefined1 (*) [16])((long)local_1f8 + uVar26);
      pauVar18 = local_1f8;
      do {
        *(undefined8 *)pauVar18[1] = 0;
        pauVar10 = pauVar18 + 1;
        *pauVar18 = (undefined1  [16])0x0;
        pauVar18 = (undefined1 (*) [16])(*pauVar10 + 8);
      } while (pauVar38 != (undefined1 (*) [16])(*pauVar10 + 8));
    }
  }
  uVar19 = (long)local_1c0 * *(long *)this;
  if (uVar19 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::reserve");
  }
  lVar28 = *(long *)(this + 8);
  if ((ulong)(*(long *)(this + 0x18) - lVar28 >> 3) < uVar19) {
    lVar39 = *(long *)(this + 0x10);
    __dest = operator_new(uVar19 * 8);
    pvVar9 = *(void **)(this + 8);
    if (*(long *)(this + 0x10) - (long)pvVar9 < 1) {
      if (pvVar9 != (void *)0x0) {
        uVar24 = *(long *)(this + 0x18) - (long)pvVar9;
        goto LAB_0010afb5;
      }
    }
    else {
      memmove(__dest,pvVar9,*(long *)(this + 0x10) - (long)pvVar9);
      uVar24 = *(long *)(this + 0x18) - (long)pvVar9;
LAB_0010afb5:
      operator_delete(pvVar9,uVar24);
    }
    *(void **)(this + 8) = __dest;
    *(long *)(this + 0x10) = (lVar39 - lVar28) + (long)__dest;
    *(void **)(this + 0x18) = (void *)((long)__dest + uVar19 * 8);
  }
  uVar42 = local_128._0_8_;
  lVar28 = *(long *)(this + 0x88);
  local_168 = (void *)local_128._0_8_;
  pauVar18 = local_1f8;
  if (lVar28 != *(long *)(this + 0x80)) {
    uVar19 = 0;
    lVar39 = *(long *)(this + 0x68);
    do {
      lVar20 = uVar19 * 8;
      lVar33 = uVar19 * 8;
      uVar19 = uVar19 + 1;
      uVar24 = *(ulong *)(lVar39 + lVar20) / 3;
      if (uVar24 < *(ulong *)(lVar39 + 8 + lVar33) / 3) {
        do {
          local_58 = 2;
          puVar22 = (undefined8 *)
                    (*(long *)(param_1 + 0x128) + (long)*(int *)(local_1e0 + uVar24 * 4) * 0xc);
          local_134 = *puVar22;
          local_12c = *(int *)(puVar22 + 1);
          local_60 = _LC27;
          piVar36 = (int *)&local_60;
          do {
            iVar13 = *piVar36;
            if (iVar13 == 0) {
              iVar30 = (int)local_134;
            }
            else {
              iVar30 = local_12c;
              if (iVar13 == 1) {
                iVar30 = local_134._4_4_;
              }
            }
            plVar2 = (long *)(*(long *)(this + 0x20) + ((long)iVar13 + uVar24 * 3) * 8);
            lVar28 = *plVar2;
            lVar39 = (long)(int)lVar28 * 0x18;
            pvVar3 = (vector<linalg::vec<int,2>,std::allocator<linalg::vec<int,2>>> *)
                     ((long)local_1f8 + lVar39);
            piVar35 = *(int **)pvVar3;
            piVar8 = *(int **)(pvVar3 + 8);
joined_r0x0010a50d:
            if (piVar8 == piVar35) {
              puVar22 = *(undefined8 **)(this + 0x10);
              iVar13 = (int)((ulong)((long)puVar22 - *(long *)(this + 8) >> 3) / *(ulong *)this);
              *plVar2 = (long)iVar13;
              local_d8._4_4_ = iVar13;
              local_d8._0_4_ = iVar30;
              if (piVar8 == *(int **)(pvVar3 + 0x10)) {
                std::vector<linalg::vec<int,2>,std::allocator<linalg::vec<int,2>>>::
                _M_realloc_insert<linalg::vec<int,2>>(pvVar3,piVar8,local_198);
                puVar22 = *(undefined8 **)(this + 0x10);
              }
              else {
                *(undefined8 *)piVar8 = local_d8._0_8_;
                *(int **)(pvVar3 + 8) = piVar8 + 2;
              }
              local_48 = 2;
              local_50 = _LC27;
              uVar11 = local_50;
              local_50._0_4_ = (int)_LC27;
              puVar25 = (undefined8 *)(*(long *)(param_1 + 0x48) + lVar39);
              bVar40 = (int)local_50 == 0;
              piVar35 = (int *)&local_50;
              iVar31 = (int)local_50;
              local_50 = uVar11;
              if (bVar40) goto LAB_0010a5c7;
LAB_0010a5b8:
              puVar1 = puVar25 + 1;
              puVar25 = puVar25 + 2;
              if (iVar31 == 1) {
                puVar25 = puVar1;
              }
LAB_0010a5c7:
              if (*(undefined8 **)(this + 0x18) == puVar22) goto LAB_0010a600;
LAB_0010a5cd:
              *puVar22 = *puVar25;
              *(undefined8 **)(this + 0x10) = puVar22 + 1;
joined_r0x0010a5e5:
              piVar35 = piVar35 + 1;
              if (piVar35 == &local_44) {
                if (0 < iVar5) {
                  lVar39 = (long)(iVar30 * iVar5) * 8;
                  do {
                    puVar22 = *(undefined8 **)(this + 0x10);
                    if (puVar22 == *(undefined8 **)(this + 0x18)) {
                      std::vector<double,std::allocator<double>>::_M_realloc_insert<double_const&>
                                (this_00);
                    }
                    else {
                      *puVar22 = *(undefined8 *)(*(long *)(param_1 + 200) + lVar39);
                      *(undefined8 **)(this + 0x10) = puVar22 + 1;
                    }
                    lVar39 = lVar39 + 8;
                  } while (lVar39 != ((long)(iVar30 * iVar5) + (long)iVar5) * 8);
                }
                if ((int)(~param_2 & uVar6) < 0) {
                  lVar39 = *(long *)(this + 8);
                  dStack_c8 = 0.0;
                  local_d8 = (undefined1  [16])0x0;
                  iVar30 = ((int)(*(long *)(this + 0x10) - lVar39 >> 3) - *(int *)this) + 3 +
                           param_2;
                  piVar35 = (int *)&local_50;
                  do {
                    iVar31 = *piVar35;
                    pRVar27 = local_198;
                    if ((iVar31 != 0) && (pRVar27 = (Relation *)(local_d8 + 8), iVar31 != 1)) {
                      pRVar27 = (Relation *)&dStack_c8;
                    }
                    piVar35 = piVar35 + 1;
                    *(double *)pRVar27 = *(double *)(lVar39 + (long)(iVar31 + iVar30) * 8);
                  } while (piVar35 != &local_44);
                  local_48 = 2;
                  dVar46 = *(double *)(uVar42 + uVar19 * 0x48 + -0x30) * 0.0 +
                           *(double *)(uVar42 + uVar19 * 0x48 + -0x48) * 0.0 +
                           *(double *)(uVar42 + uVar19 * 0x48 + -0x18) * dStack_c8;
                  local_50 = _LC27;
                  dVar45 = *(double *)(uVar42 + uVar19 * 0x48 + -0x28) * 0.0 +
                           *(double *)(uVar42 + uVar19 * 0x48 + -0x40) * 0.0 +
                           *(double *)(uVar42 + uVar19 * 0x48 + -0x10) * dStack_c8;
                  dVar41 = *(double *)(uVar42 + uVar19 * 0x48 + -0x20) * 0.0 +
                           *(double *)(uVar42 + uVar19 * 0x48 + -0x38) * 0.0 +
                           dStack_c8 * *(double *)(uVar42 + uVar19 * 0x48 + -8);
                  dVar43 = SQRT(dVar46 * dVar46 + 0.0 + dVar45 * dVar45 + dVar41 * dVar41);
                  piVar35 = (int *)&local_50;
                  do {
                    iVar31 = *piVar35;
                    dVar44 = dVar46 / dVar43;
                    if ((iVar31 != 0) && (dVar44 = dVar45 / dVar43, iVar31 != 1)) {
                      dVar44 = dVar41 / dVar43;
                    }
                    piVar35 = piVar35 + 1;
                    *(double *)(lVar39 + (long)(iVar31 + iVar30) * 8) = dVar44;
                  } while (piVar35 != &local_44);
                }
                piVar35 = (int *)((long)local_190 + (long)(int)lVar28 * 4);
                if (*piVar35 == -1) {
                  *piVar35 = iVar13;
                }
                else {
                  local_d8._0_8_ = (long)iVar13;
                  std::vector<unsigned_long,std::allocator<unsigned_long>>::
                  emplace_back<unsigned_long>
                            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x38),
                             (ulong *)local_198);
                  local_d8._0_8_ = (long)*piVar35;
                  std::vector<unsigned_long,std::allocator<unsigned_long>>::
                  emplace_back<unsigned_long>
                            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x50),
                             (ulong *)local_198);
                }
                goto LAB_0010aae7;
              }
              iVar31 = *piVar35;
              puVar22 = *(undefined8 **)(this + 0x10);
              puVar25 = (undefined8 *)(*(long *)(param_1 + 0x48) + lVar39);
              if (iVar31 != 0) goto LAB_0010a5b8;
              if (*(undefined8 **)(this + 0x18) == puVar22) goto LAB_0010a600;
              goto LAB_0010a5cd;
            }
            if (iVar30 != *piVar35) goto code_r0x0010a517;
            *plVar2 = (long)piVar35[1];
LAB_0010aae7:
            piVar36 = piVar36 + 1;
          } while (piVar36 != &local_54);
          lVar39 = *(long *)(this + 0x68);
          uVar24 = uVar24 + 1;
          if (*(ulong *)(lVar39 + lVar33 + 8) / 3 <= uVar24) {
            lVar28 = *(long *)(this + 0x88);
            break;
          }
        } while( true );
      }
    } while (uVar19 < (ulong)(lVar28 - *(long *)(this + 0x80) >> 2));
  }
  for (; pauVar18 != pauVar38; pauVar18 = (undefined1 (*) [16])(pauVar18[1] + 8)) {
    pvVar9 = *(void **)*pauVar18;
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9,*(long *)pauVar18[1] - (long)pvVar9);
    }
  }
  if (local_1f8 != (undefined1 (*) [16])0x0) {
    operator_delete(local_1f8,uVar26);
  }
  if (local_190 != (void *)0x0) {
    operator_delete(local_190,uVar14);
  }
LAB_0010a7c6:
  std::
  _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
  ::_M_erase((_Rb_tree_node *)local_f8);
  if (local_168 != (void *)0x0) {
    operator_delete(local_168,local_118 - (long)local_168);
  }
  if (local_1e0 != (_Alloc_node *)0x0) {
    operator_delete(local_1e0,local_158);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
LAB_0010a600:
  std::vector<double,std::allocator<double>>::_M_realloc_insert<double_const&>(this_00,puVar22);
  goto joined_r0x0010a5e5;
code_r0x0010a517:
  piVar35 = piVar35 + 2;
  goto joined_r0x0010a50d;
}



/* manifold::Manifold::GetMeshGL64(int) const */

_anonymous_namespace_ * manifold::Manifold::GetMeshGL64(int param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long lVar2;
  int iVar3;
  int in_EDX;
  Manifold *in_RSI;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  Impl *local_38;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_30;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  GetCsgLeafNode(in_RSI);
  manifold::CsgLeafNode::GetImpl();
  if (local_30 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_30 + 8;
    if (*(long *)(local_30 + 8) == 0x100000001) {
      *(undefined8 *)(local_30 + 8) = 0;
      (**(code **)(*(long *)local_30 + 0x10))(local_30);
      (**(code **)(*(long *)local_30 + 0x18))(local_30);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar3 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar3 = *(int *)(local_30 + 8);
        *(int *)(local_30 + 8) = iVar3 + -1;
      }
      if (iVar3 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_30);
      }
    }
  }
  (anonymous_namespace)::GetMeshGLImpl<double,unsigned_long>
            ((_anonymous_namespace_ *)CONCAT44(in_register_0000003c,param_1),local_38,in_EDX);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (_anonymous_namespace_ *)CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Manifold(manifold::MeshGLP<float, unsigned int> const&) */

void __thiscall manifold::Manifold::Manifold(Manifold *this,MeshGLP *param_1)

{
  CsgLeafNode *pCVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var5;
  undefined8 *puVar6;
  long *plVar7;
  long in_FS_OFFSET;
  bool bVar8;
  Impl *local_48;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  p_Var5 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator_new(0x198);
  uVar3 = _LC5;
  *(undefined8 *)(p_Var5 + 8) = _LC5;
  *(undefined ***)p_Var5 = &PTR___Sp_counted_ptr_inplace_001113b0;
  Impl::Impl<float,unsigned_int>((Impl *)(p_Var5 + 0x10),param_1);
  puVar6 = (undefined8 *)operator_new(0x98);
  puVar6[1] = uVar3;
  *puVar6 = &PTR___Sp_counted_ptr_inplace_00111378;
  pCVar1 = (CsgLeafNode *)(puVar6 + 2);
  local_48 = (Impl *)(p_Var5 + 0x10);
  local_40 = p_Var5;
  manifold::CsgLeafNode::CsgLeafNode(pCVar1,&local_48);
  if (local_40 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_40);
  }
  if ((puVar6[4] != 0) && (*(int *)(puVar6[4] + 8) != 0)) goto LAB_0010b1aa;
  bVar8 = __libc_single_threaded == '\0';
  puVar6[3] = pCVar1;
  if (bVar8) {
    LOCK();
    *(int *)((long)puVar6 + 0xc) = *(int *)((long)puVar6 + 0xc) + 1;
    UNLOCK();
    plVar7 = (long *)puVar6[4];
    if (plVar7 != (long *)0x0) {
      if (__libc_single_threaded != '\0') goto LAB_0010b1ea;
      LOCK();
      piVar2 = (int *)((long)plVar7 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      goto LAB_0010b1f3;
    }
  }
  else {
    plVar7 = (long *)puVar6[4];
    *(int *)((long)puVar6 + 0xc) = *(int *)((long)puVar6 + 0xc) + 1;
    if (plVar7 != (long *)0x0) {
LAB_0010b1ea:
      iVar4 = *(int *)((long)plVar7 + 0xc);
      *(int *)((long)plVar7 + 0xc) = iVar4 + -1;
LAB_0010b1f3:
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
  }
  puVar6[4] = puVar6;
LAB_0010b1aa:
  *(CsgLeafNode **)this = pCVar1;
  *(undefined8 **)(this + 8) = puVar6;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Manifold(manifold::MeshGLP<double, unsigned long> const&) */

void __thiscall manifold::Manifold::Manifold(Manifold *this,MeshGLP *param_1)

{
  CsgLeafNode *pCVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var5;
  undefined8 *puVar6;
  long *plVar7;
  long in_FS_OFFSET;
  bool bVar8;
  Impl *local_48;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  p_Var5 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator_new(0x198);
  uVar3 = _LC5;
  *(undefined8 *)(p_Var5 + 8) = _LC5;
  *(undefined ***)p_Var5 = &PTR___Sp_counted_ptr_inplace_001113b0;
  Impl::Impl<double,unsigned_long>((Impl *)(p_Var5 + 0x10),param_1);
  puVar6 = (undefined8 *)operator_new(0x98);
  puVar6[1] = uVar3;
  *puVar6 = &PTR___Sp_counted_ptr_inplace_00111378;
  pCVar1 = (CsgLeafNode *)(puVar6 + 2);
  local_48 = (Impl *)(p_Var5 + 0x10);
  local_40 = p_Var5;
  manifold::CsgLeafNode::CsgLeafNode(pCVar1,&local_48);
  if (local_40 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_40);
  }
  if ((puVar6[4] != 0) && (*(int *)(puVar6[4] + 8) != 0)) goto LAB_0010b2ea;
  bVar8 = __libc_single_threaded == '\0';
  puVar6[3] = pCVar1;
  if (bVar8) {
    LOCK();
    *(int *)((long)puVar6 + 0xc) = *(int *)((long)puVar6 + 0xc) + 1;
    UNLOCK();
    plVar7 = (long *)puVar6[4];
    if (plVar7 != (long *)0x0) {
      if (__libc_single_threaded != '\0') goto LAB_0010b32a;
      LOCK();
      piVar2 = (int *)((long)plVar7 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      goto LAB_0010b333;
    }
  }
  else {
    plVar7 = (long *)puVar6[4];
    *(int *)((long)puVar6 + 0xc) = *(int *)((long)puVar6 + 0xc) + 1;
    if (plVar7 != (long *)0x0) {
LAB_0010b32a:
      iVar4 = *(int *)((long)plVar7 + 0xc);
      *(int *)((long)plVar7 + 0xc) = iVar4 + -1;
LAB_0010b333:
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
  }
  puVar6[4] = puVar6;
LAB_0010b2ea:
  *(CsgLeafNode **)this = pCVar1;
  *(undefined8 **)(this + 8) = puVar6;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Sp_counted_deleter<manifold::Manifold::Impl*,
   std::default_delete<manifold::Manifold::Impl>, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_deleter() */

void __thiscall
std::
_Sp_counted_deleter<manifold::Manifold::Impl*,std::default_delete<manifold::Manifold::Impl>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::~_Sp_counted_deleter
          (_Sp_counted_deleter<manifold::Manifold::Impl*,std::default_delete<manifold::Manifold::Impl>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgOpNode, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::Manifold::Impl, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::
_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgLeafNode, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  return;
}



/* std::_Sp_counted_deleter<manifold::Manifold::Impl*,
   std::default_delete<manifold::Manifold::Impl>, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_deleter() */

void __thiscall
std::
_Sp_counted_deleter<manifold::Manifold::Impl*,std::default_delete<manifold::Manifold::Impl>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::~_Sp_counted_deleter
          (_Sp_counted_deleter<manifold::Manifold::Impl*,std::default_delete<manifold::Manifold::Impl>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  operator_delete(this,0x18);
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgOpNode, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  operator_delete(this,0xc0);
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::Manifold::Impl, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::
_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  operator_delete(this,0x198);
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgLeafNode, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  operator_delete(this,0x98);
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgOpNode, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
_M_dispose(_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  manifold::CsgOpNode::~CsgOpNode((CsgOpNode *)(this + 0x10));
  return;
}



/* std::_Sp_counted_deleter<manifold::Manifold::Impl*,
   std::default_delete<manifold::Manifold::Impl>, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_destroy() */

void __thiscall
std::
_Sp_counted_deleter<manifold::Manifold::Impl*,std::default_delete<manifold::Manifold::Impl>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_destroy(_Sp_counted_deleter<manifold::Manifold::Impl*,std::default_delete<manifold::Manifold::Impl>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
             *this)

{
  operator_delete(this,0x18);
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgOpNode, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_destroy() */

void __thiscall
std::_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
_M_destroy(_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  operator_delete(this,0xc0);
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::Manifold::Impl, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_destroy() */

void __thiscall
std::
_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
_M_destroy(_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  operator_delete(this,0x198);
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgLeafNode, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_destroy() */

void __thiscall
std::_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_destroy(_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
             *this)

{
  operator_delete(this,0x98);
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgOpNode, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_get_deleter(std::type_info const&) */

_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> *
__thiscall
std::_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
_M_get_deleter(_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
               *this,type_info *param_1)

{
  char *__s1;
  int iVar1;
  _Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
  *p_Var2;
  
  p_Var2 = this + 0x10;
  if ((param_1 != (type_info *)_Sp_make_shared_tag::_S_ti()::__tag) &&
     (__s1 = *(char **)(param_1 + 8), __s1 != "St19_Sp_make_shared_tag")) {
    if (*__s1 == '*') {
      return (_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
              *)0x0;
    }
    iVar1 = strcmp(__s1,"St19_Sp_make_shared_tag");
    if (iVar1 != 0) {
      p_Var2 = (_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                *)0x0;
    }
  }
  return p_Var2;
}



/* std::_Sp_counted_deleter<manifold::Manifold::Impl*,
   std::default_delete<manifold::Manifold::Impl>, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_get_deleter(std::type_info const&) */

_Sp_counted_deleter<manifold::Manifold::Impl*,std::default_delete<manifold::Manifold::Impl>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
* __thiscall
std::
_Sp_counted_deleter<manifold::Manifold::Impl*,std::default_delete<manifold::Manifold::Impl>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_get_deleter(_Sp_counted_deleter<manifold::Manifold::Impl*,std::default_delete<manifold::Manifold::Impl>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                 *this,type_info *param_1)

{
  char *__s1;
  int iVar1;
  
  __s1 = *(char **)(param_1 + 8);
  if (__s1 != "St14default_deleteIN8manifold8Manifold4ImplEE") {
    if (*__s1 == '*') {
      return (_Sp_counted_deleter<manifold::Manifold::Impl*,std::default_delete<manifold::Manifold::Impl>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
              *)0x0;
    }
    iVar1 = strcmp(__s1,"St14default_deleteIN8manifold8Manifold4ImplEE");
    if (iVar1 != 0) {
      return (_Sp_counted_deleter<manifold::Manifold::Impl*,std::default_delete<manifold::Manifold::Impl>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
              *)0x0;
    }
  }
  return this + 0x10;
}



/* std::_Sp_counted_ptr_inplace<manifold::Manifold::Impl, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_get_deleter(std::type_info const&) */

_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> *
__thiscall
std::
_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
_M_get_deleter(_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
               *this,type_info *param_1)

{
  char *__s1;
  int iVar1;
  _Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
  *p_Var2;
  
  p_Var2 = this + 0x10;
  if ((param_1 != (type_info *)_Sp_make_shared_tag::_S_ti()::__tag) &&
     (__s1 = *(char **)(param_1 + 8), __s1 != "St19_Sp_make_shared_tag")) {
    if (*__s1 == '*') {
      return (_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
              *)0x0;
    }
    iVar1 = strcmp(__s1,"St19_Sp_make_shared_tag");
    if (iVar1 != 0) {
      p_Var2 = (_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                *)0x0;
    }
  }
  return p_Var2;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgLeafNode, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_get_deleter(std::type_info const&) */

_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> *
__thiscall
std::_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_get_deleter(_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                 *this,type_info *param_1)

{
  char *__s1;
  int iVar1;
  _Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
  *p_Var2;
  
  p_Var2 = this + 0x10;
  if ((param_1 != (type_info *)_Sp_make_shared_tag::_S_ti()::__tag) &&
     (__s1 = *(char **)(param_1 + 8), __s1 != "St19_Sp_make_shared_tag")) {
    if (*__s1 == '*') {
      return (_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
              *)0x0;
    }
    iVar1 = strcmp(__s1,"St19_Sp_make_shared_tag");
    if (iVar1 != 0) {
      p_Var2 = (_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                *)0x0;
    }
  }
  return p_Var2;
}



/* std::_Sp_counted_ptr_inplace<manifold::Manifold::Impl, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::
_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
_M_dispose(_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  void *pvVar1;
  void *pvVar2;
  
  if (*(void **)(this + 0x180) != (void *)0x0) {
    free(*(void **)(this + 0x180));
  }
  if (*(void **)(this + 0x168) != (void *)0x0) {
    free(*(void **)(this + 0x168));
  }
  if (*(void **)(this + 0x150) != (void *)0x0) {
    free(*(void **)(this + 0x150));
  }
  if (*(void **)(this + 0x138) != (void *)0x0) {
    free(*(void **)(this + 0x138));
  }
  if (*(void **)(this + 0x120) != (void *)0x0) {
    free(*(void **)(this + 0x120));
  }
  pvVar2 = *(void **)(this + 0x100);
  while (pvVar2 != (void *)0x0) {
    _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
    ::_M_erase(*(_Rb_tree_node **)((long)pvVar2 + 0x18));
    pvVar1 = *(void **)((long)pvVar2 + 0x10);
    operator_delete(pvVar2,0x98);
    pvVar2 = pvVar1;
  }
  if (*(void **)(this + 0xd8) != (void *)0x0) {
    free(*(void **)(this + 0xd8));
  }
  if (*(void **)(this + 0xb8) != (void *)0x0) {
    free(*(void **)(this + 0xb8));
  }
  if (*(void **)(this + 0xa0) != (void *)0x0) {
    free(*(void **)(this + 0xa0));
  }
  if (*(void **)(this + 0x88) != (void *)0x0) {
    free(*(void **)(this + 0x88));
  }
  if (*(void **)(this + 0x70) != (void *)0x0) {
    free(*(void **)(this + 0x70));
  }
  if (*(void **)(this + 0x58) == (void *)0x0) {
    return;
  }
  free(*(void **)(this + 0x58));
  return;
}



/* std::_Sp_counted_deleter<manifold::Manifold::Impl*,
   std::default_delete<manifold::Manifold::Impl>, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::
_Sp_counted_deleter<manifold::Manifold::Impl*,std::default_delete<manifold::Manifold::Impl>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_dispose(_Sp_counted_deleter<manifold::Manifold::Impl*,std::default_delete<manifold::Manifold::Impl>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
             *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = *(void **)(this + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (*(void **)((long)pvVar1 + 0x170) != (void *)0x0) {
    free(*(void **)((long)pvVar1 + 0x170));
  }
  if (*(void **)((long)pvVar1 + 0x158) != (void *)0x0) {
    free(*(void **)((long)pvVar1 + 0x158));
  }
  if (*(void **)((long)pvVar1 + 0x140) != (void *)0x0) {
    free(*(void **)((long)pvVar1 + 0x140));
  }
  if (*(void **)((long)pvVar1 + 0x128) != (void *)0x0) {
    free(*(void **)((long)pvVar1 + 0x128));
  }
  if (*(void **)((long)pvVar1 + 0x110) != (void *)0x0) {
    free(*(void **)((long)pvVar1 + 0x110));
  }
  pvVar3 = *(void **)((long)pvVar1 + 0xf0);
  while (pvVar3 != (void *)0x0) {
    _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
    ::_M_erase(*(_Rb_tree_node **)((long)pvVar3 + 0x18));
    pvVar2 = *(void **)((long)pvVar3 + 0x10);
    operator_delete(pvVar3,0x98);
    pvVar3 = pvVar2;
  }
  if (*(void **)((long)pvVar1 + 200) != (void *)0x0) {
    free(*(void **)((long)pvVar1 + 200));
  }
  if (*(void **)((long)pvVar1 + 0xa8) != (void *)0x0) {
    free(*(void **)((long)pvVar1 + 0xa8));
  }
  if (*(void **)((long)pvVar1 + 0x90) != (void *)0x0) {
    free(*(void **)((long)pvVar1 + 0x90));
  }
  if (*(void **)((long)pvVar1 + 0x78) != (void *)0x0) {
    free(*(void **)((long)pvVar1 + 0x78));
  }
  if (*(void **)((long)pvVar1 + 0x60) != (void *)0x0) {
    free(*(void **)((long)pvVar1 + 0x60));
  }
  if (*(void **)((long)pvVar1 + 0x48) != (void *)0x0) {
    free(*(void **)((long)pvVar1 + 0x48));
  }
  operator_delete(pvVar1,0x188);
  return;
}



/* manifold::NormalTransform(linalg::mat<double, 3, 4> const&) */

manifold * __thiscall manifold::NormalTransform(manifold *this,mat *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  dVar1 = *(double *)(param_1 + 0x40);
  dVar2 = *(double *)(param_1 + 0x38);
  dVar3 = *(double *)(param_1 + 0x28);
  dVar6 = *(double *)param_1;
  dVar7 = *(double *)(param_1 + 8);
  dVar8 = *(double *)(param_1 + 0x10);
  dVar9 = *(double *)(param_1 + 0x18);
  dVar10 = *(double *)(param_1 + 0x20);
  dVar4 = *(double *)(param_1 + 0x30);
  dVar11 = (dVar1 * *(double *)(param_1 + 0x20) - dVar2 * dVar3) * dVar6 +
           (dVar2 * *(double *)(param_1 + 0x10) - dVar1 * *(double *)(param_1 + 8)) * dVar9 +
           (*(double *)(param_1 + 8) * dVar3 -
           *(double *)(param_1 + 0x20) * *(double *)(param_1 + 0x10)) * dVar4;
  auVar17._0_8_ = dVar1 * dVar10 - *(double *)(param_1 + 0x28) * dVar2;
  auVar17._8_8_ = dVar4 * *(double *)(param_1 + 0x28) - dVar9 * dVar1;
  auVar12._0_8_ = dVar1 * dVar6 - dVar4 * dVar8;
  auVar12._8_8_ = dVar4 * dVar7 - dVar2 * dVar6;
  auVar13._8_8_ = dVar11;
  auVar13._0_8_ = dVar11;
  auVar18 = divpd(auVar17,auVar13);
  auVar16._8_8_ = dVar11;
  auVar16._0_8_ = dVar11;
  auVar13 = divpd(auVar12,auVar16);
  *(undefined1 (*) [16])this = auVar18;
  auVar15._0_8_ = dVar9 * dVar2 - dVar10 * dVar4;
  auVar15._8_8_ = dVar8 * dVar2 - dVar7 * dVar1;
  auVar18._8_8_ = dVar11;
  auVar18._0_8_ = dVar11;
  auVar16 = divpd(auVar15,auVar18);
  *(undefined1 (*) [16])(this + 0x20) = auVar13;
  auVar14._0_8_ = dVar3 * dVar7 - dVar10 * dVar8;
  auVar14._8_8_ = dVar9 * dVar8 - dVar3 * dVar6;
  auVar5._8_8_ = dVar11;
  auVar5._0_8_ = dVar11;
  auVar13 = divpd(auVar14,auVar5);
  *(undefined1 (*) [16])(this + 0x10) = auVar16;
  *(undefined1 (*) [16])(this + 0x30) = auVar13;
  *(double *)(this + 0x40) = (dVar10 * dVar6 - dVar7 * dVar9) / dVar11;
  return this;
}



/* std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold() */

void __thiscall
std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
          (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  
  (**(code **)(*(long *)this + 0x10))();
  if (__libc_single_threaded == '\0') {
    LOCK();
    p_Var1 = this + 0xc;
    iVar2 = *(int *)p_Var1;
    *(int *)p_Var1 = *(int *)p_Var1 + -1;
    UNLOCK();
  }
  else {
    iVar2 = *(int *)(this + 0xc);
    *(int *)(this + 0xc) = iVar2 + -1;
  }
  if (iVar2 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0010b9ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x18))(this);
  return;
}



/* std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release() */

void __thiscall
std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release
          (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  
  if (*(long *)(this + 8) == 0x100000001) {
    *(undefined8 *)(this + 8) = 0;
    (**(code **)(*(long *)this + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0010ba27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x18))();
    return;
  }
  if (__libc_single_threaded == '\0') {
    p_Var1 = this + 8;
    LOCK();
    iVar2 = *(int *)p_Var1;
    *(int *)p_Var1 = *(int *)p_Var1 + -1;
    UNLOCK();
  }
  else {
    iVar2 = *(int *)(this + 8);
    *(int *)(this + 8) = iVar2 + -1;
  }
  if (iVar2 != 1) {
    return;
  }
  _M_release_last_use_cold(this);
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgLeafNode, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_dispose(_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
             *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int *piVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  long *plVar3;
  int iVar4;
  
  this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x30);
  *(code **)(this + 0x10) = manifold::CsgLeafNode::GetImpl;
  if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = this_00 + 8;
    if (*(long *)(this_00 + 8) == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar4 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar4 = *(int *)(this_00 + 8);
        *(int *)(this_00 + 8) = iVar4 + -1;
      }
      if (iVar4 == 1) {
        _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      }
    }
  }
  plVar3 = *(long **)(this + 0x20);
  *(code **)(this + 0x10) = manifold::Manifold::Impl::GetProperty;
  if (plVar3 != (long *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      piVar2 = (int *)((long)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
    }
    else {
      iVar4 = *(int *)((long)plVar3 + 0xc);
      *(int *)((long)plVar3 + 0xc) = iVar4 + -1;
    }
    if (iVar4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0010badd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))();
      return;
    }
  }
  return;
}



/* manifold::Vec<double>::resize(unsigned long, double) */

void __thiscall manifold::Vec<double>::resize(Vec<double> *this,ulong param_1,double param_2)

{
  double *pdVar1;
  ulong uVar2;
  double *pdVar3;
  double *pdVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  size_t sVar8;
  
  uVar2 = *(ulong *)(this + 8);
  uVar6 = uVar2;
  if (*(ulong *)(this + 0x10) < param_1) {
    puVar5 = (undefined8 *)malloc(param_1 * 8);
    puVar7 = *(undefined8 **)this;
    if (uVar2 == 0) {
      if (puVar7 == (undefined8 *)0x0) {
        *(undefined8 **)this = puVar5;
        uVar6 = 0;
        *(ulong *)(this + 0x10) = param_1;
        goto LAB_0010bb6d;
      }
LAB_0010bccd:
      free(puVar7);
      uVar6 = *(ulong *)(this + 8);
    }
    else {
      sVar8 = uVar2 * 8;
      if (8 < (long)sVar8) {
        memmove(puVar5,puVar7,sVar8);
        goto LAB_0010bccd;
      }
      if (sVar8 == 8) {
        *puVar5 = *puVar7;
        goto LAB_0010bccd;
      }
      if (puVar7 != (undefined8 *)0x0) goto LAB_0010bccd;
    }
    *(undefined8 **)this = puVar5;
    *(ulong *)(this + 0x10) = param_1;
    if (uVar6 < param_1) goto LAB_0010bb6d;
LAB_0010bbaa:
    *(ulong *)(this + 8) = param_1;
    if (uVar2 <= param_1 * 2) {
      return;
    }
LAB_0010bc58:
    sVar8 = param_1 * 8;
    puVar7 = (undefined8 *)malloc(sVar8);
    puVar5 = *(undefined8 **)this;
    if (8 < (long)sVar8) {
      memmove(puVar7,puVar5,sVar8);
      goto LAB_0010bc7e;
    }
    if (sVar8 == 8) {
      *puVar7 = *puVar5;
      goto LAB_0010bc7e;
    }
  }
  else {
    if (uVar2 < param_1) {
      puVar5 = *(undefined8 **)this;
LAB_0010bb6d:
      pdVar1 = (double *)(puVar5 + param_1);
      pdVar4 = (double *)(puVar5 + uVar6);
      if (pdVar1 != pdVar4) {
        pdVar3 = pdVar4;
        if (((int)pdVar1 - (int)pdVar4 & 8U) != 0) {
          *pdVar4 = param_2;
          pdVar3 = pdVar4 + 1;
          if (pdVar1 == pdVar4 + 1) goto LAB_0010bbaa;
        }
        do {
          *pdVar3 = param_2;
          pdVar4 = pdVar3 + 2;
          pdVar3[1] = param_2;
          pdVar3 = pdVar4;
        } while (pdVar1 != pdVar4);
      }
      goto LAB_0010bbaa;
    }
    *(ulong *)(this + 8) = param_1;
    if (uVar2 <= param_1 * 2) {
      return;
    }
    if (param_1 != 0) goto LAB_0010bc58;
    puVar5 = *(undefined8 **)this;
    puVar7 = (undefined8 *)0x0;
  }
  if (puVar5 == (undefined8 *)0x0) {
    *(undefined8 **)this = puVar7;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 8);
    return;
  }
LAB_0010bc7e:
  free(puVar5);
  *(undefined8 **)this = puVar7;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 8);
  return;
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



/* std::shared_ptr<manifold::Manifold::Impl>::shared_ptr<std::allocator<void>,
   manifold::Manifold::Impl const&>(std::_Sp_alloc_shared_tag<std::allocator<void> >,
   manifold::Manifold::Impl const&) */

void __thiscall
std::shared_ptr<manifold::Manifold::Impl>::
shared_ptr<std::allocator<void>,manifold::Manifold::Impl_const&>
          (shared_ptr<manifold::Manifold::Impl> *this,undefined8 param_2,undefined8 *param_3)

{
  _Rb_tree_node_base *p_Var1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  _Alloc_node *p_Var6;
  undefined8 uVar7;
  _Rb_tree_node *p_Var8;
  undefined4 *__src;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  _Rb_tree_node *p_Var17;
  void *pvVar18;
  undefined4 *__dest;
  undefined8 *puVar19;
  _Alloc_node *p_Var20;
  _Rb_tree_node *p_Var21;
  _Alloc_node *extraout_RDX;
  _Alloc_node *extraout_RDX_00;
  ulong uVar22;
  size_t sVar23;
  
  *(undefined8 *)this = 0;
  puVar16 = (undefined8 *)operator_new(0x198);
  uVar14 = _LC5;
  uVar7 = *param_3;
  uVar9 = param_3[1];
  puVar19 = (undefined8 *)0x0;
  uVar10 = param_3[2];
  uVar11 = param_3[3];
  uVar12 = param_3[4];
  uVar13 = param_3[5];
  *(undefined1 (*) [16])(puVar16 + 0xc) = (undefined1  [16])0x0;
  puVar3 = (undefined8 *)param_3[9];
  puVar16[1] = uVar14;
  uVar14 = param_3[6];
  uVar15 = param_3[7];
  *puVar16 = &PTR___Sp_counted_ptr_inplace_001113b0;
  uVar2 = *(undefined4 *)(param_3 + 8);
  puVar16[0xb] = 0;
  *(undefined4 *)(puVar16 + 10) = uVar2;
  lVar4 = param_3[10];
  puVar16[2] = uVar7;
  puVar16[3] = uVar9;
  puVar16[4] = uVar10;
  puVar16[5] = uVar11;
  puVar16[6] = uVar12;
  puVar16[7] = uVar13;
  puVar16[8] = uVar14;
  puVar16[9] = uVar15;
  if (lVar4 != 0) {
    sVar23 = lVar4 * 0x18;
    puVar19 = (undefined8 *)malloc(sVar23);
    if ((long)sVar23 < 0x19) {
      if (sVar23 == 0x18) {
        uVar7 = puVar3[1];
        *puVar19 = *puVar3;
        puVar19[1] = uVar7;
        puVar19[2] = puVar3[2];
      }
    }
    else {
      puVar19 = (undefined8 *)memmove(puVar19,puVar3,sVar23);
    }
  }
  lVar5 = param_3[0xd];
  puVar16[0xc] = lVar4;
  puVar16[0xd] = lVar4;
  puVar3 = (undefined8 *)param_3[0xc];
  *(undefined1 (*) [16])(puVar16 + 0xf) = (undefined1  [16])0x0;
  puVar16[0xb] = puVar19;
  puVar19 = (undefined8 *)0x0;
  puVar16[0xe] = 0;
  if (lVar5 != 0) {
    sVar23 = lVar5 * 0xc;
    puVar19 = (undefined8 *)malloc(sVar23);
    if ((long)sVar23 < 0xd) {
      if (sVar23 == 0xc) {
        *puVar19 = *puVar3;
        *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(puVar3 + 1);
      }
    }
    else {
      puVar19 = (undefined8 *)memmove(puVar19,puVar3,sVar23);
    }
  }
  lVar4 = param_3[0x10];
  puVar16[0xf] = lVar5;
  puVar16[0x10] = lVar5;
  puVar3 = (undefined8 *)param_3[0xf];
  *(undefined1 (*) [16])(puVar16 + 0x12) = (undefined1  [16])0x0;
  puVar16[0xe] = puVar19;
  puVar19 = (undefined8 *)0x0;
  puVar16[0x11] = 0;
  if (lVar4 != 0) {
    sVar23 = lVar4 * 0x18;
    puVar19 = (undefined8 *)malloc(sVar23);
    if ((long)sVar23 < 0x19) {
      if (sVar23 == 0x18) {
        uVar7 = puVar3[1];
        *puVar19 = *puVar3;
        puVar19[1] = uVar7;
        puVar19[2] = puVar3[2];
      }
    }
    else {
      puVar19 = (undefined8 *)memmove(puVar19,puVar3,sVar23);
    }
  }
  lVar5 = param_3[0x13];
  puVar16[0x12] = lVar4;
  puVar16[0x13] = lVar4;
  puVar3 = (undefined8 *)param_3[0x12];
  *(undefined1 (*) [16])(puVar16 + 0x15) = (undefined1  [16])0x0;
  puVar16[0x11] = puVar19;
  puVar19 = (undefined8 *)0x0;
  puVar16[0x14] = 0;
  if (lVar5 != 0) {
    sVar23 = lVar5 * 0x18;
    puVar19 = (undefined8 *)malloc(sVar23);
    if ((long)sVar23 < 0x19) {
      if (sVar23 == 0x18) {
        uVar7 = puVar3[1];
        *puVar19 = *puVar3;
        puVar19[1] = uVar7;
        puVar19[2] = puVar3[2];
      }
    }
    else {
      puVar19 = (undefined8 *)memmove(puVar19,puVar3,sVar23);
    }
  }
  lVar4 = param_3[0x16];
  puVar16[0x15] = lVar5;
  puVar16[0x16] = lVar5;
  puVar3 = (undefined8 *)param_3[0x15];
  *(undefined1 (*) [16])(puVar16 + 0x18) = (undefined1  [16])0x0;
  puVar16[0x14] = puVar19;
  puVar19 = (undefined8 *)0x0;
  puVar16[0x17] = 0;
  if (lVar4 != 0) {
    sVar23 = lVar4 * 0x20;
    puVar19 = (undefined8 *)malloc(sVar23);
    if ((long)sVar23 < 0x21) {
      if (sVar23 == 0x20) {
        uVar7 = puVar3[1];
        *puVar19 = *puVar3;
        puVar19[1] = uVar7;
        uVar7 = puVar3[3];
        puVar19[2] = puVar3[2];
        puVar19[3] = uVar7;
      }
    }
    else {
      puVar19 = (undefined8 *)memmove(puVar19,puVar3,sVar23);
    }
  }
  p_Var6 = (_Alloc_node *)param_3[0x1a];
  uVar7 = param_3[0x18];
  puVar16[0x18] = lVar4;
  puVar16[0x19] = lVar4;
  *(undefined1 (*) [16])(puVar16 + 0x1c) = (undefined1  [16])0x0;
  puVar3 = (undefined8 *)param_3[0x19];
  puVar16[0x17] = puVar19;
  puVar19 = (undefined8 *)0x0;
  puVar16[0x1a] = uVar7;
  puVar16[0x1b] = 0;
  p_Var20 = p_Var6;
  if (p_Var6 != (_Alloc_node *)0x0) {
    sVar23 = (long)p_Var6 * 8;
    puVar19 = (undefined8 *)malloc(sVar23);
    if ((long)sVar23 < 9) {
      p_Var20 = extraout_RDX;
      if (sVar23 == 8) {
        *puVar19 = *puVar3;
      }
    }
    else {
      puVar19 = (undefined8 *)memmove(puVar19,puVar3,sVar23);
      p_Var20 = extraout_RDX_00;
    }
  }
  p_Var8 = (_Rb_tree_node *)param_3[0x1e];
  p_Var1 = (_Rb_tree_node_base *)(puVar16 + 0x1f);
  puVar16[0x1b] = puVar19;
  *(undefined4 *)(puVar16 + 0x1f) = 0;
  puVar16[0x20] = 0;
  puVar16[0x21] = p_Var1;
  puVar16[0x22] = p_Var1;
  puVar16[0x23] = 0;
  puVar16[0x1c] = p_Var6;
  puVar16[0x1d] = p_Var6;
  if (p_Var8 != (_Rb_tree_node *)0x0) {
    p_Var17 = _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
              ::
              _M_copy<false,std::_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>::_Alloc_node>
                        (p_Var8,p_Var1,p_Var20);
    p_Var8 = p_Var17;
    do {
      p_Var21 = p_Var8;
      p_Var8 = *(_Rb_tree_node **)(p_Var21 + 0x10);
    } while (p_Var8 != (_Rb_tree_node *)0x0);
    puVar16[0x21] = p_Var21;
    p_Var8 = p_Var17;
    do {
      p_Var21 = p_Var8;
      p_Var8 = *(_Rb_tree_node **)(p_Var21 + 0x18);
    } while (p_Var8 != (_Rb_tree_node *)0x0);
    uVar7 = param_3[0x21];
    puVar16[0x22] = p_Var21;
    puVar16[0x20] = p_Var17;
    puVar16[0x23] = uVar7;
  }
  lVar4 = param_3[0x23];
  puVar3 = (undefined8 *)param_3[0x22];
  puVar19 = (undefined8 *)0x0;
  *(undefined1 (*) [16])(puVar16 + 0x25) = (undefined1  [16])0x0;
  puVar16[0x24] = 0;
  if (lVar4 != 0) {
    sVar23 = lVar4 * 0x10;
    puVar19 = (undefined8 *)malloc(sVar23);
    if ((long)sVar23 < 0x11) {
      if (sVar23 == 0x10) {
        uVar7 = puVar3[1];
        *puVar19 = *puVar3;
        puVar19[1] = uVar7;
      }
    }
    else {
      puVar19 = (undefined8 *)memmove(puVar19,puVar3,sVar23);
    }
  }
  lVar5 = param_3[0x26];
  puVar16[0x25] = lVar4;
  puVar16[0x26] = lVar4;
  puVar3 = (undefined8 *)param_3[0x25];
  *(undefined1 (*) [16])(puVar16 + 0x28) = (undefined1  [16])0x0;
  puVar16[0x24] = puVar19;
  puVar19 = (undefined8 *)0x0;
  puVar16[0x27] = 0;
  if (lVar5 != 0) {
    sVar23 = lVar5 * 0xc;
    puVar19 = (undefined8 *)malloc(sVar23);
    if ((long)sVar23 < 0xd) {
      if (sVar23 == 0xc) {
        *puVar19 = *puVar3;
        *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(puVar3 + 1);
      }
    }
    else {
      puVar19 = (undefined8 *)memmove(puVar19,puVar3,sVar23);
    }
  }
  lVar4 = param_3[0x29];
  puVar16[0x28] = lVar5;
  puVar16[0x29] = lVar5;
  puVar3 = (undefined8 *)param_3[0x28];
  *(undefined1 (*) [16])(puVar16 + 0x2b) = (undefined1  [16])0x0;
  puVar16[0x27] = puVar19;
  puVar19 = (undefined8 *)0x0;
  puVar16[0x2a] = 0;
  if (lVar4 != 0) {
    sVar23 = lVar4 * 0x30;
    puVar19 = (undefined8 *)malloc(sVar23);
    if ((long)sVar23 < 0x31) {
      if (sVar23 == 0x30) {
        uVar7 = puVar3[1];
        *puVar19 = *puVar3;
        puVar19[1] = uVar7;
        uVar7 = puVar3[3];
        puVar19[2] = puVar3[2];
        puVar19[3] = uVar7;
        uVar7 = puVar3[5];
        puVar19[4] = puVar3[4];
        puVar19[5] = uVar7;
      }
    }
    else {
      puVar19 = (undefined8 *)memmove(puVar19,puVar3,sVar23);
    }
  }
  lVar5 = param_3[0x2c];
  puVar16[0x2b] = lVar4;
  puVar16[0x2c] = lVar4;
  __src = (undefined4 *)param_3[0x2b];
  *(undefined1 (*) [16])(puVar16 + 0x2e) = (undefined1  [16])0x0;
  puVar16[0x2a] = puVar19;
  __dest = (undefined4 *)0x0;
  puVar16[0x2d] = 0;
  if (lVar5 != 0) {
    sVar23 = lVar5 * 4;
    __dest = (undefined4 *)malloc(sVar23);
    if ((long)sVar23 < 5) {
      if (sVar23 == 4) {
        *__dest = *__src;
      }
    }
    else {
      __dest = (undefined4 *)memmove(__dest,__src,sVar23);
    }
  }
  lVar4 = param_3[0x2f];
  pvVar18 = (void *)0x0;
  puVar16[0x2e] = lVar5;
  puVar16[0x2f] = lVar5;
  *(undefined1 (*) [16])(puVar16 + 0x31) = (undefined1  [16])0x0;
  lVar5 = param_3[0x2e];
  puVar16[0x2d] = __dest;
  puVar16[0x30] = 0;
  if (lVar4 != 0) {
    sVar23 = lVar4 * 8;
    pvVar18 = malloc(sVar23);
    if (0 < (long)sVar23) {
      uVar22 = 0;
      do {
        *(undefined8 *)((long)pvVar18 + uVar22 * 8) = *(undefined8 *)(lVar5 + uVar22 * 8);
        uVar22 = uVar22 + 1;
      } while (uVar22 < (ulong)((long)sVar23 >> 3));
    }
  }
  puVar16[0x30] = pvVar18;
  *(undefined8 **)(this + 8) = puVar16;
  *(undefined8 **)this = puVar16 + 2;
  puVar16[0x31] = lVar4;
  puVar16[0x32] = lVar4;
  return;
}



/* void std::vector<std::shared_ptr<manifold::CsgNode>,
   std::allocator<std::shared_ptr<manifold::CsgNode> >
   >::_M_realloc_insert<std::shared_ptr<manifold::CsgNode>
   const&>(__gnu_cxx::__normal_iterator<std::shared_ptr<manifold::CsgNode>*,
   std::vector<std::shared_ptr<manifold::CsgNode>, std::allocator<std::shared_ptr<manifold::CsgNode>
   > > >, std::shared_ptr<manifold::CsgNode> const&) */

void __thiscall
std::vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>::
_M_realloc_insert<std::shared_ptr<manifold::CsgNode>const&>
          (vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>
           *this,void *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  pvVar2 = *(void **)(this + 8);
  pvVar3 = *(void **)this;
  uVar5 = (long)pvVar2 - (long)pvVar3 >> 4;
  if (uVar5 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (pvVar3 == pvVar2) {
    if (0xfffffffffffffffe < uVar5) goto LAB_0010ca68;
    uVar9 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar9 = uVar5 + 1;
    }
    uVar9 = uVar9 << 4;
LAB_0010ca72:
    pvVar7 = operator_new(uVar9);
    lVar10 = uVar9 + (long)pvVar7;
    lVar8 = (long)pvVar7 + 0x10;
  }
  else {
    uVar9 = uVar5 * 2;
    if (uVar9 < uVar5) {
LAB_0010ca68:
      uVar9 = 0x7ffffffffffffff0;
      goto LAB_0010ca72;
    }
    if (uVar9 != 0) {
      if (0x7ffffffffffffff < uVar9) {
        uVar9 = 0x7ffffffffffffff;
      }
      uVar9 = uVar9 << 4;
      goto LAB_0010ca72;
    }
    lVar8 = 0x10;
    lVar10 = 0;
    pvVar7 = (void *)0x0;
  }
  uVar4 = param_3[1];
  puVar1 = (undefined8 *)((long)pvVar7 + ((long)param_2 - (long)pvVar3));
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  lVar6 = *(long *)((long)pvVar7 + ((long)param_2 - (long)pvVar3) + 8);
  if (lVar6 != 0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    }
  }
  if (param_2 == pvVar3) {
    if (param_2 != pvVar2) goto LAB_0010c9f8;
LAB_0010ca2c:
    if (pvVar3 == (void *)0x0) goto LAB_0010ca48;
  }
  else {
    lVar8 = 0;
    uVar5 = 0;
    do {
      uVar4 = ((undefined8 *)((long)pvVar3 + lVar8))[1];
      uVar5 = uVar5 + 1;
      *(undefined8 *)((long)pvVar7 + lVar8) = *(undefined8 *)((long)pvVar3 + lVar8);
      ((undefined8 *)((long)pvVar7 + lVar8))[1] = uVar4;
      lVar8 = lVar8 + 0x10;
    } while (uVar5 < ((ulong)((long)param_2 + (-0x10 - (long)pvVar3)) >> 4) + 1);
    lVar8 = (long)param_2 + (long)pvVar7 + (0x10 - (long)pvVar3);
    if (param_2 != pvVar2) {
LAB_0010c9f8:
      uVar5 = 0;
      lVar6 = 0;
      do {
        uVar4 = ((undefined8 *)((long)param_2 + lVar6))[1];
        uVar5 = uVar5 + 1;
        *(undefined8 *)(lVar8 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
        ((undefined8 *)(lVar8 + lVar6))[1] = uVar4;
        lVar6 = lVar6 + 0x10;
      } while (uVar5 < ((ulong)((long)pvVar2 + (-0x10 - (long)param_2)) >> 4) + 1);
      lVar8 = (long)pvVar2 + (lVar8 - (long)param_2);
      goto LAB_0010ca2c;
    }
  }
  operator_delete(pvVar3,*(long *)(this + 0x10) - (long)pvVar3);
LAB_0010ca48:
  *(void **)this = pvVar7;
  *(long *)(this + 8) = lVar8;
  *(long *)(this + 0x10) = lVar10;
  return;
}



/* std::__shared_ptr<manifold::CsgLeafNode,
   (__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<void>,
   std::shared_ptr<manifold::Manifold::Impl>&>(std::_Sp_alloc_shared_tag<std::allocator<void> >,
   std::shared_ptr<manifold::Manifold::Impl>&) */

void __thiscall
std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
__shared_ptr<std::allocator<void>,std::shared_ptr<manifold::Manifold::Impl>&>
          (__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *this,undefined8 param_2,
          undefined8 *param_3)

{
  CsgLeafNode *pCVar1;
  int *piVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  long lVar4;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  long in_FS_OFFSET;
  undefined8 local_48;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  puVar7 = (undefined8 *)operator_new(0x98);
  local_48 = *param_3;
  p_Stack_40 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)param_3[1];
  pCVar1 = (CsgLeafNode *)(puVar7 + 2);
  puVar7[1] = _LC5;
  *puVar7 = &PTR___Sp_counted_ptr_inplace_00111378;
  if (p_Stack_40 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(p_Stack_40 + 8) = *(int *)(p_Stack_40 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(p_Stack_40 + 8) = *(int *)(p_Stack_40 + 8) + 1;
    }
  }
  manifold::CsgLeafNode::CsgLeafNode(pCVar1,&local_48);
  p_Var5 = p_Stack_40;
  if (p_Stack_40 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_0010cbdb:
    *(undefined8 **)(this + 8) = puVar7;
    *(CsgLeafNode **)this = pCVar1;
  }
  else {
    p_Var3 = p_Stack_40 + 8;
    if (*(long *)(p_Stack_40 + 8) == 0x100000001) {
      *(undefined8 *)(p_Stack_40 + 8) = 0;
      (**(code **)(*(long *)p_Stack_40 + 0x10))(p_Stack_40);
      (**(code **)(*(long *)p_Var5 + 0x18))(p_Var5);
      *(undefined8 **)(this + 8) = puVar7;
      *(CsgLeafNode **)this = pCVar1;
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar6 = *(int *)p_Var3;
        *(int *)p_Var3 = *(int *)p_Var3 + -1;
        UNLOCK();
      }
      else {
        iVar6 = *(int *)(p_Stack_40 + 8);
        *(int *)(p_Stack_40 + 8) = iVar6 + -1;
      }
      if (iVar6 != 1) goto LAB_0010cbdb;
      _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_40);
      *(undefined8 **)(this + 8) = puVar7;
      *(CsgLeafNode **)this = pCVar1;
    }
  }
  if ((puVar7[4] != 0) && (*(int *)(puVar7[4] + 8) != 0)) goto LAB_0010cbf3;
  lVar4 = *(long *)(this + 8);
  puVar7[3] = pCVar1;
  if (lVar4 == 0) {
LAB_0010cc78:
    plVar8 = (long *)puVar7[4];
    if (plVar8 != (long *)0x0) {
      if (__libc_single_threaded != '\0') goto LAB_0010cc3b;
      LOCK();
      piVar2 = (int *)((long)plVar8 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
LAB_0010cc44:
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 0x18))();
      }
    }
  }
  else {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
      UNLOCK();
      goto LAB_0010cc78;
    }
    plVar8 = (long *)puVar7[4];
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    if (plVar8 != (long *)0x0) {
LAB_0010cc3b:
      iVar6 = *(int *)((long)plVar8 + 0xc);
      *(int *)((long)plVar8 + 0xc) = iVar6 + -1;
      goto LAB_0010cc44;
    }
  }
  puVar7[4] = lVar4;
LAB_0010cbf3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::vector<unsigned int, std::allocator<unsigned int> >::_M_default_append(unsigned long) */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_default_append
          (vector<unsigned_int,std::allocator<unsigned_int>> *this,ulong param_1)

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
    if (param_1 - 1 != 0) goto LAB_0010cdd4;
LAB_0010cde8:
    if (sVar4 != 0) goto LAB_0010ceb8;
    if (pvVar3 == (void *)0x0) goto LAB_0010cdfa;
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
LAB_0010cdd4:
      memset(puVar6 + 1,0,(param_1 - 1) * 4);
      goto LAB_0010cde8;
    }
LAB_0010ceb8:
    memmove(__dest,pvVar3,sVar4);
    uVar5 = *(long *)(this + 0x10) - (long)pvVar3;
  }
  operator_delete(pvVar3,uVar5);
LAB_0010cdfa:
  *(void **)this = __dest;
  *(void **)(this + 8) = (void *)((long)__dest + uVar1 * 4);
  *(ulong *)(this + 0x10) = (long)__dest + uVar2;
  return;
}



/* std::vector<float, std::allocator<float> >::_M_default_append(unsigned long) */

void __thiscall
std::vector<float,std::allocator<float>>::_M_default_append
          (vector<float,std::allocator<float>> *this,ulong param_1)

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
    if (param_1 - 1 != 0) goto LAB_0010cfb4;
LAB_0010cfc8:
    if (sVar4 != 0) goto LAB_0010d098;
    if (pvVar3 == (void *)0x0) goto LAB_0010cfda;
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
LAB_0010cfb4:
      memset(puVar6 + 1,0,(param_1 - 1) * 4);
      goto LAB_0010cfc8;
    }
LAB_0010d098:
    memmove(__dest,pvVar3,sVar4);
    uVar5 = *(long *)(this + 0x10) - (long)pvVar3;
  }
  operator_delete(pvVar3,uVar5);
LAB_0010cfda:
  *(void **)this = __dest;
  *(void **)(this + 8) = (void *)((long)__dest + uVar1 * 4);
  *(ulong *)(this + 0x10) = (long)__dest + uVar2;
  return;
}



/* std::vector<unsigned long, std::allocator<unsigned long> >::_M_default_append(unsigned long) */

void __thiscall
std::vector<unsigned_long,std::allocator<unsigned_long>>::_M_default_append
          (vector<unsigned_long,std::allocator<unsigned_long>> *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  void *__dest;
  void *pvVar3;
  undefined8 *__s;
  size_t sVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if (param_1 == 0) {
    return;
  }
  puVar6 = *(undefined8 **)(this + 8);
  pvVar3 = *(void **)this;
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar6 >> 3)) {
    *puVar6 = 0;
    __s = puVar6 + 1;
    if (param_1 - 1 != 0) {
      sVar4 = (long)__s + ((param_1 - 1) * 8 - (long)puVar6) + -8;
      pvVar3 = memset(__s,0,sVar4);
      __s = (undefined8 *)((long)pvVar3 + sVar4);
    }
    *(undefined8 **)(this + 8) = __s;
    return;
  }
  sVar4 = (long)puVar6 - (long)pvVar3;
  uVar2 = (long)sVar4 >> 3;
  if (0xfffffffffffffff - uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_default_append");
  }
  uVar1 = param_1 + uVar2;
  if (uVar2 < param_1) {
    uVar2 = 0xfffffffffffffff;
    if (uVar1 < 0x1000000000000000) {
      uVar2 = uVar1;
    }
    uVar2 = uVar2 * 8;
    __dest = operator_new(uVar2);
    puVar6 = (undefined8 *)((long)__dest + sVar4);
    *puVar6 = 0;
    if (param_1 - 1 != 0) goto LAB_0010d195;
LAB_0010d1a9:
    if (sVar4 != 0) goto LAB_0010d280;
    if (pvVar3 == (void *)0x0) goto LAB_0010d1bb;
    uVar5 = *(long *)(this + 0x10) - (long)pvVar3;
  }
  else {
    uVar2 = uVar2 * 2;
    if (0xfffffffffffffff < uVar2) {
      uVar2 = 0xfffffffffffffff;
    }
    uVar2 = uVar2 * 8;
    __dest = operator_new(uVar2);
    puVar6 = (undefined8 *)((long)__dest + sVar4);
    *puVar6 = 0;
    if (param_1 != 1) {
LAB_0010d195:
      memset(puVar6 + 1,0,(param_1 - 1) * 8);
      goto LAB_0010d1a9;
    }
LAB_0010d280:
    memmove(__dest,pvVar3,sVar4);
    uVar5 = *(long *)(this + 0x10) - (long)pvVar3;
  }
  operator_delete(pvVar3,uVar5);
LAB_0010d1bb:
  *(void **)this = __dest;
  *(void **)(this + 8) = (void *)((long)__dest + uVar1 * 8);
  *(ulong *)(this + 0x10) = (long)__dest + uVar2;
  return;
}



/* std::vector<double, std::allocator<double> >::_M_default_append(unsigned long) */

void __thiscall
std::vector<double,std::allocator<double>>::_M_default_append
          (vector<double,std::allocator<double>> *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  void *__dest;
  void *pvVar3;
  undefined8 *__s;
  size_t sVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if (param_1 == 0) {
    return;
  }
  puVar6 = *(undefined8 **)(this + 8);
  pvVar3 = *(void **)this;
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar6 >> 3)) {
    *puVar6 = 0;
    __s = puVar6 + 1;
    if (param_1 - 1 != 0) {
      sVar4 = (long)__s + ((param_1 - 1) * 8 - (long)puVar6) + -8;
      pvVar3 = memset(__s,0,sVar4);
      __s = (undefined8 *)((long)pvVar3 + sVar4);
    }
    *(undefined8 **)(this + 8) = __s;
    return;
  }
  sVar4 = (long)puVar6 - (long)pvVar3;
  uVar2 = (long)sVar4 >> 3;
  if (0xfffffffffffffff - uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_default_append");
  }
  uVar1 = param_1 + uVar2;
  if (uVar2 < param_1) {
    uVar2 = 0xfffffffffffffff;
    if (uVar1 < 0x1000000000000000) {
      uVar2 = uVar1;
    }
    uVar2 = uVar2 * 8;
    __dest = operator_new(uVar2);
    puVar6 = (undefined8 *)((long)__dest + sVar4);
    *puVar6 = 0;
    if (param_1 - 1 != 0) goto LAB_0010d375;
LAB_0010d389:
    if (sVar4 != 0) goto LAB_0010d460;
    if (pvVar3 == (void *)0x0) goto LAB_0010d39b;
    uVar5 = *(long *)(this + 0x10) - (long)pvVar3;
  }
  else {
    uVar2 = uVar2 * 2;
    if (0xfffffffffffffff < uVar2) {
      uVar2 = 0xfffffffffffffff;
    }
    uVar2 = uVar2 * 8;
    __dest = operator_new(uVar2);
    puVar6 = (undefined8 *)((long)__dest + sVar4);
    *puVar6 = 0;
    if (param_1 != 1) {
LAB_0010d375:
      memset(puVar6 + 1,0,(param_1 - 1) * 8);
      goto LAB_0010d389;
    }
LAB_0010d460:
    memmove(__dest,pvVar3,sVar4);
    uVar5 = *(long *)(this + 0x10) - (long)pvVar3;
  }
  operator_delete(pvVar3,uVar5);
LAB_0010d39b:
  *(void **)this = __dest;
  *(void **)(this + 8) = (void *)((long)__dest + uVar1 * 8);
  *(ulong *)(this + 0x10) = (long)__dest + uVar2;
  return;
}



/* void std::vector<double, std::allocator<double> >::_M_realloc_insert<double
   const&>(__gnu_cxx::__normal_iterator<double*, std::vector<double, std::allocator<double> > >,
   double const&) */

void __thiscall
std::vector<double,std::allocator<double>>::_M_realloc_insert<double_const&>
          (vector<double,std::allocator<double>> *this,void *param_2,undefined8 *param_3)

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
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_0010d560;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_0010d56a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_0010d560:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_0010d56a;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_0010d56a;
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
    if (__src == (void *)0x0) goto LAB_0010d53f;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010d53f:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* std::__shared_ptr<manifold::CsgLeafNode,
   (__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<void>,
   std::unique_ptr<manifold::Manifold::Impl, std::default_delete<manifold::Manifold::Impl> >
   >(std::_Sp_alloc_shared_tag<std::allocator<void> >, std::unique_ptr<manifold::Manifold::Impl,
   std::default_delete<manifold::Manifold::Impl> >&&) */

void __thiscall
std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
__shared_ptr<std::allocator<void>,std::unique_ptr<manifold::Manifold::Impl,std::default_delete<manifold::Manifold::Impl>>>
          (__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2> *this,undefined8 param_2,
          long *param_3)

{
  CsgLeafNode *pCVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var5;
  int iVar6;
  undefined8 *puVar7;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  long *plVar8;
  long in_FS_OFFSET;
  long local_58;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  puVar7 = (undefined8 *)operator_new(0x98);
  uVar4 = _LC5;
  local_50 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
  puVar7[1] = _LC5;
  pCVar1 = (CsgLeafNode *)(puVar7 + 2);
  *puVar7 = &PTR___Sp_counted_ptr_inplace_00111378;
  local_58 = *param_3;
  if (local_58 != 0) {
    this_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator_new(0x18);
    lVar3 = *param_3;
    *param_3 = 0;
    *(undefined8 *)(this_00 + 8) = uVar4;
    *(undefined ***)this_00 = &PTR___Sp_counted_deleter_00111420;
    *(long *)(this_00 + 0x10) = lVar3;
    p_Var5 = local_50;
    if (local_50 != this_00) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
        UNLOCK();
      }
      else {
        *(undefined4 *)(this_00 + 8) = 2;
      }
      p_Var5 = this_00;
      if (local_50 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_50);
      }
    }
    local_50 = p_Var5;
    _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(this_00);
  }
  manifold::CsgLeafNode::CsgLeafNode(pCVar1,&local_58);
  if (local_50 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    *(undefined8 **)(this + 8) = puVar7;
    lVar3 = puVar7[4];
    *(CsgLeafNode **)this = pCVar1;
  }
  else {
    _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(local_50);
    *(undefined8 **)(this + 8) = puVar7;
    lVar3 = puVar7[4];
    *(CsgLeafNode **)this = pCVar1;
  }
  if ((lVar3 != 0) && (*(int *)(lVar3 + 8) != 0)) goto LAB_0010d732;
  lVar3 = *(long *)(this + 8);
  puVar7[3] = pCVar1;
  if (lVar3 == 0) {
LAB_0010d7b8:
    plVar8 = (long *)puVar7[4];
    if (plVar8 != (long *)0x0) {
      if (__libc_single_threaded != '\0') goto LAB_0010d78c;
      LOCK();
      piVar2 = (int *)((long)plVar8 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
LAB_0010d795:
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 0x18))();
      }
    }
  }
  else {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
      UNLOCK();
      goto LAB_0010d7b8;
    }
    plVar8 = (long *)puVar7[4];
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    if (plVar8 != (long *)0x0) {
LAB_0010d78c:
      iVar6 = *(int *)((long)plVar8 + 0xc);
      *(int *)((long)plVar8 + 0xc) = iVar6 + -1;
      goto LAB_0010d795;
    }
  }
  puVar7[4] = lVar3;
LAB_0010d732:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



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
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_0010d8c0;
    uVar3 = 0x1fffffffffffffff;
    if (uVar2 + 1 < 0x2000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 2;
LAB_0010d8ca:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_0010d8c0:
      uVar3 = 0x7ffffffffffffffc;
      goto LAB_0010d8ca;
    }
    if (uVar3 != 0) {
      if (0x1fffffffffffffff < uVar3) {
        uVar3 = 0x1fffffffffffffff;
      }
      uVar3 = uVar3 * 4;
      goto LAB_0010d8ca;
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
    if (__src == (void *)0x0) goto LAB_0010d89b;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010d89b:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* void std::vector<linalg::mat<double, 3, 3>, std::allocator<linalg::mat<double, 3, 3> >
   >::_M_realloc_insert<linalg::mat<double, 3, 3> >(__gnu_cxx::__normal_iterator<linalg::mat<double,
   3, 3>*, std::vector<linalg::mat<double, 3, 3>, std::allocator<linalg::mat<double, 3, 3> > > >,
   linalg::mat<double, 3, 3>&&) */

void __thiscall
std::vector<linalg::mat<double,3,3>,std::allocator<linalg::mat<double,3,3>>>::
_M_realloc_insert<linalg::mat<double,3,3>>
          (vector<linalg::mat<double,3,3>,std::allocator<linalg::mat<double,3,3>>> *this,
          undefined8 *param_2,undefined8 *param_3)

{
  size_t __n;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long local_50;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  lVar11 = (long)puVar1 - (long)puVar2 >> 3;
  uVar12 = lVar11 * -0x71c71c71c71c71c7;
  if (uVar12 == 0x1c71c71c71c71c7) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar14 = (undefined8 *)((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    uVar15 = uVar12 + 1;
    if (0xfffffffffffffffe < uVar12) goto LAB_0010db00;
    if (0x1c71c71c71c71c7 < uVar15) {
      uVar15 = 0x1c71c71c71c71c7;
    }
    uVar15 = uVar15 * 0x48;
LAB_0010db0a:
    puVar13 = (undefined8 *)operator_new(uVar15);
    local_50 = (long)puVar13 + uVar15;
    uVar4 = param_3[1];
    puVar16 = puVar13 + 9;
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    uVar3 = param_3[8];
    *(undefined8 *)((long)puVar13 + (long)puVar14) = *param_3;
    ((undefined8 *)((long)puVar13 + (long)puVar14))[1] = uVar4;
    *(undefined8 *)((long)(puVar13 + 2) + (long)puVar14) = uVar5;
    ((undefined8 *)((long)(puVar13 + 2) + (long)puVar14))[1] = uVar6;
    *(undefined8 *)((long)(puVar13 + 8) + (long)puVar14) = uVar3;
    *(undefined8 *)((long)(puVar13 + 4) + (long)puVar14) = uVar7;
    ((undefined8 *)((long)(puVar13 + 4) + (long)puVar14))[1] = uVar8;
    *(undefined8 *)((long)(puVar13 + 6) + (long)puVar14) = uVar9;
    ((undefined8 *)((long)(puVar13 + 6) + (long)puVar14))[1] = uVar10;
    puVar14 = puVar2;
    puVar17 = puVar13;
    if (param_2 != puVar2) {
LAB_0010da50:
      do {
        uVar4 = puVar14[1];
        uVar3 = puVar14[8];
        puVar16 = puVar14 + 9;
        uVar5 = puVar14[2];
        uVar6 = puVar14[3];
        uVar7 = puVar14[4];
        uVar8 = puVar14[5];
        uVar9 = puVar14[6];
        uVar10 = puVar14[7];
        *puVar13 = *puVar14;
        puVar13[1] = uVar4;
        puVar13[2] = uVar5;
        puVar13[3] = uVar6;
        puVar13[4] = uVar7;
        puVar13[5] = uVar8;
        puVar13[6] = uVar9;
        puVar13[7] = uVar10;
        puVar13[8] = uVar3;
        puVar14 = puVar16;
        puVar13 = puVar13 + 9;
      } while (puVar16 != param_2);
      puVar16 = (undefined8 *)
                ((long)puVar17 +
                ((long)param_2 + (-0x48 - (long)puVar2) & 0xfffffffffffffff8U) + 0x90);
      puVar13 = puVar17;
    }
    puVar14 = puVar16;
    if (param_2 == puVar1) goto LAB_0010dac4;
  }
  else {
    uVar15 = lVar11 * 0x1c71c71c71c71c72;
    if (uVar15 < uVar12) {
LAB_0010db00:
      uVar15 = 0x7ffffffffffffff8;
      goto LAB_0010db0a;
    }
    if (uVar15 != 0) {
      if (0x1c71c71c71c71c7 < uVar15) {
        uVar15 = 0x1c71c71c71c71c7;
      }
      uVar15 = uVar15 * 0x48;
      goto LAB_0010db0a;
    }
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    puVar13 = (undefined8 *)0x0;
    local_50 = 0;
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar3 = param_3[8];
    puVar16 = (undefined8 *)0x48;
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    *puVar14 = *param_3;
    puVar14[1] = uVar4;
    puVar14[8] = uVar3;
    puVar14[2] = uVar5;
    puVar14[3] = uVar6;
    puVar14[4] = uVar7;
    puVar14[5] = uVar8;
    puVar14[6] = uVar9;
    puVar14[7] = uVar10;
    puVar14 = puVar2;
    puVar17 = puVar13;
    if (param_2 != puVar2) goto LAB_0010da50;
  }
  __n = ((long)puVar1 + (-0x48 - (long)param_2) & 0xfffffffffffffff8U) + 0x48;
  puVar14 = (undefined8 *)((long)puVar16 + __n);
  memcpy(puVar16,param_2,__n);
LAB_0010dac4:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar13;
  *(undefined8 **)(this + 8) = puVar14;
  *(long *)(this + 0x10) = local_50;
  return;
}



/* void std::vector<float, std::allocator<float>
   >::_M_realloc_insert<float>(__gnu_cxx::__normal_iterator<float*, std::vector<float,
   std::allocator<float> > >, float&&) */

void __thiscall
std::vector<float,std::allocator<float>>::_M_realloc_insert<float>
          (vector<float,std::allocator<float>> *this,void *param_2,undefined4 *param_3)

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
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_0010dca0;
    uVar3 = 0x1fffffffffffffff;
    if (uVar2 + 1 < 0x2000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 2;
LAB_0010dcaa:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_0010dca0:
      uVar3 = 0x7ffffffffffffffc;
      goto LAB_0010dcaa;
    }
    if (uVar3 != 0) {
      if (0x1fffffffffffffff < uVar3) {
        uVar3 = 0x1fffffffffffffff;
      }
      uVar3 = uVar3 * 4;
      goto LAB_0010dcaa;
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
    if (__src == (void *)0x0) goto LAB_0010dc7f;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010dc7f:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* void std::vector<linalg::vec<int, 2>, std::allocator<linalg::vec<int, 2> >
   >::_M_realloc_insert<linalg::vec<int, 2> >(__gnu_cxx::__normal_iterator<linalg::vec<int, 2>*,
   std::vector<linalg::vec<int, 2>, std::allocator<linalg::vec<int, 2> > > >, linalg::vec<int, 2>&&)
    */

void __thiscall
std::vector<linalg::vec<int,2>,std::allocator<linalg::vec<int,2>>>::
_M_realloc_insert<linalg::vec<int,2>>
          (vector<linalg::vec<int,2>,std::allocator<linalg::vec<int,2>>> *this,undefined8 *param_2,
          undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar5 = (long)puVar1 - (long)puVar2 >> 3;
  if (uVar5 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar5) goto LAB_0010de70;
    uVar7 = 0xfffffffffffffff;
    if (uVar5 + 1 < 0x1000000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 3;
LAB_0010de7a:
    puVar6 = (undefined8 *)operator_new(uVar7);
    lVar10 = uVar7 + (long)puVar6;
    puVar9 = puVar6 + 1;
    *(undefined8 *)((long)puVar6 + ((long)param_2 - (long)puVar2)) = *param_3;
    if (param_2 != puVar2) {
LAB_0010dde9:
      puVar4 = puVar6;
      puVar8 = puVar2;
      do {
        puVar9 = puVar4;
        uVar3 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar9 = uVar3;
        puVar4 = puVar9 + 1;
      } while (puVar9 + 1 != (undefined8 *)(((long)param_2 - (long)puVar2) + (long)puVar6));
      puVar9 = puVar9 + 2;
    }
    if (param_2 == puVar1) goto LAB_0010de39;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_0010de70:
      uVar7 = 0x7ffffffffffffff8;
      goto LAB_0010de7a;
    }
    if (uVar7 != 0) {
      if (0xfffffffffffffff < uVar7) {
        uVar7 = 0xfffffffffffffff;
      }
      uVar7 = uVar7 * 8;
      goto LAB_0010de7a;
    }
    lVar10 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)0x8;
    *(undefined8 *)((long)param_2 - (long)puVar2) = *param_3;
    if (param_2 != puVar2) goto LAB_0010dde9;
  }
  memcpy(puVar9,param_2,(long)puVar1 - (long)param_2);
  puVar9 = (undefined8 *)((long)puVar9 + ((long)puVar1 - (long)param_2));
LAB_0010de39:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar9;
  *(long *)(this + 0x10) = lVar10;
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::Manifold::Impl::Impl<float, unsigned int>(manifold::MeshGLP<float, unsigned int>
   const&) */

void __thiscall manifold::Manifold::Impl::Impl<float,unsigned_int>(Impl *this,MeshGLP *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 *__src;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  double dVar16;
  undefined8 uVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  Vec *pVVar21;
  Vec *pVVar22;
  ulong uVar23;
  Vec *pVVar24;
  long lVar25;
  Vec *pVVar26;
  ulong uVar27;
  Vec *pVVar28;
  float *pfVar29;
  Vec *pVVar30;
  ulong *puVar31;
  ulong extraout_RDX;
  Vec *pVVar32;
  Vec *unaff_RBP;
  int iVar33;
  long lVar34;
  Vec *pVVar35;
  undefined8 uVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  long lVar40;
  Vec *pVVar41;
  Vec *in_R11;
  Vec *pVVar42;
  size_t sVar43;
  uint uVar44;
  Vec *pVVar45;
  long in_FS_OFFSET;
  bool bVar46;
  undefined8 extraout_XMM1_Qa;
  Vec *local_190;
  Vec *local_188;
  Vec *local_178;
  Vec *local_170;
  ulong local_168;
  ulong local_158;
  ulong uStack_150;
  float local_148;
  float fStack_144;
  float local_138;
  float fStack_134;
  float local_128;
  float fStack_124;
  ulong local_110;
  double dStack_100;
  ulong local_a8;
  undefined8 local_98;
  int local_90 [2];
  undefined8 *local_88;
  undefined4 local_80;
  Vec *local_78;
  undefined1 local_70 [8];
  Vec *pVStack_68;
  undefined8 local_58;
  undefined8 uStack_50;
  Vec local_48 [8];
  long local_40;
  
  uVar36 = _LC18;
  pVVar45 = (Vec *)(this + 0xe8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = _LC18;
  *(undefined8 *)(this + 8) = uVar36;
  uVar17 = _LC21;
  uVar36 = _LC18;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x10) = uVar36;
  *(undefined8 *)(this + 0x18) = uVar17;
  uVar36 = _LC21;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x20) = uVar36;
  *(undefined8 *)(this + 0x28) = uVar36;
  dVar16 = _LC23;
  *(undefined8 *)(this + 0x78) = 0;
  *(double *)(this + 0x30) = dVar16;
  *(double *)(this + 0x38) = dVar16;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x90) = 0;
  uVar36 = _LC24;
  lVar40 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 8);
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 200) = 0;
  lVar4 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(this + 0xc0) = uVar36;
  uVar44 = *(uint *)param_1;
  *(undefined4 *)(this + 0xe8) = 0;
  lVar5 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(this + 0xf0) = 0;
  *(Vec **)(this + 0xf8) = pVVar45;
  *(Vec **)(this + 0x100) = pVVar45;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined1 (*) [16])(this + 0x98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xd0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x118) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x130) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x148) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x160) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x178) = (undefined1  [16])0x0;
  if (uVar44 < 3) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar36 = 5;
LAB_0010e35c:
      manifold::Manifold::Impl::MarkFailure(this,uVar36);
      return;
    }
    goto LAB_0010f652;
  }
  lVar39 = *(long *)(param_1 + 0x40);
  lVar34 = *(long *)(param_1 + 0x38);
  lVar25 = lVar39 - lVar34;
  if (lVar25 != *(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar36 = 6;
      goto LAB_0010e35c;
    }
    goto LAB_0010f652;
  }
  if ((*(long *)(param_1 + 0x98) != *(long *)(param_1 + 0xa0)) &&
     (in_R11 = (Vec *)((*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 2) * 0xc),
     in_R11 != (Vec *)(*(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98) >> 2))) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar36 = 8;
      goto LAB_0010e35c;
    }
    goto LAB_0010f652;
  }
  if (*(long *)(param_1 + 0x88) != *(long *)(param_1 + 0x80)) {
    in_R11 = *(Vec **)(param_1 + 0x70);
    if (*(Vec **)(param_1 + 0x68) != in_R11) {
      pVVar21 = (Vec *)(*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80));
      in_R11 = in_R11 + -(long)*(Vec **)(param_1 + 0x68);
      if ((((long)pVVar21 >> 2) + 1 != (long)in_R11 >> 2) && (in_R11 != pVVar21)) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar36 = 9;
          goto LAB_0010e35c;
        }
        goto LAB_0010f652;
      }
    }
  }
  local_158 = (ulong)(lVar4 - lVar5 >> 2) / 3;
  if ((*(long *)(param_1 + 0xb0) != *(long *)(param_1 + 0xb8)) &&
     (*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 2 != (local_158 & 0xffffffff))) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar36 = 10;
      goto LAB_0010e35c;
    }
    goto LAB_0010f652;
  }
  local_178 = (Vec *)0x0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = lVar40 - lVar3 >> 2;
  auVar6 = auVar6 / ZEXT416(uVar44);
  uVar44 = auVar6._0_4_;
  uVar27 = auVar6._0_8_ & 0xffffffff;
  local_110 = uVar27;
  if (uVar44 != 0) {
    local_110 = uVar27 * 4;
    local_178 = (Vec *)operator_new(local_110);
    pVVar21 = local_178 + 4;
    *(int *)local_178 = 0;
    if (uVar27 == 1) {
      local_110 = 4;
      pVVar22 = pVVar21;
    }
    else {
      pVVar22 = local_178 + local_110;
      if (pVVar21 != pVVar22) {
        memset(pVVar21,0,local_110 - 4);
        local_190 = pVVar22;
      }
    }
    lVar39 = *(long *)(param_1 + 0x40);
    lVar34 = *(long *)(param_1 + 0x38);
    lVar25 = lVar39 - lVar34;
    if (pVVar22 != local_178) {
      uVar27 = 0;
      do {
        *(int *)(local_178 + uVar27 * 4) = (int)uVar27;
        bVar46 = uVar27 != (ulong)(pVVar22 + (-4 - (long)local_178)) >> 2;
        uVar27 = uVar27 + 1;
      } while (bVar46);
    }
  }
  if (lVar39 != lVar34) {
    uVar27 = 0;
    lVar40 = *(long *)(param_1 + 0x50);
    do {
      uVar1 = *(uint *)(lVar34 + uVar27 * 4);
      uVar38 = *(uint *)(lVar40 + uVar27 * 4);
      uVar37 = uVar38;
      if (uVar38 <= uVar1) {
        uVar37 = uVar1;
      }
      if (uVar44 <= uVar37) {
        manifold::Manifold::Impl::MarkFailure(this,7);
        goto LAB_0010e2f9;
      }
      uVar27 = uVar27 + 1;
      *(uint *)(local_178 + (ulong)uVar1 * 4) = uVar38;
      in_R11 = local_178;
    } while (uVar27 < (ulong)(lVar25 >> 2));
  }
  uVar1 = *(uint *)param_1;
  lVar40 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 8);
  uVar38 = uVar1 - 3;
  *(uint *)(this + 0xc4) = uVar38;
  pVVar35 = (Vec *)(ulong)(uVar38 * (int)((ulong)(lVar40 - lVar3 >> 2) / (ulong)uVar1));
  Vec<double>::resize((Vec<double> *)(this + 200),(ulong)pVVar35,0.0);
  pVVar22 = *(Vec **)(param_1 + 0x10);
  uVar27 = (ulong)*(uint *)param_1;
  pVVar24 = *(Vec **)(this + 0x50);
  lVar40 = *(long *)(param_1 + 8);
  *(double *)(this + 0x38) = (double)*(float *)(param_1 + 0xe0);
  pVVar42 = (Vec *)((ulong)((long)pVVar22 - lVar40 >> 2) / uVar27 & 0xffffffff);
  pVVar21 = (Vec *)((long)pVVar42 * 2);
  pVVar41 = pVVar24;
  if (*(Vec **)(this + 0x58) < pVVar42) {
    pVVar22 = (Vec *)malloc((long)pVVar42 * 0x18);
    pVVar35 = *(Vec **)(this + 0x48);
    local_190 = pVVar21;
    local_188 = pVVar24;
    if (pVVar24 == (Vec *)0x0) {
      if (pVVar35 == (Vec *)0x0) {
        *(Vec **)(this + 0x48) = pVVar22;
        pVVar41 = (Vec *)0x0;
        *(Vec **)(this + 0x58) = pVVar42;
        goto LAB_0010ebd0;
      }
LAB_0010f126:
      free(pVVar35);
      pVVar41 = *(Vec **)(this + 0x50);
      local_190 = pVVar24;
      local_188 = pVVar22;
      local_170 = pVVar21;
    }
    else {
      sVar43 = (long)pVVar24 * 0x18;
      if (0x18 < (long)sVar43) {
        pVVar22 = (Vec *)memmove(pVVar22,pVVar35,sVar43);
        goto LAB_0010f126;
      }
      if (sVar43 == 0x18) {
        uVar27 = *(ulong *)(pVVar35 + 8);
        *(ulong *)pVVar22 = *(ulong *)pVVar35;
        *(ulong *)(pVVar22 + 8) = uVar27;
        *(ulong *)(pVVar22 + 0x10) = *(ulong *)(pVVar35 + 0x10);
        goto LAB_0010f126;
      }
      if (pVVar35 != (Vec *)0x0) goto LAB_0010f126;
    }
    *(Vec **)(this + 0x48) = pVVar22;
    *(Vec **)(this + 0x58) = pVVar42;
    if (pVVar41 < pVVar42) goto LAB_0010ebd0;
LAB_0010f161:
    *(Vec **)(this + 0x50) = pVVar42;
    if (pVVar21 < pVVar24) {
LAB_0010f16e:
      sVar43 = (long)pVVar42 * 0x18;
      pVVar41 = (Vec *)malloc(sVar43);
      pVVar24 = *(Vec **)(this + 0x48);
      if (sVar43 == 0x18) {
        uVar27 = *(ulong *)(pVVar24 + 8);
        *(ulong *)pVVar41 = *(ulong *)pVVar24;
        *(ulong *)(pVVar41 + 8) = uVar27;
        *(ulong *)(pVVar41 + 0x10) = *(ulong *)(pVVar24 + 0x10);
      }
      else {
        pVVar35 = pVVar24;
        pVVar41 = (Vec *)memmove(pVVar41,pVVar24,sVar43);
      }
LAB_0010f198:
      free(pVVar24);
      uVar36 = *(undefined8 *)(this + 0x50);
      pVVar22 = *(Vec **)(param_1 + 0x10);
      uVar27 = (ulong)*(uint *)param_1;
      local_190 = pVVar41;
LAB_0010e440:
      *(Vec **)(this + 0x48) = pVVar41;
      *(undefined8 *)(this + 0x58) = uVar36;
    }
    else {
LAB_0010ec12:
      pVVar22 = *(Vec **)(param_1 + 0x10);
      uVar27 = (ulong)*(uint *)param_1;
    }
  }
  else {
    if (pVVar24 < pVVar42) {
      pVVar22 = *(Vec **)(this + 0x48);
LAB_0010ebd0:
      pVVar41 = pVVar22 + (long)pVVar41 * 0x18;
      if (pVVar22 + (long)pVVar42 * 0x18 == pVVar41) goto LAB_0010f161;
      do {
        *(undefined8 *)(pVVar41 + 0x10) = 0;
        pVVar26 = pVVar41 + 0x18;
        *(undefined1 (*) [16])pVVar41 = (undefined1  [16])0x0;
        pVVar41 = pVVar26;
      } while (pVVar22 + (long)pVVar42 * 0x18 != pVVar26);
      *(Vec **)(this + 0x50) = pVVar42;
      if (pVVar21 < pVVar24) goto LAB_0010f16e;
      goto LAB_0010ec12;
    }
    *(Vec **)(this + 0x50) = pVVar42;
    if (pVVar21 < pVVar24) {
      if (pVVar42 != (Vec *)0x0) goto LAB_0010f16e;
      pVVar24 = *(Vec **)(this + 0x48);
      uVar36 = 0;
      pVVar41 = pVVar24;
      if (pVVar24 != (Vec *)0x0) {
        pVVar41 = (Vec *)0x0;
        goto LAB_0010f198;
      }
      goto LAB_0010e440;
    }
  }
  uVar36 = _LC27;
  pVVar24 = *(Vec **)(param_1 + 8);
  uVar23 = (ulong)((long)pVVar22 - (long)pVVar24 >> 2) / uVar27;
  if ((int)uVar23 != 0) {
    pVVar41 = *(Vec **)(this + 0x48);
    local_168 = uVar27 * 4;
    pVVar42 = (Vec *)0x0;
    pVVar21 = pVVar41 + (uVar23 & 0xffffffff) * 0x18;
    local_188 = (Vec *)&local_58;
    local_170 = (Vec *)((ulong)uVar38 * 8);
    in_R11 = (Vec *)((long)&uStack_50 + 4);
    pVVar22 = (Vec *)0x3;
    pVVar35 = pVVar24;
    do {
      local_190 = pVVar22;
      unaff_RBP = local_190 + -3;
      uStack_50 = CONCAT44(uStack_50._4_4_,2);
      local_58 = uVar36;
      pVVar22 = local_188;
      do {
        iVar19 = *(int *)pVVar22;
        pVVar26 = pVVar41;
        if ((iVar19 != 0) && (pVVar26 = pVVar41 + 8, iVar19 != 1)) {
          pVVar26 = pVVar41 + 0x10;
        }
        pVVar22 = pVVar22 + 4;
        *(double *)pVVar26 = (double)*(float *)(pVVar24 + (long)(unaff_RBP + iVar19) * 4);
      } while (pVVar22 != in_R11);
      if (uVar38 != 0) {
        lVar40 = *(long *)(this + 200);
        uVar23 = 0;
        do {
          *(double *)(pVVar42 + uVar23 * 8 + lVar40) =
               (double)*(float *)(pVVar35 + uVar23 * 4 + 0xc);
          uVar23 = uVar23 + 1;
        } while (uVar23 != uVar38);
      }
      pVVar41 = pVVar41 + 0x18;
      pVVar22 = local_190 + uVar27;
      pVVar35 = pVVar35 + local_168;
      pVVar42 = pVVar42 + (long)local_170;
    } while (pVVar41 != pVVar21);
  }
  pVVar26 = *(Vec **)(this + 0xb0);
  pVVar42 = (Vec *)((ulong)(*(long *)(param_1 + 0xd0) - *(long *)(param_1 + 200) >> 2) >> 2);
  pVVar41 = (Vec *)((long)pVVar42 * 2);
  pVVar28 = pVVar26;
  if (*(Vec **)(this + 0xb8) < pVVar42) {
    pVVar21 = (Vec *)((long)pVVar42 << 5);
    pVVar22 = (Vec *)malloc((size_t)pVVar21);
    pVVar35 = *(Vec **)(this + 0xa8);
    local_190 = pVVar21;
    local_188 = pVVar41;
    if (pVVar26 == (Vec *)0x0) {
      if (pVVar35 == (Vec *)0x0) {
        *(Vec **)(this + 0xa8) = pVVar22;
        pVVar28 = (Vec *)0x0;
        *(Vec **)(this + 0xb8) = pVVar42;
        goto LAB_0010e5d4;
      }
LAB_0010f1f3:
      free(pVVar35);
      pVVar28 = *(Vec **)(this + 0xb0);
      local_190 = pVVar41;
      local_188 = pVVar21;
      local_170 = pVVar22;
    }
    else {
      sVar43 = (long)pVVar26 * 0x20;
      if (0x20 < (long)sVar43) {
        pVVar22 = (Vec *)memmove(pVVar22,pVVar35,sVar43);
        goto LAB_0010f1f3;
      }
      if (sVar43 == 0x20) {
        uVar27 = *(ulong *)(pVVar35 + 8);
        *(ulong *)pVVar22 = *(ulong *)pVVar35;
        *(ulong *)(pVVar22 + 8) = uVar27;
        uVar27 = *(ulong *)(pVVar35 + 0x18);
        *(ulong *)(pVVar22 + 0x10) = *(ulong *)(pVVar35 + 0x10);
        *(ulong *)(pVVar22 + 0x18) = uVar27;
        goto LAB_0010f1f3;
      }
      if (pVVar35 != (Vec *)0x0) goto LAB_0010f1f3;
    }
    *(Vec **)(this + 0xa8) = pVVar22;
    *(Vec **)(this + 0xb8) = pVVar42;
    if (pVVar28 < pVVar42) goto LAB_0010e5d4;
LAB_0010f237:
    *(Vec **)(this + 0xb0) = pVVar42;
    if (pVVar26 <= pVVar41) goto LAB_0010e624;
LAB_0010f247:
    local_190 = (Vec *)((long)pVVar42 << 5);
    puVar31 = (ulong *)malloc((size_t)local_190);
    pVVar26 = *(Vec **)(this + 0xa8);
    pVVar21 = local_190;
    if ((long)local_190 < 0x21) {
      if (local_190 != (Vec *)0x20) goto LAB_0010ed2d;
      uVar27 = *(ulong *)(pVVar26 + 8);
      *puVar31 = *(ulong *)pVVar26;
      puVar31[1] = uVar27;
      uVar27 = *(ulong *)(pVVar26 + 0x18);
      puVar31[2] = *(ulong *)(pVVar26 + 0x10);
      puVar31[3] = uVar27;
    }
    else {
      pVVar35 = pVVar26;
      memmove(puVar31,pVVar26,(size_t)local_190);
    }
LAB_0010f27b:
    free(pVVar26);
LAB_0010ed36:
    *(ulong **)(this + 0xa8) = puVar31;
    pVVar42 = *(Vec **)(this + 0xb0);
    *(Vec **)(this + 0xb8) = pVVar42;
LAB_0010ed4b:
    if (pVVar42 != (Vec *)0x0) goto LAB_0010e624;
    pVVar42 = (Vec *)0x0;
  }
  else {
    if (pVVar42 <= pVVar26) {
      *(Vec **)(this + 0xb0) = pVVar42;
      if (pVVar41 < pVVar26) {
        if (pVVar42 != (Vec *)0x0) goto LAB_0010f247;
        pVVar26 = *(Vec **)(this + 0xa8);
        puVar31 = (ulong *)0x0;
LAB_0010ed2d:
        if (pVVar26 != (Vec *)0x0) goto LAB_0010f27b;
        goto LAB_0010ed36;
      }
      goto LAB_0010ed4b;
    }
    pVVar22 = *(Vec **)(this + 0xa8);
LAB_0010e5d4:
    pVVar21 = pVVar22 + (long)pVVar28 * 0x20;
    if (pVVar22 + (long)pVVar42 * 0x20 == pVVar21) goto LAB_0010f237;
    pVVar28 = (Vec *)0x0;
    pVVar22 = (Vec *)(((ulong)(pVVar22 + (long)pVVar42 * 0x20 + (-0x20 - (long)pVVar21)) >> 5) + 1);
    do {
      pVVar28 = pVVar28 + 1;
      *(undefined1 (*) [16])pVVar21 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pVVar21 + 0x10) = (undefined1  [16])0x0;
      pVVar21 = pVVar21 + 0x20;
    } while (pVVar28 < pVVar22);
    *(Vec **)(this + 0xb0) = pVVar42;
    if (pVVar41 < pVVar26) goto LAB_0010f247;
LAB_0010e624:
    uStack_50 = _UNK_001114f8;
    local_58 = _LC27;
    lVar40 = 0;
    pVVar35 = *(Vec **)(this + 0xa8);
    pVVar41 = local_48;
    pVVar21 = *(Vec **)(param_1 + 200);
    pVVar24 = pVVar35 + (long)pVVar42 * 0x20;
    do {
      in_R11 = pVVar35 + 8;
      pVVar42 = pVVar35 + 0x18;
      unaff_RBP = pVVar35 + 0x10;
      pVVar28 = (Vec *)&local_58;
      do {
        iVar19 = *(int *)pVVar28;
        pVVar26 = (Vec *)(long)iVar19;
        pVVar22 = pVVar35;
        if (((iVar19 != 0) && (pVVar22 = in_R11, iVar19 != 1)) && (pVVar22 = pVVar42, iVar19 == 2))
        {
          pVVar22 = unaff_RBP;
        }
        pVVar28 = pVVar28 + 4;
        *(double *)pVVar22 = (double)*(float *)(pVVar21 + (long)(pVVar26 + lVar40) * 4);
      } while (pVVar41 != pVVar28);
      pVVar35 = pVVar35 + 0x20;
      lVar40 = lVar40 + 4;
    } while (pVVar35 != pVVar24);
  }
  if (*(long *)(param_1 + 0x88) == *(long *)(param_1 + 0x80)) {
    local_a8 = 0;
    local_170 = (Vec *)0x0;
  }
  else {
    pVVar28 = (Vec *)(*(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x68));
    if (pVVar28 == (Vec *)0x0) {
      sVar43 = 0;
      pVVar21 = (Vec *)0x0;
      pVVar22 = (Vec *)0x0;
      local_78 = (Vec *)0x0;
      pVStack_68 = (Vec *)0x0;
    }
    else {
      if ((Vec *)0x7ffffffffffffffc < pVVar28) {
        std::__throw_bad_array_new_length();
        uVar27 = extraout_RDX;
        uVar36 = extraout_XMM1_Qa;
        goto LAB_0010f4d7;
      }
      pVVar22 = (Vec *)operator_new((ulong)pVVar28);
      pVVar21 = pVVar22 + (long)pVVar28;
      __src = *(undefined4 **)(param_1 + 0x68);
      sVar43 = *(long *)(param_1 + 0x70) - (long)__src;
      local_78 = pVVar22;
      pVStack_68 = pVVar21;
      if ((long)sVar43 < 5) {
        if (sVar43 == 4) {
          *(undefined4 *)pVVar22 = *__src;
        }
      }
      else {
        pVVar22 = (Vec *)memmove(pVVar22,__src,sVar43);
      }
    }
    local_70 = (undefined1  [8])(pVVar22 + sVar43);
    uVar27 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 2;
    if (local_70 == (undefined1  [8])pVVar22) {
      if (pVVar28 < (Vec *)0x8) {
        pVVar21 = (Vec *)operator_new(8);
        *(ulong *)pVVar21 = uVar27 << 0x20;
        if (pVVar22 != (Vec *)0x0) {
          operator_delete(pVVar22,(ulong)pVVar28);
        }
        local_70 = (undefined1  [8])(pVVar21 + 8);
        pVVar28 = (Vec *)0x8;
        uVar27 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 2;
        pVVar22 = pVVar21;
        local_78 = pVVar21;
        pVStack_68 = (Vec *)local_70;
      }
      else {
        local_70 = (undefined1  [8])(pVVar22 + 8);
        *(ulong *)pVVar22 = uVar27 << 0x20;
      }
    }
    else if (*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) == sVar43) {
      local_88 = (undefined8 *)CONCAT44(local_88._4_4_,(int)uVar27);
      if (local_70 == (undefined1  [8])pVVar21) {
        std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>
                  ((vector<unsigned_int,std::allocator<unsigned_int>> *)&local_78,pVVar21,&local_88)
        ;
        uVar27 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 2;
        pVVar28 = pVStack_68 + -(long)local_78;
        pVVar22 = local_78;
      }
      else {
        *(int *)local_70 = (int)uVar27;
        local_70 = (undefined1  [8])((long)local_70 + 4);
      }
    }
    local_170 = (Vec *)0x0;
    local_a8 = uVar27 / 3 & 0xffffffff;
    if ((int)(uVar27 / 3) != 0) {
      local_170 = (Vec *)malloc(local_a8 * 0x10);
      uVar27 = 0;
      do {
        uVar23 = uVar27 + 1;
        *(undefined1 (*) [16])(local_170 + uVar27 * 0x10) = (undefined1  [16])0x0;
        uVar27 = uVar23;
      } while (uVar23 < (local_a8 * 0x10 - 0x10 >> 4) + 1);
    }
    iVar19 = manifold::Manifold::Impl::ReserveIDs
                       ((uint)(*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 2));
    lVar40 = *(long *)(param_1 + 0x80);
    uVar27 = 0;
    if (lVar40 == *(long *)(param_1 + 0x88)) {
      if (pVVar22 == (Vec *)0x0) goto LAB_0010ea4f;
    }
    else {
      do {
        local_98 = CONCAT44(local_98._4_4_,iVar19);
        uVar1 = *(uint *)(pVVar22 + uVar27 * 4 + 4);
        iVar2 = *(int *)(lVar40 + uVar27 * 4);
        uVar23 = (ulong)*(uint *)(pVVar22 + uVar27 * 4) / 3;
        if (uVar23 < (ulong)uVar1 / 3) {
          lVar3 = *(long *)(param_1 + 0xb8);
          lVar4 = *(long *)(param_1 + 0xb0);
          pVVar21 = local_170 + uVar23 * 0x10;
          do {
            *(int *)pVVar21 = iVar19;
            iVar20 = (int)uVar23;
            *(int *)(pVVar21 + 4) = iVar2;
            iVar33 = iVar20;
            if (lVar3 != lVar4) {
              iVar33 = *(int *)(lVar4 + uVar23 * 4);
            }
            uVar23 = uVar23 + 1;
            *(int *)(pVVar21 + 8) = iVar33;
            *(int *)(pVVar21 + 0xc) = iVar20;
            pVVar21 = pVVar21 + 0x10;
          } while (uVar23 != (ulong)uVar1 / 3);
        }
        pVVar21 = *(Vec **)(this + 0xf0);
        if (*(long *)(param_1 + 0xa0) == *(long *)(param_1 + 0x98)) {
          pVVar24 = pVVar45;
          if (pVVar21 == (Vec *)0x0) {
LAB_0010ec86:
            local_88 = &local_98;
            pVVar24 = (Vec *)std::
                             _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
                             ::
                             _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
                                       (this + 0xe0,pVVar24,&local_88);
            lVar40 = *(long *)(param_1 + 0x80);
          }
          else {
            do {
              while( true ) {
                pVVar35 = pVVar21;
                if (*(int *)(pVVar35 + 0x20) < iVar19) break;
                pVVar21 = *(Vec **)(pVVar35 + 0x10);
                pVVar24 = pVVar35;
                if (*(Vec **)(pVVar35 + 0x10) == (Vec *)0x0) goto LAB_0010ec79;
              }
              pVVar21 = *(Vec **)(pVVar35 + 0x18);
            } while (*(Vec **)(pVVar35 + 0x18) != (Vec *)0x0);
LAB_0010ec79:
            if ((pVVar45 == pVVar24) || (iVar19 < *(int *)(pVVar24 + 0x20))) goto LAB_0010ec86;
          }
          uVar23 = _LC6;
          *(int *)(pVVar24 + 0x28) = iVar2;
          pVVar24[0x90] = (Vec)0x0;
          *(ulong *)(pVVar24 + 0x30) = uVar23;
          *(ulong *)(pVVar24 + 0x38) = 0;
          *(undefined1 (*) [16])(pVVar24 + 0x40) = (undefined1  [16])0x0;
          *(ulong *)(pVVar24 + 0x50) = uVar23;
          *(ulong *)(pVVar24 + 0x58) = 0;
          *(undefined1 (*) [16])(pVVar24 + 0x60) = (undefined1  [16])0x0;
          *(ulong *)(pVVar24 + 0x70) = uVar23;
          *(ulong *)(pVVar24 + 0x78) = 0;
          *(undefined1 (*) [16])(pVVar24 + 0x80) = (undefined1  [16])0x0;
        }
        else {
          pfVar29 = (float *)(*(long *)(param_1 + 0x98) + uVar27 * 0x30);
          fVar9 = *pfVar29;
          fVar10 = pfVar29[1];
          fVar11 = pfVar29[4];
          fVar12 = pfVar29[5];
          fVar13 = pfVar29[8];
          fVar14 = pfVar29[9];
          dStack_100 = (double)fStack_134;
          pVVar24 = pVVar45;
          if (pVVar21 == (Vec *)0x0) {
LAB_0010e95a:
            auVar7._8_4_ = SUB84(dStack_100,0);
            auVar7._0_8_ = (double)local_138;
            auVar7._12_4_ = (int)((ulong)dStack_100 >> 0x20);
            local_88 = &local_98;
            pVVar24 = (Vec *)std::
                             _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
                             ::
                             _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
                                       (this + 0xe0,pVVar24,&local_88);
            lVar40 = *(long *)(param_1 + 0x80);
            dStack_100 = auVar7._8_8_;
          }
          else {
            do {
              while( true ) {
                pVVar35 = pVVar21;
                if (*(int *)(pVVar35 + 0x20) < iVar19) break;
                pVVar21 = *(Vec **)(pVVar35 + 0x10);
                pVVar24 = pVVar35;
                if (*(Vec **)(pVVar35 + 0x10) == (Vec *)0x0) goto LAB_0010e949;
              }
              pVVar21 = *(Vec **)(pVVar35 + 0x18);
            } while (*(Vec **)(pVVar35 + 0x18) != (Vec *)0x0);
LAB_0010e949:
            if ((pVVar45 == pVVar24) || (iVar19 < *(int *)(pVVar24 + 0x20))) goto LAB_0010e95a;
          }
          *(int *)(pVVar24 + 0x28) = iVar2;
          pVVar24[0x90] = (Vec)0x0;
          *(double *)(pVVar24 + 0x30) = (double)fVar9;
          *(double *)(pVVar24 + 0x38) = (double)fVar10;
          *(double *)(pVVar24 + 0x40) = (double)local_148;
          *(double *)(pVVar24 + 0x48) = (double)fStack_144;
          *(double *)(pVVar24 + 0x50) = (double)fVar11;
          *(double *)(pVVar24 + 0x58) = (double)fVar12;
          auVar8._8_4_ = SUB84(dStack_100,0);
          auVar8._0_8_ = (double)local_138;
          auVar8._12_4_ = (int)((ulong)dStack_100 >> 0x20);
          *(undefined1 (*) [16])(pVVar24 + 0x60) = auVar8;
          *(double *)(pVVar24 + 0x70) = (double)fVar13;
          *(double *)(pVVar24 + 0x78) = (double)fVar14;
          *(double *)(pVVar24 + 0x80) = (double)local_128;
          *(double *)(pVVar24 + 0x88) = (double)fStack_124;
        }
        uVar27 = uVar27 + 1;
        iVar19 = iVar19 + 1;
      } while (uVar27 < (ulong)(*(long *)(param_1 + 0x88) - lVar40 >> 2));
    }
    operator_delete(pVVar22,(ulong)pVVar28);
  }
LAB_0010ea4f:
  local_78 = (Vec *)0x0;
  _local_70 = (undefined1  [16])0x0;
  uVar27 = local_158 & 0xffffffff;
  if ((int)local_158 != 0) {
    pVVar26 = (Vec *)0x0;
    pVVar45 = (Vec *)&local_98;
    local_78 = (Vec *)malloc(uVar27 * 0xc);
    pVVar28 = (Vec *)((long)&uStack_50 + 4);
    pVVar21 = (Vec *)((long)&local_98 + 4);
    pVStack_68 = (Vec *)uVar27;
    pVVar24 = local_170 + uVar27 * 0x10;
    local_188 = (Vec *)&local_58;
    unaff_RBP = (Vec *)(ulong)uVar44;
    pVVar22 = (Vec *)local_90;
    pVVar32 = local_170;
    pVVar41 = (Vec *)param_1;
    pVVar42 = local_178;
    uVar36 = _LC27;
    local_190 = (Vec *)this;
    do {
      local_98 = 0;
      uVar27 = *(ulong *)(pVVar41 + 0x20);
      local_90[0] = 0;
      uStack_50 = CONCAT44(uStack_50._4_4_,2);
      local_58 = uVar36;
      pVVar35 = local_188;
      do {
        iVar19 = *(int *)pVVar35;
        uVar44 = *(uint *)(uVar27 + (long)(pVVar26 + iVar19) * 4);
        if ((uint)unaff_RBP <= uVar44) {
          manifold::Manifold::Impl::MarkFailure(local_190,3);
          goto joined_r0x0010efb0;
        }
        pVVar30 = pVVar45;
        if ((iVar19 != 0) && (pVVar30 = pVVar21, iVar19 != 1)) {
          pVVar30 = pVVar22;
        }
        pVVar35 = pVVar35 + 4;
        *(int *)pVVar30 = *(int *)(pVVar42 + (ulong)uVar44 * 4);
      } while (pVVar35 != pVVar28);
      if ((((int)local_98 != local_98._4_4_) && ((int)local_98 != local_90[0])) &&
         (local_98._4_4_ != local_90[0])) {
        Vec<linalg::vec<int,3>>::push_back((vec *)&local_78,SUB81(pVVar45,0));
        if (local_a8 != 0) {
          uVar27 = *(ulong *)(local_190 + 0x118);
          uVar23 = *(ulong *)(local_190 + 0x120);
          if (uVar27 < uVar23) {
            uVar23 = *(ulong *)pVVar32;
            uVar15 = *(ulong *)(pVVar32 + 8);
            puVar31 = (ulong *)(uVar27 * 0x10 + *(ulong *)(local_190 + 0x110));
            *(ulong *)(local_190 + 0x118) = uVar27 + 1;
            *puVar31 = uVar23;
            puVar31[1] = uVar15;
          }
          else {
            local_158 = *(ulong *)pVVar32;
            uStack_150 = *(ulong *)(pVVar32 + 8);
            if (uVar23 == 0) {
              local_168 = 0x80;
              sVar43 = 0x800;
LAB_0010f3a1:
              in_R11 = (Vec *)malloc(sVar43);
              pVVar35 = *(Vec **)(local_190 + 0x110);
              this = (Impl *)pVVar32;
              if (uVar27 == 0) {
LAB_0010f40e:
                pVVar32 = (Vec *)this;
                if (pVVar35 != (Vec *)0x0) goto LAB_0010f546;
              }
              else {
LAB_0010f4d7:
                sVar43 = uVar27 * 0x10;
                if ((long)sVar43 < 0x11) {
                  if (sVar43 != 0x10) goto LAB_0010f40e;
                  uVar27 = *(ulong *)(pVVar35 + 8);
                  *(ulong *)in_R11 = *(ulong *)pVVar35;
                  *(ulong *)(in_R11 + 8) = uVar27;
                }
                else {
                  in_R11 = (Vec *)memmove(in_R11,pVVar35,sVar43);
                }
LAB_0010f546:
                free(pVVar35);
                uVar27 = *(ulong *)(local_190 + 0x118);
                pVVar32 = (Vec *)this;
              }
              *(Vec **)(local_190 + 0x110) = in_R11;
              *(ulong *)(local_190 + 0x120) = local_168;
            }
            else {
              local_168 = uVar23 * 2;
              if (uVar23 < local_168) {
                sVar43 = uVar23 << 5;
                goto LAB_0010f3a1;
              }
              in_R11 = *(Vec **)(local_190 + 0x110);
            }
            *(ulong *)(local_190 + 0x118) = uVar27 + 1;
            *(ulong *)(in_R11 + uVar27 * 0x10) = local_158;
            *(ulong *)(in_R11 + uVar27 * 0x10 + 8) = uStack_150;
          }
        }
        if (uVar38 != 0) {
          local_80 = *(undefined4 *)(*(ulong *)(pVVar41 + 0x20) + 8 + (long)pVVar26 * 4);
          local_88 = *(undefined8 **)(*(ulong *)(pVVar41 + 0x20) + (long)pVVar26 * 4);
          Vec<linalg::vec<int,3>>::push_back((vec *)(local_190 + 0x128),SUB81(&local_88,0));
        }
      }
      pVVar32 = pVVar32 + 0x10;
      pVVar26 = pVVar26 + 3;
      this = (Impl *)local_190;
    } while (pVVar24 != pVVar32);
  }
  manifold::Manifold::Impl::CreateHalfedges((Vec *)this);
  cVar18 = manifold::Manifold::Impl::IsManifold();
  if (cVar18 == '\0') {
    manifold::Manifold::Impl::MarkFailure(this,2);
  }
  else {
    manifold::Manifold::Impl::CalculateBBox();
    manifold::Manifold::Impl::SetEpsilon(_LC23,SUB81(this,0));
    manifold::Manifold::Impl::SplitPinchedVerts();
    manifold::Manifold::Impl::CalculateNormals();
    if (*(long *)(param_1 + 0x88) == *(long *)(param_1 + 0x80)) {
      manifold::Manifold::Impl::InitializeOriginal(SUB81(this,0));
    }
    manifold::Manifold::Impl::CreateFaces();
    manifold::Manifold::Impl::SimplifyTopology();
    manifold::Manifold::Impl::RemoveUnreferencedVerts();
    manifold::Manifold::Impl::Finish();
    cVar18 = manifold::Manifold::Impl::IsFinite();
    if (cVar18 == '\0') {
      manifold::Manifold::Impl::MarkFailure(this,1);
    }
    else {
      *(undefined4 *)((Vec *)this + 0xc0) = 0xffffffff;
    }
  }
joined_r0x0010efb0:
  if (local_78 != (Vec *)0x0) {
    free(local_78);
  }
  if (local_170 != (Vec *)0x0) {
    free(local_170);
  }
LAB_0010e2f9:
  if (local_178 == (Vec *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator_delete(local_178,local_110);
    return;
  }
LAB_0010f652:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::Manifold::Impl::Impl<double, unsigned long>(manifold::MeshGLP<double, unsigned long>
   const&) */

void __thiscall manifold::Manifold::Impl::Impl<double,unsigned_long>(Impl *this,MeshGLP *param_1)

{
  undefined4 *__s;
  Impl *pIVar1;
  int iVar2;
  uint uVar3;
  Impl *pIVar4;
  undefined8 *__src;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  char cVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  undefined4 *puVar23;
  int *piVar24;
  long lVar25;
  int *piVar26;
  Impl *pIVar27;
  int *piVar28;
  undefined1 (*pauVar29) [16];
  Impl *pIVar30;
  ulong uVar31;
  size_t sVar32;
  MeshGLP *pMVar33;
  int iVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  int *__dest;
  undefined8 *puVar38;
  int *piVar39;
  undefined8 *puVar40;
  uint uVar41;
  long lVar42;
  int *piVar43;
  undefined8 uVar44;
  int iVar45;
  MeshGLP *pMVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  long lVar51;
  long lVar52;
  uint uVar53;
  int *piVar54;
  long in_FS_OFFSET;
  bool bVar55;
  undefined8 *local_158;
  undefined4 *local_140;
  ulong local_138;
  ulong local_c8;
  ulong local_b0;
  undefined8 local_90;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int *local_78;
  undefined1 local_70 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48 [2];
  long local_40;
  
  uVar44 = _LC18;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = _LC18;
  *(undefined8 *)(this + 8) = uVar44;
  uVar7 = _LC21;
  uVar44 = _LC18;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x10) = uVar44;
  *(undefined8 *)(this + 0x18) = uVar7;
  uVar44 = _LC21;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x20) = uVar44;
  *(undefined8 *)(this + 0x28) = uVar44;
  dVar18 = _LC23;
  *(undefined8 *)(this + 0x78) = 0;
  *(double *)(this + 0x30) = dVar18;
  *(double *)(this + 0x38) = dVar18;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x90) = 0;
  lVar49 = *(long *)(param_1 + 0x10);
  *(undefined1 (*) [16])(this + 0x98) = (undefined1  [16])0x0;
  uVar44 = _LC24;
  lVar51 = *(long *)(param_1 + 8);
  lVar52 = *(long *)(param_1 + 0x28);
  *(undefined1 (*) [16])(this + 0xb0) = (undefined1  [16])0x0;
  piVar28 = *(int **)(param_1 + 0x20);
  *(undefined1 (*) [16])(this + 0xd0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x118) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x130) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x148) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x160) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x178) = (undefined1  [16])0x0;
  uVar35 = *(ulong *)param_1;
  *(undefined8 *)(this + 0xc0) = uVar44;
  pIVar1 = this + 0xe8;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(Impl **)(this + 0xf8) = pIVar1;
  *(Impl **)(this + 0x100) = pIVar1;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  if (uVar35 < 3) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar44 = 5;
LAB_0010fa74:
      manifold::Manifold::Impl::MarkFailure(this,uVar44);
      return;
    }
    goto LAB_00110e74;
  }
  lVar42 = *(long *)(param_1 + 0x40);
  lVar25 = *(long *)(param_1 + 0x38);
  lVar47 = lVar42 - lVar25;
  if (lVar47 != *(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar44 = 6;
      goto LAB_0010fa74;
    }
    goto LAB_00110e74;
  }
  if ((*(long *)(param_1 + 0x98) != *(long *)(param_1 + 0xa0)) &&
     ((*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 2) * 0xc !=
      *(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98) >> 3)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar44 = 8;
      goto LAB_0010fa74;
    }
    goto LAB_00110e74;
  }
  if (*(long *)(param_1 + 0x80) != *(long *)(param_1 + 0x88)) {
    if (*(long *)(param_1 + 0x70) != *(long *)(param_1 + 0x68)) {
      lVar22 = *(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 2;
      lVar48 = *(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x68) >> 3;
      if ((lVar22 + 1 != lVar48) && (lVar48 != lVar22)) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar44 = 9;
          goto LAB_0010fa74;
        }
        goto LAB_00110e74;
      }
    }
  }
  uVar37 = (ulong)(lVar52 - (long)piVar28 >> 3) / 3;
  if ((*(long *)(param_1 + 0xb0) != *(long *)(param_1 + 0xb8)) &&
     (uVar37 != *(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 3)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar44 = 10;
      goto LAB_0010fa74;
    }
    goto LAB_00110e74;
  }
  local_140 = (undefined4 *)0x0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar35;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = lVar49 - lVar51 >> 3;
  uVar53 = SUB164(auVar6 / auVar5,0);
  uVar35 = SUB168(auVar6 / auVar5,0) & 0xffffffff;
  local_c8 = uVar35;
  if (uVar53 != 0) {
    local_c8 = uVar35 * 4;
    local_140 = (undefined4 *)operator_new(local_c8);
    __s = local_140 + 1;
    *local_140 = 0;
    if (uVar35 == 1) {
      local_c8 = 4;
      puVar23 = __s;
    }
    else {
      puVar23 = local_140 + uVar35;
      if (__s != puVar23) {
        memset(__s,0,local_c8 - 4);
      }
    }
    lVar42 = *(long *)(param_1 + 0x40);
    lVar25 = *(long *)(param_1 + 0x38);
    lVar47 = lVar42 - lVar25;
    if (puVar23 != local_140) {
      uVar35 = 0;
      do {
        local_140[uVar35] = (int)uVar35;
        bVar55 = (ulong)((long)puVar23 + (-4 - (long)local_140)) >> 2 != uVar35;
        uVar35 = uVar35 + 1;
      } while (bVar55);
    }
  }
  if (lVar25 != lVar42) {
    uVar35 = 0;
    piVar28 = (int *)(ulong)uVar53;
    lVar49 = *(long *)(param_1 + 0x50);
    do {
      uVar50 = *(ulong *)(lVar25 + uVar35 * 8);
      uVar41 = (uint)*(undefined8 *)(lVar49 + uVar35 * 8);
      uVar20 = (uint)uVar50;
      uVar3 = uVar41;
      if (uVar41 <= uVar20) {
        uVar3 = uVar20;
      }
      if (uVar53 <= uVar3) {
        manifold::Manifold::Impl::MarkFailure(this,7);
        goto LAB_0010fa0c;
      }
      uVar35 = uVar35 + 1;
      local_140[uVar50 & 0xffffffff] = uVar41;
    } while (uVar35 < (ulong)(lVar47 >> 3));
  }
  uVar35 = *(ulong *)param_1;
  lVar51 = *(long *)(param_1 + 0x10);
  lVar52 = *(long *)(param_1 + 8);
  lVar49 = uVar35 - 3;
  *(int *)(this + 0xc4) = (int)lVar49;
  Vec<double>::resize((Vec<double> *)(this + 200),((ulong)(lVar51 - lVar52 >> 3) / uVar35) * lVar49,
                      0.0);
  uVar50 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3;
  uVar35 = *(ulong *)param_1;
  piVar54 = *(int **)(this + 0x50);
  piVar24 = (int *)(uVar50 / uVar35);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0xe0);
  __dest = (int *)((long)piVar24 * 2);
  piVar43 = piVar54;
  if (*(int **)(this + 0x58) < piVar24) {
    piVar28 = (int *)malloc((long)piVar24 * 0x18);
    puVar38 = *(undefined8 **)(this + 0x48);
    if (piVar54 != (int *)0x0) {
      sVar32 = (long)piVar54 * 0x18;
      if ((long)sVar32 < 0x19) {
        if (sVar32 == 0x18) {
          uVar44 = puVar38[1];
          *(undefined8 *)piVar28 = *puVar38;
          *(undefined8 *)(piVar28 + 2) = uVar44;
          *(undefined8 *)(piVar28 + 4) = puVar38[2];
          goto LAB_0011097f;
        }
        if (puVar38 != (undefined8 *)0x0) goto LAB_0011097f;
      }
      else {
        piVar28 = (int *)memmove(piVar28,puVar38,sVar32);
LAB_0011097f:
        free(puVar38);
        piVar43 = *(int **)(this + 0x50);
      }
      *(int **)(this + 0x48) = piVar28;
      *(int **)(this + 0x58) = piVar24;
      goto LAB_0010fb35;
    }
    if (puVar38 != (undefined8 *)0x0) goto LAB_0011097f;
    *(int **)(this + 0x58) = piVar24;
    *(int **)(this + 0x48) = piVar28;
    piVar43 = (int *)0x0;
LAB_00110301:
    lVar51 = *(long *)(this + 0x48);
    for (pauVar29 = (undefined1 (*) [16])(lVar51 + (long)piVar43 * 0x18);
        (undefined1 (*) [16])(lVar51 + (long)piVar24 * 0x18) != pauVar29;
        pauVar29 = (undefined1 (*) [16])(pauVar29[1] + 8)) {
      *(undefined8 *)pauVar29[1] = 0;
      *pauVar29 = (undefined1  [16])0x0;
    }
  }
  else {
LAB_0010fb35:
    if (piVar43 < piVar24) goto LAB_00110301;
  }
  *(int **)(this + 0x50) = piVar24;
  if (__dest < piVar54) {
    if (uVar50 < uVar35) {
      puVar38 = *(undefined8 **)(this + 0x48);
      puVar40 = (undefined8 *)0x0;
LAB_00110578:
      if (puVar38 != (undefined8 *)0x0) goto LAB_00110a1d;
    }
    else {
      sVar32 = (long)piVar24 * 0x18;
      puVar40 = (undefined8 *)malloc(sVar32);
      puVar38 = *(undefined8 **)(this + 0x48);
      if ((long)sVar32 < 0x19) {
        if (sVar32 != 0x18) goto LAB_00110578;
        uVar44 = puVar38[1];
        *puVar40 = *puVar38;
        puVar40[1] = uVar44;
        puVar40[2] = puVar38[2];
      }
      else {
        memmove(puVar40,puVar38,sVar32);
      }
LAB_00110a1d:
      free(puVar38);
      piVar24 = *(int **)(this + 0x50);
    }
    *(undefined8 **)(this + 0x48) = puVar40;
    *(int **)(this + 0x58) = piVar24;
  }
  uVar44 = _LC27;
  piVar54 = *(int **)(param_1 + 8);
  piVar24 = *(int **)param_1;
  piVar43 = (int *)(*(long *)(param_1 + 0x10) - (long)piVar54 >> 3);
  uVar35 = (ulong)piVar43 / (ulong)piVar24;
  if (piVar24 <= piVar43) {
    puVar38 = *(undefined8 **)(this + 0x48);
    lVar51 = 0;
    lVar52 = 3;
    uVar50 = 0;
    piVar28 = (int *)((long)&uStack_50 + 4);
    piVar43 = piVar54;
    do {
      uStack_50 = CONCAT44(uStack_50._4_4_,2);
      local_58 = uVar44;
      piVar26 = (int *)&local_58;
      do {
        iVar21 = *piVar26;
        __dest = (int *)(long)iVar21;
        puVar40 = puVar38;
        if ((iVar21 != 0) && (puVar40 = puVar38 + 1, iVar21 != 1)) {
          puVar40 = puVar38 + 2;
        }
        piVar26 = piVar26 + 1;
        *puVar40 = *(undefined8 *)(piVar54 + ((long)__dest + lVar52 + -3) * 2);
      } while (piVar28 != piVar26);
      if (lVar49 != 0) {
        lVar42 = *(long *)(this + 200);
        lVar25 = 0;
        do {
          *(undefined8 *)(lVar42 + lVar51 + lVar25 * 8) = *(undefined8 *)(piVar43 + lVar25 * 2 + 6);
          lVar25 = lVar25 + 1;
        } while (lVar49 != lVar25);
      }
      uVar50 = uVar50 + 1;
      puVar38 = puVar38 + 3;
      lVar52 = lVar52 + (long)piVar24;
      piVar43 = piVar43 + (long)piVar24 * 2;
      lVar51 = lVar51 + lVar49 * 8;
    } while (uVar50 < uVar35);
  }
  piVar54 = *(int **)(this + 0xb0);
  piVar24 = (int *)((ulong)(*(long *)(param_1 + 0xd0) - *(long *)(param_1 + 200) >> 3) >> 2);
  piVar26 = (int *)((long)piVar24 * 2);
  piVar39 = piVar54;
  if (*(int **)(this + 0xb8) < piVar24) {
    __dest = (int *)malloc((long)piVar24 << 5);
    piVar43 = *(int **)(this + 0xa8);
    if (piVar54 == (int *)0x0) {
      if (piVar43 == (int *)0x0) {
        *(int **)(this + 0xa8) = __dest;
        piVar39 = (int *)0x0;
        *(int **)(this + 0xb8) = piVar24;
        goto LAB_00110353;
      }
LAB_001108d7:
      free(piVar43);
      piVar39 = *(int **)(this + 0xb0);
    }
    else {
      sVar32 = (long)piVar54 * 0x20;
      if (0x20 < (long)sVar32) {
        memmove(__dest,piVar43,sVar32);
        goto LAB_001108d7;
      }
      if (sVar32 == 0x20) {
        uVar44 = *(undefined8 *)(piVar43 + 2);
        *(undefined8 *)__dest = *(undefined8 *)piVar43;
        *(undefined8 *)(__dest + 2) = uVar44;
        uVar44 = *(undefined8 *)(piVar43 + 6);
        *(undefined8 *)(__dest + 4) = *(undefined8 *)(piVar43 + 4);
        *(undefined8 *)(__dest + 6) = uVar44;
        goto LAB_001108d7;
      }
      if (piVar43 != (int *)0x0) goto LAB_001108d7;
    }
    *(int **)(this + 0xa8) = __dest;
    *(int **)(this + 0xb8) = piVar24;
    if (piVar39 < piVar24) goto LAB_00110353;
LAB_0011091b:
    *(int **)(this + 0xb0) = piVar24;
    if (piVar54 <= piVar26) goto LAB_0010fd07;
LAB_001103ab:
    sVar32 = (long)piVar24 << 5;
    puVar38 = (undefined8 *)malloc(sVar32);
    piVar54 = *(int **)(this + 0xa8);
    if ((long)sVar32 < 0x21) {
      if (sVar32 != 0x20) goto LAB_0010fce0;
      uVar44 = *(undefined8 *)(piVar54 + 2);
      *puVar38 = *(undefined8 *)piVar54;
      puVar38[1] = uVar44;
      uVar44 = *(undefined8 *)(piVar54 + 6);
      puVar38[2] = *(undefined8 *)(piVar54 + 4);
      puVar38[3] = uVar44;
    }
    else {
      piVar43 = piVar54;
      memmove(puVar38,piVar54,sVar32);
    }
LAB_001103f3:
    free(piVar54);
LAB_0010fce9:
    *(undefined8 **)(this + 0xa8) = puVar38;
    piVar24 = *(int **)(this + 0xb0);
    *(int **)(this + 0xb8) = piVar24;
LAB_0010fcfe:
    if (piVar24 != (int *)0x0) goto LAB_0010fd07;
  }
  else {
    if (piVar24 <= piVar54) {
      *(int **)(this + 0xb0) = piVar24;
      if (piVar26 < piVar54) {
        if (piVar24 != (int *)0x0) goto LAB_001103ab;
        piVar54 = *(int **)(this + 0xa8);
        puVar38 = (undefined8 *)0x0;
LAB_0010fce0:
        if (piVar54 != (int *)0x0) goto LAB_001103f3;
        goto LAB_0010fce9;
      }
      goto LAB_0010fcfe;
    }
    __dest = *(int **)(this + 0xa8);
LAB_00110353:
    pauVar29 = (undefined1 (*) [16])(__dest + (long)piVar39 * 8);
    if ((undefined1 (*) [16])(__dest + (long)piVar24 * 8) == pauVar29) goto LAB_0011091b;
    piVar39 = (int *)0x0;
    piVar43 = (int *)(((ulong)((long)(__dest + (long)piVar24 * 8) + (-0x20 - (long)pauVar29)) >> 5)
                     + 1);
    do {
      piVar39 = (int *)((long)piVar39 + 1);
      *pauVar29 = (undefined1  [16])0x0;
      pauVar29[1] = (undefined1  [16])0x0;
      pauVar29 = pauVar29 + 2;
    } while (piVar39 < piVar43);
    *(int **)(this + 0xb0) = piVar24;
    if (piVar26 < piVar54) goto LAB_001103ab;
LAB_0010fd07:
    uStack_50 = _UNK_001114f8;
    local_58 = _LC27;
    lVar52 = 0;
    piVar43 = *(int **)(this + 0xa8);
    lVar51 = *(long *)(param_1 + 200);
    piVar28 = piVar43 + (long)piVar24 * 8;
    do {
      piVar54 = piVar43 + 6;
      piVar24 = (int *)&local_58;
      do {
        iVar21 = *piVar24;
        piVar26 = piVar43;
        if (((iVar21 != 0) && (piVar26 = piVar43 + 2, iVar21 != 1)) &&
           (piVar26 = piVar54, iVar21 == 2)) {
          piVar26 = piVar43 + 4;
        }
        piVar24 = piVar24 + 1;
        *(undefined8 *)piVar26 = *(undefined8 *)(lVar51 + (iVar21 + lVar52) * 8);
      } while (local_48 != piVar24);
      piVar43 = piVar43 + 8;
      lVar52 = lVar52 + 4;
    } while (piVar43 != piVar28);
  }
  if (*(long *)(param_1 + 0x88) == *(long *)(param_1 + 0x80)) {
    local_b0 = 0;
    local_158 = (undefined8 *)0x0;
  }
  else {
    uVar35 = *(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x68);
    if (uVar35 == 0) {
      piVar54 = (int *)0x0;
      piVar24 = (int *)0x0;
      piVar26 = (int *)0x0;
LAB_0010fe34:
      piVar39 = (int *)((long)piVar26 + (long)piVar54);
      uVar50 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20);
      piVar43 = (int *)((long)uVar50 >> 3);
      if (piVar26 == piVar39) {
        if (uVar35 < 0x10) {
          piVar26 = (int *)operator_new(0x10);
          piVar26[0] = 0;
          piVar26[1] = 0;
          *(int **)(piVar26 + 2) = piVar43;
          if (piVar39 != (int *)0x0) {
            operator_delete(piVar39,uVar35);
          }
          uVar35 = 0x10;
          uVar50 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20);
          piVar43 = (int *)((long)uVar50 >> 3);
        }
        else {
          piVar26[0] = 0;
          piVar26[1] = 0;
          *(int **)(piVar26 + 2) = piVar43;
        }
      }
      else {
        pMVar46 = (MeshGLP *)(*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 2);
        if (pMVar46 == (MeshGLP *)((long)piVar54 >> 3)) {
          piVar28 = piVar26;
          __dest = piVar54;
          if (piVar39 == piVar24) goto LAB_00110c0c;
          *(int **)piVar39 = piVar43;
        }
      }
    }
    else {
      if (uVar35 < 0x7ffffffffffffff9) {
        piVar26 = (int *)operator_new(uVar35);
        piVar24 = (int *)((long)piVar26 + uVar35);
        puVar38 = *(undefined8 **)(param_1 + 0x68);
        piVar54 = (int *)(*(long *)(param_1 + 0x70) - (long)puVar38);
        if ((long)piVar54 < 9) {
          if (piVar54 == (int *)0x8) {
            *(undefined8 *)piVar26 = *puVar38;
          }
        }
        else {
          piVar26 = (int *)memmove(piVar26,puVar38,(size_t)piVar54);
        }
        goto LAB_0010fe34;
      }
      pMVar46 = param_1;
      std::__throw_bad_array_new_length();
LAB_00110c0c:
      if (pMVar46 == (MeshGLP *)0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::_M_realloc_insert");
      }
      pMVar33 = (MeshGLP *)((long)pMVar46 * 2);
      if (pMVar33 < pMVar46) {
        pMVar33 = (MeshGLP *)0xfffffffffffffff;
LAB_00110e0b:
        uVar31 = (long)pMVar33 * 8;
        piVar26 = (int *)operator_new(uVar31);
      }
      else {
        piVar26 = (int *)0x0;
        uVar31 = 0;
        if (pMVar33 != (MeshGLP *)0x0) {
          if ((MeshGLP *)0xfffffffffffffff < pMVar33) {
            pMVar33 = (MeshGLP *)0xfffffffffffffff;
          }
          goto LAB_00110e0b;
        }
      }
      *(int **)((long)piVar26 + (long)piVar54) = piVar43;
      if ((long)__dest < 1) {
        if (piVar28 != (int *)0x0) goto LAB_00110dcd;
      }
      else {
        memcpy(piVar26,piVar28,(size_t)piVar54);
LAB_00110dcd:
        operator_delete(piVar28,uVar35);
      }
      uVar50 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20);
      piVar43 = (int *)((long)uVar50 >> 3);
      uVar35 = uVar31;
    }
    local_158 = (undefined8 *)0x0;
    local_b0 = (ulong)piVar43 / 3;
    if (0x10 < uVar50) {
      sVar32 = local_b0 * 0x10;
      local_158 = (undefined8 *)malloc(sVar32);
      if (sVar32 != 0) {
        uVar50 = 0;
        do {
          uVar31 = uVar50 + 1;
          *(undefined1 (*) [16])(local_158 + uVar50 * 2) = (undefined1  [16])0x0;
          uVar50 = uVar31;
        } while (uVar31 < (sVar32 - 0x10 >> 4) + 1);
      }
    }
    iVar21 = manifold::Manifold::Impl::ReserveIDs
                       ((uint)(*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 2));
    lVar51 = *(long *)(param_1 + 0x80);
    uVar50 = 0;
    if (*(long *)(param_1 + 0x88) == lVar51) {
      if (piVar26 == (int *)0x0) goto LAB_0011013a;
    }
    else {
      do {
        iVar2 = *(int *)(lVar51 + uVar50 * 4);
        uVar31 = *(ulong *)(piVar26 + uVar50 * 2 + 2);
        uVar36 = *(ulong *)(piVar26 + uVar50 * 2) / 3;
        if (uVar36 < uVar31 / 3) {
          lVar52 = *(long *)(param_1 + 0xb8);
          lVar42 = *(long *)(param_1 + 0xb0);
          piVar28 = (int *)(local_158 + uVar36 * 2);
          do {
            *piVar28 = iVar21;
            iVar34 = (int)uVar36;
            piVar28[1] = iVar2;
            iVar45 = iVar34;
            if (lVar52 != lVar42) {
              iVar45 = *(int *)(lVar42 + uVar36 * 8);
            }
            uVar36 = uVar36 + 1;
            piVar28[2] = iVar45;
            piVar28[3] = iVar34;
            piVar28 = piVar28 + 4;
          } while (uVar36 != uVar31 / 3);
        }
        pIVar4 = *(Impl **)(this + 0xf0);
        local_84 = iVar21;
        if (*(long *)(param_1 + 0xa0) == *(long *)(param_1 + 0x98)) {
          pIVar27 = pIVar1;
          if (pIVar4 == (Impl *)0x0) {
LAB_0011046e:
            local_78 = &local_84;
            pIVar27 = (Impl *)std::
                              _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
                              ::
                              _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
                                        (this + 0xe0,pIVar27,&local_78);
            lVar51 = *(long *)(param_1 + 0x80);
          }
          else {
            do {
              while( true ) {
                pIVar30 = pIVar4;
                if (*(int *)(pIVar30 + 0x20) < iVar21) break;
                pIVar4 = *(Impl **)(pIVar30 + 0x10);
                pIVar27 = pIVar30;
                if (*(Impl **)(pIVar30 + 0x10) == (Impl *)0x0) goto LAB_00110461;
              }
              pIVar4 = *(Impl **)(pIVar30 + 0x18);
            } while (*(Impl **)(pIVar30 + 0x18) != (Impl *)0x0);
LAB_00110461:
            if ((pIVar1 == pIVar27) || (iVar21 < *(int *)(pIVar27 + 0x20))) goto LAB_0011046e;
          }
          uVar44 = _LC6;
          *(int *)(pIVar27 + 0x28) = iVar2;
          pIVar27[0x90] = (Impl)0x0;
          *(undefined8 *)(pIVar27 + 0x30) = uVar44;
          *(undefined8 *)(pIVar27 + 0x38) = 0;
          *(undefined1 (*) [16])(pIVar27 + 0x40) = (undefined1  [16])0x0;
          *(undefined8 *)(pIVar27 + 0x50) = uVar44;
          *(undefined8 *)(pIVar27 + 0x58) = 0;
          *(undefined1 (*) [16])(pIVar27 + 0x60) = (undefined1  [16])0x0;
          *(undefined8 *)(pIVar27 + 0x70) = uVar44;
          *(undefined8 *)(pIVar27 + 0x78) = 0;
          *(undefined1 (*) [16])(pIVar27 + 0x80) = (undefined1  [16])0x0;
        }
        else {
          puVar38 = (undefined8 *)(*(long *)(param_1 + 0x98) + uVar50 * 0x60);
          uVar44 = *puVar38;
          uVar7 = puVar38[1];
          uVar8 = puVar38[2];
          uVar9 = puVar38[3];
          uVar10 = puVar38[4];
          uVar11 = puVar38[5];
          uVar12 = puVar38[6];
          uVar13 = puVar38[7];
          uVar14 = puVar38[8];
          uVar15 = puVar38[9];
          uVar16 = puVar38[10];
          uVar17 = puVar38[0xb];
          pIVar27 = pIVar1;
          if (pIVar4 == (Impl *)0x0) {
LAB_00110042:
            local_78 = &local_84;
            pIVar27 = (Impl *)std::
                              _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
                              ::
                              _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
                                        (this + 0xe0,pIVar27,&local_78);
            lVar51 = *(long *)(param_1 + 0x80);
          }
          else {
            do {
              while( true ) {
                pIVar30 = pIVar4;
                if (*(int *)(pIVar30 + 0x20) < iVar21) break;
                pIVar4 = *(Impl **)(pIVar30 + 0x10);
                pIVar27 = pIVar30;
                if (*(Impl **)(pIVar30 + 0x10) == (Impl *)0x0) goto LAB_00110031;
              }
              pIVar4 = *(Impl **)(pIVar30 + 0x18);
            } while (*(Impl **)(pIVar30 + 0x18) != (Impl *)0x0);
LAB_00110031:
            if ((pIVar1 == pIVar27) || (iVar21 < *(int *)(pIVar27 + 0x20))) goto LAB_00110042;
          }
          *(int *)(pIVar27 + 0x28) = iVar2;
          pIVar27[0x90] = (Impl)0x0;
          *(undefined8 *)(pIVar27 + 0x30) = uVar44;
          *(undefined8 *)(pIVar27 + 0x38) = uVar7;
          *(undefined8 *)(pIVar27 + 0x40) = uVar8;
          *(undefined8 *)(pIVar27 + 0x48) = uVar9;
          *(undefined8 *)(pIVar27 + 0x50) = uVar10;
          *(undefined8 *)(pIVar27 + 0x58) = uVar11;
          *(undefined8 *)(pIVar27 + 0x60) = uVar12;
          *(undefined8 *)(pIVar27 + 0x68) = uVar13;
          *(undefined8 *)(pIVar27 + 0x70) = uVar14;
          *(undefined8 *)(pIVar27 + 0x78) = uVar15;
          *(undefined8 *)(pIVar27 + 0x80) = uVar16;
          *(undefined8 *)(pIVar27 + 0x88) = uVar17;
        }
        uVar50 = uVar50 + 1;
        iVar21 = iVar21 + 1;
      } while (uVar50 < (ulong)(*(long *)(param_1 + 0x88) - lVar51 >> 2));
    }
    operator_delete(piVar26,uVar35);
  }
LAB_0011013a:
  local_78 = (int *)0x0;
  local_70 = (undefined1  [16])0x0;
  uVar35 = uVar37 & 0xffffffff;
  if ((int)uVar37 != 0) {
    lVar51 = 0;
    local_78 = (int *)malloc(uVar35 * 0xc);
    uVar44 = _LC27;
    local_70._8_8_ = uVar35;
    puVar38 = local_158;
    do {
      local_90 = 0;
      lVar52 = *(long *)(param_1 + 0x20);
      local_88 = 0;
      uStack_50 = CONCAT44(uStack_50._4_4_,2);
      piVar28 = (int *)&local_58;
      local_58 = uVar44;
      do {
        iVar21 = *piVar28;
        uVar37 = *(ulong *)(lVar52 + (iVar21 + lVar51) * 8);
        if (uVar53 <= (uint)uVar37) {
          manifold::Manifold::Impl::MarkFailure(this,3);
          goto joined_r0x00110748;
        }
        piVar54 = (int *)&local_90;
        if ((iVar21 != 0) && (piVar54 = (int *)((long)&local_90 + 4), iVar21 != 1)) {
          piVar54 = &local_88;
        }
        piVar28 = piVar28 + 1;
        *piVar54 = local_140[uVar37 & 0xffffffff];
      } while ((int *)((long)&uStack_50 + 4) != piVar28);
      if ((((int)local_90 != local_90._4_4_) && ((int)local_90 != local_88)) &&
         (local_90._4_4_ != local_88)) {
        Vec<linalg::vec<int,3>>::push_back((vec *)&local_78,SUB81(&local_90,0));
        if (local_b0 != 0) {
          uVar37 = *(ulong *)(this + 0x118);
          uVar50 = *(ulong *)(this + 0x120);
          if (uVar37 < uVar50) {
            uVar7 = *puVar38;
            uVar8 = puVar38[1];
            puVar40 = (undefined8 *)(uVar37 * 0x10 + *(long *)(this + 0x110));
            *(ulong *)(this + 0x118) = uVar37 + 1;
            *puVar40 = uVar7;
            puVar40[1] = uVar8;
          }
          else {
            uVar7 = *puVar38;
            uVar8 = puVar38[1];
            if (uVar50 == 0) {
              local_138 = 0x80;
              sVar32 = 0x800;
LAB_00110b32:
              puVar40 = (undefined8 *)malloc(sVar32);
              __src = *(undefined8 **)(this + 0x110);
              if (uVar37 == 0) {
LAB_00110b9f:
                if (__src != (undefined8 *)0x0) goto LAB_00110cdf;
              }
              else {
                sVar32 = uVar37 * 0x10;
                if ((long)sVar32 < 0x11) {
                  if (sVar32 != 0x10) goto LAB_00110b9f;
                  uVar9 = __src[1];
                  *puVar40 = *__src;
                  puVar40[1] = uVar9;
                }
                else {
                  puVar40 = (undefined8 *)memmove(puVar40,__src,sVar32);
                }
LAB_00110cdf:
                free(__src);
                uVar37 = *(ulong *)(this + 0x118);
              }
              *(undefined8 **)(this + 0x110) = puVar40;
              *(ulong *)(this + 0x120) = local_138;
            }
            else {
              local_138 = uVar50 * 2;
              if (uVar50 < local_138) {
                sVar32 = uVar50 << 5;
                goto LAB_00110b32;
              }
              puVar40 = *(undefined8 **)(this + 0x110);
            }
            *(ulong *)(this + 0x118) = uVar37 + 1;
            puVar40[uVar37 * 2] = uVar7;
            (puVar40 + uVar37 * 2)[1] = uVar8;
          }
        }
        if (lVar49 != 0) {
          lVar52 = *(long *)(param_1 + 0x20);
          local_7c = (undefined4)*(undefined8 *)(lVar52 + 0x10 + lVar51 * 8);
          local_84 = (int)*(undefined8 *)(lVar52 + lVar51 * 8);
          local_80 = (undefined4)*(undefined8 *)(lVar52 + 8 + lVar51 * 8);
          Vec<linalg::vec<int,3>>::push_back((vec *)(this + 0x128),SUB81(&local_84,0));
        }
      }
      puVar38 = puVar38 + 2;
      lVar51 = lVar51 + 3;
    } while (puVar38 != local_158 + uVar35 * 2);
  }
  manifold::Manifold::Impl::CreateHalfedges((Vec *)this);
  cVar19 = manifold::Manifold::Impl::IsManifold();
  if (cVar19 == '\0') {
    manifold::Manifold::Impl::MarkFailure(this,2);
  }
  else {
    manifold::Manifold::Impl::CalculateBBox();
    manifold::Manifold::Impl::SetEpsilon(_LC23,SUB81(this,0));
    manifold::Manifold::Impl::SplitPinchedVerts();
    manifold::Manifold::Impl::CalculateNormals();
    if (*(long *)(param_1 + 0x88) == *(long *)(param_1 + 0x80)) {
      manifold::Manifold::Impl::InitializeOriginal(SUB81(this,0));
    }
    manifold::Manifold::Impl::CreateFaces();
    manifold::Manifold::Impl::SimplifyTopology();
    manifold::Manifold::Impl::RemoveUnreferencedVerts();
    manifold::Manifold::Impl::Finish();
    cVar19 = manifold::Manifold::Impl::IsFinite();
    if (cVar19 == '\0') {
      manifold::Manifold::Impl::MarkFailure(this,1);
    }
    else {
      *(undefined4 *)(this + 0xc0) = 0xffffffff;
    }
  }
joined_r0x00110748:
  if (local_78 != (int *)0x0) {
    free(local_78);
  }
  if (local_158 != (undefined8 *)0x0) {
    free(local_158);
  }
LAB_0010fa0c:
  if (local_140 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator_delete(local_140,local_c8);
    return;
  }
LAB_00110e74:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* manifold::Manifold::Impl::Impl<double, unsigned long>(manifold::MeshGLP<double, unsigned long>
   const&) */

void __thiscall manifold::Manifold::Impl::Impl<double,unsigned_long>(Impl *this,MeshGLP *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* manifold::Manifold::Impl::Impl<float, unsigned int>(manifold::MeshGLP<float, unsigned int>
   const&) */

void __thiscall manifold::Manifold::Impl::Impl<float,unsigned_int>(Impl *this,MeshGLP *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::__shared_ptr<manifold::CsgLeafNode,
   (__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<void>,
   std::unique_ptr<manifold::Manifold::Impl, std::default_delete<manifold::Manifold::Impl> >
   >(std::_Sp_alloc_shared_tag<std::allocator<void> >, std::unique_ptr<manifold::Manifold::Impl,
   std::default_delete<manifold::Manifold::Impl> >&&) */

void std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
     __shared_ptr<std::allocator<void>,std::unique_ptr<manifold::Manifold::Impl,std::default_delete<manifold::Manifold::Impl>>>
               (void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::__shared_ptr<manifold::CsgLeafNode,
   (__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<void>,
   std::shared_ptr<manifold::Manifold::Impl>&>(std::_Sp_alloc_shared_tag<std::allocator<void> >,
   std::shared_ptr<manifold::Manifold::Impl>&) */

void std::__shared_ptr<manifold::CsgLeafNode,(__gnu_cxx::_Lock_policy)2>::
     __shared_ptr<std::allocator<void>,std::shared_ptr<manifold::Manifold::Impl>&>(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::shared_ptr<manifold::Manifold::Impl>::shared_ptr<std::allocator<void>,
   manifold::Manifold::Impl const&>(std::_Sp_alloc_shared_tag<std::allocator<void> >,
   manifold::Manifold::Impl const&) */

void std::shared_ptr<manifold::Manifold::Impl>::
     shared_ptr<std::allocator<void>,manifold::Manifold::Impl_const&>(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* manifold::Manifold::Impl::Impl(manifold::Manifold::Impl&&) */

void __thiscall manifold::Manifold::Impl::Impl(Impl *this,Impl *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Sp_counted_ptr_inplace<manifold::CsgLeafNode, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Sp_counted_ptr_inplace<manifold::Manifold::Impl, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::
_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Sp_counted_ptr_inplace<manifold::CsgOpNode, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Sp_counted_deleter<manifold::Manifold::Impl*,
   std::default_delete<manifold::Manifold::Impl>, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_deleter() */

void __thiscall
std::
_Sp_counted_deleter<manifold::Manifold::Impl*,std::default_delete<manifold::Manifold::Impl>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::~_Sp_counted_deleter
          (_Sp_counted_deleter<manifold::Manifold::Impl*,std::default_delete<manifold::Manifold::Impl>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



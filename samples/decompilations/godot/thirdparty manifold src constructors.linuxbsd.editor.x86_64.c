
/* std::_Function_handler<int (linalg::vec<double, 3>, linalg::vec<double, 4>, linalg::vec<double,
   4>), manifold::Manifold::Sphere(double, int)::{lambda(linalg::vec<double, 3>, linalg::vec<double,
   4>, linalg::vec<double, 4>)#1}>::_M_invoke(std::_Any_data const&, linalg::vec<double, 3>&&,
   linalg::vec<double, 4>&&, linalg::vec<double, 4>&&) */

int std::
    _Function_handler<int(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>),manifold::Manifold::Sphere(double,int)::{lambda(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>)#1}>
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
    if (iVar5 <= iVar6) goto LAB_00100048;
  }
  if (*(_Rb_tree_node_base **)(this + 0x18) == p_Var2) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = p_Var2;
    return auVar1 << 0x40;
  }
  p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var2);
  iVar5 = *(int *)(p_Var4 + 0x20);
LAB_00100048:
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
   4>), manifold::Manifold::Sphere(double, int)::{lambda(linalg::vec<double, 3>, linalg::vec<double,
   4>, linalg::vec<double, 4>)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8
std::
_Function_handler<int(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>),manifold::Manifold::Sphere(double,int)::{lambda(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>)#1}>
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
  *param_1 = &manifold::Manifold::Sphere(double,int)::
              {lambda(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>)#1}::
              typeinfo;
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
LAB_001001e8:
      auVar8 = _M_get_insert_unique_pos(param_1,(int *)(ulong)uVar2);
      param_2 = auVar8._0_8_;
      bVar6 = param_2 != (_Rb_tree_node_base *)0x0;
      p_Var4 = auVar8._8_8_;
      if (auVar8._8_8_ == (_Rb_tree_node_base *)0x0) {
LAB_00100201:
        operator_delete(p_Var3,0x98);
        return param_2;
      }
    }
    else {
LAB_0010022b:
      bVar6 = false;
    }
joined_r0x001001bc:
    param_2 = p_Var4;
    p_Var4 = param_2;
    if ((p_Var1 == param_2) || (bVar6)) {
LAB_001001c2:
      param_2 = p_Var4;
      bVar6 = true;
      goto LAB_001001c7;
    }
  }
  else {
    if ((int)uVar2 < *(int *)(param_2 + 0x20)) {
      p_Var4 = *(_Rb_tree_node_base **)(param_1 + 0x18);
      if (*(_Rb_tree_node_base **)(param_1 + 0x18) != param_2) {
        p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
        if ((int)uVar2 <= *(int *)(p_Var4 + 0x20)) goto LAB_001001e8;
        if (*(long *)(p_Var4 + 0x18) != 0) {
          bVar6 = true;
          goto LAB_001001c7;
        }
        goto LAB_0010022b;
      }
      goto LAB_001001c2;
    }
    if ((int)uVar2 <= *(int *)(param_2 + 0x20)) goto LAB_00100201;
    if (*(_Rb_tree_node_base **)(param_1 + 0x20) != param_2) {
      p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
      if (*(int *)(p_Var4 + 0x20) <= (int)uVar2) goto LAB_001001e8;
      bVar6 = true;
      if (*(long *)(param_2 + 0x18) != 0) goto joined_r0x001001bc;
    }
  }
  bVar6 = (int)uVar2 < *(int *)(param_2 + 0x20);
LAB_001001c7:
  std::_Rb_tree_insert_and_rebalance(bVar6,p_Var3,param_2,p_Var1);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return p_Var3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::Manifold::Tetrahedron() */

Manifold * __thiscall manifold::Manifold::Tetrahedron(Manifold *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  long in_FS_OFFSET;
  Impl *local_98;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (Impl *)0x0;
  p_Var3 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator_new(0x198);
  local_88 = _LC11;
  local_78 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  *(undefined8 *)(p_Var3 + 8) = _LC8;
  *(undefined ***)p_Var3 = &PTR___Sp_counted_ptr_inplace_0010c268;
  uStack_80 = 0;
  local_68 = local_88;
  uStack_60 = 0;
  local_48 = local_88;
  uStack_40 = 0;
  local_38 = (undefined1  [16])0x0;
  manifold::Manifold::Impl::Impl((Impl *)(p_Var3 + 0x10),0);
  local_98 = (Impl *)(p_Var3 + 0x10);
  local_90 = p_Var3;
  manifold::Manifold::Manifold(this,&local_98);
  p_Var3 = local_90;
  if (local_90 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_90 + 8;
    if (*(long *)(local_90 + 8) == 0x100000001) {
      *(undefined8 *)(local_90 + 8) = 0;
      (**(code **)(*(long *)local_90 + 0x10))(local_90);
      (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar2 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar2 = *(int *)(local_90 + 8);
        *(int *)(local_90 + 8) = iVar2 + -1;
      }
      if (iVar2 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_90);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::Manifold::Sphere(double, int) */

Manifold * __thiscall manifold::Manifold::Sphere(Manifold *this,double param_1,int param_2)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  Impl *pIVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  undefined1 (*pauVar4) [16];
  undefined1 auVar5 [16];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var6;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  int iVar7;
  undefined1 (*pauVar8) [16];
  long in_FS_OFFSET;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  Impl *local_c8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_c0;
  undefined1 local_b8 [16];
  Impl *local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  Impl *local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  int local_68;
  undefined8 local_64;
  undefined4 local_5c;
  code *local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 <= 0.0) {
    manifold::Manifold::Invalid();
  }
  else {
    if (param_2 < 1) {
      iVar7 = Quality::circularSegments_;
      if (Quality::circularSegments_ < 1) {
        dVar9 = fmin((double)(int)(((param_1 + param_1) * __LC6) / Quality::circularEdgeLength_),
                     (double)(int)(_LC12 / Quality::circularAngle_));
        iVar7 = (int)(dVar9 + __LC13) - (int)(dVar9 + __LC13) % 4;
        if (iVar7 < 3) {
          iVar7 = 3;
        }
      }
    }
    else {
      iVar7 = param_2 + 3;
    }
    this_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator_new(0x198);
    p_Var1 = this_00 + 8;
    local_b8 = (undefined1  [16])0x0;
    pIVar2 = (Impl *)(this_00 + 0x10);
    local_c8 = _LC11;
    p_Stack_c0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    local_a8 = _LC11;
    uStack_a0 = 0;
    local_98 = (undefined1  [16])0x0;
    local_88 = _LC11;
    uStack_80 = 0;
    local_78 = (undefined1  [16])0x0;
    *(undefined8 *)(this_00 + 8) = _LC8;
    *(undefined ***)this_00 = &PTR___Sp_counted_ptr_inplace_0010c268;
    manifold::Manifold::Impl::Impl(pIVar2,2);
    local_5c = 0;
    local_64 = 0;
    local_58 = std::
               _Function_handler<int(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>),manifold::Manifold::Sphere(double,int)::{lambda(linalg::vec<double,3>,linalg::vec<double,4>,linalg::vec<double,4>)#1}>
               ::_M_manager;
    uStack_50 = 0x100000;
    local_68 = iVar7 >> 2;
    manifold::Manifold::Impl::Subdivide(&local_c8,pIVar2,&local_68,0);
    if (local_c8 != (Impl *)0x0) {
      free(local_c8);
    }
    if (local_58 != (code *)0x0) {
      (*local_58)(&local_68,&local_68,3);
    }
    pauVar8 = *(undefined1 (**) [16])(this_00 + 0x58);
    pauVar4 = (undefined1 (*) [16])((long)pauVar8 + *(long *)(this_00 + 0x60) * 0x18);
    for (; pauVar8 != pauVar4; pauVar8 = (undefined1 (*) [16])(pauVar8[1] + 8)) {
      dVar9 = cos(((double)_LC11 - *(double *)*pauVar8) * _LC15);
      dVar10 = cos(_LC15 * ((double)_LC11 - *(double *)(*pauVar8 + 8)));
      dVar11 = cos(((double)_LC11 - *(double *)pauVar8[1]) * _LC15);
      auVar5._8_8_ = dVar10;
      auVar5._0_8_ = dVar9;
      dVar9 = SQRT(dVar9 * dVar9 + 0.0 + dVar10 * dVar10 + dVar11 * dVar11);
      auVar12._8_8_ = dVar9;
      auVar12._0_8_ = dVar9;
      auVar12 = divpd(auVar5,auVar12);
      *(double *)pauVar8[1] = (dVar11 / dVar9) * param_1;
      dVar9 = param_1 * auVar12._0_8_;
      *(double *)*pauVar8 = dVar9;
      *(double *)(*pauVar8 + 8) = param_1 * auVar12._8_8_;
      if (NAN(dVar9)) {
        *(undefined8 *)pauVar8[1] = 0;
        *pauVar8 = (undefined1  [16])0x0;
      }
    }
    manifold::Manifold::Impl::Finish();
    manifold::Manifold::Impl::InitializeOriginal(SUB81(pIVar2,0));
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    }
    local_c8 = pIVar2;
    p_Stack_c0 = this_00;
    manifold::Manifold::Manifold(this,&local_c8);
    p_Var6 = p_Stack_c0;
    if (p_Stack_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var3 = p_Stack_c0 + 8;
      if (*(long *)(p_Stack_c0 + 8) == 0x100000001) {
        *(undefined8 *)(p_Stack_c0 + 8) = 0;
        (**(code **)(*(long *)p_Stack_c0 + 0x10))(p_Stack_c0);
        (**(code **)(*(long *)p_Var6 + 0x18))(p_Var6);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar7 = *(int *)p_Var3;
          *(int *)p_Var3 = *(int *)p_Var3 + -1;
          UNLOCK();
        }
        else {
          iVar7 = *(int *)(p_Stack_c0 + 8);
          *(int *)(p_Stack_c0 + 8) = iVar7 + -1;
        }
        if (iVar7 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_c0);
        }
      }
    }
    if (*(long *)(this_00 + 8) == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar7 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar7 = *(int *)(this_00 + 8);
        *(int *)(this_00 + 8) = iVar7 + -1;
      }
      if (iVar7 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Cube(linalg::vec<double, 3>, bool) */

Manifold * manifold::Manifold::Cube(Manifold *param_1,char param_2)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  long in_FS_OFFSET;
  double in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  Impl *local_98;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_90;
  double local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((in_stack_00000008 < 0.0) || (in_stack_00000010 < 0.0)) || (in_stack_00000018 < 0.0)) ||
     (SQRT(in_stack_00000008 * in_stack_00000008 + 0.0 + in_stack_00000010 * in_stack_00000010 +
           in_stack_00000018 * in_stack_00000018) == 0.0)) {
    manifold::Manifold::Invalid();
  }
  else {
    if (param_2 == '\0') {
      dStack_30 = 0.0;
      local_38 = 0.0;
      dStack_40 = local_38;
    }
    else {
      dStack_40 = (double)((ulong)in_stack_00000008 ^ _LC0) * _LC16;
      local_38 = (double)((ulong)in_stack_00000010 ^ _LC0) * _LC16;
      dStack_30 = (double)(_LC0 ^ (ulong)in_stack_00000018) * _LC16;
    }
    local_88 = in_stack_00000008;
    local_68 = in_stack_00000010;
    local_48 = in_stack_00000018;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_98 = (Impl *)0x0;
    p_Var3 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator_new(0x198);
    *(undefined8 *)(p_Var3 + 8) = _LC8;
    *(undefined ***)p_Var3 = &PTR___Sp_counted_ptr_inplace_0010c268;
    manifold::Manifold::Impl::Impl((Impl *)(p_Var3 + 0x10),1);
    local_98 = (Impl *)(p_Var3 + 0x10);
    local_90 = p_Var3;
    manifold::Manifold::Manifold(param_1,&local_98);
    p_Var3 = local_90;
    if (local_90 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = local_90 + 8;
      if (*(long *)(local_90 + 8) == 0x100000001) {
        *(undefined8 *)(local_90 + 8) = 0;
        (**(code **)(*(long *)local_90 + 0x10))(local_90);
        (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar2 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar2 = *(int *)(local_90 + 8);
          *(int *)(local_90 + 8) = iVar2 + -1;
        }
        if (iVar2 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_90);
        }
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::Manifold::Extrude(std::vector<std::vector<linalg::vec<double, 2>,
   std::allocator<linalg::vec<double, 2> > >, std::allocator<std::vector<linalg::vec<double, 2>,
   std::allocator<linalg::vec<double, 2> > > > > const&, double, int, double, linalg::vec<double,
   2>) */

Manifold *
manifold::Manifold::Extrude
          (double param_2,double param_4,double param_3,
          _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *param_4_00,Manifold *param_1,
          undefined1 (*param_6) [16],uint param_7)

{
  Vec *pVVar1;
  double *pdVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long *plVar9;
  undefined8 *__src;
  void *pvVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined8 *puVar14;
  int iVar15;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var22;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var23;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var24;
  long lVar25;
  ulong uVar26;
  int iVar27;
  undefined1 (*pauVar28) [16];
  ulong uVar29;
  size_t sVar30;
  long *plVar31;
  int iVar32;
  ulong uVar33;
  undefined8 *puVar34;
  uint uVar35;
  int iVar36;
  long lVar37;
  ulong uVar38;
  long in_FS_OFFSET;
  double dVar39;
  double dVar40;
  double dVar41;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_1d8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1b8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_1a8;
  undefined8 *puStack_1a0;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_188;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_178;
  vector *local_108;
  int local_100;
  uint local_fc;
  double local_f8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_f0;
  undefined1 (*local_e0) [16];
  int local_d4;
  double local_d0;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_c8;
  undefined8 *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  undefined1 local_98 [16];
  undefined1 (*local_88) [16];
  undefined1 local_78 [16];
  undefined8 *local_68;
  undefined8 *local_58;
  undefined8 *puStack_50;
  int local_48;
  undefined4 uStack_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)*param_6 == *(long *)(*param_6 + 8)) || (param_2 <= 0.0)) {
    manifold::Manifold::Invalid();
  }
  else {
    local_f8 = param_3;
    if (param_3 < 0.0) {
      local_f8 = 0.0;
    }
    bVar13 = param_3 <= 0.0;
    if ((double)param_4_00 < 0.0) {
      local_f0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    }
    else {
      bVar13 = bVar13 && (double)param_4_00 == 0.0;
      local_f0 = param_4_00;
    }
    p_Var16 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator_new(0x198);
    uVar11 = _LC8;
    dVar41 = _LC19;
    *(undefined4 *)(p_Var16 + 0x50) = 0;
    *(double *)(p_Var16 + 0x10) = dVar41;
    *(double *)(p_Var16 + 0x18) = dVar41;
    uVar12 = _LC22;
    uVar4 = __LC20;
    *(undefined8 *)(p_Var16 + 8) = uVar11;
    *(undefined8 *)(p_Var16 + 0x20) = uVar4;
    *(undefined8 *)(p_Var16 + 0x28) = uVar12;
    uVar4 = _LC22;
    *(undefined ***)p_Var16 = &PTR___Sp_counted_ptr_inplace_0010c268;
    uVar12 = _LC25;
    *(undefined8 *)(p_Var16 + 0x58) = 0;
    *(undefined8 *)(p_Var16 + 0x30) = uVar4;
    *(undefined8 *)(p_Var16 + 0x38) = uVar4;
    dVar41 = _LC24;
    *(undefined8 *)(p_Var16 + 0xd0) = uVar12;
    *(undefined8 *)(p_Var16 + 0x70) = 0;
    *(double *)(p_Var16 + 0x40) = dVar41;
    *(double *)(p_Var16 + 0x48) = dVar41;
    *(undefined8 *)(p_Var16 + 0x88) = 0;
    *(undefined8 *)(p_Var16 + 0xa0) = 0;
    *(undefined8 *)(p_Var16 + 0xb8) = 0;
    *(undefined8 *)(p_Var16 + 0xd8) = 0;
    *(undefined4 *)(p_Var16 + 0xf8) = 0;
    *(undefined8 *)(p_Var16 + 0x100) = 0;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var16 + 0x108) = p_Var16 + 0xf8;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var16 + 0x110) = p_Var16 + 0xf8;
    *(undefined8 *)(p_Var16 + 0x118) = 0;
    *(undefined8 *)(p_Var16 + 0x120) = 0;
    *(undefined1 (*) [16])(p_Var16 + 0x60) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(p_Var16 + 0x78) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(p_Var16 + 0x90) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(p_Var16 + 0xa8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(p_Var16 + 0xc0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(p_Var16 + 0xe0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(p_Var16 + 0x128) = (undefined1  [16])0x0;
    p_Var22 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)*param_6;
    local_1a8 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(*param_6 + 8);
    *(undefined8 *)(p_Var16 + 0x138) = 0;
    *(undefined8 *)(p_Var16 + 0x150) = 0;
    *(undefined8 *)(p_Var16 + 0x168) = 0;
    *(undefined8 *)(p_Var16 + 0x180) = 0;
    local_b8 = (undefined8 *)0x0;
    local_88 = (undefined1 (*) [16])0x0;
    *(undefined1 (*) [16])(p_Var16 + 0x140) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(p_Var16 + 0x158) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(p_Var16 + 0x170) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(p_Var16 + 0x188) = (undefined1  [16])0x0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_98 = (undefined1  [16])0x0;
    pauVar28 = param_6;
    local_1d0 = p_Var16;
    p_Var23 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(ulong)param_7;
    if (p_Var22 != local_1a8) {
      iVar32 = 0;
      uVar35 = 0;
      local_1d0 = p_Var22;
LAB_00100e08:
      puVar17 = *(undefined8 **)(local_1d0 + 8);
      puVar34 = *(undefined8 **)local_1d0;
      local_68 = (undefined8 *)0x0;
      local_78 = (undefined1  [16])0x0;
      uVar35 = uVar35 + (int)((long)puVar17 - (long)puVar34 >> 4);
      if (puVar17 != puVar34) {
        local_1d8 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)CONCAT44(local_1d8._4_4_,uVar35)
        ;
        puVar21 = (undefined8 *)0x0;
        iVar15 = iVar32;
        do {
          puVar14 = local_68;
          p_Var22 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var16 + 0x60);
          p_Var23 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var16 + 0x68);
          puVar18 = (undefined8 *)*puVar34;
          uVar4 = puVar34[1];
          if (p_Var22 < p_Var23) {
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var16 + 0x60) = p_Var22 + 1;
            puVar20 = (undefined8 *)(*(long *)(p_Var16 + 0x58) + (long)p_Var22 * 0x18);
            puVar20[2] = 0;
            *puVar20 = puVar18;
            puVar20[1] = uVar4;
          }
          else {
            if (p_Var23 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              sVar30 = 0xc00;
              p_Var24 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x80;
LAB_001016ab:
              puVar20 = (undefined8 *)malloc(sVar30);
              __src = *(undefined8 **)(p_Var16 + 0x58);
              if (p_Var22 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_001016df:
                local_1c8 = puVar18;
                local_1b8 = puVar14;
                if (__src != (undefined8 *)0x0) goto LAB_00101f42;
              }
              else {
                sVar30 = (long)p_Var22 * 0x18;
                if ((long)sVar30 < 0x19) {
                  if (sVar30 != 0x18) goto LAB_001016df;
                  param_4_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*__src;
                  uVar12 = __src[1];
                  *puVar20 = param_4_00;
                  puVar20[1] = uVar12;
                  puVar20[2] = __src[2];
                }
                else {
                  puVar20 = (undefined8 *)memmove(puVar20,__src,sVar30);
                }
LAB_00101f42:
                free(__src);
                p_Var22 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var16 + 0x60);
                local_1c8 = puVar20;
                local_1b8 = puVar18;
              }
              *(undefined8 **)(p_Var16 + 0x58) = puVar20;
              *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var16 + 0x68) = p_Var24;
              local_188 = p_Var24;
            }
            else {
              p_Var24 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((long)p_Var23 * 2);
              if (p_Var23 < p_Var24) {
                sVar30 = (long)p_Var23 * 0x30;
                goto LAB_001016ab;
              }
              puVar20 = *(undefined8 **)(p_Var16 + 0x58);
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var16 + 0x60) = p_Var22 + 1;
            puVar20 = puVar20 + (long)p_Var22 * 3;
            puVar20[2] = 0;
            *puVar20 = puVar18;
            puVar20[1] = uVar4;
          }
          local_58 = (undefined8 *)*puVar34;
          puStack_50 = (undefined8 *)puVar34[1];
          iVar32 = iVar15 + 1;
          local_48 = iVar15;
          if (puVar21 == puVar14) {
            std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>::
            _M_realloc_insert<manifold::PolyVert>
                      ((vector<manifold::PolyVert,std::allocator<manifold::PolyVert>> *)local_78,
                       puVar21,&local_58);
          }
          else {
            *puVar21 = local_58;
            puVar21[1] = puStack_50;
            puVar21[2] = CONCAT44(uStack_44,iVar15);
            local_78._8_8_ = puVar21 + 3;
          }
          uVar4 = local_78._8_8_;
          if (puVar17 == puVar34 + 2) goto LAB_00100f98;
          puVar34 = puVar34 + 2;
          puVar21 = (undefined8 *)local_78._8_8_;
          iVar15 = iVar32;
        } while( true );
      }
      if ((undefined1 (*) [16])local_98._8_8_ == local_88) {
        std::
        vector<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>,std::allocator<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>>>
        ::
        _M_realloc_insert<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>const&>
                  ((vector<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>,std::allocator<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>>>
                    *)local_98,local_98._8_8_,local_78);
        local_1d8 = local_1d0;
      }
      else {
        *(undefined8 *)(undefined1 *)local_98._8_8_ = 0;
        *(undefined8 *)*(undefined1 (*) [16])(local_98._8_8_ + 0x10) = 0;
        *(undefined8 *)((undefined1 *)local_98._8_8_ + 8) = 0;
        local_98._8_8_ = *(undefined1 (*) [16])(local_98._8_8_ + 0x10) + 8;
      }
      goto LAB_001010c4;
    }
LAB_00102b75:
    param_7 = (uint)p_Var23;
    local_fc = 0;
    param_6 = pauVar28;
    p_Var16 = local_1d0;
    uVar35 = local_fc;
LAB_001010e8:
    local_fc = uVar35;
    local_100 = param_7 + 1;
    local_c8 = p_Var16;
    if (local_100 < 1) {
      local_108 = (vector *)&local_58;
    }
    else {
      local_d4 = param_7 + 2;
      local_108 = (vector *)&local_58;
      local_d0 = (double)local_100;
      iVar32 = 1;
      uVar35 = local_fc;
      local_e0 = param_6;
      do {
        pauVar28 = (undefined1 (*) [16])(ulong)uVar35;
        local_1b8 = (undefined8 *)((double)iVar32 / local_d0);
        local_1d8 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(param_4 * (double)local_1b8);
        dVar41 = (double)((ulong)local_1d8 & __LC2);
        p_Var16 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                  (local_f8 * (double)local_1b8 + (_LC11 - (double)local_1b8));
        local_1c8 = (undefined8 *)
                    ((double)local_f0 * (double)local_1b8 + (_LC11 - (double)local_1b8));
        local_1a8 = p_Var16;
        puStack_1a0 = local_1c8;
        if (_LC3 < dVar41) {
          p_Var22 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)sin((double)local_1d8);
          local_178 = _LC0;
          local_188 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((ulong)p_Var22 ^ (ulong)_LC0)
          ;
          dVar39 = _LC4 + (double)local_1d8;
          dVar40 = (double)((ulong)dVar39 & __LC2);
          if (dVar40 <= _LC3) {
LAB_001020a9:
            if (dVar39 < 0.0) {
              dVar41 = remquo((double)((ulong)dVar39 ^ (ulong)local_178),_LC4,(int *)local_108);
              iVar15 = (int)local_58 % 4;
              if (iVar15 == 2) {
                local_1d0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                            sin((dVar41 * __LC6) / __LC7);
              }
              else if (iVar15 == 3) {
                local_1d0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                            cos((dVar41 * __LC6) / __LC7);
              }
              else if (((ulong)local_58 & 3) == 0) {
                dVar41 = sin((dVar41 * __LC6) / __LC7);
                local_1d0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                            ((ulong)dVar41 ^ (ulong)local_178);
              }
              else if (iVar15 == 1) {
                dVar41 = cos((dVar41 * __LC6) / __LC7);
                local_1d0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                            ((ulong)dVar41 ^ (ulong)local_178);
              }
              else {
                local_1d0 = _LC0;
              }
              dVar41 = remquo((double)((ulong)dVar39 ^ (ulong)local_178),_LC4,(int *)local_108);
              iVar15 = (int)local_58 % 4;
              if (iVar15 == 2) {
                param_4_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                             sin((dVar41 * __LC6) / __LC7);
              }
              else if (iVar15 == 3) {
                param_4_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                             cos((dVar41 * __LC6) / __LC7);
              }
              else if (((ulong)local_58 & 3) == 0) {
                dVar41 = sin((dVar41 * __LC6) / __LC7);
                param_4_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                             ((ulong)dVar41 ^ (ulong)local_178);
              }
              else {
                param_4_00 = _LC0;
                if (iVar15 == 1) {
                  dVar41 = cos((dVar41 * __LC6) / __LC7);
                  param_4_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                               ((ulong)dVar41 ^ (ulong)local_178);
                }
              }
              goto LAB_001021ab;
            }
LAB_0010128b:
            dVar39 = remquo(dVar40,_LC4,(int *)local_108);
            iVar15 = (int)local_58 % 4;
            if (iVar15 == 2) {
              dVar39 = sin((dVar39 * __LC6) / __LC7);
              local_1d0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                          ((ulong)dVar39 ^ (ulong)_LC0);
            }
            else if (iVar15 == 3) {
              dVar39 = cos((dVar39 * __LC6) / __LC7);
              local_1d0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                          ((ulong)dVar39 ^ (ulong)_LC0);
            }
            else if (((ulong)local_58 & 3) == 0) {
              local_1d0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                          sin((dVar39 * __LC6) / __LC7);
            }
            else if (iVar15 == 1) {
              local_1d0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                          cos((dVar39 * __LC6) / __LC7);
            }
            else {
              local_1d0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
            }
            dVar39 = remquo(dVar40,_LC4,(int *)local_108);
            iVar15 = (int)local_58 % 4;
            if (iVar15 == 2) {
              dVar39 = sin((dVar39 * __LC6) / __LC7);
              param_4_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                           ((ulong)dVar39 ^ (ulong)_LC0);
            }
            else if (iVar15 == 3) {
              dVar39 = cos((dVar39 * __LC6) / __LC7);
              param_4_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                           ((ulong)dVar39 ^ (ulong)_LC0);
            }
            else if (((ulong)local_58 & 3) == 0) {
              param_4_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                           sin((dVar39 * __LC6) / __LC7);
            }
            else {
              param_4_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
              if (iVar15 == 1) {
                param_4_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                             cos((dVar39 * __LC6) / __LC7);
              }
            }
            if ((double)local_1d8 < 0.0) {
LAB_001029db:
              uVar35 = (uint)pauVar28;
              local_178 = _LC0;
              goto LAB_001021ab;
            }
            goto LAB_0010138e;
          }
          param_4_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)sin(dVar39);
          p_Var23 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((double)p_Var22 * 0.0);
          local_1d0 = param_4_00;
        }
        else if ((double)local_1d8 < 0.0) {
          local_178 = _LC0;
          dVar39 = remquo((double)((ulong)local_1d8 ^ (ulong)_LC0),_LC4,(int *)local_108);
          iVar15 = (int)local_58 % 4;
          if (iVar15 == 2) {
            dVar39 = sin((dVar39 * __LC6) / __LC7);
            local_188 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                        ((ulong)dVar39 ^ (ulong)_LC0);
          }
          else if (iVar15 == 3) {
            dVar39 = cos((dVar39 * __LC6) / __LC7);
            local_188 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                        ((ulong)dVar39 ^ (ulong)_LC0);
          }
          else if (((ulong)local_58 & 3) == 0) {
            local_188 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                        sin((dVar39 * __LC6) / __LC7);
          }
          else if (iVar15 == 1) {
            local_188 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                        cos((dVar39 * __LC6) / __LC7);
          }
          else {
            local_188 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
          }
          dVar39 = _LC4 + (double)local_1d8;
          dVar40 = (double)((ulong)dVar39 & __LC2);
          if (dVar40 <= _LC3) goto LAB_001020a9;
          param_4_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)sin(dVar39);
          local_1d0 = param_4_00;
LAB_001021ab:
          dVar41 = remquo((double)((ulong)local_1d8 ^ (ulong)local_178),_LC4,(int *)local_108);
          iVar15 = (int)local_58 % 4;
          if (iVar15 == 2) {
LAB_0010261d:
            p_Var22 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)sin((dVar41 * __LC6) / __LC7);
            p_Var23 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((double)p_Var22 * 0.0);
          }
          else {
            if (iVar15 != 3) {
              if (((ulong)local_58 & 3) == 0) {
                dVar41 = sin((dVar41 * __LC6) / __LC7);
              }
              else {
                p_Var22 = _LC0;
                p_Var23 = _LC0;
                if (iVar15 != 1) goto LAB_00101420;
                dVar41 = cos((dVar41 * __LC6) / __LC7);
              }
              p_Var22 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                        ((ulong)local_178 ^ (ulong)dVar41);
              p_Var23 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                        ((double)((ulong)local_178 ^ (ulong)dVar41) * 0.0);
              goto LAB_00101420;
            }
LAB_001013ee:
            p_Var22 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)cos((dVar41 * __LC6) / __LC7);
            p_Var23 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((double)p_Var22 * 0.0);
          }
        }
        else {
          dVar39 = remquo(dVar41,_LC4,(int *)local_108);
          iVar15 = (int)local_58 % 4;
          if (iVar15 == 2) {
            local_188 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                        sin((dVar39 * __LC6) / __LC7);
LAB_00101266:
            dVar40 = _LC4 + (double)local_1d8;
            if (dVar40 <= _LC3) goto LAB_0010128b;
            param_4_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)sin(_LC19);
            local_1d0 = param_4_00;
          }
          else {
            if (iVar15 == 3) {
              local_188 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                          cos((dVar39 * __LC6) / __LC7);
              goto LAB_00101266;
            }
            if (((ulong)local_58 & 3) == 0) {
              dVar39 = sin((dVar39 * __LC6) / __LC7);
              local_188 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                          ((ulong)dVar39 ^ (ulong)_LC0);
              goto LAB_00101266;
            }
            if (iVar15 == 1) {
              dVar39 = cos((dVar39 * __LC6) / __LC7);
              local_188 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                          ((ulong)dVar39 ^ (ulong)_LC0);
              goto LAB_00101266;
            }
            dVar40 = _LC4 + (double)local_1d8;
            if (dVar40 <= _LC3) {
              local_188 = _LC0;
              goto LAB_0010128b;
            }
            param_4_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)sin(_LC19);
            local_188 = _LC0;
            local_1d0 = param_4_00;
          }
LAB_0010138e:
          dVar41 = remquo(dVar41,_LC4,(int *)local_108);
          iVar15 = (int)local_58 % 4;
          if (iVar15 == 2) {
            dVar41 = sin((dVar41 * __LC6) / __LC7);
          }
          else {
            if (iVar15 != 3) {
              if (((ulong)local_58 & 3) == 0) goto LAB_0010261d;
              if (iVar15 == 1) goto LAB_001013ee;
              p_Var22 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
              p_Var23 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
              goto LAB_00101420;
            }
            dVar41 = cos((dVar41 * __LC6) / __LC7);
          }
          p_Var22 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((ulong)dVar41 ^ (ulong)_LC0);
          p_Var23 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                    ((double)((ulong)dVar41 ^ (ulong)_LC0) * 0.0);
        }
LAB_00101420:
        plVar31 = *(long **)*local_e0;
        plVar9 = *(long **)(*local_e0 + 8);
        if (plVar9 != plVar31) {
          lVar37 = 0;
          uVar5 = uVar35;
          do {
            lVar25 = plVar31[1];
            lVar19 = *plVar31;
            uVar29 = lVar25 - lVar19 >> 4;
            if (lVar19 != lVar25) {
              iVar15 = uVar35 + (int)lVar37;
              uVar26 = uVar29 - 1;
              uVar33 = 0;
              do {
                iVar27 = (int)uVar26 + iVar15;
                iVar36 = (iVar15 - local_fc) + (int)uVar33;
                if ((bool)(iVar32 == local_100 & bVar13)) {
                  if (uStack_a8 <= local_b0) {
                    if (uStack_a8 == 0) {
                      sVar30 = 0x600;
                      uVar29 = 0x80;
                    }
                    else {
                      uVar29 = uStack_a8 * 2;
                      if (uVar29 <= uStack_a8) goto LAB_0010156f;
                      sVar30 = uStack_a8 * 0x18;
                    }
                    puVar17 = (undefined8 *)malloc(sVar30);
                    if (local_b0 == 0) {
LAB_00101773:
                      if (local_b8 != (undefined8 *)0x0) goto LAB_00101dbe;
                    }
                    else {
                      sVar30 = local_b0 * 0xc;
                      if ((long)sVar30 < 0xd) {
                        if (sVar30 != 0xc) goto LAB_00101773;
                        *puVar17 = *local_b8;
                        *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(local_b8 + 1);
                      }
                      else {
                        memmove(puVar17,local_b8,sVar30);
                      }
LAB_00101dbe:
                      free(local_b8);
                    }
                    lVar19 = *plVar31;
                    lVar25 = plVar31[1];
                    local_b8 = puVar17;
                    uStack_a8 = uVar29;
                  }
LAB_0010156f:
                  puVar17 = (undefined8 *)((long)local_b8 + local_b0 * 0xc);
                  *(int *)(puVar17 + 1) = iVar36;
                  *puVar17 = CONCAT44(iVar27 - local_fc,uVar5);
                  local_b0 = local_b0 + 1;
                }
                else {
                  uVar29 = *(ulong *)(local_c8 + 0x60);
                  pdVar2 = (double *)(lVar19 + uVar33 * 0x10);
                  dVar41 = *pdVar2;
                  dVar39 = pdVar2[1];
                  uVar26 = *(ulong *)(local_c8 + 0x68);
                  dVar40 = dVar41 * ((double)param_4_00 * (double)local_1a8 + (double)p_Var23) +
                           dVar39 * ((double)local_1d0 * 0.0 + (double)p_Var16 * (double)local_188);
                  dVar41 = dVar41 * ((double)p_Var22 * (double)puStack_1a0 +
                                    (double)param_4_00 * 0.0) +
                           dVar39 * ((double)local_1c8 * (double)local_1d0 + (double)local_188 * 0.0
                                    );
                  if (uVar29 < uVar26) {
                    *(ulong *)(local_c8 + 0x60) = uVar29 + 1;
                    pdVar2 = (double *)(*(long *)(local_c8 + 0x58) + uVar29 * 0x18);
                    *pdVar2 = dVar40;
                    pdVar2[1] = dVar41;
                    pdVar2[2] = (double)local_1b8 * param_2;
                  }
                  else {
                    if (uVar26 == 0) {
                      sVar30 = 0xc00;
                      uVar38 = 0x80;
LAB_00101abb:
                      puVar17 = (undefined8 *)malloc(sVar30);
                      puVar34 = *(undefined8 **)(local_c8 + 0x58);
                      if (uVar29 == 0) {
LAB_00101b41:
                        if (puVar34 != (undefined8 *)0x0) goto LAB_00101e7c;
                      }
                      else {
                        sVar30 = uVar29 * 0x18;
                        if ((long)sVar30 < 0x19) {
                          if (sVar30 != 0x18) goto LAB_00101b41;
                          uVar4 = puVar34[1];
                          *puVar17 = *puVar34;
                          puVar17[1] = uVar4;
                          puVar17[2] = puVar34[2];
                        }
                        else {
                          memmove(puVar17,puVar34,sVar30);
                        }
LAB_00101e7c:
                        free(puVar34);
                        uVar29 = *(ulong *)(local_c8 + 0x60);
                      }
                      *(undefined8 **)(local_c8 + 0x58) = puVar17;
                      *(ulong *)(local_c8 + 0x68) = uVar38;
                    }
                    else {
                      uVar38 = uVar26 * 2;
                      if (uVar26 < uVar38) {
                        sVar30 = uVar26 * 0x30;
                        goto LAB_00101abb;
                      }
                      puVar17 = *(undefined8 **)(local_c8 + 0x58);
                    }
                    *(ulong *)(local_c8 + 0x60) = uVar29 + 1;
                    pdVar2 = (double *)(puVar17 + uVar29 * 3);
                    *pdVar2 = dVar40;
                    pdVar2[1] = dVar41;
                    pdVar2[2] = (double)local_1b8 * param_2;
                  }
                  puVar17 = local_b8;
                  if (uStack_a8 <= local_b0) {
                    if (uStack_a8 == 0) {
                      sVar30 = 0x600;
                      uVar29 = 0x80;
                    }
                    else {
                      uVar29 = uStack_a8 * 2;
                      if (uVar29 <= uStack_a8) goto LAB_0010164f;
                      sVar30 = uStack_a8 * 0x18;
                    }
                    puVar17 = (undefined8 *)malloc(sVar30);
                    uStack_a8 = uVar29;
                    if (local_b0 == 0) {
LAB_00101827:
                      if (local_b8 == (undefined8 *)0x0) goto LAB_0010164f;
                    }
                    else {
                      sVar30 = local_b0 * 0xc;
                      if ((long)sVar30 < 0xd) {
                        if (sVar30 != 0xc) goto LAB_00101827;
                        *puVar17 = *local_b8;
                        *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(local_b8 + 1);
                      }
                      else {
                        puVar17 = (undefined8 *)memmove(puVar17,local_b8,sVar30);
                      }
                    }
                    free(local_b8);
                  }
LAB_0010164f:
                  local_b8 = puVar17;
                  uVar29 = local_b0 + 1;
                  piVar3 = (int *)((long)local_b8 + local_b0 * 0xc);
                  *piVar3 = (int)uVar33 + iVar15;
                  piVar3[1] = iVar27;
                  piVar3[2] = iVar36;
                  puVar17 = local_b8;
                  if ((uStack_a8 <= uVar29) && (uVar26 = uStack_a8 * 2, uStack_a8 < uVar26)) {
                    puVar17 = (undefined8 *)malloc(uStack_a8 * 0x18);
                    sVar30 = uVar29 * 0xc;
                    uStack_a8 = uVar26;
                    if ((long)sVar30 < 0xd) {
                      if (sVar30 == 0xc) {
                        *puVar17 = *local_b8;
                        *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(local_b8 + 1);
                      }
                      else if (local_b8 == (undefined8 *)0x0) goto LAB_00101686;
                    }
                    else {
                      memmove(puVar17,local_b8,sVar30);
                    }
                    free(local_b8);
                  }
LAB_00101686:
                  local_b8 = puVar17;
                  local_b0 = local_b0 + 2;
                  piVar3 = (int *)((long)local_b8 + uVar29 * 0xc);
                  lVar25 = plVar31[1];
                  *piVar3 = iVar27;
                  piVar3[1] = iVar27 - local_fc;
                  piVar3[2] = iVar36;
                  lVar19 = *plVar31;
                }
                uVar38 = uVar33 + 1;
                uVar29 = lVar25 - lVar19 >> 4;
                uVar26 = uVar33;
                uVar33 = uVar38;
              } while (uVar38 < uVar29);
            }
            uVar5 = uVar5 + 1;
            lVar37 = lVar37 + uVar29;
            plVar31 = plVar31 + 3;
          } while (plVar9 != plVar31);
        }
        iVar32 = iVar32 + 1;
        uVar35 = uVar35 + local_fc;
        param_6 = local_e0;
      } while (iVar32 != local_d4);
    }
    if ((bVar13) && (lVar37 = *(long *)(*param_6 + 8), lVar37 != *(long *)*param_6)) {
      uVar29 = 0;
      do {
        uVar26 = *(ulong *)(local_c8 + 0x60);
        uVar33 = *(ulong *)(local_c8 + 0x68);
        if (uVar26 < uVar33) {
          *(ulong *)(local_c8 + 0x60) = uVar26 + 1;
          pauVar28 = (undefined1 (*) [16])(*(long *)(local_c8 + 0x58) + uVar26 * 0x18);
          *pauVar28 = (undefined1  [16])0x0;
          *(double *)pauVar28[1] = param_2;
        }
        else {
          if (uVar33 == 0) {
            sVar30 = 0xc00;
            uVar38 = 0x80;
LAB_00102946:
            puVar17 = (undefined8 *)malloc(sVar30);
            puVar34 = *(undefined8 **)(local_c8 + 0x58);
            if (uVar26 == 0) {
LAB_0010295b:
              if (puVar34 != (undefined8 *)0x0) goto LAB_00102a15;
            }
            else {
              sVar30 = uVar26 * 0x18;
              if ((long)sVar30 < 0x19) {
                if (sVar30 != 0x18) goto LAB_0010295b;
                uVar4 = puVar34[1];
                *puVar17 = *puVar34;
                puVar17[1] = uVar4;
                puVar17[2] = puVar34[2];
              }
              else {
                puVar17 = (undefined8 *)memmove(puVar17,puVar34,sVar30);
              }
LAB_00102a15:
              free(puVar34);
              uVar26 = *(ulong *)(local_c8 + 0x60);
            }
            *(undefined8 **)(local_c8 + 0x58) = puVar17;
            lVar37 = *(long *)(*param_6 + 8);
            *(ulong *)(local_c8 + 0x68) = uVar38;
          }
          else {
            uVar38 = uVar33 * 2;
            if (uVar33 < uVar38) {
              sVar30 = uVar33 * 0x30;
              goto LAB_00102946;
            }
            puVar17 = *(undefined8 **)(local_c8 + 0x58);
          }
          *(ulong *)(local_c8 + 0x60) = uVar26 + 1;
          *(undefined1 (*) [16])(puVar17 + uVar26 * 3) = (undefined1  [16])0x0;
          *(double *)((undefined1 (*) [16])(puVar17 + uVar26 * 3))[1] = param_2;
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 < (ulong)((lVar37 - *(long *)*param_6 >> 3) * -0x5555555555555555));
    }
    manifold::TriangulateIdx(local_108,_LC24);
    puVar17 = puStack_50;
    if (puStack_50 != local_58) {
      iVar32 = local_100 * local_fc;
      puVar34 = local_58;
LAB_00101a53:
      do {
        uVar6 = *(undefined4 *)puVar34;
        uVar7 = *(undefined4 *)(puVar34 + 1);
        uVar8 = *(undefined4 *)((long)puVar34 + 4);
        puVar21 = local_b8;
        if (uStack_a8 <= local_b0) {
          if (uStack_a8 == 0) {
            sVar30 = 0x600;
            uVar29 = 0x80;
          }
          else {
            uVar29 = uStack_a8 * 2;
            if (uVar29 <= uStack_a8) goto LAB_00101a20;
            sVar30 = uStack_a8 * 0x18;
          }
          puVar21 = (undefined8 *)malloc(sVar30);
          uStack_a8 = uVar29;
          if (local_b0 == 0) {
LAB_001024ed:
            if (local_b8 == (undefined8 *)0x0) goto LAB_00101a20;
          }
          else {
            sVar30 = local_b0 * 0xc;
            if ((long)sVar30 < 0xd) {
              if (sVar30 != 0xc) goto LAB_001024ed;
              *puVar21 = *local_b8;
              *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(local_b8 + 1);
            }
            else {
              puVar21 = (undefined8 *)memmove(puVar21,local_b8,sVar30);
            }
          }
          free(local_b8);
        }
LAB_00101a20:
        local_b8 = puVar21;
        uVar29 = local_b0 + 1;
        puVar21 = (undefined8 *)((long)local_b8 + local_b0 * 0xc);
        *(undefined4 *)(puVar21 + 1) = uVar8;
        *puVar21 = CONCAT44(uVar7,uVar6);
        if (bVar13) {
          puVar34 = (undefined8 *)((long)puVar34 + 0xc);
          local_b0 = uVar29;
          if (puVar17 == puVar34) break;
          goto LAB_00101a53;
        }
        uVar4 = *puVar34;
        iVar15 = *(int *)(puVar34 + 1);
        if (uStack_a8 <= uVar29) {
          if (uStack_a8 == 0) {
            local_1d0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x80;
            sVar30 = 0x600;
          }
          else {
            local_1d0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(uStack_a8 * 2);
            if (local_1d0 <= uStack_a8) goto LAB_00102282;
            sVar30 = uStack_a8 * 0x18;
          }
          puVar21 = (undefined8 *)malloc(sVar30);
          if (uVar29 == 0) {
LAB_001025b9:
            if (local_b8 != (undefined8 *)0x0) goto LAB_00102910;
          }
          else {
            sVar30 = uVar29 * 0xc;
            if ((long)sVar30 < 0xd) {
              if (sVar30 != 0xc) goto LAB_001025b9;
              *puVar21 = *local_b8;
              *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(local_b8 + 1);
            }
            else {
              puVar21 = (undefined8 *)memmove(puVar21,local_b8,sVar30);
            }
LAB_00102910:
            free(local_b8);
          }
          uStack_a8 = (ulong)local_1d0;
          local_b8 = puVar21;
        }
LAB_00102282:
        local_b0 = local_b0 + 2;
        puVar34 = (undefined8 *)((long)puVar34 + 0xc);
        puVar21 = (undefined8 *)((long)local_b8 + uVar29 * 0xc);
        *(int *)(puVar21 + 1) = iVar15 + iVar32;
        *puVar21 = CONCAT44((int)((ulong)uVar4 >> 0x20) + iVar32,(int)uVar4 + iVar32);
      } while (puVar17 != puVar34);
    }
    pVVar1 = (Vec *)(local_c8 + 0x10);
    p_Var22 = local_c8 + 8;
    manifold::Manifold::Impl::CreateHalfedges(pVVar1);
    manifold::Manifold::Impl::Finish();
    manifold::Manifold::Impl::InitializeOriginal(SUB81(pVVar1,0));
    manifold::Manifold::Impl::CreateFaces();
    local_78._8_8_ = local_c8;
    local_78._0_8_ = pVVar1;
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
    }
    manifold::Manifold::Manifold(param_1,local_78);
    uVar4 = local_78._8_8_;
    if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_78._8_8_ !=
        (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var16 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_78._8_8_ + 8);
      if (*(long *)(local_78._8_8_ + 8) == 0x100000001) {
        *(undefined8 *)(local_78._8_8_ + 8) = 0;
        (**(code **)(*(long *)local_78._8_8_ + 0x10))(local_78._8_8_);
        (**(code **)(*(long *)uVar4 + 0x18))(uVar4);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar32 = *(int *)p_Var16;
          *(int *)p_Var16 = *(int *)p_Var16 + -1;
          UNLOCK();
        }
        else {
          iVar32 = *(int *)(local_78._8_8_ + 8);
          *(int *)(local_78._8_8_ + 8) = iVar32 + -1;
        }
        if (iVar32 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                    ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_78._8_8_);
        }
      }
    }
    if (local_58 != (undefined8 *)0x0) {
      operator_delete(local_58,CONCAT44(uStack_44,local_48) - (long)local_58);
    }
    uVar4 = local_98._8_8_;
    puVar17 = (undefined8 *)local_98._0_8_;
    if (local_98._8_8_ != local_98._0_8_) {
      do {
        pvVar10 = (void *)*puVar17;
        if (pvVar10 != (void *)0x0) {
          operator_delete(pvVar10,puVar17[2] - (long)pvVar10);
        }
        puVar17 = puVar17 + 3;
      } while ((undefined8 *)uVar4 != puVar17);
    }
    if ((undefined8 *)local_98._0_8_ != (undefined8 *)0x0) {
      operator_delete((void *)local_98._0_8_,(long)local_88 - local_98._0_8_);
    }
    if (local_b8 != (undefined8 *)0x0) {
      free(local_b8);
    }
    if (*(long *)(local_c8 + 8) == 0x100000001) {
      *(undefined8 *)(local_c8 + 8) = 0;
      (**(code **)(*(long *)local_c8 + 0x10))(local_c8);
      (**(code **)(*(long *)local_c8 + 0x18))(local_c8);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar32 = *(int *)p_Var22;
        *(int *)p_Var22 = *(int *)p_Var22 + -1;
        UNLOCK();
      }
      else {
        iVar32 = *(int *)(local_c8 + 8);
        *(int *)(local_c8 + 8) = iVar32 + -1;
      }
      if (iVar32 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_c8);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100f98:
  pauVar28 = (undefined1 (*) [16])local_98._8_8_;
  uVar12 = local_78._0_8_;
  if ((undefined1 (*) [16])local_98._8_8_ == local_88) {
    p_Var22 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((long)local_68 - local_78._0_8_);
    std::
    vector<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>,std::allocator<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>>>
    ::_M_realloc_insert<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>const&>
              ((vector<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>,std::allocator<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>>>
                *)local_98,local_98._8_8_,local_78);
    local_1d8 = p_Var22;
  }
  else {
    *(undefined8 *)*(undefined1 (*) [16])(local_98._8_8_ + 0x10) = 0;
    *(undefined1 (*) [16])local_98._8_8_ = (undefined1  [16])0x0;
    p_Var23 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_78._8_8_ - local_78._0_8_);
    if (p_Var23 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var24 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
      puVar17 = (undefined8 *)0x0;
      p_Var22 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((long)local_68 - local_78._0_8_);
    }
    else {
      if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x7ffffffffffffff8 < p_Var23) {
        if ((long)p_Var23 < 0) {
          std::__throw_bad_array_new_length();
          goto LAB_001029db;
        }
        std::__throw_bad_alloc();
        p_Var23 = p_Var16;
        goto LAB_00102b75;
      }
      puVar17 = (undefined8 *)operator_new((ulong)p_Var23);
      p_Var24 = p_Var23 + (long)puVar17;
      p_Var22 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((long)local_68 - uVar12);
      local_1d8 = p_Var23;
      local_188 = local_1d0;
    }
    *(undefined8 **)*pauVar28 = puVar17;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)
     *(undefined1 (*) [16])((undefined8)pauVar28 + 1) = p_Var24;
    puVar34 = (undefined8 *)uVar12;
    puVar21 = puVar17;
    if (uVar4 != uVar12) {
      do {
        uVar11 = puVar34[1];
        puVar18 = puVar34 + 3;
        *puVar21 = *puVar34;
        puVar21[1] = uVar11;
        puVar21[2] = puVar34[2];
        puVar34 = puVar18;
        puVar21 = puVar21 + 3;
      } while ((undefined8 *)uVar4 != puVar18);
      puVar17 = puVar17 + (((ulong)(uVar4 + (-0x18 - uVar12)) >> 3) * 0xaaaaaaaaaaaaaab &
                          0x1fffffffffffffff) * 3 + 3;
    }
    *(undefined8 **)(*pauVar28 + 8) = puVar17;
    local_98._8_8_ = *(undefined1 (*) [16])(local_98._8_8_ + 0x10) + 8;
  }
  if ((undefined8 *)uVar12 != (undefined8 *)0x0) {
    operator_delete((void *)uVar12,(ulong)p_Var22);
    local_1d8 = local_1d0;
  }
LAB_001010c4:
  local_1d0 = local_1d0 + 0x18;
  if (local_1a8 == local_1d0) goto LAB_001010e8;
  goto LAB_00100e08;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::Manifold::Cylinder(double, double, double, int, bool) */

Manifold * __thiscall
manifold::Manifold::Cylinder
          (Manifold *this,double param_1,double param_2,double param_3,int param_4,bool param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 (*__src) [16];
  undefined1 (*pauVar3) [16];
  void *__dest;
  void *pvVar4;
  ulong __n;
  double dVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  int iVar8;
  undefined1 (*pauVar9) [16];
  long in_FS_OFFSET;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double local_c8;
  double local_a8;
  Manifold local_88 [16];
  Manifold local_78 [16];
  Manifold local_68 [16];
  undefined1 local_58 [16];
  undefined1 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 <= 0.0) || (param_2 <= 0.0)) {
    manifold::Manifold::Invalid();
LAB_00102e7a:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return this;
    }
LAB_0010360b:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pauVar9 = (undefined1 (*) [16])(ulong)(uint)param_4;
  dVar10 = _LC11;
  if (0.0 <= param_3) {
    dVar10 = param_3 / param_2;
  }
  if ((param_4 < 3) &&
     (pauVar9 = (undefined1 (*) [16])(ulong)Quality::circularSegments_,
     (int)Quality::circularSegments_ < 1)) {
    dVar11 = fmax(param_2,param_3);
    dVar5 = _LC12;
    dVar11 = fmin((double)(int)(((dVar11 + dVar11) * __LC6) / Quality::circularEdgeLength_),
                  (double)(int)(_LC12 / Quality::circularAngle_));
    uVar7 = (int)(dVar11 + __LC13) - (int)(dVar11 + __LC13) % 4;
    if ((int)uVar7 < 3) {
      uVar7 = 3;
    }
    pauVar9 = (undefined1 (*) [16])(ulong)uVar7;
  }
  else {
    uVar7 = (uint)pauVar9;
    dVar5 = _LC12;
  }
  __n = (long)(int)uVar7 * 0x10;
  __src = (undefined1 (*) [16])operator_new(__n);
  pauVar3 = __src;
  if ((__n & 0x10) != 0) {
    *__src = (undefined1  [16])0x0;
    pauVar3 = __src + 1;
    if (__src + (int)uVar7 == __src + 1) goto LAB_00102f00;
  }
  do {
    *pauVar3 = (undefined1  [16])0x0;
    pauVar6 = pauVar3 + 2;
    pauVar3[1] = (undefined1  [16])0x0;
    pauVar3 = pauVar6;
  } while (__src + (int)uVar7 != pauVar6);
LAB_00102f00:
  __dest = (void *)0x0;
  iVar8 = (int)pauVar9;
  pauVar3 = __src;
  do {
    dVar13 = (double)(int)__dest * (dVar5 / (double)iVar8);
    dVar11 = _LC4 + dVar13;
    pauVar6 = pauVar3;
    if ((double)((ulong)dVar11 & __LC2) <= _LC3) {
      if (0.0 <= dVar11) {
        dVar12 = remquo((double)((ulong)dVar11 & __LC2),_LC4,(int *)local_58);
        dVar11 = (double)((ulong)dVar13 & __LC2);
        iVar2 = (int)local_58._0_4_ % 4;
        if (iVar2 == 2) {
          dVar12 = sin((dVar12 * __LC6) / __LC7);
        }
        else {
          if (iVar2 != 3) {
            if ((local_58 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
              local_c8 = sin((dVar12 * __LC6) / __LC7);
              local_c8 = local_c8 * param_2;
            }
            else if (iVar2 == 1) {
              local_c8 = cos((dVar12 * __LC6) / __LC7);
              local_c8 = local_c8 * param_2;
            }
            else {
              local_c8 = param_2 * 0.0;
            }
            goto joined_r0x001033a1;
          }
          dVar12 = cos((dVar12 * __LC6) / __LC7);
        }
        local_c8 = (double)((ulong)dVar12 ^ (ulong)_LC0) * param_2;
        goto joined_r0x001033a1;
      }
      local_a8 = _LC0;
      dVar11 = remquo((double)((ulong)dVar11 ^ (ulong)_LC0),_LC4,(int *)local_58);
      iVar2 = (int)local_58._0_4_ % 4;
      if (iVar2 == 2) {
        local_c8 = sin((dVar11 * __LC6) / __LC7);
      }
      else if (iVar2 == 3) {
        local_c8 = cos((dVar11 * __LC6) / __LC7);
      }
      else if ((local_58 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
        dVar11 = sin((dVar11 * __LC6) / __LC7);
        local_c8 = (double)((ulong)dVar11 ^ (ulong)_LC0);
      }
      else {
        local_c8 = _LC0;
        if (iVar2 == 1) {
          dVar11 = cos((dVar11 * __LC6) / __LC7);
          local_c8 = (double)((ulong)dVar11 ^ (ulong)_LC0);
        }
      }
      local_c8 = local_c8 * param_2;
LAB_001032cc:
      dVar11 = remquo((double)((ulong)dVar13 ^ (ulong)local_a8),_LC4,(int *)local_58);
      iVar2 = (int)local_58._0_4_ % 4;
      if (iVar2 == 2) {
LAB_00103340:
        dVar13 = sin((dVar11 * __LC6) / __LC7);
      }
      else if (iVar2 == 3) {
LAB_0010303f:
        dVar13 = cos((dVar11 * __LC6) / __LC7);
      }
      else if ((local_58 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
        dVar11 = sin((dVar11 * __LC6) / __LC7);
        dVar13 = (double)((ulong)dVar11 ^ (ulong)local_a8);
      }
      else {
        dVar13 = _LC0;
        if (iVar2 == 1) {
          dVar11 = cos((dVar11 * __LC6) / __LC7);
          dVar13 = (double)((ulong)dVar11 ^ (ulong)local_a8);
        }
      }
    }
    else {
      local_c8 = sin(dVar11);
      local_c8 = local_c8 * param_2;
      dVar11 = (double)((ulong)dVar13 & __LC2);
      if (dVar11 <= _LC3) {
joined_r0x001033a1:
        local_a8 = _LC0;
        if (dVar13 < 0.0) goto LAB_001032cc;
        dVar11 = remquo(dVar11,_LC4,(int *)local_58);
        iVar2 = (int)local_58._0_4_ % 4;
        if (iVar2 == 2) {
          dVar11 = sin((dVar11 * __LC6) / __LC7);
          dVar13 = (double)((ulong)dVar11 ^ (ulong)_LC0);
        }
        else {
          if (iVar2 != 3) {
            if ((local_58 & (undefined1  [16])0x3) != (undefined1  [16])0x0) {
              if (iVar2 != 1) {
                dVar13 = 0.0;
                goto LAB_00103058;
              }
              goto LAB_0010303f;
            }
            goto LAB_00103340;
          }
          dVar11 = cos((dVar11 * __LC6) / __LC7);
          dVar13 = (double)((ulong)dVar11 ^ (ulong)_LC0);
        }
      }
      else {
        dVar13 = sin(dVar13);
      }
    }
LAB_00103058:
    while( true ) {
      uVar7 = (int)__dest + 1;
      __dest = (void *)(ulong)uVar7;
      pauVar3 = pauVar6 + 1;
      *(double *)*pauVar6 = local_c8;
      *(double *)(*pauVar6 + 8) = dVar13 * param_2;
      if (uVar7 != (uint)pauVar9) break;
      __dest = operator_new(__n);
      memcpy(__dest,__src,__n);
      pauVar9 = (undefined1 (*) [16])operator_new(0x18);
      puVar1 = pauVar9[1] + 8;
      local_58._0_8_ = pauVar9;
      *(undefined8 *)pauVar9[1] = 0;
      *pauVar9 = (undefined1  [16])0x0;
      local_48 = puVar1;
      if (__n < 0x7ffffffffffffff1) {
        pvVar4 = operator_new(__n);
        *(void **)*pauVar9 = pvVar4;
        *(void **)pauVar9[1] = (void *)((long)pvVar4 + __n);
        memcpy(pvVar4,__dest,__n);
        *(void **)(*pauVar9 + 8) = (void *)((long)pvVar4 + __n);
        local_58._8_8_ = puVar1;
        Extrude(param_1,0,dVar10,dVar10,local_88,local_58,0);
        pvVar4 = *(void **)*pauVar9;
        if (pvVar4 != (void *)0x0) {
          operator_delete(pvVar4,*(long *)pauVar9[1] - (long)pvVar4);
        }
        operator_delete(pauVar9,0x18);
        operator_delete(__dest,__n);
        if (param_5) {
          local_58 = (undefined1  [16])0x0;
          local_48 = (undefined1 *)(param_1 * __LC27);
          manifold::Manifold::Translate(local_78,local_88);
          manifold::Manifold::AsOriginal();
          manifold::Manifold::operator=(local_88,local_68);
          manifold::Manifold::~Manifold(local_68);
          manifold::Manifold::~Manifold(local_78);
        }
        manifold::Manifold::Manifold(this,local_88);
        manifold::Manifold::~Manifold(local_88);
        operator_delete(__src,__n);
        goto LAB_00102e7a;
      }
      if ((long)__n < 0) {
        std::__throw_bad_array_new_length();
        goto LAB_0010360b;
      }
      std::__throw_bad_alloc();
      pauVar6 = pauVar3;
      dVar13 = _LC0;
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::Manifold::Revolve(std::vector<std::vector<linalg::vec<double, 2>,
   std::allocator<linalg::vec<double, 2> > >, std::allocator<std::vector<linalg::vec<double, 2>,
   std::allocator<linalg::vec<double, 2> > > > > const&, int, double) */

Manifold * __thiscall
manifold::Manifold::Revolve(Manifold *this,vector *param_1,int param_2,double param_3)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  Vec *pVVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  double dVar10;
  void *pvVar11;
  double *pdVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 (*pauVar17) [16];
  int iVar18;
  int iVar19;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  double *pdVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  size_t sVar23;
  int iVar24;
  long lVar25;
  int iVar26;
  ulong uVar27;
  double *pdVar28;
  int iVar29;
  ulong uVar30;
  int iVar31;
  undefined1 (*pauVar32) [16];
  int iVar33;
  undefined1 (*pauVar34) [16];
  ulong uVar35;
  int iVar36;
  long *plVar37;
  ulong uVar38;
  int *piVar39;
  long in_FS_OFFSET;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined8 uVar43;
  double dVar44;
  double dVar45;
  double local_188;
  double local_158;
  int local_108;
  vector *local_e0;
  undefined1 (*local_d8) [16];
  undefined1 (*pauStack_d0) [16];
  undefined1 (*local_c8) [16];
  undefined8 *local_b8;
  undefined1 local_b0 [16];
  undefined1 local_98 [16];
  int *local_88;
  undefined1 local_78 [16];
  int *local_68;
  undefined1 local_58 [16];
  long local_48;
  long local_40;
  
  plVar37 = *(long **)param_1;
  plVar8 = *(long **)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = (undefined1 (*) [16])0x0;
  pauStack_d0 = (undefined1 (*) [16])0x0;
  local_c8 = (undefined1 (*) [16])0x0;
  if (plVar37 != plVar8) {
    dVar40 = 0.0;
    pauVar32 = (undefined1 (*) [16])0x0;
    do {
      lVar9 = *plVar37;
      uVar30 = 0;
      uVar27 = plVar37[1] - lVar9 >> 4;
      if (lVar9 != plVar37[1]) {
        do {
          pdVar20 = (double *)(lVar9 + uVar30 * 0x10);
          if (0.0 < *pdVar20 || *pdVar20 == 0.0) break;
          uVar30 = uVar30 + 1;
        } while (uVar30 < uVar27);
      }
      if (uVar30 != uVar27) {
        local_48 = 0;
        local_58 = (undefined1  [16])0x0;
        uVar27 = uVar30;
        if (local_c8 == pauVar32) {
          std::
          vector<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>,std::allocator<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>>>
          ::
          _M_realloc_insert<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>>
                    ((vector<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>,std::allocator<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>>>
                      *)&local_d8,pauVar32,local_58);
          pauVar32 = pauStack_d0;
          if ((void *)local_58._0_8_ != (void *)0x0) {
            operator_delete((void *)local_58._0_8_,local_48 - local_58._0_8_);
            pauVar32 = pauStack_d0;
          }
        }
        else {
          *(undefined8 *)pauVar32[1] = 0;
          pauStack_d0 = (undefined1 (*) [16])(pauVar32[1] + 8);
          *pauVar32 = (undefined1  [16])0x0;
          pauVar32 = pauStack_d0;
        }
        do {
          pdVar28 = (double *)*plVar37;
          pdVar20 = pdVar28 + uVar27 * 2;
          dVar45 = *pdVar20;
          dVar10 = dVar40;
          if (0.0 <= dVar45) {
            pdVar12 = *(double **)pauVar32[-1];
            if (pdVar12 == *(double **)(pauVar32[-1] + 8)) {
              std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>::
              _M_realloc_insert<linalg::vec<double,2>const&>
                        ((vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)
                         (pauVar32[-2] + 8),pdVar12,pdVar20);
              pdVar28 = (double *)*plVar37;
              pdVar20 = pdVar28 + uVar27 * 2;
              pauVar32 = pauStack_d0;
            }
            else {
              dVar45 = pdVar20[1];
              *pdVar12 = *pdVar20;
              pdVar12[1] = dVar45;
              *(double **)pauVar32[-1] = pdVar12 + 2;
            }
            dVar45 = *pdVar20;
            dVar10 = dVar45;
            if (dVar45 <= dVar40) {
              dVar10 = dVar40;
            }
          }
          dVar40 = dVar10;
          uVar38 = uVar27 + 1;
          if (uVar38 == plVar37[1] - (long)pdVar28 >> 4) {
            uVar38 = 0;
          }
          else {
            pdVar28 = pdVar28 + uVar27 * 2 + 2;
          }
          dVar10 = *pdVar28;
          if (dVar10 < 0.0 != dVar45 < 0.0) {
            puVar21 = *(undefined8 **)pauVar32[-1];
            dVar45 = ((pdVar20[1] - pdVar28[1]) * dVar10) / (dVar45 - dVar10) + pdVar28[1];
            auVar14._8_8_ = 0;
            auVar14._0_8_ = dVar45;
            local_58 = auVar14 << 0x40;
            if (puVar21 == *(undefined8 **)(pauVar32[-1] + 8)) {
              std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>::
              _M_realloc_insert<linalg::vec<double,2>>
                        ((vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)
                         (pauVar32[-2] + 8),puVar21,local_58);
              pauVar32 = pauStack_d0;
            }
            else {
              *puVar21 = 0;
              puVar21[1] = dVar45;
              *(undefined8 **)pauVar32[-1] = puVar21 + 2;
            }
          }
          uVar27 = uVar38;
        } while (uVar38 != uVar30);
      }
      plVar37 = plVar37 + 3;
    } while (plVar8 != plVar37);
    if (local_d8 != pauVar32) {
      dVar45 = _LC12;
      if (param_3 <= _LC12) {
        dVar45 = param_3;
      }
      local_108 = param_2;
      if (param_2 < 3) {
        iVar18 = Quality::circularSegments_;
        if (Quality::circularSegments_ < 1) {
          dVar40 = fmin((double)(int)(((dVar40 + dVar40) * __LC6) / Quality::circularEdgeLength_),
                        (double)(int)(_LC12 / Quality::circularAngle_));
          iVar18 = (int)(dVar40 + __LC13) - (int)(dVar40 + __LC13) % 4;
          if (iVar18 < 3) {
            iVar18 = 3;
          }
        }
        local_108 = (int)(((double)iVar18 * dVar45) / _LC12);
      }
      this_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator_new(0x198);
      pauVar32 = pauStack_d0;
      uVar16 = _LC8;
      uVar43 = _LC19;
      p_Var1 = this_00 + 8;
      *(undefined4 *)(this_00 + 0x50) = 0;
      pVVar2 = (Vec *)(this_00 + 0x10);
      *(undefined8 *)(this_00 + 0x10) = uVar43;
      *(undefined8 *)(this_00 + 0x18) = uVar43;
      uVar15 = _LC22;
      uVar43 = __LC20;
      *(undefined8 *)(this_00 + 8) = uVar16;
      *(undefined8 *)(this_00 + 0x20) = uVar43;
      *(undefined8 *)(this_00 + 0x28) = uVar15;
      uVar43 = _LC22;
      *(undefined ***)this_00 = &PTR___Sp_counted_ptr_inplace_0010c268;
      uVar15 = _LC25;
      *(undefined8 *)(this_00 + 0x58) = 0;
      *(undefined8 *)(this_00 + 0x30) = uVar43;
      *(undefined8 *)(this_00 + 0x38) = uVar43;
      dVar40 = _LC24;
      *(undefined8 *)(this_00 + 0xd0) = uVar15;
      *(undefined8 *)(this_00 + 0x70) = 0;
      *(double *)(this_00 + 0x40) = dVar40;
      *(double *)(this_00 + 0x48) = dVar40;
      *(undefined1 (*) [16])(this_00 + 0x60) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this_00 + 0x78) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this_00 + 0x90) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this_00 + 0xa8) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this_00 + 0xc0) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this_00 + 0xe0) = (undefined1  [16])0x0;
      *(undefined8 *)(this_00 + 0x88) = 0;
      *(undefined8 *)(this_00 + 0xa0) = 0;
      *(undefined8 *)(this_00 + 0xb8) = 0;
      *(undefined8 *)(this_00 + 0xd8) = 0;
      *(undefined4 *)(this_00 + 0xf8) = 0;
      *(undefined8 *)(this_00 + 0x100) = 0;
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this_00 + 0x108) = this_00 + 0xf8;
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this_00 + 0x110) = this_00 + 0xf8;
      *(undefined8 *)(this_00 + 0x118) = 0;
      *(undefined8 *)(this_00 + 0x120) = 0;
      *(undefined1 (*) [16])(this_00 + 0x128) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this_00 + 0x140) = (undefined1  [16])0x0;
      bVar13 = dVar45 == _LC12;
      *(undefined1 (*) [16])(this_00 + 0x158) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this_00 + 0x170) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
      local_b0 = (undefined1  [16])0x0;
      local_98 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      *(undefined8 *)(this_00 + 0x138) = 0;
      *(undefined8 *)(this_00 + 0x150) = 0;
      *(undefined8 *)(this_00 + 0x168) = 0;
      *(undefined8 *)(this_00 + 0x180) = 0;
      local_b8 = (undefined8 *)0x0;
      local_88 = (int *)0x0;
      local_68 = (int *)0x0;
      if (bVar13) {
        iVar18 = local_108;
        if (pauStack_d0 != local_d8) {
LAB_001039b4:
          pauVar34 = local_d8;
          do {
            pdVar20 = *(double **)*pauVar34;
            pdVar28 = *(double **)(*pauVar34 + 8);
            if (pdVar28 != pdVar20) {
              iVar31 = 0;
              iVar26 = 0;
              do {
                while (*pdVar20 <= 0.0) {
                  pdVar20 = pdVar20 + 2;
                  iVar31 = iVar31 + 1;
                  if (pdVar20 == pdVar28) goto LAB_00103a24;
                }
                pdVar20 = pdVar20 + 2;
                iVar26 = iVar26 + 1;
              } while (pdVar20 != pdVar28);
LAB_00103a24:
              uVar27 = 0;
              do {
                iVar36 = (int)*(undefined8 *)(this_00 + 0x60);
                if (dVar45 != _LC12) {
                  local_58._0_4_ = iVar36;
                  if ((int *)local_98._8_8_ == local_88) {
                    std::vector<int,std::allocator<int>>::_M_realloc_insert<int>
                              ((vector<int,std::allocator<int>> *)local_98,local_98._8_8_,local_58);
                  }
                  else {
                    *(int *)local_98._8_8_ = iVar36;
                    local_98._8_8_ = (int *)(local_98._8_8_ + 4);
                  }
                }
                lVar9 = *(long *)*pauVar34;
                lVar25 = uVar27 * 0x10;
                dVar10 = *(double *)(lVar9 + lVar25);
                dVar40 = *(double *)(lVar9 + 8 + lVar25);
                if (uVar27 == 0) {
                  dVar4 = *(double *)(*(long *)(*pauVar34 + 8) + -0x10);
                  iVar29 = iVar26 * iVar18 + iVar31;
                }
                else {
                  dVar4 = *(double *)(lVar9 + -0x10 + lVar25);
                  iVar29 = 0;
                }
                iVar24 = -1;
                if (dVar4 != 0.0) {
                  iVar24 = -iVar18;
                }
                if (0 < iVar18) {
                  iVar24 = iVar29 + iVar36 + iVar24;
                  iVar29 = 0;
                  do {
                    dVar44 = (double)iVar29 * (dVar45 / (double)local_108);
                    dVar41 = _LC4 + dVar44;
                    if (_LC3 < (double)((ulong)dVar41 & __LC2)) {
                      local_188 = sin(dVar41);
                      local_188 = local_188 * dVar10;
                      dVar41 = (double)((ulong)dVar44 & __LC2);
                      if (dVar41 <= _LC3) goto joined_r0x00103bf9;
                      dVar41 = sin(dVar44);
                      goto LAB_00103c68;
                    }
                    if (dVar41 < 0.0) {
                      local_158 = _LC0;
                      dVar41 = remquo((double)((ulong)dVar41 ^ (ulong)_LC0),_LC4,(int *)local_58);
                      iVar19 = (int)local_58._0_4_ % 4;
                      if (iVar19 == 2) {
                        local_188 = sin((dVar41 * __LC6) / __LC7);
                      }
                      else if (iVar19 == 3) {
                        local_188 = cos((dVar41 * __LC6) / __LC7);
                      }
                      else if ((local_58 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
                        dVar41 = sin((dVar41 * __LC6) / __LC7);
                        local_188 = (double)((ulong)dVar41 ^ (ulong)_LC0);
                      }
                      else {
                        local_188 = _LC0;
                        if (iVar19 == 1) {
                          dVar41 = cos((dVar41 * __LC6) / __LC7);
                          local_188 = (double)((ulong)dVar41 ^ (ulong)_LC0);
                        }
                      }
                      local_188 = local_188 * dVar10;
LAB_001043fb:
                      dVar44 = remquo((double)((ulong)dVar44 ^ (ulong)local_158),_LC4,
                                      (int *)local_58);
                      iVar19 = (int)local_58._0_4_ % 4;
                      if (iVar19 == 2) {
LAB_00104640:
                        dVar41 = sin((dVar44 * __LC6) / __LC7);
                      }
                      else if (iVar19 == 3) {
LAB_00103c4e:
                        dVar41 = cos((dVar44 * __LC6) / __LC7);
                      }
                      else if ((local_58 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
                        dVar41 = sin((dVar44 * __LC6) / __LC7);
                        dVar41 = (double)((ulong)dVar41 ^ (ulong)local_158);
                      }
                      else {
                        dVar41 = _LC0;
                        if (iVar19 == 1) {
                          dVar41 = cos((dVar44 * __LC6) / __LC7);
                          dVar41 = (double)((ulong)dVar41 ^ (ulong)local_158);
                        }
                      }
                    }
                    else {
                      dVar42 = remquo((double)((ulong)dVar41 & __LC2),_LC4,(int *)local_58);
                      dVar41 = (double)((ulong)dVar44 & __LC2);
                      iVar19 = (int)local_58._0_4_ % 4;
                      if (iVar19 == 2) {
                        dVar42 = sin((dVar42 * __LC6) / __LC7);
                      }
                      else {
                        if (iVar19 != 3) {
                          if ((local_58 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
                            local_188 = sin((dVar42 * __LC6) / __LC7);
                            local_188 = local_188 * dVar10;
                          }
                          else if (iVar19 == 1) {
                            local_188 = cos((dVar42 * __LC6) / __LC7);
                            local_188 = local_188 * dVar10;
                          }
                          else {
                            local_188 = dVar10 * 0.0;
                          }
                          goto joined_r0x00103bf9;
                        }
                        dVar42 = cos((dVar42 * __LC6) / __LC7);
                      }
                      local_188 = (double)((ulong)dVar42 ^ (ulong)_LC0) * dVar10;
joined_r0x00103bf9:
                      local_158 = _LC0;
                      if (dVar44 < 0.0) goto LAB_001043fb;
                      dVar44 = remquo(dVar41,_LC4,(int *)local_58);
                      iVar19 = (int)local_58._0_4_ % 4;
                      if (iVar19 != 2) {
                        if (iVar19 == 3) {
                          dVar41 = cos((dVar44 * __LC6) / __LC7);
                          dVar41 = (double)((ulong)dVar41 ^ (ulong)_LC0);
                          goto LAB_00103c68;
                        }
                        if ((local_58 & (undefined1  [16])0x3) != (undefined1  [16])0x0) {
                          if (iVar19 != 1) {
                            dVar41 = 0.0;
                            goto LAB_00103c68;
                          }
                          goto LAB_00103c4e;
                        }
                        goto LAB_00104640;
                      }
                      dVar41 = sin((dVar44 * __LC6) / __LC7);
                      dVar41 = (double)((ulong)dVar41 ^ (ulong)_LC0);
                    }
LAB_00103c68:
                    uVar30 = *(ulong *)(this_00 + 0x60);
                    uVar38 = *(ulong *)(this_00 + 0x68);
                    if (uVar30 < uVar38) {
                      *(ulong *)(this_00 + 0x60) = uVar30 + 1;
                      pdVar20 = (double *)(*(long *)(this_00 + 0x58) + uVar30 * 0x18);
                      *pdVar20 = local_188;
                      pdVar20[1] = dVar41 * dVar10;
                      pdVar20[2] = dVar40;
                    }
                    else {
                      if (uVar38 == 0) {
                        sVar23 = 0xc00;
                        uVar35 = 0x80;
LAB_001045bb:
                        puVar21 = (undefined8 *)malloc(sVar23);
                        puVar22 = *(undefined8 **)(this_00 + 0x58);
                        if (uVar30 == 0) {
LAB_001045fb:
                          if (puVar22 != (undefined8 *)0x0) goto LAB_001047e9;
                        }
                        else {
                          sVar23 = uVar30 * 0x18;
                          if ((long)sVar23 < 0x19) {
                            if (sVar23 != 0x18) goto LAB_001045fb;
                            uVar43 = puVar22[1];
                            *puVar21 = *puVar22;
                            puVar21[1] = uVar43;
                            puVar21[2] = puVar22[2];
                          }
                          else {
                            puVar21 = (undefined8 *)memmove(puVar21,puVar22,sVar23);
                          }
LAB_001047e9:
                          free(puVar22);
                          uVar30 = *(ulong *)(this_00 + 0x60);
                        }
                        *(undefined8 **)(this_00 + 0x58) = puVar21;
                        *(ulong *)(this_00 + 0x68) = uVar35;
                      }
                      else {
                        uVar35 = uVar38 * 2;
                        if (uVar38 < uVar35) {
                          sVar23 = uVar38 * 0x30;
                          goto LAB_001045bb;
                        }
                        puVar21 = *(undefined8 **)(this_00 + 0x58);
                      }
                      *(ulong *)(this_00 + 0x60) = uVar30 + 1;
                      pdVar20 = (double *)(puVar21 + uVar30 * 3);
                      *pdVar20 = local_188;
                      pdVar20[1] = dVar41 * dVar10;
                      pdVar20[2] = dVar40;
                    }
                    puVar21 = local_b8;
                    if (dVar45 == _LC12) {
                      iVar19 = local_108;
                      if (iVar29 != 0) goto LAB_001042c8;
LAB_00104216:
                      iVar19 = iVar19 + -1;
                      uVar43 = CONCAT44(iVar29 + iVar24,iVar19 + iVar24);
                      if (dVar10 <= 0.0) goto LAB_00103d03;
                      iVar33 = iVar24;
                      if (dVar4 != 0.0) {
                        iVar33 = iVar19 + iVar24;
                      }
                      uVar30 = local_b0._0_8_;
                      puVar22 = local_b8;
                      uVar38 = local_b0._8_8_;
                      if ((ulong)local_b0._0_8_ < (ulong)local_b0._8_8_) goto LAB_0010428b;
                      if (local_b0._8_8_ == 0) {
                        sVar23 = 0x600;
                        uVar35 = 0x80;
                      }
                      else {
                        uVar35 = local_b0._8_8_ * 2;
                        if (uVar35 <= (ulong)local_b0._8_8_) goto LAB_0010428b;
                        sVar23 = local_b0._8_8_ * 0x18;
                      }
                      puVar22 = (undefined8 *)malloc(sVar23);
                      uVar38 = uVar35;
                      if (uVar30 == 0) {
LAB_0010458d:
                        if (puVar21 == (undefined8 *)0x0) goto LAB_0010428b;
                      }
                      else {
                        sVar23 = uVar30 * 0xc;
                        if ((long)sVar23 < 0xd) {
                          if (sVar23 != 0xc) goto LAB_0010458d;
                          *puVar22 = *puVar21;
                          *(undefined4 *)(puVar22 + 1) = *(undefined4 *)(puVar21 + 1);
                        }
                        else {
                          puVar22 = (undefined8 *)memmove(puVar22,puVar21,sVar23);
                        }
                      }
                      free(puVar21);
                      uVar30 = local_b0._0_8_;
LAB_0010428b:
                      local_b0._8_8_ = uVar38;
                      local_b8 = puVar22;
                      local_b0._0_8_ = uVar30 + 1;
                      puVar21 = (undefined8 *)((long)local_b8 + uVar30 * 0xc);
                      *(int *)(puVar21 + 1) = iVar33;
                      iVar33 = iVar29 + iVar36;
                      *puVar21 = CONCAT44(iVar19 + iVar36,iVar29 + iVar36);
                      if (0.0 < dVar4) goto LAB_00103d2d;
                      goto LAB_00103d6a;
                    }
                    if (iVar29 != 0) {
LAB_001042c8:
                      iVar19 = iVar29;
                      goto LAB_00104216;
                    }
                    if (iVar18 == 1) goto LAB_00104870;
                    iVar29 = 1;
                    while (dVar10 <= 0.0) {
                      uVar43 = CONCAT44(iVar29 + iVar24,iVar29 + -1 + iVar24);
LAB_00103d03:
                      if (0.0 < dVar4) {
                        iVar33 = iVar36;
                        if (dVar10 != 0.0) {
                          iVar33 = iVar29 + iVar36;
                        }
LAB_00103d2d:
                        puVar21 = local_b8;
                        uVar30 = local_b0._0_8_;
                        puVar22 = local_b8;
                        uVar38 = local_b0._8_8_;
                        if ((ulong)local_b0._8_8_ <= (ulong)local_b0._0_8_) {
                          if (local_b0._8_8_ == 0) {
                            sVar23 = 0x600;
                            uVar35 = 0x80;
                          }
                          else {
                            uVar35 = local_b0._8_8_ * 2;
                            if (uVar35 <= (ulong)local_b0._8_8_) goto LAB_00103d4e;
                            sVar23 = local_b0._8_8_ * 0x18;
                          }
                          puVar22 = (undefined8 *)malloc(sVar23);
                          uVar38 = uVar35;
                          if (uVar30 == 0) {
LAB_001044e3:
                            if (puVar21 == (undefined8 *)0x0) goto LAB_00103d4e;
                          }
                          else {
                            sVar23 = uVar30 * 0xc;
                            if ((long)sVar23 < 0xd) {
                              if (sVar23 != 0xc) goto LAB_001044e3;
                              *puVar22 = *puVar21;
                              *(undefined4 *)(puVar22 + 1) = *(undefined4 *)(puVar21 + 1);
                            }
                            else {
                              puVar22 = (undefined8 *)memmove(puVar22,puVar21,sVar23);
                            }
                          }
                          free(puVar21);
                          uVar30 = local_b0._0_8_;
                        }
LAB_00103d4e:
                        local_b0._8_8_ = uVar38;
                        local_b8 = puVar22;
                        local_b0._0_8_ = uVar30 + 1;
                        puVar21 = (undefined8 *)((long)local_b8 + uVar30 * 0xc);
                        *(int *)(puVar21 + 1) = iVar33;
                        *puVar21 = uVar43;
                      }
LAB_00103d6a:
                      iVar29 = iVar29 + 1;
                      if (iVar29 == iVar18) goto LAB_00103d86;
                    }
                  } while( true );
                }
LAB_00103d86:
                if (dVar45 != _LC12) {
LAB_00104870:
                  local_58._0_4_ = *(int *)(this_00 + 0x60) + -1;
                  if ((int *)local_78._8_8_ == local_68) {
                    std::vector<int,std::allocator<int>>::_M_realloc_insert<int>
                              ((vector<int,std::allocator<int>> *)local_78,local_78._8_8_,local_58);
                  }
                  else {
                    *(int *)local_78._8_8_ = *(int *)(this_00 + 0x60) + -1;
                    local_78._8_8_ = (int *)(local_78._8_8_ + 4);
                  }
                }
                uVar27 = uVar27 + 1;
              } while (uVar27 < (ulong)(*(long *)(*pauVar34 + 8) - *(long *)*pauVar34 >> 4));
            }
            pauVar34 = (undefined1 (*) [16])(pauVar34[1] + 8);
          } while (pauVar32 != pauVar34);
          if (dVar45 != _LC12) {
            dVar40 = *(double *)(this_00 + 0x40);
            goto LAB_00104bae;
          }
        }
      }
      else {
        iVar18 = local_108 + 1;
        dVar40 = _LC24;
        if (pauStack_d0 != local_d8) goto LAB_001039b4;
LAB_00104bae:
        local_e0 = (vector *)local_58;
        manifold::Triangulate(local_e0,dVar40);
        uVar43 = local_58._8_8_;
        if (local_58._8_8_ != local_58._0_8_) {
          uVar15 = local_98._0_8_;
          piVar39 = (int *)local_58._0_8_;
          do {
            puVar21 = local_b8;
            uVar5 = *(undefined4 *)(uVar15 + (long)*piVar39 * 4);
            uVar6 = *(undefined4 *)(uVar15 + (long)piVar39[1] * 4);
            uVar27 = local_b0._0_8_;
            uVar7 = *(undefined4 *)(uVar15 + (long)piVar39[2] * 4);
            puVar22 = local_b8;
            uVar30 = local_b0._8_8_;
            if ((ulong)local_b0._8_8_ <= (ulong)local_b0._0_8_) {
              if (local_b0._8_8_ == 0) {
                sVar23 = 0x600;
                uVar38 = 0x80;
              }
              else {
                uVar38 = local_b0._8_8_ * 2;
                if (uVar38 <= (ulong)local_b0._8_8_) goto LAB_00104c06;
                sVar23 = local_b0._8_8_ * 0x18;
              }
              puVar22 = (undefined8 *)malloc(sVar23);
              uVar30 = uVar38;
              if (uVar27 == 0) {
LAB_00104cbb:
                if (puVar21 == (undefined8 *)0x0) goto LAB_00104c06;
              }
              else {
                sVar23 = uVar27 * 0xc;
                if ((long)sVar23 < 0xd) {
                  if (sVar23 != 0xc) goto LAB_00104cbb;
                  *puVar22 = *puVar21;
                  *(undefined4 *)(puVar22 + 1) = *(undefined4 *)(puVar21 + 1);
                }
                else {
                  memmove(puVar22,puVar21,sVar23);
                }
              }
              free(puVar21);
              uVar27 = local_b0._0_8_;
            }
LAB_00104c06:
            local_b0._8_8_ = uVar30;
            local_b8 = puVar22;
            piVar39 = piVar39 + 3;
            local_b0._0_8_ = uVar27 + 1;
            puVar21 = (undefined8 *)((long)local_b8 + uVar27 * 0xc);
            *(undefined4 *)(puVar21 + 1) = uVar7;
            *puVar21 = CONCAT44(uVar6,uVar5);
          } while ((int *)uVar43 != piVar39);
          uVar43 = local_58._8_8_;
          if (local_58._8_8_ != local_58._0_8_) {
            uVar15 = local_78._0_8_;
            piVar39 = (int *)local_58._0_8_;
            do {
              puVar21 = local_b8;
              uVar5 = *(undefined4 *)(uVar15 + (long)piVar39[2] * 4);
              uVar6 = *(undefined4 *)(uVar15 + (long)piVar39[1] * 4);
              uVar27 = local_b0._0_8_;
              uVar7 = *(undefined4 *)(uVar15 + (long)*piVar39 * 4);
              puVar22 = local_b8;
              uVar30 = local_b0._8_8_;
              if ((ulong)local_b0._8_8_ <= (ulong)local_b0._0_8_) {
                if (local_b0._8_8_ == 0) {
                  sVar23 = 0x600;
                  uVar38 = 0x80;
                }
                else {
                  uVar38 = local_b0._8_8_ * 2;
                  if (uVar38 <= (ulong)local_b0._8_8_) goto LAB_00104d4e;
                  sVar23 = local_b0._8_8_ * 0x18;
                }
                puVar22 = (undefined8 *)malloc(sVar23);
                uVar30 = uVar38;
                if (uVar27 == 0) {
LAB_00104dff:
                  if (puVar21 == (undefined8 *)0x0) goto LAB_00104d4e;
                }
                else {
                  sVar23 = uVar27 * 0xc;
                  if ((long)sVar23 < 0xd) {
                    if (sVar23 != 0xc) goto LAB_00104dff;
                    *puVar22 = *puVar21;
                    *(undefined4 *)(puVar22 + 1) = *(undefined4 *)(puVar21 + 1);
                  }
                  else {
                    memmove(puVar22,puVar21,sVar23);
                  }
                }
                free(puVar21);
                uVar27 = local_b0._0_8_;
              }
LAB_00104d4e:
              local_b0._8_8_ = uVar30;
              local_b8 = puVar22;
              piVar39 = piVar39 + 3;
              local_b0._0_8_ = uVar27 + 1;
              puVar21 = (undefined8 *)((long)local_b8 + uVar27 * 0xc);
              *(undefined4 *)(puVar21 + 1) = uVar7;
              *puVar21 = CONCAT44(uVar6,uVar5);
            } while ((int *)uVar43 != piVar39);
          }
        }
        if ((int *)local_58._0_8_ != (int *)0x0) {
          operator_delete((void *)local_58._0_8_,local_48 - local_58._0_8_);
        }
      }
      local_e0 = (vector *)local_58;
      manifold::Manifold::Impl::CreateHalfedges(pVVar2);
      manifold::Manifold::Impl::Finish();
      manifold::Manifold::Impl::InitializeOriginal(SUB81(pVVar2,0));
      manifold::Manifold::Impl::CreateFaces();
      local_58._8_8_ = this_00;
      local_58._0_8_ = pVVar2;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      }
      manifold::Manifold::Manifold(this,local_e0);
      uVar43 = local_58._8_8_;
      if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_58._8_8_ !=
          (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var3 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_58._8_8_ + 8);
        if (*(long *)(local_58._8_8_ + 8) == 0x100000001) {
          *(undefined8 *)(local_58._8_8_ + 8) = 0;
          (**(code **)(*(long *)local_58._8_8_ + 0x10))(local_58._8_8_);
          (**(code **)(*(long *)uVar43 + 0x18))(uVar43);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar18 = *(int *)p_Var3;
            *(int *)p_Var3 = *(int *)p_Var3 + -1;
            UNLOCK();
          }
          else {
            iVar18 = *(int *)(local_58._8_8_ + 8);
            *(int *)(local_58._8_8_ + 8) = iVar18 + -1;
          }
          if (iVar18 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                      ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_58._8_8_);
          }
        }
      }
      if ((void *)local_78._0_8_ != (void *)0x0) {
        operator_delete((void *)local_78._0_8_,(long)local_68 - local_78._0_8_);
      }
      if ((void *)local_98._0_8_ != (void *)0x0) {
        operator_delete((void *)local_98._0_8_,(long)local_88 - local_98._0_8_);
      }
      if (local_b8 != (undefined8 *)0x0) {
        free(local_b8);
      }
      if (*(long *)(this_00 + 8) == 0x100000001) {
        *(undefined8 *)(this_00 + 8) = 0;
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        (**(code **)(*(long *)this_00 + 0x18))(this_00);
        pauVar32 = local_d8;
        pauVar34 = pauStack_d0;
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar18 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar18 = *(int *)(this_00 + 8);
          *(int *)(this_00 + 8) = iVar18 + -1;
        }
        pauVar32 = local_d8;
        pauVar34 = pauStack_d0;
        if (iVar18 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
          pauVar32 = local_d8;
          pauVar34 = pauStack_d0;
        }
      }
      goto joined_r0x00103f5b;
    }
  }
  manifold::Manifold::Invalid();
  pauVar32 = local_d8;
  pauVar34 = pauStack_d0;
joined_r0x00103f5b:
  for (; pauVar17 = pauStack_d0, pauStack_d0 != pauVar32;
      pauVar32 = (undefined1 (*) [16])(pauVar32[1] + 8)) {
    pvVar11 = *(void **)*pauVar32;
    pauStack_d0 = pauVar34;
    if (pvVar11 != (void *)0x0) {
      operator_delete(pvVar11,*(long *)pauVar32[1] - (long)pvVar11);
    }
    pauVar34 = pauStack_d0;
    pauStack_d0 = pauVar17;
  }
  pauStack_d0 = pauVar34;
  if (local_d8 != (undefined1 (*) [16])0x0) {
    operator_delete(local_d8,(long)local_c8 - (long)local_d8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Compose(std::vector<manifold::Manifold, std::allocator<manifold::Manifold> >
   const&) */

Manifold * __thiscall manifold::Manifold::Compose(Manifold *this,vector *param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 *local_48;
  long local_40;
  
  puVar7 = *(undefined8 **)param_1;
  puVar3 = *(undefined8 **)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined8 *)0x0;
joined_r0x00105005:
  if (puVar3 != puVar7) {
    do {
      (*(code *)**(undefined8 **)*puVar7)(local_68);
      if ((undefined8 *)local_58._8_8_ == local_48) {
        std::
        vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
        ::_M_realloc_insert<std::shared_ptr<manifold::CsgLeafNode>>
                  ((vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
                    *)local_58,local_58._8_8_,local_68);
      }
      else {
        *(undefined8 *)(local_58._8_8_ + 8) = 0;
        *(undefined8 *)local_58._8_8_ = local_68._0_8_;
        *(undefined8 *)(local_58._8_8_ + 8) = local_68._8_8_;
        local_58._8_8_ = (undefined8 *)(local_58._8_8_ + 0x10);
        local_68 = (undefined1  [16])0x0;
      }
      uVar4 = local_68._8_8_;
      if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_68._8_8_ !=
          (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var1 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_68._8_8_ + 8);
        if (*(long *)(local_68._8_8_ + 8) == 0x100000001) {
          *(undefined8 *)(local_68._8_8_ + 8) = 0;
          (**(code **)(*(long *)local_68._8_8_ + 0x10))();
          (**(code **)(*(long *)uVar4 + 0x18))();
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar5 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar5 = *(int *)(local_68._8_8_ + 8);
            *(int *)(local_68._8_8_ + 8) = iVar5 + -1;
          }
          if (iVar5 == 1) goto LAB_001050ae;
        }
      }
      puVar7 = puVar7 + 2;
      if (puVar3 == puVar7) break;
    } while( true );
  }
  manifold::CsgLeafNode::Compose((vector *)local_78);
  local_68._0_8_ = local_78._0_8_;
  local_68._8_8_ = local_78._8_8_;
  local_78 = (undefined1  [16])0x0;
  manifold::Manifold::Manifold(this,local_68);
  uVar4 = local_68._8_8_;
  if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_68._8_8_ !=
      (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_68._8_8_ + 8);
    if (*(long *)(local_68._8_8_ + 8) == 0x100000001) {
      *(undefined8 *)(local_68._8_8_ + 8) = 0;
      (**(code **)(*(long *)local_68._8_8_ + 0x10))(local_68._8_8_);
      (**(code **)(*(long *)uVar4 + 0x18))(uVar4);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar5 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar5 = *(int *)(local_68._8_8_ + 8);
        *(int *)(local_68._8_8_ + 8) = iVar5 + -1;
      }
      if (iVar5 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                  ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_68._8_8_);
      }
    }
  }
  uVar4 = local_78._8_8_;
  if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_78._8_8_ !=
      (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_78._8_8_ + 8);
    if (*(long *)(local_78._8_8_ + 8) == 0x100000001) {
      *(undefined8 *)(local_78._8_8_ + 8) = 0;
      (**(code **)(*(long *)local_78._8_8_ + 0x10))(local_78._8_8_);
      (**(code **)(*(long *)uVar4 + 0x18))(uVar4);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar5 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar5 = *(int *)(local_78._8_8_ + 8);
        *(int *)(local_78._8_8_ + 8) = iVar5 + -1;
      }
      if (iVar5 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                  ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_78._8_8_);
      }
    }
  }
  uVar4 = local_58._8_8_;
  pvVar6 = (void *)local_58._0_8_;
  if (local_58._8_8_ == local_58._0_8_) goto LAB_001051f5;
  do {
    while (p_Var1 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar6 + 8),
          p_Var1 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var2 = p_Var1 + 8;
      if (*(long *)(p_Var1 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var1 + 8) = 0;
        (**(code **)(*(long *)p_Var1 + 0x10))(p_Var1);
        (**(code **)(*(long *)p_Var1 + 0x18))(p_Var1);
        break;
      }
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar5 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
      }
      else {
        iVar5 = *(int *)(p_Var1 + 8);
        *(int *)(p_Var1 + 8) = iVar5 + -1;
      }
      if (iVar5 != 1) break;
      pvVar6 = (void *)((long)pvVar6 + 0x10);
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var1);
      if ((void *)uVar4 == pvVar6) goto LAB_001051f0;
    }
    pvVar6 = (void *)((long)pvVar6 + 0x10);
  } while ((void *)uVar4 != pvVar6);
LAB_001051f0:
LAB_001051f5:
  if ((void *)local_58._0_8_ != (void *)0x0) {
    operator_delete((void *)local_58._0_8_,(long)local_48 - local_58._0_8_);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001050ae:
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
            ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_68._8_8_);
  puVar7 = puVar7 + 2;
  goto joined_r0x00105005;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::Manifold::Decompose() const */

undefined1 (*) [16] manifold::Manifold::Decompose(void)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  Impl *pIVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this;
  long lVar19;
  undefined4 *__dest;
  ulong uVar20;
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  int *piVar23;
  int *piVar24;
  undefined8 *puVar25;
  undefined4 *__src;
  long lVar26;
  size_t sVar27;
  Manifold *in_RSI;
  undefined1 (*in_RDI) [16];
  int *piVar28;
  long lVar29;
  ulong uVar30;
  int iVar31;
  ulong uVar32;
  Manifold *pMVar33;
  long in_FS_OFFSET;
  bool bVar34;
  Vec *local_128;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_120;
  Impl *local_118;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_110;
  Manifold local_108 [16];
  undefined1 local_f8 [16];
  long local_e8;
  undefined1 local_d8 [16];
  Manifold *local_c8;
  int *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  int *local_98;
  undefined1 local_90 [16];
  void *local_78 [3];
  void *local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar17 = manifold::Manifold::NumVert();
  UnionFind<int,unsigned_char>::UnionFind((UnionFind<int,unsigned_char> *)local_78,iVar17);
  manifold::Manifold::GetCsgLeafNode();
  manifold::CsgLeafNode::GetImpl();
  piVar24 = *(int **)(local_128 + 0x60);
  piVar23 = piVar24 + *(long *)(local_128 + 0x68) * 3;
joined_r0x00105379:
  if (piVar24 != piVar23) {
    do {
      iVar17 = *piVar24;
      iVar18 = piVar24[1];
      if (iVar17 < iVar18) {
        lVar26 = (long)iVar17;
        if (*(char *)((long)local_60 + lVar26) == '\0') {
          *(char *)((long)local_60 + lVar26) = '\x01';
        }
        lVar29 = (long)iVar18;
        if (*(char *)((long)local_60 + lVar29) == '\0') {
          *(char *)((long)local_60 + lVar29) = '\x01';
        }
        piVar28 = (int *)((long)local_78[0] + lVar26 * 4);
        iVar31 = *piVar28;
        if (iVar17 != iVar31) {
          do {
            iVar17 = *(int *)((long)local_78[0] + (long)iVar31 * 4);
            lVar26 = (long)iVar17;
            *piVar28 = iVar17;
            piVar28 = (int *)((long)local_78[0] + lVar26 * 4);
            iVar31 = *piVar28;
          } while (iVar31 != iVar17);
        }
        piVar28 = (int *)((long)local_78[0] + lVar29 * 4);
        iVar17 = *piVar28;
        if (iVar18 != iVar17) {
          do {
            iVar18 = *(int *)((long)local_78[0] + (long)iVar17 * 4);
            lVar29 = (long)iVar18;
            *piVar28 = iVar18;
            piVar28 = (int *)((long)local_78[0] + lVar29 * 4);
            iVar17 = *piVar28;
          } while (iVar17 != iVar18);
        }
        iVar17 = (int)lVar26;
        if (iVar18 != iVar17) goto code_r0x0010541e;
      }
      piVar24 = piVar24 + 3;
      if (piVar23 == piVar24) break;
    } while( true );
  }
  local_e8 = 0;
  local_f8 = (undefined1  [16])0x0;
  iVar17 = UnionFind<int,unsigned_char>::connectedComponents
                     ((UnionFind<int,unsigned_char> *)local_78,(vector *)local_f8);
  if (iVar17 == 1) {
    pMVar33 = (Manifold *)operator_new(0x10);
    manifold::Manifold::Manifold(pMVar33);
    manifold::Manifold::operator=(pMVar33,in_RSI);
    *(Manifold **)*in_RDI = pMVar33;
    *(Manifold **)(*in_RDI + 8) = pMVar33 + 0x10;
    *(Manifold **)in_RDI[1] = pMVar33 + 0x10;
    __src = (undefined4 *)local_f8._0_8_;
    goto LAB_001057ec;
  }
  __src = (undefined4 *)local_f8._0_8_;
  sVar27 = local_f8._8_8_ - local_f8._0_8_;
  if (sVar27 == 0) {
    __dest = (undefined4 *)0x0;
    iVar18 = manifold::Manifold::NumVert();
    local_c8 = (Manifold *)0x0;
    local_d8 = (undefined1  [16])0x0;
    if (iVar17 < 1) {
      *(undefined8 *)in_RDI[1] = 0;
      *in_RDI = (undefined1  [16])0x0;
      goto LAB_001057ec;
    }
LAB_001054de:
    local_c8 = (Manifold *)0x0;
    local_d8 = (undefined1  [16])0x0;
    uVar30 = (ulong)iVar18;
    iVar18 = 0;
    do {
      this = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator_new(0x198);
      uVar14 = _LC8;
      uVar13 = _UNK_0010c328;
      uVar12 = _LC24;
      uVar11 = _UNK_0010c318;
      uVar10 = __LC21;
      uVar9 = _LC22;
      uVar7 = __LC20;
      uVar6 = _UNK_0010c2f8;
      p_Var1 = this + 8;
      *(undefined8 *)(this + 0x10) = _LC19;
      *(undefined8 *)(this + 0x18) = uVar6;
      *(undefined8 *)(this + 8) = uVar14;
      *(undefined ***)this = &PTR___Sp_counted_ptr_inplace_0010c268;
      uVar6 = _LC25;
      *(undefined4 *)(this + 0x50) = 0;
      *(undefined8 *)(this + 0xd0) = uVar6;
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x108) = this + 0xf8;
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x110) = this + 0xf8;
      *(undefined8 *)(this + 0x58) = 0;
      *(undefined8 *)(this + 0x70) = 0;
      *(undefined8 *)(this + 0x88) = 0;
      *(undefined8 *)(this + 0xa0) = 0;
      *(undefined8 *)(this + 0xb8) = 0;
      *(undefined8 *)(this + 0xd8) = 0;
      *(undefined4 *)(this + 0xf8) = 0;
      *(undefined8 *)(this + 0x100) = 0;
      *(undefined8 *)(this + 0x118) = 0;
      *(undefined8 *)(this + 0x20) = uVar7;
      *(undefined8 *)(this + 0x28) = uVar9;
      *(undefined8 *)(this + 0x30) = uVar10;
      *(undefined8 *)(this + 0x38) = uVar11;
      *(undefined8 *)(this + 0x40) = uVar12;
      *(undefined8 *)(this + 0x48) = uVar13;
      *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this + 0xc0) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this + 0xe0) = (undefined1  [16])0x0;
      *(undefined8 *)(this + 0x120) = 0;
      *(undefined8 *)(this + 0x138) = 0;
      uVar6 = *(undefined8 *)(local_128 + 0x30);
      uVar7 = *(undefined8 *)(local_128 + 0x38);
      *(undefined8 *)(this + 0x150) = 0;
      *(undefined8 *)(this + 0x168) = 0;
      *(undefined8 *)(this + 0x180) = 0;
      local_b8 = (int *)0x0;
      uStack_a8 = 0;
      *(undefined1 (*) [16])(this + 0x128) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this + 0x140) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this + 0x158) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this + 0x170) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this + 0x188) = (undefined1  [16])0x0;
      *(undefined8 *)(this + 0x40) = uVar6;
      *(undefined8 *)(this + 0x48) = uVar7;
      if (uVar30 == 0) {
        *(undefined8 *)(this + 0x60) = 0;
        local_b0 = 0;
      }
      else {
        piVar23 = (int *)malloc(uVar30 * 4);
        uVar20 = 0;
        piVar24 = piVar23;
        do {
          if (__dest[(int)uVar20] == iVar18) {
            *piVar24 = (int)uVar20;
            piVar24 = piVar24 + 1;
          }
          uVar20 = uVar20 + 1;
        } while (uVar30 != uVar20);
        uVar32 = (ulong)(int)((long)piVar24 - (long)piVar23 >> 2);
        uVar20 = uVar32 * 2;
        local_b8 = piVar23;
        uStack_a8 = uVar30;
        if (uVar32 == 0) {
          piVar24 = (int *)0x0;
          *(undefined8 *)(this + 0x60) = 0;
          local_b0 = 0;
          if (uVar30 != 0) {
LAB_001060af:
            if (piVar23 != (int *)0x0) goto LAB_00105bca;
            goto LAB_00105bd2;
          }
LAB_00106121:
          lVar26 = local_b0 * 4;
LAB_00105bee:
          puVar25 = *(undefined8 **)(this + 0x58);
          lVar29 = *(long *)(local_128 + 0x48);
          if (lVar26 == 0) goto LAB_001056be;
        }
        else {
          local_b0 = uVar30;
          pauVar21 = (undefined1 (*) [16])malloc(uVar32 * 0x18);
          uVar16 = local_b0;
          *(ulong *)(this + 0x68) = uVar32;
          *(undefined1 (**) [16])(this + 0x58) = pauVar21;
          pauVar22 = pauVar21;
          do {
            *(undefined8 *)pauVar22[1] = 0;
            pauVar8 = pauVar22 + 1;
            *pauVar22 = (undefined1  [16])0x0;
            pauVar22 = (undefined1 (*) [16])(*pauVar8 + 8);
          } while ((undefined1 (*) [16])((long)pauVar21 + uVar32 * 0x18) !=
                   (undefined1 (*) [16])(*pauVar8 + 8));
          *(ulong *)(this + 0x60) = uVar32;
          if (uVar32 <= uStack_a8) {
            if (local_b0 < uVar32) {
              sVar27 = local_b0 * 4;
              goto LAB_00105b3f;
            }
            bVar34 = local_b0 <= uVar20;
            local_b0 = uVar32;
            if (bVar34) goto LAB_00106121;
LAB_00105b94:
            sVar27 = uVar32 * 4;
            local_b0 = uVar32;
            piVar24 = (int *)malloc(sVar27);
            if ((long)sVar27 < 5) {
              if (sVar27 != 4) goto LAB_001060af;
              *piVar24 = *piVar23;
            }
            else {
              piVar24 = (int *)memmove(piVar24,piVar23,sVar27);
            }
LAB_00105bca:
            free(piVar23);
LAB_00105bd2:
            uStack_a8 = local_b0;
            lVar26 = local_b0 << 2;
            piVar23 = piVar24;
            local_b8 = piVar24;
            goto LAB_00105bee;
          }
          piVar24 = (int *)malloc(uVar32 * 4);
          if (uVar16 == 0) {
            if (piVar23 == (int *)0x0) {
              sVar27 = 0;
              piVar23 = piVar24;
              local_b8 = piVar24;
              uStack_a8 = uVar32;
            }
            else {
              free(piVar23);
              sVar27 = 0;
              piVar23 = piVar24;
              local_b8 = piVar24;
              uStack_a8 = uVar32;
            }
LAB_00105b3f:
            lVar26 = uVar32 * 4;
            if ((int *)((long)piVar23 + sVar27) == piVar23 + uVar32) goto joined_r0x0010602d;
            memset((int *)((long)piVar23 + sVar27),0,lVar26 - sVar27);
            if (uVar20 < uVar16) goto LAB_00105b94;
            puVar25 = *(undefined8 **)(this + 0x58);
            lVar29 = *(long *)(local_128 + 0x48);
            local_b0 = uVar32;
          }
          else {
            sVar27 = uVar16 * 4;
            if ((long)sVar27 < 5) {
              if (sVar27 == 4) {
                *piVar24 = *piVar23;
                goto LAB_00105e9f;
              }
              if (piVar23 != (int *)0x0) goto LAB_00105e9f;
            }
            else {
              memcpy(piVar24,piVar23,sVar27);
LAB_00105e9f:
              free(piVar23);
            }
            piVar23 = piVar24;
            local_b8 = piVar24;
            uStack_a8 = uVar32;
            if (uVar16 < uVar32) goto LAB_00105b3f;
joined_r0x0010602d:
            if (uVar20 < uVar16) goto LAB_00105b94;
            lVar26 = uVar32 * 4;
            puVar25 = *(undefined8 **)(this + 0x58);
            lVar29 = *(long *)(local_128 + 0x48);
            local_b0 = uVar32;
          }
        }
        piVar24 = (int *)(lVar26 + (long)piVar23);
        do {
          iVar31 = *piVar23;
          piVar23 = piVar23 + 1;
          puVar4 = (undefined8 *)(lVar29 + (long)iVar31 * 0x18);
          uVar6 = puVar4[1];
          *puVar25 = *puVar4;
          puVar25[1] = uVar6;
          puVar25[2] = puVar4[2];
          puVar25 = puVar25 + 3;
        } while (piVar23 != piVar24);
      }
LAB_001056be:
      lVar26 = manifold::Manifold::NumTri();
      local_98 = (int *)0x0;
      local_90 = (undefined1  [16])0x0;
      local_90._8_8_ = 0;
      if (lVar26 != 0) {
        local_98 = (int *)malloc(lVar26 * 4);
        local_90._8_8_ = lVar26;
      }
      piVar23 = local_98;
      local_90._0_8_ = lVar26;
      lVar26 = manifold::Manifold::NumTri();
      piVar24 = local_98;
      if (lVar26 != 0) {
        lVar29 = *(long *)(local_128 + 0x60);
        lVar19 = 0;
        do {
          if (__dest[*(int *)(lVar29 + (long)((int)lVar19 * 3) * 0xc)] == iVar18) {
            *piVar23 = (int)lVar19;
            piVar23 = piVar23 + 1;
          }
          lVar19 = lVar19 + 1;
        } while (lVar26 != lVar19);
      }
      iVar31 = (int)((long)piVar23 - (long)local_98 >> 2);
      if (iVar31 == 0) {
        if (local_98 != (int *)0x0) {
          free(local_98);
        }
      }
      else {
        uVar6 = local_90._0_8_;
        uVar32 = (ulong)iVar31;
        uVar20 = local_90._0_8_;
        if ((ulong)local_90._8_8_ < uVar32) {
          piVar23 = (int *)malloc(uVar32 * 4);
          if (uVar6 != 0) {
            sVar27 = uVar6 * 4;
            if ((long)sVar27 < 5) {
              if (sVar27 == 4) {
                *piVar23 = *piVar24;
                goto LAB_00105f74;
              }
              uVar20 = uVar6;
              if (piVar24 != (int *)0x0) goto LAB_00105f74;
            }
            else {
              piVar23 = (int *)memmove(piVar23,piVar24,sVar27);
LAB_00105f74:
              free(piVar24);
              uVar20 = local_90._0_8_;
            }
            local_90._8_8_ = uVar32;
            local_98 = piVar23;
            goto LAB_00105915;
          }
          if (piVar24 != (int *)0x0) goto LAB_00105f74;
          local_98 = piVar23;
          local_90._8_8_ = uVar32;
          memset(piVar23,0,uVar32 * 4);
          local_90._0_8_ = uVar32;
        }
        else {
LAB_00105915:
          if ((uVar20 < uVar32) && (local_98 + uVar20 != local_98 + uVar32)) {
            memset(local_98 + uVar20,0,(uVar32 - uVar20) * 4);
          }
          else {
          }
          local_90._0_8_ = uVar32;
          if (uVar32 * 2 < (ulong)uVar6) {
            sVar27 = uVar32 * 4;
            piVar24 = (int *)malloc(sVar27);
            piVar23 = local_98;
            if ((long)sVar27 < 5) {
              if (sVar27 == 4) {
                *piVar24 = *local_98;
                goto LAB_00105d75;
              }
              if (local_98 != (int *)0x0) goto LAB_00105d75;
            }
            else {
              memmove(piVar24,local_98,sVar27);
LAB_00105d75:
              free(piVar23);
              uVar32 = local_90._0_8_;
            }
            local_90._8_8_ = uVar32;
            local_98 = piVar24;
          }
        }
        pIVar2 = (Impl *)(this + 0x10);
        manifold::Manifold::Impl::GatherFaces(pIVar2,local_128);
        manifold::Manifold::Impl::ReindexVerts((Vec *)pIVar2,(ulong)&local_b8);
        manifold::Manifold::Impl::Finish();
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
        }
        local_118 = pIVar2;
        local_110 = this;
        manifold::Manifold::Manifold(local_108,&local_118);
        if ((Manifold *)local_d8._8_8_ == local_c8) {
          std::vector<manifold::Manifold,std::allocator<manifold::Manifold>>::
          _M_realloc_insert<manifold::Manifold>
                    ((vector<manifold::Manifold,std::allocator<manifold::Manifold>> *)local_d8,
                     local_d8._8_8_,local_108);
        }
        else {
          pMVar33 = (Manifold *)(local_d8._8_8_ + 0x10);
          manifold::Manifold::Manifold((Manifold *)local_d8._8_8_,local_108);
          local_d8._8_8_ = pMVar33;
        }
        manifold::Manifold::~Manifold(local_108);
        p_Var15 = local_110;
        if (local_110 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var3 = local_110 + 8;
          if (*(long *)(local_110 + 8) == 0x100000001) {
            *(undefined8 *)(local_110 + 8) = 0;
            (**(code **)(*(long *)local_110 + 0x10))(local_110);
            (**(code **)(*(long *)p_Var15 + 0x18))(p_Var15);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar31 = *(int *)p_Var3;
              *(int *)p_Var3 = *(int *)p_Var3 + -1;
              UNLOCK();
            }
            else {
              iVar31 = *(int *)(local_110 + 8);
              *(int *)(local_110 + 8) = iVar31 + -1;
            }
            if (iVar31 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_110)
              ;
            }
          }
        }
        if (local_98 != (int *)0x0) {
          free(local_98);
        }
      }
      if (local_b8 != (int *)0x0) {
        free(local_b8);
      }
      if (*(long *)(this + 8) == 0x100000001) {
        *(undefined8 *)(this + 8) = 0;
        (**(code **)(*(long *)this + 0x10))(this);
        (**(code **)(*(long *)this + 0x18))(this);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar31 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar31 = *(int *)(this + 8);
          *(int *)(this + 8) = iVar31 + -1;
        }
        if (iVar31 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this);
        }
      }
      iVar18 = iVar18 + 1;
    } while (iVar17 != iVar18);
    __src = (undefined4 *)local_f8._0_8_;
  }
  else {
    __dest = (undefined4 *)malloc(sVar27);
    if ((long)sVar27 < 5) {
      if (sVar27 == 4) {
        *__dest = *__src;
      }
    }
    else {
      memcpy(__dest,__src,sVar27);
    }
    iVar18 = manifold::Manifold::NumVert();
    local_d8._0_8_ = 0;
    local_d8._8_8_ = 0;
    local_c8 = (Manifold *)0x0;
    local_d8 = (undefined1  [16])0x0;
    if (0 < iVar17) goto LAB_001054de;
  }
  *(Manifold **)in_RDI[1] = local_c8;
  *(undefined8 *)*in_RDI = local_d8._0_8_;
  *(undefined8 *)(*in_RDI + 8) = local_d8._8_8_;
  if (__dest != (undefined4 *)0x0) {
    free(__dest);
  }
LAB_001057ec:
  if (__src != (undefined4 *)0x0) {
    operator_delete(__src,local_e8 - (long)__src);
  }
  if (local_120 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_120 + 8;
    if (*(long *)(local_120 + 8) == 0x100000001) {
      *(undefined8 *)(local_120 + 8) = 0;
      (**(code **)(*(long *)local_120 + 0x10))(local_120);
      (**(code **)(*(long *)local_120 + 0x18))(local_120);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar17 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar17 = *(int *)(local_120 + 8);
        *(int *)(local_120 + 8) = iVar17 + -1;
      }
      if (iVar17 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_120);
      }
    }
  }
  if (local_60 != (void *)0x0) {
    free(local_60);
  }
  if (local_78[0] != (void *)0x0) {
    free(local_78[0]);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
code_r0x0010541e:
  if (*(byte *)((long)local_60 + lVar29) <= *(byte *)((long)local_60 + lVar26)) {
    lVar26 = (long)iVar18;
    iVar18 = iVar17;
  }
  cVar5 = *(char *)((long)iVar18 + (long)local_60);
  if (cVar5 == *(char *)((long)local_60 + lVar26)) {
    *(char *)((long)iVar18 + (long)local_60) = cVar5 + '\x01';
  }
  piVar24 = piVar24 + 3;
  *(int *)((long)local_78[0] + lVar26 * 4) = iVar18;
  goto joined_r0x00105379;
}



/* manifold::Manifold::Smooth(manifold::MeshGLP<double, unsigned long> const&,
   std::vector<manifold::Smoothness, std::allocator<manifold::Smoothness> > const&) */

MeshGLP * manifold::Manifold::Smooth(MeshGLP *param_1,vector *param_2)

{
  Impl *this;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  int iVar4;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  long in_FS_OFFSET;
  Impl *local_48;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator_new(0x198);
  this = (Impl *)(this_00 + 0x10);
  *(undefined8 *)(this_00 + 8) = _LC8;
  *(undefined ***)this_00 = &PTR___Sp_counted_ptr_inplace_0010c268;
  Impl::Impl<double,unsigned_long>(this,(MeshGLP *)param_2);
  manifold::Manifold::Impl::UpdateSharpenedEdges((vector *)&local_48);
  manifold::Manifold::Impl::CreateTangents(this,&local_48);
  if (local_48 != (Impl *)0x0) {
    operator_delete(local_48,local_38 - (long)local_48);
  }
  p_Var1 = this_00 + 8;
  if (__libc_single_threaded == '\0') {
    LOCK();
    *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    UNLOCK();
  }
  else {
    *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
  }
  local_48 = this;
  local_40 = this_00;
  manifold::Manifold::Manifold((Manifold *)param_1,&local_48);
  p_Var3 = local_40;
  if (local_40 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var2 = local_40 + 8;
    if (*(long *)(local_40 + 8) == 0x100000001) {
      *(undefined8 *)(local_40 + 8) = 0;
      (**(code **)(*(long *)local_40 + 0x10))(local_40);
      (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar4 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
      }
      else {
        iVar4 = *(int *)(local_40 + 8);
        *(int *)(local_40 + 8) = iVar4 + -1;
      }
      if (iVar4 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_40);
      }
    }
  }
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
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Smooth(manifold::MeshGLP<float, unsigned int> const&,
   std::vector<manifold::Smoothness, std::allocator<manifold::Smoothness> > const&) */

MeshGLP * manifold::Manifold::Smooth(MeshGLP *param_1,vector *param_2)

{
  Impl *this;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  int iVar4;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  long in_FS_OFFSET;
  Impl *local_48;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator_new(0x198);
  this = (Impl *)(this_00 + 0x10);
  *(undefined8 *)(this_00 + 8) = _LC8;
  *(undefined ***)this_00 = &PTR___Sp_counted_ptr_inplace_0010c268;
  Impl::Impl<float,unsigned_int>(this,(MeshGLP *)param_2);
  manifold::Manifold::Impl::UpdateSharpenedEdges((vector *)&local_48);
  manifold::Manifold::Impl::CreateTangents(this,&local_48);
  if (local_48 != (Impl *)0x0) {
    operator_delete(local_48,local_38 - (long)local_48);
  }
  p_Var1 = this_00 + 8;
  if (__libc_single_threaded == '\0') {
    LOCK();
    *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    UNLOCK();
  }
  else {
    *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
  }
  local_48 = this;
  local_40 = this_00;
  manifold::Manifold::Manifold((Manifold *)param_1,&local_48);
  p_Var3 = local_40;
  if (local_40 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var2 = local_40 + 8;
    if (*(long *)(local_40 + 8) == 0x100000001) {
      *(undefined8 *)(local_40 + 8) = 0;
      (**(code **)(*(long *)local_40 + 0x10))(local_40);
      (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar4 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
      }
      else {
        iVar4 = *(int *)(local_40 + 8);
        *(int *)(local_40 + 8) = iVar4 + -1;
      }
      if (iVar4 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_40);
      }
    }
  }
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
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::sind(double) */

double manifold::sind(double param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  double dVar2;
  double dVar3;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (_LC3 < (double)((ulong)param_1 & __LC2)) {
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00106a20;
    goto LAB_00106a9d;
  }
  if (param_1 < 0.0) {
    dVar2 = remquo((double)((ulong)param_1 ^ (ulong)_LC0),_LC4,(int *)&local_14);
    iVar1 = (int)local_14 % 4;
    if (iVar1 == 2) {
LAB_00106a30:
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        param_1 = (dVar2 * __LC6) / __LC7;
LAB_00106a20:
        dVar2 = sin(param_1);
        return dVar2;
      }
      goto LAB_00106a9d;
    }
    if (iVar1 == 3) {
LAB_0010695e:
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        dVar2 = cos((dVar2 * __LC6) / __LC7);
        return dVar2;
      }
      goto LAB_00106a9d;
    }
    if ((local_14 & 3) != 0) {
      dVar3 = _LC0;
      if (iVar1 != 1) goto LAB_001069f2;
      goto LAB_001069d5;
    }
LAB_00106a58:
    dVar2 = sin((dVar2 * __LC6) / __LC7);
    dVar3 = (double)((ulong)dVar2 ^ (ulong)_LC0);
  }
  else {
    dVar2 = remquo((double)((ulong)param_1 & __LC2),_LC4,(int *)&local_14);
    iVar1 = (int)local_14 % 4;
    if (iVar1 == 2) goto LAB_00106a58;
    if (iVar1 == 3) {
LAB_001069d5:
      dVar2 = cos((dVar2 * __LC6) / __LC7);
      dVar3 = (double)((ulong)dVar2 ^ (ulong)_LC0);
    }
    else {
      if ((local_14 & 3) == 0) goto LAB_00106a30;
      if (iVar1 == 1) goto LAB_0010695e;
      dVar3 = 0.0;
    }
  }
LAB_001069f2:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return dVar3;
  }
LAB_00106a9d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
                    /* WARNING: Could not recover jumptable at 0x00106aeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x18))(this);
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
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_00106cb0;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_00106cba:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00106cb0:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_00106cba;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_00106cba;
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
    if (__src == (void *)0x0) goto LAB_00106c8c;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_00106c8c:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* void std::vector<std::vector<manifold::PolyVert, std::allocator<manifold::PolyVert> >,
   std::allocator<std::vector<manifold::PolyVert, std::allocator<manifold::PolyVert> > >
   >::_M_realloc_insert<std::vector<manifold::PolyVert, std::allocator<manifold::PolyVert> >
   const&>(__gnu_cxx::__normal_iterator<std::vector<manifold::PolyVert,
   std::allocator<manifold::PolyVert> >*, std::vector<std::vector<manifold::PolyVert,
   std::allocator<manifold::PolyVert> >, std::allocator<std::vector<manifold::PolyVert,
   std::allocator<manifold::PolyVert> > > > >, std::vector<manifold::PolyVert,
   std::allocator<manifold::PolyVert> > const&) */

void __thiscall
std::
vector<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>,std::allocator<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>>>
::_M_realloc_insert<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>const&>
          (vector<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>,std::allocator<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>>>
           *this,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *extraout_RDX;
  undefined1 (*pauVar14) [16];
  ulong uVar15;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  lVar5 = (long)puVar1 - (long)puVar2 >> 3;
  uVar6 = lVar5 * -0x5555555555555555;
  if (uVar6 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  pauVar14 = (undefined1 (*) [16])((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    if (uVar6 != 0xffffffffffffffff) {
      uVar15 = 0x555555555555555;
      if (uVar6 + 1 < 0x555555555555556) {
        uVar15 = uVar6 + 1;
      }
      uVar6 = uVar15 * 0x18;
      goto LAB_00106f75;
    }
  }
  else {
    uVar15 = lVar5 * 0x5555555555555556;
    if (uVar6 <= uVar15) {
      if (uVar15 != 0) goto LAB_00106fe5;
      puVar11 = (undefined8 *)0x0;
      goto LAB_00106def;
    }
  }
  uVar6 = 0x7ffffffffffffff8;
  uVar15 = 0x555555555555555;
LAB_00106f75:
  while( true ) {
    puVar11 = (undefined8 *)operator_new(uVar6);
LAB_00106def:
    puVar10 = (undefined8 *)param_3[1];
    puVar13 = (undefined8 *)*param_3;
    pauVar14 = (undefined1 (*) [16])(*pauVar14 + (long)puVar11);
    *(undefined8 *)pauVar14[1] = 0;
    *pauVar14 = (undefined1  [16])0x0;
    uVar6 = (long)puVar10 - (long)puVar13;
    if (uVar6 == 0) break;
    if (uVar6 < 0x7ffffffffffffff9) {
      puVar7 = (undefined8 *)operator_new(uVar6);
      puVar10 = (undefined8 *)param_3[1];
      puVar13 = (undefined8 *)*param_3;
LAB_00106e54:
      *(undefined8 **)*pauVar14 = puVar7;
      *(ulong *)pauVar14[1] = uVar6 + (long)puVar7;
      puVar8 = puVar13;
      puVar12 = puVar7;
      if (puVar10 != puVar13) {
        do {
          uVar3 = puVar8[1];
          puVar9 = puVar8 + 3;
          *puVar12 = *puVar8;
          puVar12[1] = uVar3;
          puVar12[2] = puVar8[2];
          puVar8 = puVar9;
          puVar12 = puVar12 + 3;
        } while (puVar10 != puVar9);
        puVar7 = (undefined8 *)
                 ((long)puVar7 +
                 ((long)puVar10 + (-0x18 - (long)puVar13) & 0xfffffffffffffff8U) + 0x18);
      }
      *(undefined8 **)(*pauVar14 + 8) = puVar7;
      puVar10 = puVar2;
      puVar13 = puVar11;
      if (param_2 != puVar2) {
        do {
          uVar4 = puVar10[1];
          uVar3 = puVar10[2];
          puVar7 = puVar10 + 3;
          *puVar13 = *puVar10;
          puVar13[1] = uVar4;
          puVar13[2] = uVar3;
          puVar10 = puVar7;
          puVar13 = puVar13 + 3;
        } while (param_2 != puVar7);
        puVar13 = (undefined8 *)
                  ((long)puVar11 +
                  ((long)param_2 + (-0x18 - (long)puVar2) & 0xfffffffffffffff8U) + 0x18);
      }
      puVar10 = puVar13 + 3;
      puVar7 = param_2;
      if (param_2 != puVar1) {
        do {
          uVar4 = puVar7[1];
          uVar3 = puVar7[2];
          puVar8 = puVar7 + 3;
          *puVar10 = *puVar7;
          puVar10[1] = uVar4;
          puVar10[2] = uVar3;
          puVar7 = puVar8;
          puVar10 = puVar10 + 3;
        } while (puVar1 != puVar8);
        puVar10 = (undefined8 *)
                  ((long)puVar13 +
                  ((long)puVar1 + (-0x18 - (long)param_2) & 0xfffffffffffffff8U) + 0x30);
      }
      if (puVar2 != (undefined8 *)0x0) {
        operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
      }
      *(undefined8 **)this = puVar11;
      *(undefined8 **)(this + 8) = puVar10;
      *(undefined8 **)(this + 0x10) = puVar11 + uVar15 * 3;
      return;
    }
    std::__throw_bad_array_new_length();
    param_3 = extraout_RDX;
LAB_00106fe5:
    if (0x555555555555555 < uVar15) {
      uVar15 = 0x555555555555555;
    }
    uVar6 = uVar15 * 0x18;
  }
  puVar7 = (undefined8 *)0x0;
  goto LAB_00106e54;
}



/* void std::vector<linalg::vec<double, 2>, std::allocator<linalg::vec<double, 2> >
   >::_M_realloc_insert<linalg::vec<double, 2>
   const&>(__gnu_cxx::__normal_iterator<linalg::vec<double, 2>*, std::vector<linalg::vec<double, 2>,
   std::allocator<linalg::vec<double, 2> > > >, linalg::vec<double, 2> const&) */

void __thiscall
std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>::
_M_realloc_insert<linalg::vec<double,2>const&>
          (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *this,
          undefined8 *param_2,undefined8 *param_3)

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
    if (0xfffffffffffffffe < uVar5) goto LAB_00107118;
    uVar7 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 4;
LAB_00107122:
    puVar6 = (undefined8 *)operator_new(uVar7);
    uVar3 = param_3[1];
    lVar11 = uVar7 + (long)puVar6;
    puVar10 = puVar6 + 2;
    *(undefined8 *)((long)puVar6 + (long)puVar8) = *param_3;
    ((undefined8 *)((long)puVar6 + (long)puVar8))[1] = uVar3;
    if (param_2 != puVar2) {
LAB_0010708a:
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
    if (param_2 == puVar1) goto LAB_001070dc;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_00107118:
      uVar7 = 0x7ffffffffffffff0;
      goto LAB_00107122;
    }
    if (uVar7 != 0) {
      if (0x7ffffffffffffff < uVar7) {
        uVar7 = 0x7ffffffffffffff;
      }
      uVar7 = uVar7 << 4;
      goto LAB_00107122;
    }
    uVar3 = param_3[1];
    lVar11 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)&DAT_00000010;
    *puVar8 = *param_3;
    puVar8[1] = uVar3;
    if (param_2 != puVar2) goto LAB_0010708a;
  }
  puVar8 = (undefined8 *)((long)puVar10 + ((long)puVar1 - (long)param_2));
  memcpy(puVar10,param_2,(long)puVar1 - (long)param_2);
LAB_001070dc:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = lVar11;
  return;
}



/* void std::vector<manifold::PolyVert, std::allocator<manifold::PolyVert>
   >::_M_realloc_insert<manifold::PolyVert>(__gnu_cxx::__normal_iterator<manifold::PolyVert*,
   std::vector<manifold::PolyVert, std::allocator<manifold::PolyVert> > >, manifold::PolyVert&&) */

void __thiscall
std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>::
_M_realloc_insert<manifold::PolyVert>
          (vector<manifold::PolyVert,std::allocator<manifold::PolyVert>> *this,undefined8 *param_2,
          undefined8 *param_3)

{
  size_t __n;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long local_50;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  lVar5 = (long)puVar1 - (long)puVar2 >> 3;
  uVar6 = lVar5 * -0x5555555555555555;
  if (uVar6 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar8 = (undefined8 *)((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    uVar9 = uVar6 + 1;
    if (0xfffffffffffffffe < uVar6) goto LAB_001072d0;
    if (0x555555555555555 < uVar9) {
      uVar9 = 0x555555555555555;
    }
    uVar9 = uVar9 * 0x18;
LAB_001072da:
    puVar7 = (undefined8 *)operator_new(uVar9);
    local_50 = (long)puVar7 + uVar9;
    uVar4 = param_3[1];
    puVar10 = puVar7 + 3;
    uVar3 = param_3[2];
    *(undefined8 *)((long)puVar7 + (long)puVar8) = *param_3;
    ((undefined8 *)((long)puVar7 + (long)puVar8))[1] = uVar4;
    *(undefined8 *)((long)(puVar7 + 2) + (long)puVar8) = uVar3;
    puVar8 = puVar2;
    puVar11 = puVar7;
    if (param_2 != puVar2) {
LAB_00107240:
      do {
        uVar4 = puVar8[1];
        uVar3 = puVar8[2];
        puVar10 = puVar8 + 3;
        *puVar7 = *puVar8;
        puVar7[1] = uVar4;
        puVar7[2] = uVar3;
        puVar8 = puVar10;
        puVar7 = puVar7 + 3;
      } while (puVar10 != param_2);
      puVar10 = (undefined8 *)
                ((long)puVar11 +
                ((long)param_2 + (-0x18 - (long)puVar2) & 0xfffffffffffffff8U) + 0x30);
      puVar7 = puVar11;
    }
    puVar8 = puVar10;
    if (param_2 == puVar1) goto LAB_00107296;
  }
  else {
    uVar9 = lVar5 * 0x5555555555555556;
    if (uVar9 < uVar6) {
LAB_001072d0:
      uVar9 = 0x7ffffffffffffff8;
      goto LAB_001072da;
    }
    if (uVar9 != 0) {
      if (0x555555555555555 < uVar9) {
        uVar9 = 0x555555555555555;
      }
      uVar9 = uVar9 * 0x18;
      goto LAB_001072da;
    }
    uVar3 = *param_3;
    uVar4 = param_3[1];
    puVar7 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x18;
    local_50 = 0;
    puVar8[2] = param_3[2];
    *puVar8 = uVar3;
    puVar8[1] = uVar4;
    puVar8 = puVar2;
    puVar11 = puVar7;
    if (param_2 != puVar2) goto LAB_00107240;
  }
  __n = ((long)puVar1 + (-0x18 - (long)param_2) & 0xfffffffffffffff8U) + 0x18;
  puVar8 = (undefined8 *)((long)puVar10 + __n);
  memcpy(puVar10,param_2,__n);
LAB_00107296:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = local_50;
  return;
}



/* void std::vector<std::vector<linalg::vec<double, 2>, std::allocator<linalg::vec<double, 2> > >,
   std::allocator<std::vector<linalg::vec<double, 2>, std::allocator<linalg::vec<double, 2> > > >
   >::_M_realloc_insert<std::vector<linalg::vec<double, 2>, std::allocator<linalg::vec<double, 2> >
   > >(__gnu_cxx::__normal_iterator<std::vector<linalg::vec<double, 2>,
   std::allocator<linalg::vec<double, 2> > >*, std::vector<std::vector<linalg::vec<double, 2>,
   std::allocator<linalg::vec<double, 2> > >, std::allocator<std::vector<linalg::vec<double, 2>,
   std::allocator<linalg::vec<double, 2> > > > > >, std::vector<linalg::vec<double, 2>,
   std::allocator<linalg::vec<double, 2> > >&&) */

void __thiscall
std::
vector<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>,std::allocator<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>>>
::_M_realloc_insert<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>>
          (vector<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>,std::allocator<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>>>
           *this,undefined8 *param_2,undefined1 (*param_3) [16])

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  lVar6 = (long)puVar1 - (long)puVar2 >> 3;
  uVar7 = lVar6 * -0x5555555555555555;
  if (uVar7 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar2 == puVar1) {
    uVar12 = uVar7 + 1;
    if (0xfffffffffffffffe < uVar7) goto LAB_001074e0;
    if (0x555555555555555 < uVar12) {
      uVar12 = 0x555555555555555;
    }
    uVar12 = uVar12 * 0x18;
  }
  else {
    uVar12 = lVar6 * 0x5555555555555556;
    if (uVar12 < uVar7) {
LAB_001074e0:
      uVar12 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar12 == 0) {
        puVar13 = (undefined8 *)0x18;
        lVar6 = 0;
        puVar10 = (undefined8 *)0x0;
        goto LAB_001073fb;
      }
      if (0x555555555555555 < uVar12) {
        uVar12 = 0x555555555555555;
      }
      uVar12 = uVar12 * 0x18;
    }
  }
  puVar10 = (undefined8 *)operator_new(uVar12);
  lVar6 = uVar12 + (long)puVar10;
  puVar13 = puVar10 + 3;
LAB_001073fb:
  puVar8 = (undefined8 *)((long)puVar10 + ((long)param_2 - (long)puVar2));
  uVar4 = *(undefined8 *)*param_3;
  uVar5 = *(undefined8 *)(*param_3 + 8);
  uVar3 = *(undefined8 *)param_3[1];
  *(undefined8 *)param_3[1] = 0;
  puVar8[2] = uVar3;
  *puVar8 = uVar4;
  puVar8[1] = uVar5;
  *param_3 = (undefined1  [16])0x0;
  puVar8 = puVar2;
  puVar11 = puVar10;
  if (param_2 != puVar2) {
    do {
      uVar4 = puVar8[1];
      uVar3 = puVar8[2];
      puVar13 = puVar8 + 3;
      *puVar11 = *puVar8;
      puVar11[1] = uVar4;
      puVar11[2] = uVar3;
      puVar8 = puVar13;
      puVar11 = puVar11 + 3;
    } while (param_2 != puVar13);
    puVar13 = (undefined8 *)
              ((long)puVar10 + ((long)param_2 + (-0x18 - (long)puVar2) & 0xfffffffffffffff8U) + 0x30
              );
  }
  puVar8 = param_2;
  puVar11 = puVar13;
  if (param_2 != puVar1) {
    do {
      uVar4 = puVar8[1];
      uVar3 = puVar8[2];
      puVar9 = puVar8 + 3;
      *puVar11 = *puVar8;
      puVar11[1] = uVar4;
      puVar11[2] = uVar3;
      puVar8 = puVar9;
      puVar11 = puVar11 + 3;
    } while (puVar1 != puVar9);
    puVar13 = (undefined8 *)
              ((long)puVar13 + ((long)puVar1 + (-0x18 - (long)param_2) & 0xfffffffffffffff8U) + 0x18
              );
  }
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar10;
  *(undefined8 **)(this + 8) = puVar13;
  *(long *)(this + 0x10) = lVar6;
  return;
}



/* void std::vector<linalg::vec<double, 2>, std::allocator<linalg::vec<double, 2> >
   >::_M_realloc_insert<linalg::vec<double, 2> >(__gnu_cxx::__normal_iterator<linalg::vec<double,
   2>*, std::vector<linalg::vec<double, 2>, std::allocator<linalg::vec<double, 2> > > >,
   linalg::vec<double, 2>&&) */

void __thiscall
std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>::
_M_realloc_insert<linalg::vec<double,2>>
          (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *this,
          undefined8 *param_2,undefined8 *param_3)

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
    if (0xfffffffffffffffe < uVar5) goto LAB_00107668;
    uVar7 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 4;
LAB_00107672:
    puVar6 = (undefined8 *)operator_new(uVar7);
    uVar3 = param_3[1];
    lVar11 = uVar7 + (long)puVar6;
    puVar10 = puVar6 + 2;
    *(undefined8 *)((long)puVar6 + (long)puVar8) = *param_3;
    ((undefined8 *)((long)puVar6 + (long)puVar8))[1] = uVar3;
    if (param_2 != puVar2) {
LAB_001075da:
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
    if (param_2 == puVar1) goto LAB_0010762c;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_00107668:
      uVar7 = 0x7ffffffffffffff0;
      goto LAB_00107672;
    }
    if (uVar7 != 0) {
      if (0x7ffffffffffffff < uVar7) {
        uVar7 = 0x7ffffffffffffff;
      }
      uVar7 = uVar7 << 4;
      goto LAB_00107672;
    }
    uVar3 = param_3[1];
    lVar11 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)&DAT_00000010;
    *puVar8 = *param_3;
    puVar8[1] = uVar3;
    if (param_2 != puVar2) goto LAB_001075da;
  }
  puVar8 = (undefined8 *)((long)puVar10 + ((long)puVar1 - (long)param_2));
  memcpy(puVar10,param_2,(long)puVar1 - (long)param_2);
LAB_0010762c:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = lVar11;
  return;
}



/* void std::vector<int, std::allocator<int>
   >::_M_realloc_insert<int>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, int&&) */

void __thiscall
std::vector<int,std::allocator<int>>::_M_realloc_insert<int>
          (vector<int,std::allocator<int>> *this,void *param_2,undefined4 *param_3)

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
    if (0xfffffffffffffffe < uVar2) goto LAB_001077b0;
    uVar3 = 0x1fffffffffffffff;
    if (uVar2 + 1 < 0x2000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 2;
LAB_001077ba:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_001077b0:
      uVar3 = 0x7ffffffffffffffc;
      goto LAB_001077ba;
    }
    if (uVar3 != 0) {
      if (0x1fffffffffffffff < uVar3) {
        uVar3 = 0x1fffffffffffffff;
      }
      uVar3 = uVar3 * 4;
      goto LAB_001077ba;
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
    if (__src == (void *)0x0) goto LAB_0010778b;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010778b:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* void std::vector<std::shared_ptr<manifold::CsgLeafNode>,
   std::allocator<std::shared_ptr<manifold::CsgLeafNode> >
   >::_M_realloc_insert<std::shared_ptr<manifold::CsgLeafNode>
   >(__gnu_cxx::__normal_iterator<std::shared_ptr<manifold::CsgLeafNode>*,
   std::vector<std::shared_ptr<manifold::CsgLeafNode>,
   std::allocator<std::shared_ptr<manifold::CsgLeafNode> > > >,
   std::shared_ptr<manifold::CsgLeafNode>&&) */

void __thiscall
std::
vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
::_M_realloc_insert<std::shared_ptr<manifold::CsgLeafNode>>
          (vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
           *this,void *param_2,undefined1 (*param_3) [16])

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
    if (0xfffffffffffffffe < uVar5) goto LAB_001079b8;
    uVar9 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar9 = uVar5 + 1;
    }
    uVar9 = uVar9 << 4;
LAB_001079c2:
    pvVar7 = operator_new(uVar9);
    lVar10 = uVar9 + (long)pvVar7;
    lVar8 = (long)pvVar7 + 0x10;
  }
  else {
    uVar9 = uVar5 * 2;
    if (uVar9 < uVar5) {
LAB_001079b8:
      uVar9 = 0x7ffffffffffffff0;
      goto LAB_001079c2;
    }
    if (uVar9 != 0) {
      if (0x7ffffffffffffff < uVar9) {
        uVar9 = 0x7ffffffffffffff;
      }
      uVar9 = uVar9 << 4;
      goto LAB_001079c2;
    }
    lVar8 = 0x10;
    lVar10 = 0;
    pvVar7 = (void *)0x0;
  }
  uVar4 = *(undefined8 *)(*param_3 + 8);
  *param_3 = (undefined1  [16])0x0;
  puVar1 = (undefined8 *)((long)pvVar7 + ((long)param_2 - (long)pvVar3));
  *puVar1 = *(undefined8 *)*param_3;
  puVar1[1] = uVar4;
  if (param_2 == pvVar3) {
    if (param_2 != pvVar2) goto LAB_00107940;
LAB_0010797c:
    if (pvVar3 == (void *)0x0) goto LAB_00107998;
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
LAB_00107940:
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
      goto LAB_0010797c;
    }
  }
  operator_delete(pvVar3,*(long *)(this + 0x10) - (long)pvVar3);
LAB_00107998:
  *(void **)this = pvVar7;
  *(long *)(this + 8) = lVar8;
  *(long *)(this + 0x10) = lVar10;
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
    if (param_1 - 1 != 0) goto LAB_00107b14;
LAB_00107b28:
    if (sVar4 != 0) goto LAB_00107bf8;
    if (pvVar3 == (void *)0x0) goto LAB_00107b3a;
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
LAB_00107b14:
      memset(puVar6 + 1,0,(param_1 - 1) * 4);
      goto LAB_00107b28;
    }
LAB_00107bf8:
    memmove(__dest,pvVar3,sVar4);
    uVar5 = *(long *)(this + 0x10) - (long)pvVar3;
  }
  operator_delete(pvVar3,uVar5);
LAB_00107b3a:
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
LAB_00107d0d:
    lVar1 = uVar9 * 4;
    if (*(char *)(*(long *)(this + 0x18) + uVar9) == '\0') {
      iVar14 = iVar17 + (int)uVar16;
      iVar17 = iVar17 + 1;
      *(int *)(*(long *)param_1 + uVar9 * 4) = iVar14;
      goto LAB_00107cff;
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
        if ((int)plVar10[1] == iVar14) goto LAB_00107d81;
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
             uVar18 % local_70 != (ulong)(long)iVar8 % local_70)) goto LAB_00107e90;
        }
        plVar10 = (long *)*puVar13;
        if (plVar10 != (long *)0x0) goto LAB_00107d81;
      }
    }
LAB_00107e90:
    iVar8 = iVar17 + (int)uVar16;
    plVar11 = (long *)operator_new(0x10);
    *plVar11 = 0;
    *(int *)(plVar11 + 1) = iVar14;
    *(int *)((long)plVar11 + 0xc) = iVar8;
    plVar10 = local_68;
    if (local_60 == 0) {
      for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        if ((int)plVar10[1] == iVar14) goto LAB_00107f43;
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
             uVar18 % local_70 != (ulong)(long)iVar2 % local_70)) goto LAB_00107fb6;
        }
        if (*plVar10 != 0) goto LAB_00107f43;
      }
    }
LAB_00107fb6:
    cVar7 = std::__detail::_Prime_rehash_policy::_M_need_rehash((ulong)local_58,local_70,local_60);
    if (cVar7 == '\0') {
      plVar10 = local_78 + uVar18 % local_70;
      plVar12 = (long *)*plVar10;
      if (plVar12 != (long *)0x0) goto LAB_00108005;
LAB_00108154:
      *plVar11 = (long)local_68;
      if (local_68 != (long *)0x0) {
        local_78[(ulong)(long)(int)local_68[1] % local_70] = plVar11;
      }
      *plVar10 = (long)&local_68;
      local_68 = plVar11;
    }
    else {
      if (extraout_RDX == 1) {
LAB_001081dd:
        local_48 = 0;
        puVar13 = &local_48;
      }
      else {
        if (extraout_RDX >> 0x3c != 0) {
          if (extraout_RDX >> 0x3d != 0) {
            std::__throw_bad_array_new_length();
            goto LAB_001081dd;
          }
          std::__throw_bad_alloc();
          goto LAB_001081f5;
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
          if (plVar10 == (long *)0x0) goto LAB_001080f0;
        }
        *plVar12 = (long)local_68;
        *plVar5 = (long)&local_68;
        local_68 = plVar12;
        if (*plVar12 != 0) {
          puVar13[uVar19] = plVar12;
        }
      }
LAB_001080f0:
      if (local_78 != &local_48) {
        operator_delete(local_78,local_70 * 8);
      }
      plVar10 = puVar13 + uVar18 % extraout_RDX;
      plVar12 = (long *)*plVar10;
      local_78 = puVar13;
      local_70 = extraout_RDX;
      if (plVar12 == (long *)0x0) goto LAB_00108154;
LAB_00108005:
      *plVar11 = *plVar12;
      *(long **)*plVar10 = plVar11;
    }
    local_60 = local_60 + 1;
    goto LAB_00107f5f;
  }
  __n = 8;
  iVar17 = 0;
LAB_00107dd7:
  memset(local_78,0,__n);
  local_60 = 0;
  local_68 = (long *)0x0;
  if (local_78 != &local_48) {
    operator_delete(local_78,local_70 << 3);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar17;
  }
LAB_001081f5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00107d81:
  uVar9 = uVar9 + 1;
  *(undefined4 *)(*(long *)param_1 + lVar1) = *(undefined4 *)((long)plVar10 + 0xc);
  if (*(ulong *)(this + 8) <= uVar9) goto LAB_00107d99;
  goto LAB_00107d0d;
LAB_00107f43:
  operator_delete(plVar11,0x10);
LAB_00107f5f:
  *(int *)(*(long *)param_1 + lVar1) = iVar8;
  uVar16 = local_60;
LAB_00107cff:
  uVar9 = uVar9 + 1;
  if (*(ulong *)(this + 8) <= uVar9) goto LAB_00107d99;
  goto LAB_00107d0d;
LAB_00107d99:
  iVar17 = iVar17 + (int)uVar16;
  plVar10 = local_68;
  while (plVar10 != (long *)0x0) {
    plVar11 = (long *)*plVar10;
    operator_delete(plVar10,0x10);
    plVar10 = plVar11;
  }
  __n = local_70 * 8;
  goto LAB_00107dd7;
}



/* void std::vector<manifold::Manifold, std::allocator<manifold::Manifold>
   >::_M_realloc_insert<manifold::Manifold>(__gnu_cxx::__normal_iterator<manifold::Manifold*,
   std::vector<manifold::Manifold, std::allocator<manifold::Manifold> > >, manifold::Manifold&&) */

void __thiscall
std::vector<manifold::Manifold,std::allocator<manifold::Manifold>>::
_M_realloc_insert<manifold::Manifold>
          (vector<manifold::Manifold,std::allocator<manifold::Manifold>> *this,Manifold *param_2,
          Manifold *param_3)

{
  Manifold *pMVar1;
  Manifold *pMVar2;
  Manifold *pMVar3;
  ulong uVar4;
  ulong uVar5;
  Manifold *pMVar6;
  Manifold *pMVar7;
  Manifold *pMVar8;
  Manifold *local_58;
  Manifold *local_48;
  
  pMVar1 = *(Manifold **)(this + 8);
  pMVar2 = *(Manifold **)this;
  uVar4 = (long)pMVar1 - (long)pMVar2 >> 4;
  if (uVar4 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (pMVar2 == pMVar1) {
    if (0xfffffffffffffffe < uVar4) goto LAB_00108338;
    uVar5 = 0x7ffffffffffffff;
    if (uVar4 + 1 < 0x800000000000000) {
      uVar5 = uVar4 + 1;
    }
    uVar5 = uVar5 << 4;
LAB_00108342:
    local_58 = (Manifold *)operator_new(uVar5);
    local_48 = local_58 + uVar5;
    manifold::Manifold::Manifold(local_58 + (long)(param_2 + -(long)pMVar2),param_3);
    pMVar8 = local_58 + 0x10;
    pMVar6 = pMVar2;
    pMVar3 = local_58;
    if (param_2 != pMVar2) {
LAB_00108298:
      do {
        pMVar8 = pMVar3;
        manifold::Manifold::Manifold(pMVar8,pMVar6);
        pMVar7 = pMVar6 + 0x10;
        manifold::Manifold::~Manifold(pMVar6);
        pMVar6 = pMVar7;
        pMVar3 = pMVar8 + 0x10;
      } while (param_2 != pMVar7);
      pMVar8 = pMVar8 + 0x20;
    }
    pMVar7 = pMVar8;
    if (param_2 == pMVar1) goto LAB_001082e8;
  }
  else {
    uVar5 = uVar4 * 2;
    if (uVar5 < uVar4) {
LAB_00108338:
      uVar5 = 0x7ffffffffffffff0;
      goto LAB_00108342;
    }
    if (uVar5 != 0) {
      if (0x7ffffffffffffff < uVar5) {
        uVar5 = 0x7ffffffffffffff;
      }
      uVar5 = uVar5 << 4;
      goto LAB_00108342;
    }
    manifold::Manifold::Manifold(param_2 + -(long)pMVar2,param_3);
    local_58 = (Manifold *)0x0;
    local_48 = (Manifold *)0x0;
    pMVar6 = pMVar2;
    pMVar7 = (Manifold *)&DAT_00000010;
    pMVar3 = local_58;
    if (param_2 != pMVar2) goto LAB_00108298;
  }
  do {
    pMVar8 = pMVar7 + 0x10;
    manifold::Manifold::Manifold(pMVar7,param_2);
    pMVar6 = param_2 + 0x10;
    manifold::Manifold::~Manifold(param_2);
    param_2 = pMVar6;
    pMVar7 = pMVar8;
  } while (pMVar1 != pMVar6);
LAB_001082e8:
  if (pMVar2 != (Manifold *)0x0) {
    operator_delete(pMVar2,*(long *)(this + 0x10) - (long)pMVar2);
  }
  *(Manifold **)this = local_58;
  *(Manifold **)(this + 8) = pMVar8;
  *(Manifold **)(this + 0x10) = local_48;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010953a) */
/* WARNING: Removing unreachable block (ram,0x0010954c) */
/* WARNING: Removing unreachable block (ram,0x00109556) */
/* WARNING: Removing unreachable block (ram,0x0010960e) */
/* WARNING: Removing unreachable block (ram,0x001099d5) */
/* WARNING: Removing unreachable block (ram,0x00109617) */
/* WARNING: Removing unreachable block (ram,0x00109e78) */
/* WARNING: Removing unreachable block (ram,0x001099e3) */
/* WARNING: Removing unreachable block (ram,0x00109d2a) */
/* WARNING: Removing unreachable block (ram,0x0010a17a) */
/* WARNING: Removing unreachable block (ram,0x0010a180) */
/* WARNING: Removing unreachable block (ram,0x00109d3c) */
/* WARNING: Removing unreachable block (ram,0x00109a72) */
/* WARNING: Removing unreachable block (ram,0x00109daf) */
/* WARNING: Removing unreachable block (ram,0x00109a7b) */
/* WARNING: Removing unreachable block (ram,0x00109629) */
/* WARNING: Removing unreachable block (ram,0x00109577) */
/* WARNING: Removing unreachable block (ram,0x0010959a) */
/* WARNING: Removing unreachable block (ram,0x0010964a) */
/* WARNING: Removing unreachable block (ram,0x00109a9a) */
/* WARNING: Removing unreachable block (ram,0x00109c99) */
/* WARNING: Removing unreachable block (ram,0x00109aad) */
/* WARNING: Removing unreachable block (ram,0x0010a110) */
/* WARNING: Removing unreachable block (ram,0x00109ca7) */
/* WARNING: Removing unreachable block (ram,0x00109ed6) */
/* WARNING: Removing unreachable block (ram,0x0010a162) */
/* WARNING: Removing unreachable block (ram,0x0010a168) */
/* WARNING: Removing unreachable block (ram,0x00109ee7) */
/* WARNING: Removing unreachable block (ram,0x00109d09) */
/* WARNING: Removing unreachable block (ram,0x00109f3f) */
/* WARNING: Removing unreachable block (ram,0x00109d12) */
/* WARNING: Removing unreachable block (ram,0x00109abf) */
/* WARNING: Removing unreachable block (ram,0x00109ac6) */
/* WARNING: Removing unreachable block (ram,0x00109661) */
/* WARNING: Removing unreachable block (ram,0x001095a9) */
/* WARNING: Removing unreachable block (ram,0x00109684) */
/* WARNING: Removing unreachable block (ram,0x00109ae5) */
/* WARNING: Removing unreachable block (ram,0x00109bfc) */
/* WARNING: Removing unreachable block (ram,0x00109aee) */
/* WARNING: Removing unreachable block (ram,0x0010a107) */
/* WARNING: Removing unreachable block (ram,0x00109c0a) */
/* WARNING: Removing unreachable block (ram,0x00109b00) */
/* WARNING: Removing unreachable block (ram,0x001096c4) */
/* WARNING: Removing unreachable block (ram,0x001095b8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::Manifold::Impl::Impl<double, unsigned long>(manifold::MeshGLP<double, unsigned long>
   const&) */

void __thiscall manifold::Manifold::Impl::Impl<double,unsigned_long>(Impl *this,MeshGLP *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong *__src;
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
  MeshGLP *pMVar19;
  char cVar20;
  uint uVar21;
  int iVar22;
  Vec *pVVar23;
  Vec *pVVar24;
  Vec *pVVar25;
  Vec *pVVar26;
  Vec *pVVar27;
  undefined1 (*pauVar28) [16];
  undefined8 *puVar29;
  int iVar30;
  ulong uVar31;
  Vec *pVVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 *puVar35;
  Vec *pVVar36;
  long extraout_RDX;
  uint uVar37;
  long lVar38;
  Vec *pVVar39;
  undefined8 uVar40;
  int iVar41;
  long lVar42;
  ulong uVar43;
  long lVar44;
  Vec *pVVar45;
  Vec *pVVar46;
  Vec *in_R11;
  Vec *pVVar47;
  long lVar48;
  uint uVar49;
  size_t sVar50;
  long in_FS_OFFSET;
  bool bVar51;
  undefined8 extraout_XMM1_Qa;
  Vec *local_158;
  Vec *local_150;
  Vec *local_148;
  Vec *local_138;
  long local_128;
  Vec *local_118;
  ulong local_100;
  int local_94;
  ulong local_90;
  undefined8 local_88;
  undefined4 local_80 [2];
  Vec *local_78;
  undefined1 local_70 [8];
  Vec *pVStack_68;
  undefined8 local_58;
  undefined8 uStack_50;
  Vec local_48 [8];
  long local_40;
  
  uVar40 = _LC19;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = _LC19;
  *(undefined8 *)(this + 8) = uVar40;
  uVar7 = _LC22;
  uVar40 = __LC20;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x10) = uVar40;
  *(undefined8 *)(this + 0x18) = uVar7;
  uVar40 = _LC22;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x20) = uVar40;
  *(undefined8 *)(this + 0x28) = uVar40;
  dVar18 = _LC24;
  *(undefined8 *)(this + 0x78) = 0;
  *(double *)(this + 0x30) = dVar18;
  *(double *)(this + 0x38) = dVar18;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x90) = 0;
  lVar48 = *(long *)(param_1 + 0x10);
  *(undefined1 (*) [16])(this + 0x98) = (undefined1  [16])0x0;
  uVar40 = _LC25;
  lVar3 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x28);
  *(undefined1 (*) [16])(this + 0xb0) = (undefined1  [16])0x0;
  pVVar46 = *(Vec **)(param_1 + 0x20);
  *(undefined1 (*) [16])(this + 0xd0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x118) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x130) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x148) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x160) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x178) = (undefined1  [16])0x0;
  uVar31 = *(ulong *)param_1;
  *(undefined8 *)(this + 0xc0) = uVar40;
  local_150 = (Vec *)(this + 0xe8);
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(Vec **)(this + 0xf8) = local_150;
  *(Vec **)(this + 0x100) = local_150;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  if (uVar31 < 3) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar40 = 5;
LAB_001087c4:
      manifold::Manifold::Impl::MarkFailure(this,uVar40);
      return;
    }
    goto LAB_0010a175;
  }
  lVar38 = *(long *)(param_1 + 0x40);
  lVar42 = *(long *)(param_1 + 0x38);
  lVar44 = lVar38 - lVar42;
  if (lVar44 != *(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar40 = 6;
      goto LAB_001087c4;
    }
    goto LAB_0010a175;
  }
  if ((*(long *)(param_1 + 0x98) != *(long *)(param_1 + 0xa0)) &&
     (in_R11 = (Vec *)((*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 2) * 0xc),
     in_R11 != (Vec *)(*(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98) >> 3))) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar40 = 8;
      goto LAB_001087c4;
    }
    goto LAB_0010a175;
  }
  if (*(long *)(param_1 + 0x80) != *(long *)(param_1 + 0x88)) {
    in_R11 = *(Vec **)(param_1 + 0x70);
    if (in_R11 != *(Vec **)(param_1 + 0x68)) {
      pVVar23 = (Vec *)(*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 2);
      in_R11 = (Vec *)((long)in_R11 - (long)*(Vec **)(param_1 + 0x68) >> 3);
      if ((pVVar23 + 1 != in_R11) && (in_R11 != pVVar23)) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar40 = 9;
          goto LAB_001087c4;
        }
        goto LAB_0010a175;
      }
    }
  }
  uVar34 = (ulong)(lVar4 - (long)pVVar46 >> 3) / 3;
  if ((*(long *)(param_1 + 0xb0) != *(long *)(param_1 + 0xb8)) &&
     (uVar34 != *(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 3)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar40 = 10;
      goto LAB_001087c4;
    }
    goto LAB_0010a175;
  }
  pVVar23 = (Vec *)0x0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar31;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = lVar48 - lVar3 >> 3;
  uVar49 = SUB164(auVar6 / auVar5,0);
  uVar31 = SUB168(auVar6 / auVar5,0) & 0xffffffff;
  local_100 = uVar31;
  if (uVar49 != 0) {
    local_100 = uVar31 * 4;
    pVVar23 = (Vec *)operator_new(local_100);
    *(int *)pVVar23 = 0;
    pVVar27 = pVVar23 + 4;
    if (uVar31 == 1) {
      local_100 = 4;
      pVVar32 = pVVar27;
    }
    else {
      pVVar32 = pVVar23 + local_100;
      if (pVVar27 != pVVar32) {
        memset(pVVar27,0,local_100 - 4);
      }
    }
    lVar38 = *(long *)(param_1 + 0x40);
    lVar42 = *(long *)(param_1 + 0x38);
    lVar44 = lVar38 - lVar42;
    if (pVVar32 != pVVar23) {
      uVar31 = 0;
      do {
        *(int *)(pVVar23 + uVar31 * 4) = (int)uVar31;
        bVar51 = uVar31 != (ulong)(pVVar32 + (-4 - (long)pVVar23)) >> 2;
        uVar31 = uVar31 + 1;
      } while (bVar51);
    }
  }
  if (lVar38 != lVar42) {
    in_R11 = (Vec *)(ulong)uVar49;
    uVar31 = 0;
    pVVar46 = *(Vec **)(param_1 + 0x50);
    do {
      uVar33 = *(ulong *)(lVar42 + uVar31 * 8);
      uVar37 = (uint)*(undefined8 *)(pVVar46 + uVar31 * 8);
      uVar21 = (uint)uVar33;
      uVar2 = uVar37;
      if (uVar37 <= uVar21) {
        uVar2 = uVar21;
      }
      if (uVar49 <= uVar2) {
        manifold::Manifold::Impl::MarkFailure(this,7);
        goto LAB_00108766;
      }
      uVar31 = uVar31 + 1;
      *(uint *)(pVVar23 + (uVar33 & 0xffffffff) * 4) = uVar37;
    } while (uVar31 < (ulong)(lVar44 >> 3));
  }
  uVar31 = *(ulong *)(this + 0xd0);
  lVar48 = *(long *)(param_1 + 0x10);
  pVVar32 = *(Vec **)param_1;
  lVar3 = *(long *)(param_1 + 8);
  pVVar27 = pVVar32 + -3;
  *(int *)(this + 0xc4) = (int)pVVar27;
  uVar43 = (long)pVVar27 * ((ulong)(lVar48 - lVar3 >> 3) / (ulong)pVVar32);
  uVar33 = uVar31;
  if (*(ulong *)(this + 0xd8) < uVar43) {
    puVar35 = (undefined8 *)malloc(uVar43 * 8);
    puVar29 = *(undefined8 **)(this + 200);
    if (uVar31 == 0) {
      if (puVar29 == (undefined8 *)0x0) {
        *(undefined8 **)(this + 200) = puVar35;
        uVar33 = 0;
        *(ulong *)(this + 0xd8) = uVar43;
        goto LAB_001090eb;
      }
LAB_00109899:
      free(puVar29);
      uVar33 = *(ulong *)(this + 0xd0);
    }
    else {
      sVar50 = uVar31 * 8;
      if (8 < (long)sVar50) {
        memmove(puVar35,puVar29,sVar50);
        local_118 = pVVar23;
        goto LAB_00109899;
      }
      if (sVar50 == 8) {
        *puVar35 = *puVar29;
        goto LAB_00109899;
      }
      if (puVar29 != (undefined8 *)0x0) goto LAB_00109899;
    }
    *(undefined8 **)(this + 200) = puVar35;
    *(ulong *)(this + 0xd8) = uVar43;
    if (uVar33 < uVar43) goto LAB_001090eb;
LAB_001098c9:
    *(ulong *)(this + 0xd0) = uVar43;
joined_r0x001098d3:
    if (uVar43 * 2 < uVar31) {
LAB_00109126:
      sVar50 = uVar43 * 8;
      puVar29 = (undefined8 *)malloc(sVar50);
      puVar35 = *(undefined8 **)(this + 200);
      if ((long)sVar50 < 9) {
        if (sVar50 != 8) goto LAB_00108878;
        *puVar29 = *puVar35;
      }
      else {
        memmove(puVar29,puVar35,sVar50);
      }
LAB_0010915f:
      free(puVar35);
LAB_00108881:
      *(undefined8 **)(this + 200) = puVar29;
      *(undefined8 *)(this + 0xd8) = *(undefined8 *)(this + 0xd0);
    }
    lVar48 = *(long *)(param_1 + 0x10);
    pVVar32 = *(Vec **)param_1;
  }
  else {
    if (uVar31 < uVar43) {
      puVar35 = *(undefined8 **)(this + 200);
LAB_001090eb:
      if (puVar35 + uVar33 == puVar35 + uVar43) goto LAB_001098c9;
      memset(puVar35 + uVar33,0,uVar43 * 8 + uVar33 * -8);
      *(ulong *)(this + 0xd0) = uVar43;
      goto joined_r0x001098d3;
    }
    *(ulong *)(this + 0xd0) = uVar43;
    if (uVar43 * 2 < uVar31) {
      if (uVar43 != 0) goto LAB_00109126;
      puVar35 = *(undefined8 **)(this + 200);
      puVar29 = (undefined8 *)0x0;
LAB_00108878:
      if (puVar35 != (undefined8 *)0x0) goto LAB_0010915f;
      goto LAB_00108881;
    }
  }
  pVVar45 = *(Vec **)(this + 0x50);
  pVVar47 = (Vec *)(lVar48 - *(long *)(param_1 + 8) >> 3);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0xe0);
  pVVar24 = (Vec *)((ulong)pVVar47 / (ulong)pVVar32);
  pVVar25 = (Vec *)((long)pVVar24 * 2);
  pVVar39 = pVVar45;
  if (*(Vec **)(this + 0x58) < pVVar24) {
    pVVar46 = (Vec *)malloc((long)pVVar24 * 0x18);
    puVar35 = *(undefined8 **)(this + 0x48);
    local_138 = pVVar23;
    local_118 = pVVar45;
    if (pVVar45 != (Vec *)0x0) {
      sVar50 = (long)pVVar45 * 0x18;
      if ((long)sVar50 < 0x19) {
        if (sVar50 == 0x18) {
          uVar40 = puVar35[1];
          *(undefined8 *)pVVar46 = *puVar35;
          *(undefined8 *)(pVVar46 + 8) = uVar40;
          *(undefined8 *)(pVVar46 + 0x10) = puVar35[2];
          goto LAB_00109994;
        }
        if (puVar35 != (undefined8 *)0x0) goto LAB_00109994;
      }
      else {
        pVVar46 = (Vec *)memmove(pVVar46,puVar35,sVar50);
LAB_00109994:
        free(puVar35);
        pVVar39 = *(Vec **)(this + 0x50);
        local_138 = pVVar25;
        local_118 = pVVar23;
      }
      *(Vec **)(this + 0x48) = pVVar46;
      *(Vec **)(this + 0x58) = pVVar24;
      goto LAB_001088df;
    }
    if (puVar35 != (undefined8 *)0x0) goto LAB_00109994;
    *(Vec **)(this + 0x48) = pVVar46;
    *(Vec **)(this + 0x58) = pVVar24;
LAB_001092a5:
    lVar48 = *(long *)(this + 0x48);
    for (pauVar28 = (undefined1 (*) [16])(lVar48 + (long)pVVar39 * 0x18);
        (undefined1 (*) [16])(lVar48 + (long)pVVar24 * 0x18) != pauVar28;
        pauVar28 = (undefined1 (*) [16])(pauVar28[1] + 8)) {
      *(undefined8 *)pauVar28[1] = 0;
      *pauVar28 = (undefined1  [16])0x0;
    }
  }
  else {
LAB_001088df:
    if (pVVar39 < pVVar24) goto LAB_001092a5;
  }
  *(Vec **)(this + 0x50) = pVVar24;
  if (pVVar25 < pVVar45) {
    if (pVVar47 < pVVar32) {
      puVar35 = *(undefined8 **)(this + 0x48);
      puVar29 = (undefined8 *)0x0;
LAB_001093c1:
      if (puVar35 != (undefined8 *)0x0) goto LAB_00109930;
    }
    else {
      pVVar25 = (Vec *)((long)pVVar24 * 3);
      sVar50 = (long)pVVar24 * 0x18;
      puVar29 = (undefined8 *)malloc(sVar50);
      puVar35 = *(undefined8 **)(this + 0x48);
      if ((long)sVar50 < 0x19) {
        local_118 = pVVar23;
        if (sVar50 != 0x18) goto LAB_001093c1;
        uVar40 = puVar35[1];
        *puVar29 = *puVar35;
        puVar29[1] = uVar40;
        puVar29[2] = puVar35[2];
      }
      else {
        memmove(puVar29,puVar35,sVar50);
        local_118 = pVVar23;
      }
LAB_00109930:
      free(puVar35);
      pVVar24 = *(Vec **)(this + 0x50);
    }
    *(undefined8 **)(this + 0x48) = puVar29;
    *(Vec **)(this + 0x58) = pVVar24;
  }
  uVar40 = _LC31;
  pVVar45 = *(Vec **)(param_1 + 8);
  pVVar24 = *(Vec **)param_1;
  pVVar39 = (Vec *)((long)*(Vec **)(param_1 + 0x10) - (long)pVVar45 >> 3);
  local_148 = (Vec *)((ulong)pVVar39 / (ulong)pVVar24);
  local_158 = *(Vec **)(param_1 + 0x10);
  if (pVVar24 <= pVVar39) {
    puVar35 = *(undefined8 **)(this + 0x48);
    lVar48 = 0;
    local_138 = (Vec *)((long)pVVar24 * 8);
    in_R11 = (Vec *)0x3;
    local_118 = (Vec *)&local_58;
    pVVar46 = (Vec *)0x0;
    pVVar32 = (Vec *)((long)&uStack_50 + 4);
    local_128 = (long)pVVar27 * 8;
    pVVar39 = pVVar45;
    do {
      uStack_50 = CONCAT44(uStack_50._4_4_,2);
      local_58 = uVar40;
      pVVar25 = local_118;
      do {
        iVar22 = *(int *)pVVar25;
        puVar29 = puVar35;
        if ((iVar22 != 0) && (puVar29 = puVar35 + 1, iVar22 != 1)) {
          puVar29 = puVar35 + 2;
        }
        pVVar25 = pVVar25 + 4;
        *puVar29 = *(undefined8 *)(pVVar45 + (long)(in_R11 + (long)iVar22 + -3) * 8);
      } while (pVVar32 != pVVar25);
      if (pVVar27 != (Vec *)0x0) {
        lVar3 = *(long *)(this + 200);
        pVVar25 = (Vec *)0x0;
        do {
          *(undefined8 *)(lVar3 + lVar48 + (long)pVVar25 * 8) =
               *(undefined8 *)(pVVar39 + (long)pVVar25 * 8 + 0x18);
          pVVar25 = pVVar25 + 1;
        } while (pVVar27 != pVVar25);
      }
      pVVar46 = pVVar46 + 1;
      in_R11 = in_R11 + (long)pVVar24;
      puVar35 = puVar35 + 3;
      pVVar39 = pVVar39 + (long)local_138;
      lVar48 = lVar48 + local_128;
      pVVar25 = pVVar24;
      local_158 = pVVar24;
    } while (pVVar46 < local_148);
  }
  pVVar24 = *(Vec **)(this + 0xb0);
  pVVar47 = (Vec *)((ulong)(*(long *)(param_1 + 0xd0) - *(long *)(param_1 + 200) >> 3) >> 2);
  pVVar27 = (Vec *)((long)pVVar47 * 2);
  pVVar26 = pVVar24;
  if (*(Vec **)(this + 0xb8) < pVVar47) {
    pVVar25 = (Vec *)((long)pVVar47 << 5);
    pVVar32 = (Vec *)malloc((size_t)pVVar25);
    pVVar39 = *(Vec **)(this + 0xa8);
    local_158 = pVVar25;
    if (pVVar24 == (Vec *)0x0) {
      if (pVVar39 == (Vec *)0x0) {
        *(Vec **)(this + 0xa8) = pVVar32;
        pVVar26 = (Vec *)0x0;
        *(Vec **)(this + 0xb8) = pVVar47;
        local_118 = pVVar23;
        goto LAB_00108a97;
      }
LAB_001097c2:
      free(pVVar39);
      pVVar26 = *(Vec **)(this + 0xb0);
      local_158 = pVVar23;
      local_118 = pVVar25;
    }
    else {
      sVar50 = (long)pVVar24 * 0x20;
      if (0x20 < (long)sVar50) {
        memmove(pVVar32,pVVar39,sVar50);
        local_148 = pVVar25;
        goto LAB_001097c2;
      }
      if (sVar50 == 0x20) {
        uVar40 = *(undefined8 *)(pVVar39 + 8);
        *(undefined8 *)pVVar32 = *(undefined8 *)pVVar39;
        *(undefined8 *)(pVVar32 + 8) = uVar40;
        uVar40 = *(undefined8 *)(pVVar39 + 0x18);
        *(undefined8 *)(pVVar32 + 0x10) = *(undefined8 *)(pVVar39 + 0x10);
        *(undefined8 *)(pVVar32 + 0x18) = uVar40;
        goto LAB_001097c2;
      }
      local_118 = pVVar23;
      if (pVVar39 != (Vec *)0x0) goto LAB_001097c2;
    }
    *(Vec **)(this + 0xa8) = pVVar32;
    *(Vec **)(this + 0xb8) = pVVar47;
    if (pVVar26 < pVVar47) goto LAB_00108a97;
LAB_001097fc:
    *(Vec **)(this + 0xb0) = pVVar47;
    if (pVVar24 <= pVVar27) goto LAB_00108ae4;
LAB_0010980c:
    pVVar25 = (Vec *)((long)pVVar47 << 5);
    puVar35 = (undefined8 *)malloc((size_t)pVVar25);
    pVVar24 = *(Vec **)(this + 0xa8);
    if ((long)pVVar25 < 0x21) {
      local_158 = pVVar25;
      local_118 = pVVar23;
      if (pVVar25 != (Vec *)0x20) goto LAB_00109323;
      uVar40 = *(undefined8 *)(pVVar24 + 8);
      *puVar35 = *(undefined8 *)pVVar24;
      puVar35[1] = uVar40;
      uVar40 = *(undefined8 *)(pVVar24 + 0x18);
      puVar35[2] = *(undefined8 *)(pVVar24 + 0x10);
      puVar35[3] = uVar40;
    }
    else {
      pVVar39 = pVVar24;
      memmove(puVar35,pVVar24,(size_t)pVVar25);
      local_118 = pVVar23;
    }
LAB_00109854:
    free(pVVar24);
    local_158 = pVVar23;
LAB_0010932c:
    *(undefined8 **)(this + 0xa8) = puVar35;
    pVVar47 = *(Vec **)(this + 0xb0);
    *(Vec **)(this + 0xb8) = pVVar47;
LAB_00109341:
    if (pVVar47 != (Vec *)0x0) goto LAB_00108ae4;
    pVVar47 = (Vec *)0x0;
  }
  else {
    if (pVVar47 <= pVVar24) {
      *(Vec **)(this + 0xb0) = pVVar47;
      if (pVVar27 < pVVar24) {
        if (pVVar47 != (Vec *)0x0) goto LAB_0010980c;
        pVVar24 = *(Vec **)(this + 0xa8);
        puVar35 = (undefined8 *)0x0;
LAB_00109323:
        if (pVVar24 != (Vec *)0x0) goto LAB_00109854;
        goto LAB_0010932c;
      }
      goto LAB_00109341;
    }
    pVVar32 = *(Vec **)(this + 0xa8);
LAB_00108a97:
    pVVar25 = pVVar32 + (long)pVVar26 * 0x20;
    if (pVVar32 + (long)pVVar47 * 0x20 == pVVar25) goto LAB_001097fc;
    uVar31 = 0;
    pVVar26 = pVVar25;
    do {
      uVar31 = uVar31 + 1;
      *(undefined1 (*) [16])pVVar26 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pVVar26 + 0x10) = (undefined1  [16])0x0;
      pVVar26 = pVVar26 + 0x20;
    } while (uVar31 < ((ulong)(pVVar32 + (long)pVVar47 * 0x20 + (-0x20 - (long)pVVar25)) >> 5) + 1);
    *(Vec **)(this + 0xb0) = pVVar47;
    if (pVVar27 < pVVar24) goto LAB_0010980c;
LAB_00108ae4:
    uStack_50 = _UNK_0010c338;
    local_58 = _LC31;
    lVar48 = 0;
    pVVar39 = *(Vec **)(this + 0xa8);
    pVVar45 = local_48;
    pVVar46 = *(Vec **)(param_1 + 200);
    in_R11 = pVVar39 + (long)pVVar47 * 0x20;
    do {
      pVVar27 = pVVar39 + 8;
      pVVar24 = pVVar39 + 0x18;
      pVVar47 = pVVar39 + 0x10;
      pVVar26 = (Vec *)&local_58;
      do {
        iVar22 = *(int *)pVVar26;
        pVVar32 = (Vec *)(long)iVar22;
        pVVar25 = pVVar39;
        if (((iVar22 != 0) && (pVVar25 = pVVar27, iVar22 != 1)) && (pVVar25 = pVVar24, iVar22 == 2))
        {
          pVVar25 = pVVar47;
        }
        pVVar26 = pVVar26 + 4;
        *(undefined8 *)pVVar25 = *(undefined8 *)(pVVar46 + (long)(pVVar32 + lVar48) * 8);
      } while (pVVar26 != pVVar45);
      pVVar39 = pVVar39 + 0x20;
      lVar48 = lVar48 + 4;
    } while (pVVar39 != in_R11);
  }
  if (*(long *)(param_1 + 0x88) == *(long *)(param_1 + 0x80)) {
    local_158 = (Vec *)0x0;
  }
  else {
    pVVar26 = (Vec *)(*(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x68));
    if (pVVar26 == (Vec *)0x0) {
      sVar50 = 0;
      pVVar46 = (Vec *)0x0;
      pVVar27 = (Vec *)0x0;
      local_78 = (Vec *)0x0;
      pVStack_68 = (Vec *)0x0;
    }
    else {
      if ((Vec *)0x7ffffffffffffff8 < pVVar26) {
        std::__throw_bad_array_new_length();
        sVar50 = extraout_RDX * 0xc;
        if ((long)sVar50 < 0xd) {
          if (sVar50 == 0xc) {
            *(undefined8 *)in_R11 = *(undefined8 *)pVVar39;
            *(int *)(in_R11 + 8) = *(int *)(pVVar39 + 8);
          }
          else {
            lVar48 = extraout_RDX;
            if (pVVar39 == (Vec *)0x0) goto LAB_00109c81;
          }
        }
        else {
          in_R11 = (Vec *)memmove(in_R11,pVVar39,sVar50);
        }
        free(pVVar39);
        lVar48 = *(long *)(pVVar46 + 0x130);
LAB_00109c81:
        *(Vec **)(pVVar46 + 0x128) = in_R11;
        *(ulong *)(pVVar46 + 0x138) = uVar34;
        *(long *)(pVVar46 + 0x130) = lVar48 + 1;
        *(undefined4 *)(in_R11 + lVar48 * 0xc + 8) = local_148._0_4_;
        *(ulong *)(in_R11 + lVar48 * 0xc) = CONCAT44(local_138._0_4_,(undefined4)local_128);
        pVVar39 = (Vec *)this;
        this = (Impl *)pVVar46;
        uVar40 = extraout_XMM1_Qa;
        goto LAB_001095c0;
      }
      pVVar27 = (Vec *)operator_new((ulong)pVVar26);
      pVVar46 = pVVar27 + (long)pVVar26;
      __src = *(ulong **)(param_1 + 0x68);
      sVar50 = *(long *)(param_1 + 0x70) - (long)__src;
      local_78 = pVVar27;
      pVStack_68 = pVVar46;
      if ((long)sVar50 < 9) {
        if (sVar50 == 8) {
          *(ulong *)pVVar27 = *__src;
        }
      }
      else {
        pVVar27 = (Vec *)memmove(pVVar27,__src,sVar50);
      }
    }
    local_70 = (undefined1  [8])(pVVar27 + sVar50);
    uVar33 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20);
    uVar31 = (long)uVar33 >> 3;
    local_90 = uVar31;
    if (local_70 == (undefined1  [8])pVVar27) {
      if (pVVar26 < (Vec *)0x10) {
        pVVar46 = (Vec *)operator_new(0x10);
        *(ulong *)pVVar46 = 0;
        *(ulong *)(pVVar46 + 8) = uVar31;
        if (pVVar27 != (Vec *)0x0) {
          operator_delete(pVVar27,(ulong)pVVar26);
        }
        local_70 = (undefined1  [8])(pVVar46 + 0x10);
        pVVar26 = (Vec *)&DAT_00000010;
        uVar33 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20);
        uVar31 = (long)uVar33 >> 3;
        pVVar27 = pVVar46;
        local_78 = pVVar46;
        pVStack_68 = (Vec *)local_70;
      }
      else {
        local_70 = (undefined1  [8])(pVVar27 + 0x10);
        *(ulong *)pVVar27 = 0;
        *(ulong *)(pVVar27 + 8) = uVar31;
      }
    }
    else if (*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 2 == (long)sVar50 >> 3) {
      if (local_70 == (undefined1  [8])pVVar46) {
        std::vector<unsigned_long,std::allocator<unsigned_long>>::
        _M_realloc_insert<unsigned_long_const&>
                  ((vector<unsigned_long,std::allocator<unsigned_long>> *)&local_78,pVVar46,
                   &local_90);
        uVar33 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20);
        pVVar26 = pVStack_68 + -(long)local_78;
        uVar31 = (long)uVar33 >> 3;
        pVVar27 = local_78;
      }
      else {
        *(ulong *)local_70 = uVar31;
        local_70 = (undefined1  [8])((long)local_70 + 8);
      }
    }
    local_158 = (Vec *)0x0;
    if (0x10 < uVar33) {
      sVar50 = (uVar31 / 3) * 0x10;
      local_158 = (Vec *)malloc(sVar50);
      if (sVar50 != 0) {
        uVar31 = 0;
        do {
          uVar33 = uVar31 + 1;
          *(undefined1 (*) [16])(local_158 + uVar31 * 0x10) = (undefined1  [16])0x0;
          uVar31 = uVar33;
        } while (uVar33 < (sVar50 - 0x10 >> 4) + 1);
      }
    }
    iVar22 = manifold::Manifold::Impl::ReserveIDs
                       ((uint)(*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 2));
    lVar48 = *(long *)(param_1 + 0x80);
    uVar31 = 0;
    if (lVar48 == *(long *)(param_1 + 0x88)) {
      if (pVVar27 == (Vec *)0x0) goto LAB_00108f3a;
    }
    else {
      do {
        iVar1 = *(int *)(lVar48 + uVar31 * 4);
        uVar33 = *(ulong *)(pVVar27 + (uVar31 + 1) * 8);
        uVar43 = *(ulong *)(pVVar27 + uVar31 * 8) / 3;
        if (uVar43 < uVar33 / 3) {
          lVar3 = *(long *)(param_1 + 0xb8);
          lVar4 = *(long *)(param_1 + 0xb0);
          pVVar46 = local_158 + uVar43 * 0x10;
          do {
            *(int *)pVVar46 = iVar22;
            iVar30 = (int)uVar43;
            *(int *)(pVVar46 + 4) = iVar1;
            iVar41 = iVar30;
            if (lVar3 != lVar4) {
              iVar41 = *(int *)(lVar4 + uVar43 * 8);
            }
            uVar43 = uVar43 + 1;
            *(int *)(pVVar46 + 8) = iVar41;
            *(int *)(pVVar46 + 0xc) = iVar30;
            pVVar46 = pVVar46 + 0x10;
          } while (uVar43 != uVar33 / 3);
        }
        pVVar46 = *(Vec **)(this + 0xf0);
        local_94 = iVar22;
        if (*(long *)(param_1 + 0xa0) == *(long *)(param_1 + 0x98)) {
          pVVar32 = local_150;
          if (pVVar46 == (Vec *)0x0) {
LAB_001091de:
            local_88 = &local_94;
            pVVar32 = (Vec *)std::
                             _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
                             ::
                             _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
                                       (this + 0xe0,pVVar32,&local_88);
            lVar48 = *(long *)(param_1 + 0x80);
          }
          else {
            do {
              while( true ) {
                pVVar25 = pVVar46;
                if (*(int *)(pVVar25 + 0x20) < iVar22) break;
                pVVar46 = *(Vec **)(pVVar25 + 0x10);
                pVVar32 = pVVar25;
                if (*(Vec **)(pVVar25 + 0x10) == (Vec *)0x0) goto LAB_001091d1;
              }
              pVVar46 = *(Vec **)(pVVar25 + 0x18);
            } while (*(Vec **)(pVVar25 + 0x18) != (Vec *)0x0);
LAB_001091d1:
            if ((local_150 == pVVar32) || (iVar22 < *(int *)(pVVar32 + 0x20))) goto LAB_001091de;
          }
          uVar40 = _LC11;
          *(int *)(pVVar32 + 0x28) = iVar1;
          pVVar32[0x90] = (Vec)0x0;
          *(undefined8 *)(pVVar32 + 0x30) = uVar40;
          *(undefined8 *)(pVVar32 + 0x38) = 0;
          *(undefined1 (*) [16])(pVVar32 + 0x40) = (undefined1  [16])0x0;
          *(undefined8 *)(pVVar32 + 0x50) = uVar40;
          *(undefined8 *)(pVVar32 + 0x58) = 0;
          *(undefined1 (*) [16])(pVVar32 + 0x60) = (undefined1  [16])0x0;
          *(undefined8 *)(pVVar32 + 0x70) = uVar40;
          *(undefined8 *)(pVVar32 + 0x78) = 0;
          *(undefined1 (*) [16])(pVVar32 + 0x80) = (undefined1  [16])0x0;
        }
        else {
          puVar35 = (undefined8 *)(*(long *)(param_1 + 0x98) + uVar31 * 0x60);
          uVar40 = *puVar35;
          uVar7 = puVar35[1];
          uVar8 = puVar35[2];
          uVar9 = puVar35[3];
          uVar10 = puVar35[4];
          uVar11 = puVar35[5];
          uVar12 = puVar35[6];
          uVar13 = puVar35[7];
          uVar14 = puVar35[8];
          uVar15 = puVar35[9];
          uVar16 = puVar35[10];
          uVar17 = puVar35[0xb];
          pVVar32 = local_150;
          if (pVVar46 == (Vec *)0x0) {
LAB_00108e42:
            local_88 = &local_94;
            pVVar32 = (Vec *)std::
                             _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
                             ::
                             _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
                                       (this + 0xe0,pVVar32,&local_88);
            lVar48 = *(long *)(param_1 + 0x80);
          }
          else {
            do {
              while( true ) {
                pVVar25 = pVVar46;
                if (*(int *)(pVVar25 + 0x20) < iVar22) break;
                pVVar46 = *(Vec **)(pVVar25 + 0x10);
                pVVar32 = pVVar25;
                if (*(Vec **)(pVVar25 + 0x10) == (Vec *)0x0) goto LAB_00108e31;
              }
              pVVar46 = *(Vec **)(pVVar25 + 0x18);
            } while (*(Vec **)(pVVar25 + 0x18) != (Vec *)0x0);
LAB_00108e31:
            if ((local_150 == pVVar32) || (iVar22 < *(int *)(pVVar32 + 0x20))) goto LAB_00108e42;
          }
          *(int *)(pVVar32 + 0x28) = iVar1;
          pVVar32[0x90] = (Vec)0x0;
          *(undefined8 *)(pVVar32 + 0x30) = uVar40;
          *(undefined8 *)(pVVar32 + 0x38) = uVar7;
          *(undefined8 *)(pVVar32 + 0x40) = uVar8;
          *(undefined8 *)(pVVar32 + 0x48) = uVar9;
          *(undefined8 *)(pVVar32 + 0x50) = uVar10;
          *(undefined8 *)(pVVar32 + 0x58) = uVar11;
          *(undefined8 *)(pVVar32 + 0x60) = uVar12;
          *(undefined8 *)(pVVar32 + 0x68) = uVar13;
          *(undefined8 *)(pVVar32 + 0x70) = uVar14;
          *(undefined8 *)(pVVar32 + 0x78) = uVar15;
          *(undefined8 *)(pVVar32 + 0x80) = uVar16;
          *(undefined8 *)(pVVar32 + 0x88) = uVar17;
        }
        uVar31 = uVar31 + 1;
        iVar22 = iVar22 + 1;
      } while (uVar31 < (ulong)(*(long *)(param_1 + 0x88) - lVar48 >> 2));
    }
    operator_delete(pVVar27,(ulong)pVVar26);
  }
LAB_00108f3a:
  local_78 = (Vec *)0x0;
  _local_70 = (undefined1  [16])0x0;
  uVar31 = uVar34 & 0xffffffff;
  pVVar26 = pVVar23;
  if ((int)uVar34 != 0) {
    pVVar24 = (Vec *)0x0;
    pVVar32 = (Vec *)((long)&uStack_50 + 4);
    local_78 = (Vec *)malloc(uVar31 * 0xc);
    pVStack_68 = (Vec *)uVar31;
    pVVar39 = (Vec *)&local_88;
    pVVar25 = (Vec *)((long)&local_88 + 4);
    pVVar45 = (Vec *)local_80;
    local_150 = local_158 + uVar31 * 0x10;
    pVVar47 = (Vec *)(ulong)uVar49;
    local_118 = (Vec *)&local_58;
    pVVar27 = local_158;
    pMVar19 = param_1;
    uVar40 = _LC31;
    do {
      pVVar23 = (Vec *)pMVar19;
      local_88 = (int *)0x0;
      lVar48 = *(long *)(pVVar23 + 0x20);
      local_80[0] = 0;
      uStack_50 = CONCAT44(uStack_50._4_4_,2);
      pVVar46 = local_118;
      do {
        iVar22 = *(int *)pVVar46;
        uVar31 = *(ulong *)(lVar48 + (long)(pVVar24 + iVar22) * 8);
        local_58 = uVar40;
        if ((uint)pVVar47 <= (uint)uVar31) {
          manifold::Manifold::Impl::MarkFailure(this,3);
          pVVar23 = pVVar26;
          goto joined_r0x00109603;
        }
        pVVar36 = pVVar39;
        if ((iVar22 != 0) && (pVVar36 = pVVar25, iVar22 != 1)) {
          pVVar36 = pVVar45;
        }
        pVVar46 = pVVar46 + 4;
        *(int *)pVVar36 = *(int *)(pVVar26 + (uVar31 & 0xffffffff) * 4);
      } while (pVVar32 != pVVar46);
LAB_001095c0:
      pVVar27 = pVVar27 + 0x10;
      pVVar24 = pVVar24 + 3;
      pMVar19 = (MeshGLP *)pVVar23;
    } while (pVVar27 != local_150);
  }
  manifold::Manifold::Impl::CreateHalfedges((Vec *)this);
  cVar20 = manifold::Manifold::Impl::IsManifold();
  pVVar23 = pVVar26;
  if (cVar20 == '\0') {
    manifold::Manifold::Impl::MarkFailure(this,2);
  }
  else {
    manifold::Manifold::Impl::CalculateBBox();
    manifold::Manifold::Impl::SetEpsilon(_LC24,SUB81(this,0));
    manifold::Manifold::Impl::SplitPinchedVerts();
    manifold::Manifold::Impl::CalculateNormals();
    if (*(long *)(param_1 + 0x88) == *(long *)(param_1 + 0x80)) {
      manifold::Manifold::Impl::InitializeOriginal(SUB81(this,0));
    }
    manifold::Manifold::Impl::CreateFaces();
    manifold::Manifold::Impl::SimplifyTopology();
    manifold::Manifold::Impl::RemoveUnreferencedVerts();
    manifold::Manifold::Impl::Finish();
    cVar20 = manifold::Manifold::Impl::IsFinite();
    if (cVar20 == '\0') {
      manifold::Manifold::Impl::MarkFailure(this,1);
    }
    else {
      *(undefined4 *)((Vec *)this + 0xc0) = 0xffffffff;
    }
  }
joined_r0x00109603:
  if (local_78 != (Vec *)0x0) {
    free(local_78);
  }
  if (local_158 != (Vec *)0x0) {
    free(local_158);
  }
LAB_00108766:
  if (pVVar23 == (Vec *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator_delete(pVVar23,local_100);
    return;
  }
LAB_0010a175:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if (0xfffffffffffffffe < uVar2) goto LAB_0010a280;
    uVar3 = 0x1fffffffffffffff;
    if (uVar2 + 1 < 0x2000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 2;
LAB_0010a28a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_0010a280:
      uVar3 = 0x7ffffffffffffffc;
      goto LAB_0010a28a;
    }
    if (uVar3 != 0) {
      if (0x1fffffffffffffff < uVar3) {
        uVar3 = 0x1fffffffffffffff;
      }
      uVar3 = uVar3 * 4;
      goto LAB_0010a28a;
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
    if (__src == (void *)0x0) goto LAB_0010a25b;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010a25b:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010b402) */
/* WARNING: Removing unreachable block (ram,0x0010b414) */
/* WARNING: Removing unreachable block (ram,0x0010b41e) */
/* WARNING: Removing unreachable block (ram,0x0010b4c8) */
/* WARNING: Removing unreachable block (ram,0x0010b87b) */
/* WARNING: Removing unreachable block (ram,0x0010b4d1) */
/* WARNING: Removing unreachable block (ram,0x0010be69) */
/* WARNING: Removing unreachable block (ram,0x0010b889) */
/* WARNING: Removing unreachable block (ram,0x0010bb60) */
/* WARNING: Removing unreachable block (ram,0x0010c067) */
/* WARNING: Removing unreachable block (ram,0x0010c06d) */
/* WARNING: Removing unreachable block (ram,0x0010bb72) */
/* WARNING: Removing unreachable block (ram,0x0010b91e) */
/* WARNING: Removing unreachable block (ram,0x0010bbf1) */
/* WARNING: Removing unreachable block (ram,0x0010b927) */
/* WARNING: Removing unreachable block (ram,0x0010b4e3) */
/* WARNING: Removing unreachable block (ram,0x0010b43f) */
/* WARNING: Removing unreachable block (ram,0x0010b462) */
/* WARNING: Removing unreachable block (ram,0x0010b504) */
/* WARNING: Removing unreachable block (ram,0x0010b946) */
/* WARNING: Removing unreachable block (ram,0x0010bc68) */
/* WARNING: Removing unreachable block (ram,0x0010b959) */
/* WARNING: Removing unreachable block (ram,0x0010bfb8) */
/* WARNING: Removing unreachable block (ram,0x0010bc76) */
/* WARNING: Removing unreachable block (ram,0x0010beba) */
/* WARNING: Removing unreachable block (ram,0x0010c083) */
/* WARNING: Removing unreachable block (ram,0x0010c089) */
/* WARNING: Removing unreachable block (ram,0x0010becb) */
/* WARNING: Removing unreachable block (ram,0x0010bce3) */
/* WARNING: Removing unreachable block (ram,0x0010bf29) */
/* WARNING: Removing unreachable block (ram,0x0010bcec) */
/* WARNING: Removing unreachable block (ram,0x0010b96b) */
/* WARNING: Removing unreachable block (ram,0x0010b977) */
/* WARNING: Removing unreachable block (ram,0x0010b520) */
/* WARNING: Removing unreachable block (ram,0x0010b471) */
/* WARNING: Removing unreachable block (ram,0x0010b548) */
/* WARNING: Removing unreachable block (ram,0x0010b99b) */
/* WARNING: Removing unreachable block (ram,0x0010baad) */
/* WARNING: Removing unreachable block (ram,0x0010b9a4) */
/* WARNING: Removing unreachable block (ram,0x0010bff2) */
/* WARNING: Removing unreachable block (ram,0x0010babb) */
/* WARNING: Removing unreachable block (ram,0x0010bd57) */
/* WARNING: Removing unreachable block (ram,0x0010c096) */
/* WARNING: Removing unreachable block (ram,0x0010c09c) */
/* WARNING: Removing unreachable block (ram,0x0010bd69) */
/* WARNING: Removing unreachable block (ram,0x0010bb3a) */
/* WARNING: Removing unreachable block (ram,0x0010bdd9) */
/* WARNING: Removing unreachable block (ram,0x0010bb43) */
/* WARNING: Removing unreachable block (ram,0x0010b9b6) */
/* WARNING: Removing unreachable block (ram,0x0010b9c2) */
/* WARNING: Removing unreachable block (ram,0x0010b577) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::Manifold::Impl::Impl<float, unsigned int>(manifold::MeshGLP<float, unsigned int>
   const&) */

void __thiscall manifold::Manifold::Impl::Impl<float,unsigned_int>(Impl *this,MeshGLP *param_1)

{
  Impl *pIVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  Impl *pIVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  undefined8 uVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  double *pdVar21;
  double *pdVar22;
  undefined1 (*pauVar23) [16];
  ulong uVar24;
  Impl *pIVar25;
  Impl *pIVar26;
  undefined1 (*pauVar27) [16];
  double *pdVar28;
  int *piVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  double *pdVar34;
  float *pfVar35;
  void *pvVar36;
  int iVar37;
  long lVar38;
  double *__src;
  undefined8 uVar39;
  uint uVar40;
  uint uVar41;
  long lVar42;
  double *pdVar43;
  ulong uVar44;
  double *in_R11;
  long lVar45;
  double *pdVar46;
  size_t sVar47;
  long lVar48;
  uint uVar49;
  long in_FS_OFFSET;
  bool bVar50;
  undefined1 uVar51;
  void *local_188;
  ulong local_178;
  double *local_148;
  float local_138;
  float fStack_134;
  float local_128;
  float fStack_124;
  float local_118;
  float fStack_114;
  ulong local_100;
  double dStack_f0;
  int local_8c;
  undefined8 local_88;
  int local_80 [2];
  double *local_78;
  undefined1 local_70 [8];
  double *pdStack_68;
  double local_58;
  undefined1 auStack_50 [8];
  double local_48;
  long local_40;
  
  uVar39 = _LC19;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = _LC19;
  *(undefined8 *)(this + 8) = uVar39;
  uVar17 = _LC22;
  uVar39 = __LC20;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x10) = uVar39;
  *(undefined8 *)(this + 0x18) = uVar17;
  uVar39 = _LC22;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x20) = uVar39;
  *(undefined8 *)(this + 0x28) = uVar39;
  dVar16 = _LC24;
  *(undefined8 *)(this + 0x78) = 0;
  *(double *)(this + 0x30) = dVar16;
  *(double *)(this + 0x38) = dVar16;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x90) = 0;
  uVar39 = _LC25;
  lVar45 = *(long *)(param_1 + 0x10);
  lVar48 = *(long *)(param_1 + 8);
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 200) = 0;
  lVar4 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(this + 0xc0) = uVar39;
  uVar49 = *(uint *)param_1;
  pIVar1 = this + 0xe8;
  *(undefined4 *)(this + 0xe8) = 0;
  lVar5 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(this + 0xf0) = 0;
  *(Impl **)(this + 0xf8) = pIVar1;
  *(Impl **)(this + 0x100) = pIVar1;
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
  if (uVar49 < 3) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar39 = 5;
LAB_0010a76c:
      manifold::Manifold::Impl::MarkFailure(this,uVar39);
      return;
    }
    goto LAB_0010c062;
  }
  lVar42 = *(long *)(param_1 + 0x40);
  lVar38 = *(long *)(param_1 + 0x38);
  lVar30 = lVar42 - lVar38;
  if (lVar30 != *(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar39 = 6;
      goto LAB_0010a76c;
    }
    goto LAB_0010c062;
  }
  if ((*(long *)(param_1 + 0x98) != *(long *)(param_1 + 0xa0)) &&
     (in_R11 = (double *)((*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 2) * 0xc),
     in_R11 != (double *)(*(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98) >> 2))) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar39 = 8;
      goto LAB_0010a76c;
    }
    goto LAB_0010c062;
  }
  if (*(long *)(param_1 + 0x88) != *(long *)(param_1 + 0x80)) {
    in_R11 = *(double **)(param_1 + 0x70);
    if (*(double **)(param_1 + 0x68) != in_R11) {
      pdVar21 = (double *)(*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80));
      in_R11 = (double *)((long)in_R11 - (long)*(double **)(param_1 + 0x68));
      if ((((long)pdVar21 >> 2) + 1 != (long)in_R11 >> 2) && (in_R11 != pdVar21)) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar39 = 9;
          goto LAB_0010a76c;
        }
        goto LAB_0010c062;
      }
    }
  }
  uVar32 = (ulong)(lVar4 - lVar5 >> 2) / 3;
  if ((*(long *)(param_1 + 0xb0) != *(long *)(param_1 + 0xb8)) &&
     (*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 2 != (uVar32 & 0xffffffff))) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar39 = 10;
      goto LAB_0010a76c;
    }
    goto LAB_0010c062;
  }
  local_148 = (double *)0x0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = lVar45 - lVar48 >> 2;
  auVar7 = auVar7 / ZEXT416(uVar49);
  uVar49 = auVar7._0_4_;
  uVar33 = auVar7._0_8_ & 0xffffffff;
  local_100 = uVar33;
  if (uVar49 != 0) {
    local_100 = uVar33 * 4;
    local_148 = (double *)operator_new(local_100);
    pdVar21 = (double *)((long)local_148 + 4);
    *(int *)local_148 = 0;
    if (uVar33 == 1) {
      local_100 = 4;
      pdVar28 = pdVar21;
    }
    else {
      pdVar28 = (double *)((long)local_148 + local_100);
      if (pdVar21 != pdVar28) {
        memset(pdVar21,0,local_100 - 4);
      }
    }
    lVar42 = *(long *)(param_1 + 0x40);
    lVar38 = *(long *)(param_1 + 0x38);
    lVar30 = lVar42 - lVar38;
    if (pdVar28 != local_148) {
      uVar33 = 0;
      do {
        *(int *)((long)local_148 + uVar33 * 4) = (int)uVar33;
        bVar50 = uVar33 != (ulong)((long)pdVar28 + (-4 - (long)local_148)) >> 2;
        uVar33 = uVar33 + 1;
      } while (bVar50);
    }
  }
  if (lVar42 != lVar38) {
    uVar33 = 0;
    lVar45 = *(long *)(param_1 + 0x50);
    do {
      uVar41 = *(uint *)(lVar38 + uVar33 * 4);
      uVar2 = *(uint *)(lVar45 + uVar33 * 4);
      uVar40 = uVar2;
      if (uVar2 <= uVar41) {
        uVar40 = uVar41;
      }
      if (uVar49 <= uVar40) {
        manifold::Manifold::Impl::MarkFailure(this,7);
        goto LAB_0010a709;
      }
      uVar33 = uVar33 + 1;
      *(uint *)((long)local_148 + (ulong)uVar41 * 4) = uVar2;
      in_R11 = local_148;
    } while (uVar33 < (ulong)(lVar30 >> 2));
  }
  pdVar28 = *(double **)(this + 0xd0);
  lVar48 = *(long *)(param_1 + 0x10);
  __src = (double *)(ulong)*(uint *)param_1;
  lVar45 = *(long *)(param_1 + 8);
  uVar41 = *(uint *)param_1 - 3;
  *(uint *)(this + 0xc4) = uVar41;
  pdVar43 = (double *)(ulong)(uVar41 * (int)((ulong)(lVar48 - lVar45 >> 2) / (ulong)__src));
  pdVar21 = (double *)((long)pdVar43 * 2);
  pdVar46 = pdVar28;
  if (*(double **)(this + 0xd8) < pdVar43) {
    pdVar22 = (double *)malloc((long)pdVar43 * 8);
    __src = *(double **)(this + 200);
    if (pdVar28 == (double *)0x0) {
      if (__src == (double *)0x0) {
        *(double **)(this + 200) = pdVar22;
        pdVar46 = (double *)0x0;
        *(double **)(this + 0xd8) = pdVar43;
        goto LAB_0010b023;
      }
LAB_0010b7f4:
      free(__src);
      pdVar46 = *(double **)(this + 0xd0);
    }
    else {
      sVar47 = (long)pdVar28 * 8;
      if (8 < (long)sVar47) {
        pdVar22 = (double *)memmove(pdVar22,__src,sVar47);
        goto LAB_0010b7f4;
      }
      if (sVar47 == 8) {
        *pdVar22 = *__src;
        goto LAB_0010b7f4;
      }
      if (__src != (double *)0x0) goto LAB_0010b7f4;
    }
    *(double **)(this + 200) = pdVar22;
    *(double **)(this + 0xd8) = pdVar43;
    if (pdVar46 < pdVar43) goto LAB_0010b023;
LAB_0010b824:
    *(double **)(this + 0xd0) = pdVar43;
    if (pdVar21 < pdVar28) {
LAB_0010b834:
      pdVar46 = (double *)malloc((long)pdVar43 * 8);
      pdVar28 = *(double **)(this + 200);
      if (pdVar43 == (double *)0x1) {
        *pdVar46 = *pdVar28;
      }
      else {
        __src = pdVar28;
        memmove(pdVar46,pdVar28,(long)pdVar43 * 8);
      }
LAB_0010b85e:
      free(pdVar28);
      uVar39 = *(undefined8 *)(this + 0xd0);
      lVar48 = *(long *)(param_1 + 0x10);
LAB_0010a828:
      *(double **)(this + 200) = pdVar46;
      *(undefined8 *)(this + 0xd8) = uVar39;
    }
    else {
LAB_0010b054:
      lVar48 = *(long *)(param_1 + 0x10);
    }
  }
  else {
    if (pdVar28 < pdVar43) {
      pdVar22 = *(double **)(this + 200);
LAB_0010b023:
      if (pdVar22 + (long)pdVar46 == pdVar22 + (long)pdVar43) goto LAB_0010b824;
      __src = (double *)0x0;
      memset(pdVar22 + (long)pdVar46,0,(long)pdVar43 * 8 + (long)pdVar46 * -8);
      *(double **)(this + 0xd0) = pdVar43;
      if (pdVar21 < pdVar28) goto LAB_0010b834;
      goto LAB_0010b054;
    }
    *(double **)(this + 0xd0) = pdVar43;
    if (pdVar21 < pdVar28) {
      if (pdVar43 != (double *)0x0) goto LAB_0010b834;
      pdVar28 = *(double **)(this + 200);
      uVar39 = 0;
      pdVar46 = pdVar28;
      if (pdVar28 != (double *)0x0) {
        pdVar46 = (double *)0x0;
        goto LAB_0010b85e;
      }
      goto LAB_0010a828;
    }
  }
  uVar33 = *(ulong *)(this + 0x50);
  lVar45 = *(long *)(param_1 + 8);
  local_178 = (ulong)*(uint *)param_1;
  *(double *)(this + 0x38) = (double)*(float *)(param_1 + 0xe0);
  uVar44 = (ulong)(lVar48 - lVar45 >> 2) / local_178 & 0xffffffff;
  uVar31 = uVar44 * 2;
  uVar24 = uVar33;
  if (*(ulong *)(this + 0x58) < uVar44) {
    pdVar28 = (double *)malloc(uVar44 * 0x18);
    __src = *(double **)(this + 0x48);
    if (uVar33 == 0) {
      if (__src == (double *)0x0) {
        *(double **)(this + 0x48) = pdVar28;
        uVar24 = 0;
        *(ulong *)(this + 0x58) = uVar44;
        goto LAB_0010b1b9;
      }
LAB_0010b666:
      free(__src);
      uVar24 = *(ulong *)(this + 0x50);
    }
    else {
      sVar47 = uVar33 * 0x18;
      if (0x18 < (long)sVar47) {
        pdVar28 = (double *)memmove(pdVar28,__src,sVar47);
        goto LAB_0010b666;
      }
      if (sVar47 == 0x18) {
        dVar16 = __src[1];
        *pdVar28 = *__src;
        pdVar28[1] = dVar16;
        pdVar28[2] = __src[2];
        goto LAB_0010b666;
      }
      if (__src != (double *)0x0) goto LAB_0010b666;
    }
    *(double **)(this + 0x48) = pdVar28;
    *(ulong *)(this + 0x58) = uVar44;
    if (uVar24 < uVar44) goto LAB_0010b1b9;
LAB_0010b6a1:
    *(ulong *)(this + 0x50) = uVar44;
    if (uVar31 < uVar33) {
LAB_0010b6ae:
      sVar47 = uVar44 * 0x18;
      pdVar46 = (double *)malloc(sVar47);
      pdVar28 = *(double **)(this + 0x48);
      if (sVar47 == 0x18) {
        dVar16 = pdVar28[1];
        *pdVar46 = *pdVar28;
        pdVar46[1] = dVar16;
        pdVar46[2] = pdVar28[2];
      }
      else {
        __src = pdVar28;
        pdVar46 = (double *)memmove(pdVar46,pdVar28,sVar47);
      }
LAB_0010b6d8:
      free(pdVar28);
      uVar39 = *(undefined8 *)(this + 0x50);
      lVar48 = *(long *)(param_1 + 0x10);
      local_178 = (ulong)*(uint *)param_1;
LAB_0010a8a0:
      *(double **)(this + 0x48) = pdVar46;
      *(undefined8 *)(this + 0x58) = uVar39;
    }
    else {
LAB_0010b1fa:
      lVar48 = *(long *)(param_1 + 0x10);
      local_178 = (ulong)*(uint *)param_1;
    }
  }
  else {
    if (uVar33 < uVar44) {
      pdVar28 = *(double **)(this + 0x48);
LAB_0010b1b9:
      pauVar27 = (undefined1 (*) [16])(pdVar28 + uVar24 * 3);
      if ((undefined1 (*) [16])(pdVar28 + uVar44 * 3) == pauVar27) goto LAB_0010b6a1;
      do {
        *(undefined8 *)pauVar27[1] = 0;
        pauVar23 = pauVar27 + 1;
        *pauVar27 = (undefined1  [16])0x0;
        pauVar27 = (undefined1 (*) [16])(*pauVar23 + 8);
      } while ((undefined1 (*) [16])(pdVar28 + uVar44 * 3) != (undefined1 (*) [16])(*pauVar23 + 8));
      *(ulong *)(this + 0x50) = uVar44;
      if (uVar31 < uVar33) goto LAB_0010b6ae;
      goto LAB_0010b1fa;
    }
    *(ulong *)(this + 0x50) = uVar44;
    if (uVar31 < uVar33) {
      if (uVar44 != 0) goto LAB_0010b6ae;
      pdVar28 = *(double **)(this + 0x48);
      uVar39 = 0;
      pdVar46 = pdVar28;
      if (pdVar28 != (double *)0x0) {
        pdVar46 = (double *)0x0;
        goto LAB_0010b6d8;
      }
      goto LAB_0010a8a0;
    }
  }
  dVar16 = _LC31;
  pdVar28 = *(double **)(param_1 + 8);
  uVar33 = (ulong)(lVar48 - (long)pdVar28 >> 2) / local_178;
  if ((int)uVar33 != 0) {
    pdVar43 = *(double **)(this + 0x48);
    lVar45 = 0;
    lVar48 = 3;
    pdVar46 = pdVar43 + (uVar33 & 0xffffffff) * 3;
    in_R11 = (double *)(auStack_50 + 4);
    __src = pdVar28;
    do {
      auStack_50._0_4_ = 2;
      pdVar21 = pdVar43 + 2;
      local_58 = dVar16;
      pdVar22 = &local_58;
      do {
        iVar19 = *(int *)pdVar22;
        pdVar34 = pdVar43;
        if ((iVar19 != 0) && (pdVar34 = pdVar43 + 1, iVar19 != 1)) {
          pdVar34 = pdVar21;
        }
        pdVar22 = (double *)((long)pdVar22 + 4);
        *pdVar34 = (double)*(float *)((long)pdVar28 + ((long)iVar19 + lVar48 + -3) * 4);
      } while (in_R11 != pdVar22);
      if (uVar41 != 0) {
        lVar4 = *(long *)(this + 200);
        uVar33 = 0;
        do {
          *(double *)(lVar4 + lVar45 + uVar33 * 8) =
               (double)*(float *)((long)__src + uVar33 * 4 + 0xc);
          uVar33 = uVar33 + 1;
        } while (uVar41 != uVar33);
      }
      __src = (double *)((long)__src + local_178 * 4);
      pdVar43 = pdVar43 + 3;
      lVar48 = lVar48 + local_178;
      lVar45 = lVar45 + (ulong)uVar41 * 8;
    } while (pdVar46 != pdVar43);
  }
  pdVar28 = *(double **)(this + 0xb0);
  pdVar46 = (double *)((ulong)(*(long *)(param_1 + 0xd0) - *(long *)(param_1 + 200) >> 2) >> 2);
  pdVar43 = (double *)((long)pdVar46 * 2);
  pdVar22 = pdVar28;
  if (*(double **)(this + 0xb8) < pdVar46) {
    piVar29 = (int *)malloc((long)pdVar46 << 5);
    __src = *(double **)(this + 0xa8);
    if (pdVar28 == (double *)0x0) {
      if (__src == (double *)0x0) {
        *(int **)(this + 0xa8) = piVar29;
        pdVar22 = (double *)0x0;
        *(double **)(this + 0xb8) = pdVar46;
        goto LAB_0010aa27;
      }
LAB_0010b738:
      free(__src);
      pdVar22 = *(double **)(this + 0xb0);
    }
    else {
      sVar47 = (long)pdVar28 * 0x20;
      if (0x20 < (long)sVar47) {
        piVar29 = (int *)memmove(piVar29,__src,sVar47);
        goto LAB_0010b738;
      }
      if (sVar47 == 0x20) {
        iVar19 = *(int *)((long)__src + 4);
        iVar3 = *(int *)(__src + 1);
        iVar37 = *(int *)((long)__src + 0xc);
        *piVar29 = *(int *)__src;
        piVar29[1] = iVar19;
        piVar29[2] = iVar3;
        piVar29[3] = iVar37;
        dVar16 = __src[3];
        *(double *)(piVar29 + 4) = __src[2];
        *(double *)(piVar29 + 6) = dVar16;
        goto LAB_0010b738;
      }
      if (__src != (double *)0x0) goto LAB_0010b738;
    }
    *(int **)(this + 0xa8) = piVar29;
    *(double **)(this + 0xb8) = pdVar46;
    if (pdVar22 < pdVar46) goto LAB_0010aa27;
LAB_0010b77c:
    *(double **)(this + 0xb0) = pdVar46;
    if (pdVar28 <= pdVar43) goto LAB_0010aa74;
LAB_0010b78c:
    sVar47 = (long)pdVar46 << 5;
    pdVar46 = (double *)malloc(sVar47);
    pdVar28 = *(double **)(this + 0xa8);
    if ((long)sVar47 < 0x21) {
      if (sVar47 != 0x20) goto LAB_0010b16d;
      dVar16 = pdVar28[1];
      *pdVar46 = *pdVar28;
      pdVar46[1] = dVar16;
      iVar19 = *(int *)((long)pdVar28 + 0x14);
      iVar3 = *(int *)(pdVar28 + 3);
      iVar37 = *(int *)((long)pdVar28 + 0x1c);
      *(int *)(pdVar46 + 2) = *(int *)(pdVar28 + 2);
      *(int *)((long)pdVar46 + 0x14) = iVar19;
      *(int *)(pdVar46 + 3) = iVar3;
      *(int *)((long)pdVar46 + 0x1c) = iVar37;
    }
    else {
      __src = pdVar28;
      memmove(pdVar46,pdVar28,sVar47);
    }
LAB_0010b7c0:
    free(pdVar28);
LAB_0010b176:
    *(double **)(this + 0xa8) = pdVar46;
    pdVar46 = *(double **)(this + 0xb0);
    *(double **)(this + 0xb8) = pdVar46;
LAB_0010b18b:
    if (pdVar46 != (double *)0x0) goto LAB_0010aa74;
    pdVar46 = (double *)0x0;
  }
  else {
    if (pdVar46 <= pdVar28) {
      *(double **)(this + 0xb0) = pdVar46;
      if (pdVar43 < pdVar28) {
        if (pdVar46 != (double *)0x0) goto LAB_0010b78c;
        pdVar28 = *(double **)(this + 0xa8);
        pdVar46 = (double *)0x0;
LAB_0010b16d:
        if (pdVar28 != (double *)0x0) goto LAB_0010b7c0;
        goto LAB_0010b176;
      }
      goto LAB_0010b18b;
    }
    piVar29 = *(int **)(this + 0xa8);
LAB_0010aa27:
    pauVar27 = (undefined1 (*) [16])(piVar29 + (long)pdVar22 * 8);
    if ((undefined1 (*) [16])(piVar29 + (long)pdVar46 * 8) == pauVar27) goto LAB_0010b77c;
    uVar33 = 0;
    pauVar23 = pauVar27;
    do {
      uVar33 = uVar33 + 1;
      *pauVar23 = (undefined1  [16])0x0;
      pauVar23[1] = (undefined1  [16])0x0;
      pauVar23 = pauVar23 + 2;
    } while (uVar33 < ((ulong)((long)(piVar29 + (long)pdVar46 * 8) + (-0x20 - (long)pauVar27)) >> 5)
                      + 1);
    *(double **)(this + 0xb0) = pdVar46;
    if (pdVar43 < pdVar28) goto LAB_0010b78c;
LAB_0010aa74:
    auStack_50 = (undefined1  [8])_UNK_0010c338;
    local_58 = _LC31;
    lVar48 = 0;
    __src = *(double **)(this + 0xa8);
    lVar45 = *(long *)(param_1 + 200);
    pdVar43 = __src + (long)pdVar46 * 4;
    do {
      pdVar21 = __src + 1;
      pdVar28 = __src + 3;
      pdVar46 = __src + 2;
      pdVar22 = &local_58;
      do {
        iVar19 = *(int *)pdVar22;
        in_R11 = (double *)(long)iVar19;
        pdVar34 = __src;
        if (((iVar19 != 0) && (pdVar34 = pdVar21, iVar19 != 1)) && (pdVar34 = pdVar28, iVar19 == 2))
        {
          pdVar34 = pdVar46;
        }
        pdVar22 = (double *)((long)pdVar22 + 4);
        *pdVar34 = (double)*(float *)(lVar45 + ((long)in_R11 + lVar48) * 4);
      } while (pdVar22 != &local_48);
      __src = __src + 4;
      lVar48 = lVar48 + 4;
    } while (__src != pdVar43);
  }
  if (*(long *)(param_1 + 0x88) == *(long *)(param_1 + 0x80)) {
    local_188 = (void *)0x0;
  }
  else {
    uVar33 = *(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x68);
    if (uVar33 == 0) {
      pdVar28 = (double *)0x0;
      pdVar21 = (double *)0x0;
      in_R11 = (double *)0x0;
      pdVar46 = (double *)0x0;
      local_78 = (double *)0x0;
      pdStack_68 = (double *)0x0;
    }
    else {
      uVar51 = uVar33 == 0x7ffffffffffffffc;
      if (uVar33 < 0x7ffffffffffffffd) {
        in_R11 = (double *)operator_new(uVar33);
        pdVar21 = (double *)((long)in_R11 + uVar33);
        __src = *(double **)(param_1 + 0x68);
        pdVar46 = (double *)(*(long *)(param_1 + 0x70) - (long)__src);
        uVar51 = pdVar46 == (double *)0x4;
        pdVar28 = pdVar46;
        local_78 = in_R11;
        pdStack_68 = pdVar21;
        if (4 < (long)pdVar46) {
          in_R11 = (double *)memmove(in_R11,__src,(size_t)pdVar46);
          goto LAB_0010aba4;
        }
      }
      else {
        std::__throw_bad_array_new_length();
      }
      if ((bool)uVar51) {
        *(int *)in_R11 = *(int *)__src;
      }
    }
LAB_0010aba4:
    local_70 = (undefined1  [8])((long)pdVar46 + (long)in_R11);
    uVar31 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 2;
    if (local_70 == (undefined1  [8])in_R11) {
      if (uVar33 < 8) {
        pdVar21 = (double *)operator_new(8);
        *pdVar21 = (double)(uVar31 << 0x20);
        if (in_R11 != (double *)0x0) {
          operator_delete(in_R11,uVar33);
        }
        local_70 = (undefined1  [8])(pdVar21 + 1);
        uVar33 = 8;
        uVar31 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 2;
        in_R11 = pdVar21;
        local_78 = pdVar21;
        pdStack_68 = (double *)local_70;
      }
      else {
        local_70 = (undefined1  [8])(in_R11 + 1);
        *in_R11 = (double)(uVar31 << 0x20);
      }
    }
    else if ((double *)(*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80)) == pdVar28) {
      local_88 = (int *)CONCAT44(local_88._4_4_,(int)uVar31);
      if ((undefined1  [8])pdVar21 == local_70) {
        std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>
                  ((vector<unsigned_int,std::allocator<unsigned_int>> *)&local_78,pdVar21,&local_88)
        ;
        uVar31 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 2;
        uVar33 = (long)pdStack_68 - (long)local_78;
        in_R11 = local_78;
      }
      else {
        *(int *)local_70 = (int)uVar31;
        local_70 = (undefined1  [8])((long)local_70 + 4);
      }
    }
    local_188 = (void *)0x0;
    if ((int)(uVar31 / 3) != 0) {
      sVar47 = (uVar31 / 3 & 0xffffffff) * 0x10;
      local_188 = malloc(sVar47);
      uVar31 = 0;
      do {
        uVar24 = uVar31 + 1;
        *(undefined1 (*) [16])((long)local_188 + uVar31 * 0x10) = (undefined1  [16])0x0;
        uVar31 = uVar24;
      } while (uVar24 < (sVar47 - 0x10 >> 4) + 1);
    }
    iVar19 = manifold::Manifold::Impl::ReserveIDs
                       ((uint)(*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 2));
    lVar45 = *(long *)(param_1 + 0x80);
    uVar31 = 0;
    if (lVar45 == *(long *)(param_1 + 0x88)) {
      if (in_R11 == (double *)0x0) goto LAB_0010aea1;
    }
    else {
      do {
        iVar3 = *(int *)(lVar45 + uVar31 * 4);
        uVar24 = (ulong)*(uint *)((long)in_R11 + uVar31 * 4) / 3;
        uVar44 = (ulong)*(uint *)((long)in_R11 + uVar31 * 4 + 4) / 3;
        if (uVar24 < uVar44) {
          lVar48 = *(long *)(param_1 + 0xb8);
          lVar4 = *(long *)(param_1 + 0xb0);
          piVar29 = (int *)(uVar24 * 0x10 + (long)local_188);
          do {
            *piVar29 = iVar19;
            iVar20 = (int)uVar24;
            piVar29[1] = iVar3;
            iVar37 = iVar20;
            if (lVar48 != lVar4) {
              iVar37 = *(int *)(lVar4 + uVar24 * 4);
            }
            uVar24 = uVar24 + 1;
            piVar29[2] = iVar37;
            piVar29[3] = iVar20;
            piVar29 = piVar29 + 4;
          } while (uVar24 != uVar44);
        }
        pIVar6 = *(Impl **)(this + 0xf0);
        local_8c = iVar19;
        if (*(long *)(param_1 + 0xa0) == *(long *)(param_1 + 0x98)) {
          pIVar25 = pIVar1;
          if (pIVar6 == (Impl *)0x0) {
LAB_0010b0c6:
            local_88 = &local_8c;
            pIVar25 = (Impl *)std::
                              _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
                              ::
                              _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
                                        (this + 0xe0,pIVar25,&local_88);
            lVar45 = *(long *)(param_1 + 0x80);
          }
          else {
            do {
              while( true ) {
                pIVar26 = pIVar6;
                if (*(int *)(pIVar26 + 0x20) < iVar19) break;
                pIVar6 = *(Impl **)(pIVar26 + 0x10);
                pIVar25 = pIVar26;
                if (*(Impl **)(pIVar26 + 0x10) == (Impl *)0x0) goto LAB_0010b0b9;
              }
              pIVar6 = *(Impl **)(pIVar26 + 0x18);
            } while (*(Impl **)(pIVar26 + 0x18) != (Impl *)0x0);
LAB_0010b0b9:
            if ((pIVar1 == pIVar25) || (iVar19 < *(int *)(pIVar25 + 0x20))) goto LAB_0010b0c6;
          }
          uVar39 = _LC11;
          *(int *)(pIVar25 + 0x28) = iVar3;
          pIVar25[0x90] = (Impl)0x0;
          *(undefined8 *)(pIVar25 + 0x30) = uVar39;
          *(undefined8 *)(pIVar25 + 0x38) = 0;
          *(undefined1 (*) [16])(pIVar25 + 0x40) = (undefined1  [16])0x0;
          *(undefined8 *)(pIVar25 + 0x50) = uVar39;
          *(undefined8 *)(pIVar25 + 0x58) = 0;
          *(undefined1 (*) [16])(pIVar25 + 0x60) = (undefined1  [16])0x0;
          *(undefined8 *)(pIVar25 + 0x70) = uVar39;
          *(undefined8 *)(pIVar25 + 0x78) = 0;
          *(undefined1 (*) [16])(pIVar25 + 0x80) = (undefined1  [16])0x0;
        }
        else {
          pfVar35 = (float *)(*(long *)(param_1 + 0x98) + uVar31 * 0x30);
          fVar10 = *pfVar35;
          fVar11 = pfVar35[1];
          fVar12 = pfVar35[4];
          fVar13 = pfVar35[5];
          fVar14 = pfVar35[8];
          fVar15 = pfVar35[9];
          dStack_f0 = (double)fStack_124;
          pIVar25 = pIVar1;
          if (pIVar6 == (Impl *)0x0) {
LAB_0010adb2:
            auVar8._8_4_ = SUB84(dStack_f0,0);
            auVar8._0_8_ = (double)local_128;
            auVar8._12_4_ = (int)((ulong)dStack_f0 >> 0x20);
            local_88 = &local_8c;
            pIVar25 = (Impl *)std::
                              _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
                              ::
                              _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
                                        (this + 0xe0,pIVar25,&local_88);
            lVar45 = *(long *)(param_1 + 0x80);
            dStack_f0 = auVar8._8_8_;
          }
          else {
            do {
              while( true ) {
                pIVar26 = pIVar6;
                if (*(int *)(pIVar26 + 0x20) < iVar19) break;
                pIVar6 = *(Impl **)(pIVar26 + 0x10);
                pIVar25 = pIVar26;
                if (*(Impl **)(pIVar26 + 0x10) == (Impl *)0x0) goto LAB_0010ada1;
              }
              pIVar6 = *(Impl **)(pIVar26 + 0x18);
            } while (*(Impl **)(pIVar26 + 0x18) != (Impl *)0x0);
LAB_0010ada1:
            if ((pIVar1 == pIVar25) || (iVar19 < *(int *)(pIVar25 + 0x20))) goto LAB_0010adb2;
          }
          *(int *)(pIVar25 + 0x28) = iVar3;
          pIVar25[0x90] = (Impl)0x0;
          *(double *)(pIVar25 + 0x30) = (double)fVar10;
          *(double *)(pIVar25 + 0x38) = (double)fVar11;
          *(double *)(pIVar25 + 0x40) = (double)local_138;
          *(double *)(pIVar25 + 0x48) = (double)fStack_134;
          *(double *)(pIVar25 + 0x50) = (double)fVar12;
          *(double *)(pIVar25 + 0x58) = (double)fVar13;
          auVar9._8_4_ = SUB84(dStack_f0,0);
          auVar9._0_8_ = (double)local_128;
          auVar9._12_4_ = (int)((ulong)dStack_f0 >> 0x20);
          *(undefined1 (*) [16])(pIVar25 + 0x60) = auVar9;
          *(double *)(pIVar25 + 0x70) = (double)fVar14;
          *(double *)(pIVar25 + 0x78) = (double)fVar15;
          *(double *)(pIVar25 + 0x80) = (double)local_118;
          *(double *)(pIVar25 + 0x88) = (double)fStack_114;
        }
        uVar31 = uVar31 + 1;
        iVar19 = iVar19 + 1;
      } while (uVar31 < (ulong)(*(long *)(param_1 + 0x88) - lVar45 >> 2));
    }
    operator_delete(in_R11,uVar33);
  }
LAB_0010aea1:
  local_78 = (double *)0x0;
  _local_70 = (undefined1  [16])0x0;
  uVar33 = uVar32 & 0xffffffff;
  if ((int)uVar32 != 0) {
    lVar45 = 0;
    local_78 = (double *)malloc(uVar33 * 0xc);
    pdStack_68 = (double *)uVar33;
    pvVar36 = local_188;
    do {
      local_88 = (int *)0x0;
      lVar48 = *(long *)(param_1 + 0x20);
      local_80[0] = 0;
      auStack_50._0_4_ = 2;
      local_58 = _LC31;
      pdVar21 = &local_58;
      do {
        iVar19 = *(int *)pdVar21;
        uVar41 = *(uint *)(lVar48 + (iVar19 + lVar45) * 4);
        if (uVar49 <= uVar41) {
          manifold::Manifold::Impl::MarkFailure(this,3);
          goto joined_r0x0010b4bd;
        }
        piVar29 = (int *)&local_88;
        if ((iVar19 != 0) && (piVar29 = (int *)((long)&local_88 + 4), iVar19 != 1)) {
          piVar29 = local_80;
        }
        pdVar21 = (double *)((long)pdVar21 + 4);
        *piVar29 = *(int *)((long)local_148 + (ulong)uVar41 * 4);
      } while ((double *)(auStack_50 + 4) != pdVar21);
      pvVar36 = (void *)((long)pvVar36 + 0x10);
      lVar45 = lVar45 + 3;
    } while (pvVar36 != (void *)((long)local_188 + uVar33 * 0x10));
  }
  manifold::Manifold::Impl::CreateHalfedges((Vec *)this);
  cVar18 = manifold::Manifold::Impl::IsManifold();
  if (cVar18 == '\0') {
    manifold::Manifold::Impl::MarkFailure(this,2);
  }
  else {
    manifold::Manifold::Impl::CalculateBBox();
    manifold::Manifold::Impl::SetEpsilon(_LC24,SUB81(this,0));
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
      *(undefined4 *)(this + 0xc0) = 0xffffffff;
    }
  }
joined_r0x0010b4bd:
  if (local_78 != (double *)0x0) {
    free(local_78);
  }
  if (local_188 != (void *)0x0) {
    free(local_188);
  }
LAB_0010a709:
  if (local_148 == (double *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator_delete(local_148,local_100);
    return;
  }
LAB_0010c062:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
/* manifold::Manifold::Impl::Impl<double, unsigned long>(manifold::MeshGLP<double, unsigned long>
   const&) */

void __thiscall manifold::Manifold::Impl::Impl<double,unsigned_long>(Impl *this,MeshGLP *param_1)

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



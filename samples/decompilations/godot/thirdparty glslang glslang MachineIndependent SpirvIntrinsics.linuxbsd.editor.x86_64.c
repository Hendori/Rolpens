
/* std::_Rb_tree<int, std::pair<int const, glslang::TVector<glslang::TIntermTyped const*> >,
   std::_Select1st<std::pair<int const, glslang::TVector<glslang::TIntermTyped const*> > >,
   std::less<int>, glslang::pool_allocator<std::pair<int const,
   glslang::TVector<glslang::TIntermTyped const*> > > >::_M_get_insert_unique_pos(int const&) [clone
   .isra.0] */

undefined1  [16] __thiscall
std::
_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>>
::_M_get_insert_unique_pos
          (_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>>
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
  p_Var2 = *(_Rb_tree_node_base **)(this + 0x18);
  if (*(_Rb_tree_node_base **)(this + 0x18) == (_Rb_tree_node_base *)0x0) {
    p_Var2 = (_Rb_tree_node_base *)(this + 0x10);
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
    if (iVar5 <= iVar6) goto LAB_00100038;
  }
  if (*(_Rb_tree_node_base **)(this + 0x20) == p_Var2) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = p_Var2;
    return auVar1 << 0x40;
  }
  p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var2);
  iVar5 = *(int *)(p_Var4 + 0x20);
LAB_00100038:
  p_Var3 = (_Rb_tree_node_base *)0x0;
  if (iVar5 < iVar6) {
    p_Var4 = p_Var3;
    p_Var3 = p_Var2;
  }
  auVar7._8_8_ = p_Var3;
  auVar7._0_8_ = p_Var4;
  return auVar7;
}



/* std::_Rb_tree<int, std::pair<int const, glslang::TVector<glslang::TIntermConstantUnion const*> >,
   std::_Select1st<std::pair<int const, glslang::TVector<glslang::TIntermConstantUnion const*> > >,
   std::less<int>, glslang::pool_allocator<std::pair<int const,
   glslang::TVector<glslang::TIntermConstantUnion const*> > > >::_M_get_insert_unique_pos(int
   const&) [clone .isra.0] */

undefined1  [16] __thiscall
std::
_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>
::_M_get_insert_unique_pos
          (_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>
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
  p_Var2 = *(_Rb_tree_node_base **)(this + 0x18);
  if (*(_Rb_tree_node_base **)(this + 0x18) == (_Rb_tree_node_base *)0x0) {
    p_Var2 = (_Rb_tree_node_base *)(this + 0x10);
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
    if (iVar5 <= iVar6) goto LAB_001000c8;
  }
  if (*(_Rb_tree_node_base **)(this + 0x20) == p_Var2) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = p_Var2;
    return auVar1 << 0x40;
  }
  p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var2);
  iVar5 = *(int *)(p_Var4 + 0x20);
LAB_001000c8:
  p_Var3 = (_Rb_tree_node_base *)0x0;
  if (iVar5 < iVar6) {
    p_Var4 = p_Var3;
    p_Var3 = p_Var2;
  }
  auVar7._8_8_ = p_Var3;
  auVar7._0_8_ = p_Var4;
  return auVar7;
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, glslang::pool_allocator<int>
   >::_M_get_insert_unique_pos(int const&) [clone .isra.0] */

undefined1  [16] __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,glslang::pool_allocator<int>>::
_M_get_insert_unique_pos
          (_Rb_tree<int,int,std::_Identity<int>,std::less<int>,glslang::pool_allocator<int>> *this,
          int *param_1)

{
  undefined1 auVar1 [16];
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  
  iVar6 = (int)param_1;
  p_Var2 = *(_Rb_tree_node_base **)(this + 0x18);
  if (*(_Rb_tree_node_base **)(this + 0x18) == (_Rb_tree_node_base *)0x0) {
    p_Var2 = (_Rb_tree_node_base *)(this + 0x10);
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
    if (iVar5 <= iVar6) goto LAB_00100158;
  }
  if (*(_Rb_tree_node_base **)(this + 0x20) == p_Var2) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = p_Var2;
    return auVar1 << 0x40;
  }
  p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var2);
  iVar5 = *(int *)(p_Var4 + 0x20);
LAB_00100158:
  p_Var3 = (_Rb_tree_node_base *)0x0;
  if (iVar5 < iVar6) {
    p_Var4 = p_Var3;
    p_Var3 = p_Var2;
  }
  auVar7._8_8_ = p_Var3;
  auVar7._0_8_ = p_Var4;
  return auVar7;
}



/* std::_Rb_tree_iterator<std::pair<int const, glslang::TVector<glslang::TIntermTyped const*> > >
   std::_Rb_tree<int, std::pair<int const, glslang::TVector<glslang::TIntermTyped const*> >,
   std::_Select1st<std::pair<int const, glslang::TVector<glslang::TIntermTyped const*> > >,
   std::less<int>, glslang::pool_allocator<std::pair<int const,
   glslang::TVector<glslang::TIntermTyped const*> > >
   >::_M_emplace_hint_unique<std::piecewise_construct_t const&, std::tuple<int const&>, std::tuple<>
   >(std::_Rb_tree_const_iterator<std::pair<int const, glslang::TVector<glslang::TIntermTyped
   const*> > >, std::piecewise_construct_t const&, std::tuple<int const&>&&, std::tuple<>&&) [clone
   .isra.0] */

_Rb_tree_node_base *
std::
_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>>
::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
          (_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>>
           *param_1,_Rb_tree_node_base *param_2,undefined8 *param_3)

{
  _Rb_tree_node_base *p_Var1;
  uint uVar2;
  _Rb_tree_node_base *p_Var3;
  undefined8 uVar4;
  _Rb_tree_node_base *p_Var5;
  bool bVar6;
  undefined1 auVar7 [16];
  
  p_Var3 = (_Rb_tree_node_base *)glslang::TPoolAllocator::allocate(*(ulong *)param_1);
  p_Var1 = (_Rb_tree_node_base *)(param_1 + 0x10);
  *(undefined4 *)(p_Var3 + 0x20) = *(undefined4 *)*param_3;
  uVar4 = glslang::GetThreadPoolAllocator();
  *(undefined8 *)(p_Var3 + 0x30) = 0;
  uVar2 = *(uint *)(p_Var3 + 0x20);
  *(undefined8 *)(p_Var3 + 0x28) = uVar4;
  *(undefined8 *)(p_Var3 + 0x38) = 0;
  *(undefined8 *)(p_Var3 + 0x40) = 0;
  if (p_Var1 == param_2) {
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (p_Var5 = *(_Rb_tree_node_base **)(param_1 + 0x28), (int)uVar2 <= *(int *)(p_Var5 + 0x20))) {
LAB_001002bf:
      auVar7 = _M_get_insert_unique_pos(param_1,(int *)(ulong)uVar2);
      bVar6 = auVar7._0_8_ != (_Rb_tree_node_base *)0x0;
      p_Var5 = auVar7._8_8_;
      if (auVar7._8_8_ == (_Rb_tree_node_base *)0x0) {
        return auVar7._0_8_;
      }
    }
    else {
LAB_001002fa:
      bVar6 = false;
    }
joined_r0x00100288:
    param_2 = p_Var5;
    p_Var5 = param_2;
    if ((p_Var1 != param_2) && (!bVar6)) {
LAB_0010030b:
      bVar6 = (int)uVar2 < *(int *)(param_2 + 0x20);
      goto LAB_00100293;
    }
  }
  else {
    if (*(int *)(param_2 + 0x20) <= (int)uVar2) {
      if ((int)uVar2 <= *(int *)(param_2 + 0x20)) {
        return param_2;
      }
      if (*(_Rb_tree_node_base **)(param_1 + 0x28) != param_2) {
        p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
        if (*(int *)(p_Var5 + 0x20) <= (int)uVar2) goto LAB_001002bf;
        bVar6 = true;
        if (*(long *)(param_2 + 0x18) != 0) goto joined_r0x00100288;
      }
      goto LAB_0010030b;
    }
    p_Var5 = *(_Rb_tree_node_base **)(param_1 + 0x20);
    if (*(_Rb_tree_node_base **)(param_1 + 0x20) != param_2) {
      p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
      if ((int)uVar2 <= *(int *)(p_Var5 + 0x20)) goto LAB_001002bf;
      if (*(long *)(p_Var5 + 0x18) != 0) {
        bVar6 = true;
        goto LAB_00100293;
      }
      goto LAB_001002fa;
    }
  }
  param_2 = p_Var5;
  bVar6 = true;
LAB_00100293:
  std::_Rb_tree_insert_and_rebalance(bVar6,p_Var3,param_2,p_Var1);
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  return p_Var3;
}



/* std::_Rb_tree_iterator<std::pair<int const, glslang::TVector<glslang::TIntermConstantUnion
   const*> > > std::_Rb_tree<int, std::pair<int const,
   glslang::TVector<glslang::TIntermConstantUnion const*> >, std::_Select1st<std::pair<int const,
   glslang::TVector<glslang::TIntermConstantUnion const*> > >, std::less<int>,
   glslang::pool_allocator<std::pair<int const, glslang::TVector<glslang::TIntermConstantUnion
   const*> > > >::_M_emplace_hint_unique<std::piecewise_construct_t const&, std::tuple<int const&>,
   std::tuple<> >(std::_Rb_tree_const_iterator<std::pair<int const,
   glslang::TVector<glslang::TIntermConstantUnion const*> > >, std::piecewise_construct_t const&,
   std::tuple<int const&>&&, std::tuple<>&&) [clone .isra.0] */

_Rb_tree_node_base *
std::
_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>
::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
          (_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>
           *param_1,_Rb_tree_node_base *param_2,undefined8 *param_3)

{
  _Rb_tree_node_base *p_Var1;
  uint uVar2;
  _Rb_tree_node_base *p_Var3;
  undefined8 uVar4;
  _Rb_tree_node_base *p_Var5;
  bool bVar6;
  undefined1 auVar7 [16];
  
  p_Var3 = (_Rb_tree_node_base *)glslang::TPoolAllocator::allocate(*(ulong *)param_1);
  p_Var1 = (_Rb_tree_node_base *)(param_1 + 0x10);
  *(undefined4 *)(p_Var3 + 0x20) = *(undefined4 *)*param_3;
  uVar4 = glslang::GetThreadPoolAllocator();
  *(undefined8 *)(p_Var3 + 0x30) = 0;
  uVar2 = *(uint *)(p_Var3 + 0x20);
  *(undefined8 *)(p_Var3 + 0x28) = uVar4;
  *(undefined8 *)(p_Var3 + 0x38) = 0;
  *(undefined8 *)(p_Var3 + 0x40) = 0;
  if (p_Var1 == param_2) {
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (p_Var5 = *(_Rb_tree_node_base **)(param_1 + 0x28), (int)uVar2 <= *(int *)(p_Var5 + 0x20))) {
LAB_0010042f:
      auVar7 = _M_get_insert_unique_pos(param_1,(int *)(ulong)uVar2);
      bVar6 = auVar7._0_8_ != (_Rb_tree_node_base *)0x0;
      p_Var5 = auVar7._8_8_;
      if (auVar7._8_8_ == (_Rb_tree_node_base *)0x0) {
        return auVar7._0_8_;
      }
    }
    else {
LAB_0010046a:
      bVar6 = false;
    }
joined_r0x001003f8:
    param_2 = p_Var5;
    p_Var5 = param_2;
    if ((p_Var1 != param_2) && (!bVar6)) {
LAB_0010047b:
      bVar6 = (int)uVar2 < *(int *)(param_2 + 0x20);
      goto LAB_00100403;
    }
  }
  else {
    if (*(int *)(param_2 + 0x20) <= (int)uVar2) {
      if ((int)uVar2 <= *(int *)(param_2 + 0x20)) {
        return param_2;
      }
      if (*(_Rb_tree_node_base **)(param_1 + 0x28) != param_2) {
        p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
        if (*(int *)(p_Var5 + 0x20) <= (int)uVar2) goto LAB_0010042f;
        bVar6 = true;
        if (*(long *)(param_2 + 0x18) != 0) goto joined_r0x001003f8;
      }
      goto LAB_0010047b;
    }
    p_Var5 = *(_Rb_tree_node_base **)(param_1 + 0x20);
    if (*(_Rb_tree_node_base **)(param_1 + 0x20) != param_2) {
      p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
      if ((int)uVar2 <= *(int *)(p_Var5 + 0x20)) goto LAB_0010042f;
      if (*(long *)(p_Var5 + 0x18) != 0) {
        bVar6 = true;
        goto LAB_00100403;
      }
      goto LAB_0010046a;
    }
  }
  param_2 = p_Var5;
  bVar6 = true;
LAB_00100403:
  std::_Rb_tree_insert_and_rebalance(bVar6,p_Var3,param_2,p_Var1);
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  return p_Var3;
}



/* std::vector<glslang::TIntermConstantUnion const*,
   glslang::pool_allocator<glslang::TIntermConstantUnion const*>
   >::TEMPNAMEPLACEHOLDERVALUE(std::vector<glslang::TIntermConstantUnion const*,
   glslang::pool_allocator<glslang::TIntermConstantUnion const*> > const&) [clone .isra.0] */

void __thiscall
std::
vector<glslang::TIntermConstantUnion_const*,glslang::pool_allocator<glslang::TIntermConstantUnion_const*>>
::operator=(vector<glslang::TIntermConstantUnion_const*,glslang::pool_allocator<glslang::TIntermConstantUnion_const*>>
            *this,vector *param_1)

{
  long lVar1;
  long lVar2;
  size_t __n;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *__dest;
  ulong __n_00;
  long lVar5;
  undefined8 *puVar6;
  
  if (param_1 == (vector *)this) {
    return;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  puVar4 = *(undefined8 **)(param_1 + 8);
  __dest = *(undefined8 **)(this + 8);
  __n_00 = (long)puVar6 - (long)puVar4;
  if ((ulong)(*(long *)(this + 0x18) - (long)__dest) < __n_00) {
    lVar1 = glslang::TPoolAllocator::allocate(*(ulong *)this);
    uVar3 = 0;
    if (puVar6 != puVar4) {
      do {
        *(undefined8 *)(lVar1 + uVar3) = *(undefined8 *)((long)puVar4 + uVar3);
        uVar3 = uVar3 + 8;
      } while (uVar3 != __n_00);
    }
    *(long *)(this + 8) = lVar1;
    *(ulong *)(this + 0x18) = __n_00 + lVar1;
    *(ulong *)(this + 0x10) = __n_00 + lVar1;
    return;
  }
  lVar1 = *(long *)(this + 0x10);
  __n = lVar1 - (long)__dest;
  if (__n < __n_00) {
    if ((long)__n < 9) {
      if (__n == 8) {
        *__dest = *puVar4;
      }
    }
    else {
      memmove(__dest,puVar4,__n);
      lVar1 = *(long *)(this + 0x10);
      __dest = *(undefined8 **)(this + 8);
      puVar6 = *(undefined8 **)(param_1 + 0x10);
      puVar4 = *(undefined8 **)(param_1 + 8);
      __n = lVar1 - (long)__dest;
    }
    puVar4 = (undefined8 *)((long)puVar4 + __n);
    lVar5 = __n_00 + (long)__dest;
    if (puVar4 != puVar6) {
      lVar2 = 0;
      do {
        *(undefined8 *)(lVar1 + lVar2) = *(undefined8 *)((long)puVar4 + lVar2);
        lVar2 = lVar2 + 8;
      } while (lVar2 != (long)puVar6 - (long)puVar4);
      *(long *)(this + 0x10) = lVar5;
      return;
    }
  }
  else if ((long)__n_00 < 9) {
    if (__n_00 == 8) {
      *__dest = *puVar4;
    }
    lVar5 = __n_00 + (long)__dest;
  }
  else {
    memmove(__dest,puVar4,__n_00);
    lVar5 = __n_00 + *(long *)(this + 8);
  }
  *(long *)(this + 0x10) = lVar5;
  return;
}



/* std::vector<glslang::TIntermTyped const*, glslang::pool_allocator<glslang::TIntermTyped const*>
   >::TEMPNAMEPLACEHOLDERVALUE(std::vector<glslang::TIntermTyped const*,
   glslang::pool_allocator<glslang::TIntermTyped const*> > const&) [clone .isra.0] */

void __thiscall
std::vector<glslang::TIntermTyped_const*,glslang::pool_allocator<glslang::TIntermTyped_const*>>::
operator=(vector<glslang::TIntermTyped_const*,glslang::pool_allocator<glslang::TIntermTyped_const*>>
          *this,vector *param_1)

{
  long lVar1;
  long lVar2;
  size_t __n;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *__dest;
  ulong __n_00;
  long lVar5;
  undefined8 *puVar6;
  
  if (param_1 == (vector *)this) {
    return;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  puVar4 = *(undefined8 **)(param_1 + 8);
  __dest = *(undefined8 **)(this + 8);
  __n_00 = (long)puVar6 - (long)puVar4;
  if ((ulong)(*(long *)(this + 0x18) - (long)__dest) < __n_00) {
    lVar1 = glslang::TPoolAllocator::allocate(*(ulong *)this);
    uVar3 = 0;
    if (puVar6 != puVar4) {
      do {
        *(undefined8 *)(lVar1 + uVar3) = *(undefined8 *)((long)puVar4 + uVar3);
        uVar3 = uVar3 + 8;
      } while (uVar3 != __n_00);
    }
    *(long *)(this + 8) = lVar1;
    *(ulong *)(this + 0x18) = __n_00 + lVar1;
    *(ulong *)(this + 0x10) = __n_00 + lVar1;
    return;
  }
  lVar1 = *(long *)(this + 0x10);
  __n = lVar1 - (long)__dest;
  if (__n < __n_00) {
    if ((long)__n < 9) {
      if (__n == 8) {
        *__dest = *puVar4;
      }
    }
    else {
      memmove(__dest,puVar4,__n);
      lVar1 = *(long *)(this + 0x10);
      __dest = *(undefined8 **)(this + 8);
      puVar6 = *(undefined8 **)(param_1 + 0x10);
      puVar4 = *(undefined8 **)(param_1 + 8);
      __n = lVar1 - (long)__dest;
    }
    puVar4 = (undefined8 *)((long)puVar4 + __n);
    lVar5 = __n_00 + (long)__dest;
    if (puVar4 != puVar6) {
      lVar2 = 0;
      do {
        *(undefined8 *)(lVar1 + lVar2) = *(undefined8 *)((long)puVar4 + lVar2);
        lVar2 = lVar2 + 8;
      } while (lVar2 != (long)puVar6 - (long)puVar4);
      *(long *)(this + 0x10) = lVar5;
      return;
    }
  }
  else if ((long)__n_00 < 9) {
    if (__n_00 == 8) {
      *__dest = *puVar4;
    }
    lVar5 = __n_00 + (long)__dest;
  }
  else {
    memmove(__dest,puVar4,__n_00);
    lVar5 = __n_00 + *(long *)(this + 8);
  }
  *(long *)(this + 0x10) = lVar5;
  return;
}



/* std::_Rb_tree_node<int>* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>,
   glslang::pool_allocator<int> >::_M_copy<false, std::_Rb_tree<int, int, std::_Identity<int>,
   std::less<int>, glslang::pool_allocator<int> >::_Reuse_or_alloc_node>(std::_Rb_tree_node<int>*,
   std::_Rb_tree_node_base*, std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>,
   glslang::pool_allocator<int> >::_Reuse_or_alloc_node&) [clone .isra.0] */

_Rb_tree_node *
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,glslang::pool_allocator<int>>::
_M_copy<false,std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,glslang::pool_allocator<int>>::_Reuse_or_alloc_node>
          (_Rb_tree_node *param_1,_Rb_tree_node_base *param_2,_Reuse_or_alloc_node *param_3)

{
  undefined4 uVar1;
  long lVar2;
  _Rb_tree_node *p_Var3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  long lVar6;
  _Rb_tree_node_base *p_Var7;
  undefined4 *puVar8;
  _Rb_tree_node_base *p_Var9;
  
  p_Var5 = *(_Rb_tree_node_base **)(param_3 + 8);
  if (p_Var5 == (_Rb_tree_node_base *)0x0) {
    p_Var5 = (_Rb_tree_node_base *)glslang::TPoolAllocator::allocate(**(ulong **)(param_3 + 0x10));
    *(undefined4 *)(p_Var5 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  }
  else {
    lVar2 = *(long *)(p_Var5 + 8);
    *(long *)(param_3 + 8) = lVar2;
    if (lVar2 == 0) {
      *(undefined8 *)param_3 = 0;
    }
    else if (p_Var5 == *(_Rb_tree_node_base **)(lVar2 + 0x18)) {
      lVar6 = *(long *)(lVar2 + 0x10);
      *(undefined8 *)(lVar2 + 0x18) = 0;
      if (lVar6 != 0) {
        lVar2 = *(long *)(lVar6 + 0x18);
        *(long *)(param_3 + 8) = lVar6;
        if (lVar2 != 0) {
          do {
            lVar6 = lVar2;
            lVar2 = *(long *)(lVar6 + 0x18);
          } while (*(long *)(lVar6 + 0x18) != 0);
          *(long *)(param_3 + 8) = lVar6;
        }
        if (*(long *)(lVar6 + 0x10) != 0) {
          *(long *)(param_3 + 8) = *(long *)(lVar6 + 0x10);
        }
      }
    }
    else {
      *(undefined8 *)(lVar2 + 0x10) = 0;
    }
    *(undefined4 *)(p_Var5 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  }
  uVar1 = *(undefined4 *)param_1;
  *(undefined8 *)(p_Var5 + 0x10) = 0;
  *(undefined8 *)(p_Var5 + 0x18) = 0;
  *(_Rb_tree_node_base **)(p_Var5 + 8) = param_2;
  p_Var3 = *(_Rb_tree_node **)(param_1 + 0x18);
  *(undefined4 *)p_Var5 = uVar1;
  if (p_Var3 != (_Rb_tree_node *)0x0) {
    p_Var3 = _M_copy<false,std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,glslang::pool_allocator<int>>::_Reuse_or_alloc_node>
                       (p_Var3,p_Var5,param_3);
    *(_Rb_tree_node **)(p_Var5 + 0x18) = p_Var3;
  }
  puVar8 = *(undefined4 **)(param_1 + 0x10);
  if (puVar8 != (undefined4 *)0x0) {
    p_Var7 = *(_Rb_tree_node_base **)(param_3 + 8);
    p_Var9 = p_Var5;
    if (p_Var7 == (_Rb_tree_node_base *)0x0) goto LAB_00100839;
    do {
      lVar2 = *(long *)(p_Var7 + 8);
      *(long *)(param_3 + 8) = lVar2;
      if (lVar2 == 0) {
        *(undefined8 *)param_3 = 0;
      }
      else if (p_Var7 == *(_Rb_tree_node_base **)(lVar2 + 0x18)) {
        lVar6 = *(long *)(lVar2 + 0x10);
        *(undefined8 *)(lVar2 + 0x18) = 0;
        if (lVar6 != 0) {
          lVar2 = *(long *)(lVar6 + 0x18);
          *(long *)(param_3 + 8) = lVar6;
          if (lVar2 != 0) {
            do {
              lVar6 = lVar2;
              lVar2 = *(long *)(lVar6 + 0x18);
            } while (*(long *)(lVar6 + 0x18) != 0);
            *(long *)(param_3 + 8) = lVar6;
          }
          if (*(long *)(lVar6 + 0x10) != 0) {
            *(long *)(param_3 + 8) = *(long *)(lVar6 + 0x10);
          }
        }
      }
      else {
        *(undefined8 *)(lVar2 + 0x10) = 0;
      }
      *(undefined4 *)(p_Var7 + 0x20) = puVar8[8];
      p_Var4 = p_Var7;
      while( true ) {
        uVar1 = *puVar8;
        *(undefined8 *)(p_Var4 + 0x10) = 0;
        *(undefined8 *)(p_Var4 + 0x18) = 0;
        *(undefined4 *)p_Var4 = uVar1;
        *(_Rb_tree_node_base **)(p_Var9 + 0x10) = p_Var4;
        *(_Rb_tree_node_base **)(p_Var4 + 8) = p_Var9;
        if (*(_Rb_tree_node **)(puVar8 + 6) != (_Rb_tree_node *)0x0) {
          p_Var3 = _M_copy<false,std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,glslang::pool_allocator<int>>::_Reuse_or_alloc_node>
                             (*(_Rb_tree_node **)(puVar8 + 6),p_Var4,param_3);
          *(_Rb_tree_node **)(p_Var4 + 0x18) = p_Var3;
        }
        puVar8 = *(undefined4 **)(puVar8 + 4);
        if (puVar8 == (undefined4 *)0x0) {
          return (_Rb_tree_node *)p_Var5;
        }
        p_Var7 = *(_Rb_tree_node_base **)(param_3 + 8);
        p_Var9 = p_Var4;
        if (p_Var7 != (_Rb_tree_node_base *)0x0) break;
LAB_00100839:
        p_Var4 = (_Rb_tree_node_base *)
                 glslang::TPoolAllocator::allocate(**(ulong **)(param_3 + 0x10));
        *(undefined4 *)(p_Var4 + 0x20) = puVar8[8];
      }
    } while( true );
  }
  return (_Rb_tree_node *)p_Var5;
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, glslang::pool_allocator<int>
   >::_M_erase(std::_Rb_tree_node<int>*) [clone .isra.0] */

void std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,glslang::pool_allocator<int>>::
     _M_erase(_Rb_tree_node *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 != (_Rb_tree_node *)0x0) {
    do {
      for (lVar1 = *(long *)(param_1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x10)) {
        for (lVar2 = *(long *)(lVar1 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x10)) {
          for (lVar3 = *(long *)(lVar2 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x10)) {
            for (lVar4 = *(long *)(lVar3 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x10)) {
              for (lVar5 = *(long *)(lVar4 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x10)) {
                for (lVar6 = *(long *)(lVar5 + 0x18); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x10)) {
                  for (lVar7 = *(long *)(lVar6 + 0x18); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x10))
                  {
                    for (lVar8 = *(long *)(lVar7 + 0x18); lVar8 != 0;
                        lVar8 = *(long *)(lVar8 + 0x10)) {
                      _M_erase(*(_Rb_tree_node **)(lVar8 + 0x18));
                    }
                  }
                }
              }
            }
          }
        }
      }
      param_1 = *(_Rb_tree_node **)(param_1 + 0x10);
    } while (param_1 != (_Rb_tree_node *)0x0);
    return;
  }
  return;
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::_Identity<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, glslang::pool_allocator<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >::_M_erase(std::_Rb_tree_node<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >*) [clone .isra.0] */

void std::
     _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
     ::_M_erase(_Rb_tree_node *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 != (_Rb_tree_node *)0x0) {
    do {
      for (lVar1 = *(long *)(param_1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x10)) {
        for (lVar2 = *(long *)(lVar1 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x10)) {
          for (lVar3 = *(long *)(lVar2 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x10)) {
            for (lVar4 = *(long *)(lVar3 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x10)) {
              for (lVar5 = *(long *)(lVar4 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x10)) {
                for (lVar6 = *(long *)(lVar5 + 0x18); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x10)) {
                  for (lVar7 = *(long *)(lVar6 + 0x18); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x10))
                  {
                    for (lVar8 = *(long *)(lVar7 + 0x18); lVar8 != 0;
                        lVar8 = *(long *)(lVar8 + 0x10)) {
                      _M_erase(*(_Rb_tree_node **)(lVar8 + 0x18));
                    }
                  }
                }
              }
            }
          }
        }
      }
      param_1 = *(_Rb_tree_node **)(param_1 + 0x10);
    } while (param_1 != (_Rb_tree_node *)0x0);
    return;
  }
  return;
}



/* glslang::TSpirvTypeParameter::TEMPNAMEPLACEHOLDERVALUE(glslang::TSpirvTypeParameter const&) const
    */

undefined8 __thiscall
glslang::TSpirvTypeParameter::operator==(TSpirvTypeParameter *this,TSpirvTypeParameter *param_1)

{
  TSpirvTypeParameter TVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  TType *pTVar7;
  double *pdVar8;
  double *pdVar9;
  
  TVar1 = param_1[8];
  if (this[8] == (TSpirvTypeParameter)0x0) {
    if (*(long *)this != 0) {
      if (TVar1 != (TSpirvTypeParameter)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar2 = *(long *)(*(long *)this + 0xc0);
      lVar3 = *(long *)(*(long *)param_1 + 0xc0);
      if (lVar2 != lVar3) {
        bVar5 = lVar2 == 0 || lVar3 == 0;
        uVar6 = CONCAT71((int7)((ulong)*(long *)param_1 >> 8),bVar5);
        if (bVar5) {
          return 0;
        }
        pdVar9 = *(double **)(lVar2 + 8);
        pdVar8 = *(double **)(lVar3 + 8);
        if ((long)*(double **)(lVar2 + 0x10) - (long)pdVar9 !=
            *(long *)(lVar3 + 0x10) - (long)pdVar8) {
switchD_00100c3c_caseD_0:
          return uVar6;
        }
        for (; pdVar9 != *(double **)(lVar2 + 0x10); pdVar9 = pdVar9 + 2) {
          if (*(int *)(pdVar8 + 1) != *(int *)(pdVar9 + 1)) {
            return uVar6;
          }
          switch(*(int *)(pdVar9 + 1)) {
          default:
            goto switchD_00100c3c_caseD_0;
          case 2:
            if (NAN(*pdVar8) || NAN(*pdVar9)) {
              return uVar6;
            }
            if (*pdVar8 != *pdVar9) {
              return uVar6;
            }
            break;
          case 4:
          case 5:
          case 0xc:
            if (*(char *)pdVar8 != *(char *)pdVar9) {
              return uVar6;
            }
            break;
          case 6:
          case 7:
            if (*(short *)pdVar8 != *(short *)pdVar9) {
              return uVar6;
            }
            break;
          case 8:
          case 9:
            if (*(int *)pdVar8 != *(int *)pdVar9) {
              return uVar6;
            }
            break;
          case 10:
          case 0xb:
            if (*pdVar8 != *pdVar9) {
              return uVar6;
            }
          }
          pdVar8 = pdVar8 + 2;
        }
      }
      return 1;
    }
    pTVar7 = (TType *)0x0;
    if (TVar1 == (TSpirvTypeParameter)0x1) {
      pTVar7 = *(TType **)param_1;
    }
  }
  else {
    pTVar7 = (TType *)0x0;
    if (TVar1 == (TSpirvTypeParameter)0x1) {
      pTVar7 = *(TType **)param_1;
    }
    if (this[8] == (TSpirvTypeParameter)0x1) {
      uVar6 = TType::operator==(*(TType **)this,pTVar7);
      return uVar6;
    }
  }
  uVar6 = TType::operator==((TType *)0x0,pTVar7);
  return uVar6;
}



/* glslang::TParseContext::mergeSpirvTypeParameters(glslang::TVector<glslang::TSpirvTypeParameter>*,
   glslang::TVector<glslang::TSpirvTypeParameter>*) */

TVector * __thiscall
glslang::TParseContext::mergeSpirvTypeParameters
          (TParseContext *this,TVector *param_1,TVector *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  puVar12 = *(undefined8 **)(param_2 + 8);
  do {
    while( true ) {
      if (puVar1 == puVar12) {
        return param_1;
      }
      puVar2 = *(undefined8 **)(param_1 + 0x10);
      if (puVar2 == *(undefined8 **)(param_1 + 0x18)) break;
      uVar4 = *puVar12;
      uVar5 = puVar12[1];
      puVar12 = puVar12 + 2;
      *puVar2 = uVar4;
      puVar2[1] = uVar5;
      *(undefined8 **)(param_1 + 0x10) = puVar2 + 2;
    }
    puVar3 = *(undefined8 **)(param_1 + 8);
    puVar10 = (undefined8 *)((long)puVar2 - (long)puVar3);
    uVar6 = (long)puVar10 >> 4;
    if (uVar6 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
    }
    if (puVar2 == puVar3) {
      if (0xfffffffffffffffe < uVar6) goto LAB_00100e20;
      uVar8 = 0x7ffffffffffffff;
      if (uVar6 + 1 < 0x800000000000000) {
        uVar8 = uVar6 + 1;
      }
      lVar9 = uVar8 << 4;
LAB_00100ddb:
      lVar7 = glslang::TPoolAllocator::allocate(*(ulong *)param_1);
      uVar4 = puVar12[1];
      lVar9 = lVar9 + lVar7;
      *(undefined8 *)(lVar7 + (long)puVar10) = *puVar12;
      ((undefined8 *)(lVar7 + (long)puVar10))[1] = uVar4;
      lVar11 = lVar7 + 0x10;
      if (puVar2 != puVar3) goto LAB_00100d65;
    }
    else {
      uVar8 = uVar6 * 2;
      if (uVar8 < uVar6) {
LAB_00100e20:
        lVar9 = 0x7ffffffffffffff0;
        goto LAB_00100ddb;
      }
      if (uVar8 != 0) {
        if (0x7ffffffffffffff < uVar8) {
          uVar8 = 0x7ffffffffffffff;
        }
        lVar9 = uVar8 << 4;
        goto LAB_00100ddb;
      }
      uVar4 = puVar12[1];
      lVar9 = 0;
      lVar7 = 0;
      *puVar10 = *puVar12;
      puVar10[1] = uVar4;
LAB_00100d65:
      lVar11 = 0;
      do {
        uVar4 = ((undefined8 *)((long)puVar3 + lVar11))[1];
        *(undefined8 *)(lVar7 + lVar11) = *(undefined8 *)((long)puVar3 + lVar11);
        ((undefined8 *)(lVar7 + lVar11))[1] = uVar4;
        lVar11 = lVar11 + 0x10;
      } while ((long)puVar2 - (long)puVar3 != lVar11);
      lVar11 = lVar7 + 0x10 + ((long)puVar2 - (long)puVar3);
    }
    puVar12 = puVar12 + 2;
    *(long *)(param_1 + 8) = lVar7;
    *(long *)(param_1 + 0x10) = lVar11;
    *(long *)(param_1 + 0x18) = lVar9;
  } while( true );
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

undefined8 *
std::
__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
          (undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = (long)param_2 - (long)param_1;
  if (0 < lVar2 >> 7) {
    puVar3 = param_1 + (lVar2 >> 7) * 0x10;
    do {
      bVar1 = glslang::TType::
              contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                        (*param_1);
      if (bVar1) {
        return param_1;
      }
      bVar1 = glslang::TType::
              contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                        (param_1[4]);
      if (bVar1) {
        return param_1 + 4;
      }
      bVar1 = glslang::TType::
              contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                        (param_1[8]);
      if (bVar1) {
        return param_1 + 8;
      }
      bVar1 = glslang::TType::
              contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                        (param_1[0xc]);
      if (bVar1) {
        return param_1 + 0xc;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != puVar3);
    lVar2 = (long)param_2 - (long)param_1;
  }
  lVar2 = lVar2 >> 5;
  if (lVar2 != 2) {
    if (lVar2 != 3) {
      if (lVar2 != 1) {
        return param_2;
      }
      goto LAB_00100f11;
    }
    bVar1 = glslang::TType::
            contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                      (*param_1);
    if (bVar1) {
      return param_1;
    }
    param_1 = param_1 + 4;
  }
  bVar1 = glslang::TType::
          contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (bVar1) {
    return param_1;
  }
  param_1 = param_1 + 4;
LAB_00100f11:
  bVar1 = glslang::TType::
          contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (!bVar1) {
    return param_2;
  }
  return param_1;
}



/* glslang::TIntermediate::insertSpirvRequirement(glslang::TSpirvRequirement const*) */

void __thiscall
glslang::TIntermediate::insertSpirvRequirement(TIntermediate *this,TSpirvRequirement *param_1)

{
  uint uVar1;
  undefined1 *__src;
  long lVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  _Rb_tree_node_base *p_Var8;
  long in_FS_OFFSET;
  undefined1 auVar9 [16];
  bool local_78;
  ulong local_68;
  ulong *local_60;
  ulong local_58;
  ulong local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x518) == 0) {
    uVar5 = glslang::GetThreadPoolAllocator();
    puVar6 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar5);
    uVar7 = glslang::GetThreadPoolAllocator();
    *(undefined4 *)(puVar6 + 2) = 0;
    *puVar6 = uVar7;
    puVar6[3] = 0;
    puVar6[4] = puVar6 + 2;
    puVar6[5] = puVar6 + 2;
    puVar6[6] = 0;
    uVar7 = glslang::GetThreadPoolAllocator();
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar6[7] = uVar7;
    puVar6[10] = 0;
    puVar6[0xb] = puVar6 + 9;
    puVar6[0xc] = puVar6 + 9;
    puVar6[0xd] = 0;
    *(undefined8 **)(this + 0x518) = puVar6;
  }
  p_Var4 = *(_Rb_tree_node_base **)(param_1 + 0x20);
  do {
    if ((_Rb_tree_node_base *)(param_1 + 0x10) == p_Var4) {
      for (p_Var4 = *(_Rb_tree_node_base **)(param_1 + 0x58);
          (_Rb_tree_node_base *)(param_1 + 0x48) != p_Var4;
          p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var4)) {
        uVar1 = *(uint *)(p_Var4 + 0x20);
        lVar2 = *(long *)(this + 0x518);
        auVar9 = std::
                 _Rb_tree<int,int,std::_Identity<int>,std::less<int>,glslang::pool_allocator<int>>::
                 _M_get_insert_unique_pos
                           ((_Rb_tree<int,int,std::_Identity<int>,std::less<int>,glslang::pool_allocator<int>>
                             *)(lVar2 + 0x38),(int *)(ulong)uVar1);
        p_Var8 = auVar9._8_8_;
        if (p_Var8 != (_Rb_tree_node_base *)0x0) {
          local_78 = true;
          if ((auVar9._0_8_ == 0) && (p_Var8 != (_Rb_tree_node_base *)(lVar2 + 0x48))) {
            local_78 = (int)uVar1 < *(int *)(p_Var8 + 0x20);
          }
          p_Var3 = (_Rb_tree_node_base *)glslang::TPoolAllocator::allocate(*(ulong *)(lVar2 + 0x38))
          ;
          *(uint *)(p_Var3 + 0x20) = uVar1;
          std::_Rb_tree_insert_and_rebalance
                    (local_78,p_Var3,p_Var8,(_Rb_tree_node_base *)(lVar2 + 0x48));
          *(long *)(lVar2 + 0x68) = *(long *)(lVar2 + 0x68) + 1;
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_68 = glslang::GetThreadPoolAllocator();
    uVar5 = *(ulong *)(p_Var4 + 0x30);
    __src = *(undefined1 **)(p_Var4 + 0x28);
    local_60 = local_50;
    if (uVar5 < 0x10) {
      if (uVar5 == 1) {
        local_50[0] = CONCAT71(local_50[0]._1_7_,*__src);
      }
      else if (uVar5 != 0) goto LAB_00101035;
    }
    else {
      if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("basic_string::_M_create");
      }
      local_60 = (ulong *)glslang::TPoolAllocator::allocate(local_68);
      local_50[0] = uVar5;
LAB_00101035:
      memcpy(local_60,__src,uVar5);
    }
    *(undefined1 *)((long)local_60 + uVar5) = 0;
    local_58 = uVar5;
    std::
    _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
    ::
    _M_insert_unique<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const&>
              (*(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
                 **)(this + 0x518),(basic_string *)&local_68);
    p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var4);
  } while( true );
}



/* glslang::TParseContext::makeSpirvRequirement(glslang::TSourceLoc const&,
   std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> > const&,
   glslang::TIntermAggregate const*, glslang::TIntermAggregate const*) */

_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
* __thiscall
glslang::TParseContext::makeSpirvRequirement
          (TParseContext *this,TSourceLoc *param_1,basic_string *param_2,TIntermAggregate *param_3,
          TIntermAggregate *param_4)

{
  long *plVar1;
  ulong uVar2;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
  *this_00;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  TIntermAggregate *pTVar7;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = glslang::GetThreadPoolAllocator();
  this_00 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
             *)glslang::TPoolAllocator::allocate(uVar2);
  uVar3 = glslang::GetThreadPoolAllocator();
  *(undefined4 *)(this_00 + 0x10) = 0;
  *(undefined8 *)this_00 = uVar3;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
    **)(this_00 + 0x20) = this_00 + 0x10;
  *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
    **)(this_00 + 0x28) = this_00 + 0x10;
  *(undefined8 *)(this_00 + 0x30) = 0;
  uVar3 = glslang::GetThreadPoolAllocator();
  *(undefined8 *)(this_00 + 0x68) = 0;
  plVar1 = *(long **)(param_2 + 8);
  *(undefined8 *)(this_00 + 0x38) = uVar3;
  *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
    **)(this_00 + 0x58) = this_00 + 0x48;
  *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
    **)(this_00 + 0x60) = this_00 + 0x48;
  lVar4 = *(long *)(param_2 + 0x10);
  *(undefined4 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  if (lVar4 == 10) {
    if ((*plVar1 == 0x6f69736e65747865) && ((short)plVar1[1] == 0x736e)) {
      if (*(code **)(*(long *)param_3 + 0x198) == TIntermAggregate::getSequence) {
        pTVar7 = param_3 + 0xc0;
      }
      else {
        pTVar7 = (TIntermAggregate *)(**(code **)(*(long *)param_3 + 0x198))(param_3);
      }
      puVar6 = *(undefined8 **)(pTVar7 + 0x10);
      for (puVar5 = *(undefined8 **)(pTVar7 + 8); puVar6 != puVar5; puVar5 = puVar5 + 1) {
        lVar4 = (**(code **)(*(long *)*puVar5 + 0x28))();
        std::
        _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
        ::
        _M_insert_unique<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const&>
                  (this_00,(basic_string *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 8));
      }
      goto LAB_001012b0;
    }
  }
  else if (((lVar4 == 0xc) && (*plVar1 == 0x696c696261706163)) && ((int)plVar1[1] == 0x73656974)) {
    if (*(code **)(*(long *)param_4 + 0x198) == TIntermAggregate::getSequence) {
      pTVar7 = param_4 + 0xc0;
    }
    else {
      pTVar7 = (TIntermAggregate *)(**(code **)(*(long *)param_4 + 0x198))(param_4);
    }
    puVar6 = *(undefined8 **)(pTVar7 + 8);
    puVar5 = *(undefined8 **)(pTVar7 + 0x10);
    if (puVar5 != puVar6) {
      do {
        plVar1 = (long *)*puVar6;
        puVar6 = puVar6 + 1;
        lVar4 = (**(code **)(*plVar1 + 0x28))();
        local_44 = **(int **)(*(long *)(lVar4 + 0xc0) + 8);
        std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,glslang::pool_allocator<int>>::
        _M_insert_unique<int>
                  ((_Rb_tree<int,int,std::_Identity<int>,std::less<int>,glslang::pool_allocator<int>>
                    *)(this_00 + 0x38),&local_44);
      } while (puVar5 != puVar6);
    }
    goto LAB_001012b0;
  }
  (**(code **)(*(long *)this + 0x158))(this,param_1,"unknown SPIR-V requirement",plVar1,&_LC23);
LAB_001012b0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::insertSpirvExecutionMode(int, glslang::TIntermAggregate const*) */

void __thiscall
glslang::TIntermediate::insertSpirvExecutionMode
          (TIntermediate *this,int param_1,TIntermAggregate *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  TIntermAggregate *pTVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long in_FS_OFFSET;
  bool bVar13;
  int local_7c [3];
  int *local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c[0] = param_1;
  if (*(long *)(this + 0x520) == 0) {
    uVar5 = glslang::GetThreadPoolAllocator();
    puVar6 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar5);
    uVar7 = glslang::GetThreadPoolAllocator();
    *(undefined4 *)(puVar6 + 2) = 0;
    *puVar6 = uVar7;
    puVar6[3] = 0;
    puVar6[4] = puVar6 + 2;
    puVar6[5] = puVar6 + 2;
    puVar6[6] = 0;
    uVar7 = glslang::GetThreadPoolAllocator();
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar6[7] = uVar7;
    puVar6[10] = 0;
    puVar6[0xb] = puVar6 + 9;
    puVar6[0xc] = puVar6 + 9;
    puVar6[0xd] = 0;
    *(undefined8 **)(this + 0x520) = puVar6;
  }
  local_68 = glslang::GetThreadPoolAllocator();
  local_60 = 0;
  local_58 = (long *)0x0;
  local_50 = (long *)0x0;
  if (param_2 != (TIntermAggregate *)0x0) {
    if (*(code **)(*(long *)param_2 + 0x198) == TIntermAggregate::getSequence) {
      pTVar9 = param_2 + 0xc0;
    }
    else {
      pTVar9 = (TIntermAggregate *)(**(code **)(*(long *)param_2 + 0x198))(param_2);
    }
    puVar6 = *(undefined8 **)(pTVar9 + 8);
    puVar1 = *(undefined8 **)(pTVar9 + 0x10);
    if (puVar1 != puVar6) {
      plVar12 = (long *)0x0;
      plVar10 = (long *)0x0;
      while( true ) {
        local_70 = (int *)(**(code **)(*(long *)*puVar6 + 0x28))();
        if (plVar10 == plVar12) {
          std::
          vector<glslang::TIntermConstantUnion_const*,glslang::pool_allocator<glslang::TIntermConstantUnion_const*>>
          ::_M_realloc_insert<glslang::TIntermConstantUnion_const*const&>
                    ((vector<glslang::TIntermConstantUnion_const*,glslang::pool_allocator<glslang::TIntermConstantUnion_const*>>
                      *)&local_68,plVar10,&local_70);
          plVar10 = local_58;
          plVar12 = local_50;
        }
        else {
          *plVar10 = (long)local_70;
          plVar10 = plVar10 + 1;
          plVar12 = local_50;
        }
        local_58 = plVar10;
        local_50 = plVar12;
        if (puVar1 == puVar6 + 1) break;
        puVar6 = puVar6 + 1;
      }
    }
  }
  lVar2 = *(long *)(this + 0x520);
  lVar11 = lVar2 + 0x10;
  lVar3 = *(long *)(lVar2 + 0x18);
  lVar4 = lVar11;
  if (*(long *)(lVar2 + 0x18) != 0) {
    do {
      while( true ) {
        lVar8 = lVar3;
        if (*(int *)(lVar8 + 0x20) < local_7c[0]) break;
        lVar3 = *(long *)(lVar8 + 0x10);
        lVar4 = lVar8;
        if (*(long *)(lVar8 + 0x10) == 0) goto LAB_00101540;
      }
      lVar3 = *(long *)(lVar8 + 0x18);
    } while (*(long *)(lVar8 + 0x18) != 0);
LAB_00101540:
    bVar13 = lVar11 != lVar4;
    lVar11 = lVar4;
    if ((bVar13) && (*(int *)(lVar4 + 0x20) <= local_7c[0])) goto LAB_0010154a;
  }
  local_70 = local_7c;
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>
          ::
          _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
                    (lVar2,lVar11,&local_70);
LAB_0010154a:
  std::
  vector<glslang::TIntermConstantUnion_const*,glslang::pool_allocator<glslang::TIntermConstantUnion_const*>>
  ::operator=((vector<glslang::TIntermConstantUnion_const*,glslang::pool_allocator<glslang::TIntermConstantUnion_const*>>
               *)(lVar4 + 0x28),(vector *)&local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TQualifier::setSpirvDecorateString(int, glslang::TIntermAggregate const*) */

void __thiscall
glslang::TQualifier::setSpirvDecorateString(TQualifier *this,int param_1,TIntermAggregate *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  TIntermAggregate *pTVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long in_FS_OFFSET;
  bool bVar13;
  int local_7c [3];
  int *local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c[0] = param_1;
  if (*(long *)(this + 0x40) == 0) {
    uVar5 = glslang::GetThreadPoolAllocator();
    puVar6 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar5);
    uVar7 = glslang::GetThreadPoolAllocator();
    *(undefined4 *)(puVar6 + 2) = 0;
    *puVar6 = uVar7;
    puVar6[3] = 0;
    puVar6[4] = puVar6 + 2;
    puVar6[5] = puVar6 + 2;
    puVar6[6] = 0;
    uVar7 = glslang::GetThreadPoolAllocator();
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar6[7] = uVar7;
    puVar6[10] = 0;
    puVar6[0xb] = puVar6 + 9;
    puVar6[0xc] = puVar6 + 9;
    puVar6[0xd] = 0;
    uVar7 = glslang::GetThreadPoolAllocator();
    *(undefined4 *)(puVar6 + 0x10) = 0;
    puVar6[0xe] = uVar7;
    puVar6[0x11] = 0;
    puVar6[0x12] = puVar6 + 0x10;
    puVar6[0x13] = puVar6 + 0x10;
    puVar6[0x14] = 0;
    *(undefined8 **)(this + 0x40) = puVar6;
  }
  local_68 = glslang::GetThreadPoolAllocator();
  local_60 = 0;
  local_58 = (long *)0x0;
  local_50 = (long *)0x0;
  if (*(code **)(*(long *)param_2 + 0x198) == TIntermAggregate::getSequence) {
    pTVar9 = param_2 + 0xc0;
  }
  else {
    pTVar9 = (TIntermAggregate *)(**(code **)(*(long *)param_2 + 0x198))(param_2);
  }
  puVar6 = *(undefined8 **)(pTVar9 + 8);
  puVar1 = *(undefined8 **)(pTVar9 + 0x10);
  if (puVar1 != puVar6) {
    plVar12 = (long *)0x0;
    plVar10 = (long *)0x0;
    while( true ) {
      local_70 = (int *)(**(code **)(*(long *)*puVar6 + 0x28))();
      if (plVar10 == plVar12) {
        std::
        vector<glslang::TIntermConstantUnion_const*,glslang::pool_allocator<glslang::TIntermConstantUnion_const*>>
        ::_M_realloc_insert<glslang::TIntermConstantUnion_const*const&>
                  ((vector<glslang::TIntermConstantUnion_const*,glslang::pool_allocator<glslang::TIntermConstantUnion_const*>>
                    *)&local_68,plVar10,&local_70);
        plVar10 = local_58;
        plVar12 = local_50;
      }
      else {
        *plVar10 = (long)local_70;
        plVar10 = plVar10 + 1;
        plVar12 = local_50;
      }
      local_58 = plVar10;
      local_50 = plVar12;
      if (puVar1 == puVar6 + 1) break;
      puVar6 = puVar6 + 1;
    }
  }
  lVar2 = *(long *)(this + 0x40);
  lVar11 = lVar2 + 0x80;
  lVar3 = *(long *)(lVar2 + 0x88);
  lVar4 = lVar11;
  if (*(long *)(lVar2 + 0x88) != 0) {
    do {
      while( true ) {
        lVar8 = lVar3;
        if (*(int *)(lVar8 + 0x20) < local_7c[0]) break;
        lVar3 = *(long *)(lVar8 + 0x10);
        lVar4 = lVar8;
        if (*(long *)(lVar8 + 0x10) == 0) goto LAB_00101788;
      }
      lVar3 = *(long *)(lVar8 + 0x18);
    } while (*(long *)(lVar8 + 0x18) != 0);
LAB_00101788:
    bVar13 = lVar11 != lVar4;
    lVar11 = lVar4;
    if ((bVar13) && (*(int *)(lVar4 + 0x20) <= local_7c[0])) goto LAB_00101792;
  }
  local_70 = local_7c;
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>
          ::
          _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
                    (lVar2 + 0x70,lVar11,&local_70);
LAB_00101792:
  std::
  vector<glslang::TIntermConstantUnion_const*,glslang::pool_allocator<glslang::TIntermConstantUnion_const*>>
  ::operator=((vector<glslang::TIntermConstantUnion_const*,glslang::pool_allocator<glslang::TIntermConstantUnion_const*>>
               *)(lVar4 + 0x28),(vector *)&local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TQualifier::setSpirvDecorate(int, glslang::TIntermAggregate const*) */

void __thiscall
glslang::TQualifier::setSpirvDecorate(TQualifier *this,int param_1,TIntermAggregate *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  TIntermAggregate *pTVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long in_FS_OFFSET;
  bool bVar13;
  int local_7c [3];
  int *local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c[0] = param_1;
  if (*(long *)(this + 0x40) == 0) {
    uVar5 = glslang::GetThreadPoolAllocator();
    puVar6 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar5);
    uVar7 = glslang::GetThreadPoolAllocator();
    *(undefined4 *)(puVar6 + 2) = 0;
    *puVar6 = uVar7;
    puVar6[3] = 0;
    puVar6[4] = puVar6 + 2;
    puVar6[5] = puVar6 + 2;
    puVar6[6] = 0;
    uVar7 = glslang::GetThreadPoolAllocator();
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar6[7] = uVar7;
    puVar6[10] = 0;
    puVar6[0xb] = puVar6 + 9;
    puVar6[0xc] = puVar6 + 9;
    puVar6[0xd] = 0;
    uVar7 = glslang::GetThreadPoolAllocator();
    *(undefined4 *)(puVar6 + 0x10) = 0;
    puVar6[0xe] = uVar7;
    puVar6[0x11] = 0;
    puVar6[0x12] = puVar6 + 0x10;
    puVar6[0x13] = puVar6 + 0x10;
    puVar6[0x14] = 0;
    *(undefined8 **)(this + 0x40) = puVar6;
  }
  local_68 = glslang::GetThreadPoolAllocator();
  local_60 = 0;
  local_58 = (long *)0x0;
  local_50 = (long *)0x0;
  if (param_2 != (TIntermAggregate *)0x0) {
    if (*(code **)(*(long *)param_2 + 0x198) == TIntermAggregate::getSequence) {
      pTVar9 = param_2 + 0xc0;
    }
    else {
      pTVar9 = (TIntermAggregate *)(**(code **)(*(long *)param_2 + 0x198))(param_2);
    }
    puVar6 = *(undefined8 **)(pTVar9 + 8);
    puVar1 = *(undefined8 **)(pTVar9 + 0x10);
    if (puVar1 != puVar6) {
      plVar12 = (long *)0x0;
      plVar10 = (long *)0x0;
      while( true ) {
        local_70 = (int *)(**(code **)(*(long *)*puVar6 + 0x28))();
        if (plVar10 == plVar12) {
          std::
          vector<glslang::TIntermConstantUnion_const*,glslang::pool_allocator<glslang::TIntermConstantUnion_const*>>
          ::_M_realloc_insert<glslang::TIntermConstantUnion_const*const&>
                    ((vector<glslang::TIntermConstantUnion_const*,glslang::pool_allocator<glslang::TIntermConstantUnion_const*>>
                      *)&local_68,plVar10,&local_70);
          plVar10 = local_58;
          plVar12 = local_50;
        }
        else {
          *plVar10 = (long)local_70;
          plVar10 = plVar10 + 1;
          plVar12 = local_50;
        }
        local_58 = plVar10;
        local_50 = plVar12;
        if (puVar1 == puVar6 + 1) break;
        puVar6 = puVar6 + 1;
      }
    }
  }
  lVar2 = *(long *)(this + 0x40);
  lVar11 = lVar2 + 0x10;
  lVar3 = *(long *)(lVar2 + 0x18);
  lVar4 = lVar11;
  if (*(long *)(lVar2 + 0x18) != 0) {
    do {
      while( true ) {
        lVar8 = lVar3;
        if (*(int *)(lVar8 + 0x20) < local_7c[0]) break;
        lVar3 = *(long *)(lVar8 + 0x10);
        lVar4 = lVar8;
        if (*(long *)(lVar8 + 0x10) == 0) goto LAB_00101a08;
      }
      lVar3 = *(long *)(lVar8 + 0x18);
    } while (*(long *)(lVar8 + 0x18) != 0);
LAB_00101a08:
    bVar13 = lVar11 != lVar4;
    lVar11 = lVar4;
    if ((bVar13) && (*(int *)(lVar4 + 0x20) <= local_7c[0])) goto LAB_00101a12;
  }
  local_70 = local_7c;
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>
          ::
          _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
                    (lVar2,lVar11,&local_70);
LAB_00101a12:
  std::
  vector<glslang::TIntermConstantUnion_const*,glslang::pool_allocator<glslang::TIntermConstantUnion_const*>>
  ::operator=((vector<glslang::TIntermConstantUnion_const*,glslang::pool_allocator<glslang::TIntermConstantUnion_const*>>
               *)(lVar4 + 0x28),(vector *)&local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::insertSpirvExecutionModeId(int, glslang::TIntermAggregate const*) */

void __thiscall
glslang::TIntermediate::insertSpirvExecutionModeId
          (TIntermediate *this,int param_1,TIntermAggregate *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  TIntermAggregate *pTVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long in_FS_OFFSET;
  bool bVar13;
  int local_7c [3];
  int *local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c[0] = param_1;
  if (*(long *)(this + 0x520) == 0) {
    uVar5 = glslang::GetThreadPoolAllocator();
    puVar6 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar5);
    uVar7 = glslang::GetThreadPoolAllocator();
    *(undefined4 *)(puVar6 + 2) = 0;
    *puVar6 = uVar7;
    puVar6[3] = 0;
    puVar6[4] = puVar6 + 2;
    puVar6[5] = puVar6 + 2;
    puVar6[6] = 0;
    uVar7 = glslang::GetThreadPoolAllocator();
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar6[7] = uVar7;
    puVar6[10] = 0;
    puVar6[0xb] = puVar6 + 9;
    puVar6[0xc] = puVar6 + 9;
    puVar6[0xd] = 0;
    *(undefined8 **)(this + 0x520) = puVar6;
  }
  local_68 = glslang::GetThreadPoolAllocator();
  local_60 = 0;
  local_58 = (long *)0x0;
  local_50 = (long *)0x0;
  if (*(code **)(*(long *)param_2 + 0x198) == TIntermAggregate::getSequence) {
    pTVar9 = param_2 + 0xc0;
  }
  else {
    pTVar9 = (TIntermAggregate *)(**(code **)(*(long *)param_2 + 0x198))(param_2);
  }
  puVar6 = *(undefined8 **)(pTVar9 + 8);
  puVar1 = *(undefined8 **)(pTVar9 + 0x10);
  if (puVar1 != puVar6) {
    plVar12 = (long *)0x0;
    plVar10 = (long *)0x0;
    while( true ) {
      local_70 = (int *)(**(code **)(*(long *)*puVar6 + 0x18))();
      if (plVar10 == plVar12) {
        std::
        vector<glslang::TIntermTyped_const*,glslang::pool_allocator<glslang::TIntermTyped_const*>>::
        _M_realloc_insert<glslang::TIntermTyped_const*const&>
                  ((vector<glslang::TIntermTyped_const*,glslang::pool_allocator<glslang::TIntermTyped_const*>>
                    *)&local_68,plVar10,&local_70);
        plVar10 = local_58;
        plVar12 = local_50;
      }
      else {
        *plVar10 = (long)local_70;
        plVar10 = plVar10 + 1;
        plVar12 = local_50;
      }
      local_58 = plVar10;
      local_50 = plVar12;
      if (puVar1 == puVar6 + 1) break;
      puVar6 = puVar6 + 1;
    }
  }
  lVar2 = *(long *)(this + 0x520);
  lVar11 = lVar2 + 0x48;
  lVar3 = *(long *)(lVar2 + 0x50);
  lVar4 = lVar11;
  if (*(long *)(lVar2 + 0x50) != 0) {
    do {
      while( true ) {
        lVar8 = lVar3;
        if (*(int *)(lVar8 + 0x20) < local_7c[0]) break;
        lVar3 = *(long *)(lVar8 + 0x10);
        lVar4 = lVar8;
        if (*(long *)(lVar8 + 0x10) == 0) goto LAB_00101c80;
      }
      lVar3 = *(long *)(lVar8 + 0x18);
    } while (*(long *)(lVar8 + 0x18) != 0);
LAB_00101c80:
    bVar13 = lVar11 != lVar4;
    lVar11 = lVar4;
    if ((bVar13) && (*(int *)(lVar4 + 0x20) <= local_7c[0])) goto LAB_00101c8a;
  }
  local_70 = local_7c;
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>>
          ::
          _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
                    (lVar2 + 0x38,lVar11,&local_70);
LAB_00101c8a:
  std::vector<glslang::TIntermTyped_const*,glslang::pool_allocator<glslang::TIntermTyped_const*>>::
  operator=((vector<glslang::TIntermTyped_const*,glslang::pool_allocator<glslang::TIntermTyped_const*>>
             *)(lVar4 + 0x28),(vector *)&local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TQualifier::setSpirvDecorateId(int, glslang::TIntermAggregate const*) */

void __thiscall
glslang::TQualifier::setSpirvDecorateId(TQualifier *this,int param_1,TIntermAggregate *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  TIntermAggregate *pTVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long in_FS_OFFSET;
  bool bVar13;
  int local_7c [3];
  int *local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c[0] = param_1;
  if (*(long *)(this + 0x40) == 0) {
    uVar5 = glslang::GetThreadPoolAllocator();
    puVar6 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar5);
    uVar7 = glslang::GetThreadPoolAllocator();
    *(undefined4 *)(puVar6 + 2) = 0;
    *puVar6 = uVar7;
    puVar6[3] = 0;
    puVar6[4] = puVar6 + 2;
    puVar6[5] = puVar6 + 2;
    puVar6[6] = 0;
    uVar7 = glslang::GetThreadPoolAllocator();
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar6[7] = uVar7;
    puVar6[10] = 0;
    puVar6[0xb] = puVar6 + 9;
    puVar6[0xc] = puVar6 + 9;
    puVar6[0xd] = 0;
    uVar7 = glslang::GetThreadPoolAllocator();
    *(undefined4 *)(puVar6 + 0x10) = 0;
    puVar6[0xe] = uVar7;
    puVar6[0x11] = 0;
    puVar6[0x12] = puVar6 + 0x10;
    puVar6[0x13] = puVar6 + 0x10;
    puVar6[0x14] = 0;
    *(undefined8 **)(this + 0x40) = puVar6;
  }
  local_68 = glslang::GetThreadPoolAllocator();
  local_60 = 0;
  local_58 = (long *)0x0;
  local_50 = (long *)0x0;
  if (*(code **)(*(long *)param_2 + 0x198) == TIntermAggregate::getSequence) {
    pTVar9 = param_2 + 0xc0;
  }
  else {
    pTVar9 = (TIntermAggregate *)(**(code **)(*(long *)param_2 + 0x198))(param_2);
  }
  puVar6 = *(undefined8 **)(pTVar9 + 8);
  puVar1 = *(undefined8 **)(pTVar9 + 0x10);
  if (puVar1 != puVar6) {
    plVar12 = (long *)0x0;
    plVar10 = (long *)0x0;
    while( true ) {
      local_70 = (int *)(**(code **)(*(long *)*puVar6 + 0x18))();
      if (plVar10 == plVar12) {
        std::
        vector<glslang::TIntermTyped_const*,glslang::pool_allocator<glslang::TIntermTyped_const*>>::
        _M_realloc_insert<glslang::TIntermTyped_const*const&>
                  ((vector<glslang::TIntermTyped_const*,glslang::pool_allocator<glslang::TIntermTyped_const*>>
                    *)&local_68,plVar10,&local_70);
        plVar10 = local_58;
        plVar12 = local_50;
      }
      else {
        *plVar10 = (long)local_70;
        plVar10 = plVar10 + 1;
        plVar12 = local_50;
      }
      local_58 = plVar10;
      local_50 = plVar12;
      if (puVar1 == puVar6 + 1) break;
      puVar6 = puVar6 + 1;
    }
  }
  lVar2 = *(long *)(this + 0x40);
  lVar11 = lVar2 + 0x48;
  lVar3 = *(long *)(lVar2 + 0x50);
  lVar4 = lVar11;
  if (*(long *)(lVar2 + 0x50) != 0) {
    do {
      while( true ) {
        lVar8 = lVar3;
        if (*(int *)(lVar8 + 0x20) < local_7c[0]) break;
        lVar3 = *(long *)(lVar8 + 0x10);
        lVar4 = lVar8;
        if (*(long *)(lVar8 + 0x10) == 0) goto LAB_00101ec0;
      }
      lVar3 = *(long *)(lVar8 + 0x18);
    } while (*(long *)(lVar8 + 0x18) != 0);
LAB_00101ec0:
    bVar13 = lVar11 != lVar4;
    lVar11 = lVar4;
    if ((bVar13) && (*(int *)(lVar4 + 0x20) <= local_7c[0])) goto LAB_00101eca;
  }
  local_70 = local_7c;
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>>
          ::
          _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
                    (lVar2 + 0x38,lVar11,&local_70);
LAB_00101eca:
  std::vector<glslang::TIntermTyped_const*,glslang::pool_allocator<glslang::TIntermTyped_const*>>::
  operator=((vector<glslang::TIntermTyped_const*,glslang::pool_allocator<glslang::TIntermTyped_const*>>
             *)(lVar4 + 0x28),(vector *)&local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_append(char const*, unsigned long) [clone .isra.0] */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar4;
  
  uVar2 = *(ulong *)(this + 0x10);
  pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8);
  uVar1 = uVar2 + param_2;
  if (pbVar4 == this + 0x18) {
    uVar3 = 0xf;
  }
  else {
    uVar3 = *(ulong *)(this + 0x18);
  }
  if (uVar1 <= uVar3) {
    if (param_2 != 0) {
      if (param_2 == 1) {
        pbVar4[uVar2] =
             (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)*param_1;
        *(ulong *)(this + 0x10) = uVar1;
        *(undefined1 *)(*(long *)(this + 8) + uVar1) = 0;
        return;
      }
      memcpy(pbVar4 + uVar2,param_1,param_2);
      pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                (this + 8);
    }
    *(ulong *)(this + 0x10) = uVar1;
    pbVar4[uVar1] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
    return;
  }
  _M_mutate(this,uVar2,0,param_1,param_2);
  *(ulong *)(this + 0x10) = uVar1;
  *(undefined1 *)(*(long *)(this + 8) + uVar1) = 0;
  return;
}



/* glslang::TQualifier::getSpirvDecorateQualifierString[abi:cxx11]()
   const::{lambda(glslang::TIntermTyped const*)#1}::TEMPNAMEPLACEHOLDERVALUE(glslang::TIntermTyped
   const*) const */

_func_getSpirvDecorateQualifierString * __thiscall
const::{lambda(glslang::TIntermTyped_const*)#1}::operator()
          (_lambda_glslang__TIntermTyped_const___1_ *this,TIntermTyped *param_1)

{
  ulong uVar1;
  TIntermTyped TVar2;
  byte bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  size_t sVar10;
  ulong uVar11;
  uint uVar12;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar13;
  uint uVar14;
  char cVar15;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar16;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar17;
  long in_FS_OFFSET;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_b8 [2];
  long local_a8 [2];
  long *local_98 [2];
  long local_88 [2];
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_78;
  uint local_70;
  long local_68 [2];
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_58 [2];
  long local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = (**(code **)(*(long *)param_1 + 0x88))(param_1);
  if (lVar8 == 0) {
    puVar4 = *(undefined8 **)(this + 0x20);
    plVar9 = (long *)(**(code **)(*(long *)param_1 + 0xc0))(param_1);
    if (*(code **)(*plVar9 + 400) == glslang::TIntermSymbol::getName_abi_cxx11_) {
      plVar9 = plVar9 + 0x19;
    }
    else {
      plVar9 = (long *)(**(code **)(*plVar9 + 400))();
    }
    pbVar17 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)plVar9[1];
    pbVar13 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)*puVar4;
  }
  else {
    lVar8 = (**(code **)(*(long *)param_1 + 0x88))(param_1);
    if (*(code **)(*(long *)param_1 + 0x100) == glslang::TIntermTyped::getBasicType) {
      uVar7 = (uint)(byte)param_1[0x28];
    }
    else {
      uVar7 = (**(code **)(*(long *)param_1 + 0x100))(param_1);
    }
    if (uVar7 == 1) {
      pbVar17 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                **(undefined8 **)this;
      __gnu_cxx::__to_xstring<std::__cxx11::string,char>
                ((_func_int_char_ptr_ulong_char_ptr___va_list_tag_ptr *)local_b8,0x10c070,
                 (char *)0x3a,(double)(float)**(double **)(*(long *)(lVar8 + 0xc0) + 8),&_LC25);
      pbVar13 = local_b8[0];
      sVar10 = strlen((char *)local_b8[0]);
      uVar5 = *(ulong *)(pbVar17 + 0x10);
      if (0x7fffffffffffffff - uVar5 < sVar10) goto LAB_001028c3;
      pbVar16 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                 (pbVar17 + 8);
      uVar1 = sVar10 + uVar5;
      if (pbVar16 == pbVar17 + 0x18) {
        uVar11 = 0xf;
      }
      else {
        uVar11 = *(ulong *)(pbVar17 + 0x18);
      }
      if (uVar11 < uVar1) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_mutate(pbVar17,uVar5,0,(char *)pbVar13,sVar10);
        pbVar16 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                   (pbVar17 + 8);
      }
      else if (sVar10 != 0) {
        if (sVar10 == 1) {
          pbVar16[uVar5] = *pbVar13;
          pbVar16 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                     (pbVar17 + 8);
        }
        else {
          memcpy(pbVar16 + uVar5,pbVar13,sVar10);
          pbVar16 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                     (pbVar17 + 8);
        }
      }
      *(ulong *)(pbVar17 + 0x10) = uVar1;
      pbVar16[uVar1] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
      if (local_b8[0] !=
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)local_a8) {
        operator_delete(local_b8[0],local_a8[0] + 1);
      }
      goto LAB_00102174;
    }
    if (*(code **)(*(long *)param_1 + 0x100) == glslang::TIntermTyped::getBasicType) {
      TVar2 = param_1[0x28];
      if (TVar2 == (TIntermTyped)0x8) {
LAB_001023b0:
        pbVar17 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                  **(undefined8 **)(this + 8);
        uVar7 = **(uint **)(*(long *)(lVar8 + 0xc0) + 8);
        uVar12 = -uVar7;
        if (0 < (int)uVar7) {
          uVar12 = uVar7;
        }
        if (uVar12 < 10) {
          uVar14 = 1;
        }
        else if (uVar12 < 100) {
          uVar14 = 2;
        }
        else if (uVar12 < 1000) {
          uVar14 = 3;
        }
        else if (uVar12 < 10000) {
          uVar14 = 4;
        }
        else {
          uVar14 = 5;
          if (99999 < uVar12) {
            if (uVar12 < 1000000) {
              iVar6 = 5;
LAB_00102441:
              uVar14 = iVar6 + 1;
            }
            else {
              uVar14 = 7;
              if (9999999 < uVar12) {
                if (uVar12 < 100000000) {
                  uVar14 = 8;
                }
                else {
                  if (999999999 < uVar12) {
                    iVar6 = 9;
                    goto LAB_00102441;
                  }
                  uVar14 = 9;
                }
              }
            }
          }
        }
        local_98[0] = local_88;
        std::__cxx11::string::_M_construct
                  ((ulong)local_98,(char)uVar14 - (char)((int)uVar7 >> 0x1f));
        std::__detail::__to_chars_10_impl<unsigned_int>
                  ((char *)((long)local_98[0] + (ulong)(uVar7 >> 0x1f)),uVar14,uVar12);
        plVar9 = local_98[0];
        sVar10 = strlen((char *)local_98[0]);
        if (0x7fffffffffffffffU - *(long *)(pbVar17 + 0x10) < sVar10) goto LAB_001028c3;
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_append(pbVar17,(char *)plVar9,sVar10);
        if (local_98[0] != local_88) {
          operator_delete(local_98[0],local_88[0] + 1);
        }
        goto LAB_00102174;
      }
LAB_00102142:
      uVar7 = (uint)(byte)TVar2;
      if (TVar2 == (TIntermTyped)0x9) {
LAB_001024d0:
        uVar7 = **(uint **)(*(long *)(lVar8 + 0xc0) + 8);
        pbVar17 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                  **(undefined8 **)(this + 0x10);
        if (uVar7 < 10) {
          cVar15 = '\x01';
        }
        else if (uVar7 < 100) {
          cVar15 = '\x02';
        }
        else if (uVar7 < 1000) {
          cVar15 = '\x03';
        }
        else if (uVar7 < 10000) {
          cVar15 = '\x04';
        }
        else {
          cVar15 = '\x05';
          if (99999 < uVar7) {
            if (uVar7 < 1000000) {
              cVar15 = '\x05';
LAB_00102553:
              cVar15 = cVar15 + '\x01';
            }
            else {
              cVar15 = '\a';
              if (9999999 < uVar7) {
                if (uVar7 < 100000000) {
                  cVar15 = '\b';
                }
                else {
                  if (999999999 < uVar7) {
                    cVar15 = '\t';
                    goto LAB_00102553;
                  }
                  cVar15 = '\t';
                }
              }
            }
          }
        }
        local_78 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                   local_68;
        std::__cxx11::string::_M_construct((ulong)&local_78,cVar15);
        std::__detail::__to_chars_10_impl<unsigned_int>((char *)local_78,local_70,uVar7);
        pbVar13 = local_78;
        sVar10 = strlen((char *)local_78);
        uVar5 = *(ulong *)(pbVar17 + 0x10);
        if (0x7fffffffffffffff - uVar5 < sVar10) goto LAB_001028c3;
        pbVar16 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                   (pbVar17 + 8);
        uVar1 = sVar10 + uVar5;
        if (pbVar16 == pbVar17 + 0x18) {
          uVar11 = 0xf;
        }
        else {
          uVar11 = *(ulong *)(pbVar17 + 0x18);
        }
        if (uVar11 < uVar1) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_mutate(pbVar17,uVar5,0,(char *)pbVar13,sVar10);
          pbVar16 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                     (pbVar17 + 8);
        }
        else if (sVar10 != 0) {
          if (sVar10 == 1) {
            pbVar16[uVar5] = *pbVar13;
            pbVar16 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                       (pbVar17 + 8);
          }
          else {
            memcpy(pbVar16 + uVar5,pbVar13,sVar10);
            pbVar16 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                       (pbVar17 + 8);
          }
        }
        *(ulong *)(pbVar17 + 0x10) = uVar1;
        pbVar16[uVar1] =
             (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
        if (local_78 !=
            (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)local_68) {
          operator_delete(local_78,local_68[0] + 1);
        }
        goto LAB_00102174;
      }
    }
    else {
      iVar6 = (**(code **)(*(long *)param_1 + 0x100))(param_1);
      if (iVar6 == 8) goto LAB_001023b0;
      if (*(code **)(*(long *)param_1 + 0x100) == glslang::TIntermTyped::getBasicType) {
        TVar2 = param_1[0x28];
        goto LAB_00102142;
      }
      iVar6 = (**(code **)(*(long *)param_1 + 0x100))(param_1);
      if (iVar6 == 9) goto LAB_001024d0;
      if (*(code **)(*(long *)param_1 + 0x100) == glslang::TIntermTyped::getBasicType) {
        uVar7 = (uint)(byte)param_1[0x28];
      }
      else {
        uVar7 = (**(code **)(*(long *)param_1 + 0x100))(param_1);
      }
    }
    if (uVar7 == 0xc) {
      pbVar17 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                **(undefined8 **)(this + 0x18);
      bVar3 = **(byte **)(*(long *)(lVar8 + 0xc0) + 8);
      local_58[0] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                    local_48;
      std::__cxx11::string::_M_construct((ulong)local_58,'\x01');
      std::__detail::__to_chars_10_impl<unsigned_int>((char *)local_58[0],1,(uint)bVar3);
      pbVar13 = local_58[0];
      sVar10 = strlen((char *)local_58[0]);
      uVar5 = *(ulong *)(pbVar17 + 0x10);
      if (sVar10 <= 0x7fffffffffffffff - uVar5) {
        pbVar16 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                   (pbVar17 + 8);
        uVar1 = sVar10 + uVar5;
        if (pbVar16 == pbVar17 + 0x18) {
          uVar11 = 0xf;
        }
        else {
          uVar11 = *(ulong *)(pbVar17 + 0x18);
        }
        if (uVar11 < uVar1) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_mutate(pbVar17,uVar5,0,(char *)pbVar13,sVar10);
          pbVar16 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                     (pbVar17 + 8);
        }
        else if (sVar10 != 0) {
          if (sVar10 == 1) {
            pbVar16[uVar5] = *pbVar13;
            pbVar16 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                       (pbVar17 + 8);
          }
          else {
            memcpy(pbVar16 + uVar5,pbVar13,sVar10);
            pbVar16 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                       (pbVar17 + 8);
          }
        }
        *(ulong *)(pbVar17 + 0x10) = uVar1;
        pbVar16[uVar1] =
             (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
        if (local_58[0] !=
            (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)local_48) {
          operator_delete(local_58[0],local_48[0] + 1);
        }
        goto LAB_00102174;
      }
      goto LAB_001028c3;
    }
    if (*(code **)(*(long *)param_1 + 0x100) == glslang::TIntermTyped::getBasicType) {
      uVar7 = (uint)(byte)param_1[0x28];
    }
    else {
      uVar7 = (**(code **)(*(long *)param_1 + 0x100))(param_1);
    }
    if (uVar7 != 0x17) goto LAB_00102174;
    pbVar17 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
               (**(long **)(*(long *)(lVar8 + 0xc0) + 8) + 8);
    pbVar13 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
              **(undefined8 **)(this + 0x20);
  }
  sVar10 = strlen((char *)pbVar17);
  uVar5 = *(ulong *)(pbVar13 + 0x10);
  if (sVar10 <= 0x7fffffffffffffff - uVar5) {
    pbVar16 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
               (pbVar13 + 8);
    uVar1 = sVar10 + uVar5;
    if (pbVar16 == pbVar13 + 0x18) {
      uVar11 = 0xf;
    }
    else {
      uVar11 = *(ulong *)(pbVar13 + 0x18);
    }
    if (uVar11 < uVar1) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_mutate(pbVar13,uVar5,0,(char *)pbVar17,sVar10);
      *(ulong *)(pbVar13 + 0x10) = uVar1;
      *(undefined1 *)(*(long *)(pbVar13 + 8) + uVar1) = 0;
    }
    else {
      if (sVar10 != 0) {
        if (sVar10 == 1) {
          pbVar16[uVar5] = *pbVar17;
          pbVar16 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                     (pbVar13 + 8);
        }
        else {
          memcpy(pbVar16 + uVar5,pbVar17,sVar10);
          pbVar16 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                     (pbVar13 + 8);
        }
      }
      *(ulong *)(pbVar13 + 0x10) = uVar1;
      pbVar16[uVar1] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
    }
LAB_00102174:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (_func_getSpirvDecorateQualifierString *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_001028c3:
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("basic_string::append");
}



/* glslang::TQualifier::getSpirvDecorateQualifierString[abi:cxx11]() const */

basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *
glslang::TQualifier::getSpirvDecorateQualifierString_abi_cxx11_(void)

{
  uint uVar1;
  undefined8 *puVar2;
  TIntermTyped *pTVar3;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  size_t sVar9;
  _Rb_tree_node_base *p_Var10;
  long lVar11;
  long in_RSI;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *in_RDI;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  long in_FS_OFFSET;
  undefined1 local_100 [8];
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_f8;
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_e0;
  undefined1 *local_d8;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **ppbStack_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **local_b8;
  long *local_a8 [2];
  long local_98 [2];
  long *local_88 [2];
  long local_78 [2];
  long *local_68 [2];
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = glslang::GetThreadPoolAllocator();
  in_RDI[0x18] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
  *(undefined8 *)in_RDI = uVar7;
  *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(in_RDI + 8) =
       in_RDI + 0x18;
  local_b8 = &local_e0;
  lVar11 = *(long *)(in_RSI + 0x40);
  *(undefined8 *)(in_RDI + 0x10) = 0;
  p_Var10 = *(_Rb_tree_node_base **)(lVar11 + 0x20);
  local_f8 = in_RDI;
  local_e0 = in_RDI;
  local_d8 = local_100;
  ppbStack_d0 = &local_f8;
  local_c8 = local_f0;
  puStack_c0 = local_e8;
  if ((_Rb_tree_node_base *)(lVar11 + 0x10) == p_Var10) {
LAB_00102bf9:
    p_Var10 = *(_Rb_tree_node_base **)(lVar11 + 0x58);
    if ((_Rb_tree_node_base *)(lVar11 + 0x48) != p_Var10) {
      do {
        if (0x7fffffffffffffffU - *(long *)(local_e0 + 0x10) < 0x12) goto LAB_00103107;
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_append(local_e0,"spirv_decorate_id(",0x12);
        pbVar4 = local_f8;
        uVar1 = *(uint *)(p_Var10 + 0x20);
        uVar12 = -uVar1;
        if (0 < (int)uVar1) {
          uVar12 = uVar1;
        }
        if (uVar12 < 10) {
          uVar13 = 1;
        }
        else if (uVar12 < 100) {
          uVar13 = 2;
        }
        else if (uVar12 < 1000) {
          uVar13 = 3;
        }
        else if (uVar12 < 10000) {
          uVar13 = 4;
        }
        else {
          uVar13 = 5;
          if (99999 < uVar12) {
            if (uVar12 < 1000000) {
              iVar6 = 5;
LAB_00102cdb:
              uVar13 = iVar6 + 1;
            }
            else {
              uVar13 = 7;
              if (9999999 < uVar12) {
                if (uVar12 < 100000000) {
                  uVar13 = 8;
                }
                else {
                  if (999999999 < uVar12) {
                    iVar6 = 9;
                    goto LAB_00102cdb;
                  }
                  uVar13 = 9;
                }
              }
            }
          }
        }
        local_88[0] = local_78;
        std::__cxx11::string::_M_construct
                  ((ulong)local_88,(char)uVar13 - (char)((int)uVar1 >> 0x1f));
        std::__detail::__to_chars_10_impl<unsigned_int>
                  ((char *)((long)local_88[0] + (ulong)(uVar1 >> 0x1f)),uVar13,uVar12);
        plVar5 = local_88[0];
        sVar9 = strlen((char *)local_88[0]);
        if (0x7fffffffffffffffU - *(long *)(pbVar4 + 0x10) < sVar9) goto LAB_00103107;
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_append(pbVar4,(char *)plVar5,sVar9);
        if (local_88[0] != local_78) {
          operator_delete(local_88[0],local_78[0] + 1);
        }
        puVar2 = *(undefined8 **)(p_Var10 + 0x38);
        for (puVar14 = *(undefined8 **)(p_Var10 + 0x30); puVar2 != puVar14; puVar14 = puVar14 + 1) {
          pTVar3 = (TIntermTyped *)*puVar14;
          if (0x7fffffffffffffffU - *(long *)(local_e0 + 0x10) < 2) goto LAB_00103107;
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_append(local_e0,", ",2);
          const::{lambda(glslang::TIntermTyped_const*)#1}::operator()
                    ((_lambda_glslang__TIntermTyped_const___1_ *)&local_d8,pTVar3);
        }
        if (0x7fffffffffffffffU - *(long *)(local_e0 + 0x10) < 2) goto LAB_00103107;
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_append(local_e0,") ",2);
        p_Var10 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var10);
      } while ((_Rb_tree_node_base *)(lVar11 + 0x48) != p_Var10);
      lVar11 = *(long *)(in_RSI + 0x40);
    }
    p_Var10 = *(_Rb_tree_node_base **)(lVar11 + 0x90);
    while( true ) {
      if ((_Rb_tree_node_base *)(lVar11 + 0x80) == p_Var10) {
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return in_RDI;
      }
      if (0x7fffffffffffffffU - *(long *)(local_e0 + 0x10) < 0x16) break;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(local_e0,"spirv_decorate_string(",0x16);
      pbVar4 = local_f8;
      uVar1 = *(uint *)(p_Var10 + 0x20);
      uVar12 = -uVar1;
      if (0 < (int)uVar1) {
        uVar12 = uVar1;
      }
      if (uVar12 < 10) {
        uVar13 = 1;
      }
      else if (uVar12 < 100) {
        uVar13 = 2;
      }
      else if (uVar12 < 1000) {
        uVar13 = 3;
      }
      else if (uVar12 < 10000) {
        uVar13 = 4;
      }
      else {
        uVar13 = 5;
        if (99999 < uVar12) {
          if (uVar12 < 1000000) {
            iVar6 = 5;
LAB_00102eeb:
            uVar13 = iVar6 + 1;
          }
          else {
            uVar13 = 7;
            if (9999999 < uVar12) {
              if (uVar12 < 100000000) {
                uVar13 = 8;
              }
              else {
                if (999999999 < uVar12) {
                  iVar6 = 9;
                  goto LAB_00102eeb;
                }
                uVar13 = 9;
              }
            }
          }
        }
      }
      local_68[0] = local_58;
      std::__cxx11::string::_M_construct((ulong)local_68,(char)uVar13 - (char)((int)uVar1 >> 0x1f));
      std::__detail::__to_chars_10_impl<unsigned_int>
                ((char *)((long)local_68[0] + (ulong)(uVar1 >> 0x1f)),uVar13,uVar12);
      plVar5 = local_68[0];
      sVar9 = strlen((char *)local_68[0]);
      if (0x7fffffffffffffffU - *(long *)(pbVar4 + 0x10) < sVar9) break;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(pbVar4,(char *)plVar5,sVar9);
      if (local_68[0] != local_58) {
        operator_delete(local_68[0],local_58[0] + 1);
      }
      puVar2 = *(undefined8 **)(p_Var10 + 0x38);
      for (puVar14 = *(undefined8 **)(p_Var10 + 0x30); puVar2 != puVar14; puVar14 = puVar14 + 1) {
        pTVar3 = (TIntermTyped *)*puVar14;
        if (0x7fffffffffffffffU - *(long *)(local_e0 + 0x10) < 2) goto LAB_00103107;
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_append(local_e0,", ",2);
        const::{lambda(glslang::TIntermTyped_const*)#1}::operator()
                  ((_lambda_glslang__TIntermTyped_const___1_ *)&local_d8,pTVar3);
      }
      if (0x7fffffffffffffffU - *(long *)(local_e0 + 0x10) < 2) break;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(local_e0,") ",2);
      p_Var10 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var10);
    }
  }
  else {
    lVar8 = 0;
    while (0xe < 0x7fffffffffffffffU - lVar8) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(local_e0,"spirv_decorate(",0xf);
      pbVar4 = local_f8;
      uVar1 = *(uint *)(p_Var10 + 0x20);
      uVar12 = -uVar1;
      if (0 < (int)uVar1) {
        uVar12 = uVar1;
      }
      if (uVar12 < 10) {
        uVar13 = 1;
      }
      else if (uVar12 < 100) {
        uVar13 = 2;
      }
      else if (uVar12 < 1000) {
        uVar13 = 3;
      }
      else if (uVar12 < 10000) {
        uVar13 = 4;
      }
      else {
        uVar13 = 5;
        if (99999 < uVar12) {
          if (uVar12 < 1000000) {
            iVar6 = 5;
LAB_00102a9d:
            uVar13 = iVar6 + 1;
          }
          else {
            uVar13 = 7;
            if (9999999 < uVar12) {
              if (uVar12 < 100000000) {
                uVar13 = 8;
              }
              else {
                if (999999999 < uVar12) {
                  iVar6 = 9;
                  goto LAB_00102a9d;
                }
                uVar13 = 9;
              }
            }
          }
        }
      }
      local_a8[0] = local_98;
      std::__cxx11::string::_M_construct((ulong)local_a8,(char)uVar13 - (char)((int)uVar1 >> 0x1f));
      std::__detail::__to_chars_10_impl<unsigned_int>
                ((char *)((long)local_a8[0] + (ulong)(uVar1 >> 0x1f)),uVar13,uVar12);
      plVar5 = local_a8[0];
      sVar9 = strlen((char *)local_a8[0]);
      if (0x7fffffffffffffffU - *(long *)(pbVar4 + 0x10) < sVar9) break;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(pbVar4,(char *)plVar5,sVar9);
      if (local_a8[0] != local_98) {
        operator_delete(local_a8[0],local_98[0] + 1);
      }
      puVar2 = *(undefined8 **)(p_Var10 + 0x38);
      for (puVar14 = *(undefined8 **)(p_Var10 + 0x30); puVar2 != puVar14; puVar14 = puVar14 + 1) {
        pTVar3 = (TIntermTyped *)*puVar14;
        if (0x7fffffffffffffffU - *(long *)(local_e0 + 0x10) < 2) goto LAB_00103107;
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_append(local_e0,", ",2);
        const::{lambda(glslang::TIntermTyped_const*)#1}::operator()
                  ((_lambda_glslang__TIntermTyped_const___1_ *)&local_d8,pTVar3);
      }
      if (0x7fffffffffffffffU - *(long *)(local_e0 + 0x10) < 2) break;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(local_e0,") ",2);
      p_Var10 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var10);
      if ((_Rb_tree_node_base *)(lVar11 + 0x10) == p_Var10) {
        lVar11 = *(long *)(in_RSI + 0x40);
        goto LAB_00102bf9;
      }
      lVar8 = *(long *)(local_e0 + 0x10);
    }
  }
LAB_00103107:
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("basic_string::append");
}



/* glslang::TParseContext::mergeSpirvInstruction(glslang::TSourceLoc const&,
   glslang::TSpirvInstruction*, glslang::TSpirvInstruction*) */

TSpirvInstruction * __thiscall
glslang::TParseContext::mergeSpirvInstruction
          (TParseContext *this,TSourceLoc *param_1,TSpirvInstruction *param_2,
          TSpirvInstruction *param_3)

{
  if (*(long *)(param_3 + 0x10) != 0) {
    if (*(long *)(param_2 + 0x10) == 0) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_assign((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_2,
                (basic_string *)param_3);
    }
    else {
      (**(code **)(*(long *)this + 0x158))
                (this,param_1,"too many SPIR-V instruction qualifiers","spirv_instruction","(set)");
    }
  }
  if (*(int *)(param_3 + 0x28) != -1) {
    if (*(int *)(param_2 + 0x28) == -1) {
      *(int *)(param_2 + 0x28) = *(int *)(param_3 + 0x28);
      return param_2;
    }
    (**(code **)(*(long *)this + 0x158))
              (this,param_1,"too many SPIR-V instruction qualifiers","spirv_instruction",&_LC35);
  }
  return param_2;
}



/* glslang::TParseContext::makeSpirvTypeParameters(glslang::TSourceLoc const&,
   glslang::TIntermConstantUnion const*) */

vector<glslang::TSpirvTypeParameter,glslang::pool_allocator<glslang::TSpirvTypeParameter>> *
__thiscall
glslang::TParseContext::makeSpirvTypeParameters
          (TParseContext *this,TSourceLoc *param_1,TIntermConstantUnion *param_2)

{
  TIntermConstantUnion TVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  vector<glslang::TSpirvTypeParameter,glslang::pool_allocator<glslang::TSpirvTypeParameter>> *pvVar8
  ;
  undefined8 uVar9;
  char *pcVar10;
  TIntermConstantUnion *pTVar11;
  undefined8 *puVar12;
  long in_FS_OFFSET;
  TIntermConstantUnion *local_48;
  undefined1 uStack_40;
  uint7 uStack_3f;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = glslang::GetThreadPoolAllocator();
  pvVar8 = (vector<glslang::TSpirvTypeParameter,glslang::pool_allocator<glslang::TSpirvTypeParameter>>
            *)glslang::TPoolAllocator::allocate(uVar7);
  uVar9 = glslang::GetThreadPoolAllocator();
  *(undefined8 *)(pvVar8 + 8) = 0;
  *(undefined8 *)pvVar8 = uVar9;
  lVar2 = *(long *)param_2;
  *(undefined8 *)(pvVar8 + 0x10) = 0;
  pcVar3 = *(code **)(lVar2 + 0x100);
  *(undefined8 *)(pvVar8 + 0x18) = 0;
  if (pcVar3 == TIntermTyped::getBasicType) {
    TVar1 = param_2[0x28];
    if (TVar1 != (TIntermConstantUnion)0x1) {
LAB_00103283:
      if (TVar1 != (TIntermConstantUnion)0x8) {
LAB_00103288:
        if (TVar1 != (TIntermConstantUnion)0x9) {
LAB_0010328d:
          uVar6 = (uint)(byte)TVar1;
          if (TVar1 != (TIntermConstantUnion)0xc) {
LAB_00103292:
            if (uVar6 != 0x17) {
              pcVar3 = *(code **)(*(long *)this + 0x158);
              if (*(code **)(*(long *)param_2 + 0xf0) == TIntermTyped::getType) {
                pTVar11 = param_2 + 0x20;
              }
              else {
                pTVar11 = (TIntermConstantUnion *)(**(code **)(*(long *)param_2 + 0xf0))(param_2);
              }
              switch(pTVar11[8]) {
              case (TIntermConstantUnion)0x0:
                pcVar10 = "void";
                break;
              case (TIntermConstantUnion)0x1:
                pcVar10 = "float";
                break;
              case (TIntermConstantUnion)0x2:
                pcVar10 = "double";
                break;
              case (TIntermConstantUnion)0x3:
                pcVar10 = "float16_t";
                break;
              case (TIntermConstantUnion)0x4:
                pcVar10 = "int8_t";
                break;
              case (TIntermConstantUnion)0x5:
                pcVar10 = "uint8_t";
                break;
              case (TIntermConstantUnion)0x6:
                pcVar10 = "int16_t";
                break;
              case (TIntermConstantUnion)0x7:
                pcVar10 = "uint16_t";
                break;
              case (TIntermConstantUnion)0x8:
                pcVar10 = "int";
                break;
              case (TIntermConstantUnion)0x9:
                pcVar10 = "uint";
                break;
              case (TIntermConstantUnion)0xa:
                pcVar10 = "int64_t";
                break;
              case (TIntermConstantUnion)0xb:
                pcVar10 = "uint64_t";
                break;
              case (TIntermConstantUnion)0xc:
                pcVar10 = "bool";
                break;
              case (TIntermConstantUnion)0xd:
                pcVar10 = "atomic_uint";
                break;
              case (TIntermConstantUnion)0xe:
                pcVar10 = "sampler/image";
                break;
              case (TIntermConstantUnion)0xf:
                pcVar10 = "structure";
                break;
              case (TIntermConstantUnion)0x10:
                pcVar10 = "block";
                break;
              case (TIntermConstantUnion)0x11:
                pcVar10 = "accelerationStructureNV";
                break;
              case (TIntermConstantUnion)0x12:
                pcVar10 = "reference";
                break;
              case (TIntermConstantUnion)0x13:
                pcVar10 = "rayQueryEXT";
                break;
              default:
                pcVar10 = "unknown type";
                break;
              case (TIntermConstantUnion)0x15:
                pcVar10 = "coopmat";
                break;
              case (TIntermConstantUnion)0x16:
                pcVar10 = "spirv_type";
                break;
              case (TIntermConstantUnion)0x17:
                pcVar10 = "string";
              }
              (*pcVar3)(this,param_1,"this type not allowed",pcVar10,&_LC23);
              goto LAB_0010331b;
            }
          }
        }
      }
      goto LAB_001032f0;
    }
    puVar12 = (undefined8 *)0x0;
  }
  else {
    iVar5 = (*pcVar3)(param_2);
    if (iVar5 != 1) {
      if (*(code **)(*(long *)param_2 + 0x100) == TIntermTyped::getBasicType) {
        TVar1 = param_2[0x28];
        goto LAB_00103283;
      }
      iVar5 = (**(code **)(*(long *)param_2 + 0x100))(param_2);
      if (iVar5 != 8) {
        if (*(code **)(*(long *)param_2 + 0x100) == TIntermTyped::getBasicType) {
          TVar1 = param_2[0x28];
          goto LAB_00103288;
        }
        iVar5 = (**(code **)(*(long *)param_2 + 0x100))(param_2);
        if (iVar5 != 9) {
          if (*(code **)(*(long *)param_2 + 0x100) == TIntermTyped::getBasicType) {
            TVar1 = param_2[0x28];
            goto LAB_0010328d;
          }
          iVar5 = (**(code **)(*(long *)param_2 + 0x100))(param_2);
          if (iVar5 != 0xc) {
            if (*(code **)(*(long *)param_2 + 0x100) == TIntermTyped::getBasicType) {
              uVar6 = (uint)(byte)param_2[0x28];
            }
            else {
              uVar6 = (**(code **)(*(long *)param_2 + 0x100))(param_2);
            }
            goto LAB_00103292;
          }
        }
      }
    }
LAB_001032f0:
    puVar4 = *(undefined8 **)(pvVar8 + 0x10);
    puVar12 = *(undefined8 **)(pvVar8 + 0x18);
    uStack_40 = 0;
    if (puVar4 != puVar12) {
      *puVar4 = param_2;
      puVar4[1] = (ulong)uStack_3f << 8;
      *(undefined8 **)(pvVar8 + 0x10) = puVar4 + 2;
      local_48 = param_2;
      goto LAB_0010331b;
    }
  }
  uStack_40 = 0;
  local_48 = param_2;
  std::vector<glslang::TSpirvTypeParameter,glslang::pool_allocator<glslang::TSpirvTypeParameter>>::
  _M_realloc_insert<glslang::TSpirvTypeParameter>(pvVar8,puVar12,&local_48);
LAB_0010331b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pvVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TParseContext::makeSpirvTypeParameters(glslang::TSourceLoc const&, glslang::TPublicType
   const&) */

vector<glslang::TSpirvTypeParameter,glslang::pool_allocator<glslang::TSpirvTypeParameter>> *
__thiscall
glslang::TParseContext::makeSpirvTypeParameters
          (TParseContext *this,TSourceLoc *param_1,TPublicType *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  vector<glslang::TSpirvTypeParameter,glslang::pool_allocator<glslang::TSpirvTypeParameter>> *pvVar3
  ;
  undefined8 uVar4;
  TType *this_00;
  long in_FS_OFFSET;
  TType *local_38;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = glslang::GetThreadPoolAllocator();
  pvVar3 = (vector<glslang::TSpirvTypeParameter,glslang::pool_allocator<glslang::TSpirvTypeParameter>>
            *)glslang::TPoolAllocator::allocate(uVar2);
  uVar4 = glslang::GetThreadPoolAllocator();
  *(undefined8 *)(pvVar3 + 8) = 0;
  *(undefined8 *)pvVar3 = uVar4;
  *(undefined8 *)(pvVar3 + 0x10) = 0;
  *(undefined8 *)(pvVar3 + 0x18) = 0;
  uVar2 = glslang::GetThreadPoolAllocator();
  this_00 = (TType *)glslang::TPoolAllocator::allocate(uVar2);
  TType::TType(this_00,param_2);
  puVar1 = *(undefined8 **)(pvVar3 + 0x10);
  uStack_30 = 1;
  local_38 = this_00;
  if (puVar1 == *(undefined8 **)(pvVar3 + 0x18)) {
    std::vector<glslang::TSpirvTypeParameter,glslang::pool_allocator<glslang::TSpirvTypeParameter>>
    ::_M_realloc_insert<glslang::TSpirvTypeParameter>(pvVar3,puVar1,&local_38);
  }
  else {
    *puVar1 = this_00;
    puVar1[1] = CONCAT71(uStack_2f,1);
    *(undefined8 **)(pvVar3 + 0x10) = puVar1 + 2;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pvVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TPublicType::setSpirvType(glslang::TSpirvInstruction const&,
   glslang::TVector<glslang::TSpirvTypeParameter> const*) */

void __thiscall
glslang::TPublicType::setSpirvType(TPublicType *this,TSpirvInstruction *param_1,TVector *param_2)

{
  long lVar1;
  long lVar2;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this_00;
  undefined8 uVar3;
  long lVar4;
  size_t __n;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *__dest;
  undefined8 *puVar9;
  
  this_00 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
             (this + 0xf0);
  if (this_00 == (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)0x0) {
    uVar7 = glslang::GetThreadPoolAllocator();
    this_00 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
              glslang::TPoolAllocator::allocate(uVar7);
    TSpirvInstruction::TSpirvInstruction((TSpirvInstruction *)this_00);
    uVar3 = glslang::GetThreadPoolAllocator();
    *(undefined8 *)((TSpirvInstruction *)this_00 + 0x38) = 0;
    *(undefined8 *)((TSpirvInstruction *)this_00 + 0x30) = uVar3;
    *(undefined8 *)((TSpirvInstruction *)this_00 + 0x40) = 0;
    *(undefined8 *)((TSpirvInstruction *)this_00 + 0x48) = 0;
    *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 0xf0) =
         this_00;
  }
  *(undefined4 *)this = 0x16;
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
            (this_00,(basic_string *)param_1);
  *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(param_1 + 0x28);
  if ((param_2 == (TVector *)0x0) ||
     (lVar1 = *(long *)(this + 0xf0), param_2 == (TVector *)(lVar1 + 0x30))) {
    return;
  }
  puVar9 = *(undefined8 **)(param_2 + 0x10);
  puVar6 = *(undefined8 **)(param_2 + 8);
  __dest = *(undefined8 **)(lVar1 + 0x38);
  uVar7 = (long)puVar9 - (long)puVar6;
  if ((ulong)(*(long *)(lVar1 + 0x48) - (long)__dest) < uVar7) {
    lVar4 = glslang::TPoolAllocator::allocate(*(ulong *)(lVar1 + 0x30));
    uVar5 = 0;
    if (puVar9 != puVar6) {
      do {
        uVar3 = ((undefined8 *)((long)puVar6 + uVar5))[1];
        *(undefined8 *)(lVar4 + uVar5) = *(undefined8 *)((long)puVar6 + uVar5);
        ((undefined8 *)(lVar4 + uVar5))[1] = uVar3;
        uVar5 = uVar5 + 0x10;
      } while (uVar7 != uVar5);
    }
    lVar8 = uVar7 + lVar4;
    *(long *)(lVar1 + 0x38) = lVar4;
    *(long *)(lVar1 + 0x48) = lVar8;
  }
  else {
    lVar4 = *(long *)(lVar1 + 0x40);
    __n = lVar4 - (long)__dest;
    if (__n < uVar7) {
      if ((long)__n < 0x11) {
        if (__n == 0x10) {
          uVar3 = puVar6[1];
          *__dest = *puVar6;
          __dest[1] = uVar3;
        }
      }
      else {
        memmove(__dest,puVar6,__n);
        lVar4 = *(long *)(lVar1 + 0x40);
        __dest = *(undefined8 **)(lVar1 + 0x38);
        puVar9 = *(undefined8 **)(param_2 + 0x10);
        puVar6 = *(undefined8 **)(param_2 + 8);
        __n = lVar4 - (long)__dest;
      }
      puVar6 = (undefined8 *)((long)puVar6 + __n);
      lVar8 = uVar7 + (long)__dest;
      if (puVar6 != puVar9) {
        lVar2 = 0;
        do {
          uVar3 = ((undefined8 *)((long)puVar6 + lVar2))[1];
          *(undefined8 *)(lVar4 + lVar2) = *(undefined8 *)((long)puVar6 + lVar2);
          ((undefined8 *)(lVar4 + lVar2))[1] = uVar3;
          lVar2 = lVar2 + 0x10;
        } while (lVar2 != (long)puVar9 - (long)puVar6);
        *(long *)(lVar1 + 0x40) = lVar8;
        return;
      }
    }
    else if ((long)uVar7 < 0x11) {
      if (uVar7 == 0x10) {
        uVar3 = puVar6[1];
        *__dest = *puVar6;
        __dest[1] = uVar3;
      }
      lVar8 = uVar7 + (long)__dest;
    }
    else {
      memmove(__dest,puVar6,uVar7);
      lVar8 = uVar7 + *(long *)(lVar1 + 0x38);
    }
  }
  *(long *)(lVar1 + 0x40) = lVar8;
  return;
}



/* glslang::TParseContext::makeSpirvInstruction(glslang::TSourceLoc const&,
   std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> > const&,
   std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> > const&)
    */

TSpirvInstruction * __thiscall
glslang::TParseContext::makeSpirvInstruction
          (TParseContext *this,TSourceLoc *param_1,basic_string *param_2,basic_string *param_3)

{
  short *psVar1;
  ulong uVar2;
  TSpirvInstruction *this_00;
  
  uVar2 = glslang::GetThreadPoolAllocator();
  this_00 = (TSpirvInstruction *)glslang::TPoolAllocator::allocate(uVar2);
  TSpirvInstruction::TSpirvInstruction(this_00);
  psVar1 = *(short **)(param_2 + 8);
  if (((*(long *)(param_2 + 0x10) == 3) && (*psVar1 == 0x6573)) && ((char)psVar1[1] == 't')) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)this_00,
               param_3);
  }
  else {
    (**(code **)(*(long *)this + 0x158))
              (this,param_1,"unknown SPIR-V instruction qualifier",psVar1,&_LC23);
  }
  return this_00;
}



/* glslang::TParseContext::makeSpirvInstruction(glslang::TSourceLoc const&,
   std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> > const&,
   int) */

TSpirvInstruction * __thiscall
glslang::TParseContext::makeSpirvInstruction
          (TParseContext *this,TSourceLoc *param_1,basic_string *param_2,int param_3)

{
  ulong uVar1;
  TSpirvInstruction *this_00;
  
  uVar1 = glslang::GetThreadPoolAllocator();
  this_00 = (TSpirvInstruction *)glslang::TPoolAllocator::allocate(uVar1);
  TSpirvInstruction::TSpirvInstruction(this_00);
  if ((*(long *)(param_2 + 0x10) == 2) && (**(short **)(param_2 + 8) == 0x6469)) {
    *(int *)(this_00 + 0x28) = param_3;
    return this_00;
  }
  (**(code **)(*(long *)this + 0x158))
            (this,param_1,"unknown SPIR-V instruction qualifier",*(short **)(param_2 + 8),&_LC23);
  return this_00;
}



/* std::_Rb_tree_node<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >* std::_Rb_tree<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >,
   std::_Identity<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   glslang::pool_allocator<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >::_M_copy<false,
   std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::_Identity<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, glslang::pool_allocator<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >
   >::_Reuse_or_alloc_node>(std::_Rb_tree_node<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >*, std::_Rb_tree_node_base*,
   std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::_Identity<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, glslang::pool_allocator<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >::_Reuse_or_alloc_node&) [clone .isra.0] */

_Rb_tree_node *
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
::
_M_copy<false,std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>::_Reuse_or_alloc_node>
          (_Rb_tree_node *param_1,_Rb_tree_node_base *param_2,_Reuse_or_alloc_node *param_3)

{
  undefined4 uVar1;
  long lVar2;
  _Rb_tree_node *p_Var3;
  _Rb_tree_node *p_Var4;
  ulong uVar5;
  _Rb_tree_node_base *p_Var6;
  _Rb_tree_node_base *__dest;
  long lVar7;
  _Rb_tree_node_base *p_Var8;
  undefined4 *puVar9;
  ulong __n;
  _Rb_tree_node_base *local_40;
  
  p_Var3 = _Reuse_or_alloc_node::operator()(param_3,(basic_string *)(param_1 + 0x20));
  uVar1 = *(undefined4 *)param_1;
  *(undefined8 *)(p_Var3 + 0x10) = 0;
  *(undefined8 *)(p_Var3 + 0x18) = 0;
  *(_Rb_tree_node_base **)(p_Var3 + 8) = param_2;
  p_Var4 = *(_Rb_tree_node **)(param_1 + 0x18);
  *(undefined4 *)p_Var3 = uVar1;
  if (p_Var4 != (_Rb_tree_node *)0x0) {
    p_Var4 = _M_copy<false,std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>::_Reuse_or_alloc_node>
                       (p_Var4,(_Rb_tree_node_base *)p_Var3,param_3);
    *(_Rb_tree_node **)(p_Var3 + 0x18) = p_Var4;
  }
  puVar9 = *(undefined4 **)(param_1 + 0x10);
  if (puVar9 == (undefined4 *)0x0) {
    return p_Var3;
  }
  p_Var6 = *(_Rb_tree_node_base **)(param_3 + 8);
  p_Var8 = (_Rb_tree_node_base *)p_Var3;
  if (p_Var6 == (_Rb_tree_node_base *)0x0) goto LAB_00103a42;
LAB_00103984:
  lVar2 = *(long *)(p_Var6 + 8);
  *(long *)(param_3 + 8) = lVar2;
  if (lVar2 == 0) {
    *(undefined8 *)param_3 = 0;
  }
  else if (p_Var6 == *(_Rb_tree_node_base **)(lVar2 + 0x18)) {
    lVar7 = *(long *)(lVar2 + 0x10);
    *(undefined8 *)(lVar2 + 0x18) = 0;
    if (lVar7 != 0) {
      lVar2 = *(long *)(lVar7 + 0x18);
      *(long *)(param_3 + 8) = lVar7;
      if (lVar2 != 0) {
        do {
          lVar7 = lVar2;
          lVar2 = *(long *)(lVar7 + 0x18);
        } while (*(long *)(lVar7 + 0x18) != 0);
        *(long *)(param_3 + 8) = lVar7;
      }
      if (*(long *)(lVar7 + 0x10) != 0) {
        *(long *)(param_3 + 8) = *(long *)(lVar7 + 0x10);
      }
    }
  }
  else {
    *(undefined8 *)(lVar2 + 0x10) = 0;
  }
  __dest = p_Var6 + 0x38;
  uVar5 = glslang::GetThreadPoolAllocator();
  __n = *(ulong *)(puVar9 + 0xc);
  *(ulong *)(p_Var6 + 0x20) = uVar5;
  *(_Rb_tree_node_base **)(p_Var6 + 0x28) = __dest;
  local_40 = *(_Rb_tree_node_base **)(puVar9 + 10);
  p_Var4 = (_Rb_tree_node *)p_Var8;
  if (0xf < __n) {
    if (-1 < (long)__n) goto LAB_00103aaa;
LAB_00103a83:
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::_M_create");
  }
  do {
    p_Var8 = p_Var6;
    if (__n == 1) {
      p_Var6[0x38] = *local_40;
    }
    else if (__n != 0) goto LAB_00103ac7;
    while( true ) {
      *(ulong *)(p_Var8 + 0x30) = __n;
      __dest[__n] = (_Rb_tree_node_base)0x0;
      uVar1 = *puVar9;
      *(undefined8 *)(p_Var8 + 0x10) = 0;
      *(undefined8 *)(p_Var8 + 0x18) = 0;
      *(undefined4 *)p_Var8 = uVar1;
      *(_Rb_tree_node_base **)(p_Var4 + 0x10) = p_Var8;
      *(_Rb_tree_node **)(p_Var8 + 8) = p_Var4;
      if (*(_Rb_tree_node **)(puVar9 + 6) != (_Rb_tree_node *)0x0) {
        p_Var4 = _M_copy<false,std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>::_Reuse_or_alloc_node>
                           (*(_Rb_tree_node **)(puVar9 + 6),p_Var8,param_3);
        *(_Rb_tree_node **)(p_Var8 + 0x18) = p_Var4;
      }
      puVar9 = *(undefined4 **)(puVar9 + 4);
      if (puVar9 == (undefined4 *)0x0) {
        return p_Var3;
      }
      p_Var6 = *(_Rb_tree_node_base **)(param_3 + 8);
      if (p_Var6 != (_Rb_tree_node_base *)0x0) goto LAB_00103984;
LAB_00103a42:
      p_Var6 = (_Rb_tree_node_base *)glslang::TPoolAllocator::allocate(**(ulong **)(param_3 + 0x10))
      ;
      uVar5 = glslang::GetThreadPoolAllocator();
      __n = *(ulong *)(puVar9 + 0xc);
      __dest = p_Var6 + 0x38;
      *(_Rb_tree_node_base **)(p_Var6 + 0x28) = __dest;
      local_40 = *(_Rb_tree_node_base **)(puVar9 + 10);
      *(ulong *)(p_Var6 + 0x20) = uVar5;
      p_Var4 = (_Rb_tree_node *)p_Var8;
      if (__n < 0x10) break;
      if ((long)__n < 0) goto LAB_00103a83;
LAB_00103aaa:
      __dest = (_Rb_tree_node_base *)glslang::TPoolAllocator::allocate(uVar5);
      *(ulong *)(p_Var6 + 0x38) = __n;
      *(_Rb_tree_node_base **)(p_Var6 + 0x28) = __dest;
      p_Var4 = (_Rb_tree_node *)p_Var8;
LAB_00103ac7:
      memcpy(__dest,local_40,__n);
      __dest = *(_Rb_tree_node_base **)(p_Var6 + 0x28);
      p_Var8 = p_Var6;
    }
  } while( true );
}



/* glslang::TParseContext::mergeSpirvRequirements(glslang::TSourceLoc const&,
   glslang::TSpirvRequirement*, glslang::TSpirvRequirement*) */

TSpirvRequirement * __thiscall
glslang::TParseContext::mergeSpirvRequirements
          (TParseContext *this,TSourceLoc *param_1,TSpirvRequirement *param_2,
          TSpirvRequirement *param_3)

{
  _Rb_tree_node_base *p_Var1;
  TSpirvRequirement *pTVar2;
  long lVar3;
  _Rb_tree_node *p_Var4;
  undefined8 uVar5;
  _Rb_tree_node *p_Var6;
  _Rb_tree_node *p_Var7;
  long in_FS_OFFSET;
  _Rb_tree_node *local_48;
  long lStack_40;
  TSpirvRequirement *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_3 + 0x30) != 0) {
    if (*(long *)(param_2 + 0x30) == 0) {
      if (param_3 != param_2) {
        local_48 = *(_Rb_tree_node **)(param_2 + 0x18);
        lStack_40 = *(long *)(param_2 + 0x28);
        if (local_48 == (_Rb_tree_node *)0x0) {
          lStack_40 = 0;
        }
        else {
          lVar3 = *(long *)(lStack_40 + 0x10);
          *(undefined8 *)(local_48 + 8) = 0;
          if (lVar3 != 0) {
            lStack_40 = lVar3;
          }
        }
        *(undefined8 *)(param_2 + 0x18) = 0;
        p_Var4 = *(_Rb_tree_node **)(param_3 + 0x18);
        p_Var1 = (_Rb_tree_node_base *)(param_2 + 0x10);
        *(_Rb_tree_node_base **)(param_2 + 0x20) = p_Var1;
        *(_Rb_tree_node_base **)(param_2 + 0x28) = p_Var1;
        *(undefined8 *)(param_2 + 0x30) = 0;
        local_38 = param_2;
        if (p_Var4 != (_Rb_tree_node *)0x0) {
          p_Var6 = std::
                   _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
                   ::
                   _M_copy<false,std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>::_Reuse_or_alloc_node>
                             (p_Var4,p_Var1,(_Reuse_or_alloc_node *)&local_48);
          p_Var4 = p_Var6;
          do {
            p_Var7 = p_Var4;
            p_Var4 = *(_Rb_tree_node **)(p_Var7 + 0x10);
          } while (p_Var4 != (_Rb_tree_node *)0x0);
          *(_Rb_tree_node **)(param_2 + 0x20) = p_Var7;
          p_Var4 = p_Var6;
          do {
            p_Var7 = p_Var4;
            p_Var4 = *(_Rb_tree_node **)(p_Var7 + 0x18);
          } while (p_Var4 != (_Rb_tree_node *)0x0);
          uVar5 = *(undefined8 *)(param_3 + 0x30);
          *(_Rb_tree_node **)(param_2 + 0x28) = p_Var7;
          *(_Rb_tree_node **)(param_2 + 0x18) = p_Var6;
          *(undefined8 *)(param_2 + 0x30) = uVar5;
        }
        std::
        _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
        ::_M_erase(local_48);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x158))
                (this,param_1,"too many SPIR-V requirements","extensions",&_LC23);
    }
  }
  if (*(long *)(param_3 + 0x68) != 0) {
    if (*(long *)(param_2 + 0x68) == 0) {
      pTVar2 = param_2 + 0x38;
      if (pTVar2 != param_3 + 0x38) {
        local_48 = *(_Rb_tree_node **)(param_2 + 0x50);
        lStack_40 = *(long *)(param_2 + 0x60);
        if (local_48 == (_Rb_tree_node *)0x0) {
          lStack_40 = 0;
        }
        else {
          lVar3 = *(long *)(lStack_40 + 0x10);
          *(undefined8 *)(local_48 + 8) = 0;
          if (lVar3 != 0) {
            lStack_40 = lVar3;
          }
        }
        *(undefined8 *)(param_2 + 0x50) = 0;
        p_Var4 = *(_Rb_tree_node **)(param_3 + 0x50);
        p_Var1 = (_Rb_tree_node_base *)(param_2 + 0x48);
        *(_Rb_tree_node_base **)(param_2 + 0x58) = p_Var1;
        *(_Rb_tree_node_base **)(param_2 + 0x60) = p_Var1;
        *(undefined8 *)(param_2 + 0x68) = 0;
        local_38 = pTVar2;
        if (p_Var4 != (_Rb_tree_node *)0x0) {
          p_Var6 = std::
                   _Rb_tree<int,int,std::_Identity<int>,std::less<int>,glslang::pool_allocator<int>>
                   ::
                   _M_copy<false,std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,glslang::pool_allocator<int>>::_Reuse_or_alloc_node>
                             (p_Var4,p_Var1,(_Reuse_or_alloc_node *)&local_48);
          p_Var4 = p_Var6;
          do {
            p_Var7 = p_Var4;
            p_Var4 = *(_Rb_tree_node **)(p_Var7 + 0x10);
          } while (p_Var4 != (_Rb_tree_node *)0x0);
          *(_Rb_tree_node **)(param_2 + 0x58) = p_Var7;
          p_Var4 = p_Var6;
          do {
            p_Var7 = p_Var4;
            p_Var4 = *(_Rb_tree_node **)(p_Var7 + 0x18);
          } while (p_Var4 != (_Rb_tree_node *)0x0);
          uVar5 = *(undefined8 *)(param_3 + 0x68);
          *(_Rb_tree_node **)(param_2 + 0x60) = p_Var7;
          *(_Rb_tree_node **)(param_2 + 0x50) = p_Var6;
          *(undefined8 *)(param_2 + 0x68) = uVar5;
        }
        std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,glslang::pool_allocator<int>>::
        _M_erase(local_48);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x158))
                (this,param_1,"too many SPIR-V requirements","capabilities",&_LC23);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TType::~TType() */

void __thiscall glslang::TType::~TType(TType *this)

{
  return;
}



/* glslang::TType::hideMember() */

void __thiscall glslang::TType::hideMember(TType *this)

{
  *(ushort *)(this + 8) = *(ushort *)(this + 8) & 0xf000 | 0x100;
  return;
}



/* glslang::TType::hiddenMember() const */

bool __thiscall glslang::TType::hiddenMember(TType *this)

{
  return this[8] == (TType)0x0;
}



/* glslang::TType::getTypeName[abi:cxx11]() const */

undefined8 __thiscall glslang::TType::getTypeName_abi_cxx11_(TType *this)

{
  return *(undefined8 *)(this + 0x78);
}



/* glslang::TType::getFieldName[abi:cxx11]() const */

undefined8 __thiscall glslang::TType::getFieldName_abi_cxx11_(TType *this)

{
  return *(undefined8 *)(this + 0x70);
}



/* glslang::TType::getBasicType() const */

TType __thiscall glslang::TType::getBasicType(TType *this)

{
  return this[8];
}



/* glslang::TType::getSampler() const */

TType * __thiscall glslang::TType::getSampler(TType *this)

{
  return this + 0x80;
}



/* glslang::TType::getSampler() */

TType * __thiscall glslang::TType::getSampler(TType *this)

{
  return this + 0x80;
}



/* glslang::TType::getQualifier() */

TType * __thiscall glslang::TType::getQualifier(TType *this)

{
  return this + 0x10;
}



/* glslang::TType::getQualifier() const */

TType * __thiscall glslang::TType::getQualifier(TType *this)

{
  return this + 0x10;
}



/* glslang::TType::getVectorSize() const */

byte __thiscall glslang::TType::getVectorSize(TType *this)

{
  return (byte)this[9] & 0xf;
}



/* glslang::TType::getMatrixCols() const */

byte __thiscall glslang::TType::getMatrixCols(TType *this)

{
  return (byte)this[9] >> 4;
}



/* glslang::TType::getMatrixRows() const */

byte __thiscall glslang::TType::getMatrixRows(TType *this)

{
  return (byte)this[10] & 0xf;
}



/* glslang::TType::getOuterArraySize() const */

undefined4 __thiscall glslang::TType::getOuterArraySize(TType *this)

{
  return **(undefined4 **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
}



/* glslang::TType::getOuterArrayNode() const */

undefined8 __thiscall glslang::TType::getOuterArrayNode(TType *this)

{
  return *(undefined8 *)(*(long *)(*(long *)(*(long *)(this + 0x60) + 8) + 8) + 8);
}



/* glslang::TType::getCumulativeArraySize() const */

int __thiscall glslang::TType::getCumulativeArraySize(TType *this)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  
  lVar2 = *(long *)(*(long *)(this + 0x60) + 8);
  if (lVar2 != 0) {
    piVar3 = *(int **)(lVar2 + 8);
    iVar4 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar3 >> 4);
    if (0 < iVar4) {
      piVar1 = piVar3 + (ulong)(iVar4 - 1) * 4 + 4;
      iVar4 = 1;
      do {
        iVar4 = iVar4 * *piVar3;
        piVar3 = piVar3 + 4;
      } while (piVar3 != piVar1);
      return iVar4;
    }
  }
  return 1;
}



/* glslang::TType::getImplicitArraySize() const */

int __thiscall glslang::TType::getImplicitArraySize(TType *this)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(this + 0x60) + 0x10);
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return iVar1;
}



/* glslang::TType::getArraySizes() const */

undefined8 __thiscall glslang::TType::getArraySizes(TType *this)

{
  return *(undefined8 *)(this + 0x60);
}



/* glslang::TType::getArraySizes() */

undefined8 __thiscall glslang::TType::getArraySizes(TType *this)

{
  return *(undefined8 *)(this + 0x60);
}



/* glslang::TType::getReferentType() const */

undefined8 __thiscall glslang::TType::getReferentType(TType *this)

{
  return *(undefined8 *)(this + 0x68);
}



/* glslang::TType::getTypeParameters() const */

undefined8 __thiscall glslang::TType::getTypeParameters(TType *this)

{
  return *(undefined8 *)(this + 0x88);
}



/* glslang::TType::getTypeParameters() */

undefined8 __thiscall glslang::TType::getTypeParameters(TType *this)

{
  return *(undefined8 *)(this + 0x88);
}



/* glslang::TType::isVector() const */

byte __thiscall glslang::TType::isVector(TType *this)

{
  if (1 < ((byte)this[9] & 0xf)) {
    return 1;
  }
  return (byte)this[10] >> 4 & 1;
}



/* glslang::TType::isMatrix() const */

bool __thiscall glslang::TType::isMatrix(TType *this)

{
  return 0xf < (byte)this[9];
}



/* glslang::TType::isArray() const */

bool __thiscall glslang::TType::isArray(TType *this)

{
  return *(long *)(this + 0x60) != 0;
}



/* glslang::TType::isArrayVariablyIndexed() const */

undefined1 __thiscall glslang::TType::isArrayVariablyIndexed(TType *this)

{
  return *(undefined1 *)(*(long *)(this + 0x60) + 0x15);
}



/* glslang::TType::setArrayVariablyIndexed() */

void __thiscall glslang::TType::setArrayVariablyIndexed(TType *this)

{
  *(undefined1 *)(*(long *)(this + 0x60) + 0x15) = 1;
  return;
}



/* glslang::TType::updateImplicitArraySize(int) */

void __thiscall glslang::TType::updateImplicitArraySize(TType *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(this + 0x60) + 0x10);
  if (iVar1 < param_1) {
    iVar1 = param_1;
  }
  *(int *)(*(long *)(this + 0x60) + 0x10) = iVar1;
  return;
}



/* glslang::TType::setImplicitlySized(bool) */

void __thiscall glslang::TType::setImplicitlySized(TType *this,bool param_1)

{
  *(bool *)(*(long *)(this + 0x60) + 0x14) = param_1;
  return;
}



/* glslang::TType::isStruct() const */

undefined4 __thiscall glslang::TType::isStruct(TType *this)

{
  return CONCAT31((int3)((byte)this[8] - 0xf >> 8),(byte)((byte)this[8] - 0xf) < 2);
}



/* glslang::TType::isFloatingDomain() const */

undefined4 __thiscall glslang::TType::isFloatingDomain(TType *this)

{
  return CONCAT31((int3)((byte)this[8] - 1 >> 8),(byte)((byte)this[8] - 1) < 3);
}



/* glslang::TType::isIntegerDomain() const */

bool __thiscall glslang::TType::isIntegerDomain(TType *this)

{
  TType TVar1;
  
  TVar1 = this[8];
  if ((byte)TVar1 < 0xc) {
    return 3 < (byte)TVar1;
  }
  return TVar1 == (TType)0xd;
}



/* glslang::TType::isOpaque() const */

undefined8 __thiscall glslang::TType::isOpaque(TType *this)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((byte)this[8] < 0x15) {
    uVar1 = CONCAT71(0x1a60,(0x1a6000UL >> ((ulong)(byte)this[8] & 0x3f) & 1) != 0);
  }
  return uVar1;
}



/* glslang::TType::isParameterized() const */

bool __thiscall glslang::TType::isParameterized(TType *this)

{
  return *(long *)(this + 0x88) != 0;
}



/* glslang::TIntermTyped::getType() const */

TIntermTyped * __thiscall glslang::TIntermTyped::getType(TIntermTyped *this)

{
  return this + 0x20;
}



/* glslang::TIntermTyped::getBasicType() const */

TIntermTyped __thiscall glslang::TIntermTyped::getBasicType(TIntermTyped *this)

{
  return this[0x28];
}



/* glslang::TIntermSymbol::getId() const */

undefined8 __thiscall glslang::TIntermSymbol::getId(TIntermSymbol *this)

{
  return *(undefined8 *)(this + 0xb8);
}



/* glslang::TIntermSymbol::getName[abi:cxx11]() const */

TIntermSymbol * __thiscall glslang::TIntermSymbol::getName_abi_cxx11_(TIntermSymbol *this)

{
  return this + 200;
}



/* glslang::TIntermAggregate::getSequence() const */

TIntermAggregate * __thiscall glslang::TIntermAggregate::getSequence(TIntermAggregate *this)

{
  return this + 0xc0;
}



/* glslang::TType::isBuiltIn() const */

bool __thiscall glslang::TType::isBuiltIn(TType *this)

{
  long lVar1;
  
  if (*(code **)(*(long *)this + 0x58) == getQualifier) {
    return 0x7f < *(ushort *)(this + 0x18);
  }
  lVar1 = (**(code **)(*(long *)this + 0x58))();
  return 0x7f < *(ushort *)(lVar1 + 8);
}



/* glslang::TType::isAttachmentEXT() const */

bool __thiscall glslang::TType::isAttachmentEXT(TType *this)

{
  long lVar1;
  
  if (this[8] != (TType)0xe) {
    return false;
  }
  if (*(code **)(*(long *)this + 0x40) == getSampler) {
    return this[0x81] == (TType)0x8;
  }
  lVar1 = (**(code **)(*(long *)this + 0x40))();
  return *(char *)(lVar1 + 1) == '\b';
}



/* glslang::TType::isImage() const */

undefined4 __thiscall glslang::TType::isImage(TType *this)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (this[8] == (TType)0xe) {
    if (*(code **)(*(long *)this + 0x40) != getSampler) {
      lVar3 = (**(code **)(*(long *)this + 0x40))();
      uVar2 = 0;
      if ((*(byte *)(lVar3 + 2) & 8) != 0) {
        iVar1 = *(byte *)(lVar3 + 1) - 7;
        uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1 < (byte)iVar1);
      }
      return uVar2;
    }
    if (((byte)this[0x82] & 8) != 0) {
      return CONCAT31((int3)((byte)this[0x81] - 7 >> 8),1 < (byte)((byte)this[0x81] - 7));
    }
  }
  return 0;
}



/* glslang::TType::isSubpass() const */

bool __thiscall glslang::TType::isSubpass(TType *this)

{
  long lVar1;
  
  if (this[8] != (TType)0xe) {
    return false;
  }
  if (*(code **)(*(long *)this + 0x40) == getSampler) {
    return this[0x81] == (TType)0x7;
  }
  lVar1 = (**(code **)(*(long *)this + 0x40))();
  return *(char *)(lVar1 + 1) == '\a';
}



/* glslang::TType::isTexture() const */

byte __thiscall glslang::TType::isTexture(TType *this)

{
  byte bVar1;
  long lVar2;
  
  if (this[8] == (TType)0xe) {
    if (*(code **)(*(long *)this + 0x40) != getSampler) {
      lVar2 = (**(code **)(*(long *)this + 0x40))();
      if ((*(byte *)(lVar2 + 2) & 0x20) == 0) {
        bVar1 = *(byte *)(lVar2 + 2) >> 3 & 1 ^ 1;
      }
      else {
        bVar1 = 0;
      }
      return bVar1;
    }
    if (((byte)this[0x82] & 0x20) == 0) {
      return (byte)this[0x82] >> 3 & 1 ^ 1;
    }
  }
  return 0;
}



/* glslang::TType::isImplicitlySizedArray() const */

undefined1 __thiscall glslang::TType::isImplicitlySizedArray(TType *this)

{
  undefined1 uVar1;
  char cVar2;
  
  if (*(code **)(*(long *)this + 0xe8) == isArray) {
    if (*(long *)(this + 0x60) == 0) {
      return 0;
    }
    uVar1 = *(undefined1 *)(*(long *)(this + 0x60) + 0x14);
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0xe8))();
    if (cVar2 == '\0') {
      return 0;
    }
    uVar1 = *(undefined1 *)(*(long *)(this + 0x60) + 0x14);
  }
  return uVar1;
}



/* glslang::TType::isSizedArray() const */

undefined4 __thiscall glslang::TType::isSizedArray(TType *this)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  if (*(code **)(*(long *)this + 0xe8) == isArray) {
    if (*(long *)(this + 0x60) == 0) {
      return 0;
    }
    iVar1 = **(int **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0xe8))();
    if (cVar3 == '\0') {
      return 0;
    }
    iVar1 = **(int **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
  }
  return uVar2;
}



/* glslang::TType::isUnsizedArray() const */

undefined4 __thiscall glslang::TType::isUnsizedArray(TType *this)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  if (*(code **)(*(long *)this + 0xe8) == isArray) {
    if (*(long *)(this + 0x60) == 0) {
      return 0;
    }
    iVar1 = **(int **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0xe8))();
    if (cVar3 == '\0') {
      return 0;
    }
    iVar1 = **(int **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
  }
  return uVar2;
}



/* glslang::TType::isUnusableName() const */

bool __thiscall glslang::TType::isUnusableName(TType *this)

{
  char cVar1;
  
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if (1 < (byte)((char)this[8] - 0xfU)) {
      return false;
    }
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x128))();
    if (cVar1 == '\0') {
      return false;
    }
  }
  return *(long *)(this + 0x68) == 0;
}



/* glslang::TType::isScalarOrVector() const */

uint __thiscall glslang::TType::isScalarOrVector(TType *this)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)this;
  if (*(code **)(lVar3 + 0xe0) == isMatrix) {
    if (0xf < (byte)this[9]) {
      return 0;
    }
  }
  else {
    cVar1 = (**(code **)(lVar3 + 0xe0))();
    if (cVar1 != '\0') {
      return 0;
    }
    lVar3 = *(long *)this;
  }
  if (*(code **)(lVar3 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
      return 0;
    }
  }
  else {
    cVar1 = (**(code **)(lVar3 + 0x128))(this);
    if (cVar1 != '\0') {
      return 0;
    }
    lVar3 = *(long *)this;
  }
  if (*(code **)(lVar3 + 0xe8) == isArray) {
    uVar2 = (uint)CONCAT71(0x1040,*(long *)(this + 0x60) != 0);
  }
  else {
    uVar2 = (**(code **)(lVar3 + 0xe8))(this);
  }
  return uVar2 ^ 1;
}



/* glslang::TType::isScalar() const */

uint __thiscall glslang::TType::isScalar(TType *this)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  
  if (*(code **)(*(long *)this + 0xd8) == isVector) {
    if (1 < ((byte)this[9] & 0xf)) {
      return 0;
    }
    bVar1 = (byte)this[10] >> 4 & 1;
  }
  else {
    bVar1 = (**(code **)(*(long *)this + 0xd8))();
  }
  if (bVar1 == 0) {
    lVar4 = *(long *)this;
    if (*(code **)(lVar4 + 0xe0) == isMatrix) {
      if (0xf < (byte)this[9]) {
        return 0;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0xe0))(this);
      if (cVar2 != '\0') {
        return 0;
      }
      lVar4 = *(long *)this;
    }
    if (*(code **)(lVar4 + 0x128) == isStruct) {
      if (1 < (byte)((char)this[8] - 0xfU)) {
LAB_001045c1:
        if (*(code **)(lVar4 + 0xe8) == isArray) {
          uVar3 = (uint)CONCAT71(0x1040,*(long *)(this + 0x60) != 0);
        }
        else {
          uVar3 = (**(code **)(lVar4 + 0xe8))(this);
        }
        return uVar3 ^ 1;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x128))(this);
      if (cVar2 == '\0') {
        lVar4 = *(long *)this;
        goto LAB_001045c1;
      }
    }
  }
  return 0;
}



/* glslang::TType::isBindlessTexture() const */

TType __thiscall glslang::TType::isBindlessTexture(TType *this)

{
  code *pcVar1;
  char cVar2;
  TType *pTVar3;
  
  pcVar1 = *(code **)(*(long *)this + 0x168);
  if (pcVar1 == isTexture) {
    if (this[8] == (TType)0xe) {
      pcVar1 = *(code **)(*(long *)this + 0x40);
      if (pcVar1 == getSampler) {
        pTVar3 = this + 0x80;
      }
      else {
        pTVar3 = (TType *)(*pcVar1)();
      }
      if ((((byte)pTVar3[2] & 0x20) == 0) && (((byte)pTVar3[2] & 8) == 0)) {
        return this[0x58];
      }
    }
  }
  else {
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return this[0x58];
    }
  }
  return (TType)0x0;
}



/* glslang::TType::isBindlessImage() const */

TType __thiscall glslang::TType::isBindlessImage(TType *this)

{
  code *pcVar1;
  char cVar2;
  TType *pTVar3;
  
  pcVar1 = *(code **)(*(long *)this + 0x158);
  if (pcVar1 == isImage) {
    if (this[8] == (TType)0xe) {
      pcVar1 = *(code **)(*(long *)this + 0x40);
      if (pcVar1 == getSampler) {
        pTVar3 = this + 0x80;
      }
      else {
        pTVar3 = (TType *)(*pcVar1)();
      }
      if ((((byte)pTVar3[2] & 8) != 0) && (1 < (byte)((char)pTVar3[1] - 7U))) {
        return this[0x59];
      }
    }
  }
  else {
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return this[0x59];
    }
  }
  return (TType)0x0;
}



/* glslang::TType::isScalarOrVec1() const */

byte __thiscall glslang::TType::isScalarOrVec1(TType *this)

{
  TType TVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  
  pcVar2 = *(code **)(*(long *)this + 0xc0);
  if (pcVar2 == isScalar) {
    pcVar2 = *(code **)(*(long *)this + 0xd8);
    if (pcVar2 == isVector) {
      TVar1 = this[10];
      bVar3 = (byte)TVar1 >> 4 & 1;
      if (1 < ((byte)this[9] & 0xf)) goto LAB_00104783;
    }
    else {
      bVar3 = (*pcVar2)();
    }
    if (bVar3 == 0) {
      lVar5 = *(long *)this;
      if (*(code **)(lVar5 + 0xe0) == isMatrix) {
        if ((byte)this[9] < 0x10) {
LAB_001047ac:
          if (*(code **)(lVar5 + 0x128) == isStruct) {
            if (1 < (byte)((char)this[8] - 0xfU)) {
LAB_001047cb:
              if (*(code **)(lVar5 + 0xe8) == isArray) {
                if (*(long *)(this + 0x60) == 0) {
                  return 1;
                }
              }
              else {
                cVar4 = (**(code **)(lVar5 + 0xe8))(this);
                if (cVar4 == '\0') {
                  return 1;
                }
              }
            }
          }
          else {
            cVar4 = (**(code **)(lVar5 + 0x128))(this);
            if (cVar4 == '\0') {
              lVar5 = *(long *)this;
              goto LAB_001047cb;
            }
          }
        }
      }
      else {
        cVar4 = (**(code **)(lVar5 + 0xe0))(this);
        if (cVar4 == '\0') {
          lVar5 = *(long *)this;
          goto LAB_001047ac;
        }
      }
    }
  }
  else {
    cVar4 = (*pcVar2)();
    if (cVar4 != '\0') {
      return 1;
    }
  }
  TVar1 = this[10];
LAB_00104783:
  return (byte)TVar1 >> 4 & 1;
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TType::setFieldName(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

void __thiscall glslang::TType::setFieldName(TType *this,basic_string *param_1)

{
  char *__s;
  ulong uVar1;
  ulong *puVar2;
  size_t __n;
  ulong *__dest;
  
  __s = *(char **)(param_1 + 8);
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2 = (ulong *)glslang::TPoolAllocator::allocate(uVar1);
  uVar1 = glslang::GetThreadPoolAllocator();
  __dest = puVar2 + 3;
  *puVar2 = uVar1;
  puVar2[1] = (ulong)__dest;
  if (__s == (char *)0x0) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = strlen(__s);
  if (__n < 0x10) {
    if (__n == 1) {
      *(char *)(puVar2 + 3) = *__s;
      goto LAB_001048f2;
    }
    if (__n == 0) goto LAB_001048f2;
  }
  else {
    __dest = (ulong *)glslang::TPoolAllocator::allocate(uVar1);
    puVar2[3] = __n;
    puVar2[1] = (ulong)__dest;
  }
  memcpy(__dest,__s,__n);
  __dest = (ulong *)puVar2[1];
LAB_001048f2:
  puVar2[2] = __n;
  *(undefined1 *)((long)__dest + __n) = 0;
  *(ulong **)(this + 0x70) = puVar2;
  return;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = (long)param_2 - (long)param_1;
  if (0 < lVar5 >> 7) {
    plVar6 = param_1 + (lVar5 >> 7) * 0x10;
    do {
      plVar2 = (long *)*param_1;
      bVar1 = *(byte *)(plVar2 + 1);
      if (bVar1 < 0xd) {
        return param_1;
      }
      if (bVar1 == 0x12) {
        return param_1;
      }
      if (*(code **)(*plVar2 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(bVar1 - 0xf) < 2) {
LAB_00104aed:
          lVar5 = *(long *)(plVar2[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar2[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
            return param_1;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (cVar3 != '\0') goto LAB_00104aed;
      }
      plVar2 = (long *)param_1[4];
      bVar1 = *(byte *)(plVar2 + 1);
      if ((bVar1 < 0xd) || (bVar1 == 0x12)) goto LAB_001049ef;
      if (*(code **)(*plVar2 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(bVar1 - 0xf) < 2) {
LAB_00104b2d:
          lVar5 = *(long *)(plVar2[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar2[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_001049ef:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (cVar3 != '\0') goto LAB_00104b2d;
      }
      plVar2 = (long *)param_1[8];
      bVar1 = *(byte *)(plVar2 + 1);
      if ((bVar1 < 0xd) || (bVar1 == 0x12)) goto LAB_00104a2f;
      if (*(code **)(*plVar2 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(bVar1 - 0xf) < 2) {
LAB_00104b5d:
          lVar5 = *(long *)(plVar2[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar2[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_00104a2f:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (cVar3 != '\0') goto LAB_00104b5d;
      }
      plVar2 = (long *)param_1[0xc];
      bVar1 = *(byte *)(plVar2 + 1);
      if ((bVar1 < 0xd) || (bVar1 == 0x12)) goto LAB_00104a6f;
      if (*(code **)(*plVar2 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(bVar1 - 0xf) < 2) {
LAB_00104b8d:
          lVar5 = *(long *)(plVar2[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar2[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_00104a6f:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (cVar3 != '\0') goto LAB_00104b8d;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar6);
    lVar5 = (long)param_2 - (long)param_1;
  }
  lVar5 = lVar5 >> 5;
  if (lVar5 != 2) {
    if (lVar5 != 3) {
      if (lVar5 != 1) {
        return param_2;
      }
      goto LAB_00104c29;
    }
    plVar6 = (long *)*param_1;
    bVar1 = *(byte *)(plVar6 + 1);
    if (bVar1 < 0xd) {
      return param_1;
    }
    if (bVar1 == 0x12) {
      return param_1;
    }
    if (*(code **)(*plVar6 + 0x128) == glslang::TType::isStruct) {
      if ((byte)(bVar1 - 0xf) < 2) {
LAB_00104ccb:
        lVar5 = *(long *)(plVar6[0xd] + 0x10);
        lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar6[0xd] + 8),lVar5);
        if (lVar5 != lVar4) {
          return param_1;
        }
      }
    }
    else {
      cVar3 = (**(code **)(*plVar6 + 0x128))(plVar6);
      if (cVar3 != '\0') goto LAB_00104ccb;
    }
    param_1 = param_1 + 4;
  }
  plVar6 = (long *)*param_1;
  bVar1 = *(byte *)(plVar6 + 1);
  if (bVar1 < 0xd) {
    return param_1;
  }
  if (bVar1 == 0x12) {
    return param_1;
  }
  if (*(code **)(*plVar6 + 0x128) == glslang::TType::isStruct) {
    if ((byte)(bVar1 - 0xf) < 2) {
LAB_00104c8d:
      lVar5 = *(long *)(plVar6[0xd] + 0x10);
      lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(plVar6[0xd] + 8),lVar5);
      if (lVar5 != lVar4) {
        return param_1;
      }
    }
  }
  else {
    cVar3 = (**(code **)(*plVar6 + 0x128))(plVar6);
    if (cVar3 != '\0') goto LAB_00104c8d;
  }
  param_1 = param_1 + 4;
LAB_00104c29:
  plVar6 = (long *)*param_1;
  bVar1 = *(byte *)(plVar6 + 1);
  if (bVar1 < 0xd) {
    return param_1;
  }
  if (bVar1 == 0x12) {
    return param_1;
  }
  if (*(code **)(*plVar6 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)(bVar1 - 0xf)) {
      return param_2;
    }
  }
  else {
    cVar3 = (**(code **)(*plVar6 + 0x128))(plVar6);
    if (cVar3 == '\0') {
      return param_2;
    }
  }
  lVar5 = *(long *)(plVar6[0xd] + 0x10);
  lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar6[0xd] + 8),lVar5);
  if (lVar5 == lVar4) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsNonOpaque() const */

ulong __thiscall glslang::TType::containsNonOpaque(TType *this)

{
  TType TVar1;
  long lVar2;
  char cVar3;
  undefined1 auVar4 [16];
  
  TVar1 = this[8];
  if (((byte)TVar1 < 0xd) || (TVar1 == (TType)0x12)) {
    return 1;
  }
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)TVar1 - 0xfU) < 2) {
LAB_00104d50:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      auVar4 = std::
               __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                         (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return CONCAT71(auVar4._9_7_,lVar2 != auVar4._0_8_) & 0xffffffff;
    }
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0x128))();
    if (cVar3 != '\0') goto LAB_00104d50;
  }
  return 0;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (0 < lVar4 >> 7) {
    plVar5 = param_1 + (lVar4 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      if (*(byte *)(plVar1 + 1) == param_3) {
        return param_1;
      }
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(*(byte *)(plVar1 + 1) - 0xf) < 2) {
LAB_00104ebd:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4,param_3);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00104ebd;
      }
      plVar1 = (long *)param_1[4];
      if (*(byte *)(plVar1 + 1) == param_3) goto LAB_00104f0c;
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(*(byte *)(plVar1 + 1) - 0xf) < 2) {
LAB_00104eed:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4,param_3);
          if (lVar4 != lVar3) {
LAB_00104f0c:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00104eed;
      }
      plVar1 = (long *)param_1[8];
      if (*(byte *)(plVar1 + 1) == param_3) goto LAB_00104f44;
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(*(byte *)(plVar1 + 1) - 0xf) < 2) {
LAB_00104f25:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4,param_3);
          if (lVar4 != lVar3) {
LAB_00104f44:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00104f25;
      }
      plVar1 = (long *)param_1[0xc];
      if (*(byte *)(plVar1 + 1) == param_3) goto LAB_00104f7c;
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(*(byte *)(plVar1 + 1) - 0xf) < 2) {
LAB_00104f5d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4,param_3);
          if (lVar4 != lVar3) {
LAB_00104f7c:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00104f5d;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar5);
    lVar4 = (long)param_2 - (long)param_1;
  }
  lVar4 = lVar4 >> 5;
  if (lVar4 != 2) {
    if (lVar4 != 3) {
      if (lVar4 != 1) {
        return param_2;
      }
      goto LAB_0010501e;
    }
    plVar5 = (long *)*param_1;
    if (*(byte *)(plVar5 + 1) == param_3) {
      return param_1;
    }
    if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
      if ((byte)(*(byte *)(plVar5 + 1) - 0xf) < 2) {
LAB_001050c2:
        lVar4 = *(long *)(plVar5[0xd] + 0x10);
        lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar5[0xd] + 8),lVar4,param_3);
        if (lVar4 != lVar3) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
      if (cVar2 != '\0') goto LAB_001050c2;
    }
    param_1 = param_1 + 4;
  }
  plVar5 = (long *)*param_1;
  if (*(byte *)(plVar5 + 1) == param_3) {
    return param_1;
  }
  if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
    if ((byte)(*(byte *)(plVar5 + 1) - 0xf) < 2) {
LAB_00105081:
      lVar4 = *(long *)(plVar5[0xd] + 0x10);
      lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(plVar5[0xd] + 8),lVar4,param_3);
      if (lVar4 != lVar3) {
        return param_1;
      }
    }
  }
  else {
    cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
    if (cVar2 != '\0') goto LAB_00105081;
  }
  param_1 = param_1 + 4;
LAB_0010501e:
  plVar5 = (long *)*param_1;
  if (param_3 == *(byte *)(plVar5 + 1)) {
    return param_1;
  }
  if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)(*(byte *)(plVar5 + 1) - 0xf)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar4 = *(long *)(plVar5[0xd] + 0x10);
  lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar5[0xd] + 8),lVar4,param_3);
  if (lVar4 == lVar3) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsBasicType(glslang::TBasicType) const */

ulong __thiscall glslang::TType::containsBasicType(TType *this,uint param_2)

{
  long lVar1;
  char cVar2;
  undefined1 auVar3 [16];
  
  if ((byte)this[8] == param_2) {
    return 1;
  }
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00105146:
      lVar1 = *(long *)(*(long *)(this + 0x68) + 0x10);
      auVar3 = std::
               __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                         (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar1,param_2);
      return CONCAT71(auVar3._9_7_,lVar1 != auVar3._0_8_) & 0xffffffff;
    }
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0x128))();
    if (cVar2 != '\0') goto LAB_00105146;
  }
  return 0;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (0 < lVar4 >> 7) {
    plVar5 = param_1 + (lVar4 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        if (plVar1[0xc] != 0) {
          return param_1;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          return param_1;
        }
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_001053bd:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_001053bd;
      }
      plVar1 = (long *)param_1[4];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        if (plVar1[0xc] != 0) goto LAB_00105333;
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') goto LAB_00105333;
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00105315:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_00105333:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00105315;
      }
      plVar1 = (long *)param_1[8];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        if (plVar1[0xc] != 0) goto LAB_0010536b;
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') goto LAB_0010536b;
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010534d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_0010536b:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010534d;
      }
      plVar1 = (long *)param_1[0xc];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        if (plVar1[0xc] != 0) goto LAB_001053a3;
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') goto LAB_001053a3;
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00105385:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_001053a3:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00105385;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar5);
    lVar4 = (long)param_2 - (long)param_1;
  }
  lVar4 = lVar4 >> 5;
  if (lVar4 != 2) {
    if (lVar4 != 3) {
      if (lVar4 != 1) {
        return param_2;
      }
      goto LAB_0010548e;
    }
    plVar5 = (long *)*param_1;
    lVar4 = *plVar5;
    if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
      if (plVar5[0xc] != 0) {
        return param_1;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
      if (cVar2 != '\0') {
        return param_1;
      }
      lVar4 = *plVar5;
    }
    if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
      if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_0010562c:
        lVar4 = *(long *)(plVar5[0xd] + 0x10);
        lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
        if (lVar4 != lVar3) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
      if (cVar2 != '\0') goto LAB_0010562c;
    }
    param_1 = param_1 + 4;
  }
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
    if (plVar5[0xc] != 0) {
      return param_1;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
    if (cVar2 != '\0') {
      return param_1;
    }
    lVar4 = *plVar5;
  }
  if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
    if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_001055d3:
      lVar4 = *(long *)(plVar5[0xd] + 0x10);
      lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
      if (lVar4 != lVar3) {
        return param_1;
      }
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
    if (cVar2 != '\0') goto LAB_001055d3;
  }
  param_1 = param_1 + 4;
LAB_0010548e:
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
    if (plVar5[0xc] != 0) {
      return param_1;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
    if (cVar2 != '\0') {
      return param_1;
    }
    lVar4 = *plVar5;
  }
  if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)((char)plVar5[1] - 0xfU)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar4 = *(long *)(plVar5[0xd] + 0x10);
  lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
  if (lVar4 == lVar3) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsArray() const */

bool __thiscall glslang::TType::containsArray(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0xe8) == isArray) {
    if (*(long *)(this + 0x60) != 0) {
      return true;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xe8))();
    if (cVar1 != '\0') {
      return true;
    }
    lVar2 = *(long *)this;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_001056a9:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_001056a9;
  }
  return false;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  code *pcVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = (long)param_2 - (long)param_1;
  if (0 < lVar6 >> 7) {
    plVar7 = param_1 + (lVar6 >> 7) * 0x10;
    do {
      plVar5 = (long *)*param_1;
      pcVar1 = *(code **)(*plVar5 + 0x148);
      if (pcVar1 == glslang::TType::isBuiltIn) {
        pcVar1 = *(code **)(*plVar5 + 0x58);
        if (pcVar1 == glslang::TType::getQualifier) {
          plVar3 = plVar5 + 2;
        }
        else {
          plVar3 = (long *)(*pcVar1)(plVar5);
        }
        if (0x7f < *(ushort *)(plVar3 + 1)) {
          return param_1;
        }
      }
      else {
        cVar2 = (*pcVar1)(plVar5);
        if (cVar2 != '\0') {
          return param_1;
        }
      }
      if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_00105955:
          lVar6 = *(long *)(plVar5[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar5[0xd] + 8),lVar6);
          if (lVar6 != lVar4) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
        if (cVar2 != '\0') goto LAB_00105955;
      }
      plVar5 = (long *)param_1[4];
      pcVar1 = *(code **)(*plVar5 + 0x148);
      if (pcVar1 == glslang::TType::isBuiltIn) {
        pcVar1 = *(code **)(*plVar5 + 0x58);
        if (pcVar1 == glslang::TType::getQualifier) {
          plVar3 = plVar5 + 2;
        }
        else {
          plVar3 = (long *)(*pcVar1)(plVar5);
        }
        if (0x7f < *(ushort *)(plVar3 + 1)) goto LAB_001058da;
      }
      else {
        cVar2 = (*pcVar1)(plVar5);
        if (cVar2 != '\0') {
          return param_1 + 4;
        }
      }
      if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_001058bd:
          lVar6 = *(long *)(plVar5[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar5[0xd] + 8),lVar6);
          if (lVar6 != lVar4) {
LAB_001058da:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
        if (cVar2 != '\0') goto LAB_001058bd;
      }
      plVar5 = (long *)param_1[8];
      pcVar1 = *(code **)(*plVar5 + 0x148);
      if (pcVar1 == glslang::TType::isBuiltIn) {
        pcVar1 = *(code **)(*plVar5 + 0x58);
        if (pcVar1 == glslang::TType::getQualifier) {
          plVar3 = plVar5 + 2;
        }
        else {
          plVar3 = (long *)(*pcVar1)(plVar5);
        }
        if (0x7f < *(ushort *)(plVar3 + 1)) goto LAB_0010590a;
      }
      else {
        cVar2 = (*pcVar1)(plVar5);
        if (cVar2 != '\0') {
          return param_1 + 8;
        }
      }
      if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_001058ed:
          lVar6 = *(long *)(plVar5[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar5[0xd] + 8),lVar6);
          if (lVar6 != lVar4) {
LAB_0010590a:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
        if (cVar2 != '\0') goto LAB_001058ed;
      }
      plVar5 = (long *)param_1[0xc];
      pcVar1 = *(code **)(*plVar5 + 0x148);
      if (pcVar1 == glslang::TType::isBuiltIn) {
        pcVar1 = *(code **)(*plVar5 + 0x58);
        if (pcVar1 == glslang::TType::getQualifier) {
          plVar3 = plVar5 + 2;
        }
        else {
          plVar3 = (long *)(*pcVar1)(plVar5);
        }
        if (0x7f < *(ushort *)(plVar3 + 1)) goto LAB_0010593a;
      }
      else {
        cVar2 = (*pcVar1)(plVar5);
        if (cVar2 != '\0') {
          return param_1 + 0xc;
        }
      }
      if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_0010591d:
          lVar6 = *(long *)(plVar5[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar5[0xd] + 8),lVar6);
          if (lVar6 != lVar4) {
LAB_0010593a:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
        if (cVar2 != '\0') goto LAB_0010591d;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar7);
    lVar6 = (long)param_2 - (long)param_1;
  }
  lVar6 = lVar6 >> 5;
  if (lVar6 != 2) {
    if (lVar6 != 3) {
      if (lVar6 != 1) {
        return param_2;
      }
      goto LAB_00105a68;
    }
    plVar7 = (long *)*param_1;
    pcVar1 = *(code **)(*plVar7 + 0x148);
    if (pcVar1 == glslang::TType::isBuiltIn) {
      pcVar1 = *(code **)(*plVar7 + 0x58);
      if (pcVar1 == glslang::TType::getQualifier) {
        plVar5 = plVar7 + 2;
      }
      else {
        plVar5 = (long *)(*pcVar1)(plVar7);
      }
      if (0x7f < *(ushort *)(plVar5 + 1)) {
        return param_1;
      }
    }
    else {
      cVar2 = (*pcVar1)(plVar7);
      if (cVar2 != '\0') {
        return param_1;
      }
    }
    if (*(code **)(*plVar7 + 0x128) == glslang::TType::isStruct) {
      if ((byte)((char)plVar7[1] - 0xfU) < 2) {
LAB_00105c66:
        lVar6 = *(long *)(plVar7[0xd] + 0x10);
        lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar7[0xd] + 8),lVar6);
        if (lVar6 != lVar4) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(*plVar7 + 0x128))(plVar7);
      if (cVar2 != '\0') goto LAB_00105c66;
    }
    param_1 = param_1 + 4;
  }
  plVar7 = (long *)*param_1;
  pcVar1 = *(code **)(*plVar7 + 0x148);
  if (pcVar1 == glslang::TType::isBuiltIn) {
    pcVar1 = *(code **)(*plVar7 + 0x58);
    if (pcVar1 == glslang::TType::getQualifier) {
      plVar5 = plVar7 + 2;
    }
    else {
      plVar5 = (long *)(*pcVar1)(plVar7);
    }
    if (0x7f < *(ushort *)(plVar5 + 1)) {
      return param_1;
    }
  }
  else {
    cVar2 = (*pcVar1)(plVar7);
    if (cVar2 != '\0') {
      return param_1;
    }
  }
  if (*(code **)(*plVar7 + 0x128) == glslang::TType::isStruct) {
    if ((byte)((char)plVar7[1] - 0xfU) < 2) {
LAB_00105bef:
      lVar6 = *(long *)(plVar7[0xd] + 0x10);
      lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(plVar7[0xd] + 8),lVar6);
      if (lVar6 != lVar4) {
        return param_1;
      }
    }
  }
  else {
    cVar2 = (**(code **)(*plVar7 + 0x128))(plVar7);
    if (cVar2 != '\0') goto LAB_00105bef;
  }
  param_1 = param_1 + 4;
LAB_00105a68:
  plVar7 = (long *)*param_1;
  pcVar1 = *(code **)(*plVar7 + 0x148);
  if (pcVar1 == glslang::TType::isBuiltIn) {
    pcVar1 = *(code **)(*plVar7 + 0x58);
    if (pcVar1 == glslang::TType::getQualifier) {
      plVar5 = plVar7 + 2;
    }
    else {
      plVar5 = (long *)(*pcVar1)(plVar7);
    }
    if (0x7f < *(ushort *)(plVar5 + 1)) {
      return param_1;
    }
  }
  else {
    cVar2 = (*pcVar1)(plVar7);
    if (cVar2 != '\0') {
      return param_1;
    }
  }
  if (*(code **)(*plVar7 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)((char)plVar7[1] - 0xfU)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(*plVar7 + 0x128))(plVar7);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar6 = *(long *)(plVar7[0xd] + 0x10);
  lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar7[0xd] + 8),lVar6);
  if (lVar6 == lVar4) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsBuiltIn() const */

bool __thiscall glslang::TType::containsBuiltIn(TType *this)

{
  code *pcVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  TType *pTVar5;
  
  pcVar1 = *(code **)(*(long *)this + 0x148);
  if (pcVar1 == isBuiltIn) {
    pcVar1 = *(code **)(*(long *)this + 0x58);
    if (pcVar1 == getQualifier) {
      pTVar5 = this + 0x10;
    }
    else {
      pTVar5 = (TType *)(*pcVar1)();
    }
    if (0x7f < *(ushort *)(pTVar5 + 8)) {
      return true;
    }
  }
  else {
    cVar3 = (*pcVar1)();
    if (cVar3 != '\0') {
      return true;
    }
  }
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00105d09:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar4 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar4;
    }
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0x128))(this);
    if (cVar3 != '\0') goto LAB_00105d09;
  }
  return false;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (0 < lVar4 >> 7) {
    plVar5 = param_1 + (lVar4 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_00105da8:
          if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
            return param_1;
          }
          goto LAB_00105dd0;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar3 = plVar1[0xc];
          goto LAB_00105da8;
        }
LAB_00105dd0:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00105fed:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00105fed;
      }
      plVar1 = (long *)param_1[4];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_00105e14:
          if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) goto LAB_00105e23;
          goto LAB_00105e30;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar3 = plVar1[0xc];
          goto LAB_00105e14;
        }
LAB_00105e30:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010601d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_00105e23:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010601d;
      }
      plVar1 = (long *)param_1[8];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_00105e74:
          if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) goto LAB_00105e83;
          goto LAB_00105e90;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar3 = plVar1[0xc];
          goto LAB_00105e74;
        }
LAB_00105e90:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010604d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_00105e83:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010604d;
      }
      plVar1 = (long *)param_1[0xc];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_00105ed4:
          if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) goto LAB_00105ee3;
          goto LAB_00105ef0;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar3 = plVar1[0xc];
          goto LAB_00105ed4;
        }
LAB_00105ef0:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010607d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_00105ee3:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010607d;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar5);
    lVar4 = (long)param_2 - (long)param_1;
  }
  lVar4 = lVar4 >> 5;
  if (lVar4 == 2) {
LAB_0010617e:
    plVar5 = (long *)*param_1;
    lVar4 = *plVar5;
    if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
      lVar3 = plVar5[0xc];
      if (lVar3 != 0) {
LAB_0010619e:
        if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
          return param_1;
        }
        goto LAB_001061b1;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
      if (cVar2 != '\0') {
        lVar3 = plVar5[0xc];
        goto LAB_0010619e;
      }
LAB_001061b1:
      lVar4 = *plVar5;
    }
    if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
      if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_001061f7:
        lVar4 = *(long *)(plVar5[0xd] + 0x10);
        lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
        if (lVar4 != lVar3) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
      if (cVar2 != '\0') goto LAB_001061f7;
    }
    param_1 = param_1 + 4;
  }
  else {
    if (lVar4 == 3) {
      plVar5 = (long *)*param_1;
      lVar4 = *plVar5;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        lVar3 = plVar5[0xc];
        if (lVar3 != 0) {
LAB_0010613d:
          if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
            return param_1;
          }
          goto LAB_00106150;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
        if (cVar2 != '\0') {
          lVar3 = plVar5[0xc];
          goto LAB_0010613d;
        }
LAB_00106150:
        lVar4 = *plVar5;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_00106265:
          lVar4 = *(long *)(plVar5[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
        if (cVar2 != '\0') goto LAB_00106265;
      }
      param_1 = param_1 + 4;
      goto LAB_0010617e;
    }
    if (lVar4 != 1) {
      return param_2;
    }
  }
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
    lVar3 = plVar5[0xc];
    if (lVar3 == 0) goto LAB_00105f89;
LAB_00105f72:
    if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
      return param_1;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
    if (cVar2 != '\0') {
      lVar3 = plVar5[0xc];
      goto LAB_00105f72;
    }
  }
  lVar4 = *plVar5;
LAB_00105f89:
  if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)((char)plVar5[1] - 0xfU)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar4 = *(long *)(plVar5[0xd] + 0x10);
  lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
  if (lVar4 == lVar3) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsSpecializationSize() const */

bool __thiscall glslang::TType::containsSpecializationSize(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0xe8) == isArray) {
    lVar3 = *(long *)(this + 0x60);
    if (lVar3 != 0) {
LAB_001062ea:
      if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
        return true;
      }
      goto LAB_001062fe;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xe8))();
    if (cVar1 != '\0') {
      lVar3 = *(long *)(this + 0x60);
      goto LAB_001062ea;
    }
LAB_001062fe:
    lVar2 = *(long *)this;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00106311:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_00106311;
  }
  return false;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (0 < lVar4 >> 7) {
    plVar5 = param_1 + (lVar4 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
        if ((*(byte *)(plVar1 + 1) < 0x15) &&
           ((0x1a6000UL >> ((ulong)*(byte *)(plVar1 + 1) & 0x3f) & 1) != 0)) {
          return param_1;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x140))(plVar1);
        if (cVar2 != '\0') {
          return param_1;
        }
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_001065ed:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_001065ed;
      }
      plVar1 = (long *)param_1[4];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
        if ((*(byte *)(plVar1 + 1) < 0x15) &&
           ((0x1a6000UL >> ((ulong)*(byte *)(plVar1 + 1) & 0x3f) & 1) != 0)) goto LAB_00106410;
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x140))(plVar1);
        if (cVar2 != '\0') goto LAB_00106410;
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010661d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_00106410:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010661d;
      }
      plVar1 = (long *)param_1[8];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
        if ((*(byte *)(plVar1 + 1) < 0x15) &&
           ((0x1a6000UL >> ((ulong)*(byte *)(plVar1 + 1) & 0x3f) & 1) != 0)) goto LAB_00106478;
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x140))(plVar1);
        if (cVar2 != '\0') goto LAB_00106478;
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010664d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_00106478:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010664d;
      }
      plVar1 = (long *)param_1[0xc];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
        if ((*(byte *)(plVar1 + 1) < 0x15) &&
           ((0x1a6000UL >> ((ulong)*(byte *)(plVar1 + 1) & 0x3f) & 1) != 0)) goto LAB_001064e0;
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x140))(plVar1);
        if (cVar2 != '\0') goto LAB_001064e0;
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010667d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_001064e0:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010667d;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar5);
    lVar4 = (long)param_2 - (long)param_1;
  }
  lVar4 = lVar4 >> 5;
  if (lVar4 != 2) {
    if (lVar4 != 3) {
      if (lVar4 != 1) {
        return param_2;
      }
      goto LAB_0010655d;
    }
    plVar5 = (long *)*param_1;
    lVar4 = *plVar5;
    if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
      if ((*(byte *)(plVar5 + 1) < 0x15) &&
         ((0x1a6000UL >> ((ulong)*(byte *)(plVar5 + 1) & 0x3f) & 1) != 0)) {
        return param_1;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x140))(plVar5);
      if (cVar2 != '\0') {
        return param_1;
      }
      lVar4 = *plVar5;
    }
    if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
      if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_001067e8:
        lVar4 = *(long *)(plVar5[0xd] + 0x10);
        lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
        if (lVar4 != lVar3) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
      if (cVar2 != '\0') goto LAB_001067e8;
    }
    param_1 = param_1 + 4;
  }
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
    if ((*(byte *)(plVar5 + 1) < 0x15) &&
       ((0x1a6000UL >> ((ulong)*(byte *)(plVar5 + 1) & 0x3f) & 1) != 0)) {
      return param_1;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x140))(plVar5);
    if (cVar2 != '\0') {
      return param_1;
    }
    lVar4 = *plVar5;
  }
  if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
    if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_0010678f:
      lVar4 = *(long *)(plVar5[0xd] + 0x10);
      lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
      if (lVar4 != lVar3) {
        return param_1;
      }
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
    if (cVar2 != '\0') goto LAB_0010678f;
  }
  param_1 = param_1 + 4;
LAB_0010655d:
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
    if ((*(byte *)(plVar5 + 1) < 0x15) &&
       ((0x1a6000UL >> ((ulong)*(byte *)(plVar5 + 1) & 0x3f) & 1) != 0)) {
      return param_1;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x140))(plVar5);
    if (cVar2 != '\0') {
      return param_1;
    }
    lVar4 = *plVar5;
  }
  if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)((char)plVar5[1] - 0xfU)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar4 = *(long *)(plVar5[0xd] + 0x10);
  lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
  if (lVar4 == lVar3) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsOpaque() const */

bool __thiscall glslang::TType::containsOpaque(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0x140) == isOpaque) {
    if (((byte)this[8] < 0x15) && ((0x1a6000UL >> ((ulong)(byte)this[8] & 0x3f) & 1) != 0)) {
      return true;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x140))();
    if (cVar1 != '\0') {
      return true;
    }
    lVar2 = *(long *)this;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00106889:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_00106889;
  }
  return false;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (0 < lVar4 >> 7) {
    plVar5 = param_1 + (lVar4 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar4 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
          if (cVar2 != '\0') {
            lVar3 = plVar1[0xc];
            goto LAB_0010692b;
          }
          goto LAB_00106959;
        }
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_0010692b:
          if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) {
            return param_1;
          }
          goto LAB_00106959;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xf8))(plVar1);
        if (cVar2 != '\0') {
          return param_1;
        }
LAB_00106959:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00106bd5:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00106bd5;
      }
      plVar1 = (long *)param_1[4];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar4 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
          if (cVar2 != '\0') {
            lVar3 = plVar1[0xc];
            goto LAB_001069a8;
          }
          goto LAB_001069d1;
        }
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_001069a8:
          if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) goto LAB_001069b8;
          goto LAB_001069d1;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xf8))(plVar1);
        if (cVar2 != '\0') goto LAB_001069b8;
LAB_001069d1:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00106c0d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_001069b8:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00106c0d;
      }
      plVar1 = (long *)param_1[8];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar4 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
          if (cVar2 != '\0') {
            lVar3 = plVar1[0xc];
            goto LAB_00106a20;
          }
          goto LAB_00106a49;
        }
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_00106a20:
          if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) goto LAB_00106a2e;
          goto LAB_00106a49;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xf8))(plVar1);
        if (cVar2 != '\0') goto LAB_00106a2e;
LAB_00106a49:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00106c3d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_00106a2e:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00106c3d;
      }
      plVar1 = (long *)param_1[0xc];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar4 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
          if (cVar2 != '\0') {
            lVar3 = plVar1[0xc];
            goto LAB_00106a98;
          }
          goto LAB_00106ab9;
        }
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_00106a98:
          if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) goto LAB_00106aa6;
          goto LAB_00106ab9;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xf8))(plVar1);
        if (cVar2 != '\0') goto LAB_00106aa6;
LAB_00106ab9:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00106c6d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_00106aa6:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00106c6d;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar5);
    lVar4 = (long)param_2 - (long)param_1;
  }
  lVar4 = lVar4 >> 5;
  if (lVar4 == 2) {
LAB_00106d87:
    plVar5 = (long *)*param_1;
    lVar4 = *plVar5;
    if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
      if (*(code **)(lVar4 + 0xe8) != glslang::TType::isArray) {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
        if (cVar2 != '\0') {
          lVar3 = plVar5[0xc];
          goto LAB_00106dbf;
        }
        goto LAB_00106dd1;
      }
      lVar3 = plVar5[0xc];
      if (lVar3 != 0) {
LAB_00106dbf:
        if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) {
          return param_1;
        }
        goto LAB_00106dd1;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0xf8))(plVar5);
      if (cVar2 != '\0') {
        return param_1;
      }
LAB_00106dd1:
      lVar4 = *plVar5;
    }
    if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
      if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_00106e19:
        lVar4 = *(long *)(plVar5[0xd] + 0x10);
        lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
        if (lVar4 != lVar3) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
      if (cVar2 != '\0') goto LAB_00106e19;
    }
    param_1 = param_1 + 4;
  }
  else {
    if (lVar4 == 3) {
      plVar5 = (long *)*param_1;
      lVar4 = *plVar5;
      if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar4 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
          if (cVar2 != '\0') {
            lVar3 = plVar5[0xc];
            goto LAB_00106d45;
          }
          goto LAB_00106d57;
        }
        lVar3 = plVar5[0xc];
        if (lVar3 != 0) {
LAB_00106d45:
          if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) {
            return param_1;
          }
          goto LAB_00106d57;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xf8))(plVar5);
        if (cVar2 != '\0') {
          return param_1;
        }
LAB_00106d57:
        lVar4 = *plVar5;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_00106eaa:
          lVar4 = *(long *)(plVar5[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
        if (cVar2 != '\0') goto LAB_00106eaa;
      }
      param_1 = param_1 + 4;
      goto LAB_00106d87;
    }
    if (lVar4 != 1) {
      return param_2;
    }
  }
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
    if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
      lVar3 = plVar5[0xc];
      if (lVar3 == 0) goto LAB_00106b6f;
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
      if (cVar2 == '\0') goto LAB_00106b6b;
      lVar3 = plVar5[0xc];
    }
    if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) {
      return param_1;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0xf8))(plVar5);
    if (cVar2 != '\0') {
      return param_1;
    }
  }
LAB_00106b6b:
  lVar4 = *plVar5;
LAB_00106b6f:
  if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)((char)plVar5[1] - 0xfU)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar4 = *(long *)(plVar5[0xd] + 0x10);
  lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
  if (lVar4 == lVar3) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsUnsizedArray() const */

bool __thiscall glslang::TType::containsUnsizedArray(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0xf8) == isUnsizedArray) {
    if (*(code **)(lVar2 + 0xe8) != isArray) {
      cVar1 = (**(code **)(lVar2 + 0xe8))();
      if (cVar1 != '\0') {
        lVar3 = *(long *)(this + 0x60);
        goto LAB_00106f5a;
      }
      goto LAB_00106f76;
    }
    lVar3 = *(long *)(this + 0x60);
    if (lVar3 != 0) {
LAB_00106f5a:
      if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) {
        return true;
      }
      goto LAB_00106f76;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xf8))();
    if (cVar1 != '\0') {
      return true;
    }
LAB_00106f76:
    lVar2 = *(long *)this;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00106f89:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_00106f89;
  }
  return false;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = (long)param_2 - (long)param_1;
  if (0 < lVar7 >> 7) {
    plVar1 = param_1;
LAB_00106ff0:
    do {
      plVar6 = plVar1;
      plVar1 = (long *)*plVar6;
      lVar5 = *plVar1;
      if (plVar1 == param_3) {
LAB_00107040:
        if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
          if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010705d:
            lVar5 = *(long *)(plVar1[0xd] + 0x10);
            lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                              (*(undefined8 *)(plVar1[0xd] + 8),lVar5,param_3);
            if (lVar5 != lVar3) {
              return plVar6;
            }
          }
        }
        else {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_0010705d;
        }
      }
      else {
        if (*(code **)(lVar5 + 0x128) != glslang::TType::isStruct) {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') {
            return plVar6;
          }
          lVar5 = *plVar1;
          goto LAB_00107040;
        }
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
          return plVar6;
        }
      }
      plVar1 = (long *)plVar6[4];
      lVar5 = *plVar1;
      if (plVar1 == param_3) {
LAB_001070c0:
        if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
          if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_001070dd:
            lVar5 = *(long *)(plVar1[0xd] + 0x10);
            lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                              (*(undefined8 *)(plVar1[0xd] + 8),lVar5,param_3);
            if (lVar5 != lVar3) {
LAB_001070a6:
              return plVar6 + 4;
            }
          }
        }
        else {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_001070dd;
        }
      }
      else {
        if (*(code **)(lVar5 + 0x128) != glslang::TType::isStruct) {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_001070a6;
          lVar5 = *plVar1;
          goto LAB_001070c0;
        }
        if ((byte)((char)plVar1[1] - 0xfU) < 2) goto LAB_001070a6;
      }
      plVar1 = (long *)plVar6[8];
      lVar5 = *plVar1;
      if (plVar1 == param_3) {
LAB_00107140:
        if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
          if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010715d:
            lVar5 = *(long *)(plVar1[0xd] + 0x10);
            lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                              (*(undefined8 *)(plVar1[0xd] + 8),lVar5,param_3);
            if (lVar5 != lVar3) {
LAB_00107126:
              return plVar6 + 8;
            }
          }
        }
        else {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_0010715d;
        }
      }
      else {
        if (*(code **)(lVar5 + 0x128) != glslang::TType::isStruct) {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_00107126;
          lVar5 = *plVar1;
          goto LAB_00107140;
        }
        if ((byte)((char)plVar1[1] - 0xfU) < 2) goto LAB_00107126;
      }
      plVar1 = (long *)plVar6[0xc];
      lVar5 = *plVar1;
      if (plVar1 == param_3) {
LAB_001071c0:
        if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
          if (1 < (byte)((char)plVar1[1] - 0xfU)) goto LAB_001071fa;
        }
        else {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 == '\0') {
            plVar1 = plVar6 + 0x10;
            if (plVar6 + 0x10 == param_1 + (lVar7 >> 7) * 0x10) break;
            goto LAB_00106ff0;
          }
        }
        lVar5 = *(long *)(plVar1[0xd] + 0x10);
        lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar1[0xd] + 8),lVar5,param_3);
        if (lVar5 != lVar3) {
LAB_001071a6:
          return plVar6 + 0xc;
        }
      }
      else {
        if (*(code **)(lVar5 + 0x128) != glslang::TType::isStruct) {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_001071a6;
          lVar5 = *plVar1;
          goto LAB_001071c0;
        }
        if ((byte)((char)plVar1[1] - 0xfU) < 2) goto LAB_001071a6;
      }
LAB_001071fa:
      plVar1 = plVar6 + 0x10;
    } while (plVar6 + 0x10 != param_1 + (lVar7 >> 7) * 0x10);
    param_1 = plVar6 + 0x10;
    lVar7 = (long)param_2 - (long)param_1;
  }
  lVar7 = lVar7 >> 5;
  if (lVar7 != 2) {
    if (lVar7 != 3) {
      if (lVar7 != 1) {
        return param_2;
      }
      goto LAB_00107232;
    }
    plVar1 = (long *)*param_1;
    pcVar4 = *(code **)(*plVar1 + 0x128);
    if (param_3 == plVar1) {
LAB_00107372:
      if (pcVar4 == glslang::TType::isStruct) {
        cVar2 = (char)plVar1[1];
        goto LAB_00107349;
      }
      cVar2 = (*pcVar4)(plVar1);
      if (cVar2 != '\0') goto LAB_0010744b;
    }
    else {
      if (pcVar4 != glslang::TType::isStruct) {
        cVar2 = (*pcVar4)(plVar1);
        if (cVar2 != '\0') {
          return param_1;
        }
        pcVar4 = *(code **)(*plVar1 + 0x128);
        goto LAB_00107372;
      }
      cVar2 = (char)plVar1[1];
      if ((byte)(cVar2 - 0xfU) < 2) {
        return param_1;
      }
LAB_00107349:
      if ((byte)(cVar2 - 0xfU) < 2) {
LAB_0010744b:
        lVar7 = *(long *)(plVar1[0xd] + 0x10);
        lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar1[0xd] + 8),lVar7,param_3);
        if (lVar7 != lVar5) {
          return param_1;
        }
      }
    }
    param_1 = param_1 + 4;
  }
  plVar1 = (long *)*param_1;
  lVar7 = *plVar1;
  if (plVar1 == param_3) {
LAB_00107394:
    if (*(code **)(lVar7 + 0x128) == glslang::TType::isStruct) {
      if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_001073b5:
        lVar7 = *(long *)(plVar1[0xd] + 0x10);
        lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar1[0xd] + 8),lVar7,param_3);
        if (lVar7 != lVar5) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(lVar7 + 0x128))(plVar1);
      if (cVar2 != '\0') goto LAB_001073b5;
    }
  }
  else {
    if (*(code **)(lVar7 + 0x128) != glslang::TType::isStruct) {
      cVar2 = (**(code **)(lVar7 + 0x128))(plVar1);
      if (cVar2 != '\0') {
        return param_1;
      }
      lVar7 = *plVar1;
      goto LAB_00107394;
    }
    if ((byte)((char)plVar1[1] - 0xfU) < 2) {
      return param_1;
    }
  }
  param_1 = param_1 + 4;
LAB_00107232:
  plVar1 = (long *)*param_1;
  lVar7 = *plVar1;
  if (plVar1 != param_3) {
    if (*(code **)(lVar7 + 0x128) == glslang::TType::isStruct) {
      if (1 < (byte)((char)plVar1[1] - 0xfU)) {
        return param_2;
      }
      return param_1;
    }
    cVar2 = (**(code **)(lVar7 + 0x128))(plVar1);
    if (cVar2 != '\0') {
      return param_1;
    }
    lVar7 = *plVar1;
  }
  if (*(code **)(lVar7 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)((char)plVar1[1] - 0xfU)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(lVar7 + 0x128))(plVar1);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar7 = *(long *)(plVar1[0xd] + 0x10);
  lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar1[0xd] + 8),lVar7,param_3);
  if (lVar7 == lVar5) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsStructure() const */

bool __thiscall glslang::TType::containsStructure(TType *this)

{
  long lVar1;
  char cVar2;
  long lVar3;
  
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_001074d6:
      lVar1 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar1,this);
      return lVar1 != lVar3;
    }
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0x128))();
    if (cVar2 != '\0') goto LAB_001074d6;
  }
  return false;
}



/* glslang::TSpirvTypeParameter::TEMPNAMEPLACEHOLDERVALUE(glslang::TSpirvTypeParameter const&) const
   [clone .cold] */

void __thiscall
glslang::TSpirvTypeParameter::operator==(TSpirvTypeParameter *this,TSpirvTypeParameter *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* glslang::TSpirvType::TEMPNAMEPLACEHOLDERVALUE(glslang::TSpirvType const&) const */

undefined4 __thiscall glslang::TSpirvType::operator==(TSpirvType *this,TSpirvType *param_1)

{
  size_t __n;
  TSpirvTypeParameter *pTVar1;
  int iVar2;
  undefined4 uVar3;
  TSpirvTypeParameter *pTVar4;
  TSpirvTypeParameter *this_00;
  
  uVar3 = 0;
  __n = *(size_t *)(this + 0x10);
  if (__n == *(size_t *)(param_1 + 0x10)) {
    if (((__n == 0) ||
        (iVar2 = memcmp(*(void **)(this + 8),*(void **)(param_1 + 8),__n), iVar2 == 0)) &&
       (uVar3 = 0, *(int *)(this + 0x28) == *(int *)(param_1 + 0x28))) {
      pTVar1 = *(TSpirvTypeParameter **)(this + 0x40);
      this_00 = *(TSpirvTypeParameter **)(this + 0x38);
      pTVar4 = *(TSpirvTypeParameter **)(param_1 + 0x38);
      if ((long)pTVar1 - (long)this_00 == *(long *)(param_1 + 0x40) - (long)pTVar4) {
        for (; this_00 != pTVar1; this_00 = this_00 + 0x10) {
          uVar3 = TSpirvTypeParameter::operator==(this_00,pTVar4);
          if ((char)uVar3 == '\0') {
            return uVar3;
          }
          pTVar4 = pTVar4 + 0x10;
        }
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}



/* glslang::TType::TEMPNAMEPLACEHOLDERVALUE(glslang::TType const&) const */

ulong __thiscall glslang::TType::operator==(TType *this,TType *param_1)

{
  TType TVar1;
  TType TVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  size_t __n;
  TSpirvTypeParameter *pTVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  TSpirvTypeParameter *pTVar18;
  int *piVar19;
  TSpirvTypeParameter *this_00;
  int *piVar20;
  long local_50;
  
  if (this[8] != param_1[8]) {
    return 0;
  }
  if (this[8] == (TType)0xe) {
    if (*(short *)(this + 0x80) != *(short *)(param_1 + 0x80)) {
      return 0;
    }
    TVar2 = this[0x82];
    if ((((byte)param_1[0x82] ^ (byte)TVar2) & 3) != 0) {
      return 0;
    }
    TVar1 = param_1[0x82];
    if (((byte)TVar2 >> 2 & 1) != ((byte)TVar1 >> 2 & 1)) {
      return 0;
    }
    if (((byte)TVar2 >> 3 & 1) != ((byte)TVar1 >> 3 & 1)) {
      return 0;
    }
    if (((byte)TVar2 >> 4 & 1) != ((byte)TVar1 >> 4 & 1)) {
      return 0;
    }
    if (((byte)TVar2 >> 5 & 1) != ((byte)TVar1 >> 5 & 1)) {
      return 0;
    }
    if (((byte)this[0x83] >> 5 & 1) != ((byte)param_1[0x83] >> 5 & 1)) {
      return 0;
    }
    if (((byte)this[0x83] >> 6 & 1) != ((byte)param_1[0x83] >> 6 & 1)) {
      return 0;
    }
  }
  if ((((byte)this[9] ^ (byte)param_1[9]) & 0xf) != 0) {
    return 0;
  }
  if (0xf < ((byte)this[9] ^ (byte)param_1[9])) {
    return 0;
  }
  TVar2 = this[10];
  if ((((byte)param_1[10] ^ (byte)TVar2) & 0x1f) != 0) {
    return 0;
  }
  if (((byte)TVar2 >> 5 & 1) != ((byte)param_1[10] >> 5 & 1)) {
    return 0;
  }
  if (((byte)TVar2 >> 6 & 1) != ((byte)param_1[10] >> 6 & 1)) {
    return 0;
  }
  bVar7 = sameStructType(this,param_1,(int *)0x0,(int *)0x0);
  if (bVar7 == 0) {
    return 0;
  }
  if (*(code **)(*(long *)this + 0x38) == getBasicType) {
    uVar11 = (uint)(byte)this[8];
  }
  else {
    uVar11 = (**(code **)(*(long *)this + 0x38))(this);
  }
  if (*(code **)(*(long *)param_1 + 0x38) == getBasicType) {
    uVar10 = (uint)(byte)param_1[8];
  }
  else {
    uVar10 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
  }
  if ((uVar11 == 0x12) != (uVar10 == 0x12)) {
    return 0;
  }
  if (*(code **)(*(long *)this + 0x38) == getBasicType) {
    uVar11 = (uint)(byte)this[8];
  }
  else {
    uVar11 = (**(code **)(*(long *)this + 0x38))(this);
  }
  if (uVar11 == 0x12) {
LAB_0010784c:
    if ((*(TType **)(this + 0x68) != *(TType **)(param_1 + 0x68)) &&
       (cVar8 = operator==(*(TType **)(this + 0x68),*(TType **)(param_1 + 0x68)), cVar8 == '\0')) {
      return 0;
    }
  }
  else {
    if (*(code **)(*(long *)param_1 + 0x38) == getBasicType) {
      uVar11 = (uint)(byte)param_1[8];
    }
    else {
      uVar11 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
    }
    if (uVar11 == 0x12) goto LAB_0010784c;
  }
  lVar12 = *(long *)(this + 0x60);
  lVar16 = *(long *)(param_1 + 0x60);
  if (lVar12 == 0) {
    if (lVar16 != 0) {
      return 0;
    }
  }
  else {
    if (lVar16 == 0) {
      return 0;
    }
    lVar3 = *(long *)(lVar12 + 8);
    lVar16 = *(long *)(lVar16 + 8);
    if (lVar3 == 0) {
      if (lVar16 == 0) goto LAB_001078e8;
    }
    else if (lVar16 != 0) {
      piVar4 = *(int **)(lVar3 + 0x10);
      piVar19 = *(int **)(lVar3 + 8);
      piVar20 = *(int **)(lVar16 + 8);
      if ((long)piVar4 - (long)piVar19 == *(long *)(lVar16 + 0x10) - (long)piVar20) {
        for (; piVar19 != piVar4; piVar19 = piVar19 + 4) {
          if (*piVar19 != *piVar20) {
LAB_00107c20:
            lVar12 = *(long *)(this + 0x60);
            goto LAB_001078b8;
          }
          plVar14 = *(long **)(piVar19 + 2);
          plVar13 = *(long **)(piVar20 + 2);
          if (plVar14 != (long *)0x0) {
            if (((plVar13 != (long *)0x0) &&
                (lVar12 = (**(code **)(*plVar14 + 0x60))(plVar14), lVar12 != 0)) &&
               (lVar12 = (**(code **)(*plVar13 + 0x60))(plVar13), lVar12 != 0)) {
              plVar14 = (long *)(**(code **)(*plVar14 + 0x60))(plVar14);
              if (*(code **)(*plVar14 + 0x180) == TIntermSymbol::getId) {
                lVar12 = plVar14[0x17];
              }
              else {
                lVar12 = (**(code **)(*plVar14 + 0x180))();
              }
              plVar14 = (long *)(**(code **)(*plVar13 + 0x60))(plVar13);
              if (*(code **)(*plVar14 + 0x180) == TIntermSymbol::getId) {
                lVar16 = plVar14[0x17];
              }
              else {
                lVar16 = (**(code **)(*plVar14 + 0x180))();
              }
              if (lVar12 == lVar16) goto LAB_00107c2e;
            }
            goto LAB_00107c20;
          }
          if (plVar13 != (long *)0x0) goto LAB_00107c20;
LAB_00107c2e:
          piVar20 = piVar20 + 4;
        }
        goto LAB_001078e8;
      }
    }
LAB_001078b8:
    if (*(char *)(lVar12 + 0x14) == '\0') {
      return 0;
    }
    if (*(char *)(*(long *)(param_1 + 0x60) + 0x14) == '\0') {
      return 0;
    }
    if ((*(int *)(*(long *)(param_1 + 0x60) + 0x10) != 0) && (*(int *)(lVar12 + 0x10) != 0)) {
      return 0;
    }
  }
LAB_001078e8:
  piVar4 = *(int **)(this + 0x88);
  piVar19 = *(int **)(param_1 + 0x88);
  if (piVar4 == (int *)0x0) {
    if (piVar19 != (int *)0x0) {
      return 0;
    }
  }
  else {
    if (piVar19 == (int *)0x0) {
      return 0;
    }
    if (*piVar4 != *piVar19) {
      return 0;
    }
    lVar12 = *(long *)(*(long *)(piVar4 + 2) + 8);
    lVar16 = *(long *)(*(long *)(piVar19 + 2) + 8);
    if (lVar12 == 0) {
      if (lVar16 != 0) {
        return 0;
      }
    }
    else {
      if (lVar16 == 0) {
        return 0;
      }
      piVar20 = *(int **)(lVar12 + 8);
      piVar5 = *(int **)(lVar12 + 0x10);
      piVar17 = *(int **)(lVar16 + 8);
      if ((long)piVar5 - (long)piVar20 != *(long *)(lVar16 + 0x10) - (long)piVar17) {
        return 0;
      }
      for (; piVar20 != piVar5; piVar20 = piVar20 + 4) {
        if (*piVar20 != *piVar17) {
          return 0;
        }
        plVar14 = *(long **)(piVar17 + 2);
        plVar13 = *(long **)(piVar20 + 2);
        if (plVar13 == (long *)0x0) {
          if (plVar14 != (long *)0x0) {
            return 0;
          }
        }
        else {
          if (plVar14 == (long *)0x0) {
            return 0;
          }
          lVar12 = (**(code **)(*plVar13 + 0x60))(plVar13);
          if (lVar12 == 0) {
            return 0;
          }
          lVar12 = (**(code **)(*plVar14 + 0x60))();
          if (lVar12 == 0) {
            return 0;
          }
          plVar13 = (long *)(**(code **)(*plVar13 + 0x60))(plVar13);
          if (*(code **)(*plVar13 + 0x180) == TIntermSymbol::getId) {
            local_50 = plVar13[0x17];
          }
          else {
            local_50 = (**(code **)(*plVar13 + 0x180))();
          }
          plVar14 = (long *)(**(code **)(*plVar14 + 0x60))();
          if (*(code **)(*plVar14 + 0x180) == TIntermSymbol::getId) {
            lVar12 = plVar14[0x17];
          }
          else {
            lVar12 = (**(code **)(*plVar14 + 0x180))();
          }
          if (local_50 != lVar12) {
            return 0;
          }
        }
        piVar17 = piVar17 + 4;
      }
    }
    if ((*piVar4 == 0x16) &&
       (cVar8 = TSpirvType::operator==(*(TSpirvType **)(piVar4 + 4),*(TSpirvType **)(piVar19 + 4)),
       cVar8 == '\0')) {
      return 0;
    }
  }
  if (((*(ushort *)(this + 10) ^ *(ushort *)(param_1 + 10)) & 0x380) == 0) {
    lVar12 = *(long *)(param_1 + 0x90);
    lVar16 = *(long *)(this + 0x90);
    if (lVar16 == 0) {
      return (ulong)CONCAT11((char)((*(ushort *)(this + 10) ^ *(ushort *)(param_1 + 10)) >> 8),
                             lVar12 == 0);
    }
    if ((lVar12 != 0) && (__n = *(size_t *)(lVar16 + 0x10), __n == *(size_t *)(lVar12 + 0x10))) {
      if (((__n == 0) ||
          (iVar9 = memcmp(*(void **)(lVar16 + 8),*(void **)(lVar12 + 8),__n), iVar9 == 0)) &&
         (*(int *)(lVar16 + 0x28) == *(int *)(lVar12 + 0x28))) {
        pTVar6 = *(TSpirvTypeParameter **)(lVar16 + 0x40);
        this_00 = *(TSpirvTypeParameter **)(lVar16 + 0x38);
        pTVar18 = *(TSpirvTypeParameter **)(lVar12 + 0x38);
        if ((long)pTVar6 - (long)this_00 == *(long *)(lVar12 + 0x40) - (long)pTVar18) {
          while( true ) {
            if (this_00 == pTVar6) {
              return (ulong)bVar7;
            }
            uVar15 = TSpirvTypeParameter::operator==(this_00,pTVar18);
            if ((char)uVar15 == '\0') break;
            this_00 = this_00 + 0x10;
            pTVar18 = pTVar18 + 0x10;
          }
          return uVar15;
        }
      }
    }
  }
  return 0;
}



/* WARNING: Type propagation algorithm not settling */
/* glslang::TType::sameStructType(glslang::TType const&, int*, int*) const */

undefined8 __thiscall
glslang::TType::sameStructType(TType *this,TType *param_1,int *param_2,int *param_3)

{
  size_t sVar1;
  bool bVar2;
  TType TVar3;
  char cVar4;
  int iVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  TType *this_00;
  
  if (param_2 != (int *)0x0) {
    *param_2 = -1;
    *param_3 = -1;
  }
  if (*(code **)(*(long *)this + 0x128) != isStruct) {
    cVar4 = (**(code **)(*(long *)this + 0x128))(this);
    if (cVar4 == '\0') {
      pcVar6 = *(code **)(*(long *)param_1 + 0x128);
      if (pcVar6 != isStruct) goto LAB_001080c8;
LAB_00107d7a:
      if (1 < (byte)((char)param_1[8] - 0xfU)) {
        return 1;
      }
    }
LAB_00107d8a:
    if (*(code **)(*(long *)this + 0x128) == isStruct) {
      TVar3 = this[8];
      goto LAB_00107da2;
    }
    cVar4 = (**(code **)(*(long *)this + 0x128))(this);
    if (cVar4 != '\0') goto LAB_00107daa;
    goto LAB_00107dc5;
  }
  TVar3 = this[8];
  if (1 < (byte)((char)TVar3 - 0xfU)) {
    pcVar6 = *(code **)(*(long *)param_1 + 0x128);
    if (pcVar6 == isStruct) goto LAB_00107d7a;
LAB_001080c8:
    cVar4 = (*pcVar6)(param_1);
    if (cVar4 == '\0') {
      return 1;
    }
    goto LAB_00107d8a;
  }
LAB_00107da2:
  if ((byte)((char)TVar3 - 0xfU) < 2) {
LAB_00107daa:
    if (*(code **)(*(long *)param_1 + 0x128) == isStruct) {
      if ((byte)((char)param_1[8] - 0xfU) < 2) {
LAB_00107e30:
        if (*(long *)(this + 0x68) == *(long *)(param_1 + 0x68)) {
          return 1;
        }
      }
    }
    else {
      cVar4 = (**(code **)(*(long *)param_1 + 0x128))(param_1);
      if (cVar4 != '\0') goto LAB_00107e30;
    }
LAB_00107dc5:
    if (*(code **)(*(long *)this + 0x128) == isStruct) {
      TVar3 = this[8];
      goto LAB_00107ddd;
    }
    cVar4 = (**(code **)(*(long *)this + 0x128))(this);
    if (cVar4 == '\0') {
      return 0;
    }
    pcVar6 = *(code **)(*(long *)param_1 + 0x128);
    if (pcVar6 != isStruct) goto LAB_001080b0;
  }
  else {
LAB_00107ddd:
    if (1 < (byte)((char)TVar3 - 0xfU)) {
      return 0;
    }
    pcVar6 = *(code **)(*(long *)param_1 + 0x128);
    if (pcVar6 != isStruct) {
LAB_001080b0:
      cVar4 = (*pcVar6)(param_1);
      if (cVar4 == '\0') {
        return 0;
      }
      goto LAB_00107e03;
    }
  }
  if (1 < (byte)((char)param_1[8] - 0xfU)) {
    return 0;
  }
LAB_00107e03:
  sVar1 = *(size_t *)(*(long *)(this + 0x78) + 0x10);
  if (sVar1 == *(size_t *)(*(long *)(param_1 + 0x78) + 0x10)) {
    plVar14 = *(long **)(*(long *)(this + 0x78) + 8);
    if (sVar1 == 0) {
      bVar2 = false;
    }
    else {
      iVar5 = memcmp(plVar14,*(void **)(*(long *)(param_1 + 0x78) + 8),sVar1);
      if (iVar5 != 0) {
        return 0;
      }
      bVar2 = false;
      if (sVar1 == 0xc) {
        if ((*plVar14 != 0x65567265505f6c67) || (bVar2 = false, (int)plVar14[1] != 0x78657472)) {
          bVar2 = true;
        }
        bVar2 = !bVar2;
      }
    }
    lVar9 = *(long *)(this + 0x68);
    lVar12 = *(long *)(lVar9 + 8);
    lVar16 = *(long *)(*(long *)(param_1 + 0x68) + 0x10);
    lVar7 = *(long *)(lVar9 + 0x10);
    lVar8 = *(long *)(*(long *)(param_1 + 0x68) + 8);
    if (((param_2 != (int *)0x0) || (lVar16 - lVar8 == lVar7 - lVar12)) || (bVar2)) {
      uVar10 = 0;
      uVar11 = 0;
LAB_00107ee0:
      uVar13 = lVar16 - lVar8 >> 5;
      if (uVar11 < (ulong)(lVar7 - lVar12 >> 5)) {
        if (param_2 != (int *)0x0) {
          *param_2 = (int)uVar11;
          *param_3 = (int)uVar10;
        }
        lVar15 = uVar11 * 0x20;
        if (uVar13 <= uVar10) {
          plVar14 = *(long **)(lVar12 + lVar15);
          pcVar6 = *(code **)(*plVar14 + 0x18);
          if (pcVar6 == hiddenMember) {
            if ((char)plVar14[1] == '\0') goto LAB_00108220;
            pcVar6 = *(code **)(*plVar14 + 0x30);
            if (pcVar6 == getFieldName_abi_cxx11_) goto LAB_001081bf;
LAB_00108310:
            lVar9 = (*pcVar6)();
            lVar12 = *(long *)(lVar9 + 0x10);
          }
          else {
            cVar4 = (*pcVar6)();
            if (cVar4 != '\0') goto LAB_001082a2;
            plVar14 = *(long **)(*(long *)(*(long *)(this + 0x68) + 8) + lVar15);
            pcVar6 = *(code **)(*plVar14 + 0x30);
            if (pcVar6 != getFieldName_abi_cxx11_) goto LAB_00108310;
LAB_001081bf:
            lVar9 = plVar14[0xe];
            lVar12 = *(long *)(lVar9 + 0x10);
          }
          if (lVar12 == 0x16) {
            plVar14 = *(long **)(lVar9 + 8);
            if ((*plVar14 != 0x6e6f6365535f6c67 || plVar14[1] != 0x69736f5079726164) ||
               (*(long *)((long)plVar14 + 0xe) != 0x564e6e6f69746973)) goto LAB_00108200;
          }
          else if ((lVar12 != 0x14) ||
                  ((plVar14 = *(long **)(lVar9 + 8),
                   *plVar14 != 0x7469736f505f6c67 || plVar14[1] != 0x69567265506e6f69 ||
                   ((int)plVar14[2] != 0x564e7765)))) {
LAB_00108200:
            if (param_2 == (int *)0x0) {
              return 0;
            }
            *param_3 = -1;
            return 0;
          }
          goto LAB_001082a2;
        }
        lVar16 = uVar10 * 0x20;
        pcVar6 = *(code **)(**(long **)(lVar8 + lVar16) + 0x30);
        if (pcVar6 == getFieldName_abi_cxx11_) {
          lVar7 = (*(long **)(lVar8 + lVar16))[0xe];
        }
        else {
          lVar7 = (*pcVar6)();
          lVar9 = *(long *)(this + 0x68);
          lVar12 = *(long *)(lVar9 + 8);
        }
        this_00 = *(TType **)(lVar12 + lVar15);
        if (*(code **)(*(long *)this_00 + 0x30) == getFieldName_abi_cxx11_) {
          lVar8 = *(long *)(this_00 + 0x70);
        }
        else {
          lVar8 = (**(code **)(*(long *)this_00 + 0x30))(this_00);
          lVar9 = *(long *)(this + 0x68);
          lVar12 = *(long *)(lVar9 + 8);
          this_00 = *(TType **)(lVar12 + lVar15);
        }
        sVar1 = *(size_t *)(lVar8 + 0x10);
        if (sVar1 == *(size_t *)(lVar7 + 0x10)) {
          if ((sVar1 == 0) ||
             (iVar5 = memcmp(*(void **)(lVar8 + 8),*(void **)(lVar7 + 8),sVar1), iVar5 == 0)) {
            cVar4 = operator==(this_00,*(TType **)
                                        (*(long *)(*(long *)(param_1 + 0x68) + 8) + lVar16));
            if (cVar4 == '\0') {
              return 0;
            }
            goto LAB_001082a2;
          }
        }
        if (*(code **)(*(long *)this_00 + 0x18) == hiddenMember) {
          if (this_00[8] != (TType)0x0) goto LAB_00107f8e;
LAB_00108460:
          lVar7 = *(long *)(lVar9 + 0x10);
          uVar11 = uVar11 + 1;
          lVar16 = *(long *)(*(long *)(param_1 + 0x68) + 0x10);
          lVar8 = *(long *)(*(long *)(param_1 + 0x68) + 8);
          goto LAB_00107ee0;
        }
        cVar4 = (**(code **)(*(long *)this_00 + 0x18))(this_00);
        if (cVar4 != '\0') {
          lVar9 = *(long *)(this + 0x68);
          lVar12 = *(long *)(lVar9 + 8);
          goto LAB_00108460;
        }
LAB_00107f8e:
        lVar12 = *(long *)(param_1 + 0x68);
        lVar8 = *(long *)(lVar12 + 8);
        pcVar6 = *(code **)(**(long **)(lVar8 + lVar16) + 0x18);
        if (pcVar6 == hiddenMember) {
          if ((char)(*(long **)(lVar8 + lVar16))[1] == '\0') {
LAB_00108520:
            lVar9 = *(long *)(this + 0x68);
            lVar16 = *(long *)(lVar12 + 0x10);
            uVar10 = uVar10 + 1;
            lVar7 = *(long *)(lVar9 + 0x10);
            lVar12 = *(long *)(lVar9 + 8);
            goto LAB_00107ee0;
          }
        }
        else {
          cVar4 = (*pcVar6)();
          if (cVar4 != '\0') {
            lVar12 = *(long *)(param_1 + 0x68);
            lVar8 = *(long *)(lVar12 + 8);
            goto LAB_00108520;
          }
        }
        if (!bVar2) {
          return 0;
        }
        plVar14 = *(long **)(*(long *)(*(long *)(this + 0x68) + 8) + lVar15);
        pcVar6 = *(code **)(*plVar14 + 0x30);
        if (pcVar6 == getFieldName_abi_cxx11_) {
          lVar9 = plVar14[0xe];
        }
        else {
          lVar9 = (*pcVar6)();
        }
        if (*(long *)(lVar9 + 0x10) == 0x16) {
          plVar14 = *(long **)(lVar9 + 8);
          if ((*plVar14 == 0x6e6f6365535f6c67 && plVar14[1] == 0x69736f5079726164) &&
             (*(long *)((long)plVar14 + 0xe) == 0x564e6e6f69746973)) goto LAB_001082aa;
LAB_00108028:
          lVar12 = *(long *)(param_1 + 0x68);
          lVar8 = *(long *)(lVar12 + 8);
          pcVar6 = *(code **)(**(long **)(lVar8 + lVar16) + 0x30);
          if (pcVar6 == getFieldName_abi_cxx11_) {
            lVar15 = (*(long **)(lVar8 + lVar16))[0xe];
          }
          else {
            lVar15 = (*pcVar6)();
            lVar12 = *(long *)(param_1 + 0x68);
            lVar8 = *(long *)(lVar12 + 8);
          }
          lVar9 = *(long *)(this + 0x68);
          uVar10 = uVar10 + 1;
          lVar16 = *(long *)(lVar12 + 0x10);
          lVar7 = *(long *)(lVar9 + 0x10);
          lVar12 = *(long *)(lVar9 + 8);
          if (*(long *)(lVar15 + 0x10) == 0x16) {
            plVar14 = *(long **)(lVar15 + 8);
            if ((*plVar14 == 0x6e6f6365535f6c67 && plVar14[1] == 0x69736f5079726164) &&
               (*(long *)((long)plVar14 + 0xe) == 0x564e6e6f69746973)) goto LAB_00107ee0;
          }
          else if ((*(long *)(lVar15 + 0x10) == 0x14) &&
                  ((plVar14 = *(long **)(lVar15 + 8),
                   *plVar14 == 0x7469736f505f6c67 && plVar14[1] == 0x69567265506e6f69 &&
                   ((int)plVar14[2] == 0x564e7765)))) goto LAB_00107ee0;
          uVar11 = uVar11 + 1;
          goto LAB_00107ee0;
        }
        if (((*(long *)(lVar9 + 0x10) != 0x14) ||
            (plVar14 = *(long **)(lVar9 + 8),
            *plVar14 != 0x7469736f505f6c67 || plVar14[1] != 0x69567265506e6f69)) ||
           ((int)plVar14[2] != 0x564e7765)) goto LAB_00108028;
      }
      else {
        if (uVar13 <= uVar10) {
          return 1;
        }
        if (param_2 != (int *)0x0) {
          *param_2 = (int)uVar11;
          *param_3 = (int)uVar10;
        }
        plVar14 = *(long **)(lVar8 + uVar10 * 0x20);
        pcVar6 = *(code **)(*plVar14 + 0x18);
        if (pcVar6 == hiddenMember) {
          if ((char)plVar14[1] == '\0') {
LAB_00108220:
            uVar11 = uVar11 + 1;
            uVar10 = uVar10 + 1;
            goto LAB_00107ee0;
          }
          pcVar6 = *(code **)(*plVar14 + 0x30);
          if (pcVar6 == getFieldName_abi_cxx11_) goto LAB_00108131;
LAB_001083c0:
          lVar9 = (*pcVar6)();
          lVar12 = *(long *)(lVar9 + 0x10);
        }
        else {
          cVar4 = (*pcVar6)();
          if (cVar4 != '\0') goto LAB_001082a2;
          plVar14 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 8) + uVar10 * 0x20);
          pcVar6 = *(code **)(*plVar14 + 0x30);
          if (pcVar6 != getFieldName_abi_cxx11_) goto LAB_001083c0;
LAB_00108131:
          lVar9 = plVar14[0xe];
          lVar12 = *(long *)(lVar9 + 0x10);
        }
        if (lVar12 == 0x16) {
          plVar14 = *(long **)(lVar9 + 8);
          if ((*plVar14 != 0x6e6f6365535f6c67 || plVar14[1] != 0x69736f5079726164) ||
             (*(long *)((long)plVar14 + 0xe) != 0x564e6e6f69746973)) goto LAB_00108178;
        }
        else if ((lVar12 != 0x14) ||
                ((plVar14 = *(long **)(lVar9 + 8),
                 *plVar14 != 0x7469736f505f6c67 || plVar14[1] != 0x69567265506e6f69 ||
                 ((int)plVar14[2] != 0x564e7765)))) {
LAB_00108178:
          if (param_2 == (int *)0x0) {
            return 0;
          }
          *param_2 = -1;
          return 0;
        }
LAB_001082a2:
        uVar10 = uVar10 + 1;
      }
LAB_001082aa:
      uVar11 = uVar11 + 1;
      lVar9 = *(long *)(this + 0x68);
      lVar7 = *(long *)(lVar9 + 0x10);
      lVar16 = *(long *)(*(long *)(param_1 + 0x68) + 0x10);
      lVar12 = *(long *)(lVar9 + 8);
      lVar8 = *(long *)(*(long *)(param_1 + 0x68) + 8);
      goto LAB_00107ee0;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void std::__detail::__to_chars_10_impl<unsigned int>(char*, unsigned int, unsigned int) */

void std::__detail::__to_chars_10_impl<unsigned_int>(char *param_1,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  char cStack_28;
  char acStack_27 [23];
  long local_10;
  
  uVar5 = param_2 - 1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = __LC6;
  uStack_e0 = _UNK_0010a388;
  local_d8 = __LC7;
  uStack_d0 = _UNK_0010a398;
  local_c8 = __LC8;
  uStack_c0 = _UNK_0010a3a8;
  local_b8 = __LC9;
  uStack_b0 = _UNK_0010a3b8;
  local_a8 = __LC10;
  uStack_a0 = _UNK_0010a3c8;
  local_98 = __LC11;
  uStack_90 = _UNK_0010a3d8;
  local_88 = __LC12;
  uStack_80 = _UNK_0010a3e8;
  local_78 = __LC13;
  uStack_70 = _UNK_0010a3f8;
  local_68 = __LC14;
  uStack_60 = _UNK_0010a408;
  local_58 = __LC15;
  uStack_50 = _UNK_0010a418;
  local_48 = __LC16;
  uStack_40 = _UNK_0010a428;
  local_38 = __LC17;
  uStack_30 = (undefined1)_UNK_0010a438;
  uStack_2f = (undefined7)_LC18._0_8_;
  cStack_28 = SUB81(_LC18._0_8_,7);
  acStack_27._0_8_ = _LC18._8_8_;
  uVar3 = (ulong)param_3;
  if (99 < param_3) {
    do {
      param_3 = (uint)(uVar3 / 100);
      uVar2 = (uint)uVar3;
      uVar4 = (uVar2 + param_3 * -100) * 2;
      cVar1 = *(char *)((long)&local_e8 + (ulong)uVar4);
      param_1[uVar5] = *(char *)((long)&local_e8 + (ulong)(uVar4 + 1));
      uVar4 = uVar5 - 1;
      uVar5 = uVar5 - 2;
      param_1[uVar4] = cVar1;
      uVar3 = uVar3 / 100;
    } while (9999 < uVar2);
  }
  cVar1 = (char)param_3 + '0';
  if (9 < param_3) {
    param_1[1] = *(char *)((long)&local_e8 + (ulong)(param_3 * 2 + 1));
    cVar1 = *(char *)((long)&local_e8 + (ulong)(param_3 * 2));
  }
  *param_1 = cVar1;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* bool glslang::TType::contains<glslang::TType::containsSampler() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsSampler() const::{lambda(glslang::TType const*)#1}) const */

bool glslang::TType::
     contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
               (long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0x168) == isTexture) {
    if ((char)param_1[1] == '\x0e') {
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        plVar4 = param_1 + 0x10;
      }
      else {
        plVar4 = (long *)(**(code **)(lVar2 + 0x40))();
      }
      if (((*plVar4 & 0x200000) == 0) && ((*plVar4 & 0x80000) == 0)) {
        return true;
      }
      goto LAB_00108cb0;
    }
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 != isImage) goto LAB_00108d00;
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x168))();
    if (cVar1 != '\0') {
      return true;
    }
LAB_00108cb0:
    lVar2 = *param_1;
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 == isImage) {
      if ((char)param_1[1] != '\x0e') goto LAB_00108c1f;
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        plVar4 = param_1 + 0x10;
      }
      else {
        plVar4 = (long *)(**(code **)(lVar2 + 0x40))(param_1);
      }
      if (((*plVar4 & 0x80000) != 0) && (1 < (byte)(*(char *)((long)plVar4 + 1) - 7U))) {
        return true;
      }
    }
    else {
LAB_00108d00:
      cVar1 = (*pcVar5)(param_1);
      if (cVar1 != '\0') {
        return true;
      }
    }
    lVar2 = *param_1;
  }
LAB_00108c1f:
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)param_1[1] - 0xfU) < 2) {
LAB_00108c51:
      lVar2 = *(long *)(param_1[0xd] + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(param_1[0xd] + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(param_1);
    if (cVar1 != '\0') goto LAB_00108c51;
  }
  return false;
}



/* glslang::TType::containsSampler() const */

bool __thiscall glslang::TType::containsSampler(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  TType *pTVar4;
  code *pcVar5;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0x168) == isTexture) {
    if (this[8] == (TType)0xe) {
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        pTVar4 = this + 0x80;
      }
      else {
        pTVar4 = (TType *)(**(code **)(lVar2 + 0x40))();
      }
      if ((((byte)pTVar4[2] & 0x20) == 0) && (((byte)pTVar4[2] & 8) == 0)) {
        return true;
      }
      goto LAB_00108e00;
    }
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 != isImage) goto LAB_00108e50;
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x168))();
    if (cVar1 != '\0') {
      return true;
    }
LAB_00108e00:
    lVar2 = *(long *)this;
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 == isImage) {
      if (this[8] != (TType)0xe) goto LAB_00108d6f;
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        pTVar4 = this + 0x80;
      }
      else {
        pTVar4 = (TType *)(**(code **)(lVar2 + 0x40))(this);
      }
      if ((((byte)pTVar4[2] & 8) != 0) && (1 < (byte)((char)pTVar4[1] - 7U))) {
        return true;
      }
    }
    else {
LAB_00108e50:
      cVar1 = (*pcVar5)(this);
      if (cVar1 != '\0') {
        return true;
      }
    }
    lVar2 = *(long *)this;
  }
LAB_00108d6f:
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00108da1:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_00108da1;
  }
  return false;
}



/* std::vector<glslang::TArraySize, glslang::pool_allocator<glslang::TArraySize>
   >::_M_default_append(unsigned long) */

void __thiscall
std::vector<glslang::TArraySize,glslang::pool_allocator<glslang::TArraySize>>::_M_default_append
          (vector<glslang::TArraySize,glslang::pool_allocator<glslang::TArraySize>> *this,
          ulong param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  if (param_1 == 0) {
    return;
  }
  puVar2 = *(undefined4 **)(this + 0x10);
  puVar10 = *(undefined4 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x18) - (long)puVar2 >> 4)) {
    puVar10 = puVar2;
    do {
      *puVar10 = 0;
      puVar11 = puVar10 + 4;
      *(undefined8 *)(puVar10 + 2) = 0;
      puVar10 = puVar11;
    } while (puVar11 != puVar2 + param_1 * 4);
    *(undefined4 **)(this + 0x10) = puVar11;
    return;
  }
  uVar4 = (long)puVar2 - (long)puVar10 >> 4;
  if (param_1 <= 0x7ffffffffffffff - uVar4) {
    uVar1 = param_1 + uVar4;
    uVar6 = 0x7ffffffffffffff;
    if (uVar1 < 0x800000000000000) {
      uVar6 = uVar1;
    }
    if ((param_1 <= uVar4) && (uVar6 = uVar4 * 2, 0x7ffffffffffffff < uVar6)) {
      uVar6 = 0x7ffffffffffffff;
    }
    lVar5 = glslang::TPoolAllocator::allocate(*(ulong *)this);
    puVar11 = (undefined4 *)(lVar5 + ((long)puVar2 - (long)puVar10));
    puVar7 = puVar11;
    do {
      *puVar7 = 0;
      puVar8 = puVar7 + 4;
      *(undefined8 *)(puVar7 + 2) = 0;
      puVar7 = puVar8;
    } while (puVar8 != puVar11 + param_1 * 4);
    lVar9 = 0;
    if (puVar10 != puVar2) {
      do {
        uVar3 = ((undefined8 *)((long)puVar10 + lVar9))[1];
        *(undefined8 *)(lVar5 + lVar9) = *(undefined8 *)((long)puVar10 + lVar9);
        ((undefined8 *)(lVar5 + lVar9))[1] = uVar3;
        lVar9 = lVar9 + 0x10;
      } while (lVar9 != (long)puVar2 - (long)puVar10);
    }
    *(long *)(this + 8) = lVar5;
    *(ulong *)(this + 0x10) = uVar1 * 0x10 + lVar5;
    *(ulong *)(this + 0x18) = lVar5 + uVar6 * 0x10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("vector::_M_default_append");
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TType::TType(glslang::TPublicType const&) */

void __thiscall glslang::TType::TType(TType *this,TPublicType *param_1)

{
  TPublicType TVar1;
  TPublicType TVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  char *__s;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong *puVar18;
  size_t __n;
  undefined4 *puVar19;
  ulong *__dest;
  long lVar20;
  byte bVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  
  TVar1 = param_1[0xb8];
  *(undefined ***)this = &PTR__TType_0010a1a8;
  TVar2 = param_1[0xb9];
  uVar3 = *(undefined4 *)param_1;
  *(undefined8 *)(this + 0x68) = 0;
  uVar8 = *(undefined8 *)(param_1 + 0xe8);
  uVar9 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(this + 0x70) = 0;
  this[8] = SUB41(uVar3,0);
  uVar23 = (byte)TVar2 >> 4 & 1;
  *(undefined8 *)(this + 0x88) = uVar8;
  *(undefined8 *)(this + 0x90) = uVar9;
  *(undefined8 *)(this + 0x78) = 0;
  bVar21 = (byte)TVar2 >> 5 & 1;
  *(uint *)(this + 8) =
       (uint)((byte)TVar1 >> 4) << 0xc | ((byte)TVar1 & 0xf) << 8 | ((byte)TVar2 & 0xf) << 0x10 |
       uVar23 << 0x15 | (uint)bVar21 << 0x16 | *(uint *)(this + 8) & 0xf80000ff;
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0xc0);
  if (SUB41(uVar3,0) == (TType)0xe) {
    *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 4);
  }
  else {
    *(uint *)(this + 0x80) = *(uint *)(this + 0x80) & 0x9fc00000;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  uVar14 = *(undefined8 *)(param_1 + 0x40);
  uVar15 = *(undefined8 *)(param_1 + 0x48);
  uVar16 = *(undefined8 *)(param_1 + 0x50);
  plVar5 = *(long **)(param_1 + 200);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x18) = uVar8;
  *(undefined8 *)(this + 0x20) = uVar9;
  *(undefined8 *)(this + 0x28) = uVar10;
  *(undefined8 *)(this + 0x30) = uVar11;
  *(undefined8 *)(this + 0x38) = uVar12;
  *(undefined8 *)(this + 0x40) = uVar13;
  *(undefined8 *)(this + 0x48) = uVar14;
  *(undefined8 *)(this + 0x50) = uVar15;
  *(undefined8 *)(this + 0x58) = uVar16;
  if (plVar5 == (long *)0x0) goto LAB_001091c1;
  lVar20 = plVar5[0xd];
  if ((char)plVar5[1] == '\x12') {
    this[8] = (TType)0x12;
    *(long *)(this + 0x68) = lVar20;
  }
  else {
    *(long *)(this + 0x68) = lVar20;
  }
  if (*(code **)(*plVar5 + 0x28) == getTypeName_abi_cxx11_) {
    lVar20 = plVar5[0xf];
  }
  else {
    lVar20 = (**(code **)(*plVar5 + 0x28))();
  }
  __s = *(char **)(lVar20 + 8);
  uVar17 = glslang::GetThreadPoolAllocator();
  puVar18 = (ulong *)glslang::TPoolAllocator::allocate(uVar17);
  uVar17 = glslang::GetThreadPoolAllocator();
  __dest = puVar18 + 3;
  *puVar18 = uVar17;
  puVar18[1] = (ulong)__dest;
  if (__s == (char *)0x0) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = strlen(__s);
  if (__n < 0x10) {
    if (__n == 1) {
      *(char *)(puVar18 + 3) = *__s;
    }
    else if (__n != 0) goto LAB_00109309;
  }
  else {
    __dest = (ulong *)glslang::TPoolAllocator::allocate(uVar17);
    puVar18[3] = __n;
    puVar18[1] = (ulong)__dest;
LAB_00109309:
    memcpy(__dest,__s,__n);
    __dest = (ulong *)puVar18[1];
  }
  puVar18[2] = __n;
  *(undefined1 *)((long)__dest + __n) = 0;
  TVar1 = param_1[0xb9];
  *(ulong **)(this + 0x78) = puVar18;
  bVar21 = (byte)TVar1 >> 5 & 1;
  uVar23 = (byte)TVar1 >> 4 & 1;
LAB_001091c1:
  if ((char)uVar23 == '\0') {
    if (bVar21 == 0) {
      return;
    }
    puVar19 = *(undefined4 **)(param_1 + 0xe8);
    if (puVar19 == (undefined4 *)0x0) {
      return;
    }
    lVar20 = *(long *)(*(long *)(puVar19 + 2) + 8);
    if (lVar20 == 0) {
      return;
    }
  }
  else {
    puVar19 = *(undefined4 **)(param_1 + 0xe8);
    if (puVar19 == (undefined4 *)0x0) {
      return;
    }
    lVar20 = *(long *)(*(long *)(puVar19 + 2) + 8);
    if (lVar20 == 0) {
      return;
    }
    if ((int)(*(long *)(lVar20 + 0x10) - (long)*(int **)(lVar20 + 8) >> 4) < 1) {
      return;
    }
    iVar22 = *(int *)param_1;
    iVar4 = **(int **)(lVar20 + 8);
    if (iVar22 == 1) {
      if (iVar4 == 0x10) {
        this[0x1b] = (TType)((byte)this[0x1b] & 0xf1);
        this[8] = (TType)0x3;
      }
    }
    else if (iVar22 == 9) {
      if (iVar4 == 8) {
        this[0x1b] = (TType)((byte)this[0x1b] & 0xf1);
        this[8] = (TType)0x5;
      }
      else if (iVar4 == 0x10) {
        this[0x1b] = (TType)((byte)this[0x1b] & 0xf1);
        this[8] = (TType)0x7;
      }
    }
    else if (iVar22 == 8) {
      if (iVar4 == 8) {
        this[0x1b] = (TType)((byte)this[0x1b] & 0xf1);
        this[8] = (TType)0x4;
      }
      else if (iVar4 == 0x10) {
        this[0x1b] = (TType)((byte)this[0x1b] & 0xf1);
        this[8] = (TType)0x6;
      }
    }
    if (bVar21 == 0) {
      return;
    }
  }
  lVar6 = *(long *)(lVar20 + 0x10);
  lVar7 = *(long *)(lVar20 + 8);
  lVar24 = lVar6 - lVar7;
  iVar22 = (int)(lVar24 >> 4);
  if (0 < iVar22) {
    uVar3 = *puVar19;
    this[8] = SUB41(uVar3,0);
    if (SUB41(uVar3,0) == (TType)0x16) {
      *(undefined8 *)(this + 0x90) = *(undefined8 *)(puVar19 + 4);
    }
    if (iVar22 == 4) {
      *(ushort *)(this + 10) =
           (ushort)((*(uint *)(lVar7 + 0x30) & 7) << 7) | 0x400 | *(ushort *)(this + 10) & 0xf87f;
      lVar24 = lVar7 + -0x10 + lVar24;
      if (lVar6 != lVar24) {
        *(long *)(lVar20 + 0x10) = lVar24;
      }
    }
  }
  return;
}



/* std::pair<std::_Rb_tree_iterator<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >, bool> std::_Rb_tree<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >,
   std::_Identity<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   glslang::pool_allocator<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >::_M_insert_unique<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&>(std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
::
_M_insert_unique<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const&>
          (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
           *this,basic_string *param_1)

{
  _Rb_tree_node_base *__src;
  uint uVar1;
  int iVar2;
  _Rb_tree_node_base *p_Var3;
  ulong uVar4;
  _Rb_tree_node_base *p_Var5;
  ulong uVar6;
  _Rb_tree_node_base *__dest;
  ulong uVar7;
  undefined1 uVar8;
  long lVar9;
  void *__s2;
  _Rb_tree_node_base *p_Var10;
  ulong uVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  void *local_58;
  
  p_Var3 = (_Rb_tree_node_base *)(this + 0x10);
  if (*(_Rb_tree_node_base **)(this + 0x18) == (_Rb_tree_node_base *)0x0) {
    p_Var10 = p_Var3;
    if (*(_Rb_tree_node_base **)(this + 0x20) != p_Var3) {
      local_58 = *(void **)(param_1 + 8);
      uVar11 = *(ulong *)(param_1 + 0x10);
LAB_00109577:
      p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var10);
      uVar6 = *(ulong *)(p_Var5 + 0x30);
      __s2 = *(void **)(p_Var5 + 0x28);
      uVar7 = uVar6;
      if (uVar11 <= uVar6) {
        uVar7 = uVar11;
      }
LAB_00109480:
      if ((uVar7 == 0) || (iVar2 = memcmp(__s2,local_58,uVar7), iVar2 == 0)) {
        lVar9 = uVar6 - uVar11;
        if (0x7fffffff < lVar9) {
          uVar8 = 0;
          goto LAB_001094bc;
        }
        if (lVar9 < -0x80000000) goto LAB_001094d8;
        iVar2 = (int)lVar9;
      }
      uVar8 = 0;
      if (-1 < iVar2) goto LAB_001094bc;
      goto LAB_001094d8;
    }
LAB_0010966e:
    bVar12 = true;
  }
  else {
    local_58 = *(void **)(param_1 + 8);
    uVar11 = *(ulong *)(param_1 + 0x10);
    p_Var5 = *(_Rb_tree_node_base **)(this + 0x18);
    do {
      p_Var10 = p_Var5;
      uVar6 = *(ulong *)(p_Var10 + 0x30);
      __s2 = *(void **)(p_Var10 + 0x28);
      uVar7 = uVar6;
      if (uVar11 <= uVar6) {
        uVar7 = uVar11;
      }
      if (uVar7 == 0) {
LAB_0010944b:
        uVar4 = uVar11 - uVar6;
        if ((long)uVar4 < 0x80000000) {
          if (-0x80000001 < (long)uVar4) goto LAB_00109465;
          goto LAB_00109410;
        }
LAB_00109469:
        p_Var5 = *(_Rb_tree_node_base **)(p_Var10 + 0x18);
        bVar12 = false;
      }
      else {
        uVar1 = memcmp(local_58,__s2,uVar7);
        uVar4 = (ulong)uVar1;
        if (uVar1 == 0) goto LAB_0010944b;
LAB_00109465:
        if (-1 < (int)uVar4) goto LAB_00109469;
LAB_00109410:
        p_Var5 = *(_Rb_tree_node_base **)(p_Var10 + 0x10);
        bVar12 = true;
      }
    } while (p_Var5 != (_Rb_tree_node_base *)0x0);
    p_Var5 = p_Var10;
    if (!bVar12) goto LAB_00109480;
    if (*(_Rb_tree_node_base **)(this + 0x20) != p_Var10) goto LAB_00109577;
LAB_001094d8:
    bVar12 = true;
    if (p_Var3 != p_Var10) {
      uVar6 = *(ulong *)(p_Var10 + 0x30);
      uVar7 = uVar6;
      if (uVar11 <= uVar6) {
        uVar7 = uVar11;
      }
      if (uVar7 == 0) {
LAB_00109606:
        uVar7 = uVar11 - uVar6;
        bVar12 = false;
        if (0x7fffffff < (long)uVar7) goto LAB_001094e9;
        if ((long)uVar7 < -0x80000000) goto LAB_0010966e;
      }
      else {
        uVar1 = memcmp(local_58,*(void **)(p_Var10 + 0x28),uVar7);
        uVar7 = (ulong)uVar1;
        if (uVar1 == 0) goto LAB_00109606;
      }
      bVar12 = (bool)((byte)(uVar7 >> 0x1f) & 1);
    }
  }
LAB_001094e9:
  p_Var5 = (_Rb_tree_node_base *)glslang::TPoolAllocator::allocate(*(ulong *)this);
  uVar6 = glslang::GetThreadPoolAllocator();
  __dest = p_Var5 + 0x38;
  *(_Rb_tree_node_base **)(p_Var5 + 0x28) = __dest;
  uVar11 = *(ulong *)(param_1 + 0x10);
  __src = *(_Rb_tree_node_base **)(param_1 + 8);
  *(ulong *)(p_Var5 + 0x20) = uVar6;
  if (uVar11 < 0x10) {
    if (uVar11 == 1) {
      p_Var5[0x38] = *__src;
    }
    else if (uVar11 != 0) goto LAB_001095c0;
  }
  else {
    if ((long)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    __dest = (_Rb_tree_node_base *)glslang::TPoolAllocator::allocate(uVar6);
    *(ulong *)(p_Var5 + 0x38) = uVar11;
    *(_Rb_tree_node_base **)(p_Var5 + 0x28) = __dest;
LAB_001095c0:
    memcpy(__dest,__src,uVar11);
    __dest = *(_Rb_tree_node_base **)(p_Var5 + 0x28);
  }
  *(ulong *)(p_Var5 + 0x30) = uVar11;
  __dest[uVar11] = (_Rb_tree_node_base)0x0;
  std::_Rb_tree_insert_and_rebalance(bVar12,p_Var5,p_Var10,p_Var3);
  uVar8 = 1;
  *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
LAB_001094bc:
  auVar13[8] = uVar8;
  auVar13._0_8_ = p_Var5;
  auVar13._9_7_ = 0;
  return auVar13;
}



/* std::pair<std::_Rb_tree_iterator<int>, bool> std::_Rb_tree<int, int, std::_Identity<int>,
   std::less<int>, glslang::pool_allocator<int> >::_M_insert_unique<int>(int&&) */

undefined1  [16] __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,glslang::pool_allocator<int>>::
_M_insert_unique<int>
          (_Rb_tree<int,int,std::_Identity<int>,std::less<int>,glslang::pool_allocator<int>> *this,
          int *param_1)

{
  uint uVar1;
  _Rb_tree_node_base *p_Var2;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  bool local_3c;
  _Rb_tree_node_base *p_Var3;
  
  uVar1 = *param_1;
  auVar5 = _M_get_insert_unique_pos(this,(int *)(ulong)uVar1);
  p_Var3 = auVar5._8_8_;
  p_Var2 = auVar5._0_8_;
  if (p_Var3 == (_Rb_tree_node_base *)0x0) {
    uVar4 = 0;
  }
  else {
    local_3c = true;
    if ((p_Var2 == (_Rb_tree_node_base *)0x0) && (p_Var3 != (_Rb_tree_node_base *)(this + 0x10))) {
      local_3c = (int)uVar1 < *(int *)(p_Var3 + 0x20);
    }
    p_Var2 = (_Rb_tree_node_base *)glslang::TPoolAllocator::allocate(*(ulong *)this);
    *(int *)(p_Var2 + 0x20) = *param_1;
    std::_Rb_tree_insert_and_rebalance(local_3c,p_Var2,p_Var3,(_Rb_tree_node_base *)(this + 0x10));
    *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
    uVar4 = 1;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = p_Var2;
  return auVar5;
}



/* void std::vector<glslang::TIntermConstantUnion const*,
   glslang::pool_allocator<glslang::TIntermConstantUnion const*>
   >::_M_realloc_insert<glslang::TIntermConstantUnion const*
   const&>(__gnu_cxx::__normal_iterator<glslang::TIntermConstantUnion const**,
   std::vector<glslang::TIntermConstantUnion const*,
   glslang::pool_allocator<glslang::TIntermConstantUnion const*> > >, glslang::TIntermConstantUnion
   const* const&) */

void __thiscall
std::
vector<glslang::TIntermConstantUnion_const*,glslang::pool_allocator<glslang::TIntermConstantUnion_const*>>
::_M_realloc_insert<glslang::TIntermConstantUnion_const*const&>
          (vector<glslang::TIntermConstantUnion_const*,glslang::pool_allocator<glslang::TIntermConstantUnion_const*>>
           *this,long param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = *(long *)(this + 0x10);
  lVar3 = *(long *)(this + 8);
  uVar2 = lVar1 - lVar3 >> 3;
  if (uVar2 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (lVar3 == lVar1) {
    uVar5 = uVar2 + 1;
    if (0xfffffffffffffffe < uVar2) goto LAB_00109830;
    if (0xfffffffffffffff < uVar5) {
      uVar5 = 0xfffffffffffffff;
    }
    lVar7 = uVar5 * 8;
LAB_0010983a:
    lVar4 = glslang::TPoolAllocator::allocate(*(ulong *)this);
    lVar7 = lVar4 + lVar7;
    lVar6 = lVar4 + 8;
    *(undefined8 *)(lVar4 + (param_2 - lVar3)) = *param_3;
    if (param_2 != lVar3) {
LAB_001097c9:
      lVar6 = 0;
      do {
        *(undefined8 *)(lVar4 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
        lVar6 = lVar6 + 8;
      } while (lVar6 != param_2 - lVar3);
      lVar6 = lVar4 + 8 + lVar6;
    }
    if (param_2 == lVar1) goto LAB_00109814;
  }
  else {
    uVar5 = uVar2 * 2;
    if (uVar5 < uVar2) {
LAB_00109830:
      lVar7 = 0x7ffffffffffffff8;
      goto LAB_0010983a;
    }
    if (uVar5 != 0) {
      if (0xfffffffffffffff < uVar5) {
        uVar5 = 0xfffffffffffffff;
      }
      lVar7 = uVar5 * 8;
      goto LAB_0010983a;
    }
    lVar4 = 0;
    lVar7 = 0;
    lVar6 = 8;
    *(undefined8 *)(param_2 - lVar3) = *param_3;
    if (param_2 != lVar3) goto LAB_001097c9;
  }
  lVar3 = 0;
  do {
    *(undefined8 *)(lVar6 + lVar3) = *(undefined8 *)(param_2 + lVar3);
    lVar3 = lVar3 + 8;
  } while (lVar3 != lVar1 - param_2);
  lVar6 = lVar6 + lVar3;
LAB_00109814:
  *(long *)(this + 8) = lVar4;
  *(long *)(this + 0x10) = lVar6;
  *(long *)(this + 0x18) = lVar7;
  return;
}



/* void std::vector<glslang::TIntermTyped const*, glslang::pool_allocator<glslang::TIntermTyped
   const*> >::_M_realloc_insert<glslang::TIntermTyped const*
   const&>(__gnu_cxx::__normal_iterator<glslang::TIntermTyped const**,
   std::vector<glslang::TIntermTyped const*, glslang::pool_allocator<glslang::TIntermTyped const*> >
   >, glslang::TIntermTyped const* const&) */

void __thiscall
std::vector<glslang::TIntermTyped_const*,glslang::pool_allocator<glslang::TIntermTyped_const*>>::
_M_realloc_insert<glslang::TIntermTyped_const*const&>
          (vector<glslang::TIntermTyped_const*,glslang::pool_allocator<glslang::TIntermTyped_const*>>
           *this,long param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = *(long *)(this + 0x10);
  lVar3 = *(long *)(this + 8);
  uVar2 = lVar1 - lVar3 >> 3;
  if (uVar2 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (lVar3 == lVar1) {
    uVar5 = uVar2 + 1;
    if (0xfffffffffffffffe < uVar2) goto LAB_001099a0;
    if (0xfffffffffffffff < uVar5) {
      uVar5 = 0xfffffffffffffff;
    }
    lVar7 = uVar5 * 8;
LAB_001099aa:
    lVar4 = glslang::TPoolAllocator::allocate(*(ulong *)this);
    lVar7 = lVar4 + lVar7;
    lVar6 = lVar4 + 8;
    *(undefined8 *)(lVar4 + (param_2 - lVar3)) = *param_3;
    if (param_2 != lVar3) {
LAB_00109939:
      lVar6 = 0;
      do {
        *(undefined8 *)(lVar4 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
        lVar6 = lVar6 + 8;
      } while (lVar6 != param_2 - lVar3);
      lVar6 = lVar4 + 8 + lVar6;
    }
    if (param_2 == lVar1) goto LAB_00109984;
  }
  else {
    uVar5 = uVar2 * 2;
    if (uVar5 < uVar2) {
LAB_001099a0:
      lVar7 = 0x7ffffffffffffff8;
      goto LAB_001099aa;
    }
    if (uVar5 != 0) {
      if (0xfffffffffffffff < uVar5) {
        uVar5 = 0xfffffffffffffff;
      }
      lVar7 = uVar5 * 8;
      goto LAB_001099aa;
    }
    lVar4 = 0;
    lVar7 = 0;
    lVar6 = 8;
    *(undefined8 *)(param_2 - lVar3) = *param_3;
    if (param_2 != lVar3) goto LAB_00109939;
  }
  lVar3 = 0;
  do {
    *(undefined8 *)(lVar6 + lVar3) = *(undefined8 *)(param_2 + lVar3);
    lVar3 = lVar3 + 8;
  } while (lVar3 != lVar1 - param_2);
  lVar6 = lVar6 + lVar3;
LAB_00109984:
  *(long *)(this + 8) = lVar4;
  *(long *)(this + 0x10) = lVar6;
  *(long *)(this + 0x18) = lVar7;
  return;
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_mutate(unsigned long, unsigned long, char const*, unsigned long) */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3,ulong param_4)

{
  undefined1 *__dest;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  size_t __n;
  undefined1 *__src;
  
  uVar3 = (param_4 - param_2) + *(long *)(this + 0x10);
  __n = *(long *)(this + 0x10) - (param_1 + param_2);
  if (*(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8) ==
      this + 0x18) {
    uVar1 = 0xf;
  }
  else {
    uVar1 = *(ulong *)(this + 0x18);
  }
  if (-1 < (long)uVar3) {
    if (uVar1 < uVar3) {
      uVar1 = uVar1 * 2;
      uVar2 = 0x7fffffffffffffff;
      if (uVar1 < 0x8000000000000000) {
        uVar2 = uVar1;
      }
      if (uVar3 < uVar1) {
        uVar3 = uVar2;
      }
    }
    __dest = (undefined1 *)glslang::TPoolAllocator::allocate(*(ulong *)this);
    if (param_1 != 0) {
      if (param_1 == 1) {
        *__dest = **(undefined1 **)(this + 8);
      }
      else {
        __dest = (undefined1 *)memcpy(__dest,*(undefined1 **)(this + 8),param_1);
      }
    }
    if ((param_3 != (char *)0x0) && (param_4 != 0)) {
      if (param_4 == 1) {
        __dest[param_1] = *param_3;
      }
      else {
        memcpy(__dest + param_1,param_3,param_4);
      }
    }
    if (__n != 0) {
      __src = (undefined1 *)(param_1 + param_2 + *(long *)(this + 8));
      if (__n == 1) {
        __dest[param_1 + param_4] = *__src;
      }
      else {
        memcpy(__dest + param_1 + param_4,__src,__n);
      }
    }
    *(undefined1 **)(this + 8) = __dest;
    *(ulong *)(this + 0x18) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("basic_string::_M_create");
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_assign(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          basic_string *param_1)

{
  ulong __n;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *__dest;
  ulong uVar1;
  ulong uVar2;
  
  if (this == (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1) {
    return;
  }
  __dest = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8);
  __n = *(ulong *)(param_1 + 0x10);
  if (__dest == this + 0x18) {
    uVar1 = 0xf;
  }
  else {
    uVar1 = *(ulong *)(this + 0x18);
  }
  if (uVar1 < __n) {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    uVar1 = uVar1 * 2;
    uVar2 = 0x7fffffffffffffff;
    if (uVar1 < 0x8000000000000000) {
      uVar2 = uVar1;
    }
    if (uVar1 <= __n) {
      uVar2 = __n;
    }
    __dest = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
             glslang::TPoolAllocator::allocate(*(ulong *)this);
    *(ulong *)(this + 0x18) = uVar2;
    *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8) = __dest
    ;
  }
  else if (__n == 0) goto LAB_00109bcc;
  if (__n == 1) {
    *__dest = **(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                (param_1 + 8);
    __dest = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8)
    ;
  }
  else {
    memcpy(__dest,*(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                   (param_1 + 8),__n);
    __dest = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8)
    ;
  }
LAB_00109bcc:
  *(ulong *)(this + 0x10) = __n;
  __dest[__n] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
  return;
}



/* void std::vector<glslang::TSpirvTypeParameter,
   glslang::pool_allocator<glslang::TSpirvTypeParameter>
   >::_M_realloc_insert<glslang::TSpirvTypeParameter>(__gnu_cxx::__normal_iterator<glslang::TSpirvTypeParameter*,
   std::vector<glslang::TSpirvTypeParameter, glslang::pool_allocator<glslang::TSpirvTypeParameter> >
   >, glslang::TSpirvTypeParameter&&) */

void __thiscall
std::vector<glslang::TSpirvTypeParameter,glslang::pool_allocator<glslang::TSpirvTypeParameter>>::
_M_realloc_insert<glslang::TSpirvTypeParameter>
          (vector<glslang::TSpirvTypeParameter,glslang::pool_allocator<glslang::TSpirvTypeParameter>>
           *this,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  lVar1 = *(long *)(this + 0x10);
  lVar9 = *(long *)(this + 8);
  uVar3 = lVar1 - lVar9 >> 4;
  if (uVar3 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar8 = (undefined8 *)(param_2 - lVar9);
  if (lVar9 == lVar1) {
    if (0xfffffffffffffffe < uVar3) goto LAB_00109d90;
    uVar6 = 0x7ffffffffffffff;
    if (uVar3 + 1 < 0x800000000000000) {
      uVar6 = uVar3 + 1;
    }
    lVar7 = uVar6 << 4;
LAB_00109d9a:
    lVar4 = glslang::TPoolAllocator::allocate(*(ulong *)this);
    uVar2 = param_3[1];
    lVar7 = lVar4 + lVar7;
    lVar5 = lVar4 + 0x10;
    *(undefined8 *)(lVar4 + (long)puVar8) = *param_3;
    ((undefined8 *)(lVar4 + (long)puVar8))[1] = uVar2;
    if (param_2 != lVar9) {
LAB_00109d2b:
      lVar5 = 0;
      do {
        uVar2 = ((undefined8 *)(lVar9 + lVar5))[1];
        *(undefined8 *)(lVar4 + lVar5) = *(undefined8 *)(lVar9 + lVar5);
        ((undefined8 *)(lVar4 + lVar5))[1] = uVar2;
        lVar5 = lVar5 + 0x10;
      } while (lVar5 != param_2 - lVar9);
      lVar5 = lVar4 + 0x10 + lVar5;
    }
    if (param_2 == lVar1) goto LAB_00109d75;
  }
  else {
    uVar6 = uVar3 * 2;
    if (uVar6 < uVar3) {
LAB_00109d90:
      lVar7 = 0x7ffffffffffffff0;
      goto LAB_00109d9a;
    }
    if (uVar6 != 0) {
      if (0x7ffffffffffffff < uVar6) {
        uVar6 = 0x7ffffffffffffff;
      }
      lVar7 = uVar6 << 4;
      goto LAB_00109d9a;
    }
    uVar2 = param_3[1];
    lVar4 = 0;
    lVar7 = 0;
    lVar5 = 0x10;
    *puVar8 = *param_3;
    puVar8[1] = uVar2;
    if (param_2 != lVar9) goto LAB_00109d2b;
  }
  lVar9 = 0;
  do {
    uVar2 = ((undefined8 *)(param_2 + lVar9))[1];
    *(undefined8 *)(lVar5 + lVar9) = *(undefined8 *)(param_2 + lVar9);
    ((undefined8 *)(lVar5 + lVar9))[1] = uVar2;
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != lVar1 - param_2);
  lVar5 = lVar5 + lVar9;
LAB_00109d75:
  *(long *)(this + 8) = lVar4;
  *(long *)(this + 0x10) = lVar5;
  *(long *)(this + 0x18) = lVar7;
  return;
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_replace_cold(char*, unsigned long, char const*, unsigned long, unsigned long) */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
_M_replace_cold(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
               char *param_1,ulong param_2,char *param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  char *pcVar2;
  size_t __n;
  byte bVar3;
  
  bVar3 = 0;
  if (param_4 - 1 < param_2) {
    if (param_4 == 1) {
      *param_1 = *param_3;
    }
    else {
      memmove(param_1,param_3,param_4);
    }
  }
  if ((param_5 != 0) && (param_4 != param_2)) {
    if (param_5 == 1) {
      param_1[param_4] = param_1[param_2];
    }
    else {
      memmove(param_1 + param_4,param_1 + param_2,param_5);
    }
  }
  if (param_2 < param_4) {
    pcVar2 = param_1 + param_2;
    if (pcVar2 < param_3 + param_4) {
      if (param_3 < pcVar2) {
        __n = (long)pcVar2 - (long)param_3;
        if (__n == 1) {
          *param_1 = *param_3;
        }
        else {
          memmove(param_1,param_3,__n);
        }
        pcVar2 = param_1 + param_4;
        param_1 = param_1 + __n;
        lVar1 = param_4 - __n;
        if (lVar1 != 1) {
          if (lVar1 == 0) {
            return;
          }
          for (; lVar1 != 0; lVar1 = lVar1 + -1) {
            *param_1 = *pcVar2;
            pcVar2 = pcVar2 + (ulong)bVar3 * -2 + 1;
            param_1 = param_1 + (ulong)bVar3 * -2 + 1;
          }
          return;
        }
      }
      else {
        pcVar2 = param_3 + (param_4 - param_2);
        if (param_4 != 1) {
          for (; param_4 != 0; param_4 = param_4 - 1) {
            *param_1 = *pcVar2;
            pcVar2 = pcVar2 + (ulong)bVar3 * -2 + 1;
            param_1 = param_1 + (ulong)bVar3 * -2 + 1;
          }
          return;
        }
      }
      *param_1 = *pcVar2;
    }
    else {
      if (param_4 != 1) {
        memmove(param_1,param_3,param_4);
        return;
      }
      *param_1 = *param_3;
    }
  }
  return;
}



/* glslang::TSpirvInstruction::TSpirvInstruction() */

void __thiscall glslang::TSpirvInstruction::TSpirvInstruction(TSpirvInstruction *this)

{
  undefined8 uVar1;
  TSpirvInstruction *pTVar2;
  
  uVar1 = glslang::GetThreadPoolAllocator();
  pTVar2 = this + 0x18;
  this[0x18] = (TSpirvInstruction)0x0;
  *(undefined8 *)this = uVar1;
  *(TSpirvInstruction **)(this + 8) = pTVar2;
  *(undefined8 *)(this + 0x10) = 0;
  if (pTVar2 == (TSpirvInstruction *)&_LC23) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
    _M_replace_cold((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)this,
                    "",0,"",0,0);
    pTVar2 = *(TSpirvInstruction **)(this + 8);
  }
  *(undefined8 *)(this + 0x10) = 0;
  *pTVar2 = (TSpirvInstruction)0x0;
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  return;
}



/* std::_Rb_tree_node<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >* std::_Rb_tree<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >,
   std::_Identity<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   glslang::pool_allocator<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >
   >::_Reuse_or_alloc_node::TEMPNAMEPLACEHOLDERVALUE(std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&) */

_Rb_tree_node * __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
::_Reuse_or_alloc_node::operator()(_Reuse_or_alloc_node *this,basic_string *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  _Rb_tree_node *p_Var4;
  _Rb_tree_node *p_Var5;
  _Rb_tree_node *p_Var6;
  long lVar7;
  
  p_Var6 = *(_Rb_tree_node **)(this + 8);
  if (p_Var6 == (_Rb_tree_node *)0x0) {
    p_Var5 = (_Rb_tree_node *)glslang::TPoolAllocator::allocate(**(ulong **)(this + 0x10));
    uVar3 = glslang::GetThreadPoolAllocator();
    p_Var6 = p_Var5 + 0x38;
    *(_Rb_tree_node **)(p_Var5 + 0x28) = p_Var6;
    p_Var4 = *(_Rb_tree_node **)(param_1 + 8);
    uVar2 = *(ulong *)(param_1 + 0x10);
    *(ulong *)(p_Var5 + 0x20) = uVar3;
    if (uVar2 < 0x10) {
      if (uVar2 == 1) {
        p_Var5[0x38] = *p_Var4;
        goto LAB_0010a0fe;
      }
      if (uVar2 == 0) goto LAB_0010a0fe;
    }
    else {
      if ((long)uVar2 < 0) goto LAB_0010a155;
      p_Var6 = (_Rb_tree_node *)glslang::TPoolAllocator::allocate(uVar3);
      *(ulong *)(p_Var5 + 0x38) = uVar2;
      *(_Rb_tree_node **)(p_Var5 + 0x28) = p_Var6;
    }
    memcpy(p_Var6,p_Var4,uVar2);
    p_Var6 = *(_Rb_tree_node **)(p_Var5 + 0x28);
LAB_0010a0fe:
    *(ulong *)(p_Var5 + 0x30) = uVar2;
    p_Var6[uVar2] = (_Rb_tree_node)0x0;
    return p_Var5;
  }
  lVar1 = *(long *)(p_Var6 + 8);
  *(long *)(this + 8) = lVar1;
  if (lVar1 == 0) {
    *(undefined8 *)this = 0;
  }
  else if (p_Var6 == *(_Rb_tree_node **)(lVar1 + 0x18)) {
    lVar7 = *(long *)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x18) = 0;
    if (lVar7 != 0) {
      lVar1 = *(long *)(lVar7 + 0x18);
      *(long *)(this + 8) = lVar7;
      if (lVar1 != 0) {
        do {
          lVar7 = lVar1;
          lVar1 = *(long *)(lVar7 + 0x18);
        } while (*(long *)(lVar7 + 0x18) != 0);
        *(long *)(this + 8) = lVar7;
      }
      if (*(long *)(lVar7 + 0x10) != 0) {
        *(long *)(this + 8) = *(long *)(lVar7 + 0x10);
      }
    }
  }
  else {
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  uVar3 = glslang::GetThreadPoolAllocator();
  p_Var4 = p_Var6 + 0x38;
  *(_Rb_tree_node **)(p_Var6 + 0x28) = p_Var4;
  p_Var5 = *(_Rb_tree_node **)(param_1 + 8);
  uVar2 = *(ulong *)(param_1 + 0x10);
  *(ulong *)(p_Var6 + 0x20) = uVar3;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      p_Var6[0x38] = *p_Var5;
      goto LAB_00109ffb;
    }
    if (uVar2 == 0) goto LAB_00109ffb;
  }
  else {
    if ((long)uVar2 < 0) {
LAB_0010a155:
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    p_Var4 = (_Rb_tree_node *)glslang::TPoolAllocator::allocate(uVar3);
    *(ulong *)(p_Var6 + 0x38) = uVar2;
    *(_Rb_tree_node **)(p_Var6 + 0x28) = p_Var4;
  }
  memcpy(p_Var4,p_Var5,uVar2);
  p_Var4 = *(_Rb_tree_node **)(p_Var6 + 0x28);
LAB_00109ffb:
  *(ulong *)(p_Var6 + 0x30) = uVar2;
  p_Var4[uVar2] = (_Rb_tree_node)0x0;
  return p_Var6;
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TType::TType(glslang::TPublicType const&) */

void __thiscall glslang::TType::TType(TType *this,TPublicType *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TSpirvInstruction::TSpirvInstruction() */

void __thiscall glslang::TSpirvInstruction::TSpirvInstruction(TSpirvInstruction *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TType::~TType() */

void __thiscall glslang::TType::~TType(TType *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



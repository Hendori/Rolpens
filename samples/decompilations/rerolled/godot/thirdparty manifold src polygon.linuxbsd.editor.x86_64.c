/* std::_Function_handler<void (__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >), (anonymous
   namespace)::EarClip::FindStart(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> >
   >)::{lambda(__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >)#1}>::_M_invoke(std::_Any_data const&,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*, std::vector<(anonymous
   namespace)::EarClip::Vert, std::allocator<(anonymous namespace)::EarClip::Vert> > >&&) */

void std::
     _Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::FindStart(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
     ::_M_invoke(_Any_data *param_1,__normal_iterator *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  puVar1 = *(undefined8 **)param_1;
  lVar2 = *(long *)param_2;
  pdVar3 = (double *)*puVar1;
  dVar5 = *(double *)(lVar2 + 0x18);
  dVar6 = *(double *)(lVar2 + 0x20);
  pdVar4 = (double *)puVar1[1];
  dVar7 = *pdVar3;
  if (dVar5 <= *pdVar3) {
    dVar7 = dVar5;
  }
  dVar8 = pdVar3[1];
  if (dVar6 <= pdVar3[1]) {
    dVar8 = dVar6;
  }
  if (dVar5 <= pdVar3[2]) {
    dVar5 = pdVar3[2];
  }
  if (dVar6 <= pdVar3[3]) {
    dVar6 = pdVar3[3];
  }
  *pdVar3 = dVar7;
  pdVar3[1] = dVar8;
  pdVar3[2] = dVar5;
  pdVar3[3] = dVar6;
  dVar5 = *pdVar4;
  dVar6 = pdVar4[1];
  pdVar3 = (double *)puVar1[2];
  dVar6 = (*(double *)(*(long *)(lVar2 + 0x40) + 0x20) - dVar6) *
          (*(double *)(lVar2 + 0x18) - dVar5) -
          (*(double *)(*(long *)(lVar2 + 0x40) + 0x18) - dVar5) *
          (*(double *)(lVar2 + 0x20) - dVar6);
  dVar5 = *pdVar3;
  dVar7 = dVar6 + dVar5;
  *(double *)puVar1[3] = (dVar5 - dVar7) + dVar6 + *(double *)puVar1[3];
  *pdVar3 = dVar7;
  pdVar3 = (double *)puVar1[4];
  dVar5 = *(double *)(lVar2 + 0x18);
  if (*pdVar3 <= dVar5 && dVar5 != *pdVar3) {
    *pdVar3 = dVar5;
    *(long *)puVar1[5] = lVar2;
  }
  return;
}



/* std::_Rb_tree<__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >, std::pair<__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > > const, manifold::Rect>,
   std::_Select1st<std::pair<__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > > const, manifold::Rect> >,
   std::less<__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > > >,
   std::allocator<std::pair<__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > > const, manifold::Rect> >
   >::_M_get_insert_unique_pos(__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > > const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::pair<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const,manifold::Rect>,std::_Select1st<std::pair<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const,manifold::Rect>>,std::less<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>,std::allocator<std::pair<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const,manifold::Rect>>>
::_M_get_insert_unique_pos
          (_Rb_tree<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::pair<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const,manifold::Rect>,std::_Select1st<std::pair<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const,manifold::Rect>>,std::less<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>,std::allocator<std::pair<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const,manifold::Rect>>>
           *this,__normal_iterator *param_1)

{
  undefined1 auVar1 [16];
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  ulong uVar4;
  ulong uVar5;
  _Rb_tree_node_base *p_Var6;
  undefined1 auVar7 [16];
  
  if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
    p_Var6 = (_Rb_tree_node_base *)(this + 8);
  }
  else {
    uVar4 = *(ulong *)param_1;
    p_Var3 = *(_Rb_tree_node_base **)(this + 0x10);
    do {
      p_Var6 = p_Var3;
      uVar5 = *(ulong *)(p_Var6 + 0x20);
      p_Var3 = *(_Rb_tree_node_base **)(p_Var6 + 0x18);
      if (uVar4 < uVar5) {
        p_Var3 = *(_Rb_tree_node_base **)(p_Var6 + 0x10);
      }
    } while (p_Var3 != (_Rb_tree_node_base *)0x0);
    p_Var3 = p_Var6;
    if (uVar4 >= uVar5) goto LAB_00100114;
  }
  if (p_Var6 == *(_Rb_tree_node_base **)(this + 0x18)) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = *(_Rb_tree_node_base **)(this + 0x18);
    return auVar1 << 0x40;
  }
  p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var6);
  uVar4 = *(ulong *)param_1;
  uVar5 = *(ulong *)(p_Var3 + 0x20);
LAB_00100114:
  p_Var2 = (_Rb_tree_node_base *)0x0;
  if (uVar5 < uVar4) {
    p_Var3 = p_Var2;
    p_Var2 = p_Var6;
  }
  auVar7._8_8_ = p_Var2;
  auVar7._0_8_ = p_Var3;
  return auVar7;
}



/* std::_Function_handler<void (__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >), (anonymous
   namespace)::EarClip::TriangulatePoly(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> >
   >)::{lambda(__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8
std::
_Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::TriangulatePoly(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
::_M_manager(long *param_1,long *param_2,int param_3)

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
  *param_1 = (long)&(anonymous_namespace)::EarClip::
                    TriangulatePoly(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)
                    ::
                    {lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}
                    ::typeinfo;
  return 0;
}



/* std::_Function_handler<void (__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >), (anonymous
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >)
   const::{lambda(__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8
std::
_Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
::_M_manager(long *param_1,long *param_2,int param_3)

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
      puVar3 = (undefined8 *)operator_new(0x28);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      puVar3[4] = puVar1[4];
      *param_1 = (long)puVar3;
    }
    else if ((param_3 == 3) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1,0x28);
    }
    return 0;
  }
  *param_1 = (long)&const::
                    {lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}
                    ::typeinfo;
  return 0;
}



/* std::_Function_handler<void (__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >), (anonymous
   namespace)::EarClip::FindCloserBridge(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >, __gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> >
   >)::{lambda(__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8
std::
_Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::FindCloserBridge(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
::_M_manager(long *param_1,long *param_2,int param_3)

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
      puVar3 = (undefined8 *)operator_new(0x28);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      puVar3[4] = puVar1[4];
      *param_1 = (long)puVar3;
    }
    else if ((param_3 == 3) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1,0x28);
    }
    return 0;
  }
  *param_1 = (long)&(anonymous_namespace)::EarClip::
                    FindCloserBridge(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)
                    ::
                    {lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}
                    ::typeinfo;
  return 0;
}



/* std::_Function_handler<void (__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >), (anonymous
   namespace)::EarClip::CutKeyhole(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> >
   >)::{lambda(__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8
std::
_Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::CutKeyhole(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
::_M_manager(long *param_1,long *param_2,int param_3)

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
      puVar3 = (undefined8 *)operator_new(0x20);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (long)puVar3;
    }
    else if ((param_3 == 3) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1,0x20);
    }
    return 0;
  }
  *param_1 = (long)&(anonymous_namespace)::EarClip::
                    CutKeyhole(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)
                    ::
                    {lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}
                    ::typeinfo;
  return 0;
}



/* std::_Function_handler<void (__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >), (anonymous
   namespace)::EarClip::FindStart(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> >
   >)::{lambda(__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8
std::
_Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::FindStart(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
::_M_manager(long *param_1,long *param_2,int param_3)

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
      puVar3 = (undefined8 *)operator_new(0x30);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      *param_1 = (long)puVar3;
    }
    else if ((param_3 == 3) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1,0x30);
    }
    return 0;
  }
  *param_1 = (long)&(anonymous_namespace)::EarClip::
                    FindStart(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)
                    ::
                    {lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}
                    ::typeinfo;
  return 0;
}



/* std::_Rb_tree_iterator<__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > > > std::_Rb_tree<__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >, __gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >,
   std::_Identity<__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > > >, (anonymous namespace)::EarClip::MinCost,
   std::allocator<__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > > > >::_M_insert_equal<__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >
   const&>(__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > > const&) */

_Rb_tree_node_base * __thiscall
std::
_Rb_tree<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::_Identity<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>,(anonymous_namespace)::EarClip::MinCost,std::allocator<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>>
::
_M_insert_equal<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const&>
          (_Rb_tree<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::_Identity<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>,(anonymous_namespace)::EarClip::MinCost,std::allocator<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>>
           *this,__normal_iterator *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  bool bVar4;
  
  p_Var1 = (_Rb_tree_node_base *)(this + 8);
  if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
    bVar4 = true;
    p_Var3 = p_Var1;
  }
  else {
    p_Var2 = *(_Rb_tree_node_base **)(this + 0x10);
    do {
      p_Var3 = p_Var2;
      if (*(double *)(*(long *)param_1 + 8) < *(double *)(*(long *)(p_Var3 + 0x20) + 8)) {
        p_Var2 = *(_Rb_tree_node_base **)(p_Var3 + 0x10);
      }
      else {
        p_Var2 = *(_Rb_tree_node_base **)(p_Var3 + 0x18);
      }
    } while (p_Var2 != (_Rb_tree_node_base *)0x0);
    bVar4 = true;
    if (p_Var1 != p_Var3) {
      bVar4 = *(double *)(*(long *)param_1 + 8) < *(double *)(*(long *)(p_Var3 + 0x20) + 8);
    }
  }
  p_Var2 = (_Rb_tree_node_base *)operator_new(0x28);
  *(undefined8 *)(p_Var2 + 0x20) = *(undefined8 *)param_1;
  std::_Rb_tree_insert_and_rebalance(bVar4,p_Var2,p_Var3,p_Var1);
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  return p_Var2;
}



/* void std::vector<__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >, std::allocator<__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > > >
   >::_M_realloc_insert<__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >
   const&>(__gnu_cxx::__normal_iterator<__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >*,
   std::vector<__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >, std::allocator<__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > > > > >,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*, std::vector<(anonymous
   namespace)::EarClip::Vert, std::allocator<(anonymous namespace)::EarClip::Vert> > > const&) */

void __thiscall
std::
vector<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::allocator<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>>
::
_M_realloc_insert<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const&>
          (vector<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::allocator<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>>
           *this,undefined8 *param_2,undefined8 *param_3)

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
    if (0xfffffffffffffffe < uVar5) goto LAB_00100620;
    uVar7 = 0xfffffffffffffff;
    if (uVar5 + 1 < 0x1000000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 3;
LAB_0010062a:
    puVar6 = (undefined8 *)operator_new(uVar7);
    lVar10 = uVar7 + (long)puVar6;
    puVar9 = puVar6 + 1;
    *(undefined8 *)((long)puVar6 + ((long)param_2 - (long)puVar2)) = *param_3;
    if (param_2 != puVar2) {
LAB_001005a5:
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
    if (param_2 == puVar1) goto LAB_001005f1;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_00100620:
      uVar7 = 0x7ffffffffffffff8;
      goto LAB_0010062a;
    }
    if (uVar7 != 0) {
      if (0xfffffffffffffff < uVar7) {
        uVar7 = 0xfffffffffffffff;
      }
      uVar7 = uVar7 * 8;
      goto LAB_0010062a;
    }
    lVar10 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)0x8;
    *(undefined8 *)((long)param_2 - (long)puVar2) = *param_3;
    if (param_2 != puVar2) goto LAB_001005a5;
  }
  memcpy(puVar9,param_2,(long)puVar1 - (long)param_2);
  puVar9 = (undefined8 *)((long)puVar9 + ((long)puVar1 - (long)param_2));
LAB_001005f1:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar9;
  *(long *)(this + 0x10) = lVar10;
  return;
}



/* void std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> >::_M_realloc_insert<(anonymous
   namespace)::EarClip::Vert>(__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >, (anonymous namespace)::EarClip::Vert&&) */

void __thiscall
std::
vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>::
_M_realloc_insert<(anonymous_namespace)::EarClip::Vert>
          (vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>
           *this,undefined8 *param_2,undefined8 *param_3)

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
    if (0xfffffffffffffffe < uVar12) goto LAB_00100810;
    if (0x1c71c71c71c71c7 < uVar15) {
      uVar15 = 0x1c71c71c71c71c7;
    }
    uVar15 = uVar15 * 0x48;
LAB_0010081a:
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
LAB_00100768:
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
    if (param_2 == puVar1) goto LAB_001007dc;
  }
  else {
    uVar15 = lVar11 * 0x1c71c71c71c71c72;
    if (uVar15 < uVar12) {
LAB_00100810:
      uVar15 = 0x7ffffffffffffff8;
      goto LAB_0010081a;
    }
    if (uVar15 != 0) {
      if (0x1c71c71c71c71c7 < uVar15) {
        uVar15 = 0x1c71c71c71c71c7;
      }
      uVar15 = uVar15 * 0x48;
      goto LAB_0010081a;
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
    if (param_2 != puVar2) goto LAB_00100768;
  }
  __n = ((long)puVar1 + (-0x48 - (long)param_2) & 0xfffffffffffffff8U) + 0x48;
  puVar14 = (undefined8 *)((long)puVar16 + __n);
  memcpy(puVar16,param_2,__n);
LAB_001007dc:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar13;
  *(undefined8 **)(this + 8) = puVar14;
  *(long *)(this + 0x10) = local_50;
  return;
}



/* (anonymous namespace)::EarClip::Vert& std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> >::emplace_back<(anonymous
   namespace)::EarClip::Vert>((anonymous namespace)::EarClip::Vert&&) [clone .constprop.0] [clone
   .isra.0] */

Vert * __thiscall
std::
vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>::
emplace_back<(anonymous_namespace)::EarClip::Vert>
          (vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>
           *this,Vert *param_1)

{
  undefined8 *puVar1;
  Vert *pVVar2;
  undefined8 uVar3;
  Vert *extraout_RAX;
  
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
    pVVar2 = *(Vert **)(param_1 + 0x40);
    puVar1[8] = pVVar2;
    *(undefined8 **)(this + 8) = puVar1 + 9;
    return pVVar2;
  }
  _M_realloc_insert<(anonymous_namespace)::EarClip::Vert>();
  return extraout_RAX;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__upper_bound<int*, int, __gnu_cxx::__ops::_Val_comp_iter<(anonymous
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) const::{lambda(int, int)#1}> >(int*,
   int*, int const&, __gnu_cxx::__ops::_Val_comp_iter<(anonymous
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) const::{lambda(int, int)#1}>) [clone
   .isra.0] */

int * std::
      __upper_bound<int*,int,__gnu_cxx::__ops::_Val_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
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
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) const::{lambda(int, int)#1}> >(int*,
   int*, int const&, __gnu_cxx::__ops::_Iter_comp_val<(anonymous
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) const::{lambda(int, int)#1}>) [clone
   .isra.0] */

int * std::
      __lower_bound<int*,int,__gnu_cxx::__ops::_Iter_comp_val<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
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
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) const::{lambda(int, int)#1}> >(int*,
   int*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) const::{lambda(int, int)#1}>) */

void std::
     __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
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
      piVar7 = piVar6 + 1;
      lVar4 = *param_3;
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
/* int* std::__move_merge<int*, int*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) const::{lambda(int, int)#1}> >(int*,
   int*, int*, int*, int*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) const::{lambda(int, int)#1}>) */

int * std::
      __move_merge<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
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
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) const::{lambda(int, int)#1}> >(int*,
   int*, int*, long, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) const::{lambda(int, int)#1}>) */

void std::
     __merge_sort_loop<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
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
      param_3 = __move_merge<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
                          (lVar2,lVar1,lVar1,param_1,param_3,param_5);
      lVar1 = param_2 - param_1 >> 2;
      lVar2 = param_1;
    } while (SBORROW8(lVar1,param_4 * 2) == lVar1 + param_4 * -2 < 0);
  }
  if (lVar1 < param_4) {
    param_4 = lVar1;
  }
  lVar1 = param_1 + param_4 * 4;
  __move_merge<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
            (param_1,lVar1,lVar1,param_2,param_3,param_5);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_sort_with_buffer<int*, int*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) const::{lambda(int, int)#1}> >(int*,
   int*, int*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) const::{lambda(int, int)#1}>) */

void std::
     __merge_sort_with_buffer<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
               (long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_2 - param_1;
  lVar3 = param_1;
  if (lVar1 < 0x19) {
    __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
              (param_1,param_2,param_4);
    return;
  }
  do {
    lVar2 = lVar3 + 0x1c;
    __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
              (lVar3,lVar2,param_4);
    lVar3 = lVar2;
  } while (0x18 < param_2 - lVar2);
  __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
            (lVar2,param_2,param_4);
  if (0x1c < lVar1) {
    lVar3 = 7;
    do {
      __merge_sort_loop<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
                (param_1,param_2,param_3,lVar3,param_4);
      lVar2 = lVar3 * 2;
      lVar3 = lVar3 * 4;
      __merge_sort_loop<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
                (param_3,param_3 + lVar1,param_1,lVar2,param_4);
    } while (lVar3 < lVar1 >> 2);
  }
  return;
}



/* std::_Function_handler<void (__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >), (anonymous
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >)
   const::{lambda(__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >)#1}>::_M_invoke(std::_Any_data const&,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*, std::vector<(anonymous
   namespace)::EarClip::Vert, std::allocator<(anonymous namespace)::EarClip::Vert> > >&&) */

void std::
     _Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
     ::_M_invoke(_Any_data *param_1,__normal_iterator *param_2)

{
  long *plVar1;
  vector<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::allocator<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>>
  *pvVar2;
  long *plVar3;
  ulong uVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  double *pdVar8;
  undefined8 *__dest;
  undefined4 *__dest_00;
  ulong uVar9;
  undefined8 *__src;
  size_t sVar10;
  undefined4 *__src_00;
  int iVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  double dVar13;
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
  long local_38;
  long local_30;
  
  plVar1 = *(long **)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *(long *)param_2;
  pvVar2 = (vector<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::allocator<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>>
            *)plVar1[2];
  plVar3 = *(long **)(pvVar2 + 8);
  if (plVar3 == *(long **)(pvVar2 + 0x10)) {
    vector<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::allocator<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>>
    ::
    _M_realloc_insert<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const&>
              (pvVar2,plVar3,&local_38);
  }
  else {
    *plVar3 = local_38;
    *(long **)(pvVar2 + 8) = plVar3 + 1;
  }
  plVar3 = (long *)*plVar1;
  dVar13 = *(double *)(local_38 + 0x18);
  dVar15 = *(double *)(local_38 + 0x20);
  dVar14 = *(double *)(plVar1[4] + 0x110);
  dVar21 = dVar13 - dVar14;
  dVar19 = dVar13 + dVar14;
  dVar16 = dVar15 - dVar14;
  dVar18 = 0.0 - dVar14;
  dVar20 = dVar15 + dVar14;
  dVar14 = dVar14 + 0.0;
  dVar25 = dVar16;
  dVar22 = dVar14;
  dVar17 = dVar20;
  if (dVar19 <= dVar21) {
    if (dVar20 <= dVar16) {
      dVar25 = dVar20;
      if (dVar18 < dVar14) goto LAB_00100f42;
      dVar24 = dVar19;
      dVar23 = dVar21;
      if (dVar21 < dVar19) goto LAB_00100e01;
      goto joined_r0x00100f8f;
    }
    if (dVar18 < dVar14) {
LAB_00100f42:
      dVar24 = dVar19;
      if (dVar19 <= dVar21) goto LAB_00100f4d;
LAB_00100fc7:
      if (dVar20 <= dVar16) {
        dVar17 = dVar16;
      }
      goto LAB_00100f5a;
    }
    dVar23 = dVar19;
    if (dVar19 <= dVar21) {
      dVar23 = dVar21;
    }
LAB_00100f98:
    dVar17 = dVar20;
LAB_00100e10:
    bVar5 = dVar18 < dVar14;
    dVar16 = dVar18;
    dVar24 = dVar19;
    dVar18 = dVar22;
    dVar19 = dVar23;
    if (bVar5) goto LAB_00100f5a;
  }
  else {
    dVar24 = dVar21;
    if (dVar16 < dVar20) {
      dVar22 = dVar18;
      if (dVar14 <= dVar18) {
        dVar22 = dVar14;
      }
LAB_00100e01:
      dVar23 = dVar19;
      dVar19 = dVar24;
joined_r0x00100f8f:
      dVar17 = dVar16;
      if (dVar16 < dVar20) goto LAB_00100f98;
      goto LAB_00100e10;
    }
    dVar25 = dVar20;
    if (dVar14 <= dVar18) goto LAB_00100e01;
    if (dVar21 < dVar19) goto LAB_00100fc7;
LAB_00100f4d:
    dVar19 = dVar21;
    if (dVar20 <= dVar16) {
      dVar17 = dVar16;
    }
LAB_00100f5a:
    dVar16 = dVar14;
  }
  uVar9 = plVar3[1];
  uVar4 = plVar3[2];
  if (uVar9 < uVar4) {
    plVar3[1] = uVar9 + 1;
    pdVar8 = (double *)(uVar9 * 0x30 + *plVar3);
    *pdVar8 = dVar24;
    pdVar8[1] = dVar25;
    pdVar8[2] = dVar18;
    pdVar8[3] = dVar19;
    pdVar8[4] = dVar17;
    pdVar8[5] = dVar16;
  }
  else {
    if (uVar4 == 0) {
      sVar10 = 0x1800;
      uVar12 = 0x80;
LAB_00101074:
      __dest = (undefined8 *)malloc(sVar10);
      __src = (undefined8 *)*plVar3;
      if (uVar9 == 0) {
LAB_001010c4:
        if (__src != (undefined8 *)0x0) goto LAB_001010c9;
      }
      else {
        sVar10 = uVar9 * 0x30;
        if (0x30 < (long)sVar10) {
          memmove(__dest,__src,sVar10);
          __src = (undefined8 *)*plVar3;
          goto LAB_001010c4;
        }
        if (sVar10 != 0x30) goto LAB_001010c4;
        uVar6 = __src[1];
        *__dest = *__src;
        __dest[1] = uVar6;
        uVar6 = __src[3];
        __dest[2] = __src[2];
        __dest[3] = uVar6;
        uVar6 = __src[5];
        __dest[4] = __src[4];
        __dest[5] = uVar6;
LAB_001010c9:
        free(__src);
      }
      *plVar3 = (long)__dest;
      uVar9 = plVar3[1];
      plVar3[2] = uVar12;
    }
    else {
      uVar12 = uVar4 * 2;
      if (uVar4 < uVar12) {
        sVar10 = uVar4 * 0x60;
        goto LAB_00101074;
      }
      __dest = (undefined8 *)*plVar3;
    }
    plVar3[1] = uVar9 + 1;
    pdVar8 = (double *)(__dest + uVar9 * 6);
    *pdVar8 = dVar24;
    pdVar8[1] = dVar25;
    pdVar8[2] = dVar18;
    pdVar8[3] = dVar19;
    pdVar8[4] = dVar17;
    pdVar8[5] = dVar16;
  }
  pdVar8 = (double *)plVar1[3];
  plVar1 = (long *)plVar1[1];
  dVar14 = ((dVar13 - *pdVar8) / (pdVar8[3] - *pdVar8)) * _LC2;
  dVar13 = ((dVar15 - pdVar8[1]) / (pdVar8[4] - pdVar8[1])) * _LC2;
  dVar15 = ((0.0 - pdVar8[2]) / (pdVar8[5] - pdVar8[2])) * _LC2;
  if (0.0 < dVar14) {
    if (0.0 < dVar13) {
      if (0.0 < dVar15) {
        iVar11 = 0x12492492;
        if (dVar14 <= _LC3) {
          iVar11 = (((((int)(long)dVar14 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                    0xc30c30c3) * 5 & 0x49249249) * 2;
        }
        goto LAB_001011e9;
      }
      if (dVar14 <= _LC3) {
        iVar11 = (((((int)(long)dVar14 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                  0xc30c30c3) * 5 & 0x49249249) * 2;
        goto LAB_001011ac;
      }
      iVar11 = 0x36db6db6;
      if (dVar13 <= _LC3) {
        iVar11 = (((((int)(long)dVar13 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                  0xc30c30c3) * 5 & 0x49249249) * 2 + 0x24924924;
      }
    }
    else {
      if (0.0 < dVar15) {
        iVar7 = 0x24924924;
        if (dVar14 <= _LC3) {
          iVar7 = (((((int)(long)dVar14 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                   0xc30c30c3) * 5 & 0x49249249) << 2;
        }
        goto LAB_0010100b;
      }
      iVar11 = 0x24924924;
      if (dVar14 <= _LC3) {
        iVar11 = (((((int)(long)dVar14 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                  0xc30c30c3) * 5 & 0x49249249) << 2;
      }
    }
  }
  else if (0.0 < dVar13) {
    if (0.0 < dVar15) {
      iVar11 = 0;
LAB_001011e9:
      iVar7 = iVar11 * 2 + 0x12492492;
      if (dVar13 <= _LC3) {
        iVar7 = ((((((int)(long)dVar13 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                  0xc30c30c3) * 5 & 0x49249249) + iVar11) * 2;
      }
      goto LAB_0010100b;
    }
    iVar11 = 0;
LAB_001011ac:
    if (dVar13 <= _LC3) {
      iVar11 = ((((((int)(long)dVar13 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                 0xc30c30c3) * 5 & 0x49249249) + iVar11) * 2;
    }
    else {
      iVar11 = iVar11 * 2 + 0x12492492;
    }
  }
  else {
    iVar11 = 0;
    if (0.0 < dVar15) {
      iVar7 = 0;
LAB_0010100b:
      iVar11 = iVar7 + 0x9249249;
      if (dVar15 <= _LC3) {
        iVar11 = (((((int)(long)dVar15 * 0x10001 & 0xff0000ffU) * 0x101 & 0xf00f00f) * 0x11 &
                  0xc30c30c3) * 5 & 0x49249249) + iVar7;
      }
    }
  }
  uVar9 = plVar1[1];
  uVar4 = plVar1[2];
  if (uVar9 < uVar4) {
    plVar1[1] = uVar9 + 1;
    *(int *)(*plVar1 + uVar9 * 4) = iVar11;
    goto LAB_00100f01;
  }
  if (uVar4 == 0) {
    sVar10 = 0x200;
    uVar12 = 0x80;
LAB_00101154:
    __dest_00 = (undefined4 *)malloc(sVar10);
    __src_00 = (undefined4 *)*plVar1;
    if (uVar9 == 0) {
LAB_00101169:
      if (__src_00 != (undefined4 *)0x0) goto LAB_0010116e;
    }
    else {
      sVar10 = uVar9 * 4;
      if (4 < (long)sVar10) {
        memmove(__dest_00,__src_00,sVar10);
        __src_00 = (undefined4 *)*plVar1;
        goto LAB_00101169;
      }
      if (sVar10 != 4) goto LAB_00101169;
      *__dest_00 = *__src_00;
LAB_0010116e:
      free(__src_00);
    }
    *plVar1 = (long)__dest_00;
    uVar9 = plVar1[1];
    plVar1[2] = uVar12;
  }
  else {
    uVar12 = uVar4 * 2;
    if (uVar4 < uVar12) {
      sVar10 = uVar4 << 3;
      goto LAB_00101154;
    }
    __dest_00 = (undefined4 *)*plVar1;
  }
  plVar1[1] = uVar9 + 1;
  __dest_00[uVar9] = iVar11;
LAB_00100f01:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Rb_tree<__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >, std::pair<__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > > const, manifold::Rect>,
   std::_Select1st<std::pair<__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > > const, manifold::Rect> >,
   std::less<__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > > >,
   std::allocator<std::pair<__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > > const, manifold::Rect> >
   >::_M_erase(std::_Rb_tree_node<std::pair<__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > > const, manifold::Rect> >*) [clone
   .isra.0] */

void std::
     _Rb_tree<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::pair<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const,manifold::Rect>,std::_Select1st<std::pair<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const,manifold::Rect>>,std::less<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>,std::allocator<std::pair<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const,manifold::Rect>>>
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
                      operator_delete(pvVar2,0x48);
                      pvVar2 = pvVar1;
                    }
                    pvVar2 = *(void **)((long)pvVar6 + 0x10);
                    operator_delete(pvVar6,0x48);
                    pvVar6 = pvVar2;
                  }
                  pvVar6 = *(void **)((long)pvVar4 + 0x10);
                  operator_delete(pvVar4,0x48);
                  pvVar4 = pvVar6;
                }
                pvVar4 = *(void **)((long)pvVar3 + 0x10);
                operator_delete(pvVar3,0x48);
                pvVar3 = pvVar4;
              }
              pvVar3 = *(void **)((long)pvVar5 + 0x10);
              operator_delete(pvVar5,0x48);
              pvVar5 = pvVar3;
            }
            pvVar5 = *(void **)((long)pvVar7 + 0x10);
            operator_delete(pvVar7,0x48);
            pvVar7 = pvVar5;
          }
          pvVar7 = *(void **)((long)pvVar8 + 0x10);
          operator_delete(pvVar8,0x48);
          pvVar8 = pvVar7;
        }
        pvVar8 = *(void **)((long)pvVar10 + 0x10);
        operator_delete(pvVar10,0x48);
        pvVar10 = pvVar8;
      }
      p_Var9 = *(_Rb_tree_node **)(local_48 + 0x10);
      operator_delete(local_48,0x48);
      local_48 = p_Var9;
    } while (p_Var9 != (_Rb_tree_node *)0x0);
  }
  return;
}



/* (anonymous namespace)::EarClip::Vert::EarCost(double, (anonymous
   namespace)::EarClip::IdxCollider&) const::{lambda(unsigned
   long)#1}::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */

_func_EarCost_double_IdxCollider_ptr ** __thiscall
const::{lambda(unsigned_long)#1}::operator()(_lambda_unsigned_long__1_ *this,ulong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  piVar5 = *(int **)(*(long *)(*(long *)this + 0x48) +
                    (long)*(int *)(*(long *)(*(long *)this + 0x60) + param_1 * 8) * 8);
  lVar6 = *(long *)(piVar5 + 0x10);
  if (*(int **)(lVar6 + 0x38) == piVar5) {
    piVar7 = *(int **)(this + 8);
    iVar4 = *piVar5;
    if (((iVar4 != *piVar7) && (iVar4 != **(int **)(this + 0x10))) &&
       (iVar4 != **(int **)(this + 0x18))) {
      dVar12 = *(double *)(piVar7 + 6);
      dVar1 = **(double **)(this + 0x28);
      dVar2 = *(double *)(piVar7 + 8);
      dVar11 = *(double *)(piVar5 + 6) - dVar12;
      dVar9 = *(double *)(piVar5 + 8) - dVar2;
      dVar14 = *(double *)(*(long *)(piVar7 + 0xe) + 0x28);
      dVar3 = *(double *)(*(long *)(piVar7 + 0xe) + 0x30);
      dVar10 = dVar9 * dVar14 - dVar11 * dVar3;
      dVar13 = dVar10;
      if (((double)((ulong)dVar10 & _LC5) < dVar1) &&
         (dVar13 = (*(double *)(lVar6 + 0x20) - dVar2) * dVar14 -
                   (*(double *)(lVar6 + 0x18) - dVar12) * dVar3,
         (double)((ulong)dVar13 & _LC5) <= dVar1)) {
        dVar14 = (*(double *)(*(long *)(piVar5 + 0xe) + 0x20) - dVar2) * dVar14 -
                 dVar3 * (*(double *)(*(long *)(piVar5 + 0xe) + 0x18) - dVar12);
        uVar8 = -(ulong)((double)((ulong)dVar14 & _LC5) <= dVar1);
        dVar13 = (double)((ulong)dVar10 & uVar8 | ~uVar8 & (ulong)dVar14);
      }
      dVar14 = *(double *)(piVar7 + 10);
      dVar3 = *(double *)(piVar7 + 0xc);
      dVar10 = dVar9 * dVar14 - dVar11 * dVar3;
      dVar9 = dVar10;
      if (((double)((ulong)dVar10 & _LC5) < dVar1) &&
         (dVar9 = (*(double *)(lVar6 + 0x20) - dVar2) * dVar14 -
                  (*(double *)(lVar6 + 0x18) - dVar12) * dVar3,
         (double)((ulong)dVar9 & _LC5) <= dVar1)) {
        dVar12 = (*(double *)(*(long *)(piVar5 + 0xe) + 0x20) - dVar2) * dVar14 -
                 (*(double *)(*(long *)(piVar5 + 0xe) + 0x18) - dVar12) * dVar3;
        uVar8 = -(ulong)((double)(_LC5 & (ulong)dVar12) <= dVar1);
        dVar9 = (double)((ulong)dVar10 & uVar8 | ~uVar8 & (ulong)dVar12);
      }
      if (dVar9 <= dVar13) {
        dVar13 = dVar9;
      }
      dVar12 = (*(double *)(piVar5 + 8) - *(double *)(*(long *)(piVar7 + 0x10) + 0x20)) *
               **(double **)(this + 0x20) -
               (*(double *)(piVar5 + 6) - *(double *)(*(long *)(piVar7 + 0x10) + 0x18)) *
               (*(double **)(this + 0x20))[1];
      if (dVar13 <= dVar12) {
        dVar12 = dVar13;
      }
      if (dVar12 < (double)((ulong)dVar1 ^ _LC6)) {
        return *(_func_EarCost_double_IdxCollider_ptr ***)(this + 0x38);
      }
    }
  }
  return (_func_EarCost_double_IdxCollider_ptr **)this;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_adaptive<int*, long, int*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) const::{lambda(int, int)#1}> >(int*,
   int*, int*, long, long, int*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) const::{lambda(int, int)#1}>) */

void std::
     __merge_adaptive<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
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
      goto LAB_00101b50;
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
LAB_00101b50:
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
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) const::{lambda(int, int)#1}> >(int*,
   int*, int*, int*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) const::{lambda(int, int)#1}>) */

void std::
     __stable_sort_adaptive<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
               (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  __merge_sort_with_buffer<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
            (param_1,param_2,param_4,param_5);
  __merge_sort_with_buffer<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
            (param_2,param_3,param_4,param_5);
  __merge_adaptive<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
            (param_1,param_2,param_3,param_2 - param_1 >> 2,param_3 - param_2 >> 2,param_4,param_5);
  return;
}



/* std::_Rb_tree<__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >, __gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >,
   std::_Identity<__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > > >, (anonymous namespace)::EarClip::MinCost,
   std::allocator<__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > > >
   >::_M_erase(std::_Rb_tree_node<__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > > >*) [clone .isra.0] */

void std::
     _Rb_tree<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::_Identity<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>,(anonymous_namespace)::EarClip::MinCost,std::allocator<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>>
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
          goto LAB_00101f70;
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
        if (lVar9 % lVar4 == 0) goto LAB_00101f70;
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
LAB_00101f70:
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
  goto LAB_00101f70;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_without_buffer<int*, long, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) const::{lambda(int, int)#1}> >(int*,
   int*, int*, long, long, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) const::{lambda(int, int)#1}>) */

void std::
     __merge_without_buffer<int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
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
      if (param_4 <= param_5) goto LAB_001020b7;
      do {
        lVar4 = param_4 / 2;
        piVar3 = param_1 + lVar4;
        piVar2 = __lower_bound<int*,int,__gnu_cxx::__ops::_Iter_comp_val<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
                           (param_2,param_3,*piVar3,param_6);
        lVar6 = (long)piVar2 - (long)param_2 >> 2;
        piVar5 = param_2;
        param_2 = piVar2;
        piVar2 = param_1;
        while( true ) {
          param_1 = _V2::__rotate<int*>(piVar3,piVar5,param_2);
          param_5 = param_5 - lVar6;
          __merge_without_buffer<int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
                    (piVar2,piVar3,param_1,lVar4,lVar6,param_6);
          param_4 = param_4 - lVar4;
          if (param_4 == 0) {
            return;
          }
          if (param_5 == 0) {
            return;
          }
          if (param_5 + param_4 == 2) goto LAB_00102106;
          if (param_5 < param_4) break;
LAB_001020b7:
          lVar6 = param_5 / 2;
          piVar3 = __upper_bound<int*,int,__gnu_cxx::__ops::_Val_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
                             (param_1,param_2,param_2[lVar6],param_6);
          lVar4 = (long)piVar3 - (long)param_1 >> 2;
          piVar5 = param_2;
          param_2 = param_2 + lVar6;
          piVar2 = param_1;
        }
      } while( true );
    }
LAB_00102106:
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
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) const::{lambda(int, int)#1}> >(int*,
   int*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) const::{lambda(int, int)#1}>) */

void std::
     __inplace_stable_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
               (long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  if (0x38 < param_2 - param_1) {
    lVar2 = (param_2 - param_1 >> 3) * 4;
    lVar1 = param_1 + lVar2;
    __inplace_stable_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
              (param_1,lVar1);
    __inplace_stable_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
              (lVar1,param_2,param_3);
    __merge_without_buffer<int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
              (param_1,lVar1,param_2,lVar2 >> 2,param_2 - lVar1 >> 2,param_3);
    return;
  }
  __insertion_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
            ();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_adaptive_resize<int*, long, int*, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) const::{lambda(int, int)#1}> >(int*,
   int*, int*, long, long, int*, long, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) const::{lambda(int, int)#1}>) */

void std::
     __merge_adaptive_resize<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
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
LAB_0010245a:
    __merge_adaptive<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
              (param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  local_78 = param_1;
  if (param_4 <= param_5) goto LAB_00102349;
LAB_00102225:
  local_70 = param_4 / 2;
  __src = local_78 + local_70;
  piVar2 = __lower_bound<int*,int,__gnu_cxx::__ops::_Iter_comp_val<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
                     (param_2,param_3,*__src,param_8);
  lVar6 = (long)piVar2 - (long)param_2 >> 2;
  param_4 = param_4 - local_70;
  if (param_4 <= lVar6) goto LAB_0010239d;
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
LAB_001022f4:
    param_2 = piVar2;
    param_5 = param_5 - lVar6;
    __merge_adaptive_resize<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
              (local_78,__src,param_1,local_70,lVar6,param_6,param_7,param_8);
    lVar6 = param_5;
    if (param_4 <= param_5) {
      lVar6 = param_4;
    }
    if (lVar6 <= param_7) goto LAB_0010245a;
    local_78 = param_1;
    if (param_5 < param_4) goto LAB_00102225;
LAB_00102349:
    lVar6 = param_5 / 2;
    piVar2 = param_2 + lVar6;
    __src = __upper_bound<int*,int,__gnu_cxx::__ops::_Val_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
                      (local_78,param_2,*piVar2,param_8);
    local_70 = (long)__src - (long)local_78 >> 2;
    param_4 = param_4 - local_70;
  } while (lVar6 < param_4);
LAB_0010239d:
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
              goto LAB_00102552;
            }
          }
          else {
            memmove(__src,param_2,sVar5);
LAB_00102552:
            iVar1 = *param_6;
          }
          lVar4 = -4;
          piVar2[-1] = iVar1;
        }
        else {
          lVar4 = -sVar3;
          if ((long)sVar5 < 5) {
            param_1 = (int *)((long)piVar2 + lVar4);
            if (sVar5 != 4) goto LAB_001022f4;
            *__src = *param_2;
          }
          else {
            memmove(__src,param_2,sVar5);
          }
        }
        param_1 = (int *)((long)piVar2 + lVar4);
        goto LAB_001022f4;
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
  goto LAB_001022f4;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__stable_sort_adaptive_resize<int*, int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) const::{lambda(int, int)#1}> >(int*,
   int*, int*, long, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) const::{lambda(int, int)#1}>) */

void std::
     __stable_sort_adaptive_resize<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
               (long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = ((param_2 - param_1 >> 2) + 1) / 2;
  lVar2 = lVar3 * 4;
  lVar1 = param_1 + lVar2;
  if (param_4 < lVar3) {
    __stable_sort_adaptive_resize<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
              (param_1,lVar1,param_3);
    __stable_sort_adaptive_resize<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
              (lVar1,param_2,param_3,param_4,param_5);
    __merge_adaptive_resize<int*,long,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
              (param_1,lVar1,param_2,lVar2 >> 2,param_2 - lVar1 >> 2,param_3,param_4,param_5);
    return;
  }
  __stable_sort_adaptive<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
            (param_1,lVar1,param_2,param_3);
  return;
}



/* (anonymous namespace)::EarClip::Vert::InsideEdge(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >, double, bool) const */

bool __thiscall
(anonymous_namespace)::EarClip::Vert::InsideEdge
          (double param_1,Vert *this,long param_3,char param_4)

{
  double dVar1;
  double dVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
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
  double dVar22;
  double dVar23;
  int local_b0;
  bool local_49;
  
  dVar14 = param_1 * param_1;
  lVar3 = *(long *)(this + 0x38);
  lVar6 = *(long *)(param_3 + 0x40);
  lVar5 = *(long *)(lVar3 + 0x40);
  local_49 = lVar5 != lVar6 && param_3 != lVar6;
  lVar10 = param_3;
  lVar4 = param_3;
  if (lVar5 != lVar6 && param_3 != lVar6) {
    do {
      lVar7 = lVar3;
      if (param_4 != '\0') {
        lVar7 = *(long *)(this + 0x40);
      }
      if (lVar7 == lVar5) {
        return local_49;
      }
      dVar17 = *(double *)(lVar5 + 0x18);
      dVar16 = *(double *)(lVar10 + 0x18);
      dVar22 = *(double *)(lVar5 + 0x20);
      dVar19 = *(double *)(lVar10 + 0x20);
      dVar18 = (dVar17 - dVar16) * (dVar17 - dVar16) + 0.0 + (dVar22 - dVar19) * (dVar22 - dVar19);
      if (dVar14 < dVar18) {
        dVar1 = *(double *)(lVar6 + 0x18);
        dVar2 = *(double *)(lVar6 + 0x20);
        dVar15 = (dVar1 - dVar16) * (dVar1 - dVar16) + 0.0 + (dVar2 - dVar19) * (dVar2 - dVar19);
        lVar7 = lVar10;
        lVar11 = lVar4;
        if (dVar14 < dVar15) {
          dVar13 = dVar1 - dVar17;
          dVar12 = dVar2 - dVar22;
          dVar21 = dVar13 * dVar13 + 0.0 + dVar12 * dVar12;
          if (dVar21 <= dVar14) {
            if (param_4 == '\0') {
              lVar4 = *(long *)(lVar5 + 0x40);
            }
            else {
              lVar4 = *(long *)(lVar5 + 0x38);
            }
            if (lVar4 == lVar6) {
              return local_49;
            }
            lVar6 = *(long *)(lVar6 + 0x40);
            lVar7 = lVar5;
            lVar11 = lVar10;
            goto LAB_001027c0;
          }
          dVar23 = dVar19 - dVar22;
          dVar20 = dVar16 - dVar17;
          dVar12 = fma(dVar12,dVar20,(double)((ulong)dVar23 ^ _LC6) * dVar13);
          dVar13 = dVar20 * dVar20 + 0.0 + dVar23 * dVar23;
          if (dVar21 <= dVar13) {
            dVar21 = dVar13;
          }
          if (dVar21 * param_1 * param_1 < dVar12 * dVar12 * _LC7) {
            if (dVar12 <= 0.0) {
              if (lVar10 == lVar4) {
                return false;
              }
              local_b0 = -1;
            }
            else {
              if (lVar10 == lVar4) {
                return local_49;
              }
              local_b0 = 1;
            }
LAB_0010299c:
            dVar21 = *(double *)(lVar4 + 0x20);
            iVar8 = 0;
            dVar12 = *(double *)(lVar4 + 0x18);
            dVar20 = dVar19 - dVar21;
            dVar22 = dVar22 - dVar21;
            dVar17 = dVar17 - dVar12;
            dVar23 = dVar16 - dVar12;
            dVar13 = fma(dVar23,dVar22,(double)((ulong)dVar20 ^ _LC6) * dVar17);
            dVar17 = dVar17 * dVar17 + 0.0 + dVar22 * dVar22;
            dVar22 = dVar20 * dVar20 + dVar23 * dVar23 + 0.0;
            if (dVar17 <= dVar22) {
              dVar17 = dVar22;
            }
            if (dVar17 * param_1 * param_1 < dVar13 * dVar13 * _LC7) {
              iVar8 = (uint)(0.0 < dVar13) * 2 + -1;
            }
            dVar19 = dVar19 - dVar2;
            dVar12 = dVar12 - dVar1;
            dVar16 = dVar16 - dVar1;
            dVar21 = dVar21 - dVar2;
            dVar22 = fma(dVar16,dVar21,(double)((ulong)dVar19 ^ _LC6) * dVar12);
            dVar16 = dVar16 * dVar16 + 0.0 + dVar19 * dVar19;
            dVar17 = dVar12 * dVar12 + 0.0 + dVar21 * dVar21;
            if (dVar17 <= dVar16) {
              dVar17 = dVar16;
            }
            iVar9 = iVar8;
            if (dVar17 * param_1 * param_1 < dVar22 * dVar22 * _LC7) {
              iVar9 = iVar8 + 1;
              if (dVar22 <= 0.0) {
                iVar9 = iVar8 + -1;
              }
            }
            if (local_b0 + iVar9 != 0) {
              return 0 < local_b0 + iVar9;
            }
          }
          else {
            local_b0 = 0;
            if (lVar10 != lVar4) goto LAB_0010299c;
          }
          lVar7 = lVar6;
          lVar11 = lVar6;
          lVar10 = lVar5;
          lVar4 = lVar5;
          if (dVar18 < dVar15) goto joined_r0x00102c05;
        }
        lVar6 = *(long *)(lVar6 + 0x40);
        lVar4 = lVar5;
LAB_001027c0:
        if (lVar6 == lVar4) {
          return local_49;
        }
      }
      else {
joined_r0x00102c05:
        lVar11 = lVar4;
        lVar7 = lVar10;
        if (param_4 == '\0') {
          lVar4 = *(long *)(lVar5 + 0x40);
          goto LAB_001027c0;
        }
        lVar4 = *(long *)(lVar5 + 0x38);
        if (lVar6 == lVar4) {
          return local_49;
        }
      }
      lVar5 = lVar4;
      lVar10 = lVar7;
      lVar4 = lVar11;
    } while (lVar6 != param_3);
  }
  else {
    local_49 = true;
  }
  return local_49;
}



/* std::_Function_handler<void (__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >), (anonymous
   namespace)::EarClip::FindCloserBridge(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >, __gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> >
   >)::{lambda(__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >)#1}>::_M_invoke(std::_Any_data const&,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*, std::vector<(anonymous
   namespace)::EarClip::Vert, std::allocator<(anonymous namespace)::EarClip::Vert> > >&&) */

void std::
     _Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::FindCloserBridge(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
     ::_M_invoke(_Any_data *param_1,__normal_iterator *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  Vert *pVVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  char cVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  puVar8 = *(undefined8 **)param_1;
  lVar9 = *(long *)param_2;
  plVar10 = (long *)puVar8[2];
  dVar1 = *(double *)(lVar9 + 0x20);
  dVar2 = *(double *)*puVar8;
  dVar3 = *(double *)(lVar9 + 0x18);
  pVVar4 = *(Vert **)(puVar8[3] + 0x110);
  lVar11 = *plVar10;
  dVar5 = *(double *)(*(long *)puVar8[1] + 0x20);
  dVar6 = *(double *)(*(long *)puVar8[1] + 0x18);
  dVar7 = *(double *)(lVar11 + 0x18);
  dVar17 = dVar1 - dVar5;
  dVar15 = dVar3 - dVar6;
  dVar14 = *(double *)(lVar11 + 0x20) - dVar5;
  dVar16 = dVar7 - dVar6;
  dVar13 = fma(dVar15,dVar14,(double)((ulong)dVar17 ^ _LC6) * dVar16);
  dVar14 = dVar16 * dVar16 + 0.0 + dVar14 * dVar14;
  dVar15 = dVar15 * dVar15 + 0.0 + dVar17 * dVar17;
  if (dVar14 <= dVar15) {
    dVar14 = dVar15;
  }
  if (dVar14 * (double)pVVar4 * (double)pVVar4 < dVar13 * dVar13 * _LC7) {
    dVar14 = dVar2;
    if (dVar13 <= 0.0) {
      dVar14 = (double)(_LC6 ^ (ulong)dVar2);
    }
  }
  else {
    dVar14 = dVar2 * 0.0;
  }
  if ((((dVar6 - (double)pVVar4 < dVar3) && (dVar2 * dVar5 - (double)pVVar4 < dVar1 * dVar2)) &&
      ((0.0 < dVar14 || ((dVar14 == 0.0 && (dVar3 < dVar7)))))) &&
     ((cVar12 = (anonymous_namespace)::EarClip::Vert::InsideEdge
                          (pVVar4,lVar9,*(undefined8 *)puVar8[4],1), cVar12 != '\0' &&
      (cVar12 = (anonymous_namespace)::EarClip::Vert::InsideEdge
                          (pVVar4,*(long *)(lVar9 + 0x38),
                           *(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x40),1), cVar12 == '\0')))) {
    *plVar10 = lVar9;
  }
  return;
}



/* std::_Function_handler<void (__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >), (anonymous
   namespace)::EarClip::CutKeyhole(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> >
   >)::{lambda(__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >)#1}>::_M_invoke(std::_Any_data const&,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*, std::vector<(anonymous
   namespace)::EarClip::Vert, std::allocator<(anonymous namespace)::EarClip::Vert> > >&&) */

void std::
     _Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::CutKeyhole(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
     ::_M_invoke(_Any_data *param_1,__normal_iterator *param_2)

{
  double dVar1;
  Vert *pVVar2;
  double dVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double __x;
  double dVar12;
  double dVar13;
  
  puVar4 = *(undefined8 **)param_1;
  lVar5 = *(long *)param_2;
  dVar1 = *(double *)(lVar5 + 0x20);
  lVar6 = puVar4[2];
  pVVar2 = *(Vert **)(lVar6 + 0x110);
  dVar11 = *(double *)(*(long *)*puVar4 + 0x20);
  if ((double)pVVar2 < (double)((ulong)(dVar1 - dVar11) & _LC5)) {
    if (dVar11 - (double)pVVar2 <= dVar1) {
      return;
    }
    lVar8 = *(long *)(lVar5 + 0x40);
    dVar12 = *(double *)(lVar8 + 0x20);
    if ((double)pVVar2 + dVar11 < dVar12) {
      dVar12 = ((*(double *)(lVar8 + 0x18) - *(double *)(lVar5 + 0x18)) * (dVar11 - dVar1)) /
               (dVar12 - dVar1) + *(double *)(lVar5 + 0x18);
    }
    else {
      if (dVar12 < dVar11 - (double)pVVar2) {
        return;
      }
      if (*(int *)puVar4[1] == -1) {
        return;
      }
      dVar12 = *(double *)(lVar8 + 0x18);
    }
  }
  else {
    if (*(double *)(*(long *)(lVar5 + 0x40) + 0x20) <= (double)pVVar2 + dVar11) {
      return;
    }
    if (*(int *)puVar4[1] == 1) {
      return;
    }
    dVar12 = *(double *)(lVar5 + 0x18);
  }
  if (_LC8 < (double)(_LC5 & (ulong)dVar12)) {
    return;
  }
  cVar9 = (anonymous_namespace)::EarClip::Vert::InsideEdge(pVVar2,*(long *)*puVar4,lVar5,1);
  if (cVar9 != '\0') {
    plVar7 = (long *)puVar4[3];
    lVar8 = *plVar7;
    if (*(long *)(lVar6 + 8) != lVar8) {
      dVar3 = *(double *)(lVar8 + 0x20);
      dVar13 = dVar3 - dVar11;
      __x = *(double *)(lVar8 + 0x18) - dVar12;
      dVar12 = *(double *)(*(long *)(lVar8 + 0x40) + 0x18) - dVar12;
      dVar11 = *(double *)(*(long *)(lVar8 + 0x40) + 0x20) - dVar11;
      dVar10 = fma(__x,dVar11,(double)((ulong)dVar13 ^ _LC6) * dVar12);
      dVar11 = dVar12 * dVar12 + 0.0 + dVar11 * dVar11;
      dVar12 = __x * __x + 0.0 + dVar13 * dVar13;
      if (dVar11 <= dVar12) {
        dVar11 = dVar12;
      }
      if ((dVar10 * dVar10 * _LC7 <= dVar11 * (double)pVVar2 * (double)pVVar2) || (dVar10 <= 0.0)) {
        if (dVar1 <= dVar3) {
          cVar9 = (anonymous_namespace)::EarClip::Vert::InsideEdge(pVVar2,lVar8,lVar5,0);
          if (cVar9 != '\0') {
            return;
          }
        }
        else {
          cVar9 = (anonymous_namespace)::EarClip::Vert::InsideEdge(pVVar2,lVar5,*plVar7,0);
          if (cVar9 == '\0') {
            return;
          }
        }
      }
    }
    *plVar7 = lVar5;
    return;
  }
  return;
}



/* manifold::PolygonParams() */

undefined5 * manifold::PolygonParams(void)

{
  return &(anonymous_namespace)::params;
}



/* (anonymous namespace)::EarClip::ClipIfDegenerate(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >) */

void __thiscall (anonymous_namespace)::EarClip::ClipIfDegenerate(EarClip *this,int *param_2)

{
  double dVar1;
  Vert *pVVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  char cVar11;
  long in_FS_OFFSET;
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
  undefined8 local_40;
  int local_38;
  long local_30;
  
  do {
    lVar8 = *(long *)(param_2 + 0x10);
    local_30 = *(long *)(in_FS_OFFSET + 0x28);
    if ((param_2 != *(int **)(lVar8 + 0x38)) || (lVar9 = *(long *)(param_2 + 0xe), lVar9 == lVar8))
    goto LAB_001031db;
    dVar20 = *(double *)(lVar8 + 0x18);
    dVar1 = *(double *)(param_2 + 6);
    dVar21 = *(double *)(lVar8 + 0x20);
    dVar14 = *(double *)(param_2 + 8);
    pVVar2 = *(Vert **)(this + 0x110);
    dVar17 = dVar20 - dVar1;
    dVar16 = dVar21 - dVar14;
    if ((double)pVVar2 * (double)pVVar2 <= (dVar17 * dVar17 + 0.0 + dVar16 * dVar16) * _LC7) {
      dVar3 = *(double *)(lVar9 + 0x20);
      dVar4 = *(double *)(lVar9 + 0x18);
      dVar19 = dVar14 - dVar3;
      dVar18 = dVar20 - dVar4;
      dVar15 = dVar1 - dVar4;
      dVar13 = dVar21 - dVar3;
      dVar12 = fma(dVar15,dVar13,(double)((ulong)dVar19 ^ _LC6) * dVar18);
      dVar13 = dVar18 * dVar18 + 0.0 + dVar13 * dVar13;
      dVar15 = dVar15 * dVar15 + 0.0 + dVar19 * dVar19;
      if (dVar13 <= dVar15) {
        dVar13 = dVar15;
      }
      if (dVar13 * (double)pVVar2 * (double)pVVar2 < dVar12 * dVar12 * _LC7) {
LAB_001031db:
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
LAB_00103530:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if ((dVar4 - dVar1) * dVar17 + 0.0 + (dVar3 - dVar14) * dVar16 <= 0.0) goto LAB_001031db;
      cVar11 = Vert::InsideEdge(pVVar2,lVar9,*(undefined8 *)(lVar9 + 0x40),1);
      if (cVar11 == '\0') goto LAB_001031db;
    }
    dVar20 = dVar20 - *(double *)(lVar9 + 0x18);
    *(long *)(lVar9 + 0x40) = lVar8;
    dVar1 = _LC8;
    dVar21 = dVar21 - *(double *)(lVar9 + 0x20);
    *(long *)(lVar8 + 0x38) = lVar9;
    dVar16 = SQRT(dVar20 * dVar20 + 0.0 + dVar21 * dVar21);
    dVar20 = dVar20 / dVar16;
    dVar17 = 0.0;
    dVar14 = 0.0;
    if ((double)((ulong)dVar20 & _LC5) <= dVar1) {
      dVar17 = dVar21 / dVar16;
      dVar14 = dVar20;
    }
    *(double *)(lVar9 + 0x28) = dVar14;
    *(double *)(lVar9 + 0x30) = dVar17;
    iVar5 = *param_2;
    iVar6 = **(int **)(param_2 + 0xe);
    if (iVar6 != iVar5) {
      iVar7 = **(int **)(param_2 + 0x10);
      if ((iVar6 != iVar7) && (iVar5 != iVar7)) {
        puVar10 = *(undefined8 **)(this + 0xe0);
        local_40 = CONCAT44(iVar5,iVar6);
        local_38 = iVar7;
        if (puVar10 == *(undefined8 **)(this + 0xe8)) {
          std::vector<linalg::vec<int,3>,std::allocator<linalg::vec<int,3>>>::
          _M_realloc_insert<linalg::vec<int,3>>
                    ((vector<linalg::vec<int,3>,std::allocator<linalg::vec<int,3>>> *)(this + 0xd8),
                     puVar10,&local_40);
        }
        else {
          *(int *)(puVar10 + 1) = iVar7;
          *puVar10 = local_40;
          *(long *)(this + 0xe0) = (long)puVar10 + 0xc;
        }
      }
    }
    ClipIfDegenerate(this,*(undefined8 *)(param_2 + 0xe));
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00103530;
    param_2 = *(int **)(param_2 + 0x10);
  } while( true );
}



/* (anonymous namespace)::EarClip::Vert::EarCost(double, (anonymous
   namespace)::EarClip::IdxCollider&) const */

double __thiscall
(anonymous_namespace)::EarClip::Vert::EarCost(Vert *this,double param_1,IdxCollider *param_2)

{
  SparseIndices *pSVar1;
  uint *puVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  size_t __n;
  undefined1 *__src;
  int iVar8;
  double *pdVar9;
  long lVar10;
  undefined1 *__dest;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  _lambda_unsigned_long__1_ *p_Var15;
  int iVar16;
  long in_FS_OFFSET;
  double dVar17;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  double extraout_XMM0_Qa_02;
  double extraout_XMM0_Qa_03;
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double local_280;
  double local_270;
  double local_260;
  double local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  double local_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  double dStack_1a8;
  undefined8 local_1a0;
  double *local_198;
  IdxCollider *local_190;
  Vert *local_188;
  undefined4 *local_180;
  undefined4 *puStack_178;
  undefined1 *local_170;
  SparseIndices *pSStack_168;
  double *local_160;
  double *pdStack_158;
  uint auStack_148 [66];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = *(long *)(this + 0x38);
  dVar26 = *(double *)(*(long *)(this + 0x40) + 0x18);
  dVar19 = *(double *)(*(long *)(this + 0x40) + 0x20);
  dVar21 = *(double *)(lVar6 + 0x18);
  dVar23 = *(double *)(lVar6 + 0x20);
  dVar24 = (dVar26 + dVar21) * _LC18;
  local_280 = (dVar19 + dVar23) * _LC18;
  auVar18._0_8_ = dVar21 - dVar26;
  auVar18._8_8_ = dVar23 - dVar19;
  dVar22 = auVar18._0_8_ * auVar18._0_8_ + 0.0 + auVar18._8_8_ * auVar18._8_8_;
  local_1f0 = _LC7 / dVar22;
  dVar22 = SQRT(dVar22);
  auVar20._8_8_ = dVar22;
  auVar20._0_8_ = dVar22;
  local_1e8 = divpd(auVar18,auVar20);
  dVar25 = *(double *)(this + 0x20);
  dVar3 = *(double *)(this + 0x18);
  dVar23 = dVar23 - dVar25;
  dVar19 = dVar19 - dVar25;
  dVar26 = dVar26 - dVar3;
  dVar21 = dVar21 - dVar3;
  local_270 = ((*(double *)(lVar6 + 0x28) * *(double *)(this + 0x28) + 0.0 +
               *(double *)(lVar6 + 0x30) * *(double *)(this + 0x30)) - _LC19) - param_1;
  local_200 = param_1;
  local_1d8 = dVar24;
  dStack_1d0 = local_280;
  dVar17 = fma(dVar21,dVar19,(double)((ulong)dVar23 ^ _LC6) * dVar26);
  dVar26 = dVar26 * dVar26 + 0.0 + dVar19 * dVar19;
  dVar19 = dVar21 * dVar21 + 0.0 + dVar23 * dVar23;
  if (dVar26 <= dVar19) {
    dVar26 = dVar19;
  }
  if (dVar26 * param_1 * param_1 < dVar17 * dVar17 * _LC7) {
    dVar22 = dVar22 * _LC18;
    dVar19 = dVar24 - dVar22;
    dVar24 = dVar24 + dVar22;
    dVar21 = local_280 - dVar22;
    local_280 = local_280 + dVar22;
    dVar26 = dVar19;
    if (dVar19 < dVar24) {
      dVar26 = dVar24;
      dVar24 = dVar19;
    }
    local_260 = dVar21;
    if ((local_280 <= dVar21) && (local_260 = local_280, local_280 <= dVar21)) {
      local_280 = dVar21;
    }
    local_1b8 = 0.0;
    local_198 = &local_1c8;
    local_1a0 = 0;
    if (dVar3 <= dVar24) {
      dVar24 = dVar3;
    }
    if (dVar25 <= local_260) {
      local_260 = dVar25;
    }
    lVar6 = *(long *)(param_2 + 0x30);
    if (dVar25 <= local_280) {
      dVar25 = local_280;
    }
    pSVar1 = (SparseIndices *)(param_2 + 0x60);
    local_190 = (IdxCollider *)0x1;
    lVar7 = *(long *)param_2;
    local_180 = *(undefined4 **)(param_2 + 8);
    if (dVar3 <= dVar26) {
      dVar3 = dVar26;
    }
    local_170 = *(undefined1 **)(param_2 + 0x38);
    iVar16 = -1;
    uVar11 = 1;
    local_1c8 = dVar24;
    dStack_1c0 = local_260;
    local_1b0 = dVar3;
    dStack_1a8 = dVar25;
    local_188 = (Vert *)lVar7;
    puStack_178 = (undefined4 *)lVar6;
    pSStack_168 = pSVar1;
LAB_00103910:
    do {
      puVar2 = (uint *)(lVar6 + (long)((int)(uVar11 - 1) / 2) * 8);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      pdVar9 = (double *)((long)(int)uVar4 * 0x30 + lVar7);
      uVar11 = uVar5;
      if (((((dVar3 < *pdVar9) || (dVar25 < pdVar9[1])) || (0.0 < pdVar9[2])) ||
          ((pdVar9[3] < dVar24 || (pdVar9[4] < local_260)))) || (pdVar9[5] < local_1b8))
      goto LAB_00103b18;
      if ((uVar4 & 1) == 0) {
        __n = *(size_t *)(param_2 + 0x68);
        uVar14 = *(ulong *)(param_2 + 0x70);
        uVar12 = __n + 8;
        if (uVar12 < uVar14) {
          __dest = *(undefined1 **)(param_2 + 0x60);
        }
        else {
          if (uVar14 == 0) {
            uVar13 = 0x80;
          }
          else {
            uVar13 = uVar14 * 2;
            if (uVar14 * 2 < uVar12) {
              uVar13 = uVar12;
            }
            if (uVar13 <= uVar14) {
              __dest = *(undefined1 **)(param_2 + 0x60);
              goto LAB_00103b73;
            }
          }
          __dest = (undefined1 *)malloc(uVar13);
          __src = *(undefined1 **)(param_2 + 0x60);
          if (__n == 0) {
LAB_00103d29:
            if (__src != (undefined1 *)0x0) goto LAB_00103d76;
          }
          else {
            if ((long)__n < 2) {
              if (__n != 1) goto LAB_00103d29;
              *__dest = *__src;
            }
            else {
              __dest = (undefined1 *)memmove(__dest,__src,__n);
            }
LAB_00103d76:
            free(__src);
            uVar12 = *(long *)(param_2 + 0x68) + 8;
          }
          *(undefined1 **)(param_2 + 0x60) = __dest;
          *(ulong *)(param_2 + 0x70) = uVar13;
        }
LAB_00103b73:
        *(ulong *)(param_2 + 0x68) = uVar12;
        *(long *)(__dest + ((uVar12 & 0xfffffffffffffff8) - 8)) = (long)((int)uVar4 / 2);
      }
      iVar8 = manifold::collider_internal::
              FindCollision<manifold::Box,false,manifold::collider_internal::SeqCollisionRecorder<false>>
              ::RecordCollision((FindCollision<manifold::Box,false,manifold::collider_internal::SeqCollisionRecorder<false>>
                                 *)&local_198,uVar5,0,pSVar1);
      if ((int)uVar4 % 2 != 1 && iVar8 == 0) goto LAB_00103b2f;
      if (((int)uVar4 % 2 == 1) && (uVar11 = uVar4, iVar8 != 0)) {
        iVar16 = iVar16 + 1;
        auStack_148[iVar16] = uVar5;
      }
    } while( true );
  }
LAB_00103a59:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_270;
LAB_00103b18:
  iVar8 = manifold::collider_internal::
          FindCollision<manifold::Box,false,manifold::collider_internal::SeqCollisionRecorder<false>>
          ::RecordCollision((FindCollision<manifold::Box,false,manifold::collider_internal::SeqCollisionRecorder<false>>
                             *)&local_198,uVar5,0,pSVar1);
  if (iVar8 != 0) goto LAB_00103910;
LAB_00103b2f:
  if (-1 < iVar16) {
    lVar10 = (long)iVar16;
    iVar16 = iVar16 + -1;
    uVar11 = auStack_148[lVar10];
    goto LAB_00103910;
  }
  local_198 = (double *)0x0;
  local_1f8 = **(undefined4 **)(this + 0x38);
  local_1f4 = **(undefined4 **)(this + 0x40);
  uVar12 = *(ulong *)(param_2 + 0x68) >> 3;
  local_190 = param_2;
  local_188 = this;
  local_180 = &local_1f8;
  puStack_178 = &local_1f4;
  local_170 = local_1e8;
  pSStack_168 = (SparseIndices *)&local_200;
  local_160 = &local_1d8;
  pdStack_158 = &local_1f0;
  if (*(ulong *)(param_2 + 0x68) < 0x20) {
    uVar14 = 0;
  }
  else {
    p_Var15 = (_lambda_unsigned_long__1_ *)&local_190;
    uVar14 = (uVar12 - 4 & 0xfffffffffffffffc) + 4;
    do {
      pdVar9 = local_198;
      const::{lambda(unsigned_long)#1}::operator()(p_Var15,(long)local_198 + 1);
      dVar25 = extraout_XMM0_Qa_00;
      const::{lambda(unsigned_long)#1}::operator()(p_Var15,(ulong)pdVar9);
      if (dVar25 <= extraout_XMM0_Qa_01) {
        dVar25 = extraout_XMM0_Qa_01;
      }
      const::{lambda(unsigned_long)#1}::operator()(p_Var15,(long)pdVar9 + 3);
      uVar13 = (long)pdVar9 + 4;
      const::{lambda(unsigned_long)#1}::operator()(p_Var15,(long)pdVar9 + 2);
      dVar24 = extraout_XMM0_Qa_02;
      if (extraout_XMM0_Qa_02 <= extraout_XMM0_Qa_03) {
        dVar24 = extraout_XMM0_Qa_03;
      }
      if (dVar24 <= dVar25) {
        dVar24 = dVar25;
      }
      if (dVar24 <= local_270) {
        dVar24 = local_270;
      }
      local_270 = dVar24;
      local_198 = (double *)uVar13;
    } while (uVar13 != uVar14);
  }
  if (uVar12 != uVar14) {
    p_Var15 = (_lambda_unsigned_long__1_ *)&local_190;
    do {
      uVar13 = uVar14 + 1;
      const::{lambda(unsigned_long)#1}::operator()(p_Var15,uVar14);
      dVar25 = extraout_XMM0_Qa;
      if (extraout_XMM0_Qa <= local_270) {
        dVar25 = local_270;
      }
      local_270 = dVar25;
      uVar14 = uVar13;
      local_198 = (double *)uVar13;
    } while (uVar12 != uVar13);
  }
  *(undefined8 *)(param_2 + 0x68) = 0;
  goto LAB_00103a59;
}



/* (anonymous namespace)::EarClip::ProcessEar(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> > >, (anonymous
   namespace)::EarClip::IdxCollider&) */

void __thiscall
(anonymous_namespace)::EarClip::ProcessEar(EarClip *this,Vert *param_2,IdxCollider *param_3)

{
  _Rb_tree_node_base *p_Var1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long lVar7;
  char cVar8;
  void *pvVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double __x;
  double dVar13;
  double dVar14;
  Vert *pVVar15;
  double dVar16;
  double dVar17;
  Vert *local_30 [2];
  
  p_Var1 = (_Rb_tree_node_base *)(this + 0xb0);
  local_30[0] = param_2;
  if (p_Var1 != *(_Rb_tree_node_base **)(param_2 + 0x10)) {
    pvVar9 = (void *)std::_Rb_tree_rebalance_for_erase
                               (*(_Rb_tree_node_base **)(param_2 + 0x10),p_Var1);
    operator_delete(pvVar9,0x28);
    *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + -1;
    *(_Rb_tree_node_base **)(param_2 + 0x10) = p_Var1;
  }
  dVar2 = *(double *)(param_2 + 0x18);
  dVar3 = *(double *)(this + 0x110);
  dVar4 = *(double *)(param_2 + 0x20);
  dVar17 = *(double *)(*(long *)(param_2 + 0x40) + 0x18);
  dVar12 = *(double *)(*(long *)(param_2 + 0x40) + 0x20);
  dVar14 = dVar17 - dVar2;
  dVar13 = dVar12 - dVar4;
  if ((dVar14 * dVar14 + 0.0 + dVar13 * dVar13) * _LC7 < dVar3 * dVar3) {
    *(undefined8 *)(param_2 + 8) = _LC13;
    uVar11 = std::
             _Rb_tree<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::_Identity<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>,(anonymous_namespace)::EarClip::MinCost,std::allocator<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>>
             ::
             _M_insert_equal<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const&>
                       ((_Rb_tree<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::_Identity<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>,(anonymous_namespace)::EarClip::MinCost,std::allocator<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>>
                         *)(this + 0xa8),(__normal_iterator *)local_30);
    *(undefined8 *)(param_2 + 0x10) = uVar11;
    return;
  }
  lVar7 = *(long *)(param_2 + 0x38);
  pVVar15 = (Vert *)(dVar3 + dVar3);
  dVar5 = *(double *)(lVar7 + 0x20);
  dVar6 = *(double *)(lVar7 + 0x18);
  dVar16 = dVar4 - dVar5;
  dVar17 = dVar17 - dVar6;
  __x = dVar2 - dVar6;
  dVar12 = dVar12 - dVar5;
  dVar10 = fma(__x,dVar12,(double)((ulong)dVar16 ^ _LC6) * dVar17);
  dVar17 = dVar17 * dVar17 + 0.0 + dVar12 * dVar12;
  dVar12 = __x * __x + 0.0 + dVar16 * dVar16;
  if (dVar17 <= dVar12) {
    dVar17 = dVar12;
  }
  if (dVar17 * (double)pVVar15 * (double)pVVar15 < dVar10 * dVar10 * _LC7) {
    if (dVar10 <= 0.0) {
LAB_0010402b:
      *(undefined8 *)(param_2 + 8) = _LC19;
      return;
    }
  }
  else if (0.0 < (dVar6 - dVar2) * dVar14 + 0.0 + (dVar5 - dVar4) * dVar13) {
    cVar8 = Vert::InsideEdge(pVVar15,lVar7,*(undefined8 *)(lVar7 + 0x40),1);
    if (cVar8 == '\0') goto LAB_0010402b;
  }
  uVar11 = Vert::EarCost(param_2,dVar3,param_3);
  *(undefined8 *)(param_2 + 8) = uVar11;
  uVar11 = std::
           _Rb_tree<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::_Identity<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>,(anonymous_namespace)::EarClip::MinCost,std::allocator<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>>
           ::
           _M_insert_equal<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const&>
                     ((_Rb_tree<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::_Identity<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>,(anonymous_namespace)::EarClip::MinCost,std::allocator<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>>
                       *)(this + 0xa8),(__normal_iterator *)local_30);
  *(undefined8 *)(param_2 + 0x10) = uVar11;
  return;
}



/* std::_Function_handler<void (__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >), (anonymous
   namespace)::EarClip::TriangulatePoly(__gnu_cxx::__normal_iterator<(anonymous
   namespace)::EarClip::Vert*, std::vector<(anonymous namespace)::EarClip::Vert,
   std::allocator<(anonymous namespace)::EarClip::Vert> >
   >)::{lambda(__gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*,
   std::vector<(anonymous namespace)::EarClip::Vert, std::allocator<(anonymous
   namespace)::EarClip::Vert> > >)#1}>::_M_invoke(std::_Any_data const&,
   __gnu_cxx::__normal_iterator<(anonymous namespace)::EarClip::Vert*, std::vector<(anonymous
   namespace)::EarClip::Vert, std::allocator<(anonymous namespace)::EarClip::Vert> > >&&) */

void std::
     _Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::TriangulatePoly(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
     ::_M_invoke(_Any_data *param_1,__normal_iterator *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1;
  (anonymous_namespace)::EarClip::ProcessEar((EarClip *)puVar1[1],*(undefined8 *)param_2,*puVar1);
  *(int *)puVar1[2] = *(int *)puVar1[2] + 1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::TriangulateIdx(std::vector<std::vector<manifold::PolyVert,
   std::allocator<manifold::PolyVert> >, std::allocator<std::vector<manifold::PolyVert,
   std::allocator<manifold::PolyVert> > > > const&, double) */

_Rb_tree_node_base * __thiscall
manifold::TriangulateIdx(manifold *this,vector *param_1,double param_2)

{
  long *plVar1;
  size_t __size;
  double *pdVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  _Rb_tree_node *p_Var7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  _Rb_tree_node *p_Var14;
  double *pdVar15;
  _Rb_tree_node_base *p_Var16;
  long *plVar17;
  _Rb_tree_node_base *p_Var18;
  undefined8 *puVar19;
  _Rb_tree_node_base *p_Var20;
  void *pvVar21;
  void *__s;
  ulong uVar22;
  code *pcVar23;
  ulong uVar24;
  _Rb_tree_node_base *p_Var25;
  long lVar26;
  ulong uVar27;
  _Rb_tree_node_base *p_Var28;
  long lVar29;
  EarClip *pEVar30;
  _Rb_tree_node_base *p_Var31;
  long *plVar32;
  _Rb_tree_node_base *p_Var33;
  code *pcVar34;
  long lVar35;
  void *pvVar36;
  long *plVar37;
  _Rb_tree_node_base *p_Var38;
  ulong uVar39;
  _Rb_tree_node_base *p_Var40;
  _Rb_tree_node_base *p_Var41;
  long in_FS_OFFSET;
  bool bVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  _Rb_tree_node_base *local_538;
  Vec *local_528;
  ulong local_4f8;
  _Rb_tree_node_base *local_4b8;
  Vec *pVStack_4b0;
  _Rb_tree_node_base *local_4a8;
  _Rb_tree_node_base **pp_Stack_4a0;
  _Rb_tree_node_base *local_498;
  code *pcStack_490;
  Vec *local_488;
  _Rb_tree_node_base *local_480;
  Collider *local_478;
  EarClip *pEStack_470;
  code *local_468;
  code *pcStack_460;
  _Rb_tree_node_base *local_458;
  _Rb_tree_node_base **local_450;
  _Rb_tree_node_base *local_440;
  int local_430;
  int local_42c;
  _Rb_tree_node_base *local_428;
  ulong local_420;
  double local_418;
  double local_410;
  _Rb_tree_node_base *local_408;
  _Rb_tree_node_base *local_400;
  _Rb_tree_node_base *local_3f8;
  _Rb_tree_node_base *local_3f0;
  _Rb_tree_node_base *local_3e8;
  _Rb_tree_node_base *local_3e0;
  _Rb_tree_node_base *local_3d8;
  _Rb_tree_node_base *local_3d0;
  _Rb_tree_node_base *local_3c8;
  undefined8 local_3c0;
  _Rb_tree_node_base *local_3b8;
  _Rb_tree_node_base *local_3b0;
  _Rb_tree_node_base *local_3a8;
  _Rb_tree_node_base *local_3a0;
  _Rb_tree_node_base *local_398;
  _Rb_tree_node_base *local_390;
  long local_388;
  long lStack_380;
  undefined1 local_378 [16];
  _Rb_tree_node_base *local_368;
  void *local_358;
  undefined1 local_350 [16];
  _Rb_tree_node_base *local_338;
  undefined1 local_330 [16];
  undefined1 local_318 [16];
  void *local_308;
  _Rb_tree_node_base *local_2f8;
  double dStack_2f0;
  _Rb_tree_node_base *local_2e8;
  double dStack_2e0;
  _Rb_tree_node_base *local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  _Rb_tree_node_base *local_2b8;
  double local_2b0;
  undefined8 local_2a8;
  _Rb_tree_node_base *local_2a0;
  double dStack_298;
  undefined8 local_290;
  _Rb_tree_node_base *local_288;
  undefined1 auStack_280 [16];
  _Rb_tree_node_base *p_Stack_270;
  double dStack_268;
  undefined8 local_260;
  void *pvStack_258;
  undefined1 local_250 [16];
  undefined1 local_240 [16];
  undefined1 local_230 [16];
  undefined1 local_220 [16];
  _Rb_tree_node_base *local_208;
  _Rb_tree_node_base *p_Stack_200;
  _Rb_tree_node_base *local_1f8;
  undefined4 local_1e8 [2];
  _Rb_tree_node_base *local_1e0;
  _Rb_tree_node_base *local_1d8;
  _Rb_tree_node_base *local_1d0;
  long local_1c8;
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  _Rb_tree<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::pair<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const,manifold::Rect>,std::_Select1st<std::pair<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const,manifold::Rect>>,std::less<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>,std::allocator<std::pair<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const,manifold::Rect>>>
  local_190 [8];
  undefined4 local_188 [2];
  _Rb_tree_node_base *local_180;
  _Rb_tree_node_base *local_178;
  _Rb_tree_node_base *local_170;
  long local_168;
  undefined4 local_158 [2];
  _Rb_tree_node *local_150;
  _Rb_tree_node_base *local_148;
  _Rb_tree_node_base *local_140;
  long local_138;
  undefined1 local_130 [16];
  undefined8 *local_120;
  _Rb_tree_node_base *local_118;
  double dStack_110;
  _Rb_tree_node_base *local_108;
  double dStack_100;
  double local_f8;
  undefined1 local_e8 [16];
  code *local_d8;
  code *pcStack_d0;
  undefined1 local_c8 [16];
  code *local_b8;
  code *pcStack_b0;
  undefined1 local_a8 [16];
  code *local_98;
  code *pcStack_90;
  undefined1 local_88 [16];
  code *local_78;
  code *pcStack_70;
  undefined1 local_68 [16];
  _Rb_tree_node_base *local_58;
  code *pcStack_50;
  long local_40;
  
  plVar17 = *(long **)param_1;
  plVar37 = *(long **)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  plVar32 = plVar17;
  p_Var25 = (_Rb_tree_node_base *)this;
  if (plVar17 != plVar37) {
    while( true ) {
      pdVar15 = (double *)*plVar32;
      lVar35 = plVar32[1] - (long)pdVar15;
      pdVar2 = (double *)((long)pdVar15 + lVar35 + -0x18);
      dVar49 = *pdVar15 - *pdVar2;
      dVar48 = pdVar15[1] - pdVar2[1];
      uVar24 = 0;
      uVar22 = (lVar35 >> 3) * -0x5555555555555555;
      dVar43 = SQRT(dVar49 * dVar49 + 0.0 + dVar48 * dVar48);
      dVar47 = dVar49 / dVar43;
      dVar43 = dVar48 / dVar43;
      if (lVar35 != 0) break;
LAB_00104702:
      plVar32 = plVar32 + 3;
      if (plVar37 == plVar32) goto code_r0x0010470f;
    }
LAB_0010424d:
    uVar24 = uVar24 + 1;
    dVar45 = dVar49;
    dVar46 = dVar48;
    if (uVar24 < uVar22) {
      dVar45 = pdVar15[3] - *pdVar15;
      dVar46 = pdVar15[4] - pdVar15[1];
    }
    dVar44 = dVar47 * dVar46 - dVar43 * dVar45;
    if ((0.0 < dVar44) &&
       ((param_2 <= (double)((ulong)dVar44 & _LC5) ||
        (0.0 <= dVar47 * dVar45 + 0.0 + dVar43 * dVar46)))) goto LAB_00104213;
    pcVar34 = (code *)local_1e8;
    lVar35 = 0;
    local_4a8 = (_Rb_tree_node_base *)local_188;
    local_1f8 = (_Rb_tree_node_base *)0x0;
    local_1e8[0] = 0;
    local_1e0 = (_Rb_tree_node_base *)0x0;
    local_1c8 = 0;
    local_188[0] = 0;
    local_180 = (_Rb_tree_node_base *)0x0;
    local_168 = 0;
    local_158[0] = 0;
    local_150 = (_Rb_tree_node *)0x0;
    local_138 = 0;
    local_120 = (undefined8 *)0x0;
    local_208 = (_Rb_tree_node_base *)0x0;
    p_Stack_200 = (_Rb_tree_node_base *)0x0;
    local_1c0 = (undefined1  [16])0x0;
    local_1b0 = (undefined1  [16])0x0;
    local_1a0 = (undefined1  [16])0x0;
    local_130 = (undefined1  [16])0x0;
    local_118 = _LC10;
    dStack_110 = _UNK_00108278;
    local_108 = __LC12;
    dStack_100 = _UNK_00108298;
    plVar32 = plVar17;
    do {
      plVar1 = plVar32 + 1;
      lVar29 = *plVar32;
      plVar32 = plVar32 + 3;
      lVar35 = lVar35 + (*plVar1 - lVar29 >> 3) * -0x5555555555555555;
    } while (plVar37 != plVar32);
    uVar22 = lVar35 + ((long)plVar37 - (long)plVar17 >> 3) * 0x5555555555555556;
    local_1d8 = (_Rb_tree_node_base *)pcVar34;
    local_1d0 = (_Rb_tree_node_base *)pcVar34;
    local_178 = local_4a8;
    local_170 = local_4a8;
    local_148 = (_Rb_tree_node_base *)local_158;
    local_140 = (_Rb_tree_node_base *)local_158;
    local_f8 = param_2;
    if (0x1c71c71c71c71c7 < uVar22) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::reserve");
    }
    if (uVar22 == 0) {
LAB_00104403:
      uVar22 = _LC5;
      dVar47 = _LC8;
      local_368 = (_Rb_tree_node_base *)0x0;
      local_378 = (undefined1  [16])0x0;
      p_Var16 = (_Rb_tree_node_base *)0x0;
      local_208 = p_Stack_200;
      do {
        p_Var18 = local_368;
        puVar19 = (undefined8 *)*plVar17;
        p_Stack_270 = (_Rb_tree_node_base *)*puVar19;
        dStack_268 = (double)puVar19[1];
        local_250 = (undefined1  [16])0x0;
        local_288 = (_Rb_tree_node_base *)CONCAT44(local_288._4_4_,*(undefined4 *)(puVar19 + 2));
        auVar50._8_8_ = 0;
        auVar50._0_8_ = (_Rb_tree_node_base *)local_158;
        auStack_280 = auVar50 << 0x40;
        local_260 = 0;
        pvStack_258 = (void *)0x0;
        std::
        vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>
        ::emplace_back<(anonymous_namespace)::EarClip::Vert>
                  ((vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>
                    *)&local_208,(Vert *)&local_288);
        p_Var33 = p_Stack_200;
        p_Var28 = *(_Rb_tree_node_base **)(p_Stack_200 + -0x30);
        dVar43 = *(double *)(p_Stack_200 + -0x28);
        p_Var25 = p_Stack_200 + -0x48;
        if ((double)p_Var28 <= (double)local_118) {
          local_118 = p_Var28;
        }
        if (dVar43 <= dStack_110) {
          dStack_110 = dVar43;
        }
        if ((double)p_Var28 <= (double)local_108) {
          p_Var28 = local_108;
        }
        if (dVar43 <= dStack_100) {
          dVar43 = dStack_100;
        }
        p_Var38 = p_Var25;
        local_2b8 = p_Var25;
        local_108 = p_Var28;
        dStack_100 = dVar43;
        if (p_Var18 == p_Var16) {
          std::
          vector<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::allocator<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>>
          ::
          _M_realloc_insert<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const&>
                    ((vector<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::allocator<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>>
                      *)local_378,p_Var16,&local_2b8);
          p_Var16 = (_Rb_tree_node_base *)local_378._8_8_;
          if (puVar19 + 3 != (undefined8 *)plVar17[1]) goto LAB_00104527;
        }
        else {
          *(_Rb_tree_node_base **)p_Var16 = p_Var25;
          p_Var16 = p_Var16 + 8;
          local_378._8_8_ = p_Var16;
          if (puVar19 + 3 != (undefined8 *)plVar17[1]) {
LAB_00104527:
            puVar19 = puVar19 + 3;
            p_Var28 = p_Var25;
            do {
              p_Var18 = (_Rb_tree_node_base *)*puVar19;
              dVar43 = (double)puVar19[1];
              local_288 = (_Rb_tree_node_base *)
                          CONCAT44(local_288._4_4_,*(undefined4 *)(puVar19 + 2));
              if ((double)p_Var18 <= (double)local_118) {
                local_118 = p_Var18;
              }
              if ((double)p_Var18 <= (double)local_108) {
                p_Var18 = local_108;
              }
              auVar13._8_8_ = 0;
              auVar13._0_8_ = (_Rb_tree_node_base *)local_158;
              auStack_280 = auVar13 << 0x40;
              if (dVar43 <= dStack_110) {
                dStack_110 = dVar43;
              }
              if (dVar43 <= dStack_100) {
                dVar43 = dStack_100;
              }
              p_Stack_270 = (_Rb_tree_node_base *)*puVar19;
              dStack_268 = (double)puVar19[1];
              local_260 = 0;
              pvStack_258 = (void *)0x0;
              local_250 = (undefined1  [16])0x0;
              local_108 = p_Var18;
              dStack_100 = dVar43;
              std::
              vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>
              ::emplace_back<(anonymous_namespace)::EarClip::Vert>
                        ((vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>
                          *)&local_208,(Vert *)&local_288);
              dVar48 = *(double *)(p_Stack_200 + -0x30) - *(double *)(p_Var28 + 0x18);
              p_Var38 = p_Stack_200 + -0x48;
              dVar45 = *(double *)(p_Stack_200 + -0x28) - *(double *)(p_Var28 + 0x20);
              *(_Rb_tree_node_base **)(p_Var28 + 0x40) = p_Var38;
              *(_Rb_tree_node_base **)(p_Stack_200 + -0x10) = p_Var28;
              dVar46 = 0.0;
              dVar49 = SQRT(dVar48 * dVar48 + 0.0 + dVar45 * dVar45);
              dVar48 = dVar48 / dVar49;
              dVar43 = 0.0;
              if ((double)(uVar22 & (ulong)dVar48) <= dVar47) {
                dVar46 = dVar45 / dVar49;
                dVar43 = dVar48;
              }
              *(double *)(p_Var28 + 0x28) = dVar43;
              *(double *)(p_Var28 + 0x30) = dVar46;
              puVar19 = puVar19 + 3;
              p_Var28 = p_Var38;
            } while ((undefined8 *)plVar17[1] != puVar19);
          }
        }
        dVar48 = *(double *)(p_Var33 + -0x30) - *(double *)(p_Var38 + 0x18);
        *(_Rb_tree_node_base **)(p_Var38 + 0x40) = p_Var25;
        dVar45 = *(double *)(p_Var33 + -0x28) - *(double *)(p_Var38 + 0x20);
        *(_Rb_tree_node_base **)(p_Var33 + -0x10) = p_Var38;
        dVar46 = 0.0;
        dVar49 = SQRT(dVar48 * dVar48 + 0.0 + dVar45 * dVar45);
        dVar48 = dVar48 / dVar49;
        dVar43 = 0.0;
        if ((double)(uVar22 & (ulong)dVar48) <= dVar47) {
          dVar46 = dVar45 / dVar49;
          dVar43 = dVar48;
        }
        *(double *)(p_Var38 + 0x28) = dVar43;
        *(double *)(p_Var38 + 0x30) = dVar46;
        plVar17 = plVar17 + 3;
      } while (plVar37 != plVar17);
      lVar35 = ((long)p_Var16 - local_378._0_8_ >> 3) * 2;
      p_Var18 = (_Rb_tree_node_base *)local_378._0_8_;
    }
    else {
      p_Var28 = (_Rb_tree_node_base *)operator_new(uVar22 * 0x48);
      p_Var25 = p_Var28;
      for (p_Var16 = local_208; p_Stack_200 != p_Var16; p_Var16 = p_Var16 + 0x48) {
        lVar29 = *(long *)(p_Var16 + 8);
        lVar35 = *(long *)(p_Var16 + 0x40);
        lVar26 = *(long *)(p_Var16 + 0x20);
        lVar8 = *(long *)(p_Var16 + 0x28);
        lVar9 = *(long *)(p_Var16 + 0x30);
        lVar10 = *(long *)(p_Var16 + 0x38);
        *(long *)p_Var25 = *(long *)p_Var16;
        *(long *)(p_Var25 + 8) = lVar29;
        lVar29 = *(long *)(p_Var16 + 0x10);
        lVar11 = *(long *)(p_Var16 + 0x18);
        *(long *)(p_Var25 + 0x20) = lVar26;
        *(long *)(p_Var25 + 0x28) = lVar8;
        *(long *)(p_Var25 + 0x10) = lVar29;
        *(long *)(p_Var25 + 0x18) = lVar11;
        *(long *)(p_Var25 + 0x30) = lVar9;
        *(long *)(p_Var25 + 0x38) = lVar10;
        *(long *)(p_Var25 + 0x40) = lVar35;
        p_Var25 = p_Var25 + 0x48;
      }
      if (local_208 != (_Rb_tree_node_base *)0x0) {
        operator_delete(local_208,(long)local_1f8 - (long)local_208);
      }
      plVar17 = *(long **)param_1;
      plVar37 = *(long **)(param_1 + 8);
      local_1f8 = p_Var28 + uVar22 * 0x48;
      local_368 = (_Rb_tree_node_base *)0x0;
      local_378 = (undefined1  [16])0x0;
      p_Stack_200 = p_Var28;
      if (plVar37 != plVar17) goto LAB_00104403;
      lVar35 = 0;
      p_Var18 = (_Rb_tree_node_base *)0x0;
      p_Var16 = (_Rb_tree_node_base *)0x0;
      local_208 = p_Var28;
    }
    if (local_f8 < 0.0) {
      local_f8 = (double)((ulong)dStack_100 & _LC5);
      if ((double)((ulong)dStack_100 & _LC5) <= (double)((ulong)dStack_110 & _LC5)) {
        local_f8 = (double)((ulong)dStack_110 & _LC5);
      }
      dVar47 = (double)((ulong)local_108 & _LC5);
      if ((double)((ulong)local_108 & _LC5) <= (double)((ulong)local_118 & _LC5)) {
        dVar47 = (double)((ulong)local_118 & _LC5);
      }
      if (local_f8 <= dVar47) {
        local_f8 = dVar47;
      }
      local_f8 = _LC21 * local_f8;
    }
    std::vector<linalg::vec<int,3>,std::allocator<linalg::vec<int,3>>>::reserve
              ((vector<linalg::vec<int,3>,std::allocator<linalg::vec<int,3>>> *)local_130,
               ((long)p_Stack_200 - (long)local_208 >> 3) * -0x71c71c71c71c71c7 + lVar35);
    p_Var25 = local_208;
    if (local_208 != p_Stack_200) {
      do {
        p_Var28 = p_Var25 + 0x48;
        (anonymous_namespace)::EarClip::ClipIfDegenerate((EarClip *)&local_208,p_Var25);
        p_Var25 = p_Var28;
      } while (p_Stack_200 != p_Var28);
    }
    local_498 = (_Rb_tree_node_base *)pcVar34;
    if (p_Var18 != p_Var16) {
      local_528 = (Vec *)&local_2f8;
      p_Var28 = (_Rb_tree_node_base *)&local_400;
      local_538 = p_Var18;
      p_Var33 = (_Rb_tree_node_base *)&local_428;
      do {
        p_Var38 = p_Stack_200;
        p_Var31 = *(_Rb_tree_node_base **)local_538;
        local_418 = 0.0;
        local_388 = *(long *)(p_Var31 + 0x18);
        lStack_380 = *(long *)(p_Var31 + 0x20);
        local_2f8 = _LC10;
        dStack_2f0 = _UNK_00108278;
        local_2e8 = __LC12;
        dStack_2e0 = _UNK_00108298;
        local_420 = _LC13;
        local_410 = 0.0;
        local_d8 = (code *)0x0;
        pcStack_d0 = (code *)0x0;
        local_e8 = (undefined1  [16])0x0;
        local_428 = p_Var31;
        plVar17 = (long *)operator_new(0x30);
        local_e8._0_8_ = plVar17;
        *plVar17 = (long)local_528;
        plVar17[1] = (long)&local_388;
        plVar17[2] = (long)&local_418;
        plVar17[3] = (long)&local_410;
        plVar17[4] = (long)&local_420;
        plVar17[5] = (long)&local_428;
        local_d8 = std::
                   _Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::FindStart(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
                   ::_M_manager;
        pcStack_d0 = std::
                     _Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::FindStart(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
                     ::_M_invoke;
        pcVar23 = std::
                  _Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::FindStart(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
                  ::_M_manager;
        p_Var20 = p_Var31;
        do {
          while( true ) {
            p_Var41 = *(_Rb_tree_node_base **)(p_Var20 + 0x40);
            p_Var25 = *(_Rb_tree_node_base **)(p_Var41 + 0x38);
            p_Var40 = p_Stack_200;
            local_4b8 = (_Rb_tree_node_base *)local_158;
            if (p_Var20 == p_Var25) break;
            p_Var31 = p_Var25;
            if (p_Var25 == *(_Rb_tree_node_base **)(*(long *)(p_Var25 + 0x40) + 0x38)) {
              if (*(long *)(p_Var25 + 0x40) == *(long *)(p_Var25 + 0x38)) goto LAB_00104c58;
              local_408 = p_Var25;
              if (pcVar23 == (code *)0x0) goto LAB_0010686d;
              p_Var33 = (_Rb_tree_node_base *)&local_408;
              (*pcStack_d0)(local_e8);
              p_Var41 = *(_Rb_tree_node_base **)(p_Var25 + 0x40);
              pcVar23 = local_d8;
            }
            p_Var20 = p_Var41;
            p_Var40 = p_Var41;
            if (p_Var25 == p_Var41) goto LAB_00104c58;
          }
          if (p_Var41 == *(_Rb_tree_node_base **)(p_Var20 + 0x38)) break;
          p_Var41 = p_Var20;
          local_400 = p_Var20;
          if (pcVar23 == (code *)0x0) goto LAB_0010686d;
          p_Var33 = p_Var28;
          (*pcStack_d0)(local_e8);
          p_Var20 = *(_Rb_tree_node_base **)(p_Var20 + 0x40);
          pcVar23 = local_d8;
          p_Var40 = p_Var20;
        } while (p_Var31 != p_Var20);
LAB_00104c58:
        if (pcVar23 != (code *)0x0) {
          p_Var33 = (_Rb_tree_node_base *)local_e8;
          (*pcVar23)(p_Var33,p_Var33,3);
        }
        if (p_Var38 != p_Var40) {
          local_418 = local_418 + local_410;
          dVar47 = dStack_2e0 - dStack_2f0;
          if (dStack_2e0 - dStack_2f0 <= (double)local_2e8 - (double)local_2f8) {
            dVar47 = (double)local_2e8 - (double)local_2f8;
          }
          dVar47 = local_f8 * dVar47;
          if ((_LC8 < (double)(local_420 & _LC5)) || ((double)((ulong)dVar47 ^ _LC6) <= local_418))
          {
            if (local_1a0._0_8_ == local_1a0._8_8_) {
              p_Var33 = (_Rb_tree_node_base *)local_1a0._0_8_;
              std::
              vector<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::allocator<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>>
              ::
              _M_realloc_insert<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const&>
                        ((vector<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::allocator<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>>
                          *)(local_1b0 + 8),local_1a0._0_8_,(_Rb_tree_node_base *)&local_428);
            }
            else {
              p_Var33 = (_Rb_tree_node_base *)(local_1a0._0_8_ + 8);
              *(_Rb_tree_node_base **)local_1a0._0_8_ = local_428;
              local_1a0._0_8_ = p_Var33;
            }
            if (dVar47 < local_418) {
              if (local_1c0._8_8_ == local_1b0._0_8_) {
                p_Var33 = (_Rb_tree_node_base *)local_1c0._8_8_;
                std::
                vector<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::allocator<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>>
                ::
                _M_realloc_insert<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const&>
                          ((vector<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::allocator<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>>
                            *)local_1c0,local_1c0._8_8_,(_Rb_tree_node_base *)&local_428);
              }
              else {
                p_Var33 = (_Rb_tree_node_base *)(local_1c0._8_8_ + 8);
                *(_Rb_tree_node_base **)local_1c0._8_8_ = local_428;
                local_1c0._8_8_ = p_Var33;
              }
            }
          }
          else {
            if (local_1e0 == (_Rb_tree_node_base *)0x0) {
              bVar42 = true;
              p_Var25 = (_Rb_tree_node_base *)pcVar34;
            }
            else {
              p_Var33 = local_1e0;
              do {
                while (p_Var25 = p_Var33,
                      *(double *)(*(long *)(p_Var25 + 0x20) + 0x18) < *(double *)(local_428 + 0x18))
                {
                  p_Var33 = *(_Rb_tree_node_base **)(p_Var25 + 0x10);
                  if (*(_Rb_tree_node_base **)(p_Var25 + 0x10) == (_Rb_tree_node_base *)0x0)
                  goto LAB_00106059;
                }
                p_Var33 = *(_Rb_tree_node_base **)(p_Var25 + 0x18);
              } while (*(_Rb_tree_node_base **)(p_Var25 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_00106059:
              bVar42 = true;
              if (p_Var25 != (_Rb_tree_node_base *)pcVar34) {
                bVar42 = *(double *)(*(long *)(p_Var25 + 0x20) + 0x18) <
                         *(double *)(local_428 + 0x18);
              }
            }
            p_Var33 = (_Rb_tree_node_base *)operator_new(0x28);
            *(_Rb_tree_node_base **)(p_Var33 + 0x20) = local_428;
            std::_Rb_tree_insert_and_rebalance(bVar42,p_Var33,p_Var25,(_Rb_tree_node_base *)pcVar34)
            ;
            p_Var25 = local_428;
            p_Var33 = (_Rb_tree_node_base *)&local_288;
            local_1c8 = local_1c8 + 1;
            local_288 = local_428;
            auStack_280._8_8_ = dStack_2f0;
            auStack_280._0_8_ = local_2f8;
            p_Stack_270 = local_2e8;
            dStack_268 = dStack_2e0;
            auVar50 = std::
                      _Rb_tree<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::pair<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const,manifold::Rect>,std::_Select1st<std::pair<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const,manifold::Rect>>,std::less<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>,std::allocator<std::pair<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const,manifold::Rect>>>
                      ::_M_get_insert_unique_pos(local_190,(__normal_iterator *)p_Var33);
            p_Var38 = auVar50._8_8_;
            if (p_Var38 != (_Rb_tree_node_base *)0x0) {
              if ((auVar50._0_8_ == 0) && (p_Var38 != local_4a8)) {
                bVar42 = p_Var25 < *(_Rb_tree_node_base **)(p_Var38 + 0x20);
              }
              else {
                bVar42 = true;
              }
              p_Var33 = (_Rb_tree_node_base *)operator_new(0x48);
              *(_Rb_tree_node_base **)(p_Var33 + 0x20) = local_288;
              *(undefined8 *)(p_Var33 + 0x28) = auStack_280._0_8_;
              *(undefined8 *)(p_Var33 + 0x30) = auStack_280._8_8_;
              *(_Rb_tree_node_base **)(p_Var33 + 0x38) = p_Stack_270;
              *(double *)(p_Var33 + 0x40) = dStack_268;
              std::_Rb_tree_insert_and_rebalance(bVar42,p_Var33,p_Var38,local_4a8);
              local_168 = local_168 + 1;
            }
          }
        }
        local_538 = local_538 + 8;
      } while (p_Var16 != local_538);
    }
    if (p_Var18 != (_Rb_tree_node_base *)0x0) {
      operator_delete(p_Var18,(long)local_368 - (long)p_Var18);
    }
    pEVar30 = (EarClip *)&local_208;
    local_4b8 = local_1d8;
    if (local_1d8 != (_Rb_tree_node_base *)pcVar34) {
      local_538 = (_Rb_tree_node_base *)&local_3f8;
      p_Var16 = (_Rb_tree_node_base *)&local_3b0;
      do {
        p_Var33 = *(_Rb_tree_node_base **)(local_4b8 + 0x20);
        p_Var28 = local_180;
        p_Var25 = local_4a8;
        local_3f8 = p_Var33;
        if (local_180 == (_Rb_tree_node_base *)0x0) {
LAB_001061ea:
          p_Var28 = (_Rb_tree_node_base *)operator_new(0x48);
          dVar43 = _UNK_00108298;
          p_Var25 = __LC12;
          dVar47 = _UNK_00108278;
          *(_Rb_tree_node_base **)(p_Var28 + 0x28) = _LC10;
          *(double *)(p_Var28 + 0x30) = dVar47;
          *(_Rb_tree_node_base **)(p_Var28 + 0x20) = local_3f8;
          *(_Rb_tree_node_base **)(p_Var28 + 0x38) = p_Var25;
          *(double *)(p_Var28 + 0x40) = dVar43;
          if ((local_168 != 0) && (*(ulong *)(local_170 + 0x20) < *(ulong *)(p_Var28 + 0x20))) {
            bVar42 = false;
            p_Var25 = local_170;
LAB_00106326:
            if ((p_Var25 == local_4a8) || (bVar42)) {
              bVar42 = true;
            }
            else {
LAB_00106347:
              bVar42 = *(ulong *)(p_Var28 + 0x20) < *(ulong *)(p_Var25 + 0x20);
            }
            goto LAB_00104f6b;
          }
          auVar50 = std::
                    _Rb_tree<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::pair<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const,manifold::Rect>,std::_Select1st<std::pair<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const,manifold::Rect>>,std::less<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>,std::allocator<std::pair<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const,manifold::Rect>>>
                    ::_M_get_insert_unique_pos(local_190,(__normal_iterator *)(p_Var28 + 0x20));
joined_r0x00106247:
          p_Var25 = auVar50._0_8_;
          if (auVar50._8_8_ != (_Rb_tree_node_base *)0x0) {
            bVar42 = p_Var25 != (_Rb_tree_node_base *)0x0;
            p_Var25 = auVar50._8_8_;
            goto LAB_00106326;
          }
LAB_0010624d:
          p_Var33 = (_Rb_tree_node_base *)0x48;
          operator_delete(p_Var28,0x48);
        }
        else {
          do {
            while( true ) {
              p_Var18 = p_Var28;
              if (*(_Rb_tree_node_base **)(p_Var18 + 0x20) < p_Var33) break;
              p_Var28 = *(_Rb_tree_node_base **)(p_Var18 + 0x10);
              p_Var25 = p_Var18;
              if (*(_Rb_tree_node_base **)(p_Var18 + 0x10) == (_Rb_tree_node_base *)0x0)
              goto LAB_00104ed9;
            }
            p_Var28 = *(_Rb_tree_node_base **)(p_Var18 + 0x18);
          } while (*(_Rb_tree_node_base **)(p_Var18 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_00104ed9:
          if (p_Var25 == local_4a8) goto LAB_001061ea;
          if (*(_Rb_tree_node_base **)(p_Var25 + 0x20) <= p_Var33) goto LAB_00104f8c;
          p_Var28 = (_Rb_tree_node_base *)operator_new(0x48);
          p_Var38 = local_3f8;
          dVar43 = _UNK_00108298;
          p_Var33 = __LC12;
          dVar47 = _UNK_00108278;
          p_Var18 = _LC10;
          *(_Rb_tree_node_base **)(p_Var28 + 0x20) = local_3f8;
          *(_Rb_tree_node_base **)(p_Var28 + 0x28) = p_Var18;
          *(double *)(p_Var28 + 0x30) = dVar47;
          *(_Rb_tree_node_base **)(p_Var28 + 0x38) = p_Var33;
          *(double *)(p_Var28 + 0x40) = dVar43;
          if (*(_Rb_tree_node_base **)(p_Var25 + 0x20) <= local_3f8) {
            if (local_3f8 <= *(_Rb_tree_node_base **)(p_Var25 + 0x20)) goto LAB_0010624d;
            if (local_170 != p_Var25) {
              p_Var18 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var25);
              if (*(_Rb_tree_node_base **)(p_Var18 + 0x20) <= p_Var38) goto LAB_001062fe;
              if (*(long *)(p_Var25 + 0x18) != 0) {
                bVar42 = true;
                p_Var25 = p_Var18;
                goto LAB_00106326;
              }
            }
            goto LAB_00106347;
          }
          if (local_178 != p_Var25) {
            p_Var18 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var25);
            if (p_Var38 <= *(_Rb_tree_node_base **)(p_Var18 + 0x20)) {
LAB_001062fe:
              auVar50 = std::
                        _Rb_tree<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::pair<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const,manifold::Rect>,std::_Select1st<std::pair<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const,manifold::Rect>>,std::less<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>,std::allocator<std::pair<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const,manifold::Rect>>>
                        ::_M_get_insert_unique_pos(local_190,(__normal_iterator *)(p_Var28 + 0x20));
              goto joined_r0x00106247;
            }
            if (*(long *)(p_Var18 + 0x18) != 0) goto LAB_00104f60;
            bVar42 = false;
            p_Var25 = p_Var18;
            goto LAB_00106326;
          }
LAB_00104f60:
          bVar42 = true;
LAB_00104f6b:
          p_Var33 = p_Var28;
          std::_Rb_tree_insert_and_rebalance(bVar42,p_Var28,p_Var25,local_4a8);
          local_168 = local_168 + 1;
          p_Var25 = p_Var28;
        }
LAB_00104f8c:
        local_2c8 = *(double *)(p_Var25 + 0x38);
        dStack_2c0 = *(double *)(p_Var25 + 0x40);
        local_430 = 1;
        local_2d8 = *(_Rb_tree_node_base **)(p_Var25 + 0x28);
        dStack_2d0 = *(double *)(p_Var25 + 0x30);
        if (*(double *)(local_3f8 + 0x20) < dStack_2c0 - local_f8) {
          local_430 = -(uint)(*(double *)(local_3f8 + 0x20) <= local_f8 + dStack_2d0);
        }
        p_Var41 = (_Rb_tree_node_base *)local_1c0._8_8_;
        local_3f0 = p_Stack_200;
        if (local_1c0._0_8_ == local_1c0._8_8_) {
LAB_00106267:
          if (local_1a0._0_8_ == local_1a0._8_8_) {
            std::
            vector<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::allocator<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>>
            ::
            _M_realloc_insert<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const&>
                      ((vector<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::allocator<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>>
                        *)(local_1b0 + 8),local_1a0._0_8_,local_538);
          }
          else {
            *(_Rb_tree_node_base **)local_1a0._0_8_ = local_3f8;
            local_1a0._0_8_ = (undefined8 *)(local_1a0._0_8_ + 8);
          }
        }
        else {
          p_Var38 = (_Rb_tree_node_base *)local_1c0._0_8_;
          do {
            p_Var18 = *(_Rb_tree_node_base **)p_Var38;
            local_b8 = (code *)0x0;
            pcStack_b0 = (code *)0x0;
            local_c8 = (undefined1  [16])0x0;
            puVar19 = (undefined8 *)operator_new(0x20);
            local_c8._0_8_ = puVar19;
            *puVar19 = local_538;
            puVar19[1] = &local_430;
            puVar19[2] = pEVar30;
            puVar19[3] = &local_3f0;
            local_b8 = std::
                       _Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::CutKeyhole(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
                       ::_M_manager;
            pcStack_b0 = std::
                         _Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::CutKeyhole(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
                         ::_M_invoke;
            pcVar23 = std::
                      _Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::CutKeyhole(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
                      ::_M_manager;
            p_Var25 = p_Var18;
            do {
              while( true ) {
                p_Var20 = *(_Rb_tree_node_base **)(p_Var18 + 0x40);
                p_Var28 = *(_Rb_tree_node_base **)(p_Var20 + 0x38);
                p_Var31 = (_Rb_tree_node_base *)&local_3e0;
                local_528 = (Vec *)pEVar30;
                local_488 = (Vec *)local_538;
                local_480 = (_Rb_tree_node_base *)this;
                local_458 = (_Rb_tree_node_base *)local_158;
                if (p_Var18 != p_Var28) break;
                if (p_Var20 == *(_Rb_tree_node_base **)(p_Var28 + 0x38)) goto LAB_001050f8;
                local_3e0 = p_Var28;
                if (pcVar23 == (code *)0x0) goto LAB_0010686d;
                p_Var33 = (_Rb_tree_node_base *)&local_3e0;
                (*pcStack_b0)(local_c8);
                pcVar23 = local_b8;
                p_Var18 = *(_Rb_tree_node_base **)(p_Var28 + 0x40);
                if (p_Var25 == *(_Rb_tree_node_base **)(p_Var28 + 0x40)) goto LAB_001050f8;
              }
              if (p_Var28 == *(_Rb_tree_node_base **)(*(long *)(p_Var28 + 0x40) + 0x38)) {
                if (*(long *)(p_Var28 + 0x40) == *(long *)(p_Var28 + 0x38)) break;
                local_3e8 = p_Var28;
                if (pcVar23 == (code *)0x0) goto LAB_0010686d;
                p_Var33 = (_Rb_tree_node_base *)&local_3e8;
                (*pcStack_b0)(local_c8);
                p_Var20 = *(_Rb_tree_node_base **)(p_Var28 + 0x40);
                pcVar23 = local_b8;
              }
              p_Var18 = p_Var20;
              p_Var25 = p_Var28;
            } while (p_Var28 != p_Var20);
LAB_001050f8:
            if (pcVar23 != (code *)0x0) {
              p_Var33 = (_Rb_tree_node_base *)local_c8;
              (*pcVar23)(p_Var33,p_Var33,3);
            }
            p_Var38 = p_Var38 + 8;
          } while (p_Var41 != p_Var38);
          if (local_3f0 == p_Stack_200) goto LAB_00106267;
          p_Var25 = *(_Rb_tree_node_base **)(local_3f0 + 0x40);
          local_3d0 = local_3f0;
          dVar47 = *(double *)(local_3f8 + 0x18);
          local_3d8 = local_3f8;
          if (dVar47 < *(double *)(local_3f0 + 0x18) || dVar47 == *(double *)(local_3f0 + 0x18)) {
            dVar43 = *(double *)(local_3f8 + 0x20);
            local_3c8 = local_3f0;
            if ((dVar47 < *(double *)(p_Var25 + 0x18) || dVar47 == *(double *)(p_Var25 + 0x18)) &&
               (local_3c8 = local_3f0,
               *(double *)(p_Var25 + 0x20) - dVar43 <= dVar43 - *(double *)(local_3f0 + 0x20))) {
              local_3c8 = p_Var25;
            }
          }
          else {
            dVar43 = *(double *)(local_3f8 + 0x20);
            local_3c8 = p_Var25;
          }
          if (local_f8 < (double)((ulong)(*(double *)(local_3c8 + 0x20) - dVar43) & _LC5)) {
            local_3c0 = _LC19;
            if (*(double *)(local_3c8 + 0x20) <= dVar43) {
              local_3c0 = _LC20;
            }
            p_Var38 = (_Rb_tree_node_base *)local_1c0._8_8_;
            if (local_1c0._0_8_ != local_1c0._8_8_) {
              p_Var41 = (_Rb_tree_node_base *)&local_3d0;
              p_Var18 = (_Rb_tree_node_base *)local_1c0._0_8_;
              do {
                p_Var20 = *(_Rb_tree_node_base **)p_Var18;
                local_98 = (code *)0x0;
                pcStack_90 = (code *)0x0;
                local_a8 = (undefined1  [16])0x0;
                plVar17 = (long *)operator_new(0x28);
                plVar17[4] = (long)p_Var41;
                local_a8._0_8_ = plVar17;
                *plVar17 = (long)&local_3c0;
                plVar17[1] = (long)&local_3d8;
                plVar17[2] = (long)&local_3c8;
                plVar17[3] = (long)pEVar30;
                local_98 = std::
                           _Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::FindCloserBridge(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
                           ::_M_manager;
                pcStack_90 = std::
                             _Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::FindCloserBridge(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
                             ::_M_invoke;
                p_Var31 = p_Var20;
                pcVar23 = std::
                          _Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::FindCloserBridge(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
                          ::_M_manager;
                do {
                  while( true ) {
                    p_Var28 = *(_Rb_tree_node_base **)(p_Var20 + 0x40);
                    p_Var25 = *(_Rb_tree_node_base **)(p_Var28 + 0x38);
                    if (p_Var20 != p_Var25) break;
                    if (p_Var28 == *(_Rb_tree_node_base **)(p_Var20 + 0x38)) goto LAB_001052c0;
                    p_Var28 = p_Var20;
                    local_3b0 = p_Var20;
                    if (pcVar23 == (code *)0x0) goto LAB_0010686d;
                    p_Var33 = p_Var16;
                    (*pcStack_90)(local_a8);
                    p_Var25 = p_Var20 + 0x40;
                    p_Var20 = *(_Rb_tree_node_base **)p_Var25;
                    pcVar23 = local_98;
                    if (p_Var31 == *(_Rb_tree_node_base **)p_Var25) goto LAB_001052c0;
                  }
                  p_Var31 = p_Var25;
                  if (p_Var25 == *(_Rb_tree_node_base **)(*(long *)(p_Var25 + 0x40) + 0x38)) {
                    if (*(long *)(p_Var25 + 0x40) == *(long *)(p_Var25 + 0x38)) break;
                    local_3b8 = p_Var25;
                    if (pcVar23 == (code *)0x0) goto LAB_0010686d;
                    p_Var33 = (_Rb_tree_node_base *)&local_3b8;
                    (*pcStack_90)(local_a8);
                    p_Var28 = *(_Rb_tree_node_base **)(p_Var25 + 0x40);
                    pcVar23 = local_98;
                  }
                  p_Var20 = p_Var28;
                } while (p_Var25 != p_Var28);
LAB_001052c0:
                if (pcVar23 != (code *)0x0) {
                  p_Var33 = (_Rb_tree_node_base *)local_a8;
                  (*pcVar23)(p_Var33,p_Var33,3);
                }
                p_Var18 = p_Var18 + 8;
              } while (p_Var38 != p_Var18);
            }
          }
          p_Var28 = local_3c8;
          p_Var25 = local_3f8;
          local_3f0 = local_3c8;
          if (local_1f8 == p_Stack_200) {
            std::
            vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>
            ::_M_realloc_insert<(anonymous_namespace)::EarClip::Vert>
                      ((vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>
                        *)pEVar30,p_Stack_200,local_3f8);
            p_Var18 = p_Stack_200 + -0x48;
          }
          else {
            lVar35 = *(long *)(local_3f8 + 8);
            *(long *)p_Stack_200 = *(long *)local_3f8;
            *(long *)(p_Stack_200 + 8) = lVar35;
            lVar35 = *(long *)(local_3f8 + 0x18);
            *(long *)(p_Stack_200 + 0x10) = *(long *)(local_3f8 + 0x10);
            *(long *)(p_Stack_200 + 0x18) = lVar35;
            lVar35 = *(long *)(local_3f8 + 0x28);
            *(long *)(p_Stack_200 + 0x20) = *(long *)(local_3f8 + 0x20);
            *(long *)(p_Stack_200 + 0x28) = lVar35;
            lVar35 = *(long *)(local_3f8 + 0x38);
            *(long *)(p_Stack_200 + 0x30) = *(long *)(local_3f8 + 0x30);
            *(long *)(p_Stack_200 + 0x38) = lVar35;
            *(long *)(p_Stack_200 + 0x40) = *(long *)(local_3f8 + 0x40);
            p_Var18 = p_Stack_200;
            p_Stack_200 = p_Stack_200 + 0x48;
          }
          p_Var33 = p_Stack_200;
          if (p_Stack_200 == local_1f8) {
            std::
            vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>
            ::_M_realloc_insert<(anonymous_namespace)::EarClip::Vert>
                      ((vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>
                        *)pEVar30,p_Stack_200,p_Var28);
            p_Var38 = p_Stack_200 + -0x48;
          }
          else {
            lVar35 = *(long *)(p_Var28 + 8);
            *(long *)p_Stack_200 = *(long *)p_Var28;
            *(long *)(p_Stack_200 + 8) = lVar35;
            lVar35 = *(long *)(p_Var28 + 0x18);
            *(long *)(p_Stack_200 + 0x10) = *(long *)(p_Var28 + 0x10);
            *(long *)(p_Stack_200 + 0x18) = lVar35;
            lVar35 = *(long *)(p_Var28 + 0x28);
            *(long *)(p_Stack_200 + 0x20) = *(long *)(p_Var28 + 0x20);
            *(long *)(p_Stack_200 + 0x28) = lVar35;
            lVar35 = *(long *)(p_Var28 + 0x38);
            *(long *)(p_Stack_200 + 0x30) = *(long *)(p_Var28 + 0x30);
            *(long *)(p_Stack_200 + 0x38) = lVar35;
            *(long *)(p_Stack_200 + 0x40) = *(long *)(p_Var28 + 0x40);
            p_Var38 = p_Stack_200;
            p_Stack_200 = p_Stack_200 + 0x48;
          }
          dVar48 = *(double *)(p_Var28 + 0x18) - *(double *)(p_Var25 + 0x18);
          dVar45 = *(double *)(p_Var28 + 0x20) - *(double *)(p_Var25 + 0x20);
          *(_Rb_tree_node_base **)(*(long *)(p_Var25 + 0x40) + 0x38) = p_Var18;
          *(_Rb_tree_node_base **)(*(long *)(p_Var28 + 0x38) + 0x40) = p_Var38;
          *(_Rb_tree_node_base **)(p_Var25 + 0x40) = p_Var28;
          *(_Rb_tree_node_base **)(p_Var28 + 0x38) = p_Var25;
          dVar47 = _LC8;
          dVar49 = SQRT(dVar48 * dVar48 + 0.0 + dVar45 * dVar45);
          dVar48 = dVar48 / dVar49;
          dVar46 = 0.0;
          dVar43 = 0.0;
          if ((double)((ulong)dVar48 & _LC5) <= _LC8) {
            dVar46 = dVar45 / dVar49;
            dVar43 = dVar48;
          }
          *(double *)(p_Var25 + 0x28) = dVar43;
          *(double *)(p_Var25 + 0x30) = dVar46;
          dVar48 = *(double *)(p_Var33 + -0x30) - *(double *)(p_Stack_200 + -0x30);
          dVar45 = *(double *)(p_Var33 + -0x28) - *(double *)(p_Stack_200 + -0x28);
          *(_Rb_tree_node_base **)(p_Stack_200 + -8) = p_Var18;
          *(_Rb_tree_node_base **)(p_Var33 + -0x10) = p_Var38;
          dVar49 = SQRT(dVar48 * dVar48 + 0.0 + dVar45 * dVar45);
          dVar48 = dVar48 / dVar49;
          dVar46 = 0.0;
          dVar43 = 0.0;
          if ((double)((ulong)dVar48 & _LC5) <= dVar47) {
            dVar46 = dVar45 / dVar49;
            dVar43 = dVar48;
          }
          *(double *)(p_Stack_200 + -0x20) = dVar43;
          *(double *)(p_Stack_200 + -0x18) = dVar46;
          (anonymous_namespace)::EarClip::ClipIfDegenerate(pEVar30,p_Var25);
          (anonymous_namespace)::EarClip::ClipIfDegenerate(pEVar30,p_Var18);
          (anonymous_namespace)::EarClip::ClipIfDegenerate(pEVar30,p_Var28);
          (anonymous_namespace)::EarClip::ClipIfDegenerate(pEVar30,p_Var38);
        }
        local_4b8 = (_Rb_tree_node_base *)std::_Rb_tree_increment(local_4b8);
      } while (local_4b8 != (_Rb_tree_node_base *)pcVar34);
    }
    if (local_1b0._8_8_ == local_1a0._0_8_) goto LAB_00105d50;
    param_1 = (vector *)&local_288;
    local_538 = (_Rb_tree_node_base *)local_1b0._8_8_;
    local_458 = (_Rb_tree_node_base *)local_1a0._0_8_;
    local_4b8 = (_Rb_tree_node_base *)&local_358;
    local_4a8 = (_Rb_tree_node_base *)local_318;
    local_528 = (Vec *)&local_338;
    pp_Stack_4a0 = &local_2b8;
    pcVar34 = std::
              _Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
              ::_M_manager;
    local_480 = (_Rb_tree_node_base *)&local_3a0;
    local_468 = std::
                _Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::TriangulatePoly(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
                ::_M_manager;
    pcStack_460 = std::
                  _Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::TriangulatePoly(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
                  ::_M_invoke;
    local_498 = (_Rb_tree_node_base *)
                std::
                _Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
                ::_M_manager;
    pcStack_490 = std::
                  _Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
                  ::_M_invoke;
    p_Var41 = (_Rb_tree_node_base *)local_158;
    pVStack_4b0 = local_528;
    local_488 = (Vec *)local_4b8;
    local_478 = (Collider *)param_1;
    pEStack_470 = pEVar30;
    local_450 = pp_Stack_4a0;
    local_440 = (_Rb_tree_node_base *)this;
LAB_001055fa:
    local_2b0 = dStack_110;
    p_Var25 = *(_Rb_tree_node_base **)local_538;
    local_350 = (undefined1  [16])0x0;
    local_330 = (undefined1  [16])0x0;
    local_318 = (undefined1  [16])0x0;
    local_2b8 = local_108;
    local_358 = (void *)0x0;
    local_338 = (_Rb_tree_node_base *)0x0;
    local_308 = (void *)0x0;
    dStack_298 = dStack_100;
    if ((double)local_108 <= (double)local_118) {
      local_2a0 = local_118;
      if (dStack_100 <= dStack_110) goto LAB_00105697;
    }
    else {
      local_2b8 = local_118;
      local_2a0 = local_108;
      if (dStack_100 <= dStack_110) {
LAB_00105697:
        local_2b0 = dStack_100;
        if (dStack_100 <= dStack_110) {
          dStack_298 = dStack_110;
        }
      }
    }
    local_2a8 = 0;
    local_290 = 0;
    local_58 = (_Rb_tree_node_base *)0x0;
    pcStack_50 = (code *)0x0;
    local_68 = (undefined1  [16])0x0;
    puVar19 = (undefined8 *)operator_new(0x28);
    puVar19[4] = pEVar30;
    local_68._0_8_ = puVar19;
    *puVar19 = local_4b8;
    puVar19[1] = pVStack_4b0;
    puVar19[2] = local_4a8;
    puVar19[3] = pp_Stack_4a0;
    local_58 = local_498;
    pcStack_50 = pcStack_490;
    p_Var18 = (_Rb_tree_node_base *)
              std::
              _Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
              ::_M_manager;
    p_Var28 = p_Var25;
    p_Var33 = (_Rb_tree_node_base *)pcVar34;
    p_Var20 = p_Var25;
    do {
      while( true ) {
        p_Var38 = *(_Rb_tree_node_base **)(p_Var20 + 0x40);
        p_Var31 = *(_Rb_tree_node_base **)(p_Var38 + 0x38);
        p_Var16 = local_480;
        if (p_Var20 == p_Var31) break;
        p_Var33 = *(_Rb_tree_node_base **)(p_Var31 + 0x40);
        p_Var28 = p_Var31;
        if (p_Var31 == *(_Rb_tree_node_base **)(p_Var33 + 0x38)) {
          if (p_Var33 == *(_Rb_tree_node_base **)(p_Var31 + 0x38)) goto LAB_001057a3;
          local_3a8 = p_Var31;
          if (p_Var18 == (_Rb_tree_node_base *)0x0) goto LAB_0010686d;
          p_Var33 = (_Rb_tree_node_base *)&local_3a8;
          (*pcStack_50)(local_68);
          p_Var38 = *(_Rb_tree_node_base **)(p_Var31 + 0x40);
          p_Var18 = local_58;
        }
        p_Var20 = p_Var38;
        if (p_Var31 == p_Var38) goto LAB_001057a3;
      }
      if (p_Var38 == *(_Rb_tree_node_base **)(p_Var20 + 0x38)) break;
      p_Var38 = p_Var20;
      local_3a0 = p_Var20;
      if (p_Var18 == (_Rb_tree_node_base *)0x0) goto LAB_0010686d;
      p_Var33 = local_480;
      (*pcStack_50)(local_68);
      p_Var16 = p_Var20 + 0x40;
      p_Var18 = local_58;
      p_Var20 = *(_Rb_tree_node_base **)p_Var16;
    } while (p_Var28 != *(_Rb_tree_node_base **)p_Var16);
LAB_001057a3:
    if (p_Var18 != (_Rb_tree_node_base *)0x0) {
      p_Var33 = (_Rb_tree_node_base *)local_68;
      (*(code *)p_Var18)(p_Var33,p_Var33,3);
    }
    if (local_318._8_8_ == local_318._0_8_) {
      local_288 = (_Rb_tree_node_base *)0x0;
      p_Stack_270 = (_Rb_tree_node_base *)0x0;
      pvStack_258 = (void *)0x0;
      auStack_280 = (undefined1  [16])0x0;
      dStack_268 = 0.0;
      local_260 = 0;
      local_250 = (undefined1  [16])0x0;
      local_240 = (undefined1  [16])0x0;
      local_230 = (undefined1  [16])0x0;
      local_220 = (undefined1  [16])0x0;
      p_Var38 = (_Rb_tree_node_base *)local_318._0_8_;
      goto LAB_00106539;
    }
    local_2d8 = (_Rb_tree_node_base *)0x0;
    local_2c8 = 0.0;
    dVar47 = (double)(long)(int)((long)(local_318._8_8_ - local_318._0_8_) >> 3);
    if (dVar47 == 0.0) {
      p_Var16 = (_Rb_tree_node_base *)0x0;
      dStack_2d0 = 0.0;
      Permute<unsigned_int,int>(local_528,(Vec *)&local_2d8);
      Permute<manifold::Box,int>(local_488,(Vec *)&local_2d8);
      pvVar36 = local_308;
      local_308 = (void *)0x0;
      pvVar21 = (void *)local_318._0_8_;
      local_318 = (undefined1  [16])0x0;
    }
    else {
      __size = (long)dVar47 * 4;
      p_Var16 = (_Rb_tree_node_base *)malloc(__size);
      p_Var28 = p_Var16 + __size;
      lVar35 = 0;
      do {
        lVar29 = lVar35;
        *(int *)(p_Var16 + lVar29 * 4) = (int)lVar29;
        lVar35 = lVar29 + 1;
      } while ((long)__size >> 2 != lVar29 + 1);
      lVar26 = lVar29 + 2 >> 1;
      lVar35 = lVar26;
      local_2d8 = p_Var16;
      dStack_2d0 = dVar47;
      local_2c8 = dVar47;
      while( true ) {
        local_4f8 = lVar35 * 4;
        pvVar21 = operator_new(local_4f8,(nothrow_t *)&std::nothrow);
        if (pvVar21 != (void *)0x0) break;
        if (lVar35 == 1) {
          std::
          __inplace_stable_sort<int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
                    (p_Var16,p_Var28,local_528);
          local_4f8 = 0;
          goto LAB_00106667;
        }
        lVar35 = lVar35 + 1 >> 1;
      }
      if (lVar26 == lVar35) {
        std::
        __stable_sort_adaptive<int*,int*,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
                  (p_Var16,p_Var16 + local_4f8,p_Var28,pvVar21,local_528);
      }
      else {
        std::
        __stable_sort_adaptive_resize<int*,int*,long,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::EarClip::VertCollider(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)const::_lambda(int,int)_1_>>
                  (p_Var16,p_Var28,pvVar21,lVar35,local_528);
      }
LAB_00106667:
      operator_delete(pvVar21,local_4f8);
      Permute<unsigned_int,int>(local_528,(Vec *)&local_2d8);
      Permute<manifold::Box,int>(local_488,(Vec *)&local_2d8);
      pvVar36 = local_308;
      pvVar21 = (void *)local_318._0_8_;
      local_318 = (undefined1  [16])0x0;
      local_308 = (void *)0x0;
      if ((ulong)dVar47 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::_M_default_append");
      }
      uVar22 = (long)dVar47 * 8;
      __s = operator_new(uVar22);
      local_318._0_8_ = memset(__s,0,uVar22);
      local_308 = (void *)(uVar22 + local_318._0_8_);
      local_318._8_8_ = local_308;
      lVar35 = 0;
      do {
        *(undefined8 *)(local_318._0_8_ + lVar35 * 8) =
             *(undefined8 *)((long)pvVar21 + (long)*(int *)(p_Var16 + lVar35 * 4) * 8);
        bVar42 = lVar29 != lVar35;
        lVar35 = lVar35 + 1;
      } while (bVar42);
    }
    if (pvVar21 != (void *)0x0) {
      operator_delete(pvVar21,(long)pvVar36 - (long)pvVar21);
    }
    pcVar34 = (code *)local_378;
    local_2f8 = local_338;
    dStack_2f0 = (double)local_330._0_8_;
    local_378._8_8_ = local_350._0_8_;
    local_378._0_8_ = local_358;
    Collider::Collider((Collider *)param_1,(VecView *)pcVar34,(VecView *)&local_2f8);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = local_230._8_8_;
    local_230 = auVar12 << 0x40;
    local_240 = (undefined1  [16])0x0;
    p_Var28 = (_Rb_tree_node_base *)(local_318._8_8_ + -local_318._0_8_);
    if (p_Var28 == (_Rb_tree_node_base *)0x0) {
      p_Var28 = (_Rb_tree_node_base *)0x0;
      p_Var33 = (_Rb_tree_node_base *)0x0;
      p_Var38 = (_Rb_tree_node_base *)local_318._0_8_;
LAB_0010593f:
      local_230._0_8_ = p_Var28 + (long)p_Var33;
      p_Var28 = (_Rb_tree_node_base *)param_1;
      p_Var31 = (_Rb_tree_node_base *)pEVar30;
      local_240._0_8_ = p_Var33;
      if ((_Rb_tree_node_base *)local_318._8_8_ == p_Var38) goto LAB_00106872;
      lVar35 = 0;
      do {
        *(undefined8 *)(p_Var33 + lVar35) = *(undefined8 *)(p_Var38 + lVar35);
        lVar35 = lVar35 + 8;
      } while (lVar35 != local_318._8_8_ - (long)p_Var38);
      local_230._8_8_ = 0;
      local_240._8_8_ = p_Var33 + lVar35;
      local_220 = (undefined1  [16])0x0;
      if (p_Var16 != (_Rb_tree_node_base *)0x0) {
        free(p_Var16);
      }
      do {
        p_Var33 = (_Rb_tree_node_base *)((long)local_308 - (long)p_Var38);
        operator_delete(p_Var38,(ulong)p_Var33);
        do {
          if (local_338 != (_Rb_tree_node_base *)0x0) {
            free(local_338);
          }
          if (local_358 != (void *)0x0) {
            free(local_358);
          }
          if (local_240._8_8_ == local_240._0_8_) goto LAB_00105ccc;
          local_42c = -2;
          p_Var14 = local_150;
          while (p_Var14 != (_Rb_tree_node *)0x0) {
            std::
            _Rb_tree<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::_Identity<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>,(anonymous_namespace)::EarClip::MinCost,std::allocator<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>>
            ::_M_erase(*(_Rb_tree_node **)(p_Var14 + 0x18));
            p_Var7 = *(_Rb_tree_node **)(p_Var14 + 0x10);
            p_Var33 = (_Rb_tree_node_base *)0x28;
            operator_delete(p_Var14,0x28);
            p_Var14 = p_Var7;
          }
          local_150 = (_Rb_tree_node *)0x0;
          p_Var38 = (_Rb_tree_node_base *)&local_390;
          local_138 = 0;
          local_78 = (code *)0x0;
          pcStack_70 = (code *)0x0;
          local_88 = (undefined1  [16])0x0;
          local_148 = p_Var41;
          local_140 = p_Var41;
          plVar17 = (long *)operator_new(0x18);
          plVar17[2] = (long)&local_42c;
          local_88._0_8_ = plVar17;
          *plVar17 = (long)local_478;
          plVar17[1] = (long)pEStack_470;
          local_78 = local_468;
          pcStack_70 = pcStack_460;
          p_Var28 = p_Var25;
          pcVar34 = std::
                    _Function_handler<void(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>),(anonymous_namespace)::EarClip::TriangulatePoly(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)::{lambda(__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>)#1}>
                    ::_M_manager;
          p_Var18 = p_Var25;
LAB_00105ae9:
          p_Var25 = *(_Rb_tree_node_base **)(p_Var18 + 0x40);
          p_Var16 = *(_Rb_tree_node_base **)(p_Var25 + 0x38);
          p_Var31 = (_Rb_tree_node_base *)pEVar30;
          p_Var20 = p_Stack_200;
          if (p_Var18 == p_Var16) {
            if (p_Var25 != *(_Rb_tree_node_base **)(p_Var18 + 0x38)) {
              p_Var25 = p_Var18;
              local_390 = p_Var18;
              if (pcVar34 == (code *)0x0) goto LAB_0010686d;
              p_Var33 = p_Var38;
              (*pcStack_70)(local_88);
              p_Var25 = p_Var18 + 0x40;
              pcVar34 = local_78;
              p_Var20 = p_Var28;
              p_Var18 = *(_Rb_tree_node_base **)p_Var25;
              if (*(_Rb_tree_node_base **)p_Var25 == p_Var28) goto LAB_00105b3c;
              goto LAB_00105ae9;
            }
LAB_00105b3c:
            if (pcVar34 != (code *)0x0) {
              p_Var33 = (_Rb_tree_node_base *)local_88;
              (*pcVar34)(p_Var33,p_Var33,3);
            }
            if (p_Stack_200 != p_Var20) {
              while (0 < local_42c) {
                if (local_148 != p_Var41) {
                  p_Var20 = *(_Rb_tree_node_base **)(local_148 + 0x20);
                  pvVar21 = (void *)std::_Rb_tree_rebalance_for_erase(local_148,p_Var41);
                  operator_delete(pvVar21,0x28);
                  local_138 = local_138 + -1;
                }
                dVar47 = _LC8;
                lVar35 = *(long *)(p_Var20 + 0x38);
                lVar29 = *(long *)(p_Var20 + 0x40);
                dVar48 = *(double *)(lVar29 + 0x18) - *(double *)(lVar35 + 0x18);
                *(long *)(lVar35 + 0x40) = lVar29;
                dVar45 = *(double *)(lVar29 + 0x20) - *(double *)(lVar35 + 0x20);
                *(long *)(lVar29 + 0x38) = lVar35;
                dVar49 = SQRT(dVar48 * dVar48 + 0.0 + dVar45 * dVar45);
                dVar48 = dVar48 / dVar49;
                dVar46 = 0.0;
                dVar43 = 0.0;
                if ((double)((ulong)dVar48 & _LC5) <= dVar47) {
                  dVar46 = dVar45 / dVar49;
                  dVar43 = dVar48;
                }
                *(double *)(lVar35 + 0x28) = dVar43;
                *(double *)(lVar35 + 0x30) = dVar46;
                iVar4 = *(int *)p_Var20;
                iVar5 = **(int **)(p_Var20 + 0x38);
                if (((iVar5 != iVar4) && (iVar6 = **(int **)(p_Var20 + 0x40), iVar5 != iVar6)) &&
                   (iVar4 != iVar6)) {
                  local_2b0 = (double)CONCAT44(local_2b0._4_4_,iVar6);
                  local_2b8 = (_Rb_tree_node_base *)CONCAT44(iVar4,iVar5);
                  if ((undefined8 *)local_130._8_8_ == local_120) {
                    std::vector<linalg::vec<int,3>,std::allocator<linalg::vec<int,3>>>::
                    _M_realloc_insert<linalg::vec<int,3>>
                              ((vector<linalg::vec<int,3>,std::allocator<linalg::vec<int,3>>> *)
                               local_130,local_130._8_8_,local_450);
                  }
                  else {
                    *(_Rb_tree_node_base **)local_130._8_8_ = local_2b8;
                    *(int *)(local_130._8_8_ + 8) = iVar6;
                    local_130._8_8_ = local_130._8_8_ + 0xc;
                  }
                }
                local_42c = local_42c + -1;
                (anonymous_namespace)::EarClip::ProcessEar
                          (pEVar30,*(long *)(p_Var20 + 0x38),param_1);
                p_Var33 = *(_Rb_tree_node_base **)(p_Var20 + 0x40);
                (anonymous_namespace)::EarClip::ProcessEar(pEVar30,p_Var33,param_1);
                p_Var20 = *(_Rb_tree_node_base **)(p_Var20 + 0x40);
              }
            }
            goto LAB_00105ccc;
          }
          p_Var28 = p_Var16;
          if (p_Var16 != *(_Rb_tree_node_base **)(*(long *)(p_Var16 + 0x40) + 0x38)) {
LAB_00105ae4:
            p_Var20 = p_Var16;
            p_Var18 = p_Var25;
            if (p_Var25 != p_Var16) goto LAB_00105ae9;
            goto LAB_00105b3c;
          }
          if (*(long *)(p_Var16 + 0x40) == *(long *)(p_Var16 + 0x38)) goto LAB_00105b3c;
          local_398 = p_Var16;
          if (pcVar34 != (code *)0x0) {
            p_Var33 = (_Rb_tree_node_base *)&local_398;
            (*pcStack_70)(local_88);
            p_Var25 = *(_Rb_tree_node_base **)(p_Var16 + 0x40);
            pcVar34 = local_78;
            goto LAB_00105ae4;
          }
LAB_0010686d:
          std::__throw_bad_function_call();
LAB_00106872:
          local_240._8_8_ = p_Var33;
          local_230._8_8_ = 0;
          local_220 = (undefined1  [16])0x0;
          param_1 = (vector *)p_Var28;
          pEVar30 = (EarClip *)p_Var31;
          if (p_Var16 != (_Rb_tree_node_base *)0x0) {
            free(p_Var16);
          }
LAB_00106539:
        } while (p_Var38 == (_Rb_tree_node_base *)0x0);
      } while( true );
    }
    if (p_Var28 < (_Rb_tree_node_base *)0x7ffffffffffffff9) {
      p_Var33 = (_Rb_tree_node_base *)operator_new((ulong)p_Var28);
      p_Var38 = (_Rb_tree_node_base *)local_318._0_8_;
      goto LAB_0010593f;
    }
    if ((long)p_Var28 < 0) goto LAB_00106909;
    std::__throw_bad_alloc();
  }
  uVar22 = 0;
LAB_001047be:
  local_1f8 = (_Rb_tree_node_base *)0x0;
  local_208 = (_Rb_tree_node_base *)0x0;
  p_Stack_200 = (_Rb_tree_node_base *)0x0;
  std::vector<linalg::vec<int,3>,std::allocator<linalg::vec<int,3>>>::reserve
            ((vector<linalg::vec<int,3>,std::allocator<linalg::vec<int,3>>> *)&local_208,uVar22);
  plVar17 = *(long **)param_1;
  plVar37 = *(long **)((Collider *)param_1 + 8);
  p_Var16 = p_Stack_200;
  p_Var28 = local_1f8;
  if (plVar17 != plVar37) {
    do {
      lVar35 = *plVar17;
      uVar22 = (plVar17[1] - lVar35 >> 3) * -0x5555555555555555 - 1;
      if (1 < uVar22) {
        bVar42 = true;
        lVar26 = 0;
        lVar29 = uVar22 * 2;
        uVar24 = 1;
        uVar39 = 0;
        while( true ) {
          while( true ) {
            uVar27 = uVar24;
            local_288 = (_Rb_tree_node_base *)
                        CONCAT44(*(undefined4 *)(lVar35 + 0x10 + uVar27 * 0x18),
                                 *(undefined4 *)(lVar35 + 0x10 + (lVar26 + uVar39) * 8));
            uVar3 = *(undefined4 *)(lVar35 + 0x10 + (lVar29 + uVar22) * 8);
            auStack_280._0_4_ = uVar3;
            if (p_Var28 == p_Var16) {
              std::vector<linalg::vec<int,3>,std::allocator<linalg::vec<int,3>>>::
              _M_realloc_insert<linalg::vec<int,3>>
                        ((vector<linalg::vec<int,3>,std::allocator<linalg::vec<int,3>>> *)&local_208
                         ,p_Var28,&local_288);
              p_Var28 = local_1f8;
            }
            else {
              p_Stack_200 = p_Var16 + 0xc;
              *(_Rb_tree_node_base **)p_Var16 = local_288;
              *(undefined4 *)(p_Var16 + 8) = uVar3;
            }
            p_Var16 = p_Stack_200;
            if (bVar42) break;
            if (uVar27 <= uVar39 + 1) goto LAB_00106408;
            lVar35 = *plVar17;
            bVar42 = true;
            lVar29 = uVar27 * 2;
            uVar24 = uVar39 + 1;
            uVar22 = uVar27;
          }
          if (uVar22 <= uVar27 + 1) break;
          lVar35 = *plVar17;
          bVar42 = false;
          lVar26 = uVar27 * 2;
          uVar24 = uVar22 - 1;
          uVar39 = uVar27;
        }
      }
LAB_00106408:
      plVar17 = plVar17 + 3;
    } while (plVar37 != plVar17);
  }
  pvVar21 = *(void **)p_Var25;
  lVar35 = *(long *)(p_Var25 + 0x10);
  *(_Rb_tree_node_base **)(p_Var25 + 0x10) = p_Var28;
  *(_Rb_tree_node_base **)p_Var25 = local_208;
  *(_Rb_tree_node_base **)(p_Var25 + 8) = p_Var16;
  if (pvVar21 != (void *)0x0) {
    operator_delete(pvVar21,lVar35 - (long)pvVar21);
  }
LAB_00105e98:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return p_Var25;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00105ccc:
  pcVar34 = (code *)p_Var33;
  if ((void *)local_230._8_8_ != (void *)0x0) {
    free((void *)local_230._8_8_);
    pcVar34 = (code *)p_Var33;
  }
  if ((void *)local_240._0_8_ != (void *)0x0) {
    pcVar34 = (code *)(local_230._0_8_ - local_240._0_8_);
    operator_delete((void *)local_240._0_8_,(ulong)pcVar34);
  }
  if (pvStack_258 != (void *)0x0) {
    free(pvStack_258);
  }
  if (p_Stack_270 != (_Rb_tree_node_base *)0x0) {
    free(p_Stack_270);
  }
  if (local_288 != (_Rb_tree_node_base *)0x0) {
    free(local_288);
  }
  local_538 = local_538 + 8;
  this = (manifold *)local_440;
  if (local_458 == local_538) goto LAB_00105d50;
  goto LAB_001055fa;
LAB_00105d50:
  param_1 = (vector *)(local_130._8_8_ + -local_130._0_8_);
  p_Var25 = (_Rb_tree_node_base *)this;
  if (param_1 == (vector *)0x0) {
    p_Var16 = (_Rb_tree_node_base *)0x0;
LAB_00105d9a:
    param_1 = (vector *)((_Rb_tree_node_base *)param_1 + (long)p_Var16);
    p_Var18 = (_Rb_tree_node_base *)local_130._0_8_;
    pcVar34 = (code *)p_Var16;
    p_Var33 = p_Var16;
    p_Var28 = (_Rb_tree_node_base *)local_130._0_8_;
    if (local_130._8_8_ != local_130._0_8_) {
      do {
        p_Var38 = p_Var18 + 0xc;
        *(undefined8 *)p_Var33 = *(undefined8 *)p_Var18;
        *(undefined4 *)(p_Var33 + 8) = *(undefined4 *)(p_Var18 + 8);
        p_Var18 = p_Var38;
        p_Var33 = p_Var33 + 0xc;
      } while ((_Rb_tree_node_base *)local_130._8_8_ != p_Var38);
      pcVar34 = (code *)(p_Var16 +
                        ((ulong)(local_130._8_8_ + (-0xc - local_130._0_8_)) & 0xfffffffffffffffc) +
                        0xc);
    }
  }
  else {
    p_Var28 = (_Rb_tree_node_base *)local_130._0_8_;
    if (param_1 < (_Rb_tree_node_base *)0x7ffffffffffffff9) {
      p_Var16 = (_Rb_tree_node_base *)operator_new((ulong)param_1);
      goto LAB_00105d9a;
    }
LAB_00106909:
    std::__throw_bad_array_new_length();
    p_Var16 = (_Rb_tree_node_base *)pcVar34;
  }
  pvVar21 = *(void **)p_Var25;
  lVar35 = *(long *)(p_Var25 + 0x10);
  *(_Rb_tree_node_base **)p_Var25 = p_Var16;
  *(code **)(p_Var25 + 8) = pcVar34;
  *(vector **)(p_Var25 + 0x10) = param_1;
  if (pvVar21 != (void *)0x0) {
    operator_delete(pvVar21,lVar35 - (long)pvVar21);
    p_Var28 = (_Rb_tree_node_base *)local_130._0_8_;
  }
  if (p_Var28 != (_Rb_tree_node_base *)0x0) {
    operator_delete(p_Var28,(long)local_120 - (long)p_Var28);
  }
  std::
  _Rb_tree<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::_Identity<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>,(anonymous_namespace)::EarClip::MinCost,std::allocator<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>>
  ::_M_erase(local_150);
  std::
  _Rb_tree<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::pair<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const,manifold::Rect>,std::_Select1st<std::pair<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const,manifold::Rect>>,std::less<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>,std::allocator<std::pair<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>const,manifold::Rect>>>
  ::_M_erase((_Rb_tree_node *)local_180);
  if ((void *)local_1b0._8_8_ != (void *)0x0) {
    operator_delete((void *)local_1b0._8_8_,local_1a0._8_8_ - local_1b0._8_8_);
  }
  if ((void *)local_1c0._0_8_ != (void *)0x0) {
    operator_delete((void *)local_1c0._0_8_,local_1b0._0_8_ - local_1c0._0_8_);
  }
  std::
  _Rb_tree<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>,std::_Identity<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>,(anonymous_namespace)::EarClip::MinCost,std::allocator<__gnu_cxx::__normal_iterator<(anonymous_namespace)::EarClip::Vert*,std::vector<(anonymous_namespace)::EarClip::Vert,std::allocator<(anonymous_namespace)::EarClip::Vert>>>>>
  ::_M_erase((_Rb_tree_node *)local_1e0);
  if (local_208 != (_Rb_tree_node_base *)0x0) {
    operator_delete(local_208,(long)local_1f8 - (long)local_208);
  }
  goto LAB_00105e98;
LAB_00104213:
  pdVar15 = pdVar15 + 3;
  dVar43 = SQRT(dVar45 * dVar45 + 0.0 + dVar46 * dVar46);
  dVar47 = dVar45 / dVar43;
  dVar43 = dVar46 / dVar43;
  if (uVar22 <= uVar24) goto LAB_00104702;
  goto LAB_0010424d;
code_r0x0010470f:
  uVar22 = 0;
  plVar32 = plVar17;
  if (0x48 < (long)plVar37 - (long)plVar17) {
    do {
      plVar17 = plVar32 + 0xc;
      uVar22 = uVar22 + (plVar32[7] - plVar32[6] >> 3) * -0x5555555555555555 +
                        ((plVar32[1] - *plVar32 >> 3) + (plVar32[4] - plVar32[3] >> 3)) *
                        -0x5555555555555555 + -8 +
                        (plVar32[10] - plVar32[9] >> 3) * -0x5555555555555555;
      plVar32 = plVar17;
    } while (0x48 < (long)plVar37 - (long)plVar17);
    if (plVar37 == plVar17) goto LAB_001047be;
  }
  do {
    plVar32 = plVar17 + 1;
    lVar35 = *plVar17;
    plVar17 = plVar17 + 3;
    uVar22 = (uVar22 - 2) + (*plVar32 - lVar35 >> 3) * -0x5555555555555555;
  } while (plVar37 != plVar17);
  goto LAB_001047be;
}



/* manifold::Triangulate(std::vector<std::vector<linalg::vec<double, 2>,
   std::allocator<linalg::vec<double, 2> > >, std::allocator<std::vector<linalg::vec<double, 2>,
   std::allocator<linalg::vec<double, 2> > > > > const&, double) */

manifold * __thiscall manifold::Triangulate(manifold *this,vector *param_1,double param_2)

{
  manifold *pmVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  vector<manifold::PolyVert,std::allocator<manifold::PolyVert>> *pvVar6;
  vector<manifold::PolyVert,std::allocator<manifold::PolyVert>> *pvVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  vector<manifold::PolyVert,std::allocator<manifold::PolyVert>> *pvVar14;
  manifold *pmVar15;
  manifold *pmVar16;
  long in_FS_OFFSET;
  undefined1 (*local_c8) [16];
  undefined1 local_98 [16];
  undefined1 (*local_88) [16];
  undefined1 local_78 [16];
  vector<manifold::PolyVert,std::allocator<manifold::PolyVert>> *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  undefined4 uStack_44;
  long local_40;
  
  pmVar15 = *(manifold **)param_1;
  pmVar1 = *(manifold **)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1 (*) [16])0x0;
  pmVar16 = this;
  if (pmVar1 == pmVar15) {
LAB_00106cc2:
    TriangulateIdx(this,(vector *)local_98,param_2);
  }
  else {
    local_c8 = (undefined1 (*) [16])0x0;
    iVar11 = 0;
    pauVar12 = (undefined1 (*) [16])0x0;
    do {
      puVar5 = *(undefined8 **)pmVar15;
      puVar10 = *(undefined8 **)(pmVar15 + 8);
      local_68 = (vector<manifold::PolyVert,std::allocator<manifold::PolyVert>> *)0x0;
      local_78 = (undefined1  [16])0x0;
      if (puVar5 == puVar10) {
        if (local_c8 == pauVar12) {
          uVar8 = 0;
          pvVar14 = (vector<manifold::PolyVert,std::allocator<manifold::PolyVert>> *)0x0;
LAB_00106c28:
          std::
          vector<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>,std::allocator<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>>>
          ::
          _M_realloc_insert<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>const&>
                    ((vector<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>,std::allocator<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>>>
                      *)local_98,pauVar12,local_78);
          local_c8 = local_88;
          pauVar13 = (undefined1 (*) [16])local_98._8_8_;
          goto LAB_00106b72;
        }
        *(undefined8 *)*pauVar12 = 0;
        pauVar13 = (undefined1 (*) [16])(pauVar12[1] + 8);
        *(undefined8 *)pauVar12[1] = 0;
        *(undefined8 *)(*pauVar12 + 8) = 0;
        local_98._8_8_ = pauVar13;
      }
      else {
        local_78._8_8_ = (vector<manifold::PolyVert,std::allocator<manifold::PolyVert>> *)0x0;
        local_48 = iVar11;
        while( true ) {
          local_58 = *puVar5;
          uStack_50 = puVar5[1];
          iVar11 = local_48 + 1;
          if ((vector<manifold::PolyVert,std::allocator<manifold::PolyVert>> *)local_78._8_8_ ==
              local_68) {
            pvVar6 = (vector<manifold::PolyVert,std::allocator<manifold::PolyVert>> *)local_78;
            std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>::
            _M_realloc_insert<manifold::PolyVert>(pvVar6,local_78._8_8_,&local_58);
          }
          else {
            *(undefined8 *)local_78._8_8_ = local_58;
            *(undefined8 *)(local_78._8_8_ + 8) = uStack_50;
            *(ulong *)(local_78._8_8_ + 0x10) = CONCAT44(uStack_44,local_48);
            local_78._8_8_ =
                 (vector<manifold::PolyVert,std::allocator<manifold::PolyVert>> *)
                 (local_78._8_8_ + 0x18);
            pvVar6 = local_68;
          }
          uVar4 = local_78._8_8_;
          if (puVar10 == puVar5 + 2) break;
          puVar5 = puVar5 + 2;
          local_48 = iVar11;
        }
        pvVar14 = (vector<manifold::PolyVert,std::allocator<manifold::PolyVert>> *)local_78._0_8_;
        if (local_c8 == pauVar12) {
          uVar8 = (long)local_68 - local_78._0_8_;
          goto LAB_00106c28;
        }
        *(undefined8 *)pauVar12[1] = 0;
        *pauVar12 = (undefined1  [16])0x0;
        uVar8 = local_78._8_8_ - local_78._0_8_;
        if (uVar8 == 0) {
          lVar9 = 0;
          puVar5 = (undefined8 *)0x0;
          uVar8 = (long)local_68 - local_78._0_8_;
        }
        else {
          if (0x7ffffffffffffff8 < uVar8) {
            this = (manifold *)pvVar6;
            if ((long)uVar8 < 0) {
              std::__throw_bad_array_new_length();
              this = (manifold *)pvVar6;
            }
            param_2 = (double)std::__throw_bad_alloc();
            pmVar16 = pmVar15;
            goto LAB_00106cc2;
          }
          puVar5 = (undefined8 *)operator_new(uVar8);
          lVar9 = uVar8 + (long)puVar5;
          uVar8 = (long)local_68 - (long)pvVar14;
        }
        *(undefined8 **)*pauVar12 = puVar5;
        *(long *)pauVar12[1] = lVar9;
        pvVar6 = pvVar14;
        puVar10 = puVar5;
        if ((vector<manifold::PolyVert,std::allocator<manifold::PolyVert>> *)uVar4 != pvVar14) {
          do {
            uVar3 = *(undefined8 *)(pvVar6 + 8);
            pvVar7 = pvVar6 + 0x18;
            *puVar10 = *(undefined8 *)pvVar6;
            puVar10[1] = uVar3;
            puVar10[2] = *(undefined8 *)(pvVar6 + 0x10);
            pvVar6 = pvVar7;
            puVar10 = puVar10 + 3;
          } while ((vector<manifold::PolyVert,std::allocator<manifold::PolyVert>> *)uVar4 != pvVar7)
          ;
          puVar5 = puVar5 + (((ulong)(uVar4 + (-0x18 - (long)pvVar14)) >> 3) * 0xaaaaaaaaaaaaaab &
                            0x1fffffffffffffff) * 3 + 3;
        }
        *(undefined8 **)(*pauVar12 + 8) = puVar5;
        local_98._8_8_ = (undefined1 (*) [16])(pauVar12[1] + 8);
        pauVar13 = (undefined1 (*) [16])(pauVar12[1] + 8);
LAB_00106b72:
        if (pvVar14 != (vector<manifold::PolyVert,std::allocator<manifold::PolyVert>> *)0x0) {
          operator_delete(pvVar14,uVar8);
        }
      }
      pmVar15 = pmVar15 + 0x18;
      pauVar12 = pauVar13;
    } while (pmVar1 != pmVar15);
    uVar4 = local_98._0_8_;
    TriangulateIdx(this,(vector *)local_98,param_2);
    for (pauVar12 = (undefined1 (*) [16])uVar4; pauVar13 != pauVar12;
        pauVar12 = (undefined1 (*) [16])(pauVar12[1] + 8)) {
      pvVar2 = *(void **)*pauVar12;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2,*(long *)pauVar12[1] - (long)pvVar2);
      }
    }
    if ((undefined1 (*) [16])uVar4 != (undefined1 (*) [16])0x0) {
      operator_delete((void *)uVar4,(long)local_c8 - uVar4);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pmVar16;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::Collider::Collider(manifold::VecView<manifold::Box const> const&,
   manifold::VecView<unsigned int const> const&) */

void __thiscall manifold::Collider::Collider(Collider *this,VecView *param_1,VecView *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  void *__s;
  long lVar15;
  undefined8 *puVar16;
  void *__ptr;
  double *pdVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  double *pdVar21;
  int iVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  long lVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  uint uVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  lVar7 = *(long *)(param_1 + 8);
  *(undefined8 *)(this + 0x30) = 0;
  lVar33 = (long)((int)lVar7 * 2 + -1);
  puVar14 = (undefined8 *)malloc(lVar33 * 0x30);
  *(long *)(this + 0x10) = lVar33;
  uVar8 = _LC10;
  *(undefined8 **)this = puVar14;
  uVar10 = _LC13;
  uVar9 = __LC11;
  uVar26 = 0;
  puVar16 = puVar14;
  do {
    uVar26 = uVar26 + 1;
    *puVar16 = uVar8;
    puVar16[1] = uVar8;
    puVar16[2] = uVar9;
    puVar16[3] = uVar10;
    puVar16[4] = uVar10;
    puVar16[5] = uVar10;
    puVar16 = puVar16 + 6;
  } while (uVar26 < ((lVar33 * 0x30 - 0x30U >> 4) * 0xaaaaaaaaaaaaaab & 0xfffffffffffffff) + 1);
  *(long *)(this + 8) = lVar33;
  __s = malloc(lVar33 * 4);
  *(long *)(this + 0x28) = lVar33;
  *(void **)(this + 0x18) = __s;
  memset(__s,0xff,lVar33 * 4);
  *(long *)(this + 0x20) = lVar33;
  lVar33 = lVar7 + -1;
  if (lVar33 == 0) {
    puVar16 = *(undefined8 **)(this + 0x30);
    lVar20 = *(long *)param_1;
    *(undefined8 *)(this + 0x38) = 0;
    lVar34 = 1;
LAB_00106e29:
    lVar15 = 0;
    do {
      uVar8 = ((undefined8 *)(lVar20 + lVar15))[1];
      puVar1 = (undefined8 *)((long)puVar14 + lVar15 * 2);
      *puVar1 = *(undefined8 *)(lVar20 + lVar15);
      puVar1[1] = uVar8;
      puVar1 = (undefined8 *)(lVar20 + 0x10 + lVar15);
      uVar8 = puVar1[1];
      puVar3 = (undefined8 *)((long)puVar14 + lVar15 * 2 + 0x10);
      *puVar3 = *puVar1;
      puVar3[1] = uVar8;
      puVar1 = (undefined8 *)(lVar20 + 0x20 + lVar15);
      uVar8 = puVar1[1];
      puVar3 = (undefined8 *)((long)puVar14 + lVar15 * 2 + 0x20);
      *puVar3 = *puVar1;
      puVar3[1] = uVar8;
      lVar15 = lVar15 + 0x30;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    if (lVar33 == 0) {
      return;
    }
  }
  else {
    puVar16 = (undefined8 *)malloc(lVar33 * 8);
    *(long *)(this + 0x40) = lVar33;
    *(undefined8 **)(this + 0x30) = puVar16;
    uVar8 = _LC14;
    puVar1 = puVar16 + lVar33;
    if (puVar1 == puVar16) {
      *(long *)(this + 0x38) = lVar33;
    }
    else {
      if (((int)puVar1 - (int)puVar16 & 8U) == 0) goto LAB_00106ed8;
      *puVar16 = _LC14;
      for (puVar16 = puVar16 + 1; puVar1 != puVar16; puVar16 = puVar16 + 2) {
LAB_00106ed8:
        *puVar16 = uVar8;
        puVar16[1] = uVar8;
      }
      puVar16 = *(undefined8 **)(this + 0x30);
      *(long *)(this + 0x38) = lVar33;
    }
    lVar15 = *(long *)param_2;
    lVar34 = (lVar7 * 0x30 >> 4) * -0x5555555555555555;
    iVar29 = (int)*(undefined8 *)(param_2 + 8);
    uVar24 = 0xffffffff;
    lVar20 = *(long *)param_1;
    lVar31 = 0;
    uVar25 = 1;
    do {
      uVar30 = (uint)lVar31;
      puVar23 = (uint *)(lVar15 + (long)(int)uVar30 * 4);
      uVar35 = uVar30;
      if ((int)uVar25 < 0) {
LAB_001073cd:
        uVar27 = 0;
        uVar11 = 0xffffffff;
LAB_001073d6:
        iVar28 = 0x40;
LAB_00107082:
        iVar13 = 0;
        do {
          uVar12 = (iVar28 + iVar13) * uVar27 + uVar30;
          if ((-1 < (int)uVar12) && ((int)uVar12 < iVar29)) {
            uVar32 = *(uint *)(lVar15 + (long)(int)uVar12 * 4);
            if (*puVar23 == uVar32) {
              uVar32 = 0x1f;
              if ((uVar12 ^ uVar30) != 0) {
                for (; (uVar12 ^ uVar30) >> uVar32 == 0; uVar32 = uVar32 - 1) {
                }
              }
              uVar12 = (uVar32 ^ 0x1f) + 0x20;
            }
            else {
              uVar32 = *puVar23 ^ uVar32;
              uVar12 = 0x1f;
              if (uVar32 != 0) {
                for (; uVar32 >> uVar12 == 0; uVar12 = uVar12 - 1) {
                }
              }
              uVar12 = uVar12 ^ 0x1f;
            }
            if ((int)uVar11 < (int)uVar12) {
              iVar13 = iVar28 + iVar13;
            }
          }
          iVar28 = iVar28 >> 1;
        } while (iVar28 != 0);
        iVar13 = iVar13 * uVar27;
        uVar11 = uVar30 + iVar13;
        uVar27 = uVar11;
        if ((int)uVar11 < (int)uVar30) {
          iVar13 = -iVar13;
          puVar23 = (uint *)(lVar15 + (long)(int)uVar11 * 4);
          uVar27 = uVar30;
          uVar35 = uVar11;
        }
      }
      else {
        if ((int)uVar25 < iVar29) {
          uVar11 = *(uint *)(lVar15 + (long)(int)uVar25 * 4);
          if (*puVar23 == uVar11) {
            uVar27 = 0x1f;
            if ((uVar25 ^ uVar30) != 0) {
              for (; (uVar25 ^ uVar30) >> uVar27 == 0; uVar27 = uVar27 - 1) {
              }
            }
            uVar27 = (uVar27 ^ 0x1f) + 0x20;
          }
          else {
            uVar11 = *puVar23 ^ uVar11;
            uVar27 = 0x1f;
            if (uVar11 != 0) {
              for (; uVar11 >> uVar27 == 0; uVar27 = uVar27 - 1) {
              }
            }
            uVar27 = uVar27 ^ 0x1f;
          }
        }
        else {
          uVar27 = 0xffffffff;
        }
        if ((int)uVar24 < 0) {
          uVar27 = ~uVar27 >> 0x1f;
          if (uVar27 == uVar30) {
            if (iVar29 < 1) goto LAB_001073cd;
            uVar11 = 0;
            uVar27 = 0;
            goto LAB_00106fe7;
          }
LAB_00107410:
          uVar11 = 0xffffffff;
        }
        else {
          if ((int)uVar24 < iVar29) {
            uVar11 = *(uint *)(lVar15 + (ulong)uVar24 * 4);
            if (*puVar23 == uVar11) {
              uVar11 = 0x1f;
              if ((uVar30 ^ uVar24) != 0) {
                for (; (uVar30 ^ uVar24) >> uVar11 == 0; uVar11 = uVar11 - 1) {
                }
              }
              uVar12 = (uVar11 ^ 0x1f) + 0x20;
            }
            else {
              uVar11 = *puVar23 ^ uVar11;
              uVar12 = 0x1f;
              if (uVar11 != 0) {
                for (; uVar11 >> uVar12 == 0; uVar12 = uVar12 - 1) {
                }
              }
              uVar12 = uVar12 ^ 0x1f;
            }
            uVar27 = (uint)(0 < (int)(uVar27 - uVar12)) + ((int)(uVar27 - uVar12) >> 0x1f);
          }
          else {
            uVar27 = ~uVar27 >> 0x1f;
          }
          uVar11 = uVar30 - uVar27;
          if (iVar29 <= (int)uVar11) goto LAB_00107410;
LAB_00106fe7:
          uVar12 = *(uint *)(lVar15 + (long)(int)uVar11 * 4);
          if (*puVar23 == uVar12) {
            uVar12 = 0x1f;
            if ((uVar11 ^ uVar30) != 0) {
              for (; (uVar11 ^ uVar30) >> uVar12 == 0; uVar12 = uVar12 - 1) {
              }
            }
            uVar11 = (uVar12 ^ 0x1f) + 0x20;
          }
          else {
            uVar12 = *puVar23 ^ uVar12;
            uVar11 = 0x1f;
            if (uVar12 != 0) {
              for (; uVar12 >> uVar11 == 0; uVar11 = uVar11 - 1) {
              }
            }
            uVar11 = uVar11 ^ 0x1f;
          }
        }
        uVar12 = uVar27 * 0x80 + uVar30;
        if (((int)uVar12 < 0) || (iVar29 <= (int)uVar12)) goto LAB_001073d6;
        iVar13 = 0x80;
        while( true ) {
          uVar32 = *(uint *)(lVar15 + (long)(int)uVar12 * 4);
          if (*puVar23 == uVar32) {
            uVar32 = 0x1f;
            if ((uVar12 ^ uVar30) != 0) {
              for (; (uVar12 ^ uVar30) >> uVar32 == 0; uVar32 = uVar32 - 1) {
              }
            }
            uVar12 = (uVar32 ^ 0x1f) + 0x20;
          }
          else {
            uVar32 = uVar32 ^ *puVar23;
            uVar12 = 0x1f;
            if (uVar32 != 0) {
              for (; uVar32 >> uVar12 == 0; uVar12 = uVar12 - 1) {
              }
            }
            uVar12 = uVar12 ^ 0x1f;
          }
          if ((int)uVar12 <= (int)uVar11) break;
          iVar13 = iVar13 * 4;
          uVar12 = iVar13 * uVar27 + uVar30;
          if (((int)uVar12 < 0) || (iVar29 <= (int)uVar12)) break;
        }
        iVar28 = iVar13 >> 1;
        if (1 < iVar13) goto LAB_00107082;
        iVar13 = 0;
        uVar27 = uVar30;
      }
      uVar11 = uVar35;
      if (((int)uVar27 < 0) || (iVar29 <= (int)uVar27)) {
        uVar12 = 0xffffffff;
      }
      else {
        uVar32 = *(uint *)(lVar15 + (long)(int)uVar27 * 4);
        if (*puVar23 == uVar32) {
          uVar12 = 0x1f;
          if ((uVar35 ^ uVar27) != 0) {
            for (; (uVar35 ^ uVar27) >> uVar12 == 0; uVar12 = uVar12 - 1) {
            }
          }
          uVar12 = (uVar12 ^ 0x1f) + 0x20;
        }
        else {
          uVar32 = *puVar23 ^ uVar32;
          uVar12 = 0x1f;
          if (uVar32 != 0) {
            for (; uVar32 >> uVar12 == 0; uVar12 = uVar12 - 1) {
            }
          }
          uVar12 = uVar12 ^ 0x1f;
        }
      }
      do {
        iVar13 = iVar13 + 1 >> 1;
        uVar32 = iVar13 + uVar11;
        if ((((int)uVar32 < (int)uVar27) && (-1 < (int)uVar32)) && ((int)uVar32 < iVar29)) {
          uVar18 = *(uint *)(lVar15 + (long)(int)uVar32 * 4);
          if (*puVar23 == uVar18) {
            uVar18 = 0x1f;
            if ((uVar35 ^ uVar32) != 0) {
              for (; (uVar35 ^ uVar32) >> uVar18 == 0; uVar18 = uVar18 - 1) {
              }
            }
            uVar19 = (uVar18 ^ 0x1f) + 0x20;
          }
          else {
            uVar18 = *puVar23 ^ uVar18;
            uVar19 = 0x1f;
            if (uVar18 != 0) {
              for (; uVar18 >> uVar19 == 0; uVar19 = uVar19 - 1) {
              }
            }
            uVar19 = uVar19 ^ 0x1f;
          }
          if ((int)uVar12 < (int)uVar19) {
            uVar11 = uVar32;
          }
        }
      } while (1 < iVar13);
      iVar22 = (uint)(uVar35 != uVar11) + uVar11 * 2;
      lVar31 = lVar31 + 1;
      uVar25 = uVar25 + 1;
      uVar24 = uVar24 + 1;
      iVar13 = (uVar27 != uVar11 + 1) + 2 + uVar11 * 2;
      *(int *)(puVar16 + (int)uVar30) = iVar22;
      *(int *)((long)(puVar16 + (int)uVar30) + 4) = iVar13;
      iVar28 = uVar30 * 2 + 1;
      *(int *)((long)__s + (long)iVar22 * 4) = iVar28;
      *(int *)((long)__s + (long)iVar13 * 4) = iVar28;
    } while (lVar33 != lVar31);
    if (0 < lVar7 * 0x30) goto LAB_00106e29;
  }
  __ptr = calloc(lVar33 * 4,1);
  if (lVar33 * 4 == 0) {
    lVar33 = 0;
    if (lVar7 != 0) goto LAB_001071b8;
  }
  else {
    lVar33 = 0;
    if (lVar7 == 0) goto LAB_00107287;
LAB_001071b8:
    do {
      lVar20 = (long)((int)lVar33 * 2);
      do {
        iVar28 = *(int *)((long)__s + lVar20 * 4);
        lVar20 = (long)((iVar28 + -1) / 2);
        LOCK();
        piVar2 = (int *)((long)__ptr + lVar20 * 4);
        iVar29 = *piVar2;
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        if (iVar29 == 0) break;
        pdVar17 = (double *)(puVar14 + (long)*(int *)(puVar16 + lVar20) * 6);
        pdVar21 = (double *)(puVar14 + (long)*(int *)((long)(puVar16 + lVar20) + 4) * 6);
        dVar37 = *pdVar17;
        if (*pdVar21 <= *pdVar17) {
          dVar37 = *pdVar21;
        }
        dVar4 = pdVar17[1];
        if (pdVar21[1] <= pdVar17[1]) {
          dVar4 = pdVar21[1];
        }
        dVar36 = pdVar17[2];
        if (pdVar21[2] <= pdVar17[2]) {
          dVar36 = pdVar21[2];
        }
        dVar38 = pdVar21[5];
        if (pdVar21[5] <= pdVar17[5]) {
          dVar38 = pdVar17[5];
        }
        dVar5 = pdVar21[3];
        if (pdVar21[3] <= pdVar17[3]) {
          dVar5 = pdVar17[3];
        }
        lVar20 = (long)iVar28;
        dVar6 = pdVar21[4];
        if (pdVar21[4] <= pdVar17[4]) {
          dVar6 = pdVar17[4];
        }
        pdVar17 = (double *)(puVar14 + lVar20 * 6);
        *pdVar17 = dVar37;
        pdVar17[1] = dVar4;
        pdVar17[2] = dVar36;
        pdVar17[3] = dVar5;
        pdVar17[4] = dVar6;
        pdVar17[5] = dVar38;
      } while (iVar28 != 1);
      lVar33 = lVar33 + 1;
    } while (lVar7 != lVar33);
  }
  if (__ptr == (void *)0x0) {
    return;
  }
LAB_00107287:
  free(__ptr);
  return;
}



/* std::vector<linalg::vec<int, 3>, std::allocator<linalg::vec<int, 3> > >::reserve(unsigned long)
    */

void __thiscall
std::vector<linalg::vec<int,3>,std::allocator<linalg::vec<int,3>>>::reserve
          (vector<linalg::vec<int,3>,std::allocator<linalg::vec<int,3>>> *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (0xaaaaaaaaaaaaaaa < param_1) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::reserve");
  }
  lVar1 = *(long *)this;
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - lVar1 >> 2) * -0x5555555555555555)) {
    return;
  }
  lVar2 = *(long *)(this + 8);
  puVar6 = (undefined8 *)operator_new(param_1 * 0xc);
  puVar3 = *(undefined8 **)(this + 8);
  puVar4 = *(undefined8 **)this;
  puVar5 = puVar6;
  for (puVar7 = puVar4; puVar3 != puVar7; puVar7 = (undefined8 *)((long)puVar7 + 0xc)) {
    *puVar5 = *puVar7;
    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar7 + 1);
    puVar5 = (undefined8 *)((long)puVar5 + 0xc);
  }
  if (puVar4 != (undefined8 *)0x0) {
    operator_delete(puVar4,*(long *)(this + 0x10) - (long)puVar4);
  }
  *(undefined8 **)this = puVar6;
  *(long *)(this + 8) = (lVar2 - lVar1) + (long)puVar6;
  *(ulong *)(this + 0x10) = (long)puVar6 + param_1 * 0xc;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
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
    puVar7 = (undefined8 *)malloc(__size);
    *(ulong *)(param_1 + 0x10) = uVar3;
    *(undefined8 **)param_1 = puVar7;
    uVar6 = _LC13;
    uVar5 = __LC11;
    uVar4 = _LC10;
    if (__size != 0) {
      uVar9 = 0;
      puVar8 = puVar7;
      do {
        uVar9 = uVar9 + 1;
        *puVar8 = uVar4;
        puVar8[1] = uVar4;
        puVar8[2] = uVar5;
        puVar8[3] = uVar6;
        puVar8[4] = uVar6;
        puVar8[5] = uVar6;
        puVar8 = puVar8 + 6;
      } while (uVar9 < ((__size - 0x30 >> 4) * 0xaaaaaaaaaaaaaab & 0xfffffffffffffff) + 1);
    }
    *(ulong *)(param_1 + 8) = uVar3;
    piVar10 = *(int **)param_2;
    if ((uVar3 & 0x3fffffffffffffff) != 0) {
      piVar1 = piVar10 + uVar3;
      do {
        iVar2 = *piVar10;
        piVar10 = piVar10 + 1;
        puVar8 = (undefined8 *)((long)iVar2 * 0x30 + (long)__ptr);
        uVar4 = puVar8[1];
        *puVar7 = *puVar8;
        puVar7[1] = uVar4;
        uVar4 = puVar8[3];
        puVar7[2] = puVar8[2];
        puVar7[3] = uVar4;
        uVar4 = puVar8[5];
        puVar7[4] = puVar8[4];
        puVar7[5] = uVar4;
        puVar7 = puVar7 + 6;
      } while (piVar10 != piVar1);
    }
  }
  if (__ptr == (void *)0x0) {
    return;
  }
  free(__ptr);
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
      goto LAB_00107935;
    }
  }
  else {
    uVar15 = lVar5 * 0x5555555555555556;
    if (uVar6 <= uVar15) {
      if (uVar15 != 0) goto LAB_001079a5;
      puVar11 = (undefined8 *)0x0;
      goto LAB_001077af;
    }
  }
  uVar6 = 0x7ffffffffffffff8;
  uVar15 = 0x555555555555555;
LAB_00107935:
  while( true ) {
    puVar11 = (undefined8 *)operator_new(uVar6);
LAB_001077af:
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
LAB_00107814:
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
LAB_001079a5:
    if (0x555555555555555 < uVar15) {
      uVar15 = 0x555555555555555;
    }
    uVar6 = uVar15 * 0x18;
  }
  puVar7 = (undefined8 *)0x0;
  goto LAB_00107814;
}



/* void std::vector<linalg::vec<int, 3>, std::allocator<linalg::vec<int, 3> >
   >::_M_realloc_insert<linalg::vec<int, 3> >(__gnu_cxx::__normal_iterator<linalg::vec<int, 3>*,
   std::vector<linalg::vec<int, 3>, std::allocator<linalg::vec<int, 3> > > >, linalg::vec<int, 3>&&)
    */

void __thiscall
std::vector<linalg::vec<int,3>,std::allocator<linalg::vec<int,3>>>::
_M_realloc_insert<linalg::vec<int,3>>
          (vector<linalg::vec<int,3>,std::allocator<linalg::vec<int,3>>> *this,undefined8 *param_2,
          undefined8 *param_3)

{
  size_t __n;
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *__dest;
  void *pvVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long local_50;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  lVar3 = (long)puVar1 - (long)puVar2 >> 2;
  uVar4 = lVar3 * -0x5555555555555555;
  if (uVar4 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar7 = (undefined8 *)((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    uVar9 = uVar4 + 1;
    if (0xfffffffffffffffe < uVar4) goto LAB_00107b00;
    if (0xaaaaaaaaaaaaaaa < uVar9) {
      uVar9 = 0xaaaaaaaaaaaaaaa;
    }
    uVar9 = uVar9 * 0xc;
LAB_00107b0a:
    puVar6 = (undefined8 *)operator_new(uVar9);
    local_50 = (long)puVar6 + uVar9;
    __dest = (void *)((long)puVar6 + 0xc);
    *(undefined8 *)((long)puVar6 + (long)puVar7) = *param_3;
    *(undefined4 *)((long)(puVar6 + 1) + (long)puVar7) = *(undefined4 *)(param_3 + 1);
    puVar7 = puVar2;
    puVar10 = puVar6;
    if (param_2 != puVar2) {
LAB_00107a70:
      do {
        puVar5 = (undefined8 *)((long)puVar7 + 0xc);
        *puVar6 = *puVar7;
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar7 + 1);
        puVar7 = puVar5;
        puVar6 = (undefined8 *)((long)puVar6 + 0xc);
      } while (puVar5 != param_2);
      __dest = (void *)((long)puVar10 +
                       ((long)param_2 + (-0xc - (long)puVar2) & 0xfffffffffffffffcU) + 0x18);
      puVar6 = puVar10;
    }
    pvVar8 = __dest;
    if (param_2 == puVar1) goto LAB_00107ac3;
  }
  else {
    uVar9 = lVar3 * 0x5555555555555556;
    if (uVar9 < uVar4) {
LAB_00107b00:
      uVar9 = 0x7ffffffffffffff8;
      goto LAB_00107b0a;
    }
    if (uVar9 != 0) {
      if (0xaaaaaaaaaaaaaaa < uVar9) {
        uVar9 = 0xaaaaaaaaaaaaaaa;
      }
      uVar9 = uVar9 * 0xc;
      goto LAB_00107b0a;
    }
    puVar6 = (undefined8 *)0x0;
    __dest = (void *)0xc;
    local_50 = 0;
    *puVar7 = *param_3;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_3 + 1);
    puVar7 = puVar2;
    puVar10 = puVar6;
    if (param_2 != puVar2) goto LAB_00107a70;
  }
  __n = ((long)puVar1 + (-0xc - (long)param_2) & 0xfffffffffffffffcU) + 0xc;
  pvVar8 = (void *)((long)__dest + __n);
  memcpy(__dest,param_2,__n);
LAB_00107ac3:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(void **)(this + 8) = pvVar8;
  *(long *)(this + 0x10) = local_50;
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
    if (0xfffffffffffffffe < uVar6) goto LAB_00107ce0;
    if (0x555555555555555 < uVar9) {
      uVar9 = 0x555555555555555;
    }
    uVar9 = uVar9 * 0x18;
LAB_00107cea:
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
LAB_00107c50:
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
    if (param_2 == puVar1) goto LAB_00107ca6;
  }
  else {
    uVar9 = lVar5 * 0x5555555555555556;
    if (uVar9 < uVar6) {
LAB_00107ce0:
      uVar9 = 0x7ffffffffffffff8;
      goto LAB_00107cea;
    }
    if (uVar9 != 0) {
      if (0x555555555555555 < uVar9) {
        uVar9 = 0x555555555555555;
      }
      uVar9 = uVar9 * 0x18;
      goto LAB_00107cea;
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
    if (param_2 != puVar2) goto LAB_00107c50;
  }
  __n = ((long)puVar1 + (-0x18 - (long)param_2) & 0xfffffffffffffff8U) + 0x18;
  puVar8 = (undefined8 *)((long)puVar10 + __n);
  memcpy(puVar10,param_2,__n);
LAB_00107ca6:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = local_50;
  return;
}



/* manifold::collider_internal::FindCollision<manifold::Box, false,
   manifold::collider_internal::SeqCollisionRecorder<false> >::RecordCollision(int, int,
   manifold::SparseIndices&) */

bool __thiscall
manifold::collider_internal::
FindCollision<manifold::Box,false,manifold::collider_internal::SeqCollisionRecorder<false>>::
RecordCollision(FindCollision<manifold::Box,false,manifold::collider_internal::SeqCollisionRecorder<false>>
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
  ulong uVar6;
  
  uVar3 = (ulong)param_1;
  pdVar4 = (double *)((long)param_2 * 0x30 + *(long *)this);
  pdVar5 = (double *)(uVar3 * 0x30 + *(long *)(this + 0x10));
  if ((((pdVar4[3] < *pdVar5) || (pdVar4[4] < pdVar5[1])) || (pdVar4[5] < pdVar5[2])) ||
     (((pdVar5[3] < *pdVar4 || (pdVar5[4] < pdVar4[1])) || (pdVar5[5] < pdVar4[2])))) {
    return false;
  }
  if ((uVar3 & 1) != 0) goto LAB_00107e24;
  __n = *(size_t *)(param_3 + 8);
  uVar1 = *(ulong *)(param_3 + 0x10);
  uVar6 = __n + 8;
  if (uVar6 < uVar1) {
LAB_00107e86:
    __dest = *(undefined1 **)param_3;
  }
  else {
    if (uVar1 == 0) {
      __size = 0x80;
    }
    else {
      __size = uVar1 * 2;
      if (uVar1 * 2 < uVar6) {
        __size = uVar6;
      }
      if (__size <= uVar1) goto LAB_00107e86;
    }
    __dest = (undefined1 *)malloc(__size);
    __src = *(undefined1 **)param_3;
    if (__n == 0) {
LAB_00107ed3:
      if (__src != (undefined1 *)0x0) goto LAB_00107f01;
    }
    else {
      if ((long)__n < 2) {
        if (__n != 1) goto LAB_00107ed3;
        *__dest = *__src;
      }
      else {
        memmove(__dest,__src,__n);
      }
LAB_00107f01:
      free(__src);
      uVar6 = *(long *)(param_3 + 8) + 8;
    }
    *(undefined1 **)param_3 = __dest;
    *(ulong *)(param_3 + 0x10) = __size;
  }
  *(ulong *)(param_3 + 8) = uVar6;
  *(long *)(__dest + ((uVar6 & 0xfffffffffffffff8) - 8)) =
       (long)param_2 << 0x20 | (long)((int)(((uint)(uVar3 >> 0x1f) & 1) + param_1) >> 1);
LAB_00107e24:
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





/* std::_Rb_tree<int, std::pair<int const, std::vector<std::pair<manifold::Smoothness,
   manifold::Smoothness>, std::allocator<std::pair<manifold::Smoothness, manifold::Smoothness> > >
   >, std::_Select1st<std::pair<int const, std::vector<std::pair<manifold::Smoothness,
   manifold::Smoothness>, std::allocator<std::pair<manifold::Smoothness, manifold::Smoothness> > > >
   >, std::less<int>, std::allocator<std::pair<int const,
   std::vector<std::pair<manifold::Smoothness, manifold::Smoothness>,
   std::allocator<std::pair<manifold::Smoothness, manifold::Smoothness> > > > >
   >::_M_get_insert_unique_pos(int const&) [clone .isra.0] */

undefined1  [16] __thiscall
std::
_Rb_tree<int,std::pair<int_const,std::vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>>,std::_Select1st<std::pair<int_const,std::vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>>>>
::_M_get_insert_unique_pos
          (_Rb_tree<int,std::pair<int_const,std::vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>>,std::_Select1st<std::pair<int_const,std::vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>>>>
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
    if (iVar5 <= iVar6) goto LAB_00100038;
  }
  if (*(_Rb_tree_node_base **)(this + 0x18) == p_Var2) {
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



/* std::_Rb_tree<int, std::pair<int const, std::pair<manifold::Smoothness, manifold::Smoothness> >,
   std::_Select1st<std::pair<int const, std::pair<manifold::Smoothness, manifold::Smoothness> > >,
   std::less<int>, std::allocator<std::pair<int const, std::pair<manifold::Smoothness,
   manifold::Smoothness> > > >::_M_get_insert_unique_pos(int const&) [clone .isra.0] */

undefined1  [16] __thiscall
std::
_Rb_tree<int,std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>,std::_Select1st<std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>>,std::less<int>,std::allocator<std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>>>
::_M_get_insert_unique_pos
          (_Rb_tree<int,std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>,std::_Select1st<std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>>,std::less<int>,std::allocator<std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>>>
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
    if (iVar5 <= iVar6) goto LAB_001000c8;
  }
  if (*(_Rb_tree_node_base **)(this + 0x18) == p_Var2) {
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



/* std::_Function_handler<void (int),
   manifold::Manifold::Impl::CreateTangents(std::vector<manifold::Smoothness,
   std::allocator<manifold::Smoothness> >)::{lambda(int)#2}::operator()(int)
   const::{lambda(int)#2}>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8
std::
_Function_handler<void(int),manifold::Manifold::Impl::CreateTangents(std::vector<manifold::Smoothness,std::allocator<manifold::Smoothness>>)::{lambda(int)#2}::operator()(int)const::{lambda(int)#2}>
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
  *param_1 = (long)&const::{lambda(int)#2}::typeinfo;
  return 0;
}



/* std::_Function_handler<void (int),
   manifold::Manifold::Impl::CreateTangents(std::vector<manifold::Smoothness,
   std::allocator<manifold::Smoothness> >)::{lambda(int)#2}::operator()(int)
   const::{lambda(int)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8
std::
_Function_handler<void(int),manifold::Manifold::Impl::CreateTangents(std::vector<manifold::Smoothness,std::allocator<manifold::Smoothness>>)::{lambda(int)#2}::operator()(int)const::{lambda(int)#1}>
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
  *param_1 = (long)&const::{lambda(int)#1}::typeinfo;
  return 0;
}



/* std::_Function_handler<void (int,
   manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int) const::FlatNormal
   const&, manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)
   const::FlatNormal&),
   manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)
   const::{lambda(int,
   manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int) const::FlatNormal
   const&, manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)
   const::FlatNormal const&)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8
std::
_Function_handler<void(int,manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)const::FlatNormal_const&,manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)const::FlatNormal&),manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)const::{lambda(int,manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)const::FlatNormal_const&,manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)const::FlatNormal_const&)#1}>
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
  *param_1 = (long)&const::
                    {lambda(int,manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)const::FlatNormal_const&,manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)const::FlatNormal_const&)#1}
                    ::typeinfo;
  return 0;
}



/* std::_Function_handler<manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)
   const::FlatNormal (int),
   manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)
   const::{lambda(int)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8
std::
_Function_handler<manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)const::FlatNormal(int),manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)const::{lambda(int)#1}>
::_M_manager(undefined8 *param_1,undefined8 *param_2,int param_3)

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
  *param_1 = &const::{lambda(int)#1}::typeinfo;
  return 0;
}



/* std::_Function_handler<void (int), manifold::Manifold::Impl::SetNormals(int,
   double)::{lambda(int)#4}>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8
std::_Function_handler<void(int),manifold::Manifold::Impl::SetNormals(int,double)::{lambda(int)#4}>
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
      puVar3 = (undefined8 *)operator_new(0x60);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      uVar2 = puVar1[7];
      puVar3[6] = puVar1[6];
      puVar3[7] = uVar2;
      uVar2 = puVar1[9];
      puVar3[8] = puVar1[8];
      puVar3[9] = uVar2;
      uVar2 = puVar1[0xb];
      puVar3[10] = puVar1[10];
      puVar3[0xb] = uVar2;
      *param_1 = (long)puVar3;
    }
    else if ((param_3 == 3) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1,0x60);
    }
    return 0;
  }
  *param_1 = (long)&manifold::Manifold::Impl::SetNormals(int,double)::{lambda(int)#4}::typeinfo;
  return 0;
}



/* std::_Function_handler<void (int, manifold::Manifold::Impl::SetNormals(int, double)::FaceEdge
   const&, manifold::Manifold::Impl::SetNormals(int, double)::FaceEdge&),
   manifold::Manifold::Impl::SetNormals(int, double)::{lambda(int,
   manifold::Manifold::Impl::SetNormals(int, double)::FaceEdge const&,
   manifold::Manifold::Impl::SetNormals(int, double)::FaceEdge&)#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(int,manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge_const&,manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge&),manifold::Manifold::Impl::SetNormals(int,double)::{lambda(int,manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge_const&,manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge&)#1}>
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
  *param_1 = (long)&manifold::Manifold::Impl::SetNormals(int,double)::
                    {lambda(int,manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge_const&,manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge&)#1}
                    ::typeinfo;
  return 0;
}



/* std::_Function_handler<manifold::Manifold::Impl::SetNormals(int, double)::FaceEdge (int),
   manifold::Manifold::Impl::SetNormals(int, double)::{lambda(int)#3}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge(int),manifold::Manifold::Impl::SetNormals(int,double)::{lambda(int)#3}>
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
  *param_1 = (long)&manifold::Manifold::Impl::SetNormals(int,double)::{lambda(int)#3}::typeinfo;
  return 0;
}



/* std::_Function_handler<void (int), manifold::Manifold::Impl::SetNormals(int,
   double)::{lambda(int)#2}>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8
std::_Function_handler<void(int),manifold::Manifold::Impl::SetNormals(int,double)::{lambda(int)#2}>
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
      puVar3 = (undefined8 *)operator_new(0x40);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      uVar2 = puVar1[7];
      puVar3[6] = puVar1[6];
      puVar3[7] = uVar2;
      *param_1 = (long)puVar3;
    }
    else if ((param_3 == 3) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1,0x40);
    }
    return 0;
  }
  *param_1 = (long)&manifold::Manifold::Impl::SetNormals(int,double)::{lambda(int)#2}::typeinfo;
  return 0;
}



/* manifold::Manifold::Impl::LinearizeFlatTangents()::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int)
   const [clone .isra.0] */

void __thiscall
manifold::Manifold::Impl::LinearizeFlatTangents()::{lambda(int)#1}::operator()
          (_lambda_int__1_ *this,int param_1)

{
  int *piVar1;
  double *pdVar2;
  double *pdVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  ulong uVar6;
  double *pdVar7;
  undefined1 (*pauVar8) [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  
  uVar6 = _LC5;
  dVar12 = _LC7;
  dVar10 = _LC2;
  piVar1 = (int *)(*(long *)(this + 0x60) + (long)param_1 * 0xc);
  if (*piVar1 < piVar1[1]) {
    pauVar8 = (undefined1 (*) [16])((long)param_1 * 0x20 + *(long *)(this + 0xa8));
    dVar14 = *(double *)(pauVar8[1] + 8);
    pdVar7 = (double *)(*(long *)(this + 0xa8) + (long)piVar1[2] * 0x20);
    dVar11 = pdVar7[3];
    if (dVar14 != 0.0) {
      bVar5 = dVar14 == 0.0;
      if (dVar11 == 0.0) {
        bVar5 = !NAN(dVar11);
      }
      if (!bVar5) {
        return;
      }
    }
    pdVar2 = (double *)(*(long *)(this + 0x48) + (long)*piVar1 * 0x18);
    pdVar3 = (double *)(*(long *)(this + 0x48) + (long)piVar1[1] * 0x18);
    dVar9 = pdVar3[2] - pdVar2[2];
    auVar13._0_8_ = *pdVar3 - *pdVar2;
    auVar13._8_8_ = pdVar3[1] - pdVar2[1];
    if (dVar14 == 0.0) {
      if (dVar11 == 0.0) {
        dVar9 = dVar9 / _LC2;
        *(double *)pauVar8[1] = dVar9;
        dVar12 = _LC3;
        dVar9 = (double)((ulong)dVar9 ^ _LC5);
        auVar4._8_8_ = dVar10;
        auVar4._0_8_ = dVar10;
        auVar13 = divpd(auVar13,auVar4);
        *(double *)(pauVar8[1] + 8) = _LC3;
        *pauVar8 = auVar13;
        *pdVar7 = (double)(auVar13._0_8_ ^ uVar6);
        pdVar7[1] = (double)(auVar13._8_8_ ^ uVar6);
        pdVar7[2] = dVar9;
        pdVar7[3] = dVar12;
        return;
      }
      dVar10 = *pdVar7;
      dVar14 = pdVar7[1];
      dVar11 = (dVar9 + pdVar7[2]) * _LC7;
      *(double *)(pauVar8[1] + 8) = _LC3;
      *(double *)pauVar8[1] = dVar11;
      *(double *)*pauVar8 = (auVar13._0_8_ + dVar10) * dVar12;
      *(double *)(*pauVar8 + 8) = (auVar13._8_8_ + dVar14) * dVar12;
      return;
    }
    dVar10 = *(double *)*pauVar8;
    dVar12 = *(double *)(*pauVar8 + 8);
    dVar14 = (*(double *)pauVar8[1] - dVar9) * _LC7;
    pdVar7[3] = _LC3;
    dVar10 = (dVar10 - auVar13._0_8_) * _LC7;
    dVar12 = (dVar12 - auVar13._8_8_) * _LC7;
    pdVar7[2] = dVar14;
    *pdVar7 = dVar10;
    pdVar7[1] = dVar12;
  }
  return;
}



/* std::_Rb_tree_iterator<std::pair<int const, std::vector<std::pair<manifold::Smoothness,
   manifold::Smoothness>, std::allocator<std::pair<manifold::Smoothness, manifold::Smoothness> > > >
   > std::_Rb_tree<int, std::pair<int const, std::vector<std::pair<manifold::Smoothness,
   manifold::Smoothness>, std::allocator<std::pair<manifold::Smoothness, manifold::Smoothness> > >
   >, std::_Select1st<std::pair<int const, std::vector<std::pair<manifold::Smoothness,
   manifold::Smoothness>, std::allocator<std::pair<manifold::Smoothness, manifold::Smoothness> > > >
   >, std::less<int>, std::allocator<std::pair<int const,
   std::vector<std::pair<manifold::Smoothness, manifold::Smoothness>,
   std::allocator<std::pair<manifold::Smoothness, manifold::Smoothness> > > > >
   >::_M_emplace_hint_unique<std::piecewise_construct_t const&, std::tuple<int const&>, std::tuple<>
   >(std::_Rb_tree_const_iterator<std::pair<int const, std::vector<std::pair<manifold::Smoothness,
   manifold::Smoothness>, std::allocator<std::pair<manifold::Smoothness, manifold::Smoothness> > > >
   >, std::piecewise_construct_t const&, std::tuple<int const&>&&, std::tuple<>&&) [clone .isra.0]
    */

_Rb_tree_node_base *
std::
_Rb_tree<int,std::pair<int_const,std::vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>>,std::_Select1st<std::pair<int_const,std::vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>>>>
::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
          (_Rb_tree<int,std::pair<int_const,std::vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>>,std::_Select1st<std::pair<int_const,std::vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>>>>
           *param_1,_Rb_tree_node_base *param_2,undefined8 *param_3)

{
  _Rb_tree_node_base *p_Var1;
  uint uVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  bool bVar5;
  undefined1 auVar6 [16];
  
  p_Var1 = (_Rb_tree_node_base *)(param_1 + 8);
  p_Var3 = (_Rb_tree_node_base *)operator_new(0x40);
  uVar2 = *(uint *)*param_3;
  *(undefined8 *)(p_Var3 + 0x38) = 0;
  *(undefined1 (*) [16])(p_Var3 + 0x28) = (undefined1  [16])0x0;
  *(uint *)(p_Var3 + 0x20) = uVar2;
  if (param_2 == p_Var1) {
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (p_Var4 = *(_Rb_tree_node_base **)(param_1 + 0x20), (int)uVar2 <= *(int *)(p_Var4 + 0x20))) {
LAB_00100808:
      auVar6 = _M_get_insert_unique_pos(param_1,(int *)(ulong)uVar2);
      param_2 = auVar6._0_8_;
      if (auVar6._8_8_ == (_Rb_tree_node_base *)0x0) {
LAB_00100818:
        operator_delete(p_Var3,0x40);
        return param_2;
      }
      bVar5 = param_2 != (_Rb_tree_node_base *)0x0;
      p_Var4 = auVar6._8_8_;
    }
    else {
LAB_0010086b:
      bVar5 = false;
    }
LAB_00100876:
    param_2 = p_Var4;
    p_Var4 = param_2;
    if ((p_Var1 == param_2) || (bVar5)) {
LAB_00100838:
      param_2 = p_Var4;
      bVar5 = true;
      goto LAB_0010083d;
    }
  }
  else {
    if ((int)uVar2 < *(int *)(param_2 + 0x20)) {
      p_Var4 = *(_Rb_tree_node_base **)(param_1 + 0x18);
      if (param_2 != *(_Rb_tree_node_base **)(param_1 + 0x18)) {
        p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
        if (*(int *)(p_Var4 + 0x20) < (int)uVar2) {
          if (*(long *)(p_Var4 + 0x18) != 0) {
            bVar5 = true;
            goto LAB_0010083d;
          }
          goto LAB_0010086b;
        }
        goto LAB_00100808;
      }
      goto LAB_00100838;
    }
    if ((int)uVar2 <= *(int *)(param_2 + 0x20)) goto LAB_00100818;
    p_Var4 = *(_Rb_tree_node_base **)(param_1 + 0x20);
    if (param_2 == p_Var4) goto LAB_0010086b;
    p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
    if (*(int *)(p_Var4 + 0x20) <= (int)uVar2) goto LAB_00100808;
    bVar5 = true;
    if (*(long *)(param_2 + 0x18) != 0) goto LAB_00100876;
  }
  bVar5 = (int)uVar2 < *(int *)(param_2 + 0x20);
LAB_0010083d:
  std::_Rb_tree_insert_and_rebalance(bVar5,p_Var3,param_2,p_Var1);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return p_Var3;
}



/* std::_Rb_tree_iterator<std::pair<int const, std::pair<manifold::Smoothness, manifold::Smoothness>
   > > std::_Rb_tree<int, std::pair<int const, std::pair<manifold::Smoothness, manifold::Smoothness>
   >, std::_Select1st<std::pair<int const, std::pair<manifold::Smoothness, manifold::Smoothness> >
   >, std::less<int>, std::allocator<std::pair<int const, std::pair<manifold::Smoothness,
   manifold::Smoothness> > > >::_M_emplace_hint_unique<std::piecewise_construct_t const&,
   std::tuple<int const&>, std::tuple<> >(std::_Rb_tree_const_iterator<std::pair<int const,
   std::pair<manifold::Smoothness, manifold::Smoothness> > >, std::piecewise_construct_t const&,
   std::tuple<int const&>&&, std::tuple<>&&) [clone .isra.0] */

_Rb_tree_node_base *
std::
_Rb_tree<int,std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>,std::_Select1st<std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>>,std::less<int>,std::allocator<std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>>>
::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
          (_Rb_tree<int,std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>,std::_Select1st<std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>>,std::less<int>,std::allocator<std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>>>
           *param_1,_Rb_tree_node_base *param_2,undefined8 *param_3)

{
  _Rb_tree_node_base *p_Var1;
  uint uVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  bool bVar5;
  undefined1 auVar6 [16];
  
  p_Var1 = (_Rb_tree_node_base *)(param_1 + 8);
  p_Var3 = (_Rb_tree_node_base *)operator_new(0x48);
  uVar2 = *(uint *)*param_3;
  *(undefined8 *)(p_Var3 + 0x28) = 0;
  *(undefined8 *)(p_Var3 + 0x30) = 0;
  *(uint *)(p_Var3 + 0x20) = uVar2;
  *(undefined8 *)(p_Var3 + 0x38) = 0;
  *(undefined8 *)(p_Var3 + 0x40) = 0;
  if (p_Var1 == param_2) {
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (p_Var4 = *(_Rb_tree_node_base **)(param_1 + 0x20), (int)uVar2 <= *(int *)(p_Var4 + 0x20))) {
LAB_00100988:
      auVar6 = _M_get_insert_unique_pos(param_1,(int *)(ulong)uVar2);
      param_2 = auVar6._0_8_;
      bVar5 = param_2 != (_Rb_tree_node_base *)0x0;
      p_Var4 = auVar6._8_8_;
      if (auVar6._8_8_ == (_Rb_tree_node_base *)0x0) {
LAB_001009a1:
        operator_delete(p_Var3,0x48);
        return param_2;
      }
    }
    else {
LAB_001009cb:
      bVar5 = false;
    }
joined_r0x0010095c:
    param_2 = p_Var4;
    p_Var4 = param_2;
    if ((p_Var1 == param_2) || (bVar5)) {
LAB_00100962:
      param_2 = p_Var4;
      bVar5 = true;
      goto LAB_00100967;
    }
  }
  else {
    if ((int)uVar2 < *(int *)(param_2 + 0x20)) {
      p_Var4 = *(_Rb_tree_node_base **)(param_1 + 0x18);
      if (*(_Rb_tree_node_base **)(param_1 + 0x18) != param_2) {
        p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
        if ((int)uVar2 <= *(int *)(p_Var4 + 0x20)) goto LAB_00100988;
        if (*(long *)(p_Var4 + 0x18) != 0) {
          bVar5 = true;
          goto LAB_00100967;
        }
        goto LAB_001009cb;
      }
      goto LAB_00100962;
    }
    if ((int)uVar2 <= *(int *)(param_2 + 0x20)) goto LAB_001009a1;
    if (*(_Rb_tree_node_base **)(param_1 + 0x20) != param_2) {
      p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
      if (*(int *)(p_Var4 + 0x20) <= (int)uVar2) goto LAB_00100988;
      bVar5 = true;
      if (*(long *)(param_2 + 0x18) != 0) goto joined_r0x0010095c;
    }
  }
  bVar5 = (int)uVar2 < *(int *)(param_2 + 0x20);
LAB_00100967:
  std::_Rb_tree_insert_and_rebalance(bVar5,p_Var3,param_2,p_Var1);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return p_Var3;
}



/* std::_Rb_tree<int, std::pair<int const, std::vector<std::pair<manifold::Smoothness,
   manifold::Smoothness>, std::allocator<std::pair<manifold::Smoothness, manifold::Smoothness> > >
   >, std::_Select1st<std::pair<int const, std::vector<std::pair<manifold::Smoothness,
   manifold::Smoothness>, std::allocator<std::pair<manifold::Smoothness, manifold::Smoothness> > > >
   >, std::less<int>, std::allocator<std::pair<int const,
   std::vector<std::pair<manifold::Smoothness, manifold::Smoothness>,
   std::allocator<std::pair<manifold::Smoothness, manifold::Smoothness> > > > >
   >::_M_erase(std::_Rb_tree_node<std::pair<int const, std::vector<std::pair<manifold::Smoothness,
   manifold::Smoothness>, std::allocator<std::pair<manifold::Smoothness, manifold::Smoothness> > > >
   >*) [clone .isra.0] */

void std::
     _Rb_tree<int,std::pair<int_const,std::vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>>,std::_Select1st<std::pair<int_const,std::vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>>>>
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



/* std::_Function_handler<void (int), manifold::Manifold::Impl::SetNormals(int,
   double)::{lambda(int)#2}>::_M_invoke(std::_Any_data const&, int&&) */

void std::
     _Function_handler<void(int),manifold::Manifold::Impl::SetNormals(int,double)::{lambda(int)#2}>
     ::_M_invoke(_Any_data *param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 *__dest;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  size_t __n;
  long lVar9;
  int *piVar10;
  long in_FS_OFFSET;
  undefined8 uVar11;
  undefined8 local_30;
  undefined4 local_28;
  int local_24;
  long local_20;
  
  puVar3 = *(undefined8 **)param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = (long)(*param_2 / 3) * 0xc;
  lVar9 = puVar3[1];
  piVar10 = (int *)(*(long *)*puVar3 + lVar5);
  piVar6 = (int *)(lVar5 + *(long *)(lVar9 + 0x128));
  iVar7 = *param_2 % 3;
  if (iVar7 == 0) {
    iVar7 = *piVar10;
  }
  else if (iVar7 == 1) {
    iVar7 = piVar10[1];
    piVar6 = piVar6 + 1;
  }
  else {
    iVar7 = piVar10[2];
    piVar6 = piVar6 + 2;
  }
  *piVar6 = iVar7;
  if (*(int *)puVar3[2] != iVar7) {
    plVar4 = (long *)puVar3[3];
    lVar9 = *(long *)(lVar9 + 200);
    *(int *)puVar3[2] = iVar7;
    __n = (long)*(int *)puVar3[4] * 8;
    puVar1 = (undefined8 *)(*plVar4 + (long)(*(int *)puVar3[4] * iVar7) * 8);
    iVar8 = *(int *)puVar3[5] * iVar7;
    __dest = (undefined8 *)(lVar9 + (long)iVar8 * 8);
    if ((long)__n < 9) {
      if (__n == 8) {
        *__dest = *puVar1;
      }
    }
    else {
      memmove(__dest,puVar1,__n);
      iVar8 = *(int *)puVar3[5] * iVar7;
      lVar9 = *(long *)(puVar3[1] + 200);
    }
    puVar1 = (undefined8 *)puVar3[7];
    piVar6 = (int *)&local_30;
    local_28 = 2;
    local_30 = _LC9;
    iVar7 = *(int *)puVar3[6];
    do {
      iVar2 = *piVar6;
      if (iVar2 == 0) {
        uVar11 = *puVar1;
      }
      else if (iVar2 == 1) {
        uVar11 = puVar1[1];
      }
      else {
        uVar11 = puVar1[2];
      }
      piVar6 = piVar6 + 1;
      *(undefined8 *)(lVar9 + (long)(iVar2 + iVar8 + iVar7) * 8) = uVar11;
    } while (piVar6 != &local_24);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Function_handler<void (int), manifold::Manifold::Impl::SetNormals(int,
   double)::{lambda(int)#4}>::_M_invoke(std::_Any_data const&, int&&) */

void std::
     _Function_handler<void(int),manifold::Manifold::Impl::SetNormals(int,double)::{lambda(int)#4}>
     ::_M_invoke(_Any_data *param_1,int *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  size_t sVar12;
  long lVar13;
  int *piVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  long in_FS_OFFSET;
  undefined8 uVar21;
  undefined8 uVar22;
  size_t local_68;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  puVar4 = *(undefined8 **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar13 = (long)(*param_2 / 3) * 0xc;
  piVar15 = (int *)(*(long *)*puVar4 + lVar13);
  iVar19 = *param_2 % 3;
  if (iVar19 == 0) {
    iVar20 = *piVar15;
  }
  else if (iVar19 == 1) {
    iVar20 = piVar15[1];
  }
  else {
    iVar20 = piVar15[2];
  }
  piVar15 = (int *)puVar4[2];
  piVar14 = (int *)puVar4[7];
  lVar16 = puVar4[8];
  iVar11 = *(int *)puVar4[6];
  puVar1 = (undefined8 *)(*(long *)puVar4[1] + (long)(*piVar15 * iVar20) * 8);
  piVar7 = (int *)puVar4[4];
  lVar17 = *(long *)puVar4[3];
  iVar3 = *(int *)(lVar17 + (long)*piVar7 * 4);
  if ((*(int *)puVar4[5] == iVar3) || (iVar3 == 0)) {
    if (iVar20 == iVar11) {
      iVar20 = *piVar14;
      goto LAB_00100c9f;
    }
  }
  else if (iVar20 == iVar11) {
    *(int *)puVar4[5] = iVar3;
    uVar6 = *(ulong *)(lVar16 + 0xd0);
    if (*(int *)(lVar16 + 0xc4) == 0) {
      iVar20 = (int)*(undefined8 *)(lVar16 + 0x50);
    }
    else {
      iVar20 = (int)(uVar6 / (ulong)(long)*(int *)(lVar16 + 0xc4));
    }
    *piVar14 = iVar20;
    piVar7 = (int *)puVar4[9];
    uVar2 = (long)*piVar7 + uVar6;
    if (uVar2 <= *(ulong *)(lVar16 + 0xd8)) {
      if (uVar6 < uVar2) {
        puVar10 = *(undefined8 **)(lVar16 + 200);
        uVar8 = uVar6;
        goto LAB_00100f97;
      }
      *(ulong *)(lVar16 + 0xd0) = uVar2;
      if (uVar6 <= uVar2 * 2) goto LAB_00100e99;
      if (uVar2 != 0) goto LAB_00100fcb;
      puVar10 = *(undefined8 **)(lVar16 + 200);
      puVar9 = (undefined8 *)0x0;
      goto LAB_00100e6a;
    }
    puVar10 = (undefined8 *)malloc(uVar2 * 8);
    puVar9 = *(undefined8 **)(lVar16 + 200);
    if (uVar6 == 0) {
LAB_00101064:
      if (puVar9 != (undefined8 *)0x0) goto LAB_00101069;
    }
    else {
      sVar12 = uVar6 * 8;
      if (8 < (long)sVar12) {
        puVar10 = (undefined8 *)memmove(puVar10,puVar9,sVar12);
        puVar9 = *(undefined8 **)(lVar16 + 200);
        goto LAB_00101064;
      }
      if (sVar12 != 8) goto LAB_00101064;
      *puVar10 = *puVar9;
LAB_00101069:
      free(puVar9);
    }
    uVar8 = *(ulong *)(lVar16 + 0xd0);
    *(undefined8 **)(lVar16 + 200) = puVar10;
    *(ulong *)(lVar16 + 0xd8) = uVar2;
    if (uVar8 < uVar2) {
LAB_00100f97:
      local_68 = uVar2 * 8;
      if (puVar10 + uVar8 != puVar10 + uVar2) {
        memset(puVar10 + uVar8,0,local_68 + uVar8 * -8);
      }
    }
    *(ulong *)(lVar16 + 0xd0) = uVar2;
    if (uVar2 * 2 < uVar6) {
LAB_00100fcb:
      local_68 = uVar2 * 8;
      puVar9 = (undefined8 *)malloc(local_68);
      puVar10 = *(undefined8 **)(lVar16 + 200);
      if ((long)local_68 < 9) {
        if (local_68 != 8) goto LAB_00100e6a;
        *puVar9 = *puVar10;
LAB_00100e6f:
        free(puVar10);
      }
      else {
        memmove(puVar9,puVar10,local_68);
        puVar10 = *(undefined8 **)(lVar16 + 200);
LAB_00100e6a:
        if (puVar10 != (undefined8 *)0x0) goto LAB_00100e6f;
      }
      *(undefined8 **)(lVar16 + 200) = puVar9;
      *(undefined8 *)(lVar16 + 0xd8) = *(undefined8 *)(lVar16 + 0xd0);
    }
    piVar15 = (int *)puVar4[2];
    piVar14 = (int *)puVar4[7];
    lVar16 = puVar4[8];
    piVar7 = (int *)puVar4[9];
LAB_00100e99:
    iVar20 = *piVar14;
    lVar17 = *(long *)(lVar16 + 200);
    iVar11 = *piVar7 * iVar20;
    sVar12 = (long)*piVar15 * 8;
    puVar10 = (undefined8 *)(lVar17 + (long)iVar11 * 8);
    if ((long)sVar12 < 9) {
      if (sVar12 == 8) {
        *puVar10 = *puVar1;
      }
    }
    else {
      memmove(puVar10,puVar1,sVar12);
      lVar16 = puVar4[8];
      iVar20 = *(int *)puVar4[7];
      lVar17 = *(long *)(lVar16 + 200);
      iVar11 = *(int *)puVar4[9] * iVar20;
    }
    local_48 = 2;
    local_50 = _LC9;
    uVar21 = local_50;
    piVar7 = (int *)puVar4[4];
    puVar1 = (undefined8 *)
             (*(long *)puVar4[0xb] + (long)*(int *)(*(long *)puVar4[3] + (long)*piVar7 * 4) * 0x18);
    iVar3 = *(int *)puVar4[10];
    local_50._0_4_ = (int)_LC9;
    piVar15 = (int *)&local_50;
    if ((int)local_50 != 0) goto LAB_00100f5c;
    do {
      uVar22 = *puVar1;
      while( true ) {
        piVar15 = piVar15 + 1;
        *(undefined8 *)(lVar17 + (long)((int)local_50 + iVar11 + iVar3) * 8) = uVar22;
        local_50 = uVar21;
        if (piVar15 == &local_44) goto LAB_00100c9f;
        local_50._0_4_ = *piVar15;
        if ((int)local_50 == 0) break;
LAB_00100f5c:
        if ((int)local_50 == 1) {
          uVar22 = puVar1[1];
        }
        else {
          uVar22 = puVar1[2];
        }
      }
    } while( true );
  }
  piVar5 = (int *)puVar4[9];
  *(int *)puVar4[6] = iVar20;
  *piVar14 = iVar20;
  lVar18 = *(long *)(lVar16 + 200);
  iVar11 = *piVar5 * iVar20;
  puVar10 = (undefined8 *)(lVar18 + (long)iVar11 * 8);
  sVar12 = (long)*piVar15 * 8;
  if ((long)sVar12 < 9) {
    if (sVar12 == 8) {
      *puVar10 = *puVar1;
    }
  }
  else {
    memmove(puVar10,puVar1,sVar12);
    lVar16 = puVar4[8];
    piVar7 = (int *)puVar4[4];
    piVar14 = (int *)puVar4[7];
    lVar17 = *(long *)puVar4[3];
    lVar18 = *(long *)(lVar16 + 200);
    iVar11 = *(int *)puVar4[9] * iVar20;
  }
  local_48 = 2;
  local_50 = _LC9;
  puVar1 = (undefined8 *)(*(long *)puVar4[0xb] + (long)*(int *)(lVar17 + (long)*piVar7 * 4) * 0x18);
  iVar20 = *(int *)puVar4[10];
  piVar15 = (int *)&local_50;
  do {
    iVar3 = *piVar15;
    if (iVar3 == 0) {
      uVar21 = *puVar1;
    }
    else if (iVar3 == 1) {
      uVar21 = puVar1[1];
    }
    else {
      uVar21 = puVar1[2];
    }
    piVar15 = piVar15 + 1;
    *(undefined8 *)(lVar18 + (long)(iVar3 + iVar20 + iVar11) * 8) = uVar21;
  } while (piVar15 != &local_44);
  iVar20 = *piVar14;
LAB_00100c9f:
  piVar14 = (int *)(lVar13 + *(long *)(lVar16 + 0x128));
  piVar15 = piVar14;
  if (iVar19 != 0) {
    piVar15 = piVar14 + 2;
    if (iVar19 == 1) {
      piVar15 = piVar14 + 1;
    }
  }
  *piVar15 = iVar20;
  *piVar7 = *piVar7 + 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* (anonymous namespace)::InterpTri::CubicBezier2Linear(linalg::vec<double, 4>, linalg::vec<double,
   4>, linalg::vec<double, 4>, linalg::vec<double, 4>, double) */

double * (anonymous_namespace)::InterpTri::CubicBezier2Linear(double param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
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
  double in_stack_00000068;
  double in_stack_00000070;
  double in_stack_00000078;
  double in_stack_00000080;
  
  dVar1 = _LC3 - param_1;
  dVar2 = in_stack_00000048 * param_1 + in_stack_00000028 * dVar1;
  dVar3 = in_stack_00000050 * param_1 + in_stack_00000030 * dVar1;
  dVar4 = in_stack_00000058 * param_1 + in_stack_00000038 * dVar1;
  dVar5 = in_stack_00000060 * param_1 + in_stack_00000040 * dVar1;
  param_2[2] = (in_stack_00000018 * dVar1 + in_stack_00000038 * param_1) * dVar1 + dVar4 * param_1;
  param_2[3] = (in_stack_00000020 * dVar1 + in_stack_00000040 * param_1) * dVar1 + dVar5 * param_1;
  *param_2 = (in_stack_00000008 * dVar1 + in_stack_00000028 * param_1) * dVar1 + dVar2 * param_1;
  param_2[1] = (in_stack_00000010 * dVar1 + in_stack_00000030 * param_1) * dVar1 + dVar3 * param_1;
  param_2[6] = (in_stack_00000078 * param_1 + in_stack_00000058 * dVar1) * param_1 + dVar4 * dVar1;
  param_2[7] = (in_stack_00000080 * param_1 + in_stack_00000060 * dVar1) * param_1 + dVar5 * dVar1;
  param_2[4] = dVar1 * dVar2 + param_1 * (in_stack_00000068 * param_1 + in_stack_00000048 * dVar1);
  param_2[5] = dVar1 * dVar3 + param_1 * (in_stack_00000070 * param_1 + in_stack_00000050 * dVar1);
  return param_2;
}



/* std::_Rb_tree<int, std::pair<int const, std::pair<manifold::Smoothness, manifold::Smoothness> >,
   std::_Select1st<std::pair<int const, std::pair<manifold::Smoothness, manifold::Smoothness> > >,
   std::less<int>, std::allocator<std::pair<int const, std::pair<manifold::Smoothness,
   manifold::Smoothness> > > >::_M_erase(std::_Rb_tree_node<std::pair<int const,
   std::pair<manifold::Smoothness, manifold::Smoothness> > >*) [clone .isra.0] */

void std::
     _Rb_tree<int,std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>,std::_Select1st<std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>>,std::less<int>,std::allocator<std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>>>
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



/* std::_Function_handler<void (int),
   manifold::Manifold::Impl::CreateTangents(std::vector<manifold::Smoothness,
   std::allocator<manifold::Smoothness> >)::{lambda(int)#2}::operator()(int)
   const::{lambda(int)#2}>::_M_invoke(std::_Any_data const&, int&&) */

void std::
     _Function_handler<void(int),manifold::Manifold::Impl::CreateTangents(std::vector<manifold::Smoothness,std::allocator<manifold::Smoothness>>)::{lambda(int)#2}::operator()(int)const::{lambda(int)#2}>
     ::_M_invoke(_Any_data *param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  
  plVar2 = *(long **)param_1;
  iVar1 = *param_2;
  lVar3 = *plVar2;
  pdVar4 = (double *)((long)iVar1 * 0x20 + *(long *)(lVar3 + 0xa8));
  if ((*(long *)(lVar3 + 0xb0) == 0) || (0.0 < pdVar4[3] || pdVar4[3] == 0.0)) {
    if ((*(char *)(*(long *)plVar2[1] + (long)(iVar1 / 3)) == '\0') &&
       (*(char *)(*(long *)plVar2[1] +
                 (long)(*(int *)(*(long *)(lVar3 + 0x60) + (long)iVar1 * 0xc + 8) / 3)) == '\0')) {
      dVar5 = (double)plVar2[2];
      if (dVar5 == 0.0) {
        dVar6 = 0.0;
      }
      else {
        dVar6 = pdVar4[3];
      }
    }
    else {
      dVar5 = 0.0;
      dVar6 = 0.0;
    }
    pdVar4[3] = dVar6;
    pdVar4[2] = pdVar4[2] * dVar5;
    *pdVar4 = dVar5 * *pdVar4;
    pdVar4[1] = dVar5 * pdVar4[1];
  }
  return;
}



/* std::_Function_handler<void (int),
   manifold::Manifold::Impl::CreateTangents(std::vector<manifold::Smoothness,
   std::allocator<manifold::Smoothness> >)::{lambda(int)#2}::operator()(int)
   const::{lambda(int)#1}>::_M_invoke(std::_Any_data const&, int&&) */

void std::
     _Function_handler<void(int),manifold::Manifold::Impl::CreateTangents(std::vector<manifold::Smoothness,std::allocator<manifold::Smoothness>>)::{lambda(int)#2}::operator()(int)const::{lambda(int)#1}>
     ::_M_invoke(_Any_data *param_1,int *param_2)

{
  double dVar1;
  int iVar2;
  long *plVar3;
  double *pdVar4;
  double dVar5;
  
  plVar3 = *(long **)param_1;
  iVar2 = *param_2;
  if (iVar2 == *(int *)((long)plVar3 + 0x1c)) {
    *(double *)plVar3[1] =
         (*(double *)(*(long *)plVar3[2] + 0x38) + *(double *)(*(long *)plVar3[2] + 8)) * _LC7;
    return;
  }
  if ((iVar2 != (int)plVar3[3]) &&
     ((pdVar4 = (double *)((long)iVar2 * 0x20 + *(long *)(*plVar3 + 0xa8)),
      *(long *)(*plVar3 + 0xb0) == 0 || (0.0 < pdVar4[3] || pdVar4[3] == 0.0)))) {
    dVar5 = 0.0;
    dVar1 = *(double *)plVar3[1];
    if (dVar1 != 0.0) {
      dVar5 = pdVar4[3];
    }
    pdVar4[3] = dVar5;
    pdVar4[2] = dVar1 * pdVar4[2];
    *pdVar4 = dVar1 * *pdVar4;
    pdVar4[1] = dVar1 * pdVar4[1];
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (anonymous namespace)::OrthogonalTo(linalg::vec<double, 3>, linalg::vec<double, 3>,
   linalg::vec<double, 3>) */

void (anonymous_namespace)::OrthogonalTo(undefined1 (*param_1) [16])

{
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
  
  dVar1 = in_stack_00000038 * in_stack_00000008 + 0.0 + in_stack_00000010 * in_stack_00000040 +
          in_stack_00000018 * in_stack_00000048;
  dVar2 = in_stack_00000008 - in_stack_00000038 * dVar1;
  dVar4 = in_stack_00000010 - dVar1 * in_stack_00000040;
  dVar3 = in_stack_00000018 - dVar1 * in_stack_00000048;
  dVar1 = dVar2 * dVar2 + 0.0 + dVar4 * dVar4 + dVar3 * dVar3;
  if (dVar1 < (in_stack_00000008 * in_stack_00000008 + 0.0 + in_stack_00000010 * in_stack_00000010 +
              in_stack_00000018 * in_stack_00000018) * __LC10) {
    dVar1 = in_stack_00000038 * in_stack_00000020 + 0.0 + in_stack_00000028 * in_stack_00000040 +
            in_stack_00000048 * in_stack_00000030;
    dVar2 = in_stack_00000020 - in_stack_00000038 * dVar1;
    dVar4 = in_stack_00000028 - in_stack_00000040 * dVar1;
    dVar3 = in_stack_00000030 - in_stack_00000048 * dVar1;
    dVar1 = dVar2 * dVar2 + 0.0 + dVar4 * dVar4 + dVar3 * dVar3;
  }
  dVar1 = SQRT(dVar1);
  if ((double)((ulong)(dVar2 / dVar1) & _LC11) <= _LC12) {
    *(double *)*param_1 = dVar2 / dVar1;
    *(double *)(*param_1 + 8) = dVar4 / dVar1;
    *(double *)param_1[1] = dVar3 / dVar1;
    return;
  }
  *(undefined8 *)param_1[1] = 0;
  *param_1 = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (anonymous namespace)::CircularTangent(linalg::vec<double, 3> const&, linalg::vec<double, 3>
   const&) */

void __thiscall
(anonymous_namespace)::CircularTangent(_anonymous_namespace_ *this,vec *param_1,vec *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  dVar4 = _LC15;
  dVar12 = *(double *)param_1;
  dVar14 = *(double *)(param_1 + 8);
  dVar13 = *(double *)(param_1 + 0x10);
  dVar5 = SQRT(dVar12 * dVar12 + 0.0 + dVar14 * dVar14 + dVar13 * dVar13);
  dVar12 = dVar12 / dVar5;
  if (_LC12 < (double)((ulong)dVar12 & _LC11)) {
    dVar10 = 0.0;
    dVar11 = 0.0;
    dVar13 = 0.0;
    dVar12 = 0.0;
    dVar14 = dVar13;
    dVar5 = dVar13;
  }
  else {
    dVar13 = dVar13 / dVar5;
    dVar10 = dVar12 * _LC7;
    dVar11 = (dVar14 / dVar5) * _LC7;
    dVar14 = dVar14 / dVar5;
    dVar5 = _LC7 * dVar13;
  }
  dVar1 = *(double *)param_2;
  dVar2 = *(double *)(param_2 + 8);
  dVar3 = *(double *)(param_2 + 0x10);
  dVar6 = SQRT(dVar1 * dVar1 + 0.0 + dVar2 * dVar2 + dVar3 * dVar3);
  dVar7 = _LC14;
  if (((double)(_LC11 & (ulong)(dVar1 / dVar6)) <= _LC12) &&
     (dVar12 = (dVar2 / dVar6) * dVar14 + (dVar1 / dVar6) * dVar12 + 0.0 + (dVar3 / dVar6) * dVar13,
     _LC7 < dVar12)) {
    dVar7 = dVar12 * _LC15 + __LC16;
  }
  *(double *)(this + 0x18) = dVar7;
  auVar8._0_8_ = dVar6 * dVar10 * dVar4 + 0.0;
  auVar8._8_8_ = dVar6 * dVar11 * dVar4 + 0.0;
  auVar9._8_8_ = dVar7;
  auVar9._0_8_ = dVar7;
  auVar8 = divpd(auVar8,auVar9);
  *(undefined1 (*) [16])this = auVar8;
  *(double *)(this + 0x10) = (dVar6 * dVar5 * dVar4 + 0.0) / dVar7;
  return;
}



/* manifold::Manifold::Impl::GetNormal(int, int) const */

undefined8 manifold::Manifold::Impl::GetNormal(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int in_EDX;
  undefined8 *puVar4;
  int iVar5;
  undefined4 in_register_00000034;
  long lVar6;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined4 local_18;
  int local_14;
  long local_10;
  
  local_20 = _LC9;
  lVar6 = CONCAT44(in_register_00000034,param_2);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar3 = (int *)(*(long *)(lVar6 + 0x128) + (long)(in_EDX / 3) * 0xc);
  if (in_EDX % 3 == 0) {
    iVar5 = *piVar3;
  }
  else if (in_EDX % 3 == 1) {
    iVar5 = piVar3[1];
  }
  else {
    iVar5 = piVar3[2];
  }
  iVar1 = *(int *)(lVar6 + 0xc4);
  lVar6 = *(long *)(lVar6 + 200);
  *(undefined1 (*) [16])CONCAT44(in_register_0000003c,param_1) = (undefined1  [16])0x0;
  *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x10) = 0;
  local_18 = 2;
  piVar3 = (int *)&local_20;
  do {
    iVar2 = *piVar3;
    puVar4 = (undefined8 *)CONCAT44(in_register_0000003c,param_1);
    if ((iVar2 != 0) &&
       (puVar4 = (undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x10), iVar2 == 1)) {
      puVar4 = (undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 8);
    }
    piVar3 = piVar3 + 1;
    *puVar4 = *(undefined8 *)(lVar6 + (long)(iVar5 * iVar1 + in_ECX + iVar2) * 8);
  } while (&local_14 != piVar3);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Function_handler<manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)
   const::FlatNormal (int),
   manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)
   const::{lambda(int)#1}>::_M_invoke(std::_Any_data const&, int&&) */

_Function_handler<manifold::Manifold::Impl::CreateTangents(int)::_lambda(int)_1_::operator()(int)const::FlatNormal(int),manifold::Manifold::Impl::CreateTangents(int)::_lambda(int)_1_::operator()(int)const::_lambda(int)_1_>
* __thiscall
std::
_Function_handler<manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)const::FlatNormal(int),manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)const::{lambda(int)#1}>
::_M_invoke(_Function_handler<manifold::Manifold::Impl::CreateTangents(int)::_lambda(int)_1_::operator()(int)const::FlatNormal(int),manifold::Manifold::Impl::CreateTangents(int)::_lambda(int)_1_::operator()(int)const::_lambda(int)_1_>
            *this,_Any_data *param_1,int *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  long lVar6;
  long in_FS_OFFSET;
  double local_38;
  double dStack_30;
  double local_28;
  long local_20;
  
  iVar5 = *param_2;
  lVar6 = *(long *)(param_1 + 8);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  manifold::Manifold::Impl::GetNormal((int)&local_38,(int)lVar6);
  *(double *)(this + 8) = local_38;
  *(double *)(this + 0x10) = dStack_30;
  pdVar1 = (double *)(*(long *)(lVar6 + 0x90) + (long)(iVar5 / 3) * 0x18);
  dVar2 = *pdVar1;
  dVar3 = pdVar1[1];
  dVar4 = pdVar1[2];
  *(double *)(this + 0x18) = local_28;
  *this = (_Function_handler<manifold::Manifold::Impl::CreateTangents(int)::_lambda(int)_1_::operator()(int)const::FlatNormal(int),manifold::Manifold::Impl::CreateTangents(int)::_lambda(int)_1_::operator()(int)const::_lambda(int)_1_>
           )((dVar2 - local_38) * (dVar2 - local_38) + 0.0 +
             (dVar3 - dStack_30) * (dVar3 - dStack_30) + (dVar4 - local_28) * (dVar4 - local_28) <
            _LC18);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Impl::TangentFromNormal(linalg::vec<double, 3> const&, int) const */

vec * manifold::Manifold::Impl::TangentFromNormal(vec *param_1,int param_2)

{
  long *plVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  long lVar6;
  int in_ECX;
  double *in_RDX;
  undefined4 in_register_00000034;
  long lVar7;
  long in_FS_OFFSET;
  double dVar8;
  double dVar9;
  double local_48;
  double dStack_40;
  double local_38;
  double local_28;
  double dStack_20;
  double local_18;
  long local_10;
  
  lVar7 = CONCAT44(in_register_00000034,param_2);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  plVar1 = (long *)(*(long *)(lVar7 + 0x60) + (long)in_ECX * 0xc);
  lVar6 = *plVar1;
  pdVar2 = (double *)(*(long *)(lVar7 + 0x48) + (lVar6 >> 0x20) * 0x18);
  pdVar3 = (double *)(*(long *)(lVar7 + 0x48) + (long)(int)lVar6 * 0x18);
  pdVar4 = (double *)(*(long *)(lVar7 + 0x90) + (long)(in_ECX / 3) * 0x18);
  local_48 = *pdVar2 - *pdVar3;
  dStack_40 = pdVar2[1] - pdVar3[1];
  local_38 = pdVar2[2] - pdVar3[2];
  pdVar5 = (double *)(*(long *)(lVar7 + 0x90) + (long)((int)plVar1[1] / 3) * 0x18);
  dVar9 = (pdVar2[2] - pdVar3[2]) * (pdVar4[1] + pdVar5[1]) - (pdVar4[2] + pdVar5[2]) * dStack_40;
  dVar8 = (pdVar5[2] + pdVar4[2]) * local_48 - (*pdVar4 + *pdVar5) * local_38;
  local_28 = in_RDX[2] * dVar8 -
             in_RDX[1] *
             ((pdVar2[1] - pdVar3[1]) * (*pdVar4 + *pdVar5) - (pdVar4[1] + pdVar5[1]) * local_48);
  dStack_20 = *in_RDX * ((*pdVar5 + *pdVar4) * dStack_40 -
                        (pdVar4[1] + pdVar5[1]) * (*pdVar2 - *pdVar3)) - in_RDX[2] * dVar9;
  local_18 = in_RDX[1] * dVar9 - dVar8 * *in_RDX;
  (anonymous_namespace)::CircularTangent
            ((_anonymous_namespace_ *)param_1,(vec *)&local_28,(vec *)&local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Impl::IsInsideQuad(int) const */

bool __thiscall manifold::Manifold::Impl::IsInsideQuad(Impl *this,int param_1)

{
  double *pdVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  
  if (*(long *)(this + 0xb0) != 0) {
    pdVar1 = (double *)((long)param_1 * 0x20 + *(long *)(this + 0xa8) + 0x18);
    return *pdVar1 <= 0.0 && *pdVar1 != 0.0;
  }
  lVar3 = *(long *)(this + 0x110);
  lVar4 = *(long *)(this + 0x60);
  puVar6 = (undefined8 *)((long)(param_1 / 3) * 0x10 + lVar3);
  iVar2 = *(int *)(lVar4 + 8 + (long)param_1 * 0xc);
  puVar7 = (undefined8 *)((long)(iVar2 / 3) * 0x10 + lVar3);
  bVar15 = false;
  iVar11 = (int)*puVar6;
  iVar13 = (int)*puVar7;
  if (iVar11 == iVar13) {
    iVar12 = (int)((ulong)puVar6[1] >> 0x20);
    iVar14 = (int)((ulong)puVar7[1] >> 0x20);
    if (iVar12 == iVar14) {
      iVar5 = param_1 + 1;
      if ((param_1 + 1) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
        iVar5 = param_1 + -2;
      }
      lVar9 = (long)iVar5 * 0xc;
      piVar8 = (int *)((long)(*(int *)(lVar4 + 8 + lVar9) / 3) * 0x10 + lVar3);
      if ((iVar11 != *piVar8) || (iVar12 != piVar8[3])) {
        lVar10 = lVar9 + -0x18;
        if (0x55555554 < (iVar5 + 1) * -0x55555555 + 0x2aaaaaaaU) {
          lVar10 = lVar9 + 0xc;
        }
        piVar8 = (int *)((long)(*(int *)(lVar4 + 8 + lVar10) / 3) * 0x10 + lVar3);
        if ((iVar11 != *piVar8) || (bVar15 = false, iVar12 != piVar8[3])) {
          iVar11 = iVar2 + 1;
          if ((iVar2 + 1) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
            iVar11 = iVar2 + -2;
          }
          lVar9 = (long)iVar11 * 0xc;
          piVar8 = (int *)((long)(*(int *)(lVar4 + 8 + lVar9) / 3) * 0x10 + lVar3);
          if ((iVar13 != *piVar8) || (bVar15 = false, iVar14 != piVar8[3])) {
            lVar10 = lVar9 + -0x18;
            if (0x55555554 < (iVar11 + 1) * -0x55555555 + 0x2aaaaaaaU) {
              lVar10 = lVar9 + 0xc;
            }
            piVar8 = (int *)(lVar3 + (long)(*(int *)(lVar4 + 8 + lVar10) / 3) * 0x10);
            bVar15 = true;
            if (iVar13 == *piVar8) {
              bVar15 = piVar8[3] != iVar14;
            }
          }
        }
      }
      return bVar15;
    }
  }
  return false;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (int,
   manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int)
   const::FlatNormal const&,
   manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int)
   const::FlatNormal&),
   manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int)
   const::{lambda(int,
   manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int)
   const::FlatNormal const&,
   manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int)
   const::FlatNormal const&)#1}>::_M_invoke(std::_Any_data const&, int&&,
   manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int)
   const::FlatNormal const&,
   manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int)
   const::FlatNormal&) */

void std::
     _Function_handler<void(int,manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int)const::FlatNormal_const&,manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int)const::FlatNormal&),manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int)const::{lambda(int,manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int)const::FlatNormal_const&,manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int)const::FlatNormal_const&)#1}>
     ::operator()(_Any_data *param_1,int *param_2,FlatNormal *param_3,FlatNormal *param_4)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  Impl *this;
  long lVar9;
  int *piVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  char cVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined1 (*pauVar20) [16];
  long in_FS_OFFSET;
  double dVar21;
  double dVar22;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  puVar19 = *(undefined8 **)param_1;
  iVar8 = *param_2;
  lVar18 = (long)iVar8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this = (Impl *)puVar19[3];
  cVar17 = manifold::Manifold::Impl::IsInsideQuad(this,iVar8);
  dVar15 = _LC18;
  lVar9 = *(long *)puVar19[1];
  if (cVar17 == '\0') {
    dVar3 = *(double *)(param_4 + 8);
    dVar4 = *(double *)(param_3 + 8);
    dVar11 = *(double *)(param_4 + 0x10);
    dVar12 = *(double *)(param_4 + 0x18);
    dVar5 = *(double *)(param_4 + 0x10);
    dVar6 = *(double *)(param_3 + 0x10);
    dVar13 = *(double *)(param_3 + 0x10);
    dVar14 = *(double *)(param_3 + 0x18);
    dVar7 = *(double *)(param_3 + 0x18);
    dVar22 = dVar5 - dVar6;
    dVar21 = dVar12 - dVar14;
    dVar21 = (dVar3 - dVar4) * (dVar3 - dVar4) + 0.0 + dVar22 * dVar22 + dVar21 * dVar21;
    if ((_LC18 < dVar21) || (*param_3 != *param_4)) {
      *(undefined1 *)(*(long *)puVar19[2] + lVar18) = 1;
      piVar10 = (int *)*puVar19;
      if (*piVar10 == -1) {
        *piVar10 = iVar8;
      }
      else if (piVar10[1] == -1) {
        piVar10[1] = iVar8;
      }
      else {
        *piVar10 = -2;
      }
      if (dVar15 < dVar21) {
        piVar10 = (int *)(*(long *)(this + 0x60) + lVar18 * 0xc);
        pdVar1 = (double *)(*(long *)(this + 0x48) + (long)*piVar10 * 0x18);
        pdVar2 = (double *)(*(long *)(this + 0x48) + (long)piVar10[1] * 0x18);
        local_78 = dVar4 * dVar5 - dVar3 * dVar6;
        local_98 = pdVar2[2] - pdVar1[2];
        local_a8 = *pdVar2 - *pdVar1;
        dStack_a0 = pdVar2[1] - pdVar1[1];
        local_88 = dVar12 * dVar13 - dVar7 * dVar11;
        dStack_80 = dVar3 * dVar14 - dVar4 * dVar12;
        if (local_a8 * local_88 + 0.0 + dStack_a0 * dStack_80 + local_98 * local_78 < 0.0) {
          local_78 = (double)((ulong)local_78 ^ _LC5);
          local_88 = (double)((ulong)local_88 ^ _LC5);
          dStack_80 = (double)((ulong)dStack_80 ^ _LC5);
        }
        puVar19 = (undefined8 *)(lVar18 * 0x20 + lVar9);
        (anonymous_namespace)::CircularTangent
                  ((_anonymous_namespace_ *)&local_68,(vec *)&local_88,(vec *)&local_a8);
        *puVar19 = local_68;
        puVar19[1] = uStack_60;
        puVar19[2] = local_58;
        puVar19[3] = uStack_50;
        goto LAB_001022aa;
      }
    }
    manifold::Manifold::Impl::TangentFromNormal((vec *)&local_88,(int)this);
    pdVar1 = (double *)(lVar9 + lVar18 * 0x20);
    *pdVar1 = local_88;
    pdVar1[1] = dStack_80;
    pdVar1[2] = local_78;
    pdVar1[3] = dStack_70;
  }
  else {
    pauVar20 = (undefined1 (*) [16])(lVar18 * 0x20 + lVar9);
    *pauVar20 = (undefined1  [16])0x0;
    uVar16 = _LC29;
    *(undefined8 *)pauVar20[1] = __LC19;
    *(undefined8 *)(pauVar20[1] + 8) = uVar16;
  }
LAB_001022aa:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Function_handler<manifold::Manifold::Impl::SetNormals(int, double)::FaceEdge (int),
   manifold::Manifold::Impl::SetNormals(int, double)::{lambda(int)#3}>::_M_invoke(std::_Any_data
   const&, int&&) */

_Function_handler<manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge(int),manifold::Manifold::Impl::SetNormals(int,double)::_lambda(int)_3_>
* __thiscall
std::
_Function_handler<manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge(int),manifold::Manifold::Impl::SetNormals(int,double)::{lambda(int)#3}>
::_M_invoke(_Function_handler<manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge(int),manifold::Manifold::Impl::SetNormals(int,double)::_lambda(int)_3_>
            *this,_Any_data *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined8 *puVar4;
  Impl *this_00;
  double dVar5;
  undefined8 uVar6;
  char cVar7;
  long lVar8;
  double *pdVar9;
  long in_FS_OFFSET;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double local_58;
  double local_50;
  double local_48;
  long local_30;
  
  puVar4 = *(undefined8 **)param_1;
  iVar3 = *param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (Impl *)*puVar4;
  cVar7 = manifold::Manifold::Impl::IsInsideQuad(this_00,iVar3);
  uVar6 = _LC21;
  if (cVar7 == '\0') {
    dVar10 = (double)puVar4[1];
    dVar1 = (double)puVar4[2];
    dVar2 = (double)puVar4[3];
    lVar8 = (long)*(int *)(*(long *)(this_00 + 0x60) + (long)iVar3 * 0xc + 4);
    pdVar9 = (double *)(*(long *)(this_00 + 0x48) + lVar8 * 0x18);
    dVar11 = *pdVar9;
    dVar13 = pdVar9[1];
    dVar12 = pdVar9[2];
    if (*(int *)(*(long *)puVar4[4] + lVar8 * 4) < 2) {
      manifold::Manifold::Impl::TangentFromNormal((vec *)&local_58,(int)this_00);
      dVar11 = dVar11 + local_58;
      dVar13 = dVar13 + local_50;
      dVar12 = dVar12 + local_48;
    }
    dVar5 = _LC12;
    dVar11 = dVar11 - dVar10;
    dVar12 = dVar12 - dVar2;
    *(int *)this = iVar3 / 3;
    dVar13 = dVar13 - dVar1;
    dVar10 = SQRT(dVar11 * dVar11 + 0.0 + dVar13 * dVar13 + dVar12 * dVar12);
    if (dVar5 < (double)((ulong)(dVar11 / dVar10) & _LC11)) {
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
    }
    else {
      *(double *)(this + 8) = dVar11 / dVar10;
      *(double *)(this + 0x10) = dVar13 / dVar10;
      *(double *)(this + 0x18) = dVar12 / dVar10;
    }
  }
  else {
    *(int *)this = iVar3 / 3;
    *(undefined8 *)(this + 0x18) = uVar6;
    *(undefined8 *)(this + 8) = uVar6;
    *(undefined8 *)(this + 0x10) = uVar6;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Impl::IsMarkedInsideQuad(int) const */

bool __thiscall manifold::Manifold::Impl::IsMarkedInsideQuad(Impl *this,int param_1)

{
  double *pdVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(long *)(this + 0xb0) != 0) {
    pdVar1 = (double *)((long)param_1 * 0x20 + *(long *)(this + 0xa8) + 0x18);
    bVar2 = *pdVar1 <= 0.0 && *pdVar1 != 0.0;
  }
  return bVar2;
}



/* manifold::Manifold::Impl::FlatFaces() const */

undefined8 * manifold::Manifold::Impl::FlatFaces(void)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  void *pvVar7;
  int *piVar8;
  int iVar9;
  long in_RSI;
  size_t sVar10;
  undefined8 *in_RDI;
  int *piVar11;
  int *piVar12;
  int iVar13;
  size_t __nmemb;
  long in_FS_OFFSET;
  long lVar14;
  undefined8 local_60;
  int local_58 [2];
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(ulong *)(in_RSI + 0x68);
  *in_RDI = 0;
  *(undefined1 (*) [16])(in_RDI + 1) = (undefined1  [16])0x0;
  __nmemb = (size_t)(int)(uVar3 / 3);
  if (__nmemb == 0) {
    in_RDI[1] = 0;
  }
  else {
    pvVar7 = calloc(__nmemb,1);
    in_RDI[2] = __nmemb;
    sVar10 = 0;
    *in_RDI = pvVar7;
    local_50 = _LC9;
    lVar14 = _LC22;
    lVar4 = *(long *)(in_RSI + 0x110);
    lVar5 = *(long *)(in_RSI + 0x60);
    in_RDI[1] = __nmemb;
    do {
      iVar9 = (int)sVar10;
      local_58[0] = -1;
      iVar13 = 0;
      local_48 = 2;
      piVar11 = (int *)((long)iVar9 * 0x10 + lVar4);
      iVar1 = *piVar11;
      piVar8 = (int *)&local_50;
      do {
        iVar2 = *piVar8;
        iVar6 = *(int *)(lVar5 + 8 + (long)(iVar2 + iVar9 * 3) * 0xc) / 3;
        piVar12 = (int *)((long)iVar6 * 0x10 + lVar4);
        if ((*piVar12 == iVar1) && (piVar12[3] == piVar11[3])) {
          iVar13 = iVar13 + 1;
          piVar12 = (int *)&local_60;
          if ((iVar2 != 0) && (piVar12 = local_58, iVar2 == 1)) {
            piVar12 = (int *)((long)&local_60 + 4);
          }
          *piVar12 = iVar6;
        }
        piVar8 = piVar8 + 1;
      } while (piVar8 != &local_44);
      if (1 < iVar13) {
        local_48 = 2;
        *(undefined1 *)((long)pvVar7 + (long)iVar9) = 1;
        local_60._0_4_ = (int)lVar14;
        piVar8 = (int *)&local_50;
        do {
          if (*piVar8 == 0) {
            local_60._4_4_ = (int)local_60;
            if (-1 < (int)local_60) {
LAB_00102767:
              *(undefined1 *)((long)pvVar7 + (long)local_60._4_4_) = 1;
            }
          }
          else if ((*piVar8 == 1) && (local_60._4_4_ = (int)((ulong)lVar14 >> 0x20), -1 < lVar14))
          goto LAB_00102767;
          piVar8 = piVar8 + 1;
        } while (&local_44 != piVar8);
      }
      local_48 = 2;
      sVar10 = sVar10 + 1;
      local_60 = lVar14;
    } while (__nmemb != sVar10);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::Manifold::Impl::VertFlatFace(manifold::Vec<bool> const&) const */

Vec * manifold::Manifold::Impl::VertFlatFace(Vec *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  void *pvVar7;
  int *piVar8;
  long *in_RDX;
  ulong uVar9;
  long in_RSI;
  int *piVar10;
  int *piVar11;
  size_t sVar12;
  int iVar13;
  long lVar14;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  lVar2 = *(long *)(in_RSI + 0x50);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (lVar2 == 0) {
    uVar6 = *(ulong *)(in_RSI + 0x68);
    *(undefined8 *)(param_1 + 8) = 0;
    pvVar7 = (void *)0x0;
    uVar9 = uVar6 / 3;
    if (uVar6 < 3) goto LAB_00102985;
LAB_00102850:
    uVar5 = _LC9;
    lVar2 = *in_RDX;
    uVar6 = 0;
    do {
      if (*(char *)(lVar2 + uVar6) != '\0') {
        lVar3 = *(long *)(in_RSI + 0x60);
        piVar10 = (int *)&local_50;
        local_48 = 2;
        piVar11 = (int *)(uVar6 * 0x10 + *(long *)(in_RSI + 0x110));
        local_50 = uVar5;
        do {
          lVar14 = (long)*(int *)(lVar3 + ((long)*piVar10 + uVar6 * 3) * 0xc);
          piVar8 = (int *)(lVar14 * 0x10 + (long)pvVar7);
          if ((*piVar11 != *piVar8) || (piVar11[3] != piVar8[3])) {
            uVar4 = *(undefined8 *)(piVar11 + 2);
            *(undefined8 *)piVar8 = *(undefined8 *)piVar11;
            *(undefined8 *)(piVar8 + 2) = uVar4;
            piVar8 = (int *)(*(long *)param_1 + lVar14 * 4);
            iVar13 = -2;
            if (*piVar8 == -1) {
              iVar13 = (int)uVar6;
            }
            *piVar8 = iVar13;
          }
          piVar10 = piVar10 + 1;
        } while (&local_44 != piVar10);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar9);
LAB_00102978:
    if (pvVar7 == (void *)0x0) goto LAB_00102985;
  }
  else {
    sVar12 = lVar2 * 4;
    pvVar7 = malloc(sVar12);
    *(long *)(param_1 + 0x10) = lVar2;
    *(void **)param_1 = pvVar7;
    if (sVar12 != 0) {
      memset(pvVar7,0xff,sVar12);
    }
    *(long *)(param_1 + 8) = lVar2;
    sVar12 = lVar2 * 0x10;
    pvVar7 = malloc(sVar12);
    uVar4 = _UNK_0010bd78;
    uVar5 = _LC22;
    if (sVar12 == 0) {
      uVar9 = *(ulong *)(in_RSI + 0x68) / 3;
      if (2 < *(ulong *)(in_RSI + 0x68)) goto LAB_00102850;
      goto LAB_00102978;
    }
    uVar9 = 0;
    do {
      uVar6 = uVar9 + 1;
      puVar1 = (undefined8 *)((long)pvVar7 + uVar9 * 0x10);
      *puVar1 = uVar5;
      puVar1[1] = uVar4;
      uVar9 = uVar6;
    } while (uVar6 < (sVar12 - 0x10 >> 4) + 1);
    uVar9 = *(ulong *)(in_RSI + 0x68) / 3;
    if (2 < *(ulong *)(in_RSI + 0x68)) goto LAB_00102850;
  }
  free(pvVar7);
LAB_00102985:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* manifold::Manifold::Impl::VertHalfedge() const */

void manifold::Manifold::Impl::VertHalfedge(void)

{
  char *pcVar1;
  char cVar2;
  size_t __nmemb;
  void *pvVar3;
  int iVar4;
  long lVar5;
  long in_RSI;
  long *in_RDI;
  long lVar6;
  
  __nmemb = *(size_t *)(in_RSI + 0x50);
  *in_RDI = 0;
  in_RDI[2] = 0;
  if (__nmemb == 0) {
    lVar6 = *(long *)(in_RSI + 0x68);
    in_RDI[1] = 0;
    pvVar3 = (void *)0x0;
    if (lVar6 == 0) {
      return;
    }
  }
  else {
    pvVar3 = malloc(__nmemb * 4);
    *in_RDI = (long)pvVar3;
    in_RDI[1] = __nmemb;
    in_RDI[2] = __nmemb;
    pvVar3 = calloc(__nmemb,1);
    lVar6 = *(long *)(in_RSI + 0x68);
    if (lVar6 == 0) goto LAB_00102a8e;
  }
  lVar5 = 0;
  do {
    iVar4 = (int)lVar5;
    LOCK();
    pcVar1 = (char *)((long)pvVar3 + (long)*(int *)(*(long *)(in_RSI + 0x60) + (long)iVar4 * 0xc));
    cVar2 = *pcVar1;
    *pcVar1 = '\x01';
    UNLOCK();
    if (cVar2 != '\x01') {
      *(int *)(*in_RDI + (long)*(int *)(*(long *)(in_RSI + 0x60) + (long)iVar4 * 0xc) * 4) = iVar4;
    }
    lVar5 = lVar5 + 1;
  } while (lVar6 != lVar5);
  if (pvVar3 == (void *)0x0) {
    return;
  }
LAB_00102a8e:
  free(pvVar3);
  return;
}



/* manifold::Manifold::Impl::SharpenTangent(int, double) */

void __thiscall manifold::Manifold::Impl::SharpenTangent(Impl *this,int param_1,double param_2)

{
  double *pdVar1;
  double dVar2;
  
  dVar2 = 0.0;
  pdVar1 = (double *)((long)param_1 * 0x20 + *(long *)(this + 0xa8));
  if (param_2 != 0.0) {
    dVar2 = pdVar1[3];
  }
  pdVar1[3] = dVar2;
  pdVar1[2] = param_2 * pdVar1[2];
  *pdVar1 = param_2 * *pdVar1;
  pdVar1[1] = param_2 * pdVar1[1];
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::Manifold::Impl::SetNormals(int, double) */

void __thiscall manifold::Manifold::Impl::SetNormals(Impl *this,int param_1,double param_2)

{
  double *pdVar1;
  undefined4 *puVar2;
  double dVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  void *pvVar12;
  ulong uVar13;
  _Any_data *p_Var14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  double *pdVar19;
  int iVar20;
  code *pcVar21;
  _Any_data *p_Var22;
  Vec *pVVar23;
  int *piVar24;
  long lVar25;
  _Any_data *p_Var26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  ulong uVar30;
  long lVar31;
  undefined4 *puVar32;
  int *piVar33;
  Vec *pVVar34;
  int *piVar35;
  _Any_data *p_Var36;
  long lVar37;
  _Any_data *p_Var38;
  long in_FS_OFFSET;
  double dVar39;
  _Any_data *p_Var40;
  double dVar41;
  _Any_data *extraout_XMM0_Qa;
  _Any_data *p_Var42;
  _Any_data *extraout_XMM0_Qb;
  double dVar43;
  double dVar44;
  double dVar45;
  _Any_data *local_3b8;
  Vec *local_380;
  int local_26c [2];
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  int local_250;
  int local_24c;
  uint local_248;
  int local_244;
  uint local_240;
  uint local_23c;
  void *local_238 [4];
  void *local_218 [4];
  void *local_1f8;
  undefined1 local_1f0 [16];
  void *local_1d8;
  undefined1 local_1d0 [16];
  void *local_1b8;
  undefined1 local_1b0 [16];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined1 local_158 [16];
  long local_148;
  undefined1 local_138 [16];
  long local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  uint local_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  _Any_data local_cc [4];
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
  code *local_58;
  code *pcStack_50;
  long local_40;
  
  uVar5 = *(ulong *)(this + 0x68);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_26c[0] = param_1;
  if ((2 < uVar5) && (-1 < param_1)) {
    local_264 = *(int *)(this + 0xc4);
    p_Var22 = (_Any_data *)(uVar5 / 3);
    FlatFaces();
    local_380 = (Vec *)local_218;
    VertFlatFace(local_380);
    uVar13 = *(ulong *)(this + 0x50);
    local_1f8 = (void *)0x0;
    local_1f0 = (undefined1  [16])0x0;
    local_1f0._8_8_ = 0;
    if (uVar13 != 0) {
      local_1f8 = calloc(uVar13 * 4,1);
      local_1f0._8_8_ = uVar13;
    }
    uVar30 = 0;
    piVar24 = *(int **)(this + 0x60);
    local_1f0._0_8_ = uVar13;
    do {
      while( true ) {
        iVar20 = *piVar24;
        iVar4 = piVar24[1];
        if (iVar20 < iVar4) break;
LAB_00102c55:
        uVar30 = uVar30 + 1;
        piVar24 = piVar24 + 3;
        if (uVar5 == uVar30) goto LAB_00102d80;
      }
      lVar25 = (long)(piVar24[2] / 3);
      pdVar19 = (double *)(*(long *)(this + 0x90) + lVar25 * 0x18);
      lVar11 = (long)(int)(uVar30 / 3);
      pdVar1 = (double *)(*(long *)(this + 0x90) + lVar11 * 0x18);
      dVar39 = acos(*pdVar19 * *pdVar1 + 0.0 + pdVar1[1] * pdVar19[1] + pdVar1[2] * pdVar19[2]);
      lVar31 = (long)iVar20 * 4;
      if (param_2 < (dVar39 * __LC25) / _LC26) {
        piVar33 = (int *)((long)local_1f8 + lVar31);
        *piVar33 = *piVar33 + 1;
        piVar33 = (int *)((long)local_1f8 + (long)piVar24[1] * 4);
        *piVar33 = *piVar33 + 1;
        goto LAB_00102c55;
      }
      if (*(char *)((long)local_238[0] + lVar11) == *(char *)((long)local_238[0] + lVar25)) {
        if (*(char *)((long)local_238[0] + lVar11) != '\0') {
          piVar33 = (int *)(lVar11 * 0x10 + *(long *)(this + 0x110));
          piVar35 = (int *)(*(long *)(this + 0x110) + lVar25 * 0x10);
          if ((*piVar35 != *piVar33) || (piVar35[3] != piVar33[3])) goto LAB_00102d3f;
        }
        goto LAB_00102c55;
      }
LAB_00102d3f:
      if (*(int *)((long)local_218[0] + (long)iVar20 * 4) == -2) {
        piVar33 = (int *)((long)local_1f8 + lVar31);
        *piVar33 = *piVar33 + 1;
        lVar31 = (long)piVar24[1];
        if (*(int *)((long)local_218[0] + lVar31 * 4) == -2) goto LAB_00102d67;
        goto LAB_00102c55;
      }
      lVar31 = (long)iVar4;
      if (*(int *)((long)local_218[0] + lVar31 * 4) != -2) goto LAB_00102c55;
LAB_00102d67:
      piVar33 = (int *)((long)local_1f8 + lVar31 * 4);
      *piVar33 = *piVar33 + 1;
      uVar30 = uVar30 + 1;
      piVar24 = piVar24 + 3;
    } while (uVar5 != uVar30);
LAB_00102d80:
    iVar20 = local_26c[0] + 3;
    if (local_26c[0] + 3 < local_264) {
      iVar20 = local_264;
    }
    if (*(int *)(this + 0xc4) != 0) {
      uVar13 = *(ulong *)(this + 0xd0) / (ulong)(long)*(int *)(this + 0xc4);
    }
    lVar11 = (long)iVar20 * uVar13;
    pvVar12 = (void *)0x0;
    local_1d8 = (void *)0x0;
    local_1d0 = (undefined1  [16])0x0;
    lVar31 = 0;
    local_260 = iVar20;
    if (lVar11 != 0) {
      pvVar12 = calloc(lVar11 * 8,1);
      lVar31 = lVar11;
    }
    local_1d0 = *(undefined1 (*) [16])(this + 0xd0);
    local_1d8 = *(void **)(this + 200);
    *(long *)(this + 0xd0) = lVar11;
    p_Var36 = (_Any_data *)(long)(int)p_Var22;
    *(int *)(this + 0xc4) = iVar20;
    *(void **)(this + 200) = pvVar12;
    *(long *)(this + 0xd8) = lVar31;
    p_Var40 = p_Var36;
    p_Var42 = p_Var36;
    if (*(long *)(this + 0x130) == 0) {
      p_Var26 = (_Any_data *)0x0;
      if (*(_Any_data **)(this + 0x138) < p_Var36) {
        p_Var38 = (_Any_data *)((long)p_Var36 * 2);
        pvVar12 = malloc((long)p_Var36 * 0xc);
        if (*(void **)(this + 0x128) == (void *)0x0) goto LAB_00103c55;
        free(*(void **)(this + 0x128));
        p_Var14 = *(_Any_data **)(this + 0x130);
        *(void **)(this + 0x128) = pvVar12;
        *(_Any_data **)(this + 0x138) = p_Var36;
        if (p_Var36 <= p_Var14) goto LAB_00102fdf;
        goto LAB_00102fa4;
      }
      if (p_Var36 != (_Any_data *)0x0) {
        p_Var38 = (_Any_data *)((long)p_Var36 * 2);
        goto LAB_00102fa2;
      }
      *(undefined8 *)(this + 0x130) = 0;
    }
    else {
      local_1b8 = (void *)0x0;
      local_1b0 = (undefined1  [16])0x0;
      if (p_Var36 != (_Any_data *)0x0) {
        p_Var38 = (_Any_data *)((long)p_Var36 * 2);
LAB_001030a6:
        puVar15 = (undefined8 *)malloc((long)(p_Var38 + (long)p_Var36) * 4);
        uVar6 = _LC22;
        puVar16 = puVar15;
        do {
          *puVar16 = uVar6;
          puVar17 = (undefined8 *)((long)puVar16 + 0xc);
          *(undefined4 *)(puVar16 + 1) = 0xffffffff;
          puVar16 = puVar17;
        } while ((undefined8 *)((long)puVar15 + (long)(p_Var38 + (long)p_Var36) * 4) != puVar17);
        local_1b0 = *(undefined1 (*) [16])(this + 0x130);
        local_1b8 = *(void **)(this + 0x128);
        *(_Any_data **)(this + 0x130) = p_Var40;
        *(_Any_data **)(this + 0x138) = p_Var42;
        *(undefined8 **)(this + 0x128) = puVar15;
        puVar7 = PTR__M_manager_0010bda0;
        uVar6 = _LC9;
        pvVar12 = local_1b8;
        if (0 < (int)p_Var22) {
          uVar5 = (long)p_Var22 * 3 - 3;
          p_Var38 = (_Any_data *)(uVar5 & 0xffffffff);
          pVVar34 = (Vec *)0x0;
          iVar20 = 0;
          p_Var36 = (_Any_data *)&local_d8;
LAB_001032c8:
          local_d8 = uVar6;
          local_d0 = 2;
          local_3b8 = (_Any_data *)&local_d8;
          do {
            iVar4 = *(int *)local_3b8;
            pVVar23 = (Vec *)((long)puVar15 + (long)pVVar34);
            if (iVar4 == 0) {
              iVar29 = *(int *)pVVar23;
            }
            else if (iVar4 == 1) {
              iVar29 = *(int *)(pVVar23 + 4);
            }
            else {
              iVar29 = *(int *)(pVVar23 + 8);
            }
            if (iVar29 < 0) {
              uVar27 = iVar4 + iVar20;
              p_Var22 = (_Any_data *)(ulong)uVar27;
              lVar31 = *(long *)(this + 0x60);
              lVar11 = (long)*(int *)(lVar31 + (long)(int)uVar27 * 0xc);
              if (*(int *)((long)local_1f8 + lVar11 * 4) < 2) {
                iVar4 = *(int *)((long)local_218[0] + lVar11 * 4);
                if (iVar4 < 0) {
                  puVar15 = (undefined8 *)(*(long *)(this + 0x78) + lVar11 * 0x18);
                }
                else {
                  puVar15 = (undefined8 *)(*(long *)(this + 0x90) + (long)iVar4 * 0x18);
                }
                local_198 = *puVar15;
                uStack_190 = puVar15[1];
                local_25c = -1;
                local_188 = puVar15[2];
                local_b8 = (code *)0x0;
                pcStack_b0 = (code *)0x0;
                local_c8 = (undefined1  [16])0x0;
                plVar18 = (long *)operator_new(0x40);
                plVar18[2] = (long)&local_25c;
                *plVar18 = (long)&local_1b8;
                plVar18[5] = (long)&local_260;
                plVar18[6] = (long)local_26c;
                plVar18[1] = (long)this;
                plVar18[3] = (long)&local_1d8;
                plVar18[4] = (long)&local_264;
                plVar18[7] = (long)&local_198;
                local_c8._0_8_ = plVar18;
                local_b8 = (code *)puVar7;
                pcStack_b0 = std::
                             _Function_handler<void(int),manifold::Manifold::Impl::SetNormals(int,double)::{lambda(int)#2}>
                             ::_M_invoke;
                pcVar21 = std::
                          _Function_handler<void(int),manifold::Manifold::Impl::SetNormals(int,double)::{lambda(int)#2}>
                          ::_M_manager;
                p_Var26 = p_Var22;
                do {
                  iVar4 = *(int *)(*(long *)(this + 0x60) + (long)(int)p_Var26 * 0xc + 8);
                  uVar28 = iVar4 + 1;
                  if (uVar28 * -0x55555555 + 0x2aaaaaaa < 0x55555555) {
                    uVar28 = iVar4 - 2;
                  }
                  p_Var26 = (_Any_data *)(ulong)uVar28;
                  local_248 = uVar28;
                  if (pcVar21 == (code *)0x0) goto LAB_00103c50;
                  p_Var36 = (_Any_data *)local_c8;
                  (*pcStack_b0)(p_Var36,&local_248);
                  pcVar21 = local_b8;
                } while (uVar27 != uVar28);
                if (local_b8 != (code *)0x0) {
                  (*local_b8)(p_Var36,p_Var36,3);
                }
              }
              else {
                puVar15 = (undefined8 *)(*(long *)(this + 0x48) + lVar11 * 0x18);
                local_178 = *puVar15;
                uStack_170 = puVar15[1];
                local_168 = puVar15[2];
                local_148 = 0;
                lVar11 = *(long *)(this + 0x90);
                local_128 = 0;
                lVar25 = (long)((int)uVar27 / 3);
                pdVar19 = (double *)(lVar11 + lVar25 * 0x18);
                local_158 = (undefined1  [16])0x0;
                local_138 = (undefined1  [16])0x0;
                dVar39 = *pdVar19;
                dVar43 = pdVar19[1];
                dVar45 = pdVar19[2];
                while( true ) {
                  iVar4 = *(int *)(lVar31 + 8 + (long)(int)p_Var22 * 0xc);
                  uVar28 = iVar4 + 1;
                  if (uVar28 * -0x55555555 + 0x2aaaaaaa < 0x55555555) {
                    uVar28 = iVar4 - 2;
                  }
                  lVar37 = (long)((int)uVar28 / 3);
                  pdVar19 = (double *)(lVar11 + lVar37 * 0x18);
                  dVar44 = *pdVar19;
                  dVar41 = pdVar19[1];
                  dVar3 = pdVar19[2];
                  dVar39 = acos(dVar39 * dVar44 + 0.0 + dVar43 * dVar41 + dVar45 * dVar3);
                  p_Var38 = p_Var22;
                  if ((param_2 < (dVar39 * __LC25) / _LC26) ||
                     (*(char *)((long)local_238[0] + lVar37) !=
                      *(char *)((long)local_238[0] + lVar25))) goto LAB_001036d0;
                  if (*(char *)((long)local_238[0] + lVar37) != '\0') {
                    piVar24 = (int *)(lVar37 * 0x10 + *(long *)(this + 0x110));
                    piVar33 = (int *)(*(long *)(this + 0x110) + lVar25 * 0x10);
                    if ((*piVar24 != *piVar33) || (piVar24[3] != piVar33[3])) goto LAB_001036d0;
                  }
                  if (uVar27 == uVar28) break;
                  p_Var22 = (_Any_data *)(ulong)uVar28;
                  lVar25 = (long)((int)uVar28 / 3);
                  dVar39 = dVar44;
                  dVar43 = dVar41;
                  dVar45 = dVar3;
                }
                p_Var38 = (_Any_data *)(ulong)uVar27;
LAB_001036d0:
                uVar27 = (uint)p_Var38;
                local_78 = (code *)0x0;
                local_88 = (undefined1  [16])0x0;
                p_Var36 = (_Any_data *)local_a8;
                pcStack_70 = (code *)0x0;
                puVar15 = (undefined8 *)operator_new(0x28);
                uVar10 = local_168;
                uVar9 = uStack_170;
                uVar8 = local_178;
                puVar15[2] = local_138;
                puVar15[1] = local_238;
                puVar15[3] = local_158;
                *puVar15 = this;
                puVar15[4] = param_2;
                local_78 = std::
                           _Function_handler<void(int,manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge_const&,manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge&),manifold::Manifold::Impl::SetNormals(int,double)::{lambda(int,manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge_const&,manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge&)#1}>
                           ::_M_manager;
                pcStack_70 = std::
                             _Function_handler<void(int,manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge_const&,manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge&),manifold::Manifold::Impl::SetNormals(int,double)::{lambda(int,manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge_const&,manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge&)#1}>
                             ::_M_invoke;
                local_a8 = (undefined1  [16])0x0;
                local_88._0_8_ = puVar15;
                local_98 = (code *)0x0;
                pcStack_90 = (code *)0x0;
                puVar15 = (undefined8 *)operator_new(0x30);
                puVar15[3] = uVar10;
                p_Var26 = (_Any_data *)&local_f8;
                *puVar15 = this;
                local_a8._0_8_ = puVar15;
                puVar15[1] = uVar8;
                puVar15[2] = uVar9;
                puVar15[4] = &local_1f8;
                puVar15[5] = local_380;
                local_98 = std::
                           _Function_handler<manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge(int),manifold::Manifold::Impl::SetNormals(int,double)::{lambda(int)#3}>
                           ::_M_manager;
                pcStack_90 = std::
                             _Function_handler<manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge(int),manifold::Manifold::Impl::SetNormals(int,double)::{lambda(int)#3}>
                             ::_M_invoke;
                local_f8 = uVar27;
                std::
                _Function_handler<manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge(int),manifold::Manifold::Impl::SetNormals(int,double)::{lambda(int)#3}>
                ::_M_invoke((_Function_handler<manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge(int),manifold::Manifold::Impl::SetNormals(int,double)::_lambda(int)_3_>
                             *)&local_118,p_Var36,(int *)p_Var26);
                p_Var22 = p_Var38;
                pcVar21 = std::
                          _Function_handler<manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge(int),manifold::Manifold::Impl::SetNormals(int,double)::{lambda(int)#3}>
                          ::_M_manager;
                do {
                  iVar29 = (int)p_Var22;
                  iVar4 = *(int *)(*(long *)(this + 0x60) + (long)iVar29 * 0xc + 8);
                  uVar28 = iVar4 + 1;
                  if (uVar28 * -0x55555555 + 0x2aaaaaaa < 0x55555555) {
                    uVar28 = iVar4 - 2;
                  }
                  local_240 = uVar28;
                  if ((pcVar21 == (code *)0x0) ||
                     ((*pcStack_90)(p_Var26,p_Var36,&local_240), local_244 = iVar29,
                     local_78 == (code *)0x0)) goto LAB_00103c50;
                  (*pcStack_70)(local_88,&local_244,
                                (_Function_handler<manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge(int),manifold::Manifold::Impl::SetNormals(int,double)::_lambda(int)_3_>
                                 *)&local_118,p_Var26);
                  local_118 = CONCAT44(uStack_f4,local_f8);
                  uStack_110 = uStack_f0;
                  local_108 = local_e8;
                  uStack_100 = uStack_e0;
                  p_Var22 = (_Any_data *)(ulong)uVar28;
                  pcVar21 = local_98;
                } while (uVar27 != uVar28);
                if (local_98 != (code *)0x0) {
                  (*local_98)(p_Var36,p_Var36,3);
                }
                if (local_78 != (code *)0x0) {
                  (*local_78)(local_88,local_88,3);
                }
                dVar39 = _LC12;
                for (pdVar19 = (double *)local_138._0_8_; (double *)local_138._8_8_ != pdVar19;
                    pdVar19 = pdVar19 + 3) {
                  dVar43 = *pdVar19;
                  dVar45 = pdVar19[1];
                  dVar44 = pdVar19[2];
                  dVar41 = SQRT(dVar43 * dVar43 + 0.0 + dVar45 * dVar45 + dVar44 * dVar44);
                  dVar43 = dVar43 / dVar41;
                  if ((double)((ulong)dVar43 & _LC11) <= dVar39) {
                    dVar45 = dVar45 / dVar41;
                    dVar44 = dVar44 / dVar41;
                  }
                  else {
                    dVar43 = 0.0;
                    dVar45 = 0.0;
                    dVar44 = 0.0;
                  }
                  *pdVar19 = dVar43;
                  pdVar19[1] = dVar45;
                  pdVar19[2] = dVar44;
                }
                local_258 = 0;
                local_254 = -1;
                p_Var26 = (_Any_data *)&local_23c;
                local_250 = -1;
                local_24c = 0;
                local_58 = (code *)0x0;
                pcStack_50 = (code *)0x0;
                local_68 = (undefined1  [16])0x0;
                plVar18 = (long *)operator_new(0x60);
                plVar18[9] = (long)&local_260;
                *plVar18 = (long)&local_1b8;
                plVar18[1] = (long)&local_1d8;
                plVar18[2] = (long)&local_264;
                plVar18[3] = (long)local_158;
                plVar18[8] = (long)this;
                plVar18[10] = (long)local_26c;
                plVar18[0xb] = (long)local_138;
                local_68._0_8_ = plVar18;
                plVar18[4] = (long)&local_24c;
                plVar18[5] = (long)&local_258;
                plVar18[6] = (long)&local_254;
                plVar18[7] = (long)&local_250;
                local_58 = std::
                           _Function_handler<void(int),manifold::Manifold::Impl::SetNormals(int,double)::{lambda(int)#4}>
                           ::_M_manager;
                pcStack_50 = std::
                             _Function_handler<void(int),manifold::Manifold::Impl::SetNormals(int,double)::{lambda(int)#4}>
                             ::_M_invoke;
                p_Var22 = p_Var38;
                do {
                  iVar4 = *(int *)(*(long *)(this + 0x60) + (long)(int)p_Var22 * 0xc + 8);
                  uVar28 = iVar4 + 1;
                  if (uVar28 * -0x55555555 + 0x2aaaaaaa < 0x55555555) {
                    uVar28 = iVar4 - 2;
                  }
                  p_Var22 = (_Any_data *)(ulong)uVar28;
                  local_23c = uVar28;
                  if (local_58 == (code *)0x0) goto LAB_00103c50;
                  p_Var36 = (_Any_data *)local_68;
                  (*pcStack_50)(p_Var36,p_Var26);
                } while (uVar27 != uVar28);
                if (local_58 != (code *)0x0) {
                  (*local_58)(p_Var36,p_Var36,3);
                }
                if ((void *)local_138._0_8_ != (void *)0x0) {
                  operator_delete((void *)local_138._0_8_,local_128 - local_138._0_8_);
                }
                if ((void *)local_158._0_8_ != (void *)0x0) {
                  operator_delete((void *)local_158._0_8_,local_148 - local_158._0_8_);
                }
              }
            }
            local_3b8 = local_3b8 + 4;
            if (local_cc == local_3b8) goto LAB_001034f8;
            puVar15 = *(undefined8 **)(this + 0x128);
          } while( true );
        }
        goto joined_r0x00103bd3;
      }
    }
    pvVar12 = *(void **)(this + 0x128);
    *(undefined8 *)(this + 0x128) = 0;
    *(undefined1 (*) [16])(this + 0x130) = (undefined1  [16])0x0;
joined_r0x00103bd3:
    if (pvVar12 != (void *)0x0) {
      free(pvVar12);
    }
    if (local_1d8 != (void *)0x0) {
      free(local_1d8);
    }
    if (local_1f8 != (void *)0x0) {
      free(local_1f8);
    }
    if (local_218[0] != (void *)0x0) {
      free(local_218[0]);
    }
    if (local_238[0] != (void *)0x0) {
      free(local_238[0]);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00103c50:
  pvVar12 = (void *)std::__throw_bad_function_call();
  p_Var40 = extraout_XMM0_Qa;
  p_Var42 = extraout_XMM0_Qb;
  local_380 = pVVar34;
LAB_00103c55:
  *(void **)(this + 0x128) = pvVar12;
  *(_Any_data **)(this + 0x138) = p_Var36;
LAB_00102fa2:
  p_Var14 = (_Any_data *)0x0;
LAB_00102fa4:
  lVar31 = *(long *)(this + 0x128);
  for (puVar15 = (undefined8 *)(lVar31 + (long)p_Var14 * 0xc);
      (undefined8 *)(lVar31 + (long)(p_Var38 + (long)p_Var36) * 4) != puVar15;
      puVar15 = (undefined8 *)((long)puVar15 + 0xc)) {
    *puVar15 = 0;
    *(undefined4 *)(puVar15 + 1) = 0;
  }
LAB_00102fdf:
  lVar31 = *(long *)(this + 0x128);
  *(_Any_data **)(this + 0x130) = p_Var36;
  uVar6 = _LC9;
  lVar11 = *(long *)(this + 0x60);
  do {
    local_68._8_4_ = 2;
    local_68._0_8_ = uVar6;
    puVar2 = (undefined4 *)(lVar31 + (long)(int)p_Var26 * 0xc);
    piVar24 = (int *)local_68;
    do {
      iVar20 = *piVar24;
      puVar32 = puVar2;
      if ((iVar20 != 0) && (puVar32 = puVar2 + 2, iVar20 == 1)) {
        puVar32 = puVar2 + 1;
      }
      piVar24 = piVar24 + 1;
      *puVar32 = *(undefined4 *)(lVar11 + (long)((int)p_Var26 * 3 + iVar20) * 0xc);
    } while ((int *)(local_68 + 0xc) != piVar24);
    p_Var26 = p_Var26 + 1;
  } while (p_Var36 != p_Var26);
  goto LAB_001030a6;
LAB_001034f8:
  pVVar34 = pVVar34 + 0xc;
  pvVar12 = local_1b8;
  if ((int)uVar5 == iVar20) goto joined_r0x00103bd3;
  puVar15 = *(undefined8 **)(this + 0x128);
  iVar20 = iVar20 + 3;
  goto LAB_001032c8;
}



/* manifold::Manifold::Impl::LinearizeFlatTangents() */

void __thiscall manifold::Manifold::Impl::LinearizeFlatTangents(Impl *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = *(int *)(this + 0xb0);
  if ((long)iVar1 != 0) {
    lVar2 = 0;
    do {
      lVar3 = lVar2 + 1;
      LinearizeFlatTangents()::{lambda(int)#1}::operator()((_lambda_int__1_ *)this,(int)lVar2);
      lVar2 = lVar3;
    } while (iVar1 != lVar3);
  }
  return;
}



/* manifold::Manifold::Impl::DistributeTangents(manifold::Vec<bool>
   const&)::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int) const */

void __thiscall
manifold::Manifold::Impl::DistributeTangents(manifold::Vec<bool>const&)::{lambda(int)#1}::operator()
          (_lambda_int__1_ *this,int param_1)

{
  double *pdVar1;
  size_t __n;
  int *piVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  double *pdVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  size_t sVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *__src;
  long in_FS_OFFSET;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 local_218 [16];
  double local_208;
  double local_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  long local_40;
  
  lVar4 = **(long **)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = (long)param_1;
  if (*(char *)(lVar4 + lVar9) != '\0') {
    lVar14 = *(long *)this;
    lVar16 = lVar9 * 2;
    lVar5 = *(long *)(lVar14 + 0x60);
    lVar6 = *(long *)(lVar14 + 0xa8);
    lVar7 = *(long *)(lVar14 + 0xb0);
    iVar15 = *(int *)(lVar5 + 8 + lVar9 * 0xc);
    pdVar12 = (double *)(lVar9 * 0x20 + lVar6);
    if ((lVar7 != 0) && (pdVar12[3] <= 0.0 && pdVar12[3] != 0.0)) {
      param_1 = iVar15 + 1;
      if (param_1 * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
        param_1 = iVar15 + -2;
        lVar9 = (long)param_1;
        lVar16 = lVar9 * 2;
        pdVar12 = (double *)(lVar9 * 0x20 + lVar6);
      }
      else {
        lVar9 = (long)param_1;
        lVar16 = lVar9 * 2;
        pdVar12 = (double *)(lVar9 * 0x20 + lVar6);
      }
    }
    lVar8 = *(long *)(lVar14 + 0x48);
    piVar2 = (int *)(lVar5 + (lVar16 + lVar9) * 4);
    lVar16 = (long)*piVar2 * 0x18;
    pdVar1 = (double *)(*(long *)(lVar14 + 0x78) + lVar16);
    local_e8 = *pdVar1;
    dStack_e0 = pdVar1[1];
    dVar30 = *(double *)(lVar8 + lVar16);
    dVar32 = ((double *)(lVar8 + lVar16))[1];
    local_d8 = *(double *)(*(long *)(lVar14 + 0x78) + 0x10 + lVar16);
    dVar25 = *(double *)(lVar8 + 0x10 + lVar16);
    pdVar1 = (double *)(lVar8 + (long)piVar2[1] * 0x18);
    dVar40 = *pdVar1 - dVar30;
    dVar28 = pdVar1[1] - dVar32;
    dVar41 = pdVar1[2] - dVar25;
    dVar22 = SQRT(dVar40 * dVar40 + 0.0 + dVar28 * dVar28 + dVar41 * dVar41);
    dVar40 = dVar40 / dVar22;
    if ((double)((ulong)dVar40 & _LC11) <= _LC12) {
      dVar28 = dVar28 / dVar22;
      dVar41 = dVar41 / dVar22;
    }
    else {
      dVar41 = 0.0;
      dVar40 = 0.0;
      dVar28 = 0.0;
    }
    dVar22 = *pdVar12;
    auVar39 = *(undefined1 (*) [16])(pdVar12 + 1);
    dVar23 = SQRT(dVar22 * dVar22 + 0.0 + auVar39._0_8_ * auVar39._0_8_ +
                  auVar39._8_8_ * auVar39._8_8_);
    dVar22 = dVar22 / dVar23;
    if (_LC12 < (double)((ulong)dVar22 & _LC11)) {
      auVar39 = (undefined1  [16])0x0;
      dVar33 = 0.0;
      dVar22 = 0.0;
    }
    else {
      dVar33 = pdVar12[2] / dVar23;
      auVar36._8_8_ = dVar23;
      auVar36._0_8_ = dVar23;
      auVar39 = divpd(auVar39,auVar36);
    }
    uVar13 = 0;
    uVar19 = 0;
    dVar37 = auVar39._0_8_;
    lVar14 = (long)param_1;
    local_208 = 0.0;
    local_218 = (undefined1  [16])0x0;
    puVar18 = (undefined8 *)0x0;
    uVar21 = 0;
    __src = (undefined8 *)0x0;
    dVar23 = dVar33;
    dVar42 = dVar22;
    dVar38 = dVar37;
    local_c8 = dVar30;
    dStack_c0 = dVar32;
    local_b8 = dVar25;
    do {
      iVar3 = *(int *)(lVar5 + 8 + lVar14 * 0xc);
      iVar15 = iVar3 + 1;
      if (iVar15 * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
        iVar15 = iVar3 + -2;
      }
      lVar14 = (long)iVar15;
      pdVar12 = (double *)(lVar14 * 0x20 + lVar6);
      puVar10 = puVar18;
      puVar11 = __src;
      if ((lVar7 == 0) ||
         (uVar20 = uVar21, dVar27 = dVar23, dVar24 = dVar42, auVar36 = auVar39, dVar29 = dVar40,
         0.0 < pdVar12[3] || pdVar12[3] == 0.0)) {
        pdVar1 = (double *)(lVar8 + (long)*(int *)(lVar5 + 4 + lVar14 * 0xc) * 0x18);
        dVar29 = *pdVar1 - dVar30;
        dVar31 = pdVar1[1] - dVar32;
        dVar34 = pdVar1[2] - dVar25;
        dVar24 = SQRT(dVar31 * dVar31 + dVar29 * dVar29 + 0.0 + dVar34 * dVar34);
        dVar29 = dVar29 / dVar24;
        if ((double)((ulong)dVar29 & _LC11) <= _LC12) {
          dVar31 = dVar31 / dVar24;
          dVar34 = dVar34 / dVar24;
        }
        else {
          dVar34 = 0.0;
          dVar31 = 0.0;
          dVar29 = 0.0;
        }
        dVar24 = *pdVar12;
        auVar36 = *(undefined1 (*) [16])(pdVar12 + 1);
        dVar27 = SQRT(auVar36._0_8_ * auVar36._0_8_ + dVar24 * dVar24 + 0.0 +
                      auVar36._8_8_ * auVar36._8_8_);
        dVar24 = dVar24 / dVar27;
        if (_LC12 < (double)((ulong)dVar24 & _LC11)) {
          auVar36 = (undefined1  [16])0x0;
          dVar27 = 0.0;
          dVar24 = 0.0;
        }
        else {
          auVar26._8_8_ = dVar27;
          auVar26._0_8_ = dVar27;
          auVar36 = divpd(auVar36,auVar26);
          dVar27 = pdVar12[2] / dVar27;
        }
        dVar35 = auVar36._0_8_;
        local_218._8_8_ =
             (dVar42 * auVar36._8_8_ - auVar39._8_8_ * dVar24) + (double)local_218._8_8_;
        local_218._0_8_ = (dVar23 * dVar35 - auVar39._0_8_ * dVar27) + (double)local_218._0_8_;
        local_208 = (dVar38 * dVar24 - dVar42 * dVar35) + local_208;
        dVar28 = dVar40 * dVar29 + 0.0 + dVar28 * dVar31 + dVar41 * dVar34;
        dVar40 = 0.0;
        if ((dVar28 < _LC3) && (dVar40 = _LC26, _LC29 < dVar28)) {
          dVar40 = acos(dVar28);
        }
        __n = uVar21 * 8;
        dVar28 = 0.0;
        if (uVar21 != 0) {
          dVar28 = (double)puVar18[uVar21 - 1];
        }
        uVar20 = uVar21 + 1;
        if (uVar13 <= uVar21) {
          if (uVar13 == 0) {
            sVar17 = 0x400;
            uVar13 = 0x80;
          }
          else {
            if (uVar13 * 2 <= uVar13) goto LAB_0010407b;
            sVar17 = uVar13 << 4;
            uVar13 = uVar13 * 2;
          }
          puVar10 = (undefined8 *)malloc(sVar17);
          if (uVar21 == 0) {
LAB_001045f7:
            if (puVar18 == (undefined8 *)0x0) goto LAB_0010407b;
          }
          else if ((long)__n < 9) {
            if (__n != 8) goto LAB_001045f7;
            *puVar10 = *puVar18;
          }
          else {
            puVar10 = (undefined8 *)memmove(puVar10,puVar18,__n);
          }
          free(puVar18);
        }
LAB_0010407b:
        puVar10[uVar21] = dVar28 + dVar40;
        dVar28 = dVar31;
        dVar41 = dVar34;
        if (param_1 == iVar15) {
          if (uVar19 <= uVar21) {
            if (uVar19 == 0) {
              sVar17 = 0x400;
              uVar19 = 0x80;
            }
            else {
              if (uVar19 * 2 <= uVar19) goto LAB_001043b9;
              sVar17 = uVar19 << 4;
              uVar19 = uVar19 * 2;
            }
            puVar11 = (undefined8 *)malloc(sVar17);
            if (uVar21 == 0) {
LAB_00104c9c:
              if (__src == (undefined8 *)0x0) goto LAB_001043b9;
            }
            else if ((long)__n < 9) {
              if (__n != 8) goto LAB_00104c9c;
              *puVar11 = *__src;
            }
            else {
              puVar11 = (undefined8 *)memmove(puVar11,__src,__n);
            }
            free(__src);
          }
LAB_001043b9:
          puVar11[uVar21] = _LC30;
        }
        else {
          dVar23 = dVar22 * dVar24 + 0.0 + dVar37 * dVar35 + dVar33 * dVar27;
          dVar40 = 0.0;
          if ((dVar23 < _LC3) && (dVar40 = _LC26, _LC29 < dVar23)) {
            dVar40 = acos(dVar23);
          }
          if (uVar19 <= uVar21) {
            if (uVar19 == 0) {
              sVar17 = 0x400;
              uVar19 = 0x80;
            }
            else {
              if (uVar19 * 2 <= uVar19) goto LAB_001040da;
              sVar17 = uVar19 << 4;
              uVar19 = uVar19 * 2;
            }
            puVar11 = (undefined8 *)malloc(sVar17);
            if (uVar21 == 0) {
LAB_00104a2c:
              if (__src == (undefined8 *)0x0) goto LAB_001040da;
            }
            else if ((long)__n < 9) {
              if (__n != 8) goto LAB_00104a2c;
              *puVar11 = *__src;
            }
            else {
              puVar11 = (undefined8 *)memmove(puVar11,__src,__n);
            }
            free(__src);
          }
LAB_001040da:
          puVar11[uVar21] = dVar40;
          if ((dVar33 * dVar35 - dVar37 * dVar27) * local_e8 + 0.0 +
              (dVar27 * dVar22 - dVar33 * dVar24) * dStack_e0 +
              (dVar24 * dVar37 - dVar35 * dVar22) * local_d8 < 0.0) {
            puVar11[uVar21] = _LC30 - (double)puVar11[uVar21];
          }
        }
      }
      if (*(char *)(lVar4 + lVar14) != '\0') goto LAB_00104610;
      dVar38 = auVar36._0_8_;
      puVar18 = puVar10;
      uVar21 = uVar20;
      __src = puVar11;
      dVar23 = dVar27;
      auVar39 = auVar36;
      dVar40 = dVar29;
      dVar42 = dVar24;
    } while( true );
  }
  goto LAB_00104290;
LAB_00104610:
  if ((uVar20 != 1) &&
     (dVar25 = (double)local_218._0_8_ * (double)local_218._0_8_ + 0.0 +
               (double)local_218._8_8_ * (double)local_218._8_8_ + local_208 * local_208,
     dVar25 != 0.0)) {
    dVar32 = 0.0;
    dVar30 = (double)puVar11[uVar20 - 1] / (double)puVar10[uVar20 - 1];
    if (param_1 == iVar15) {
      if (uVar20 != 0) {
        uVar13 = 0;
        dVar32 = 0.0;
LAB_00105029:
        do {
          dVar40 = (double)puVar11[uVar13] - (double)puVar10[uVar13] * dVar30;
          if (dVar40 < _LC31) {
            dVar40 = dVar40 + _LC30;
          }
          else if (_LC26 < dVar40) {
            uVar13 = uVar13 + 1;
            dVar32 = dVar32 + (dVar40 - _LC30);
            if (uVar13 == uVar20) break;
            goto LAB_00105029;
          }
          uVar13 = uVar13 + 1;
          dVar32 = dVar32 + dVar40;
        } while (uVar13 != uVar20);
      }
      dVar32 = dVar32 / (double)(long)uVar20;
    }
    lVar14 = 0;
    do {
      iVar3 = *(int *)(lVar5 + 8 + lVar9 * 0xc);
      iVar15 = iVar3 + 1;
      if (iVar15 * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
        iVar15 = iVar3 + -2;
      }
      lVar9 = (long)iVar15;
      puVar18 = (undefined8 *)(lVar6 + lVar9 * 0x20);
      if ((lVar7 == 0) || (lVar16 = lVar14, 0.0 < (double)puVar18[3] || (double)puVar18[3] == 0.0))
      {
        pdVar12 = (double *)(puVar10 + lVar14);
        dVar40 = dVar30 * *pdVar12;
        *pdVar12 = dVar40;
        if (lVar14 == 0) {
          dVar28 = 0.0;
          if (dVar40 <= _LC26) goto LAB_0010487b;
LAB_001046f1:
          dVar40 = _LC26 + dVar28;
          *pdVar12 = dVar40;
        }
        else {
          dVar28 = (double)puVar10[lVar14 + -1];
          if (_LC26 < dVar40 - dVar28) goto LAB_001046f1;
LAB_0010487b:
          if ((lVar14 + 1U < uVar20) && (_LC26 < dVar30 * (double)puVar10[lVar14 + 1] - dVar40)) {
            dVar40 = dVar30 * (double)puVar10[lVar14 + 1] - _LC26;
            *pdVar12 = dVar40;
          }
        }
        lVar16 = lVar14 + 1;
        local_a8 = *puVar18;
        uStack_a0 = puVar18[1];
        local_98 = puVar18[2];
        sincos((((double)puVar11[lVar14] - dVar40) - dVar32) * _LC7,&local_f0,&local_f8);
        dVar40 = SQRT(dVar25);
        auVar39._8_8_ = dVar40;
        auVar39._0_8_ = dVar40;
        auVar39 = divpd(local_218,auVar39);
        local_68 = auVar39._0_8_ * local_f0;
        dStack_60 = auVar39._8_8_ * local_f0;
        local_50 = local_f8;
        local_58 = (local_208 / dVar40) * local_f0;
        linalg::qrot<double>((linalg *)&local_88,(vec *)&local_68,(vec *)&local_a8);
        *puVar18 = local_88;
        puVar18[1] = uStack_80;
        puVar18[2] = local_78;
      }
      lVar14 = lVar16;
    } while (*(char *)(lVar4 + lVar9) == '\0');
  }
  if (puVar10 != (undefined8 *)0x0) {
    free(puVar10);
  }
  if (puVar11 != (undefined8 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      free(puVar11);
      return;
    }
    goto LAB_001050ce;
  }
LAB_00104290:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001050ce:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Impl::DistributeTangents(manifold::Vec<bool> const&) */

void __thiscall manifold::Manifold::Impl::DistributeTangents(Impl *this,Vec *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  Impl *local_38;
  Vec *local_30;
  long local_20;
  
  iVar1 = *(int *)(param_1 + 8);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = this;
  local_30 = param_1;
  if ((long)iVar1 != 0) {
    lVar2 = 0;
    do {
      lVar3 = lVar2 + 1;
      DistributeTangents(manifold::Vec<bool>const&)::{lambda(int)#1}::operator()
                ((_lambda_int__1_ *)&local_38,(int)lVar2);
      lVar2 = lVar3;
    } while (iVar1 != lVar3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Impl::CreateTangents(int) */

void __thiscall manifold::Manifold::Impl::CreateTangents(Impl *this,int param_1)

{
  int iVar1;
  int *piVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  size_t sVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  code *pcVar15;
  long lVar16;
  size_t sVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  long in_FS_OFFSET;
  Impl *pIVar22;
  undefined1 auVar23 [16];
  void **ppvVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  int *local_210;
  undefined8 local_1b0;
  void *local_1a8;
  size_t local_1a0;
  size_t sStack_198;
  void *local_188;
  size_t local_180;
  size_t local_178;
  int *local_168;
  undefined1 local_148 [16];
  double local_138;
  undefined1 local_128 [16];
  double local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  Impl *local_c8;
  void **ppvStack_c0;
  double local_b8;
  undefined8 uStack_b0;
  Impl *local_a8;
  void **ppvStack_a0;
  double local_98;
  undefined8 uStack_90;
  int local_88 [2];
  Impl *local_80;
  code *local_78;
  code *pcStack_70;
  undefined1 local_68 [16];
  code *local_58;
  code *pcStack_50;
  long local_40;
  
  uVar7 = *(undefined8 *)(this + 0x50);
  uVar8 = *(undefined8 *)(this + 0x68);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar19 = *(long *)(this + 0xb0);
  *(undefined8 *)(this + 0xb0) = 0;
  if (lVar19 != 0) {
    uVar14 = 0;
    if (*(void **)(this + 0xa8) != (void *)0x0) {
      free(*(void **)(this + 0xa8));
      uVar14 = *(undefined8 *)(this + 0xb0);
    }
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined8 *)(this + 0xb8) = uVar14;
  }
  local_1a8 = (void *)0x0;
  sVar17 = (size_t)(int)uVar8;
  sStack_198 = 0;
  if (sVar17 == 0) {
    local_1a0 = 0;
    local_188 = (void *)0x0;
    local_178 = 0;
  }
  else {
    local_1a8 = malloc(sVar17 << 5);
    local_1a0 = sVar17;
    sStack_198 = sVar17;
    local_188 = calloc(sVar17,1);
    local_178 = sVar17;
  }
  local_180 = sVar17;
  VertHalfedge();
  if (local_168 + (int)uVar7 != local_168) {
    local_210 = local_168;
    do {
      iVar5 = *local_210;
      local_68 = (undefined1  [16])0x0;
      local_58 = (code *)0x0;
      local_1b0 = _LC22;
      pcStack_50 = (code *)0x0;
      plVar12 = (long *)operator_new(0x20);
      plVar12[3] = (long)this;
      plVar12[2] = (long)&local_188;
      local_68._0_8_ = plVar12;
      *plVar12 = (long)&local_1b0;
      plVar12[1] = (long)&local_1a8;
      local_a8 = (Impl *)CONCAT44(local_a8._4_4_,iVar5);
      local_58 = std::
                 _Function_handler<void(int,manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)const::FlatNormal_const&,manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)const::FlatNormal&),manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)const::{lambda(int,manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)const::FlatNormal_const&,manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)const::FlatNormal_const&)#1}>
                 ::_M_manager;
      pcStack_50 = std::
                   _Function_handler<void(int,manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int)const::FlatNormal_const&,manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int)const::FlatNormal&),manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int)const::{lambda(int,manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int)const::FlatNormal_const&,manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int)const::FlatNormal_const&)#1}>
                   ::operator();
      local_78 = std::
                 _Function_handler<manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)const::FlatNormal(int),manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)const::{lambda(int)#1}>
                 ::_M_manager;
      pcStack_70 = std::
                   _Function_handler<manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)const::FlatNormal(int),manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)const::{lambda(int)#1}>
                   ::_M_invoke;
      local_88[0] = param_1;
      local_80 = this;
      std::
      _Function_handler<manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)const::FlatNormal(int),manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)const::{lambda(int)#1}>
      ::_M_invoke((_Function_handler<manifold::Manifold::Impl::CreateTangents(int)::_lambda(int)_1_::operator()(int)const::FlatNormal(int),manifold::Manifold::Impl::CreateTangents(int)::_lambda(int)_1_::operator()(int)const::_lambda(int)_1_>
                   *)&local_c8,(_Any_data *)local_88,(int *)&local_a8);
      pcVar15 = std::
                _Function_handler<manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)const::FlatNormal(int),manifold::Manifold::Impl::CreateTangents(int)::{lambda(int)#1}::operator()(int)const::{lambda(int)#1}>
                ::_M_manager;
      iVar18 = iVar5;
      do {
        iVar6 = *(int *)(*(long *)(this + 0x60) + (long)iVar18 * 0xc + 8);
        iVar1 = iVar6 + 1;
        if (iVar1 * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
          iVar1 = iVar6 + -2;
        }
        local_128._0_4_ = iVar1;
        if (pcVar15 == (code *)0x0) {
LAB_00105813:
          std::__throw_bad_function_call();
          goto LAB_00105818;
        }
        (*pcStack_70)(&local_a8,(_Any_data *)local_88,local_128);
        local_148._0_4_ = iVar18;
        if (local_58 == (code *)0x0) goto LAB_00105813;
        (*pcStack_50)(local_68,local_148,
                      (_Function_handler<manifold::Manifold::Impl::CreateTangents(int)::_lambda(int)_1_::operator()(int)const::FlatNormal(int),manifold::Manifold::Impl::CreateTangents(int)::_lambda(int)_1_::operator()(int)const::_lambda(int)_1_>
                       *)&local_c8,&local_a8);
        local_c8 = local_a8;
        ppvStack_c0 = ppvStack_a0;
        local_b8 = local_98;
        uStack_b0 = uStack_90;
        pcVar15 = local_78;
        iVar18 = iVar1;
      } while (iVar5 != iVar1);
      if (local_78 != (code *)0x0) {
        (*local_78)((_Any_data *)local_88,(_Any_data *)local_88,3);
      }
      if (local_58 != (code *)0x0) {
        (*local_58)(local_68,local_68,3);
      }
      if ((int)local_1b0 < 0) {
        if ((int)local_1b0 == -1) {
          *(undefined1 *)((long)local_188 + (long)iVar1) = 1;
        }
      }
      else if (-1 < local_1b0) {
        lVar16 = (long)(int)local_1b0;
        piVar2 = (int *)(*(long *)(this + 0x60) + lVar16 * 0xc);
        lVar19 = *(long *)(this + 0x48);
        pdVar3 = (double *)(lVar19 + (long)*piVar2 * 0x18);
        pdVar4 = (double *)(lVar19 + (long)piVar2[1] * 0x18);
        local_138 = pdVar4[2] - pdVar3[2];
        lVar20 = (long)local_1b0._4_4_ << 5;
        piVar2 = (int *)(*(long *)(this + 0x60) + (long)local_1b0._4_4_ * 0xc);
        local_148._0_8_ = *pdVar4 - *pdVar3;
        local_148._8_8_ = pdVar4[1] - pdVar3[1];
        pdVar3 = (double *)(lVar19 + (long)*piVar2 * 0x18);
        pdVar4 = (double *)(lVar19 + (long)piVar2[1] * 0x18);
        local_128._0_8_ = *pdVar4 - *pdVar3;
        local_128._8_8_ = pdVar4[1] - pdVar3[1];
        local_118 = pdVar4[2] - pdVar3[2];
        dVar26 = SQRT(local_128._0_8_ * local_128._0_8_ + 0.0 + local_128._8_8_ * local_128._8_8_ +
                      local_118 * local_118);
        auVar27._8_8_ = dVar26;
        auVar27._0_8_ = dVar26;
        dVar25 = SQRT(local_148._0_8_ * local_148._0_8_ + 0.0 + local_148._8_8_ * local_148._8_8_ +
                      local_138 * local_138);
        auVar23._8_8_ = dVar25;
        auVar23._0_8_ = dVar25;
        auVar27 = divpd(local_128,auVar27);
        auVar23 = divpd(local_148,auVar23);
        pIVar22 = (Impl *)(auVar23._0_8_ - auVar27._0_8_);
        ppvVar24 = (void **)(auVar23._8_8_ - auVar27._8_8_);
        dVar25 = local_138 / dVar25 - local_118 / dVar26;
        local_c8 = pIVar22;
        ppvStack_c0 = ppvVar24;
        local_b8 = dVar25;
        (anonymous_namespace)::CircularTangent
                  ((_anonymous_namespace_ *)&local_e8,
                   (_Function_handler<manifold::Manifold::Impl::CreateTangents(int)::_lambda(int)_1_::operator()(int)const::FlatNormal(int),manifold::Manifold::Impl::CreateTangents(int)::_lambda(int)_1_::operator()(int)const::_lambda(int)_1_>
                    *)&local_c8,local_148);
        uVar11 = _LC5;
        local_98 = (double)((ulong)dVar25 ^ _LC5);
        puVar13 = (undefined8 *)(lVar16 * 0x20 + (long)local_1a8);
        puVar21 = (undefined8 *)((long)local_1a8 + lVar20);
        *puVar13 = local_e8;
        puVar13[1] = uStack_e0;
        local_a8 = (Impl *)((ulong)pIVar22 ^ uVar11);
        ppvStack_a0 = (void **)((ulong)ppvVar24 ^ uVar11);
        puVar13[2] = local_d8;
        puVar13[3] = uStack_d0;
        (anonymous_namespace)::CircularTangent
                  ((_anonymous_namespace_ *)&local_108,(vec *)&local_a8,local_128);
        *puVar21 = local_108;
        puVar21[1] = uStack_100;
        puVar21[2] = local_f8;
        puVar21[3] = uStack_f0;
      }
      local_210 = local_210 + 1;
    } while (local_168 + (int)uVar7 != local_210);
  }
  ppvStack_a0 = &local_188;
  pvVar9 = *(void **)(this + 0xa8);
  lVar16 = (long)(int)local_180;
  sVar17 = *(size_t *)(this + 0xb0);
  sVar10 = *(size_t *)(this + 0xb8);
  *(void **)(this + 0xa8) = local_1a8;
  *(size_t *)(this + 0xb0) = local_1a0;
  *(size_t *)(this + 0xb8) = sStack_198;
  lVar19 = 0;
  local_1a8 = pvVar9;
  local_1a0 = sVar17;
  sStack_198 = sVar10;
  local_a8 = this;
  if (lVar16 != 0) {
    do {
      lVar20 = lVar19 + 1;
      DistributeTangents(manifold::Vec<bool>const&)::{lambda(int)#1}::operator()
                ((_lambda_int__1_ *)&local_a8,(int)lVar19);
      lVar19 = lVar20;
    } while (lVar16 != lVar20);
  }
  if (local_168 != (int *)0x0) {
    free(local_168);
  }
  if (local_188 != (void *)0x0) {
    free(local_188);
  }
  if (local_1a8 != (void *)0x0) {
    free(local_1a8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105818:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (anonymous namespace)::InterpTri::Bezier2Bezier(linalg::mat<double, 3, 2> const&,
   linalg::mat<double, 4, 2> const&, linalg::mat<double, 4, 2> const&, double, linalg::vec<double,
   3> const&) */

InterpTri * __thiscall
(anonymous_namespace)::InterpTri::Bezier2Bezier
          (InterpTri *this,mat *param_1,mat *param_2,mat *param_3,double param_4,vec *param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  double extraout_RDX;
  linalg *plVar8;
  double dVar9;
  double dVar10;
  long in_FS_OFFSET;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
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
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  ulong local_3f0;
  undefined1 local_3e8 [16];
  ulong local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  double local_338;
  undefined1 local_308 [16];
  double local_2f8;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_288;
  double dStack_280;
  double local_278;
  double local_268;
  double dStack_260;
  double local_258;
  linalg local_248 [32];
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  double local_70;
  double dStack_68;
  double local_60;
  double local_58;
  double dStack_50;
  double local_48;
  long local_40;
  
  dVar30 = 0.0;
  dVar10 = *(double *)(param_2 + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  dVar13 = *(double *)(param_1 + 0x18);
  dVar2 = *(double *)(param_1 + 0x20);
  dStack_190 = *(double *)(param_2 + 0x38) + 0.0;
  dVar18 = *(double *)(param_2 + 0x28);
  dVar15 = *(double *)(param_1 + 0x28);
  dVar27 = *(double *)(param_2 + 0x20);
  dVar9 = *(double *)(param_2 + 0x30);
  dVar28 = *(double *)(param_2 + 0x30);
  auVar12 = *(undefined1 (*) [16])(param_2 + 0x28);
  local_1a8 = (*(double *)(param_2 + 0x20) + dVar13) * dStack_190;
  dStack_1a0 = (*(double *)(param_2 + 0x28) + dVar2) * dStack_190;
  dStack_1b0 = _LC3;
  dVar26 = *(double *)(param_2 + 0x10);
  auVar7 = *(undefined1 (*) [16])(param_2 + 8);
  dVar29 = *(double *)(param_1 + 0x10);
  local_198 = (dVar15 + dVar28) * dStack_190;
  dVar3 = *(double *)param_1;
  dVar4 = *(double *)(param_1 + 8);
  dVar17 = *(double *)(param_2 + 8);
  dStack_170 = *(double *)(param_2 + 0x18) + 0.0;
  dVar21 = *(double *)param_2;
  dVar5 = *(double *)(param_2 + 8);
  local_178 = (dVar29 + dVar26) * dStack_170;
  dStack_150 = _LC3;
  local_188 = dStack_170 * (dVar21 + dVar3);
  dStack_180 = dStack_170 * (dVar5 + dVar4);
  dVar22 = dVar3;
  dVar23 = dVar4;
  dVar24 = dVar13;
  dVar25 = dVar2;
  dVar14 = param_4;
  dVar32 = param_4;
  local_1b8 = dVar15;
  local_168 = dVar3;
  dStack_160 = dVar4;
  local_158 = dVar29;
  CubicBezier2Linear(param_4,&local_c8,param_1,*(undefined8 *)(param_2 + 0x10));
  local_3c0 = local_c8;
  dVar19 = _LC3 - param_4;
  local_3d0 = dStack_c0;
  local_3e8._8_8_ = dVar19 * dStack_c0 + dVar32 * dStack_a0;
  local_3e8._0_8_ = dVar19 * local_c8 + dVar14 * local_a8;
  local_3c8 = dVar19 * local_b8 + param_4 * local_98;
  dVar14 = param_4 * local_90 + dVar19 * local_b0;
  if (dVar14 != dVar30) {
    auVar31._8_8_ = dVar14;
    auVar31._0_8_ = dVar14;
    local_3e8 = divpd(local_3e8,auVar31);
    local_3c8 = local_3c8 / dVar14;
  }
  if (local_b0 != 0.0) {
    local_b8 = local_b8 / local_b0;
    local_3c0 = local_c8 / local_b0;
    local_3d0 = dStack_c0 / local_b0;
  }
  if (local_90 != 0.0) {
    local_a8 = local_a8 / local_90;
    dStack_a0 = dStack_a0 / local_90;
    local_98 = local_98 / local_90;
  }
  local_a8 = local_a8 - local_3c0;
  local_98 = local_98 - local_b8;
  dStack_a0 = dStack_a0 - local_3d0;
  dVar14 = SQRT(dStack_a0 * dStack_a0 + local_a8 * local_a8 + 0.0 + local_98 * local_98);
  if (_LC12 < (double)((ulong)(local_a8 / dVar14) & _LC11)) {
    local_2f8 = 0.0;
    local_308 = (undefined1  [16])0x0;
  }
  else {
    local_2f8 = local_98 / dVar14;
    local_308._8_8_ = dStack_a0 / dVar14;
    local_308._0_8_ = local_a8 / dVar14;
  }
  dVar20 = SQRT(dVar18 * dVar18 + dVar27 * dVar27 + 0.0 + dVar28 * dVar28);
  dVar18 = _LC5;
  dVar28 = _LC5;
  dVar14 = _LC5;
  dVar32 = _LC5;
  dVar30 = _LC5;
  if ((double)((ulong)(dVar27 / dVar20) & _LC11) <= _LC12) {
    auVar11._8_8_ = dVar20;
    auVar11._0_8_ = dVar20;
    auVar12 = divpd(auVar12,auVar11);
    dVar18 = (double)((ulong)(dVar9 / dVar20) ^ (ulong)_LC5);
    dVar28 = (double)((ulong)(dVar27 / dVar20) ^ (ulong)_LC5);
    dVar14 = (double)((ulong)(dVar10 / dVar20) ^ (ulong)_LC5);
    dVar32 = (double)(auVar12._0_8_ ^ (ulong)_LC5);
    dVar30 = (double)(auVar12._8_8_ ^ (ulong)_LC5);
  }
  dVar27 = SQRT(dVar26 * dVar26 + dVar21 * dVar21 + 0.0 + dVar5 * dVar5);
  dVar21 = dVar21 / dVar27;
  if (_LC12 < (double)(_LC11 & (ulong)dVar21)) {
    dVar27 = 0.0;
    auVar12 = ZEXT816(0);
    dVar21 = 0.0;
    dVar17 = 0.0;
  }
  else {
    dVar17 = dVar17 / dVar27;
    auVar12._8_8_ = dVar27;
    auVar12._0_8_ = dVar27;
    dVar27 = extraout_RDX / dVar27;
    auVar12 = divpd(auVar7,auVar12);
  }
  dVar26 = *(double *)param_5;
  dVar5 = *(double *)((long)param_5 + 8);
  dVar10 = *(double *)((long)param_5 + 0x10);
  dVar16 = auVar12._8_8_;
  local_2a8 = dVar26 - dVar22;
  dStack_2a0 = dVar5 - dVar23;
  local_298 = dVar10 - dVar29;
  dVar22 = *(double *)param_3;
  dVar23 = *(double *)(param_3 + 8);
  dVar9 = *(double *)(param_3 + 0x10);
  plVar8 = (linalg *)&local_88;
  dVar20 = dVar21;
  local_208 = dVar22;
  dStack_200 = dVar23;
  local_1f8 = dVar9;
  local_128 = dVar21;
  dStack_120 = dVar17;
  local_118 = dVar16;
  local_110 = dVar28;
  dStack_108 = dVar14;
  local_100 = dVar30;
  OrthogonalTo(&local_1e8);
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  local_278 = dVar10 - dVar15;
  dVar10 = *(double *)(param_3 + 0x20);
  uVar6 = *(undefined8 *)(param_3 + 0x28);
  local_288 = dVar26 - dVar24;
  dStack_280 = dVar5 - dVar25;
  local_148 = dVar10;
  dStack_140 = (double)uVar6;
  local_138 = (double)uVar1;
  OrthogonalTo((linalg *)&local_88);
  local_f8 = local_1e8;
  dStack_f0 = dStack_1e0;
  local_338 = auVar12._0_8_;
  local_e8 = local_1d8;
  local_e0 = local_88;
  dStack_d8 = dStack_80;
  local_d0 = local_78;
  local_70 = local_1e8;
  dStack_68 = dStack_1e0;
  local_60 = local_1d8;
  local_78 = local_118;
  local_88 = local_128;
  dStack_80 = dStack_120;
  local_58 = local_1d8 * local_338 - dVar27 * dStack_1e0;
  dStack_50 = local_1e8 * dVar16 - dVar20 * local_1d8;
  local_48 = dStack_1e0 * dVar21 - local_1e8 * dVar17;
  linalg::rotation_quat<double>((linalg *)&local_228,(mat *)plVar8);
  local_78 = local_100;
  local_60 = local_d0;
  local_88 = local_110;
  dStack_80 = dStack_108;
  local_70 = local_e0;
  dStack_68 = dStack_d8;
  local_58 = local_d0 * dVar32 - dVar18 * dStack_d8;
  dStack_50 = local_e0 * dVar30 - dVar28 * local_d0;
  local_48 = dStack_d8 * dVar28 - local_e0 * dVar14;
  linalg::rotation_quat<double>((linalg *)&local_208,(mat *)&local_88);
  dVar20 = local_1f8;
  dVar32 = dStack_200;
  dVar25 = local_208;
  dVar24 = _LC5;
  dVar18 = local_1f8 * local_218 + dStack_200 * local_220 + local_208 * local_228 + 0.0 +
           local_1f0 * local_210;
  dVar27 = local_208;
  dVar26 = dStack_200;
  dVar5 = local_1f8;
  if (dVar30 * (dVar15 - dVar29) + dVar14 * (dVar2 - dVar4) + dVar28 * (dVar13 - dVar3) + 0.0 +
      dVar17 * (dVar2 - dVar4) + (dVar13 - dVar3) * dVar21 + 0.0 + (dVar15 - dVar29) * dVar16 < 0.0
      != dVar18 < 0.0) {
    dVar18 = (double)((ulong)dVar18 ^ (ulong)_LC5);
    dVar27 = (double)((ulong)local_208 ^ (ulong)_LC5);
    dVar26 = (double)((ulong)dStack_200 ^ (ulong)_LC5);
    dVar5 = (double)((ulong)local_1f8 ^ (ulong)_LC5);
    local_1f0 = (double)((ulong)local_1f0 ^ (ulong)_LC5);
  }
  if (dVar18 <= __LC32) {
    dVar18 = acos(dVar18);
    dVar15 = sin(dVar18);
    dVar29 = sin(param_4 * dVar18);
    dVar17 = sin(dVar18 * dVar19);
    dVar18 = (dVar17 * local_228 + dVar27 * dVar29) / dVar15;
    dVar13 = (dVar17 * local_220 + dVar26 * dVar29) / dVar15;
    dVar27 = (dVar17 * local_218 + dVar5 * dVar29) / dVar15;
    dVar15 = (local_1f0 * dVar29 + dVar17 * local_210) / dVar15;
  }
  else {
    dVar18 = dVar19 * local_228 + dVar27 * param_4;
    dVar13 = dVar19 * local_220 + dVar26 * param_4;
    dVar27 = dVar19 * local_218 + dVar5 * param_4;
    dVar15 = local_1f0 * param_4 + dVar19 * local_210;
  }
  local_3d8 = (ulong)dVar20 ^ (ulong)dVar24;
  local_3f0 = (ulong)dVar32 ^ (ulong)dVar24;
  local_148 = ((dVar15 * dVar15 + dVar18 * dVar18) - dVar13 * dVar13) - dVar27 * dVar27;
  dStack_140 = dVar18 * dVar13 + dVar15 * dVar27;
  dStack_140 = dStack_140 + dStack_140;
  local_138 = dVar18 * dVar27 - dVar13 * dVar15;
  local_138 = local_138 + local_138;
  linalg::rotation_quat<double>((linalg *)&local_88,(vec *)&local_148,local_308);
  local_1e8 = (dVar18 * local_70 + local_88 * dVar15 + dStack_80 * dVar27) - local_78 * dVar13;
  dStack_1e0 = (local_70 * dVar13 + dStack_80 * dVar15 + dVar18 * local_78) - local_88 * dVar27;
  dVar29 = local_78 * dVar15;
  dStack_1d0 = local_78 * dVar27;
  local_78 = (double)local_3d8;
  local_1d8 = (local_70 * dVar27 + dVar29 + local_88 * dVar13) - dVar18 * dStack_80;
  dStack_1d0 = ((local_70 * dVar15 - dVar18 * local_88) - dStack_80 * dVar13) - dStack_1d0;
  dStack_80 = (double)local_3f0;
  local_268 = dVar10;
  dStack_260 = (double)uVar6;
  local_258 = (double)uVar1;
  local_148 = local_1e8;
  dStack_140 = dStack_1e0;
  local_138 = local_1d8;
  dStack_130 = dStack_1d0;
  local_88 = (double)((ulong)dVar25 ^ (ulong)dVar24);
  linalg::qrot<double>(local_248,(linalg *)&local_88,(vec *)&local_268);
  linalg::qrot<double>((linalg *)&local_2c8,(vec *)&local_148,local_248);
  local_88 = (double)((ulong)local_228 ^ (ulong)dVar24);
  dStack_80 = (double)((ulong)local_220 ^ (ulong)dVar24);
  local_78 = (double)((ulong)local_218 ^ (ulong)dVar24);
  local_148 = local_1e8;
  dStack_140 = dStack_1e0;
  local_138 = local_1d8;
  dStack_130 = dStack_1d0;
  local_268 = dVar22;
  dStack_260 = dVar23;
  local_258 = dVar9;
  linalg::qrot<double>(local_248,(linalg *)&local_88,(vec *)&local_268);
  linalg::qrot<double>((linalg *)&local_2e8,(vec *)&local_148,local_248);
  *(double *)(this + 0x18) = _LC3;
  *(double *)(this + 0x20) = local_2e8 * dVar19 + local_2c8 * param_4;
  dVar18 = *(double *)(param_3 + 0x38);
  *(double *)(this + 0x28) = local_2e0 * dVar19 + local_2c0 * param_4;
  dVar15 = *(double *)(param_3 + 0x18);
  *(undefined8 *)this = local_3e8._0_8_;
  *(undefined8 *)(this + 8) = local_3e8._8_8_;
  *(double *)(this + 0x10) = local_3c8;
  *(double *)(this + 0x30) = local_2d8 * dVar19 + local_2b8 * param_4;
  *(double *)(this + 0x38) = param_4 * dVar18 + dVar19 * dVar15;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* (anonymous namespace)::InterpTri::Bezier2D(linalg::mat<double, 3, 4> const&, linalg::mat<double,
   4, 4> const&, linalg::mat<double, 4, 4> const&, double, double, linalg::vec<double, 3> const&) */

InterpTri * __thiscall
(anonymous_namespace)::InterpTri::Bezier2D
          (InterpTri *this,mat *param_1,mat *param_2,mat *param_3,double param_4,double param_5,
          vec *param_6)

{
  long in_FS_OFFSET;
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  long local_40;
  
  local_88 = *(double *)param_3;
  dStack_80 = *(double *)(param_3 + 8);
  local_58 = *(double *)(param_3 + 0x30);
  dStack_50 = *(double *)(param_3 + 0x38);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = *(double *)(param_3 + 0x10);
  dStack_70 = *(double *)(param_3 + 0x18);
  local_b8 = *(double *)(param_2 + 0x10);
  dStack_b0 = *(double *)(param_2 + 0x18);
  local_68 = *(double *)(param_3 + 0x20);
  dStack_60 = *(double *)(param_3 + 0x28);
  local_c8 = *(double *)param_2;
  dStack_c0 = *(double *)(param_2 + 8);
  local_a8 = *(undefined8 *)(param_2 + 0x20);
  uStack_a0 = *(undefined8 *)(param_2 + 0x28);
  local_98 = *(undefined8 *)(param_2 + 0x30);
  uStack_90 = *(undefined8 *)(param_2 + 0x38);
  local_f8 = *(double *)(param_1 + 0x10);
  local_108 = *(double *)param_1;
  dStack_100 = *(double *)(param_1 + 8);
  local_e0 = *(double *)(param_1 + 0x28);
  uStack_f0 = *(undefined8 *)(param_1 + 0x18);
  dStack_e8 = *(double *)(param_1 + 0x20);
  Bezier2Bezier((InterpTri *)&local_148,(mat *)&local_108,(mat *)&local_c8,(mat *)&local_88,param_4,
                param_6);
  local_88 = *(double *)(param_3 + 0x40);
  dStack_80 = *(double *)(param_3 + 0x48);
  local_168 = *(double *)(param_1 + 0x40);
  local_78 = *(double *)(param_3 + 0x50);
  dStack_70 = *(double *)(param_3 + 0x58);
  local_68 = *(double *)(param_3 + 0x60);
  dStack_60 = *(double *)(param_3 + 0x68);
  local_58 = *(double *)(param_3 + 0x70);
  dStack_50 = *(double *)(param_3 + 0x78);
  local_c8 = *(double *)(param_2 + 0x40);
  dStack_c0 = *(double *)(param_2 + 0x48);
  local_b8 = *(double *)(param_2 + 0x50);
  dStack_b0 = *(double *)(param_2 + 0x58);
  local_150 = *(undefined8 *)(param_1 + 0x58);
  local_a8 = *(undefined8 *)(param_2 + 0x60);
  uStack_a0 = *(undefined8 *)(param_2 + 0x68);
  local_98 = *(undefined8 *)(param_2 + 0x70);
  uStack_90 = *(undefined8 *)(param_2 + 0x78);
  local_178 = *(double *)(param_1 + 0x30);
  dStack_170 = *(double *)(param_1 + 0x38);
  dStack_160 = *(double *)(param_1 + 0x48);
  uStack_158 = *(undefined8 *)(param_1 + 0x50);
  Bezier2Bezier((InterpTri *)&local_108,(mat *)&local_178,(mat *)&local_c8,(mat *)&local_88,
                _LC3 - param_4,param_6);
  dVar5 = 0.0;
  dStack_160 = local_d0 + 0.0;
  local_168 = (local_f8 + local_d8) * dStack_160;
  local_178 = (dStack_e8 + local_108) * dStack_160;
  dStack_170 = (local_e0 + dStack_100) * dStack_160;
  dStack_b0 = local_110 + 0.0;
  local_b8 = (local_118 + local_138) * dStack_b0;
  local_c8 = (local_128 + local_148) * dStack_b0;
  dStack_c0 = (dStack_140 + dStack_120) * dStack_b0;
  CubicBezier2Linear(param_5,(mat *)&local_88);
  dVar1 = _LC3 - param_5;
  auVar3._0_8_ = dVar1 * local_88 + param_5 * local_68;
  auVar3._8_8_ = dVar1 * dStack_80 + param_5 * dStack_60;
  dVar4 = local_78 * dVar1 + local_58 * param_5;
  dVar1 = dVar1 * dStack_70 + param_5 * dStack_50;
  if (dVar1 == dVar5) {
    *(undefined1 (*) [16])this = auVar3;
    *(double *)(this + 0x10) = dVar4;
  }
  else {
    auVar2._8_8_ = dVar1;
    auVar2._0_8_ = dVar1;
    auVar3 = divpd(auVar3,auVar2);
    *(double *)(this + 0x10) = dVar4 / dVar1;
    *(undefined1 (*) [16])this = auVar3;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::Manifold::Impl::Refine(std::function<int (linalg::vec<double, 3>, linalg::vec<double,
   4>, linalg::vec<double, 4>)>, bool) */

void __thiscall manifold::Manifold::Impl::Refine(Impl *this,long param_2,undefined1 param_3)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  undefined1 auVar9 [16];
  long lVar10;
  double *pdVar11;
  undefined8 uVar12;
  double *pdVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  double *pdVar19;
  code **ppcVar20;
  double *pdVar21;
  double *pdVar22;
  double *pdVar23;
  long in_FS_OFFSET;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double local_670;
  double local_668;
  double dStack_660;
  double local_658;
  void *local_5c8;
  long local_5c0;
  double local_5a8;
  double dStack_5a0;
  double local_598;
  double local_588;
  double dStack_580;
  double local_578;
  double local_568;
  double dStack_560;
  double local_558;
  double dStack_550;
  double local_548;
  double dStack_540;
  double local_538;
  double dStack_530;
  double local_528;
  double dStack_520;
  double local_518;
  double dStack_510;
  double local_508;
  double dStack_500;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double local_4d0;
  double dStack_4c8;
  double local_4c0;
  double local_4b8;
  double dStack_4b0;
  double local_4a8;
  double local_4a0;
  double dStack_498;
  double local_490;
  double local_488;
  double dStack_480;
  double local_478;
  double local_470;
  double dStack_468;
  double local_460;
  double local_458;
  double dStack_450;
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  double local_410;
  double dStack_408;
  double local_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  Impl local_1f8 [72];
  void *local_1b0;
  void *local_198;
  long local_190;
  void *local_180;
  void *local_168;
  void *local_150;
  long local_148;
  void *local_130;
  void *local_108;
  void *local_e8;
  void *local_d0;
  void *local_b8;
  void *local_a0;
  void *local_88;
  undefined1 local_68 [16];
  code *local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (2 < *(ulong *)(this + 0x68)) {
    Impl(local_1f8,this);
    local_58 = (code *)0x0;
    uStack_50 = 0;
    local_68 = (undefined1  [16])0x0;
    if (*(code **)(param_2 + 0x10) != (code *)0x0) {
      (**(code **)(param_2 + 0x10))(local_68,param_2,2);
      local_58 = *(code **)(param_2 + 0x10);
      uStack_50 = *(undefined8 *)(param_2 + 0x18);
    }
    manifold::Manifold::Impl::Subdivide(&local_5c8,this,local_68,param_3);
    if (local_58 != (code *)0x0) {
      (*local_58)(local_68,local_68,3);
    }
    pvVar7 = local_5c8;
    if (local_5c0 == 0) {
      if (local_5c8 != (void *)0x0) {
        free(local_5c8);
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
      if (local_d0 != (void *)0x0) {
        free(local_d0);
      }
      if (local_e8 != (void *)0x0) {
        free(local_e8);
      }
      while (local_108 != (void *)0x0) {
        std::
        _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
        ::_M_erase(*(_Rb_tree_node **)((long)local_108 + 0x18));
        pvVar7 = *(void **)((long)local_108 + 0x10);
        operator_delete(local_108,0x98);
        local_108 = pvVar7;
      }
    }
    else {
      if (local_148 == local_190) {
        lVar6 = *(long *)(this + 0x48);
        lVar8 = *(long *)(this + 0x50);
        if (lVar8 != 0) {
          lVar17 = 0;
          do {
            lVar10 = (long)(int)lVar17;
            pauVar1 = (undefined1 (*) [16])(lVar6 + lVar10 * 0x18);
            local_568 = *(double *)((long)pvVar7 + lVar10 * 0x28 + 8);
            dStack_560 = *(double *)((long)pvVar7 + lVar10 * 0x28 + 0x10);
            local_558 = *(double *)((long)pvVar7 + lVar10 * 0x28 + 0x18);
            dStack_550 = *(double *)((long)pvVar7 + lVar10 * 0x28 + 0x20);
            auVar29 = manifold::Manifold::Impl::GetHalfedges((int)local_1f8);
            lVar14 = auVar29._8_8_;
            lVar10 = auVar29._0_8_ >> 0x20;
            piVar2 = (int *)((long)local_198 + (long)auVar29._0_4_ * 0xc);
            pdVar11 = (double *)((long)local_1b0 + (long)*piVar2 * 0x18);
            piVar3 = (int *)((long)local_198 + lVar10 * 0xc);
            pdVar13 = (double *)((long)local_1b0 + (long)*piVar3 * 0x18);
            lVar15 = lVar14 >> 0x20;
            piVar4 = (int *)((long)local_198 + (long)auVar29._8_4_ * 0xc);
            pdVar19 = (double *)((long)local_1b0 + (long)*piVar4 * 0x18);
            if (lVar14 < 0) {
              local_470 = 0.0;
              dStack_468 = 0.0;
              local_460 = 0.0;
            }
            else {
              pdVar21 = (double *)
                        ((long)local_1b0 + (long)*(int *)((long)local_198 + lVar15 * 0xc) * 0x18);
              local_470 = *pdVar21;
              dStack_468 = pdVar21[1];
              local_460 = pdVar21[2];
            }
            local_4a8 = pdVar11[2];
            local_4b8 = *pdVar11;
            dStack_4b0 = pdVar11[1];
            local_4a0 = *pdVar13;
            dStack_498 = pdVar13[1];
            local_490 = pdVar13[2];
            local_488 = *pdVar19;
            dStack_480 = pdVar19[1];
            local_478 = pdVar19[2];
            local_68._8_8_ = _UNK_0010bd98;
            local_68._0_8_ = _LC9;
            ppcVar20 = (code **)local_68;
            do {
              iVar5 = *(int *)ppcVar20;
              dVar27 = dStack_560;
              if (((iVar5 != 1) && (dVar27 = local_558, iVar5 != 2)) &&
                 (dVar27 = local_568, iVar5 != 0)) {
                dVar27 = dStack_550;
              }
              if (dVar27 == _LC3) {
                pdVar11 = &local_4a0;
                if ((iVar5 != 1) && (pdVar11 = &local_488, iVar5 != 2)) {
                  pdVar11 = &local_4b8;
                  if (iVar5 != 0) {
                    pdVar11 = &local_470;
                  }
                }
                dVar25 = pdVar11[1];
                dVar27 = pdVar11[2];
                *(double *)*pauVar1 = *pdVar11;
                *(double *)(*pauVar1 + 8) = dVar25;
                *(double *)pauVar1[1] = dVar27;
                goto LAB_001078fd;
              }
              ppcVar20 = (code **)((long)ppcVar20 + 4);
            } while (ppcVar20 != &local_58);
            pdVar19 = (double *)((long)auVar29._0_4_ * 0x20 + (long)local_150);
            pdVar21 = (double *)((long)piVar2[2] * 0x20 + (long)local_150);
            pdVar13 = (double *)((long)auVar29._8_4_ * 0x20 + (long)local_150);
            pdVar22 = (double *)((long)piVar4[2] * 0x20 + (long)local_150);
            pdVar11 = (double *)(lVar10 * 0x20 + (long)local_150);
            pdVar23 = (double *)((long)piVar3[2] * 0x20 + (long)local_150);
            if (lVar14 < 0) {
              local_2f8 = *pdVar19;
              dStack_2f0 = pdVar19[1];
              local_2c8 = pdVar11[2];
              dStack_2c0 = pdVar11[3];
              local_2e8 = pdVar19[2];
              dStack_2e0 = pdVar19[3];
              local_278 = *pdVar22;
              dStack_270 = pdVar22[1];
              local_2d8 = *pdVar11;
              dStack_2d0 = pdVar11[1];
              local_238 = *pdVar23;
              dStack_230 = pdVar23[1];
              local_2b8 = *pdVar13;
              dStack_2b0 = pdVar13[1];
              local_2a8 = pdVar13[2];
              dStack_2a0 = pdVar13[3];
              local_268 = pdVar22[2];
              dStack_260 = pdVar22[3];
              local_258 = *pdVar21;
              dStack_250 = pdVar21[1];
              local_248 = pdVar21[2];
              dStack_240 = pdVar21[3];
              local_228 = pdVar23[2];
              dStack_220 = pdVar23[3];
              local_588 = local_4b8 * _LC39 + local_4a0 * _LC39 + _LC39 * local_488;
              dStack_580 = dStack_4b0 * _LC39 + dStack_498 * _LC39 + _LC39 * dStack_480;
              local_68._12_4_ = (undefined4)((ulong)_UNK_0010bd98 >> 0x20);
              local_68._8_4_ = 2;
              local_578 = _LC39 * local_490 + _LC39 * local_4a8 + _LC39 * local_478;
              local_670 = 0.0;
              local_668 = 0.0;
              dStack_660 = 0.0;
              local_658 = 0.0;
              ppcVar20 = (code **)local_68;
              do {
                iVar5 = *(int *)ppcVar20;
                if (iVar5 == 0) {
                  iVar18 = 2;
                  iVar16 = 1;
                  local_378 = local_258;
                  dStack_370 = dStack_250;
                  dVar27 = local_558 / (_LC3 - local_568);
                  local_368 = local_248;
                  dStack_360 = dStack_240;
                  local_358 = local_2b8;
                  dStack_350 = dStack_2b0;
                  local_348 = local_2a8;
                  dStack_340 = dStack_2a0;
                  local_3f8 = local_2d8;
                  dStack_3f0 = dStack_2d0;
                  local_3e8 = local_2c8;
                  dStack_3e0 = dStack_2c0;
                  local_3d8 = local_238;
                  dStack_3d0 = dStack_230;
                  local_3c8 = local_228;
                  dStack_3c0 = dStack_220;
                  pdVar11 = &local_4a0;
                  pdVar13 = &local_488;
                }
                else if (iVar5 == 1) {
                  iVar18 = 0;
                  iVar16 = 2;
                  pdVar11 = &local_488;
                  local_378 = local_238;
                  dStack_370 = dStack_230;
                  pdVar13 = &local_4b8;
                  local_368 = local_228;
                  dStack_360 = dStack_220;
                  dVar27 = local_568 / (_LC3 - dStack_560);
                  local_358 = local_2f8;
                  dStack_350 = dStack_2f0;
                  local_348 = local_2e8;
                  dStack_340 = dStack_2e0;
                  local_3f8 = local_2b8;
                  dStack_3f0 = dStack_2b0;
                  local_3e8 = local_2a8;
                  dStack_3e0 = dStack_2a0;
                  local_3d8 = local_278;
                  dStack_3d0 = dStack_270;
                  local_3c8 = local_268;
                  dStack_3c0 = dStack_260;
                }
                else {
                  dVar27 = local_558;
                  if (iVar5 != 2) {
                    dVar27 = dStack_550;
                  }
                  iVar18 = 1;
                  iVar16 = 0;
                  local_378 = local_278;
                  dStack_370 = dStack_270;
                  local_368 = local_268;
                  dStack_360 = dStack_260;
                  pdVar11 = &local_4b8;
                  local_358 = local_2d8;
                  dStack_350 = dStack_2d0;
                  local_348 = local_2c8;
                  dStack_340 = dStack_2c0;
                  local_3f8 = local_2f8;
                  dStack_3f0 = dStack_2f0;
                  dVar27 = dStack_560 / (_LC3 - dVar27);
                  local_3e8 = local_2e8;
                  dStack_3e0 = dStack_2e0;
                  local_3d8 = local_258;
                  dStack_3d0 = dStack_250;
                  local_3c8 = local_248;
                  dStack_3c0 = dStack_240;
                  pdVar13 = &local_4a0;
                }
                local_4d0 = *pdVar13;
                dStack_4c8 = pdVar13[1];
                local_4c0 = pdVar13[2];
                local_4e8 = *pdVar11;
                dStack_4e0 = pdVar11[1];
                local_4d8 = pdVar11[2];
                (anonymous_namespace)::InterpTri::Bezier2Bezier
                          ((InterpTri *)&local_458,(mat *)&local_4e8,(mat *)&local_3f8,
                           (mat *)&local_378,dVar27,(vec *)&local_588);
                if (iVar5 == 1) {
                  pdVar11 = &local_258;
                  pdVar13 = &local_2d8;
                  local_508 = local_4a0;
                  dStack_500 = dStack_498;
                  local_4f8 = local_490;
                  dVar25 = dStack_560;
                }
                else {
                  if (iVar5 == 2) {
                    pdVar19 = &local_488;
                    dVar25 = local_558;
                  }
                  else {
                    if (iVar5 == 0) {
                      pdVar11 = &local_278;
                      pdVar13 = &local_2f8;
                      local_508 = local_4b8;
                      dStack_500 = dStack_4b0;
                      local_4f8 = local_4a8;
                      dVar25 = local_568;
                      goto LAB_001075d6;
                    }
                    pdVar19 = &local_470;
                    dVar25 = dStack_550;
                  }
                  pdVar11 = &local_238;
                  pdVar13 = &local_2b8;
                  local_508 = *pdVar19;
                  dStack_500 = pdVar19[1];
                  local_4f8 = pdVar19[2];
                }
LAB_001075d6:
                dVar24 = _LC3 - dVar27;
                dStack_4f0 = _LC3;
                pdVar19 = &local_4a0;
                if ((iVar5 != 1) && (pdVar19 = &local_488, iVar5 != 2)) {
                  pdVar19 = &local_4b8;
                  if (iVar5 != 0) {
                    pdVar19 = &local_470;
                  }
                }
                dStack_510 = dVar24 * pdVar13[3] + dVar27 * pdVar11[3] + 0.0;
                local_518 = (pdVar13[2] * dVar24 + pdVar11[2] * dVar27 + pdVar19[2]) * dStack_510;
                local_528 = (*pdVar19 + dVar24 * *pdVar13 + dVar27 * *pdVar11) * dStack_510;
                dStack_520 = (pdVar19[1] + dVar24 * pdVar13[1] + dVar27 * pdVar11[1]) * dStack_510;
                dStack_530 = dStack_420 + 0.0;
                local_538 = (local_448 + local_428) * dStack_530;
                local_548 = (local_438 + local_458) * dStack_530;
                dStack_540 = (dStack_430 + dStack_450) * dStack_530;
                (anonymous_namespace)::InterpTri::CubicBezier2Linear(dVar25,(mat *)&local_378);
                dVar27 = dStack_560;
                if (((iVar5 != 1) && (dVar27 = local_558, iVar5 != 2)) &&
                   (dVar27 = local_568, iVar5 != 0)) {
                  dVar27 = dStack_550;
                }
                dVar25 = _LC3 - dVar27;
                auVar28._0_8_ = dVar27 * local_358 + dVar25 * local_378;
                auVar28._8_8_ = dVar27 * dStack_350 + dVar25 * dStack_370;
                dVar24 = local_368 * dVar25 + local_348 * dVar27;
                dVar27 = dVar25 * dStack_360 + dVar27 * dStack_340;
                if (dVar27 != 0.0) {
                  dVar24 = dVar24 / dVar27;
                  auVar9._8_8_ = dVar27;
                  auVar9._0_8_ = dVar27;
                  auVar28 = divpd(auVar28,auVar9);
                }
                dVar27 = dStack_560;
                if ((iVar16 != 1) && (dVar27 = local_558, iVar16 != 2)) {
                  dVar27 = local_568;
                }
                dVar25 = dStack_560;
                if ((iVar18 != 1) && (dVar25 = local_558, iVar18 != 2)) {
                  dVar25 = local_568;
                }
                dVar27 = dVar27 * dVar25;
                ppcVar20 = (code **)((long)ppcVar20 + 4);
                local_658 = dVar27 + local_658;
                local_670 = dVar24 * dVar27 + local_670;
                local_668 = dVar27 * auVar28._0_8_ + local_668;
                dStack_660 = dVar27 * auVar28._8_8_ + dStack_660;
              } while (ppcVar20 != (code **)(local_68 + 0xc));
              auVar29._8_8_ = dStack_660;
              auVar29._0_8_ = local_668;
            }
            else {
              local_3f8 = *pdVar19;
              dStack_3f0 = pdVar19[1];
              local_3e8 = pdVar19[2];
              dStack_3e0 = pdVar19[3];
              local_3d8 = *pdVar21;
              dStack_3d0 = pdVar21[1];
              local_3c8 = pdVar21[2];
              dStack_3c0 = pdVar21[3];
              local_3b8 = *pdVar13;
              dStack_3b0 = pdVar13[1];
              local_3a8 = pdVar13[2];
              dStack_3a0 = pdVar13[3];
              local_398 = *pdVar22;
              dStack_390 = pdVar22[1];
              local_388 = pdVar22[2];
              dStack_380 = pdVar22[3];
              pdVar13 = (double *)
                        ((long)*(int *)((long)local_198 + lVar15 * 0xc + 8) * 0x20 + (long)local_150
                        );
              pdVar19 = (double *)((long)local_150 + lVar15 * 0x20);
              local_308 = pdVar19[2];
              dStack_300 = pdVar19[3];
              local_378 = *pdVar13;
              dStack_370 = pdVar13[1];
              local_368 = pdVar13[2];
              dStack_360 = pdVar13[3];
              local_358 = *pdVar11;
              dStack_350 = pdVar11[1];
              local_348 = pdVar11[2];
              dStack_340 = pdVar11[3];
              local_338 = *pdVar23;
              dStack_330 = pdVar23[1];
              local_328 = pdVar23[2];
              dStack_320 = pdVar23[3];
              local_318 = *pdVar19;
              dStack_310 = pdVar19[1];
              local_5a8 = local_470 * _LC41 +
                          local_4b8 * _LC41 + local_4a0 * _LC41 + local_488 * _LC41;
              dStack_5a0 = dStack_468 * _LC41 +
                           dStack_4b0 * _LC41 + dStack_498 * _LC41 + dStack_480 * _LC41;
              dVar25 = dStack_560 + local_558;
              local_658 = local_558 + dStack_550;
              local_598 = _LC41 * local_490 + _LC41 * local_4a8 + _LC41 * local_478 +
                          local_460 * _LC41;
              (anonymous_namespace)::InterpTri::Bezier2D
                        ((InterpTri *)&local_588,(mat *)&local_4b8,(mat *)&local_3f8,
                         (mat *)&local_378,dVar25,local_658,(vec *)&local_5a8);
              local_278 = local_3d8;
              dStack_270 = dStack_3d0;
              dVar27 = _LC3 - dVar25;
              local_268 = local_3c8;
              dStack_260 = dStack_3c0;
              local_258 = local_3b8;
              dStack_250 = dStack_3b0;
              local_248 = local_3a8;
              dStack_240 = dStack_3a0;
              local_238 = local_398;
              dStack_230 = dStack_390;
              local_228 = local_388;
              dStack_220 = dStack_380;
              local_218 = local_3f8;
              dStack_210 = dStack_3f0;
              local_208 = local_3e8;
              dStack_200 = dStack_3e0;
              local_2f8 = local_358;
              dStack_2f0 = dStack_350;
              local_2e8 = local_348;
              dStack_2e0 = dStack_340;
              local_2d8 = local_338;
              dStack_2d0 = dStack_330;
              local_2c8 = local_328;
              dStack_2c0 = dStack_320;
              local_2b8 = local_318;
              dStack_2b0 = dStack_310;
              local_2a8 = local_308;
              dStack_2a0 = dStack_300;
              local_298 = local_378;
              dStack_290 = dStack_370;
              local_448 = local_490;
              local_288 = local_368;
              dStack_280 = dStack_360;
              dStack_430 = local_478;
              local_458 = local_4a0;
              dStack_450 = dStack_498;
              local_418 = local_460;
              dStack_440 = local_488;
              local_438 = dStack_480;
              local_400 = local_4a8;
              local_428 = local_470;
              dStack_420 = dStack_468;
              local_410 = local_4b8;
              dStack_408 = dStack_4b0;
              (anonymous_namespace)::InterpTri::Bezier2D
                        ((InterpTri *)&local_4e8,(mat *)&local_458,(mat *)&local_2f8,
                         (mat *)&local_278,local_658,dVar27,(vec *)&local_5a8);
              dVar27 = dVar27 * dVar25;
              local_658 = (_LC3 - local_658) * local_658;
              auVar29._0_8_ = dVar27 * local_588 + 0.0 + local_658 * local_4e8;
              auVar29._8_8_ = dVar27 * dStack_580 + 0.0 + local_658 * dStack_4e0;
              local_670 = local_578 * dVar27 + 0.0 + local_4d8 * local_658;
              local_658 = dVar27 + 0.0 + local_658;
            }
            if (local_658 != 0.0) {
              local_670 = local_670 / local_658;
              auVar26._8_8_ = local_658;
              auVar26._0_8_ = local_658;
              auVar29 = divpd(auVar29,auVar26);
            }
            *pauVar1 = auVar29;
            *(double *)pauVar1[1] = local_670;
LAB_001078fd:
            lVar17 = lVar17 + 1;
          } while (lVar8 != lVar17);
        }
      }
      lVar6 = *(long *)(this + 0xb0);
      *(undefined8 *)(this + 0xb0) = 0;
      if (lVar6 != 0) {
        uVar12 = 0;
        if (*(void **)(this + 0xa8) != (void *)0x0) {
          free(*(void **)(this + 0xa8));
          uVar12 = *(undefined8 *)(this + 0xb0);
        }
        *(undefined8 *)(this + 0xa8) = 0;
        *(undefined8 *)(this + 0xb8) = uVar12;
      }
      manifold::Manifold::Impl::Finish();
      manifold::Manifold::Impl::CreateFaces();
      *(undefined4 *)(this + 0xc0) = 0xffffffff;
      if (local_5c8 != (void *)0x0) {
        free(local_5c8);
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
      if (local_d0 != (void *)0x0) {
        free(local_d0);
      }
      if (local_e8 != (void *)0x0) {
        free(local_e8);
      }
      while (local_108 != (void *)0x0) {
        std::
        _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
        ::_M_erase(*(_Rb_tree_node **)((long)local_108 + 0x18));
        pvVar7 = *(void **)((long)local_108 + 0x10);
        operator_delete(local_108,0x98);
        local_108 = pvVar7;
      }
    }
    if (local_130 != (void *)0x0) {
      free(local_130);
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
    if (local_198 != (void *)0x0) {
      free(local_198);
    }
    if (local_1b0 != (void *)0x0) {
      free(local_1b0);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* manifold::Manifold::Impl::UpdateSharpenedEdges(std::vector<manifold::Smoothness,
   std::allocator<manifold::Smoothness> > const&) const */

vector * manifold::Manifold::Impl::UpdateSharpenedEdges(vector *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  long *__dest;
  int *piVar8;
  ulong uVar9;
  long *in_RDX;
  long in_RSI;
  size_t __n;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 *local_88;
  long local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 1;
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_68 = 0x3f800000;
  local_60 = 0;
  local_58 = 0;
  local_88 = &local_58;
  if (2 < *(ulong *)(in_RSI + 0x68)) {
    uVar9 = 0;
    do {
      iVar1 = *(int *)(uVar9 * 0x10 + *(long *)(in_RSI + 0x110) + 8);
      local_48 = 2;
      local_50 = _LC9;
      piVar8 = (int *)&local_50;
      do {
        iVar2 = *piVar8;
        piVar8 = piVar8 + 1;
        local_8c = iVar1 * 3 + iVar2;
        piVar7 = (int *)std::__detail::
                        _Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                        ::operator[]((_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                                      *)&local_88,&local_8c);
        *piVar7 = iVar2 + (int)uVar9 * 3;
      } while (&local_44 != piVar8);
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(ulong *)(in_RSI + 0x68) / 3);
  }
  uVar9 = in_RDX[1] - *in_RDX;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
  if (uVar9 == 0) {
    __dest = (long *)0x0;
  }
  else {
    if (0x7ffffffffffffff0 < uVar9) {
      std::__throw_bad_array_new_length();
      goto LAB_001083c9;
    }
    __dest = (long *)operator_new(uVar9);
  }
  *(ulong *)(param_1 + 0x10) = uVar9 + (long)__dest;
  *(long **)param_1 = __dest;
  *(long **)(param_1 + 8) = __dest;
  plVar3 = (long *)*in_RDX;
  __n = in_RDX[1] - (long)plVar3;
  if ((long)__n < 0x11) {
    if (__n == 0x10) {
      lVar5 = plVar3[1];
      *__dest = *plVar3;
      __dest[1] = lVar5;
    }
  }
  else {
    memmove(__dest,plVar3,__n);
  }
  plVar3 = (long *)((long)__dest + __n);
  *(long **)(param_1 + 8) = plVar3;
  for (; puVar6 = local_78, plVar3 != __dest; __dest = __dest + 2) {
    local_8c = (int)*__dest;
    piVar8 = (int *)std::__detail::
                    _Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                    ::operator[]((_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                                  *)&local_88,&local_8c);
    *__dest = (long)*piVar8;
  }
  while (puVar6 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar6;
    operator_delete(puVar6,0x10);
    puVar6 = puVar4;
  }
  memset(local_88,0,local_80 * 8);
  local_70 = 0;
  local_78 = (undefined8 *)0x0;
  if (local_88 != &local_58) {
    operator_delete(local_88,local_80 << 3);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
LAB_001083c9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::Manifold::Impl::SharpenEdges(double, double) const */

void manifold::Manifold::Impl::SharpenEdges(double param_1,double param_2)

{
  int *piVar1;
  double *pdVar2;
  double *pdVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong *puVar10;
  ulong uVar11;
  long in_RSI;
  undefined1 (*in_RDI) [16];
  ulong uVar12;
  long in_FS_OFFSET;
  double dVar13;
  double dVar14;
  
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  dVar13 = param_1 * _LC26;
  lVar7 = *(long *)(in_RSI + 0x68);
  *in_RDI = (undefined1  [16])0x0;
  dVar13 = dVar13 / __LC25;
  *(undefined8 *)in_RDI[1] = 0;
  if (lVar7 != 0) {
    uVar11 = 0;
    do {
      while (piVar1 = (int *)(*(long *)(in_RSI + 0x60) + uVar11 * 0xc), piVar1[1] <= *piVar1) {
LAB_00108440:
        uVar11 = uVar11 + 1;
        if (*(ulong *)(in_RSI + 0x68) <= uVar11) goto LAB_00108538;
      }
      uVar12 = (ulong)piVar1[2];
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar12;
      pdVar2 = (double *)
               (*(long *)(in_RSI + 0x90) +
               ((SUB168(auVar8 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) + uVar12 / 3)
               * 8);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar11;
      pdVar3 = (double *)
               (*(long *)(in_RSI + 0x90) +
               ((SUB168(auVar9 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) + uVar11 / 3)
               * 8);
      dVar14 = acos(*pdVar2 * *pdVar3 + 0.0 + pdVar2[1] * pdVar3[1] + pdVar2[2] * pdVar3[2]);
      if (dVar14 <= dVar13) goto LAB_00108440;
      puVar5 = *(ulong **)(*in_RDI + 8);
      puVar6 = *(ulong **)in_RDI[1];
      if (puVar5 == puVar6) {
        std::vector<manifold::Smoothness,std::allocator<manifold::Smoothness>>::
        _M_realloc_insert<manifold::Smoothness>();
        puVar10 = *(ulong **)(*in_RDI + 8);
        if (*(ulong **)in_RDI[1] == puVar10) goto LAB_00108588;
      }
      else {
        puVar10 = puVar5 + 2;
        *puVar5 = uVar11;
        puVar5[1] = (ulong)param_2;
        *(ulong **)(*in_RDI + 8) = puVar10;
        if (puVar6 == puVar10) {
LAB_00108588:
          std::vector<manifold::Smoothness,std::allocator<manifold::Smoothness>>::
          _M_realloc_insert<manifold::Smoothness>();
          goto LAB_00108440;
        }
      }
      uVar11 = uVar11 + 1;
      *puVar10 = uVar12;
      puVar10[1] = (ulong)param_2;
      *(ulong **)(*in_RDI + 8) = puVar10 + 2;
    } while (uVar11 < *(ulong *)(in_RSI + 0x68));
  }
LAB_00108538:
  if (lVar4 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (int, manifold::Manifold::Impl::SetNormals(int, double)::FaceEdge
   const&, manifold::Manifold::Impl::SetNormals(int, double)::FaceEdge&),
   manifold::Manifold::Impl::SetNormals(int, double)::{lambda(int,
   manifold::Manifold::Impl::SetNormals(int, double)::FaceEdge const&,
   manifold::Manifold::Impl::SetNormals(int, double)::FaceEdge&)#1}>::_M_invoke(std::_Any_data
   const&, int&&, manifold::Manifold::Impl::SetNormals(int, double)::FaceEdge const&,
   manifold::Manifold::Impl::SetNormals(int, double)::FaceEdge&) */

void std::
     _Function_handler<void(int,manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge_const&,manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge&),manifold::Manifold::Impl::SetNormals(int,double)::{lambda(int,manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge_const&,manifold::Manifold::Impl::SetNormals(int,double)::FaceEdge&)#1}>
     ::_M_invoke(_Any_data *param_1,int *param_2,FaceEdge *param_3,FaceEdge *param_4)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  vector<int,std::allocator<int>> *pvVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 *puVar14;
  int *piVar15;
  vector<linalg::vec<double,3>,std::allocator<linalg::vec<double,3>>> *pvVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  long in_FS_OFFSET;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  plVar7 = *(long **)param_1;
  lVar18 = (long)*(int *)param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar19 = (long)*(int *)param_3;
  lVar8 = *plVar7;
  lVar9 = *(long *)(lVar8 + 0x90);
  pdVar1 = (double *)(lVar9 + lVar18 * 0x18);
  pdVar2 = (double *)(lVar9 + lVar19 * 0x18);
  dVar20 = acos(*pdVar1 * *pdVar2 + 0.0 + pdVar1[1] * pdVar2[1] + pdVar1[2] * pdVar2[2]);
  dVar20 = (dVar20 * __LC25) / _LC26;
  if ((double)plVar7[4] <= dVar20 && dVar20 != (double)plVar7[4]) {
    pvVar16 = (vector<linalg::vec<double,3>,std::allocator<linalg::vec<double,3>>> *)plVar7[2];
  }
  else {
    pvVar16 = (vector<linalg::vec<double,3>,std::allocator<linalg::vec<double,3>>> *)plVar7[2];
    cVar6 = *(char *)(*(long *)plVar7[1] + lVar19);
    if (cVar6 == *(char *)(*(long *)plVar7[1] + lVar18)) {
      puVar14 = *(undefined8 **)(pvVar16 + 8);
      if (cVar6 == '\0') goto LAB_00108695;
      lVar8 = *(long *)(lVar8 + 0x110);
      piVar15 = (int *)(lVar19 * 0x10 + lVar8);
      piVar17 = (int *)(lVar8 + lVar18 * 0x10);
      if ((*piVar15 == *piVar17) && (piVar15[3] == piVar17[3])) goto LAB_00108695;
    }
  }
  local_48 = 0;
  puVar10 = *(undefined8 **)(pvVar16 + 8);
  local_58 = (undefined1  [16])0x0;
  if (puVar10 == *(undefined8 **)(pvVar16 + 0x10)) {
    vector<linalg::vec<double,3>,std::allocator<linalg::vec<double,3>>>::
    _M_realloc_insert<linalg::vec<double,3>>(pvVar16,puVar10,local_58);
    pvVar16 = (vector<linalg::vec<double,3>,std::allocator<linalg::vec<double,3>>> *)plVar7[2];
    puVar14 = *(undefined8 **)(pvVar16 + 8);
  }
  else {
    puVar10[2] = 0;
    puVar14 = puVar10 + 3;
    *puVar10 = 0;
    puVar10[1] = 0;
    *(undefined8 **)(pvVar16 + 8) = puVar14;
  }
LAB_00108695:
  pvVar11 = (vector<int,std::allocator<int>> *)plVar7[3];
  piVar15 = *(int **)(pvVar11 + 8);
  iVar13 = (int)((long)puVar14 - *(long *)pvVar16 >> 3) * -0x55555555 + -1;
  local_58._0_4_ = iVar13;
  if (piVar15 == *(int **)(pvVar11 + 0x10)) {
    vector<int,std::allocator<int>>::_M_realloc_insert<int>(pvVar11,piVar15,local_58);
  }
  else {
    *piVar15 = iVar13;
    *(int **)(pvVar11 + 8) = piVar15 + 1;
  }
  dVar20 = *(double *)(param_4 + 8);
  if ((double)((ulong)dVar20 & _LC11) <= _LC12) {
    dVar23 = *(double *)(param_3 + 8);
    dVar3 = *(double *)(param_4 + 0x10);
    dVar4 = *(double *)(param_3 + 0x10);
    dVar24 = *(double *)(param_4 + 0x18);
    dVar5 = *(double *)(param_3 + 0x18);
    dVar21 = dVar20 * dVar23 + 0.0 + dVar3 * dVar4 + dVar24 * dVar5;
    dVar22 = 0.0;
    if ((dVar21 < _LC3) && (dVar22 = _LC26, _LC29 < dVar21)) {
      dVar22 = acos(dVar21);
    }
    dVar21 = dVar3 * dVar5 - dVar4 * dVar24;
    dVar24 = dVar24 * dVar23 - dVar5 * dVar20;
    dVar23 = dVar20 * dVar4 - dVar3 * dVar23;
    dVar20 = SQRT(dVar21 * dVar21 + 0.0 + dVar24 * dVar24 + dVar23 * dVar23);
    dVar21 = dVar21 / dVar20;
    if ((double)(_LC11 & (ulong)dVar21) <= _LC12) {
      dVar24 = dVar24 / dVar20;
      dVar23 = dVar23 / dVar20;
    }
    else {
      dVar21 = 0.0;
      dVar24 = 0.0;
      dVar23 = 0.0;
    }
    lVar8 = *(long *)(plVar7[2] + 8);
    *(double *)(lVar8 + -8) = dVar23 * dVar22 + *(double *)(lVar8 + -8);
    *(double *)(lVar8 + -0x18) = *(double *)(lVar8 + -0x18) + dVar21 * dVar22;
    *(double *)(lVar8 + -0x10) = *(double *)(lVar8 + -0x10) + dVar24 * dVar22;
  }
  else {
    uVar12 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_4 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_4 + 0x10) = uVar12;
    *(undefined8 *)(param_4 + 0x18) = *(undefined8 *)(param_3 + 0x18);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::Manifold::Impl::CreateTangents(std::vector<manifold::Smoothness,
   std::allocator<manifold::Smoothness> >) */

void __thiscall
manifold::Manifold::Impl::CreateTangents
          (Impl *this,vector<manifold::Smoothness,std::allocator<manifold::Smoothness>> *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  int *piVar3;
  double *pdVar4;
  undefined1 *puVar5;
  int iVar6;
  void *__ptr;
  long *plVar7;
  double *pdVar8;
  undefined1 auVar9 [16];
  double dVar10;
  code *pcVar11;
  char cVar12;
  long lVar13;
  _Rb_tree_node *p_Var14;
  _Rb_tree_node_base *p_Var15;
  _Rb_tree_node *p_Var16;
  undefined8 *puVar17;
  long lVar18;
  void *pvVar19;
  _Rb_tree_node_base *p_Var20;
  undefined8 uVar21;
  _Rb_tree_node_base *p_Var22;
  int iVar23;
  ulong *puVar24;
  int *piVar25;
  int **ppiVar26;
  long *plVar27;
  int *piVar28;
  long lVar29;
  _Rb_tree_node_base *p_Var30;
  double *pdVar31;
  undefined8 uVar32;
  long lVar33;
  double *pdVar34;
  long lVar35;
  long lVar36;
  size_t __nmemb;
  _Rb_tree_node *p_Var37;
  int iVar38;
  ulong uVar39;
  int iVar40;
  size_t sVar41;
  _Rb_tree_node *p_Var42;
  uint uVar43;
  ulong uVar44;
  long in_FS_OFFSET;
  double dVar45;
  double dVar46;
  undefined8 uVar47;
  undefined8 extraout_XMM1_Qa;
  double dVar48;
  undefined8 uVar49;
  undefined8 extraout_XMM1_Qb;
  double dVar50;
  undefined1 auVar51 [16];
  ulong uVar52;
  int local_2c0;
  undefined8 *local_2a8;
  uint local_24c;
  void *local_248;
  size_t local_240;
  size_t local_238;
  void *local_228;
  void *local_208 [4];
  int *local_1e8 [4];
  undefined1 local_1c8 [16];
  double local_1b8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  ulong local_188;
  ulong uStack_180;
  ulong local_178;
  Impl *local_168;
  void **ppvStack_160;
  double local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  int *local_118;
  double dStack_110;
  int *local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [8];
  undefined4 local_e0 [2];
  _Rb_tree_node_base *local_d8;
  _Rb_tree_node_base *local_d0;
  _Rb_tree_node_base *local_c8;
  undefined8 local_c0;
  int **local_b8;
  ulong uStack_b0;
  _Rb_tree_node *local_a8;
  _Rb_tree_node *p_Stack_a0;
  _Rb_tree_node *local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  code *local_78;
  code *pcStack_70;
  undefined1 local_68 [16];
  code *local_58;
  code *pcStack_50;
  long local_40;
  
  uVar32 = *(undefined8 *)(this + 0x68);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar13 = *(long *)(this + 0xb0);
  *(undefined8 *)(this + 0xb0) = 0;
  if (lVar13 != 0) {
    uVar21 = 0;
    if (*(void **)(this + 0xa8) != (void *)0x0) {
      free(*(void **)(this + 0xa8));
      uVar21 = *(undefined8 *)(this + 0xb0);
    }
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined8 *)(this + 0xb8) = uVar21;
  }
  __nmemb = (size_t)(int)uVar32;
  if (__nmemb == 0) {
    local_248 = (void *)0x0;
    pvVar19 = (void *)0x0;
    local_238 = 0;
  }
  else {
    pvVar19 = malloc(__nmemb << 5);
    local_248 = calloc(__nmemb,1);
    local_238 = __nmemb;
  }
  local_240 = __nmemb;
  VertHalfedge();
  FlatFaces();
  VertFlatFace((Vec *)local_1e8);
  puVar17 = *(undefined8 **)(this + 0x78);
  local_2a8 = (undefined8 *)0x0;
  if (*(long *)(this + 0x80) != 0) {
    sVar41 = *(long *)(this + 0x80) * 0x18;
    local_2a8 = (undefined8 *)malloc(sVar41);
    if ((long)sVar41 < 0x19) {
      if (sVar41 == 0x18) {
        uVar21 = puVar17[1];
        uVar32 = puVar17[2];
        *local_2a8 = *puVar17;
        local_2a8[1] = uVar21;
        local_2a8[2] = uVar32;
      }
    }
    else {
      memcpy(local_2a8,puVar17,sVar41);
    }
  }
  lVar13 = *(long *)(this + 0x50);
  if (lVar13 != 0) {
    puVar17 = local_2a8;
    piVar25 = local_1e8[0];
    do {
      if (-1 < *piVar25) {
        puVar2 = (undefined8 *)(*(long *)(this + 0x90) + (long)*piVar25 * 0x18);
        uVar32 = *puVar2;
        uVar21 = puVar2[1];
        puVar17[2] = puVar2[2];
        *puVar17 = uVar32;
        puVar17[1] = uVar21;
      }
      piVar25 = piVar25 + 1;
      puVar17 = puVar17 + 3;
    } while (local_1e8[0] + lVar13 != piVar25);
  }
  sVar41 = 0;
  if (__nmemb != 0) {
    do {
      iVar40 = (int)sVar41;
      cVar12 = IsInsideQuad(this,iVar40);
      uVar32 = __LC19;
      uVar21 = _LC29;
      uVar47 = extraout_XMM1_Qa;
      uVar49 = extraout_XMM1_Qb;
      if (cVar12 == '\0') {
        TangentFromNormal((vec *)&local_148,(int)this);
        uVar32 = local_138;
        uVar21 = uStack_130;
        uVar47 = local_148;
        uVar49 = uStack_140;
      }
      sVar41 = sVar41 + 1;
      puVar17 = (undefined8 *)((long)pvVar19 + (long)iVar40 * 0x20);
      *puVar17 = uVar47;
      puVar17[1] = uVar49;
      puVar17[2] = uVar32;
      puVar17[3] = uVar21;
    } while (__nmemb != sVar41);
  }
  __ptr = *(void **)(this + 0xa8);
  uVar39 = 0;
  *(void **)(this + 0xa8) = pvVar19;
  *(size_t *)(this + 0xb0) = __nmemb;
  *(size_t *)(this + 0xb8) = __nmemb;
  if (2 < *(ulong *)(this + 0x68)) {
    uVar32 = _LC9;
    do {
      if (*(char *)((long)local_208[0] + uVar39) != '\0') {
        local_68._8_4_ = 2;
        local_68._0_8_ = uVar32;
        piVar25 = (int *)local_68;
        do {
          ppiVar26 = (int **)((long)*piVar25 + uVar39 * 3);
          lVar13 = (long)(*(int *)(*(long *)(this + 0x60) + (long)ppiVar26 * 0xc + 8) / 3);
          if (*(char *)((long)local_208[0] + lVar13) == '\0') {
LAB_00108c7b:
            local_b8 = ppiVar26;
            plVar27 = *(long **)(param_2 + 8);
            uStack_b0 = 0;
            if (plVar27 == *(long **)(param_2 + 0x10)) {
              std::vector<manifold::Smoothness,std::allocator<manifold::Smoothness>>::
              _M_realloc_insert<manifold::Smoothness>(param_2,plVar27,&local_b8);
              uVar32 = _LC9;
            }
            else {
              *plVar27 = (long)ppiVar26;
              plVar27[1] = 0;
              *(long **)(param_2 + 8) = plVar27 + 2;
            }
          }
          else {
            piVar3 = (int *)(*(long *)(this + 0x110) + uVar39 * 0x10);
            piVar28 = (int *)(*(long *)(this + 0x110) + lVar13 * 0x10);
            if ((*piVar3 != *piVar28) || (piVar3[3] != piVar28[3])) goto LAB_00108c7b;
          }
          piVar25 = piVar25 + 1;
        } while ((int *)(local_68 + 0xc) != piVar25);
      }
      uVar39 = uVar39 + 1;
    } while (uVar39 < *(ulong *)(this + 0x68) / 3);
  }
  plVar27 = *(long **)param_2;
  plVar7 = *(long **)(param_2 + 8);
  local_e0[0] = 0;
  local_d8 = (_Rb_tree_node_base *)0x0;
  local_c0 = 0;
  dVar50 = _LC3;
  local_d0 = (_Rb_tree_node_base *)local_e0;
  local_c8 = (_Rb_tree_node_base *)local_e0;
  if (plVar7 == plVar27) {
    local_98 = (_Rb_tree_node *)&uStack_b0;
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
LAB_00109b52:
    local_90 = 0;
    local_a8 = (_Rb_tree_node *)0x0;
    p_Stack_a0 = local_98;
  }
  else {
    do {
      while (dVar45 = (double)plVar27[1], dVar50 <= dVar45) {
joined_r0x001099ee:
        plVar27 = plVar27 + 2;
        if (plVar7 == plVar27) goto LAB_00108e6d;
      }
      lVar13 = *plVar27;
      piVar25 = (int *)(*(long *)(this + 0x60) + lVar13 * 0xc);
      iVar40 = *piVar25;
      iVar38 = piVar25[1];
      iVar6 = piVar25[2];
      iVar23 = (int)lVar13;
      if (iVar38 <= iVar40) {
        iVar23 = iVar6;
      }
      local_108 = (int *)CONCAT44(local_108._4_4_,iVar23);
      p_Var15 = local_d8;
      p_Var22 = (_Rb_tree_node_base *)local_e0;
      p_Var30 = (_Rb_tree_node_base *)local_e0;
      if (local_d8 == (_Rb_tree_node_base *)0x0) {
LAB_0010986e:
        local_b8 = &local_108;
        p_Var22 = (_Rb_tree_node_base *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>,std::_Select1st<std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>>,std::less<int>,std::allocator<std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>>>
                  ::
                  _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
                            (local_e8,p_Var22,&local_b8);
        dVar50 = _LC3;
LAB_00108e42:
        *(long *)(p_Var22 + 0x28) = lVar13;
        *(long *)(p_Var22 + 0x38) = (long)iVar6;
        *(double *)(p_Var22 + 0x30) = dVar45;
        *(double *)(p_Var22 + 0x40) = dVar50;
        if (iVar40 < iVar38) goto joined_r0x001099ee;
        p_Var22 = (_Rb_tree_node_base *)local_e0;
        p_Var15 = (_Rb_tree_node_base *)local_e0;
        if (local_d8 == (_Rb_tree_node_base *)0x0) {
LAB_00109aa3:
          local_b8 = &local_108;
          p_Var22 = (_Rb_tree_node_base *)
                    std::
                    _Rb_tree<int,std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>,std::_Select1st<std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>>,std::less<int>,std::allocator<std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>>>
                    ::
                    _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
                              (local_e8,p_Var22);
          if (local_d8 != (_Rb_tree_node_base *)0x0) {
            p_Var30 = local_d8;
            dVar50 = _LC3;
            iVar40 = (int)local_108;
            goto LAB_00109968;
          }
LAB_001099a3:
          local_b8 = &local_108;
          p_Var15 = (_Rb_tree_node_base *)
                    std::
                    _Rb_tree<int,std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>,std::_Select1st<std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>>,std::less<int>,std::allocator<std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>>>
                    ::
                    _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
                              (local_e8,p_Var15,&local_b8);
          dVar50 = _LC3;
        }
        else {
          p_Var30 = local_d8;
          do {
            while( true ) {
              p_Var20 = p_Var30;
              if (*(int *)(p_Var20 + 0x20) < (int)local_108) break;
              p_Var30 = *(_Rb_tree_node_base **)(p_Var20 + 0x10);
              p_Var22 = p_Var20;
              if (*(_Rb_tree_node_base **)(p_Var20 + 0x10) == (_Rb_tree_node_base *)0x0)
              goto LAB_00109940;
            }
            p_Var30 = *(_Rb_tree_node_base **)(p_Var20 + 0x18);
          } while (*(_Rb_tree_node_base **)(p_Var20 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_00109940:
          if ((p_Var22 == (_Rb_tree_node_base *)local_e0) ||
             (p_Var30 = local_d8, iVar40 = (int)local_108, (int)local_108 < *(int *)(p_Var22 + 0x20)
             )) goto LAB_00109aa3;
LAB_00109968:
          do {
            while( true ) {
              p_Var20 = p_Var30;
              if (*(int *)(p_Var20 + 0x20) < iVar40) break;
              p_Var30 = *(_Rb_tree_node_base **)(p_Var20 + 0x10);
              p_Var15 = p_Var20;
              if (*(_Rb_tree_node_base **)(p_Var20 + 0x10) == (_Rb_tree_node_base *)0x0)
              goto LAB_00109980;
            }
            p_Var30 = *(_Rb_tree_node_base **)(p_Var20 + 0x18);
          } while (*(_Rb_tree_node_base **)(p_Var20 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_00109980:
          if ((p_Var15 == (_Rb_tree_node_base *)local_e0) || (iVar40 < *(int *)(p_Var15 + 0x20)))
          goto LAB_001099a3;
        }
        uVar21 = *(undefined8 *)(p_Var15 + 0x28);
        uVar32 = *(undefined8 *)(p_Var15 + 0x30);
        uVar47 = *(undefined8 *)(p_Var22 + 0x40);
        *(undefined8 *)(p_Var15 + 0x28) = *(undefined8 *)(p_Var22 + 0x38);
        *(undefined8 *)(p_Var15 + 0x30) = uVar47;
        *(undefined8 *)(p_Var22 + 0x38) = uVar21;
        *(undefined8 *)(p_Var22 + 0x40) = uVar32;
        goto joined_r0x001099ee;
      }
      do {
        while( true ) {
          p_Var20 = p_Var15;
          if (*(int *)(p_Var20 + 0x20) < iVar23) break;
          p_Var15 = *(_Rb_tree_node_base **)(p_Var20 + 0x10);
          p_Var30 = p_Var20;
          if (*(_Rb_tree_node_base **)(p_Var20 + 0x10) == (_Rb_tree_node_base *)0x0)
          goto LAB_00108df0;
        }
        p_Var15 = *(_Rb_tree_node_base **)(p_Var20 + 0x18);
      } while (*(_Rb_tree_node_base **)(p_Var20 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_00108df0:
      p_Var15 = local_d8;
      if ((p_Var30 == (_Rb_tree_node_base *)local_e0) || (iVar23 < *(int *)(p_Var30 + 0x20))) {
        do {
          while( true ) {
            p_Var30 = p_Var15;
            if (*(int *)(p_Var30 + 0x20) < iVar23) break;
            p_Var15 = *(_Rb_tree_node_base **)(p_Var30 + 0x10);
            p_Var22 = p_Var30;
            if (*(_Rb_tree_node_base **)(p_Var30 + 0x10) == (_Rb_tree_node_base *)0x0)
            goto LAB_00108e30;
          }
          p_Var15 = *(_Rb_tree_node_base **)(p_Var30 + 0x18);
        } while (*(_Rb_tree_node_base **)(p_Var30 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_00108e30:
        if ((p_Var22 == (_Rb_tree_node_base *)local_e0) || (iVar23 < *(int *)(p_Var22 + 0x20)))
        goto LAB_0010986e;
        goto LAB_00108e42;
      }
      if (iVar40 < iVar38) {
        do {
          while( true ) {
            p_Var30 = p_Var15;
            if (*(int *)(p_Var30 + 0x20) < iVar23) break;
            p_Var15 = *(_Rb_tree_node_base **)(p_Var30 + 0x10);
            p_Var22 = p_Var30;
            if (*(_Rb_tree_node_base **)(p_Var30 + 0x10) == (_Rb_tree_node_base *)0x0)
            goto LAB_00109400;
          }
          p_Var15 = *(_Rb_tree_node_base **)(p_Var30 + 0x18);
        } while (*(_Rb_tree_node_base **)(p_Var30 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_00109400:
        if ((p_Var22 == (_Rb_tree_node_base *)local_e0) || (iVar23 < *(int *)(p_Var22 + 0x20))) {
          local_b8 = &local_108;
          p_Var22 = (_Rb_tree_node_base *)
                    std::
                    _Rb_tree<int,std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>,std::_Select1st<std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>>,std::less<int>,std::allocator<std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>>>
                    ::
                    _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
                              (local_e8,p_Var22,&local_b8);
          dVar50 = _LC3;
        }
        p_Var22 = p_Var22 + 0x28;
      }
      else {
        do {
          while( true ) {
            p_Var30 = p_Var15;
            if (*(int *)(p_Var30 + 0x20) < iVar23) break;
            p_Var15 = *(_Rb_tree_node_base **)(p_Var30 + 0x10);
            p_Var22 = p_Var30;
            if (*(_Rb_tree_node_base **)(p_Var30 + 0x10) == (_Rb_tree_node_base *)0x0)
            goto LAB_00109480;
          }
          p_Var15 = *(_Rb_tree_node_base **)(p_Var30 + 0x18);
        } while (*(_Rb_tree_node_base **)(p_Var30 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_00109480:
        if ((p_Var22 == (_Rb_tree_node_base *)local_e0) || (iVar23 < *(int *)(p_Var22 + 0x20))) {
          local_b8 = &local_108;
          p_Var22 = (_Rb_tree_node_base *)
                    std::
                    _Rb_tree<int,std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>,std::_Select1st<std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>>,std::less<int>,std::allocator<std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>>>
                    ::
                    _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
                              (local_e8,p_Var22,&local_b8);
          dVar50 = _LC3;
        }
        p_Var22 = p_Var22 + 0x38;
      }
      plVar27 = plVar27 + 2;
      dVar10 = *(double *)(p_Var22 + 8);
      if (dVar45 <= *(double *)(p_Var22 + 8)) {
        dVar10 = dVar45;
      }
      *(double *)(p_Var22 + 8) = dVar10;
    } while (plVar7 != plVar27);
LAB_00108e6d:
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
    local_a8 = (_Rb_tree_node *)0x0;
    p_Stack_a0 = (_Rb_tree_node *)&uStack_b0;
    local_98 = (_Rb_tree_node *)&uStack_b0;
    local_90 = 0;
    if (local_d0 == (_Rb_tree_node_base *)local_e0) goto LAB_00109b52;
    p_Var15 = local_d0;
    do {
      local_128 = *(double *)(p_Var15 + 0x28);
      dStack_120 = *(double *)(p_Var15 + 0x30);
      local_118 = *(int **)(p_Var15 + 0x38);
      dStack_110 = *(double *)(p_Var15 + 0x40);
      piVar25 = (int *)(*(long *)(this + 0x60) + *(long *)(p_Var15 + 0x28) * 0xc);
      p_Var14 = (_Rb_tree_node *)&uStack_b0;
      if (local_a8 == (_Rb_tree_node *)0x0) {
LAB_00108f3b:
        local_108 = piVar25;
        p_Var14 = (_Rb_tree_node *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>>,std::_Select1st<std::pair<int_const,std::vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>>>>
                  ::
                  _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
                            (&local_b8,p_Var14,&local_108);
      }
      else {
        iVar40 = *piVar25;
        p_Var42 = local_a8;
        do {
          while( true ) {
            p_Var37 = p_Var42 + 0x10;
            p_Var16 = p_Var42 + 0x18;
            if (*(int *)(p_Var42 + 0x20) < iVar40) break;
            p_Var14 = p_Var42;
            p_Var42 = *(_Rb_tree_node **)p_Var37;
            if (*(_Rb_tree_node **)p_Var37 == (_Rb_tree_node *)0x0) goto LAB_00108f31;
          }
          p_Var42 = *(_Rb_tree_node **)p_Var16;
        } while (*(_Rb_tree_node **)p_Var16 != (_Rb_tree_node *)0x0);
LAB_00108f31:
        if ((p_Var14 == (_Rb_tree_node *)&uStack_b0) || (iVar40 < *(int *)(p_Var14 + 0x20)))
        goto LAB_00108f3b;
      }
      pdVar8 = *(double **)(p_Var14 + 0x30);
      if (pdVar8 == *(double **)(p_Var14 + 0x38)) {
        std::
        vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>
        ::_M_realloc_insert<std::pair<manifold::Smoothness,manifold::Smoothness>const&>
                  ((vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>
                    *)(p_Var14 + 0x28),pdVar8,&local_128);
      }
      else {
        *pdVar8 = local_128;
        pdVar8[1] = dStack_120;
        pdVar8[2] = (double)local_118;
        pdVar8[3] = dStack_110;
        *(double **)(p_Var14 + 0x30) = pdVar8 + 4;
      }
      local_108 = (int *)(*(long *)(this + 0x60) + (long)local_118 * 0xc);
      p_Var14 = (_Rb_tree_node *)&uStack_b0;
      if (local_a8 == (_Rb_tree_node *)0x0) {
LAB_00108fe2:
        p_Var14 = (_Rb_tree_node *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>>,std::_Select1st<std::pair<int_const,std::vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>>>>
                  ::
                  _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int_const&>,std::tuple<>>
                            (&local_b8,p_Var14,&local_108);
      }
      else {
        p_Var42 = local_a8;
        do {
          while( true ) {
            p_Var37 = p_Var42;
            if (*(int *)(p_Var37 + 0x20) < *local_108) break;
            p_Var42 = *(_Rb_tree_node **)(p_Var37 + 0x10);
            p_Var14 = p_Var37;
            if (*(_Rb_tree_node **)(p_Var37 + 0x10) == (_Rb_tree_node *)0x0) goto LAB_00108fd8;
          }
          p_Var42 = *(_Rb_tree_node **)(p_Var37 + 0x18);
        } while (*(_Rb_tree_node **)(p_Var37 + 0x18) != (_Rb_tree_node *)0x0);
LAB_00108fd8:
        if ((p_Var14 == (_Rb_tree_node *)&uStack_b0) || (*local_108 < *(int *)(p_Var14 + 0x20)))
        goto LAB_00108fe2;
      }
      plVar27 = *(long **)(p_Var14 + 0x30);
      local_108 = local_118;
      dStack_100 = dStack_110;
      local_f8 = local_128;
      dStack_f0 = dStack_120;
      if (plVar27 == *(long **)(p_Var14 + 0x38)) {
        std::
        vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>
        ::_M_realloc_insert<std::pair<manifold::Smoothness,manifold::Smoothness>>
                  ((vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>
                    *)(p_Var14 + 0x28),plVar27,&local_108);
      }
      else {
        *plVar27 = (long)local_118;
        plVar27[1] = (long)dStack_110;
        plVar27[2] = (long)local_128;
        plVar27[3] = (long)dStack_120;
        *(long **)(p_Var14 + 0x30) = plVar27 + 4;
      }
      p_Var15 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var15);
    } while (p_Var15 != (_Rb_tree_node_base *)local_e0);
  }
  iVar40 = *(int *)(this + 0x50);
  p_Var14 = local_a8;
  if ((long)iVar40 != 0) {
    lVar13 = 0;
    do {
      iVar38 = (int)lVar13;
      p_Var42 = p_Var14;
      p_Var37 = (_Rb_tree_node *)&uStack_b0;
      if (p_Var14 == (_Rb_tree_node *)0x0) {
LAB_001090de:
        *(undefined1 *)((long)local_248 + (long)*(int *)((long)local_228 + (long)iVar38 * 4)) = 1;
      }
      else {
        do {
          while( true ) {
            p_Var16 = p_Var42;
            if (*(int *)(p_Var16 + 0x20) < iVar38) break;
            p_Var42 = *(_Rb_tree_node **)(p_Var16 + 0x10);
            p_Var37 = p_Var16;
            if (*(_Rb_tree_node **)(p_Var16 + 0x10) == (_Rb_tree_node *)0x0) goto LAB_001090c9;
          }
          p_Var42 = *(_Rb_tree_node **)(p_Var16 + 0x18);
        } while (*(_Rb_tree_node **)(p_Var16 + 0x18) != (_Rb_tree_node *)0x0);
LAB_001090c9:
        if ((p_Var37 == (_Rb_tree_node *)&uStack_b0) || (iVar38 < *(int *)(p_Var37 + 0x20)))
        goto LAB_001090de;
        puVar24 = *(ulong **)(p_Var37 + 0x28);
        lVar35 = (long)*(ulong **)(p_Var37 + 0x30) - (long)puVar24;
        if (lVar35 != 0x20) {
          if (lVar35 == 0x40) {
            uVar39 = *puVar24;
            lVar35 = *(long *)(this + 0xa8);
            local_2c0 = (int)puVar24[4];
            lVar36 = (long)local_2c0;
            uVar43 = (uint)uVar39;
            lVar18 = (long)(int)uVar43;
            *(undefined1 *)((long)local_248 + lVar18) = 1;
            lVar33 = *(long *)(this + 0x60);
            *(undefined1 *)((long)local_248 + lVar36) = 1;
            lVar29 = *(long *)(this + 0x48);
            pdVar34 = (double *)(lVar36 * 0x20 + lVar35);
            pdVar31 = (double *)(lVar35 + lVar18 * 0x20);
            piVar25 = (int *)(lVar33 + lVar18 * 0xc);
            dVar48 = pdVar31[2] - pdVar34[2];
            auVar51._0_8_ = *pdVar31 - *pdVar34;
            auVar51._8_8_ = pdVar31[1] - pdVar34[1];
            pdVar8 = (double *)(lVar29 + (long)*piVar25 * 0x18);
            local_1a8 = *pdVar8;
            dStack_1a0 = pdVar8[1];
            pdVar4 = (double *)(lVar29 + (long)piVar25[1] * 0x18);
            dVar46 = SQRT(auVar51._0_8_ * auVar51._0_8_ + 0.0 + auVar51._8_8_ * auVar51._8_8_ +
                          dVar48 * dVar48);
            auVar9._8_8_ = dVar46;
            auVar9._0_8_ = dVar46;
            local_1c8 = divpd(auVar51,auVar9);
            dVar45 = *pdVar8;
            dVar10 = pdVar8[1];
            dVar50 = pdVar8[2];
            local_158 = pdVar4[2] - dVar50;
            uVar44 = local_1c8._0_8_;
            uVar52 = local_1c8._8_8_;
            local_168 = (Impl *)(*pdVar4 - dVar45);
            ppvStack_160 = (void **)(pdVar4[1] - dVar10);
            local_1b8 = dVar48 / dVar46;
            local_198 = dVar50;
            (anonymous_namespace)::CircularTangent
                      ((_anonymous_namespace_ *)&local_108,local_1c8,(vec *)&local_168);
            iVar38 = *(int *)(lVar33 + 4 + lVar36 * 0xc);
            *pdVar31 = (double)local_108;
            pdVar31[1] = dStack_100;
            local_178 = (ulong)(dVar48 / dVar46) ^ _LC5;
            pdVar31[2] = local_f8;
            pdVar31[3] = dStack_f0;
            pdVar8 = (double *)(lVar29 + (long)iVar38 * 0x18);
            local_158 = pdVar8[2] - dVar50;
            local_168 = (Impl *)(*pdVar8 - dVar45);
            ppvStack_160 = (void **)(pdVar8[1] - dVar10);
            local_188 = uVar44 ^ _LC5;
            uStack_180 = uVar52 ^ _LC5;
            (anonymous_namespace)::CircularTangent
                      ((_anonymous_namespace_ *)&local_128,(vec *)&local_188,(vec *)&local_168);
            local_168 = (Impl *)(((double)puVar24[3] + (double)puVar24[5]) * _LC7);
            *pdVar34 = local_128;
            pdVar34[1] = dStack_120;
            pdVar34[2] = (double)local_118;
            pdVar34[3] = dStack_110;
            local_58 = (code *)0x0;
            pcStack_50 = (code *)0x0;
            local_68 = (undefined1  [16])0x0;
            puVar17 = (undefined8 *)operator_new(0x20);
            puVar17[1] = &local_168;
            uVar39 = uVar39 & 0xffffffff;
            *(uint *)(puVar17 + 3) = uVar43;
            *puVar17 = this;
            puVar17[2] = p_Var37 + 0x28;
            *(int *)((long)puVar17 + 0x1c) = local_2c0;
            local_68._0_8_ = puVar17;
            local_58 = std::
                       _Function_handler<void(int),manifold::Manifold::Impl::CreateTangents(std::vector<manifold::Smoothness,std::allocator<manifold::Smoothness>>)::{lambda(int)#2}::operator()(int)const::{lambda(int)#1}>
                       ::_M_manager;
            pcStack_50 = std::
                         _Function_handler<void(int),manifold::Manifold::Impl::CreateTangents(std::vector<manifold::Smoothness,std::allocator<manifold::Smoothness>>)::{lambda(int)#2}::operator()(int)const::{lambda(int)#1}>
                         ::_M_invoke;
            do {
              iVar38 = *(int *)(*(long *)(this + 0x60) + (long)(int)uVar39 * 0xc + 8);
              uVar1 = iVar38 + 1;
              if (uVar1 * -0x55555555 + 0x2aaaaaaa < 0x55555555) {
                uVar1 = iVar38 - 2;
              }
              uVar39 = (ulong)uVar1;
              local_24c = uVar1;
              if (local_58 == (code *)0x0) goto LAB_00109b89;
              puVar5 = local_68;
              (*pcStack_50)(puVar5,&local_24c);
              pcVar11 = local_58;
            } while (uVar43 != uVar1);
          }
          else {
            dVar45 = 0.0;
            dVar50 = 0.0;
            for (; *(ulong **)(p_Var37 + 0x30) != puVar24; puVar24 = puVar24 + 4) {
              dVar50 = dVar50 + (double)puVar24[1] + (double)puVar24[3];
              dVar45 = dVar45 + (double)((double)puVar24[1] != 0.0) +
                       (double)((double)puVar24[3] != 0.0);
            }
            local_78 = (code *)0x0;
            local_88 = (undefined1  [16])0x0;
            pcStack_70 = (code *)0x0;
            puVar17 = (undefined8 *)operator_new(0x18);
            *puVar17 = this;
            puVar17[1] = local_208;
            local_88._0_8_ = puVar17;
            puVar17[2] = dVar50 / dVar45;
            local_78 = std::
                       _Function_handler<void(int),manifold::Manifold::Impl::CreateTangents(std::vector<manifold::Smoothness,std::allocator<manifold::Smoothness>>)::{lambda(int)#2}::operator()(int)const::{lambda(int)#2}>
                       ::_M_manager;
            pcStack_70 = std::
                         _Function_handler<void(int),manifold::Manifold::Impl::CreateTangents(std::vector<manifold::Smoothness,std::allocator<manifold::Smoothness>>)::{lambda(int)#2}::operator()(int)const::{lambda(int)#2}>
                         ::_M_invoke;
            uVar39 = **(ulong **)(p_Var37 + 0x28);
            uVar44 = uVar39 & 0xffffffff;
            do {
              iVar38 = *(int *)(*(long *)(this + 0x60) + (long)(int)uVar44 * 0xc + 8);
              uVar43 = iVar38 + 1;
              if (uVar43 * -0x55555555 + 0x2aaaaaaa < 0x55555555) {
                uVar43 = iVar38 - 2;
              }
              uVar44 = (ulong)uVar43;
              local_188 = CONCAT44(local_188._4_4_,uVar43);
              if (local_78 == (code *)0x0) goto LAB_00109b89;
              puVar5 = local_88;
              (*pcStack_70)(puVar5,&local_188);
              pcVar11 = local_78;
            } while ((uint)uVar39 != uVar43);
          }
          p_Var14 = local_a8;
          if (pcVar11 != (code *)0x0) {
            (*pcVar11)(puVar5,puVar5,3);
            p_Var14 = local_a8;
          }
        }
      }
      lVar13 = lVar13 + 1;
    } while (iVar40 != lVar13);
  }
  lVar35 = (long)*(int *)(this + 0xb0);
  lVar13 = 0;
  if (lVar35 != 0) {
    do {
      lVar33 = lVar13 + 1;
      LinearizeFlatTangents()::{lambda(int)#1}::operator()((_lambda_int__1_ *)this,(int)lVar13);
      lVar13 = lVar33;
    } while (lVar35 != lVar33);
  }
  lVar35 = (long)(int)local_240;
  ppvStack_160 = &local_248;
  lVar13 = 0;
  local_168 = this;
  if (lVar35 != 0) {
    do {
      lVar33 = lVar13 + 1;
      DistributeTangents(manifold::Vec<bool>const&)::{lambda(int)#1}::operator()
                ((_lambda_int__1_ *)&local_168,(int)lVar13);
      lVar13 = lVar33;
    } while (lVar35 != lVar33);
  }
  std::
  _Rb_tree<int,std::pair<int_const,std::vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>>,std::_Select1st<std::pair<int_const,std::vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>>>>
  ::_M_erase(p_Var14);
  std::
  _Rb_tree<int,std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>,std::_Select1st<std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>>,std::less<int>,std::allocator<std::pair<int_const,std::pair<manifold::Smoothness,manifold::Smoothness>>>>
  ::_M_erase((_Rb_tree_node *)local_d8);
  if (local_2a8 != (undefined8 *)0x0) {
    free(local_2a8);
  }
  if (local_1e8[0] != (int *)0x0) {
    free(local_1e8[0]);
  }
  if (local_208[0] != (void *)0x0) {
    free(local_208[0]);
  }
  if (local_228 != (void *)0x0) {
    free(local_228);
  }
  if (local_248 != (void *)0x0) {
    free(local_248);
  }
  if (__ptr == (void *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    free(__ptr);
    return;
  }
LAB_00109b8e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00109b89:
  std::__throw_bad_function_call();
  goto LAB_00109b8e;
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



/* linalg::vec<double, 3> linalg::qrot<double>(linalg::vec<double, 4> const&, linalg::vec<double, 3>
   const&) */

linalg * __thiscall linalg::qrot<double>(linalg *this,vec *param_1,vec *param_2)

{
  double dVar1;
  double dVar2;
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
  
  dVar7 = *(double *)(param_1 + 0x10);
  dVar2 = *(double *)(param_1 + 0x18);
  dVar3 = *(double *)param_1;
  dVar4 = *(double *)(param_1 + 8);
  dVar12 = dVar7 * dVar7;
  dVar11 = dVar2 * dVar2 - dVar3 * dVar3;
  dVar5 = *(double *)param_2;
  dVar6 = *(double *)(param_2 + 8);
  dVar13 = dVar4 * dVar4;
  dVar1 = *(double *)(param_2 + 0x10);
  dVar15 = dVar3 * dVar4 + dVar7 * dVar2;
  dVar8 = dVar3 * dVar4 - dVar7 * dVar2;
  dVar14 = dVar7 * dVar3 + dVar4 * dVar2;
  dVar10 = dVar7 * dVar4 - dVar3 * dVar2;
  dVar9 = dVar7 * dVar3 - dVar4 * dVar2;
  dVar7 = dVar7 * dVar4 + dVar3 * dVar2;
  *(double *)this =
       (((dVar2 * dVar2 + dVar3 * dVar3) - dVar13) - dVar12) * dVar5 + (dVar8 + dVar8) * dVar6 +
       (dVar14 + dVar14) * dVar1;
  *(double *)(this + 8) =
       (dVar15 + dVar15) * dVar5 + ((dVar11 + dVar13) - dVar12) * dVar6 + (dVar10 + dVar10) * dVar1;
  *(double *)(this + 0x10) =
       (dVar9 + dVar9) * dVar5 + (dVar7 + dVar7) * dVar6 + ((dVar11 - dVar13) + dVar12) * dVar1;
  return this;
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
LAB_00109f18:
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
        if (pIVar1 != (Impl *)&local_58) goto LAB_00109f18;
        if (puVar17 != (undefined8 *)0x0) {
          free(puVar17);
        }
        goto LAB_00109f20;
      }
      uVar6 = puVar5[1];
      *puVar17 = *puVar5;
      puVar17[1] = uVar6;
      puVar17[2] = puVar5[2];
    }
    else {
      puVar17 = (undefined8 *)memmove(puVar17,puVar5,sVar21);
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_00109f18;
    free(puVar17);
  }
LAB_00109f20:
  *(undefined8 *)(this + 0x60) = 0;
  pIVar1 = this + 0x60;
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  *(undefined1 (*) [16])(this + 0x68) = (undefined1  [16])0x0;
  lVar4 = *(long *)(param_1 + 0x68);
  local_58 = (undefined8 *)0x0;
  if (lVar4 == 0) {
    if (pIVar1 != (Impl *)&local_58) {
      puVar17 = (undefined8 *)0x0;
LAB_00109f63:
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
        if (pIVar1 != (Impl *)&local_58) goto LAB_00109f63;
        if (puVar17 != (undefined8 *)0x0) {
          free(puVar17);
        }
        goto LAB_00109f6b;
      }
      *puVar17 = *puVar5;
      *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar5 + 1);
    }
    else {
      puVar17 = (undefined8 *)memmove(puVar17,puVar5,sVar21);
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_00109f63;
    free(puVar17);
  }
LAB_00109f6b:
  *(undefined8 *)(this + 0x78) = 0;
  pIVar1 = this + 0x78;
  puVar5 = *(undefined8 **)(param_1 + 0x78);
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  lVar4 = *(long *)(param_1 + 0x80);
  local_58 = (undefined8 *)0x0;
  if (lVar4 == 0) {
    if (pIVar1 != (Impl *)&local_58) {
      puVar17 = (undefined8 *)0x0;
LAB_00109fb4:
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
        if (pIVar1 != (Impl *)&local_58) goto LAB_00109fb4;
        if (puVar17 != (undefined8 *)0x0) {
          free(puVar17);
        }
        goto LAB_00109fbf;
      }
      uVar6 = puVar5[1];
      *puVar17 = *puVar5;
      puVar17[1] = uVar6;
      puVar17[2] = puVar5[2];
    }
    else {
      puVar17 = (undefined8 *)memmove(puVar17,puVar5,sVar21);
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_00109fb4;
    free(puVar17);
  }
LAB_00109fbf:
  pIVar1 = this + 0x90;
  *(undefined8 *)(this + 0x90) = 0;
  puVar5 = *(undefined8 **)(param_1 + 0x90);
  *(undefined1 (*) [16])(this + 0x98) = (undefined1  [16])0x0;
  lVar4 = *(long *)(param_1 + 0x98);
  local_58 = (undefined8 *)0x0;
  if (lVar4 == 0) {
    if (pIVar1 != (Impl *)&local_58) {
      puVar17 = (undefined8 *)0x0;
LAB_0010a011:
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
        if (pIVar1 != (Impl *)&local_58) goto LAB_0010a011;
        if (puVar17 != (undefined8 *)0x0) {
          free(puVar17);
        }
        goto LAB_0010a01f;
      }
      uVar6 = puVar5[1];
      *puVar17 = *puVar5;
      puVar17[1] = uVar6;
      puVar17[2] = puVar5[2];
    }
    else {
      puVar17 = (undefined8 *)memmove(puVar17,puVar5,sVar21);
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_0010a011;
    free(puVar17);
  }
LAB_0010a01f:
  pIVar1 = this + 0xa8;
  *(undefined8 *)(this + 0xa8) = 0;
  puVar5 = *(undefined8 **)(param_1 + 0xa8);
  *(undefined1 (*) [16])(this + 0xb0) = (undefined1  [16])0x0;
  lVar4 = *(long *)(param_1 + 0xb0);
  local_58 = (undefined8 *)0x0;
  if (lVar4 == 0) {
    if (pIVar1 != (Impl *)&local_58) {
      puVar17 = (undefined8 *)0x0;
LAB_0010a071:
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
        if (pIVar1 != (Impl *)&local_58) goto LAB_0010a071;
        if (puVar17 != (undefined8 *)0x0) {
          free(puVar17);
        }
        goto LAB_0010a07f;
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
    if (pIVar1 != (Impl *)&local_58) goto LAB_0010a071;
    free(puVar17);
  }
LAB_0010a07f:
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
LAB_0010a0df:
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
        if (pIVar1 != (Impl *)&local_58) goto LAB_0010a0df;
        if (puVar17 != (undefined8 *)0x0) {
          free(puVar17);
          p_Var18 = extraout_RDX_02;
        }
        goto LAB_0010a0ed;
      }
      *puVar17 = *puVar5;
    }
    else {
      puVar17 = (undefined8 *)memmove(puVar17,puVar5,sVar21);
      p_Var18 = extraout_RDX_00;
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_0010a0df;
    free(puVar17);
    p_Var18 = extraout_RDX_01;
  }
LAB_0010a0ed:
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
LAB_0010a1da:
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
        if (pIVar1 != (Impl *)&local_58) goto LAB_0010a1da;
        if (puVar17 != (undefined8 *)0x0) {
          free(puVar17);
        }
        goto LAB_0010a1e8;
      }
      uVar6 = puVar5[1];
      *puVar17 = *puVar5;
      puVar17[1] = uVar6;
    }
    else {
      puVar17 = (undefined8 *)memmove(puVar17,puVar5,sVar21);
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_0010a1da;
    free(puVar17);
  }
LAB_0010a1e8:
  pIVar1 = this + 0x128;
  *(undefined8 *)(this + 0x128) = 0;
  puVar5 = *(undefined8 **)(param_1 + 0x128);
  *(undefined1 (*) [16])(this + 0x130) = (undefined1  [16])0x0;
  lVar4 = *(long *)(param_1 + 0x130);
  local_58 = (undefined8 *)0x0;
  if (lVar4 == 0) {
    if (pIVar1 != (Impl *)&local_58) {
      puVar17 = (undefined8 *)0x0;
LAB_0010a23a:
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
        if (pIVar1 != (Impl *)&local_58) goto LAB_0010a23a;
        if (puVar17 != (undefined8 *)0x0) {
          free(puVar17);
        }
        goto LAB_0010a248;
      }
      *puVar17 = *puVar5;
      *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar5 + 1);
    }
    else {
      puVar17 = (undefined8 *)memmove(puVar17,puVar5,sVar21);
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_0010a23a;
    free(puVar17);
  }
LAB_0010a248:
  pIVar1 = this + 0x140;
  *(undefined8 *)(this + 0x140) = 0;
  puVar5 = *(undefined8 **)(param_1 + 0x140);
  *(undefined1 (*) [16])(this + 0x148) = (undefined1  [16])0x0;
  lVar4 = *(long *)(param_1 + 0x148);
  local_58 = (undefined8 *)0x0;
  if (lVar4 == 0) {
    if (pIVar1 != (Impl *)&local_58) {
      puVar17 = (undefined8 *)0x0;
LAB_0010a29a:
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
        if (pIVar1 != (Impl *)&local_58) goto LAB_0010a29a;
        if (puVar17 != (undefined8 *)0x0) {
          free(puVar17);
        }
        goto LAB_0010a2a8;
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
    if (pIVar1 != (Impl *)&local_58) goto LAB_0010a29a;
    free(puVar17);
  }
LAB_0010a2a8:
  pIVar1 = this + 0x158;
  *(undefined8 *)(this + 0x158) = 0;
  __src = *(undefined4 **)(param_1 + 0x158);
  *(undefined1 (*) [16])(this + 0x160) = (undefined1  [16])0x0;
  lVar4 = *(long *)(param_1 + 0x160);
  local_58 = (undefined8 *)0x0;
  if (lVar4 == 0) {
    if (pIVar1 != (Impl *)&local_58) {
      __ptr = (undefined4 *)0x0;
LAB_0010a2fa:
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
        if (pIVar1 != (Impl *)&local_58) goto LAB_0010a2fa;
        if (__ptr != (undefined4 *)0x0) {
          free(__ptr);
        }
        goto LAB_0010a308;
      }
      *__ptr = *__src;
    }
    else {
      __ptr = (undefined4 *)memmove(__ptr,__src,sVar21);
    }
    if (pIVar1 != (Impl *)&local_58) goto LAB_0010a2fa;
    free(__ptr);
  }
LAB_0010a308:
  pIVar1 = this + 0x170;
  *(undefined8 *)(this + 0x170) = 0;
  lVar4 = *(long *)(param_1 + 0x170);
  *(undefined1 (*) [16])(this + 0x178) = (undefined1  [16])0x0;
  lVar8 = *(long *)(param_1 + 0x178);
  local_58 = (undefined8 *)0x0;
  local_50 = lVar8;
  lStack_48 = lVar8;
  if (lVar8 == 0) {
    if (pIVar1 != (Impl *)&local_58) goto LAB_0010a35a;
  }
  else {
    sVar21 = lVar8 * 8;
    local_58 = (undefined8 *)malloc(sVar21);
    uVar20 = 0;
    if ((long)sVar21 < 1) {
      if (pIVar1 == (Impl *)&local_58) {
        if (local_58 == (undefined8 *)0x0) goto LAB_0010a368;
        goto LAB_0010a493;
      }
    }
    else {
      do {
        *(undefined8 *)((long)local_58 + uVar20 * 8) = *(undefined8 *)(lVar4 + uVar20 * 8);
        uVar20 = uVar20 + 1;
      } while (uVar20 < (ulong)((long)sVar21 >> 3));
      if (pIVar1 == (Impl *)&local_58) {
LAB_0010a493:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          free(local_58);
          return;
        }
        goto LAB_0010a9ad;
      }
    }
LAB_0010a35a:
    *(undefined8 **)(this + 0x170) = local_58;
    *(long *)(this + 0x178) = lVar8;
    *(long *)(this + 0x180) = lVar8;
  }
LAB_0010a368:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010a9ad:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* linalg::vec<double, 4> linalg::rotation_quat<double>(linalg::mat<double, 3, 3> const&) */

linalg * __thiscall linalg::rotation_quat<double>(linalg *this,mat *param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  ulong uVar10;
  double dVar11;
  undefined1 auVar12 [16];
  ulong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double local_98 [17];
  long local_10;
  
  uVar2 = _LC5;
  dVar14 = *(double *)(param_1 + 0x40);
  dVar17 = *(double *)param_1;
  dVar15 = *(double *)(param_1 + 0x20);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = 0;
  local_98[3] = *(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x38);
  local_98[6] = *(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x38);
  dVar5 = (dVar14 - dVar17) - dVar15;
  local_98[0] = _LC3;
  dVar11 = (dVar17 - dVar15) - dVar14;
  dVar7 = (dVar15 - dVar17) - dVar14;
  local_98[5] = _LC3;
  local_98[0xb] = *(double *)(param_1 + 8) - *(double *)(param_1 + 0x18);
  dVar14 = dVar15 + dVar17 + dVar14;
  local_98[1] = *(double *)(param_1 + 8) + *(double *)(param_1 + 0x18);
  local_98[9] = local_98[6];
  local_98[7] = *(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x10);
  local_98[10] = _LC3;
  local_98[2] = *(double *)(param_1 + 0x30) + *(double *)(param_1 + 0x10);
  local_98[4] = local_98[1];
  local_98[8] = local_98[2];
  local_98[0xc] = local_98[3];
  local_98[0xd] = local_98[7];
  local_98[0xe] = local_98[0xb];
  local_98[0xf] = _LC3;
  if (dVar11 < dVar7) {
    if (dVar5 <= dVar7) {
      iVar3 = 1;
      dVar17 = dVar7;
      goto LAB_0010aaeb;
    }
  }
  else {
    dVar17 = dVar11;
    if (dVar5 <= dVar11) goto LAB_0010aaeb;
  }
  iVar3 = 2;
  dVar17 = dVar5;
LAB_0010aaeb:
  dVar15 = dVar14 + _LC3;
  if (dVar17 < dVar14) {
    iVar3 = 3;
  }
  if (dVar11 + _LC3 <= 0.0) {
    dVar17 = 0.0;
    dVar14 = 0.0;
  }
  else {
    dVar14 = SQRT(dVar11 + _LC3);
    dVar17 = dVar14 * dVar14 + 0.0;
  }
  if (dVar7 + _LC3 <= 0.0) {
    dVar7 = 0.0;
  }
  else {
    dVar7 = SQRT(dVar7 + _LC3);
    dVar17 = dVar17 + dVar7 * dVar7;
  }
  if (dVar5 + _LC3 <= 0.0) {
    dVar11 = 0.0;
    dVar5 = 0.0;
  }
  else {
    dVar5 = SQRT(dVar5 + _LC3);
    dVar11 = dVar5 * dVar5;
  }
  if (dVar15 <= 0.0) {
    dVar16 = 0.0;
    dVar15 = 0.0;
  }
  else {
    dVar15 = SQRT(dVar15);
    dVar16 = dVar15 * dVar15;
  }
  auVar6._8_8_ = dVar15;
  auVar6._0_8_ = dVar5;
  lVar4 = (long)iVar3;
  auVar12._8_8_ = dVar7;
  auVar12._0_8_ = dVar14;
  auVar9._0_8_ = SQRT(dVar11 + dVar17 + dVar16);
  auVar9._8_8_ = auVar9._0_8_;
  auVar12 = divpd(auVar12,auVar9);
  auVar6 = divpd(auVar6,auVar9);
  uVar1 = ~_LC5;
  uVar13 = (ulong)local_98[lVar4 * 4 + 1] & _LC5;
  uVar8 = _LC5 & (ulong)local_98[lVar4 * 4 + 2];
  uVar10 = _LC5 & (ulong)local_98[lVar4 * 4 + 3];
  *(ulong *)this = ~_LC5 & auVar12._0_8_ | (ulong)local_98[lVar4 * 4] & _LC5;
  *(ulong *)(this + 8) = uVar1 & auVar12._8_8_ | uVar13;
  *(ulong *)(this + 0x10) = ~uVar2 & auVar6._0_8_ | uVar8;
  *(ulong *)(this + 0x18) = ~uVar2 & auVar6._8_8_ | uVar10;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* linalg::vec<double, 4> linalg::rotation_quat<double>(linalg::vec<double, 3> const&,
   linalg::vec<double, 3> const&) */

void __thiscall linalg::rotation_quat<double>(linalg *this,vec *param_1,vec *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  
  dVar9 = *(double *)param_1;
  dVar12 = *(double *)param_2;
  dVar13 = *(double *)(param_2 + 8);
  dVar1 = *(double *)(param_1 + 8);
  dVar4 = *(double *)(param_2 + 8);
  dVar5 = *(double *)(param_2 + 0x10);
  dVar6 = *(double *)(param_1 + 8);
  dVar7 = *(double *)(param_1 + 0x10);
  dVar2 = *(double *)(param_1 + 0x10);
  dVar8 = dVar9 * dVar12 + 0.0 + dVar13 * dVar1 + dVar5 * dVar7;
  if (__LC32 <= dVar8) {
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    dVar9 = _LC3;
    *(undefined8 *)(this + 0x10) = __LC33;
    *(double *)(this + 0x18) = dVar9;
    return;
  }
  if (dVar8 < _LC34) {
    dVar13 = dVar9 * 0.0;
    dVar9 = dVar9 - dVar2 * 0.0;
    auVar11._0_8_ = dVar2 * 0.0 - dVar1;
    dVar12 = dVar1 * 0.0 - dVar13;
    auVar11._8_8_ = dVar9;
    dVar9 = auVar11._0_8_ * auVar11._0_8_ + 0.0 + dVar9 * dVar9 + dVar12 * dVar12;
    if (dVar9 < _LC35) {
      dVar12 = dVar1 - dVar13;
      dVar9 = dVar2 * 0.0 - dVar1 * 0.0;
      dVar13 = dVar13 - dVar2;
      auVar11._8_8_ = dVar13;
      auVar11._0_8_ = dVar9;
      dVar9 = dVar9 * dVar9 + 0.0 + dVar13 * dVar13 + dVar12 * dVar12;
    }
    dVar9 = SQRT(dVar9);
    *(undefined8 *)(this + 0x18) = _LC36;
    auVar3._8_8_ = dVar9;
    auVar3._0_8_ = dVar9;
    auVar11 = divpd(auVar11,auVar3);
    *(double *)(this + 0x10) = dVar12 / dVar9;
    *(undefined1 (*) [16])this = auVar11;
    return;
  }
  dVar8 = SQRT(dVar8 + _LC3 + dVar8 + _LC3);
  dVar10 = _LC3 / dVar8;
  *(double *)(this + 0x18) = dVar8 * _LC7;
  *(double *)(this + 0x10) = dVar10 * (dVar9 * dVar13 - dVar12 * dVar1);
  *(double *)this = (dVar5 * dVar6 - dVar2 * dVar4) * dVar10;
  *(double *)(this + 8) = (dVar12 * dVar7 - dVar9 * dVar5) * dVar10;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::__detail::_Map_base<int, std::pair<int const, int>, std::allocator<std::pair<int const, int>
   >, std::__detail::_Select1st, std::equal_to<int>, std::hash<int>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, false, true>,
   true>::operator[](int&&) */

undefined8 * __thiscall
std::__detail::
_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
::operator[](_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
             *this,int *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  long *plVar8;
  _Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
  *__s;
  int *piVar9;
  undefined8 *puVar10;
  undefined8 *extraout_RAX;
  int *piVar11;
  ulong uVar12;
  ulong extraout_RDX;
  byte *pbVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  _Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
  *p_Var22;
  undefined8 *__src;
  undefined8 *unaff_R15;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 auVar25 [16];
  
  puVar21 = (undefined8 *)(long)*param_1;
  uVar12 = (ulong)puVar21 % *(ulong *)(this + 8);
  plVar8 = *(long **)(*(long *)this + uVar12 * 8);
  puVar1 = (undefined8 *)(uVar12 * 8);
  if (plVar8 != (long *)0x0) {
    iVar2 = *(int *)((long *)*plVar8 + 1);
    plVar17 = (long *)*plVar8;
    while (*param_1 != iVar2) {
      plVar18 = (long *)*plVar17;
      if ((plVar18 == (long *)0x0) ||
         (iVar2 = (int)plVar18[1], plVar8 = plVar17, plVar17 = plVar18,
         uVar12 != (ulong)(long)iVar2 % *(ulong *)(this + 8))) goto LAB_0010af10;
    }
    if (*plVar8 != 0) {
      return (undefined8 *)(*plVar8 + 0xc);
    }
  }
LAB_0010af10:
  plVar8 = (long *)operator_new(0x10);
  uVar12 = *(ulong *)(this + 0x18);
  puVar10 = *(undefined8 **)(this + 8);
  *plVar8 = 0;
  iVar2 = *param_1;
  piVar11 = (int *)0x1;
  *(undefined4 *)((long)plVar8 + 0xc) = 0;
  *(int *)(plVar8 + 1) = iVar2;
  cVar7 = std::__detail::_Prime_rehash_policy::_M_need_rehash
                    ((ulong)(this + 0x20),(ulong)puVar10,uVar12);
  if (cVar7 == '\0') {
    __s = *(_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
            **)this;
    p_Var22 = (_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
               *)((long)puVar1 + (long)__s);
    plVar17 = *(long **)p_Var22;
    goto joined_r0x0010b048;
  }
  if (extraout_RDX == 1) {
    __s = this + 0x30;
    *(undefined8 *)(this + 0x30) = 0;
  }
  else {
    if (extraout_RDX >> 0x3c != 0) {
      __src = (undefined8 *)(extraout_RDX >> 0x3d);
      uVar23 = (extraout_RDX >> 0x3c & 1) != 0;
      uVar24 = __src == (undefined8 *)0x0;
      if (!(bool)uVar24) {
        std::__throw_bad_array_new_length();
      }
      auVar25 = std::__throw_bad_alloc();
      pbVar13 = auVar25._8_8_;
      piVar9 = auVar25._0_8_;
      if (!(bool)uVar23 && !(bool)uVar24) {
        if (*pbVar13 <= (byte)((ulong)this >> 8)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *piVar9 = *piVar9 + auVar25._0_4_;
      *(char *)((long)piVar9 + -0x73) = *(char *)((long)piVar9 + -0x73) + (char)piVar11;
      if (piVar11 < piVar9) {
        uVar12 = 0x7fffffffffffffe0;
LAB_0010b20a:
        puVar10 = (undefined8 *)operator_new(uVar12);
        uVar3 = *(undefined8 *)(this + 8);
        uVar4 = *(undefined8 *)(this + 0x10);
        uVar5 = *(undefined8 *)(this + 0x18);
        lVar16 = uVar12 + (long)puVar10;
        puVar14 = puVar10 + 4;
        *(undefined8 *)((long)puVar10 + (long)pbVar13) = *(undefined8 *)this;
        *(undefined8 *)((byte *)((long)puVar10 + (long)pbVar13) + 8) = uVar3;
        *(undefined8 *)((long)(puVar10 + 2) + (long)pbVar13) = uVar4;
        *(undefined8 *)((byte *)((long)(puVar10 + 2) + (long)pbVar13) + 8) = uVar5;
        puVar20 = puVar10;
        if (__src != puVar21) {
LAB_0010b163:
          puVar10 = puVar20;
          puVar15 = puVar21;
          do {
            puVar14 = puVar10;
            uVar3 = *puVar15;
            uVar4 = puVar15[1];
            uVar5 = puVar15[2];
            uVar6 = puVar15[3];
            puVar10 = puVar14 + 4;
            puVar15 = puVar15 + 4;
            *puVar14 = uVar3;
            puVar14[1] = uVar4;
            puVar14[2] = uVar5;
            puVar14[3] = uVar6;
          } while (puVar10 != (undefined8 *)(((long)__src - (long)puVar21) + (long)puVar20));
          puVar14 = puVar14 + 8;
        }
        puVar15 = puVar14;
        if (__src == unaff_R15) goto LAB_0010b1bd;
      }
      else {
        if (piVar11 != (int *)0x0) {
          if ((int *)0x3ffffffffffffff < piVar11) {
            piVar11 = (int *)0x3ffffffffffffff;
          }
          uVar12 = (long)piVar11 << 5;
          goto LAB_0010b20a;
        }
        uVar3 = *(undefined8 *)(this + 8);
        uVar4 = *(undefined8 *)(this + 0x10);
        uVar5 = *(undefined8 *)(this + 0x18);
        lVar16 = 0;
        puVar20 = (undefined8 *)0x0;
        puVar14 = (undefined8 *)0x20;
        *(undefined8 *)pbVar13 = *(undefined8 *)this;
        *(undefined8 *)(pbVar13 + 8) = uVar3;
        *(undefined8 *)(pbVar13 + 0x10) = uVar4;
        *(undefined8 *)(pbVar13 + 0x18) = uVar5;
        if (puVar10 != puVar21) goto LAB_0010b163;
      }
      puVar15 = (undefined8 *)((long)puVar14 + ((long)unaff_R15 - (long)__src));
      puVar10 = (undefined8 *)memcpy(puVar14,__src,(long)unaff_R15 - (long)__src);
LAB_0010b1bd:
      if (puVar21 != (undefined8 *)0x0) {
        operator_delete(puVar21,puVar1[2] - (long)puVar21);
        puVar10 = extraout_RAX;
      }
      *puVar1 = puVar20;
      puVar1[1] = puVar15;
      puVar1[2] = lVar16;
      return puVar10;
    }
    __s = (_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
           *)operator_new(extraout_RDX * 8);
    memset(__s,0,extraout_RDX * 8);
  }
  plVar17 = *(long **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  uVar12 = 0;
  while (uVar19 = uVar12, plVar18 = plVar17, plVar17 != (long *)0x0) {
    while( true ) {
      plVar17 = (long *)*plVar18;
      uVar12 = (ulong)(long)(int)plVar18[1] % extraout_RDX;
      p_Var22 = __s + uVar12 * 8;
      if (*(long **)p_Var22 == (long *)0x0) break;
      *plVar18 = **(long **)p_Var22;
      **(undefined8 **)p_Var22 = plVar18;
      plVar18 = plVar17;
      if (plVar17 == (long *)0x0) goto LAB_0010b012;
    }
    *plVar18 = *(long *)(this + 0x10);
    *(long **)(this + 0x10) = plVar18;
    *(_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
      **)p_Var22 = this + 0x10;
    if (*plVar18 != 0) {
      *(long **)(__s + uVar19 * 8) = plVar18;
    }
  }
LAB_0010b012:
  if (*(_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
        **)this != this + 0x30) {
    operator_delete(*(_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                      **)this,*(long *)(this + 8) << 3);
  }
  *(ulong *)(this + 8) = extraout_RDX;
  *(_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
    **)this = __s;
  p_Var22 = __s + ((ulong)puVar21 % extraout_RDX) * 8;
  plVar17 = *(long **)p_Var22;
joined_r0x0010b048:
  if (plVar17 == (long *)0x0) {
    lVar16 = *(long *)(this + 0x10);
    *(long **)(this + 0x10) = plVar8;
    *plVar8 = lVar16;
    if (lVar16 != 0) {
      *(long **)(__s + ((ulong)(long)*(int *)(lVar16 + 8) % *(ulong *)(this + 8)) * 8) = plVar8;
    }
    *(_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
      **)p_Var22 = this + 0x10;
  }
  else {
    *plVar8 = *plVar17;
    **(undefined8 **)p_Var22 = plVar8;
  }
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return (undefined8 *)((long)plVar8 + 0xc);
}



/* void std::vector<std::pair<manifold::Smoothness, manifold::Smoothness>,
   std::allocator<std::pair<manifold::Smoothness, manifold::Smoothness> >
   >::_M_realloc_insert<std::pair<manifold::Smoothness, manifold::Smoothness>
   const&>(__gnu_cxx::__normal_iterator<std::pair<manifold::Smoothness, manifold::Smoothness>*,
   std::vector<std::pair<manifold::Smoothness, manifold::Smoothness>,
   std::allocator<std::pair<manifold::Smoothness, manifold::Smoothness> > > >,
   std::pair<manifold::Smoothness, manifold::Smoothness> const&) */

void __thiscall
std::
vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>
::_M_realloc_insert<std::pair<manifold::Smoothness,manifold::Smoothness>const&>
          (vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>
           *this,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar7 = (long)puVar1 - (long)puVar2 >> 5;
  if (uVar7 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar10 = (undefined8 *)((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar7) goto LAB_0010b200;
    uVar9 = 0x3ffffffffffffff;
    if (uVar7 + 1 < 0x400000000000000) {
      uVar9 = uVar7 + 1;
    }
    uVar9 = uVar9 << 5;
LAB_0010b20a:
    puVar8 = (undefined8 *)operator_new(uVar9);
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    lVar13 = uVar9 + (long)puVar8;
    puVar12 = puVar8 + 4;
    *(undefined8 *)((long)puVar8 + (long)puVar10) = *param_3;
    ((undefined8 *)((long)puVar8 + (long)puVar10))[1] = uVar3;
    *(undefined8 *)((long)(puVar8 + 2) + (long)puVar10) = uVar4;
    ((undefined8 *)((long)(puVar8 + 2) + (long)puVar10))[1] = uVar5;
    if (param_2 != puVar2) {
LAB_0010b163:
      puVar10 = puVar8;
      puVar11 = puVar2;
      do {
        puVar12 = puVar10;
        uVar3 = *puVar11;
        uVar4 = puVar11[1];
        uVar5 = puVar11[2];
        uVar6 = puVar11[3];
        puVar11 = puVar11 + 4;
        *puVar12 = uVar3;
        puVar12[1] = uVar4;
        puVar12[2] = uVar5;
        puVar12[3] = uVar6;
        puVar10 = puVar12 + 4;
      } while (puVar12 + 4 != (undefined8 *)(((long)param_2 - (long)puVar2) + (long)puVar8));
      puVar12 = puVar12 + 8;
    }
    puVar10 = puVar12;
    if (param_2 == puVar1) goto LAB_0010b1bd;
  }
  else {
    uVar9 = uVar7 * 2;
    if (uVar9 < uVar7) {
LAB_0010b200:
      uVar9 = 0x7fffffffffffffe0;
      goto LAB_0010b20a;
    }
    if (uVar9 != 0) {
      if (0x3ffffffffffffff < uVar9) {
        uVar9 = 0x3ffffffffffffff;
      }
      uVar9 = uVar9 << 5;
      goto LAB_0010b20a;
    }
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    lVar13 = 0;
    puVar8 = (undefined8 *)0x0;
    puVar12 = (undefined8 *)0x20;
    *puVar10 = *param_3;
    puVar10[1] = uVar3;
    puVar10[2] = uVar4;
    puVar10[3] = uVar5;
    if (param_2 != puVar2) goto LAB_0010b163;
  }
  puVar10 = (undefined8 *)((long)puVar12 + ((long)puVar1 - (long)param_2));
  memcpy(puVar12,param_2,(long)puVar1 - (long)param_2);
LAB_0010b1bd:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar8;
  *(undefined8 **)(this + 8) = puVar10;
  *(long *)(this + 0x10) = lVar13;
  return;
}



/* void std::vector<manifold::Smoothness, std::allocator<manifold::Smoothness>
   >::_M_realloc_insert<manifold::Smoothness>(__gnu_cxx::__normal_iterator<manifold::Smoothness*,
   std::vector<manifold::Smoothness, std::allocator<manifold::Smoothness> > >,
   manifold::Smoothness&&) */

void __thiscall
std::vector<manifold::Smoothness,std::allocator<manifold::Smoothness>>::
_M_realloc_insert<manifold::Smoothness>
          (vector<manifold::Smoothness,std::allocator<manifold::Smoothness>> *this,void *param_2,
          undefined8 *param_3)

{
  void *__dest;
  void *pvVar1;
  void *__src;
  undefined8 uVar2;
  ulong uVar3;
  void *__dest_00;
  ulong uVar4;
  size_t __n;
  long lVar5;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar3 = (long)pvVar1 - (long)__src >> 4;
  if (uVar3 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar3) goto LAB_0010b360;
    uVar4 = 0x7ffffffffffffff;
    if (uVar3 + 1 < 0x800000000000000) {
      uVar4 = uVar3 + 1;
    }
    uVar4 = uVar4 << 4;
LAB_0010b36a:
    __dest_00 = operator_new(uVar4);
    lVar5 = uVar4 + (long)__dest_00;
  }
  else {
    uVar4 = uVar3 * 2;
    if (uVar4 < uVar3) {
LAB_0010b360:
      uVar4 = 0x7ffffffffffffff0;
      goto LAB_0010b36a;
    }
    if (uVar4 != 0) {
      if (0x7ffffffffffffff < uVar4) {
        uVar4 = 0x7ffffffffffffff;
      }
      uVar4 = uVar4 << 4;
      goto LAB_0010b36a;
    }
    lVar5 = 0;
    __dest_00 = (void *)0x0;
  }
  uVar2 = param_3[1];
  __dest = (void *)((long)__dest_00 + __n + 0x10);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined8 *)((long)__dest_00 + __n) = *param_3;
  ((undefined8 *)((long)__dest_00 + __n))[1] = uVar2;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_0010b33e;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010b33e:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar5;
  return;
}



/* void std::vector<linalg::vec<double, 3>, std::allocator<linalg::vec<double, 3> >
   >::_M_realloc_insert<linalg::vec<double, 3> >(__gnu_cxx::__normal_iterator<linalg::vec<double,
   3>*, std::vector<linalg::vec<double, 3>, std::allocator<linalg::vec<double, 3> > > >,
   linalg::vec<double, 3>&&) */

void __thiscall
std::vector<linalg::vec<double,3>,std::allocator<linalg::vec<double,3>>>::
_M_realloc_insert<linalg::vec<double,3>>
          (vector<linalg::vec<double,3>,std::allocator<linalg::vec<double,3>>> *this,
          undefined8 *param_2,undefined8 *param_3)

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
    if (0xfffffffffffffffe < uVar6) goto LAB_0010b560;
    if (0x555555555555555 < uVar9) {
      uVar9 = 0x555555555555555;
    }
    uVar9 = uVar9 * 0x18;
LAB_0010b56a:
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
LAB_0010b4d0:
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
    if (param_2 == puVar1) goto LAB_0010b526;
  }
  else {
    uVar9 = lVar5 * 0x5555555555555556;
    if (uVar9 < uVar6) {
LAB_0010b560:
      uVar9 = 0x7ffffffffffffff8;
      goto LAB_0010b56a;
    }
    if (uVar9 != 0) {
      if (0x555555555555555 < uVar9) {
        uVar9 = 0x555555555555555;
      }
      uVar9 = uVar9 * 0x18;
      goto LAB_0010b56a;
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
    if (param_2 != puVar2) goto LAB_0010b4d0;
  }
  __n = ((long)puVar1 + (-0x18 - (long)param_2) & 0xfffffffffffffff8U) + 0x18;
  puVar8 = (undefined8 *)((long)puVar10 + __n);
  memcpy(puVar10,param_2,__n);
LAB_0010b526:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = local_50;
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
    if (0xfffffffffffffffe < uVar2) goto LAB_0010b6d0;
    uVar3 = 0x1fffffffffffffff;
    if (uVar2 + 1 < 0x2000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 2;
LAB_0010b6da:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_0010b6d0:
      uVar3 = 0x7ffffffffffffffc;
      goto LAB_0010b6da;
    }
    if (uVar3 != 0) {
      if (0x1fffffffffffffff < uVar3) {
        uVar3 = 0x1fffffffffffffff;
      }
      uVar3 = uVar3 * 4;
      goto LAB_0010b6da;
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
    if (__src == (void *)0x0) goto LAB_0010b6ab;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010b6ab:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* void std::vector<std::pair<manifold::Smoothness, manifold::Smoothness>,
   std::allocator<std::pair<manifold::Smoothness, manifold::Smoothness> >
   >::_M_realloc_insert<std::pair<manifold::Smoothness, manifold::Smoothness>
   >(__gnu_cxx::__normal_iterator<std::pair<manifold::Smoothness, manifold::Smoothness>*,
   std::vector<std::pair<manifold::Smoothness, manifold::Smoothness>,
   std::allocator<std::pair<manifold::Smoothness, manifold::Smoothness> > > >,
   std::pair<manifold::Smoothness, manifold::Smoothness>&&) */

void __thiscall
std::
vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>
::_M_realloc_insert<std::pair<manifold::Smoothness,manifold::Smoothness>>
          (vector<std::pair<manifold::Smoothness,manifold::Smoothness>,std::allocator<std::pair<manifold::Smoothness,manifold::Smoothness>>>
           *this,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar7 = (long)puVar1 - (long)puVar2 >> 5;
  if (uVar7 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar10 = (undefined8 *)((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar7) goto LAB_0010b8c0;
    uVar9 = 0x3ffffffffffffff;
    if (uVar7 + 1 < 0x400000000000000) {
      uVar9 = uVar7 + 1;
    }
    uVar9 = uVar9 << 5;
LAB_0010b8ca:
    puVar8 = (undefined8 *)operator_new(uVar9);
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    lVar13 = uVar9 + (long)puVar8;
    puVar12 = puVar8 + 4;
    *(undefined8 *)((long)puVar8 + (long)puVar10) = *param_3;
    ((undefined8 *)((long)puVar8 + (long)puVar10))[1] = uVar3;
    *(undefined8 *)((long)(puVar8 + 2) + (long)puVar10) = uVar4;
    ((undefined8 *)((long)(puVar8 + 2) + (long)puVar10))[1] = uVar5;
    if (param_2 != puVar2) {
LAB_0010b823:
      puVar10 = puVar8;
      puVar11 = puVar2;
      do {
        puVar12 = puVar10;
        uVar3 = *puVar11;
        uVar4 = puVar11[1];
        uVar5 = puVar11[2];
        uVar6 = puVar11[3];
        puVar11 = puVar11 + 4;
        *puVar12 = uVar3;
        puVar12[1] = uVar4;
        puVar12[2] = uVar5;
        puVar12[3] = uVar6;
        puVar10 = puVar12 + 4;
      } while (puVar12 + 4 != (undefined8 *)(((long)param_2 - (long)puVar2) + (long)puVar8));
      puVar12 = puVar12 + 8;
    }
    puVar10 = puVar12;
    if (param_2 == puVar1) goto LAB_0010b87d;
  }
  else {
    uVar9 = uVar7 * 2;
    if (uVar9 < uVar7) {
LAB_0010b8c0:
      uVar9 = 0x7fffffffffffffe0;
      goto LAB_0010b8ca;
    }
    if (uVar9 != 0) {
      if (0x3ffffffffffffff < uVar9) {
        uVar9 = 0x3ffffffffffffff;
      }
      uVar9 = uVar9 << 5;
      goto LAB_0010b8ca;
    }
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    lVar13 = 0;
    puVar8 = (undefined8 *)0x0;
    puVar12 = (undefined8 *)0x20;
    *puVar10 = *param_3;
    puVar10[1] = uVar3;
    puVar10[2] = uVar4;
    puVar10[3] = uVar5;
    if (param_2 != puVar2) goto LAB_0010b823;
  }
  puVar10 = (undefined8 *)((long)puVar12 + ((long)puVar1 - (long)param_2));
  memcpy(puVar12,param_2,(long)puVar1 - (long)param_2);
LAB_0010b87d:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar8;
  *(undefined8 **)(this + 8) = puVar10;
  *(long *)(this + 0x10) = lVar13;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* manifold::Manifold::Impl::Impl(manifold::Manifold::Impl const&) */

void __thiscall manifold::Manifold::Impl::Impl(Impl *this,Impl *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



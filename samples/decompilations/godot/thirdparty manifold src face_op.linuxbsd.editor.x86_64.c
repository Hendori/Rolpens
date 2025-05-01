
/* std::_Function_handler<void (int, linalg::vec<int, 3>, linalg::vec<double, 3>, manifold::TriRef),
   manifold::Manifold::Impl::Face2Tri(manifold::Vec<int> const&, manifold::Vec<manifold::TriRef>
   const&)::{lambda(unsigned long, linalg::vec<int, 3>, linalg::vec<double, 3>,
   manifold::TriRef)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8
std::
_Function_handler<void(int,linalg::vec<int,3>,linalg::vec<double,3>,manifold::TriRef),manifold::Manifold::Impl::Face2Tri(manifold::Vec<int>const&,manifold::Vec<manifold::TriRef>const&)::{lambda(unsigned_long,linalg::vec<int,3>,linalg::vec<double,3>,manifold::TriRef)#1}>
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
  *param_1 = (long)&manifold::Manifold::Impl::
                    Face2Tri(manifold::Vec<int>const&,manifold::Vec<manifold::TriRef>const&)::
                    {lambda(unsigned_long,linalg::vec<int,3>,linalg::vec<double,3>,manifold::TriRef)#1}
                    ::typeinfo;
  return 0;
}



/* std::_Function_handler<std::vector<linalg::vec<int, 3>, std::allocator<linalg::vec<int, 3> > >
   (int), manifold::Manifold::Impl::Face2Tri(manifold::Vec<int> const&,
   manifold::Vec<manifold::TriRef> const&)::{lambda(int)#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<std::vector<linalg::vec<int,3>,std::allocator<linalg::vec<int,3>>>(int),manifold::Manifold::Impl::Face2Tri(manifold::Vec<int>const&,manifold::Vec<manifold::TriRef>const&)::{lambda(int)#1}>
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
      puVar3 = (undefined8 *)operator_new(0x10);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      *param_1 = (long)puVar3;
    }
    else if ((param_3 == 3) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1,0x10);
    }
    return 0;
  }
  *param_1 = (long)&manifold::Manifold::Impl::
                    Face2Tri(manifold::Vec<int>const&,manifold::Vec<manifold::TriRef>const&)::
                    {lambda(int)#1}::typeinfo;
  return 0;
}



/* std::_Function_handler<void (int, linalg::vec<int, 3>, linalg::vec<double, 3>, manifold::TriRef),
   manifold::Manifold::Impl::Face2Tri(manifold::Vec<int> const&, manifold::Vec<manifold::TriRef>
   const&)::{lambda(unsigned long, linalg::vec<int, 3>, linalg::vec<double, 3>,
   manifold::TriRef)#1}>::_M_invoke(std::_Any_data const&, int&&, linalg::vec<int, 3>&&,
   linalg::vec<double, 3>&&, manifold::TriRef&&) */

void std::
     _Function_handler<void(int,linalg::vec<int,3>,linalg::vec<double,3>,manifold::TriRef),manifold::Manifold::Impl::Face2Tri(manifold::Vec<int>const&,manifold::Vec<manifold::TriRef>const&)::{lambda(unsigned_long,linalg::vec<int,3>,linalg::vec<double,3>,manifold::TriRef)#1}>
     ::_M_invoke(_Any_data *param_1,int *param_2,vec *param_3,vec *param_4,TriRef *param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  size_t sVar13;
  undefined8 *puVar14;
  ulong uVar15;
  
  plVar3 = *(long **)param_1;
  uVar4 = *(undefined8 *)param_3;
  uVar2 = *(undefined4 *)(param_3 + 8);
  uVar7 = *(undefined8 *)param_4;
  uVar8 = *(undefined8 *)(param_4 + 8);
  plVar5 = (long *)*plVar3;
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  uVar9 = *(undefined8 *)param_5;
  uVar10 = *(undefined8 *)(param_5 + 8);
  uVar12 = plVar5[1];
  uVar6 = plVar5[2];
  if (uVar12 < uVar6) {
    plVar5[1] = uVar12 + 1;
    puVar11 = (undefined8 *)(*plVar5 + uVar12 * 0xc);
    *puVar11 = uVar4;
    *(undefined4 *)(puVar11 + 1) = uVar2;
  }
  else {
    if (uVar6 == 0) {
      sVar13 = 0x600;
      uVar15 = 0x80;
LAB_001001fc:
      puVar11 = (undefined8 *)malloc(sVar13);
      puVar14 = (undefined8 *)*plVar5;
      if (uVar12 == 0) {
LAB_00100231:
        if (puVar14 != (undefined8 *)0x0) goto LAB_00100236;
      }
      else {
        sVar13 = uVar12 * 0xc;
        if (0xc < (long)sVar13) {
          puVar11 = (undefined8 *)memmove(puVar11,puVar14,sVar13);
          puVar14 = (undefined8 *)*plVar5;
          goto LAB_00100231;
        }
        if (sVar13 != 0xc) goto LAB_00100231;
        *puVar11 = *puVar14;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar14 + 1);
LAB_00100236:
        free(puVar14);
      }
      *plVar5 = (long)puVar11;
      uVar12 = plVar5[1];
      plVar5[2] = uVar15;
    }
    else {
      uVar15 = uVar6 * 2;
      if (uVar6 < uVar15) {
        sVar13 = uVar6 * 0x18;
        goto LAB_001001fc;
      }
      puVar11 = (undefined8 *)*plVar5;
    }
    plVar5[1] = uVar12 + 1;
    puVar11 = (undefined8 *)((long)puVar11 + uVar12 * 0xc);
    *puVar11 = uVar4;
    *(undefined4 *)(puVar11 + 1) = uVar2;
  }
  plVar5 = (long *)plVar3[1];
  uVar12 = plVar5[1];
  uVar6 = plVar5[2];
  if (uVar12 < uVar6) {
    plVar5[1] = uVar12 + 1;
    puVar11 = (undefined8 *)(*plVar5 + uVar12 * 0x18);
    *puVar11 = uVar7;
    puVar11[1] = uVar8;
    puVar11[2] = uVar1;
  }
  else {
    if (uVar6 == 0) {
      sVar13 = 0xc00;
      uVar15 = 0x80;
LAB_0010031c:
      puVar11 = (undefined8 *)malloc(sVar13);
      puVar14 = (undefined8 *)*plVar5;
      if (uVar12 == 0) {
LAB_00100351:
        if (puVar14 != (undefined8 *)0x0) goto LAB_00100356;
      }
      else {
        sVar13 = uVar12 * 0x18;
        if (0x18 < (long)sVar13) {
          memmove(puVar11,puVar14,sVar13);
          puVar14 = (undefined8 *)*plVar5;
          goto LAB_00100351;
        }
        if (sVar13 != 0x18) goto LAB_00100351;
        uVar4 = puVar14[1];
        *puVar11 = *puVar14;
        puVar11[1] = uVar4;
        puVar11[2] = puVar14[2];
LAB_00100356:
        free(puVar14);
      }
      *plVar5 = (long)puVar11;
      uVar12 = plVar5[1];
      plVar5[2] = uVar15;
    }
    else {
      uVar15 = uVar6 * 2;
      if (uVar6 < uVar15) {
        sVar13 = uVar6 * 0x30;
        goto LAB_0010031c;
      }
      puVar11 = (undefined8 *)*plVar5;
    }
    plVar5[1] = uVar12 + 1;
    puVar11 = puVar11 + uVar12 * 3;
    *puVar11 = uVar7;
    puVar11[1] = uVar8;
    puVar11[2] = uVar1;
  }
  plVar3 = (long *)plVar3[2];
  uVar12 = plVar3[1];
  uVar6 = plVar3[2];
  if (uVar12 < uVar6) {
    puVar11 = (undefined8 *)(uVar12 * 0x10 + *plVar3);
    plVar3[1] = uVar12 + 1;
    *puVar11 = uVar9;
    puVar11[1] = uVar10;
    return;
  }
  if (uVar6 == 0) {
    sVar13 = 0x800;
    uVar15 = 0x80;
  }
  else {
    uVar15 = uVar6 * 2;
    if (uVar15 <= uVar6) {
      puVar11 = (undefined8 *)*plVar3;
      goto LAB_001002e1;
    }
    sVar13 = uVar6 << 5;
  }
  puVar11 = (undefined8 *)malloc(sVar13);
  puVar14 = (undefined8 *)*plVar3;
  if (uVar12 == 0) {
LAB_001002c2:
    if (puVar14 != (undefined8 *)0x0) goto LAB_001002c7;
  }
  else {
    sVar13 = uVar12 * 0x10;
    if (0x10 < (long)sVar13) {
      memmove(puVar11,puVar14,sVar13);
      puVar14 = (undefined8 *)*plVar3;
      goto LAB_001002c2;
    }
    if (sVar13 != 0x10) goto LAB_001002c2;
    uVar1 = puVar14[1];
    *puVar11 = *puVar14;
    puVar11[1] = uVar1;
LAB_001002c7:
    free(puVar14);
  }
  *plVar3 = (long)puVar11;
  uVar12 = plVar3[1];
  plVar3[2] = uVar15;
LAB_001002e1:
  plVar3[1] = uVar12 + 1;
  puVar11[uVar12 * 2] = uVar9;
  (puVar11 + uVar12 * 2)[1] = uVar10;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::Manifold::Impl::Face2Tri(manifold::Vec<int> const&, manifold::Vec<manifold::TriRef>
   const&)::{lambda(std::function<std::vector<linalg::vec<int, 3>, std::allocator<linalg::vec<int,
   3> > > (int)>, std::function<void (int, linalg::vec<int, 3>, linalg::vec<double, 3>,
   manifold::TriRef)>, int)#1}::TEMPNAMEPLACEHOLDERVALUE(std::function<std::vector<linalg::vec<int,
   3>, std::allocator<linalg::vec<int, 3> > > (int)>, std::function<void (int, linalg::vec<int, 3>,
   linalg::vec<double, 3>, manifold::TriRef)>, int) const::{lambda(linalg::vec<int,
   3>)#1}::TEMPNAMEPLACEHOLDERVALUE(linalg::vec<int, 3>) const [clone .isra.0] */

_func_TEMPNAMEPLACEHOLDERVALUE_function_function_int * __thiscall
const::{lambda(linalg::vec<int,3>)#1}::operator()
          (_lambda_linalg__vec<int,3>__1_ *this,long param_2,long param_3,int param_4)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  long lVar8;
  _func_TEMPNAMEPLACEHOLDERVALUE_function_function_int *p_Var9;
  double dVar10;
  double __x;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  lVar8 = *(long *)(param_2 + 0x48);
  dVar4 = *(double *)(param_2 + 0x30);
  dVar12 = *(double *)(this + 0x10);
  dVar10 = *(double *)(this + 0x18);
  dVar11 = *(double *)(this + 8);
  pdVar1 = (double *)(lVar8 + (long)param_4 * 0x18);
  dVar5 = *(double *)(this + 0x28);
  dVar6 = *(double *)(this + 0x20);
  dVar7 = *(double *)this;
  pdVar2 = (double *)(lVar8 + (param_3 >> 0x20) * 0x18);
  pdVar3 = (double *)(lVar8 + (long)(int)param_3 * 0x18);
  dVar15 = pdVar3[2] * dVar5 + *pdVar3 * dVar11 + pdVar3[1] * dVar10;
  dVar13 = pdVar3[2] * dVar6 + *pdVar3 * dVar7 + pdVar3[1] * dVar12;
  dVar14 = (pdVar2[2] * dVar5 + pdVar2[1] * dVar10 + *pdVar2 * dVar11) - dVar15;
  __x = (*pdVar2 * dVar7 + pdVar2[1] * dVar12 + pdVar2[2] * dVar6) - dVar13;
  dVar13 = (dVar6 * pdVar1[2] + dVar12 * pdVar1[1] + dVar7 * *pdVar1) - dVar13;
  dVar15 = (pdVar1[1] * dVar10 + *pdVar1 * dVar11 + pdVar1[2] * dVar5) - dVar15;
  dVar10 = fma(__x,dVar15,(double)((ulong)dVar14 ^ _LC0) * dVar13);
  p_Var9 = (_func_TEMPNAMEPLACEHOLDERVALUE_function_function_int *)0x1;
  dVar12 = dVar13 * dVar13 + 0.0 + dVar15 * dVar15;
  dVar11 = __x * __x + 0.0 + dVar14 * dVar14;
  if (dVar12 <= dVar11) {
    dVar12 = dVar11;
  }
  if (dVar12 * dVar4 * dVar4 < dVar10 * dVar10 * __LC2) {
    p_Var9 = (_func_TEMPNAMEPLACEHOLDERVALUE_function_function_int *)(ulong)(0.0 < dVar10);
  }
  return p_Var9;
}



/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_M_erase(std::_Rb_tree_node<std::pair<int const, int> >*) [clone .isra.0] */

void std::
     _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
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



/* manifold::Manifold::Impl::Face2Tri(manifold::Vec<int> const&, manifold::Vec<manifold::TriRef>
   const&) */

void __thiscall manifold::Manifold::Impl::Face2Tri(Impl *this,Vec *param_1,Vec *param_2)

{
  Impl *pIVar1;
  double *pdVar2;
  int *piVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  Vec *pVVar11;
  int iVar12;
  long *plVar13;
  undefined8 *puVar14;
  _func_TEMPNAMEPLACEHOLDERVALUE_function_function_int *p_Var15;
  long lVar16;
  Vec *pVVar17;
  ulong uVar18;
  int iVar19;
  Vec *pVVar20;
  undefined8 uVar21;
  size_t sVar22;
  long lVar23;
  int iVar24;
  Vec *unaff_R13;
  int iVar25;
  ulong uVar26;
  int iVar27;
  Vec *pVVar28;
  long in_FS_OFFSET;
  undefined1 uVar29;
  int iVar30;
  char local_249;
  int local_234;
  int local_230;
  int local_22c;
  undefined8 local_228;
  int local_220;
  undefined8 local_218;
  int local_210;
  int local_20c;
  int iStack_208;
  int local_204;
  long local_200;
  int local_1f8;
  long local_1f4;
  int local_1ec;
  long local_1e8;
  long lStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  Vec *local_1b8;
  undefined1 local_1b0 [16];
  Vec *local_198;
  undefined1 local_190 [16];
  double local_178;
  double dStack_170;
  double local_168;
  Vec *local_158;
  Vec *local_150;
  long local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulong local_d8;
  ulong uStack_d0;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  int local_98;
  int iStack_94;
  Vec local_90 [8];
  undefined1 local_88 [16];
  code *local_78;
  code *pcStack_70;
  undefined1 local_68 [16];
  code *local_58;
  code *pcStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1b0 = (undefined1  [16])0x0;
  local_1b8 = (Vec *)0x0;
  local_198 = (Vec *)0x0;
  local_190 = (undefined1  [16])0x0;
  pIVar1 = this + 0x110;
  lVar10 = *(long *)(this + 0x118);
  *(undefined8 *)(this + 0x118) = 0;
  pVVar28 = (Vec *)this;
  if (lVar10 == 0) {
    uVar18 = *(ulong *)(param_1 + 8);
    pVVar17 = param_1;
    if (uVar18 == 0) goto LAB_00100a01;
  }
  else {
    if (*(void **)(this + 0x110) == (void *)0x0) {
      local_1b0._8_8_ = 0;
      uVar21 = 0;
    }
    else {
      free(*(void **)(this + 0x110));
      uVar21 = *(undefined8 *)(this + 0x118);
    }
    uVar18 = *(ulong *)(param_1 + 8);
    *(undefined8 *)(this + 0x120) = uVar21;
    *(undefined8 *)(this + 0x110) = 0;
    if (uVar18 <= (ulong)local_1b0._8_8_) goto LAB_00101303;
  }
  pVVar17 = (Vec *)malloc(uVar18 * 0xc);
  unaff_R13 = local_1b8;
  if (local_1b0._0_8_ == 0) {
LAB_0010129a:
    uVar26 = uVar18;
    if (local_1b8 != (Vec *)0x0) goto LAB_001013d7;
  }
  else {
    sVar22 = local_1b0._0_8_ * 0xc;
    if ((long)sVar22 < 0xd) {
      if (sVar22 != 0xc) goto LAB_0010129a;
      *(long *)pVVar17 = *(long *)local_1b8;
      *(int *)(pVVar17 + 8) = *(int *)(local_1b8 + 8);
    }
    else {
      memmove(pVVar17,local_1b8,sVar22);
    }
LAB_001013d7:
    free(unaff_R13);
    uVar26 = *(ulong *)(param_1 + 8);
  }
  local_1b0._8_8_ = uVar18;
  local_1b8 = pVVar17;
  uVar18 = uVar26;
LAB_00101303:
  if (uVar18 <= (ulong)local_190._8_8_) goto LAB_00101356;
  unaff_R13 = (Vec *)malloc(uVar18 * 0x18);
  pVVar20 = local_198;
  if (local_190._0_8_ == 0) goto LAB_00101337;
  sVar22 = local_190._0_8_ * 0x18;
  uVar29 = sVar22 == 0x18;
  if ((long)sVar22 < 0x19) goto LAB_0010144e;
  memmove(unaff_R13,local_198,sVar22);
  uVar26 = uVar18;
LAB_00101401:
  free(pVVar20);
  uVar18 = *(ulong *)(param_1 + 8);
LAB_00101343:
  local_198 = unaff_R13;
  local_190._8_8_ = uVar26;
  pVVar28 = (Vec *)this;
LAB_00101356:
  uVar26 = uVar18;
  if (uVar18 <= *(ulong *)(pVVar28 + 0x120)) goto LAB_001013a2;
  plVar13 = (long *)malloc(uVar18 << 4);
  unaff_R13 = *(Vec **)(pVVar28 + 0x110);
  if (*(long *)(pVVar28 + 0x118) == 0) {
LAB_00101385:
    if (unaff_R13 != (Vec *)0x0) goto LAB_00101427;
  }
  else {
    sVar22 = *(long *)(pVVar28 + 0x118) * 0x10;
    if ((long)sVar22 < 0x11) {
      if (sVar22 != 0x10) goto LAB_00101385;
      lVar10 = *(long *)(unaff_R13 + 8);
      *plVar13 = *(long *)unaff_R13;
      plVar13[1] = lVar10;
    }
    else {
      memmove(plVar13,unaff_R13,sVar22);
    }
LAB_00101427:
    free(unaff_R13);
    uVar26 = *(ulong *)(param_1 + 8);
  }
  *(long **)(pVVar28 + 0x110) = plVar13;
  *(ulong *)(pVVar28 + 0x120) = uVar18;
LAB_001013a2:
  pVVar17 = param_1;
  if (uVar26 == 1) {
LAB_00100e44:
    if (*(void **)(pVVar28 + 0x90) != (void *)0x0) {
      free(*(void **)(pVVar28 + 0x90));
    }
    pVVar17 = local_198;
    local_198 = (Vec *)0x0;
    *(Vec **)(pVVar28 + 0x90) = pVVar17;
    *(undefined8 *)(pVVar28 + 0x98) = local_190._0_8_;
    *(undefined8 *)(pVVar28 + 0xa0) = local_190._8_8_;
    local_190 = (undefined1  [16])0x0;
    manifold::Manifold::Impl::CreateHalfedges(pVVar28);
    if (local_198 != (Vec *)0x0) {
      free(local_198);
    }
    if (local_1b8 != (Vec *)0x0) {
      free(local_1b8);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00100a01:
  uVar26 = 0;
  this = (Impl *)pVVar28;
  do {
    iVar25 = (int)uVar26;
    uVar18 = uVar26 & 0xffffffff;
    local_78 = (code *)0x0;
    local_88 = (undefined1  [16])0x0;
    pcStack_70 = (code *)0x0;
    plVar13 = (long *)operator_new(0x18);
    local_88._0_8_ = plVar13;
    plVar13[2] = (long)pIVar1;
    *plVar13 = (long)&local_1b8;
    plVar13[1] = (long)&local_198;
    local_58 = (code *)0x0;
    pcStack_50 = (code *)0x0;
    local_78 = std::
               _Function_handler<void(int,linalg::vec<int,3>,linalg::vec<double,3>,manifold::TriRef),manifold::Manifold::Impl::Face2Tri(manifold::Vec<int>const&,manifold::Vec<manifold::TriRef>const&)::{lambda(unsigned_long,linalg::vec<int,3>,linalg::vec<double,3>,manifold::TriRef)#1}>
               ::_M_manager;
    pcStack_70 = std::
                 _Function_handler<void(int,linalg::vec<int,3>,linalg::vec<double,3>,manifold::TriRef),manifold::Manifold::Impl::Face2Tri(manifold::Vec<int>const&,manifold::Vec<manifold::TriRef>const&)::{lambda(unsigned_long,linalg::vec<int,3>,linalg::vec<double,3>,manifold::TriRef)#1}>
                 ::_M_invoke;
    local_68 = (undefined1  [16])0x0;
    puVar14 = (undefined8 *)operator_new(0x10);
    lVar10 = *(long *)pVVar17;
    puVar14[1] = pVVar17;
    *puVar14 = pVVar28;
    local_68._0_8_ = puVar14;
    local_58 = std::
               _Function_handler<std::vector<linalg::vec<int,3>,std::allocator<linalg::vec<int,3>>>(int),manifold::Manifold::Impl::Face2Tri(manifold::Vec<int>const&,manifold::Vec<manifold::TriRef>const&)::{lambda(int)#1}>
               ::_M_manager;
    pcStack_50 = std::
                 _Function_handler<std::vector<linalg::vec<int,3>,std::allocator<linalg::vec<int,3>>>(int),manifold::Manifold::Impl::Face2Tri(manifold::Vec<int>const&,manifold::Vec<manifold::TriRef>const&)::{lambda(int)#1}>
                 ::_M_invoke;
    iVar8 = *(int *)(lVar10 + (long)iVar25 * 4);
    lVar23 = (long)iVar8;
    iVar19 = *(int *)(lVar10 + (long)(iVar25 + 1) * 4) - iVar8;
    pdVar2 = (double *)(*(long *)(pVVar28 + 0x90) + (long)iVar25 * 0x18);
    dVar7 = *pdVar2;
    dStack_170 = pdVar2[1];
    local_168 = pdVar2[2];
    local_178 = dVar7;
    param_1 = pVVar17;
    if (iVar19 == 3) {
      lVar10 = *(long *)(pVVar28 + 0x60);
      lVar16 = lVar23 * 0xc;
      iVar8 = *(int *)(lVar10 + 0xc + lVar16);
      iVar19 = *(int *)(lVar10 + 0x18 + lVar16);
      iVar12 = ((undefined4 *)(lVar10 + lVar16))[1];
      local_210 = iVar8;
      if (iVar19 != iVar12) {
        local_210 = iVar19;
        iVar12 = iVar8;
      }
      local_218 = CONCAT44(iVar12,*(undefined4 *)(lVar10 + lVar16));
      pVVar20 = (Vec *)(lVar23 * 0x10 + *(long *)param_2);
      local_1e8 = *(long *)pVVar20;
      lStack_1e0 = *(long *)(pVVar20 + 8);
      uVar29 = local_78 == (code *)0x0;
      local_234 = iVar25;
      local_138 = dVar7;
      dStack_130 = dStack_170;
      local_128 = local_168;
      if ((bool)uVar29) break;
      (*pcStack_70)(local_88,&local_234,&local_218,&local_138,&local_1e8);
    }
    else if (iVar19 == 4) {
      piVar3 = (int *)(*(long *)(pVVar28 + 0x60) + (long)iVar8 * 0xc);
      iVar19 = *piVar3;
      if (((double)((ulong)local_168 & _LC4) <= (double)((ulong)dVar7 & _LC4)) ||
         ((double)((ulong)local_168 & _LC4) <= (double)((ulong)dStack_170 & _LC4))) {
        if ((double)((ulong)dStack_170 & _LC4) <= (double)((ulong)dVar7 & _LC4)) {
          uStack_c0 = 0;
          uStack_b0 = _LC3;
          goto LAB_00100b9f;
        }
        uStack_b0 = 0;
        uStack_c0 = 0;
        uStack_d0 = _LC3;
        dVar7 = dStack_170;
      }
      else {
        dVar7 = local_168;
        uStack_c0 = _LC3;
        uStack_b0 = 0;
LAB_00100b9f:
        uStack_d0 = 0;
      }
      local_c8 = uStack_b0;
      local_b8 = uStack_d0;
      local_d8 = uStack_c0;
      if (dVar7 < 0.0) {
        local_c8 = uStack_b0 ^ _LC0;
        local_b8 = uStack_d0 ^ _LC0;
        local_d8 = uStack_c0 ^ _LC0;
      }
      iVar12 = piVar3[1];
      uStack_a0 = CONCAT44(uStack_a0._4_4_,3);
      iVar24 = -1;
      iVar27 = -1;
      local_a8 = _LC5;
      unaff_R13 = (Vec *)&local_a8;
      uVar21 = CONCAT44(iVar12,iVar19);
      pVVar20 = unaff_R13;
      do {
        piVar3 = (int *)(*(long *)(pVVar28 + 0x60) + (long)(*(int *)pVVar20 + iVar8) * 0xc);
        iVar30 = *piVar3;
        iVar9 = piVar3[1];
        if (iVar12 == iVar30) {
          iVar27 = iVar9;
        }
        if (iVar19 == iVar9) {
          iVar24 = iVar30;
        }
        pVVar20 = pVVar20 + 4;
      } while (pVVar20 != (Vec *)((long)&uStack_a0 + 4));
      local_228 = uVar21;
      p_Var15 = const::{lambda(linalg::vec<int,3>)#1}::operator()
                          ((_lambda_linalg__vec<int,3>__1_ *)&local_d8,pVVar28,uVar21,iVar27);
      local_249 = (char)p_Var15;
      if (local_249 != '\0') {
        local_20c = iVar27;
        iStack_208 = iVar24;
        local_204 = iVar19;
        p_Var15 = const::{lambda(linalg::vec<int,3>)#1}::operator()
                            ((_lambda_linalg__vec<int,3>__1_ *)&local_d8,pVVar28,
                             CONCAT44(iVar24,iVar27));
        local_249 = (char)p_Var15;
      }
      local_220 = iVar24;
      p_Var15 = const::{lambda(linalg::vec<int,3>)#1}::operator()
                          ((_lambda_linalg__vec<int,3>__1_ *)&local_d8,pVVar28,uVar21,iVar24);
      if (((char)p_Var15 == '\0') ||
         (local_20c = iVar27, iStack_208 = iVar24, local_204 = iVar12,
         p_Var15 = const::{lambda(linalg::vec<int,3>)#1}::operator()
                             ((_lambda_linalg__vec<int,3>__1_ *)&local_d8,pVVar28,
                              CONCAT44(iVar24,iVar27)), (char)p_Var15 == '\0')) {
LAB_00100cf8:
        iVar12 = iVar19;
        iVar30 = iVar27;
      }
      else {
        iVar30 = iVar24;
        if (local_249 != '\0') {
          lVar10 = *(long *)(pVVar28 + 0x48);
          pdVar2 = (double *)(lVar10 + (long)iVar19 * 0x18);
          pdVar4 = (double *)(lVar10 + (long)iVar27 * 0x18);
          pdVar5 = (double *)(lVar10 + (long)iVar24 * 0x18);
          pdVar6 = (double *)(lVar10 + (long)iVar12 * 0x18);
          if ((*pdVar2 - *pdVar4) * (*pdVar2 - *pdVar4) + 0.0 +
              (pdVar2[1] - pdVar4[1]) * (pdVar2[1] - pdVar4[1]) +
              (pdVar2[2] - pdVar4[2]) * (pdVar2[2] - pdVar4[2]) <
              (*pdVar6 - *pdVar5) * (*pdVar6 - *pdVar5) + 0.0 +
              (pdVar6[1] - pdVar5[1]) * (pdVar6[1] - pdVar5[1]) +
              (pdVar6[2] - pdVar5[2]) * (pdVar6[2] - pdVar5[2])) goto LAB_00100cf8;
        }
      }
      uStack_a0 = CONCAT44(iVar27,iVar30);
      this = (Impl *)local_90;
      pVVar20 = (Vec *)((long)iVar8 * 0x10);
      local_a8 = uVar21;
      local_98 = iVar24;
      iStack_94 = iVar12;
      do {
        local_200 = *(long *)unaff_R13;
        local_1f8 = *(int *)(unaff_R13 + 8);
        local_118 = local_178;
        dStack_110 = dStack_170;
        uVar29 = local_78 == (code *)0x0;
        local_1d8 = *(undefined8 *)(pVVar20 + *(long *)param_2);
        uStack_1d0 = *(undefined8 *)(pVVar20 + *(long *)param_2 + 8);
        local_108 = local_168;
        local_230 = iVar25;
        if ((bool)uVar29) goto LAB_00101449;
        unaff_R13 = unaff_R13 + 0xc;
        (*pcStack_70)(local_88,&local_230,&local_200,&local_118,&local_1d8);
      } while (this != (Impl *)unaff_R13);
    }
    else {
      local_d8 = CONCAT44(local_d8._4_4_,iVar25);
      std::
      _Function_handler<std::vector<linalg::vec<int,3>,std::allocator<linalg::vec<int,3>>>(int),manifold::Manifold::Impl::Face2Tri(manifold::Vec<int>const&,manifold::Vec<manifold::TriRef>const&)::{lambda(int)#1}>
      ::_M_invoke((_Any_data *)&local_158,(int *)local_68);
      this = (Impl *)local_150;
      unaff_R13 = local_158;
      pVVar11 = local_150;
      if (local_158 != local_150) {
        pVVar20 = (Vec *)(lVar23 * 0x10);
        param_1 = local_158;
        do {
          local_1f4 = *(long *)param_1;
          local_1ec = *(int *)(param_1 + 8);
          local_1c8 = *(undefined8 *)(pVVar20 + *(long *)param_2);
          uStack_1c0 = *(undefined8 *)(pVVar20 + *(long *)param_2 + 8);
          local_f8 = local_178;
          dStack_f0 = dStack_170;
          uVar29 = local_78 == (code *)0x0;
          local_e8 = local_168;
          unaff_R13 = param_2;
          local_22c = iVar25;
          if ((bool)uVar29) goto LAB_00101449;
          param_1 = param_1 + 0xc;
          (*pcStack_70)(local_88,&local_22c,&local_1f4,&local_f8,&local_1c8);
          pVVar11 = local_158;
        } while (this != (Impl *)param_1);
      }
      this = (Impl *)pVVar11;
      if (this != (Impl *)0x0) {
        operator_delete(this,local_148 - (long)this);
      }
    }
    if (local_58 != (code *)0x0) {
      (*local_58)(local_68,local_68,3);
    }
    if (local_78 != (code *)0x0) {
      (*local_78)(local_88,local_88,3);
    }
    uVar26 = uVar26 + 1;
    if (*(long *)(pVVar17 + 8) - 1U <= uVar26) goto LAB_00100e44;
  } while( true );
LAB_00101449:
  std::__throw_bad_function_call();
LAB_0010144e:
  if ((bool)uVar29) {
    lVar10 = *(long *)(pVVar20 + 8);
    *(long *)unaff_R13 = *(long *)pVVar20;
    *(long *)(unaff_R13 + 8) = lVar10;
    *(long *)(unaff_R13 + 0x10) = *(long *)(pVVar20 + 0x10);
    uVar26 = uVar18;
    goto LAB_00101401;
  }
LAB_00101337:
  uVar26 = uVar18;
  if (pVVar20 != (Vec *)0x0) goto LAB_00101401;
  goto LAB_00101343;
}



/* WARNING: Removing unreachable block (ram,0x00101572) */
/* manifold::Manifold::Impl::Face2Polygons(manifold::Halfedge const*, manifold::Halfedge const*,
   linalg::mat<double, 2, 3>) const */

vector<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>,std::allocator<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>>>
* manifold::Manifold::Impl::Face2Polygons
            (vector<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>,std::allocator<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>>>
             *param_1,long param_2,undefined4 *param_3,undefined4 *param_4,undefined8 param_5,
            undefined8 param_6,double param_7,double param_8,double param_9,double param_10,
            double param_11,double param_12)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  undefined1 auVar6 [16];
  _Rb_tree_node_base *p_Var7;
  _Rb_tree_node_base *p_Var8;
  void *pvVar9;
  vector<manifold::PolyVert,std::allocator<manifold::PolyVert>> *pvVar10;
  vector<manifold::PolyVert,std::allocator<manifold::PolyVert>> *pvVar11;
  _Rb_tree_node_base *p_Var12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  long in_FS_OFFSET;
  undefined1 local_98 [16];
  double local_88;
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
  local_78 [8];
  undefined4 local_70 [2];
  _Rb_tree_node_base *local_68;
  _Rb_tree_node_base *local_60;
  _Rb_tree_node_base *local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70[0] = 0;
  local_68 = (_Rb_tree_node_base *)0x0;
  local_50 = 0;
  puVar13 = param_3;
  local_60 = (_Rb_tree_node_base *)local_70;
  local_58 = (_Rb_tree_node_base *)local_70;
  if (param_3 != param_4) {
    do {
      auVar6 = local_98;
      puVar14 = puVar13 + 3;
      local_98._4_4_ = (int)((long)puVar13 - (long)param_3 >> 2) * -0x55555555;
      local_98._0_4_ = *puVar13;
      local_98._8_8_ = auVar6._8_8_;
      std::
      _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
      ::_M_emplace_equal<std::pair<int,int>>(local_78,(pair *)local_98);
      puVar13 = puVar14;
    } while (param_4 != puVar14);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
LAB_00101684:
  if (local_50 == 0) {
    local_50 = 0;
    p_Var7 = local_68;
    while (p_Var7 != (_Rb_tree_node_base *)0x0) {
      std::
      _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
      ::_M_erase(*(_Rb_tree_node **)(p_Var7 + 0x18));
      p_Var12 = *(_Rb_tree_node_base **)(p_Var7 + 0x10);
      operator_delete(p_Var7,0x28);
      p_Var7 = p_Var12;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return param_1;
  }
  pvVar11 = *(vector<manifold::PolyVert,std::allocator<manifold::PolyVert>> **)(param_1 + 8);
  local_88 = 0.0;
  local_98 = (undefined1  [16])0x0;
  iVar4 = *(int *)(local_60 + 0x24);
  iVar3 = iVar4;
  if (pvVar11 == *(vector<manifold::PolyVert,std::allocator<manifold::PolyVert>> **)(param_1 + 0x10)
     ) {
    std::
    vector<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>,std::allocator<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>>>
    ::_M_realloc_insert<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>>
              (param_1,pvVar11,local_98);
    if ((void *)local_98._0_8_ != (void *)0x0) {
      operator_delete((void *)local_98._0_8_,(long)local_88 - local_98._0_8_);
    }
    pvVar10 = *(vector<manifold::PolyVert,std::allocator<manifold::PolyVert>> **)(param_1 + 8);
    pvVar11 = pvVar10 + -0x18;
  }
  else {
    pvVar10 = pvVar11 + 0x18;
    *(undefined8 *)(pvVar11 + 0x10) = 0;
    *(undefined1 (*) [16])pvVar11 = (undefined1  [16])0x0;
    *(vector<manifold::PolyVert,std::allocator<manifold::PolyVert>> **)(param_1 + 8) = pvVar10;
  }
  do {
    iVar2 = param_3[(long)iVar3 * 3];
    local_88 = (double)CONCAT44(local_88._4_4_,iVar2);
    pdVar1 = (double *)(*(long *)(param_2 + 0x48) + (long)iVar2 * 0x18);
    pdVar5 = *(double **)(pvVar10 + -0x10);
    local_98._0_8_ = *pdVar1 * param_7 + pdVar1[1] * param_9 + pdVar1[2] * param_11;
    local_98._8_8_ = *pdVar1 * param_8 + pdVar1[1] * param_10 + pdVar1[2] * param_12;
    if (pdVar5 == *(double **)(pvVar10 + -8)) {
      std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>::
      _M_realloc_insert<manifold::PolyVert>(pvVar11,pdVar5,local_98);
    }
    else {
      *pdVar5 = (double)local_98._0_8_;
      pdVar5[1] = (double)local_98._8_8_;
      pdVar5[2] = local_88;
      *(double **)(pvVar10 + -0x10) = pdVar5 + 3;
    }
    iVar3 = (param_3 + (long)iVar3 * 3)[1];
    p_Var7 = local_68;
    p_Var12 = (_Rb_tree_node_base *)local_70;
    if (local_68 != (_Rb_tree_node_base *)0x0) {
      do {
        while( true ) {
          p_Var8 = p_Var7;
          if (*(int *)(p_Var8 + 0x20) < iVar3) break;
          p_Var7 = *(_Rb_tree_node_base **)(p_Var8 + 0x10);
          p_Var12 = p_Var8;
          if (*(_Rb_tree_node_base **)(p_Var8 + 0x10) == (_Rb_tree_node_base *)0x0)
          goto LAB_00101650;
        }
        p_Var7 = *(_Rb_tree_node_base **)(p_Var8 + 0x18);
      } while (*(_Rb_tree_node_base **)(p_Var8 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_00101650:
      if ((p_Var12 != (_Rb_tree_node_base *)local_70) && (iVar3 < *(int *)(p_Var12 + 0x20))) {
        p_Var12 = (_Rb_tree_node_base *)local_70;
      }
    }
    iVar3 = *(int *)(p_Var12 + 0x24);
    pvVar9 = (void *)std::_Rb_tree_rebalance_for_erase(p_Var12,(_Rb_tree_node_base *)local_70);
    operator_delete(pvVar9,0x28);
    local_50 = local_50 + -1;
    if (iVar4 == iVar3) goto LAB_00101684;
    pvVar10 = *(vector<manifold::PolyVert,std::allocator<manifold::PolyVert>> **)(param_1 + 8);
    pvVar11 = pvVar10 + -0x18;
  } while( true );
}



/* std::_Function_handler<std::vector<linalg::vec<int, 3>, std::allocator<linalg::vec<int, 3> > >
   (int), manifold::Manifold::Impl::Face2Tri(manifold::Vec<int> const&,
   manifold::Vec<manifold::TriRef> const&)::{lambda(int)#1}>::_M_invoke(std::_Any_data const&,
   int&&) */

_Any_data *
std::
_Function_handler<std::vector<linalg::vec<int,3>,std::allocator<linalg::vec<int,3>>>(int),manifold::Manifold::Impl::Face2Tri(manifold::Vec<int>const&,manifold::Vec<manifold::TriRef>const&)::{lambda(int)#1}>
::_M_invoke(_Any_data *param_1,int *param_2)

{
  double *pdVar1;
  long *plVar2;
  long lVar3;
  double dVar4;
  void *pvVar5;
  long lVar6;
  int *in_RDX;
  undefined8 *puVar7;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  double dVar8;
  double dVar9;
  undefined8 *local_78;
  undefined8 *local_70;
  long local_68;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  ulong uStack_30;
  long local_20;
  
  plVar2 = *(long **)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *plVar2;
  pdVar1 = (double *)(*(long *)(lVar3 + 0x90) + (long)*in_RDX * 0x18);
  dVar8 = pdVar1[1];
  dVar4 = pdVar1[2];
  dVar9 = (double)((ulong)*pdVar1 & _LC4);
  if (((double)(_LC4 & (ulong)dVar4) <= dVar9) ||
     ((double)(_LC4 & (ulong)dVar4) <= (double)((ulong)dVar8 & _LC4))) {
    if (dVar9 < (double)((ulong)dVar8 & _LC4)) {
      uStack_30 = 0;
      uStack_50 = _LC3;
    }
    else {
      dVar8 = *pdVar1;
      uStack_30 = _LC3;
      uStack_50 = 0;
    }
    uStack_40 = 0;
    dVar4 = dVar8;
  }
  else {
    uStack_50 = 0;
    uStack_30 = 0;
    uStack_40 = _LC3;
  }
  local_58 = uStack_40;
  local_48 = uStack_30;
  local_38 = uStack_50;
  if (dVar4 < 0.0) {
    local_58 = uStack_40 ^ _LC0;
    local_48 = uStack_30 ^ _LC0;
    local_38 = _LC0 ^ uStack_50;
  }
  lVar6 = (long)(*in_RDX + 1);
  manifold::Manifold::Impl::Face2Polygons
            (&local_78,lVar3,
             *(long *)(lVar3 + 0x60) + (long)*(int *)(*(long *)plVar2[1] + -4 + lVar6 * 4) * 0xc,
             *(long *)(lVar3 + 0x60) + (long)*(int *)(*(long *)plVar2[1] + lVar6 * 4) * 0xc,in_R8,
             in_R9,local_58,uStack_50,local_48,uStack_40,local_38,uStack_30);
  manifold::TriangulateIdx((vector *)param_1,*(double *)(*plVar2 + 0x30));
  for (puVar7 = local_78; local_70 != puVar7; puVar7 = puVar7 + 3) {
    pvVar5 = (void *)*puVar7;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5,puVar7[2] - (long)pvVar5);
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    operator_delete(local_78,local_68 - (long)local_78);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::Manifold::Impl::Project() const */

void manifold::Manifold::Impl::Project(void)

{
  double *pdVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  void *pvVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  size_t __n;
  long *plVar16;
  long *in_RSI;
  undefined1 (*in_RDI) [16];
  undefined8 *puVar17;
  undefined8 *puVar18;
  size_t __size;
  undefined1 (*pauVar19) [16];
  ulong uVar20;
  undefined8 *__src;
  long in_FS_OFFSET;
  undefined8 *local_c8;
  long *local_b8;
  long *local_b0;
  long local_a8;
  undefined1 local_98 [16];
  undefined8 *local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  long local_40;
  
  uVar15 = in_RSI[0xd];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = _LC3;
  uStack_70 = 0;
  uVar20 = uVar15 >> 1;
  local_68 = __LC10;
  uStack_60 = _UNK_00103ae8;
  local_58 = (undefined1  [16])0x0;
  if (uVar20 == 0) {
    puVar11 = (undefined8 *)in_RSI[0xc];
    puVar12 = (undefined8 *)((long)puVar11 + uVar15 * 0xc);
    __src = (undefined8 *)0x0;
    if (puVar12 == puVar11) goto LAB_00101f37;
LAB_001019ff:
    lVar10 = in_RSI[0x12];
    puVar13 = puVar11;
    puVar17 = __src;
    do {
      iVar2 = *(int *)(puVar13 + 1);
      puVar18 = puVar17;
      if ((0.0 <= *(double *)
                   (lVar10 + 0x10 +
                   (long)(*(int *)((long)puVar11 + (long)iVar2 * 0xc + 8) / 3) * 0x18)) &&
         (pdVar1 = (double *)(lVar10 + 0x10 + (long)(iVar2 / 3) * 0x18),
         *pdVar1 <= 0.0 && *pdVar1 != 0.0)) {
        uVar3 = *puVar13;
        *(int *)(puVar17 + 1) = iVar2;
        puVar18 = (undefined8 *)((long)puVar17 + 0xc);
        *puVar17 = uVar3;
      }
      puVar13 = (undefined8 *)((long)puVar13 + 0xc);
      puVar17 = puVar18;
    } while (puVar12 != puVar13);
    __size = (long)puVar18 - (long)__src;
    uVar14 = ((long)__size >> 2) * -0x5555555555555555;
    uVar15 = ((long)__size >> 2) * 0x5555555555555556;
    if (uVar14 <= uVar20) {
      local_c8 = __src;
      if (uVar20 <= uVar15) goto LAB_00101dc0;
      puVar13 = __src;
      if (uVar14 == 0) {
        local_c8 = (undefined8 *)0x0;
        __size = 0;
        goto LAB_00101ac7;
      }
LAB_00101ef5:
      local_c8 = (undefined8 *)malloc(__size);
      if ((long)__size < 0xd) {
        if (__size != 0xc) goto LAB_00101ac7;
        __size = 0xc;
        *local_c8 = *puVar13;
        *(undefined4 *)(local_c8 + 1) = *(undefined4 *)(puVar13 + 1);
      }
      else {
        memcpy(local_c8,puVar13,__size);
      }
      goto LAB_00101f25;
    }
    puVar13 = (undefined8 *)malloc(__size);
    local_c8 = puVar13;
    if (uVar20 == 0) {
      if (__src != (undefined8 *)0x0) {
        free(__src);
      }
      puVar12 = (undefined8 *)((long)puVar13 + __size);
      puVar11 = puVar13;
      if (puVar12 != puVar13) {
LAB_00101da0:
        do {
          *puVar11 = 0;
          puVar12 = (undefined8 *)((long)puVar11 + 0xc);
          *(undefined4 *)(puVar11 + 1) = 0;
          puVar11 = puVar12;
        } while (puVar12 != (undefined8 *)((long)puVar13 + __size));
        if (uVar20 <= uVar15) goto LAB_00101dc0;
        goto LAB_00101ef5;
      }
    }
    else {
      __n = uVar20 * 0xc;
      if ((long)__n < 0xd) {
        if (__n == 0xc) {
          *puVar13 = *__src;
          *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(__src + 1);
          goto LAB_00101ea7;
        }
        if (__src != (undefined8 *)0x0) goto LAB_00101ea7;
      }
      else {
        memcpy(puVar13,__src,__n);
LAB_00101ea7:
        free(__src);
      }
      puVar12 = (undefined8 *)((long)puVar13 + __size);
      puVar11 = (undefined8 *)((long)puVar13 + uVar20 * 0xc);
      if (puVar11 != puVar12) goto LAB_00101da0;
      if (uVar15 < uVar20) goto LAB_00101ef5;
    }
  }
  else {
    puVar13 = (undefined8 *)malloc(uVar20 * 0xc);
    puVar11 = (undefined8 *)in_RSI[0xc];
    puVar12 = (undefined8 *)((long)puVar11 + uVar15 * 0xc);
    __src = puVar13;
    if (puVar12 != puVar11) goto LAB_001019ff;
    local_c8 = (undefined8 *)0x0;
    __size = 0;
LAB_00101ac7:
    if (puVar13 != (undefined8 *)0x0) {
LAB_00101f25:
      free(puVar13);
    }
    puVar12 = (undefined8 *)((long)local_c8 + __size);
  }
  while( true ) {
    Face2Polygons(&local_b8,in_RSI,local_c8,puVar12);
    plVar7 = local_b0;
    plVar6 = local_b8;
    *(undefined8 *)in_RDI[1] = 0;
    *in_RDI = (undefined1  [16])0x0;
    in_RSI = local_b8;
    if (local_b0 == local_b8) break;
LAB_00101b50:
    puVar12 = (undefined8 *)*in_RSI;
    puVar11 = (undefined8 *)in_RSI[1];
    local_88 = (undefined8 *)0x0;
    local_98 = (undefined1  [16])0x0;
    if (puVar11 == puVar12) {
      puVar12 = *(undefined8 **)(*in_RDI + 8);
      if (*(undefined8 **)in_RDI[1] == puVar12) {
LAB_00101e54:
        std::
        vector<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>,std::allocator<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>>>
        ::
        _M_realloc_insert<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>const&>
                  ();
      }
      else {
        *puVar12 = 0;
        puVar12[2] = 0;
        puVar12[1] = 0;
        *(undefined8 **)(*in_RDI + 8) = puVar12 + 3;
      }
      goto LAB_00101c85;
    }
    local_98._8_8_ = (undefined8 *)0x0;
    while( true ) {
      if ((undefined8 *)local_98._8_8_ == local_88) {
        std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>::
        _M_realloc_insert<linalg::vec<double,2>const&>
                  ((vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)local_98,
                   local_98._8_8_,puVar12);
      }
      else {
        uVar3 = puVar12[1];
        *(undefined8 *)local_98._8_8_ = *puVar12;
        *(undefined8 *)(local_98._8_8_ + 8) = uVar3;
        local_98._8_8_ = (undefined8 *)(local_98._8_8_ + 0x10);
      }
      uVar3 = local_98._8_8_;
      if (puVar11 == puVar12 + 3) break;
      puVar12 = puVar12 + 3;
    }
    pauVar4 = *(undefined1 (**) [16])(*in_RDI + 8);
    uVar8 = local_98._0_8_;
    if (pauVar4 == *(undefined1 (**) [16])in_RDI[1]) {
      uVar15 = (long)local_88 - local_98._0_8_;
      std::
      vector<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>,std::allocator<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>>>
      ::
      _M_realloc_insert<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>const&>
                ();
LAB_00101def:
      if ((undefined8 *)uVar8 == (undefined8 *)0x0) goto LAB_00101c85;
LAB_00101c7a:
      operator_delete((void *)uVar8,uVar15);
LAB_00101c85:
      in_RSI = in_RSI + 3;
      plVar16 = plVar6;
      if (plVar7 == in_RSI) goto LAB_00101ca0;
      goto LAB_00101b50;
    }
    *(undefined8 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
    uVar15 = local_98._8_8_ - local_98._0_8_;
    if (uVar15 == 0) {
      lVar10 = 0;
      pvVar9 = (void *)0x0;
      uVar15 = (long)local_88 - local_98._0_8_;
      pauVar19 = pauVar4;
LAB_00101c3f:
      *(void **)*pauVar4 = pvVar9;
      *(long *)pauVar4[1] = lVar10;
      if (uVar3 == uVar8) {
        *(void **)(*pauVar4 + 8) = pvVar9;
        *(undefined1 **)(*in_RDI + 8) = pauVar19[1] + 8;
        goto LAB_00101def;
      }
      lVar10 = 0;
      do {
        uVar5 = ((undefined8 *)(uVar8 + lVar10))[1];
        *(undefined8 *)((long)pvVar9 + lVar10) = *(undefined8 *)(uVar8 + lVar10);
        ((undefined8 *)((long)pvVar9 + lVar10))[1] = uVar5;
        lVar10 = lVar10 + 0x10;
      } while (lVar10 != uVar3 - uVar8);
      *(long *)(*pauVar4 + 8) = lVar10 + (long)pvVar9;
      *(undefined1 **)(*in_RDI + 8) = pauVar19[1] + 8;
      goto LAB_00101c7a;
    }
    if (uVar15 < 0x7ffffffffffffff1) {
      pvVar9 = operator_new(uVar15);
      lVar10 = (long)pvVar9 + uVar15;
      uVar15 = (long)local_88 - uVar8;
      pauVar19 = *(undefined1 (**) [16])(*in_RDI + 8);
      goto LAB_00101c3f;
    }
    if ((long)uVar15 < 0) {
      std::__throw_bad_array_new_length();
      goto LAB_00101e54;
    }
    std::__throw_bad_alloc();
LAB_00101f37:
    local_c8 = (undefined8 *)0x0;
    __size = 0;
LAB_00101dc0:
    puVar12 = (undefined8 *)((long)local_c8 + __size);
  }
LAB_00101cbd:
  if (plVar6 != (long *)0x0) {
    operator_delete(plVar6,local_a8 - (long)plVar6);
  }
  if (local_c8 != (undefined8 *)0x0) {
    free(local_c8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00101ca0:
  do {
    pvVar9 = (void *)*plVar16;
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9,plVar16[2] - (long)pvVar9);
    }
    plVar16 = plVar16 + 3;
  } while (plVar7 != plVar16);
  goto LAB_00101cbd;
}



/* manifold::Manifold::Impl::Slice(double) const */

vector<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>,std::allocator<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>>>
* manifold::Manifold::Impl::Slice(double param_1)

{
  uint *puVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  size_t sVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  double *__ptr;
  double *pdVar16;
  long lVar17;
  vector<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>,std::allocator<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>>>
  *pvVar18;
  void *pvVar19;
  SparseIndices *pSVar20;
  SparseIndices **ppSVar21;
  vector<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>,std::allocator<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>>>
  *pvVar22;
  vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *pvVar23;
  ulong uVar24;
  vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *extraout_RDX;
  vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *extraout_RDX_00;
  vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *pvVar25;
  int iVar26;
  double *in_RSI;
  vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *pvVar27;
  SparseIndices **ppSVar28;
  vector<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>,std::allocator<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>>>
  *in_RDI;
  vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *pvVar29;
  double dVar30;
  vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *pvVar31;
  ulong __size;
  vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *pvVar32;
  uint uVar33;
  vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *pvVar34;
  vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *pvVar35;
  long in_FS_OFFSET;
  double dVar36;
  double dVar37;
  double extraout_XMM0_Qa;
  undefined1 auVar38 [16];
  vector<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>,std::allocator<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>>>
  *local_278;
  double local_218;
  double dStack_210;
  vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *local_208;
  undefined1 local_200 [16];
  undefined1 local_1e8 [16];
  double *local_1d8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  SparseIndices **local_188;
  vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *local_180;
  vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *local_178;
  double local_170;
  double local_168;
  double local_160;
  SparseIndices *local_158 [2];
  undefined8 local_148;
  undefined4 local_140;
  vector<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>,std::allocator<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>>>
  local_13c [252];
  long local_40;
  
  dVar36 = in_RSI[1];
  dVar30 = *in_RSI;
  dVar37 = in_RSI[3];
  dVar3 = in_RSI[4];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = (double *)malloc(0x1800);
  local_208 = (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)0x0;
  dVar6 = in_RSI[0x2e];
  *__ptr = dVar30;
  __ptr[1] = dVar36;
  dVar7 = in_RSI[0x28];
  local_170 = in_RSI[0x29];
  __ptr[4] = dVar3;
  __ptr[5] = param_1;
  __ptr[2] = param_1;
  __ptr[3] = dVar37;
  local_160 = in_RSI[0x2f];
  local_180 = (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)0x1;
  iVar26 = -1;
  local_200 = (undefined1  [16])0x0;
  uVar33 = 1;
  local_188 = (SparseIndices **)__ptr;
  local_178 = (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)dVar7;
  local_168 = dVar6;
  local_158[0] = (SparseIndices *)&local_208;
LAB_00102128:
  do {
    pvVar31 = local_208;
    puVar1 = (uint *)((long)dVar6 + (long)((int)(uVar33 - 1) / 2) * 8);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    pdVar16 = (double *)((long)(int)uVar4 * 0x30 + (long)dVar7);
    uVar33 = uVar5;
    if (((((dVar37 < *pdVar16) || (dVar3 < pdVar16[1])) || (param_1 < pdVar16[2])) ||
        ((pdVar16[3] < dVar30 || (pdVar16[4] < dVar36)))) || (pdVar16[5] < param_1)) break;
    if ((uVar4 & 1) == 0) {
      uVar10 = local_200._0_8_;
      uVar24 = local_200._0_8_ + 8;
      pvVar32 = local_208;
      sVar12 = local_200._8_8_;
      if ((ulong)local_200._8_8_ <= uVar24) {
        if (local_200._8_8_ == 0) {
          __size = 0x80;
        }
        else {
          __size = local_200._8_8_ * 2;
          if ((ulong)(local_200._8_8_ * 2) < uVar24) {
            __size = uVar24;
          }
          if (__size <= (ulong)local_200._8_8_) goto LAB_00102299;
        }
        pvVar32 = (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)
                  malloc(__size);
        sVar12 = __size;
        if (uVar10 == 0) {
LAB_001028fa:
          if (pvVar31 == (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)0x0)
          goto LAB_00102299;
        }
        else if ((long)uVar10 < 2) {
          if (uVar10 != 1) goto LAB_001028fa;
          *pvVar32 = *pvVar31;
        }
        else {
          pvVar32 = (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)
                    memmove(pvVar32,pvVar31,uVar10);
        }
        free(pvVar31);
      }
LAB_00102299:
      local_200._8_8_ = sVar12;
      local_208 = pvVar32;
      local_200._0_8_ = uVar24;
      *(long *)(local_208 + ((uVar24 & 0xfffffffffffffff8) - 8)) = (long)((int)uVar4 / 2);
    }
    iVar14 = collider_internal::
             FindCollision<manifold::Box,false,manifold::collider_internal::SeqCollisionRecorder<false>>
             ::RecordCollision((FindCollision<manifold::Box,false,manifold::collider_internal::SeqCollisionRecorder<false>>
                                *)&local_188,uVar5,0,(SparseIndices *)&local_208);
    if ((int)uVar4 % 2 != 1 && iVar14 == 0) goto LAB_0010222f;
    if (((int)uVar4 % 2 == 1) && (uVar33 = uVar4, iVar14 != 0)) {
      iVar26 = iVar26 + 1;
      *(uint *)((long)&local_148 + (long)iVar26 * 4) = uVar5;
    }
  } while( true );
  iVar14 = collider_internal::
           FindCollision<manifold::Box,false,manifold::collider_internal::SeqCollisionRecorder<false>>
           ::RecordCollision((FindCollision<manifold::Box,false,manifold::collider_internal::SeqCollisionRecorder<false>>
                              *)&local_188,uVar5,0,(SparseIndices *)&local_208);
  if (iVar14 != 0) goto LAB_00102128;
LAB_0010222f:
  uVar10 = _LC15;
  if (-1 < iVar26) {
    lVar17 = (long)iVar26;
    iVar26 = iVar26 + -1;
    uVar33 = *(uint *)((long)&local_148 + lVar17 * 4);
    goto LAB_00102128;
  }
  local_180 = (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)0x1;
  local_178 = (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)0x0;
  local_170 = 0.0;
  local_168 = (double)CONCAT44(local_168._4_4_,0x3f800000);
  local_160 = 0.0;
  local_158[0] = (SparseIndices *)0x0;
  local_188 = local_158;
  if ((ulong)local_200._0_8_ >> 3 == 0) {
    *(undefined8 *)(in_RDI + 0x10) = 0;
    *(undefined1 (*) [16])in_RDI = (undefined1  [16])0x0;
LAB_0010274e:
    memset(local_188,0,(long)local_180 * 8);
    local_170 = 0.0;
    local_178 = (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)0x0;
    if (local_188 != local_158) {
      operator_delete(local_188,(long)local_180 << 3);
    }
    if (local_208 != (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)0x0) {
      free(local_208);
    }
    free(__ptr);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return in_RDI;
  }
  dVar36 = 0.0;
  pvVar18 = local_13c;
  pvVar31 = local_208 + ((ulong)local_200._0_8_ >> 3) * 8;
  pvVar32 = local_208;
  pvVar35 = pvVar31;
LAB_00102358:
  iVar26 = *(int *)pvVar32;
  local_148 = uVar10;
  local_140 = 2;
  pvVar22 = (vector<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>,std::allocator<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>>>
             *)&local_148;
  dVar30 = _LC13;
  dVar37 = _LC12;
  do {
    iVar14 = *(int *)pvVar22;
    pvVar22 = pvVar22 + 4;
    dVar3 = *(double *)
             ((long)in_RSI[9] + 0x10 +
             (long)*(int *)((long)in_RSI[0xc] + (long)(iVar14 + iVar26 * 3) * 0xc) * 0x18);
    dVar6 = dVar3;
    if (dVar3 <= dVar37) {
      dVar6 = dVar37;
    }
    if (dVar30 <= dVar3) {
      dVar3 = dVar30;
    }
    dVar30 = dVar3;
    dVar37 = dVar6;
  } while (pvVar22 != pvVar18);
  if ((dVar30 <= param_1) && (param_1 < dVar6)) {
    pvVar29 = local_178;
    if (dVar36 == 0.0) {
      while( true ) {
        if (pvVar29 == (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)0x0) {
          uVar24 = (ulong)(long)iVar26 % (ulong)local_180;
          goto LAB_00102b1d;
        }
        if (iVar26 == *(int *)(pvVar29 + 8)) break;
        pvVar29 = *(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **)pvVar29;
      }
    }
    else {
      uVar24 = (ulong)(long)iVar26 % (ulong)local_180;
      pvVar29 = (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)
                local_188[uVar24];
      if (pvVar29 == (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)0x0) {
LAB_00102b1d:
        local_278 = (vector<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>,std::allocator<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>>>
                     *)(long)iVar26;
        pvVar23 = (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)
                  operator_new(0x10);
        ppSVar21 = (SparseIndices **)0x1;
        *(int *)(pvVar23 + 8) = iVar26;
        pvVar29 = (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)&local_168;
        *(undefined8 *)pvVar23 = 0;
        pvVar27 = local_180;
        cVar13 = std::__detail::_Prime_rehash_policy::_M_need_rehash
                           ((ulong)pvVar29,(ulong)local_180,(ulong)local_170);
        pvVar25 = extraout_RDX;
        pvVar34 = extraout_RDX;
        if (cVar13 != '\0') goto LAB_00102c3a;
        ppSVar28 = local_188 + uVar24;
        pSVar20 = *ppSVar28;
        if (pSVar20 == (SparseIndices *)0x0) goto LAB_00102d3a;
        goto LAB_00102b8b;
      }
      iVar14 = *(int *)(*(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **)
                         pvVar29 + 8);
      pvVar34 = *(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **)pvVar29;
      while (iVar26 != iVar14) {
        pvVar31 = *(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **)pvVar34;
        if ((pvVar31 == (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)0x0)
           || (iVar14 = *(int *)(pvVar31 + 8), pvVar29 = pvVar34, pvVar34 = pvVar31,
              (ulong)(long)iVar14 % (ulong)local_180 != uVar24)) goto LAB_00102b1d;
      }
      if (*(long *)pvVar29 == 0) goto LAB_00102b1d;
    }
  }
LAB_001023db:
  pvVar32 = pvVar32 + 8;
  if (pvVar32 == pvVar35) {
    *(undefined8 *)(in_RDI + 0x10) = 0;
    *(undefined1 (*) [16])in_RDI = (undefined1  [16])0x0;
    pvVar31 = local_178;
    if (dVar36 != 0.0) {
      do {
        iVar26 = *(int *)(local_178 + 8);
        local_1d8 = (double *)0x0;
        dVar30 = in_RSI[0xc];
        local_140 = 2;
        local_1e8 = (undefined1  [16])0x0;
        pvVar22 = (vector<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>,std::allocator<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>>>
                   *)&local_148;
        do {
          iVar14 = *(int *)pvVar22;
          dVar37 = *(double *)
                    ((long)in_RSI[9] + 0x10 +
                    (long)*(int *)((long)dVar30 + (long)(iVar26 * 3 + iVar14) * 0xc) * 0x18);
          iVar8 = iVar26;
          local_148 = uVar10;
          if (param_1 < dVar37) {
            iVar15 = 1;
            if (iVar14 != 0) {
              iVar15 = (uint)(iVar14 == 1) * 2;
            }
            if (*(double *)
                 ((long)in_RSI[9] + 0x10 +
                 (long)*(int *)((long)dVar30 + (long)(iVar15 + iVar26 * 3) * 0xc) * 0x18) <= param_1
               ) {
              iVar15 = 1;
              if (iVar14 != 0) {
                iVar15 = (uint)(iVar14 == 1) * 2;
              }
              goto joined_r0x001024ce;
            }
          }
          pvVar22 = pvVar22 + 4;
        } while (pvVar22 != pvVar18);
        iVar15 = 0;
joined_r0x001024ce:
        do {
          pvVar31 = local_180;
          local_180 = pvVar31;
          if (dVar36 == 0.0) {
            pvVar32 = local_178;
            if (local_178 ==
                (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)0x0) {
              pvVar18 = (vector<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>,std::allocator<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>>>
                         *)Slice(dVar37);
              return pvVar18;
            }
            while (iVar14 = iVar8, *(int *)(pvVar32 + 8) != iVar8) {
              pvVar32 = *(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **)
                         pvVar32;
              if (pvVar32 ==
                  (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)0x0) {
                pvVar18 = (vector<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>,std::allocator<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>>>
                           *)Slice(dVar37);
                return pvVar18;
              }
            }
          }
          else {
            pvVar32 = (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)
                      local_188[(ulong)(long)iVar8 % (ulong)pvVar31];
            if (pvVar32 !=
                (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)0x0) {
              iVar14 = *(int *)(*(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>
                                  **)pvVar32 + 8);
              pvVar35 = *(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **)
                         pvVar32;
              do {
                if (iVar14 == iVar8) {
                  pvVar32 = *(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **
                             )pvVar32;
                  goto LAB_00102728;
                }
                pvVar29 = *(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **)
                           pvVar35;
              } while ((pvVar29 !=
                        (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)0x0)
                      && (iVar14 = *(int *)(pvVar29 + 8), pvVar32 = pvVar35, pvVar35 = pvVar29,
                         (ulong)(long)iVar8 % (ulong)pvVar31 == (ulong)(long)iVar14 % (ulong)pvVar31
                         ));
              pvVar32 = (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)0x0;
            }
LAB_00102728:
            iVar14 = *(int *)(pvVar32 + 8);
          }
          pvVar23 = (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)
                    ((ulong)(long)iVar14 % (ulong)pvVar31);
          ppSVar21 = local_188 + (long)pvVar23;
          pvVar35 = (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)*ppSVar21
          ;
          do {
            pvVar29 = pvVar35;
            pvVar35 = *(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **)
                       pvVar29;
          } while (pvVar32 != pvVar35);
          pvVar32 = *(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **)pvVar35
          ;
          if ((vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)*ppSVar21 ==
              pvVar29) {
            if (pvVar32 ==
                (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)0x0) {
              if (pvVar29 ==
                  (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)&local_178)
              {
LAB_001028a0:
                local_178 = pvVar32;
              }
            }
            else {
              if (pvVar23 ==
                  (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)
                  ((ulong)(long)*(int *)(pvVar32 + 8) % (ulong)pvVar31)) goto LAB_00102561;
              local_188[(long)((ulong)(long)*(int *)(pvVar32 + 8) % (ulong)pvVar31)] =
                   (SparseIndices *)pvVar29;
              if (*ppSVar21 == (SparseIndices *)&local_178) goto LAB_001028a0;
            }
            *ppSVar21 = (SparseIndices *)0x0;
            pvVar32 = *(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **)
                       pvVar35;
          }
          else if ((pvVar32 !=
                    (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)0x0) &&
                  (pvVar23 !=
                   (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)
                   ((ulong)(long)*(int *)(pvVar32 + 8) % (ulong)pvVar31))) {
            local_188[(long)((ulong)(long)*(int *)(pvVar32 + 8) % (ulong)pvVar31)] =
                 (SparseIndices *)pvVar29;
            pvVar32 = *(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **)
                       pvVar35;
          }
LAB_00102561:
          *(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **)pvVar29 = pvVar32
          ;
          operator_delete(pvVar35,0x10);
          uVar33 = iVar8 * 3;
          ppSVar21 = (SparseIndices **)(ulong)uVar33;
          pvVar29 = (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)
                    in_RSI[0xc];
          dVar36 = in_RSI[9];
          local_170 = (double)((long)local_170 - 1);
          pvVar32 = pvVar29 + (long)(int)(uVar33 + iVar15) * 0xc;
          pdVar16 = (double *)((long)dVar36 + (long)*(int *)(pvVar32 + 4) * 0x18);
          if (pdVar16[2] <= param_1) {
            if (iVar15 == 0) {
              ppSVar21 = (SparseIndices **)(long)(int)(uVar33 + 1);
              pvVar32 = pvVar29 + (long)ppSVar21 * 0xc;
              pdVar16 = (double *)((long)dVar36 + (long)*(int *)(pvVar32 + 4) * 0x18);
            }
            else {
              pvVar32 = pvVar29 + (long)(int)(uVar33 + (uint)(iVar15 == 1) * 2) * 0xc;
              pdVar16 = (double *)((long)dVar36 + (long)*(int *)(pvVar32 + 4) * 0x18);
            }
          }
          iVar14 = *(int *)(pvVar32 + 8);
          local_1a8 = *pdVar16;
          dStack_1a0 = pdVar16[1];
          pdVar2 = (double *)((long)dVar36 + (long)*(int *)pvVar32 * 0x18);
          local_1c8 = *pdVar2;
          dStack_1c0 = pdVar2[1];
          local_1b8 = pdVar2[2];
          local_198 = pdVar16[2];
          dVar36 = (param_1 - local_1b8) / (local_198 - local_1b8);
          dVar37 = dVar36 * local_1a8 + (_LC3 - dVar36) * local_1c8;
          dStack_210 = dVar36 * dStack_1a0 + (_LC3 - dVar36) * dStack_1c0;
          local_218 = dVar37;
          if ((double *)local_1e8._8_8_ == local_1d8) {
            pvVar29 = (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)
                      local_1e8;
            std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>::
            _M_realloc_insert<linalg::vec<double,2>>(pvVar29,local_1e8._8_8_,&local_218);
            pvVar27 = (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)
                      local_1e8._8_8_;
            dVar37 = extraout_XMM0_Qa;
          }
          else {
            pvVar27 = (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)
                      (local_1e8._8_8_ + 0x10);
            *(double *)local_1e8._8_8_ = dVar37;
            *(double *)(local_1e8._8_8_ + 8) = dStack_210;
            local_1e8._8_8_ = pvVar27;
          }
          iVar15 = 1;
          iVar8 = iVar14 / 3;
          iVar14 = iVar14 % 3;
          if (iVar14 != 0) {
            dVar30 = (double)(ulong)(iVar14 == 1);
            iVar15 = (uint)(iVar14 == 1) * 2;
          }
          dVar36 = local_170;
        } while (iVar8 != iVar26);
        uVar11 = local_1e8._0_8_;
        pvVar34 = *(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **)
                   (in_RDI + 8);
        if (pvVar34 ==
            *(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **)(in_RDI + 0x10)
           ) {
          std::
          vector<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>,std::allocator<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>>>
          ::
          _M_realloc_insert<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>const&>
                    (in_RDI,pvVar34,local_1e8);
LAB_00102aa1:
          if ((vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)uVar11 !=
              (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)0x0)
          goto LAB_001029c2;
        }
        else {
          *(undefined8 *)(pvVar34 + 0x10) = 0;
          *(undefined1 (*) [16])pvVar34 = (undefined1  [16])0x0;
          pvVar35 = pvVar27 + -local_1e8._0_8_;
          if (pvVar35 == (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)0x0)
          {
            pvVar19 = (void *)0x0;
            *(undefined8 *)pvVar34 = 0;
            *(undefined8 *)(pvVar34 + 0x10) = 0;
            pvVar31 = pvVar34;
          }
          else {
            if ((vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)
                0x7ffffffffffffff0 < pvVar35) goto LAB_00102c2c;
            pvVar19 = operator_new((ulong)pvVar35);
            pvVar31 = *(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **)
                       (in_RDI + 8);
            *(void **)pvVar34 = pvVar19;
            *(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **)
             (pvVar34 + 0x10) = pvVar35 + (long)pvVar19;
          }
          if ((vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)uVar11 ==
              pvVar27) {
            *(void **)(pvVar34 + 8) = pvVar19;
            *(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **)(in_RDI + 8) =
                 pvVar31 + 0x18;
            goto LAB_00102aa1;
          }
          lVar17 = 0;
          do {
            uVar9 = *(undefined8 *)
                     ((vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)
                      (uVar11 + lVar17) + 8);
            *(undefined8 *)((long)pvVar19 + lVar17) = *(undefined8 *)(uVar11 + lVar17);
            ((undefined8 *)((long)pvVar19 + lVar17))[1] = uVar9;
            lVar17 = lVar17 + 0x10;
          } while (lVar17 != (long)pvVar27 - uVar11);
          *(long *)(pvVar34 + 8) = (long)pvVar19 + lVar17;
          *(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **)(in_RDI + 8) =
               pvVar31 + 0x18;
LAB_001029c2:
          operator_delete((void *)uVar11,(long)local_1d8 - uVar11);
        }
        dVar36 = local_170;
        pvVar31 = local_178;
        if (local_170 == 0.0) break;
      } while( true );
    }
    while (pvVar31 != (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)0x0) {
      pvVar32 = *(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **)pvVar31;
      operator_delete(pvVar31,0x10);
      pvVar31 = pvVar32;
    }
    goto LAB_0010274e;
  }
  goto LAB_00102358;
LAB_00102c2c:
  pvVar18 = in_RDI;
  pvVar32 = (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)local_1e8._0_8_;
  local_278 = in_RDI;
  if ((long)pvVar35 < 0) {
    do {
      std::__throw_bad_array_new_length();
      pvVar25 = extraout_RDX_00;
LAB_00102c3a:
      if (pvVar25 == (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)0x1) {
        local_158[0] = (SparseIndices *)0x0;
        ppSVar21 = local_158;
LAB_00102c82:
        pvVar29 = local_178;
        local_178 = (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)0x0;
        pvVar31 = (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)&local_178;
        dVar36 = 0.0;
        goto joined_r0x00102ca4;
      }
      if ((ulong)pvVar25 >> 0x3c == 0) {
        pvVar19 = operator_new((long)pvVar25 * 8);
        ppSVar21 = (SparseIndices **)memset(pvVar19,0,(long)pvVar25 * 8);
        goto LAB_00102c82;
      }
      dVar30 = (double)((ulong)pvVar25 >> 0x3d);
    } while (dVar30 != 0.0);
  }
  auVar38 = std::__throw_bad_alloc();
LAB_00102d86:
  *(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **)pvVar27 = local_178;
  local_178 = pvVar27;
  *auVar38._0_8_ = pvVar31;
  dVar36 = auVar38._8_8_;
  if (*(long *)pvVar27 != 0) {
    ppSVar21[(long)dVar30] = (SparseIndices *)pvVar27;
  }
joined_r0x00102ca4:
  while (dVar30 = dVar36, pvVar27 = pvVar29,
        pvVar27 != (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)0x0) {
    pvVar29 = *(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **)pvVar27;
    ppSVar28 = ppSVar21 + (ulong)(long)*(int *)(pvVar27 + 8) % (ulong)pvVar34;
    auVar38._8_8_ = (ulong)(long)*(int *)(pvVar27 + 8) % (ulong)pvVar34;
    auVar38._0_8_ = ppSVar28;
    if (*ppSVar28 == (SparseIndices *)0x0) goto LAB_00102d86;
    *(undefined8 *)pvVar27 = *(undefined8 *)*ppSVar28;
    *(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **)*ppSVar28 = pvVar27;
    dVar36 = dVar30;
  }
  if (local_188 != local_158) {
    operator_delete(local_188,(long)local_180 << 3);
  }
  ppSVar28 = ppSVar21 + (ulong)local_278 % (ulong)pvVar34;
  pSVar20 = *ppSVar28;
  local_188 = ppSVar21;
  local_180 = pvVar34;
  if (pSVar20 == (SparseIndices *)0x0) {
LAB_00102d3a:
    *(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **)pvVar23 = local_178;
    if (local_178 != (vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> *)0x0) {
      local_188[(ulong)(long)*(int *)(local_178 + 8) % (ulong)local_180] = (SparseIndices *)pvVar23;
    }
    *ppSVar28 = (SparseIndices *)&local_178;
    local_178 = pvVar23;
  }
  else {
LAB_00102b8b:
    *(undefined8 *)pvVar23 = *(undefined8 *)pSVar20;
    *(vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>> **)*ppSVar28 = pvVar23;
  }
  dVar36 = (double)((long)local_170 + 1);
  local_170 = dVar36;
  goto LAB_001023db;
}



/* std::_Rb_tree_iterator<std::pair<int const, int> > std::_Rb_tree<int, std::pair<int const, int>,
   std::_Select1st<std::pair<int const, int> >, std::less<int>, std::allocator<std::pair<int const,
   int> > >::_M_emplace_equal<std::pair<int, int> >(std::pair<int, int>&&) */

_Rb_tree_node_base * __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_emplace_equal<std::pair<int,int>>
          (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
           *this,pair *param_1)

{
  _Rb_tree_node_base *p_Var1;
  undefined8 uVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  bool bVar6;
  int iVar7;
  
  p_Var3 = (_Rb_tree_node_base *)operator_new(0x28);
  uVar2 = *(undefined8 *)param_1;
  p_Var4 = *(_Rb_tree_node_base **)(this + 0x10);
  *(undefined8 *)(p_Var3 + 0x20) = uVar2;
  p_Var1 = (_Rb_tree_node_base *)(this + 8);
  if (p_Var4 == (_Rb_tree_node_base *)0x0) {
    bVar6 = true;
    p_Var5 = p_Var1;
  }
  else {
    do {
      p_Var5 = p_Var4;
      iVar7 = (int)uVar2;
      p_Var4 = *(_Rb_tree_node_base **)(p_Var5 + 0x18);
      if (iVar7 < *(int *)(p_Var5 + 0x20)) {
        p_Var4 = *(_Rb_tree_node_base **)(p_Var5 + 0x10);
      }
    } while (p_Var4 != (_Rb_tree_node_base *)0x0);
    if (p_Var1 == p_Var5) {
      bVar6 = true;
    }
    else {
      bVar6 = iVar7 < *(int *)(p_Var5 + 0x20);
    }
  }
  std::_Rb_tree_insert_and_rebalance(bVar6,p_Var3,p_Var5,p_Var1);
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  return p_Var3;
}



/* void std::vector<std::vector<linalg::vec<double, 2>, std::allocator<linalg::vec<double, 2> > >,
   std::allocator<std::vector<linalg::vec<double, 2>, std::allocator<linalg::vec<double, 2> > > >
   >::_M_realloc_insert<std::vector<linalg::vec<double, 2>, std::allocator<linalg::vec<double, 2> >
   > const&>(__gnu_cxx::__normal_iterator<std::vector<linalg::vec<double, 2>,
   std::allocator<linalg::vec<double, 2> > >*, std::vector<std::vector<linalg::vec<double, 2>,
   std::allocator<linalg::vec<double, 2> > >, std::allocator<std::vector<linalg::vec<double, 2>,
   std::allocator<linalg::vec<double, 2> > > > > >, std::vector<linalg::vec<double, 2>,
   std::allocator<linalg::vec<double, 2> > > const&) */

void __thiscall
std::
vector<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>,std::allocator<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>>>
::_M_realloc_insert<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>const&>
          (vector<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>,std::allocator<std::vector<linalg::vec<double,2>,std::allocator<linalg::vec<double,2>>>>>
           *this,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long *extraout_RDX;
  long lVar14;
  undefined1 (*pauVar15) [16];
  ulong uVar16;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  lVar5 = (long)puVar1 - (long)puVar2 >> 3;
  uVar6 = lVar5 * -0x5555555555555555;
  if (uVar6 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  pauVar15 = (undefined1 (*) [16])((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    if (uVar6 != 0xffffffffffffffff) {
      uVar16 = 0x555555555555555;
      if (uVar6 + 1 < 0x555555555555556) {
        uVar16 = uVar6 + 1;
      }
      uVar6 = uVar16 * 0x18;
      goto LAB_00103095;
    }
  }
  else {
    uVar16 = lVar5 * 0x5555555555555556;
    if (uVar6 <= uVar16) {
      if (uVar16 != 0) goto LAB_00103105;
      puVar11 = (undefined8 *)0x0;
      goto LAB_00102f22;
    }
  }
  uVar6 = 0x7ffffffffffffff8;
  uVar16 = 0x555555555555555;
LAB_00103095:
  while( true ) {
    puVar11 = (undefined8 *)operator_new(uVar6);
LAB_00102f22:
    lVar5 = param_3[1];
    lVar14 = *param_3;
    pauVar15 = (undefined1 (*) [16])(*pauVar15 + (long)puVar11);
    *(undefined8 *)pauVar15[1] = 0;
    *pauVar15 = (undefined1  [16])0x0;
    uVar6 = lVar5 - lVar14;
    if (uVar6 == 0) break;
    if (uVar6 < 0x7ffffffffffffff1) {
      pvVar7 = operator_new(uVar6);
      lVar5 = param_3[1];
      lVar14 = *param_3;
LAB_00102f85:
      *(void **)*pauVar15 = pvVar7;
      *(ulong *)pauVar15[1] = uVar6 + (long)pvVar7;
      if (lVar5 != lVar14) {
        lVar12 = 0;
        do {
          uVar3 = ((undefined8 *)(lVar14 + lVar12))[1];
          *(undefined8 *)((long)pvVar7 + lVar12) = *(undefined8 *)(lVar14 + lVar12);
          ((undefined8 *)((long)pvVar7 + lVar12))[1] = uVar3;
          lVar12 = lVar12 + 0x10;
        } while (lVar5 - lVar14 != lVar12);
        pvVar7 = (void *)((long)pvVar7 + (lVar5 - lVar14));
      }
      *(void **)(*pauVar15 + 8) = pvVar7;
      puVar8 = puVar2;
      puVar13 = puVar11;
      if (param_2 != puVar2) {
        do {
          uVar4 = puVar8[1];
          uVar3 = puVar8[2];
          puVar9 = puVar8 + 3;
          *puVar13 = *puVar8;
          puVar13[1] = uVar4;
          puVar13[2] = uVar3;
          puVar8 = puVar9;
          puVar13 = puVar13 + 3;
        } while (param_2 != puVar9);
        puVar13 = (undefined8 *)
                  ((long)puVar11 +
                  ((long)param_2 + (-0x18 - (long)puVar2) & 0xfffffffffffffff8U) + 0x18);
      }
      puVar8 = puVar13 + 3;
      puVar9 = param_2;
      if (param_2 != puVar1) {
        do {
          uVar4 = puVar9[1];
          uVar3 = puVar9[2];
          puVar10 = puVar9 + 3;
          *puVar8 = *puVar9;
          puVar8[1] = uVar4;
          puVar8[2] = uVar3;
          puVar9 = puVar10;
          puVar8 = puVar8 + 3;
        } while (puVar1 != puVar10);
        puVar8 = (undefined8 *)
                 ((long)puVar13 +
                 ((long)puVar1 + (-0x18 - (long)param_2) & 0xfffffffffffffff8U) + 0x30);
      }
      if (puVar2 != (undefined8 *)0x0) {
        operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
      }
      *(undefined8 **)this = puVar11;
      *(undefined8 **)(this + 8) = puVar8;
      *(undefined8 **)(this + 0x10) = puVar11 + uVar16 * 3;
      return;
    }
    std::__throw_bad_array_new_length();
    param_3 = extraout_RDX;
LAB_00103105:
    if (0x555555555555555 < uVar16) {
      uVar16 = 0x555555555555555;
    }
    uVar6 = uVar16 * 0x18;
  }
  pvVar7 = (void *)0x0;
  goto LAB_00102f85;
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
    if (0xfffffffffffffffe < uVar5) goto LAB_00103238;
    uVar7 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 4;
LAB_00103242:
    puVar6 = (undefined8 *)operator_new(uVar7);
    uVar3 = param_3[1];
    lVar11 = uVar7 + (long)puVar6;
    puVar10 = puVar6 + 2;
    *(undefined8 *)((long)puVar6 + (long)puVar8) = *param_3;
    ((undefined8 *)((long)puVar6 + (long)puVar8))[1] = uVar3;
    if (param_2 != puVar2) {
LAB_001031aa:
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
    if (param_2 == puVar1) goto LAB_001031fc;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_00103238:
      uVar7 = 0x7ffffffffffffff0;
      goto LAB_00103242;
    }
    if (uVar7 != 0) {
      if (0x7ffffffffffffff < uVar7) {
        uVar7 = 0x7ffffffffffffff;
      }
      uVar7 = uVar7 << 4;
      goto LAB_00103242;
    }
    uVar3 = param_3[1];
    lVar11 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x10;
    *puVar8 = *param_3;
    puVar8[1] = uVar3;
    if (param_2 != puVar2) goto LAB_001031aa;
  }
  puVar8 = (undefined8 *)((long)puVar10 + ((long)puVar1 - (long)param_2));
  memcpy(puVar10,param_2,(long)puVar1 - (long)param_2);
LAB_001031fc:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = lVar11;
  return;
}



/* void std::vector<std::vector<manifold::PolyVert, std::allocator<manifold::PolyVert> >,
   std::allocator<std::vector<manifold::PolyVert, std::allocator<manifold::PolyVert> > >
   >::_M_realloc_insert<std::vector<manifold::PolyVert, std::allocator<manifold::PolyVert> >
   >(__gnu_cxx::__normal_iterator<std::vector<manifold::PolyVert, std::allocator<manifold::PolyVert>
   >*, std::vector<std::vector<manifold::PolyVert, std::allocator<manifold::PolyVert> >,
   std::allocator<std::vector<manifold::PolyVert, std::allocator<manifold::PolyVert> > > > >,
   std::vector<manifold::PolyVert, std::allocator<manifold::PolyVert> >&&) */

void __thiscall
std::
vector<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>,std::allocator<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>>>
::_M_realloc_insert<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>>
          (vector<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>,std::allocator<std::vector<manifold::PolyVert,std::allocator<manifold::PolyVert>>>>
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
    if (0xfffffffffffffffe < uVar7) goto LAB_00103420;
    if (0x555555555555555 < uVar12) {
      uVar12 = 0x555555555555555;
    }
    uVar12 = uVar12 * 0x18;
  }
  else {
    uVar12 = lVar6 * 0x5555555555555556;
    if (uVar12 < uVar7) {
LAB_00103420:
      uVar12 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar12 == 0) {
        puVar13 = (undefined8 *)0x18;
        lVar6 = 0;
        puVar10 = (undefined8 *)0x0;
        goto LAB_0010333b;
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
LAB_0010333b:
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
    if (0xfffffffffffffffe < uVar6) goto LAB_001035d0;
    if (0x555555555555555 < uVar9) {
      uVar9 = 0x555555555555555;
    }
    uVar9 = uVar9 * 0x18;
LAB_001035da:
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
LAB_00103540:
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
    if (param_2 == puVar1) goto LAB_00103596;
  }
  else {
    uVar9 = lVar5 * 0x5555555555555556;
    if (uVar9 < uVar6) {
LAB_001035d0:
      uVar9 = 0x7ffffffffffffff8;
      goto LAB_001035da;
    }
    if (uVar9 != 0) {
      if (0x555555555555555 < uVar9) {
        uVar9 = 0x555555555555555;
      }
      uVar9 = uVar9 * 0x18;
      goto LAB_001035da;
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
    if (param_2 != puVar2) goto LAB_00103540;
  }
  __n = ((long)puVar1 + (-0x18 - (long)param_2) & 0xfffffffffffffff8U) + 0x18;
  puVar8 = (undefined8 *)((long)puVar10 + __n);
  memcpy(puVar10,param_2,__n);
LAB_00103596:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = local_50;
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
    if (0xfffffffffffffffe < uVar5) goto LAB_00103788;
    uVar7 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 4;
LAB_00103792:
    puVar6 = (undefined8 *)operator_new(uVar7);
    uVar3 = param_3[1];
    lVar11 = uVar7 + (long)puVar6;
    puVar10 = puVar6 + 2;
    *(undefined8 *)((long)puVar6 + (long)puVar8) = *param_3;
    ((undefined8 *)((long)puVar6 + (long)puVar8))[1] = uVar3;
    if (param_2 != puVar2) {
LAB_001036fa:
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
    if (param_2 == puVar1) goto LAB_0010374c;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_00103788:
      uVar7 = 0x7ffffffffffffff0;
      goto LAB_00103792;
    }
    if (uVar7 != 0) {
      if (0x7ffffffffffffff < uVar7) {
        uVar7 = 0x7ffffffffffffff;
      }
      uVar7 = uVar7 << 4;
      goto LAB_00103792;
    }
    uVar3 = param_3[1];
    lVar11 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x10;
    *puVar8 = *param_3;
    puVar8[1] = uVar3;
    if (param_2 != puVar2) goto LAB_001036fa;
  }
  puVar8 = (undefined8 *)((long)puVar10 + ((long)puVar1 - (long)param_2));
  memcpy(puVar10,param_2,(long)puVar1 - (long)param_2);
LAB_0010374c:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = lVar11;
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
  if ((uVar3 & 1) != 0) goto LAB_001038a4;
  __n = *(size_t *)(param_3 + 8);
  uVar1 = *(ulong *)(param_3 + 0x10);
  uVar6 = __n + 8;
  if (uVar6 < uVar1) {
LAB_00103906:
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
      if (__size <= uVar1) goto LAB_00103906;
    }
    __dest = (undefined1 *)malloc(__size);
    __src = *(undefined1 **)param_3;
    if (__n == 0) {
LAB_00103953:
      if (__src != (undefined1 *)0x0) goto LAB_00103981;
    }
    else {
      if ((long)__n < 2) {
        if (__n != 1) goto LAB_00103953;
        *__dest = *__src;
      }
      else {
        memmove(__dest,__src,__n);
      }
LAB_00103981:
      free(__src);
      uVar6 = *(long *)(param_3 + 8) + 8;
    }
    *(undefined1 **)param_3 = __dest;
    *(ulong *)(param_3 + 0x10) = __size;
  }
  *(ulong *)(param_3 + 8) = uVar6;
  *(long *)(__dest + ((uVar6 & 0xfffffffffffffff8) - 8)) =
       (long)param_2 << 0x20 | (long)((int)(((uint)(uVar3 >> 0x1f) & 1) + param_1) >> 1);
LAB_001038a4:
  uVar2 = (uint)(uVar3 >> 0x1f) & 1;
  return (param_1 + uVar2 & 1) - uVar2 == 1;
}



/* manifold::Manifold::Impl::Slice(double) const [clone .cold] */

void manifold::Manifold::Impl::Slice(double param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



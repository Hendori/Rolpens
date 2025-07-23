/* HashSet<Ref<NavigationPolygon>, HashMapHasherDefault,
   HashMapComparatorDefault<Ref<NavigationPolygon> > >::_lookup_pos(Ref<NavigationPolygon> const&,
   unsigned int&) const [clone .isra.0] */

undefined8 __thiscall
HashSet<Ref<NavigationPolygon>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationPolygon>>>
::_lookup_pos(HashSet<Ref<NavigationPolygon>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationPolygon>>>
              *this,Ref *param_1,uint *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  
  if (*(long *)this == 0) {
    return 0;
  }
  if (*(int *)(this + 0x24) != 0) {
    uVar14 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
    uVar10 = (long)param_1 * 0x3ffff - 1;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    uVar10 = uVar10 >> 0x16 ^ uVar10;
    uVar16 = uVar10 & 0xffffffff;
    if ((int)uVar10 == 0) {
      uVar16 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar16 * lVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar14;
    lVar12 = SUB168(auVar2 * auVar6,8);
    uVar13 = *(uint *)(*(long *)(this + 0x18) + lVar12 * 4);
    iVar11 = SUB164(auVar2 * auVar6,8);
    if (uVar13 != 0) {
      uVar15 = 0;
      do {
        if (((uint)uVar16 == uVar13) &&
           (uVar13 = *(uint *)(*(long *)(this + 8) + lVar12 * 4),
           *(Ref **)(*(long *)this + (ulong)uVar13 * 8) == param_1)) {
          *param_2 = uVar13;
          return 1;
        }
        uVar15 = uVar15 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar11 + 1) * lVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar14;
        lVar12 = SUB168(auVar3 * auVar7,8);
        uVar13 = *(uint *)(*(long *)(this + 0x18) + lVar12 * 4);
        iVar11 = SUB164(auVar3 * auVar7,8);
        if (uVar13 == 0) {
          return 0;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar13 * lVar1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar14;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4
                                         ) + iVar11) - SUB164(auVar4 * auVar8,8)) * lVar1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar14;
      } while (uVar15 <= SUB164(auVar5 * auVar9,8));
      return 0;
    }
  }
  return 0;
}



/* double Clipper2Lib::Area<double>(std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > const&) [clone .isra.0] */

double __thiscall Clipper2Lib::Area<double>(Clipper2Lib *this,vector *param_1)

{
  ulong uVar1;
  vector *pvVar2;
  vector *pvVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if ((ulong)((long)param_1 - (long)this) < 0x21) {
    return 0.0;
  }
  uVar1 = (long)param_1 - (long)this >> 4;
  if ((uVar1 & 1) == 0) {
    pvVar2 = param_1;
    if (param_1 == (vector *)this) {
      return 0.0;
    }
  }
  else {
    pvVar2 = param_1 + -0x10;
    if (param_1 + -0x10 == (vector *)this) {
      dVar5 = *(double *)(param_1 + -8);
      dVar7 = *(double *)(param_1 + -0x10);
      dVar8 = 0.0;
      dVar4 = dVar5;
      dVar6 = dVar7;
      goto LAB_001001e9;
    }
  }
  dVar5 = *(double *)(param_1 + -8);
  dVar7 = *(double *)(param_1 + -0x10);
  dVar8 = 0.0;
  do {
    pvVar3 = (vector *)this;
    this = (Clipper2Lib *)(pvVar3 + 0x20);
    dVar6 = dVar7 - *(double *)pvVar3;
    dVar4 = dVar5 + *(double *)(pvVar3 + 8);
    dVar7 = *(double *)(pvVar3 + 0x10);
    dVar5 = *(double *)(pvVar3 + 0x18);
    dVar8 = dVar8 + dVar4 * dVar6 + (*(double *)(pvVar3 + 8) + dVar5) * (*(double *)pvVar3 - dVar7);
  } while (this != (Clipper2Lib *)pvVar2);
  if ((uVar1 & 1) == 0) {
    return dVar8 * _LC1;
  }
  dVar4 = *(double *)(pvVar3 + 0x28);
  dVar6 = *(double *)this;
LAB_001001e9:
  return _LC1 * ((dVar5 + dVar4) * (dVar7 - dVar6) + dVar8);
}



/* generator_recursive_process_polytree_items(List<TPPLPoly, DefaultAllocator>&,
   Clipper2Lib::PolyPathD const*) */

void generator_recursive_process_polytree_items(List *param_1,PolyPathD *param_2)

{
  double *pdVar1;
  long *plVar2;
  double *pdVar3;
  long lVar4;
  TPPLPoly *this;
  code *pcVar5;
  ulong uVar6;
  undefined1 (*pauVar7) [16];
  uint uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  undefined8 *local_48 [2];
  undefined1 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  TPPLPoly::TPPLPoly((TPPLPoly *)local_48);
  TPPLPoly::Init((long)local_48);
  pdVar1 = *(double **)(param_2 + 0x38);
  for (pdVar3 = *(double **)(param_2 + 0x30); pdVar3 != pdVar1; pdVar3 = pdVar3 + 2) {
    *local_48[0] = CONCAT44((float)pdVar3[1],(float)*pdVar3);
    local_48[0] = local_48[0] + 1;
  }
  lVar4 = *(long *)(param_2 + 8);
  if (lVar4 != 0) {
    uVar8 = 0;
    do {
      lVar4 = *(long *)(lVar4 + 8);
      uVar8 = uVar8 + 1;
    } while (lVar4 != 0);
    if ((uVar8 != 0) && ((uVar8 & 1) == 0)) {
      TPPLPoly::SetOrientation(local_48,0xffffffff);
      lVar4 = *(long *)param_1;
      local_38 = 1;
      goto joined_r0x001003fe;
    }
  }
  TPPLPoly::SetOrientation(local_48,1);
  lVar4 = *(long *)param_1;
joined_r0x001003fe:
  if (lVar4 == 0) {
    pauVar7 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar7;
    *(undefined4 *)pauVar7[1] = 0;
    *pauVar7 = (undefined1  [16])0x0;
  }
  this = (TPPLPoly *)operator_new(0x30,DefaultAllocator::alloc);
  TPPLPoly::TPPLPoly(this);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  TPPLPoly::operator=(this,(TPPLPoly *)local_48);
  plVar2 = *(long **)param_1;
  lVar4 = plVar2[1];
  *(undefined8 *)(this + 0x18) = 0;
  *(long **)(this + 0x28) = plVar2;
  *(long *)(this + 0x20) = lVar4;
  if (lVar4 != 0) {
    *(TPPLPoly **)(lVar4 + 0x18) = this;
  }
  plVar2[1] = (long)this;
  if (*plVar2 == 0) {
    *plVar2 = (long)this;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  uVar9 = 0;
  pcVar5 = *(code **)(*(long *)param_2 + 0x20);
  if (pcVar5 != Clipper2Lib::PolyPathD::Count) goto LAB_001003b0;
  while (uVar9 < (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10) >> 3)) {
    while( true ) {
      lVar4 = uVar9 * 8;
      uVar9 = uVar9 + 1;
      generator_recursive_process_polytree_items
                (param_1,*(PolyPathD **)(*(long *)(param_2 + 0x10) + lVar4));
      pcVar5 = *(code **)(*(long *)param_2 + 0x20);
      if (pcVar5 == Clipper2Lib::PolyPathD::Count) break;
LAB_001003b0:
      uVar6 = (*pcVar5)(param_2);
      if (uVar6 <= uVar9) goto LAB_001003ba;
    }
  }
LAB_001003ba:
  TPPLPoly::~TPPLPoly((TPPLPoly *)local_48);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Clipper2Lib::Point<double>& std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >::emplace_back<float const&, float const&>(float
   const&, float const&) [clone .isra.0] */

Point * __thiscall
std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::
emplace_back<float_const&,float_const&>
          (vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *this,
          float *param_1,float *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  void *pvVar6;
  Point *in_RAX;
  ulong uVar7;
  Point *pPVar8;
  Point *pPVar9;
  Point *extraout_RAX;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  Point *pPVar12;
  ulong uVar13;
  Point *pPVar14;
  Point *pPVar15;
  undefined1 (*pauVar16) [16];
  
  pauVar11 = *(undefined1 (**) [16])(this + 8);
  pauVar10 = *(undefined1 (**) [16])(this + 0x10);
  if (pauVar11 != pauVar10) {
    auVar2._8_4_ = SUB84((double)*param_2,0);
    auVar2._0_8_ = (double)*param_1;
    auVar2._12_4_ = (int)((ulong)(double)*param_2 >> 0x20);
    *pauVar11 = auVar2;
    *(undefined1 (**) [16])(this + 8) = pauVar11 + 1;
    return in_RAX;
  }
  pauVar1 = *(undefined1 (**) [16])this;
  pauVar16 = (undefined1 (*) [16])((long)pauVar11 - (long)pauVar1);
  uVar7 = (long)pauVar16 >> 4;
  if (uVar7 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (pauVar11 == pauVar1) {
    if (0xfffffffffffffffe < uVar7) goto LAB_001005c0;
    uVar13 = 0x7ffffffffffffff;
    if (uVar7 + 1 < 0x800000000000000) {
      uVar13 = uVar7 + 1;
    }
    uVar13 = uVar13 << 4;
LAB_0010056e:
    pPVar9 = (Point *)operator_new(uVar13);
    pauVar10 = *(undefined1 (**) [16])(this + 0x10);
    pPVar14 = pPVar9 + uVar13;
    auVar4._8_4_ = SUB84((double)*param_2,0);
    auVar4._0_8_ = (double)*param_1;
    auVar4._12_4_ = (int)((ulong)(double)*param_2 >> 0x20);
    *(undefined1 (*) [16])(pPVar9 + (long)pauVar16) = auVar4;
    pPVar15 = pPVar9;
    pPVar12 = pPVar9;
    if (pauVar11 == pauVar1) goto LAB_00100519;
  }
  else {
    uVar13 = uVar7 * 2;
    if (uVar13 < uVar7) {
LAB_001005c0:
      uVar13 = 0x7ffffffffffffff0;
      goto LAB_0010056e;
    }
    if (uVar13 != 0) {
      if (0x7ffffffffffffff < uVar13) {
        uVar13 = 0x7ffffffffffffff;
      }
      uVar13 = uVar13 << 4;
      goto LAB_0010056e;
    }
    pPVar14 = (Point *)0x0;
    auVar3._8_4_ = SUB84((double)*param_2,0);
    auVar3._0_8_ = (double)*param_1;
    auVar3._12_4_ = (int)((ulong)(double)*param_2 >> 0x20);
    *pauVar16 = auVar3;
    pPVar15 = (Point *)0x0;
  }
  pPVar12 = pPVar15 + ((long)pauVar11 - (long)pauVar1);
  pPVar8 = pPVar15;
  pauVar11 = pauVar1;
  do {
                    /* WARNING: Load size is inaccurate */
    pvVar6 = *pauVar11;
    uVar5 = *(undefined8 *)((long)*pauVar11 + 8);
    pPVar9 = pPVar8 + 0x10;
    pauVar11 = pauVar11 + 1;
    *(undefined8 *)pPVar8 = *pvVar6;
    *(undefined8 *)(pPVar8 + 8) = uVar5;
    pPVar8 = pPVar9;
  } while (pPVar12 != pPVar9);
LAB_00100519:
  if (pauVar1 != (undefined1 (*) [16])0x0) {
    operator_delete(pauVar1,(long)pauVar10 - (long)pauVar1);
    pPVar9 = extraout_RAX;
  }
  *(Point **)this = pPVar15;
  *(Point **)(this + 8) = pPVar12 + 0x10;
  *(Point **)(this + 0x10) = pPVar14;
  return pPVar9;
}



/* std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> > >&
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > >
   >::emplace_back<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > >(std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> > >&&)
   [clone .isra.0] */

vector * __thiscall
std::
vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
::emplace_back<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>
          (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
           *this,vector *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  vector *pvVar8;
  vector *extraout_RAX;
  vector *pvVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  vector *pvVar12;
  ulong uVar13;
  undefined8 *puVar14;
  vector *pvVar15;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar11 = *(undefined8 **)(this + 0x10);
  if (puVar1 != puVar11) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    pvVar9 = *(vector **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *puVar1 = *(undefined8 *)param_1;
    puVar1[1] = uVar3;
    puVar1[2] = pvVar9;
    *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
    *(undefined8 **)(this + 8) = puVar1 + 3;
    return pvVar9;
  }
  puVar2 = *(undefined8 **)this;
  puVar14 = (undefined8 *)((long)puVar1 - (long)puVar2);
  uVar7 = ((long)puVar14 >> 3) * -0x5555555555555555;
  if (uVar7 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar1 == puVar2) {
    uVar13 = uVar7 + 1;
    if (0xfffffffffffffffe < uVar7) goto LAB_001007b0;
    if (0x555555555555555 < uVar13) {
      uVar13 = 0x555555555555555;
    }
    uVar13 = uVar13 * 0x18;
LAB_0010075f:
    pvVar9 = (vector *)operator_new(uVar13);
    uVar5 = *(undefined8 *)param_1;
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    pvVar15 = (vector *)((long)puVar14 + (long)pvVar9);
    puVar11 = *(undefined8 **)(this + 0x10);
    pvVar12 = pvVar9 + uVar13;
    *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(pvVar15 + 0x10) = uVar3;
    *(undefined8 *)pvVar15 = uVar5;
    *(undefined8 *)(pvVar15 + 8) = uVar6;
    puVar14 = puVar2;
    pvVar15 = pvVar9;
    if (puVar1 == puVar2) {
      pvVar8 = pvVar9 + 0x18;
      goto LAB_0010070d;
    }
  }
  else {
    uVar4 = ((long)puVar14 >> 3) * 0x5555555555555556;
    if (uVar4 < uVar7) {
LAB_001007b0:
      uVar13 = 0x7ffffffffffffff8;
      goto LAB_0010075f;
    }
    if (uVar4 != 0) {
      uVar13 = 0x555555555555555;
      if (uVar4 < 0x555555555555556) {
        uVar13 = uVar4;
      }
      uVar13 = uVar13 * 0x18;
      goto LAB_0010075f;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = *(undefined8 *)param_1;
    uVar6 = *(undefined8 *)(param_1 + 8);
    pvVar12 = (vector *)0x0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    puVar14[2] = uVar3;
    *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
    pvVar9 = (vector *)0x0;
    *puVar14 = uVar5;
    puVar14[1] = uVar6;
    puVar14 = puVar2;
    pvVar15 = pvVar9;
  }
  do {
    uVar5 = puVar14[1];
    uVar3 = puVar14[2];
    puVar10 = puVar14 + 3;
    pvVar8 = pvVar9 + 0x18;
    *(undefined8 *)pvVar9 = *puVar14;
    *(undefined8 *)(pvVar9 + 8) = uVar5;
    *(undefined8 *)(pvVar9 + 0x10) = uVar3;
    pvVar9 = pvVar8;
    puVar14 = puVar10;
  } while (puVar1 != puVar10);
  pvVar8 = pvVar15 + ((long)puVar1 + (-0x18 - (long)puVar2) & 0xfffffffffffffff8U) + 0x30;
LAB_0010070d:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,(long)puVar11 - (long)puVar2);
    pvVar9 = extraout_RAX;
  }
  *(vector **)this = pvVar15;
  *(vector **)(this + 8) = pvVar8;
  *(vector **)(this + 0x10) = pvVar12;
  return pvVar9;
}



/* std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > >
   >::_M_move_assign(std::vector<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >,
   std::allocator<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > > >&&, std::integral_constant<bool, true>) [clone .isra.0] */

void std::
     vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
     ::_M_move_assign(undefined8 *param_1,undefined1 (*param_2) [16])

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  uVar5 = *(undefined8 *)(*param_2 + 8);
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  lVar3 = param_1[2];
  *param_1 = *(undefined8 *)*param_2;
  param_1[1] = uVar5;
  param_1[2] = *(undefined8 *)param_2[1];
  *(undefined8 *)param_2[1] = 0;
  *param_2 = (undefined1  [16])0x0;
  for (puVar6 = puVar1; puVar6 != puVar2; puVar6 = puVar6 + 3) {
    pvVar4 = (void *)*puVar6;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4,puVar6[2] - (long)pvVar4);
    }
  }
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,lVar3 - (long)puVar1);
    return;
  }
  return;
}



/* Ref<NavigationPolygon>::TEMPNAMEPLACEHOLDERVALUE(Ref<NavigationPolygon> const&) [clone .isra.0]
    */

void __thiscall Ref<NavigationPolygon>::operator=(Ref<NavigationPolygon> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */

void __thiscall CowData<int>::_ref(CowData<int> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* NavMeshGenerator2D::get_singleton() */

undefined8 NavMeshGenerator2D::get_singleton(void)

{
  return singleton;
}



/* NavMeshGenerator2D::NavMeshGenerator2D() */

void __thiscall NavMeshGenerator2D::NavMeshGenerator2D(NavMeshGenerator2D *this)

{
  long in_FS_OFFSET;
  bool bVar1;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Object::Object((Object *)this);
  bVar1 = singleton == (NavMeshGenerator2D *)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0010e6c8;
  if (bVar1) {
    singleton = this;
    ProjectSettings::get_singleton();
    StringName::StringName
              ((StringName *)&local_50,"navigation/baking/thread_model/baking_use_multiple_threads",
               false);
    ProjectSettings::get_setting_with_override((StringName *)local_48);
    baking_use_multiple_threads = Variant::operator_cast_to_bool((Variant *)local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    ProjectSettings::get_singleton();
    StringName::StringName
              ((StringName *)&local_50,
               "navigation/baking/thread_model/baking_use_high_priority_threads",false);
    ProjectSettings::get_setting_with_override((StringName *)local_48);
    baking_use_high_priority_threads = Variant::operator_cast_to_bool((Variant *)local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    use_threads = baking_use_multiple_threads;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("NavMeshGenerator2D","modules/navigation/2d/nav_mesh_generator_2d.cpp",0x3a,
                     "Condition \"singleton != nullptr\" is true.",0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshGenerator2D::is_baking(Ref<NavigationPolygon>) */

undefined8 NavMeshGenerator2D::is_baking(long *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  iVar10 = pthread_mutex_lock((pthread_mutex_t *)baking_navmesh_mutex);
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar10);
  }
  uVar17 = 0;
  if ((baking_navmeshes != 0) && (DAT_00105224 != 0)) {
    uVar14 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)DAT_00105220 * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)DAT_00105220 * 8);
    uVar11 = *param_1 * 0x3ffff - 1;
    uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
    uVar11 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
    uVar11 = uVar11 >> 0x16 ^ uVar11;
    uVar16 = uVar11 & 0xffffffff;
    if ((int)uVar11 == 0) {
      uVar16 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar16 * lVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar14;
    lVar12 = SUB168(auVar2 * auVar6,8);
    uVar13 = *(uint *)(DAT_00105218 + lVar12 * 4);
    iVar10 = SUB164(auVar2 * auVar6,8);
    if (uVar13 != 0) {
      uVar15 = 0;
      do {
        if ((uVar13 == (uint)uVar16) &&
           (*param_1 ==
            *(long *)(baking_navmeshes + (ulong)*(uint *)(DAT_00105208 + lVar12 * 4) * 8))) {
          uVar17 = 1;
          goto LAB_00100c7d;
        }
        uVar15 = uVar15 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar10 + 1) * lVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar14;
        lVar12 = SUB168(auVar3 * auVar7,8);
        uVar13 = *(uint *)(DAT_00105218 + lVar12 * 4);
        iVar10 = SUB164(auVar3 * auVar7,8);
      } while ((uVar13 != 0) &&
              (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar13 * lVar1, auVar8._8_8_ = 0,
              auVar8._0_8_ = uVar14, auVar5._8_8_ = 0,
              auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes + (ulong)DAT_00105220 * 4) +
                                     iVar10) - SUB164(auVar4 * auVar8,8)) * lVar1, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar14, uVar15 <= SUB164(auVar5 * auVar9,8)));
      uVar17 = 0;
    }
  }
LAB_00100c7d:
  pthread_mutex_unlock((pthread_mutex_t *)baking_navmesh_mutex);
  return uVar17;
}



/* NavMeshGenerator2D::set_generator_parsers(LocalVector<NavMeshGeometryParser2D*, unsigned int,
   false, false>) */

void NavMeshGenerator2D::set_generator_parsers(uint *param_1)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  
  iVar6 = pthread_rwlock_wrlock((pthread_rwlock_t *)generator_parsers_rwlock);
  if (iVar6 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  uVar1 = *param_1;
  uVar7 = uVar1;
  uVar5 = uVar1;
  if ((generator_parsers <= uVar1) && (uVar5 = generator_parsers, generator_parsers < uVar1)) {
    if (DAT_001051a4 < uVar1) {
      uVar7 = uVar1 - 1 | uVar1 - 1 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      DAT_001051a4 = (uVar7 | uVar7 >> 0x10) + 1;
      DAT_001051a8 = (void *)Memory::realloc_static(DAT_001051a8,(ulong)DAT_001051a4 * 8,false);
      if (DAT_001051a8 == (void *)0x0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    uVar7 = *param_1;
    uVar5 = uVar1;
  }
  generator_parsers = uVar5;
  pvVar4 = DAT_001051a8;
  if (uVar7 != 0) {
    lVar2 = *(long *)(param_1 + 2);
    lVar8 = 0;
    do {
      *(undefined8 *)((long)pvVar4 + lVar8) = *(undefined8 *)(lVar2 + lVar8);
      lVar8 = lVar8 + 8;
    } while (lVar8 != (ulong)uVar7 << 3);
  }
  pthread_rwlock_unlock((pthread_rwlock_t *)generator_parsers_rwlock);
  return;
}



/* NavMeshGenerator2D::generator_emit_callback(Callable const&) */

undefined4 NavMeshGenerator2D::generator_emit_callback(Callable *param_1)

{
  char cVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  int local_38 [2];
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = Callable::is_valid();
  if (cVar1 == '\0') {
    _err_print_error("generator_emit_callback","modules/navigation/2d/nav_mesh_generator_2d.cpp",
                     0x127,"Condition \"!p_callback.is_valid()\" is true. Returning: false",0,0);
    uVar2 = 0;
  }
  else {
    local_30 = (undefined1  [16])0x0;
    local_38[0] = 0;
    local_38[1] = 0;
    Callable::callp((Variant **)param_1,0,(Variant *)0x0,(CallError *)local_38);
    uVar2 = 1;
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
      uVar2 = 1;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */

void __thiscall
List<PropertyInfo,DefaultAllocator>::push_back
          (List<PropertyInfo,DefaultAllocator> *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  
  if (*(long *)this == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = 0;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *puVar3 = *(undefined4 *)param_1;
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
  puVar3[10] = *(undefined4 *)(param_1 + 0x28);
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(long **)(puVar3 + 0x10) = plVar1;
  *(long *)(puVar3 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar3;
  }
  plVar1[1] = (long)puVar3;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)puVar3;
  return;
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2>::_copy_on_write(CowData<Vector2> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 8;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 4;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Ref<NavigationMeshSourceGeometryData2D>::TEMPNAMEPLACEHOLDERVALUE(Ref<NavigationMeshSourceGeometryData2D>
   const&) [clone .isra.0] */

void __thiscall
Ref<NavigationMeshSourceGeometryData2D>::operator=
          (Ref<NavigationMeshSourceGeometryData2D> *this,Ref *param_1)

{
  long *plVar1;
  Object *this_00;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  
  this_00 = *(Object **)this;
  if (this_00 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (this_00 != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(this_00);
        if (cVar6 != '\0') {
          if (*(code **)(*(long *)this_00 + 0x140) ==
              NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D) {
            *(undefined ***)this_00 = &PTR__initialize_classv_0010e0e8;
            NavigationMeshSourceGeometryData2D::clear();
            if (*(long *)(this_00 + 0x2b8) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)(this_00 + 0x2b8) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar2 = *(long *)(this_00 + 0x2b8);
                if (lVar2 == 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)invalidInstructionException();
                  (*pcVar5)();
                }
                lVar3 = *(long *)(lVar2 + -8);
                *(undefined8 *)(this_00 + 0x2b8) = 0;
                if (lVar3 != 0) {
                  lVar8 = 0;
                  lVar7 = lVar2;
                  do {
                    if (*(long *)(lVar7 + 8) != 0) {
                      LOCK();
                      plVar1 = (long *)(*(long *)(lVar7 + 8) + -0x10);
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (*plVar1 == 0) {
                        lVar4 = *(long *)(lVar7 + 8);
                        *(undefined8 *)(lVar7 + 8) = 0;
                        Memory::free_static((void *)(lVar4 + -0x10),false);
                      }
                    }
                    lVar8 = lVar8 + 1;
                    lVar7 = lVar7 + 0x18;
                  } while (lVar3 != lVar8);
                }
                Memory::free_static((void *)(lVar2 + -0x10),false);
              }
            }
            CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this_00 + 0x290));
            CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this_00 + 0x280));
            Resource::~Resource((Resource *)this_00);
          }
          else {
            (**(code **)(*(long *)this_00 + 0x140))(this_00);
          }
          Memory::free_static(this_00,false);
          return;
        }
      }
    }
  }
  return;
}



/* CowData<Vector<int> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector<int>>::_copy_on_write(CowData<Vector<int>> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  CowData<int> *this_00;
  long lVar6;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (lVar1 * 0x10 != 0) {
    uVar5 = lVar1 * 0x10 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  this_00 = (CowData<int> *)(puVar3 + 3);
  lVar6 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      lVar4 = lVar6 * 0x10 + *(long *)this;
      *(undefined8 *)this_00 = 0;
      if (*(long *)(lVar4 + 8) != 0) {
        CowData<int>::_ref(this_00,(CowData *)(lVar4 + 8));
      }
      lVar6 = lVar6 + 1;
      this_00 = this_00 + 0x10;
    } while (lVar1 != lVar6);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* NavMeshGenerator2D::cleanup() */

void NavMeshGenerator2D::cleanup(void)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  Object *pOVar4;
  undefined8 *puVar5;
  long lVar6;
  Object *pOVar7;
  code *pcVar8;
  char cVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  bool bVar15;
  
  iVar10 = pthread_mutex_lock((pthread_mutex_t *)baking_navmesh_mutex);
  if ((iVar10 != 0) ||
     (iVar10 = pthread_mutex_lock((pthread_mutex_t *)generator_task_mutex),
     lVar14 = baking_navmeshes, iVar10 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar10);
  }
  if ((baking_navmeshes != 0) && (DAT_00105224 != 0)) {
    if ((*(uint *)(hash_table_size_primes + (ulong)DAT_00105220 * 4) == 0) ||
       (memset(DAT_00105218,0,(ulong)*(uint *)(hash_table_size_primes + (ulong)DAT_00105220 * 4) * 4
              ), DAT_00105224 != 0)) {
      lVar13 = 0;
      do {
        plVar2 = (long *)(lVar14 + lVar13 * 8);
        if ((*plVar2 == 0) || (cVar9 = RefCounted::unreference(), cVar9 == '\0')) {
LAB_00101530:
          if (DAT_00105224 <= (int)lVar13 + 1U) break;
        }
        else {
          pOVar4 = (Object *)*plVar2;
          cVar9 = predelete_handler(pOVar4);
          if (cVar9 == '\0') goto LAB_00101530;
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
          if (DAT_00105224 <= (int)lVar13 + 1U) break;
        }
        lVar13 = lVar13 + 1;
        lVar14 = baking_navmeshes;
      } while( true );
    }
    DAT_00105224 = 0;
  }
  for (puVar5 = (undefined8 *)generator_tasks._24_8_; puVar5 != (undefined8 *)0x0;
      puVar5 = (undefined8 *)*puVar5) {
    WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
    plVar2 = (long *)puVar5[3];
    Callable::~Callable((Callable *)(plVar2 + 2));
    if ((plVar2[1] != 0) && (cVar9 = RefCounted::unreference(), cVar9 != '\0')) {
      pOVar4 = (Object *)plVar2[1];
      cVar9 = predelete_handler(pOVar4);
      if (cVar9 != '\0') {
        if (*(code **)(*(long *)pOVar4 + 0x140) ==
            NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D) {
          *(undefined ***)pOVar4 = &PTR__initialize_classv_0010e0e8;
          NavigationMeshSourceGeometryData2D::clear();
          if (*(long *)(pOVar4 + 0x2b8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(pOVar4 + 0x2b8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar14 = *(long *)(pOVar4 + 0x2b8);
              if (lVar14 == 0) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)invalidInstructionException();
                (*pcVar8)();
              }
              lVar13 = *(long *)(lVar14 + -8);
              lVar11 = 0;
              *(undefined8 *)(pOVar4 + 0x2b8) = 0;
              lVar12 = lVar14;
              if (lVar13 != 0) {
                do {
                  if (*(long *)(lVar12 + 8) != 0) {
                    LOCK();
                    plVar1 = (long *)(*(long *)(lVar12 + 8) + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      lVar6 = *(long *)(lVar12 + 8);
                      *(undefined8 *)(lVar12 + 8) = 0;
                      Memory::free_static((void *)(lVar6 + -0x10),false);
                    }
                  }
                  lVar11 = lVar11 + 1;
                  lVar12 = lVar12 + 0x18;
                } while (lVar13 != lVar11);
              }
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(pOVar4 + 0x290));
          CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(pOVar4 + 0x280));
          Resource::~Resource((Resource *)pOVar4);
        }
        else {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        }
        Memory::free_static(pOVar4,false);
      }
    }
    if ((*plVar2 != 0) && (cVar9 = RefCounted::unreference(), cVar9 != '\0')) {
      pOVar4 = (Object *)*plVar2;
      cVar9 = predelete_handler(pOVar4);
      if (cVar9 != '\0') {
        if (*(code **)(*(long *)pOVar4 + 0x140) == NavigationPolygon::~NavigationPolygon) {
          bVar15 = StringName::configured != '\0';
          *(undefined ***)pOVar4 = &PTR__initialize_classv_0010e498;
          if ((bVar15) && (*(long *)(pOVar4 + 0x338) != 0)) {
            StringName::unref();
          }
          if ((*(long *)(pOVar4 + 0x2f8) != 0) && (cVar9 = RefCounted::unreference(), cVar9 != '\0')
             ) {
            pOVar7 = *(Object **)(pOVar4 + 0x2f8);
            cVar9 = predelete_handler(pOVar7);
            if (cVar9 != '\0') {
              (**(code **)(*(long *)pOVar7 + 0x140))();
              Memory::free_static(pOVar7,false);
            }
          }
          CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(pOVar4 + 0x2b0));
          CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(pOVar4 + 0x2a0));
          CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(pOVar4 + 0x290));
          CowData<Vector2>::_unref((CowData<Vector2> *)(pOVar4 + 0x280));
          Resource::~Resource((Resource *)pOVar4);
        }
        else {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        }
        Memory::free_static(pOVar4,false);
      }
    }
    Memory::free_static(plVar2,false);
  }
  if ((generator_tasks._8_8_ != 0) && (generator_tasks._44_4_ != 0)) {
    lVar14 = 0;
    uVar3 = *(uint *)(hash_table_size_primes + (ulong)(uint)generator_tasks._40_4_ * 4);
    if (uVar3 != 0) {
      do {
        if (*(int *)(generator_tasks._16_8_ + lVar14) != 0) {
          *(int *)(generator_tasks._16_8_ + lVar14) = 0;
          Memory::free_static(*(void **)(generator_tasks._8_8_ + lVar14 * 2),false);
          *(undefined8 *)(generator_tasks._8_8_ + lVar14 * 2) = 0;
        }
        lVar14 = lVar14 + 4;
      } while (lVar14 != (ulong)uVar3 << 2);
    }
    generator_tasks._44_4_ = 0;
    generator_tasks._24_16_ = (undefined1  [16])0x0;
  }
  iVar10 = pthread_rwlock_wrlock((pthread_rwlock_t *)generator_parsers_rwlock);
  if (iVar10 != 0x23) {
    if (generator_parsers != 0) {
      generator_parsers = 0;
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)generator_parsers_rwlock);
    pthread_mutex_unlock((pthread_mutex_t *)generator_task_mutex);
    pthread_mutex_unlock((pthread_mutex_t *)baking_navmesh_mutex);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* NavMeshGenerator2D::~NavMeshGenerator2D() */

void __thiscall NavMeshGenerator2D::~NavMeshGenerator2D(NavMeshGenerator2D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010e6c8;
  cleanup();
  Object::~Object((Object *)this);
  return;
}



/* NavMeshGenerator2D::~NavMeshGenerator2D() */

void __thiscall NavMeshGenerator2D::~NavMeshGenerator2D(NavMeshGenerator2D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010e6c8;
  cleanup();
  Object::~Object((Object *)this);
  operator_delete(this,0x178);
  return;
}



/* NavMeshGenerator2D::finish() */

void NavMeshGenerator2D::finish(void)

{
  cleanup();
  return;
}



/* HashSet<Ref<NavigationPolygon>, HashMapHasherDefault,
   HashMapComparatorDefault<Ref<NavigationPolygon> > >::erase(Ref<NavigationPolygon> const&) [clone
   .isra.0] */

void __thiscall
HashSet<Ref<NavigationPolygon>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationPolygon>>>
::erase(HashSet<Ref<NavigationPolygon>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationPolygon>>>
        *this,Ref *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  Ref<NavigationPolygon> *this_00;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar21;
  char cVar22;
  uint uVar23;
  long lVar24;
  uint *puVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  long *plVar29;
  ulong uVar30;
  uint *puVar31;
  uint *puVar32;
  ulong uVar33;
  ulong uVar34;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  cVar22 = _lookup_pos(this,*(Ref **)param_1,&local_44);
  uVar21 = local_44;
  if (cVar22 != '\0') {
    uVar34 = (ulong)local_44;
    lVar5 = *(long *)(this + 0x10);
    lVar6 = *(long *)(this + 0x18);
    uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4);
    uVar28 = CONCAT44(0,uVar23);
    local_44 = *(uint *)(lVar5 + uVar34 * 4);
    lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)(local_44 + 1) * lVar7;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar28;
    lVar24 = SUB168(auVar9 * auVar15,8) * 4;
    uVar26 = SUB164(auVar9 * auVar15,8);
    puVar32 = (uint *)(lVar6 + lVar24);
    if ((*puVar32 == 0) ||
       (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)*puVar32 * lVar7, auVar16._8_8_ = 0,
       auVar16._0_8_ = uVar28, auVar11._8_8_ = 0,
       auVar11._0_8_ = (ulong)((uVar23 + uVar26) - SUB164(auVar10 * auVar16,8)) * lVar7,
       auVar17._8_8_ = 0, auVar17._0_8_ = uVar28, SUB164(auVar11 * auVar17,8) == 0)) {
      uVar33 = (ulong)local_44;
    }
    else {
      lVar8 = *(long *)(this + 8);
      uVar30 = (ulong)local_44;
      uVar33 = (ulong)uVar26;
      while( true ) {
        puVar25 = (uint *)(lVar24 + lVar8);
        puVar1 = (uint *)(lVar8 + uVar30 * 4);
        puVar31 = (uint *)(uVar30 * 4 + lVar6);
        puVar2 = (undefined4 *)(lVar5 + (ulong)*puVar25 * 4);
        puVar3 = (undefined4 *)(lVar5 + (ulong)*puVar1 * 4);
        uVar4 = *puVar3;
        *puVar3 = *puVar2;
        *puVar2 = uVar4;
        uVar26 = *puVar32;
        *puVar32 = *puVar31;
        *puVar31 = uVar26;
        uVar26 = *puVar25;
        *puVar25 = *puVar1;
        local_44 = (uint)uVar33;
        *puVar1 = uVar26;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)(local_44 + 1) * lVar7;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar28;
        uVar27 = SUB168(auVar14 * auVar20,8);
        lVar24 = uVar27 * 4;
        puVar32 = (uint *)(lVar6 + lVar24);
        if ((*puVar32 == 0) ||
           (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)*puVar32 * lVar7, auVar18._8_8_ = 0,
           auVar18._0_8_ = uVar28, auVar13._8_8_ = 0,
           auVar13._0_8_ =
                (ulong)((SUB164(auVar14 * auVar20,8) + uVar23) - SUB164(auVar12 * auVar18,8)) *
                lVar7, auVar19._8_8_ = 0, auVar19._0_8_ = uVar28, SUB164(auVar13 * auVar19,8) == 0))
        break;
        uVar30 = uVar33;
        uVar33 = uVar27 & 0xffffffff;
      }
    }
    lVar24 = *(long *)this;
    *(undefined4 *)(lVar6 + uVar33 * 4) = 0;
    plVar29 = (long *)(lVar24 + uVar34 * 8);
    if ((*plVar29 == 0) || (cVar22 = RefCounted::unreference(), cVar22 == '\0')) {
      uVar23 = *(int *)(this + 0x24) - 1;
      *(uint *)(this + 0x24) = uVar23;
    }
    else {
      memdelete<NavigationPolygon>((NavigationPolygon *)*plVar29);
      uVar23 = *(int *)(this + 0x24) - 1;
      *(uint *)(this + 0x24) = uVar23;
    }
    if (uVar21 < uVar23) {
      lVar24 = *(long *)this;
      this_00 = (Ref<NavigationPolygon> *)(lVar24 + uVar34 * 8);
      *(undefined8 *)this_00 = 0;
      Ref<NavigationPolygon>::operator=(this_00,*(Ref **)(lVar24 + (ulong)uVar23 * 8));
      Ref<NavigationPolygon>::unref
                ((Ref<NavigationPolygon> *)(*(long *)this + (ulong)*(uint *)(this + 0x24) * 8));
      lVar24 = *(long *)(this + 0x10);
      *(undefined4 *)(lVar24 + uVar34 * 4) =
           *(undefined4 *)(lVar24 + (ulong)*(uint *)(this + 0x24) * 4);
      *(uint *)(*(long *)(this + 8) +
               (ulong)*(uint *)(lVar24 + (ulong)*(uint *)(this + 0x24) * 4) * 4) = uVar21;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshGenerator2D::sync() */

void NavMeshGenerator2D::sync(void)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  Ref *pRVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
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
  code *pcVar26;
  long lVar27;
  char cVar28;
  int iVar29;
  ulong uVar30;
  long *plVar31;
  uint uVar32;
  ulong uVar33;
  uint uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  long *plVar38;
  ulong uVar39;
  uint uVar40;
  uint uVar41;
  uint *puVar42;
  long *plVar43;
  long lVar44;
  
  if (generator_tasks._44_4_ == 0) {
    return;
  }
  iVar29 = pthread_mutex_lock((pthread_mutex_t *)baking_navmesh_mutex);
  if (iVar29 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar29);
  }
  iVar29 = pthread_mutex_lock((pthread_mutex_t *)generator_task_mutex);
  if (iVar29 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar29);
  }
  plVar31 = (long *)0x0;
  uVar41 = 0;
  uVar35 = 0;
  plVar43 = (long *)generator_tasks._24_8_;
  if (generator_tasks._24_8_ != 0) {
    do {
      while (cVar28 = WorkerThreadPool::is_task_completed(WorkerThreadPool::singleton),
            cVar28 == '\0') {
        plVar43 = (long *)*plVar43;
        if (plVar43 == (long *)0x0) goto LAB_00101d46;
      }
      WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
      lVar44 = plVar43[2];
      uVar34 = (uint)uVar35;
      if (uVar34 == uVar41) {
        uVar41 = uVar34 * 2;
        if (uVar41 == 0) {
          uVar41 = 1;
        }
        plVar31 = (long *)Memory::realloc_static(plVar31,(ulong)uVar41 << 3,false);
        if (plVar31 == (long *)0x0) {
          _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar26 = (code *)invalidInstructionException();
          (*pcVar26)();
        }
      }
      plVar31[uVar35] = lVar44;
      pRVar5 = (Ref *)plVar43[3];
      HashSet<Ref<NavigationPolygon>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationPolygon>>>
      ::erase((HashSet<Ref<NavigationPolygon>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationPolygon>>>
               *)&baking_navmeshes,pRVar5);
      cVar28 = Callable::is_valid();
      if (cVar28 != '\0') {
        generator_emit_callback((Callable *)(pRVar5 + 0x10));
      }
      Callable::~Callable((Callable *)(pRVar5 + 0x10));
      if ((*(long *)(pRVar5 + 8) != 0) && (cVar28 = RefCounted::unreference(), cVar28 != '\0')) {
        memdelete<NavigationMeshSourceGeometryData2D>
                  (*(NavigationMeshSourceGeometryData2D **)(pRVar5 + 8));
      }
      if ((*(long *)pRVar5 != 0) && (cVar28 = RefCounted::unreference(), cVar28 != '\0')) {
        memdelete<NavigationPolygon>(*(NavigationPolygon **)pRVar5);
      }
      uVar35 = (ulong)(uVar34 + 1);
      Memory::free_static(pRVar5,false);
      plVar43 = (long *)*plVar43;
    } while (plVar43 != (long *)0x0);
LAB_00101d46:
    lVar44 = generator_tasks._8_8_;
    lVar27 = generator_tasks._16_8_;
    for (plVar43 = plVar31; generator_tasks._16_8_ = lVar27, plVar31 + uVar35 != plVar43;
        plVar43 = plVar43 + 1) {
      if ((lVar44 != 0) && (generator_tasks._44_4_ != 0)) {
        uVar41 = *(uint *)(hash_table_size_primes + (ulong)(uint)generator_tasks._40_4_ * 4);
        uVar39 = CONCAT44(0,uVar41);
        lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)generator_tasks._40_4_ * 8);
        uVar30 = *plVar43 * 0x3ffff - 1;
        uVar30 = (uVar30 ^ uVar30 >> 0x1f) * 0x15;
        uVar30 = (uVar30 ^ uVar30 >> 0xb) * 0x41;
        uVar30 = uVar30 >> 0x16 ^ uVar30;
        uVar36 = uVar30 & 0xffffffff;
        if ((int)uVar30 == 0) {
          uVar36 = 1;
        }
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar36 * lVar6;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar39;
        uVar30 = SUB168(auVar8 * auVar17,8);
        uVar34 = *(uint *)(lVar27 + uVar30 * 4);
        uVar37 = (ulong)SUB164(auVar8 * auVar17,8);
        if (uVar34 != 0) {
          uVar40 = 0;
LAB_00101e5c:
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)((int)uVar37 + 1) * lVar6;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar39;
          uVar33 = SUB168(auVar11 * auVar20,8);
          uVar32 = SUB164(auVar11 * auVar20,8);
          if (((uint)uVar36 != uVar34) ||
             (*plVar43 != *(long *)(*(long *)(lVar44 + uVar30 * 8) + 0x10))) goto LAB_00101e20;
          puVar42 = (uint *)(lVar27 + uVar33 * 4);
          uVar34 = *puVar42;
          if ((uVar34 != 0) &&
             (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar34 * lVar6, auVar21._8_8_ = 0,
             auVar21._0_8_ = uVar39, auVar13._8_8_ = 0,
             auVar13._0_8_ = (ulong)((uVar32 + uVar41) - SUB164(auVar12 * auVar21,8)) * lVar6,
             auVar22._8_8_ = 0, auVar22._0_8_ = uVar39, uVar30 = (ulong)uVar32, uVar36 = uVar37,
             SUB164(auVar13 * auVar22,8) != 0)) {
            while( true ) {
              uVar37 = uVar30;
              puVar1 = (uint *)(lVar27 + uVar36 * 4);
              *puVar42 = *puVar1;
              puVar2 = (undefined8 *)(lVar44 + uVar33 * 8);
              *puVar1 = uVar34;
              puVar3 = (undefined8 *)(lVar44 + uVar36 * 8);
              uVar7 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar7;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = (ulong)((int)uVar37 + 1) * lVar6;
              auVar25._8_8_ = 0;
              auVar25._0_8_ = uVar39;
              uVar33 = SUB168(auVar16 * auVar25,8);
              puVar42 = (uint *)(lVar27 + uVar33 * 4);
              uVar34 = *puVar42;
              if ((uVar34 == 0) ||
                 (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar34 * lVar6, auVar23._8_8_ = 0,
                 auVar23._0_8_ = uVar39, auVar15._8_8_ = 0,
                 auVar15._0_8_ =
                      (ulong)((SUB164(auVar16 * auVar25,8) + uVar41) - SUB164(auVar14 * auVar23,8))
                      * lVar6, auVar24._8_8_ = 0, auVar24._0_8_ = uVar39,
                 SUB164(auVar15 * auVar24,8) == 0)) break;
              uVar30 = uVar33 & 0xffffffff;
              uVar36 = uVar37;
            }
          }
          plVar4 = (long *)(lVar44 + uVar37 * 8);
          *(undefined4 *)(lVar27 + uVar37 * 4) = 0;
          plVar38 = (long *)*plVar4;
          if ((long *)generator_tasks._24_8_ == plVar38) {
            generator_tasks._24_8_ = *plVar38;
            plVar38 = (long *)*plVar4;
          }
          if ((long *)generator_tasks._32_8_ == plVar38) {
            generator_tasks._32_8_ = plVar38[1];
            plVar38 = (long *)*plVar4;
          }
          if ((long *)plVar38[1] != (long *)0x0) {
            *(long *)plVar38[1] = *plVar38;
            plVar38 = (long *)*plVar4;
          }
          if (*plVar38 != 0) {
            *(long *)(*plVar38 + 8) = plVar38[1];
            plVar38 = (long *)*plVar4;
          }
          Memory::free_static(plVar38,false);
          lVar44 = generator_tasks._8_8_;
          *(undefined8 *)(generator_tasks._8_8_ + uVar37 * 8) = 0;
          generator_tasks._44_4_ = generator_tasks._44_4_ + -1;
        }
      }
LAB_00101f9f:
      lVar27 = generator_tasks._16_8_;
    }
    if (plVar31 != (long *)0x0) {
      Memory::free_static(plVar31,false);
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)generator_task_mutex);
  pthread_mutex_unlock((pthread_mutex_t *)baking_navmesh_mutex);
  return;
LAB_00101e20:
  uVar34 = *(uint *)(lVar27 + uVar33 * 4);
  uVar37 = uVar33 & 0xffffffff;
  uVar40 = uVar40 + 1;
  if ((uVar34 == 0) ||
     (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar34 * lVar6, auVar18._8_8_ = 0,
     auVar18._0_8_ = uVar39, auVar10._8_8_ = 0,
     auVar10._0_8_ = (ulong)((uVar41 + uVar32) - SUB164(auVar9 * auVar18,8)) * lVar6,
     auVar19._8_8_ = 0, auVar19._0_8_ = uVar39, uVar30 = uVar33,
     SUB164(auVar10 * auVar19,8) < uVar40)) goto LAB_00101f9f;
  goto LAB_00101e5c;
}



/* NavMeshGenerator2D::generator_parse_geometry_node(Ref<NavigationPolygon>,
   Ref<NavigationMeshSourceGeometryData2D>, Node*, bool) */

void NavMeshGenerator2D::generator_parse_geometry_node
               (long *param_1,long *param_2,Object *param_3,char param_4)

{
  Variant *pVVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  NavigationMeshSourceGeometryData2D *pNVar8;
  NavigationPolygon *pNVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long *plVar14;
  Variant *pVVar15;
  long lVar16;
  Object *this;
  Object *pOVar17;
  long lVar18;
  long in_FS_OFFSET;
  NavigationPolygon *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int local_e8 [2];
  undefined1 local_e0 [16];
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  Variant local_60 [24];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar11 = pthread_rwlock_rdlock((pthread_rwlock_t *)generator_parsers_rwlock);
  } while (iVar11 == 0xb);
  if (iVar11 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  plVar3 = DAT_001051a8 + generator_parsers;
  for (plVar14 = DAT_001051a8; plVar3 != plVar14; plVar14 = plVar14 + 1) {
    lVar4 = *plVar14;
    cVar10 = Callable::is_valid();
    if (cVar10 != '\0') {
      this = (Object *)*param_2;
      if ((this != (Object *)0x0) && (cVar10 = RefCounted::reference(), cVar10 == '\0')) {
        this = (Object *)0x0;
      }
      pOVar17 = (Object *)*param_1;
      if ((pOVar17 != (Object *)0x0) && (cVar10 = RefCounted::reference(), cVar10 == '\0')) {
        pOVar17 = (Object *)0x0;
      }
      Variant::Variant(local_a8,pOVar17);
      Variant::Variant(local_90,this);
      Variant::Variant(local_78,param_3);
      Variant::Variant(local_60,0);
      pVVar15 = local_48;
      local_e8[0] = 0;
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      local_e0 = (undefined1  [16])0x0;
      local_c8 = local_a8;
      pVStack_c0 = local_90;
      local_b8 = local_78;
      Callable::callp((Variant **)(lVar4 + 8),(int)&local_c8,(Variant *)0x3,(CallError *)local_e8);
      do {
        pVVar1 = pVVar15 + -0x18;
        pVVar15 = pVVar15 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar15 != local_a8);
      if (Variant::needs_deinit[local_e8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (((pOVar17 != (Object *)0x0) && (cVar10 = RefCounted::unreference(), cVar10 != '\0')) &&
         (cVar10 = predelete_handler(pOVar17), cVar10 != '\0')) {
        (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
        Memory::free_static(pOVar17,false);
      }
      if (((this != (Object *)0x0) && (cVar10 = RefCounted::unreference(), cVar10 != '\0')) &&
         (cVar10 = predelete_handler(this), cVar10 != '\0')) {
        if (*(code **)(*(long *)this + 0x140) ==
            NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D) {
          *(undefined ***)this = &PTR__initialize_classv_0010e0e8;
          NavigationMeshSourceGeometryData2D::clear();
          if (*(long *)(this + 0x2b8) != 0) {
            LOCK();
            plVar2 = (long *)(*(long *)(this + 0x2b8) + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *(long *)(this + 0x2b8);
              if (lVar4 == 0) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)invalidInstructionException();
                (*pcVar7)();
              }
              lVar5 = *(long *)(lVar4 + -8);
              *(undefined8 *)(this + 0x2b8) = 0;
              if (lVar5 != 0) {
                lVar16 = 0;
                lVar18 = lVar4;
                do {
                  if (*(long *)(lVar18 + 8) != 0) {
                    LOCK();
                    plVar2 = (long *)(*(long *)(lVar18 + 8) + -0x10);
                    *plVar2 = *plVar2 + -1;
                    UNLOCK();
                    if (*plVar2 == 0) {
                      lVar6 = *(long *)(lVar18 + 8);
                      *(undefined8 *)(lVar18 + 8) = 0;
                      Memory::free_static((void *)(lVar6 + -0x10),false);
                    }
                  }
                  lVar16 = lVar16 + 1;
                  lVar18 = lVar18 + 0x18;
                } while (lVar5 != lVar16);
              }
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x290));
          CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x280));
          Resource::~Resource((Resource *)this);
        }
        else {
          (**(code **)(*(long *)this + 0x140))(this);
        }
        Memory::free_static(this,false);
      }
    }
  }
  pthread_rwlock_unlock((pthread_rwlock_t *)generator_parsers_rwlock);
  if (param_4 != '\0') {
    for (iVar11 = 0; iVar12 = Node::get_child_count(SUB81(param_3,0)), iVar11 < iVar12;
        iVar11 = iVar11 + 1) {
      uVar13 = Node::get_child((int)param_3,SUB41(iVar11,0));
      local_f8 = 0;
      uStack_f4 = 0;
      Ref<NavigationMeshSourceGeometryData2D>::operator=
                ((Ref<NavigationMeshSourceGeometryData2D> *)&local_f8,(Ref *)*param_2);
      local_100 = (NavigationPolygon *)0x0;
      Ref<NavigationPolygon>::operator=((Ref<NavigationPolygon> *)&local_100,(Ref *)*param_1);
      generator_parse_geometry_node
                ((Ref<NavigationPolygon> *)&local_100,
                 (Ref<NavigationMeshSourceGeometryData2D> *)&local_f8,uVar13,1);
      pNVar9 = local_100;
      if ((local_100 != (NavigationPolygon *)0x0) &&
         (cVar10 = RefCounted::unreference(), cVar10 != '\0')) {
        memdelete<NavigationPolygon>(pNVar9);
      }
      pNVar8 = (NavigationMeshSourceGeometryData2D *)CONCAT44(uStack_f4,local_f8);
      if ((pNVar8 != (NavigationMeshSourceGeometryData2D *)0x0) &&
         (cVar10 = RefCounted::unreference(), cVar10 != '\0')) {
        memdelete<NavigationMeshSourceGeometryData2D>(pNVar8);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshGenerator2D::generator_parse_source_geometry_data(Ref<NavigationPolygon>,
   Ref<NavigationMeshSourceGeometryData2D>, Node*) */

void NavMeshGenerator2D::generator_parse_source_geometry_data
               (undefined8 *param_1,long *param_2,long param_3)

{
  StringName *pSVar1;
  undefined8 uVar2;
  Object *this;
  void *pvVar3;
  long lVar4;
  long lVar5;
  Object *pOVar6;
  code *pcVar7;
  char cVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  Object *this_00;
  undefined8 *puVar14;
  long lVar15;
  long in_FS_OFFSET;
  bool bVar16;
  undefined4 uVar17;
  undefined1 (*local_90) [16];
  Object *local_88;
  Object *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = (undefined1 (*) [16])0x0;
  iVar9 = NavigationPolygon::get_source_geometry_mode();
  if (iVar9 == 0) {
    local_90 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_90[1] = 0;
    *local_90 = (undefined1  [16])0x0;
    plVar10 = (long *)operator_new(0x20,DefaultAllocator::alloc);
    plVar10[1] = 0;
    lVar11 = *(long *)(*local_90 + 8);
    *plVar10 = param_3;
    plVar10[3] = (long)local_90;
    plVar10[2] = lVar11;
    if (lVar11 != 0) {
      *(long **)(lVar11 + 8) = plVar10;
    }
    lVar11 = *(long *)*local_90;
    *(long **)(*local_90 + 8) = plVar10;
    if (lVar11 == 0) {
      *(long **)*local_90 = plVar10;
    }
    *(int *)local_90[1] = *(int *)local_90[1] + 1;
    uStack_74 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uVar13 = _LC57;
    uVar17 = _LC57;
    if (param_3 == 0) goto LAB_0010269b;
  }
  else {
    pSVar1 = *(StringName **)(param_3 + 0x240);
    if (pSVar1 == (StringName *)0x0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
    }
    NavigationPolygon::get_source_geometry_group_name();
    SceneTree::get_nodes_in_group(pSVar1,(List *)&local_80);
    if ((StringName::configured != '\0') && (local_80 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  local_68 = 0;
  uStack_70 = 0;
  uStack_74 = 0;
  plVar10 = (long *)__dynamic_cast(param_3,&Object::typeinfo,&Node2D::typeinfo,0);
  uVar13 = _LC57;
  uVar17 = _LC57;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x298))(local_58);
    Transform2D::affine_inverse();
    uVar13 = local_78;
    uVar17 = uStack_6c;
  }
LAB_0010269b:
  NavigationMeshSourceGeometryData2D::clear();
  lVar11 = *param_2;
  *(undefined8 *)(lVar11 + 0x2d0) = local_68;
  *(ulong *)(lVar11 + 0x2c0) = CONCAT44(uStack_74,uVar13);
  *(ulong *)(lVar11 + 0x2c8) = CONCAT44(uVar17,uStack_70);
  local_78 = uVar13;
  uStack_6c = uVar17;
  iVar9 = NavigationPolygon::get_source_geometry_mode();
  if (local_90 != (undefined1 (*) [16])0x0) {
    puVar14 = *(undefined8 **)*local_90;
    if (puVar14 != (undefined8 *)0x0) {
      do {
        this_00 = (Object *)*param_2;
        uVar2 = *puVar14;
        if ((this_00 == (Object *)0x0) ||
           (local_80 = this_00, cVar8 = RefCounted::reference(), cVar8 == '\0')) {
          local_80 = (Object *)0x0;
          this_00 = (Object *)0x0;
        }
        this = (Object *)*param_1;
        if ((this == (Object *)0x0) ||
           (local_88 = this, cVar8 = RefCounted::reference(), cVar8 == '\0')) {
          local_88 = (Object *)0x0;
          generator_parse_geometry_node(&local_88,&local_80,uVar2,iVar9 != 2);
        }
        else {
          generator_parse_geometry_node(&local_88,&local_80,uVar2,iVar9 != 2);
          cVar8 = RefCounted::unreference();
          if ((cVar8 != '\0') && (cVar8 = predelete_handler(this), cVar8 != '\0')) {
            if (*(code **)(*(long *)this + 0x140) == NavigationPolygon::~NavigationPolygon) {
              bVar16 = StringName::configured != '\0';
              *(undefined ***)this = &PTR__initialize_classv_0010e498;
              if ((bVar16) && (*(long *)(this + 0x338) != 0)) {
                StringName::unref();
              }
              if ((*(long *)(this + 0x2f8) != 0) &&
                 (cVar8 = RefCounted::unreference(), cVar8 != '\0')) {
                pOVar6 = *(Object **)(this + 0x2f8);
                cVar8 = predelete_handler(pOVar6);
                if (cVar8 != '\0') {
                  (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
                  Memory::free_static(pOVar6,false);
                }
              }
              CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x2b0));
              CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x2a0));
              CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(this + 0x290));
              CowData<Vector2>::_unref((CowData<Vector2> *)(this + 0x280));
              Resource::~Resource((Resource *)this);
            }
            else {
              (**(code **)(*(long *)this + 0x140))(this);
            }
            Memory::free_static(this,false);
          }
        }
        if (((this_00 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
           (cVar8 = predelete_handler(this_00), cVar8 != '\0')) {
          if (*(code **)(*(long *)this_00 + 0x140) ==
              NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D) {
            *(undefined ***)this_00 = &PTR__initialize_classv_0010e0e8;
            NavigationMeshSourceGeometryData2D::clear();
            if (*(long *)(this_00 + 0x2b8) != 0) {
              LOCK();
              plVar10 = (long *)(*(long *)(this_00 + 0x2b8) + -0x10);
              *plVar10 = *plVar10 + -1;
              UNLOCK();
              if (*plVar10 == 0) {
                lVar11 = *(long *)(this_00 + 0x2b8);
                if (lVar11 == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)invalidInstructionException();
                  (*pcVar7)();
                }
                lVar4 = *(long *)(lVar11 + -8);
                lVar12 = 0;
                *(undefined8 *)(this_00 + 0x2b8) = 0;
                lVar15 = lVar11;
                if (lVar4 != 0) {
                  do {
                    if (*(long *)(lVar15 + 8) != 0) {
                      LOCK();
                      plVar10 = (long *)(*(long *)(lVar15 + 8) + -0x10);
                      *plVar10 = *plVar10 + -1;
                      UNLOCK();
                      if (*plVar10 == 0) {
                        lVar5 = *(long *)(lVar15 + 8);
                        *(undefined8 *)(lVar15 + 8) = 0;
                        Memory::free_static((void *)(lVar5 + -0x10),false);
                      }
                    }
                    lVar12 = lVar12 + 1;
                    lVar15 = lVar15 + 0x18;
                  } while (lVar4 != lVar12);
                }
                Memory::free_static((void *)(lVar11 + -0x10),false);
              }
            }
            CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this_00 + 0x290));
            CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this_00 + 0x280));
            Resource::~Resource((Resource *)this_00);
          }
          else {
            (**(code **)(*(long *)this_00 + 0x140))(this_00);
          }
          Memory::free_static(this_00,false);
        }
        puVar14 = (undefined8 *)puVar14[1];
      } while (puVar14 != (undefined8 *)0x0);
    }
    if (local_90 != (undefined1 (*) [16])0x0) {
      do {
        pvVar3 = *(void **)*local_90;
        if (pvVar3 == (void *)0x0) {
          if (*(int *)local_90[1] != 0) {
            _err_print_error("~List","./core/templates/list.h",0x316,
                             "Condition \"_data->size_cache\" is true.",0,0);
            goto LAB_0010282f;
          }
          break;
        }
        if (local_90 == *(undefined1 (**) [16])((long)pvVar3 + 0x18)) {
          lVar11 = *(long *)((long)pvVar3 + 8);
          lVar4 = *(long *)((long)pvVar3 + 0x10);
          *(long *)*local_90 = lVar11;
          if (pvVar3 == *(void **)(*local_90 + 8)) {
            *(long *)(*local_90 + 8) = lVar4;
          }
          if (lVar4 != 0) {
            *(long *)(lVar4 + 8) = lVar11;
            lVar11 = *(long *)((long)pvVar3 + 8);
          }
          if (lVar11 != 0) {
            *(long *)(lVar11 + 0x10) = lVar4;
          }
          Memory::free_static(pvVar3,false);
          *(int *)local_90[1] = *(int *)local_90[1] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
      } while (*(int *)local_90[1] != 0);
      Memory::free_static(local_90,false);
    }
  }
LAB_0010282f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshGenerator2D::parse_source_geometry_data(Ref<NavigationPolygon>,
   Ref<NavigationMeshSourceGeometryData2D>, Node*, Callable const&) */

void NavMeshGenerator2D::parse_source_geometry_data
               (long *param_1,undefined8 *param_2,long param_3,Callable *param_4)

{
  NavigationPolygon *pNVar1;
  NavigationMeshSourceGeometryData2D *pNVar2;
  char cVar3;
  char *pcVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  NavigationPolygon *local_40;
  NavigationMeshSourceGeometryData2D *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
    Thread::caller_id();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000102c40) != 1) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = 0x83;
      pcVar4 = "Condition \"!Thread::is_main_thread()\" is true.";
LAB_00102d96:
      _err_print_error("parse_source_geometry_data",
                       "modules/navigation/2d/nav_mesh_generator_2d.cpp",uVar5,pcVar4,0,0);
      return;
    }
    goto LAB_00102e57;
  }
  if (*param_1 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = 0x84;
      pcVar4 = "Condition \"p_navigation_mesh.is_null()\" is true.";
      goto LAB_00102d96;
    }
    goto LAB_00102e57;
  }
  if (param_3 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = 0x85;
      pcVar4 = "Parameter \"p_root_node\" is null.";
      goto LAB_00102d96;
    }
    goto LAB_00102e57;
  }
  if ((*(byte *)(param_3 + 0x2fa) & 0x40) == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = 0x86;
      pcVar4 = "Condition \"!p_root_node->is_inside_tree()\" is true.";
      goto LAB_00102d96;
    }
    goto LAB_00102e57;
  }
  if ((Ref *)*param_2 == (Ref *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = 0x87;
      pcVar4 = "Condition \"p_source_geometry_data.is_null()\" is true.";
      goto LAB_00102d96;
    }
    goto LAB_00102e57;
  }
  local_38 = (NavigationMeshSourceGeometryData2D *)0x0;
  Ref<NavigationMeshSourceGeometryData2D>::operator=
            ((Ref<NavigationMeshSourceGeometryData2D> *)&local_38,(Ref *)*param_2);
  local_40 = (NavigationPolygon *)0x0;
  Ref<NavigationPolygon>::operator=((Ref<NavigationPolygon> *)&local_40,(Ref *)*param_1);
  generator_parse_source_geometry_data
            ((Ref<NavigationPolygon> *)&local_40,
             (Ref<NavigationMeshSourceGeometryData2D> *)&local_38,param_3);
  pNVar1 = local_40;
  if ((local_40 == (NavigationPolygon *)0x0) || (cVar3 = RefCounted::unreference(), cVar3 == '\0'))
  {
    if (local_38 != (NavigationMeshSourceGeometryData2D *)0x0) goto LAB_00102cd7;
LAB_00102ce3:
    cVar3 = Callable::is_valid();
  }
  else {
    memdelete<NavigationPolygon>(pNVar1);
    if (local_38 == (NavigationMeshSourceGeometryData2D *)0x0) goto LAB_00102ce3;
LAB_00102cd7:
    pNVar2 = local_38;
    cVar3 = RefCounted::unreference();
    if (cVar3 == '\0') goto LAB_00102ce3;
    memdelete<NavigationMeshSourceGeometryData2D>(pNVar2);
    cVar3 = Callable::is_valid();
  }
  if (cVar3 == '\0') {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    generator_emit_callback(param_4);
    return;
  }
LAB_00102e57:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > >
   std::transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > const*,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > >,
   std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > >, Clipper2Lib::ScalePaths<long,
   double>(std::vector<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >,
   std::allocator<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > > > const&, double, double, int&)::{lambda(auto:1
   const&)#1}>(__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > const*,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > >,
   __gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > const*,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > >,
   std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > >, Clipper2Lib::ScalePaths<long,
   double>(std::vector<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >,
   std::allocator<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > > > const&, double, double, int&)::{lambda(auto:1 const&)#1}) [clone .isra.0] */

void std::
     transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>const*,std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>>,std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>>,Clipper2Lib::ScalePaths<long,double>(std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>const&,double,double,int&)::_lambda(auto:1_const&)_1_>
               (long *param_1,long *param_2,undefined8 *param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  double *pdVar14;
  long in_FS_OFFSET;
  double dVar15;
  double dVar16;
  uint *in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  double local_a8;
  double local_a0;
  long local_68;
  long lStack_60;
  undefined1 local_58 [16];
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != param_2) {
    do {
      local_48 = (long *)0x0;
      local_58 = (undefined1  [16])0x0;
      if (in_stack_00000018 == 0.0 || in_stack_00000010 == 0.0) {
        *in_stack_00000008 = *in_stack_00000008 | 2;
        if (in_stack_00000010 == 0.0) {
          if (in_stack_00000018 == 0.0) {
            local_a8 = _LC11;
            local_a0 = local_a8;
          }
          else {
            local_a8 = _LC11;
            local_a0 = in_stack_00000018;
          }
        }
        else {
          local_a8 = in_stack_00000010;
          local_a0 = _LC11;
        }
      }
      else {
        local_a0 = in_stack_00000018;
        local_a8 = in_stack_00000010;
      }
      vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::reserve
                ((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *)
                 local_58,param_1[1] - *param_1 >> 4);
      pdVar1 = (double *)param_1[1];
      for (pdVar14 = (double *)*param_1; pdVar1 != pdVar14; pdVar14 = pdVar14 + 2) {
        while( true ) {
          dVar15 = round(local_a8 * *pdVar14);
          dVar16 = round(local_a0 * pdVar14[1]);
          local_68 = (long)dVar15;
          lStack_60 = (long)dVar16;
          if ((long *)local_58._8_8_ != local_48) break;
          pdVar14 = pdVar14 + 2;
          vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::
          _M_realloc_insert<Clipper2Lib::Point<long>>
                    ((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *)
                     local_58,local_58._8_8_,&local_68);
          if (pdVar1 == pdVar14) goto LAB_00103018;
        }
        *(long *)local_58._8_8_ = local_68;
        *(long *)(local_58._8_8_ + 8) = lStack_60;
        local_58._8_8_ = (long *)(local_58._8_8_ + 0x10);
      }
LAB_00103018:
      puVar2 = (undefined8 *)param_3[1];
      puVar13 = (undefined8 *)param_3[2];
      if (puVar2 == puVar13) {
        puVar3 = (undefined8 *)*param_3;
        puVar11 = (undefined8 *)((long)puVar2 - (long)puVar3);
        uVar6 = ((long)puVar11 >> 3) * -0x5555555555555555;
        if (uVar6 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        if (puVar2 == puVar3) {
          uVar9 = uVar6 + 1;
          if (0xfffffffffffffffe < uVar6) goto LAB_00103238;
          if (0x555555555555555 < uVar9) {
            uVar9 = 0x555555555555555;
          }
          uVar9 = uVar9 * 0x18;
LAB_001031c1:
          puVar8 = (undefined8 *)operator_new(uVar9);
          uVar4 = local_58._0_8_;
          uVar5 = local_58._8_8_;
          local_58 = (undefined1  [16])0x0;
          puVar11 = (undefined8 *)((long)puVar11 + (long)puVar8);
          lVar10 = uVar9 + (long)puVar8;
          *puVar11 = uVar4;
          puVar11[1] = uVar5;
          puVar13 = (undefined8 *)param_3[2];
          puVar11[2] = local_48;
          puVar11 = puVar8 + 3;
          local_48 = (long *)0x0;
          puVar7 = puVar3;
          puVar12 = puVar8;
          if (puVar2 != puVar3) goto LAB_00103130;
        }
        else {
          uVar9 = ((long)puVar11 >> 3) * 0x5555555555555556;
          if (uVar9 < uVar6) {
LAB_00103238:
            uVar9 = 0x7ffffffffffffff8;
            goto LAB_001031c1;
          }
          if (uVar9 != 0) {
            if (0x555555555555555 < uVar9) {
              uVar9 = 0x555555555555555;
            }
            uVar9 = uVar9 * 0x18;
            goto LAB_001031c1;
          }
          lVar10 = 0;
          puVar11[2] = local_48;
          *puVar11 = local_58._0_8_;
          puVar11[1] = local_58._8_8_;
          puVar8 = (undefined8 *)0x0;
          puVar7 = puVar3;
          puVar12 = puVar8;
LAB_00103130:
          do {
            uVar5 = puVar7[1];
            uVar4 = puVar7[2];
            puVar11 = puVar7 + 3;
            *puVar8 = *puVar7;
            puVar8[1] = uVar5;
            puVar8[2] = uVar4;
            puVar7 = puVar11;
            puVar8 = puVar8 + 3;
          } while (puVar2 != puVar11);
          puVar11 = (undefined8 *)
                    ((long)puVar12 +
                    ((long)puVar2 + (-0x18 - (long)puVar3) & 0xfffffffffffffff8U) + 0x30);
          puVar8 = puVar12;
        }
        if (puVar3 != (undefined8 *)0x0) {
          operator_delete(puVar3,(long)puVar13 - (long)puVar3);
        }
        *param_3 = puVar8;
        param_3[1] = puVar11;
        param_3[2] = lVar10;
      }
      else {
        *puVar2 = local_58._0_8_;
        puVar2[1] = local_58._8_8_;
        puVar2[2] = local_48;
        param_3[1] = puVar2 + 3;
      }
      param_1 = param_1 + 3;
    } while (param_2 != param_1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NavMeshGenerator2D::generator_bake_from_source_geometry_data(Ref<NavigationPolygon>,
   Ref<NavigationMeshSourceGeometryData2D>) */

void NavMeshGenerator2D::generator_bake_from_source_geometry_data(long *param_1,long *param_2)

{
  pthread_rwlock_t *__rwlock;
  long lVar1;
  Vector2 *pVVar2;
  int *piVar3;
  float fVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  char cVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  Clipper2Lib *pCVar13;
  Clipper2Lib *pCVar14;
  long lVar15;
  Clipper2Lib *pCVar16;
  char *pcVar17;
  float fVar18;
  vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *pvVar19;
  Clipper2Lib *pCVar20;
  int iVar21;
  vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *pvVar22;
  undefined4 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  float *pfVar29;
  float *pfVar30;
  vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *pvVar31;
  vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *pvVar32;
  long lVar33;
  long lVar34;
  long *plVar35;
  int *piVar36;
  float fVar37;
  ulong uVar38;
  long in_FS_OFFSET;
  float fVar39;
  double dVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
  *local_338;
  PolyPathD *local_330;
  vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
  *local_318;
  vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *local_308;
  CowData<Vector2> *local_300;
  vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
  *local_2f8;
  CowData<Vector<int>> *local_2e0;
  List local_2ad;
  undefined4 local_2ac;
  undefined8 local_2a8;
  long *local_2a0;
  Vector local_298 [8];
  long local_290 [2];
  long local_280 [2];
  long local_270;
  uint local_268;
  undefined4 uStack_264;
  long local_260;
  vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
  local_258 [16];
  undefined8 local_248;
  undefined1 local_238 [16];
  undefined8 local_228;
  vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
  local_218 [16];
  undefined8 local_208;
  long local_1f8;
  long local_1f0;
  vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *local_1d8;
  vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *pvStack_1d0;
  int *local_1c8;
  undefined1 local_1c0 [16];
  undefined8 local_1b0;
  undefined **local_1a8;
  float *local_1a0;
  long local_198;
  long local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_1 == 0) || (*param_2 == 0)) goto LAB_001036ff;
  local_248 = 0;
  __rwlock = (pthread_rwlock_t *)(*param_2 + 0x240);
  local_228 = 0;
  local_258[0] = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                  )0x0;
  local_258[1] = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                  )0x0;
  local_258[2] = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                  )0x0;
  local_258[3] = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                  )0x0;
  local_258[4] = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                  )0x0;
  local_258[5] = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                  )0x0;
  local_258[6] = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                  )0x0;
  local_258[7] = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                  )0x0;
  local_258[8] = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                  )0x0;
  local_258[9] = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                  )0x0;
  local_258[10] =
       (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
        )0x0;
  local_258[0xb] =
       (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
        )0x0;
  local_258[0xc] =
       (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
        )0x0;
  local_258[0xd] =
       (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
        )0x0;
  local_258[0xe] =
       (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
        )0x0;
  local_258[0xf] =
       (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
        )0x0;
  local_238 = (undefined1  [16])0x0;
  do {
    iVar10 = pthread_rwlock_rdlock(__rwlock);
  } while (iVar10 == 0xb);
  if (iVar10 == 0x23) goto LAB_0010483e;
  lVar24 = *param_2;
  iVar10 = NavigationPolygon::get_outline_count();
  if (iVar10 == 0) {
    cVar9 = NavigationMeshSourceGeometryData2D::has_data();
    if ((cVar9 != '\0') && (lVar26 = *(long *)(lVar24 + 0x280), lVar26 != 0)) {
      uVar27 = 0;
      local_318 = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                   *)*param_2;
      goto LAB_00103361;
    }
    pthread_rwlock_unlock(__rwlock);
  }
  else {
    local_318 = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                 *)*param_2;
    uVar27 = (ulong)iVar10;
    lVar26 = *(long *)(lVar24 + 0x280);
    if (lVar26 != 0) {
LAB_00103361:
      uVar27 = uVar27 + *(long *)(lVar26 + -8);
    }
    std::
    vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
    ::reserve(local_258,uVar27);
    if (*(long *)((long)local_318 + 0x290) == 0) {
      uVar27 = 0;
    }
    else {
      uVar27 = *(ulong *)(*(long *)((long)local_318 + 0x290) + -8);
    }
    std::
    vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
    ::reserve((vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
               *)local_238,uVar27);
    if (0 < iVar10) {
      iVar21 = 0;
      do {
        NavigationPolygon::get_outline((int)&local_1a8);
        local_148 = 0.0;
        local_158 = (undefined1  [16])0x0;
        if (local_1a0 == (float *)0x0) {
          uVar27 = 0;
        }
        else {
          uVar27 = *(ulong *)(local_1a0 + -2);
        }
        std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::reserve
                  ((vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *)
                   local_158,uVar27);
        if (local_1a0 != (float *)0x0) {
          pfVar30 = local_1a0 + *(long *)(local_1a0 + -2) * 2;
          for (pfVar29 = local_1a0; pfVar29 != pfVar30; pfVar29 = pfVar29 + 2) {
            std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::
            emplace_back<float_const&,float_const&>
                      ((vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>
                        *)local_158,pfVar29,pfVar29 + 1);
          }
        }
        std::
        vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
        ::
        emplace_back<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>
                  (local_258,(vector *)local_158);
        if ((void *)local_158._0_8_ != (void *)0x0) {
          operator_delete((void *)local_158._0_8_,(long)local_148 - local_158._0_8_);
        }
        iVar21 = iVar21 + 1;
        CowData<Vector2>::_unref((CowData<Vector2> *)&local_1a0);
      } while (iVar10 != iVar21);
    }
    local_308 = (vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *)
                local_158;
    lVar24 = *(long *)(lVar24 + 0x280);
    if (lVar24 != 0) {
      lVar26 = lVar24 + *(long *)(lVar24 + -8) * 0x10;
      for (; lVar24 != lVar26; lVar24 = lVar24 + 0x10) {
        local_148 = 0.0;
        local_158 = (undefined1  [16])0x0;
        if (*(long *)(lVar24 + 8) == 0) {
          uVar27 = 0;
        }
        else {
          uVar27 = *(ulong *)(*(long *)(lVar24 + 8) + -8);
        }
        std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::reserve
                  (local_308,uVar27);
        pfVar30 = *(float **)(lVar24 + 8);
        if (pfVar30 != (float *)0x0) {
          pfVar29 = pfVar30 + *(long *)(pfVar30 + -2) * 2;
          for (; pfVar30 != pfVar29; pfVar30 = pfVar30 + 2) {
            std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::
            emplace_back<float_const&,float_const&>(local_308,pfVar30,pfVar30 + 1);
          }
        }
        std::
        vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
        ::
        emplace_back<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>
                  (local_258,(vector *)local_308);
        if ((void *)local_158._0_8_ != (void *)0x0) {
          operator_delete((void *)local_158._0_8_,(long)local_148 - local_158._0_8_);
        }
      }
    }
    lVar24 = *(long *)((long)local_318 + 0x2b8);
    if (lVar24 != 0) {
      lVar26 = *(long *)(lVar24 + -8);
      for (lVar25 = lVar24; lVar25 != lVar24 + lVar26 * 0x18; lVar25 = lVar25 + 0x18) {
        if ((*(char *)(lVar25 + 0x10) == '\0') && (*(long *)(lVar25 + 8) != 0)) {
          uVar27 = *(ulong *)(*(long *)(lVar25 + 8) + -8);
          uVar38 = (ulong)((uint)uVar27 & 1);
          if ((uVar27 & 1) == 0) {
            lVar34 = 1;
            local_158 = (undefined1  [16])0x0;
            local_148 = 0.0;
            std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::
            reserve(local_308,(long)uVar27 / 2);
            lVar33 = *(long *)(lVar25 + 8);
            for (; (lVar33 != 0 && (lVar28 = *(long *)(lVar33 + -8), (long)uVar38 < lVar28 / 2));
                uVar38 = uVar38 + 1) {
              lVar15 = lVar34;
              if (lVar28 <= lVar34) goto LAB_00103c06;
              lVar1 = lVar34 * 4;
              lVar15 = uVar38 * 2;
              if (lVar28 <= (long)(uVar38 * 2)) goto LAB_00103c06;
              lVar34 = lVar34 + 2;
              std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::
              emplace_back<float_const&,float_const&>
                        (local_308,(float *)(lVar33 + uVar38 * 8),(float *)(lVar33 + lVar1));
              lVar33 = *(long *)(lVar25 + 8);
            }
            pCVar13 = (Clipper2Lib *)local_158._8_8_;
            pCVar16 = (Clipper2Lib *)local_158._0_8_;
            dVar40 = Clipper2Lib::Area<double>
                               ((Clipper2Lib *)local_158._0_8_,(vector *)local_158._8_8_);
            if (((dVar40 < 0.0) && (pCVar16 != pCVar13)) &&
               (pCVar13 = pCVar13 + -0x10, pCVar16 < pCVar13)) {
              do {
                uVar41 = *(undefined8 *)pCVar16;
                uVar6 = *(undefined8 *)(pCVar16 + 8);
                uVar7 = *(undefined8 *)(pCVar13 + 8);
                pCVar20 = pCVar16 + 0x10;
                pCVar14 = pCVar13 + -0x10;
                *(undefined8 *)pCVar16 = *(undefined8 *)pCVar13;
                *(undefined8 *)(pCVar16 + 8) = uVar7;
                *(undefined8 *)pCVar13 = uVar41;
                *(undefined8 *)(pCVar13 + 8) = uVar6;
                pCVar13 = pCVar14;
                pCVar16 = pCVar20;
              } while (pCVar20 < pCVar14);
            }
            std::
            vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
            ::
            emplace_back<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>
                      ((vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                        *)local_238,(vector *)local_308);
            std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::
            ~vector(local_308);
          }
        }
      }
    }
    lVar26 = *(long *)((long)local_318 + 0x290);
    if (lVar26 != 0) {
      lVar25 = lVar26 + *(long *)(lVar26 + -8) * 0x10;
      for (; lVar25 != lVar26; lVar26 = lVar26 + 0x10) {
        local_148 = 0.0;
        local_158 = (undefined1  [16])0x0;
        if (*(long *)(lVar26 + 8) == 0) {
          uVar27 = 0;
        }
        else {
          uVar27 = *(ulong *)(*(long *)(lVar26 + 8) + -8);
        }
        std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::reserve
                  (local_308,uVar27);
        pfVar30 = *(float **)(lVar26 + 8);
        if (pfVar30 != (float *)0x0) {
          pfVar29 = pfVar30 + *(long *)(pfVar30 + -2) * 2;
          for (; pfVar29 != pfVar30; pfVar30 = pfVar30 + 2) {
            std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::
            emplace_back<float_const&,float_const&>(local_308,pfVar30,pfVar30 + 1);
          }
        }
        std::
        vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
        ::
        emplace_back<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>
                  ((vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                    *)local_238,(vector *)local_308);
        if ((void *)local_158._0_8_ != (void *)0x0) {
          operator_delete((void *)local_158._0_8_,(long)local_148 - local_158._0_8_);
        }
      }
    }
    pthread_rwlock_unlock(__rwlock);
    auVar42 = NavigationPolygon::get_baking_rect();
    fVar4 = auVar42._8_4_;
    fVar11 = auVar42._12_4_;
    fVar18 = auVar42._4_4_;
    fVar37 = auVar42._0_4_;
    if ((0.0 < fVar4) && (0.0 < fVar11)) {
      uVar41 = NavigationPolygon::get_baking_rect_offset();
      fVar39 = (float)((ulong)uVar41 >> 0x20);
      local_158._8_8_ = (double)(int)(fVar18 + fVar39);
      local_158._0_8_ = (double)(int)(fVar37 + (float)uVar41);
      local_148 = (double)(int)(fVar37 + fVar4 + (float)uVar41);
      dStack_140 = (double)(int)(fVar11 + fVar18 + fVar39);
      Clipper2Lib::RectClip((Clipper2Lib *)&local_1a8,(Rect *)local_308,(vector *)local_258,2);
      std::
      vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
      ::_M_move_assign(local_258,(Clipper2Lib *)&local_1a8);
      std::
      vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
      ::~vector((vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                 *)&local_1a8);
      Clipper2Lib::RectClip((Clipper2Lib *)&local_1a8,(Rect *)local_308,(vector *)local_238,2);
      std::
      vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
      ::_M_move_assign((vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                        *)local_238,(Clipper2Lib *)&local_1a8);
      std::
      vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
      ::~vector((vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                 *)&local_1a8);
    }
    local_218[0] = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                    )0x0;
    local_218[1] = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                    )0x0;
    local_218[2] = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                    )0x0;
    local_218[3] = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                    )0x0;
    local_218[4] = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                    )0x0;
    local_218[5] = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                    )0x0;
    local_218[6] = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                    )0x0;
    local_218[7] = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                    )0x0;
    local_218[8] = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                    )0x0;
    local_218[9] = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                    )0x0;
    local_218[10] =
         (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
          )0x0;
    local_218[0xb] =
         (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
          )0x0;
    local_218[0xc] =
         (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
          )0x0;
    local_218[0xd] =
         (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
          )0x0;
    local_218[0xe] =
         (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
          )0x0;
    local_218[0xf] =
         (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
          )0x0;
    local_208 = 0;
    Clipper2Lib::BooleanOp((Clipper2Lib *)local_308,2,1,local_258,local_218,2);
    std::
    vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
    ::_M_move_assign(local_258,local_308);
    std::
    vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
    ::~vector((vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
               *)local_308);
    Clipper2Lib::BooleanOp
              ((Clipper2Lib *)local_308,2,1,
               (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                *)local_238,local_218,2);
    std::
    vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
    ::_M_move_assign((vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                      *)local_238,local_308);
    std::
    vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
    ::~vector((vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
               *)local_308);
    Clipper2Lib::BooleanOp
              ((Clipper2Lib *)&local_1f8,3,1,local_258,
               (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                *)local_238,2);
    fVar39 = (float)NavigationPolygon::get_agent_radius();
    if (0.0 < fVar39) {
      Clipper2Lib::InflatePaths
                ((Clipper2Lib *)(double)(float)((uint)fVar39 ^ __LC78),_LC13,local_308,
                 (Clipper2Lib *)&local_1f8,3,0);
      std::
      vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
      ::_M_move_assign((Clipper2Lib *)&local_1f8,local_308);
      std::
      vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
      ::~vector((vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                 *)local_308);
    }
    local_2f8 = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                 *)local_238;
    if (lVar24 != 0) {
      lVar24 = *param_2;
      do {
        iVar10 = pthread_rwlock_rdlock((pthread_rwlock_t *)(lVar24 + 0x240));
      } while (iVar10 == 0xb);
      if (iVar10 == 0x23) {
LAB_0010483e:
                    /* WARNING: Subroutine does not return */
        std::__throw_system_error(0x23);
      }
      uVar41 = local_238._8_8_;
      pvVar19 = (vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *)
                local_238._0_8_;
      lVar26 = *param_2;
      pvVar31 = (vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *)
                local_238._0_8_;
      if (local_238._8_8_ == local_238._0_8_) {
        lVar26 = *(long *)(lVar26 + 0x2b8);
        if (lVar26 != 0) goto LAB_00103aca;
      }
      else {
        do {
          pvVar32 = pvVar31 + 0x18;
          std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::
          ~vector(pvVar31);
          pvVar31 = pvVar32;
        } while ((vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *)
                 uVar41 != pvVar32);
        lVar26 = *(long *)(lVar26 + 0x2b8);
        local_238._8_8_ = pvVar19;
        if (lVar26 != 0) {
LAB_00103aca:
          lVar25 = lVar26 + *(long *)(lVar26 + -8) * 0x18;
          if (lVar25 != lVar26) {
            do {
              if ((*(char *)(lVar26 + 0x10) != '\0') && (*(long *)(lVar26 + 8) != 0)) {
                uVar27 = *(ulong *)(*(long *)(lVar26 + 8) + -8);
                uVar38 = (ulong)((uint)uVar27 & 1);
                if ((uVar27 & 1) == 0) {
                  lVar34 = 1;
                  local_158 = (undefined1  [16])0x0;
                  local_148 = 0.0;
                  std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>
                  ::reserve(local_308,(long)uVar27 / 2);
                  lVar33 = *(long *)(lVar26 + 8);
                  for (; (lVar33 != 0 &&
                         (lVar28 = *(long *)(lVar33 + -8), (long)uVar38 < lVar28 / 2));
                      uVar38 = uVar38 + 1) {
                    lVar15 = lVar34;
                    if (lVar28 <= lVar34) {
LAB_00103c06:
                      _err_print_index_error
                                ("get","./core/templates/cowdata.h",0xdb,lVar15,lVar28,"p_index",
                                 "size()","",false,true);
                      _err_flush_stdout();
                    /* WARNING: Does not return */
                      pcVar5 = (code *)invalidInstructionException();
                      (*pcVar5)();
                    }
                    lVar15 = uVar38 * 2;
                    if (lVar28 <= lVar15) goto LAB_00103c06;
                    std::
                    vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::
                    emplace_back<float_const&,float_const&>
                              (local_308,(float *)(lVar33 + uVar38 * 8),
                               (float *)(lVar33 + lVar34 * 4));
                    lVar33 = *(long *)(lVar26 + 8);
                    lVar34 = lVar34 + 2;
                  }
                  pCVar13 = (Clipper2Lib *)local_158._8_8_;
                  pCVar16 = (Clipper2Lib *)local_158._0_8_;
                  dVar40 = Clipper2Lib::Area<double>
                                     ((Clipper2Lib *)local_158._0_8_,(vector *)local_158._8_8_);
                  if (((dVar40 < 0.0) && (pCVar16 != pCVar13)) &&
                     (pCVar13 = pCVar13 + -0x10, pCVar16 < pCVar13)) {
                    do {
                      uVar41 = *(undefined8 *)pCVar16;
                      uVar6 = *(undefined8 *)(pCVar16 + 8);
                      uVar7 = *(undefined8 *)(pCVar13 + 8);
                      pCVar20 = pCVar16 + 0x10;
                      pCVar14 = pCVar13 + -0x10;
                      *(undefined8 *)pCVar16 = *(undefined8 *)pCVar13;
                      *(undefined8 *)(pCVar16 + 8) = uVar7;
                      *(undefined8 *)pCVar13 = uVar41;
                      *(undefined8 *)(pCVar13 + 8) = uVar6;
                      pCVar13 = pCVar14;
                      pCVar16 = pCVar20;
                    } while (pCVar20 < pCVar14);
                  }
                  std::
                  vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                  ::
                  emplace_back<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>
                            (local_2f8,(vector *)local_308);
                  std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>
                  ::~vector(local_308);
                }
              }
              lVar26 = lVar26 + 0x18;
            } while (lVar25 != lVar26);
            pvVar19 = (vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>
                       *)local_238._0_8_;
          }
        }
        if (pvVar19 !=
            (vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *)
            local_238._8_8_) {
          Clipper2Lib::BooleanOp((Clipper2Lib *)local_308,3,1,(Clipper2Lib *)&local_1f8,local_2f8,2)
          ;
          std::
          vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
          ::_M_move_assign((Clipper2Lib *)&local_1f8,local_308);
          std::
          vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
          ::~vector((vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                     *)local_308);
        }
      }
      pthread_rwlock_unlock((pthread_rwlock_t *)(lVar24 + 0x240));
    }
    fVar39 = (float)NavigationPolygon::get_border_size();
    if (((0.0 < fVar4) && (0.0 < fVar11)) && (0.0 < fVar39)) {
      uVar41 = NavigationPolygon::get_baking_rect_offset();
      fVar12 = (float)((ulong)uVar41 >> 0x20);
      local_148 = (double)(int)((fVar37 + fVar4 + (float)uVar41) - fVar39);
      dStack_140 = (double)(int)((fVar11 + fVar18 + fVar12) - fVar39);
      local_158._8_8_ = (double)(int)(fVar39 + fVar18 + fVar12);
      local_158._0_8_ = (double)(int)(fVar39 + fVar37 + (float)uVar41);
      Clipper2Lib::RectClip((Clipper2Lib *)&local_1a8,(Rect *)local_308,(vector *)&local_1f8,2);
      std::
      vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
      ::_M_move_assign((Clipper2Lib *)&local_1f8,(Clipper2Lib *)&local_1a8);
      std::
      vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
      ::~vector((vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                 *)&local_1a8);
    }
    if (local_1f0 == local_1f8) {
      NavigationPolygon::clear();
    }
    else {
      local_1a8 = &PTR__PolyPathD_0010e670;
      local_178 = (undefined1  [16])0x0;
      local_180 = _LC11;
      local_2a8 = 0;
      local_2a0 = (long *)0x0;
      local_1a0 = (float *)0x0;
      local_198 = 0;
      local_190 = 0;
      local_188 = 0;
      local_168 = 0;
      Clipper2Lib::ClipperD::ClipperD((ClipperD *)local_308,2);
      Clipper2Lib::ClipperD::AddSubject((ClipperD *)local_308,(vector *)&local_1f8);
      local_1c8 = (int *)0x0;
      local_1d8 = (vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *)
                  0x0;
      pvStack_1d0 = (vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *
                    )0x0;
      cVar9 = Clipper2Lib::ClipperBase::ExecuteInternal(local_308,2,1,1);
      if (cVar9 != '\0') {
        std::
        vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>
        ::resize((vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>
                  *)&local_198,0);
        pvVar31 = pvStack_1d0;
        pvVar19 = local_1d8;
        local_180 = local_50;
        pvVar32 = local_1d8;
        if (local_1d8 != pvStack_1d0) {
          do {
            pvVar22 = pvVar32 + 0x18;
            std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::
            ~vector(pvVar32);
            pvVar32 = pvVar22;
          } while (pvVar31 != pvVar22);
          pvStack_1d0 = pvVar19;
        }
        Clipper2Lib::ClipperD::BuildTreeD((PolyPathD *)local_308,(vector *)&local_1a8);
      }
      local_318 = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                   *)&local_1d8;
      local_330 = (PolyPathD *)&local_1a8;
      uVar27 = 0;
      Clipper2Lib::ClipperBase::CleanUp();
      std::
      vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
      ::~vector(local_318);
      if (local_198 != local_190) {
        do {
          lVar24 = uVar27 * 8;
          uVar27 = uVar27 + 1;
          generator_recursive_process_polytree_items
                    ((List *)&local_2a8,*(PolyPathD **)(local_198 + lVar24));
        } while (uVar27 < (ulong)(local_190 - local_198 >> 3));
      }
      iVar10 = NavigationPolygon::get_sample_partition_type();
      if (iVar10 == 0) {
        iVar10 = TPPLPartition::ConvexPartition_HM(&local_2ad,(List *)&local_2a8);
        if (iVar10 != 0) goto LAB_001041a5;
        uVar41 = 0x1df;
        pcVar17 = 
        "NavigationPolygon polygon convex partition failed. Unable to create a valid navigation mesh polygon layout from provided source geometry."
        ;
LAB_00104753:
        _err_print_error("generator_bake_from_source_geometry_data",
                         "modules/navigation/2d/nav_mesh_generator_2d.cpp",uVar41,pcVar17,0,0);
        pvStack_1d0 = (vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>
                       *)0x0;
        NavigationPolygon::set_vertices((Vector *)*param_1);
        CowData<Vector2>::_unref((CowData<Vector2> *)&pvStack_1d0);
        NavigationPolygon::clear_polygons();
      }
      else if (iVar10 == 1) {
        iVar10 = TPPLPartition::Triangulate_EC(&local_2ad,(List *)&local_2a8);
        if (iVar10 == 0) {
          uVar41 = 0x1e7;
          pcVar17 = 
          "NavigationPolygon polygon triangulation failed. Unable to create a valid navigation mesh polygon layout from provided source geometry."
          ;
          goto LAB_00104753;
        }
LAB_001041a5:
        local_290[0] = 0;
        local_280[0] = 0;
        local_1b0 = 2;
        pvStack_1d0 = (vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>
                       *)0x0;
        local_1c8 = (int *)0x0;
        local_1c0 = (undefined1  [16])0x0;
        if ((local_2a0 == (long *)0x0) || (plVar35 = (long *)*local_2a0, plVar35 == (long *)0x0)) {
          NavigationPolygon::set_data((Vector *)*param_1,local_298);
        }
        else {
          do {
            local_270 = 0;
            if (plVar35[1] < 1) {
              local_260 = 0;
            }
            else {
              lVar26 = 0;
              lVar24 = 0;
              do {
                while( true ) {
                  local_268 = 0;
                  pVVar2 = (Vector2 *)(*plVar35 + (long)(int)lVar26 * 8);
                  cVar9 = HashMap<Vector2,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,int>>>
                          ::_lookup_pos((HashMap<Vector2,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,int>>>
                                         *)local_318,pVVar2,&local_268);
                  if ((cVar9 == '\0') || (*(long *)((long)pvStack_1d0 + (ulong)local_268 * 8) == 0))
                  break;
                  uVar23 = *(undefined4 *)
                            (*(long *)((long)pvStack_1d0 + (ulong)local_268 * 8) + 0x18);
                  if (lVar24 != 0) goto LAB_00104334;
LAB_001043ee:
                  iVar10 = CowData<int>::resize<false>((CowData<int> *)&local_270,1);
                  if (iVar10 == 0) goto LAB_0010434f;
LAB_00104405:
                  lVar26 = lVar26 + 1;
                  _err_print_error("push_back","./core/templates/vector.h",0x142,
                                   "Condition \"err\" is true. Returning: true",0,0);
                  lVar24 = local_270;
                  if (plVar35[1] <= lVar26) goto LAB_00104440;
                }
                if (local_290[0] == 0) {
                  local_2ac = 0;
                }
                else {
                  local_2ac = *(undefined4 *)(local_290[0] + -8);
                }
                HashMap<Vector2,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,int>>>
                ::insert((Vector2 *)&local_268,(int *)local_318,SUB81(pVVar2,0));
                lVar25 = CONCAT44(uStack_264,local_268);
                uVar41 = *(undefined8 *)(*plVar35 + (long)(int)lVar26 * 8);
                if (local_290[0] == 0) {
                  lVar33 = 1;
                }
                else {
                  lVar33 = *(long *)(local_290[0] + -8) + 1;
                }
                iVar10 = CowData<Vector2>::resize<false>((CowData<Vector2> *)local_290,lVar33);
                if (iVar10 == 0) {
                  if (local_290[0] == 0) {
                    lVar34 = -1;
                    lVar33 = 0;
                  }
                  else {
                    lVar33 = *(long *)(local_290[0] + -8);
                    lVar34 = lVar33 + -1;
                    if (-1 < lVar34) {
                      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)local_290);
                      *(undefined8 *)(local_290[0] + lVar34 * 8) = uVar41;
                      goto LAB_00104327;
                    }
                  }
                  _err_print_index_error
                            ("set","./core/templates/cowdata.h",0xcf,lVar34,lVar33,"p_index",
                             "size()","",false,false);
                }
                else {
                  _err_print_error("push_back","./core/templates/vector.h",0x142,
                                   "Condition \"err\" is true. Returning: true",0,0);
                }
LAB_00104327:
                uVar23 = *(undefined4 *)(lVar25 + 0x18);
                if (lVar24 == 0) goto LAB_001043ee;
LAB_00104334:
                iVar10 = CowData<int>::resize<false>
                                   ((CowData<int> *)&local_270,*(long *)(lVar24 + -8) + 1);
                if (iVar10 != 0) goto LAB_00104405;
LAB_0010434f:
                lVar24 = local_270;
                if (local_270 == 0) {
                  lVar33 = -1;
                  lVar25 = 0;
LAB_001045c8:
                  _err_print_index_error
                            ("set","./core/templates/cowdata.h",0xcf,lVar33,lVar25,"p_index",
                             "size()","",false,false);
                }
                else {
                  lVar25 = *(long *)(local_270 + -8);
                  lVar33 = lVar25 + -1;
                  if (lVar33 < 0) goto LAB_001045c8;
                  CowData<int>::_copy_on_write((CowData<int> *)&local_270);
                  *(undefined4 *)(local_270 + lVar33 * 4) = uVar23;
                  lVar24 = local_270;
                }
                lVar26 = lVar26 + 1;
              } while (lVar26 < plVar35[1]);
LAB_00104440:
              local_260 = 0;
              if (lVar24 != 0) {
                CowData<int>::_ref((CowData<int> *)&local_260,(CowData *)&local_270);
              }
            }
            if (local_280[0] == 0) {
              lVar24 = 1;
            }
            else {
              lVar24 = *(long *)(local_280[0] + -8) + 1;
            }
            iVar10 = CowData<Vector<int>>::resize<false>((CowData<Vector<int>> *)local_280,lVar24);
            if (iVar10 == 0) {
              if (local_280[0] == 0) {
                lVar26 = -1;
                lVar24 = 0;
              }
              else {
                lVar24 = *(long *)(local_280[0] + -8);
                lVar26 = lVar24 + -1;
                if (-1 < lVar26) {
                  CowData<Vector<int>>::_copy_on_write((CowData<Vector<int>> *)local_280);
                  lVar24 = lVar26 * 0x10 + local_280[0];
                  if (*(long *)(lVar24 + 8) != local_260) {
                    CowData<int>::_ref((CowData<int> *)(lVar24 + 8),(CowData *)&local_260);
                  }
                  goto LAB_001044df;
                }
              }
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,lVar26,lVar24,"p_index","size()",""
                         ,false,false);
            }
            else {
              _err_print_error("push_back","./core/templates/vector.h",0x142,
                               "Condition \"err\" is true. Returning: true",0,0);
            }
LAB_001044df:
            CowData<int>::_unref((CowData<int> *)&local_260);
            CowData<int>::_unref((CowData<int> *)&local_270);
            pvVar19 = pvStack_1d0;
            plVar35 = (long *)plVar35[3];
          } while (plVar35 != (long *)0x0);
          NavigationPolygon::set_data((Vector *)*param_1,local_298);
          piVar8 = local_1c8;
          if (pvVar19 !=
              (vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *)0x0)
          {
            if ((local_1b0._4_4_ != 0) &&
               (*(uint *)(hash_table_size_primes + (local_1b0 & 0xffffffff) * 4) != 0)) {
              piVar3 = local_1c8 + *(uint *)(hash_table_size_primes + (local_1b0 & 0xffffffff) * 4);
              piVar36 = local_1c8;
              pvVar31 = pvVar19;
              do {
                if (*piVar36 != 0) {
                  *piVar36 = 0;
                  Memory::free_static(*(void **)pvVar31,false);
                  *(undefined8 *)pvVar31 = 0;
                }
                piVar36 = piVar36 + 1;
                pvVar31 = (vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>
                           *)((long)pvVar31 + 8);
              } while (piVar3 != piVar36);
            }
            Memory::free_static(pvVar19,false);
            Memory::free_static(piVar8,false);
          }
        }
        local_2e0 = (CowData<Vector<int>> *)local_280;
        local_300 = (CowData<Vector2> *)local_290;
        CowData<Vector<int>>::_unref(local_2e0);
        CowData<Vector2>::_unref(local_300);
      }
      else {
        _err_print_error("generator_bake_from_source_geometry_data",
                         "modules/navigation/2d/nav_mesh_generator_2d.cpp",0x1ee,
                         "NavigationPolygon polygon partitioning failed. Unrecognized partition type."
                         ,0,0);
        pvStack_1d0 = (vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>
                       *)0x0;
        NavigationPolygon::set_vertices((Vector *)*param_1);
        CowData<Vector2>::_unref((CowData<Vector2> *)&pvStack_1d0);
        NavigationPolygon::clear_polygons();
      }
      local_158._0_8_ = &PTR__ClipperD_0010e6a8;
      Clipper2Lib::ClipperBase::~ClipperBase((ClipperBase *)local_308);
      Clipper2Lib::PolyPathD::~PolyPathD(local_330);
      List<TPPLPoly,DefaultAllocator>::~List((List<TPPLPoly,DefaultAllocator> *)&local_2a0);
      List<TPPLPoly,DefaultAllocator>::~List((List<TPPLPoly,DefaultAllocator> *)&local_2a8);
    }
    std::
    vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
    ::~vector((vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
               *)&local_1f8);
    std::
    vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
    ::~vector(local_218);
  }
  local_2f8 = (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
               *)local_238;
  local_338 = local_258;
  std::
  vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
  ::~vector(local_2f8);
  std::
  vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
  ::~vector(local_338);
LAB_001036ff:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* NavMeshGenerator2D::bake_from_source_geometry_data(Ref<NavigationPolygon>,
   Ref<NavigationMeshSourceGeometryData2D>, Callable const&) */

void NavMeshGenerator2D::bake_from_source_geometry_data
               (Ref *param_1,long *param_2,Callable *param_3)

{
  NavigationPolygon *pNVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  NavigationPolygon *local_60;
  NavigationPolygon *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0x91;
      pcVar5 = "Condition \"p_navigation_mesh.is_null()\" is true.";
LAB_00104ac2:
      _err_print_error("bake_from_source_geometry_data",
                       "modules/navigation/2d/nav_mesh_generator_2d.cpp",uVar6,pcVar5,0,0);
      return;
    }
    goto LAB_00104b13;
  }
  if (*param_2 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0x92;
      pcVar5 = "Condition \"p_source_geometry_data.is_null()\" is true.";
      goto LAB_00104ac2;
    }
    goto LAB_00104b13;
  }
  iVar4 = NavigationPolygon::get_outline_count();
  if ((iVar4 == 0) && (cVar2 = NavigationMeshSourceGeometryData2D::has_data(), cVar2 == '\0')) {
    NavigationPolygon::clear();
    cVar2 = Callable::is_valid();
joined_r0x001049c0:
    if (cVar2 != '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        generator_emit_callback(param_3);
        return;
      }
      goto LAB_00104b13;
    }
  }
  else {
    local_58[0] = (NavigationPolygon *)0x0;
    Ref<NavigationPolygon>::operator=((Ref<NavigationPolygon> *)local_58,*(Ref **)param_1);
    cVar2 = is_baking((Ref<NavigationPolygon> *)local_58);
    pNVar1 = local_58[0];
    if ((local_58[0] != (NavigationPolygon *)0x0) &&
       (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
      memdelete<NavigationPolygon>(pNVar1);
    }
    if (cVar2 == '\0') {
      iVar4 = pthread_mutex_lock((pthread_mutex_t *)baking_navmesh_mutex);
      if (iVar4 != 0) {
LAB_00104b0c:
                    /* WARNING: Subroutine does not return */
        std::__throw_system_error(iVar4);
      }
      HashSet<Ref<NavigationPolygon>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationPolygon>>>
      ::insert((Ref *)local_58);
      pthread_mutex_unlock((pthread_mutex_t *)baking_navmesh_mutex);
      local_58[0] = (NavigationPolygon *)0x0;
      Ref<NavigationMeshSourceGeometryData2D>::operator=
                ((Ref<NavigationMeshSourceGeometryData2D> *)local_58,(Ref *)*param_2);
      local_60 = (NavigationPolygon *)0x0;
      Ref<NavigationPolygon>::operator=((Ref<NavigationPolygon> *)&local_60,*(Ref **)param_1);
      generator_bake_from_source_geometry_data
                ((Ref<NavigationPolygon> *)&local_60,(Ref<NavigationPolygon> *)local_58);
      pNVar1 = local_60;
      if ((local_60 != (NavigationPolygon *)0x0) &&
         (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
        memdelete<NavigationPolygon>(pNVar1);
      }
      pNVar1 = local_58[0];
      if ((local_58[0] != (NavigationPolygon *)0x0) &&
         (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
        memdelete<NavigationMeshSourceGeometryData2D>((NavigationMeshSourceGeometryData2D *)pNVar1);
      }
      iVar4 = pthread_mutex_lock((pthread_mutex_t *)baking_navmesh_mutex);
      if (iVar4 != 0) goto LAB_00104b0c;
      HashSet<Ref<NavigationPolygon>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationPolygon>>>
      ::erase((HashSet<Ref<NavigationPolygon>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationPolygon>>>
               *)&baking_navmeshes,param_1);
      pthread_mutex_unlock((pthread_mutex_t *)baking_navmesh_mutex);
      cVar2 = Callable::is_valid();
      goto joined_r0x001049c0;
    }
    _err_print_error("bake_from_source_geometry_data",
                     "modules/navigation/2d/nav_mesh_generator_2d.cpp",0x9d,
                     "Method/function failed.",
                     "NavigationPolygon is already baking. Wait for current bake to finish.",0,0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104b13:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshGenerator2D::bake_from_source_geometry_data_async(Ref<NavigationPolygon>,
   Ref<NavigationMeshSourceGeometryData2D>, Callable const&) */

void NavMeshGenerator2D::bake_from_source_geometry_data_async
               (long *param_1,long *param_2,Callable *param_3)

{
  _func_void_void_ptr *p_Var1;
  NavigationPolygon *pNVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  Ref<NavigationPolygon> *this;
  undefined8 uVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  Ref<NavigationPolygon> *local_60;
  NavigationPolygon *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0xaf;
      pcVar7 = "Condition \"p_navigation_mesh.is_null()\" is true.";
LAB_00104e56:
      _err_print_error("bake_from_source_geometry_data_async",
                       "modules/navigation/2d/nav_mesh_generator_2d.cpp",uVar6,pcVar7,0,0);
      return;
    }
    goto LAB_00104ece;
  }
  if (*param_2 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0xb0;
      pcVar7 = "Condition \"p_source_geometry_data.is_null()\" is true.";
      goto LAB_00104e56;
    }
    goto LAB_00104ece;
  }
  iVar5 = NavigationPolygon::get_outline_count();
  if (iVar5 == 0) {
    cVar3 = NavigationMeshSourceGeometryData2D::has_data();
    if (cVar3 != '\0') goto LAB_00104b6e;
    NavigationPolygon::clear();
    cVar3 = Callable::is_valid();
    if (cVar3 != '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        generator_emit_callback(param_3);
        return;
      }
      goto LAB_00104ece;
    }
  }
  else {
LAB_00104b6e:
    if (use_threads == '\0') {
      local_58[0] = (NavigationPolygon *)0x0;
      Ref<NavigationMeshSourceGeometryData2D>::operator=
                ((Ref<NavigationMeshSourceGeometryData2D> *)local_58,(Ref *)*param_2);
      local_60 = (Ref<NavigationPolygon> *)0x0;
      Ref<NavigationPolygon>::operator=((Ref<NavigationPolygon> *)&local_60,(Ref *)*param_1);
      bake_from_source_geometry_data
                ((Ref<NavigationPolygon> *)&local_60,
                 (Ref<NavigationMeshSourceGeometryData2D> *)local_58,param_3);
      Ref<NavigationPolygon>::unref((Ref<NavigationPolygon> *)&local_60);
      pNVar2 = local_58[0];
      if (local_58[0] != (NavigationPolygon *)0x0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            memdelete<NavigationMeshSourceGeometryData2D>
                      ((NavigationMeshSourceGeometryData2D *)pNVar2);
            return;
          }
          goto LAB_00104ece;
        }
      }
    }
    else {
      local_58[0] = (NavigationPolygon *)0x0;
      Ref<NavigationPolygon>::operator=((Ref<NavigationPolygon> *)local_58,(Ref *)*param_1);
      cVar3 = is_baking((Ref<NavigationPolygon> *)local_58);
      pNVar2 = local_58[0];
      if (local_58[0] != (NavigationPolygon *)0x0) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          memdelete<NavigationPolygon>(pNVar2);
        }
      }
      if (cVar3 == '\0') {
        iVar5 = pthread_mutex_lock((pthread_mutex_t *)baking_navmesh_mutex);
        if (iVar5 == 0) {
          HashSet<Ref<NavigationPolygon>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationPolygon>>>
          ::insert((Ref *)local_58);
          pthread_mutex_unlock((pthread_mutex_t *)baking_navmesh_mutex);
          iVar5 = pthread_mutex_lock((pthread_mutex_t *)generator_task_mutex);
          if (iVar5 == 0) {
            this = (Ref<NavigationPolygon> *)operator_new(0x30,"");
            *(undefined8 *)(this + 0x10) = 0;
            *(undefined8 *)(this + 0x18) = 0;
            *(undefined8 *)(this + 0x20) = 0xffffffffffffffff;
            *(undefined4 *)(this + 0x28) = 0;
            *(undefined1 (*) [16])this = (undefined1  [16])0x0;
            local_60 = this;
            Ref<NavigationPolygon>::operator=(this,(Ref *)*param_1);
            Ref<NavigationMeshSourceGeometryData2D>::operator=
                      ((Ref<NavigationMeshSourceGeometryData2D> *)(this + 8),(Ref *)*param_2);
            Callable::operator=((Callable *)(this + 0x10),param_3);
            *(undefined4 *)(this + 0x28) = 0;
            p_Var1 = WorkerThreadPool::singleton;
            local_58[0] = (NavigationPolygon *)0x0;
            String::parse_latin1((String *)local_58,"NavMeshGeneratorBake2D");
            uVar6 = WorkerThreadPool::add_native_task
                              (p_Var1,generator_thread_bake,SUB81(this,0),
                               (String *)(ulong)baking_use_high_priority_threads);
            *(undefined8 *)(this + 0x20) = uVar6;
            CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
            HashMap<long,NavMeshGenerator2D::NavMeshGeneratorTask2D*,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,NavMeshGenerator2D::NavMeshGeneratorTask2D*>>>
            ::insert((long *)local_58,(NavMeshGeneratorTask2D **)generator_tasks,
                     (bool)(SUB81(this,0) + ' '));
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              pthread_mutex_unlock((pthread_mutex_t *)generator_task_mutex);
              return;
            }
            goto LAB_00104ece;
          }
        }
                    /* WARNING: Subroutine does not return */
        std::__throw_system_error(iVar5);
      }
      _err_print_error("bake_from_source_geometry_data_async",
                       "modules/navigation/2d/nav_mesh_generator_2d.cpp",0xc0,
                       "Method/function failed.",
                       "NavigationPolygon is already baking. Wait for current bake to finish.",0,0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104ece:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavMeshGenerator2D::generator_thread_bake(void*) */

void NavMeshGenerator2D::generator_thread_bake(void *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  Object *pOVar6;
  char cVar7;
  Object *this;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  Object *local_50;
  Object *local_48;
  long local_40;
  
  this = *(Object **)((long)param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this == (Object *)0x0) || (local_48 = this, cVar7 = RefCounted::reference(), cVar7 == '\0'))
  {
    local_48 = (Object *)0x0;
    this = (Object *)0x0;
  }
                    /* WARNING: Load size is inaccurate */
  local_50 = (Object *)0x0;
  Ref<NavigationPolygon>::operator=((Ref<NavigationPolygon> *)&local_50,*param_1);
  generator_bake_from_source_geometry_data((Ref<NavigationPolygon> *)&local_50);
  pOVar6 = local_50;
  if (((local_50 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
     (cVar7 = predelete_handler(pOVar6), cVar7 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
  if (((this != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
     (cVar7 = predelete_handler(this), cVar7 != '\0')) {
    if (*(code **)(*(long *)this + 0x140) ==
        NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D) {
      *(undefined ***)this = &PTR__initialize_classv_0010e0e8;
      NavigationMeshSourceGeometryData2D::clear();
      if (*(long *)(this + 0x2b8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(this + 0x2b8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(this + 0x2b8);
          if (lVar2 == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          lVar3 = *(long *)(lVar2 + -8);
          lVar9 = 0;
          *(undefined8 *)(this + 0x2b8) = 0;
          lVar8 = lVar2;
          if (lVar3 != 0) {
            do {
              if (*(long *)(lVar8 + 8) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)(lVar8 + 8) + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar4 = *(long *)(lVar8 + 8);
                  *(undefined8 *)(lVar8 + 8) = 0;
                  Memory::free_static((void *)(lVar4 + -0x10),false);
                }
              }
              lVar9 = lVar9 + 1;
              lVar8 = lVar8 + 0x18;
            } while (lVar3 != lVar9);
          }
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x290));
      CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x280));
      Resource::~Resource((Resource *)this);
    }
    else {
      (**(code **)(*(long *)this + 0x140))(this);
    }
    Memory::free_static(this,false);
  }
  *(undefined4 *)((long)param_1 + 0x28) = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* Object::_setv(StringName const&, Variant const&) */

undefined8 Object::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_getv(StringName const&, Variant&) const */

undefined8 Object::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Object::_get_property_listv(List *param_1,bool param_2)

{
  return;
}



/* Object::_validate_propertyv(PropertyInfo&) const */

void Object::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Object::_property_can_revertv(StringName const&) const */

undefined8 Object::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Object::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Object::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_notificationv(int, bool) */

void Object::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Object::_set(StringName const&, Variant const&) */

undefined8 Object::_set(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get(StringName const&, Variant&) const */

undefined8 Object::_get(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* Object::get_save_class() const */

void Object::get_save_class(void)

{
  long lVar1;
  long *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*in_RSI + 0x48))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Object::is_class_ptr(void*) const */

undefined8 __thiscall Object::is_class_ptr(Object *this,void *param_1)

{
  return CONCAT71(0x10e8,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* NavigationMeshSourceGeometryData2D::is_class_ptr(void*) const */

uint __thiscall
NavigationMeshSourceGeometryData2D::is_class_ptr
          (NavigationMeshSourceGeometryData2D *this,void *param_1)

{
  return (uint)CONCAT71(0x10e8,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e8,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e8,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e8,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* NavigationMeshSourceGeometryData2D::_validate_propertyv(PropertyInfo&) const */

void NavigationMeshSourceGeometryData2D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* NavigationMeshSourceGeometryData2D::_property_can_revertv(StringName const&) const */

undefined8 NavigationMeshSourceGeometryData2D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationMeshSourceGeometryData2D::_property_get_revertv(StringName const&, Variant&) const */

undefined8
NavigationMeshSourceGeometryData2D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationMeshSourceGeometryData2D::_notificationv(int, bool) */

void NavigationMeshSourceGeometryData2D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* NavigationMesh::is_class_ptr(void*) const */

uint __thiscall NavigationMesh::is_class_ptr(NavigationMesh *this,void *param_1)

{
  return (uint)CONCAT71(0x10e8,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e8,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e8,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e8,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* NavigationMesh::_property_can_revertv(StringName const&) const */

undefined8 NavigationMesh::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationMesh::_property_get_revertv(StringName const&, Variant&) const */

undefined8 NavigationMesh::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationMesh::_notificationv(int, bool) */

void NavigationMesh::_notificationv(int param_1,bool param_2)

{
  return;
}



/* NavigationPolygon::is_class_ptr(void*) const */

uint __thiscall NavigationPolygon::is_class_ptr(NavigationPolygon *this,void *param_1)

{
  return (uint)CONCAT71(0x10e8,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e8,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e8,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e8,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* NavigationPolygon::_getv(StringName const&, Variant&) const */

undefined8 NavigationPolygon::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationPolygon::_setv(StringName const&, Variant const&) */

undefined8 NavigationPolygon::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationPolygon::_property_can_revertv(StringName const&) const */

undefined8 NavigationPolygon::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationPolygon::_property_get_revertv(StringName const&, Variant&) const */

undefined8 NavigationPolygon::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationPolygon::_notificationv(int, bool) */

void NavigationPolygon::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Clipper2Lib::PolyPathD::Count() const */

long __thiscall Clipper2Lib::PolyPathD::Count(PolyPathD *this)

{
  return *(long *)(this + 0x18) - *(long *)(this + 0x10) >> 3;
}



/* LocalVector<NavMeshGeometryParser2D*, unsigned int, false, false>::~LocalVector() */

void __thiscall
LocalVector<NavMeshGeometryParser2D*,unsigned_int,false,false>::~LocalVector
          (LocalVector<NavMeshGeometryParser2D*,unsigned_int,false,false> *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    if (*(int *)this != 0) {
      *(undefined4 *)this = 0;
    }
    Memory::free_static(*(void **)(this + 8),false);
    return;
  }
  return;
}



/* NavigationPolygon::_validate_propertyv(PropertyInfo&) const */

void NavigationPolygon::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_00112008 != Object::_validate_property) {
    NavigationPolygon::_validate_property(param_1);
    return;
  }
  return;
}



/* Object::_initialize_classv() */

void Object::_initialize_classv(void)

{
  Object::initialize_class();
  return;
}



/* NavigationMesh::_validate_propertyv(PropertyInfo&) const */

void NavigationMesh::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_00112010 != Object::_validate_property) {
    NavigationMesh::_validate_property(param_1);
    return;
  }
  return;
}



/* NavigationMesh::_getv(StringName const&, Variant&) const */

undefined8 NavigationMesh::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00112018 != Object::_get) {
    uVar1 = NavigationMesh::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* NavigationMesh::_setv(StringName const&, Variant const&) */

undefined8 NavigationMesh::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00112020 != Object::_set) {
    uVar1 = NavigationMesh::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* NavigationMeshSourceGeometryData2D::_getv(StringName const&, Variant&) const */

undefined8 NavigationMeshSourceGeometryData2D::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00112028 != Object::_get) {
    uVar1 = NavigationMeshSourceGeometryData2D::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* NavigationMeshSourceGeometryData2D::_setv(StringName const&, Variant const&) */

undefined8 NavigationMeshSourceGeometryData2D::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00112030 != Object::_set) {
    uVar1 = NavigationMeshSourceGeometryData2D::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* Clipper2Lib::ClipperD::~ClipperD() */

void __thiscall Clipper2Lib::ClipperD::~ClipperD(ClipperD *this)

{
  *(undefined ***)this = &PTR__ClipperD_0010e6a8;
  Clipper2Lib::ClipperBase::~ClipperBase((ClipperBase *)this);
  return;
}



/* Clipper2Lib::ClipperD::~ClipperD() */

void __thiscall Clipper2Lib::ClipperD::~ClipperD(ClipperD *this)

{
  *(undefined ***)this = &PTR__ClipperD_0010e6a8;
  Clipper2Lib::ClipperBase::~ClipperBase((ClipperBase *)this);
  operator_delete(this,0x110);
  return;
}



/* NavigationMeshSourceGeometryData2D::_get_class_namev() const */

undefined8 * NavigationMeshSourceGeometryData2D::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00105783:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105783;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "NavigationMeshSourceGeometryData2D");
      goto LAB_001057ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "NavigationMeshSourceGeometryData2D");
LAB_001057ee:
  return &_get_class_namev()::_class_name_static;
}



/* HashMap<long, NavMeshGenerator2D::NavMeshGeneratorTask2D*, HashMapHasherDefault,
   HashMapComparatorDefault<long>, DefaultTypedAllocator<HashMapElement<long,
   NavMeshGenerator2D::NavMeshGeneratorTask2D*> > >::~HashMap() */

void __thiscall
HashMap<long,NavMeshGenerator2D::NavMeshGeneratorTask2D*,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,NavMeshGenerator2D::NavMeshGeneratorTask2D*>>>
::~HashMap(HashMap<long,NavMeshGenerator2D::NavMeshGeneratorTask2D*,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,NavMeshGenerator2D::NavMeshGeneratorTask2D*>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* NavigationMesh::_get_class_namev() const */

undefined8 * NavigationMesh::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00105a63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105a63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"NavigationMesh");
      goto LAB_00105ace;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"NavigationMesh");
LAB_00105ace:
  return &_get_class_namev()::_class_name_static;
}



/* NavigationPolygon::_get_class_namev() const */

undefined8 * NavigationPolygon::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00105b53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105b53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"NavigationPolygon");
      goto LAB_00105bbe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"NavigationPolygon");
LAB_00105bbe:
  return &_get_class_namev()::_class_name_static;
}



/* Object::_get_class_namev() const */

undefined8 * Object::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00105c33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105c33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Object");
      goto LAB_00105c9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Object");
LAB_00105c9e:
  return &_get_class_namev()::_class_name_static;
}



/* Resource::get_base_extension() const */

Resource * __thiscall Resource::get_base_extension(Resource *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* String::parse_latin1(char const*) */

void __thiscall String::parse_latin1(String *this,char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (char *)0x0) {
    strlen(param_1);
  }
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Clipper2Lib::ClipperD::ClipperD(int) */

void __thiscall Clipper2Lib::ClipperD::ClipperD(ClipperD *this,int param_1)

{
  int iVar1;
  long lVar2;
  ClipperD *pCVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = _LC11;
  pCVar3 = this;
  for (lVar2 = 0x20; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pCVar3 = 0;
    pCVar3 = pCVar3 + 8;
  }
  *(undefined4 *)(this + 0x10) = 2;
  *(undefined ***)this = &PTR__ClipperD_0010e6a8;
  this[0xd8] = (ClipperD)0x1;
  this[0xe1] = (ClipperD)0x1;
  *(double *)(this + 0x100) = dVar4;
  *(double *)(this + 0x108) = dVar4;
  if (param_1 + 8U < 0x11) {
    dVar4 = (double)param_1;
  }
  else {
    *(undefined4 *)(this + 0xdc) = 1;
    dVar4 = _LC8;
    if (0 < param_1) {
      dVar4 = _LC9;
    }
  }
  dVar4 = pow(_LC12,dVar4);
  iVar1 = ilogb(dVar4);
  dVar4 = pow(_LC13,(double)(iVar1 + 1));
  dVar5 = _LC11 / dVar4;
  *(double *)(this + 0x100) = dVar4;
  *(double *)(this + 0x108) = dVar5;
  return;
}



/* std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> > >::~vector()
    */

void __thiscall
std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::~vector
          (vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1,*(long *)(this + 0x10) - (long)pvVar1);
    return;
  }
  return;
}



/* std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > >::~vector() */

void __thiscall
std::
vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
::~vector(vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
          *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar3 = *(undefined8 **)this;
  if (puVar1 != puVar3) {
    do {
      pvVar2 = (void *)*puVar3;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2,puVar3[2] - (long)pvVar2);
      }
      puVar3 = puVar3 + 3;
    } while (puVar1 != puVar3);
    puVar3 = *(undefined8 **)this;
  }
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar3,*(long *)(this + 0x10) - (long)puVar3);
  return;
}



/* std::vector<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >,
   std::allocator<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >
   > >::reserve(unsigned long) */

void __thiscall
std::
vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
::reserve(vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
          *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (0x555555555555555 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::reserve");
  }
  lVar1 = *(long *)this;
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - lVar1 >> 3) * -0x5555555555555555)) {
    return;
  }
  lVar2 = *(long *)(this + 8);
  puVar8 = (undefined8 *)operator_new(param_1 * 0x18);
  puVar3 = *(undefined8 **)(this + 8);
  puVar4 = *(undefined8 **)this;
  puVar7 = puVar8;
  for (puVar9 = puVar4; puVar3 != puVar9; puVar9 = puVar9 + 3) {
    uVar6 = puVar9[1];
    uVar5 = puVar9[2];
    *puVar7 = *puVar9;
    puVar7[1] = uVar6;
    puVar7[2] = uVar5;
    puVar7 = puVar7 + 3;
  }
  if (puVar4 != (undefined8 *)0x0) {
    operator_delete(puVar4,*(long *)(this + 0x10) - (long)puVar4);
  }
  *(undefined8 **)this = puVar8;
  *(long *)(this + 8) = (lVar2 - lVar1) + (long)puVar8;
  *(undefined8 **)(this + 0x10) = puVar8 + param_1 * 3;
  return;
}



/* std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   >::reserve(unsigned long) */

void __thiscall
std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::reserve
          (vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *this,
          ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (param_1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::reserve");
  }
  lVar1 = *(long *)this;
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - lVar1 >> 4)) {
    return;
  }
  lVar2 = *(long *)(this + 8);
  puVar7 = (undefined8 *)operator_new(param_1 * 0x10);
  puVar3 = *(undefined8 **)(this + 8);
  puVar4 = *(undefined8 **)this;
  puVar6 = puVar7;
  for (puVar8 = puVar4; puVar3 != puVar8; puVar8 = puVar8 + 2) {
    uVar5 = puVar8[1];
    *puVar6 = *puVar8;
    puVar6[1] = uVar5;
    puVar6 = puVar6 + 2;
  }
  if (puVar4 != (undefined8 *)0x0) {
    operator_delete(puVar4,*(long *)(this + 0x10) - (long)puVar4);
  }
  *(undefined8 **)this = puVar7;
  *(long *)(this + 8) = (lVar2 - lVar1) + (long)puVar7;
  *(undefined8 **)(this + 0x10) = puVar7 + param_1 * 2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<Ref<NavigationPolygon>, HashMapHasherDefault,
   HashMapComparatorDefault<Ref<NavigationPolygon> > >::insert(Ref<NavigationPolygon> const&) */

Ref * HashSet<Ref<NavigationPolygon>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationPolygon>>>
      ::insert(Ref *param_1)

{
  Ref<NavigationPolygon> *this;
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  char cVar23;
  uint uVar24;
  ulong uVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  int iVar30;
  undefined8 *in_RDX;
  Ref *pRVar31;
  ulong uVar32;
  HashSet<Ref<NavigationPolygon>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationPolygon>>>
  *in_RSI;
  uint uVar33;
  ulong uVar34;
  undefined4 uVar35;
  ulong uVar36;
  uint uVar37;
  uint *puVar38;
  long in_FS_OFFSET;
  uint local_98;
  long local_78;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar24 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
  if (*(long *)in_RSI == 0) {
    uVar25 = (ulong)uVar24 * 4;
    uVar26 = Memory::alloc_static(uVar25,false);
    *(undefined8 *)(in_RSI + 0x18) = uVar26;
    uVar26 = Memory::alloc_static((ulong)uVar24 * 8,false);
    *(undefined8 *)in_RSI = uVar26;
    uVar26 = Memory::alloc_static(uVar25,false);
    *(undefined8 *)(in_RSI + 0x10) = uVar26;
    uVar26 = Memory::alloc_static(uVar25,false);
    *(undefined8 *)(in_RSI + 8) = uVar26;
    if (uVar24 != 0) {
      memset(*(void **)(in_RSI + 0x18),0,uVar25);
    }
  }
  pRVar31 = (Ref *)*in_RDX;
  local_44 = 0;
  cVar23 = _lookup_pos(in_RSI,pRVar31,&local_44);
  if (cVar23 == '\0') {
    uVar1 = *(uint *)(in_RSI + 0x24);
    if ((float)uVar24 * __LC26 < (float)(uVar1 + 1)) {
      if (*(int *)(in_RSI + 0x20) == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        iVar30 = *(int *)(in_RSI + 0x24);
        uVar24 = 0xffffffff;
        goto LAB_00106a5b;
      }
      uVar24 = *(int *)(in_RSI + 0x20) + 1;
      uVar25 = (ulong)uVar24;
      if (uVar24 < 2) {
        uVar25 = 2;
      }
      uVar24 = *(uint *)(hash_table_size_primes + uVar25 * 4);
      *(int *)(in_RSI + 0x20) = (int)uVar25;
      pvVar3 = *(void **)(in_RSI + 0x18);
      uVar25 = (ulong)uVar24 * 4;
      pvVar4 = *(void **)(in_RSI + 0x10);
      uVar26 = Memory::alloc_static(uVar25,false);
      *(undefined8 *)(in_RSI + 0x18) = uVar26;
      uVar26 = Memory::realloc_static(*(void **)in_RSI,(ulong)uVar24 * 8,false);
      *(undefined8 *)in_RSI = uVar26;
      uVar26 = Memory::alloc_static(uVar25,false);
      *(undefined8 *)(in_RSI + 0x10) = uVar26;
      lVar27 = Memory::realloc_static(*(void **)(in_RSI + 8),uVar25,false);
      *(long *)(in_RSI + 8) = lVar27;
      if (uVar24 != 0) {
        memset(*(void **)(in_RSI + 0x18),0,uVar25);
      }
      if (*(int *)(in_RSI + 0x24) != 0) {
        uVar25 = 0;
        lVar5 = *(long *)(in_RSI + 0x18);
        lVar6 = *(long *)(in_RSI + 0x10);
        do {
          uVar36 = uVar25 & 0xffffffff;
          uVar35 = (undefined4)uVar25;
          uVar37 = 0;
          uVar24 = *(uint *)((long)pvVar3 + (ulong)*(uint *)((long)pvVar4 + uVar25 * 4) * 4);
          uVar32 = (ulong)uVar24;
          uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
          uVar34 = CONCAT44(0,uVar1);
          lVar28 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x20) * 8);
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar32 * lVar28;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar34;
          lVar29 = SUB168(auVar7 * auVar15,8) * 4;
          iVar30 = SUB164(auVar7 * auVar15,8);
          puVar38 = (uint *)(lVar5 + lVar29);
          uVar2 = *puVar38;
          if (uVar2 == 0) {
            lVar28 = uVar25 * 4;
          }
          else {
            do {
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)uVar2 * lVar28;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar34;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)((uVar1 + iVar30) - SUB164(auVar8 * auVar16,8)) * lVar28;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar34;
              local_98 = SUB164(auVar9 * auVar17,8);
              if (local_98 < uVar37) {
                *(int *)(lVar6 + uVar36 * 4) = iVar30;
                uVar24 = *puVar38;
                *puVar38 = (uint)uVar32;
                uVar2 = *(uint *)(lVar29 + lVar27);
                uVar32 = (ulong)uVar24;
                *(uint *)(lVar29 + lVar27) = (uint)uVar36;
                uVar36 = (ulong)uVar2;
                uVar37 = local_98;
              }
              uVar35 = (undefined4)uVar36;
              uVar24 = (uint)uVar32;
              uVar37 = uVar37 + 1;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = (ulong)(iVar30 + 1) * lVar28;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uVar34;
              lVar29 = SUB168(auVar10 * auVar18,8) * 4;
              iVar30 = SUB164(auVar10 * auVar18,8);
              puVar38 = (uint *)(lVar5 + lVar29);
              uVar2 = *puVar38;
            } while (uVar2 != 0);
            lVar28 = uVar36 << 2;
          }
          *puVar38 = uVar24;
          uVar25 = uVar25 + 1;
          *(int *)(lVar6 + lVar28) = iVar30;
          *(undefined4 *)(lVar27 + lVar29) = uVar35;
        } while ((uint)uVar25 < *(uint *)(in_RSI + 0x24));
      }
      Memory::free_static(pvVar3,false);
      Memory::free_static(pvVar4,false);
      pRVar31 = (Ref *)*in_RDX;
      uVar1 = *(uint *)(in_RSI + 0x24);
    }
    uVar25 = (long)pRVar31 * 0x3ffff - 1;
    uVar25 = (uVar25 ^ uVar25 >> 0x1f) * 0x15;
    uVar25 = (uVar25 ^ uVar25 >> 0xb) * 0x41;
    uVar25 = uVar25 >> 0x16 ^ uVar25;
    uVar32 = uVar25 & 0xffffffff;
    if ((int)uVar25 == 0) {
      uVar32 = 1;
    }
    this = (Ref<NavigationPolygon> *)(*(long *)in_RSI + (ulong)uVar1 * 8);
    *(undefined8 *)this = 0;
    Ref<NavigationPolygon>::operator=(this,(Ref *)*in_RDX);
    uVar24 = *(uint *)(in_RSI + 0x24);
    uVar37 = (uint)uVar32;
    lVar5 = *(long *)(in_RSI + 0x18);
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
    uVar25 = CONCAT44(0,uVar1);
    lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x20) * 8);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar32 * lVar6;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar25;
    lVar27 = SUB168(auVar11 * auVar19,8) * 4;
    iVar30 = SUB164(auVar11 * auVar19,8);
    puVar38 = (uint *)(lVar5 + lVar27);
    uVar2 = *puVar38;
    if (uVar2 == 0) {
      local_78 = *(long *)(in_RSI + 0x10);
      lVar29 = *(long *)(in_RSI + 8);
    }
    else {
      uVar33 = 0;
      local_78 = *(long *)(in_RSI + 0x10);
      lVar29 = *(long *)(in_RSI + 8);
      do {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)uVar2 * lVar6;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar25;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)((uVar1 + iVar30) - SUB164(auVar12 * auVar20,8)) * lVar6;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar25;
        local_98 = SUB164(auVar13 * auVar21,8);
        if (local_98 < uVar33) {
          *(int *)(local_78 + (ulong)uVar24 * 4) = iVar30;
          uVar2 = *puVar38;
          *puVar38 = (uint)uVar32;
          uVar37 = *(uint *)(lVar27 + lVar29);
          uVar32 = (ulong)uVar2;
          *(uint *)(lVar27 + lVar29) = uVar24;
          uVar24 = uVar37;
          uVar33 = local_98;
        }
        uVar37 = (uint)uVar32;
        uVar33 = uVar33 + 1;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)(iVar30 + 1) * lVar6;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar25;
        lVar27 = SUB168(auVar14 * auVar22,8) * 4;
        iVar30 = SUB164(auVar14 * auVar22,8);
        puVar38 = (uint *)(lVar5 + lVar27);
        uVar2 = *puVar38;
      } while (uVar2 != 0);
    }
    *puVar38 = uVar37;
    *(int *)(local_78 + (ulong)uVar24 * 4) = iVar30;
    *(uint *)(lVar29 + lVar27) = uVar24;
    uVar24 = *(uint *)(in_RSI + 0x24);
    iVar30 = uVar24 + 1;
    *(int *)(in_RSI + 0x24) = iVar30;
  }
  else {
    iVar30 = *(int *)(in_RSI + 0x24);
    uVar24 = local_44;
  }
LAB_00106a5b:
  *(undefined8 *)param_1 = *(undefined8 *)in_RSI;
  *(int *)(param_1 + 8) = iVar30;
  *(uint *)(param_1 + 0xc) = uVar24;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<long, NavMeshGenerator2D::NavMeshGeneratorTask2D*, HashMapHasherDefault,
   HashMapComparatorDefault<long>, DefaultTypedAllocator<HashMapElement<long,
   NavMeshGenerator2D::NavMeshGeneratorTask2D*> > >::insert(long const&,
   NavMeshGenerator2D::NavMeshGeneratorTask2D* const&, bool) */

void HashMap<long,NavMeshGenerator2D::NavMeshGeneratorTask2D*,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,NavMeshGenerator2D::NavMeshGeneratorTask2D*>>>
     ::insert(long *param_1,NavMeshGeneratorTask2D **param_2,bool param_3)

{
  NavMeshGeneratorTask2D *pNVar1;
  NavMeshGeneratorTask2D *pNVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
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
  undefined1 auVar27 [16];
  NavMeshGeneratorTask2D *pNVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  NavMeshGeneratorTask2D *pNVar32;
  NavMeshGeneratorTask2D *pNVar33;
  undefined8 *in_RCX;
  int iVar34;
  undefined7 in_register_00000011;
  long *plVar35;
  long lVar36;
  long lVar37;
  uint uVar38;
  long lVar39;
  undefined8 uVar40;
  ulong uVar41;
  uint uVar42;
  char in_R8B;
  uint uVar43;
  uint uVar44;
  ulong uVar45;
  NavMeshGeneratorTask2D *pNVar46;
  NavMeshGeneratorTask2D *local_80;
  
  plVar35 = (long *)CONCAT71(in_register_00000011,param_3);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  local_80 = param_2[1];
  if (local_80 == (NavMeshGeneratorTask2D *)0x0) {
    uVar45 = (ulong)uVar38;
    uVar31 = uVar45 * 4;
    uVar41 = uVar45 * 8;
    pNVar33 = (NavMeshGeneratorTask2D *)Memory::alloc_static(uVar31,false);
    param_2[2] = pNVar33;
    local_80 = (NavMeshGeneratorTask2D *)Memory::alloc_static(uVar41,false);
    param_2[1] = local_80;
    if (uVar38 != 0) {
      pNVar33 = param_2[2];
      if ((pNVar33 < local_80 + uVar41) && (local_80 < pNVar33 + uVar31)) {
        uVar31 = 0;
        do {
          *(undefined4 *)(pNVar33 + uVar31 * 4) = 0;
          *(undefined8 *)(local_80 + uVar31 * 8) = 0;
          uVar31 = uVar31 + 1;
        } while (uVar45 != uVar31);
        goto LAB_00106c6b;
      }
      memset(pNVar33,0,uVar31);
      memset(local_80,0,uVar41);
      iVar34 = *(int *)((long)param_2 + 0x2c);
      lVar39 = *plVar35;
      goto LAB_00106c77;
    }
    iVar34 = *(int *)((long)param_2 + 0x2c);
    lVar39 = *plVar35;
    if (local_80 != (NavMeshGeneratorTask2D *)0x0) goto LAB_00106c77;
  }
  else {
LAB_00106c6b:
    iVar34 = *(int *)((long)param_2 + 0x2c);
    lVar39 = *plVar35;
LAB_00106c77:
    if (iVar34 != 0) {
      uVar41 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4));
      lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
      uVar31 = lVar39 * 0x3ffff - 1;
      uVar31 = (uVar31 ^ uVar31 >> 0x1f) * 0x15;
      uVar31 = (uVar31 ^ uVar31 >> 0xb) * 0x41;
      uVar31 = uVar31 >> 0x16 ^ uVar31;
      uVar45 = uVar31 & 0xffffffff;
      if ((int)uVar31 == 0) {
        uVar45 = 1;
      }
      uVar44 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar45 * lVar37;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar41;
      lVar36 = SUB168(auVar4 * auVar16,8);
      uVar42 = *(uint *)(param_2[2] + lVar36 * 4);
      uVar30 = SUB164(auVar4 * auVar16,8);
      if (uVar42 != 0) {
        do {
          if (((uint)uVar45 == uVar42) &&
             (*(long *)(*(long *)(local_80 + lVar36 * 8) + 0x10) == lVar39)) {
            pNVar33 = *(NavMeshGeneratorTask2D **)(local_80 + (ulong)uVar30 * 8);
            *(undefined8 *)(pNVar33 + 0x18) = *in_RCX;
            goto LAB_00107111;
          }
          uVar44 = uVar44 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar30 + 1) * lVar37;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar41;
          lVar36 = SUB168(auVar5 * auVar17,8);
          uVar42 = *(uint *)(param_2[2] + lVar36 * 4);
          uVar30 = SUB164(auVar5 * auVar17,8);
        } while ((uVar42 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar42 * lVar37, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar41, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(param_2 + 5) * 4) + uVar30) -
                                      SUB164(auVar6 * auVar18,8)) * lVar37, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar41, uVar44 <= SUB164(auVar7 * auVar19,8)));
      }
    }
  }
  if ((float)uVar38 * __LC26 < (float)(iVar34 + 1)) {
    uVar38 = *(uint *)(param_2 + 5);
    if (uVar38 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      pNVar33 = (NavMeshGeneratorTask2D *)0x0;
      goto LAB_00107111;
    }
    uVar31 = (ulong)(uVar38 + 1);
    *(undefined4 *)((long)param_2 + 0x2c) = 0;
    uVar42 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar31 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar31 * 4);
    uVar45 = (ulong)uVar38;
    *(int *)(param_2 + 5) = (int)uVar31;
    pNVar33 = param_2[2];
    uVar31 = uVar45 * 4;
    uVar41 = uVar45 * 8;
    pNVar32 = (NavMeshGeneratorTask2D *)Memory::alloc_static(uVar31,false);
    param_2[2] = pNVar32;
    pNVar32 = (NavMeshGeneratorTask2D *)Memory::alloc_static(uVar41,false);
    param_2[1] = pNVar32;
    if (uVar38 != 0) {
      pNVar1 = param_2[2];
      if ((pNVar1 < pNVar32 + uVar41) && (pNVar32 < pNVar1 + uVar31)) {
        uVar31 = 0;
        do {
          *(undefined4 *)(pNVar1 + uVar31 * 4) = 0;
          *(undefined8 *)(pNVar32 + uVar31 * 8) = 0;
          uVar31 = uVar31 + 1;
        } while (uVar45 != uVar31);
      }
      else {
        memset(pNVar1,0,uVar31);
        memset(pNVar32,0,uVar41);
      }
    }
    if (uVar42 != 0) {
      uVar31 = 0;
      do {
        uVar38 = *(uint *)(pNVar33 + uVar31 * 4);
        if (uVar38 != 0) {
          pNVar2 = param_2[2];
          uVar43 = 0;
          uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
          uVar41 = CONCAT44(0,uVar30);
          lVar39 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar38 * lVar39;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar41;
          lVar37 = SUB168(auVar8 * auVar20,8);
          pNVar1 = pNVar2 + lVar37 * 4;
          iVar34 = SUB164(auVar8 * auVar20,8);
          uVar44 = *(uint *)pNVar1;
          uVar3 = *(undefined8 *)(local_80 + uVar31 * 8);
          while (uVar44 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar44 * lVar39;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar41;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar30 + iVar34) - SUB164(auVar9 * auVar21,8)) * lVar39;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar41;
            uVar29 = SUB164(auVar10 * auVar22,8);
            uVar40 = uVar3;
            if (uVar29 < uVar43) {
              *(uint *)pNVar1 = uVar38;
              uVar40 = *(undefined8 *)(pNVar32 + lVar37 * 8);
              *(undefined8 *)(pNVar32 + lVar37 * 8) = uVar3;
              uVar38 = uVar44;
              uVar43 = uVar29;
            }
            uVar43 = uVar43 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar34 + 1) * lVar39;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar41;
            lVar37 = SUB168(auVar11 * auVar23,8);
            pNVar1 = pNVar2 + lVar37 * 4;
            iVar34 = SUB164(auVar11 * auVar23,8);
            uVar3 = uVar40;
            uVar44 = *(uint *)pNVar1;
          }
          *(undefined8 *)(pNVar32 + lVar37 * 8) = uVar3;
          *(uint *)pNVar1 = uVar38;
          *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
        }
        uVar31 = uVar31 + 1;
      } while (uVar31 != uVar42);
      Memory::free_static(local_80,false);
      Memory::free_static(pNVar33,false);
    }
  }
  lVar39 = *plVar35;
  uVar3 = *in_RCX;
  pNVar33 = (NavMeshGeneratorTask2D *)operator_new(0x20,"");
  *(long *)(pNVar33 + 0x10) = lVar39;
  *(undefined8 *)(pNVar33 + 0x18) = uVar3;
  *(undefined1 (*) [16])pNVar33 = (undefined1  [16])0x0;
  pNVar32 = param_2[4];
  if (pNVar32 == (NavMeshGeneratorTask2D *)0x0) {
    param_2[3] = pNVar33;
    param_2[4] = pNVar33;
  }
  else if (in_R8B == '\0') {
    *(NavMeshGeneratorTask2D **)pNVar32 = pNVar33;
    *(NavMeshGeneratorTask2D **)(pNVar33 + 8) = pNVar32;
    param_2[4] = pNVar33;
  }
  else {
    pNVar32 = param_2[3];
    *(NavMeshGeneratorTask2D **)(pNVar32 + 8) = pNVar33;
    *(NavMeshGeneratorTask2D **)pNVar33 = pNVar32;
    param_2[3] = pNVar33;
  }
  pNVar32 = param_2[2];
  uVar31 = *plVar35 * 0x3ffff - 1;
  uVar31 = (uVar31 ^ uVar31 >> 0x1f) * 0x15;
  uVar31 = (uVar31 ^ uVar31 >> 0xb) * 0x41;
  uVar31 = uVar31 >> 0x16 ^ uVar31;
  uVar41 = uVar31 & 0xffffffff;
  if ((int)uVar31 == 0) {
    uVar41 = 1;
  }
  uVar44 = 0;
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  uVar31 = CONCAT44(0,uVar38);
  uVar30 = (uint)uVar41;
  lVar39 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar41 * lVar39;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar31;
  lVar37 = SUB168(auVar12 * auVar24,8);
  pNVar2 = param_2[1];
  pNVar1 = pNVar32 + lVar37 * 4;
  iVar34 = SUB164(auVar12 * auVar24,8);
  uVar42 = *(uint *)pNVar1;
  pNVar28 = pNVar33;
  while (uVar42 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar42 * lVar39;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar31;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar38 + iVar34) - SUB164(auVar13 * auVar25,8)) * lVar39;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar31;
    uVar30 = SUB164(auVar14 * auVar26,8);
    pNVar46 = pNVar28;
    if (uVar30 < uVar44) {
      *(uint *)pNVar1 = (uint)uVar41;
      uVar41 = (ulong)uVar42;
      pNVar1 = pNVar2 + lVar37 * 8;
      pNVar46 = *(NavMeshGeneratorTask2D **)pNVar1;
      *(NavMeshGeneratorTask2D **)pNVar1 = pNVar28;
      uVar44 = uVar30;
    }
    uVar30 = (uint)uVar41;
    uVar44 = uVar44 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar34 + 1) * lVar39;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar31;
    lVar37 = SUB168(auVar15 * auVar27,8);
    pNVar1 = pNVar32 + lVar37 * 4;
    iVar34 = SUB164(auVar15 * auVar27,8);
    pNVar28 = pNVar46;
    uVar42 = *(uint *)pNVar1;
  }
  *(NavMeshGeneratorTask2D **)(pNVar2 + lVar37 * 8) = pNVar28;
  *(uint *)pNVar1 = uVar30;
  *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
LAB_00107111:
  *param_1 = (long)pNVar33;
  return;
}



/* std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > >::reserve(unsigned long) */

void __thiscall
std::
vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
::reserve(vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
          *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (0x555555555555555 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::reserve");
  }
  lVar1 = *(long *)this;
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - lVar1 >> 3) * -0x5555555555555555)) {
    return;
  }
  lVar2 = *(long *)(this + 8);
  puVar8 = (undefined8 *)operator_new(param_1 * 0x18);
  puVar3 = *(undefined8 **)(this + 8);
  puVar4 = *(undefined8 **)this;
  puVar7 = puVar8;
  for (puVar9 = puVar4; puVar3 != puVar9; puVar9 = puVar9 + 3) {
    uVar6 = puVar9[1];
    uVar5 = puVar9[2];
    *puVar7 = *puVar9;
    puVar7[1] = uVar6;
    puVar7[2] = uVar5;
    puVar7 = puVar7 + 3;
  }
  if (puVar4 != (undefined8 *)0x0) {
    operator_delete(puVar4,*(long *)(this + 0x10) - (long)puVar4);
  }
  *(undefined8 **)this = puVar8;
  *(long *)(this + 8) = (lVar2 - lVar1) + (long)puVar8;
  *(undefined8 **)(this + 0x10) = puVar8 + param_1 * 3;
  return;
}



/* std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >::reserve(unsigned long) */

void __thiscall
std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::reserve
          (vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *this,
          ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (param_1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::reserve");
  }
  lVar1 = *(long *)this;
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - lVar1 >> 4)) {
    return;
  }
  lVar2 = *(long *)(this + 8);
  puVar7 = (undefined8 *)operator_new(param_1 * 0x10);
  puVar3 = *(undefined8 **)(this + 8);
  puVar4 = *(undefined8 **)this;
  puVar6 = puVar7;
  for (puVar8 = puVar4; puVar3 != puVar8; puVar8 = puVar8 + 2) {
    uVar5 = puVar8[1];
    *puVar6 = *puVar8;
    puVar6[1] = uVar5;
    puVar6 = puVar6 + 2;
  }
  if (puVar4 != (undefined8 *)0x0) {
    operator_delete(puVar4,*(long *)(this + 0x10) - (long)puVar4);
  }
  *(undefined8 **)this = puVar7;
  *(long *)(this + 8) = (lVar2 - lVar1) + (long)puVar7;
  *(undefined8 **)(this + 0x10) = puVar7 + param_1 * 2;
  return;
}



/* List<TPPLPoly, DefaultAllocator>::~List() */

void __thiscall List<TPPLPoly,DefaultAllocator>::~List(List<TPPLPoly,DefaultAllocator> *this)

{
  TPPLPoly *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (TPPLPoly *)*plVar3;
    if (this_00 == (TPPLPoly *)0x0) {
      if ((int)plVar3[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x28) == plVar3) {
      lVar2 = *(long *)(this_00 + 0x18);
      lVar1 = *(long *)(this_00 + 0x20);
      *plVar3 = lVar2;
      if (this_00 == (TPPLPoly *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x18) = lVar2;
        lVar2 = *(long *)(this_00 + 0x18);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x20) = lVar1;
      }
      TPPLPoly::~TPPLPoly(this_00);
      Memory::free_static(this_00,false);
      *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar3 = *(long **)this;
  } while ((int)plVar3[2] != 0);
  Memory::free_static(plVar3,false);
  return;
}



/* CowData<char32_t>::_unref() */

void __thiscall CowData<char32_t>::_unref(CowData<char32_t> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* NavigationMeshSourceGeometryData2D::_initialize_classv() */

void NavigationMeshSourceGeometryData2D::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Object");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"RefCounted");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        if ((code *)PTR__bind_methods_00112040 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"RefCounted");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Resource");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      Resource::_bind_methods();
      Resource::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"Resource");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"NavigationMeshSourceGeometryData2D");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if ((code *)PTR__bind_methods_00112038 != Resource::_bind_methods) {
      NavigationMeshSourceGeometryData2D::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* NavigationMesh::get_class() const */

void NavigationMesh::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"NavigationMesh");
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
      }
      else {
        strlen(__s);
        String::parse_latin1((StrRange *)in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData2D::get_class() const */

void NavigationMeshSourceGeometryData2D::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"NavigationMeshSourceGeometryData2D");
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
      }
      else {
        strlen(__s);
        String::parse_latin1((StrRange *)in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Object::get_class() const */

void Object::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"Object");
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
      }
      else {
        strlen(__s);
        String::parse_latin1((StrRange *)in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPolygon::get_class() const */

void NavigationPolygon::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"NavigationPolygon");
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
      }
      else {
        strlen(__s);
        String::parse_latin1((StrRange *)in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Object::is_class(String const&) const */

ulong __thiscall Object::is_class(Object *this,String *param_1)

{
  long lVar1;
  char *__s;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar1 = *(long *)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (lVar1 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = String::operator==(param_1,"Object");
        return uVar4;
      }
LAB_00107d47:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar2 = *(long *)(lVar1 + 0x20);
    if (lVar2 == 0) {
      local_50 = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      local_50 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_50);
      }
    }
    uVar3 = String::operator==(param_1,(String *)&local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if ((char)uVar3 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)uVar3;
      }
      goto LAB_00107d47;
    }
    lVar1 = *(long *)(lVar1 + 8);
  } while( true );
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

{
  long lVar1;
  char *__s;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar2 = *(long *)(lVar1 + 0x20);
    if (lVar2 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar2 + 0x10));
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar3 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar3 != '\0') goto LAB_00107e23;
  }
  cVar3 = String::operator==(param_1,"Resource");
  if (cVar3 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar2 = *(long *)(lVar1 + 0x20);
      if (lVar2 == 0) {
        local_58 = (char *)0x0;
      }
      else {
        local_58 = (char *)0x0;
        if (*(char **)(lVar2 + 8) == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar2 + 0x10));
        }
        else {
          String::parse_latin1((String *)&local_58,*(char **)(lVar2 + 8));
        }
      }
      cVar3 = String::operator==(param_1,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if (cVar3 != '\0') goto LAB_00107e23;
    }
    cVar3 = String::operator==(param_1,"RefCounted");
    if (cVar3 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = Object::is_class((Object *)this,param_1);
        return uVar4;
      }
      goto LAB_00107f16;
    }
  }
LAB_00107e23:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00107f16:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPolygon::is_class(String const&) const */

undefined8 __thiscall NavigationPolygon::is_class(NavigationPolygon *this,String *param_1)

{
  long lVar1;
  char *__s;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar2 = *(long *)(lVar1 + 0x20);
    if (lVar2 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar2 + 0x10));
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar3 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar3 != '\0') goto LAB_00107ff3;
  }
  cVar3 = String::operator==(param_1,"NavigationPolygon");
  if (cVar3 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = Resource::is_class((Resource *)this,param_1);
      return uVar4;
    }
  }
  else {
LAB_00107ff3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMesh::is_class(String const&) const */

undefined8 __thiscall NavigationMesh::is_class(NavigationMesh *this,String *param_1)

{
  long lVar1;
  char *__s;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar2 = *(long *)(lVar1 + 0x20);
    if (lVar2 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar3 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar3 != '\0') goto LAB_0010812b;
  }
  cVar3 = String::operator==(param_1,"NavigationMesh");
  if (cVar3 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = Resource::is_class((Resource *)this,param_1);
      return uVar4;
    }
  }
  else {
LAB_0010812b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData2D::is_class(String const&) const */

undefined8 __thiscall
NavigationMeshSourceGeometryData2D::is_class
          (NavigationMeshSourceGeometryData2D *this,String *param_1)

{
  long lVar1;
  char *__s;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar2 = *(long *)(lVar1 + 0x20);
    if (lVar2 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar3 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar3 != '\0') goto LAB_0010825b;
  }
  cVar3 = String::operator==(param_1,"NavigationMeshSourceGeometryData2D");
  if (cVar3 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = Resource::is_class((Resource *)this,param_1);
      return uVar4;
    }
  }
  else {
LAB_0010825b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMesh::_initialize_classv() */

void NavigationMesh::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Object");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"RefCounted");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        if ((code *)PTR__bind_methods_00112040 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"RefCounted");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Resource");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      Resource::_bind_methods();
      Resource::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"Resource");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"NavigationMesh");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if ((code *)PTR__bind_methods_00112048 != Resource::_bind_methods) {
      NavigationMesh::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPolygon::_initialize_classv() */

void NavigationPolygon::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Object");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"RefCounted");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        if ((code *)PTR__bind_methods_00112040 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"RefCounted");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Resource");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      Resource::_bind_methods();
      Resource::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"Resource");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"NavigationPolygon");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if ((code *)PTR__bind_methods_00112050 != Resource::_bind_methods) {
      NavigationPolygon::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "RefCounted";
  local_88 = 0;
  local_90 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Resource",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPolygon::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
NavigationPolygon::_get_property_listv(NavigationPolygon *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "NavigationPolygon";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "NavigationPolygon";
  local_98 = 0;
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"NavigationPolygon",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMesh::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall NavigationMesh::_get_property_listv(NavigationMesh *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "NavigationMesh";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "NavigationMesh";
  local_98 = 0;
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"NavigationMesh",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
NavigationMeshSourceGeometryData2D::_get_property_listv
          (NavigationMeshSourceGeometryData2D *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "NavigationMeshSourceGeometryData2D";
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "NavigationMeshSourceGeometryData2D";
  local_98 = 0;
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"NavigationMeshSourceGeometryData2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::vector<std::unique_ptr<Clipper2Lib::PolyPathD, std::default_delete<Clipper2Lib::PolyPathD>
   >, std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,
   std::default_delete<Clipper2Lib::PolyPathD> > > >::_M_default_append(unsigned long) */

void __thiscall
std::
vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>
::_M_default_append(vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>
                    *this,ulong param_1)

{
  ulong uVar1;
  undefined8 *__s;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  if (param_1 == 0) {
    return;
  }
  __s = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  if ((ulong)(*(long *)(this + 0x10) - (long)__s >> 3) < param_1) {
    uVar4 = (long)__s - (long)puVar2 >> 3;
    if (0xfffffffffffffff - uVar4 < param_1) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_default_append");
    }
    uVar1 = param_1 + uVar4;
    uVar7 = 0xfffffffffffffff;
    if (uVar1 < 0x1000000000000000) {
      uVar7 = uVar1;
    }
    if ((param_1 <= uVar4) && (uVar7 = uVar4 * 2, 0xfffffffffffffff < uVar7)) {
      uVar7 = 0xfffffffffffffff;
    }
    puVar5 = (undefined8 *)operator_new(uVar7 * 8);
    memset((void *)((long)puVar5 + ((long)__s - (long)puVar2)),0,param_1 * 8);
    puVar3 = puVar5;
    for (puVar6 = puVar2; puVar6 != __s; puVar6 = puVar6 + 1) {
      *puVar3 = *puVar6;
      puVar3 = puVar3 + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
    }
    *(undefined8 **)this = puVar5;
    *(undefined8 **)(this + 8) = puVar5 + uVar1;
    *(undefined8 **)(this + 0x10) = puVar5 + uVar7;
    return;
  }
  memset(__s,0,param_1 * 8);
  *(undefined8 **)(this + 8) = __s + param_1;
  return;
}



/* Clipper2Lib::PolyPathD::~PolyPathD() */

void __thiscall Clipper2Lib::PolyPathD::~PolyPathD(PolyPathD *this)

{
  undefined8 *puVar1;
  PolyPathD *pPVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = *(undefined8 **)(this + 0x18);
  puVar5 = *(undefined8 **)(this + 0x10);
  *(undefined ***)this = &PTR__PolyPathD_0010e670;
  puVar4 = puVar5;
  if (puVar1 != puVar5) {
    do {
      while (pPVar2 = (PolyPathD *)*puVar4, pPVar2 == (PolyPathD *)0x0) {
LAB_00109712:
        puVar4 = puVar4 + 1;
        if (puVar1 == puVar4) goto LAB_00109740;
      }
      if (*(code **)(*(long *)pPVar2 + 8) == ~PolyPathD) {
        ~PolyPathD(pPVar2);
        operator_delete(pPVar2,0x48);
        goto LAB_00109712;
      }
      (**(code **)(*(long *)pPVar2 + 8))();
      puVar4 = puVar4 + 1;
    } while (puVar1 != puVar4);
LAB_00109740:
    *(undefined8 **)(this + 0x18) = puVar5;
  }
  pvVar3 = *(void **)(this + 0x30);
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3,*(long *)(this + 0x40) - (long)pvVar3);
  }
  puVar1 = *(undefined8 **)(this + 0x18);
  puVar5 = *(undefined8 **)(this + 0x10);
  if (puVar1 != puVar5) {
    do {
      while (pPVar2 = (PolyPathD *)*puVar5, pPVar2 == (PolyPathD *)0x0) {
LAB_0010978a:
        puVar5 = puVar5 + 1;
        if (puVar1 == puVar5) goto LAB_001097c0;
      }
      if (*(code **)(*(long *)pPVar2 + 8) == ~PolyPathD) {
        ~PolyPathD(pPVar2);
        operator_delete(pPVar2,0x48);
        goto LAB_0010978a;
      }
      (**(code **)(*(long *)pPVar2 + 8))();
      puVar5 = puVar5 + 1;
    } while (puVar1 != puVar5);
LAB_001097c0:
    puVar5 = *(undefined8 **)(this + 0x10);
  }
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar5,*(long *)(this + 0x20) - (long)puVar5);
  return;
}



/* std::vector<std::unique_ptr<Clipper2Lib::PolyPathD, std::default_delete<Clipper2Lib::PolyPathD>
   >, std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,
   std::default_delete<Clipper2Lib::PolyPathD> > > >::resize(unsigned long) */

void __thiscall
std::
vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>
::resize(vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>
         *this,ulong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  PolyPathD *pPVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar2 = *(undefined8 **)(this + 8);
  uVar7 = (long)puVar2 - *(long *)this >> 3;
  if (uVar7 < param_1) {
    _M_default_append(this,param_1 - uVar7);
    return;
  }
  if ((param_1 < uVar7) &&
     (puVar1 = (undefined8 *)(*(long *)this + param_1 * 8), puVar8 = puVar1, puVar1 != puVar2)) {
    do {
      plVar3 = (long *)*puVar8;
      if (plVar3 != (long *)0x0) {
        if (*(code **)(*plVar3 + 8) == Clipper2Lib::PolyPathD::~PolyPathD) {
          puVar4 = (undefined8 *)plVar3[3];
          *plVar3 = (long)&PTR__PolyPathD_0010e670;
          puVar10 = (undefined8 *)plVar3[2];
          puVar9 = puVar10;
          if (puVar4 != puVar10) {
            do {
              while (pPVar5 = (PolyPathD *)*puVar9, pPVar5 == (PolyPathD *)0x0) {
LAB_001098b2:
                puVar9 = puVar9 + 1;
                if (puVar4 == puVar9) goto LAB_001098e0;
              }
              if (*(code **)(*(long *)pPVar5 + 8) == Clipper2Lib::PolyPathD::~PolyPathD) {
                Clipper2Lib::PolyPathD::~PolyPathD(pPVar5);
                operator_delete(pPVar5,0x48);
                goto LAB_001098b2;
              }
              (**(code **)(*(long *)pPVar5 + 8))();
              puVar9 = puVar9 + 1;
            } while (puVar4 != puVar9);
LAB_001098e0:
            plVar3[3] = (long)puVar10;
          }
          pvVar6 = (void *)plVar3[6];
          if (pvVar6 != (void *)0x0) {
            operator_delete(pvVar6,plVar3[8] - (long)pvVar6);
          }
          puVar4 = (undefined8 *)plVar3[3];
          puVar10 = (undefined8 *)plVar3[2];
          if (puVar4 != puVar10) {
            do {
              while (pPVar5 = (PolyPathD *)*puVar10, pPVar5 == (PolyPathD *)0x0) {
LAB_00109922:
                puVar10 = puVar10 + 1;
                if (puVar4 == puVar10) goto LAB_00109950;
              }
              if (*(code **)(*(long *)pPVar5 + 8) == Clipper2Lib::PolyPathD::~PolyPathD) {
                Clipper2Lib::PolyPathD::~PolyPathD(pPVar5);
                operator_delete(pPVar5,0x48);
                goto LAB_00109922;
              }
              (**(code **)(*(long *)pPVar5 + 8))();
              puVar10 = puVar10 + 1;
            } while (puVar4 != puVar10);
LAB_00109950:
            puVar10 = (undefined8 *)plVar3[2];
          }
          if (puVar10 != (undefined8 *)0x0) {
            operator_delete(puVar10,plVar3[4] - (long)puVar10);
          }
          operator_delete(plVar3,0x48);
        }
        else {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      }
      puVar8 = puVar8 + 1;
    } while (puVar2 != puVar8);
    *(undefined8 **)(this + 8) = puVar1;
  }
  return;
}



/* Clipper2Lib::PolyPathD::~PolyPathD() */

void __thiscall Clipper2Lib::PolyPathD::~PolyPathD(PolyPathD *this)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  PolyPathD *pPVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  *(undefined ***)this = &PTR__PolyPathD_0010e670;
  puVar1 = *(undefined8 **)(this + 0x18);
  puVar6 = *(undefined8 **)(this + 0x10);
  puVar7 = puVar6;
  if (puVar1 != puVar6) {
LAB_00109a14:
    do {
      plVar2 = (long *)*puVar7;
      if (plVar2 != (long *)0x0) {
        if (*(code **)(*plVar2 + 8) != ~PolyPathD) {
          puVar7 = puVar7 + 1;
          (**(code **)(*plVar2 + 8))(plVar2);
          if (puVar1 == puVar7) break;
          goto LAB_00109a14;
        }
        puVar3 = (undefined8 *)plVar2[3];
        *plVar2 = (long)&PTR__PolyPathD_0010e670;
        puVar9 = (undefined8 *)plVar2[2];
        puVar8 = puVar9;
        if (puVar3 != puVar9) {
          do {
            while (pPVar4 = (PolyPathD *)*puVar8, pPVar4 == (PolyPathD *)0x0) {
LAB_00109a6f:
              puVar8 = puVar8 + 1;
              if (puVar3 == puVar8) goto LAB_00109aa0;
            }
            if (*(code **)(*(long *)pPVar4 + 8) == ~PolyPathD) {
              ~PolyPathD(pPVar4);
              operator_delete(pPVar4,0x48);
              goto LAB_00109a6f;
            }
            (**(code **)(*(long *)pPVar4 + 8))();
            puVar8 = puVar8 + 1;
          } while (puVar3 != puVar8);
LAB_00109aa0:
          plVar2[3] = (long)puVar9;
        }
        pvVar5 = (void *)plVar2[6];
        if (pvVar5 != (void *)0x0) {
          operator_delete(pvVar5,plVar2[8] - (long)pvVar5);
        }
        puVar3 = (undefined8 *)plVar2[3];
        puVar9 = (undefined8 *)plVar2[2];
        if (puVar3 != puVar9) {
          do {
            while (pPVar4 = (PolyPathD *)*puVar9, pPVar4 == (PolyPathD *)0x0) {
LAB_00109ae7:
              puVar9 = puVar9 + 1;
              if (puVar3 == puVar9) goto LAB_00109b10;
            }
            if (*(code **)(*(long *)pPVar4 + 8) == ~PolyPathD) {
              ~PolyPathD(pPVar4);
              operator_delete(pPVar4,0x48);
              goto LAB_00109ae7;
            }
            (**(code **)(*(long *)pPVar4 + 8))();
            puVar9 = puVar9 + 1;
          } while (puVar3 != puVar9);
LAB_00109b10:
          puVar9 = (undefined8 *)plVar2[2];
        }
        if (puVar9 != (undefined8 *)0x0) {
          operator_delete(puVar9,plVar2[4] - (long)puVar9);
        }
        operator_delete(plVar2,0x48);
      }
      puVar7 = puVar7 + 1;
    } while (puVar1 != puVar7);
    *(undefined8 **)(this + 0x18) = puVar6;
  }
  pvVar5 = *(void **)(this + 0x30);
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5,*(long *)(this + 0x40) - (long)pvVar5);
  }
  puVar1 = *(undefined8 **)(this + 0x18);
  puVar6 = *(undefined8 **)(this + 0x10);
  if (puVar1 != puVar6) {
    do {
      while (pPVar4 = (PolyPathD *)*puVar6, pPVar4 == (PolyPathD *)0x0) {
LAB_00109b92:
        puVar6 = puVar6 + 1;
        if (puVar1 == puVar6) goto LAB_00109bc0;
      }
      if (*(code **)(*(long *)pPVar4 + 8) == ~PolyPathD) {
        ~PolyPathD(pPVar4);
        operator_delete(pPVar4,0x48);
        goto LAB_00109b92;
      }
      (**(code **)(*(long *)pPVar4 + 8))();
      puVar6 = puVar6 + 1;
    } while (puVar1 != puVar6);
LAB_00109bc0:
    puVar6 = *(undefined8 **)(this + 0x10);
  }
  if (puVar6 != (undefined8 *)0x0) {
    operator_delete(puVar6,*(long *)(this + 0x20) - (long)puVar6);
  }
  operator_delete(this,0x48);
  return;
}



/* Clipper2Lib::PolyPathD::Clear() */

void __thiscall Clipper2Lib::PolyPathD::Clear(PolyPathD *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  PolyPathD *pPVar9;
  void *pvVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  puVar1 = *(undefined8 **)(this + 0x18);
  puVar2 = *(undefined8 **)(this + 0x10);
  puVar13 = puVar2;
  if (puVar1 != puVar2) {
LAB_00109c5c:
    do {
      plVar3 = (long *)*puVar13;
      if (plVar3 != (long *)0x0) {
        if (*(code **)(*plVar3 + 8) != ~PolyPathD) {
          puVar13 = puVar13 + 1;
          (**(code **)(*plVar3 + 8))(plVar3);
          if (puVar1 == puVar13) break;
          goto LAB_00109c5c;
        }
        puVar4 = (undefined8 *)plVar3[3];
        puVar15 = (undefined8 *)plVar3[2];
        *plVar3 = (long)&PTR__PolyPathD_0010e670;
        puVar16 = puVar15;
        if (puVar4 != puVar15) {
LAB_00109ca8:
          do {
            plVar5 = (long *)*puVar16;
            if (plVar5 != (long *)0x0) {
              if (*(code **)(*plVar5 + 8) != ~PolyPathD) {
                puVar16 = puVar16 + 1;
                (**(code **)(*plVar5 + 8))(plVar5);
                if (puVar4 == puVar16) break;
                goto LAB_00109ca8;
              }
              puVar6 = (undefined8 *)plVar5[3];
              puVar12 = (undefined8 *)plVar5[2];
              *plVar5 = (long)&PTR__PolyPathD_0010e670;
              puVar11 = puVar12;
              if (puVar6 != puVar12) {
LAB_00109cfa:
                do {
                  plVar7 = (long *)*puVar11;
                  if (plVar7 != (long *)0x0) {
                    if (*(code **)(*plVar7 + 8) != ~PolyPathD) {
                      puVar11 = puVar11 + 1;
                      (**(code **)(*plVar7 + 8))(plVar7);
                      if (puVar6 == puVar11) break;
                      goto LAB_00109cfa;
                    }
                    puVar8 = (undefined8 *)plVar7[3];
                    puVar14 = (undefined8 *)plVar7[2];
                    *plVar7 = (long)&PTR__PolyPathD_0010e670;
                    puVar17 = puVar14;
                    if (puVar8 != puVar14) {
                      do {
                        while (pPVar9 = (PolyPathD *)*puVar17, pPVar9 == (PolyPathD *)0x0) {
LAB_00109d52:
                          puVar17 = puVar17 + 1;
                          if (puVar8 == puVar17) goto LAB_00109d80;
                        }
                        if (*(code **)(*(long *)pPVar9 + 8) == ~PolyPathD) {
                          ~PolyPathD(pPVar9);
                          operator_delete(pPVar9,0x48);
                          goto LAB_00109d52;
                        }
                        (**(code **)(*(long *)pPVar9 + 8))();
                        puVar17 = puVar17 + 1;
                      } while (puVar8 != puVar17);
LAB_00109d80:
                      plVar7[3] = (long)puVar14;
                    }
                    pvVar10 = (void *)plVar7[6];
                    if (pvVar10 != (void *)0x0) {
                      operator_delete(pvVar10,plVar7[8] - (long)pvVar10);
                    }
                    puVar8 = (undefined8 *)plVar7[3];
                    puVar14 = (undefined8 *)plVar7[2];
                    if (puVar8 != puVar14) {
                      do {
                        while (pPVar9 = (PolyPathD *)*puVar14, pPVar9 == (PolyPathD *)0x0) {
LAB_00109dca:
                          puVar14 = puVar14 + 1;
                          if (puVar8 == puVar14) goto LAB_00109e00;
                        }
                        if (*(code **)(*(long *)pPVar9 + 8) == ~PolyPathD) {
                          ~PolyPathD(pPVar9);
                          operator_delete(pPVar9,0x48);
                          goto LAB_00109dca;
                        }
                        (**(code **)(*(long *)pPVar9 + 8))();
                        puVar14 = puVar14 + 1;
                      } while (puVar8 != puVar14);
LAB_00109e00:
                      puVar14 = (undefined8 *)plVar7[2];
                    }
                    if (puVar14 != (undefined8 *)0x0) {
                      operator_delete(puVar14,plVar7[4] - (long)puVar14);
                    }
                    operator_delete(plVar7,0x48);
                  }
                  puVar11 = puVar11 + 1;
                } while (puVar6 != puVar11);
                plVar5[3] = (long)puVar12;
              }
              pvVar10 = (void *)plVar5[6];
              if (pvVar10 != (void *)0x0) {
                operator_delete(pvVar10,plVar5[8] - (long)pvVar10);
              }
              puVar6 = (undefined8 *)plVar5[3];
              puVar12 = (undefined8 *)plVar5[2];
              if (puVar6 != puVar12) {
                do {
                  while (pPVar9 = (PolyPathD *)*puVar12, pPVar9 == (PolyPathD *)0x0) {
LAB_00109e92:
                    puVar12 = puVar12 + 1;
                    if (puVar6 == puVar12) goto LAB_00109ec0;
                  }
                  if (*(code **)(*(long *)pPVar9 + 8) == ~PolyPathD) {
                    ~PolyPathD(pPVar9);
                    operator_delete(pPVar9,0x48);
                    goto LAB_00109e92;
                  }
                  (**(code **)(*(long *)pPVar9 + 8))();
                  puVar12 = puVar12 + 1;
                } while (puVar6 != puVar12);
LAB_00109ec0:
                puVar12 = (undefined8 *)plVar5[2];
              }
              if (puVar12 != (undefined8 *)0x0) {
                operator_delete(puVar12,plVar5[4] - (long)puVar12);
              }
              operator_delete(plVar5,0x48);
            }
            puVar16 = puVar16 + 1;
          } while (puVar4 != puVar16);
          plVar3[3] = (long)puVar15;
        }
        pvVar10 = (void *)plVar3[6];
        if (pvVar10 != (void *)0x0) {
          operator_delete(pvVar10,plVar3[8] - (long)pvVar10);
        }
        puVar4 = (undefined8 *)plVar3[3];
        puVar15 = (undefined8 *)plVar3[2];
        if (puVar4 != puVar15) {
          do {
            while (pPVar9 = (PolyPathD *)*puVar15, pPVar9 == (PolyPathD *)0x0) {
LAB_00109f4a:
              puVar15 = puVar15 + 1;
              if (puVar4 == puVar15) goto LAB_00109f78;
            }
            if (*(code **)(*(long *)pPVar9 + 8) == ~PolyPathD) {
              ~PolyPathD(pPVar9);
              operator_delete(pPVar9,0x48);
              goto LAB_00109f4a;
            }
            (**(code **)(*(long *)pPVar9 + 8))();
            puVar15 = puVar15 + 1;
          } while (puVar4 != puVar15);
LAB_00109f78:
          puVar15 = (undefined8 *)plVar3[2];
        }
        if (puVar15 != (undefined8 *)0x0) {
          operator_delete(puVar15,plVar3[4] - (long)puVar15);
        }
        operator_delete(plVar3,0x48);
      }
      puVar13 = puVar13 + 1;
    } while (puVar1 != puVar13);
    *(undefined8 **)(this + 0x18) = puVar2;
  }
  return;
}



/* void std::vector<std::unique_ptr<Clipper2Lib::PolyPathD,
   std::default_delete<Clipper2Lib::PolyPathD> >,
   std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,
   std::default_delete<Clipper2Lib::PolyPathD> > >
   >::_M_realloc_insert<std::unique_ptr<Clipper2Lib::PolyPathD,
   std::default_delete<Clipper2Lib::PolyPathD> >
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::PolyPathD,
   std::default_delete<Clipper2Lib::PolyPathD> >*,
   std::vector<std::unique_ptr<Clipper2Lib::PolyPathD, std::default_delete<Clipper2Lib::PolyPathD>
   >, std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,
   std::default_delete<Clipper2Lib::PolyPathD> > > > >, std::unique_ptr<Clipper2Lib::PolyPathD,
   std::default_delete<Clipper2Lib::PolyPathD> >&&) */

void __thiscall
std::
vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>
::
_M_realloc_insert<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>
          (vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>
           *this,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long local_50;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar5 = (long)puVar1 - (long)puVar2 >> 3;
  if (uVar5 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar2 == puVar1) {
    uVar9 = uVar5 + 1;
    if (0xfffffffffffffffe < uVar5) goto LAB_0010a126;
    if (0xfffffffffffffff < uVar9) {
      uVar9 = 0xfffffffffffffff;
    }
    uVar9 = uVar9 * 8;
LAB_0010a130:
    puVar6 = (undefined8 *)operator_new(uVar9);
    local_50 = (long)puVar6 + uVar9;
    uVar3 = *param_3;
    puVar7 = puVar6 + 1;
    *param_3 = 0;
    *(undefined8 *)((long)puVar6 + ((long)param_2 - (long)puVar2)) = uVar3;
    if (param_2 != puVar2) {
LAB_0010a0b2:
      puVar7 = puVar2;
      puVar8 = puVar6;
      do {
        uVar3 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar8 = uVar3;
        puVar8 = puVar8 + 1;
      } while (param_2 != puVar7);
      puVar7 = (undefined8 *)((long)puVar6 + (long)param_2 + (8 - (long)puVar2));
    }
    puVar8 = puVar7;
    if (param_2 == puVar1) goto LAB_0010a0f2;
  }
  else {
    uVar4 = uVar5 * 2;
    if (uVar4 < uVar5) {
LAB_0010a126:
      uVar9 = 0x7ffffffffffffff8;
      goto LAB_0010a130;
    }
    if (uVar4 != 0) {
      uVar9 = 0xfffffffffffffff;
      if (uVar4 < 0x1000000000000000) {
        uVar9 = uVar4;
      }
      uVar9 = uVar9 << 3;
      goto LAB_0010a130;
    }
    uVar3 = *param_3;
    puVar6 = (undefined8 *)0x0;
    *param_3 = 0;
    puVar7 = (undefined8 *)0x8;
    local_50 = 0;
    *(undefined8 *)((long)param_2 - (long)puVar2) = uVar3;
    if (param_2 != puVar2) goto LAB_0010a0b2;
  }
  puVar8 = (undefined8 *)((long)puVar7 + ((long)puVar1 - (long)param_2));
  memcpy(puVar7,param_2,(long)puVar1 - (long)param_2);
LAB_0010a0f2:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = local_50;
  return;
}



/* std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > >::_M_default_append(unsigned long) */

void __thiscall
std::
vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
::_M_default_append(vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                    *this,ulong param_1)

{
  ulong uVar1;
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  
  if (param_1 == 0) {
    return;
  }
  pauVar2 = *(undefined1 (**) [16])(this + 8);
  pauVar12 = *(undefined1 (**) [16])this;
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)pauVar2 >> 3) * -0x5555555555555555)) {
    pauVar12 = pauVar2;
    do {
      *(undefined8 *)pauVar12[1] = 0;
      pauVar13 = (undefined1 (*) [16])(pauVar12[1] + 8);
      *pauVar12 = (undefined1  [16])0x0;
      pauVar12 = pauVar13;
    } while (pauVar13 != (undefined1 (*) [16])((long)pauVar2 + param_1 * 0x18));
    *(undefined1 (**) [16])(this + 8) = pauVar13;
    return;
  }
  lVar8 = (long)pauVar2 - (long)pauVar12 >> 3;
  if (param_1 <= lVar8 * 0x5555555555555555 + 0x555555555555555U) {
    uVar1 = param_1 + lVar8 * -0x5555555555555555;
    uVar9 = 0x555555555555555;
    if (uVar1 < 0x555555555555556) {
      uVar9 = uVar1;
    }
    if ((param_1 <= (ulong)(lVar8 * -0x5555555555555555)) &&
       (uVar9 = lVar8 * 0x5555555555555556, 0x555555555555555 < uVar9)) {
      uVar9 = 0x555555555555555;
    }
    puVar10 = (undefined8 *)operator_new(uVar9 * 0x18);
    pauVar13 = (undefined1 (*) [16])((long)puVar10 + ((long)pauVar2 - (long)pauVar12));
    pauVar11 = pauVar13;
    do {
      *(undefined8 *)pauVar11[1] = 0;
      pauVar7 = pauVar11 + 1;
      *pauVar11 = (undefined1  [16])0x0;
      pauVar11 = (undefined1 (*) [16])(*pauVar7 + 8);
      pauVar5 = pauVar12;
      puVar6 = puVar10;
    } while ((undefined1 (*) [16])(*pauVar7 + 8) !=
             (undefined1 (*) [16])((long)pauVar13 + param_1 * 0x18));
    for (; pauVar5 != pauVar2; pauVar5 = (undefined1 (*) [16])(pauVar5[1] + 8)) {
      uVar4 = *(undefined8 *)(*pauVar5 + 8);
      uVar3 = *(undefined8 *)pauVar5[1];
      *puVar6 = *(undefined8 *)*pauVar5;
      puVar6[1] = uVar4;
      puVar6[2] = uVar3;
      puVar6 = puVar6 + 3;
    }
    if (pauVar12 != (undefined1 (*) [16])0x0) {
      operator_delete(pauVar12,*(long *)(this + 0x10) - (long)pauVar12);
    }
    *(undefined8 **)this = puVar10;
    *(undefined8 **)(this + 8) = puVar10 + uVar1 * 3;
    *(undefined8 **)(this + 0x10) = puVar10 + uVar9 * 3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("vector::_M_default_append");
}



/* HashMap<Vector2, int, HashMapHasherDefault, HashMapComparatorDefault<Vector2>,
   DefaultTypedAllocator<HashMapElement<Vector2, int> > >::_lookup_pos(Vector2 const&, unsigned
   int&) const */

undefined8 __thiscall
HashMap<Vector2,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,int>>>
::_lookup_pos(HashMap<Vector2,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,int>>>
              *this,Vector2 *param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  float fVar19;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) == 0) {
    return 0;
  }
  fVar1 = *(float *)param_1;
  uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar13 = 0x3413905a;
  if (fVar1 == 0.0) {
LAB_0010a3d1:
    fVar19 = *(float *)(param_1 + 4);
    if (fVar19 != 0.0) {
LAB_0010a51c:
      if (NAN(fVar19)) {
        uVar13 = uVar13 ^ 0x2db3efa0;
      }
      else {
        uVar13 = uVar13 ^ ((int)fVar19 * 0x16a88000 | (uint)((int)fVar19 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
      goto LAB_0010a536;
    }
    uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
    uVar13 = (uVar13 >> 0x10 ^ uVar13) * -0x7a143595;
    uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
    uVar13 = uVar13 >> 0x10 ^ uVar13;
  }
  else {
    if (NAN(fVar1)) {
      uVar13 = 0x22afa5cc;
      goto LAB_0010a3d1;
    }
    fVar19 = *(float *)(param_1 + 4);
    uVar13 = ((int)fVar1 * 0x16a88000 | (uint)((int)fVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             0x7f07c65;
    uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
    if (fVar19 != 0.0) goto LAB_0010a51c;
LAB_0010a536:
    uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
    uVar13 = (uVar13 >> 0x10 ^ uVar13) * -0x7a143595;
    uVar12 = (uVar13 ^ uVar13 >> 0xd) * -0x3d4d51cb;
    uVar13 = uVar12 ^ uVar12 >> 0x10;
    if (uVar12 == uVar12 >> 0x10) {
      uVar13 = 1;
      uVar15 = uVar3;
      goto LAB_0010a41a;
    }
  }
  uVar15 = uVar13 * uVar3;
LAB_0010a41a:
  uVar17 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar17;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar15;
  lVar16 = SUB168(auVar4 * auVar8,8);
  uVar12 = *(uint *)(*(long *)(this + 0x10) + lVar16 * 4);
  uVar14 = SUB164(auVar4 * auVar8,8);
  if (uVar12 != 0) {
    uVar18 = 0;
    do {
      if (uVar13 == uVar12) {
        lVar16 = *(long *)(*(long *)(this + 8) + lVar16 * 8);
        fVar2 = *(float *)(lVar16 + 0x10);
        if (((fVar1 == fVar2) || ((NAN(fVar2) && (NAN(fVar1))))) &&
           ((fVar2 = *(float *)(lVar16 + 0x14), fVar2 == fVar19 || ((NAN(fVar2) && (NAN(fVar19))))))
           ) {
          *param_2 = uVar14;
          return 1;
        }
      }
      uVar18 = uVar18 + 1;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (uVar14 + 1) * uVar3;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar17;
      lVar16 = SUB168(auVar5 * auVar9,8);
      uVar12 = *(uint *)(*(long *)(this + 0x10) + lVar16 * 4);
      uVar14 = SUB164(auVar5 * auVar9,8);
    } while ((uVar12 != 0) &&
            (auVar6._8_8_ = 0, auVar6._0_8_ = uVar12 * uVar3, auVar10._8_8_ = 0,
            auVar10._0_8_ = uVar17, auVar7._8_8_ = 0,
            auVar7._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4) +
                            uVar14) - SUB164(auVar6 * auVar10,8)) * uVar3, auVar11._8_8_ = 0,
            auVar11._0_8_ = uVar17, uVar18 <= SUB164(auVar7 * auVar11,8)));
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Vector2, int, HashMapHasherDefault, HashMapComparatorDefault<Vector2>,
   DefaultTypedAllocator<HashMapElement<Vector2, int> > >::insert(Vector2 const&, int const&, bool)
    */

Vector2 * HashMap<Vector2,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,int>>>
          ::insert(Vector2 *param_1,int *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  float fVar3;
  uint uVar4;
  undefined4 uVar5;
  void *pvVar6;
  void *__s;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 (*pauVar25) [16];
  char cVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  undefined8 uVar30;
  void *__s_00;
  undefined1 (*pauVar31) [16];
  void *pvVar32;
  undefined4 *in_RCX;
  int iVar33;
  undefined7 in_register_00000011;
  Vector2 *pVVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  undefined8 uVar38;
  char in_R8B;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  undefined1 (*pauVar42) [16];
  long in_FS_OFFSET;
  float fVar43;
  uint local_d8;
  uint local_6c [5];
  undefined8 local_58;
  long local_40;
  
  pVVar34 = (Vector2 *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar27 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4);
  if (*(long *)(param_2 + 2) == 0) {
    uVar37 = (ulong)uVar27;
    uVar29 = uVar37 * 4;
    uVar41 = uVar37 * 8;
    uVar30 = Memory::alloc_static(uVar29,false);
    *(undefined8 *)(param_2 + 4) = uVar30;
    pvVar32 = (void *)Memory::alloc_static(uVar41,false);
    *(void **)(param_2 + 2) = pvVar32;
    if (uVar27 != 0) {
      pvVar6 = *(void **)(param_2 + 4);
      if ((pvVar6 < (void *)((long)pvVar32 + uVar41)) && (pvVar32 < (void *)((long)pvVar6 + uVar29))
         ) {
        uVar29 = 0;
        do {
          *(undefined4 *)((long)pvVar6 + uVar29 * 4) = 0;
          *(undefined8 *)((long)pvVar32 + uVar29 * 8) = 0;
          uVar29 = uVar29 + 1;
        } while (uVar37 != uVar29);
      }
      else {
        memset(pvVar6,0,uVar29);
        memset(pvVar32,0,uVar41);
      }
    }
  }
  local_6c[0] = 0;
  cVar26 = _lookup_pos((HashMap<Vector2,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,int>>>
                        *)param_2,pVVar34,local_6c);
  if (cVar26 != '\0') {
    pauVar31 = *(undefined1 (**) [16])(*(long *)(param_2 + 2) + (ulong)local_6c[0] * 8);
    *(undefined4 *)(pauVar31[1] + 8) = *in_RCX;
    goto LAB_0010aaaa;
  }
  if ((float)uVar27 * __LC26 < (float)(param_2[0xb] + 1)) {
    uVar27 = param_2[10];
    if (uVar27 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      pauVar31 = (undefined1 (*) [16])0x0;
      goto LAB_0010aaaa;
    }
    uVar29 = (ulong)(uVar27 + 1);
    param_2[0xb] = 0;
    uVar28 = *(uint *)(hash_table_size_primes + (ulong)uVar27 * 4);
    if (uVar27 + 1 < 2) {
      uVar29 = 2;
    }
    uVar27 = *(uint *)(hash_table_size_primes + uVar29 * 4);
    uVar37 = (ulong)uVar27;
    param_2[10] = (int)uVar29;
    pvVar32 = *(void **)(param_2 + 2);
    uVar29 = uVar37 * 4;
    uVar41 = uVar37 * 8;
    pvVar6 = *(void **)(param_2 + 4);
    uVar30 = Memory::alloc_static(uVar29,false);
    *(undefined8 *)(param_2 + 4) = uVar30;
    __s_00 = (void *)Memory::alloc_static(uVar41,false);
    *(void **)(param_2 + 2) = __s_00;
    if (uVar27 != 0) {
      __s = *(void **)(param_2 + 4);
      if ((__s < (void *)((long)__s_00 + uVar41)) && (__s_00 < (void *)((long)__s + uVar29))) {
        uVar29 = 0;
        do {
          *(undefined4 *)((long)__s + uVar29 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar29 * 8) = 0;
          uVar29 = uVar29 + 1;
        } while (uVar37 != uVar29);
      }
      else {
        memset(__s,0,uVar29);
        memset(__s_00,0,uVar41);
      }
    }
    if (uVar28 != 0) {
      uVar29 = 0;
      do {
        uVar27 = *(uint *)((long)pvVar6 + uVar29 * 4);
        if (uVar27 != 0) {
          uVar39 = 0;
          lVar7 = *(long *)(param_2 + 4);
          lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8);
          uVar4 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4);
          uVar41 = CONCAT44(0,uVar4);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar27 * lVar8;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar41;
          lVar35 = SUB168(auVar9 * auVar17,8);
          puVar1 = (uint *)(lVar7 + lVar35 * 4);
          iVar33 = SUB164(auVar9 * auVar17,8);
          uVar40 = *puVar1;
          uVar30 = *(undefined8 *)((long)pvVar32 + uVar29 * 8);
          while (uVar40 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar40 * lVar8;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar41;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar4 + iVar33) - SUB164(auVar10 * auVar18,8)) * lVar8;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar41;
            local_d8 = SUB164(auVar11 * auVar19,8);
            uVar38 = uVar30;
            if (local_d8 < uVar39) {
              *puVar1 = uVar27;
              puVar2 = (undefined8 *)((long)__s_00 + lVar35 * 8);
              uVar38 = *puVar2;
              *puVar2 = uVar30;
              uVar27 = uVar40;
              uVar39 = local_d8;
            }
            uVar39 = uVar39 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar33 + 1) * lVar8;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar41;
            lVar35 = SUB168(auVar12 * auVar20,8);
            puVar1 = (uint *)(lVar7 + lVar35 * 4);
            iVar33 = SUB164(auVar12 * auVar20,8);
            uVar30 = uVar38;
            uVar40 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar35 * 8) = uVar30;
          *puVar1 = uVar27;
          param_2[0xb] = param_2[0xb] + 1;
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 != uVar28);
      Memory::free_static(pvVar32,false);
      Memory::free_static(pvVar6,false);
    }
  }
  local_58 = *(undefined8 *)pVVar34;
  uVar5 = *in_RCX;
  pauVar31 = (undefined1 (*) [16])operator_new(0x20,"");
  *pauVar31 = (undefined1  [16])0x0;
  *(undefined4 *)(pauVar31[1] + 8) = uVar5;
  *(undefined8 *)pauVar31[1] = local_58;
  puVar2 = *(undefined8 **)(param_2 + 8);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(param_2 + 6) = pauVar31;
    *(undefined1 (**) [16])(param_2 + 8) = pauVar31;
  }
  else if (in_R8B == '\0') {
    *puVar2 = pauVar31;
    *(undefined8 **)(*pauVar31 + 8) = puVar2;
    *(undefined1 (**) [16])(param_2 + 8) = pauVar31;
  }
  else {
    lVar7 = *(long *)(param_2 + 6);
    *(undefined1 (**) [16])(lVar7 + 8) = pauVar31;
    *(long *)*pauVar31 = lVar7;
    *(undefined1 (**) [16])(param_2 + 6) = pauVar31;
  }
  fVar3 = *(float *)pVVar34;
  uVar27 = 0x3413905a;
  if (fVar3 == 0.0) {
LAB_0010a995:
    fVar43 = *(float *)(pVVar34 + 4);
    if (fVar43 != 0.0) {
LAB_0010a935:
      if (NAN(fVar43)) {
        uVar27 = uVar27 ^ 0x2db3efa0;
      }
      else {
        uVar27 = uVar27 ^ ((int)fVar43 * 0x16a88000 | (uint)((int)fVar43 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
      goto LAB_0010a953;
    }
    uVar27 = (uVar27 << 0xd | uVar27 >> 0x13) * 5 + 0xe6546b64;
    uVar27 = (uVar27 >> 0x10 ^ uVar27) * -0x7a143595;
    uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
    uVar27 = uVar27 >> 0x10 ^ uVar27;
LAB_0010a9d1:
    uVar29 = (ulong)uVar27;
  }
  else {
    if (NAN(fVar3)) {
      uVar27 = 0x22afa5cc;
      goto LAB_0010a995;
    }
    fVar43 = *(float *)(pVVar34 + 4);
    uVar27 = ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             0x7f07c65;
    uVar27 = (uVar27 << 0xd | uVar27 >> 0x13) * 5 + 0xe6546b64;
    if (fVar43 != 0.0) goto LAB_0010a935;
LAB_0010a953:
    uVar27 = (uVar27 << 0xd | uVar27 >> 0x13) * 5 + 0xe6546b64;
    uVar27 = (uVar27 >> 0x10 ^ uVar27) * -0x7a143595;
    uVar28 = (uVar27 ^ uVar27 >> 0xd) * -0x3d4d51cb;
    uVar27 = uVar28 ^ uVar28 >> 0x10;
    if (uVar28 != uVar28 >> 0x10) goto LAB_0010a9d1;
    uVar29 = 1;
    uVar27 = 1;
  }
  lVar7 = *(long *)(param_2 + 4);
  uVar40 = 0;
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4);
  uVar41 = CONCAT44(0,uVar28);
  lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar29 * lVar8;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar41;
  lVar36 = SUB168(auVar13 * auVar21,8);
  lVar35 = *(long *)(param_2 + 2);
  puVar1 = (uint *)(lVar7 + lVar36 * 4);
  iVar33 = SUB164(auVar13 * auVar21,8);
  uVar4 = *puVar1;
  pauVar25 = pauVar31;
  while (uVar4 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar4 * lVar8;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar41;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar28 + iVar33) - SUB164(auVar14 * auVar22,8)) * lVar8;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar41;
    local_d8 = SUB164(auVar15 * auVar23,8);
    pauVar42 = pauVar25;
    if (local_d8 < uVar40) {
      *puVar1 = uVar27;
      puVar2 = (undefined8 *)(lVar35 + lVar36 * 8);
      pauVar42 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar25;
      uVar27 = uVar4;
      uVar40 = local_d8;
    }
    uVar40 = uVar40 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar33 + 1) * lVar8;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar41;
    lVar36 = SUB168(auVar16 * auVar24,8);
    puVar1 = (uint *)(lVar7 + lVar36 * 4);
    iVar33 = SUB164(auVar16 * auVar24,8);
    pauVar25 = pauVar42;
    uVar4 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar35 + lVar36 * 8) = pauVar25;
  *puVar1 = uVar27;
  param_2[0xb] = param_2[0xb] + 1;
LAB_0010aaaa:
  *(undefined1 (**) [16])param_1 = pauVar31;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* CowData<Vector2>::_unref() */

void __thiscall CowData<Vector2>::_unref(CowData<Vector2> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Ref<NavigationMeshSourceGeometryData2D>::TEMPNAMEPLACEHOLDERVALUE(Ref<NavigationMeshSourceGeometryData2D>
   const&) [clone .isra.0] [clone .cold] */

void __thiscall
Ref<NavigationMeshSourceGeometryData2D>::operator=
          (Ref<NavigationMeshSourceGeometryData2D> *this,Ref *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector<int> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector<int>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* NavMeshGenerator2D::cleanup() [clone .cold] */

void NavMeshGenerator2D::cleanup(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* NavMeshGenerator2D::generator_parse_geometry_node(Ref<NavigationPolygon>,
   Ref<NavigationMeshSourceGeometryData2D>, Node*, bool) [clone .cold] */

void NavMeshGenerator2D::generator_parse_geometry_node(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* NavMeshGenerator2D::generator_parse_source_geometry_data(Ref<NavigationPolygon>,
   Ref<NavigationMeshSourceGeometryData2D>, Node*) [clone .cold] */

void NavMeshGenerator2D::generator_parse_source_geometry_data(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* NavMeshGenerator2D::generator_thread_bake(void*) [clone .cold] */

void NavMeshGenerator2D::generator_thread_bake(void *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector2>::_realloc(long) */

undefined8 __thiscall CowData<Vector2>::_realloc(CowData<Vector2> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector2>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar7 = 0;
    lVar2 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar2 = lVar7 * 8;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010b010:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 8 - 1;
  uVar3 = uVar3 >> 1 | uVar3;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  lVar6 = uVar3 + 1;
  if (lVar6 == 0) goto LAB_0010b010;
  if (param_1 <= lVar7) {
    if ((lVar6 != lVar2) && (uVar5 = _realloc(this,lVar6), (int)uVar5 != 0)) {
      return uVar5;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (lVar6 == lVar2) {
LAB_0010af9c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_0010af41;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar6);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0010af9c;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar7 = 0;
  }
  memset(puVar8 + lVar7,0,(param_1 - lVar7) * 8);
LAB_0010af41:
  puVar8[-1] = param_1;
  return 0;
}



/* CowData<int>::_unref() */

void __thiscall CowData<int>::_unref(CowData<int> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* CowData<Vector<Vector2> >::_unref() */

void __thiscall CowData<Vector<Vector2>>::_unref(CowData<Vector<Vector2>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D() */

void __thiscall
NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D
          (NavigationMeshSourceGeometryData2D *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_0010e0e8;
  NavigationMeshSourceGeometryData2D::clear();
  if (*(long *)(this + 0x2b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x2b8);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)(this + 0x2b8) = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x18;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x290));
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x280));
  Resource::~Resource((Resource *)this);
  return;
}



/* NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D() */

void __thiscall
NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D
          (NavigationMeshSourceGeometryData2D *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_0010e0e8;
  NavigationMeshSourceGeometryData2D::clear();
  if (*(long *)(this + 0x2b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x2b8);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)(this + 0x2b8) = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x18;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x290));
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x280));
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2d8);
  return;
}



/* CowData<int>::_realloc(long) */

undefined8 __thiscall CowData<int>::_realloc(CowData<int> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) */

undefined8 __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar8 = 0;
    lVar2 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar2 = lVar8 * 4;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_0010b5b0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 4 - 1;
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  lVar7 = uVar3 + 1;
  if (lVar7 == 0) goto LAB_0010b5b0;
  if (lVar8 < param_1) {
    if (lVar7 != lVar2) {
      if (lVar8 == 0) {
        puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
        if (puVar4 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar6 = puVar4 + 2;
        *puVar4 = 1;
        puVar4[1] = 0;
        *(undefined8 **)this = puVar6;
        goto LAB_0010b4e1;
      }
      uVar5 = _realloc(this,lVar7);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    puVar6 = *(undefined8 **)this;
    if (puVar6 != (undefined8 *)0x0) {
LAB_0010b4e1:
      puVar6[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar7 != lVar2) && (uVar5 = _realloc(this,lVar7), (int)uVar5 != 0)) {
      return uVar5;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector<int> >::_unref() */

void __thiscall CowData<Vector<int>>::_unref(CowData<Vector<int>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* NavigationMesh::~NavigationMesh() */

void __thiscall NavigationMesh::~NavigationMesh(NavigationMesh *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  bVar5 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0010e2c0;
  if ((bVar5) && (*(long *)(this + 0x2e8) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x298) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x298);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(this + 0x290));
  if (*(long *)(this + 0x280) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x280) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x280);
      *(undefined8 *)(this + 0x280) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* NavigationMesh::~NavigationMesh() */

void __thiscall NavigationMesh::~NavigationMesh(NavigationMesh *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  bVar5 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0010e2c0;
  if ((bVar5) && (*(long *)(this + 0x2e8) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x298) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x298);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(this + 0x290));
  if (*(long *)(this + 0x280) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x280) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x280);
      *(undefined8 *)(this + 0x280) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x318);
  return;
}



/* HashSet<Ref<NavigationPolygon>, HashMapHasherDefault,
   HashMapComparatorDefault<Ref<NavigationPolygon> > >::~HashSet() */

void __thiscall
HashSet<Ref<NavigationPolygon>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationPolygon>>>
::~HashSet(HashSet<Ref<NavigationPolygon>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationPolygon>>>
           *this)

{
  long *plVar1;
  Object *this_00;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  bool bVar6;
  
  pvVar5 = *(void **)this;
  if (pvVar5 == (void *)0x0) {
    return;
  }
  if ((*(int *)(this + 0x24) != 0) &&
     ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) == 0 ||
      (memset(*(void **)(this + 0x18),0,
              (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) << 2),
      *(int *)(this + 0x24) != 0)))) {
    lVar4 = 0;
    do {
      plVar1 = (long *)((long)pvVar5 + lVar4 * 8);
      if (*plVar1 != 0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          this_00 = (Object *)*plVar1;
          cVar3 = predelete_handler(this_00);
          if (cVar3 != '\0') {
            if (*(code **)(*(long *)this_00 + 0x140) == NavigationPolygon::~NavigationPolygon) {
              bVar6 = StringName::configured != '\0';
              *(undefined ***)this_00 = &PTR__initialize_classv_0010e498;
              if ((bVar6) && (*(long *)(this_00 + 0x338) != 0)) {
                StringName::unref();
              }
              if ((*(long *)(this_00 + 0x2f8) != 0) &&
                 (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
                pOVar2 = *(Object **)(this_00 + 0x2f8);
                cVar3 = predelete_handler(pOVar2);
                if (cVar3 != '\0') {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                }
              }
              CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this_00 + 0x2b0));
              CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this_00 + 0x2a0));
              CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(this_00 + 0x290));
              CowData<Vector2>::_unref((CowData<Vector2> *)(this_00 + 0x280));
              Resource::~Resource((Resource *)this_00);
            }
            else {
              (**(code **)(*(long *)this_00 + 0x140))(this_00);
            }
            Memory::free_static(this_00,false);
          }
        }
        pvVar5 = *(void **)this;
      }
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(this + 0x24));
    *(undefined4 *)(this + 0x24) = 0;
    if (pvVar5 == (void *)0x0) {
      return;
    }
  }
  Memory::free_static(pvVar5,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  Memory::free_static(*(void **)(this + 8),false);
  Memory::free_static(*(void **)(this + 0x18),false);
  return;
}



/* NavigationPolygon::~NavigationPolygon() */

void __thiscall NavigationPolygon::~NavigationPolygon(NavigationPolygon *this)

{
  long *plVar1;
  Object *this_00;
  Object *pOVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  
  bVar5 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0010e498;
  if ((bVar5) && (*(long *)(this + 0x338) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x2f8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      this_00 = *(Object **)(this + 0x2f8);
      cVar4 = predelete_handler(this_00);
      if (cVar4 != '\0') {
        if (*(code **)(*(long *)this_00 + 0x140) == NavigationMesh::~NavigationMesh) {
          bVar5 = StringName::configured != '\0';
          *(undefined ***)this_00 = &PTR__initialize_classv_0010e2c0;
          if ((bVar5) && (*(long *)(this_00 + 0x2e8) != 0)) {
            StringName::unref();
          }
          if (*(long *)(this_00 + 0x298) != 0) {
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
              pOVar2 = *(Object **)(this_00 + 0x298);
              cVar4 = predelete_handler(pOVar2);
              if (cVar4 != '\0') {
                (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                Memory::free_static(pOVar2,false);
              }
            }
          }
          CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(this_00 + 0x290));
          if (*(long *)(this_00 + 0x280) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(this_00 + 0x280) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)(this_00 + 0x280);
              *(undefined8 *)(this_00 + 0x280) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          Resource::~Resource((Resource *)this_00);
        }
        else {
          (**(code **)(*(long *)this_00 + 0x140))(this_00);
        }
        Memory::free_static(this_00,false);
      }
    }
  }
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x2b0));
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x2a0));
  CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(this + 0x290));
  CowData<Vector2>::_unref((CowData<Vector2> *)(this + 0x280));
  Resource::~Resource((Resource *)this);
  return;
}



/* NavigationPolygon::~NavigationPolygon() */

void __thiscall NavigationPolygon::~NavigationPolygon(NavigationPolygon *this)

{
  long *plVar1;
  Object *this_00;
  Object *pOVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  
  bVar5 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0010e498;
  if ((bVar5) && (*(long *)(this + 0x338) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x2f8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      this_00 = *(Object **)(this + 0x2f8);
      cVar4 = predelete_handler(this_00);
      if (cVar4 != '\0') {
        if (*(code **)(*(long *)this_00 + 0x140) == NavigationMesh::~NavigationMesh) {
          bVar5 = StringName::configured != '\0';
          *(undefined ***)this_00 = &PTR__initialize_classv_0010e2c0;
          if ((bVar5) && (*(long *)(this_00 + 0x2e8) != 0)) {
            StringName::unref();
          }
          if (*(long *)(this_00 + 0x298) != 0) {
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
              pOVar2 = *(Object **)(this_00 + 0x298);
              cVar4 = predelete_handler(pOVar2);
              if (cVar4 != '\0') {
                (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                Memory::free_static(pOVar2,false);
              }
            }
          }
          CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(this_00 + 0x290));
          if (*(long *)(this_00 + 0x280) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(this_00 + 0x280) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)(this_00 + 0x280);
              *(undefined8 *)(this_00 + 0x280) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          Resource::~Resource((Resource *)this_00);
        }
        else {
          (**(code **)(*(long *)this_00 + 0x140))(this_00);
        }
        Memory::free_static(this_00,false);
      }
    }
  }
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x2b0));
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x2a0));
  CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(this + 0x290));
  CowData<Vector2>::_unref((CowData<Vector2> *)(this + 0x280));
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x340);
  return;
}



/* void memdelete<NavigationPolygon>(NavigationPolygon*) */

void memdelete<NavigationPolygon>(NavigationPolygon *param_1)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = predelete_handler((Object *)param_1);
  if (cVar2 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == NavigationPolygon::~NavigationPolygon) {
    bVar3 = StringName::configured != '\0';
    *(undefined ***)param_1 = &PTR__initialize_classv_0010e498;
    if ((bVar3) && (*(long *)(param_1 + 0x338) != 0)) {
      StringName::unref();
    }
    if (*(long *)(param_1 + 0x2f8) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        pOVar1 = *(Object **)(param_1 + 0x2f8);
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
    CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(param_1 + 0x2b0));
    CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(param_1 + 0x2a0));
    CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(param_1 + 0x290));
    CowData<Vector2>::_unref((CowData<Vector2> *)(param_1 + 0x280));
    Resource::~Resource((Resource *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* Ref<NavigationPolygon>::unref() */

void __thiscall Ref<NavigationPolygon>::unref(Ref<NavigationPolygon> *this)

{
  char cVar1;
  
  if (*(long *)this != 0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<NavigationPolygon>(*(NavigationPolygon **)this);
      *(undefined8 *)this = 0;
      return;
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* void memdelete<NavigationMeshSourceGeometryData2D>(NavigationMeshSourceGeometryData2D*) */

void memdelete<NavigationMeshSourceGeometryData2D>(NavigationMeshSourceGeometryData2D *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  
  cVar6 = predelete_handler((Object *)param_1);
  if (cVar6 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) ==
      NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D) {
    *(undefined ***)param_1 = &PTR__initialize_classv_0010e0e8;
    NavigationMeshSourceGeometryData2D::clear();
    if (*(long *)(param_1 + 0x2b8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_1 + 0x2b8) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_1 + 0x2b8);
        if (lVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar3 = *(long *)(lVar2 + -8);
        *(undefined8 *)(param_1 + 0x2b8) = 0;
        if (lVar3 != 0) {
          lVar8 = 0;
          lVar7 = lVar2;
          do {
            if (*(long *)(lVar7 + 8) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)(lVar7 + 8) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar4 = *(long *)(lVar7 + 8);
                *(undefined8 *)(lVar7 + 8) = 0;
                Memory::free_static((void *)(lVar4 + -0x10),false);
              }
            }
            lVar8 = lVar8 + 1;
            lVar7 = lVar7 + 0x18;
          } while (lVar3 != lVar8);
        }
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(param_1 + 0x290));
    CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(param_1 + 0x280));
    Resource::~Resource((Resource *)param_1);
  }
  else {
    (**(code **)(*(long *)param_1 + 0x140))(param_1);
  }
  Memory::free_static(param_1,false);
  return;
}



/* void std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   >::_M_realloc_insert<Clipper2Lib::Point<long>
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::Point<long>*, std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > >, Clipper2Lib::Point<long>&&) */

void __thiscall
std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::
_M_realloc_insert<Clipper2Lib::Point<long>>
          (vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *this,
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
    if (0xfffffffffffffffe < uVar5) goto LAB_0010c138;
    uVar7 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 4;
LAB_0010c142:
    puVar6 = (undefined8 *)operator_new(uVar7);
    uVar3 = param_3[1];
    lVar11 = uVar7 + (long)puVar6;
    puVar10 = puVar6 + 2;
    *(undefined8 *)((long)puVar6 + (long)puVar8) = *param_3;
    ((undefined8 *)((long)puVar6 + (long)puVar8))[1] = uVar3;
    if (param_2 != puVar2) {
LAB_0010c0aa:
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
    if (param_2 == puVar1) goto LAB_0010c0fc;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_0010c138:
      uVar7 = 0x7ffffffffffffff0;
      goto LAB_0010c142;
    }
    if (uVar7 != 0) {
      if (0x7ffffffffffffff < uVar7) {
        uVar7 = 0x7ffffffffffffff;
      }
      uVar7 = uVar7 << 4;
      goto LAB_0010c142;
    }
    uVar3 = param_3[1];
    lVar11 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x10;
    *puVar8 = *param_3;
    puVar8[1] = uVar3;
    if (param_2 != puVar2) goto LAB_0010c0aa;
  }
  puVar8 = (undefined8 *)((long)puVar10 + ((long)puVar1 - (long)param_2));
  memcpy(puVar10,param_2,(long)puVar1 - (long)param_2);
LAB_0010c0fc:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = lVar11;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::vector<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >,
   std::allocator<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >
   > > Clipper2Lib::ScalePaths<long, double>(std::vector<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >,
   std::allocator<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > > > const&, double, double, int&) */

Clipper2Lib * __thiscall
Clipper2Lib::ScalePaths<long,double>
          (Clipper2Lib *this,vector *param_1,double param_2,double param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double *pdVar9;
  undefined8 *puVar10;
  double dVar11;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  dVar6 = _LC68;
  dVar7 = _LC68;
  dVar5 = _LC69;
  dVar8 = _LC69;
  for (puVar10 = *(undefined8 **)param_1; puVar10 != *(undefined8 **)(param_1 + 8);
      puVar10 = puVar10 + 3) {
    pdVar4 = (double *)*puVar10;
    dVar1 = dVar8;
    while (dVar8 = dVar1, pdVar4 != (double *)puVar10[1]) {
      dVar11 = *pdVar4;
      pdVar9 = pdVar4 + 2;
      dVar2 = dVar11;
      if (dVar11 <= dVar6) {
        dVar2 = dVar6;
      }
      if (dVar5 <= dVar11) {
        dVar11 = dVar5;
      }
      dVar1 = pdVar4[1];
      dVar3 = dVar1;
      if (dVar1 <= dVar7) {
        dVar3 = dVar7;
      }
      pdVar4 = pdVar9;
      dVar5 = dVar11;
      dVar6 = dVar2;
      dVar7 = dVar3;
      if (dVar8 <= dVar1) {
        dVar1 = dVar8;
      }
    }
  }
  if ((((dVar5 * param_2 < _LC70) || (__LC71 < dVar6 * param_2)) || (dVar8 * param_3 < _LC70)) ||
     (__LC71 < dVar7 * param_3)) {
    *param_4 = *param_4 | 0x40;
  }
  else {
    std::
    vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
    ::reserve((vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
               *)this,((long)*(undefined8 **)(param_1 + 8) - (long)*(undefined8 **)param_1 >> 3) *
                      -0x5555555555555555);
    std::
    transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>const*,std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>>,std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>>,Clipper2Lib::ScalePaths<long,double>(std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>const&,double,double,int&)::_lambda(auto:1_const&)_1_>
              (*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8),this);
  }
  return this;
}



/* Clipper2Lib::BooleanOp(Clipper2Lib::ClipType, Clipper2Lib::FillRule,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > const&,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > const&, int) */

Clipper2Lib * __thiscall
Clipper2Lib::BooleanOp
          (Clipper2Lib *this,undefined4 param_2,undefined4 param_3,vector *param_4,vector *param_5,
          int param_6)

{
  void *pvVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  double __x;
  undefined1 local_178 [16];
  long local_168;
  undefined **local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_80;
  int local_7c;
  undefined1 local_77;
  undefined1 local_70 [16];
  undefined8 local_60;
  double local_58;
  double dStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 + 8U < 0x11) {
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    *(undefined8 *)(this + 0x10) = 0;
    puVar6 = &local_150;
    for (lVar5 = 0x1c; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    local_120 = (undefined1  [16])0x0;
    local_110 = (undefined1  [16])0x0;
    local_100 = (undefined1  [16])0x0;
    local_f0 = (undefined1  [16])0x0;
    local_e0 = (undefined1  [16])0x0;
    local_c8 = (undefined1  [16])0x0;
    local_b8 = (undefined1  [16])0x0;
    local_a8 = (undefined1  [16])0x0;
    local_98 = (undefined1  [16])0x0;
    local_70 = (undefined1  [16])0x0;
    local_158 = &PTR__ClipperD_0010e6a8;
    local_148 = 2;
    local_80 = 1;
    local_77 = 1;
    local_60 = 0;
    __x = pow(_LC12,(double)param_6);
    iVar4 = ilogb(__x);
    local_58 = pow(_LC13,(double)(iVar4 + 1));
    dStack_50 = _LC11 / local_58;
    ScalePaths<long,double>((Clipper2Lib *)local_178,param_4,local_58,local_58,&local_7c);
    Clipper2Lib::ClipperBase::AddPaths((ClipperBase *)&local_158,(Clipper2Lib *)local_178,0,0);
    uVar2 = local_178._8_8_;
    puVar6 = (undefined8 *)local_178._0_8_;
    if (local_178._8_8_ != local_178._0_8_) {
      do {
        pvVar1 = (void *)*puVar6;
        if (pvVar1 != (void *)0x0) {
          operator_delete(pvVar1,puVar6[2] - (long)pvVar1);
        }
        puVar6 = puVar6 + 3;
      } while ((undefined8 *)uVar2 != puVar6);
    }
    if ((undefined8 *)local_178._0_8_ != (undefined8 *)0x0) {
      operator_delete((void *)local_178._0_8_,local_168 - local_178._0_8_);
    }
    ScalePaths<long,double>((Clipper2Lib *)local_178,param_5,local_58,local_58,&local_7c);
    Clipper2Lib::ClipperBase::AddPaths((ClipperBase *)&local_158,(Clipper2Lib *)local_178,1,0);
    uVar2 = local_178._8_8_;
    puVar6 = (undefined8 *)local_178._0_8_;
    if (local_178._8_8_ != local_178._0_8_) {
      do {
        pvVar1 = (void *)*puVar6;
        if (pvVar1 != (void *)0x0) {
          operator_delete(pvVar1,puVar6[2] - (long)pvVar1);
        }
        puVar6 = puVar6 + 3;
      } while ((undefined8 *)uVar2 != puVar6);
    }
    if ((undefined8 *)local_178._0_8_ != (undefined8 *)0x0) {
      operator_delete((void *)local_178._0_8_,local_168 - local_178._0_8_);
    }
    local_178 = (undefined1  [16])0x0;
    local_168 = 0;
    cVar3 = Clipper2Lib::ClipperBase::ExecuteInternal((ClipperBase *)&local_158,param_2,param_3,0);
    if (cVar3 != '\0') {
      Clipper2Lib::ClipperD::BuildPathsD((vector *)&local_158,(vector *)this);
    }
    Clipper2Lib::ClipperBase::CleanUp();
    std::
    vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
    ::~vector((vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
               *)local_178);
    local_158 = &PTR__ClipperD_0010e6a8;
    Clipper2Lib::ClipperBase::~ClipperBase((ClipperBase *)&local_158);
  }
  else {
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Clipper2Lib::ClipperD::AddSubject(std::vector<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >,
   std::allocator<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > > > const&) */

void __thiscall Clipper2Lib::ClipperD::AddSubject(ClipperD *this,vector *param_1)

{
  double dVar1;
  double dVar2;
  void *pvVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double *pdVar12;
  undefined8 *puVar13;
  long in_FS_OFFSET;
  double dVar14;
  undefined1 local_58 [16];
  long local_48;
  ClipperD *local_38;
  double dStack_30;
  double dStack_28;
  long local_20;
  
  dVar1 = *(double *)(this + 0x100);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_48 = 0;
  dVar8 = _LC68;
  dVar9 = _LC68;
  dVar7 = _LC69;
  dVar10 = _LC69;
  for (puVar13 = *(undefined8 **)param_1; puVar13 != *(undefined8 **)(param_1 + 8);
      puVar13 = puVar13 + 3) {
    pdVar6 = (double *)*puVar13;
    dVar2 = dVar10;
    while (dVar10 = dVar2, pdVar6 != (double *)puVar13[1]) {
      dVar14 = *pdVar6;
      pdVar12 = pdVar6 + 2;
      dVar4 = dVar14;
      if (dVar14 <= dVar8) {
        dVar4 = dVar8;
      }
      if (dVar7 <= dVar14) {
        dVar14 = dVar7;
      }
      dVar2 = pdVar6[1];
      dVar5 = dVar2;
      if (dVar2 <= dVar9) {
        dVar5 = dVar9;
      }
      pdVar6 = pdVar12;
      dVar7 = dVar14;
      dVar8 = dVar4;
      dVar9 = dVar5;
      if (dVar10 <= dVar2) {
        dVar2 = dVar10;
      }
    }
  }
  if ((((dVar7 * dVar1 < _LC70) || (__LC71 < dVar8 * dVar1)) || (dVar10 * dVar1 < _LC70)) ||
     (__LC71 < dVar9 * dVar1)) {
    *(uint *)(this + 0xdc) = *(uint *)(this + 0xdc) | 0x40;
  }
  else {
    std::
    vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
    ::reserve((vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
               *)local_58,
              ((long)*(undefined8 **)(param_1 + 8) - (long)*(undefined8 **)param_1 >> 3) *
              -0x5555555555555555);
    local_38 = this + 0xdc;
    dStack_30 = dVar1;
    dStack_28 = dVar1;
    std::
    transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>const*,std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>>,std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>>,Clipper2Lib::ScalePaths<long,double>(std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>const&,double,double,int&)::_lambda(auto:1_const&)_1_>
              (*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8),
               (vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                *)local_58);
  }
  Clipper2Lib::ClipperBase::AddPaths(this,local_58,0,0);
  uVar11 = local_58._8_8_;
  puVar13 = (undefined8 *)local_58._0_8_;
  if (local_58._8_8_ != local_58._0_8_) {
    do {
      pvVar3 = (void *)*puVar13;
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3,puVar13[2] - (long)pvVar3);
      }
      puVar13 = puVar13 + 3;
    } while ((undefined8 *)uVar11 != puVar13);
  }
  if ((undefined8 *)local_58._0_8_ != (undefined8 *)0x0) {
    operator_delete((void *)local_58._0_8_,local_48 - local_58._0_8_);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Clipper2Lib::RectClip64::RectClip64(Clipper2Lib::Rect<long> const&) */

void __thiscall Clipper2Lib::RectClip64::RectClip64(RectClip64 *this,Rect *param_1)

{
  vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *this_00;
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  void *pvVar10;
  RectClip64 *pRVar11;
  RectClip64 *pRVar12;
  long lVar13;
  long *plVar14;
  long in_FS_OFFSET;
  long lVar15;
  long local_38;
  long lStack_30;
  long local_20;
  
  this_00 = (vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *)
            (this + 0x20);
  uVar4 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined8 *)this = uVar4;
  *(undefined8 *)(this + 8) = uVar5;
  *(undefined8 *)(this + 0x10) = uVar6;
  *(undefined8 *)(this + 0x18) = uVar7;
  std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::reserve(this_00,4)
  ;
  local_38 = *(long *)param_1;
  lStack_30 = *(long *)(param_1 + 8);
  plVar8 = *(long **)(this + 0x28);
  plVar14 = *(long **)(this + 0x30);
  lVar15 = *(long *)(param_1 + 8);
  if (plVar8 == plVar14) {
    std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::
    _M_realloc_insert<Clipper2Lib::Point<long>>(this_00,plVar14,&local_38);
    lVar15 = *(long *)(param_1 + 8);
    plVar14 = *(long **)(this + 0x30);
    plVar9 = *(long **)(this + 0x28);
  }
  else {
    plVar9 = plVar8 + 2;
    *plVar8 = local_38;
    plVar8[1] = lStack_30;
    *(long **)(this + 0x28) = plVar9;
  }
  local_38 = *(long *)(param_1 + 0x10);
  if (plVar14 == plVar9) {
    lStack_30 = lVar15;
    std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::
    _M_realloc_insert<Clipper2Lib::Point<long>>(this_00,plVar14,&local_38);
    local_38 = *(long *)(param_1 + 0x10);
    plVar14 = *(long **)(this + 0x30);
    plVar8 = *(long **)(this + 0x28);
  }
  else {
    plVar8 = plVar9 + 2;
    *plVar9 = local_38;
    plVar9[1] = lVar15;
    *(long **)(this + 0x28) = plVar8;
  }
  lVar15 = *(long *)(param_1 + 0x18);
  if (plVar8 == plVar14) {
    lStack_30 = lVar15;
    std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::
    _M_realloc_insert<Clipper2Lib::Point<long>>(this_00,plVar14,&local_38);
    lVar15 = *(long *)(param_1 + 0x18);
    plVar14 = *(long **)(this + 0x30);
    plVar9 = *(long **)(this + 0x28);
  }
  else {
    plVar9 = plVar8 + 2;
    *plVar8 = local_38;
    plVar8[1] = lVar15;
    *(long **)(this + 0x28) = plVar9;
  }
  lVar13 = *(long *)param_1;
  local_38 = lVar13;
  lStack_30 = lVar15;
  if (plVar14 == plVar9) {
    std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::
    _M_realloc_insert<Clipper2Lib::Point<long>>(this_00,plVar14,&local_38);
    lVar15 = *(long *)(param_1 + 0x18);
    lVar13 = *(long *)param_1;
  }
  else {
    *plVar9 = lVar13;
    plVar9[1] = lVar15;
    *(long **)(this + 0x28) = plVar9 + 2;
  }
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x70) = 8;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
  *(long *)(this + 0x40) = (lVar15 + lVar2) / 2;
  *(undefined1 (*) [16])(this + 0x88) = (undefined1  [16])0x0;
  *(long *)(this + 0x38) = (lVar13 + lVar3) / 2;
  *(undefined1 (*) [16])(this + 0x98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
  pvVar10 = operator_new(0x40);
  *(void **)(this + 0x68) = pvVar10;
  puVar1 = (undefined8 *)((long)pvVar10 + (*(long *)(this + 0x70) * 4 - 4U & 0xfffffffffffffff8));
  pvVar10 = operator_new(0x1e0);
  *(undefined8 *)(this + 200) = 0;
  *puVar1 = pvVar10;
  *(undefined1 (*) [16])(this + 0xb8) = (undefined1  [16])0x0;
  *(void **)(this + 0x78) = pvVar10;
  *(void **)(this + 0x80) = pvVar10;
  *(long *)(this + 0x88) = (long)pvVar10 + 0x1e0;
  *(undefined8 **)(this + 0x90) = puVar1;
  *(long *)(this + 0xa8) = (long)pvVar10 + 0x1e0;
  *(undefined8 **)(this + 0xb0) = puVar1;
  *(void **)(this + 0x98) = pvVar10;
  *(void **)(this + 0xa0) = pvVar10;
  pRVar11 = this + 0xd0;
  do {
    *(undefined1 (*) [16])pRVar11 = (undefined1  [16])0x0;
    pRVar12 = pRVar11 + 0x30;
    *(undefined1 (*) [16])(pRVar11 + 0x10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pRVar11 + 0x20) = (undefined1  [16])0x0;
    pRVar11 = pRVar12;
  } while (pRVar12 != this + 400);
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector<int> >::_realloc(long) */

undefined8 __thiscall CowData<Vector<int>>::_realloc(CowData<Vector<int>> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector<int> >::resize<false>(long) */

undefined8 __thiscall CowData<Vector<int>>::resize<false>(CowData<Vector<int>> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar5 = 0;
    lVar7 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar5) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar5 * 0x10;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_0010ce30:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 0x10 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar10 = uVar8 + 1;
  if (lVar10 == 0) goto LAB_0010ce30;
  uVar9 = param_1;
  if (param_1 <= lVar5) {
    while (lVar5 = *(long *)this, lVar5 != 0) {
      if (*(ulong *)(lVar5 + -8) <= uVar9) {
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar5 = *(long *)this;
          if (lVar5 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar5 + -8) = param_1;
        return 0;
      }
      CowData<int>::_unref((CowData<int> *)(lVar5 + 8 + uVar9 * 0x10));
      uVar9 = uVar9 + 1;
    }
    goto LAB_0010ce86;
  }
  if (lVar10 == lVar7) {
LAB_0010cda3:
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
LAB_0010ce86:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar5 = puVar6[-1];
    if (param_1 <= lVar5) goto LAB_0010cd09;
  }
  else {
    if (lVar5 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010cda3;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar5 = 0;
  }
  puVar11 = puVar6 + param_1 * 2;
  puVar2 = puVar6 + lVar5 * 2;
  if (((int)puVar11 - (int)puVar2 & 0x10U) != 0) {
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
    if (puVar2 == puVar11) goto LAB_0010cd09;
  }
  do {
    puVar2[1] = 0;
    puVar3 = puVar2 + 4;
    puVar2[3] = 0;
    puVar2 = puVar3;
  } while (puVar3 != puVar11);
LAB_0010cd09:
  puVar6[-1] = param_1;
  return 0;
}



/* void std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >::_M_realloc_insert<Clipper2Lib::Point<double>
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::Point<double>*,
   std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> > > >,
   Clipper2Lib::Point<double>&&) */

void __thiscall
std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::
_M_realloc_insert<Clipper2Lib::Point<double>>
          (vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *this,
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
    if (0xfffffffffffffffe < uVar5) goto LAB_0010cf98;
    uVar7 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 4;
LAB_0010cfa2:
    puVar6 = (undefined8 *)operator_new(uVar7);
    uVar3 = param_3[1];
    lVar11 = uVar7 + (long)puVar6;
    puVar10 = puVar6 + 2;
    *(undefined8 *)((long)puVar6 + (long)puVar8) = *param_3;
    ((undefined8 *)((long)puVar6 + (long)puVar8))[1] = uVar3;
    if (param_2 != puVar2) {
LAB_0010cf0a:
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
    if (param_2 == puVar1) goto LAB_0010cf5c;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_0010cf98:
      uVar7 = 0x7ffffffffffffff0;
      goto LAB_0010cfa2;
    }
    if (uVar7 != 0) {
      if (0x7ffffffffffffff < uVar7) {
        uVar7 = 0x7ffffffffffffff;
      }
      uVar7 = uVar7 << 4;
      goto LAB_0010cfa2;
    }
    uVar3 = param_3[1];
    lVar11 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x10;
    *puVar8 = *param_3;
    puVar8[1] = uVar3;
    if (param_2 != puVar2) goto LAB_0010cf0a;
  }
  puVar8 = (undefined8 *)((long)puVar10 + ((long)puVar1 - (long)param_2));
  memcpy(puVar10,param_2,(long)puVar1 - (long)param_2);
LAB_0010cf5c:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = lVar11;
  return;
}



/* Clipper2Lib::PolyPathD::AddChild(std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > const&) */

undefined8 __thiscall Clipper2Lib::PolyPathD::AddChild(PolyPathD *this,vector *param_1)

{
  double dVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  PolyPathD *pPVar5;
  undefined1 auVar6 [8];
  undefined8 *puVar7;
  double *pdVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  double *pdVar12;
  undefined8 uVar13;
  long in_FS_OFFSET;
  double local_68;
  double dStack_60;
  undefined1 local_58 [8];
  double *pdStack_50;
  double *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar7 = (undefined8 *)operator_new(0x48);
  dVar1 = *(double *)(this + 0x28);
  local_48 = (double *)0x0;
  *(undefined1 (*) [16])(puVar7 + 6) = (undefined1  [16])0x0;
  local_58 = (undefined1  [8])0x0;
  pdStack_50 = (double *)0x0;
  puVar7[1] = this;
  *puVar7 = &PTR__PolyPathD_0010e670;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[8] = 0;
  puVar7[5] = dVar1;
  if (dVar1 == 0.0) {
    dVar1 = _LC11;
  }
  std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::reserve
            ((vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *)
             local_58,*(long *)(param_1 + 8) - *(long *)param_1 >> 4);
  plVar2 = *(long **)(param_1 + 8);
  plVar9 = *(long **)param_1;
  pdVar8 = local_48;
  if (plVar2 != plVar9) {
    do {
      while( true ) {
        local_68 = (double)*plVar9 * dVar1;
        dStack_60 = (double)plVar9[1] * dVar1;
        if (pdStack_50 != pdVar8) break;
        plVar9 = plVar9 + 2;
        std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::
        _M_realloc_insert<Clipper2Lib::Point<double>>
                  ((vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *)
                   local_58,pdStack_50,&local_68);
        pdVar8 = local_48;
        if (plVar2 == plVar9) goto LAB_0010d180;
      }
      pdVar12 = pdStack_50 + 2;
      plVar9 = plVar9 + 2;
      *pdStack_50 = local_68;
      pdStack_50[1] = dStack_60;
      pdStack_50 = pdVar12;
    } while (plVar2 != plVar9);
  }
LAB_0010d180:
  pvVar3 = (void *)puVar7[6];
  lVar4 = puVar7[8];
  puVar7[8] = pdVar8;
  puVar7[6] = local_58;
  puVar7[7] = pdStack_50;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3,lVar4 - (long)pvVar3);
  }
  local_58 = (undefined1  [8])puVar7;
  puVar11 = *(undefined8 **)(this + 0x18);
  if (puVar11 == *(undefined8 **)(this + 0x20)) {
    std::
    vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>
    ::
    _M_realloc_insert<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>
              ((vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>
                *)(this + 0x10),puVar11,
               (vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *)
               local_58);
    auVar6 = local_58;
    uVar13 = *(undefined8 *)(*(long *)(this + 0x18) + -8);
    if (local_58 != (undefined1  [8])0x0) {
      if (*(code **)(*(long *)local_58 + 8) == ~PolyPathD) {
        *(undefined ***)local_58 = &PTR__PolyPathD_0010e670;
        puVar7 = *(undefined8 **)((long)local_58 + 0x10);
        puVar11 = *(undefined8 **)((long)local_58 + 0x18);
        puVar10 = puVar7;
        if (puVar11 != puVar7) {
          do {
            while (pPVar5 = (PolyPathD *)*puVar10, pPVar5 == (PolyPathD *)0x0) {
LAB_0010d262:
              puVar10 = puVar10 + 1;
              if (puVar11 == puVar10) goto LAB_0010d290;
            }
            if (*(code **)(*(long *)pPVar5 + 8) == ~PolyPathD) {
              ~PolyPathD(pPVar5);
              operator_delete(pPVar5,0x48);
              goto LAB_0010d262;
            }
            (**(code **)(*(long *)pPVar5 + 8))();
            puVar10 = puVar10 + 1;
          } while (puVar11 != puVar10);
LAB_0010d290:
          *(undefined8 **)((long)auVar6 + 0x18) = puVar7;
        }
        pvVar3 = *(void **)((long)auVar6 + 0x30);
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3,*(long *)((long)auVar6 + 0x40) - (long)pvVar3);
        }
        puVar7 = *(undefined8 **)((long)auVar6 + 0x18);
        puVar11 = *(undefined8 **)((long)auVar6 + 0x10);
        if (puVar7 != puVar11) {
          do {
            while (pPVar5 = (PolyPathD *)*puVar11, pPVar5 == (PolyPathD *)0x0) {
LAB_0010d302:
              puVar11 = puVar11 + 1;
              if (puVar7 == puVar11) goto LAB_0010d330;
            }
            if (*(code **)(*(long *)pPVar5 + 8) == ~PolyPathD) {
              ~PolyPathD(pPVar5);
              operator_delete(pPVar5,0x48);
              goto LAB_0010d302;
            }
            (**(code **)(*(long *)pPVar5 + 8))();
            puVar11 = puVar11 + 1;
          } while (puVar7 != puVar11);
LAB_0010d330:
          puVar11 = *(undefined8 **)((long)auVar6 + 0x10);
        }
        if (puVar11 != (undefined8 *)0x0) {
          operator_delete(puVar11,*(long *)((long)auVar6 + 0x20) - (long)puVar11);
        }
        operator_delete((void *)auVar6,0x48);
      }
      else {
        (**(code **)(*(long *)local_58 + 8))(local_58);
      }
    }
  }
  else {
    *puVar11 = puVar7;
    uVar13 = *puVar11;
    *(undefined8 **)(this + 0x18) = puVar11 + 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}



/* std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > Clipper2Lib::ScalePaths<double,
   long>(std::vector<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   >, std::allocator<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   > > > const&, double, double, int&) */

Clipper2Lib * __thiscall
Clipper2Lib::ScalePaths<double,long>
          (Clipper2Lib *this,vector *param_1,double param_2,double param_3,int *param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long in_FS_OFFSET;
  double dVar7;
  double dVar8;
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double *local_48;
  long local_40;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  std::
  vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
  ::reserve((vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
             *)this,(lVar1 - lVar2 >> 3) * -0x5555555555555555);
  plVar3 = *(long **)(param_1 + 8);
  plVar5 = *(long **)param_1;
  if (plVar5 != plVar3) {
    do {
      local_48 = (double *)0x0;
      local_58 = (undefined1  [16])0x0;
      dVar8 = param_2;
      dVar7 = param_3;
      if (((param_2 == 0.0 || param_3 == 0.0) &&
          (*param_4 = *param_4 | 2, dVar8 = param_2, dVar7 = _LC11, param_2 == 0.0)) &&
         (dVar8 = _LC11, dVar7 = param_3, param_3 == 0.0)) {
        dVar7 = _LC11;
      }
      std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::reserve
                ((vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *)
                 local_58,plVar5[1] - *plVar5 >> 4);
      plVar4 = (long *)plVar5[1];
      for (plVar6 = (long *)*plVar5; plVar4 != plVar6; plVar6 = plVar6 + 2) {
        while( true ) {
          local_68 = (double)*plVar6 * dVar8;
          dStack_60 = (double)plVar6[1] * dVar7;
          if ((double *)local_58._8_8_ != local_48) break;
          plVar6 = plVar6 + 2;
          std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::
          _M_realloc_insert<Clipper2Lib::Point<double>>
                    ((vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>
                      *)local_58,local_58._8_8_,&local_68);
          if (plVar4 == plVar6) goto LAB_0010d510;
        }
        *(double *)local_58._8_8_ = local_68;
        *(double *)(local_58._8_8_ + 8) = dStack_60;
        local_58._8_8_ = (double *)(local_58._8_8_ + 0x10);
      }
LAB_0010d510:
      std::
      vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
      ::
      emplace_back<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>
                ((vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                  *)this,(vector *)local_58);
      if ((void *)local_58._0_8_ != (void *)0x0) {
        operator_delete((void *)local_58._0_8_,(long)local_48 - local_58._0_8_);
      }
      plVar5 = plVar5 + 3;
    } while (plVar3 != plVar5);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* Clipper2Lib::InflatePaths(std::vector<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >,
   std::allocator<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > > > const&, double, Clipper2Lib::JoinType, Clipper2Lib::EndType, double, int, double) */

Clipper2Lib * __thiscall
Clipper2Lib::InflatePaths
          (double param_2,undefined8 param_2_00,undefined8 param_3,Clipper2Lib *this,vector *param_1
          ,undefined4 param_6,undefined4 param_7,int param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  void *pvVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long in_FS_OFFSET;
  double dVar13;
  int local_13c;
  undefined1 local_138 [16];
  long local_128;
  undefined4 local_118 [2];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined2 local_70;
  undefined1 local_68 [16];
  code *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_13c = 0;
  if (param_8 + 8U < 0x11) {
    if (param_2 == 0.0) goto LAB_0010d658;
    dVar13 = pow(_LC12,(double)param_8);
    local_110 = (undefined1  [16])0x0;
    local_100 = (undefined1  [16])0x0;
    local_f0 = (undefined1  [16])0x0;
    local_e0 = (undefined1  [16])0x0;
    local_d0 = (undefined1  [16])0x0;
    local_c0 = (undefined1  [16])0x0;
    local_b0 = (undefined1  [16])0x0;
    local_a0 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_70 = 0;
    local_118[0] = 0;
    local_90 = 0;
    local_88 = 1;
    local_58 = (code *)0x0;
    local_50 = 0;
    local_80 = param_2_00;
    uStack_78 = param_3;
    ScalePaths<long,double>((Clipper2Lib *)local_138,param_1,dVar13,dVar13,&local_13c);
    Clipper2Lib::ClipperOffset::AddPaths
              ((vector *)local_118,(Clipper2Lib *)local_138,param_6,param_7);
    uVar2 = local_138._8_8_;
    puVar10 = (undefined8 *)local_138._0_8_;
    if (local_138._8_8_ != local_138._0_8_) {
      do {
        pvVar5 = (void *)*puVar10;
        if (pvVar5 != (void *)0x0) {
          operator_delete(pvVar5,puVar10[2] - (long)pvVar5);
        }
        puVar10 = puVar10 + 3;
      } while ((undefined8 *)uVar2 != puVar10);
    }
    if ((undefined8 *)local_138._0_8_ != (undefined8 *)0x0) {
      operator_delete((void *)local_138._0_8_,local_128 - local_138._0_8_);
    }
    if (local_13c == 0) {
      local_128 = 0;
      local_138 = (undefined1  [16])0x0;
      Clipper2Lib::ClipperOffset::Execute(param_2 * dVar13,(vector *)local_118);
      ScalePaths<double,long>(this,(vector *)local_138,_LC11 / dVar13,_LC11 / dVar13,&local_13c);
      uVar2 = local_138._8_8_;
      puVar10 = (undefined8 *)local_138._0_8_;
      if (local_138._8_8_ != local_138._0_8_) {
        do {
          pvVar5 = (void *)*puVar10;
          if (pvVar5 != (void *)0x0) {
            operator_delete(pvVar5,puVar10[2] - (long)pvVar5);
          }
          puVar10 = puVar10 + 3;
        } while ((undefined8 *)uVar2 != puVar10);
      }
      if ((undefined8 *)local_138._0_8_ != (undefined8 *)0x0) {
        operator_delete((void *)local_138._0_8_,local_128 - local_138._0_8_);
      }
    }
    else {
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    }
    uVar2 = local_a0._0_8_;
    uVar3 = local_a0._8_8_;
    plVar11 = (long *)local_a0._0_8_;
    if (local_a0._0_8_ != local_a0._8_8_) {
      do {
        puVar10 = (undefined8 *)plVar11[1];
        puVar9 = (undefined8 *)*plVar11;
        if (puVar10 != puVar9) {
          do {
            pvVar5 = (void *)*puVar9;
            if (pvVar5 != (void *)0x0) {
              operator_delete(pvVar5,puVar9[2] - (long)pvVar5);
            }
            puVar9 = puVar9 + 3;
          } while (puVar10 != puVar9);
          puVar9 = (undefined8 *)*plVar11;
        }
        if (puVar9 != (undefined8 *)0x0) {
          operator_delete(puVar9,plVar11[2] - (long)puVar9);
        }
        plVar11 = plVar11 + 7;
      } while ((long *)uVar3 != plVar11);
      local_a0._8_8_ = uVar2;
    }
    if (local_e0._0_8_ != local_e0._8_8_) {
      local_e0._8_8_ = local_e0._0_8_;
    }
    if (local_58 != (code *)0x0) {
      (*local_58)(local_68,local_68,3);
    }
    uVar2 = local_a0._8_8_;
    plVar11 = (long *)local_a0._0_8_;
    if (local_a0._8_8_ != local_a0._0_8_) {
      do {
        puVar10 = (undefined8 *)plVar11[1];
        puVar9 = (undefined8 *)*plVar11;
        if (puVar10 != puVar9) {
          do {
            pvVar5 = (void *)*puVar9;
            if (pvVar5 != (void *)0x0) {
              operator_delete(pvVar5,puVar9[2] - (long)pvVar5);
            }
            puVar9 = puVar9 + 3;
          } while (puVar10 != puVar9);
          puVar9 = (undefined8 *)*plVar11;
        }
        if (puVar9 != (undefined8 *)0x0) {
          operator_delete(puVar9,plVar11[2] - (long)puVar9);
        }
        plVar11 = plVar11 + 7;
      } while ((long *)uVar2 != plVar11);
    }
    if ((long *)local_a0._0_8_ != (long *)0x0) {
      operator_delete((void *)local_a0._0_8_,local_90 - local_a0._0_8_);
    }
    if ((void *)local_d0._8_8_ != (void *)0x0) {
      operator_delete((void *)local_d0._8_8_,local_c0._8_8_ - local_d0._8_8_);
    }
    if ((void *)local_e0._0_8_ != (void *)0x0) {
      operator_delete((void *)local_e0._0_8_,local_d0._0_8_ - local_e0._0_8_);
    }
  }
  else {
    local_13c = 1;
    if (param_2 == 0.0) {
LAB_0010d658:
      uVar8 = *(long *)(param_1 + 8) - *(long *)param_1;
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined1 (*) [16])this = (undefined1  [16])0x0;
      if (uVar8 == 0) {
        pauVar4 = (undefined1 (*) [16])0x0;
      }
      else {
        if (0x7ffffffffffffff8 < uVar8) {
LAB_0010db1c:
          std::__throw_bad_array_new_length();
LAB_0010db21:
          std::__throw_bad_alloc();
          goto LAB_0010db26;
        }
        pauVar4 = (undefined1 (*) [16])operator_new(uVar8);
      }
      *(ulong *)(this + 0x10) = uVar8 + (long)pauVar4;
      *(undefined1 (**) [16])this = pauVar4;
      *(undefined1 (**) [16])(this + 8) = pauVar4;
      plVar11 = *(long **)(param_1 + 8);
      for (plVar12 = *(long **)param_1; plVar11 != plVar12; plVar12 = plVar12 + 3) {
        uVar8 = plVar12[1] - *plVar12;
        *(undefined8 *)pauVar4[1] = 0;
        *pauVar4 = (undefined1  [16])0x0;
        if (uVar8 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (0x7ffffffffffffff0 < uVar8) {
            if (-1 < (long)uVar8) goto LAB_0010db21;
            goto LAB_0010db1c;
          }
          pvVar5 = operator_new(uVar8);
        }
        *(ulong *)pauVar4[1] = uVar8 + (long)pvVar5;
        *(void **)*pauVar4 = pvVar5;
        *(void **)(*pauVar4 + 8) = pvVar5;
        lVar1 = *plVar12;
        if (plVar12[1] != lVar1) {
          lVar6 = plVar12[1] - lVar1;
          lVar7 = 0;
          do {
            uVar2 = ((undefined8 *)(lVar1 + lVar7))[1];
            *(undefined8 *)((long)pvVar5 + lVar7) = *(undefined8 *)(lVar1 + lVar7);
            ((undefined8 *)((long)pvVar5 + lVar7))[1] = uVar2;
            lVar7 = lVar7 + 0x10;
          } while (lVar6 != lVar7);
          pvVar5 = (void *)((long)pvVar5 + lVar6);
        }
        *(void **)(*pauVar4 + 8) = pvVar5;
        pauVar4 = (undefined1 (*) [16])(pauVar4[1] + 8);
      }
      *(undefined1 (**) [16])(this + 8) = pauVar4;
    }
    else {
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
LAB_0010db26:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Clipper2Lib::RectClip(Clipper2Lib::Rect<double> const&,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > const&, int) */

Clipper2Lib * __thiscall
Clipper2Lib::RectClip(Clipper2Lib *this,Rect *param_1,vector *param_2,int param_3)

{
  double dVar1;
  void *pvVar2;
  void **ppvVar3;
  void **ppvVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int local_23c;
  undefined8 *local_238;
  undefined8 *local_230;
  long local_228;
  undefined8 *local_218;
  undefined8 *local_210;
  long local_208;
  long local_1f8;
  long local_1f0;
  long local_1e8;
  long local_1e0;
  RectClip64 local_1d8 [32];
  void *local_1b8;
  long local_1a8;
  void *local_170;
  long local_168;
  undefined8 *local_148;
  long local_128;
  void *local_120;
  long local_110;
  void *local_108 [24];
  void *local_48 [2];
  long local_38;
  long local_30;
  
  dVar9 = *(double *)(param_1 + 0x18);
  dVar8 = *(double *)(param_1 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (dVar8 < dVar9) {
    dVar1 = *(double *)(param_1 + 0x10);
    dVar7 = *(double *)param_1;
    if (((dVar7 < dVar1) && (*(long *)(param_2 + 8) != *(long *)param_2)) &&
       (local_23c = 0, param_3 + 8U < 0x11)) {
      dVar6 = pow(_LC12,(double)param_3);
      dVar7 = round(dVar7 * dVar6);
      local_1f8 = (long)dVar7;
      dVar8 = round(dVar8 * dVar6);
      local_1f0 = (long)dVar8;
      dVar8 = round(dVar1 * dVar6);
      local_1e8 = (long)dVar8;
      dVar9 = round(dVar9 * dVar6);
      local_1e0 = (long)dVar9;
      RectClip64::RectClip64(local_1d8,(Rect *)&local_1f8);
      ScalePaths<long,double>((Clipper2Lib *)&local_238,param_2,dVar6,dVar6,&local_23c);
      if (local_23c == 0) {
        dVar6 = _LC11 / dVar6;
        Clipper2Lib::RectClip64::Execute((vector *)&local_218);
        ScalePaths<double,long>(this,(vector *)&local_218,dVar6,dVar6,&local_23c);
        for (puVar5 = local_218; local_210 != puVar5; puVar5 = puVar5 + 3) {
          pvVar2 = (void *)*puVar5;
          if (pvVar2 != (void *)0x0) {
            operator_delete(pvVar2,puVar5[2] - (long)pvVar2);
          }
        }
        puVar5 = local_238;
        if (local_218 != (undefined8 *)0x0) {
          operator_delete(local_218,local_208 - (long)local_218);
          puVar5 = local_238;
        }
      }
      else {
        *(undefined8 *)(this + 0x10) = 0;
        *(undefined1 (*) [16])this = (undefined1  [16])0x0;
        puVar5 = local_238;
      }
      for (; local_230 != puVar5; puVar5 = puVar5 + 3) {
        pvVar2 = (void *)*puVar5;
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2,puVar5[2] - (long)pvVar2);
        }
      }
      if (local_238 != (undefined8 *)0x0) {
        operator_delete(local_238,local_228 - (long)local_238);
      }
      if (local_48[0] != (void *)0x0) {
        operator_delete(local_48[0],local_38 - (long)local_48[0]);
      }
      ppvVar3 = local_48;
      do {
        pvVar2 = ppvVar3[-3];
        ppvVar4 = ppvVar3 + -3;
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2,(long)ppvVar3[-1] - (long)pvVar2);
        }
        ppvVar3 = ppvVar4;
      } while (ppvVar4 != local_108);
      if (local_120 != (void *)0x0) {
        operator_delete(local_120,local_110 - (long)local_120);
      }
      if (local_170 != (void *)0x0) {
        for (puVar5 = local_148; puVar5 < (undefined8 *)(local_128 + 8U); puVar5 = puVar5 + 1) {
          operator_delete((void *)*puVar5,0x1e0);
        }
        operator_delete(local_170,local_168 * 8);
      }
      if (local_1b8 != (void *)0x0) {
        operator_delete(local_1b8,local_1a8 - (long)local_1b8);
      }
      goto LAB_0010db87;
    }
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
LAB_0010db87:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NavMeshGenerator2D::singleton */

void NavMeshGenerator2D::_GLOBAL__sub_I_singleton(void)

{
  undefined8 uVar1;
  
  uVar1 = _LC83;
  _baking_navmeshes = (undefined1  [16])0x0;
  _DAT_00105210 = (undefined1  [16])0x0;
  _DAT_00105220 = _LC83;
  __cxa_atexit(HashSet<Ref<NavigationPolygon>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationPolygon>>>
               ::~HashSet,&baking_navmeshes,&__dso_handle);
  generator_tasks._40_8_ = uVar1;
  generator_tasks._8_16_ = (undefined1  [16])0x0;
  generator_tasks._24_16_ = (undefined1  [16])0x0;
  __cxa_atexit(HashMap<long,NavMeshGenerator2D::NavMeshGeneratorTask2D*,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,NavMeshGenerator2D::NavMeshGeneratorTask2D*>>>
               ::~HashMap,generator_tasks,&__dso_handle);
  _generator_parsers = 0;
  DAT_001051a8 = 0;
  __cxa_atexit(LocalVector<NavMeshGeometryParser2D*,unsigned_int,false,false>::~LocalVector,
               &generator_parsers,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > >::~vector() */

void __thiscall
std::
vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
::~vector(vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
          *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> > >::~vector()
    */

void __thiscall
std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::~vector
          (vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Clipper2Lib::ClipperD::ClipperD(int) */

void __thiscall Clipper2Lib::ClipperD::ClipperD(ClipperD *this,int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<long, NavMeshGenerator2D::NavMeshGeneratorTask2D*, HashMapHasherDefault,
   HashMapComparatorDefault<long>, DefaultTypedAllocator<HashMapElement<long,
   NavMeshGenerator2D::NavMeshGeneratorTask2D*> > >::~HashMap() */

void __thiscall
HashMap<long,NavMeshGenerator2D::NavMeshGeneratorTask2D*,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,NavMeshGenerator2D::NavMeshGeneratorTask2D*>>>
::~HashMap(HashMap<long,NavMeshGenerator2D::NavMeshGeneratorTask2D*,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,NavMeshGenerator2D::NavMeshGeneratorTask2D*>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Clipper2Lib::ClipperD::~ClipperD() */

void __thiscall Clipper2Lib::ClipperD::~ClipperD(ClipperD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* LocalVector<NavMeshGeometryParser2D*, unsigned int, false, false>::~LocalVector() */

void __thiscall
LocalVector<NavMeshGeometryParser2D*,unsigned_int,false,false>::~LocalVector
          (LocalVector<NavMeshGeometryParser2D*,unsigned_int,false,false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Clipper2Lib::RectClip64::RectClip64(Clipper2Lib::Rect<long> const&) */

void __thiscall Clipper2Lib::RectClip64::RectClip64(RectClip64 *this,Rect *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* NavigationPolygon::~NavigationPolygon() */

void __thiscall NavigationPolygon::~NavigationPolygon(NavigationPolygon *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashSet<Ref<NavigationPolygon>, HashMapHasherDefault,
   HashMapComparatorDefault<Ref<NavigationPolygon> > >::~HashSet() */

void __thiscall
HashSet<Ref<NavigationPolygon>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationPolygon>>>
::~HashSet(HashSet<Ref<NavigationPolygon>,HashMapHasherDefault,HashMapComparatorDefault<Ref<NavigationPolygon>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* NavigationMesh::~NavigationMesh() */

void __thiscall NavigationMesh::~NavigationMesh(NavigationMesh *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D() */

void __thiscall
NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D
          (NavigationMeshSourceGeometryData2D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Clipper2Lib::PolyPathD::~PolyPathD() */

void __thiscall Clipper2Lib::PolyPathD::~PolyPathD(PolyPathD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<TPPLPoly, DefaultAllocator>::~List() */

void __thiscall List<TPPLPoly,DefaultAllocator>::~List(List<TPPLPoly,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}




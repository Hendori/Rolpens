
/* Range::get_value() const */

undefined8 __thiscall Range::get_value(Range *this)

{
  return **(undefined8 **)(this + 0x9c8);
}



/* Range::get_min() const */

undefined8 __thiscall Range::get_min(Range *this)

{
  return *(undefined8 *)(*(long *)(this + 0x9c8) + 8);
}



/* Range::get_max() const */

undefined8 __thiscall Range::get_max(Range *this)

{
  return *(undefined8 *)(*(long *)(this + 0x9c8) + 0x10);
}



/* Range::get_step() const */

undefined8 __thiscall Range::get_step(Range *this)

{
  return *(undefined8 *)(*(long *)(this + 0x9c8) + 0x18);
}



/* Range::get_page() const */

undefined8 __thiscall Range::get_page(Range *this)

{
  return *(undefined8 *)(*(long *)(this + 0x9c8) + 0x20);
}



/* Range::set_use_rounded_values(bool) */

void __thiscall Range::set_use_rounded_values(Range *this,bool param_1)

{
  this[0x9d0] = (Range)param_1;
  return;
}



/* Range::is_using_rounded_values() const */

Range __thiscall Range::is_using_rounded_values(Range *this)

{
  return this[0x9d0];
}



/* Range::is_ratio_exp() const */

undefined1 __thiscall Range::is_ratio_exp(Range *this)

{
  return *(undefined1 *)(*(long *)(this + 0x9c8) + 0x28);
}



/* Range::set_allow_greater(bool) */

void __thiscall Range::set_allow_greater(Range *this,bool param_1)

{
  *(bool *)(*(long *)(this + 0x9c8) + 0x29) = param_1;
  return;
}



/* Range::is_greater_allowed() const */

undefined1 __thiscall Range::is_greater_allowed(Range *this)

{
  return *(undefined1 *)(*(long *)(this + 0x9c8) + 0x29);
}



/* Range::set_allow_lesser(bool) */

void __thiscall Range::set_allow_lesser(Range *this,bool param_1)

{
  *(bool *)(*(long *)(this + 0x9c8) + 0x2a) = param_1;
  return;
}



/* Range::is_lesser_allowed() const */

undefined1 __thiscall Range::is_lesser_allowed(Range *this)

{
  return *(undefined1 *)(*(long *)(this + 0x9c8) + 0x2a);
}



/* Range::set_exp_ratio(bool) */

void __thiscall Range::set_exp_ratio(Range *this,bool param_1)

{
  if ((bool)*(char *)(*(long *)(this + 0x9c8) + 0x28) != param_1) {
    *(bool *)(*(long *)(this + 0x9c8) + 0x28) = param_1;
    Node::update_configuration_warnings();
    return;
  }
  return;
}



/* Range::get_as_ratio() const */

double __thiscall Range::get_as_ratio(Range *this)

{
  double __x;
  double *pdVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_28;
  double local_20;
  
  pdVar1 = *(double **)(this + 0x9c8);
  dVar4 = pdVar1[1];
  __x = pdVar1[2];
  if (__x != dVar4) {
    dVar5 = _LC0;
    if (_LC0 <= ABS(__x) * _LC0) {
      dVar5 = ABS(__x) * _LC0;
    }
    if (dVar5 <= ABS(__x - dVar4)) {
      if ((*(char *)(pdVar1 + 5) == '\0') || (dVar4 < 0.0)) {
        dVar5 = *pdVar1;
        dVar3 = dVar4;
        if ((dVar4 <= dVar5) && (dVar3 = __x, dVar5 <= __x)) {
          dVar3 = dVar5;
        }
        dVar4 = ((double)(float)dVar3 - dVar4) / (__x - dVar4);
      }
      else {
        if (dVar4 == 0.0) {
          local_20 = 0.0;
          local_28 = _LC3;
        }
        else {
          local_20 = log(dVar4);
          local_28 = _LC3;
          local_20 = local_20 / _LC3;
        }
        _LC3 = local_28;
        dVar3 = log(__x);
        dVar5 = *pdVar1;
        if ((dVar4 <= dVar5) && (dVar4 = __x, dVar5 <= __x)) {
          dVar4 = dVar5;
        }
        fVar2 = logf((float)dVar4);
        dVar4 = ((double)fVar2 / local_28 - local_20) / (dVar3 / local_28 - local_20);
      }
      if (dVar4 < 0.0) {
        return 0.0;
      }
      if (dVar4 <= _LC2) {
        return dVar4;
      }
    }
  }
  return _LC2;
}



/* Range::_set_value_no_signal(double) [clone .part.0] [clone .isra.0] */

void Range::_set_value_no_signal(double param_1)

{
  char in_SIL;
  double *in_RDI;
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = in_RDI[3];
  if (0.0 < dVar2) {
    dVar3 = in_RDI[1];
    dVar1 = round((param_1 - dVar3) / dVar2);
    param_1 = dVar2 * dVar1 + dVar3;
  }
  if (in_SIL != '\0') {
    param_1 = round(param_1);
  }
  dVar2 = param_1;
  if ((*(char *)((long)in_RDI + 0x29) == '\0') &&
     (dVar2 = in_RDI[2] - in_RDI[4], param_1 <= in_RDI[2] - in_RDI[4])) {
    dVar2 = param_1;
  }
  dVar3 = dVar2;
  if ((*(char *)((long)in_RDI + 0x2a) == '\0') && (dVar3 = in_RDI[1], in_RDI[1] <= dVar2)) {
    dVar3 = dVar2;
  }
  if (dVar3 != *in_RDI) {
    *in_RDI = dVar3;
  }
  return;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 4;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* HashSet<Range*, HashMapHasherDefault, HashMapComparatorDefault<Range*> >::erase(Range* const&)
   [clone .isra.0] */

void __thiscall
HashSet<Range*,HashMapHasherDefault,HashMapComparatorDefault<Range*>>::erase
          (HashSet<Range*,HashMapHasherDefault,HashMapComparatorDefault<Range*>> *this,
          Range **param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar31;
  ulong uVar32;
  uint uVar33;
  uint *puVar34;
  int iVar35;
  uint uVar36;
  long lVar37;
  ulong uVar38;
  uint *puVar39;
  ulong uVar40;
  uint *puVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  
  lVar6 = *(long *)this;
  if ((lVar6 != 0) && (*(int *)(this + 0x24) != 0)) {
    lVar7 = *(long *)(this + 0x18);
    uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4);
    uVar42 = CONCAT44(0,uVar31);
    lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
    uVar32 = (long)*param_1 * 0x3ffff - 1;
    uVar32 = (uVar32 ^ uVar32 >> 0x1f) * 0x15;
    uVar32 = (uVar32 ^ uVar32 >> 0xb) * 0x41;
    uVar32 = uVar32 >> 0x16 ^ uVar32;
    uVar40 = uVar32 & 0xffffffff;
    if ((int)uVar32 == 0) {
      uVar40 = 1;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar40 * lVar8;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar42;
    lVar37 = SUB168(auVar11 * auVar21,8);
    uVar44 = *(uint *)(lVar7 + lVar37 * 4);
    iVar35 = SUB164(auVar11 * auVar21,8);
    if (uVar44 != 0) {
      uVar33 = 0;
      do {
        if ((uint)uVar40 == uVar44) {
          lVar9 = *(long *)(this + 8);
          uVar44 = *(uint *)(lVar9 + lVar37 * 4);
          uVar32 = (ulong)uVar44;
          if (*param_1 == *(Range **)(lVar6 + uVar32 * 8)) {
            lVar10 = *(long *)(this + 0x10);
            puVar1 = (uint *)(lVar10 + uVar32 * 4);
            uVar33 = *puVar1;
            uVar40 = (ulong)uVar33;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)(uVar33 + 1) * lVar8;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar42;
            lVar37 = SUB168(auVar15 * auVar25,8) * 4;
            uVar36 = SUB164(auVar15 * auVar25,8);
            uVar43 = (ulong)uVar36;
            puVar39 = (uint *)(lVar7 + lVar37);
            if ((*puVar39 == 0) ||
               (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)*puVar39 * lVar8, auVar26._8_8_ = 0,
               auVar26._0_8_ = uVar42, auVar17._8_8_ = 0,
               auVar17._0_8_ = (ulong)((uVar36 + uVar31) - SUB164(auVar16 * auVar26,8)) * lVar8,
               auVar27._8_8_ = 0, auVar27._0_8_ = uVar42, SUB164(auVar17 * auVar27,8) == 0)) {
              uVar43 = (ulong)uVar33;
            }
            else {
              while( true ) {
                puVar34 = (uint *)(lVar37 + lVar9);
                puVar4 = (uint *)(lVar9 + uVar40 * 4);
                puVar41 = (uint *)(uVar40 * 4 + lVar7);
                puVar2 = (undefined4 *)(lVar10 + (ulong)*puVar34 * 4);
                puVar3 = (undefined4 *)(lVar10 + (ulong)*puVar4 * 4);
                uVar5 = *puVar3;
                *puVar3 = *puVar2;
                *puVar2 = uVar5;
                uVar33 = *puVar39;
                *puVar39 = *puVar41;
                *puVar41 = uVar33;
                uVar33 = *puVar34;
                *puVar34 = *puVar4;
                *puVar4 = uVar33;
                auVar20._8_8_ = 0;
                auVar20._0_8_ = (ulong)((int)uVar43 + 1) * lVar8;
                auVar30._8_8_ = 0;
                auVar30._0_8_ = uVar42;
                uVar38 = SUB168(auVar20 * auVar30,8);
                lVar37 = uVar38 * 4;
                puVar39 = (uint *)(lVar7 + lVar37);
                if ((*puVar39 == 0) ||
                   (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)*puVar39 * lVar8, auVar28._8_8_ = 0,
                   auVar28._0_8_ = uVar42, auVar19._8_8_ = 0,
                   auVar19._0_8_ =
                        (ulong)((SUB164(auVar20 * auVar30,8) + uVar31) - SUB164(auVar18 * auVar28,8)
                               ) * lVar8, auVar29._8_8_ = 0, auVar29._0_8_ = uVar42,
                   SUB164(auVar19 * auVar29,8) == 0)) break;
                uVar40 = uVar43;
                uVar43 = uVar38 & 0xffffffff;
              }
            }
            *(undefined4 *)(lVar7 + uVar43 * 4) = 0;
            uVar31 = *(int *)(this + 0x24) - 1;
            *(uint *)(this + 0x24) = uVar31;
            if (uVar31 <= uVar44) {
              return;
            }
            uVar33 = *(uint *)(lVar10 + (ulong)uVar31 * 4);
            *(undefined8 *)(lVar6 + uVar32 * 8) = *(undefined8 *)(lVar6 + (ulong)uVar31 * 8);
            *puVar1 = uVar33;
            *(uint *)(lVar9 + (ulong)*(uint *)(lVar10 + (ulong)*(uint *)(this + 0x24) * 4) * 4) =
                 uVar44;
            return;
          }
        }
        uVar33 = uVar33 + 1;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)(iVar35 + 1) * lVar8;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar42;
        lVar37 = SUB168(auVar12 * auVar22,8);
        uVar44 = *(uint *)(lVar7 + lVar37 * 4);
        iVar35 = SUB164(auVar12 * auVar22,8);
      } while ((uVar44 != 0) &&
              (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar44 * lVar8, auVar23._8_8_ = 0,
              auVar23._0_8_ = uVar42, auVar14._8_8_ = 0,
              auVar14._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar13 * auVar23,8)) * lVar8,
              auVar24._8_8_ = 0, auVar24._0_8_ = uVar42, uVar33 <= SUB164(auVar14 * auVar24,8)));
    }
  }
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

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
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  lVar2 = *(long *)(param_1 + 8);
  *puVar3 = 0;
  puVar3[6] = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = *(undefined4 *)param_1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  if (*(long *)(puVar3 + 8) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
  }
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



/* Range::_value_changed_notify() */

void __thiscall Range::_value_changed_notify(Range *this)

{
  long lVar1;
  char cVar2;
  long in_FS_OFFSET;
  Variant *local_68 [2];
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)this + 0x358))(**(undefined8 **)(this + 0x9c8));
  lVar1 = SceneStringNames::singleton + 0x280;
  Variant::Variant((Variant *)local_58,**(double **)(this + 0x9c8));
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  local_68[0] = (Variant *)local_58;
  (**(code **)(*(long *)this + 0xd0))(this,lVar1,local_68,1);
  if (Variant::needs_deinit[(int)local_40] == '\0') {
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  CanvasItem::queue_redraw();
  return;
}



/* Range::Shared::emit_value_changed() */

void __thiscall Range::Shared::emit_value_changed(Shared *this)

{
  int iVar1;
  long lVar2;
  Range *this_00;
  long lVar3;
  
  iVar1 = *(int *)(this + 0x54);
  if (iVar1 != 0) {
    lVar2 = *(long *)(this + 0x30);
    lVar3 = 0;
    while( true ) {
      this_00 = *(Range **)(lVar2 + lVar3 * 8);
      if (((byte)this_00[0x2fa] & 0x40) != 0) {
        _value_changed_notify(this_00);
      }
      if (iVar1 <= (int)lVar3 + 1) break;
      lVar3 = lVar3 + 1;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Range::set_value(double) */

void __thiscall Range::set_value(Range *this,double param_1)

{
  double dVar1;
  Shared *this_00;
  double dVar2;
  
  this_00 = *(Shared **)(this + 0x9c8);
  dVar1 = *(double *)this_00;
  dVar2 = dVar1;
  if ((double)((ulong)param_1 & __LC10) <= _LC11) {
    _set_value_no_signal(param_1);
    dVar2 = *(double *)this_00;
  }
  if (dVar2 != dVar1) {
    Shared::emit_value_changed(this_00);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Range::set_as_ratio(double) */

void __thiscall Range::set_as_ratio(Range *this,double param_1)

{
  Shared *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  double __x;
  double dVar4;
  
  this_00 = *(Shared **)(this + 0x9c8);
  __x = *(double *)(this_00 + 8);
  if ((this_00[0x28] == (Shared)0x0) || (__x < 0.0)) {
    dVar4 = *(double *)(this_00 + 0x10);
    dVar3 = *(double *)(this_00 + 0x18);
    dVar2 = (dVar4 - __x) * param_1;
    if (dVar3 <= 0.0) {
      dVar2 = dVar2 + __x;
    }
    else {
      dVar2 = round(dVar2 / dVar3);
      dVar2 = dVar2 * dVar3 + __x;
    }
  }
  else {
    dVar3 = 0.0;
    if (__x != 0.0) {
      dVar3 = log(__x);
      dVar3 = dVar3 / _LC3;
    }
    dVar2 = _LC3;
    dVar4 = *(double *)(this_00 + 0x10);
    dVar1 = log(dVar4);
    dVar2 = pow(_LC12,dVar3 + (dVar1 / dVar2 - dVar3) * param_1);
  }
  if ((__x <= dVar2) && (__x = dVar4, dVar2 <= dVar4)) {
    __x = dVar2;
  }
  dVar4 = *(double *)this_00;
  dVar3 = dVar4;
  if ((double)((ulong)__x & __LC10) <= _LC11) {
    _set_value_no_signal(__x);
    dVar3 = *(double *)this_00;
  }
  if (dVar4 == dVar3) {
    return;
  }
  Shared::emit_value_changed(this_00);
  return;
}



/* Range::_changed_notify(char const*) */

void Range::_changed_notify(char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)param_1 + 0xd0))(param_1,CoreStringNames::singleton + 8,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::queue_redraw();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Range::Shared::emit_changed(char const*) */

void Range::Shared::emit_changed(char *param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    lVar4 = 0;
    while( true ) {
      pcVar3 = *(char **)(lVar2 + lVar4 * 8);
      if ((pcVar3[0x2fa] & 0x40U) != 0) {
        _changed_notify(pcVar3);
      }
      if (iVar1 <= (int)lVar4 + 1) break;
      lVar4 = lVar4 + 1;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Range::set_min(double) */

void __thiscall Range::set_min(Range *this,double param_1)

{
  double dVar1;
  Shared *this_00;
  double dVar2;
  double dVar3;
  
  this_00 = *(Shared **)(this + 0x9c8);
  if (param_1 == *(double *)(this_00 + 8)) {
    return;
  }
  dVar1 = *(double *)(this_00 + 0x20);
  *(double *)(this_00 + 8) = param_1;
  dVar2 = *(double *)(this_00 + 0x10);
  if (*(double *)(this_00 + 0x10) <= param_1) {
    dVar2 = param_1;
  }
  *(double *)(this_00 + 0x10) = dVar2;
  if (dVar1 < 0.0) {
    dVar3 = 0.0;
  }
  else {
    dVar3 = dVar2 - param_1;
    if (dVar1 <= dVar2 - param_1) {
      dVar3 = dVar1;
    }
  }
  dVar1 = *(double *)this_00;
  *(double *)(this_00 + 0x20) = dVar3;
  dVar2 = dVar1;
  if ((double)((ulong)dVar1 & __LC10) <= _LC11) {
    _set_value_no_signal(dVar1);
    dVar2 = *(double *)this_00;
  }
  if (dVar1 != dVar2) {
    Shared::emit_value_changed(this_00);
    this_00 = *(Shared **)(this + 0x9c8);
  }
  Shared::emit_changed((char *)this_00);
  Node::update_configuration_warnings();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Range::set_max(double) */

void __thiscall Range::set_max(Range *this,double param_1)

{
  double dVar1;
  double dVar2;
  Shared *this_00;
  double dVar3;
  double dVar4;
  
  this_00 = *(Shared **)(this + 0x9c8);
  dVar1 = *(double *)(this_00 + 8);
  if (param_1 <= dVar1) {
    param_1 = dVar1;
  }
  if (param_1 == *(double *)(this_00 + 0x10)) {
    return;
  }
  dVar4 = *(double *)(this_00 + 0x20);
  *(double *)(this_00 + 0x10) = param_1;
  dVar2 = _LC11;
  if (dVar4 < 0.0) {
    dVar3 = 0.0;
  }
  else {
    dVar3 = param_1 - dVar1;
    if (dVar4 <= param_1 - dVar1) {
      dVar3 = dVar4;
    }
  }
  dVar1 = *(double *)this_00;
  *(double *)(this_00 + 0x20) = dVar3;
  dVar4 = dVar1;
  if ((double)((ulong)dVar1 & __LC10) <= dVar2) {
    _set_value_no_signal(dVar1);
    dVar4 = *(double *)this_00;
  }
  if (dVar1 != dVar4) {
    Shared::emit_value_changed(this_00);
    this_00 = *(Shared **)(this + 0x9c8);
  }
  Shared::emit_changed((char *)this_00);
  return;
}



/* Range::set_step(double) */

void __thiscall Range::set_step(Range *this,double param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(this + 0x9c8);
  if (param_1 != *(double *)(pcVar1 + 0x18)) {
    *(double *)(pcVar1 + 0x18) = param_1;
    Shared::emit_changed(pcVar1);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Range::set_page(double) */

void __thiscall Range::set_page(Range *this,double param_1)

{
  Shared *this_00;
  double dVar1;
  double dVar2;
  
  this_00 = *(Shared **)(this + 0x9c8);
  if (param_1 < 0.0) {
    dVar1 = 0.0;
  }
  else {
    dVar1 = *(double *)(this_00 + 0x10) - *(double *)(this_00 + 8);
    if (param_1 <= *(double *)(this_00 + 0x10) - *(double *)(this_00 + 8)) {
      dVar1 = param_1;
    }
  }
  if (dVar1 == *(double *)(this_00 + 0x20)) {
    return;
  }
  *(double *)(this_00 + 0x20) = dVar1;
  dVar1 = *(double *)this_00;
  dVar2 = dVar1;
  if ((double)((ulong)dVar1 & __LC10) <= _LC11) {
    _set_value_no_signal(dVar1);
    dVar2 = *(double *)this_00;
  }
  if (dVar1 != dVar2) {
    Shared::emit_value_changed(this_00);
    this_00 = *(Shared **)(this + 0x9c8);
  }
  Shared::emit_changed((char *)this_00);
  return;
}



/* Range::Shared::redraw_owners() */

void __thiscall Range::Shared::redraw_owners(Shared *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = *(int *)(this + 0x54);
  if (iVar1 != 0) {
    lVar2 = *(long *)(this + 0x30);
    lVar3 = 0;
    while( true ) {
      if ((*(byte *)(*(long *)(lVar2 + lVar3 * 8) + 0x2fa) & 0x40) != 0) {
        CanvasItem::queue_redraw();
      }
      if (iVar1 <= (int)lVar3 + 1) break;
      lVar3 = lVar3 + 1;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Range::set_value_no_signal(double) */

void __thiscall Range::set_value_no_signal(Range *this,double param_1)

{
  double dVar1;
  Shared *this_00;
  double dVar2;
  
  this_00 = *(Shared **)(this + 0x9c8);
  dVar1 = *(double *)this_00;
  dVar2 = dVar1;
  if ((double)((ulong)param_1 & __LC10) <= _LC11) {
    _set_value_no_signal(param_1);
    dVar2 = *(double *)this_00;
  }
  if (dVar2 != dVar1) {
    Shared::redraw_owners(this_00);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Range::_set_value_no_signal(double) */

void Range::_set_value_no_signal(double param_1)

{
  if ((double)((ulong)param_1 & __LC10) <= _LC11) {
    _set_value_no_signal(param_1);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Range::Range() */

void __thiscall Range::Range(Range *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 (*pauVar3) [16];
  long in_FS_OFFSET;
  Range *local_28 [3];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  Control::Control((Control *)this);
  *(undefined8 *)(this + 0x9c8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010c540;
  this[0x9d0] = (Range)0x0;
  StringName::StringName((StringName *)(this + 0x9d8),"_value_changed",false);
  this[0x9e0] = (Range)0x0;
  *(undefined8 *)(this + 0x9e8) = 0;
  pauVar3 = (undefined1 (*) [16])operator_new(0x58,"");
  *pauVar3 = (undefined1  [16])0x0;
  uVar2 = _LC2;
  uVar1 = __LC23;
  *(undefined2 *)(pauVar3[2] + 8) = 0;
  *(undefined8 *)pauVar3[1] = uVar1;
  *(undefined8 *)(pauVar3[1] + 8) = uVar2;
  *(undefined8 *)pauVar3[2] = 0;
  pauVar3[2][10] = 0;
  *(undefined8 *)pauVar3[5] = 2;
  pauVar3[3] = (undefined1  [16])0x0;
  pauVar3[4] = (undefined1  [16])0x0;
  *(undefined1 (**) [16])(this + 0x9c8) = pauVar3;
  HashSet<Range*,HashMapHasherDefault,HashMapComparatorDefault<Range*>>::insert(local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Range::_unref_shared() */

void __thiscall Range::_unref_shared(Range *this)

{
  Shared *pSVar1;
  long in_FS_OFFSET;
  Range *local_28;
  long local_20;
  
  pSVar1 = *(Shared **)(this + 0x9c8);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (pSVar1 != (Shared *)0x0) {
    local_28 = this;
    HashSet<Range*,HashMapHasherDefault,HashMapComparatorDefault<Range*>>::erase
              ((HashSet<Range*,HashMapHasherDefault,HashMapComparatorDefault<Range*>> *)
               (pSVar1 + 0x30),&local_28);
    if (*(int *)(pSVar1 + 0x54) == 0) {
      memdelete<Range::Shared>(pSVar1);
      *(undefined8 *)(this + 0x9c8) = 0;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Range::~Range() */

void __thiscall Range::~Range(Range *this)

{
  Shared *pSVar1;
  long in_FS_OFFSET;
  Range *local_28;
  long local_20;
  
  pSVar1 = *(Shared **)(this + 0x9c8);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__initialize_classv_0010c540;
  if (pSVar1 != (Shared *)0x0) {
    local_28 = this;
    HashSet<Range*,HashMapHasherDefault,HashMapComparatorDefault<Range*>>::erase
              ((HashSet<Range*,HashMapHasherDefault,HashMapComparatorDefault<Range*>> *)
               (pSVar1 + 0x30),&local_28);
    if (*(int *)(pSVar1 + 0x54) == 0) {
      memdelete<Range::Shared>(pSVar1);
      *(undefined8 *)(this + 0x9c8) = 0;
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x9d8) != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    Control::~Control((Control *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Range::~Range() */

void __thiscall Range::~Range(Range *this)

{
  Shared *pSVar1;
  long in_FS_OFFSET;
  Range *local_28;
  long local_20;
  
  pSVar1 = *(Shared **)(this + 0x9c8);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__initialize_classv_0010c540;
  if (pSVar1 != (Shared *)0x0) {
    local_28 = this;
    HashSet<Range*,HashMapHasherDefault,HashMapComparatorDefault<Range*>>::erase
              ((HashSet<Range*,HashMapHasherDefault,HashMapComparatorDefault<Range*>> *)
               (pSVar1 + 0x30),&local_28);
    if (*(int *)(pSVar1 + 0x54) == 0) {
      memdelete<Range::Shared>(pSVar1);
      *(undefined8 *)(this + 0x9c8) = 0;
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x9d8) != 0)) {
    StringName::unref();
  }
  Control::~Control((Control *)this);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator_delete(this,0x9f0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Range::_ref_shared(Range::Shared*) */

void __thiscall Range::_ref_shared(Range *this,Shared *param_1)

{
  Shared *pSVar1;
  long in_FS_OFFSET;
  Range *local_48 [3];
  long local_30;
  
  pSVar1 = *(Shared **)(this + 0x9c8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pSVar1 != (Shared *)0x0) {
    if (pSVar1 == param_1) goto LAB_001014b7;
    local_48[0] = this;
    HashSet<Range*,HashMapHasherDefault,HashMapComparatorDefault<Range*>>::erase
              ((HashSet<Range*,HashMapHasherDefault,HashMapComparatorDefault<Range*>> *)
               (pSVar1 + 0x30),local_48);
    if (*(int *)(pSVar1 + 0x54) == 0) {
      memdelete<Range::Shared>(pSVar1);
    }
  }
  *(Shared **)(this + 0x9c8) = param_1;
  HashSet<Range*,HashMapHasherDefault,HashMapComparatorDefault<Range*>>::insert(local_48);
LAB_001014b7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Range::share(Range*) */

void __thiscall Range::share(Range *this,Range *param_1)

{
  Shared *pSVar1;
  Shared *pSVar2;
  long in_FS_OFFSET;
  Range *local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Range *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("share","scene/gui/range.cpp",0xf8,"Parameter \"p_range\" is null.",0,0);
      return;
    }
    goto LAB_001015f7;
  }
  pSVar1 = *(Shared **)(param_1 + 0x9c8);
  pSVar2 = *(Shared **)(this + 0x9c8);
  if (pSVar1 == (Shared *)0x0) {
LAB_00101557:
    *(Shared **)(param_1 + 0x9c8) = pSVar2;
    HashSet<Range*,HashMapHasherDefault,HashMapComparatorDefault<Range*>>::insert(local_48);
  }
  else if (pSVar2 != pSVar1) {
    local_48[0] = param_1;
    HashSet<Range*,HashMapHasherDefault,HashMapComparatorDefault<Range*>>::erase
              ((HashSet<Range*,HashMapHasherDefault,HashMapComparatorDefault<Range*>> *)
               (pSVar1 + 0x30),local_48);
    if (*(int *)(pSVar1 + 0x54) == 0) {
      memdelete<Range::Shared>(pSVar1);
    }
    goto LAB_00101557;
  }
  _changed_notify((char *)param_1);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    _value_changed_notify(param_1);
    return;
  }
LAB_001015f7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Range::_share(Node*) */

void __thiscall Range::_share(Range *this,Node *param_1)

{
  Range *pRVar1;
  
  if (param_1 != (Node *)0x0) {
    pRVar1 = (Range *)__dynamic_cast(param_1,&Object::typeinfo,&typeinfo,0);
    if (pRVar1 != (Range *)0x0) {
      share(this,pRVar1);
      return;
    }
  }
  _err_print_error("_share","scene/gui/range.cpp",0xf3,"Parameter \"r\" is null.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Range::unshare() */

void __thiscall Range::unshare(Range *this)

{
  Shared *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Shared *pSVar6;
  long in_FS_OFFSET;
  Range *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar6 = (Shared *)operator_new(0x58,"");
  *(undefined1 (*) [16])pSVar6 = (undefined1  [16])0x0;
  uVar3 = _LC2;
  uVar2 = __LC23;
  *(undefined8 *)(pSVar6 + 0x20) = 0;
  *(undefined8 *)(pSVar6 + 0x10) = uVar2;
  *(undefined8 *)(pSVar6 + 0x18) = uVar3;
  *(undefined1 (*) [16])(pSVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pSVar6 + 0x40) = (undefined1  [16])0x0;
  pSVar1 = *(Shared **)(this + 0x9c8);
  *(undefined2 *)(pSVar6 + 0x28) = 0;
  uVar2 = *(undefined8 *)(pSVar1 + 0x10);
  uVar3 = *(undefined8 *)(pSVar1 + 0x18);
  pSVar6[0x2a] = (Shared)0x0;
  uVar4 = *(undefined8 *)pSVar1;
  uVar5 = *(undefined8 *)(pSVar1 + 8);
  *(undefined8 *)(pSVar6 + 0x50) = 2;
  *(undefined8 *)(pSVar6 + 0x10) = uVar2;
  *(undefined8 *)(pSVar6 + 0x18) = uVar3;
  *(undefined8 *)pSVar6 = uVar4;
  *(undefined8 *)(pSVar6 + 8) = uVar5;
  *(undefined8 *)(pSVar6 + 0x20) = *(undefined8 *)(pSVar1 + 0x20);
  *(undefined2 *)(pSVar6 + 0x28) = *(undefined2 *)(pSVar1 + 0x28);
  pSVar6[0x2a] = pSVar1[0x2a];
  local_58[0] = this;
  HashSet<Range*,HashMapHasherDefault,HashMapComparatorDefault<Range*>>::erase
            ((HashSet<Range*,HashMapHasherDefault,HashMapComparatorDefault<Range*>> *)
             (pSVar1 + 0x30),local_58);
  if (*(int *)(pSVar1 + 0x54) == 0) {
LAB_00101790:
    memdelete<Range::Shared>(pSVar1);
  }
  else {
    if (pSVar1 == pSVar6) goto LAB_00101771;
    local_58[0] = this;
    HashSet<Range*,HashMapHasherDefault,HashMapComparatorDefault<Range*>>::erase
              ((HashSet<Range*,HashMapHasherDefault,HashMapComparatorDefault<Range*>> *)
               (pSVar1 + 0x30),local_58);
    if (*(int *)(pSVar1 + 0x54) == 0) goto LAB_00101790;
  }
  *(Shared **)(this + 0x9c8) = pSVar6;
  HashSet<Range*,HashMapHasherDefault,HashMapComparatorDefault<Range*>>::insert(local_58);
LAB_00101771:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<String>::_copy_on_write(CowData<String> *this)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  CowData<char32_t> *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar7 = lVar2 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        lVar3 = *(long *)this;
        *(undefined8 *)this_00 = 0;
        pCVar1 = (CowData *)(lVar3 + lVar6 * 8);
        if (*(long *)pCVar1 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar1);
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 8;
      } while (lVar2 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Vector<String>::push_back(String) [clone .isra.0] */

void __thiscall Vector<String>::push_back(Vector<String> *this,CowData *param_2)

{
  CowData<char32_t> *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<String>::resize<false>((CowData<String> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar3 * 8);
        if (*(long *)this_00 == *(long *)param_2) {
          return;
        }
        CowData<char32_t>::_ref(this_00,param_2);
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* Vector<int>::push_back(int) [clone .isra.0] */

void __thiscall Vector<int>::push_back(Vector<int> *this,int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
        *(int *)(*(long *)(this + 8) + lVar3 * 4) = param_1;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* Range::_bind_methods() */

void Range::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  int *piVar5;
  MethodBind *pMVar6;
  uint uVar7;
  int *piVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined8 local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  char *local_118;
  undefined8 local_110;
  char *local_108;
  undefined1 local_100 [16];
  int local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  char *local_d8;
  undefined8 local_d0;
  CowData<char32_t> local_c8 [8];
  long lStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98 [2];
  int *local_88;
  undefined8 local_80;
  Vector<int> local_78 [8];
  long local_70;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_d8,(char ***)"get_value",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<Range,double>(get_value);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_min",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<Range,double>(get_min);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_max",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<Range,double>(get_max);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_step",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<Range,double>(get_step);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_page",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<Range,double>(get_page);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_as_ratio",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<Range,double>(get_as_ratio);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  local_60 = 0;
  local_68 = "value";
  uVar7 = (uint)&local_58;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_value",uVar7);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<Range,double>(set_value);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  local_60 = 0;
  local_68 = "value";
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_value_no_signal",uVar7);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<Range,double>(set_value_no_signal);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  local_60 = 0;
  local_68 = "minimum";
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_min",uVar7);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<Range,double>(set_min);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  local_60 = 0;
  local_68 = "maximum";
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_max",uVar7);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<Range,double>(set_max);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  local_60 = 0;
  local_68 = "step";
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_step",uVar7);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<Range,double>(set_step);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  local_60 = 0;
  local_68 = "pagesize";
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_page",uVar7);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<Range,double>(set_page);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  local_60 = 0;
  local_68 = "value";
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_as_ratio",uVar7);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<Range,double>(set_as_ratio);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  local_68 = "enabled";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_use_rounded_values",uVar7);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<Range,bool>(set_use_rounded_values);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"is_using_rounded_values",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<Range,bool>(is_using_rounded_values);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  local_68 = "enabled";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_exp_ratio",uVar7);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<Range,bool>(set_exp_ratio);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"is_ratio_exp",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<Range,bool>(is_ratio_exp);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  local_68 = "allow";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_allow_greater",uVar7);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<Range,bool>(set_allow_greater);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"is_greater_allowed",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<Range,bool>(is_greater_allowed);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  local_68 = "allow";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_allow_lesser",uVar7);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<Range,bool>(set_allow_lesser);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"is_lesser_allowed",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<Range,bool>(is_lesser_allowed);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  local_60 = 0;
  local_68 = "with";
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"share",uVar7);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<Range,Node*>(_share);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"unshare",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<Range>(unshare);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  local_d8 = "";
  local_128 = 0;
  local_130 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_130);
  local_138 = 0;
  String::parse_latin1((String *)&local_138,"value");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_108,3,(String *)&local_138,0,(StrRange *)&local_130,6,
             (CowData<char32_t> *)&local_128);
  local_d8 = "value_changed";
  local_120 = 0;
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_120);
  _local_c8 = (undefined1  [16])0x0;
  local_d8 = (char *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 6;
  local_a0 = 1;
  local_98[0] = 0;
  local_88 = (int *)0x0;
  local_80 = 0;
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_120);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_98,(PropertyInfo *)&local_108);
  local_140 = 0;
  local_118 = "Range";
  local_110 = 5;
  String::parse_latin1((StrRange *)&local_140);
  StringName::StringName((StringName *)&local_118,(StrRange *)&local_140,false);
  ClassDB::add_signal((StringName *)&local_118,(MethodInfo *)&local_d8);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar5 = local_88;
  if (local_88 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_88 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_88 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_88 + -2);
      lVar9 = 0;
      local_88 = (int *)0x0;
      piVar8 = piVar5;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar8] != '\0') {
            Variant::_clear_internal();
          }
          lVar9 = lVar9 + 1;
          piVar8 = piVar8 + 6;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(piVar5 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (lStack_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  local_118 = (char *)0x0;
  local_d8 = "changed";
  local_d0 = 7;
  String::parse_latin1((StrRange *)&local_118);
  _local_c8 = (undefined1  [16])0x0;
  local_d8 = (char *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 6;
  local_a0 = 1;
  local_98[0] = 0;
  local_88 = (int *)0x0;
  local_80 = 0;
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_118);
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"Range");
  StringName::StringName((StringName *)&local_108,(StrRange *)&local_120,false);
  ClassDB::add_signal((StringName *)&local_108,(MethodInfo *)&local_d8);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar5 = local_88;
  if (local_88 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_88 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_88 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_88 + -2);
      lVar9 = 0;
      local_88 = (int *)0x0;
      piVar8 = piVar5;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar8] != '\0') {
            Variant::_clear_internal();
          }
          lVar9 = lVar9 + 1;
          piVar8 = piVar8 + 6;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(piVar5 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (lStack_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  _scs_create((char *)&local_118,true);
  _scs_create((char *)&local_120,true);
  local_128 = 0;
  local_130 = 0;
  String::parse_latin1((String *)&local_130,"");
  local_d8 = "min_value";
  local_138 = 0;
  local_d0 = 9;
  String::parse_latin1((StrRange *)&local_138);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,3,(String *)&local_138,0,(StrRange *)&local_130,6,
             (CowData<char32_t> *)&local_128);
  local_108 = "Range";
  local_140 = 0;
  local_100._0_8_ = 5;
  String::parse_latin1((StrRange *)&local_140);
  StringName::StringName((StringName *)&local_108,(StrRange *)&local_140,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)&local_120,
             (StringName *)&local_118,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((((StringName::configured != '\0') &&
       ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_118,true);
  _scs_create((char *)&local_120,true);
  local_d8 = "";
  local_128 = 0;
  local_130 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_130);
  local_138 = 0;
  String::parse_latin1((String *)&local_138,"max_value");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,3,(String *)&local_138,0,(StrRange *)&local_130,6,
             (CowData<char32_t> *)&local_128);
  local_140 = 0;
  String::parse_latin1((String *)&local_140,"Range");
  StringName::StringName((StringName *)&local_108,(StrRange *)&local_140,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)&local_120,
             (StringName *)&local_118,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if (((StringName::configured != '\0') &&
      ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_118 != (char *)0x0)))) {
    StringName::unref();
  }
  _scs_create((char *)&local_118,true);
  _scs_create((char *)&local_120,true);
  local_128 = 0;
  local_130 = 0;
  String::parse_latin1((String *)&local_130,"");
  local_d8 = "step";
  local_138 = 0;
  local_d0 = 4;
  String::parse_latin1((StrRange *)&local_138);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,3,(String *)&local_138,0,(StrRange *)&local_130,6,
             (CowData<char32_t> *)&local_128);
  local_108 = "Range";
  local_140 = 0;
  local_100._0_8_ = 5;
  String::parse_latin1((StrRange *)&local_140);
  StringName::StringName((StringName *)&local_108,(StrRange *)&local_140,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)&local_120,
             (StringName *)&local_118,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((((StringName::configured != '\0') &&
       ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_118,true);
  _scs_create((char *)&local_120,true);
  local_d8 = "";
  local_128 = 0;
  local_130 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_130);
  local_d8 = "page";
  local_138 = 0;
  local_d0 = 4;
  String::parse_latin1((StrRange *)&local_138);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,3,(String *)&local_138,0,(StrRange *)&local_130,6,
             (CowData<char32_t> *)&local_128);
  local_108 = "Range";
  local_140 = 0;
  local_100._0_8_ = 5;
  String::parse_latin1((StrRange *)&local_140);
  StringName::StringName((StringName *)&local_108,(StrRange *)&local_140,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)&local_120,
             (StringName *)&local_118,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((((StringName::configured != '\0') &&
       ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_118,true);
  _scs_create((char *)&local_120,true);
  local_128 = 0;
  local_130 = 0;
  String::parse_latin1((String *)&local_130,"");
  local_d8 = "value";
  local_138 = 0;
  local_d0 = 5;
  String::parse_latin1((StrRange *)&local_138);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,3,(String *)&local_138,0,(StrRange *)&local_130,6,
             (CowData<char32_t> *)&local_128);
  local_108 = "Range";
  local_140 = 0;
  local_100._0_8_ = 5;
  String::parse_latin1((StrRange *)&local_140);
  StringName::StringName((StringName *)&local_108,(StrRange *)&local_140,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)&local_120,
             (StringName *)&local_118,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((((StringName::configured != '\0') &&
       ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_118,true);
  _scs_create((char *)&local_120,true);
  local_128 = 0;
  local_130 = 0;
  String::parse_latin1((String *)&local_130,"0,1,0.01");
  local_d8 = "ratio";
  local_138 = 0;
  local_d0 = 5;
  String::parse_latin1((StrRange *)&local_138);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,3,(String *)&local_138,1,(StrRange *)&local_130,0,
             (CowData<char32_t> *)&local_128);
  local_108 = "Range";
  local_140 = 0;
  local_100._0_8_ = 5;
  String::parse_latin1((StrRange *)&local_140);
  StringName::StringName((StringName *)&local_108,(StrRange *)&local_140,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)&local_120,
             (StringName *)&local_118,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((((StringName::configured != '\0') &&
       ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_118,true);
  _scs_create((char *)&local_120,true);
  local_128 = 0;
  local_130 = 0;
  String::parse_latin1((String *)&local_130,"");
  local_138 = 0;
  String::parse_latin1((String *)&local_138,"exp_edit");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,1,(String *)&local_138,0,(StrRange *)&local_130,6,
             (CowData<char32_t> *)&local_128);
  local_108 = "Range";
  local_140 = 0;
  local_100._0_8_ = 5;
  String::parse_latin1((StrRange *)&local_140);
  StringName::StringName((StringName *)&local_108,(StrRange *)&local_140,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)&local_120,
             (StringName *)&local_118,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((((StringName::configured != '\0') &&
       ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_118,true);
  _scs_create((char *)&local_120,true);
  local_d8 = "";
  local_128 = 0;
  local_130 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_130);
  local_d8 = "rounded";
  local_138 = 0;
  local_d0 = 7;
  String::parse_latin1((StrRange *)&local_138);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,1,(String *)&local_138,0,(StrRange *)&local_130,6,
             (CowData<char32_t> *)&local_128);
  local_108 = "Range";
  local_140 = 0;
  local_100._0_8_ = 5;
  String::parse_latin1((StrRange *)&local_140);
  StringName::StringName((StringName *)&local_108,(StrRange *)&local_140,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)&local_120,
             (StringName *)&local_118,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if (((StringName::configured != '\0') &&
      ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_118 != (char *)0x0)))) {
    StringName::unref();
  }
  _scs_create((char *)&local_118,true);
  _scs_create((char *)&local_120,true);
  local_d8 = "";
  local_128 = 0;
  local_130 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_130);
  local_d8 = "allow_greater";
  local_138 = 0;
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_138);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,1,(String *)&local_138,0,(StrRange *)&local_130,6,
             (CowData<char32_t> *)&local_128);
  local_108 = "Range";
  local_140 = 0;
  local_100._0_8_ = 5;
  String::parse_latin1((StrRange *)&local_140);
  StringName::StringName((StringName *)&local_108,(StrRange *)&local_140,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)&local_120,
             (StringName *)&local_118,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((((StringName::configured != '\0') &&
       ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_118,true);
  _scs_create((char *)&local_120,true);
  local_d8 = "";
  local_128 = 0;
  local_130 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_130);
  local_138 = 0;
  local_d8 = "allow_lesser";
  local_d0 = 0xc;
  String::parse_latin1((StrRange *)&local_138);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,1,(String *)&local_138,0,(StrRange *)&local_130,6,
             (CowData<char32_t> *)&local_128);
  local_140 = 0;
  String::parse_latin1((String *)&local_140,"Range");
  StringName::StringName((StringName *)&local_108,(StrRange *)&local_140,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)&local_120,
             (StringName *)&local_118,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((((StringName::configured != '\0') &&
       ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  local_110 = 0;
  local_108 = (char *)0x0;
  local_d8 = "new_value";
  local_d0 = 9;
  String::parse_latin1((StrRange *)&local_108);
  local_d8 = (char *)0x0;
  if (local_108 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_108);
  }
  Vector<String>::push_back((Vector<String> *)&local_118,(MethodDefinition *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  _local_c8 = (undefined1  [16])0x0;
  local_108 = "_value_changed";
  local_d8 = (char *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 6;
  local_a0 = 1;
  local_98[0] = 0;
  local_88 = (int *)0x0;
  local_80 = 0;
  local_70 = 0;
  local_100._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_d8);
  local_a0 = CONCAT44(local_a0._4_4_,8);
  local_138 = 0;
  local_130 = 0;
  local_108 = "";
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_100._8_8_;
  local_100 = auVar4 << 0x40;
  String::parse_latin1((StrRange *)&local_130);
  local_128 = 0;
  local_108 = (char *)CONCAT44(local_108._4_4_,3);
  local_f0 = 0;
  local_e8 = 0;
  local_100 = (undefined1  [16])0x0;
  if (local_130 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_130);
    local_e0 = 6;
    if (local_f0 == 0x11) {
      StringName::StringName((StringName *)&local_120,(CowData<char32_t> *)&local_e8,false);
      if (local_100._8_8_ == local_120) {
        if ((StringName::configured != '\0') && (local_120 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_100._8_8_ = local_120;
      }
      goto LAB_00103d54;
    }
  }
  local_e0 = 6;
  StringName::operator=((StringName *)(local_100 + 8),(StringName *)&local_138);
LAB_00103d54:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((StringName::configured != '\0') && (local_138 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_98,(PropertyInfo *)&local_108);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  Vector<int>::push_back(local_78,10);
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"Range");
  StringName::StringName((StringName *)&local_108,(StrRange *)&local_120,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_108,(MethodInfo *)&local_d8,true,(Vector *)&local_118,false);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar5 = local_88;
  if (local_88 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_88 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_88 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_88 + -2);
      lVar9 = 0;
      local_88 = (int *)0x0;
      piVar8 = piVar5;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar8] != '\0') {
            Variant::_clear_internal();
          }
          lVar9 = lVar9 + 1;
          piVar8 = piVar8 + 6;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(piVar5 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (lStack_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<String>::_unref((CowData<String> *)&local_110);
  local_108 = (char *)0x0;
  String::parse_latin1((String *)&local_108,"value");
  local_d8 = "min_value";
  local_118 = (char *)0x0;
  local_d0 = 9;
  String::parse_latin1((StrRange *)&local_118);
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"Range");
  StringName::StringName((StringName *)&local_d8,(StrRange *)&local_120,false);
  ClassDB::add_linked_property((StringName *)&local_d8,(String *)&local_118,(String *)&local_108);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  local_d8 = "max_value";
  local_108 = (char *)0x0;
  local_d0 = 9;
  String::parse_latin1((StrRange *)&local_108);
  local_d8 = "min_value";
  local_118 = (char *)0x0;
  local_d0 = 9;
  String::parse_latin1((StrRange *)&local_118);
  local_d8 = "Range";
  local_120 = 0;
  local_d0 = 5;
  String::parse_latin1((StrRange *)&local_120);
  StringName::StringName((StringName *)&local_d8,(StrRange *)&local_120,false);
  ClassDB::add_linked_property((StringName *)&local_d8,(String *)&local_118,(String *)&local_108);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  local_d8 = "page";
  local_108 = (char *)0x0;
  local_d0 = 4;
  String::parse_latin1((StrRange *)&local_108);
  local_d8 = (char *)0x0;
  String::parse_latin1((String *)&local_d8,"min_value");
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"Range");
  StringName::StringName((StringName *)&local_118,(StrRange *)&local_120,false);
  ClassDB::add_linked_property((StringName *)&local_118,(String *)&local_d8,(String *)&local_108);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  local_108 = (char *)0x0;
  String::parse_latin1((String *)&local_108,"value");
  local_d8 = "max_value";
  local_118 = (char *)0x0;
  local_d0 = 9;
  String::parse_latin1((StrRange *)&local_118);
  local_d8 = "Range";
  local_120 = 0;
  local_d0 = 5;
  String::parse_latin1((StrRange *)&local_120);
  StringName::StringName((StringName *)&local_d8,(StrRange *)&local_120,false);
  ClassDB::add_linked_property((StringName *)&local_d8,(String *)&local_118,(String *)&local_108);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  local_108 = (char *)0x0;
  String::parse_latin1((String *)&local_108,"page");
  local_d8 = "max_value";
  local_118 = (char *)0x0;
  local_d0 = 9;
  String::parse_latin1((StrRange *)&local_118);
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"Range");
  StringName::StringName((StringName *)&local_d8,(StrRange *)&local_120,false);
  ClassDB::add_linked_property((StringName *)&local_d8,(String *)&local_118,(String *)&local_108);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Range::_value_changed(double) */

void __thiscall Range::_value_changed(Range *this,double param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_138;
  long local_130;
  GetTypeInfo<double,void> local_128 [8];
  long local_120;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  Vector<int> local_98 [8];
  undefined8 local_90;
  Variant *local_80;
  int local_78 [8];
  undefined8 *local_58 [3];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_f8._0_4_ = 0;
    local_f8._4_4_ = 0;
    uStack_f0 = 0;
    Variant::Variant((Variant *)local_78,param_1);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,this + 0x9d8,&local_80,1,&local_f8);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((int)local_f8 == 0) {
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00104690;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x9e0] == (Range)0x0)) {
    local_e8 = (undefined1  [16])0x0;
    local_f8._0_4_ = 0;
    local_f8._4_4_ = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 6;
    local_c0 = 1;
    local_b8[0] = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_90 = 0;
    String::parse_latin1((String *)&local_f8,"_value_changed");
    local_c0 = CONCAT44(local_c0._4_4_,8);
    GetTypeInfo<double,void>::get_class_info(local_128);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)local_128);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_128);
    Vector<int>::push_back(local_98,10);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x9e8) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"Range");
      StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_128,(StringName *)&local_130);
      lVar3 = local_120;
      if (local_120 == 0) {
        lVar6 = 0;
        if (StringName::configured != '\0') goto LAB_00104921;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      }
      else {
        lVar6 = *(long *)(local_120 + -8);
        LOCK();
        plVar4 = (long *)(local_120 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_120 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
        if (StringName::configured != '\0') {
LAB_00104921:
          if (local_130 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        if (lVar6 != 0) {
          lVar3 = *(long *)(this + 8);
          goto LAB_0010483a;
        }
      }
      lVar3 = *(long *)(this + 8);
      pcVar5 = *(code **)(lVar3 + 200);
      if (((pcVar5 != (code *)0x0) && (*(long *)(lVar3 + 0xe0) != 0)) ||
         (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 != (code *)0x0)) {
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x9d8);
        *(undefined8 *)(this + 0x9e8) = uVar2;
        lVar3 = *(long *)(this + 8);
      }
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x9d8,uVar1);
      *(undefined8 *)(this + 0x9e8) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_0010483a:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x9e8);
      plVar4[1] = (long)(this + 0x9e0);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x9e0] = (Range)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_f8);
  }
  pcVar5 = *(code **)(this + 0x9e8);
  if (pcVar5 != (code *)0x0) {
    local_58[0] = &local_f8;
    local_f8 = param_1;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),local_58,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x9d8,pcVar5,local_58,0);
    }
  }
LAB_00104690:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Range::get_configuration_warnings() const */

void Range::get_configuration_warnings(void)

{
  long in_RSI;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Control::get_configuration_warnings();
  if ((*(char *)(*(long *)(in_RSI + 0x9c8) + 0x28) != '\0') &&
     (*(double *)(*(long *)(in_RSI + 0x9c8) + 8) <= 0.0)) {
    local_50 = 0;
    local_40 = 0;
    local_48 = "";
    String::parse_latin1((StrRange *)&local_50);
    local_48 = "If \"Exp Edit\" is enabled, \"Min Value\" must be greater than 0.";
    local_58 = 0;
    local_40 = 0x3d;
    String::parse_latin1((StrRange *)&local_58);
    RTR((String *)&local_48,(String *)&local_58);
    Vector<String>::push_back();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* Object::_bind_compatibility_methods() */

void Object::_bind_compatibility_methods(void)

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



/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void Object::_get_property_list(List *param_1)

{
  return;
}



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* Object::_property_can_revert(StringName const&) const */

undefined8 Object::_property_can_revert(StringName *param_1)

{
  return 0;
}



/* Object::_property_get_revert(StringName const&, Variant&) const */

undefined8 Object::_property_get_revert(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_notification(int) */

void Object::_notification(int param_1)

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



/* MethodBind::is_valid() const */

undefined8 MethodBind::is_valid(void)

{
  return 1;
}



/* MethodBind::is_vararg() const */

undefined8 MethodBind::is_vararg(void)

{
  return 0;
}



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* Range::is_class_ptr(void*) const */

uint __thiscall Range::is_class_ptr(Range *this,void *param_1)

{
  return (uint)CONCAT71(0x10ca,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ca,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10cb,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10cb,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10cb,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* MethodBindT<>::_gen_argument_type(int) const */

undefined8 MethodBindT<>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type_info(int) const */

undefined8 MethodBindT<>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined4 *)CONCAT44(in_register_0000003c,param_1) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x18) = 0;
  *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x20) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x28) = 6;
  *(undefined1 (*) [16])(CONCAT44(in_register_0000003c,param_1) + 8) = (undefined1  [16])0x0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* MethodBindT<>::get_argument_meta(int) const */

undefined8 MethodBindT<>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Node*>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<Node*>::_gen_argument_type(MethodBindT<Node*> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Node*>::get_argument_meta(int) const */

undefined8 MethodBindT<Node*>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTRC<bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<bool>::_gen_argument_type(int) const */

bool __thiscall MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this,int param_1)

{
  return param_1 == 0;
}



/* MethodBindT<bool>::get_argument_meta(int) const */

undefined8 MethodBindT<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<double>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<double>::_gen_argument_type(MethodBindT<double> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<double>::get_argument_meta(int) const */

byte __thiscall MethodBindT<double>::get_argument_meta(MethodBindT<double> *this,int param_1)

{
  return -(param_1 == 0) & 10;
}



/* MethodBindTRC<double>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<double>::_gen_argument_type(int param_1)

{
  return 3;
}



/* MethodBindTRC<double>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<double>::get_argument_meta(MethodBindTRC<double> *this,int param_1)

{
  return param_1 >> 0x1f & 10;
}



/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c8b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c8b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<double>::~MethodBindT() */

void __thiscall MethodBindT<double>::~MethodBindT(MethodBindT<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c910;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<double>::~MethodBindT() */

void __thiscall MethodBindT<double>::~MethodBindT(MethodBindT<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c910;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c970;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c970;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c9d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c9d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Node*>::~MethodBindT() */

void __thiscall MethodBindT<Node*>::~MethodBindT(MethodBindT<Node*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010ca30;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Node*>::~MethodBindT() */

void __thiscall MethodBindT<Node*>::~MethodBindT(MethodBindT<Node*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010ca30;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010ca90;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010ca90;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* Range::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Range::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* Range::_property_can_revertv(StringName const&) const */

undefined8 Range::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00110008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Range::_bind_methods() [clone .cold] */

void Range::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Range::_validate_propertyv(PropertyInfo&) const */

void Range::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00110010 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* Range::_setv(StringName const&, Variant const&) */

undefined8 Range::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00110018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00105418) */
/* Range::_getv(StringName const&, Variant&) const */

undefined8 Range::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00110020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* Range::_notificationv(int, bool) */

void __thiscall Range::_notificationv(Range *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00110028 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_00110028 == CanvasItem::_notification) {
    return;
  }
  Control::_notification(iVar1);
  return;
}



/* Range::_get_class_namev() const */

undefined8 * Range::_get_class_namev(void)

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
LAB_00105533:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105533;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Range");
      goto LAB_0010559e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Range");
LAB_0010559e:
  return &_get_class_namev()::_class_name_static;
}



/* Range::get_class() const */

void Range::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
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
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC9;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 1;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x001057ec;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001057ec:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<double>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC9;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 3;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010596c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010596c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
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



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,int param_4,CowData *param_5,
          undefined4 param_6,StringName *param_7)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  lVar1 = *(long *)param_3;
  *(undefined4 *)this = param_2;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  }
  *(undefined8 *)(this + 0x20) = 0;
  lVar1 = *(long *)param_5;
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)(this + 0x18) = param_4;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),param_5);
    param_4 = *(int *)(this + 0x18);
  }
  *(undefined4 *)(this + 0x28) = param_6;
  if (param_4 == 0x11) {
    StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
    if (*(long *)(this + 0x10) == local_48) {
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(this + 0x10) = local_48;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    StringName::operator=((StringName *)(this + 0x10),param_7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<double, void>::get_class_info() */

GetTypeInfo<double,void> * __thiscall
GetTypeInfo<double,void>::get_class_info(GetTypeInfo<double,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC9;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 3;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00105cfc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00105cfc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x10);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plVar1[-1];
      *(undefined8 *)(this + 0x10) = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<Range*, HashMapHasherDefault, HashMapComparatorDefault<Range*> >::insert(Range* const&)
    */

undefined1  [16]
HashSet<Range*,HashMapHasherDefault,HashMapComparatorDefault<Range*>>::insert(Range **param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
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
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  int iVar35;
  long *in_RDX;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  undefined4 uVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  undefined1 auVar45 [16];
  ulong uStack_98;
  Range *local_88;
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  local_88 = (Range *)*in_RSI;
  if (local_88 == (Range *)0x0) {
    uVar33 = (ulong)uVar31 * 4;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::alloc_static((ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    uVar32 = *(uint *)(in_RSI + 4);
    lVar34 = *in_RDX;
    local_88 = (Range *)*in_RSI;
    if (local_88 != (Range *)0x0) goto LAB_00105f1f;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RDX;
LAB_00105f1f:
    if (uVar44 != 0) {
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
      uVar33 = lVar34 * 0x3ffff - 1;
      uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
      uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
      uVar33 = uVar33 >> 0x16 ^ uVar33;
      uVar42 = uVar33 & 0xffffffff;
      if ((int)uVar33 == 0) {
        uVar42 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar42 * lVar3;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar43;
      lVar36 = SUB168(auVar7 * auVar19,8);
      uVar39 = *(uint *)(in_RSI[3] + lVar36 * 4);
      uVar33 = (ulong)uVar39;
      iVar35 = SUB164(auVar7 * auVar19,8);
      if (uVar39 != 0) {
        uVar39 = 0;
        do {
          if ((int)uVar42 == (int)uVar33) {
            uVar37 = *(uint *)(in_RSI[1] + lVar36 * 4);
            uStack_98 = (ulong)uVar37;
            if (*(long *)(local_88 + uStack_98 * 8) == lVar34) goto LAB_001063c1;
          }
          uVar39 = uVar39 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(iVar35 + 1) * lVar3;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar36 = SUB168(auVar8 * auVar20,8);
          uVar37 = *(uint *)(in_RSI[3] + lVar36 * 4);
          uVar33 = (ulong)uVar37;
          iVar35 = SUB164(auVar8 * auVar20,8);
        } while ((uVar37 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = uVar33 * lVar3, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar43, auVar10._8_8_ = 0,
                auVar10._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4) + iVar35) -
                            SUB164(auVar9 * auVar21,8)) * lVar3, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar43, uVar39 <= SUB164(auVar10 * auVar22,8)));
      }
    }
  }
  if ((float)uVar31 * __LC17 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      local_88 = (Range *)*in_RSI;
      goto LAB_001063c1;
    }
    uVar33 = (ulong)(uVar32 + 1);
    if (uVar32 + 1 < 2) {
      uVar33 = 2;
    }
    uVar31 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    *(int *)(in_RSI + 4) = (int)uVar33;
    pvVar4 = (void *)in_RSI[3];
    uVar33 = (ulong)uVar31 * 4;
    pvVar5 = (void *)in_RSI[2];
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::realloc_static((void *)in_RSI[1],uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      lVar3 = in_RSI[2];
      lVar36 = in_RSI[3];
      local_70 = 0;
      do {
        uVar39 = 0;
        uVar43 = local_70 & 0xffffffff;
        uVar41 = (undefined4)local_70;
        uVar31 = *(uint *)((long)pvVar4 + (ulong)*(uint *)((long)pvVar5 + local_70 * 4) * 4);
        uVar33 = (ulong)uVar31;
        uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar32);
        lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar33 * lVar6;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar38;
        lVar2 = SUB168(auVar11 * auVar23,8) * 4;
        iVar35 = SUB164(auVar11 * auVar23,8);
        puVar1 = (uint *)(lVar36 + lVar2);
        uVar44 = *puVar1;
        uVar42 = local_70;
        while (uVar44 != 0) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar44 * lVar6;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar38;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)((uVar32 + iVar35) - SUB164(auVar12 * auVar24,8)) * lVar6;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar38;
          uVar31 = SUB164(auVar13 * auVar25,8);
          if (uVar31 < uVar39) {
            *(int *)(lVar3 + uVar43 * 4) = iVar35;
            uVar44 = *puVar1;
            *puVar1 = (uint)uVar33;
            uVar39 = *(uint *)(lVar2 + lVar34);
            uVar33 = (ulong)uVar44;
            *(uint *)(lVar2 + lVar34) = (uint)uVar43;
            uVar43 = (ulong)uVar39;
            uVar39 = uVar31;
          }
          uVar41 = (undefined4)uVar43;
          uVar31 = (uint)uVar33;
          uVar39 = uVar39 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(iVar35 + 1) * lVar6;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar38;
          lVar2 = SUB168(auVar14 * auVar26,8) * 4;
          iVar35 = SUB164(auVar14 * auVar26,8);
          puVar1 = (uint *)(lVar36 + lVar2);
          uVar42 = uVar43;
          uVar44 = *puVar1;
        }
        *puVar1 = uVar31;
        *(int *)(lVar3 + uVar42 * 4) = iVar35;
        local_70 = local_70 + 1;
        *(undefined4 *)(lVar34 + lVar2) = uVar41;
      } while ((uint)local_70 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(pvVar5,false);
    uVar32 = *(uint *)(in_RSI + 4);
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    local_88 = (Range *)*in_RSI;
    lVar34 = *in_RDX;
  }
  uVar42 = (ulong)uVar44;
  lVar3 = in_RSI[3];
  *(long *)(local_88 + uVar42 * 8) = lVar34;
  uVar33 = lVar34 * 0x3ffff - 1;
  uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
  uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
  uVar33 = uVar33 >> 0x16 ^ uVar33;
  uVar43 = uVar33 & 0xffffffff;
  if ((int)uVar33 == 0) {
    uVar43 = 1;
  }
  uVar37 = 0;
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  uVar40 = CONCAT44(0,uVar31);
  uVar39 = (uint)uVar43;
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar43 * lVar36;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar40;
  lVar34 = SUB168(auVar15 * auVar27,8) * 4;
  iVar35 = SUB164(auVar15 * auVar27,8);
  lVar2 = in_RSI[2];
  puVar1 = (uint *)(lVar3 + lVar34);
  uVar33 = in_RSI[1];
  uVar32 = *puVar1;
  uStack_98 = uVar33;
  uVar38 = uVar42;
  while (uVar32 != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar32 * lVar36;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar16 * auVar28,8)) * lVar36;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar40;
    uVar32 = SUB164(auVar17 * auVar29,8);
    if (uVar32 < uVar37) {
      *(int *)(lVar2 + uVar42 * 4) = iVar35;
      uVar44 = *puVar1;
      *puVar1 = (uint)uVar43;
      uVar39 = *(uint *)(lVar34 + uVar33);
      uVar43 = (ulong)uVar44;
      *(uint *)(lVar34 + uVar33) = (uint)uVar38;
      uVar42 = (ulong)uVar39;
      uVar38 = uVar42;
      uVar37 = uVar32;
    }
    uVar44 = (uint)uVar38;
    uVar39 = (uint)uVar43;
    uVar37 = uVar37 + 1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(iVar35 + 1) * lVar36;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    uStack_98 = SUB168(auVar18 * auVar30,8);
    lVar34 = uStack_98 * 4;
    iVar35 = SUB164(auVar18 * auVar30,8);
    puVar1 = (uint *)(lVar3 + lVar34);
    uVar32 = *puVar1;
  }
  *puVar1 = uVar39;
  *(int *)(lVar2 + uVar42 * 4) = iVar35;
  *(uint *)(uVar33 + lVar34) = uVar44;
  uVar37 = *(uint *)((long)in_RSI + 0x24);
  uVar44 = uVar37 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar44;
LAB_001063c1:
  *(uint *)((long)param_1 + 0xc) = uVar37;
  *param_1 = local_88;
  *(uint *)(param_1 + 1) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* void memdelete<Range::Shared>(Range::Shared*) */

void memdelete<Range::Shared>(Shared *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x30);
  if (pvVar1 != (void *)0x0) {
    if (*(int *)(param_1 + 0x54) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x50) * 4) != 0) {
        memset(*(void **)(param_1 + 0x48),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x50) * 4) << 2)
        ;
      }
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(*(void **)(param_1 + 0x40),false);
    Memory::free_static(*(void **)(param_1 + 0x38),false);
    Memory::free_static(*(void **)(param_1 + 0x48),false);
  }
  Memory::free_static(param_1,false);
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



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar5 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar5 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010663f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar5);
        local_58 = pcVar5;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010663f:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_001066f3;
  }
  cVar6 = String::operator==((String *)param_1,"Control");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar5 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar5 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar5);
          local_58 = pcVar5;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_001066f3;
    }
    cVar6 = String::operator==((String *)param_1,"CanvasItem");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar4 = *(long *)(lVar2 + 0x20);
        if (lVar4 == 0) {
          local_60 = 0;
        }
        else {
          pcVar5 = *(char **)(lVar4 + 8);
          local_60 = 0;
          if (pcVar5 == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
          }
          else {
            local_50 = strlen(pcVar5);
            local_58 = pcVar5;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_001066f3;
      }
      cVar6 = String::operator==((String *)param_1,"Node");
      if (cVar6 == '\0') {
        for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
          lVar4 = *(long *)(lVar2 + 0x20);
          if (lVar4 == 0) {
            local_58 = (char *)0x0;
          }
          else {
            local_58 = (char *)0x0;
            if (*(char **)(lVar4 + 8) == (char *)0x0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar4 + 0x10));
            }
            else {
              String::parse_latin1((String *)&local_58,*(char **)(lVar4 + 8));
            }
          }
          cVar6 = String::operator==((String *)param_1,(String *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          if (cVar6 != '\0') goto LAB_001066f3;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = String::operator==((String *)param_1,"Object");
          return uVar8;
        }
        goto LAB_0010692c;
      }
    }
  }
LAB_001066f3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010692c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Range::is_class(String const&) const */

undefined8 __thiscall Range::is_class(Range *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_001069af;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001069af:
    cVar5 = String::operator==((String *)param_1,(StrRange *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_00106a63;
  }
  cVar5 = String::operator==((String *)param_1,"Range");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Control::is_class((Control *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00106a63:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*plVar4;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x40) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x30);
      lVar2 = *(long *)((long)pvVar1 + 0x38);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x30) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x30);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x38) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
      Memory::free_static(pvVar1,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      piVar2 = *(int **)(this + 0x50);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)(this + 0x50) = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        piVar5 = piVar2;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar3 != lVar6);
      }
      Memory::free_static(piVar2 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)(this + 0x40));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x28));
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined7 in_register_00000031;
  List *pLVar5;
  long in_FS_OFFSET;
  StringName *local_a8;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC34;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC34;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00106f4d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00106f4d;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x00106f6f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x00106f6f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)pLVar5;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CanvasItem";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CanvasItem";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_001072cd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001072cd;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001072ef;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001072ef:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00110030 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Control::_get_property_listv(Control *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    CanvasItem::_get_property_listv((CanvasItem *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Control";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Control";
  local_98 = 0;
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_001076bd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001076bd;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001076df;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001076df:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00110038 != CanvasItem::_get_property_list) {
    Control::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::_get_property_listv((CanvasItem *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Range::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Range::_get_property_listv(Range *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Range";
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Range";
  local_98 = 0;
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00107aad:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107aad;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00107acf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00107acf:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  StringName::StringName((StringName *)&local_78,"Range",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::_get_property_listv((Control *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<double>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<double>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_88;
  long local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00107d3b;
  local_88 = 0;
  local_80 = 0;
  local_68 = &_LC9;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_78 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00107e30:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00107e30;
    StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_00107d3b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Node*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Node*>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_78 = 0;
    local_68 = &_LC34;
    local_60 = 4;
    String::parse_latin1((StrRange *)&local_78);
    StringName::StringName((StringName *)&local_70,(String *)&local_78,false);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x18);
    local_60 = 0;
    StringName::StringName((StringName *)&local_58,(StringName *)&local_70);
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00108149;
  local_78 = 0;
  local_68 = &_LC9;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00108245:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00108245;
    StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00108149:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBind* create_method_bind<Range, double>(double (Range::*)() const) */

MethodBind * create_method_bind<Range,double>(_func_double *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_double **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010c8b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Range";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Range, double>(void (Range::*)(double)) */

MethodBind * create_method_bind<Range,double>(_func_void_double *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_double **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010c910;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Range";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Range, bool>(void (Range::*)(bool)) */

MethodBind * create_method_bind<Range,bool>(_func_void_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010c970;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Range";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Range, bool>(bool (Range::*)() const) */

MethodBind * create_method_bind<Range,bool>(_func_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010c9d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Range";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Range, Node*>(void (Range::*)(Node*)) */

MethodBind * create_method_bind<Range,Node*>(_func_void_Node_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Node_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010ca30;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Range";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Range>(void (Range::*)()) */

MethodBind * create_method_bind<Range>(_func_void *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_0010ca90;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Range";
  local_30 = 5;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<String>::_realloc(long) */

undefined8 __thiscall CowData<String>::_realloc(CowData<String> *this,long param_1)

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
/* Error CowData<String>::resize<false>(long) */

undefined8 __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
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
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar6) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar6 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00108ea0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar10 = uVar8 + 1;
  if (lVar10 == 0) goto LAB_00108ea0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00108d79:
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while( true ) {
        plVar2 = (long *)(lVar6 + uVar8 * 8);
        if (*plVar2 != 0) break;
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00108d79;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_00108ef6;
  }
  if (lVar10 == lVar7) {
LAB_00108e1f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00108ef6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_00108e0a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00108e1f;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar6 = 0;
  }
  memset(puVar9 + lVar6,0,(param_1 - lVar6) * 8);
LAB_00108e0a:
  puVar9[-1] = param_1;
  return 0;
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
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar9 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_001091f0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 4 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_001091f0;
  if (lVar9 < param_1) {
    if (lVar8 != lVar3) {
      if (lVar9 == 0) {
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar7 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar7;
        goto LAB_00109101;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00109101:
      puVar7[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar8 != lVar3) && (uVar6 = _realloc(this,lVar8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* Range::_initialize_classv() */

void Range::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Control::initialize_class()::initialized == '\0') {
      if (CanvasItem::initialize_class()::initialized == '\0') {
        if (Node::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_68 = 0;
          local_50 = 6;
          local_58 = "Object";
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
          local_58 = "Node";
          local_70 = 0;
          local_50 = 4;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((code *)PTR__bind_methods_00110050 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Node";
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
        local_58 = "CanvasItem";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CanvasItem::_bind_methods();
        if ((code *)PTR__bind_compatibility_methods_00110040 != Object::_bind_compatibility_methods)
        {
          CanvasItem::_bind_compatibility_methods();
        }
        CanvasItem::initialize_class()::initialized = '\x01';
      }
      local_58 = "CanvasItem";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
      local_58 = "Control";
      local_70 = 0;
      local_50 = 7;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00110048 != CanvasItem::_bind_methods) {
        Control::_bind_methods();
      }
      Control::initialize_class()::initialized = '\x01';
    }
    local_58 = "Control";
    local_68 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
    local_58 = "Range";
    local_70 = 0;
    local_50 = 5;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00109848) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC102,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00109b90;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)();
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00109b90:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00109f9f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109e46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00109f9f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010a15f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010a006. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010a15f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  bool bVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC102,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a2c0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      bVar2 = (bool)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,bVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0010a2c0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool>::validated_call
          (MethodBindTRC<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a4d2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_0010a4d2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a681;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar1;
LAB_0010a681:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010a9c1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010a84d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010a9c1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010aba9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010aa32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_0010aba9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<double>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<double>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010ad81;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010ac0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (*(undefined8 *)(*(long *)param_3 + 8),
               (long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010ad81:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<double>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<double>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010af61;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010aded. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(**param_3,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010af61:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<double>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  double dVar5;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC102,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b030;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      dVar5 = (double)(*(code *)pVVar2)();
      Variant::Variant((Variant *)local_48,dVar5);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0010b030:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<double>::validated_call
          (MethodBindTRC<double> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b244;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_0010b244:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<double>::ptrcall
          (MethodBindTRC<double> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b3f3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar3;
LAB_0010b3f3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Node*>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Node*>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010b731;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010b5bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 0x10));
    return;
  }
LAB_0010b731:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Node*>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Node*>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010b919;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  plVar1 = *param_3;
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010b7a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),plVar1);
    return;
  }
LAB_0010b919:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Node*>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Node*>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  Object *pOVar6;
  long *plVar7;
  Object *pOVar8;
  long lVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar7 = (long *)plVar11[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar7 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC102,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ba50;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar5 = 3;
LAB_0010ba45:
    *in_R9 = uVar5;
    in_R9[2] = 1;
    goto LAB_0010ba50;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0010baa0;
LAB_0010ba90:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar9 = *(long *)(pVVar12 + -8);
    if ((int)lVar9 < (int)(in_R8D ^ 1)) {
LAB_0010baa0:
      uVar5 = 4;
      goto LAB_0010ba45;
    }
    if (in_R8D == 1) goto LAB_0010ba90;
    lVar10 = (long)((int)lVar9 + -1);
    if (lVar9 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar9,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pVVar12 = pVVar12 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0x18);
  if (cVar4 == '\0') {
LAB_0010b9f6:
    uVar3 = _LC108;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar3;
  }
  else {
    pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
    pOVar8 = Variant::operator_cast_to_Object_(pVVar12);
    if (((pOVar8 == (Object *)0x0) ||
        (lVar9 = __dynamic_cast(pOVar8,&Object::typeinfo,&Node::typeinfo,0), lVar9 == 0)) &&
       (pOVar6 != (Object *)0x0)) goto LAB_0010b9f6;
  }
  pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
  if (pOVar6 != (Object *)0x0) {
    pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Node::typeinfo,0);
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),pOVar6);
LAB_0010ba50:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,bool>
               (__UnexistingClass *param_1,_func_void_bool *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0010bdcd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0010be30;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010be30:
      uVar6 = 4;
LAB_0010bdcd:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0010bd4b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010bd4b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC110;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x0010bda7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC102,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010be96;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var2,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010be96:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, double>(__UnexistingClass*, void
   (__UnexistingClass::*)(double), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,double>
               (__UnexistingClass *param_1,_func_void_double *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  double dVar9;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0010c15d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0010c1c0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010c1c0:
      uVar6 = 4;
LAB_0010c15d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0010c0db;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010c0db:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_double **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC111;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  dVar9 = Variant::operator_cast_to_double(this);
                    /* WARNING: Could not recover jumptable at 0x0010c134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(dVar9);
  return;
}



/* MethodBindT<double>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<double>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC102,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010c226;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,double>
            (p_Var2,(_func_void_double *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010c226:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Node*>::~MethodBindT() */

void __thiscall MethodBindT<Node*>::~MethodBindT(MethodBindT<Node*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<double>::~MethodBindT() */

void __thiscall MethodBindT<double>::~MethodBindT(MethodBindT<double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

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
/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



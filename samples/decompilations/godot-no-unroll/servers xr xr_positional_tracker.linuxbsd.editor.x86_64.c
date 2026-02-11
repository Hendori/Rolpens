
/* XRPositionalTracker::get_tracker_hand() const */

undefined4 __thiscall XRPositionalTracker::get_tracker_hand(XRPositionalTracker *this)

{
  return *(undefined4 *)(this + 0x1f0);
}



/* XRPositionalTracker::set_tracker_hand(XRPositionalTracker::TrackerHand) */

void __thiscall XRPositionalTracker::set_tracker_hand(XRPositionalTracker *this,uint param_2)

{
  if (param_2 < 3) {
    *(uint *)(this + 0x1f0) = param_2;
    return;
  }
  _err_print_index_error
            ("set_tracker_hand","servers/xr/xr_positional_tracker.cpp",0x52,(ulong)param_2,3,
             "p_hand","TRACKER_HAND_MAX","",false,false);
  return;
}



/* XRPositionalTracker::has_pose(StringName const&) const */

undefined8 __thiscall XRPositionalTracker::has_pose(XRPositionalTracker *this,StringName *param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 0x200) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x224) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x220) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x220) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar15 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar15;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(*(long *)(this + 0x208) + lVar13 * 4);
    iVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 0x200) + lVar13 * 8) + 0x10) == *(long *)param_1))
        {
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0x208) + lVar13 * 4);
        iVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
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



/* XRPositionalTracker::get_tracker_profile() const */

void XRPositionalTracker::get_tracker_profile(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x1e8) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x1e8));
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



/* XRPositionalTracker::get_input(StringName const&) const */

StringName * XRPositionalTracker::get_input(StringName *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
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
  code *pcVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  long *in_RDX;
  long lVar22;
  long in_RSI;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  
  lVar20 = __dynamic_cast();
  if ((lVar20 == 0) && (get_input(StringName_const&)::warning_shown == '\0')) {
    _err_print_error("get_input","servers/xr/xr_positional_tracker.cpp",0x88,
                     "This method has been deprecated and will be removed in the future.",
                     "The \"get_input()\" method is deprecated, use \"XRControllerTracker\" instead."
                     ,0,1);
    LOCK();
    get_input(StringName_const&)::warning_shown = '\x01';
    UNLOCK();
  }
  if ((*(long *)(in_RSI + 0x230) != 0) && (*(int *)(in_RSI + 0x254) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x250) * 4);
    lVar20 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x250) * 8);
    if (*in_RDX == 0) {
      uVar19 = StringName::get_empty_hash();
    }
    else {
      uVar19 = *(uint *)(*in_RDX + 0x20);
    }
    uVar24 = CONCAT44(0,uVar1);
    lVar27 = *(long *)(in_RSI + 0x238);
    if (uVar19 == 0) {
      uVar19 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (ulong)uVar19 * lVar20;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar24;
    lVar22 = SUB168(auVar2 * auVar10,8);
    uVar23 = *(uint *)(lVar27 + lVar22 * 4);
    iVar21 = SUB164(auVar2 * auVar10,8);
    if (uVar23 != 0) {
      uVar25 = 0;
      do {
        if ((uVar19 == uVar23) &&
           (lVar22 = *(long *)(*(long *)(*(long *)(in_RSI + 0x230) + lVar22 * 8) + 0x10),
           lVar22 == *in_RDX)) {
          if ((*(long *)(in_RSI + 0x230) != 0) && (*(int *)(in_RSI + 0x254) != 0)) {
            uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x250) * 4);
            uVar24 = CONCAT44(0,uVar1);
            lVar20 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x250) * 8);
            if (lVar22 == 0) {
              uVar19 = StringName::get_empty_hash();
              lVar27 = *(long *)(in_RSI + 0x238);
            }
            else {
              uVar19 = *(uint *)(lVar22 + 0x20);
            }
            if (uVar19 == 0) {
              uVar19 = 1;
            }
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar19 * lVar20;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar24;
            lVar22 = SUB168(auVar6 * auVar14,8);
            uVar23 = *(uint *)(lVar27 + lVar22 * 4);
            uVar25 = SUB164(auVar6 * auVar14,8);
            if (uVar23 != 0) {
              uVar26 = 0;
              do {
                if ((uVar19 == uVar23) &&
                   (*(long *)(*(long *)(*(long *)(in_RSI + 0x230) + lVar22 * 8) + 0x10) == *in_RDX))
                {
                  Variant::Variant((Variant *)param_1,
                                   (Variant *)
                                   (*(long *)(*(long *)(in_RSI + 0x230) + (ulong)uVar25 * 8) + 0x18)
                                  );
                  return param_1;
                }
                uVar26 = uVar26 + 1;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = (ulong)(uVar25 + 1) * lVar20;
                auVar15._8_8_ = 0;
                auVar15._0_8_ = uVar24;
                lVar22 = SUB168(auVar7 * auVar15,8);
                uVar23 = *(uint *)(lVar27 + lVar22 * 4);
                uVar25 = SUB164(auVar7 * auVar15,8);
              } while ((uVar23 != 0) &&
                      (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar23 * lVar20, auVar16._8_8_ = 0,
                      auVar16._0_8_ = uVar24, auVar9._8_8_ = 0,
                      auVar9._0_8_ = (ulong)((uVar1 + uVar25) - SUB164(auVar8 * auVar16,8)) * lVar20
                      , auVar17._8_8_ = 0, auVar17._0_8_ = uVar24,
                      uVar26 <= SUB164(auVar9 * auVar17,8)));
            }
          }
          _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                           "FATAL: Condition \"!exists\" is true.",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar18 = (code *)invalidInstructionException();
          (*pcVar18)();
        }
        uVar25 = uVar25 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar21 + 1) * lVar20;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar24;
        lVar22 = SUB168(auVar3 * auVar11,8);
        uVar23 = *(uint *)(lVar27 + lVar22 * 4);
        iVar21 = SUB164(auVar3 * auVar11,8);
      } while ((uVar23 != 0) &&
              (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar23 * lVar20, auVar12._8_8_ = 0,
              auVar12._0_8_ = uVar24, auVar5._8_8_ = 0,
              auVar5._0_8_ = (ulong)((uVar1 + iVar21) - SUB164(auVar4 * auVar12,8)) * lVar20,
              auVar13._8_8_ = 0, auVar13._0_8_ = uVar24, uVar25 <= SUB164(auVar5 * auVar13,8)));
    }
  }
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  return param_1;
}



/* XRPositionalTracker::set_input(StringName const&, Variant const&) */

void __thiscall
XRPositionalTracker::set_input(XRPositionalTracker *this,StringName *param_1,Variant *param_2)

{
  Variant *pVVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  char cVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  Variant *pVVar16;
  long lVar17;
  undefined1 *puVar18;
  char *pcVar19;
  undefined1 uVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  long in_FS_OFFSET;
  long local_d0;
  int local_c8 [8];
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [6];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  lVar15 = __dynamic_cast(this,&typeinfo,&XRControllerTracker::typeinfo,0);
  if ((lVar15 == 0) && (set_input(StringName_const&,Variant_const&)::warning_shown == '\0')) {
    _err_print_error("set_input","servers/xr/xr_positional_tracker.cpp",0x95,
                     "This method has been deprecated and will be removed in the future.",
                     "The \"set_input()\" method is deprecated, use \"XRControllerTracker\" instead."
                     ,0,1);
    LOCK();
    set_input(StringName_const&,Variant_const&)::warning_shown = '\x01';
    UNLOCK();
  }
  if ((*(long *)(this + 0x230) != 0) && (*(int *)(this + 0x254) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x250) * 4);
    lVar15 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x250) * 8);
    if (*(long *)param_1 == 0) {
      uVar13 = StringName::get_empty_hash();
    }
    else {
      uVar13 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar22 = CONCAT44(0,uVar2);
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar15;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar22;
    lVar17 = SUB168(auVar3 * auVar7,8);
    uVar21 = *(uint *)(*(long *)(this + 0x238) + lVar17 * 4);
    iVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar21 != 0) {
      uVar23 = 0;
      while ((uVar13 != uVar21 ||
             (*(long *)(*(long *)(*(long *)(this + 0x230) + lVar17 * 8) + 0x10) != *(long *)param_1)
             )) {
        uVar23 = uVar23 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar14 + 1) * lVar15;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar22;
        lVar17 = SUB168(auVar4 * auVar8,8);
        uVar21 = *(uint *)(*(long *)(this + 0x238) + lVar17 * 4);
        iVar14 = SUB164(auVar4 * auVar8,8);
        if ((uVar21 == 0) ||
           (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar21 * lVar15, auVar9._8_8_ = 0,
           auVar9._0_8_ = uVar22, auVar6._8_8_ = 0,
           auVar6._0_8_ = (ulong)((uVar2 + iVar14) - SUB164(auVar5 * auVar9,8)) * lVar15,
           auVar10._8_8_ = 0, auVar10._0_8_ = uVar22, SUB164(auVar6 * auVar10,8) < uVar23))
        goto LAB_0010079a;
      }
      pVVar16 = (Variant *)
                HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                              *)(this + 0x228),param_1);
      cVar11 = Variant::operator!=(pVVar16,param_2);
      if (cVar11 == '\0') goto LAB_00100890;
    }
  }
LAB_0010079a:
  pVVar16 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)(this + 0x228),param_1);
  Variant::operator=(pVVar16,param_2);
  iVar14 = *(int *)param_2;
  if (iVar14 == 3) {
    Variant::Variant((Variant *)local_c8,param_2);
    StringName::StringName((StringName *)&local_d0,param_1);
    if ((set_input(StringName_const&,Variant_const&)::{lambda()#3}::operator()()::sname == '\0') &&
       (iVar14 = __cxa_guard_acquire(&set_input(StringName_const&,Variant_const&)::{lambda()#3}::
                                      operator()()::sname), iVar14 != 0)) {
      _scs_create((char *)&set_input(StringName_const&,Variant_const&)::{lambda()#3}::operator()()::
                           sname,true);
      __cxa_atexit(StringName::~StringName,
                   &set_input(StringName_const&,Variant_const&)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&set_input(StringName_const&,Variant_const&)::{lambda()#3}::operator()()::
                           sname);
    }
    Variant::Variant((Variant *)local_88,(StringName *)&local_d0);
    Variant::Variant((Variant *)local_70,(Variant *)local_c8);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    pVVar16 = (Variant *)local_40;
    local_a8 = (Variant *)local_88;
    pVStack_a0 = (Variant *)local_70;
    (**(code **)(*(long *)this + 0xd0))
              (this,&set_input(StringName_const&,Variant_const&)::{lambda()#3}::operator()()::sname,
               &local_a8,2);
    do {
      pVVar1 = pVVar16 + -0x18;
      pVVar16 = pVVar16 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar16 != (Variant *)local_88);
  }
  else {
    if (iVar14 != 5) {
      if (iVar14 != 1) goto LAB_00100890;
      bVar12 = Variant::operator_cast_to_bool(param_2);
      if (bVar12) {
        StringName::StringName((StringName *)&local_d0,param_1);
        pcVar19 = (char *)&set_input(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::
                           sname;
        if (set_input(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname == '\0')
        {
          puVar18 = &set_input(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname;
          pcVar19 = (char *)&set_input(StringName_const&,Variant_const&)::{lambda()#1}::operator()()
                             ::sname;
          iVar14 = __cxa_guard_acquire(&set_input(StringName_const&,Variant_const&)::{lambda()#1}::
                                        operator()()::sname);
          uVar20 = 9;
          if (iVar14 != 0) {
LAB_00100b35:
            _scs_create(pcVar19,(bool)uVar20);
            __cxa_atexit(StringName::~StringName,pcVar19,&__dso_handle);
            __cxa_guard_release(puVar18);
          }
        }
      }
      else {
        StringName::StringName((StringName *)&local_d0,param_1);
        pcVar19 = (char *)&set_input(StringName_const&,Variant_const&)::{lambda()#2}::operator()()::
                           sname;
        if (set_input(StringName_const&,Variant_const&)::{lambda()#2}::operator()()::sname == '\0')
        {
          puVar18 = &set_input(StringName_const&,Variant_const&)::{lambda()#2}::operator()()::sname;
          pcVar19 = (char *)&set_input(StringName_const&,Variant_const&)::{lambda()#2}::operator()()
                             ::sname;
          iVar14 = __cxa_guard_acquire(&set_input(StringName_const&,Variant_const&)::{lambda()#2}::
                                        operator()()::sname);
          if (iVar14 != 0) {
            uVar20 = 0x18;
            goto LAB_00100b35;
          }
        }
      }
      Variant::Variant((Variant *)local_88,(StringName *)&local_d0);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      (**(code **)(*(long *)this + 0xd0))(this,pcVar19,&local_a8,1);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_d0 != 0)) {
        StringName::unref();
      }
      goto LAB_00100890;
    }
    Variant::Variant((Variant *)local_c8,param_2);
    StringName::StringName((StringName *)&local_d0,param_1);
    if ((set_input(StringName_const&,Variant_const&)::{lambda()#4}::operator()()::sname == '\0') &&
       (iVar14 = __cxa_guard_acquire(&set_input(StringName_const&,Variant_const&)::{lambda()#4}::
                                      operator()()::sname), iVar14 != 0)) {
      _scs_create((char *)&set_input(StringName_const&,Variant_const&)::{lambda()#4}::operator()()::
                           sname,true);
      __cxa_atexit(StringName::~StringName,
                   &set_input(StringName_const&,Variant_const&)::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&set_input(StringName_const&,Variant_const&)::{lambda()#4}::operator()()::
                           sname);
    }
    Variant::Variant((Variant *)local_88,(StringName *)&local_d0);
    Variant::Variant((Variant *)local_70,(Variant *)local_c8);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    pVVar16 = (Variant *)local_40;
    local_a8 = (Variant *)local_88;
    pVStack_a0 = (Variant *)local_70;
    (**(code **)(*(long *)this + 0xd0))
              (this,&set_input(StringName_const&,Variant_const&)::{lambda()#4}::operator()()::sname,
               &local_a8,2);
    do {
      pVVar1 = pVVar16 + -0x18;
      pVVar16 = pVVar16 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar16 != (Variant *)local_88);
  }
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_c8[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_00100890:
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* XRPositionalTracker::set_tracker_profile(String const&) */

void __thiscall XRPositionalTracker::set_tracker_profile(XRPositionalTracker *this,String *param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_88;
  long local_80;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = String::operator!=((String *)(this + 0x1e8),param_1);
  if (cVar2 != '\0') {
    lVar3 = *(long *)param_1;
    if (*(long *)(this + 0x1e8) != lVar3) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x1e8),(CowData *)param_1);
      lVar3 = *(long *)(this + 0x1e8);
    }
    local_88 = 0;
    plVar1 = (long *)(lVar3 + -0x10);
    if (lVar3 != 0) {
      do {
        lVar3 = *plVar1;
        if (lVar3 == 0) goto LAB_00100d34;
        LOCK();
        lVar4 = *plVar1;
        bVar5 = lVar3 == lVar4;
        if (bVar5) {
          *plVar1 = lVar3 + 1;
          lVar4 = lVar3;
        }
        UNLOCK();
      } while (!bVar5);
      if (lVar4 != -1) {
        local_88 = *(undefined8 *)(this + 0x1e8);
      }
    }
LAB_00100d34:
    StringName::StringName((StringName *)&local_80,"profile_changed",false);
    Variant::Variant((Variant *)local_68,(String *)&local_88);
    local_50 = 0;
    local_48 = (undefined1  [16])0x0;
    local_78[0] = (Variant *)local_68;
    (**(code **)(*(long *)this + 0xd0))(this,(StringName *)&local_80,local_78,1);
    if (Variant::needs_deinit[(int)local_50] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* XRPositionalTracker::_bind_methods() */

void XRPositionalTracker::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
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
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  int *piVar20;
  MethodBind *pMVar21;
  uint uVar22;
  long lVar23;
  int *piVar24;
  long *plVar25;
  long in_FS_OFFSET;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  long local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  long local_1e8;
  long local_1e0;
  long local_1d8 [6];
  long local_1a8;
  CowData local_1a0 [8];
  StringName local_198 [8];
  undefined4 local_190;
  CowData local_188 [8];
  undefined4 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined8 local_170;
  StringName local_168 [8];
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  long local_148 [2];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108 [2];
  int *local_f8;
  undefined8 local_f0;
  long local_e0;
  char *local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  char *local_a8;
  char *pcStack_a0;
  char *local_98;
  char *pcStack_90;
  char *local_88;
  undefined8 local_80;
  char **local_78;
  undefined1 auStack_70 [16];
  char **ppcStack_60;
  char **local_58;
  long local_40;
  
  puVar18 = PTR__LC42_00110ea8;
  puVar17 = PTR__LC41_00110ea0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_178,"TRACKER_HAND_UNKNOWN",false);
  local_1d8[0] = 0;
  String::parse_latin1((String *)local_1d8,"TRACKER_HAND_UNKNOWN");
  GetTypeInfo<XRPositionalTracker::TrackerHand,void>::get_class_info
            ((GetTypeInfo<XRPositionalTracker::TrackerHand,void> *)local_148);
  local_1a8 = local_138._0_8_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_138._8_8_;
  local_138 = auVar3 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_148);
  local_1e0 = 0;
  String::parse_latin1((String *)&local_1e0,"XRPositionalTracker");
  StringName::StringName((StringName *)local_148,(String *)&local_1e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_148,(StringName *)&local_1a8,(StringName *)&local_178,0,false);
  if ((StringName::configured != '\0') && (local_148[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  if ((StringName::configured != '\0') && (local_1a8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
  if ((StringName::configured != '\0') && (CONCAT44(uStack_174,local_178) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_178,"TRACKER_HAND_LEFT",false);
  local_1d8[0] = 0;
  String::parse_latin1((String *)local_1d8,"TRACKER_HAND_LEFT");
  GetTypeInfo<XRPositionalTracker::TrackerHand,void>::get_class_info
            ((GetTypeInfo<XRPositionalTracker::TrackerHand,void> *)local_148);
  local_1a8 = local_138._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_138._8_8_;
  local_138 = auVar4 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_148);
  local_1e0 = 0;
  String::parse_latin1((String *)&local_1e0,"XRPositionalTracker");
  StringName::StringName((StringName *)local_148,(String *)&local_1e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_148,(StringName *)&local_1a8,(StringName *)&local_178,1,false);
  if ((StringName::configured != '\0') && (local_148[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  if ((StringName::configured != '\0') && (local_1a8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
  if ((StringName::configured != '\0') && (CONCAT44(uStack_174,local_178) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_178,"TRACKER_HAND_RIGHT",false);
  local_1d8[0] = 0;
  String::parse_latin1((String *)local_1d8,"TRACKER_HAND_RIGHT");
  GetTypeInfo<XRPositionalTracker::TrackerHand,void>::get_class_info
            ((GetTypeInfo<XRPositionalTracker::TrackerHand,void> *)local_148);
  local_1a8 = local_138._0_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_138._8_8_;
  local_138 = auVar5 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_148);
  local_1e0 = 0;
  String::parse_latin1((String *)&local_1e0,"XRPositionalTracker");
  StringName::StringName((StringName *)local_148,(String *)&local_1e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_148,(StringName *)&local_1a8,(StringName *)&local_178,2,false);
  if ((StringName::configured != '\0') && (local_148[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  if ((StringName::configured != '\0') && (local_1a8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
  if ((StringName::configured != '\0') && (CONCAT44(uStack_174,local_178) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_178,"TRACKER_HAND_MAX",false);
  local_1d8[0] = 0;
  String::parse_latin1((String *)local_1d8,"TRACKER_HAND_MAX");
  GetTypeInfo<XRPositionalTracker::TrackerHand,void>::get_class_info
            ((GetTypeInfo<XRPositionalTracker::TrackerHand,void> *)local_148);
  local_1a8 = local_138._0_8_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_138._8_8_;
  local_138 = auVar6 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_148);
  local_1e0 = 0;
  String::parse_latin1((String *)&local_1e0,"XRPositionalTracker");
  StringName::StringName((StringName *)local_148,(String *)&local_1e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_148,(StringName *)&local_1a8,(StringName *)&local_178,3,false);
  if ((StringName::configured != '\0') && (local_148[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  if ((StringName::configured != '\0') && (local_1a8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
  if ((StringName::configured != '\0') && (CONCAT44(uStack_174,local_178) != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_148,(char ***)"get_tracker_profile",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (char **)0x0;
  pMVar21 = create_method_bind<XRPositionalTracker,String>(get_tracker_profile);
  ClassDB::bind_methodfi(1,pMVar21,false,(MethodDefinition *)local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar19 = local_138._0_8_;
  if ((long *)local_138._0_8_ != (long *)0x0) {
    LOCK();
    plVar25 = (long *)(local_138._0_8_ + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      if ((long *)local_138._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_138._0_8_ + -8);
      lVar23 = 0;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_138._8_8_;
      local_138 = auVar7 << 0x40;
      plVar25 = (long *)uVar19;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar25 != 0)) {
            StringName::unref();
          }
          lVar23 = lVar23 + 1;
          plVar25 = plVar25 + 1;
        } while (lVar1 != lVar23);
      }
      Memory::free_static((long *)(uVar19 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_148[0] != 0)) {
    StringName::unref();
  }
  local_d8 = "profile";
  local_d0 = 0;
  uVar22 = (uint)&local_78;
  local_78 = &local_d8;
  D_METHODP((char *)local_148,(char ***)"set_tracker_profile",uVar22);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (char **)0x0;
  pMVar21 = create_method_bind<XRPositionalTracker,String_const&>(set_tracker_profile);
  ClassDB::bind_methodfi(1,pMVar21,false,(MethodDefinition *)local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar19 = local_138._0_8_;
  if ((long *)local_138._0_8_ != (long *)0x0) {
    LOCK();
    plVar25 = (long *)(local_138._0_8_ + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      if ((long *)local_138._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_138._0_8_ + -8);
      lVar23 = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_138._8_8_;
      local_138 = auVar8 << 0x40;
      plVar25 = (long *)uVar19;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar25 != 0)) {
            StringName::unref();
          }
          lVar23 = lVar23 + 1;
          plVar25 = plVar25 + 1;
        } while (lVar1 != lVar23);
      }
      Memory::free_static((long *)(uVar19 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_148[0] != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_1a8,true);
  _scs_create((char *)local_1d8,true);
  local_1e0 = 0;
  local_1e8 = 0;
  String::parse_latin1((String *)&local_1e8,"");
  local_1f0 = 0;
  String::parse_latin1((String *)&local_1f0,"profile");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_148,4,(String *)&local_1f0,0,(String *)&local_1e8,6,
             (String *)&local_1e0);
  local_1f8 = 0;
  String::parse_latin1((String *)&local_1f8,"XRPositionalTracker");
  StringName::StringName((StringName *)&local_178,(String *)&local_1f8,false);
  ClassDB::add_property
            ((StringName *)&local_178,(PropertyInfo *)local_148,(StringName *)local_1d8,
             (StringName *)&local_1a8,-1);
  if ((StringName::configured != '\0') && (CONCAT44(uStack_174,local_178) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  if ((((StringName::configured != '\0') &&
       ((local_1e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1d8[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1a8 != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_148,(char ***)"get_tracker_hand",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (char **)0x0;
  pMVar21 = create_method_bind<XRPositionalTracker,XRPositionalTracker::TrackerHand>
                      (get_tracker_hand);
  ClassDB::bind_methodfi(1,pMVar21,false,(MethodDefinition *)local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar19 = local_138._0_8_;
  if ((long *)local_138._0_8_ != (long *)0x0) {
    LOCK();
    plVar25 = (long *)(local_138._0_8_ + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      if ((long *)local_138._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_138._0_8_ + -8);
      lVar23 = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_138._8_8_;
      local_138 = auVar9 << 0x40;
      plVar25 = (long *)uVar19;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar25 != 0)) {
            StringName::unref();
          }
          lVar23 = lVar23 + 1;
          plVar25 = plVar25 + 1;
        } while (lVar1 != lVar23);
      }
      Memory::free_static((long *)(uVar19 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_148[0] != 0)) {
    StringName::unref();
  }
  local_d8 = "hand";
  local_d0 = 0;
  local_78 = &local_d8;
  D_METHODP((char *)local_148,(char ***)"set_tracker_hand",uVar22);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (char **)0x0;
  pMVar21 = create_method_bind<XRPositionalTracker,XRPositionalTracker::TrackerHand>
                      ((_func_void_TrackerHand *)0x159);
  ClassDB::bind_methodfi(1,pMVar21,false,(MethodDefinition *)local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar19 = local_138._0_8_;
  if ((long *)local_138._0_8_ != (long *)0x0) {
    LOCK();
    plVar25 = (long *)(local_138._0_8_ + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      if ((long *)local_138._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_138._0_8_ + -8);
      lVar23 = 0;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = local_138._8_8_;
      local_138 = auVar10 << 0x40;
      plVar25 = (long *)uVar19;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar25 != 0)) {
            StringName::unref();
          }
          lVar23 = lVar23 + 1;
          plVar25 = plVar25 + 1;
        } while (lVar1 != lVar23);
      }
      Memory::free_static((long *)(uVar19 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_148[0] != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_1a8,true);
  _scs_create((char *)local_1d8,true);
  local_1e0 = 0;
  local_1e8 = 0;
  String::parse_latin1((String *)&local_1e8,"Unknown,Left,Right");
  local_1f0 = 0;
  String::parse_latin1((String *)&local_1f0,"hand");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_148,2,(String *)&local_1f0,2,(String *)&local_1e8,6,
             (String *)&local_1e0);
  local_1f8 = 0;
  String::parse_latin1((String *)&local_1f8,"XRPositionalTracker");
  StringName::StringName((StringName *)&local_178,(String *)&local_1f8,false);
  ClassDB::add_property
            ((StringName *)&local_178,(PropertyInfo *)local_148,(StringName *)local_1d8,
             (StringName *)&local_1a8,-1);
  if ((StringName::configured != '\0') && (CONCAT44(uStack_174,local_178) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  if (((StringName::configured != '\0') &&
      ((local_1e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_1d8[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_1a8 != 0)))) {
    StringName::unref();
  }
  local_d8 = "name";
  local_d0 = 0;
  local_78 = &local_d8;
  D_METHODP((char *)local_148,(char ***)"has_pose",uVar22);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (char **)0x0;
  pMVar21 = create_method_bind<XRPositionalTracker,bool,StringName_const&>(has_pose);
  ClassDB::bind_methodfi(1,pMVar21,false,(MethodDefinition *)local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar19 = local_138._0_8_;
  if ((long *)local_138._0_8_ != (long *)0x0) {
    LOCK();
    plVar25 = (long *)(local_138._0_8_ + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      if ((long *)local_138._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_138._0_8_ + -8);
      lVar23 = 0;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = local_138._8_8_;
      local_138 = auVar11 << 0x40;
      plVar25 = (long *)uVar19;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar25 != 0)) {
            StringName::unref();
          }
          lVar23 = lVar23 + 1;
          plVar25 = plVar25 + 1;
        } while (lVar1 != lVar23);
      }
      Memory::free_static((long *)(uVar19 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_148[0] != 0)) {
    StringName::unref();
  }
  local_d8 = "name";
  local_d0 = 0;
  local_78 = &local_d8;
  D_METHODP((char *)local_148,(char ***)"get_pose",uVar22);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (char **)0x0;
  pMVar21 = create_method_bind<XRPositionalTracker,Ref<XRPose>,StringName_const&>(get_pose);
  ClassDB::bind_methodfi(1,pMVar21,false,(MethodDefinition *)local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar19 = local_138._0_8_;
  if ((long *)local_138._0_8_ != (long *)0x0) {
    LOCK();
    plVar25 = (long *)(local_138._0_8_ + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      if ((long *)local_138._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_138._0_8_ + -8);
      lVar23 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = local_138._8_8_;
      local_138 = auVar12 << 0x40;
      plVar25 = (long *)uVar19;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar25 != 0)) {
            StringName::unref();
          }
          lVar23 = lVar23 + 1;
          plVar25 = plVar25 + 1;
        } while (lVar1 != lVar23);
      }
      Memory::free_static((long *)(uVar19 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_148[0] != 0)) {
    StringName::unref();
  }
  local_d8 = "name";
  local_d0 = 0;
  local_78 = &local_d8;
  D_METHODP((char *)local_148,(char ***)"invalidate_pose",uVar22);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (char **)0x0;
  pMVar21 = create_method_bind<XRPositionalTracker,StringName_const&>(invalidate_pose);
  ClassDB::bind_methodfi(1,pMVar21,false,(MethodDefinition *)local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar19 = local_138._0_8_;
  if ((long *)local_138._0_8_ != (long *)0x0) {
    LOCK();
    plVar25 = (long *)(local_138._0_8_ + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      if ((long *)local_138._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_138._0_8_ + -8);
      lVar23 = 0;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = local_138._8_8_;
      local_138 = auVar13 << 0x40;
      plVar25 = (long *)uVar19;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar25 != 0)) {
            StringName::unref();
          }
          lVar23 = lVar23 + 1;
          plVar25 = plVar25 + 1;
        } while (lVar1 != lVar23);
      }
      Memory::free_static((long *)(uVar19 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_148[0] != 0)) {
    StringName::unref();
  }
  local_a8 = puVar17;
  pcStack_a0 = "transform";
  local_88 = "tracking_confidence";
  local_58 = &local_88;
  auStack_70._8_8_ = &local_98;
  auStack_70._0_8_ = &pcStack_a0;
  local_98 = "linear_velocity";
  pcStack_90 = "angular_velocity";
  local_80 = 0;
  local_78 = &local_a8;
  ppcStack_60 = &pcStack_90;
  D_METHODP((char *)local_148,(char ***)"set_pose",uVar22);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (char **)0x0;
  pMVar21 = create_method_bind<XRPositionalTracker,StringName_const&,Transform3D_const&,Vector3_const&,Vector3_const&,XRPose::TrackingConfidence>
                      (set_pose);
  ClassDB::bind_methodfi(1,pMVar21,false,(MethodDefinition *)local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar19 = local_138._0_8_;
  if ((long *)local_138._0_8_ != (long *)0x0) {
    LOCK();
    plVar25 = (long *)(local_138._0_8_ + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      if ((long *)local_138._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_138._0_8_ + -8);
      lVar23 = 0;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = local_138._8_8_;
      local_138 = auVar14 << 0x40;
      plVar25 = (long *)uVar19;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar25 != 0)) {
            StringName::unref();
          }
          lVar23 = lVar23 + 1;
          plVar25 = plVar25 + 1;
        } while (lVar1 != lVar23);
      }
      Memory::free_static((long *)(uVar19 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_148[0] != 0)) {
    StringName::unref();
  }
  local_1e0 = 0;
  local_1e8 = 0;
  String::parse_latin1((String *)&local_1e8,"XRPose");
  local_1f0 = 0;
  String::parse_latin1((String *)&local_1f0,"pose");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_178,0x18,(String *)&local_1f0,0x11,(String *)&local_1e8,6,
             (String *)&local_1e0);
  local_1d8[0] = 0;
  String::parse_latin1((String *)local_1d8,"pose_changed");
  local_138 = (undefined1  [16])0x0;
  local_148[0] = 0;
  local_148[1] = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 6;
  local_110 = 1;
  local_108[0] = 0;
  local_f8 = (int *)0x0;
  local_f0 = 0;
  local_e0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)local_148,(CowData *)local_1d8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_108,(PropertyInfo *)&local_178);
  local_1f8 = 0;
  String::parse_latin1((String *)&local_1f8,"XRPositionalTracker");
  StringName::StringName((StringName *)&local_1a8,(String *)&local_1f8,false);
  ClassDB::add_signal((StringName *)&local_1a8,(MethodInfo *)local_148);
  if ((StringName::configured != '\0') && (local_1a8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
  lVar1 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar25 = (long *)(local_e0 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar20 = local_f8;
  if (local_f8 != (int *)0x0) {
    LOCK();
    plVar25 = (long *)(local_f8 + -4);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      if (local_f8 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_f8 + -2);
      lVar23 = 0;
      local_f8 = (int *)0x0;
      piVar24 = piVar20;
      if (lVar1 != 0) {
        do {
          if (Variant::needs_deinit[*piVar24] != '\0') {
            Variant::_clear_internal();
          }
          lVar23 = lVar23 + 1;
          piVar24 = piVar24 + 6;
        } while (lVar1 != lVar23);
      }
      Memory::free_static(piVar20 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_138._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  if ((StringName::configured != '\0') && (local_1e0 != 0)) {
    StringName::unref();
  }
  local_1e0 = 0;
  local_1e8 = 0;
  String::parse_latin1((String *)&local_1e8,"XRPose");
  local_1f0 = 0;
  String::parse_latin1((String *)&local_1f0,"pose");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_178,0x18,(String *)&local_1f0,0x11,(String *)&local_1e8,6,
             (String *)&local_1e0);
  local_1d8[0] = 0;
  String::parse_latin1((String *)local_1d8,"pose_lost_tracking");
  local_138 = (undefined1  [16])0x0;
  local_148[0] = 0;
  local_148[1] = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 6;
  local_110 = 1;
  local_108[0] = 0;
  local_f8 = (int *)0x0;
  local_f0 = 0;
  local_e0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)local_148,(CowData *)local_1d8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_108,(PropertyInfo *)&local_178);
  local_1f8 = 0;
  String::parse_latin1((String *)&local_1f8,"XRPositionalTracker");
  StringName::StringName((StringName *)&local_1a8,(String *)&local_1f8,false);
  ClassDB::add_signal((StringName *)&local_1a8,(MethodInfo *)local_148);
  if ((StringName::configured != '\0') && (local_1a8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
  lVar1 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar25 = (long *)(local_e0 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar20 = local_f8;
  if (local_f8 != (int *)0x0) {
    LOCK();
    plVar25 = (long *)(local_f8 + -4);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      if (local_f8 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_f8 + -2);
      lVar23 = 0;
      local_f8 = (int *)0x0;
      piVar24 = piVar20;
      if (lVar1 != 0) {
        do {
          if (Variant::needs_deinit[*piVar24] != '\0') {
            Variant::_clear_internal();
          }
          lVar23 = lVar23 + 1;
          piVar24 = piVar24 + 6;
        } while (lVar1 != lVar23);
      }
      Memory::free_static(piVar20 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_138._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  if ((StringName::configured != '\0') && (local_1e0 != 0)) {
    StringName::unref();
  }
  local_a8 = "name";
  pcStack_a0 = (char *)0x0;
  local_78 = &local_a8;
  D_METHODP((char *)local_148,(char ***)"get_input",uVar22);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (char **)0x0;
  pMVar21 = create_method_bind<XRPositionalTracker,Variant,StringName_const&>(get_input);
  ClassDB::bind_methodfi(1,pMVar21,false,(MethodDefinition *)local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar19 = local_138._0_8_;
  if ((long *)local_138._0_8_ != (long *)0x0) {
    LOCK();
    plVar25 = (long *)(local_138._0_8_ + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      if ((long *)local_138._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_138._0_8_ + -8);
      lVar23 = 0;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = local_138._8_8_;
      local_138 = auVar15 << 0x40;
      plVar25 = (long *)uVar19;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar25 != 0)) {
            StringName::unref();
          }
          lVar23 = lVar23 + 1;
          plVar25 = plVar25 + 1;
        } while (lVar1 != lVar23);
      }
      Memory::free_static((long *)(uVar19 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_148[0] != 0)) {
    StringName::unref();
  }
  local_b8 = 0;
  local_c8 = puVar17;
  puStack_c0 = puVar18;
  auStack_70._0_8_ = &puStack_c0;
  local_78 = &local_c8;
  D_METHODP((char *)local_148,(char ***)"set_input",uVar22);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (char **)0x0;
  pMVar21 = create_method_bind<XRPositionalTracker,StringName_const&,Variant_const&>(set_input);
  ClassDB::bind_methodfi(1,pMVar21,false,(MethodDefinition *)local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar19 = local_138._0_8_;
  if ((long *)local_138._0_8_ != (long *)0x0) {
    LOCK();
    plVar25 = (long *)(local_138._0_8_ + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      if ((long *)local_138._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_138._0_8_ + -8);
      lVar23 = 0;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = local_138._8_8_;
      local_138 = auVar16 << 0x40;
      plVar25 = (long *)uVar19;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar25 != 0)) {
            StringName::unref();
          }
          lVar23 = lVar23 + 1;
          plVar25 = plVar25 + 1;
        } while (lVar1 != lVar23);
      }
      Memory::free_static((long *)(uVar19 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_148[0] != 0)) {
    StringName::unref();
  }
  local_1e0 = 0;
  local_1e8 = 0;
  String::parse_latin1((String *)&local_1e8,"");
  local_1f0 = 0;
  String::parse_latin1((String *)&local_1f0,"name");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_178,4,(String *)&local_1f0,0,(String *)&local_1e8,6,
             (String *)&local_1e0);
  local_1d8[0] = 0;
  String::parse_latin1((String *)local_1d8,"button_pressed");
  local_138 = (undefined1  [16])0x0;
  local_148[0] = 0;
  local_148[1] = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 6;
  local_110 = 1;
  local_108[0] = 0;
  local_f8 = (int *)0x0;
  local_f0 = 0;
  local_e0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)local_148,(CowData *)local_1d8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_108,(PropertyInfo *)&local_178);
  local_1f8 = 0;
  String::parse_latin1((String *)&local_1f8,"XRPositionalTracker");
  StringName::StringName((StringName *)&local_1a8,(String *)&local_1f8,false);
  ClassDB::add_signal((StringName *)&local_1a8,(MethodInfo *)local_148);
  if ((StringName::configured != '\0') && (local_1a8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
  lVar1 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar25 = (long *)(local_e0 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar20 = local_f8;
  if (local_f8 != (int *)0x0) {
    LOCK();
    plVar25 = (long *)(local_f8 + -4);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      if (local_f8 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_f8 + -2);
      lVar23 = 0;
      local_f8 = (int *)0x0;
      piVar24 = piVar20;
      if (lVar1 != 0) {
        do {
          if (Variant::needs_deinit[*piVar24] != '\0') {
            Variant::_clear_internal();
          }
          lVar23 = lVar23 + 1;
          piVar24 = piVar24 + 6;
        } while (lVar1 != lVar23);
      }
      Memory::free_static(piVar20 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_138._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  if ((StringName::configured != '\0') && (local_1e0 != 0)) {
    StringName::unref();
  }
  local_1e0 = 0;
  local_1e8 = 0;
  String::parse_latin1((String *)&local_1e8,"");
  local_1f0 = 0;
  String::parse_latin1((String *)&local_1f0,"name");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_178,4,(String *)&local_1f0,0,(String *)&local_1e8,6,
             (String *)&local_1e0);
  local_1d8[0] = 0;
  String::parse_latin1((String *)local_1d8,"button_released");
  local_138 = (undefined1  [16])0x0;
  local_148[0] = 0;
  local_148[1] = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 6;
  local_110 = 1;
  local_108[0] = 0;
  local_f8 = (int *)0x0;
  local_f0 = 0;
  local_e0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)local_148,(CowData *)local_1d8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_108,(PropertyInfo *)&local_178);
  local_1f8 = 0;
  String::parse_latin1((String *)&local_1f8,"XRPositionalTracker");
  StringName::StringName((StringName *)&local_1a8,(String *)&local_1f8,false);
  ClassDB::add_signal((StringName *)&local_1a8,(MethodInfo *)local_148);
  if ((StringName::configured != '\0') && (local_1a8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
  lVar1 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar25 = (long *)(local_e0 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar20 = local_f8;
  if (local_f8 != (int *)0x0) {
    LOCK();
    plVar25 = (long *)(local_f8 + -4);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      if (local_f8 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_f8 + -2);
      lVar23 = 0;
      local_f8 = (int *)0x0;
      piVar24 = piVar20;
      if (lVar1 != 0) {
        do {
          if (Variant::needs_deinit[*piVar24] != '\0') {
            Variant::_clear_internal();
          }
          lVar23 = lVar23 + 1;
          piVar24 = piVar24 + 6;
        } while (lVar1 != lVar23);
      }
      Memory::free_static(piVar20 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_138._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  if ((StringName::configured != '\0') && (local_1e0 != 0)) {
    StringName::unref();
  }
  local_1e8 = 0;
  local_1f0 = 0;
  String::parse_latin1((String *)&local_1f0,"");
  local_1f8 = 0;
  String::parse_latin1((String *)&local_1f8,"value");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1a8,3,(String *)&local_1f8,0,(String *)&local_1f0,6,
             (String *)&local_1e8);
  local_200 = 0;
  local_208 = 0;
  String::parse_latin1((String *)&local_208,"");
  local_210 = 0;
  String::parse_latin1((String *)&local_210,"name");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_1d8,4,(String *)&local_210,0,(String *)&local_208,6,&local_200);
  local_1e0 = 0;
  String::parse_latin1((String *)&local_1e0,"input_float_changed");
  local_138 = (undefined1  [16])0x0;
  local_148[0] = 0;
  local_148[1] = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 6;
  local_110 = 1;
  local_108[0] = 0;
  local_f8 = (int *)0x0;
  local_f0 = 0;
  local_e0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)local_148,(CowData *)&local_1e0);
  local_170 = 0;
  local_178 = (undefined4)local_1a8;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_170,local_1a0);
  StringName::StringName(local_168,local_198);
  local_158 = 0;
  local_160 = local_190;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,local_188);
  local_150 = local_180;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_108,(PropertyInfo *)local_1d8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_108,(PropertyInfo *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"XRPositionalTracker");
  StringName::StringName((StringName *)&local_178,(String *)&local_218,false);
  ClassDB::add_signal((StringName *)&local_178,(MethodInfo *)local_148);
  if ((StringName::configured != '\0') && (CONCAT44(uStack_174,local_178) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  lVar1 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar25 = (long *)(local_e0 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar20 = local_f8;
  if (local_f8 != (int *)0x0) {
    LOCK();
    plVar25 = (long *)(local_f8 + -4);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      if (local_f8 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_f8 + -2);
      lVar23 = 0;
      local_f8 = (int *)0x0;
      piVar24 = piVar20;
      if (lVar1 != 0) {
        do {
          if (Variant::needs_deinit[*piVar24] != '\0') {
            Variant::_clear_internal();
          }
          lVar23 = lVar23 + 1;
          piVar24 = piVar24 + 6;
        } while (lVar1 != lVar23);
      }
      Memory::free_static(piVar20 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_138._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_210);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  if ((StringName::configured != '\0') && (local_200 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  if ((StringName::configured != '\0') && (local_1e8 != 0)) {
    StringName::unref();
  }
  local_1e8 = 0;
  local_1f0 = 0;
  String::parse_latin1((String *)&local_1f0,"");
  local_1f8 = 0;
  String::parse_latin1((String *)&local_1f8,"vector");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1a8,5,(String *)&local_1f8,0,(String *)&local_1f0,6,
             (String *)&local_1e8);
  local_200 = 0;
  local_208 = 0;
  String::parse_latin1((String *)&local_208,"");
  local_210 = 0;
  String::parse_latin1((String *)&local_210,"name");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_1d8,4,(String *)&local_210,0,(String *)&local_208,6,&local_200);
  local_1e0 = 0;
  String::parse_latin1((String *)&local_1e0,"input_vector2_changed");
  local_138 = (undefined1  [16])0x0;
  local_148[0] = 0;
  local_148[1] = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 6;
  local_110 = 1;
  local_108[0] = 0;
  local_f8 = (int *)0x0;
  local_f0 = 0;
  local_e0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)local_148,(CowData *)&local_1e0);
  local_170 = 0;
  local_178 = (undefined4)local_1a8;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_170,local_1a0);
  StringName::StringName(local_168,local_198);
  local_158 = 0;
  local_160 = local_190;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,local_188);
  local_150 = local_180;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_108,(PropertyInfo *)local_1d8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_108,(PropertyInfo *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
  local_218 = 0;
  String::parse_latin1((String *)&local_218,"XRPositionalTracker");
  StringName::StringName((StringName *)&local_178,(String *)&local_218,false);
  ClassDB::add_signal((StringName *)&local_178,(MethodInfo *)local_148);
  if ((StringName::configured != '\0') && (CONCAT44(uStack_174,local_178) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  lVar1 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar25 = (long *)(local_e0 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar20 = local_f8;
  if (local_f8 != (int *)0x0) {
    LOCK();
    plVar25 = (long *)(local_f8 + -4);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      if (local_f8 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_f8 + -2);
      lVar23 = 0;
      local_f8 = (int *)0x0;
      piVar24 = piVar20;
      if (lVar1 != 0) {
        do {
          if (Variant::needs_deinit[*piVar24] != '\0') {
            Variant::_clear_internal();
          }
          lVar23 = lVar23 + 1;
          piVar24 = piVar24 + 6;
        } while (lVar1 != lVar23);
      }
      Memory::free_static(piVar20 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_138._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_210);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  if ((StringName::configured != '\0') && (local_200 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  if ((StringName::configured != '\0') && (local_1e8 != 0)) {
    StringName::unref();
  }
  local_1e0 = 0;
  local_1e8 = 0;
  String::parse_latin1((String *)&local_1e8,"");
  local_1f0 = 0;
  String::parse_latin1((String *)&local_1f0,"role");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_178,4,(String *)&local_1f0,0,(String *)&local_1e8,6,
             (String *)&local_1e0);
  local_1d8[0] = 0;
  String::parse_latin1((String *)local_1d8,"profile_changed");
  local_138 = (undefined1  [16])0x0;
  local_148[0] = 0;
  local_148[1] = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 6;
  local_110 = 1;
  local_108[0] = 0;
  local_f8 = (int *)0x0;
  local_f0 = 0;
  local_e0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)local_148,(CowData *)local_1d8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_108,(PropertyInfo *)&local_178);
  local_1f8 = 0;
  String::parse_latin1((String *)&local_1f8,"XRPositionalTracker");
  StringName::StringName((StringName *)&local_1a8,(String *)&local_1f8,false);
  ClassDB::add_signal((StringName *)&local_1a8,(MethodInfo *)local_148);
  if ((StringName::configured != '\0') && (local_1a8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
  lVar1 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar25 = (long *)(local_e0 + -0x10);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar20 = local_f8;
  if (local_f8 != (int *)0x0) {
    LOCK();
    plVar25 = (long *)(local_f8 + -4);
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (*plVar25 == 0) {
      if (local_f8 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_f8 + -2);
      lVar23 = 0;
      local_f8 = (int *)0x0;
      piVar24 = piVar20;
      if (lVar1 != 0) {
        do {
          if (Variant::needs_deinit[*piVar24] != '\0') {
            Variant::_clear_internal();
          }
          lVar23 = lVar23 + 1;
          piVar24 = piVar24 + 6;
        } while (lVar1 != lVar23);
      }
      Memory::free_static(piVar20 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_138._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  if ((StringName::configured != '\0') && (local_1e0 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* XRPositionalTracker::get_pose(StringName const&) const */

StringName * XRPositionalTracker::get_pose(StringName *param_1)

{
  uint uVar1;
  Object *pOVar2;
  Object *pOVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  code *pcVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  StringName *in_RDX;
  long lVar17;
  long in_RSI;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *(long *)(in_RSI + 0x200);
  *(undefined8 *)param_1 = 0;
  if ((lVar4 != 0) && (*(int *)(in_RSI + 0x224) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x220) * 4);
    uVar20 = CONCAT44(0,uVar1);
    lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x220) * 8);
    if (*(long *)in_RDX == 0) {
      uVar15 = StringName::get_empty_hash();
    }
    else {
      uVar15 = *(uint *)(*(long *)in_RDX + 0x20);
    }
    if (uVar15 == 0) {
      uVar15 = 1;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (ulong)uVar15 * lVar4;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar20;
    lVar17 = SUB168(auVar5 * auVar9,8);
    uVar18 = *(uint *)(*(long *)(in_RSI + 0x208) + lVar17 * 4);
    iVar16 = SUB164(auVar5 * auVar9,8);
    if (uVar18 != 0) {
      uVar19 = 0;
      while ((uVar18 != uVar15 ||
             (*(long *)(*(long *)(*(long *)(in_RSI + 0x200) + lVar17 * 8) + 0x10) != *(long *)in_RDX
             ))) {
        uVar19 = uVar19 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(iVar16 + 1) * lVar4;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar20;
        lVar17 = SUB168(auVar6 * auVar10,8);
        uVar18 = *(uint *)(*(long *)(in_RSI + 0x208) + lVar17 * 4);
        iVar16 = SUB164(auVar6 * auVar10,8);
        if ((uVar18 == 0) ||
           (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar18 * lVar4, auVar11._8_8_ = 0,
           auVar11._0_8_ = uVar20, auVar8._8_8_ = 0,
           auVar8._0_8_ = (ulong)((uVar1 + iVar16) - SUB164(auVar7 * auVar11,8)) * lVar4,
           auVar12._8_8_ = 0, auVar12._0_8_ = uVar20, SUB164(auVar8 * auVar12,8) < uVar19))
        goto LAB_00103d38;
      }
      local_44 = 0;
      cVar14 = HashMap<StringName,Ref<XRPose>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<XRPose>>>>
               ::_lookup_pos((HashMap<StringName,Ref<XRPose>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<XRPose>>>>
                              *)(in_RSI + 0x1f8),in_RDX,&local_44);
      if (cVar14 == '\0') {
        _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                         "FATAL: Condition \"!exists\" is true.",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar13 = (code *)invalidInstructionException();
        (*pcVar13)();
      }
      pOVar2 = *(Object **)param_1;
      pOVar3 = *(Object **)(*(long *)(*(long *)(in_RSI + 0x200) + (ulong)local_44 * 8) + 0x18);
      if (pOVar3 != pOVar2) {
        *(Object **)param_1 = pOVar3;
        if (pOVar3 != (Object *)0x0) {
          cVar14 = RefCounted::reference();
          if (cVar14 == '\0') {
            *(undefined8 *)param_1 = 0;
          }
        }
        if (pOVar2 != (Object *)0x0) {
          cVar14 = RefCounted::unreference();
          if (cVar14 != '\0') {
            cVar14 = predelete_handler(pOVar2);
            if (cVar14 != '\0') {
              (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
              Memory::free_static(pOVar2,false);
            }
          }
        }
      }
    }
  }
LAB_00103d38:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* XRPositionalTracker::invalidate_pose(StringName const&) */

void __thiscall XRPositionalTracker::invalidate_pose(XRPositionalTracker *this,StringName *param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  char cVar11;
  uint uVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  Object *pOVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  Object *pOVar20;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x200) != 0) && (*(int *)(this + 0x224) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x220) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x220) * 8);
    if (*(long *)param_1 == 0) {
      uVar12 = StringName::get_empty_hash();
    }
    else {
      uVar12 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar18 = CONCAT44(0,uVar1);
    if (uVar12 == 0) {
      uVar12 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar12 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar18;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar17 = *(uint *)(*(long *)(this + 0x208) + lVar15 * 4);
    iVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar17 != 0) {
      uVar19 = 0;
      while ((uVar12 != uVar17 ||
             (*(long *)(*(long *)(*(long *)(this + 0x200) + lVar15 * 8) + 0x10) != *(long *)param_1)
             )) {
        uVar19 = uVar19 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar13 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar18;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar17 = *(uint *)(*(long *)(this + 0x208) + lVar15 * 4);
        iVar13 = SUB164(auVar4 * auVar8,8);
        if ((uVar17 == 0) ||
           (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar17 * lVar2, auVar9._8_8_ = 0,
           auVar9._0_8_ = uVar18, auVar6._8_8_ = 0,
           auVar6._0_8_ = (ulong)((uVar1 + iVar13) - SUB164(auVar5 * auVar9,8)) * lVar2,
           auVar10._8_8_ = 0, auVar10._0_8_ = uVar18, SUB164(auVar6 * auVar10,8) < uVar19))
        goto LAB_00104010;
      }
      plVar14 = (long *)HashMap<StringName,Ref<XRPose>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<XRPose>>>>
                        ::operator[]((HashMap<StringName,Ref<XRPose>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<XRPose>>>>
                                      *)(this + 0x1f8),param_1);
      pOVar16 = (Object *)*plVar14;
      if (pOVar16 != (Object *)0x0) {
        cVar11 = RefCounted::reference();
        if (cVar11 == '\0') {
          pOVar16 = (Object *)0x0;
        }
      }
      XRPose::set_has_tracking_data(SUB81(pOVar16,0));
      cVar11 = RefCounted::reference();
      pOVar20 = (Object *)0x0;
      if (cVar11 != '\0') {
        pOVar20 = pOVar16;
      }
      if (invalidate_pose(StringName_const&)::{lambda()#1}::operator()()::sname == '\0') {
        iVar13 = __cxa_guard_acquire(&invalidate_pose(StringName_const&)::{lambda()#1}::operator()()
                                      ::sname);
        if (iVar13 != 0) {
          _scs_create((char *)&invalidate_pose(StringName_const&)::{lambda()#1}::operator()()::sname
                      ,true);
          __cxa_atexit(StringName::~StringName,
                       &invalidate_pose(StringName_const&)::{lambda()#1}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&invalidate_pose(StringName_const&)::{lambda()#1}::operator()()::sname
                             );
        }
      }
      Variant::Variant((Variant *)local_68,pOVar20);
      local_50 = 0;
      local_48 = (undefined1  [16])0x0;
      local_78[0] = (Variant *)local_68;
      (**(code **)(*(long *)this + 0xd0))
                (this,&invalidate_pose(StringName_const&)::{lambda()#1}::operator()()::sname,
                 local_78,1);
      if (Variant::needs_deinit[(int)local_50] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_68[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (pOVar20 != (Object *)0x0) {
        cVar11 = RefCounted::unreference();
        if (cVar11 != '\0') {
          cVar11 = predelete_handler(pOVar20);
          if (cVar11 != '\0') {
            (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
            Memory::free_static(pOVar20,false);
          }
        }
      }
      cVar11 = RefCounted::unreference();
      if (cVar11 != '\0') {
        cVar11 = predelete_handler(pOVar16);
        if (cVar11 != '\0') {
          (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(pOVar16,false);
            return;
          }
          goto LAB_001040e5;
        }
      }
    }
  }
LAB_00104010:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001040e5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* XRPositionalTracker::set_pose(StringName const&, Transform3D const&, Vector3 const&, Vector3
   const&, XRPose::TrackingConfidence) */

void __thiscall
XRPositionalTracker::set_pose
          (XRPositionalTracker *this,StringName *param_1,undefined8 param_3_00,undefined8 *param_3,
          undefined8 *param_4,undefined4 param_6)

{
  HashMap<StringName,Ref<XRPose>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<XRPose>>>>
  *this_00;
  char cVar1;
  int iVar2;
  long *plVar3;
  RefCounted *this_01;
  long lVar4;
  RefCounted *pRVar5;
  StringName *pSVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  byte bVar8;
  undefined1 auVar9 [16];
  uint local_8c;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  bVar8 = 0;
  this_00 = (HashMap<StringName,Ref<XRPose>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<XRPose>>>>
             *)(this + 0x1f8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  cVar1 = HashMap<StringName,Ref<XRPose>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<XRPose>>>>
          ::_lookup_pos(this_00,param_1,&local_8c);
  if (cVar1 != '\0') {
    plVar3 = (long *)HashMap<StringName,Ref<XRPose>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<XRPose>>>>
                     ::operator[](this_00,param_1);
    pSVar6 = (StringName *)*plVar3;
    if ((pSVar6 != (StringName *)0x0) && (cVar1 = RefCounted::reference(), cVar1 == '\0')) {
      pSVar6 = (StringName *)0x0;
    }
    goto LAB_0010417c;
  }
  this_01 = (RefCounted *)operator_new(0x1d8,"");
  pRVar5 = this_01;
  for (lVar4 = 0x3b; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)pRVar5 = 0;
    pRVar5 = pRVar5 + (ulong)bVar8 * -0x10 + 8;
  }
  RefCounted::RefCounted(this_01);
  this_01[0x17c] = (RefCounted)0x0;
  *(undefined ***)this_01 = &PTR__initialize_classv_001105f8;
  auVar9 = ZEXT416(_LC68);
  *(undefined8 *)(this_01 + 0x180) = 0;
  *(undefined4 *)(this_01 + 0x1a8) = 0x3f800000;
  *(undefined8 *)(this_01 + 0x1ac) = 0;
  *(undefined4 *)(this_01 + 0x1b4) = 0;
  *(undefined8 *)(this_01 + 0x1b8) = 0;
  *(undefined4 *)(this_01 + 0x1c0) = 0;
  *(undefined8 *)(this_01 + 0x1c4) = 0;
  *(undefined4 *)(this_01 + 0x1cc) = 0;
  *(undefined4 *)(this_01 + 0x1d0) = 0;
  *(undefined1 (*) [16])(this_01 + 0x188) = auVar9;
  *(undefined1 (*) [16])(this_01 + 0x198) = auVar9;
  postinitialize_handler((Object *)this_01);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pSVar6 = (StringName *)0x0;
    plVar3 = (long *)HashMap<StringName,Ref<XRPose>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<XRPose>>>>
                     ::operator[](this_00,param_1);
    pRVar5 = (RefCounted *)*plVar3;
    if (pRVar5 == (RefCounted *)0x0) goto LAB_0010417c;
    *plVar3 = 0;
  }
  else {
    cVar1 = RefCounted::reference();
    pSVar6 = (StringName *)(RefCounted *)0x0;
    if (cVar1 != '\0') {
      pSVar6 = (StringName *)this_01;
    }
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler((Object *)this_01), cVar1 != '\0')) {
      (**(code **)(*(long *)this_01 + 0x140))(this_01);
      Memory::free_static(this_01,false);
    }
    plVar3 = (long *)HashMap<StringName,Ref<XRPose>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<XRPose>>>>
                     ::operator[](this_00,param_1);
    pRVar5 = (RefCounted *)*plVar3;
    if (pRVar5 == (RefCounted *)pSVar6) goto LAB_0010417c;
    *plVar3 = (long)pSVar6;
    if ((pSVar6 != (StringName *)0x0) && (cVar1 = RefCounted::reference(), cVar1 == '\0')) {
      *plVar3 = 0;
    }
    if (pRVar5 == (RefCounted *)0x0) goto LAB_0010417c;
  }
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler((Object *)pRVar5), cVar1 != '\0')) {
    (**(code **)(*(long *)pRVar5 + 0x140))(pRVar5);
    Memory::free_static(pRVar5,false);
  }
LAB_0010417c:
  XRPose::set_name(pSVar6);
  XRPose::set_has_tracking_data(SUB81(pSVar6,0));
  XRPose::set_transform(pSVar6);
  XRPose::set_linear_velocity(*param_3,*(undefined4 *)(param_3 + 1),pSVar6);
  XRPose::set_angular_velocity(*param_4,*(undefined4 *)(param_4 + 1),pSVar6);
  XRPose::set_tracking_confidence(pSVar6,param_6);
  cVar1 = RefCounted::reference();
  pOVar7 = (Object *)0x0;
  if (cVar1 != '\0') {
    pOVar7 = (Object *)pSVar6;
  }
  if ((set_pose(StringName_const&,Transform3D_const&,Vector3_const&,Vector3_const&,XRPose::TrackingConfidence)
       ::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&set_pose(StringName_const&,Transform3D_const&,Vector3_const&,Vector3_const&,XRPose::TrackingConfidence)
                                   ::{lambda()#1}::operator()()::sname), iVar2 != 0)) {
    _scs_create((char *)&set_pose(StringName_const&,Transform3D_const&,Vector3_const&,Vector3_const&,XRPose::TrackingConfidence)
                         ::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &set_pose(StringName_const&,Transform3D_const&,Vector3_const&,Vector3_const&,XRPose::TrackingConfidence)
                  ::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&set_pose(StringName_const&,Transform3D_const&,Vector3_const&,Vector3_const&,XRPose::TrackingConfidence)
                         ::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant((Variant *)local_78,pOVar7);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  (**(code **)(*(long *)this + 0xd0))
            (this,&set_pose(StringName_const&,Transform3D_const&,Vector3_const&,Vector3_const&,XRPose::TrackingConfidence)
                   ::{lambda()#1}::operator()()::sname,local_88,1);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (((pOVar7 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
     (cVar1 = predelete_handler(pOVar7), cVar1 == '\0')) {
    cVar1 = RefCounted::unreference();
  }
  else {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
    cVar1 = RefCounted::unreference();
  }
  if ((cVar1 == '\0') || (cVar1 = predelete_handler((Object *)pSVar6), cVar1 == '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)pSVar6 + 0x140))(pSVar6);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(pSVar6,false);
      return;
    }
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x110c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RefCounted::_getv(StringName const&, Variant&) const */

undefined8 RefCounted::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_setv(StringName const&, Variant const&) */

undefined8 RefCounted::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_validate_propertyv(PropertyInfo&) const */

void RefCounted::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RefCounted::_property_can_revertv(StringName const&) const */

undefined8 RefCounted::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RefCounted::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_notificationv(int, bool) */

void RefCounted::_notificationv(int param_1,bool param_2)

{
  return;
}



/* XRPose::is_class_ptr(void*) const */

uint __thiscall XRPose::is_class_ptr(XRPose *this,void *param_1)

{
  return (uint)CONCAT71(0x110c,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* XRPose::_getv(StringName const&, Variant&) const */

undefined8 XRPose::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* XRPose::_setv(StringName const&, Variant const&) */

undefined8 XRPose::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* XRPose::_validate_propertyv(PropertyInfo&) const */

void XRPose::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* XRPose::_property_can_revertv(StringName const&) const */

undefined8 XRPose::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* XRPose::_property_get_revertv(StringName const&, Variant&) const */

undefined8 XRPose::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* XRPose::_notificationv(int, bool) */

void XRPose::_notificationv(int param_1,bool param_2)

{
  return;
}



/* XRPositionalTracker::is_class_ptr(void*) const */

uint __thiscall XRPositionalTracker::is_class_ptr(XRPositionalTracker *this,void *param_1)

{
  return (uint)CONCAT71(0x110c,(undefined4 *)param_1 == &XRTracker::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110c,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* XRPositionalTracker::_getv(StringName const&, Variant&) const */

undefined8 XRPositionalTracker::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* XRPositionalTracker::_setv(StringName const&, Variant const&) */

undefined8 XRPositionalTracker::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* XRPositionalTracker::_validate_propertyv(PropertyInfo&) const */

void XRPositionalTracker::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* XRPositionalTracker::_property_can_revertv(StringName const&) const */

undefined8 XRPositionalTracker::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* XRPositionalTracker::_property_get_revertv(StringName const&, Variant&) const */

undefined8 XRPositionalTracker::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* XRPositionalTracker::_notificationv(int, bool) */

void XRPositionalTracker::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindT<StringName const&, Variant const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<StringName_const&,Variant_const&>::_gen_argument_type
          (MethodBindT<StringName_const&,Variant_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x15;
}



/* MethodBindT<StringName const&, Variant const&>::get_argument_meta(int) const */

undefined8 MethodBindT<StringName_const&,Variant_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Variant, StringName const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindTRC<Variant,StringName_const&>::_gen_argument_type
          (MethodBindTRC<Variant,StringName_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x15;
}



/* MethodBindTRC<Variant, StringName const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Variant,StringName_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<StringName const&, Transform3D const&, Vector3 const&, Vector3 const&,
   XRPose::TrackingConfidence>::get_argument_meta(int) const */

undefined8
MethodBindT<StringName_const&,Transform3D_const&,Vector3_const&,Vector3_const&,XRPose::TrackingConfidence>
::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<StringName const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<StringName_const&>::_gen_argument_type(MethodBindT<StringName_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x15;
}



/* MethodBindT<StringName const&>::get_argument_meta(int) const */

undefined8 MethodBindT<StringName_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Ref<XRPose>, StringName const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Ref<XRPose>,StringName_const&>::_gen_argument_type
          (MethodBindTRC<Ref<XRPose>,StringName_const&> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xfffffffd) + 0x18;
}



/* MethodBindTRC<Ref<XRPose>, StringName const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<XRPose>,StringName_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool, StringName const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,StringName_const&>::_gen_argument_type
          (MethodBindTRC<bool,StringName_const&> *this,int param_1)

{
  return (-(param_1 == 0) & 0x14U) + 1;
}



/* MethodBindTRC<bool, StringName const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool,StringName_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<XRPositionalTracker::TrackerHand>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<XRPositionalTracker::TrackerHand>::_gen_argument_type
          (MethodBindT<XRPositionalTracker::TrackerHand> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<XRPositionalTracker::TrackerHand>::get_argument_meta(int) const */

undefined8 MethodBindT<XRPositionalTracker::TrackerHand>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<XRPositionalTracker::TrackerHand>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<XRPositionalTracker::TrackerHand>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<XRPositionalTracker::TrackerHand>::get_argument_meta(int) const */

undefined8 MethodBindTRC<XRPositionalTracker::TrackerHand>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* MethodBindT<String const&>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<String>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTRC<String>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<StringName const&, Transform3D const&, Vector3 const&, Vector3 const&,
   XRPose::TrackingConfidence>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindT<StringName_const&,Transform3D_const&,Vector3_const&,Vector3_const&,XRPose::TrackingConfidence>
::_gen_argument_type
          (MethodBindT<StringName_const&,Transform3D_const&,Vector3_const&,Vector3_const&,XRPose::TrackingConfidence>
           *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((((uint)param_1 < 5) && (uVar1 = 0x15, param_1 != 0)) && (uVar1 = 0x12, param_1 != 1)) {
    uVar1 = 2;
    if (param_1 != 4) {
      uVar1 = 9;
    }
    return uVar1;
  }
  return uVar1;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001108c8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001108c8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110928;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110928;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<XRPositionalTracker::TrackerHand>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<XRPositionalTracker::TrackerHand>::~MethodBindTRC
          (MethodBindTRC<XRPositionalTracker::TrackerHand> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110988;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<XRPositionalTracker::TrackerHand>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<XRPositionalTracker::TrackerHand>::~MethodBindTRC
          (MethodBindTRC<XRPositionalTracker::TrackerHand> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110988;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<XRPositionalTracker::TrackerHand>::~MethodBindT() */

void __thiscall
MethodBindT<XRPositionalTracker::TrackerHand>::~MethodBindT
          (MethodBindT<XRPositionalTracker::TrackerHand> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001109e8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<XRPositionalTracker::TrackerHand>::~MethodBindT() */

void __thiscall
MethodBindT<XRPositionalTracker::TrackerHand>::~MethodBindT
          (MethodBindT<XRPositionalTracker::TrackerHand> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001109e8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110a48;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110a48;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<XRPose>, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<XRPose>,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<Ref<XRPose>,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110aa8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<XRPose>, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<XRPose>,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<Ref<XRPose>,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110aa8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<StringName const&>::~MethodBindT() */

void __thiscall MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110b08;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<StringName const&>::~MethodBindT() */

void __thiscall MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110b08;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<StringName const&, Transform3D const&, Vector3 const&, Vector3 const&,
   XRPose::TrackingConfidence>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,Transform3D_const&,Vector3_const&,Vector3_const&,XRPose::TrackingConfidence>
::~MethodBindT(MethodBindT<StringName_const&,Transform3D_const&,Vector3_const&,Vector3_const&,XRPose::TrackingConfidence>
               *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110b68;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<StringName const&, Transform3D const&, Vector3 const&, Vector3 const&,
   XRPose::TrackingConfidence>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,Transform3D_const&,Vector3_const&,Vector3_const&,XRPose::TrackingConfidence>
::~MethodBindT(MethodBindT<StringName_const&,Transform3D_const&,Vector3_const&,Vector3_const&,XRPose::TrackingConfidence>
               *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110b68;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Variant, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Variant,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<Variant,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110bc8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Variant, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Variant,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<Variant,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110bc8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<StringName const&, Variant const&>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,Variant_const&>::~MethodBindT
          (MethodBindT<StringName_const&,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110c28;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<StringName const&, Variant const&>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,Variant_const&>::~MethodBindT
          (MethodBindT<StringName_const&,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110c28;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00110498;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00110498;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* XRPose::~XRPose() */

void __thiscall XRPose::~XRPose(XRPose *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_001105f8;
  if ((bVar1) && (*(long *)(this + 0x180) != 0)) {
    StringName::unref();
  }
  *(undefined ***)this = &PTR__initialize_classv_00110498;
  Object::~Object((Object *)this);
  return;
}



/* XRPose::~XRPose() */

void __thiscall XRPose::~XRPose(XRPose *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_001105f8;
  if ((bVar1) && (*(long *)(this + 0x180) != 0)) {
    StringName::unref();
  }
  *(undefined ***)this = &PTR__initialize_classv_00110498;
  Object::~Object((Object *)this);
  operator_delete(this,0x1d8);
  return;
}



/* XRPositionalTracker::_get_class_namev() const */

undefined8 * XRPositionalTracker::_get_class_namev(void)

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
LAB_00105183:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105183;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"XRPositionalTracker");
      goto LAB_001051ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"XRPositionalTracker");
LAB_001051ee:
  return &_get_class_namev()::_class_name_static;
}



/* XRPose::_get_class_namev() const */

undefined8 * XRPose::_get_class_namev(void)

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
LAB_00105263:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105263;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"XRPose");
      goto LAB_001052ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"XRPose");
LAB_001052ce:
  return &_get_class_namev()::_class_name_static;
}



/* RefCounted::_get_class_namev() const */

undefined8 * RefCounted::_get_class_namev(void)

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
LAB_00105343:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105343;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_001053ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_001053ae:
  return &_get_class_namev()::_class_name_static;
}



/* RefCounted::get_class() const */

void RefCounted::get_class(void)

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



/* XRPositionalTracker::get_class() const */

void XRPositionalTracker::get_class(void)

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



/* XRPose::get_class() const */

void XRPose::get_class(void)

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
    StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
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
/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::operator[](StringName const&) */

Variant * __thiscall
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::operator[](HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined8 *puVar41;
  void *pvVar42;
  ulong uVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  long lVar53;
  undefined8 *puVar54;
  long in_FS_OFFSET;
  Variant *local_c8;
  int local_98 [2];
  undefined1 local_90 [16];
  undefined1 local_78 [16];
  long local_68;
  int local_60 [8];
  long local_40;
  
  lVar53 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  if (lVar53 == 0) {
LAB_00106088:
    local_90 = (undefined1  [16])0x0;
    local_98[0] = 0;
    local_98[1] = 0;
    uVar43 = uVar39 * 4;
    uVar48 = uVar39 * 8;
    uVar40 = Memory::alloc_static(uVar43,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar42 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = pvVar42;
    if ((int)uVar39 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar42 + uVar48)) && (pvVar42 < (void *)((long)pvVar3 + uVar43))
         ) {
        uVar43 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar43 * 4) = 0;
          *(undefined8 *)((long)pvVar42 + uVar43 * 8) = 0;
          uVar43 = uVar43 + 1;
        } while (uVar39 != uVar43);
      }
      else {
        memset(pvVar3,0,uVar43);
        memset(pvVar42,0,uVar48);
      }
LAB_00105a9e:
      iVar44 = *(int *)(this + 0x2c);
      if (iVar44 != 0) {
LAB_00105aae:
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar43 = CONCAT44(0,uVar37);
        lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar38 = StringName::get_empty_hash();
        }
        else {
          uVar38 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar38 == 0) {
          uVar38 = 1;
        }
        uVar52 = 0;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)uVar38 * lVar53;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar43;
        lVar46 = SUB168(auVar8 * auVar24,8);
        uVar51 = SUB164(auVar8 * auVar24,8);
        uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
        if (uVar50 != 0) {
          do {
            if ((uVar38 == uVar50) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10) == *(long *)param_1))
            {
              Variant::operator=((Variant *)
                                 (*(long *)(*(long *)(this + 8) + (ulong)uVar51 * 8) + 0x18),
                                 (Variant *)local_98);
              local_c8 = (Variant *)(*(long *)(*(long *)(this + 8) + (ulong)uVar51 * 8) + 0x18);
              goto LAB_00105fcb;
            }
            uVar52 = uVar52 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(uVar51 + 1) * lVar53;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar43;
            lVar46 = SUB168(auVar9 * auVar25,8);
            uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
            uVar51 = SUB164(auVar9 * auVar25,8);
          } while ((uVar50 != 0) &&
                  (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar50 * lVar53, auVar26._8_8_ = 0,
                  auVar26._0_8_ = uVar43, auVar11._8_8_ = 0,
                  auVar11._0_8_ = (ulong)((uVar37 + uVar51) - SUB164(auVar10 * auVar26,8)) * lVar53,
                  auVar27._8_8_ = 0, auVar27._0_8_ = uVar43, uVar52 <= SUB164(auVar11 * auVar27,8)))
          ;
        }
        iVar44 = *(int *)(this + 0x2c);
      }
      goto LAB_00105bd5;
    }
    iVar44 = *(int *)(this + 0x2c);
    if (pvVar42 == (void *)0x0) goto LAB_00105bd5;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00105aae;
LAB_00105bfb:
    uVar37 = *(uint *)(this + 0x28);
    if (uVar37 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_c8 = (Variant *)0x18;
      goto LAB_00105fcb;
    }
    uVar39 = (ulong)(uVar37 + 1);
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar37 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar37 + 1 < 2) {
      uVar39 = 2;
    }
    uVar37 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar48 = (ulong)uVar37;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar42 = *(void **)(this + 8);
    uVar39 = uVar48 * 4;
    uVar43 = uVar48 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(this + 8) = __s_00;
    if (uVar37 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar43)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar48);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar43);
      }
    }
    if (uVar38 != 0) {
      local_c8 = (Variant *)0x0;
      do {
        uVar37 = *(uint *)((long)pvVar3 + (long)local_c8 * 4);
        if (uVar37 != 0) {
          uVar52 = 0;
          lVar53 = *(long *)(this + 0x10);
          uVar50 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar39 = CONCAT44(0,uVar50);
          lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar37 * lVar46;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar39;
          lVar45 = SUB168(auVar12 * auVar28,8);
          puVar1 = (uint *)(lVar53 + lVar45 * 4);
          iVar44 = SUB164(auVar12 * auVar28,8);
          uVar51 = *puVar1;
          uVar40 = *(undefined8 *)((long)pvVar42 + (long)local_c8 * 8);
          while (uVar51 != 0) {
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar51 * lVar46;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar39;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)((uVar50 + iVar44) - SUB164(auVar13 * auVar29,8)) * lVar46;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar39;
            uVar36 = SUB164(auVar14 * auVar30,8);
            uVar49 = uVar40;
            if (uVar36 < uVar52) {
              puVar41 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              *puVar1 = uVar37;
              uVar49 = *puVar41;
              *puVar41 = uVar40;
              uVar37 = uVar51;
              uVar52 = uVar36;
            }
            uVar52 = uVar52 + 1;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)(iVar44 + 1) * lVar46;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar39;
            lVar45 = SUB168(auVar15 * auVar31,8);
            puVar1 = (uint *)(lVar53 + lVar45 * 4);
            iVar44 = SUB164(auVar15 * auVar31,8);
            uVar40 = uVar49;
            uVar51 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar40;
          *puVar1 = uVar37;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        local_c8 = (Variant *)((long)local_c8 + 1);
      } while ((Variant *)(ulong)uVar38 != local_c8);
      Memory::free_static(pvVar42,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar38 = StringName::get_empty_hash();
        lVar53 = *(long *)(this + 8);
      }
      else {
        uVar38 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar38 == 0) {
        uVar38 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar38 * lVar46;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar39;
      lVar45 = SUB168(auVar4 * auVar20,8);
      uVar51 = SUB164(auVar4 * auVar20,8);
      uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar45 * 4);
      if (uVar50 != 0) {
        uVar52 = 0;
        do {
          if ((uVar38 == uVar50) &&
             (*(long *)(*(long *)(lVar53 + lVar45 * 8) + 0x10) == *(long *)param_1)) {
            local_c8 = (Variant *)(*(long *)(lVar53 + (ulong)uVar51 * 8) + 0x18);
            goto LAB_00105a44;
          }
          uVar52 = uVar52 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar51 + 1) * lVar46;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar39;
          lVar45 = SUB168(auVar5 * auVar21,8);
          uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar45 * 4);
          uVar51 = SUB164(auVar5 * auVar21,8);
        } while ((uVar50 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar50 * lVar46, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar39, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar51 + uVar37) - SUB164(auVar6 * auVar22,8)) * lVar46,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar39, uVar52 <= SUB164(auVar7 * auVar23,8)));
      }
      local_98[0] = 0;
      local_98[1] = 0;
      local_90 = (undefined1  [16])0x0;
      uVar39 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar53 == 0) goto LAB_00106088;
      goto LAB_00105a9e;
    }
    local_98[0] = 0;
    local_98[1] = 0;
    local_90 = (undefined1  [16])0x0;
    iVar44 = 0;
LAB_00105bd5:
    if ((float)uVar39 * __LC14 < (float)(iVar44 + 1)) goto LAB_00105bfb;
  }
  local_78 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_68,param_1);
  Variant::Variant((Variant *)local_60,(Variant *)local_98);
  puVar41 = (undefined8 *)operator_new(0x30,"");
  *puVar41 = local_78._0_8_;
  puVar41[1] = local_78._8_8_;
  StringName::StringName((StringName *)(puVar41 + 2),(StringName *)&local_68);
  local_c8 = (Variant *)(puVar41 + 3);
  Variant::Variant(local_c8,(Variant *)local_60);
  if (Variant::needs_deinit[local_60[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  if (*(undefined8 **)(this + 0x20) == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar41;
  }
  else {
    **(undefined8 **)(this + 0x20) = puVar41;
    puVar41[1] = *(undefined8 *)(this + 0x20);
  }
  *(undefined8 **)(this + 0x20) = puVar41;
  if (*(long *)param_1 == 0) {
    uVar37 = StringName::get_empty_hash();
  }
  else {
    uVar37 = *(uint *)(*(long *)param_1 + 0x20);
  }
  if (uVar37 == 0) {
    uVar37 = 1;
  }
  uVar39 = (ulong)uVar37;
  uVar51 = 0;
  lVar53 = *(long *)(this + 0x10);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar43 = CONCAT44(0,uVar38);
  lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar39 * lVar46;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar43;
  lVar47 = SUB168(auVar16 * auVar32,8);
  lVar45 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar53 + lVar47 * 4);
  iVar44 = SUB164(auVar16 * auVar32,8);
  uVar50 = *puVar1;
  while (uVar50 != 0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)uVar50 * lVar46;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar43;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)((uVar38 + iVar44) - SUB164(auVar17 * auVar33,8)) * lVar46;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar43;
    uVar37 = SUB164(auVar18 * auVar34,8);
    puVar54 = puVar41;
    if (uVar37 < uVar51) {
      puVar2 = (undefined8 *)(lVar45 + lVar47 * 8);
      *puVar1 = (uint)uVar39;
      uVar39 = (ulong)uVar50;
      puVar54 = (undefined8 *)*puVar2;
      *puVar2 = puVar41;
      uVar51 = uVar37;
    }
    uVar37 = (uint)uVar39;
    uVar51 = uVar51 + 1;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)(iVar44 + 1) * lVar46;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar43;
    lVar47 = SUB168(auVar19 * auVar35,8);
    puVar1 = (uint *)(lVar53 + lVar47 * 4);
    iVar44 = SUB164(auVar19 * auVar35,8);
    puVar41 = puVar54;
    uVar50 = *puVar1;
  }
  *(undefined8 **)(lVar45 + lVar47 * 8) = puVar41;
  *puVar1 = uVar37;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00105fcb:
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_00105a44:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_c8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* MethodBindTRC<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC3;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 4;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_00106305;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00106305:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x10636d);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC28;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar7 = 0;
      lVar6 = -2;
    }
    else {
      lVar7 = local_50[-1];
      lVar6 = lVar7 + -2;
      if (-1 < lVar6) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar6));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_0010643a;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_60 = 0;
  local_48 = &_LC28;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0010643a:
  plVar4 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar5 = local_50 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar7 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar7 != 0) {
        lVar6 = 0;
        plVar5 = plVar4;
        do {
          if (*plVar5 != 0) {
            LOCK();
            plVar1 = (long *)(*plVar5 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar2 = *plVar5;
              *plVar5 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar7 != lVar6);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<XRPositionalTracker::TrackerHand, void>::get_class_info() */

GetTypeInfo<XRPositionalTracker::TrackerHand,void> * __thiscall
GetTypeInfo<XRPositionalTracker::TrackerHand,void>::get_class_info
          (GetTypeInfo<XRPositionalTracker::TrackerHand,void> *this)

{
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  details local_50 [8];
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "XRPositionalTracker::TrackerHand";
  local_40 = 0x20;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_60 = 0;
  local_68 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
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
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_0010676f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010676f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00106823;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_001068cf;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_001068cf:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00106823;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00106823:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* XRPose::is_class(String const&) const */

undefined8 __thiscall XRPose::is_class(XRPose *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001069bf;
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
LAB_001069bf:
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00106a73;
  }
  cVar5 = String::operator==(param_1,"XRPose");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00106a73:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* XRPositionalTracker::is_class(String const&) const */

undefined8 __thiscall XRPositionalTracker::is_class(XRPositionalTracker *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
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
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_00106b4f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00106b4f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00106c03;
  }
  cVar6 = String::operator==(param_1,"XRPositionalTracker");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00106cbf;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00106cbf:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00106c03;
    }
    cVar6 = String::operator==(param_1,"XRTracker");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_00106d31;
    }
  }
LAB_00106c03:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00106d31:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "RefCounted";
    local_60 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* XRPositionalTracker::~XRPositionalTracker() */

void __thiscall XRPositionalTracker::~XRPositionalTracker(XRPositionalTracker *this)

{
  uint uVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_00110758;
  pvVar5 = *(void **)(this + 0x230);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x254) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x250) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x254) = 0;
        *(undefined1 (*) [16])(this + 0x240) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x238) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x238) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x230);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar1 << 2 != lVar4);
        *(undefined4 *)(this + 0x254) = 0;
        *(undefined1 (*) [16])(this + 0x240) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00106f8a;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x238),false);
  }
LAB_00106f8a:
  pvVar5 = *(void **)(this + 0x200);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x224) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x220) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x224) = 0;
        *(undefined1 (*) [16])(this + 0x210) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x208) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x208) + lVar4) = 0;
            if (*(long *)((long)pvVar5 + 0x18) != 0) {
              cVar3 = RefCounted::unreference();
              if (cVar3 != '\0') {
                pOVar2 = *(Object **)((long)pvVar5 + 0x18);
                cVar3 = predelete_handler(pOVar2);
                if (cVar3 != '\0') {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                }
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x200);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x224) = 0;
        *(undefined1 (*) [16])(this + 0x210) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00107061;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x208),false);
  }
LAB_00107061:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x1e8));
  *(code **)this = XRPose::_bind_methods;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x1b8));
  if ((StringName::configured != '\0') && (*(long *)(this + 0x1b0) != 0)) {
    StringName::unref();
  }
  *(undefined ***)this = &PTR__initialize_classv_00110498;
  Object::~Object((Object *)this);
  return;
}



/* XRPositionalTracker::~XRPositionalTracker() */

void __thiscall XRPositionalTracker::~XRPositionalTracker(XRPositionalTracker *this)

{
  ~XRPositionalTracker(this);
  operator_delete(this,600);
  return;
}



/* XRPose::_initialize_classv() */

void XRPose::_initialize_classv(void)

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
    if (RefCounted::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_68 = 0;
      local_50 = 6;
      local_58 = "Object";
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "RefCounted";
      local_70 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00115010 != RefCounted::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_58 = "RefCounted";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "XRPose";
    local_70 = 0;
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if ((code *)PTR__bind_methods_00115008 != RefCounted::_bind_methods) {
      XRPose::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<XRPositionalTracker::TrackerHand>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<XRPositionalTracker::TrackerHand>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_68;
  details local_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = "XRPositionalTracker::TrackerHand";
  local_58 = 0;
  local_40 = 0x20;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_60,(String *)&local_58);
  StringName::StringName((StringName *)&local_68,(String *)local_60,false);
  *puVar1 = 2;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  puVar1[10] = 0x10006;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  local_50 = 0;
  local_48 = (char *)0x0;
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<String_const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_0010755b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00107650:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00107650;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0010755b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

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
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
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
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_001078dd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001078dd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x001078ff;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x001078ff:
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
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* XRTracker::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall XRTracker::_get_property_listv(XRTracker *this,List *param_1,bool param_2)

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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "XRTracker";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "XRTracker";
  local_98 = 0;
  local_70 = 9;
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
LAB_00107c5d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107c5d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00107c7f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00107c7f:
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
  StringName::StringName((StringName *)&local_78,"XRTracker",false);
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



/* XRPose::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall XRPose::_get_property_listv(XRPose *this,List *param_1,bool param_2)

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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "XRPose";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "XRPose";
  local_98 = 0;
  local_70 = 6;
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
LAB_0010803d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010803d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010805f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010805f:
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
  StringName::StringName((StringName *)&local_78,"XRPose",false);
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



/* XRPositionalTracker::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
XRPositionalTracker::_get_property_listv(XRPositionalTracker *this,List *param_1,bool param_2)

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
    XRTracker::_get_property_listv((XRTracker *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "XRPositionalTracker";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "XRPositionalTracker";
  local_98 = 0;
  local_70 = 0x13;
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
LAB_0010841d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010841d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010843f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010843f:
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
  StringName::StringName((StringName *)&local_78,"XRPositionalTracker",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      XRTracker::_get_property_listv((XRTracker *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<XRPositionalTracker::TrackerHand>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<XRPositionalTracker::TrackerHand>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  long local_a0;
  details local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_90 = 0;
    local_70 = 0x20;
    local_78 = "XRPositionalTracker::TrackerHand";
    String::parse_latin1((StrRange *)&local_90);
    godot::details::enum_qualified_name_to_class_info_name(local_98,(String *)&local_90);
    StringName::StringName((StringName *)&local_a0,(String *)local_98,false);
    local_88 = 0;
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_80,0,
               (CowData<char32_t> *)&local_88,0x10006,(StringName *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    *puVar2 = local_78._0_4_;
    if (*(long *)(puVar2 + 2) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_60;
    if (*(long *)(puVar2 + 8) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
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



/* MethodBind* create_method_bind<XRPositionalTracker, String>(String (XRPositionalTracker::*)()
   const) */

MethodBind * create_method_bind<XRPositionalTracker,String>(_func_String *param_1)

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
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001108c8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "XRPositionalTracker";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<XRPositionalTracker, String const&>(void
   (XRPositionalTracker::*)(String const&)) */

MethodBind * create_method_bind<XRPositionalTracker,String_const&>(_func_void_String_ptr *param_1)

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
  *(_func_void_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110928;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "XRPositionalTracker";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<XRPositionalTracker,
   XRPositionalTracker::TrackerHand>(XRPositionalTracker::TrackerHand (XRPositionalTracker::*)()
   const) */

MethodBind *
create_method_bind<XRPositionalTracker,XRPositionalTracker::TrackerHand>(_func_TrackerHand *param_1)

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
  *(_func_TrackerHand **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110988;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "XRPositionalTracker";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<XRPositionalTracker, XRPositionalTracker::TrackerHand>(void
   (XRPositionalTracker::*)(XRPositionalTracker::TrackerHand)) */

MethodBind *
create_method_bind<XRPositionalTracker,XRPositionalTracker::TrackerHand>
          (_func_void_TrackerHand *param_1)

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
  *(_func_void_TrackerHand **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001109e8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "XRPositionalTracker";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<XRPositionalTracker, bool, StringName const&>(bool
   (XRPositionalTracker::*)(StringName const&) const) */

MethodBind *
create_method_bind<XRPositionalTracker,bool,StringName_const&>(_func_bool_StringName_ptr *param_1)

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
  *(_func_bool_StringName_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110a48;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "XRPositionalTracker";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<XRPositionalTracker, Ref<XRPose>, StringName const&>(Ref<XRPose>
   (XRPositionalTracker::*)(StringName const&) const) */

MethodBind *
create_method_bind<XRPositionalTracker,Ref<XRPose>,StringName_const&>
          (_func_Ref_StringName_ptr *param_1)

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
  *(_func_Ref_StringName_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110aa8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "XRPositionalTracker";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<XRPositionalTracker, StringName const&>(void
   (XRPositionalTracker::*)(StringName const&)) */

MethodBind *
create_method_bind<XRPositionalTracker,StringName_const&>(_func_void_StringName_ptr *param_1)

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
  *(_func_void_StringName_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110b08;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "XRPositionalTracker";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<XRPositionalTracker, StringName const&, Transform3D const&,
   Vector3 const&, Vector3 const&, XRPose::TrackingConfidence>(void
   (XRPositionalTracker::*)(StringName const&, Transform3D const&, Vector3 const&, Vector3 const&,
   XRPose::TrackingConfidence)) */

MethodBind *
create_method_bind<XRPositionalTracker,StringName_const&,Transform3D_const&,Vector3_const&,Vector3_const&,XRPose::TrackingConfidence>
          (_func_void_StringName_ptr_Transform3D_ptr_Vector3_ptr_Vector3_ptr_TrackingConfidence
           *param_1)

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
  *(_func_void_StringName_ptr_Transform3D_ptr_Vector3_ptr_Vector3_ptr_TrackingConfidence **)
   (this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110b68;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 5;
  local_40 = 0;
  local_38 = "XRPositionalTracker";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<XRPositionalTracker, Variant, StringName const&>(Variant
   (XRPositionalTracker::*)(StringName const&) const) */

MethodBind *
create_method_bind<XRPositionalTracker,Variant,StringName_const&>
          (_func_Variant_StringName_ptr *param_1)

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
  *(_func_Variant_StringName_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110bc8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "XRPositionalTracker";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<XRPositionalTracker, StringName const&, Variant const&>(void
   (XRPositionalTracker::*)(StringName const&, Variant const&)) */

MethodBind *
create_method_bind<XRPositionalTracker,StringName_const&,Variant_const&>
          (_func_void_StringName_ptr_Variant_ptr *param_1)

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
  *(_func_void_StringName_ptr_Variant_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110c28;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "XRPositionalTracker";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* XRPositionalTracker::_bind_methods() [clone .cold] */

void XRPositionalTracker::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* XRPositionalTracker::_initialize_classv() */

void XRPositionalTracker::_initialize_classv(void)

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
    if (XRTracker::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "RefCounted";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_00115010 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "XRTracker";
      local_70 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00115018 != RefCounted::_bind_methods) {
        XRTracker::_bind_methods();
      }
      XRTracker::initialize_class()::initialized = '\x01';
    }
    local_58 = "XRTracker";
    local_68 = 0;
    local_50 = 9;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "XRPositionalTracker";
    local_70 = 0;
    local_50 = 0x13;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* HashMap<StringName, Ref<XRPose>, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Ref<XRPose> > > >::_lookup_pos(StringName
   const&, unsigned int&) const */

undefined8 __thiscall
HashMap<StringName,Ref<XRPose>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<XRPose>>>>
::_lookup_pos(HashMap<StringName,Ref<XRPose>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<XRPose>>>>
              *this,StringName *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar15 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar15;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == *(long *)param_1)) {
          *param_2 = uVar12;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Ref<XRPose>, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Ref<XRPose> > > >::operator[](StringName const&)
    */

undefined8 * __thiscall
HashMap<StringName,Ref<XRPose>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<XRPose>>>>
::operator[](HashMap<StringName,Ref<XRPose>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<XRPose>>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  void *__s;
  long lVar6;
  undefined8 *puVar7;
  Object *pOVar8;
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
  char cVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  undefined8 uVar29;
  void *__s_00;
  undefined8 *puVar30;
  long lVar31;
  void *pvVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  undefined8 uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 *puVar41;
  long in_FS_OFFSET;
  uint local_70;
  uint local_6c;
  undefined1 local_68 [16];
  long local_58;
  Object *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  cVar25 = _lookup_pos(this,param_1,&local_70);
  if (cVar25 != '\0') {
    puVar30 = *(undefined8 **)(*(long *)(this + 8) + (ulong)local_70 * 8);
    goto LAB_00109f4b;
  }
  uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
    uVar36 = (ulong)uVar27;
    uVar28 = uVar36 * 4;
    uVar40 = uVar36 * 8;
    uVar29 = Memory::alloc_static(uVar28,false);
    *(undefined8 *)(this + 0x10) = uVar29;
    pvVar32 = (void *)Memory::alloc_static(uVar40,false);
    *(void **)(this + 8) = pvVar32;
    if (uVar27 != 0) {
      pvVar5 = *(void **)(this + 0x10);
      if ((pvVar5 < (void *)((long)pvVar32 + uVar40)) && (pvVar32 < (void *)((long)pvVar5 + uVar28))
         ) {
        uVar28 = 0;
        do {
          *(undefined4 *)((long)pvVar5 + uVar28 * 4) = 0;
          *(undefined8 *)((long)pvVar32 + uVar28 * 8) = 0;
          uVar28 = uVar28 + 1;
        } while (uVar36 != uVar28);
      }
      else {
        memset(pvVar5,0,uVar28);
        memset(pvVar32,0,uVar40);
      }
    }
  }
  local_6c = 0;
  cVar25 = _lookup_pos(this,param_1,&local_6c);
  if (cVar25 != '\0') {
    uVar28 = (ulong)local_6c;
    puVar30 = *(undefined8 **)(*(long *)(this + 8) + uVar28 * 8);
    pOVar8 = (Object *)puVar30[3];
    if (pOVar8 != (Object *)0x0) {
      puVar30[3] = 0;
      cVar25 = RefCounted::unreference();
      if ((cVar25 != '\0') && (cVar25 = predelete_handler(pOVar8), cVar25 != '\0')) {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
      puVar30 = *(undefined8 **)(*(long *)(this + 8) + uVar28 * 8);
    }
    goto LAB_00109f4b;
  }
  if ((float)uVar27 * __LC14 < (float)(*(int *)(this + 0x2c) + 1)) {
    uVar27 = *(uint *)(this + 0x28);
    if (uVar27 == 0x1c) {
      puVar30 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00109f4b;
    }
    uVar28 = (ulong)(uVar27 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar27 * 4);
    if (uVar27 + 1 < 2) {
      uVar28 = 2;
    }
    uVar27 = *(uint *)(hash_table_size_primes + uVar28 * 4);
    uVar36 = (ulong)uVar27;
    *(int *)(this + 0x28) = (int)uVar28;
    pvVar32 = *(void **)(this + 8);
    uVar28 = uVar36 * 4;
    uVar40 = uVar36 * 8;
    pvVar5 = *(void **)(this + 0x10);
    uVar29 = Memory::alloc_static(uVar28,false);
    *(undefined8 *)(this + 0x10) = uVar29;
    __s_00 = (void *)Memory::alloc_static(uVar40,false);
    *(void **)(this + 8) = __s_00;
    if (uVar27 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar40)) && (__s_00 < (void *)((long)__s + uVar28))) {
        uVar28 = 0;
        do {
          *(undefined4 *)((long)__s + uVar28 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar28 * 8) = 0;
          uVar28 = uVar28 + 1;
        } while (uVar28 != uVar36);
      }
      else {
        memset(__s,0,uVar28);
        memset(__s_00,0,uVar40);
      }
    }
    if (uVar3 != 0) {
      uVar28 = 0;
      do {
        uVar27 = *(uint *)((long)pvVar5 + uVar28 * 4);
        if (uVar27 != 0) {
          lVar31 = *(long *)(this + 0x10);
          uVar38 = 0;
          uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar40 = CONCAT44(0,uVar4);
          lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar27 * lVar6;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar40;
          lVar34 = SUB168(auVar9 * auVar17,8);
          puVar1 = (uint *)(lVar31 + lVar34 * 4);
          iVar33 = SUB164(auVar9 * auVar17,8);
          uVar39 = *puVar1;
          uVar29 = *(undefined8 *)((long)pvVar32 + uVar28 * 8);
          while (uVar39 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar39 * lVar6;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar40;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar4 + iVar33) - SUB164(auVar10 * auVar18,8)) * lVar6;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar40;
            uVar26 = SUB164(auVar11 * auVar19,8);
            uVar37 = uVar29;
            if (uVar26 < uVar38) {
              *puVar1 = uVar27;
              puVar30 = (undefined8 *)((long)__s_00 + lVar34 * 8);
              uVar37 = *puVar30;
              *puVar30 = uVar29;
              uVar27 = uVar39;
              uVar38 = uVar26;
            }
            uVar38 = uVar38 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar33 + 1) * lVar6;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar40;
            lVar34 = SUB168(auVar12 * auVar20,8);
            puVar1 = (uint *)(lVar31 + lVar34 * 4);
            iVar33 = SUB164(auVar12 * auVar20,8);
            uVar29 = uVar37;
            uVar39 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar34 * 8) = uVar29;
          *puVar1 = uVar27;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar28 = uVar28 + 1;
      } while (uVar3 != uVar28);
      Memory::free_static(pvVar32,false);
      Memory::free_static(pvVar5,false);
    }
  }
  local_68 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = (Object *)0x0;
  puVar30 = (undefined8 *)operator_new(0x20,"");
  *puVar30 = local_68._0_8_;
  puVar30[1] = local_68._8_8_;
  StringName::StringName((StringName *)(puVar30 + 2),(StringName *)&local_58);
  puVar30[3] = 0;
  if (local_50 != (Object *)0x0) {
    puVar30[3] = local_50;
    cVar25 = RefCounted::reference();
    if (cVar25 == '\0') {
      puVar30[3] = 0;
    }
    if (((local_50 != (Object *)0x0) &&
        (cVar25 = RefCounted::unreference(), pOVar8 = local_50, cVar25 != '\0')) &&
       (cVar25 = predelete_handler(local_50), cVar25 != '\0')) {
      (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
      Memory::free_static(pOVar8,false);
    }
  }
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  puVar7 = *(undefined8 **)(this + 0x20);
  if (puVar7 == (undefined8 *)0x0) {
    lVar31 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar30;
    *(undefined8 **)(this + 0x20) = puVar30;
    if (lVar31 == 0) goto LAB_00109ffd;
LAB_00109e58:
    uVar27 = *(uint *)(lVar31 + 0x20);
  }
  else {
    *puVar7 = puVar30;
    puVar30[1] = puVar7;
    lVar31 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar30;
    if (lVar31 != 0) goto LAB_00109e58;
LAB_00109ffd:
    uVar27 = StringName::get_empty_hash();
  }
  if (uVar27 == 0) {
    uVar27 = 1;
  }
  uVar28 = (ulong)uVar27;
  lVar31 = *(long *)(this + 0x10);
  uVar39 = 0;
  lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar3);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar28 * lVar6;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar40;
  lVar35 = SUB168(auVar13 * auVar21,8);
  lVar34 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar31 + lVar35 * 4);
  iVar33 = SUB164(auVar13 * auVar21,8);
  uVar4 = *puVar1;
  puVar7 = puVar30;
  while (uVar4 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar4 * lVar6;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar40;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((iVar33 + uVar3) - SUB164(auVar14 * auVar22,8)) * lVar6;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar40;
    uVar27 = SUB164(auVar15 * auVar23,8);
    puVar41 = puVar7;
    if (uVar27 < uVar39) {
      *puVar1 = (uint)uVar28;
      uVar28 = (ulong)uVar4;
      puVar2 = (undefined8 *)(lVar34 + lVar35 * 8);
      puVar41 = (undefined8 *)*puVar2;
      *puVar2 = puVar7;
      uVar39 = uVar27;
    }
    uVar27 = (uint)uVar28;
    uVar39 = uVar39 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar33 + 1) * lVar6;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar40;
    lVar35 = SUB168(auVar16 * auVar24,8);
    puVar1 = (uint *)(lVar31 + lVar35 * 4);
    iVar33 = SUB164(auVar16 * auVar24,8);
    puVar7 = puVar41;
    uVar4 = *puVar1;
  }
  *(undefined8 **)(lVar34 + lVar35 * 8) = puVar7;
  *puVar1 = uVar27;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00109f4b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar30 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010a308) */
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



/* MethodBindT<StringName const&, Variant const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<StringName_const&,Variant_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010a7a1;
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
                    /* WARNING: Could not recover jumptable at 0x0010a624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(undefined8 *)(param_3 + 8));
    return;
  }
LAB_0010a7a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, Variant const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<StringName_const&,Variant_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010a989;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010a810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_0010a989:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Variant, StringName const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<Variant,StringName_const&>::validated_call
          (MethodBindTRC<Variant,StringName_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a9fd;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((Variant *)local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8);
  Variant::operator=(param_3,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0010a9fd:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Variant, StringName const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Variant,StringName_const&>::ptrcall
          (MethodBindTRC<Variant,StringName_const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ac0b;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((Variant *)local_48,param_1 + *(long *)(this + 0x60),*param_2);
  Variant::operator=((Variant *)param_3,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0010ac0b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, Transform3D const&, Vector3 const&, Vector3 const&,
   XRPose::TrackingConfidence>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<StringName_const&,Transform3D_const&,Vector3_const&,Vector3_const&,XRPose::TrackingConfidence>
     ::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010afa9;
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
                    /* WARNING: Could not recover jumptable at 0x0010ae30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(undefined8 *)(*(long *)(param_3 + 8) + 8),*(long *)(param_3 + 0x10) + 8,
               *(long *)(param_3 + 0x18) + 8,*(undefined4 *)(*(long *)(param_3 + 0x20) + 8));
    return;
  }
LAB_0010afa9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, Transform3D const&, Vector3 const&, Vector3 const&,
   XRPose::TrackingConfidence>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<StringName_const&,Transform3D_const&,Vector3_const&,Vector3_const&,XRPose::TrackingConfidence>
     ::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010b199;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010b01f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8),*(undefined8 *)((long)param_3 + 0x10),
               *(undefined8 *)((long)param_3 + 0x18),**(undefined4 **)((long)param_3 + 0x20));
    return;
  }
LAB_0010b199:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<StringName_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010b371;
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
                    /* WARNING: Could not recover jumptable at 0x0010b1fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0010b371:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<StringName_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010b551;
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
                    /* WARNING: Could not recover jumptable at 0x0010b3d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010b551:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, StringName const&>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<bool,StringName_const&>::validated_call
          (MethodBindTRC<bool,StringName_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Variant VVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010b5a9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2 + 8);
  param_3[8] = VVar1;
LAB_0010b5a9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, StringName const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,StringName_const&>::ptrcall
          (MethodBindTRC<bool,StringName_const&> *this,Object *param_1,void **param_2,void *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010b785;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2);
  *(undefined1 *)param_3 = uVar1;
LAB_0010b785:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<XRPositionalTracker::TrackerHand>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<XRPositionalTracker::TrackerHand>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010bae1;
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
                    /* WARNING: Could not recover jumptable at 0x0010b96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010bae1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<XRPositionalTracker::TrackerHand>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<XRPositionalTracker::TrackerHand>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010bcc1;
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
                    /* WARNING: Could not recover jumptable at 0x0010bb4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0010bcc1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<XRPositionalTracker::TrackerHand>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<XRPositionalTracker::TrackerHand>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
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
      _err_print_error(&_LC81,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010be20;
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
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
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
LAB_0010be20:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<XRPositionalTracker::TrackerHand>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<XRPositionalTracker::TrackerHand>::validated_call
          (MethodBindTRC<XRPositionalTracker::TrackerHand> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
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
      goto LAB_0010c034;
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
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0010c034:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<XRPositionalTracker::TrackerHand>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<XRPositionalTracker::TrackerHand>::ptrcall
          (MethodBindTRC<XRPositionalTracker::TrackerHand> *this,Object *param_1,void **param_2,
          void *param_3)

{
  uint uVar1;
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
      goto LAB_0010c1e3;
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
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0010c1e3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010c521;
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
                    /* WARNING: Could not recover jumptable at 0x0010c3ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0010c521:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010c701;
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
                    /* WARNING: Could not recover jumptable at 0x0010c589. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010c701:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String>::call
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
      _err_print_error(&_LC81,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c7e0;
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
      (*(code *)pVVar2)((CowData<char32_t> *)&local_58);
      Variant::Variant((Variant *)local_48,(String *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
LAB_0010c7e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String>::validated_call
          (MethodBindTRC<String> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
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
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10a4d8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ca1c;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0010ca1c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String>::ptrcall
          (MethodBindTRC<String> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
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
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x10a4d8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010cbed;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0010cbed:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<XRPose>, StringName const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<XRPose>,StringName_const&>::ptrcall
          (MethodBindTRC<Ref<XRPose>,StringName_const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x10a4d8;
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010ce07;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_0010ce07;
    *(undefined8 *)param_3 = 0;
    goto LAB_0010ce51;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_0010ce51;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_0010ce51:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0010ce07;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_0010ce07:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, StringName const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<bool,StringName_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC81,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d180;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010d1d0;
LAB_0010d1c0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010d1d0:
        uVar7 = 4;
        goto LAB_0010d175;
      }
      if (in_R8D == 1) goto LAB_0010d1c0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x15);
    uVar4 = _LC82;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_68);
    bVar6 = (bool)(*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_68)
    ;
    Variant::Variant((Variant *)local_58,bVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    bVar6 = StringName::configured != '\0';
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if ((bVar6) && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    uVar7 = 3;
LAB_0010d175:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010d180:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Ref<XRPose>, StringName const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Ref<XRPose>,StringName_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  Object *local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = (Object *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC81,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d570;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010d5c0;
LAB_0010d5b0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010d5c0:
        uVar7 = 4;
        goto LAB_0010d565;
      }
      if (in_R8D == 1) goto LAB_0010d5b0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x15);
    uVar4 = _LC82;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_68);
    (*(code *)pVVar12)(&local_70,(Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_68);
    Variant::Variant((Variant *)local_58,local_70);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if (((local_70 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar5 = local_70, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_70), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    uVar7 = 3;
LAB_0010d565:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010d570:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<StringName const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<StringName_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC81,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d970;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010d9c0;
LAB_0010d9b0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010d9c0:
        uVar6 = 4;
        goto LAB_0010d965;
      }
      if (in_R8D == 1) goto LAB_0010d9b0;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x15);
    uVar4 = _LC82;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    uVar6 = 3;
LAB_0010d965:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0010d970:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Variant, StringName const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Variant,StringName_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  bool bVar12;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_68 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC81,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010dcf8;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010dd40;
LAB_0010dd30:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010dd40:
        uVar6 = 4;
        goto LAB_0010dced;
      }
      if (in_R8D == 1) goto LAB_0010dd30;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x15);
    uVar4 = _LC82;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_68);
    (*(code *)pVVar11)(local_58,(Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    bVar12 = StringName::configured != '\0';
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if ((bVar12) && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    uVar6 = 3;
LAB_0010dced:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0010dcf8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<StringName const&, Variant const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<StringName_const&,Variant_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  Variant *pVVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *pVVar12;
  int iVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar8 = (long *)plVar11[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar8 = (long *)(plVar11[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC81,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e0c0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar10 = param_2[5];
    iVar6 = 2 - in_R8D;
    if (pVVar10 == (Variant *)0x0) {
      if (iVar6 != 0) goto LAB_0010e110;
      pVVar12 = *(Variant **)param_4;
LAB_0010e12d:
      pVVar10 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      iVar13 = (int)lVar2;
      if (iVar13 < iVar6) {
LAB_0010e110:
        uVar7 = 4;
        goto LAB_0010e0fd;
      }
      if (in_R8D == 0) {
        lVar9 = (long)(iVar13 + -2);
        if (lVar2 <= lVar9) goto LAB_0010e1f0;
        pVVar12 = pVVar10 + lVar9 * 0x18;
      }
      else {
        pVVar12 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0010e12d;
      }
      lVar9 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0010e1f0:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0);
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = 1;
    }
    Variant::Variant((Variant *)local_58,pVVar10);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0x15);
    uVar4 = _LC82;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_68);
    (*(code *)pVVar14)((Variant *)((long)plVar11 + (long)pVVar1),(Variant *)&local_68,
                       (Variant *)local_58);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    uVar7 = 3;
LAB_0010e0fd:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_0010e0c0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, Transform3D const&, Vector3 const&, Vector3 const&,
   XRPose::TrackingConfidence>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<StringName_const&,Transform3D_const&,Vector3_const&,Vector3_const&,XRPose::TrackingConfidence>
         ::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  long lVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  long in_FS_OFFSET;
  char *local_118;
  undefined8 local_110;
  char *local_108;
  undefined8 local_100;
  undefined1 local_f0 [12];
  undefined1 local_e4 [12];
  undefined1 local_d8 [12];
  undefined1 local_cc [12];
  undefined1 local_c0 [12];
  undefined1 local_b4 [12];
  Variant *local_a8 [6];
  undefined1 local_78 [4] [12];
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar12 == (long *)0x0) || (plVar12[1] == 0)) || (*(char *)(plVar12[1] + 0x2e) == '\0')) {
LAB_0010e380:
    pVVar15 = param_2[0xb];
    pVVar1 = param_2[0xc];
    if (in_R8D < 6) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant *)0x0) {
        iVar11 = 0;
        lVar14 = 0;
      }
      else {
        lVar14 = *(long *)(pVVar2 + -8);
        iVar11 = (int)lVar14;
      }
      if ((int)(5 - in_R8D) <= iVar11) {
        lVar7 = 0;
        do {
          if ((int)lVar7 < (int)in_R8D) {
            pVVar13 = *(Variant **)(param_4 + lVar7 * 8);
          }
          else {
            uVar10 = iVar11 + -5 + (int)lVar7;
            if (lVar14 <= (int)uVar10) {
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar10,lVar14,"p_index",
                         "size()","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            pVVar13 = pVVar2 + (ulong)uVar10 * 0x18;
          }
          local_a8[lVar7] = pVVar13;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 5);
        *in_R9 = 0;
        if (((ulong)pVVar15 & 1) != 0) {
          pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)local_a8[4],2);
        uVar4 = _LC85;
        if (cVar5 == '\0') {
          *in_R9 = 2;
          *(undefined8 *)(in_R9 + 1) = uVar4;
        }
        uVar8 = Variant::operator_cast_to_long(local_a8[4]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)local_a8[3],9);
        uVar4 = _LC86;
        if (cVar5 == '\0') {
          *in_R9 = 2;
          *(undefined8 *)(in_R9 + 1) = uVar4;
        }
        local_f0 = Variant::operator_cast_to_Vector3(local_a8[3]);
        local_c0 = local_f0;
        local_b4 = local_f0;
        local_78[0] = local_f0;
        cVar5 = Variant::can_convert_strict(*(undefined4 *)local_a8[2],9);
        uVar4 = _LC87;
        if (cVar5 == '\0') {
          *in_R9 = 2;
          *(undefined8 *)(in_R9 + 1) = uVar4;
        }
        local_e4 = Variant::operator_cast_to_Vector3(local_a8[2]);
        local_d8 = local_e4;
        local_cc = local_e4;
        local_78[0] = local_e4;
        cVar5 = Variant::can_convert_strict(*(undefined4 *)local_a8[1],0x12);
        uVar4 = _LC88;
        if (cVar5 == '\0') {
          *in_R9 = 2;
          *(undefined8 *)(in_R9 + 1) = uVar4;
        }
        Variant::operator_cast_to_Transform3D((Variant *)local_78);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)local_a8[0],0x15);
        uVar4 = _LC82;
        if (cVar5 == '\0') {
          *in_R9 = 2;
          *(undefined8 *)(in_R9 + 1) = uVar4;
        }
        Variant::operator_cast_to_StringName((Variant *)&local_108);
        (*(code *)pVVar15)((Variant *)((long)plVar12 + (long)pVVar1),(Variant *)&local_108,
                           (Variant *)local_78,local_e4,local_f0,uVar8 & 0xffffffff);
        local_118 = local_108;
        goto joined_r0x0010e5a7;
      }
      uVar6 = 4;
    }
    else {
      uVar6 = 3;
    }
    *in_R9 = uVar6;
    in_R9[2] = 5;
  }
  else {
    StringName::StringName((StringName *)&local_108,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar9 = (long *)plVar12[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar12 + 0x40))();
      }
    }
    else {
      plVar9 = (long *)(plVar12[1] + 0x20);
    }
    if (local_108 != (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
      goto LAB_0010e380;
    }
    if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
      StringName::unref();
    }
    MethodBind::get_name();
    local_108 = "Cannot call method bind \'%s\' on placeholder instance.";
    local_110 = 0;
    local_100 = 0x35;
    String::parse_latin1((StrRange *)&local_110);
    vformat<StringName>((StringName *)&local_108,(StrRange *)&local_110,&local_118);
    _err_print_error(&_LC81,"./core/object/method_bind.h",0x154,
                     "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                     ,(StringName *)&local_108,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
joined_r0x0010e5a7:
    if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
      StringName::unref();
    }
  }
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC81,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e910;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010e960;
LAB_0010e950:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010e960:
        uVar6 = 4;
        goto LAB_0010e905;
      }
      if (in_R8D == 1) goto LAB_0010e950;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,4);
    uVar4 = _LC89;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_0010e905:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0010e910:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<XRPose>, StringName const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<Ref<XRPose>,StringName_const&>::validated_call
          (MethodBindTRC<Ref<XRPose>,StringName_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
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
      goto LAB_0010ebad;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*param_2 + 8);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0010ebad:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   XRPositionalTracker::TrackerHand>(__UnexistingClass*, void
   (__UnexistingClass::*)(XRPositionalTracker::TrackerHand), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,XRPositionalTracker::TrackerHand>
               (__UnexistingClass *param_1,_func_void_TrackerHand *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

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
    goto LAB_0010ee6d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0010eed0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010eed0:
      uVar6 = 4;
LAB_0010ee6d:
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
      goto LAB_0010edeb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010edeb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_TrackerHand **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC90;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0010ee46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<XRPositionalTracker::TrackerHand>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<XRPositionalTracker::TrackerHand>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC81,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010ef36;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,XRPositionalTracker::TrackerHand>
            (p_Var2,(_func_void_TrackerHand *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010ef36:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<StringName const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<StringName_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_0010f139;
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,0x15);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_0010f238:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_0010f238;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_78._0_4_;
  if (*(long *)(param_3 + 8) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_70._8_8_) {
    StringName::unref();
    uVar3 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_60;
  if (*(long *)(param_3 + 0x20) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_58;
    local_58 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  iVar5 = *param_2;
LAB_0010f139:
  *param_2 = iVar5 + 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<bool, StringName const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,StringName_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<StringName_const&>
              (0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_0010f3e8;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 1;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_0010f4cf:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0010f4cf;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010f3e8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<XRPose>, StringName const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<XRPose>,StringName_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<StringName_const&>
              (0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_0010f5e8;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = "XRPose";
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 6;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0010f6e7:
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_0010f6e7;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010f5e8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<StringName_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Variant, StringName const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Variant,StringName_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_68;
  ulong local_60;
  long local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_20;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  if (in_EDX == 0) {
    local_40 = 0;
    local_38 = 0;
    local_30 = 6;
    local_60 = local_60 & 0xffffffff00000000;
    local_50 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<StringName_const&>
              (0,(int *)&local_60,(PropertyInfo *)&local_58);
    uVar2 = local_50._0_8_;
    uVar3 = local_50._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_50._8_8_;
    local_50 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_58;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_40;
    *(undefined8 *)(puVar4 + 8) = local_38;
    puVar4[10] = local_30;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  }
  else {
    *puVar4 = 0;
    puVar4[6] = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    puVar4[10] = 0x20006;
    *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
    local_60 = 0;
    local_68 = 0;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, Variant const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<StringName_const&,Variant_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar4;
  long in_FS_OFFSET;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  pPVar4 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar4 = 0;
  *(undefined4 *)(pPVar4 + 0x18) = 0;
  *(undefined8 *)(pPVar4 + 0x20) = 0;
  *(undefined4 *)(pPVar4 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar4 + 8) = (undefined1  [16])0x0;
  local_74 = 0;
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_74,pPVar4);
  if (in_EDX == local_74) {
    local_60 = 0;
    local_50 = (undefined1  [16])0x0;
    local_68 = 0;
    local_70 = 0;
    local_58 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0x20006;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)pPVar4 = (undefined4)local_58;
    if (*(long *)(pPVar4 + 8) != local_50._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar4 + 8));
      uVar2 = local_50._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_50._8_8_;
      local_50 = auVar1 << 0x40;
      *(undefined8 *)(pPVar4 + 8) = uVar2;
    }
    if (*(long *)(pPVar4 + 0x10) != local_50._8_8_) {
      StringName::unref();
      uVar2 = local_50._8_8_;
      local_50._8_8_ = 0;
      *(undefined8 *)(pPVar4 + 0x10) = uVar2;
    }
    *(undefined4 *)(pPVar4 + 0x18) = (undefined4)local_40;
    if (*(long *)(pPVar4 + 0x20) != local_38) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar4 + 0x20));
      lVar3 = local_38;
      local_38 = 0;
      *(long *)(pPVar4 + 0x20) = lVar3;
    }
    *(undefined4 *)(pPVar4 + 0x28) = local_30;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_58);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Vector3 const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Vector3_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_0010fad9;
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,9);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_0010fbd8:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_0010fbd8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_78._0_4_;
  if (*(long *)(param_3 + 8) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_70._8_8_) {
    StringName::unref();
    uVar3 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_60;
  if (*(long *)(param_3 + 0x20) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_58;
    local_58 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  iVar5 = *param_2;
LAB_0010fad9:
  *param_2 = iVar5 + 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void call_get_argument_type_info<StringName const&, Transform3D const&, Vector3 const&, Vector3
   const&, XRPose::TrackingConfidence>(int, PropertyInfo&) */

void call_get_argument_type_info<StringName_const&,Transform3D_const&,Vector3_const&,Vector3_const&,XRPose::TrackingConfidence>
               (int param_1,PropertyInfo *param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a4 = 0;
  call_get_argument_type_info_helper<StringName_const&>(param_1,&local_a4,param_2);
  iVar1 = local_a4;
  if (param_1 == local_a4) {
    local_80 = 0;
    local_88 = 0;
    local_78 = "";
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0x12,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88
               ,6,&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_2 = local_78._0_4_;
    if (*(long *)(param_2 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar2 = local_70;
      local_70 = 0;
      *(long *)(param_2 + 8) = lVar2;
    }
    if (*(long *)(param_2 + 0x10) != local_68) {
      StringName::unref();
      lVar2 = local_68;
      local_68 = 0;
      *(long *)(param_2 + 0x10) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x18) = local_60;
    if (*(long *)(param_2 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar2 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x20) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  local_a4 = iVar1 + 1;
  call_get_argument_type_info_helper<Vector3_const&>(param_1,&local_a4,param_2);
  call_get_argument_type_info_helper<Vector3_const&>(param_1,&local_a4,param_2);
  if (param_1 == local_a4) {
    local_90 = 0;
    local_70 = 0x1a;
    local_78 = "XRPose::TrackingConfidence";
    String::parse_latin1((StrRange *)&local_90);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_88,(String *)&local_90)
    ;
    StringName::StringName((StringName *)&local_80,(String *)&local_88,false);
    local_98 = 0;
    local_a0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_a0,0,
               (CowData<char32_t> *)&local_98,0x10006,(StringName *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    *(undefined4 *)param_2 = local_78._0_4_;
    if (*(long *)(param_2 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar2 = local_70;
      local_70 = 0;
      *(long *)(param_2 + 8) = lVar2;
    }
    if (*(long *)(param_2 + 0x10) != local_68) {
      StringName::unref();
      lVar2 = local_68;
      local_68 = 0;
      *(long *)(param_2 + 0x10) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x18) = local_60;
    if (*(long *)(param_2 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar2 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x20) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, Transform3D const&, Vector3 const&, Vector3 const&,
   XRPose::TrackingConfidence>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<StringName_const&,Transform3D_const&,Vector3_const&,Vector3_const&,XRPose::TrackingConfidence>
::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  call_get_argument_type_info<StringName_const&,Transform3D_const&,Vector3_const&,Vector3_const&,XRPose::TrackingConfidence>
            (in_EDX,pPVar1);
  return pPVar1;
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
/* XRPositionalTracker::~XRPositionalTracker() */

void __thiscall XRPositionalTracker::~XRPositionalTracker(XRPositionalTracker *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* XRPose::~XRPose() */

void __thiscall XRPose::~XRPose(XRPose *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<StringName const&, Variant const&>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,Variant_const&>::~MethodBindT
          (MethodBindT<StringName_const&,Variant_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Variant, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Variant,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<Variant,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<StringName const&, Transform3D const&, Vector3 const&, Vector3 const&,
   XRPose::TrackingConfidence>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,Transform3D_const&,Vector3_const&,Vector3_const&,XRPose::TrackingConfidence>
::~MethodBindT(MethodBindT<StringName_const&,Transform3D_const&,Vector3_const&,Vector3_const&,XRPose::TrackingConfidence>
               *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<StringName const&>::~MethodBindT() */

void __thiscall MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<XRPose>, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<XRPose>,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<Ref<XRPose>,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<XRPositionalTracker::TrackerHand>::~MethodBindT() */

void __thiscall
MethodBindT<XRPositionalTracker::TrackerHand>::~MethodBindT
          (MethodBindT<XRPositionalTracker::TrackerHand> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<XRPositionalTracker::TrackerHand>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<XRPositionalTracker::TrackerHand>::~MethodBindTRC
          (MethodBindTRC<XRPositionalTracker::TrackerHand> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

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



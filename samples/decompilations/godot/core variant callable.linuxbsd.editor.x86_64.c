
/* CallableCustom::rpc(int, Variant const**, int, Callable::CallError&) const */

undefined8 CallableCustom::rpc(int param_1,Variant **param_2,int param_3,CallError *param_4)

{
  undefined4 *in_R8;
  
  *in_R8 = 1;
  *(undefined8 *)(in_R8 + 1) = 0;
  return 3;
}



/* CallableCustom::get_base_comparator() const */

undefined8 CallableCustom::get_base_comparator(void)

{
  return 0;
}



/* CallableCustom::get_argument_count(bool&) const */

undefined8 __thiscall CallableCustom::get_argument_count(CallableCustom *this,bool *param_1)

{
  *param_1 = false;
  return 0;
}



/* CallableCustom::get_unbound_arguments_count() const */

undefined8 CallableCustom::get_unbound_arguments_count(void)

{
  return 0;
}



/* CallableCustom::is_valid() const */

undefined8 __thiscall CallableCustom::is_valid(CallableCustom *this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong *puVar5;
  long in_FS_OFFSET;
  bool bVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = (**(code **)(*(long *)this + 0x30))();
  uVar4 = (uint)uVar2 & 0xffffff;
  if (uVar4 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar5 = (ulong *)((ulong)uVar4 * 0x10 + ObjectDB::object_slots);
    if ((uVar2 >> 0x18 & 0x7fffffffff) == (*puVar5 & 0x7fffffffff)) {
      uVar2 = puVar5[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      uVar3 = CONCAT71((int7)(uVar2 >> 8),uVar2 != 0);
    }
    else {
      uVar3 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    uVar3 = 0;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* Callable::call_deferredp(Variant const**, int) const */

void __thiscall Callable::call_deferredp(Callable *this,Variant **param_1,int param_2)

{
  long lVar1;
  Callable *pCVar2;
  long in_FS_OFFSET;
  
  MessageQueue::thread_singleton();
  lVar1 = lRam000000000010016d;
  pCVar2 = MessageQueue::main_singleton;
  if (*(long *)(in_FS_OFFSET + lRam000000000010016d) != 0) {
    MessageQueue::thread_singleton();
    pCVar2 = *(Callable **)(in_FS_OFFSET + lVar1);
  }
  CallQueue::push_callablep(pCVar2,(Variant **)this,(int)param_1,SUB41(param_2,0));
  return;
}



/* Callable::rpcp(int, Variant const**, int, Callable::CallError&) const */

ulong __thiscall
Callable::rpcp(Callable *this,int param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  ulong *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar12;
  undefined4 uVar13;
  void *pvVar14;
  Variant *pVVar15;
  code *pcVar16;
  undefined8 *puVar17;
  long in_FS_OFFSET;
  bool bVar18;
  undefined1 auStack_e8 [8];
  Variant *local_e0;
  Variant *local_d8;
  Variant *local_d0;
  Variant *local_c8;
  code *local_c0;
  long local_b0;
  uint local_a8 [4];
  int local_98 [8];
  int local_78 [6];
  int local_60 [8];
  long local_40;
  undefined1 *puVar11;
  
  puVar10 = auStack_e8;
  puVar11 = auStack_e8;
  puVar12 = auStack_e8;
  plVar2 = *(long **)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)this == 0) {
    if (plVar2 == (long *)0x0) {
      uVar13 = 5;
    }
    else {
      uVar13 = 1;
      if (*(code **)(*plVar2 + 0x40) != CallableCustom::rpc) {
        uVar7 = (**(code **)(*plVar2 + 0x40))(plVar2,param_1,param_2);
        goto LAB_001004eb;
      }
    }
    *(undefined4 *)param_4 = uVar13;
    uVar7 = 3;
    *(undefined8 *)(param_4 + 4) = 0;
    puVar12 = auStack_e8;
  }
  else {
    uVar8 = (uint)plVar2 & 0xffffff;
    if (uVar8 < (uint)ObjectDB::slot_max) {
      while( true ) {
        uVar4 = local_a8[0] >> 8;
        local_a8[0] = uVar4 << 8;
        LOCK();
        bVar18 = (char)ObjectDB::spin_lock == '\0';
        if (bVar18) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar18) break;
        local_a8[0] = uVar4 << 8;
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
      if (((ulong)plVar2 >> 0x18 & 0x7fffffffff) == (*puVar9 & 0x7fffffffff)) {
        local_c8 = (Variant *)CONCAT44(local_c8._4_4_,param_3);
        plVar2 = (long *)puVar9[1];
        local_c0 = (code *)CONCAT44(local_c0._4_4_,param_1);
        ObjectDB::spin_lock._0_1_ = '\0';
        if (plVar2 != (long *)0x0) {
          local_b0 = 0;
          local_d0 = *(Variant **)(*plVar2 + 0x58);
          local_a8[2] = 4;
          local_a8[3] = 0;
          local_a8[0] = 0x103df3;
          local_a8[1] = 0;
          local_d8 = (Variant *)local_a8;
          String::parse_latin1((StrRange *)&local_b0);
          cVar5 = (*(code *)local_d0)(plVar2);
          lVar3 = local_b0;
          if (cVar5 != '\0') {
            local_e0 = local_d8;
            iVar6 = (int)local_c0;
            if (local_b0 != 0) {
              LOCK();
              plVar1 = (long *)(local_b0 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_d0 = local_d8;
                pvVar14 = (void *)(local_b0 + -0x10);
                local_b0 = 0;
                Memory::free_static(pvVar14,false);
                local_e0 = local_d0;
                iVar6 = (int)local_c0;
              }
            }
            uVar7 = (long)((int)local_c8 + 2) * 8 + 0x17;
            puVar12 = auStack_e8;
            while (puVar11 != auStack_e8 + -(uVar7 & 0xfffffffffffff000)) {
              puVar10 = puVar12 + -0x1000;
              *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
              puVar11 = puVar12 + -0x1000;
              puVar12 = puVar12 + -0x1000;
            }
            uVar7 = (ulong)((uint)uVar7 & 0xff0);
            lVar3 = -uVar7;
            if (uVar7 != 0) {
              *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
            }
            local_d0 = (Variant *)local_78;
            local_c0 = (code *)CONCAT44(local_c0._4_4_,(int)local_c8 + 2);
            puVar17 = (undefined8 *)((ulong)(puVar10 + lVar3 + 0xf) & 0xfffffffffffffff0);
            *(undefined8 *)(puVar10 + lVar3 + -8) = 0x10038b;
            Variant::Variant(local_d0,iVar6);
            local_d8 = (Variant *)local_60;
            *(undefined8 *)(puVar10 + lVar3 + -8) = 0x1003a1;
            Variant::Variant(local_d8,(StringName *)this);
            *puVar17 = local_d0;
            puVar17[1] = local_d8;
            pVVar15 = local_e0;
            if (0 < (int)local_c8) {
              uVar7 = (ulong)local_c8 & 0xffffffff;
              local_c8 = local_e0;
              *(undefined8 *)(puVar10 + lVar3 + -8) = 0x1003ec;
              memcpy(puVar17 + 2,param_2,uVar7 << 3);
              pVVar15 = local_c8;
            }
            local_a8[0] = 0;
            local_a8[1] = 0;
            local_a8[2] = 0;
            pcVar16 = *(code **)(*plVar2 + 0x68);
            uVar13 = (int)local_c0;
            if (const::{lambda()#1}::operator()()::sname == '\0') {
              local_c8 = (Variant *)CONCAT44(local_c8._4_4_,(int)local_c0);
              *(undefined8 *)(puVar10 + lVar3 + -8) = 0x1005cd;
              local_e0 = pVVar15;
              local_c0 = pcVar16;
              iVar6 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname);
              pVVar15 = local_e0;
              pcVar16 = local_c0;
              uVar13 = (int)local_c8;
              if (iVar6 != 0) {
                *(undefined8 *)(puVar10 + lVar3 + -8) = 0x1005fe;
                _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
                *(undefined8 *)(puVar10 + lVar3 + -8) = 0x100614;
                __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,
                             &__dso_handle);
                *(undefined8 *)(puVar10 + lVar3 + -8) = 0x10061c;
                __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
                pVVar15 = local_e0;
                pcVar16 = local_c0;
                uVar13 = (int)local_c8;
              }
            }
            *(undefined8 *)(puVar10 + lVar3 + -8) = 0x10044a;
            (*pcVar16)((Variant *)local_98,plVar2,&const::{lambda()#1}::operator()()::sname,puVar17,
                       uVar13,pVVar15);
            *(undefined8 *)(puVar10 + lVar3 + -8) = 0x100452;
            uVar7 = Variant::operator_cast_to_long((Variant *)local_98);
            if (Variant::needs_deinit[local_98[0]] != '\0') {
              *(undefined8 *)(puVar10 + lVar3 + -8) = 0x100668;
              Variant::_clear_internal();
            }
            *(undefined4 *)param_4 = 0;
            if (Variant::needs_deinit[local_60[0]] != '\0') {
              *(undefined8 *)(puVar10 + lVar3 + -8) = 0x10068a;
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              *(undefined8 *)(puVar10 + lVar3 + -8) = 0x100679;
              Variant::_clear_internal();
            }
            uVar7 = uVar7 & 0xffffffff;
            puVar12 = puVar10 + lVar3;
            goto LAB_001004eb;
          }
          if (local_b0 != 0) {
            LOCK();
            plVar2 = (long *)(local_b0 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_b0 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
        }
      }
      else {
        ObjectDB::spin_lock._0_1_ = '\0';
      }
    }
    else {
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    }
    *(undefined4 *)param_4 = 5;
    uVar7 = 3;
    *(undefined8 *)(param_4 + 4) = 0;
    puVar12 = auStack_e8;
  }
LAB_001004eb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar12 + -8) = &UNK_00100694;
  __stack_chk_fail();
}



/* Callable::get_object() const */

ulong __thiscall Callable::get_object(Callable *this)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong *puVar5;
  long in_FS_OFFSET;
  bool bVar6;
  
  plVar1 = *(long **)(this + 8);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)this == 0) {
    if (plVar1 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1);
      uVar4 = (uint)uVar3 & 0xffffff;
      if ((uint)ObjectDB::slot_max <= uVar4) goto LAB_00100807;
      while( true ) {
        LOCK();
        bVar6 = (char)ObjectDB::spin_lock == '\0';
        if (bVar6) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar6) break;
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar5 = (ulong *)((ulong)uVar4 * 0x10 + ObjectDB::object_slots);
      if ((uVar3 >> 0x18 & 0x7fffffffff) == (*puVar5 & 0x7fffffffff)) goto LAB_00100723;
      goto LAB_001007da;
    }
  }
  else {
    uVar4 = (uint)plVar1 & 0xffffff;
    if ((uint)ObjectDB::slot_max <= uVar4) {
LAB_00100807:
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
      uVar3 = 0;
      goto LAB_0010072e;
    }
    while( true ) {
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar5 = (ulong *)((ulong)uVar4 * 0x10 + ObjectDB::object_slots);
    if (((ulong)plVar1 >> 0x18 & 0x7fffffffff) == (*puVar5 & 0x7fffffffff)) {
LAB_00100723:
      uVar3 = puVar5[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010072e;
    }
LAB_001007da:
    ObjectDB::spin_lock._0_1_ = '\0';
  }
  uVar3 = 0;
LAB_0010072e:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* Callable::get_object_id() const */

void Callable::get_object_id(void)

{
  long *plVar1;
  undefined8 in_RSI;
  long *in_RDI;
  
  plVar1 = (long *)in_RDI[1];
  if ((*in_RDI == 0) && (plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0010085f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,in_RSI,*(code **)(*plVar1 + 0x30));
    return;
  }
  return;
}



/* Callable::get_bound_arguments_count() const */

undefined8 __thiscall Callable::get_bound_arguments_count(Callable *this)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((*(long *)this == 0) && (*(long **)(this + 8) != (long *)0x0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(this + 8) + 0x58),
     UNRECOVERED_JUMPTABLE != CallableCustom::get_unbound_arguments_count)) {
                    /* WARNING: Could not recover jumptable at 0x0010089c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



/* Callable::get_unbound_arguments_count() const */

undefined8 __thiscall Callable::get_unbound_arguments_count(Callable *this)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((*(long *)this == 0) && (*(long **)(this + 8) != (long *)0x0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(this + 8) + 0x68),
     UNRECOVERED_JUMPTABLE != CallableCustom::get_unbound_arguments_count)) {
                    /* WARNING: Could not recover jumptable at 0x001008cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



/* Callable::get_base_comparator() const */

Callable * __thiscall Callable::get_base_comparator(Callable *this)

{
  code *pcVar1;
  Callable *pCVar2;
  
  if (((*(long *)this == 0) && (*(long **)(this + 8) != (long *)0x0)) &&
     (pcVar1 = *(code **)(**(long **)(this + 8) + 0x48),
     pcVar1 != CallableCustom::get_base_comparator)) {
    pCVar2 = (Callable *)(*pcVar1)();
    if (pCVar2 != (Callable *)0x0) {
      return pCVar2;
    }
  }
  return this;
}



/* Callable::hash() const */

ulong __thiscall Callable::hash(Callable *this)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  
  if (*(long *)this == 0) {
    if (*(undefined8 **)(this + 8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)**(undefined8 **)(this + 8))();
      return uVar2;
    }
    uVar1 = StringName::get_empty_hash();
  }
  else {
    uVar1 = *(uint *)(*(long *)this + 0x20);
  }
  iVar3 = (int)*(undefined8 *)(this + 8);
  iVar4 = (int)((ulong)*(undefined8 *)(this + 8) >> 0x20);
  uVar1 = (iVar3 * 0x16a88000 | (uint)(iVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar1;
  uVar1 = (uVar1 << 0xd | uVar1 >> 0x13) * 5 + 0xe6546b64 ^
          (iVar4 * 0x16a88000 | (uint)(iVar4 * -0x3361d2af) >> 0x11) * 0x1b873593;
  uVar1 = (uVar1 << 0xd | uVar1 >> 0x13) * 5 + 0xe6546b64;
  uVar1 = (uVar1 >> 0x10 ^ uVar1) * -0x7a143595;
  uVar1 = (uVar1 ^ uVar1 >> 0xd) * -0x3d4d51cb;
  return (ulong)(uVar1 ^ uVar1 >> 0x10);
}



/* Callable::TEMPNAMEPLACEHOLDERVALUE(Callable const&) const */

ulong __thiscall Callable::operator==(Callable *this,Callable *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar4;
  ulong uVar5;
  
  lVar1 = *(long *)param_1;
  if ((*(long *)this == 0) && (plVar3 = *(long **)(this + 8), plVar3 != (long *)0x0)) {
    if ((lVar1 == 0) && (*(long **)(param_1 + 8) != (long *)0x0)) {
      if (plVar3 == *(long **)(param_1 + 8)) {
        return 1;
      }
      UNRECOVERED_JUMPTABLE = (code *)(**(code **)(*plVar3 + 0x10))();
      pcVar4 = (code *)(**(code **)(**(long **)(param_1 + 8) + 0x10))();
      if (UNRECOVERED_JUMPTABLE == pcVar4) {
                    /* WARNING: Could not recover jumptable at 0x00100a4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(this + 8),*(undefined8 *)(param_1 + 8));
        return uVar5;
      }
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    if ((lVar1 != 0) || (lVar2 == 0)) {
      return (ulong)((uint)CONCAT71((int7)((ulong)lVar2 >> 8),lVar2 == *(long *)(this + 8)) &
                    (uint)CONCAT71((int7)((ulong)lVar1 >> 8),*(long *)this == lVar1));
    }
  }
  return 0;
}



/* Callable::TEMPNAMEPLACEHOLDERVALUE(Callable const&) const */

uint __thiscall Callable::operator!=(Callable *this,Callable *param_1)

{
  uint uVar1;
  
  uVar1 = operator==(this,param_1);
  return uVar1 ^ 1;
}



/* Callable::TEMPNAMEPLACEHOLDERVALUE(Callable const&) const */

ulong __thiscall Callable::operator<(Callable *this,Callable *param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar2;
  ulong uVar3;
  undefined8 in_RCX;
  undefined7 uVar5;
  ulong uVar4;
  
  uVar3 = *(ulong *)param_1;
  if ((*(ulong *)this == 0) && (plVar1 = *(long **)(this + 8), plVar1 != (long *)0x0)) {
    uVar4 = 0;
    if ((uVar3 == 0) &&
       ((*(long **)(param_1 + 8) != (long *)0x0 && (plVar1 != *(long **)(param_1 + 8))))) {
      UNRECOVERED_JUMPTABLE = (code *)(**(code **)(*plVar1 + 0x18))();
      pcVar2 = (code *)(**(code **)(**(long **)(param_1 + 8) + 0x18))();
      uVar4 = CONCAT71((int7)(uVar4 >> 8),UNRECOVERED_JUMPTABLE < pcVar2);
      if (UNRECOVERED_JUMPTABLE == pcVar2) {
                    /* WARNING: Could not recover jumptable at 0x00100b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(this + 8),*(undefined8 *)(param_1 + 8));
        return uVar3;
      }
    }
  }
  else {
    uVar4 = *(ulong *)(param_1 + 8);
    if ((uVar3 == 0) && (in_RCX = 0, uVar4 != 0)) {
      return 1;
    }
    uVar5 = (undefined7)((ulong)in_RCX >> 8);
    if (*(ulong *)(this + 8) != uVar4) {
      return CONCAT71(uVar5,*(ulong *)(this + 8) < uVar4) & 0xffffffff;
    }
    uVar4 = CONCAT71(uVar5,*(ulong *)this < uVar3);
  }
  return uVar4 & 0xffffffff;
}



/* Callable::TEMPNAMEPLACEHOLDERVALUE(Callable const&) */

void __thiscall Callable::operator=(Callable *this,Callable *param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  bool bVar7;
  
  lVar4 = *(long *)param_1;
  if (*(long *)this == 0) {
    plVar6 = *(long **)(this + 8);
    if (plVar6 == (long *)0x0) {
      if ((lVar4 != 0) || (*(long *)(param_1 + 8) == 0)) goto LAB_00100b50;
      goto LAB_00100c38;
    }
    if (lVar4 != 0) {
      *(undefined8 *)(this + 8) = 0;
LAB_00100b8a:
      StringName::operator=((StringName *)this,(StringName *)param_1);
      *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
      goto LAB_00100b9d;
    }
    if ((*(long **)(param_1 + 8) != (long *)0x0) && (plVar6 == *(long **)(param_1 + 8))) {
      return;
    }
    *(undefined8 *)(this + 8) = 0;
    if (*(long *)(param_1 + 8) == 0) goto LAB_00100b8a;
  }
  else {
    if ((lVar4 != 0) || (*(long *)(param_1 + 8) == 0)) {
LAB_00100b50:
      StringName::operator=((StringName *)this,(StringName *)param_1);
      *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
      return;
    }
    StringName::unref();
    *(undefined8 *)this = 0;
LAB_00100c38:
    plVar6 = (long *)0x0;
  }
  *(undefined8 *)(this + 8) = 0;
  piVar1 = (int *)(*(long *)(param_1 + 8) + 8);
  do {
    iVar3 = *piVar1;
    if (iVar3 == 0) goto LAB_00100c0c;
    LOCK();
    iVar5 = *piVar1;
    bVar7 = iVar3 == iVar5;
    if (bVar7) {
      *piVar1 = iVar3 + 1;
      iVar5 = iVar3;
    }
    UNLOCK();
  } while (!bVar7);
  if (iVar5 != -1) {
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  }
LAB_00100c0c:
  if (plVar6 == (long *)0x0) {
    return;
  }
LAB_00100b9d:
  LOCK();
  plVar2 = plVar6 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 != 0) {
    return;
  }
  (**(code **)(*plVar6 + 0x70))(plVar6);
  Memory::free_static(plVar6,false);
  return;
}



/* Callable::create(Variant const&, StringName const&) */

Callable * __thiscall Callable::create(Callable *this,Variant *param_1,StringName *param_2)

{
  VariantCallable VVar1;
  long lVar2;
  undefined8 uVar3;
  VariantCallable *this_00;
  
  if (*(long *)param_2 == 0) {
    _err_print_error("create","core/variant/callable.cpp",0x17b,
                     "Condition \"p_method == StringName()\" is true. Returning: Callable()",
                     "Method argument to Callable::create method must be a non-empty string.",0,0);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    return this;
  }
  if (*(int *)param_1 == 0) {
    *(undefined8 *)this = 0;
    lVar2 = *(long *)param_2;
    *(undefined8 *)(this + 8) = 0;
    if (lVar2 == 0) goto LAB_00100d41;
  }
  else {
    if (*(int *)param_1 != 0x18) {
      this_00 = (VariantCallable *)operator_new(0x38,"");
      VariantCallable::VariantCallable(this_00,param_1,param_2);
      VVar1 = this_00[0xc];
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      if (VVar1 != (VariantCallable)0x0) {
        _err_print_error("Callable","core/variant/callable.cpp",0x1a2,"Method/function failed.",
                         "Callable custom is already referenced.",0,0);
        return this;
      }
      this_00[0xc] = (VariantCallable)0x1;
      *(VariantCallable **)(this + 8) = this_00;
      return this;
    }
    uVar3 = Variant::operator_cast_to_ObjectID(param_1);
    *(undefined8 *)this = 0;
    lVar2 = *(long *)param_2;
    *(undefined8 *)(this + 8) = 0;
    if (lVar2 == 0) {
LAB_00100d41:
      _err_print_error("Callable","core/variant/callable.cpp",0x198,"Method/function failed.",
                       "Method argument to Callable constructor must be a non-empty string.",0,0);
      return this;
    }
    *(undefined8 *)(this + 8) = uVar3;
  }
  StringName::operator=((StringName *)this,param_2);
  return this;
}



/* Callable::Callable(Object const*, StringName const&) */

undefined8 __thiscall Callable::Callable(Callable *this,Object *param_1,StringName *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined8 *)this = 0;
  lVar1 = *(long *)param_2;
  *(undefined8 *)(this + 8) = 0;
  if (lVar1 == 0) {
    uVar2 = _err_print_error("Callable","core/variant/callable.cpp",0x18a,"Method/function failed.",
                             "Method argument to Callable constructor must be a non-empty string.",0
                             ,0);
  }
  else {
    if (param_1 != (Object *)0x0) {
      *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x60);
      uVar2 = StringName::operator=((StringName *)this,param_2);
      return uVar2;
    }
    uVar2 = 0;
    _err_print_error("Callable","core/variant/callable.cpp",0x18e,"Method/function failed.",
                     "Object argument to Callable constructor must be non-null.",0);
  }
  return uVar2;
}



/* Callable::Callable(ObjectID, StringName const&) */

void __thiscall Callable::Callable(Callable *this,undefined8 param_2,StringName *param_3)

{
  long lVar1;
  
  *(undefined8 *)this = 0;
  lVar1 = *(long *)param_3;
  *(undefined8 *)(this + 8) = 0;
  if (lVar1 != 0) {
    *(undefined8 *)(this + 8) = param_2;
    StringName::operator=((StringName *)this,param_3);
    return;
  }
  _err_print_error("Callable","core/variant/callable.cpp",0x198,"Method/function failed.",
                   "Method argument to Callable constructor must be a non-empty string.",0,0);
  return;
}



/* Callable::Callable(CallableCustom*) */

void __thiscall Callable::Callable(Callable *this,CallableCustom *param_1)

{
  CallableCustom CVar1;
  
  CVar1 = param_1[0xc];
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  if (CVar1 == (CallableCustom)0x0) {
    param_1[0xc] = (CallableCustom)0x1;
    *(CallableCustom **)(this + 8) = param_1;
    return;
  }
  _err_print_error("Callable","core/variant/callable.cpp",0x1a2,"Method/function failed.",
                   "Callable custom is already referenced.",0,0);
  return;
}



/* Callable::Callable(Callable const&) */

void __thiscall Callable::Callable(Callable *this,Callable *param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  
  *(undefined8 *)this = 0;
  lVar3 = *(long *)param_1;
  *(undefined8 *)(this + 8) = 0;
  if ((lVar3 != 0) || (piVar1 = (int *)(*(long *)(param_1 + 8) + 8), *(long *)(param_1 + 8) == 0)) {
    StringName::operator=((StringName *)this,(StringName *)param_1);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    return;
  }
  do {
    iVar2 = *piVar1;
    if (iVar2 == 0) goto LAB_00101010;
    LOCK();
    iVar4 = *piVar1;
    bVar5 = iVar2 == iVar4;
    if (bVar5) {
      *piVar1 = iVar2 + 1;
      iVar4 = iVar2;
    }
    UNLOCK();
  } while (!bVar5);
  if (iVar4 != -1) {
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    return;
  }
LAB_00101010:
  *(undefined8 *)(this + 8) = 0;
  return;
}



/* Callable::unbind(int) const */

Callable * Callable::unbind(int param_1)

{
  CallableCustomUnbind CVar1;
  CallableCustomUnbind *this;
  int in_EDX;
  Callable *in_RSI;
  undefined4 in_register_0000003c;
  Callable *this_00;
  
  this_00 = (Callable *)CONCAT44(in_register_0000003c,param_1);
  if (0 < in_EDX) {
    this = (CallableCustomUnbind *)operator_new(0x28,"");
    CallableCustomUnbind::CallableCustomUnbind(this,in_RSI,in_EDX);
    CVar1 = this[0xc];
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)(this_00 + 8) = 0;
    if (CVar1 == (CallableCustomUnbind)0x0) {
      this[0xc] = (CallableCustomUnbind)0x1;
      *(CallableCustomUnbind **)(this_00 + 8) = this;
    }
    else {
      _err_print_error("Callable","core/variant/callable.cpp",0x1a2,"Method/function failed.",
                       "Callable custom is already referenced.",0,0);
    }
    return this_00;
  }
  _err_print_error("unbind","core/variant/callable.cpp",0x94,
                   "Condition \"p_argcount <= 0\" is true. Returning: Callable(*this)",
                   "Amount of unbind() arguments must be 1 or greater.",0,0);
  Callable(this_00,in_RSI);
  return this_00;
}



/* Callable::~Callable() */

void __thiscall Callable::~Callable(Callable *this)

{
  int *piVar1;
  long *plVar2;
  
  if (*(long *)this == 0) {
    if (*(long *)(this + 8) != 0) {
      LOCK();
      piVar1 = (int *)(*(long *)(this + 8) + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        plVar2 = *(long **)(this + 8);
        (**(code **)(*plVar2 + 0x70))(plVar2);
        Memory::free_static(plVar2,false);
        *(undefined8 *)(this + 8) = 0;
      }
      if ((StringName::configured != '\0') && (*(long *)this != 0)) goto LAB_0010113c;
    }
  }
  else if (StringName::configured != '\0') {
LAB_0010113c:
    StringName::unref();
    return;
  }
  return;
}



/* CallableCustom::CallableCustom() */

void __thiscall CallableCustom::CallableCustom(CallableCustom *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_00104858;
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (CallableCustom)0x0;
  *(undefined4 *)(this + 8) = 1;
  return;
}



/* Signal::get_object() const */

ulong __thiscall Signal::get_object(Signal *this)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 8) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 8) >> 0x18 & 0x7fffffffff) == (*puVar4 & 0x7fffffffff)) {
      uVar2 = puVar4[1];
      ObjectDB::spin_lock._0_1_ = '\0';
    }
    else {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    uVar2 = 0;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Signal::get_object_id() const */

undefined8 __thiscall Signal::get_object_id(Signal *this)

{
  return *(undefined8 *)(this + 8);
}



/* Signal::get_name() const */

void Signal::get_name(void)

{
  StringName *in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,in_RSI);
  return;
}



/* Signal::TEMPNAMEPLACEHOLDERVALUE(Signal const&) const */

undefined8 __thiscall Signal::operator==(Signal *this,Signal *param_1)

{
  if (*(long *)(param_1 + 8) != *(long *)(this + 8)) {
    return 0;
  }
  return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)this == *(long *)param_1);
}



/* Signal::TEMPNAMEPLACEHOLDERVALUE(Signal const&) const */

undefined8 __thiscall Signal::operator!=(Signal *this,Signal *param_1)

{
  if (*(long *)(param_1 + 8) != *(long *)(this + 8)) {
    return 1;
  }
  return CONCAT71((int7)((ulong)*(long *)param_1 >> 8),*(long *)this != *(long *)param_1);
}



/* Signal::TEMPNAMEPLACEHOLDERVALUE(Signal const&) const */

bool __thiscall Signal::operator<(Signal *this,Signal *param_1)

{
  bool bVar1;
  
  bVar1 = *(ulong *)(this + 8) < *(ulong *)(param_1 + 8);
  if (*(ulong *)(this + 8) == *(ulong *)(param_1 + 8)) {
    bVar1 = *(ulong *)this < *(ulong *)param_1;
  }
  return bVar1;
}



/* Signal::emit(Variant const**, int) const */

undefined8 __thiscall Signal::emit(Signal *this,Variant **param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong *puVar5;
  long in_FS_OFFSET;
  bool bVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = (uint)*(ulong *)(this + 8) & 0xffffff;
  if (uVar4 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar5 = (ulong *)((ulong)uVar4 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 8) >> 0x18 & 0x7fffffffff) == (*puVar5 & 0x7fffffffff)) {
      plVar2 = (long *)puVar5[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if (plVar2 != (long *)0x0) {
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101437. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*plVar2 + 0xd0))(plVar2,this,param_1,param_2);
          return uVar3;
        }
        goto LAB_001014a2;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0x1e;
  }
LAB_001014a2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Signal::connect(Callable const&, unsigned int) */

undefined8 __thiscall Signal::connect(Signal *this,Callable *param_1,uint param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)get_object(this);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001014e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x108))(plVar1,this,param_1,param_2);
    return uVar2;
  }
  _err_print_error("connect","core/variant/callable.cpp",0x220,"Parameter \"obj\" is null.",0,0);
  return 3;
}



/* Signal::disconnect(Callable const&) */

void __thiscall Signal::disconnect(Signal *this,Callable *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)get_object(this);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101553. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x110))(plVar1,this,param_1);
    return;
  }
  _err_print_error("disconnect","core/variant/callable.cpp",0x227,"Parameter \"obj\" is null.",0,0);
  return;
}



/* Signal::is_connected(Callable const&) const */

undefined8 __thiscall Signal::is_connected(Signal *this,Callable *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)get_object(this);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001015c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x118))(plVar1,this,param_1);
    return uVar2;
  }
  _err_print_error("is_connected","core/variant/callable.cpp",0x22d,"Parameter \"obj\" is null.",0,0
                  );
  return 0;
}



/* Signal::has_connections() const */

undefined8 __thiscall Signal::has_connections(Signal *this)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)get_object(this);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x120))(plVar1,this);
    return uVar2;
  }
  _err_print_error("has_connections","core/variant/callable.cpp",0x234,"Parameter \"obj\" is null.",
                   0,0);
  return 0;
}



/* Signal::Signal(Object const*, StringName const&) */

void __thiscall Signal::Signal(Signal *this,Object *param_1,StringName *param_2)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  if (param_1 != (Object *)0x0) {
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x60);
    StringName::operator=((StringName *)this,param_2);
    return;
  }
  _err_print_error("Signal","core/variant/callable.cpp",0x24a,"Parameter \"p_object\" is null.",
                   "Object argument to Signal constructor must be non-null.",0,0);
  return;
}



/* Signal::Signal(ObjectID, StringName const&) */

void __thiscall Signal::Signal(Signal *this,undefined8 param_2,StringName *param_3)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = param_2;
  StringName::operator=((StringName *)this,param_3);
  return;
}



/* Callable::operator String() const */

Callable * __thiscall Callable::operator_cast_to_String(Callable *this)

{
  char *pcVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  Object *pOVar5;
  Callable *in_RSI;
  long in_FS_OFFSET;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)in_RSI == 0) {
    plVar3 = *(long **)(in_RSI + 8);
    if (plVar3 == (long *)0x0) {
      *(undefined8 *)this = 0;
      local_68 = "null::null";
      local_60 = 10;
      String::parse_latin1((StrRange *)this);
    }
    else if (*(code **)(*plVar3 + 8) == CallableCustomMethodPointerBase::get_as_text) {
      pcVar1 = (char *)plVar3[4];
      local_60 = 0;
      *(undefined8 *)this = 0;
      if (pcVar1 != (char *)0x0) {
        local_60 = strlen(pcVar1);
      }
      local_68 = pcVar1;
      String::parse_latin1((StrRange *)this);
    }
    else {
      (**(code **)(*plVar3 + 8))();
    }
    goto LAB_001019f1;
  }
  plVar3 = (long *)get_object(in_RSI);
  if (plVar3 == (long *)0x0) {
    lVar4 = *(long *)in_RSI;
    if (lVar4 == 0) {
      local_70 = 0;
    }
    else {
      pcVar1 = *(char **)(lVar4 + 8);
      local_70 = 0;
      if (pcVar1 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar4 + 0x10));
      }
      else {
        local_60 = strlen(pcVar1);
        local_68 = pcVar1;
        String::parse_latin1((StrRange *)&local_70);
      }
    }
    operator+((char *)this,"null::");
    lVar4 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar3 = (long *)(local_70 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    goto LAB_001019f1;
  }
  (**(code **)(*plVar3 + 0x48))((String *)&local_90,plVar3);
  (**(code **)(*plVar3 + 0x98))(local_58,plVar3);
  lVar4 = Variant::get_validated_object();
  if (lVar4 == 0) {
LAB_00101af0:
    cVar2 = Variant::needs_deinit[local_58[0]];
joined_r0x00101e68:
    if (cVar2 != '\0') {
      Variant::_clear_internal();
    }
    pOVar5 = (Object *)0x0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(lVar4,&Object::typeinfo,&Script::typeinfo,0);
    if (pOVar5 == (Object *)0x0) {
      cVar2 = Variant::needs_deinit[local_58[0]];
      goto joined_r0x00101e68;
    }
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') goto LAB_00101af0;
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    (**(code **)(*(long *)pOVar5 + 0x1e0))((String *)&local_68,pOVar5);
    cVar2 = StringName::is_empty();
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    if (cVar2 == '\0') {
      local_70 = 0;
      local_68 = ")";
      local_60 = 1;
      String::parse_latin1((StrRange *)&local_70);
      (**(code **)(*(long *)pOVar5 + 0x1e0))(&local_88,pOVar5);
      if (local_88 == 0) {
        local_80 = 0;
      }
      else {
        pcVar1 = *(char **)(local_88 + 8);
        local_80 = 0;
        if (pcVar1 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)(local_88 + 0x10));
        }
        else {
          local_60 = strlen(pcVar1);
          local_68 = pcVar1;
          String::parse_latin1((StrRange *)&local_80);
        }
      }
      operator+((char *)&local_78,&_LC28);
      String::operator+((String *)&local_68,(String *)&local_78);
      String::operator+=((String *)&local_90,(String *)&local_68);
      pcVar1 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_68 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      lVar4 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar3 = (long *)(local_78 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar4 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar3 = (long *)(local_80 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
LAB_00101965:
      lVar4 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar3 = (long *)(local_70 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
    }
    else {
      Resource::get_path();
      cVar2 = String::is_resource_file();
      pcVar1 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_68 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      if (cVar2 != '\0') {
        local_70 = 0;
        local_68 = ")";
        local_60 = 1;
        String::parse_latin1((StrRange *)&local_70);
        Resource::get_path();
        String::get_file();
        operator+((char *)&local_78,&_LC28);
        String::operator+((String *)&local_68,(String *)&local_78);
        String::operator+=((String *)&local_90,(String *)&local_68);
        pcVar1 = local_68;
        if (local_68 != (char *)0x0) {
          LOCK();
          plVar3 = (long *)(local_68 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_68 = (char *)0x0;
            Memory::free_static(pcVar1 + -0x10,false);
          }
        }
        lVar4 = local_78;
        if (local_78 != 0) {
          LOCK();
          plVar3 = (long *)(local_78 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_78 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_80;
        if (local_80 != 0) {
          LOCK();
          plVar3 = (long *)(local_80 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_80 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_88;
        if (local_88 != 0) {
          LOCK();
          plVar3 = (long *)(local_88 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_88 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        goto LAB_00101965;
      }
    }
  }
  lVar4 = *(long *)in_RSI;
  if (lVar4 == 0) {
    local_70 = 0;
  }
  else {
    pcVar1 = *(char **)(lVar4 + 8);
    local_70 = 0;
    if (pcVar1 == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar4 + 0x10));
    }
    else {
      local_60 = strlen(pcVar1);
      local_68 = pcVar1;
      String::parse_latin1((StrRange *)&local_70);
    }
  }
  local_78 = 0;
  local_68 = "::";
  local_60 = 2;
  String::parse_latin1((StrRange *)&local_78);
  String::operator+((String *)&local_68,(String *)&local_90);
  String::operator+((String *)this,(String *)&local_68);
  pcVar1 = local_68;
  if (local_68 != (char *)0x0) {
    LOCK();
    plVar3 = (long *)(local_68 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_68 = (char *)0x0;
      Memory::free_static(pcVar1 + -0x10,false);
    }
  }
  lVar4 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar3 = (long *)(local_78 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  lVar4 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar3 = (long *)(local_70 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (((pOVar5 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
  lVar4 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar3 = (long *)(local_90 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
LAB_001019f1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Signal::operator String() const */

Signal * __thiscall Signal::operator_cast_to_String(Signal *this)

{
  char *pcVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  Object *pOVar5;
  Signal *in_RSI;
  long in_FS_OFFSET;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = (long *)get_object(in_RSI);
  if (plVar3 == (long *)0x0) {
    lVar4 = *(long *)in_RSI;
    if (lVar4 == 0) {
      local_70 = 0;
    }
    else {
      pcVar1 = *(char **)(lVar4 + 8);
      local_70 = 0;
      if (pcVar1 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar4 + 0x10));
      }
      else {
        local_60 = strlen(pcVar1);
        local_68 = pcVar1;
        String::parse_latin1((StrRange *)&local_70);
      }
    }
    operator+((char *)this,"null::[signal]");
    lVar4 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar3 = (long *)(local_70 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    goto LAB_0010229e;
  }
  (**(code **)(*plVar3 + 0x48))((String *)&local_90,plVar3);
  (**(code **)(*plVar3 + 0x98))(local_58,plVar3);
  lVar4 = Variant::get_validated_object();
  if (lVar4 == 0) {
LAB_001022c8:
    cVar2 = Variant::needs_deinit[local_58[0]];
joined_r0x001023f0:
    if (cVar2 != '\0') {
      Variant::_clear_internal();
    }
    lVar4 = *(long *)in_RSI;
    pOVar5 = (Object *)0x0;
    if (lVar4 != 0) goto LAB_00102164;
LAB_001022fc:
    local_70 = 0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(lVar4,&Object::typeinfo,&Script::typeinfo,0);
    if (pOVar5 == (Object *)0x0) {
      cVar2 = Variant::needs_deinit[local_58[0]];
      goto joined_r0x001023f0;
    }
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') goto LAB_001022c8;
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Resource::get_path();
    cVar2 = String::is_resource_file();
    pcVar1 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar3 = (long *)(local_68 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar1 + -0x10,false);
      }
    }
    if (cVar2 != '\0') {
      local_70 = 0;
      local_68 = ")";
      local_60 = 1;
      String::parse_latin1((StrRange *)&local_70);
      Resource::get_path();
      String::get_file();
      operator+((char *)&local_78,&_LC28);
      String::operator+((String *)&local_68,(String *)&local_78);
      String::operator+=((String *)&local_90,(String *)&local_68);
      pcVar1 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_68 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      lVar4 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar3 = (long *)(local_78 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar4 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar3 = (long *)(local_80 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar4 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar3 = (long *)(local_88 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar4 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar3 = (long *)(local_70 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
    }
    lVar4 = *(long *)in_RSI;
    if (lVar4 == 0) goto LAB_001022fc;
LAB_00102164:
    pcVar1 = *(char **)(lVar4 + 8);
    local_70 = 0;
    if (pcVar1 == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar4 + 0x10));
    }
    else {
      local_60 = strlen(pcVar1);
      local_68 = pcVar1;
      String::parse_latin1((StrRange *)&local_70);
    }
  }
  local_78 = 0;
  local_68 = "::[signal]";
  local_60 = 10;
  String::parse_latin1((StrRange *)&local_78);
  String::operator+((String *)&local_68,(String *)&local_90);
  String::operator+((String *)this,(String *)&local_68);
  pcVar1 = local_68;
  if (local_68 != (char *)0x0) {
    LOCK();
    plVar3 = (long *)(local_68 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_68 = (char *)0x0;
      Memory::free_static(pcVar1 + -0x10,false);
    }
  }
  lVar4 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar3 = (long *)(local_78 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  lVar4 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar3 = (long *)(local_70 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (((pOVar5 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
  lVar4 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar3 = (long *)(local_90 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
LAB_0010229e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustom::get_method() const */

void CallableCustom::get_method(void)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  long *in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*in_RSI + 8) == CallableCustomMethodPointerBase::get_as_text) {
    pcVar2 = (char *)in_RSI[4];
    local_58 = 0;
    local_40 = 0;
    if (pcVar2 != (char *)0x0) {
      local_40 = strlen(pcVar2);
    }
    local_48 = pcVar2;
    String::parse_latin1((StrRange *)&local_58);
  }
  else {
    (**(code **)(*in_RSI + 8))(&local_58);
  }
  local_50 = 0;
  local_48 = "Can\'t get method on CallableCustom \"%s\".";
  local_40 = 0x28;
  String::parse_latin1((StrRange *)&local_50);
  vformat<String>(&local_48,(StrRange *)&local_50,&local_58);
  _err_print_error("get_method","core/variant/callable.cpp",0x1c6,
                   "Method/function failed. Returning: StringName()",&local_48,0);
  pcVar2 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar2 + -0x10,false);
    }
  }
  lVar3 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  *in_RDI = 0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable::get_custom() const */

long __thiscall Callable::get_custom(Callable *this)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)this != 0) || (lVar3 = *(long *)(this + 8), lVar3 == 0)) {
    operator_cast_to_String((Callable *)&local_48);
    local_38 = "Can\'t get custom on non-CallableCustom \"%s\".";
    local_30 = 0x2c;
    local_40 = 0;
    String::parse_latin1((StrRange *)&local_40);
    vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
    _err_print_error("get_custom","core/variant/callable.cpp",0xed,
                     "Condition \"!is_custom()\" is true. Returning: nullptr",&local_38,0,0);
    pcVar2 = local_38;
    if (local_38 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = (char *)0x0;
        Memory::free_static(pcVar2 + -0x10,false);
      }
    }
    lVar3 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar1 = (long *)(local_40 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar3 = 0;
        goto LAB_0010274d;
      }
    }
    lVar3 = 0;
  }
LAB_0010274d:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable::get_method() const */

void Callable::get_method(void)

{
  long lVar1;
  long *plVar2;
  StringName *in_RSI;
  StringName *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)in_RSI == 0) && (*(long *)(in_RSI + 8) != 0)) {
    plVar2 = (long *)get_custom((Callable *)in_RSI);
    (**(code **)(*plVar2 + 0x28))();
  }
  else {
    StringName::StringName(in_RDI,in_RSI);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable::is_valid() const */

ulong __thiscall Callable::is_valid(Callable *this)

{
  long lVar1;
  long lVar2;
  StringName *pSVar3;
  ulong uVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_28;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)this == 0) && (*(long *)(this + 8) != 0)) {
    plVar5 = (long *)get_custom(this);
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00102916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar5 + 0x20))();
      return uVar4;
    }
  }
  else {
    lVar2 = get_object(this);
    uVar4 = 0;
    if (lVar2 != 0) {
      pSVar3 = (StringName *)get_object(this);
      get_method();
      uVar4 = Object::has_method(pSVar3);
      if ((StringName::configured != '\0') && (local_28 != 0)) {
        StringName::unref();
        uVar4 = uVar4 & 0xff;
      }
    }
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable::callp(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
Callable::callp(Callable *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined4 local_48 [2];
  undefined1 local_40 [16];
  long local_30;
  
  uVar2 = *(ulong *)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)this == 0) {
    if (uVar2 == 0) {
      iVar1 = *(int *)param_3;
      *(undefined4 *)param_4 = 5;
      *(undefined8 *)(param_4 + 4) = 0;
      local_40 = (undefined1  [16])0x0;
      if (Variant::needs_deinit[iVar1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_3 = 0;
      *(undefined8 *)(param_3 + 8) = local_40._0_8_;
      *(undefined8 *)(param_3 + 0x10) = local_40._8_8_;
    }
    else {
      cVar4 = is_valid(this);
      if (cVar4 != '\0') {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00102ada. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(long **)(this + 8) + 0x38))
                    (*(long **)(this + 8),param_1,param_2,param_3,param_4);
          return;
        }
        goto LAB_00102bbc;
      }
      iVar1 = *(int *)param_3;
      *(undefined4 *)param_4 = 5;
      *(undefined8 *)(param_4 + 4) = 0;
      local_40 = (undefined1  [16])0x0;
      if (Variant::needs_deinit[iVar1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_3 = 0;
      *(undefined8 *)(param_3 + 8) = local_40._0_8_;
      *(undefined8 *)(param_3 + 0x10) = local_40._8_8_;
    }
  }
  else {
    uVar5 = (uint)uVar2 & 0xffffff;
    if (uVar5 < (uint)ObjectDB::slot_max) {
      while( true ) {
        LOCK();
        bVar7 = (char)ObjectDB::spin_lock == '\0';
        if (bVar7) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar7) break;
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
      if ((uVar2 >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
        plVar3 = (long *)puVar6[1];
        ObjectDB::spin_lock._0_1_ = '\0';
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x68))(local_48,plVar3,this,param_1,param_2,param_4);
          if (Variant::needs_deinit[*(int *)param_3] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)param_3 = local_48[0];
          *(undefined8 *)(param_3 + 8) = local_40._0_8_;
          *(undefined8 *)(param_3 + 0x10) = local_40._8_8_;
          goto LAB_00102a0c;
        }
      }
      else {
        ObjectDB::spin_lock._0_1_ = '\0';
      }
    }
    else {
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    }
    iVar1 = *(int *)param_3;
    *(undefined4 *)param_4 = 5;
    *(undefined8 *)(param_4 + 4) = 0;
    local_40 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[iVar1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_3 = 0;
    *(undefined8 *)(param_3 + 8) = local_40._0_8_;
    *(undefined8 *)(param_3 + 0x10) = local_40._8_8_;
  }
LAB_00102a0c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102bbc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable::callv(Array const&) const */

Array * Callable::callv(Array *param_1)

{
  long lVar1;
  Variant *pVVar2;
  int in_EDX;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar6;
  Callable *in_RSI;
  long lVar7;
  long lVar8;
  Variant **ppVVar9;
  long in_FS_OFFSET;
  undefined1 auStack_78 [8];
  Callable *local_70;
  int local_64;
  Variant **local_60;
  undefined4 local_50;
  undefined8 local_4c;
  long local_40;
  undefined1 *puVar5;
  
  puVar5 = auStack_78;
  puVar4 = auStack_78;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = in_RSI;
  local_64 = Array::size();
  local_60 = (Variant **)0x0;
  puVar6 = auStack_78;
  if (local_64 != 0) {
    lVar8 = (long)local_64;
    uVar3 = lVar8 * 8 + 0x17;
    puVar6 = auStack_78;
    while (puVar5 != auStack_78 + -(uVar3 & 0xfffffffffffff000)) {
      puVar4 = puVar6 + -0x1000;
      *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
      puVar5 = puVar6 + -0x1000;
      puVar6 = puVar6 + -0x1000;
    }
    uVar3 = (ulong)((uint)uVar3 & 0xff0);
    lVar1 = -uVar3;
    if (uVar3 != 0) {
      *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
    }
    ppVVar9 = (Variant **)((ulong)(puVar4 + lVar1 + 0xf) & 0xfffffffffffffff0);
    puVar6 = puVar4 + lVar1;
    local_60 = ppVVar9;
    if (0 < local_64) {
      lVar7 = 0;
      do {
        *(undefined8 *)(puVar4 + lVar1 + -8) = 0x102c8b;
        pVVar2 = (Variant *)Array::operator[](in_EDX);
        ppVVar9[lVar7] = pVVar2;
        lVar7 = lVar7 + 1;
        puVar6 = puVar4 + lVar1;
      } while (lVar8 != lVar7);
    }
  }
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  local_50 = 0;
  local_4c = 0;
  *(undefined8 *)(puVar6 + -8) = 0x102cd0;
  callp(local_70,local_60,local_64,(Variant *)param_1,(CallError *)&local_50);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar6 + -8) = &UNK_00102cf6;
    __stack_chk_fail();
  }
  return param_1;
}



/* CallableComparator::TEMPNAMEPLACEHOLDERVALUE(Variant const&, Variant const&) const */

bool __thiscall
CallableComparator::operator()(CallableComparator *this,Variant *param_1,Variant *param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  int local_68 [4];
  Variant *local_58;
  Variant *local_50;
  int local_48 [2];
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_40 = (undefined1  [16])0x0;
  local_58 = param_1;
  local_50 = param_2;
  Callable::callp(*(Callable **)this,&local_58,2,(Variant *)local_48,(CallError *)local_68);
  if (local_68[0] == 0) {
    bVar3 = Variant::operator_cast_to_bool((Variant *)local_48);
  }
  else {
    Variant::get_callable_error_text
              ((Callable *)&local_78,*(Variant ***)this,(int)&local_58,(CallError *)0x2);
    operator+((char *)&local_70,"Error calling compare method: ");
    _err_print_error("operator()","core/variant/callable.cpp",0x25a,
                     "Condition \"err.error != Callable::CallError::CALL_OK\" is true. Returning: false"
                     ,&local_70,0,0);
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
    lVar2 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        bVar3 = false;
        goto LAB_00102d85;
      }
    }
    bVar3 = false;
  }
LAB_00102d85:
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable::get_argument_count(bool*) const */

undefined8 __thiscall Callable::get_argument_count(Callable *this,bool *param_1)

{
  long *plVar1;
  char cVar2;
  StringName *pSVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)this == 0) && (plVar1 = *(long **)(this + 8), plVar1 != (long *)0x0)) {
    local_21 = false;
    if (param_1 == (bool *)0x0) {
      param_1 = &local_21;
    }
    if (*(code **)(*plVar1 + 0x50) == CallableCustom::get_argument_count) {
LAB_00102f3d:
      *param_1 = false;
      goto LAB_00102ef0;
    }
    uVar4 = (**(code **)(*plVar1 + 0x50))(plVar1,param_1);
  }
  else {
    cVar2 = is_valid(this);
    if (cVar2 != '\0') {
      pSVar3 = (StringName *)get_object(this);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = Object::get_method_argument_count(pSVar3,(bool *)this);
        return uVar4;
      }
      goto LAB_00102f82;
    }
    if (param_1 != (bool *)0x0) goto LAB_00102f3d;
LAB_00102ef0:
    uVar4 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
LAB_00102f82:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Signal::get_connections() const */

void Signal::get_connections(void)

{
  long *plVar1;
  long lVar2;
  Signal *in_RSI;
  Array *in_RDI;
  long in_FS_OFFSET;
  long *local_68;
  Array local_60 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar1 = (long *)get_object(in_RSI);
  if (plVar1 == (long *)0x0) {
    Array::Array(in_RDI);
  }
  else {
    local_68 = (long *)0x0;
    (**(code **)(*plVar1 + 0xe8))(plVar1);
    Array::Array(local_60);
    if ((local_68 != (long *)0x0) && (lVar2 = *local_68, lVar2 != 0)) {
      do {
        Object::Connection::operator_cast_to_Variant((Connection *)local_58);
        Array::push_back((Variant *)local_60);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar2 = *(long *)(lVar2 + 0x28);
      } while (lVar2 != 0);
    }
    Array::Array(in_RDI,local_60);
    Array::~Array(local_60);
    List<Object::Connection,DefaultAllocator>::~List
              ((List<Object::Connection,DefaultAllocator> *)&local_68);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Variant>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Variant>::_copy_on_write(CowData<Variant> *this)

{
  Variant *this_00;
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  Variant *pVVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar1 * 0x18 != 0) {
    uVar6 = lVar1 * 0x18 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar4 = 0;
  lVar7 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      this_00 = (Variant *)((long)(puVar3 + 2) + lVar4);
      lVar7 = lVar7 + 1;
      pVVar5 = (Variant *)(*(long *)this + lVar4);
      lVar4 = lVar4 + 0x18;
      Variant::Variant(this_00,pVVar5);
    } while (lVar1 != lVar7);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* CallableCustom::get_bound_arguments(Vector<Variant>&) const */

void __thiscall CallableCustom::get_bound_arguments(CallableCustom *this,Vector *param_1)

{
  if ((*(long *)(param_1 + 8) != 0) && (*(long *)(*(long *)(param_1 + 8) + -8) != 0)) {
    CowData<Variant>::_unref((CowData<Variant> *)(param_1 + 8));
    return;
  }
  return;
}



/* Callable::get_bound_arguments_ref(Vector<Variant>&) const */

void __thiscall Callable::get_bound_arguments_ref(Callable *this,Vector *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (((*(long *)this == 0) && (*(long **)(this + 8) != (long *)0x0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(this + 8) + 0x60),
     UNRECOVERED_JUMPTABLE != CallableCustom::get_bound_arguments)) {
                    /* WARNING: Could not recover jumptable at 0x00103224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if ((*(long *)(param_1 + 8) != 0) && (*(long *)(*(long *)(param_1 + 8) + -8) != 0)) {
    CowData<Variant>::_unref((CowData<Variant> *)(param_1 + 8));
    return;
  }
  return;
}



/* Callable::get_bound_arguments() const */

void Callable::get_bound_arguments(void)

{
  Variant *pVVar1;
  Variant *this;
  long lVar2;
  Callable *in_RSI;
  Array *in_RDI;
  long in_FS_OFFSET;
  Vector aVStack_38 [8];
  long local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30[0] = 0;
  get_bound_arguments_ref(in_RSI,aVStack_38);
  Array::Array(in_RDI);
  Array::resize((int)in_RDI);
  for (lVar2 = 0; (local_30[0] != 0 && (lVar2 < *(long *)(local_30[0] + -8))); lVar2 = lVar2 + 1) {
    pVVar1 = (Variant *)(local_30[0] + lVar2 * 0x18);
    this = (Variant *)Array::operator[]((int)in_RDI);
    Variant::operator=(this,pVVar1);
  }
  CowData<Variant>::_unref((CowData<Variant> *)local_30);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Variant>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Variant>::resize<false>(CowData<Variant> *this,long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar4 = 0;
    lVar9 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar4) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    lVar9 = lVar4 * 0x18;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 != 0) {
    uVar10 = param_1 * 0x18 - 1;
    uVar10 = uVar10 | uVar10 >> 1;
    uVar10 = uVar10 | uVar10 >> 2;
    uVar10 = uVar10 | uVar10 >> 4;
    uVar10 = uVar10 | uVar10 >> 8;
    uVar10 = uVar10 | uVar10 >> 0x10;
    uVar10 = uVar10 | uVar10 >> 0x20;
    lVar11 = uVar10 + 1;
    if (lVar11 != 0) {
      if (param_1 <= lVar4) {
        puVar5 = *(undefined8 **)this;
        uVar10 = param_1;
        while( true ) {
          if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if ((ulong)puVar5[-1] <= uVar10) break;
          if (Variant::needs_deinit[*(int *)(puVar5 + uVar10 * 3)] != '\0') {
            Variant::_clear_internal();
            puVar5 = *(undefined8 **)this;
          }
          uVar10 = uVar10 + 1;
        }
        if (lVar11 != lVar9) {
          iVar2 = _realloc(this,lVar11);
          if (iVar2 != 0) {
            return;
          }
          puVar5 = *(undefined8 **)this;
          if (puVar5 == (undefined8 *)0x0) {
            FUN_0010478a();
            return;
          }
        }
        goto LAB_0010348f;
      }
      if (lVar11 == lVar9) {
LAB_0010353b:
        puVar5 = *(undefined8 **)this;
        if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar4 = puVar5[-1];
        if (param_1 <= lVar4) goto LAB_0010348f;
      }
      else {
        if (lVar4 != 0) {
          iVar2 = _realloc(this,lVar11);
          if (iVar2 != 0) {
            return;
          }
          goto LAB_0010353b;
        }
        puVar3 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
        if (puVar3 == (undefined8 *)0x0) {
          uVar8 = 0x171;
          pcVar6 = "Parameter \"mem_new\" is null.";
          goto LAB_001035c2;
        }
        puVar5 = puVar3 + 2;
        *puVar3 = 1;
        puVar3[1] = 0;
        *(undefined8 **)this = puVar5;
        lVar4 = 0;
      }
      lVar9 = lVar4 + 1;
      *(undefined4 *)(puVar5 + lVar4 * 3) = 0;
      *(undefined1 (*) [16])(puVar5 + lVar4 * 3 + 1) = (undefined1  [16])0x0;
      if (lVar9 < param_1) {
        lVar4 = lVar9 * 0x18;
        do {
          lVar9 = lVar9 + 1;
          puVar7 = (undefined4 *)(*(long *)this + lVar4);
          lVar4 = lVar4 + 0x18;
          *puVar7 = 0;
          *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
        } while (param_1 != lVar9);
      }
      puVar5 = *(undefined8 **)this;
      if (puVar5 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
LAB_0010348f:
      puVar5[-1] = param_1;
      return;
    }
  }
  uVar8 = 0x16a;
  pcVar6 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_001035c2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar8,pcVar6,0,0);
  return;
}



/* Callable::bindv(Array const&) */

Array * Callable::bindv(Array *param_1)

{
  CallableCustomBind CVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  Variant *pVVar5;
  CallableCustomBind *this;
  int in_EDX;
  long lVar6;
  Callable *in_RSI;
  long lVar7;
  long in_FS_OFFSET;
  Vector aVStack_58 [8];
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = Array::is_empty();
  if (cVar3 == '\0') {
    local_50[0] = 0;
    iVar4 = Array::size();
    CowData<Variant>::resize<false>((CowData<Variant> *)local_50,(long)iVar4);
    lVar6 = 0;
    while( true ) {
      iVar4 = Array::size();
      if (iVar4 <= (int)lVar6) break;
      pVVar5 = (Variant *)Array::operator[](in_EDX);
      if (local_50[0] == 0) {
        lVar7 = 0;
LAB_001036fa:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar6,lVar7,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar7 = *(long *)(local_50[0] + -8);
      if (lVar7 <= lVar6) goto LAB_001036fa;
      CowData<Variant>::_copy_on_write((CowData<Variant> *)local_50);
      Variant::operator=((Variant *)(local_50[0] + lVar6 * 0x18),pVVar5);
      lVar6 = lVar6 + 1;
    }
    this = (CallableCustomBind *)operator_new(0x30,"");
    CallableCustomBind::CallableCustomBind(this,in_RSI,aVStack_58);
    CVar1 = this[0xc];
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    if (CVar1 == (CallableCustomBind)0x0) {
      this[0xc] = (CallableCustomBind)0x1;
      *(CallableCustomBind **)(param_1 + 8) = this;
    }
    else {
      _err_print_error("Callable","core/variant/callable.cpp",0x1a2,"Method/function failed.",
                       "Callable custom is already referenced.",0,0);
    }
    CowData<Variant>::_unref((CowData<Variant> *)local_50);
  }
  else {
    Callable((Callable *)param_1,in_RSI);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable::bindp(Variant const**, int) const */

Variant ** Callable::bindp(Variant **param_1,int param_2)

{
  CallableCustomBind CVar1;
  Variant *pVVar2;
  code *pcVar3;
  CallableCustomBind *this;
  int in_ECX;
  long in_RDX;
  long lVar4;
  long lVar5;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  Vector local_58 [8];
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50[0] = 0;
  CowData<Variant>::resize<false>((CowData<Variant> *)local_50,(long)in_ECX);
  if (0 < in_ECX) {
    lVar5 = 0;
    do {
      pVVar2 = *(Variant **)(in_RDX + lVar5 * 8);
      if (local_50[0] == 0) {
        lVar4 = 0;
LAB_00103871:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar5,lVar4,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar4 = *(long *)(local_50[0] + -8);
      if (lVar4 <= lVar5) goto LAB_00103871;
      CowData<Variant>::_copy_on_write((CowData<Variant> *)local_50);
      lVar4 = lVar5 + 1;
      Variant::operator=((Variant *)(local_50[0] + lVar5 * 0x18),pVVar2);
      lVar5 = lVar4;
    } while (lVar4 != in_ECX);
  }
  this = (CallableCustomBind *)operator_new(0x30,"");
  CallableCustomBind::CallableCustomBind
            (this,(Callable *)CONCAT44(in_register_00000034,param_2),local_58);
  CVar1 = this[0xc];
  *param_1 = (Variant *)0x0;
  param_1[1] = (Variant *)0x0;
  if (CVar1 == (CallableCustomBind)0x0) {
    this[0xc] = (CallableCustomBind)0x1;
    param_1[1] = (Variant *)this;
  }
  else {
    _err_print_error("Callable","core/variant/callable.cpp",0x1a2,"Method/function failed.",
                     "Callable custom is already referenced.",0,0);
  }
  CowData<Variant>::_unref((CowData<Variant> *)local_50);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* CallableCustomMethodPointerBase::get_as_text() const */

void CallableCustomMethodPointerBase::get_as_text(void)

{
  char *__s;
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  __s = *(char **)(in_RSI + 0x20);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (__s != (char *)0x0) {
    strlen(__s);
  }
  String::parse_latin1(in_RDI);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  
  lVar1 = *(long *)this;
  lVar2 = *(long *)param_1;
  if (lVar1 == lVar2) {
    return;
  }
  if (lVar1 != 0) {
    LOCK();
    plVar3 = (long *)(lVar1 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar1 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
      lVar2 = *(long *)param_1;
    }
    else {
      *(undefined8 *)this = 0;
      lVar2 = *(long *)param_1;
    }
  }
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + -0x10);
    do {
      lVar1 = *plVar3;
      if (lVar1 == 0) {
        return;
      }
      LOCK();
      lVar2 = *plVar3;
      bVar4 = lVar1 == lVar2;
      if (bVar4) {
        *plVar3 = lVar1 + 1;
        lVar2 = lVar1;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar2 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00104218) */
/* WARNING: Removing unreachable block (ram,0x00104348) */
/* WARNING: Removing unreachable block (ram,0x00104510) */
/* WARNING: Removing unreachable block (ram,0x00104354) */
/* WARNING: Removing unreachable block (ram,0x0010435e) */
/* WARNING: Removing unreachable block (ram,0x001044f0) */
/* WARNING: Removing unreachable block (ram,0x0010436a) */
/* WARNING: Removing unreachable block (ram,0x00104374) */
/* WARNING: Removing unreachable block (ram,0x001044d0) */
/* WARNING: Removing unreachable block (ram,0x00104380) */
/* WARNING: Removing unreachable block (ram,0x0010438a) */
/* WARNING: Removing unreachable block (ram,0x001044b0) */
/* WARNING: Removing unreachable block (ram,0x00104396) */
/* WARNING: Removing unreachable block (ram,0x001043a0) */
/* WARNING: Removing unreachable block (ram,0x00104490) */
/* WARNING: Removing unreachable block (ram,0x001043ac) */
/* WARNING: Removing unreachable block (ram,0x001043b6) */
/* WARNING: Removing unreachable block (ram,0x00104470) */
/* WARNING: Removing unreachable block (ram,0x001043c2) */
/* WARNING: Removing unreachable block (ram,0x001043cc) */
/* WARNING: Removing unreachable block (ram,0x00104450) */
/* WARNING: Removing unreachable block (ram,0x001043d4) */
/* WARNING: Removing unreachable block (ram,0x001043ea) */
/* WARNING: Removing unreachable block (ram,0x001043f6) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

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



/* List<Object::Connection, DefaultAllocator>::~List() */

void __thiscall
List<Object::Connection,DefaultAllocator>::~List(List<Object::Connection,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar1[7] == plVar4) {
      lVar3 = plVar1[5];
      lVar2 = plVar1[6];
      *plVar4 = lVar3;
      if (plVar1 == (long *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x28) = lVar3;
        lVar3 = plVar1[5];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar2;
      }
      Callable::~Callable((Callable *)(plVar1 + 2));
      if ((StringName::configured != '\0') && (*plVar1 != 0)) {
        StringName::unref();
      }
      Memory::free_static(plVar1,false);
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



/* CowData<Variant>::_unref() */

void __thiscall CowData<Variant>::_unref(CowData<Variant> *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    piVar2 = *(int **)this;
    if (piVar2 != (int *)0x0) {
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)this = 0;
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
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<Variant>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Variant>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Variant>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Variant>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010478a(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Variant>::_realloc(long) */

undefined8 __thiscall CowData<Variant>::_realloc(CowData<Variant> *this,long param_1)

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



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Object::Connection, DefaultAllocator>::~List() */

void __thiscall
List<Object::Connection,DefaultAllocator>::~List(List<Object::Connection,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



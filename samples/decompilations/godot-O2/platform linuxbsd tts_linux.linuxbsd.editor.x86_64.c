
/* TTS_Linux::speech_event_callback(unsigned long, unsigned long, SPDNotificationType) */

void TTS_Linux::speech_event_callback(int param_1,undefined8 param_2,int param_3)

{
  Variant *pVVar1;
  undefined8 uVar2;
  long lVar3;
  CallableCustom *this;
  Variant *pVVar4;
  long in_FS_OFFSET;
  Callable aCStack_a8 [16];
  Variant *local_98;
  Variant *pVStack_90;
  Variant local_78 [24];
  Variant local_60 [24];
  Variant local_48 [24];
  long local_30;
  
  lVar3 = singleton;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (singleton != 0) {
    this = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this);
    *(undefined **)(this + 0x20) = &_LC0;
    *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined ***)this = &PTR_hash_00105268;
    uVar2 = *(undefined8 *)(lVar3 + 0x60);
    *(long *)(this + 0x28) = lVar3;
    *(undefined8 *)(this + 0x30) = uVar2;
    *(code **)(this + 0x38) = _speech_event;
    *(undefined8 *)(this + 0x10) = 0;
    CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
    *(char **)(this + 0x20) = "TTS_Linux::_speech_event";
    Callable::Callable(aCStack_a8,this);
    Variant::Variant(local_78,param_1);
    Variant::Variant(local_60,param_3);
    Variant::Variant(local_48,0);
    pVVar4 = (Variant *)&local_30;
    local_98 = local_78;
    pVStack_90 = local_60;
    Callable::call_deferredp((Variant **)aCStack_a8,(int)&local_98);
    do {
      pVVar1 = pVVar4 + -0x18;
      pVVar4 = pVVar4 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar4 != local_78);
    Callable::~Callable(aCStack_a8);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, int> > >::erase(int const&) [clone .isra.0] */

void __thiscall
HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
::erase(HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
        *this,int *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
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
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  ulong uVar35;
  long *plVar36;
  uint uVar37;
  uint *puVar38;
  ulong uVar39;
  
  lVar6 = *(long *)(this + 8);
  if ((lVar6 != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar33 = *param_1;
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar39 = CONCAT44(0,uVar5);
    uVar7 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar28 = (uVar33 >> 0x10 ^ uVar33) * -0x7a143595;
    uVar28 = (uVar28 ^ uVar28 >> 0xd) * -0x3d4d51cb;
    uVar32 = uVar28 ^ uVar28 >> 0x10;
    if (uVar28 == uVar28 >> 0x10) {
      uVar32 = 1;
      uVar30 = uVar7;
    }
    else {
      uVar30 = uVar32 * uVar7;
    }
    lVar8 = *(long *)(this + 0x10);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar39;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar30;
    uVar30 = SUB168(auVar10 * auVar19,8);
    uVar28 = *(uint *)(lVar8 + uVar30 * 4);
    uVar34 = (ulong)SUB164(auVar10 * auVar19,8);
    if (uVar28 != 0) {
      uVar37 = 0;
      do {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = ((int)uVar34 + 1) * uVar7;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar39;
        uVar31 = SUB168(auVar13 * auVar22,8);
        uVar29 = SUB164(auVar13 * auVar22,8);
        if ((uVar32 == uVar28) && (uVar33 == *(uint *)(*(long *)(lVar6 + uVar30 * 8) + 0x10))) {
          puVar38 = (uint *)(lVar8 + uVar31 * 4);
          uVar33 = *puVar38;
          if ((uVar33 != 0) &&
             (auVar14._8_8_ = 0, auVar14._0_8_ = uVar33 * uVar7, auVar23._8_8_ = 0,
             auVar23._0_8_ = uVar39, auVar15._8_8_ = 0,
             auVar15._0_8_ = ((uVar29 + uVar5) - SUB164(auVar14 * auVar23,8)) * uVar7,
             auVar24._8_8_ = 0, auVar24._0_8_ = uVar39, uVar30 = (ulong)uVar29, uVar35 = uVar34,
             SUB164(auVar15 * auVar24,8) != 0)) {
            while( true ) {
              uVar34 = uVar30;
              puVar1 = (uint *)(lVar8 + uVar35 * 4);
              *puVar38 = *puVar1;
              puVar2 = (undefined8 *)(lVar6 + uVar31 * 8);
              *puVar1 = uVar33;
              puVar3 = (undefined8 *)(lVar6 + uVar35 * 8);
              uVar9 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar9;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = ((int)uVar34 + 1) * uVar7;
              auVar27._8_8_ = 0;
              auVar27._0_8_ = uVar39;
              uVar31 = SUB168(auVar18 * auVar27,8);
              puVar38 = (uint *)(lVar8 + uVar31 * 4);
              uVar33 = *puVar38;
              if ((uVar33 == 0) ||
                 (auVar16._8_8_ = 0, auVar16._0_8_ = uVar33 * uVar7, auVar25._8_8_ = 0,
                 auVar25._0_8_ = uVar39, auVar17._8_8_ = 0,
                 auVar17._0_8_ =
                      ((SUB164(auVar18 * auVar27,8) + uVar5) - SUB164(auVar16 * auVar25,8)) * uVar7,
                 auVar26._8_8_ = 0, auVar26._0_8_ = uVar39, SUB164(auVar17 * auVar26,8) == 0))
              break;
              uVar30 = uVar31 & 0xffffffff;
              uVar35 = uVar34;
            }
          }
          plVar4 = (long *)(lVar6 + uVar34 * 8);
          *(undefined4 *)(lVar8 + uVar34 * 4) = 0;
          plVar36 = (long *)*plVar4;
          if (*(long **)(this + 0x18) == plVar36) {
            *(long *)(this + 0x18) = *plVar36;
            plVar36 = (long *)*plVar4;
          }
          if (*(long **)(this + 0x20) == plVar36) {
            *(long *)(this + 0x20) = plVar36[1];
            plVar36 = (long *)*plVar4;
          }
          if ((long *)plVar36[1] != (long *)0x0) {
            *(long *)plVar36[1] = *plVar36;
            plVar36 = (long *)*plVar4;
          }
          if (*plVar36 != 0) {
            *(long *)(*plVar36 + 8) = plVar36[1];
            plVar36 = (long *)*plVar4;
          }
          Memory::free_static(plVar36,false);
          *(undefined8 *)(*(long *)(this + 8) + uVar34 * 8) = 0;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
          return;
        }
        uVar28 = *(uint *)(lVar8 + uVar31 * 4);
        uVar34 = uVar31 & 0xffffffff;
        uVar37 = uVar37 + 1;
      } while ((uVar28 != 0) &&
              (auVar11._8_8_ = 0, auVar11._0_8_ = uVar28 * uVar7, auVar20._8_8_ = 0,
              auVar20._0_8_ = uVar39, auVar12._8_8_ = 0,
              auVar12._0_8_ = ((uVar5 + uVar29) - SUB164(auVar11 * auVar20,8)) * uVar7,
              auVar21._8_8_ = 0, auVar21._0_8_ = uVar39, uVar30 = uVar31,
              uVar37 <= SUB164(auVar12 * auVar21,8)));
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



/* TTS_Linux::speech_event_index_mark(unsigned long, unsigned long, SPDNotificationType, char*) */

void TTS_Linux::speech_event_index_mark(int param_1,undefined8 param_2,int param_3,int param_4)

{
  Variant *pVVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  CallableCustom *this;
  Variant *pVVar5;
  long in_FS_OFFSET;
  long local_e0;
  Callable local_d8 [16];
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  Variant local_60 [24];
  Variant local_48 [8];
  long local_40;
  
  lVar4 = singleton;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (singleton != 0) {
    this = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this);
    *(undefined **)(this + 0x20) = &_LC0;
    *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)this = &PTR_hash_001051d8;
    *(undefined8 *)(this + 0x40) = 0;
    uVar3 = *(undefined8 *)(lVar4 + 0x60);
    *(long *)(this + 0x28) = lVar4;
    *(undefined8 *)(this + 0x30) = uVar3;
    *(code **)(this + 0x38) = _speech_index_mark;
    *(undefined8 *)(this + 0x10) = 0;
    CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
    *(char **)(this + 0x20) = "TTS_Linux::_speech_index_mark";
    Callable::Callable(local_d8,this);
    String::utf8((char *)&local_e0,param_4);
    Variant::Variant(local_a8,param_1);
    Variant::Variant(local_90,param_3);
    Variant::Variant(local_78,(String *)&local_e0);
    Variant::Variant(local_60,0);
    pVVar5 = local_48;
    local_c8 = local_a8;
    pVStack_c0 = local_90;
    local_b8 = local_78;
    Callable::call_deferredp((Variant **)local_d8,(int)&local_c8);
    do {
      pVVar1 = pVVar5 + -0x18;
      pVVar5 = pVVar5 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
      lVar4 = local_e0;
    } while (pVVar5 != local_a8);
    if (local_e0 != 0) {
      LOCK();
      plVar2 = (long *)(local_e0 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_e0 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    Callable::~Callable(local_d8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TTS_Linux::~TTS_Linux() */

void __thiscall TTS_Linux::~TTS_Linux(TTS_Linux *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_00105078;
  Thread::wait_to_finish();
  if (*(long *)(this + 0x1a8) != 0) {
    (*_spd_close_dylibloader_wrapper_speechd)();
  }
  singleton = 0;
  Thread::~Thread((Thread *)(this + 0x220));
  pvVar6 = *(void **)(this + 0x1f8);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x21c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x218) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x21c) = 0;
        *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x200) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0x200) + lVar5) = 0;
            if (*(long *)((long)pvVar6 + 0x20) != 0) {
              LOCK();
              plVar7 = (long *)(*(long *)((long)pvVar6 + 0x20) + -0x10);
              *plVar7 = *plVar7 + -1;
              UNLOCK();
              if (*plVar7 == 0) {
                lVar3 = *(long *)((long)pvVar6 + 0x20);
                *(undefined8 *)((long)pvVar6 + 0x20) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar6 + 0x18) != 0) {
              LOCK();
              plVar7 = (long *)(*(long *)((long)pvVar6 + 0x18) + -0x10);
              *plVar7 = *plVar7 + -1;
              UNLOCK();
              if (*plVar7 == 0) {
                lVar3 = *(long *)((long)pvVar6 + 0x18);
                *(undefined8 *)((long)pvVar6 + 0x18) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar6 + 0x10) != 0) {
              LOCK();
              plVar7 = (long *)(*(long *)((long)pvVar6 + 0x10) + -0x10);
              *plVar7 = *plVar7 + -1;
              UNLOCK();
              if (*plVar7 == 0) {
                lVar3 = *(long *)((long)pvVar6 + 0x10);
                *(undefined8 *)((long)pvVar6 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0x1f8);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while ((ulong)uVar2 << 2 != lVar5);
        *(undefined4 *)(this + 0x21c) = 0;
        *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_001007ba;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x200),false);
  }
LAB_001007ba:
  pvVar6 = *(void **)(this + 0x1c0);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x1e4) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x1e4) = 0;
        *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1c8) + lVar5) != 0) {
            *(int *)(*(long *)(this + 0x1c8) + lVar5) = 0;
            Memory::free_static(*(void **)((long)pvVar6 + lVar5 * 2),false);
            pvVar6 = *(void **)(this + 0x1c0);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x1e4) = 0;
        *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_00100857;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x1c8),false);
  }
LAB_00100857:
  plVar7 = *(long **)(this + 0x1a0);
  if (plVar7 != (long *)0x0) {
    do {
      plVar4 = (long *)*plVar7;
      if (plVar4 == (long *)0x0) {
        if ((int)plVar7[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00100903;
        }
        break;
      }
      if (plVar7 == (long *)plVar4[6]) {
        lVar5 = plVar4[4];
        lVar3 = plVar4[5];
        *plVar7 = lVar5;
        if (plVar4 == (long *)plVar7[1]) {
          plVar7[1] = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x20) = lVar5;
          lVar5 = plVar4[4];
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x28) = lVar3;
        }
        if (plVar4[1] != 0) {
          LOCK();
          plVar1 = (long *)(plVar4[1] + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar5 = plVar4[1];
            plVar4[1] = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        if (*plVar4 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar4 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar5 = *plVar4;
            *plVar4 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        Memory::free_static(plVar4,false);
        *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar7 = *(long **)(this + 0x1a0);
    } while ((int)plVar7[2] != 0);
    Memory::free_static(plVar7,false);
  }
LAB_00100903:
  Object::~Object((Object *)this);
  return;
}



/* TTS_Linux::~TTS_Linux() */

void __thiscall TTS_Linux::~TTS_Linux(TTS_Linux *this)

{
  ~TTS_Linux(this);
  operator_delete(this,0x230);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TTS_Linux::speech_init_thread_func(void*) */

void TTS_Linux::speech_init_thread_func(void *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (void *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00100f23;
  }
  iVar6 = pthread_mutex_lock((pthread_mutex_t *)((long)param_1 + 0x178));
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  iVar6 = initialize_speechd(1);
  if (iVar6 == 0) {
    if ((((((_spd_open_dylibloader_wrapper_speechd == (code *)0x0) ||
           (_spd_set_notification_on_dylibloader_wrapper_speechd == (code *)0x0)) ||
          (_spd_list_synthesis_voices_dylibloader_wrapper_speechd == 0)) ||
         ((_free_spd_voices_dylibloader_wrapper_speechd == 0 ||
          (_spd_set_synthesis_voice_dylibloader_wrapper_speechd == 0)))) ||
        ((_spd_set_volume_dylibloader_wrapper_speechd == 0 ||
         ((_spd_set_voice_pitch_dylibloader_wrapper_speechd == 0 ||
          (_spd_set_voice_rate_dylibloader_wrapper_speechd == 0)))))) ||
       ((_spd_set_data_mode_dylibloader_wrapper_speechd == 0 ||
        ((((_spd_say_dylibloader_wrapper_speechd == 0 ||
           (_spd_pause_dylibloader_wrapper_speechd == 0)) ||
          (_spd_resume_dylibloader_wrapper_speechd == 0)) ||
         (_spd_cancel_dylibloader_wrapper_speechd == 0)))))) {
      cVar5 = is_print_verbose_enabled();
      if (cVar5 != '\0') {
        pcVar9 = "Text-to-Speech: Unsupported Speech Dispatcher library version!";
        goto LAB_00100d7d;
      }
    }
    else {
      local_70 = 0;
      ProjectSettings::get_singleton();
      StringName::StringName((StringName *)&local_60,"application/config/name",false);
      ProjectSettings::get_setting_with_override((StringName *)local_58);
      Variant::operator_cast_to_String((Variant *)&local_68);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      if ((local_68 == 0) || (*(uint *)(local_68 + -8) < 2)) {
        CharString::operator=((CharString *)&local_70,"Godot_Engine");
        lVar8 = local_70;
      }
      else {
        String::utf8();
        lVar4 = local_60;
        lVar3 = local_70;
        if (local_70 == local_60) {
          lVar8 = local_70;
          if (local_70 != 0) {
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_60 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
              lVar8 = local_70;
            }
          }
        }
        else {
          lVar8 = local_60;
          if (local_70 != 0) {
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            lVar8 = local_60;
            if (*plVar1 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
              lVar8 = local_60;
            }
          }
        }
      }
      local_70 = lVar8;
      pcVar2 = _spd_open_dylibloader_wrapper_speechd;
      uVar7 = CharString::get_data();
      lVar8 = (*pcVar2)(uVar7,"Godot_Engine_Speech_API","Godot_Engine",1);
      *(long *)((long)param_1 + 0x1a8) = lVar8;
      if (lVar8 == 0) {
        cVar5 = is_print_verbose_enabled();
        if (cVar5 != '\0') {
          pcVar9 = "Text-to-Speech: Cannot initialize Speech Dispatcher synthesizer!";
          goto LAB_00100e15;
        }
      }
      else {
        *(code **)(lVar8 + 0x28) = speech_event_index_mark;
        *(undefined8 *)(lVar8 + 8) = 0x100000;
        *(undefined8 *)(lVar8 + 0x10) = 0x100000;
        (*_spd_set_notification_on_dylibloader_wrapper_speechd)(lVar8,2);
        (*_spd_set_notification_on_dylibloader_wrapper_speechd)
                  (*(undefined8 *)((long)param_1 + 0x1a8),8);
        cVar5 = is_print_verbose_enabled();
        pcVar9 = "Text-to-Speech: Speech Dispatcher initialized.";
        if (cVar5 != '\0') {
LAB_00100e15:
          Variant::Variant((Variant *)local_58,pcVar9);
          stringify_variants((Variant *)&local_60);
          __print_line((String *)&local_60);
          lVar8 = local_60;
          if (local_60 != 0) {
            LOCK();
            plVar1 = (long *)(local_60 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_60 = 0;
              Memory::free_static((void *)(lVar8 + -0x10),false);
            }
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
      }
      lVar8 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
    }
  }
  else {
    cVar5 = is_print_verbose_enabled();
    pcVar9 = "Text-to-Speech: Cannot load Speech Dispatcher library!";
    if (cVar5 != '\0') {
LAB_00100d7d:
      Variant::Variant((Variant *)local_58,pcVar9);
      stringify_variants((Variant *)&local_60);
      __print_line((String *)&local_60);
      lVar8 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    pthread_mutex_unlock((pthread_mutex_t *)((long)param_1 + 0x178));
    return;
  }
LAB_00100f23:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TTS_Linux::is_speaking() const */

TTS_Linux __thiscall TTS_Linux::is_speaking(TTS_Linux *this)

{
  return this[0x1b0];
}



/* TTS_Linux::is_paused() const */

TTS_Linux __thiscall TTS_Linux::is_paused(TTS_Linux *this)

{
  return this[0x1b1];
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TTS_Linux::pause() */

void __thiscall TTS_Linux::pause(TTS_Linux *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x178));
  if (iVar1 == 0) {
    if (*(long *)(this + 0x1a8) == 0) {
      _err_print_error("pause","platform/linuxbsd/tts_linux.cpp",0xf2,"Parameter \"synth\" is null."
                       ,0,0);
    }
    else {
      iVar1 = (*_spd_pause_dylibloader_wrapper_speechd)();
      if (iVar1 == 0) {
        this[0x1b1] = (TTS_Linux)0x1;
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x178));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TTS_Linux::resume() */

void __thiscall TTS_Linux::resume(TTS_Linux *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x178));
  if (iVar1 == 0) {
    if (*(long *)(this + 0x1a8) == 0) {
      _err_print_error("resume","platform/linuxbsd/tts_linux.cpp",0xfb,
                       "Parameter \"synth\" is null.",0,0);
    }
    else {
      (*_spd_resume_dylibloader_wrapper_speechd)();
      this[0x1b1] = (TTS_Linux)0x0;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x178));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* TTS_Linux::get_singleton() */

undefined8 TTS_Linux::get_singleton(void)

{
  return singleton;
}



/* TTS_Linux::TTS_Linux() */

void __thiscall TTS_Linux::TTS_Linux(TTS_Linux *this)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Object::Object((Object *)this);
  *(undefined ***)this = &PTR__initialize_classv_00105078;
  *(undefined2 *)(this + 0x1b0) = 0;
  uVar2 = _LC31;
  *(undefined1 (*) [16])(this + 0x188) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x188) = 1;
  *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  *(undefined8 *)(this + 0x1e0) = uVar2;
  this[0x1e8] = (TTS_Linux)0x0;
  *(undefined8 *)(this + 0x218) = uVar2;
  *(undefined1 (*) [16])(this + 0x178) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1f8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
  Thread::Thread((Thread *)(this + 0x220));
  singleton = this;
  Thread::start((_func_void_void_ptr *)(this + 0x220),speech_init_thread_func,(Settings *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TTS_Linux::_speech_index_mark(int, int, String const&) */

void TTS_Linux::_speech_index_mark(int param_1,int param_2,String *param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long *plVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  undefined4 in_register_0000003c;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  uint local_3c [3];
  
  lVar19 = CONCAT44(in_register_0000003c,param_1);
  local_3c[0] = param_2;
  iVar12 = pthread_mutex_lock((pthread_mutex_t *)(lVar19 + 0x178));
  plVar11 = DisplayServer::singleton;
  if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar12);
  }
  if ((*(long *)(lVar19 + 0x1c0) != 0) && (*(int *)(lVar19 + 0x1e4) != 0)) {
    uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar19 + 0x1e0) * 8);
    uVar13 = (local_3c[0] >> 0x10 ^ local_3c[0]) * -0x7a143595;
    uVar13 = (uVar13 ^ uVar13 >> 0xd) * -0x3d4d51cb;
    uVar18 = uVar13 ^ uVar13 >> 0x10;
    if (uVar13 == uVar13 >> 0x10) {
      uVar18 = 1;
      uVar16 = uVar1;
    }
    else {
      uVar16 = uVar18 * uVar1;
    }
    uVar20 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar19 + 0x1e0) * 4));
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar20;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar17 = SUB168(auVar3 * auVar7,8);
    uVar13 = *(uint *)(*(long *)(lVar19 + 0x1c8) + lVar17 * 4);
    iVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar13 != 0) {
      uVar21 = 0;
      while ((uVar13 != uVar18 ||
             (local_3c[0] != *(uint *)(*(long *)(*(long *)(lVar19 + 0x1c0) + lVar17 * 8) + 0x10))))
      {
        uVar21 = uVar21 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (iVar12 + 1) * uVar1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar20;
        lVar17 = SUB168(auVar4 * auVar8,8);
        uVar13 = *(uint *)(*(long *)(lVar19 + 0x1c8) + lVar17 * 4);
        iVar12 = SUB164(auVar4 * auVar8,8);
        if ((uVar13 == 0) ||
           (auVar5._8_8_ = 0, auVar5._0_8_ = uVar13 * uVar1, auVar9._8_8_ = 0, auVar9._0_8_ = uVar20
           , auVar6._8_8_ = 0,
           auVar6._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar19 + 0x1e0) * 4)
                           + iVar12) - SUB164(auVar5 * auVar9,8)) * uVar1, auVar10._8_8_ = 0,
           auVar10._0_8_ = uVar20, SUB164(auVar6 * auVar10,8) < uVar21)) goto LAB_001012d7;
      }
      pcVar2 = *(code **)(*DisplayServer::singleton + 0x338);
      uVar14 = String::to_int();
      puVar15 = (undefined4 *)
                HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                ::operator[]((HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                              *)(lVar19 + 0x1b8),(int *)local_3c);
      (*pcVar2)(plVar11,3,*puVar15,uVar14);
    }
  }
LAB_001012d7:
  pthread_mutex_unlock((pthread_mutex_t *)(lVar19 + 0x178));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TTS_Linux::stop() */

void __thiscall TTS_Linux::stop(TTS_Linux *this)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  uint uVar22;
  long *plVar23;
  
  iVar15 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x178));
  if (iVar15 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar15);
  }
  if (*(long *)(this + 0x1a8) == 0) {
    _err_print_error(&_LC39,"platform/linuxbsd/tts_linux.cpp",0x103,"Parameter \"synth\" is null.",0
                     ,0);
  }
  else {
    if (*(long **)(this + 0x1a0) != (long *)0x0) {
      for (lVar21 = **(long **)(this + 0x1a0); lVar21 != 0; lVar21 = *(long *)(lVar21 + 0x20)) {
        (**(code **)(*DisplayServer::singleton + 0x338))
                  (DisplayServer::singleton,2,*(undefined4 *)(lVar21 + 0x1c),0);
      }
    }
    plVar23 = DisplayServer::singleton;
    uVar2 = *(uint *)(this + 0x1b4);
    if (((uVar2 != 0xffffffff) && (*(long *)(this + 0x1c0) != 0)) && (*(int *)(this + 0x1e4) != 0))
    {
      uVar5 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1e0) * 8);
      uVar16 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
      uVar16 = (uVar16 ^ uVar16 >> 0xd) * -0x3d4d51cb;
      uVar22 = uVar16 ^ uVar16 >> 0x10;
      if (uVar16 == uVar16 >> 0x10) {
        uVar22 = 1;
        uVar18 = uVar5;
      }
      else {
        uVar18 = uVar22 * uVar5;
      }
      uVar19 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4));
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar19;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar18;
      lVar21 = SUB168(auVar7 * auVar11,8);
      uVar16 = *(uint *)(*(long *)(this + 0x1c8) + lVar21 * 4);
      iVar15 = SUB164(auVar7 * auVar11,8);
      if (uVar16 != 0) {
        uVar20 = 0;
        while ((uVar22 != uVar16 ||
               (uVar2 != *(uint *)(*(long *)(*(long *)(this + 0x1c0) + lVar21 * 8) + 0x10)))) {
          uVar20 = uVar20 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (iVar15 + 1) * uVar5;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar19;
          lVar21 = SUB168(auVar8 * auVar12,8);
          uVar16 = *(uint *)(*(long *)(this + 0x1c8) + lVar21 * 4);
          iVar15 = SUB164(auVar8 * auVar12,8);
          if ((uVar16 == 0) ||
             (auVar9._8_8_ = 0, auVar9._0_8_ = uVar16 * uVar5, auVar13._8_8_ = 0,
             auVar13._0_8_ = uVar19, auVar10._8_8_ = 0,
             auVar10._0_8_ =
                  ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4) + iVar15)
                  - SUB164(auVar9 * auVar13,8)) * uVar5, auVar14._8_8_ = 0, auVar14._0_8_ = uVar19,
             SUB164(auVar10 * auVar14,8) < uVar20)) goto LAB_00101397;
        }
        pcVar6 = *(code **)(*DisplayServer::singleton + 0x338);
        puVar17 = (undefined4 *)
                  HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                  ::operator[]((HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                                *)(this + 0x1b8),(int *)(this + 0x1b4));
        (*pcVar6)(plVar23,2,*puVar17,0);
      }
    }
LAB_00101397:
    plVar23 = *(long **)(this + 0x1a0);
    if (plVar23 != (long *)0x0) {
      do {
        plVar3 = (long *)*plVar23;
        if (plVar3 == (long *)0x0) goto LAB_00101450;
        if ((long *)plVar3[6] == plVar23) {
          lVar21 = plVar3[4];
          lVar4 = plVar3[5];
          *plVar23 = lVar21;
          if (plVar3 == (long *)plVar23[1]) {
            plVar23[1] = lVar4;
          }
          if (lVar4 != 0) {
            *(long *)(lVar4 + 0x20) = lVar21;
            lVar21 = plVar3[4];
          }
          if (lVar21 != 0) {
            *(long *)(lVar21 + 0x28) = lVar4;
          }
          if (plVar3[1] != 0) {
            LOCK();
            plVar1 = (long *)(plVar3[1] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar21 = plVar3[1];
              plVar3[1] = 0;
              Memory::free_static((void *)(lVar21 + -0x10),false);
            }
          }
          if (*plVar3 != 0) {
            LOCK();
            plVar1 = (long *)(*plVar3 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar21 = *plVar3;
              *plVar3 = 0;
              Memory::free_static((void *)(lVar21 + -0x10),false);
            }
          }
          Memory::free_static(plVar3,false);
          *(int *)(plVar23 + 2) = (int)plVar23[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar23 = *(long **)(this + 0x1a0);
      } while ((int)plVar23[2] != 0);
      Memory::free_static(plVar23,false);
      *(undefined8 *)(this + 0x1a0) = 0;
    }
LAB_00101450:
    if ((*(long *)(this + 0x1c0) != 0) && (*(int *)(this + 0x1e4) != 0)) {
      lVar21 = 0;
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4);
      if (uVar2 != 0) {
        do {
          if (*(int *)(*(long *)(this + 0x1c8) + lVar21) != 0) {
            *(int *)(*(long *)(this + 0x1c8) + lVar21) = 0;
            Memory::free_static(*(void **)(*(long *)(this + 0x1c0) + lVar21 * 2),false);
            *(undefined8 *)(*(long *)(this + 0x1c0) + lVar21 * 2) = 0;
          }
          lVar21 = lVar21 + 4;
        } while (lVar21 != (ulong)uVar2 << 2);
      }
      *(undefined4 *)(this + 0x1e4) = 0;
      *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
    }
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
    (*_spd_cancel_dylibloader_wrapper_speechd)(*(undefined8 *)(this + 0x1a8));
    (*_spd_resume_dylibloader_wrapper_speechd)(*(undefined8 *)(this + 0x1a8));
    *(undefined2 *)(this + 0x1b0) = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x178));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TTS_Linux::_load_voices() const [clone .part.0] */

void __thiscall TTS_Linux::_load_voices(TTS_Linux *this)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  CowData<char32_t> *this_00;
  long *plVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = (long *)(*_spd_list_synthesis_voices_dylibloader_wrapper_speechd)
                             (*(undefined8 *)(this + 0x1a8));
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    plVar4 = plVar3;
    while (lVar5 != 0) {
      local_58 = (undefined1  [16])0x0;
      String::utf8((char *)&local_60,(int)*(undefined8 *)(lVar5 + 8));
      if (local_60 != 0) {
        local_58._0_8_ = local_60;
      }
      String::utf8((char *)&local_60,(int)*(undefined8 *)(*plVar4 + 0x10));
      lVar5 = local_60;
      if (local_60 != 0) {
        local_58._8_8_ = local_60;
      }
      String::utf8((char *)&local_60,(int)*(undefined8 *)*plVar4);
      this_00 = (CowData<char32_t> *)
                HashMap<String,TTS_Linux::VoiceInfo,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TTS_Linux::VoiceInfo>>>
                ::operator[]((HashMap<String,TTS_Linux::VoiceInfo,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TTS_Linux::VoiceInfo>>>
                              *)(this + 0x1f0),(String *)&local_60);
      if (*(long *)this_00 != local_58._0_8_) {
        CowData<char32_t>::_ref(this_00,(CowData *)local_58);
      }
      if (lVar5 != *(long *)(this_00 + 8)) {
        CowData<char32_t>::_ref(this_00 + 8,(CowData *)(local_58 + 8));
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
        lVar5 = local_58._8_8_;
      }
      plVar4 = plVar4 + 1;
      if (lVar5 != 0) {
        LOCK();
        plVar1 = (long *)(lVar5 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_58._8_8_ + -0x10),false);
        }
      }
      if (local_58._0_8_ != 0) {
        LOCK();
        plVar1 = (long *)(local_58._0_8_ + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_58._0_8_ + -0x10),false);
        }
      }
      lVar5 = *plVar4;
    }
    (*_free_spd_voices_dylibloader_wrapper_speechd)(plVar3);
  }
  this[0x1e8] = (TTS_Linux)0x1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TTS_Linux::_load_voices() const */

void __thiscall TTS_Linux::_load_voices(TTS_Linux *this)

{
  if (this[0x1e8] == (TTS_Linux)0x0) {
    _load_voices(this);
    return;
  }
  return;
}



/* TTS_Linux::get_voices() const */

Array * TTS_Linux::get_voices(void)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  Variant *pVVar5;
  TTS_Linux *in_RSI;
  Array *in_RDI;
  long *plVar6;
  long in_FS_OFFSET;
  Array local_a8 [8];
  Dictionary local_a0 [8];
  long local_98;
  long local_90;
  undefined *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(in_RSI + 0x178));
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  if (*(long *)(in_RSI + 0x1a8) == 0) {
    _err_print_error("get_voices","platform/linuxbsd/tts_linux.cpp",0xc3,
                     "Parameter \"synth\" is null.",0,0);
    Array::Array(in_RDI);
  }
  else {
    if (in_RSI[0x1e8] == (TTS_Linux)0x0) {
      _load_voices(in_RSI);
    }
    Array::Array(local_a8);
    plVar6 = *(long **)(in_RSI + 0x208);
    if (plVar6 != (long *)0x0) {
      do {
        Dictionary::Dictionary(local_a0);
        Variant::Variant((Variant *)local_58,(String *)(plVar6 + 2));
        Variant::Variant((Variant *)local_78,"name");
        pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_a0);
        if (pVVar5 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar5 = 0;
          *(int *)pVVar5 = local_58[0];
          *(undefined8 *)(pVVar5 + 8) = local_50;
          *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,(String *)(plVar6 + 2));
        Variant::Variant((Variant *)local_78,"id");
        pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_a0);
        if (pVVar5 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar5 = 0;
          *(int *)pVVar5 = local_58[0];
          *(undefined8 *)(pVVar5 + 8) = local_50;
          *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_98 = 0;
        local_88 = &_LC43;
        local_80 = 1;
        String::parse_latin1((StrRange *)&local_98);
        String::operator+((String *)&local_90,(String *)(plVar6 + 3));
        String::operator+((String *)&local_88,(String *)&local_90);
        Variant::Variant((Variant *)local_58,(String *)&local_88);
        Variant::Variant((Variant *)local_78,"language");
        pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_a0);
        if (pVVar5 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar5 = 0;
          *(int *)pVVar5 = local_58[0];
          *(undefined8 *)(pVVar5 + 8) = local_50;
          *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        puVar3 = local_88;
        if (local_88 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_88 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_88 = (undefined *)0x0;
            Memory::free_static(puVar3 + -0x10,false);
          }
        }
        lVar2 = local_90;
        if (local_90 != 0) {
          LOCK();
          plVar1 = (long *)(local_90 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        lVar2 = local_98;
        if (local_98 != 0) {
          LOCK();
          plVar1 = (long *)(local_98 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_98 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        Variant::Variant((Variant *)local_58,local_a0);
        Array::push_back((Variant *)local_a8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::~Dictionary(local_a0);
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
    Array::Array(in_RDI,local_a8);
    Array::~Array(local_a8);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(in_RSI + 0x178));
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TTS_Linux::_speech_event(int, int) */

void __thiscall TTS_Linux::_speech_event(TTS_Linux *this,int param_1,int param_2)

{
  long *plVar1;
  HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
  *this_00;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
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
  undefined *puVar22;
  char cVar23;
  int iVar24;
  undefined4 uVar25;
  uint uVar26;
  uint uVar27;
  undefined8 uVar28;
  undefined4 *puVar29;
  uint uVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  Object *pOVar34;
  int iVar35;
  ulong uVar36;
  long lVar37;
  uint uVar38;
  code *pcVar39;
  uint uVar40;
  long lVar41;
  long in_FS_OFFSET;
  float fVar42;
  int local_a0;
  uint local_9c [3];
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined1 local_68 [8];
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c[0] = param_1;
  iVar24 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x178));
  plVar3 = DisplayServer::singleton;
  if (iVar24 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar24);
  }
  if (((this[0x1b1] == (TTS_Linux)0x0) && (*(long *)(this + 0x1c0) != 0)) &&
     (*(int *)(this + 0x1e4) != 0)) {
    uVar5 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1e0) * 8);
    uVar26 = (local_9c[0] >> 0x10 ^ local_9c[0]) * -0x7a143595;
    uVar26 = (uVar26 ^ uVar26 >> 0xd) * -0x3d4d51cb;
    uVar38 = uVar26 ^ uVar26 >> 0x10;
    if (uVar26 == uVar26 >> 0x10) {
      uVar38 = 1;
      uVar31 = uVar5;
    }
    else {
      uVar31 = uVar38 * uVar5;
    }
    uVar36 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4));
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar36;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar31;
    lVar32 = SUB168(auVar6 * auVar14,8);
    uVar26 = *(uint *)(*(long *)(this + 0x1c8) + lVar32 * 4);
    iVar24 = SUB164(auVar6 * auVar14,8);
    if (uVar26 != 0) {
      uVar27 = 0;
      while ((uVar26 != uVar38 ||
             (local_9c[0] != *(uint *)(*(long *)(*(long *)(this + 0x1c0) + lVar32 * 8) + 0x10)))) {
        uVar27 = uVar27 + 1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (iVar24 + 1) * uVar5;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar36;
        lVar32 = SUB168(auVar7 * auVar15,8);
        uVar26 = *(uint *)(*(long *)(this + 0x1c8) + lVar32 * 4);
        iVar24 = SUB164(auVar7 * auVar15,8);
        if ((uVar26 == 0) ||
           (auVar8._8_8_ = 0, auVar8._0_8_ = uVar26 * uVar5, auVar16._8_8_ = 0,
           auVar16._0_8_ = uVar36, auVar9._8_8_ = 0,
           auVar9._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4) +
                           iVar24) - SUB164(auVar8 * auVar16,8)) * uVar5, auVar17._8_8_ = 0,
           auVar17._0_8_ = uVar36, SUB164(auVar9 * auVar17,8) < uVar27)) goto LAB_00101e3e;
      }
      this_00 = (HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                 *)(this + 0x1b8);
      if (param_2 == 1) {
        pcVar39 = *(code **)(*DisplayServer::singleton + 0x338);
        puVar29 = (undefined4 *)
                  HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                  ::operator[](this_00,(int *)local_9c);
        uVar28 = 1;
        uVar25 = *puVar29;
      }
      else {
        if (param_2 != 3) goto LAB_00101e3e;
        pcVar39 = *(code **)(*DisplayServer::singleton + 0x338);
        puVar29 = (undefined4 *)
                  HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                  ::operator[](this_00,(int *)local_9c);
        uVar28 = 2;
        uVar25 = *puVar29;
      }
      (*pcVar39)(plVar3,uVar28,uVar25,0);
      HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
      ::erase(this_00,(int *)local_9c);
      this[0x1b0] = (TTS_Linux)0x0;
      *(undefined4 *)(this + 0x1b4) = 0xffffffff;
      goto LAB_00101e4b;
    }
  }
LAB_00101e3e:
  if (this[0x1b0] == (TTS_Linux)0x0) {
LAB_00101e4b:
    plVar3 = *(long **)(this + 0x1a0);
    if ((plVar3 != (long *)0x0) && (0 < (int)plVar3[2])) {
      lVar32 = *plVar3;
      local_90 = 0;
      local_88 = 0;
      if (this[0x1e8] == (TTS_Linux)0x0) {
        _load_voices(this);
      }
      if ((*(long *)(this + 0x1f8) != 0) && (*(int *)(this + 0x21c) != 0)) {
        uVar26 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x218) * 4);
        lVar41 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x218) * 8);
        uVar27 = String::hash();
        uVar5 = CONCAT44(0,uVar26);
        lVar37 = *(long *)(this + 0x200);
        uVar38 = 1;
        if (uVar27 != 0) {
          uVar38 = uVar27;
        }
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar38 * lVar41;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar5;
        lVar33 = SUB168(auVar10 * auVar18,8);
        uVar27 = *(uint *)(lVar37 + lVar33 * 4);
        uVar30 = SUB164(auVar10 * auVar18,8);
        if (uVar27 != 0) {
          uVar40 = 0;
          do {
            if (uVar38 == uVar27) {
              cVar23 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 0x1f8) + lVar33 * 8) + 0x10),
                                          (String *)(lVar32 + 8));
              if (cVar23 != '\0') {
                lVar41 = *(long *)(*(long *)(this + 0x1f8) + (ulong)uVar30 * 8);
                if (local_88 != *(long *)(lVar41 + 0x18)) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)(lVar41 + 0x18))
                  ;
                }
                break;
              }
              lVar37 = *(long *)(this + 0x200);
            }
            uVar40 = uVar40 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(uVar30 + 1) * lVar41;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar5;
            lVar33 = SUB168(auVar11 * auVar19,8);
            uVar27 = *(uint *)(lVar37 + lVar33 * 4);
            uVar30 = SUB164(auVar11 * auVar19,8);
            if ((uVar27 == 0) ||
               (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar27 * lVar41, auVar20._8_8_ = 0,
               auVar20._0_8_ = uVar5, auVar13._8_8_ = 0,
               auVar13._0_8_ = (ulong)((uVar26 + uVar30) - SUB164(auVar12 * auVar20,8)) * lVar41,
               auVar21._8_8_ = 0, auVar21._0_8_ = uVar5, SUB164(auVar13 * auVar21,8) < uVar40))
            break;
          } while( true );
        }
      }
      pOVar34 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar34 == (Object *)0x0) {
                    /* WARNING: Does not return */
        pcVar39 = (code *)invalidInstructionException();
        (*pcVar39)();
      }
      cVar23 = RefCounted::reference();
      if (cVar23 == '\0') {
        pOVar34 = (Object *)0x0;
      }
      (**(code **)(*(long *)pOVar34 + 0x7d8))(local_68,pOVar34,lVar32,&local_88,0);
      cVar23 = RefCounted::unreference();
      if ((cVar23 != '\0') && (cVar23 = predelete_handler(pOVar34), cVar23 != '\0')) {
        (**(code **)(*(long *)pOVar34 + 0x140))(pOVar34);
        Memory::free_static(pOVar34,false);
      }
      iVar24 = -1;
      pcVar39 = _spd_set_synthesis_voice_dylibloader_wrapper_speechd;
      for (lVar41 = 1;
          (_spd_set_synthesis_voice_dylibloader_wrapper_speechd = pcVar39, local_60 != 0 &&
          (lVar37 = *(long *)(local_60 + -8), lVar41 + -1 < lVar37)); lVar41 = lVar41 + 2) {
        if (lVar37 <= lVar41) {
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar41,lVar37,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar39 = (code *)invalidInstructionException();
          (*pcVar39)();
        }
        iVar2 = *(int *)(local_60 + lVar41 * 4);
        iVar35 = (int)(String *)&local_58;
        if ((iVar24 != -1) && (*(int *)(local_60 + -4 + lVar41 * 4) != iVar24)) {
          String::substr(iVar35,(int)lVar32);
          String::operator+=((String *)&local_90,(String *)&local_58);
          puVar22 = local_58;
          if (local_58 != (undefined *)0x0) {
            LOCK();
            plVar3 = (long *)(local_58 + -0x10);
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
              local_58 = (undefined *)0x0;
              Memory::free_static(puVar22 + -0x10,false);
            }
          }
        }
        String::substr(iVar35,(int)lVar32);
        String::operator+=((String *)&local_90,(String *)&local_58);
        puVar22 = local_58;
        if (local_58 != (undefined *)0x0) {
          LOCK();
          plVar3 = (long *)(local_58 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_58 = (undefined *)0x0;
            Memory::free_static(puVar22 + -0x10,false);
          }
        }
        local_70 = 0;
        local_58 = &_LC51;
        local_50 = 3;
        String::parse_latin1((StrRange *)&local_70);
        String::num_int64((long)&local_80,iVar2,true);
        operator+((char *)&local_78,(String *)"<mark name=\"");
        String::operator+((String *)&local_58,(String *)&local_78);
        String::operator+=((String *)&local_90,(String *)&local_58);
        puVar22 = local_58;
        if (local_58 != (undefined *)0x0) {
          LOCK();
          plVar3 = (long *)(local_58 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_58 = (undefined *)0x0;
            Memory::free_static(puVar22 + -0x10,false);
          }
        }
        lVar37 = local_78;
        if (local_78 != 0) {
          LOCK();
          plVar3 = (long *)(local_78 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_78 = 0;
            Memory::free_static((void *)(lVar37 + -0x10),false);
          }
        }
        lVar37 = local_80;
        if (local_80 != 0) {
          LOCK();
          plVar3 = (long *)(local_80 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_80 = 0;
            Memory::free_static((void *)(lVar37 + -0x10),false);
          }
        }
        lVar37 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar3 = (long *)(local_70 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar37 + -0x10),false);
          }
        }
        iVar24 = iVar2;
        pcVar39 = _spd_set_synthesis_voice_dylibloader_wrapper_speechd;
      }
      String::utf8();
      CharString::get_data();
      (*pcVar39)(*(undefined8 *)(this + 0x1a8));
      puVar22 = local_58;
      if (local_58 != (undefined *)0x0) {
        LOCK();
        plVar3 = (long *)(local_58 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_58 = (undefined *)0x0;
          Memory::free_static(puVar22 + -0x10,false);
        }
      }
      (*_spd_set_volume_dylibloader_wrapper_speechd)
                (*(undefined8 *)(this + 0x1a8),*(int *)(lVar32 + 0x10) * 2 + -100);
      (*_spd_set_voice_pitch_dylibloader_wrapper_speechd)
                (*(undefined8 *)(this + 0x1a8),(int)((*(float *)(lVar32 + 0x14) - _LC53) * __LC54));
      fVar42 = *(float *)(lVar32 + 0x18);
      if (fVar42 <= _LC53) {
        local_a0 = 0;
        if (fVar42 < _LC53) {
          if (fVar42 <= _LC46) {
            fVar42 = _LC46;
          }
          fVar42 = log10f(fVar42);
          local_a0 = (int)((fVar42 / __LC56) * __LC57);
        }
      }
      else {
        if (_LC45 <= fVar42) {
          fVar42 = _LC45;
        }
        fVar42 = log10f(fVar42);
        local_a0 = (int)((fVar42 / __LC55) * __LC54);
      }
      (*_spd_set_voice_rate_dylibloader_wrapper_speechd)(*(undefined8 *)(this + 0x1a8),local_a0);
      (*_spd_set_data_mode_dylibloader_wrapper_speechd)(*(undefined8 *)(this + 0x1a8),1);
      pcVar39 = _spd_say_dylibloader_wrapper_speechd;
      String::utf8();
      uVar28 = CharString::get_data();
      uVar25 = (*pcVar39)(*(undefined8 *)(this + 0x1a8),3,uVar28);
      puVar22 = local_58;
      *(undefined4 *)(this + 0x1b4) = uVar25;
      if (local_58 != (undefined *)0x0) {
        LOCK();
        plVar3 = (long *)(local_58 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_58 = (undefined *)0x0;
          Memory::free_static(puVar22 + -0x10,false);
        }
      }
      uVar25 = *(undefined4 *)(lVar32 + 0x1c);
      puVar29 = (undefined4 *)
                HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                ::operator[]((HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                              *)(this + 0x1b8),(int *)(this + 0x1b4));
      plVar3 = DisplayServer::singleton;
      *puVar29 = uVar25;
      (**(code **)(*plVar3 + 0x338))(plVar3,0,*(undefined4 *)(lVar32 + 0x1c),0);
      plVar3 = *(long **)(this + 0x1a0);
      if ((plVar3 != (long *)0x0) && (plVar4 = (long *)*plVar3, plVar4 != (long *)0x0)) {
        if (plVar3 == (long *)plVar4[6]) {
          lVar32 = plVar4[4];
          lVar41 = plVar4[5];
          *plVar3 = lVar32;
          if (plVar4 == (long *)plVar3[1]) {
            plVar3[1] = lVar41;
          }
          if (lVar41 != 0) {
            *(long *)(lVar41 + 0x20) = lVar32;
            lVar32 = plVar4[4];
          }
          if (lVar32 != 0) {
            *(long *)(lVar32 + 0x28) = lVar41;
          }
          if (plVar4[1] != 0) {
            LOCK();
            plVar1 = (long *)(plVar4[1] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar32 = plVar4[1];
              plVar4[1] = 0;
              Memory::free_static((void *)(lVar32 + -0x10),false);
            }
          }
          if (*plVar4 != 0) {
            LOCK();
            plVar1 = (long *)(*plVar4 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar32 = *plVar4;
              *plVar4 = 0;
              Memory::free_static((void *)(lVar32 + -0x10),false);
            }
          }
          Memory::free_static(plVar4,false);
          *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        if (*(int *)((long)*(void **)(this + 0x1a0) + 0x10) == 0) {
          Memory::free_static(*(void **)(this + 0x1a0),false);
          *(undefined8 *)(this + 0x1a0) = 0;
        }
      }
      lVar32 = local_60;
      this[0x1b0] = (TTS_Linux)0x1;
      if (local_60 != 0) {
        LOCK();
        plVar3 = (long *)(local_60 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar32 + -0x10),false);
        }
      }
      lVar32 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar3 = (long *)(local_88 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar32 + -0x10),false);
        }
      }
      lVar32 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar3 = (long *)(local_90 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar32 + -0x10),false);
        }
      }
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x178));
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TTS_Linux::speak(String const&, String const&, int, float, float, int, bool) */

void __thiscall
TTS_Linux::speak(TTS_Linux *this,String *param_1,String *param_2,int param_3,float param_4,
                float param_5,int param_6,bool param_7)

{
  long *plVar1;
  int iVar2;
  CowData<char32_t> *this_00;
  long lVar3;
  undefined1 (*pauVar4) [16];
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  float local_6c;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x178));
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar2);
  }
  if (*(long *)(this + 0x1a8) == 0) {
    _err_print_error("speak","platform/linuxbsd/tts_linux.cpp",0xd5,"Parameter \"synth\" is null.",0
                     ,0);
  }
  else {
    if (param_7) {
      stop(this);
    }
    lVar5 = *(long *)param_1;
    if ((lVar5 == 0) || (*(uint *)(lVar5 + -8) < 2)) {
      (**(code **)(*DisplayServer::singleton + 0x338))(DisplayServer::singleton,2,param_6,0);
    }
    else {
      plVar1 = (long *)(lVar5 + -0x10);
      local_50 = 0x3f800000;
      local_58 = 0x3f80000000000032;
      local_68 = (undefined1  [16])0x0;
      do {
        lVar5 = *plVar1;
        if (lVar5 == 0) goto LAB_00102a67;
        LOCK();
        lVar3 = *plVar1;
        bVar7 = lVar5 == lVar3;
        if (bVar7) {
          *plVar1 = lVar5 + 1;
          lVar3 = lVar5;
        }
        UNLOCK();
      } while (!bVar7);
      if (lVar3 != -1) {
        local_68._8_8_ = 0;
        local_68._0_8_ = *(ulong *)param_1;
      }
LAB_00102a67:
      lVar5 = *(long *)param_2;
      if (local_68._8_8_ != *(long *)param_2) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(local_68 + 8),(CowData *)param_2);
        lVar5 = local_68._8_8_;
      }
      iVar2 = 100;
      if (param_3 < 0x65) {
        iVar2 = param_3;
      }
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      if (0.0 <= param_4) {
        if (_LC60 < param_4) {
          param_4 = _LC60;
        }
      }
      else {
        param_4 = 0.0;
      }
      local_6c = _LC61;
      local_58 = CONCAT44(param_4,iVar2);
      if ((_LC61 <= param_5) && (local_6c = param_5, _LC62 < param_5)) {
        local_6c = _LC62;
      }
      local_50 = CONCAT44(param_6,local_6c);
      if (*(long *)(this + 0x1a0) == 0) {
        pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])(this + 0x1a0) = pauVar4;
        *(undefined4 *)pauVar4[1] = 0;
        *pauVar4 = (undefined1  [16])0x0;
      }
      this_00 = (CowData<char32_t> *)operator_new(0x38,DefaultAllocator::alloc);
      lVar6 = local_68._0_8_;
      *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
      *(undefined8 *)(this_00 + 0x10) = 0x3f80000000000032;
      lVar3 = 0;
      *(undefined8 *)(this_00 + 0x18) = 0x3f800000;
      *(undefined8 *)(this_00 + 0x30) = 0;
      *(undefined1 (*) [16])(this_00 + 0x20) = (undefined1  [16])0x0;
      if (local_68._0_8_ != 0) {
        CowData<char32_t>::_ref(this_00,(CowData *)local_68);
        lVar3 = *(long *)(this_00 + 8);
      }
      if (lVar3 != lVar5) {
        CowData<char32_t>::_ref(this_00 + 8,(CowData *)(local_68 + 8));
      }
      *(int *)(this_00 + 0x10) = iVar2;
      *(ulong *)(this_00 + 0x14) = CONCAT44(local_6c,param_4);
      *(int *)(this_00 + 0x1c) = param_6;
      plVar1 = *(long **)(this + 0x1a0);
      lVar3 = plVar1[1];
      *(undefined8 *)(this_00 + 0x20) = 0;
      *(long **)(this_00 + 0x30) = plVar1;
      *(long *)(this_00 + 0x28) = lVar3;
      if (lVar3 != 0) {
        *(CowData<char32_t> **)(lVar3 + 0x20) = this_00;
      }
      plVar1[1] = (long)this_00;
      if (*plVar1 == 0) {
        *plVar1 = (long)this_00;
      }
      *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
      if (this[0x1b1] == (TTS_Linux)0x0) {
        _speech_event(this,0,0);
      }
      else {
        resume(this);
      }
      if (lVar5 != 0) {
        LOCK();
        plVar1 = (long *)(lVar5 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_68._8_8_ + -0x10),false);
        }
        lVar6 = local_68._0_8_;
      }
      if (lVar6 != 0) {
        LOCK();
        plVar1 = (long *)(lVar6 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_68._0_8_ + -0x10),false);
        }
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x178));
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
  return CONCAT71(0x1052,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* CallableCustomMethodPointer<TTS_Linux, void, int, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TTS_Linux,void,int,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TTS_Linux,void,int,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<TTS_Linux, void, int, int, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TTS_Linux,void,int,int,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TTS_Linux,void,int,int,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<TTS_Linux, void, int, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TTS_Linux,void,int,int>::get_argument_count
          (CallableCustomMethodPointer<TTS_Linux,void,int,int> *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<TTS_Linux, void, int, int, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<TTS_Linux,void,int,int,String_const&>::get_argument_count
          (CallableCustomMethodPointer<TTS_Linux,void,int,int,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<TTS_Linux, void, int, int, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TTS_Linux,void,int,int,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TTS_Linux,void,int,int,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TTS_Linux, void, int, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TTS_Linux,void,int,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TTS_Linux,void,int,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* Object::_initialize_classv() */

void Object::_initialize_classv(void)

{
  Object::initialize_class();
  return;
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
LAB_00102fe3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102fe3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Object");
      goto LAB_0010304e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Object");
LAB_0010304e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<TTS_Linux, void, int, int, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TTS_Linux,void,int,int,String_const&>::get_object
          (CallableCustomMethodPointer<TTS_Linux,void,int,int,String_const&> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
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
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010317d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010317d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010317d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TTS_Linux, void, int, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TTS_Linux,void,int,int>::get_object
          (CallableCustomMethodPointer<TTS_Linux,void,int,int> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
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
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010327d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010327d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010327d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
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



/* Object::get_class() const */

void Object::get_class(void)

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



/* Object::is_class(String const&) const */

ulong __thiscall Object::is_class(Object *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar2 = *(long *)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (lVar2 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
LAB_0010358f:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_50 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_50 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_001034a3;
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
            local_50 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_50);
      }
    }
LAB_001034a3:
    uVar5 = String::operator==(param_1,(String *)&local_50);
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
    if ((char)uVar5 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)uVar5;
      }
      goto LAB_0010358f;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* CallableCustomMethodPointer<TTS_Linux, void, int, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TTS_Linux,void,int,int>::call
          (CallableCustomMethodPointer<TTS_Linux,void,int,int> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong *puVar11;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar12;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar10 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar4 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar4 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_48 = (char *)(uVar4 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar11 = (ulong *)((ulong)uVar10 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar11 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_001039bd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar11[1] == 0) goto LAB_001039bd;
    lVar2 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar3 = *(long *)(this + 0x40);
    if ((uint)param_2 < 3) {
      if (param_2 == 2) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar2 + lVar3) + -1);
        }
        cVar7 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar5 = _LC17;
        if (cVar7 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar5;
        }
        iVar8 = Variant::operator_cast_to_int(param_1[1]);
        cVar7 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar5 = _LC18;
        if (cVar7 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar5;
        }
        iVar9 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00103996. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar2 + lVar3),iVar9,iVar8);
          return;
        }
        goto LAB_00103b23;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 2;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 2;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001039bd:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)&local_60);
    operator+((char *)&local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)&local_58);
    _err_print_error(&_LC16,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    pcVar6 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar6 + -0x10,false);
      }
    }
    lVar2 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103b23:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TTS_Linux, void, int, int, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TTS_Linux,void,int,int,String_const&>::call
          (CallableCustomMethodPointer<TTS_Linux,void,int,int,String_const&> *this,Variant **param_1
          ,int param_2,Variant *param_3,CallError *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong *puVar11;
  code *pcVar12;
  long in_FS_OFFSET;
  bool bVar13;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar10 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar4 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar4 << 8);
      LOCK();
      bVar13 = (char)ObjectDB::spin_lock == '\0';
      if (bVar13) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar13) break;
      local_58 = (char *)(uVar4 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar11 = (ulong *)((ulong)uVar10 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar11 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar11[1] != 0) {
        lVar2 = *(long *)(this + 0x28);
        pcVar12 = *(code **)(this + 0x38);
        lVar3 = *(long *)(this + 0x40);
        if ((uint)param_2 < 4) {
          if (param_2 == 3) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar12 & 1) != 0) {
              pcVar12 = *(code **)(pcVar12 + *(long *)(lVar2 + lVar3) + -1);
            }
            cVar7 = Variant::can_convert_strict(*(undefined4 *)param_1[2],4);
            uVar5 = _LC19;
            if (cVar7 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar5;
            }
            Variant::operator_cast_to_String((Variant *)&local_58);
            cVar7 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
            uVar5 = _LC17;
            if (cVar7 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar5;
            }
            iVar8 = Variant::operator_cast_to_int(param_1[1]);
            cVar7 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
            uVar5 = _LC18;
            if (cVar7 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar5;
            }
            iVar9 = Variant::operator_cast_to_int(*param_1);
            (*pcVar12)((long *)(lVar2 + lVar3),iVar9,iVar8,(Variant *)&local_58);
            pcVar6 = local_58;
            if (local_58 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_58 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_58 = (char *)0x0;
                Memory::free_static(pcVar6 + -0x10,false);
              }
            }
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 3;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
        }
        goto LAB_00103bf5;
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
  local_60 = 0;
  local_58 = "\', can\'t call method.";
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  uitos((ulong)&local_70);
  operator+((char *)&local_68,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_58,(String *)&local_68);
  _err_print_error(&_LC16,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0);
  pcVar6 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar6 + -0x10,false);
    }
  }
  lVar2 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
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
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
LAB_00103bf5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, int> > >::operator[](int const&) */

undefined1  [16] __thiscall
HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
::operator[](HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
             *this,int *param_1)

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
  undefined1 (*pauVar36) [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  ulong uVar43;
  int iVar44;
  ulong uVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  uint uVar53;
  uint uVar54;
  undefined1 (*pauVar55) [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  uVar38 = *param_1;
  uVar39 = *(uint *)(hash_table_size_primes + uVar40 * 4);
  uVar51 = CONCAT44(0,uVar39);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar51 * 4;
    uVar48 = uVar51 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    lStack_90 = 0x10456b;
    local_70 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = local_70;
    if (uVar39 == 0) {
      iVar44 = *(int *)(this + 0x2c);
      uVar38 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_001040d3;
    }
    else {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)local_70 + uVar48)) &&
         (local_70 < (void *)((long)pvVar3 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar51 != uVar40);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
      else {
        memset(pvVar3,0,uVar40);
        lStack_90 = 0x1045b4;
        memset(local_70,0,uVar48);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
    }
    if (iVar44 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_00104453;
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    if (iVar44 != 0) {
      uVar48 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar37 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar37 = (uVar37 ^ uVar37 >> 0xd) * -0x3d4d51cb;
      uVar53 = uVar37 ^ uVar37 >> 0x10;
      if (uVar37 == uVar37 >> 0x10) {
        uVar53 = 1;
        uVar45 = uVar48;
      }
      else {
        uVar45 = uVar53 * uVar48;
      }
      lVar52 = *(long *)(this + 0x10);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar51;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar45;
      lVar46 = SUB168(auVar4 * auVar20,8);
      uVar37 = *(uint *)(lVar52 + lVar46 * 4);
      uVar54 = SUB164(auVar4 * auVar20,8);
      if (uVar37 != 0) {
        uVar50 = 0;
        lVar47 = lVar46;
        do {
          if ((uVar53 == uVar37) &&
             (uVar38 == *(uint *)(*(long *)((long)local_70 + lVar46 * 8) + 0x10))) {
            auVar56._0_8_ = *(long *)((long)local_70 + (ulong)uVar54 * 8) + 0x14;
            auVar56._8_8_ = lVar47;
            return auVar56;
          }
          uVar50 = uVar50 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar54 + 1) * uVar48;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar51;
          lVar46 = SUB168(auVar5 * auVar21,8);
          uVar37 = *(uint *)(lVar52 + lVar46 * 4);
          uVar54 = SUB164(auVar5 * auVar21,8);
        } while ((uVar37 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar37 * uVar48, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar51, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((uVar54 + uVar39) - SUB164(auVar6 * auVar22,8)) * uVar48,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar51, lVar47 = SUB168(auVar7 * auVar23,8),
                uVar50 <= SUB164(auVar7 * auVar23,8)));
      }
LAB_00104453:
      uVar45 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar40 * 4));
      uVar48 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar39 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
      uVar37 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
        uVar37 = 1;
        uVar43 = uVar48;
      }
      else {
        uVar43 = uVar37 * uVar48;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar45;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar43;
      lVar46 = SUB168(auVar16 * auVar32,8);
      uVar39 = *(uint *)(lVar52 + lVar46 * 4);
      uVar53 = SUB164(auVar16 * auVar32,8);
      if (uVar39 != 0) {
        uVar54 = 0;
        lVar47 = lVar46;
        do {
          if ((uVar37 == uVar39) &&
             (*(uint *)(*(long *)((long)local_70 + lVar46 * 8) + 0x10) == uVar38)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar53 * 8);
            *(undefined4 *)(pauVar42[1] + 4) = 0;
            lStack_90 = lVar47;
            goto LAB_00104434;
          }
          uVar54 = uVar54 + 1;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (uVar53 + 1) * uVar48;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = uVar45;
          lVar46 = SUB168(auVar17 * auVar33,8);
          uVar39 = *(uint *)(lVar52 + lVar46 * 4);
          uVar53 = SUB164(auVar17 * auVar33,8);
        } while ((uVar39 != 0) &&
                (auVar18._8_8_ = 0, auVar18._0_8_ = uVar39 * uVar48, auVar34._8_8_ = 0,
                auVar34._0_8_ = uVar45, auVar19._8_8_ = 0,
                auVar19._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar40 * 4) + uVar53) -
                     SUB164(auVar18 * auVar34,8)) * uVar48, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar45, lVar47 = SUB168(auVar19 * auVar35,8),
                uVar54 <= SUB164(auVar19 * auVar35,8)));
      }
    }
  }
LAB_001040d3:
  if ((float)uVar51 * __LC34 < (float)(iVar44 + 1)) {
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00104434;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar48 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar3 = *(void **)(this + 0x10);
    uVar40 = uVar48 * 4;
    uVar51 = uVar48 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar51)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar48);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar51);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar52 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar51 = CONCAT44(0,uVar37);
          lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar38 * lVar46;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar51;
          lVar47 = SUB168(auVar8 * auVar24,8);
          puVar1 = (uint *)(lVar52 + lVar47 * 4);
          iVar44 = SUB164(auVar8 * auVar24,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_70 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar53 * lVar46;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar51;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar37 + iVar44) - SUB164(auVar9 * auVar25,8)) * lVar46;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar51;
            uVar50 = SUB164(auVar10 * auVar26,8);
            uVar49 = uVar41;
            if (uVar50 < uVar54) {
              *puVar1 = uVar38;
              puVar2 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar49 = *puVar2;
              *puVar2 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar50;
            }
            uVar54 = uVar54 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar44 + 1) * lVar46;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar51;
            lVar47 = SUB168(auVar11 * auVar27,8);
            puVar1 = (uint *)(lVar52 + lVar47 * 4);
            iVar44 = SUB164(auVar11 * auVar27,8);
            uVar41 = uVar49;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar3,false);
    }
  }
  iVar44 = *param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x18,"");
  *(int *)pauVar42[1] = iVar44;
  *(undefined4 *)(pauVar42[1] + 4) = 0;
  *pauVar42 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar38 = ((uint)*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar39 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
  uVar38 = uVar39 ^ uVar39 >> 0x10;
  if (uVar39 == uVar39 >> 0x10) {
    uVar40 = 1;
    uVar38 = 1;
  }
  else {
    uVar40 = (ulong)uVar38;
  }
  uVar53 = 0;
  lVar52 = *(long *)(this + 0x10);
  lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar51 = CONCAT44(0,uVar39);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar40 * lVar46;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar51;
  lStack_90 = SUB168(auVar12 * auVar28,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar52 + lStack_90 * 4);
  iVar44 = SUB164(auVar12 * auVar28,8);
  uVar37 = *puVar1;
  pauVar36 = pauVar42;
  while (uVar37 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar37 * lVar46;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar51;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar39 + iVar44) - SUB164(auVar13 * auVar29,8)) * lVar46;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar51;
    uVar54 = SUB164(auVar14 * auVar30,8);
    pauVar55 = pauVar36;
    if (uVar54 < uVar53) {
      *puVar1 = uVar38;
      puVar2 = (undefined8 *)(lVar47 + lStack_90 * 8);
      pauVar55 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar36;
      uVar38 = uVar37;
      uVar53 = uVar54;
    }
    uVar53 = uVar53 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar44 + 1) * lVar46;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar51;
    lStack_90 = SUB168(auVar15 * auVar31,8);
    puVar1 = (uint *)(lVar52 + lStack_90 * 4);
    iVar44 = SUB164(auVar15 * auVar31,8);
    pauVar36 = pauVar55;
    uVar37 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar47 + lStack_90 * 8) = pauVar36;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00104434:
  auVar57._8_8_ = lStack_90;
  auVar57._0_8_ = pauVar42[1] + 4;
  return auVar57;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, TTS_Linux::VoiceInfo, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, TTS_Linux::VoiceInfo> > >::operator[](String const&)
    */

undefined1 * __thiscall
HashMap<String,TTS_Linux::VoiceInfo,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TTS_Linux::VoiceInfo>>>
::operator[](HashMap<String,TTS_Linux::VoiceInfo,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TTS_Linux::VoiceInfo>>>
             *this,String *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *__s;
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
  char cVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  undefined8 uVar39;
  void *__s_00;
  undefined8 *puVar40;
  void *pvVar41;
  int iVar42;
  long lVar43;
  long lVar44;
  ulong uVar45;
  uint *puVar46;
  undefined1 *puVar47;
  long lVar48;
  undefined8 uVar49;
  uint uVar50;
  uint uVar51;
  ulong uVar52;
  long lVar53;
  long lVar54;
  uint uVar55;
  uint uVar56;
  undefined1 (*pauVar57) [16];
  undefined1 (*pauVar58) [16];
  long in_FS_OFFSET;
  undefined1 (*local_a0) [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  long local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar56 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00104da6:
    local_78 = (undefined1  [16])0x0;
    uVar45 = (ulong)uVar56;
    uVar38 = uVar45 * 4;
    uVar52 = uVar45 * 8;
    uVar39 = Memory::alloc_static(uVar38,false);
    *(undefined8 *)(this + 0x10) = uVar39;
    pvVar41 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = pvVar41;
    if (uVar56 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar41 + uVar52)) && (pvVar41 < (void *)((long)pvVar2 + uVar38))
         ) {
        uVar38 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar38 * 4) = 0;
          *(undefined8 *)((long)pvVar41 + uVar38 * 8) = 0;
          uVar38 = uVar38 + 1;
        } while (uVar45 != uVar38);
      }
      else {
        memset(pvVar2,0,uVar38);
        memset(pvVar41,0,uVar52);
      }
LAB_00104c84:
      iVar42 = *(int *)(this + 0x2c);
      if (iVar42 != 0) {
LAB_00104c90:
        uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar51 = String::hash();
        uVar38 = CONCAT44(0,uVar36);
        lVar54 = *(long *)(this + 0x10);
        uVar37 = 1;
        if (uVar51 != 0) {
          uVar37 = uVar51;
        }
        uVar55 = 0;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = (ulong)uVar37 * lVar48;
        auVar31._8_8_ = 0;
        auVar31._0_8_ = uVar38;
        lVar43 = SUB168(auVar15 * auVar31,8);
        uVar51 = *(uint *)(lVar54 + lVar43 * 4);
        uVar50 = SUB164(auVar15 * auVar31,8);
        if (uVar51 != 0) {
          do {
            if (uVar51 == uVar37) {
              cVar35 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar43 * 8) + 0x10),
                                          param_1);
              if (cVar35 != '\0') {
                lVar48 = *(long *)(*(long *)(this + 8) + (ulong)uVar50 * 8);
                if (*(long *)(lVar48 + 0x18) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)(lVar48 + 0x18),(CowData *)local_78);
                }
                if (*(long *)(lVar48 + 0x20) != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)(lVar48 + 0x20),(CowData *)(local_78 + 8));
                }
                lVar48 = *(long *)(*(long *)(this + 8) + (ulong)uVar50 * 8);
                goto LAB_00104c4d;
              }
              lVar54 = *(long *)(this + 0x10);
            }
            uVar55 = uVar55 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)(uVar50 + 1) * lVar48;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar38;
            lVar43 = SUB168(auVar16 * auVar32,8);
            uVar51 = *(uint *)(lVar54 + lVar43 * 4);
            uVar50 = SUB164(auVar16 * auVar32,8);
          } while ((uVar51 != 0) &&
                  (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar51 * lVar48, auVar33._8_8_ = 0,
                  auVar33._0_8_ = uVar38, auVar18._8_8_ = 0,
                  auVar18._0_8_ = (ulong)((uVar36 + uVar50) - SUB164(auVar17 * auVar33,8)) * lVar48,
                  auVar34._8_8_ = 0, auVar34._0_8_ = uVar38, uVar55 <= SUB164(auVar18 * auVar34,8)))
          ;
        }
        iVar42 = *(int *)(this + 0x2c);
      }
      uVar45 = (ulong)uVar56;
      goto LAB_00104730;
    }
    iVar42 = *(int *)(this + 0x2c);
    if (pvVar41 == (void *)0x0) goto LAB_00104730;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00104c90;
LAB_00104756:
    uVar56 = *(uint *)(this + 0x28);
    if (uVar56 == 0x1c) {
      lVar48 = 0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
LAB_00104c4d:
      puVar47 = (undefined1 *)(lVar48 + 0x18);
      goto LAB_00104b49;
    }
    uVar38 = (ulong)(uVar56 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar36 = *(uint *)(hash_table_size_primes + (ulong)uVar56 * 4);
    if (uVar56 + 1 < 2) {
      uVar38 = 2;
    }
    uVar56 = *(uint *)(hash_table_size_primes + uVar38 * 4);
    uVar45 = (ulong)uVar56;
    *(int *)(this + 0x28) = (int)uVar38;
    pvVar41 = *(void **)(this + 8);
    uVar38 = uVar45 * 4;
    uVar52 = uVar45 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar39 = Memory::alloc_static(uVar38,false);
    *(undefined8 *)(this + 0x10) = uVar39;
    __s_00 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = __s_00;
    if (uVar56 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar52)) && (__s_00 < (void *)((long)__s + uVar38))) {
        uVar38 = 0;
        do {
          *(undefined4 *)((long)__s + uVar38 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar38 * 8) = 0;
          uVar38 = uVar38 + 1;
        } while (uVar38 != uVar45);
      }
      else {
        memset(__s,0,uVar38);
        memset(__s_00,0,uVar52);
      }
    }
    if (uVar36 != 0) {
      uVar38 = 0;
      do {
        uVar56 = *(uint *)((long)pvVar2 + uVar38 * 4);
        if (uVar56 != 0) {
          lVar48 = *(long *)(this + 0x10);
          uVar50 = 0;
          uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar52 = CONCAT44(0,uVar37);
          lVar54 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (ulong)uVar56 * lVar54;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar52;
          lVar43 = SUB168(auVar3 * auVar19,8);
          puVar46 = (uint *)(lVar48 + lVar43 * 4);
          iVar42 = SUB164(auVar3 * auVar19,8);
          uVar51 = *puVar46;
          uVar39 = *(undefined8 *)((long)pvVar41 + uVar38 * 8);
          while (uVar51 != 0) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar51 * lVar54;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar52;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)((iVar42 + uVar37) - SUB164(auVar4 * auVar20,8)) * lVar54;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar52;
            uVar55 = SUB164(auVar5 * auVar21,8);
            uVar49 = uVar39;
            if (uVar55 < uVar50) {
              *puVar46 = uVar56;
              puVar40 = (undefined8 *)((long)__s_00 + lVar43 * 8);
              uVar49 = *puVar40;
              *puVar40 = uVar39;
              uVar56 = uVar51;
              uVar50 = uVar55;
            }
            uVar50 = uVar50 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)(iVar42 + 1) * lVar54;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar52;
            lVar43 = SUB168(auVar6 * auVar22,8);
            puVar46 = (uint *)(lVar48 + lVar43 * 4);
            iVar42 = SUB164(auVar6 * auVar22,8);
            uVar39 = uVar49;
            uVar51 = *puVar46;
          }
          *(undefined8 *)((long)__s_00 + lVar43 * 8) = uVar39;
          *puVar46 = uVar56;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar38 = uVar38 + 1;
      } while (uVar36 != uVar38);
      Memory::free_static(pvVar41,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      uVar38 = CONCAT44(0,uVar56);
      lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar37 = String::hash();
      lVar54 = *(long *)(this + 0x10);
      uVar36 = 1;
      if (uVar37 != 0) {
        uVar36 = uVar37;
      }
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar36 * lVar48;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar38;
      lVar43 = SUB168(auVar11 * auVar27,8);
      uVar37 = *(uint *)(lVar54 + lVar43 * 4);
      uVar51 = SUB164(auVar11 * auVar27,8);
      if (uVar37 == 0) {
        lVar53 = *(long *)(this + 8);
      }
      else {
        lVar53 = *(long *)(this + 8);
        uVar50 = 0;
        do {
          if (uVar37 == uVar36) {
            cVar35 = String::operator==((String *)(*(long *)(lVar53 + lVar43 * 8) + 0x10),param_1);
            if (cVar35 != '\0') {
              lVar48 = *(long *)(*(long *)(this + 8) + (ulong)uVar51 * 8);
              goto LAB_00104c4d;
            }
            lVar54 = *(long *)(this + 0x10);
            lVar53 = *(long *)(this + 8);
          }
          uVar50 = uVar50 + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(uVar51 + 1) * lVar48;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar38;
          lVar43 = SUB168(auVar12 * auVar28,8);
          uVar37 = *(uint *)(lVar54 + lVar43 * 4);
          uVar51 = SUB164(auVar12 * auVar28,8);
        } while ((uVar37 != 0) &&
                (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar37 * lVar48, auVar29._8_8_ = 0,
                auVar29._0_8_ = uVar38, auVar14._8_8_ = 0,
                auVar14._0_8_ = (ulong)((uVar51 + uVar56) - SUB164(auVar13 * auVar29,8)) * lVar48,
                auVar30._8_8_ = 0, auVar30._0_8_ = uVar38, uVar50 <= SUB164(auVar14 * auVar30,8)));
      }
      local_78 = (undefined1  [16])0x0;
      uVar56 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar53 == 0) goto LAB_00104da6;
      goto LAB_00104c84;
    }
    uVar45 = (ulong)uVar56;
    local_78 = (undefined1  [16])0x0;
    iVar42 = 0;
LAB_00104730:
    if ((float)uVar45 * __LC34 < (float)(iVar42 + 1)) goto LAB_00104756;
  }
  local_58 = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(long *)param_1 == 0) {
    local_a0 = (undefined1 (*) [16])operator_new(0x28,"");
    *(undefined8 *)local_a0[1] = 0;
    *local_a0 = (undefined1  [16])0x0;
LAB_00104e5d:
    lVar48 = 0;
    *(undefined1 (*) [16])(local_a0[1] + 8) = (undefined1  [16])0x0;
    puVar40 = *(undefined8 **)(this + 0x20);
    if (puVar40 != (undefined8 *)0x0) goto LAB_001049fb;
LAB_00104e79:
    *(undefined1 (**) [16])(this + 0x18) = local_a0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
    lVar48 = local_58;
    uVar39 = local_68._0_8_;
    uVar49 = local_68._8_8_;
    local_50 = (undefined1  [16])0x0;
    local_a0 = (undefined1 (*) [16])operator_new(0x28,"");
    *(undefined8 *)local_a0[1] = 0;
    *(undefined8 *)*local_a0 = uVar39;
    *(undefined8 *)(*local_a0 + 8) = uVar49;
    if (lVar48 == 0) goto LAB_00104e5d;
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_a0 + 1),(CowData *)&local_58);
    *(undefined1 (*) [16])(local_a0[1] + 8) = (undefined1  [16])0x0;
    LOCK();
    plVar1 = (long *)(lVar48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_58 + -0x10),false);
    }
    puVar40 = *(undefined8 **)(this + 0x20);
    lVar48 = local_78._8_8_;
    if (puVar40 == (undefined8 *)0x0) goto LAB_00104e79;
LAB_001049fb:
    *puVar40 = local_a0;
    *(undefined8 **)(*local_a0 + 8) = puVar40;
  }
  *(undefined1 (**) [16])(this + 0x20) = local_a0;
  uVar36 = String::hash();
  lVar54 = *(long *)(this + 0x10);
  uVar56 = 1;
  if (uVar36 != 0) {
    uVar56 = uVar36;
  }
  uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar38 = CONCAT44(0,uVar36);
  lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (ulong)uVar56 * lVar43;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar38;
  lVar44 = SUB168(auVar7 * auVar23,8);
  lVar53 = *(long *)(this + 8);
  puVar46 = (uint *)(lVar54 + lVar44 * 4);
  iVar42 = SUB164(auVar7 * auVar23,8);
  uVar37 = *puVar46;
  pauVar58 = local_a0;
  if (uVar37 != 0) {
    uVar51 = 0;
    pauVar57 = local_a0;
    do {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar37 * lVar43;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar38;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)((iVar42 + uVar36) - SUB164(auVar8 * auVar24,8)) * lVar43;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar38;
      uVar50 = SUB164(auVar9 * auVar25,8);
      pauVar58 = pauVar57;
      if (uVar50 < uVar51) {
        *puVar46 = uVar56;
        puVar40 = (undefined8 *)(lVar53 + lVar44 * 8);
        pauVar58 = (undefined1 (*) [16])*puVar40;
        *puVar40 = pauVar57;
        uVar51 = uVar50;
        uVar56 = uVar37;
      }
      uVar51 = uVar51 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)(iVar42 + 1) * lVar43;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar38;
      lVar44 = SUB168(auVar10 * auVar26,8);
      puVar46 = (uint *)(lVar54 + lVar44 * 4);
      iVar42 = SUB164(auVar10 * auVar26,8);
      uVar37 = *puVar46;
      pauVar57 = pauVar58;
    } while (uVar37 != 0);
  }
  *(undefined1 (**) [16])(lVar53 + lVar44 * 8) = pauVar58;
  *puVar46 = uVar56;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  puVar47 = local_a0[1] + 8;
  if (lVar48 != 0) {
    LOCK();
    plVar1 = (long *)(lVar48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_78._8_8_ + -0x10),false);
    }
  }
  if (local_78._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_78._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_78._0_8_ + -0x10),false);
    }
  }
LAB_00104b49:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar47;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TTS_Linux::_speech_event(int, int) [clone .cold] */

void TTS_Linux::_speech_event(int param_1,int param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TTS_Linux, void, int, int, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TTS_Linux,void,int,int,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TTS_Linux,void,int,int,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TTS_Linux, void, int, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TTS_Linux,void,int,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TTS_Linux,void,int,int> *this)

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



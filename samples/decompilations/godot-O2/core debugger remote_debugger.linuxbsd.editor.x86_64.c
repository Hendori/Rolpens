
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



/* RemoteDebugger::_print_handler(void*, String const&, bool, bool) */

void RemoteDebugger::_print_handler(void *param_1,String *param_2,bool param_3,bool param_4)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  CowData<char32_t> *pCVar8;
  undefined1 (*pauVar9) [16];
  int iVar10;
  int iVar11;
  long in_FS_OFFSET;
  bool bVar12;
  char *local_70;
  char *local_68;
  int local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)((long)param_1 + 0xb0) != '\0') {
    if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      Thread::caller_id();
    }
    if (*(long *)((long)param_1 + 0xb8) == *(long *)(in_FS_OFFSET + lRam00000000001001ed))
    goto LAB_00100322;
  }
  local_70 = (char *)0x0;
  plVar1 = (long *)(*(long *)param_2 + -0x10);
  if (*(long *)param_2 == 0) {
LAB_001002d0:
    iVar11 = 0;
  }
  else {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00100242;
      LOCK();
      lVar7 = *plVar1;
      bVar12 = lVar2 == lVar7;
      if (bVar12) {
        *plVar1 = lVar2 + 1;
        lVar7 = lVar2;
      }
      UNLOCK();
    } while (!bVar12);
    if (lVar7 != -1) {
      local_70 = *(char **)param_2;
    }
LAB_00100242:
    pcVar3 = local_70;
    if ((local_70 == (char *)0x0) || (iVar6 = (int)*(undefined8 *)(local_70 + -8), iVar6 == 0))
    goto LAB_001002d0;
    iVar11 = *(int *)((long)param_1 + 0x58) - *(int *)((long)param_1 + 0x68);
    iVar10 = iVar6 + -1;
    if (iVar11 < 0) {
      iVar11 = 0;
    }
    if (iVar10 < iVar11) {
      iVar11 = iVar10;
    }
    if ((iVar11 == 0) && (1 < iVar6)) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
      goto LAB_00100322;
    }
    if (iVar11 < iVar10) {
      String::substr((int)&local_58,(int)&local_70);
      pcVar4 = local_58;
      pcVar3 = local_70;
      if (local_70 == local_58) {
        if (local_70 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
          }
        }
      }
      else {
        if (local_70 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
        local_70 = local_58;
      }
    }
  }
  iVar6 = pthread_mutex_lock((pthread_mutex_t *)((long)param_1 + 0x88));
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  iVar11 = iVar11 + *(int *)((long)param_1 + 0x68);
  *(int *)((long)param_1 + 0x68) = iVar11;
  iVar6 = *(int *)((long)param_1 + 0x58);
  cVar5 = (**(code **)(**(long **)((long)param_1 + 0x38) + 0x150))();
  if (cVar5 != '\0') {
    if (iVar6 <= iVar11) {
      String::operator+=((String *)&local_70,"[...]");
    }
    local_68 = (char *)0x0;
    plVar1 = (long *)(local_70 + -0x10);
    if (local_70 != (char *)0x0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010038b;
        LOCK();
        lVar7 = *plVar1;
        bVar12 = lVar2 == lVar7;
        if (bVar12) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar12);
      if (lVar7 != -1) {
        local_68 = local_70;
      }
    }
LAB_0010038b:
    local_60 = (uint)param_4 * 2;
    if (param_3) {
      local_60 = 1;
    }
    if (*(long *)((long)param_1 + 0x40) == 0) {
      pauVar9 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])((long)param_1 + 0x40) = pauVar9;
      *(undefined4 *)pauVar9[1] = 0;
      *pauVar9 = (undefined1  [16])0x0;
    }
    pCVar8 = (CowData<char32_t> *)operator_new(0x28,DefaultAllocator::alloc);
    *(undefined8 *)pCVar8 = 0;
    *(undefined8 *)(pCVar8 + 0x20) = 0;
    *(undefined1 (*) [16])(pCVar8 + 0x10) = (undefined1  [16])0x0;
    if (local_68 != (char *)0x0) {
      CowData<char32_t>::_ref(pCVar8,(CowData *)&local_68);
    }
    *(int *)(pCVar8 + 8) = local_60;
    plVar1 = *(long **)((long)param_1 + 0x40);
    lVar2 = plVar1[1];
    *(long **)(pCVar8 + 0x20) = plVar1;
    *(undefined8 *)(pCVar8 + 0x10) = 0;
    *(long *)(pCVar8 + 0x18) = lVar2;
    if (lVar2 != 0) {
      *(CowData<char32_t> **)(lVar2 + 0x10) = pCVar8;
    }
    plVar1[1] = (long)pCVar8;
    if (*plVar1 == 0) {
      *plVar1 = (long)pCVar8;
    }
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    if (iVar6 <= iVar11) {
      local_50 = 0x23;
      local_58 = "[output overflow, print less text!]";
      String::parse_latin1((StrRange *)&local_68);
      local_60 = 1;
      if (*(long *)((long)param_1 + 0x40) == 0) {
        pauVar9 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])((long)param_1 + 0x40) = pauVar9;
        *(undefined4 *)pauVar9[1] = 0;
        *pauVar9 = (undefined1  [16])0x0;
      }
      pCVar8 = (CowData<char32_t> *)operator_new(0x28,DefaultAllocator::alloc);
      *(undefined8 *)pCVar8 = 0;
      *(undefined8 *)(pCVar8 + 0x20) = 0;
      *(undefined1 (*) [16])(pCVar8 + 0x10) = (undefined1  [16])0x0;
      if (local_68 != (char *)0x0) {
        CowData<char32_t>::_ref(pCVar8,(CowData *)&local_68);
      }
      *(int *)(pCVar8 + 8) = local_60;
      plVar1 = *(long **)((long)param_1 + 0x40);
      lVar2 = plVar1[1];
      *(undefined8 *)(pCVar8 + 0x10) = 0;
      *(long **)(pCVar8 + 0x20) = plVar1;
      *(long *)(pCVar8 + 0x18) = lVar2;
      if (lVar2 != 0) {
        *(CowData<char32_t> **)(lVar2 + 0x10) = pCVar8;
      }
      plVar1[1] = (long)pCVar8;
      if (*plVar1 == 0) {
        *plVar1 = (long)pCVar8;
      }
      *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    }
    pcVar3 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)((long)param_1 + 0x88));
  pcVar3 = local_70;
  if (local_70 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
LAB_00100322:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RemoteDebugger::_put_msg(String const&, Array const&) */

int __thiscall RemoteDebugger::_put_msg(RemoteDebugger *this,String *param_1,Array *param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  Array local_50 [8];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(local_50);
  Variant::Variant((Variant *)local_48,param_1);
  Array::push_back((Variant *)local_50);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  Variant::Variant((Variant *)local_48,*(ulong *)(in_FS_OFFSET + lRam00000000001006df));
  Array::push_back((Variant *)local_50);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_48,param_2);
  Array::push_back((Variant *)local_50);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  iVar1 = (**(code **)(**(long **)(this + 0x38) + 0x168))(*(long **)(this + 0x38),local_50);
  if (iVar1 != 0) {
    *(int *)(this + 0x50) = *(int *)(this + 0x50) + 1;
  }
  Array::~Array(local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RemoteDebugger::send_message(String const&, Array const&) */

void __thiscall RemoteDebugger::send_message(RemoteDebugger *this,String *param_1,Array *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x88));
  if (iVar2 == 0) {
    cVar1 = (**(code **)(**(long **)(this + 0x38) + 0x150))();
    if (cVar1 != '\0') {
      _put_msg(this,param_1,param_2);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x88));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar2);
}



/* RemoteDebugger::_create_overflow_error(String const&, String const&) */

String * RemoteDebugger::_create_overflow_error(String *param_1,String *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  CowData *in_RCX;
  CowData *in_RDX;
  ulong uVar4;
  
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
  lVar2 = *(long *)in_RDX;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  param_1[0x38] = (String)0x0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_1 + 0x28),in_RDX);
    lVar2 = *(long *)(param_1 + 0x30);
  }
  if (lVar2 != *(long *)in_RCX) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_1 + 0x30),in_RCX);
  }
  param_1[0x38] = (String)0x0;
  OS::get_singleton();
  uVar3 = OS::get_ticks_msec();
  *(int *)param_1 = (int)(uVar3 / 3600000);
  uVar4 = (uVar3 / 60000) / 0x3c;
  *(int *)(param_1 + 4) = (int)(uVar3 / 60000) + ((int)(uVar4 << 4) - (int)uVar4) * -4;
  uVar4 = (uVar3 / 1000) / 0x3c;
  iVar1 = (int)(uVar3 / 1000);
  *(int *)(param_1 + 8) = iVar1 + ((int)(uVar4 << 4) - (int)uVar4) * -4;
  *(int *)(param_1 + 0xc) = (int)uVar3 + iVar1 * -1000;
  return param_1;
}



/* RemoteDebugger::_send_stack_vars(List<String, DefaultAllocator>&, List<Variant,
   DefaultAllocator>&, int) */

void __thiscall
RemoteDebugger::_send_stack_vars(RemoteDebugger *this,List *param_1,List *param_2,int param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  CowData *pCVar4;
  Variant *pVVar5;
  long in_FS_OFFSET;
  Array local_88 [8];
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60 [2];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  pVVar5 = *(Variant **)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60[0] = 0;
  local_68 = 0;
  local_48 = 0xffffffffffffffff;
  local_58 = (undefined1  [16])0x0;
  if (*(long **)param_1 != (long *)0x0) {
    pCVar4 = (CowData *)**(long **)param_1;
    if (pVVar5 != (Variant *)0x0) {
      pVVar5 = *(Variant **)pVVar5;
    }
    if (pCVar4 != (CowData *)0x0) {
      do {
        if (*(long *)pCVar4 != local_68) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar4);
        }
        Variant::operator=((Variant *)local_60,pVVar5);
        local_48 = CONCAT44(local_48._4_4_,param_3);
        pcVar2 = *(code **)(*(long *)this + 8);
        DebuggerMarshalls::ScriptStackVariable::serialize((int)local_88);
        local_78 = "stack_frame_var";
        local_80 = 0;
        local_70 = 0xf;
        String::parse_latin1((StrRange *)&local_80);
        (*pcVar2)(this,(StrRange *)&local_80,local_88);
        lVar3 = local_80;
        if (local_80 != 0) {
          LOCK();
          plVar1 = (long *)(local_80 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_80 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        Array::~Array(local_88);
        pCVar4 = *(CowData **)(pCVar4 + 8);
        pVVar5 = *(Variant **)(pVVar5 + 0x18);
      } while (pCVar4 != (CowData *)0x0);
      if (Variant::needs_deinit[local_60[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar3 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RemoteDebugger::_try_capture(String const&, Array const&, bool&) */

ulong __thiscall
RemoteDebugger::_try_capture(RemoteDebugger *this,String *param_1,Array *param_2,bool *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  wchar32 wVar6;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  wVar6 = (wchar32)param_1;
  iVar4 = String::find_char(wVar6,0x3a);
  *param_3 = false;
  uVar5 = 0;
  if (-1 < iVar4) {
    String::substr((int)(String *)&local_58,wVar6);
    StringName::StringName((StringName *)&local_48,(String *)&local_58,false);
    cVar3 = EngineDebugger::has_capture((StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    uVar5 = 2;
    if (cVar3 != '\0') {
      String::substr((int)(Array *)&local_50,wVar6);
      StringName::StringName((StringName *)&local_48,(String *)&local_58,false);
      uVar5 = EngineDebugger::capture_parse
                        ((StringName *)this,(String *)&local_48,(Array *)&local_50,(bool *)param_2);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
        uVar5 = uVar5 & 0xffffffff;
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
          uVar5 = uVar5 & 0xffffffff;
        }
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
        uVar5 = uVar5 & 0xffffffff;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RemoteDebugger::_core_capture(String const&, Array const&, bool&) */

undefined8 __thiscall
RemoteDebugger::_core_capture(RemoteDebugger *this,String *param_1,Array *param_2,bool *param_3)

{
  ScriptLanguage *pSVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  Variant *pVVar6;
  undefined8 uVar7;
  int iVar8;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = true;
  cVar2 = String::operator==(param_1,"reload_scripts");
  if (cVar2 == '\0') {
    cVar2 = String::operator==(param_1,"reload_all_scripts");
    if (cVar2 == '\0') {
      cVar2 = String::operator==(param_1,"breakpoint");
      iVar8 = (int)param_2;
      if (cVar2 == '\0') {
        cVar2 = String::operator==(param_1,"set_skip_breakpoints");
        if (cVar2 == '\0') {
          cVar2 = String::operator==(param_1,"break");
          if (cVar2 == '\0') {
            *param_3 = false;
          }
          else {
            if (PTR_break_lang_0010f008 != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
              ScriptDebugger::break_lang();
            }
            ScriptDebugger::debug
                      (EngineDebugger::script_debugger,
                       SUB81(*(undefined8 *)(in_FS_OFFSET + lRam0000000000100e57),0),true);
          }
        }
        else {
          cVar2 = Array::is_empty();
          pSVar1 = EngineDebugger::script_debugger;
          if (cVar2 != '\0') {
            _err_print_error("_core_capture","core/debugger/remote_debugger.cpp",0x29e,
                             "Condition \"p_data.is_empty()\" is true. Returning: ERR_INVALID_DATA",
                             0,0);
            goto LAB_00100f2f;
          }
          pVVar6 = (Variant *)Array::operator[](iVar8);
          Variant::operator_cast_to_bool(pVVar6);
          ScriptDebugger::set_skip_breakpoints(SUB81(pSVar1,0));
        }
      }
      else {
        iVar4 = Array::size();
        if (iVar4 < 3) {
          _err_print_error("_core_capture","core/debugger/remote_debugger.cpp",0x295,
                           "Condition \"p_data.size() < 3\" is true. Returning: ERR_INVALID_DATA",0,
                           0);
LAB_00100f2f:
          uVar7 = 0x1e;
          goto LAB_00100d21;
        }
        pVVar6 = (Variant *)Array::operator[](iVar8);
        bVar3 = Variant::operator_cast_to_bool(pVVar6);
        iVar4 = (int)EngineDebugger::script_debugger;
        if (bVar3) {
          Array::operator[](iVar8);
          Variant::operator_cast_to_StringName((Variant *)&local_38);
          pVVar6 = (Variant *)Array::operator[](iVar8);
          uVar5 = Variant::operator_cast_to_int(pVVar6);
          ScriptDebugger::insert_breakpoint(iVar4,(StringName *)(ulong)uVar5);
        }
        else {
          Array::operator[](iVar8);
          Variant::operator_cast_to_StringName((Variant *)&local_38);
          pVVar6 = (Variant *)Array::operator[](iVar8);
          uVar5 = Variant::operator_cast_to_int(pVVar6);
          ScriptDebugger::remove_breakpoint(iVar4,(StringName *)(ulong)uVar5);
        }
        if ((StringName::configured != '\0') && (local_38 != 0)) {
          StringName::unref();
        }
      }
    }
    else {
      this[0x78] = (RemoteDebugger)0x1;
    }
  }
  else {
    Array::operator=((Array *)(this + 0x80),param_2);
  }
  uVar7 = 0;
LAB_00100d21:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* _FUN(void*, String const&, Array const&, bool&) */

void RemoteDebugger::RemoteDebugger(Ref<RemoteDebuggerPeer>)::
     {lambda(void*,String_const&,Array_const&,bool&)#1}::_FUN
               (void *param_1,String *param_2,Array *param_3,bool *param_4)

{
  _core_capture((RemoteDebugger *)param_1,param_2,param_3,param_4);
  return;
}



/* RemoteDebugger::_profiler_capture(String const&, Array const&, bool&) */

undefined8 __thiscall
RemoteDebugger::_profiler_capture(RemoteDebugger *this,String *param_1,Array *param_2,bool *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  Variant *this_00;
  undefined8 uVar5;
  int iVar6;
  long in_FS_OFFSET;
  Array local_50 [8];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = false;
  cVar1 = Array::is_empty();
  if (cVar1 == '\0') {
    iVar6 = (int)param_2;
    piVar4 = (int *)Array::operator[](iVar6);
    if (*piVar4 == 1) {
      StringName::StringName((StringName *)&local_48,param_1,false);
      cVar1 = EngineDebugger::has_profiler((StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (cVar1 == '\0') {
        uVar5 = 2;
        _err_print_error("_profiler_capture","core/debugger/remote_debugger.cpp",0x2ac,
                         "Condition \"!has_profiler(p_cmd)\" is true. Returning: ERR_UNAVAILABLE",0,
                         0);
        goto LAB_001010c8;
      }
      Array::Array(local_50);
      iVar3 = Array::size();
      if (iVar3 < 2) {
LAB_0010106e:
        *param_3 = true;
        this_00 = (Variant *)Array::operator[](iVar6);
        bVar2 = Variant::operator_cast_to_bool(this_00);
        StringName::StringName((StringName *)&local_48,param_1,false);
        EngineDebugger::profiler_enable
                  ((StringName *)this,SUB81((StringName *)&local_48,0),(Array *)(ulong)bVar2);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        uVar5 = 0;
      }
      else {
        piVar4 = (int *)Array::operator[](iVar6);
        if (*piVar4 == 0x1c) {
          Array::operator[](iVar6);
          Variant::operator_cast_to_Array((Variant *)&local_48);
          Array::operator=(local_50,(Array *)&local_48);
          Array::~Array((Array *)&local_48);
          goto LAB_0010106e;
        }
        uVar5 = 0x1e;
        _err_print_error("_profiler_capture","core/debugger/remote_debugger.cpp",0x2af,
                         "Condition \"p_data[1].get_type() != Variant::ARRAY\" is true. Returning: ERR_INVALID_DATA"
                         ,0,0);
      }
      Array::~Array(local_50);
      goto LAB_001010c8;
    }
    _err_print_error("_profiler_capture","core/debugger/remote_debugger.cpp",0x2ab,
                     "Condition \"p_data[0].get_type() != Variant::BOOL\" is true. Returning: ERR_INVALID_DATA"
                     ,0,0);
  }
  else {
    _err_print_error("_profiler_capture","core/debugger/remote_debugger.cpp",0x2aa,
                     "Condition \"p_data.is_empty()\" is true. Returning: ERR_INVALID_DATA",0,0);
  }
  uVar5 = 0x1e;
LAB_001010c8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* _FUN(void*, String const&, Array const&, bool&) */

void RemoteDebugger::RemoteDebugger(Ref<RemoteDebuggerPeer>)::
     {lambda(void*,String_const&,Array_const&,bool&)#2}::_FUN
               (void *param_1,String *param_2,Array *param_3,bool *param_4)

{
  _profiler_capture((RemoteDebugger *)param_1,param_2,param_3,param_4);
  return;
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



/* RemoteDebugger::_err_handler(void*, char const*, char const*, int, char const*, char const*,
   bool, ErrorHandlerType) */

void RemoteDebugger::_err_handler
               (long param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
               undefined1 param_7,int param_8)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  undefined1 local_68 [8];
  long local_60;
  long local_58;
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_8 != 2) {
    if (*(char *)(param_1 + 0xb0) != '\0') {
      if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
        Thread::caller_id();
      }
      if (*(long *)(param_1 + 0xb8) == *(long *)(in_FS_OFFSET + lRam00000000001016a6))
      goto LAB_0010166d;
    }
    local_60 = 0;
    if (0 < (int)ScriptServer::_language_count) {
      iVar4 = 0;
      do {
        plVar3 = (long *)ScriptServer::get_language(iVar4);
        if (*(code **)(*plVar3 + 0x2b0) == ScriptLanguage::debug_get_current_stack_info) {
          local_50[0] = 0;
        }
        else {
          (**(code **)(*plVar3 + 0x2b0))(&local_58,plVar3);
        }
        if (local_50[0] != local_60) {
          CowData<ScriptLanguage::StackInfo>::_unref
                    ((CowData<ScriptLanguage::StackInfo> *)&local_60);
          local_60 = local_50[0];
          local_50[0] = 0;
        }
        CowData<ScriptLanguage::StackInfo>::_unref((CowData<ScriptLanguage::StackInfo> *)local_50);
      } while (((local_60 == 0) || (*(long *)(local_60 + -8) == 0)) &&
              (iVar4 = iVar4 + 1, iVar4 < (int)ScriptServer::_language_count));
    }
    uVar1 = EngineDebugger::script_debugger;
    String::utf8((char *)&local_58,param_6);
    String::utf8((char *)&local_70,param_5);
    String::utf8((char *)&local_78,param_3);
    String::utf8((char *)&local_80,param_2);
    ScriptDebugger::send_error
              (uVar1,&local_80,&local_78,param_4,&local_70,&local_58,param_7,param_8,local_68);
    lVar2 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar3 = (long *)(local_80 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar3 = (long *)(local_78 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar3 = (long *)(local_70 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar3 = (long *)(local_58 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    CowData<ScriptLanguage::StackInfo>::_unref((CowData<ScriptLanguage::StackInfo> *)&local_60);
  }
LAB_0010166d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<ScriptLanguage::StackInfo>::_ref(CowData<ScriptLanguage::StackInfo> const&) [clone
   .part.0] */

void __thiscall
CowData<ScriptLanguage::StackInfo>::_ref(CowData<ScriptLanguage::StackInfo> *this,CowData *param_1)

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



/* List<DebuggerMarshalls::OutputError, DefaultAllocator>::push_back(DebuggerMarshalls::OutputError
   const&) [clone .isra.0] */

void __thiscall
List<DebuggerMarshalls::OutputError,DefaultAllocator>::push_back
          (List<DebuggerMarshalls::OutputError,DefaultAllocator> *this,OutputError *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  
  if (*(long *)this == 0) {
    pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar6;
    *(undefined4 *)pauVar6[1] = 0;
    *pauVar6 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined8 *)operator_new(0x68,DefaultAllocator::alloc);
  *(undefined4 *)puVar4 = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 4) = 0xffffffff;
  *(undefined4 *)(puVar4 + 1) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0xc) = 0xffffffff;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined1 (*) [16])(puVar4 + 9) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0xb) = (undefined1  [16])0x0;
  uVar2 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar4 + 7) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 5) = (undefined1  [16])0x0;
  *puVar4 = uVar2;
  puVar4[1] = uVar3;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)(param_1 + 0x10));
    lVar5 = puVar4[3];
  }
  if (*(long *)(param_1 + 0x18) != lVar5) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 3),(CowData *)(param_1 + 0x18));
  }
  *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(param_1 + 0x20);
  if (puVar4[5] != *(long *)(param_1 + 0x28)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 5),(CowData *)(param_1 + 0x28));
  }
  if (puVar4[6] != *(long *)(param_1 + 0x30)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 6),(CowData *)(param_1 + 0x30));
  }
  *(OutputError *)(puVar4 + 7) = param_1[0x38];
  if (puVar4[9] != *(long *)(param_1 + 0x48)) {
    CowData<ScriptLanguage::StackInfo>::_ref
              ((CowData<ScriptLanguage::StackInfo> *)(puVar4 + 9),(CowData *)(param_1 + 0x48));
  }
  plVar1 = *(long **)this;
  lVar5 = plVar1[1];
  puVar4[10] = 0;
  puVar4[0xc] = plVar1;
  puVar4[0xb] = lVar5;
  if (lVar5 != 0) {
    *(undefined8 **)(lVar5 + 0x50) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)puVar4;
  return;
}



/* RemoteDebugger::~RemoteDebugger() */

void __thiscall RemoteDebugger::~RemoteDebugger(RemoteDebugger *this)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  Object *pOVar5;
  char cVar6;
  long lVar7;
  void *pvVar8;
  long *plVar9;
  
  *(undefined ***)this = &PTR_poll_events_0010cc08;
  remove_print_handler((PrintHandlerList *)(this + 0xf0));
  remove_error_handler((ErrorHandlerList *)(this + 0x108));
  pvVar8 = *(void **)(this + 200);
  if (pvVar8 != (void *)0x0) {
    if (*(int *)(this + 0xec) != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe8) * 4);
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0xec) = 0;
        *(undefined1 (*) [16])(this + 0xd8) = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xd0) + lVar7) != 0) {
            pvVar8 = *(void **)((long)pvVar8 + lVar7 * 2);
            *(int *)(*(long *)(this + 0xd0) + lVar7) = 0;
            List<RemoteDebugger::Message,DefaultAllocator>::~List
                      ((List<RemoteDebugger::Message,DefaultAllocator> *)((long)pvVar8 + 0x18));
            Memory::free_static(pvVar8,false);
            pvVar8 = *(void **)(this + 200);
            *(undefined8 *)((long)pvVar8 + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while (lVar7 != (ulong)uVar3 << 2);
        *(undefined4 *)(this + 0xec) = 0;
        *(undefined1 (*) [16])(this + 0xd8) = (undefined1  [16])0x0;
        if (pvVar8 == (void *)0x0) goto LAB_00101945;
      }
    }
    Memory::free_static(pvVar8,false);
    Memory::free_static(*(void **)(this + 0xd0),false);
  }
LAB_00101945:
  Array::~Array((Array *)(this + 0x80));
  plVar9 = *(long **)(this + 0x48);
  if (plVar9 != (long *)0x0) {
    do {
      pvVar8 = (void *)*plVar9;
      if (pvVar8 == (void *)0x0) {
        if ((int)plVar9[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00101a2a;
        }
        break;
      }
      if (plVar9 == *(long **)((long)pvVar8 + 0x60)) {
        lVar7 = *(long *)((long)pvVar8 + 0x50);
        lVar4 = *(long *)((long)pvVar8 + 0x58);
        *plVar9 = lVar7;
        if (pvVar8 == (void *)plVar9[1]) {
          plVar9[1] = lVar4;
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x50) = lVar7;
          lVar7 = *(long *)((long)pvVar8 + 0x50);
        }
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x58) = lVar4;
        }
        CowData<ScriptLanguage::StackInfo>::_unref
                  ((CowData<ScriptLanguage::StackInfo> *)((long)pvVar8 + 0x48));
        if (*(long *)((long)pvVar8 + 0x30) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)((long)pvVar8 + 0x30) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar7 = *(long *)((long)pvVar8 + 0x30);
            *(undefined8 *)((long)pvVar8 + 0x30) = 0;
            Memory::free_static((void *)(lVar7 + -0x10),false);
          }
        }
        if (*(long *)((long)pvVar8 + 0x28) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)((long)pvVar8 + 0x28) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar7 = *(long *)((long)pvVar8 + 0x28);
            *(undefined8 *)((long)pvVar8 + 0x28) = 0;
            Memory::free_static((void *)(lVar7 + -0x10),false);
          }
        }
        if (*(long *)((long)pvVar8 + 0x18) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)((long)pvVar8 + 0x18) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar7 = *(long *)((long)pvVar8 + 0x18);
            *(undefined8 *)((long)pvVar8 + 0x18) = 0;
            Memory::free_static((void *)(lVar7 + -0x10),false);
          }
        }
        if (*(long *)((long)pvVar8 + 0x10) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)((long)pvVar8 + 0x10) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar7 = *(long *)((long)pvVar8 + 0x10);
            *(undefined8 *)((long)pvVar8 + 0x10) = 0;
            Memory::free_static((void *)(lVar7 + -0x10),false);
          }
        }
        Memory::free_static(pvVar8,false);
        *(int *)(plVar9 + 2) = (int)plVar9[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar9 = *(long **)(this + 0x48);
    } while ((int)plVar9[2] != 0);
    Memory::free_static(plVar9,false);
  }
LAB_00101a2a:
  plVar9 = *(long **)(this + 0x40);
  if (plVar9 != (long *)0x0) {
    do {
      plVar1 = (long *)*plVar9;
      if (plVar1 == (long *)0x0) {
        if ((int)plVar9[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00101ab7;
        }
        break;
      }
      if (plVar9 == (long *)plVar1[4]) {
        lVar7 = plVar1[2];
        lVar4 = plVar1[3];
        *plVar9 = lVar7;
        if (plVar1 == (long *)plVar9[1]) {
          plVar9[1] = lVar4;
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar7;
          lVar7 = plVar1[2];
        }
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x18) = lVar4;
        }
        if (*plVar1 != 0) {
          LOCK();
          plVar2 = (long *)(*plVar1 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            lVar7 = *plVar1;
            *plVar1 = 0;
            Memory::free_static((void *)(lVar7 + -0x10),false);
          }
        }
        Memory::free_static(plVar1,false);
        *(int *)(plVar9 + 2) = (int)plVar9[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar9 = *(long **)(this + 0x40);
    } while ((int)plVar9[2] != 0);
    Memory::free_static(plVar9,false);
  }
LAB_00101ab7:
  if (*(long *)(this + 0x38) != 0) {
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      pOVar5 = *(Object **)(this + 0x38);
      cVar6 = predelete_handler(pOVar5);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  if (*(long *)(this + 0x30) != 0) {
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      pOVar5 = *(Object **)(this + 0x30);
      cVar6 = predelete_handler(pOVar5);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  EngineDebugger::~EngineDebugger((EngineDebugger *)this);
  return;
}



/* RemoteDebugger::~RemoteDebugger() */

void __thiscall RemoteDebugger::~RemoteDebugger(RemoteDebugger *this)

{
  ~RemoteDebugger(this);
  operator_delete(this,0x120);
  return;
}



/* RemoteDebugger::RemoteDebugger(Ref<RemoteDebuggerPeer>) */

void __thiscall RemoteDebugger::RemoteDebugger(RemoteDebugger *this,long *param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  StringName *pSVar4;
  long lVar5;
  RefCounted *this_00;
  Object *pOVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  ulong uStack_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR_poll_events_0010cc08;
  *(undefined8 *)(this + 0x70) = 0;
  this[0x78] = (RemoteDebugger)0x0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  Array::Array((Array *)(this + 0x80));
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined1 (*) [16])(this + 0x98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x88) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0x98) = 1;
  *(undefined1 (*) [16])(this + 200) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xd8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xf8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x110) = (undefined1  [16])0x0;
  pOVar6 = (Object *)*param_2;
  pOVar7 = *(Object **)(this + 0x38);
  this[0xb0] = (RemoteDebugger)0x0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xe8) = 2;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  if (pOVar6 != pOVar7) {
    *(Object **)(this + 0x38) = pOVar6;
    if ((pOVar6 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)(this + 0x38) = 0;
    }
    if (((pOVar7 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
       (cVar2 = predelete_handler(pOVar7), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_58,"network/limits/debugger/max_chars_per_second",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  iVar3 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(this + 0x58) = iVar3;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_58,"network/limits/debugger/max_errors_per_second",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  iVar3 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(this + 0x54) = iVar3;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_58,"network/limits/debugger/max_warnings_per_second",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  iVar3 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(this + 0x5c) = iVar3;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  pSVar4 = (StringName *)Engine::get_singleton();
  StringName::StringName((StringName *)&local_58,"Performance",false);
  lVar5 = Engine::get_singleton_object(pSVar4);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  if (lVar5 == 0) goto LAB_0010219e;
  this_00 = (RefCounted *)operator_new(0x1e8,"");
  RefCounted::RefCounted(this_00);
  *(undefined8 *)(this_00 + 0x180) = 0;
  *(code **)this_00 = RefCounted::init_ref;
  StringName::StringName((StringName *)(this_00 + 0x188),"_toggle",false);
  this_00[400] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x198) = 0;
  StringName::StringName((StringName *)(this_00 + 0x1a0),"_add_frame",false);
  this_00[0x1a8] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1b0) = 0;
  StringName::StringName((StringName *)(this_00 + 0x1b8),"_tick",false);
  *(long *)(this_00 + 0x1d0) = lVar5;
  this_00[0x1c0] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1c8) = 0;
  *(undefined ***)this_00 = &PTR__initialize_classv_0010ca90;
  *(undefined4 *)(this_00 + 0x1d8) = 0;
  *(undefined8 *)(this_00 + 0x1e0) = 0;
  postinitialize_handler((Object *)this_00);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    pOVar6 = *(Object **)(this + 0x30);
    if (pOVar6 != (Object *)0x0) {
      *(undefined8 *)(this + 0x30) = 0;
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        this_00 = (RefCounted *)0x0;
        cVar2 = predelete_handler(pOVar6);
        if (cVar2 != '\0') goto LAB_001023a3;
      }
      goto LAB_00102102;
    }
  }
  else {
    pOVar6 = *(Object **)(this + 0x30);
    pOVar7 = pOVar6;
    if (this_00 != (RefCounted *)pOVar6) {
      *(RefCounted **)(this + 0x30) = this_00;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0x30) = 0;
      }
      pOVar7 = (Object *)this_00;
      if (((pOVar6 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(pOVar6), cVar2 != '\0')) {
LAB_001023a3:
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
        pOVar7 = (Object *)this_00;
        if (this_00 == (RefCounted *)0x0) goto LAB_00102102;
      }
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar7), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
LAB_00102102:
    pOVar6 = *(Object **)(this + 0x30);
  }
  local_60 = 0;
  local_58 = "performance";
  local_50 = 0xb;
  String::parse_latin1((StrRange *)&local_60);
  EngineProfiler::bind((String *)pOVar6);
  lVar5 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  Array::Array((Array *)&local_58);
  StringName::StringName((StringName *)&local_60,"performance",false);
  EngineDebugger::profiler_enable((StringName *)this,SUB81((StrRange *)&local_60,0),(Array *)0x1);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Array::~Array((Array *)&local_58);
LAB_0010219e:
  StringName::StringName((StringName *)&local_58,"core",false);
  EngineDebugger::register_message_capture
            ((StringName *)&local_58,
             RemoteDebugger(Ref<RemoteDebuggerPeer>)::
             {lambda(void*,String_const&,Array_const&,bool&)#1}::_FUN,this);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_58,"profiler",false);
  EngineDebugger::register_message_capture
            ((StringName *)&local_58,
             RemoteDebugger(Ref<RemoteDebuggerPeer>)::
             {lambda(void*,String_const&,Array_const&,bool&)#2}::_FUN,this);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  *(RemoteDebugger **)(this + 0xf8) = this;
  *(code **)(this + 0xf0) = _print_handler;
  add_print_handler((PrintHandlerList *)(this + 0xf0));
  *(RemoteDebugger **)(this + 0x110) = this;
  *(code **)(this + 0x108) = _err_handler;
  add_error_handler((ErrorHandlerList *)(this + 0x108));
  local_58 = (char *)0x0;
  local_60 = 1;
  HashMap<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>>>>
  ::insert(&uStack_68,(List *)(this + 0xc0),SUB81(&local_60,0));
  List<RemoteDebugger::Message,DefaultAllocator>::~List
            ((List<RemoteDebugger::Message,DefaultAllocator> *)&local_58);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RemoteDebugger::_poll_messages() */

void __thiscall RemoteDebugger::_poll_messages(RemoteDebugger *this)

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
  char cVar10;
  int iVar11;
  int *piVar12;
  Variant *this_00;
  ulong uVar13;
  long *plVar14;
  CowData<char32_t> *this_01;
  undefined1 (*pauVar15) [16];
  int iVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  long in_FS_OFFSET;
  Array local_70 [8];
  ulong local_68;
  long local_60;
  long local_58;
  Array local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar11 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x88));
  if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar11);
  }
  (**(code **)(**(long **)(this + 0x38) + 0x180))();
  do {
    cVar10 = (**(code **)(**(long **)(this + 0x38) + 0x160))();
    if (cVar10 == '\0') {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x88));
      return;
    }
    (**(code **)(**(long **)(this + 0x38) + 0x170))(local_70);
    iVar11 = Array::size();
    if (iVar11 == 3) {
      iVar11 = (int)local_70;
      piVar12 = (int *)Array::operator[](iVar11);
      if (*piVar12 == 4) {
        piVar12 = (int *)Array::operator[](iVar11);
        if (*piVar12 == 2) {
          piVar12 = (int *)Array::operator[](iVar11);
          if (*piVar12 == 0x1c) {
            this_00 = (Variant *)Array::operator[](iVar11);
            local_68 = Variant::operator_cast_to_unsigned_long(this_00);
            if ((*(long *)(this + 200) != 0) && (*(int *)(this + 0xec) != 0)) {
              uVar20 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                           (ulong)*(uint *)(this + 0xe8) * 4));
              lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xe8) * 8);
              uVar13 = local_68 * 0x3ffff - 1;
              uVar13 = (uVar13 ^ uVar13 >> 0x1f) * 0x15;
              uVar13 = (uVar13 ^ uVar13 >> 0xb) * 0x41;
              uVar13 = uVar13 >> 0x16 ^ uVar13;
              uVar18 = uVar13 & 0xffffffff;
              if ((int)uVar13 == 0) {
                uVar18 = 1;
              }
              auVar2._8_8_ = 0;
              auVar2._0_8_ = uVar18 * lVar1;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = uVar20;
              lVar17 = SUB168(auVar2 * auVar6,8);
              uVar19 = *(uint *)(*(long *)(this + 0xd0) + lVar17 * 4);
              iVar16 = SUB164(auVar2 * auVar6,8);
              if (uVar19 != 0) {
                uVar21 = 0;
                while (((uint)uVar18 != uVar19 ||
                       (local_68 != *(ulong *)(*(long *)(*(long *)(this + 200) + lVar17 * 8) + 0x10)
                       ))) {
                  uVar21 = uVar21 + 1;
                  auVar3._8_8_ = 0;
                  auVar3._0_8_ = (ulong)(iVar16 + 1) * lVar1;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = uVar20;
                  lVar17 = SUB168(auVar3 * auVar7,8);
                  uVar19 = *(uint *)(*(long *)(this + 0xd0) + lVar17 * 4);
                  iVar16 = SUB164(auVar3 * auVar7,8);
                  if ((uVar19 == 0) ||
                     (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar19 * lVar1, auVar8._8_8_ = 0,
                     auVar8._0_8_ = uVar20, auVar5._8_8_ = 0,
                     auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                      (ulong)*(uint *)(this + 0xe8) * 4) + iVar16) -
                                           SUB164(auVar4 * auVar8,8)) * lVar1, auVar9._8_8_ = 0,
                     auVar9._0_8_ = uVar20, SUB164(auVar5 * auVar9,8) < uVar21)) goto LAB_001027a0;
                }
                local_58 = 0;
                Array::Array(local_50);
                Array::operator[](iVar11);
                Variant::operator_cast_to_String((Variant *)&local_60);
                lVar17 = local_58;
                lVar1 = local_60;
                if (local_58 == local_60) {
                  if (local_58 != 0) {
                    LOCK();
                    plVar14 = (long *)(local_58 + -0x10);
                    *plVar14 = *plVar14 + -1;
                    UNLOCK();
                    if (*plVar14 == 0) {
                      local_60 = 0;
                      Memory::free_static((void *)(lVar1 + -0x10),false);
                    }
                  }
                }
                else {
                  if (local_58 != 0) {
                    LOCK();
                    plVar14 = (long *)(local_58 + -0x10);
                    *plVar14 = *plVar14 + -1;
                    UNLOCK();
                    if (*plVar14 == 0) {
                      local_58 = 0;
                      Memory::free_static((void *)(lVar17 + -0x10),false);
                    }
                  }
                  local_58 = local_60;
                }
                Array::operator[](iVar11);
                Variant::operator_cast_to_Array((Variant *)&local_60);
                Array::operator=(local_50,(Array *)&local_60);
                Array::~Array((Array *)&local_60);
                plVar14 = (long *)HashMap<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>>>>
                                  ::operator[]((HashMap<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>>>>
                                                *)(this + 0xc0),&local_68);
                if (*plVar14 == 0) {
                  pauVar15 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
                  *plVar14 = (long)pauVar15;
                  *(undefined4 *)pauVar15[1] = 0;
                  *pauVar15 = (undefined1  [16])0x0;
                }
                this_01 = (CowData<char32_t> *)operator_new(0x28,DefaultAllocator::alloc);
                *(undefined8 *)this_01 = 0;
                Array::Array((Array *)(this_01 + 8));
                *(undefined8 *)(this_01 + 0x20) = 0;
                *(undefined1 (*) [16])(this_01 + 0x10) = (undefined1  [16])0x0;
                if (*(long *)this_01 != local_58) {
                  CowData<char32_t>::_ref(this_01,(CowData *)&local_58);
                }
                Array::operator=((Array *)(this_01 + 8),local_50);
                plVar14 = (long *)*plVar14;
                lVar1 = plVar14[1];
                *(undefined8 *)(this_01 + 0x10) = 0;
                *(long **)(this_01 + 0x20) = plVar14;
                *(long *)(this_01 + 0x18) = lVar1;
                if (lVar1 != 0) {
                  *(CowData<char32_t> **)(lVar1 + 0x10) = this_01;
                }
                plVar14[1] = (long)this_01;
                if (*plVar14 == 0) {
                  *plVar14 = (long)this_01;
                }
                *(int *)(plVar14 + 2) = (int)plVar14[2] + 1;
                Array::~Array(local_50);
                lVar1 = local_58;
                if (local_58 != 0) {
                  LOCK();
                  plVar14 = (long *)(local_58 + -0x10);
                  *plVar14 = *plVar14 + -1;
                  UNLOCK();
                  if (*plVar14 == 0) {
                    local_58 = 0;
                    Memory::free_static((void *)(lVar1 + -0x10),false);
                  }
                }
              }
            }
          }
          else {
            _err_print_error("_poll_messages","core/debugger/remote_debugger.cpp",0x16b,
                             "Condition \"cmd[2].get_type() != Variant::ARRAY\" is true. Continuing."
                             ,0,0);
          }
        }
        else {
          _err_print_error("_poll_messages","core/debugger/remote_debugger.cpp",0x16a,
                           "Condition \"cmd[1].get_type() != Variant::INT\" is true. Continuing.",0,
                           0);
        }
      }
      else {
        _err_print_error("_poll_messages","core/debugger/remote_debugger.cpp",0x169,
                         "Condition \"cmd[0].get_type() != Variant::STRING\" is true. Continuing.",0
                         ,0);
      }
    }
    else {
      _err_print_error("_poll_messages","core/debugger/remote_debugger.cpp",0x168,
                       "Condition \"cmd.size() != 3\" is true. Continuing.",0,0);
    }
LAB_001027a0:
    Array::~Array(local_70);
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x00102aa9) */
/* RemoteDebugger::_has_messages() */

undefined8 __thiscall RemoteDebugger::_has_messages(RemoteDebugger *this)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  uint uVar19;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar12 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x88));
  if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar12);
  }
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  uVar2 = *(ulong *)(in_FS_OFFSET + lRam0000000000102997);
  if ((*(long *)(this + 200) != 0) && (*(int *)(this + 0xec) != 0)) {
    uVar18 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe8) * 4));
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xe8) * 8);
    uVar13 = uVar2 * 0x3ffff - 1;
    uVar13 = (uVar13 ^ uVar13 >> 0x1f) * 0x15;
    uVar13 = (uVar13 ^ uVar13 >> 0xb) * 0x41;
    uVar13 = uVar13 >> 0x16 ^ uVar13;
    uVar16 = uVar13 & 0xffffffff;
    if ((int)uVar13 == 0) {
      uVar16 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar16 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar18;
    lVar15 = SUB168(auVar4 * auVar8,8);
    uVar19 = *(uint *)(*(long *)(this + 0xd0) + lVar15 * 4);
    uVar13 = (ulong)uVar19;
    iVar12 = SUB164(auVar4 * auVar8,8);
    if (uVar19 != 0) {
      uVar19 = 0;
      while (((int)uVar16 != (int)uVar13 ||
             (uVar2 != *(ulong *)(*(long *)(*(long *)(this + 200) + lVar15 * 8) + 0x10)))) {
        uVar19 = uVar19 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(iVar12 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar18;
        lVar15 = SUB168(auVar5 * auVar9,8);
        uVar1 = *(uint *)(*(long *)(this + 0xd0) + lVar15 * 4);
        uVar13 = (ulong)uVar1;
        iVar12 = SUB164(auVar5 * auVar9,8);
        if ((uVar1 == 0) ||
           (auVar6._8_8_ = 0, auVar6._0_8_ = uVar13 * lVar3, auVar10._8_8_ = 0,
           auVar10._0_8_ = uVar18, auVar7._8_8_ = 0,
           auVar7._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                            (ulong)*(uint *)(this + 0xe8) * 4) + iVar12) -
                                 SUB164(auVar6 * auVar10,8)) * lVar3, auVar11._8_8_ = 0,
           auVar11._0_8_ = uVar18, SUB164(auVar7 * auVar11,8) < uVar19)) goto LAB_00102ae8;
      }
      local_48 = uVar2;
      plVar14 = (long *)HashMap<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>>>>
                        ::operator[]((HashMap<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>>>>
                                      *)(this + 0xc0),&local_48);
      if (*plVar14 != 0) {
        uVar17 = CONCAT71((int7)(uVar16 >> 8),*(int *)(*plVar14 + 0x10) != 0);
        goto LAB_00102aea;
      }
    }
  }
LAB_00102ae8:
  uVar17 = 0;
LAB_00102aea:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x88));
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar17;
}



/* WARNING: Removing unreachable block (ram,0x00102cb1) */
/* RemoteDebugger::_get_message() */

void RemoteDebugger::_get_message(void)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  ulong uVar15;
  long *plVar16;
  Variant *pVVar17;
  long lVar18;
  char *pcVar19;
  long lVar20;
  undefined8 uVar21;
  ulong uVar22;
  long in_RSI;
  String *pSVar23;
  undefined8 *puVar24;
  Array *in_RDI;
  ulong uVar25;
  uint uVar26;
  long in_FS_OFFSET;
  long local_60;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar14 = pthread_mutex_lock((pthread_mutex_t *)(in_RSI + 0x88));
  if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar14);
  }
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  lVar18 = *(long *)(in_FS_OFFSET + lRam0000000000102b95);
  if ((*(long *)(in_RSI + 200) != 0) && (*(int *)(in_RSI + 0xec) != 0)) {
    uVar25 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0xe8) * 4));
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0xe8) * 8);
    uVar15 = lVar18 * 0x3ffff - 1;
    uVar15 = (uVar15 ^ uVar15 >> 0x1f) * 0x15;
    uVar15 = (uVar15 ^ uVar15 >> 0xb) * 0x41;
    uVar15 = uVar15 >> 0x16 ^ uVar15;
    uVar22 = uVar15 & 0xffffffff;
    if ((int)uVar15 == 0) {
      uVar22 = 1;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar22 * lVar3;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar25;
    lVar20 = SUB168(auVar6 * auVar10,8);
    uVar26 = *(uint *)(*(long *)(in_RSI + 0xd0) + lVar20 * 4);
    uVar15 = (ulong)uVar26;
    iVar14 = SUB164(auVar6 * auVar10,8);
    if (uVar26 != 0) {
      uVar26 = 0;
      do {
        if (((int)uVar15 == (int)uVar22) &&
           (lVar18 == *(long *)(*(long *)(*(long *)(in_RSI + 200) + lVar20 * 8) + 0x10))) {
          local_60 = lVar18;
          plVar16 = (long *)HashMap<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>>>>
                            ::operator[]((HashMap<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>>>>
                                          *)(in_RSI + 0xc0),(ulong *)&local_60);
          if ((*plVar16 == 0) || (*(int *)(*plVar16 + 0x10) == 0)) {
            uVar21 = 0x183;
            pcVar19 = "Condition \"message_list.is_empty()\" is true. Returning: Array()";
            goto LAB_00102e8a;
          }
          Array::Array((Array *)&local_60);
          iVar14 = (int)(Array *)&local_60;
          Array::resize(iVar14);
          pSVar23 = (String *)*plVar16;
          if (pSVar23 != (String *)0x0) {
            pSVar23 = *(String **)pSVar23;
          }
          Variant::Variant((Variant *)local_58,pSVar23);
          pVVar17 = (Variant *)Array::operator[](iVar14);
          if (pVVar17 == (Variant *)local_58) {
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          else {
            if (Variant::needs_deinit[*(int *)pVVar17] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar17 = 0;
            *(int *)pVVar17 = local_58[0];
            *(undefined8 *)(pVVar17 + 8) = local_50;
            *(undefined8 *)(pVVar17 + 0x10) = uStack_48;
          }
          puVar24 = (undefined8 *)*plVar16;
          if (puVar24 != (undefined8 *)0x0) {
            puVar24 = (undefined8 *)*puVar24;
          }
          Variant::Variant((Variant *)local_58,(Array *)(puVar24 + 1));
          pVVar17 = (Variant *)Array::operator[](iVar14);
          if (pVVar17 == (Variant *)local_58) {
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          else {
            if (Variant::needs_deinit[*(int *)pVVar17] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar17 = 0;
            *(int *)pVVar17 = local_58[0];
            *(undefined8 *)(pVVar17 + 8) = local_50;
            *(undefined8 *)(pVVar17 + 0x10) = uStack_48;
          }
          plVar4 = (long *)*plVar16;
          if ((plVar4 != (long *)0x0) && (plVar5 = (long *)*plVar4, plVar5 != (long *)0x0)) {
            if (plVar4 == (long *)plVar5[4]) {
              lVar18 = plVar5[2];
              lVar3 = plVar5[3];
              *plVar4 = lVar18;
              if (plVar5 == (long *)plVar4[1]) {
                plVar4[1] = lVar3;
              }
              if (lVar3 != 0) {
                *(long *)(lVar3 + 0x10) = lVar18;
                lVar18 = plVar5[2];
              }
              if (lVar18 != 0) {
                *(long *)(lVar18 + 0x18) = lVar3;
              }
              Array::~Array((Array *)(plVar5 + 1));
              if (*plVar5 != 0) {
                LOCK();
                plVar1 = (long *)(*plVar5 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar18 = *plVar5;
                  *plVar5 = 0;
                  Memory::free_static((void *)(lVar18 + -0x10),false);
                }
              }
              Memory::free_static(plVar5,false);
              *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
            }
            else {
              _err_print_error("erase","./core/templates/list.h",0xe7,
                               "Condition \"p_I->data != this\" is true. Returning: false",0,0);
            }
            if (*(int *)(*plVar16 + 0x10) == 0) {
              Memory::free_static((void *)*plVar16,false);
              *plVar16 = 0;
            }
          }
          Array::Array(in_RDI,(Array *)&local_60);
          Array::~Array((Array *)&local_60);
          goto LAB_00102ea5;
        }
        uVar26 = uVar26 + 1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (ulong)(iVar14 + 1) * lVar3;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar25;
        lVar20 = SUB168(auVar7 * auVar11,8);
        uVar2 = *(uint *)(*(long *)(in_RSI + 0xd0) + lVar20 * 4);
        uVar15 = (ulong)uVar2;
        iVar14 = SUB164(auVar7 * auVar11,8);
      } while ((uVar2 != 0) &&
              (auVar8._8_8_ = 0, auVar8._0_8_ = uVar15 * lVar3, auVar12._8_8_ = 0,
              auVar12._0_8_ = uVar25, auVar9._8_8_ = 0,
              auVar9._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(in_RSI + 0xe8) * 4) + iVar14) -
                                    SUB164(auVar8 * auVar12,8)) * lVar3, auVar13._8_8_ = 0,
              auVar13._0_8_ = uVar25, uVar26 <= SUB164(auVar9 * auVar13,8)));
    }
  }
  uVar21 = 0x181;
  pcVar19 = "Condition \"!messages.has(Thread::get_caller_id())\" is true. Returning: Array()";
LAB_00102e8a:
  _err_print_error("_get_message","core/debugger/remote_debugger.cpp",uVar21,pcVar19,0,0);
  Array::Array(in_RDI);
LAB_00102ea5:
  pthread_mutex_unlock((pthread_mutex_t *)(in_RSI + 0x88));
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* RemoteDebugger::flush_output() */

void __thiscall RemoteDebugger::flush_output(RemoteDebugger *this)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  char *pcVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  char *local_b8;
  long local_b0;
  char *local_a8;
  undefined8 uStack_a0;
  long local_98;
  long local_90;
  undefined4 local_88;
  long local_80;
  long local_78;
  undefined1 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x88));
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar8);
  }
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  uVar3 = *(undefined8 *)(in_FS_OFFSET + lRam000000000010310d);
  this[0xb0] = (RemoteDebugger)0x1;
  *(undefined8 *)(this + 0xb8) = uVar3;
  cVar7 = (**(code **)(**(long **)(this + 0x38) + 0x150))();
  if (cVar7 == '\0') goto LAB_001034aa;
  if (0 < *(int *)(this + 0x50)) {
    local_d8 = 0;
    uStack_a0 = 0x80;
    local_a8 = 
    " messages were dropped. Profiling might misbheave, try raising \'network/limits/debugger/max_queued_messages\' in project setting."
    ;
    String::parse_latin1((StrRange *)&local_d8);
    String::num_int64((long)&local_e8,*(int *)(this + 0x50),true);
    operator+((char *)&local_e0,(String *)"Too many messages! ");
    String::operator+((String *)&local_c8,(String *)&local_e0);
    local_a8 = "TOO_MANY_MESSAGES";
    local_b8 = (char *)0x0;
    uStack_a0 = 0x11;
    String::parse_latin1((StrRange *)&local_b8);
    _create_overflow_error((String *)&local_a8,(String *)this);
    pcVar6 = local_b8;
    if (local_b8 != (char *)0x0) {
      LOCK();
      plVar10 = (long *)((long)local_b8 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_b8 = (char *)0x0;
        Memory::free_static((void *)((long)pcVar6 + -0x10),false);
      }
    }
    lVar9 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar10 = (long *)(local_c8 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_e0;
    if (local_e0 != 0) {
      LOCK();
      plVar10 = (long *)(local_e0 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_e0 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_e8;
    if (local_e8 != 0) {
      LOCK();
      plVar10 = (long *)(local_e8 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_e8 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_d8;
    if (local_d8 != 0) {
      LOCK();
      plVar10 = (long *)(local_d8 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    DebuggerMarshalls::OutputError::serialize();
    local_b8 = "error";
    local_c8 = 0;
    local_b0 = 5;
    String::parse_latin1((StrRange *)&local_c8);
    iVar8 = _put_msg(this,(String *)&local_c8,(Array *)&local_d8);
    lVar9 = local_c8;
    if (local_c8 == 0) {
LAB_00103675:
      Array::~Array((Array *)&local_d8);
    }
    else {
      LOCK();
      plVar10 = (long *)(local_c8 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 != 0) goto LAB_00103675;
      local_c8 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
      Array::~Array((Array *)&local_d8);
    }
    if (iVar8 == 0) {
      *(undefined4 *)(this + 0x50) = 0;
    }
    CowData<ScriptLanguage::StackInfo>::_unref((CowData<ScriptLanguage::StackInfo> *)&local_60);
    lVar9 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar10 = (long *)(local_78 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar10 = (long *)(local_80 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar10 = (long *)(local_90 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar10 = (long *)(local_98 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
  }
  puVar4 = *(undefined8 **)(this + 0x40);
  if ((puVar4 != (undefined8 *)0x0) && (*(int *)(puVar4 + 2) != 0)) {
    plVar10 = (long *)*puVar4;
    local_d0 = 0;
    local_c0 = 0;
    local_b0 = 0;
    if (plVar10 != (long *)0x0) {
      do {
        while ((int)plVar10[1] != 1) {
          if ((int)plVar10[1] == 2) {
            if (local_d0 != 0) {
              local_e0 = 0;
              local_a8 = "\n";
              uStack_a0 = 1;
              String::parse_latin1((StrRange *)&local_e0);
              String::join((Vector *)&local_a8);
              Vector<String>::push_back((Vector<String> *)&local_c8);
              pcVar6 = local_a8;
              if (local_a8 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(local_a8 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_a8 = (char *)0x0;
                  Memory::free_static(pcVar6 + -0x10,false);
                }
              }
              lVar9 = local_e0;
              if (local_e0 != 0) {
                LOCK();
                plVar1 = (long *)(local_e0 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_e0 = 0;
                  Memory::free_static((void *)(lVar9 + -0x10),false);
                }
              }
              Vector<int>::push_back((Vector<int> *)&local_b8,2);
              if ((local_d0 != 0) && (*(long *)(local_d0 + -8) != 0)) {
                CowData<String>::_unref((CowData<String> *)&local_d0);
              }
            }
            local_a8 = (char *)0x0;
            plVar1 = (long *)(*plVar10 + -0x10);
            if (*plVar10 == 0) {
              Vector<String>::push_back((Vector<String> *)&local_c8,&local_a8);
            }
            else {
              do {
                lVar9 = *plVar1;
                if (lVar9 == 0) goto LAB_00103cda;
                LOCK();
                lVar12 = *plVar1;
                bVar13 = lVar9 == lVar12;
                if (bVar13) {
                  *plVar1 = lVar9 + 1;
                  lVar12 = lVar9;
                }
                UNLOCK();
              } while (!bVar13);
              if (lVar12 != -1) {
                local_a8 = (char *)*plVar10;
              }
LAB_00103cda:
              pcVar6 = local_a8;
              Vector<String>::push_back((Vector<String> *)&local_c8);
              if (pcVar6 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(pcVar6 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static(local_a8 + -0x10,false);
                }
              }
            }
            Vector<int>::push_back((Vector<int> *)&local_b8,2);
          }
          else {
            local_a8 = (char *)0x0;
            plVar1 = (long *)(*plVar10 + -0x10);
            if (*plVar10 == 0) {
              Vector<String>::push_back((Vector<String> *)&local_d8,&local_a8);
            }
            else {
              do {
                lVar9 = *plVar1;
                if (lVar9 == 0) goto LAB_001037bd;
                LOCK();
                lVar12 = *plVar1;
                bVar13 = lVar9 == lVar12;
                if (bVar13) {
                  *plVar1 = lVar9 + 1;
                  lVar12 = lVar9;
                }
                UNLOCK();
              } while (!bVar13);
              if (lVar12 != -1) {
                local_a8 = (char *)*plVar10;
              }
LAB_001037bd:
              pcVar6 = local_a8;
              Vector<String>::push_back((Vector<String> *)&local_d8);
              if (pcVar6 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(pcVar6 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static(local_a8 + -0x10,false);
                }
              }
            }
          }
          plVar10 = (long *)plVar10[2];
          if (plVar10 == (long *)0x0) goto LAB_0010393b;
        }
        if (local_d0 != 0) {
          local_e0 = 0;
          local_a8 = "\n";
          uStack_a0 = 1;
          String::parse_latin1((StrRange *)&local_e0);
          String::join((Vector *)&local_a8);
          Vector<String>::push_back((Vector<String> *)&local_c8);
          pcVar6 = local_a8;
          if (local_a8 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_a8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_a8 = (char *)0x0;
              Memory::free_static(pcVar6 + -0x10,false);
            }
          }
          lVar9 = local_e0;
          if (local_e0 != 0) {
            LOCK();
            plVar1 = (long *)(local_e0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_e0 = 0;
              Memory::free_static((void *)(lVar9 + -0x10),false);
            }
          }
          Vector<int>::push_back((Vector<int> *)&local_b8,0);
          if ((local_d0 != 0) && (*(long *)(local_d0 + -8) != 0)) {
            CowData<String>::_unref((CowData<String> *)&local_d0);
          }
        }
        local_a8 = (char *)0x0;
        plVar1 = (long *)(*plVar10 + -0x10);
        if (*plVar10 == 0) {
          Vector<String>::push_back((Vector<String> *)&local_c8,&local_a8);
        }
        else {
          do {
            lVar9 = *plVar1;
            if (lVar9 == 0) goto LAB_001038ef;
            LOCK();
            lVar12 = *plVar1;
            bVar13 = lVar9 == lVar12;
            if (bVar13) {
              *plVar1 = lVar9 + 1;
              lVar12 = lVar9;
            }
            UNLOCK();
          } while (!bVar13);
          if (lVar12 != -1) {
            local_a8 = (char *)*plVar10;
          }
LAB_001038ef:
          pcVar6 = local_a8;
          Vector<String>::push_back((Vector<String> *)&local_c8);
          if (pcVar6 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(pcVar6 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static(local_a8 + -0x10,false);
            }
          }
        }
        Vector<int>::push_back((Vector<int> *)&local_b8,1);
        plVar10 = (long *)plVar10[2];
      } while (plVar10 != (long *)0x0);
LAB_0010393b:
      if (local_d0 != 0) {
        local_e0 = 0;
        local_a8 = "\n";
        uStack_a0 = 1;
        String::parse_latin1((StrRange *)&local_e0);
        String::join((Vector *)&local_a8);
        Vector<String>::push_back((Vector<String> *)&local_c8);
        pcVar6 = local_a8;
        if (local_a8 != (char *)0x0) {
          LOCK();
          plVar10 = (long *)(local_a8 + -0x10);
          *plVar10 = *plVar10 + -1;
          UNLOCK();
          if (*plVar10 == 0) {
            local_a8 = (char *)0x0;
            Memory::free_static(pcVar6 + -0x10,false);
          }
        }
        lVar9 = local_e0;
        if (local_e0 != 0) {
          LOCK();
          plVar10 = (long *)(local_e0 + -0x10);
          *plVar10 = *plVar10 + -1;
          UNLOCK();
          if (*plVar10 == 0) {
            local_e0 = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
        Vector<int>::push_back((Vector<int> *)&local_b8,0);
      }
    }
    Array::Array((Array *)&local_e8);
    Variant::Variant((Variant *)local_58,(Vector<String> *)&local_c8);
    Array::push_back((Variant *)&local_e8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,(Vector<int> *)&local_b8);
    Array::push_back((Variant *)&local_e8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_e0 = 0;
    local_a8 = "output";
    uStack_a0 = 6;
    String::parse_latin1((StrRange *)&local_e0);
    _put_msg(this,(String *)&local_e0,(Array *)&local_e8);
    lVar9 = local_e0;
    if (local_e0 != 0) {
      LOCK();
      plVar10 = (long *)(local_e0 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_e0 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    plVar10 = *(long **)(this + 0x40);
    if (plVar10 != (long *)0x0) {
      do {
        plVar1 = (long *)*plVar10;
        if (plVar1 == (long *)0x0) goto LAB_00103b77;
        if (plVar10 == (long *)plVar1[4]) {
          lVar9 = plVar1[2];
          lVar12 = plVar1[3];
          *plVar10 = lVar9;
          if (plVar1 == (long *)plVar10[1]) {
            plVar10[1] = lVar12;
          }
          if (lVar12 != 0) {
            *(long *)(lVar12 + 0x10) = lVar9;
            lVar9 = plVar1[2];
          }
          if (lVar9 != 0) {
            *(long *)(lVar9 + 0x18) = lVar12;
          }
          if (*plVar1 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar1 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar9 = *plVar1;
              *plVar1 = 0;
              Memory::free_static((void *)(lVar9 + -0x10),false);
            }
          }
          Memory::free_static(plVar1,false);
          *(int *)(plVar10 + 2) = (int)plVar10[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar10 = *(long **)(this + 0x40);
      } while ((int)plVar10[2] != 0);
      Memory::free_static(plVar10,false);
      *(undefined8 *)(this + 0x40) = 0;
    }
LAB_00103b77:
    Array::~Array((Array *)&local_e8);
    lVar9 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      plVar10 = (long *)(local_b0 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_b0 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    CowData<String>::_unref((CowData<String> *)&local_c0);
    CowData<String>::_unref((CowData<String> *)&local_d0);
  }
  puVar4 = *(undefined8 **)(this + 0x48);
  while ((puVar4 != (undefined8 *)0x0 && (*(int *)(puVar4 + 2) != 0))) {
    puVar4 = (undefined8 *)*puVar4;
    local_a8 = (char *)*puVar4;
    uStack_a0 = puVar4[1];
    local_98 = 0;
    if (puVar4[2] != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)(puVar4 + 2));
    }
    local_90 = 0;
    if (puVar4[3] != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)(puVar4 + 3));
    }
    local_88 = *(undefined4 *)(puVar4 + 4);
    local_80 = 0;
    if (puVar4[5] != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)(puVar4 + 5));
    }
    local_78 = 0;
    if (puVar4[6] != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)(puVar4 + 6));
    }
    local_70 = *(undefined1 *)(puVar4 + 7);
    local_60 = 0;
    if (puVar4[9] != 0) {
      CowData<ScriptLanguage::StackInfo>::_ref
                ((CowData<ScriptLanguage::StackInfo> *)&local_60,(CowData *)(puVar4 + 9));
    }
    DebuggerMarshalls::OutputError::serialize();
    local_c8 = 0;
    local_b8 = "error";
    local_b0 = 5;
    String::parse_latin1((StrRange *)&local_c8);
    _put_msg(this,(String *)&local_c8,(Array *)&local_d8);
    lVar9 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar10 = (long *)(local_c8 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    Array::~Array((Array *)&local_d8);
    plVar10 = *(long **)(this + 0x48);
    if ((plVar10 != (long *)0x0) && (pvVar5 = (void *)*plVar10, pvVar5 != (void *)0x0)) {
      if (plVar10 == *(long **)((long)pvVar5 + 0x60)) {
        lVar9 = *(long *)((long)pvVar5 + 0x50);
        lVar12 = *(long *)((long)pvVar5 + 0x58);
        *plVar10 = lVar9;
        if (pvVar5 == (void *)plVar10[1]) {
          plVar10[1] = lVar12;
        }
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x50) = lVar9;
          lVar9 = *(long *)((long)pvVar5 + 0x50);
        }
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x58) = lVar12;
        }
        CowData<ScriptLanguage::StackInfo>::_unref
                  ((CowData<ScriptLanguage::StackInfo> *)((long)pvVar5 + 0x48));
        if (*(long *)((long)pvVar5 + 0x30) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)((long)pvVar5 + 0x30) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar9 = *(long *)((long)pvVar5 + 0x30);
            *(undefined8 *)((long)pvVar5 + 0x30) = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
        if (*(long *)((long)pvVar5 + 0x28) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)((long)pvVar5 + 0x28) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar9 = *(long *)((long)pvVar5 + 0x28);
            *(undefined8 *)((long)pvVar5 + 0x28) = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
        if (*(long *)((long)pvVar5 + 0x18) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)((long)pvVar5 + 0x18) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar9 = *(long *)((long)pvVar5 + 0x18);
            *(undefined8 *)((long)pvVar5 + 0x18) = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
        if (*(long *)((long)pvVar5 + 0x10) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)((long)pvVar5 + 0x10) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar9 = *(long *)((long)pvVar5 + 0x10);
            *(undefined8 *)((long)pvVar5 + 0x10) = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
        Memory::free_static(pvVar5,false);
        *(int *)(plVar10 + 2) = (int)plVar10[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      if (*(int *)((long)*(void **)(this + 0x48) + 0x10) == 0) {
        Memory::free_static(*(void **)(this + 0x48),false);
        *(undefined8 *)(this + 0x48) = 0;
      }
    }
    CowData<ScriptLanguage::StackInfo>::_unref((CowData<ScriptLanguage::StackInfo> *)&local_60);
    lVar9 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar10 = (long *)(local_78 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar10 = (long *)(local_80 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar10 = (long *)(local_90 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar10 = (long *)(local_98 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    puVar4 = *(undefined8 **)(this + 0x48);
  }
  plVar10 = (long *)OS::get_singleton();
  uVar11 = (**(code **)(*plVar10 + 0x208))(plVar10);
  if (1000 < uVar11 / 1000 - (long)*(int *)(this + 0x74)) {
    *(int *)(this + 0x74) = (int)(uVar11 / 1000);
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  }
  this[0xb0] = (RemoteDebugger)0x0;
LAB_001034aa:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x88));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RemoteDebugger::poll_events(bool) */

void __thiscall RemoteDebugger::poll_events(RemoteDebugger *this,bool param_1)

{
  Object *pOVar1;
  Object *pOVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  long *plVar9;
  Object *pOVar10;
  long lVar11;
  wchar32 wVar12;
  long in_FS_OFFSET;
  bool bVar13;
  int local_90 [2];
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x38) != 0) {
    flush_output(this);
    _poll_messages(this);
    while (cVar5 = _has_messages(this), cVar5 != '\0') {
      _get_message();
      iVar6 = Array::size();
      if (iVar6 == 2) {
        iVar6 = (int)(Array *)local_90;
        piVar8 = (int *)Array::operator[](iVar6);
        if (*piVar8 == 4) {
          piVar8 = (int *)Array::operator[](iVar6);
          if (*piVar8 == 0x1c) {
            Array::operator[](iVar6);
            Variant::operator_cast_to_String((Variant *)&local_88);
            wVar12 = (wchar32)(Variant *)&local_88;
            iVar7 = String::find_char(wVar12,0x3a);
            if (iVar7 < 0) {
              Array::operator[](iVar6);
              Variant::operator_cast_to_Array((Variant *)&local_70);
              StringName::StringName((StringName *)&local_68,"core",false);
              EngineDebugger::capture_parse
                        ((StringName *)this,(String *)&local_68,(Array *)&local_88,(bool *)&local_70
                        );
              if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
                StringName::unref();
              }
              Array::~Array((Array *)&local_70);
            }
            else {
              String::substr((int)(String *)&local_80,wVar12);
              StringName::StringName((StringName *)&local_68,(String *)&local_80,false);
              cVar5 = EngineDebugger::has_capture((StringName *)&local_68);
              if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
                StringName::unref();
              }
              if (cVar5 != '\0') {
                String::substr((int)(Array *)&local_78,wVar12);
                Array::operator[](iVar6);
                Variant::operator_cast_to_Array((Variant *)&local_70);
                StringName::StringName((StringName *)&local_68,(String *)&local_80,false);
                EngineDebugger::capture_parse
                          ((StringName *)this,(String *)&local_68,(Array *)&local_78,
                           (bool *)&local_70);
                if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
                  StringName::unref();
                }
                Array::~Array((Array *)&local_70);
                lVar3 = local_78;
                if (local_78 != 0) {
                  LOCK();
                  plVar9 = (long *)(local_78 + -0x10);
                  *plVar9 = *plVar9 + -1;
                  UNLOCK();
                  if (*plVar9 == 0) {
                    local_78 = 0;
                    Memory::free_static((void *)(lVar3 + -0x10),false);
                  }
                }
              }
              lVar3 = local_80;
              if (local_80 != 0) {
                LOCK();
                plVar9 = (long *)(local_80 + -0x10);
                *plVar9 = *plVar9 + -1;
                UNLOCK();
                if (*plVar9 == 0) {
                  local_80 = 0;
                  Memory::free_static((void *)(lVar3 + -0x10),false);
                }
              }
            }
            lVar3 = local_88;
            if (local_88 != 0) {
              LOCK();
              plVar9 = (long *)(local_88 + -0x10);
              *plVar9 = *plVar9 + -1;
              UNLOCK();
              if (*plVar9 == 0) {
                local_88 = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
          }
          else {
            _err_print_error("poll_events","core/debugger/remote_debugger.cpp",0x262,
                             "Condition \"arr[1].get_type() != Variant::ARRAY\" is true. Continuing."
                             ,0);
          }
        }
        else {
          _err_print_error("poll_events","core/debugger/remote_debugger.cpp",0x261,
                           "Condition \"arr[0].get_type() != Variant::STRING\" is true. Continuing."
                           ,0);
        }
      }
      else {
        _err_print_error("poll_events","core/debugger/remote_debugger.cpp",0x260,
                         "Condition \"arr.size() != 2\" is true. Continuing.",0);
      }
      Array::~Array((Array *)local_90);
    }
    if (param_1) {
      if (this[0x78] == (RemoteDebugger)0x0) {
        cVar5 = Array::is_empty();
        if (cVar5 == '\0') {
          Array::Array((Array *)&local_88);
          for (iVar6 = 0; iVar7 = Array::size(), iVar6 < iVar7; iVar6 = iVar6 + 1) {
            Array::operator[]((int)this + 0x80);
            Variant::operator_cast_to_String((Variant *)&local_80);
            local_68 = (Object *)&_LC55;
            local_90[0] = 0;
            local_70 = 0;
            local_60 = 0;
            String::parse_latin1((StrRange *)&local_70);
            ResourceLoader::load(&local_68,(Variant *)&local_80,(StrRange *)&local_70,1,local_90);
            if (local_68 == (Object *)0x0) {
              pOVar10 = (Object *)0x0;
              if (local_70 != 0) goto LAB_00104571;
              if (local_90[0] == 0) goto LAB_00104667;
LAB_001047e3:
              uVar4 = *(undefined8 *)(&error_names + (long)local_90[0] * 8);
              local_78 = 0;
              plVar9 = (long *)(local_80 + -0x10);
              if (local_80 != 0) {
                do {
                  lVar3 = *plVar9;
                  if (lVar3 == 0) goto LAB_00104828;
                  LOCK();
                  lVar11 = *plVar9;
                  bVar13 = lVar3 == lVar11;
                  if (bVar13) {
                    *plVar9 = lVar3 + 1;
                    lVar11 = lVar3;
                  }
                  UNLOCK();
                } while (!bVar13);
                if (lVar11 != -1) {
                  local_78 = local_80;
                }
              }
LAB_00104828:
              local_68 = (Object *)0x108268;
              local_70 = 0;
              local_60 = 0x20;
              String::parse_latin1((StrRange *)&local_70);
              vformat<String,char_const*>(&local_68,(StrRange *)&local_70,&local_78,uVar4);
              _err_print_error("poll_events","core/debugger/remote_debugger.cpp",0x282,
                               "Condition \"err != OK\" is true. Continuing.",&local_68,0,0);
              pOVar1 = local_68;
              if (local_68 != (Object *)0x0) {
                LOCK();
                pOVar2 = local_68 + -0x10;
                *(long *)pOVar2 = *(long *)pOVar2 + -1;
                UNLOCK();
                if (*(long *)pOVar2 == 0) {
                  local_68 = (Object *)0x0;
                  Memory::free_static(pOVar1 + -0x10,false);
                }
              }
              lVar3 = local_70;
              if (local_70 != 0) {
                LOCK();
                plVar9 = (long *)(local_70 + -0x10);
                *plVar9 = *plVar9 + -1;
                UNLOCK();
                if (*plVar9 == 0) {
                  local_70 = 0;
                  Memory::free_static((void *)(lVar3 + -0x10),false);
                }
              }
              lVar3 = local_78;
              if (local_78 != 0) {
                LOCK();
                plVar9 = (long *)(local_78 + -0x10);
                *plVar9 = *plVar9 + -1;
                UNLOCK();
                if (*plVar9 == 0) {
                  local_78 = 0;
                  Memory::free_static((void *)(lVar3 + -0x10),false);
                }
              }
              if (pOVar10 != (Object *)0x0) {
LAB_001045d9:
                cVar5 = RefCounted::unreference();
                if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar10), cVar5 != '\0')) {
                  (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
                  Memory::free_static(pOVar10,false);
                }
              }
            }
            else {
              pOVar10 = (Object *)__dynamic_cast(local_68,&Object::typeinfo,&Script::typeinfo,0);
              if (pOVar10 == (Object *)0x0) {
LAB_0010455a:
                cVar5 = RefCounted::unreference();
                pOVar1 = local_68;
                if ((cVar5 != '\0') && (cVar5 = predelete_handler(local_68), cVar5 != '\0')) {
                  (**(code **)(*(long *)pOVar1 + 0x140))();
                  Memory::free_static(pOVar1,false);
                }
              }
              else {
                cVar5 = RefCounted::reference();
                if (cVar5 == '\0') {
                  pOVar10 = (Object *)0x0;
                }
                if (local_68 != (Object *)0x0) goto LAB_0010455a;
              }
              if (local_70 != 0) {
LAB_00104571:
                lVar3 = local_70;
                LOCK();
                plVar9 = (long *)(local_70 + -0x10);
                *plVar9 = *plVar9 + -1;
                UNLOCK();
                if (*plVar9 == 0) {
                  local_70 = 0;
                  Memory::free_static((void *)(lVar3 + -0x10),false);
                }
              }
              if (local_90[0] != 0) goto LAB_001047e3;
              if (pOVar10 != (Object *)0x0) {
                Variant::Variant((Variant *)local_58,pOVar10);
                Array::push_back((Variant *)&local_88);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                goto LAB_001045d9;
              }
LAB_00104667:
              uVar4 = _error_names;
              local_78 = 0;
              plVar9 = (long *)(local_80 + -0x10);
              if (local_80 != 0) {
                do {
                  lVar3 = *plVar9;
                  if (lVar3 == 0) goto LAB_001046a8;
                  LOCK();
                  lVar11 = *plVar9;
                  bVar13 = lVar3 == lVar11;
                  if (bVar13) {
                    *plVar9 = lVar3 + 1;
                    lVar11 = lVar3;
                  }
                  UNLOCK();
                } while (!bVar13);
                if (lVar11 != -1) {
                  local_78 = local_80;
                }
              }
LAB_001046a8:
              local_70 = 0;
              local_68 = (Object *)0x1082c0;
              local_60 = 0x2b;
              String::parse_latin1((StrRange *)&local_70);
              vformat<String,char_const*>(&local_68,(StrRange *)&local_70,&local_78,uVar4);
              _err_print_error("poll_events","core/debugger/remote_debugger.cpp",0x283,
                               "Condition \"script.is_null()\" is true. Continuing.",&local_68,0,0);
              pOVar10 = local_68;
              if (local_68 != (Object *)0x0) {
                LOCK();
                pOVar1 = local_68 + -0x10;
                *(long *)pOVar1 = *(long *)pOVar1 + -1;
                UNLOCK();
                if (*(long *)pOVar1 == 0) {
                  local_68 = (Object *)0x0;
                  Memory::free_static(pOVar10 + -0x10,false);
                }
              }
              lVar3 = local_70;
              if (local_70 != 0) {
                LOCK();
                plVar9 = (long *)(local_70 + -0x10);
                *plVar9 = *plVar9 + -1;
                UNLOCK();
                if (*plVar9 == 0) {
                  local_70 = 0;
                  Memory::free_static((void *)(lVar3 + -0x10),false);
                }
              }
              lVar3 = local_78;
              if (local_78 != 0) {
                LOCK();
                plVar9 = (long *)(local_78 + -0x10);
                *plVar9 = *plVar9 + -1;
                UNLOCK();
                if (*plVar9 == 0) {
                  local_78 = 0;
                  Memory::free_static((void *)(lVar3 + -0x10),false);
                }
              }
            }
            lVar3 = local_80;
            if (local_80 != 0) {
              LOCK();
              plVar9 = (long *)(local_80 + -0x10);
              *plVar9 = *plVar9 + -1;
              UNLOCK();
              if (*plVar9 == 0) {
                local_80 = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
          }
          iVar6 = 0;
          if (0 < (int)ScriptServer::_language_count) {
            do {
              iVar7 = iVar6 + 1;
              plVar9 = (long *)ScriptServer::get_language(iVar6);
              (**(code **)(*plVar9 + 0x2c0))(plVar9,(Array *)&local_88,1);
              iVar6 = iVar7;
            } while (iVar7 < (int)ScriptServer::_language_count);
          }
          Array::~Array((Array *)&local_88);
        }
      }
      else {
        iVar6 = 0;
        if (0 < (int)ScriptServer::_language_count) {
          do {
            iVar7 = iVar6 + 1;
            plVar9 = (long *)ScriptServer::get_language(iVar6);
            (**(code **)(*plVar9 + 0x2b8))(plVar9);
            iVar6 = iVar7;
          } while (iVar7 < (int)ScriptServer::_language_count);
        }
        this[0x78] = (RemoteDebugger)0x0;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Array::clear();
        return;
      }
      goto LAB_0010493d;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010493d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00104b3c) */
/* RemoteDebugger::debug(bool, bool) */

void __thiscall RemoteDebugger::debug(RemoteDebugger *this,bool param_1,bool param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  pthread_mutex_t *__mutex;
  uint *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  code *pcVar9;
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
  char cVar31;
  char cVar32;
  bool bVar33;
  int iVar34;
  int iVar35;
  undefined4 uVar36;
  uint uVar37;
  int *piVar38;
  Variant *pVVar39;
  long lVar40;
  ulong uVar41;
  long *plVar42;
  CowData<char32_t> *pCVar43;
  Object *pOVar44;
  undefined8 uVar45;
  long lVar46;
  int iVar47;
  uint uVar48;
  ulong uVar49;
  uint uVar50;
  ulong uVar51;
  ulong uVar52;
  uint uVar53;
  ulong uVar54;
  uint *puVar55;
  long lVar56;
  long in_FS_OFFSET;
  StrRange *local_370;
  String *local_360;
  int local_30c;
  long local_308;
  Array local_300 [8];
  Array local_2f8 [8];
  long local_2f0;
  Variant local_2e8 [8];
  undefined1 (*local_2e0) [16];
  undefined1 (*local_2d8) [16];
  undefined8 *local_2d0;
  long *local_2c8;
  long local_2c0;
  undefined1 (*local_2b8) [16];
  long local_2b0;
  long local_2a8;
  undefined8 local_2a0;
  undefined1 local_298 [16];
  undefined4 local_288;
  int local_278 [8];
  undefined1 (*local_258) [16];
  int local_250 [2];
  undefined1 local_248 [16];
  undefined8 local_238;
  code *local_228 [49];
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68 [16];
  undefined8 local_50;
  undefined1 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __mutex = (pthread_mutex_t *)(this + 0x88);
  iVar34 = pthread_mutex_lock(__mutex);
  if (iVar34 != 0) {
LAB_00106a9c:
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar34);
  }
  cVar31 = ScriptDebugger::is_skipping_breakpoints();
  if ((cVar31 != '\x01') || (param_2)) {
    cVar31 = (**(code **)(**(long **)(this + 0x38) + 0x150))();
    if (cVar31 == '\0') {
      _err_print_error("debug","core/debugger/remote_debugger.cpp",0x198,
                       "Condition \"!is_peer_connected()\" is true.",
                       "Script Debugger failed to connect, but being used anyway.",0,0);
    }
    else if ((*(code **)(**(long **)(this + 0x38) + 0x188) == RemoteDebuggerPeer::can_block) ||
            (cVar32 = (**(code **)(**(long **)(this + 0x38) + 0x188))(), cVar32 != '\0')) {
      pthread_mutex_unlock(__mutex);
      if (PTR_break_lang_0010f008 != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
        ScriptDebugger::break_lang();
      }
      plVar8 = *(long **)(in_FS_OFFSET + lRam0000000000104a15);
      if (plVar8 == (long *)0x0) {
        local_308 = 0;
        local_298 = ZEXT816(0x1073d9);
        String::parse_latin1((StrRange *)&local_308);
      }
      else {
        (**(code **)(*plVar8 + 0x260))(&local_308,plVar8);
      }
      Array::Array(local_300);
      Variant::Variant((Variant *)local_228,param_1);
      Array::push_back((Variant *)local_300);
      if (Variant::needs_deinit[(int)local_228[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_228,(String *)&local_308);
      Array::push_back((Variant *)local_300);
      if (Variant::needs_deinit[(int)local_228[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (plVar8 == (long *)0x0) {
        _err_print_error("debug","core/debugger/remote_debugger.cpp",0x1a4,
                         "Parameter \"script_lang\" is null.",0,0);
      }
      else {
        iVar34 = (**(code **)(*plVar8 + 0x268))(plVar8);
        Variant::Variant((Variant *)local_228,0 < iVar34);
        Array::push_back((Variant *)local_300);
        if (Variant::needs_deinit[(int)local_228[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
          Thread::caller_id();
        }
        if (*(long *)(in_FS_OFFSET + lRam0000000000104b24) == 1) {
          local_2a8 = 0;
          local_298 = ZEXT816(0x1073d9);
          String::parse_latin1((StrRange *)&local_2a8);
          local_2b0 = 0;
          local_298._8_8_ = 0xb;
          local_298._0_8_ = "Main Thread";
          String::parse_latin1((StrRange *)&local_2b0);
          RTR((String *)local_298,(String *)&local_2b0);
        }
        else {
          cVar31 = '\0';
          itos((long)local_298);
        }
        local_360 = (String *)local_298;
        local_370 = (StrRange *)&local_2a8;
        Variant::Variant((Variant *)local_228,local_360);
        Array::push_back((Variant *)local_300);
        if (Variant::needs_deinit[(int)local_228[0]] != '\0') {
          Variant::_clear_internal();
        }
        uVar45 = local_298._0_8_;
        lVar40 = local_2b0;
        if (local_298._0_8_ != 0) {
          LOCK();
          plVar42 = (long *)(local_298._0_8_ + -0x10);
          *plVar42 = *plVar42 + -1;
          UNLOCK();
          if (*plVar42 == 0) {
            auVar28._8_8_ = 0;
            auVar28._0_8_ = local_298._8_8_;
            local_298 = auVar28 << 0x40;
            Memory::free_static((void *)(uVar45 + -0x10),false);
            lVar40 = local_2b0;
          }
        }
        local_2b0 = lVar40;
        if (cVar31 != '\0') {
          if (lVar40 != 0) {
            LOCK();
            plVar42 = (long *)(lVar40 + -0x10);
            *plVar42 = *plVar42 + -1;
            UNLOCK();
            if (*plVar42 == 0) {
              local_2b0 = 0;
              Memory::free_static((void *)(lVar40 + -0x10),false);
            }
          }
          lVar40 = local_2a8;
          if (local_2a8 != 0) {
            LOCK();
            plVar42 = (long *)(local_2a8 + -0x10);
            *plVar42 = *plVar42 + -1;
            UNLOCK();
            if (*plVar42 == 0) {
              local_2a8 = 0;
              Memory::free_static((void *)(lVar40 + -0x10),false);
            }
          }
        }
        if (EngineDebugger::allow_focus_steal_fn != (code *)0x0) {
          (*EngineDebugger::allow_focus_steal_fn)();
        }
        pcVar9 = *(code **)(*(long *)this + 8);
        local_2a8 = 0;
        local_298._8_8_ = 0xb;
        local_298._0_8_ = "debug_enter";
        String::parse_latin1(local_370);
        (*pcVar9)(this,local_370,local_300);
        lVar40 = local_2a8;
        if (local_2a8 != 0) {
          LOCK();
          plVar42 = (long *)(local_2a8 + -0x10);
          *plVar42 = *plVar42 + -1;
          UNLOCK();
          if (*plVar42 == 0) {
            local_2a8 = 0;
            Memory::free_static((void *)(lVar40 + -0x10),false);
          }
        }
        if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
          Thread::caller_id();
        }
        if (*(long *)(in_FS_OFFSET + lRam0000000000104c59) == 1) {
          Input::get_singleton();
          local_30c = Input::get_mouse_mode();
          if (local_30c != 0) {
            uVar45 = Input::get_singleton();
            Input::set_mouse_mode(uVar45,0);
          }
        }
        else {
          iVar34 = pthread_mutex_lock(__mutex);
          if (iVar34 != 0) goto LAB_00106a9c;
          local_2b0 = 0;
          if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
            Thread::caller_id();
          }
          local_2a8 = *(long *)(in_FS_OFFSET + lRam0000000000104cb4);
          HashMap<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>>>>
          ::insert((ulong *)local_360,(List *)(this + 0xc0),SUB81(local_370,0));
          List<RemoteDebugger::Message,DefaultAllocator>::~List
                    ((List<RemoteDebugger::Message,DefaultAllocator> *)&local_2b0);
          pthread_mutex_unlock(__mutex);
          local_30c = 0;
        }
        while (cVar31 = (**(code **)(**(long **)(this + 0x38) + 0x150))(), cVar31 != '\0') {
          flush_output(this);
          _poll_messages(this);
          cVar31 = _has_messages(this);
          if (cVar31 == '\0') {
            plVar42 = (long *)OS::get_singleton();
            (**(code **)(*plVar42 + 0x1f8))(plVar42,10000);
            if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
              Thread::caller_id();
            }
            if (*(long *)(in_FS_OFFSET + lRam00000000001051dc) == 1) {
              (**(code **)(*DisplayServer::singleton + 0x750))();
            }
          }
          else {
            _get_message();
            iVar34 = Array::size();
            if (iVar34 == 2) {
              iVar34 = (int)local_2f8;
              piVar38 = (int *)Array::operator[](iVar34);
              if (*piVar38 == 4) {
                piVar38 = (int *)Array::operator[](iVar34);
                if (*piVar38 == 0x1c) {
                  Array::operator[](iVar34);
                  Variant::operator_cast_to_String((Variant *)&local_2f0);
                  Array::operator[](iVar34);
                  Variant::operator_cast_to_Array(local_2e8);
                  cVar31 = String::operator==((String *)&local_2f0,"step");
                  if ((cVar31 == '\0') &&
                     (cVar31 = String::operator==((String *)&local_2f0,"next"), cVar31 == '\0')) {
                    cVar31 = String::operator==((String *)&local_2f0,"continue");
                    if (cVar31 == '\0') {
                      cVar31 = String::operator==((String *)&local_2f0,"break");
                      if (cVar31 == '\0') {
                        cVar31 = String::operator==((String *)&local_2f0,"get_stack_dump");
                        if (cVar31 != '\0') {
                          iVar35 = 0;
                          local_2b8 = (undefined1 (*) [16])0x0;
                          iVar34 = (**(code **)(*plVar8 + 0x268))(plVar8);
                          if (0 < iVar34) {
                            do {
                              local_298 = (undefined1  [16])0x0;
                              (**(code **)(*plVar8 + 0x280))(local_370,plVar8,iVar35);
                              if (local_2a8 != 0) {
                                local_298._0_8_ = local_2a8;
                              }
                              uVar36 = (**(code **)(*plVar8 + 0x270))(plVar8,iVar35);
                              local_288 = uVar36;
                              (**(code **)(*plVar8 + 0x278))(local_370,plVar8,iVar35);
                              lVar40 = local_2a8;
                              if (local_2a8 != 0) {
                                local_298._8_8_ = local_2a8;
                              }
                              if (local_2b8 == (undefined1 (*) [16])0x0) {
                                local_2b8 = (undefined1 (*) [16])
                                            operator_new(0x18,DefaultAllocator::alloc);
                                *(undefined4 *)local_2b8[1] = 0;
                                *local_2b8 = (undefined1  [16])0x0;
                              }
                              pCVar43 = (CowData<char32_t> *)
                                        operator_new(0x30,DefaultAllocator::alloc);
                              lVar46 = 0;
                              *(undefined1 (*) [16])pCVar43 = (undefined1  [16])0x0;
                              lVar56 = local_298._0_8_;
                              *(undefined8 *)(pCVar43 + 0x28) = 0;
                              *(undefined1 (*) [16])(pCVar43 + 0x18) = (undefined1  [16])0x0;
                              if (local_298._0_8_ != 0) {
                                CowData<char32_t>::_ref(pCVar43,(CowData *)local_360);
                                lVar46 = *(long *)(pCVar43 + 8);
                              }
                              if (lVar46 != lVar40) {
                                CowData<char32_t>::_ref(pCVar43 + 8,(CowData *)(local_298 + 8));
                              }
                              *(undefined4 *)(pCVar43 + 0x10) = uVar36;
                              lVar46 = *(long *)(*local_2b8 + 8);
                              *(undefined1 (**) [16])(pCVar43 + 0x28) = local_2b8;
                              *(undefined8 *)(pCVar43 + 0x18) = 0;
                              *(long *)(pCVar43 + 0x20) = lVar46;
                              if (lVar46 != 0) {
                                *(CowData<char32_t> **)(lVar46 + 0x18) = pCVar43;
                              }
                              lVar46 = *(long *)*local_2b8;
                              *(CowData<char32_t> **)(*local_2b8 + 8) = pCVar43;
                              if (lVar46 == 0) {
                                *(CowData<char32_t> **)*local_2b8 = pCVar43;
                              }
                              *(int *)local_2b8[1] = *(int *)local_2b8[1] + 1;
                              if (lVar40 != 0) {
                                LOCK();
                                plVar42 = (long *)(lVar40 + -0x10);
                                *plVar42 = *plVar42 + -1;
                                UNLOCK();
                                if (*plVar42 == 0) {
                                  Memory::free_static((void *)(local_298._8_8_ + -0x10),false);
                                }
                                lVar56 = local_298._0_8_;
                              }
                              if (lVar56 != 0) {
                                LOCK();
                                plVar42 = (long *)(lVar56 + -0x10);
                                *plVar42 = *plVar42 + -1;
                                UNLOCK();
                                if (*plVar42 == 0) {
                                  Memory::free_static((void *)(local_298._0_8_ + -0x10),false);
                                }
                              }
                              iVar35 = iVar35 + 1;
                            } while (iVar34 != iVar35);
                          }
                          pcVar9 = *(code **)(*(long *)this + 8);
                          DebuggerMarshalls::ScriptStackDump::serialize();
                          local_2a8 = 0;
                          local_298._8_8_ = 10;
                          local_298._0_8_ = "stack_dump";
                          String::parse_latin1(local_370);
                          (*pcVar9)(this,local_370,(Array *)&local_2b0);
                          lVar40 = local_2a8;
                          if (local_2a8 != 0) {
                            LOCK();
                            plVar42 = (long *)(local_2a8 + -0x10);
                            *plVar42 = *plVar42 + -1;
                            UNLOCK();
                            if (*plVar42 == 0) {
                              local_2a8 = 0;
                              Memory::free_static((void *)(lVar40 + -0x10),false);
                            }
                          }
                          Array::~Array((Array *)&local_2b0);
                          List<ScriptLanguage::StackInfo,DefaultAllocator>::~List
                                    ((List<ScriptLanguage::StackInfo,DefaultAllocator> *)&local_2b8)
                          ;
                          goto LAB_001054b5;
                        }
                        cVar31 = String::operator==((String *)&local_2f0,"get_stack_frame_vars");
                        iVar34 = (int)local_2e8;
                        if (cVar31 == '\0') {
                          cVar31 = String::operator==((String *)&local_2f0,"reload_scripts");
                          if (cVar31 == '\0') {
                            cVar31 = String::operator==((String *)&local_2f0,"reload_all_scripts");
                            if (cVar31 == '\0') {
                              cVar31 = String::operator==((String *)&local_2f0,"breakpoint");
                              if (cVar31 != '\0') {
                                iVar35 = Array::size();
                                if (2 < iVar35) {
                                  pVVar39 = (Variant *)Array::operator[](iVar34);
                                  bVar33 = Variant::operator_cast_to_bool(pVVar39);
                                  iVar35 = (int)EngineDebugger::script_debugger;
                                  if (bVar33) {
                                    Array::operator[](iVar34);
                                    Variant::operator_cast_to_StringName((Variant *)local_360);
                                    pVVar39 = (Variant *)Array::operator[](iVar34);
                                    uVar37 = Variant::operator_cast_to_int(pVVar39);
                                    ScriptDebugger::insert_breakpoint
                                              (iVar35,(StringName *)(ulong)uVar37);
                                    if ((StringName::configured != '\0') && (local_298._0_8_ != 0))
                                    {
                                      StringName::unref();
                                    }
                                  }
                                  else {
                                    Array::operator[](iVar34);
                                    Variant::operator_cast_to_StringName((Variant *)local_360);
                                    pVVar39 = (Variant *)Array::operator[](iVar34);
                                    uVar37 = Variant::operator_cast_to_int(pVVar39);
                                    ScriptDebugger::remove_breakpoint
                                              (iVar35,(StringName *)(ulong)uVar37);
                                    if ((StringName::configured != '\0') && (local_298._0_8_ != 0))
                                    {
                                      StringName::unref();
                                    }
                                  }
                                  goto LAB_001054b5;
                                }
                                _err_print_error("debug","core/debugger/remote_debugger.cpp",0x20a,
                                                 "Condition \"data.size() < 3\" is true.",0,0);
                                goto LAB_00105fa8;
                              }
                              cVar31 = String::operator==((String *)&local_2f0,
                                                          "set_skip_breakpoints");
                              if (cVar31 == '\0') {
                                cVar31 = String::operator==((String *)&local_2f0,"evaluate");
                                if (cVar31 == '\0') {
                                  local_2b8 = (undefined1 (*) [16])
                                              ((ulong)local_2b8 & 0xffffffffffffff00);
                                  iVar34 = _try_capture(this,(String *)&local_2f0,(Array *)local_2e8
                                                        ,(bool *)&local_2b8);
                                  if (iVar34 == 0) {
                                    if (local_2b8._0_1_ == (List<Variant,DefaultAllocator>)0x0) {
                                      local_2a8 = 0;
                                      plVar42 = (long *)(local_2f0 + -0x10);
                                      if (local_2f0 != 0) {
                                        do {
                                          lVar40 = *plVar42;
                                          if (lVar40 == 0) goto LAB_001062d3;
                                          LOCK();
                                          lVar46 = *plVar42;
                                          bVar33 = lVar40 == lVar46;
                                          if (bVar33) {
                                            *plVar42 = lVar40 + 1;
                                            lVar46 = lVar40;
                                          }
                                          UNLOCK();
                                        } while (!bVar33);
                                        if (lVar46 != -1) {
                                          local_2a8 = local_2f0;
                                        }
                                      }
LAB_001062d3:
                                      local_2b0 = 0;
                                      local_298._8_8_ = 0x2b;
                                      local_298._0_8_ =
                                           "Unknown message received from debugger: %s.";
                                      String::parse_latin1((StrRange *)&local_2b0);
                                      vformat<String>(local_360,(StrRange *)&local_2b0,local_370);
                                      _err_print_error("debug","core/debugger/remote_debugger.cpp",
                                                       0x23c,local_360);
                                      uVar45 = local_298._0_8_;
                                      if (local_298._0_8_ != 0) {
                                        LOCK();
                                        plVar42 = (long *)(local_298._0_8_ + -0x10);
                                        *plVar42 = *plVar42 + -1;
                                        UNLOCK();
                                        if (*plVar42 == 0) {
                                          auVar29._8_8_ = 0;
                                          auVar29._0_8_ = local_298._8_8_;
                                          local_298 = auVar29 << 0x40;
                                          Memory::free_static((void *)(uVar45 + -0x10),false);
                                        }
                                      }
                                      lVar40 = local_2b0;
                                      if (local_2b0 != 0) {
                                        LOCK();
                                        plVar42 = (long *)(local_2b0 + -0x10);
                                        *plVar42 = *plVar42 + -1;
                                        UNLOCK();
                                        if (*plVar42 == 0) {
                                          local_2b0 = 0;
                                          Memory::free_static((void *)(lVar40 + -0x10),false);
                                        }
                                      }
                                      lVar40 = local_2a8;
                                      if (local_2a8 != 0) {
                                        LOCK();
                                        plVar42 = (long *)(local_2a8 + -0x10);
                                        *plVar42 = *plVar42 + -1;
                                        UNLOCK();
                                        if (*plVar42 == 0) {
                                          local_2a8 = 0;
                                          Memory::free_static((void *)(lVar40 + -0x10),false);
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    _err_print_error("debug","core/debugger/remote_debugger.cpp",
                                                     0x23a,
                                                  "Condition \"_try_capture(command, data, captured) != OK\" is true. Continuing."
                                                  ,0,0);
                                  }
                                }
                                else {
                                  Array::operator[](iVar34);
                                  Variant::operator_cast_to_String((Variant *)&local_2d8);
                                  pVVar39 = (Variant *)Array::operator[](iVar34);
                                  iVar34 = Variant::operator_cast_to_int(pVVar39);
                                  if (PTR_break_lang_0010f008 != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    ScriptDebugger::break_lang();
                                  }
                                  pcVar9 = *(code **)(**(long **)(in_FS_OFFSET +
                                                                 lRam00000000001064b3) + 0x298);
                                  if ((pcVar9 == ScriptLanguage::debug_get_stack_level_instance) ||
                                     (plVar42 = (long *)(*pcVar9)(), plVar42 == (long *)0x0)) {
                                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_2d8);
                                    goto LAB_0010567f;
                                  }
                                  local_2d0 = (undefined8 *)0x0;
                                  local_2c8 = (long *)0x0;
                                  if (PTR_break_lang_0010f008 != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    ScriptDebugger::break_lang();
                                  }
                                  (**(code **)(**(long **)(in_FS_OFFSET + lRam00000000001065a9) +
                                              0x288))(*(long **)(in_FS_OFFSET + lRam00000000001065a9
                                                                ),iVar34,
                                                      (List<String,DefaultAllocator> *)&local_2d0,
                                                      (List<Variant,DefaultAllocator> *)&local_2c8,
                                                      0xffffffff);
                                  if (local_2d0 == (undefined8 *)0x0) {
                                    if ((local_2c8 != (long *)0x0) && ((int)local_2c8[2] != 0))
                                    goto LAB_00106a10;
                                    local_2a0 = 0;
                                  }
                                  else {
                                    if (local_2c8 == (long *)0x0) {
                                      if (*(int *)(local_2d0 + 2) != 0) goto LAB_00106a10;
                                    }
                                    else if (*(int *)(local_2d0 + 2) != (int)local_2c8[2]) {
LAB_00106a10:
                                      _err_print_error("debug","core/debugger/remote_debugger.cpp",
                                                       0x222,
                                                  "Condition \"locals.size() != local_vals.size()\" is true."
                                                  ,0,0);
                                      List<Variant,DefaultAllocator>::~List
                                                ((List<Variant,DefaultAllocator> *)&local_2c8);
                                      List<String,DefaultAllocator>::~List
                                                ((List<String,DefaultAllocator> *)&local_2d0);
                                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2d8);
                                      goto LAB_00105fa8;
                                    }
                                    local_2a0 = 0;
                                    for (plVar1 = (long *)*local_2d0; plVar1 != (long *)0x0;
                                        plVar1 = (long *)plVar1[1]) {
                                      uVar45 = local_298._8_8_;
                                      auVar30._8_8_ = 0;
                                      auVar30._0_8_ = local_298._8_8_;
                                      local_298 = auVar30 << 0x40;
                                      plVar2 = (long *)(*plVar1 + -0x10);
                                      if (*plVar1 == 0) {
                                        Vector<String>::push_back
                                                  ((Vector<String> *)local_370,local_360);
                                      }
                                      else {
                                        do {
                                          lVar40 = *plVar2;
                                          if (lVar40 == 0) goto LAB_001066be;
                                          LOCK();
                                          lVar46 = *plVar2;
                                          bVar33 = lVar40 == lVar46;
                                          if (bVar33) {
                                            *plVar2 = lVar40 + 1;
                                            lVar46 = lVar40;
                                          }
                                          UNLOCK();
                                        } while (!bVar33);
                                        if (lVar46 == -1) {
LAB_001066be:
                                          lVar40 = 0;
                                        }
                                        else {
                                          lVar40 = *plVar1;
                                          local_298._0_8_ = lVar40;
                                          local_298 = CONCAT88(uVar45,local_298._0_8_);
                                        }
                                        Vector<String>::push_back((Vector<String> *)local_370);
                                        if (lVar40 != 0) {
                                          LOCK();
                                          plVar2 = (long *)(lVar40 + -0x10);
                                          *plVar2 = *plVar2 + -1;
                                          UNLOCK();
                                          if (*plVar2 == 0) {
                                            Memory::free_static((void *)(local_298._0_8_ + -0x10),
                                                                false);
                                          }
                                        }
                                      }
                                    }
                                  }
                                  Array::Array((Array *)&local_2c0);
                                  if (local_2c8 != (long *)0x0) {
                                    for (lVar40 = *local_2c8; lVar40 != 0;
                                        lVar40 = *(long *)(lVar40 + 0x18)) {
                                      Array::push_back((Variant *)&local_2c0);
                                    }
                                  }
                                  RefCounted::RefCounted((RefCounted *)local_228);
                                  local_68 = (undefined1  [16])0x0;
                                  local_228[0] = Expression::execute;
                                  local_a0 = 0;
                                  local_98 = 0;
                                  local_90 = 0;
                                  local_88 = 0;
                                  local_84 = 0;
                                  local_80 = 0;
                                  local_78 = 0;
                                  local_70 = 1;
                                  local_50 = 0;
                                  local_48 = 0;
                                  Expression::parse((String *)local_228,(Variant *)&local_2d8);
                                  bVar33 = (bool)(**(code **)(*plVar42 + 0x38))(plVar42);
                                  Expression::execute((Array *)local_278,(Object *)local_228,
                                                      SUB81((Array *)&local_2c0,0),bVar33);
                                  local_258 = (undefined1 (*) [16])0x0;
                                  local_250[0] = 0;
                                  local_238 = 0xffffffffffffffff;
                                  pauVar3 = local_2d8 + -1;
                                  local_248 = (undefined1  [16])0x0;
                                  if (local_2d8 != (undefined1 (*) [16])0x0) {
                                    do {
                                      lVar40 = *(long *)*pauVar3;
                                      if (lVar40 == 0) goto LAB_0010684b;
                                      LOCK();
                                      lVar46 = *(long *)*pauVar3;
                                      bVar33 = lVar40 == lVar46;
                                      if (bVar33) {
                                        *(long *)*pauVar3 = lVar40 + 1;
                                        lVar46 = lVar40;
                                      }
                                      UNLOCK();
                                    } while (!bVar33);
                                    if (lVar46 != -1) {
                                      local_258 = local_2d8;
                                    }
                                  }
LAB_0010684b:
                                  Variant::operator=((Variant *)local_250,(Variant *)local_278);
                                  local_238 = CONCAT44(local_238._4_4_,3);
                                  pcVar9 = *(code **)(*(long *)this + 8);
                                  DebuggerMarshalls::ScriptStackVariable::serialize
                                            ((int)(Array *)&local_2b8);
                                  local_2b0 = 0;
                                  local_298._8_8_ = 0x11;
                                  local_298._0_8_ = "evaluation_return";
                                  String::parse_latin1((StrRange *)&local_2b0);
                                  (*pcVar9)(this,(StrRange *)&local_2b0,(Array *)&local_2b8);
                                  lVar40 = local_2b0;
                                  if (local_2b0 != 0) {
                                    LOCK();
                                    plVar42 = (long *)(local_2b0 + -0x10);
                                    *plVar42 = *plVar42 + -1;
                                    UNLOCK();
                                    if (*plVar42 == 0) {
                                      local_2b0 = 0;
                                      Memory::free_static((void *)(lVar40 + -0x10),false);
                                    }
                                  }
                                  Array::~Array((Array *)&local_2b8);
                                  if (Variant::needs_deinit[local_250[0]] != '\0') {
                                    Variant::_clear_internal();
                                  }
                                  pauVar3 = local_258;
                                  if (local_258 != (undefined1 (*) [16])0x0) {
                                    LOCK();
                                    pauVar4 = local_258 + -1;
                                    *(long *)*pauVar4 = *(long *)*pauVar4 + -1;
                                    UNLOCK();
                                    if (*(long *)*pauVar4 == 0) {
                                      local_258 = (undefined1 (*) [16])0x0;
                                      Memory::free_static(pauVar3 + -1,false);
                                    }
                                  }
                                  if (Variant::needs_deinit[local_278[0]] != '\0') {
                                    Variant::_clear_internal();
                                  }
                                  Expression::~Expression((Expression *)local_228);
                                  Array::~Array((Array *)&local_2c0);
                                  CowData<String>::_unref((CowData<String> *)&local_2a0);
                                  List<Variant,DefaultAllocator>::~List
                                            ((List<Variant,DefaultAllocator> *)&local_2c8);
                                  List<String,DefaultAllocator>::~List
                                            ((List<String,DefaultAllocator> *)&local_2d0);
                                  pauVar3 = local_2d8;
                                  if (local_2d8 != (undefined1 (*) [16])0x0) {
                                    LOCK();
                                    pauVar4 = local_2d8 + -1;
                                    *(long *)*pauVar4 = *(long *)*pauVar4 + -1;
                                    UNLOCK();
                                    if (*(long *)*pauVar4 == 0) {
                                      local_2d8 = (undefined1 (*) [16])0x0;
                                      Memory::free_static(pauVar3 + -1,false);
                                    }
                                  }
                                }
                              }
                              else {
                                cVar31 = Array::is_empty();
                                uVar45 = EngineDebugger::script_debugger;
                                if (cVar31 != '\0') {
                                  _err_print_error("debug","core/debugger/remote_debugger.cpp",0x213
                                                   ,"Condition \"data.is_empty()\" is true.",0,0);
                                  goto LAB_00105fa8;
                                }
                                pVVar39 = (Variant *)Array::operator[](iVar34);
                                Variant::operator_cast_to_bool(pVVar39);
                                ScriptDebugger::set_skip_breakpoints(SUB81(uVar45,0));
                              }
                            }
                            else {
                              this[0x78] = (RemoteDebugger)0x1;
                            }
                          }
                          else {
                            Array::operator=((Array *)(this + 0x80),(Array *)local_2e8);
                          }
LAB_001054b5:
                          Array::~Array((Array *)local_2e8);
                          lVar40 = local_2f0;
                          if (local_2f0 != 0) {
                            LOCK();
                            plVar42 = (long *)(local_2f0 + -0x10);
                            *plVar42 = *plVar42 + -1;
                            UNLOCK();
                            if (*plVar42 == 0) {
                              local_2f0 = 0;
                              Memory::free_static((void *)(lVar40 + -0x10),false);
                            }
                          }
                          goto LAB_001054f3;
                        }
                        iVar35 = Array::size();
                        if (iVar35 != 1) {
                          _err_print_error("debug","core/debugger/remote_debugger.cpp",0x1e7,
                                           "Condition \"data.size() != 1\" is true.",0,0);
                          goto LAB_00105fa8;
                        }
                        pVVar39 = (Variant *)Array::operator[](iVar34);
                        iVar34 = Variant::operator_cast_to_int(pVVar39);
                        local_2e0 = (undefined1 (*) [16])0x0;
                        local_2d8 = (undefined1 (*) [16])0x0;
                        lVar40 = *plVar8;
                        if (*(code **)(lVar40 + 0x298) !=
                            ScriptLanguage::debug_get_stack_level_instance) {
                          plVar42 = (long *)(**(code **)(lVar40 + 0x298))(plVar8,iVar34);
                          if (plVar42 != (long *)0x0) {
                            local_2a8 = 0;
                            local_298._8_8_ = 4;
                            local_298._0_8_ = &_LC115;
                            String::parse_latin1(local_370);
                            if (local_2e0 == (undefined1 (*) [16])0x0) {
                              local_2e0 = (undefined1 (*) [16])
                                          operator_new(0x18,DefaultAllocator::alloc);
                              *(undefined4 *)local_2e0[1] = 0;
                              *local_2e0 = (undefined1  [16])0x0;
                            }
                            pCVar43 = (CowData<char32_t> *)
                                      operator_new(0x20,DefaultAllocator::alloc);
                            *(undefined1 (*) [16])pCVar43 = (undefined1  [16])0x0;
                            *(undefined1 (*) [16])(pCVar43 + 0x10) = (undefined1  [16])0x0;
                            if (local_2a8 != 0) {
                              CowData<char32_t>::_ref(pCVar43,(CowData *)local_370);
                            }
                            lVar46 = local_2a8;
                            lVar40 = *(long *)(*local_2e0 + 8);
                            *(undefined8 *)(pCVar43 + 8) = 0;
                            *(undefined1 (**) [16])(pCVar43 + 0x18) = local_2e0;
                            *(long *)(pCVar43 + 0x10) = lVar40;
                            if (lVar40 != 0) {
                              *(CowData<char32_t> **)(lVar40 + 8) = pCVar43;
                            }
                            lVar40 = *(long *)*local_2e0;
                            *(CowData<char32_t> **)(*local_2e0 + 8) = pCVar43;
                            if (lVar40 == 0) {
                              *(CowData<char32_t> **)*local_2e0 = pCVar43;
                            }
                            *(int *)local_2e0[1] = *(int *)local_2e0[1] + 1;
                            if (local_2a8 != 0) {
                              LOCK();
                              plVar1 = (long *)(local_2a8 + -0x10);
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                local_2a8 = 0;
                                Memory::free_static((void *)(lVar46 + -0x10),false);
                              }
                            }
                            pOVar44 = (Object *)(**(code **)(*plVar42 + 0x38))(plVar42);
                            Variant::Variant((Variant *)local_228,pOVar44);
                            if (local_2d8 == (undefined1 (*) [16])0x0) {
                              local_2d8 = (undefined1 (*) [16])
                                          operator_new(0x18,DefaultAllocator::alloc);
                              *(undefined4 *)local_2d8[1] = 0;
                              *local_2d8 = (undefined1  [16])0x0;
                            }
                            pVVar39 = (Variant *)operator_new(0x30,DefaultAllocator::alloc);
                            *(undefined4 *)pVVar39 = 0;
                            *(undefined8 *)(pVVar39 + 0x28) = 0;
                            *(undefined1 (*) [16])(pVVar39 + 8) = (undefined1  [16])0x0;
                            *(undefined1 (*) [16])(pVVar39 + 0x18) = (undefined1  [16])0x0;
                            Variant::operator=(pVVar39,(Variant *)local_228);
                            uVar45 = *(undefined8 *)(*local_2d8 + 8);
                            *(undefined8 *)(pVVar39 + 0x18) = 0;
                            *(undefined1 (**) [16])(pVVar39 + 0x28) = local_2d8;
                            *(undefined8 *)(pVVar39 + 0x20) = uVar45;
                            if (*(long *)(*local_2d8 + 8) != 0) {
                              *(Variant **)(*(long *)(*local_2d8 + 8) + 0x18) = pVVar39;
                            }
                            lVar40 = *(long *)*local_2d8;
                            *(Variant **)(*local_2d8 + 8) = pVVar39;
                            if (lVar40 == 0) {
                              *(Variant **)*local_2d8 = pVVar39;
                            }
                            *(int *)local_2d8[1] = *(int *)local_2d8[1] + 1;
                            if (Variant::needs_deinit[(int)local_228[0]] != '\0') {
                              Variant::_clear_internal();
                            }
                          }
                          lVar40 = *plVar8;
                        }
                        (**(code **)(lVar40 + 0x290))
                                  (plVar8,iVar34,(List<String,DefaultAllocator> *)&local_2e0,
                                   (List *)&local_2d8,0xffffffff,0xffffffff);
                        if (local_2e0 == (undefined1 (*) [16])0x0) {
                          iVar35 = 0;
                          if (local_2d8 != (undefined1 (*) [16])0x0) goto LAB_00104eed;
LAB_00104ef8:
                          local_2d0 = (undefined8 *)0x0;
                          local_2c8 = (long *)0x0;
                          (**(code **)(*plVar8 + 0x288))
                                    (plVar8,iVar34,(List *)&local_2d0,
                                     (List<Variant,DefaultAllocator> *)&local_2c8,0xffffffff);
                          if (local_2d0 == (undefined8 *)0x0) {
                            iVar34 = 0;
                            if (local_2c8 != (long *)0x0) goto LAB_00104f6b;
LAB_00104f76:
                            local_2c0 = 0;
                            local_2b8 = (undefined1 (*) [16])0x0;
                            (**(code **)(*plVar8 + 0x2a0))
                                      (plVar8,(List<String,DefaultAllocator> *)&local_2c0,
                                       (List<Variant,DefaultAllocator> *)&local_2b8);
                            if (local_2c0 == 0) {
                              iVar34 = 0;
                              if (local_2b8 != (undefined1 (*) [16])0x0) goto LAB_00104fe3;
                            }
                            else {
                              iVar34 = *(int *)(local_2c0 + 0x10);
                              iVar35 = 0;
                              if (local_2b8 != (undefined1 (*) [16])0x0) {
LAB_00104fe3:
                                iVar35 = *(int *)local_2b8[1];
                              }
                              if (iVar35 != iVar34) {
                                _err_print_error("debug","core/debugger/remote_debugger.cpp",0x1fc,
                                                 "Condition \"globals.size() != globals_vals.size()\" is true."
                                                 ,0,0);
                                List<Variant,DefaultAllocator>::~List
                                          ((List<Variant,DefaultAllocator> *)&local_2b8);
                                List<String,DefaultAllocator>::~List
                                          ((List<String,DefaultAllocator> *)&local_2c0);
                                goto LAB_00106136;
                              }
                            }
                            Array::Array((Array *)&local_2b0);
                            iVar34 = 0;
                            if (local_2c8 != (long *)0x0) {
                              iVar34 = (int)local_2c8[2];
                            }
                            if (local_2d8 != (undefined1 (*) [16])0x0) {
                              iVar34 = iVar34 + *(int *)local_2d8[1];
                            }
                            if (local_2b8 != (undefined1 (*) [16])0x0) {
                              iVar34 = iVar34 + *(int *)local_2b8[1];
                            }
                            Variant::Variant((Variant *)local_228,iVar34);
                            Array::push_back((Variant *)&local_2b0);
                            if (Variant::needs_deinit[(int)local_228[0]] != '\0') {
                              Variant::_clear_internal();
                            }
                            pcVar9 = *(code **)(*(long *)this + 8);
                            local_2a8 = 0;
                            local_298._8_8_ = 0x10;
                            local_298._0_8_ = "stack_frame_vars";
                            String::parse_latin1(local_370);
                            (*pcVar9)(this,local_370,(Array *)&local_2b0);
                            lVar40 = local_2a8;
                            if (local_2a8 != 0) {
                              LOCK();
                              plVar42 = (long *)(local_2a8 + -0x10);
                              *plVar42 = *plVar42 + -1;
                              UNLOCK();
                              if (*plVar42 == 0) {
                                local_2a8 = 0;
                                Memory::free_static((void *)(lVar40 + -0x10),false);
                              }
                            }
                            _send_stack_vars(this,(List *)&local_2d0,(List *)&local_2c8,0);
                            _send_stack_vars(this,(List *)&local_2e0,(List *)&local_2d8,1);
                            _send_stack_vars(this,(List *)&local_2c0,(List *)&local_2b8,2);
                            Array::~Array((Array *)&local_2b0);
                            List<Variant,DefaultAllocator>::~List
                                      ((List<Variant,DefaultAllocator> *)&local_2b8);
                            List<String,DefaultAllocator>::~List
                                      ((List<String,DefaultAllocator> *)&local_2c0);
                            List<Variant,DefaultAllocator>::~List
                                      ((List<Variant,DefaultAllocator> *)&local_2c8);
                            List<String,DefaultAllocator>::~List
                                      ((List<String,DefaultAllocator> *)&local_2d0);
                            List<Variant,DefaultAllocator>::~List
                                      ((List<Variant,DefaultAllocator> *)&local_2d8);
                            List<String,DefaultAllocator>::~List
                                      ((List<String,DefaultAllocator> *)&local_2e0);
                            goto LAB_001054b5;
                          }
                          iVar34 = *(int *)(local_2d0 + 2);
                          iVar35 = 0;
                          if (local_2c8 != (long *)0x0) {
LAB_00104f6b:
                            iVar35 = (int)local_2c8[2];
                          }
                          if (iVar35 == iVar34) goto LAB_00104f76;
                          _err_print_error("debug","core/debugger/remote_debugger.cpp",0x1f7,
                                           "Condition \"locals.size() != local_vals.size()\" is true."
                                           ,0,0);
LAB_00106136:
                          List<Variant,DefaultAllocator>::~List
                                    ((List<Variant,DefaultAllocator> *)&local_2c8);
                          List<String,DefaultAllocator>::~List
                                    ((List<String,DefaultAllocator> *)&local_2d0);
                        }
                        else {
                          iVar35 = *(int *)local_2e0[1];
                          iVar47 = 0;
                          if (local_2d8 != (undefined1 (*) [16])0x0) {
LAB_00104eed:
                            iVar47 = *(int *)local_2d8[1];
                          }
                          if (iVar47 == iVar35) goto LAB_00104ef8;
                          _err_print_error("debug","core/debugger/remote_debugger.cpp",0x1f2,
                                           "Condition \"members.size() != member_vals.size()\" is true."
                                           ,0,0);
                        }
                        List<Variant,DefaultAllocator>::~List
                                  ((List<Variant,DefaultAllocator> *)&local_2d8);
                        List<String,DefaultAllocator>::~List
                                  ((List<String,DefaultAllocator> *)&local_2e0);
LAB_00105fa8:
                        Array::~Array((Array *)local_2e8);
                        lVar40 = local_2f0;
                        if (local_2f0 != 0) {
                          LOCK();
                          plVar8 = (long *)(local_2f0 + -0x10);
                          *plVar8 = *plVar8 + -1;
                          UNLOCK();
                          if (*plVar8 == 0) {
                            local_2f0 = 0;
                            Memory::free_static((void *)(lVar40 + -0x10),false);
                          }
                        }
                        Array::~Array(local_2f8);
                        goto LAB_00105790;
                      }
                      _err_print_error("debug","core/debugger/remote_debugger.cpp",0x1d7,
                                       "Got break when already broke!",0,0);
                    }
                    else {
                      ScriptDebugger::set_depth((int)EngineDebugger::script_debugger);
                      ScriptDebugger::set_lines_left((int)EngineDebugger::script_debugger);
                    }
                  }
                  else {
                    ScriptDebugger::set_depth((int)EngineDebugger::script_debugger);
                    ScriptDebugger::set_lines_left((int)EngineDebugger::script_debugger);
                  }
LAB_0010567f:
                  Array::~Array((Array *)local_2e8);
                  lVar40 = local_2f0;
                  if (local_2f0 != 0) {
                    LOCK();
                    plVar8 = (long *)(local_2f0 + -0x10);
                    *plVar8 = *plVar8 + -1;
                    UNLOCK();
                    if (*plVar8 == 0) {
                      local_2f0 = 0;
                      Memory::free_static((void *)(lVar40 + -0x10),false);
                    }
                  }
                  Array::~Array(local_2f8);
                  break;
                }
                _err_print_error("debug","core/debugger/remote_debugger.cpp",0x1c2,
                                 "Condition \"cmd[1].get_type() != Variant::ARRAY\" is true. Continuing."
                                 ,0,0);
              }
              else {
                _err_print_error("debug","core/debugger/remote_debugger.cpp",0x1c1,
                                 "Condition \"cmd[0].get_type() != Variant::STRING\" is true. Continuing."
                                 ,0,0);
              }
            }
            else {
              _err_print_error("debug","core/debugger/remote_debugger.cpp",0x1c0,
                               "Condition \"cmd.size() != 2\" is true. Continuing.",0,0);
            }
LAB_001054f3:
            Array::~Array(local_2f8);
          }
        }
        pcVar9 = *(code **)(*(long *)this + 8);
        Array::Array((Array *)&local_2b0);
        local_2a8 = 0;
        local_298._8_8_ = 10;
        local_298._0_8_ = "debug_exit";
        String::parse_latin1(local_370);
        (*pcVar9)(this,local_370,(Array *)&local_2b0);
        lVar40 = local_2a8;
        if (local_2a8 != 0) {
          LOCK();
          plVar8 = (long *)(local_2a8 + -0x10);
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (*plVar8 == 0) {
            local_2a8 = 0;
            Memory::free_static((void *)(lVar40 + -0x10),false);
          }
        }
        Array::~Array((Array *)&local_2b0);
        if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
          Thread::caller_id();
        }
        if (*(long *)(in_FS_OFFSET + lRam0000000000105777) == 1) {
          if (local_30c != 0) {
            uVar45 = Input::get_singleton();
            Input::set_mouse_mode(uVar45);
          }
        }
        else {
          iVar34 = pthread_mutex_lock(__mutex);
          if (iVar34 != 0) goto LAB_00106a9c;
          if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
            Thread::caller_id();
          }
          lVar40 = *(long *)(this + 200);
          if ((lVar40 != 0) && (*(int *)(this + 0xec) != 0)) {
            lVar46 = *(long *)(this + 0xd0);
            uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe8) * 4);
            uVar52 = CONCAT44(0,uVar37);
            lVar56 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xe8) * 8);
            uVar41 = *(long *)(in_FS_OFFSET + lRam00000000001058eb) * 0x3ffff - 1;
            uVar41 = (uVar41 ^ uVar41 >> 0x1f) * 0x15;
            uVar41 = (uVar41 ^ uVar41 >> 0xb) * 0x41;
            uVar41 = uVar41 >> 0x16 ^ uVar41;
            uVar54 = uVar41 & 0xffffffff;
            if ((int)uVar41 == 0) {
              uVar54 = 1;
            }
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar54 * lVar56;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar52;
            uVar41 = SUB168(auVar10 * auVar19,8);
            uVar50 = *(uint *)(lVar46 + uVar41 * 4);
            uVar51 = (ulong)SUB164(auVar10 * auVar19,8);
            if (uVar50 != 0) {
              uVar53 = 0;
LAB_001059c2:
              auVar13._8_8_ = 0;
              auVar13._0_8_ = (ulong)((int)uVar51 + 1) * lVar56;
              auVar22._8_8_ = 0;
              auVar22._0_8_ = uVar52;
              uVar49 = SUB168(auVar13 * auVar22,8);
              uVar48 = SUB164(auVar13 * auVar22,8);
              if ((uVar50 != (uint)uVar54) ||
                 (*(long *)(in_FS_OFFSET + lRam00000000001058eb) !=
                  *(long *)(*(long *)(lVar40 + uVar41 * 8) + 0x10))) goto LAB_00105988;
              puVar55 = (uint *)(lVar46 + uVar49 * 4);
              uVar50 = *puVar55;
              if ((uVar50 != 0) &&
                 (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar50 * lVar56, auVar23._8_8_ = 0,
                 auVar23._0_8_ = uVar52, auVar15._8_8_ = 0,
                 auVar15._0_8_ = (ulong)((uVar48 + uVar37) - SUB164(auVar14 * auVar23,8)) * lVar56,
                 auVar24._8_8_ = 0, auVar24._0_8_ = uVar52, uVar41 = (ulong)uVar48, uVar54 = uVar51,
                 SUB164(auVar15 * auVar24,8) != 0)) {
                while( true ) {
                  uVar51 = uVar41;
                  puVar5 = (uint *)(lVar46 + uVar54 * 4);
                  *puVar55 = *puVar5;
                  puVar6 = (undefined8 *)(lVar40 + uVar49 * 8);
                  *puVar5 = uVar50;
                  puVar7 = (undefined8 *)(lVar40 + uVar54 * 8);
                  uVar45 = *puVar6;
                  *puVar6 = *puVar7;
                  *puVar7 = uVar45;
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = (ulong)((int)uVar51 + 1) * lVar56;
                  auVar27._8_8_ = 0;
                  auVar27._0_8_ = uVar52;
                  uVar49 = SUB168(auVar18 * auVar27,8);
                  puVar55 = (uint *)(lVar46 + uVar49 * 4);
                  uVar50 = *puVar55;
                  if ((uVar50 == 0) ||
                     (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar50 * lVar56, auVar25._8_8_ = 0,
                     auVar25._0_8_ = uVar52, auVar17._8_8_ = 0,
                     auVar17._0_8_ =
                          (ulong)((SUB164(auVar18 * auVar27,8) + uVar37) -
                                 SUB164(auVar16 * auVar25,8)) * lVar56, auVar26._8_8_ = 0,
                     auVar26._0_8_ = uVar52, SUB164(auVar17 * auVar26,8) == 0)) break;
                  uVar41 = uVar49 & 0xffffffff;
                  uVar54 = uVar51;
                }
              }
              plVar8 = (long *)(lVar40 + uVar51 * 8);
              *(undefined4 *)(lVar46 + uVar51 * 4) = 0;
              plVar42 = (long *)*plVar8;
              if (*(long **)(this + 0xd8) == plVar42) {
                *(long *)(this + 0xd8) = *plVar42;
                plVar42 = (long *)*plVar8;
              }
              if (plVar42 == *(long **)(this + 0xe0)) {
                *(long *)(this + 0xe0) = plVar42[1];
                plVar42 = (long *)*plVar8;
              }
              if ((long *)plVar42[1] != (long *)0x0) {
                *(long *)plVar42[1] = *plVar42;
                plVar42 = (long *)*plVar8;
              }
              if (*plVar42 != 0) {
                *(long *)(*plVar42 + 8) = plVar42[1];
                plVar42 = (long *)*plVar8;
              }
              List<RemoteDebugger::Message,DefaultAllocator>::~List
                        ((List<RemoteDebugger::Message,DefaultAllocator> *)(plVar42 + 3));
              Memory::free_static(plVar42,false);
              *(undefined8 *)(*(long *)(this + 200) + uVar51 * 8) = 0;
              *(int *)(this + 0xec) = *(int *)(this + 0xec) + -1;
            }
          }
LAB_00105b0b:
          pthread_mutex_unlock(__mutex);
        }
      }
LAB_00105790:
      Array::~Array(local_300);
      lVar40 = local_308;
      if (local_308 != 0) {
        LOCK();
        plVar8 = (long *)(local_308 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_308 = 0;
          Memory::free_static((void *)(lVar40 + -0x10),false);
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00106aa3;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    pthread_mutex_unlock(__mutex);
    return;
  }
LAB_00106aa3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00105988:
  uVar50 = *(uint *)(lVar46 + uVar49 * 4);
  uVar51 = uVar49 & 0xffffffff;
  uVar53 = uVar53 + 1;
  if ((uVar50 == 0) ||
     (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar50 * lVar56, auVar20._8_8_ = 0,
     auVar20._0_8_ = uVar52, auVar12._8_8_ = 0,
     auVar12._0_8_ = (ulong)((uVar37 + uVar48) - SUB164(auVar11 * auVar20,8)) * lVar56,
     auVar21._8_8_ = 0, auVar21._0_8_ = uVar52, uVar41 = uVar49,
     SUB164(auVar12 * auVar21,8) < uVar53)) goto LAB_00105b0b;
  goto LAB_001059c2;
}



/* RemoteDebugger::send_error(String const&, String const&, int, String const&, String const&, bool,
   ErrorHandlerType) */

void __thiscall
RemoteDebugger::send_error
          (RemoteDebugger *this,CowData *param_1,CowData *param_2,undefined4 param_3,long *param_4,
          CowData *param_5,undefined8 param_6,int param_8)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  code *pcVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_e8;
  long local_e0;
  undefined4 local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined1 local_c8 [16];
  undefined4 local_b8;
  long local_b0;
  long lStack_a8;
  char local_a0;
  Vector<ScriptLanguage::StackInfo> local_98 [8];
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  long local_60;
  long local_58;
  CowData<ScriptLanguage::StackInfo> local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = *param_4;
  local_d8 = 0xffffffff;
  iStack_d4 = 0xffffffff;
  iStack_d0 = 0xffffffff;
  iStack_cc = 0xffffffff;
  local_b8 = 0xffffffff;
  local_a0 = 0;
  local_90 = 0;
  local_c8 = (undefined1  [16])0x0;
  local_b0 = 0;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + -0x10);
    do {
      lVar6 = *plVar1;
      if (lVar6 == 0) goto LAB_00106b47;
      LOCK();
      lVar5 = *plVar1;
      bVar9 = lVar6 == lVar5;
      if (bVar9) {
        *plVar1 = lVar6 + 1;
        lVar5 = lVar6;
      }
      UNLOCK();
    } while (!bVar9);
    if (lVar5 != -1) {
      local_b0 = *param_4;
    }
LAB_00106b47:
    lStack_a8 = 0;
    lVar6 = lStack_a8;
  }
  lStack_a8 = 0;
  if (*(long *)param_5 != lVar6) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&lStack_a8,param_5);
  }
  if (local_c8._0_8_ != *(long *)param_2) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_c8,param_2);
  }
  local_b8 = param_3;
  if (local_c8._8_8_ != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_c8 + 8),param_1);
  }
  local_a0 = param_8 == 1;
  OS::get_singleton();
  uVar7 = OS::get_ticks_msec();
  local_d8 = (undefined4)(uVar7 / 3600000);
  uVar8 = (uVar7 / 60000) / 0x3c;
  iStack_d4 = (int)(uVar7 / 60000) + ((int)(uVar8 << 4) - (int)uVar8) * -4;
  uVar8 = (uVar7 / 1000) / 0x3c;
  iVar4 = (int)(uVar7 / 1000);
  iStack_d0 = iVar4 + ((int)(uVar8 << 4) - (int)uVar8) * -4;
  iStack_cc = (int)uVar7 + iVar4 * -1000;
  ScriptDebugger::get_error_stack_info();
  Vector<ScriptLanguage::StackInfo>::append_array(local_98);
  CowData<ScriptLanguage::StackInfo>::_unref((CowData<ScriptLanguage::StackInfo> *)&local_80);
  if (this[0xb0] == (RemoteDebugger)0x0) {
LAB_00106ca4:
    __mutex = (pthread_mutex_t *)(this + 0x88);
    iVar4 = pthread_mutex_lock(__mutex);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar4);
    }
    pcVar2 = *(code **)(**(long **)(this + 0x38) + 0x150);
    if (local_a0 == '\0') {
      *(int *)(this + 0x6c) = *(int *)(this + 0x6c) + 1;
      cVar3 = (*pcVar2)();
      if (cVar3 != '\0') {
        if (*(int *)(this + 0x6c) <= *(int *)(this + 0x54)) goto LAB_00106fc8;
        iVar4 = *(int *)(this + 0x60);
        *(int *)(this + 0x60) = iVar4 + 1;
        if (iVar4 + 1 == 1) {
          local_e0 = 0;
          local_88 = "Too many errors! Ignoring errors for up to 1 second.";
          local_80 = 0x34;
          String::parse_latin1((StrRange *)&local_e0);
          local_88 = "TOO_MANY_ERRORS";
          local_80 = 0xf;
          goto LAB_00106e0f;
        }
      }
    }
    else {
      *(int *)(this + 0x70) = *(int *)(this + 0x70) + 1;
      cVar3 = (*pcVar2)();
      if (cVar3 != '\0') {
        if (*(int *)(this + 0x70) <= *(int *)(this + 0x5c)) {
LAB_00106fc8:
          List<DebuggerMarshalls::OutputError,DefaultAllocator>::push_back
                    ((List<DebuggerMarshalls::OutputError,DefaultAllocator> *)(this + 0x48),
                     (OutputError *)&local_d8);
          pthread_mutex_unlock(__mutex);
          goto LAB_00106d08;
        }
        iVar4 = *(int *)(this + 100);
        *(int *)(this + 100) = iVar4 + 1;
        if (iVar4 + 1 == 1) {
          local_e0 = 0;
          local_88 = "Too many warnings! Ignoring warnings for up to 1 second.";
          local_80 = 0x38;
          String::parse_latin1((StrRange *)&local_e0);
          local_88 = "TOO_MANY_WARNINGS";
          local_80 = 0x11;
LAB_00106e0f:
          local_e8 = 0;
          String::parse_latin1((StrRange *)&local_e8);
          _create_overflow_error((String *)&local_88,(String *)this);
          lVar6 = local_e8;
          if (local_e8 != 0) {
            LOCK();
            plVar1 = (long *)(local_e8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_e8 = 0;
              Memory::free_static((void *)(lVar6 + -0x10),false);
            }
          }
          lVar6 = local_e0;
          if (local_e0 != 0) {
            LOCK();
            plVar1 = (long *)(local_e0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_e0 = 0;
              Memory::free_static((void *)(lVar6 + -0x10),false);
            }
          }
          List<DebuggerMarshalls::OutputError,DefaultAllocator>::push_back
                    ((List<DebuggerMarshalls::OutputError,DefaultAllocator> *)(this + 0x48),
                     (OutputError *)&local_88);
          CowData<ScriptLanguage::StackInfo>::_unref(local_40);
          if (local_58 != 0) {
            LOCK();
            plVar1 = (long *)(local_58 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_58 + -0x10),false);
            }
          }
          if (local_60 != 0) {
            LOCK();
            plVar1 = (long *)(local_60 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_60 + -0x10),false);
            }
          }
          if (local_70 != 0) {
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_70 + -0x10),false);
            }
          }
          if (local_78 != 0) {
            LOCK();
            plVar1 = (long *)(local_78 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_78 + -0x10),false);
            }
          }
        }
      }
    }
    pthread_mutex_unlock(__mutex);
  }
  else {
    if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      Thread::caller_id();
    }
    if (*(long *)(this + 0xb8) != *(long *)(in_FS_OFFSET + lRam0000000000106c97)) goto LAB_00106ca4;
  }
LAB_00106d08:
  CowData<ScriptLanguage::StackInfo>::_unref((CowData<ScriptLanguage::StackInfo> *)&local_90);
  if (lStack_a8 != 0) {
    LOCK();
    plVar1 = (long *)(lStack_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(lStack_a8 + -0x10),false);
    }
  }
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_b0 + -0x10),false);
    }
  }
  if (local_c8._8_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_c8._8_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_c8._8_8_ + -0x10),false);
    }
  }
  if (local_c8._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_c8._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_c8._0_8_ + -0x10),false);
        return;
      }
      goto LAB_00107038;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00107038:
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



/* ScriptLanguage::debug_get_stack_level_instance(int) */

undefined8 ScriptLanguage::debug_get_stack_level_instance(int param_1)

{
  return 0;
}



/* ScriptLanguage::debug_get_current_stack_info() */

ScriptLanguage * __thiscall ScriptLanguage::debug_get_current_stack_info(ScriptLanguage *this)

{
  *(undefined8 *)(this + 8) = 0;
  return this;
}



/* RemoteDebuggerPeer::can_block() const */

undefined8 RemoteDebuggerPeer::can_block(void)

{
  return 1;
}



/* EngineProfiler::is_class_ptr(void*) const */

uint __thiscall EngineProfiler::is_class_ptr(EngineProfiler *this,void *param_1)

{
  return (uint)CONCAT71(0x10cc,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10cc,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10cc,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EngineProfiler::_getv(StringName const&, Variant&) const */

undefined8 EngineProfiler::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EngineProfiler::_setv(StringName const&, Variant const&) */

undefined8 EngineProfiler::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EngineProfiler::_validate_propertyv(PropertyInfo&) const */

void EngineProfiler::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EngineProfiler::_property_can_revertv(StringName const&) const */

undefined8 EngineProfiler::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EngineProfiler::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EngineProfiler::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EngineProfiler::_notificationv(int, bool) */

void EngineProfiler::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RemoteDebugger::PerformanceProfiler::toggle(bool, Array const&) */

void RemoteDebugger::PerformanceProfiler::toggle(bool param_1,Array *param_2)

{
  return;
}



/* RemoteDebugger::PerformanceProfiler::add(Array const&) */

void RemoteDebugger::PerformanceProfiler::add(Array *param_1)

{
  return;
}



/* RemoteDebugger::PerformanceProfiler::~PerformanceProfiler() */

void __thiscall RemoteDebugger::PerformanceProfiler::~PerformanceProfiler(PerformanceProfiler *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ca90;
  EngineProfiler::~EngineProfiler((EngineProfiler *)this);
  return;
}



/* RemoteDebugger::PerformanceProfiler::~PerformanceProfiler() */

void __thiscall RemoteDebugger::PerformanceProfiler::~PerformanceProfiler(PerformanceProfiler *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ca90;
  EngineProfiler::~EngineProfiler((EngineProfiler *)this);
  operator_delete(this,0x1e8);
  return;
}



/* EngineProfiler::_get_class_namev() const */

undefined8 * EngineProfiler::_get_class_namev(void)

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
LAB_00107243:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107243;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EngineProfiler");
      goto LAB_001072ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EngineProfiler");
LAB_001072ae:
  return &_get_class_namev()::_class_name_static;
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



/* EngineProfiler::get_class() const */

void EngineProfiler::get_class(void)

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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineProfiler::_initialize_classv() */

void EngineProfiler::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_001077bb;
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
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 == 0) {
LAB_001078ca:
      if ((code *)PTR__bind_methods_0010f018 != RefCounted::_bind_methods) {
LAB_001078da:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001078ca;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_0010f018 != RefCounted::_bind_methods) goto LAB_001078da;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "EngineProfiler";
  local_70 = 0;
  local_50 = 0xe;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
  ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
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
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
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
  if ((code *)PTR__bind_methods_0010f010 != RefCounted::_bind_methods) {
    EngineProfiler::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_001077bb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EngineProfiler::is_class(String const&) const */

undefined8 __thiscall EngineProfiler::is_class(EngineProfiler *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001079bf;
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
LAB_001079bf:
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
    if (cVar6 != '\0') goto LAB_00107a73;
  }
  cVar6 = String::operator==(param_1,"EngineProfiler");
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
              if (lVar5 == 0) goto LAB_00107b4b;
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
LAB_00107b4b:
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
      if (cVar6 != '\0') goto LAB_00107a73;
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
                if (lVar5 == 0) goto LAB_00107c2b;
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
LAB_00107c2b:
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
        if (cVar6 != '\0') goto LAB_00107a73;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00107cd4;
    }
  }
LAB_00107a73:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00107cd4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
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
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RefCounted";
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
LAB_001087d8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001087d8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001087f6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001087f6:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
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
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EngineProfiler::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EngineProfiler::_get_property_listv(EngineProfiler *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
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
  local_78 = "EngineProfiler";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EngineProfiler";
  local_98 = 0;
  local_70 = 0xe;
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
LAB_00108bd8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108bd8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00108bf5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00108bf5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
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
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EngineProfiler",false);
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



/* List<ScriptLanguage::StackInfo, DefaultAllocator>::~List() */

void __thiscall
List<ScriptLanguage::StackInfo,DefaultAllocator>::~List
          (List<ScriptLanguage::StackInfo,DefaultAllocator> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    plVar2 = (long *)*plVar5;
    if (plVar2 == (long *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar2[5] == plVar5) {
      lVar4 = plVar2[3];
      lVar3 = plVar2[4];
      *plVar5 = lVar4;
      if (plVar2 == (long *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x18) = lVar4;
        lVar4 = plVar2[3];
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x20) = lVar3;
      }
      if (plVar2[1] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[1] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = plVar2[1];
          plVar2[1] = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(plVar2,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    plVar2 = (long *)*plVar5;
    if (plVar2 == (long *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar2[3] == plVar5) {
      lVar4 = plVar2[1];
      lVar3 = plVar2[2];
      *plVar5 = lVar4;
      if (plVar2 == (long *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = lVar4;
        lVar4 = plVar2[1];
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(plVar2,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00109348) */
/* WARNING: Removing unreachable block (ram,0x00109478) */
/* WARNING: Removing unreachable block (ram,0x00109640) */
/* WARNING: Removing unreachable block (ram,0x00109484) */
/* WARNING: Removing unreachable block (ram,0x0010948e) */
/* WARNING: Removing unreachable block (ram,0x00109620) */
/* WARNING: Removing unreachable block (ram,0x0010949a) */
/* WARNING: Removing unreachable block (ram,0x001094a4) */
/* WARNING: Removing unreachable block (ram,0x00109600) */
/* WARNING: Removing unreachable block (ram,0x001094b0) */
/* WARNING: Removing unreachable block (ram,0x001094ba) */
/* WARNING: Removing unreachable block (ram,0x001095e0) */
/* WARNING: Removing unreachable block (ram,0x001094c6) */
/* WARNING: Removing unreachable block (ram,0x001094d0) */
/* WARNING: Removing unreachable block (ram,0x001095c0) */
/* WARNING: Removing unreachable block (ram,0x001094dc) */
/* WARNING: Removing unreachable block (ram,0x001094e6) */
/* WARNING: Removing unreachable block (ram,0x001095a0) */
/* WARNING: Removing unreachable block (ram,0x001094f2) */
/* WARNING: Removing unreachable block (ram,0x001094fc) */
/* WARNING: Removing unreachable block (ram,0x00109580) */
/* WARNING: Removing unreachable block (ram,0x00109504) */
/* WARNING: Removing unreachable block (ram,0x0010951a) */
/* WARNING: Removing unreachable block (ram,0x00109526) */
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



/* RemoteDebugger::PerformanceProfiler::tick(double, double, double, double) */

double RemoteDebugger::PerformanceProfiler::tick
                 (double param_1,double param_2,double param_3,double param_4)

{
  char cVar1;
  long *plVar2;
  bool *pbVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  Variant *pVVar8;
  StringName *pSVar9;
  int iVar10;
  long in_RDI;
  int iVar11;
  long in_FS_OFFSET;
  double extraout_XMM0_Qa;
  Variant local_118 [8];
  Array local_110 [8];
  long local_108;
  long local_100;
  int local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  StringName *local_e8 [2];
  StringName *local_d8;
  undefined1 local_d0 [16];
  int local_b8 [2];
  undefined1 local_b0 [16];
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RDI + 0x1d0) != 0) {
    OS::get_singleton();
    lVar6 = OS::get_ticks_msec();
    param_1 = extraout_XMM0_Qa;
    if (999 < (ulong)(lVar6 - *(int *)(in_RDI + 0x1d8))) {
      *(int *)(in_RDI + 0x1d8) = (int)lVar6;
      plVar2 = *(long **)(in_RDI + 0x1d0);
      StringName::StringName((StringName *)&local_100,"get_custom_monitor_names",false);
      local_90 = (undefined1  [16])0x0;
      local_98 = 0;
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      (**(code **)(*plVar2 + 0x68))
                ((StringName *)&local_78,plVar2,(StringName *)&local_100,0,0,(StringName *)&local_f8
                );
      if (local_f8 == 0) {
        Variant::Variant((Variant *)local_b8,(Variant *)&local_78);
      }
      else {
        local_b0 = (undefined1  [16])0x0;
        local_b8[0] = 0;
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_98] != '\0') {
        Variant::_clear_internal();
      }
      Variant::operator_cast_to_Array(local_118);
      if (Variant::needs_deinit[local_b8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_100 != 0)) {
        StringName::unref();
      }
      plVar2 = *(long **)(in_RDI + 0x1d0);
      StringName::StringName((StringName *)&local_100,"get_monitor_modification_time",false);
      local_90 = (undefined1  [16])0x0;
      local_98 = 0;
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      (**(code **)(*plVar2 + 0x68))
                ((StringName *)&local_78,plVar2,(StringName *)&local_100,0,0,(StringName *)&local_f8
                );
      if (local_f8 == 0) {
        Variant::Variant((Variant *)local_b8,(Variant *)&local_78);
      }
      else {
        local_b8[0] = 0;
        local_b0 = (undefined1  [16])0x0;
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_98] != '\0') {
        Variant::_clear_internal();
      }
      uVar7 = Variant::operator_cast_to_unsigned_long((Variant *)local_b8);
      if (Variant::needs_deinit[local_b8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_100 != 0)) {
        StringName::unref();
      }
      if (*(ulong *)(in_RDI + 0x1e0) < uVar7) {
        *(ulong *)(in_RDI + 0x1e0) = uVar7;
        plVar2 = EngineDebugger::singleton;
        pcVar4 = *(code **)(*EngineDebugger::singleton + 8);
        local_100 = 0;
        local_f8 = 0x10969a;
        uStack_f4 = 0;
        uStack_f0 = 0x19;
        uStack_ec = 0;
        String::parse_latin1((StrRange *)&local_100);
        (*pcVar4)(plVar2,(StringName *)&local_100,local_118);
        lVar6 = local_100;
        if (local_100 != 0) {
          LOCK();
          plVar2 = (long *)(local_100 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_100 = 0;
            Memory::free_static((void *)(lVar6 + -0x10),false);
          }
        }
      }
      pbVar3 = *(bool **)(in_RDI + 0x1d0);
      StringName::StringName((StringName *)&local_f8,"MONITOR_MAX",false);
      Object::get((StringName *)&local_78,pbVar3);
      iVar5 = Variant::operator_cast_to_int((Variant *)&local_78);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (CONCAT44(uStack_f4,local_f8) != 0)) {
        StringName::unref();
      }
      Array::Array(local_110);
      Array::size();
      iVar10 = (int)local_110;
      Array::resize(iVar10);
      if (0 < iVar5) {
        iVar11 = 0;
        do {
          plVar2 = *(long **)(in_RDI + 0x1d0);
          StringName::StringName((StringName *)&local_100,"get_monitor",false);
          Variant::Variant((Variant *)&local_78,iVar11);
          local_58 = (undefined1  [16])0x0;
          local_60 = 0;
          local_f8 = 0;
          uStack_f4 = 0;
          uStack_f0 = 0;
          local_d8 = (StringName *)&local_78;
          (**(code **)(*plVar2 + 0x68))
                    ((Variant *)&local_98,plVar2,(StringName *)&local_100,&local_d8,1,
                     (StringName *)&local_f8);
          if (local_f8 == 0) {
            Variant::Variant((Variant *)local_b8,(Variant *)&local_98);
            if (Variant::needs_deinit[(int)local_98] == '\0') goto LAB_00109aa5;
LAB_00109bd9:
            Variant::_clear_internal();
            if (Variant::needs_deinit[(int)local_60] == '\0') goto LAB_00109ab7;
LAB_00109bf8:
            Variant::_clear_internal();
            cVar1 = Variant::needs_deinit[(int)local_78];
          }
          else {
            local_b0 = (undefined1  [16])0x0;
            local_b8[0] = 0;
            if (Variant::needs_deinit[(int)local_98] != '\0') goto LAB_00109bd9;
LAB_00109aa5:
            if (Variant::needs_deinit[(int)local_60] != '\0') goto LAB_00109bf8;
LAB_00109ab7:
            cVar1 = Variant::needs_deinit[(int)local_78];
          }
          if (cVar1 != '\0') {
            Variant::_clear_internal();
          }
          pVVar8 = (Variant *)Array::operator[](iVar10);
          if (pVVar8 == (Variant *)local_b8) {
            if (Variant::needs_deinit[local_b8[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          else {
            if (Variant::needs_deinit[*(int *)pVVar8] != '\0') {
              Variant::_clear_internal();
            }
            *(int *)pVVar8 = 0;
            *(int *)pVVar8 = local_b8[0];
            *(undefined8 *)(pVVar8 + 8) = local_b0._0_8_;
            *(undefined8 *)(pVVar8 + 0x10) = local_b0._8_8_;
          }
          if ((StringName::configured != '\0') && (local_100 != 0)) {
            StringName::unref();
          }
          iVar11 = iVar11 + 1;
        } while (iVar5 != iVar11);
      }
      for (iVar5 = 0; iVar11 = Array::size(), plVar2 = EngineDebugger::singleton, iVar5 < iVar11;
          iVar5 = iVar5 + 1) {
        plVar2 = *(long **)(in_RDI + 0x1d0);
        iVar11 = (int)local_118;
        pVVar8 = (Variant *)Array::operator[](iVar11);
        Variant::Variant((Variant *)local_b8,pVVar8);
        StringName::StringName((StringName *)&local_100,"get_custom_monitor",false);
        Variant::Variant((Variant *)&local_78,(Variant *)local_b8);
        local_58 = (undefined1  [16])0x0;
        local_60 = 0;
        local_f8 = 0;
        uStack_f4 = 0;
        uStack_f0 = 0;
        local_e8[0] = (StringName *)&local_78;
        (**(code **)(*plVar2 + 0x68))
                  ((Variant *)&local_98,plVar2,(StringName *)&local_100,local_e8,1,
                   (StringName *)&local_f8);
        if (local_f8 == 0) {
          Variant::Variant((Variant *)&local_d8,(Variant *)&local_98);
          if (Variant::needs_deinit[(int)local_98] == '\0') goto LAB_00109e95;
LAB_00109f6a:
          Variant::_clear_internal();
          if (Variant::needs_deinit[(int)local_60] == '\0') goto LAB_00109ea7;
LAB_00109f88:
          Variant::_clear_internal();
          cVar1 = Variant::needs_deinit[(int)local_78];
        }
        else {
          local_d0 = (undefined1  [16])0x0;
          local_d8 = (StringName *)((ulong)local_d8 & 0xffffffff00000000);
          if (Variant::needs_deinit[(int)local_98] != '\0') goto LAB_00109f6a;
LAB_00109e95:
          if (Variant::needs_deinit[(int)local_60] != '\0') goto LAB_00109f88;
LAB_00109ea7:
          cVar1 = Variant::needs_deinit[(int)local_78];
        }
        if (cVar1 != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_100 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_b8[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((int)local_d8 - 2U < 2) {
          pVVar8 = (Variant *)Array::operator[](iVar10);
          Variant::operator=(pVVar8,(Variant *)&local_d8);
          cVar1 = Variant::needs_deinit[(int)local_d8];
        }
        else {
          Array::operator[](iVar11);
          Variant::operator_cast_to_String((Variant *)&local_108);
          local_f8 = 0x109700;
          uStack_f4 = 0;
          local_100 = 0;
          uStack_f0 = 0x2d;
          uStack_ec = 0;
          String::parse_latin1((StrRange *)&local_100);
          vformat<String>((StringName *)&local_f8,(StringName *)&local_100,(Variant *)&local_108);
          _err_print_error(&_LC43,"core/debugger/remote_debugger.cpp",0x52,(StringName *)&local_f8,0
                           ,0);
          if (CONCAT44(uStack_f4,local_f8) != 0) {
            LOCK();
            plVar2 = (long *)(CONCAT44(uStack_f4,local_f8) + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar6 = CONCAT44(uStack_f4,local_f8);
              local_f8 = 0;
              uStack_f4 = 0;
              Memory::free_static((void *)(lVar6 + -0x10),false);
            }
          }
          lVar6 = local_100;
          if (local_100 != 0) {
            LOCK();
            plVar2 = (long *)(local_100 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_100 = 0;
              Memory::free_static((void *)(lVar6 + -0x10),false);
            }
          }
          lVar6 = local_108;
          if (local_108 != 0) {
            LOCK();
            plVar2 = (long *)(local_108 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_108 = 0;
              Memory::free_static((void *)(lVar6 + -0x10),false);
            }
          }
          local_78 = 0;
          local_70 = (undefined1  [16])0x0;
          pSVar9 = (StringName *)Array::operator[](iVar10);
          if (pSVar9 == (StringName *)&local_78) {
            if (Variant::needs_deinit[(int)local_78] != '\0') {
              Variant::_clear_internal();
            }
          }
          else {
            if (Variant::needs_deinit[*(int *)pSVar9] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pSVar9 = 0;
            *(int *)pSVar9 = (int)local_78;
            *(undefined8 *)(pSVar9 + 8) = local_70._0_8_;
            *(undefined8 *)(pSVar9 + 0x10) = local_70._8_8_;
          }
          cVar1 = Variant::needs_deinit[(int)local_d8];
        }
        if (cVar1 != '\0') {
          Variant::_clear_internal();
        }
      }
      pcVar4 = *(code **)(*EngineDebugger::singleton + 8);
      local_100 = 0;
      local_f8 = 0x1096e4;
      uStack_f4 = 0;
      uStack_f0 = 0x19;
      uStack_ec = 0;
      String::parse_latin1((StrRange *)&local_100);
      (*pcVar4)(plVar2,(StringName *)&local_100,local_110);
      lVar6 = local_100;
      if (local_100 != 0) {
        LOCK();
        plVar2 = (long *)(local_100 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_100 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      Array::~Array(local_110);
      param_1 = (double)Array::~Array((Array *)local_118);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* List<RemoteDebugger::Message, DefaultAllocator>::~List() */

void __thiscall
List<RemoteDebugger::Message,DefaultAllocator>::~List
          (List<RemoteDebugger::Message,DefaultAllocator> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    plVar2 = (long *)*plVar5;
    if (plVar2 == (long *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar2[4] == plVar5) {
      lVar4 = plVar2[2];
      lVar3 = plVar2[3];
      *plVar5 = lVar4;
      if (plVar2 == (long *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar4;
        lVar4 = plVar2[2];
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x18) = lVar3;
      }
      Array::~Array((Array *)(plVar2 + 1));
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(plVar2,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* List<Variant, DefaultAllocator>::~List() */

void __thiscall List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  do {
    piVar1 = (int *)*puVar2;
    if (piVar1 == (int *)0x0) {
      if (*(int *)(puVar2 + 2) != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(undefined8 **)(piVar1 + 10) == puVar2) {
      *puVar2 = *(undefined8 *)(piVar1 + 6);
      if (piVar1 == (int *)puVar2[1]) {
        puVar2[1] = *(undefined8 *)(piVar1 + 8);
      }
      if (*(long *)(piVar1 + 8) != 0) {
        *(undefined8 *)(*(long *)(piVar1 + 8) + 0x18) = *(undefined8 *)(piVar1 + 6);
      }
      if (*(long *)(piVar1 + 6) != 0) {
        *(undefined8 *)(*(long *)(piVar1 + 6) + 0x20) = *(undefined8 *)(piVar1 + 8);
      }
      if (Variant::needs_deinit[*piVar1] != '\0') {
        Variant::_clear_internal();
      }
      Memory::free_static(piVar1,false);
      *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar2 = *(undefined8 **)this;
  } while (*(int *)(puVar2 + 2) != 0);
  Memory::free_static(puVar2,false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010a5d0) */
/* WARNING: Removing unreachable block (ram,0x0010a700) */
/* WARNING: Removing unreachable block (ram,0x0010a879) */
/* WARNING: Removing unreachable block (ram,0x0010a70c) */
/* WARNING: Removing unreachable block (ram,0x0010a716) */
/* WARNING: Removing unreachable block (ram,0x0010a85b) */
/* WARNING: Removing unreachable block (ram,0x0010a722) */
/* WARNING: Removing unreachable block (ram,0x0010a72c) */
/* WARNING: Removing unreachable block (ram,0x0010a83d) */
/* WARNING: Removing unreachable block (ram,0x0010a738) */
/* WARNING: Removing unreachable block (ram,0x0010a742) */
/* WARNING: Removing unreachable block (ram,0x0010a81f) */
/* WARNING: Removing unreachable block (ram,0x0010a74e) */
/* WARNING: Removing unreachable block (ram,0x0010a758) */
/* WARNING: Removing unreachable block (ram,0x0010a801) */
/* WARNING: Removing unreachable block (ram,0x0010a764) */
/* WARNING: Removing unreachable block (ram,0x0010a76e) */
/* WARNING: Removing unreachable block (ram,0x0010a7e3) */
/* WARNING: Removing unreachable block (ram,0x0010a776) */
/* WARNING: Removing unreachable block (ram,0x0010a780) */
/* WARNING: Removing unreachable block (ram,0x0010a7c8) */
/* WARNING: Removing unreachable block (ram,0x0010a788) */
/* WARNING: Removing unreachable block (ram,0x0010a79e) */
/* WARNING: Removing unreachable block (ram,0x0010a7aa) */
/* String vformat<String, char const*>(String const&, String const, char const* const) */

undefined8 *
vformat<String,char_const*>(undefined8 *param_1,bool *param_2,String *param_3,char *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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
LAB_0010ad30:
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
  if (lVar10 == 0) goto LAB_0010ad30;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_0010ac09:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_0010ac09;
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
    goto LAB_0010ad86;
  }
  if (lVar10 == lVar7) {
LAB_0010acaf:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_0010ad86:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010ac9a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010acaf;
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
LAB_0010ac9a:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<ScriptLanguage::StackInfo>::_unref() */

void __thiscall CowData<ScriptLanguage::StackInfo>::_unref(CowData<ScriptLanguage::StackInfo> *this)

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
          if (plVar6[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          plVar6 = plVar6 + 3;
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



/* CowData<ScriptLanguage::StackInfo>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<ScriptLanguage::StackInfo>::_copy_on_write(CowData<ScriptLanguage::StackInfo> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  CowData<char32_t> *this_00;
  ulong uVar4;
  CowData *pCVar5;
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
  uVar4 = 0x10;
  if (lVar1 * 0x18 != 0) {
    uVar4 = lVar1 * 0x18 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar3 = 1;
    puVar3[1] = lVar1;
    this_00 = (CowData<char32_t> *)(puVar3 + 2);
    if (lVar1 != 0) {
      do {
        pCVar5 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar3));
        *(undefined8 *)this_00 = 0;
        if (*(long *)pCVar5 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar5);
        }
        *(undefined8 *)(this_00 + 8) = 0;
        if (*(long *)(pCVar5 + 8) != 0) {
          CowData<char32_t>::_ref(this_00 + 8,pCVar5 + 8);
        }
        lVar6 = lVar6 + 1;
        *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(pCVar5 + 0x10);
        this_00 = this_00 + 0x18;
      } while (lVar1 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar3 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* List<RemoteDebugger::Message,
   DefaultAllocator>::TEMPNAMEPLACEHOLDERVALUE(List<RemoteDebugger::Message, DefaultAllocator>
   const&) */

void __thiscall
List<RemoteDebugger::Message,DefaultAllocator>::operator=
          (List<RemoteDebugger::Message,DefaultAllocator> *this,List *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  CowData<char32_t> *this_00;
  CowData *pCVar6;
  long *plVar7;
  
  plVar7 = *(long **)this;
  if (plVar7 != (long *)0x0) {
    do {
      plVar2 = (long *)*plVar7;
      if (plVar2 == (long *)0x0) goto LAB_0010b0a0;
      if ((long *)plVar2[4] == plVar7) {
        lVar4 = plVar2[2];
        lVar3 = plVar2[3];
        *plVar7 = lVar4;
        if (plVar2 == (long *)plVar7[1]) {
          plVar7[1] = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x10) = lVar4;
          lVar4 = plVar2[2];
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x18) = lVar3;
        }
        Array::~Array((Array *)(plVar2 + 1));
        if (*plVar2 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar4 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        Memory::free_static(plVar2,false);
        *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar7 = *(long **)this;
    } while ((int)plVar7[2] != 0);
    Memory::free_static(plVar7,false);
    *(undefined8 *)this = 0;
  }
  plVar7 = (long *)0x0;
LAB_0010b0a0:
  if ((*(long **)param_1 != (long *)0x0) &&
     (pCVar6 = (CowData *)**(long **)param_1, pCVar6 != (CowData *)0x0)) {
    if (plVar7 == (long *)0x0) {
      pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])this = pauVar5;
      *(undefined4 *)pauVar5[1] = 0;
      *pauVar5 = (undefined1  [16])0x0;
    }
    do {
      while( true ) {
        this_00 = (CowData<char32_t> *)operator_new(0x28,DefaultAllocator::alloc);
        *(undefined8 *)this_00 = 0;
        Array::Array((Array *)(this_00 + 8));
        lVar4 = *(long *)pCVar6;
        *(undefined8 *)(this_00 + 0x20) = 0;
        *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
        if (*(long *)this_00 != lVar4) {
          CowData<char32_t>::_ref(this_00,pCVar6);
        }
        Array::operator=((Array *)(this_00 + 8),(Array *)(pCVar6 + 8));
        plVar7 = *(long **)this;
        lVar4 = plVar7[1];
        *(undefined8 *)(this_00 + 0x10) = 0;
        *(long **)(this_00 + 0x20) = plVar7;
        *(long *)(this_00 + 0x18) = lVar4;
        if (lVar4 != 0) {
          *(CowData<char32_t> **)(lVar4 + 0x10) = this_00;
        }
        plVar7[1] = (long)this_00;
        if (*plVar7 == 0) break;
        pCVar6 = *(CowData **)(pCVar6 + 0x10);
        *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
        if (pCVar6 == (CowData *)0x0) {
          return;
        }
      }
      pCVar6 = *(CowData **)(pCVar6 + 0x10);
      *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
      *plVar7 = (long)this_00;
    } while (pCVar6 != (CowData *)0x0);
  }
  return;
}



/* HashMap<unsigned long, List<RemoteDebugger::Message, DefaultAllocator>, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned long>, DefaultTypedAllocator<HashMapElement<unsigned long,
   List<RemoteDebugger::Message, DefaultAllocator> > > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>>>>
::_resize_and_rehash
          (HashMap<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)param_1 * 4);
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<unsigned long, List<RemoteDebugger::Message, DefaultAllocator>, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned long>, DefaultTypedAllocator<HashMapElement<unsigned long,
   List<RemoteDebugger::Message, DefaultAllocator> > > >::insert(unsigned long const&,
   List<RemoteDebugger::Message, DefaultAllocator> const&, bool) */

ulong * HashMap<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>>>>
        ::insert(ulong *param_1,List *param_2,bool param_3)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  void *__s;
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
  uint uVar22;
  ulong uVar23;
  undefined1 (*pauVar24) [16];
  CowData<char32_t> *pCVar25;
  undefined8 uVar26;
  void *__s_00;
  List *in_RCX;
  int iVar27;
  undefined7 in_register_00000011;
  long *plVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  CowData *pCVar32;
  uint uVar33;
  char in_R8B;
  ulong uVar34;
  uint uVar35;
  long lVar36;
  undefined1 (*pauVar37) [16];
  long in_FS_OFFSET;
  undefined1 (*pauStack_90) [16];
  undefined1 (*local_50 [2]) [16];
  long local_40;
  
  plVar28 = (long *)CONCAT71(in_register_00000011,param_3);
  __s_00 = *(void **)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (__s_00 == (void *)0x0) {
    uVar34 = (ulong)uVar2;
    uVar23 = uVar34 * 4;
    uVar31 = uVar34 * 8;
    uVar26 = Memory::alloc_static(uVar23,false);
    *(undefined8 *)(param_2 + 0x10) = uVar26;
    __s_00 = (void *)Memory::alloc_static(uVar31,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar2 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar31)) && (__s_00 < (void *)((long)__s + uVar23))) {
        uVar23 = 0;
        do {
          *(undefined4 *)((long)__s + uVar23 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar23 * 8) = 0;
          uVar23 = uVar23 + 1;
        } while (uVar34 != uVar23);
        goto LAB_0010b556;
      }
      memset(__s,0,uVar23);
      memset(__s_00,0,uVar31);
      iVar27 = *(int *)(param_2 + 0x2c);
      lVar36 = *plVar28;
      goto LAB_0010b561;
    }
    iVar27 = *(int *)(param_2 + 0x2c);
    lVar36 = *plVar28;
    if (__s_00 != (void *)0x0) goto LAB_0010b561;
  }
  else {
LAB_0010b556:
    iVar27 = *(int *)(param_2 + 0x2c);
    lVar36 = *plVar28;
LAB_0010b561:
    if (iVar27 != 0) {
      uVar34 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar23 = lVar36 * 0x3ffff - 1;
      uVar23 = (uVar23 ^ uVar23 >> 0x1f) * 0x15;
      uVar23 = (uVar23 ^ uVar23 >> 0xb) * 0x41;
      uVar23 = uVar23 >> 0x16 ^ uVar23;
      uVar31 = uVar23 & 0xffffffff;
      if ((int)uVar23 == 0) {
        uVar31 = 1;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar31 * lVar3;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar34;
      lVar29 = SUB168(auVar6 * auVar14,8);
      uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar29 * 4);
      uVar22 = SUB164(auVar6 * auVar14,8);
      if (uVar33 != 0) {
        uVar35 = 0;
        do {
          if ((uVar33 == (uint)uVar31) &&
             (lVar36 == *(long *)(*(long *)((long)__s_00 + lVar29 * 8) + 0x10))) {
            List<RemoteDebugger::Message,DefaultAllocator>::operator=
                      ((List<RemoteDebugger::Message,DefaultAllocator> *)
                       (*(long *)((long)__s_00 + (ulong)uVar22 * 8) + 0x18),in_RCX);
            pauStack_90 = *(undefined1 (**) [16])(*(long *)(param_2 + 8) + (ulong)uVar22 * 8);
            goto LAB_0010ba46;
          }
          uVar35 = uVar35 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar22 + 1) * lVar3;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar34;
          lVar29 = SUB168(auVar7 * auVar15,8);
          uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar29 * 4);
          uVar22 = SUB164(auVar7 * auVar15,8);
        } while ((uVar33 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar33 * lVar3, auVar16._8_8_ = 0,
                auVar16._0_8_ = uVar34, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(param_2 + 0x28) * 4) + uVar22) -
                                      SUB164(auVar8 * auVar16,8)) * lVar3, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar34, uVar35 <= SUB164(auVar9 * auVar17,8)));
      }
    }
  }
  if ((float)uVar2 * __LC57 < (float)(iVar27 + 1)) {
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      pauStack_90 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010ba46;
    }
    _resize_and_rehash((HashMap<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  local_50[0] = (undefined1 (*) [16])0x0;
  lVar36 = *plVar28;
  if ((*(long **)in_RCX == (long *)0x0) ||
     (pCVar32 = (CowData *)**(long **)in_RCX, pCVar32 == (CowData *)0x0)) {
    pauStack_90 = (undefined1 (*) [16])operator_new(0x20,"");
    *(long *)pauStack_90[1] = lVar36;
    *(undefined8 *)(pauStack_90[1] + 8) = 0;
    *pauStack_90 = (undefined1  [16])0x0;
  }
  else {
    pauVar24 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)pauVar24[1] = 0;
    *pauVar24 = (undefined1  [16])0x0;
    local_50[0] = pauVar24;
    do {
      while( true ) {
        pCVar25 = (CowData<char32_t> *)operator_new(0x28,DefaultAllocator::alloc);
        *(undefined8 *)pCVar25 = 0;
        Array::Array((Array *)(pCVar25 + 8));
        *(undefined8 *)(pCVar25 + 0x20) = 0;
        lVar3 = *(long *)pCVar32;
        *(undefined1 (*) [16])(pCVar25 + 0x10) = (undefined1  [16])0x0;
        if (*(long *)pCVar25 != lVar3) {
          CowData<char32_t>::_ref(pCVar25,pCVar32);
        }
        Array::operator=((Array *)(pCVar25 + 8),(Array *)(pCVar32 + 8));
        lVar3 = *(long *)(*pauVar24 + 8);
        *(undefined1 (**) [16])(pCVar25 + 0x20) = pauVar24;
        *(undefined8 *)(pCVar25 + 0x10) = 0;
        *(long *)(pCVar25 + 0x18) = lVar3;
        if (lVar3 != 0) {
          *(CowData<char32_t> **)(lVar3 + 0x10) = pCVar25;
        }
        lVar3 = *(long *)*pauVar24;
        *(CowData<char32_t> **)(*pauVar24 + 8) = pCVar25;
        if (lVar3 != 0) break;
        pCVar32 = *(CowData **)(pCVar32 + 0x10);
        *(int *)pauVar24[1] = *(int *)pauVar24[1] + 1;
        *(CowData<char32_t> **)*pauVar24 = pCVar25;
        if (pCVar32 == (CowData *)0x0) goto LAB_0010b7d6;
      }
      pCVar32 = *(CowData **)(pCVar32 + 0x10);
      *(int *)pauVar24[1] = *(int *)pauVar24[1] + 1;
    } while (pCVar32 != (CowData *)0x0);
LAB_0010b7d6:
    pauStack_90 = (undefined1 (*) [16])operator_new(0x20,"");
    pCVar32 = *(CowData **)*pauVar24;
    *(long *)pauStack_90[1] = lVar36;
    *(undefined8 *)(pauStack_90[1] + 8) = 0;
    *pauStack_90 = (undefined1  [16])0x0;
    if (pCVar32 != (CowData *)0x0) {
      pauVar24 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])(pauStack_90[1] + 8) = pauVar24;
      *(undefined4 *)pauVar24[1] = 0;
      *pauVar24 = (undefined1  [16])0x0;
      do {
        while( true ) {
          pCVar25 = (CowData<char32_t> *)operator_new(0x28,DefaultAllocator::alloc);
          *(undefined8 *)pCVar25 = 0;
          Array::Array((Array *)(pCVar25 + 8));
          lVar36 = *(long *)pCVar32;
          *(undefined8 *)(pCVar25 + 0x20) = 0;
          *(undefined1 (*) [16])(pCVar25 + 0x10) = (undefined1  [16])0x0;
          if (*(long *)pCVar25 != lVar36) {
            CowData<char32_t>::_ref(pCVar25,pCVar32);
          }
          Array::operator=((Array *)(pCVar25 + 8),(Array *)(pCVar32 + 8));
          plVar4 = *(long **)(pauStack_90[1] + 8);
          lVar36 = plVar4[1];
          *(undefined8 *)(pCVar25 + 0x10) = 0;
          *(long **)(pCVar25 + 0x20) = plVar4;
          *(long *)(pCVar25 + 0x18) = lVar36;
          if (lVar36 != 0) {
            *(CowData<char32_t> **)(lVar36 + 0x10) = pCVar25;
          }
          plVar4[1] = (long)pCVar25;
          if (*plVar4 != 0) break;
          pCVar32 = *(CowData **)(pCVar32 + 0x10);
          *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
          *plVar4 = (long)pCVar25;
          if (pCVar32 == (CowData *)0x0) goto LAB_0010b8e9;
        }
        pCVar32 = *(CowData **)(pCVar32 + 0x10);
        *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
      } while (pCVar32 != (CowData *)0x0);
    }
  }
LAB_0010b8e9:
  List<RemoteDebugger::Message,DefaultAllocator>::~List
            ((List<RemoteDebugger::Message,DefaultAllocator> *)local_50);
  puVar5 = *(undefined8 **)(param_2 + 0x20);
  if (puVar5 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(param_2 + 0x18) = pauStack_90;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauStack_90;
  }
  else if (in_R8B == '\0') {
    *puVar5 = pauStack_90;
    *(undefined8 **)(*pauStack_90 + 8) = puVar5;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauStack_90;
  }
  else {
    lVar36 = *(long *)(param_2 + 0x18);
    *(undefined1 (**) [16])(lVar36 + 8) = pauStack_90;
    *(long *)*pauStack_90 = lVar36;
    *(undefined1 (**) [16])(param_2 + 0x18) = pauStack_90;
  }
  lVar36 = *(long *)(param_2 + 0x10);
  uVar23 = *plVar28 * 0x3ffff - 1;
  uVar23 = (uVar23 ^ uVar23 >> 0x1f) * 0x15;
  uVar23 = (uVar23 ^ uVar23 >> 0xb) * 0x41;
  uVar23 = uVar23 >> 0x16 ^ uVar23;
  uVar31 = uVar23 & 0xffffffff;
  if ((int)uVar23 == 0) {
    uVar31 = 1;
  }
  uVar35 = 0;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar22 = (uint)uVar31;
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar23 = CONCAT44(0,uVar2);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar31 * lVar3;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar23;
  lVar30 = SUB168(auVar10 * auVar18,8);
  lVar29 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar36 + lVar30 * 4);
  iVar27 = SUB164(auVar10 * auVar18,8);
  uVar33 = *puVar1;
  pauVar24 = pauStack_90;
  while (uVar33 != 0) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)uVar33 * lVar3;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar23;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)((uVar2 + iVar27) - SUB164(auVar11 * auVar19,8)) * lVar3;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar23;
    uVar22 = SUB164(auVar12 * auVar20,8);
    pauVar37 = pauVar24;
    if (uVar22 < uVar35) {
      *puVar1 = (uint)uVar31;
      uVar31 = (ulong)uVar33;
      puVar5 = (undefined8 *)(lVar29 + lVar30 * 8);
      pauVar37 = (undefined1 (*) [16])*puVar5;
      *puVar5 = pauVar24;
      uVar35 = uVar22;
    }
    uVar22 = (uint)uVar31;
    uVar35 = uVar35 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(iVar27 + 1) * lVar3;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar23;
    lVar30 = SUB168(auVar13 * auVar21,8);
    puVar1 = (uint *)(lVar36 + lVar30 * 4);
    iVar27 = SUB164(auVar13 * auVar21,8);
    pauVar24 = pauVar37;
    uVar33 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar29 + lVar30 * 8) = pauVar24;
  *puVar1 = uVar22;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0010ba46:
  *param_1 = (ulong)pauStack_90;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<unsigned long, List<RemoteDebugger::Message, DefaultAllocator>, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned long>, DefaultTypedAllocator<HashMapElement<unsigned long,
   List<RemoteDebugger::Message, DefaultAllocator> > > >::operator[](unsigned long const&) */

undefined1 * __thiscall
HashMap<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>>>>
::operator[](HashMap<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,List<RemoteDebugger::Message,DefaultAllocator>>>>
             *this,ulong *param_1)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
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
  undefined1 (*pauVar28) [16];
  ulong uVar29;
  undefined1 (*pauVar30) [16];
  ulong uVar31;
  undefined8 uVar32;
  void *__s_00;
  uint uVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  long lVar42;
  ulong uVar43;
  ulong uVar44;
  undefined1 (*pauVar45) [16];
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined1 local_68 [16];
  ulong local_58;
  undefined8 local_50 [2];
  long local_40;
  
  __s_00 = *(void **)(this + 8);
  uVar31 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar36 = (ulong)*(uint *)(this + 0x28);
  uVar38 = *(uint *)(hash_table_size_primes + uVar36 * 4);
  uVar43 = CONCAT44(0,uVar38);
  if (__s_00 == (void *)0x0) {
    local_70 = 0;
    uVar31 = uVar43 * 4;
    uVar36 = uVar43 * 8;
    uVar32 = Memory::alloc_static(uVar31,false);
    *(undefined8 *)(this + 0x10) = uVar32;
    __s_00 = (void *)Memory::alloc_static(uVar36,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar36)) && (__s_00 < (void *)((long)__s + uVar31))) {
        uVar31 = 0;
        do {
          *(undefined4 *)((long)__s + uVar31 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar31 * 8) = 0;
          uVar31 = uVar31 + 1;
        } while (uVar43 != uVar31);
        uVar31 = *param_1;
        iVar37 = *(int *)(this + 0x2c);
      }
      else {
        memset(__s,0,uVar31);
        memset(__s_00,0,uVar36);
        uVar31 = *param_1;
        iVar37 = *(int *)(this + 0x2c);
      }
LAB_0010c106:
      if (iVar37 == 0) goto LAB_0010c06c;
      uVar36 = (ulong)*(uint *)(this + 0x28);
      lVar42 = *(long *)(this + 0x10);
      goto LAB_0010bd65;
    }
    uVar31 = *param_1;
    iVar37 = *(int *)(this + 0x2c);
    if (__s_00 != (void *)0x0) goto LAB_0010c106;
  }
  else {
    iVar37 = *(int *)(this + 0x2c);
    if (iVar37 == 0) {
      local_70 = 0;
LAB_0010c06c:
      iVar37 = 0;
    }
    else {
      lVar2 = *(long *)(hash_table_size_primes_inv + uVar36 * 8);
      uVar29 = uVar31 * 0x3ffff - 1;
      uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
      uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
      uVar29 = uVar29 >> 0x16 ^ uVar29;
      uVar41 = uVar29 & 0xffffffff;
      if ((int)uVar29 == 0) {
        uVar41 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar41 * lVar2;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar43;
      lVar34 = SUB168(auVar4 * auVar16,8);
      lVar42 = *(long *)(this + 0x10);
      uVar40 = SUB164(auVar4 * auVar16,8);
      uVar33 = *(uint *)(lVar42 + lVar34 * 4);
      if (uVar33 != 0) {
        uVar39 = 0;
        do {
          if ((uVar33 == (uint)uVar41) &&
             (uVar31 == *(ulong *)(*(long *)((long)__s_00 + lVar34 * 8) + 0x10))) {
            pauVar30 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar40 * 8);
            goto LAB_0010bd2b;
          }
          uVar39 = uVar39 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar40 + 1) * lVar2;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar43;
          lVar34 = SUB168(auVar5 * auVar17,8);
          uVar33 = *(uint *)(lVar42 + lVar34 * 4);
          uVar40 = SUB164(auVar5 * auVar17,8);
        } while ((uVar33 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar33 * lVar2, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar43, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar40 + uVar38) - SUB164(auVar6 * auVar18,8)) * lVar2,
                auVar19._8_8_ = 0, auVar19._0_8_ = uVar43, uVar39 <= SUB164(auVar7 * auVar19,8)));
      }
      local_70 = 0;
LAB_0010bd65:
      uVar41 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar36 * 4));
      lVar2 = *(long *)(hash_table_size_primes_inv + uVar36 * 8);
      uVar29 = uVar31 * 0x3ffff - 1;
      uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
      uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
      uVar29 = uVar29 >> 0x16 ^ uVar29;
      uVar44 = uVar29 & 0xffffffff;
      if ((int)uVar29 == 0) {
        uVar44 = 1;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar44 * lVar2;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar41;
      lVar34 = SUB168(auVar8 * auVar20,8);
      uVar38 = *(uint *)(lVar42 + lVar34 * 4);
      uVar33 = SUB164(auVar8 * auVar20,8);
      if (uVar38 != 0) {
        uVar40 = 0;
        do {
          if ((uVar38 == (uint)uVar44) &&
             (*(ulong *)(*(long *)((long)__s_00 + lVar34 * 8) + 0x10) == uVar31)) {
            List<RemoteDebugger::Message,DefaultAllocator>::operator=
                      ((List<RemoteDebugger::Message,DefaultAllocator> *)
                       (*(long *)((long)__s_00 + (ulong)uVar33 * 8) + 0x18),(List *)&local_70);
            pauVar30 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar33 * 8);
            goto LAB_0010c04c;
          }
          uVar40 = uVar40 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)(uVar33 + 1) * lVar2;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar41;
          lVar34 = SUB168(auVar9 * auVar21,8);
          uVar38 = *(uint *)(lVar42 + lVar34 * 4);
          uVar33 = SUB164(auVar9 * auVar21,8);
        } while ((uVar38 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar38 * lVar2, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar41, auVar11._8_8_ = 0,
                auVar11._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + uVar36 * 4) + uVar33) -
                            SUB164(auVar10 * auVar22,8)) * lVar2, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar41, uVar40 <= SUB164(auVar11 * auVar23,8)));
      }
    }
  }
  if ((float)uVar43 * __LC57 < (float)(iVar37 + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      pauVar30 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010c04c;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  local_68 = (undefined1  [16])0x0;
  local_50[0] = 0;
  uVar31 = *param_1;
  local_58 = uVar31;
  pauVar30 = (undefined1 (*) [16])operator_new(0x20,"");
  *(ulong *)pauVar30[1] = uVar31;
  *(undefined8 *)(pauVar30[1] + 8) = 0;
  *pauVar30 = (undefined1  [16])0x0;
  List<RemoteDebugger::Message,DefaultAllocator>::~List
            ((List<RemoteDebugger::Message,DefaultAllocator> *)local_50);
  puVar3 = *(undefined8 **)(this + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar30;
  }
  else {
    *puVar3 = pauVar30;
    *(undefined8 **)(*pauVar30 + 8) = puVar3;
  }
  uVar31 = *param_1;
  lVar42 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar30;
  uVar31 = uVar31 * 0x3ffff - 1;
  uVar31 = (uVar31 ^ uVar31 >> 0x1f) * 0x15;
  uVar31 = (uVar31 ^ uVar31 >> 0xb) * 0x41;
  uVar31 = uVar31 >> 0x16 ^ uVar31;
  uVar36 = uVar31 & 0xffffffff;
  if ((int)uVar31 == 0) {
    uVar36 = 1;
  }
  uVar39 = 0;
  lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar40 = (uint)uVar36;
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar31 = CONCAT44(0,uVar38);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar36 * lVar2;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar31;
  lVar35 = SUB168(auVar12 * auVar24,8);
  lVar34 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar42 + lVar35 * 4);
  iVar37 = SUB164(auVar12 * auVar24,8);
  uVar33 = *puVar1;
  pauVar28 = pauVar30;
  while (uVar33 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar33 * lVar2;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar31;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar38 + iVar37) - SUB164(auVar13 * auVar25,8)) * lVar2;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar31;
    uVar40 = SUB164(auVar14 * auVar26,8);
    pauVar45 = pauVar28;
    if (uVar40 < uVar39) {
      *puVar1 = (uint)uVar36;
      uVar36 = (ulong)uVar33;
      puVar3 = (undefined8 *)(lVar34 + lVar35 * 8);
      pauVar45 = (undefined1 (*) [16])*puVar3;
      *puVar3 = pauVar28;
      uVar39 = uVar40;
    }
    uVar40 = (uint)uVar36;
    uVar39 = uVar39 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar37 + 1) * lVar2;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar31;
    lVar35 = SUB168(auVar15 * auVar27,8);
    puVar1 = (uint *)(lVar42 + lVar35 * 4);
    iVar37 = SUB164(auVar15 * auVar27,8);
    pauVar28 = pauVar45;
    uVar33 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar34 + lVar35 * 8) = pauVar28;
  *puVar1 = uVar40;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010c04c:
  List<RemoteDebugger::Message,DefaultAllocator>::~List
            ((List<RemoteDebugger::Message,DefaultAllocator> *)&local_70);
LAB_0010bd2b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar30[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_0010c460:
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
  if (lVar8 == 0) goto LAB_0010c460;
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
        goto LAB_0010c371;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_0010c371:
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



/* CowData<ScriptLanguage::StackInfo>::_realloc(long) */

undefined8 __thiscall
CowData<ScriptLanguage::StackInfo>::_realloc(CowData<ScriptLanguage::StackInfo> *this,long param_1)

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
/* Vector<ScriptLanguage::StackInfo>::append_array(Vector<ScriptLanguage::StackInfo>) */

void __thiscall
Vector<ScriptLanguage::StackInfo>::append_array
          (Vector<ScriptLanguage::StackInfo> *this,long param_2)

{
  long *plVar1;
  CowData *pCVar2;
  long *plVar3;
  undefined1 (*pauVar4) [16];
  ulong uVar5;
  code *pcVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  CowData<char32_t> *this_00;
  CowData<ScriptLanguage::StackInfo> *local_50;
  long local_48;
  
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
  uVar5 = *(ulong *)(*(long *)(param_2 + 8) + -8);
  if (uVar5 == 0) {
    return;
  }
  if (*(long *)(this + 8) == 0) {
    if (-1 < (long)uVar5) {
      CowData<ScriptLanguage::StackInfo>::_copy_on_write
                ((CowData<ScriptLanguage::StackInfo> *)(this + 8));
      lVar15 = 0;
      local_48 = 0;
      uVar11 = uVar5;
      goto LAB_0010c601;
    }
    lVar15 = 0;
  }
  else {
    lVar15 = *(long *)(*(long *)(this + 8) + -8);
    uVar11 = uVar5 + lVar15;
    if (-1 < (long)uVar11) {
      if (uVar11 == 0) {
        CowData<ScriptLanguage::StackInfo>::_unref((CowData<ScriptLanguage::StackInfo> *)(this + 8))
        ;
        goto LAB_0010c728;
      }
      CowData<ScriptLanguage::StackInfo>::_copy_on_write
                ((CowData<ScriptLanguage::StackInfo> *)(this + 8));
      local_48 = lVar15 * 0x18;
      if (local_48 != 0) {
        uVar13 = local_48 - 1U | local_48 - 1U >> 1;
        uVar13 = uVar13 | uVar13 >> 2;
        uVar13 = uVar13 | uVar13 >> 4;
        uVar13 = uVar13 | uVar13 >> 8;
        uVar13 = uVar13 | uVar13 >> 0x10;
        local_48 = (uVar13 | uVar13 >> 0x20) + 1;
      }
LAB_0010c601:
      local_50 = (CowData<ScriptLanguage::StackInfo> *)(this + 8);
      if (uVar11 * 0x18 != 0) {
        uVar13 = uVar11 * 0x18 - 1;
        uVar13 = uVar13 | uVar13 >> 1;
        uVar13 = uVar13 | uVar13 >> 2;
        uVar13 = uVar13 | uVar13 >> 4;
        uVar13 = uVar13 | uVar13 >> 8;
        uVar13 = uVar13 | uVar13 >> 0x10;
        uVar13 = uVar13 | uVar13 >> 0x20;
        lVar17 = uVar13 + 1;
        if (lVar17 != 0) {
          uVar14 = uVar11;
          if ((long)uVar11 <= lVar15) {
            while (lVar12 = *(long *)(this + 8), lVar12 != 0) {
              if (*(ulong *)(lVar12 + -8) <= uVar14) {
                if (lVar17 != local_48) {
                  iVar7 = CowData<ScriptLanguage::StackInfo>::_realloc(local_50,lVar17);
                  if (iVar7 != 0) goto LAB_0010c728;
                  lVar12 = *(long *)(this + 8);
                  if (lVar12 == 0) {
                    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
                    pcVar6 = (code *)invalidInstructionException();
                    (*pcVar6)();
                  }
                }
                *(ulong *)(lVar12 + -8) = uVar11;
                goto LAB_0010c728;
              }
              plVar3 = (long *)(lVar12 + uVar14 * 0x18);
              if (plVar3[1] != 0) {
                LOCK();
                plVar1 = (long *)(plVar3[1] + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar12 = plVar3[1];
                  plVar3[1] = 0;
                  Memory::free_static((void *)(lVar12 + -0x10),false);
                }
              }
              if (*plVar3 != 0) {
                LOCK();
                plVar1 = (long *)(*plVar3 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar12 = *plVar3;
                  *plVar3 = 0;
                  Memory::free_static((void *)(lVar12 + -0x10),false);
                }
              }
              uVar14 = uVar14 + 1;
            }
            goto LAB_0010c9ef;
          }
          if (lVar17 == local_48) {
LAB_0010c90f:
            puVar16 = *(undefined8 **)(this + 8);
            if (puVar16 == (undefined8 *)0x0) {
LAB_0010c9ef:
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
            lVar17 = puVar16[-1];
            if (lVar17 < (long)uVar11) goto LAB_0010c926;
          }
          else {
            if (lVar15 != 0) {
              iVar7 = CowData<ScriptLanguage::StackInfo>::_realloc(local_50,lVar17);
              if (iVar7 != 0) goto LAB_0010c728;
              goto LAB_0010c90f;
            }
            puVar8 = (undefined8 *)Memory::alloc_static(uVar13 + 0x11,false);
            if (puVar8 == (undefined8 *)0x0) {
              _err_print_error("resize","./core/templates/cowdata.h",0x171,
                               "Parameter \"mem_new\" is null.",0,0);
              goto LAB_0010c728;
            }
            puVar16 = puVar8 + 2;
            *puVar8 = 1;
            puVar8[1] = 0;
            lVar17 = 0;
            *(undefined8 **)(this + 8) = puVar16;
LAB_0010c926:
            pauVar4 = (undefined1 (*) [16])(puVar16 + uVar11 * 3);
            pauVar10 = (undefined1 (*) [16])(puVar16 + lVar17 * 3);
            pauVar9 = pauVar10;
            if (((int)pauVar4 - (int)pauVar10 & 8U) != 0) {
              *pauVar10 = (undefined1  [16])0x0;
              pauVar9 = (undefined1 (*) [16])(pauVar10[1] + 8);
              if ((undefined1 (*) [16])(pauVar10[1] + 8) == pauVar4) goto LAB_0010c968;
            }
            do {
              *pauVar9 = (undefined1  [16])0x0;
              pauVar10 = pauVar9 + 3;
              *(undefined1 (*) [16])(pauVar9[1] + 8) = (undefined1  [16])0x0;
              pauVar9 = pauVar10;
            } while (pauVar10 != pauVar4);
          }
LAB_0010c968:
          puVar16[-1] = uVar11;
          goto LAB_0010c728;
        }
      }
      _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                       "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                       ,0,0);
      goto LAB_0010c728;
    }
  }
  _err_print_error("resize","./core/templates/cowdata.h",0x157,
                   "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
LAB_0010c728:
  local_50 = (CowData<ScriptLanguage::StackInfo> *)(this + 8);
  if (0 < (long)uVar5) {
    uVar11 = 0;
    lVar15 = lVar15 * 0x18;
    do {
      lVar17 = *(long *)(param_2 + 8);
      if (lVar17 == 0) {
        lVar12 = 0;
LAB_0010c7b6:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar11,lVar12,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      lVar12 = *(long *)(lVar17 + -8);
      if (lVar12 <= (long)uVar11) goto LAB_0010c7b6;
      pCVar2 = (CowData *)(lVar17 + uVar11 * 0x18);
      CowData<ScriptLanguage::StackInfo>::_copy_on_write(local_50);
      this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar15);
      if (*(long *)this_00 != *(long *)pCVar2) {
        CowData<char32_t>::_ref(this_00,pCVar2);
      }
      if (*(long *)(this_00 + 8) != *(long *)(pCVar2 + 8)) {
        CowData<char32_t>::_ref(this_00 + 8,pCVar2 + 8);
      }
      uVar11 = uVar11 + 1;
      lVar15 = lVar15 + 0x18;
      *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(pCVar2 + 0x10);
    } while (uVar11 != uVar5);
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Variant, DefaultAllocator>::~List() */

void __thiscall List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<RemoteDebugger::Message, DefaultAllocator>::~List() */

void __thiscall
List<RemoteDebugger::Message,DefaultAllocator>::~List
          (List<RemoteDebugger::Message,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<ScriptLanguage::StackInfo, DefaultAllocator>::~List() */

void __thiscall
List<ScriptLanguage::StackInfo,DefaultAllocator>::~List
          (List<ScriptLanguage::StackInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RemoteDebugger::PerformanceProfiler::~PerformanceProfiler() */

void __thiscall RemoteDebugger::PerformanceProfiler::~PerformanceProfiler(PerformanceProfiler *this)

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



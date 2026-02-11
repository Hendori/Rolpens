
/* CowData<ScriptLanguage::ProfilingInfo*>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<ScriptLanguage::ProfilingInfo*>::_copy_on_write
          (CowData<ScriptLanguage::ProfilingInfo*> *this)

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
  __n = lVar2 * 8;
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



/* List<ServersDebugger::ServerInfo, DefaultAllocator>::push_back(ServersDebugger::ServerInfo
   const&) [clone .isra.0] */

void __thiscall
List<ServersDebugger::ServerInfo,DefaultAllocator>::push_back
          (List<ServersDebugger::ServerInfo,DefaultAllocator> *this,ServerInfo *param_1)

{
  long *plVar1;
  long lVar2;
  StringName *this_00;
  long lVar3;
  undefined1 (*pauVar4) [16];
  StringName *this_01;
  StringName *pSVar5;
  long *plVar6;
  
  if (*(long *)this == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  this_00 = (StringName *)operator_new(0x28,DefaultAllocator::alloc);
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
  StringName::operator=(this_00,(StringName *)param_1);
  plVar6 = *(long **)(this_00 + 8);
  if (plVar6 != (long *)0x0) {
    do {
      plVar1 = (long *)*plVar6;
      if (plVar1 == (long *)0x0) goto LAB_00100210;
      if ((long *)plVar1[4] == plVar6) {
        lVar3 = plVar1[2];
        lVar2 = plVar1[3];
        *plVar6 = lVar3;
        if (plVar1 == (long *)plVar6[1]) {
          plVar6[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x10) = lVar3;
          lVar3 = plVar1[2];
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x18) = lVar2;
        }
        if ((StringName::configured != '\0') && (*plVar1 != 0)) {
          StringName::unref();
        }
        Memory::free_static(plVar1,false);
        *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar6 = *(long **)(this_00 + 8);
    } while ((int)plVar6[2] != 0);
    Memory::free_static(plVar6,false);
    *(undefined8 *)(this_00 + 8) = 0;
  }
  plVar6 = (long *)0x0;
LAB_00100210:
  if ((*(long **)(param_1 + 8) != (long *)0x0) &&
     (pSVar5 = (StringName *)**(long **)(param_1 + 8), pSVar5 != (StringName *)0x0)) {
    if (plVar6 == (long *)0x0) {
      pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])(this_00 + 8) = pauVar4;
      *(undefined4 *)pauVar4[1] = 0;
      *pauVar4 = (undefined1  [16])0x0;
    }
    do {
      while( true ) {
        this_01 = (StringName *)operator_new(0x28,DefaultAllocator::alloc);
        *(undefined8 *)this_01 = 0;
        *(undefined8 *)(this_01 + 8) = 0;
        *(undefined8 *)(this_01 + 0x20) = 0;
        *(undefined1 (*) [16])(this_01 + 0x10) = (undefined1  [16])0x0;
        StringName::operator=(this_01,pSVar5);
        plVar6 = *(long **)(this_00 + 8);
        lVar3 = plVar6[1];
        *(undefined8 *)(this_01 + 8) = *(undefined8 *)(pSVar5 + 8);
        *(undefined8 *)(this_01 + 0x10) = 0;
        *(long *)(this_01 + 0x18) = lVar3;
        *(long **)(this_01 + 0x20) = plVar6;
        if (lVar3 != 0) {
          *(StringName **)(lVar3 + 0x10) = this_01;
        }
        plVar6[1] = (long)this_01;
        if (*plVar6 == 0) break;
        pSVar5 = *(StringName **)(pSVar5 + 0x10);
        *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
        if (pSVar5 == (StringName *)0x0) goto LAB_001002dd;
      }
      pSVar5 = *(StringName **)(pSVar5 + 0x10);
      *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
      *plVar6 = (long)this_01;
    } while (pSVar5 != (StringName *)0x0);
  }
LAB_001002dd:
  plVar6 = *(long **)this;
  lVar3 = plVar6[1];
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(long **)(this_00 + 0x20) = plVar6;
  *(long *)(this_00 + 0x18) = lVar3;
  if (lVar3 != 0) {
    *(StringName **)(lVar3 + 0x10) = this_00;
  }
  plVar6[1] = (long)this_00;
  if (*plVar6 == 0) {
    *plVar6 = (long)this_00;
  }
  *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
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



/* ServersDebugger::ScriptFunctionSignature::serialize() */

void ServersDebugger::ScriptFunctionSignature::serialize(void)

{
  StringName *in_RSI;
  Array *in_RDI;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(in_RDI);
  Variant::Variant((Variant *)local_48,in_RSI);
  Array::push_back((Variant *)in_RDI);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_48,*(int *)(in_RSI + 8));
  Array::push_back((Variant *)in_RDI);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ServersDebugger::ScriptFunctionSignature::deserialize(Array const&) */

undefined8 __thiscall
ServersDebugger::ScriptFunctionSignature::deserialize(ScriptFunctionSignature *this,Array *param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  Variant *this_00;
  undefined8 uVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = Array::size();
  if (uVar3 < 2) {
    Array::size();
    itos((long)&local_60);
    local_58 = ", actual size: ";
    local_70 = 0;
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_70);
    itos((long)&local_80);
    local_90 = 0;
    local_58 = " message from script debugger, message too short. Expected size: ";
    local_50 = 0x41;
    String::parse_latin1((StrRange *)&local_90);
    local_58 = "ScriptFunctionSignature";
    local_a0 = 0;
    local_50 = 0x17;
    String::parse_latin1((StrRange *)&local_a0);
    local_58 = "Malformed ";
    local_a8 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_a8);
    String::operator+((String *)&local_98,(String *)&local_a8);
    String::operator+((String *)&local_88,(String *)&local_98);
    String::operator+((String *)&local_78,(String *)&local_88);
    String::operator+((String *)&local_68,(String *)&local_78);
    String::operator+((String *)&local_58,(String *)&local_68);
    pcVar6 = "Condition \"(uint32_t)p_arr.size() < (uint32_t)(2)\" is true. Returning: false";
    uVar5 = 0x53;
  }
  else {
    Array::operator[]((int)param_1);
    Variant::operator_cast_to_StringName((Variant *)&local_58);
    if (*(char **)this == local_58) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)this = local_58;
    }
    this_00 = (Variant *)Array::operator[]((int)param_1);
    iVar4 = Variant::operator_cast_to_int(this_00);
    *(int *)(this + 8) = iVar4;
    uVar3 = Array::size();
    uVar5 = 1;
    if (uVar3 < 3) goto LAB_00100572;
    Array::size();
    itos((long)&local_60);
    local_58 = ", actual size: ";
    local_70 = 0;
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_70);
    itos((long)&local_80);
    local_90 = 0;
    local_58 = " message from script debugger, message too long. Expected size: ";
    local_50 = 0x40;
    String::parse_latin1((StrRange *)&local_90);
    local_58 = "ScriptFunctionSignature";
    local_a0 = 0;
    local_50 = 0x17;
    String::parse_latin1((StrRange *)&local_a0);
    local_58 = "Malformed ";
    local_a8 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_a8);
    String::operator+((String *)&local_98,(String *)&local_a8);
    String::operator+((String *)&local_88,(String *)&local_98);
    String::operator+((String *)&local_78,(String *)&local_88);
    String::operator+((String *)&local_68,(String *)&local_78);
    String::operator+((String *)&local_58,(String *)&local_68);
    pcVar6 = "Condition \"(uint32_t)p_arr.size() > (uint32_t)2\" is true. Returning: false";
    uVar5 = 0x56;
  }
  _err_print_error("deserialize","servers/debugger/servers_debugger.cpp",uVar5,pcVar6,&local_58,0,0)
  ;
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
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
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
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
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
  lVar2 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
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
  uVar5 = 0;
LAB_00100572:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ServersDebugger::ServersProfilerFrame::serialize() */

void ServersDebugger::ServersProfilerFrame::serialize(void)

{
  StringName *pSVar1;
  StringName *pSVar2;
  code *pcVar3;
  long lVar4;
  int iVar5;
  int *in_RSI;
  long lVar6;
  Array *in_RDI;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(in_RDI);
  Variant::Variant((Variant *)local_58,*in_RSI);
  Array::push_back((Variant *)in_RDI);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(double *)(in_RSI + 2));
  Array::push_back((Variant *)in_RDI);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(double *)(in_RSI + 4));
  Array::push_back((Variant *)in_RDI);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(double *)(in_RSI + 6));
  Array::push_back((Variant *)in_RDI);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(double *)(in_RSI + 8));
  Array::push_back((Variant *)in_RDI);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(double *)(in_RSI + 10));
  Array::push_back((Variant *)in_RDI);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  iVar5 = 0;
  if (*(long *)(in_RSI + 0xc) != 0) {
    iVar5 = *(int *)(*(long *)(in_RSI + 0xc) + 0x10);
  }
  Variant::Variant((Variant *)local_58,iVar5);
  Array::push_back((Variant *)in_RDI);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (*(undefined8 **)(in_RSI + 0xc) != (undefined8 *)0x0) {
    for (pSVar1 = (StringName *)**(undefined8 **)(in_RSI + 0xc); pSVar1 != (StringName *)0x0;
        pSVar1 = *(StringName **)(pSVar1 + 0x10)) {
      Variant::Variant((Variant *)local_58,pSVar1);
      Array::push_back((Variant *)in_RDI);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      iVar5 = 0;
      if (*(long *)(pSVar1 + 8) != 0) {
        iVar5 = *(int *)(*(long *)(pSVar1 + 8) + 0x10) * 2;
      }
      Variant::Variant((Variant *)local_58,iVar5);
      Array::push_back((Variant *)in_RDI);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (*(undefined8 **)(pSVar1 + 8) != (undefined8 *)0x0) {
        for (pSVar2 = (StringName *)**(undefined8 **)(pSVar1 + 8); pSVar2 != (StringName *)0x0;
            pSVar2 = *(StringName **)(pSVar2 + 0x10)) {
          Variant::Variant((Variant *)local_58,pSVar2);
          Array::push_back((Variant *)in_RDI);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,*(double *)(pSVar2 + 8));
          Array::push_back((Variant *)in_RDI);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
      }
    }
  }
  if (*(long *)(in_RSI + 0x10) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)(in_RSI + 0x10) + -8) * 5;
  }
  Variant::Variant((Variant *)local_58,lVar6);
  Array::push_back((Variant *)in_RDI);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar6 = *(long *)(in_RSI + 0x10);
  lVar4 = 0;
  while( true ) {
    if ((lVar6 == 0) || (*(long *)(lVar6 + -8) <= lVar4)) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar8 = lVar4 * 0x28;
    Variant::Variant((Variant *)local_58,*(int *)(lVar6 + 8 + lVar8));
    Array::push_back((Variant *)in_RDI);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar6 = *(long *)(in_RSI + 0x10);
    if (lVar6 == 0) break;
    lVar7 = *(long *)(lVar6 + -8);
    if (lVar7 <= lVar4) goto LAB_00100ecb;
    Variant::Variant((Variant *)local_58,*(int *)(lVar6 + 0xc + lVar8));
    Array::push_back((Variant *)in_RDI);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar6 = *(long *)(in_RSI + 0x10);
    if (lVar6 == 0) break;
    lVar7 = *(long *)(lVar6 + -8);
    if (lVar7 <= lVar4) goto LAB_00100ecb;
    Variant::Variant((Variant *)local_58,*(double *)(lVar6 + 0x10 + lVar8));
    Array::push_back((Variant *)in_RDI);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar6 = *(long *)(in_RSI + 0x10);
    if (lVar6 == 0) break;
    lVar7 = *(long *)(lVar6 + -8);
    if (lVar7 <= lVar4) goto LAB_00100ecb;
    Variant::Variant((Variant *)local_58,*(double *)(lVar6 + 0x18 + lVar8));
    Array::push_back((Variant *)in_RDI);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar6 = *(long *)(in_RSI + 0x10);
    if (lVar6 == 0) break;
    lVar7 = *(long *)(lVar6 + -8);
    if (lVar7 <= lVar4) goto LAB_00100ecb;
    Variant::Variant((Variant *)local_58,*(double *)(lVar6 + 0x20 + lVar8));
    Array::push_back((Variant *)in_RDI);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar6 = *(long *)(in_RSI + 0x10);
    lVar4 = lVar4 + 1;
  }
  lVar7 = 0;
LAB_00100ecb:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar7,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* ServersDebugger::VisualProfilerFrame::serialize() */

void ServersDebugger::VisualProfilerFrame::serialize(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong *in_RSI;
  Array *in_RDI;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(in_RDI);
  Variant::Variant((Variant *)local_58,*in_RSI);
  Array::push_back((Variant *)in_RDI);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (in_RSI[2] == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(in_RSI[2] - 8) * 3;
  }
  Variant::Variant((Variant *)local_58,lVar3);
  Array::push_back((Variant *)in_RDI);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  uVar1 = in_RSI[2];
  lVar3 = 0;
  while( true ) {
    if ((uVar1 == 0) || (*(long *)(uVar1 - 8) <= lVar3)) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar5 = lVar3 * 0x18;
    Variant::Variant((Variant *)local_58,(String *)(uVar1 + lVar5));
    Array::push_back((Variant *)in_RDI);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    uVar1 = in_RSI[2];
    if (uVar1 == 0) break;
    lVar4 = *(long *)(uVar1 - 8);
    if (lVar4 <= lVar3) goto LAB_00101183;
    Variant::Variant((Variant *)local_58,*(double *)(uVar1 + 0x10 + lVar5));
    Array::push_back((Variant *)in_RDI);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    uVar1 = in_RSI[2];
    if (uVar1 == 0) break;
    lVar4 = *(long *)(uVar1 - 8);
    if (lVar4 <= lVar3) goto LAB_00101183;
    Variant::Variant((Variant *)local_58,*(double *)(uVar1 + 8 + lVar5));
    Array::push_back((Variant *)in_RDI);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    uVar1 = in_RSI[2];
    lVar3 = lVar3 + 1;
  }
  lVar4 = 0;
LAB_00101183:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar4,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* ServersDebugger::~ServersDebugger() */

void __thiscall ServersDebugger::~ServersDebugger(ServersDebugger *this)

{
  Object *pOVar1;
  char cVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_28,"servers",false);
  EngineDebugger::unregister_message_capture((StringName *)&local_28);
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  singleton = 0;
  if (*(long *)(this + 0x10) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x10);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pOVar1,false);
          return;
        }
        goto LAB_00101340;
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101340:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ServersDebugger::deinitialize() */

void ServersDebugger::deinitialize(void)

{
  ServersDebugger *pSVar1;
  
  pSVar1 = singleton;
  if (singleton != (ServersDebugger *)0x0) {
    ~ServersDebugger(singleton);
    Memory::free_static(pSVar1,false);
    return;
  }
  return;
}



/* ServersDebugger::ResourceUsage::deserialize(Array const&) */

undefined8 __thiscall
ServersDebugger::ResourceUsage::deserialize(ResourceUsage *this,Array *param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  Variant *pVVar8;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar9) [16];
  undefined8 uVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined1 local_68 [16];
  long local_58;
  undefined8 local_50;
  int local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = Array::size();
  if (iVar4 == 0) {
    Array::size();
    itos((long)&local_70);
    local_80 = 0;
    local_68._0_8_ = ", actual size: ";
    local_68._8_8_ = 0xf;
    String::parse_latin1((StrRange *)&local_80);
    itos((long)&local_90);
    local_a0 = 0;
    local_68._0_8_ = " message from script debugger, message too short. Expected size: ";
    local_68._8_8_ = 0x41;
    String::parse_latin1((StrRange *)&local_a0);
    local_b0 = 0;
    local_68._0_8_ = "ResourceUsage";
    local_68._8_8_ = 0xd;
    String::parse_latin1((StrRange *)&local_b0);
    local_b8 = 0;
    local_68._8_8_ = 10;
    local_68._0_8_ = "Malformed ";
    String::parse_latin1((StrRange *)&local_b8);
    String::operator+((String *)&local_a8,(String *)&local_b8);
    String::operator+((String *)&local_98,(String *)&local_a8);
    String::operator+((String *)&local_88,(String *)&local_98);
    String::operator+((String *)&local_78,(String *)&local_88);
    String::operator+((String *)local_68,(String *)&local_78);
    pcVar11 = "Condition \"(uint32_t)p_arr.size() < (uint32_t)(1)\" is true. Returning: false";
    uVar10 = 0x39;
  }
  else {
    iVar4 = (int)param_1;
    pVVar8 = (Variant *)Array::operator[](iVar4);
    uVar5 = Variant::operator_cast_to_unsigned_int(pVVar8);
    if ((uVar5 & 3) != 0) {
      _err_print_error("deserialize","servers/debugger/servers_debugger.cpp",0x3b,
                       "Condition \"size % 4\" is true. Returning: false",0,0);
      uVar10 = 0;
      goto LAB_00101667;
    }
    uVar6 = Array::size();
    uVar5 = uVar5 + 1;
    if (uVar5 <= uVar6) {
      uVar6 = 1;
      if (uVar5 != 1) {
        do {
          local_58 = 0;
          local_68 = (undefined1  [16])0x0;
          local_50 = 0;
          Array::operator[](iVar4);
          Variant::operator_cast_to_String((Variant *)&local_70);
          if (local_70 != 0) {
            local_68._0_8_ = local_70;
          }
          Array::operator[](iVar4);
          Variant::operator_cast_to_String((Variant *)&local_70);
          if (local_70 != 0) {
            local_68._8_8_ = local_70;
          }
          Array::operator[](iVar4);
          Variant::operator_cast_to_String((Variant *)&local_70);
          lVar3 = local_70;
          if (local_70 != 0) {
            local_58 = local_70;
          }
          pVVar8 = (Variant *)Array::operator[](iVar4);
          iVar7 = Variant::operator_cast_to_int(pVVar8);
          local_48 = iVar7;
          if (*(long *)this == 0) {
            pauVar9 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined1 (**) [16])this = pauVar9;
            *(undefined4 *)pauVar9[1] = 0;
            *pauVar9 = (undefined1  [16])0x0;
          }
          this_00 = (CowData<char32_t> *)operator_new(0x40,DefaultAllocator::alloc);
          *(undefined8 *)(this_00 + 0x10) = 0;
          *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
          *(undefined8 *)(this_00 + 0x18) = 0;
          *(undefined4 *)(this_00 + 0x20) = 0;
          *(undefined8 *)(this_00 + 0x38) = 0;
          *(undefined1 (*) [16])(this_00 + 0x28) = (undefined1  [16])0x0;
          lVar12 = local_68._0_8_;
          if (local_68._0_8_ != 0) {
            CowData<char32_t>::_ref(this_00,(CowData *)local_68);
            lVar12 = *(long *)(this_00 + 8);
          }
          lVar13 = local_68._8_8_;
          if (lVar12 != local_68._8_8_) {
            CowData<char32_t>::_ref(this_00 + 8,(CowData *)(local_68 + 8));
          }
          if (lVar3 != *(long *)(this_00 + 0x10)) {
            CowData<char32_t>::_ref(this_00 + 0x10,(CowData *)&local_58);
          }
          *(int *)(this_00 + 0x20) = iVar7;
          *(undefined8 *)(this_00 + 0x18) = local_50;
          plVar1 = *(long **)this;
          lVar12 = plVar1[1];
          *(undefined8 *)(this_00 + 0x28) = 0;
          *(long **)(this_00 + 0x38) = plVar1;
          *(long *)(this_00 + 0x30) = lVar12;
          if (lVar12 != 0) {
            *(CowData<char32_t> **)(lVar12 + 0x28) = this_00;
          }
          plVar1[1] = (long)this_00;
          if (*plVar1 == 0) {
            *plVar1 = (long)this_00;
          }
          *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
          uVar6 = uVar6 + 4;
          if (lVar3 != 0) {
            LOCK();
            plVar1 = (long *)(lVar3 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_58 + -0x10),false);
            }
            lVar13 = local_68._8_8_;
          }
          if (lVar13 != 0) {
            LOCK();
            plVar1 = (long *)(lVar13 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_68._8_8_ + -0x10),false);
            }
          }
          if (local_68._0_8_ != 0) {
            LOCK();
            plVar1 = (long *)(local_68._0_8_ + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_68._0_8_ + -0x10),false);
            }
          }
        } while (uVar6 < uVar5);
      }
      uVar5 = Array::size();
      uVar10 = 1;
      if (uVar6 < uVar5) {
        Array::size();
        itos((long)&local_70);
        local_80 = 0;
        local_68._0_8_ = ", actual size: ";
        local_68._8_8_ = 0xf;
        String::parse_latin1((StrRange *)&local_80);
        itos((long)&local_90);
        local_a0 = 0;
        local_68._0_8_ = " message from script debugger, message too long. Expected size: ";
        local_68._8_8_ = 0x40;
        String::parse_latin1((StrRange *)&local_a0);
        local_b0 = 0;
        local_68._0_8_ = "ResourceUsage";
        local_68._8_8_ = 0xd;
        String::parse_latin1((StrRange *)&local_b0);
        local_b8 = 0;
        local_68._8_8_ = 10;
        local_68._0_8_ = "Malformed ";
        String::parse_latin1((StrRange *)&local_b8);
        String::operator+((String *)&local_a8,(String *)&local_b8);
        String::operator+((String *)&local_98,(String *)&local_a8);
        String::operator+((String *)&local_88,(String *)&local_98);
        String::operator+((String *)&local_78,(String *)&local_88);
        String::operator+((String *)local_68,(String *)&local_78);
        _err_print_error("deserialize","servers/debugger/servers_debugger.cpp",0x47,
                         "Condition \"(uint32_t)p_arr.size() > (uint32_t)idx\" is true. Returning: false"
                         ,(String *)local_68,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
        lVar3 = local_78;
        if (local_78 != 0) {
          LOCK();
          plVar1 = (long *)(local_78 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        lVar3 = local_88;
        if (local_88 != 0) {
          LOCK();
          plVar1 = (long *)(local_88 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_88 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        lVar3 = local_98;
        if (local_98 != 0) {
          LOCK();
          plVar1 = (long *)(local_98 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_98 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        lVar3 = local_a8;
        if (local_a8 != 0) {
          LOCK();
          plVar1 = (long *)(local_a8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a8 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        lVar3 = local_b0;
        if (local_b0 != 0) {
          LOCK();
          plVar1 = (long *)(local_b0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b0 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        lVar3 = local_a0;
        if (local_a0 != 0) {
          LOCK();
          plVar1 = (long *)(local_a0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        lVar3 = local_90;
        if (local_90 != 0) {
          LOCK();
          plVar1 = (long *)(local_90 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        uVar10 = 0;
      }
      goto LAB_00101667;
    }
    Array::size();
    itos((long)&local_70);
    local_80 = 0;
    local_68._0_8_ = ", actual size: ";
    local_68._8_8_ = 0xf;
    String::parse_latin1((StrRange *)&local_80);
    itos((long)&local_90);
    local_a0 = 0;
    local_68._0_8_ = " message from script debugger, message too short. Expected size: ";
    local_68._8_8_ = 0x41;
    String::parse_latin1((StrRange *)&local_a0);
    local_b0 = 0;
    local_68._0_8_ = "ResourceUsage";
    local_68._8_8_ = 0xd;
    String::parse_latin1((StrRange *)&local_b0);
    local_b8 = 0;
    local_68._8_8_ = 10;
    local_68._0_8_ = "Malformed ";
    String::parse_latin1((StrRange *)&local_b8);
    String::operator+((String *)&local_a8,(String *)&local_b8);
    String::operator+((String *)&local_98,(String *)&local_a8);
    String::operator+((String *)&local_88,(String *)&local_98);
    String::operator+((String *)&local_78,(String *)&local_88);
    String::operator+((String *)local_68,(String *)&local_78);
    pcVar11 = 
    "Condition \"(uint32_t)p_arr.size() < (uint32_t)(1 + size)\" is true. Returning: false";
    uVar10 = 0x3c;
  }
  _err_print_error("deserialize","servers/debugger/servers_debugger.cpp",uVar10,pcVar11,local_68,0,0
                  );
  uVar10 = local_68._0_8_;
  if (local_68._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_68._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_68._8_8_;
      local_68 = auVar2 << 0x40;
      Memory::free_static((void *)(uVar10 + -0x10),false);
    }
  }
  lVar3 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
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
  lVar3 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  uVar10 = 0;
LAB_00101667:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



/* ServersDebugger::ResourceUsage::serialize() */

void ServersDebugger::ResourceUsage::serialize(void)

{
  String *pSVar1;
  int iVar2;
  List<ServersDebugger::ResourceInfo,DefaultAllocator> *in_RSI;
  Array *in_RDI;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  List<ServersDebugger::ResourceInfo,DefaultAllocator>::
  sort_custom<Comparator<ServersDebugger::ResourceInfo>>(in_RSI);
  Array::Array(in_RDI);
  iVar2 = 0;
  if (*(long *)in_RSI != 0) {
    iVar2 = *(int *)(*(long *)in_RSI + 0x10) << 2;
  }
  Variant::Variant((Variant *)local_48,iVar2);
  Array::push_back((Variant *)in_RDI);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (*(undefined8 **)in_RSI != (undefined8 *)0x0) {
    for (pSVar1 = (String *)**(undefined8 **)in_RSI; pSVar1 != (String *)0x0;
        pSVar1 = *(String **)(pSVar1 + 0x28)) {
      Variant::Variant((Variant *)local_48,pSVar1);
      Array::push_back((Variant *)in_RDI);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_48,pSVar1 + 8);
      Array::push_back((Variant *)in_RDI);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_48,pSVar1 + 0x10);
      Array::push_back((Variant *)in_RDI);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_48,*(int *)(pSVar1 + 0x20));
      Array::push_back((Variant *)in_RDI);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ServersDebugger::_send_resource_usage() */

void ServersDebugger::_send_resource_usage(void)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  char *pcVar4;
  undefined8 uVar5;
  long *plVar6;
  CowData<char32_t> *this;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined1 (*local_e8) [16];
  long *local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  long local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = (undefined1 (*) [16])0x0;
  local_e0 = (long *)0x0;
  plVar6 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar6 + 0x218))
            (plVar6,(List<RenderingServer::TextureInfo,DefaultAllocator> *)&local_e0);
  if ((local_e0 != (long *)0x0) && (puVar9 = (undefined8 *)*local_e0, puVar9 != (undefined8 *)0x0))
  {
    do {
      local_58 = 0;
      local_68 = (undefined1  [16])0x0;
      plVar6 = (long *)(puVar9[4] + -0x10);
      if (puVar9[4] != 0) {
        do {
          lVar8 = *plVar6;
          if (lVar8 == 0) goto LAB_00102636;
          LOCK();
          lVar7 = *plVar6;
          bVar10 = lVar8 == lVar7;
          if (bVar10) {
            *plVar6 = lVar8 + 1;
            lVar7 = lVar8;
          }
          UNLOCK();
        } while (!bVar10);
        if (lVar7 != -1) {
          local_68._8_8_ = 0;
          local_68._0_8_ = puVar9[4];
        }
      }
LAB_00102636:
      local_48 = (undefined4)puVar9[3];
      local_50 = *puVar9;
      local_70 = 7;
      local_78 = "Texture";
      String::parse_latin1((StrRange *)&local_58);
      if (*(int *)(puVar9 + 2) == 0) {
        Image::get_format_name(&local_80,*(undefined4 *)((long)puVar9 + 0x14));
        local_78 = " ";
        local_90 = 0;
        local_70 = 1;
        String::parse_latin1((StrRange *)&local_90);
        itos((long)&local_a0);
        local_78 = "x";
        local_b0 = 0;
        local_70 = 1;
        String::parse_latin1((StrRange *)&local_b0);
        itos((long)&local_b8);
        String::operator+((String *)&local_a8,(String *)&local_b8);
        String::operator+((String *)&local_98,(String *)&local_a8);
        String::operator+((String *)&local_88,(String *)&local_98);
        String::operator+((String *)&local_78,(String *)&local_88);
        pcVar4 = local_78;
        uVar5 = local_68._8_8_;
        if ((char *)local_68._8_8_ == local_78) {
          if ((undefined *)local_68._8_8_ != (undefined *)0x0) {
            LOCK();
            plVar6 = (long *)(local_68._8_8_ + -0x10);
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
              local_78 = (undefined *)0x0;
              Memory::free_static(pcVar4 + -0x10,false);
            }
          }
        }
        else {
          if ((undefined *)local_68._8_8_ != (undefined *)0x0) {
            LOCK();
            plVar6 = (long *)(local_68._8_8_ + -0x10);
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
              local_68._8_8_ = 0;
              Memory::free_static((undefined *)(uVar5 + -0x10),false);
            }
          }
          local_68._8_8_ = local_78;
        }
        lVar8 = local_88;
        if (local_88 != 0) {
          LOCK();
          plVar6 = (long *)(local_88 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_88 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        lVar8 = local_98;
        if (local_98 != 0) {
          LOCK();
          plVar6 = (long *)(local_98 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_98 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        lVar8 = local_a8;
        if (local_a8 != 0) {
          LOCK();
          plVar6 = (long *)(local_a8 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_a8 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        lVar8 = local_b8;
        if (local_b8 != 0) {
          LOCK();
          plVar6 = (long *)(local_b8 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_b8 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
      }
      else {
        Image::get_format_name(&local_80,*(undefined4 *)((long)puVar9 + 0x14));
        local_78 = " ";
        local_90 = 0;
        local_70 = 1;
        String::parse_latin1((StrRange *)&local_90);
        itos((long)&local_a0);
        local_78 = "x";
        local_b0 = 0;
        local_70 = 1;
        String::parse_latin1((StrRange *)&local_b0);
        itos((long)&local_c0);
        local_78 = "x";
        local_d0 = 0;
        local_70 = 1;
        String::parse_latin1((StrRange *)&local_d0);
        itos((long)&local_d8);
        String::operator+((String *)&local_c8,(String *)&local_d8);
        String::operator+((String *)&local_b8,(String *)&local_c8);
        String::operator+((String *)&local_a8,(String *)&local_b8);
        String::operator+((String *)&local_98,(String *)&local_a8);
        String::operator+((String *)&local_88,(String *)&local_98);
        String::operator+((String *)&local_78,(String *)&local_88);
        pcVar4 = local_78;
        uVar5 = local_68._8_8_;
        if ((char *)local_68._8_8_ == local_78) {
          if ((undefined *)local_68._8_8_ != (undefined *)0x0) {
            LOCK();
            plVar6 = (long *)(local_68._8_8_ + -0x10);
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
              local_78 = (undefined *)0x0;
              Memory::free_static(pcVar4 + -0x10,false);
            }
          }
        }
        else {
          if ((undefined *)local_68._8_8_ != (undefined *)0x0) {
            LOCK();
            plVar6 = (long *)(local_68._8_8_ + -0x10);
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
              local_68._8_8_ = 0;
              Memory::free_static((undefined *)(uVar5 + -0x10),false);
            }
          }
          local_68._8_8_ = local_78;
        }
        lVar8 = local_88;
        if (local_88 != 0) {
          LOCK();
          plVar6 = (long *)(local_88 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_88 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        lVar8 = local_98;
        if (local_98 != 0) {
          LOCK();
          plVar6 = (long *)(local_98 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_98 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        lVar8 = local_a8;
        if (local_a8 != 0) {
          LOCK();
          plVar6 = (long *)(local_a8 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_a8 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        lVar8 = local_b8;
        if (local_b8 != 0) {
          LOCK();
          plVar6 = (long *)(local_b8 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_b8 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        lVar8 = local_c8;
        if (local_c8 != 0) {
          LOCK();
          plVar6 = (long *)(local_c8 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_c8 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        lVar8 = local_d8;
        if (local_d8 != 0) {
          LOCK();
          plVar6 = (long *)(local_d8 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_d8 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        lVar8 = local_d0;
        if (local_d0 != 0) {
          LOCK();
          plVar6 = (long *)(local_d0 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_d0 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        lVar8 = local_c0;
        if (local_c0 != 0) {
          LOCK();
          plVar6 = (long *)(local_c0 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_c0 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
      }
      lVar8 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        plVar6 = (long *)(local_b0 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_b0 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar6 = (long *)(local_a0 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar6 = (long *)(local_90 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar6 = (long *)(local_80 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (local_e8 == (undefined1 (*) [16])0x0) {
        local_e8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)local_e8[1] = 0;
        *local_e8 = (undefined1  [16])0x0;
      }
      pauVar3 = local_e8;
      this = (CowData<char32_t> *)operator_new(0x40,DefaultAllocator::alloc);
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined1 (*) [16])this = (undefined1  [16])0x0;
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined4 *)(this + 0x20) = 0;
      *(undefined8 *)(this + 0x38) = 0;
      *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      lVar8 = local_68._0_8_;
      if (local_68._0_8_ != 0) {
        CowData<char32_t>::_ref(this,(CowData *)local_68);
        lVar8 = *(long *)(this + 8);
      }
      if (local_68._8_8_ != lVar8) {
        CowData<char32_t>::_ref(this + 8,(CowData *)(local_68 + 8));
      }
      if (*(long *)(this + 0x10) != local_58) {
        CowData<char32_t>::_ref(this + 0x10,(CowData *)&local_58);
      }
      lVar7 = local_58;
      *(undefined8 *)(this + 0x18) = local_50;
      *(undefined4 *)(this + 0x20) = local_48;
      lVar8 = *(long *)(*pauVar3 + 8);
      *(undefined8 *)(this + 0x28) = 0;
      *(long *)(this + 0x30) = lVar8;
      *(undefined1 (**) [16])(this + 0x38) = pauVar3;
      if (lVar8 != 0) {
        *(CowData<char32_t> **)(lVar8 + 0x28) = this;
      }
      lVar8 = *(long *)*pauVar3;
      *(CowData<char32_t> **)(*pauVar3 + 8) = this;
      if (lVar8 == 0) {
        *(CowData<char32_t> **)*pauVar3 = this;
      }
      *(int *)pauVar3[1] = *(int *)pauVar3[1] + 1;
      if (local_58 != 0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      uVar5 = local_68._8_8_;
      if (local_68._8_8_ != 0) {
        LOCK();
        plVar6 = (long *)(local_68._8_8_ + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_68._8_8_ = 0;
          Memory::free_static((void *)(uVar5 + -0x10),false);
        }
      }
      uVar5 = local_68._0_8_;
      if (local_68._0_8_ != 0) {
        LOCK();
        plVar6 = (long *)(local_68._0_8_ + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_68._8_8_;
          local_68 = auVar2 << 0x40;
          Memory::free_static((void *)(uVar5 + -0x10),false);
        }
      }
      puVar9 = (undefined8 *)puVar9[5];
    } while (puVar9 != (undefined8 *)0x0);
  }
  plVar6 = EngineDebugger::singleton;
  pcVar1 = *(code **)(*EngineDebugger::singleton + 8);
  ResourceUsage::serialize();
  local_78 = (char *)0x0;
  local_68._8_8_ = 0x14;
  local_68._0_8_ = "servers:memory_usage";
  String::parse_latin1((StrRange *)&local_78);
  (*pcVar1)(plVar6,(StrRange *)&local_78,(Array *)&local_80);
  pcVar4 = local_78;
  if (local_78 != (char *)0x0) {
    LOCK();
    plVar6 = (long *)((long)local_78 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_78 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  Array::~Array((Array *)&local_80);
  List<RenderingServer::TextureInfo,DefaultAllocator>::~List
            ((List<RenderingServer::TextureInfo,DefaultAllocator> *)&local_e0);
  List<ServersDebugger::ResourceInfo,DefaultAllocator>::~List
            ((List<ServersDebugger::ResourceInfo,DefaultAllocator> *)&local_e8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ServersDebugger::_capture(void*, String const&, Array const&, bool&) */

undefined8 ServersDebugger::_capture(void *param_1,String *param_2,Array *param_3,bool *param_4)

{
  code *pcVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  double dVar7;
  long in_FS_OFFSET;
  Array aAStack_58 [8];
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (singleton == (double *)0x0) {
    _err_print_error("_capture","servers/debugger/servers_debugger.cpp",0x19b,
                     "Parameter \"singleton\" is null.",0,0);
    uVar6 = 0x2f;
  }
  else {
    *param_4 = true;
    cVar3 = String::operator==(param_2,"memory");
    if (cVar3 == '\0') {
      cVar3 = String::operator==(param_2,"draw");
      if (cVar3 == '\0') {
        cVar3 = String::operator==(param_2,"foreground");
        plVar4 = DisplayServer::singleton;
        if (cVar3 == '\0') {
          *param_4 = false;
        }
        else {
          *singleton = 0.0;
          (**(code **)(*plVar4 + 0x5d8))(plVar4,0);
          *(undefined1 *)((long)singleton[1] + 0x1d0) = 1;
        }
      }
      else {
        dVar7 = 0.0;
        if (*singleton != 0.0) {
          plVar4 = (long *)OS::get_singleton();
          uVar5 = (**(code **)(*plVar4 + 0x208))(plVar4);
          dVar7 = ((double)uVar5 - *singleton) / __LC54;
        }
        plVar4 = (long *)OS::get_singleton();
        uVar5 = (**(code **)(*plVar4 + 0x208))(plVar4);
        *singleton = (double)uVar5;
        plVar4 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar4 + 0x11d0))(plVar4);
        plVar4 = (long *)RenderingServer::get_singleton();
        cVar3 = (**(code **)(*plVar4 + 0x11d8))(plVar4);
        if (cVar3 != '\0') {
          plVar4 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar4 + 0x11c8))(dVar7,plVar4,1);
        }
        plVar4 = EngineDebugger::singleton;
        pcVar1 = *(code **)(*EngineDebugger::singleton + 8);
        Array::Array(aAStack_58);
        local_48 = "servers:drawn";
        local_50 = 0;
        local_40 = 0xd;
        String::parse_latin1((StrRange *)&local_50);
        (*pcVar1)(plVar4,(StrRange *)&local_50,aAStack_58);
        lVar2 = local_50;
        if (local_50 != 0) {
          LOCK();
          plVar4 = (long *)(local_50 + -0x10);
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (*plVar4 == 0) {
            local_50 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        Array::~Array(aAStack_58);
      }
    }
    else {
      _send_resource_usage();
    }
    uVar6 = 0;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* CowData<RenderingServer::FrameProfileArea>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RenderingServer::FrameProfileArea>::_copy_on_write
          (CowData<RenderingServer::FrameProfileArea> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  CowData<char32_t> *this_00;
  ulong uVar5;
  CowData *pCVar6;
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
  uVar5 = 0x10;
  if (lVar1 * 0x18 != 0) {
    uVar5 = lVar1 * 0x18 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar7 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar1;
    this_00 = (CowData<char32_t> *)(puVar4 + 2);
    if (lVar1 != 0) {
      do {
        pCVar6 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar4));
        *(undefined8 *)this_00 = 0;
        if (*(long *)pCVar6 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar6);
        }
        uVar3 = *(undefined8 *)(pCVar6 + 0x10);
        lVar7 = lVar7 + 1;
        *(undefined8 *)(this_00 + 8) = *(undefined8 *)(pCVar6 + 8);
        *(undefined8 *)(this_00 + 0x10) = uVar3;
        this_00 = this_00 + 0x18;
      } while (lVar1 != lVar7);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<RenderingServer::FrameProfileArea>::resize<false>(long) [clone .isra.0] */

void __thiscall
CowData<RenderingServer::FrameProfileArea>::resize<false>
          (CowData<RenderingServer::FrameProfileArea> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  
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
    lVar12 = 0;
    lVar10 = 0;
  }
  else {
    lVar12 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar12) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    lVar10 = lVar12 * 0x18;
    if (lVar10 != 0) {
      uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      lVar10 = (uVar11 | uVar11 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 != 0) {
    uVar11 = param_1 * 0x18 - 1;
    uVar11 = uVar11 | uVar11 >> 1;
    uVar11 = uVar11 | uVar11 >> 2;
    uVar11 = uVar11 | uVar11 >> 4;
    uVar11 = uVar11 | uVar11 >> 8;
    uVar11 = uVar11 | uVar11 >> 0x10;
    uVar11 = uVar11 | uVar11 >> 0x20;
    lVar13 = uVar11 + 1;
    if (lVar13 != 0) {
      if (param_1 <= lVar12) {
        puVar8 = *(undefined8 **)this;
        uVar11 = param_1;
        while( true ) {
          if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if ((ulong)puVar8[-1] <= uVar11) break;
          while( true ) {
            plVar2 = puVar8 + uVar11 * 3;
            if (*plVar2 != 0) break;
            uVar11 = uVar11 + 1;
            if ((ulong)puVar8[-1] <= uVar11) goto LAB_0010310f;
          }
          LOCK();
          plVar1 = (long *)(*plVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar12 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
          puVar8 = *(undefined8 **)this;
          uVar11 = uVar11 + 1;
        }
LAB_0010310f:
        if (lVar13 != lVar10) {
          iVar4 = _realloc(this,lVar13);
          if (iVar4 != 0) {
            return;
          }
          puVar8 = *(undefined8 **)this;
          if (puVar8 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        goto LAB_00103130;
      }
      if (lVar13 == lVar10) {
LAB_001031fb:
        puVar8 = *(undefined8 **)this;
        if (puVar8 == (undefined8 *)0x0) {
          FUN_00105c4c();
          return;
        }
        lVar12 = puVar8[-1];
        if (param_1 <= lVar12) goto LAB_00103130;
      }
      else {
        if (lVar12 != 0) {
          iVar4 = _realloc(this,lVar13);
          if (iVar4 != 0) {
            return;
          }
          goto LAB_001031fb;
        }
        puVar5 = (undefined8 *)Memory::alloc_static(uVar11 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          uVar9 = 0x171;
          pcVar7 = "Parameter \"mem_new\" is null.";
          goto LAB_00103272;
        }
        puVar8 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar8;
        lVar12 = 0;
      }
      puVar14 = puVar8 + param_1 * 3;
      puVar5 = puVar8 + lVar12 * 3;
      puVar6 = puVar5;
      if (((int)puVar14 - (int)puVar5 & 8U) != 0) {
        *puVar5 = 0;
        puVar6 = puVar5 + 3;
        if (puVar5 + 3 == puVar14) goto LAB_00103130;
      }
      do {
        *puVar6 = 0;
        puVar5 = puVar6 + 6;
        puVar6[3] = 0;
        puVar6 = puVar5;
      } while (puVar5 != puVar14);
LAB_00103130:
      puVar8[-1] = param_1;
      return;
    }
  }
  uVar9 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00103272:
  _err_print_error("resize","./core/templates/cowdata.h",uVar9,pcVar7,0,0);
  return;
}



/* ServersDebugger::VisualProfilerFrame::deserialize(Array const&) */

undefined8 __thiscall
ServersDebugger::VisualProfilerFrame::deserialize(VisualProfilerFrame *this,Array *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  Variant *pVVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  long *plVar11;
  int iVar12;
  int iVar13;
  long in_FS_OFFSET;
  double dVar14;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = Array::size();
  if (uVar5 < 2) {
    Array::size();
    itos((long)&local_60);
    local_58 = ", actual size: ";
    local_70 = 0;
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_70);
    itos((long)&local_80);
    local_90 = 0;
    local_58 = " message from script debugger, message too short. Expected size: ";
    local_50 = 0x41;
    String::parse_latin1((StrRange *)&local_90);
    local_58 = "VisualProfilerFrame";
    local_a0 = 0;
    local_50 = 0x13;
    String::parse_latin1((StrRange *)&local_a0);
    local_58 = "Malformed ";
    local_a8 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_a8);
    String::operator+((String *)&local_98,(String *)&local_a8);
    String::operator+((String *)&local_88,(String *)&local_98);
    String::operator+((String *)&local_78,(String *)&local_88);
    String::operator+((String *)&local_68,(String *)&local_78);
    String::operator+((String *)&local_58,(String *)&local_68);
    pcVar10 = "Condition \"(uint32_t)p_arr.size() < (uint32_t)(2)\" is true. Returning: false";
    uVar9 = 0xb2;
  }
  else {
    iVar12 = (int)param_1;
    pVVar7 = (Variant *)Array::operator[](iVar12);
    uVar8 = Variant::operator_cast_to_unsigned_long(pVVar7);
    *(ulong *)this = uVar8;
    pVVar7 = (Variant *)Array::operator[](iVar12);
    uVar5 = Variant::operator_cast_to_int(pVVar7);
    uVar6 = Array::size();
    if (uVar6 < uVar5) {
      Array::size();
      itos((long)&local_60);
      local_58 = ", actual size: ";
      local_70 = 0;
      local_50 = 0xf;
      String::parse_latin1((StrRange *)&local_70);
      itos((long)&local_80);
      local_90 = 0;
      local_58 = " message from script debugger, message too short. Expected size: ";
      local_50 = 0x41;
      String::parse_latin1((StrRange *)&local_90);
      local_58 = "VisualProfilerFrame";
      local_a0 = 0;
      local_50 = 0x13;
      String::parse_latin1((StrRange *)&local_a0);
      local_58 = "Malformed ";
      local_a8 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_a8);
      String::operator+((String *)&local_98,(String *)&local_a8);
      String::operator+((String *)&local_88,(String *)&local_98);
      String::operator+((String *)&local_78,(String *)&local_88);
      String::operator+((String *)&local_68,(String *)&local_78);
      String::operator+((String *)&local_58,(String *)&local_68);
      pcVar10 = "Condition \"(uint32_t)p_arr.size() < (uint32_t)(size)\" is true. Returning: false";
      uVar9 = 0xb5;
    }
    else {
      iVar3 = (int)uVar5 / 3;
      CowData<RenderingServer::FrameProfileArea>::resize<false>
                ((CowData<RenderingServer::FrameProfileArea> *)(this + 0x10),(long)iVar3);
      CowData<RenderingServer::FrameProfileArea>::_copy_on_write
                ((CowData<RenderingServer::FrameProfileArea> *)(this + 0x10));
      if ((int)uVar5 < 3) {
        uVar5 = 2;
      }
      else {
        iVar13 = 0;
        plVar11 = *(long **)(this + 0x10);
        do {
          Array::operator[](iVar12);
          Variant::operator_cast_to_String((Variant *)&local_58);
          pcVar4 = local_58;
          pcVar10 = (char *)*plVar11;
          if (pcVar10 == local_58) {
            if (pcVar10 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(pcVar10 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_58 = (char *)0x0;
                Memory::free_static(pcVar4 + -0x10,false);
              }
            }
          }
          else {
            if (pcVar10 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(pcVar10 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar2 = *plVar11;
                *plVar11 = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
              }
              else {
                *plVar11 = 0;
              }
            }
            *plVar11 = (long)local_58;
          }
          iVar13 = iVar13 + 1;
          pVVar7 = (Variant *)Array::operator[](iVar12);
          dVar14 = Variant::operator_cast_to_double(pVVar7);
          plVar11[2] = (long)dVar14;
          pVVar7 = (Variant *)Array::operator[](iVar12);
          dVar14 = Variant::operator_cast_to_double(pVVar7);
          plVar11[1] = (long)dVar14;
          plVar11 = plVar11 + 3;
        } while (iVar13 < iVar3);
        uVar5 = iVar3 * 3 + 2;
      }
      uVar6 = Array::size();
      uVar9 = 1;
      if (uVar6 <= uVar5) goto LAB_0010346e;
      Array::size();
      itos((long)&local_60);
      local_58 = ", actual size: ";
      local_70 = 0;
      local_50 = 0xf;
      String::parse_latin1((StrRange *)&local_70);
      itos((long)&local_80);
      local_90 = 0;
      local_58 = " message from script debugger, message too long. Expected size: ";
      local_50 = 0x40;
      String::parse_latin1((StrRange *)&local_90);
      local_58 = "VisualProfilerFrame";
      local_a0 = 0;
      local_50 = 0x13;
      String::parse_latin1((StrRange *)&local_a0);
      local_58 = "Malformed ";
      local_a8 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_a8);
      String::operator+((String *)&local_98,(String *)&local_a8);
      String::operator+((String *)&local_88,(String *)&local_98);
      String::operator+((String *)&local_78,(String *)&local_88);
      String::operator+((String *)&local_68,(String *)&local_78);
      String::operator+((String *)&local_58,(String *)&local_68);
      pcVar10 = "Condition \"(uint32_t)p_arr.size() > (uint32_t)idx\" is true. Returning: false";
      uVar9 = 0xbf;
    }
  }
  _err_print_error("deserialize","servers/debugger/servers_debugger.cpp",uVar9,pcVar10,&local_58,0,0
                  );
  pcVar10 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar11 = (long *)(local_58 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar10 + -0x10,false);
    }
  }
  lVar2 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar11 = (long *)(local_68 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar11 = (long *)(local_78 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar11 = (long *)(local_88 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar11 = (long *)(local_98 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar11 = (long *)(local_a8 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar11 = (long *)(local_a0 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar11 = (long *)(local_90 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar11 = (long *)(local_80 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar11 = (long *)(local_70 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar11 = (long *)(local_60 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      uVar9 = 0;
      goto LAB_0010346e;
    }
  }
  uVar9 = 0;
LAB_0010346e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<ServersDebugger::ScriptFunctionInfo>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<ServersDebugger::ScriptFunctionInfo>::_copy_on_write
          (CowData<ServersDebugger::ScriptFunctionInfo> *this)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  StringName *this_00;
  ulong uVar7;
  StringName *pSVar8;
  long lVar9;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar2 * 0x28 != 0) {
    uVar7 = lVar2 * 0x28 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar6 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar6 != (undefined8 *)0x0) {
    lVar9 = 0;
    *puVar6 = 1;
    puVar6[1] = lVar2;
    this_00 = (StringName *)(puVar6 + 2);
    if (lVar2 != 0) {
      do {
        pSVar8 = this_00 + *(long *)this + (-0x10 - (long)puVar6);
        lVar9 = lVar9 + 1;
        StringName::StringName(this_00,pSVar8);
        uVar4 = *(undefined8 *)(pSVar8 + 0x10);
        uVar5 = *(undefined8 *)(pSVar8 + 0x18);
        uVar1 = *(undefined8 *)(pSVar8 + 0x20);
        *(undefined8 *)(this_00 + 8) = *(undefined8 *)(pSVar8 + 8);
        *(undefined8 *)(this_00 + 0x10) = uVar4;
        *(undefined8 *)(this_00 + 0x18) = uVar5;
        *(undefined8 *)(this_00 + 0x20) = uVar1;
        this_00 = this_00 + 0x28;
      } while (lVar2 != lVar9);
    }
    _unref(this);
    *(StringName **)this = (StringName *)(puVar6 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* ServersDebugger::ServersProfilerFrame::deserialize(Array const&) */

undefined8 __thiscall
ServersDebugger::ServersProfilerFrame::deserialize(ServersProfilerFrame *this,Array *param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  Variant *pVVar8;
  StringName *pSVar9;
  undefined1 (*pauVar10) [16];
  undefined8 uVar11;
  char *pcVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long in_FS_OFFSET;
  double dVar17;
  CowData<char32_t> *local_110;
  CowData<char32_t> *local_108;
  CowData<char32_t> *local_100;
  CowData<char32_t> *local_f8;
  CowData<char32_t> *local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  char *local_a0;
  undefined1 local_98 [12];
  int iStack_8c;
  undefined1 local_88 [16];
  double local_78;
  char *local_68;
  double local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = Array::size();
  if (uVar4 < 7) {
    Array::size();
    itos((long)local_98);
    local_68 = ", actual size: ";
    local_a8 = 0;
    local_60 = 7.4109846876187e-323;
    String::parse_latin1((StrRange *)&local_a8);
    itos((long)&local_b8);
    local_68 = " message from script debugger, message too short. Expected size: ";
    local_c8 = 0;
    local_60 = 3.2114266979681e-322;
    String::parse_latin1((StrRange *)&local_c8);
    local_68 = "ServersProfilerFrame";
    local_d8 = 0;
    local_60 = 9.88131291682493e-323;
    String::parse_latin1((StrRange *)&local_d8);
    local_68 = "Malformed ";
    local_e0 = 0;
    local_60 = 4.94065645841247e-323;
    String::parse_latin1((StrRange *)&local_e0);
    String::operator+((String *)&local_d0,(String *)&local_e0);
    String::operator+((String *)&local_c0,(String *)&local_d0);
    String::operator+((String *)&local_b0,(String *)&local_c0);
    String::operator+((String *)&local_a0,(String *)&local_b0);
    String::operator+((String *)&local_68,(String *)&local_a0);
    _err_print_error("deserialize","servers/debugger/servers_debugger.cpp",0x79,
                     "Condition \"(uint32_t)p_arr.size() < (uint32_t)(7)\" is true. Returning: false"
                     ,(String *)&local_68,0,0);
    pcVar12 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar12 + -0x10,false);
      }
    }
    pcVar12 = local_a0;
    if (local_a0 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = (char *)0x0;
        Memory::free_static(pcVar12 + -0x10,false);
      }
    }
    lVar14 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      plVar1 = (long *)(local_b0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b0 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    lVar14 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    lVar14 = local_e0;
    if (local_e0 != 0) {
      LOCK();
      plVar1 = (long *)(local_e0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e0 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    lVar14 = local_d8;
    if (local_d8 != 0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    lVar14 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    lVar14 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      plVar1 = (long *)(local_b8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b8 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if (local_98._0_8_ != 0) {
LAB_0010453b:
      LOCK();
      plVar1 = (long *)(local_98._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        uVar11 = local_98._0_8_;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = stack0xffffffffffffff70;
        _local_98 = auVar2 << 0x40;
        Memory::free_static((void *)(uVar11 + -0x10),false);
      }
    }
  }
  else {
    iVar15 = (int)param_1;
    pVVar8 = (Variant *)Array::operator[](iVar15);
    iVar5 = Variant::operator_cast_to_int(pVVar8);
    *(int *)this = iVar5;
    pVVar8 = (Variant *)Array::operator[](iVar15);
    dVar17 = Variant::operator_cast_to_double(pVVar8);
    *(double *)(this + 8) = dVar17;
    pVVar8 = (Variant *)Array::operator[](iVar15);
    dVar17 = Variant::operator_cast_to_double(pVVar8);
    *(double *)(this + 0x10) = dVar17;
    pVVar8 = (Variant *)Array::operator[](iVar15);
    dVar17 = Variant::operator_cast_to_double(pVVar8);
    *(double *)(this + 0x18) = dVar17;
    pVVar8 = (Variant *)Array::operator[](iVar15);
    dVar17 = Variant::operator_cast_to_double(pVVar8);
    *(double *)(this + 0x20) = dVar17;
    pVVar8 = (Variant *)Array::operator[](iVar15);
    dVar17 = Variant::operator_cast_to_double(pVVar8);
    *(double *)(this + 0x28) = dVar17;
    pVVar8 = (Variant *)Array::operator[](iVar15);
    local_f8._0_4_ = Variant::operator_cast_to_int(pVVar8);
    if ((int)local_f8 == 0) {
      uVar4 = 8;
    }
    else {
      local_108._0_4_ = 7;
      do {
        uVar6 = Array::size();
        uVar4 = (uint)local_108 + 2;
        if (uVar6 < uVar4) {
          Array::size();
          itos((long)local_98);
          local_68 = ", actual size: ";
          local_a8 = 0;
          local_60 = 7.4109846876187e-323;
          String::parse_latin1((StrRange *)&local_a8);
          itos((long)&local_b8);
          local_68 = " message from script debugger, message too short. Expected size: ";
          local_c8 = 0;
          local_60 = 3.2114266979681e-322;
          String::parse_latin1((StrRange *)&local_c8);
          local_68 = "ServersProfilerFrame";
          local_d8 = 0;
          local_60 = 9.88131291682493e-323;
          String::parse_latin1((StrRange *)&local_d8);
          local_68 = "Malformed ";
          local_e0 = 0;
          local_60 = 4.94065645841247e-323;
          String::parse_latin1((StrRange *)&local_e0);
          String::operator+((String *)&local_d0,(String *)&local_e0);
          String::operator+((String *)&local_c0,(String *)&local_d0);
          String::operator+((String *)&local_b0,(String *)&local_c0);
          String::operator+((String *)&local_a0,(String *)&local_b0);
          String::operator+((String *)&local_68,(String *)&local_a0);
          _err_print_error("deserialize","servers/debugger/servers_debugger.cpp",0x83,
                           "Condition \"(uint32_t)p_arr.size() < (uint32_t)(idx + 2)\" is true. Returning: false"
                           ,(Variant *)&local_68,0,0);
          pcVar12 = local_68;
          if (local_68 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = (char *)0x0;
              Memory::free_static(pcVar12 + -0x10,false);
            }
          }
          pcVar12 = local_a0;
          if (local_a0 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_a0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_a0 = (char *)0x0;
              Memory::free_static(pcVar12 + -0x10,false);
            }
          }
          lVar14 = local_b0;
          if (local_b0 != 0) {
            LOCK();
            plVar1 = (long *)(local_b0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_b0 = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          lVar14 = local_c0;
          if (local_c0 != 0) {
            LOCK();
            plVar1 = (long *)(local_c0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_c0 = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          lVar14 = local_d0;
          if (local_d0 != 0) {
            LOCK();
            plVar1 = (long *)(local_d0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_d0 = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          lVar14 = local_e0;
          if (local_e0 != 0) {
            LOCK();
            plVar1 = (long *)(local_e0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_e0 = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          lVar14 = local_d8;
          if (local_d8 != 0) {
            LOCK();
            plVar1 = (long *)(local_d8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_d8 = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          lVar14 = local_c8;
          if (local_c8 != 0) {
            LOCK();
            plVar1 = (long *)(local_c8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_c8 = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          lVar14 = local_b8;
          if (local_b8 != 0) {
            LOCK();
            plVar1 = (long *)(local_b8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_b8 = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          lVar14 = local_a8;
          if (local_a8 != 0) {
            LOCK();
            plVar1 = (long *)(local_a8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_a8 = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          if (local_98._0_8_ == 0) goto LAB_00104550;
          goto LAB_0010453b;
        }
        local_f8._0_4_ = (int)local_f8 + -1;
        _local_98 = (undefined1  [16])0x0;
        Array::operator[](iVar15);
        Variant::operator_cast_to_StringName((Variant *)&local_68);
        if ((char *)local_98._0_8_ == local_68) {
          if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          local_98._0_8_ = local_68;
        }
        pVVar8 = (Variant *)Array::operator[](iVar15);
        iVar5 = Variant::operator_cast_to_int(pVVar8);
        uVar6 = Array::size();
        if (uVar6 < uVar4 + iVar5) {
          Array::size();
          itos((long)&local_a0);
          local_68 = ", actual size: ";
          local_b0 = 0;
          local_60 = 7.4109846876187e-323;
          String::parse_latin1((StrRange *)&local_b0);
          itos((long)&local_c0);
          local_d0 = 0;
          local_68 = " message from script debugger, message too short. Expected size: ";
          local_60 = 3.2114266979681e-322;
          String::parse_latin1((StrRange *)&local_d0);
          local_68 = "ServersProfilerFrame";
          local_e0 = 0;
          local_60 = 9.88131291682493e-323;
          String::parse_latin1((StrRange *)&local_e0);
          local_68 = "Malformed ";
          local_e8 = 0;
          local_60 = 4.94065645841247e-323;
          String::parse_latin1((StrRange *)&local_e8);
          String::operator+((String *)&local_d8,(String *)&local_e8);
          String::operator+((String *)&local_c8,(String *)&local_d8);
          String::operator+((String *)&local_b8,(String *)&local_c8);
          String::operator+((String *)&local_a8,(String *)&local_b8);
          String::operator+((String *)&local_68,(String *)&local_a8);
          _err_print_error("deserialize","servers/debugger/servers_debugger.cpp",0x89,
                           "Condition \"(uint32_t)p_arr.size() < (uint32_t)(idx + sub_data_size)\" is true. Returning: false"
                           ,(Variant *)&local_68,0,0);
          pcVar12 = local_68;
          if (local_68 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = (char *)0x0;
              Memory::free_static(pcVar12 + -0x10,false);
            }
          }
          lVar14 = local_a8;
          if (local_a8 != 0) {
            LOCK();
            plVar1 = (long *)(local_a8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_a8 = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          lVar14 = local_b8;
          if (local_b8 != 0) {
            LOCK();
            plVar1 = (long *)(local_b8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_b8 = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          lVar14 = local_c8;
          if (local_c8 != 0) {
            LOCK();
            plVar1 = (long *)(local_c8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_c8 = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          lVar14 = local_d8;
          if (local_d8 != 0) {
            LOCK();
            plVar1 = (long *)(local_d8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_d8 = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          lVar14 = local_e8;
          if (local_e8 != 0) {
            LOCK();
            plVar1 = (long *)(local_e8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_e8 = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          lVar14 = local_e0;
          if (local_e0 != 0) {
            LOCK();
            plVar1 = (long *)(local_e0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_e0 = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          lVar14 = local_d0;
          if (local_d0 != 0) {
            LOCK();
            plVar1 = (long *)(local_d0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_d0 = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          lVar14 = local_c0;
          if (local_c0 != 0) {
            LOCK();
            plVar1 = (long *)(local_c0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_c0 = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          lVar14 = local_b0;
          if (local_b0 != 0) {
            LOCK();
            plVar1 = (long *)(local_b0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_b0 = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          pcVar12 = local_a0;
          if (local_a0 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_a0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_a0 = (char *)0x0;
              Memory::free_static(pcVar12 + -0x10,false);
              ServerInfo::~ServerInfo((ServerInfo *)local_98);
              goto LAB_00104550;
            }
          }
          ServerInfo::~ServerInfo((ServerInfo *)local_98);
          goto LAB_00104550;
        }
        iVar13 = 0;
        if (1 < iVar5) {
          do {
            local_68 = (char *)0x0;
            local_60 = 0.0;
            Array::operator[](iVar15);
            Variant::operator_cast_to_StringName((Variant *)&local_a0);
            if (local_68 == local_a0) {
              if ((StringName::configured != '\0') && (local_a0 != (char *)0x0)) {
                StringName::unref();
              }
            }
            else {
              StringName::unref();
              local_68 = local_a0;
            }
            pVVar8 = (Variant *)Array::operator[](iVar15);
            local_60 = Variant::operator_cast_to_double(pVVar8);
            if (stack0xffffffffffffff70 == (long *)0x0) {
              pauVar10 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
              stack0xffffffffffffff70 = (long *)pauVar10;
              *(undefined4 *)pauVar10[1] = 0;
              *pauVar10 = (undefined1  [16])0x0;
            }
            pSVar9 = (StringName *)operator_new(0x28,DefaultAllocator::alloc);
            *(undefined8 *)pSVar9 = 0;
            *(undefined8 *)(pSVar9 + 8) = 0;
            *(undefined8 *)(pSVar9 + 0x20) = 0;
            *(undefined1 (*) [16])(pSVar9 + 0x10) = (undefined1  [16])0x0;
            StringName::operator=(pSVar9,(StringName *)&local_68);
            lVar14 = stack0xffffffffffffff70[1];
            *(double *)(pSVar9 + 8) = local_60;
            *(undefined8 *)(pSVar9 + 0x10) = 0;
            *(long *)(pSVar9 + 0x18) = lVar14;
            *(long **)(pSVar9 + 0x20) = stack0xffffffffffffff70;
            if (lVar14 != 0) {
              *(StringName **)(lVar14 + 0x10) = pSVar9;
            }
            stack0xffffffffffffff70[1] = (long)pSVar9;
            if (*stack0xffffffffffffff70 == 0) {
              *stack0xffffffffffffff70 = (long)pSVar9;
            }
            *(int *)(stack0xffffffffffffff70 + 2) = (int)stack0xffffffffffffff70[2] + 1;
            if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
              StringName::unref();
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < iVar5 / 2);
          uVar4 = (uint)local_108 + 2 + (iVar5 / 2) * 2;
        }
        List<ServersDebugger::ServerInfo,DefaultAllocator>::push_back
                  ((List<ServersDebugger::ServerInfo,DefaultAllocator> *)(this + 0x30),
                   (ServerInfo *)local_98);
        ServerInfo::~ServerInfo((ServerInfo *)local_98);
        local_108._0_4_ = uVar4;
      } while ((int)local_f8 != 0);
      uVar4 = uVar4 + 1;
    }
    uVar6 = Array::size();
    if (uVar6 < uVar4) {
      Array::size();
      itos((long)local_98);
      local_a8 = 0;
      local_68 = ", actual size: ";
      local_60 = 7.4109846876187e-323;
      String::parse_latin1((StrRange *)&local_a8);
      itos((long)&local_b8);
      local_68 = " message from script debugger, message too short. Expected size: ";
      local_c8 = 0;
      local_60 = 3.2114266979681e-322;
      String::parse_latin1((StrRange *)&local_c8);
      local_68 = "ServersProfilerFrame";
      local_d8 = 0;
      local_60 = 9.88131291682493e-323;
      String::parse_latin1((StrRange *)&local_d8);
      local_68 = "Malformed ";
      local_e0 = 0;
      local_60 = 4.94065645841247e-323;
      String::parse_latin1((StrRange *)&local_e0);
      String::operator+((String *)&local_d0,(String *)&local_e0);
      String::operator+((String *)&local_c0,(String *)&local_d0);
      String::operator+((String *)&local_b0,(String *)&local_c0);
      String::operator+((String *)&local_a0,(String *)&local_b0);
      String::operator+((String *)&local_68,(String *)&local_a0);
      pcVar12 = 
      "Condition \"(uint32_t)p_arr.size() < (uint32_t)(idx + 1)\" is true. Returning: false";
      uVar11 = 0x93;
    }
    else {
      pVVar8 = (Variant *)Array::operator[](iVar15);
      iVar5 = Variant::operator_cast_to_int(pVVar8);
      uVar6 = Array::size();
      if (uVar6 < iVar5 + uVar4) {
        Array::size();
        itos((long)local_98);
        local_a8 = 0;
        local_68 = ", actual size: ";
        local_60 = 7.4109846876187e-323;
        String::parse_latin1((StrRange *)&local_a8);
        itos((long)&local_b8);
        local_68 = " message from script debugger, message too short. Expected size: ";
        local_c8 = 0;
        local_60 = 3.2114266979681e-322;
        String::parse_latin1((StrRange *)&local_c8);
        local_68 = "ServersProfilerFrame";
        local_d8 = 0;
        local_60 = 9.88131291682493e-323;
        String::parse_latin1((StrRange *)&local_d8);
        local_68 = "Malformed ";
        local_e0 = 0;
        local_60 = 4.94065645841247e-323;
        String::parse_latin1((StrRange *)&local_e0);
        String::operator+((String *)&local_d0,(String *)&local_e0);
        String::operator+((String *)&local_c0,(String *)&local_d0);
        String::operator+((String *)&local_b0,(String *)&local_c0);
        String::operator+((String *)&local_a0,(String *)&local_b0);
        String::operator+((String *)&local_68,(String *)&local_a0);
        pcVar12 = 
        "Condition \"(uint32_t)p_arr.size() < (uint32_t)(idx + func_size)\" is true. Returning: false"
        ;
        uVar11 = 0x96;
      }
      else {
        if (4 < iVar5) {
          iVar13 = 0;
          do {
            local_88 = (undefined1  [16])0x0;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = _LC67;
            _local_98 = auVar3 << 0x40;
            local_78 = 0.0;
            pVVar8 = (Variant *)Array::operator[](iVar15);
            iVar7 = Variant::operator_cast_to_int(pVVar8);
            local_98._8_4_ = iVar7;
            pVVar8 = (Variant *)Array::operator[](iVar15);
            iVar7 = Variant::operator_cast_to_int(pVVar8);
            iStack_8c = iVar7;
            pVVar8 = (Variant *)Array::operator[](iVar15);
            dVar17 = Variant::operator_cast_to_double(pVVar8);
            local_88._0_8_ = dVar17;
            pVVar8 = (Variant *)Array::operator[](iVar15);
            dVar17 = Variant::operator_cast_to_double(pVVar8);
            local_88._8_8_ = dVar17;
            pVVar8 = (Variant *)Array::operator[](iVar15);
            local_78 = Variant::operator_cast_to_double(pVVar8);
            StringName::StringName((StringName *)&local_68,(StringName *)local_98);
            local_60 = (double)stack0xffffffffffffff70;
            local_58 = local_88._0_8_;
            uStack_50 = local_88._8_8_;
            local_48 = local_78;
            if (*(long *)(this + 0x40) == 0) {
              lVar14 = 1;
            }
            else {
              lVar14 = *(long *)(*(long *)(this + 0x40) + -8) + 1;
            }
            iVar7 = CowData<ServersDebugger::ScriptFunctionInfo>::resize<false>
                              ((CowData<ServersDebugger::ScriptFunctionInfo> *)(this + 0x40),lVar14)
            ;
            if (iVar7 == 0) {
              if (*(long *)(this + 0x40) == 0) {
                lVar16 = -1;
                lVar14 = 0;
              }
              else {
                lVar14 = *(long *)(*(long *)(this + 0x40) + -8);
                lVar16 = lVar14 + -1;
                if (-1 < lVar16) {
                  CowData<ServersDebugger::ScriptFunctionInfo>::_copy_on_write
                            ((CowData<ServersDebugger::ScriptFunctionInfo> *)(this + 0x40));
                  pSVar9 = (StringName *)(*(long *)(this + 0x40) + lVar16 * 0x28);
                  StringName::operator=(pSVar9,(StringName *)&local_68);
                  *(double *)(pSVar9 + 8) = local_60;
                  *(undefined8 *)(pSVar9 + 0x10) = local_58;
                  *(undefined8 *)(pSVar9 + 0x18) = uStack_50;
                  *(double *)(pSVar9 + 0x20) = local_48;
                  goto LAB_0010427a;
                }
              }
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,lVar16,lVar14,"p_index","size()",""
                         ,false,false);
            }
            else {
              _err_print_error("push_back","./core/templates/vector.h",0x142,
                               "Condition \"err\" is true. Returning: true",0,0);
            }
LAB_0010427a:
            if ((StringName::configured != '\0') &&
               (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0'))
                && (local_98._0_8_ != 0)))) {
              StringName::unref();
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < iVar5 / 5);
          uVar4 = uVar4 + (iVar5 / 5) * 5;
        }
        uVar6 = Array::size();
        uVar11 = 1;
        if (uVar6 <= uVar4) goto LAB_00104552;
        Array::size();
        itos((long)local_98);
        local_a8 = 0;
        local_68 = ", actual size: ";
        local_60 = 7.4109846876187e-323;
        String::parse_latin1((StrRange *)&local_a8);
        itos((long)&local_b8);
        local_68 = " message from script debugger, message too long. Expected size: ";
        local_c8 = 0;
        local_60 = 3.16202013338398e-322;
        String::parse_latin1((StrRange *)&local_c8);
        local_68 = "ServersProfilerFrame";
        local_d8 = 0;
        local_60 = 9.88131291682493e-323;
        String::parse_latin1((StrRange *)&local_d8);
        local_68 = "Malformed ";
        local_e0 = 0;
        local_60 = 4.94065645841247e-323;
        String::parse_latin1((StrRange *)&local_e0);
        String::operator+((String *)&local_d0,(String *)&local_e0);
        String::operator+((String *)&local_c0,(String *)&local_d0);
        String::operator+((String *)&local_b0,(String *)&local_c0);
        String::operator+((String *)&local_a0,(String *)&local_b0);
        String::operator+((String *)&local_68,(String *)&local_a0);
        pcVar12 = "Condition \"(uint32_t)p_arr.size() > (uint32_t)idx\" is true. Returning: false";
        uVar11 = 0xa1;
      }
    }
    local_f0 = (CowData<char32_t> *)&local_d8;
    local_f8 = (CowData<char32_t> *)&local_c8;
    local_100 = (CowData<char32_t> *)&local_b8;
    local_108 = (CowData<char32_t> *)&local_a8;
    local_110 = (CowData<char32_t> *)local_98;
    _err_print_error("deserialize","servers/debugger/servers_debugger.cpp",uVar11,pcVar12,
                     (CowData<char32_t> *)&local_68,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
    CowData<char32_t>::_unref(local_f0);
    CowData<char32_t>::_unref(local_f8);
    CowData<char32_t>::_unref(local_100);
    CowData<char32_t>::_unref(local_108);
    CowData<char32_t>::_unref(local_110);
  }
LAB_00104550:
  uVar11 = 0;
LAB_00104552:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}



/* CowData<ScriptLanguage::ProfilingInfo>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<ScriptLanguage::ProfilingInfo>::_copy_on_write(CowData<ScriptLanguage::ProfilingInfo> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  StringName *this_00;
  ulong uVar7;
  StringName *pSVar8;
  long lVar9;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 0x28 != 0) {
    uVar7 = lVar1 * 0x28 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar6 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar6 != (undefined8 *)0x0) {
    lVar9 = 0;
    *puVar6 = 1;
    puVar6[1] = lVar1;
    this_00 = (StringName *)(puVar6 + 2);
    if (lVar1 != 0) {
      do {
        pSVar8 = this_00 + *(long *)this + (-0x10 - (long)puVar6);
        lVar9 = lVar9 + 1;
        StringName::StringName(this_00,pSVar8);
        uVar3 = *(undefined8 *)(pSVar8 + 0x20);
        uVar4 = *(undefined8 *)(pSVar8 + 8);
        uVar5 = *(undefined8 *)(pSVar8 + 0x10);
        *(undefined8 *)(this_00 + 0x18) = *(undefined8 *)(pSVar8 + 0x18);
        *(undefined8 *)(this_00 + 0x20) = uVar3;
        *(undefined8 *)(this_00 + 8) = uVar4;
        *(undefined8 *)(this_00 + 0x10) = uVar5;
        this_00 = this_00 + 0x28;
      } while (lVar1 != lVar9);
    }
    _unref(this);
    *(StringName **)this = (StringName *)(puVar6 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* ServersDebugger::ServersDebugger() */

void __thiscall ServersDebugger::ServersDebugger(ServersDebugger *this)

{
  long *plVar1;
  String *pSVar2;
  char cVar3;
  RefCounted *this_00;
  long lVar4;
  RefCounted *pRVar5;
  Object *pOVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  byte bVar8;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  bVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined8 *)this = 0;
  singleton = this;
  Ref<ServersDebugger::ServersProfiler>::instantiate<>
            ((Ref<ServersDebugger::ServersProfiler> *)(this + 8));
  pSVar2 = *(String **)(this + 8);
  local_60 = 0;
  local_58 = "servers";
  local_50 = 7;
  String::parse_latin1((StrRange *)&local_60);
  EngineProfiler::bind(pSVar2);
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
  this_00 = (RefCounted *)operator_new(0x200,"");
  pRVar5 = this_00;
  for (lVar4 = 0x40; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)pRVar5 = 0;
    pRVar5 = pRVar5 + (ulong)bVar8 * -0x10 + 8;
  }
  RefCounted::RefCounted(this_00);
  *(undefined8 *)(this_00 + 0x180) = 0;
  *(code **)this_00 = ProjectSettings::get_singleton;
  StringName::StringName((StringName *)(this_00 + 0x188),"_toggle",false);
  this_00[400] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x198) = 0;
  StringName::StringName((StringName *)(this_00 + 0x1a0),"_add_frame",false);
  this_00[0x1a8] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1b0) = 0;
  StringName::StringName((StringName *)(this_00 + 0x1b8),"_tick",false);
  this_00[0x1c0] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1c8) = 0;
  *(undefined ***)this_00 = &PTR__initialize_classv_0010d8c0;
  *(undefined8 *)(this_00 + 0x1f8) = 2;
  *(undefined1 (*) [16])(this_00 + 0x1d8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x1e8) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar3 = RefCounted::init_ref();
  if (cVar3 == '\0') {
    pOVar6 = *(Object **)(this + 0x10);
    if (pOVar6 == (Object *)0x0) goto LAB_00105758;
    *(undefined8 *)(this + 0x10) = 0;
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      this_00 = (RefCounted *)0x0;
      cVar3 = predelete_handler(pOVar6);
      if (cVar3 != '\0') {
LAB_001058f3:
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
        pOVar7 = (Object *)this_00;
        if (this_00 != (RefCounted *)0x0) goto LAB_0010583d;
      }
    }
  }
  else {
    pOVar6 = *(Object **)(this + 0x10);
    pOVar7 = pOVar6;
    if (this_00 != (RefCounted *)pOVar6) {
      *(RefCounted **)(this + 0x10) = this_00;
      cVar3 = RefCounted::reference();
      pOVar7 = (Object *)this_00;
      if (cVar3 == '\0') {
        *(undefined8 *)(this + 0x10) = 0;
        if (pOVar6 != (Object *)0x0) {
          cVar3 = RefCounted::unreference();
joined_r0x001058d3:
          if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar6), cVar3 != '\0'))
          goto LAB_001058f3;
        }
      }
      else if (pOVar6 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        goto joined_r0x001058d3;
      }
    }
LAB_0010583d:
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
      pOVar6 = *(Object **)(this + 0x10);
      goto LAB_00105758;
    }
  }
  pOVar6 = *(Object **)(this + 0x10);
LAB_00105758:
  local_60 = 0;
  local_58 = "visual";
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_60);
  EngineProfiler::bind((String *)pOVar6);
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
  StringName::StringName((StringName *)&local_58,"servers",false);
  EngineDebugger::register_message_capture((StringName *)&local_58,_capture,0);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ServersDebugger::initialize() */

void ServersDebugger::initialize(void)

{
  ServersDebugger *this;
  
  if ((EngineDebugger::singleton != 0) && (EngineDebugger::script_debugger != 0)) {
    this = (ServersDebugger *)operator_new(0x18,"");
    ServersDebugger(this);
    return;
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



/* EngineProfiler::is_class_ptr(void*) const */

uint __thiscall EngineProfiler::is_class_ptr(EngineProfiler *this,void *param_1)

{
  return (uint)CONCAT71(0x10da,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10da,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10da,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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



/* ServersDebugger::VisualProfiler::add(Array const&) */

void ServersDebugger::VisualProfiler::add(Array *param_1)

{
  return;
}



/* CowData<ScriptLanguage::ProfilingInfo*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<ScriptLanguage::ProfilingInfo*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RenderingServer::FrameProfileArea>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RenderingServer::FrameProfileArea>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<RenderingServer::FrameProfileArea>::resize<false>(long) [clone .isra.0] [clone
   .cold] */

void CowData<RenderingServer::FrameProfileArea>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void FUN_00105c4c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<ServersDebugger::ScriptFunctionInfo>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<ServersDebugger::ScriptFunctionInfo>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<ScriptLanguage::ProfilingInfo>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<ScriptLanguage::ProfilingInfo>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
LAB_00105cb3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105cb3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EngineProfiler");
      goto LAB_00105d1e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EngineProfiler");
LAB_00105d1e:
  return &_get_class_namev()::_class_name_static;
}



/* ServersDebugger::ScriptsProfiler::toggle(bool, Array const&) */

void __thiscall
ServersDebugger::ScriptsProfiler::toggle(ScriptsProfiler *this,bool param_1,Array *param_2)

{
  uint uVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  int *piVar8;
  Variant *pVVar9;
  int iVar10;
  long lVar11;
  
  if (param_1) {
    if ((*(long *)(this + 0x1f8) != 0) && (*(int *)(this + 0x21c) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x218) * 4);
      if (uVar1 != 0) {
        lVar11 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x200) + lVar11) != 0) {
            *(int *)(*(long *)(this + 0x200) + lVar11) = 0;
            pvVar2 = *(void **)(*(long *)(this + 0x1f8) + lVar11 * 2);
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar2,false);
            *(undefined8 *)(*(long *)(this + 0x1f8) + lVar11 * 2) = 0;
          }
          lVar11 = lVar11 + 4;
        } while ((ulong)uVar1 << 2 != lVar11);
      }
      *(undefined4 *)(this + 0x21c) = 0;
      *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
    }
    iVar6 = (int)param_2;
    if (0 < (int)ScriptServer::_language_count) {
      iVar10 = 0;
      do {
        while( true ) {
          plVar7 = (long *)ScriptServer::get_language(iVar10);
          (**(code **)(*plVar7 + 0x2f0))(plVar7);
          iVar5 = Array::size();
          if ((iVar5 == 2) && (piVar8 = (int *)Array::operator[](iVar6), *piVar8 == 1)) break;
          iVar10 = iVar10 + 1;
          if ((int)ScriptServer::_language_count <= iVar10) goto LAB_00105f10;
        }
        iVar5 = iVar10 + 1;
        plVar7 = (long *)ScriptServer::get_language(iVar10);
        pcVar3 = *(code **)(*plVar7 + 0x300);
        pVVar9 = (Variant *)Array::operator[](iVar6);
        bVar4 = Variant::operator_cast_to_bool(pVVar9);
        (*pcVar3)(plVar7,bVar4);
        iVar10 = iVar5;
      } while (iVar5 < (int)ScriptServer::_language_count);
    }
LAB_00105f10:
    iVar10 = Array::size();
    if ((0 < iVar10) && (piVar8 = (int *)Array::operator[](iVar6), *piVar8 == 2)) {
      pVVar9 = (Variant *)Array::operator[](iVar6);
      iVar6 = Variant::operator_cast_to_int(pVVar9);
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      *(int *)(this + 0x220) = iVar6;
    }
  }
  else {
    iVar6 = 0;
    if (0 < (int)ScriptServer::_language_count) {
      do {
        iVar10 = iVar6 + 1;
        plVar7 = (long *)ScriptServer::get_language(iVar6);
        (**(code **)(*plVar7 + 0x2f8))(plVar7);
        iVar6 = iVar10;
      } while (iVar10 < (int)ScriptServer::_language_count);
    }
  }
  return;
}



/* SortArray<ScriptLanguage::ProfilingInfo*, ServersDebugger::ScriptsProfiler::ProfileInfoSort,
   true>::introsort(long, long, ScriptLanguage::ProfilingInfo**, long) const [clone .isra.0] */

void SortArray<ScriptLanguage::ProfilingInfo*,ServersDebugger::ScriptsProfiler::ProfileInfoSort,true>
     ::introsort(long param_1,long param_2,ProfilingInfo **param_3,long param_4)

{
  ulong uVar1;
  ProfilingInfo *pPVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ProfilingInfo **ppPVar6;
  ulong uVar7;
  ProfilingInfo **ppPVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ProfilingInfo *pPVar12;
  ulong uVar13;
  ProfilingInfo *pPVar14;
  ProfilingInfo **ppPVar15;
  long lVar16;
  long local_58;
  
  lVar16 = param_2 - param_1;
  if (lVar16 < 0x11) {
    return;
  }
  if (param_4 == 0) {
LAB_001061d2:
    lVar10 = lVar16 + -2 >> 1;
    lVar11 = lVar10 * 2 + 2;
    ppPVar8 = param_3 + param_1 + lVar10;
    pPVar12 = *ppPVar8;
    lVar5 = lVar10;
    lVar9 = lVar11;
    if (lVar16 <= lVar11) goto LAB_001062de;
LAB_00106213:
    do {
      pPVar2 = param_3[param_1 + lVar11];
      pPVar14 = param_3[param_1 + lVar11 + -1];
      lVar3 = lVar11 + -1;
      lVar4 = lVar11;
      ppPVar6 = param_3 + param_1 + lVar11 + -1;
      if (*(ulong *)(pPVar2 + 0x10) <= *(ulong *)(pPVar14 + 0x10)) {
        lVar4 = lVar11 + 1;
        lVar3 = lVar11;
        pPVar14 = pPVar2;
        ppPVar6 = param_3 + param_1 + lVar11;
      }
      lVar11 = lVar4 * 2;
      param_3[lVar5 + param_1] = pPVar14;
      lVar5 = lVar3;
    } while (lVar16 != lVar11 && SBORROW8(lVar16,lVar11) == lVar16 + lVar4 * -2 < 0);
    ppPVar15 = ppPVar6;
    if (lVar16 == lVar11) goto LAB_001062e4;
    do {
      lVar11 = lVar9;
      lVar9 = lVar3 + -1;
      if (lVar3 <= lVar10) goto LAB_00106422;
      uVar7 = *(ulong *)(pPVar12 + 0x10);
      do {
        lVar5 = lVar9 >> 1;
        pPVar2 = param_3[param_1 + lVar5];
        if (*(ulong *)(pPVar2 + 0x10) <= uVar7) {
          param_3[lVar3 + param_1] = pPVar12;
          goto joined_r0x001062be;
        }
        param_3[lVar3 + param_1] = pPVar2;
        lVar9 = (lVar5 + -1) - (lVar5 + -1 >> 0x3f);
        lVar3 = lVar5;
      } while (lVar10 < lVar5);
      param_3[param_1 + lVar5] = pPVar12;
joined_r0x001062be:
      if (lVar10 == 0) {
        ppPVar8 = param_3 + param_1;
        lVar16 = (param_2 + -1) - param_1;
        goto LAB_00106320;
      }
      while( true ) {
        ppPVar8 = ppPVar8 + -1;
        lVar11 = lVar11 + -2;
        lVar10 = lVar10 + -1;
        pPVar12 = *ppPVar8;
        lVar5 = lVar10;
        lVar9 = lVar11;
        if (lVar11 < lVar16) goto LAB_00106213;
LAB_001062de:
        lVar9 = lVar11;
        ppPVar15 = ppPVar8;
        ppPVar6 = ppPVar8;
        if (lVar11 == lVar16) break;
LAB_00106422:
        *ppPVar6 = pPVar12;
      }
LAB_001062e4:
      lVar3 = lVar11 + -1;
      ppPVar6 = param_3 + param_1 + lVar3;
      *ppPVar15 = *ppPVar6;
    } while( true );
  }
  lVar11 = param_2;
  local_58 = param_4;
LAB_00106011:
  pPVar12 = param_3[lVar11 + -1];
  local_58 = local_58 + -1;
  uVar13 = *(ulong *)(pPVar12 + 0x10);
  uVar7 = *(ulong *)(param_3[param_1] + 0x10);
  uVar1 = *(ulong *)(param_3[(lVar16 >> 1) + param_1] + 0x10);
  if (uVar1 < uVar7) {
    if (uVar13 < uVar1) {
LAB_001061a4:
      pPVar12 = param_3[(lVar16 >> 1) + param_1];
      uVar13 = uVar1;
      goto LAB_00106057;
    }
    if (uVar13 < uVar7) goto LAB_00106057;
  }
  else if (uVar7 <= uVar13) {
    if (uVar13 < uVar1) goto LAB_00106057;
    goto LAB_001061a4;
  }
  pPVar12 = param_3[param_1];
  uVar13 = uVar7;
LAB_00106057:
  lVar16 = lVar11;
  param_2 = param_1;
  do {
    if (uVar13 < uVar7) {
      if (lVar11 + -1 == param_2) {
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                         "bad comparison function; sorting will be broken",0,0);
        uVar13 = *(ulong *)(pPVar12 + 0x10);
        goto LAB_00106098;
      }
    }
    else {
LAB_00106098:
      lVar9 = lVar16 + -1;
      ppPVar8 = param_3 + lVar9;
      if (*(ulong *)(*ppPVar8 + 0x10) < uVar13) {
        ppPVar6 = param_3 + lVar16 + -2;
        while (param_1 != lVar9) {
          lVar9 = lVar9 + -1;
          ppPVar8 = ppPVar6;
          if (uVar13 <= *(ulong *)(*ppPVar6 + 0x10)) goto LAB_001060fe;
          ppPVar6 = ppPVar6 + -1;
        }
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                         "bad comparison function; sorting will be broken",0,0);
      }
LAB_001060fe:
      if (lVar9 <= param_2) break;
      pPVar2 = param_3[param_2];
      param_3[param_2] = *ppPVar8;
      uVar13 = *(ulong *)(pPVar12 + 0x10);
      *ppPVar8 = pPVar2;
      lVar16 = lVar9;
    }
    lVar9 = param_2 + 1;
    param_2 = param_2 + 1;
    uVar7 = *(ulong *)(param_3[lVar9] + 0x10);
  } while( true );
  introsort(param_2,lVar11,param_3,local_58);
  lVar16 = param_2 - param_1;
  if (lVar16 < 0x11) {
    return;
  }
  lVar11 = param_2;
  if (local_58 == 0) goto LAB_001061d2;
  goto LAB_00106011;
LAB_00106320:
  pPVar12 = ppPVar8[lVar16];
  ppPVar8[lVar16] = *ppPVar8;
  if (lVar16 < 3) {
    if (lVar16 != 2) {
      *ppPVar8 = pPVar12;
      return;
    }
    lVar11 = param_1 + 1;
    lVar9 = 0;
    lVar16 = 1;
    *ppPVar8 = param_3[lVar11];
LAB_001063a6:
    uVar7 = *(ulong *)(pPVar12 + 0x10);
    while( true ) {
      ppPVar6 = param_3 + lVar11;
      pPVar2 = param_3[param_1 + lVar9];
      if (*(ulong *)(pPVar2 + 0x10) <= uVar7) break;
      *ppPVar6 = pPVar2;
      if (lVar9 == 0) {
        param_3[param_1 + lVar9] = pPVar12;
        goto LAB_00106320;
      }
      lVar11 = param_1 + lVar9;
      lVar9 = (lVar9 + -1) / 2;
    }
  }
  else {
    lVar11 = 2;
    lVar9 = 0;
    do {
      pPVar2 = param_3[param_1 + lVar11];
      pPVar14 = param_3[param_1 + lVar11 + -1];
      lVar5 = lVar11 + -1;
      ppPVar6 = param_3 + param_1 + lVar11 + -1;
      lVar10 = lVar11;
      if (*(ulong *)(pPVar2 + 0x10) <= *(ulong *)(pPVar14 + 0x10)) {
        lVar10 = lVar11 + 1;
        lVar5 = lVar11;
        ppPVar6 = param_3 + param_1 + lVar11;
        pPVar14 = pPVar2;
      }
      lVar11 = lVar10 * 2;
      param_3[lVar9 + param_1] = pPVar14;
      lVar9 = lVar5;
    } while (lVar16 != lVar11 && SBORROW8(lVar16,lVar11) == lVar16 + lVar10 * -2 < 0);
    if (lVar16 == lVar11) {
      lVar11 = param_1 + lVar16 + -1;
      lVar9 = lVar16 + -2 >> 1;
      *ppPVar6 = param_3[lVar11];
      lVar16 = lVar16 + -1;
      goto LAB_001063a6;
    }
    lVar11 = param_1 + lVar5;
    lVar16 = lVar16 + -1;
    lVar9 = (lVar5 + -1) / 2;
    if (0 < lVar5) goto LAB_001063a6;
  }
  *ppPVar6 = pPVar12;
  goto LAB_00106320;
}



/* SortArray<List<ServersDebugger::ResourceInfo, DefaultAllocator>::Element*,
   List<ServersDebugger::ResourceInfo,
   DefaultAllocator>::AuxiliaryComparator<Comparator<ServersDebugger::ResourceInfo> >,
   true>::introsort(long, long, List<ServersDebugger::ResourceInfo, DefaultAllocator>::Element**,
   long) const [clone .isra.0] */

void SortArray<List<ServersDebugger::ResourceInfo,DefaultAllocator>::Element*,List<ServersDebugger::ResourceInfo,DefaultAllocator>::AuxiliaryComparator<Comparator<ServersDebugger::ResourceInfo>>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  int iVar1;
  int iVar2;
  Element *pEVar3;
  Element *pEVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  Element **ppEVar9;
  long lVar10;
  Element **ppEVar11;
  long lVar12;
  Element *pEVar13;
  Element **ppEVar14;
  long lVar15;
  long lVar16;
  Element *pEVar17;
  bool bVar18;
  long local_58;
  
  lVar16 = param_2 - param_1;
  if (lVar16 < 0x11) {
    return;
  }
  if (param_4 == 0) {
LAB_00106ccb:
    lVar12 = lVar16 + -2 >> 1;
    lVar15 = lVar12 * 2 + 2;
    ppEVar9 = param_3 + param_1 + lVar12;
    pEVar13 = *ppEVar9;
    lVar6 = lVar12;
    lVar7 = lVar15;
    ppEVar11 = ppEVar9;
    if (lVar16 <= lVar15) goto LAB_00106e1f;
LAB_00106d25:
    do {
      ppEVar14 = param_3 + param_1 + lVar15;
      pEVar3 = *ppEVar14;
      pEVar4 = param_3[param_1 + lVar15 + -1];
      bVar18 = *(int *)(pEVar4 + 0x20) < *(int *)(pEVar3 + 0x20);
      if (*(int *)(pEVar3 + 0x20) == *(int *)(pEVar4 + 0x20)) {
        bVar18 = *(ulong *)(pEVar3 + 0x18) < *(ulong *)(pEVar4 + 0x18);
      }
      if (bVar18) {
        param_3[lVar6 + param_1] = pEVar4;
        lVar6 = lVar15 + -1;
        ppEVar14 = param_3 + param_1 + lVar15 + -1;
        lVar10 = lVar15;
      }
      else {
        lVar10 = lVar15 + 1;
        param_3[lVar6 + param_1] = pEVar3;
        lVar6 = lVar15;
      }
      lVar15 = lVar10 * 2;
    } while (lVar15 < lVar16);
    ppEVar9 = ppEVar14;
    if (lVar15 == lVar16) goto LAB_00106e25;
    do {
      lVar10 = lVar6 + -1;
      ppEVar9 = ppEVar14;
      lVar15 = lVar7;
      if (lVar6 <= lVar12) goto LAB_00106f95;
      iVar1 = *(int *)(pEVar13 + 0x20);
      do {
        lVar7 = lVar10 >> 1;
        pEVar3 = param_3[param_1 + lVar7];
        bVar18 = iVar1 < *(int *)(pEVar3 + 0x20);
        if (*(int *)(pEVar3 + 0x20) == iVar1) {
          bVar18 = *(ulong *)(pEVar3 + 0x18) < *(ulong *)(pEVar13 + 0x18);
        }
        if (!bVar18) {
          param_3[lVar6 + param_1] = pEVar13;
          goto joined_r0x00106dff;
        }
        param_3[lVar6 + param_1] = pEVar3;
        lVar10 = (lVar7 + -1) - (lVar7 + -1 >> 0x3f);
        lVar6 = lVar7;
      } while (lVar12 < lVar7);
      param_3[param_1 + lVar7] = pEVar13;
joined_r0x00106dff:
      if (lVar12 == 0) {
        ppEVar9 = param_3 + param_1;
        lVar16 = (param_2 + -1) - param_1;
        goto LAB_00106e60;
      }
      while( true ) {
        ppEVar9 = ppEVar11 + -1;
        lVar15 = lVar15 + -2;
        lVar12 = lVar12 + -1;
        pEVar13 = *ppEVar9;
        lVar6 = lVar12;
        lVar7 = lVar15;
        ppEVar11 = ppEVar9;
        if (lVar15 < lVar16) goto LAB_00106d25;
LAB_00106e1f:
        ppEVar11 = ppEVar9;
        lVar7 = lVar15;
        if (lVar15 == lVar16) break;
LAB_00106f95:
        *ppEVar9 = pEVar13;
      }
LAB_00106e25:
      lVar6 = lVar15 + -1;
      ppEVar14 = param_3 + param_1 + lVar6;
      *ppEVar9 = *ppEVar14;
    } while( true );
  }
  lVar6 = param_2;
  local_58 = param_4;
LAB_00106a74:
  local_58 = local_58 + -1;
  pEVar13 = param_3[(lVar16 >> 1) + param_1];
  pEVar3 = param_3[param_1];
  iVar1 = *(int *)(pEVar13 + 0x20);
  iVar8 = *(int *)(pEVar3 + 0x20);
  bVar18 = iVar1 < iVar8;
  if (iVar8 == iVar1) {
    bVar18 = *(ulong *)(pEVar3 + 0x18) < *(ulong *)(pEVar13 + 0x18);
  }
  pEVar4 = param_3[lVar6 + -1];
  iVar2 = *(int *)(pEVar4 + 0x20);
  if (bVar18) {
    bVar18 = iVar2 < iVar1;
    if (iVar1 == iVar2) {
      bVar18 = *(ulong *)(pEVar13 + 0x18) < *(ulong *)(pEVar4 + 0x18);
    }
    pEVar17 = pEVar13;
    iVar5 = iVar1;
    if (!bVar18) {
      bVar18 = iVar2 < iVar8;
      if (iVar8 == iVar2) {
        bVar18 = *(ulong *)(pEVar3 + 0x18) < *(ulong *)(pEVar4 + 0x18);
      }
      pEVar17 = pEVar4;
      iVar5 = iVar2;
      if (!bVar18) {
        pEVar17 = pEVar3;
        iVar5 = iVar8;
      }
    }
  }
  else {
    bVar18 = iVar2 < iVar8;
    if (iVar8 == iVar2) {
      bVar18 = *(ulong *)(pEVar3 + 0x18) < *(ulong *)(pEVar4 + 0x18);
    }
    pEVar17 = pEVar3;
    iVar5 = iVar8;
    if (!bVar18) {
      bVar18 = iVar2 < iVar1;
      if (iVar1 == iVar2) {
        bVar18 = *(ulong *)(pEVar13 + 0x18) < *(ulong *)(pEVar4 + 0x18);
      }
      pEVar17 = pEVar4;
      iVar5 = iVar2;
      if (!bVar18) {
        pEVar17 = pEVar13;
        iVar5 = iVar1;
      }
    }
  }
  lVar16 = lVar6;
  param_2 = param_1;
  do {
    if (iVar8 == iVar5) {
      if (*(ulong *)(pEVar17 + 0x18) <= *(ulong *)(param_3[param_2] + 0x18)) goto LAB_00106b30;
LAB_00106b02:
      if (lVar6 + -1 == param_2) {
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                         "bad comparison function; sorting will be broken",0,0);
        iVar5 = *(int *)(pEVar17 + 0x20);
        goto LAB_00106b30;
      }
    }
    else {
      if (iVar5 < iVar8) goto LAB_00106b02;
LAB_00106b30:
      lVar16 = lVar16 + -1;
      ppEVar9 = param_3 + lVar16;
      while( true ) {
        iVar1 = *(int *)(*ppEVar9 + 0x20);
        bVar18 = iVar1 < iVar5;
        if (iVar1 == iVar5) {
          bVar18 = *(ulong *)(pEVar17 + 0x18) < *(ulong *)(*ppEVar9 + 0x18);
        }
        if (!bVar18) goto joined_r0x00106b6b;
        if (param_1 == lVar16) break;
        lVar16 = lVar16 + -1;
        ppEVar9 = ppEVar9 + -1;
      }
      _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                       "bad comparison function; sorting will be broken",0,0);
joined_r0x00106b6b:
      if (lVar16 <= param_2) break;
      pEVar13 = param_3[param_2];
      iVar5 = *(int *)(pEVar17 + 0x20);
      param_3[param_2] = *ppEVar9;
      *ppEVar9 = pEVar13;
    }
    lVar15 = param_2 + 1;
    param_2 = param_2 + 1;
    iVar8 = *(int *)(param_3[lVar15] + 0x20);
  } while( true );
  lVar16 = param_2 - param_1;
  introsort(param_2,lVar6,param_3,local_58);
  if (lVar16 < 0x11) {
    return;
  }
  lVar6 = param_2;
  if (local_58 == 0) goto LAB_00106ccb;
  goto LAB_00106a74;
LAB_00106e60:
  pEVar13 = ppEVar9[lVar16];
  ppEVar9[lVar16] = *ppEVar9;
  if (lVar16 < 3) {
    if (lVar16 != 2) {
      *ppEVar9 = pEVar13;
      return;
    }
    lVar15 = param_1 + 1;
    lVar7 = 0;
    *ppEVar9 = param_3[lVar15];
LAB_00106f0c:
    iVar1 = *(int *)(pEVar13 + 0x20);
    while( true ) {
      pEVar3 = param_3[param_1 + lVar7];
      bVar18 = iVar1 < *(int *)(pEVar3 + 0x20);
      if (*(int *)(pEVar3 + 0x20) == iVar1) {
        bVar18 = *(ulong *)(pEVar3 + 0x18) < *(ulong *)(pEVar13 + 0x18);
      }
      ppEVar11 = param_3 + lVar15;
      if (!bVar18) goto LAB_00106f62;
      *ppEVar11 = pEVar3;
      if (lVar7 == 0) break;
      lVar15 = param_1 + lVar7;
      lVar7 = (lVar7 + -1) / 2;
    }
    lVar16 = lVar16 + -1;
    param_3[param_1 + lVar7] = pEVar13;
    goto LAB_00106e60;
  }
  lVar6 = 0;
  lVar15 = 2;
  do {
    ppEVar11 = param_3 + param_1 + lVar15;
    pEVar3 = *ppEVar11;
    pEVar4 = param_3[param_1 + lVar15 + -1];
    bVar18 = *(int *)(pEVar4 + 0x20) < *(int *)(pEVar3 + 0x20);
    if (*(int *)(pEVar3 + 0x20) == *(int *)(pEVar4 + 0x20)) {
      bVar18 = *(ulong *)(pEVar3 + 0x18) < *(ulong *)(pEVar4 + 0x18);
    }
    if (bVar18) {
      param_3[lVar6 + param_1] = pEVar4;
      lVar6 = lVar15 + -1;
      ppEVar11 = param_3 + param_1 + lVar15 + -1;
      lVar7 = lVar15;
    }
    else {
      lVar7 = lVar15 + 1;
      param_3[lVar6 + param_1] = pEVar3;
      lVar6 = lVar15;
    }
    lVar15 = lVar7 * 2;
  } while (lVar15 < lVar16);
  if (lVar15 == lVar16) {
    lVar15 = lVar16 + -1 + param_1;
    lVar7 = lVar16 + -2 >> 1;
    *ppEVar11 = param_3[lVar15];
    goto LAB_00106f0c;
  }
  lVar15 = param_1 + lVar6;
  lVar7 = (lVar6 + -1) / 2;
  if (0 < lVar6) goto LAB_00106f0c;
LAB_00106f62:
  *ppEVar11 = pEVar13;
  lVar16 = lVar16 + -1;
  goto LAB_00106e60;
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



/* ServersDebugger::VisualProfiler::toggle(bool, Array const&) */

void ServersDebugger::VisualProfiler::toggle(bool param_1,Array *param_2)

{
  code *pcVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  Array aAStack_68 [8];
  long local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar4 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar4 + 0x1228))(plVar4,(ulong)param_2 & 0xff);
  Array::Array(aAStack_68);
  plVar4 = (long *)OS::get_singleton();
  (**(code **)(*plVar4 + 0x2e0))((String *)&local_58,plVar4);
  Variant::Variant((Variant *)local_48,(String *)&local_58);
  Array::push_back((Variant *)aAStack_68);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  pcVar3 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar4 = (long *)((long)local_58 + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar3 + -0x10),false);
    }
  }
  plVar4 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar4 + 0x1208))((String *)&local_58,plVar4);
  Variant::Variant((Variant *)local_48,(String *)&local_58);
  Array::push_back((Variant *)aAStack_68);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  pcVar3 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar4 = (long *)((long)local_58 + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar3 + -0x10),false);
    }
  }
  plVar4 = EngineDebugger::singleton;
  local_60 = 0;
  pcVar1 = *(code **)(*EngineDebugger::singleton + 8);
  local_50 = 0x14;
  local_58 = "visual:hardware_info";
  String::parse_latin1((StrRange *)&local_60);
  (*pcVar1)(plVar4,(StrRange *)&local_60,aAStack_68);
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar4 = (long *)(local_60 + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Array::~Array(aAStack_68);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



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
  if (initialize_class()::initialized != '\0') goto LAB_0010742b;
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
LAB_0010753a:
      if ((code *)PTR__bind_methods_00111008 != RefCounted::_bind_methods) {
LAB_0010754a:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010753a;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_00111008 != RefCounted::_bind_methods) goto LAB_0010754a;
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
  if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
    EngineProfiler::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_0010742b:
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
            if (lVar5 == 0) goto LAB_0010762f;
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
LAB_0010762f:
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
    if (cVar6 != '\0') goto LAB_001076e3;
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
              if (lVar5 == 0) goto LAB_001077bb;
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
LAB_001077bb:
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
      if (cVar6 != '\0') goto LAB_001076e3;
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
                if (lVar5 == 0) goto LAB_0010789b;
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
LAB_0010789b:
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
        if (cVar6 != '\0') goto LAB_001076e3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00107944;
    }
  }
LAB_001076e3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00107944:
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
LAB_00107ab8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107ab8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00107ad6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00107ad6:
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
LAB_00107eb8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107eb8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00107ed5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00107ed5:
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



/* ServersDebugger::ServerInfo::~ServerInfo() */

void __thiscall ServersDebugger::ServerInfo::~ServerInfo(ServerInfo *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 8);
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = (long *)*plVar4;
      if (plVar1 == (long *)0x0) {
        if ((int)plVar4[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00108252;
        }
        break;
      }
      if ((long *)plVar1[4] == plVar4) {
        lVar3 = plVar1[2];
        lVar2 = plVar1[3];
        *plVar4 = lVar3;
        if (plVar1 == (long *)plVar4[1]) {
          plVar4[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x10) = lVar3;
          lVar3 = plVar1[2];
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x18) = lVar2;
        }
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
      plVar4 = *(long **)(this + 8);
    } while ((int)plVar4[2] != 0);
    Memory::free_static(plVar4,false);
  }
LAB_00108252:
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* ServersDebugger::VisualProfiler::~VisualProfiler() */

void __thiscall ServersDebugger::VisualProfiler::~VisualProfiler(VisualProfiler *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0010d8c0;
  pvVar3 = *(void **)(this + 0x1d8);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x1fc) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1f8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1fc) = 0;
        *(undefined1 (*) [16])(this + 0x1e8) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1e0) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x1e0) + lVar2) = 0;
            ServerInfo::~ServerInfo((ServerInfo *)((long)pvVar3 + 0x18));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x1d8);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1fc) = 0;
        *(undefined1 (*) [16])(this + 0x1e8) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_001083d2;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x1e0),false);
  }
LAB_001083d2:
  EngineProfiler::~EngineProfiler((EngineProfiler *)this);
  return;
}



/* ServersDebugger::VisualProfiler::~VisualProfiler() */

void __thiscall ServersDebugger::VisualProfiler::~VisualProfiler(VisualProfiler *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0010d8c0;
  pvVar3 = *(void **)(this + 0x1d8);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x1fc) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1f8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1fc) = 0;
        *(undefined1 (*) [16])(this + 0x1e8) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1e0) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x1e0) + lVar2) = 0;
            ServerInfo::~ServerInfo((ServerInfo *)((long)pvVar3 + 0x18));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x1d8);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1fc) = 0;
        *(undefined1 (*) [16])(this + 0x1e8) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00108502;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x1e0),false);
  }
LAB_00108502:
  EngineProfiler::~EngineProfiler((EngineProfiler *)this);
  operator_delete(this,0x200);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, int> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
::operator[](HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined8 *puVar4;
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
  undefined1 auVar36 [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined8 *puVar42;
  long lVar43;
  void *pvVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  undefined8 uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined8 *puVar55;
  long in_FS_OFFSET;
  bool bVar56;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  lVar43 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  if (lVar43 == 0) {
LAB_00108c68:
    uVar45 = uVar40 * 4;
    uVar50 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar45,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar44 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = pvVar44;
    if ((int)uVar40 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar44 + uVar50)) && (pvVar44 < (void *)((long)pvVar3 + uVar45))
         ) {
        uVar45 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar45 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar45 * 8) = 0;
          uVar45 = uVar45 + 1;
        } while (uVar40 != uVar45);
        goto LAB_00108b18;
      }
      memset(pvVar3,0,uVar45);
      memset(pvVar44,0,uVar50);
      iVar46 = *(int *)(this + 0x2c);
LAB_00108b1c:
      if (iVar46 != 0) {
LAB_00108b24:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar45 = CONCAT44(0,uVar38);
        lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar39 = StringName::get_empty_hash();
        }
        else {
          uVar39 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar39 == 0) {
          uVar39 = 1;
        }
        uVar54 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar39 * lVar43;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar45;
        lVar49 = SUB168(auVar17 * auVar33,8);
        uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
        uVar53 = SUB164(auVar17 * auVar33,8);
        if (uVar52 != 0) {
          do {
            if ((uVar39 == uVar52) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar49 * 8) + 0x10) == *(long *)param_1))
            {
              puVar42 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar53 * 8);
              *(undefined4 *)(puVar42 + 3) = 0;
              goto LAB_0010871c;
            }
            uVar54 = uVar54 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar53 + 1) * lVar43;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar45;
            lVar49 = SUB168(auVar18 * auVar34,8);
            uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
            uVar53 = SUB164(auVar18 * auVar34,8);
          } while ((uVar52 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar52 * lVar43, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar45, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar38 + uVar53) - SUB164(auVar19 * auVar35,8)) * lVar43,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar45, uVar54 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar46 = *(int *)(this + 0x2c);
      }
      goto LAB_00108753;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_00108753;
    if (iVar46 != 0) goto LAB_00108b24;
LAB_00108779:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar42 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010871c;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar50 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar44 = *(void **)(this + 8);
    uVar40 = uVar50 * 4;
    uVar45 = uVar50 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar50);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar43 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar52);
          lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar38 * lVar49;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar45;
          lVar47 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar43 + lVar47 * 4);
          iVar46 = SUB164(auVar9 * auVar25,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar44 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar53 * lVar49;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar45;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar52 + iVar46) - SUB164(auVar10 * auVar26,8)) * lVar49;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar45;
            uVar37 = SUB164(auVar11 * auVar27,8);
            uVar51 = uVar41;
            if (uVar37 < uVar54) {
              *puVar1 = uVar38;
              puVar42 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar51 = *puVar42;
              *puVar42 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar37;
            }
            uVar54 = uVar54 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar46 + 1) * lVar49;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar45;
            lVar47 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar43 + lVar47 * 4);
            iVar46 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar51;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    if (iVar46 != 0) {
      lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
        lVar43 = *(long *)(this + 8);
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21,8);
      uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar52 != 0) {
        uVar54 = 0;
        do {
          if ((uVar39 == uVar52) &&
             (*(long *)(*(long *)(lVar43 + lVar47 * 8) + 0x10) == *(long *)param_1)) {
            puVar42 = *(undefined8 **)(lVar43 + (ulong)uVar53 * 8);
            goto LAB_0010871c;
          }
          uVar54 = uVar54 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar49;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar40;
          lVar47 = SUB168(auVar6 * auVar22,8);
          uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar52 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar52 * lVar49, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar38) - SUB164(auVar7 * auVar23,8)) * lVar49,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar40, uVar54 <= SUB164(auVar8 * auVar24,8)));
      }
      uVar40 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar43 == 0) goto LAB_00108c68;
LAB_00108b18:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_00108b1c;
    }
LAB_00108753:
    if ((float)uVar40 * __LC32 < (float)(iVar46 + 1)) goto LAB_00108779;
  }
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = 0;
  puVar42 = (undefined8 *)operator_new(0x20,"");
  *puVar42 = 0;
  puVar42[1] = 0;
  StringName::StringName((StringName *)(puVar42 + 2),(StringName *)&local_58);
  bVar56 = StringName::configured != '\0';
  *(undefined4 *)(puVar42 + 3) = local_50;
  if ((bVar56) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar42;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 == 0) goto LAB_00108c2d;
LAB_00108a04:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar4 = puVar42;
    puVar42[1] = puVar4;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_00108a04;
LAB_00108c2d:
    uVar38 = StringName::get_empty_hash();
  }
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  uVar40 = (ulong)uVar38;
  lVar43 = *(long *)(this + 0x10);
  uVar53 = 0;
  lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar39);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar40 * lVar49;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar45;
  lVar48 = SUB168(auVar13 * auVar29,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar43 + lVar48 * 4);
  iVar46 = SUB164(auVar13 * auVar29,8);
  uVar52 = *puVar1;
  puVar4 = puVar42;
  while (uVar52 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar52 * lVar49;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar45;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar39 + iVar46) - SUB164(auVar14 * auVar30,8)) * lVar49;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar45;
    uVar38 = SUB164(auVar15 * auVar31,8);
    puVar55 = puVar4;
    if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8 *)(lVar47 + lVar48 * 8);
      puVar55 = (undefined8 *)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
    }
    uVar38 = (uint)uVar40;
    uVar53 = uVar53 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar49;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar45;
    lVar48 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar43 + lVar48 * 4);
    iVar46 = SUB164(auVar16 * auVar32,8);
    puVar4 = puVar55;
    uVar52 = *puVar1;
  }
  *(undefined8 **)(lVar47 + lVar48 * 8) = puVar4;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010871c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar42 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<ServersDebugger::ServerInfo, DefaultAllocator>::~List() */

void __thiscall
List<ServersDebugger::ServerInfo,DefaultAllocator>::~List
          (List<ServersDebugger::ServerInfo,DefaultAllocator> *this)

{
  ServerInfo *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (ServerInfo *)*plVar3;
    if (this_00 == (ServerInfo *)0x0) {
      if ((int)plVar3[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x20) == plVar3) {
      lVar2 = *(long *)(this_00 + 0x10);
      lVar1 = *(long *)(this_00 + 0x18);
      *plVar3 = lVar2;
      if (this_00 == (ServerInfo *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x10) = lVar2;
        lVar2 = *(long *)(this_00 + 0x10);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x18) = lVar1;
      }
      ServersDebugger::ServerInfo::~ServerInfo(this_00);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, ServersDebugger::ServerInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ServersDebugger::ServerInfo> > >::operator[](StringName const&) */

StringName * __thiscall
HashMap<StringName,ServersDebugger::ServerInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ServersDebugger::ServerInfo>>>
::operator[](HashMap<StringName,ServersDebugger::ServerInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ServersDebugger::ServerInfo>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *pvVar4;
  void *__s;
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
  undefined1 auVar36 [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  long *plVar40;
  ulong uVar41;
  undefined8 uVar42;
  void *__s_00;
  StringName *pSVar43;
  undefined8 *puVar44;
  undefined1 (*pauVar45) [16];
  long lVar46;
  void *pvVar47;
  ulong uVar48;
  int iVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  ulong uVar53;
  undefined8 *puVar54;
  undefined8 uVar55;
  StringName *pSVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  long in_FS_OFFSET;
  StringName *local_a8;
  ServerInfo *local_a0;
  StringName local_78 [8];
  long *plStack_70;
  undefined1 local_68 [16];
  long local_58;
  StringName local_50 [8];
  undefined1 (*local_48) [16];
  long local_40;
  
  lVar46 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar38);
  if (lVar46 == 0) {
LAB_001098b0:
    _local_78 = (undefined1  [16])0x0;
    uVar48 = uVar41 * 4;
    uVar53 = uVar41 * 8;
    uVar42 = Memory::alloc_static(uVar48,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    pvVar47 = (void *)Memory::alloc_static(uVar53,false);
    *(void **)(this + 8) = pvVar47;
    if ((int)uVar41 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)pvVar47 + uVar53)) && (pvVar47 < (void *)((long)pvVar4 + uVar48))
         ) {
        uVar48 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar48 * 4) = 0;
          *(undefined8 *)((long)pvVar47 + uVar48 * 8) = 0;
          uVar48 = uVar48 + 1;
        } while (uVar41 != uVar48);
      }
      else {
        memset(pvVar4,0,uVar48);
        memset(pvVar47,0,uVar53);
      }
LAB_00108fd1:
      iVar49 = *(int *)(this + 0x2c);
      if (iVar49 != 0) {
LAB_00108fdd:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar48 = CONCAT44(0,uVar38);
        lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar39 = StringName::get_empty_hash();
        }
        else {
          uVar39 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar39 == 0) {
          uVar39 = 1;
        }
        uVar59 = 0;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)uVar39 * lVar46;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = uVar48;
        lVar51 = SUB168(auVar9 * auVar25,8);
        uVar57 = *(uint *)(*(long *)(this + 0x10) + lVar51 * 4);
        uVar58 = SUB164(auVar9 * auVar25,8);
        if (uVar57 != 0) {
          do {
            if ((uVar39 == uVar57) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar51 * 8) + 0x10) == *(long *)param_1))
            {
              lVar46 = *(long *)(*(long *)(this + 8) + (ulong)uVar58 * 8);
              StringName::operator=((StringName *)(lVar46 + 0x18),local_78);
              plVar40 = *(long **)(lVar46 + 0x20);
              if (plVar40 != (long *)0x0) goto LAB_001090ca;
              goto LAB_00109154;
            }
            uVar59 = uVar59 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(uVar58 + 1) * lVar46;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar48;
            lVar51 = SUB168(auVar10 * auVar26,8);
            uVar57 = *(uint *)(*(long *)(this + 0x10) + lVar51 * 4);
            uVar58 = SUB164(auVar10 * auVar26,8);
          } while ((uVar57 != 0) &&
                  (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar57 * lVar46, auVar27._8_8_ = 0,
                  auVar27._0_8_ = uVar48, auVar12._8_8_ = 0,
                  auVar12._0_8_ = (ulong)((uVar38 + uVar58) - SUB164(auVar11 * auVar27,8)) * lVar46,
                  auVar28._8_8_ = 0, auVar28._0_8_ = uVar48, uVar59 <= SUB164(auVar12 * auVar28,8)))
          ;
        }
        iVar49 = *(int *)(this + 0x2c);
      }
      goto LAB_0010925c;
    }
    iVar49 = *(int *)(this + 0x2c);
    if (pvVar47 == (void *)0x0) goto LAB_0010925c;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00108fdd;
LAB_00109282:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_a8 = (StringName *)0x18;
      goto LAB_00109811;
    }
    uVar41 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar41 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar41 * 4);
    uVar53 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar41;
    pvVar47 = *(void **)(this + 8);
    uVar41 = uVar53 * 4;
    uVar48 = uVar53 * 8;
    pvVar4 = *(void **)(this + 0x10);
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    __s_00 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar48)) && (__s_00 < (void *)((long)__s + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)__s + uVar41 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar41 != uVar53);
      }
      else {
        memset(__s,0,uVar41);
        memset(__s_00,0,uVar48);
      }
    }
    if (uVar39 != 0) {
      uVar41 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar4 + uVar41 * 4);
        if (uVar38 != 0) {
          lVar46 = *(long *)(this + 0x10);
          uVar59 = 0;
          uVar57 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar48 = CONCAT44(0,uVar57);
          lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)uVar38 * lVar51;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar48;
          lVar50 = SUB168(auVar13 * auVar29,8);
          puVar1 = (uint *)(lVar46 + lVar50 * 4);
          iVar49 = SUB164(auVar13 * auVar29,8);
          uVar58 = *puVar1;
          uVar42 = *(undefined8 *)((long)pvVar47 + uVar41 * 8);
          while (uVar58 != 0) {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)uVar58 * lVar51;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar48;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)((iVar49 + uVar57) - SUB164(auVar14 * auVar30,8)) * lVar51;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar48;
            uVar37 = SUB164(auVar15 * auVar31,8);
            uVar55 = uVar42;
            if (uVar37 < uVar59) {
              *puVar1 = uVar38;
              puVar44 = (undefined8 *)((long)__s_00 + lVar50 * 8);
              uVar55 = *puVar44;
              *puVar44 = uVar42;
              uVar38 = uVar58;
              uVar59 = uVar37;
            }
            uVar59 = uVar59 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)(iVar49 + 1) * lVar51;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar48;
            lVar50 = SUB168(auVar16 * auVar32,8);
            puVar1 = (uint *)(lVar46 + lVar50 * 4);
            iVar49 = SUB164(auVar16 * auVar32,8);
            uVar42 = uVar55;
            uVar58 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar50 * 8) = uVar42;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar41 = uVar41 + 1;
      } while (uVar39 != uVar41);
      Memory::free_static(pvVar47,false);
      Memory::free_static(pvVar4,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
        lVar46 = *(long *)(this + 8);
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar51;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar41;
      lVar50 = SUB168(auVar5 * auVar21,8);
      uVar57 = *(uint *)(*(long *)(this + 0x10) + lVar50 * 4);
      uVar58 = SUB164(auVar5 * auVar21,8);
      if (uVar57 != 0) {
        uVar59 = 0;
        do {
          if ((uVar57 == uVar39) &&
             (*(long *)(*(long *)(lVar46 + lVar50 * 8) + 0x10) == *(long *)param_1)) {
            local_a8 = (StringName *)(*(long *)(lVar46 + (ulong)uVar58 * 8) + 0x18);
            goto LAB_00108f7c;
          }
          uVar59 = uVar59 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar58 + 1) * lVar51;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar41;
          lVar50 = SUB168(auVar6 * auVar22,8);
          uVar57 = *(uint *)(*(long *)(this + 0x10) + lVar50 * 4);
          uVar58 = SUB164(auVar6 * auVar22,8);
        } while ((uVar57 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar57 * lVar51, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar41, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar58 + uVar38) - SUB164(auVar7 * auVar23,8)) * lVar51,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar41, uVar59 <= SUB164(auVar8 * auVar24,8)));
      }
      _local_78 = (undefined1  [16])0x0;
      uVar41 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar46 == 0) goto LAB_001098b0;
      goto LAB_00108fd1;
    }
    _local_78 = (undefined1  [16])0x0;
    iVar49 = 0;
LAB_0010925c:
    if ((float)uVar41 * __LC32 < (float)(iVar49 + 1)) goto LAB_00109282;
  }
  local_68 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_58,param_1);
  StringName::StringName(local_50,local_78);
  local_48 = (undefined1 (*) [16])0x0;
  if ((plStack_70 != (long *)0x0) &&
     (pSVar56 = (StringName *)*plStack_70, pSVar56 != (StringName *)0x0)) {
    local_48 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_48[1] = 0;
    *local_48 = (undefined1  [16])0x0;
    do {
      while( true ) {
        pSVar43 = (StringName *)operator_new(0x28,DefaultAllocator::alloc);
        *(undefined8 *)pSVar43 = 0;
        *(undefined8 *)(pSVar43 + 8) = 0;
        *(undefined8 *)(pSVar43 + 0x20) = 0;
        *(undefined1 (*) [16])(pSVar43 + 0x10) = (undefined1  [16])0x0;
        StringName::operator=(pSVar43,pSVar56);
        lVar46 = *(long *)(*local_48 + 8);
        *(undefined8 *)(pSVar43 + 8) = *(undefined8 *)(pSVar56 + 8);
        *(undefined8 *)(pSVar43 + 0x10) = 0;
        *(long *)(pSVar43 + 0x18) = lVar46;
        *(undefined1 (**) [16])(pSVar43 + 0x20) = local_48;
        if (lVar46 != 0) {
          *(StringName **)(lVar46 + 0x10) = pSVar43;
        }
        lVar46 = *(long *)*local_48;
        *(StringName **)(*local_48 + 8) = pSVar43;
        if (lVar46 != 0) break;
        pSVar56 = *(StringName **)(pSVar56 + 0x10);
        *(int *)local_48[1] = *(int *)local_48[1] + 1;
        *(StringName **)*local_48 = pSVar43;
        if (pSVar56 == (StringName *)0x0) goto LAB_001095ad;
      }
      pSVar56 = *(StringName **)(pSVar56 + 0x10);
      *(int *)local_48[1] = *(int *)local_48[1] + 1;
    } while (pSVar56 != (StringName *)0x0);
  }
LAB_001095ad:
  puVar44 = (undefined8 *)operator_new(0x28,"");
  *puVar44 = local_68._0_8_;
  puVar44[1] = local_68._8_8_;
  StringName::StringName((StringName *)(puVar44 + 2),(StringName *)&local_58);
  local_a8 = (StringName *)(puVar44 + 3);
  StringName::StringName(local_a8,local_50);
  puVar44[4] = 0;
  if ((local_48 != (undefined1 (*) [16])0x0) &&
     (pSVar56 = *(StringName **)*local_48, pSVar56 != (StringName *)0x0)) {
    pauVar45 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    puVar44[4] = pauVar45;
    *(undefined4 *)pauVar45[1] = 0;
    *pauVar45 = (undefined1  [16])0x0;
    do {
      while( true ) {
        pSVar43 = (StringName *)operator_new(0x28,DefaultAllocator::alloc);
        *(undefined8 *)pSVar43 = 0;
        *(undefined8 *)(pSVar43 + 8) = 0;
        *(undefined8 *)(pSVar43 + 0x20) = 0;
        *(undefined1 (*) [16])(pSVar43 + 0x10) = (undefined1  [16])0x0;
        StringName::operator=(pSVar43,pSVar56);
        plVar40 = (long *)puVar44[4];
        lVar46 = plVar40[1];
        *(undefined8 *)(pSVar43 + 8) = *(undefined8 *)(pSVar56 + 8);
        *(undefined8 *)(pSVar43 + 0x10) = 0;
        *(long *)(pSVar43 + 0x18) = lVar46;
        *(long **)(pSVar43 + 0x20) = plVar40;
        if (lVar46 != 0) {
          *(StringName **)(lVar46 + 0x10) = pSVar43;
        }
        plVar40[1] = (long)pSVar43;
        if (*plVar40 != 0) break;
        pSVar56 = *(StringName **)(pSVar56 + 0x10);
        *(int *)(plVar40 + 2) = (int)plVar40[2] + 1;
        *plVar40 = (long)pSVar43;
        if (pSVar56 == (StringName *)0x0) goto LAB_001096e9;
      }
      pSVar56 = *(StringName **)(pSVar56 + 0x10);
      *(int *)(plVar40 + 2) = (int)plVar40[2] + 1;
    } while (pSVar56 != (StringName *)0x0);
  }
LAB_001096e9:
  ServersDebugger::ServerInfo::~ServerInfo((ServerInfo *)local_50);
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  puVar54 = *(undefined8 **)(this + 0x20);
  if (puVar54 == (undefined8 *)0x0) {
    lVar46 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar44;
    *(undefined8 **)(this + 0x20) = puVar44;
    if (lVar46 == 0) goto LAB_00109865;
LAB_00109731:
    uVar38 = *(uint *)(lVar46 + 0x20);
  }
  else {
    *puVar54 = puVar44;
    puVar44[1] = puVar54;
    lVar46 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar44;
    if (lVar46 != 0) goto LAB_00109731;
LAB_00109865:
    uVar38 = StringName::get_empty_hash();
  }
  lVar46 = *(long *)(this + 0x10);
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  uVar41 = (ulong)uVar38;
  uVar58 = 0;
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar48 = CONCAT44(0,uVar39);
  lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar41 * lVar51;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar48;
  lVar52 = SUB168(auVar17 * auVar33,8);
  lVar50 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar46 + lVar52 * 4);
  iVar49 = SUB164(auVar17 * auVar33,8);
  uVar57 = *puVar1;
  while (uVar57 != 0) {
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)uVar57 * lVar51;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar48;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)((uVar39 + iVar49) - SUB164(auVar18 * auVar34,8)) * lVar51;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar48;
    uVar38 = SUB164(auVar19 * auVar35,8);
    puVar54 = puVar44;
    if (uVar38 < uVar58) {
      *puVar1 = (uint)uVar41;
      uVar41 = (ulong)uVar57;
      puVar2 = (undefined8 *)(lVar50 + lVar52 * 8);
      puVar54 = (undefined8 *)*puVar2;
      *puVar2 = puVar44;
      uVar58 = uVar38;
    }
    uVar38 = (uint)uVar41;
    uVar58 = uVar58 + 1;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)(iVar49 + 1) * lVar51;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar48;
    lVar52 = SUB168(auVar20 * auVar36,8);
    puVar1 = (uint *)(lVar46 + lVar52 * 4);
    iVar49 = SUB164(auVar20 * auVar36,8);
    puVar44 = puVar54;
    uVar57 = *puVar1;
  }
  *(undefined8 **)(lVar50 + lVar52 * 8) = puVar44;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00109811:
  local_a0 = (ServerInfo *)local_78;
  ServersDebugger::ServerInfo::~ServerInfo(local_a0);
LAB_00108f7c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_a8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    if ((long *)plVar3[4] == plVar40) {
      lVar51 = plVar3[2];
      lVar50 = plVar3[3];
      *plVar40 = lVar51;
      if (plVar3 == (long *)plVar40[1]) {
        plVar40[1] = lVar50;
      }
      if (lVar50 != 0) {
        *(long *)(lVar50 + 0x10) = lVar51;
        lVar51 = plVar3[2];
      }
      if (lVar51 != 0) {
        *(long *)(lVar51 + 0x18) = lVar50;
      }
      if ((StringName::configured != '\0') && (*plVar3 != 0)) {
        StringName::unref();
      }
      Memory::free_static(plVar3,false);
      *(int *)(plVar40 + 2) = (int)plVar40[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar40 = *(long **)(lVar46 + 0x20);
    if ((int)plVar40[2] == 0) break;
LAB_001090ca:
    plVar3 = (long *)*plVar40;
    if (plVar3 == (long *)0x0) goto LAB_00109156;
  }
  Memory::free_static(plVar40,false);
  *(undefined8 *)(lVar46 + 0x20) = 0;
LAB_00109154:
  plVar40 = (long *)0x0;
LAB_00109156:
  if ((plStack_70 != (long *)0x0) &&
     (pSVar56 = (StringName *)*plStack_70, pSVar56 != (StringName *)0x0)) {
    if (plVar40 == (long *)0x0) {
      pauVar45 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])(lVar46 + 0x20) = pauVar45;
      *(undefined4 *)pauVar45[1] = 0;
      *pauVar45 = (undefined1  [16])0x0;
    }
    do {
      while( true ) {
        pSVar43 = (StringName *)operator_new(0x28,DefaultAllocator::alloc);
        *(undefined8 *)pSVar43 = 0;
        *(undefined8 *)(pSVar43 + 8) = 0;
        *(undefined8 *)(pSVar43 + 0x20) = 0;
        *(undefined1 (*) [16])(pSVar43 + 0x10) = (undefined1  [16])0x0;
        StringName::operator=(pSVar43,pSVar56);
        plVar40 = *(long **)(lVar46 + 0x20);
        lVar51 = plVar40[1];
        *(undefined8 *)(pSVar43 + 8) = *(undefined8 *)(pSVar56 + 8);
        *(undefined8 *)(pSVar43 + 0x10) = 0;
        *(long *)(pSVar43 + 0x18) = lVar51;
        *(long **)(pSVar43 + 0x20) = plVar40;
        if (lVar51 != 0) {
          *(StringName **)(lVar51 + 0x10) = pSVar43;
        }
        plVar40[1] = (long)pSVar43;
        if (*plVar40 != 0) break;
        pSVar56 = *(StringName **)(pSVar56 + 0x10);
        *(int *)(plVar40 + 2) = (int)plVar40[2] + 1;
        *plVar40 = (long)pSVar43;
        if (pSVar56 == (StringName *)0x0) goto LAB_00109239;
      }
      pSVar56 = *(StringName **)(pSVar56 + 0x10);
      *(int *)(plVar40 + 2) = (int)plVar40[2] + 1;
    } while (pSVar56 != (StringName *)0x0);
  }
LAB_00109239:
  local_a8 = (StringName *)(*(long *)(*(long *)(this + 8) + (ulong)uVar58 * 8) + 0x18);
  goto LAB_00109811;
}



/* ServersDebugger::ServersProfiler::add(Array const&) */

void __thiscall ServersDebugger::ServersProfiler::add(ServersProfiler *this,Array *param_1)

{
  uint uVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  Variant *this_00;
  StringName *pSVar15;
  undefined1 (*pauVar16) [16];
  StringName *this_01;
  long lVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  StringName *pSVar23;
  long *plVar24;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar18 = (int)param_1;
  Array::operator[](iVar18);
  Variant::operator_cast_to_String((Variant *)&local_68);
  StringName::StringName((StringName *)local_58,(String *)&local_68,false);
  if ((*(long *)(this + 0x1e0) == 0) || (*(int *)(this + 0x204) == 0)) {
joined_r0x00109b9f:
    if ((StringName::configured != '\0') && (local_58 != (undefined1  [8])0x0)) {
      StringName::unref();
    }
  }
  else {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x200) * 4);
    uVar22 = CONCAT44(0,uVar1);
    lVar14 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x200) * 8);
    if (local_58 == (undefined1  [8])0x0) {
      uVar13 = StringName::get_empty_hash();
    }
    else {
      uVar13 = *(uint *)((long)local_58 + 0x20);
    }
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar14;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar22;
    lVar17 = SUB168(auVar3 * auVar7,8);
    uVar19 = *(uint *)(*(long *)(this + 0x1e8) + lVar17 * 4);
    iVar21 = SUB164(auVar3 * auVar7,8);
    if (uVar19 == 0) goto joined_r0x00109b9f;
    uVar20 = 0;
    do {
      if ((uVar19 == uVar13) &&
         ((undefined1  [8])*(long *)(*(long *)(*(long *)(this + 0x1e0) + lVar17 * 8) + 0x10) ==
          local_58)) {
        bVar11 = true;
        goto LAB_00109d18;
      }
      uVar20 = uVar20 + 1;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)(iVar21 + 1) * lVar14;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar22;
      lVar17 = SUB168(auVar4 * auVar8,8);
      uVar19 = *(uint *)(*(long *)(this + 0x1e8) + lVar17 * 4);
      iVar21 = SUB164(auVar4 * auVar8,8);
    } while ((uVar19 != 0) &&
            (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar19 * lVar14, auVar9._8_8_ = 0,
            auVar9._0_8_ = uVar22, auVar6._8_8_ = 0,
            auVar6._0_8_ = (ulong)((uVar1 + iVar21) - SUB164(auVar5 * auVar9,8)) * lVar14,
            auVar10._8_8_ = 0, auVar10._0_8_ = uVar22, uVar20 <= SUB164(auVar6 * auVar10,8)));
    bVar11 = false;
LAB_00109d18:
    if ((StringName::configured != '\0') && (local_58 != (undefined1  [8])0x0)) {
      StringName::unref();
    }
    if (bVar11) goto LAB_00109d35;
  }
  _local_58 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  if (local_58 == (undefined1  [8])local_60) {
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    local_58 = (undefined1  [8])local_60;
  }
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  pSVar15 = (StringName *)
            HashMap<StringName,ServersDebugger::ServerInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ServersDebugger::ServerInfo>>>
            ::operator[]((HashMap<StringName,ServersDebugger::ServerInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ServersDebugger::ServerInfo>>>
                          *)(this + 0x1d8),(StringName *)&local_60);
  StringName::operator=(pSVar15,(StringName *)local_58);
  plVar24 = *(long **)(pSVar15 + 8);
  if (plVar24 != (long *)0x0) {
    do {
      plVar2 = (long *)*plVar24;
      if (plVar2 == (long *)0x0) goto LAB_00109cc0;
      if ((long *)plVar2[4] == plVar24) {
        lVar14 = plVar2[2];
        lVar17 = plVar2[3];
        *plVar24 = lVar14;
        if (plVar2 == (long *)plVar24[1]) {
          plVar24[1] = lVar17;
        }
        if (lVar17 != 0) {
          *(long *)(lVar17 + 0x10) = lVar14;
          lVar14 = plVar2[2];
        }
        if (lVar14 != 0) {
          *(long *)(lVar14 + 0x18) = lVar17;
        }
        if ((StringName::configured != '\0') && (*plVar2 != 0)) {
          StringName::unref();
        }
        Memory::free_static(plVar2,false);
        *(int *)(plVar24 + 2) = (int)plVar24[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar24 = *(long **)(pSVar15 + 8);
    } while ((int)plVar24[2] != 0);
    Memory::free_static(plVar24,false);
    *(undefined8 *)(pSVar15 + 8) = 0;
  }
  plVar24 = (long *)0x0;
LAB_00109cc0:
  if ((uStack_50 != (long *)0x0) &&
     (pSVar23 = (StringName *)*uStack_50, pSVar23 != (StringName *)0x0)) {
    if (plVar24 == (long *)0x0) {
      pauVar16 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])(pSVar15 + 8) = pauVar16;
      *(undefined4 *)pauVar16[1] = 0;
      *pauVar16 = (undefined1  [16])0x0;
    }
    do {
      while( true ) {
        this_01 = (StringName *)operator_new(0x28,DefaultAllocator::alloc);
        *(undefined8 *)this_01 = 0;
        *(undefined8 *)(this_01 + 8) = 0;
        *(undefined8 *)(this_01 + 0x20) = 0;
        *(undefined1 (*) [16])(this_01 + 0x10) = (undefined1  [16])0x0;
        StringName::operator=(this_01,pSVar23);
        plVar24 = *(long **)(pSVar15 + 8);
        lVar14 = plVar24[1];
        *(undefined8 *)(this_01 + 8) = *(undefined8 *)(pSVar23 + 8);
        *(undefined8 *)(this_01 + 0x10) = 0;
        *(long *)(this_01 + 0x18) = lVar14;
        *(long **)(this_01 + 0x20) = plVar24;
        if (lVar14 != 0) {
          *(StringName **)(lVar14 + 0x10) = this_01;
        }
        plVar24[1] = (long)this_01;
        if (*plVar24 == 0) break;
        pSVar23 = *(StringName **)(pSVar23 + 0x10);
        *(int *)(plVar24 + 2) = (int)plVar24[2] + 1;
        if (pSVar23 == (StringName *)0x0) goto LAB_00109feb;
      }
      pSVar23 = *(StringName **)(pSVar23 + 0x10);
      *(int *)(plVar24 + 2) = (int)plVar24[2] + 1;
      *plVar24 = (long)this_01;
    } while (pSVar23 != (StringName *)0x0);
  }
LAB_00109feb:
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  ServerInfo::~ServerInfo((ServerInfo *)local_58);
LAB_00109d35:
  StringName::StringName((StringName *)local_58,(String *)&local_68,false);
  lVar14 = HashMap<StringName,ServersDebugger::ServerInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ServersDebugger::ServerInfo>>>
           ::operator[]((HashMap<StringName,ServersDebugger::ServerInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ServersDebugger::ServerInfo>>>
                         *)(this + 0x1d8),(StringName *)local_58);
  if ((StringName::configured != '\0') && (local_58 != (undefined1  [8])0x0)) {
    StringName::unref();
  }
  for (iVar21 = 1; iVar12 = Array::size(), lVar17 = local_68, iVar21 < iVar12 + -1;
      iVar21 = iVar21 + 2) {
    local_58 = (undefined1  [8])0x0;
    uStack_50 = (long *)0x0;
    Array::operator[](iVar18);
    Variant::operator_cast_to_StringName((Variant *)&local_60);
    if (local_58 == (undefined1  [8])local_60) {
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_58 = (undefined1  [8])local_60;
    }
    this_00 = (Variant *)Array::operator[](iVar18);
    uStack_50 = (long *)Variant::operator_cast_to_double(this_00);
    if (*(long *)(lVar14 + 8) == 0) {
      pauVar16 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])(lVar14 + 8) = pauVar16;
      *(undefined4 *)pauVar16[1] = 0;
      *pauVar16 = (undefined1  [16])0x0;
    }
    pSVar15 = (StringName *)operator_new(0x28,DefaultAllocator::alloc);
    *(undefined8 *)pSVar15 = 0;
    *(undefined8 *)(pSVar15 + 8) = 0;
    *(undefined8 *)(pSVar15 + 0x20) = 0;
    *(undefined1 (*) [16])(pSVar15 + 0x10) = (undefined1  [16])0x0;
    StringName::operator=(pSVar15,(StringName *)local_58);
    plVar24 = *(long **)(lVar14 + 8);
    lVar17 = plVar24[1];
    *(long **)(pSVar15 + 8) = uStack_50;
    *(undefined8 *)(pSVar15 + 0x10) = 0;
    *(long *)(pSVar15 + 0x18) = lVar17;
    *(long **)(pSVar15 + 0x20) = plVar24;
    if (lVar17 != 0) {
      *(StringName **)(lVar17 + 0x10) = pSVar15;
    }
    plVar24[1] = (long)pSVar15;
    if (*plVar24 == 0) {
      *plVar24 = (long)pSVar15;
    }
    *(int *)(plVar24 + 2) = (int)plVar24[2] + 1;
    if ((StringName::configured != '\0') && (local_58 != (undefined1  [8])0x0)) {
      StringName::unref();
    }
  }
  if (local_68 != 0) {
    LOCK();
    plVar24 = (long *)(local_68 + -0x10);
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (*plVar24 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* List<ServersDebugger::ResourceInfo, DefaultAllocator>::~List() */

void __thiscall
List<ServersDebugger::ResourceInfo,DefaultAllocator>::~List
          (List<ServersDebugger::ResourceInfo,DefaultAllocator> *this)

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
    if ((long *)plVar2[7] == plVar5) {
      lVar4 = plVar2[5];
      lVar3 = plVar2[6];
      *plVar5 = lVar4;
      if (plVar2 == (long *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x28) = lVar4;
        lVar4 = plVar2[5];
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x30) = lVar3;
      }
      if (plVar2[2] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[2] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = plVar2[2];
          plVar2[2] = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
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



/* List<RenderingServer::TextureInfo, DefaultAllocator>::~List() */

void __thiscall
List<RenderingServer::TextureInfo,DefaultAllocator>::~List
          (List<RenderingServer::TextureInfo,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*plVar5;
    if (pvVar2 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar2 + 0x38) == plVar5) {
      lVar4 = *(long *)((long)pvVar2 + 0x28);
      lVar3 = *(long *)((long)pvVar2 + 0x30);
      *plVar5 = lVar4;
      if (pvVar2 == (void *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x28) = lVar4;
        lVar4 = *(long *)((long)pvVar2 + 0x28);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x30) = lVar3;
      }
      if (*(long *)((long)pvVar2 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 0x20);
          *(undefined8 *)((long)pvVar2 + 0x20) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(pvVar2,false);
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



/* void List<ServersDebugger::ResourceInfo,
   DefaultAllocator>::sort_custom<Comparator<ServersDebugger::ResourceInfo> >() */

void __thiscall
List<ServersDebugger::ResourceInfo,DefaultAllocator>::
sort_custom<Comparator<ServersDebugger::ResourceInfo>>
          (List<ServersDebugger::ResourceInfo,DefaultAllocator> *this)

{
  size_t __n;
  int iVar1;
  int iVar2;
  int iVar3;
  Element *pEVar4;
  undefined8 *puVar5;
  Element **__src;
  Element *pEVar6;
  Element **ppEVar7;
  Element **ppEVar8;
  long lVar9;
  Element *pEVar10;
  Element *pEVar11;
  Element *pEVar12;
  long lVar13;
  bool bVar14;
  
  if (*(long *)this == 0) {
    return;
  }
  iVar2 = *(int *)(*(long *)this + 0x10);
  if (iVar2 < 2) {
    return;
  }
  pEVar10 = (Element *)(long)iVar2;
  __src = (Element **)Memory::alloc_static((long)pEVar10 * 8,true);
  if (__src == (Element **)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    __src[-1] = pEVar10;
  }
  if (*(long **)this != (long *)0x0) {
    ppEVar7 = __src;
    for (pEVar12 = (Element *)**(long **)this; pEVar12 != (Element *)0x0;
        pEVar12 = *(Element **)(pEVar12 + 0x28)) {
      *ppEVar7 = pEVar12;
      ppEVar7 = ppEVar7 + 1;
    }
  }
  lVar9 = 0;
  pEVar12 = pEVar10;
  do {
    pEVar12 = (Element *)((long)pEVar12 >> 1);
    lVar9 = lVar9 + 1;
  } while (pEVar12 != (Element *)0x1);
  SortArray<List<ServersDebugger::ResourceInfo,DefaultAllocator>::Element*,List<ServersDebugger::ResourceInfo,DefaultAllocator>::AuxiliaryComparator<Comparator<ServersDebugger::ResourceInfo>>,true>
  ::introsort(0,(long)pEVar10,__src,lVar9 * 2);
  if ((long)pEVar10 < 0x11) {
    pEVar12 = (Element *)0x1;
    pEVar6 = *__src;
    do {
      while( true ) {
        pEVar11 = __src[(long)pEVar12];
        iVar1 = *(int *)(pEVar11 + 0x20);
        if (iVar1 == *(int *)(pEVar6 + 0x20)) break;
        if (*(int *)(pEVar6 + 0x20) < iVar1) goto LAB_0010a63a;
LAB_0010a674:
        ppEVar7 = __src + (long)pEVar12;
        while( true ) {
          pEVar6 = ppEVar7[-1];
          bVar14 = *(int *)(pEVar6 + 0x20) < iVar1;
          if (iVar1 == *(int *)(pEVar6 + 0x20)) {
            bVar14 = *(ulong *)(pEVar11 + 0x18) < *(ulong *)(pEVar6 + 0x18);
          }
          if (!bVar14) {
            *ppEVar7 = pEVar11;
            pEVar11 = *__src;
            goto LAB_0010a6b2;
          }
          if (__src + 1 == ppEVar7) break;
          *ppEVar7 = pEVar6;
          ppEVar7 = ppEVar7 + -1;
        }
        _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                         "bad comparison function; sorting will be broken",0,0);
        *ppEVar7 = pEVar11;
        pEVar11 = *__src;
LAB_0010a6b2:
        pEVar12 = pEVar12 + 1;
        pEVar6 = pEVar11;
        if (pEVar10 == pEVar12) goto LAB_0010a6c5;
      }
      if (*(ulong *)(pEVar6 + 0x18) <= *(ulong *)(pEVar11 + 0x18)) goto LAB_0010a674;
LAB_0010a63a:
      __n = (long)pEVar12 * 8;
      pEVar12 = pEVar12 + 1;
      memmove(__src + 1,__src,__n);
      *__src = pEVar11;
      pEVar6 = pEVar11;
    } while (pEVar10 != pEVar12);
  }
  else {
    lVar9 = 1;
    do {
      while( true ) {
        lVar13 = lVar9;
        pEVar12 = __src[lVar13];
        iVar3 = *(int *)(pEVar12 + 0x20);
        iVar1 = *(int *)(*__src + 0x20);
        if (iVar3 == iVar1) break;
        if (iVar1 < iVar3) goto LAB_0010a4ba;
LAB_0010a4f7:
        ppEVar7 = __src + lVar13;
        while( true ) {
          pEVar6 = ppEVar7[-1];
          bVar14 = *(int *)(pEVar6 + 0x20) < iVar3;
          if (iVar3 == *(int *)(pEVar6 + 0x20)) {
            bVar14 = *(ulong *)(pEVar12 + 0x18) < *(ulong *)(pEVar6 + 0x18);
          }
          if (!bVar14) {
            *ppEVar7 = pEVar12;
            goto LAB_0010a530;
          }
          if (ppEVar7 == __src + 1) break;
          *ppEVar7 = pEVar6;
          ppEVar7 = ppEVar7 + -1;
        }
        _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                         "bad comparison function; sorting will be broken",0,0);
        *ppEVar7 = pEVar12;
LAB_0010a530:
        lVar9 = lVar13 + 1;
        if (lVar13 + 1 == 0x10) goto LAB_0010a53a;
      }
      if (*(ulong *)(*__src + 0x18) <= *(ulong *)(pEVar12 + 0x18)) goto LAB_0010a4f7;
LAB_0010a4ba:
      memmove(__src + 1,__src,lVar13 * 8);
      *__src = pEVar12;
      lVar9 = lVar13 + 1;
    } while (lVar13 + 1 != 0x10);
LAB_0010a53a:
    pEVar12 = (Element *)(lVar13 + 1);
    do {
      pEVar6 = __src[(long)pEVar12];
      iVar1 = *(int *)(pEVar6 + 0x20);
      pEVar11 = pEVar12;
      while( true ) {
        pEVar4 = __src[(long)(pEVar11 + -1)];
        if (iVar1 == *(int *)(pEVar4 + 0x20)) {
          if (*(ulong *)(pEVar4 + 0x18) <= *(ulong *)(pEVar6 + 0x18)) goto LAB_0010a5a0;
        }
        else if (iVar1 <= *(int *)(pEVar4 + 0x20)) goto LAB_0010a5a0;
        if (pEVar11 == (Element *)0x1) break;
        __src[(long)pEVar11] = pEVar4;
        pEVar11 = pEVar11 + -1;
      }
      _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                       "bad comparison function; sorting will be broken",0,0);
LAB_0010a5a0:
      pEVar12 = pEVar12 + 1;
      __src[(long)pEVar11] = pEVar6;
    } while (pEVar10 != pEVar12);
    pEVar11 = *__src;
  }
LAB_0010a6c5:
  puVar5 = *(undefined8 **)this;
  *puVar5 = pEVar11;
  *(undefined8 *)(pEVar11 + 0x30) = 0;
  *(Element **)(*__src + 0x28) = __src[1];
  pEVar12 = __src[(long)(pEVar10 + -1)];
  puVar5[1] = pEVar12;
  *(Element **)(pEVar12 + 0x30) = __src[(long)(pEVar10 + -2)];
  *(undefined8 *)(__src[(long)(pEVar10 + -1)] + 0x28) = 0;
  if (iVar2 != 2) {
    ppEVar7 = __src;
    do {
      ppEVar8 = ppEVar7 + 1;
      *(Element **)(ppEVar7[1] + 0x30) = *ppEVar7;
      *(Element **)(*ppEVar8 + 0x28) = ppEVar7[2];
      ppEVar7 = ppEVar8;
    } while (ppEVar8 != __src + (iVar2 - 2));
  }
  Memory::free_static(__src,true);
  return;
}



/* CowData<RenderingServer::FrameProfileArea>::_unref() */

void __thiscall
CowData<RenderingServer::FrameProfileArea>::_unref(CowData<RenderingServer::FrameProfileArea> *this)

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



/* CowData<RenderingServer::FrameProfileArea>::_realloc(long) */

undefined8 __thiscall
CowData<RenderingServer::FrameProfileArea>::_realloc
          (CowData<RenderingServer::FrameProfileArea> *this,long param_1)

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



/* Vector<RenderingServer::FrameProfileArea>::append_array(Vector<RenderingServer::FrameProfileArea>)
    */

void __thiscall
Vector<RenderingServer::FrameProfileArea>::append_array
          (Vector<RenderingServer::FrameProfileArea> *this,long param_2)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  CowData<char32_t> *this_00;
  
  if ((*(long *)(param_2 + 8) != 0) && (lVar2 = *(long *)(*(long *)(param_2 + 8) + -8), lVar2 != 0))
  {
    if (*(long *)(this + 8) == 0) {
      lVar7 = 0;
      lVar6 = lVar2;
    }
    else {
      lVar7 = *(long *)(*(long *)(this + 8) + -8);
      lVar6 = lVar2 + lVar7;
    }
    CowData<RenderingServer::FrameProfileArea>::resize<false>
              ((CowData<RenderingServer::FrameProfileArea> *)(this + 8),lVar6);
    if (0 < lVar2) {
      lVar6 = 0;
      lVar7 = lVar7 * 0x18;
      do {
        lVar3 = *(long *)(param_2 + 8);
        if (lVar3 == 0) {
          lVar8 = 0;
LAB_0010a9e7:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar8,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar8 = *(long *)(lVar3 + -8);
        if (lVar8 <= lVar6) goto LAB_0010a9e7;
        pCVar1 = (CowData *)(lVar3 + lVar6 * 0x18);
        CowData<RenderingServer::FrameProfileArea>::_copy_on_write
                  ((CowData<RenderingServer::FrameProfileArea> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar7);
        if (*(long *)this_00 != *(long *)pCVar1) {
          CowData<char32_t>::_ref(this_00,pCVar1);
        }
        uVar5 = *(undefined8 *)(pCVar1 + 0x10);
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 0x18;
        *(undefined8 *)(this_00 + 8) = *(undefined8 *)(pCVar1 + 8);
        *(undefined8 *)(this_00 + 0x10) = uVar5;
      } while (lVar6 != lVar2);
    }
  }
  return;
}



/* ServersDebugger::VisualProfiler::tick(double, double, double, double) */

void ServersDebugger::VisualProfiler::tick
               (double param_1,double param_2,double param_3,double param_4)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  bool bVar5;
  Array aAStack_78 [8];
  long local_70;
  undefined1 local_68 [8];
  long local_60;
  char *local_58;
  long local_50;
  undefined8 local_48;
  Vector<RenderingServer::FrameProfileArea> local_40 [8];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar3 + 0x1230))(local_68,plVar3);
  local_38 = 0;
  if ((local_60 != 0) && (*(long *)(local_60 + -8) != 0)) {
    plVar3 = (long *)RenderingServer::get_singleton();
    local_48 = (**(code **)(*plVar3 + 0x1238))(plVar3);
    local_50 = 0;
    plVar3 = (long *)(local_60 + -0x10);
    if (local_60 != 0) {
      do {
        lVar1 = *plVar3;
        if (lVar1 == 0) goto LAB_0010ab30;
        LOCK();
        lVar4 = *plVar3;
        bVar5 = lVar1 == lVar4;
        if (bVar5) {
          *plVar3 = lVar1 + 1;
          lVar4 = lVar1;
        }
        UNLOCK();
      } while (!bVar5);
      if (lVar4 != -1) {
        local_50 = local_60;
      }
    }
LAB_0010ab30:
    Vector<RenderingServer::FrameProfileArea>::append_array(local_40,&local_58);
    CowData<RenderingServer::FrameProfileArea>::_unref
              ((CowData<RenderingServer::FrameProfileArea> *)&local_50);
    plVar3 = EngineDebugger::singleton;
    pcVar2 = *(code **)(*EngineDebugger::singleton + 8);
    VisualProfilerFrame::serialize();
    local_58 = "visual:profile_frame";
    local_70 = 0;
    local_50 = 0x14;
    String::parse_latin1((StrRange *)&local_70);
    (*pcVar2)(plVar3,(StrRange *)&local_70,aAStack_78);
    lVar1 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar3 = (long *)(local_70 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
    Array::~Array(aAStack_78);
    CowData<RenderingServer::FrameProfileArea>::_unref
              ((CowData<RenderingServer::FrameProfileArea> *)&local_38);
  }
  CowData<RenderingServer::FrameProfileArea>::_unref
            ((CowData<RenderingServer::FrameProfileArea> *)&local_60);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<ServersDebugger::ScriptFunctionInfo>::_unref() */

void __thiscall
CowData<ServersDebugger::ScriptFunctionInfo>::_unref
          (CowData<ServersDebugger::ScriptFunctionInfo> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
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
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 5;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<ServersDebugger::ScriptFunctionInfo>::_realloc(long) */

undefined8 __thiscall
CowData<ServersDebugger::ScriptFunctionInfo>::_realloc
          (CowData<ServersDebugger::ScriptFunctionInfo> *this,long param_1)

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
/* Error CowData<ServersDebugger::ScriptFunctionInfo>::resize<false>(long) */

undefined8 __thiscall
CowData<ServersDebugger::ScriptFunctionInfo>::resize<false>
          (CowData<ServersDebugger::ScriptFunctionInfo> *this,long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
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
    lVar7 = lVar5 * 0x28;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x28 == 0) {
LAB_0010afd0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 0x28 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar9 = uVar8 + 1;
  if (lVar9 == 0) goto LAB_0010afd0;
  if (param_1 <= lVar5) {
    lVar5 = *(long *)this;
    uVar8 = param_1;
    while (lVar5 != 0) {
      if (*(ulong *)(lVar5 + -8) <= uVar8) {
LAB_0010ae7a:
        if (lVar9 != lVar7) {
          uVar2 = _realloc(this,lVar9);
          if ((int)uVar2 != 0) {
            return uVar2;
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
      while ((StringName::configured == '\0' || (*(long *)(lVar5 + uVar8 * 0x28) == 0))) {
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar5 + -8) <= uVar8) goto LAB_0010ae7a;
      }
      StringName::unref();
      uVar8 = uVar8 + 1;
      lVar5 = *(long *)this;
    }
    goto LAB_0010ae44;
  }
  if (lVar9 == lVar7) {
LAB_0010af43:
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
LAB_0010ae44:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar5 = puVar6[-1];
    if (param_1 <= lVar5) goto LAB_0010af20;
  }
  else {
    if (lVar5 != 0) {
      uVar2 = _realloc(this,lVar9);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      goto LAB_0010af43;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar5 = 0;
  }
  uVar2 = _LC67;
  puVar3 = puVar6 + lVar5 * 5;
  do {
    *puVar3 = 0;
    puVar4 = puVar3 + 5;
    puVar3[1] = uVar2;
    *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
    puVar3[4] = 0;
    puVar3 = puVar4;
  } while (puVar4 != puVar6 + param_1 * 5);
LAB_0010af20:
  puVar6[-1] = param_1;
  return 0;
}



/* CowData<ScriptLanguage::ProfilingInfo>::_unref() */

void __thiscall
CowData<ScriptLanguage::ProfilingInfo>::_unref(CowData<ScriptLanguage::ProfilingInfo> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
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
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 5;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* ServersDebugger::ScriptsProfiler::~ScriptsProfiler() */

void __thiscall ServersDebugger::ScriptsProfiler::~ScriptsProfiler(ScriptsProfiler *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0010d5d0;
  pvVar4 = *(void **)(this + 0x1f8);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0x21c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x218) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x21c) = 0;
        *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
      }
      else {
        lVar3 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x200) + lVar3) != 0) {
            bVar5 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0x200) + lVar3) = 0;
            pvVar4 = *(void **)((long)pvVar4 + lVar3 * 2);
            if ((bVar5) && (*(long *)((long)pvVar4 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar4,false);
            pvVar4 = *(void **)(this + 0x1f8);
            *(undefined8 *)((long)pvVar4 + lVar3 * 2) = 0;
          }
          lVar3 = lVar3 + 4;
        } while (lVar3 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x21c) = 0;
        *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
        if (pvVar4 == (void *)0x0) goto LAB_0010b1a5;
      }
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0x200),false);
  }
LAB_0010b1a5:
  if (*(long *)(this + 0x1e8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1e8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x1e8);
      *(undefined8 *)(this + 0x1e8) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<ScriptLanguage::ProfilingInfo>::_unref
            ((CowData<ScriptLanguage::ProfilingInfo> *)(this + 0x1d8));
  EngineProfiler::~EngineProfiler((EngineProfiler *)this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ServersDebugger::ScriptsProfiler::write_frame_data(Vector<ServersDebugger::ScriptFunctionInfo>&,
   unsigned long&, bool) */

void __thiscall
ServersDebugger::ScriptsProfiler::write_frame_data
          (ScriptsProfiler *this,Vector *param_1,ulong *param_2,bool param_3)

{
  uint uVar1;
  code *pcVar2;
  ProfilingInfo *pPVar3;
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
  int iVar20;
  uint uVar21;
  long *plVar22;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  undefined4 *puVar26;
  size_t sVar27;
  long lVar28;
  ProfilingInfo *pPVar29;
  long lVar30;
  int iVar31;
  ulong uVar32;
  ProfilingInfo **ppPVar33;
  ulong uVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  ProfilingInfo **__src;
  long lVar38;
  ProfilingInfo **ppPVar39;
  undefined4 *puVar40;
  long in_FS_OFFSET;
  bool bVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  ulong local_c8;
  Array local_78 [8];
  undefined8 local_70;
  long local_68;
  int local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < (int)ScriptServer::_language_count) {
    lVar38 = 0;
    iVar37 = 0;
    iVar31 = 0;
    if (param_3) {
      while( true ) {
        plVar22 = (long *)ScriptServer::get_language(iVar37);
        pcVar2 = *(code **)(*plVar22 + 0x308);
        if (*(long *)(this + 0x1d8) == 0) break;
        lVar23 = *(long *)(*(long *)(this + 0x1d8) + -8);
        if ((lVar23 <= lVar38) || (lVar38 < 0)) goto LAB_0010b421;
        iVar37 = iVar37 + 1;
        CowData<ScriptLanguage::ProfilingInfo>::_copy_on_write
                  ((CowData<ScriptLanguage::ProfilingInfo> *)(this + 0x1d8));
        iVar20 = (*pcVar2)(plVar22,*(long *)(this + 0x1d8) + (long)iVar31 * 0x28,
                           (int)lVar23 - iVar31);
        iVar31 = iVar31 + iVar20;
        if ((int)ScriptServer::_language_count <= iVar37) goto LAB_0010b448;
        lVar38 = (long)iVar31;
      }
    }
    else {
      while( true ) {
        plVar22 = (long *)ScriptServer::get_language(iVar37);
        pcVar2 = *(code **)(*plVar22 + 0x310);
        if (*(long *)(this + 0x1d8) == 0) break;
        lVar23 = *(long *)(*(long *)(this + 0x1d8) + -8);
        if ((lVar38 < 0) || (lVar23 <= lVar38)) goto LAB_0010b421;
        iVar37 = iVar37 + 1;
        CowData<ScriptLanguage::ProfilingInfo>::_copy_on_write
                  ((CowData<ScriptLanguage::ProfilingInfo> *)(this + 0x1d8));
        iVar20 = (*pcVar2)(plVar22,*(long *)(this + 0x1d8) + (long)iVar31 * 0x28,
                           (int)lVar23 - iVar31);
        iVar31 = iVar31 + iVar20;
        if ((int)ScriptServer::_language_count <= iVar37) goto LAB_0010b448;
        lVar38 = (long)iVar31;
      }
    }
    lVar23 = 0;
LAB_0010b421:
    _err_print_index_error
              ("operator[]","./core/templates/vector.h",0x38,lVar38,lVar23,"p_index",
               "((Vector<T> *)(this))->_cowdata.size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  CowData<ScriptLanguage::ProfilingInfo*>::_copy_on_write
            ((CowData<ScriptLanguage::ProfilingInfo*> *)(this + 0x1e8));
LAB_0010b627:
  uVar1 = *(uint *)(this + 0x220);
  *param_2 = 0;
  uVar24 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    uVar24 = 0;
  }
LAB_0010b645:
  CowData<ServersDebugger::ScriptFunctionInfo>::resize<false>
            ((CowData<ServersDebugger::ScriptFunctionInfo> *)(param_1 + 8),(long)(int)uVar24);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    CowData<ServersDebugger::ScriptFunctionInfo>::_copy_on_write
              ((CowData<ServersDebugger::ScriptFunctionInfo> *)(param_1 + 8));
    return;
  }
LAB_0010be7d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010b448:
  lVar30 = (long)iVar31;
  if (iVar31 < 1) {
    CowData<ScriptLanguage::ProfilingInfo*>::_copy_on_write
              ((CowData<ScriptLanguage::ProfilingInfo*> *)(this + 0x1e8));
    __src = *(ProfilingInfo ***)(this + 0x1e8);
    if (lVar30 != 0) goto LAB_0010b50f;
    goto LAB_0010b627;
  }
  lVar38 = 0;
  do {
    if (*(long *)(this + 0x1d8) == 0) {
LAB_0010b5f0:
      lVar23 = 0;
      goto LAB_0010b421;
    }
    lVar23 = *(long *)(*(long *)(this + 0x1d8) + -8);
    if (lVar23 <= lVar38) goto LAB_0010b421;
    CowData<ScriptLanguage::ProfilingInfo>::_copy_on_write
              ((CowData<ScriptLanguage::ProfilingInfo> *)(this + 0x1d8));
    lVar28 = *(long *)(this + 0x1d8);
    if (*(long *)(this + 0x1e8) == 0) goto LAB_0010b5f0;
    lVar23 = *(long *)(*(long *)(this + 0x1e8) + -8);
    if (lVar23 <= lVar38) goto LAB_0010b421;
    CowData<ScriptLanguage::ProfilingInfo*>::_copy_on_write
              ((CowData<ScriptLanguage::ProfilingInfo*> *)(this + 0x1e8));
    *(long *)(*(long *)(this + 0x1e8) + lVar38 * 8) = lVar28 + lVar38 * 0x28;
    lVar38 = lVar38 + 1;
  } while (lVar30 != lVar38);
  CowData<ScriptLanguage::ProfilingInfo*>::_copy_on_write
            ((CowData<ScriptLanguage::ProfilingInfo*> *)(this + 0x1e8));
  __src = *(ProfilingInfo ***)(this + 0x1e8);
  if (lVar30 == 1) {
    SortArray<ScriptLanguage::ProfilingInfo*,ServersDebugger::ScriptsProfiler::ProfileInfoSort,true>
    ::introsort(0,1,__src,0);
    uVar32 = 1;
  }
  else {
LAB_0010b50f:
    lVar23 = 0;
    lVar38 = lVar30;
    do {
      lVar38 = lVar38 >> 1;
      lVar23 = lVar23 + 1;
    } while (lVar38 != 1);
    SortArray<ScriptLanguage::ProfilingInfo*,ServersDebugger::ScriptsProfiler::ProfileInfoSort,true>
    ::introsort(0,lVar30,__src,lVar23 * 2);
    lVar38 = 1;
    if (lVar30 < 0x11) {
      lVar38 = 1;
      do {
        pPVar3 = __src[lVar38];
        sVar27 = lVar38 * 8;
        uVar32 = *(ulong *)(pPVar3 + 0x10);
        if (*(ulong *)(*__src + 0x10) < uVar32) {
          memmove(__src + 1,__src,sVar27);
          *__src = pPVar3;
        }
        else {
          pPVar29 = __src[lVar38 + -1];
          lVar23 = lVar38 + -1;
          if (*(ulong *)(pPVar29 + 0x10) < uVar32) {
            do {
              lVar28 = lVar23;
              if (lVar28 == 0) {
                _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                 "bad comparison function; sorting will be broken",0,0);
                sVar27 = 8;
                goto LAB_0010b71d;
              }
              __src[lVar28 + 1] = pPVar29;
              pPVar29 = __src[lVar28 + -1];
              lVar23 = lVar28 + -1;
            } while (*(ulong *)(pPVar29 + 0x10) < uVar32);
            sVar27 = lVar28 << 3;
          }
LAB_0010b71d:
          *(ProfilingInfo **)((long)__src + sVar27) = pPVar3;
        }
        lVar38 = lVar38 + 1;
      } while (lVar30 != lVar38);
      uVar32 = (ulong)iVar31;
    }
    else {
      do {
        pPVar3 = __src[lVar38];
        sVar27 = lVar38 * 8;
        uVar32 = *(ulong *)(pPVar3 + 0x10);
        if (*(ulong *)(*__src + 0x10) < uVar32) {
          memmove(__src + 1,__src,sVar27);
          *__src = pPVar3;
        }
        else {
          pPVar29 = __src[lVar38 + -1];
          lVar23 = lVar38 + -1;
          if (*(ulong *)(pPVar29 + 0x10) < uVar32) {
            do {
              lVar28 = lVar23;
              if (lVar28 == 0) {
                _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                 "bad comparison function; sorting will be broken",0,0);
                sVar27 = 8;
                goto LAB_0010b5e5;
              }
              __src[lVar28 + 1] = pPVar29;
              pPVar29 = __src[lVar28 + -1];
              lVar23 = lVar28 + -1;
            } while (*(ulong *)(pPVar29 + 0x10) < uVar32);
            sVar27 = lVar28 << 3;
          }
LAB_0010b5e5:
          *(ProfilingInfo **)((long)__src + sVar27) = pPVar3;
        }
        lVar38 = lVar38 + 1;
      } while (lVar38 != 0x10);
      ppPVar39 = __src + 0x10;
      lVar38 = 0x10;
      do {
        pPVar3 = *ppPVar39;
        pPVar29 = ppPVar39[-1];
        lVar23 = lVar38 + -1;
        uVar32 = *(ulong *)(pPVar3 + 0x10);
        ppPVar33 = ppPVar39;
        if (*(ulong *)(pPVar29 + 0x10) < uVar32) {
          do {
            __src[lVar23 + 1] = pPVar29;
            lVar28 = lVar23 + -1;
            pPVar29 = __src[lVar28];
            if (uVar32 <= *(ulong *)(pPVar29 + 0x10)) {
              ppPVar33 = __src + lVar23;
              goto LAB_0010baf3;
            }
            lVar23 = lVar28;
          } while (lVar28 != 0);
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
          ppPVar33 = __src + 1;
        }
LAB_0010baf3:
        lVar38 = lVar38 + 1;
        *ppPVar33 = pPVar3;
        ppPVar39 = ppPVar39 + 1;
      } while (lVar38 != lVar30);
      uVar32 = (ulong)iVar31;
    }
  }
  iVar31 = *(int *)(this + 0x220);
  *param_2 = 0;
  uVar24 = (long)iVar31;
  if ((int)uVar32 <= iVar31) {
    uVar24 = uVar32;
  }
  if (0 < (int)uVar24) {
    lVar38 = *(long *)(this + 0x1e8);
    if (lVar38 == 0) {
      local_c8 = 0;
      lVar23 = 0;
LAB_0010ba22:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,local_c8,lVar23,"p_index","size()","",false
                 ,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    local_c8 = 0;
    do {
      lVar23 = *(long *)(lVar38 + -8);
      if (lVar23 <= (long)local_c8) goto LAB_0010ba22;
      plVar22 = *(long **)(lVar38 + local_c8 * 8);
      lVar30 = local_c8 * 8;
      iVar31 = *(int *)(this + 0x21c);
      if ((*(long *)(this + 0x1f8) != 0) && (iVar31 != 0)) {
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x218) * 4);
        lVar23 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x218) * 8);
        lVar28 = *plVar22;
        if (lVar28 == 0) {
          uVar21 = StringName::get_empty_hash();
          lVar38 = *(long *)(this + 0x1e8);
        }
        else {
          uVar21 = *(uint *)(lVar28 + 0x20);
        }
        uVar32 = CONCAT44(0,uVar1);
        if (uVar21 == 0) {
          uVar21 = 1;
        }
        uVar35 = 0;
        auVar43._8_8_ = 0;
        auVar43._0_8_ = (ulong)uVar21 * lVar23;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar32;
        lVar28 = SUB168(auVar43 * auVar11,8);
        uVar36 = *(uint *)(*(long *)(this + 0x200) + lVar28 * 4);
        uVar34 = (ulong)uVar36;
        iVar31 = SUB164(auVar43 * auVar11,8);
        if (uVar36 != 0) {
          do {
            if (((uint)uVar34 == uVar21) &&
               (*(long *)(*(long *)(*(long *)(this + 0x1f8) + lVar28 * 8) + 0x10) == *plVar22))
            goto LAB_0010b8a5;
            uVar35 = uVar35 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)(iVar31 + 1) * lVar23;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = uVar32;
            lVar28 = SUB168(auVar4 * auVar12,8);
            uVar36 = *(uint *)(*(long *)(this + 0x200) + lVar28 * 4);
            uVar34 = (ulong)uVar36;
            iVar31 = SUB164(auVar4 * auVar12,8);
          } while ((uVar36 != 0) &&
                  (auVar5._8_8_ = 0, auVar5._0_8_ = uVar34 * lVar23, auVar13._8_8_ = 0,
                  auVar13._0_8_ = uVar32, auVar6._8_8_ = 0,
                  auVar6._0_8_ = (ulong)((uVar1 + iVar31) - SUB164(auVar5 * auVar13,8)) * lVar23,
                  auVar14._8_8_ = 0, auVar14._0_8_ = uVar32, uVar35 <= SUB164(auVar6 * auVar14,8)));
        }
        local_68 = 0;
        iVar31 = *(int *)(this + 0x21c);
        local_60 = -1;
        if (lVar38 != 0) goto LAB_0010b912;
LAB_0010b9ff:
        lVar23 = 0;
        goto LAB_0010ba22;
      }
LAB_0010b912:
      local_60 = -1;
      local_68 = 0;
      lVar23 = *(long *)(lVar38 + -8);
      if (lVar23 <= (long)local_c8) goto LAB_0010ba22;
      StringName::operator=((StringName *)&local_68,*(StringName **)(lVar38 + lVar30));
      plVar22 = EngineDebugger::singleton;
      pcVar2 = *(code **)(*EngineDebugger::singleton + 8);
      local_60 = iVar31;
      ScriptFunctionSignature::serialize();
      local_58 = "servers:function_signature";
      local_70 = 0;
      local_50 = 0x1a;
      String::parse_latin1((StrRange *)&local_70);
      (*pcVar2)(plVar22,(StrRange *)&local_70,local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      Array::~Array(local_78);
      lVar38 = *(long *)(this + 0x1e8);
      if (lVar38 == 0) goto LAB_0010b9ff;
      lVar23 = *(long *)(lVar38 + -8);
      if (lVar23 <= (long)local_c8) goto LAB_0010ba22;
      piVar25 = (int *)HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                       ::operator[]((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                                     *)(this + 0x1f0),*(StringName **)(lVar38 + lVar30));
      bVar41 = StringName::configured != '\0';
      *piVar25 = iVar31;
      if ((bVar41) && (local_68 != 0)) {
        StringName::unref();
      }
      lVar38 = *(long *)(this + 0x1e8);
LAB_0010b8a5:
      if (lVar38 == 0) goto LAB_0010b9ff;
      lVar23 = *(long *)(lVar38 + -8);
      if (lVar23 <= (long)local_c8) goto LAB_0010ba22;
      local_c8 = local_c8 + 1;
      *param_2 = *param_2 + *(long *)(*(long *)(lVar38 + lVar30) + 0x18);
    } while (local_c8 != uVar24);
    CowData<ServersDebugger::ScriptFunctionInfo>::resize<false>
              ((CowData<ServersDebugger::ScriptFunctionInfo> *)(param_1 + 8),uVar24);
    local_c8 = 0;
    CowData<ServersDebugger::ScriptFunctionInfo>::_copy_on_write
              ((CowData<ServersDebugger::ScriptFunctionInfo> *)(param_1 + 8));
    lVar38 = *(long *)(this + 0x1e8);
    puVar40 = (undefined4 *)(*(long *)(param_1 + 8) + 8);
    do {
      if (lVar38 == 0) {
LAB_0010bde9:
        lVar23 = 0;
        goto LAB_0010ba22;
      }
      lVar23 = *(long *)(lVar38 + -8);
      if (lVar23 <= (long)local_c8) goto LAB_0010ba22;
      plVar22 = *(long **)(lVar38 + local_c8 * 8);
      if ((*(long *)(this + 0x1f8) != 0) && (*(int *)(this + 0x21c) != 0)) {
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x218) * 4);
        lVar23 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x218) * 8);
        lVar30 = *plVar22;
        if (lVar30 == 0) {
          uVar21 = StringName::get_empty_hash();
          lVar38 = *(long *)(this + 0x1e8);
        }
        else {
          uVar21 = *(uint *)(lVar30 + 0x20);
        }
        uVar32 = CONCAT44(0,uVar1);
        if (uVar21 == 0) {
          uVar21 = 1;
        }
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (ulong)uVar21 * lVar23;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar32;
        lVar30 = SUB168(auVar7 * auVar15,8);
        uVar36 = *(uint *)(*(long *)(this + 0x200) + lVar30 * 4);
        uVar34 = (ulong)uVar36;
        iVar31 = SUB164(auVar7 * auVar15,8);
        if (uVar36 != 0) {
          uVar36 = 0;
          while (((uint)uVar34 != uVar21 ||
                 (*(long *)(*(long *)(*(long *)(this + 0x1f8) + lVar30 * 8) + 0x10) != *plVar22))) {
            uVar36 = uVar36 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)(iVar31 + 1) * lVar23;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar32;
            lVar30 = SUB168(auVar8 * auVar16,8);
            uVar35 = *(uint *)(*(long *)(this + 0x200) + lVar30 * 4);
            uVar34 = (ulong)uVar35;
            iVar31 = SUB164(auVar8 * auVar16,8);
            if ((uVar35 == 0) ||
               (auVar9._8_8_ = 0, auVar9._0_8_ = uVar34 * lVar23, auVar17._8_8_ = 0,
               auVar17._0_8_ = uVar32, auVar10._8_8_ = 0,
               auVar10._0_8_ = (ulong)((uVar1 + iVar31) - SUB164(auVar9 * auVar17,8)) * lVar23,
               auVar18._8_8_ = 0, auVar18._0_8_ = uVar32, SUB164(auVar10 * auVar18,8) < uVar36))
            goto LAB_0010bd12;
          }
          if (lVar38 == 0) goto LAB_0010bde9;
          lVar23 = *(long *)(lVar38 + -8);
          if (lVar23 <= (long)local_c8) goto LAB_0010ba22;
          puVar26 = (undefined4 *)
                    HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                    ::operator[]((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                                  *)(this + 0x1f0),*(StringName **)(lVar38 + local_c8 * 8));
          lVar38 = *(long *)(this + 0x1e8);
          *puVar40 = *puVar26;
        }
LAB_0010bd12:
        if (lVar38 == 0) goto LAB_0010bde9;
        lVar23 = *(long *)(lVar38 + -8);
        if (lVar23 <= (long)local_c8) goto LAB_0010ba22;
      }
      lVar23 = *(long *)(lVar38 + local_c8 * 8);
      puVar40[1] = (int)*(undefined8 *)(lVar23 + 8);
      auVar42._0_8_ = (double)*(ulong *)(lVar23 + 0x18);
      uVar32 = *(ulong *)(lVar23 + 0x20);
      auVar42._8_8_ = (double)*(ulong *)(lVar23 + 0x10);
      auVar19._8_8_ = _UNK_0010dc38;
      auVar19._0_8_ = __LC54;
      auVar43 = divpd(auVar42,auVar19);
      *(undefined1 (*) [16])(puVar40 + 2) = auVar43;
      local_c8 = local_c8 + 1;
      *(double *)(puVar40 + 6) = (double)uVar32 / __LC54;
      puVar40 = puVar40 + 10;
    } while (local_c8 != uVar24);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_0010be7d;
  }
  goto LAB_0010b645;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ServersDebugger::ServersProfiler::_send_frame_data(bool) */

void __thiscall
ServersDebugger::ServersProfiler::_send_frame_data(ServersProfiler *this,bool param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long in_FS_OFFSET;
  ulong local_b0;
  Array local_a8 [8];
  long local_a0;
  char *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  double local_60;
  undefined8 local_58;
  Vector local_50 [8];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0.0;
  local_58 = 0;
  local_48 = 0;
  lVar5 = Engine::get_singleton();
  local_80 = *(undefined8 *)(this + 0x430);
  uStack_78 = *(undefined8 *)(this + 0x438);
  local_70 = *(undefined8 *)(this + 0x440);
  uStack_68 = *(undefined8 *)(this + 0x448);
  puVar1 = *(undefined8 **)(this + 0x1f0);
  local_88 = (undefined4)*(undefined8 *)(lVar5 + 0x78);
  do {
    if (puVar1 == (undefined8 *)0x0) {
      local_b0 = 0;
      ScriptsProfiler::write_frame_data
                ((ScriptsProfiler *)(this + 0x208),local_50,&local_b0,param_1);
      plVar6 = EngineDebugger::singleton;
      local_60 = (double)local_b0 / __LC54;
      if (this[0x1d0] == (ServersProfiler)0x0) {
        pcVar4 = *(code **)(*EngineDebugger::singleton + 8);
        if (param_1) {
          ServersProfilerFrame::serialize();
          local_98 = "servers:profile_total";
        }
        else {
          ServersProfilerFrame::serialize();
          local_98 = "servers:profile_frame";
        }
        local_a0 = 0;
        local_90 = 0x15;
        String::parse_latin1((StrRange *)&local_a0);
        (*pcVar4)(plVar6,(StrRange *)&local_a0,local_a8);
        lVar5 = local_a0;
        if (local_a0 != 0) {
          LOCK();
          plVar6 = (long *)(local_a0 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_a0 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        Array::~Array(local_a8);
        CowData<ServersDebugger::ScriptFunctionInfo>::_unref
                  ((CowData<ServersDebugger::ScriptFunctionInfo> *)&local_48);
        List<ServersDebugger::ServerInfo,DefaultAllocator>::~List
                  ((List<ServersDebugger::ServerInfo,DefaultAllocator> *)&local_58);
      }
      else {
        this[0x1d0] = (ServersProfiler)0x0;
        CowData<ServersDebugger::ScriptFunctionInfo>::_unref
                  ((CowData<ServersDebugger::ScriptFunctionInfo> *)&local_48);
        List<ServersDebugger::ServerInfo,DefaultAllocator>::~List
                  ((List<ServersDebugger::ServerInfo,DefaultAllocator> *)&local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (!param_1) {
      List<ServersDebugger::ServerInfo,DefaultAllocator>::push_back
                ((List<ServersDebugger::ServerInfo,DefaultAllocator> *)&local_58,
                 (ServerInfo *)(puVar1 + 3));
    }
    plVar6 = (long *)puVar1[4];
    if (plVar6 != (long *)0x0) {
      do {
        plVar2 = (long *)*plVar6;
        if (plVar2 == (long *)0x0) goto LAB_0010bfda;
        if (plVar6 == (long *)plVar2[4]) {
          lVar5 = plVar2[2];
          lVar3 = plVar2[3];
          *plVar6 = lVar5;
          if (plVar2 == (long *)plVar6[1]) {
            plVar6[1] = lVar3;
          }
          if (lVar3 != 0) {
            *(long *)(lVar3 + 0x10) = lVar5;
            lVar5 = plVar2[2];
          }
          if (lVar5 != 0) {
            *(long *)(lVar5 + 0x18) = lVar3;
          }
          if ((StringName::configured != '\0') && (*plVar2 != 0)) {
            StringName::unref();
          }
          Memory::free_static(plVar2,false);
          *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar6 = (long *)puVar1[4];
      } while ((int)plVar6[2] != 0);
      Memory::free_static(plVar6,false);
      puVar1[4] = 0;
    }
LAB_0010bfda:
    puVar1 = (undefined8 *)*puVar1;
  } while( true );
}



/* ServersDebugger::ServersProfiler::tick(double, double, double, double) */

void __thiscall
ServersDebugger::ServersProfiler::tick
          (ServersProfiler *this,double param_1,double param_2,double param_3,double param_4)

{
  *(double *)(this + 0x430) = param_1;
  *(double *)(this + 0x438) = param_2;
  *(double *)(this + 0x440) = param_3;
  *(double *)(this + 0x448) = param_4;
  _send_frame_data(this,false);
  return;
}



/* ServersDebugger::ServersProfiler::toggle(bool, Array const&) */

void __thiscall
ServersDebugger::ServersProfiler::toggle(ServersProfiler *this,bool param_1,Array *param_2)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  
  this[0x1d0] = (ServersProfiler)0x0;
  if (param_1) {
    if ((*(long *)(this + 0x1e0) != 0) && (*(int *)(this + 0x204) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x200) * 4);
      if (uVar1 != 0) {
        lVar3 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1e8) + lVar3) != 0) {
            *(int *)(*(long *)(this + 0x1e8) + lVar3) = 0;
            pvVar2 = *(void **)(*(long *)(this + 0x1e0) + lVar3 * 2);
            ServerInfo::~ServerInfo((ServerInfo *)((long)pvVar2 + 0x18));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar2,false);
            *(undefined8 *)(*(long *)(this + 0x1e0) + lVar3 * 2) = 0;
          }
          lVar3 = lVar3 + 4;
        } while (lVar3 != (ulong)uVar1 << 2);
      }
      *(undefined4 *)(this + 0x204) = 0;
      *(undefined1 (*) [16])(this + 0x1f0) = (undefined1  [16])0x0;
    }
  }
  else {
    _send_frame_data(this,true);
  }
  ScriptsProfiler::toggle((ScriptsProfiler *)(this + 0x208),param_1,param_2);
  return;
}



/* ServersDebugger::ScriptsProfiler::~ScriptsProfiler() */

void __thiscall ServersDebugger::ScriptsProfiler::~ScriptsProfiler(ScriptsProfiler *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0010d5d0;
  pvVar4 = *(void **)(this + 0x1f8);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0x21c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x218) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x21c) = 0;
        *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
      }
      else {
        lVar3 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x200) + lVar3) != 0) {
            bVar5 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0x200) + lVar3) = 0;
            pvVar4 = *(void **)((long)pvVar4 + lVar3 * 2);
            if ((bVar5) && (*(long *)((long)pvVar4 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar4,false);
            pvVar4 = *(void **)(this + 0x1f8);
            *(undefined8 *)((long)pvVar4 + lVar3 * 2) = 0;
          }
          lVar3 = lVar3 + 4;
        } while (lVar3 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x21c) = 0;
        *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
        if (pvVar4 == (void *)0x0) goto LAB_0010c405;
      }
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0x200),false);
  }
LAB_0010c405:
  if (*(long *)(this + 0x1e8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1e8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x1e8);
      *(undefined8 *)(this + 0x1e8) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<ScriptLanguage::ProfilingInfo>::_unref
            ((CowData<ScriptLanguage::ProfilingInfo> *)(this + 0x1d8));
  EngineProfiler::~EngineProfiler((EngineProfiler *)this);
  operator_delete(this,0x228);
  return;
}



/* ServersDebugger::ServersProfiler::~ServersProfiler() */

void __thiscall ServersDebugger::ServersProfiler::~ServersProfiler(ServersProfiler *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0010d748;
  *(undefined ***)(this + 0x208) = &PTR__initialize_classv_0010d5d0;
  pvVar4 = *(void **)(this + 0x400);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0x424) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x420) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x424) = 0;
        *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
      }
      else {
        lVar3 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x408) + lVar3) != 0) {
            bVar5 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0x408) + lVar3) = 0;
            pvVar4 = *(void **)((long)pvVar4 + lVar3 * 2);
            if ((bVar5) && (*(long *)((long)pvVar4 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar4,false);
            pvVar4 = *(void **)(this + 0x400);
            *(undefined8 *)((long)pvVar4 + lVar3 * 2) = 0;
          }
          lVar3 = lVar3 + 4;
        } while ((ulong)uVar2 << 2 != lVar3);
        *(undefined4 *)(this + 0x424) = 0;
        *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
        if (pvVar4 == (void *)0x0) goto LAB_0010c59a;
      }
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0x408),false);
  }
LAB_0010c59a:
  if (*(long *)(this + 0x3f0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x3f0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x3f0);
      *(undefined8 *)(this + 0x3f0) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<ScriptLanguage::ProfilingInfo>::_unref
            ((CowData<ScriptLanguage::ProfilingInfo> *)(this + 0x3e0));
  EngineProfiler::~EngineProfiler((EngineProfiler *)(this + 0x208));
  pvVar4 = *(void **)(this + 0x1e0);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0x204) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x200) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x204) = 0;
        *(undefined1 (*) [16])(this + 0x1f0) = (undefined1  [16])0x0;
      }
      else {
        lVar3 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1e8) + lVar3) != 0) {
            pvVar4 = *(void **)((long)pvVar4 + lVar3 * 2);
            *(int *)(*(long *)(this + 0x1e8) + lVar3) = 0;
            ServerInfo::~ServerInfo((ServerInfo *)((long)pvVar4 + 0x18));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar4,false);
            pvVar4 = *(void **)(this + 0x1e0);
            *(undefined8 *)((long)pvVar4 + lVar3 * 2) = 0;
          }
          lVar3 = lVar3 + 4;
        } while (lVar3 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x204) = 0;
        *(undefined1 (*) [16])(this + 0x1f0) = (undefined1  [16])0x0;
        if (pvVar4 == (void *)0x0) goto LAB_0010c693;
      }
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0x1e8),false);
  }
LAB_0010c693:
  EngineProfiler::~EngineProfiler((EngineProfiler *)this);
  return;
}



/* ServersDebugger::ServersProfiler::~ServersProfiler() */

void __thiscall ServersDebugger::ServersProfiler::~ServersProfiler(ServersProfiler *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0010d748;
  *(undefined ***)(this + 0x208) = &PTR__initialize_classv_0010d5d0;
  pvVar4 = *(void **)(this + 0x400);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0x424) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x420) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x424) = 0;
        *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
      }
      else {
        lVar3 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x408) + lVar3) != 0) {
            bVar5 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0x408) + lVar3) = 0;
            pvVar4 = *(void **)((long)pvVar4 + lVar3 * 2);
            if ((bVar5) && (*(long *)((long)pvVar4 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar4,false);
            pvVar4 = *(void **)(this + 0x400);
            *(undefined8 *)((long)pvVar4 + lVar3 * 2) = 0;
          }
          lVar3 = lVar3 + 4;
        } while ((ulong)uVar2 << 2 != lVar3);
        *(undefined4 *)(this + 0x424) = 0;
        *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
        if (pvVar4 == (void *)0x0) goto LAB_0010c83a;
      }
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0x408),false);
  }
LAB_0010c83a:
  if (*(long *)(this + 0x3f0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x3f0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x3f0);
      *(undefined8 *)(this + 0x3f0) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<ScriptLanguage::ProfilingInfo>::_unref
            ((CowData<ScriptLanguage::ProfilingInfo> *)(this + 0x3e0));
  EngineProfiler::~EngineProfiler((EngineProfiler *)(this + 0x208));
  pvVar4 = *(void **)(this + 0x1e0);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0x204) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x200) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x204) = 0;
        *(undefined1 (*) [16])(this + 0x1f0) = (undefined1  [16])0x0;
      }
      else {
        lVar3 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1e8) + lVar3) != 0) {
            pvVar4 = *(void **)((long)pvVar4 + lVar3 * 2);
            *(int *)(*(long *)(this + 0x1e8) + lVar3) = 0;
            ServerInfo::~ServerInfo((ServerInfo *)((long)pvVar4 + 0x18));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar4,false);
            pvVar4 = *(void **)(this + 0x1e0);
            *(undefined8 *)((long)pvVar4 + lVar3 * 2) = 0;
          }
          lVar3 = lVar3 + 4;
        } while (lVar3 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x204) = 0;
        *(undefined1 (*) [16])(this + 0x1f0) = (undefined1  [16])0x0;
        if (pvVar4 == (void *)0x0) goto LAB_0010c933;
      }
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0x1e8),false);
  }
LAB_0010c933:
  EngineProfiler::~EngineProfiler((EngineProfiler *)this);
  operator_delete(this,0x450);
  return;
}



/* CowData<ScriptLanguage::ProfilingInfo>::_realloc(long) */

undefined8 __thiscall
CowData<ScriptLanguage::ProfilingInfo>::_realloc
          (CowData<ScriptLanguage::ProfilingInfo> *this,long param_1)

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



/* CowData<ScriptLanguage::ProfilingInfo*>::_realloc(long) */

undefined8 __thiscall
CowData<ScriptLanguage::ProfilingInfo*>::_realloc
          (CowData<ScriptLanguage::ProfilingInfo*> *this,long param_1)

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
/* void Ref<ServersDebugger::ServersProfiler>::instantiate<>() */

void __thiscall
Ref<ServersDebugger::ServersProfiler>::instantiate<>(Ref<ServersDebugger::ServersProfiler> *this)

{
  long *plVar1;
  CowData<ScriptLanguage::ProfilingInfo> *this_00;
  CowData<ScriptLanguage::ProfilingInfo*> *this_01;
  Object *pOVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  RefCounted *this_02;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  Object *pOVar15;
  long lVar16;
  RefCounted *pRVar17;
  undefined8 *puVar18;
  long lVar19;
  long in_FS_OFFSET;
  byte bVar20;
  long local_78;
  long local_60;
  int local_58 [6];
  long local_40;
  
  bVar20 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_02 = (RefCounted *)operator_new(0x450,"");
  pRVar17 = this_02;
  for (lVar10 = 0x8a; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined8 *)pRVar17 = 0;
    pRVar17 = pRVar17 + (ulong)bVar20 * -0x10 + 8;
  }
  RefCounted::RefCounted(this_02);
  *(code **)this_02 = ProjectSettings::get_singleton;
  *(undefined8 *)(this_02 + 0x180) = 0;
  StringName::StringName((StringName *)(this_02 + 0x188),"_toggle",false);
  this_02[400] = (RefCounted)0x0;
  *(undefined8 *)(this_02 + 0x198) = 0;
  StringName::StringName((StringName *)(this_02 + 0x1a0),"_add_frame",false);
  this_02[0x1a8] = (RefCounted)0x0;
  *(undefined8 *)(this_02 + 0x1b0) = 0;
  StringName::StringName((StringName *)(this_02 + 0x1b8),"_tick",false);
  uVar4 = _LC89;
  *(undefined ***)this_02 = &PTR__initialize_classv_0010d748;
  *(undefined8 *)(this_02 + 0x200) = uVar4;
  this_02[0x1c0] = (RefCounted)0x0;
  *(undefined8 *)(this_02 + 0x1c8) = 0;
  this_02[0x1d0] = (RefCounted)0x0;
  *(undefined1 (*) [16])(this_02 + 0x1e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_02 + 0x1f0) = (undefined1  [16])0x0;
  RefCounted::RefCounted(this_02 + 0x208);
  *(code **)(this_02 + 0x208) = ProjectSettings::get_singleton;
  *(undefined8 *)(this_02 + 0x388) = 0;
  StringName::StringName((StringName *)(this_02 + 0x390),"_toggle",false);
  this_02[0x398] = (RefCounted)0x0;
  *(undefined8 *)(this_02 + 0x3a0) = 0;
  StringName::StringName((StringName *)(this_02 + 0x3a8),"_add_frame",false);
  this_02[0x3b0] = (RefCounted)0x0;
  *(undefined8 *)(this_02 + 0x3b8) = 0;
  StringName::StringName((StringName *)(this_02 + 0x3c0),"_tick",false);
  *(undefined8 *)(this_02 + 0x420) = uVar4;
  this_02[0x3c8] = (RefCounted)0x0;
  *(undefined8 *)(this_02 + 0x3d0) = 0;
  *(undefined ***)(this_02 + 0x208) = &PTR__initialize_classv_0010d5d0;
  *(undefined8 *)(this_02 + 0x3e0) = 0;
  *(undefined8 *)(this_02 + 0x3f0) = 0;
  *(undefined4 *)(this_02 + 0x428) = 0x10;
  *(undefined1 (*) [16])(this_02 + 0x400) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_02 + 0x410) = (undefined1  [16])0x0;
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_60,"debug/settings/profiler/max_functions",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  uVar7 = Variant::operator_cast_to_long((Variant *)local_58);
  if ((long)uVar7 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
  }
  else {
    this_00 = (CowData<ScriptLanguage::ProfilingInfo> *)(this_02 + 0x3e0);
    if (*(long *)(this_02 + 0x3e0) == 0) {
      if (uVar7 != 0) {
        CowData<ScriptLanguage::ProfilingInfo>::_copy_on_write(this_00);
        uVar14 = 0;
        local_78 = 0;
LAB_0010cde2:
        if (uVar7 * 0x28 != 0) {
          uVar13 = uVar7 * 0x28 - 1;
          uVar13 = uVar13 | uVar13 >> 1;
          uVar13 = uVar13 | uVar13 >> 2;
          uVar13 = uVar13 | uVar13 >> 4;
          uVar13 = uVar13 | uVar13 >> 8;
          uVar13 = uVar13 | uVar13 >> 0x10;
          uVar13 = uVar13 | uVar13 >> 0x20;
          lVar10 = uVar13 + 1;
          if (lVar10 != 0) {
            if ((long)uVar7 <= (long)uVar14) {
              lVar11 = *(long *)(this_02 + 0x3e0);
              uVar14 = uVar7;
              while (lVar11 != 0) {
                if (*(ulong *)(lVar11 + -8) <= uVar14) {
LAB_0010d136:
                  if (lVar10 != local_78) {
                    iVar6 = CowData<ScriptLanguage::ProfilingInfo>::_realloc(this_00,lVar10);
                    if (iVar6 != 0) goto LAB_0010ceb0;
                    lVar11 = *(long *)(this_02 + 0x3e0);
                    if (lVar11 == 0) goto LAB_0010d16c;
                  }
                  *(ulong *)(lVar11 + -8) = uVar7;
                  goto LAB_0010ceb0;
                }
                while ((StringName::configured == '\0' || (*(long *)(lVar11 + uVar14 * 0x28) == 0)))
                {
                  uVar14 = uVar14 + 1;
                  if (*(ulong *)(lVar11 + -8) <= uVar14) goto LAB_0010d136;
                }
                StringName::unref();
                uVar14 = uVar14 + 1;
                lVar11 = *(long *)(this_02 + 0x3e0);
              }
              goto LAB_0010ce97;
            }
            if (lVar10 == local_78) {
LAB_0010d2f7:
              puVar12 = *(undefined8 **)(this_02 + 0x3e0);
              if (puVar12 == (undefined8 *)0x0) {
LAB_0010ce97:
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              lVar10 = puVar12[-1];
              if (lVar10 < (long)uVar7) goto LAB_0010d1db;
LAB_0010d220:
              puVar12[-1] = uVar7;
            }
            else if (uVar14 == 0) {
              puVar8 = (undefined8 *)Memory::alloc_static(uVar13 + 0x11,false);
              if (puVar8 != (undefined8 *)0x0) {
                puVar12 = puVar8 + 2;
                *puVar8 = 1;
                puVar8[1] = 0;
                *(undefined8 **)(this_02 + 0x3e0) = puVar12;
                lVar10 = 0;
LAB_0010d1db:
                puVar18 = puVar12 + uVar7 * 5;
                puVar8 = puVar12 + lVar10 * 5;
                puVar9 = puVar8;
                if (((int)puVar18 - (int)puVar8 & 8U) != 0) {
                  *puVar8 = 0;
                  puVar9 = puVar8 + 5;
                  if (puVar18 == puVar8 + 5) goto LAB_0010d220;
                }
                do {
                  *puVar9 = 0;
                  puVar8 = puVar9 + 10;
                  puVar9[5] = 0;
                  puVar9 = puVar8;
                } while (puVar18 != puVar8);
                goto LAB_0010d220;
              }
              _err_print_error("resize","./core/templates/cowdata.h",0x171,
                               "Parameter \"mem_new\" is null.",0,0);
            }
            else {
              iVar6 = CowData<ScriptLanguage::ProfilingInfo>::_realloc(this_00,lVar10);
              if (iVar6 == 0) goto LAB_0010d2f7;
            }
            goto LAB_0010ceb0;
          }
        }
        _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                         "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                         ,0,0);
      }
    }
    else {
      uVar14 = *(ulong *)(*(long *)(this_02 + 0x3e0) + -8);
      if (uVar7 != uVar14) {
        if (uVar7 != 0) {
          CowData<ScriptLanguage::ProfilingInfo>::_copy_on_write(this_00);
          local_78 = uVar14 * 0x28;
          if (local_78 != 0) {
            uVar13 = local_78 - 1U | local_78 - 1U >> 1;
            uVar13 = uVar13 | uVar13 >> 2;
            uVar13 = uVar13 | uVar13 >> 4;
            uVar13 = uVar13 | uVar13 >> 8;
            uVar13 = uVar13 | uVar13 >> 0x10;
            local_78 = (uVar13 | uVar13 >> 0x20) + 1;
          }
          goto LAB_0010cde2;
        }
        CowData<ScriptLanguage::ProfilingInfo>::_unref(this_00);
      }
    }
  }
LAB_0010ceb0:
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (*(long *)(this_02 + 0x3e0) == 0) {
    lVar10 = *(long *)(this_02 + 0x3f0);
    if ((lVar10 != 0) && (*(long *)(lVar10 + -8) != 0)) {
LAB_0010d26b:
      LOCK();
      plVar1 = (long *)(lVar10 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar10 = *(long *)(this_02 + 0x3f0);
        *(undefined8 *)(this_02 + 0x3f0) = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
      else {
        *(undefined8 *)(this_02 + 0x3f0) = 0;
      }
    }
  }
  else {
    lVar11 = *(long *)(*(long *)(this_02 + 0x3e0) + -8);
    this_01 = (CowData<ScriptLanguage::ProfilingInfo*> *)(this_02 + 0x3f0);
    if (lVar11 < 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    }
    else {
      lVar10 = *(long *)(this_02 + 0x3f0);
      if (lVar10 == 0) {
        if (lVar11 != 0) {
          lVar19 = 0;
          CowData<ScriptLanguage::ProfilingInfo*>::_copy_on_write(this_01);
          lVar10 = 0;
          goto LAB_0010cf7d;
        }
      }
      else {
        lVar19 = *(long *)(lVar10 + -8);
        if (lVar11 != lVar19) {
          if (lVar11 == 0) goto LAB_0010d26b;
          CowData<ScriptLanguage::ProfilingInfo*>::_copy_on_write(this_01);
          lVar10 = lVar19 * 8;
          if (lVar10 != 0) {
            uVar7 = lVar10 - 1U | lVar10 - 1U >> 1;
            uVar7 = uVar7 | uVar7 >> 2;
            uVar7 = uVar7 | uVar7 >> 4;
            uVar7 = uVar7 | uVar7 >> 8;
            uVar7 = uVar7 | uVar7 >> 0x10;
            lVar10 = (uVar7 | uVar7 >> 0x20) + 1;
          }
LAB_0010cf7d:
          if (lVar11 * 8 != 0) {
            uVar7 = lVar11 * 8 - 1;
            uVar7 = uVar7 | uVar7 >> 1;
            uVar7 = uVar7 | uVar7 >> 2;
            uVar7 = uVar7 | uVar7 >> 4;
            uVar7 = uVar7 | uVar7 >> 8;
            uVar7 = uVar7 | uVar7 >> 0x10;
            uVar7 = uVar7 | uVar7 >> 0x20;
            lVar16 = uVar7 + 1;
            if (lVar16 != 0) {
              if (lVar11 <= lVar19) {
                if ((lVar16 == lVar10) ||
                   (iVar6 = CowData<ScriptLanguage::ProfilingInfo*>::_realloc(this_01,lVar16),
                   iVar6 == 0)) {
                  if (*(long *)(this_02 + 0x3f0) == 0) goto LAB_0010d16c;
                  *(long *)(*(long *)(this_02 + 0x3f0) + -8) = lVar11;
                }
                goto LAB_0010d028;
              }
              if (lVar16 == lVar10) {
LAB_0010d330:
                puVar12 = *(undefined8 **)(this_02 + 0x3f0);
                if (puVar12 == (undefined8 *)0x0) {
LAB_0010d16c:
                  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
LAB_0010d01f:
                puVar12[-1] = lVar11;
              }
              else if (lVar19 == 0) {
                puVar8 = (undefined8 *)Memory::alloc_static(uVar7 + 0x11,false);
                if (puVar8 != (undefined8 *)0x0) {
                  puVar12 = puVar8 + 2;
                  *puVar8 = 1;
                  puVar8[1] = 0;
                  *(undefined8 **)(this_02 + 0x3f0) = puVar12;
                  goto LAB_0010d01f;
                }
                _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                 "Parameter \"mem_new\" is null.",0,0);
              }
              else {
                iVar6 = CowData<ScriptLanguage::ProfilingInfo*>::_realloc(this_01,lVar16);
                if (iVar6 == 0) goto LAB_0010d330;
              }
              goto LAB_0010d028;
            }
          }
          _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                           "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                           ,0,0);
        }
      }
    }
  }
LAB_0010d028:
  *(undefined1 (*) [16])(this_02 + 0x430) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_02 + 0x440) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_02);
  cVar5 = RefCounted::init_ref();
  if (cVar5 == '\0') {
    pOVar15 = *(Object **)this;
    if (pOVar15 != (Object *)0x0) {
      *(undefined8 *)this = 0;
      cVar5 = RefCounted::unreference();
      goto joined_r0x0010d0dd;
    }
  }
  else {
    pOVar2 = *(Object **)this;
    pOVar15 = pOVar2;
    if (this_02 != (RefCounted *)pOVar2) {
      *(RefCounted **)this = this_02;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *(undefined8 *)this = 0;
      }
      pOVar15 = (Object *)this_02;
      if (((pOVar2 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
         (cVar5 = predelete_handler(pOVar2), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
    cVar5 = RefCounted::unreference();
joined_r0x0010d0dd:
    if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar15), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar15,false);
        return;
      }
      goto LAB_0010d4e6;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010d4e6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* ServersDebugger::ServersProfiler::~ServersProfiler() */

void __thiscall ServersDebugger::ServersProfiler::~ServersProfiler(ServersProfiler *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ServersDebugger::ScriptsProfiler::~ScriptsProfiler() */

void __thiscall ServersDebugger::ScriptsProfiler::~ScriptsProfiler(ScriptsProfiler *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<RenderingServer::TextureInfo, DefaultAllocator>::~List() */

void __thiscall
List<RenderingServer::TextureInfo,DefaultAllocator>::~List
          (List<RenderingServer::TextureInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<ServersDebugger::ResourceInfo, DefaultAllocator>::~List() */

void __thiscall
List<ServersDebugger::ResourceInfo,DefaultAllocator>::~List
          (List<ServersDebugger::ResourceInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<ServersDebugger::ServerInfo, DefaultAllocator>::~List() */

void __thiscall
List<ServersDebugger::ServerInfo,DefaultAllocator>::~List
          (List<ServersDebugger::ServerInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ServersDebugger::VisualProfiler::~VisualProfiler() */

void __thiscall ServersDebugger::VisualProfiler::~VisualProfiler(VisualProfiler *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ServersDebugger::ServerInfo::~ServerInfo() */

void __thiscall ServersDebugger::ServerInfo::~ServerInfo(ServerInfo *this)

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



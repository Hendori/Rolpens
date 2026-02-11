
/* LocalDebugger::send_message(String const&, Array const&) */

void LocalDebugger::send_message(String *param_1,Array *param_2)

{
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



/* LocalDebugger::send_error(String const&, String const&, int, String const&, String const&, bool,
   ErrorHandlerType) */

void LocalDebugger::send_error(void)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  local_50 = 1;
  local_58 = &_LC3;
  String::parse_latin1((StrRange *)&local_68);
  operator+((char *)&local_70,(String *)"ERROR: \'");
  String::operator+((String *)&local_60,(String *)&local_70);
  Variant::Variant((Variant *)local_48,(String *)&local_60);
  stringify_variants((Variant *)&local_58);
  __print_line((String *)&local_58);
  puVar3 = local_58;
  if (local_58 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* LocalDebugger::to_breakpoint(String const&) */

String * LocalDebugger::to_breakpoint(String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  int in_EDX;
  bool bVar6;
  wchar32 wVar7;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  wVar7 = (wchar32)&local_78;
  String::get_slicec(wVar7,in_EDX);
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  iVar4 = String::rfind_char(wVar7,0x3a);
  if (iVar4 < 0) {
    Variant::Variant((Variant *)local_58,"Error: Invalid breakpoint format. Expected [source:line]")
    ;
    stringify_variants((Variant *)&local_60);
    __print_line((String *)&local_60);
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
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    String::left((int)&local_70);
    bVar6 = SUB81(&local_68,0);
    String::strip_edges(bVar6,SUB81(&local_70,0));
    ScriptDebugger::breakpoint_find_source((String *)&local_60);
    lVar3 = local_60;
    lVar2 = *(long *)param_1;
    if (lVar2 == local_60) {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
    }
    else {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)param_1;
          *(undefined8 *)param_1 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      *(long *)param_1 = local_60;
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
    String::substr((int)&local_68,wVar7);
    String::strip_edges(SUB81((String *)&local_60,0),bVar6);
    uVar5 = String::to_int();
    lVar2 = local_60;
    *(undefined4 *)(param_1 + 8) = uVar5;
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* LocalDebugger::LocalDebugger() */

void __thiscall LocalDebugger::LocalDebugger(LocalDebugger *this)

{
  long lVar1;
  StrRange *pSVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_60;
  code *local_58;
  undefined8 local_50;
  code *local_48;
  undefined8 *local_40;
  undefined1 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR_poll_events_00108a68;
  *(undefined8 *)(this + 0x68) = 2;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
  local_58 = (code *)0x1059a1;
  local_60 = 0;
  local_50 = 0xf;
  String::parse_latin1((StrRange *)&local_60);
  pSVar2 = (StrRange *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                         *)(this + 0x40),(String *)&local_60);
  local_58 = (code *)&_LC16;
  local_50 = 0;
  String::parse_latin1(pSVar2);
  lVar1 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar4 = (long *)(local_60 + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  puVar3 = (undefined8 *)operator_new(0x20,"");
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[3] = 0;
  plVar4 = (long *)OS::get_singleton();
  uVar5 = (**(code **)(*plVar4 + 0x208))(plVar4);
  puVar3[1] = uVar5;
  *(undefined8 **)(this + 0x30) = puVar3;
  local_58 = LocalDebugger()::{lambda(void*,bool,Array_const&)#1}::_FUN;
  local_48 = LocalDebugger()::{lambda(void*,double,double,double,double)#1}::_FUN;
  local_38 = 0;
  local_50 = 0;
  local_40 = puVar3;
  StringName::StringName((StringName *)&local_60,"scripts",false);
  EngineDebugger::register_profiler((StringName *)&local_60,(Profiler *)&local_58);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalDebugger::print_variables(List<String, DefaultAllocator> const&, List<Variant,
   DefaultAllocator> const&, String const&) */

void __thiscall
LocalDebugger::print_variables(LocalDebugger *this,List *param_1,List *param_2,String *param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  String *pSVar5;
  long lVar6;
  long in_FS_OFFSET;
  CowData<String> *local_b0;
  undefined *local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80 [2];
  long local_70;
  undefined *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = (undefined *)0x0;
  local_70 = 0;
  if ((*(long **)param_1 != (long *)0x0) &&
     (pSVar5 = (String *)**(long **)param_1, pSVar5 != (String *)0x0)) {
    do {
      Variant::operator_cast_to_String((Variant *)&local_68);
      puVar3 = local_68;
      puVar2 = local_a0;
      if (local_a0 == local_68) {
        if (local_a0 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_a0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = (undefined *)0x0;
            Memory::free_static(puVar3 + -0x10,false);
          }
        }
      }
      else {
        if (local_a0 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_a0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a0 = (undefined *)0x0;
            Memory::free_static(puVar2 + -0x10,false);
          }
        }
        local_a0 = local_68;
      }
      if ((*(long *)param_3 == 0) || (*(uint *)(*(long *)param_3 + -8) < 2)) {
        Variant::operator_cast_to_String((Variant *)&local_88);
        local_68 = &_LC23;
        local_98 = 0;
        local_60 = 2;
        String::parse_latin1((StrRange *)&local_98);
        String::operator+((String *)&local_90,pSVar5);
        String::operator+((String *)local_80,(String *)&local_90);
        Variant::Variant((Variant *)local_58,(String *)local_80);
        stringify_variants((Variant *)&local_68);
        __print_line((String *)&local_68);
        puVar2 = local_68;
        if (local_68 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = (undefined *)0x0;
            Memory::free_static(puVar2 + -0x10,false);
          }
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar4 = local_80[0];
        if (local_80[0] != 0) {
          LOCK();
          plVar1 = (long *)(local_80[0] + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_80[0] = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_90;
        if (local_90 != 0) {
          LOCK();
          plVar1 = (long *)(local_90 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_98;
        if (local_98 != 0) {
          LOCK();
          plVar1 = (long *)(local_98 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_98 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_88;
        if (local_88 != 0) {
          LOCK();
          plVar1 = (long *)(local_88 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_88 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
      }
      else {
        local_88 = 0;
        local_68 = &_LC24;
        local_60 = 1;
        String::parse_latin1((StrRange *)&local_88);
        String::operator+((String *)local_80,pSVar5);
        Variant::Variant((Variant *)local_58,(String *)local_80);
        stringify_variants((Variant *)&local_68);
        __print_line((String *)&local_68);
        puVar2 = local_68;
        if (local_68 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = (undefined *)0x0;
            Memory::free_static(puVar2 + -0x10,false);
          }
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar6 = local_80[0];
        lVar4 = local_88;
        if (local_80[0] != 0) {
          LOCK();
          plVar1 = (long *)(local_80[0] + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_80[0] = 0;
            Memory::free_static((void *)(lVar6 + -0x10),false);
            lVar4 = local_88;
          }
        }
        local_88 = lVar4;
        if (lVar4 != 0) {
          LOCK();
          plVar1 = (long *)(lVar4 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_88 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        String::split((char *)&local_68,SUB81(&local_a0,0),0x1059be);
        lVar4 = local_60;
        if (local_70 != local_60) {
          CowData<String>::_unref((CowData<String> *)&local_70);
          lVar4 = local_60;
          local_60 = 0;
          local_70 = lVar4;
        }
        CowData<String>::_unref((CowData<String> *)&local_60);
        for (lVar6 = 0; (lVar4 != 0 && (lVar6 < *(long *)(lVar4 + -8))); lVar6 = lVar6 + 1) {
          String::operator+((String *)local_80,param_3);
          Variant::Variant((Variant *)local_58,(String *)local_80);
          stringify_variants((Variant *)&local_68);
          __print_line((String *)&local_68);
          puVar2 = local_68;
          if (local_68 != (undefined *)0x0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = (undefined *)0x0;
              Memory::free_static(puVar2 + -0x10,false);
            }
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          lVar4 = local_80[0];
          if (local_80[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_80[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_80[0] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar4 = local_70;
        }
      }
      pSVar5 = *(String **)(pSVar5 + 8);
    } while (pSVar5 != (String *)0x0);
  }
  local_b0 = (CowData<String> *)&local_70;
  CowData<String>::_unref(local_b0);
  puVar2 = local_a0;
  if (local_a0 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = (undefined *)0x0;
      Memory::free_static(puVar2 + -0x10,false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalDebugger::debug(bool, bool) */

void LocalDebugger::debug(bool param_1,bool param_2)

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
  code *pcVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  char *pcVar15;
  long *plVar16;
  long *plVar17;
  CowData<char32_t> *this;
  long lVar18;
  long *plVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  wchar32 wVar25;
  undefined7 in_register_00000031;
  bool bVar26;
  wchar32 wVar27;
  wchar32 wVar28;
  undefined7 in_register_00000039;
  LocalDebugger *this_00;
  uint uVar29;
  ulong uVar30;
  long in_FS_OFFSET;
  bool bVar31;
  int local_138;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
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
  long local_78;
  long local_70;
  char *local_68;
  ulong local_60;
  int local_58 [6];
  long local_40;
  
  this_00 = (LocalDebugger *)CONCAT71(in_register_00000039,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
    ScriptDebugger::break_lang(this_00,CONCAT71(in_register_00000031,param_2));
  }
  plVar19 = *(long **)(in_FS_OFFSET + lRam0000000000100cf6);
  if ((*(long *)(this_00 + 0x38) != 0) && (1 < *(uint *)(*(long *)(this_00 + 0x38) + -8))) {
    (**(code **)(*plVar19 + 0x278))((String *)&local_70,plVar19,0);
    cVar11 = String::operator!=((String *)&local_70,(String *)(this_00 + 0x38));
    if (cVar11 != '\0') {
      ScriptDebugger::set_depth((int)EngineDebugger::script_debugger);
      ScriptDebugger::set_lines_left((int)EngineDebugger::script_debugger);
      lVar22 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar19 = (long *)(local_70 + -0x10);
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (*plVar19 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      goto LAB_001032c5;
    }
    local_60 = 0;
    local_68 = "";
    String::parse_latin1((StrRange *)(this_00 + 0x38));
    lVar22 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar16 = (long *)(local_70 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
  }
  local_78 = 0;
  local_68 = "\'";
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_78);
  (**(code **)(*plVar19 + 0x260))((String *)&local_88,plVar19);
  operator+((char *)&local_80,(String *)"\nDebugger Break, Reason: \'");
  String::operator+((String *)&local_70,(String *)&local_80);
  Variant::Variant((Variant *)local_58,(String *)&local_70);
  stringify_variants((Variant *)&local_68);
  __print_line((String *)&local_68);
  pcVar15 = local_68;
  if (local_68 != (undefined *)0x0) {
    LOCK();
    plVar16 = (long *)(local_68 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_68 = (undefined *)0x0;
      Memory::free_static(pcVar15 + -0x10,false);
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar22 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar16 = (long *)(local_70 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  lVar22 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar16 = (long *)(local_80 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  lVar22 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar16 = (long *)(local_88 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  lVar22 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar16 = (long *)(local_78 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  local_78 = 0;
  local_68 = "\'";
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_78);
  (**(code **)(*plVar19 + 0x278))((String *)&local_88,plVar19,0);
  local_68 = " in function \'";
  local_98 = 0;
  local_60 = 0xe;
  String::parse_latin1((StrRange *)&local_98);
  (**(code **)(*plVar19 + 0x270))(plVar19,0);
  itos((long)&local_a8);
  local_b8 = 0;
  local_68 = ":";
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_b8);
  (**(code **)(*plVar19 + 0x280))(&local_c8,plVar19,0);
  local_d8 = 0;
  local_68 = " - ";
  local_60 = 3;
  String::parse_latin1((StrRange *)&local_d8);
  itos((long)&local_e8);
  operator+((char *)&local_e0,(String *)"*Frame ");
  String::operator+((String *)&local_d0,(String *)&local_e0);
  String::operator+((String *)&local_c0,(String *)&local_d0);
  String::operator+((String *)&local_b0,(String *)&local_c0);
  String::operator+((String *)&local_a0,(String *)&local_b0);
  String::operator+((String *)&local_90,(String *)&local_a0);
  String::operator+((String *)&local_80,(String *)&local_90);
  String::operator+((String *)&local_70,(String *)&local_80);
  Variant::Variant((Variant *)local_58,(String *)&local_70);
  stringify_variants((Variant *)&local_68);
  __print_line((String *)&local_68);
  pcVar15 = local_68;
  if (local_68 != (char *)0x0) {
    LOCK();
    plVar16 = (long *)(local_68 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_68 = (char *)0x0;
      Memory::free_static(pcVar15 + -0x10,false);
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar22 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar16 = (long *)(local_70 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  lVar22 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar16 = (long *)(local_80 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  lVar22 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar16 = (long *)(local_90 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  lVar22 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar16 = (long *)(local_a0 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  lVar22 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar16 = (long *)(local_b0 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  lVar22 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar16 = (long *)(local_c0 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  lVar22 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar16 = (long *)(local_d0 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  lVar22 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar16 = (long *)(local_e0 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  lVar22 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar16 = (long *)(local_e8 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  lVar22 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar16 = (long *)(local_d8 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  lVar22 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar16 = (long *)(local_c8 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  lVar22 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar16 = (long *)(local_b8 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  lVar22 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar16 = (long *)(local_a8 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  lVar22 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar16 = (long *)(local_98 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  lVar22 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar16 = (long *)(local_88 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  lVar22 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar16 = (long *)(local_78 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  Variant::Variant((Variant *)local_58,"Enter \"help\" for assistance.");
  stringify_variants((Variant *)&local_68);
  __print_line((String *)&local_68);
  pcVar15 = local_68;
  if (local_68 != (char *)0x0) {
    LOCK();
    plVar16 = (long *)(local_68 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_68 = (char *)0x0;
      Memory::free_static(pcVar15 + -0x10,false);
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  iVar12 = (**(code **)(*plVar19 + 0x268))(plVar19);
  local_138 = 0;
LAB_00101330:
  pcVar15 = (char *)OS::get_singleton();
  OS::print(pcVar15,"debug> ");
  plVar16 = (long *)OS::get_singleton();
  (**(code **)(*plVar16 + 0x50))((Variant *)&local_68,plVar16,0x400);
  bVar26 = SUB81((String *)&local_110,0);
  String::strip_edges(bVar26,SUB81((Variant *)&local_68,0));
  pcVar15 = local_68;
  if (local_68 != (char *)0x0) {
    LOCK();
    plVar16 = (long *)(local_68 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_68 = (char *)0x0;
      Memory::free_static(pcVar15 + -0x10,false);
    }
  }
  local_70 = 0;
  local_68 = "variable_prefix";
  local_60 = 0xf;
  String::parse_latin1((StrRange *)&local_70);
  plVar17 = (long *)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                    ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                  *)(this_00 + 0x40),(String *)&local_70);
  lVar22 = local_70;
  local_108 = 0;
  plVar16 = (long *)(*plVar17 + -0x10);
  if (*plVar17 != 0) {
    do {
      lVar18 = *plVar16;
      if (lVar18 == 0) goto LAB_0010142b;
      LOCK();
      lVar21 = *plVar16;
      bVar31 = lVar18 == lVar21;
      if (bVar31) {
        *plVar16 = lVar18 + 1;
        lVar21 = lVar18;
      }
      UNLOCK();
    } while (!bVar31);
    if (lVar21 != -1) {
      local_108 = *plVar17;
    }
  }
LAB_0010142b:
  if (local_70 != 0) {
    LOCK();
    plVar16 = (long *)(local_70 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  if (((local_110 == 0) || (*(uint *)(local_110 + -8) < 2)) && (iVar13 = feof(_stdin), iVar13 == 0))
  {
    local_78 = 0;
    local_68 = "\'";
    local_60 = 1;
    String::parse_latin1((StrRange *)&local_78);
    (**(code **)(*plVar19 + 0x260))((String *)&local_88,plVar19);
    operator+((char *)&local_80,(String *)"\nDebugger Break, Reason: \'");
    String::operator+((String *)&local_70,(String *)&local_80);
    Variant::Variant((Variant *)local_58,(String *)&local_70);
    stringify_variants((Variant *)&local_68);
    __print_line((String *)&local_68);
    pcVar15 = local_68;
    if (local_68 != (undefined *)0x0) {
      LOCK();
      plVar16 = (long *)(local_68 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_68 = (undefined *)0x0;
        Memory::free_static(pcVar15 + -0x10,false);
      }
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar22 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar16 = (long *)(local_70 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    lVar22 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar16 = (long *)(local_80 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    lVar22 = local_88;
    if (local_88 != 0) {
      LOCK();
      plVar16 = (long *)(local_88 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    lVar22 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar16 = (long *)(local_78 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    local_78 = 0;
    local_68 = "\'";
    local_60 = 1;
    String::parse_latin1((StrRange *)&local_78);
    (**(code **)(*plVar19 + 0x278))((String *)&local_88,plVar19,local_138);
    local_68 = " in function \'";
    local_98 = 0;
    local_60 = 0xe;
    String::parse_latin1((StrRange *)&local_98);
    (**(code **)(*plVar19 + 0x270))(plVar19,local_138);
    itos((long)&local_a8);
    local_68 = ":";
    local_b8 = 0;
    local_60 = 1;
    String::parse_latin1((StrRange *)&local_b8);
    (**(code **)(*plVar19 + 0x280))(&local_c8,plVar19,local_138);
    local_68 = " - ";
    local_d8 = 0;
    local_60 = 3;
    String::parse_latin1((StrRange *)&local_d8);
    itos((long)&local_e8);
    operator+((char *)&local_e0,(String *)"*Frame ");
    String::operator+((String *)&local_d0,(String *)&local_e0);
    String::operator+((String *)&local_c0,(String *)&local_d0);
    String::operator+((String *)&local_b0,(String *)&local_c0);
    String::operator+((String *)&local_a0,(String *)&local_b0);
    String::operator+((String *)&local_90,(String *)&local_a0);
    String::operator+((String *)&local_80,(String *)&local_90);
    String::operator+((String *)&local_70,(String *)&local_80);
    Variant::Variant((Variant *)local_58,(String *)&local_70);
    stringify_variants((Variant *)&local_68);
    __print_line((String *)&local_68);
    pcVar15 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar16 = (long *)(local_68 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar15 + -0x10,false);
      }
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar22 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar16 = (long *)(local_70 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    lVar22 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar16 = (long *)(local_80 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    lVar22 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar16 = (long *)(local_90 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    lVar22 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar16 = (long *)(local_a0 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    lVar22 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      plVar16 = (long *)(local_b0 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_b0 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    lVar22 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar16 = (long *)(local_c0 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    lVar22 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar16 = (long *)(local_d0 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    lVar22 = local_e0;
    if (local_e0 != 0) {
      LOCK();
      plVar16 = (long *)(local_e0 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_e0 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    lVar22 = local_e8;
    if (local_e8 != 0) {
      LOCK();
      plVar16 = (long *)(local_e8 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_e8 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    lVar22 = local_d8;
    if (local_d8 != 0) {
      LOCK();
      plVar16 = (long *)(local_d8 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    lVar22 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar16 = (long *)(local_c8 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    lVar22 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      plVar16 = (long *)(local_b8 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_b8 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    lVar22 = local_a8;
    if (local_a8 != 0) {
      LOCK();
      plVar16 = (long *)(local_a8 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    lVar22 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar16 = (long *)(local_98 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    lVar22 = local_88;
    if (local_88 != 0) {
      LOCK();
      plVar16 = (long *)(local_88 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    lVar22 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar16 = (long *)(local_78 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    pcVar15 = "Enter \"help\" for assistance.";
LAB_00102aa7:
    Variant::Variant((Variant *)local_58,pcVar15);
    stringify_variants((Variant *)&local_68);
    __print_line((String *)&local_68);
    pcVar15 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar16 = (long *)(local_68 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar15 + -0x10,false);
      }
    }
LAB_00102af6:
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
LAB_00101b30:
    lVar22 = local_108;
    if (local_108 != 0) {
      LOCK();
      plVar16 = (long *)(local_108 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_108 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    lVar22 = local_110;
    if (local_110 != 0) {
      LOCK();
      plVar16 = (long *)(local_110 + -0x10);
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (*plVar16 == 0) {
        local_110 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    goto LAB_00101330;
  }
  cVar11 = String::operator==((String *)&local_110,"c");
  if ((cVar11 != '\0') ||
     (cVar11 = String::operator==((String *)&local_110,"continue"), cVar11 != '\0'))
  goto LAB_00103293;
  cVar11 = String::operator==((String *)&local_110,"bt");
  if ((cVar11 != '\0') ||
     (cVar11 = String::operator==((String *)&local_110,"breakpoint"), cVar11 != '\0')) {
    if (0 < iVar12) {
      uVar23 = 0;
      do {
        uVar30 = uVar23 & 0xffffffff;
        local_100 = 0;
        local_68 = &_LC27;
        if (local_138 == (int)uVar23) {
          local_68 = &_LC26;
        }
        local_60 = 1;
        String::parse_latin1((StrRange *)&local_100);
        local_68 = "\'";
        local_78 = 0;
        local_60 = 1;
        String::parse_latin1((StrRange *)&local_78);
        (**(code **)(*plVar19 + 0x278))((String *)&local_88,plVar19,uVar30);
        local_68 = " in function \'";
        local_98 = 0;
        local_60 = 0xe;
        String::parse_latin1((StrRange *)&local_98);
        (**(code **)(*plVar19 + 0x270))(plVar19,uVar30);
        itos((long)&local_a8);
        local_68 = ":";
        local_b8 = 0;
        local_60 = 1;
        String::parse_latin1((StrRange *)&local_b8);
        (**(code **)(*plVar19 + 0x280))(&local_c8,plVar19,uVar30);
        local_68 = " - ";
        local_d8 = 0;
        local_60 = 3;
        String::parse_latin1((StrRange *)&local_d8);
        itos((long)&local_e8);
        local_68 = "Frame ";
        local_f8 = 0;
        local_60 = 6;
        String::parse_latin1((StrRange *)&local_f8);
        String::operator+((String *)&local_f0,(String *)&local_100);
        String::operator+((String *)&local_e0,(String *)&local_f0);
        String::operator+((String *)&local_d0,(String *)&local_e0);
        String::operator+((String *)&local_c0,(String *)&local_d0);
        String::operator+((String *)&local_b0,(String *)&local_c0);
        String::operator+((String *)&local_a0,(String *)&local_b0);
        String::operator+((String *)&local_90,(String *)&local_a0);
        String::operator+((String *)&local_80,(String *)&local_90);
        String::operator+((String *)&local_70,(String *)&local_80);
        Variant::Variant((Variant *)local_58,(String *)&local_70);
        stringify_variants((Variant *)&local_68);
        __print_line((String *)&local_68);
        pcVar15 = local_68;
        if (local_68 != (char *)0x0) {
          LOCK();
          plVar16 = (long *)(local_68 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_68 = (char *)0x0;
            Memory::free_static(pcVar15 + -0x10,false);
          }
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar22 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar16 = (long *)(local_70 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        lVar22 = local_80;
        if (local_80 != 0) {
          LOCK();
          plVar16 = (long *)(local_80 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_80 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        lVar22 = local_90;
        if (local_90 != 0) {
          LOCK();
          plVar16 = (long *)(local_90 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_90 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        lVar22 = local_a0;
        if (local_a0 != 0) {
          LOCK();
          plVar16 = (long *)(local_a0 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_a0 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        lVar22 = local_b0;
        if (local_b0 != 0) {
          LOCK();
          plVar16 = (long *)(local_b0 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_b0 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        lVar22 = local_c0;
        if (local_c0 != 0) {
          LOCK();
          plVar16 = (long *)(local_c0 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_c0 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        lVar22 = local_d0;
        if (local_d0 != 0) {
          LOCK();
          plVar16 = (long *)(local_d0 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_d0 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        lVar22 = local_e0;
        if (local_e0 != 0) {
          LOCK();
          plVar16 = (long *)(local_e0 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_e0 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        lVar22 = local_f0;
        if (local_f0 != 0) {
          LOCK();
          plVar16 = (long *)(local_f0 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_f0 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        lVar22 = local_f8;
        if (local_f8 != 0) {
          LOCK();
          plVar16 = (long *)(local_f8 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_f8 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        lVar22 = local_e8;
        if (local_e8 != 0) {
          LOCK();
          plVar16 = (long *)(local_e8 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_e8 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        lVar22 = local_d8;
        if (local_d8 != 0) {
          LOCK();
          plVar16 = (long *)(local_d8 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_d8 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        lVar22 = local_c8;
        if (local_c8 != 0) {
          LOCK();
          plVar16 = (long *)(local_c8 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_c8 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        lVar22 = local_b8;
        if (local_b8 != 0) {
          LOCK();
          plVar16 = (long *)(local_b8 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_b8 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        lVar22 = local_a8;
        if (local_a8 != 0) {
          LOCK();
          plVar16 = (long *)(local_a8 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_a8 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        lVar22 = local_98;
        if (local_98 != 0) {
          LOCK();
          plVar16 = (long *)(local_98 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_98 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        lVar22 = local_88;
        if (local_88 != 0) {
          LOCK();
          plVar16 = (long *)(local_88 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_88 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        lVar22 = local_78;
        if (local_78 != 0) {
          LOCK();
          plVar16 = (long *)(local_78 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_78 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        lVar22 = local_100;
        if (local_100 != 0) {
          LOCK();
          plVar16 = (long *)(local_100 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_100 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 != (long)iVar12);
    }
    goto LAB_00101b30;
  }
  cVar11 = String::begins_with((char *)&local_110);
  wVar27 = (wchar32)(Variant *)&local_68;
  wVar25 = (wchar32)(String *)&local_110;
  if ((cVar11 != '\0') || (cVar11 = String::begins_with((char *)&local_110), cVar11 != '\0')) {
    iVar13 = String::get_slice_count((char *)&local_110);
    if (iVar13 == 1) {
      local_78 = 0;
      local_68 = "\'";
      local_60 = 1;
      String::parse_latin1((StrRange *)&local_78);
      (**(code **)(*plVar19 + 0x278))((String *)&local_88,plVar19,local_138);
      local_68 = " in function \'";
      local_98 = 0;
      local_60 = 0xe;
      String::parse_latin1((StrRange *)&local_98);
      (**(code **)(*plVar19 + 0x270))(plVar19,local_138);
      itos((long)&local_a8);
      local_68 = ":";
      local_b8 = 0;
      local_60 = 1;
      String::parse_latin1((StrRange *)&local_b8);
      (**(code **)(*plVar19 + 0x280))(&local_c8,plVar19,local_138);
      local_68 = " - ";
      local_d8 = 0;
      local_60 = 3;
      String::parse_latin1((StrRange *)&local_d8);
      itos((long)&local_e8);
      operator+((char *)&local_e0,(String *)"*Frame ");
      String::operator+((String *)&local_d0,(String *)&local_e0);
      String::operator+((String *)&local_c0,(String *)&local_d0);
      String::operator+((String *)&local_b0,(String *)&local_c0);
      String::operator+((String *)&local_a0,(String *)&local_b0);
      String::operator+((String *)&local_90,(String *)&local_a0);
      String::operator+((String *)&local_80,(String *)&local_90);
      String::operator+((String *)&local_70,(String *)&local_80);
      Variant::Variant((Variant *)local_58,(String *)&local_70);
      stringify_variants((Variant *)&local_68);
      __print_line((String *)&local_68);
      pcVar15 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar16 = (long *)(local_68 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar15 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar22 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar16 = (long *)(local_70 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar16 = (long *)(local_80 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar16 = (long *)(local_90 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar16 = (long *)(local_a0 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        plVar16 = (long *)(local_b0 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_b0 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar16 = (long *)(local_c0 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_d0;
      if (local_d0 != 0) {
        LOCK();
        plVar16 = (long *)(local_d0 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_e0;
      if (local_e0 != 0) {
        LOCK();
        plVar16 = (long *)(local_e0 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_e0 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_e8;
      if (local_e8 != 0) {
        LOCK();
        plVar16 = (long *)(local_e8 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_e8 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_d8;
      if (local_d8 != 0) {
        LOCK();
        plVar16 = (long *)(local_d8 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar16 = (long *)(local_c8 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_b8;
      if (local_b8 != 0) {
        LOCK();
        plVar16 = (long *)(local_b8 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_b8 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_a8;
      if (local_a8 != 0) {
        LOCK();
        plVar16 = (long *)(local_a8 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_a8 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar16 = (long *)(local_98 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar16 = (long *)(local_88 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar16 = (long *)(local_78 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
    }
    else {
      String::get_slicec(wVar27,wVar25);
      iVar13 = String::to_int();
      pcVar15 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar16 = (long *)(local_68 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar15 + -0x10,false);
        }
      }
      if ((iVar13 < 0) || (iVar12 <= iVar13)) {
        pcVar15 = "Error: Invalid frame.";
        goto LAB_00102aa7;
      }
      local_78 = 0;
      local_68 = "\'";
      local_60 = 1;
      String::parse_latin1((StrRange *)&local_78);
      (**(code **)(*plVar19 + 0x278))((String *)&local_88,plVar19,iVar13);
      local_68 = " in function \'";
      local_98 = 0;
      local_60 = 0xe;
      String::parse_latin1((StrRange *)&local_98);
      (**(code **)(*plVar19 + 0x270))(plVar19,iVar13);
      itos((long)&local_a8);
      local_68 = ":";
      local_b8 = 0;
      local_60 = 1;
      String::parse_latin1((StrRange *)&local_b8);
      (**(code **)(*plVar19 + 0x280))(&local_c8,plVar19,iVar13);
      local_68 = " - ";
      local_d8 = 0;
      local_60 = 3;
      String::parse_latin1((StrRange *)&local_d8);
      itos((long)&local_e8);
      operator+((char *)&local_e0,(String *)"*Frame ");
      String::operator+((String *)&local_d0,(String *)&local_e0);
      String::operator+((String *)&local_c0,(String *)&local_d0);
      String::operator+((String *)&local_b0,(String *)&local_c0);
      String::operator+((String *)&local_a0,(String *)&local_b0);
      String::operator+((String *)&local_90,(String *)&local_a0);
      String::operator+((String *)&local_80,(String *)&local_90);
      String::operator+((String *)&local_70,(String *)&local_80);
      Variant::Variant((Variant *)local_58,(String *)&local_70);
      stringify_variants((Variant *)&local_68);
      __print_line((String *)&local_68);
      pcVar15 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar16 = (long *)(local_68 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar15 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar22 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar16 = (long *)(local_70 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar16 = (long *)(local_80 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar16 = (long *)(local_90 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar16 = (long *)(local_a0 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        plVar16 = (long *)(local_b0 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_b0 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar16 = (long *)(local_c0 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_d0;
      if (local_d0 != 0) {
        LOCK();
        plVar16 = (long *)(local_d0 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_e0;
      if (local_e0 != 0) {
        LOCK();
        plVar16 = (long *)(local_e0 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_e0 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_e8;
      if (local_e8 != 0) {
        LOCK();
        plVar16 = (long *)(local_e8 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_e8 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_d8;
      if (local_d8 != 0) {
        LOCK();
        plVar16 = (long *)(local_d8 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar16 = (long *)(local_c8 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_b8;
      if (local_b8 != 0) {
        LOCK();
        plVar16 = (long *)(local_b8 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_b8 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_a8;
      if (local_a8 != 0) {
        LOCK();
        plVar16 = (long *)(local_a8 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_a8 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar16 = (long *)(local_98 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar16 = (long *)(local_88 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_78;
      local_138 = iVar13;
      if (local_78 != 0) {
        LOCK();
        plVar16 = (long *)(local_78 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
    }
    goto LAB_00101b30;
  }
  cVar11 = String::begins_with((char *)&local_110);
  if (cVar11 != '\0') {
    iVar13 = String::get_slice_count((char *)&local_110);
    if (iVar13 == 1) {
      for (puVar24 = *(undefined8 **)(this_00 + 0x58); puVar24 != (undefined8 *)0x0;
          puVar24 = (undefined8 *)*puVar24) {
        local_80 = 0;
        local_68 = "=";
        local_60 = 1;
        String::parse_latin1((StrRange *)&local_80);
        operator+((char *)&local_88,(String *)&_LC44);
        String::operator+((String *)&local_78,(String *)&local_88);
        String::operator+((String *)&local_70,(String *)&local_78);
        Variant::Variant((Variant *)local_58,(String *)&local_70);
        stringify_variants((Variant *)&local_68);
        __print_line((String *)&local_68);
        pcVar15 = local_68;
        if (local_68 != (char *)0x0) {
          LOCK();
          plVar16 = (long *)(local_68 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_68 = (char *)0x0;
            Memory::free_static(pcVar15 + -0x10,false);
          }
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar22 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar16 = (long *)(local_70 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        lVar22 = local_78;
        if (local_78 != 0) {
          LOCK();
          plVar16 = (long *)(local_78 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_78 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        lVar22 = local_88;
        if (local_88 != 0) {
          LOCK();
          plVar16 = (long *)(local_88 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_88 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
        lVar22 = local_80;
        if (local_80 != 0) {
          LOCK();
          plVar16 = (long *)(local_80 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_80 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
      }
    }
    else {
      wVar28 = (wchar32)(String *)&local_80;
      String::get_slicec(wVar28,wVar25);
      iVar13 = String::find_char(wVar28,0x3d);
      if (iVar13 < 0) {
        Variant::Variant((Variant *)local_58,"Error: Invalid set format. Use: set key=value");
        stringify_variants((Variant *)&local_68);
        __print_line((String *)&local_68);
        pcVar15 = local_68;
        if (local_68 != (char *)0x0) {
          LOCK();
          plVar16 = (long *)(local_68 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_68 = (char *)0x0;
            Memory::free_static(pcVar15 + -0x10,false);
          }
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        String::left((int)(StrRange *)&local_78);
        if ((*(long *)(this_00 + 0x48) != 0) && (*(int *)(this_00 + 0x6c) != 0)) {
          uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this_00 + 0x68) * 4);
          lVar22 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this_00 + 0x68) * 8);
          uVar14 = String::hash();
          uVar23 = CONCAT44(0,uVar1);
          lVar18 = *(long *)(this_00 + 0x50);
          uVar20 = 1;
          if (uVar14 != 0) {
            uVar20 = uVar14;
          }
          auVar2._8_8_ = 0;
          auVar2._0_8_ = (ulong)uVar20 * lVar22;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar23;
          lVar21 = SUB168(auVar2 * auVar6,8);
          uVar14 = *(uint *)(lVar18 + lVar21 * 4);
          if (uVar14 != 0) {
            uVar29 = 0;
            iVar13 = SUB164(auVar2 * auVar6,8);
            do {
              if (uVar20 == uVar14) {
                cVar11 = String::operator==((String *)
                                            (*(long *)(*(long *)(this_00 + 0x48) + lVar21 * 8) +
                                            0x10),(String *)&local_78);
                if (cVar11 != '\0') {
                  String::substr(wVar27,wVar28);
                  String::replace((char *)&local_70,(char *)&local_68);
                  pcVar15 = local_68;
                  if (local_68 != (char *)0x0) {
                    LOCK();
                    plVar16 = (long *)(local_68 + -0x10);
                    *plVar16 = *plVar16 + -1;
                    UNLOCK();
                    if (*plVar16 == 0) {
                      local_68 = (char *)0x0;
                      Memory::free_static(pcVar15 + -0x10,false);
                    }
                  }
                  this = (CowData<char32_t> *)
                         HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                         ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                       *)(this_00 + 0x40),(String *)&local_78);
                  if (*(long *)this != local_70) {
                    CowData<char32_t>::_ref(this,(CowData *)&local_70);
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
                  goto LAB_00103a66;
                }
                lVar18 = *(long *)(this_00 + 0x50);
              }
              uVar29 = uVar29 + 1;
              auVar3._8_8_ = 0;
              auVar3._0_8_ = (ulong)(iVar13 + 1) * lVar22;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = uVar23;
              lVar21 = SUB168(auVar3 * auVar7,8);
              uVar14 = *(uint *)(lVar18 + lVar21 * 4);
              iVar13 = SUB164(auVar3 * auVar7,8);
            } while ((uVar14 != 0) &&
                    (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar14 * lVar22, auVar8._8_8_ = 0,
                    auVar8._0_8_ = uVar23, auVar5._8_8_ = 0,
                    auVar5._0_8_ = (ulong)((uVar1 + iVar13) - SUB164(auVar4 * auVar8,8)) * lVar22,
                    auVar9._8_8_ = 0, auVar9._0_8_ = uVar23, uVar29 <= SUB164(auVar5 * auVar9,8)));
          }
        }
        operator+((char *)&local_70,(String *)"Error: Unknown option ");
        Variant::Variant((Variant *)local_58,(String *)&local_70);
        stringify_variants((Variant *)&local_68);
        __print_line((String *)&local_68);
        pcVar15 = local_68;
        if (local_68 != (char *)0x0) {
          LOCK();
          plVar16 = (long *)(local_68 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_68 = (char *)0x0;
            Memory::free_static(pcVar15 + -0x10,false);
          }
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar22 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar16 = (long *)(local_70 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
LAB_00103a66:
        lVar22 = local_78;
        if (local_78 != 0) {
          LOCK();
          plVar16 = (long *)(local_78 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_78 = 0;
            Memory::free_static((void *)(lVar22 + -0x10),false);
          }
        }
      }
      lVar22 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar16 = (long *)(local_80 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
    }
    goto LAB_00101b30;
  }
  cVar11 = String::operator==((String *)&local_110,"lv");
  if ((cVar11 != '\0') ||
     (cVar11 = String::operator==((String *)&local_110,"locals"), cVar11 != '\0')) {
    local_70 = 0;
    local_68 = (char *)0x0;
    (**(code **)(*plVar19 + 0x288))(plVar19,local_138,(String *)&local_70,(Variant *)&local_68);
LAB_00103362:
    print_variables(this_00,(List *)&local_70,(List *)&local_68,(String *)&local_108);
    List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator> *)&local_68);
    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_70);
    goto LAB_00101b30;
  }
  cVar11 = String::operator==((String *)&local_110,"gv");
  if ((cVar11 != '\0') ||
     (cVar11 = String::operator==((String *)&local_110,"globals"), cVar11 != '\0')) {
    local_70 = 0;
    local_68 = (char *)0x0;
    (**(code **)(*plVar19 + 0x2a0))(plVar19,(String *)&local_70,(Variant *)&local_68,0xffffffff);
    goto LAB_00103362;
  }
  cVar11 = String::operator==((String *)&local_110,"mv");
  if ((cVar11 != '\0') ||
     (cVar11 = String::operator==((String *)&local_110,"members"), cVar11 != '\0')) {
    local_70 = 0;
    local_68 = (char *)0x0;
    (**(code **)(*plVar19 + 0x290))(plVar19,local_138,(String *)&local_70,(Variant *)&local_68);
    goto LAB_00103362;
  }
  cVar11 = String::begins_with((char *)&local_110);
  if ((cVar11 != '\0') || (cVar11 = String::begins_with((char *)&local_110), cVar11 != '\0')) {
    iVar13 = String::find_char(wVar25,0x20);
    pcVar15 = "Usage: print <expression>";
    if (iVar13 < 0) {
LAB_00104197:
      Variant::Variant((Variant *)local_58,pcVar15);
      print_line((Variant *)local_58);
      goto LAB_00102af6;
    }
    String::split((char *)&local_68,bVar26,0x1059c2);
    if (local_60 == 0) {
      lVar22 = 0;
LAB_00103e74:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,1,lVar22,"p_index","size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    lVar22 = *(long *)(local_60 - 8);
    if (lVar22 < 2) goto LAB_00103e74;
    local_70 = 0;
    if (*(long *)(local_60 + 8) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(local_60 + 8));
    }
    CowData<String>::_unref((CowData<String> *)&local_60);
    (**(code **)(*plVar19 + 0x2a8))((Variant *)&local_68,plVar19,local_138,(String *)&local_70);
    Variant::Variant((Variant *)local_58,(String *)&local_68);
    print_line((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    goto LAB_00101b30;
  }
  cVar11 = String::operator==((String *)&local_110,"s");
  if ((((cVar11 == '\0') &&
       (cVar11 = String::operator==((String *)&local_110,"step"), cVar11 == '\0')) &&
      (cVar11 = String::operator==((String *)&local_110,"n"), cVar11 == '\0')) &&
     (cVar11 = String::operator==((String *)&local_110,"next"), cVar11 == '\0')) {
    cVar11 = String::operator==((String *)&local_110,"fin");
    if ((cVar11 != '\0') ||
       (cVar11 = String::operator==((String *)&local_110,"finish"), cVar11 != '\0')) {
      (**(code **)(*plVar19 + 0x278))((String *)&local_70,plVar19,0);
      for (iVar13 = 0; iVar13 < iVar12; iVar13 = iVar13 + 1) {
        (**(code **)(*plVar19 + 0x278))((Variant *)&local_68,plVar19,iVar13);
        pcVar15 = *(char **)(this_00 + 0x38);
        if (pcVar15 != local_68) {
          if (pcVar15 != (char *)0x0) {
            LOCK();
            plVar16 = (long *)(pcVar15 + -0x10);
            *plVar16 = *plVar16 + -1;
            UNLOCK();
            if (*plVar16 == 0) {
              lVar22 = *(long *)(this_00 + 0x38);
              *(undefined8 *)(this_00 + 0x38) = 0;
              Memory::free_static((void *)(lVar22 + -0x10),false);
            }
          }
          pcVar15 = local_68;
          local_68 = (char *)0x0;
          *(char **)(this_00 + 0x38) = pcVar15;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        cVar11 = String::operator!=((String *)(this_00 + 0x38),(String *)&local_70);
        if (cVar11 != '\0') {
          ScriptDebugger::set_depth((int)EngineDebugger::script_debugger);
          ScriptDebugger::set_lines_left((int)EngineDebugger::script_debugger);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
          goto LAB_001032c5;
        }
      }
      Variant::Variant((Variant *)local_58,"Error: Reached last frame.");
      print_line((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      String::parse_latin1((String *)(this_00 + 0x38),"");
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      goto LAB_00101b30;
    }
    cVar11 = String::begins_with((char *)&local_110);
    if ((cVar11 == '\0') && (cVar11 = String::begins_with((char *)&local_110), cVar11 == '\0')) {
      cVar11 = String::operator==((String *)&local_110,"q");
      if (((cVar11 == '\0') &&
          (cVar11 = String::operator==((String *)&local_110,"quit"), cVar11 == '\0')) &&
         (((local_110 != 0 && (1 < *(uint *)(local_110 + -8))) ||
          (iVar13 = feof(_stdin), iVar13 == 0)))) {
        cVar11 = String::begins_with((char *)&local_110);
        if (cVar11 == '\0') {
          cVar11 = String::operator==((String *)&local_110,"h");
          if (cVar11 == '\0') {
            cVar11 = String::operator==((String *)&local_110,"help");
            pcVar15 = "Error: Invalid command, enter \"help\" for assistance.";
            if (cVar11 == '\0') goto LAB_00104197;
          }
          Variant::Variant((Variant *)local_58,"Built-In Debugger command list:\n");
          print_line((Variant *)local_58);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,"\tc,continue\t\t Continue execution.");
          print_line((Variant *)local_58);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,"\tbt,backtrace\t\t Show stack trace (frames).");
          print_line((Variant *)local_58);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,"\tfr,frame <frame>:\t Change current frame.");
          print_line((Variant *)local_58);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,
                           "\tlv,locals\t\t Show local variables for current frame.");
          print_line((Variant *)local_58);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,
                           "\tmv,members\t\t Show member variables for \"this\" in frame.");
          print_line((Variant *)local_58);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,"\tgv,globals\t\t Show global variables.");
          print_line((Variant *)local_58);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,
                           "\tp,print <expr>\t\t Execute and print variable in expression.");
          print_line((Variant *)local_58);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,"\ts,step\t\t\t Step to next line.");
          print_line((Variant *)local_58);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,"\tn,next\t\t\t Next line.");
          print_line((Variant *)local_58);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,"\tfin,finish\t\t Step out of current frame.");
          print_line((Variant *)local_58);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,
                           "\tbr,break [source:line]\t List all breakpoints or place a breakpoint.")
          ;
          print_line((Variant *)local_58);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,
                           "\tdelete [source:line]:\t Delete one/all breakpoints.");
          print_line((Variant *)local_58);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,"\tset [key=value]:\t List all options, or set one.")
          ;
          print_line((Variant *)local_58);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          pcVar15 = "\tq,quit\t\t\t Quit application.";
          goto LAB_00104197;
        }
        iVar13 = String::get_slice_count((char *)&local_110);
        if (1 < iVar13) {
          to_breakpoint((String *)&local_68);
          local_98 = 0;
          if (((local_68 != (char *)0x0) &&
              (CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_68),
              uVar23 = local_60, lVar22 = EngineDebugger::script_debugger, local_98 != 0)) &&
             (1 < *(uint *)(local_98 + -8))) {
            StringName::StringName((StringName *)&local_70,(String *)&local_98,false);
            ScriptDebugger::remove_breakpoint((int)lVar22,(StringName *)(uVar23 & 0xffffffff));
            if ((StringName::configured != '\0') && (local_70 != 0)) {
              StringName::unref();
            }
            itos((long)&local_78);
            local_88 = 0;
            String::parse_latin1((String *)&local_88,":");
            pcVar15 = "Removed breakpoint at ";
            goto LAB_001046df;
          }
          goto LAB_00104646;
        }
        ScriptDebugger::clear_breakpoints();
        goto LAB_00101b30;
      }
      ScriptDebugger::clear_breakpoints();
      ScriptDebugger::set_depth((int)EngineDebugger::script_debugger);
      ScriptDebugger::set_lines_left((int)EngineDebugger::script_debugger);
      plVar19 = (long *)OS::get_singleton();
      plVar19 = (long *)(**(code **)(*plVar19 + 0x1d0))(plVar19);
      (**(code **)(*plVar19 + 0x48))((Variant *)&local_68,plVar19);
      cVar11 = String::operator==((String *)&local_68,"SceneTree");
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if (cVar11 != '\0') {
        StringName::StringName((StringName *)&local_68,"quit",false);
        Object::call<>((StringName *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
      }
      goto LAB_00103293;
    }
    iVar13 = String::get_slice_count((char *)&local_110);
    lVar22 = EngineDebugger::script_debugger;
    if (1 < iVar13) {
      to_breakpoint((String *)&local_68);
      local_98 = 0;
      if (((local_68 == (char *)0x0) ||
          (CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_68),
          uVar23 = local_60, lVar22 = EngineDebugger::script_debugger, local_98 == 0)) ||
         (*(uint *)(local_98 + -8) < 2)) {
LAB_00104646:
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        goto LAB_001042e1;
      }
      StringName::StringName((StringName *)&local_70,(String *)&local_98,false);
      ScriptDebugger::insert_breakpoint((int)lVar22,(StringName *)(uVar23 & 0xffffffff));
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
      itos((long)&local_78);
      local_88 = 0;
      String::parse_latin1((String *)&local_88,":");
      pcVar15 = "Added breakpoint at ";
LAB_001046df:
      operator+((char *)&local_90,(String *)pcVar15);
      String::operator+((String *)&local_80,(String *)&local_90);
      String::operator+((String *)&local_70,(String *)&local_80);
      Variant::Variant((Variant *)local_58,(String *)&local_70);
      print_line((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      goto LAB_00101b30;
    }
    if (*(int *)(EngineDebugger::script_debugger + 0x34) != 0) {
      itos((long)&local_70);
      operator+((char *)&local_68,(String *)"Breakpoint(s): ");
      Variant::Variant((Variant *)local_58,(String *)&local_68);
      print_line((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      for (puVar24 = *(undefined8 **)(lVar22 + 0x20); puVar24 != (undefined8 *)0x0;
          puVar24 = (undefined8 *)*puVar24) {
        itos((long)&local_78);
        local_88 = 0;
        String::parse_latin1((String *)&local_88,":");
        iVar13 = *(int *)((long)puVar24 + 0x3c);
        if (iVar13 == 0) {
          lVar18 = -1;
          lVar22 = 0;
          local_60._0_4_ = 0;
          iVar13 = (int)local_60;
        }
        else {
          lVar22 = puVar24[3];
          lVar18 = 0;
        }
        local_60 = CONCAT44(local_60._4_4_,iVar13);
        lVar22 = *(long *)(lVar22 + lVar18 * 8);
        if (lVar22 == 0) {
          local_98 = 0;
        }
        else {
          local_98 = 0;
          if (*(char **)(lVar22 + 8) == (char *)0x0) {
            if (*(long *)(lVar22 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)(lVar22 + 0x10));
            }
          }
          else {
            String::parse_latin1((String *)&local_98,*(char **)(lVar22 + 8));
          }
        }
        operator+((char *)&local_90,(String *)&_LC44);
        String::operator+((String *)&local_80,(String *)&local_90);
        String::operator+((String *)&local_70,(String *)&local_80);
        Variant::Variant((Variant *)local_58,(String *)&local_70);
        print_line((Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      }
      goto LAB_00101b30;
    }
    Variant::Variant((Variant *)local_58,"No Breakpoints.");
    print_line((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
LAB_001042e1:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
    goto LAB_00101330;
  }
  ScriptDebugger::set_depth((int)EngineDebugger::script_debugger);
  ScriptDebugger::set_lines_left((int)EngineDebugger::script_debugger);
LAB_00103293:
  lVar22 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar19 = (long *)(local_108 + -0x10);
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (*plVar19 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  lVar22 = local_110;
  if (local_110 != 0) {
    LOCK();
    plVar19 = (long *)(local_110 + -0x10);
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (*plVar19 == 0) {
      local_110 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
LAB_001032c5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalDebugger::~LocalDebugger() */

void __thiscall LocalDebugger::~LocalDebugger(LocalDebugger *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR_poll_events_00108a68;
  StringName::StringName((StringName *)&local_38,"scripts",false);
  EngineDebugger::unregister_profiler((StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != 0)) {
    StringName::unref();
  }
  pvVar5 = *(void **)(this + 0x30);
  if (pvVar5 != (void *)0x0) {
    CowData<ScriptLanguage::ProfilingInfo>::_unref
              ((CowData<ScriptLanguage::ProfilingInfo> *)((long)pvVar5 + 0x18));
    Memory::free_static(pvVar5,false);
  }
  pvVar5 = *(void **)(this + 0x48);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x6c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x6c) = 0;
        *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x50) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x50) + lVar4) = 0;
            if (*(long *)((long)pvVar5 + 0x18) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x18) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x18);
                *(undefined8 *)((long)pvVar5 + 0x18) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar5 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x10);
                *(undefined8 *)((long)pvVar5 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x48);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x6c) = 0;
        *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00104c48;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x50),false);
  }
LAB_00104c48:
  if (*(long *)(this + 0x38) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x38) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0x38);
      *(undefined8 *)(this + 0x38) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    EngineDebugger::~EngineDebugger((EngineDebugger *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalDebugger::~LocalDebugger() */

void __thiscall LocalDebugger::~LocalDebugger(LocalDebugger *this)

{
  ~LocalDebugger(this);
  operator_delete(this,0x70);
  return;
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



/* _FUN(void*, double, double, double, double) */

void LocalDebugger::LocalDebugger()::{lambda(void*,double,double,double,double)#1}::_FUN
               (void *param_1,double param_2,double param_3,double param_4,double param_5)

{
  *(double *)param_1 = param_2;
  ScriptsProfiler::_print_frame_data((ScriptsProfiler *)param_1,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _FUN(void*, bool, Array const&) */

void LocalDebugger::LocalDebugger()::{lambda(void*,bool,Array_const&)#1}::_FUN
               (void *param_1,bool param_2,Array *param_3)

{
  CowData<ScriptLanguage::ProfilingInfo> *this;
  code *pcVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2) {
    iVar2 = 0;
    if (0 < (int)ScriptServer::_language_count) {
      do {
        iVar8 = iVar2 + 1;
        plVar3 = (long *)ScriptServer::get_language(iVar2);
        (**(code **)(*plVar3 + 0x2f0))(plVar3);
        iVar2 = iVar8;
      } while (iVar8 < (int)ScriptServer::_language_count);
    }
    Variant::Variant((Variant *)local_48,"BEGIN PROFILING");
    stringify_variants((Variant *)&local_50);
    __print_line((String *)&local_50);
    lVar6 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar3 = (long *)(local_50 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    this = (CowData<ScriptLanguage::ProfilingInfo> *)((long)param_1 + 0x18);
    if (*(long *)((long)param_1 + 0x18) == 0) {
      CowData<ScriptLanguage::ProfilingInfo>::_copy_on_write(this);
LAB_00105128:
      puVar5 = (undefined8 *)Memory::alloc_static(0x200010,false);
      if (puVar5 == (undefined8 *)0x0) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return;
        }
        goto LAB_001051ac;
      }
      puVar7 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      lVar6 = 0;
      *(undefined8 **)((long)param_1 + 0x18) = puVar7;
LAB_001050c2:
      puVar5 = puVar7 + lVar6 * 5;
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + 5;
      } while (puVar5 != puVar7 + 0x28000);
LAB_001050e8:
      puVar7[-1] = 0x8000;
    }
    else {
      lVar6 = *(long *)(*(long *)((long)param_1 + 0x18) + -8);
      if (lVar6 != 0x8000) {
        CowData<ScriptLanguage::ProfilingInfo>::_copy_on_write(this);
        if (lVar6 * 0x28 == 0) {
          lVar9 = 0;
          if (lVar6 < 0x8000) {
LAB_00105105:
            if (lVar6 == 0) goto LAB_00105128;
            iVar2 = CowData<ScriptLanguage::ProfilingInfo>::_realloc(this,0x200000);
            if (iVar2 == 0) goto LAB_001050a9;
            goto LAB_00105030;
          }
        }
        else {
          uVar4 = lVar6 * 0x28 - 1;
          uVar4 = uVar4 | uVar4 >> 1;
          uVar4 = uVar4 | uVar4 >> 2;
          uVar4 = uVar4 | uVar4 >> 4;
          uVar4 = uVar4 | uVar4 >> 8;
          uVar4 = uVar4 | uVar4 >> 0x10;
          lVar9 = (uVar4 | uVar4 >> 0x20) + 1;
          if (lVar6 < 0x8000) {
            if (lVar9 != 0x200000) goto LAB_00105105;
LAB_001050a9:
            puVar7 = *(undefined8 **)((long)param_1 + 0x18);
            if (puVar7 == (undefined8 *)0x0) {
              FUN_00106ed0();
              return;
            }
            lVar6 = puVar7[-1];
            if (lVar6 < 0x8000) goto LAB_001050c2;
            goto LAB_001050e8;
          }
        }
        lVar6 = *(long *)((long)param_1 + 0x18);
        uVar4 = 0x8000;
        if (lVar6 == 0) {
code_r0x00106ed0:
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        for (; uVar4 < *(ulong *)(lVar6 + -8); uVar4 = uVar4 + 1) {
          while ((StringName::configured != '\0' && (*(long *)(lVar6 + uVar4 * 0x28) != 0))) {
            StringName::unref();
            lVar6 = *(long *)((long)param_1 + 0x18);
            uVar4 = uVar4 + 1;
            if (lVar6 == 0) goto code_r0x00106ed0;
            if (*(ulong *)(lVar6 + -8) <= uVar4) goto LAB_00104ff5;
          }
        }
LAB_00104ff5:
        if (lVar9 != 0x200000) {
          iVar2 = CowData<ScriptLanguage::ProfilingInfo>::_realloc(this,0x200000);
          if (iVar2 != 0) goto LAB_00105030;
          lVar6 = *(long *)((long)param_1 + 0x18);
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(undefined8 *)(lVar6 + -8) = 0x8000;
      }
    }
  }
  else {
    ScriptsProfiler::_print_frame_data((ScriptsProfiler *)param_1,true);
    if (0 < (int)ScriptServer::_language_count) {
      iVar2 = 0;
      do {
        iVar8 = iVar2 + 1;
        plVar3 = (long *)ScriptServer::get_language(iVar2);
        (**(code **)(*plVar3 + 0x2f8))(plVar3);
        iVar2 = iVar8;
      } while (iVar8 < (int)ScriptServer::_language_count);
    }
  }
LAB_00105030:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001051ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EngineDebugger::poll_events(bool) */

void EngineDebugger::poll_events(bool param_1)

{
  return;
}



/* SortArray<ScriptLanguage::ProfilingInfo, LocalDebugger::ScriptsProfiler::ProfileInfoSort,
   true>::adjust_heap(long, long, long, ScriptLanguage::ProfilingInfo,
   ScriptLanguage::ProfilingInfo*) const [clone .isra.0] */

void SortArray<ScriptLanguage::ProfilingInfo,LocalDebugger::ScriptsProfiler::ProfileInfoSort,true>::
     adjust_heap(long param_1,long param_2,long param_3,StringName *param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  StringName *pSVar4;
  StringName *pSVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  bool bVar10;
  long local_68;
  undefined8 local_60;
  ulong uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  lVar8 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = param_2;
  if (lVar8 < param_3) {
    do {
      pSVar4 = (StringName *)(param_5 + (lVar8 + -1 + param_1) * 0x28);
      pSVar5 = (StringName *)(param_5 + (param_1 + lVar8) * 0x28);
      lVar6 = lVar8 + -1;
      lVar7 = lVar8;
      if (*(ulong *)(pSVar5 + 0x10) <= *(ulong *)(pSVar4 + 0x10)) {
        lVar7 = lVar8 + 1;
        pSVar4 = pSVar5;
        lVar6 = lVar8;
      }
      lVar8 = lVar7 * 2;
      pSVar5 = (StringName *)(param_5 + (lVar9 + param_1) * 0x28);
      StringName::operator=(pSVar5,pSVar4);
      uVar1 = *(undefined8 *)(pSVar4 + 0x18);
      uVar2 = *(undefined8 *)(pSVar4 + 0x20);
      uVar3 = *(undefined8 *)(pSVar4 + 0x10);
      *(undefined8 *)(pSVar5 + 8) = *(undefined8 *)(pSVar4 + 8);
      *(undefined8 *)(pSVar5 + 0x10) = uVar3;
      *(undefined8 *)(pSVar5 + 0x18) = uVar1;
      *(undefined8 *)(pSVar5 + 0x20) = uVar2;
      lVar9 = lVar6;
    } while (lVar8 < param_3);
  }
  else {
    pSVar4 = (StringName *)(param_5 + (param_2 + param_1) * 0x28);
    lVar6 = param_2;
  }
  pSVar5 = pSVar4;
  if (param_3 == lVar8) {
    lVar6 = param_3 + -1;
    pSVar5 = (StringName *)(param_5 + (param_1 + lVar6) * 0x28);
    StringName::operator=(pSVar4,pSVar5);
    uVar1 = *(undefined8 *)(pSVar5 + 0x20);
    uVar2 = *(undefined8 *)(pSVar5 + 8);
    uVar3 = *(undefined8 *)(pSVar5 + 0x10);
    *(undefined8 *)(pSVar4 + 0x18) = *(undefined8 *)(pSVar5 + 0x18);
    *(undefined8 *)(pSVar4 + 0x20) = uVar1;
    *(undefined8 *)(pSVar4 + 8) = uVar2;
    *(undefined8 *)(pSVar4 + 0x10) = uVar3;
  }
  StringName::StringName((StringName *)&local_68,param_4);
  local_60 = *(undefined8 *)(param_4 + 8);
  uStack_58 = *(ulong *)(param_4 + 0x10);
  local_50 = *(undefined8 *)(param_4 + 0x18);
  uStack_48 = *(undefined8 *)(param_4 + 0x20);
  lVar8 = (lVar6 + -1) - (lVar6 + -1 >> 0x3f);
  while (param_2 < lVar6) {
    lVar9 = lVar8 >> 1;
    pSVar4 = (StringName *)(param_5 + (param_1 + lVar9) * 0x28);
    pSVar5 = (StringName *)(param_5 + (lVar6 + param_1) * 0x28);
    if (*(ulong *)(pSVar4 + 0x10) <= uStack_58) break;
    StringName::operator=(pSVar5,pSVar4);
    uVar1 = *(undefined8 *)(pSVar4 + 0x18);
    uVar2 = *(undefined8 *)(pSVar4 + 0x20);
    uVar3 = *(undefined8 *)(pSVar4 + 0x10);
    *(undefined8 *)(pSVar5 + 8) = *(undefined8 *)(pSVar4 + 8);
    *(undefined8 *)(pSVar5 + 0x10) = uVar3;
    lVar8 = (lVar9 + -1) - (lVar9 + -1 >> 0x3f);
    *(undefined8 *)(pSVar5 + 0x18) = uVar1;
    *(undefined8 *)(pSVar5 + 0x20) = uVar2;
    pSVar5 = pSVar4;
    lVar6 = lVar9;
  }
  StringName::operator=(pSVar5,(StringName *)&local_68);
  bVar10 = StringName::configured != '\0';
  *(undefined8 *)(pSVar5 + 8) = local_60;
  *(ulong *)(pSVar5 + 0x10) = uStack_58;
  *(undefined8 *)(pSVar5 + 0x18) = local_50;
  *(undefined8 *)(pSVar5 + 0x20) = uStack_48;
  if ((bVar10) && (local_68 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<ScriptLanguage::ProfilingInfo, LocalDebugger::ScriptsProfiler::ProfileInfoSort,
   true>::introsort(long, long, ScriptLanguage::ProfilingInfo*, long) const [clone .isra.0] */

void SortArray<ScriptLanguage::ProfilingInfo,LocalDebugger::ScriptsProfiler::ProfileInfoSort,true>::
     introsort(long param_1,long param_2,ProfilingInfo_conflict *param_3,long param_4)

{
  StringName *pSVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ProfilingInfo_conflict *pPVar11;
  ProfilingInfo_conflict *pPVar12;
  long lVar13;
  ProfilingInfo_conflict *pPVar14;
  ProfilingInfo_conflict *pPVar15;
  long in_FS_OFFSET;
  bool bVar16;
  long local_d0;
  StringName *local_a8;
  long local_98;
  long local_90;
  ulong uStack_88;
  long local_80;
  long lStack_78;
  long local_68;
  long local_60;
  ulong uStack_58;
  long local_50;
  long lStack_48;
  long local_40;
  
  lVar13 = param_2 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar13) {
    if (param_4 != 0) {
      pPVar15 = param_3 + param_1 * 0x28;
      local_d0 = param_2;
LAB_0010550d:
      param_4 = param_4 + -1;
      uVar9 = *(ulong *)(pPVar15 + 0x10);
      pPVar12 = param_3 + local_d0 * 0x28 + -0x28;
      pPVar14 = param_3 + ((lVar13 >> 1) + param_1) * 0x28;
      uVar2 = *(ulong *)(pPVar12 + 0x10);
      uVar3 = *(ulong *)(pPVar14 + 0x10);
      if (uVar3 < uVar9) {
        pPVar11 = pPVar14;
        if ((uVar3 <= uVar2) && (pPVar11 = pPVar12, uVar9 <= uVar2)) {
          pPVar11 = pPVar15;
        }
      }
      else {
        pPVar11 = pPVar15;
        if ((uVar9 <= uVar2) && (pPVar11 = pPVar12, uVar3 <= uVar2)) {
          pPVar11 = pPVar14;
        }
      }
      StringName::StringName((StringName *)&local_98,(StringName *)pPVar11);
      local_90 = *(long *)((StringName *)pPVar11 + 8);
      uVar9 = *(ulong *)((StringName *)pPVar11 + 0x10);
      local_80 = *(long *)((StringName *)pPVar11 + 0x18);
      lStack_78 = *(long *)((StringName *)pPVar11 + 0x20);
      lVar13 = local_d0;
      pPVar12 = pPVar15;
      param_2 = param_1;
      uStack_88 = uVar9;
      do {
        if (uVar9 < *(ulong *)(pPVar12 + 0x10)) {
          if (local_d0 + -1 == param_2) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                             "bad comparison function; sorting will be broken",0,0);
            uVar9 = uStack_88;
            goto LAB_001055c3;
          }
        }
        else {
LAB_001055c3:
          lVar13 = lVar13 + -1;
          pPVar14 = param_3 + lVar13 * 0x28;
          if (*(ulong *)(pPVar14 + 0x10) < uVar9) {
            pPVar11 = param_3 + lVar13 * 0x28 + -0x28;
            while (param_1 != lVar13) {
              lVar13 = lVar13 + -1;
              pPVar14 = pPVar11;
              if (uVar9 <= *(ulong *)(pPVar11 + 0x10)) goto LAB_0010562d;
              pPVar11 = pPVar11 + -0x28;
            }
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                             "bad comparison function; sorting will be broken",0,0);
          }
LAB_0010562d:
          if (lVar13 <= param_2) goto LAB_00105700;
          local_68 = *(long *)pPVar12;
          local_60 = *(long *)(pPVar12 + 8);
          uStack_58 = *(ulong *)(pPVar12 + 0x10);
          *(long *)pPVar12 = 0;
          local_50 = *(long *)(pPVar12 + 0x18);
          lStack_48 = *(long *)(pPVar12 + 0x20);
          if (*(long *)pPVar14 != 0) {
            StringName::unref();
            *(long *)pPVar12 = *(long *)pPVar14;
            *(long *)pPVar14 = 0;
          }
          lVar10 = *(long *)(pPVar14 + 0x20);
          lVar4 = *(long *)(pPVar14 + 8);
          lVar5 = *(long *)(pPVar14 + 0x10);
          *(long *)(pPVar12 + 0x18) = *(long *)(pPVar14 + 0x18);
          *(long *)(pPVar12 + 0x20) = lVar10;
          *(long *)(pPVar12 + 8) = lVar4;
          *(long *)(pPVar12 + 0x10) = lVar5;
          if (local_68 != 0) {
            StringName::unref();
            lVar10 = local_68;
            local_68 = 0;
            *(long *)pPVar14 = lVar10;
          }
          bVar16 = StringName::configured != '\0';
          *(long *)(pPVar14 + 8) = local_60;
          *(ulong *)(pPVar14 + 0x10) = uStack_58;
          *(long *)(pPVar14 + 0x18) = local_50;
          *(long *)(pPVar14 + 0x20) = lStack_48;
          uVar9 = uStack_88;
          if ((bVar16) && (local_68 != 0)) {
            StringName::unref();
            uVar9 = uStack_88;
          }
        }
        pPVar12 = pPVar12 + 0x28;
        param_2 = param_2 + 1;
      } while( true );
    }
LAB_001057ae:
    local_a8 = (StringName *)&local_98;
    lVar10 = lVar13 + -2 >> 1;
    pPVar15 = param_3 + (param_1 + lVar10) * 0x28;
    while( true ) {
      StringName::StringName((StringName *)&local_68,(StringName *)pPVar15);
      local_60 = *(long *)((StringName *)pPVar15 + 8);
      uStack_58 = *(ulong *)((StringName *)pPVar15 + 0x10);
      local_50 = *(long *)((StringName *)pPVar15 + 0x18);
      lStack_48 = *(long *)((StringName *)pPVar15 + 0x20);
      adjust_heap(param_1,lVar10,lVar13,(StringName *)&local_68,param_3);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      pPVar15 = (ProfilingInfo_conflict *)((StringName *)pPVar15 + -0x28);
      if (lVar10 == 0) break;
      lVar10 = lVar10 + -1;
    }
    pSVar1 = (StringName *)(param_3 + param_1 * 0x28);
    pPVar15 = param_3 + param_2 * 0x28 + -0x28;
    lVar13 = (param_2 + -1) - param_1;
    do {
      StringName::StringName(local_a8,(StringName *)pPVar15);
      local_80 = *(long *)((StringName *)pPVar15 + 0x18);
      lStack_78 = *(long *)((StringName *)pPVar15 + 0x20);
      local_90 = *(long *)((StringName *)pPVar15 + 8);
      uStack_88 = *(ulong *)((StringName *)pPVar15 + 0x10);
      StringName::operator=((StringName *)pPVar15,pSVar1);
      uVar6 = *(undefined8 *)(pSVar1 + 0x20);
      uVar7 = *(undefined8 *)(pSVar1 + 8);
      uVar8 = *(undefined8 *)(pSVar1 + 0x10);
      *(undefined8 *)((StringName *)pPVar15 + 0x18) = *(undefined8 *)(pSVar1 + 0x18);
      *(undefined8 *)((StringName *)pPVar15 + 0x20) = uVar6;
      *(undefined8 *)((StringName *)pPVar15 + 8) = uVar7;
      *(undefined8 *)((StringName *)pPVar15 + 0x10) = uVar8;
      StringName::StringName((StringName *)&local_68,local_a8);
      local_60 = local_90;
      uStack_58 = uStack_88;
      local_50 = local_80;
      lStack_48 = lStack_78;
      adjust_heap(param_1,0,lVar13,(StringName *)&local_68,param_3);
      if ((StringName::configured != '\0') &&
         (((local_68 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
          (local_98 != 0)))) {
        StringName::unref();
      }
      pPVar15 = (ProfilingInfo_conflict *)((StringName *)pPVar15 + -0x28);
      bVar16 = 1 < lVar13;
      lVar13 = lVar13 + -1;
    } while (bVar16);
  }
LAB_0010593e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00105700:
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar13 = param_2 - param_1;
  introsort(param_2,local_d0,param_3,param_4);
  if (lVar13 < 0x11) goto LAB_0010593e;
  local_d0 = param_2;
  if (param_4 == 0) goto LAB_001057ae;
  goto LAB_0010550d;
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



/* print_line(Variant const&) */

void print_line(Variant *param_1)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  stringify_variants((Variant *)&local_18);
  __print_line((String *)&local_18);
  lVar2 = local_18;
  if (local_18 != 0) {
    LOCK();
    plVar1 = (long *)(local_18 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_18 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::operator[](HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
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
  undefined8 uVar47;
  long lVar48;
  uint uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  undefined1 (*pauVar57) [16];
  long in_FS_OFFSET;
  undefined1 (*local_a0) [16];
  long local_70;
  undefined1 local_68 [16];
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00106954:
    local_70 = 0;
    uVar45 = (ulong)uVar55;
    uVar38 = uVar45 * 4;
    uVar51 = uVar45 * 8;
    uVar39 = Memory::alloc_static(uVar38,false);
    *(undefined8 *)(this + 0x10) = uVar39;
    pvVar41 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = pvVar41;
    if (uVar55 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar41 + uVar51)) && (pvVar41 < (void *)((long)pvVar2 + uVar38))
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
        memset(pvVar41,0,uVar51);
      }
LAB_00106834:
      iVar42 = *(int *)(this + 0x2c);
      if (iVar42 != 0) {
LAB_00106840:
        uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar50 = String::hash();
        uVar38 = CONCAT44(0,uVar36);
        lVar53 = *(long *)(this + 0x10);
        uVar37 = 1;
        if (uVar50 != 0) {
          uVar37 = uVar50;
        }
        uVar54 = 0;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = (ulong)uVar37 * lVar48;
        auVar31._8_8_ = 0;
        auVar31._0_8_ = uVar38;
        lVar43 = SUB168(auVar15 * auVar31,8);
        uVar50 = *(uint *)(lVar53 + lVar43 * 4);
        uVar49 = SUB164(auVar15 * auVar31,8);
        if (uVar50 != 0) {
          do {
            if (uVar50 == uVar37) {
              cVar35 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar43 * 8) + 0x10),
                                          param_1);
              if (cVar35 != '\0') {
                local_a0 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar49 * 8);
                if (*(long *)(local_a0[1] + 8) != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)(local_a0[1] + 8),(CowData *)&local_70);
                  local_a0 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar49 * 8);
                }
                goto LAB_00106700;
              }
              lVar53 = *(long *)(this + 0x10);
            }
            uVar54 = uVar54 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)(uVar49 + 1) * lVar48;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar38;
            lVar43 = SUB168(auVar16 * auVar32,8);
            uVar50 = *(uint *)(lVar53 + lVar43 * 4);
            uVar49 = SUB164(auVar16 * auVar32,8);
          } while ((uVar50 != 0) &&
                  (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar50 * lVar48, auVar33._8_8_ = 0,
                  auVar33._0_8_ = uVar38, auVar18._8_8_ = 0,
                  auVar18._0_8_ = (ulong)((uVar36 + uVar49) - SUB164(auVar17 * auVar33,8)) * lVar48,
                  auVar34._8_8_ = 0, auVar34._0_8_ = uVar38, uVar54 <= SUB164(auVar18 * auVar34,8)))
          ;
        }
        iVar42 = *(int *)(this + 0x2c);
      }
      uVar45 = (ulong)uVar55;
      goto LAB_00106300;
    }
    iVar42 = *(int *)(this + 0x2c);
    if (pvVar41 == (void *)0x0) goto LAB_00106300;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00106840;
LAB_00106326:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_a0 = (undefined1 (*) [16])0x0;
      goto LAB_00106700;
    }
    uVar38 = (ulong)(uVar55 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar36 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    if (uVar55 + 1 < 2) {
      uVar38 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar38 * 4);
    uVar45 = (ulong)uVar55;
    *(int *)(this + 0x28) = (int)uVar38;
    pvVar41 = *(void **)(this + 8);
    uVar38 = uVar45 * 4;
    uVar51 = uVar45 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar39 = Memory::alloc_static(uVar38,false);
    *(undefined8 *)(this + 0x10) = uVar39;
    __s_00 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar51)) && (__s_00 < (void *)((long)__s + uVar38))) {
        uVar38 = 0;
        do {
          *(undefined4 *)((long)__s + uVar38 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar38 * 8) = 0;
          uVar38 = uVar38 + 1;
        } while (uVar38 != uVar45);
      }
      else {
        memset(__s,0,uVar38);
        memset(__s_00,0,uVar51);
      }
    }
    if (uVar36 != 0) {
      uVar38 = 0;
      do {
        uVar55 = *(uint *)((long)pvVar2 + uVar38 * 4);
        if (uVar55 != 0) {
          lVar48 = *(long *)(this + 0x10);
          uVar49 = 0;
          uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar51 = CONCAT44(0,uVar37);
          lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (ulong)uVar55 * lVar53;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar51;
          lVar43 = SUB168(auVar3 * auVar19,8);
          puVar46 = (uint *)(lVar48 + lVar43 * 4);
          iVar42 = SUB164(auVar3 * auVar19,8);
          uVar50 = *puVar46;
          uVar39 = *(undefined8 *)((long)pvVar41 + uVar38 * 8);
          while (uVar50 != 0) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar50 * lVar53;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar51;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)((iVar42 + uVar37) - SUB164(auVar4 * auVar20,8)) * lVar53;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar51;
            uVar54 = SUB164(auVar5 * auVar21,8);
            uVar47 = uVar39;
            if (uVar54 < uVar49) {
              *puVar46 = uVar55;
              puVar40 = (undefined8 *)((long)__s_00 + lVar43 * 8);
              uVar47 = *puVar40;
              *puVar40 = uVar39;
              uVar55 = uVar50;
              uVar49 = uVar54;
            }
            uVar49 = uVar49 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)(iVar42 + 1) * lVar53;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar51;
            lVar43 = SUB168(auVar6 * auVar22,8);
            puVar46 = (uint *)(lVar48 + lVar43 * 4);
            iVar42 = SUB164(auVar6 * auVar22,8);
            uVar39 = uVar47;
            uVar50 = *puVar46;
          }
          *(undefined8 *)((long)__s_00 + lVar43 * 8) = uVar39;
          *puVar46 = uVar55;
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
      uVar38 = CONCAT44(0,uVar55);
      lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar37 = String::hash();
      lVar53 = *(long *)(this + 0x10);
      uVar36 = 1;
      if (uVar37 != 0) {
        uVar36 = uVar37;
      }
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar36 * lVar48;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar38;
      lVar43 = SUB168(auVar11 * auVar27,8);
      uVar37 = *(uint *)(lVar53 + lVar43 * 4);
      uVar50 = SUB164(auVar11 * auVar27,8);
      if (uVar37 == 0) {
        lVar52 = *(long *)(this + 8);
      }
      else {
        lVar52 = *(long *)(this + 8);
        uVar49 = 0;
        do {
          if (uVar36 == uVar37) {
            cVar35 = String::operator==((String *)(*(long *)(lVar52 + lVar43 * 8) + 0x10),param_1);
            if (cVar35 != '\0') {
              local_a0 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar50 * 8);
              goto LAB_00106700;
            }
            lVar53 = *(long *)(this + 0x10);
            lVar52 = *(long *)(this + 8);
          }
          uVar49 = uVar49 + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(uVar50 + 1) * lVar48;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar38;
          lVar43 = SUB168(auVar12 * auVar28,8);
          uVar37 = *(uint *)(lVar53 + lVar43 * 4);
          uVar50 = SUB164(auVar12 * auVar28,8);
        } while ((uVar37 != 0) &&
                (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar37 * lVar48, auVar29._8_8_ = 0,
                auVar29._0_8_ = uVar38, auVar14._8_8_ = 0,
                auVar14._0_8_ = (ulong)((uVar50 + uVar55) - SUB164(auVar13 * auVar29,8)) * lVar48,
                auVar30._8_8_ = 0, auVar30._0_8_ = uVar38, uVar49 <= SUB164(auVar14 * auVar30,8)));
      }
      local_70 = 0;
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar52 == 0) goto LAB_00106954;
      goto LAB_00106834;
    }
    local_70 = 0;
    uVar45 = (ulong)uVar55;
    iVar42 = 0;
LAB_00106300:
    if ((float)uVar45 * __LC11 < (float)(iVar42 + 1)) goto LAB_00106326;
  }
  local_58[0] = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(long *)param_1 == 0) {
    local_a0 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)local_a0[1] = 0;
    *local_a0 = (undefined1  [16])0x0;
LAB_00106a05:
    lVar48 = 0;
    *(undefined8 *)(local_a0[1] + 8) = 0;
    puVar40 = *(undefined8 **)(this + 0x20);
    if (puVar40 != (undefined8 *)0x0) goto LAB_001065ca;
LAB_00106a21:
    *(undefined1 (**) [16])(this + 0x18) = local_a0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar48 = local_58[0];
    uVar39 = local_68._0_8_;
    uVar47 = local_68._8_8_;
    local_58[1] = 0;
    local_a0 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)local_a0[1] = 0;
    *(undefined8 *)*local_a0 = uVar39;
    *(undefined8 *)(*local_a0 + 8) = uVar47;
    if (lVar48 == 0) goto LAB_00106a05;
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_a0 + 1),(CowData *)local_58);
    *(undefined8 *)(local_a0[1] + 8) = 0;
    LOCK();
    plVar1 = (long *)(lVar48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_58[0] + -0x10),false);
    }
    puVar40 = *(undefined8 **)(this + 0x20);
    lVar48 = local_70;
    if (puVar40 == (undefined8 *)0x0) goto LAB_00106a21;
LAB_001065ca:
    *puVar40 = local_a0;
    *(undefined8 **)(*local_a0 + 8) = puVar40;
  }
  *(undefined1 (**) [16])(this + 0x20) = local_a0;
  uVar36 = String::hash();
  lVar53 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar36 != 0) {
    uVar55 = uVar36;
  }
  uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar38 = CONCAT44(0,uVar36);
  lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (ulong)uVar55 * lVar43;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar38;
  lVar44 = SUB168(auVar7 * auVar23,8);
  lVar52 = *(long *)(this + 8);
  puVar46 = (uint *)(lVar53 + lVar44 * 4);
  iVar42 = SUB164(auVar7 * auVar23,8);
  uVar37 = *puVar46;
  pauVar57 = local_a0;
  if (uVar37 != 0) {
    uVar50 = 0;
    pauVar56 = local_a0;
    do {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar37 * lVar43;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar38;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)((uVar36 + iVar42) - SUB164(auVar8 * auVar24,8)) * lVar43;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar38;
      uVar49 = SUB164(auVar9 * auVar25,8);
      pauVar57 = pauVar56;
      if (uVar49 < uVar50) {
        *puVar46 = uVar55;
        puVar40 = (undefined8 *)(lVar52 + lVar44 * 8);
        pauVar57 = (undefined1 (*) [16])*puVar40;
        *puVar40 = pauVar56;
        uVar50 = uVar49;
        uVar55 = uVar37;
      }
      uVar50 = uVar50 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)(iVar42 + 1) * lVar43;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar38;
      lVar44 = SUB168(auVar10 * auVar26,8);
      puVar46 = (uint *)(lVar53 + lVar44 * 4);
      iVar42 = SUB164(auVar10 * auVar26,8);
      uVar37 = *puVar46;
      pauVar56 = pauVar57;
    } while (uVar37 != 0);
  }
  *(undefined1 (**) [16])(lVar52 + lVar44 * 8) = pauVar57;
  *puVar46 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  if (lVar48 != 0) {
    LOCK();
    plVar1 = (long *)(lVar48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_70 + -0x10),false);
    }
  }
LAB_00106700:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_a0[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* Variant Object::call<>(StringName const&) */

StringName * Object::call<>(StringName *param_1)

{
  undefined8 in_RDX;
  long *in_RSI;
  long in_FS_OFFSET;
  int local_68 [4];
  undefined8 local_58;
  undefined1 local_50 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  (**(code **)(*in_RSI + 0x68))((Variant *)local_38,in_RSI,in_RDX,0,0,local_68);
  if (local_68[0] == 0) {
    Variant::Variant((Variant *)param_1,(Variant *)local_38);
  }
  else {
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  }
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
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



/* CowData<ScriptLanguage::ProfilingInfo>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<ScriptLanguage::ProfilingInfo>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _FUN(void*, bool, Array const&) [clone .cold] */

void LocalDebugger::LocalDebugger()::{lambda(void*,bool,Array_const&)#1}::_FUN
               (void *param_1,bool param_2,Array *param_3)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void FUN_00106ed0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalDebugger::ScriptsProfiler::_print_frame_data(bool) */

void __thiscall
LocalDebugger::ScriptsProfiler::_print_frame_data(ScriptsProfiler *this,bool param_1)

{
  CowData<ScriptLanguage::ProfilingInfo> *this_00;
  StringName *pSVar1;
  code *pcVar2;
  StringName *this_01;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  StringName *pSVar17;
  StringName *pSVar18;
  StringName *pSVar19;
  long lVar20;
  StringName *pSVar21;
  long in_FS_OFFSET;
  bool bVar22;
  double dVar23;
  double dVar24;
  Variant *local_1b0;
  StrRange *local_1a8;
  double local_1a0;
  StringName *local_198;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_88;
  size_t local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar9 = (long *)OS::get_singleton();
  lVar10 = (**(code **)(*plVar9 + 0x208))(plVar9);
  if (((ulong)(lVar10 - *(long *)(this + 8)) < 1000000) && (!param_1)) goto LAB_00106ff1;
  plVar9 = (long *)OS::get_singleton();
  uVar11 = (**(code **)(*plVar9 + 0x208))(plVar9);
  *(undefined8 *)(this + 8) = uVar11;
  if (0 < (int)ScriptServer::_language_count) {
    iVar16 = 0;
    iVar15 = 0;
    lVar10 = 0;
    this_00 = (CowData<ScriptLanguage::ProfilingInfo> *)(this + 0x18);
    if (param_1) {
      while( true ) {
        plVar9 = (long *)ScriptServer::get_language(iVar16);
        pcVar2 = *(code **)(*plVar9 + 0x308);
        if (*(long *)(this + 0x18) == 0) break;
        lVar20 = *(long *)(*(long *)(this + 0x18) + -8);
        if ((lVar20 <= lVar10) || (lVar10 < 0)) goto LAB_00107163;
        iVar16 = iVar16 + 1;
        CowData<ScriptLanguage::ProfilingInfo>::_copy_on_write(this_00);
        iVar8 = (*pcVar2)(plVar9,*(long *)(this + 0x18) + (long)iVar15 * 0x28,(int)lVar20 - iVar15);
        iVar15 = iVar15 + iVar8;
        if ((int)ScriptServer::_language_count <= iVar16) goto LAB_001071a8;
        lVar10 = (long)iVar15;
      }
    }
    else {
      while( true ) {
        plVar9 = (long *)ScriptServer::get_language(iVar16);
        pcVar2 = *(code **)(*plVar9 + 0x310);
        if (*(long *)(this + 0x18) == 0) break;
        lVar20 = *(long *)(*(long *)(this + 0x18) + -8);
        if ((lVar10 < 0) || (lVar20 <= lVar10)) goto LAB_00107163;
        iVar16 = iVar16 + 1;
        CowData<ScriptLanguage::ProfilingInfo>::_copy_on_write(this_00);
        iVar8 = (*pcVar2)(plVar9,*(long *)(this + 0x18) + (long)iVar15 * 0x28,(int)lVar20 - iVar15);
        iVar15 = iVar15 + iVar8;
        if ((int)ScriptServer::_language_count <= iVar16) goto LAB_001071a8;
        lVar10 = (long)iVar15;
      }
    }
    lVar20 = 0;
LAB_00107163:
    _err_print_index_error
              ("operator[]","./core/templates/vector.h",0x38,lVar10,lVar20,"p_index",
               "((Vector<T> *)(this))->_cowdata.size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  CowData<ScriptLanguage::ProfilingInfo>::_copy_on_write
            ((CowData<ScriptLanguage::ProfilingInfo> *)(this + 0x18));
LAB_001087f1:
  local_1a0 = 0.0;
  iVar15 = 0;
LAB_0010750b:
  if (param_1) {
    rtos(local_1a0);
    operator+((char *)&local_b8,(String *)"ACCUMULATED: total: ");
    Variant::Variant((Variant *)local_58,(String *)&local_b8);
    stringify_variants((Variant *)&local_88);
    __print_line((String *)&local_88);
    pcVar3 = local_88;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar9 = (long *)(local_88 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar10 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      plVar9 = (long *)(local_b8 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_b8 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    lVar10 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar9 = (long *)(local_c0 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
  }
  else {
    dVar23 = *(double *)this;
    local_c0 = 0;
    local_88 = " %";
    local_80 = 2;
    String::parse_latin1((StrRange *)&local_c0);
    itos((long)&local_d0);
    local_88 = "/";
    local_e0 = 0;
    local_80 = 1;
    String::parse_latin1((StrRange *)&local_e0);
    rtos(local_1a0);
    local_88 = " script: ";
    local_100 = 0;
    local_80 = 9;
    String::parse_latin1((StrRange *)&local_100);
    rtos(dVar23);
    operator+((char *)&local_108,(String *)"FRAME: total: ");
    String::operator+((String *)&local_f8,(String *)&local_108);
    String::operator+((String *)&local_e8,(String *)&local_f8);
    String::operator+((String *)&local_d8,(String *)&local_e8);
    String::operator+((String *)&local_c8,(String *)&local_d8);
    String::operator+((String *)&local_b8,(String *)&local_c8);
    Variant::Variant((Variant *)local_58,(String *)&local_b8);
    stringify_variants((Variant *)&local_88);
    __print_line((String *)&local_88);
    pcVar3 = local_88;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar9 = (long *)(local_88 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar10 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      plVar9 = (long *)(local_b8 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_b8 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    lVar10 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar9 = (long *)(local_c8 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    lVar10 = local_d8;
    if (local_d8 != 0) {
      LOCK();
      plVar9 = (long *)(local_d8 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    lVar10 = local_e8;
    if (local_e8 != 0) {
      LOCK();
      plVar9 = (long *)(local_e8 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_e8 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    lVar10 = local_f8;
    if (local_f8 != 0) {
      LOCK();
      plVar9 = (long *)(local_f8 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_f8 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    lVar10 = local_108;
    if (local_108 != 0) {
      LOCK();
      plVar9 = (long *)(local_108 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_108 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    lVar10 = local_110;
    if (local_110 != 0) {
      LOCK();
      plVar9 = (long *)(local_110 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_110 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    lVar10 = local_100;
    if (local_100 != 0) {
      LOCK();
      plVar9 = (long *)(local_100 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_100 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    lVar10 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      plVar9 = (long *)(local_f0 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    lVar10 = local_e0;
    if (local_e0 != 0) {
      LOCK();
      plVar9 = (long *)(local_e0 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_e0 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    lVar10 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar9 = (long *)(local_d0 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    lVar10 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar9 = (long *)(local_c0 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
  }
  local_1a8 = (StrRange *)&local_c0;
  local_1b0 = (Variant *)&local_88;
  if (iVar15 != 0) {
    lVar20 = 0;
    do {
      lVar6 = local_140;
      lVar14 = *(long *)(this + 0x18);
      if (lVar14 == 0) {
LAB_00108562:
        lVar10 = 0;
        goto LAB_0010849e;
      }
      lVar10 = *(long *)(lVar14 + -8);
      if (lVar10 <= lVar20) goto LAB_0010849e;
      lVar10 = *(long *)(lVar14 + lVar20 * 0x28);
      if (lVar10 == 0) {
        local_c0 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar10 + 8);
        local_c0 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar9 = (long *)(*(long *)(lVar10 + 0x10) + -0x10);
          if (*(long *)(lVar10 + 0x10) != 0) {
            do {
              lVar14 = *plVar9;
              if (lVar14 == 0) goto LAB_00107a5d;
              LOCK();
              lVar12 = *plVar9;
              bVar22 = lVar14 == lVar12;
              if (bVar22) {
                *plVar9 = lVar14 + 1;
                lVar12 = lVar14;
              }
              UNLOCK();
            } while (!bVar22);
            if (lVar12 != -1) {
              local_c0 = *(long *)(lVar10 + 0x10);
            }
          }
        }
        else {
          local_80 = strlen(pcVar3);
          local_88 = pcVar3;
          String::parse_latin1(local_1a8);
        }
      }
LAB_00107a5d:
      local_d0 = 0;
      local_88 = ":";
      local_80 = 1;
      String::parse_latin1((StrRange *)&local_d0);
      itos((long)&local_d8);
      String::operator+((String *)&local_c8,(String *)&local_d8);
      String::operator+((String *)&local_b8,(String *)&local_c8);
      Variant::Variant((Variant *)local_58,(String *)&local_b8);
      stringify_variants(local_1b0);
      __print_line((String *)local_1b0);
      pcVar3 = local_88;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar9 = (long *)(local_88 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar10 = local_b8;
      if (local_b8 != 0) {
        LOCK();
        plVar9 = (long *)(local_b8 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_b8 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar9 = (long *)(local_c8 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_d8;
      if (local_d8 != 0) {
        LOCK();
        plVar9 = (long *)(local_d8 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_d0;
      if (local_d0 != 0) {
        LOCK();
        plVar9 = (long *)(local_d0 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar9 = (long *)(local_c0 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar14 = *(long *)(this + 0x18);
      if (lVar14 == 0) goto LAB_00108562;
      lVar10 = *(long *)(lVar14 + -8);
      if (lVar10 <= lVar20) goto LAB_0010849e;
      lVar14 = lVar14 + lVar20 * 0x28;
      dVar23 = (double)*(ulong *)(lVar14 + 0x10) / __LC103;
      dVar24 = (double)*(ulong *)(lVar14 + 0x18) / __LC103;
      itos((long)local_1a8);
      local_88 = " % tcalls: ";
      local_d0 = 0;
      local_80 = 0xb;
      String::parse_latin1((StrRange *)&local_d0);
      itos((long)&local_e0);
      local_88 = "/";
      local_f0 = 0;
      local_80 = 1;
      String::parse_latin1((StrRange *)&local_f0);
      rtos(dVar24);
      local_88 = " % \tself: ";
      local_110 = 0;
      local_80 = 10;
      String::parse_latin1((StrRange *)&local_110);
      itos((long)&local_120);
      local_88 = "/";
      local_130 = 0;
      local_80 = 1;
      String::parse_latin1((StrRange *)&local_130);
      rtos(dVar23);
      operator+((char *)&local_138,(String *)"\ttotal: ");
      String::operator+((String *)&local_128,(String *)&local_138);
      String::operator+((String *)&local_118,(String *)&local_128);
      String::operator+((String *)&local_108,(String *)&local_118);
      String::operator+((String *)&local_f8,(String *)&local_108);
      String::operator+((String *)&local_e8,(String *)&local_f8);
      String::operator+((String *)&local_d8,(String *)&local_e8);
      String::operator+((String *)&local_c8,(String *)&local_d8);
      String::operator+((String *)&local_b8,(String *)&local_c8);
      Variant::Variant((Variant *)local_58,(String *)&local_b8);
      stringify_variants(local_1b0);
      __print_line((String *)local_1b0);
      pcVar3 = local_88;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar9 = (long *)(local_88 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar10 = local_b8;
      if (local_b8 != 0) {
        LOCK();
        plVar9 = (long *)(local_b8 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_b8 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar9 = (long *)(local_c8 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_d8;
      if (local_d8 != 0) {
        LOCK();
        plVar9 = (long *)(local_d8 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_e8;
      if (local_e8 != 0) {
        LOCK();
        plVar9 = (long *)(local_e8 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_e8 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_f8;
      if (local_f8 != 0) {
        LOCK();
        plVar9 = (long *)(local_f8 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_f8 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_108;
      if (local_108 != 0) {
        LOCK();
        plVar9 = (long *)(local_108 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_108 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_118;
      if (local_118 != 0) {
        LOCK();
        plVar9 = (long *)(local_118 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_118 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_128;
      if (local_128 != 0) {
        LOCK();
        plVar9 = (long *)(local_128 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_128 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_138;
      if (local_138 != 0) {
        LOCK();
        plVar9 = (long *)(local_138 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_138 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      if (local_140 != 0) {
        LOCK();
        plVar9 = (long *)(local_140 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_140 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar10 = local_130;
      if (local_130 != 0) {
        LOCK();
        plVar9 = (long *)(local_130 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_130 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_120;
      if (local_120 != 0) {
        LOCK();
        plVar9 = (long *)(local_120 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_120 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_110;
      if (local_110 != 0) {
        LOCK();
        plVar9 = (long *)(local_110 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_110 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_100;
      if (local_100 != 0) {
        LOCK();
        plVar9 = (long *)(local_100 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_100 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_f0;
      if (local_f0 != 0) {
        LOCK();
        plVar9 = (long *)(local_f0 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_f0 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_e0;
      if (local_e0 != 0) {
        LOCK();
        plVar9 = (long *)(local_e0 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_e0 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_d0;
      if (local_d0 != 0) {
        LOCK();
        plVar9 = (long *)(local_d0 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar9 = (long *)(local_c0 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 != iVar15);
  }
LAB_00106ff1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_001071a8:
  lVar10 = (long)iVar15;
  CowData<ScriptLanguage::ProfilingInfo>::_copy_on_write(this_00);
  this_01 = *(StringName **)(this + 0x18);
  if (lVar10 == 0) goto LAB_001087f1;
  if (lVar10 == 1) {
    SortArray<ScriptLanguage::ProfilingInfo,LocalDebugger::ScriptsProfiler::ProfileInfoSort,true>::
    introsort(0,1,(ProfilingInfo_conflict *)this_01,0);
  }
  else {
    lVar14 = 0;
    lVar20 = lVar10;
    do {
      lVar20 = lVar20 >> 1;
      lVar14 = lVar14 + 1;
    } while (lVar20 != 1);
    SortArray<ScriptLanguage::ProfilingInfo,LocalDebugger::ScriptsProfiler::ProfileInfoSort,true>::
    introsort(0,lVar10,(ProfilingInfo_conflict *)this_01,lVar14 * 2);
    if (lVar10 < 0x11) {
      lVar20 = 1;
      pSVar17 = this_01 + 0x28;
      do {
        StringName::StringName((StringName *)&local_88,pSVar17);
        local_80 = *(size_t *)(pSVar17 + 8);
        uStack_78 = *(ulong *)(pSVar17 + 0x10);
        local_70 = *(undefined8 *)(pSVar17 + 0x18);
        uStack_68 = *(undefined8 *)(pSVar17 + 0x20);
        pSVar18 = pSVar17;
        if (*(ulong *)(this_01 + 0x10) < uStack_78) {
          do {
            pSVar19 = pSVar18 + -0x28;
            StringName::operator=(pSVar18,pSVar19);
            *(undefined8 *)(pSVar18 + 8) = *(undefined8 *)(pSVar18 + -0x20);
            *(undefined8 *)(pSVar18 + 0x10) = *(undefined8 *)(pSVar18 + -0x18);
            *(undefined8 *)(pSVar18 + 0x18) = *(undefined8 *)(pSVar18 + -0x10);
            *(undefined8 *)(pSVar18 + 0x20) = *(undefined8 *)(pSVar18 + -8);
            pSVar18 = pSVar19;
          } while (pSVar19 != this_01);
          StringName::operator=(this_01,(StringName *)&local_88);
          cVar7 = StringName::configured;
          *(undefined8 *)(this_01 + 0x18) = local_70;
          *(undefined8 *)(this_01 + 0x20) = uStack_68;
          *(size_t *)(this_01 + 8) = local_80;
          *(ulong *)(this_01 + 0x10) = uStack_78;
LAB_0010866f:
          if (cVar7 != '\0') {
LAB_00108673:
            if (local_88 != (char *)0x0) {
              StringName::unref();
            }
          }
        }
        else {
          StringName::StringName((StringName *)&local_b8,(StringName *)&local_88);
          local_b0 = local_80;
          uStack_a8 = uStack_78;
          local_a0 = local_70;
          uStack_98 = uStack_68;
          pSVar19 = pSVar17;
          lVar14 = lVar20;
          if (*(ulong *)(pSVar17 + -0x18) < uStack_78) {
            while (lVar14 = lVar14 + -1, lVar14 != 0) {
              StringName::operator=(pSVar18,pSVar19 + -0x28);
              uVar11 = *(undefined8 *)(pSVar19 + -0x10);
              uVar4 = *(undefined8 *)(pSVar19 + -8);
              uVar5 = *(undefined8 *)(pSVar19 + -0x18);
              *(undefined8 *)(pSVar18 + 8) = *(undefined8 *)(pSVar19 + -0x20);
              *(undefined8 *)(pSVar18 + 0x10) = uVar5;
              *(undefined8 *)(pSVar18 + 0x18) = uVar11;
              *(undefined8 *)(pSVar18 + 0x20) = uVar4;
              if (uStack_a8 <= *(ulong *)(pSVar18 + -0x40)) {
                pSVar18 = this_01 + lVar14 * 0x28;
                goto LAB_00108772;
              }
              pSVar18 = pSVar18 + -0x28;
              pSVar19 = pSVar19 + -0x28;
            }
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            pSVar18 = this_01 + 0x28;
          }
LAB_00108772:
          StringName::operator=(pSVar18,(StringName *)&local_b8);
          bVar22 = StringName::configured != '\0';
          *(undefined8 *)(pSVar18 + 0x18) = local_a0;
          *(undefined8 *)(pSVar18 + 0x20) = uStack_98;
          *(size_t *)(pSVar18 + 8) = local_b0;
          *(ulong *)(pSVar18 + 0x10) = uStack_a8;
          if (bVar22) {
            if (local_b8 != 0) {
              StringName::unref();
              cVar7 = StringName::configured;
              goto LAB_0010866f;
            }
            goto LAB_00108673;
          }
        }
        lVar20 = lVar20 + 1;
        pSVar17 = pSVar17 + 0x28;
      } while (lVar10 != lVar20);
    }
    else {
      pSVar17 = this_01 + 0x28;
      lVar20 = 0;
      pSVar18 = pSVar17;
      do {
        lVar14 = lVar20 + 1;
        StringName::StringName((StringName *)&local_88,pSVar18);
        local_80 = *(size_t *)(pSVar18 + 8);
        uStack_78 = *(ulong *)(pSVar18 + 0x10);
        local_70 = *(undefined8 *)(pSVar18 + 0x18);
        uStack_68 = *(undefined8 *)(pSVar18 + 0x20);
        pSVar19 = pSVar18;
        if (*(ulong *)(this_01 + 0x10) < uStack_78) {
          do {
            pSVar21 = pSVar19 + -0x28;
            StringName::operator=(pSVar19,pSVar21);
            *(undefined8 *)(pSVar19 + 8) = *(undefined8 *)(pSVar19 + -0x20);
            *(undefined8 *)(pSVar19 + 0x10) = *(undefined8 *)(pSVar19 + -0x18);
            *(undefined8 *)(pSVar19 + 0x18) = *(undefined8 *)(pSVar19 + -0x10);
            *(undefined8 *)(pSVar19 + 0x20) = *(undefined8 *)(pSVar19 + -8);
            pSVar19 = pSVar21;
          } while (this_01 != pSVar21);
          StringName::operator=(this_01,(StringName *)&local_88);
          cVar7 = StringName::configured;
          *(undefined8 *)(this_01 + 0x18) = local_70;
          *(undefined8 *)(this_01 + 0x20) = uStack_68;
          *(size_t *)(this_01 + 8) = local_80;
          *(ulong *)(this_01 + 0x10) = uStack_78;
LAB_001072ff:
          if (cVar7 != '\0') {
LAB_00107303:
            if (local_88 != (char *)0x0) {
              StringName::unref();
            }
          }
        }
        else {
          StringName::StringName((StringName *)&local_b8,(StringName *)&local_88);
          local_b0 = local_80;
          uStack_a8 = uStack_78;
          local_a0 = local_70;
          uStack_98 = uStack_68;
          pSVar21 = pSVar18;
          if (*(ulong *)(pSVar18 + -0x18) < uStack_78) {
            while (lVar20 != 0) {
              StringName::operator=(pSVar19,pSVar21 + -0x28);
              uVar11 = *(undefined8 *)(pSVar21 + -0x10);
              uVar4 = *(undefined8 *)(pSVar21 + -8);
              uVar5 = *(undefined8 *)(pSVar21 + -0x18);
              *(undefined8 *)(pSVar19 + 8) = *(undefined8 *)(pSVar21 + -0x20);
              *(undefined8 *)(pSVar19 + 0x10) = uVar5;
              *(undefined8 *)(pSVar19 + 0x18) = uVar11;
              *(undefined8 *)(pSVar19 + 0x20) = uVar4;
              if (uStack_a8 <= *(ulong *)(pSVar19 + -0x40)) {
                pSVar19 = this_01 + lVar20 * 0x28;
                goto LAB_0010841f;
              }
              lVar20 = lVar20 + -1;
              pSVar19 = pSVar19 + -0x28;
              pSVar21 = pSVar21 + -0x28;
            }
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            pSVar19 = pSVar17;
          }
LAB_0010841f:
          StringName::operator=(pSVar19,(StringName *)&local_b8);
          bVar22 = StringName::configured != '\0';
          *(undefined8 *)(pSVar19 + 0x18) = local_a0;
          *(undefined8 *)(pSVar19 + 0x20) = uStack_98;
          *(size_t *)(pSVar19 + 8) = local_b0;
          *(ulong *)(pSVar19 + 0x10) = uStack_a8;
          if (bVar22) {
            if (local_b8 != 0) {
              StringName::unref();
              cVar7 = StringName::configured;
              goto LAB_001072ff;
            }
            goto LAB_00107303;
          }
        }
        pSVar18 = pSVar18 + 0x28;
        lVar20 = lVar14;
      } while (lVar14 != 0xf);
      local_1a8 = (StrRange *)0x10;
      pSVar18 = this_01 + 0x280;
      local_198 = this_01 + 600;
      do {
        StringName::StringName((StringName *)&local_88,pSVar18);
        local_80 = *(size_t *)(pSVar18 + 8);
        uStack_78 = *(ulong *)(pSVar18 + 0x10);
        local_70 = *(undefined8 *)(pSVar18 + 0x18);
        uStack_68 = *(undefined8 *)(pSVar18 + 0x20);
        lVar20 = (long)local_1a8 + -1;
        pSVar21 = local_198;
        pSVar19 = pSVar18;
        if (*(ulong *)(pSVar18 + -0x18) < uStack_78) {
          do {
            StringName::operator=(pSVar19,pSVar21);
            uVar11 = *(undefined8 *)(pSVar21 + 0x18);
            uVar4 = *(undefined8 *)(pSVar21 + 0x20);
            pSVar1 = pSVar21 + 8;
            uVar5 = *(undefined8 *)(pSVar21 + 0x10);
            pSVar21 = pSVar21 + (long)(pSVar18 + (-0x50 - (long)local_198));
            lVar14 = lVar20 + -1;
            *(undefined8 *)(pSVar19 + 8) = *(undefined8 *)pSVar1;
            *(undefined8 *)(pSVar19 + 0x10) = uVar5;
            *(undefined8 *)(pSVar19 + 0x18) = uVar11;
            *(undefined8 *)(pSVar19 + 0x20) = uVar4;
            if (uStack_78 <= *(ulong *)(pSVar19 + -0x40)) {
              pSVar19 = this_01 + lVar20 * 0x28;
              goto LAB_00107438;
            }
            pSVar19 = pSVar19 + -0x28;
            lVar20 = lVar14;
          } while (lVar14 != 0);
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
          pSVar19 = pSVar17;
        }
LAB_00107438:
        StringName::operator=(pSVar19,(StringName *)&local_88);
        bVar22 = StringName::configured != '\0';
        *(undefined8 *)(pSVar19 + 0x18) = local_70;
        *(undefined8 *)(pSVar19 + 0x20) = uStack_68;
        *(size_t *)(pSVar19 + 8) = local_80;
        *(ulong *)(pSVar19 + 0x10) = uStack_78;
        if ((bVar22) && (local_88 != (char *)0x0)) {
          StringName::unref();
        }
        local_1a8 = (StrRange *)((long)local_1a8 + 1);
        pSVar18 = pSVar18 + 0x28;
        local_198 = local_198 + 0x28;
      } while ((StrRange *)lVar10 != local_1a8);
    }
  }
  lVar10 = *(long *)(this + 0x18);
  if (lVar10 == 0) {
    lVar20 = 0;
    lVar10 = 0;
LAB_0010849e:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar20,lVar10,"p_index","size()","",false,
               true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  plVar9 = (long *)(lVar10 + 0x18);
  lVar10 = *(long *)(lVar10 + -8);
  uVar13 = 0;
  lVar20 = 0;
  do {
    if (lVar10 <= lVar20) goto LAB_0010849e;
    lVar20 = lVar20 + 1;
    uVar13 = uVar13 + *plVar9;
    plVar9 = plVar9 + 5;
  } while ((int)lVar20 < iVar15);
  local_1a0 = (double)uVar13 / __LC103;
  goto LAB_0010750b;
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



/* WARNING: Control flow encountered bad instruction data */
/* List<Variant, DefaultAllocator>::~List() */

void __thiscall List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this)

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




/* GDScriptWarning::get_default_value(GDScriptWarning::Code) */

undefined4 GDScriptWarning::get_default_value(uint param_1)

{
  if (param_1 < 0x2f) {
    return *(undefined4 *)(default_warning_levels + (long)(int)param_1 * 4);
  }
  _err_print_index_error
            ("get_default_value","modules/gdscript/gdscript_warning.cpp",0xb5,(ulong)param_1,0x2f,
             "p_code","WARNING_MAX","Getting default value of invalid warning code.",false,false);
  return 0;
}



/* GDScriptWarning::get_name() const */

void GDScriptWarning::get_name(void)

{
  uint uVar1;
  long lVar2;
  uint *in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *in_RSI;
  if (uVar1 < 0x2f) {
    *(undefined8 *)in_RDI = 0;
    if ((&get_name_from_code(GDScriptWarning::Code)::names)[(int)uVar1] != (char *)0x0) {
      strlen((&get_name_from_code(GDScriptWarning::Code)::names)[(int)uVar1]);
    }
    String::parse_latin1(in_RDI);
  }
  else {
    _err_print_error("get_name_from_code","modules/gdscript/gdscript_warning.cpp",0xc2,
                     "Condition \"p_code < 0 || p_code >= WARNING_MAX\" is true. Returning: String()"
                     ,0,0);
    *(undefined8 *)in_RDI = 0;
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptWarning::get_name_from_code(GDScriptWarning::Code) */

GDScriptWarning * __thiscall GDScriptWarning::get_name_from_code(GDScriptWarning *this,uint param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 0x2f) {
    *(undefined8 *)this = 0;
    if ((&get_name_from_code(GDScriptWarning::Code)::names)[(int)param_2] != (char *)0x0) {
      strlen((&get_name_from_code(GDScriptWarning::Code)::names)[(int)param_2]);
    }
    String::parse_latin1((StrRange *)this);
  }
  else {
    _err_print_error("get_name_from_code","modules/gdscript/gdscript_warning.cpp",0xc2,
                     "Condition \"p_code < 0 || p_code >= WARNING_MAX\" is true. Returning: String()"
                     ,0,0);
    *(undefined8 *)this = 0;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptWarning::get_settings_path_from_code(GDScriptWarning::Code) */

GDScriptWarning * __thiscall
GDScriptWarning::get_settings_path_from_code(GDScriptWarning *this,uint param_2)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  size_t local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 0x2f) {
    local_40 = 0;
    pcVar2 = (&get_name_from_code(GDScriptWarning::Code)::names)[(int)param_2];
    local_30 = 0;
    if (pcVar2 != (char *)0x0) {
      local_30 = strlen(pcVar2);
    }
    local_38 = pcVar2;
    String::parse_latin1((StrRange *)&local_40);
  }
  else {
    _err_print_error("get_name_from_code","modules/gdscript/gdscript_warning.cpp",0xc2,
                     "Condition \"p_code < 0 || p_code >= WARNING_MAX\" is true. Returning: String()"
                     ,0,0);
    local_40 = 0;
  }
  String::to_lower();
  operator+((char *)this,(String *)"debug/gdscript/warnings/");
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptWarning::get_code_from_name(String const&) */

ulong GDScriptWarning::get_code_from_name(String *param_1)

{
  long *plVar1;
  char *__s;
  long lVar2;
  char cVar3;
  size_t sVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  uVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    local_60 = 0;
    __s = (&get_name_from_code(GDScriptWarning::Code)::names)[uVar5];
    sVar4 = 0;
    if (__s != (char *)0x0) {
      sVar4 = strlen(__s);
    }
    local_58 = __s;
    local_50 = sVar4;
    String::parse_latin1((StrRange *)&local_60);
    cVar3 = String::operator==((String *)&local_60,param_1);
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
    if (cVar3 != '\0') break;
    uVar5 = uVar5 + 1;
    if (uVar5 == 0x2f) {
      uVar5 = 0x2f;
LAB_001003ef:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  uVar5 = uVar5 & 0xffffffff;
  goto LAB_001003ef;
}



/* GDScriptWarning::get_property_info(GDScriptWarning::Code) */

GDScriptWarning * __thiscall
GDScriptWarning::get_property_info(GDScriptWarning *this,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "Ignore,Warn,Error";
  local_60 = 0;
  local_40 = 0x11;
  String::parse_latin1((StrRange *)&local_60);
  get_name_from_code((GDScriptWarning *)&local_48,param_2);
  String::to_lower();
  operator+((char *)&local_68,(String *)"debug/gdscript/warnings/");
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
  pcVar3 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
  *(undefined4 *)this = 2;
  *(undefined8 *)(this + 8) = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)&local_68);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 2;
  *(undefined8 *)(this + 0x20) = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_60);
  *(undefined4 *)(this + 0x28) = 6;
  if (*(int *)(this + 0x18) == 0x11) {
    StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
    if (*(char **)(this + 0x10) == local_48) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(this + 0x10) = local_48;
    }
  }
  else {
    StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_58);
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
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptWarning::get_message() const */

void GDScriptWarning::get_message(void)

{
  long *plVar1;
  CowData *pCVar2;
  String *this;
  code *pcVar3;
  char *pcVar4;
  char cVar5;
  long lVar6;
  undefined4 *in_RSI;
  StrRange *in_RDI;
  long lVar7;
  long in_FS_OFFSET;
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
  switch(*in_RSI) {
  case 0:
    pCVar2 = *(CowData **)(in_RSI + 8);
    if ((pCVar2 == (CowData *)0x0) || (*(long *)(pCVar2 + -8) < 1)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x2a,
                       "Condition \"symbols.size() < 1\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
    }
    else {
      local_60 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,pCVar2);
      local_58 = "The variable \"%s\" was used before being assigned a value.";
      local_68 = 0;
      local_50 = 0x39;
      String::parse_latin1((StrRange *)&local_68);
      vformat<String>();
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    break;
  case 1:
    pCVar2 = *(CowData **)(in_RSI + 8);
    if ((pCVar2 == (CowData *)0x0) || (*(long *)(pCVar2 + -8) < 1)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x2d,
                       "Condition \"symbols.size() < 1\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
    }
    else {
      local_60 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,pCVar2);
      local_58 = 
      "Using assignment with operation but the variable \"%s\" was not previously assigned a value."
      ;
      local_68 = 0;
      local_50 = 0x5a;
      String::parse_latin1((StrRange *)&local_68);
      vformat<String>();
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    break;
  case 2:
    pCVar2 = *(CowData **)(in_RSI + 8);
    if ((pCVar2 == (CowData *)0x0) || (*(long *)(pCVar2 + -8) < 1)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x30,
                       "Condition \"symbols.size() < 1\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
      break;
    }
    local_60 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,pCVar2);
    pCVar2 = *(CowData **)(in_RSI + 8);
    if (pCVar2 == (CowData *)0x0) {
LAB_00102d60:
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(pCVar2 + -8);
      if (0 < lVar7) {
        local_68 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar2);
        local_58 = 
        "The local variable \"%s\" is declared but never used in the block. If this is intended, prefix it with an underscore: \"_%s\"."
        ;
        local_70 = 0;
        local_50 = 0x7a;
        String::parse_latin1((StrRange *)&local_70);
        vformat<String,String>();
        lVar7 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar7 + -0x10),false);
          }
        }
        lVar7 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar7 + -0x10),false);
          }
        }
        lVar7 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar7 + -0x10),false);
          }
        }
        break;
      }
    }
    goto LAB_00102d63;
  case 3:
    pCVar2 = *(CowData **)(in_RSI + 8);
    if ((pCVar2 == (CowData *)0x0) || (*(long *)(pCVar2 + -8) < 1)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x33,
                       "Condition \"symbols.size() < 1\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
      break;
    }
    local_60 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,pCVar2);
    pCVar2 = *(CowData **)(in_RSI + 8);
    if (pCVar2 == (CowData *)0x0) goto LAB_00102d60;
    lVar7 = *(long *)(pCVar2 + -8);
    if (0 < lVar7) {
      local_68 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar2);
      local_58 = 
      "The local constant \"%s\" is declared but never used in the block. If this is intended, prefix it with an underscore: \"_%s\"."
      ;
      local_70 = 0;
      local_50 = 0x7a;
      String::parse_latin1((StrRange *)&local_70);
      vformat<String,String>();
      lVar7 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      break;
    }
    goto LAB_00102d63;
  case 4:
    pCVar2 = *(CowData **)(in_RSI + 8);
    if ((pCVar2 == (CowData *)0x0) || (*(long *)(pCVar2 + -8) < 1)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x36,
                       "Condition \"symbols.size() < 1\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
    }
    else {
      local_60 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,pCVar2);
      local_58 = "The class variable \"%s\" is declared but never used in the class.";
      local_68 = 0;
      local_50 = 0x40;
      String::parse_latin1((StrRange *)&local_68);
      vformat<String>();
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    break;
  case 5:
    lVar7 = *(long *)(in_RSI + 8);
    if ((lVar7 == 0) || (*(long *)(lVar7 + -8) < 2)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x39,
                       "Condition \"symbols.size() < 2\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
      break;
    }
    local_60 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar7 + 8));
    pCVar2 = *(CowData **)(in_RSI + 8);
    if (pCVar2 == (CowData *)0x0) goto LAB_00102d60;
    lVar7 = *(long *)(pCVar2 + -8);
    if (0 < lVar7) {
      local_68 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar2);
      lVar6 = *(long *)(in_RSI + 8);
      if (lVar6 != 0) {
        lVar7 = *(long *)(lVar6 + -8);
        if (1 < lVar7) {
          local_70 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar6 + 8));
          local_58 = 
          "The parameter \"%s\" is never used in the function \"%s()\". If this is intended, prefix it with an underscore: \"_%s\"."
          ;
          local_78 = 0;
          local_50 = 0x72;
          String::parse_latin1((StrRange *)&local_78);
          vformat<String,String,String>();
          lVar7 = local_78;
          if (local_78 != 0) {
            LOCK();
            plVar1 = (long *)(local_78 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_78 = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          lVar7 = local_70;
          if (local_70 != 0) {
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          lVar7 = local_68;
          if (local_68 != 0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          lVar7 = local_60;
          if (local_60 != 0) {
            LOCK();
            plVar1 = (long *)(local_60 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_60 = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          break;
        }
        goto LAB_00102eb3;
      }
      goto LAB_00102eb0;
    }
    goto LAB_00102d63;
  case 6:
    pCVar2 = *(CowData **)(in_RSI + 8);
    if ((pCVar2 == (CowData *)0x0) || (*(long *)(pCVar2 + -8) < 1)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x3c,
                       "Condition \"symbols.size() < 1\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
    }
    else {
      local_60 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,pCVar2);
      local_58 = "The signal \"%s\" is declared but never explicitly used in the class.";
      local_68 = 0;
      local_50 = 0x43;
      String::parse_latin1((StrRange *)&local_68);
      vformat<String>();
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    break;
  case 7:
    lVar7 = *(long *)(in_RSI + 8);
    if ((lVar7 == 0) || (*(long *)(lVar7 + -8) < 4)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x3f,
                       "Condition \"symbols.size() < 4\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
      break;
    }
    local_60 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar7 + 0x18));
    lVar6 = *(long *)(in_RSI + 8);
    if (lVar6 == 0) goto LAB_00103247;
    lVar7 = *(long *)(lVar6 + -8);
    if (lVar7 < 3) goto LAB_0010324a;
    local_68 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar6 + 0x10));
    lVar6 = *(long *)(in_RSI + 8);
    if (lVar6 == 0) goto LAB_00102eb0;
    lVar7 = *(long *)(lVar6 + -8);
    if (lVar7 < 2) goto LAB_00102eb3;
    local_70 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar6 + 8));
    pCVar2 = *(CowData **)(in_RSI + 8);
    if (pCVar2 == (CowData *)0x0) goto LAB_00102d60;
    lVar7 = *(long *)(pCVar2 + -8);
    if (0 < lVar7) {
      local_78 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,pCVar2);
      local_58 = 
      "The local %s \"%s\" is shadowing an already-declared %s at line %s in the current class.";
      local_80 = 0;
      local_50 = 0x56;
      String::parse_latin1((StrRange *)&local_80);
      vformat<String,String,String,String>();
      lVar7 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      break;
    }
    goto LAB_00102d63;
  case 8:
    lVar7 = *(long *)(in_RSI + 8);
    if ((lVar7 == 0) || (*(long *)(lVar7 + -8) < 4)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x42,
                       "Condition \"symbols.size() < 4\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
      break;
    }
    local_60 = 0;
    if (*(long *)(lVar7 + -8) == 4) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar7 + 0x18));
      lVar6 = *(long *)(in_RSI + 8);
      if (lVar6 == 0) {
LAB_00103247:
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(lVar6 + -8);
        if (2 < lVar7) {
          local_68 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar6 + 0x10));
          lVar6 = *(long *)(in_RSI + 8);
          if (lVar6 == 0) goto LAB_00102eb0;
          lVar7 = *(long *)(lVar6 + -8);
          if (lVar7 < 2) goto LAB_00102eb3;
          local_70 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar6 + 8));
          pCVar2 = *(CowData **)(in_RSI + 8);
          if (pCVar2 == (CowData *)0x0) goto LAB_00102d60;
          lVar7 = *(long *)(pCVar2 + -8);
          if (0 < lVar7) {
            local_78 = 0;
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,pCVar2);
            local_58 = 
            "The local %s \"%s\" is shadowing an already-declared %s in the base class \"%s\".";
            local_80 = 0;
            local_50 = 0x4d;
            String::parse_latin1((StrRange *)&local_80);
            vformat<String,String,String,String>();
            lVar7 = local_80;
            if (local_80 != 0) {
              LOCK();
              plVar1 = (long *)(local_80 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_80 = 0;
                Memory::free_static((void *)(lVar7 + -0x10),false);
              }
            }
            lVar7 = local_78;
            if (local_78 != 0) {
              LOCK();
              plVar1 = (long *)(local_78 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_78 = 0;
                Memory::free_static((void *)(lVar7 + -0x10),false);
              }
            }
            lVar7 = local_70;
            if (local_70 != 0) {
              LOCK();
              plVar1 = (long *)(local_70 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_70 = 0;
                Memory::free_static((void *)(lVar7 + -0x10),false);
              }
            }
            lVar7 = local_68;
            if (local_68 != 0) {
              LOCK();
              plVar1 = (long *)(local_68 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_68 = 0;
                Memory::free_static((void *)(lVar7 + -0x10),false);
              }
            }
            lVar7 = local_60;
            if (local_60 != 0) {
              LOCK();
              plVar1 = (long *)(local_60 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar7 + -0x10),false);
              }
            }
            break;
          }
          goto LAB_00102d63;
        }
      }
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar7 + 0x20));
      lVar6 = *(long *)(in_RSI + 8);
      if (lVar6 == 0) goto LAB_0010326f;
      lVar7 = *(long *)(lVar6 + -8);
      if (lVar7 < 4) goto LAB_00103272;
      local_68 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar6 + 0x18));
      lVar6 = *(long *)(in_RSI + 8);
      if (lVar6 == 0) goto LAB_00103247;
      lVar7 = *(long *)(lVar6 + -8);
      if (2 < lVar7) {
        local_70 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar6 + 0x10));
        lVar6 = *(long *)(in_RSI + 8);
        if (lVar6 != 0) {
          lVar7 = *(long *)(lVar6 + -8);
          if (lVar7 < 2) goto LAB_00102eb3;
          local_78 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)(lVar6 + 8));
          pCVar2 = *(CowData **)(in_RSI + 8);
          if (pCVar2 == (CowData *)0x0) goto LAB_00102d60;
          lVar7 = *(long *)(pCVar2 + -8);
          if (0 < lVar7) {
            local_80 = 0;
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,pCVar2);
            local_88 = 0;
            local_58 = 
            "The local %s \"%s\" is shadowing an already-declared %s at line %s in the base class \"%s\"."
            ;
            local_50 = 0x58;
            String::parse_latin1((StrRange *)&local_88);
            vformat<String,String,String,String,String>();
            lVar7 = local_88;
            if (local_88 != 0) {
              LOCK();
              plVar1 = (long *)(local_88 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_88 = 0;
                Memory::free_static((void *)(lVar7 + -0x10),false);
              }
            }
            lVar7 = local_80;
            if (local_80 != 0) {
              LOCK();
              plVar1 = (long *)(local_80 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_80 = 0;
                Memory::free_static((void *)(lVar7 + -0x10),false);
              }
            }
            lVar7 = local_78;
            if (local_78 != 0) {
              LOCK();
              plVar1 = (long *)(local_78 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_78 = 0;
                Memory::free_static((void *)(lVar7 + -0x10),false);
              }
            }
            lVar7 = local_70;
            if (local_70 != 0) {
              LOCK();
              plVar1 = (long *)(local_70 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_70 = 0;
                Memory::free_static((void *)(lVar7 + -0x10),false);
              }
            }
            lVar7 = local_68;
            if (local_68 != 0) {
              LOCK();
              plVar1 = (long *)(local_68 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_68 = 0;
                Memory::free_static((void *)(lVar7 + -0x10),false);
              }
            }
            lVar7 = local_60;
            if (local_60 != 0) {
              LOCK();
              plVar1 = (long *)(local_60 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar7 + -0x10),false);
              }
            }
            break;
          }
          goto LAB_00102d63;
        }
        goto LAB_00102eb0;
      }
    }
LAB_0010324a:
    lVar6 = 2;
    goto LAB_00102d80;
  case 9:
    lVar7 = *(long *)(in_RSI + 8);
    if ((lVar7 == 0) || (*(long *)(lVar7 + -8) < 3)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x48,
                       "Condition \"symbols.size() < 3\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
      break;
    }
    local_60 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar7 + 0x10));
    lVar6 = *(long *)(in_RSI + 8);
    if (lVar6 == 0) goto LAB_00102eb0;
    lVar7 = *(long *)(lVar6 + -8);
    if (lVar7 < 2) goto LAB_00102eb3;
    local_68 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar6 + 8));
    pCVar2 = *(CowData **)(in_RSI + 8);
    if (pCVar2 == (CowData *)0x0) goto LAB_00102d60;
    lVar7 = *(long *)(pCVar2 + -8);
    if (0 < lVar7) {
      local_70 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,pCVar2);
      local_58 = "The %s \"%s\" has the same name as a %s.";
      local_78 = 0;
      local_50 = 0x26;
      String::parse_latin1((StrRange *)&local_78);
      vformat<String,String,String>();
      lVar7 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      break;
    }
    goto LAB_00102d63;
  case 10:
    pCVar2 = *(CowData **)(in_RSI + 8);
    if ((pCVar2 == (CowData *)0x0) || (*(long *)(pCVar2 + -8) < 1)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x4b,
                       "Condition \"symbols.size() < 1\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
    }
    else {
      local_60 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,pCVar2);
      local_58 = "Unreachable code (statement after return) in function \"%s()\".";
      local_68 = 0;
      local_50 = 0x3d;
      String::parse_latin1((StrRange *)&local_68);
      vformat<String>();
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    break;
  case 0xb:
    *(undefined8 *)in_RDI = 0;
    local_58 = "Unreachable pattern (pattern after wildcard or bind).";
    local_50 = 0x35;
    String::parse_latin1(in_RDI);
    break;
  case 0xc:
    *(undefined8 *)in_RDI = 0;
    local_58 = "Standalone expression (the line may have no effect).";
    local_50 = 0x34;
    String::parse_latin1(in_RDI);
    break;
  case 0xd:
    *(undefined8 *)in_RDI = 0;
    local_58 = "Standalone ternary operator: the return value is being discarded.";
    local_50 = 0x41;
    String::parse_latin1(in_RDI);
    break;
  case 0xe:
    *(undefined8 *)in_RDI = 0;
    local_58 = "Values of the ternary operator are not mutually compatible.";
    local_50 = 0x3b;
    String::parse_latin1(in_RDI);
    break;
  case 0xf:
    this = *(String **)(in_RSI + 8);
    if ((this == (String *)0x0) || (*(long *)(this + -8) < 2)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x56,
                       "Condition \"symbols.size() < 2\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
      break;
    }
    cVar5 = String::operator==(this,"Function");
    lVar6 = *(long *)(in_RSI + 8);
    if (cVar5 == '\0') {
      if (lVar6 != 0) {
        lVar7 = *(long *)(lVar6 + -8);
        if (lVar7 < 2) goto LAB_00102eb3;
        local_60 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar6 + 8));
        pCVar2 = *(CowData **)(in_RSI + 8);
        if (pCVar2 == (CowData *)0x0) goto LAB_00102d60;
        lVar7 = *(long *)(pCVar2 + -8);
        if (0 < lVar7) {
          local_68 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar2);
          local_58 = "%s \"%s\" has no static type.";
          local_70 = 0;
          local_50 = 0x1b;
          String::parse_latin1((StrRange *)&local_70);
          vformat<String,String>();
          lVar7 = local_70;
          if (local_70 != 0) {
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          lVar7 = local_68;
          if (local_68 != 0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          lVar7 = local_60;
          if (local_60 != 0) {
            LOCK();
            plVar1 = (long *)(local_60 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_60 = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          break;
        }
        goto LAB_00102d63;
      }
LAB_00102eb0:
      lVar7 = 0;
    }
    else {
      if (lVar6 == 0) goto LAB_00102eb0;
      lVar7 = *(long *)(lVar6 + -8);
      if (1 < lVar7) {
        local_60 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar6 + 8));
        pCVar2 = *(CowData **)(in_RSI + 8);
        if (pCVar2 == (CowData *)0x0) goto LAB_00102d60;
        lVar7 = *(long *)(pCVar2 + -8);
        if (0 < lVar7) {
          local_68 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar2);
          local_58 = "%s \"%s()\" has no static return type.";
          local_70 = 0;
          local_50 = 0x24;
          String::parse_latin1((StrRange *)&local_70);
          vformat<String,String>();
          lVar7 = local_70;
          if (local_70 != 0) {
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          lVar7 = local_68;
          if (local_68 != 0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          lVar7 = local_60;
          if (local_60 != 0) {
            LOCK();
            plVar1 = (long *)(local_60 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_60 = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          break;
        }
        goto LAB_00102d63;
      }
    }
LAB_00102eb3:
    lVar6 = 1;
    goto LAB_00102d80;
  case 0x10:
    lVar7 = *(long *)(in_RSI + 8);
    if ((lVar7 == 0) || (*(long *)(lVar7 + -8) < 2)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x5c,
                       "Condition \"symbols.size() < 2\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
      break;
    }
    local_60 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar7 + 8));
    pCVar2 = *(CowData **)(in_RSI + 8);
    if (pCVar2 == (CowData *)0x0) goto LAB_00102d60;
    lVar7 = *(long *)(pCVar2 + -8);
    if (0 < lVar7) {
      local_68 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar2);
      local_58 = "%s \"%s\" has an implicitly inferred static type.";
      local_70 = 0;
      local_50 = 0x2f;
      String::parse_latin1((StrRange *)&local_70);
      vformat<String,String>();
      lVar7 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      break;
    }
    goto LAB_00102d63;
  case 0x11:
    lVar7 = *(long *)(in_RSI + 8);
    if ((lVar7 == 0) || (*(long *)(lVar7 + -8) < 2)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x5f,
                       "Condition \"symbols.size() < 2\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
      break;
    }
    local_60 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar7 + 8));
    pCVar2 = *(CowData **)(in_RSI + 8);
    if (pCVar2 == (CowData *)0x0) goto LAB_00102d60;
    lVar7 = *(long *)(pCVar2 + -8);
    if (0 < lVar7) {
      local_68 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar2);
      local_58 = 
      "The property \"%s\" is not present on the inferred type \"%s\" (but may be present on a subtype)."
      ;
      local_70 = 0;
      local_50 = 0x5d;
      String::parse_latin1((StrRange *)&local_70);
      vformat<String,String>();
      lVar7 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      break;
    }
    goto LAB_00102d63;
  case 0x12:
    lVar7 = *(long *)(in_RSI + 8);
    if ((lVar7 == 0) || (*(long *)(lVar7 + -8) < 2)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x62,
                       "Condition \"symbols.size() < 2\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
      break;
    }
    local_60 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar7 + 8));
    pCVar2 = *(CowData **)(in_RSI + 8);
    if (pCVar2 == (CowData *)0x0) goto LAB_00102d60;
    lVar7 = *(long *)(pCVar2 + -8);
    if (0 < lVar7) {
      local_68 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar2);
      local_58 = 
      "The method \"%s()\" is not present on the inferred type \"%s\" (but may be present on a subtype)."
      ;
      local_70 = 0;
      local_50 = 0x5d;
      String::parse_latin1((StrRange *)&local_70);
      vformat<String,String>();
      lVar7 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      break;
    }
    goto LAB_00102d63;
  case 0x13:
    pCVar2 = *(CowData **)(in_RSI + 8);
    if ((pCVar2 == (CowData *)0x0) || (*(long *)(pCVar2 + -8) < 1)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x65,
                       "Condition \"symbols.size() < 1\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
    }
    else {
      local_60 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,pCVar2);
      local_58 = "Casting \"Variant\" to \"%s\" is unsafe.";
      local_68 = 0;
      local_50 = 0x24;
      String::parse_latin1((StrRange *)&local_68);
      vformat<String>();
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    break;
  case 0x14:
    lVar7 = *(long *)(in_RSI + 8);
    if ((lVar7 == 0) || (*(long *)(lVar7 + -8) < 5)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x68,
                       "Condition \"symbols.size() < 5\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
      break;
    }
    local_60 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar7 + 0x20));
    lVar6 = *(long *)(in_RSI + 8);
    if (lVar6 == 0) {
LAB_0010326f:
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(lVar6 + -8);
      if (3 < lVar7) {
        local_68 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar6 + 0x18));
        lVar6 = *(long *)(in_RSI + 8);
        if (lVar6 == 0) goto LAB_00103247;
        lVar7 = *(long *)(lVar6 + -8);
        if (lVar7 < 3) goto LAB_0010324a;
        local_70 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar6 + 0x10));
        lVar6 = *(long *)(in_RSI + 8);
        if (lVar6 == 0) goto LAB_00102eb0;
        lVar7 = *(long *)(lVar6 + -8);
        if (lVar7 < 2) goto LAB_00102eb3;
        local_78 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)(lVar6 + 8));
        pCVar2 = *(CowData **)(in_RSI + 8);
        if (pCVar2 == (CowData *)0x0) goto LAB_00102d60;
        lVar7 = *(long *)(pCVar2 + -8);
        if (0 < lVar7) {
          local_80 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,pCVar2);
          local_88 = 0;
          local_58 = 
          "The argument %s of the %s \"%s()\" requires the subtype \"%s\" but the supertype \"%s\" was provided."
          ;
          local_50 = 0x5f;
          String::parse_latin1((StrRange *)&local_88);
          vformat<String,String,String,String,String>();
          lVar7 = local_88;
          if (local_88 != 0) {
            LOCK();
            plVar1 = (long *)(local_88 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_88 = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          lVar7 = local_80;
          if (local_80 != 0) {
            LOCK();
            plVar1 = (long *)(local_80 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_80 = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          lVar7 = local_78;
          if (local_78 != 0) {
            LOCK();
            plVar1 = (long *)(local_78 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_78 = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          lVar7 = local_70;
          if (local_70 != 0) {
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          lVar7 = local_68;
          if (local_68 != 0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          lVar7 = local_60;
          if (local_60 != 0) {
            LOCK();
            plVar1 = (long *)(local_60 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_60 = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          break;
        }
        goto LAB_00102d63;
      }
    }
LAB_00103272:
    lVar6 = 3;
    goto LAB_00102d80;
  case 0x15:
    lVar7 = *(long *)(in_RSI + 8);
    if ((lVar7 == 0) || (*(long *)(lVar7 + -8) < 2)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x6b,
                       "Condition \"symbols.size() < 2\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
      break;
    }
    local_60 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar7 + 8));
    pCVar2 = *(CowData **)(in_RSI + 8);
    if (pCVar2 == (CowData *)0x0) goto LAB_00102d60;
    lVar7 = *(long *)(pCVar2 + -8);
    if (0 < lVar7) {
      local_68 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar2);
      local_58 = 
      "The method \"%s()\" returns \"void\" but it\'s trying to return a call to \"%s()\" that can\'t be ensured to also be \"void\"."
      ;
      local_70 = 0;
      local_50 = 0x74;
      String::parse_latin1((StrRange *)&local_70);
      vformat<String,String>();
      lVar7 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      break;
    }
    goto LAB_00102d63;
  case 0x16:
    pCVar2 = *(CowData **)(in_RSI + 8);
    if ((pCVar2 == (CowData *)0x0) || (*(long *)(pCVar2 + -8) < 1)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x6e,
                       "Condition \"symbols.size() < 1\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
    }
    else {
      local_60 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,pCVar2);
      local_58 = "The function \"%s()\" returns a value that will be discarded if not used.";
      local_68 = 0;
      local_50 = 0x47;
      String::parse_latin1((StrRange *)&local_68);
      vformat<String>();
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    break;
  case 0x17:
    pCVar2 = *(CowData **)(in_RSI + 8);
    if ((pCVar2 == (CowData *)0x0) || (*(long *)(pCVar2 + -8) < 2)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x71,
                       "Condition \"symbols.size() < 2\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
      break;
    }
    local_60 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,pCVar2);
    lVar6 = *(long *)(in_RSI + 8);
    if (lVar6 == 0) goto LAB_00102eb0;
    lVar7 = *(long *)(lVar6 + -8);
    if (lVar7 < 2) goto LAB_00102eb3;
    local_68 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar6 + 8));
    pCVar2 = *(CowData **)(in_RSI + 8);
    if (pCVar2 == (CowData *)0x0) goto LAB_00102d60;
    lVar7 = *(long *)(pCVar2 + -8);
    if (0 < lVar7) {
      local_70 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,pCVar2);
      local_58 = 
      "The function \"%s()\" is a static function but was called from an instance. Instead, it should be directly called from the type: \"%s.%s()\"."
      ;
      local_78 = 0;
      local_50 = 0x89;
      String::parse_latin1((StrRange *)&local_78);
      vformat<String,String,String>();
      lVar7 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      break;
    }
    goto LAB_00102d63;
  case 0x18:
    *(undefined8 *)in_RDI = 0;
    local_58 = 
    "The base class script has the \"@tool\" annotation, but this script does not have it.";
    local_50 = 0x53;
    String::parse_latin1(in_RDI);
    break;
  case 0x19:
    *(undefined8 *)in_RDI = 0;
    local_58 = 
    "The \"@static_unload\" annotation is redundant because the file does not have a class with static variables."
    ;
    local_50 = 0x6a;
    String::parse_latin1(in_RDI);
    break;
  case 0x1a:
    *(undefined8 *)in_RDI = 0;
    local_58 = 
    "\"await\" keyword not needed in this case, because the expression isn\'t a coroutine nor a signal."
    ;
    local_50 = 0x5f;
    String::parse_latin1(in_RDI);
    break;
  case 0x1b:
    *(undefined8 *)in_RDI = 0;
    local_58 = "Assert statement is redundant because the expression is always true.";
    local_50 = 0x44;
    String::parse_latin1(in_RDI);
    break;
  case 0x1c:
    *(undefined8 *)in_RDI = 0;
    local_58 = "Assert statement will raise an error because the expression is always false.";
    local_50 = 0x4c;
    String::parse_latin1(in_RDI);
    break;
  case 0x1d:
    *(undefined8 *)in_RDI = 0;
    local_58 = "Integer division, decimal part will be discarded.";
    local_50 = 0x31;
    String::parse_latin1(in_RDI);
    break;
  case 0x1e:
    *(undefined8 *)in_RDI = 0;
    local_58 = "Narrowing conversion (float is converted to int and loses precision).";
    local_50 = 0x45;
    String::parse_latin1(in_RDI);
    break;
  case 0x1f:
    *(undefined8 *)in_RDI = 0;
    local_58 = 
    "Integer used when an enum value is expected. If this is intended cast the integer to the enum type."
    ;
    local_50 = 99;
    String::parse_latin1(in_RDI);
    break;
  case 0x20:
    lVar7 = *(long *)(in_RSI + 8);
    if ((lVar7 == 0) || (*(long *)(lVar7 + -8) < 3)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x84,
                       "Condition \"symbols.size() < 3\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
      break;
    }
    local_60 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar7 + 0x10));
    lVar6 = *(long *)(in_RSI + 8);
    if (lVar6 == 0) goto LAB_00102eb0;
    lVar7 = *(long *)(lVar6 + -8);
    if (lVar7 < 2) goto LAB_00102eb3;
    local_68 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar6 + 8));
    pCVar2 = *(CowData **)(in_RSI + 8);
    if (pCVar2 == (CowData *)0x0) goto LAB_00102d60;
    lVar7 = *(long *)(pCVar2 + -8);
    if (0 < lVar7) {
      local_70 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,pCVar2);
      local_58 = "Cannot %s %s as Enum \"%s\": no enum member has matching value.";
      local_78 = 0;
      local_50 = 0x3d;
      String::parse_latin1((StrRange *)&local_78);
      vformat<String,String,String>();
      lVar7 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      break;
    }
    goto LAB_00102d63;
  case 0x21:
    pCVar2 = *(CowData **)(in_RSI + 8);
    if ((pCVar2 == (CowData *)0x0) || (*(long *)(pCVar2 + -8) < 1)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x87,
                       "Condition \"symbols.size() < 1\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
    }
    else {
      local_60 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,pCVar2);
      local_58 = 
      "The variable \"%s\" has an enum type and does not set an explicit default value. The default will be set to \"0\"."
      ;
      local_68 = 0;
      local_50 = 0x6e;
      String::parse_latin1((StrRange *)&local_68);
      vformat<String>();
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    break;
  case 0x22:
    *(undefined8 *)in_RDI = 0;
    local_58 = "Empty script file.";
    local_50 = 0x12;
    String::parse_latin1(in_RDI);
    break;
  case 0x23:
    lVar7 = *(long *)(in_RSI + 8);
    if ((lVar7 == 0) || (*(long *)(lVar7 + -8) < 2)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x8c,
                       "Condition \"symbols.size() < 2\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
      break;
    }
    local_60 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar7 + 8));
    pCVar2 = *(CowData **)(in_RSI + 8);
    if (pCVar2 == (CowData *)0x0) goto LAB_00102d60;
    lVar7 = *(long *)(pCVar2 + -8);
    if (0 < lVar7) {
      local_68 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar2);
      local_58 = 
      "The \"%s\" keyword is deprecated and will be removed in a future release, please replace its uses by \"%s\"."
      ;
      local_70 = 0;
      local_50 = 0x68;
      String::parse_latin1((StrRange *)&local_70);
      vformat<String,String>();
      lVar7 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      break;
    }
    goto LAB_00102d63;
  case 0x24:
    pCVar2 = *(CowData **)(in_RSI + 8);
    if ((pCVar2 == (CowData *)0x0) || (*(long *)(pCVar2 + -8) < 1)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x8f,
                       "Condition \"symbols.size() < 1\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
    }
    else {
      local_60 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,pCVar2);
      local_58 = 
      "The identifier \"%s\" has misleading characters and might be confused with something else.";
      local_68 = 0;
      local_50 = 0x58;
      String::parse_latin1((StrRange *)&local_68);
      vformat<String>();
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    break;
  case 0x25:
    lVar7 = *(long *)(in_RSI + 8);
    if ((lVar7 == 0) || (*(long *)(lVar7 + -8) < 2)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x92,
                       "Condition \"symbols.size() < 2\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
      break;
    }
    local_60 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar7 + 8));
    pCVar2 = *(CowData **)(in_RSI + 8);
    if (pCVar2 == (CowData *)0x0) goto LAB_00102d60;
    lVar7 = *(long *)(pCVar2 + -8);
    if (0 < lVar7) {
      local_68 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar2);
      local_58 = "The %s \"%s\" is declared below in the parent block.";
      local_70 = 0;
      local_50 = 0x32;
      String::parse_latin1((StrRange *)&local_70);
      vformat<String,String>();
      lVar7 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      break;
    }
    goto LAB_00102d63;
  case 0x26:
    pCVar2 = *(CowData **)(in_RSI + 8);
    if ((pCVar2 == (CowData *)0x0) || (*(long *)(pCVar2 + -8) < 1)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x95,
                       "Condition \"symbols.size() < 1\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
    }
    else {
      local_60 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,pCVar2);
      local_58 = "The identifier \"%s\" will be shadowed below in the block.";
      local_68 = 0;
      local_50 = 0x38;
      String::parse_latin1((StrRange *)&local_68);
      vformat<String>();
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    break;
  case 0x27:
    pCVar2 = *(CowData **)(in_RSI + 8);
    if ((pCVar2 == (CowData *)0x0) || (*(long *)(pCVar2 + -8) < 1)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x98,
                       "Condition \"symbols.size() < 1\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
    }
    else {
      local_60 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,pCVar2);
      local_58 = "Reassigning lambda capture does not modify the outer local variable \"%s\".";
      local_68 = 0;
      local_50 = 0x49;
      String::parse_latin1((StrRange *)&local_68);
      vformat<String>();
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    break;
  case 0x28:
    pCVar2 = *(CowData **)(in_RSI + 8);
    if ((pCVar2 == (CowData *)0x0) || (*(long *)(pCVar2 + -8) < 1)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x9b,
                       "Condition \"symbols.size() < 1\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
    }
    else {
      local_60 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,pCVar2);
      local_58 = 
      "The %s type is being inferred from a Variant value, so it will be typed as Variant.";
      local_68 = 0;
      local_50 = 0x53;
      String::parse_latin1((StrRange *)&local_68);
      vformat<String>();
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    break;
  case 0x29:
    lVar7 = *(long *)(in_RSI + 8);
    if ((lVar7 == 0) || (*(long *)(lVar7 + -8) < 2)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0x9e,
                       "Condition \"symbols.size() < 2\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
      break;
    }
    local_60 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar7 + 8));
    pCVar2 = *(CowData **)(in_RSI + 8);
    if (pCVar2 == (CowData *)0x0) goto LAB_00102d60;
    lVar7 = *(long *)(pCVar2 + -8);
    if (0 < lVar7) {
      local_68 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar2);
      local_58 = 
      "The method \"%s()\" overrides a method from native class \"%s\". This won\'t be called by the engine and may not work as expected."
      ;
      local_70 = 0;
      local_50 = 0x7d;
      String::parse_latin1((StrRange *)&local_70);
      vformat<String,String>();
      lVar7 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      break;
    }
LAB_00102d63:
    lVar6 = 0;
LAB_00102d80:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  case 0x2a:
    pCVar2 = *(CowData **)(in_RSI + 8);
    if ((pCVar2 == (CowData *)0x0) || (*(long *)(pCVar2 + -8) < 1)) {
      _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0xa1,
                       "Condition \"symbols.size() < 1\" is true. Returning: String()",0,0);
      *(undefined8 *)in_RDI = 0;
    }
    else {
      local_60 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,pCVar2);
      local_58 = 
      "The default value is using \"%s\" which won\'t return nodes in the scene tree before \"_ready()\" is called. Use the \"@onready\" annotation to solve this."
      ;
      local_68 = 0;
      local_50 = 0x94;
      String::parse_latin1((StrRange *)&local_68);
      vformat<String>();
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    break;
  case 0x2b:
    *(undefined8 *)in_RDI = 0;
    local_58 = 
    "\"@onready\" will set the default value after \"@export\" takes effect and will override it.";
    local_50 = 0x58;
    String::parse_latin1(in_RDI);
    break;
  default:
    get_name_from_code((GDScriptWarning *)&local_68);
    local_58 = "Invalid GDScript warning \"%s\".";
    local_60 = 0;
    local_50 = 0x1e;
    String::parse_latin1((StrRange *)&local_60);
    vformat<String>(&local_58,(StrRange *)&local_60,(GDScriptWarning *)&local_68);
    _err_print_error("get_message","modules/gdscript/gdscript_warning.cpp",0xaf,
                     "Method/function failed. Returning: String()",&local_58,0);
    pcVar4 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar7 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    lVar7 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    *(undefined8 *)in_RDI = 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* WARNING: Removing unreachable block (ram,0x00105078) */
/* WARNING: Removing unreachable block (ram,0x001051a8) */
/* WARNING: Removing unreachable block (ram,0x00105370) */
/* WARNING: Removing unreachable block (ram,0x001051b4) */
/* WARNING: Removing unreachable block (ram,0x001051be) */
/* WARNING: Removing unreachable block (ram,0x00105350) */
/* WARNING: Removing unreachable block (ram,0x001051ca) */
/* WARNING: Removing unreachable block (ram,0x001051d4) */
/* WARNING: Removing unreachable block (ram,0x00105330) */
/* WARNING: Removing unreachable block (ram,0x001051e0) */
/* WARNING: Removing unreachable block (ram,0x001051ea) */
/* WARNING: Removing unreachable block (ram,0x00105310) */
/* WARNING: Removing unreachable block (ram,0x001051f6) */
/* WARNING: Removing unreachable block (ram,0x00105200) */
/* WARNING: Removing unreachable block (ram,0x001052f0) */
/* WARNING: Removing unreachable block (ram,0x0010520c) */
/* WARNING: Removing unreachable block (ram,0x00105216) */
/* WARNING: Removing unreachable block (ram,0x001052d0) */
/* WARNING: Removing unreachable block (ram,0x00105222) */
/* WARNING: Removing unreachable block (ram,0x0010522c) */
/* WARNING: Removing unreachable block (ram,0x001052b0) */
/* WARNING: Removing unreachable block (ram,0x00105234) */
/* WARNING: Removing unreachable block (ram,0x0010524a) */
/* WARNING: Removing unreachable block (ram,0x00105256) */
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



/* WARNING: Removing unreachable block (ram,0x001054f0) */
/* WARNING: Removing unreachable block (ram,0x00105620) */
/* WARNING: Removing unreachable block (ram,0x00105799) */
/* WARNING: Removing unreachable block (ram,0x0010562c) */
/* WARNING: Removing unreachable block (ram,0x00105636) */
/* WARNING: Removing unreachable block (ram,0x0010577b) */
/* WARNING: Removing unreachable block (ram,0x00105642) */
/* WARNING: Removing unreachable block (ram,0x0010564c) */
/* WARNING: Removing unreachable block (ram,0x0010575d) */
/* WARNING: Removing unreachable block (ram,0x00105658) */
/* WARNING: Removing unreachable block (ram,0x00105662) */
/* WARNING: Removing unreachable block (ram,0x0010573f) */
/* WARNING: Removing unreachable block (ram,0x0010566e) */
/* WARNING: Removing unreachable block (ram,0x00105678) */
/* WARNING: Removing unreachable block (ram,0x00105721) */
/* WARNING: Removing unreachable block (ram,0x00105684) */
/* WARNING: Removing unreachable block (ram,0x0010568e) */
/* WARNING: Removing unreachable block (ram,0x00105703) */
/* WARNING: Removing unreachable block (ram,0x00105696) */
/* WARNING: Removing unreachable block (ram,0x001056a0) */
/* WARNING: Removing unreachable block (ram,0x001056e8) */
/* WARNING: Removing unreachable block (ram,0x001056a8) */
/* WARNING: Removing unreachable block (ram,0x001056be) */
/* WARNING: Removing unreachable block (ram,0x001056ca) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>(undefined8 *param_1,bool *param_2,String *param_3,String *param_4)

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



/* WARNING: Removing unreachable block (ram,0x00105918) */
/* WARNING: Removing unreachable block (ram,0x00105a48) */
/* WARNING: Removing unreachable block (ram,0x00105bc0) */
/* WARNING: Removing unreachable block (ram,0x00105a54) */
/* WARNING: Removing unreachable block (ram,0x00105a5e) */
/* WARNING: Removing unreachable block (ram,0x00105ba2) */
/* WARNING: Removing unreachable block (ram,0x00105a6a) */
/* WARNING: Removing unreachable block (ram,0x00105a74) */
/* WARNING: Removing unreachable block (ram,0x00105b84) */
/* WARNING: Removing unreachable block (ram,0x00105a80) */
/* WARNING: Removing unreachable block (ram,0x00105a8a) */
/* WARNING: Removing unreachable block (ram,0x00105b66) */
/* WARNING: Removing unreachable block (ram,0x00105a96) */
/* WARNING: Removing unreachable block (ram,0x00105aa0) */
/* WARNING: Removing unreachable block (ram,0x00105b48) */
/* WARNING: Removing unreachable block (ram,0x00105aac) */
/* WARNING: Removing unreachable block (ram,0x00105ab6) */
/* WARNING: Removing unreachable block (ram,0x00105b2a) */
/* WARNING: Removing unreachable block (ram,0x00105abe) */
/* WARNING: Removing unreachable block (ram,0x00105ac8) */
/* WARNING: Removing unreachable block (ram,0x00105b0f) */
/* WARNING: Removing unreachable block (ram,0x00105ad0) */
/* WARNING: Removing unreachable block (ram,0x00105ae5) */
/* WARNING: Removing unreachable block (ram,0x00105af1) */
/* String vformat<String, String, String>(String const&, String const, String const, String const)
    */

undefined8 *
vformat<String,String,String>
          (undefined8 *param_1,bool *param_2,String *param_3,String *param_4,String *param_5)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_f8 [8];
  undefined8 local_f0 [9];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,param_3);
  Variant::Variant(local_90,param_4);
  iVar2 = 0;
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar4 = (int)local_f8;
  Array::resize(iVar4);
  pVVar3 = local_a8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  pVVar3 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00105d60) */
/* WARNING: Removing unreachable block (ram,0x00105e90) */
/* WARNING: Removing unreachable block (ram,0x00106008) */
/* WARNING: Removing unreachable block (ram,0x00105e9c) */
/* WARNING: Removing unreachable block (ram,0x00105ea6) */
/* WARNING: Removing unreachable block (ram,0x00105fea) */
/* WARNING: Removing unreachable block (ram,0x00105eb2) */
/* WARNING: Removing unreachable block (ram,0x00105ebc) */
/* WARNING: Removing unreachable block (ram,0x00105fcc) */
/* WARNING: Removing unreachable block (ram,0x00105ec8) */
/* WARNING: Removing unreachable block (ram,0x00105ed2) */
/* WARNING: Removing unreachable block (ram,0x00105fae) */
/* WARNING: Removing unreachable block (ram,0x00105ede) */
/* WARNING: Removing unreachable block (ram,0x00105ee8) */
/* WARNING: Removing unreachable block (ram,0x00105f90) */
/* WARNING: Removing unreachable block (ram,0x00105ef4) */
/* WARNING: Removing unreachable block (ram,0x00105efe) */
/* WARNING: Removing unreachable block (ram,0x00105f72) */
/* WARNING: Removing unreachable block (ram,0x00105f06) */
/* WARNING: Removing unreachable block (ram,0x00105f10) */
/* WARNING: Removing unreachable block (ram,0x00105f57) */
/* WARNING: Removing unreachable block (ram,0x00105f18) */
/* WARNING: Removing unreachable block (ram,0x00105f2d) */
/* WARNING: Removing unreachable block (ram,0x00105f39) */
/* String vformat<String, String, String, String>(String const&, String const, String const, String
   const, String const) */

undefined8 *
vformat<String,String,String,String>
          (undefined8 *param_1,bool *param_2,String *param_3,String *param_4,String *param_5,
          String *param_6)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_108 [8];
  undefined8 local_100 [9];
  Variant local_b8 [24];
  Variant local_a0 [24];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_b8,param_3);
  Variant::Variant(local_a0,param_4);
  Variant::Variant(local_88,param_5);
  iVar2 = 0;
  Variant::Variant(local_70,param_6);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_108);
  iVar4 = (int)local_108;
  Array::resize(iVar4);
  pVVar3 = local_b8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 4);
  String::sprintf((Array *)local_100,param_2);
  *param_1 = local_100[0];
  pVVar3 = (Variant *)local_40;
  Array::~Array(local_108);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_b8);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x001061c8) */
/* WARNING: Removing unreachable block (ram,0x001062f8) */
/* WARNING: Removing unreachable block (ram,0x00106471) */
/* WARNING: Removing unreachable block (ram,0x00106304) */
/* WARNING: Removing unreachable block (ram,0x0010630e) */
/* WARNING: Removing unreachable block (ram,0x00106453) */
/* WARNING: Removing unreachable block (ram,0x0010631a) */
/* WARNING: Removing unreachable block (ram,0x00106324) */
/* WARNING: Removing unreachable block (ram,0x00106435) */
/* WARNING: Removing unreachable block (ram,0x00106330) */
/* WARNING: Removing unreachable block (ram,0x0010633a) */
/* WARNING: Removing unreachable block (ram,0x00106417) */
/* WARNING: Removing unreachable block (ram,0x00106346) */
/* WARNING: Removing unreachable block (ram,0x00106350) */
/* WARNING: Removing unreachable block (ram,0x001063f9) */
/* WARNING: Removing unreachable block (ram,0x0010635c) */
/* WARNING: Removing unreachable block (ram,0x00106366) */
/* WARNING: Removing unreachable block (ram,0x001063db) */
/* WARNING: Removing unreachable block (ram,0x0010636e) */
/* WARNING: Removing unreachable block (ram,0x00106378) */
/* WARNING: Removing unreachable block (ram,0x001063c0) */
/* WARNING: Removing unreachable block (ram,0x00106380) */
/* WARNING: Removing unreachable block (ram,0x00106396) */
/* WARNING: Removing unreachable block (ram,0x001063a2) */
/* String vformat<String, String, String, String, String>(String const&, String const, String const,
   String const, String const, String const) */

undefined8 *
vformat<String,String,String,String,String>
          (undefined8 *param_1,bool *param_2,String *param_3,String *param_4,String *param_5,
          String *param_6,String *param_7)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_128 [8];
  undefined8 local_120 [9];
  Variant local_d8 [24];
  Variant local_c0 [24];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_d8,param_3);
  Variant::Variant(local_c0,param_4);
  Variant::Variant(local_a8,param_5);
  iVar4 = 0;
  Variant::Variant(local_90,param_6);
  Variant::Variant(local_78,param_7);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_128);
  iVar2 = (int)local_128;
  Array::resize(iVar2);
  pVVar3 = local_d8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar2);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar4 != 5);
  String::sprintf((Array *)local_120,param_2);
  *param_1 = local_120[0];
  pVVar3 = local_48;
  Array::~Array(local_128);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_d8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



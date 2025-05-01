
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



/* POTGenerator::get_singleton() */

void POTGenerator::get_singleton(void)

{
  void *pvVar1;
  
  if (singleton != (void *)0x0) {
    return;
  }
  pvVar1 = operator_new(0x30,"");
  *(undefined8 *)((long)pvVar1 + 0x28) = 2;
  singleton = pvVar1;
  *(undefined1 (*) [16])((long)pvVar1 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((long)pvVar1 + 0x18) = (undefined1  [16])0x0;
  return;
}



/* POTGenerator::POTGenerator() */

void __thiscall POTGenerator::POTGenerator(POTGenerator *this)

{
  *(undefined8 *)(this + 0x28) = 2;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  return;
}



/* POTGenerator::_write_msgid(Ref<FileAccess>, String const&, bool) */

void __thiscall
POTGenerator::_write_msgid(undefined8 param_1,undefined8 *param_2,long *param_3,char param_4)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  char *pcVar4;
  long lVar5;
  int iVar6;
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
  
  plVar1 = (long *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = *(code **)(*plVar1 + 0x2a8);
  local_68 = 0;
  if (param_4 == '\0') {
    local_50 = 6;
    local_58 = "msgid ";
  }
  else {
    local_50 = 0xd;
    local_58 = "msgid_plural ";
  }
  String::parse_latin1((StrRange *)&local_68);
  (*pcVar2)(plVar1);
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
  if ((*param_3 == 0) || (*(uint *)(*param_3 + -8) < 2)) {
    plVar1 = (long *)*param_2;
    pcVar2 = *(code **)(*plVar1 + 0x2b0);
    local_68 = 0;
    local_58 = "\"\"";
    local_50 = 2;
    String::parse_latin1((StrRange *)&local_68);
    (*pcVar2)(plVar1);
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
    goto LAB_001001e5;
  }
  String::split((char *)&local_68,SUB81(param_3,0),0x1037b2);
  if (local_60 == 0) {
    lVar7 = 0;
    lVar5 = -1;
LAB_001004c6:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar7 = *(long *)(local_60 + -8);
  lVar5 = lVar7 + -1;
  if (lVar5 < 0) goto LAB_001004c6;
  plVar1 = (long *)(local_60 + lVar5 * 8);
  iVar6 = (int)lVar7;
  lVar7 = *plVar1;
  if ((lVar7 == 0) || (*(uint *)(lVar7 + -8) < 2)) {
    iVar6 = iVar6 + -1;
  }
  if (iVar6 < 2) {
LAB_001002d1:
    lVar5 = 0;
    do {
      if (*(long *)(local_60 + -8) + -1 <= lVar5) break;
      plVar3 = (long *)*param_2;
      local_88 = 0;
      pcVar2 = *(code **)(*plVar3 + 0x2b0);
      local_50 = 1;
      local_58 = "\n";
      String::parse_latin1((StrRange *)&local_88);
      if (local_60 == 0) {
        lVar7 = 0;
        goto LAB_001004c6;
      }
      lVar7 = *(long *)(local_60 + -8);
      if (lVar7 <= lVar5) goto LAB_001004c6;
      String::operator+((String *)&local_80,(String *)(local_60 + lVar5 * 8));
      String::json_escape();
      local_58 = "\"";
      local_70 = 0;
      local_50 = 1;
      String::parse_latin1((StrRange *)&local_70);
      String::quote((String *)&local_58);
      (*pcVar2)(plVar3);
      pcVar4 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_58 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      lVar7 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar3 = (long *)(local_70 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar3 = (long *)(local_78 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar3 = (long *)(local_80 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar3 = (long *)(local_88 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar5 = lVar5 + 1;
    } while (local_60 != 0);
  }
  else {
    plVar3 = (long *)*param_2;
    pcVar2 = *(code **)(*plVar3 + 0x2b0);
    local_70 = 0;
    local_58 = "\"\"";
    local_50 = 2;
    String::parse_latin1((StrRange *)&local_70);
    (*pcVar2)(plVar3);
    lVar7 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar3 = (long *)(local_70 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    if (local_60 != 0) goto LAB_001002d1;
  }
  lVar7 = *plVar1;
  if ((lVar7 != 0) && (1 < *(uint *)(lVar7 + -8))) {
    plVar1 = (long *)*param_2;
    pcVar2 = *(code **)(*plVar1 + 0x2b0);
    String::json_escape();
    local_58 = "\"";
    local_70 = 0;
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_70);
    String::quote((String *)&local_58);
    (*pcVar2)(plVar1);
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
  }
  CowData<String>::_unref((CowData<String> *)&local_60);
LAB_001001e5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* POTGenerator::_write_to_pot(String const&) */

void __thiscall POTGenerator::_write_to_pot(POTGenerator *this,String *param_1)

{
  Object *pOVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  Object *pOVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  char *pcVar10;
  code *pcVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  long local_128;
  long local_110;
  StrRange *local_f8;
  int local_d4;
  Object *local_d0;
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
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_d0,(int)param_1,(Error *)0x2);
  if (local_d4 == 0) {
    ProjectSettings::get_singleton();
    StringName::StringName((StringName *)&local_78,"application/config/name",false);
    ProjectSettings::get_setting_with_override((StringName *)local_58);
    Variant::operator_cast_to_String((Variant *)&local_68);
    String::replace((char *)&local_c8,(char *)&local_68);
    pOVar5 = local_68;
    if (local_68 != (Object *)0x0) {
      LOCK();
      pOVar1 = local_68 + -0x10;
      *(long *)pOVar1 = *(long *)pOVar1 + -1;
      UNLOCK();
      if (*(long *)pOVar1 == 0) {
        local_68 = (Object *)0x0;
        Memory::free_static(pOVar5 + -0x10,false);
      }
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_78 != 0)) {
      StringName::unref();
    }
    ProjectSettings::get_singleton();
    StringName::StringName
              ((StringName *)&local_68,"internationalization/locale/translations_pot_files",false);
    ProjectSettings::get_setting_with_override((StringName *)local_58);
    Variant::operator_cast_to_Vector((Variant *)&local_78);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
    local_c0 = 0;
    local_68 = (Object *)&_LC0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_c0);
    for (local_110 = 0; (local_70 != 0 && (local_110 < *(long *)(local_70 + -8)));
        local_110 = local_110 + 1) {
      local_80 = 0;
      local_68 = (Object *)&_LC11;
      local_60 = 1;
      String::parse_latin1((StrRange *)&local_80);
      if (local_70 == 0) {
        lVar12 = 0;
LAB_00100a72:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,local_110,lVar12,"p_index","size()","",
                   false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      lVar12 = *(long *)(local_70 + -8);
      if (lVar12 <= local_110) goto LAB_00100a72;
      String::replace((char *)&local_90,(char *)(local_70 + local_110 * 8));
      operator+((char *)&local_88,(String *)&_LC27);
      String::operator+((String *)&local_68,(String *)&local_88);
      String::operator+=((String *)&local_c0,(String *)&local_68);
      pOVar5 = local_68;
      if (local_68 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_68 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_68 = (Object *)0x0;
          Memory::free_static(pOVar5 + -0x10,false);
        }
      }
      lVar12 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar2 = (long *)(local_88 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar12 + -0x10),false);
        }
      }
      lVar12 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar2 = (long *)(local_90 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar12 + -0x10),false);
        }
      }
      lVar12 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar2 = (long *)(local_80 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar12 + -0x10),false);
        }
      }
    }
    local_f8 = (StrRange *)&local_90;
    local_80 = 0;
    local_68 = (Object *)0x104178;
    local_60 = 0x6b;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = (Object *)0x1041e8;
    local_90 = 0;
    local_60 = 0x5b;
    String::parse_latin1(local_f8);
    local_a8 = 0;
    local_68 = (Object *)0x103836;
    local_60 = 0x1a;
    String::parse_latin1((StrRange *)&local_a8);
    operator+((char *)&local_b0,(String *)"# LANGUAGE translation for ");
    String::operator+((String *)&local_a0,(String *)&local_b0);
    String::operator+((String *)&local_98,(String *)&local_a0);
    String::operator+((String *)&local_88,(String *)&local_98);
    String::operator+((String *)&local_68,(String *)&local_88);
    String::operator+((String *)&local_b8,(String *)&local_68);
    pOVar5 = local_68;
    if (local_68 != (Object *)0x0) {
      LOCK();
      pOVar1 = local_68 + -0x10;
      *(long *)pOVar1 = *(long *)pOVar1 + -1;
      UNLOCK();
      if (*(long *)pOVar1 == 0) {
        local_68 = (Object *)0x0;
        Memory::free_static(pOVar5 + -0x10,false);
      }
    }
    lVar12 = local_88;
    if (local_88 != 0) {
      LOCK();
      plVar2 = (long *)(local_88 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
    lVar12 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar2 = (long *)(local_98 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
    lVar12 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar2 = (long *)(local_a0 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
    lVar12 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      plVar2 = (long *)(local_b0 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_b0 = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
    lVar12 = local_a8;
    if (local_a8 != 0) {
      LOCK();
      plVar2 = (long *)(local_a8 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
    lVar12 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar2 = (long *)(local_90 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
    lVar12 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar2 = (long *)(local_80 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
    (**(code **)(*(long *)local_d0 + 0x2a8))();
    lVar12 = local_b8;
    for (puVar4 = *(undefined8 **)(this + 0x18); local_b8 = lVar12, puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)*puVar4) {
      local_a8 = 0;
      if (puVar4[2] == 0) {
        local_128 = puVar4[4];
        if (local_128 != 0) goto LAB_00100e84;
      }
      else {
        plVar2 = (long *)(puVar4[2] + -0x10);
        do {
          lVar12 = *plVar2;
          if (lVar12 == 0) goto LAB_00100e77;
          LOCK();
          lVar8 = *plVar2;
          bVar13 = lVar12 == lVar8;
          if (bVar13) {
            *plVar2 = lVar12 + 1;
            lVar8 = lVar12;
          }
          UNLOCK();
        } while (!bVar13);
        if (lVar8 != -1) {
          local_a8 = puVar4[2];
        }
LAB_00100e77:
        local_128 = puVar4[4];
        if (local_128 != 0) {
LAB_00100e84:
          local_110 = 0;
          do {
            pOVar5 = local_d0;
            if (*(long *)(local_128 + -8) <= local_110) break;
            local_a0 = 0;
            lVar8 = local_110 * 0x60;
            lVar12 = *(long *)(local_128 + lVar8);
            plVar2 = (long *)(lVar12 + -0x10);
            if (lVar12 != 0) {
              do {
                lVar12 = *plVar2;
                if (lVar12 == 0) goto LAB_00100eec;
                LOCK();
                lVar7 = *plVar2;
                bVar13 = lVar12 == lVar7;
                if (bVar13) {
                  *plVar2 = lVar12 + 1;
                  lVar7 = lVar12;
                }
                UNLOCK();
              } while (!bVar13);
              if (lVar7 != -1) {
                local_a0 = *(long *)(local_128 + lVar8);
              }
LAB_00100eec:
              local_128 = puVar4[4];
            }
            if (local_128 == 0) {
LAB_001018e0:
              lVar12 = 0;
              goto LAB_00100a72;
            }
            lVar12 = *(long *)(local_128 + -8);
            if (lVar12 <= local_110) goto LAB_00100a72;
            local_98 = 0;
            local_128 = local_128 + lVar8;
            if (*(long *)(local_128 + 8) != 0) {
              plVar2 = (long *)(*(long *)(local_128 + 8) + -0x10);
              do {
                lVar12 = *plVar2;
                if (lVar12 == 0) goto LAB_00100f5a;
                LOCK();
                lVar7 = *plVar2;
                bVar13 = lVar12 == lVar7;
                if (bVar13) {
                  *plVar2 = lVar12 + 1;
                  lVar7 = lVar12;
                }
                UNLOCK();
              } while (!bVar13);
              if (lVar7 != -1) {
                local_98 = *(long *)(local_128 + 8);
              }
LAB_00100f5a:
              local_128 = puVar4[4];
              if (local_128 == 0) goto LAB_001018e0;
              lVar12 = *(long *)(local_128 + -8);
              if (lVar12 <= local_110) goto LAB_00100a72;
              local_128 = local_128 + lVar8;
            }
            pcVar11 = *(code **)(*(long *)local_d0 + 0x2b0);
            local_80 = 0;
            local_68 = (Object *)&_LC0;
            local_60 = 0;
            String::parse_latin1((StrRange *)&local_80);
            (*pcVar11)(pOVar5);
            lVar12 = local_80;
            if (local_80 != 0) {
              LOCK();
              plVar2 = (long *)(local_80 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_80 = 0;
                Memory::free_static((void *)(lVar12 + -0x10),false);
              }
            }
            pOVar5 = local_d0;
            iVar3 = *(int *)(local_128 + 0x5c);
            if (iVar3 != 0) {
              pcVar10 = *(char **)(local_128 + 0x38);
              pcVar11 = *(code **)(*(long *)local_d0 + 0x2b0);
              String::replace((char *)&local_80,pcVar10);
              operator+((char *)&local_68,(String *)"#. TRANSLATORS: ");
              (*pcVar11)(pOVar5);
              pOVar5 = local_68;
              if (local_68 != (Object *)0x0) {
                LOCK();
                pOVar1 = local_68 + -0x10;
                *(long *)pOVar1 = *(long *)pOVar1 + -1;
                UNLOCK();
                if (*(long *)pOVar1 == 0) {
                  local_68 = (Object *)0x0;
                  Memory::free_static(pOVar5 + -0x10,false);
                }
              }
              lVar12 = local_80;
              if (local_80 != 0) {
                LOCK();
                plVar2 = (long *)(local_80 + -0x10);
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (*plVar2 == 0) {
                  local_80 = 0;
                  Memory::free_static((void *)(lVar12 + -0x10),false);
                }
              }
              iVar9 = 0;
LAB_001010d8:
              iVar9 = iVar9 + 1;
              if (iVar9 < iVar3) {
                while( true ) {
                  pOVar5 = local_d0;
                  pcVar10 = pcVar10 + 8;
                  pcVar11 = *(code **)(*(long *)local_d0 + 0x2b0);
                  String::replace((char *)&local_80,pcVar10);
                  operator+((char *)&local_68,(String *)&_LC30);
                  (*pcVar11)(pOVar5);
                  pOVar5 = local_68;
                  if (local_68 != (Object *)0x0) {
                    LOCK();
                    pOVar1 = local_68 + -0x10;
                    *(long *)pOVar1 = *(long *)pOVar1 + -1;
                    UNLOCK();
                    if (*(long *)pOVar1 == 0) {
                      local_68 = (Object *)0x0;
                      Memory::free_static(pOVar5 + -0x10,false);
                    }
                  }
                  lVar12 = local_80;
                  if (local_80 == 0) break;
                  LOCK();
                  plVar2 = (long *)(local_80 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 != 0) break;
                  iVar9 = iVar9 + 1;
                  local_80 = 0;
                  Memory::free_static((void *)(lVar12 + -0x10),false);
                  if (iVar3 <= iVar9) goto LAB_001011bd;
                }
                goto LAB_001010d8;
              }
            }
LAB_001011bd:
            iVar3 = *(int *)(local_128 + 0x34);
            if (iVar3 != 0) {
              iVar9 = 0;
              do {
                pOVar5 = local_d0;
                pcVar11 = *(code **)(*(long *)local_d0 + 0x2b0);
                String::trim_prefix((char *)&local_88);
                String::replace((char *)&local_80,(char *)&local_88);
                operator+((char *)&local_68,(String *)&_LC32);
                (*pcVar11)(pOVar5);
                pOVar5 = local_68;
                if (local_68 != (Object *)0x0) {
                  LOCK();
                  pOVar1 = local_68 + -0x10;
                  *(long *)pOVar1 = *(long *)pOVar1 + -1;
                  UNLOCK();
                  if (*(long *)pOVar1 == 0) {
                    local_68 = (Object *)0x0;
                    Memory::free_static(pOVar5 + -0x10,false);
                  }
                }
                lVar12 = local_80;
                if (local_80 != 0) {
                  LOCK();
                  plVar2 = (long *)(local_80 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    local_80 = 0;
                    Memory::free_static((void *)(lVar12 + -0x10),false);
                  }
                }
                lVar12 = local_88;
                if (local_88 != 0) {
                  LOCK();
                  plVar2 = (long *)(local_88 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    local_88 = 0;
                    Memory::free_static((void *)(lVar12 + -0x10),false);
                  }
                }
                iVar9 = iVar9 + 1;
              } while (iVar9 < iVar3);
            }
            pOVar5 = local_d0;
            if ((local_a0 != 0) && (1 < *(uint *)(local_a0 + -8))) {
              pcVar11 = *(code **)(*(long *)local_d0 + 0x2b0);
              String::json_escape();
              local_68 = (Object *)&_LC16;
              local_88 = 0;
              local_60 = 1;
              String::parse_latin1((StrRange *)&local_88);
              String::quote((String *)&local_80);
              operator+((char *)&local_68,(String *)"msgctxt ");
              (*pcVar11)(pOVar5);
              pOVar5 = local_68;
              if (local_68 != (Object *)0x0) {
                LOCK();
                pOVar1 = local_68 + -0x10;
                *(long *)pOVar1 = *(long *)pOVar1 + -1;
                UNLOCK();
                if (*(long *)pOVar1 == 0) {
                  local_68 = (Object *)0x0;
                  Memory::free_static(pOVar5 + -0x10,false);
                }
              }
              lVar12 = local_80;
              if (local_80 != 0) {
                LOCK();
                plVar2 = (long *)(local_80 + -0x10);
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (*plVar2 == 0) {
                  local_80 = 0;
                  Memory::free_static((void *)(lVar12 + -0x10),false);
                }
              }
              lVar12 = local_88;
              if (local_88 != 0) {
                LOCK();
                plVar2 = (long *)(local_88 + -0x10);
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (*plVar2 == 0) {
                  local_88 = 0;
                  Memory::free_static((void *)(lVar12 + -0x10),false);
                }
              }
              lVar12 = local_90;
              if (local_90 != 0) {
                LOCK();
                plVar2 = (long *)(local_90 + -0x10);
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (*plVar2 == 0) {
                  local_90 = 0;
                  Memory::free_static((void *)(lVar12 + -0x10),false);
                }
              }
            }
            pOVar5 = local_d0;
            if (local_d0 == (Object *)0x0) {
LAB_00101459:
              local_68 = (Object *)0x0;
              _write_msgid(this,(Variant *)&local_68,(StrRange *)&local_a8);
            }
            else {
              local_68 = local_d0;
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') goto LAB_00101459;
              _write_msgid(this,(Variant *)&local_68,(StrRange *)&local_a8);
              cVar6 = RefCounted::unreference();
              if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar5), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
            pOVar5 = local_d0;
            if ((local_98 == 0) || (*(uint *)(local_98 + -8) < 2)) {
              pcVar11 = *(code **)(*(long *)local_d0 + 0x2b0);
              local_68 = (Object *)0x1038b8;
              local_60 = 9;
            }
            else {
              if (local_d0 == (Object *)0x0) {
LAB_0010164d:
                local_68 = (Object *)0x0;
                _write_msgid(this,(Variant *)&local_68,(String *)&local_98);
              }
              else {
                local_68 = local_d0;
                cVar6 = RefCounted::reference();
                if (cVar6 == '\0') goto LAB_0010164d;
                _write_msgid(this,(Variant *)&local_68,(String *)&local_98);
                cVar6 = RefCounted::unreference();
                if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar5), cVar6 != '\0')) {
                  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                  Memory::free_static(pOVar5,false);
                }
              }
              pOVar5 = local_d0;
              pcVar11 = *(code **)(*(long *)local_d0 + 0x2b0);
              local_80 = 0;
              local_68 = (Object *)0x10389e;
              local_60 = 0xc;
              String::parse_latin1((StrRange *)&local_80);
              (*pcVar11)(pOVar5);
              lVar12 = local_80;
              if (local_80 != 0) {
                LOCK();
                plVar2 = (long *)(local_80 + -0x10);
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (*plVar2 == 0) {
                  local_80 = 0;
                  Memory::free_static((void *)(lVar12 + -0x10),false);
                }
              }
              pcVar11 = *(code **)(*(long *)local_d0 + 0x2b0);
              local_68 = (Object *)0x1038ab;
              local_60 = 0xc;
            }
            pOVar5 = local_d0;
            local_80 = 0;
            String::parse_latin1((StrRange *)&local_80);
            (*pcVar11)(pOVar5);
            lVar12 = local_80;
            if (local_80 != 0) {
              LOCK();
              plVar2 = (long *)(local_80 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_80 = 0;
                Memory::free_static((void *)(lVar12 + -0x10),false);
              }
            }
            lVar12 = local_98;
            if (local_98 != 0) {
              LOCK();
              plVar2 = (long *)(local_98 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_98 = 0;
                Memory::free_static((void *)(lVar12 + -0x10),false);
              }
            }
            lVar12 = local_a0;
            if (local_a0 != 0) {
              LOCK();
              plVar2 = (long *)(local_a0 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_a0 = 0;
                Memory::free_static((void *)(lVar12 + -0x10),false);
              }
            }
            local_110 = local_110 + 1;
            local_128 = puVar4[4];
          } while (local_128 != 0);
        }
        lVar12 = local_a8;
        if (local_a8 != 0) {
          LOCK();
          plVar2 = (long *)(local_a8 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_a8 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
      }
      lVar12 = local_b8;
    }
    if (lVar12 != 0) {
      LOCK();
      plVar2 = (long *)(lVar12 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_b8 = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
    lVar12 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar2 = (long *)(local_c0 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
    CowData<String>::_unref((CowData<String> *)&local_70);
    lVar12 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar2 = (long *)(local_c8 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
  }
  else {
    operator+((char *)&local_68,(String *)"Failed to open ");
    _err_print_error("_write_to_pot","editor/pot_generator.cpp",0x68,&local_68,0,0);
    pOVar5 = local_68;
    if (local_68 != (Object *)0x0) {
      LOCK();
      pOVar1 = local_68 + -0x10;
      *(long *)pOVar1 = *(long *)pOVar1 + -1;
      UNLOCK();
      if (*(long *)pOVar1 == 0) {
        local_68 = (Object *)0x0;
        Memory::free_static(pOVar5 + -0x10,false);
      }
    }
  }
  if (((local_d0 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_d0), cVar6 != '\0')) {
    (**(code **)(*(long *)local_d0 + 0x140))(local_d0);
    Memory::free_static(local_d0,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Vector<String> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector<String>>::_copy_on_write(CowData<Vector<String>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  CowData<String> *this_00;
  ulong uVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  
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
  if (lVar2 * 0x10 != 0) {
    uVar7 = lVar2 * 0x10 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  this_00 = (CowData<String> *)(puVar5 + 3);
  lVar9 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar2;
  if (lVar2 != 0) {
    do {
      lVar8 = lVar9 * 0x10 + *(long *)this;
      *(undefined8 *)this_00 = 0;
      if (*(long *)(lVar8 + 8) != 0) {
        CowData<String>::_unref(this_00);
        if (*(long *)(lVar8 + 8) != 0) {
          plVar1 = (long *)(*(long *)(lVar8 + 8) + -0x10);
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_00101a6a;
            LOCK();
            lVar6 = *plVar1;
            bVar10 = lVar3 == lVar6;
            if (bVar10) {
              *plVar1 = lVar3 + 1;
              lVar6 = lVar3;
            }
            UNLOCK();
          } while (!bVar10);
          if (lVar6 != -1) {
            *(undefined8 *)this_00 = *(undefined8 *)(lVar8 + 8);
          }
        }
      }
LAB_00101a6a:
      lVar9 = lVar9 + 1;
      this_00 = this_00 + 0x10;
    } while (lVar2 != lVar9);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* POTGenerator::~POTGenerator() */

void __thiscall POTGenerator::~POTGenerator(POTGenerator *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  POTGenerator *pPVar4;
  long lVar5;
  void *pvVar6;
  
  pPVar4 = singleton;
  ~POTGenerator(singleton);
  Memory::free_static(pPVar4,false);
  pvVar6 = *(void **)(this + 8);
  singleton = (POTGenerator *)0x0;
  if (pvVar6 == (void *)0x0) {
    singleton = (POTGenerator *)0x0;
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar2 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar5 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar5) != 0) {
          pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar5) = 0;
          CowData<POTGenerator::MsgidData>::_unref
                    ((CowData<POTGenerator::MsgidData> *)((long)pvVar6 + 0x20));
          if (*(long *)((long)pvVar6 + 0x10) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar6 + 0x10) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)((long)pvVar6 + 0x10);
              *(undefined8 *)((long)pvVar6 + 0x10) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          Memory::free_static(pvVar6,false);
          pvVar6 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
        }
        lVar5 = lVar5 + 4;
      } while (lVar5 != (ulong)uVar2 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar6 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar6,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* CowData<POTGenerator::MsgidData>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<POTGenerator::MsgidData>::_copy_on_write(CowData<POTGenerator::MsgidData> *this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  CowData *pCVar10;
  CowData *pCVar11;
  ulong uVar12;
  CowData<char32_t> *pCVar13;
  long lVar14;
  CowData<char32_t> *this_00;
  long lVar15;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar12 = 0x10;
  if (lVar2 * 0x60 != 0) {
    uVar12 = lVar2 * 0x60 - 1;
    uVar12 = uVar12 | uVar12 >> 1;
    uVar12 = uVar12 | uVar12 >> 2;
    uVar12 = uVar12 | uVar12 >> 4;
    uVar12 = uVar12 | uVar12 >> 8;
    uVar12 = uVar12 | uVar12 >> 0x10;
    uVar12 = (uVar12 | uVar12 >> 0x20) + 0x11;
  }
  puVar7 = (undefined8 *)Memory::alloc_static(uVar12,false);
  if (puVar7 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar14 = 0;
  *puVar7 = 1;
  puVar7[1] = lVar2;
  if (lVar2 != 0) {
    this_00 = (CowData<char32_t> *)(puVar7 + 2);
    do {
      pCVar10 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar7));
      *(undefined8 *)this_00 = 0;
      if (*(long *)pCVar10 != 0) {
        CowData<char32_t>::_ref(this_00,pCVar10);
      }
      *(undefined8 *)(this_00 + 8) = 0;
      if (*(long *)(pCVar10 + 8) != 0) {
        CowData<char32_t>::_ref(this_00 + 8,pCVar10 + 8);
      }
      *(undefined8 *)(this_00 + 0x30) = 0;
      *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this_00 + 0x20) = (undefined1  [16])0x0;
      uVar12 = *(ulong *)(pCVar10 + 0x30);
      *(ulong *)(this_00 + 0x30) = uVar12;
      if ((int)(uVar12 >> 0x20) != 0) {
        uVar1 = *(uint *)(hash_table_size_primes + (uVar12 & 0xffffffff) * 4);
        uVar12 = (ulong)uVar1 * 4;
        uVar8 = Memory::alloc_static(uVar12,false);
        lVar15 = 0;
        *(undefined8 *)(this_00 + 0x28) = uVar8;
        uVar8 = Memory::alloc_static((ulong)uVar1 * 8,false);
        *(undefined8 *)(this_00 + 0x10) = uVar8;
        uVar8 = Memory::alloc_static(uVar12,false);
        *(undefined8 *)(this_00 + 0x20) = uVar8;
        uVar8 = Memory::alloc_static(uVar12,false);
        *(undefined8 *)(this_00 + 0x18) = uVar8;
        if (*(int *)(this_00 + 0x34) != 0) {
          do {
            pCVar13 = (CowData<char32_t> *)(*(long *)(this_00 + 0x10) + lVar15 * 8);
            pCVar11 = (CowData *)(lVar15 * 8 + *(long *)(pCVar10 + 0x10));
            *(undefined8 *)pCVar13 = 0;
            if (*(long *)pCVar11 != 0) {
              CowData<char32_t>::_ref(pCVar13,pCVar11);
            }
            *(undefined4 *)(*(long *)(this_00 + 0x20) + lVar15 * 4) =
                 *(undefined4 *)(*(long *)(pCVar10 + 0x20) + lVar15 * 4);
            lVar15 = lVar15 + 1;
          } while ((uint)lVar15 < *(uint *)(this_00 + 0x34));
        }
        if (uVar1 != 0) {
          lVar15 = *(long *)(pCVar10 + 0x28);
          lVar3 = *(long *)(this_00 + 0x28);
          lVar9 = 0;
          lVar4 = *(long *)(pCVar10 + 0x18);
          lVar5 = *(long *)(this_00 + 0x18);
          do {
            *(undefined4 *)(lVar3 + lVar9) = *(undefined4 *)(lVar15 + lVar9);
            *(undefined4 *)(lVar5 + lVar9) = *(undefined4 *)(lVar4 + lVar9);
            lVar9 = lVar9 + 4;
          } while (uVar12 - lVar9 != 0);
        }
      }
      *(undefined8 *)(this_00 + 0x58) = 0;
      *(undefined1 (*) [16])(this_00 + 0x38) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this_00 + 0x48) = (undefined1  [16])0x0;
      uVar12 = *(ulong *)(pCVar10 + 0x58);
      *(ulong *)(this_00 + 0x58) = uVar12;
      if ((int)(uVar12 >> 0x20) != 0) {
        uVar1 = *(uint *)(hash_table_size_primes + (uVar12 & 0xffffffff) * 4);
        uVar12 = (ulong)uVar1 * 4;
        uVar8 = Memory::alloc_static(uVar12,false);
        lVar15 = 0;
        *(undefined8 *)(this_00 + 0x50) = uVar8;
        uVar8 = Memory::alloc_static((ulong)uVar1 * 8,false);
        *(undefined8 *)(this_00 + 0x38) = uVar8;
        uVar8 = Memory::alloc_static(uVar12,false);
        *(undefined8 *)(this_00 + 0x48) = uVar8;
        uVar8 = Memory::alloc_static(uVar12,false);
        *(undefined8 *)(this_00 + 0x40) = uVar8;
        if (*(int *)(this_00 + 0x5c) != 0) {
          do {
            pCVar13 = (CowData<char32_t> *)(*(long *)(this_00 + 0x38) + lVar15 * 8);
            pCVar11 = (CowData *)(lVar15 * 8 + *(long *)(pCVar10 + 0x38));
            *(undefined8 *)pCVar13 = 0;
            if (*(long *)pCVar11 != 0) {
              CowData<char32_t>::_ref(pCVar13,pCVar11);
            }
            *(undefined4 *)(*(long *)(this_00 + 0x48) + lVar15 * 4) =
                 *(undefined4 *)(*(long *)(pCVar10 + 0x48) + lVar15 * 4);
            lVar15 = lVar15 + 1;
          } while ((uint)lVar15 < *(uint *)(this_00 + 0x5c));
        }
        if (uVar1 != 0) {
          lVar15 = *(long *)(pCVar10 + 0x50);
          lVar3 = *(long *)(this_00 + 0x50);
          lVar9 = 0;
          lVar4 = *(long *)(pCVar10 + 0x40);
          lVar5 = *(long *)(this_00 + 0x40);
          do {
            *(undefined4 *)(lVar3 + lVar9) = *(undefined4 *)(lVar15 + lVar9);
            *(undefined4 *)(lVar5 + lVar9) = *(undefined4 *)(lVar4 + lVar9);
            lVar9 = lVar9 + 4;
          } while (uVar12 - lVar9 != 0);
        }
      }
      lVar14 = lVar14 + 1;
      this_00 = this_00 + 0x60;
    } while (lVar2 != lVar14);
  }
  _unref(this);
  *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar7 + 2);
  return;
}



/* POTGenerator::_add_new_msgid(String const&, String const&, String const&, String const&, String
   const&) */

void __thiscall
POTGenerator::_add_new_msgid
          (POTGenerator *this,String *param_1,String *param_2,String *param_3,String *param_4,
          String *param_5)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined4 uVar4;
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
  int iVar15;
  uint uVar16;
  long lVar17;
  undefined8 uVar18;
  CowData<char32_t> *pCVar19;
  undefined4 *puVar20;
  ulong uVar21;
  undefined4 *puVar22;
  uint uVar23;
  CowData<char32_t> *pCVar24;
  long lVar25;
  long lVar26;
  CowData *pCVar27;
  void *pvVar28;
  long lVar29;
  long in_FS_OFFSET;
  bool bVar30;
  uint uVar31;
  uint uVar32;
  String *local_148;
  undefined8 local_140;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  ulong local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  ulong local_b0;
  long local_a8;
  long local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulong local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  ulong local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    lVar17 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar16 = String::hash();
    uVar3 = CONCAT44(0,uVar32);
    lVar25 = *(long *)(this + 0x10);
    uVar31 = 1;
    if (uVar16 != 0) {
      uVar31 = uVar16;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (ulong)uVar31 * lVar17;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar3;
    lVar29 = SUB168(auVar5 * auVar9,8);
    uVar16 = *(uint *)(lVar25 + lVar29 * 4);
    iVar15 = SUB164(auVar5 * auVar9,8);
    if (uVar16 != 0) {
      uVar23 = 0;
      do {
        if (uVar31 == uVar16) {
          cVar14 = String::operator==((String *)(*(long *)(*(long *)(this + 8) + lVar29 * 8) + 0x10)
                                      ,param_1);
          if (cVar14 != '\0') {
            lVar25 = HashMap<String,Vector<POTGenerator::MsgidData>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<POTGenerator::MsgidData>>>>
                     ::operator[]((HashMap<String,Vector<POTGenerator::MsgidData>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<POTGenerator::MsgidData>>>>
                                   *)this,param_1);
            lVar17 = *(long *)(lVar25 + 8);
            if (lVar17 != 0) {
              lVar29 = 0;
              goto LAB_001029e0;
            }
            break;
          }
          lVar25 = *(long *)(this + 0x10);
        }
        uVar23 = uVar23 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(iVar15 + 1) * lVar17;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar3;
        lVar29 = SUB168(auVar6 * auVar10,8);
        uVar16 = *(uint *)(lVar25 + lVar29 * 4);
        iVar15 = SUB164(auVar6 * auVar10,8);
        if ((uVar16 == 0) ||
           (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar16 * lVar17, auVar11._8_8_ = 0,
           auVar11._0_8_ = uVar3, auVar8._8_8_ = 0,
           auVar8._0_8_ = (ulong)((uVar32 + iVar15) - SUB164(auVar7 * auVar11,8)) * lVar17,
           auVar12._8_8_ = 0, auVar12._0_8_ = uVar3, SUB164(auVar8 * auVar12,8) < uVar23)) break;
      } while( true );
    }
  }
  goto LAB_00102002;
LAB_001029e0:
  do {
    if (*(long *)(lVar17 + -8) <= lVar29) break;
    cVar14 = String::operator==((String *)(lVar17 + lVar29 * 0x60),param_2);
    lVar17 = *(long *)(lVar25 + 8);
    if (cVar14 != '\0') {
      if (lVar17 == 0) {
        lVar26 = 0;
LAB_00102c49:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar29,lVar26,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar13 = (code *)invalidInstructionException();
        (*pcVar13)();
      }
      lVar26 = *(long *)(lVar17 + -8);
      if (lVar26 <= lVar29) goto LAB_00102c49;
      lVar17 = lVar17 + lVar29 * 0x60;
      lVar26 = *(long *)(lVar17 + 8);
      if ((((lVar26 != 0) && (1 < *(uint *)(lVar26 + -8))) && (*(long *)param_3 != 0)) &&
         ((1 < *(uint *)(*(long *)param_3 + -8) &&
          (cVar14 = String::operator!=((String *)(lVar17 + 8),param_3), cVar14 != '\0')))) {
        _err_print_error("_add_new_msgid","editor/pot_generator.cpp",0xdb,
                         "Redefinition of plural message (msgid_plural), under the same message (msgid) and context (msgctxt)"
                         ,0,1);
      }
      if ((*(long *)param_4 == 0) || (*(uint *)(*(long *)param_4 + -8) < 2)) {
LAB_00102a5b:
        if ((*(long *)param_5 == 0) || (*(uint *)(*(long *)param_5 + -8) < 2)) goto LAB_0010262b;
        if (*(long *)(lVar25 + 8) != 0) {
          lVar17 = *(long *)(*(long *)(lVar25 + 8) + -8);
          if (lVar17 <= lVar29) goto LAB_00102c05;
          CowData<POTGenerator::MsgidData>::_copy_on_write
                    ((CowData<POTGenerator::MsgidData> *)(lVar25 + 8));
          HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                    ((String *)&local_a8);
          goto LAB_0010262b;
        }
      }
      else if (*(long *)(lVar25 + 8) != 0) {
        lVar17 = *(long *)(*(long *)(lVar25 + 8) + -8);
        if (lVar17 <= lVar29) goto LAB_00102c05;
        CowData<POTGenerator::MsgidData>::_copy_on_write
                  ((CowData<POTGenerator::MsgidData> *)(lVar25 + 8));
        HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                  ((String *)&local_a8);
        goto LAB_00102a5b;
      }
      lVar17 = 0;
LAB_00102c05:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,lVar29,lVar17,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar13 = (code *)invalidInstructionException();
      (*pcVar13)();
    }
    lVar29 = lVar29 + 1;
  } while (lVar17 != 0);
LAB_00102002:
  local_108 = (undefined1  [16])0x0;
  local_d8 = _LC1;
  local_b0 = _LC1;
  lVar17 = *(long *)param_2;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  plVar1 = (long *)(lVar17 + -0x10);
  local_d0 = (undefined1  [16])0x0;
  local_c0 = (undefined1  [16])0x0;
  if (lVar17 != 0) {
    do {
      lVar17 = *plVar1;
      if (lVar17 == 0) goto LAB_0010206b;
      LOCK();
      lVar25 = *plVar1;
      bVar30 = lVar17 == lVar25;
      if (bVar30) {
        *plVar1 = lVar17 + 1;
        lVar25 = lVar17;
      }
      UNLOCK();
    } while (!bVar30);
    if (lVar25 != -1) {
      local_108._8_8_ = 0;
      local_108._0_8_ = *(ulong *)param_2;
    }
LAB_0010206b:
    lVar17 = local_108._8_8_;
  }
  if (lVar17 != *(long *)param_3) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_108 + 8),(CowData *)param_3);
  }
  if ((*(long *)param_4 != 0) && (1 < *(uint *)(*(long *)param_4 + -8))) {
    HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
              ((String *)&local_a8);
  }
  local_148 = (String *)&local_a8;
  if ((*(long *)param_5 != 0) && (1 < *(uint *)(*(long *)param_5 + -8))) {
    HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert(local_148);
  }
  lVar17 = HashMap<String,Vector<POTGenerator::MsgidData>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<POTGenerator::MsgidData>>>>
           ::operator[]((HashMap<String,Vector<POTGenerator::MsgidData>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<POTGenerator::MsgidData>>>>
                         *)this,param_1);
  local_a8 = 0;
  if (local_108._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_148,(CowData *)local_108);
  }
  local_a0 = 0;
  if (local_108._8_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)(local_108 + 8));
  }
  local_98 = (undefined1  [16])0x0;
  local_140 = local_d8;
  uVar32 = (uint)(local_d8 >> 0x20);
  local_78 = local_d8;
  local_88 = (undefined1  [16])0x0;
  if (uVar32 != 0) {
    uVar31 = *(uint *)(hash_table_size_primes + (local_d8 & 0xffffffff) * 4);
    uVar3 = (ulong)uVar31 * 4;
    lVar25 = Memory::alloc_static(uVar3,false);
    local_88._8_8_ = lVar25;
    pCVar19 = (CowData<char32_t> *)Memory::alloc_static((ulong)uVar31 * 8,false);
    local_98._0_8_ = pCVar19;
    puVar22 = (undefined4 *)Memory::alloc_static(uVar3,false);
    local_88._0_8_ = puVar22;
    lVar29 = Memory::alloc_static(uVar3,false);
    local_98._8_8_ = lVar29;
    pCVar24 = pCVar19 + (ulong)uVar32 * 8;
    puVar20 = (undefined4 *)local_e8._0_8_;
    pCVar27 = (CowData *)local_f8._0_8_;
    do {
      *(undefined8 *)pCVar19 = 0;
      if (*(long *)pCVar27 != 0) {
        CowData<char32_t>::_ref(pCVar19,pCVar27);
      }
      uVar4 = *puVar20;
      pCVar19 = pCVar19 + 8;
      pCVar27 = pCVar27 + 8;
      puVar20 = puVar20 + 1;
      *puVar22 = uVar4;
      puVar22 = puVar22 + 1;
    } while (pCVar19 != pCVar24);
    if (uVar31 != 0) {
      uVar21 = 0;
      do {
        *(undefined4 *)(lVar25 + uVar21) = *(undefined4 *)(local_e8._8_8_ + uVar21);
        *(undefined4 *)(lVar29 + uVar21) = *(undefined4 *)(local_f8._8_8_ + uVar21);
        uVar21 = uVar21 + 4;
      } while (uVar21 != uVar3);
    }
  }
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  local_50 = local_b0;
  uVar31 = (uint)(local_b0 >> 0x20);
  if (uVar31 != 0) {
    uVar16 = *(uint *)(hash_table_size_primes + (local_b0 & 0xffffffff) * 4);
    uVar3 = (ulong)uVar16 * 4;
    lVar25 = Memory::alloc_static(uVar3,false);
    local_60._8_8_ = lVar25;
    pCVar19 = (CowData<char32_t> *)Memory::alloc_static((ulong)uVar16 * 8,false);
    local_70._0_8_ = pCVar19;
    puVar20 = (undefined4 *)Memory::alloc_static(uVar3,false);
    pCVar24 = pCVar19 + (ulong)uVar31 * 8;
    local_60._0_8_ = puVar20;
    lVar29 = Memory::alloc_static(uVar3,false);
    local_70._8_8_ = lVar29;
    puVar22 = (undefined4 *)local_c0._0_8_;
    pCVar27 = (CowData *)local_d0._0_8_;
    do {
      *(undefined8 *)pCVar19 = 0;
      if (*(long *)pCVar27 != 0) {
        CowData<char32_t>::_ref(pCVar19,pCVar27);
      }
      uVar4 = *puVar22;
      pCVar19 = pCVar19 + 8;
      pCVar27 = pCVar27 + 8;
      puVar22 = puVar22 + 1;
      *puVar20 = uVar4;
      puVar20 = puVar20 + 1;
    } while (pCVar24 != pCVar19);
    if (uVar16 != 0) {
      uVar21 = 0;
      do {
        *(undefined4 *)(lVar25 + uVar21) = *(undefined4 *)(local_c0._8_8_ + uVar21);
        *(undefined4 *)(lVar29 + uVar21) = *(undefined4 *)(local_d0._8_8_ + uVar21);
        uVar21 = uVar21 + 4;
      } while (uVar3 != uVar21);
    }
  }
  if (*(long *)(lVar17 + 8) == 0) {
    lVar25 = 1;
  }
  else {
    lVar25 = *(long *)(*(long *)(lVar17 + 8) + -8) + 1;
  }
  iVar15 = CowData<POTGenerator::MsgidData>::resize<false>
                     ((CowData<POTGenerator::MsgidData> *)(lVar17 + 8),lVar25);
  if (iVar15 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    goto LAB_00102617;
  }
  if (*(long *)(lVar17 + 8) == 0) {
    lVar29 = -1;
    lVar25 = 0;
  }
  else {
    lVar25 = *(long *)(*(long *)(lVar17 + 8) + -8);
    lVar29 = lVar25 + -1;
    if (-1 < lVar29) {
      CowData<POTGenerator::MsgidData>::_copy_on_write
                ((CowData<POTGenerator::MsgidData> *)(lVar17 + 8));
      pCVar24 = (CowData<char32_t> *)(lVar29 * 0x60 + *(long *)(lVar17 + 8));
      if (*(long *)pCVar24 != local_a8) {
        CowData<char32_t>::_ref(pCVar24,(CowData *)local_148);
      }
      if (*(long *)(pCVar24 + 8) != local_a0) {
        CowData<char32_t>::_ref(pCVar24 + 8,(CowData *)&local_a0);
      }
      pvVar28 = *(void **)(pCVar24 + 0x10);
      uVar3 = local_140;
      if (pvVar28 != (void *)0x0) {
        if ((*(int *)(pCVar24 + 0x34) != 0) &&
           ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(pCVar24 + 0x30) * 4) == 0 ||
            (memset(*(void **)(pCVar24 + 0x28),0,
                    (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(pCVar24 + 0x30) * 4)
                    * 4), *(int *)(pCVar24 + 0x34) != 0)))) {
          lVar17 = 0;
          do {
            plVar1 = (long *)((long)pvVar28 + lVar17 * 8);
            if (*plVar1 != 0) {
              LOCK();
              plVar2 = (long *)(*plVar1 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                lVar25 = *plVar1;
                *plVar1 = 0;
                Memory::free_static((void *)(lVar25 + -0x10),false);
              }
              pvVar28 = *(void **)(pCVar24 + 0x10);
            }
            lVar17 = lVar17 + 1;
          } while ((uint)lVar17 < *(uint *)(pCVar24 + 0x34));
          *(undefined4 *)(pCVar24 + 0x34) = 0;
          local_140 = local_78;
          uVar3 = local_140;
          local_140._4_4_ = (uint)(local_78 >> 0x20);
          uVar32 = local_140._4_4_;
          if (pvVar28 == (void *)0x0) goto LAB_00102343;
        }
        local_140 = uVar3;
        Memory::free_static(pvVar28,false);
        Memory::free_static(*(void **)(pCVar24 + 0x20),false);
        Memory::free_static(*(void **)(pCVar24 + 0x18),false);
        Memory::free_static(*(void **)(pCVar24 + 0x28),false);
        *(undefined1 (*) [16])(pCVar24 + 0x10) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pCVar24 + 0x20) = (undefined1  [16])0x0;
        uVar3 = local_140;
      }
LAB_00102343:
      local_140 = uVar3;
      *(ulong *)(pCVar24 + 0x30) = local_140;
      if (uVar32 != 0) {
        uVar32 = *(uint *)(hash_table_size_primes + (local_140 & 0xffffffff) * 4);
        uVar3 = (ulong)uVar32 * 4;
        uVar18 = Memory::alloc_static(uVar3,false);
        *(undefined8 *)(pCVar24 + 0x28) = uVar18;
        uVar18 = Memory::alloc_static((ulong)uVar32 * 8,false);
        *(undefined8 *)(pCVar24 + 0x10) = uVar18;
        uVar18 = Memory::alloc_static(uVar3,false);
        *(undefined8 *)(pCVar24 + 0x20) = uVar18;
        uVar18 = Memory::alloc_static(uVar3,false);
        *(undefined8 *)(pCVar24 + 0x18) = uVar18;
        if (*(int *)(pCVar24 + 0x34) != 0) {
          uVar18 = local_88._0_8_;
          lVar17 = 0;
          pCVar27 = (CowData *)local_98._0_8_;
          do {
            pCVar19 = (CowData<char32_t> *)(*(long *)(pCVar24 + 0x10) + lVar17 * 8);
            *(undefined8 *)pCVar19 = 0;
            if (*(long *)pCVar27 != 0) {
              CowData<char32_t>::_ref(pCVar19,pCVar27);
            }
            pCVar27 = pCVar27 + 8;
            *(undefined4 *)(*(long *)(pCVar24 + 0x20) + lVar17 * 4) =
                 *(undefined4 *)(uVar18 + lVar17 * 4);
            lVar17 = lVar17 + 1;
          } while ((uint)lVar17 < *(uint *)(pCVar24 + 0x34));
        }
        if (uVar32 != 0) {
          lVar17 = *(long *)(pCVar24 + 0x28);
          lVar29 = 0;
          lVar25 = *(long *)(pCVar24 + 0x18);
          do {
            *(undefined4 *)(lVar17 + lVar29) = *(undefined4 *)(local_88._8_8_ + lVar29);
            *(undefined4 *)(lVar25 + lVar29) = *(undefined4 *)(local_98._8_8_ + lVar29);
            lVar29 = lVar29 + 4;
          } while (uVar3 - lVar29 != 0);
        }
      }
      pvVar28 = *(void **)(pCVar24 + 0x38);
      if (pvVar28 != (void *)0x0) {
        if ((*(int *)(pCVar24 + 0x5c) != 0) &&
           ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(pCVar24 + 0x58) * 4) == 0 ||
            (memset(*(void **)(pCVar24 + 0x50),0,
                    (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(pCVar24 + 0x58) * 4)
                    * 4), *(int *)(pCVar24 + 0x5c) != 0)))) {
          lVar17 = 0;
          do {
            plVar1 = (long *)((long)pvVar28 + lVar17 * 8);
            if (*plVar1 != 0) {
              LOCK();
              plVar2 = (long *)(*plVar1 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                lVar25 = *plVar1;
                *plVar1 = 0;
                Memory::free_static((void *)(lVar25 + -0x10),false);
              }
              pvVar28 = *(void **)(pCVar24 + 0x38);
            }
            lVar17 = lVar17 + 1;
          } while ((uint)lVar17 < *(uint *)(pCVar24 + 0x5c));
          *(undefined4 *)(pCVar24 + 0x5c) = 0;
          if (pvVar28 == (void *)0x0) goto LAB_0010250b;
        }
        Memory::free_static(pvVar28,false);
        Memory::free_static(*(void **)(pCVar24 + 0x48),false);
        Memory::free_static(*(void **)(pCVar24 + 0x40),false);
        Memory::free_static(*(void **)(pCVar24 + 0x50),false);
        *(undefined1 (*) [16])(pCVar24 + 0x38) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pCVar24 + 0x48) = (undefined1  [16])0x0;
      }
LAB_0010250b:
      *(ulong *)(pCVar24 + 0x58) = local_50;
      if ((int)(local_50 >> 0x20) != 0) {
        uVar32 = *(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4);
        uVar3 = (ulong)uVar32 * 4;
        uVar18 = Memory::alloc_static(uVar3,false);
        *(undefined8 *)(pCVar24 + 0x50) = uVar18;
        uVar18 = Memory::alloc_static((ulong)uVar32 * 8,false);
        *(undefined8 *)(pCVar24 + 0x38) = uVar18;
        uVar18 = Memory::alloc_static(uVar3,false);
        *(undefined8 *)(pCVar24 + 0x48) = uVar18;
        uVar18 = Memory::alloc_static(uVar3,false);
        *(undefined8 *)(pCVar24 + 0x40) = uVar18;
        if (*(int *)(pCVar24 + 0x5c) != 0) {
          uVar18 = local_60._0_8_;
          lVar17 = 0;
          pCVar27 = (CowData *)local_70._0_8_;
          do {
            pCVar19 = (CowData<char32_t> *)(*(long *)(pCVar24 + 0x38) + lVar17 * 8);
            *(undefined8 *)pCVar19 = 0;
            if (*(long *)pCVar27 != 0) {
              CowData<char32_t>::_ref(pCVar19,pCVar27);
            }
            pCVar27 = pCVar27 + 8;
            *(undefined4 *)(*(long *)(pCVar24 + 0x48) + lVar17 * 4) =
                 *(undefined4 *)(uVar18 + lVar17 * 4);
            lVar17 = lVar17 + 1;
          } while ((uint)lVar17 < *(uint *)(pCVar24 + 0x5c));
        }
        if (uVar32 != 0) {
          lVar17 = *(long *)(pCVar24 + 0x50);
          lVar29 = 0;
          lVar25 = *(long *)(pCVar24 + 0x40);
          do {
            *(undefined4 *)(lVar17 + lVar29) = *(undefined4 *)(local_60._8_8_ + lVar29);
            *(undefined4 *)(lVar25 + lVar29) = *(undefined4 *)(local_70._8_8_ + lVar29);
            lVar29 = lVar29 + 4;
          } while (uVar3 - lVar29 != 0);
        }
      }
      goto LAB_00102617;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar29,lVar25,"p_index","size()","",false,false
            );
LAB_00102617:
  MsgidData::~MsgidData((MsgidData *)local_148);
  MsgidData::~MsgidData((MsgidData *)local_108);
LAB_0010262b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* POTGenerator::generate_pot(String const&) */

void __thiscall POTGenerator::generate_pot(POTGenerator *this,String *param_1)

{
  Object *pOVar1;
  String *pSVar2;
  uint uVar3;
  void *pvVar4;
  code *pcVar5;
  Object *pOVar6;
  char cVar7;
  String *pSVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long in_FS_OFFSET;
  bool bVar15;
  long local_d0;
  long local_a0;
  long local_98;
  long local_90;
  Variant local_88 [8];
  long local_80;
  undefined1 local_78 [8];
  long local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_68,"internationalization/locale/translations_pot_files",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  Variant::operator_cast_to_Vector(local_88);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
    StringName::unref();
  }
  if (local_80 == 0) {
    _err_print_error("generate_pot","editor/pot_generator.cpp",0x3d,
                     "No files selected for POT generation.",0,1);
LAB_001033d8:
    CowData<String>::_unref((CowData<String> *)&local_80);
    goto LAB_001033e2;
  }
  if ((*(long *)(this + 8) == 0) || (*(int *)(this + 0x2c) == 0)) {
LAB_00102e11:
    local_d0 = 0;
    do {
      lVar12 = local_a0;
      if (*(long *)(local_80 + -8) <= local_d0) break;
      local_70 = 0;
      pSVar2 = (String *)(local_80 + local_d0 * 8);
      String::get_extension();
      pSVar8 = (String *)EditorTranslationParser::get_singleton();
      cVar7 = EditorTranslationParser::can_parse(pSVar8);
      if (cVar7 == '\0') {
        local_90 = 0;
        local_60 = 0x12;
        local_68 = (Object *)0x10393d;
        String::parse_latin1((StrRange *)&local_90);
        operator+((char *)&local_98,(String *)"Unrecognized file extension ");
        String::operator+((String *)&local_68,(String *)&local_98);
        _err_print_error("generate_pot","editor/pot_generator.cpp",0x4e,(StringName *)&local_68,0,0)
        ;
        pOVar6 = local_68;
        if (local_68 != (Object *)0x0) {
          LOCK();
          pOVar1 = local_68 + -0x10;
          *(long *)pOVar1 = *(long *)pOVar1 + -1;
          UNLOCK();
          if (*(long *)pOVar1 == 0) {
            local_68 = (Object *)0x0;
            Memory::free_static(pOVar6 + -0x10,false);
          }
        }
        lVar12 = local_98;
        if (local_98 != 0) {
          LOCK();
          plVar11 = (long *)(local_98 + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            local_98 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        lVar12 = local_90;
        if (local_90 != 0) {
          LOCK();
          plVar11 = (long *)(local_90 + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            local_90 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        if (local_a0 != 0) {
          LOCK();
          plVar11 = (long *)(local_a0 + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            Memory::free_static((void *)(local_a0 + -0x10),false);
          }
        }
        CowData<Vector<String>>::_unref((CowData<Vector<String>> *)&local_70);
        goto LAB_001033d8;
      }
      EditorTranslationParser::get_singleton();
      EditorTranslationParser::get_parser((String *)&local_68);
      (**(code **)(*(long *)local_68 + 0x150))(local_68,pSVar2,local_78);
      if (((local_68 != (Object *)0x0) &&
          (cVar7 = RefCounted::unreference(), pOVar6 = local_68, cVar7 != '\0')) &&
         (cVar7 = predelete_handler(local_68), cVar7 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
      CowData<Vector<String>>::_copy_on_write((CowData<Vector<String>> *)&local_70);
      lVar13 = local_70;
      CowData<Vector<String>>::_copy_on_write((CowData<Vector<String>> *)&local_70);
      lVar14 = local_70;
      if (local_70 != 0) {
        lVar14 = local_70 + *(long *)(local_70 + -8) * 0x10;
      }
      for (; lVar13 != lVar14; lVar13 = lVar13 + 0x10) {
        pSVar8 = *(String **)(lVar13 + 8);
        if (pSVar8 != (String *)0x0) {
          lVar9 = *(long *)(pSVar8 + -8);
          local_98 = 0;
          if (lVar9 < 2) {
LAB_001030a4:
            local_90 = 0;
LAB_00102f7e:
            if (pSVar8 != (String *)0x0) goto LAB_00102f87;
LAB_001030e9:
            local_68 = (Object *)0x0;
LAB_001030f2:
            lVar9 = 0;
          }
          else {
            if (*(long *)(pSVar8 + 8) != 0) {
              plVar11 = (long *)(*(long *)(pSVar8 + 8) + -0x10);
              do {
                lVar9 = *plVar11;
                if (lVar9 == 0) goto LAB_00102f27;
                LOCK();
                lVar10 = *plVar11;
                bVar15 = lVar9 == lVar10;
                if (bVar15) {
                  *plVar11 = lVar9 + 1;
                  lVar10 = lVar9;
                }
                UNLOCK();
              } while (!bVar15);
              if (lVar10 != -1) {
                local_98 = *(long *)(pSVar8 + 8);
              }
LAB_00102f27:
              pSVar8 = *(String **)(lVar13 + 8);
              if (pSVar8 != (String *)0x0) {
                lVar9 = *(long *)(pSVar8 + -8);
                goto LAB_00102f38;
              }
              local_90 = 0;
              goto LAB_001030e9;
            }
LAB_00102f38:
            if (lVar9 < 3) goto LAB_001030a4;
            local_90 = 0;
            if (*(long *)(pSVar8 + 0x10) != 0) {
              plVar11 = (long *)(*(long *)(pSVar8 + 0x10) + -0x10);
              do {
                lVar9 = *plVar11;
                if (lVar9 == 0) goto LAB_00102f7a;
                LOCK();
                lVar10 = *plVar11;
                bVar15 = lVar9 == lVar10;
                if (bVar15) {
                  *plVar11 = lVar9 + 1;
                  lVar10 = lVar9;
                }
                UNLOCK();
              } while (!bVar15);
              if (lVar10 != -1) {
                local_90 = *(long *)(pSVar8 + 0x10);
              }
LAB_00102f7a:
              pSVar8 = *(String **)(lVar13 + 8);
              goto LAB_00102f7e;
            }
LAB_00102f87:
            local_68 = (Object *)0x0;
            if (*(long *)(pSVar8 + -8) < 4) {
LAB_00102fca:
              if (pSVar8 == (String *)0x0) goto LAB_001030f2;
            }
            else if (*(long *)(pSVar8 + 0x18) != 0) {
              plVar11 = (long *)(*(long *)(pSVar8 + 0x18) + -0x10);
              do {
                lVar9 = *plVar11;
                if (lVar9 == 0) goto LAB_00102fc6;
                LOCK();
                lVar10 = *plVar11;
                bVar15 = lVar9 == lVar10;
                if (bVar15) {
                  *plVar11 = lVar9 + 1;
                  lVar10 = lVar9;
                }
                UNLOCK();
              } while (!bVar15);
              if (lVar10 != -1) {
                local_68 = *(Object **)(pSVar8 + 0x18);
              }
LAB_00102fc6:
              pSVar8 = *(String **)(lVar13 + 8);
              goto LAB_00102fca;
            }
            lVar9 = *(long *)(pSVar8 + -8);
            if (0 < lVar9) {
              _add_new_msgid(this,pSVar8,(String *)&local_98,(String *)&local_90,pSVar2,
                             (String *)&local_68);
              pOVar6 = local_68;
              if (local_68 != (Object *)0x0) {
                LOCK();
                pOVar1 = local_68 + -0x10;
                *(long *)pOVar1 = *(long *)pOVar1 + -1;
                UNLOCK();
                if (*(long *)pOVar1 == 0) {
                  local_68 = (Object *)0x0;
                  Memory::free_static(pOVar6 + -0x10,false);
                }
              }
              lVar9 = local_90;
              if (local_90 != 0) {
                LOCK();
                plVar11 = (long *)(local_90 + -0x10);
                *plVar11 = *plVar11 + -1;
                UNLOCK();
                if (*plVar11 == 0) {
                  local_90 = 0;
                  Memory::free_static((void *)(lVar9 + -0x10),false);
                }
              }
              lVar9 = local_98;
              if (local_98 != 0) {
                LOCK();
                plVar11 = (long *)(local_98 + -0x10);
                *plVar11 = *plVar11 + -1;
                UNLOCK();
                if (*plVar11 == 0) {
                  local_98 = 0;
                  Memory::free_static((void *)(lVar9 + -0x10),false);
                }
              }
              goto LAB_00103077;
            }
          }
          lVar12 = 0;
          goto LAB_00103112;
        }
        _err_print_error("generate_pot","editor/pot_generator.cpp",0x53);
LAB_00103077:
      }
      if (local_a0 != 0) {
        LOCK();
        plVar11 = (long *)(local_a0 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar12 + -0x10),false);
        }
      }
      CowData<Vector<String>>::_unref((CowData<Vector<String>> *)&local_70);
      local_d0 = local_d0 + 1;
    } while (local_80 != 0);
  }
  else {
    uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar3 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      goto LAB_00102e11;
    }
    lVar12 = 0;
    do {
      if (*(int *)(*(long *)(this + 0x10) + lVar12) != 0) {
        *(int *)(*(long *)(this + 0x10) + lVar12) = 0;
        pvVar4 = *(void **)(*(long *)(this + 8) + lVar12 * 2);
        CowData<POTGenerator::MsgidData>::_unref
                  ((CowData<POTGenerator::MsgidData> *)((long)pvVar4 + 0x20));
        if (*(long *)((long)pvVar4 + 0x10) != 0) {
          LOCK();
          plVar11 = (long *)(*(long *)((long)pvVar4 + 0x10) + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            lVar13 = *(long *)((long)pvVar4 + 0x10);
            *(undefined8 *)((long)pvVar4 + 0x10) = 0;
            Memory::free_static((void *)(lVar13 + -0x10),false);
          }
        }
        Memory::free_static(pvVar4,false);
        *(undefined8 *)(*(long *)(this + 8) + lVar12 * 2) = 0;
      }
      lVar12 = lVar12 + 4;
    } while ((ulong)uVar3 << 2 != lVar12);
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    if (local_80 != 0) goto LAB_00102e11;
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_68,
             "internationalization/locale/translation_add_builtin_strings_to_pot",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  bVar15 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
    StringName::unref();
  }
  if (bVar15) {
    get_extractable_message_list();
    CowData<Vector<String>>::_copy_on_write((CowData<Vector<String>> *)&local_70);
    lVar12 = local_70;
    CowData<Vector<String>>::_copy_on_write((CowData<Vector<String>> *)&local_70);
    lVar13 = local_70;
    if (local_70 != 0) {
      lVar13 = local_70 + *(long *)(local_70 + -8) * 0x10;
    }
    for (; lVar12 != lVar13; lVar12 = lVar12 + 0x10) {
      local_68 = (Object *)&_LC0;
      local_90 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_90);
      local_68 = (Object *)&_LC0;
      local_98 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_98);
      pSVar2 = *(String **)(lVar12 + 8);
      if (pSVar2 == (String *)0x0) {
        lVar9 = 0;
LAB_0010336d:
        lVar12 = 2;
LAB_00103112:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar12,lVar9,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar9 = *(long *)(pSVar2 + -8);
      if (lVar9 < 3) goto LAB_0010336d;
      _add_new_msgid(this,pSVar2,pSVar2 + 8,pSVar2 + 0x10,(String *)&local_98,(String *)&local_90);
      lVar14 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar11 = (long *)(local_98 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
      }
      lVar14 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar11 = (long *)(local_90 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
      }
    }
    CowData<Vector<String>>::_unref((CowData<Vector<String>> *)&local_70);
  }
  _write_to_pot(this,param_1);
  CowData<String>::_unref((CowData<String> *)&local_80);
LAB_001033e2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* POTGenerator::MsgidData::~MsgidData() */

void __thiscall POTGenerator::MsgidData::~MsgidData(MsgidData *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 0x38);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x5c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x58) * 4) != 0) {
        memset(*(void **)(this + 0x50),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x58) * 4) << 2);
        if (*(int *)(this + 0x5c) == 0) goto LAB_00103700;
      }
      lVar4 = 0;
      do {
        plVar2 = (long *)((long)pvVar5 + lVar4 * 8);
        if (*plVar2 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar3 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
          pvVar5 = *(void **)(this + 0x38);
        }
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < *(uint *)(this + 0x5c));
      *(undefined4 *)(this + 0x5c) = 0;
      if (pvVar5 == (void *)0x0) goto LAB_00103646;
    }
LAB_00103700:
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x48),false);
    Memory::free_static(*(void **)(this + 0x40),false);
    Memory::free_static(*(void **)(this + 0x50),false);
  }
LAB_00103646:
  pvVar5 = *(void **)(this + 0x10);
  if (pvVar5 == (void *)0x0) goto LAB_001036d2;
  if (*(int *)(this + 0x34) != 0) {
    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4) != 0) {
      memset(*(void **)(this + 0x28),0,
             (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4) << 2);
      if (*(int *)(this + 0x34) == 0) goto LAB_00103730;
    }
    lVar4 = 0;
    do {
      plVar2 = (long *)((long)pvVar5 + lVar4 * 8);
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
        pvVar5 = *(void **)(this + 0x10);
      }
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(this + 0x34));
    *(undefined4 *)(this + 0x34) = 0;
    if (pvVar5 == (void *)0x0) goto LAB_001036d2;
  }
LAB_00103730:
  Memory::free_static(pvVar5,false);
  Memory::free_static(*(void **)(this + 0x20),false);
  Memory::free_static(*(void **)(this + 0x18),false);
  Memory::free_static(*(void **)(this + 0x28),false);
LAB_001036d2:
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar2 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      lVar4 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (*(long *)this != 0) {
    LOCK();
    plVar2 = (long *)(*(long *)this + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
    */

String * HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                   (String *param_1)

{
  CowData<char32_t> *this;
  void *pvVar1;
  void *pvVar2;
  long lVar3;
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
  char cVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  uint *puVar36;
  int iVar37;
  uint uVar38;
  String *in_RDX;
  ulong uVar39;
  long lVar40;
  long *in_RSI;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  undefined4 uVar44;
  uint uVar45;
  uint uVar46;
  uint local_88;
  
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar32 = (ulong)uVar29 * 4;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[3] = lVar33;
    lVar33 = Memory::alloc_static((ulong)uVar29 * 8,false);
    *in_RSI = lVar33;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[2] = lVar33;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[1] = lVar33;
    if (uVar29 != 0) {
      memset((void *)in_RSI[3],0,uVar32);
    }
    iVar37 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_00103a6c;
  }
  else {
    iVar37 = *(int *)((long)in_RSI + 0x24);
LAB_00103a6c:
    if (iVar37 != 0) {
      uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar45 = String::hash();
      uVar32 = CONCAT44(0,uVar30);
      lVar41 = in_RSI[3];
      uVar38 = 1;
      if (uVar45 != 0) {
        uVar38 = uVar45;
      }
      uVar46 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar38 * lVar33;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar32;
      lVar40 = SUB168(auVar12 * auVar24,8);
      uVar45 = *(uint *)(lVar41 + lVar40 * 4);
      iVar37 = SUB164(auVar12 * auVar24,8);
      if (uVar45 == 0) {
        iVar37 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        do {
          if (uVar38 == uVar45) {
            cVar28 = String::operator==((String *)
                                        (*in_RSI + (ulong)*(uint *)(in_RSI[1] + lVar40 * 4) * 8),
                                        in_RDX);
            if (cVar28 != '\0') {
              iVar37 = *(int *)((long)in_RSI + 0x24);
              lVar33 = *in_RSI;
              iVar31 = *(int *)(in_RSI[1] + lVar40 * 4);
              goto LAB_00103de9;
            }
            lVar41 = in_RSI[3];
          }
          uVar46 = uVar46 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar37 + 1) * lVar33;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar32;
          lVar40 = SUB168(auVar13 * auVar25,8);
          uVar45 = *(uint *)(lVar41 + lVar40 * 4);
          iVar37 = SUB164(auVar13 * auVar25,8);
        } while ((uVar45 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar45 * lVar33, auVar26._8_8_ = 0,
                auVar26._0_8_ = uVar32, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar30 + iVar37) - SUB164(auVar14 * auVar26,8)) * lVar33,
                auVar27._8_8_ = 0, auVar27._0_8_ = uVar32, uVar46 <= SUB164(auVar15 * auVar27,8)));
        iVar37 = *(int *)((long)in_RSI + 0x24);
      }
    }
  }
  if ((float)uVar29 * __LC3 < (float)(iVar37 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar37 = *(int *)((long)in_RSI + 0x24);
      lVar33 = *in_RSI;
      iVar31 = -1;
      goto LAB_00103de9;
    }
    uVar29 = (int)in_RSI[4] + 1;
    uVar32 = (ulong)uVar29;
    if (uVar29 < 2) {
      uVar32 = 2;
    }
    uVar29 = *(uint *)(hash_table_size_primes + uVar32 * 4);
    *(int *)(in_RSI + 4) = (int)uVar32;
    pvVar1 = (void *)in_RSI[3];
    uVar32 = (ulong)uVar29 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[3] = lVar33;
    lVar33 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar29 * 8,false);
    *in_RSI = lVar33;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[2] = lVar33;
    lVar33 = Memory::realloc_static((void *)in_RSI[1],uVar32,false);
    in_RSI[1] = lVar33;
    if (uVar29 != 0) {
      memset((void *)in_RSI[3],0,uVar32);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar32 = 0;
      lVar41 = in_RSI[3];
      lVar40 = in_RSI[2];
      do {
        uVar43 = uVar32 & 0xffffffff;
        uVar44 = (undefined4)uVar32;
        uVar45 = 0;
        uVar29 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar32 * 4) * 4);
        uVar39 = (ulong)uVar29;
        uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar42 = CONCAT44(0,uVar30);
        lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar39 * lVar34;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar42;
        lVar35 = SUB168(auVar4 * auVar16,8) * 4;
        iVar37 = SUB164(auVar4 * auVar16,8);
        puVar36 = (uint *)(lVar41 + lVar35);
        uVar38 = *puVar36;
        if (uVar38 == 0) {
          lVar34 = uVar32 * 4;
        }
        else {
          do {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar38 * lVar34;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar42;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar30 + iVar37) - SUB164(auVar5 * auVar17,8)) * lVar34;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar42;
            local_88 = SUB164(auVar6 * auVar18,8);
            if (local_88 < uVar45) {
              *(int *)(lVar40 + uVar43 * 4) = iVar37;
              uVar29 = *puVar36;
              *puVar36 = (uint)uVar39;
              uVar38 = *(uint *)(lVar35 + lVar33);
              uVar39 = (ulong)uVar29;
              *(uint *)(lVar35 + lVar33) = (uint)uVar43;
              uVar43 = (ulong)uVar38;
              uVar45 = local_88;
            }
            uVar44 = (undefined4)uVar43;
            uVar29 = (uint)uVar39;
            uVar45 = uVar45 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar37 + 1) * lVar34;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar42;
            lVar35 = SUB168(auVar7 * auVar19,8) * 4;
            iVar37 = SUB164(auVar7 * auVar19,8);
            puVar36 = (uint *)(lVar41 + lVar35);
            uVar38 = *puVar36;
          } while (uVar38 != 0);
          lVar34 = uVar43 << 2;
        }
        *puVar36 = uVar29;
        uVar32 = uVar32 + 1;
        *(int *)(lVar40 + lVar34) = iVar37;
        *(undefined4 *)(lVar33 + lVar35) = uVar44;
      } while ((uint)uVar32 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
  }
  uVar30 = String::hash();
  uVar32 = (ulong)*(uint *)((long)in_RSI + 0x24);
  lVar33 = *in_RSI;
  uVar29 = 1;
  if (uVar30 != 0) {
    uVar29 = uVar30;
  }
  this = (CowData<char32_t> *)(lVar33 + uVar32 * 8);
  uVar39 = (ulong)uVar29;
  *(undefined8 *)this = 0;
  if (*(long *)in_RDX != 0) {
    CowData<char32_t>::_ref(this,(CowData *)in_RDX);
    uVar32 = (ulong)*(uint *)((long)in_RSI + 0x24);
    lVar33 = *in_RSI;
  }
  uVar44 = (undefined4)uVar32;
  uVar45 = 0;
  lVar40 = in_RSI[3];
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar43 = CONCAT44(0,uVar30);
  lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar39 * lVar35;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar43;
  lVar41 = SUB168(auVar8 * auVar20,8) * 4;
  iVar37 = SUB164(auVar8 * auVar20,8);
  lVar34 = in_RSI[2];
  lVar3 = in_RSI[1];
  puVar36 = (uint *)(lVar40 + lVar41);
  uVar38 = *puVar36;
  uVar42 = uVar32;
  while (uVar38 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar38 * lVar35;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar43;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((uVar30 + iVar37) - SUB164(auVar9 * auVar21,8)) * lVar35;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar43;
    local_88 = SUB164(auVar10 * auVar22,8);
    if (local_88 < uVar45) {
      *(int *)(lVar34 + uVar42 * 4) = iVar37;
      uVar29 = *puVar36;
      *puVar36 = (uint)uVar39;
      puVar36 = (uint *)(lVar41 + lVar3);
      uVar38 = *puVar36;
      uVar39 = (ulong)uVar29;
      *puVar36 = (uint)uVar32;
      uVar32 = (ulong)uVar38;
      uVar42 = uVar32;
      uVar45 = local_88;
    }
    uVar44 = (undefined4)uVar32;
    uVar29 = (uint)uVar39;
    uVar45 = uVar45 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar37 + 1) * lVar35;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar43;
    lVar41 = SUB168(auVar11 * auVar23,8) * 4;
    iVar37 = SUB164(auVar11 * auVar23,8);
    puVar36 = (uint *)(lVar40 + lVar41);
    uVar38 = *puVar36;
  }
  *puVar36 = uVar29;
  *(int *)(lVar34 + uVar42 * 4) = iVar37;
  *(undefined4 *)(lVar3 + lVar41) = uVar44;
  iVar31 = *(int *)((long)in_RSI + 0x24);
  iVar37 = iVar31 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar37;
LAB_00103de9:
  *(int *)(param_1 + 0xc) = iVar31;
  *(long *)param_1 = lVar33;
  *(int *)(param_1 + 8) = iVar37;
  return param_1;
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



/* CowData<Vector<String> >::_unref() */

void __thiscall CowData<Vector<String>>::_unref(CowData<Vector<String>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  CowData<String> *this_00;
  
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
        lVar5 = 0;
        this_00 = (CowData<String> *)(lVar2 + 8);
        do {
          lVar5 = lVar5 + 1;
          CowData<String>::_unref(this_00);
          this_00 = this_00 + 0x10;
        } while (lVar3 != lVar5);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<Vector<String> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector<String>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<POTGenerator::MsgidData>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<POTGenerator::MsgidData>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<POTGenerator::MsgidData>::_unref() */

void __thiscall CowData<POTGenerator::MsgidData>::_unref(CowData<POTGenerator::MsgidData> *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  lVar4 = plVar1[-1];
  lVar9 = 0;
  *(undefined8 *)this = 0;
  plVar7 = plVar1;
  if (lVar4 != 0) {
    do {
      pvVar10 = (void *)plVar7[7];
      if (pvVar10 != (void *)0x0) {
        if (*(int *)((long)plVar7 + 0x5c) != 0) {
          if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar7 + 0xb) * 4) != 0) {
            memset((void *)plVar7[10],0,
                   (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar7 + 0xb) * 4) <<
                   2);
            if (*(int *)((long)plVar7 + 0x5c) == 0) goto LAB_00104680;
          }
          lVar8 = 0;
          do {
            plVar3 = (long *)((long)pvVar10 + lVar8 * 8);
            if (*plVar3 != 0) {
              LOCK();
              plVar2 = (long *)(*plVar3 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                lVar5 = *plVar3;
                *plVar3 = 0;
                Memory::free_static((void *)(lVar5 + -0x10),false);
              }
              pvVar10 = (void *)plVar7[7];
            }
            lVar8 = lVar8 + 1;
          } while ((uint)lVar8 < *(uint *)((long)plVar7 + 0x5c));
          *(undefined4 *)((long)plVar7 + 0x5c) = 0;
          if (pvVar10 == (void *)0x0) goto LAB_00104536;
        }
LAB_00104680:
        Memory::free_static(pvVar10,false);
        Memory::free_static((void *)plVar7[9],false);
        Memory::free_static((void *)plVar7[8],false);
        Memory::free_static((void *)plVar7[10],false);
      }
LAB_00104536:
      pvVar10 = (void *)plVar7[2];
      if (pvVar10 != (void *)0x0) {
        if (*(int *)((long)plVar7 + 0x34) != 0) {
          if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar7 + 6) * 4) != 0) {
            memset((void *)plVar7[5],0,
                   (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar7 + 6) * 4) << 2)
            ;
            if (*(int *)((long)plVar7 + 0x34) == 0) goto LAB_00104648;
          }
          lVar8 = 0;
          do {
            plVar3 = (long *)((long)pvVar10 + lVar8 * 8);
            if (*plVar3 != 0) {
              LOCK();
              plVar2 = (long *)(*plVar3 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                lVar5 = *plVar3;
                *plVar3 = 0;
                Memory::free_static((void *)(lVar5 + -0x10),false);
              }
              pvVar10 = (void *)plVar7[2];
            }
            lVar8 = lVar8 + 1;
          } while ((uint)lVar8 < *(uint *)((long)plVar7 + 0x34));
          *(undefined4 *)((long)plVar7 + 0x34) = 0;
          if (pvVar10 == (void *)0x0) goto LAB_001045be;
        }
LAB_00104648:
        Memory::free_static(pvVar10,false);
        Memory::free_static((void *)plVar7[4],false);
        Memory::free_static((void *)plVar7[3],false);
        Memory::free_static((void *)plVar7[5],false);
      }
LAB_001045be:
      if (plVar7[1] != 0) {
        LOCK();
        plVar3 = (long *)(plVar7[1] + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          lVar8 = plVar7[1];
          plVar7[1] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (*plVar7 != 0) {
        LOCK();
        plVar3 = (long *)(*plVar7 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          lVar8 = *plVar7;
          *plVar7 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar9 = lVar9 + 1;
      plVar7 = plVar7 + 0xc;
    } while (lVar4 != lVar9);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<POTGenerator::MsgidData>::_ref(CowData<POTGenerator::MsgidData> const&) [clone .part.0]
    */

void __thiscall
CowData<POTGenerator::MsgidData>::_ref(CowData<POTGenerator::MsgidData> *this,CowData *param_1)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, Vector<POTGenerator::MsgidData>, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   Vector<POTGenerator::MsgidData> > > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,Vector<POTGenerator::MsgidData>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<POTGenerator::MsgidData>>>>
::operator[](HashMap<String,Vector<POTGenerator::MsgidData>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<POTGenerator::MsgidData>>>>
             *this,String *param_1)

{
  long *plVar1;
  uint *puVar2;
  void *pvVar3;
  void *__s;
  long lVar4;
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
  undefined1 (*pauVar37) [16];
  char cVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 uVar42;
  void *__s_00;
  undefined1 (*pauVar43) [16];
  undefined8 *puVar44;
  void *pvVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  ulong uVar49;
  undefined8 uVar50;
  uint uVar51;
  uint uVar52;
  ulong uVar53;
  long lVar54;
  uint uVar55;
  uint uVar56;
  undefined1 (*pauVar57) [16];
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined1 local_68 [16];
  long local_58 [2];
  undefined8 local_48;
  long local_40;
  
  uVar56 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 8) == 0) {
LAB_00104e7f:
    local_70 = 0;
    uVar49 = (ulong)uVar56;
    uVar41 = uVar49 * 4;
    uVar53 = uVar49 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    pvVar45 = (void *)Memory::alloc_static(uVar53,false);
    *(void **)(this + 8) = pvVar45;
    if (uVar56 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar45 + uVar53)) && (pvVar45 < (void *)((long)pvVar3 + uVar41))
         ) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar41 * 4) = 0;
          *(undefined8 *)((long)pvVar45 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar49 != uVar41);
      }
      else {
        memset(pvVar3,0,uVar41);
        memset(pvVar45,0,uVar53);
      }
LAB_00104d35:
      iVar46 = *(int *)(this + 0x2c);
      if (iVar46 != 0) {
LAB_00104d45:
        uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar52 = String::hash();
        uVar41 = CONCAT44(0,uVar39);
        lVar54 = *(long *)(this + 0x10);
        uVar40 = 1;
        if (uVar52 != 0) {
          uVar40 = uVar52;
        }
        uVar55 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar40 * lVar4;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar41;
        lVar47 = SUB168(auVar17 * auVar33,8);
        uVar52 = *(uint *)(lVar54 + lVar47 * 4);
        uVar51 = SUB164(auVar17 * auVar33,8);
        if (uVar52 != 0) {
          do {
            if (uVar40 == uVar52) {
              cVar38 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar47 * 8) + 0x10),
                                          param_1);
              if (cVar38 != '\0') {
                pauVar43 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
                if (*(long *)pauVar43[2] != 0) {
                  CowData<POTGenerator::MsgidData>::_ref
                            ((CowData<POTGenerator::MsgidData> *)(pauVar43 + 2),(CowData *)&local_70
                            );
                  pauVar43 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
                }
                goto LAB_00104be3;
              }
              lVar54 = *(long *)(this + 0x10);
            }
            uVar55 = uVar55 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar51 + 1) * lVar4;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar41;
            lVar47 = SUB168(auVar18 * auVar34,8);
            uVar52 = *(uint *)(lVar54 + lVar47 * 4);
            uVar51 = SUB164(auVar18 * auVar34,8);
          } while ((uVar52 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar52 * lVar4, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar41, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar39 + uVar51) - SUB164(auVar19 * auVar35,8)) * lVar4,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar41, uVar55 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar46 = *(int *)(this + 0x2c);
      }
      uVar49 = (ulong)uVar56;
      goto LAB_001047f7;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar45 == (void *)0x0) goto LAB_001047f7;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00104d45;
LAB_0010481d:
    uVar56 = *(uint *)(this + 0x28);
    if (uVar56 == 0x1c) {
      pauVar43 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00104be3;
    }
    uVar41 = (ulong)(uVar56 + 1);
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar56 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar56 + 1 < 2) {
      uVar41 = 2;
    }
    uVar56 = *(uint *)(hash_table_size_primes + uVar41 * 4);
    *(int *)(this + 0x28) = (int)uVar41;
    pvVar45 = *(void **)(this + 8);
    uVar49 = (ulong)uVar56;
    uVar41 = uVar49 * 4;
    pvVar3 = *(void **)(this + 0x10);
    uVar53 = uVar49 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    __s_00 = (void *)Memory::alloc_static(uVar53,false);
    *(void **)(this + 8) = __s_00;
    if (uVar56 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar53)) && (__s_00 < (void *)((long)__s + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)__s + uVar41 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar41 != uVar49);
      }
      else {
        memset(__s,0,uVar41);
        memset(__s_00,0,uVar53);
      }
    }
    uVar41 = 0;
    if (uVar39 != 0) {
      do {
        uVar56 = *(uint *)((long)pvVar3 + uVar41 * 4);
        if (uVar56 != 0) {
          uVar51 = 0;
          lVar4 = *(long *)(this + 0x10);
          uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar53 = CONCAT44(0,uVar40);
          lVar54 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar56 * lVar54;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar53;
          lVar47 = SUB168(auVar5 * auVar21,8);
          puVar2 = (uint *)(lVar4 + lVar47 * 4);
          iVar46 = SUB164(auVar5 * auVar21,8);
          uVar52 = *puVar2;
          uVar42 = *(undefined8 *)((long)pvVar45 + uVar41 * 8);
          while (uVar52 != 0) {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar52 * lVar54;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar53;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)((uVar40 + iVar46) - SUB164(auVar6 * auVar22,8)) * lVar54;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar53;
            uVar55 = SUB164(auVar7 * auVar23,8);
            uVar50 = uVar42;
            if (uVar55 < uVar51) {
              *puVar2 = uVar56;
              puVar44 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar50 = *puVar44;
              *puVar44 = uVar42;
              uVar56 = uVar52;
              uVar51 = uVar55;
            }
            uVar51 = uVar51 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)(iVar46 + 1) * lVar54;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar53;
            lVar47 = SUB168(auVar8 * auVar24,8);
            puVar2 = (uint *)(lVar4 + lVar47 * 4);
            iVar46 = SUB164(auVar8 * auVar24,8);
            uVar42 = uVar50;
            uVar52 = *puVar2;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar42;
          *puVar2 = uVar56;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar41 = uVar41 + 1;
      } while (uVar39 != uVar41);
      Memory::free_static(pvVar45,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      uVar41 = CONCAT44(0,uVar56);
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar40 = String::hash();
      uVar39 = 1;
      if (uVar40 != 0) {
        uVar39 = uVar40;
      }
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar39 * lVar4;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar41;
      lVar47 = SUB168(auVar13 * auVar29,8);
      lVar54 = *(long *)(this + 0x10);
      uVar52 = SUB164(auVar13 * auVar29,8);
      uVar40 = *(uint *)(lVar54 + lVar47 * 4);
      if (uVar40 == 0) {
        lVar48 = *(long *)(this + 8);
      }
      else {
        uVar51 = 0;
        lVar48 = *(long *)(this + 8);
        do {
          if (uVar39 == uVar40) {
            cVar38 = String::operator==((String *)(*(long *)(lVar48 + lVar47 * 8) + 0x10),param_1);
            if (cVar38 != '\0') {
              pauVar43 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar52 * 8);
              goto LAB_00104bef;
            }
            lVar54 = *(long *)(this + 0x10);
            lVar48 = *(long *)(this + 8);
          }
          uVar51 = uVar51 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(uVar52 + 1) * lVar4;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar41;
          lVar47 = SUB168(auVar14 * auVar30,8);
          uVar40 = *(uint *)(lVar54 + lVar47 * 4);
          uVar52 = SUB164(auVar14 * auVar30,8);
        } while ((uVar40 != 0) &&
                (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar40 * lVar4, auVar31._8_8_ = 0,
                auVar31._0_8_ = uVar41, auVar16._8_8_ = 0,
                auVar16._0_8_ = (ulong)((uVar52 + uVar56) - SUB164(auVar15 * auVar31,8)) * lVar4,
                auVar32._8_8_ = 0, auVar32._0_8_ = uVar41, uVar51 <= SUB164(auVar16 * auVar32,8)));
      }
      local_70 = 0;
      uVar56 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar48 == 0) goto LAB_00104e7f;
      goto LAB_00104d35;
    }
    local_70 = 0;
    uVar49 = (ulong)uVar56;
    iVar46 = 0;
LAB_001047f7:
    if ((float)uVar49 * __LC3 < (float)(iVar46 + 1)) goto LAB_0010481d;
  }
  local_58[0] = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(long *)param_1 == 0) {
    local_48 = 0;
    pauVar43 = (undefined1 (*) [16])operator_new(0x28,"");
    *(undefined8 *)pauVar43[1] = 0;
    *pauVar43 = (undefined1  [16])0x0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar4 = local_58[0];
    uVar42 = local_68._0_8_;
    uVar50 = local_68._8_8_;
    local_48 = 0;
    pauVar43 = (undefined1 (*) [16])operator_new(0x28,"");
    *(undefined8 *)pauVar43[1] = 0;
    *(undefined8 *)*pauVar43 = uVar42;
    *(undefined8 *)(*pauVar43 + 8) = uVar50;
    if (lVar4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar43 + 1),(CowData *)local_58);
    }
  }
  *(undefined8 *)pauVar43[2] = 0;
  CowData<POTGenerator::MsgidData>::_unref((CowData<POTGenerator::MsgidData> *)&local_48);
  if (local_58[0] == 0) {
LAB_00104ac8:
    puVar44 = *(undefined8 **)(this + 0x20);
    if (puVar44 != (undefined8 *)0x0) goto LAB_00104ada;
LAB_00104e6a:
    *(undefined1 (**) [16])(this + 0x18) = pauVar43;
  }
  else {
    LOCK();
    plVar1 = (long *)(local_58[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00104ac8;
    Memory::free_static((void *)(local_58[0] + -0x10),false);
    puVar44 = *(undefined8 **)(this + 0x20);
    if (puVar44 == (undefined8 *)0x0) goto LAB_00104e6a;
LAB_00104ada:
    *puVar44 = pauVar43;
    *(undefined8 **)(*pauVar43 + 8) = puVar44;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar43;
  uVar39 = String::hash();
  lVar4 = *(long *)(this + 0x10);
  uVar56 = 1;
  if (uVar39 != 0) {
    uVar56 = uVar39;
  }
  uVar52 = 0;
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar39);
  lVar54 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (ulong)uVar56 * lVar54;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar41;
  lVar48 = SUB168(auVar9 * auVar25,8);
  lVar47 = *(long *)(this + 8);
  puVar2 = (uint *)(lVar4 + lVar48 * 4);
  iVar46 = SUB164(auVar9 * auVar25,8);
  uVar40 = *puVar2;
  pauVar37 = pauVar43;
  while (uVar40 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar40 * lVar54;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar41;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar39 + iVar46) - SUB164(auVar10 * auVar26,8)) * lVar54;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar41;
    uVar51 = SUB164(auVar11 * auVar27,8);
    pauVar57 = pauVar37;
    if (uVar51 < uVar52) {
      *puVar2 = uVar56;
      puVar44 = (undefined8 *)(lVar47 + lVar48 * 8);
      pauVar57 = (undefined1 (*) [16])*puVar44;
      *puVar44 = pauVar37;
      uVar52 = uVar51;
      uVar56 = uVar40;
    }
    uVar52 = uVar52 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar46 + 1) * lVar54;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar41;
    lVar48 = SUB168(auVar12 * auVar28,8);
    puVar2 = (uint *)(lVar4 + lVar48 * 4);
    iVar46 = SUB164(auVar12 * auVar28,8);
    pauVar37 = pauVar57;
    uVar40 = *puVar2;
  }
  *(undefined1 (**) [16])(lVar47 + lVar48 * 8) = pauVar37;
  *puVar2 = uVar56;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00104be3:
  CowData<POTGenerator::MsgidData>::_unref((CowData<POTGenerator::MsgidData> *)&local_70);
LAB_00104bef:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pauVar43[1] + 8;
}



/* CowData<POTGenerator::MsgidData>::_realloc(long) */

undefined8 __thiscall
CowData<POTGenerator::MsgidData>::_realloc(CowData<POTGenerator::MsgidData> *this,long param_1)

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
/* Error CowData<POTGenerator::MsgidData>::resize<false>(long) */

undefined8 __thiscall
CowData<POTGenerator::MsgidData>::resize<false>(CowData<POTGenerator::MsgidData> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  void *pvVar14;
  long lVar15;
  long local_48;
  
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
    lVar15 = 0;
    local_48 = 0;
  }
  else {
    lVar15 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar15) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    local_48 = lVar15 * 0x60;
    if (local_48 != 0) {
      uVar13 = local_48 - 1U | local_48 - 1U >> 1;
      uVar13 = uVar13 | uVar13 >> 2;
      uVar13 = uVar13 | uVar13 >> 4;
      uVar13 = uVar13 | uVar13 >> 8;
      uVar13 = uVar13 | uVar13 >> 0x10;
      local_48 = (uVar13 | uVar13 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x60 == 0) {
LAB_00105600:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar13 = param_1 * 0x60 - 1;
  uVar13 = uVar13 >> 1 | uVar13;
  uVar13 = uVar13 | uVar13 >> 2;
  uVar13 = uVar13 | uVar13 >> 4;
  uVar13 = uVar13 | uVar13 >> 8;
  uVar13 = uVar13 | uVar13 >> 0x10;
  uVar13 = uVar13 | uVar13 >> 0x20;
  lVar10 = uVar13 + 1;
  if (lVar10 == 0) goto LAB_00105600;
  uVar12 = param_1;
  if (param_1 <= lVar15) {
    while (puVar11 = *(undefined8 **)this, puVar11 != (undefined8 *)0x0) {
      if ((ulong)puVar11[-1] <= uVar12) {
        if (lVar10 != local_48) {
          uVar9 = _realloc(this,lVar10);
          if ((int)uVar9 != 0) {
            return uVar9;
          }
          puVar11 = *(undefined8 **)this;
          if (puVar11 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
        }
        goto LAB_001052ed;
      }
      plVar2 = puVar11 + uVar12 * 0xc;
      pvVar14 = (void *)plVar2[7];
      if (pvVar14 != (void *)0x0) {
        if ((*(int *)((long)plVar2 + 0x5c) != 0) &&
           ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar2 + 0xb) * 4) == 0 ||
            (memset((void *)plVar2[10],0,
                    (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar2 + 0xb) * 4) <<
                    2), *(int *)((long)plVar2 + 0x5c) != 0)))) {
          lVar15 = 0;
          do {
            plVar3 = (long *)((long)pvVar14 + lVar15 * 8);
            if (*plVar3 != 0) {
              LOCK();
              plVar1 = (long *)(*plVar3 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar4 = *plVar3;
                *plVar3 = 0;
                Memory::free_static((void *)(lVar4 + -0x10),false);
              }
              pvVar14 = (void *)plVar2[7];
            }
            lVar15 = lVar15 + 1;
          } while ((uint)lVar15 < *(uint *)((long)plVar2 + 0x5c));
          *(undefined4 *)((long)plVar2 + 0x5c) = 0;
          if (pvVar14 == (void *)0x0) goto LAB_001053d1;
        }
        Memory::free_static(pvVar14,false);
        Memory::free_static((void *)plVar2[9],false);
        Memory::free_static((void *)plVar2[8],false);
        Memory::free_static((void *)plVar2[10],false);
      }
LAB_001053d1:
      pvVar14 = (void *)plVar2[2];
      if (pvVar14 != (void *)0x0) {
        if ((*(int *)((long)plVar2 + 0x34) != 0) &&
           ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar2 + 6) * 4) == 0 ||
            (memset((void *)plVar2[5],0,
                    (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar2 + 6) * 4) << 2
                   ), *(int *)((long)plVar2 + 0x34) != 0)))) {
          lVar15 = 0;
          do {
            plVar3 = (long *)((long)pvVar14 + lVar15 * 8);
            if (*plVar3 != 0) {
              LOCK();
              plVar1 = (long *)(*plVar3 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar4 = *plVar3;
                *plVar3 = 0;
                Memory::free_static((void *)(lVar4 + -0x10),false);
              }
              pvVar14 = (void *)plVar2[2];
            }
            lVar15 = lVar15 + 1;
          } while ((uint)lVar15 < *(uint *)((long)plVar2 + 0x34));
          *(undefined4 *)((long)plVar2 + 0x34) = 0;
          if (pvVar14 == (void *)0x0) goto LAB_00105465;
        }
        Memory::free_static(pvVar14,false);
        Memory::free_static((void *)plVar2[4],false);
        Memory::free_static((void *)plVar2[3],false);
        Memory::free_static((void *)plVar2[5],false);
      }
LAB_00105465:
      if (plVar2[1] != 0) {
        LOCK();
        plVar3 = (long *)(plVar2[1] + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          lVar15 = plVar2[1];
          plVar2[1] = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      if (*plVar2 != 0) {
        LOCK();
        plVar3 = (long *)(*plVar2 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          lVar15 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      uVar12 = uVar12 + 1;
    }
    goto LAB_00105656;
  }
  if (lVar10 == local_48) {
LAB_00105535:
    puVar11 = *(undefined8 **)this;
    if (puVar11 == (undefined8 *)0x0) {
LAB_00105656:
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    lVar15 = puVar11[-1];
    if (param_1 <= lVar15) goto LAB_001052ed;
  }
  else {
    if (lVar15 != 0) {
      uVar9 = _realloc(this,lVar10);
      if ((int)uVar9 != 0) {
        return uVar9;
      }
      goto LAB_00105535;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar13 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar11 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar11;
    lVar15 = 0;
  }
  uVar9 = _LC1;
  pauVar7 = (undefined1 (*) [16])(puVar11 + lVar15 * 0xc);
  do {
    *(undefined8 *)pauVar7[3] = uVar9;
    pauVar8 = pauVar7 + 6;
    *pauVar7 = (undefined1  [16])0x0;
    pauVar7[1] = (undefined1  [16])0x0;
    pauVar7[2] = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pauVar7[3] + 8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pauVar7[4] + 8) = (undefined1  [16])0x0;
    *(undefined8 *)(pauVar7[5] + 8) = uVar9;
    pauVar7 = pauVar8;
  } while (pauVar8 != (undefined1 (*) [16])(puVar11 + param_1 * 0xc));
LAB_001052ed:
  puVar11[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* POTGenerator::MsgidData::~MsgidData() */

void __thiscall POTGenerator::MsgidData::~MsgidData(MsgidData *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



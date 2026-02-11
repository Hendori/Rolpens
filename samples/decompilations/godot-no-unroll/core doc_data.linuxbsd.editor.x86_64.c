
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



/* DocData::get_default_value_string(Variant const&) */

DocData * __thiscall DocData::get_default_value_string(DocData *this,Variant *param_1)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_c0;
  long local_b8;
  Variant local_b0 [8];
  Dictionary local_a8 [8];
  long local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_1 == 0x1c) {
    local_78 = 0;
    local_70 = (undefined1  [16])0x0;
    local_b8 = 0;
    Variant::operator_cast_to_Array(local_b0);
    Array::Array((Array *)local_a8,local_b0,0,(StringName *)&local_b8,(Variant *)&local_78);
    Variant::Variant((Variant *)local_58,(Array *)local_a8);
    Variant::get_construct_string();
    String::replace((char *)this,(char *)&local_a0);
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
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Array::~Array((Array *)local_a8);
    Array::~Array((Array *)local_b0);
  }
  else {
    if (*(int *)param_1 != 0x1b) {
      Variant::get_construct_string();
      String::replace((char *)this,(char *)&local_a0);
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
      goto LAB_001000f8;
    }
    local_78 = 0;
    local_70 = (undefined1  [16])0x0;
    local_90 = (undefined1  [16])0x0;
    local_b8 = 0;
    local_98 = 0;
    local_c0 = 0;
    Variant::operator_cast_to_Dictionary(local_b0);
    Dictionary::Dictionary
              (local_a8,local_b0,0,(StringName *)&local_c0,(Variant *)&local_98,0,
               (StringName *)&local_b8,(Variant *)&local_78);
    Variant::Variant((Variant *)local_58,local_a8);
    Variant::get_construct_string();
    String::replace((char *)this,(char *)&local_a0);
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
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary(local_a8);
    Dictionary::~Dictionary((Dictionary *)local_b0);
    if ((StringName::configured != '\0') && (local_c0 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_98] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
LAB_001000f8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* DocData::return_doc_from_retinfo(DocData::MethodDoc&, PropertyInfo const&) */

void DocData::return_doc_from_retinfo(MethodDoc *param_1,PropertyInfo *param_2)

{
  long *plVar1;
  CowData<char32_t> *this;
  int iVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long in_FS_OFFSET;
  bool bVar10;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  iVar9 = *(int *)param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar9 == 2) {
    if (*(int *)(param_2 + 0x18) == 0x1e) {
      lVar7 = *(long *)(param_2 + 0x20);
      this = (CowData<char32_t> *)(param_1 + 8);
      if (*(long *)(param_1 + 8) != lVar7) {
        CowData<char32_t>::_ref(this,(CowData *)(param_2 + 0x20));
        lVar7 = *(long *)(param_1 + 8);
      }
      if ((lVar7 != 0) && (1 < *(uint *)(lVar7 + -8))) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          String::operator+=((String *)this,"*");
          return;
        }
        goto LAB_00100bbc;
      }
      local_40 = 5;
      local_48 = "void*";
      String::parse_latin1((StrRange *)this);
    }
    else {
      lVar7 = *(long *)(param_2 + 0x10);
      if ((*(uint *)(param_2 + 0x28) & 0x10200) == 0) {
        if (lVar7 != 0) goto LAB_0010042e;
        if (*(int *)(param_2 + 0x18) == 0x11) goto LAB_001007f2;
LAB_001008e2:
        Variant::get_type_name(&local_48);
        pcVar5 = local_48;
        pcVar3 = *(char **)(param_1 + 8);
        if (pcVar3 == local_48) {
          if (pcVar3 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(pcVar3 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_48 = (char *)0x0;
              Memory::free_static(pcVar5 + -0x10,false);
            }
          }
        }
        else {
          if (pcVar3 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(pcVar3 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar7 = *(long *)(param_1 + 8);
              *(undefined8 *)(param_1 + 8) = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          *(char **)(param_1 + 8) = local_48;
        }
      }
      else {
        if (lVar7 == 0) {
LAB_00100859:
          local_50 = 0;
          lVar7 = *(long *)(param_1 + 0x10);
          iVar9 = (int)&local_48;
          if (lVar7 != 0) {
LAB_0010086b:
            LOCK();
            plVar1 = (long *)(lVar7 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar7 = *(long *)(param_1 + 0x10);
              *(undefined8 *)(param_1 + 0x10) = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
            goto LAB_0010068b;
          }
        }
        else {
          pcVar3 = *(char **)(lVar7 + 8);
          local_50 = 0;
          if (pcVar3 == (char *)0x0) {
            if (*(long *)(lVar7 + 0x10) == 0) goto LAB_00100859;
            plVar1 = (long *)(*(long *)(lVar7 + 0x10) + -0x10);
            do {
              lVar4 = *plVar1;
              if (lVar4 == 0) goto LAB_00100675;
              LOCK();
              lVar8 = *plVar1;
              bVar10 = lVar4 == lVar8;
              if (bVar10) {
                *plVar1 = lVar4 + 1;
                lVar8 = lVar4;
              }
              UNLOCK();
            } while (!bVar10);
            if (lVar8 != -1) {
              local_50 = *(long *)(lVar7 + 0x10);
            }
          }
          else {
            local_40 = strlen(pcVar3);
            local_48 = pcVar3;
            String::parse_latin1((StrRange *)&local_50);
          }
LAB_00100675:
          lVar4 = local_50;
          iVar9 = (int)&local_48;
          lVar7 = *(long *)(param_1 + 0x10);
          if (lVar7 == local_50) {
            if (local_50 != 0) {
              LOCK();
              plVar1 = (long *)(local_50 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_50 = 0;
                Memory::free_static((void *)(lVar4 + -0x10),false);
              }
            }
          }
          else {
            if (lVar7 != 0) goto LAB_0010086b;
LAB_0010068b:
            iVar9 = (int)&local_48;
            *(long *)(param_1 + 0x10) = local_50;
          }
        }
        cVar6 = String::begins_with((char *)(param_1 + 0x10));
        if (cVar6 != '\0') {
          String::substr(iVar9,(int)(param_1 + 0x10));
          pcVar5 = local_48;
          pcVar3 = *(char **)(param_1 + 0x10);
          if (pcVar3 == local_48) {
            if (pcVar3 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(pcVar3 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_48 = (char *)0x0;
                Memory::free_static(pcVar5 + -0x10,false);
              }
            }
          }
          else {
            if (pcVar3 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(pcVar3 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar7 = *(long *)(param_1 + 0x10);
                *(undefined8 *)(param_1 + 0x10) = 0;
                Memory::free_static((void *)(lVar7 + -0x10),false);
              }
            }
            *(char **)(param_1 + 0x10) = local_48;
          }
        }
        local_40 = 3;
        param_1[0x18] = (MethodDoc)((byte)(*(uint *)(param_2 + 0x28) >> 9) & 1);
        local_48 = "int";
        String::parse_latin1((StrRange *)(param_1 + 8));
      }
    }
  }
  else {
    lVar7 = *(long *)(param_2 + 0x10);
    if (lVar7 == 0) {
      iVar2 = *(int *)(param_2 + 0x18);
      if (iVar9 == 0x1c) {
        if (iVar2 != 0x1f) {
LAB_001008d9:
          if (iVar2 != 0x11) goto LAB_001008e2;
          goto LAB_001007f2;
        }
        local_50 = 0;
        local_40 = 2;
        local_48 = "[]";
        String::parse_latin1((StrRange *)&local_50);
        String::operator+((String *)&local_48,(String *)(param_2 + 0x20));
        pcVar5 = local_48;
        pcVar3 = *(char **)(param_1 + 8);
        if (pcVar3 == local_48) {
          if (pcVar3 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(pcVar3 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_48 = (char *)0x0;
              Memory::free_static(pcVar5 + -0x10,false);
            }
          }
        }
        else {
          if (pcVar3 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(pcVar3 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar7 = *(long *)(param_1 + 8);
              *(undefined8 *)(param_1 + 8) = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          *(char **)(param_1 + 8) = local_48;
        }
      }
      else {
        if (iVar9 != 0x1b) {
          if (iVar2 != 0x11) {
            if (iVar9 != 0) goto LAB_001008e2;
            if (((byte)param_2[0x2a] & 2) == 0) {
              local_40 = 4;
              local_48 = "void";
              String::parse_latin1((StrRange *)(param_1 + 8));
            }
            else {
              local_40 = 7;
              local_48 = "Variant";
              String::parse_latin1((StrRange *)(param_1 + 8));
            }
            goto LAB_00100491;
          }
LAB_001007f2:
          if (*(long *)(param_1 + 8) != *(long *)(param_2 + 0x20)) {
            if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)(param_1 + 8),(CowData *)(param_2 + 0x20));
              return;
            }
            goto LAB_00100bbc;
          }
          goto LAB_00100491;
        }
        if (iVar2 != 0x26) goto LAB_001008d9;
        local_50 = 0;
        local_48 = "]";
        local_40 = 1;
        String::parse_latin1((StrRange *)&local_50);
        String::replace((char *)&local_60,(char *)(param_2 + 0x20));
        operator+((char *)&local_58,(String *)"Dictionary[");
        String::operator+((String *)&local_48,(String *)&local_58);
        pcVar5 = local_48;
        pcVar3 = *(char **)(param_1 + 8);
        if (pcVar3 == local_48) {
          if (pcVar3 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(pcVar3 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_48 = (char *)0x0;
              Memory::free_static(pcVar5 + -0x10,false);
            }
          }
        }
        else {
          if (pcVar3 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(pcVar3 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar7 = *(long *)(param_1 + 8);
              *(undefined8 *)(param_1 + 8) = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          *(char **)(param_1 + 8) = local_48;
        }
        lVar7 = local_58;
        if (local_58 != 0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = 0;
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
LAB_001005d8:
      lVar7 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    else {
LAB_0010042e:
      pcVar3 = *(char **)(lVar7 + 8);
      local_50 = 0;
      if (pcVar3 == (char *)0x0) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          plVar1 = (long *)(*(long *)(lVar7 + 0x10) + -0x10);
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010046a;
            LOCK();
            lVar8 = *plVar1;
            bVar10 = lVar4 == lVar8;
            if (bVar10) {
              *plVar1 = lVar4 + 1;
              lVar8 = lVar4;
            }
            UNLOCK();
          } while (!bVar10);
          if (lVar8 != -1) {
            local_50 = *(long *)(lVar7 + 0x10);
          }
          goto LAB_0010046a;
        }
        lVar7 = *(long *)(param_1 + 8);
        if (lVar7 == 0) goto LAB_00100491;
LAB_0010047c:
        LOCK();
        plVar1 = (long *)(lVar7 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar7 = *(long *)(param_1 + 8);
          *(undefined8 *)(param_1 + 8) = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      else {
        local_40 = strlen(pcVar3);
        local_48 = pcVar3;
        String::parse_latin1((StrRange *)&local_50);
LAB_0010046a:
        lVar7 = *(long *)(param_1 + 8);
        if (lVar7 == local_50) goto LAB_001005d8;
        if (lVar7 != 0) goto LAB_0010047c;
      }
      *(long *)(param_1 + 8) = local_50;
    }
  }
LAB_00100491:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100bbc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DocData::argument_doc_from_arginfo(DocData::ArgumentDoc&, PropertyInfo const&) */

void DocData::argument_doc_from_arginfo(ArgumentDoc *param_1,PropertyInfo *param_2)

{
  long *plVar1;
  CowData<char32_t> *this;
  int iVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long in_FS_OFFSET;
  bool bVar10;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 != *(long *)(param_2 + 8)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_1,(CowData *)(param_2 + 8));
  }
  iVar9 = *(int *)param_2;
  if (iVar9 == 2) {
    if (*(int *)(param_2 + 0x18) == 0x1e) {
      lVar7 = *(long *)(param_2 + 0x20);
      this = (CowData<char32_t> *)(param_1 + 8);
      if (*(long *)(param_1 + 8) != lVar7) {
        CowData<char32_t>::_ref(this,(CowData *)(param_2 + 0x20));
        lVar7 = *(long *)(param_1 + 8);
      }
      if ((lVar7 != 0) && (1 < *(uint *)(lVar7 + -8))) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          String::operator+=((String *)this,"*");
          return;
        }
        goto LAB_00101384;
      }
      local_40 = 5;
      local_48 = "void*";
      String::parse_latin1((StrRange *)this);
    }
    else {
      lVar7 = *(long *)(param_2 + 0x10);
      if ((*(uint *)(param_2 + 0x28) & 0x10200) == 0) {
        if (lVar7 != 0) goto LAB_00100c1e;
        if (*(int *)(param_2 + 0x18) == 0x11) goto LAB_00100fe2;
LAB_001010d2:
        Variant::get_type_name(&local_48);
        pcVar5 = local_48;
        pcVar3 = *(char **)(param_1 + 8);
        if (pcVar3 == local_48) {
          if (pcVar3 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(pcVar3 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_48 = (char *)0x0;
              Memory::free_static(pcVar5 + -0x10,false);
            }
          }
        }
        else {
          if (pcVar3 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(pcVar3 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar7 = *(long *)(param_1 + 8);
              *(undefined8 *)(param_1 + 8) = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          *(char **)(param_1 + 8) = local_48;
        }
      }
      else {
        if (lVar7 == 0) {
LAB_00101049:
          local_50 = 0;
          lVar7 = *(long *)(param_1 + 0x10);
          iVar9 = (int)&local_48;
          if (lVar7 != 0) {
LAB_0010105b:
            iVar9 = (int)&local_48;
            LOCK();
            plVar1 = (long *)(lVar7 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar7 = *(long *)(param_1 + 0x10);
              *(undefined8 *)(param_1 + 0x10) = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
            goto LAB_00100e7b;
          }
        }
        else {
          pcVar3 = *(char **)(lVar7 + 8);
          local_50 = 0;
          if (pcVar3 == (char *)0x0) {
            if (*(long *)(lVar7 + 0x10) == 0) goto LAB_00101049;
            plVar1 = (long *)(*(long *)(lVar7 + 0x10) + -0x10);
            do {
              lVar4 = *plVar1;
              if (lVar4 == 0) goto LAB_00100e65;
              LOCK();
              lVar8 = *plVar1;
              bVar10 = lVar4 == lVar8;
              if (bVar10) {
                *plVar1 = lVar4 + 1;
                lVar8 = lVar4;
              }
              UNLOCK();
            } while (!bVar10);
            if (lVar8 != -1) {
              local_50 = *(long *)(lVar7 + 0x10);
            }
          }
          else {
            local_40 = strlen(pcVar3);
            local_48 = pcVar3;
            String::parse_latin1((StrRange *)&local_50);
          }
LAB_00100e65:
          lVar4 = local_50;
          iVar9 = (int)&local_48;
          lVar7 = *(long *)(param_1 + 0x10);
          if (local_50 == lVar7) {
            if (local_50 != 0) {
              LOCK();
              plVar1 = (long *)(local_50 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_50 = 0;
                Memory::free_static((void *)(lVar4 + -0x10),false);
              }
            }
          }
          else {
            if (lVar7 != 0) goto LAB_0010105b;
LAB_00100e7b:
            *(long *)(param_1 + 0x10) = local_50;
          }
        }
        cVar6 = String::begins_with((char *)(param_1 + 0x10));
        if (cVar6 != '\0') {
          String::substr(iVar9,(int)(param_1 + 0x10));
          pcVar5 = local_48;
          pcVar3 = *(char **)(param_1 + 0x10);
          if (pcVar3 == local_48) {
            if (pcVar3 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(pcVar3 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_48 = (char *)0x0;
                Memory::free_static(pcVar5 + -0x10,false);
              }
            }
          }
          else {
            if (pcVar3 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(pcVar3 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar7 = *(long *)(param_1 + 0x10);
                *(undefined8 *)(param_1 + 0x10) = 0;
                Memory::free_static((void *)(lVar7 + -0x10),false);
              }
            }
            *(char **)(param_1 + 0x10) = local_48;
          }
        }
        local_40 = 3;
        param_1[0x18] = (ArgumentDoc)((byte)(*(uint *)(param_2 + 0x28) >> 9) & 1);
        local_48 = "int";
        String::parse_latin1((StrRange *)(param_1 + 8));
      }
    }
  }
  else {
    lVar7 = *(long *)(param_2 + 0x10);
    if (lVar7 == 0) {
      iVar2 = *(int *)(param_2 + 0x18);
      if (iVar9 == 0x1c) {
        if (iVar2 != 0x1f) {
LAB_001010c9:
          if (iVar2 != 0x11) goto LAB_001010d2;
          goto LAB_00100fe2;
        }
        local_50 = 0;
        local_40 = 2;
        local_48 = "[]";
        String::parse_latin1((StrRange *)&local_50);
        String::operator+((String *)&local_48,(String *)(param_2 + 0x20));
        pcVar5 = local_48;
        pcVar3 = *(char **)(param_1 + 8);
        if (pcVar3 == local_48) {
          if (pcVar3 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(pcVar3 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_48 = (char *)0x0;
              Memory::free_static(pcVar5 + -0x10,false);
            }
          }
        }
        else {
          if (pcVar3 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(pcVar3 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar7 = *(long *)(param_1 + 8);
              *(undefined8 *)(param_1 + 8) = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          *(char **)(param_1 + 8) = local_48;
        }
      }
      else {
        if (iVar9 != 0x1b) {
          if (iVar2 != 0x11) {
            if (iVar9 != 0) goto LAB_001010d2;
            local_40 = 7;
            local_48 = "Variant";
            String::parse_latin1((StrRange *)(param_1 + 8));
            goto LAB_00100c81;
          }
LAB_00100fe2:
          if (*(long *)(param_1 + 8) != *(long *)(param_2 + 0x20)) {
            if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)(param_1 + 8),(CowData *)(param_2 + 0x20));
              return;
            }
            goto LAB_00101384;
          }
          goto LAB_00100c81;
        }
        if (iVar2 != 0x26) goto LAB_001010c9;
        local_50 = 0;
        local_48 = "]";
        local_40 = 1;
        String::parse_latin1((StrRange *)&local_50);
        String::replace((char *)&local_60,(char *)(param_2 + 0x20));
        operator+((char *)&local_58,(String *)"Dictionary[");
        String::operator+((String *)&local_48,(String *)&local_58);
        pcVar5 = local_48;
        pcVar3 = *(char **)(param_1 + 8);
        if (pcVar3 == local_48) {
          if (pcVar3 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(pcVar3 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_48 = (char *)0x0;
              Memory::free_static(pcVar5 + -0x10,false);
            }
          }
        }
        else {
          if (pcVar3 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(pcVar3 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar7 = *(long *)(param_1 + 8);
              *(undefined8 *)(param_1 + 8) = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          *(char **)(param_1 + 8) = local_48;
        }
        lVar7 = local_58;
        if (local_58 != 0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = 0;
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
LAB_00100dc8:
      lVar7 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    else {
LAB_00100c1e:
      pcVar3 = *(char **)(lVar7 + 8);
      local_50 = 0;
      if (pcVar3 == (char *)0x0) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          plVar1 = (long *)(*(long *)(lVar7 + 0x10) + -0x10);
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_00100c5a;
            LOCK();
            lVar8 = *plVar1;
            bVar10 = lVar4 == lVar8;
            if (bVar10) {
              *plVar1 = lVar4 + 1;
              lVar8 = lVar4;
            }
            UNLOCK();
          } while (!bVar10);
          if (lVar8 != -1) {
            local_50 = *(long *)(lVar7 + 0x10);
          }
          goto LAB_00100c5a;
        }
        lVar7 = *(long *)(param_1 + 8);
        if (lVar7 == 0) goto LAB_00100c81;
LAB_00100c6c:
        LOCK();
        plVar1 = (long *)(lVar7 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar7 = *(long *)(param_1 + 8);
          *(undefined8 *)(param_1 + 8) = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      else {
        local_40 = strlen(pcVar3);
        local_48 = pcVar3;
        String::parse_latin1((StrRange *)&local_50);
LAB_00100c5a:
        lVar7 = *(long *)(param_1 + 8);
        if (lVar7 == local_50) goto LAB_00100dc8;
        if (lVar7 != 0) goto LAB_00100c6c;
      }
      *(long *)(param_1 + 8) = local_50;
    }
  }
LAB_00100c81:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101384:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<DocData::ArgumentDoc>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<DocData::ArgumentDoc>::_copy_on_write(CowData<DocData::ArgumentDoc> *this)

{
  CowData CVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  CowData *pCVar6;
  ulong uVar7;
  long lVar8;
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
  if (lVar2 * 0x28 != 0) {
    uVar7 = lVar2 * 0x28 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar8 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        pCVar6 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar5));
        *(undefined8 *)this_00 = 0;
        if (*(long *)pCVar6 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar6);
        }
        *(undefined8 *)(this_00 + 8) = 0;
        if (*(long *)(pCVar6 + 8) != 0) {
          CowData<char32_t>::_ref(this_00 + 8,pCVar6 + 8);
        }
        *(undefined8 *)(this_00 + 0x10) = 0;
        if (*(long *)(pCVar6 + 0x10) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x10,pCVar6 + 0x10);
        }
        CVar1 = pCVar6[0x18];
        *(undefined8 *)(this_00 + 0x20) = 0;
        lVar3 = *(long *)(pCVar6 + 0x20);
        *(CowData *)(this_00 + 0x18) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x20,pCVar6 + 0x20);
        }
        lVar8 = lVar8 + 1;
        this_00 = this_00 + 0x28;
      } while (lVar2 != lVar8);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* DocData::method_doc_from_methodinfo(DocData::MethodDoc&, MethodInfo const&, String const&) */

void DocData::method_doc_from_methodinfo(MethodDoc *param_1,MethodInfo *param_2,String *param_3)

{
  long *plVar1;
  CowData<char32_t> *this;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  PropertyInfo *pPVar13;
  int iVar14;
  long lVar15;
  long in_FS_OFFSET;
  undefined1 local_b8 [16];
  long local_a8;
  CowData<char32_t> local_a0;
  char *local_98 [2];
  char *local_88;
  long local_80;
  long local_78;
  CowData<char32_t> local_70;
  char *local_68 [2];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 != *(long *)param_2) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_1,(CowData *)param_2);
  }
  if (*(long *)(param_1 + 0x28) != *(long *)param_3) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_1 + 0x28),(CowData *)param_3);
  }
  uVar7 = *(uint *)(param_2 + 0x38);
  if ((uVar7 & 8) != 0) {
    local_80 = 7;
    local_88 = "virtual";
    String::parse_latin1((StrRange *)(param_1 + 0x20));
    uVar7 = *(uint *)(param_2 + 0x38);
  }
  if ((uVar7 & 4) != 0) {
    if ((*(long *)(param_1 + 0x20) != 0) && (1 < *(uint *)(*(long *)(param_1 + 0x20) + -8))) {
      String::operator+=((String *)(param_1 + 0x20)," ");
    }
    String::operator+=((String *)(param_1 + 0x20),"const");
    uVar7 = *(uint *)(param_2 + 0x38);
  }
  if ((uVar7 & 0x10) != 0) {
    if ((*(long *)(param_1 + 0x20) != 0) && (1 < *(uint *)(*(long *)(param_1 + 0x20) + -8))) {
      String::operator+=((String *)(param_1 + 0x20)," ");
    }
    String::operator+=((String *)(param_1 + 0x20),"vararg");
    uVar7 = *(uint *)(param_2 + 0x38);
  }
  if ((uVar7 & 0x20) != 0) {
    if ((*(long *)(param_1 + 0x20) != 0) && (1 < *(uint *)(*(long *)(param_1 + 0x20) + -8))) {
      String::operator+=((String *)(param_1 + 0x20)," ");
    }
    String::operator+=((String *)(param_1 + 0x20),"static");
  }
  return_doc_from_retinfo(param_1,(PropertyInfo *)(param_2 + 8));
  if ((*(long **)(param_2 + 0x40) != (long *)0x0) &&
     (pPVar13 = (PropertyInfo *)**(long **)(param_2 + 0x40), pPVar13 != (PropertyInfo *)0x0)) {
    iVar14 = 0;
    do {
      local_a8 = 0;
      local_a0 = (CowData<char32_t>)0x0;
      local_98[0] = (char *)0x0;
      local_b8 = (undefined1  [16])0x0;
      argument_doc_from_arginfo((ArgumentDoc *)local_b8,pPVar13);
      lVar11 = *(long *)(param_2 + 0x50);
      if (lVar11 == 0) {
        lVar15 = *(long *)(param_2 + 0x40);
        if (lVar15 == 0) {
          uVar8 = (ulong)iVar14;
          lVar12 = 0;
          goto LAB_00101abe;
        }
        lVar12 = 0;
        iVar6 = 0;
LAB_00101986:
        iVar9 = *(int *)(lVar15 + 0x10);
      }
      else {
        lVar12 = *(long *)(lVar11 + -8);
        lVar15 = *(long *)(param_2 + 0x40);
        iVar9 = 0;
        iVar6 = (int)lVar12;
        if (lVar15 != 0) goto LAB_00101986;
      }
      uVar7 = (iVar6 + iVar14) - iVar9;
      if (-1 < (int)uVar7) {
        uVar8 = (ulong)uVar7;
        if (lVar12 <= (long)uVar8) {
LAB_00101abe:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar8,lVar12,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        Variant::Variant((Variant *)local_58,(Variant *)(lVar11 + uVar8 * 0x18));
        get_default_value_string((DocData *)&local_88,(Variant *)local_58);
        pcVar5 = local_88;
        pcVar10 = local_98[0];
        if (local_98[0] == local_88) {
          if (local_98[0] != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_98[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_88 = (char *)0x0;
              Memory::free_static(pcVar5 + -0x10,false);
            }
          }
        }
        else {
          if (local_98[0] != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_98[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_98[0] = (char *)0x0;
              Memory::free_static(pcVar10 + -0x10,false);
            }
          }
          local_98[0] = local_88;
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      local_88 = (char *)0x0;
      if (local_b8._0_8_ != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)local_b8);
      }
      local_80 = 0;
      if (local_b8._8_8_ != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)(local_b8 + 8));
      }
      local_78 = 0;
      if (local_a8 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_a8);
      }
      local_68[0] = (char *)0x0;
      local_70 = local_a0;
      pcVar10 = local_98[0];
      if (local_98[0] != (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_68,(CowData *)local_98);
        pcVar10 = local_68[0];
      }
      if (*(long *)(param_1 + 0x58) == 0) {
        lVar11 = 1;
      }
      else {
        lVar11 = *(long *)(*(long *)(param_1 + 0x58) + -8) + 1;
      }
      iVar6 = CowData<DocData::ArgumentDoc>::resize<false>
                        ((CowData<DocData::ArgumentDoc> *)(param_1 + 0x58),lVar11);
      if (iVar6 == 0) {
        if (*(long *)(param_1 + 0x58) == 0) {
          lVar15 = -1;
          lVar11 = 0;
        }
        else {
          lVar11 = *(long *)(*(long *)(param_1 + 0x58) + -8);
          lVar15 = lVar11 + -1;
          if (-1 < lVar15) {
            CowData<DocData::ArgumentDoc>::_copy_on_write
                      ((CowData<DocData::ArgumentDoc> *)(param_1 + 0x58));
            this = (CowData<char32_t> *)(*(long *)(param_1 + 0x58) + lVar15 * 0x28);
            if (*(char **)this != local_88) {
              CowData<char32_t>::_ref(this,(CowData *)&local_88);
            }
            if (*(long *)(this + 8) != local_80) {
              CowData<char32_t>::_ref(this + 8,(CowData *)&local_80);
            }
            if (*(long *)(this + 0x10) != local_78) {
              CowData<char32_t>::_ref(this + 0x10,(CowData *)&local_78);
            }
            this[0x18] = local_70;
            if (pcVar10 != *(char **)(this + 0x20)) {
              CowData<char32_t>::_ref(this + 0x20,(CowData *)local_68);
            }
            goto LAB_001017f9;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar11,"p_index","size()","",false
                   ,false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
      }
LAB_001017f9:
      if (pcVar10 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(pcVar10 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(local_68[0] + -0x10,false);
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
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
        }
      }
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(local_88 + -0x10,false);
        }
      }
      pcVar10 = local_98[0];
      if (local_98[0] != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_98[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_98[0] = (char *)0x0;
          Memory::free_static(pcVar10 + -0x10,false);
        }
      }
      lVar11 = local_a8;
      if (local_a8 != 0) {
        LOCK();
        plVar1 = (long *)(local_a8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a8 = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
      uVar4 = local_b8._8_8_;
      if (local_b8._8_8_ != 0) {
        LOCK();
        plVar1 = (long *)(local_b8._8_8_ + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b8._8_8_ = 0;
          Memory::free_static((void *)(uVar4 + -0x10),false);
        }
      }
      uVar4 = local_b8._0_8_;
      if (local_b8._0_8_ != 0) {
        LOCK();
        plVar1 = (long *)(local_b8._0_8_ + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = local_b8._8_8_;
          local_b8 = auVar3 << 0x40;
          Memory::free_static((void *)(uVar4 + -0x10),false);
        }
      }
      pPVar13 = *(PropertyInfo **)(pPVar13 + 0x30);
      iVar14 = iVar14 + 1;
    } while (pPVar13 != (PropertyInfo *)0x0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<DocData::ArgumentDoc>::_unref() */

void __thiscall CowData<DocData::ArgumentDoc>::_unref(CowData<DocData::ArgumentDoc> *this)

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
          if (plVar6[4] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[4] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[4];
              plVar6[4] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[2] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[2] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[2];
              plVar6[2] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          plVar6 = plVar6 + 5;
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



/* CowData<DocData::ArgumentDoc>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<DocData::ArgumentDoc>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<DocData::ArgumentDoc>::_realloc(long) */

undefined8 __thiscall
CowData<DocData::ArgumentDoc>::_realloc(CowData<DocData::ArgumentDoc> *this,long param_1)

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
/* Error CowData<DocData::ArgumentDoc>::resize<false>(long) */

undefined8 __thiscall
CowData<DocData::ArgumentDoc>::resize<false>(CowData<DocData::ArgumentDoc> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
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
    lVar10 = 0;
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
    lVar10 = lVar8 * 0x28;
    if (lVar10 != 0) {
      uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      lVar10 = (uVar11 | uVar11 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x28 == 0) {
LAB_00102230:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar11 = param_1 * 0x28 - 1;
  uVar11 = uVar11 >> 1 | uVar11;
  uVar11 = uVar11 | uVar11 >> 2;
  uVar11 = uVar11 | uVar11 >> 4;
  uVar11 = uVar11 | uVar11 >> 8;
  uVar11 = uVar11 | uVar11 >> 0x10;
  uVar11 = uVar11 | uVar11 >> 0x20;
  lVar13 = uVar11 + 1;
  if (lVar13 == 0) goto LAB_00102230;
  uVar12 = param_1;
  if (param_1 <= lVar8) {
    while (lVar8 = *(long *)this, lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar12) {
        if (lVar13 != lVar10) {
          uVar7 = _realloc(this,lVar13);
          if ((int)uVar7 != 0) {
            return uVar7;
          }
          lVar8 = *(long *)this;
          if (lVar8 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar8 + -8) = param_1;
        return 0;
      }
      plVar2 = (long *)(lVar8 + uVar12 * 0x28);
      if (plVar2[4] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[4] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[4];
          plVar2[4] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (plVar2[2] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[2] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[2];
          plVar2[2] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (plVar2[1] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[1] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[1];
          plVar2[1] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      uVar12 = uVar12 + 1;
    }
    goto LAB_00102286;
  }
  if (lVar13 == lVar10) {
LAB_001021a3:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00102286:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar9[-1];
    if (param_1 <= lVar8) goto LAB_00102069;
  }
  else {
    if (lVar8 != 0) {
      uVar7 = _realloc(this,lVar13);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_001021a3;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar11 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar8 = 0;
  }
  pauVar6 = (undefined1 (*) [16])(puVar9 + lVar8 * 5);
  do {
    *(undefined8 *)pauVar6[1] = 0;
    pauVar4 = pauVar6 + 2;
    *pauVar6 = (undefined1  [16])0x0;
    pauVar6[1][8] = 0;
    *(undefined8 *)pauVar6[2] = 0;
    pauVar6 = (undefined1 (*) [16])(*pauVar4 + 8);
  } while ((undefined1 (*) [16])(*pauVar4 + 8) != (undefined1 (*) [16])(puVar9 + param_1 * 5));
LAB_00102069:
  puVar9[-1] = param_1;
  return 0;
}



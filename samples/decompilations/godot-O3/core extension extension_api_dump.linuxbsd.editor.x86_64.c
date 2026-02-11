
/* get_builtin_or_variant_type_name(Variant::Type) */

StrRange * get_builtin_or_variant_type_name(StrRange *param_1,int param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    *(undefined8 *)param_1 = 0;
    String::parse_latin1(param_1);
  }
  else {
    Variant::get_type_name();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* fix_doc_description(String const&) */

String * fix_doc_description(String *param_1)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::dedent();
  String::replace((char *)&local_40,(char *)&local_48);
  String::replace((char *)&local_38,(char *)&local_40);
  String::strip_edges(SUB81(param_1,0),SUB81(&local_38,0));
  lVar2 = local_38;
  if (local_38 != 0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
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
  lVar2 = local_48;
  if (local_48 != 0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* compare_value(String const&, String const&, Variant const&, Variant const&, bool) */

ulong compare_value(String *param_1,String *param_2,Variant *param_3,Variant *param_4,bool param_5)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined7 extraout_var;
  Variant *pVVar8;
  Variant *pVVar9;
  ulong uVar10;
  int iVar11;
  long in_FS_OFFSET;
  byte local_e5;
  long local_d8;
  Variant local_d0 [8];
  Variant local_c8 [8];
  Array local_c0 [8];
  long local_b8;
  long local_b0;
  Variant *local_a8;
  Variant *local_a0;
  Variant *local_98 [2];
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98[0] = (Variant *)0x0;
  local_88 = "/";
  local_80 = 1;
  String::parse_latin1((StrRange *)local_98);
  String::operator+((String *)&local_88,param_1);
  String::operator+((String *)&local_d8,(String *)&local_88);
  pcVar3 = local_88;
  if (local_88 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
  pVVar8 = local_98[0];
  if (local_98[0] == (Variant *)0x0) {
LAB_00100306:
    iVar6 = *(int *)param_3;
    if (iVar6 != 0x1c) goto LAB_00100313;
LAB_00100424:
    if (*(int *)param_4 == 0x1c) {
      Variant::operator_cast_to_Array((Variant *)&local_b0);
      Variant::operator_cast_to_Array((Variant *)&local_a8);
      iVar6 = Array::size();
      Variant::Variant((Variant *)local_58,iVar6);
      iVar6 = Array::size();
      Variant::Variant((Variant *)local_78,iVar6);
      local_88 = "size";
      local_98[0] = (Variant *)0x0;
      local_80 = 4;
      String::parse_latin1((StrRange *)local_98);
      uVar7 = compare_value((String *)&local_d8,(String *)local_98,(Variant *)local_78,
                            (Variant *)local_58,param_5);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      uVar7 = uVar7 ^ 1;
      iVar11 = 0;
      iVar6 = Array::size();
      if (0 < iVar6) {
        do {
          iVar6 = Array::size();
          if (iVar6 <= iVar11) break;
          pVVar8 = (Variant *)Array::operator[]((int)(Variant *)&local_a8);
          pVVar9 = (Variant *)Array::operator[]((int)(Variant *)&local_b0);
          itos((long)&local_88);
          cVar5 = compare_value((String *)&local_d8,(String *)&local_88,pVVar9,pVVar8,param_5);
          pcVar3 = local_88;
          if (local_88 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_88 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_88 = (char *)0x0;
              Memory::free_static(pcVar3 + -0x10,false);
            }
          }
          if (cVar5 == '\0') {
            uVar7 = 1;
          }
          iVar11 = iVar11 + 1;
          iVar6 = Array::size();
        } while (iVar11 < iVar6);
      }
      uVar10 = (ulong)(uVar7 ^ 1);
      Array::~Array((Array *)&local_a8);
      Array::~Array((Array *)&local_b0);
      goto LAB_00100394;
    }
  }
  else {
    LOCK();
    pVVar9 = local_98[0] + -0x10;
    *(long *)pVVar9 = *(long *)pVVar9 + -1;
    UNLOCK();
    if (*(long *)pVVar9 != 0) goto LAB_00100306;
    local_98[0] = (Variant *)0x0;
    Memory::free_static(pVVar8 + -0x10,false);
    iVar6 = *(int *)param_3;
    if (iVar6 == 0x1c) goto LAB_00100424;
LAB_00100313:
    if ((iVar6 == 0x1b) && (*(int *)param_4 == 0x1b)) {
      Variant::operator_cast_to_Dictionary(local_d0);
      Variant::operator_cast_to_Dictionary(local_c8);
      Dictionary::keys();
      Array::begin();
      Array::end();
      local_e5 = 0;
      if (local_a8 != local_98[0]) {
        do {
          pVVar8 = local_a8;
          if (local_a0 != (Variant *)0x0) {
            Variant::operator=(local_a0,local_a8);
            pVVar8 = local_a0;
          }
          cVar5 = Dictionary::has(local_c8);
          if (cVar5 == '\0') {
            Variant::Variant((Variant *)local_58,pVVar8);
            local_b0 = 0;
            if (*(long *)param_1 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)param_1);
            }
            local_b8 = 0;
            local_88 = "Validate extension JSON: Error: Field \'%s\': %s was removed.";
            local_80 = 0x3b;
            String::parse_latin1((StrRange *)&local_b8);
            vformat<String,Variant>
                      ((String *)&local_88,(StrRange *)&local_b8,(CowData<char32_t> *)&local_b0,
                       (Variant *)local_58);
            print_error((String *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
LAB_00100725:
            local_e5 = 1;
          }
          else if (param_5) {
            Variant::Variant((Variant *)local_58,"name");
            cVar5 = Variant::operator==(pVVar8,(Variant *)local_58);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (cVar5 == '\0') goto LAB_001006d5;
          }
          else {
LAB_001006d5:
            pVVar8 = (Variant *)Dictionary::operator[](local_c8);
            pVVar9 = (Variant *)Dictionary::operator[](local_d0);
            Variant::operator_cast_to_String((Variant *)&local_88);
            cVar5 = compare_value((String *)&local_d8,(String *)&local_88,pVVar9,pVVar8,param_5);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            if (cVar5 == '\0') goto LAB_00100725;
          }
          local_a8 = local_a8 + 0x18;
        } while (local_a8 != local_98[0]);
      }
      Array::~Array(local_c0);
      Dictionary::keys();
      Array::begin();
      Array::end();
      if (local_98[0] != local_a8) {
        do {
          pVVar8 = local_a8;
          if (local_a0 != (Variant *)0x0) {
            Variant::operator=(local_a0,local_a8);
            pVVar8 = local_a0;
          }
          cVar5 = Dictionary::has(local_d0);
          if (cVar5 == '\0') {
            pVVar9 = (Variant *)Dictionary::operator[](local_c8);
            Variant::Variant((Variant *)local_58,pVVar9);
            Variant::Variant((Variant *)local_78,pVVar8);
            local_b0 = 0;
            if (*(long *)param_1 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)param_1);
            }
            local_b8 = 0;
            local_88 = "Validate extension JSON: Error: Field \'%s\': %s was added with value %s.";
            local_80 = 0x47;
            String::parse_latin1((StrRange *)&local_b8);
            vformat<String,Variant,Variant>
                      ((String *)&local_88,(StrRange *)&local_b8,(CowData<char32_t> *)&local_b0,
                       (Variant *)local_78,(Variant *)local_58);
            print_error((String *)&local_88);
            pcVar3 = local_88;
            if (local_88 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_88 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_88 = (char *)0x0;
                Memory::free_static(pcVar3 + -0x10,false);
              }
            }
            lVar2 = local_b8;
            if (local_b8 != 0) {
              LOCK();
              plVar1 = (long *)(local_b8 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_b8 = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
              }
            }
            lVar2 = local_b0;
            if (local_b0 != 0) {
              LOCK();
              plVar1 = (long *)(local_b0 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_b0 = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
              }
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            local_e5 = 1;
          }
          local_a8 = local_a8 + 0x18;
        } while (local_a8 != local_98[0]);
      }
      Array::~Array(local_c0);
      Dictionary::~Dictionary((Dictionary *)local_c8);
      Dictionary::~Dictionary((Dictionary *)local_d0);
      uVar10 = (ulong)(local_e5 ^ 1);
      goto LAB_00100394;
    }
  }
  local_50 = (undefined1  [16])0x0;
  local_88 = (char *)((ulong)local_88 & 0xffffffff00000000);
  local_98[0] = (Variant *)CONCAT71(local_98[0]._1_7_,1);
  local_58[0] = 0;
  Variant::evaluate((Operator *)&local_88,param_3,param_4,(Variant *)local_58,(bool *)local_98);
  bVar4 = Variant::operator_cast_to_bool((Variant *)local_58);
  uVar10 = CONCAT71(extraout_var,bVar4) & 0xffffffff;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((char)uVar10 == '\0') {
    Variant::get_construct_string();
    Variant::get_construct_string();
    local_98[0] = (Variant *)0x0;
    if (*(long *)param_2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_98,(CowData *)param_2);
    }
    local_a8 = (Variant *)0x0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)param_1);
    }
    local_b0 = 0;
    local_88 = 
    "Validate extension JSON: Error: Field \'%s\': %s changed value in new API, from %s to %s.";
    local_80 = 0x57;
    String::parse_latin1((StrRange *)&local_b0);
    vformat<String,String,String,String>
              ((String *)&local_88,(StrRange *)&local_b0,(CowData<char32_t> *)&local_a8,
               (StrRange *)local_98,(CowData<char32_t> *)local_c0,(CowData<char32_t> *)&local_b8);
    print_error((String *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  }
LAB_00100394:
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



/* get_property_info_type_name(PropertyInfo const&) */

PropertyInfo * get_property_info_type_name(PropertyInfo *param_1)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  int *in_RSI;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  iVar3 = *in_RSI;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar3 == 2) {
    iVar3 = in_RSI[6];
    if (iVar3 == 0x1e) {
      if ((*(long *)(in_RSI + 8) == 0) || (*(uint *)(*(long *)(in_RSI + 8) + -8) < 2)) {
        *(undefined8 *)param_1 = 0;
        local_48 = "void*";
        local_40 = 5;
        String::parse_latin1((StrRange *)param_1);
      }
      else {
        local_50 = 0;
        local_48 = "*";
        local_40 = 1;
        String::parse_latin1((StrRange *)&local_50);
        String::operator+((String *)param_1,(String *)(in_RSI + 8));
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      }
      goto LAB_00100cbb;
    }
    uVar4 = in_RSI[10];
    if ((uVar4 & 0x10000) != 0) {
      lVar6 = *(long *)(in_RSI + 4);
      if (lVar6 == 0) {
LAB_00101049:
        local_50 = 0;
      }
      else {
        pcVar5 = *(char **)(lVar6 + 8);
        local_50 = 0;
        if (pcVar5 == (char *)0x0) {
          if (*(long *)(lVar6 + 0x10) == 0) goto LAB_00101049;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(lVar6 + 0x10));
        }
        else {
          local_40 = strlen(pcVar5);
          local_48 = pcVar5;
          String::parse_latin1((StrRange *)&local_50);
        }
      }
      local_58 = 0;
      local_48 = "enum::";
      local_40 = 6;
      String::parse_latin1((StrRange *)&local_58);
      String::operator+((String *)param_1,(String *)&local_58);
      lVar6 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
LAB_00100eac:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      goto LAB_00100cbb;
    }
    if ((uVar4 & 0x200) != 0) {
      lVar6 = *(long *)(in_RSI + 4);
      if (lVar6 == 0) {
        local_50 = 0;
      }
      else {
        pcVar5 = *(char **)(lVar6 + 8);
        local_50 = 0;
        if (pcVar5 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(lVar6 + 0x10));
        }
        else {
          local_40 = strlen(pcVar5);
          local_48 = pcVar5;
          String::parse_latin1((StrRange *)&local_50);
        }
      }
      local_58 = 0;
      local_48 = "bitfield::";
      local_40 = 10;
      String::parse_latin1((StrRange *)&local_58);
      String::operator+((String *)param_1,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      goto LAB_00100eac;
    }
    if ((uVar4 & 0x40000) != 0) {
      *(undefined8 *)param_1 = 0;
      local_48 = "int";
      local_40 = 3;
      String::parse_latin1((StrRange *)param_1);
      goto LAB_00100cbb;
    }
    lVar6 = *(long *)(in_RSI + 4);
    if (lVar6 != 0) goto LAB_00100c87;
joined_r0x00100f3b:
    if (iVar3 == 0x11) {
LAB_00100f3d:
      *(undefined8 *)param_1 = 0;
      if (*(long *)(in_RSI + 8) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)param_1,(CowData *)(in_RSI + 8));
      }
      goto LAB_00100cbb;
    }
  }
  else {
    if (iVar3 == 0x1c) {
      if (in_RSI[6] == 0x1f) {
        local_48 = "typedarray::";
        local_40 = 0xc;
LAB_00100ee8:
        local_50 = 0;
        String::parse_latin1((StrRange *)&local_50);
        String::operator+((String *)param_1,(String *)&local_50);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        goto LAB_00100cbb;
      }
LAB_00100c7a:
      lVar6 = *(long *)(in_RSI + 4);
      if (lVar6 != 0) {
LAB_00100c87:
        pcVar5 = *(char **)(lVar6 + 8);
        *(undefined8 *)param_1 = 0;
        if (pcVar5 == (char *)0x0) {
          if (*(long *)(lVar6 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)param_1,(CowData *)(lVar6 + 0x10));
          }
        }
        else {
          local_40 = strlen(pcVar5);
          local_48 = pcVar5;
          String::parse_latin1((StrRange *)param_1);
        }
        goto LAB_00100cbb;
      }
      iVar3 = in_RSI[6];
      goto joined_r0x00100f3b;
    }
    if (iVar3 == 0x1b) {
      if (in_RSI[6] == 0x26) {
        local_48 = "typeddictionary::";
        local_40 = 0x11;
        goto LAB_00100ee8;
      }
      goto LAB_00100c7a;
    }
    lVar6 = *(long *)(in_RSI + 4);
    if (lVar6 != 0) goto LAB_00100c87;
    if (in_RSI[6] == 0x11) goto LAB_00100f3d;
    if (iVar3 == 0) {
      bVar2 = *(byte *)((long)in_RSI + 0x2a);
      *(undefined8 *)param_1 = 0;
      if ((bVar2 & 2) == 0) {
        local_40 = 4;
        local_48 = "void";
        String::parse_latin1((StrRange *)param_1);
      }
      else {
        local_40 = 7;
        local_48 = "Variant";
        String::parse_latin1((StrRange *)param_1);
      }
      goto LAB_00100cbb;
    }
  }
  Variant::get_type_name(param_1);
LAB_00100cbb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
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



/* CowData<DocData::MethodDoc>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<DocData::MethodDoc>::_copy_on_write(CowData<DocData::MethodDoc> *this)

{
  long *plVar1;
  CowData CVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  CowData *pCVar8;
  ulong uVar9;
  long lVar10;
  CowData<char32_t> *this_00;
  bool bVar11;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar3 = *(long *)(*(long *)this + -8);
  uVar9 = 0x10;
  if (lVar3 * 0x78 != 0) {
    uVar9 = lVar3 * 0x78 - 1;
    uVar9 = uVar9 | uVar9 >> 1;
    uVar9 = uVar9 | uVar9 >> 2;
    uVar9 = uVar9 | uVar9 >> 4;
    uVar9 = uVar9 | uVar9 >> 8;
    uVar9 = uVar9 | uVar9 >> 0x10;
    uVar9 = (uVar9 | uVar9 >> 0x20) + 0x11;
  }
  puVar6 = (undefined8 *)Memory::alloc_static(uVar9,false);
  if (puVar6 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar10 = 0;
  *puVar6 = 1;
  puVar6[1] = lVar3;
  this_00 = (CowData<char32_t> *)(puVar6 + 2);
  if (lVar3 != 0) {
    do {
      pCVar8 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar6));
      *(undefined8 *)this_00 = 0;
      if (*(long *)pCVar8 != 0) {
        CowData<char32_t>::_ref(this_00,pCVar8);
      }
      *(undefined8 *)(this_00 + 8) = 0;
      if (*(long *)(pCVar8 + 8) != 0) {
        CowData<char32_t>::_ref(this_00 + 8,pCVar8 + 8);
      }
      *(undefined8 *)(this_00 + 0x10) = 0;
      if (*(long *)(pCVar8 + 0x10) != 0) {
        CowData<char32_t>::_ref(this_00 + 0x10,pCVar8 + 0x10);
      }
      CVar2 = pCVar8[0x18];
      *(undefined8 *)(this_00 + 0x20) = 0;
      lVar4 = *(long *)(pCVar8 + 0x20);
      *(CowData *)(this_00 + 0x18) = CVar2;
      if (lVar4 != 0) {
        CowData<char32_t>::_ref(this_00 + 0x20,pCVar8 + 0x20);
      }
      *(undefined8 *)(this_00 + 0x28) = 0;
      if (*(long *)(pCVar8 + 0x28) != 0) {
        CowData<char32_t>::_ref(this_00 + 0x28,pCVar8 + 0x28);
      }
      CVar2 = pCVar8[0x30];
      *(undefined8 *)(this_00 + 0x38) = 0;
      lVar4 = *(long *)(pCVar8 + 0x38);
      *(CowData *)(this_00 + 0x30) = CVar2;
      if (lVar4 != 0) {
        CowData<char32_t>::_ref(this_00 + 0x38,pCVar8 + 0x38);
      }
      CVar2 = pCVar8[0x40];
      *(undefined8 *)(this_00 + 0x48) = 0;
      lVar4 = *(long *)(pCVar8 + 0x48);
      *(CowData *)(this_00 + 0x40) = CVar2;
      if (lVar4 != 0) {
        CowData<char32_t>::_ref(this_00 + 0x48,pCVar8 + 0x48);
      }
      *(undefined8 *)(this_00 + 0x58) = 0;
      if (*(long *)(pCVar8 + 0x58) != 0) {
        CowData<DocData::ArgumentDoc>::_unref((CowData<DocData::ArgumentDoc> *)(this_00 + 0x58));
        if (*(long *)(pCVar8 + 0x58) != 0) {
          plVar1 = (long *)(*(long *)(pCVar8 + 0x58) + -0x10);
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_00101466;
            LOCK();
            lVar7 = *plVar1;
            bVar11 = lVar4 == lVar7;
            if (bVar11) {
              *plVar1 = lVar4 + 1;
              lVar7 = lVar4;
            }
            UNLOCK();
          } while (!bVar11);
          if (lVar7 != -1) {
            *(undefined8 *)(this_00 + 0x58) = *(undefined8 *)(pCVar8 + 0x58);
          }
        }
      }
LAB_00101466:
      *(undefined8 *)(this_00 + 0x68) = 0;
      plVar1 = (long *)(*(long *)(pCVar8 + 0x68) + -0x10);
      if (*(long *)(pCVar8 + 0x68) != 0) {
        do {
          lVar4 = *plVar1;
          if (lVar4 == 0) goto LAB_0010149c;
          LOCK();
          lVar7 = *plVar1;
          bVar11 = lVar4 == lVar7;
          if (bVar11) {
            *plVar1 = lVar4 + 1;
            lVar7 = lVar4;
          }
          UNLOCK();
        } while (!bVar11);
        if (lVar7 != -1) {
          *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(pCVar8 + 0x68);
        }
      }
LAB_0010149c:
      *(undefined8 *)(this_00 + 0x70) = 0;
      if (*(long *)(pCVar8 + 0x70) != 0) {
        CowData<char32_t>::_ref(this_00 + 0x70,pCVar8 + 0x70);
      }
      lVar10 = lVar10 + 1;
      this_00 = this_00 + 0x78;
    } while (lVar3 != lVar10);
  }
  _unref(this);
  *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar6 + 2);
  return;
}



/* CowData<DocData::ConstantDoc>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<DocData::ConstantDoc>::_copy_on_write(CowData<DocData::ConstantDoc> *this)

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
  if (lVar2 * 0x60 != 0) {
    uVar7 = lVar2 * 0x60 - 1;
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
        CVar1 = pCVar6[0x10];
        *(undefined8 *)(this_00 + 0x18) = 0;
        lVar3 = *(long *)(pCVar6 + 0x18);
        *(CowData *)(this_00 + 0x10) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x18,pCVar6 + 0x18);
        }
        *(undefined8 *)(this_00 + 0x20) = 0;
        if (*(long *)(pCVar6 + 0x20) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x20,pCVar6 + 0x20);
        }
        CVar1 = pCVar6[0x28];
        *(undefined8 *)(this_00 + 0x30) = 0;
        lVar3 = *(long *)(pCVar6 + 0x30);
        *(CowData *)(this_00 + 0x28) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x30,pCVar6 + 0x30);
        }
        CVar1 = pCVar6[0x38];
        *(undefined8 *)(this_00 + 0x40) = 0;
        lVar3 = *(long *)(pCVar6 + 0x40);
        *(CowData *)(this_00 + 0x38) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x40,pCVar6 + 0x40);
        }
        CVar1 = pCVar6[0x48];
        *(undefined8 *)(this_00 + 0x50) = 0;
        lVar3 = *(long *)(pCVar6 + 0x50);
        *(CowData *)(this_00 + 0x48) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x50,pCVar6 + 0x50);
        }
        *(undefined8 *)(this_00 + 0x58) = 0;
        if (*(long *)(pCVar6 + 0x58) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x58,pCVar6 + 0x58);
        }
        lVar8 = lVar8 + 1;
        this_00 = this_00 + 0x60;
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



/* CowData<DocData::PropertyDoc>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<DocData::PropertyDoc>::_copy_on_write(CowData<DocData::PropertyDoc> *this)

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
  if (lVar2 * 0x78 != 0) {
    uVar7 = lVar2 * 0x78 - 1;
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
        *(undefined8 *)(this_00 + 0x28) = 0;
        if (*(long *)(pCVar6 + 0x28) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x28,pCVar6 + 0x28);
        }
        *(undefined8 *)(this_00 + 0x30) = 0;
        if (*(long *)(pCVar6 + 0x30) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x30,pCVar6 + 0x30);
        }
        *(undefined8 *)(this_00 + 0x38) = 0;
        if (*(long *)(pCVar6 + 0x38) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x38,pCVar6 + 0x38);
        }
        CVar1 = pCVar6[0x40];
        *(undefined8 *)(this_00 + 0x48) = 0;
        lVar3 = *(long *)(pCVar6 + 0x48);
        *(CowData *)(this_00 + 0x40) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x48,pCVar6 + 0x48);
        }
        CVar1 = pCVar6[0x50];
        *(undefined8 *)(this_00 + 0x58) = 0;
        lVar3 = *(long *)(pCVar6 + 0x58);
        *(CowData *)(this_00 + 0x50) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x58,pCVar6 + 0x58);
        }
        CVar1 = pCVar6[0x60];
        *(undefined8 *)(this_00 + 0x68) = 0;
        lVar3 = *(long *)(pCVar6 + 0x68);
        *(CowData *)(this_00 + 0x60) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x68,pCVar6 + 0x68);
        }
        *(undefined8 *)(this_00 + 0x70) = 0;
        if (*(long *)(pCVar6 + 0x70) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x70,pCVar6 + 0x70);
        }
        lVar8 = lVar8 + 1;
        this_00 = this_00 + 0x78;
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



/* GDExtensionAPIDump::generate_extension_api(bool) */

GDExtensionAPIDump * __thiscall
GDExtensionAPIDump::generate_extension_api(GDExtensionAPIDump *this,bool param_1)

{
  long *plVar1;
  void *pvVar2;
  StringName *pSVar3;
  int *piVar4;
  StringName *pSVar5;
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
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  code *pcVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined8 uVar66;
  bool bVar67;
  char cVar68;
  bool bVar69;
  undefined1 uVar70;
  int iVar71;
  uint uVar72;
  uint uVar73;
  int iVar74;
  undefined4 uVar75;
  Variant *pVVar76;
  Variant *pVVar77;
  size_t sVar78;
  char *pcVar79;
  size_t sVar80;
  long *plVar81;
  CowData<char32_t> *this_00;
  undefined8 uVar82;
  ulong uVar83;
  ulong uVar84;
  undefined1 (*pauVar85) [16];
  List *pLVar86;
  long lVar87;
  long lVar88;
  uint uVar89;
  long lVar90;
  int iVar91;
  uint uVar92;
  String *pSVar93;
  uint uVar94;
  int iVar95;
  long lVar96;
  undefined8 *puVar97;
  String *pSVar98;
  long lVar99;
  int *piVar100;
  ulong uVar101;
  String *pSVar102;
  long in_FS_OFFSET;
  byte bVar103;
  long *local_10b0;
  long local_10a8;
  long local_10a0;
  StringName *local_1098;
  Variant *local_1090;
  long local_1078;
  long local_1050;
  Array local_1018 [8];
  undefined8 *local_1010;
  Dictionary local_1008 [8];
  long local_1000;
  Array local_ff8 [8];
  undefined8 *local_ff0;
  long local_fe8;
  Dictionary local_fe0 [8];
  Array local_fd8 [8];
  long *local_fd0;
  undefined8 *local_fc8;
  undefined8 *local_fc0;
  undefined8 *local_fb8;
  long local_fb0;
  char *local_fa8;
  size_t local_fa0;
  char *local_f98;
  undefined1 local_f90 [16];
  undefined1 local_f80 [16];
  undefined8 local_f70;
  char *local_f68;
  undefined1 local_f60 [16];
  undefined1 local_f50 [16];
  undefined8 local_f40;
  int local_f38 [8];
  int local_f18 [2];
  undefined8 local_f10;
  undefined8 uStack_f08;
  int local_ef8 [2];
  undefined8 local_ef0;
  undefined8 uStack_ee8;
  Variant local_bd8 [2968];
  long local_40;
  
  bVar103 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary((Dictionary *)this);
  Dictionary::Dictionary((Dictionary *)&local_f68);
  Variant::Variant((Variant *)local_ef8,4);
  Variant::Variant((Variant *)local_f18,"version_major");
  pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_f68);
  if (pVVar76 != (Variant *)local_ef8) {
    if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar76 = 0;
    *(int *)pVVar76 = local_ef8[0];
    *(undefined8 *)(pVVar76 + 8) = local_ef0;
    *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
    local_ef8[0] = 0;
  }
  if (Variant::needs_deinit[local_f18[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_ef8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_ef8,4);
  Variant::Variant((Variant *)local_f18,"version_minor");
  pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_f68);
  if (pVVar76 != (Variant *)local_ef8) {
    if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar76 = 0;
    *(int *)pVVar76 = local_ef8[0];
    *(undefined8 *)(pVVar76 + 8) = local_ef0;
    *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
    local_ef8[0] = 0;
  }
  if (Variant::needs_deinit[local_f18[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_ef8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_ef8,1);
  Variant::Variant((Variant *)local_f18,"version_patch");
  pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_f68);
  if (pVVar76 != (Variant *)local_ef8) {
    if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar76 = 0;
    *(int *)pVVar76 = local_ef8[0];
    *(undefined8 *)(pVVar76 + 8) = local_ef0;
    *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
    local_ef8[0] = 0;
  }
  if (Variant::needs_deinit[local_f18[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_ef8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_ef8,"stable");
  Variant::Variant((Variant *)local_f18,"version_status");
  pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_f68);
  if (pVVar76 != (Variant *)local_ef8) {
    if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar76 = 0;
    *(int *)pVVar76 = local_ef8[0];
    *(undefined8 *)(pVVar76 + 8) = local_ef0;
    *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
    local_ef8[0] = 0;
  }
  if (Variant::needs_deinit[local_f18[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_ef8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_ef8,"custom_build");
  Variant::Variant((Variant *)local_f18,"version_build");
  pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_f68);
  if (pVVar76 != (Variant *)local_ef8) {
    if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar76 = 0;
    *(int *)pVVar76 = local_ef8[0];
    *(undefined8 *)(pVVar76 + 8) = local_ef0;
    *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
    local_ef8[0] = 0;
  }
  if (Variant::needs_deinit[local_f18[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_ef8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_ef8,"Godot Engine v4.4.1.stable.custom_build");
  Variant::Variant((Variant *)local_f18,"version_full_name");
  pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_f68);
  if (pVVar76 != (Variant *)local_ef8) {
    if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar76 = 0;
    *(int *)pVVar76 = local_ef8[0];
    *(undefined8 *)(pVVar76 + 8) = local_ef0;
    *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
    local_ef8[0] = 0;
  }
  if (Variant::needs_deinit[local_f18[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_ef8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_f68);
  Variant::Variant((Variant *)local_f18,"header");
  pVVar76 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar76 != (Variant *)local_ef8) {
    if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar76 = 0;
    *(int *)pVVar76 = local_ef8[0];
    *(undefined8 *)(pVVar76 + 8) = local_ef0;
    *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
    local_ef8[0] = 0;
  }
  if (Variant::needs_deinit[local_f18[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_ef8[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar96 = 0;
  Dictionary::~Dictionary((Dictionary *)&local_f68);
  puVar97 = &DAT_0011f0c0;
  pVVar76 = (Variant *)local_ef8;
  for (lVar88 = 100; lVar88 != 0; lVar88 = lVar88 + -1) {
    *(undefined8 *)pVVar76 = *puVar97;
    puVar97 = puVar97 + (ulong)bVar103 * -2 + 1;
    pVVar76 = pVVar76 + (ulong)bVar103 * -0x10 + 8;
  }
  Array::Array((Array *)&local_fc0);
  do {
    Dictionary::Dictionary((Dictionary *)&local_fb8);
    Variant::Variant((Variant *)local_f18,(&generate_extension_api(bool)::build_config_name)[lVar96]
                    );
    Variant::Variant((Variant *)local_f38,"build_configuration");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
    if (pVVar76 != (Variant *)local_f18) {
      if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar76 = 0;
      *(int *)pVVar76 = local_f18[0];
      *(undefined8 *)(pVVar76 + 8) = local_f10;
      *(undefined8 *)(pVVar76 + 0x10) = uStack_f08;
      local_f18[0] = 0;
    }
    if (Variant::needs_deinit[local_f38[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    Array::Array((Array *)&local_fa8);
    pVVar76 = (Variant *)local_ef8;
    do {
      if (*(int *)pVVar76 == 0x27) {
        local_f98 = (char *)0x0;
        local_f68 = "Variant";
        local_f60._0_8_ = 7;
        String::parse_latin1((StrRange *)&local_f98);
      }
      else {
        Variant::get_type_name((String *)&local_f98);
      }
      Dictionary::Dictionary((Dictionary *)&local_f68);
      Variant::Variant((Variant *)local_f18,(String *)&local_f98);
      Variant::Variant((Variant *)local_f38,"name");
      pVVar77 = (Variant *)Dictionary::operator[]((Variant *)&local_f68);
      if (pVVar77 != (Variant *)local_f18) {
        if (Variant::needs_deinit[*(int *)pVVar77] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar77 = 0;
        *(int *)pVVar77 = local_f18[0];
        *(undefined8 *)(pVVar77 + 8) = local_f10;
        *(undefined8 *)(pVVar77 + 0x10) = uStack_f08;
        local_f18[0] = 0;
      }
      if (Variant::needs_deinit[local_f38[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (lVar96 == 2) {
        uVar72 = *(uint *)(pVVar76 + 0xc);
      }
      else if (lVar96 == 3) {
        uVar72 = *(uint *)(pVVar76 + 0x10);
      }
      else if (lVar96 == 1) {
        uVar72 = *(uint *)(pVVar76 + 8);
      }
      else {
        uVar72 = *(uint *)(pVVar76 + 4);
      }
      Variant::Variant((Variant *)local_f18,uVar72);
      Variant::Variant((Variant *)local_f38,"size");
      pVVar77 = (Variant *)Dictionary::operator[]((Variant *)&local_f68);
      if (pVVar77 != (Variant *)local_f18) {
        if (Variant::needs_deinit[*(int *)pVVar77] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar77 = 0;
        *(int *)pVVar77 = local_f18[0];
        *(undefined8 *)(pVVar77 + 8) = local_f10;
        *(undefined8 *)(pVVar77 + 0x10) = uStack_f08;
        local_f18[0] = 0;
      }
      if (Variant::needs_deinit[local_f38[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_f18,(Dictionary *)&local_f68);
      Array::push_back((Variant *)&local_fa8);
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)&local_f68);
      pcVar79 = local_f98;
      if (local_f98 != (char *)0x0) {
        LOCK();
        plVar81 = (long *)(local_f98 + -0x10);
        *plVar81 = *plVar81 + -1;
        UNLOCK();
        if (*plVar81 == 0) {
          local_f98 = (char *)0x0;
          Memory::free_static(pcVar79 + -0x10,false);
        }
      }
      pVVar76 = pVVar76 + 0x14;
    } while (local_bd8 != pVVar76);
    Variant::Variant((Variant *)local_f18,(Array *)&local_fa8);
    Variant::Variant((Variant *)local_f38,"sizes");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
    if (pVVar76 != (Variant *)local_f18) {
      if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar76 = 0;
      *(int *)pVVar76 = local_f18[0];
      *(undefined8 *)(pVVar76 + 8) = local_f10;
      *(undefined8 *)(pVVar76 + 0x10) = uStack_f08;
      local_f18[0] = 0;
    }
    if (Variant::needs_deinit[local_f38[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_f18,(Dictionary *)&local_fb8);
    Array::push_back((Variant *)&local_fc0);
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar96 = lVar96 + 1;
    Array::~Array((Array *)&local_fa8);
    Dictionary::~Dictionary((Dictionary *)&local_fb8);
  } while (lVar96 != 4);
  Variant::Variant((Variant *)local_f18,(Array *)&local_fc0);
  Variant::Variant((Variant *)local_f38,"builtin_class_sizes");
  pVVar76 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar76 != (Variant *)local_f18) {
    if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar76 = 0;
    *(int *)pVVar76 = local_f18[0];
    *(undefined8 *)(pVVar76 + 8) = local_f10;
    *(undefined8 *)(pVVar76 + 0x10) = uStack_f08;
    local_f18[0] = 0;
  }
  if (Variant::needs_deinit[local_f38[0]] == '\0') {
    cVar68 = Variant::needs_deinit[local_f18[0]];
  }
  else {
    Variant::_clear_internal();
    cVar68 = Variant::needs_deinit[local_f18[0]];
  }
  if (cVar68 != '\0') {
    Variant::_clear_internal();
  }
  Array::~Array((Array *)&local_fc0);
  puVar97 = &DAT_001131c0;
  pVVar76 = (Variant *)local_ef8;
  for (lVar88 = 0x1d6; lVar88 != 0; lVar88 = lVar88 + -1) {
    *(undefined8 *)pVVar76 = *puVar97;
    puVar97 = puVar97 + (ulong)bVar103 * -2 + 1;
    pVVar76 = pVVar76 + (ulong)bVar103 * -0x10 + 8;
  }
  Array::Array((Array *)&local_fd0);
  local_10a0 = 0;
LAB_00102414:
  Dictionary::Dictionary((Dictionary *)&local_fc8);
  Variant::Variant((Variant *)local_f18,
                   (&generate_extension_api(bool)::build_config_name)[local_10a0]);
  Variant::Variant((Variant *)local_f38,"build_configuration");
  pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
  if (pVVar76 != (Variant *)local_f18) {
    if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar76 = 0;
    *(int *)pVVar76 = local_f18[0];
    *(undefined8 *)(pVVar76 + 8) = local_f10;
    *(undefined8 *)(pVVar76 + 0x10) = uStack_f08;
    local_f18[0] = 0;
  }
  if (Variant::needs_deinit[local_f38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_f18[0]] != '\0') {
    Variant::_clear_internal();
  }
  Array::Array((Array *)&local_fc0);
  Dictionary::Dictionary((Dictionary *)&local_fb8);
  Array::Array((Array *)&local_fa8);
  local_10b0._0_4_ = 0;
  pVVar76 = (Variant *)local_ef8;
  iVar91 = 0;
  do {
    iVar71 = *(int *)pVVar76;
    if (iVar91 != iVar71) {
      if (iVar91 != 0) {
        Variant::Variant((Variant *)local_f18,(Array *)&local_fa8);
        Variant::Variant((Variant *)local_f38,"members");
        pVVar77 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
        if (pVVar77 != (Variant *)local_f18) {
          if (Variant::needs_deinit[*(int *)pVVar77] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar77 = 0;
          *(int *)pVVar77 = local_f18[0];
          *(undefined8 *)(pVVar77 + 8) = local_f10;
          *(undefined8 *)(pVVar77 + 0x10) = uStack_f08;
          local_f18[0] = 0;
        }
        if (Variant::needs_deinit[local_f38[0]] == '\0') {
          cVar68 = Variant::needs_deinit[local_f18[0]];
        }
        else {
          Variant::_clear_internal();
          cVar68 = Variant::needs_deinit[local_f18[0]];
        }
        if (cVar68 != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_f18,(Dictionary *)&local_fb8);
        Array::push_back((Variant *)&local_fc0);
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      if (iVar71 == 0) break;
      if (iVar71 == 0x27) {
        local_f98 = (char *)0x0;
        local_f68 = "Variant";
        local_f60._0_8_ = 7;
        String::parse_latin1((StrRange *)&local_f98);
      }
      else {
        Variant::get_type_name((String *)&local_f98,iVar71);
      }
      Dictionary::Dictionary((Dictionary *)&local_f68);
      Dictionary::operator=((Dictionary *)&local_fb8,(Dictionary *)&local_f68);
      Dictionary::~Dictionary((Dictionary *)&local_f68);
      Array::Array((Array *)&local_f68);
      Array::operator=((Array *)&local_fa8,(Array *)&local_f68);
      Array::~Array((Array *)&local_f68);
      Variant::Variant((Variant *)local_f18,(String *)&local_f98);
      Variant::Variant((Variant *)local_f38,"name");
      pVVar77 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
      if (pVVar77 != (Variant *)local_f18) {
        if (Variant::needs_deinit[*(int *)pVVar77] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar77 = 0;
        *(int *)pVVar77 = local_f18[0];
        *(undefined8 *)(pVVar77 + 8) = local_f10;
        *(undefined8 *)(pVVar77 + 0x10) = uStack_f08;
        local_f18[0] = 0;
      }
      if (Variant::needs_deinit[local_f38[0]] == '\0') {
        cVar68 = Variant::needs_deinit[local_f18[0]];
      }
      else {
        Variant::_clear_internal();
        cVar68 = Variant::needs_deinit[local_f18[0]];
      }
      if (cVar68 != '\0') {
        Variant::_clear_internal();
      }
      pcVar79 = local_f98;
      if (local_f98 != (char *)0x0) {
        LOCK();
        plVar81 = (long *)(local_f98 + -0x10);
        *plVar81 = *plVar81 + -1;
        UNLOCK();
        if (*plVar81 == 0) {
          local_f98 = (char *)0x0;
          Memory::free_static(pcVar79 + -0x10,false);
        }
      }
      local_10b0._0_4_ = 0;
    }
    Dictionary::Dictionary((Dictionary *)&local_f68);
    if (local_10a0 == 2) {
      iVar91 = *(int *)(pVVar76 + 0x38);
      pcVar79 = *(char **)(pVVar76 + 0x30);
    }
    else if (local_10a0 == 3) {
      iVar91 = *(int *)(pVVar76 + 0x48);
      pcVar79 = *(char **)(pVVar76 + 0x40);
    }
    else if (local_10a0 == 1) {
      iVar91 = *(int *)(pVVar76 + 0x28);
      pcVar79 = *(char **)(pVVar76 + 0x20);
    }
    else {
      iVar91 = *(int *)(pVVar76 + 0x18);
      pcVar79 = *(char **)(pVVar76 + 0x10);
    }
    Variant::Variant((Variant *)local_f18,*(char **)(pVVar76 + 8));
    Variant::Variant((Variant *)local_f38,"member");
    pVVar77 = (Variant *)Dictionary::operator[]((Variant *)&local_f68);
    if (pVVar77 != (Variant *)local_f18) {
      if (Variant::needs_deinit[*(int *)pVVar77] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar77 = 0;
      *(int *)pVVar77 = local_f18[0];
      *(undefined8 *)(pVVar77 + 8) = local_f10;
      *(undefined8 *)(pVVar77 + 0x10) = uStack_f08;
      local_f18[0] = 0;
    }
    if (Variant::needs_deinit[local_f38[0]] == '\0') {
      cVar68 = Variant::needs_deinit[local_f18[0]];
    }
    else {
      Variant::_clear_internal();
      cVar68 = Variant::needs_deinit[local_f18[0]];
    }
    if (cVar68 != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_f18,(uint)local_10b0);
    Variant::Variant((Variant *)local_f38,"offset");
    pVVar77 = (Variant *)Dictionary::operator[]((Variant *)&local_f68);
    if (pVVar77 != (Variant *)local_f18) {
      if (Variant::needs_deinit[*(int *)pVVar77] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar77 = 0;
      *(int *)pVVar77 = local_f18[0];
      *(undefined8 *)(pVVar77 + 8) = local_f10;
      *(undefined8 *)(pVVar77 + 0x10) = uStack_f08;
      local_f18[0] = 0;
    }
    if (Variant::needs_deinit[local_f38[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_f18,pcVar79);
    Variant::Variant((Variant *)local_f38,"meta");
    pVVar77 = (Variant *)Dictionary::operator[]((Variant *)&local_f68);
    if (pVVar77 != (Variant *)local_f18) {
      if (Variant::needs_deinit[*(int *)pVVar77] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar77 = 0;
      *(int *)pVVar77 = local_f18[0];
      *(undefined8 *)(pVVar77 + 8) = local_f10;
      *(undefined8 *)(pVVar77 + 0x10) = uStack_f08;
      local_f18[0] = 0;
    }
    if (Variant::needs_deinit[local_f38[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_10b0._0_4_ = (uint)local_10b0 + iVar91;
    Variant::Variant((Variant *)local_f18,(Dictionary *)&local_f68);
    Array::push_back((Variant *)&local_fa8);
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    pVVar76 = pVVar76 + 0x50;
    Dictionary::~Dictionary((Dictionary *)&local_f68);
    iVar91 = iVar71;
  } while( true );
  Variant::Variant((Variant *)local_f18,(Array *)&local_fc0);
  Variant::Variant((Variant *)local_f38,"classes");
  pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
  if (pVVar76 != (Variant *)local_f18) {
    if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar76 = 0;
    *(int *)pVVar76 = local_f18[0];
    *(undefined8 *)(pVVar76 + 8) = local_f10;
    *(undefined8 *)(pVVar76 + 0x10) = uStack_f08;
    local_f18[0] = 0;
  }
  if (Variant::needs_deinit[local_f38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_f18[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_f18,(Dictionary *)&local_fc8);
  Array::push_back((Variant *)&local_fd0);
  if (Variant::needs_deinit[local_f18[0]] != '\0') {
    Variant::_clear_internal();
  }
  Array::~Array((Array *)&local_fa8);
  Dictionary::~Dictionary((Dictionary *)&local_fb8);
  Array::~Array((Array *)&local_fc0);
  Dictionary::~Dictionary((Dictionary *)&local_fc8);
  local_10a0 = local_10a0 + 1;
  if (local_10a0 == 4) goto code_r0x00102a1a;
  goto LAB_00102414;
LAB_001079d7:
  local_10a0 = *(long *)(*(long *)(lVar88 + 0x10) + (ulong)uVar94 * 8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
  if (Variant::needs_deinit[local_ef8[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_10a0 = local_10a0 + 0x18;
LAB_001044ba:
  Array::Array((Array *)&local_fc0);
  local_fb8 = (undefined8 *)0x0;
  Variant::get_member_list(iVar71,(Dictionary *)&local_fb8);
  if (local_fb8 != (undefined8 *)0x0) {
    for (pSVar3 = (StringName *)*local_fb8; pSVar3 != (StringName *)0x0;
        pSVar3 = *(StringName **)(pSVar3 + 8)) {
      Dictionary::Dictionary((Dictionary *)&local_fa8);
      lVar88 = *(long *)pSVar3;
      if (lVar88 == 0) {
        local_f98 = (char *)0x0;
      }
      else {
        pcVar79 = *(char **)(lVar88 + 8);
        local_f98 = (char *)0x0;
        if (pcVar79 == (char *)0x0) {
          if (*(long *)(lVar88 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_f98,(CowData *)(lVar88 + 0x10));
          }
        }
        else {
          sVar78 = strlen(pcVar79);
          local_f60._0_8_ = sVar78;
          local_f68 = pcVar79;
          String::parse_latin1((StrRange *)&local_f98);
        }
      }
      Variant::Variant((Variant *)local_ef8,(String *)&local_f98);
      Variant::Variant((Variant *)local_f18,"name");
      pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fa8);
      if (pVVar76 != (Variant *)local_ef8) {
        if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar76 = 0;
        *(int *)pVVar76 = local_ef8[0];
        *(undefined8 *)(pVVar76 + 8) = local_ef0;
        *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
        local_ef8[0] = 0;
      }
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      pcVar79 = local_f98;
      if (local_f98 != (char *)0x0) {
        LOCK();
        plVar81 = (long *)(local_f98 + -0x10);
        *plVar81 = *plVar81 + -1;
        UNLOCK();
        if (*plVar81 == 0) {
          local_f98 = (char *)0x0;
          Memory::free_static(pcVar79 + -0x10,false);
        }
      }
      iVar91 = Variant::get_member_type(iVar71,pSVar3);
      if (iVar91 == 0) {
        local_f98 = (char *)0x0;
        local_f68 = "Variant";
        local_f60._0_8_ = 7;
        String::parse_latin1((StrRange *)&local_f98);
      }
      else {
        Variant::get_type_name((String *)&local_f98,iVar91);
      }
      Variant::Variant((Variant *)local_ef8,(String *)&local_f98);
      Variant::Variant((Variant *)local_f18,"type");
      pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fa8);
      if (pVVar76 != (Variant *)local_ef8) {
        if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar76 = 0;
        *(int *)pVVar76 = local_ef8[0];
        *(undefined8 *)(pVVar76 + 8) = local_ef0;
        *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
        local_ef8[0] = 0;
      }
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      pcVar79 = local_f98;
      if (local_f98 != (char *)0x0) {
        LOCK();
        plVar81 = (long *)(local_f98 + -0x10);
        *plVar81 = *plVar81 + -1;
        UNLOCK();
        if (*plVar81 == 0) {
          local_f98 = (char *)0x0;
          Memory::free_static(pcVar79 + -0x10,false);
        }
      }
      if (param_1) {
        CowData<DocData::PropertyDoc>::_copy_on_write
                  ((CowData<DocData::PropertyDoc> *)(local_10a0 + 0xc0));
        pSVar102 = *(String **)(local_10a0 + 0xc0);
        CowData<DocData::PropertyDoc>::_copy_on_write
                  ((CowData<DocData::PropertyDoc> *)(local_10a0 + 0xc0));
        pSVar93 = *(String **)(local_10a0 + 0xc0);
        if (pSVar93 != (String *)0x0) {
          pSVar93 = pSVar93 + *(long *)(pSVar93 + -8) * 0x78;
        }
        for (; pSVar102 != pSVar93; pSVar102 = pSVar102 + 0x78) {
          cVar68 = operator==(pSVar102,pSVar3);
          if (cVar68 != '\0') {
            fix_doc_description((String *)&local_f68);
            Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
            Variant::Variant((Variant *)local_f18,"description");
            pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fa8);
            if (pVVar76 != (Variant *)local_ef8) {
              if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
                Variant::_clear_internal();
              }
              *(undefined4 *)pVVar76 = 0;
              *(int *)pVVar76 = local_ef8[0];
              *(undefined8 *)(pVVar76 + 8) = local_ef0;
              *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
              local_ef8[0] = 0;
            }
            if (Variant::needs_deinit[local_f18[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_ef8[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
            break;
          }
        }
      }
      Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_fa8);
      Array::push_back((Variant *)&local_fc0);
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)&local_fa8);
    }
  }
  iVar91 = Array::size();
  if (iVar91 != 0) {
    Variant::Variant((Variant *)local_ef8,(Array *)&local_fc0);
    Variant::Variant((Variant *)local_f18,"members");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_fe0);
    Variant::operator=(pVVar76,(Variant *)local_ef8);
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_fb8);
  Array::~Array((Array *)&local_fc0);
  Array::Array((Array *)&local_fc0);
  local_fb8 = (undefined8 *)0x0;
  Variant::get_constants_for_type(iVar71,(Dictionary *)&local_fb8);
  if (local_fb8 != (undefined8 *)0x0) {
    for (pSVar3 = (StringName *)*local_fb8; pSVar3 != (StringName *)0x0;
        pSVar3 = *(StringName **)(pSVar3 + 8)) {
      Dictionary::Dictionary((Dictionary *)&local_fa8);
      lVar88 = *(long *)pSVar3;
      if (lVar88 == 0) {
        local_f98 = (char *)0x0;
      }
      else {
        pcVar79 = *(char **)(lVar88 + 8);
        local_f98 = (char *)0x0;
        if (pcVar79 == (char *)0x0) {
          if (*(long *)(lVar88 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_f98,(CowData *)(lVar88 + 0x10));
          }
        }
        else {
          sVar78 = strlen(pcVar79);
          local_f60._0_8_ = sVar78;
          local_f68 = pcVar79;
          String::parse_latin1((StrRange *)&local_f98);
        }
      }
      Variant::Variant((Variant *)local_ef8,(String *)&local_f98);
      Variant::Variant((Variant *)local_f18,"name");
      pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fa8);
      if (pVVar76 != (Variant *)local_ef8) {
        if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar76 = 0;
        *(int *)pVVar76 = local_ef8[0];
        *(undefined8 *)(pVVar76 + 8) = local_ef0;
        *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
        local_ef8[0] = 0;
      }
      if (Variant::needs_deinit[local_f18[0]] == '\0') {
        cVar68 = Variant::needs_deinit[local_ef8[0]];
      }
      else {
        Variant::_clear_internal();
        cVar68 = Variant::needs_deinit[local_ef8[0]];
      }
      if (cVar68 != '\0') {
        Variant::_clear_internal();
      }
      pcVar79 = local_f98;
      if (local_f98 != (char *)0x0) {
        LOCK();
        plVar81 = (long *)(local_f98 + -0x10);
        *plVar81 = *plVar81 + -1;
        UNLOCK();
        if (*plVar81 == 0) {
          local_f98 = (char *)0x0;
          Memory::free_static(pcVar79 + -0x10,false);
        }
      }
      Variant::get_constant_value((Variant *)local_f38,iVar71,pSVar3);
      if (local_f38[0] == 0) {
        local_f98 = (char *)0x0;
        local_f68 = "Variant";
        local_f60._0_8_ = 7;
        String::parse_latin1((StrRange *)&local_f98);
      }
      else {
        Variant::get_type_name((String *)&local_f98);
      }
      Variant::Variant((Variant *)local_ef8,(String *)&local_f98);
      Variant::Variant((Variant *)local_f18,"type");
      pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fa8);
      if (pVVar76 != (Variant *)local_ef8) {
        if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar76 = 0;
        *(int *)pVVar76 = local_ef8[0];
        *(undefined8 *)(pVVar76 + 8) = local_ef0;
        *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
        local_ef8[0] = 0;
      }
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      pcVar79 = local_f98;
      if (local_f98 != (char *)0x0) {
        LOCK();
        plVar81 = (long *)(local_f98 + -0x10);
        *plVar81 = *plVar81 + -1;
        UNLOCK();
        if (*plVar81 == 0) {
          local_f98 = (char *)0x0;
          Memory::free_static(pcVar79 + -0x10,false);
        }
      }
      Variant::get_construct_string();
      Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
      Variant::Variant((Variant *)local_f18,"value");
      pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fa8);
      if (pVVar76 != (Variant *)local_ef8) {
        if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar76 = 0;
        *(int *)pVVar76 = local_ef8[0];
        *(undefined8 *)(pVVar76 + 8) = local_ef0;
        *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
        local_ef8[0] = 0;
      }
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      pcVar79 = local_f68;
      if (local_f68 != (char *)0x0) {
        LOCK();
        plVar81 = (long *)(local_f68 + -0x10);
        *plVar81 = *plVar81 + -1;
        UNLOCK();
        if (*plVar81 == 0) {
          local_f68 = (char *)0x0;
          Memory::free_static(pcVar79 + -0x10,false);
        }
      }
      if (param_1) {
        CowData<DocData::ConstantDoc>::_copy_on_write
                  ((CowData<DocData::ConstantDoc> *)(local_10a0 + 0x80));
        pSVar93 = *(String **)(local_10a0 + 0x80);
        CowData<DocData::ConstantDoc>::_copy_on_write
                  ((CowData<DocData::ConstantDoc> *)(local_10a0 + 0x80));
        pSVar102 = *(String **)(local_10a0 + 0x80);
        if (pSVar102 != (String *)0x0) {
          pSVar102 = pSVar102 + *(long *)(pSVar102 + -8) * 0x60;
        }
        for (; pSVar93 != pSVar102; pSVar93 = pSVar93 + 0x60) {
          cVar68 = operator==(pSVar93,pSVar3);
          if (cVar68 != '\0') {
            fix_doc_description((String *)&local_f68);
            Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
            Variant::Variant((Variant *)local_f18,"description");
            pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fa8);
            if (pVVar76 != (Variant *)local_ef8) {
              if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
                Variant::_clear_internal();
              }
              *(undefined4 *)pVVar76 = 0;
              *(int *)pVVar76 = local_ef8[0];
              *(undefined8 *)(pVVar76 + 8) = local_ef0;
              *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
              local_ef8[0] = 0;
            }
            if (Variant::needs_deinit[local_f18[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_ef8[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
            break;
          }
        }
      }
      Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_fa8);
      Array::push_back((Variant *)&local_fc0);
      if (Variant::needs_deinit[local_ef8[0]] == '\0') {
        cVar68 = Variant::needs_deinit[local_f38[0]];
      }
      else {
        Variant::_clear_internal();
        cVar68 = Variant::needs_deinit[local_f38[0]];
      }
      if (cVar68 != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)&local_fa8);
    }
  }
  iVar91 = Array::size();
  if (iVar91 != 0) {
    Variant::Variant((Variant *)local_ef8,(Array *)&local_fc0);
    Variant::Variant((Variant *)local_f18,"constants");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_fe0);
    Variant::operator=(pVVar76,(Variant *)local_ef8);
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_fb8);
  Array::~Array((Array *)&local_fc0);
  Array::Array((Array *)local_1090);
  local_fd0 = (long *)0x0;
  Variant::get_enums_for_type(iVar71,(Array *)&local_fd0);
  if ((local_fd0 != (long *)0x0) && (local_10b0 = (long *)*local_fd0, local_10b0 != (long *)0x0)) {
    do {
      Dictionary::Dictionary((Dictionary *)&local_fc8);
      lVar88 = *local_10b0;
      if (lVar88 == 0) {
        local_f98 = (char *)0x0;
      }
      else {
        pcVar79 = *(char **)(lVar88 + 8);
        local_f98 = (char *)0x0;
        if (pcVar79 == (char *)0x0) {
          if (*(long *)(lVar88 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_f98,(CowData *)(lVar88 + 0x10));
          }
        }
        else {
          sVar78 = strlen(pcVar79);
          local_f60._0_8_ = sVar78;
          local_f68 = pcVar79;
          String::parse_latin1((StrRange *)&local_f98);
        }
      }
      Variant::Variant((Variant *)local_ef8,(String *)&local_f98);
      Variant::Variant((Variant *)local_f18,"name");
      pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
      if (pVVar76 != (Variant *)local_ef8) {
        if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar76 = 0;
        *(int *)pVVar76 = local_ef8[0];
        *(undefined8 *)(pVVar76 + 8) = local_ef0;
        *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
        local_ef8[0] = 0;
      }
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      pcVar79 = local_f98;
      if (local_f98 != (char *)0x0) {
        LOCK();
        plVar81 = (long *)(local_f98 + -0x10);
        *plVar81 = *plVar81 + -1;
        UNLOCK();
        if (*plVar81 == 0) {
          local_f98 = (char *)0x0;
          Memory::free_static(pcVar79 + -0x10,false);
        }
      }
      local_fc0 = (undefined8 *)0x0;
      Variant::get_enumerations_for_enum(iVar71,local_10b0,(Array *)&local_fc0);
      Array::Array((Array *)&local_fb8);
      if (local_fc0 != (undefined8 *)0x0) {
        for (pSVar3 = (StringName *)*local_fc0; pSVar3 != (StringName *)0x0;
            pSVar3 = *(StringName **)(pSVar3 + 8)) {
          Dictionary::Dictionary((Dictionary *)&local_fa8);
          lVar88 = *(long *)pSVar3;
          if (lVar88 == 0) {
            local_f98 = (char *)0x0;
          }
          else {
            pcVar79 = *(char **)(lVar88 + 8);
            local_f98 = (char *)0x0;
            if (pcVar79 == (char *)0x0) {
              if (*(long *)(lVar88 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_f98,(CowData *)(lVar88 + 0x10));
              }
            }
            else {
              sVar78 = strlen(pcVar79);
              local_f60._0_8_ = sVar78;
              local_f68 = pcVar79;
              String::parse_latin1((StrRange *)&local_f98);
            }
          }
          Variant::Variant((Variant *)local_ef8,(String *)&local_f98);
          Variant::Variant((Variant *)local_f18,"name");
          pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fa8);
          if (pVVar76 != (Variant *)local_ef8) {
            if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar76 = 0;
            *(int *)pVVar76 = local_ef8[0];
            *(undefined8 *)(pVVar76 + 8) = local_ef0;
            *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
            local_ef8[0] = 0;
          }
          if (Variant::needs_deinit[local_f18[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          pcVar79 = local_f98;
          if (local_f98 != (char *)0x0) {
            LOCK();
            plVar81 = (long *)(local_f98 + -0x10);
            *plVar81 = *plVar81 + -1;
            UNLOCK();
            if (*plVar81 == 0) {
              local_f98 = (char *)0x0;
              Memory::free_static(pcVar79 + -0x10,false);
            }
          }
          iVar91 = Variant::get_enum_value(iVar71,local_10b0,pSVar3);
          Variant::Variant((Variant *)local_ef8,iVar91);
          Variant::Variant((Variant *)local_f18,"value");
          pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fa8);
          if (pVVar76 != (Variant *)local_ef8) {
            if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar76 = 0;
            *(int *)pVVar76 = local_ef8[0];
            *(undefined8 *)(pVVar76 + 8) = local_ef0;
            *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
            local_ef8[0] = 0;
          }
          if (Variant::needs_deinit[local_f18[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (param_1) {
            CowData<DocData::ConstantDoc>::_copy_on_write
                      ((CowData<DocData::ConstantDoc> *)(local_10a0 + 0x80));
            pSVar93 = *(String **)(local_10a0 + 0x80);
            CowData<DocData::ConstantDoc>::_copy_on_write
                      ((CowData<DocData::ConstantDoc> *)(local_10a0 + 0x80));
            pSVar102 = *(String **)(local_10a0 + 0x80);
            if (pSVar102 != (String *)0x0) {
              pSVar102 = pSVar102 + *(long *)(pSVar102 + -8) * 0x60;
            }
            for (; pSVar102 != pSVar93; pSVar93 = pSVar93 + 0x60) {
              cVar68 = operator==(pSVar93,pSVar3);
              if (cVar68 != '\0') {
                fix_doc_description((String *)&local_f68);
                Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
                Variant::Variant((Variant *)local_f18,"description");
                pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fa8);
                if (pVVar76 != (Variant *)local_ef8) {
                  if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
                    Variant::_clear_internal();
                  }
                  *(undefined4 *)pVVar76 = 0;
                  *(int *)pVVar76 = local_ef8[0];
                  *(undefined8 *)(pVVar76 + 8) = local_ef0;
                  *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
                  local_ef8[0] = 0;
                }
                if (Variant::needs_deinit[local_f18[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                  Variant::_clear_internal();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
                break;
              }
            }
          }
          Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_fa8);
          Array::push_back((Variant *)&local_fb8);
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          Dictionary::~Dictionary((Dictionary *)&local_fa8);
        }
      }
      if (param_1) {
        lVar88 = *local_10b0;
        if (lVar88 == 0) {
          local_f98 = (char *)0x0;
        }
        else {
          pcVar79 = *(char **)(lVar88 + 8);
          local_f98 = (char *)0x0;
          if (pcVar79 == (char *)0x0) {
            if (*(long *)(lVar88 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_f98,(CowData *)(lVar88 + 0x10));
            }
          }
          else {
            sVar78 = strlen(pcVar79);
            local_f60._0_8_ = sVar78;
            local_f68 = pcVar79;
            String::parse_latin1((StrRange *)&local_f98);
          }
        }
        if ((*(long *)(local_10a0 + 0x90) != 0) && (*(int *)(local_10a0 + 0xb4) != 0)) {
          uVar72 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(local_10a0 + 0xb0) * 4);
          lVar88 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(local_10a0 + 0xb0) * 8);
          uVar73 = String::hash();
          uVar83 = CONCAT44(0,uVar72);
          uVar89 = 1;
          if (uVar73 != 0) {
            uVar89 = uVar73;
          }
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)uVar89 * lVar88;
          auVar38._8_8_ = 0;
          auVar38._0_8_ = uVar83;
          lVar90 = SUB168(auVar10 * auVar38,8);
          lVar96 = *(long *)(local_10a0 + 0x98);
          iVar91 = SUB164(auVar10 * auVar38,8);
          uVar73 = *(uint *)(lVar96 + lVar90 * 4);
          if (uVar73 != 0) {
            uVar94 = 0;
            do {
              if (uVar73 == uVar89) {
                cVar68 = String::operator==((String *)
                                            (*(long *)(*(long *)(local_10a0 + 0x90) + lVar90 * 8) +
                                            0x10),(String *)&local_f98);
                if (cVar68 != '\0') {
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f98);
                  fix_doc_description((String *)&local_f68);
                  Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
                  Variant::Variant((Variant *)local_f18,"description");
                  pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
                  if (pVVar76 != (Variant *)local_ef8) {
                    if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
                      Variant::_clear_internal();
                    }
                    *(undefined4 *)pVVar76 = 0;
                    *(int *)pVVar76 = local_ef8[0];
                    *(undefined8 *)(pVVar76 + 8) = local_ef0;
                    *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
                    local_ef8[0] = 0;
                  }
                  if (Variant::needs_deinit[local_f18[0]] == '\0') {
                    cVar68 = Variant::needs_deinit[local_ef8[0]];
                  }
                  else {
                    Variant::_clear_internal();
                    cVar68 = Variant::needs_deinit[local_ef8[0]];
                  }
                  if (cVar68 != '\0') {
                    Variant::_clear_internal();
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
                  goto LAB_00105c94;
                }
                lVar96 = *(long *)(local_10a0 + 0x98);
              }
              uVar94 = uVar94 + 1;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = (ulong)(iVar91 + 1) * lVar88;
              auVar39._8_8_ = 0;
              auVar39._0_8_ = uVar83;
              lVar90 = SUB168(auVar11 * auVar39,8);
              uVar73 = *(uint *)(lVar96 + lVar90 * 4);
              iVar91 = SUB164(auVar11 * auVar39,8);
            } while ((uVar73 != 0) &&
                    (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar73 * lVar88, auVar40._8_8_ = 0,
                    auVar40._0_8_ = uVar83, auVar13._8_8_ = 0,
                    auVar13._0_8_ =
                         (ulong)((uVar72 + iVar91) - SUB164(auVar12 * auVar40,8)) * lVar88,
                    auVar41._8_8_ = 0, auVar41._0_8_ = uVar83, uVar94 <= SUB164(auVar13 * auVar41,8)
                    ));
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f98);
      }
LAB_00105c94:
      iVar91 = Array::size();
      if (iVar91 != 0) {
        Variant::Variant((Variant *)local_ef8,(Array *)&local_fb8);
        Variant::Variant((Variant *)local_f18,"values");
        pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
        if (pVVar76 != (Variant *)local_ef8) {
          if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar76 = 0;
          *(int *)pVVar76 = local_ef8[0];
          *(undefined8 *)(pVVar76 + 8) = local_ef0;
          *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
          local_ef8[0] = 0;
        }
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_fc8);
      Array::push_back(local_1090);
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      Array::~Array((Array *)&local_fb8);
      List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_fc0);
      Dictionary::~Dictionary((Dictionary *)&local_fc8);
      local_10b0 = (long *)local_10b0[1];
    } while (local_10b0 != (long *)0x0);
  }
  iVar91 = Array::size();
  if (iVar91 != 0) {
    Variant::Variant((Variant *)local_ef8,(Array *)local_1090);
    Variant::Variant((Variant *)local_f18,"enums");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_fe0);
    Variant::operator=(pVVar76,(Variant *)local_ef8);
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  iVar91 = 0;
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_fd0);
  Array::~Array((Array *)local_1090);
  Array::Array((Array *)&local_fc8);
  do {
    uVar83 = 0;
    do {
      while( true ) {
        iVar74 = Variant::get_operator_return_type(uVar83,iVar71,iVar91);
        if (iVar74 == 0) break;
        Dictionary::Dictionary((Dictionary *)&local_fc0);
        Variant::get_operator_name((Dictionary *)&local_fb8,uVar83);
        Variant::Variant((Variant *)local_ef8,(String *)&local_fb8);
        Variant::Variant((Variant *)local_f18,"name");
        pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc0);
        if (pVVar76 != (Variant *)local_ef8) {
          if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar76 = 0;
          *(int *)pVVar76 = local_ef8[0];
          *(undefined8 *)(pVVar76 + 8) = local_ef0;
          *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
          local_ef8[0] = 0;
        }
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (iVar91 == 0) {
          local_fa8 = (char *)0x0;
          local_f68 = "Variant";
          local_f60._0_8_ = 7;
          String::parse_latin1((StrRange *)&local_fa8);
        }
        else {
          Variant::get_type_name((Array *)&local_fa8,iVar91);
        }
        bVar67 = (0x880c00UL >> (uVar83 & 0x3f) & 1) == 0;
        if (bVar67) {
          Variant::Variant((Variant *)local_ef8,(String *)&local_fa8);
          Variant::Variant((Variant *)local_f18,"right_type");
          pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc0);
          if (pVVar76 != (Variant *)local_ef8) {
            if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar76 = 0;
            *(int *)pVVar76 = local_ef8[0];
            *(undefined8 *)(pVVar76 + 8) = local_ef0;
            *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
            local_ef8[0] = 0;
          }
          if (Variant::needs_deinit[local_f18[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        iVar74 = Variant::get_operator_return_type(uVar83,iVar71,iVar91);
        if (iVar74 == 0) {
          local_f98 = (char *)0x0;
          local_f68 = "Variant";
          local_f60._0_8_ = 7;
          String::parse_latin1((StrRange *)&local_f98);
        }
        else {
          Variant::get_type_name((String *)&local_f98,iVar74);
        }
        Variant::Variant((Variant *)local_ef8,(String *)&local_f98);
        Variant::Variant((Variant *)local_f18,"return_type");
        pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc0);
        if (pVVar76 != (Variant *)local_ef8) {
          if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar76 = 0;
          *(int *)pVVar76 = local_ef8[0];
          *(undefined8 *)(pVVar76 + 8) = local_ef0;
          *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
          local_ef8[0] = 0;
        }
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        pcVar79 = local_f98;
        if (local_f98 != (char *)0x0) {
          LOCK();
          plVar81 = (long *)(local_f98 + -0x10);
          *plVar81 = *plVar81 + -1;
          UNLOCK();
          if (*plVar81 == 0) {
            local_f98 = (char *)0x0;
            Memory::free_static(pcVar79 + -0x10,false);
          }
        }
        if ((local_10a0 != 0) && (param_1)) {
          CowData<DocData::MethodDoc>::_copy_on_write
                    ((CowData<DocData::MethodDoc> *)(local_10a0 + 0x60));
          pSVar102 = *(String **)(local_10a0 + 0x60);
          CowData<DocData::MethodDoc>::_copy_on_write
                    ((CowData<DocData::MethodDoc> *)(local_10a0 + 0x60));
          pSVar93 = *(String **)(local_10a0 + 0x60);
          if (pSVar93 != (String *)0x0) {
            pSVar93 = pSVar93 + *(long *)(pSVar93 + -8) * 0x78;
          }
joined_r0x001067dc:
          if (pSVar102 != pSVar93) {
            do {
              operator+((char *)&local_f68,(String *)"operator ");
              cVar68 = String::operator==(pSVar102,(String *)&local_f68);
              if (cVar68 != '\0') {
                if (bVar67) {
                  lVar88 = *(long *)(pSVar102 + 0x58);
                  if (lVar88 == 0) {
                    lVar96 = 0;
                  }
                  else {
                    lVar96 = *(long *)(lVar88 + -8);
                    if (0 < lVar96) {
                      cVar68 = String::operator==((String *)(lVar88 + 8),(String *)&local_fa8);
                      if (cVar68 == '\0') goto LAB_0010681c;
                      goto LAB_0010686c;
                    }
                  }
                  lVar88 = 0;
                  goto LAB_00106c13;
                }
LAB_0010686c:
                pcVar79 = local_f68;
                if (local_f68 != (char *)0x0) {
                  LOCK();
                  plVar81 = (long *)(local_f68 + -0x10);
                  *plVar81 = *plVar81 + -1;
                  UNLOCK();
                  if (*plVar81 == 0) {
                    local_f68 = (char *)0x0;
                    Memory::free_static(pcVar79 + -0x10,false);
                  }
                }
                fix_doc_description((String *)&local_f68);
                Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
                Variant::Variant((Variant *)local_f18,"description");
                pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc0);
                if (pVVar76 != (Variant *)local_ef8) {
                  if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
                    Variant::_clear_internal();
                  }
                  *(undefined4 *)pVVar76 = 0;
                  *(int *)pVVar76 = local_ef8[0];
                  *(undefined8 *)(pVVar76 + 8) = local_ef0;
                  *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
                  local_ef8[0] = 0;
                }
                if (Variant::needs_deinit[local_f18[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                  Variant::_clear_internal();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
                break;
              }
LAB_0010681c:
              pcVar79 = local_f68;
              if (local_f68 == (char *)0x0) goto LAB_00106835;
              LOCK();
              plVar81 = (long *)(local_f68 + -0x10);
              *plVar81 = *plVar81 + -1;
              UNLOCK();
              if (*plVar81 != 0) goto LAB_00106835;
              pSVar102 = pSVar102 + 0x78;
              local_f68 = (char *)0x0;
              Memory::free_static(pcVar79 + -0x10,false);
              if (pSVar93 == pSVar102) break;
            } while( true );
          }
        }
        Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_fc0);
        Array::push_back((Variant *)&local_fc8);
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        pcVar79 = local_fa8;
        if (local_fa8 != (char *)0x0) {
          LOCK();
          plVar81 = (long *)(local_fa8 + -0x10);
          *plVar81 = *plVar81 + -1;
          UNLOCK();
          if (*plVar81 == 0) {
            local_fa8 = (char *)0x0;
            Memory::free_static(pcVar79 + -0x10,false);
          }
        }
        puVar97 = local_fb8;
        if (local_fb8 != (undefined8 *)0x0) {
          LOCK();
          plVar81 = local_fb8 + -2;
          *plVar81 = *plVar81 + -1;
          UNLOCK();
          if (*plVar81 == 0) {
            local_fb8 = (undefined8 *)0x0;
            Memory::free_static(puVar97 + -2,false);
          }
        }
        uVar72 = (int)uVar83 + 1;
        uVar83 = (ulong)uVar72;
        Dictionary::~Dictionary((Dictionary *)&local_fc0);
        if (uVar72 == 0x19) goto LAB_00106046;
      }
      uVar72 = (int)uVar83 + 1;
      uVar83 = (ulong)uVar72;
    } while (uVar72 != 0x19);
LAB_00106046:
    iVar91 = iVar91 + 1;
  } while (iVar91 != 0x27);
  iVar91 = Array::size();
  if (iVar91 != 0) {
    Variant::Variant((Variant *)local_ef8,(Array *)&local_fc8);
    Variant::Variant((Variant *)local_f18,"operators");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_fe0);
    Variant::operator=(pVVar76,(Variant *)local_ef8);
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  Array::~Array((Array *)&local_fc8);
  Array::Array((Array *)local_1090);
  local_fd0 = (long *)0x0;
  Variant::get_builtin_method_list(iVar71,(Array *)&local_fd0);
  if (local_fd0 != (long *)0x0) {
    for (pSVar3 = (StringName *)*local_fd0; pSVar3 != (StringName *)0x0;
        pSVar3 = *(StringName **)(pSVar3 + 8)) {
      Dictionary::Dictionary((Dictionary *)&local_fc8);
      lVar88 = *(long *)pSVar3;
      if (lVar88 == 0) {
        local_f68 = (char *)0x0;
      }
      else {
        local_f68 = (char *)0x0;
        if (*(char **)(lVar88 + 8) == (char *)0x0) {
          if (*(long *)(lVar88 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_f68,(CowData *)(lVar88 + 0x10));
          }
        }
        else {
          String::parse_latin1((String *)&local_f68,*(char **)(lVar88 + 8));
        }
      }
      Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
      Variant::Variant((Variant *)local_f18,"name");
      pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
      Variant::operator=(pVVar76,(Variant *)local_ef8);
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
      cVar68 = Variant::has_builtin_method_return_value(iVar71,pSVar3);
      if (cVar68 != '\0') {
        iVar91 = Variant::get_builtin_method_return_type(iVar71,pSVar3);
        if (iVar91 == 0) {
          local_f68 = (char *)0x0;
          String::parse_latin1((String *)&local_f68,"Variant");
        }
        else {
          Variant::get_type_name((Dictionary *)&local_f68,iVar91);
        }
        Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
        Variant::Variant((Variant *)local_f18,"return_type");
        pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
        Variant::operator=(pVVar76,(Variant *)local_ef8);
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
      }
      bVar67 = (bool)Variant::is_builtin_method_vararg(iVar71,pSVar3);
      Variant::Variant((Variant *)local_ef8,bVar67);
      Variant::Variant((Variant *)local_f18,"is_vararg");
      pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
      Variant::operator=(pVVar76,(Variant *)local_ef8);
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      bVar67 = (bool)Variant::is_builtin_method_const(iVar71,pSVar3);
      Variant::Variant((Variant *)local_ef8,bVar67);
      Variant::Variant((Variant *)local_f18,"is_const");
      pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
      Variant::operator=(pVVar76,(Variant *)local_ef8);
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      bVar67 = (bool)Variant::is_builtin_method_static(iVar71,pSVar3);
      Variant::Variant((Variant *)local_ef8,bVar67);
      Variant::Variant((Variant *)local_f18,"is_static");
      pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
      Variant::operator=(pVVar76,(Variant *)local_ef8);
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      uVar72 = Variant::get_builtin_method_hash(iVar71,pSVar3);
      Variant::Variant((Variant *)local_ef8,uVar72);
      Variant::Variant((Variant *)local_f18,"hash");
      pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
      Variant::operator=(pVVar76,(Variant *)local_ef8);
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::get_builtin_method_default_arguments((String *)&local_f98,iVar71,pSVar3);
      Array::Array((Array *)&local_fc0);
      uVar101 = 0;
      iVar91 = Variant::get_builtin_method_argument_count(iVar71);
      uVar83 = (ulong)iVar91;
      if (0 < iVar91) {
        do {
          Dictionary::Dictionary((Dictionary *)&local_fb8);
          Variant::get_builtin_method_argument_name
                    ((Dictionary *)&local_f68,iVar71,pSVar3,uVar101 & 0xffffffff);
          Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
          Variant::Variant((Variant *)local_f18,"name");
          pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
          if (pVVar76 != (Variant *)local_ef8) {
            if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar76 = 0;
            *(int *)pVVar76 = local_ef8[0];
            *(undefined8 *)(pVVar76 + 8) = local_ef0;
            *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
            local_ef8[0] = 0;
          }
          if (Variant::needs_deinit[local_f18[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
          iVar74 = Variant::get_builtin_method_argument_type(iVar71,pSVar3,uVar101 & 0xffffffff);
          if (iVar74 == 0) {
            local_fa8 = (char *)0x0;
            local_f68 = "Variant";
            local_f60._0_8_ = 7;
            String::parse_latin1((StrRange *)&local_fa8);
          }
          else {
            Variant::get_type_name((Array *)&local_fa8,iVar74);
          }
          Variant::Variant((Variant *)local_ef8,(String *)&local_fa8);
          Variant::Variant((Variant *)local_f18,"type");
          pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
          if (pVVar76 != (Variant *)local_ef8) {
            if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar76 = 0;
            *(int *)pVVar76 = local_ef8[0];
            *(undefined8 *)(pVVar76 + 8) = local_ef0;
            *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
            local_ef8[0] = 0;
          }
          if (Variant::needs_deinit[local_f18[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_fa8);
          if (local_f90._0_8_ == 0) {
            lVar96 = 0;
            uVar84 = uVar83;
          }
          else {
            lVar96 = *(long *)(local_f90._0_8_ + -8);
            uVar84 = uVar83 - lVar96;
          }
          if ((long)uVar84 <= (long)uVar101) {
            lVar88 = (long)(((int)uVar101 - iVar91) + (int)lVar96);
            if ((lVar88 < 0) || (lVar96 <= lVar88)) goto LAB_00106c13;
            Variant::get_construct_string();
            Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
            Variant::Variant((Variant *)local_f18,"default_value");
            pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
            Variant::operator=(pVVar76,(Variant *)local_ef8);
            if (Variant::needs_deinit[local_f18[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_ef8[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
          }
          Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_fb8);
          Array::push_back((Variant *)&local_fc0);
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          uVar101 = uVar101 + 1;
          Dictionary::~Dictionary((Dictionary *)&local_fb8);
        } while (uVar101 != uVar83);
      }
      iVar91 = Array::size();
      if (iVar91 != 0) {
        Variant::Variant((Variant *)local_ef8,(Array *)&local_fc0);
        Variant::Variant((Variant *)local_f18,"arguments");
        pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
        Variant::operator=(pVVar76,(Variant *)local_ef8);
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      if (param_1) {
        CowData<DocData::MethodDoc>::_copy_on_write
                  ((CowData<DocData::MethodDoc> *)(local_10a0 + 0x50));
        pSVar93 = *(String **)(local_10a0 + 0x50);
        CowData<DocData::MethodDoc>::_copy_on_write
                  ((CowData<DocData::MethodDoc> *)(local_10a0 + 0x50));
        lVar88 = *(long *)(local_10a0 + 0x50);
        if (lVar88 == 0) {
          lVar96 = 0;
        }
        else {
          lVar96 = *(long *)(lVar88 + -8);
        }
        for (; (String *)(lVar88 + lVar96 * 0x78) != pSVar93; pSVar93 = pSVar93 + 0x78) {
          cVar68 = operator==(pSVar93,pSVar3);
          if (cVar68 != '\0') {
            fix_doc_description((String *)&local_f68);
            Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
            Variant::Variant((Variant *)local_f18,"description");
            pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
            Variant::operator=(pVVar76,(Variant *)local_ef8);
            if (Variant::needs_deinit[local_f18[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_ef8[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
            break;
          }
        }
      }
      Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_fc8);
      Array::push_back(local_1090);
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      Array::~Array((Array *)&local_fc0);
      CowData<Variant>::_unref((CowData<Variant> *)local_f90);
      Dictionary::~Dictionary((Dictionary *)&local_fc8);
    }
  }
  iVar91 = Array::size();
  if (iVar91 != 0) {
    Variant::Variant((Variant *)local_ef8,(Array *)local_1090);
    Variant::Variant((Variant *)local_f18,"methods");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_fe0);
    Variant::operator=(pVVar76,(Variant *)local_ef8);
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_fd0);
  Array::~Array((Array *)local_1090);
  Array::Array((Array *)&local_fc0);
  bVar67 = local_10a0 != 0 && param_1;
  for (iVar91 = 0; iVar74 = Variant::get_constructor_count(iVar71), iVar91 < iVar74;
      iVar91 = iVar91 + 1) {
    Dictionary::Dictionary((Dictionary *)&local_fb8);
    Variant::Variant((Variant *)local_ef8,iVar91);
    Variant::Variant((Variant *)local_f18,"index");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
    Variant::operator=(pVVar76,(Variant *)local_ef8);
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
      Variant::_clear_internal();
    }
    iVar95 = 0;
    Array::Array((Array *)&local_fa8);
    iVar74 = Variant::get_constructor_argument_count(iVar71,iVar91);
    if (0 < iVar74) {
      do {
        Dictionary::Dictionary((Dictionary *)&local_f98);
        Variant::get_constructor_argument_name((Dictionary *)&local_f68,iVar71,iVar91);
        Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
        Variant::Variant((Variant *)local_f18,"name");
        pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_f98);
        Variant::operator=(pVVar76,(Variant *)local_ef8);
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
        uVar75 = Variant::get_constructor_argument_type(iVar71,iVar91,iVar95);
        get_builtin_or_variant_type_name((Dictionary *)&local_f68,uVar75);
        Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
        Variant::Variant((Variant *)local_f18,"type");
        pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_f98);
        Variant::operator=(pVVar76,(Variant *)local_ef8);
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
        Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_f98);
        Array::push_back((Variant *)&local_fa8);
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        iVar95 = iVar95 + 1;
        Dictionary::~Dictionary((Dictionary *)&local_f98);
      } while (iVar74 != iVar95);
    }
    iVar95 = Array::size();
    if (iVar95 != 0) {
      Variant::Variant((Variant *)local_ef8,(Array *)&local_fa8);
      Variant::Variant((Variant *)local_f18,"arguments");
      pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
      Variant::operator=(pVVar76,(Variant *)local_ef8);
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    if (bVar67) {
      CowData<DocData::MethodDoc>::_copy_on_write
                ((CowData<DocData::MethodDoc> *)(local_10a0 + 0x40));
      lVar99 = *(long *)(local_10a0 + 0x40);
      CowData<DocData::MethodDoc>::_copy_on_write
                ((CowData<DocData::MethodDoc> *)(local_10a0 + 0x40));
      lVar90 = *(long *)(local_10a0 + 0x40);
      if (lVar90 == 0) {
        lVar88 = 0;
      }
      else {
        lVar88 = *(long *)(lVar90 + -8);
      }
      lVar90 = lVar90 + lVar88 * 0x78;
      if (lVar90 != lVar99) {
        do {
          lVar87 = *(long *)(lVar99 + 0x58);
          if (lVar87 == 0) {
            lVar88 = lVar99;
            if (iVar74 == 0) {
LAB_0010c1d1:
              fix_doc_description((String *)&local_f68);
              Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
              Variant::Variant((Variant *)local_f18,"description");
              pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
              Variant::operator=(pVVar76,(Variant *)local_ef8);
              if (Variant::needs_deinit[local_f18[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                Variant::_clear_internal();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
              lVar88 = lVar99;
            }
          }
          else {
            do {
              lVar88 = lVar99;
              if (*(long *)(lVar87 + -8) != (long)iVar74) break;
              if (iVar74 < 1) goto LAB_0010c1d1;
              lVar88 = 0;
              while( true ) {
                if (lVar87 == 0) {
                  lVar96 = 0;
                  goto LAB_00106c13;
                }
                lVar96 = *(long *)(lVar87 + -8);
                if (lVar96 <= lVar88) goto LAB_00106c13;
                Array::operator[]((int)(Array *)&local_fa8);
                Variant::operator_cast_to_Dictionary((Variant *)&local_f98);
                Variant::Variant((Variant *)local_ef8,"type");
                Dictionary::operator[]((Variant *)&local_f98);
                Variant::operator_cast_to_String((Variant *)&local_f68);
                if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                  Variant::_clear_internal();
                }
                cVar68 = String::operator!=((String *)(lVar87 + lVar88 * 0x28 + 8),
                                            (String *)&local_f68);
                if (cVar68 != '\0') break;
                lVar88 = lVar88 + 1;
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
                Dictionary::~Dictionary((Dictionary *)&local_f98);
                if (lVar88 == iVar74) goto LAB_0010c1d1;
                lVar87 = *(long *)(lVar99 + 0x58);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
              lVar88 = lVar99 + 0x78;
              Dictionary::~Dictionary((Dictionary *)&local_f98);
              if (lVar90 == lVar88) goto LAB_00108264;
              lVar87 = *(long *)(lVar99 + 0xd0);
              lVar99 = lVar88;
            } while (lVar87 != 0);
          }
          lVar99 = lVar88 + 0x78;
        } while (lVar90 != lVar99);
      }
    }
LAB_00108264:
    Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_fb8);
    Array::push_back((Variant *)&local_fc0);
    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
      Variant::_clear_internal();
    }
    Array::~Array((Array *)&local_fa8);
    Dictionary::~Dictionary((Dictionary *)&local_fb8);
  }
  iVar91 = Array::size();
  if (iVar91 != 0) {
    Variant::Variant((Variant *)local_ef8,(Array *)&local_fc0);
    Variant::Variant((Variant *)local_f18,"constructors");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_fe0);
    Variant::operator=(pVVar76,(Variant *)local_ef8);
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  Array::~Array((Array *)&local_fc0);
  bVar69 = (bool)Variant::has_destructor(iVar71);
  Variant::Variant((Variant *)local_ef8,bVar69);
  Variant::Variant((Variant *)local_f18,"has_destructor");
  pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_fe0);
  Variant::operator=(pVVar76,(Variant *)local_ef8);
  if (Variant::needs_deinit[local_f18[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_ef8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (bVar67) {
    fix_doc_description((String *)&local_f68);
    Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
    Variant::Variant((Variant *)local_f18,"brief_description");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_fe0);
    Variant::operator=(pVVar76,(Variant *)local_ef8);
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
    fix_doc_description((String *)&local_f68);
    Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
    Variant::Variant((Variant *)local_f18,"description");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_fe0);
    Variant::operator=(pVVar76,(Variant *)local_ef8);
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
  }
  Variant::Variant((Variant *)local_ef8,local_fe0);
  Array::push_back((Variant *)&local_fe8);
  if (Variant::needs_deinit[local_ef8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_fe0);
  iVar91 = iVar71 + 1;
  if (iVar91 == 0x27) goto code_r0x0010850f;
  goto LAB_0010432d;
LAB_00106835:
  pSVar102 = pSVar102 + 0x78;
  goto joined_r0x001067dc;
code_r0x0010850f:
  Variant::Variant((Variant *)local_ef8,(Array *)&local_fe8);
  Variant::Variant((Variant *)local_f18,"builtin_classes");
  pVVar76 = (Variant *)Dictionary::operator[]((Variant *)this);
  Variant::operator=(pVVar76,(Variant *)local_ef8);
  if (Variant::needs_deinit[local_f18[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_ef8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Array::~Array((Array *)&local_fe8);
  Array::Array(local_1018);
  local_1010 = (undefined8 *)0x0;
  ClassDB::get_class_list((List *)&local_1010);
  List<StringName,DefaultAllocator>::sort_custom<StringName::AlphCompare>
            ((List<StringName,DefaultAllocator> *)&local_1010);
  if (local_1010 == (undefined8 *)0x0) {
LAB_00109035:
    Variant::Variant((Variant *)local_ef8,local_1018);
    Variant::Variant((Variant *)local_f18,"classes");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)this);
    Variant::operator=(pVVar76,(Variant *)local_ef8);
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
      Variant::_clear_internal();
    }
    List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_1010);
    Array::~Array(local_1018);
    Array::Array((Array *)&local_fb8);
    local_fa8 = (char *)0x0;
    pLVar86 = (List *)Engine::get_singleton();
    Engine::get_singletons(pLVar86);
    if (local_fa8 != (char *)0x0) {
      for (pSVar3 = *(StringName **)local_fa8; pSVar3 != (StringName *)0x0;
          pSVar3 = *(StringName **)(pSVar3 + 0x20)) {
        Dictionary::Dictionary((Dictionary *)&local_f98);
        Variant::Variant((Variant *)local_ef8,pSVar3);
        Variant::Variant((Variant *)local_f18,"name");
        pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_f98);
        Variant::operator=(pVVar76,(Variant *)local_ef8);
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar88 = *(long *)(pSVar3 + 0x10);
        if (lVar88 == 0) {
          (**(code **)(**(long **)(pSVar3 + 8) + 0x48))((Dictionary *)&local_f68);
        }
        else {
          local_f68 = (char *)0x0;
          if (*(char **)(lVar88 + 8) == (char *)0x0) {
            if (*(long *)(lVar88 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_f68,(CowData *)(lVar88 + 0x10));
            }
          }
          else {
            String::parse_latin1((String *)&local_f68,*(char **)(lVar88 + 8));
          }
        }
        Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
        Variant::Variant((Variant *)local_f18,"type");
        pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_f98);
        Variant::operator=(pVVar76,(Variant *)local_ef8);
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
        Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_f98);
        Array::push_back((Variant *)&local_fb8);
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::~Dictionary((Dictionary *)&local_f98);
      }
    }
    iVar91 = Array::size();
    if (iVar91 != 0) {
      Variant::Variant((Variant *)local_ef8,(Array *)&local_fb8);
      Variant::Variant((Variant *)local_f18,"singletons");
      pVVar76 = (Variant *)Dictionary::operator[]((Variant *)this);
      Variant::operator=(pVVar76,(Variant *)local_ef8);
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    List<Engine::Singleton,DefaultAllocator>::~List
              ((List<Engine::Singleton,DefaultAllocator> *)&local_fa8);
    Array::~Array((Array *)&local_fb8);
    Array::Array((Array *)&local_fc0);
    local_fb8 = (undefined8 *)0x0;
    ClassDB::get_native_struct_list((List *)&local_fb8);
    List<StringName,DefaultAllocator>::sort_custom<StringName::AlphCompare>
              ((List<StringName,DefaultAllocator> *)&local_fb8);
    if (local_fb8 != (undefined8 *)0x0) {
      for (plVar81 = (long *)*local_fb8; plVar81 != (long *)0x0; plVar81 = (long *)plVar81[1]) {
        ClassDB::get_native_struct_code((StringName *)&local_fa8);
        Dictionary::Dictionary((Dictionary *)&local_f98);
        lVar88 = *plVar81;
        if (lVar88 == 0) {
          local_f68 = (char *)0x0;
        }
        else {
          local_f68 = (char *)0x0;
          if (*(char **)(lVar88 + 8) == (char *)0x0) {
            if (*(long *)(lVar88 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_f68,(CowData *)(lVar88 + 0x10));
            }
          }
          else {
            String::parse_latin1((String *)&local_f68,*(char **)(lVar88 + 8));
          }
        }
        Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
        Variant::Variant((Variant *)local_f18,"name");
        pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_f98);
        Variant::operator=(pVVar76,(Variant *)local_ef8);
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
        Variant::Variant((Variant *)local_ef8,(String *)&local_fa8);
        Variant::Variant((Variant *)local_f18,"format");
        pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_f98);
        Variant::operator=(pVVar76,(Variant *)local_ef8);
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_f98);
        Array::push_back((Variant *)&local_fc0);
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::~Dictionary((Dictionary *)&local_f98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_fa8);
      }
    }
    Variant::Variant((Variant *)local_ef8,(Array *)&local_fc0);
    Variant::Variant((Variant *)local_f18,"native_structures");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)this);
    Variant::operator=(pVVar76,(Variant *)local_ef8);
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
      Variant::_clear_internal();
    }
    List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_fb8);
    Array::~Array((Array *)&local_fc0);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return this;
  }
  pSVar3 = (StringName *)*local_1010;
joined_r0x001085db:
  if (pSVar3 != (StringName *)0x0) {
    cVar68 = ClassDB::is_class_exposed(pSVar3);
    if (cVar68 == '\0') goto LAB_00109013;
    Dictionary::Dictionary(local_1008);
    lVar88 = *(long *)pSVar3;
    if (lVar88 == 0) {
      local_f68 = (char *)0x0;
    }
    else {
      local_f68 = (char *)0x0;
      if (*(char **)(lVar88 + 8) == (char *)0x0) {
        if (*(long *)(lVar88 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_f68,(CowData *)(lVar88 + 0x10));
        }
      }
      else {
        String::parse_latin1((String *)&local_f68,*(char **)(lVar88 + 8));
      }
    }
    Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
    Variant::Variant((Variant *)local_f18,"name");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_1008);
    Variant::operator=(pVVar76,(Variant *)local_ef8);
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
    StringName::StringName((StringName *)&local_f68,"RefCounted",false);
    bVar67 = (bool)ClassDB::is_parent_class(pSVar3,(StringName *)&local_f68);
    Variant::Variant((Variant *)local_ef8,bVar67);
    Variant::Variant((Variant *)local_f18,"is_refcounted");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_1008);
    Variant::operator=(pVVar76,(Variant *)local_ef8);
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_f68 != (char *)0x0)) {
      StringName::unref();
    }
    bVar67 = (bool)ClassDB::can_instantiate(pSVar3);
    Variant::Variant((Variant *)local_ef8,bVar67);
    Variant::Variant((Variant *)local_f18,"is_instantiable");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_1008);
    Variant::operator=(pVVar76,(Variant *)local_ef8);
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
      Variant::_clear_internal();
    }
    ClassDB::get_parent_class((StringName *)&local_1000);
    if (local_1000 != 0) {
      local_f68 = (char *)0x0;
      if (*(char **)(local_1000 + 8) == (char *)0x0) {
        if (*(long *)(local_1000 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_f68,(CowData *)(local_1000 + 0x10));
        }
      }
      else {
        String::parse_latin1((String *)&local_f68,*(char **)(local_1000 + 8));
      }
      Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
      Variant::Variant((Variant *)local_f18,"inherits");
      pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_1008);
      Variant::operator=(pVVar76,(Variant *)local_ef8);
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
    }
    if (!param_1) {
      local_10b0 = (long *)0x0;
      goto LAB_00109309;
    }
    lVar96 = EditorHelp::get_doc_data();
    lVar88 = *(long *)pSVar3;
    if (lVar88 == 0) {
      local_f68 = (char *)0x0;
    }
    else {
      local_f68 = (char *)0x0;
      if (*(char **)(lVar88 + 8) == (char *)0x0) {
        if (*(long *)(lVar88 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_f68,(CowData *)(lVar88 + 0x10));
        }
      }
      else {
        String::parse_latin1((String *)&local_f68,*(char **)(lVar88 + 8));
      }
    }
    if ((*(long *)(lVar96 + 0x10) != 0) && (*(int *)(lVar96 + 0x34) != 0)) {
      uVar72 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar96 + 0x30) * 4);
      lVar88 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar96 + 0x30) * 8);
      uVar73 = String::hash();
      uVar83 = CONCAT44(0,uVar72);
      lVar90 = *(long *)(lVar96 + 0x18);
      uVar89 = 1;
      if (uVar73 != 0) {
        uVar89 = uVar73;
      }
      auVar26._8_8_ = 0;
      auVar26._0_8_ = (ulong)uVar89 * lVar88;
      auVar54._8_8_ = 0;
      auVar54._0_8_ = uVar83;
      lVar99 = SUB168(auVar26 * auVar54,8);
      uVar73 = *(uint *)(lVar90 + lVar99 * 4);
      uVar94 = SUB164(auVar26 * auVar54,8);
      if (uVar73 != 0) {
        uVar92 = 0;
        do {
          if (uVar73 == uVar89) {
            cVar68 = String::operator==((String *)
                                        (*(long *)(*(long *)(lVar96 + 0x10) + lVar99 * 8) + 0x10),
                                        (String *)&local_f68);
            if (cVar68 != '\0') goto LAB_0010b7d6;
            lVar90 = *(long *)(lVar96 + 0x18);
          }
          uVar92 = uVar92 + 1;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = (ulong)(uVar94 + 1) * lVar88;
          auVar55._8_8_ = 0;
          auVar55._0_8_ = uVar83;
          lVar99 = SUB168(auVar27 * auVar55,8);
          uVar73 = *(uint *)(lVar90 + lVar99 * 4);
          uVar94 = SUB164(auVar27 * auVar55,8);
          if ((uVar73 == 0) ||
             (auVar28._8_8_ = 0, auVar28._0_8_ = (ulong)uVar73 * lVar88, auVar56._8_8_ = 0,
             auVar56._0_8_ = uVar83, auVar29._8_8_ = 0,
             auVar29._0_8_ = (ulong)((uVar72 + uVar94) - SUB164(auVar28 * auVar56,8)) * lVar88,
             auVar57._8_8_ = 0, auVar57._0_8_ = uVar83, SUB164(auVar29 * auVar57,8) < uVar92))
          break;
        } while( true );
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
    StringName::StringName((StringName *)&local_f98,pSVar3);
    local_fa8 = (char *)0x0;
    String::parse_latin1((String *)&local_fa8,"Could not find \'%s\' in DocData.");
    vformat<StringName>((Dictionary *)&local_f68,(Array *)&local_fa8,(String *)&local_f98);
    _err_print_error("generate_extension_api","core/extension/extension_api_dump.cpp",0x398,
                     "FATAL: Condition \"!class_doc\" is true.",(Dictionary *)&local_f68,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_fa8);
    if ((StringName::configured != '\0') && (local_f98 != (char *)0x0)) {
      StringName::unref();
    }
    goto LAB_00106c2f;
  }
  goto LAB_00109035;
LAB_0010b7d6:
  local_10b0 = (long *)(*(long *)(*(long *)(lVar96 + 0x10) + (ulong)uVar94 * 8) + 0x18);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
LAB_00109309:
  iVar91 = ClassDB::get_api_type(pSVar3);
  Variant::Variant((Variant *)local_ef8,
                   *(char **)(generate_extension_api(bool)::api_type + (long)iVar91 * 8));
  Variant::Variant((Variant *)local_f18,"api_type");
  pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_1008);
  Variant::operator=(pVVar76,(Variant *)local_ef8);
  if (Variant::needs_deinit[local_f18[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_ef8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Array::Array((Array *)&local_fc0);
  local_fb8 = (undefined8 *)0x0;
  ClassDB::get_integer_constant_list(pSVar3,(List *)&local_fb8,true);
  if (local_fb8 != (undefined8 *)0x0) {
    for (pSVar93 = (String *)*local_fb8; pSVar93 != (String *)0x0;
        pSVar93 = *(String **)(pSVar93 + 8)) {
      StringName::StringName((StringName *)&local_f68,pSVar93,false);
      ClassDB::get_integer_constant_enum
                ((StringName *)&local_fa8,pSVar3,SUB81((Dictionary *)&local_f68,0));
      if (StringName::configured == '\0') {
        if (local_fa8 == (char *)0x0) goto LAB_0010943d;
      }
      else {
        if (local_f68 == (char *)0x0) {
          if (local_fa8 == (char *)0x0) {
LAB_0010943d:
            Dictionary::Dictionary((Dictionary *)&local_f98);
            local_f68 = (char *)0x0;
            if (*(long *)pSVar93 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_f68,(CowData *)pSVar93);
            }
            Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
            Variant::Variant((Variant *)local_f18,"name");
            pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_f98);
            Variant::operator=(pVVar76,(Variant *)local_ef8);
            if (Variant::needs_deinit[local_f18[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_ef8[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
            StringName::StringName((StringName *)&local_f68,pSVar93,false);
            lVar88 = ClassDB::get_integer_constant(pSVar3,(StringName *)&local_f68,(bool *)0x0);
            Variant::Variant((Variant *)local_ef8,lVar88);
            Variant::Variant((Variant *)local_f18,"value");
            pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_f98);
            Variant::operator=(pVVar76,(Variant *)local_ef8);
            if (Variant::needs_deinit[local_f18[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_ef8[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_f68 != (char *)0x0)) {
              StringName::unref();
            }
            if (param_1) {
              CowData<DocData::ConstantDoc>::_copy_on_write
                        ((CowData<DocData::ConstantDoc> *)((long)local_10b0 + 0x80));
              pSVar102 = *(String **)((long)local_10b0 + 0x80);
              CowData<DocData::ConstantDoc>::_copy_on_write
                        ((CowData<DocData::ConstantDoc> *)((long)local_10b0 + 0x80));
              pSVar98 = *(String **)((long)local_10b0 + 0x80);
              if (pSVar98 != (String *)0x0) {
                pSVar98 = pSVar98 + *(long *)(pSVar98 + -8) * 0x60;
              }
              for (; pSVar98 != pSVar102; pSVar102 = pSVar102 + 0x60) {
                cVar68 = String::operator==(pSVar102,pSVar93);
                if (cVar68 != '\0') {
                  fix_doc_description((String *)&local_f68);
                  Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
                  Variant::Variant((Variant *)local_f18,"description");
                  pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_f98);
                  Variant::operator=(pVVar76,(Variant *)local_ef8);
                  if (Variant::needs_deinit[local_f18[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
                  break;
                }
              }
            }
            Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_f98);
            Array::push_back((Variant *)&local_fc0);
            if (Variant::needs_deinit[local_ef8[0]] != '\0') {
              Variant::_clear_internal();
            }
            Dictionary::~Dictionary((Dictionary *)&local_f98);
            if ((StringName::configured == '\0') || (local_fa8 == (char *)0x0)) goto LAB_001093ec;
          }
        }
        else {
          StringName::unref();
          if (local_fa8 == (char *)0x0) goto LAB_0010943d;
          if (StringName::configured == '\0') goto LAB_001093ec;
        }
        StringName::unref();
      }
LAB_001093ec:
    }
  }
  iVar91 = Array::size();
  if (iVar91 != 0) {
    Variant::Variant((Variant *)local_ef8,(Array *)&local_fc0);
    Variant::Variant((Variant *)local_f18,"constants");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_1008);
    Variant::operator=(pVVar76,(Variant *)local_ef8);
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_fb8);
  Array::~Array((Array *)&local_fc0);
  Array::Array((Array *)local_1090);
  local_fd0 = (long *)0x0;
  ClassDB::get_enum_list(pSVar3,(List *)&local_fd0,true);
  if ((local_fd0 != (long *)0x0) &&
     (local_1098 = (StringName *)*local_fd0, local_1098 != (StringName *)0x0)) {
    do {
      Dictionary::Dictionary((Dictionary *)&local_fc8);
      lVar88 = *(long *)local_1098;
      if (lVar88 == 0) {
        local_f68 = (char *)0x0;
      }
      else {
        local_f68 = (char *)0x0;
        if (*(char **)(lVar88 + 8) == (char *)0x0) {
          if (*(long *)(lVar88 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_f68,(CowData *)(lVar88 + 0x10));
          }
        }
        else {
          String::parse_latin1((String *)&local_f68,*(char **)(lVar88 + 8));
        }
      }
      Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
      Variant::Variant((Variant *)local_f18,"name");
      pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
      if (pVVar76 != (Variant *)local_ef8) {
        if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar76 = 0;
        *(int *)pVVar76 = local_ef8[0];
        *(undefined8 *)(pVVar76 + 8) = local_ef0;
        *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
        local_ef8[0] = 0;
      }
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
      bVar67 = (bool)ClassDB::is_enum_bitfield(pSVar3,local_1098,false);
      Variant::Variant((Variant *)local_ef8,bVar67);
      Variant::Variant((Variant *)local_f18,"is_bitfield");
      pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
      if (pVVar76 != (Variant *)local_ef8) {
        if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar76 = 0;
        *(int *)pVVar76 = local_ef8[0];
        *(undefined8 *)(pVVar76 + 8) = local_ef0;
        *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
        local_ef8[0] = 0;
      }
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      Array::Array((Array *)&local_fc0);
      local_fb8 = (undefined8 *)0x0;
      ClassDB::get_enum_constants(pSVar3,local_1098,(List *)&local_fb8,true);
      if (local_fb8 != (undefined8 *)0x0) {
        for (pSVar5 = (StringName *)*local_fb8; pSVar5 != (StringName *)0x0;
            pSVar5 = *(StringName **)(pSVar5 + 8)) {
          Dictionary::Dictionary((Dictionary *)&local_fa8);
          lVar88 = *(long *)pSVar5;
          if (lVar88 == 0) {
            local_f98 = (char *)0x0;
          }
          else {
            pcVar79 = *(char **)(lVar88 + 8);
            local_f98 = (char *)0x0;
            if (pcVar79 == (char *)0x0) {
              if (*(long *)(lVar88 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_f98,(CowData *)(lVar88 + 0x10));
              }
            }
            else {
              sVar78 = strlen(pcVar79);
              local_f60._0_8_ = sVar78;
              local_f68 = pcVar79;
              String::parse_latin1((StrRange *)&local_f98);
            }
          }
          Variant::Variant((Variant *)local_ef8,(String *)&local_f98);
          Variant::Variant((Variant *)local_f18,"name");
          pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fa8);
          if (pVVar76 != (Variant *)local_ef8) {
            if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar76 = 0;
            *(int *)pVVar76 = local_ef8[0];
            *(undefined8 *)(pVVar76 + 8) = local_ef0;
            *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
            local_ef8[0] = 0;
          }
          if (Variant::needs_deinit[local_f18[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f98);
          lVar88 = ClassDB::get_integer_constant(pSVar3,pSVar5,(bool *)0x0);
          Variant::Variant((Variant *)local_ef8,lVar88);
          Variant::Variant((Variant *)local_f18,"value");
          pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fa8);
          if (pVVar76 != (Variant *)local_ef8) {
            if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar76 = 0;
            *(int *)pVVar76 = local_ef8[0];
            *(undefined8 *)(pVVar76 + 8) = local_ef0;
            *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
            local_ef8[0] = 0;
          }
          if (Variant::needs_deinit[local_f18[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (param_1) {
            CowData<DocData::ConstantDoc>::_copy_on_write
                      ((CowData<DocData::ConstantDoc> *)((long)local_10b0 + 0x80));
            pSVar93 = *(String **)((long)local_10b0 + 0x80);
            CowData<DocData::ConstantDoc>::_copy_on_write
                      ((CowData<DocData::ConstantDoc> *)((long)local_10b0 + 0x80));
            pSVar102 = *(String **)((long)local_10b0 + 0x80);
            if (pSVar102 != (String *)0x0) {
              pSVar102 = pSVar102 + *(long *)(pSVar102 + -8) * 0x60;
            }
            for (; pSVar102 != pSVar93; pSVar93 = pSVar93 + 0x60) {
              cVar68 = operator==(pSVar93,pSVar5);
              if (cVar68 != '\0') {
                fix_doc_description((String *)&local_f68);
                Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
                Variant::Variant((Variant *)local_f18,"description");
                pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fa8);
                Variant::operator=(pVVar76,(Variant *)local_ef8);
                if (Variant::needs_deinit[local_f18[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                  Variant::_clear_internal();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
                break;
              }
            }
          }
          Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_fa8);
          Array::push_back((Variant *)&local_fc0);
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          Dictionary::~Dictionary((Dictionary *)&local_fa8);
        }
      }
      Variant::Variant((Variant *)local_ef8,(Array *)&local_fc0);
      Variant::Variant((Variant *)local_f18,"values");
      pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
      if (pVVar76 != (Variant *)local_ef8) {
        if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar76 = 0;
        *(int *)pVVar76 = local_ef8[0];
        *(undefined8 *)(pVVar76 + 8) = local_ef0;
        *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
        local_ef8[0] = 0;
      }
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (param_1) {
        lVar88 = *(long *)local_1098;
        if (lVar88 == 0) {
          local_f68 = (char *)0x0;
        }
        else {
          local_f68 = (char *)0x0;
          if (*(char **)(lVar88 + 8) == (char *)0x0) {
            if (*(long *)(lVar88 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_f68,(CowData *)(lVar88 + 0x10));
            }
          }
          else {
            String::parse_latin1((String *)&local_f68,*(char **)(lVar88 + 8));
          }
        }
        if ((*(long *)((long)local_10b0 + 0x90) != 0) && (*(int *)((long)local_10b0 + 0xb4) != 0)) {
          uVar72 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)local_10b0 + 0xb0) * 4)
          ;
          lVar88 = *(long *)(hash_table_size_primes_inv +
                            (ulong)*(uint *)((long)local_10b0 + 0xb0) * 8);
          uVar73 = String::hash();
          uVar83 = CONCAT44(0,uVar72);
          lVar96 = *(long *)((long)local_10b0 + 0x98);
          uVar89 = 1;
          if (uVar73 != 0) {
            uVar89 = uVar73;
          }
          auVar30._8_8_ = 0;
          auVar30._0_8_ = (ulong)uVar89 * lVar88;
          auVar58._8_8_ = 0;
          auVar58._0_8_ = uVar83;
          lVar90 = SUB168(auVar30 * auVar58,8);
          uVar73 = *(uint *)(lVar96 + lVar90 * 4);
          iVar91 = SUB164(auVar30 * auVar58,8);
          if (uVar73 != 0) {
            uVar94 = 0;
            do {
              if (uVar73 == uVar89) {
                cVar68 = String::operator==((String *)
                                            (*(long *)(*(long *)((long)local_10b0 + 0x90) +
                                                      lVar90 * 8) + 0x10),(String *)&local_f68);
                if (cVar68 != '\0') {
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
                  fix_doc_description((String *)&local_f68);
                  Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
                  Variant::Variant((Variant *)local_f18,"description");
                  pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
                  Variant::operator=(pVVar76,(Variant *)local_ef8);
                  if (Variant::needs_deinit[local_f18[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  break;
                }
                lVar96 = *(long *)((long)local_10b0 + 0x98);
              }
              uVar94 = uVar94 + 1;
              auVar31._8_8_ = 0;
              auVar31._0_8_ = (ulong)(iVar91 + 1) * lVar88;
              auVar59._8_8_ = 0;
              auVar59._0_8_ = uVar83;
              lVar90 = SUB168(auVar31 * auVar59,8);
              uVar73 = *(uint *)(lVar96 + lVar90 * 4);
              iVar91 = SUB164(auVar31 * auVar59,8);
              if ((uVar73 == 0) ||
                 (auVar32._8_8_ = 0, auVar32._0_8_ = (ulong)uVar73 * lVar88, auVar60._8_8_ = 0,
                 auVar60._0_8_ = uVar83, auVar33._8_8_ = 0,
                 auVar33._0_8_ = (ulong)((uVar72 + iVar91) - SUB164(auVar32 * auVar60,8)) * lVar88,
                 auVar61._8_8_ = 0, auVar61._0_8_ = uVar83, SUB164(auVar33 * auVar61,8) < uVar94))
              break;
            } while( true );
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
      }
      Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_fc8);
      Array::push_back(local_1090);
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_fb8);
      Array::~Array((Array *)&local_fc0);
      Dictionary::~Dictionary((Dictionary *)&local_fc8);
      local_1098 = *(StringName **)(local_1098 + 8);
    } while (local_1098 != (StringName *)0x0);
  }
  iVar91 = Array::size();
  if (iVar91 != 0) {
    Variant::Variant((Variant *)local_ef8,(Array *)local_1090);
    Variant::Variant((Variant *)local_f18,"enums");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_1008);
    Variant::operator=(pVVar76,(Variant *)local_ef8);
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_fd0);
  Array::~Array((Array *)local_1090);
  Array::Array(local_ff8);
  local_ff0 = (undefined8 *)0x0;
  ClassDB::get_method_list(pSVar3,(List *)&local_ff0,true,false);
  if (local_ff0 != (undefined8 *)0x0) {
    for (pSVar93 = (String *)*local_ff0; pSVar93 != (String *)0x0;
        pSVar93 = *(String **)(pSVar93 + 0x70)) {
      StringName::StringName((StringName *)&local_fe8,pSVar93,false);
      if ((*(uint *)(pSVar93 + 0x38) & 0x48) == 8) {
        Dictionary::Dictionary((Dictionary *)&local_fc8);
        if (local_fe8 == 0) {
          local_f68 = (char *)0x0;
        }
        else {
          local_f68 = (char *)0x0;
          if (*(char **)(local_fe8 + 8) == (char *)0x0) {
            if (*(long *)(local_fe8 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_f68,(CowData *)(local_fe8 + 0x10))
              ;
            }
          }
          else {
            String::parse_latin1((String *)&local_f68,*(char **)(local_fe8 + 8));
          }
        }
        Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
        Variant::Variant((Variant *)local_f18,"name");
        pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
        Variant::operator=(pVVar76,(Variant *)local_ef8);
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
        Variant::Variant((Variant *)local_ef8,(bool)((byte)(*(uint *)(pSVar93 + 0x38) >> 2) & 1));
        Variant::Variant((Variant *)local_f18,"is_const");
        pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
        Variant::operator=(pVVar76,(Variant *)local_ef8);
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_ef8,(bool)((byte)(*(uint *)(pSVar93 + 0x38) >> 5) & 1));
        Variant::Variant((Variant *)local_f18,"is_static");
        pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
        Variant::operator=(pVVar76,(Variant *)local_ef8);
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_ef8,(bool)((byte)(*(uint *)(pSVar93 + 0x38) >> 7) & 1));
        Variant::Variant((Variant *)local_f18,"is_required");
        pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
        Variant::operator=(pVVar76,(Variant *)local_ef8);
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_ef8,false);
        Variant::Variant((Variant *)local_f18,"is_vararg");
        pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
        Variant::operator=(pVVar76,(Variant *)local_ef8);
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_ef8,true);
        Variant::Variant((Variant *)local_f18,"is_virtual");
        pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
        Variant::operator=(pVVar76,(Variant *)local_ef8);
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        uVar72 = MethodInfo::get_compatibility_hash();
        Variant::Variant((Variant *)local_ef8,uVar72);
        Variant::Variant((Variant *)local_f18,"hash");
        pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
        Variant::operator=(pVVar76,(Variant *)local_ef8);
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        ClassDB::get_virtual_method_compatibility_hashes((StringName *)&local_f98,pSVar3);
        Array::Array((Array *)&local_fc0);
        if ((local_f90._0_8_ != 0) && (lVar88 = *(long *)(local_f90._0_8_ + -8), lVar88 != 0)) {
          lVar96 = 0;
          while (lVar96 < lVar88) {
            Variant::Variant((Variant *)local_ef8,*(uint *)(local_f90._0_8_ + lVar96 * 4));
            Array::push_back((Variant *)&local_fc0);
            if (Variant::needs_deinit[local_ef8[0]] != '\0') {
              Variant::_clear_internal();
            }
            lVar96 = lVar96 + 1;
            if (local_f90._0_8_ == 0) break;
            lVar88 = *(long *)(local_f90._0_8_ + -8);
          }
        }
        iVar91 = Array::size();
        if (0 < iVar91) {
          Variant::Variant((Variant *)local_ef8,(Array *)&local_fc0);
          Variant::Variant((Variant *)local_f18,"hash_compatibility");
          pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
          Variant::operator=(pVVar76,(Variant *)local_ef8);
          if (Variant::needs_deinit[local_f18[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        if ((*(int *)(pSVar93 + 8) != 0) || (((byte)pSVar93[0x32] & 2) != 0)) {
          local_f68 = (char *)CONCAT44(local_f68._4_4_,*(int *)(pSVar93 + 8));
          auVar64._8_8_ = 0;
          auVar64._0_8_ = local_f60._8_8_;
          local_f60 = auVar64 << 0x40;
          CowData<char32_t>::_ref((CowData<char32_t> *)local_f60,(CowData *)(pSVar93 + 0x10));
          StringName::StringName((StringName *)(local_f60 + 8),(StringName *)(pSVar93 + 0x18));
          local_f50._4_4_ = local_f50._4_4_;
          local_f50._0_4_ = *(undefined4 *)(pSVar93 + 0x20);
          local_f50._8_8_ = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)(local_f50 + 8),(CowData *)(pSVar93 + 0x28));
          local_f40 = CONCAT44(local_f40._4_4_,*(undefined4 *)(pSVar93 + 0x30));
          Dictionary::Dictionary((Dictionary *)&local_fb8);
          get_property_info_type_name((PropertyInfo *)&local_fa8);
          Variant::Variant((Variant *)local_ef8,(String *)&local_fa8);
          Variant::Variant((Variant *)local_f18,"type");
          pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
          Variant::operator=(pVVar76,(Variant *)local_ef8);
          if (Variant::needs_deinit[local_f18[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_fa8);
          if ((*(long *)(pSVar93 + 0x40) == 0) || (-2 < *(int *)(*(long *)(pSVar93 + 0x40) + 0x10)))
          {
            if (0 < *(int *)(pSVar93 + 0x58)) {
              iVar91 = MethodInfo::get_argument_meta((MethodInfo *)pSVar93,-1);
              local_fa8 = (char *)0x0;
              String::parse_latin1
                        ((String *)&local_fa8,
                         *(char **)(get_type_meta_name(GodotTypeInfo::Metadata)::argmeta +
                                   (long)iVar91 * 8));
              Variant::Variant((Variant *)local_ef8,(String *)&local_fa8);
              Variant::Variant((Variant *)local_f18,"meta");
              pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
              Variant::operator=(pVVar76,(Variant *)local_ef8);
              if (Variant::needs_deinit[local_f18[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                Variant::_clear_internal();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_fa8);
            }
          }
          else {
            _err_print_error("get_argument_meta","./core/object/object.h",0xec,
                             "Condition \"p_arg < -1 || p_arg > arguments.size()\" is true. Returning: 0"
                             ,0,0);
          }
          Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_fb8);
          Variant::Variant((Variant *)local_f18,"return_value");
          pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
          Variant::operator=(pVVar76,(Variant *)local_ef8);
          if (Variant::needs_deinit[local_f18[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          Dictionary::~Dictionary((Dictionary *)&local_fb8);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f68);
        }
        Array::Array((Array *)&local_fb8);
        if ((*(long **)(pSVar93 + 0x40) != (long *)0x0) &&
           (lVar88 = **(long **)(pSVar93 + 0x40), lVar88 != 0)) {
          lVar96 = 0;
          do {
            Dictionary::Dictionary((Dictionary *)&local_fa8);
            Variant::Variant((Variant *)local_ef8,(String *)(lVar88 + 8));
            Variant::Variant((Variant *)local_f18,"name");
            pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fa8);
            if (pVVar76 != (Variant *)local_ef8) {
              if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
                Variant::_clear_internal();
              }
              *(undefined4 *)pVVar76 = 0;
              *(int *)pVVar76 = local_ef8[0];
              *(undefined8 *)(pVVar76 + 8) = local_ef0;
              *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
              local_ef8[0] = 0;
            }
            if (Variant::needs_deinit[local_f18[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_ef8[0]] != '\0') {
              Variant::_clear_internal();
            }
            get_property_info_type_name((PropertyInfo *)&local_f68);
            Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
            Variant::Variant((Variant *)local_f18,"type");
            pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fa8);
            if (pVVar76 != (Variant *)local_ef8) {
              if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
                Variant::_clear_internal();
              }
              *(undefined4 *)pVVar76 = 0;
              *(int *)pVVar76 = local_ef8[0];
              *(undefined8 *)(pVVar76 + 8) = local_ef0;
              *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
              local_ef8[0] = 0;
            }
            if (Variant::needs_deinit[local_f18[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_ef8[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
            iVar91 = 0;
            if (*(long *)(pSVar93 + 0x40) != 0) {
              iVar91 = *(int *)(*(long *)(pSVar93 + 0x40) + 0x10);
            }
            if (iVar91 < (int)lVar96) {
              _err_print_error("get_argument_meta","./core/object/object.h",0xec,
                               "Condition \"p_arg < -1 || p_arg > arguments.size()\" is true. Returning: 0"
                               ,0,0);
            }
            else {
              lVar90 = *(long *)(pSVar93 + 0x68);
              if (((lVar90 != 0) && (lVar96 < *(long *)(lVar90 + -8))) &&
                 (iVar91 = *(int *)(lVar90 + lVar96 * 4), 0 < iVar91)) {
                local_f68 = (char *)0x0;
                String::parse_latin1
                          ((String *)&local_f68,
                           *(char **)(get_type_meta_name(GodotTypeInfo::Metadata)::argmeta +
                                     (long)iVar91 * 8));
                Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
                Variant::Variant((Variant *)local_f18,"meta");
                pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fa8);
                Variant::operator=(pVVar76,(Variant *)local_ef8);
                if (Variant::needs_deinit[local_f18[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                  Variant::_clear_internal();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
              }
            }
            Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_fa8);
            Array::push_back((Variant *)&local_fb8);
            if (Variant::needs_deinit[local_ef8[0]] != '\0') {
              Variant::_clear_internal();
            }
            lVar96 = lVar96 + 1;
            Dictionary::~Dictionary((Dictionary *)&local_fa8);
            lVar88 = *(long *)(lVar88 + 0x30);
          } while (lVar88 != 0);
        }
        iVar91 = Array::size();
        if (iVar91 != 0) {
          Variant::Variant((Variant *)local_ef8,(Array *)&local_fb8);
          Variant::Variant((Variant *)local_f18,"arguments");
          pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
          Variant::operator=(pVVar76,(Variant *)local_ef8);
          if (Variant::needs_deinit[local_f18[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        if (param_1) {
          CowData<DocData::MethodDoc>::_copy_on_write
                    ((CowData<DocData::MethodDoc> *)((long)local_10b0 + 0x50));
          pSVar102 = *(String **)((long)local_10b0 + 0x50);
          CowData<DocData::MethodDoc>::_copy_on_write
                    ((CowData<DocData::MethodDoc> *)((long)local_10b0 + 0x50));
          lVar88 = *(long *)((long)local_10b0 + 0x50);
          if (lVar88 == 0) {
            lVar96 = 0;
          }
          else {
            lVar96 = *(long *)(lVar88 + -8);
          }
          for (; (String *)(lVar88 + lVar96 * 0x78) != pSVar102; pSVar102 = pSVar102 + 0x78) {
            cVar68 = operator==(pSVar102,(StringName *)&local_fe8);
            if (cVar68 != '\0') {
              fix_doc_description((String *)&local_f68);
              Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
              Variant::Variant((Variant *)local_f18,"description");
              pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
              Variant::operator=(pVVar76,(Variant *)local_ef8);
              if (Variant::needs_deinit[local_f18[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                Variant::_clear_internal();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
              break;
            }
          }
        }
        Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_fc8);
        Array::push_back((Variant *)local_ff8);
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        Array::~Array((Array *)&local_fb8);
        Array::~Array((Array *)&local_fc0);
        uVar82 = local_f90._0_8_;
        if (local_f90._0_8_ != 0) {
          LOCK();
          plVar81 = (long *)(local_f90._0_8_ + -0x10);
          *plVar81 = *plVar81 + -1;
          UNLOCK();
          if (*plVar81 == 0) {
            auVar65._8_8_ = 0;
            auVar65._0_8_ = local_f90._8_8_;
            local_f90 = auVar65 << 0x40;
            Memory::free_static((void *)(uVar82 + -0x10),false);
          }
        }
        Dictionary::~Dictionary((Dictionary *)&local_fc8);
      }
      else {
        cVar68 = String::begins_with((char *)pSVar93);
        if (cVar68 == '\0') {
          Dictionary::Dictionary(local_fe0);
          if (local_fe8 == 0) {
            local_f68 = (char *)0x0;
          }
          else {
            local_f68 = (char *)0x0;
            if (*(char **)(local_fe8 + 8) == (char *)0x0) {
              if (*(long *)(local_fe8 + 0x10) != 0) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)&local_f68,(CowData *)(local_fe8 + 0x10));
              }
            }
            else {
              String::parse_latin1((String *)&local_f68,*(char **)(local_fe8 + 8));
            }
          }
          Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
          Variant::Variant((Variant *)local_f18,"name");
          pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_fe0);
          Variant::operator=(pVVar76,(Variant *)local_ef8);
          if (Variant::needs_deinit[local_f18[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
          plVar81 = (long *)ClassDB::get_method(pSVar3,(StringName *)&local_fe8);
          if (plVar81 != (long *)0x0) {
            Variant::Variant((Variant *)local_ef8,*(bool *)((long)plVar81 + 0x39));
            Variant::Variant((Variant *)local_f18,"is_const");
            pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_fe0);
            Variant::operator=(pVVar76,(Variant *)local_ef8);
            if (Variant::needs_deinit[local_f18[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_ef8[0]] != '\0') {
              Variant::_clear_internal();
            }
            uVar70 = false;
            if (*(code **)(*plVar81 + 0x38) != MethodBind::is_vararg) {
              uVar70 = (**(code **)(*plVar81 + 0x38))(plVar81);
            }
            Variant::Variant((Variant *)local_ef8,(bool)uVar70);
            Variant::Variant((Variant *)local_f18,"is_vararg");
            pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_fe0);
            Variant::operator=(pVVar76,(Variant *)local_ef8);
            if (Variant::needs_deinit[local_f18[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_ef8[0]] != '\0') {
              Variant::_clear_internal();
            }
            Variant::Variant((Variant *)local_ef8,SUB81(plVar81[7],0));
            Variant::Variant((Variant *)local_f18,"is_static");
            pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_fe0);
            Variant::operator=(pVVar76,(Variant *)local_ef8);
            if (Variant::needs_deinit[local_f18[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_ef8[0]] != '\0') {
              Variant::_clear_internal();
            }
            Variant::Variant((Variant *)local_ef8,false);
            Variant::Variant((Variant *)local_f18,"is_virtual");
            pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_fe0);
            Variant::operator=(pVVar76,(Variant *)local_ef8);
            if (Variant::needs_deinit[local_f18[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_ef8[0]] != '\0') {
              Variant::_clear_internal();
            }
            uVar72 = MethodBind::get_hash();
            Variant::Variant((Variant *)local_ef8,uVar72);
            Variant::Variant((Variant *)local_f18,"hash");
            pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_fe0);
            Variant::operator=(pVVar76,(Variant *)local_ef8);
            if (Variant::needs_deinit[local_f18[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_ef8[0]] != '\0') {
              Variant::_clear_internal();
            }
            ClassDB::get_method_compatibility_hashes((StringName *)&local_fb8,pSVar3);
            Array::Array((Array *)local_1090);
            if ((local_fb0 != 0) && (lVar88 = *(long *)(local_fb0 + -8), lVar88 != 0)) {
              lVar96 = 0;
              while (lVar96 < lVar88) {
                Variant::Variant((Variant *)local_ef8,*(uint *)(local_fb0 + lVar96 * 4));
                Array::push_back(local_1090);
                if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                  Variant::_clear_internal();
                }
                lVar96 = lVar96 + 1;
                if (local_fb0 == 0) break;
                lVar88 = *(long *)(local_fb0 + -8);
              }
            }
            GDExtensionSpecialCompatHashes::get_legacy_hashes
                      (pSVar3,(StringName *)&local_fe8,(Array *)local_1090,true);
            iVar91 = Array::size();
            if (0 < iVar91) {
              Variant::Variant((Variant *)local_ef8,(Array *)local_1090);
              Variant::Variant((Variant *)local_f18,"hash_compatibility");
              pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_fe0);
              Variant::operator=(pVVar76,(Variant *)local_ef8);
              if (Variant::needs_deinit[local_f18[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                Variant::_clear_internal();
              }
            }
            local_fa0 = 0;
            if (plVar81[5] != 0) {
              CowData<Variant>::_unref((CowData<Variant> *)&local_fa0);
              if (plVar81[5] != 0) {
                plVar1 = (long *)(plVar81[5] + -0x10);
                do {
                  lVar88 = *plVar1;
                  if (lVar88 == 0) goto LAB_0010a1f6;
                  LOCK();
                  lVar96 = *plVar1;
                  bVar67 = lVar88 == lVar96;
                  if (bVar67) {
                    *plVar1 = lVar88 + 1;
                    lVar96 = lVar88;
                  }
                  UNLOCK();
                } while (!bVar67);
                if (lVar96 != -1) {
                  local_fa0 = plVar81[5];
                }
              }
            }
LAB_0010a1f6:
            Array::Array((Array *)&local_fd0);
            bVar103 = *(byte *)((long)plVar81 + 0x3a);
            iVar71 = -(uint)bVar103;
            iVar91 = *(int *)((long)plVar81 + 0x34);
            if (iVar91 != iVar71 && SBORROW4(iVar91,iVar71) == (int)(iVar91 + (uint)bVar103) < 0) {
              if (bVar103 == 0) {
                iVar91 = 0;
                local_1078 = 0;
                goto LAB_0010a56c;
              }
              MethodBind::get_return_info();
              Dictionary::Dictionary((Dictionary *)&local_fc8);
              iVar91 = -1;
              local_1078 = -1;
              while( true ) {
                get_property_info_type_name((PropertyInfo *)&local_f98);
                Variant::Variant((Variant *)local_ef8,(String *)&local_f98);
                Variant::Variant((Variant *)local_f18,"type");
                pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
                if (pVVar76 != (Variant *)local_ef8) {
                  if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
                    Variant::_clear_internal();
                  }
                  *(undefined4 *)pVVar76 = 0;
                  *(int *)pVVar76 = local_ef8[0];
                  *(undefined8 *)(pVVar76 + 8) = local_ef0;
                  *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
                  local_ef8[0] = 0;
                }
                if (Variant::needs_deinit[local_f18[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                  Variant::_clear_internal();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_f98);
                iVar71 = (**(code **)(*plVar81 + 0x10))(plVar81,iVar91);
                if (0 < iVar71) {
                  iVar71 = (**(code **)(*plVar81 + 0x10))(plVar81,iVar91);
                  local_fc0 = (undefined8 *)0x0;
                  pcVar79 = *(char **)(get_type_meta_name(GodotTypeInfo::Metadata)::argmeta +
                                      (long)iVar71 * 8);
                  sVar78 = 0;
                  if (pcVar79 != (char *)0x0) {
                    sVar78 = strlen(pcVar79);
                  }
                  local_f90._0_8_ = sVar78;
                  local_f98 = pcVar79;
                  String::parse_latin1((StrRange *)&local_fc0);
                  Variant::Variant((Variant *)local_ef8,(String *)&local_fc0);
                  Variant::Variant((Variant *)local_f18,"meta");
                  pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
                  Variant::operator=(pVVar76,(Variant *)local_ef8);
                  if (Variant::needs_deinit[local_f18[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_fc0);
                }
                if (iVar91 == -1) {
                  Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_fc8);
                  Variant::Variant((Variant *)local_f18,"return_value");
                  pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_fe0);
                  Variant::operator=(pVVar76,(Variant *)local_ef8);
                  if (Variant::needs_deinit[local_f18[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                }
                else {
                  lVar88 = (long)*(int *)((long)plVar81 + 0x34);
                  if (local_fa0 == 0) {
                    lVar96 = 0;
                  }
                  else {
                    lVar96 = *(long *)(local_fa0 - 8);
                    lVar88 = lVar88 - lVar96;
                  }
                  if (lVar88 <= local_1078) {
                    lVar88 = (long)((iVar91 - *(int *)((long)plVar81 + 0x34)) + (int)lVar96);
                    if ((lVar96 <= lVar88) || (lVar88 < 0)) goto LAB_00106c13;
                    Variant::get_construct_string();
                    Variant::Variant((Variant *)local_ef8,(String *)&local_f98);
                    Variant::Variant((Variant *)local_f18,"default_value");
                    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
                    Variant::operator=(pVVar76,(Variant *)local_ef8);
                    if (Variant::needs_deinit[local_f18[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f98);
                  }
                  Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_fc8);
                  Array::push_back((Variant *)&local_fd0);
                }
                if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                  Variant::_clear_internal();
                }
                Dictionary::~Dictionary((Dictionary *)&local_fc8);
                uVar82 = local_f50._8_8_;
                if (local_f50._8_8_ != 0) {
                  LOCK();
                  plVar1 = (long *)(local_f50._8_8_ + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_f50._8_8_ = 0;
                    Memory::free_static((void *)(uVar82 + -0x10),false);
                  }
                }
                if ((StringName::configured != '\0') && (local_f60._8_8_ != 0)) {
                  StringName::unref();
                }
                uVar82 = local_f60._0_8_;
                if (local_f60._0_8_ != 0) {
                  LOCK();
                  plVar1 = (long *)(local_f60._0_8_ + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    auVar63._8_8_ = 0;
                    auVar63._0_8_ = local_f60._8_8_;
                    local_f60 = auVar63 << 0x40;
                    Memory::free_static((void *)(uVar82 + -0x10),false);
                  }
                }
                iVar91 = iVar91 + 1;
                local_1078 = local_1078 + 1;
                if (*(int *)((long)plVar81 + 0x34) <= iVar91) break;
LAB_0010a56c:
                MethodBind::get_argument_info((int)(Dictionary *)&local_f68);
                Dictionary::Dictionary((Dictionary *)&local_fc8);
                Variant::Variant((Variant *)local_ef8,(String *)local_f60);
                Variant::Variant((Variant *)local_f18,"name");
                pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
                Variant::operator=(pVVar76,(Variant *)local_ef8);
                if (Variant::needs_deinit[local_f18[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                  Variant::_clear_internal();
                }
              }
            }
            iVar91 = Array::size();
            if (iVar91 != 0) {
              Variant::Variant((Variant *)local_ef8,(Array *)&local_fd0);
              Variant::Variant((Variant *)local_f18,"arguments");
              pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_fe0);
              Variant::operator=(pVVar76,(Variant *)local_ef8);
              if (Variant::needs_deinit[local_f18[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                Variant::_clear_internal();
              }
            }
            if (param_1) {
              CowData<DocData::MethodDoc>::_copy_on_write
                        ((CowData<DocData::MethodDoc> *)((long)local_10b0 + 0x50));
              pSVar102 = *(String **)((long)local_10b0 + 0x50);
              CowData<DocData::MethodDoc>::_copy_on_write
                        ((CowData<DocData::MethodDoc> *)((long)local_10b0 + 0x50));
              lVar88 = *(long *)((long)local_10b0 + 0x50);
              if (lVar88 == 0) {
                lVar96 = 0;
              }
              else {
                lVar96 = *(long *)(lVar88 + -8);
              }
              for (; (String *)(lVar88 + lVar96 * 0x78) != pSVar102; pSVar102 = pSVar102 + 0x78) {
                cVar68 = operator==(pSVar102,(StringName *)&local_fe8);
                if (cVar68 != '\0') {
                  fix_doc_description((String *)&local_f68);
                  Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
                  Variant::Variant((Variant *)local_f18,"description");
                  pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_fe0);
                  Variant::operator=(pVVar76,(Variant *)local_ef8);
                  if (Variant::needs_deinit[local_f18[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
                  break;
                }
              }
            }
            Variant::Variant((Variant *)local_ef8,local_fe0);
            Array::push_back((Variant *)local_ff8);
            if (Variant::needs_deinit[local_ef8[0]] != '\0') {
              Variant::_clear_internal();
            }
            Array::~Array((Array *)&local_fd0);
            CowData<Variant>::_unref((CowData<Variant> *)&local_fa0);
            Array::~Array((Array *)local_1090);
            lVar88 = local_fb0;
            if (local_fb0 != 0) {
              LOCK();
              plVar81 = (long *)(local_fb0 + -0x10);
              *plVar81 = *plVar81 + -1;
              UNLOCK();
              if (*plVar81 == 0) {
                local_fb0 = 0;
                Memory::free_static((void *)(lVar88 + -0x10),false);
              }
            }
          }
          Dictionary::~Dictionary(local_fe0);
        }
      }
      if ((StringName::configured != '\0') && (local_fe8 != 0)) {
        StringName::unref();
      }
    }
  }
  iVar91 = Array::size();
  if (iVar91 != 0) {
    Variant::Variant((Variant *)local_ef8,local_ff8);
    Variant::Variant((Variant *)local_f18,"methods");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_1008);
    Variant::operator=(pVVar76,(Variant *)local_ef8);
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  List<MethodInfo,DefaultAllocator>::~List((List<MethodInfo,DefaultAllocator> *)&local_ff0);
  Array::~Array(local_ff8);
  Array::Array((Array *)&local_fd0);
  local_fc8 = (undefined8 *)0x0;
  ClassDB::get_signal_list(pSVar3,(List *)&local_fc8,true);
  if (local_fc8 != (undefined8 *)0x0) {
    for (pSVar93 = (String *)*local_fc8; pSVar93 != (String *)0x0;
        pSVar93 = *(String **)(pSVar93 + 0x70)) {
      StringName::StringName((StringName *)&local_fc0,pSVar93,false);
      Dictionary::Dictionary((Dictionary *)&local_fb8);
      if (local_fc0 == (undefined8 *)0x0) {
        local_f68 = (char *)0x0;
      }
      else {
        local_f68 = (char *)0x0;
        if ((char *)local_fc0[1] == (char *)0x0) {
          if (local_fc0[2] != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_f68,(CowData *)(local_fc0 + 2));
          }
        }
        else {
          String::parse_latin1((String *)&local_f68,(char *)local_fc0[1]);
        }
      }
      Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
      Variant::Variant((Variant *)local_f18,"name");
      pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
      Variant::operator=(pVVar76,(Variant *)local_ef8);
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
      Array::Array((Array *)&local_fa8);
      if ((*(long **)(pSVar93 + 0x40) != (long *)0x0) &&
         (lVar88 = **(long **)(pSVar93 + 0x40), lVar88 != 0)) {
        local_1098 = (StringName *)0x0;
        do {
          Dictionary::Dictionary((Dictionary *)&local_f98);
          Variant::Variant((Variant *)local_ef8,(String *)(lVar88 + 8));
          Variant::Variant((Variant *)local_f18,"name");
          pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_f98);
          if (pVVar76 != (Variant *)local_ef8) {
            if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar76 = 0;
            *(int *)pVVar76 = local_ef8[0];
            *(undefined8 *)(pVVar76 + 8) = local_ef0;
            *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
            local_ef8[0] = 0;
          }
          if (Variant::needs_deinit[local_f18[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          get_property_info_type_name((PropertyInfo *)&local_f68);
          Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
          Variant::Variant((Variant *)local_f18,"type");
          pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_f98);
          if (pVVar76 != (Variant *)local_ef8) {
            if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar76 = 0;
            *(int *)pVVar76 = local_ef8[0];
            *(undefined8 *)(pVVar76 + 8) = local_ef0;
            *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
            local_ef8[0] = 0;
          }
          if (Variant::needs_deinit[local_f18[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
          iVar91 = 0;
          if (*(long *)(pSVar93 + 0x40) != 0) {
            iVar91 = *(int *)(*(long *)(pSVar93 + 0x40) + 0x10);
          }
          if (iVar91 < (int)local_1098) {
            _err_print_error("get_argument_meta","./core/object/object.h",0xec,
                             "Condition \"p_arg < -1 || p_arg > arguments.size()\" is true. Returning: 0"
                             ,0,0);
          }
          else {
            lVar96 = *(long *)(pSVar93 + 0x68);
            if (((lVar96 != 0) && ((long)local_1098 < *(long *)(lVar96 + -8))) &&
               (iVar91 = *(int *)(lVar96 + (long)local_1098 * 4), 0 < iVar91)) {
              local_f68 = (char *)0x0;
              String::parse_latin1
                        ((String *)&local_f68,
                         *(char **)(get_type_meta_name(GodotTypeInfo::Metadata)::argmeta +
                                   (long)iVar91 * 8));
              Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
              Variant::Variant((Variant *)local_f18,"meta");
              pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_f98);
              Variant::operator=(pVVar76,(Variant *)local_ef8);
              if (Variant::needs_deinit[local_f18[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                Variant::_clear_internal();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
            }
          }
          Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_f98);
          Array::push_back((Variant *)&local_fa8);
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          Dictionary::~Dictionary((Dictionary *)&local_f98);
          lVar88 = *(long *)(lVar88 + 0x30);
          local_1098 = (StringName *)((long)local_1098 + 1);
        } while (lVar88 != 0);
      }
      iVar91 = Array::size();
      if (iVar91 != 0) {
        Variant::Variant((Variant *)local_ef8,(Array *)&local_fa8);
        Variant::Variant((Variant *)local_f18,"arguments");
        pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
        Variant::operator=(pVVar76,(Variant *)local_ef8);
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      if (param_1) {
        CowData<DocData::MethodDoc>::_copy_on_write
                  ((CowData<DocData::MethodDoc> *)((long)local_10b0 + 0x70));
        pSVar98 = *(String **)((long)local_10b0 + 0x70);
        CowData<DocData::MethodDoc>::_copy_on_write
                  ((CowData<DocData::MethodDoc> *)((long)local_10b0 + 0x70));
        pSVar102 = *(String **)((long)local_10b0 + 0x70);
        if (pSVar102 != (String *)0x0) {
          pSVar102 = pSVar102 + *(long *)(pSVar102 + -8) * 0x78;
        }
        for (; pSVar98 != pSVar102; pSVar98 = pSVar98 + 0x78) {
          cVar68 = operator==(pSVar98,(StringName *)&local_fc0);
          if (cVar68 != '\0') {
            fix_doc_description((String *)&local_f68);
            Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
            Variant::Variant((Variant *)local_f18,"description");
            pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
            Variant::operator=(pVVar76,(Variant *)local_ef8);
            if (Variant::needs_deinit[local_f18[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_ef8[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
            break;
          }
        }
      }
      Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_fb8);
      Array::push_back((Variant *)&local_fd0);
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      Array::~Array((Array *)&local_fa8);
      Dictionary::~Dictionary((Dictionary *)&local_fb8);
      if ((StringName::configured != '\0') && (local_fc0 != (undefined8 *)0x0)) {
        StringName::unref();
      }
    }
  }
  iVar91 = Array::size();
  if (iVar91 != 0) {
    Variant::Variant((Variant *)local_ef8,(Array *)&local_fd0);
    Variant::Variant((Variant *)local_f18,"signals");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_1008);
    Variant::operator=(pVVar76,(Variant *)local_ef8);
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  List<MethodInfo,DefaultAllocator>::~List((List<MethodInfo,DefaultAllocator> *)&local_fc8);
  Array::~Array((Array *)&local_fd0);
  Array::Array((Array *)&local_fd0);
  local_fc8 = (undefined8 *)0x0;
  ClassDB::get_property_list(pSVar3,(List *)&local_fc8,true,(Object *)0x0);
  if (local_fc8 != (undefined8 *)0x0) {
    for (piVar4 = (int *)*local_fc8; piVar4 != (int *)0x0; piVar4 = *(int **)(piVar4 + 0xc)) {
      if (((piVar4[10] & 0x1c0U) == 0) && ((*piVar4 != 0 || ((piVar4[10] & 0x40000U) == 0)))) {
        pSVar93 = (String *)(piVar4 + 2);
        cVar68 = String::begins_with((char *)pSVar93);
        if ((cVar68 == '\0') && (iVar91 = String::find_char((wchar32)pSVar93,0x2f), iVar91 == -1)) {
          StringName::StringName((StringName *)&local_fc0,pSVar93,false);
          Dictionary::Dictionary((Dictionary *)&local_fb8);
          get_property_info_type_name((PropertyInfo *)&local_f68);
          Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
          Variant::Variant((Variant *)local_f18,"type");
          pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
          Variant::operator=(pVVar76,(Variant *)local_ef8);
          if (Variant::needs_deinit[local_f18[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
          if (local_fc0 == (undefined8 *)0x0) {
            local_f68 = (char *)0x0;
          }
          else {
            local_f68 = (char *)0x0;
            if ((char *)local_fc0[1] == (char *)0x0) {
              if (local_fc0[2] != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_f68,(CowData *)(local_fc0 + 2));
              }
            }
            else {
              String::parse_latin1((String *)&local_f68,(char *)local_fc0[1]);
            }
          }
          Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
          Variant::Variant((Variant *)local_f18,"name");
          pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
          Variant::operator=(pVVar76,(Variant *)local_ef8);
          if (Variant::needs_deinit[local_f18[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
          StringName::StringName((StringName *)&local_f68,pSVar93,false);
          ClassDB::get_property_setter((StringName *)&local_fa8,pSVar3);
          if ((StringName::configured != '\0') && (local_f68 != (char *)0x0)) {
            StringName::unref();
          }
          cVar68 = StringName::operator==((StringName *)&local_fa8,"");
          if (cVar68 == '\0') {
            Variant::Variant((Variant *)local_ef8,(StringName *)&local_fa8);
            Variant::Variant((Variant *)local_f18,"setter");
            pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
            Variant::operator=(pVVar76,(Variant *)local_ef8);
            if (Variant::needs_deinit[local_f18[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_ef8[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          StringName::StringName((StringName *)&local_f68,pSVar93,false);
          ClassDB::get_property_getter((StringName *)&local_f98,pSVar3);
          if ((StringName::configured != '\0') && (local_f68 != (char *)0x0)) {
            StringName::unref();
          }
          cVar68 = StringName::operator==((StringName *)&local_f98,"");
          if (cVar68 == '\0') {
            Variant::Variant((Variant *)local_ef8,(StringName *)&local_f98);
            Variant::Variant((Variant *)local_f18,"getter");
            pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
            Variant::operator=(pVVar76,(Variant *)local_ef8);
            if (Variant::needs_deinit[local_f18[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_ef8[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          StringName::StringName((StringName *)&local_f68,pSVar93,false);
          iVar91 = ClassDB::get_property_index(pSVar3,(StringName *)&local_f68,(bool *)0x0);
          if ((StringName::configured != '\0') && (local_f68 != (char *)0x0)) {
            StringName::unref();
          }
          if (iVar91 != -1) {
            Variant::Variant((Variant *)local_ef8,iVar91);
            Variant::Variant((Variant *)local_f18,"index");
            pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
            Variant::operator=(pVVar76,(Variant *)local_ef8);
            if (Variant::needs_deinit[local_f18[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_ef8[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          if (param_1) {
            CowData<DocData::PropertyDoc>::_copy_on_write
                      ((CowData<DocData::PropertyDoc> *)((long)local_10b0 + 0xc0));
            pSVar93 = *(String **)((long)local_10b0 + 0xc0);
            CowData<DocData::PropertyDoc>::_copy_on_write
                      ((CowData<DocData::PropertyDoc> *)((long)local_10b0 + 0xc0));
            lVar88 = *(long *)((long)local_10b0 + 0xc0);
            if (lVar88 == 0) {
              lVar96 = 0;
            }
            else {
              lVar96 = *(long *)(lVar88 + -8);
            }
            for (; (String *)(lVar88 + lVar96 * 0x78) != pSVar93; pSVar93 = pSVar93 + 0x78) {
              cVar68 = operator==(pSVar93,(StringName *)&local_fc0);
              if (cVar68 != '\0') {
                fix_doc_description((String *)&local_f68);
                Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
                Variant::Variant((Variant *)local_f18,"description");
                pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
                Variant::operator=(pVVar76,(Variant *)local_ef8);
                if (Variant::needs_deinit[local_f18[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                  Variant::_clear_internal();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
                break;
              }
            }
          }
          Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_fb8);
          Array::push_back((Variant *)&local_fd0);
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') &&
             (((local_f98 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0'))
              && (local_fa8 != (char *)0x0)))) {
            StringName::unref();
          }
          Dictionary::~Dictionary((Dictionary *)&local_fb8);
          if ((StringName::configured != '\0') && (local_fc0 != (undefined8 *)0x0)) {
            StringName::unref();
          }
        }
      }
    }
  }
  iVar91 = Array::size();
  if (iVar91 != 0) {
    Variant::Variant((Variant *)local_ef8,(Array *)&local_fd0);
    Variant::Variant((Variant *)local_f18,"properties");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_1008);
    Variant::operator=(pVVar76,(Variant *)local_ef8);
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_fc8);
  Array::~Array((Array *)&local_fd0);
  if ((local_10b0 != (long *)0x0) && (param_1)) {
    fix_doc_description((String *)&local_f68);
    Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
    Variant::Variant((Variant *)local_f18,"brief_description");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_1008);
    Variant::operator=(pVVar76,(Variant *)local_ef8);
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
    fix_doc_description((String *)&local_f68);
    Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
    Variant::Variant((Variant *)local_f18,"description");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_1008);
    Variant::operator=(pVVar76,(Variant *)local_ef8);
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
  }
  Variant::Variant((Variant *)local_ef8,local_1008);
  Array::push_back((Variant *)local_1018);
  if (Variant::needs_deinit[local_ef8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_1000 != 0)) {
    StringName::unref();
  }
  Dictionary::~Dictionary(local_1008);
LAB_00109013:
  pSVar3 = *(StringName **)(pSVar3 + 8);
  goto joined_r0x001085db;
code_r0x00102a1a:
  Variant::Variant((Variant *)local_f18,(Array *)&local_fd0);
  Variant::Variant((Variant *)local_f38,"builtin_class_member_offsets");
  pVVar76 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar76 != (Variant *)local_f18) {
    if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar76 = 0;
    *(int *)pVVar76 = local_f18[0];
    *(undefined8 *)(pVVar76 + 8) = local_f10;
    *(undefined8 *)(pVVar76 + 0x10) = uStack_f08;
    local_f18[0] = 0;
  }
  if (Variant::needs_deinit[local_f38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_f18[0]] != '\0') {
    Variant::_clear_internal();
  }
  Array::~Array((Array *)&local_fd0);
  if (param_1) {
    EditorHelp::generate_doc(false);
    Array::Array(local_fd8);
    local_f90 = (undefined1  [16])0x0;
    local_f80 = (undefined1  [16])0x0;
    local_f60 = (undefined1  [16])0x0;
    local_f50 = (undefined1  [16])0x0;
    local_f70 = _LC106;
    local_f40 = _LC106;
    lVar88 = EditorHelp::get_doc_data();
    local_fb8 = (undefined8 *)0x0;
    local_fa0 = 0xc;
    local_fa8 = "@GlobalScope";
    String::parse_latin1((StrRange *)&local_fb8);
    if ((*(long *)(lVar88 + 0x10) != 0) && (*(int *)(lVar88 + 0x34) != 0)) {
      uVar72 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar88 + 0x30) * 4);
      lVar96 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar88 + 0x30) * 8);
      uVar73 = String::hash();
      uVar83 = CONCAT44(0,uVar72);
      uVar89 = 1;
      if (uVar73 != 0) {
        uVar89 = uVar73;
      }
      auVar22._8_8_ = 0;
      auVar22._0_8_ = (ulong)uVar89 * lVar96;
      auVar50._8_8_ = 0;
      auVar50._0_8_ = uVar83;
      lVar99 = SUB168(auVar22 * auVar50,8);
      lVar90 = *(long *)(lVar88 + 0x18);
      uVar94 = SUB164(auVar22 * auVar50,8);
      uVar73 = *(uint *)(lVar90 + lVar99 * 4);
      if (uVar73 != 0) {
        uVar92 = 0;
        do {
          if (uVar73 == uVar89) {
            cVar68 = String::operator==((String *)
                                        (*(long *)(*(long *)(lVar88 + 0x10) + lVar99 * 8) + 0x10),
                                        (String *)&local_fb8);
            if (cVar68 != '\0') {
              local_10a8 = *(long *)(*(long *)(lVar88 + 0x10) + (ulong)uVar94 * 8) + 0x18;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_fb8);
              goto LAB_00102b22;
            }
            lVar90 = *(long *)(lVar88 + 0x18);
          }
          uVar92 = uVar92 + 1;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = (ulong)(uVar94 + 1) * lVar96;
          auVar51._8_8_ = 0;
          auVar51._0_8_ = uVar83;
          lVar99 = SUB168(auVar23 * auVar51,8);
          uVar73 = *(uint *)(lVar90 + lVar99 * 4);
          uVar94 = SUB164(auVar23 * auVar51,8);
        } while ((uVar73 != 0) &&
                (auVar24._8_8_ = 0, auVar24._0_8_ = (ulong)uVar73 * lVar96, auVar52._8_8_ = 0,
                auVar52._0_8_ = uVar83, auVar25._8_8_ = 0,
                auVar25._0_8_ = (ulong)((uVar72 + uVar94) - SUB164(auVar24 * auVar52,8)) * lVar96,
                auVar53._8_8_ = 0, auVar53._0_8_ = uVar83, uVar92 <= SUB164(auVar25 * auVar53,8)));
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_fb8);
    uVar82 = 0x1eb;
  }
  else {
    Array::Array(local_fd8);
    local_10a8 = 0;
    local_f90 = (undefined1  [16])0x0;
    local_f70 = _LC106;
    local_f40 = _LC106;
    local_f80 = (undefined1  [16])0x0;
    local_f60 = (undefined1  [16])0x0;
    local_f50 = (undefined1  [16])0x0;
LAB_00102b22:
    local_1090 = (Variant *)local_fd8;
    for (iVar91 = 0; iVar71 = CoreConstants::get_global_constant_count(), iVar91 < iVar71;
        iVar91 = iVar91 + 1) {
      sVar78 = CoreConstants::get_global_constant_value(iVar91);
      CoreConstants::get_global_constant_enum((int)(Dictionary *)&local_fb8);
      if (local_fb8 == (undefined8 *)0x0) {
        local_fc8 = (undefined8 *)0x0;
      }
      else {
        pcVar79 = (char *)local_fb8[1];
        local_fc8 = (undefined8 *)0x0;
        if (pcVar79 == (char *)0x0) {
          if (local_fb8[2] != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_fc8,(CowData *)(local_fb8 + 2));
            goto LAB_00102e21;
          }
          if (StringName::configured == '\0') goto LAB_00102e3d;
        }
        else {
          local_fa0 = strlen(pcVar79);
          local_fa8 = pcVar79;
          String::parse_latin1((StrRange *)&local_fc8);
LAB_00102e21:
          if ((StringName::configured == '\0') || (local_fb8 == (undefined8 *)0x0))
          goto LAB_00102e3d;
        }
        StringName::unref();
      }
LAB_00102e3d:
      pcVar79 = (char *)CoreConstants::get_global_constant_name(iVar91);
      local_fc0 = (undefined8 *)0x0;
      sVar80 = 0;
      if (pcVar79 != (char *)0x0) {
        sVar80 = strlen(pcVar79);
      }
      local_fa8 = pcVar79;
      local_fa0 = sVar80;
      String::parse_latin1((StrRange *)&local_fc0);
      bVar67 = (bool)CoreConstants::is_global_constant_bitfield(iVar91);
      if ((local_fc8 == (undefined8 *)0x0) || (*(uint *)(local_fc8 + -1) < 2)) {
        Dictionary::Dictionary((Dictionary *)&local_fb8);
        Variant::Variant((Variant *)local_ef8,(String *)&local_fc0);
        Variant::Variant((Variant *)local_f18,"name");
        pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
        if (pVVar76 != (Variant *)local_ef8) {
          if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar76 = 0;
          *(int *)pVVar76 = local_ef8[0];
          *(undefined8 *)(pVVar76 + 8) = local_ef0;
          *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
          local_ef8[0] = 0;
        }
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_ef8,sVar78);
        Variant::Variant((Variant *)local_f18,"value");
        pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
        if (pVVar76 != (Variant *)local_ef8) {
          if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar76 = 0;
          *(int *)pVVar76 = local_ef8[0];
          *(undefined8 *)(pVVar76 + 8) = local_ef0;
          *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
          local_ef8[0] = 0;
        }
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_ef8,bVar67);
        Variant::Variant((Variant *)local_f18,"is_bitfield");
        pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
        if (pVVar76 != (Variant *)local_ef8) {
          if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar76 = 0;
          *(int *)pVVar76 = local_ef8[0];
          *(undefined8 *)(pVVar76 + 8) = local_ef0;
          *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
          local_ef8[0] = 0;
        }
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((param_1) && (pSVar93 = *(String **)(local_10a8 + 0x80), pSVar93 != (String *)0x0)) {
          pSVar102 = pSVar93 + *(long *)(pSVar93 + -8) * 0x60;
          for (; pSVar102 != pSVar93; pSVar93 = pSVar93 + 0x60) {
            cVar68 = String::operator==(pSVar93,(String *)&local_fc0);
            if (cVar68 != '\0') {
              fix_doc_description((String *)&local_fa8);
              Variant::Variant((Variant *)local_ef8,(String *)&local_fa8);
              Variant::Variant((Variant *)local_f18,"description");
              pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
              if (pVVar76 != (Variant *)local_ef8) {
                if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
                  Variant::_clear_internal();
                }
                *(undefined4 *)pVVar76 = 0;
                *(int *)pVVar76 = local_ef8[0];
                *(undefined8 *)(pVVar76 + 8) = local_ef0;
                *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
                local_ef8[0] = 0;
              }
              if (Variant::needs_deinit[local_f18[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                Variant::_clear_internal();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_fa8);
              break;
            }
          }
        }
        Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_fb8);
        Array::push_back(local_1090);
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::~Dictionary((Dictionary *)&local_fb8);
      }
      else {
        plVar81 = (long *)HashMap<String,List<Pair<String,long>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Pair<String,long>,DefaultAllocator>>>>
                          ::operator[]((HashMap<String,List<Pair<String,long>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Pair<String,long>,DefaultAllocator>>>>
                                        *)&local_f98,(String *)&local_fc8);
        local_fb8 = (undefined8 *)0x0;
        if (local_fc0 == (undefined8 *)0x0) {
LAB_001031b2:
          local_fa8 = (char *)0x0;
        }
        else {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_fb8,(CowData *)&local_fc0);
          local_fa8 = (char *)0x0;
          if (local_fb8 == (undefined8 *)0x0) goto LAB_001031b2;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_fa8,(CowData *)&local_fb8);
        }
        pcVar79 = local_fa8;
        local_fa0 = sVar78;
        if (*plVar81 == 0) {
          pauVar85 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *plVar81 = (long)pauVar85;
          *(undefined4 *)pauVar85[1] = 0;
          *pauVar85 = (undefined1  [16])0x0;
        }
        this_00 = (CowData<char32_t> *)operator_new(0x28,DefaultAllocator::alloc);
        *(undefined8 *)this_00 = 0;
        *(undefined8 *)(this_00 + 8) = 0;
        *(undefined8 *)(this_00 + 0x20) = 0;
        *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
        if (pcVar79 != (char *)0x0) {
          CowData<char32_t>::_ref(this_00,(CowData *)&local_fa8);
        }
        plVar81 = (long *)*plVar81;
        *(size_t *)(this_00 + 8) = sVar78;
        lVar88 = plVar81[1];
        *(undefined8 *)(this_00 + 0x10) = 0;
        *(long **)(this_00 + 0x20) = plVar81;
        *(long *)(this_00 + 0x18) = lVar88;
        if (lVar88 != 0) {
          *(CowData<char32_t> **)(lVar88 + 0x10) = this_00;
        }
        plVar81[1] = (long)this_00;
        if (*plVar81 == 0) {
          *plVar81 = (long)this_00;
        }
        *(int *)(plVar81 + 2) = (int)plVar81[2] + 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_fa8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_fb8);
        uVar82 = HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
                 ::operator[]((HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
                               *)&local_f68,(String *)&local_fc8);
        *(bool *)uVar82 = bVar67;
      }
      puVar97 = local_fc0;
      if (local_fc0 != (undefined8 *)0x0) {
        LOCK();
        plVar81 = local_fc0 + -2;
        *plVar81 = *plVar81 + -1;
        UNLOCK();
        if (*plVar81 == 0) {
          local_fc0 = (undefined8 *)0x0;
          Memory::free_static(puVar97 + -2,false);
        }
      }
      puVar97 = local_fc8;
      if (local_fc8 != (undefined8 *)0x0) {
        LOCK();
        plVar81 = local_fc8 + -2;
        *plVar81 = *plVar81 + -1;
        UNLOCK();
        if (*plVar81 == 0) {
          local_fc8 = (undefined8 *)0x0;
          Memory::free_static(puVar97 + -2,false);
        }
      }
    }
    Variant::Variant((Variant *)local_ef8,(Array *)local_1090);
    Variant::Variant((Variant *)local_f18,"global_constants");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)this);
    if (pVVar76 != (Variant *)local_ef8) {
      if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar76 = 0;
      *(int *)pVVar76 = local_ef8[0];
      *(undefined8 *)(pVVar76 + 8) = local_ef0;
      *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
      local_ef8[0] = 0;
    }
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
      Variant::_clear_internal();
    }
    Array::Array((Array *)&local_fd0);
    for (puVar97 = (undefined8 *)local_f80._0_8_; puVar97 != (undefined8 *)0x0;
        puVar97 = (undefined8 *)*puVar97) {
      Dictionary::Dictionary((Dictionary *)&local_fc8);
      pSVar93 = (String *)(puVar97 + 2);
      Variant::Variant((Variant *)local_ef8,pSVar93);
      Variant::Variant((Variant *)local_f18,"name");
      pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
      if (pVVar76 != (Variant *)local_ef8) {
        if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar76 = 0;
        *(int *)pVVar76 = local_ef8[0];
        *(undefined8 *)(pVVar76 + 8) = local_ef0;
        *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
        local_ef8[0] = 0;
      }
      if (Variant::needs_deinit[local_f18[0]] == '\0') {
        cVar68 = Variant::needs_deinit[local_ef8[0]];
      }
      else {
        Variant::_clear_internal();
        cVar68 = Variant::needs_deinit[local_ef8[0]];
      }
      if (cVar68 != '\0') {
        Variant::_clear_internal();
      }
      uVar82 = HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
               ::operator[]((HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
                             *)&local_f68,pSVar93);
      Variant::Variant((Variant *)local_ef8,*(bool *)uVar82);
      Variant::Variant((Variant *)local_f18,"is_bitfield");
      pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
      if (pVVar76 != (Variant *)local_ef8) {
        if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar76 = 0;
        *(int *)pVVar76 = local_ef8[0];
        *(undefined8 *)(pVVar76 + 8) = local_ef0;
        *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
        local_ef8[0] = 0;
      }
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (((param_1) && (*(long *)(local_10a8 + 0x90) != 0)) && (*(int *)(local_10a8 + 0xb4) != 0))
      {
        uVar72 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(local_10a8 + 0xb0) * 4);
        lVar88 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(local_10a8 + 0xb0) * 8);
        uVar73 = String::hash();
        uVar83 = CONCAT44(0,uVar72);
        uVar89 = 1;
        if (uVar73 != 0) {
          uVar89 = uVar73;
        }
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)uVar89 * lVar88;
        auVar34._8_8_ = 0;
        auVar34._0_8_ = uVar83;
        lVar90 = SUB168(auVar6 * auVar34,8);
        lVar96 = *(long *)(local_10a8 + 0x98);
        iVar91 = SUB164(auVar6 * auVar34,8);
        uVar73 = *(uint *)(lVar96 + lVar90 * 4);
        if (uVar73 != 0) {
          uVar94 = 0;
          do {
            if (uVar73 == uVar89) {
              cVar68 = String::operator==((String *)
                                          (*(long *)(*(long *)(local_10a8 + 0x90) + lVar90 * 8) +
                                          0x10),pSVar93);
              if (cVar68 != '\0') {
                fix_doc_description((String *)&local_fa8);
                Variant::Variant((Variant *)local_ef8,(String *)&local_fa8);
                Variant::Variant((Variant *)local_f18,"description");
                pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
                if (pVVar76 != (Variant *)local_ef8) {
                  if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
                    Variant::_clear_internal();
                  }
                  *(undefined4 *)pVVar76 = 0;
                  *(int *)pVVar76 = local_ef8[0];
                  *(undefined8 *)(pVVar76 + 8) = local_ef0;
                  *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
                  local_ef8[0] = 0;
                }
                if (Variant::needs_deinit[local_f18[0]] == '\0') {
                  cVar68 = Variant::needs_deinit[local_ef8[0]];
                }
                else {
                  Variant::_clear_internal();
                  cVar68 = Variant::needs_deinit[local_ef8[0]];
                }
                if (cVar68 != '\0') {
                  Variant::_clear_internal();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_fa8);
                break;
              }
              lVar96 = *(long *)(local_10a8 + 0x98);
            }
            uVar94 = uVar94 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar91 + 1) * lVar88;
            auVar35._8_8_ = 0;
            auVar35._0_8_ = uVar83;
            lVar90 = SUB168(auVar7 * auVar35,8);
            uVar73 = *(uint *)(lVar96 + lVar90 * 4);
            iVar91 = SUB164(auVar7 * auVar35,8);
            if ((uVar73 == 0) ||
               (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar73 * lVar88, auVar36._8_8_ = 0,
               auVar36._0_8_ = uVar83, auVar9._8_8_ = 0,
               auVar9._0_8_ = (ulong)((uVar72 + iVar91) - SUB164(auVar8 * auVar36,8)) * lVar88,
               auVar37._8_8_ = 0, auVar37._0_8_ = uVar83, SUB164(auVar9 * auVar37,8) < uVar94))
            break;
          } while( true );
        }
      }
      Array::Array((Array *)&local_fc0);
      if ((undefined8 *)puVar97[3] != (undefined8 *)0x0) {
        for (pSVar93 = *(String **)puVar97[3]; pSVar93 != (String *)0x0;
            pSVar93 = *(String **)(pSVar93 + 0x10)) {
          Dictionary::Dictionary((Dictionary *)&local_fb8);
          Variant::Variant((Variant *)local_ef8,pSVar93);
          Variant::Variant((Variant *)local_f18,"name");
          pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
          if (pVVar76 != (Variant *)local_ef8) {
            if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar76 = 0;
            *(int *)pVVar76 = local_ef8[0];
            *(undefined8 *)(pVVar76 + 8) = local_ef0;
            *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
            local_ef8[0] = 0;
          }
          if (Variant::needs_deinit[local_f18[0]] == '\0') {
            cVar68 = Variant::needs_deinit[local_ef8[0]];
          }
          else {
            Variant::_clear_internal();
            cVar68 = Variant::needs_deinit[local_ef8[0]];
          }
          if (cVar68 != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_ef8,*(long *)(pSVar93 + 8));
          Variant::Variant((Variant *)local_f18,"value");
          pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
          if (pVVar76 != (Variant *)local_ef8) {
            if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar76 = 0;
            *(int *)pVVar76 = local_ef8[0];
            *(undefined8 *)(pVVar76 + 8) = local_ef0;
            *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
            local_ef8[0] = 0;
          }
          if (Variant::needs_deinit[local_f18[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((param_1) && (pSVar102 = *(String **)(local_10a8 + 0x80), pSVar102 != (String *)0x0))
          {
            pSVar98 = pSVar102 + *(long *)(pSVar102 + -8) * 0x60;
            for (; pSVar98 != pSVar102; pSVar102 = pSVar102 + 0x60) {
              cVar68 = String::operator==(pSVar102,pSVar93);
              if (cVar68 != '\0') {
                fix_doc_description((String *)&local_fa8);
                Variant::Variant((Variant *)local_ef8,(String *)&local_fa8);
                Variant::Variant((Variant *)local_f18,"description");
                pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
                if (pVVar76 != (Variant *)local_ef8) {
                  if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
                    Variant::_clear_internal();
                  }
                  *(undefined4 *)pVVar76 = 0;
                  *(int *)pVVar76 = local_ef8[0];
                  *(undefined8 *)(pVVar76 + 8) = local_ef0;
                  *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
                  local_ef8[0] = 0;
                }
                if (Variant::needs_deinit[local_f18[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                  Variant::_clear_internal();
                }
                pcVar79 = local_fa8;
                if (local_fa8 != (char *)0x0) {
                  LOCK();
                  plVar81 = (long *)(local_fa8 + -0x10);
                  *plVar81 = *plVar81 + -1;
                  UNLOCK();
                  if (*plVar81 == 0) {
                    local_fa8 = (char *)0x0;
                    Memory::free_static(pcVar79 + -0x10,false);
                  }
                }
                break;
              }
            }
          }
          Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_fb8);
          Array::push_back((Variant *)&local_fc0);
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          Dictionary::~Dictionary((Dictionary *)&local_fb8);
        }
      }
      Variant::Variant((Variant *)local_ef8,(Array *)&local_fc0);
      Variant::Variant((Variant *)local_f18,"values");
      pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
      if (pVVar76 != (Variant *)local_ef8) {
        if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar76 = 0;
        *(int *)pVVar76 = local_ef8[0];
        *(undefined8 *)(pVVar76 + 8) = local_ef0;
        *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
        local_ef8[0] = 0;
      }
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_fc8);
      Array::push_back((Variant *)&local_fd0);
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      Array::~Array((Array *)&local_fc0);
      Dictionary::~Dictionary((Dictionary *)&local_fc8);
    }
    Variant::Variant((Variant *)local_ef8,(Array *)&local_fd0);
    Variant::Variant((Variant *)local_f18,"global_enums");
    pVVar76 = (Variant *)Dictionary::operator[]((Variant *)this);
    if (pVVar76 != (Variant *)local_ef8) {
      if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar76 = 0;
      *(int *)pVVar76 = local_ef8[0];
      *(undefined8 *)(pVVar76 + 8) = local_ef0;
      *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
      local_ef8[0] = 0;
    }
    if (Variant::needs_deinit[local_f18[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_ef8[0]] != '\0') {
      Variant::_clear_internal();
    }
    Array::~Array((Array *)&local_fd0);
    uVar82 = local_f60._0_8_;
    if ((undefined8 *)local_f60._0_8_ != (undefined8 *)0x0) {
      uVar66 = local_f60._8_8_;
      if ((local_f40._4_4_ != 0) &&
         (*(uint *)(hash_table_size_primes + (local_f40 & 0xffffffff) * 4) != 0)) {
        piVar4 = (int *)(local_f60._8_8_ +
                        (ulong)*(uint *)(hash_table_size_primes + (local_f40 & 0xffffffff) * 4) * 4)
        ;
        puVar97 = (undefined8 *)local_f60._0_8_;
        piVar100 = (int *)local_f60._8_8_;
        do {
          if (*piVar100 != 0) {
            pvVar2 = (void *)*puVar97;
            *piVar100 = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x10));
            Memory::free_static(pvVar2,false);
            *puVar97 = 0;
          }
          piVar100 = piVar100 + 1;
          puVar97 = puVar97 + 1;
        } while (piVar4 != piVar100);
      }
      Memory::free_static((void *)uVar82,false);
      Memory::free_static((void *)uVar66,false);
    }
    uVar82 = local_f90._0_8_;
    if ((undefined8 *)local_f90._0_8_ != (undefined8 *)0x0) {
      uVar66 = local_f90._8_8_;
      if ((local_f70._4_4_ != 0) &&
         (*(uint *)(hash_table_size_primes + (local_f70 & 0xffffffff) * 4) != 0)) {
        piVar4 = (int *)(local_f90._8_8_ +
                        (ulong)*(uint *)(hash_table_size_primes + (local_f70 & 0xffffffff) * 4) * 4)
        ;
        puVar97 = (undefined8 *)local_f90._0_8_;
        piVar100 = (int *)local_f90._8_8_;
        do {
          if (*piVar100 != 0) {
            pvVar2 = (void *)*puVar97;
            *piVar100 = 0;
            List<Pair<String,long>,DefaultAllocator>::~List
                      ((List<Pair<String,long>,DefaultAllocator> *)((long)pvVar2 + 0x18));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x10));
            Memory::free_static(pvVar2,false);
            *puVar97 = 0;
          }
          piVar100 = piVar100 + 1;
          puVar97 = puVar97 + 1;
        } while (piVar4 != piVar100);
      }
      Memory::free_static((void *)uVar82,false);
      Memory::free_static((void *)uVar66,false);
    }
    Array::~Array((Array *)local_1090);
    Array::Array((Array *)local_1090);
    local_fd0 = (long *)0x0;
    Variant::get_utility_function_list((List *)&local_fd0);
    local_1050 = 0;
    if (!param_1) {
LAB_00103b83:
      if (local_fd0 != (long *)0x0) {
        for (pSVar3 = (StringName *)*local_fd0; pSVar3 != (StringName *)0x0;
            pSVar3 = *(StringName **)(pSVar3 + 8)) {
          Dictionary::Dictionary((Dictionary *)&local_fc8);
          lVar88 = *(long *)pSVar3;
          if (lVar88 == 0) {
            local_f98 = (char *)0x0;
          }
          else {
            pcVar79 = *(char **)(lVar88 + 8);
            local_f98 = (char *)0x0;
            if (pcVar79 == (char *)0x0) {
              if (*(long *)(lVar88 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_f98,(CowData *)(lVar88 + 0x10));
              }
            }
            else {
              sVar78 = strlen(pcVar79);
              local_f60._0_8_ = sVar78;
              local_f68 = pcVar79;
              String::parse_latin1((StrRange *)&local_f98);
            }
          }
          Variant::Variant((Variant *)local_ef8,(String *)&local_f98);
          Variant::Variant((Variant *)local_f18,"name");
          pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
          if (pVVar76 != (Variant *)local_ef8) {
            if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar76 = 0;
            *(int *)pVVar76 = local_ef8[0];
            *(undefined8 *)(pVVar76 + 8) = local_ef0;
            *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
            local_ef8[0] = 0;
          }
          if (Variant::needs_deinit[local_f18[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          pcVar79 = local_f98;
          if (local_f98 != (char *)0x0) {
            LOCK();
            plVar81 = (long *)(local_f98 + -0x10);
            *plVar81 = *plVar81 + -1;
            UNLOCK();
            if (*plVar81 == 0) {
              local_f98 = (char *)0x0;
              Memory::free_static(pcVar79 + -0x10,false);
            }
          }
          cVar68 = Variant::has_utility_function_return_value(pSVar3);
          if (cVar68 == '\0') {
            iVar91 = Variant::get_utility_function_type(pSVar3);
            if (iVar91 == 1) goto LAB_00104c9a;
LAB_00103d06:
            if (iVar91 == 2) {
              Variant::Variant((Variant *)local_ef8,"general");
              Variant::Variant((Variant *)local_f18,"category");
              pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
              if (pVVar76 != (Variant *)local_ef8) {
                if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
                  Variant::_clear_internal();
                }
                *(undefined4 *)pVVar76 = 0;
                *(int *)pVVar76 = local_ef8[0];
                *(undefined8 *)(pVVar76 + 8) = local_ef0;
                *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
                local_ef8[0] = 0;
              }
              goto LAB_00103d7d;
            }
            if (iVar91 == 0) {
              Variant::Variant((Variant *)local_ef8,"math");
              Variant::Variant((Variant *)local_f18,"category");
              pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
              if (pVVar76 != (Variant *)local_ef8) {
                if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
                  Variant::_clear_internal();
                }
                *(undefined4 *)pVVar76 = 0;
                *(int *)pVVar76 = local_ef8[0];
                *(undefined8 *)(pVVar76 + 8) = local_ef0;
                *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
                local_ef8[0] = 0;
              }
              goto LAB_00103d7d;
            }
          }
          else {
            iVar91 = Variant::get_utility_function_return_type(pSVar3);
            if (iVar91 == 0) {
              local_f98 = (char *)0x0;
              local_f68 = "Variant";
              local_f60._0_8_ = 7;
              String::parse_latin1((StrRange *)&local_f98);
            }
            else {
              Variant::get_type_name((String *)&local_f98,iVar91);
            }
            Variant::Variant((Variant *)local_ef8,(String *)&local_f98);
            Variant::Variant((Variant *)local_f18,"return_type");
            pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
            if (pVVar76 != (Variant *)local_ef8) {
              if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
                Variant::_clear_internal();
              }
              *(undefined4 *)pVVar76 = 0;
              *(int *)pVVar76 = local_ef8[0];
              *(undefined8 *)(pVVar76 + 8) = local_ef0;
              *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
              local_ef8[0] = 0;
            }
            if (Variant::needs_deinit[local_f18[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_ef8[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f98);
            iVar91 = Variant::get_utility_function_type(pSVar3);
            if (iVar91 != 1) goto LAB_00103d06;
LAB_00104c9a:
            Variant::Variant((Variant *)local_ef8,"random");
            Variant::Variant((Variant *)local_f18,"category");
            pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
            if (pVVar76 == (Variant *)local_ef8) {
LAB_00103d7d:
              if (Variant::needs_deinit[local_f18[0]] != '\0') goto LAB_00104d18;
LAB_00103d91:
              cVar68 = Variant::needs_deinit[local_ef8[0]];
            }
            else {
              if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
                Variant::_clear_internal();
              }
              *(undefined4 *)pVVar76 = 0;
              *(int *)pVVar76 = local_ef8[0];
              *(undefined8 *)(pVVar76 + 8) = local_ef0;
              *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
              local_ef8[0] = 0;
              if (Variant::needs_deinit[local_f18[0]] == '\0') goto LAB_00103d91;
LAB_00104d18:
              Variant::_clear_internal();
              cVar68 = Variant::needs_deinit[local_ef8[0]];
            }
            if (cVar68 != '\0') {
              Variant::_clear_internal();
            }
          }
          cVar68 = Variant::is_utility_function_vararg(pSVar3);
          bVar67 = (bool)Variant::is_utility_function_vararg(pSVar3);
          Variant::Variant((Variant *)local_ef8,bVar67);
          Variant::Variant((Variant *)local_f18,"is_vararg");
          pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
          if (pVVar76 != (Variant *)local_ef8) {
            if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar76 = 0;
            *(int *)pVVar76 = local_ef8[0];
            *(undefined8 *)(pVVar76 + 8) = local_ef0;
            *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
            local_ef8[0] = 0;
          }
          if (Variant::needs_deinit[local_f18[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          uVar72 = Variant::get_utility_function_hash(pSVar3);
          Variant::Variant((Variant *)local_ef8,uVar72);
          Variant::Variant((Variant *)local_f18,"hash");
          pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
          if (pVVar76 != (Variant *)local_ef8) {
            if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar76 = 0;
            *(int *)pVVar76 = local_ef8[0];
            *(undefined8 *)(pVVar76 + 8) = local_ef0;
            *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
            local_ef8[0] = 0;
          }
          if (Variant::needs_deinit[local_f18[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          Array::Array((Array *)&local_fc0);
          iVar91 = Variant::get_utility_function_argument_count(pSVar3);
          lVar88 = 1;
          if (0 < iVar91) {
            do {
              Dictionary::Dictionary((Dictionary *)&local_fb8);
              if (cVar68 == '\0') {
                Variant::get_utility_function_argument_name((StringName *)&local_fa8,(int)pSVar3);
              }
              else {
                itos((long)&local_f68);
                operator+((char *)&local_fa8,(String *)&_LC126);
                pcVar79 = local_f68;
                if (local_f68 != (char *)0x0) {
                  LOCK();
                  plVar81 = (long *)(local_f68 + -0x10);
                  *plVar81 = *plVar81 + -1;
                  UNLOCK();
                  if (*plVar81 == 0) {
                    local_f68 = (char *)0x0;
                    Memory::free_static(pcVar79 + -0x10,false);
                  }
                }
              }
              Variant::Variant((Variant *)local_ef8,(String *)&local_fa8);
              Variant::Variant((Variant *)local_f18,"name");
              pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
              if (pVVar76 != (Variant *)local_ef8) {
                if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
                  Variant::_clear_internal();
                }
                *(undefined4 *)pVVar76 = 0;
                *(int *)pVVar76 = local_ef8[0];
                *(undefined8 *)(pVVar76 + 8) = local_ef0;
                *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
                local_ef8[0] = 0;
              }
              if (Variant::needs_deinit[local_f18[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                Variant::_clear_internal();
              }
              iVar71 = Variant::get_utility_function_argument_type(pSVar3,(int)lVar88 + -1);
              if (iVar71 == 0) {
                local_f98 = (char *)0x0;
                local_f68 = "Variant";
                local_f60._0_8_ = 7;
                String::parse_latin1((StrRange *)&local_f98);
              }
              else {
                Variant::get_type_name((String *)&local_f98,iVar71);
              }
              Variant::Variant((Variant *)local_ef8,(String *)&local_f98);
              Variant::Variant((Variant *)local_f18,"type");
              pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fb8);
              if (pVVar76 != (Variant *)local_ef8) {
                if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
                  Variant::_clear_internal();
                }
                *(undefined4 *)pVVar76 = 0;
                *(int *)pVVar76 = local_ef8[0];
                *(undefined8 *)(pVVar76 + 8) = local_ef0;
                *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
                local_ef8[0] = 0;
              }
              if (Variant::needs_deinit[local_f18[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                Variant::_clear_internal();
              }
              pcVar79 = local_f98;
              if (local_f98 != (char *)0x0) {
                LOCK();
                plVar81 = (long *)(local_f98 + -0x10);
                *plVar81 = *plVar81 + -1;
                UNLOCK();
                if (*plVar81 == 0) {
                  local_f98 = (char *)0x0;
                  Memory::free_static(pcVar79 + -0x10,false);
                }
              }
              Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_fb8);
              Array::push_back((Variant *)&local_fc0);
              if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                Variant::_clear_internal();
              }
              pcVar79 = local_fa8;
              if (local_fa8 != (char *)0x0) {
                LOCK();
                plVar81 = (long *)(local_fa8 + -0x10);
                *plVar81 = *plVar81 + -1;
                UNLOCK();
                if (*plVar81 == 0) {
                  local_fa8 = (char *)0x0;
                  Memory::free_static(pcVar79 + -0x10,false);
                }
              }
              Dictionary::~Dictionary((Dictionary *)&local_fb8);
              bVar67 = iVar91 != lVar88;
              lVar88 = lVar88 + 1;
            } while (bVar67);
          }
          iVar91 = Array::size();
          if (iVar91 != 0) {
            Variant::Variant((Variant *)local_ef8,(Array *)&local_fc0);
            Variant::Variant((Variant *)local_f18,"arguments");
            pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
            if (pVVar76 != (Variant *)local_ef8) {
              if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
                Variant::_clear_internal();
              }
              *(undefined4 *)pVVar76 = 0;
              *(int *)pVVar76 = local_ef8[0];
              *(undefined8 *)(pVVar76 + 8) = local_ef0;
              *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
              local_ef8[0] = 0;
            }
            if (Variant::needs_deinit[local_f18[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_ef8[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          if ((param_1) && (pSVar93 = *(String **)(local_1050 + 0x50), pSVar93 != (String *)0x0)) {
            pSVar102 = pSVar93 + *(long *)(pSVar93 + -8) * 0x78;
            for (; pSVar102 != pSVar93; pSVar93 = pSVar93 + 0x78) {
              cVar68 = operator==(pSVar93,pSVar3);
              if (cVar68 != '\0') {
                fix_doc_description((String *)&local_f68);
                Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
                Variant::Variant((Variant *)local_f18,"description");
                pVVar76 = (Variant *)Dictionary::operator[]((Variant *)&local_fc8);
                if (pVVar76 != (Variant *)local_ef8) {
                  if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
                    Variant::_clear_internal();
                  }
                  *(undefined4 *)pVVar76 = 0;
                  *(int *)pVVar76 = local_ef8[0];
                  *(undefined8 *)(pVVar76 + 8) = local_ef0;
                  *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
                  local_ef8[0] = 0;
                }
                if (Variant::needs_deinit[local_f18[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[local_ef8[0]] != '\0') {
                  Variant::_clear_internal();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
                break;
              }
            }
          }
          Variant::Variant((Variant *)local_ef8,(Dictionary *)&local_fc8);
          Array::push_back(local_1090);
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          Array::~Array((Array *)&local_fc0);
          Dictionary::~Dictionary((Dictionary *)&local_fc8);
        }
      }
      Variant::Variant((Variant *)local_ef8,(Array *)local_1090);
      Variant::Variant((Variant *)local_f18,"utility_functions");
      pVVar76 = (Variant *)Dictionary::operator[]((Variant *)this);
      if (pVVar76 != (Variant *)local_ef8) {
        if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar76 = 0;
        *(int *)pVVar76 = local_ef8[0];
        *(undefined8 *)(pVVar76 + 8) = local_ef0;
        *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
        local_ef8[0] = 0;
      }
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_fd0);
      Array::~Array((Array *)local_1090);
      Array::Array((Array *)&local_fe8);
      iVar91 = 0;
LAB_0010432d:
      iVar71 = 0x19;
      if (iVar91 != 0x18) {
        iVar71 = iVar91;
      }
      Dictionary::Dictionary(local_fe0);
      Variant::get_type_name((Dictionary *)&local_f68,iVar71);
      Variant::Variant((Variant *)local_ef8,(String *)&local_f68);
      Variant::Variant((Variant *)local_f18,"name");
      pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_fe0);
      if (pVVar76 != (Variant *)local_ef8) {
        if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar76 = 0;
        *(int *)pVVar76 = local_ef8[0];
        *(undefined8 *)(pVVar76 + 8) = local_ef0;
        *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
        local_ef8[0] = 0;
      }
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
      cVar68 = Variant::has_indexing(iVar71);
      if (cVar68 != '\0') {
        iVar91 = Variant::get_indexed_element_type(iVar71);
        if (iVar91 == 0) {
          local_f98 = (char *)0x0;
          local_f68 = "Variant";
          local_f60._0_8_ = 7;
          String::parse_latin1((StrRange *)&local_f98);
        }
        else {
          Variant::get_type_name((String *)&local_f98,iVar91);
        }
        Variant::Variant((Variant *)local_ef8,(String *)&local_f98);
        Variant::Variant((Variant *)local_f18,"indexing_return_type");
        pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_fe0);
        Variant::operator=(pVVar76,(Variant *)local_ef8);
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f98);
      }
      bVar67 = (bool)Variant::is_keyed(iVar71);
      Variant::Variant((Variant *)local_ef8,bVar67);
      Variant::Variant((Variant *)local_f18,"is_keyed");
      pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_fe0);
      if (pVVar76 != (Variant *)local_ef8) {
        if (Variant::needs_deinit[*(int *)pVVar76] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar76 = 0;
        *(int *)pVVar76 = local_ef8[0];
        *(undefined8 *)(pVVar76 + 8) = local_ef0;
        *(undefined8 *)(pVVar76 + 0x10) = uStack_ee8;
        local_ef8[0] = 0;
      }
      if (Variant::needs_deinit[local_f18[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_ef8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (param_1) {
        Variant::Variant((Variant *)local_ef8,"Nil");
        Variant::Variant((Variant *)local_f18,"name");
        pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_fe0);
        cVar68 = Variant::operator!=(pVVar76,(Variant *)local_ef8);
        if (Variant::needs_deinit[local_f18[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_ef8[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (cVar68 != '\0') {
          lVar88 = EditorHelp::get_doc_data();
          Variant::Variant((Variant *)local_ef8,"name");
          Dictionary::operator[]((Variant *)local_fe0);
          Variant::operator_cast_to_String((Variant *)&local_f68);
          if ((*(long *)(lVar88 + 0x10) != 0) && (*(int *)(lVar88 + 0x34) != 0)) {
            uVar72 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar88 + 0x30) * 4);
            lVar96 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar88 + 0x30) * 8);
            uVar73 = String::hash();
            uVar83 = CONCAT44(0,uVar72);
            lVar90 = *(long *)(lVar88 + 0x18);
            uVar89 = 1;
            if (uVar73 != 0) {
              uVar89 = uVar73;
            }
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)uVar89 * lVar96;
            auVar42._8_8_ = 0;
            auVar42._0_8_ = uVar83;
            lVar99 = SUB168(auVar14 * auVar42,8);
            uVar73 = *(uint *)(lVar90 + lVar99 * 4);
            if (uVar73 != 0) {
              uVar92 = 0;
              uVar94 = SUB164(auVar14 * auVar42,8);
              do {
                if (uVar73 == uVar89) {
                  cVar68 = String::operator==((String *)
                                              (*(long *)(*(long *)(lVar88 + 0x10) + lVar99 * 8) +
                                              0x10),(String *)&local_f68);
                  if (cVar68 != '\0') goto LAB_001079d7;
                  lVar90 = *(long *)(lVar88 + 0x18);
                }
                uVar92 = uVar92 + 1;
                auVar15._8_8_ = 0;
                auVar15._0_8_ = (ulong)(uVar94 + 1) * lVar96;
                auVar43._8_8_ = 0;
                auVar43._0_8_ = uVar83;
                lVar99 = SUB168(auVar15 * auVar43,8);
                uVar73 = *(uint *)(lVar90 + lVar99 * 4);
                uVar94 = SUB164(auVar15 * auVar43,8);
                if ((uVar73 == 0) ||
                   (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar73 * lVar96, auVar44._8_8_ = 0,
                   auVar44._0_8_ = uVar83, auVar17._8_8_ = 0,
                   auVar17._0_8_ = (ulong)((uVar72 + uVar94) - SUB164(auVar16 * auVar44,8)) * lVar96
                   , auVar45._8_8_ = 0, auVar45._0_8_ = uVar83, SUB164(auVar17 * auVar45,8) < uVar92
                   )) break;
              } while( true );
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_f18,"name");
          pVVar76 = (Variant *)Dictionary::operator[]((Variant *)local_fe0);
          Variant::Variant((Variant *)local_ef8,pVVar76);
          local_f98 = (char *)0x0;
          String::parse_latin1((String *)&local_f98,"Could not find \'%s\' in DocData.");
          vformat<Variant>((Dictionary *)&local_f68,(String *)&local_f98,(Variant *)local_ef8);
          _err_print_error("generate_extension_api","core/extension/extension_api_dump.cpp",0x27f,
                           "FATAL: Condition \"!builtin_doc\" is true.",(Dictionary *)&local_f68,0,0
                          );
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f98);
          if (Variant::needs_deinit[local_ef8[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_f18[0]] != '\0') {
            Variant::_clear_internal();
          }
          goto LAB_00106c2f;
        }
      }
      local_10a0 = 0;
      goto LAB_001044ba;
    }
    lVar88 = EditorHelp::get_doc_data();
    local_f98 = (char *)0x0;
    local_f60._0_8_ = 0xc;
    local_f68 = "@GlobalScope";
    String::parse_latin1((StrRange *)&local_f98);
    if ((*(long *)(lVar88 + 0x10) != 0) && (*(int *)(lVar88 + 0x34) != 0)) {
      uVar72 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar88 + 0x30) * 4);
      lVar96 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar88 + 0x30) * 8);
      uVar73 = String::hash();
      uVar83 = CONCAT44(0,uVar72);
      lVar90 = *(long *)(lVar88 + 0x18);
      uVar89 = 1;
      if (uVar73 != 0) {
        uVar89 = uVar73;
      }
      auVar18._8_8_ = 0;
      auVar18._0_8_ = (ulong)uVar89 * lVar96;
      auVar46._8_8_ = 0;
      auVar46._0_8_ = uVar83;
      lVar99 = SUB168(auVar18 * auVar46,8);
      uVar73 = *(uint *)(lVar90 + lVar99 * 4);
      uVar94 = SUB164(auVar18 * auVar46,8);
      if (uVar73 != 0) {
        uVar92 = 0;
        do {
          if (uVar73 == uVar89) {
            cVar68 = String::operator==((String *)
                                        (*(long *)(*(long *)(lVar88 + 0x10) + lVar99 * 8) + 0x10),
                                        (String *)&local_f98);
            if (cVar68 != '\0') {
              local_1050 = *(long *)(*(long *)(lVar88 + 0x10) + (ulong)uVar94 * 8) + 0x18;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f98);
              goto LAB_00103b83;
            }
            lVar90 = *(long *)(lVar88 + 0x18);
          }
          uVar92 = uVar92 + 1;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = (ulong)(uVar94 + 1) * lVar96;
          auVar47._8_8_ = 0;
          auVar47._0_8_ = uVar83;
          lVar99 = SUB168(auVar19 * auVar47,8);
          uVar73 = *(uint *)(lVar90 + lVar99 * 4);
          uVar94 = SUB164(auVar19 * auVar47,8);
        } while ((uVar73 != 0) &&
                (auVar20._8_8_ = 0, auVar20._0_8_ = (ulong)uVar73 * lVar96, auVar48._8_8_ = 0,
                auVar48._0_8_ = uVar83, auVar21._8_8_ = 0,
                auVar21._0_8_ = (ulong)((uVar72 + uVar94) - SUB164(auVar20 * auVar48,8)) * lVar96,
                auVar49._8_8_ = 0, auVar49._0_8_ = uVar83, uVar92 <= SUB164(auVar21 * auVar49,8)));
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f98);
    uVar82 = 0x232;
  }
  _err_print_error("generate_extension_api","core/extension/extension_api_dump.cpp",uVar82,
                   "FATAL: Condition \"!global_scope_doc\" is true.",
                   "Could not find \'@GlobalScope\' in DocData.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar62 = (code *)invalidInstructionException();
  (*pcVar62)();
LAB_00106c13:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar88,lVar96,"p_index","size()","",false,true)
  ;
LAB_00106c2f:
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar62 = (code *)invalidInstructionException();
  (*pcVar62)();
}



/* GDExtensionAPIDump::generate_extension_json_file(String const&, bool) */

void GDExtensionAPIDump::generate_extension_json_file(String *param_1,bool param_2)

{
  long *plVar1;
  Object *pOVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  long in_FS_OFFSET;
  GDExtensionAPIDump local_98 [8];
  Object *local_90;
  long local_88;
  Object *local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  generate_extension_api(local_98,param_2);
  local_90 = (Object *)0x0;
  Ref<JSON>::instantiate<>((Ref<JSON> *)&local_90);
  local_68 = "\n";
  local_70 = 0;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "\t";
  local_78 = 0;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_78);
  Variant::Variant((Variant *)local_58,(Dictionary *)local_98);
  JSON::stringify((Variant *)&local_68,(String *)local_58,SUB81((StrRange *)&local_78,0),false);
  String::operator+((String *)&local_88,(String *)&local_68);
  pcVar4 = local_68;
  if (local_68 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (char *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
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
  FileAccess::open((String *)&local_80,(int)param_1,(Error *)0x2);
  if (local_80 == (Object *)0x0) {
    local_70 = 0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)param_1);
    }
    local_78 = 0;
    local_68 = "Cannot open file \'%s\' for writing.";
    local_60 = 0x22;
    String::parse_latin1((StrRange *)&local_78);
    vformat<String>((Variant *)&local_68,(StrRange *)&local_78,(StrRange *)&local_70);
    _err_print_error("generate_extension_json_file","core/extension/extension_api_dump.cpp",0x52a,
                     "Condition \"fa.is_null()\" is true.",(Variant *)&local_68,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (((local_80 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_80), cVar5 != '\0')) {
      (**(code **)(*(long *)local_80 + 0x140))(local_80);
      Memory::free_static(local_80,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    pOVar2 = local_90;
  }
  else {
    (**(code **)(*(long *)local_80 + 0x2a8))();
    if (((local_80 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_80), cVar5 != '\0')) {
      (**(code **)(*(long *)local_80 + 0x140))(local_80);
      Memory::free_static(local_80,false);
    }
    lVar3 = local_88;
    pOVar2 = local_90;
    if (local_88 != 0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        pOVar2 = local_90;
      }
    }
  }
  local_90 = pOVar2;
  if (((pOVar2 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
     (cVar5 = predelete_handler(pOVar2), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  Dictionary::~Dictionary((Dictionary *)local_98);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* compare_dict_array(Dictionary const&, Dictionary const&, String const&, String const&,
   Vector<String> const&, bool, String const&, bool, bool) */

uint compare_dict_array(Dictionary *param_1,Dictionary *param_2,String *param_3,String *param_4,
                       Vector *param_5,bool param_6,String *param_7,bool param_8,bool param_9)

{
  long *plVar1;
  CowData *pCVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte bVar12;
  undefined8 uVar13;
  char cVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  char cVar18;
  char cVar19;
  bool bVar20;
  char cVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  Dictionary *pDVar25;
  ulong uVar26;
  ulong uVar27;
  Variant *pVVar28;
  uint uVar29;
  long lVar30;
  undefined8 *puVar31;
  char *pcVar32;
  String *this;
  int iVar33;
  long lVar34;
  uint uVar35;
  long in_FS_OFFSET;
  void *local_1e8;
  CowData<char32_t> *local_1a8;
  long local_160;
  Variant local_158 [8];
  Variant local_150 [8];
  Dictionary local_148 [8];
  char *local_140;
  Dictionary local_138 [8];
  char *local_130;
  undefined8 local_128;
  String local_120 [8];
  undefined8 local_118;
  undefined8 local_110;
  char *local_108;
  long local_100;
  Variant *local_f8;
  Variant *local_f0;
  Variant *local_e8 [2];
  char *local_d8;
  CowData<char32_t> *local_d0;
  char *local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  int local_78 [8];
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::operator+((String *)&local_160,param_7);
  Variant::Variant((Variant *)local_58,param_3);
  cVar14 = Dictionary::has((Variant *)param_1);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  uVar22 = 1;
  if (cVar14 == '\0') goto LAB_0010d839;
  Variant::Variant((Variant *)local_58,param_3);
  bVar15 = Dictionary::has((Variant *)param_2);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (bVar15 == 0) {
    local_d8 = (char *)0x0;
    if (*(long *)param_3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)param_3);
    }
    uVar22 = 0;
    local_e8[0] = (Variant *)0x0;
    local_c0._0_8_ = 0x1c;
    local_c8 = "New API lacks base array: %s";
    String::parse_latin1((StrRange *)local_e8);
    vformat<String>((CowData<char32_t> *)&local_c8,(StrRange *)local_e8,
                    (CowData<char32_t> *)&local_d8);
    _err_print_error("compare_dict_array","core/extension/extension_api_dump.cpp",0x562,
                     "Condition \"!p_new_api.has(p_base_array)\" is true. Returning: false",
                     (CowData<char32_t> *)&local_c8,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    goto LAB_0010d839;
  }
  Variant::Variant((Variant *)local_58,param_3);
  Dictionary::operator[]((Variant *)param_2);
  Variant::operator_cast_to_Array(local_158);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_a0 = 2;
  local_c0 = (undefined1  [16])0x0;
  local_b0 = (undefined1  [16])0x0;
  Array::begin();
  Array::end();
  if (local_f8 == local_e8[0]) {
    local_1e8 = (void *)0x0;
  }
  else {
    do {
      if (local_f0 != (Variant *)0x0) {
        Variant::operator=(local_f0,local_f8);
      }
      Variant::operator_cast_to_Dictionary((Variant *)&local_118);
      Variant::Variant((Variant *)local_58,param_4);
      uVar22 = Dictionary::has((Variant *)&local_118);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
        uVar22 = uVar22 & 0xff;
      }
      if ((char)uVar22 == '\0') {
        local_100 = 0;
        if (*(long *)param_4 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)param_4);
        }
        local_108 = (char *)0x0;
        if (local_160 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_160);
        }
        local_110 = 0;
        local_d8 = 
        "Validate extension JSON: Element of base_array \'%s\' is missing field \'%s\'. This is a bug."
        ;
        local_d0 = (CowData<char32_t> *)0x59;
        String::parse_latin1((StrRange *)&local_110);
        vformat<String,String>
                  ((String *)&local_d8,(StrRange *)&local_110,(Variant *)&local_108,
                   (CowData<char32_t> *)&local_100);
        _err_print_error("compare_dict_array","core/extension/extension_api_dump.cpp",0x568,
                         "Condition \"!elem.has(p_name_field)\" is true. Returning: false",
                         (String *)&local_d8,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
        Dictionary::~Dictionary((Dictionary *)&local_118);
        local_1e8 = (void *)local_c0._0_8_;
        goto LAB_0010dd7e;
      }
      Variant::Variant((Variant *)local_58,param_4);
      Dictionary::operator[]((Variant *)&local_118);
      Variant::operator_cast_to_String((Variant *)&local_108);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      cVar14 = String::is_valid_float();
      if (cVar14 != '\0') {
        String::trim_suffix((char *)&local_d8);
        pcVar32 = local_d8;
        if (local_108 == local_d8) {
          if (local_d8 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_d8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_d8 = (char *)0x0;
              Memory::free_static(pcVar32 + -0x10,false);
            }
          }
        }
        else {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
          local_108 = local_d8;
        }
      }
      if (param_8) {
        Variant::Variant((Variant *)local_58,"right_type");
        cVar14 = Dictionary::has((Variant *)&local_118);
        if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (cVar14 != '\0') {
          Variant::Variant((Variant *)local_58,"right_type");
          Dictionary::operator[]((Variant *)&local_118);
          Variant::operator_cast_to_String((Variant *)&local_100);
          operator+((char *)&local_d8,(String *)&_LC180);
          String::operator+=((String *)&local_108,(String *)&local_d8);
          pcVar32 = local_d8;
          if (local_d8 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_d8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_d8 = (char *)0x0;
              Memory::free_static(pcVar32 + -0x10,false);
            }
          }
          lVar34 = local_100;
          if (local_100 != 0) {
            LOCK();
            plVar1 = (long *)(local_100 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_100 = 0;
              Memory::free_static((void *)(lVar34 + -0x10),false);
            }
          }
          if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
      }
      HashMap<String,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Dictionary>>>
      ::insert((String *)&local_d8,(Dictionary *)&local_c8,SUB81((Variant *)&local_108,0));
      pcVar32 = local_108;
      if (local_108 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_108 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_108 = (char *)0x0;
          Memory::free_static(pcVar32 + -0x10,false);
        }
      }
      Dictionary::~Dictionary((Dictionary *)&local_118);
      local_f8 = local_f8 + 0x18;
    } while (local_f8 != local_e8[0]);
    local_1e8 = (void *)local_c0._0_8_;
  }
  Variant::Variant((Variant *)local_58,param_3);
  Dictionary::operator[]((Variant *)param_1);
  Variant::operator_cast_to_Array(local_150);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Array::begin();
  Array::end();
  uVar22 = (uint)bVar15;
  if (local_f8 != local_e8[0]) {
    bVar12 = 0;
LAB_0010dfb5:
    if (local_f0 != (Variant *)0x0) {
      Variant::operator=(local_f0,local_f8);
    }
    Variant::operator_cast_to_Dictionary((Variant *)local_148);
    Variant::Variant((Variant *)local_58,param_4);
    bVar16 = Dictionary::has((Variant *)local_148);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (bVar16 != 0) {
      Variant::Variant((Variant *)local_58,param_4);
      Dictionary::operator[]((Variant *)local_148);
      Variant::operator_cast_to_String((Variant *)&local_140);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      cVar14 = String::is_valid_float();
      if (cVar14 != '\0') {
        String::trim_suffix((char *)&local_d8);
        if (local_140 != local_d8) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
          local_140 = local_d8;
          local_d8 = (char *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      }
      if (param_8) {
        Variant::Variant((Variant *)local_58,"right_type");
        cVar14 = Dictionary::has((Variant *)local_148);
        if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (cVar14 != '\0') {
          Variant::Variant((Variant *)local_58,"right_type");
          Dictionary::operator[]((Variant *)local_148);
          Variant::operator_cast_to_String((Variant *)&local_100);
          operator+((char *)&local_d8,(String *)&_LC180);
          String::operator+=((String *)&local_140,(String *)&local_d8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
          if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
      }
      if ((local_1e8 != (void *)0x0) && (local_a0._4_4_ != 0)) {
        uVar22 = *(uint *)(hash_table_size_primes + (local_a0 & 0xffffffff) * 4);
        lVar34 = *(long *)(hash_table_size_primes_inv + (local_a0 & 0xffffffff) * 8);
        uVar23 = String::hash();
        uVar26 = CONCAT44(0,uVar22);
        uVar13 = local_c0._8_8_;
        uVar29 = 1;
        if (uVar23 != 0) {
          uVar29 = uVar23;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar29 * lVar34;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar26;
        lVar30 = SUB168(auVar4 * auVar8,8);
        uVar23 = *(uint *)(local_c0._8_8_ + lVar30 * 4);
        iVar33 = SUB164(auVar4 * auVar8,8);
        if (uVar23 != 0) {
          uVar35 = 0;
          do {
            if ((uVar29 == uVar23) &&
               (bVar17 = String::operator==((String *)
                                            (*(long *)((long)local_1e8 + lVar30 * 8) + 0x10),
                                            (String *)&local_140), bVar17 != 0)) {
              pDVar25 = (Dictionary *)
                        HashMap<String,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Dictionary>>>
                        ::operator[]((HashMap<String,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Dictionary>>>
                                      *)&local_c8,(String *)&local_140);
              Dictionary::Dictionary(local_138,pDVar25);
              lVar34 = *(long *)(param_5 + 8);
              if (lVar34 == 0) goto LAB_0010e704;
              local_1e8 = (void *)0x0;
              goto LAB_0010e308;
            }
            uVar35 = uVar35 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)(iVar33 + 1) * lVar34;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar26;
            lVar30 = SUB168(auVar5 * auVar9,8);
            uVar23 = *(uint *)(uVar13 + lVar30 * 4);
            iVar33 = SUB164(auVar5 * auVar9,8);
          } while ((uVar23 != 0) &&
                  (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar23 * lVar34, auVar10._8_8_ = 0,
                  auVar10._0_8_ = uVar26, auVar7._8_8_ = 0,
                  auVar7._0_8_ = (ulong)((uVar22 + iVar33) - SUB164(auVar6 * auVar10,8)) * lVar34,
                  auVar11._8_8_ = 0, auVar11._0_8_ = uVar26, uVar35 <= SUB164(auVar7 * auVar11,8)));
        }
      }
      local_100 = 0;
      if (local_140 != (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_140);
      }
      local_108 = (char *)0x0;
      if (local_160 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_160);
      }
      local_110 = 0;
      local_d0 = (CowData<char32_t> *)0x2f;
      local_d8 = "Validate extension JSON: API was removed: %s/%s";
      String::parse_latin1((StrRange *)&local_110);
      vformat<String,String>
                ((String *)&local_d8,(StrRange *)&local_110,(CowData<char32_t> *)&local_108,
                 (CowData<char32_t> *)&local_100);
      print_error((String *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      bVar12 = bVar16;
      goto LAB_0010e928;
    }
    local_100 = 0;
    if (*(long *)param_4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)param_4);
    }
    local_108 = (char *)0x0;
    if (local_160 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_160);
    }
    local_110 = 0;
    local_d0 = (CowData<char32_t> *)0x5a;
    local_d8 = 
    "Validate extension JSON: JSON file: element of base array \'%s\' is missing the field: \'%s\'."
    ;
    String::parse_latin1((StrRange *)&local_110);
    vformat<String,String>
              ((String *)&local_d8,(StrRange *)&local_110,(CowData<char32_t> *)&local_108,
               (CowData<char32_t> *)&local_100);
    print_error((String *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
    bVar12 = bVar15;
    goto LAB_0010e0ea;
  }
LAB_0010e125:
  Array::~Array((Array *)local_150);
LAB_0010dd7e:
  if (local_1e8 == (void *)0x0) {
LAB_0010de6c:
    Array::~Array((Array *)local_158);
  }
  else {
    if ((local_a0._4_4_ != 0) &&
       (uVar29 = *(uint *)(hash_table_size_primes + (local_a0 & 0xffffffff) * 4), uVar29 != 0)) {
      lVar34 = 0;
      do {
        if (*(int *)(local_c0._8_8_ + lVar34) != 0) {
          *(int *)(local_c0._8_8_ + lVar34) = 0;
          puVar31 = (undefined8 *)((long)local_1e8 + lVar34 * 2);
          pvVar3 = (void *)*puVar31;
          Dictionary::~Dictionary((Dictionary *)((long)pvVar3 + 0x18));
          if (*(long *)((long)pvVar3 + 0x10) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar3 + 0x10) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar30 = *(long *)((long)pvVar3 + 0x10);
              *(undefined8 *)((long)pvVar3 + 0x10) = 0;
              Memory::free_static((void *)(lVar30 + -0x10),false);
            }
            puVar31 = (undefined8 *)(local_c0._0_8_ + lVar34 * 2);
            local_1e8 = (void *)local_c0._0_8_;
          }
          Memory::free_static(pvVar3,false);
          *puVar31 = 0;
        }
        lVar34 = lVar34 + 4;
      } while ((ulong)uVar29 << 2 != lVar34);
      uVar22 = uVar22 & 0xff;
      local_a0 = local_a0 & 0xffffffff;
      local_b0 = (undefined1  [16])0x0;
      if (local_1e8 == (void *)0x0) goto LAB_0010de6c;
    }
    Memory::free_static(local_1e8,false);
    Memory::free_static((void *)local_c0._8_8_,false);
    Array::~Array((Array *)local_158);
  }
LAB_0010d839:
  lVar34 = local_160;
  if (local_160 != 0) {
    LOCK();
    plVar1 = (long *)(local_160 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_160 = 0;
      Memory::free_static((void *)(lVar34 + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar22;
LAB_0010e308:
  do {
    if (*(long *)(lVar34 + -8) <= (long)local_1e8) break;
    local_130 = (char *)0x0;
    pCVar2 = (CowData *)(lVar34 + (long)local_1e8 * 8);
    if (*(long *)pCVar2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_130,pCVar2);
    }
    cVar14 = String::begins_with((char *)&local_130);
    iVar33 = (int)(CowData<char32_t> *)&local_130;
    if (cVar14 != '\0') {
      String::substr((int)(CowData<char32_t> *)&local_d8,iVar33);
      if (local_130 != local_d8) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
        local_130 = local_d8;
        local_d8 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    }
    cVar18 = String::begins_with((char *)&local_130);
    if (cVar18 != '\0') {
      String::substr((int)(CowData<char32_t> *)&local_d8,iVar33);
      if (local_130 != local_d8) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
        local_130 = local_d8;
        local_d8 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    }
    cVar19 = String::begins_with((char *)&local_130);
    if (cVar19 != '\0') {
      String::substr((int)(CowData<char32_t> *)&local_d8,iVar33);
      if (local_130 != local_d8) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
        local_130 = local_d8;
        local_d8 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    }
    bVar20 = (bool)String::begins_with((char *)&local_130);
    if (bVar20 != false) {
      String::substr((int)(CowData<char32_t> *)&local_d8,iVar33);
      if (local_130 != local_d8) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
        local_130 = local_d8;
        local_d8 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    }
    local_98 = 0;
    local_90 = (undefined1  [16])0x0;
    Variant::Variant((Variant *)local_58,(String *)&local_130);
    cVar21 = Dictionary::has((Variant *)local_148);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar21 == '\0') {
      if (cVar14 == '\0') {
        if (cVar18 != '\0') {
          Variant::Variant((Variant *)local_58,(String *)&local_130);
          cVar14 = Dictionary::has((Variant *)local_138);
          if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (cVar14 != '\0') goto LAB_0010e6d0;
        }
        local_100 = 0;
        if (local_130 != (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_130);
        }
        local_108 = (char *)0x0;
        if (local_140 != (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_140);
        }
        local_110 = 0;
        if (local_160 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_160);
        }
        pcVar32 = "Validate extension JSON: JSON file: Missing field in \'%s/%s\': %s";
LAB_0010e66c:
        local_1a8 = (CowData<char32_t> *)&local_110;
        local_118 = 0;
        String::parse_latin1((String *)&local_118,pcVar32);
        vformat<String,String,String>((String *)&local_d8,(String *)&local_118,local_1a8,&local_108)
        ;
        print_error((String *)&local_d8);
LAB_0010e69a:
        local_1a8 = (CowData<char32_t> *)&local_110;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
        CowData<char32_t>::_unref(local_1a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
        bVar12 = bVar17;
      }
      else {
        Variant::Variant((Variant *)local_58,(String *)&local_130);
        cVar14 = Dictionary::has((Variant *)local_138);
        if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (cVar14 != '\0') {
          local_100 = 0;
          if (local_130 != (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_130);
          }
          local_108 = (char *)0x0;
          if (local_140 != (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_140);
          }
          local_110 = 0;
          if (local_160 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_160);
          }
          pcVar32 = 
          "Validate extension JSON: JSON file: Field was added in a way that breaks compatibility \'%s/%s\': %s"
          ;
          goto LAB_0010e66c;
        }
      }
LAB_0010e6d0:
      if (Variant::needs_deinit[(int)local_98] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      Variant::Variant((Variant *)local_58,(String *)&local_130);
      pVVar28 = (Variant *)Dictionary::operator[]((Variant *)local_148);
      Variant::operator=((Variant *)&local_98,pVVar28);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,(String *)&local_130);
      bVar16 = Dictionary::has((Variant *)local_138);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (bVar16 == 0) {
        local_100 = 0;
        if (local_130 != (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_130);
        }
        local_108 = (char *)0x0;
        if (local_140 != (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_140);
        }
        local_110 = 0;
        if (local_160 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_160);
        }
        local_118 = 0;
        local_d0 = (CowData<char32_t> *)0x51;
        local_d8 = 
        "Validate extension JSON: Missing field in current API \'%s/%s\': %s. This is a bug.";
        String::parse_latin1((StrRange *)&local_118);
        vformat<String,String,String>
                  (&local_d8,(StrRange *)&local_118,(CowData<char32_t> *)&local_110,
                   (CowData<char32_t> *)&local_108);
        _err_print_error("compare_dict_array","core/extension/extension_api_dump.cpp",0x5b9,
                         &local_d8);
        goto LAB_0010e69a;
      }
      Variant::Variant((Variant *)local_58,(String *)&local_130);
      pVVar28 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::Variant((Variant *)local_78,pVVar28);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((param_9) && (cVar14 = String::ends_with((char *)&local_140), cVar14 != '\0')) {
        lVar34 = Variant::operator_cast_to_long((Variant *)local_78);
        lVar30 = Variant::operator_cast_to_long((Variant *)&local_98);
        if (lVar30 < lVar34) {
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          goto LAB_0010e6d0;
        }
      }
      if (cVar19 == '\0') {
        local_108 = (char *)0x0;
        local_d0 = (CowData<char32_t> *)0x1;
        local_d8 = "/";
        String::parse_latin1((StrRange *)&local_108);
        String::operator+((String *)&local_100,(String *)&local_160);
        String::operator+((String *)&local_d8,(String *)&local_100);
        cVar14 = compare_value((String *)&local_d8,(String *)&local_130,(Variant *)&local_98,
                               (Variant *)local_78,bVar20);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      }
      else {
        local_110 = 0;
        String::parse_latin1((String *)&local_110,"/");
        local_128 = 0;
        String::parse_latin1((String *)&local_128,"/");
        String::operator+(local_120,(String *)&local_160);
        String::operator+((String *)&local_118,local_120);
        String::operator+((String *)&local_108,(String *)&local_118);
        local_58[0] = 0;
        String::parse_latin1((String *)local_58,"value");
        local_d0 = (CowData<char32_t> *)0x0;
        iVar33 = CowData<String>::resize<false>((CowData<String> *)&local_d0,1);
        if (iVar33 == 0) {
          if (local_d0 == (CowData<char32_t> *)0x0) {
            lVar34 = 0;
          }
          else {
            lVar34 = *(long *)(local_d0 + -8);
            if (0 < lVar34) {
              CowData<String>::_copy_on_write((CowData<String> *)&local_d0);
              if (local_58[0] != *(long *)local_d0) {
                CowData<char32_t>::_ref(local_d0,(CowData *)local_58);
              }
              goto LAB_0010f290;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,0,lVar34,"p_index","size()","",false,
                     false);
        }
LAB_0010f290:
        local_100 = 0;
        String::parse_latin1((String *)&local_100,"name");
        cVar14 = compare_dict_array(local_148,local_138,(String *)&local_130,(String *)&local_100,
                                    (Vector *)&local_d8,false,(String *)&local_108,false,true);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
        CowData<String>::_unref((CowData<String> *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      }
      if (cVar14 == '\0') {
        bVar12 = bVar16;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_98] != '\0') {
        Variant::_clear_internal();
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
    local_1e8 = (void *)((long)local_1e8 + 1);
    lVar34 = *(long *)(param_5 + 8);
  } while (lVar34 != 0);
LAB_0010e704:
  if (!param_6) {
LAB_0010ef92:
    Dictionary::~Dictionary(local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
    Dictionary::~Dictionary(local_148);
    local_1e8 = (void *)local_c0._0_8_;
    goto LAB_0010e0f4;
  }
  Variant::Variant((Variant *)local_58,"hash");
  cVar14 = Dictionary::has((Variant *)local_148);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar14 == '\0') {
    Variant::Variant((Variant *)&local_98,"is_virtual");
    cVar14 = Dictionary::has((Variant *)local_148);
    if (cVar14 == '\0') {
      if (Variant::needs_deinit[(int)local_98] != '\0') {
        Variant::_clear_internal();
      }
LAB_0010e797:
      local_100 = 0;
      if (local_160 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_160);
      }
      pcVar32 = 
      "Validate extension JSON: JSON file: element of base array \'%s\' is missing the field: \'hash\'."
      ;
LAB_0010e7de:
      local_108 = (char *)0x0;
      this = (String *)&local_d8;
      String::parse_latin1((String *)&local_108,pcVar32);
      vformat<String>(this,(String *)&local_108,&local_100);
      print_error(this);
      goto LAB_0010e807;
    }
    Variant::Variant((Variant *)local_78,"is_virtual");
    pVVar28 = (Variant *)Dictionary::operator[]((Variant *)local_148);
    bVar16 = Variant::operator_cast_to_bool(pVVar28);
    if ((bool)bVar16) {
      Variant::Variant((Variant *)local_58,"hash");
      bVar16 = Dictionary::has((Variant *)local_148);
      bVar16 = bVar16 ^ 1;
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_98] != '\0') {
      Variant::_clear_internal();
    }
    if (bVar16 == 0) goto LAB_0010e797;
  }
  else {
    Variant::Variant((Variant *)local_58,"hash");
    pVVar28 = (Variant *)Dictionary::operator[]((Variant *)local_148);
    uVar26 = Variant::operator_cast_to_unsigned_long(pVVar28);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,"hash");
    cVar14 = Dictionary::has((Variant *)local_138);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar14 == '\0') {
      local_100 = 0;
      if (local_160 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_160);
      }
      pcVar32 = "Validate extension JSON: Error: Field \'%s\' is missing the field: \'hash\'.";
      goto LAB_0010e7de;
    }
    Variant::Variant((Variant *)local_58,"hash");
    pVVar28 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    uVar27 = Variant::operator_cast_to_unsigned_long(pVVar28);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (uVar26 == uVar27) goto LAB_0010ef92;
    Variant::Variant((Variant *)local_58,"hash_compatibility");
    cVar14 = Dictionary::has((Variant *)local_138);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar14 != '\0') {
      Variant::Variant((Variant *)local_58,"hash_compatibility");
      Dictionary::operator[]((Variant *)local_138);
      Variant::operator_cast_to_Array((Variant *)&local_d8);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      for (iVar33 = 0; iVar24 = Array::size(), iVar33 < iVar24; iVar33 = iVar33 + 1) {
        pVVar28 = (Variant *)Array::operator[]((int)(Array *)&local_d8);
        uVar27 = Variant::operator_cast_to_unsigned_long(pVVar28);
        if (uVar26 == uVar27) {
          Array::~Array((Array *)&local_d8);
          goto LAB_0010ef92;
        }
      }
      Array::~Array((Array *)&local_d8);
    }
    local_100 = 0;
    if (local_140 != (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_140);
    }
    local_108 = (char *)0x0;
    if (local_160 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_160);
    }
    this = (String *)&local_110;
    local_110 = 0;
    String::parse_latin1
              (this,
               "Validate extension JSON: Error: Hash changed for \'%s/%s\', from %08X to %08X. This means that the function has changed and no compatibility function was provided."
              );
    vformat<String,String,unsigned_long,unsigned_long>
              ((Array *)&local_d8,this,(CowData<char32_t> *)&local_108,
               (CowData<char32_t> *)&local_100,uVar26,uVar27);
    print_error((String *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
LAB_0010e807:
    CowData<char32_t>::_unref((CowData<char32_t> *)this);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
    bVar12 = param_6;
  }
  Dictionary::~Dictionary(local_138);
  local_1e8 = (void *)local_c0._0_8_;
LAB_0010e928:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
LAB_0010e0ea:
  Dictionary::~Dictionary(local_148);
LAB_0010e0f4:
  local_f8 = local_f8 + 0x18;
  if (local_f8 == local_e8[0]) goto code_r0x0010e116;
  goto LAB_0010dfb5;
code_r0x0010e116:
  uVar22 = bVar12 ^ 1;
  goto LAB_0010e125;
}



/* compare_sub_dict_array(HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >&,
   String const&, String const&, Dictionary const&, Dictionary const&, String const&, String const&,
   Vector<String> const&, bool, bool) */

byte compare_sub_dict_array
               (HashSet *param_1,String *param_2,String *param_3,Dictionary *param_4,
               Dictionary *param_5,String *param_6,String *param_7,Vector *param_8,bool param_9,
               bool param_10)

{
  long *plVar1;
  uint uVar2;
  void *pvVar3;
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
  ulong uVar20;
  char *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  char cVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  uint uVar28;
  Dictionary *pDVar29;
  uint uVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  uint uVar34;
  long lVar35;
  undefined8 *puVar36;
  void *pvVar37;
  long in_FS_OFFSET;
  bool bVar38;
  Variant local_100 [8];
  Variant local_f8 [8];
  Variant local_f0 [8];
  long local_e8;
  Dictionary local_e0 [8];
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  Variant *local_b8;
  Variant *local_b0;
  Variant *local_a8 [2];
  char *local_98;
  undefined8 local_90;
  char *local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,param_2);
  cVar24 = Dictionary::has((Variant *)param_4);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  bVar25 = 1;
  if (cVar24 == '\0') goto LAB_0010f7a6;
  Variant::Variant((Variant *)local_58,param_2);
  bVar25 = Dictionary::has((Variant *)param_5);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (bVar25 == 0) {
    local_98 = (char *)0x0;
    if (*(long *)param_2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)param_2);
    }
    local_a8[0] = (Variant *)0x0;
    local_80._0_8_ = 0x1c;
    local_88 = "New API lacks base array: %s";
    String::parse_latin1((StrRange *)local_a8);
    vformat<String>((CowData<char32_t> *)&local_88,(StrRange *)local_a8,
                    (CowData<char32_t> *)&local_98);
    _err_print_error("compare_sub_dict_array","core/extension/extension_api_dump.cpp",0x600,
                     "Condition \"!p_new_api.has(p_outer)\" is true. Returning: false",
                     (CowData<char32_t> *)&local_88,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    bVar25 = 0;
    goto LAB_0010f7a6;
  }
  Variant::Variant((Variant *)local_58,param_2);
  Dictionary::operator[]((Variant *)param_5);
  Variant::operator_cast_to_Array(local_100);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_60 = 2;
  local_80 = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
  Array::begin();
  Array::end();
  if (local_a8[0] != local_b8) {
    do {
      if (local_b0 != (Variant *)0x0) {
        Variant::operator=(local_b0,local_b8);
      }
      Variant::operator_cast_to_Dictionary((Variant *)&local_d8);
      Variant::Variant((Variant *)local_58,param_3);
      cVar24 = Dictionary::has((Variant *)&local_d8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar24 == '\0') {
        local_c0 = 0;
        if (*(long *)param_3 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)param_3);
        }
        local_c8 = 0;
        if (*(long *)param_2 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)param_2);
        }
        local_98 = 
        "Validate extension JSON: Element of base_array \'%s\' is missing field \'%s\'. This is a bug."
        ;
        local_d0 = 0;
        local_90 = 0x59;
        String::parse_latin1((StrRange *)&local_d0);
        vformat<String,String>
                  ((String *)&local_98,(StrRange *)&local_d0,(CowData<char32_t> *)&local_c8,
                   (Variant *)&local_c0);
        _err_print_error("compare_sub_dict_array","core/extension/extension_api_dump.cpp",0x606,
                         "Condition \"!elem.has(p_outer_name)\" is true. Returning: false",
                         (String *)&local_98,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        Dictionary::~Dictionary((Dictionary *)&local_d8);
        bVar25 = 0;
        goto LAB_0010faf4;
      }
      Variant::Variant((Variant *)local_58,param_3);
      Dictionary::operator[]((Variant *)&local_d8);
      Variant::operator_cast_to_String((Variant *)&local_c0);
      HashMap<String,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Dictionary>>>
      ::insert((String *)&local_98,(Dictionary *)&local_88,SUB81((Variant *)&local_c0,0));
      lVar35 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar35 + -0x10),false);
        }
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)&local_d8);
      local_b8 = local_b8 + 0x18;
    } while (local_b8 != local_a8[0]);
  }
  Variant::Variant((Variant *)local_58,param_2);
  Dictionary::operator[]((Variant *)param_4);
  Variant::operator_cast_to_Array(local_f8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Array::begin();
  Array::end();
  if (local_a8[0] != local_b8) {
    bVar27 = 0;
    do {
      if (local_b0 != (Variant *)0x0) {
        Variant::operator=(local_b0,local_b8);
      }
      Variant::operator_cast_to_Dictionary(local_f0);
      Variant::Variant((Variant *)local_58,param_3);
      cVar24 = Dictionary::has(local_f0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar24 == '\0') {
        local_c0 = 0;
        plVar1 = (long *)(*(long *)param_3 + -0x10);
        if (*(long *)param_3 != 0) {
          do {
            lVar35 = *plVar1;
            if (lVar35 == 0) goto LAB_0010fd24;
            LOCK();
            lVar32 = *plVar1;
            bVar38 = lVar35 == lVar32;
            if (bVar38) {
              *plVar1 = lVar35 + 1;
              lVar32 = lVar35;
            }
            UNLOCK();
          } while (!bVar38);
          if (lVar32 != -1) {
            local_c0 = *(long *)param_3;
          }
        }
LAB_0010fd24:
        local_c8 = 0;
        plVar1 = (long *)(*(long *)param_2 + -0x10);
        if (*(long *)param_2 != 0) {
          do {
            lVar35 = *plVar1;
            if (lVar35 == 0) goto LAB_0010fd6a;
            LOCK();
            lVar32 = *plVar1;
            bVar38 = lVar35 == lVar32;
            if (bVar38) {
              *plVar1 = lVar35 + 1;
              lVar32 = lVar35;
            }
            UNLOCK();
          } while (!bVar38);
          if (lVar32 != -1) {
            local_c8 = *(long *)param_2;
          }
        }
LAB_0010fd6a:
        local_d0 = 0;
        local_90 = 0x5a;
        local_98 = 
        "Validate extension JSON: JSON file: element of base array \'%s\' is missing the field: \'%s\'."
        ;
        String::parse_latin1((StrRange *)&local_d0);
        vformat<String,String>((String *)&local_98,(StrRange *)&local_d0,&local_c8,&local_c0);
        print_error((String *)&local_98);
        pcVar21 = local_98;
        if (local_98 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_98 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_98 = (char *)0x0;
            Memory::free_static(pcVar21 + -0x10,false);
          }
        }
        lVar35 = local_d0;
        if (local_d0 != 0) {
          LOCK();
          plVar1 = (long *)(local_d0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_d0 = 0;
            Memory::free_static((void *)(lVar35 + -0x10),false);
          }
        }
        lVar35 = local_c8;
        if (local_c8 != 0) {
          LOCK();
          plVar1 = (long *)(local_c8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c8 = 0;
            Memory::free_static((void *)(lVar35 + -0x10),false);
          }
        }
        lVar35 = local_c0;
        if (local_c0 != 0) {
          LOCK();
          plVar1 = (long *)(local_c0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c0 = 0;
            Memory::free_static((void *)(lVar35 + -0x10),false);
          }
        }
      }
      else {
        Variant::Variant((Variant *)local_58,param_3);
        Dictionary::operator[](local_f0);
        Variant::operator_cast_to_String((Variant *)&local_e8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        uVar22 = local_80._0_8_;
        if ((local_80._0_8_ != 0) && (local_60._4_4_ != 0)) {
          uVar2 = *(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4);
          lVar35 = *(long *)(hash_table_size_primes_inv + (local_60 & 0xffffffff) * 8);
          uVar28 = String::hash();
          uVar20 = CONCAT44(0,uVar2);
          uVar23 = local_80._8_8_;
          uVar30 = 1;
          if (uVar28 != 0) {
            uVar30 = uVar28;
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar30 * lVar35;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar20;
          lVar32 = SUB168(auVar4 * auVar12,8);
          uVar28 = *(uint *)(local_80._8_8_ + lVar32 * 4);
          iVar31 = SUB164(auVar4 * auVar12,8);
          if (uVar28 != 0) {
            uVar34 = 0;
            do {
              if ((uVar30 == uVar28) &&
                 (bVar26 = String::operator==((String *)(*(long *)(uVar22 + lVar32 * 8) + 0x10),
                                              (String *)&local_e8), bVar26 != 0)) {
                pDVar29 = (Dictionary *)
                          HashMap<String,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Dictionary>>>
                          ::operator[]((HashMap<String,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Dictionary>>>
                                        *)&local_88,(String *)&local_e8);
                Dictionary::Dictionary(local_e0,pDVar29);
                local_98 = "/";
                local_c0 = 0;
                local_90 = 1;
                String::parse_latin1((StrRange *)&local_c0);
                local_98 = "/";
                local_d8 = 0;
                local_90 = 1;
                String::parse_latin1((StrRange *)&local_d8);
                String::operator+((String *)&local_d0,param_2);
                String::operator+((String *)&local_c8,(String *)&local_d0);
                String::operator+((String *)&local_98,(String *)&local_c8);
                cVar24 = compare_dict_array((Dictionary *)local_f0,local_e0,param_6,param_7,param_8,
                                            param_9,(String *)&local_98,param_10,false);
                pcVar21 = local_98;
                if (local_98 != (char *)0x0) {
                  LOCK();
                  plVar1 = (long *)(local_98 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_98 = (char *)0x0;
                    Memory::free_static(pcVar21 + -0x10,false);
                  }
                }
                lVar35 = local_c8;
                if (local_c8 != 0) {
                  LOCK();
                  plVar1 = (long *)(local_c8 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_c8 = 0;
                    Memory::free_static((void *)(lVar35 + -0x10),false);
                  }
                }
                lVar35 = local_d0;
                if (local_d0 != 0) {
                  LOCK();
                  plVar1 = (long *)(local_d0 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_d0 = 0;
                    Memory::free_static((void *)(lVar35 + -0x10),false);
                  }
                }
                lVar35 = local_d8;
                if (local_d8 != 0) {
                  LOCK();
                  plVar1 = (long *)(local_d8 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_d8 = 0;
                    Memory::free_static((void *)(lVar35 + -0x10),false);
                  }
                }
                lVar35 = local_c0;
                if (local_c0 != 0) {
                  LOCK();
                  plVar1 = (long *)(local_c0 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_c0 = 0;
                    Memory::free_static((void *)(lVar35 + -0x10),false);
                  }
                }
                if (cVar24 == '\0') {
                  bVar27 = bVar26;
                }
                Dictionary::~Dictionary(local_e0);
                lVar35 = local_e8;
                if (local_e8 != 0) {
                  LOCK();
                  plVar1 = (long *)(local_e8 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_e8 = 0;
                    Memory::free_static((void *)(lVar35 + -0x10),false);
                  }
                }
                Dictionary::~Dictionary((Dictionary *)local_f0);
                goto LAB_0010feb6;
              }
              uVar34 = uVar34 + 1;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (ulong)(iVar31 + 1) * lVar35;
              auVar13._8_8_ = 0;
              auVar13._0_8_ = uVar20;
              lVar32 = SUB168(auVar5 * auVar13,8);
              uVar28 = *(uint *)(uVar23 + lVar32 * 4);
              iVar31 = SUB164(auVar5 * auVar13,8);
            } while ((uVar28 != 0) &&
                    (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar28 * lVar35, auVar14._8_8_ = 0,
                    auVar14._0_8_ = uVar20, auVar7._8_8_ = 0,
                    auVar7._0_8_ = (ulong)((uVar2 + iVar31) - SUB164(auVar6 * auVar14,8)) * lVar35,
                    auVar15._8_8_ = 0, auVar15._0_8_ = uVar20, uVar34 <= SUB164(auVar7 * auVar15,8))
                    );
          }
        }
        if ((*(long *)param_1 != 0) && (*(int *)(param_1 + 0x24) != 0)) {
          uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x20) * 4);
          lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x20) * 8);
          uVar28 = String::hash();
          uVar20 = CONCAT44(0,uVar2);
          lVar32 = *(long *)(param_1 + 0x18);
          uVar30 = 1;
          if (uVar28 != 0) {
            uVar30 = uVar28;
          }
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar30 * lVar35;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar20;
          lVar33 = SUB168(auVar8 * auVar16,8);
          uVar28 = *(uint *)(lVar32 + lVar33 * 4);
          if (uVar28 != 0) {
            uVar34 = 0;
            iVar31 = SUB164(auVar8 * auVar16,8);
            do {
              if (uVar30 == uVar28) {
                cVar24 = String::operator==((String *)
                                            (*(long *)param_1 +
                                            (ulong)*(uint *)(*(long *)(param_1 + 8) + lVar33 * 4) *
                                            8),(String *)&local_e8);
                if (cVar24 != '\0') goto LAB_0011055b;
                lVar32 = *(long *)(param_1 + 0x18);
              }
              uVar34 = uVar34 + 1;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)(iVar31 + 1) * lVar35;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar20;
              lVar33 = SUB168(auVar9 * auVar17,8);
              uVar28 = *(uint *)(lVar32 + lVar33 * 4);
              iVar31 = SUB164(auVar9 * auVar17,8);
            } while ((uVar28 != 0) &&
                    (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar28 * lVar35, auVar18._8_8_ = 0,
                    auVar18._0_8_ = uVar20, auVar11._8_8_ = 0,
                    auVar11._0_8_ = (ulong)((uVar2 + iVar31) - SUB164(auVar10 * auVar18,8)) * lVar35
                    , auVar19._8_8_ = 0, auVar19._0_8_ = uVar20,
                    uVar34 <= SUB164(auVar11 * auVar19,8)));
          }
        }
        local_c0 = 0;
        if (local_e8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)&local_e8);
        }
        local_c8 = 0;
        if (*(long *)param_2 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)param_2);
        }
        local_d0 = 0;
        local_98 = "Validate extension JSON: API was removed: %s/%s";
        local_90 = 0x2f;
        String::parse_latin1((StrRange *)&local_d0);
        vformat<String,String>
                  ((String *)&local_98,(StrRange *)&local_d0,(CowData<char32_t> *)&local_c8,
                   (CowData<char32_t> *)&local_c0);
        print_error((String *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                  ((String *)&local_98);
LAB_0011055b:
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      }
      Dictionary::~Dictionary((Dictionary *)local_f0);
      bVar27 = bVar25;
LAB_0010feb6:
      local_b8 = local_b8 + 0x18;
    } while (local_b8 != local_a8[0]);
    bVar25 = bVar27 ^ 1;
  }
  Array::~Array((Array *)local_f8);
LAB_0010faf4:
  if ((void *)local_80._0_8_ != (void *)0x0) {
    pvVar37 = (void *)local_80._0_8_;
    if ((local_60._4_4_ != 0) &&
       (uVar2 = *(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4), uVar2 != 0)) {
      lVar35 = 0;
      do {
        if (*(int *)(local_80._8_8_ + lVar35) != 0) {
          *(int *)(local_80._8_8_ + lVar35) = 0;
          puVar36 = (undefined8 *)((long)pvVar37 + lVar35 * 2);
          pvVar3 = (void *)*puVar36;
          Dictionary::~Dictionary((Dictionary *)((long)pvVar3 + 0x18));
          if (*(long *)((long)pvVar3 + 0x10) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar3 + 0x10) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar32 = *(long *)((long)pvVar3 + 0x10);
              *(undefined8 *)((long)pvVar3 + 0x10) = 0;
              Memory::free_static((void *)(lVar32 + -0x10),false);
            }
            puVar36 = (undefined8 *)(local_80._0_8_ + lVar35 * 2);
            pvVar37 = (void *)local_80._0_8_;
          }
          Memory::free_static(pvVar3,false);
          *puVar36 = 0;
        }
        lVar35 = lVar35 + 4;
      } while (lVar35 != (ulong)uVar2 << 2);
      local_60 = local_60 & 0xffffffff;
      local_70 = (undefined1  [16])0x0;
      if (pvVar37 == (void *)0x0) goto LAB_0010fbdb;
    }
    Memory::free_static(pvVar37,false);
    Memory::free_static((void *)local_80._8_8_,false);
  }
LAB_0010fbdb:
  Array::~Array((Array *)local_100);
LAB_0010f7a6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar25;
}



/* GDExtensionAPIDump::validate_extension_json_file(String const&) */

int GDExtensionAPIDump::validate_extension_json_file(String *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  String *pSVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  Variant *pVVar10;
  char *pcVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  CowData<char32_t> *pCVar16;
  StrRange *pSVar17;
  CowData<char32_t> *pCVar18;
  StrRange *this;
  long in_FS_OFFSET;
  int local_15c;
  int local_10c;
  long local_108;
  String *local_100;
  Variant local_f8 [8];
  GDExtensionAPIDump local_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  CowData<char32_t> *local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  CowData<char32_t> local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::get_file_as_string((String *)&local_108,param_1);
  if (local_10c != 0) {
    local_b8 = (char *)0x0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)param_1);
    }
    local_c8 = 0;
    local_a8._8_8_ = 0x32;
    local_a8._0_8_ = "Validate extension JSON: Could not open file \'%s\'.";
    String::parse_latin1((StrRange *)&local_c8);
    vformat<String>((CowData<char32_t> *)local_a8,(StrRange *)&local_c8,
                    (CowData<char32_t> *)&local_b8);
    _err_print_error("validate_extension_json_file","core/extension/extension_api_dump.cpp",0x62b,
                     (CowData<char32_t> *)local_a8,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    local_15c = local_10c;
    goto LAB_00110816;
  }
  local_100 = (String *)0x0;
  Ref<JSON>::instantiate<>((Ref<JSON> *)&local_100);
  pSVar3 = local_100;
  local_15c = JSON::parse(local_100,SUB81((String *)&local_108,0));
  if (local_15c == 0) {
    Variant::Variant((Variant *)&local_78,(Variant *)(pSVar3 + 0x248));
    Variant::operator_cast_to_Dictionary(local_f8);
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    generate_extension_api(local_f0,false);
    Variant::Variant((Variant *)&local_78,"header");
    Dictionary::operator[](local_f8);
    Variant::operator_cast_to_Dictionary((Variant *)&local_c8);
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)&local_78,"version_major");
    cVar5 = Dictionary::has((Variant *)&local_c8);
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar5 == '\0') {
      _err_print_error("validate_extension_json_file","core/extension/extension_api_dump.cpp",0x63c,
                       "Condition \"!header.has(\"version_major\")\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
LAB_00112e65:
      Dictionary::~Dictionary((Dictionary *)&local_c8);
      local_15c = 0x1e;
    }
    else {
      Variant::Variant((Variant *)&local_78,"version_minor");
      bVar6 = Dictionary::has((Variant *)&local_c8);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      if (bVar6 == 0) {
        _err_print_error("validate_extension_json_file","core/extension/extension_api_dump.cpp",
                         0x63d,
                         "Condition \"!header.has(\"version_minor\")\" is true. Returning: ERR_INVALID_DATA"
                         ,0,0);
        goto LAB_00112e65;
      }
      Variant::Variant((Variant *)&local_78,"version_major");
      pVVar10 = (Variant *)Dictionary::operator[]((Variant *)&local_c8);
      iVar8 = Variant::operator_cast_to_int(pVVar10);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)&local_78,"version_minor");
      pVVar10 = (Variant *)Dictionary::operator[]((Variant *)&local_c8);
      iVar9 = Variant::operator_cast_to_int(pVVar10);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      if (iVar8 != 4) {
        local_b8 = (char *)0x0;
        String::parse_latin1
                  ((String *)&local_b8,
                   "JSON API dump is for a different engine version (%d) than this one (%d)");
        vformat<int,int>((String *)local_a8,(int)(String *)&local_b8,iVar8);
        pcVar11 = "Condition \"major != 4\" is true. Returning: ERR_INVALID_DATA";
        uVar12 = 0x641;
LAB_00112f46:
        _err_print_error("validate_extension_json_file","core/extension/extension_api_dump.cpp",
                         uVar12,pcVar11,(CowData<char32_t> *)local_a8,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        goto LAB_00112e65;
      }
      if (4 < iVar9) {
        local_b8 = (char *)0x0;
        String::parse_latin1
                  ((String *)&local_b8,"JSON API dump is for a newer version of the engine: %d.%d");
        vformat<int,int>((String *)local_a8,(int)(String *)&local_b8,4);
        pcVar11 = "Condition \"minor > 4\" is true. Returning: ERR_INVALID_DATA";
        uVar12 = 0x642;
        goto LAB_00112f46;
      }
      Dictionary::~Dictionary((Dictionary *)&local_c8);
      local_a8 = (undefined1  [16])0x0;
      local_b8 = "value";
      local_98 = (undefined1  [16])0x0;
      local_88 = 2;
      local_d0 = 0;
      local_78 = 0;
      local_b0 = 5;
      String::parse_latin1((StrRange *)&local_78);
      local_70 = 0;
      local_b8 = "is_bitfield";
      local_b0 = 0xb;
      String::parse_latin1((StrRange *)&local_70);
      local_c0 = (CowData<char32_t> *)0x0;
      iVar8 = CowData<String>::resize<false>((CowData<String> *)&local_c0,2);
      if (iVar8 == 0) {
        lVar13 = 0;
        pVVar10 = (Variant *)&local_78;
        do {
          if (local_c0 == (CowData<char32_t> *)0x0) {
            lVar15 = 0;
LAB_00112ccb:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar13,lVar15,"p_index","size()","",
                       false,false);
          }
          else {
            lVar15 = *(long *)((long)local_c0 + -8);
            if (lVar15 <= lVar13) goto LAB_00112ccb;
            CowData<String>::_copy_on_write((CowData<String> *)&local_c0);
            pCVar18 = (CowData<char32_t> *)((long)local_c0 + lVar13 * 8);
            if (*(long *)pCVar18 != *(long *)pVVar10) {
              CowData<char32_t>::_ref(pCVar18,(CowData *)pVVar10);
            }
          }
          pVVar10 = (Variant *)((CowData *)pVVar10 + 8);
          if (lVar13 != 0) break;
          lVar13 = 1;
        } while( true );
      }
      local_d8 = 0;
      local_b8 = "name";
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_d8);
      local_e0 = 0;
      local_b8 = "global_constants";
      local_b0 = 0x10;
      String::parse_latin1((StrRange *)&local_e0);
      bVar7 = compare_dict_array((Dictionary *)local_f8,(Dictionary *)local_f0,(String *)&local_e0,
                                 (String *)&local_d8,(Vector *)&local_c8,false,(String *)&local_d0,
                                 false,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<String>::_unref((CowData<String> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      local_b8 = "$values";
      local_d0 = 0;
      local_78 = 0;
      local_b0 = 7;
      String::parse_latin1((StrRange *)&local_78);
      local_70 = 0;
      local_b8 = "is_bitfield";
      local_b0 = 0xb;
      String::parse_latin1((StrRange *)&local_70);
      local_c0 = (CowData<char32_t> *)0x0;
      iVar8 = CowData<String>::resize<false>((CowData<String> *)&local_c0,2);
      if (iVar8 == 0) {
        lVar13 = 0;
        pVVar10 = (Variant *)&local_78;
        do {
          if (local_c0 == (CowData<char32_t> *)0x0) {
            lVar15 = 0;
LAB_00112deb:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar13,lVar15,"p_index","size()","",
                       false,false);
          }
          else {
            lVar15 = *(long *)((long)local_c0 + -8);
            if (lVar15 <= lVar13) goto LAB_00112deb;
            CowData<String>::_copy_on_write((CowData<String> *)&local_c0);
            pCVar18 = (CowData<char32_t> *)((long)local_c0 + lVar13 * 8);
            if (*(long *)pCVar18 != *(long *)pVVar10) {
              CowData<char32_t>::_ref(pCVar18,(CowData *)pVVar10);
            }
          }
          pVVar10 = (Variant *)((CowData *)pVVar10 + 8);
          if (lVar13 != 0) break;
          lVar13 = 1;
        } while( true );
      }
      local_d8 = 0;
      local_b8 = "name";
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_d8);
      local_e0 = 0;
      local_b8 = "global_enums";
      local_b0 = 0xc;
      String::parse_latin1((StrRange *)&local_e0);
      cVar5 = compare_dict_array((Dictionary *)local_f8,(Dictionary *)local_f0,(String *)&local_e0,
                                 (String *)&local_d8,(Vector *)&local_c8,false,(String *)&local_d0,
                                 false,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<String>::_unref((CowData<String> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      local_d0 = 0;
      local_78 = 0;
      local_b0 = 8;
      bVar7 = bVar7 ^ 1;
      if (cVar5 == '\0') {
        bVar7 = bVar6;
      }
      local_b8 = "category";
      String::parse_latin1((StrRange *)&local_78);
      local_b8 = "is_vararg";
      local_70 = 0;
      local_b0 = 9;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = 0;
      local_b8 = "*return_type";
      local_b0 = 0xc;
      String::parse_latin1((StrRange *)&local_68);
      local_60 = 0;
      local_b8 = "*@arguments";
      local_b0 = 0xb;
      String::parse_latin1((StrRange *)&local_60);
      local_c0 = (CowData<char32_t> *)0x0;
      iVar8 = CowData<String>::resize<false>((CowData<String> *)&local_c0,4);
      if (iVar8 == 0) {
        lVar13 = 0;
        pVVar10 = (Variant *)&local_78;
        do {
          if (local_c0 == (CowData<char32_t> *)0x0) {
            lVar15 = 0;
LAB_00112da3:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar13,lVar15,"p_index","size()","",
                       false,false);
          }
          else {
            lVar15 = *(long *)((long)local_c0 + -8);
            if (lVar15 <= lVar13) goto LAB_00112da3;
            CowData<String>::_copy_on_write((CowData<String> *)&local_c0);
            pCVar18 = (CowData<char32_t> *)((long)local_c0 + lVar13 * 8);
            if (*(long *)pCVar18 != *(long *)pVVar10) {
              CowData<char32_t>::_ref(pCVar18,(CowData *)pVVar10);
            }
          }
          lVar13 = lVar13 + 1;
          pVVar10 = (Variant *)((CowData *)pVVar10 + 8);
        } while (lVar13 != 4);
      }
      local_d8 = 0;
      local_b8 = "name";
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_d8);
      local_e0 = 0;
      local_b8 = "utility_functions";
      local_b0 = 0x11;
      String::parse_latin1((StrRange *)&local_e0);
      cVar5 = compare_dict_array((Dictionary *)local_f8,(Dictionary *)local_f0,(String *)&local_e0,
                                 (String *)&local_d8,(Vector *)&local_c8,true,(String *)&local_d0,
                                 false,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<String>::_unref((CowData<String> *)&local_c0);
      this = (StrRange *)&local_58;
      pSVar17 = this;
      do {
        pSVar17 = pSVar17 + -8;
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar17);
      } while (pSVar17 != (StrRange *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      local_78 = 0;
      local_b0 = 4;
      if (cVar5 == '\0') {
        bVar7 = bVar6;
      }
      local_b8 = "type";
      String::parse_latin1((StrRange *)&local_78);
      local_c0 = (CowData<char32_t> *)0x0;
      iVar8 = CowData<String>::resize<false>((CowData<String> *)&local_c0,1);
      if (iVar8 == 0) {
        if (local_c0 == (CowData<char32_t> *)0x0) {
          lVar13 = 0;
        }
        else {
          lVar13 = *(long *)(local_c0 + -8);
          if (0 < lVar13) {
            CowData<String>::_copy_on_write((CowData<String> *)&local_c0);
            if (*(long *)local_c0 != local_78) {
              CowData<char32_t>::_ref(local_c0,(CowData *)&local_78);
            }
            goto LAB_001112a0;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,0,lVar13,"p_index","size()","",false,
                   false);
      }
LAB_001112a0:
      local_d0 = 0;
      local_b8 = "name";
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_d0);
      local_b8 = "members";
      local_d8 = 0;
      local_b0 = 7;
      String::parse_latin1((StrRange *)&local_d8);
      local_b8 = "name";
      local_e0 = 0;
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_e0);
      local_b8 = "builtin_classes";
      local_e8 = 0;
      local_b0 = 0xf;
      String::parse_latin1((StrRange *)&local_e8);
      cVar5 = compare_sub_dict_array
                        ((HashSet *)local_a8,(String *)&local_e8,(String *)&local_e0,
                         (Dictionary *)local_f8,(Dictionary *)local_f0,(String *)&local_d8,
                         (String *)&local_d0,(Vector *)&local_c8,false,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<String>::_unref((CowData<String> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = 0;
      local_b0 = 4;
      if (cVar5 == '\0') {
        bVar7 = bVar6;
      }
      local_b8 = "type";
      String::parse_latin1((StrRange *)&local_78);
      local_70 = 0;
      local_b8 = "value";
      local_b0 = 5;
      String::parse_latin1((StrRange *)&local_70);
      local_c0 = (CowData<char32_t> *)0x0;
      iVar8 = CowData<String>::resize<false>((CowData<String> *)&local_c0,2);
      if (iVar8 == 0) {
        lVar13 = 0;
        pVVar10 = (Variant *)&local_78;
        do {
          if (local_c0 == (CowData<char32_t> *)0x0) {
            lVar15 = 0;
LAB_00112d5b:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar13,lVar15,"p_index","size()","",
                       false,false);
          }
          else {
            lVar15 = *(long *)((long)local_c0 + -8);
            if (lVar15 <= lVar13) goto LAB_00112d5b;
            CowData<String>::_copy_on_write((CowData<String> *)&local_c0);
            pCVar18 = (CowData<char32_t> *)((long)local_c0 + lVar13 * 8);
            if (*(long *)pCVar18 != *(long *)pVVar10) {
              CowData<char32_t>::_ref(pCVar18,(CowData *)pVVar10);
            }
          }
          pVVar10 = (Variant *)((CowData *)pVVar10 + 8);
          if (lVar13 != 0) break;
          lVar13 = 1;
        } while( true );
      }
      local_d0 = 0;
      local_b8 = "name";
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_d0);
      local_b8 = "constants";
      local_d8 = 0;
      local_b0 = 9;
      String::parse_latin1((StrRange *)&local_d8);
      local_b8 = "name";
      local_e0 = 0;
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_e0);
      local_b8 = "builtin_classes";
      local_e8 = 0;
      local_b0 = 0xf;
      String::parse_latin1((StrRange *)&local_e8);
      cVar5 = compare_sub_dict_array
                        ((HashSet *)local_a8,(String *)&local_e8,(String *)&local_e0,
                         (Dictionary *)local_f8,(Dictionary *)local_f0,(String *)&local_d8,
                         (String *)&local_d0,(Vector *)&local_c8,false,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<String>::_unref((CowData<String> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = 0;
      local_b0 = 0xb;
      if (cVar5 == '\0') {
        bVar7 = bVar6;
      }
      local_b8 = "return_type";
      String::parse_latin1((StrRange *)&local_78);
      local_c0 = (CowData<char32_t> *)0x0;
      iVar8 = CowData<String>::resize<false>((CowData<String> *)&local_c0,1);
      if (iVar8 == 0) {
        if (local_c0 == (CowData<char32_t> *)0x0) {
          lVar13 = 0;
        }
        else {
          lVar13 = *(long *)(local_c0 + -8);
          if (0 < lVar13) {
            CowData<String>::_copy_on_write((CowData<String> *)&local_c0);
            if (*(long *)local_c0 != local_78) {
              CowData<char32_t>::_ref(local_c0,(CowData *)&local_78);
            }
            goto LAB_001116bc;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,0,lVar13,"p_index","size()","",false,
                   false);
      }
LAB_001116bc:
      local_d0 = 0;
      local_b8 = "name";
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_d0);
      local_b8 = "operators";
      local_d8 = 0;
      local_b0 = 9;
      String::parse_latin1((StrRange *)&local_d8);
      local_b8 = "name";
      local_e0 = 0;
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_e0);
      local_b8 = "builtin_classes";
      local_e8 = 0;
      local_b0 = 0xf;
      String::parse_latin1((StrRange *)&local_e8);
      cVar5 = compare_sub_dict_array
                        ((HashSet *)local_a8,(String *)&local_e8,(String *)&local_e0,
                         (Dictionary *)local_f8,(Dictionary *)local_f0,(String *)&local_d8,
                         (String *)&local_d0,(Vector *)&local_c8,false,true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<String>::_unref((CowData<String> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = 0;
      local_b0 = 9;
      if (cVar5 == '\0') {
        bVar7 = bVar6;
      }
      local_b8 = "is_vararg";
      String::parse_latin1((StrRange *)&local_78);
      local_b8 = "is_static";
      local_70 = 0;
      local_b0 = 9;
      String::parse_latin1((StrRange *)&local_70);
      local_b8 = "is_const";
      local_68 = 0;
      local_b0 = 8;
      String::parse_latin1((StrRange *)&local_68);
      local_b8 = "*return_type";
      local_60 = 0;
      local_b0 = 0xc;
      String::parse_latin1((StrRange *)&local_60);
      local_58 = 0;
      local_b8 = "*@arguments";
      local_b0 = 0xb;
      String::parse_latin1(this);
      local_c0 = (CowData<char32_t> *)0x0;
      iVar8 = CowData<String>::resize<false>((CowData<String> *)&local_c0,5);
      if (iVar8 == 0) {
        lVar13 = 0;
        pVVar10 = (Variant *)&local_78;
        do {
          if (local_c0 == (CowData<char32_t> *)0x0) {
            lVar15 = 0;
LAB_00112d13:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar13,lVar15,"p_index","size()","",
                       false,false);
          }
          else {
            lVar15 = *(long *)((long)local_c0 + -8);
            if (lVar15 <= lVar13) goto LAB_00112d13;
            CowData<String>::_copy_on_write((CowData<String> *)&local_c0);
            pCVar18 = (CowData<char32_t> *)((long)local_c0 + lVar13 * 8);
            if (*(long *)pCVar18 != *(long *)pVVar10) {
              CowData<char32_t>::_ref(pCVar18,(CowData *)pVVar10);
            }
          }
          lVar13 = lVar13 + 1;
          pVVar10 = (Variant *)((CowData *)pVVar10 + 8);
        } while (lVar13 != 5);
      }
      local_d0 = 0;
      local_b8 = "name";
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_d0);
      local_b8 = "methods";
      local_d8 = 0;
      local_b0 = 7;
      String::parse_latin1((StrRange *)&local_d8);
      local_b8 = "name";
      local_e0 = 0;
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_e0);
      local_b8 = "builtin_classes";
      local_e8 = 0;
      local_b0 = 0xf;
      String::parse_latin1((StrRange *)&local_e8);
      cVar5 = compare_sub_dict_array
                        ((HashSet *)local_a8,(String *)&local_e8,(String *)&local_e0,
                         (Dictionary *)local_f8,(Dictionary *)local_f0,(String *)&local_d8,
                         (String *)&local_d0,(Vector *)&local_c8,true,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<String>::_unref((CowData<String> *)&local_c0);
      pSVar17 = (StrRange *)&local_50;
      do {
        pSVar17 = pSVar17 + -8;
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar17);
      } while (pSVar17 != (StrRange *)&local_78);
      local_78 = 0;
      local_b0 = 0xb;
      if (cVar5 == '\0') {
        bVar7 = bVar6;
      }
      local_b8 = "*@arguments";
      String::parse_latin1((StrRange *)&local_78);
      local_c0 = (CowData<char32_t> *)0x0;
      iVar8 = CowData<String>::resize<false>((CowData<String> *)&local_c0,1);
      if (iVar8 == 0) {
        if (local_c0 == (CowData<char32_t> *)0x0) {
          lVar13 = 0;
        }
        else {
          lVar13 = *(long *)(local_c0 + -8);
          if (0 < lVar13) {
            CowData<String>::_copy_on_write((CowData<String> *)&local_c0);
            if (local_78 != *(long *)local_c0) {
              CowData<char32_t>::_ref(local_c0,(CowData *)&local_78);
            }
            goto LAB_00111b79;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,0,lVar13,"p_index","size()","",false,
                   false);
      }
LAB_00111b79:
      local_d0 = 0;
      local_b8 = "index";
      local_b0 = 5;
      String::parse_latin1((StrRange *)&local_d0);
      local_b8 = "constructors";
      local_d8 = 0;
      local_b0 = 0xc;
      String::parse_latin1((StrRange *)&local_d8);
      local_b8 = "name";
      local_e0 = 0;
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_e0);
      local_b8 = "builtin_classes";
      local_e8 = 0;
      local_b0 = 0xf;
      String::parse_latin1((StrRange *)&local_e8);
      cVar5 = compare_sub_dict_array
                        ((HashSet *)local_a8,(String *)&local_e8,(String *)&local_e0,
                         (Dictionary *)local_f8,(Dictionary *)local_f0,(String *)&local_d8,
                         (String *)&local_d0,(Vector *)&local_c8,false,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<String>::_unref((CowData<String> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = 0;
      local_b0 = 5;
      if (cVar5 == '\0') {
        bVar7 = bVar6;
      }
      local_b8 = "value";
      String::parse_latin1((StrRange *)&local_78);
      local_c0 = (CowData<char32_t> *)0x0;
      iVar8 = CowData<String>::resize<false>((CowData<String> *)&local_c0,1);
      if (iVar8 == 0) {
        if (local_c0 == (CowData<char32_t> *)0x0) {
          lVar13 = 0;
        }
        else {
          lVar13 = *(long *)(local_c0 + -8);
          if (0 < lVar13) {
            CowData<String>::_copy_on_write((CowData<String> *)&local_c0);
            if (local_78 != *(long *)local_c0) {
              CowData<char32_t>::_ref(local_c0,(CowData *)&local_78);
            }
            goto LAB_00111d55;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,0,lVar13,"p_index","size()","",false,
                   false);
      }
LAB_00111d55:
      local_d0 = 0;
      local_b8 = "name";
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_d0);
      local_b8 = "constants";
      local_d8 = 0;
      local_b0 = 9;
      String::parse_latin1((StrRange *)&local_d8);
      local_b8 = "name";
      local_e0 = 0;
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_e0);
      local_b8 = "classes";
      local_e8 = 0;
      local_b0 = 7;
      String::parse_latin1((StrRange *)&local_e8);
      cVar5 = compare_sub_dict_array
                        ((HashSet *)local_a8,(String *)&local_e8,(String *)&local_e0,
                         (Dictionary *)local_f8,(Dictionary *)local_f0,(String *)&local_d8,
                         (String *)&local_d0,(Vector *)&local_c8,false,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<String>::_unref((CowData<String> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = 0;
      local_b0 = 0xb;
      if (cVar5 == '\0') {
        bVar7 = bVar6;
      }
      local_b8 = "is_bitfield";
      String::parse_latin1((StrRange *)&local_78);
      local_70 = 0;
      local_b8 = "$values";
      local_b0 = 7;
      String::parse_latin1((StrRange *)&local_70);
      local_c0 = (CowData<char32_t> *)0x0;
      iVar8 = CowData<String>::resize<false>((CowData<String> *)&local_c0,2);
      if (iVar8 == 0) {
        lVar13 = 0;
        pVVar10 = (Variant *)&local_78;
        do {
          if (local_c0 == (CowData<char32_t> *)0x0) {
            lVar15 = 0;
LAB_00112c3b:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar13,lVar15,"p_index","size()","",
                       false,false);
          }
          else {
            lVar15 = *(long *)((long)local_c0 + -8);
            if (lVar15 <= lVar13) goto LAB_00112c3b;
            CowData<String>::_copy_on_write((CowData<String> *)&local_c0);
            pCVar18 = (CowData<char32_t> *)((long)local_c0 + lVar13 * 8);
            if (*(long *)pCVar18 != *(long *)pVVar10) {
              CowData<char32_t>::_ref(pCVar18,(CowData *)pVVar10);
            }
          }
          pVVar10 = (Variant *)((CowData *)pVVar10 + 8);
          if (lVar13 != 0) break;
          lVar13 = 1;
        } while( true );
      }
      local_d0 = 0;
      local_b8 = "name";
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_d0);
      local_b8 = "enums";
      local_d8 = 0;
      local_b0 = 5;
      String::parse_latin1((StrRange *)&local_d8);
      local_b8 = "name";
      local_e0 = 0;
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_e0);
      local_b8 = "classes";
      local_e8 = 0;
      local_b0 = 7;
      String::parse_latin1((StrRange *)&local_e8);
      cVar5 = compare_sub_dict_array
                        ((HashSet *)local_a8,(String *)&local_e8,(String *)&local_e0,
                         (Dictionary *)local_f8,(Dictionary *)local_f0,(String *)&local_d8,
                         (String *)&local_d0,(Vector *)&local_c8,false,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<String>::_unref((CowData<String> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = 0;
      local_b0 = 10;
      if (cVar5 == '\0') {
        bVar7 = bVar6;
      }
      local_b8 = "is_virtual";
      String::parse_latin1((StrRange *)&local_78);
      local_b8 = "is_vararg";
      local_70 = 0;
      local_b0 = 9;
      String::parse_latin1((StrRange *)&local_70);
      local_b8 = "is_static";
      local_68 = 0;
      local_b0 = 9;
      String::parse_latin1((StrRange *)&local_68);
      local_b8 = "is_const";
      local_60 = 0;
      local_b0 = 8;
      String::parse_latin1((StrRange *)&local_60);
      local_b8 = "*return_value";
      local_58 = 0;
      local_b0 = 0xd;
      String::parse_latin1(this);
      local_50 = 0;
      local_b8 = "*@arguments";
      local_b0 = 0xb;
      String::parse_latin1((StrRange *)&local_50);
      local_c0 = (CowData<char32_t> *)0x0;
      iVar8 = CowData<String>::resize<false>((CowData<String> *)&local_c0,6);
      if (iVar8 == 0) {
        lVar13 = 0;
        pVVar10 = (Variant *)&local_78;
        do {
          if (local_c0 == (CowData<char32_t> *)0x0) {
            lVar15 = 0;
LAB_00112bf3:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar13,lVar15,"p_index","size()","",
                       false,false);
          }
          else {
            lVar15 = *(long *)((long)local_c0 + -8);
            if (lVar15 <= lVar13) goto LAB_00112bf3;
            CowData<String>::_copy_on_write((CowData<String> *)&local_c0);
            pCVar18 = (CowData<char32_t> *)((long)local_c0 + lVar13 * 8);
            if (*(long *)pCVar18 != *(long *)pVVar10) {
              CowData<char32_t>::_ref(pCVar18,(CowData *)pVVar10);
            }
          }
          lVar13 = lVar13 + 1;
          pVVar10 = (Variant *)((CowData *)pVVar10 + 8);
        } while (lVar13 != 6);
      }
      local_d0 = 0;
      local_b8 = "name";
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_d0);
      local_b8 = "methods";
      local_d8 = 0;
      local_b0 = 7;
      String::parse_latin1((StrRange *)&local_d8);
      local_b8 = "name";
      local_e0 = 0;
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_e0);
      local_b8 = "classes";
      local_e8 = 0;
      local_b0 = 7;
      String::parse_latin1((StrRange *)&local_e8);
      cVar5 = compare_sub_dict_array
                        ((HashSet *)local_a8,(String *)&local_e8,(String *)&local_e0,
                         (Dictionary *)local_f8,(Dictionary *)local_f0,(String *)&local_d8,
                         (String *)&local_d0,(Vector *)&local_c8,true,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      pCVar18 = local_48;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<String>::_unref((CowData<String> *)&local_c0);
      do {
        pCVar18 = pCVar18 + -8;
        CowData<char32_t>::_unref(pCVar18);
      } while (pCVar18 != (CowData<char32_t> *)&local_78);
      local_78 = 0;
      local_b0 = 0xb;
      if (cVar5 == '\0') {
        bVar7 = bVar6;
      }
      local_b8 = "*@arguments";
      String::parse_latin1((StrRange *)&local_78);
      local_c0 = (CowData<char32_t> *)0x0;
      iVar8 = CowData<String>::resize<false>((CowData<String> *)&local_c0,1);
      if (iVar8 == 0) {
        if (local_c0 == (CowData<char32_t> *)0x0) {
          lVar13 = 0;
        }
        else {
          lVar13 = *(long *)(local_c0 + -8);
          if (0 < lVar13) {
            CowData<String>::_copy_on_write((CowData<String> *)&local_c0);
            if (*(long *)local_c0 != local_78) {
              CowData<char32_t>::_ref(local_c0,(CowData *)&local_78);
            }
            goto LAB_00112479;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,0,lVar13,"p_index","size()","",false,
                   false);
      }
LAB_00112479:
      local_d0 = 0;
      local_b8 = "name";
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_d0);
      local_b8 = "signals";
      local_d8 = 0;
      local_b0 = 7;
      String::parse_latin1((StrRange *)&local_d8);
      local_b8 = "name";
      local_e0 = 0;
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_e0);
      local_b8 = "classes";
      local_e8 = 0;
      local_b0 = 7;
      String::parse_latin1((StrRange *)&local_e8);
      cVar5 = compare_sub_dict_array
                        ((HashSet *)local_a8,(String *)&local_e8,(String *)&local_e0,
                         (Dictionary *)local_f8,(Dictionary *)local_f0,(String *)&local_d8,
                         (String *)&local_d0,(Vector *)&local_c8,false,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<String>::_unref((CowData<String> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = 0;
      local_b0 = 4;
      if (cVar5 == '\0') {
        bVar7 = bVar6;
      }
      local_b8 = "type";
      String::parse_latin1((StrRange *)&local_78);
      local_b8 = "*setter";
      local_70 = 0;
      local_b0 = 7;
      String::parse_latin1((StrRange *)&local_70);
      local_b8 = "*getter";
      local_68 = 0;
      local_b0 = 7;
      String::parse_latin1((StrRange *)&local_68);
      local_60 = 0;
      local_b8 = "*index";
      local_b0 = 6;
      String::parse_latin1((StrRange *)&local_60);
      local_c0 = (CowData<char32_t> *)0x0;
      iVar8 = CowData<String>::resize<false>((CowData<String> *)&local_c0,4);
      if (iVar8 == 0) {
        lVar13 = 0;
        pVVar10 = (Variant *)&local_78;
        do {
          if (local_c0 == (CowData<char32_t> *)0x0) {
            lVar15 = 0;
LAB_00112c83:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar13,lVar15,"p_index","size()","",
                       false,false);
          }
          else {
            lVar15 = *(long *)((long)local_c0 + -8);
            if (lVar15 <= lVar13) goto LAB_00112c83;
            CowData<String>::_copy_on_write((CowData<String> *)&local_c0);
            pCVar18 = (CowData<char32_t> *)((long)local_c0 + lVar13 * 8);
            if (*(long *)pCVar18 != *(long *)pVVar10) {
              CowData<char32_t>::_ref(pCVar18,(CowData *)pVVar10);
            }
          }
          lVar13 = lVar13 + 1;
          pVVar10 = (Variant *)((CowData *)pVVar10 + 8);
        } while (lVar13 != 4);
      }
      local_d0 = 0;
      local_b8 = "name";
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_d0);
      local_b8 = "properties";
      local_d8 = 0;
      local_b0 = 10;
      String::parse_latin1((StrRange *)&local_d8);
      local_b8 = "name";
      local_e0 = 0;
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_e0);
      local_b8 = "classes";
      local_e8 = 0;
      local_b0 = 7;
      String::parse_latin1((StrRange *)&local_e8);
      cVar5 = compare_sub_dict_array
                        ((HashSet *)local_a8,(String *)&local_e8,(String *)&local_e0,
                         (Dictionary *)local_f8,(Dictionary *)local_f0,(String *)&local_d8,
                         (String *)&local_d0,(Vector *)&local_c8,false,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<String>::_unref((CowData<String> *)&local_c0);
      do {
        this = this + -8;
        CowData<char32_t>::_unref((CowData<char32_t> *)this);
      } while (this != (StrRange *)&local_78);
      local_d0 = 0;
      local_78 = 0;
      if (cVar5 == '\0') {
        bVar7 = bVar6;
      }
      local_b0 = 4;
      local_b8 = "type";
      String::parse_latin1((StrRange *)&local_78);
      local_c0 = (CowData<char32_t> *)0x0;
      iVar8 = CowData<String>::resize<false>((CowData<String> *)&local_c0,1);
      if (iVar8 == 0) {
        if (local_c0 == (CowData<char32_t> *)0x0) {
          lVar13 = 0;
        }
        else {
          lVar13 = *(long *)(local_c0 + -8);
          if (0 < lVar13) {
            CowData<String>::_copy_on_write((CowData<String> *)&local_c0);
            if (*(long *)local_c0 != local_78) {
              CowData<char32_t>::_ref(local_c0,(CowData *)&local_78);
            }
            goto LAB_001128f8;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,0,lVar13,"p_index","size()","",false,
                   false);
      }
LAB_001128f8:
      local_d8 = 0;
      local_b8 = "name";
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_d8);
      local_e0 = 0;
      local_b8 = "singletons";
      local_b0 = 10;
      String::parse_latin1((StrRange *)&local_e0);
      cVar5 = compare_dict_array((Dictionary *)local_f8,(Dictionary *)local_f0,(String *)&local_e0,
                                 (String *)&local_d8,(Vector *)&local_c8,false,(String *)&local_d0,
                                 false,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<String>::_unref((CowData<String> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      local_d0 = 0;
      local_78 = 0;
      local_b0 = 6;
      if (cVar5 == '\0') {
        bVar7 = bVar6;
      }
      local_b8 = "format";
      String::parse_latin1((StrRange *)&local_78);
      local_c0 = (CowData<char32_t> *)0x0;
      iVar8 = CowData<String>::resize<false>((CowData<String> *)&local_c0,1);
      if (iVar8 == 0) {
        if (local_c0 == (CowData<char32_t> *)0x0) {
          lVar13 = 0;
        }
        else {
          lVar13 = *(long *)(local_c0 + -8);
          if (0 < lVar13) {
            CowData<String>::_copy_on_write((CowData<String> *)&local_c0);
            if (*(long *)local_c0 != local_78) {
              CowData<char32_t>::_ref(local_c0,(CowData *)&local_78);
            }
            goto LAB_00112a6e;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,0,lVar13,"p_index","size()","",false,
                   false);
      }
LAB_00112a6e:
      local_d8 = 0;
      local_b8 = "name";
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_d8);
      local_e0 = 0;
      local_b8 = "native_structures";
      local_b0 = 0x11;
      String::parse_latin1((StrRange *)&local_e0);
      cVar5 = compare_dict_array((Dictionary *)local_f8,(Dictionary *)local_f0,(String *)&local_e0,
                                 (String *)&local_d8,(Vector *)&local_c8,false,(String *)&local_d0,
                                 false,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<String>::_unref((CowData<String> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      if ((cVar5 != '\x01') || (bVar7 != 0)) {
        local_15c = 0x1e;
      }
      uVar12 = local_a8._0_8_;
      if ((CowData<char32_t> *)local_a8._0_8_ != (CowData<char32_t> *)0x0) {
        uVar14 = (ulong)local_88._4_4_;
        uVar4 = local_98._8_8_;
        if (local_88._4_4_ != 0) {
          if (*(uint *)(hash_table_size_primes + (local_88 & 0xffffffff) * 4) != 0) {
            memset((void *)local_98._8_8_,0,
                   (ulong)*(uint *)(hash_table_size_primes + (local_88 & 0xffffffff) * 4) << 2);
          }
          pCVar18 = (CowData<char32_t> *)uVar12;
          do {
            pCVar16 = pCVar18 + 8;
            CowData<char32_t>::_unref(pCVar18);
            pCVar18 = pCVar16;
          } while (pCVar16 != (CowData<char32_t> *)(uVar12 + uVar14 * 8));
        }
        Memory::free_static((void *)uVar12,false);
        Memory::free_static((void *)local_98._0_8_,false);
        Memory::free_static((void *)local_a8._8_8_,false);
        Memory::free_static((void *)uVar4,false);
      }
    }
    Dictionary::~Dictionary((Dictionary *)local_f0);
    Dictionary::~Dictionary((Dictionary *)local_f8);
  }
  else {
    local_d0 = 0;
    if (*(long *)(pSVar3 + 0x260) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)(pSVar3 + 0x260));
    }
    uVar2 = *(undefined4 *)(pSVar3 + 0x268);
    local_b8 = (char *)0x0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)param_1);
    }
    local_c8 = 0;
    local_a8._8_8_ = 0x3a;
    local_a8._0_8_ = "Validate extension JSON: Error parsing \'%s\' at line %d: %s";
    String::parse_latin1((StrRange *)&local_c8);
    vformat<String,int,String>
              ((CowData<char32_t> *)local_a8,(StrRange *)&local_c8,(CowData<char32_t> *)&local_b8,
               uVar2,(CowData<char32_t> *)&local_d0);
    _err_print_error("validate_extension_json_file","core/extension/extension_api_dump.cpp",0x633,
                     (CowData<char32_t> *)local_a8,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  }
  cVar5 = RefCounted::unreference();
  if ((cVar5 != '\0') && (cVar5 = predelete_handler((Object *)pSVar3), cVar5 != '\0')) {
    (**(code **)(*(long *)pSVar3 + 0x140))(pSVar3);
    Memory::free_static(pSVar3,false);
  }
LAB_00110816:
  lVar13 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_15c;
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



/* MethodBind::is_vararg() const */

undefined8 MethodBind::is_vararg(void)

{
  return 0;
}



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* JSON::is_class_ptr(void*) const */

uint __thiscall JSON::is_class_ptr(JSON *this,void *param_1)

{
  return (uint)CONCAT71(0x120f,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x120f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x120f,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x120f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* JSON::_getv(StringName const&, Variant&) const */

undefined8 JSON::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JSON::_setv(StringName const&, Variant const&) */

undefined8 JSON::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JSON::_validate_propertyv(PropertyInfo&) const */

void JSON::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* JSON::_property_can_revertv(StringName const&) const */

undefined8 JSON::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* JSON::_property_get_revertv(StringName const&, Variant&) const */

undefined8 JSON::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JSON::_notificationv(int, bool) */

void JSON::_notificationv(int param_1,bool param_2)

{
  return;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::adjust_heap(long, long,
   long, List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::adjust_heap(long param_1,long param_2,long param_3,Element *param_4,Element **param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  Element *pEVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  Element **ppEVar9;
  long lVar10;
  Element *pEVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  
  lVar12 = param_2 * 2 + 2;
  lVar16 = param_2;
  if (lVar12 < param_3) {
    do {
      lVar10 = lVar12 + -1;
      ppEVar9 = param_5 + lVar10 + param_1;
      pEVar11 = *ppEVar9;
      pEVar3 = param_5[param_1 + lVar12];
      lVar13 = *(long *)pEVar11;
      lVar6 = *(long *)pEVar3;
      if (lVar6 == 0) {
        if (lVar13 != 0) {
          pbVar14 = *(byte **)(lVar13 + 8);
          uVar8 = 0;
          pbVar15 = &_LC24;
LAB_001142d4:
          if (pbVar14 == (byte *)0x0) {
            lVar6 = 0;
            uVar4 = **(uint **)(lVar13 + 0x10);
            if (uVar4 != 0 || uVar8 != 0) {
              do {
                if (uVar8 == 0) goto LAB_00114280;
                if (uVar4 == 0) break;
                if (uVar8 < uVar4) goto LAB_00114280;
                if (uVar4 < uVar8) break;
                uVar8 = (uint)(char)pbVar15[lVar6 + 1];
                uVar4 = (*(uint **)(lVar13 + 0x10))[lVar6 + 1];
                lVar6 = lVar6 + 1;
              } while (uVar8 != 0 || uVar4 != 0);
            }
          }
          else {
            uVar4 = (uint)(char)*pbVar14;
            bVar5 = (byte)uVar8 | *pbVar14;
LAB_00114326:
            if (bVar5 != 0) {
              lVar13 = 1;
              do {
                if (uVar8 == 0) goto LAB_00114280;
                if (uVar4 == 0) break;
                if (uVar8 < uVar4) goto LAB_00114280;
                if (uVar4 < uVar8) break;
                pbVar1 = pbVar14 + lVar13;
                uVar4 = (uint)(char)*pbVar1;
                pbVar2 = pbVar15 + lVar13;
                uVar8 = (uint)(char)*pbVar2;
                lVar13 = lVar13 + 1;
              } while (*pbVar1 != 0 || *pbVar2 != 0);
            }
          }
        }
      }
      else {
        pbVar15 = *(byte **)(lVar6 + 8);
        if (lVar13 == 0) {
          if (pbVar15 != (byte *)0x0) {
            bVar5 = *pbVar15;
            uVar8 = (uint)(char)bVar5;
            pbVar14 = &_LC24;
            uVar4 = 0;
            goto LAB_00114326;
          }
          uVar8 = 0;
          pbVar14 = &_LC24;
        }
        else {
          pbVar14 = *(byte **)(lVar13 + 8);
          if (pbVar15 != (byte *)0x0) {
            uVar8 = (uint)(char)*pbVar15;
            goto LAB_001142d4;
          }
          if (pbVar14 == (byte *)0x0) {
            lVar7 = 4;
            uVar8 = **(uint **)(lVar13 + 0x10);
            uVar4 = **(uint **)(lVar6 + 0x10);
            if (uVar8 != 0 || uVar4 != 0) {
              do {
                if (uVar4 == 0) goto LAB_00114280;
                if (uVar8 == 0) break;
                if (uVar4 < uVar8) goto LAB_00114280;
                if (uVar8 < uVar4) break;
                uVar4 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
                uVar8 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar7);
                lVar7 = lVar7 + 4;
              } while (uVar4 != 0 || uVar8 != 0);
            }
            goto LAB_001142a8;
          }
          uVar8 = (uint)(char)*pbVar14;
        }
        lVar13 = 0;
        uVar4 = **(uint **)(lVar6 + 0x10);
        if (uVar4 != 0 || uVar8 != 0) {
          do {
            if (uVar4 == 0) goto LAB_00114280;
            if (uVar8 == 0) break;
            if (uVar4 < uVar8) goto LAB_00114280;
            if (uVar8 < uVar4) break;
            uVar4 = (*(uint **)(lVar6 + 0x10))[lVar13 + 1];
            uVar8 = (uint)(char)pbVar14[lVar13 + 1];
            lVar13 = lVar13 + 1;
          } while (uVar4 != 0 || uVar8 != 0);
        }
      }
LAB_001142a8:
      ppEVar9 = param_5 + param_1 + lVar12;
      lVar10 = lVar12;
      pEVar11 = pEVar3;
      lVar12 = lVar12 + 1;
LAB_00114280:
      lVar12 = lVar12 * 2;
      param_5[param_1 + lVar16] = pEVar11;
      lVar16 = lVar10;
    } while (lVar12 < param_3);
    if (lVar12 == param_3) goto LAB_001146ad;
  }
  else {
    ppEVar9 = param_5 + param_2 + param_1;
    if (lVar12 != param_3) goto LAB_001144aa;
LAB_001146ad:
    lVar10 = lVar12 + -1;
    *ppEVar9 = param_5[param_1 + lVar10];
    ppEVar9 = param_5 + param_1 + lVar10;
  }
  lVar12 = (lVar10 + -1) - (lVar10 + -1 >> 0x3f);
  if (param_2 < lVar10) {
    lVar16 = *(long *)param_4;
    while( true ) {
      lVar13 = lVar12 >> 1;
      pEVar11 = param_5[param_1 + lVar13];
      lVar12 = *(long *)pEVar11;
      if (lVar12 == 0) break;
      pbVar15 = *(byte **)(lVar12 + 8);
      if (lVar16 == 0) {
        uVar8 = 0;
        pbVar14 = &_LC24;
        if (pbVar15 != (byte *)0x0) {
          bVar5 = *pbVar15;
          uVar8 = (uint)(char)bVar5;
          uVar4 = 0;
          pbVar14 = &_LC24;
          goto LAB_0011452a;
        }
LAB_0011458a:
        uVar4 = **(uint **)(lVar12 + 0x10);
        if (uVar4 == 0 && uVar8 == 0) goto LAB_001144a0;
        lVar6 = 0;
        while (uVar4 != 0) {
          if (uVar8 == 0) goto LAB_001144a0;
          if (uVar4 < uVar8) break;
          if (uVar8 < uVar4) goto LAB_001144a0;
          uVar4 = (*(uint **)(lVar12 + 0x10))[lVar6 + 1];
          uVar8 = (uint)(char)pbVar14[lVar6 + 1];
          lVar6 = lVar6 + 1;
          if (uVar4 == 0 && uVar8 == 0) goto LAB_001144a0;
        }
      }
      else {
        pbVar14 = *(byte **)(lVar16 + 8);
        if (pbVar15 == (byte *)0x0) {
          if (pbVar14 != (byte *)0x0) {
            uVar8 = (uint)(char)*pbVar14;
            goto LAB_0011458a;
          }
          uVar8 = **(uint **)(lVar16 + 0x10);
          uVar4 = **(uint **)(lVar12 + 0x10);
          if (uVar8 == 0 && uVar4 == 0) goto LAB_001144a0;
          lVar6 = 4;
          while (uVar4 != 0) {
            if (uVar8 == 0) goto LAB_001144a0;
            if (uVar4 < uVar8) break;
            if (uVar8 < uVar4) goto LAB_001144a0;
            uVar4 = *(uint *)((long)*(uint **)(lVar12 + 0x10) + lVar6);
            uVar8 = *(uint *)((long)*(uint **)(lVar16 + 0x10) + lVar6);
            lVar6 = lVar6 + 4;
            if (uVar4 == 0 && uVar8 == 0) {
              param_5[param_1 + lVar10] = param_4;
              return;
            }
          }
        }
        else {
          uVar4 = (uint)(char)*pbVar15;
          uVar8 = uVar4;
          if (pbVar14 == (byte *)0x0) goto LAB_001144d5;
LAB_00114524:
          uVar4 = (uint)(char)*pbVar14;
          bVar5 = (byte)uVar8 | *pbVar14;
LAB_0011452a:
          if (bVar5 == 0) goto LAB_001144a0;
          lVar12 = 1;
          while (uVar8 != 0) {
            if (uVar4 == 0) goto LAB_001144a0;
            if (uVar8 < uVar4) break;
            if (uVar4 < uVar8) goto LAB_001144a0;
            pbVar1 = pbVar14 + lVar12;
            uVar4 = (uint)(char)*pbVar1;
            pbVar2 = pbVar15 + lVar12;
            uVar8 = (uint)(char)*pbVar2;
            lVar12 = lVar12 + 1;
            if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_001144a0;
          }
        }
      }
LAB_00114470:
      param_5[lVar10 + param_1] = pEVar11;
      lVar12 = (lVar13 + -1) - (lVar13 + -1 >> 0x3f);
      lVar10 = lVar13;
      if (lVar13 <= param_2) {
        param_5[param_1 + lVar13] = param_4;
        return;
      }
    }
    if (lVar16 != 0) {
      pbVar14 = *(byte **)(lVar16 + 8);
      uVar4 = 0;
      uVar8 = 0;
      pbVar15 = &_LC24;
      if (pbVar14 != (byte *)0x0) goto LAB_00114524;
LAB_001144d5:
      uVar8 = **(uint **)(lVar16 + 0x10);
      if (uVar8 != 0 || uVar4 != 0) {
        lVar12 = 0;
        while (uVar4 != 0) {
          if (uVar8 == 0) goto LAB_001144a0;
          if (uVar4 < uVar8) break;
          if (uVar8 < uVar4) goto LAB_001144a0;
          uVar4 = (uint)(char)pbVar15[lVar12 + 1];
          uVar8 = (*(uint **)(lVar16 + 0x10))[lVar12 + 1];
          lVar12 = lVar12 + 1;
          if (uVar4 == 0 && uVar8 == 0) goto LAB_001144a0;
        }
        goto LAB_00114470;
      }
    }
LAB_001144a0:
    ppEVar9 = param_5 + lVar10 + param_1;
  }
LAB_001144aa:
  *ppEVar9 = param_4;
  return;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,
   true>::unguarded_linear_insert(long, List<StringName, DefaultAllocator>::Element*,
   List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::unguarded_linear_insert(long param_1,Element *param_2,Element **param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  Element *pEVar10;
  byte *pbVar11;
  
  lVar3 = *(long *)param_2;
LAB_00114770:
  pEVar10 = param_3[param_1 + -1];
  lVar5 = *(long *)pEVar10;
  if (lVar3 != 0) {
    pbVar9 = *(byte **)(lVar3 + 8);
    do {
      if (lVar5 == 0) {
        if (pbVar9 != (byte *)0x0) goto code_r0x00114821;
        uVar7 = 0;
        pbVar11 = &_LC24;
LAB_001147ac:
        uVar8 = **(uint **)(lVar3 + 0x10);
        if (uVar8 == 0 && uVar7 == 0) goto LAB_0011493b;
        lVar5 = 0;
        while (uVar8 != 0) {
          if (uVar7 == 0) goto LAB_0011493b;
          if (uVar8 < uVar7) break;
          if (uVar7 < uVar8) goto LAB_0011493b;
          uVar8 = (*(uint **)(lVar3 + 0x10))[lVar5 + 1];
          uVar7 = (uint)(char)pbVar11[lVar5 + 1];
          lVar5 = lVar5 + 1;
          if (uVar8 == 0 && uVar7 == 0) goto LAB_0011493b;
        }
      }
      else {
        pbVar11 = *(byte **)(lVar5 + 8);
        if (pbVar9 != (byte *)0x0) {
          uVar7 = (uint)(char)*pbVar9;
          goto LAB_0011484c;
        }
        if (pbVar11 != (byte *)0x0) {
          uVar7 = (uint)(char)*pbVar11;
          goto LAB_001147ac;
        }
        uVar7 = **(uint **)(lVar5 + 0x10);
        uVar8 = **(uint **)(lVar3 + 0x10);
        if (uVar7 == 0 && uVar8 == 0) goto LAB_0011493b;
        lVar6 = 4;
        while (uVar8 != 0) {
          if (uVar7 == 0) goto LAB_0011493b;
          if (uVar8 < uVar7) break;
          if (uVar7 < uVar8) goto LAB_0011493b;
          uVar8 = *(uint *)((long)*(uint **)(lVar3 + 0x10) + lVar6);
          uVar7 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar6);
          lVar6 = lVar6 + 4;
          if (uVar8 == 0 && uVar7 == 0) goto LAB_0011493b;
        }
      }
      if (param_1 == 1) goto LAB_00114910;
      param_3[param_1] = pEVar10;
      pEVar10 = param_3[param_1 + -2];
      lVar5 = *(long *)pEVar10;
      param_1 = param_1 + -1;
    } while( true );
  }
  if (lVar5 != 0) {
    pbVar11 = *(byte **)(lVar5 + 8);
    uVar7 = 0;
    pbVar9 = &_LC24;
LAB_0011484c:
    if (pbVar11 != (byte *)0x0) {
      uVar8 = (uint)(char)*pbVar11;
      bVar4 = (byte)uVar7 | *pbVar11;
      goto LAB_001148bf;
    }
    uVar8 = **(uint **)(lVar5 + 0x10);
    if (uVar8 != 0 || uVar7 != 0) {
      lVar6 = 0;
      while (uVar7 != 0) {
        if (uVar8 == 0) goto LAB_0011493b;
        if (uVar7 < uVar8) break;
        if (uVar8 < uVar7) goto LAB_0011493b;
        uVar7 = (uint)(char)pbVar9[lVar6 + 1];
        uVar8 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
        lVar6 = lVar6 + 1;
        if (uVar7 == 0 && uVar8 == 0) goto LAB_0011493b;
      }
      goto LAB_001148a0;
    }
  }
  goto LAB_0011493b;
code_r0x00114821:
  bVar4 = *pbVar9;
  uVar7 = (uint)(char)bVar4;
  pbVar11 = &_LC24;
  uVar8 = 0;
LAB_001148bf:
  if (bVar4 == 0) goto LAB_0011493b;
  lVar5 = 1;
  while (uVar7 != 0) {
    if (uVar8 == 0) goto LAB_0011493b;
    if (uVar7 < uVar8) break;
    if (uVar8 < uVar7) goto LAB_0011493b;
    pbVar1 = pbVar9 + lVar5;
    uVar7 = (uint)(char)*pbVar1;
    pbVar2 = pbVar11 + lVar5;
    uVar8 = (uint)(char)*pbVar2;
    lVar5 = lVar5 + 1;
    if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_0011493b;
  }
LAB_001148a0:
  if (param_1 == 1) {
LAB_00114910:
    _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                     "bad comparison function; sorting will be broken",0,0);
    param_1 = 1;
LAB_0011493b:
    param_3[param_1] = param_2;
    return;
  }
  param_3[param_1] = pEVar10;
  param_1 = param_1 + -1;
  goto LAB_00114770;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::linear_insert(long, long,
   List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::linear_insert(long param_1,long param_2,Element **param_3)

{
  Element **__src;
  byte *pbVar1;
  byte *pbVar2;
  Element *pEVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  __src = param_3 + param_1;
  pEVar3 = param_3[param_2];
  lVar6 = *(long *)pEVar3;
  lVar5 = *(long *)*__src;
  if (lVar6 == 0) {
    if (lVar5 == 0) goto LAB_00114b10;
    pbVar10 = *(byte **)(lVar5 + 8);
    uVar8 = 0;
    pbVar11 = &_LC24;
LAB_00114ac4:
    if (pbVar10 == (byte *)0x0) {
      uVar9 = **(uint **)(lVar5 + 0x10);
      if (uVar8 != 0 || uVar9 != 0) {
        lVar6 = 0;
        do {
          if (uVar8 == 0) goto LAB_00114a60;
          if (uVar9 == 0) break;
          if (uVar8 < uVar9) goto LAB_00114a60;
          if (uVar9 < uVar8) break;
          uVar8 = (uint)(char)pbVar11[lVar6 + 1];
          uVar9 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
          lVar6 = lVar6 + 1;
        } while (uVar8 != 0 || uVar9 != 0);
      }
      goto LAB_00114b10;
    }
    uVar9 = (uint)(char)*pbVar10;
    bVar4 = (byte)uVar8 | *pbVar10;
LAB_00114b37:
    if (bVar4 != 0) {
      lVar6 = 1;
      do {
        if (uVar8 == 0) goto LAB_00114a60;
        if (uVar9 == 0) break;
        if (uVar8 < uVar9) goto LAB_00114a60;
        if (uVar9 < uVar8) break;
        pbVar2 = pbVar11 + lVar6;
        uVar8 = (uint)(char)*pbVar2;
        pbVar1 = pbVar10 + lVar6;
        uVar9 = (uint)(char)*pbVar1;
        lVar6 = lVar6 + 1;
      } while (*pbVar2 != 0 || *pbVar1 != 0);
    }
  }
  else {
    pbVar11 = *(byte **)(lVar6 + 8);
    if (lVar5 == 0) {
      if (pbVar11 != (byte *)0x0) {
        bVar4 = *pbVar11;
        uVar8 = (uint)(char)bVar4;
        pbVar10 = &_LC24;
        uVar9 = 0;
        goto LAB_00114b37;
      }
      uVar8 = 0;
      pbVar10 = &_LC24;
    }
    else {
      pbVar10 = *(byte **)(lVar5 + 8);
      if (pbVar11 != (byte *)0x0) {
        uVar8 = (uint)(char)*pbVar11;
        goto LAB_00114ac4;
      }
      if (pbVar10 == (byte *)0x0) {
        uVar8 = **(uint **)(lVar5 + 0x10);
        uVar9 = **(uint **)(lVar6 + 0x10);
        if (uVar8 != 0 || uVar9 != 0) {
          lVar7 = 4;
          do {
            if (uVar9 == 0) goto LAB_00114a60;
            if (uVar8 == 0) break;
            if (uVar9 < uVar8) goto LAB_00114a60;
            if (uVar8 < uVar9) break;
            uVar9 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
            uVar8 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar7);
            lVar7 = lVar7 + 4;
          } while (uVar9 != 0 || uVar8 != 0);
        }
        goto LAB_00114b10;
      }
      uVar8 = (uint)(char)*pbVar10;
    }
    uVar9 = **(uint **)(lVar6 + 0x10);
    if (uVar8 != 0 || uVar9 != 0) {
      lVar5 = 0;
      do {
        if (uVar9 == 0) {
LAB_00114a60:
          if (param_1 < param_2) {
            memmove(param_3 + param_1 + 1,__src,(param_2 - param_1) * 8);
          }
          *__src = pEVar3;
          return;
        }
        if (uVar8 == 0) break;
        if (uVar9 < uVar8) goto LAB_00114a60;
        if (uVar8 < uVar9) break;
        uVar9 = (*(uint **)(lVar6 + 0x10))[lVar5 + 1];
        uVar8 = (uint)(char)pbVar10[lVar5 + 1];
        lVar5 = lVar5 + 1;
      } while (uVar9 != 0 || uVar8 != 0);
    }
  }
LAB_00114b10:
  unguarded_linear_insert(param_2,pEVar3,param_3);
  return;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,
   true>::median_of_3(List<StringName, DefaultAllocator>::Element* const&, List<StringName,
   DefaultAllocator>::Element* const&, List<StringName, DefaultAllocator>::Element* const&) const
   [clone .isra.0] */

Element **
SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
::median_of_3(Element **param_1,Element **param_2,Element **param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  byte bVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  
  lVar8 = *(long *)*param_1;
  lVar9 = *(long *)*param_3;
  lVar13 = *(long *)*param_2;
  if (lVar8 == 0) {
    pbVar15 = &_LC24;
    pbVar16 = &_LC24;
    if (lVar13 == 0) {
LAB_00115520:
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
LAB_00114dee:
        uVar5 = (uint)(char)*pbVar16;
        uVar4 = uVar5;
        goto LAB_00114df4;
      }
      uVar5 = (uint)(char)*pbVar16;
      uVar6 = 0;
      uVar12 = 0;
      pbVar17 = &_LC24;
      if (*pbVar16 == 0) goto LAB_001150e9;
LAB_00114f42:
      lVar8 = 1;
      do {
        if (uVar5 == 0) {
          return param_1;
        }
        if (uVar6 == 0) break;
        if (uVar5 < uVar6) {
          return param_1;
        }
        if (uVar6 < uVar5) break;
        pbVar2 = pbVar16 + lVar8;
        uVar5 = (uint)(char)*pbVar2;
        pbVar1 = pbVar17 + lVar8;
        uVar6 = (uint)(char)*pbVar1;
        lVar8 = lVar8 + 1;
      } while (*pbVar2 != 0 || *pbVar1 != 0);
    }
    else {
      pbVar15 = *(byte **)(lVar13 + 8);
      uVar4 = 0;
      pbVar16 = &_LC24;
LAB_00114d72:
      if (pbVar15 != (byte *)0x0) {
        uVar12 = (uint)(char)*pbVar15;
        bVar11 = *pbVar15 | (byte)uVar4;
LAB_00114e60:
        if (bVar11 != 0) {
          lVar14 = 1;
          do {
            if (uVar4 == 0) goto joined_r0x00114ea8;
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) goto joined_r0x00114ea8;
            if (uVar12 < uVar4) break;
            pbVar17 = pbVar16 + lVar14;
            uVar4 = (uint)(char)*pbVar17;
            pbVar2 = pbVar15 + lVar14;
            uVar12 = (uint)(char)*pbVar2;
            lVar14 = lVar14 + 1;
          } while (*pbVar17 != 0 || *pbVar2 != 0);
          goto LAB_00114dd8;
        }
        goto LAB_00115520;
      }
      uVar12 = **(uint **)(lVar13 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar14 = 0;
        do {
          if (uVar4 == 0) goto joined_r0x00114ea8;
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) goto joined_r0x00114ea8;
          if (uVar12 < uVar4) break;
          uVar4 = (uint)(char)pbVar16[lVar14 + 1];
          uVar12 = (*(uint **)(lVar13 + 0x10))[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
        goto LAB_00114dd8;
      }
      if (lVar9 == 0) goto LAB_00115141;
      pbVar17 = *(byte **)(lVar9 + 8);
      uVar5 = 0;
LAB_00114df4:
      if (pbVar17 != (byte *)0x0) {
        uVar6 = (uint)(char)*pbVar17;
        bVar11 = (byte)uVar4 | *pbVar17;
        goto LAB_00114f39;
      }
      puVar10 = *(uint **)(lVar9 + 0x10);
      uVar4 = *puVar10;
      uVar6 = uVar4 | uVar5;
      if (uVar6 == 0) goto LAB_00115426;
      lVar8 = 0;
      do {
        if (uVar5 == 0) {
          return param_1;
        }
        if (uVar4 == 0) break;
        if (uVar5 < uVar4) {
          return param_1;
        }
        if (uVar4 < uVar5) break;
        uVar5 = (uint)(char)pbVar16[lVar8 + 1];
        uVar4 = puVar10[lVar8 + 1];
        lVar8 = lVar8 + 1;
      } while (uVar5 != 0 || uVar4 != 0);
    }
LAB_001150d0:
    if (pbVar15 == (byte *)0x0) {
      if (pbVar17 == (byte *)0x0) {
        puVar10 = *(uint **)(lVar9 + 0x10);
LAB_0011542f:
        uVar4 = *puVar10;
        uVar12 = **(uint **)(lVar13 + 0x10);
        if (uVar12 == 0 && uVar4 == 0) {
          return param_2;
        }
        lVar8 = 4;
        while( true ) {
          if (uVar12 == 0) {
            return param_3;
          }
          if (uVar4 == 0) {
            return param_2;
          }
          if (uVar12 < uVar4) {
            return param_3;
          }
          if (uVar4 < uVar12) break;
          uVar12 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar8);
          uVar4 = *(uint *)((long)puVar10 + lVar8);
          lVar8 = lVar8 + 4;
          if (uVar12 == 0 && uVar4 == 0) {
            return param_2;
          }
        }
        return param_2;
      }
      uVar12 = (uint)(char)*pbVar17;
LAB_001152b6:
      uVar4 = **(uint **)(lVar13 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar8 = 0;
        do {
          if (uVar4 == 0) {
            return param_3;
          }
          if (uVar12 == 0) {
            return param_2;
          }
          if (uVar4 < uVar12) {
            return param_3;
          }
          if (uVar12 < uVar4) {
            return param_2;
          }
          uVar4 = (*(uint **)(lVar13 + 0x10))[lVar8 + 1];
          uVar12 = (uint)(char)pbVar17[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
      }
      return param_2;
    }
    if (pbVar17 == (byte *)0x0) {
      puVar10 = *(uint **)(lVar9 + 0x10);
      uVar6 = *puVar10;
LAB_00115318:
      uVar4 = (uint)(char)*pbVar15;
      if (uVar4 == 0 && uVar6 == 0) {
        return param_2;
      }
      lVar8 = 0;
      while( true ) {
        if (uVar4 == 0) {
          return param_3;
        }
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar4 < uVar6) {
          return param_3;
        }
        if (uVar6 < uVar4) break;
        uVar4 = (uint)(char)pbVar15[lVar8 + 1];
        uVar6 = puVar10[lVar8 + 1];
        lVar8 = lVar8 + 1;
        if (uVar4 == 0 && uVar6 == 0) {
          return param_2;
        }
      }
      return param_2;
    }
    uVar12 = (uint)(char)*pbVar17;
    uVar5 = uVar12;
  }
  else {
    pbVar16 = *(byte **)(lVar8 + 8);
    if (lVar13 == 0) {
      if (pbVar16 != (byte *)0x0) {
        bVar11 = *pbVar16;
        uVar4 = (uint)(char)bVar11;
        uVar12 = 0;
        pbVar15 = &_LC24;
        goto LAB_00114e60;
      }
      uVar4 = 0;
      pbVar15 = &_LC24;
LAB_00114c52:
      uVar12 = **(uint **)(lVar8 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar14 = 0;
        do {
          if (uVar12 == 0) goto joined_r0x00114ea8;
          if (uVar4 == 0) break;
          if (uVar12 < uVar4) goto joined_r0x00114ea8;
          if (uVar4 < uVar12) break;
          uVar12 = (*(uint **)(lVar8 + 0x10))[lVar14 + 1];
          uVar4 = (uint)(char)pbVar15[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar12 != 0 || uVar4 != 0);
      }
LAB_00114dd8:
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
        if (pbVar16 != (byte *)0x0) goto LAB_00114dee;
        puVar7 = *(uint **)(lVar8 + 0x10);
        uVar4 = *puVar7;
LAB_001151d8:
        if (pbVar17 != (byte *)0x0) {
          uVar12 = (uint)(char)*pbVar17;
          uVar6 = uVar4 | uVar12;
          goto LAB_00115493;
        }
        puVar10 = *(uint **)(lVar9 + 0x10);
        uVar12 = *puVar10;
        uVar6 = uVar12 | uVar4;
        if (uVar6 != 0) {
          lVar8 = 4;
          do {
            if (uVar4 == 0) {
              return param_1;
            }
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) {
              return param_1;
            }
            if (uVar12 < uVar4) break;
            uVar4 = *(uint *)((long)puVar7 + lVar8);
            uVar12 = *(uint *)((long)puVar10 + lVar8);
            lVar8 = lVar8 + 4;
          } while (uVar4 != 0 || uVar12 != 0);
          goto LAB_001150d0;
        }
LAB_00115426:
        if (pbVar15 != (byte *)0x0) goto LAB_00115318;
        goto LAB_0011542f;
      }
      if (pbVar16 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar8 + 0x10);
        goto LAB_001154f1;
      }
LAB_00115141:
      bVar11 = *pbVar16;
      uVar5 = (uint)(char)bVar11;
      uVar6 = 0;
      pbVar17 = &_LC24;
LAB_00114f39:
      uVar12 = uVar6;
      if (bVar11 != 0) goto LAB_00114f42;
    }
    else {
      pbVar15 = *(byte **)(lVar13 + 8);
      if (pbVar16 != (byte *)0x0) {
        uVar4 = (uint)(char)*pbVar16;
        goto LAB_00114d72;
      }
      if (pbVar15 != (byte *)0x0) {
        uVar4 = (uint)(char)*pbVar15;
        goto LAB_00114c52;
      }
      puVar7 = *(uint **)(lVar8 + 0x10);
      uVar12 = **(uint **)(lVar13 + 0x10);
      uVar4 = *puVar7;
      if (uVar12 != 0 || uVar4 != 0) {
        lVar14 = 4;
        do {
          if (uVar4 == 0) {
LAB_00115048:
            pbVar16 = (byte *)0x0;
            goto joined_r0x00114ea8;
          }
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) goto LAB_00115048;
          if (uVar12 < uVar4) break;
          uVar4 = *(uint *)((long)puVar7 + lVar14);
          uVar12 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar14);
          lVar14 = lVar14 + 4;
        } while (uVar4 != 0 || uVar12 != 0);
        pbVar16 = (byte *)0x0;
        goto LAB_00114dd8;
      }
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
        uVar4 = 0;
        goto LAB_001151d8;
      }
LAB_001154f1:
      uVar4 = *puVar7;
      uVar12 = 0;
      pbVar17 = &_LC24;
      uVar6 = uVar4;
LAB_00115493:
      if (uVar6 != 0) {
        lVar8 = 0;
        do {
          if (uVar4 == 0) {
            return param_1;
          }
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) {
            return param_1;
          }
          if (uVar12 < uVar4) break;
          uVar4 = puVar7[lVar8 + 1];
          uVar12 = (uint)(char)pbVar17[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
        goto LAB_001150d0;
      }
    }
    uVar5 = uVar12;
    if (pbVar15 == (byte *)0x0) goto LAB_001152b6;
  }
LAB_001150e9:
  bVar11 = *pbVar15;
  if (bVar11 == 0 && (char)uVar5 == '\0') {
    return param_2;
  }
  lVar8 = 1;
  while( true ) {
    uVar4 = (uint)(char)bVar11;
    if (uVar4 == 0) {
      return param_3;
    }
    if (uVar12 == 0) {
      return param_2;
    }
    if (uVar4 < uVar12) {
      return param_3;
    }
    if (uVar12 < uVar4) break;
    bVar11 = pbVar15[lVar8];
    pbVar16 = pbVar17 + lVar8;
    uVar12 = (uint)(char)*pbVar16;
    lVar8 = lVar8 + 1;
    if (bVar11 == 0 && *pbVar16 == 0) {
      return param_2;
    }
  }
  return param_2;
joined_r0x00114ea8:
  if (lVar9 == 0) {
    uVar4 = 0;
    uVar12 = 0;
    bVar11 = 0;
    pbVar17 = &_LC24;
    if (pbVar15 != (byte *)0x0) goto LAB_00114f97;
LAB_00114ec4:
    uVar6 = **(uint **)(lVar13 + 0x10);
    uVar4 = uVar6 | uVar12;
    if (uVar4 != 0) {
      lVar14 = 0;
      do {
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar12 == 0) break;
        if (uVar6 < uVar12) {
          return param_2;
        }
        if (uVar12 < uVar6) break;
        uVar6 = (*(uint **)(lVar13 + 0x10))[lVar14 + 1];
        uVar12 = (uint)(char)pbVar17[lVar14 + 1];
        lVar14 = lVar14 + 1;
      } while (uVar6 != 0 || uVar12 != 0);
      goto LAB_00115060;
    }
LAB_0011552e:
    bVar11 = (byte)uVar12;
    if (pbVar16 == (byte *)0x0) goto LAB_0011524e;
  }
  else {
    pbVar17 = *(byte **)(lVar9 + 8);
    if (pbVar15 == (byte *)0x0) {
      if (pbVar17 != (byte *)0x0) {
        uVar12 = (uint)(char)*pbVar17;
        goto LAB_00114ec4;
      }
      puVar7 = *(uint **)(lVar9 + 0x10);
      uVar4 = *puVar7;
      uVar6 = **(uint **)(lVar13 + 0x10);
      uVar12 = uVar4 | uVar6;
      if (uVar12 == 0) goto LAB_001153c9;
      lVar14 = 4;
      do {
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar4 == 0) break;
        if (uVar6 < uVar4) {
          return param_2;
        }
        if (uVar4 < uVar6) break;
        uVar6 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar14);
        uVar4 = *(uint *)((long)puVar7 + lVar14);
        lVar14 = lVar14 + 4;
      } while (uVar6 != 0 || uVar4 != 0);
    }
    else {
      if (pbVar17 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar9 + 0x10);
        uVar6 = (uint)(char)*pbVar15;
        uVar4 = *puVar7;
        uVar12 = uVar4 | uVar6;
        if (uVar12 != 0) {
          lVar13 = 0;
          do {
            if (uVar6 == 0) {
              return param_2;
            }
            if (uVar4 == 0) break;
            if (uVar6 < uVar4) {
              return param_2;
            }
            if (uVar4 < uVar6) break;
            uVar6 = (uint)(char)pbVar15[lVar13 + 1];
            uVar4 = puVar7[lVar13 + 1];
            lVar13 = lVar13 + 1;
          } while (uVar6 != 0 || uVar4 != 0);
          goto LAB_00115060;
        }
LAB_001153c9:
        if (pbVar16 == (byte *)0x0) goto LAB_001153ce;
        goto LAB_00115376;
      }
      bVar11 = *pbVar17;
      uVar4 = (uint)(char)bVar11;
LAB_00114f97:
      bVar3 = *pbVar15;
      uVar12 = (uint)(bVar11 | bVar3);
      if ((bVar11 | bVar3) == 0) goto LAB_0011552e;
      lVar13 = 1;
      do {
        uVar12 = (uint)(char)bVar3;
        if (uVar12 == 0) {
          return param_2;
        }
        if (uVar4 == 0) break;
        if (uVar12 < uVar4) {
          return param_2;
        }
        if (uVar4 < uVar12) break;
        bVar3 = pbVar15[lVar13];
        pbVar2 = pbVar17 + lVar13;
        uVar4 = (uint)(char)*pbVar2;
        lVar13 = lVar13 + 1;
      } while (bVar3 != 0 || *pbVar2 != 0);
    }
LAB_00115060:
    if (pbVar16 == (byte *)0x0) {
      if (pbVar17 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar9 + 0x10);
LAB_001153ce:
        uVar4 = *puVar7;
        uVar12 = **(uint **)(lVar8 + 0x10);
        if (uVar12 == 0 && uVar4 == 0) {
          return param_1;
        }
        lVar9 = 4;
        while( true ) {
          if (uVar12 == 0) {
            return param_3;
          }
          if (uVar4 == 0) {
            return param_1;
          }
          if (uVar12 < uVar4) {
            return param_3;
          }
          if (uVar4 < uVar12) break;
          uVar12 = *(uint *)((long)*(uint **)(lVar8 + 0x10) + lVar9);
          uVar4 = *(uint *)((long)puVar7 + lVar9);
          lVar9 = lVar9 + 4;
          if (uVar12 == 0 && uVar4 == 0) {
            return param_1;
          }
        }
        return param_1;
      }
      uVar4 = (uint)(char)*pbVar17;
LAB_0011524e:
      uVar12 = **(uint **)(lVar8 + 0x10);
      if (uVar12 == 0 && uVar4 == 0) {
        return param_1;
      }
      lVar9 = 0;
      while( true ) {
        if (uVar12 == 0) {
          return param_3;
        }
        if (uVar4 == 0) {
          return param_1;
        }
        if (uVar12 < uVar4) {
          return param_3;
        }
        if (uVar4 < uVar12) break;
        uVar12 = (*(uint **)(lVar8 + 0x10))[lVar9 + 1];
        uVar4 = (uint)(char)pbVar17[lVar9 + 1];
        lVar9 = lVar9 + 1;
        if (uVar12 == 0 && uVar4 == 0) {
          return param_1;
        }
      }
      return param_1;
    }
    if (pbVar17 == (byte *)0x0) {
      puVar7 = *(uint **)(lVar9 + 0x10);
      uVar12 = *puVar7;
LAB_00115376:
      uVar4 = (uint)(char)*pbVar16;
      if (uVar12 == 0 && uVar4 == 0) {
        return param_1;
      }
      lVar8 = 0;
      while( true ) {
        if (uVar4 == 0) {
          return param_3;
        }
        if (uVar12 == 0) {
          return param_1;
        }
        if (uVar4 < uVar12) {
          return param_3;
        }
        if (uVar12 < uVar4) break;
        uVar4 = (uint)(char)pbVar16[lVar8 + 1];
        uVar12 = puVar7[lVar8 + 1];
        lVar8 = lVar8 + 1;
        if (uVar4 == 0 && uVar12 == 0) {
          return param_1;
        }
      }
      return param_1;
    }
    bVar11 = *pbVar17;
    uVar4 = (uint)(char)bVar11;
  }
  bVar3 = *pbVar16;
  if (bVar3 == 0 && bVar11 == 0) {
    return param_1;
  }
  lVar8 = 1;
  while( true ) {
    uVar12 = (uint)(char)bVar3;
    if (uVar12 == 0) {
      return param_3;
    }
    if (uVar4 == 0) {
      return param_1;
    }
    if (uVar12 < uVar4) {
      return param_3;
    }
    if (uVar4 < uVar12) break;
    bVar3 = pbVar16[lVar8];
    pbVar15 = pbVar17 + lVar8;
    uVar4 = (uint)(char)*pbVar15;
    lVar8 = lVar8 + 1;
    if (bVar3 == 0 && *pbVar15 == 0) {
      return param_1;
    }
  }
  return param_1;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::partitioner(long, long,
   List<StringName, DefaultAllocator>::Element*, List<StringName, DefaultAllocator>::Element**)
   const [clone .isra.0] */

long SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::partitioner(long param_1,long param_2,Element *param_3,Element **param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  Element *pEVar3;
  Element **ppEVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  
  lVar14 = *(long *)param_3;
  lVar7 = *(long *)param_4[param_1];
  lVar11 = param_1;
  lVar10 = param_2;
joined_r0x001155d7:
  if (lVar7 == 0) {
    if (lVar14 == 0) goto LAB_00115708;
    pbVar13 = *(byte **)(lVar14 + 8);
    uVar9 = 0;
    pbVar12 = &_LC24;
LAB_0011568e:
    if (pbVar13 == (byte *)0x0) {
      uVar5 = **(uint **)(lVar14 + 0x10);
      if (uVar5 != 0 || uVar9 != 0) {
        lVar7 = 0;
        do {
          if (uVar9 == 0) goto LAB_00115658;
          if (uVar5 == 0) break;
          if (uVar9 < uVar5) goto LAB_00115658;
          if (uVar5 < uVar9) break;
          uVar9 = (uint)(char)pbVar12[lVar7 + 1];
          uVar5 = (*(uint **)(lVar14 + 0x10))[lVar7 + 1];
          lVar7 = lVar7 + 1;
        } while (uVar9 != 0 || uVar5 != 0);
      }
      goto LAB_00115708;
    }
    uVar5 = (uint)(char)*pbVar13;
    bVar6 = (byte)uVar9 | *pbVar13;
LAB_00115955:
    if (bVar6 != 0) {
      lVar7 = 1;
      do {
        if (uVar9 == 0) goto LAB_00115658;
        if (uVar5 == 0) break;
        if (uVar9 < uVar5) goto LAB_00115658;
        if (uVar5 < uVar9) break;
        pbVar1 = pbVar12 + lVar7;
        uVar9 = (uint)(char)*pbVar1;
        pbVar2 = pbVar13 + lVar7;
        uVar5 = (uint)(char)*pbVar2;
        lVar7 = lVar7 + 1;
      } while (*pbVar1 != 0 || *pbVar2 != 0);
    }
  }
  else {
    pbVar12 = *(byte **)(lVar7 + 8);
    if (lVar14 == 0) {
      if (pbVar12 != (byte *)0x0) {
        bVar6 = *pbVar12;
        uVar9 = (uint)(char)bVar6;
        uVar5 = 0;
        pbVar13 = &_LC24;
        goto LAB_00115955;
      }
      uVar9 = 0;
      pbVar13 = &_LC24;
    }
    else {
      pbVar13 = *(byte **)(lVar14 + 8);
      if (pbVar12 != (byte *)0x0) {
        uVar9 = (uint)(char)*pbVar12;
        goto LAB_0011568e;
      }
      if (pbVar13 == (byte *)0x0) {
        uVar9 = **(uint **)(lVar14 + 0x10);
        uVar5 = **(uint **)(lVar7 + 0x10);
        if (uVar9 != 0 || uVar5 != 0) {
          lVar8 = 4;
          do {
            if (uVar5 == 0) goto LAB_00115658;
            if (uVar9 == 0) break;
            if (uVar5 < uVar9) goto LAB_00115658;
            if (uVar9 < uVar5) break;
            uVar5 = *(uint *)((long)*(uint **)(lVar7 + 0x10) + lVar8);
            uVar9 = *(uint *)((long)*(uint **)(lVar14 + 0x10) + lVar8);
            lVar8 = lVar8 + 4;
          } while (uVar5 != 0 || uVar9 != 0);
        }
        goto LAB_00115708;
      }
      uVar9 = (uint)(char)*pbVar13;
    }
    uVar5 = **(uint **)(lVar7 + 0x10);
    if (uVar5 != 0 || uVar9 != 0) {
      lVar8 = 0;
      do {
        if (uVar5 == 0) goto LAB_00115658;
        if (uVar9 == 0) break;
        if (uVar5 < uVar9) goto LAB_00115658;
        if (uVar9 < uVar5) break;
        uVar5 = (*(uint **)(lVar7 + 0x10))[lVar8 + 1];
        uVar9 = (uint)(char)pbVar13[lVar8 + 1];
        lVar8 = lVar8 + 1;
      } while (uVar5 != 0 || uVar9 != 0);
    }
  }
  goto LAB_00115708;
LAB_00115658:
  if (param_2 + -1 == lVar11) {
    _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                     "bad comparison function; sorting will be broken",0,0);
    lVar14 = *(long *)param_3;
LAB_00115708:
    lVar10 = lVar10 + -1;
    lVar7 = *(long *)param_4[lVar10];
    ppEVar4 = param_4 + lVar10;
    do {
      if (lVar14 == 0) {
        if (lVar7 == 0) goto LAB_00115908;
        pbVar13 = *(byte **)(lVar7 + 8);
        uVar5 = 0;
        pbVar12 = &_LC24;
        uVar9 = 0;
        if (pbVar13 == (byte *)0x0) {
LAB_001157dc:
          uVar9 = **(uint **)(lVar7 + 0x10);
          if (uVar9 == 0 && uVar5 == 0) goto LAB_00115908;
          lVar8 = 0;
          while (uVar5 != 0) {
            if (uVar9 == 0) goto LAB_00115908;
            if (uVar5 < uVar9) break;
            if (uVar9 < uVar5) goto LAB_00115908;
            uVar5 = (uint)(char)pbVar12[lVar8 + 1];
            uVar9 = (*(uint **)(lVar7 + 0x10))[lVar8 + 1];
            lVar8 = lVar8 + 1;
            if (uVar5 == 0 && uVar9 == 0) goto LAB_00115908;
          }
        }
        else {
LAB_0011583b:
          uVar5 = (uint)(char)*pbVar13;
          bVar6 = (byte)uVar9 | *pbVar13;
LAB_00115841:
          if (bVar6 == 0) goto LAB_00115908;
          lVar7 = 1;
          while (uVar9 != 0) {
            if (uVar5 == 0) goto LAB_00115908;
            if (uVar9 < uVar5) break;
            if (uVar5 < uVar9) goto LAB_00115908;
            pbVar1 = pbVar12 + lVar7;
            uVar9 = (uint)(char)*pbVar1;
            pbVar2 = pbVar13 + lVar7;
            uVar5 = (uint)(char)*pbVar2;
            lVar7 = lVar7 + 1;
            if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00115908;
          }
        }
      }
      else {
        pbVar12 = *(byte **)(lVar14 + 8);
        if (lVar7 == 0) {
          uVar9 = 0;
          pbVar13 = &_LC24;
          if (pbVar12 != (byte *)0x0) {
            bVar6 = *pbVar12;
            uVar9 = (uint)(char)bVar6;
            uVar5 = 0;
            pbVar13 = &_LC24;
            goto LAB_00115841;
          }
        }
        else {
          pbVar13 = *(byte **)(lVar7 + 8);
          if (pbVar12 != (byte *)0x0) {
            uVar5 = (uint)(char)*pbVar12;
            uVar9 = uVar5;
            if (pbVar13 == (byte *)0x0) goto LAB_001157dc;
            goto LAB_0011583b;
          }
          if (pbVar13 == (byte *)0x0) {
            uVar9 = **(uint **)(lVar7 + 0x10);
            uVar5 = **(uint **)(lVar14 + 0x10);
            if (uVar9 != 0 || uVar5 != 0) {
              lVar8 = 4;
              while (uVar5 != 0) {
                if (uVar9 == 0) goto LAB_00115908;
                if (uVar5 < uVar9) break;
                if (uVar9 < uVar5) goto LAB_00115908;
                uVar5 = *(uint *)((long)*(uint **)(lVar14 + 0x10) + lVar8);
                uVar9 = *(uint *)((long)*(uint **)(lVar7 + 0x10) + lVar8);
                lVar8 = lVar8 + 4;
                if (uVar5 == 0 && uVar9 == 0) goto LAB_00115908;
              }
              goto LAB_001157a0;
            }
            goto LAB_00115908;
          }
          uVar9 = (uint)(char)*pbVar13;
        }
        uVar5 = **(uint **)(lVar14 + 0x10);
        if (uVar5 == 0 && uVar9 == 0) goto LAB_00115908;
        lVar7 = 0;
        while (uVar5 != 0) {
          if (uVar9 == 0) goto LAB_00115908;
          if (uVar5 < uVar9) break;
          if (uVar9 < uVar5) goto LAB_00115908;
          uVar5 = (*(uint **)(lVar14 + 0x10))[lVar7 + 1];
          uVar9 = (uint)(char)pbVar13[lVar7 + 1];
          lVar7 = lVar7 + 1;
          if (uVar5 == 0 && uVar9 == 0) goto LAB_00115908;
        }
      }
LAB_001157a0:
      if (lVar10 == param_1) goto LAB_001158e0;
      lVar10 = lVar10 + -1;
      lVar7 = *(long *)ppEVar4[-1];
      ppEVar4 = ppEVar4 + -1;
    } while( true );
  }
LAB_00115666:
  lVar11 = lVar11 + 1;
  lVar7 = *(long *)param_4[lVar11];
  goto joined_r0x001155d7;
LAB_001158e0:
  _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                   "bad comparison function; sorting will be broken",0,0);
LAB_00115908:
  if (lVar10 <= lVar11) {
    return lVar11;
  }
  pEVar3 = param_4[lVar11];
  param_4[lVar11] = *ppEVar4;
  *ppEVar4 = pEVar3;
  lVar14 = *(long *)param_3;
  goto LAB_00115666;
}



/* JSON::_get_class_namev() const */

undefined8 * JSON::_get_class_namev(void)

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
LAB_00115a83:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00115a83;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"JSON");
      goto LAB_00115aee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"JSON");
LAB_00115aee:
  return &_get_class_namev()::_class_name_static;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::partial_sort(long, long,
   long, List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::partial_sort(long param_1,long param_2,long param_3,Element **param_4)

{
  Element **ppEVar1;
  byte *pbVar2;
  byte *pbVar3;
  Element *pEVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  Element **ppEVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  
  lVar16 = param_3 - param_1;
  ppEVar13 = param_4;
  if (lVar16 < 2) {
    if (param_2 <= param_3) {
      return;
    }
  }
  else {
    for (lVar12 = lVar16 + -2 >> 1;
        adjust_heap(param_1,lVar12,lVar16,param_4[param_1 + lVar12],ppEVar13), lVar12 != 0;
        lVar12 = lVar12 + -1) {
    }
    if (param_2 <= param_3) goto LAB_00115c6c;
  }
  ppEVar1 = ppEVar13 + param_1;
  lVar12 = param_3;
LAB_00115bc0:
  pEVar4 = ppEVar13[lVar12];
  lVar8 = *(long *)pEVar4;
  lVar7 = *(long *)*ppEVar1;
  if (lVar8 == 0) {
    if (lVar7 != 0) {
      pbVar14 = *(byte **)(lVar7 + 8);
      uVar10 = 0;
      pbVar15 = &_LC24;
LAB_00115cd4:
      if (pbVar14 == (byte *)0x0) {
        uVar11 = **(uint **)(lVar7 + 0x10);
        if (uVar11 != 0 || uVar10 != 0) {
          lVar8 = 0;
          do {
            if (uVar10 == 0) goto LAB_00115c40;
            if (uVar11 == 0) break;
            if (uVar10 < uVar11) goto LAB_00115c40;
            if (uVar11 < uVar10) break;
            uVar10 = (uint)(char)pbVar15[lVar8 + 1];
            uVar11 = (*(uint **)(lVar7 + 0x10))[lVar8 + 1];
            lVar8 = lVar8 + 1;
          } while (uVar10 != 0 || uVar11 != 0);
        }
      }
      else {
        uVar11 = (uint)(char)*pbVar14;
        bVar6 = (byte)uVar10 | *pbVar14;
LAB_00115d36:
        if (bVar6 != 0) {
          lVar8 = 1;
          do {
            if (uVar10 == 0) goto LAB_00115c40;
            if (uVar11 == 0) break;
            if (uVar10 < uVar11) goto LAB_00115c40;
            if (uVar11 < uVar10) break;
            pbVar2 = pbVar14 + lVar8;
            uVar11 = (uint)(char)*pbVar2;
            pbVar3 = pbVar15 + lVar8;
            uVar10 = (uint)(char)*pbVar3;
            lVar8 = lVar8 + 1;
          } while (*pbVar2 != 0 || *pbVar3 != 0);
        }
      }
    }
  }
  else {
    pbVar15 = *(byte **)(lVar8 + 8);
    if (lVar7 == 0) {
      if (pbVar15 != (byte *)0x0) {
        bVar6 = *pbVar15;
        uVar10 = (uint)(char)bVar6;
        pbVar14 = &_LC24;
        uVar11 = 0;
        goto LAB_00115d36;
      }
      uVar10 = 0;
      pbVar14 = &_LC24;
    }
    else {
      pbVar14 = *(byte **)(lVar7 + 8);
      if (pbVar15 != (byte *)0x0) {
        uVar10 = (uint)(char)*pbVar15;
        goto LAB_00115cd4;
      }
      if (pbVar14 == (byte *)0x0) {
        uVar10 = **(uint **)(lVar7 + 0x10);
        uVar11 = **(uint **)(lVar8 + 0x10);
        if (uVar10 != 0 || uVar11 != 0) {
          lVar9 = 4;
          do {
            if (uVar11 == 0) goto LAB_00115c40;
            if (uVar10 == 0) break;
            if (uVar11 < uVar10) goto LAB_00115c40;
            if (uVar10 < uVar11) break;
            uVar11 = *(uint *)((long)*(uint **)(lVar8 + 0x10) + lVar9);
            uVar10 = *(uint *)((long)*(uint **)(lVar7 + 0x10) + lVar9);
            lVar9 = lVar9 + 4;
          } while (uVar11 != 0 || uVar10 != 0);
        }
        goto LAB_00115c54;
      }
      uVar10 = (uint)(char)*pbVar14;
    }
    uVar11 = **(uint **)(lVar8 + 0x10);
    if (uVar11 != 0 || uVar10 != 0) {
      lVar7 = 0;
      do {
        if (uVar11 == 0) goto LAB_00115c40;
        if (uVar10 == 0) break;
        if (uVar11 < uVar10) goto LAB_00115c40;
        if (uVar10 < uVar11) break;
        uVar11 = (*(uint **)(lVar8 + 0x10))[lVar7 + 1];
        uVar10 = (uint)(char)pbVar14[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (uVar11 != 0 || uVar10 != 0);
    }
  }
  goto LAB_00115c54;
LAB_00115c40:
  ppEVar13[lVar12] = *ppEVar1;
  adjust_heap(param_1,0,lVar16,pEVar4,ppEVar13);
LAB_00115c54:
  lVar12 = lVar12 + 1;
  if (param_2 <= lVar12) goto code_r0x00115c61;
  goto LAB_00115bc0;
code_r0x00115c61:
  if (lVar16 < 2) {
    return;
  }
LAB_00115c6c:
  ppEVar1 = ppEVar13 + param_1;
  lVar16 = (param_3 + -1) - param_1;
  do {
    pEVar4 = ppEVar1[lVar16];
    ppEVar1[lVar16] = *ppEVar1;
    adjust_heap(param_1,0,lVar16,pEVar4,ppEVar13);
    bVar5 = 1 < lVar16;
    lVar16 = lVar16 + -1;
  } while (bVar5);
  return;
}



/* Resource::get_base_extension() const */

Resource * __thiscall Resource::get_base_extension(Resource *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::introsort(long, long,
   List<StringName, DefaultAllocator>::Element**, long) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_118;
  long local_110;
  long local_108;
  long local_f8;
  
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
  if (param_4 == 0) {
LAB_00116d53:
    partial_sort(param_1,param_2,param_2,param_3);
    return;
  }
  lVar11 = param_2 * 8;
  lVar3 = param_2;
LAB_001164a3:
  param_4 = param_4 + -1;
  puVar2 = (undefined8 *)
           median_of_3(param_3 + param_1,param_3 + (lVar1 >> 1) + param_1,
                       (Element **)((long)param_3 + lVar11 + -8));
  param_2 = partitioner(param_1,lVar3,(Element *)*puVar2,param_3);
  lVar1 = lVar3 - param_2;
  if (0x10 < lVar1) {
    if (param_4 != 0) {
      lVar11 = param_4;
      lVar4 = lVar3;
LAB_0011652c:
      do {
        lVar11 = lVar11 + -1;
        puVar2 = (undefined8 *)
                 median_of_3(param_3 + param_2,param_3 + (lVar1 >> 1) + param_2,param_3 + lVar4 + -1
                            );
        lVar3 = partitioner(param_2,lVar4,(Element *)*puVar2,param_3);
        lVar1 = lVar4 - lVar3;
        if (0x10 < lVar1) {
          if (lVar11 != 0) {
            local_118 = lVar4;
            lVar15 = lVar11;
LAB_001165c4:
            lVar15 = lVar15 + -1;
            puVar2 = (undefined8 *)
                     median_of_3(param_3 + lVar3,param_3 + (lVar1 >> 1) + lVar3,
                                 param_3 + local_118 + -1);
            lVar4 = partitioner(lVar3,local_118,(Element *)*puVar2,param_3);
            lVar1 = local_118 - lVar4;
            if (0x10 < lVar1) goto code_r0x00116610;
LAB_00116aa6:
            lVar1 = lVar4 - lVar3;
            if (0x10 < lVar1) goto LAB_00116ab6;
            goto LAB_00116c53;
          }
LAB_00116cc8:
          partial_sort(lVar3,lVar4,lVar4,param_3);
        }
LAB_00116bdf:
        lVar1 = lVar3 - param_2;
        if (lVar1 < 0x11) goto joined_r0x00116c91;
        lVar4 = lVar3;
        if (lVar11 == 0) break;
      } while( true );
    }
    partial_sort(param_2,lVar3,lVar3,param_3);
  }
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
  if (param_4 != 0) goto LAB_00116d2c;
  goto LAB_00116d53;
code_r0x00116610:
  if (lVar15 != 0) {
    lVar13 = lVar15;
    lVar6 = local_118;
LAB_0011664c:
    do {
      lVar13 = lVar13 + -1;
      puVar2 = (undefined8 *)
               median_of_3(param_3 + lVar4,param_3 + (lVar1 >> 1) + lVar4,param_3 + lVar6 + -1);
      lVar5 = partitioner(lVar4,lVar6,(Element *)*puVar2,param_3);
      lVar1 = lVar6 - lVar5;
      if (0x10 < lVar1) {
        if (lVar13 != 0) {
          lVar7 = lVar6;
          local_f8 = lVar13;
LAB_001166d2:
          do {
            local_f8 = local_f8 + -1;
            puVar2 = (undefined8 *)
                     median_of_3(param_3 + lVar5,param_3 + (lVar1 >> 1) + lVar5,param_3 + lVar7 + -1
                                );
            lVar6 = partitioner(lVar5,lVar7,(Element *)*puVar2,param_3);
            lVar1 = lVar7 - lVar6;
            if (0x10 < lVar1) {
              if (local_f8 != 0) {
                lVar8 = lVar7;
                local_110 = local_f8;
LAB_00116753:
                do {
                  local_110 = local_110 + -1;
                  puVar2 = (undefined8 *)
                           median_of_3(param_3 + lVar6,param_3 + (lVar1 >> 1) + lVar6,
                                       param_3 + lVar8 + -1);
                  lVar7 = partitioner(lVar6,lVar8,(Element *)*puVar2,param_3);
                  lVar1 = lVar8 - lVar7;
                  if (0x10 < lVar1) {
                    if (local_110 != 0) {
                      lVar9 = lVar8;
                      local_118 = local_110;
LAB_001167d1:
                      do {
                        local_118 = local_118 + -1;
                        puVar2 = (undefined8 *)
                                 median_of_3(param_3 + lVar7,param_3 + (lVar1 >> 1) + lVar7,
                                             param_3 + lVar9 + -1);
                        lVar8 = partitioner(lVar7,lVar9,(Element *)*puVar2,param_3);
                        lVar1 = lVar9 - lVar8;
                        if (0x10 < lVar1) {
                          if (local_118 != 0) {
                            lVar10 = lVar9;
                            local_108 = local_118;
LAB_00116847:
                            do {
                              local_108 = local_108 + -1;
                              puVar2 = (undefined8 *)
                                       median_of_3(param_3 + lVar8,param_3 + (lVar1 >> 1) + lVar8,
                                                   param_3 + lVar10 + -1);
                              lVar9 = partitioner(lVar8,lVar10,(Element *)*puVar2,param_3);
                              lVar1 = lVar10 - lVar9;
                              if (0x10 < lVar1) {
                                if (local_108 != 0) {
                                  lVar12 = local_108;
                                  lVar14 = lVar10;
                                  do {
                                    lVar12 = lVar12 + -1;
                                    puVar2 = (undefined8 *)
                                             median_of_3(param_3 + lVar9,
                                                         param_3 + (lVar1 >> 1) + lVar9,
                                                         param_3 + lVar14 + -1);
                                    lVar10 = partitioner(lVar9,lVar14,(Element *)*puVar2,param_3);
                                    introsort(lVar10,lVar14,param_3,lVar12);
                                    lVar1 = lVar10 - lVar9;
                                    if (lVar1 < 0x11) {
                                      lVar1 = lVar9 - lVar8;
                                      lVar10 = lVar9;
                                      if (lVar1 < 0x11) goto LAB_001169dc;
                                      goto LAB_00116847;
                                    }
                                    lVar14 = lVar10;
                                  } while (lVar12 != 0);
                                }
                                partial_sort(lVar9,lVar10,lVar10,param_3);
                              }
                              lVar1 = lVar9 - lVar8;
                              if (lVar1 < 0x11) {
                                lVar1 = lVar8 - lVar7;
                                lVar9 = lVar8;
                                if (lVar1 < 0x11) goto joined_r0x00116af0;
                                goto LAB_001167d1;
                              }
                              lVar10 = lVar9;
                            } while (local_108 != 0);
                          }
                          partial_sort(lVar8,lVar9,lVar9,param_3);
                        }
LAB_001169dc:
                        lVar1 = lVar8 - lVar7;
                        if (lVar1 < 0x11) {
                          lVar1 = lVar7 - lVar6;
                          lVar8 = lVar7;
                          if (lVar1 < 0x11) goto joined_r0x00116a6b;
                          goto LAB_00116753;
                        }
                        lVar9 = lVar8;
                      } while (local_118 != 0);
                    }
                    partial_sort(lVar7,lVar8,lVar8,param_3);
                  }
joined_r0x00116af0:
                  lVar1 = lVar7 - lVar6;
                  if (lVar1 < 0x11) {
                    lVar1 = lVar6 - lVar5;
                    lVar7 = lVar6;
                    if (lVar1 < 0x11) goto joined_r0x00116b30;
                    goto LAB_001166d2;
                  }
                  lVar8 = lVar7;
                } while (local_110 != 0);
              }
              partial_sort(lVar6,lVar7,lVar7,param_3);
            }
joined_r0x00116a6b:
            lVar1 = lVar6 - lVar5;
            if (lVar1 < 0x11) {
              lVar1 = lVar5 - lVar4;
              lVar6 = lVar5;
              if (lVar1 < 0x11) goto LAB_00116aa6;
              goto LAB_0011664c;
            }
            lVar7 = lVar6;
          } while (local_f8 != 0);
        }
        partial_sort(lVar5,lVar6,lVar6,param_3);
      }
joined_r0x00116b30:
      lVar1 = lVar5 - lVar4;
      if (lVar1 < 0x11) {
        lVar1 = lVar4 - lVar3;
        local_118 = lVar4;
        if (lVar1 < 0x11) goto LAB_00116bdf;
        goto LAB_001165c4;
      }
      lVar6 = lVar5;
      local_118 = lVar5;
    } while (lVar13 != 0);
  }
  partial_sort(lVar4,local_118,local_118,param_3);
  lVar1 = lVar4 - lVar3;
  if (lVar1 < 0x11) {
LAB_00116c53:
    lVar1 = lVar3 - param_2;
    lVar4 = lVar3;
    if (0x10 < lVar1) goto LAB_0011652c;
    goto joined_r0x00116c91;
  }
LAB_00116ab6:
  local_118 = lVar4;
  if (lVar15 == 0) goto LAB_00116cc8;
  goto LAB_001165c4;
joined_r0x00116c91:
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
LAB_00116d2c:
  lVar11 = param_2 * 8;
  lVar3 = param_2;
  goto LAB_001164a3;
}



/* JSON::get_class() const */

void JSON::get_class(void)

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



/* JSON::~JSON() */

void __thiscall JSON::~JSON(JSON *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00120a38;
  if (*(long *)(this + 0x260) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x260) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x260);
      *(undefined8 *)(this + 0x260) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (Variant::needs_deinit[*(int *)(this + 0x248)] != '\0') {
    Variant::_clear_internal();
  }
  if (*(long *)(this + 0x240) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x240) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x240);
      *(undefined8 *)(this + 0x240) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* JSON::~JSON() */

void __thiscall JSON::~JSON(JSON *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00120a38;
  if (*(long *)(this + 0x260) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x260) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x260);
      *(undefined8 *)(this + 0x260) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (Variant::needs_deinit[*(int *)(this + 0x248)] != '\0') {
    Variant::_clear_internal();
  }
  if (*(long *)(this + 0x240) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x240) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x240);
      *(undefined8 *)(this + 0x240) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x270);
  return;
}



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 0x18);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            if (*(long *)((long)pvVar5 + 0x38) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x38) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x38);
                *(undefined8 *)((long)pvVar5 + 0x38) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x28) != 0)) {
              StringName::unref();
            }
            if (*(long *)((long)pvVar5 + 0x20) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x20) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x20);
                *(undefined8 *)((long)pvVar5 + 0x20) = 0;
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
            pvVar5 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00117144;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00117144:
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
  }
  return;
}



/* JSON::_initialize_classv() */

void JSON::_initialize_classv(void)

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
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_00124008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "RefCounted";
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Resource";
      local_70 = 0;
      local_50 = 8;
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
      Resource::_bind_methods();
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "JSON";
    local_70 = 0;
    local_50 = 4;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
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
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Resource::_bind_methods) {
      JSON::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */

void __thiscall Variant::operator=(Variant *this,Variant *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    if (needs_deinit[*(int *)this] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)this = *(undefined4 *)param_1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar1;
    *(undefined4 *)param_1 = 0;
    return;
  }
  return;
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



/* MethodInfo::get_argument_meta(int) const */

undefined4 __thiscall MethodInfo::get_argument_meta(MethodInfo *this,int param_1)

{
  long lVar1;
  int iVar2;
  
  if (-2 < param_1) {
    iVar2 = 0;
    if (*(long *)(this + 0x40) != 0) {
      iVar2 = *(int *)(*(long *)(this + 0x40) + 0x10);
    }
    if (param_1 <= iVar2) {
      if (param_1 == -1) {
        return *(undefined4 *)(this + 0x58);
      }
      lVar1 = *(long *)(this + 0x68);
      if ((lVar1 != 0) && ((long)param_1 < *(long *)(lVar1 + -8))) {
        return *(undefined4 *)(lVar1 + (long)param_1 * 4);
      }
      return 0;
    }
  }
  _err_print_error("get_argument_meta","./core/object/object.h",0xec,
                   "Condition \"p_arg < -1 || p_arg > arguments.size()\" is true. Returning: 0",0,0)
  ;
  return 0;
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
LAB_00117a08:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00117a08;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00117a26;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00117a26:
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



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
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
LAB_00117e08:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00117e08;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00117e25;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00117e25:
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
  StringName::StringName((StringName *)&local_78,"Resource",false);
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



/* JSON::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall JSON::_get_property_listv(JSON *this,List *param_1,bool param_2)

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
  undefined *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC29;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC29;
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
LAB_00118258:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00118258;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00118275;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00118275:
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
  StringName::StringName((StringName *)&local_78,"JSON",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

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
    if (*(long **)((long)pvVar2 + 0x40) == plVar5) {
      lVar4 = *(long *)((long)pvVar2 + 0x30);
      lVar3 = *(long *)((long)pvVar2 + 0x38);
      *plVar5 = lVar4;
      if (pvVar2 == (void *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar4;
        lVar4 = *(long *)((long)pvVar2 + 0x30);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x38) = lVar3;
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
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
        StringName::unref();
      }
      if (*(long *)((long)pvVar2 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 8);
          *(undefined8 *)((long)pvVar2 + 8) = 0;
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



/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

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
    if ((long *)plVar1[3] == plVar4) {
      lVar3 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar4 = lVar3;
      if (plVar1 == (long *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = plVar1[1];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
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
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, bool, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, bool> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
::operator[](HashMap<String,bool,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool>>>
             *this,String *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *__s;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  char cVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined1 (*pauVar41) [16];
  undefined8 *puVar42;
  void *pvVar43;
  ulong uVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint *puVar50;
  uint uVar51;
  uint uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  undefined1 (*pauVar57) [16];
  long in_FS_OFFSET;
  long local_58;
  undefined1 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00119108:
    uVar39 = (ulong)uVar55;
    uVar44 = uVar39 * 4;
    uVar48 = uVar39 * 8;
    uVar40 = Memory::alloc_static(uVar44,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar43 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = pvVar43;
    if (uVar55 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar43 + uVar48)) && (pvVar43 < (void *)((long)pvVar2 + uVar44))
         ) {
        uVar44 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar44 * 4) = 0;
          *(undefined8 *)((long)pvVar43 + uVar44 * 8) = 0;
          uVar44 = uVar44 + 1;
        } while (uVar39 != uVar44);
        goto LAB_00118faa;
      }
      memset(pvVar2,0,uVar44);
      memset(pvVar43,0,uVar48);
      iVar45 = *(int *)(this + 0x2c);
LAB_00118fae:
      if (iVar45 != 0) {
LAB_00118fb6:
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar52 = String::hash();
        uVar39 = CONCAT44(0,uVar37);
        lVar53 = *(long *)(this + 0x10);
        uVar38 = 1;
        if (uVar52 != 0) {
          uVar38 = uVar52;
        }
        uVar54 = 0;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (ulong)uVar38 * lVar3;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar39;
        lVar46 = SUB168(auVar16 * auVar32,8);
        uVar52 = *(uint *)(lVar53 + lVar46 * 4);
        uVar51 = SUB164(auVar16 * auVar32,8);
        if (uVar52 != 0) {
          do {
            if (uVar38 == uVar52) {
              cVar36 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),
                                          param_1);
              if (cVar36 != '\0') {
                pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
                pauVar41[1][8] = 0;
                goto LAB_00118e5b;
              }
              lVar53 = *(long *)(this + 0x10);
            }
            uVar54 = uVar54 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(uVar51 + 1) * lVar3;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar39;
            lVar46 = SUB168(auVar17 * auVar33,8);
            uVar52 = *(uint *)(lVar53 + lVar46 * 4);
            uVar51 = SUB164(auVar17 * auVar33,8);
          } while ((uVar52 != 0) &&
                  (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar52 * lVar3, auVar34._8_8_ = 0,
                  auVar34._0_8_ = uVar39, auVar19._8_8_ = 0,
                  auVar19._0_8_ = (ulong)((uVar37 + uVar51) - SUB164(auVar18 * auVar34,8)) * lVar3,
                  auVar35._8_8_ = 0, auVar35._0_8_ = uVar39, uVar54 <= SUB164(auVar19 * auVar35,8)))
          ;
        }
        iVar45 = *(int *)(this + 0x2c);
      }
      uVar39 = (ulong)uVar55;
      goto LAB_00118aa4;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_00118aa4;
    if (iVar45 != 0) goto LAB_00118fb6;
LAB_00118aca:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00118e5b;
    }
    uVar39 = (ulong)(uVar55 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar37 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    if (uVar55 + 1 < 2) {
      uVar39 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar48 = (ulong)uVar55;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar43 = *(void **)(this + 8);
    uVar39 = uVar48 * 4;
    uVar44 = uVar48 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar44,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar44)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar48);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar44);
      }
    }
    if (uVar37 != 0) {
      uVar39 = 0;
      do {
        uVar55 = *(uint *)((long)pvVar2 + uVar39 * 4);
        if (uVar55 != 0) {
          lVar3 = *(long *)(this + 0x10);
          uVar51 = 0;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar44 = CONCAT44(0,uVar38);
          lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar55 * lVar53;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar44;
          lVar46 = SUB168(auVar4 * auVar20,8);
          puVar50 = (uint *)(lVar3 + lVar46 * 4);
          iVar45 = SUB164(auVar4 * auVar20,8);
          uVar52 = *puVar50;
          uVar40 = *(undefined8 *)((long)pvVar43 + uVar39 * 8);
          while (uVar52 != 0) {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar52 * lVar53;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar44;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar38 + iVar45) - SUB164(auVar5 * auVar21,8)) * lVar53;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar44;
            uVar54 = SUB164(auVar6 * auVar22,8);
            uVar49 = uVar40;
            if (uVar54 < uVar51) {
              *puVar50 = uVar55;
              puVar42 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar49 = *puVar42;
              *puVar42 = uVar40;
              uVar55 = uVar52;
              uVar51 = uVar54;
            }
            uVar51 = uVar51 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar45 + 1) * lVar53;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar44;
            lVar46 = SUB168(auVar7 * auVar23,8);
            puVar50 = (uint *)(lVar3 + lVar46 * 4);
            iVar45 = SUB164(auVar7 * auVar23,8);
            uVar40 = uVar49;
            uVar52 = *puVar50;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar40;
          *puVar50 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar37 != uVar39);
      Memory::free_static(pvVar43,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    iVar45 = *(int *)(this + 0x2c);
    uVar39 = CONCAT44(0,uVar55);
    if (iVar45 != 0) {
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = String::hash();
      lVar53 = *(long *)(this + 0x10);
      uVar37 = 1;
      if (uVar38 != 0) {
        uVar37 = uVar38;
      }
      uVar51 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar37 * lVar3;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar39;
      lVar46 = SUB168(auVar12 * auVar28,8);
      uVar38 = *(uint *)(lVar53 + lVar46 * 4);
      uVar52 = SUB164(auVar12 * auVar28,8);
      if (uVar38 != 0) {
        do {
          if (uVar37 == uVar38) {
            cVar36 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),param_1
                                       );
            if (cVar36 != '\0') {
              pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar52 * 8);
              goto LAB_00118e5b;
            }
            lVar53 = *(long *)(this + 0x10);
          }
          uVar51 = uVar51 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(uVar52 + 1) * lVar3;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar39;
          lVar46 = SUB168(auVar13 * auVar29,8);
          uVar38 = *(uint *)(lVar53 + lVar46 * 4);
          uVar52 = SUB164(auVar13 * auVar29,8);
        } while ((uVar38 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar38 * lVar3, auVar30._8_8_ = 0,
                auVar30._0_8_ = uVar39, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar52 + uVar55) - SUB164(auVar14 * auVar30,8)) * lVar3,
                auVar31._8_8_ = 0, auVar31._0_8_ = uVar39, uVar51 <= SUB164(auVar15 * auVar31,8)));
      }
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_00119108;
LAB_00118faa:
      iVar45 = *(int *)(this + 0x2c);
      goto LAB_00118fae;
    }
LAB_00118aa4:
    if ((float)uVar39 * __LC45 < (float)(iVar45 + 1)) goto LAB_00118aca;
  }
  local_58 = 0;
  if (*(long *)param_1 == 0) {
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *pauVar41 = (undefined1  [16])0x0;
LAB_001190e3:
    pauVar41[1][8] = 0;
LAB_00118d4b:
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 != (undefined8 *)0x0) goto LAB_00118d58;
LAB_00118f85:
    *(undefined1 (**) [16])(this + 0x18) = pauVar41;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
    lVar3 = local_58;
    local_50 = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *(undefined8 *)*pauVar41 = 0;
    *(undefined8 *)(*pauVar41 + 8) = 0;
    if (lVar3 == 0) goto LAB_001190e3;
    CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar41 + 1),(CowData *)&local_58);
    pauVar41[1][8] = 0;
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00118d4b;
    Memory::free_static((void *)(local_58 + -0x10),false);
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 == (undefined8 *)0x0) goto LAB_00118f85;
LAB_00118d58:
    *puVar42 = pauVar41;
    *(undefined8 **)(*pauVar41 + 8) = puVar42;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar41;
  uVar37 = String::hash();
  lVar3 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar37 != 0) {
    uVar55 = uVar37;
  }
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)uVar55 * lVar53;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar39;
  lVar47 = SUB168(auVar8 * auVar24,8);
  lVar46 = *(long *)(this + 8);
  puVar50 = (uint *)(lVar3 + lVar47 * 4);
  iVar45 = SUB164(auVar8 * auVar24,8);
  uVar38 = *puVar50;
  pauVar57 = pauVar41;
  if (uVar38 != 0) {
    uVar52 = 0;
    pauVar56 = pauVar41;
    do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar38 * lVar53;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar39;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)((uVar37 + iVar45) - SUB164(auVar9 * auVar25,8)) * lVar53;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar39;
      uVar51 = SUB164(auVar10 * auVar26,8);
      pauVar57 = pauVar56;
      if (uVar51 < uVar52) {
        *puVar50 = uVar55;
        puVar42 = (undefined8 *)(lVar46 + lVar47 * 8);
        pauVar57 = (undefined1 (*) [16])*puVar42;
        *puVar42 = pauVar56;
        uVar52 = uVar51;
        uVar55 = uVar38;
      }
      uVar52 = uVar52 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)(iVar45 + 1) * lVar53;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar39;
      lVar47 = SUB168(auVar11 * auVar27,8);
      puVar50 = (uint *)(lVar3 + lVar47 * 4);
      iVar45 = SUB164(auVar11 * auVar27,8);
      uVar38 = *puVar50;
      pauVar56 = pauVar57;
    } while (uVar38 != 0);
  }
  *(undefined1 (**) [16])(lVar46 + lVar47 * 8) = pauVar57;
  *puVar50 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00118e5b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar41[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void List<StringName, DefaultAllocator>::sort_custom<StringName::AlphCompare>() */

void __thiscall
List<StringName,DefaultAllocator>::sort_custom<StringName::AlphCompare>
          (List<StringName,DefaultAllocator> *this)

{
  int iVar1;
  long *plVar2;
  Element **ppEVar3;
  undefined8 *puVar4;
  Element **ppEVar5;
  Element **ppEVar6;
  Element *pEVar7;
  long lVar8;
  Element *pEVar9;
  long lVar10;
  Element *pEVar11;
  
  if (*(long *)this == 0) {
    return;
  }
  iVar1 = *(int *)(*(long *)this + 0x10);
  if (iVar1 < 2) {
    return;
  }
  pEVar11 = (Element *)(long)iVar1;
  ppEVar3 = (Element **)Memory::alloc_static((long)pEVar11 * 8,true);
  if (ppEVar3 == (Element **)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    ppEVar3[-1] = pEVar11;
  }
  if (*(long **)this != (long *)0x0) {
    ppEVar5 = ppEVar3;
    for (pEVar7 = (Element *)**(long **)this; pEVar7 != (Element *)0x0;
        pEVar7 = *(Element **)(pEVar7 + 8)) {
      *ppEVar5 = pEVar7;
      ppEVar5 = ppEVar5 + 1;
    }
  }
  lVar10 = 0;
  pEVar7 = pEVar11;
  do {
    pEVar7 = (Element *)((long)pEVar7 >> 1);
    lVar10 = lVar10 + 1;
  } while (pEVar7 != (Element *)0x1);
  lVar10 = lVar10 * 2;
  pEVar7 = (Element *)0x1;
  pEVar9 = pEVar11;
  if ((long)pEVar11 < 0x11) {
    do {
      pEVar9 = pEVar7 + 1;
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
      ::linear_insert(0,(long)pEVar7,ppEVar3);
      pEVar7 = pEVar9;
    } while (pEVar11 != pEVar9);
  }
  else {
    do {
      lVar10 = lVar10 + -1;
      puVar4 = (undefined8 *)
               SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
               ::median_of_3(ppEVar3,ppEVar3 + ((long)pEVar9 >> 1),ppEVar3 + (long)(pEVar9 + -1));
      pEVar7 = (Element *)
               SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
               ::partitioner(0,(long)pEVar9,(Element *)*puVar4,ppEVar3);
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
      ::introsort((long)pEVar7,(long)pEVar9,ppEVar3,lVar10);
      lVar8 = 1;
      if ((long)pEVar7 < 0x11) goto LAB_00119370;
      pEVar9 = pEVar7;
    } while (lVar10 != 0);
    SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
    ::partial_sort(0,(long)pEVar7,(long)pEVar7,ppEVar3);
LAB_00119370:
    do {
      lVar10 = lVar8 + 1;
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
      ::linear_insert(0,lVar8,ppEVar3);
      lVar8 = lVar10;
    } while (lVar10 != 0x10);
    pEVar7 = (Element *)0x10;
    do {
      pEVar9 = pEVar7 + 1;
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
      ::unguarded_linear_insert((long)pEVar7,ppEVar3[(long)pEVar7],ppEVar3);
      pEVar7 = pEVar9;
    } while (pEVar11 != pEVar9);
  }
  plVar2 = *(long **)this;
  pEVar7 = *ppEVar3;
  *plVar2 = (long)pEVar7;
  *(undefined8 *)(pEVar7 + 0x10) = 0;
  *(Element **)(*ppEVar3 + 8) = ppEVar3[1];
  pEVar7 = ppEVar3[(long)(pEVar11 + -1)];
  plVar2[1] = (long)pEVar7;
  *(Element **)(pEVar7 + 0x10) = ppEVar3[(long)(pEVar11 + -2)];
  *(undefined8 *)(ppEVar3[(long)(pEVar11 + -1)] + 8) = 0;
  if (iVar1 != 2) {
    ppEVar5 = ppEVar3;
    do {
      ppEVar6 = ppEVar5 + 1;
      *(Element **)(ppEVar5[1] + 0x10) = *ppEVar5;
      *(Element **)(*ppEVar6 + 8) = ppEVar5[2];
      ppEVar5 = ppEVar6;
    } while (ppEVar3 + (iVar1 - 2) != ppEVar6);
  }
  Memory::free_static(ppEVar3,true);
  return;
}



/* List<Engine::Singleton, DefaultAllocator>::~List() */

void __thiscall
List<Engine::Singleton,DefaultAllocator>::~List(List<Engine::Singleton,DefaultAllocator> *this)

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
    if (plVar4 == (long *)plVar1[6]) {
      lVar3 = plVar1[4];
      lVar2 = plVar1[5];
      *plVar4 = lVar3;
      if (plVar1 == (long *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x20) = lVar3;
        lVar3 = plVar1[4];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x28) = lVar2;
      }
      if (StringName::configured != '\0') {
        if (plVar1[2] != 0) {
          StringName::unref();
          if (StringName::configured == '\0') goto LAB_0011953a;
        }
        if (*plVar1 != 0) {
          StringName::unref();
        }
      }
LAB_0011953a:
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



/* void Ref<JSON>::instantiate<>() */

void __thiscall Ref<JSON>::instantiate<>(Ref<JSON> *this)

{
  char cVar1;
  Resource *this_00;
  long lVar2;
  Resource *pRVar3;
  Object *pOVar4;
  Object *pOVar5;
  byte bVar6;
  
  bVar6 = 0;
  this_00 = (Resource *)operator_new(0x270,"");
  pRVar3 = this_00;
  for (lVar2 = 0x4e; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pRVar3 = 0;
    pRVar3 = pRVar3 + (ulong)bVar6 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_00120a38;
  *(undefined8 *)(this_00 + 0x240) = 0;
  *(undefined4 *)(this_00 + 0x248) = 0;
  *(undefined8 *)(this_00 + 0x260) = 0;
  *(undefined4 *)(this_00 + 0x268) = 0;
  *(undefined1 (*) [16])(this_00 + 0x250) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar5 = *(Object **)this;
    if (pOVar5 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (Resource *)0x0;
    cVar1 = predelete_handler(pOVar5);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar5 = *(Object **)this;
    pOVar4 = pOVar5;
    if (this_00 == (Resource *)pOVar5) goto LAB_001196d5;
    *(Resource **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar4 = (Object *)this_00;
    if (((pOVar5 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar5), cVar1 == '\0')) goto LAB_001196d5;
  }
  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
  Memory::free_static(pOVar5,false);
  pOVar4 = (Object *)this_00;
  if (this_00 == (Resource *)0x0) {
    return;
  }
LAB_001196d5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
    return;
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
    if (*in_RSI != 0) goto LAB_0011980c;
  }
  else {
    iVar37 = *(int *)((long)in_RSI + 0x24);
LAB_0011980c:
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
              goto LAB_00119b89;
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
  if ((float)uVar29 * __LC45 < (float)(iVar37 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar37 = *(int *)((long)in_RSI + 0x24);
      lVar33 = *in_RSI;
      iVar31 = -1;
      goto LAB_00119b89;
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
LAB_00119b89:
  *(int *)(param_1 + 0xc) = iVar31;
  *(long *)param_1 = lVar33;
  *(int *)(param_1 + 8) = iVar37;
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



/* WARNING: Removing unreachable block (ram,0x0011a008) */
/* WARNING: Removing unreachable block (ram,0x0011a13d) */
/* WARNING: Removing unreachable block (ram,0x0011a2d0) */
/* WARNING: Removing unreachable block (ram,0x0011a149) */
/* WARNING: Removing unreachable block (ram,0x0011a153) */
/* WARNING: Removing unreachable block (ram,0x0011a2b0) */
/* WARNING: Removing unreachable block (ram,0x0011a15f) */
/* WARNING: Removing unreachable block (ram,0x0011a169) */
/* WARNING: Removing unreachable block (ram,0x0011a290) */
/* WARNING: Removing unreachable block (ram,0x0011a175) */
/* WARNING: Removing unreachable block (ram,0x0011a17f) */
/* WARNING: Removing unreachable block (ram,0x0011a270) */
/* WARNING: Removing unreachable block (ram,0x0011a18b) */
/* WARNING: Removing unreachable block (ram,0x0011a195) */
/* WARNING: Removing unreachable block (ram,0x0011a250) */
/* WARNING: Removing unreachable block (ram,0x0011a1a1) */
/* WARNING: Removing unreachable block (ram,0x0011a1ab) */
/* WARNING: Removing unreachable block (ram,0x0011a230) */
/* WARNING: Removing unreachable block (ram,0x0011a1b3) */
/* WARNING: Removing unreachable block (ram,0x0011a1c9) */
/* WARNING: Removing unreachable block (ram,0x0011a1d5) */
/* String vformat<Variant>(String const&, Variant const) */

undefined8 * vformat<Variant>(undefined8 *param_1,bool *param_2,Variant *param_3)

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



/* WARNING: Removing unreachable block (ram,0x0011a418) */
/* WARNING: Removing unreachable block (ram,0x0011a548) */
/* WARNING: Removing unreachable block (ram,0x0011a6e0) */
/* WARNING: Removing unreachable block (ram,0x0011a554) */
/* WARNING: Removing unreachable block (ram,0x0011a566) */
/* WARNING: Removing unreachable block (ram,0x0011a6c0) */
/* WARNING: Removing unreachable block (ram,0x0011a572) */
/* WARNING: Removing unreachable block (ram,0x0011a57c) */
/* WARNING: Removing unreachable block (ram,0x0011a6a0) */
/* WARNING: Removing unreachable block (ram,0x0011a588) */
/* WARNING: Removing unreachable block (ram,0x0011a592) */
/* WARNING: Removing unreachable block (ram,0x0011a680) */
/* WARNING: Removing unreachable block (ram,0x0011a59e) */
/* WARNING: Removing unreachable block (ram,0x0011a5a8) */
/* WARNING: Removing unreachable block (ram,0x0011a660) */
/* WARNING: Removing unreachable block (ram,0x0011a5b4) */
/* WARNING: Removing unreachable block (ram,0x0011a5be) */
/* WARNING: Removing unreachable block (ram,0x0011a640) */
/* WARNING: Removing unreachable block (ram,0x0011a5c6) */
/* WARNING: Removing unreachable block (ram,0x0011a5dc) */
/* WARNING: Removing unreachable block (ram,0x0011a5e8) */
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



/* WARNING: Removing unreachable block (ram,0x0011a828) */
/* WARNING: Removing unreachable block (ram,0x0011a95b) */
/* WARNING: Removing unreachable block (ram,0x0011aaf0) */
/* WARNING: Removing unreachable block (ram,0x0011a967) */
/* WARNING: Removing unreachable block (ram,0x0011a971) */
/* WARNING: Removing unreachable block (ram,0x0011aad0) */
/* WARNING: Removing unreachable block (ram,0x0011a97d) */
/* WARNING: Removing unreachable block (ram,0x0011a987) */
/* WARNING: Removing unreachable block (ram,0x0011aab0) */
/* WARNING: Removing unreachable block (ram,0x0011a993) */
/* WARNING: Removing unreachable block (ram,0x0011a9a6) */
/* WARNING: Removing unreachable block (ram,0x0011aa90) */
/* WARNING: Removing unreachable block (ram,0x0011a9b2) */
/* WARNING: Removing unreachable block (ram,0x0011a9bc) */
/* WARNING: Removing unreachable block (ram,0x0011aa70) */
/* WARNING: Removing unreachable block (ram,0x0011a9c8) */
/* WARNING: Removing unreachable block (ram,0x0011a9d2) */
/* WARNING: Removing unreachable block (ram,0x0011aa50) */
/* WARNING: Removing unreachable block (ram,0x0011a9da) */
/* WARNING: Removing unreachable block (ram,0x0011a9f0) */
/* WARNING: Removing unreachable block (ram,0x0011a9fc) */
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



/* WARNING: Removing unreachable block (ram,0x0011ac70) */
/* WARNING: Removing unreachable block (ram,0x0011adaa) */
/* WARNING: Removing unreachable block (ram,0x0011aef7) */
/* WARNING: Removing unreachable block (ram,0x0011adb6) */
/* WARNING: Removing unreachable block (ram,0x0011adc0) */
/* WARNING: Removing unreachable block (ram,0x0011aed9) */
/* WARNING: Removing unreachable block (ram,0x0011adcc) */
/* WARNING: Removing unreachable block (ram,0x0011add6) */
/* WARNING: Removing unreachable block (ram,0x0011aebb) */
/* WARNING: Removing unreachable block (ram,0x0011ade2) */
/* WARNING: Removing unreachable block (ram,0x0011adec) */
/* WARNING: Removing unreachable block (ram,0x0011ae9d) */
/* WARNING: Removing unreachable block (ram,0x0011adf8) */
/* WARNING: Removing unreachable block (ram,0x0011ae02) */
/* WARNING: Removing unreachable block (ram,0x0011ae7f) */
/* WARNING: Removing unreachable block (ram,0x0011ae0a) */
/* WARNING: Removing unreachable block (ram,0x0011ae14) */
/* WARNING: Removing unreachable block (ram,0x0011ae64) */
/* WARNING: Removing unreachable block (ram,0x0011ae1c) */
/* WARNING: Removing unreachable block (ram,0x0011ae3a) */
/* WARNING: Removing unreachable block (ram,0x0011ae46) */
/* String vformat<String, Variant>(String const&, String const, Variant const) */

undefined8 *
vformat<String,Variant>(undefined8 *param_1,bool *param_2,String *param_3,Variant *param_4)

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



/* WARNING: Removing unreachable block (ram,0x0011b078) */
/* WARNING: Removing unreachable block (ram,0x0011b1b5) */
/* WARNING: Removing unreachable block (ram,0x0011b2c5) */
/* WARNING: Removing unreachable block (ram,0x0011b1c1) */
/* WARNING: Removing unreachable block (ram,0x0011b1cb) */
/* WARNING: Removing unreachable block (ram,0x0011b2a7) */
/* WARNING: Removing unreachable block (ram,0x0011b1d7) */
/* WARNING: Removing unreachable block (ram,0x0011b1e1) */
/* WARNING: Removing unreachable block (ram,0x0011b289) */
/* WARNING: Removing unreachable block (ram,0x0011b1ed) */
/* WARNING: Removing unreachable block (ram,0x0011b1f7) */
/* WARNING: Removing unreachable block (ram,0x0011b26b) */
/* WARNING: Removing unreachable block (ram,0x0011b1ff) */
/* WARNING: Removing unreachable block (ram,0x0011b209) */
/* WARNING: Removing unreachable block (ram,0x0011b250) */
/* WARNING: Removing unreachable block (ram,0x0011b211) */
/* WARNING: Removing unreachable block (ram,0x0011b226) */
/* WARNING: Removing unreachable block (ram,0x0011b232) */
/* String vformat<String, Variant, Variant>(String const&, String const, Variant const, Variant
   const) */

undefined8 *
vformat<String,Variant,Variant>
          (undefined8 *param_1,bool *param_2,String *param_3,Variant *param_4,Variant *param_5)

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



/* WARNING: Removing unreachable block (ram,0x0011b468) */
/* WARNING: Removing unreachable block (ram,0x0011b59e) */
/* WARNING: Removing unreachable block (ram,0x0011b6c1) */
/* WARNING: Removing unreachable block (ram,0x0011b5aa) */
/* WARNING: Removing unreachable block (ram,0x0011b5b4) */
/* WARNING: Removing unreachable block (ram,0x0011b6a3) */
/* WARNING: Removing unreachable block (ram,0x0011b5c0) */
/* WARNING: Removing unreachable block (ram,0x0011b5ca) */
/* WARNING: Removing unreachable block (ram,0x0011b685) */
/* WARNING: Removing unreachable block (ram,0x0011b5d6) */
/* WARNING: Removing unreachable block (ram,0x0011b5e0) */
/* WARNING: Removing unreachable block (ram,0x0011b667) */
/* WARNING: Removing unreachable block (ram,0x0011b5e8) */
/* WARNING: Removing unreachable block (ram,0x0011b5fc) */
/* WARNING: Removing unreachable block (ram,0x0011b64c) */
/* WARNING: Removing unreachable block (ram,0x0011b604) */
/* WARNING: Removing unreachable block (ram,0x0011b622) */
/* WARNING: Removing unreachable block (ram,0x0011b62e) */
/* String vformat<String, String, String, String>(String const&, String const, String const, String
   const, String const) */

undefined8 *
vformat<String,String,String,String>
          (undefined8 *param_1,bool *param_2,String *param_3,String *param_4,String *param_5,
          String *param_6)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
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
  iVar4 = 0;
  Variant::Variant(local_88,param_5);
  Variant::Variant(local_70,param_6);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_108);
  iVar3 = (int)local_108;
  Array::resize(iVar3);
  pVVar2 = local_b8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 4);
  String::sprintf((Array *)local_100,param_2);
  *param_1 = local_100[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_108);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_b8);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0011c110) */
/* WARNING: Removing unreachable block (ram,0x0011c23e) */
/* WARNING: Removing unreachable block (ram,0x0011c38c) */
/* WARNING: Removing unreachable block (ram,0x0011c24a) */
/* WARNING: Removing unreachable block (ram,0x0011c254) */
/* WARNING: Removing unreachable block (ram,0x0011c36e) */
/* WARNING: Removing unreachable block (ram,0x0011c260) */
/* WARNING: Removing unreachable block (ram,0x0011c26a) */
/* WARNING: Removing unreachable block (ram,0x0011c350) */
/* WARNING: Removing unreachable block (ram,0x0011c276) */
/* WARNING: Removing unreachable block (ram,0x0011c280) */
/* WARNING: Removing unreachable block (ram,0x0011c332) */
/* WARNING: Removing unreachable block (ram,0x0011c28c) */
/* WARNING: Removing unreachable block (ram,0x0011c29f) */
/* WARNING: Removing unreachable block (ram,0x0011c314) */
/* WARNING: Removing unreachable block (ram,0x0011c2a7) */
/* WARNING: Removing unreachable block (ram,0x0011c2b1) */
/* WARNING: Removing unreachable block (ram,0x0011c2f9) */
/* WARNING: Removing unreachable block (ram,0x0011c2b9) */
/* WARNING: Removing unreachable block (ram,0x0011c2cf) */
/* WARNING: Removing unreachable block (ram,0x0011c2db) */
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



/* WARNING: Removing unreachable block (ram,0x0011c510) */
/* WARNING: Removing unreachable block (ram,0x0011c647) */
/* WARNING: Removing unreachable block (ram,0x0011c76a) */
/* WARNING: Removing unreachable block (ram,0x0011c653) */
/* WARNING: Removing unreachable block (ram,0x0011c65d) */
/* WARNING: Removing unreachable block (ram,0x0011c74c) */
/* WARNING: Removing unreachable block (ram,0x0011c669) */
/* WARNING: Removing unreachable block (ram,0x0011c673) */
/* WARNING: Removing unreachable block (ram,0x0011c72e) */
/* WARNING: Removing unreachable block (ram,0x0011c67f) */
/* WARNING: Removing unreachable block (ram,0x0011c693) */
/* WARNING: Removing unreachable block (ram,0x0011c710) */
/* WARNING: Removing unreachable block (ram,0x0011c69b) */
/* WARNING: Removing unreachable block (ram,0x0011c6a5) */
/* WARNING: Removing unreachable block (ram,0x0011c6f5) */
/* WARNING: Removing unreachable block (ram,0x0011c6ad) */
/* WARNING: Removing unreachable block (ram,0x0011c6cb) */
/* WARNING: Removing unreachable block (ram,0x0011c6d7) */
/* String vformat<String, String, String>(String const&, String const, String const, String const)
    */

undefined8 *
vformat<String,String,String>
          (undefined8 *param_1,bool *param_2,String *param_3,String *param_4,String *param_5)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
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
  iVar4 = 0;
  Variant::Variant(local_90,param_4);
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar3 = (int)local_f8;
  Array::resize(iVar3);
  pVVar2 = local_a8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  pVVar2 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0011c908) */
/* WARNING: Removing unreachable block (ram,0x0011ca3f) */
/* WARNING: Removing unreachable block (ram,0x0011cb62) */
/* WARNING: Removing unreachable block (ram,0x0011ca4b) */
/* WARNING: Removing unreachable block (ram,0x0011ca55) */
/* WARNING: Removing unreachable block (ram,0x0011cb44) */
/* WARNING: Removing unreachable block (ram,0x0011ca61) */
/* WARNING: Removing unreachable block (ram,0x0011ca6b) */
/* WARNING: Removing unreachable block (ram,0x0011cb26) */
/* WARNING: Removing unreachable block (ram,0x0011ca77) */
/* WARNING: Removing unreachable block (ram,0x0011ca8b) */
/* WARNING: Removing unreachable block (ram,0x0011cb08) */
/* WARNING: Removing unreachable block (ram,0x0011ca93) */
/* WARNING: Removing unreachable block (ram,0x0011ca9d) */
/* WARNING: Removing unreachable block (ram,0x0011caed) */
/* WARNING: Removing unreachable block (ram,0x0011caa5) */
/* WARNING: Removing unreachable block (ram,0x0011cac3) */
/* WARNING: Removing unreachable block (ram,0x0011cacf) */
/* String vformat<String, String, unsigned long, unsigned long>(String const&, String const, String
   const, unsigned long const, unsigned long const) */

undefined8 *
vformat<String,String,unsigned_long,unsigned_long>
          (undefined8 *param_1,bool *param_2,String *param_3,String *param_4,ulong param_5,
          ulong param_6)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
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
  iVar4 = 0;
  Variant::Variant(local_88,param_5);
  Variant::Variant(local_70,param_6);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_108);
  iVar3 = (int)local_108;
  Array::resize(iVar3);
  pVVar2 = local_b8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 4);
  String::sprintf((Array *)local_100,param_2);
  *param_1 = local_100[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_108);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_b8);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0011ccf0) */
/* WARNING: Removing unreachable block (ram,0x0011ce1e) */
/* WARNING: Removing unreachable block (ram,0x0011cf46) */
/* WARNING: Removing unreachable block (ram,0x0011ce2a) */
/* WARNING: Removing unreachable block (ram,0x0011ce34) */
/* WARNING: Removing unreachable block (ram,0x0011cf28) */
/* WARNING: Removing unreachable block (ram,0x0011ce40) */
/* WARNING: Removing unreachable block (ram,0x0011ce4a) */
/* WARNING: Removing unreachable block (ram,0x0011cf0a) */
/* WARNING: Removing unreachable block (ram,0x0011ce56) */
/* WARNING: Removing unreachable block (ram,0x0011ce60) */
/* WARNING: Removing unreachable block (ram,0x0011ceec) */
/* WARNING: Removing unreachable block (ram,0x0011ce6c) */
/* WARNING: Removing unreachable block (ram,0x0011ce89) */
/* WARNING: Removing unreachable block (ram,0x0011ced1) */
/* WARNING: Removing unreachable block (ram,0x0011ce91) */
/* WARNING: Removing unreachable block (ram,0x0011cea7) */
/* WARNING: Removing unreachable block (ram,0x0011ceb3) */
/* String vformat<String, int, String>(String const&, String const, int const, String const) */

undefined8 *
vformat<String,int,String>
          (undefined8 *param_1,bool *param_2,String *param_3,int param_4,String *param_5)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
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
  iVar4 = 0;
  Variant::Variant(local_90,param_4);
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar3 = (int)local_f8;
  Array::resize(iVar3);
  pVVar2 = local_a8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  pVVar2 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0011d0c0) */
/* WARNING: Removing unreachable block (ram,0x0011d1f0) */
/* WARNING: Removing unreachable block (ram,0x0011d33d) */
/* WARNING: Removing unreachable block (ram,0x0011d1fc) */
/* WARNING: Removing unreachable block (ram,0x0011d20e) */
/* WARNING: Removing unreachable block (ram,0x0011d31f) */
/* WARNING: Removing unreachable block (ram,0x0011d21a) */
/* WARNING: Removing unreachable block (ram,0x0011d224) */
/* WARNING: Removing unreachable block (ram,0x0011d301) */
/* WARNING: Removing unreachable block (ram,0x0011d230) */
/* WARNING: Removing unreachable block (ram,0x0011d23a) */
/* WARNING: Removing unreachable block (ram,0x0011d2e3) */
/* WARNING: Removing unreachable block (ram,0x0011d246) */
/* WARNING: Removing unreachable block (ram,0x0011d250) */
/* WARNING: Removing unreachable block (ram,0x0011d2c5) */
/* WARNING: Removing unreachable block (ram,0x0011d258) */
/* WARNING: Removing unreachable block (ram,0x0011d262) */
/* WARNING: Removing unreachable block (ram,0x0011d2aa) */
/* WARNING: Removing unreachable block (ram,0x0011d26a) */
/* WARNING: Removing unreachable block (ram,0x0011d280) */
/* WARNING: Removing unreachable block (ram,0x0011d28c) */
/* String vformat<int, int>(String const&, int const, int const) */

String * vformat<int,int>(String *param_1,int param_2,int param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int in_ECX;
  undefined4 in_register_00000034;
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
  Variant::Variant(local_70,in_ECX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_d0[0];
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



/* JSON::is_class(String const&) const */

undefined8 __thiscall JSON::is_class(JSON *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
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
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_0011d3cf;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar5 == lVar7;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar7 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
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
LAB_0011d3cf:
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
    if (cVar6 != '\0') goto LAB_0011d483;
  }
  cVar6 = String::operator==(param_1,"JSON");
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
              if (lVar5 == 0) goto LAB_0011d5cb;
              LOCK();
              lVar7 = *plVar1;
              bVar9 = lVar5 == lVar7;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar7 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar7 != -1) {
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
LAB_0011d5cb:
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
      if (cVar6 != '\0') goto LAB_0011d483;
    }
    cVar6 = String::operator==(param_1,"Resource");
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
            if (*(long *)(lVar4 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
            }
          }
          else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
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
        if (cVar6 != '\0') goto LAB_0011d483;
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
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
            }
            else {
              local_50 = strlen(pcVar3);
              local_58 = pcVar3;
              String::parse_latin1((StrRange *)&local_60);
            }
          }
          cVar6 = String::operator==(param_1,(String *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if (cVar6 != '\0') goto LAB_0011d483;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = String::operator==(param_1,"Object");
          return uVar8;
        }
        goto LAB_0011d76e;
      }
    }
  }
LAB_0011d483:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011d76e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<Pair<String, long>, DefaultAllocator>::~List() */

void __thiscall
List<Pair<String,long>,DefaultAllocator>::~List(List<Pair<String,long>,DefaultAllocator> *this)

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
/* HashMap<String, List<Pair<String, long>, DefaultAllocator>, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, List<Pair<String,
   long>, DefaultAllocator> > > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,List<Pair<String,long>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Pair<String,long>,DefaultAllocator>>>>
::operator[](HashMap<String,List<Pair<String,long>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Pair<String,long>,DefaultAllocator>>>>
             *this,String *param_1)

{
  uint *puVar1;
  void *pvVar2;
  void *__s;
  CowData<char32_t> *this_00;
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
  undefined1 (*pauVar35) [16];
  char cVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined1 (*pauVar41) [16];
  undefined8 *puVar42;
  void *pvVar43;
  long lVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  uint uVar51;
  long lVar52;
  ulong uVar53;
  long *plVar54;
  uint uVar55;
  uint uVar56;
  undefined1 (*pauVar57) [16];
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined1 local_68 [16];
  long local_58;
  undefined8 local_50 [2];
  long local_40;
  
  uVar56 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 8) == 0) {
LAB_0011df6f:
    local_70 = 0;
    uVar48 = (ulong)uVar56;
    uVar39 = uVar48 * 4;
    uVar53 = uVar48 * 8;
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar43 = (void *)Memory::alloc_static(uVar53,false);
    *(void **)(this + 8) = pvVar43;
    if (uVar56 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar43 + uVar53)) && (pvVar43 < (void *)((long)pvVar2 + uVar39))
         ) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar39 * 4) = 0;
          *(undefined8 *)((long)pvVar43 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar48 != uVar39);
      }
      else {
        memset(pvVar2,0,uVar39);
        memset(pvVar43,0,uVar53);
      }
LAB_0011de2d:
      iVar45 = *(int *)(this + 0x2c);
      if (iVar45 != 0) {
LAB_0011de3d:
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar44 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar51 = String::hash();
        uVar39 = CONCAT44(0,uVar37);
        lVar52 = *(long *)(this + 0x10);
        uVar38 = 1;
        if (uVar51 != 0) {
          uVar38 = uVar51;
        }
        uVar55 = 0;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = (ulong)uVar38 * lVar44;
        auVar31._8_8_ = 0;
        auVar31._0_8_ = uVar39;
        lVar46 = SUB168(auVar15 * auVar31,8);
        uVar51 = *(uint *)(lVar52 + lVar46 * 4);
        uVar50 = SUB164(auVar15 * auVar31,8);
        if (uVar51 != 0) {
          do {
            if (uVar51 == uVar38) {
              cVar36 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),
                                          param_1);
              if (cVar36 != '\0') {
                lVar44 = *(long *)(this + 8);
                lVar52 = *(long *)(lVar44 + (ulong)uVar50 * 8);
                plVar54 = *(long **)(lVar52 + 0x18);
                if (plVar54 == (long *)0x0) goto LAB_0011e0e9;
                goto LAB_0011e065;
              }
              lVar52 = *(long *)(this + 0x10);
            }
            uVar55 = uVar55 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)(uVar50 + 1) * lVar44;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar39;
            lVar46 = SUB168(auVar16 * auVar32,8);
            uVar51 = *(uint *)(lVar52 + lVar46 * 4);
            uVar50 = SUB164(auVar16 * auVar32,8);
          } while ((uVar51 != 0) &&
                  (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar51 * lVar44, auVar33._8_8_ = 0,
                  auVar33._0_8_ = uVar39, auVar18._8_8_ = 0,
                  auVar18._0_8_ = (ulong)((uVar37 + uVar50) - SUB164(auVar17 * auVar33,8)) * lVar44,
                  auVar34._8_8_ = 0, auVar34._0_8_ = uVar39, uVar55 <= SUB164(auVar18 * auVar34,8)))
          ;
        }
        iVar45 = *(int *)(this + 0x2c);
      }
      uVar48 = (ulong)uVar56;
      goto LAB_0011d907;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_0011d907;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0011de3d;
LAB_0011d92d:
    uVar56 = *(uint *)(this + 0x28);
    if (uVar56 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011dce6;
    }
    uVar39 = (ulong)(uVar56 + 1);
    uVar37 = *(uint *)(hash_table_size_primes + (ulong)uVar56 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar56 + 1 < 2) {
      uVar39 = 2;
    }
    uVar56 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar43 = *(void **)(this + 8);
    uVar48 = (ulong)uVar56;
    uVar39 = uVar48 * 4;
    pvVar2 = *(void **)(this + 0x10);
    uVar53 = uVar48 * 8;
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar53,false);
    *(void **)(this + 8) = __s_00;
    if (uVar56 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar53)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar48);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar53);
      }
    }
    uVar39 = 0;
    if (uVar37 != 0) {
      do {
        uVar56 = *(uint *)((long)pvVar2 + uVar39 * 4);
        if (uVar56 != 0) {
          uVar50 = 0;
          lVar44 = *(long *)(this + 0x10);
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar53 = CONCAT44(0,uVar38);
          lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (ulong)uVar56 * lVar52;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar53;
          lVar46 = SUB168(auVar3 * auVar19,8);
          puVar1 = (uint *)(lVar44 + lVar46 * 4);
          iVar45 = SUB164(auVar3 * auVar19,8);
          uVar51 = *puVar1;
          uVar40 = *(undefined8 *)((long)pvVar43 + uVar39 * 8);
          while (uVar51 != 0) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar51 * lVar52;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar53;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)((uVar38 + iVar45) - SUB164(auVar4 * auVar20,8)) * lVar52;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar53;
            uVar55 = SUB164(auVar5 * auVar21,8);
            uVar49 = uVar40;
            if (uVar55 < uVar50) {
              *puVar1 = uVar56;
              puVar42 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar49 = *puVar42;
              *puVar42 = uVar40;
              uVar56 = uVar51;
              uVar50 = uVar55;
            }
            uVar50 = uVar50 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)(iVar45 + 1) * lVar52;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar53;
            lVar46 = SUB168(auVar6 * auVar22,8);
            puVar1 = (uint *)(lVar44 + lVar46 * 4);
            iVar45 = SUB164(auVar6 * auVar22,8);
            uVar40 = uVar49;
            uVar51 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar40;
          *puVar1 = uVar56;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar37 != uVar39);
      Memory::free_static(pvVar43,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      uVar39 = CONCAT44(0,uVar56);
      lVar44 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = String::hash();
      uVar37 = 1;
      if (uVar38 != 0) {
        uVar37 = uVar38;
      }
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar37 * lVar44;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar39;
      lVar46 = SUB168(auVar11 * auVar27,8);
      lVar52 = *(long *)(this + 0x10);
      uVar51 = SUB164(auVar11 * auVar27,8);
      uVar38 = *(uint *)(lVar52 + lVar46 * 4);
      if (uVar38 == 0) {
        lVar47 = *(long *)(this + 8);
      }
      else {
        uVar50 = 0;
        lVar47 = *(long *)(this + 8);
        do {
          if (uVar38 == uVar37) {
            cVar36 = String::operator==((String *)(*(long *)(lVar47 + lVar46 * 8) + 0x10),param_1);
            if (cVar36 != '\0') {
              pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
              goto LAB_0011dcf4;
            }
            lVar52 = *(long *)(this + 0x10);
            lVar47 = *(long *)(this + 8);
          }
          uVar50 = uVar50 + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(uVar51 + 1) * lVar44;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar39;
          lVar46 = SUB168(auVar12 * auVar28,8);
          uVar38 = *(uint *)(lVar52 + lVar46 * 4);
          uVar51 = SUB164(auVar12 * auVar28,8);
        } while ((uVar38 != 0) &&
                (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar38 * lVar44, auVar29._8_8_ = 0,
                auVar29._0_8_ = uVar39, auVar14._8_8_ = 0,
                auVar14._0_8_ = (ulong)((uVar56 + uVar51) - SUB164(auVar13 * auVar29,8)) * lVar44,
                auVar30._8_8_ = 0, auVar30._0_8_ = uVar39, uVar50 <= SUB164(auVar14 * auVar30,8)));
      }
      local_70 = 0;
      uVar56 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar47 == 0) goto LAB_0011df6f;
      goto LAB_0011de2d;
    }
    local_70 = 0;
    uVar48 = (ulong)uVar56;
    iVar45 = 0;
LAB_0011d907:
    if ((float)uVar48 * __LC45 < (float)(iVar45 + 1)) goto LAB_0011d92d;
  }
  local_58 = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(long *)param_1 == 0) {
    local_50[0] = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *pauVar41 = (undefined1  [16])0x0;
LAB_0011e034:
    *(undefined8 *)(pauVar41[1] + 8) = 0;
    List<Pair<String,long>,DefaultAllocator>::~List
              ((List<Pair<String,long>,DefaultAllocator> *)local_50);
LAB_0011dbcc:
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 != (undefined8 *)0x0) goto LAB_0011dbde;
LAB_0011df5a:
    *(undefined1 (**) [16])(this + 0x18) = pauVar41;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
    lVar44 = local_58;
    uVar40 = local_68._0_8_;
    uVar49 = local_68._8_8_;
    local_50[0] = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *(undefined8 *)*pauVar41 = uVar40;
    *(undefined8 *)(*pauVar41 + 8) = uVar49;
    if (lVar44 == 0) goto LAB_0011e034;
    CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar41 + 1),(CowData *)&local_58);
    *(undefined8 *)(pauVar41[1] + 8) = 0;
    List<Pair<String,long>,DefaultAllocator>::~List
              ((List<Pair<String,long>,DefaultAllocator> *)local_50);
    LOCK();
    plVar54 = (long *)(lVar44 + -0x10);
    *plVar54 = *plVar54 + -1;
    UNLOCK();
    if (*plVar54 != 0) goto LAB_0011dbcc;
    Memory::free_static((void *)(local_58 + -0x10),false);
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 == (undefined8 *)0x0) goto LAB_0011df5a;
LAB_0011dbde:
    *puVar42 = pauVar41;
    *(undefined8 **)(*pauVar41 + 8) = puVar42;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar41;
  uVar37 = String::hash();
  lVar44 = *(long *)(this + 0x10);
  uVar56 = 1;
  if (uVar37 != 0) {
    uVar56 = uVar37;
  }
  uVar51 = 0;
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (ulong)uVar56 * lVar52;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar39;
  lVar47 = SUB168(auVar7 * auVar23,8);
  lVar46 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar44 + lVar47 * 4);
  iVar45 = SUB164(auVar7 * auVar23,8);
  uVar38 = *puVar1;
  pauVar35 = pauVar41;
  while (uVar38 != 0) {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)uVar38 * lVar52;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar39;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)((uVar37 + iVar45) - SUB164(auVar8 * auVar24,8)) * lVar52;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar39;
    uVar50 = SUB164(auVar9 * auVar25,8);
    pauVar57 = pauVar35;
    if (uVar50 < uVar51) {
      *puVar1 = uVar56;
      puVar42 = (undefined8 *)(lVar46 + lVar47 * 8);
      pauVar57 = (undefined1 (*) [16])*puVar42;
      *puVar42 = pauVar35;
      uVar51 = uVar50;
      uVar56 = uVar38;
    }
    uVar51 = uVar51 + 1;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)(iVar45 + 1) * lVar52;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar39;
    lVar47 = SUB168(auVar10 * auVar26,8);
    puVar1 = (uint *)(lVar44 + lVar47 * 4);
    iVar45 = SUB164(auVar10 * auVar26,8);
    pauVar35 = pauVar57;
    uVar38 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar46 + lVar47 * 8) = pauVar35;
  *puVar1 = uVar56;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011dce6:
  List<Pair<String,long>,DefaultAllocator>::~List
            ((List<Pair<String,long>,DefaultAllocator> *)&local_70);
LAB_0011dcf4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pauVar41[1] + 8;
  while( true ) {
    if (*(long **)(this_00 + 0x20) == plVar54) {
      lVar44 = *(long *)(this_00 + 0x10);
      lVar46 = *(long *)(this_00 + 0x18);
      *plVar54 = lVar44;
      if (this_00 == (CowData<char32_t> *)plVar54[1]) {
        plVar54[1] = lVar46;
      }
      if (lVar46 != 0) {
        *(long *)(lVar46 + 0x10) = lVar44;
        lVar44 = *(long *)(this_00 + 0x10);
      }
      if (lVar44 != 0) {
        *(long *)(lVar44 + 0x18) = lVar46;
      }
      CowData<char32_t>::_unref(this_00);
      Memory::free_static(this_00,false);
      *(int *)(plVar54 + 2) = (int)plVar54[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar54 = *(long **)(lVar52 + 0x18);
    if ((int)plVar54[2] == 0) break;
LAB_0011e065:
    this_00 = (CowData<char32_t> *)*plVar54;
    if (this_00 == (CowData<char32_t> *)0x0) {
      lVar44 = *(long *)(this + 8);
      goto LAB_0011e0e9;
    }
  }
  Memory::free_static(plVar54,false);
  *(undefined8 *)(lVar52 + 0x18) = 0;
  lVar44 = *(long *)(this + 8);
LAB_0011e0e9:
  pauVar41 = *(undefined1 (**) [16])(lVar44 + (ulong)uVar50 * 8);
  goto LAB_0011dce6;
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



/* List<MethodInfo, DefaultAllocator>::~List() */

void __thiscall List<MethodInfo,DefaultAllocator>::~List(List<MethodInfo,DefaultAllocator> *this)

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
    if ((long *)plVar2[0x10] == plVar5) {
      lVar4 = plVar2[0xe];
      lVar3 = plVar2[0xf];
      *plVar5 = lVar4;
      if (plVar2 == (long *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x70) = lVar4;
        lVar4 = plVar2[0xe];
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x78) = lVar3;
      }
      if (plVar2[0xd] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[0xd] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = plVar2[0xd];
          plVar2[0xd] = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      CowData<Variant>::_unref((CowData<Variant> *)(plVar2 + 10));
      List<PropertyInfo,DefaultAllocator>::~List
                ((List<PropertyInfo,DefaultAllocator> *)(plVar2 + 8));
      if (plVar2[5] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[5] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = plVar2[5];
          plVar2[5] = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (plVar2[3] != 0)) {
        StringName::unref();
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



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<DocData::MethodDoc>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<DocData::MethodDoc>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<DocData::ConstantDoc>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<DocData::ConstantDoc>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<DocData::PropertyDoc>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<DocData::PropertyDoc>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
LAB_0011e8e0:
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
  if (lVar10 == 0) goto LAB_0011e8e0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_0011e7b9:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_0011e7b9;
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
    goto LAB_0011e936;
  }
  if (lVar10 == lVar7) {
LAB_0011e85f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_0011e936:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0011e84a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0011e85f;
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
LAB_0011e84a:
  puVar9[-1] = param_1;
  return 0;
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



/* CowData<DocData::MethodDoc>::_unref() */

void __thiscall CowData<DocData::MethodDoc>::_unref(CowData<DocData::MethodDoc> *this)

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
          if (plVar6[0xe] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[0xe] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[0xe];
              plVar6[0xe] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[0xd] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[0xd] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[0xd];
              plVar6[0xd] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          CowData<DocData::ArgumentDoc>::_unref((CowData<DocData::ArgumentDoc> *)(plVar6 + 0xb));
          if (plVar6[9] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[9] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[9];
              plVar6[9] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[7] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[7] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[7];
              plVar6[7] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[5] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[5] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[5];
              plVar6[5] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          plVar6 = plVar6 + 0xf;
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



/* CowData<DocData::ConstantDoc>::_unref() */

void __thiscall CowData<DocData::ConstantDoc>::_unref(CowData<DocData::ConstantDoc> *this)

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
          if (plVar6[0xb] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[0xb] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[0xb];
              plVar6[0xb] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[10] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[10] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[10];
              plVar6[10] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[8] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[8] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[8];
              plVar6[8] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[6] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[6] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[6];
              plVar6[6] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          if (plVar6[3] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[3] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[3];
              plVar6[3] = 0;
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
          plVar6 = plVar6 + 0xc;
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



/* CowData<DocData::PropertyDoc>::_unref() */

void __thiscall CowData<DocData::PropertyDoc>::_unref(CowData<DocData::PropertyDoc> *this)

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
          if (plVar6[0xe] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[0xe] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[0xe];
              plVar6[0xe] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[0xd] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[0xd] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[0xd];
              plVar6[0xd] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[0xb] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[0xb] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[0xb];
              plVar6[0xb] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[9] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[9] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[9];
              plVar6[9] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[7] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[7] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[7];
              plVar6[7] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[6] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[6] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[6];
              plVar6[6] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[5] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[5] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[5];
              plVar6[5] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          plVar6 = plVar6 + 0xf;
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



/* HashMap<String, Dictionary, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Dictionary> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<String,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Dictionary>>>
::_resize_and_rehash
          (HashMap<String,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Dictionary>>>
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
/* HashMap<String, Dictionary, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Dictionary> > >::insert(String const&, Dictionary
   const&, bool) */

String * HashMap<String,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Dictionary>>>
         ::insert(String *param_1,Dictionary *param_2,bool param_3)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
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
  char cVar20;
  uint uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  void *__s_00;
  ulong uVar24;
  Dictionary *in_RCX;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  undefined7 in_register_00000011;
  String *pSVar29;
  long lVar30;
  long lVar31;
  char in_R8B;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  long *plVar36;
  uint uVar37;
  long in_FS_OFFSET;
  uint local_98;
  long *local_80;
  long local_58;
  Dictionary local_50 [16];
  long local_40;
  
  pSVar29 = (String *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar25 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar35 = (ulong)uVar25;
    uVar24 = uVar35 * 4;
    uVar33 = uVar35 * 8;
    uVar23 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(param_2 + 0x10) = uVar23;
    __s_00 = (void *)Memory::alloc_static(uVar33,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar25 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar33)) && (__s_00 < (void *)((long)__s + uVar24))) {
        uVar24 = 0;
        do {
          *(undefined4 *)((long)__s + uVar24 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar24 * 8) = 0;
          uVar24 = uVar24 + 1;
        } while (uVar35 != uVar24);
      }
      else {
        memset(__s,0,uVar24);
        memset(__s_00,0,uVar33);
      }
      goto LAB_0011f66f;
    }
    iVar26 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0011f67d;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_0011f8b8;
LAB_0011f69f:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_80 = (long *)0x0;
      goto LAB_0011f867;
    }
    _resize_and_rehash((HashMap<String,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Dictionary>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_0011f66f:
    iVar26 = *(int *)(param_2 + 0x2c);
    if (iVar26 != 0) {
LAB_0011f8b8:
      uVar21 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar32 = String::hash();
      uVar24 = CONCAT44(0,uVar21);
      lVar34 = *(long *)(param_2 + 0x10);
      uVar27 = 1;
      if (uVar32 != 0) {
        uVar27 = uVar32;
      }
      uVar37 = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar27 * lVar3;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar24;
      lVar31 = SUB168(auVar8 * auVar16,8);
      uVar32 = *(uint *)(lVar34 + lVar31 * 4);
      uVar28 = SUB164(auVar8 * auVar16,8);
      if (uVar32 != 0) {
        do {
          if (uVar27 == uVar32) {
            cVar20 = String::operator==((String *)
                                        (*(long *)(*(long *)(param_2 + 8) + lVar31 * 8) + 0x10),
                                        pSVar29);
            if (cVar20 != '\0') {
              Dictionary::operator=
                        ((Dictionary *)
                         (*(long *)(*(long *)(param_2 + 8) + (ulong)uVar28 * 8) + 0x18),in_RCX);
              local_80 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar28 * 8);
              goto LAB_0011f867;
            }
            lVar34 = *(long *)(param_2 + 0x10);
          }
          uVar37 = uVar37 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)(uVar28 + 1) * lVar3;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar24;
          lVar31 = SUB168(auVar9 * auVar17,8);
          uVar32 = *(uint *)(lVar34 + lVar31 * 4);
          uVar28 = SUB164(auVar9 * auVar17,8);
        } while ((uVar32 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar32 * lVar3, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar24, auVar11._8_8_ = 0,
                auVar11._0_8_ = (ulong)((uVar21 + uVar28) - SUB164(auVar10 * auVar18,8)) * lVar3,
                auVar19._8_8_ = 0, auVar19._0_8_ = uVar24, uVar37 <= SUB164(auVar11 * auVar19,8)));
      }
      iVar26 = *(int *)(param_2 + 0x2c);
    }
LAB_0011f67d:
    if ((float)uVar25 * __LC45 < (float)(iVar26 + 1)) goto LAB_0011f69f;
  }
  local_58 = 0;
  if (*(long *)pSVar29 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)pSVar29);
  }
  Dictionary::Dictionary(local_50,in_RCX);
  local_80 = (long *)operator_new(0x20,"");
  local_80[2] = 0;
  *local_80 = 0;
  local_80[1] = 0;
  if (local_58 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_80 + 2),(CowData *)&local_58);
  }
  Dictionary::Dictionary((Dictionary *)(local_80 + 3),local_50);
  Dictionary::~Dictionary(local_50);
  lVar3 = local_58;
  if (local_58 == 0) {
LAB_0011f758:
    puVar22 = *(undefined8 **)(param_2 + 0x20);
    if (puVar22 != (undefined8 *)0x0) goto LAB_0011f765;
LAB_0011f9fe:
    *(long **)(param_2 + 0x18) = local_80;
    *(long **)(param_2 + 0x20) = local_80;
  }
  else {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_0011f758;
    local_58 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    puVar22 = *(undefined8 **)(param_2 + 0x20);
    if (puVar22 == (undefined8 *)0x0) goto LAB_0011f9fe;
LAB_0011f765:
    if (in_R8B == '\0') {
      *puVar22 = local_80;
      local_80[1] = (long)puVar22;
      *(long **)(param_2 + 0x20) = local_80;
    }
    else {
      lVar3 = *(long *)(param_2 + 0x18);
      *(long **)(lVar3 + 8) = local_80;
      *local_80 = lVar3;
      *(long **)(param_2 + 0x18) = local_80;
    }
  }
  uVar21 = String::hash();
  lVar3 = *(long *)(param_2 + 0x10);
  uVar25 = 1;
  if (uVar21 != 0) {
    uVar25 = uVar21;
  }
  uVar32 = 0;
  uVar24 = (ulong)uVar25;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar33 = CONCAT44(0,uVar21);
  lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar24 * lVar34;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar33;
  lVar30 = SUB168(auVar4 * auVar12,8);
  lVar31 = *(long *)(param_2 + 8);
  puVar2 = (uint *)(lVar3 + lVar30 * 4);
  iVar26 = SUB164(auVar4 * auVar12,8);
  uVar27 = *puVar2;
  plVar1 = local_80;
  while (uVar27 != 0) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (ulong)uVar27 * lVar34;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar33;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (ulong)((uVar21 + iVar26) - SUB164(auVar5 * auVar13,8)) * lVar34;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar33;
    local_98 = SUB164(auVar6 * auVar14,8);
    plVar36 = plVar1;
    if (local_98 < uVar32) {
      *puVar2 = (uint)uVar24;
      uVar24 = (ulong)uVar27;
      puVar22 = (undefined8 *)(lVar31 + lVar30 * 8);
      plVar36 = (long *)*puVar22;
      *puVar22 = plVar1;
      uVar32 = local_98;
    }
    uVar25 = (uint)uVar24;
    uVar32 = uVar32 + 1;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (ulong)(iVar26 + 1) * lVar34;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar33;
    lVar30 = SUB168(auVar7 * auVar15,8);
    puVar2 = (uint *)(lVar3 + lVar30 * 4);
    iVar26 = SUB164(auVar7 * auVar15,8);
    plVar1 = plVar36;
    uVar27 = *puVar2;
  }
  *(long **)(lVar31 + lVar30 * 8) = plVar1;
  *puVar2 = uVar25;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0011f867:
  *(long **)param_1 = local_80;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, Dictionary, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Dictionary> > >::operator[](String const&) */

Dictionary * __thiscall
HashMap<String,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Dictionary>>>
::operator[](HashMap<String,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Dictionary>>>
             *this,String *param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
  long lVar4;
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
  ulong uVar29;
  char cVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  undefined8 uVar36;
  void *__s_00;
  ulong uVar37;
  int iVar38;
  long lVar39;
  long lVar40;
  uint uVar41;
  uint uVar42;
  long lVar43;
  uint uVar44;
  ulong uVar45;
  long in_FS_OFFSET;
  Dictionary *local_88;
  Dictionary local_70 [8];
  undefined1 local_68 [16];
  long local_58;
  Dictionary local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar37 = CONCAT44(0,uVar32);
    lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar33 = String::hash();
    lVar43 = *(long *)(this + 0x10);
    uVar31 = 1;
    if (uVar33 != 0) {
      uVar31 = uVar33;
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar31 * lVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar37;
    lVar40 = SUB168(auVar9 * auVar21,8);
    uVar33 = *(uint *)(lVar43 + lVar40 * 4);
    uVar44 = SUB164(auVar9 * auVar21,8);
    if (uVar33 != 0) {
      uVar41 = 0;
      do {
        if (uVar31 == uVar33) {
          cVar30 = String::operator==((String *)(*(long *)(*(long *)(this + 8) + lVar40 * 8) + 0x10)
                                      ,param_1);
          if (cVar30 != '\0') {
            local_88 = (Dictionary *)(*(long *)(*(long *)(this + 8) + (ulong)uVar44 * 8) + 0x18);
            goto LAB_0011fdbf;
          }
          lVar43 = *(long *)(this + 0x10);
        }
        uVar41 = uVar41 + 1;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)(uVar44 + 1) * lVar4;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar37;
        lVar40 = SUB168(auVar10 * auVar22,8);
        uVar33 = *(uint *)(lVar43 + lVar40 * 4);
        uVar44 = SUB164(auVar10 * auVar22,8);
      } while ((uVar33 != 0) &&
              (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar33 * lVar4, auVar23._8_8_ = 0,
              auVar23._0_8_ = uVar37, auVar12._8_8_ = 0,
              auVar12._0_8_ = (ulong)((uVar32 + uVar44) - SUB164(auVar11 * auVar23,8)) * lVar4,
              auVar24._8_8_ = 0, auVar24._0_8_ = uVar37, uVar41 <= SUB164(auVar12 * auVar24,8)));
    }
  }
  Dictionary::Dictionary(local_70);
  uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
    uVar29 = (ulong)uVar32;
    uVar37 = uVar29 * 4;
    uVar45 = uVar29 * 8;
    uVar36 = Memory::alloc_static(uVar37,false);
    *(undefined8 *)(this + 0x10) = uVar36;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = __s_00;
    if (uVar32 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar37))) {
        uVar37 = 0;
        do {
          *(undefined4 *)((long)__s + uVar37 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar37 * 8) = 0;
          uVar37 = uVar37 + 1;
        } while (uVar29 != uVar37);
      }
      else {
        memset(__s,0,uVar37);
        memset(__s_00,0,uVar45);
      }
      goto LAB_0011fbc5;
    }
    iVar38 = *(int *)(this + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0011fbd5;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0011ff00;
LAB_0011fbf7:
    if (*(int *)(this + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_88 = (Dictionary *)0x18;
      goto LAB_0011fdb0;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  else {
LAB_0011fbc5:
    iVar38 = *(int *)(this + 0x2c);
    if (iVar38 != 0) {
LAB_0011ff00:
      uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar44 = String::hash();
      uVar37 = CONCAT44(0,uVar31);
      lVar43 = *(long *)(this + 0x10);
      uVar33 = 1;
      if (uVar44 != 0) {
        uVar33 = uVar44;
      }
      uVar42 = 0;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar33 * lVar4;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar37;
      lVar40 = SUB168(auVar13 * auVar25,8);
      uVar44 = *(uint *)(lVar43 + lVar40 * 4);
      uVar41 = SUB164(auVar13 * auVar25,8);
      if (uVar44 != 0) {
        do {
          if (uVar33 == uVar44) {
            cVar30 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar40 * 8) + 0x10),param_1
                                       );
            if (cVar30 != '\0') {
              Dictionary::operator=
                        ((Dictionary *)(*(long *)(*(long *)(this + 8) + (ulong)uVar41 * 8) + 0x18),
                         local_70);
              local_88 = (Dictionary *)(*(long *)(*(long *)(this + 8) + (ulong)uVar41 * 8) + 0x18);
              goto LAB_0011fdb0;
            }
            lVar43 = *(long *)(this + 0x10);
          }
          uVar42 = uVar42 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(uVar41 + 1) * lVar4;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar37;
          lVar40 = SUB168(auVar14 * auVar26,8);
          uVar44 = *(uint *)(lVar43 + lVar40 * 4);
          uVar41 = SUB164(auVar14 * auVar26,8);
        } while ((uVar44 != 0) &&
                (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar44 * lVar4, auVar27._8_8_ = 0,
                auVar27._0_8_ = uVar37, auVar16._8_8_ = 0,
                auVar16._0_8_ = (ulong)((uVar31 + uVar41) - SUB164(auVar15 * auVar27,8)) * lVar4,
                auVar28._8_8_ = 0, auVar28._0_8_ = uVar37, uVar42 <= SUB164(auVar16 * auVar28,8)));
      }
      iVar38 = *(int *)(this + 0x2c);
    }
LAB_0011fbd5:
    if ((float)uVar32 * __LC45 < (float)(iVar38 + 1)) goto LAB_0011fbf7;
  }
  local_58 = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
  }
  Dictionary::Dictionary(local_50,local_70);
  puVar34 = (undefined8 *)operator_new(0x20,"");
  puVar34[2] = 0;
  *puVar34 = local_68._0_8_;
  puVar34[1] = local_68._8_8_;
  if (local_58 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar34 + 2),(CowData *)&local_58);
  }
  local_88 = (Dictionary *)(puVar34 + 3);
  Dictionary::Dictionary(local_88,local_50);
  Dictionary::~Dictionary(local_50);
  lVar4 = local_58;
  if (local_58 == 0) {
LAB_0011fcb3:
    puVar35 = *(undefined8 **)(this + 0x20);
    if (puVar35 != (undefined8 *)0x0) goto LAB_0011fcc0;
LAB_0012000e:
    *(undefined8 **)(this + 0x18) = puVar34;
  }
  else {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_0011fcb3;
    local_58 = 0;
    Memory::free_static((void *)(lVar4 + -0x10),false);
    puVar35 = *(undefined8 **)(this + 0x20);
    if (puVar35 == (undefined8 *)0x0) goto LAB_0012000e;
LAB_0011fcc0:
    *puVar35 = puVar34;
    puVar34[1] = puVar35;
  }
  *(undefined8 **)(this + 0x20) = puVar34;
  uVar31 = String::hash();
  lVar4 = *(long *)(this + 0x10);
  uVar32 = 1;
  if (uVar31 != 0) {
    uVar32 = uVar31;
  }
  uVar44 = 0;
  uVar37 = (ulong)uVar32;
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar31);
  lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar37 * lVar43;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar45;
  lVar39 = SUB168(auVar5 * auVar17,8);
  lVar40 = *(long *)(this + 8);
  puVar2 = (uint *)(lVar4 + lVar39 * 4);
  iVar38 = SUB164(auVar5 * auVar17,8);
  uVar33 = *puVar2;
  while (uVar33 != 0) {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (ulong)uVar33 * lVar43;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar45;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (ulong)((uVar31 + iVar38) - SUB164(auVar6 * auVar18,8)) * lVar43;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar45;
    uVar32 = SUB164(auVar7 * auVar19,8);
    puVar35 = puVar34;
    if (uVar32 < uVar44) {
      *puVar2 = (uint)uVar37;
      uVar37 = (ulong)uVar33;
      puVar3 = (undefined8 *)(lVar40 + lVar39 * 8);
      puVar35 = (undefined8 *)*puVar3;
      *puVar3 = puVar34;
      uVar44 = uVar32;
    }
    uVar32 = (uint)uVar37;
    uVar44 = uVar44 + 1;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)(iVar38 + 1) * lVar43;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar45;
    lVar39 = SUB168(auVar8 * auVar20,8);
    puVar2 = (uint *)(lVar4 + lVar39 * 4);
    iVar38 = SUB164(auVar8 * auVar20,8);
    puVar34 = puVar35;
    uVar33 = *puVar2;
  }
  *(undefined8 **)(lVar40 + lVar39 * 8) = puVar34;
  *puVar2 = uVar32;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011fdb0:
  Dictionary::~Dictionary(local_70);
LAB_0011fdbf:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_88;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void memdelete<HashMapElement<StringName, EditorHelpBit::HelpData> >(HashMapElement<StringName,
   EditorHelpBit::HelpData>*) */

void memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(HashMapElement *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x68) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x60) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x60) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(param_1 + 0x58);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = plVar1[-1];
      *(undefined8 *)(param_1 + 0x58) = 0;
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
    }
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x48) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x38) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x30) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(param_1 + 0x10) != 0)) {
    StringName::unref();
  }
  Memory::free_static(param_1,false);
  return;
}



/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>
                    (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */

void __thiscall
HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
           *this)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  
  pvVar6 = *(void **)(this + 8);
  if (pvVar6 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar7 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar7) != 0) {
          pvVar6 = *(void **)((long)pvVar6 + lVar7 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar7) = 0;
          pvVar5 = *(void **)((long)pvVar6 + 0x20);
          if (pvVar5 != (void *)0x0) {
            if (*(int *)((long)pvVar6 + 0x44) != 0) {
              uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar6 + 0x40) * 4);
              if (uVar2 == 0) {
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
              }
              else {
                lVar4 = 0;
                do {
                  piVar3 = (int *)(*(long *)((long)pvVar6 + 0x28) + lVar4);
                  if (*piVar3 != 0) {
                    *piVar3 = 0;
                    memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>
                              (*(HashMapElement **)((long)pvVar5 + lVar4 * 2));
                    pvVar5 = *(void **)((long)pvVar6 + 0x20);
                    *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
                  }
                  lVar4 = lVar4 + 4;
                } while (lVar4 != (ulong)uVar2 * 4);
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
                if (pvVar5 == (void *)0x0) goto LAB_001205f9;
              }
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x28),false);
          }
LAB_001205f9:
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar6,false);
          pvVar6 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar6 + lVar7 * 2) = 0;
        }
        lVar7 = lVar7 + 4;
      } while (lVar7 != (ulong)uVar1 << 2);
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



/* GDExtensionAPIDump::generate_extension_api(bool) */

void GDExtensionAPIDump::_GLOBAL__sub_I_generate_extension_api(void)

{
  if (PopupMenu::base_property_helper == '\0') {
    PopupMenu::base_property_helper = '\x01';
    PopupMenu::base_property_helper._64_8_ = 0;
    PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,
                 &__dso_handle);
  }
  if (EditorHelpBit::doc_class_cache == '\0') {
    EditorHelpBit::doc_class_cache = '\x01';
    EditorHelpBit::doc_class_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
                 ::~HashMap,EditorHelpBit::doc_class_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_enum_cache == '\0') {
    EditorHelpBit::doc_enum_cache = '\x01';
    EditorHelpBit::doc_enum_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_enum_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_constant_cache == '\0') {
    EditorHelpBit::doc_constant_cache = '\x01';
    EditorHelpBit::doc_constant_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_constant_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_property_cache == '\0') {
    EditorHelpBit::doc_property_cache = '\x01';
    EditorHelpBit::doc_property_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_property_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_theme_item_cache == '\0') {
    EditorHelpBit::doc_theme_item_cache = '\x01';
    EditorHelpBit::doc_theme_item_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_theme_item_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_method_cache == '\0') {
    EditorHelpBit::doc_method_cache = '\x01';
    EditorHelpBit::doc_method_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_method_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_signal_cache == '\0') {
    EditorHelpBit::doc_signal_cache = '\x01';
    EditorHelpBit::doc_signal_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_signal_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_annotation_cache != '\0') {
    return;
  }
  EditorHelpBit::doc_annotation_cache = 1;
  EditorHelpBit::doc_annotation_cache._8_16_ = (undefined1  [16])0x0;
  EditorHelpBit::doc_annotation_cache._40_8_ = 2;
  EditorHelpBit::doc_annotation_cache._24_16_ = (undefined1  [16])0x0;
  __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
               ::~HashMap,EditorHelpBit::doc_annotation_cache,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */

void __thiscall
HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<MethodInfo, DefaultAllocator>::~List() */

void __thiscall List<MethodInfo,DefaultAllocator>::~List(List<MethodInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Pair<String, long>, DefaultAllocator>::~List() */

void __thiscall
List<Pair<String,long>,DefaultAllocator>::~List(List<Pair<String,long>,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Engine::Singleton, DefaultAllocator>::~List() */

void __thiscall
List<Engine::Singleton,DefaultAllocator>::~List(List<Engine::Singleton,DefaultAllocator> *this)

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
/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

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
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JSON::~JSON() */

void __thiscall JSON::~JSON(JSON *this)

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



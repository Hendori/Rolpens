
/* HTTPClient::_request_raw(HTTPClient::Method, String const&, Vector<String> const&,
   Vector<unsigned char> const&) */

void HTTPClient::_request_raw(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100029. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}



/* HTTPClient::set_http_proxy(String const&, int) */

void HTTPClient::set_http_proxy(String *param_1,int param_2)

{
  _err_print_error("set_http_proxy","core/io/http_client.cpp",0x35,
                   "HTTP proxy feature is not available",0,1);
  return;
}



/* HTTPClient::set_https_proxy(String const&, int) */

void HTTPClient::set_https_proxy(String *param_1,int param_2)

{
  _err_print_error(_LC4,"core/io/http_client.cpp",0x39,"HTTPS proxy feature is not available",0,1);
  return;
}



/* HTTPClient::_request(HTTPClient::Method, String const&, Vector<String> const&, String const&) */

ulong HTTPClient::_request(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  undefined8 local_48;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  String::utf8();
  if (local_48 == 0) {
    uVar5 = 0;
    pcVar7 = *(code **)(*param_1 + 0x150);
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    pcVar7 = *(code **)(*param_1 + 0x150);
    iVar3 = (int)*(ulong *)(local_48 + -8);
    uVar5 = *(ulong *)(local_48 + -8) & 0xffffffff;
    if (iVar3 != 0) {
      uVar6 = iVar3 - 1;
      uVar5 = (ulong)uVar6;
      if (0 < (int)uVar6) {
        uVar4 = CharString::get_data();
        uVar5 = (ulong)uVar6;
      }
    }
  }
  uVar5 = (*pcVar7)(param_1,param_2,param_3,param_4,uVar4,uVar5);
  if (local_48 != 0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_48 + -0x10),false);
      uVar5 = uVar5 & 0xffffffff;
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<unsigned char>::_ref(CowData<unsigned char> const&) [clone .part.0] */

void __thiscall CowData<unsigned_char>::_ref(CowData<unsigned_char> *this,CowData *param_1)

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



/* HTTPClient::create(bool) */

undefined8 HTTPClient::create(bool param_1)

{
  undefined8 uVar1;
  
  if (_create != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001002b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_create)(param_1);
    return uVar1;
  }
  return 0;
}



/* HTTPClient::_get_response_headers_as_dictionary() */

Dictionary * HTTPClient::_get_response_headers_as_dictionary(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  Variant *pVVar5;
  bool bVar6;
  long *in_RSI;
  wchar32 wVar7;
  Dictionary *in_RDI;
  long in_FS_OFFSET;
  long *local_98;
  long local_90;
  long local_88;
  long local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (long *)0x0;
  (**(code **)(*in_RSI + 0x198))();
  Dictionary::Dictionary(in_RDI);
  if (local_98 != (long *)0x0) {
    for (lVar2 = *local_98; lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      wVar7 = (wchar32)lVar2;
      iVar4 = String::find_char(wVar7,0x3a);
      if (iVar4 != -1) {
        iVar4 = (int)&local_80;
        String::substr(iVar4,wVar7);
        bVar6 = SUB81(&local_80,0);
        String::strip_edges(SUB81((String *)&local_90,0),bVar6);
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
        String::substr(iVar4,wVar7);
        String::strip_edges(SUB81((String *)&local_88,0),bVar6);
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
        Variant::Variant((Variant *)local_58,(String *)&local_88);
        Variant::Variant((Variant *)local_78,(String *)&local_90);
        pVVar5 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
        if (pVVar5 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar5 = 0;
          *(int *)pVVar5 = local_58[0];
          local_58[0] = 0;
          *(undefined8 *)(pVVar5 + 8) = local_50;
          *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
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
      }
    }
  }
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_98);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HTTPClient::query_string_from_dict(Dictionary const&) */

Dictionary * HTTPClient::query_string_from_dict(Dictionary *param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  Variant *in_RDX;
  int iVar7;
  long in_FS_OFFSET;
  undefined8 local_a0;
  Array local_98 [8];
  long local_90;
  Variant local_88 [8];
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = 0;
  local_58 = &_LC6;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_a0);
  iVar7 = 0;
  Dictionary::keys();
  iVar4 = Array::size();
  if (0 < iVar4) {
    do {
      iVar4 = (int)local_98;
      Array::operator[](iVar4);
      Variant::operator_cast_to_String((Variant *)&local_58);
      String::uri_encode();
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
      Array::operator[](iVar4);
      piVar6 = (int *)Dictionary::operator[](in_RDX);
      if (*piVar6 == 0) {
        operator+((char *)&local_58,(String *)&_LC16);
        String::operator+=((String *)&local_a0,(String *)&local_58);
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
      }
      else if (*piVar6 == 0x1c) {
        Variant::operator_cast_to_Array(local_88);
        for (iVar4 = 0; iVar5 = Array::size(), iVar4 < iVar5; iVar4 = iVar4 + 1) {
          Array::operator[]((int)local_88);
          Variant::operator_cast_to_String((Variant *)&local_68);
          String::uri_encode();
          local_58 = &_LC15;
          local_78 = 0;
          local_50 = 1;
          String::parse_latin1((StrRange *)&local_78);
          operator+((char *)&local_80,(String *)&_LC16);
          String::operator+((String *)&local_70,(String *)&local_80);
          String::operator+((String *)&local_58,(String *)&local_70);
          String::operator+=((String *)&local_a0,(String *)&local_58);
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
        Array::~Array((Array *)local_88);
      }
      else {
        Variant::operator_cast_to_String((Variant *)&local_68);
        String::uri_encode();
        local_78 = 0;
        local_58 = &_LC15;
        local_50 = 1;
        String::parse_latin1((StrRange *)&local_78);
        operator+((char *)&local_80,(String *)&_LC16);
        String::operator+((String *)&local_70,(String *)&local_80);
        String::operator+((String *)&local_58,(String *)&local_70);
        String::operator+=((String *)&local_a0,(String *)&local_58);
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
      iVar7 = iVar7 + 1;
      iVar4 = Array::size();
    } while (iVar7 < iVar4);
  }
  String::substr((int)param_1,(int)(StrRange *)&local_a0);
  Array::~Array(local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* HTTPClient::verify_headers(Vector<String> const&) */

undefined8 __thiscall HTTPClient::verify_headers(HTTPClient *this,Vector *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  lVar3 = *(long *)(param_1 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  for (uVar8 = 0; (lVar3 != 0 && ((long)uVar8 < *(long *)(lVar3 + -8))); uVar8 = uVar8 + 1) {
    String::strip_edges(SUB81(&local_60,0),(bool)((char)lVar3 + (char)(uVar8 * 8)));
    if ((local_60 == 0) || (*(uint *)(local_60 + -8) < 2)) {
      local_50 = 0;
      local_40 = 0x27;
      local_48 = "Invalid HTTP header at index %d: empty.";
      String::parse_latin1((StrRange *)&local_50);
      vformat<int>((String *)&local_48,(int)(StrRange *)&local_50);
      _err_print_error("verify_headers","core/io/http_client.cpp",0x67,
                       "Condition \"sanitized.is_empty()\" is true. Returning: ERR_INVALID_PARAMETER"
                       ,(String *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      goto LAB_00100ca4;
    }
    iVar5 = String::find_char((wchar32)&local_60,0x3a);
    lVar3 = local_60;
    if (iVar5 < 1) {
      lVar3 = *(long *)(param_1 + 8);
      if (lVar3 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(lVar3 + -8);
        if ((long)uVar8 < lVar7) {
          local_50 = 0;
          plVar2 = (long *)(lVar3 + uVar8 * 8);
          lVar3 = *plVar2;
          plVar1 = (long *)(lVar3 + -0x10);
          if (lVar3 != 0) goto LAB_00100d94;
          goto LAB_00100db5;
        }
      }
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar8,lVar7,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
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
    lVar3 = *(long *)(param_1 + 8);
  }
  uVar6 = 0;
  goto LAB_00100cbf;
LAB_00100d94:
  do {
    lVar3 = *plVar1;
    if (lVar3 == 0) goto LAB_00100db5;
    LOCK();
    lVar7 = *plVar1;
    bVar9 = lVar3 == lVar7;
    if (bVar9) {
      *plVar1 = lVar3 + 1;
      lVar7 = lVar3;
    }
    UNLOCK();
  } while (!bVar9);
  if (lVar7 != -1) {
    local_50 = *plVar2;
  }
LAB_00100db5:
  local_58 = 0;
  local_48 = 
  "Invalid HTTP header at index %d: String must contain header-value pair, delimited by \':\', but was: \'%s\'."
  ;
  local_40 = 0x68;
  String::parse_latin1((StrRange *)&local_58);
  vformat<int,String>((CowData<char32_t> *)&local_48,(StrRange *)&local_58,uVar8 & 0xffffffff,
                      (CowData<char32_t> *)&local_50);
  _err_print_error("verify_headers","core/io/http_client.cpp",0x68,
                   "Condition \"sanitized.find_char(\':\') < 1\" is true. Returning: ERR_INVALID_PARAMETER"
                   ,(CowData<char32_t> *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00100ca4:
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
  uVar6 = 0x1f;
LAB_00100cbf:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HTTPClient::_bind_methods() */

void HTTPClient::_bind_methods(void)

{
  Variant *pVVar1;
  char cVar2;
  MethodBind *pMVar3;
  Variant *pVVar4;
  uint uVar5;
  long in_FS_OFFSET;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  char *local_198;
  undefined8 local_190;
  undefined *local_168;
  undefined *puStack_160;
  undefined8 local_158;
  undefined *local_148;
  undefined *puStack_140;
  undefined8 local_138;
  undefined *local_128;
  undefined *puStack_120;
  char *local_118;
  undefined8 local_110;
  Variant *local_108;
  Variant *pVStack_100;
  char **local_f8;
  char *local_e8;
  undefined *puStack_e0;
  char *local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  Variant *local_b8;
  undefined *puStack_b0;
  char *local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  Variant **local_88;
  undefined1 auStack_80 [16];
  undefined **ppuStack_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_110 = 0;
  local_128 = &_LC37;
  puStack_120 = &_LC38;
  local_118 = "tls_options";
  local_108 = (Variant *)&local_128;
  pVStack_100 = (Variant *)&puStack_120;
  local_f8 = &local_118;
  D_METHODP((char *)&local_198,(char ***)"connect_to_host",(uint)&local_108);
  Variant::Variant((Variant *)&local_88,-1);
  Variant::Variant((Variant *)&ppuStack_70,(Object *)0x0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_108 = (Variant *)&local_88;
  pVStack_100 = (Variant *)&ppuStack_70;
  pMVar3 = create_method_bind<HTTPClient,Error,String_const&,int,Ref<TLSOptions>>
                     ((_func_Error_String_ptr_int_Ref *)0x159);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_198,&local_108,2);
  pVVar4 = (Variant *)local_40;
  do {
    pVVar1 = pVVar4 + -0x18;
    pVVar4 = pVVar4 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar4 != (Variant *)&local_88);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  pVStack_100 = (Variant *)0x0;
  local_108 = (Variant *)0x1085ee;
  uVar5 = (uint)(Variant *)&local_88;
  local_88 = &local_108;
  D_METHODP((char *)&local_198,(char ***)"set_connection",uVar5);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar3 = create_method_bind<HTTPClient,Ref<StreamPeer>const&>((_func_void_Ref_ptr *)0x161);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  D_METHODP((char *)&local_198,(char ***)"get_connection",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar3 = create_method_bind<HTTPClient,Ref<StreamPeer>>((_func_Ref *)0x169);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  local_98 = 0;
  local_b8 = (Variant *)0x1085ba;
  puStack_b0 = &_LC40;
  local_a8 = "headers";
  puStack_a0 = &_LC42;
  auStack_80._8_8_ = &local_a8;
  auStack_80._0_8_ = &puStack_b0;
  local_88 = &local_b8;
  ppuStack_70 = &puStack_a0;
  D_METHODP((char *)&local_198,(char ***)"request_raw",uVar5);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar3 = create_method_bind<HTTPClient,Error,HTTPClient::Method,String_const&,Vector<String>const&,Vector<unsigned_char>const&>
                     (_request_raw);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  local_e8 = "method";
  puStack_e0 = &_LC40;
  local_d8 = "headers";
  puStack_d0 = &_LC42;
  auStack_80._8_8_ = &local_d8;
  auStack_80._0_8_ = &puStack_e0;
  local_1a8 = (char *)0x0;
  local_c8 = 0;
  local_88 = (Variant **)&local_e8;
  ppuStack_70 = &puStack_d0;
  D_METHODP((char *)&local_198,(char ***)"request",uVar5);
  Variant::Variant((Variant *)&local_88,(String *)&local_1a8);
  local_68 = (undefined1  [16])0x0;
  ppuStack_70 = (undefined **)0x0;
  local_b8 = (Variant *)&local_88;
  pMVar3 = create_method_bind<HTTPClient,Error,HTTPClient::Method,String_const&,Vector<String>const&,String_const&>
                     (_request);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_198,&local_b8,1);
  if (Variant::needs_deinit[(int)ppuStack_70] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_88];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_88];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  D_METHODP((char *)&local_198,(char ***)"close",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar3 = create_method_bind<HTTPClient>((_func_void *)0x171);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  D_METHODP((char *)&local_198,(char ***)"has_response",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar3 = create_method_bind<HTTPClient,bool>((_func_bool *)0x181);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  D_METHODP((char *)&local_198,(char ***)"is_response_chunked",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar3 = create_method_bind<HTTPClient,bool>((_func_bool *)0x189);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  D_METHODP((char *)&local_198,(char ***)"get_response_code",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar3 = create_method_bind<HTTPClient,int>((_func_int *)0x191);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  D_METHODP((char *)&local_198,(char ***)"get_response_headers",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar3 = create_method_bind<HTTPClient,Vector<String>>(_get_response_headers);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  D_METHODP((char *)&local_198,(char ***)"get_response_headers_as_dictionary",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar3 = create_method_bind<HTTPClient,Dictionary>(_get_response_headers_as_dictionary);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  D_METHODP((char *)&local_198,(char ***)"get_response_body_length",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar3 = create_method_bind<HTTPClient,long>((_func_long *)0x1a1);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  D_METHODP((char *)&local_198,(char ***)"read_response_body_chunk",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar3 = create_method_bind<HTTPClient,Vector<unsigned_char>>((_func_Vector *)0x1a9);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  puStack_b0 = (undefined *)0x0;
  local_b8 = (Variant *)0x1086ab;
  local_88 = &local_b8;
  D_METHODP((char *)&local_198,(char ***)"set_read_chunk_size",uVar5);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar3 = create_method_bind<HTTPClient,int>((_func_void_int *)0x1c1);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  D_METHODP((char *)&local_198,(char ***)"get_read_chunk_size",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar3 = create_method_bind<HTTPClient,int>((_func_int *)0x1c9);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  puStack_b0 = (undefined *)0x0;
  local_b8 = (Variant *)0x1086d9;
  local_88 = &local_b8;
  D_METHODP((char *)&local_198,(char ***)"set_blocking_mode",uVar5);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar3 = create_method_bind<HTTPClient,bool>((_func_void_bool *)0x1b1);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  D_METHODP((char *)&local_198,(char ***)"is_blocking_mode_enabled",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar3 = create_method_bind<HTTPClient,bool>((_func_bool *)0x1b9);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  D_METHODP((char *)&local_198,(char ***)"get_status",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar3 = create_method_bind<HTTPClient,HTTPClient::Status>((_func_Status *)0x179);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  D_METHODP((char *)&local_198,(char ***)&_LC65,0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar3 = create_method_bind<HTTPClient,Error>((_func_Error *)0x1d1);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  local_138 = 0;
  local_148 = &_LC37;
  puStack_140 = &_LC38;
  auStack_80._0_8_ = &puStack_140;
  local_88 = (Variant **)&local_148;
  D_METHODP((char *)&local_198,(char ***)"set_http_proxy",uVar5);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar3 = create_method_bind<HTTPClient,String_const&,int>((_func_void_String_ptr_int *)0x1d9);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  local_158 = 0;
  local_168 = &_LC37;
  puStack_160 = &_LC38;
  auStack_80._0_8_ = &puStack_160;
  local_88 = (Variant **)&local_168;
  D_METHODP((char *)&local_198,(char ***)_LC4,uVar5);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar3 = create_method_bind<HTTPClient,String_const&,int>((_func_void_String_ptr_int *)0x1e1);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  puStack_b0 = (undefined *)0x0;
  local_b8 = (Variant *)0x10871c;
  local_88 = &local_b8;
  D_METHODP((char *)&local_198,(char ***)"query_string_from_dict",uVar5);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar3 = create_method_bind<HTTPClient,String,Dictionary_const&>(query_string_from_dict);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_198);
  _scs_create((char *)&local_1b0,true);
  _scs_create((char *)&local_1b8,true);
  local_1c0 = 0;
  local_198 = "";
  local_1c8 = 0;
  local_190 = 0;
  String::parse_latin1((StrRange *)&local_1c8);
  local_1d0 = 0;
  local_198 = "blocking_mode_enabled";
  local_190 = 0x15;
  String::parse_latin1((StrRange *)&local_1d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_198,1,(StrRange *)&local_1d0,0,(StrRange *)&local_1c8,6,
             (StrRange *)&local_1c0);
  local_1d8 = 0;
  local_1a8 = "HTTPClient";
  local_1a0 = 10;
  String::parse_latin1((StrRange *)&local_1d8);
  StringName::StringName((StringName *)&local_1a8,(String *)&local_1d8,false);
  ClassDB::add_property
            ((StringName *)&local_1a8,(PropertyInfo *)&local_198,(StringName *)&local_1b8,
             (StringName *)&local_1b0,-1);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if ((((StringName::configured != '\0') &&
       ((local_1c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1b0 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_1b0,true);
  _scs_create((char *)&local_1b8,true);
  local_198 = "StreamPeer";
  local_1c0 = 0;
  local_1c8 = 0;
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c8);
  local_1d0 = 0;
  local_198 = "connection";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_198,0x18,(StrRange *)&local_1d0,0x11,(StrRange *)&local_1c8,0,
             (StrRange *)&local_1c0);
  local_1d8 = 0;
  local_1a8 = "HTTPClient";
  local_1a0 = 10;
  String::parse_latin1((StrRange *)&local_1d8);
  StringName::StringName((StringName *)&local_1a8,(String *)&local_1d8,false);
  ClassDB::add_property
            ((StringName *)&local_1a8,(PropertyInfo *)&local_198,(StringName *)&local_1b8,
             (StringName *)&local_1b0,-1);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if ((((StringName::configured != '\0') &&
       ((local_1c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1b0 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_1b0,true);
  _scs_create((char *)&local_1b8,true);
  local_198 = "256,16777216";
  local_1c0 = 0;
  local_1c8 = 0;
  local_190 = 0xc;
  String::parse_latin1((StrRange *)&local_1c8);
  local_1d0 = 0;
  local_198 = "read_chunk_size";
  local_190 = 0xf;
  String::parse_latin1((StrRange *)&local_1d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_198,2,(StrRange *)&local_1d0,1,(StrRange *)&local_1c8,6,
             (StrRange *)&local_1c0);
  local_1d8 = 0;
  local_1a8 = "HTTPClient";
  local_1a0 = 10;
  String::parse_latin1((StrRange *)&local_1d8);
  StringName::StringName((StringName *)&local_1a8,(String *)&local_1d8,false);
  ClassDB::add_property
            ((StringName *)&local_1a8,(PropertyInfo *)&local_198,(StringName *)&local_1b8,
             (StringName *)&local_1b0,-1);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if ((((StringName::configured != '\0') &&
       ((local_1c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1b0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"METHOD_GET",false);
  local_198 = "METHOD_GET";
  local_1b8 = 0;
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::Method>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"METHOD_HEAD",false);
  local_198 = "METHOD_HEAD";
  local_1b8 = 0;
  local_190 = 0xb;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::Method>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,1,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"METHOD_POST",false);
  local_198 = "METHOD_POST";
  local_1b8 = 0;
  local_190 = 0xb;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::Method>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,2,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"METHOD_PUT",false);
  local_198 = "METHOD_PUT";
  local_1b8 = 0;
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::Method>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,3,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"METHOD_DELETE",false);
  local_198 = "METHOD_DELETE";
  local_1b8 = 0;
  local_190 = 0xd;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::Method>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,4,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"METHOD_OPTIONS",false);
  local_198 = "METHOD_OPTIONS";
  local_1b8 = 0;
  local_190 = 0xe;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::Method>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,5,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"METHOD_TRACE",false);
  local_198 = "METHOD_TRACE";
  local_1b8 = 0;
  local_190 = 0xc;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::Method>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,6,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"METHOD_CONNECT",false);
  local_198 = "METHOD_CONNECT";
  local_1b8 = 0;
  local_190 = 0xe;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::Method>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,7,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"METHOD_PATCH",false);
  local_198 = "METHOD_PATCH";
  local_1b8 = 0;
  local_190 = 0xc;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::Method>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,8,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"METHOD_MAX",false);
  local_198 = "METHOD_MAX";
  local_1b8 = 0;
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::Method>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,9,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"STATUS_DISCONNECTED",false);
  local_198 = "STATUS_DISCONNECTED";
  local_1b8 = 0;
  local_190 = 0x13;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::Status>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"STATUS_RESOLVING",false);
  local_198 = "STATUS_RESOLVING";
  local_1b8 = 0;
  local_190 = 0x10;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::Status>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,1,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"STATUS_CANT_RESOLVE",false);
  local_198 = "STATUS_CANT_RESOLVE";
  local_1b8 = 0;
  local_190 = 0x13;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::Status>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,2,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"STATUS_CONNECTING",false);
  local_198 = "STATUS_CONNECTING";
  local_1b8 = 0;
  local_190 = 0x11;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::Status>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,3,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"STATUS_CANT_CONNECT",false);
  local_198 = "STATUS_CANT_CONNECT";
  local_1b8 = 0;
  local_190 = 0x13;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::Status>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,4,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"STATUS_CONNECTED",false);
  local_198 = "STATUS_CONNECTED";
  local_1b8 = 0;
  local_190 = 0x10;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::Status>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,5,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"STATUS_REQUESTING",false);
  local_198 = "STATUS_REQUESTING";
  local_1b8 = 0;
  local_190 = 0x11;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::Status>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,6,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"STATUS_BODY",false);
  local_198 = "STATUS_BODY";
  local_1b8 = 0;
  local_190 = 0xb;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::Status>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,7,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"STATUS_CONNECTION_ERROR",false);
  local_198 = "STATUS_CONNECTION_ERROR";
  local_1b8 = 0;
  local_190 = 0x17;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::Status>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,8,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"STATUS_TLS_HANDSHAKE_ERROR",false);
  local_198 = "STATUS_TLS_HANDSHAKE_ERROR";
  local_1b8 = 0;
  local_190 = 0x1a;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::Status>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,9,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_CONTINUE",false);
  local_198 = "RESPONSE_CONTINUE";
  local_1b8 = 0;
  local_190 = 0x11;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,100,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_SWITCHING_PROTOCOLS",false);
  local_198 = "RESPONSE_SWITCHING_PROTOCOLS";
  local_1b8 = 0;
  local_190 = 0x1c;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x65,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_PROCESSING",false);
  local_198 = "RESPONSE_PROCESSING";
  local_1b8 = 0;
  local_190 = 0x13;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x66,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_OK",false);
  local_198 = "RESPONSE_OK";
  local_1b8 = 0;
  local_190 = 0xb;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,200,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_CREATED",false);
  local_198 = "RESPONSE_CREATED";
  local_1b8 = 0;
  local_190 = 0x10;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0xc9,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_ACCEPTED",false);
  local_198 = "RESPONSE_ACCEPTED";
  local_1b8 = 0;
  local_190 = 0x11;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0xca,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_NON_AUTHORITATIVE_INFORMATION",false);
  local_198 = "RESPONSE_NON_AUTHORITATIVE_INFORMATION";
  local_1b8 = 0;
  local_190 = 0x26;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0xcb,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_NO_CONTENT",false);
  local_198 = "RESPONSE_NO_CONTENT";
  local_1b8 = 0;
  local_190 = 0x13;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0xcc,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_RESET_CONTENT",false);
  local_198 = "RESPONSE_RESET_CONTENT";
  local_1b8 = 0;
  local_190 = 0x16;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0xcd,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_PARTIAL_CONTENT",false);
  local_198 = "RESPONSE_PARTIAL_CONTENT";
  local_1b8 = 0;
  local_190 = 0x18;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0xce,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_MULTI_STATUS",false);
  local_198 = "RESPONSE_MULTI_STATUS";
  local_1b8 = 0;
  local_190 = 0x15;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0xcf,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_ALREADY_REPORTED",false);
  local_198 = "RESPONSE_ALREADY_REPORTED";
  local_1b8 = 0;
  local_190 = 0x19;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0xd0,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_IM_USED",false);
  local_198 = "RESPONSE_IM_USED";
  local_1b8 = 0;
  local_190 = 0x10;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0xe2,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_MULTIPLE_CHOICES",false);
  local_198 = "RESPONSE_MULTIPLE_CHOICES";
  local_1b8 = 0;
  local_190 = 0x19;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,300,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_MOVED_PERMANENTLY",false);
  local_198 = "RESPONSE_MOVED_PERMANENTLY";
  local_1b8 = 0;
  local_190 = 0x1a;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x12d,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_FOUND",false);
  local_198 = "RESPONSE_FOUND";
  local_1b8 = 0;
  local_190 = 0xe;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x12e,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_SEE_OTHER",false);
  local_198 = "RESPONSE_SEE_OTHER";
  local_1b8 = 0;
  local_190 = 0x12;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x12f,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_NOT_MODIFIED",false);
  local_198 = "RESPONSE_NOT_MODIFIED";
  local_1b8 = 0;
  local_190 = 0x15;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x130,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_USE_PROXY",false);
  local_198 = "RESPONSE_USE_PROXY";
  local_1b8 = 0;
  local_190 = 0x12;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x131,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_SWITCH_PROXY",false);
  local_198 = "RESPONSE_SWITCH_PROXY";
  local_1b8 = 0;
  local_190 = 0x15;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x132,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_TEMPORARY_REDIRECT",false);
  local_198 = "RESPONSE_TEMPORARY_REDIRECT";
  local_1b8 = 0;
  local_190 = 0x1b;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x133,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_PERMANENT_REDIRECT",false);
  local_198 = "RESPONSE_PERMANENT_REDIRECT";
  local_1b8 = 0;
  local_190 = 0x1b;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x134,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_BAD_REQUEST",false);
  local_198 = "RESPONSE_BAD_REQUEST";
  local_1b8 = 0;
  local_190 = 0x14;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,400,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_UNAUTHORIZED",false);
  local_198 = "RESPONSE_UNAUTHORIZED";
  local_1b8 = 0;
  local_190 = 0x15;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x191,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_PAYMENT_REQUIRED",false);
  local_198 = "RESPONSE_PAYMENT_REQUIRED";
  local_1b8 = 0;
  local_190 = 0x19;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x192,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_FORBIDDEN",false);
  local_198 = "RESPONSE_FORBIDDEN";
  local_1b8 = 0;
  local_190 = 0x12;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x193,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_NOT_FOUND",false);
  local_198 = "RESPONSE_NOT_FOUND";
  local_1b8 = 0;
  local_190 = 0x12;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x194,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_METHOD_NOT_ALLOWED",false);
  local_198 = "RESPONSE_METHOD_NOT_ALLOWED";
  local_1b8 = 0;
  local_190 = 0x1b;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x195,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_NOT_ACCEPTABLE",false);
  local_198 = "RESPONSE_NOT_ACCEPTABLE";
  local_1b8 = 0;
  local_190 = 0x17;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x196,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_PROXY_AUTHENTICATION_REQUIRED",false);
  local_198 = "RESPONSE_PROXY_AUTHENTICATION_REQUIRED";
  local_1b8 = 0;
  local_190 = 0x26;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x197,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_REQUEST_TIMEOUT",false);
  local_198 = "RESPONSE_REQUEST_TIMEOUT";
  local_1b8 = 0;
  local_190 = 0x18;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x198,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_CONFLICT",false);
  local_198 = "RESPONSE_CONFLICT";
  local_1b8 = 0;
  local_190 = 0x11;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x199,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_GONE",false);
  local_198 = "RESPONSE_GONE";
  local_1b8 = 0;
  local_190 = 0xd;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x19a,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_LENGTH_REQUIRED",false);
  local_198 = "RESPONSE_LENGTH_REQUIRED";
  local_1b8 = 0;
  local_190 = 0x18;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x19b,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_PRECONDITION_FAILED",false);
  local_198 = "RESPONSE_PRECONDITION_FAILED";
  local_1b8 = 0;
  local_190 = 0x1c;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x19c,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_REQUEST_ENTITY_TOO_LARGE",false);
  local_198 = "RESPONSE_REQUEST_ENTITY_TOO_LARGE";
  local_1b8 = 0;
  local_190 = 0x21;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x19d,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_REQUEST_URI_TOO_LONG",false);
  local_198 = "RESPONSE_REQUEST_URI_TOO_LONG";
  local_1b8 = 0;
  local_190 = 0x1d;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x19e,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_UNSUPPORTED_MEDIA_TYPE",false);
  local_198 = "RESPONSE_UNSUPPORTED_MEDIA_TYPE";
  local_1b8 = 0;
  local_190 = 0x1f;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x19f,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_REQUESTED_RANGE_NOT_SATISFIABLE",false);
  local_198 = "RESPONSE_REQUESTED_RANGE_NOT_SATISFIABLE";
  local_1b8 = 0;
  local_190 = 0x28;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x1a0,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_EXPECTATION_FAILED",false);
  local_198 = "RESPONSE_EXPECTATION_FAILED";
  local_1b8 = 0;
  local_190 = 0x1b;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x1a1,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_IM_A_TEAPOT",false);
  local_198 = "RESPONSE_IM_A_TEAPOT";
  local_1b8 = 0;
  local_190 = 0x14;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x1a2,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_MISDIRECTED_REQUEST",false);
  local_198 = "RESPONSE_MISDIRECTED_REQUEST";
  local_1b8 = 0;
  local_190 = 0x1c;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x1a5,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_UNPROCESSABLE_ENTITY",false);
  local_198 = "RESPONSE_UNPROCESSABLE_ENTITY";
  local_1b8 = 0;
  local_190 = 0x1d;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x1a6,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_LOCKED",false);
  local_198 = "RESPONSE_LOCKED";
  local_1b8 = 0;
  local_190 = 0xf;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x1a7,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_FAILED_DEPENDENCY",false);
  local_198 = "RESPONSE_FAILED_DEPENDENCY";
  local_1b8 = 0;
  local_190 = 0x1a;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x1a8,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_UPGRADE_REQUIRED",false);
  local_198 = "RESPONSE_UPGRADE_REQUIRED";
  local_1b8 = 0;
  local_190 = 0x19;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x1aa,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_PRECONDITION_REQUIRED",false);
  local_198 = "RESPONSE_PRECONDITION_REQUIRED";
  local_1b8 = 0;
  local_190 = 0x1e;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x1ac,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_TOO_MANY_REQUESTS",false);
  local_198 = "RESPONSE_TOO_MANY_REQUESTS";
  local_1b8 = 0;
  local_190 = 0x1a;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x1ad,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_REQUEST_HEADER_FIELDS_TOO_LARGE",false);
  local_198 = "RESPONSE_REQUEST_HEADER_FIELDS_TOO_LARGE";
  local_1b8 = 0;
  local_190 = 0x28;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x1af,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_UNAVAILABLE_FOR_LEGAL_REASONS",false);
  local_198 = "RESPONSE_UNAVAILABLE_FOR_LEGAL_REASONS";
  local_1b8 = 0;
  local_190 = 0x26;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x1c3,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_INTERNAL_SERVER_ERROR",false);
  local_198 = "RESPONSE_INTERNAL_SERVER_ERROR";
  local_1b8 = 0;
  local_190 = 0x1e;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,500,false);
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_NOT_IMPLEMENTED",false);
  local_198 = "RESPONSE_NOT_IMPLEMENTED";
  local_1b8 = 0;
  local_190 = 0x18;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x1f5,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_BAD_GATEWAY",false);
  local_198 = "RESPONSE_BAD_GATEWAY";
  local_1b8 = 0;
  local_190 = 0x14;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x1f6,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_SERVICE_UNAVAILABLE",false);
  local_198 = "RESPONSE_SERVICE_UNAVAILABLE";
  local_1b8 = 0;
  local_190 = 0x1c;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x1f7,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_GATEWAY_TIMEOUT",false);
  local_198 = "RESPONSE_GATEWAY_TIMEOUT";
  local_1b8 = 0;
  local_190 = 0x18;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x1f8,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_HTTP_VERSION_NOT_SUPPORTED",false);
  local_198 = "RESPONSE_HTTP_VERSION_NOT_SUPPORTED";
  local_1b8 = 0;
  local_190 = 0x23;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x1f9,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_VARIANT_ALSO_NEGOTIATES",false);
  local_198 = "RESPONSE_VARIANT_ALSO_NEGOTIATES";
  local_1b8 = 0;
  local_190 = 0x20;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x1fa,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_INSUFFICIENT_STORAGE",false);
  local_198 = "RESPONSE_INSUFFICIENT_STORAGE";
  local_1b8 = 0;
  local_190 = 0x1d;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x1fb,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_LOOP_DETECTED",false);
  local_198 = "RESPONSE_LOOP_DETECTED";
  local_1b8 = 0;
  local_190 = 0x16;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x1fc,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_NOT_EXTENDED",false);
  local_198 = "RESPONSE_NOT_EXTENDED";
  local_1b8 = 0;
  local_190 = 0x15;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x1fe,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1a8,"RESPONSE_NETWORK_AUTH_REQUIRED",false);
  local_198 = "RESPONSE_NETWORK_AUTH_REQUIRED";
  local_1b8 = 0;
  local_190 = 0x1e;
  String::parse_latin1((StrRange *)&local_1b8);
  __constant_get_enum_name<HTTPClient::ResponseCode>((StringName *)&local_1b0);
  local_1c0 = 0;
  local_198 = "HTTPClient";
  local_190 = 10;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1b0,(StringName *)&local_1a8,0x1ff,false)
  ;
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_ref(CowData<String> const&) [clone .part.0] */

void __thiscall CowData<String>::_ref(CowData<String> *this,CowData *param_1)

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



/* HTTPClient::_get_response_headers() */

void HTTPClient::_get_response_headers(void)

{
  CowData<char32_t> *this;
  undefined8 *puVar1;
  long lVar2;
  CowData *pCVar3;
  long *in_RSI;
  long in_RDI;
  ulong uVar4;
  long lVar5;
  long in_FS_OFFSET;
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (long *)0x0;
  (**(code **)(*in_RSI + 0x198))();
  *(undefined8 *)(in_RDI + 8) = 0;
  if (local_48 == (long *)0x0) goto LAB_00107c39;
  lVar2 = (long)(int)local_48[2];
  if (lVar2 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
LAB_00107be1:
    if (local_48 == (long *)0x0) goto LAB_00107c39;
  }
  else if (lVar2 != 0) {
    CowData<String>::_copy_on_write((CowData<String> *)(in_RDI + 8));
    uVar4 = lVar2 * 8 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    puVar1 = (undefined8 *)Memory::alloc_static((uVar4 | uVar4 >> 0x20) + 0x11,false);
    if (puVar1 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
    }
    else {
      *puVar1 = 1;
      *(undefined8 **)(in_RDI + 8) = puVar1 + 2;
      memset(puVar1 + 2,0,lVar2 * 8);
      puVar1[1] = lVar2;
    }
    goto LAB_00107be1;
  }
  pCVar3 = (CowData *)*local_48;
  if (pCVar3 != (CowData *)0x0) {
    lVar2 = 0;
    do {
      if (*(long *)(in_RDI + 8) == 0) {
        lVar5 = 0;
LAB_00107c73:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar2,lVar5,"p_index","size()","",false,
                   false);
      }
      else {
        lVar5 = *(long *)(*(long *)(in_RDI + 8) + -8);
        if (lVar5 <= lVar2) goto LAB_00107c73;
        CowData<String>::_copy_on_write((CowData<String> *)(in_RDI + 8));
        this = (CowData<char32_t> *)(*(long *)(in_RDI + 8) + lVar2 * 8);
        if (*(long *)this != *(long *)pCVar3) {
          CowData<char32_t>::_ref(this,pCVar3);
        }
      }
      pCVar3 = *(CowData **)(pCVar3 + 8);
      lVar2 = lVar2 + 1;
    } while (pCVar3 != (CowData *)0x0);
  }
LAB_00107c39:
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_48);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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



/* HTTPClient::is_class_ptr(void*) const */

uint __thiscall HTTPClient::is_class_ptr(HTTPClient *this,void *param_1)

{
  return (uint)CONCAT71(0x1191,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1191,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1191,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* HTTPClient::_getv(StringName const&, Variant&) const */

undefined8 HTTPClient::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* HTTPClient::_setv(StringName const&, Variant const&) */

undefined8 HTTPClient::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* HTTPClient::_validate_propertyv(PropertyInfo&) const */

void HTTPClient::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* HTTPClient::_property_can_revertv(StringName const&) const */

undefined8 HTTPClient::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* HTTPClient::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HTTPClient::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* HTTPClient::_notificationv(int, bool) */

void HTTPClient::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTR<String, Dictionary const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<String,Dictionary_const&>::_gen_argument_type
          (MethodBindTR<String,Dictionary_const&> *this,int param_1)

{
  return (-(param_1 == 0) & 0x17U) + 4;
}



/* MethodBindTR<String, Dictionary const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<String,Dictionary_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<String_const&,int>::_gen_argument_type(MethodBindT<String_const&,int> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 2U) + 2;
  }
  return cVar1;
}



/* MethodBindT<String const&, int>::get_argument_meta(int) const */

char __thiscall
MethodBindT<String_const&,int>::get_argument_meta(MethodBindT<String_const&,int> *this,int param_1)

{
  return (param_1 == 1) * '\x03';
}



/* MethodBindTR<Error>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Error>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTR<Error>::get_argument_meta(int) const */

undefined8 MethodBindTR<Error>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<HTTPClient::Status>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<HTTPClient::Status>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<HTTPClient::Status>::get_argument_meta(int) const */

undefined8 MethodBindTRC<HTTPClient::Status>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<bool>::_gen_argument_type(int) const */

bool __thiscall MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this,int param_1)

{
  return param_1 == 0;
}



/* MethodBindT<bool>::get_argument_meta(int) const */

undefined8 MethodBindT<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<int>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<int>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int>::get_argument_meta(MethodBindT<int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTR<Vector<unsigned char>>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Vector<unsigned_char>>::_gen_argument_type(int param_1)

{
  return 0x1d;
}



/* MethodBindTR<Vector<unsigned char>>::get_argument_meta(int) const */

undefined8 MethodBindTR<Vector<unsigned_char>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<long>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<long>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<long>::get_argument_meta(int) const */

int __thiscall MethodBindTRC<long>::get_argument_meta(MethodBindTRC<long> *this,int param_1)

{
  return (param_1 >> 0x1f) * -4;
}



/* MethodBindTR<Dictionary>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Dictionary>::_gen_argument_type(int param_1)

{
  return 0x1b;
}



/* MethodBindTR<Dictionary>::get_argument_meta(int) const */

undefined8 MethodBindTR<Dictionary>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Vector<String>>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Vector<String>>::_gen_argument_type(int param_1)

{
  return 0x22;
}



/* MethodBindTR<Vector<String>>::get_argument_meta(int) const */

undefined8 MethodBindTR<Vector<String>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindTRC<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTRC<bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type(int) const */

undefined8 MethodBindT<>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type_info(int) const */

undefined8 MethodBindT<>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined4 *)CONCAT44(in_register_0000003c,param_1) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x18) = 0;
  *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x20) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x28) = 6;
  *(undefined1 (*) [16])(CONCAT44(in_register_0000003c,param_1) + 8) = (undefined1  [16])0x0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* MethodBindT<>::get_argument_meta(int) const */

undefined8 MethodBindT<>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, HTTPClient::Method, String const&, Vector<String> const&, String
   const&>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,String_const&>::
_gen_argument_type(MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,String_const&>
                   *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if ((param_1 - 1U < 3) && (uVar1 = 4, param_1 == 2)) {
    uVar1 = 0x22;
  }
  return uVar1;
}



/* MethodBindTR<Error, HTTPClient::Method, String const&, Vector<String> const&, String
   const&>::get_argument_meta(int) const */

undefined8
MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,String_const&>::
get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, HTTPClient::Method, String const&, Vector<String> const&, Vector<unsigned
   char> const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,Vector<unsigned_char>const&>
::_gen_argument_type
          (MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,Vector<unsigned_char>const&>
           *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\x02';
  if ((param_1 - 1U < 3) && (cVar1 = '\x04', param_1 != 1)) {
    cVar1 = (param_1 == 2) * '\x05' + '\x1d';
  }
  return cVar1;
}



/* MethodBindTR<Error, HTTPClient::Method, String const&, Vector<String> const&, Vector<unsigned
   char> const&>::get_argument_meta(int) const */

undefined8
MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,Vector<unsigned_char>const&>
::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Ref<StreamPeer>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<StreamPeer>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<StreamPeer>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<StreamPeer>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<StreamPeer> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<StreamPeer>const&>::_gen_argument_type
          (MethodBindT<Ref<StreamPeer>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<StreamPeer> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<StreamPeer>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, String const&, int, Ref<TLSOptions> >::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindTR<Error,String_const&,int,Ref<TLSOptions>>::_gen_argument_type
          (MethodBindTR<Error,String_const&,int,Ref<TLSOptions>> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if ((((uint)param_1 < 3) && (uVar1 = 4, param_1 != 0)) && (uVar1 = 2, param_1 != 1)) {
    uVar1 = 0x18;
  }
  return uVar1;
}



/* MethodBindTR<Error, String const&, int, Ref<TLSOptions> >::get_argument_meta(int) const */

char __thiscall
MethodBindTR<Error,String_const&,int,Ref<TLSOptions>>::get_argument_meta
          (MethodBindTR<Error,String_const&,int,Ref<TLSOptions>> *this,int param_1)

{
  return (param_1 == 1) * '\x03';
}



/* MethodBindTR<Error, String const&, int, Ref<TLSOptions> >::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,int,Ref<TLSOptions>>::~MethodBindTR
          (MethodBindTR<Error,String_const&,int,Ref<TLSOptions>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118a68;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, String const&, int, Ref<TLSOptions> >::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,int,Ref<TLSOptions>>::~MethodBindTR
          (MethodBindTR<Error,String_const&,int,Ref<TLSOptions>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118a68;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<StreamPeer> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<StreamPeer>const&>::~MethodBindT(MethodBindT<Ref<StreamPeer>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118ac8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<StreamPeer> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<StreamPeer>const&>::~MethodBindT(MethodBindT<Ref<StreamPeer>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118ac8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<StreamPeer>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<StreamPeer>>::~MethodBindTRC(MethodBindTRC<Ref<StreamPeer>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118b28;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<StreamPeer>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<StreamPeer>>::~MethodBindTRC(MethodBindTRC<Ref<StreamPeer>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118b28;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, HTTPClient::Method, String const&, Vector<String> const&, Vector<unsigned
   char> const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,Vector<unsigned_char>const&>
::~MethodBindTR(MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,Vector<unsigned_char>const&>
                *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118b88;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, HTTPClient::Method, String const&, Vector<String> const&, Vector<unsigned
   char> const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,Vector<unsigned_char>const&>
::~MethodBindTR(MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,Vector<unsigned_char>const&>
                *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118b88;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, HTTPClient::Method, String const&, Vector<String> const&, String
   const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,String_const&>::
~MethodBindTR(MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,String_const&>
              *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118be8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, HTTPClient::Method, String const&, Vector<String> const&, String
   const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,String_const&>::
~MethodBindTR(MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,String_const&>
              *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118be8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118c48;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118c48;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Vector<String>>::~MethodBindTR() */

void __thiscall MethodBindTR<Vector<String>>::~MethodBindTR(MethodBindTR<Vector<String>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118d68;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Vector<String>>::~MethodBindTR() */

void __thiscall MethodBindTR<Vector<String>>::~MethodBindTR(MethodBindTR<Vector<String>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118d68;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Dictionary>::~MethodBindTR() */

void __thiscall MethodBindTR<Dictionary>::~MethodBindTR(MethodBindTR<Dictionary> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118dc8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Dictionary>::~MethodBindTR() */

void __thiscall MethodBindTR<Dictionary>::~MethodBindTR(MethodBindTR<Dictionary> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118dc8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<long>::~MethodBindTRC() */

void __thiscall MethodBindTRC<long>::~MethodBindTRC(MethodBindTRC<long> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118e28;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<long>::~MethodBindTRC() */

void __thiscall MethodBindTRC<long>::~MethodBindTRC(MethodBindTRC<long> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118e28;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Vector<unsigned char>>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<unsigned_char>>::~MethodBindTR(MethodBindTR<Vector<unsigned_char>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118e88;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Vector<unsigned char>>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<unsigned_char>>::~MethodBindTR(MethodBindTR<Vector<unsigned_char>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118e88;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118ee8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118ee8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118d08;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118d08;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118f48;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118f48;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118ca8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118ca8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<HTTPClient::Status>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<HTTPClient::Status>::~MethodBindTRC(MethodBindTRC<HTTPClient::Status> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118fa8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<HTTPClient::Status>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<HTTPClient::Status>::~MethodBindTRC(MethodBindTRC<HTTPClient::Status> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118fa8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error>::~MethodBindTR() */

void __thiscall MethodBindTR<Error>::~MethodBindTR(MethodBindTR<Error> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00119008;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error>::~MethodBindTR() */

void __thiscall MethodBindTR<Error>::~MethodBindTR(MethodBindTR<Error> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00119008;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&, int>::~MethodBindT() */

void __thiscall MethodBindT<String_const&,int>::~MethodBindT(MethodBindT<String_const&,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00119068;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&, int>::~MethodBindT() */

void __thiscall MethodBindT<String_const&,int>::~MethodBindT(MethodBindT<String_const&,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00119068;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<String, Dictionary const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<String,Dictionary_const&>::~MethodBindTR(MethodBindTR<String,Dictionary_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001190c8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<String, Dictionary const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<String,Dictionary_const&>::~MethodBindTR(MethodBindTR<String,Dictionary_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001190c8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* HTTPClient::_get_class_namev() const */

undefined8 * HTTPClient::_get_class_namev(void)

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
LAB_00109363:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109363;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HTTPClient");
      goto LAB_001093ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HTTPClient");
LAB_001093ce:
  return &_get_class_namev()::_class_name_static;
}



/* HTTPClient::get_class() const */

void HTTPClient::get_class(void)

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



/* MethodBindTRC<long>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<long>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC6;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010961c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010961c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<unsigned char>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Vector<unsigned_char>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC6;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x1d;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010979c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010979c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<String>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Vector<String>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC6;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x22;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010991c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010991c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Dictionary>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC6;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x1b;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00109a9c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00109a9c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<StreamPeer>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<StreamPeer>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "StreamPeer";
  local_40 = 10;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) {
      StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
      goto LAB_00109ba0;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_00109ba0:
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
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC6;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 1;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00109dbc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00109dbc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC6;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00109f3c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00109f3c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
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
            if (lVar5 == 0) goto LAB_0010a1af;
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
LAB_0010a1af:
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
    if (cVar6 != '\0') goto LAB_0010a263;
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
              if (lVar5 == 0) goto LAB_0010a313;
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
LAB_0010a313:
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
      if (cVar6 != '\0') goto LAB_0010a263;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_0010a263:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HTTPClient::is_class(String const&) const */

undefined8 __thiscall HTTPClient::is_class(HTTPClient *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010a43f;
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
LAB_0010a43f:
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
    if (cVar5 != '\0') goto LAB_0010a4f3;
  }
  cVar5 = String::operator==(param_1,"HTTPClient");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010a4f3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
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
LAB_0010a6b8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010a6b8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x0010a6d6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x0010a6d6:
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



/* HTTPClient::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HTTPClient::_get_property_listv(HTTPClient *this,List *param_1,bool param_2)

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
  local_78 = "HTTPClient";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HTTPClient";
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
LAB_0010aab8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010aab8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010aad5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010aad5:
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
  StringName::StringName((StringName *)&local_78,"HTTPClient",false);
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



/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x10);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plVar1[-1];
      *(undefined8 *)(this + 0x10) = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
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



/* WARNING: Removing unreachable block (ram,0x0010b1b8) */
/* WARNING: Removing unreachable block (ram,0x0010b34d) */
/* WARNING: Removing unreachable block (ram,0x0010b359) */
/* String vformat<int>(String const&, int const) */

String * vformat<int>(String *param_1,int param_2)

{
  Variant *this;
  int in_EDX;
  undefined4 in_register_00000034;
  int iVar1;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0010b4f0) */
/* WARNING: Removing unreachable block (ram,0x0010b685) */
/* WARNING: Removing unreachable block (ram,0x0010b691) */
/* String vformat<int, String>(String const&, int const, String const) */

undefined8 * vformat<int,String>(undefined8 *param_1,bool *param_2,int param_3,String *param_4)

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



/* MethodBindTR<String, Dictionary const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<String,Dictionary_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX != 0) {
    local_a0 = 0;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._0_8_;
    local_60 = auVar2 << 0x40;
    local_68 = &_LC6;
    String::parse_latin1((StrRange *)&local_a0);
    local_a8 = 0;
    *puVar7 = 4;
    puVar7[6] = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
    if (local_a0 == 0) {
      puVar7[10] = 6;
LAB_0010b8b7:
      StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_a0);
      puVar7[10] = 6;
      if (puVar7[6] != 0x11) goto LAB_0010b8b7;
      StringName::StringName((StringName *)&local_68,(String *)(puVar7 + 8),false);
      if (*(undefined **)(puVar7 + 4) == local_68) {
        if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar7 + 4) = local_68;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    goto LAB_0010b8f2;
  }
  local_80 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_78 = 0;
  local_70 = 6;
  local_a8 = 0;
  local_b0 = 0;
  local_68 = &_LC6;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._0_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_b0);
  local_b8 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1b);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_b0 == 0) {
LAB_0010b928:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_a8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_b0);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010b928;
    StringName::StringName((StringName *)&local_a0,(String *)&local_48,false);
    if (local_60._8_8_ == local_a0) {
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_a0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
  if (local_90._0_8_ != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    local_90._0_8_ = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
  }
  if (local_90._8_8_ != local_60._8_8_) {
    StringName::unref();
    local_90._8_8_ = local_60._8_8_;
    local_60._8_8_ = 0;
  }
  local_80 = CONCAT44(local_80._4_4_,local_50);
  if (local_78 != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_78 = local_48;
    local_48 = 0;
  }
  local_70 = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  uVar6 = local_90._8_8_;
  uVar5 = local_90._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_90._8_8_;
  local_90 = auVar4 << 0x40;
  *puVar7 = (undefined4)local_98;
  *(undefined8 *)(puVar7 + 2) = uVar5;
  *(undefined8 *)(puVar7 + 4) = uVar6;
  puVar7[6] = (undefined4)local_80;
  *(long *)(puVar7 + 8) = local_78;
  puVar7[10] = local_70;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
LAB_0010b8f2:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<Ref<StreamPeer> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<StreamPeer>const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0010bad9;
  local_78 = 0;
  local_68 = "StreamPeer";
  local_80 = 0;
  local_60._0_8_ = 10;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010bc95:
    local_40 = 6;
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
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 == 0x11) goto LAB_0010bc95;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar4 = local_68._0_4_;
  if (*(long *)(puVar4 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
    uVar2 = local_60._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined8 *)(puVar4 + 2) = uVar2;
  }
  if (*(long *)(puVar4 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar2 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar4 + 4) = uVar2;
  }
  puVar4[6] = local_50;
  if (*(long *)(puVar4 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
    lVar3 = local_48;
    local_48 = 0;
    *(long *)(puVar4 + 8) = lVar3;
  }
  puVar4[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_0010bad9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_0010bd49;
  local_78 = 0;
  local_68 = &_LC6;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010be45:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010be45;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_0010bd49:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_0010bfb9;
  local_78 = 0;
  local_68 = &_LC6;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010c0b5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010c0b5;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_0010bfb9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBind* create_method_bind<HTTPClient, Error, String const&, int, Ref<TLSOptions> >(Error
   (HTTPClient::*)(String const&, int, Ref<TLSOptions>)) */

MethodBind *
create_method_bind<HTTPClient,Error,String_const&,int,Ref<TLSOptions>>
          (_func_Error_String_ptr_int_Ref *param_1)

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
  *(_func_Error_String_ptr_int_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00118a68;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "HTTPClient";
  local_30 = 10;
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



/* MethodBind* create_method_bind<HTTPClient, Ref<StreamPeer> const&>(void
   (HTTPClient::*)(Ref<StreamPeer> const&)) */

MethodBind * create_method_bind<HTTPClient,Ref<StreamPeer>const&>(_func_void_Ref_ptr *param_1)

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
  *(_func_void_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00118ac8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "HTTPClient";
  local_30 = 10;
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



/* MethodBind* create_method_bind<HTTPClient, Ref<StreamPeer>>(Ref<StreamPeer> (HTTPClient::*)()
   const) */

MethodBind * create_method_bind<HTTPClient,Ref<StreamPeer>>(_func_Ref *param_1)

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
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00118b28;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "HTTPClient";
  local_30 = 10;
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



/* MethodBind* create_method_bind<HTTPClient, Error, HTTPClient::Method, String const&,
   Vector<String> const&, Vector<unsigned char> const&>(Error (HTTPClient::*)(HTTPClient::Method,
   String const&, Vector<String> const&, Vector<unsigned char> const&)) */

MethodBind *
create_method_bind<HTTPClient,Error,HTTPClient::Method,String_const&,Vector<String>const&,Vector<unsigned_char>const&>
          (_func_Error_Method_String_ptr_Vector_ptr_Vector_ptr *param_1)

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
  *(_func_Error_Method_String_ptr_Vector_ptr_Vector_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00118b88;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "HTTPClient";
  local_30 = 10;
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



/* MethodBind* create_method_bind<HTTPClient, Error, HTTPClient::Method, String const&,
   Vector<String> const&, String const&>(Error (HTTPClient::*)(HTTPClient::Method, String const&,
   Vector<String> const&, String const&)) */

MethodBind *
create_method_bind<HTTPClient,Error,HTTPClient::Method,String_const&,Vector<String>const&,String_const&>
          (_func_Error_Method_String_ptr_Vector_ptr_String_ptr *param_1)

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
  *(_func_Error_Method_String_ptr_Vector_ptr_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00118be8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "HTTPClient";
  local_30 = 10;
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



/* MethodBind* create_method_bind<HTTPClient>(void (HTTPClient::*)()) */

MethodBind * create_method_bind<HTTPClient>(_func_void *param_1)

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
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_00118c48;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "HTTPClient";
  local_30 = 10;
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



/* MethodBind* create_method_bind<HTTPClient, bool>(bool (HTTPClient::*)() const) */

MethodBind * create_method_bind<HTTPClient,bool>(_func_bool *param_1)

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
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00118ca8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "HTTPClient";
  local_30 = 10;
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



/* MethodBind* create_method_bind<HTTPClient, int>(int (HTTPClient::*)() const) */

MethodBind * create_method_bind<HTTPClient,int>(_func_int *param_1)

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
  *(_func_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00118d08;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "HTTPClient";
  local_30 = 10;
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



/* MethodBind* create_method_bind<HTTPClient, Vector<String>>(Vector<String> (HTTPClient::*)()) */

MethodBind * create_method_bind<HTTPClient,Vector<String>>(_func_Vector *param_1)

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
  *(_func_Vector **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00118d68;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "HTTPClient";
  local_30 = 10;
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



/* MethodBind* create_method_bind<HTTPClient, Dictionary>(Dictionary (HTTPClient::*)()) */

MethodBind * create_method_bind<HTTPClient,Dictionary>(_func_Dictionary *param_1)

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
  *(_func_Dictionary **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00118dc8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "HTTPClient";
  local_30 = 10;
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



/* MethodBind* create_method_bind<HTTPClient, long>(long (HTTPClient::*)() const) */

MethodBind * create_method_bind<HTTPClient,long>(_func_long *param_1)

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
  *(_func_long **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00118e28;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "HTTPClient";
  local_30 = 10;
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



/* MethodBind* create_method_bind<HTTPClient, Vector<unsigned char>>(Vector<unsigned char>
   (HTTPClient::*)()) */

MethodBind * create_method_bind<HTTPClient,Vector<unsigned_char>>(_func_Vector *param_1)

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
  *(_func_Vector **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00118e88;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "HTTPClient";
  local_30 = 10;
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



/* MethodBind* create_method_bind<HTTPClient, int>(void (HTTPClient::*)(int)) */

MethodBind * create_method_bind<HTTPClient,int>(_func_void_int *param_1)

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
  *(_func_void_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00118ee8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "HTTPClient";
  local_30 = 10;
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



/* MethodBind* create_method_bind<HTTPClient, bool>(void (HTTPClient::*)(bool)) */

MethodBind * create_method_bind<HTTPClient,bool>(_func_void_bool *param_1)

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
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00118f48;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "HTTPClient";
  local_30 = 10;
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



/* MethodBind* create_method_bind<HTTPClient, HTTPClient::Status>(HTTPClient::Status
   (HTTPClient::*)() const) */

MethodBind * create_method_bind<HTTPClient,HTTPClient::Status>(_func_Status *param_1)

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
  *(_func_Status **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00118fa8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "HTTPClient";
  local_30 = 10;
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



/* MethodBind* create_method_bind<HTTPClient, Error>(Error (HTTPClient::*)()) */

MethodBind * create_method_bind<HTTPClient,Error>(_func_Error *param_1)

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
  *(_func_Error **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00119008;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "HTTPClient";
  local_30 = 10;
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



/* MethodBind* create_method_bind<HTTPClient, String const&, int>(void (HTTPClient::*)(String
   const&, int)) */

MethodBind * create_method_bind<HTTPClient,String_const&,int>(_func_void_String_ptr_int *param_1)

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
  *(_func_void_String_ptr_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00119068;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "HTTPClient";
  local_30 = 10;
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



/* MethodBind* create_method_bind<HTTPClient, String, Dictionary const&>(String
   (HTTPClient::*)(Dictionary const&)) */

MethodBind *
create_method_bind<HTTPClient,String,Dictionary_const&>(_func_String_Dictionary_ptr *param_1)

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
  *(_func_String_Dictionary_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001190c8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "HTTPClient";
  local_30 = 10;
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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x10d79a);
  if ((local_50 != 0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_48 = &_LC17;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == 0) {
      lVar4 = 0;
      lVar3 = -2;
    }
    else {
      lVar4 = *(long *)(local_50 + -8);
      lVar3 = lVar4 + -2;
      if (-1 < lVar3) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar3 * 8));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_0010d85b;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar4,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_60 = 0;
  local_48 = &_LC17;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
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
LAB_0010d85b:
  CowData<String>::_unref((CowData<String> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Error, void>::get_class_info() */

GetTypeInfo<Error,void> * __thiscall
GetTypeInfo<Error,void>::get_class_info(GetTypeInfo<Error,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "Error";
  local_40 = 5;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<HTTPClient::Status>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<HTTPClient::Status>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "HTTPClient::Status";
  local_40 = 0x12;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HTTPClient::_initialize_classv() */

void HTTPClient::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
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
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "HTTPClient";
    local_60 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
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
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Error>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 5;
  local_38 = "Error";
  String::parse_latin1((StrRange *)&local_40);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_38,(String *)&local_40);
  StringName::StringName((StringName *)&local_48,(String *)&local_38,false);
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 0x10006;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  pcVar3 = local_38;
  if (local_38 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

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



/* WARNING: Removing unreachable block (ram,0x0010e148) */
/* WARNING: Removing unreachable block (ram,0x0010e2dd) */
/* WARNING: Removing unreachable block (ram,0x0010e2e9) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  Variant *this;
  int iVar1;
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
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<String, Dictionary const&>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTR<String,Dictionary_const&>::validated_call
          (MethodBindTR<String,Dictionary_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  char *pcVar1;
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e4bc;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8);
  if (*(char **)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  pcVar1 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar3 = (long *)(local_48 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar1 + -0x10,false);
    }
  }
LAB_0010e4bc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<String, Dictionary const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<String,Dictionary_const&>::ptrcall
          (MethodBindTR<String,Dictionary_const&> *this,Object *param_1,void **param_2,void *param_3
          )

{
  char *pcVar1;
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e6e1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  pcVar1 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar3 = (long *)(local_48 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar1 + -0x10,false);
    }
  }
LAB_0010e6e1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&,int>::validated_call
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
      goto LAB_0010ea41;
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
                    /* WARNING: Could not recover jumptable at 0x0010e8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(undefined4 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_0010ea41:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&,int>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010ec29;
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
                    /* WARNING: Could not recover jumptable at 0x0010eaaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               **(undefined4 **)((long)param_3 + 8));
    return;
  }
LAB_0010ec29:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Error>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC165,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ed80;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
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
LAB_0010ed80:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Error>::validated_call
          (MethodBindTR<Error> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010efe4;
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
LAB_0010efe4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error>::ptrcall(MethodBindTR<Error> *this,Object *param_1,void **param_2,void *param_3)

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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f193;
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
LAB_0010f193:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<HTTPClient::Status>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<HTTPClient::Status>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC165,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f3c0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
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
LAB_0010f3c0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<HTTPClient::Status>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<HTTPClient::Status>::validated_call
          (MethodBindTRC<HTTPClient::Status> *this,Object *param_1,Variant **param_2,
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
      goto LAB_0010f624;
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
LAB_0010f624:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<HTTPClient::Status>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<HTTPClient::Status>::ptrcall
          (MethodBindTRC<HTTPClient::Status> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010f7d3;
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
LAB_0010f7d3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010fb11;
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
                    /* WARNING: Could not recover jumptable at 0x0010f99d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010fb11:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010fcf9;
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
                    /* WARNING: Could not recover jumptable at 0x0010fb82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_0010fcf9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010fed1;
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
                    /* WARNING: Could not recover jumptable at 0x0010fd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010fed1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_001100b1;
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
                    /* WARNING: Could not recover jumptable at 0x0010ff3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_001100b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<unsigned char>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTR<Vector<unsigned_char>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  char *pcVar2;
  long lVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  long local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC165,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar2 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001101c0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)((Vector *)&local_58);
      Variant::Variant((Variant *)local_48,(Vector *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      lVar3 = local_50;
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_50 != 0) {
        LOCK();
        plVar6 = (long *)(local_50 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
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
LAB_001101c0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<unsigned char>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Vector<unsigned_char>>::validated_call
          (MethodBindTR<Vector<unsigned_char>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  long local_40 [2];
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
    if (local_48 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10e338;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011045b;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<unsigned_char>::_ref
              ((CowData<unsigned_char> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0011045b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<unsigned char>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Vector<unsigned_char>>::ptrcall
          (MethodBindTR<Vector<unsigned_char>> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  long local_40 [2];
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
    if (local_48 == (void **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x10e338;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00110657;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<unsigned_char>::_ref((CowData<unsigned_char> *)((long)param_3 + 8),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_00110657:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<long>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<long>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  char *pcVar2;
  long lVar3;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar4;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC165,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar2 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar3 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00110880;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      lVar3 = (*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,lVar3);
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
LAB_00110880:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<long>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<long>::validated_call
          (MethodBindTRC<long> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined8 uVar1;
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
      goto LAB_00110ae2;
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
  *(undefined8 *)(param_3 + 8) = uVar1;
LAB_00110ae2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<long>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<long>::ptrcall(MethodBindTRC<long> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined8 uVar1;
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
      goto LAB_00110c91;
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
  *(undefined8 *)param_3 = uVar1;
LAB_00110c91:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Dictionary>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC165,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00110ed0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)((Dictionary *)&local_58);
      Variant::Variant((Variant *)local_48,(Dictionary *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Dictionary::~Dictionary((Dictionary *)&local_58);
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
LAB_00110ed0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Dictionary>::validated_call
          (MethodBindTR<Dictionary> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x10e338;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111149;
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
  (*pcVar1)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Dictionary::operator=((Dictionary *)(param_3 + 8),(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_00111149:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Dictionary>::ptrcall
          (MethodBindTR<Dictionary> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (void **)0x10e338;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011131a;
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
  (*pcVar1)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Dictionary::operator=((Dictionary *)param_3,(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0011131a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<String>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Vector<String>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC165,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00111560;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)((Vector *)&local_58);
      Variant::Variant((Variant *)local_48,(Vector *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      CowData<String>::_unref((CowData<String> *)&local_50);
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
LAB_00111560:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<String>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Vector<String>>::validated_call
          (MethodBindTR<Vector<String>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  long local_40 [2];
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
      local_48 = (Variant **)0x10e338;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001117f7;
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
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<String>::_ref((CowData<String> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  CowData<String>::_unref((CowData<String> *)local_40);
LAB_001117f7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<String>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Vector<String>>::ptrcall
          (MethodBindTR<Vector<String>> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  long local_40 [2];
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
      local_48 = (void **)0x10e338;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001119d3;
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
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<String>::_ref((CowData<String> *)((long)param_3 + 8),(CowData *)local_40);
  }
  CowData<String>::_unref((CowData<String> *)local_40);
LAB_001119d3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC165,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00111bf0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
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
LAB_00111bf0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int>::validated_call
          (MethodBindTRC<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
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
      goto LAB_00111e54;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_00111e54:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
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
      goto LAB_00112003;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar1;
LAB_00112003:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC165,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00112230;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      bVar4 = (bool)(*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,bVar4);
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
LAB_00112230:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool>::validated_call
          (MethodBindTRC<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
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
      goto LAB_00112492;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_00112492:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00112641;
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
  *(undefined1 *)param_3 = uVar1;
LAB_00112641:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC165,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_48 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar6 = (long *)(local_50 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001128c0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)();
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
LAB_001128c0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_00112c7f;
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
                    /* WARNING: Could not recover jumptable at 0x00112b26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00112c7f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_30 = 0x35;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00112e58;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00112ce2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00112e58:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, HTTPClient::Method, String const&, Vector<String> const&, String
   const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,String_const&>::
validated_call(MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,String_const&>
               *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  uint uVar1;
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00112ecd;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8),param_2[1] + 8,
                    *(long *)(param_2[2] + 8) + 0x10,param_2[3] + 8);
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_00112ecd:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, HTTPClient::Method, String const&, Vector<String> const&, String
   const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,String_const&>::ptrcall
          (MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,String_const&>
           *this,Object *param_1,void **param_2,void *param_3)

{
  uint uVar1;
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00113097;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2,param_2[1],param_2[2],param_2[3]);
  *(ulong *)param_3 = (ulong)uVar1;
LAB_00113097:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, HTTPClient::Method, String const&, Vector<String> const&, Vector<unsigned
   char> const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,Vector<unsigned_char>const&>
::validated_call(MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,Vector<unsigned_char>const&>
                 *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  uint uVar1;
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001132a1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8),param_2[1] + 8,
                    *(long *)(param_2[2] + 8) + 0x10,*(long *)(param_2[3] + 8) + 0x10);
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_001132a1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, HTTPClient::Method, String const&, Vector<String> const&, Vector<unsigned
   char> const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,Vector<unsigned_char>const&>
::ptrcall(MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,Vector<unsigned_char>const&>
          *this,Object *param_1,void **param_2,void *param_3)

{
  uint uVar1;
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00113477;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2,param_2[1],param_2[2],param_2[3]);
  *(ulong *)param_3 = (ulong)uVar1;
LAB_00113477:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, int, Ref<TLSOptions> >::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTR<Error,String_const&,int,Ref<TLSOptions>>::validated_call
          (MethodBindTR<Error,String_const&,int,Ref<TLSOptions>> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  uint uVar4;
  Object *pOVar5;
  long *plVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar6 = *(long **)(param_1 + 0x118);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (Object *)*plVar6) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x10e338;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00113732;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)(param_1 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_58,*(Object **)(param_2[2] + 0x10));
  local_68 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar2 = local_68;
  if (pOVar5 != local_68) {
    if (pOVar5 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_001136db:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&TLSOptions::typeinfo,0);
      if (pOVar2 != pOVar5) {
        local_68 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_001136db;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  uVar4 = (*pcVar7)(param_1 + lVar1,*param_2 + 8,*(undefined4 *)(param_2[1] + 8),
                    (StringName *)&local_68);
  *(ulong *)(param_3 + 8) = (ulong)uVar4;
  if (local_68 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_68;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_68);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_00113732:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, int, Ref<TLSOptions> >::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTR<Error,String_const&,int,Ref<TLSOptions>>::ptrcall
          (MethodBindTR<Error,String_const&,int,Ref<TLSOptions>> *this,Object *param_1,
          void **param_2,void *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x10e338;
      local_50 = 0x35;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001139f8;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(param_1 + lVar1) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  if (((long *)param_2[2] == (long *)0x0) || (local_58 = *param_2[2], local_58 == (Object *)0x0)) {
LAB_001139c3:
    local_58 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_001139c3;
  }
                    /* WARNING: Load size is inaccurate */
  uVar4 = (*pcVar6)(param_1 + lVar1,*param_2,*param_2[1],(StringName *)&local_58);
  *(ulong *)param_3 = (ulong)uVar4;
  if (local_58 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_58;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_58);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_001139f8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<String, Dictionary const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<String,Dictionary_const&>::call
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
      _err_print_error(&_LC165,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00113ce0;
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
      if (in_R8D != 1) goto LAB_00113d30;
LAB_00113d20:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00113d30:
        uVar6 = 4;
        goto LAB_00113cd5;
      }
      if (in_R8D == 1) goto LAB_00113d20;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x1b);
    uVar4 = _LC167;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Dictionary((Variant *)&local_68);
    (*(code *)pVVar11)((CowData<char32_t> *)&local_70,(Variant *)((long)plVar9 + (long)pVVar1),
                       (Variant *)&local_68);
    Variant::Variant((Variant *)local_58,(String *)&local_70);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    Dictionary::~Dictionary((Dictionary *)&local_68);
  }
  else {
    uVar6 = 3;
LAB_00113cd5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00113ce0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Error, HTTPClient::Method, String const&, Vector<String> const&, String
   const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,String_const&>::
         call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  long lVar14;
  uint in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  Variant *local_b8;
  long local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  Variant *local_68 [5];
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_98 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_a0 = 0;
      local_90 = 0x35;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a0,&local_a8);
      _err_print_error(&_LC165,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_98,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      lVar14 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar12 = (long *)(local_a0 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      goto LAB_001141d1;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  local_b8 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 5) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar6 = 0;
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(pVVar2 + -8);
      iVar6 = (int)lVar14;
    }
    if ((int)(4 - in_R8D) <= iVar6) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)in_R8D) {
          pVVar13 = *(Variant **)(param_4 + lVar8 * 8);
        }
        else {
          uVar11 = iVar6 + -4 + (int)lVar8;
          if (lVar14 <= (int)uVar11) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar11,lVar14,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar13 = pVVar2 + (ulong)uVar11 * 0x18;
        }
        local_68[lVar8] = pVVar13;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 4);
      *in_R9 = 0;
      if (((ulong)local_b8 & 1) != 0) {
        local_b8 = *(Variant **)(local_b8 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[3],4);
      uVar4 = _LC169;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_a8);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[2],0x22);
      uVar4 = _LC170;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Vector((Variant *)&local_98);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[1],4);
      uVar4 = _LC171;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_a0);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[0],2);
      uVar4 = _LC172;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      uVar9 = Variant::operator_cast_to_long(local_68[0]);
      iVar6 = (*(code *)local_b8)((Variant *)((long)plVar12 + (long)pVVar1),uVar9 & 0xffffffff,
                                  (Variant *)&local_a0,(Variant *)&local_98,(Variant *)&local_a8);
      Variant::Variant((Variant *)local_88,iVar6);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      lVar14 = local_a0;
      *(undefined4 *)param_1 = local_88[0];
      *(undefined8 *)(param_1 + 8) = local_80;
      *(undefined8 *)(param_1 + 0x10) = uStack_78;
      if (local_a0 != 0) {
        LOCK();
        plVar12 = (long *)(local_a0 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
      }
      CowData<String>::_unref((CowData<String> *)&local_90);
      lVar14 = local_a8;
      if (local_a8 != 0) {
        LOCK();
        plVar12 = (long *)(local_a8 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_a8 = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
      }
      goto LAB_001141d1;
    }
    uVar7 = 4;
  }
  else {
    uVar7 = 3;
  }
  *in_R9 = uVar7;
  in_R9[2] = 4;
LAB_001141d1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, HTTPClient::Method, String const&, Vector<String> const&, Vector<unsigned
   char> const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,Vector<unsigned_char>const&>
         ::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *pVVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  Variant *local_c8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  Variant *local_68 [5];
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar11 = (long *)plVar13[0x23];
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar11 = (long *)(plVar13[1] + 0x20);
    }
    if (local_98 == (char *)*plVar11) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_a8 = 0;
      local_90 = 0x35;
      String::parse_latin1((StrRange *)&local_a8);
      vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a8,&local_b0);
      _err_print_error(&_LC165,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_98,0,0);
      pcVar5 = local_98;
      if (local_98 != (char *)0x0) {
        LOCK();
        plVar13 = (long *)(local_98 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_98 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
      goto LAB_001146b1;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  local_c8 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 5) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar7 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar7 = (int)lVar15;
    }
    if ((int)(4 - in_R8D) <= iVar7) {
      lVar9 = 0;
      do {
        if ((int)lVar9 < (int)in_R8D) {
          pVVar14 = *(Variant **)(param_4 + lVar9 * 8);
        }
        else {
          uVar12 = iVar7 + -4 + (int)lVar9;
          if (lVar15 <= (int)uVar12) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar12,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar14 = pVVar2 + (ulong)uVar12 * 0x18;
        }
        local_68[lVar9] = pVVar14;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 4);
      *in_R9 = 0;
      if (((ulong)local_c8 & 1) != 0) {
        local_c8 = *(Variant **)(local_c8 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[3],0x1d);
      uVar4 = _LC173;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Vector((Variant *)&local_a8);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[2],0x22);
      uVar4 = _LC170;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Vector((Variant *)&local_98);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[1],4);
      uVar4 = _LC171;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_b0);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[0],2);
      uVar4 = _LC172;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      uVar10 = Variant::operator_cast_to_long(local_68[0]);
      iVar7 = (*(code *)local_c8)((Variant *)((long)plVar13 + (long)pVVar1),uVar10 & 0xffffffff,
                                  (Variant *)&local_b0,(Variant *)&local_98,(Variant *)&local_a8);
      Variant::Variant((Variant *)local_88,iVar7);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      lVar15 = local_b0;
      *(undefined4 *)param_1 = local_88[0];
      *(undefined8 *)(param_1 + 8) = local_80;
      *(undefined8 *)(param_1 + 0x10) = uStack_78;
      if (local_b0 != 0) {
        LOCK();
        plVar13 = (long *)(local_b0 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_b0 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      CowData<String>::_unref((CowData<String> *)&local_90);
      lVar15 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar13 = (long *)(local_a0 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      goto LAB_001146b1;
    }
    uVar8 = 4;
  }
  else {
    uVar8 = 3;
  }
  *in_R9 = uVar8;
  in_R9[2] = 4;
LAB_001146b1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, int, Ref<TLSOptions> >::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Error,String_const&,int,Ref<TLSOptions>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char *pcVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  Object *pOVar11;
  long *plVar12;
  uint uVar13;
  undefined4 in_register_00000014;
  long *plVar14;
  Variant *pVVar15;
  long lVar16;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar17;
  long in_FS_OFFSET;
  long local_98;
  Object *local_90;
  char *local_88;
  undefined8 local_80;
  Variant *local_78 [4];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar14 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar14 != (long *)0x0) && (plVar14[1] != 0)) && (*(char *)(plVar14[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar14[1] == 0) {
      plVar12 = (long *)plVar14[0x23];
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)(**(code **)(*plVar14 + 0x40))(plVar14);
      }
    }
    else {
      plVar12 = (long *)(plVar14[1] + 0x20);
    }
    if (local_88 == (char *)*plVar12) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = (Object *)0x0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC165,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      pOVar5 = local_90;
      if (local_90 != (Object *)0x0) {
        LOCK();
        pOVar11 = local_90 + -0x10;
        *(long *)pOVar11 = *(long *)pOVar11 + -1;
        UNLOCK();
        if (*(long *)pOVar11 == 0) {
          local_90 = (Object *)0x0;
          Memory::free_static(pOVar5 + -0x10,false);
        }
      }
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_00114b72;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar17 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar8 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar9 = 0;
      lVar16 = 0;
    }
    else {
      lVar16 = *(long *)(pVVar2 + -8);
      iVar9 = (int)lVar16;
    }
    if ((int)(3 - in_R8D) <= iVar9) {
      lVar10 = 0;
      do {
        if ((int)lVar10 < (int)in_R8D) {
          pVVar15 = *(Variant **)(param_4 + lVar10 * 8);
        }
        else {
          uVar13 = iVar9 + -3 + (int)lVar10;
          if (lVar16 <= (int)uVar13) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar13,lVar16,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar15 = pVVar2 + (ulong)uVar13 * 0x18;
        }
        local_78[lVar10] = pVVar15;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar17 & 1) != 0) {
        pVVar17 = *(Variant **)(pVVar17 + *(long *)((long)plVar14 + (long)pVVar1) + -1);
      }
      cVar7 = Variant::can_convert_strict(*(undefined4 *)local_78[2]);
      uVar4 = _LC174;
      if (cVar7 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_90 = (Object *)0x0;
      pOVar11 = (Object *)Variant::get_validated_object();
      pOVar5 = local_90;
      if (pOVar11 != local_90) {
        if (pOVar11 == (Object *)0x0) {
          if (local_90 != (Object *)0x0) {
            local_90 = (Object *)0x0;
LAB_00114a37:
            cVar7 = RefCounted::unreference();
            if (cVar7 != '\0') {
              cVar7 = predelete_handler(pOVar5);
              if (cVar7 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
        }
        else {
          pOVar11 = (Object *)__dynamic_cast(pOVar11,&Object::typeinfo,&TLSOptions::typeinfo,0);
          if (pOVar5 != pOVar11) {
            local_90 = pOVar11;
            if (pOVar11 != (Object *)0x0) {
              cVar7 = RefCounted::reference();
              if (cVar7 == '\0') {
                local_90 = (Object *)0x0;
              }
            }
            if (pOVar5 != (Object *)0x0) goto LAB_00114a37;
          }
        }
      }
      cVar7 = Variant::can_convert_strict(*(undefined4 *)local_78[1],2);
      uVar4 = _LC175;
      if (cVar7 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar9 = Variant::operator_cast_to_int(local_78[1]);
      cVar7 = Variant::can_convert_strict(*(undefined4 *)local_78[0],4);
      uVar4 = _LC176;
      if (cVar7 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_88);
      iVar9 = (*(code *)pVVar17)((Variant *)((long)plVar14 + (long)pVVar1),(Variant *)&local_88,
                                 iVar9,&local_90);
      Variant::Variant((Variant *)local_58,iVar9);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      pcVar6 = local_88;
      *(undefined4 *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar14 = (long *)(local_88 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
      if (local_90 != (Object *)0x0) {
        cVar7 = RefCounted::unreference();
        pOVar5 = local_90;
        if (cVar7 != '\0') {
          cVar7 = predelete_handler(local_90);
          if (cVar7 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      goto LAB_00114b72;
    }
    uVar8 = 4;
  }
  *in_R9 = uVar8;
  in_R9[2] = 3;
LAB_00114b72:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<StreamPeer> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<StreamPeer>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x10e338;
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
      goto LAB_00114e9c;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_00114e78:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00114e78;
  }
  (*pcVar5)((long *)((long)param_2 + lVar1));
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_00114e9c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<StreamPeer> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<StreamPeer>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_58 == (Object *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x10e338;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00115148;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_58;
  if (pOVar4 != local_58) {
    if (pOVar4 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_00115106:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&StreamPeer::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_00115106;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1));
  if (local_58 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_58;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_58);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_00115148:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<StreamPeer> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Ref<StreamPeer>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  Object *pOVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar9) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x10e338;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC165,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00115510;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_00115505:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_00115510;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00115560;
LAB_00115550:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00115560:
      uVar7 = 4;
      goto LAB_00115505;
    }
    if (in_R8D == 1) goto LAB_00115550;
    lVar10 = (long)((int)lVar2 + -1);
    if (lVar2 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar12 = pVVar12 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12);
  uVar4 = _LC177;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_48 = (Object *)0x0;
  pOVar8 = (Object *)Variant::get_validated_object();
  pOVar5 = local_48;
  if (pOVar8 != local_48) {
    if (pOVar8 == (Object *)0x0) {
      if (local_48 != (Object *)0x0) {
        local_48 = (Object *)0x0;
LAB_0011567d:
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(pOVar5);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
    }
    else {
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&StreamPeer::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0011567d;
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1));
  if (local_48 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_48;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_48);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_00115510:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<StreamPeer>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<StreamPeer>>::ptrcall
          (MethodBindTRC<Ref<StreamPeer>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
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
      local_48 = (Object *)0x10e338;
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
      goto LAB_00115866;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00115866;
    *(undefined8 *)param_3 = 0;
    goto LAB_001158a9;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_001158a9;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_001158a9:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00115866;
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
LAB_00115866:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<StreamPeer>>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTRC<Ref<StreamPeer>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x10e338;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC165,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00115b80;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar2 = local_58;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_58);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
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
LAB_00115b80:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<StreamPeer>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<StreamPeer>>::validated_call
          (MethodBindTRC<Ref<StreamPeer>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
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
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10e338;
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
      goto LAB_00115dc6;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
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
LAB_00115dc6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, String const&, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(String const&, int), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,String_const&,int>
               (__UnexistingClass *param_1,_func_void_String_ptr_int *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  Variant *this;
  long in_FS_OFFSET;
  long in_stack_00000008;
  long local_38;
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar11;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_001160d8;
      puVar10 = (undefined4 *)*plVar8;
LAB_0011612d:
      this = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_001160d8:
        uVar7 = 4;
        goto LAB_001160dd;
      }
      if (uVar11 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_00116148;
        puVar10 = (undefined4 *)(lVar1 + lVar9 * 0x18);
      }
      else {
        puVar10 = (undefined4 *)*plVar8;
        if (uVar11 == 2) goto LAB_0011612d;
      }
      lVar9 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00116148:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_String_ptr_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC175;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_int(this);
    cVar5 = Variant::can_convert_strict(*puVar10,4);
    uVar4 = _LC176;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_38);
    (*param_2)((String *)(param_1 + (long)param_3),(int)&local_38);
    lVar1 = local_38;
    if (local_38 != 0) {
      LOCK();
      plVar8 = (long *)(local_38 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
  }
  else {
    uVar7 = 3;
LAB_001160dd:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, int>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<String_const&,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC165,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001161e6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,String_const&,int>
            (p_Var4,(_func_void_String_ptr_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001161e6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,bool>
               (__UnexistingClass *param_1,_func_void_bool *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

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
    goto LAB_001164ed;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00116550;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00116550:
      uVar6 = 4;
LAB_001164ed:
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
      goto LAB_0011646b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011646b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC178;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x001164c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC165,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001165b6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var4,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001165b6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,int>
               (__UnexistingClass *param_1,_func_void_int *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

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
    goto LAB_001168bd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00116920;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00116920:
      uVar6 = 4;
LAB_001168bd:
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
      goto LAB_0011683b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011683b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC172;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00116896. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC165,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00116986;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var4,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00116986:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00116bc7;
  local_78 = 0;
  local_68 = &_LC6;
  local_80 = 0;
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
LAB_00116cc5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00116cc5;
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
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_00116bc7:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<String const&, int>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<String_const&,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar5;
  long in_FS_OFFSET;
  int local_8c;
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
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar5 = 0;
  *(undefined4 *)(pPVar5 + 0x18) = 0;
  *(undefined8 *)(pPVar5 + 0x20) = 0;
  *(undefined4 *)(pPVar5 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar5 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_8c,pPVar5);
  if (in_EDX != local_8c) goto LAB_00116e54;
  local_78 = 0;
  local_68 = &_LC6;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00116f55:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00116f55;
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
  *(undefined4 *)pPVar5 = local_68._0_4_;
  if (*(long *)(pPVar5 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
  }
  if (*(long *)(pPVar5 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar5 + 0x10) = uVar3;
  }
  *(int *)(pPVar5 + 0x18) = local_50;
  if (*(long *)(pPVar5 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(pPVar5 + 0x20) = lVar4;
  }
  *(undefined4 *)(pPVar5 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00116e54:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
}



/* void call_get_argument_type_info<String const&, int, Ref<TLSOptions> >(int, PropertyInfo&) */

void call_get_argument_type_info<String_const&,int,Ref<TLSOptions>>
               (int param_1,PropertyInfo *param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  call_get_argument_type_info_helper<String_const&>(param_1,&local_8c,param_2);
  if (param_1 == local_8c) {
    local_78 = 0;
    local_68 = "";
    local_80 = 0;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    String::parse_latin1((StrRange *)&local_80);
    local_88 = 0;
    local_68 = (char *)CONCAT44(local_68._4_4_,2);
    local_50 = 0;
    local_48 = 0;
    local_60 = (undefined1  [16])0x0;
    if (local_80 == 0) {
LAB_001173d8:
      local_40 = 6;
      StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001173d8;
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
    *(undefined4 *)param_2 = local_68._0_4_;
    if (*(long *)(param_2 + 8) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      uVar7 = local_60._0_8_;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_60._8_8_;
      local_60 = auVar5 << 0x40;
      *(undefined8 *)(param_2 + 8) = uVar7;
    }
    if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
      StringName::unref();
      uVar7 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(param_2 + 0x10) = uVar7;
    }
    lVar8 = local_48;
    *(int *)(param_2 + 0x18) = local_50;
    if (*(long *)(param_2 + 0x20) == local_48) {
      *(undefined4 *)(param_2 + 0x28) = local_40;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      *(long *)(param_2 + 0x20) = local_48;
      *(undefined4 *)(param_2 + 0x28) = local_40;
    }
    if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
      StringName::unref();
    }
    uVar7 = local_60._0_8_;
    if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_60._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = local_60._8_8_;
        local_60 = auVar6 << 0x40;
        Memory::free_static((void *)(uVar7 + -0x10),false);
      }
    }
  }
  local_8c = local_8c + 1;
  if (param_1 != local_8c) goto LAB_001170e1;
  local_78 = 0;
  local_68 = "TLSOptions";
  local_80 = 0;
  local_60._0_8_ = 10;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00117395:
    local_40 = 6;
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
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 == 0x11) goto LAB_00117395;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_2 = local_68._0_4_;
  if (*(long *)(param_2 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
    uVar7 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(param_2 + 8) = uVar7;
  }
  if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar7 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar7;
  }
  lVar8 = local_48;
  *(int *)(param_2 + 0x18) = local_50;
  if (*(long *)(param_2 + 0x20) == local_48) {
    *(undefined4 *)(param_2 + 0x28) = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    *(long *)(param_2 + 0x20) = local_48;
    *(undefined4 *)(param_2 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar7 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar7 + -0x10),false);
    }
  }
LAB_001170e1:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error, String const&, int, Ref<TLSOptions> >::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<Error,String_const&,int,Ref<TLSOptions>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 3) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<String_const&,int,Ref<TLSOptions>>(in_EDX,(PropertyInfo *)&local_68)
    ;
    *puVar3 = local_68._0_4_;
    *(undefined8 *)(puVar3 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar3 + 4) = local_60._8_8_;
    puVar3[6] = (undefined4)local_50;
    *(undefined8 *)(puVar3 + 8) = local_48;
    puVar3[10] = local_40;
  }
  else {
    local_70 = 0;
    local_60._8_8_ = local_60._0_8_;
    local_60._0_8_ = 5;
    local_68 = "Error";
    String::parse_latin1((StrRange *)&local_70);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_78,(String *)&local_70)
    ;
    StringName::StringName((StringName *)&local_80,(String *)&local_78,false);
    *puVar3 = 2;
    puVar3[6] = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
    puVar3[10] = 0x10006;
    *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
    local_68 = (char *)0x0;
    StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        goto LAB_0011762b;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
LAB_0011762b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Vector<String> const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Vector<String>const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00117777;
  local_78 = 0;
  local_68 = &_LC6;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x22);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00117875:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00117875;
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
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_00117777:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error, HTTPClient::Method, String const&, Vector<String> const&, String
   const&>::_gen_argument_type_info(int) const */

GetTypeInfo<Error,void> *
MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,String_const&>::
_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  uint in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Error,void> *this;
  long in_FS_OFFSET;
  int local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  details local_b8 [8];
  long local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  long local_88;
  undefined4 local_80;
  char *local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  this = (GetTypeInfo<Error,void> *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 4) {
    local_a8 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 6;
    local_d4 = 0;
    local_a0._0_8_ = 0;
    local_a0._8_8_ = 0;
    if (in_EDX == 0) {
      local_c0 = 0;
      local_70._0_8_ = 0x12;
      local_78 = "HTTPClient::Method";
      String::parse_latin1((StrRange *)&local_c0);
      godot::details::enum_qualified_name_to_class_info_name(local_b8,(String *)&local_c0);
      StringName::StringName((StringName *)&local_b0,(String *)local_b8,false);
      local_70 = (undefined1  [16])0x0;
      local_c8 = 0;
      local_d0 = 0;
      local_78 = (char *)0x2;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0x10006;
      StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      local_a8 = CONCAT44(local_a8._4_4_,local_78._0_4_);
      if (local_a0._0_8_ != local_70._0_8_) {
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
        local_a0._0_8_ = local_70._0_8_;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = local_70._8_8_;
        local_70 = auVar2 << 0x40;
      }
      if (local_a0._8_8_ != local_70._8_8_) {
        StringName::unref();
        local_a0._8_8_ = local_70._8_8_;
        local_70._8_8_ = 0;
      }
      local_90 = CONCAT44(local_90._4_4_,(undefined4)local_60);
      if (local_88 != local_58) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        local_88 = local_58;
        local_58 = 0;
      }
      local_80 = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    }
    local_d4 = 1;
    call_get_argument_type_info_helper<String_const&>(in_EDX,&local_d4,(PropertyInfo *)&local_a8);
    call_get_argument_type_info_helper<Vector<String>const&>
              (in_EDX,&local_d4,(PropertyInfo *)&local_a8);
    call_get_argument_type_info_helper<String_const&>(in_EDX,&local_d4,(PropertyInfo *)&local_a8);
    uVar4 = local_a0._8_8_;
    uVar3 = local_a0._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_a0._8_8_;
    local_a0 = auVar1 << 0x40;
    *(undefined4 *)this = (undefined4)local_a8;
    *(undefined8 *)(this + 8) = uVar3;
    *(undefined8 *)(this + 0x10) = uVar4;
    *(undefined4 *)(this + 0x18) = (undefined4)local_90;
    *(long *)(this + 0x20) = local_88;
    *(undefined4 *)(this + 0x28) = local_80;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  }
  else {
    GetTypeInfo<Error,void>::get_class_info(this);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<HTTPClient::Method, String const&, Vector<String> const&,
   Vector<unsigned char> const&>(int, PropertyInfo&) */

void call_get_argument_type_info<HTTPClient::Method,String_const&,Vector<String>const&,Vector<unsigned_char>const&>
               (int param_1,PropertyInfo *param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long in_FS_OFFSET;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined1 local_70 [16];
  ulong local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a4 = 0;
  iVar9 = 1;
  if (param_1 == 0) {
    local_90 = 0;
    local_78 = "HTTPClient::Method";
    local_70._0_8_ = 0x12;
    String::parse_latin1((StrRange *)&local_90);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_88,(String *)&local_90)
    ;
    StringName::StringName((StringName *)&local_80,(String *)&local_88,false);
    local_70 = (undefined1  [16])0x0;
    local_98 = 0;
    local_a0 = 0;
    local_78 = (char *)0x2;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0x10006;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    *(undefined4 *)param_2 = local_78._0_4_;
    if (*(long *)(param_2 + 8) != local_70._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      uVar7 = local_70._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_70._8_8_;
      local_70 = auVar2 << 0x40;
      *(undefined8 *)(param_2 + 8) = uVar7;
    }
    if (*(long *)(param_2 + 0x10) != local_70._8_8_) {
      StringName::unref();
      uVar7 = local_70._8_8_;
      local_70._8_8_ = 0;
      *(undefined8 *)(param_2 + 0x10) = uVar7;
    }
    lVar8 = local_58;
    *(int *)(param_2 + 0x18) = (int)local_60;
    if (*(long *)(param_2 + 0x20) == local_58) {
      *(undefined4 *)(param_2 + 0x28) = local_50;
      if (local_58 != 0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      *(long *)(param_2 + 0x20) = local_58;
      *(undefined4 *)(param_2 + 0x28) = local_50;
    }
    if ((StringName::configured != '\0') && (local_70._8_8_ != 0)) {
      StringName::unref();
    }
    uVar7 = local_70._0_8_;
    if (local_70._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_70._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_70._8_8_;
        local_70 = auVar3 << 0x40;
        Memory::free_static((void *)(uVar7 + -0x10),false);
      }
    }
    iVar9 = local_a4 + 1;
  }
  local_a4 = iVar9;
  call_get_argument_type_info_helper<String_const&>(param_1,&local_a4,param_2);
  call_get_argument_type_info_helper<Vector<String>const&>(param_1,&local_a4,param_2);
  if (param_1 != local_a4) goto LAB_00117cc9;
  local_88 = 0;
  local_78 = "";
  local_90 = 0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_70._8_8_;
  local_70 = auVar4 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (char *)CONCAT44(local_78._4_4_,0x1d);
  local_60 = local_60 & 0xffffffff00000000;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_00117f70:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if ((int)local_60 != 0x11) goto LAB_00117f70;
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
  *(undefined4 *)param_2 = local_78._0_4_;
  if (*(long *)(param_2 + 8) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
    uVar7 = local_70._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_70._8_8_;
    local_70 = auVar5 << 0x40;
    *(undefined8 *)(param_2 + 8) = uVar7;
  }
  if (*(long *)(param_2 + 0x10) != local_70._8_8_) {
    StringName::unref();
    uVar7 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar7;
  }
  lVar8 = local_58;
  *(int *)(param_2 + 0x18) = (int)local_60;
  if (*(long *)(param_2 + 0x20) == local_58) {
    *(undefined4 *)(param_2 + 0x28) = local_50;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    *(long *)(param_2 + 0x20) = local_58;
    *(undefined4 *)(param_2 + 0x28) = local_50;
  }
  if ((StringName::configured != '\0') && (local_70._8_8_ != 0)) {
    StringName::unref();
  }
  uVar7 = local_70._0_8_;
  if (local_70._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_70._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_70._8_8_;
      local_70 = auVar6 << 0x40;
      Memory::free_static((void *)(uVar7 + -0x10),false);
    }
  }
LAB_00117cc9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error, HTTPClient::Method, String const&, Vector<String> const&, Vector<unsigned
   char> const&>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,Vector<unsigned_char>const&>
::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 4) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<HTTPClient::Method,String_const&,Vector<String>const&,Vector<unsigned_char>const&>
              (in_EDX,(PropertyInfo *)&local_68);
    *puVar3 = local_68._0_4_;
    *(undefined8 *)(puVar3 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar3 + 4) = local_60._8_8_;
    puVar3[6] = (undefined4)local_50;
    *(undefined8 *)(puVar3 + 8) = local_48;
    puVar3[10] = local_40;
  }
  else {
    local_70 = 0;
    local_60._8_8_ = local_60._0_8_;
    local_60._0_8_ = 5;
    local_68 = "Error";
    String::parse_latin1((StrRange *)&local_70);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_78,(String *)&local_70)
    ;
    StringName::StringName((StringName *)&local_80,(String *)&local_78,false);
    *puVar3 = 2;
    puVar3[6] = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
    puVar3[10] = 0x10006;
    *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
    local_68 = (char *)0x0;
    StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        goto LAB_001181bb;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
LAB_001181bb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

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
/* MethodBindTR<String, Dictionary const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<String,Dictionary_const&>::~MethodBindTR(MethodBindTR<String,Dictionary_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&, int>::~MethodBindT() */

void __thiscall MethodBindT<String_const&,int>::~MethodBindT(MethodBindT<String_const&,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error>::~MethodBindTR() */

void __thiscall MethodBindTR<Error>::~MethodBindTR(MethodBindTR<Error> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<HTTPClient::Status>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<HTTPClient::Status>::~MethodBindTRC(MethodBindTRC<HTTPClient::Status> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Vector<unsigned char>>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<unsigned_char>>::~MethodBindTR(MethodBindTR<Vector<unsigned_char>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<long>::~MethodBindTRC() */

void __thiscall MethodBindTRC<long>::~MethodBindTRC(MethodBindTRC<long> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Dictionary>::~MethodBindTR() */

void __thiscall MethodBindTR<Dictionary>::~MethodBindTR(MethodBindTR<Dictionary> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Vector<String>>::~MethodBindTR() */

void __thiscall MethodBindTR<Vector<String>>::~MethodBindTR(MethodBindTR<Vector<String>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, HTTPClient::Method, String const&, Vector<String> const&, String
   const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,String_const&>::
~MethodBindTR(MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,String_const&>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, HTTPClient::Method, String const&, Vector<String> const&, Vector<unsigned
   char> const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,Vector<unsigned_char>const&>
::~MethodBindTR(MethodBindTR<Error,HTTPClient::Method,String_const&,Vector<String>const&,Vector<unsigned_char>const&>
                *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<StreamPeer>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<StreamPeer>>::~MethodBindTRC(MethodBindTRC<Ref<StreamPeer>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<StreamPeer> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<StreamPeer>const&>::~MethodBindT(MethodBindT<Ref<StreamPeer>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, String const&, int, Ref<TLSOptions> >::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,int,Ref<TLSOptions>>::~MethodBindTR
          (MethodBindTR<Error,String_const&,int,Ref<TLSOptions>> *this)

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



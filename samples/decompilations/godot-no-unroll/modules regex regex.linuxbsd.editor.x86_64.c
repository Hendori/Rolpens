
/* RegExMatch::get_group_count() const */

int __thiscall RegExMatch::get_group_count(RegExMatch *this)

{
  long lVar1;
  int iVar2;
  
  if (*(long *)(this + 400) != 0) {
    lVar1 = *(long *)(*(long *)(this + 400) + -8);
    iVar2 = (int)lVar1 + -1;
    if (lVar1 == 0) {
      iVar2 = 0;
    }
    return iVar2;
  }
  return 0;
}



/* RegEx::is_valid() const */

bool __thiscall RegEx::is_valid(RegEx *this)

{
  return *(long *)(this + 0x188) != 0;
}



/* RegEx::clear() */

void __thiscall RegEx::clear(RegEx *this)

{
  if (*(long *)(this + 0x188) != 0) {
    pcre2_code_free_32();
    *(undefined8 *)(this + 0x188) = 0;
  }
  return;
}



/* RegEx::get_group_count() const */

undefined4 __thiscall RegEx::get_group_count(RegEx *this)

{
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x188) == 0) {
    _err_print_error("get_group_count","modules/regex/regex.cpp",0x173,
                     "Condition \"!is_valid()\" is true. Returning: 0",0,0);
    local_14 = 0;
  }
  else {
    pcre2_pattern_info_32(*(long *)(this + 0x188),4,&local_14);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<RegExMatch::Range>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<RegExMatch::Range>::_copy_on_write(CowData<RegExMatch::Range> *this)

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



/* RegExMatch::get_names() const */

void RegExMatch::get_names(void)

{
  Variant *pVVar1;
  long *plVar2;
  long in_RSI;
  Dictionary *in_RDI;
  long in_FS_OFFSET;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(in_RDI);
  plVar2 = *(long **)(in_RSI + 0x1b0);
  if (plVar2 != (long *)0x0) {
    do {
      Variant::Variant((Variant *)local_58,(int)plVar2[3]);
      Variant::Variant((Variant *)local_78,(String *)(plVar2 + 2));
      pVVar1 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
      if (pVVar1 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar1 = 0;
        *(int *)pVVar1 = local_58[0];
        local_58[0] = 0;
        *(undefined8 *)(pVVar1 + 8) = local_50;
        *(undefined8 *)(pVVar1 + 0x10) = uStack_48;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RegEx::~RegEx() */

void __thiscall RegEx::~RegEx(RegEx *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00113f60;
  if (*(long *)(this + 0x188) != 0) {
    pcre2_code_free_32();
  }
  pcre2_general_context_free_32(*(undefined8 *)(this + 0x180));
  if (*(long *)(this + 400) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 400) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 400);
      *(undefined8 *)(this + 400) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00113ca0;
  Object::~Object((Object *)this);
  return;
}



/* RegEx::~RegEx() */

void __thiscall RegEx::~RegEx(RegEx *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00113f60;
  if (*(long *)(this + 0x188) != 0) {
    pcre2_code_free_32();
  }
  pcre2_general_context_free_32(*(undefined8 *)(this + 0x180));
  if (*(long *)(this + 400) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 400) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 400);
      *(undefined8 *)(this + 400) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00113ca0;
  Object::~Object((Object *)this);
  operator_delete(this,0x198);
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



/* RegEx::get_pattern() const */

void RegEx::get_pattern(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 400) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 400));
  }
  return;
}



/* RegExMatch::get_subject() const */

void RegExMatch::get_subject(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x180) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x180));
  }
  return;
}



/* RegExMatch::_find(Variant const&) const */

int __thiscall RegExMatch::_find(RegExMatch *this,Variant *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  char cVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar13 = *(int *)param_1;
  if (iVar13 - 2U < 2) {
    iVar13 = Variant::operator_cast_to_int(param_1);
    if (*(long *)(this + 400) == 0) {
      lVar17 = 0;
    }
    else {
      lVar17 = *(long *)(*(long *)(this + 400) + -8);
    }
    if (iVar13 < lVar17) goto LAB_001005f0;
  }
  else if ((iVar13 == 4) || (iVar13 == 0x15)) {
    Variant::operator_cast_to_String((Variant *)&local_48);
    if ((*(long *)(this + 0x1a0) != 0) && (*(int *)(this + 0x1c4) != 0)) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1c0) * 4);
      uVar19 = CONCAT44(0,uVar2);
      lVar17 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1c0) * 8);
      uVar12 = String::hash();
      lVar18 = *(long *)(this + 0x1a8);
      uVar14 = 1;
      if (uVar12 != 0) {
        uVar14 = uVar12;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar14 * lVar17;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar19;
      lVar16 = SUB168(auVar3 * auVar7,8);
      uVar12 = *(uint *)(lVar18 + lVar16 * 4);
      uVar15 = SUB164(auVar3 * auVar7,8);
      if (uVar12 != 0) {
        uVar20 = 0;
        do {
          if (uVar14 == uVar12) {
            cVar11 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 0x1a0) + lVar16 * 8) + 0x10),
                                        (String *)&local_48);
            lVar18 = local_48;
            if (cVar11 != '\0') {
              lVar17 = *(long *)(*(long *)(this + 0x1a0) + (ulong)uVar15 * 8);
              if (local_48 != 0) {
                LOCK();
                plVar1 = (long *)(local_48 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_48 = 0;
                  Memory::free_static((void *)(lVar18 + -0x10),false);
                }
              }
              if (lVar17 == 0) goto LAB_001005e9;
              iVar13 = *(int *)(lVar17 + 0x18);
              goto LAB_001005f0;
            }
            lVar18 = *(long *)(this + 0x1a8);
          }
          uVar20 = uVar20 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(uVar15 + 1) * lVar17;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar19;
          lVar16 = SUB168(auVar4 * auVar8,8);
          uVar12 = *(uint *)(lVar18 + lVar16 * 4);
          uVar15 = SUB164(auVar4 * auVar8,8);
        } while ((uVar12 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar12 * lVar17, auVar9._8_8_ = 0,
                auVar9._0_8_ = uVar19, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar2 + uVar15) - SUB164(auVar5 * auVar9,8)) * lVar17,
                auVar10._8_8_ = 0, auVar10._0_8_ = uVar19, uVar20 <= SUB164(auVar6 * auVar10,8)));
      }
    }
    lVar17 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar17 + -0x10),false);
      }
    }
  }
LAB_001005e9:
  iVar13 = -1;
LAB_001005f0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar13;
}



/* RegExMatch::get_string(Variant const&) const */

Variant * RegExMatch::get_string(Variant *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  Variant *in_RDX;
  RegExMatch *in_RSI;
  long lVar6;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = _find(in_RSI,in_RDX);
  if (-1 < iVar4) {
    lVar5 = (long)iVar4;
    lVar2 = *(long *)(in_RSI + 400);
    if (lVar2 == 0) {
      lVar6 = 0;
LAB_00100813:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar6,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = *(long *)(lVar2 + -8);
    if (lVar6 <= lVar5) goto LAB_00100813;
    if (*(int *)(lVar2 + lVar5 * 8) != -1) {
      String::substr((int)param_1,(int)in_RSI + 0x180);
      goto LAB_001007da;
    }
  }
  *(undefined8 *)param_1 = 0;
LAB_001007da:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RegExMatch::get_start(Variant const&) const */

undefined4 __thiscall RegExMatch::get_start(RegExMatch *this,Variant *param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  iVar3 = _find(this,param_1);
  if (iVar3 < 0) {
    return 0xffffffff;
  }
  lVar4 = (long)iVar3;
  lVar1 = *(long *)(this + 400);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + -8);
    if (lVar4 < lVar5) {
      return *(undefined4 *)(lVar1 + lVar4 * 8);
    }
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* RegExMatch::get_end(Variant const&) const */

undefined4 __thiscall RegExMatch::get_end(RegExMatch *this,Variant *param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  iVar3 = _find(this,param_1);
  if (iVar3 < 0) {
    return 0xffffffff;
  }
  lVar4 = (long)iVar3;
  lVar1 = *(long *)(this + 400);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + -8);
    if (lVar4 < lVar5) {
      return *(undefined4 *)(lVar1 + 4 + lVar4 * 8);
    }
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* RegEx::_pattern_info(unsigned int, void*) const */

void RegEx::_pattern_info(uint param_1,void *param_2)

{
  undefined4 in_register_0000003c;
  
  pcre2_pattern_info_32(*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x188));
  return;
}



/* RegEx::RegEx() */

void __thiscall RegEx::RegEx(RegEx *this)

{
  undefined8 uVar1;
  
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_00113f60;
  *(undefined8 *)(this + 400) = 0;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  uVar1 = pcre2_general_context_create_32(_regex_malloc,_regex_free,0);
  *(undefined8 *)(this + 0x180) = uVar1;
  return;
}



/* RegEx::compile(String const&, bool) */

undefined8 __thiscall RegEx::compile(RegEx *this,String *param_1,bool param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined4 local_474;
  int local_470 [2];
  String local_468 [8];
  CowData<char32_t> local_460 [8];
  undefined8 local_458;
  undefined8 local_450;
  int *local_448;
  long local_440;
  int local_438;
  int local_434 [257];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 400) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 400),(CowData *)param_1);
  }
  if (*(long *)(this + 0x188) != 0) {
    pcre2_code_free_32();
    *(undefined8 *)(this + 0x188) = 0;
  }
  uVar4 = pcre2_compile_context_create_32(*(undefined8 *)(this + 0x180));
  uVar5 = String::get_data();
  if (*(long *)(this + 400) == 0) {
    lVar7 = 0;
  }
  else {
    iVar3 = (int)*(undefined8 *)(*(long *)(this + 400) + -8);
    lVar7 = (long)(iVar3 + -1);
    if (iVar3 == 0) {
      lVar7 = 0;
    }
  }
  uVar5 = pcre2_compile_32(uVar5,lVar7,0x40,&local_474,local_470,uVar4);
  *(undefined8 *)(this + 0x188) = uVar5;
  pcre2_compile_context_free_32(uVar4);
  uVar4 = 0;
  if (*(long *)(this + 0x188) == 0) {
    if (param_2) {
      pcre2_get_error_message_32(local_474,&local_438,0x100);
      local_450 = 0;
      piVar6 = &local_438;
      if (local_438 == 0) {
        local_440 = 0;
      }
      else {
        do {
          piVar1 = piVar6 + 1;
          piVar6 = piVar6 + 1;
        } while (*piVar1 != 0);
        local_440 = (long)piVar6 - (long)&local_438 >> 2;
      }
      local_448 = &local_438;
      String::parse_utf32((StrRange *)&local_450);
      local_458 = 0;
      local_448 = (int *)&_LC15;
      local_440 = 2;
      String::parse_latin1((StrRange *)&local_458);
      String::num_int64((long)local_460,local_470[0],true);
      String::operator+((String *)&local_448,(String *)local_460);
      String::operator+(local_468,(String *)&local_448);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_448);
      CowData<char32_t>::_unref(local_460);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_458);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_450);
      String::utf8();
      uVar4 = CharString::get_data();
      _err_print_error("compile","modules/regex/regex.cpp",200,uVar4,0,0);
      piVar6 = local_448;
      if (local_448 != (int *)0x0) {
        LOCK();
        plVar2 = (long *)((long)local_448 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_448 = (int *)0x0;
          Memory::free_static((undefined *)((long)piVar6 + -0x10),false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_468);
    }
    uVar4 = 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* RegEx::_compile_bind_compat_95212(String const&) */

void __thiscall RegEx::_compile_bind_compat_95212(RegEx *this,String *param_1)

{
  compile(this,param_1,true);
  return;
}



/* RegEx::RegEx(String const&) */

void __thiscall RegEx::RegEx(RegEx *this,String *param_1)

{
  undefined8 uVar1;
  
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_00113f60;
  *(undefined8 *)(this + 400) = 0;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  uVar1 = pcre2_general_context_create_32(_regex_malloc,_regex_free,0);
  *(undefined8 *)(this + 0x180) = uVar1;
  compile(this,param_1,true);
  return;
}



/* CowData<char32_t>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<char32_t>::_copy_on_write(CowData<char32_t> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
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
  __n = lVar1 * 4;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Error CowData<char32_t>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<char32_t>::resize<false>(CowData<char32_t> *this,long param_1)

{
  int iVar1;
  CowData<char32_t> *pCVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  CowData<char32_t> *pCVar8;
  CowData<char32_t> *pCVar9;
  long lVar10;
  
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
    lVar10 = 0;
    pCVar2 = (CowData<char32_t> *)0x0;
  }
  else {
    lVar10 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    pCVar2 = (CowData<char32_t> *)(lVar10 * 4);
    if (pCVar2 != (CowData<char32_t> *)0x0) {
      uVar3 = (ulong)(pCVar2 + -1) | (ulong)(pCVar2 + -1) >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      pCVar2 = (CowData<char32_t> *)((uVar3 | uVar3 >> 0x20) + 1);
    }
  }
  if (param_1 * 4 != 0) {
    uVar3 = param_1 * 4 - 1;
    uVar3 = uVar3 | uVar3 >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    pCVar9 = (CowData<char32_t> *)(uVar3 | uVar3 >> 0x20);
    pCVar8 = pCVar9 + 1;
    if (pCVar8 != (CowData<char32_t> *)0x0) {
      if (param_1 <= lVar10) {
        if ((pCVar8 != pCVar2) && (iVar1 = _realloc(this,(long)pCVar8), iVar1 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_0010608c();
        return;
      }
      if (pCVar8 != pCVar2) {
        if (lVar10 == 0) {
          puVar4 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
          if (puVar4 != (undefined8 *)0x0) {
            puVar6 = puVar4 + 2;
            *puVar4 = 1;
            puVar4[1] = 0;
            *(undefined8 **)this = puVar6;
            goto LAB_00100eed;
          }
          uVar7 = 0x171;
          pcVar5 = "Parameter \"mem_new\" is null.";
          goto LAB_00100fb2;
        }
        pCVar9 = this;
        iVar1 = _realloc(this,(long)pCVar8);
        if (iVar1 != 0) {
          return;
        }
      }
      puVar6 = *(undefined8 **)this;
      if (puVar6 == (undefined8 *)0x0) {
        resize<false>((long)pCVar9);
        return;
      }
LAB_00100eed:
      puVar6[-1] = param_1;
      return;
    }
  }
  uVar7 = 0x16a;
  pcVar5 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00100fb2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar7,pcVar5,0,0);
  return;
}



/* RegEx::_sub(String const&, String const&, int, int, unsigned int, String&) const */

int __thiscall
RegEx::_sub(RegEx *this,String *param_1,String *param_2,int param_3,int param_4,uint param_5,
           String *param_6)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  long local_80;
  undefined8 local_78;
  CowData<char32_t> local_70 [16];
  int *local_60;
  int *local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)param_1 == 0) || (iVar5 = (int)*(undefined8 *)(*(long *)param_1 + -8), iVar5 == 0))
  {
    lVar15 = 2;
    local_80 = 1;
  }
  else {
    local_80 = (long)iVar5;
    lVar15 = local_80 + 1;
  }
  local_60 = (int *)0x0;
  CowData<char32_t>::resize<false>((CowData<char32_t> *)&local_60,lVar15);
  if (*(long *)param_1 == 0) {
    uVar16 = 0;
  }
  else {
    iVar5 = (int)*(undefined8 *)(*(long *)param_1 + -8);
    uVar16 = 0;
    if (iVar5 != 0) {
      uVar16 = (ulong)(iVar5 + -1);
      uVar11 = (long)param_4;
      if (uVar16 <= (ulong)(long)param_4) {
        uVar11 = uVar16;
      }
      if (-1 < param_4) {
        uVar16 = uVar11;
      }
    }
  }
  uVar10 = *(undefined8 *)(this + 0x180);
  uVar4 = *(undefined8 *)(this + 0x188);
  uVar7 = pcre2_match_context_create_32(uVar10);
  uVar8 = String::get_data();
  uVar9 = String::get_data();
  CowData<char32_t>::_copy_on_write((CowData<char32_t> *)&local_60);
  piVar13 = local_60;
  uVar10 = pcre2_match_data_create_from_pattern_32(uVar4,uVar10);
  if (*(long *)param_2 == 0) {
    lVar15 = 0;
  }
  else {
    iVar5 = (int)*(undefined8 *)(*(long *)param_2 + -8);
    lVar15 = (long)(iVar5 + -1);
    if (iVar5 == 0) {
      lVar15 = 0;
    }
  }
  iVar5 = pcre2_substitute_32(uVar4,uVar8,uVar16,(long)param_3,param_5,uVar10,uVar7,uVar9,lVar15,
                              piVar13,&local_80);
  if (iVar5 == -0x30) {
    CowData<char32_t>::resize<false>((CowData<char32_t> *)&local_60,local_80 + 1);
    CowData<char32_t>::_copy_on_write((CowData<char32_t> *)&local_60);
    piVar13 = local_60;
    if (*(long *)param_2 == 0) {
      lVar15 = 0;
    }
    else {
      iVar5 = (int)*(undefined8 *)(*(long *)param_2 + -8);
      lVar15 = (long)(iVar5 + -1);
      if (iVar5 == 0) {
        lVar15 = 0;
      }
    }
    iVar5 = pcre2_substitute_32(uVar4,uVar8,uVar16,(long)param_3,param_5,uVar10,uVar7,uVar9,lVar15,
                                local_60,&local_80);
  }
  pcre2_match_data_free_32(uVar10);
  pcre2_match_context_free_32(uVar7);
  if (-1 < iVar5) {
    String::substr((int)local_70,(int)param_1);
    local_50 = 0;
    local_78 = 0;
    if (piVar13 != (int *)0x0) {
      iVar14 = (int)local_80;
      if (iVar14 < 0) {
        piVar12 = piVar13;
        if (*piVar13 != 0) {
          do {
            piVar2 = piVar12 + 1;
            piVar12 = piVar12 + 1;
          } while (*piVar2 != 0);
          local_50 = (long)piVar12 - (long)piVar13 >> 2;
        }
      }
      else if (iVar14 != 0) {
        iVar6 = 0;
        piVar12 = piVar13;
        do {
          iVar3 = *piVar12;
          piVar12 = piVar12 + 1;
          if (iVar3 == 0) {
            local_50 = (long)iVar6;
            goto LAB_00101257;
          }
          iVar6 = iVar6 + 1;
        } while (iVar14 != iVar6);
        local_50 = (long)iVar14;
      }
    }
LAB_00101257:
    local_58 = piVar13;
    String::parse_utf32((StrRange *)&local_78);
    String::operator+((String *)&local_58,(String *)&local_78);
    if (*(int **)param_6 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)param_6);
      piVar12 = local_58;
      local_58 = (int *)0x0;
      *(int **)param_6 = piVar12;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref(local_70);
  }
  if (piVar13 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(piVar13 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static(local_60 + -4,false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}



/* RegEx::sub(String const&, String const&, bool, int, int) const */

String * RegEx::sub(String *param_1,String *param_2,bool param_3,int param_4,int param_5)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined4 in_register_0000000c;
  undefined7 in_register_00000011;
  int in_R9D;
  uint uVar6;
  long in_FS_OFFSET;
  int in_stack_00000008;
  String *pSVar7;
  undefined8 uStack_4b0;
  undefined8 local_470;
  CowData<char32_t> local_468 [8];
  undefined8 local_460;
  int *local_458;
  long local_450;
  int local_448 [258];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_2 + 0x188) == 0) {
    _err_print_error(&_LC30,"modules/regex/regex.cpp",0x150,
                     "Condition \"!is_valid()\" is true. Returning: String()",0,0);
    *(undefined8 *)param_1 = 0;
  }
  else if (in_R9D < 0) {
    _err_print_error(&_LC30,"modules/regex/regex.cpp",0x151,
                     "Condition \"p_offset < 0\" is true. Returning: String()",
                     "RegEx sub offset must be >= 0",0,0);
    *(undefined8 *)param_1 = 0;
  }
  else {
    local_470 = 0;
    uVar6 = (-(uint)((char)param_5 == '\0') & 0xffffff00) + 0x1500;
    pSVar7 = (String *)&local_470;
    iVar3 = _sub((RegEx *)param_2,(String *)CONCAT71(in_register_00000011,param_3),
                 (String *)CONCAT44(in_register_0000000c,param_4),in_R9D,in_stack_00000008,uVar6,
                 (String *)&local_470);
    if (iVar3 < 0) {
      pcre2_get_error_message_32(iVar3,local_448,0x100,local_448,pSVar7,uStack_4b0);
      local_460 = 0;
      piVar4 = local_448;
      if (local_448[0] == 0) {
        local_450 = 0;
      }
      else {
        do {
          piVar1 = piVar4 + 1;
          piVar4 = piVar4 + 1;
        } while (*piVar1 != 0);
        local_450 = (long)piVar4 - (long)local_448 >> 2;
      }
      local_458 = local_448;
      String::parse_utf32((StrRange *)&local_460);
      operator+((char *)local_468,(String *)"PCRE2 Error: ");
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_460);
      String::utf8();
      uVar5 = CharString::get_data();
      _err_print_error(&_LC30,"modules/regex/regex.cpp",0x15f,uVar5,0,0);
      if (local_458 != (int *)0x0) {
        LOCK();
        plVar2 = (long *)(local_458 + -4);
        *plVar2 = *plVar2 + -1;
        piVar4 = local_458;
        UNLOCK();
        if (*plVar2 == 0) {
          local_458 = (int *)0x0;
          Memory::free_static(piVar4 + -4,false);
        }
      }
      if (iVar3 == -0x31) {
        _sub((RegEx *)param_2,(String *)CONCAT71(in_register_00000011,param_3),
             (String *)CONCAT44(in_register_0000000c,param_4),in_R9D,in_stack_00000008,uVar6 | 0x800
             ,(String *)&local_470);
      }
      CowData<char32_t>::_unref(local_468);
    }
    *(undefined8 *)param_1 = local_470;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* RegEx::_bind_compatibility_methods() */

void RegEx::_bind_compatibility_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_90;
  long local_88 [2];
  long *local_78;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "pattern";
  local_58 = &local_68;
  D_METHODP((char *)local_88,(char ***)"create_from_string",(uint)&local_58);
  StringName::StringName((StringName *)&local_90,"RegEx",false);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(pMVar4);
  *(undefined ***)pMVar4 = &PTR__gen_argument_type_001140c0;
  *(code **)(pMVar4 + 0x58) = _create_from_string_bind_compat_95212;
  MethodBind::_generate_argument_types((int)pMVar4);
  *(undefined4 *)(pMVar4 + 0x34) = 1;
  MethodBind::_set_static(SUB81(pMVar4,0));
  MethodBind::_set_returns(SUB81(pMVar4,0));
  StringName::operator=((StringName *)(pMVar4 + 0x18),(StringName *)&local_90);
  ClassDB::bind_methodfi(1,pMVar4,true,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  local_68 = "pattern";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)local_88,(char ***)"compile",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<RegEx,Error,String_const&>(_compile_bind_compat_95212);
  ClassDB::bind_methodfi(1,pMVar4,true,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RegExMatch::_bind_methods() */

void RegExMatch::_bind_methods(void)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  MethodBind *pMVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long in_FS_OFFSET;
  CowData<char32_t> *local_108;
  undefined8 local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  long *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined4 local_90;
  Variant *local_88;
  undefined8 local_80;
  Variant **local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_b8,(char ***)"get_subject",0);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<RegExMatch,String>(get_subject);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_a8[-1];
      lVar8 = 0;
      local_a8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"get_group_count",0);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<RegExMatch,int>(get_group_count);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_a8[-1];
      lVar8 = 0;
      local_a8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"get_names",0);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<RegExMatch,Dictionary>(get_names);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_a8[-1];
      lVar8 = 0;
      local_a8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"get_strings",0);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<RegExMatch,Vector<String>>(get_strings);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_a8[-1];
      lVar8 = 0;
      local_a8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  local_88 = (Variant *)&_LC40;
  uVar6 = (uint)(Variant *)&local_78;
  local_78 = &local_88;
  D_METHODP((char *)&local_b8,(char ***)"get_string",uVar6);
  Variant::Variant((Variant *)&local_78,0);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_88 = (Variant *)&local_78;
  pMVar5 = create_method_bind<RegExMatch,String,Variant_const&>(get_string);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_b8,&local_88,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_a8[-1];
      lVar8 = 0;
      local_a8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  local_88 = (Variant *)&_LC40;
  local_78 = &local_88;
  D_METHODP((char *)&local_b8,(char ***)"get_start",uVar6);
  Variant::Variant((Variant *)&local_78,0);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_88 = (Variant *)&local_78;
  pMVar5 = create_method_bind<RegExMatch,int,Variant_const&>(get_start);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_b8,&local_88,1);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_a8[-1];
      lVar8 = 0;
      local_a8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  local_88 = (Variant *)&_LC40;
  local_78 = &local_88;
  D_METHODP((char *)&local_b8,(char ***)"get_end",uVar6);
  Variant::Variant((Variant *)&local_78,0);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_88 = (Variant *)&local_78;
  pMVar5 = create_method_bind<RegExMatch,int,Variant_const&>(get_end);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_b8,&local_88,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_a8[-1];
      lVar8 = 0;
      local_a8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_b8 = "";
  local_e0 = 0;
  local_e8 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = "subject";
  local_f0 = 0;
  local_b0 = 7;
  String::parse_latin1((StrRange *)&local_f0);
  local_b8 = (char *)CONCAT44(local_b8._4_4_,4);
  local_b0 = 0;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_f0);
  }
  local_a8 = (long *)0x0;
  local_a0 = 0;
  local_98 = 0;
  if (local_e8 == 0) {
LAB_00102308:
    local_90 = 6;
    StringName::operator=((StringName *)&local_a8,(StringName *)&local_e0);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_e8);
    local_90 = 6;
    if (local_a0 != 0x11) goto LAB_00102308;
    StringName::StringName((StringName *)&local_c8,(String *)&local_98,false);
    if (local_a8 == (long *)local_c8) {
      if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_a8 = (long *)local_c8;
    }
  }
  local_108 = (CowData<char32_t> *)&local_98;
  local_f8 = 0;
  local_c8 = "RegExMatch";
  local_c0 = 10;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref(local_108);
  if ((StringName::configured != '\0') && (local_a8 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_b8 = "";
  local_e0 = 0;
  local_e8 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_e8);
  local_f0 = 0;
  local_b8 = "names";
  local_b0 = 5;
  String::parse_latin1((StrRange *)&local_f0);
  local_b8 = (char *)CONCAT44(local_b8._4_4_,0x1b);
  local_b0 = 0;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_f0);
  }
  local_a8 = (long *)0x0;
  local_a0 = 0;
  local_98 = 0;
  if (local_e8 == 0) {
LAB_0010254b:
    local_90 = 6;
    StringName::operator=((StringName *)&local_a8,(StringName *)&local_e0);
  }
  else {
    CowData<char32_t>::_ref(local_108,(CowData *)&local_e8);
    local_90 = 6;
    if (local_a0 != 0x11) goto LAB_0010254b;
    StringName::StringName((StringName *)&local_c8,(String *)local_108,false);
    if (local_a8 == (long *)local_c8) {
      if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_a8 = (long *)local_c8;
    }
  }
  local_f8 = 0;
  local_c8 = "RegExMatch";
  local_c0 = 10;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref(local_108);
  if ((StringName::configured != '\0') && (local_a8 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_b8 = "";
  local_e0 = 0;
  local_e8 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_e8);
  local_f0 = 0;
  local_b8 = "strings";
  local_b0 = 7;
  String::parse_latin1((StrRange *)&local_f0);
  local_b8 = (char *)CONCAT44(local_b8._4_4_,0x1c);
  local_b0 = 0;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_f0);
  }
  local_a8 = (long *)0x0;
  local_a0 = 0;
  local_98 = 0;
  if (local_e8 != 0) {
    CowData<char32_t>::_ref(local_108,(CowData *)&local_e8);
    local_90 = 6;
    if (local_a0 == 0x11) {
      StringName::StringName((StringName *)&local_c8,(String *)local_108,false);
      if (local_a8 == (long *)local_c8) {
        if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_a8 = (long *)local_c8;
      }
      goto LAB_0010279a;
    }
  }
  local_90 = 6;
  StringName::operator=((StringName *)&local_a8,(StringName *)&local_e0);
LAB_0010279a:
  local_f8 = 0;
  local_c8 = "RegExMatch";
  local_c0 = 10;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref(local_108);
  if ((StringName::configured != '\0') && (local_a8 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RegEx::_bind_methods() */

void RegEx::_bind_methods(void)

{
  Variant *pVVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  MethodBind *pMVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  Variant *pVVar10;
  long in_FS_OFFSET;
  long local_250;
  long local_248 [2];
  long *local_238;
  Variant *local_228;
  char *pcStack_220;
  undefined8 local_218;
  Variant *local_208;
  char *pcStack_200;
  undefined8 local_1f8;
  char *local_1e8;
  char *pcStack_1e0;
  undefined *local_1d8;
  undefined8 local_1d0;
  char *local_1c8;
  char *pcStack_1c0;
  undefined *local_1b8;
  undefined8 local_1b0;
  char *local_1a8;
  char *pcStack_1a0;
  undefined *local_198;
  char *pcStack_190;
  undefined *local_188;
  undefined8 local_180;
  Variant *local_178;
  undefined1 auStack_170 [16];
  undefined8 local_160;
  undefined1 local_158 [16];
  Variant local_148 [24];
  Variant local_130 [24];
  undefined8 local_118;
  undefined1 local_110 [16];
  Variant local_100 [8];
  Variant *local_f8;
  Variant *pVStack_f0;
  Variant *local_e8;
  char **ppcStack_e0;
  undefined **local_d8;
  undefined8 local_c8;
  undefined1 local_c0 [16];
  Variant local_b0 [8];
  int local_a8 [2];
  undefined1 local_a0 [16];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_218 = 0;
  local_228 = (Variant *)0x105f71;
  pcStack_220 = "show_error";
  auStack_170._8_8_ = auStack_170._0_8_;
  auStack_170._0_8_ = &pcStack_220;
  uVar7 = (uint)(Variant *)&local_178;
  local_178 = (Variant *)&local_228;
  D_METHODP((char *)local_248,(char ***)"create_from_string",uVar7);
  StringName::StringName((StringName *)&local_250,"RegEx",false);
  Variant::Variant((Variant *)&local_178,true);
  local_158 = (undefined1  [16])0x0;
  local_160 = 0;
  local_228 = (Variant *)&local_178;
  pMVar6 = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(pMVar6);
  *(undefined ***)pMVar6 = &PTR__gen_argument_type_001143c0;
  *(code **)(pMVar6 + 0x58) = create_from_string;
  MethodBind::_generate_argument_types((int)pMVar6);
  *(undefined4 *)(pMVar6 + 0x34) = 2;
  MethodBind::_set_static(SUB81(pMVar6,0));
  MethodBind::_set_returns(SUB81(pMVar6,0));
  StringName::operator=((StringName *)(pMVar6 + 0x18),(StringName *)&local_250);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_248,&local_228,1);
  if (Variant::needs_deinit[(int)local_160] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_178];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_178];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_250 != 0)) {
    StringName::unref();
  }
  plVar5 = local_238;
  if (local_238 != (long *)0x0) {
    LOCK();
    plVar9 = local_238 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_238 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_238[-1];
      local_238 = (long *)0x0;
      if (lVar3 != 0) {
        lVar8 = 0;
        plVar9 = plVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar3 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_248[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_248,(char ***)"clear",0);
  auStack_170 = (undefined1  [16])0x0;
  local_178 = (Variant *)0x0;
  pMVar6 = create_method_bind<RegEx>(clear);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_178] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_238;
  if (local_238 != (long *)0x0) {
    LOCK();
    plVar9 = local_238 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_238 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_238[-1];
      local_238 = (long *)0x0;
      if (lVar3 != 0) {
        lVar8 = 0;
        plVar9 = plVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar3 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_248[0] != 0)) {
    StringName::unref();
  }
  local_1f8 = 0;
  local_208 = (Variant *)0x105f71;
  pcStack_200 = "show_error";
  auStack_170._0_8_ = &pcStack_200;
  local_178 = (Variant *)&local_208;
  D_METHODP((char *)local_248,(char ***)"compile",uVar7);
  Variant::Variant((Variant *)&local_178,true);
  local_158 = (undefined1  [16])0x0;
  local_160 = 0;
  local_208 = (Variant *)&local_178;
  pMVar6 = create_method_bind<RegEx,Error,String_const&,bool>(compile);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_248,&local_208,1);
  if (Variant::needs_deinit[(int)local_160] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_178] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_238;
  if (local_238 != (long *)0x0) {
    LOCK();
    plVar9 = local_238 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_238 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_238[-1];
      local_238 = (long *)0x0;
      if (lVar3 != 0) {
        lVar8 = 0;
        plVar9 = plVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar3 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_248[0] != 0)) {
    StringName::unref();
  }
  auStack_170._8_8_ = &local_1b8;
  local_1b0 = 0;
  local_1c8 = "subject";
  pcStack_1c0 = "offset";
  local_1b8 = &_LC53;
  local_178 = (Variant *)&local_1c8;
  auStack_170._0_8_ = &pcStack_1c0;
  D_METHODP((char *)local_248,(char ***)"search",uVar7);
  Variant::Variant((Variant *)&local_f8,0);
  Variant::Variant((Variant *)&ppcStack_e0,-1);
  local_c0 = (undefined1  [16])0x0;
  local_c8 = 0;
  auStack_170._0_8_ = (Variant *)&ppcStack_e0;
  local_178 = (Variant *)&local_f8;
  pMVar6 = create_method_bind<RegEx,Ref<RegExMatch>,String_const&,int,int>(search);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_248,&local_178,2);
  pVVar10 = local_b0;
  do {
    pVVar1 = pVVar10 + -0x18;
    pVVar10 = pVVar10 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
    plVar5 = local_238;
  } while (pVVar10 != (Variant *)&local_f8);
  if (local_238 != (long *)0x0) {
    LOCK();
    plVar9 = local_238 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_238 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_238[-1];
      local_238 = (long *)0x0;
      if (lVar3 != 0) {
        lVar8 = 0;
        plVar9 = plVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar3 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_248[0] != 0)) {
    StringName::unref();
  }
  local_e8 = (Variant *)&local_1d8;
  local_1d0 = 0;
  local_1e8 = "subject";
  pcStack_1e0 = "offset";
  pVVar10 = local_100;
  local_1d8 = &_LC53;
  uVar7 = (uint)(Variant *)&local_f8;
  local_f8 = (Variant *)&local_1e8;
  pVStack_f0 = (Variant *)&pcStack_1e0;
  D_METHODP((char *)local_248,(char ***)"search_all",uVar7);
  Variant::Variant(local_148,0);
  Variant::Variant(local_130,-1);
  local_110 = (undefined1  [16])0x0;
  local_118 = 0;
  local_f8 = local_148;
  pVStack_f0 = local_130;
  pMVar6 = create_method_bind<RegEx,TypedArray<RegExMatch>,String_const&,int,int>(search_all);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_248,&local_f8,2);
  do {
    pVVar1 = pVVar10 + -0x18;
    pVVar10 = pVVar10 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
    plVar5 = local_238;
  } while (pVVar10 != local_148);
  if (local_238 != (long *)0x0) {
    LOCK();
    plVar9 = local_238 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_238 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_238[-1];
      local_238 = (long *)0x0;
      if (lVar3 != 0) {
        lVar8 = 0;
        plVar9 = plVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar3 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_248[0] != 0)) {
    StringName::unref();
  }
  local_d8 = &local_188;
  local_1a8 = "subject";
  pcStack_1a0 = "replacement";
  local_198 = &_LC50;
  pcStack_190 = "offset";
  local_180 = 0;
  local_188 = &_LC53;
  local_f8 = (Variant *)&local_1a8;
  pVStack_f0 = (Variant *)&pcStack_1a0;
  local_e8 = (Variant *)&local_198;
  ppcStack_e0 = &pcStack_190;
  D_METHODP((char *)local_248,(char ***)&_LC30,uVar7);
  Variant::Variant((Variant *)local_a8,false);
  Variant::Variant(local_90,0);
  Variant::Variant(local_78,-1);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_f8 = (Variant *)local_a8;
  pVStack_f0 = local_90;
  local_e8 = local_78;
  pMVar6 = create_method_bind<RegEx,String,String_const&,String_const&,bool,int,int>(sub);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_248,&local_f8,3);
  pVVar10 = local_48;
  do {
    pVVar1 = pVVar10 + -0x18;
    pVVar10 = pVVar10 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
    plVar5 = local_238;
  } while (pVVar10 != (Variant *)local_a8);
  if (local_238 != (long *)0x0) {
    LOCK();
    plVar9 = local_238 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_238 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_238[-1];
      local_238 = (long *)0x0;
      if (lVar3 != 0) {
        lVar8 = 0;
        plVar9 = plVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar3 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_248[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_248,(char ***)"is_valid",0);
  local_a0 = (undefined1  [16])0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar6 = create_method_bind<RegEx,bool>(is_valid);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_238;
  if (local_238 != (long *)0x0) {
    LOCK();
    plVar9 = local_238 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_238 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_238[-1];
      local_238 = (long *)0x0;
      if (lVar3 != 0) {
        lVar8 = 0;
        plVar9 = plVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar3 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_248[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_248,(char ***)"get_pattern",0);
  local_a0 = (undefined1  [16])0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar6 = create_method_bind<RegEx,String>(get_pattern);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_238;
  if (local_238 != (long *)0x0) {
    LOCK();
    plVar9 = local_238 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_238 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_238[-1];
      local_238 = (long *)0x0;
      if (lVar3 != 0) {
        lVar8 = 0;
        plVar9 = plVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar3 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_248[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_248,(char ***)"get_group_count",0);
  local_a0 = (undefined1  [16])0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar6 = create_method_bind<RegEx,int>(get_group_count);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_238;
  if (local_238 != (long *)0x0) {
    LOCK();
    plVar9 = local_238 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_238 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_238[-1];
      local_238 = (long *)0x0;
      if (lVar3 != 0) {
        lVar8 = 0;
        plVar9 = plVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar3 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_248[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_248,(char ***)"get_names",0);
  local_a0 = (undefined1  [16])0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  pMVar6 = create_method_bind<RegEx,Vector<String>>(get_names);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_238;
  if (local_238 != (long *)0x0) {
    LOCK();
    plVar9 = local_238 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_238 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_238[-1];
      local_238 = (long *)0x0;
      if (lVar3 != 0) {
        lVar8 = 0;
        plVar9 = plVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar3 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_248[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* RegExMatch::get_strings() const */

void RegExMatch::get_strings(void)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  bool bVar7;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *(long *)(in_RSI + 400);
  *(undefined8 *)(in_RDI + 8) = 0;
  if ((lVar4 == 0) || (iVar5 = (int)*(undefined8 *)(lVar4 + -8), iVar5 < 1)) {
LAB_00103f88:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  uVar6 = 0;
  while (lVar4 != 0) {
    lVar3 = *(long *)(lVar4 + -8);
    if (lVar3 <= (long)uVar6) goto LAB_00103fb3;
    if (*(int *)(lVar4 + uVar6 * 8) == -1) {
      local_48 = 0;
      Vector<String>::push_back();
    }
    else {
      String::substr((int)&local_50,(int)in_RSI + 0x180);
      local_48 = 0;
      plVar1 = (long *)(local_50 + -0x10);
      if (local_50 == 0) {
        Vector<String>::push_back();
      }
      else {
        do {
          lVar4 = *plVar1;
          if (lVar4 == 0) goto LAB_00103e7b;
          LOCK();
          lVar3 = *plVar1;
          bVar7 = lVar4 == lVar3;
          if (bVar7) {
            *plVar1 = lVar4 + 1;
            lVar3 = lVar4;
          }
          UNLOCK();
        } while (!bVar7);
        if (lVar3 != -1) {
          local_48 = local_50;
        }
LAB_00103e7b:
        lVar4 = local_48;
        Vector<String>::push_back();
        if (lVar4 != 0) {
          LOCK();
          plVar1 = (long *)(lVar4 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_48 + -0x10),false);
          }
        }
      }
      lVar4 = local_50;
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
    if (iVar5 - 1 == uVar6) goto LAB_00103f88;
    uVar6 = uVar6 + 1;
    lVar4 = *(long *)(in_RSI + 400);
  }
  lVar3 = 0;
LAB_00103fb3:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar6,lVar3,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* RegEx::get_names() const */

void RegEx::get_names(void)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_RSI;
  long in_RDI;
  uint uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  uint local_60;
  int local_5c;
  long local_58;
  int *local_50;
  int *local_48;
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(in_RDI + 8) = 0;
  if (*(long *)(in_RSI + 0x188) == 0) {
    _err_print_error("get_names","modules/regex/regex.cpp",0x17f,
                     "Condition \"!is_valid()\" is true. Returning: result",0,0);
  }
  else {
    uVar8 = 0;
    pcre2_pattern_info_32(*(long *)(in_RSI + 0x188),0x11,&local_60);
    pcre2_pattern_info_32(*(undefined8 *)(in_RSI + 0x188),0x13,&local_58);
    pcre2_pattern_info_32(*(undefined8 *)(in_RSI + 0x188),0x12,&local_5c);
    if (local_60 != 0) {
      do {
        local_50 = (int *)0x0;
        local_48 = (int *)(local_58 + (ulong)(local_5c * uVar8 + 1) * 4);
        local_40 = 0;
        if ((local_48 != (int *)0x0) && (piVar4 = local_48, *local_48 != 0)) {
          do {
            piVar1 = piVar4 + 1;
            piVar4 = piVar4 + 1;
          } while (*piVar1 != 0);
          local_40 = (long)piVar4 - (long)local_48 >> 2;
        }
        String::parse_utf32((StrRange *)&local_50);
        lVar5 = *(long *)(in_RDI + 8);
        if ((lVar5 != 0) && (lVar6 = *(long *)(lVar5 + -8), lVar6 != 0)) {
          lVar7 = 0;
          while (lVar7 < lVar6) {
            cVar3 = String::operator==((String *)(lVar5 + lVar7 * 8),(String *)&local_50);
            if (cVar3 != '\0') goto LAB_001041a0;
            lVar5 = *(long *)(in_RDI + 8);
            lVar7 = lVar7 + 1;
            if (lVar5 == 0) break;
            lVar6 = *(long *)(lVar5 + -8);
          }
        }
        local_48 = (int *)0x0;
        plVar2 = (long *)(local_50 + -4);
        if (local_50 == (int *)0x0) {
          Vector<String>::push_back();
        }
        else {
          do {
            lVar5 = *plVar2;
            if (lVar5 == 0) goto LAB_00104174;
            LOCK();
            lVar6 = *plVar2;
            bVar9 = lVar5 == lVar6;
            if (bVar9) {
              *plVar2 = lVar5 + 1;
              lVar6 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar6 != -1) {
            local_48 = local_50;
          }
LAB_00104174:
          piVar4 = local_48;
          Vector<String>::push_back();
          if (piVar4 != (int *)0x0) {
            LOCK();
            plVar2 = (long *)(piVar4 + -4);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              Memory::free_static(local_48 + -4,false);
            }
          }
        }
LAB_001041a0:
        piVar4 = local_50;
        if (local_50 != (int *)0x0) {
          LOCK();
          plVar2 = (long *)(local_50 + -4);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_50 = (int *)0x0;
            Memory::free_static(piVar4 + -4,false);
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_60);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RegEx::create_from_string(String const&, bool) */

RegEx * __thiscall RegEx::create_from_string(RegEx *this,String *param_1,bool param_2)

{
  char cVar1;
  RefCounted *this_00;
  undefined8 uVar2;
  RegEx *pRVar3;
  RegEx *pRVar4;
  
  *(undefined8 *)this = 0;
  this_00 = (RefCounted *)operator_new(0x198,"");
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_00113f60;
  *(undefined8 *)(this_00 + 400) = 0;
  *(undefined1 (*) [16])(this_00 + 0x180) = (undefined1  [16])0x0;
  uVar2 = pcre2_general_context_create_32(_regex_malloc,_regex_free,0);
  *(undefined8 *)(this_00 + 0x180) = uVar2;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pRVar3 = *(RegEx **)this;
    if (pRVar3 == (RegEx *)0x0) goto LAB_001042ed;
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<RegEx>(pRVar3);
      pRVar3 = *(RegEx **)this;
      goto LAB_001042ed;
    }
  }
  else {
    pRVar3 = *(RegEx **)this;
    pRVar4 = pRVar3;
    if (this_00 != (RefCounted *)pRVar3) {
      *(RefCounted **)this = this_00;
      cVar1 = RefCounted::reference();
      pRVar4 = (RegEx *)this_00;
      if (cVar1 == '\0') {
        *(undefined8 *)this = 0;
        if (pRVar3 != (RegEx *)0x0) {
          cVar1 = RefCounted::unreference();
joined_r0x00104377:
          if (cVar1 != '\0') {
            memdelete<RegEx>(pRVar3);
          }
        }
      }
      else if (pRVar3 != (RegEx *)0x0) {
        cVar1 = RefCounted::unreference();
        goto joined_r0x00104377;
      }
    }
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<RegEx>(pRVar4);
      pRVar3 = *(RegEx **)this;
      goto LAB_001042ed;
    }
  }
  pRVar3 = *(RegEx **)this;
LAB_001042ed:
  compile(pRVar3,param_1,param_2);
  return this;
}



/* RegEx::_create_from_string_bind_compat_95212(String const&) */

RegEx * __thiscall RegEx::_create_from_string_bind_compat_95212(RegEx *this,String *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  create_from_string(this,param_1,true);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RegEx::search(String const&, int, int) const */

String * RegEx::search(String *param_1,int param_2,int param_3)

{
  long *plVar1;
  int *piVar2;
  CowData<RegExMatch::Range> *this;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcVar15;
  char cVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  RefCounted *this_00;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  int *piVar26;
  undefined8 *puVar27;
  String *pSVar28;
  int in_ECX;
  undefined8 *puVar29;
  ulong uVar30;
  uint uVar31;
  int extraout_EDX;
  undefined4 in_register_00000014;
  CowData *pCVar32;
  undefined4 in_register_00000034;
  long lVar33;
  long lVar34;
  CowData<RegExMatch::Range> *pCVar35;
  int in_R8D;
  ulong uVar36;
  uint uVar37;
  long in_FS_OFFSET;
  uint local_74;
  int local_70;
  uint local_6c;
  long local_68;
  undefined8 local_60;
  int *local_58;
  long local_50;
  long local_40;
  
  lVar33 = CONCAT44(in_register_00000034,param_2);
  pCVar32 = (CowData *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(lVar33 + 0x188) == 0) {
    _err_print_error("search","modules/regex/regex.cpp",0xd0,
                     "Condition \"!is_valid()\" is true. Returning: nullptr",0,0);
    *(undefined8 *)param_1 = 0;
    goto LAB_001047e8;
  }
  if (in_ECX < 0) {
    _err_print_error("search","modules/regex/regex.cpp",0xd1,
                     "Condition \"p_offset < 0\" is true. Returning: nullptr",
                     "RegEx search offset must be >= 0",0,0);
    *(undefined8 *)param_1 = 0;
    goto LAB_001047e8;
  }
  this_00 = (RefCounted *)operator_new(0x1c8,"");
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_00113e00;
  *(undefined8 *)(this_00 + 0x180) = 0;
  *(undefined8 *)(this_00 + 400) = 0;
  *(undefined8 *)(this_00 + 0x1c0) = 2;
  *(undefined1 (*) [16])(this_00 + 0x1a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x1b0) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar16 = RefCounted::init_ref();
  if (cVar16 == '\0') {
    this_00 = (RefCounted *)0x0;
  }
  if (*(long *)pCVar32 == 0) {
    iVar17 = 0;
  }
  else {
    iVar17 = (int)*(undefined8 *)(*(long *)pCVar32 + -8);
    iVar17 = iVar17 + -1 + (uint)(iVar17 == 0);
  }
  if ((in_R8D < 0) || (iVar17 <= in_R8D)) {
    in_R8D = iVar17;
  }
  uVar22 = *(undefined8 *)(lVar33 + 0x180);
  uVar6 = *(undefined8 *)(lVar33 + 0x188);
  uVar20 = pcre2_match_context_create_32(uVar22);
  uVar21 = String::get_data();
  uVar22 = pcre2_match_data_create_from_pattern_32(uVar6,uVar22);
  iVar17 = pcre2_match_32(uVar6,uVar21,(long)in_R8D,(long)in_ECX,0,uVar22,uVar20);
  if (iVar17 < 0) {
    pcre2_match_data_free_32(uVar22);
    pcre2_match_context_free_32(uVar20);
    *(undefined8 *)param_1 = 0;
    if (this_00 == (RefCounted *)0x0) goto LAB_001047e8;
  }
  else {
    uVar18 = pcre2_get_ovector_count_32();
    uVar30 = (ulong)uVar18;
    lVar23 = pcre2_get_ovector_pointer_32(uVar22);
    this = (CowData<RegExMatch::Range> *)((Object *)this_00 + 400);
    lVar34 = *(long *)((Object *)this_00 + 400);
    if (lVar34 == 0) {
      if (uVar30 != 0) {
        CowData<RegExMatch::Range>::_copy_on_write(this);
        uVar36 = 0;
LAB_00104abf:
        uVar24 = uVar30 * 8 - 1;
        uVar24 = uVar24 >> 1 | uVar24;
        uVar24 = uVar24 >> 2 | uVar24;
        uVar24 = uVar24 | uVar24 >> 4;
        uVar24 = uVar24 >> 8 | uVar24;
        uVar24 = uVar24 >> 0x10 | uVar24;
        lVar34 = (uVar24 >> 0x20 | uVar24) + 1;
        if ((long)uVar36 < (long)uVar30) {
LAB_00104b0f:
          if (uVar36 == 0) {
            puVar27 = (undefined8 *)Memory::alloc_static(lVar34 + 0x10,false);
            if (puVar27 != (undefined8 *)0x0) {
              puVar29 = puVar27 + 2;
              *puVar27 = 1;
              puVar27[1] = 0;
              *(undefined8 **)((Object *)this_00 + 400) = puVar29;
              lVar34 = 0;
              if (uVar30 != 0) goto LAB_0010467f;
              puVar27[1] = 0;
              goto LAB_00104837;
            }
            _err_print_error("resize","./core/templates/cowdata.h",0x171,
                             "Parameter \"mem_new\" is null.",0,0);
          }
          else {
            iVar17 = CowData<RegExMatch::Range>::_realloc(this,lVar34);
            if (iVar17 == 0) {
LAB_00104666:
              puVar29 = *(undefined8 **)((Object *)this_00 + 400);
              if (puVar29 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
                pcVar15 = (code *)invalidInstructionException();
                (*pcVar15)();
              }
              lVar34 = puVar29[-1];
              if (lVar34 < (long)uVar30) {
LAB_0010467f:
                puVar27 = puVar29 + lVar34;
                do {
                  *puVar27 = 0;
                  puVar27 = puVar27 + 1;
                } while (puVar29 + uVar30 != puVar27);
              }
              puVar29[-1] = uVar30;
            }
          }
        }
        else {
LAB_00104d48:
          pCVar35 = this;
          iVar17 = CowData<RegExMatch::Range>::_realloc(this,lVar34);
          if (iVar17 == 0) {
            if (*(long *)((Object *)this_00 + 400) == 0) {
              pSVar28 = (String *)search((String *)pCVar35,(int)lVar34,extraout_EDX);
              return pSVar28;
            }
            *(ulong *)(*(long *)((Object *)this_00 + 400) + -8) = uVar30;
          }
        }
        goto LAB_001046a4;
      }
    }
    else {
      uVar36 = *(ulong *)(lVar34 + -8);
      if (uVar30 == uVar36) {
LAB_001046a4:
        if (uVar18 == 0) goto LAB_00104837;
        lVar34 = *(long *)((Object *)this_00 + 400);
      }
      else {
        if (uVar30 == 0) {
          LOCK();
          plVar1 = (long *)(lVar34 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar34 = *(long *)((Object *)this_00 + 400);
            *(undefined8 *)((Object *)this_00 + 400) = 0;
            Memory::free_static((void *)(lVar34 + -0x10),false);
          }
          else {
            *(undefined8 *)((Object *)this_00 + 400) = 0;
          }
          goto LAB_00104837;
        }
        CowData<RegExMatch::Range>::_copy_on_write(this);
        uVar24 = uVar30 * 8 - 1;
        uVar24 = uVar24 >> 1 | uVar24;
        uVar24 = uVar24 >> 2 | uVar24;
        uVar24 = uVar24 >> 4 | uVar24;
        uVar24 = uVar24 >> 8 | uVar24;
        uVar24 = uVar24 >> 0x10 | uVar24;
        uVar24 = uVar24 >> 0x20 | uVar24;
        lVar34 = uVar24 + 1;
        if (uVar36 * 8 == 0) goto LAB_00104abf;
        uVar25 = uVar36 * 8 - 1;
        uVar25 = uVar25 | uVar25 >> 1;
        uVar25 = uVar25 | uVar25 >> 2;
        uVar25 = uVar25 | uVar25 >> 4;
        uVar25 = uVar25 | uVar25 >> 8;
        uVar25 = uVar25 | uVar25 >> 0x10;
        uVar25 = uVar25 | uVar25 >> 0x20;
        if ((long)uVar36 < (long)uVar30) {
          if (uVar25 != uVar24) goto LAB_00104b0f;
          goto LAB_00104666;
        }
        if (uVar25 != uVar24) goto LAB_00104d48;
        lVar34 = *(long *)((Object *)this_00 + 400);
        if (lVar34 == 0) {
          _DAT_00000000 = 0;
                    /* WARNING: Does not return */
          pcVar15 = (code *)invalidInstructionException();
          (*pcVar15)();
        }
        *(ulong *)(lVar34 + -8) = uVar30;
      }
      uVar36 = 0;
      do {
        uVar18 = (int)uVar36 * 2;
        uVar6 = *(undefined8 *)(lVar23 + (ulong)uVar18 * 8);
        if (lVar34 == 0) {
LAB_0010474c:
          lVar34 = 0;
LAB_00104752:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,uVar36,lVar34,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar15 = (code *)invalidInstructionException();
          (*pcVar15)();
        }
        lVar34 = *(long *)(lVar34 + -8);
        if (lVar34 <= (long)uVar36) goto LAB_00104752;
        lVar3 = uVar36 * 8;
        CowData<RegExMatch::Range>::_copy_on_write(this);
        lVar34 = *(long *)((Object *)this_00 + 400);
        uVar21 = *(undefined8 *)(lVar23 + (ulong)(uVar18 + 1) * 8);
        *(int *)(lVar34 + uVar36 * 8) = (int)uVar6;
        if (lVar34 == 0) goto LAB_0010474c;
        lVar34 = *(long *)(lVar34 + -8);
        if (lVar34 <= (long)uVar36) goto LAB_00104752;
        uVar36 = uVar36 + 1;
        CowData<RegExMatch::Range>::_copy_on_write(this);
        lVar34 = *(long *)((Object *)this_00 + 400);
        *(int *)(lVar34 + 4 + lVar3) = (int)uVar21;
      } while (uVar36 != uVar30);
    }
LAB_00104837:
    pcre2_match_data_free_32(uVar22);
    pcre2_match_context_free_32(uVar20);
    if (*(long *)((Object *)this_00 + 0x180) != *(long *)pCVar32) {
      CowData<char32_t>::_ref((CowData<char32_t> *)((Object *)this_00 + 0x180),pCVar32);
    }
    uVar18 = 0;
    pcre2_pattern_info_32(*(undefined8 *)(lVar33 + 0x188),0x11,&local_74);
    pcre2_pattern_info_32(*(undefined8 *)(lVar33 + 0x188),0x13,&local_68);
    pcre2_pattern_info_32(*(undefined8 *)(lVar33 + 0x188),0x12,&local_70);
    if (local_74 != 0) {
      do {
        uVar4 = *(uint *)(local_68 + (ulong)(local_70 * uVar18) * 4);
        uVar30 = (ulong)uVar4;
        lVar33 = *(long *)((Object *)this_00 + 400);
        if (lVar33 == 0) {
          lVar34 = 0;
LAB_00104cdb:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar30,lVar34,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar15 = (code *)invalidInstructionException();
          (*pcVar15)();
        }
        lVar34 = *(long *)(lVar33 + -8);
        if (lVar34 <= (long)uVar30) goto LAB_00104cdb;
        if (*(int *)(lVar33 + uVar30 * 8) != -1) {
          local_60 = 0;
          local_58 = (int *)(local_68 + (ulong)(local_70 * uVar18 + 1) * 4);
          local_50 = 0;
          if ((local_58 != (int *)0x0) && (piVar26 = local_58, *local_58 != 0)) {
            do {
              piVar2 = piVar26 + 1;
              piVar26 = piVar26 + 1;
            } while (*piVar2 != 0);
            local_50 = (long)piVar26 - (long)local_58 >> 2;
          }
          String::parse_utf32((StrRange *)&local_60);
          if ((*(long *)((Object *)this_00 + 0x1a0) != 0) &&
             (*(int *)((Object *)this_00 + 0x1c4) != 0)) {
            uVar5 = *(uint *)(hash_table_size_primes +
                             (ulong)*(uint *)((Object *)this_00 + 0x1c0) * 4);
            lVar33 = *(long *)(hash_table_size_primes_inv +
                              (ulong)*(uint *)((Object *)this_00 + 0x1c0) * 8);
            uVar19 = String::hash();
            uVar30 = CONCAT44(0,uVar5);
            lVar34 = *(long *)((Object *)this_00 + 0x1a8);
            uVar31 = 1;
            if (uVar19 != 0) {
              uVar31 = uVar19;
            }
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar31 * lVar33;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar30;
            lVar23 = SUB168(auVar7 * auVar11,8);
            uVar19 = *(uint *)(lVar34 + lVar23 * 4);
            iVar17 = SUB164(auVar7 * auVar11,8);
            if (uVar19 != 0) {
              uVar37 = 0;
              do {
                if (uVar19 == uVar31) {
                  cVar16 = String::operator==((String *)
                                              (*(long *)(*(long *)((Object *)this_00 + 0x1a0) +
                                                        lVar23 * 8) + 0x10),(String *)&local_60);
                  if (cVar16 != '\0') {
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
                    goto LAB_00104c33;
                  }
                  lVar34 = *(long *)((Object *)this_00 + 0x1a8);
                }
                uVar37 = uVar37 + 1;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)(iVar17 + 1) * lVar33;
                auVar12._8_8_ = 0;
                auVar12._0_8_ = uVar30;
                lVar23 = SUB168(auVar8 * auVar12,8);
                uVar19 = *(uint *)(lVar34 + lVar23 * 4);
                iVar17 = SUB164(auVar8 * auVar12,8);
              } while ((uVar19 != 0) &&
                      (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar19 * lVar33, auVar13._8_8_ = 0,
                      auVar13._0_8_ = uVar30, auVar10._8_8_ = 0,
                      auVar10._0_8_ =
                           (ulong)((uVar5 + iVar17) - SUB164(auVar9 * auVar13,8)) * lVar33,
                      auVar14._8_8_ = 0, auVar14._0_8_ = uVar30,
                      uVar37 <= SUB164(auVar10 * auVar14,8)));
            }
          }
          local_6c = uVar4;
          HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>
          ::insert((String *)&local_58,(int *)((Object *)this_00 + 0x198),
                   SUB81((StrRange *)&local_60,0));
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        }
LAB_00104c33:
        uVar18 = uVar18 + 1;
      } while (uVar18 < local_74);
    }
    *(RefCounted **)param_1 = this_00;
    cVar16 = RefCounted::reference();
    if (cVar16 == '\0') {
      *(undefined8 *)param_1 = 0;
    }
  }
  cVar16 = RefCounted::unreference();
  if ((cVar16 != '\0') && (cVar16 = predelete_handler((Object *)this_00), cVar16 != '\0')) {
    (**(code **)(*(long *)this_00 + 0x140))(this_00);
    Memory::free_static(this_00,false);
  }
LAB_001047e8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* RegEx::search_all(String const&, int, int) const */

RegEx * __thiscall RegEx::search_all(RegEx *this,String *param_1,int param_2,int param_3)

{
  Object *pOVar1;
  char cVar2;
  RegExMatch *this_00;
  long in_FS_OFFSET;
  Array local_78 [8];
  RegExMatch *local_70;
  Object *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 0) {
    _err_print_error("search_all","modules/regex/regex.cpp",0x112,
                     "Condition \"p_offset < 0\" is true. Returning: Array()",
                     "RegEx search offset must be >= 0",0,0);
    Array::Array(local_78);
    Array::Array((Array *)this);
    local_50 = (undefined1  [16])0x0;
    local_68 = (Object *)0x106334;
    local_58 = 0;
    local_70 = (RegExMatch *)0x0;
    local_60 = 10;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
    Array::set_typed((uint)this,(StringName *)0x18,(Variant *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    cVar2 = Array::is_same_typed((Array *)this);
    if (cVar2 == '\0') {
      Array::assign((Array *)this);
    }
    else {
      Array::_ref((Array *)this);
    }
    Array::~Array(local_78);
  }
  else {
    Array::Array(local_78);
    local_50 = (undefined1  [16])0x0;
    local_68 = (Object *)0x106334;
    local_58 = 0;
    local_70 = (RegExMatch *)0x0;
    local_60 = 10;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
    Array::set_typed((uint)local_78,(StringName *)0x18,(Variant *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    search((String *)&local_70,(int)param_1,param_2);
    this_00 = local_70;
    while (this_00 != (RegExMatch *)0x0) {
      Variant::Variant((Variant *)&local_58,0);
      RegExMatch::get_end(this_00,(Variant *)&local_58);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)&local_58,0);
      RegExMatch::get_start(this_00,(Variant *)&local_58);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)&local_58,(Object *)this_00);
      Array::push_back((Variant *)local_78);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      search((String *)&local_68,(int)param_1,param_2);
      pOVar1 = local_68;
      if (local_68 == (Object *)this_00) {
LAB_00104fdb:
        cVar2 = RefCounted::unreference();
        this_00 = local_70;
        if ((cVar2 != '\0') &&
           (cVar2 = predelete_handler(pOVar1), this_00 = local_70, cVar2 != '\0')) {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
      else {
        local_70 = (RegExMatch *)local_68;
        if (local_68 != (Object *)0x0) {
          cVar2 = RefCounted::reference();
          if (cVar2 == '\0') {
            local_70 = (RegExMatch *)0x0;
            cVar2 = RefCounted::unreference();
          }
          else {
            cVar2 = RefCounted::unreference();
          }
          if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)this_00), cVar2 != '\0')) {
            (**(code **)(*(long *)this_00 + 0x140))(this_00);
            Memory::free_static(this_00,false);
          }
          goto LAB_00104fdb;
        }
        cVar2 = RefCounted::unreference();
        if ((cVar2 == '\0') || (cVar2 = predelete_handler((Object *)this_00), cVar2 == '\0')) break;
        (**(code **)(*(long *)this_00 + 0x140))(this_00);
        Memory::free_static(this_00,false);
        this_00 = local_70;
      }
    }
    Array::Array((Array *)this,local_78);
    Array::~Array(local_78);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1146,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1146,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RefCounted::_getv(StringName const&, Variant&) const */

undefined8 RefCounted::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_setv(StringName const&, Variant const&) */

undefined8 RefCounted::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_validate_propertyv(PropertyInfo&) const */

void RefCounted::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RefCounted::_property_can_revertv(StringName const&) const */

undefined8 RefCounted::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RefCounted::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_notificationv(int, bool) */

void RefCounted::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RegExMatch::is_class_ptr(void*) const */

uint __thiscall RegExMatch::is_class_ptr(RegExMatch *this,void *param_1)

{
  return (uint)CONCAT71(0x1146,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1146,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1146,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* RegExMatch::_getv(StringName const&, Variant&) const */

undefined8 RegExMatch::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RegExMatch::_setv(StringName const&, Variant const&) */

undefined8 RegExMatch::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RegExMatch::_validate_propertyv(PropertyInfo&) const */

void RegExMatch::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RegExMatch::_property_can_revertv(StringName const&) const */

undefined8 RegExMatch::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RegExMatch::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RegExMatch::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RegExMatch::_notificationv(int, bool) */

void RegExMatch::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RegEx::is_class_ptr(void*) const */

uint __thiscall RegEx::is_class_ptr(RegEx *this,void *param_1)

{
  return (uint)CONCAT71(0x1146,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1146,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1146,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* RegEx::_getv(StringName const&, Variant&) const */

undefined8 RegEx::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RegEx::_setv(StringName const&, Variant const&) */

undefined8 RegEx::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RegEx::_validate_propertyv(PropertyInfo&) const */

void RegEx::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RegEx::_property_can_revertv(StringName const&) const */

undefined8 RegEx::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RegEx::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RegEx::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RegEx::_notificationv(int, bool) */

void RegEx::_notificationv(int param_1,bool param_2)

{
  return;
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



/* MethodBindTRC<String, String const&, String const&, bool, int, int>::get_argument_meta(int) const
    */

byte __thiscall
MethodBindTRC<String,String_const&,String_const&,bool,int,int>::get_argument_meta
          (MethodBindTRC<String,String_const&,String_const&,bool,int,int> *this,int param_1)

{
  return -(param_1 - 3U < 2) & 3;
}



/* MethodBindTRC<TypedArray<RegExMatch>, String const&, int, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<TypedArray<RegExMatch>,String_const&,int,int>::_gen_argument_type
          (MethodBindTRC<TypedArray<RegExMatch>,String_const&,int,int> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\x1c';
  if ((uint)param_1 < 3) {
    cVar1 = (-(param_1 == 0) & 2U) + 2;
  }
  return cVar1;
}



/* MethodBindTRC<TypedArray<RegExMatch>, String const&, int, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<TypedArray<RegExMatch>,String_const&,int,int>::get_argument_meta
          (MethodBindTRC<TypedArray<RegExMatch>,String_const&,int,int> *this,int param_1)

{
  return -(param_1 - 1U < 2) & 3;
}



/* MethodBindTRC<Ref<RegExMatch>, String const&, int, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<Ref<RegExMatch>,String_const&,int,int>::_gen_argument_type
          (MethodBindTRC<Ref<RegExMatch>,String_const&,int,int> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\x18';
  if ((uint)param_1 < 3) {
    cVar1 = (-(param_1 == 0) & 2U) + 2;
  }
  return cVar1;
}



/* MethodBindTRC<Ref<RegExMatch>, String const&, int, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Ref<RegExMatch>,String_const&,int,int>::get_argument_meta
          (MethodBindTRC<Ref<RegExMatch>,String_const&,int,int> *this,int param_1)

{
  return -(param_1 - 1U < 2) & 3;
}



/* MethodBindTR<Error, String const&, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Error,String_const&,bool>::_gen_argument_type
          (MethodBindTR<Error,String_const&,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\x02';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 3U) + 1;
  }
  return cVar1;
}



/* MethodBindTR<Error, String const&, bool>::get_argument_meta(int) const */

undefined8 MethodBindTR<Error,String_const&,bool>::get_argument_meta(int param_1)

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



/* MethodBindTRS<Ref<RegEx>, String const&, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRS<Ref<RegEx>,String_const&,bool>::_gen_argument_type
          (MethodBindTRS<Ref<RegEx>,String_const&,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\x18';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 3U) + 1;
  }
  return cVar1;
}



/* MethodBindTRS<Ref<RegEx>, String const&, bool>::get_argument_meta(int) const */

undefined8 MethodBindTRS<Ref<RegEx>,String_const&,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<int, Variant const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<int,Variant_const&>::_gen_argument_type
          (MethodBindTRC<int,Variant_const&> *this,int param_1)

{
  return (param_1 != 0) * '\x02';
}



/* MethodBindTRC<int, Variant const&>::get_argument_meta(int) const */

uint __thiscall
MethodBindTRC<int,Variant_const&>::get_argument_meta
          (MethodBindTRC<int,Variant_const&> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindTRC<String, Variant const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindTRC<String,Variant_const&>::_gen_argument_type
          (MethodBindTRC<String,Variant_const&> *this,int param_1)

{
  return (ulong)(param_1 != 0) << 2;
}



/* MethodBindTRC<String, Variant const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String,Variant_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Vector<String>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector<String>>::_gen_argument_type(int param_1)

{
  return 0x22;
}



/* MethodBindTRC<Vector<String>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector<String>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Dictionary>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Dictionary>::_gen_argument_type(int param_1)

{
  return 0x1b;
}



/* MethodBindTRC<Dictionary>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Dictionary>::get_argument_meta(int param_1)

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



/* MethodBindTRC<String>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTRC<String>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, String const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Error,String_const&>::_gen_argument_type
          (MethodBindTR<Error,String_const&> *this,int param_1)

{
  return (-(param_1 == 0) & 2U) + 2;
}



/* MethodBindTR<Error, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<Error,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRS<Ref<RegEx>, String const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRS<Ref<RegEx>,String_const&>::_gen_argument_type
          (MethodBindTRS<Ref<RegEx>,String_const&> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffec) + 0x18;
}



/* MethodBindTRS<Ref<RegEx>, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTRS<Ref<RegEx>,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<String, String const&, String const&, bool, int, int>::_gen_argument_type(int)
   const */

char __thiscall
MethodBindTRC<String,String_const&,String_const&,bool,int,int>::_gen_argument_type
          (MethodBindTRC<String,String_const&,String_const&,bool,int,int> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\x04';
  if (param_1 - 2U < 3) {
    cVar1 = (param_1 != 2) + '\x01';
  }
  return cVar1;
}



/* MethodBindTRS<Ref<RegEx>, String const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Ref<RegEx>,String_const&>::~MethodBindTRS
          (MethodBindTRS<Ref<RegEx>,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001140c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRS<Ref<RegEx>, String const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Ref<RegEx>,String_const&>::~MethodBindTRS
          (MethodBindTRS<Ref<RegEx>,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001140c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x60);
  return;
}



/* MethodBindTR<Error, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114120;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114120;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114180;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114180;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001141e0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001141e0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Dictionary>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114240;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Dictionary>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114240;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001142a0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001142a0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String, Variant const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<String,Variant_const&>::~MethodBindTRC(MethodBindTRC<String,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114300;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String, Variant const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<String,Variant_const&>::~MethodBindTRC(MethodBindTRC<String,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114300;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int, Variant const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<int,Variant_const&>::~MethodBindTRC(MethodBindTRC<int,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114360;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int, Variant const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<int,Variant_const&>::~MethodBindTRC(MethodBindTRC<int,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114360;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRS<Ref<RegEx>, String const&, bool>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Ref<RegEx>,String_const&,bool>::~MethodBindTRS
          (MethodBindTRS<Ref<RegEx>,String_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001143c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRS<Ref<RegEx>, String const&, bool>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Ref<RegEx>,String_const&,bool>::~MethodBindTRS
          (MethodBindTRS<Ref<RegEx>,String_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001143c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x60);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114420;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114420;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, String const&, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,bool>::~MethodBindTR(MethodBindTR<Error,String_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114480;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, String const&, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,bool>::~MethodBindTR(MethodBindTR<Error,String_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114480;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<RegExMatch>, String const&, int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<RegExMatch>,String_const&,int,int>::~MethodBindTRC
          (MethodBindTRC<Ref<RegExMatch>,String_const&,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001144e0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<RegExMatch>, String const&, int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<RegExMatch>,String_const&,int,int>::~MethodBindTRC
          (MethodBindTRC<Ref<RegExMatch>,String_const&,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001144e0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TypedArray<RegExMatch>, String const&, int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<RegExMatch>,String_const&,int,int>::~MethodBindTRC
          (MethodBindTRC<TypedArray<RegExMatch>,String_const&,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114540;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TypedArray<RegExMatch>, String const&, int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<RegExMatch>,String_const&,int,int>::~MethodBindTRC
          (MethodBindTRC<TypedArray<RegExMatch>,String_const&,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114540;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String, String const&, String const&, bool, int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<String,String_const&,String_const&,bool,int,int>::~MethodBindTRC
          (MethodBindTRC<String,String_const&,String_const&,bool,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001145a0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String, String const&, String const&, bool, int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<String,String_const&,String_const&,bool,int,int>::~MethodBindTRC
          (MethodBindTRC<String,String_const&,String_const&,bool,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001145a0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114600;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114600;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00113ca0;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00113ca0;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* CowData<RegExMatch::Range>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RegExMatch::Range>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<char32_t>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<char32_t>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<char32_t>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<char32_t>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010608c(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RegEx::_bind_compatibility_methods() [clone .cold] */

void RegEx::_bind_compatibility_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RegExMatch::_bind_methods() [clone .cold] */

void RegExMatch::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RegEx::_bind_methods() [clone .cold] */

void RegEx::_bind_methods(void)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RegEx::search(String const&, int, int) const [clone .cold] */

void RegEx::search(String *param_1,int param_2,int param_3)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RegEx::_get_class_namev() const */

undefined8 * RegEx::_get_class_namev(void)

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
LAB_001061b3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001061b3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RegEx");
      goto LAB_0010621e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RegEx");
LAB_0010621e:
  return &_get_class_namev()::_class_name_static;
}



/* RefCounted::_get_class_namev() const */

undefined8 * RefCounted::_get_class_namev(void)

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
LAB_00106293:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106293;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_001062fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_001062fe:
  return &_get_class_namev()::_class_name_static;
}



/* RegExMatch::_get_class_namev() const */

undefined8 * RegExMatch::_get_class_namev(void)

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
LAB_00106373:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106373;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RegExMatch");
      goto LAB_001063de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RegExMatch");
LAB_001063de:
  return &_get_class_namev()::_class_name_static;
}



/* RegEx::get_class() const */

void RegEx::get_class(void)

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



/* RegExMatch::get_class() const */

void RegExMatch::get_class(void)

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



/* RefCounted::get_class() const */

void RefCounted::get_class(void)

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



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
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
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010670f;
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
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010670f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_001067c3;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_001067c3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_001067c3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RegExMatch::is_class(String const&) const */

undefined8 __thiscall RegExMatch::is_class(RegExMatch *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010696f;
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
LAB_0010696f:
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
    if (cVar5 != '\0') goto LAB_00106a23;
  }
  cVar5 = String::operator==(param_1,"RegExMatch");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00106a23:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RegEx::is_class(String const&) const */

undefined8 __thiscall RegEx::is_class(RegEx *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00106aef;
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
LAB_00106aef:
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
    if (cVar5 != '\0') goto LAB_00106ba3;
  }
  cVar5 = String::operator==(param_1,"RegEx");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00106ba3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC11;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 4;
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
      goto joined_r0x00106d3c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00106d3c:
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



/* MethodBindTRC<Vector<String>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector<String>>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC11;
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
      goto joined_r0x00106ebc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00106ebc:
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
  local_48 = &_LC11;
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
      goto joined_r0x0010703c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010703c:
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
  local_48 = &_LC11;
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
      goto joined_r0x001071bc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001071bc:
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



/* MethodBindTRC<Dictionary>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Dictionary>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC11;
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
      goto joined_r0x0010733c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010733c:
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



/* RegExMatch::~RegExMatch() */

void __thiscall RegExMatch::~RegExMatch(RegExMatch *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_00113e00;
  pvVar5 = *(void **)(this + 0x1a0);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x1c4) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1c0) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x1c4) = 0;
        *(undefined1 (*) [16])(this + 0x1b0) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1a8) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x1a8) + lVar4) = 0;
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
            pvVar5 = *(void **)(this + 0x1a0);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x1c4) = 0;
        *(undefined1 (*) [16])(this + 0x1b0) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00107462;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x1a8),false);
  }
LAB_00107462:
  if (*(long *)(this + 400) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 400) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 400);
      *(undefined8 *)(this + 400) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x180) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x180) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0x180);
      *(undefined8 *)(this + 0x180) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00113ca0;
  Object::~Object((Object *)this);
  return;
}



/* RegExMatch::~RegExMatch() */

void __thiscall RegExMatch::~RegExMatch(RegExMatch *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_00113e00;
  pvVar5 = *(void **)(this + 0x1a0);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x1c4) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1c0) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x1c4) = 0;
        *(undefined1 (*) [16])(this + 0x1b0) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1a8) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x1a8) + lVar4) = 0;
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
            pvVar5 = *(void **)(this + 0x1a0);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x1c4) = 0;
        *(undefined1 (*) [16])(this + 0x1b0) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00107612;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x1a8),false);
  }
LAB_00107612:
  if (*(long *)(this + 400) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 400) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 400);
      *(undefined8 *)(this + 400) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x180) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x180) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0x180);
      *(undefined8 *)(this + 0x180) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00113ca0;
  Object::~Object((Object *)this);
  operator_delete(this,0x1c8);
  return;
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RefCounted";
    local_50 = 0;
    local_30 = 10;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
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
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
LAB_00107a08:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107a08;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00107a26;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00107a26:
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



/* RegEx::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall RegEx::_get_property_listv(RegEx *this,List *param_1,bool param_2)

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
  local_78 = "RegEx";
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RegEx";
  local_98 = 0;
  local_70 = 5;
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
LAB_00107e08:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107e08;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00107e25;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00107e25:
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
  StringName::StringName((StringName *)&local_78,"RegEx",false);
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



/* RegExMatch::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall RegExMatch::_get_property_listv(RegExMatch *this,List *param_1,bool param_2)

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
  local_78 = "RegExMatch";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RegExMatch";
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
LAB_00108258:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108258;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00108275;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00108275:
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
  StringName::StringName((StringName *)&local_78,"RegExMatch",false);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, int> > >::insert(String const&, int const&, bool) */

String * HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>
         ::insert(String *param_1,int *param_2,bool param_3)

{
  undefined8 *puVar1;
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
  char cVar28;
  uint uVar29;
  ulong uVar30;
  undefined8 uVar31;
  void *__s_00;
  void *pvVar32;
  undefined4 *in_RCX;
  int iVar33;
  undefined7 in_register_00000011;
  String *pSVar34;
  long lVar35;
  long lVar36;
  uint uVar37;
  ulong uVar38;
  undefined8 uVar39;
  uint *puVar40;
  uint uVar41;
  char in_R8B;
  uint uVar42;
  uint uVar43;
  ulong uVar44;
  long lVar45;
  undefined4 uVar46;
  uint uVar47;
  undefined1 (*pauVar48) [16];
  undefined1 (*pauVar49) [16];
  long in_FS_OFFSET;
  undefined1 (*pauStack_c0) [16];
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pSVar34 = (String *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4);
  if (*(long *)(param_2 + 2) == 0) {
    uVar38 = (ulong)uVar37;
    uVar30 = uVar38 * 4;
    uVar44 = uVar38 * 8;
    uVar31 = Memory::alloc_static(uVar30,false);
    *(undefined8 *)(param_2 + 4) = uVar31;
    pvVar32 = (void *)Memory::alloc_static(uVar44,false);
    *(void **)(param_2 + 2) = pvVar32;
    if (uVar37 != 0) {
      pvVar2 = *(void **)(param_2 + 4);
      if ((pvVar2 < (void *)((long)pvVar32 + uVar44)) && (pvVar32 < (void *)((long)pvVar2 + uVar30))
         ) {
        uVar30 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar30 * 4) = 0;
          *(undefined8 *)((long)pvVar32 + uVar30 * 8) = 0;
          uVar30 = uVar30 + 1;
        } while (uVar38 != uVar30);
      }
      else {
        memset(pvVar2,0,uVar30);
        memset(pvVar32,0,uVar44);
      }
      goto LAB_00108708;
    }
    iVar33 = param_2[0xb];
    if (pvVar32 == (void *)0x0) goto LAB_00108717;
    if (param_2[0xb] != 0) goto LAB_00108b48;
LAB_0010873d:
    uVar37 = param_2[10];
    if (uVar37 == 0x1c) {
      pauStack_c0 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00108af7;
    }
    uVar30 = (ulong)(uVar37 + 1);
    param_2[0xb] = 0;
    uVar29 = *(uint *)(hash_table_size_primes + (ulong)uVar37 * 4);
    if (uVar37 + 1 < 2) {
      uVar30 = 2;
    }
    uVar37 = *(uint *)(hash_table_size_primes + uVar30 * 4);
    uVar38 = (ulong)uVar37;
    param_2[10] = (int)uVar30;
    pvVar32 = *(void **)(param_2 + 2);
    uVar30 = uVar38 * 4;
    uVar44 = uVar38 * 8;
    pvVar2 = *(void **)(param_2 + 4);
    uVar31 = Memory::alloc_static(uVar30,false);
    *(undefined8 *)(param_2 + 4) = uVar31;
    __s_00 = (void *)Memory::alloc_static(uVar44,false);
    *(void **)(param_2 + 2) = __s_00;
    if (uVar37 != 0) {
      __s = *(void **)(param_2 + 4);
      if ((__s < (void *)((long)__s_00 + uVar44)) && (__s_00 < (void *)((long)__s + uVar30))) {
        uVar30 = 0;
        do {
          *(undefined4 *)((long)__s + uVar30 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar30 * 8) = 0;
          uVar30 = uVar30 + 1;
        } while (uVar30 != uVar38);
      }
      else {
        memset(__s,0,uVar30);
        memset(__s_00,0,uVar44);
      }
    }
    if (uVar29 != 0) {
      uVar30 = 0;
      do {
        uVar37 = *(uint *)((long)pvVar2 + uVar30 * 4);
        if (uVar37 != 0) {
          lVar3 = *(long *)(param_2 + 4);
          uVar42 = 0;
          uVar41 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4);
          uVar44 = CONCAT44(0,uVar41);
          lVar45 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar37 * lVar45;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar44;
          lVar35 = SUB168(auVar4 * auVar16,8);
          puVar40 = (uint *)(lVar3 + lVar35 * 4);
          iVar33 = SUB164(auVar4 * auVar16,8);
          uVar43 = *puVar40;
          uVar31 = *(undefined8 *)((long)pvVar32 + uVar30 * 8);
          while (uVar43 != 0) {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar43 * lVar45;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar44;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar41 + iVar33) - SUB164(auVar5 * auVar17,8)) * lVar45;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar44;
            uVar47 = SUB164(auVar6 * auVar18,8);
            uVar39 = uVar31;
            if (uVar47 < uVar42) {
              *puVar40 = uVar37;
              puVar1 = (undefined8 *)((long)__s_00 + lVar35 * 8);
              uVar39 = *puVar1;
              *puVar1 = uVar31;
              uVar37 = uVar43;
              uVar42 = uVar47;
            }
            uVar42 = uVar42 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar33 + 1) * lVar45;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar44;
            lVar35 = SUB168(auVar7 * auVar19,8);
            puVar40 = (uint *)(lVar3 + lVar35 * 4);
            iVar33 = SUB164(auVar7 * auVar19,8);
            uVar31 = uVar39;
            uVar43 = *puVar40;
          }
          *(undefined8 *)((long)__s_00 + lVar35 * 8) = uVar31;
          *puVar40 = uVar37;
          param_2[0xb] = param_2[0xb] + 1;
        }
        uVar30 = uVar30 + 1;
      } while (uVar29 != uVar30);
      Memory::free_static(pvVar32,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
LAB_00108708:
    iVar33 = param_2[0xb];
    if (iVar33 != 0) {
LAB_00108b48:
      uVar29 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4);
      uVar30 = CONCAT44(0,uVar29);
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8);
      uVar43 = String::hash();
      lVar45 = *(long *)(param_2 + 4);
      uVar41 = 1;
      if (uVar43 != 0) {
        uVar41 = uVar43;
      }
      uVar47 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar41 * lVar3;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar30;
      lVar35 = SUB168(auVar12 * auVar24,8);
      uVar43 = *(uint *)(lVar45 + lVar35 * 4);
      uVar42 = SUB164(auVar12 * auVar24,8);
      if (uVar43 != 0) {
        do {
          if (uVar41 == uVar43) {
            cVar28 = String::operator==((String *)
                                        (*(long *)(*(long *)(param_2 + 2) + lVar35 * 8) + 0x10),
                                        pSVar34);
            if (cVar28 != '\0') {
              pauStack_c0 = *(undefined1 (**) [16])(*(long *)(param_2 + 2) + (ulong)uVar42 * 8);
              *(undefined4 *)(pauStack_c0[1] + 8) = *in_RCX;
              goto LAB_00108af7;
            }
            lVar45 = *(long *)(param_2 + 4);
          }
          uVar47 = uVar47 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(uVar42 + 1) * lVar3;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar30;
          lVar35 = SUB168(auVar13 * auVar25,8);
          uVar43 = *(uint *)(lVar45 + lVar35 * 4);
          uVar42 = SUB164(auVar13 * auVar25,8);
        } while ((uVar43 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar43 * lVar3, auVar26._8_8_ = 0,
                auVar26._0_8_ = uVar30, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar29 + uVar42) - SUB164(auVar14 * auVar26,8)) * lVar3,
                auVar27._8_8_ = 0, auVar27._0_8_ = uVar30, uVar47 <= SUB164(auVar15 * auVar27,8)));
      }
      iVar33 = param_2[0xb];
    }
LAB_00108717:
    if ((float)uVar37 * __LC17 < (float)(iVar33 + 1)) goto LAB_0010873d;
  }
  local_58 = 0;
  if (*(long *)pSVar34 == 0) {
    uVar46 = *in_RCX;
    local_50 = uVar46;
    pauStack_c0 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauStack_c0[1] = 0;
    *pauStack_c0 = (undefined1  [16])0x0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)pSVar34);
    lVar3 = local_58;
    uVar46 = *in_RCX;
    local_50 = uVar46;
    pauStack_c0 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauStack_c0[1] = 0;
    *(undefined8 *)*pauStack_c0 = 0;
    *(undefined8 *)(*pauStack_c0 + 8) = 0;
    if (lVar3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pauStack_c0 + 1),(CowData *)&local_58);
    }
  }
  *(undefined4 *)(pauStack_c0[1] + 8) = uVar46;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  puVar1 = *(undefined8 **)(param_2 + 8);
  if (puVar1 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(param_2 + 6) = pauStack_c0;
    *(undefined1 (**) [16])(param_2 + 8) = pauStack_c0;
  }
  else if (in_R8B == '\0') {
    *puVar1 = pauStack_c0;
    *(undefined8 **)(*pauStack_c0 + 8) = puVar1;
    *(undefined1 (**) [16])(param_2 + 8) = pauStack_c0;
  }
  else {
    lVar3 = *(long *)(param_2 + 6);
    *(undefined1 (**) [16])(lVar3 + 8) = pauStack_c0;
    *(long *)*pauStack_c0 = lVar3;
    *(undefined1 (**) [16])(param_2 + 6) = pauStack_c0;
  }
  uVar29 = String::hash();
  lVar3 = *(long *)(param_2 + 4);
  uVar37 = 1;
  if (uVar29 != 0) {
    uVar37 = uVar29;
  }
  lVar45 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8);
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4);
  uVar30 = CONCAT44(0,uVar29);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)uVar37 * lVar45;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar30;
  lVar36 = SUB168(auVar8 * auVar20,8);
  lVar35 = *(long *)(param_2 + 2);
  puVar40 = (uint *)(lVar3 + lVar36 * 4);
  iVar33 = SUB164(auVar8 * auVar20,8);
  uVar41 = *puVar40;
  pauVar49 = pauStack_c0;
  if (uVar41 != 0) {
    uVar43 = 0;
    pauVar48 = pauStack_c0;
    do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar41 * lVar45;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar30;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)((uVar29 + iVar33) - SUB164(auVar9 * auVar21,8)) * lVar45;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar30;
      uVar42 = SUB164(auVar10 * auVar22,8);
      pauVar49 = pauVar48;
      if (uVar42 < uVar43) {
        *puVar40 = uVar37;
        puVar1 = (undefined8 *)(lVar35 + lVar36 * 8);
        pauVar49 = (undefined1 (*) [16])*puVar1;
        *puVar1 = pauVar48;
        uVar43 = uVar42;
        uVar37 = uVar41;
      }
      uVar43 = uVar43 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)(iVar33 + 1) * lVar45;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar30;
      lVar36 = SUB168(auVar11 * auVar23,8);
      puVar40 = (uint *)(lVar3 + lVar36 * 4);
      iVar33 = SUB164(auVar11 * auVar23,8);
      uVar41 = *puVar40;
      pauVar48 = pauVar49;
    } while (uVar41 != 0);
  }
  *(undefined1 (**) [16])(lVar35 + lVar36 * 8) = pauVar49;
  *puVar40 = uVar37;
  param_2[0xb] = param_2[0xb] + 1;
LAB_00108af7:
  *(undefined1 (**) [16])param_1 = pauStack_c0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Ref<RegEx>, String const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRS<Ref<RegEx>,String_const&>::validated_call
          (MethodBindTRS<Ref<RegEx>,String_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  Object *local_30;
  undefined8 local_28;
  Object *local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(this + 0x58))(&local_30,*param_2 + 8,param_2,0);
  if (local_30 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_28 = *(undefined8 *)(local_30 + 0x60);
    local_20 = local_30;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_30 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_30);
      if (cVar1 != '\0') {
        if (*(code **)(*(long *)local_30 + 0x140) == RegEx::~RegEx) {
          *(undefined ***)local_30 = &PTR__initialize_classv_00113f60;
          if (*(long *)(local_30 + 0x188) != 0) {
            pcre2_code_free_32();
          }
          pcre2_general_context_free_32(*(undefined8 *)(local_30 + 0x180));
          CowData<char32_t>::_unref((CowData<char32_t> *)(local_30 + 400));
          *(undefined ***)local_30 = &PTR__initialize_classv_00113ca0;
          Object::~Object(local_30);
        }
        else {
          (**(code **)(*(long *)local_30 + 0x140))(local_30);
        }
        Memory::free_static(local_30,false);
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Ref<RegEx>, String const&, bool>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRS<Ref<RegEx>,String_const&,bool>::validated_call
          (MethodBindTRS<Ref<RegEx>,String_const&,bool> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  Object *local_30;
  undefined8 local_28;
  Object *local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(this + 0x58))(&local_30,*param_2 + 8,param_2[1][8]);
  if (local_30 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_28 = *(undefined8 *)(local_30 + 0x60);
    local_20 = local_30;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_30 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_30);
      if (cVar1 != '\0') {
        if (*(code **)(*(long *)local_30 + 0x140) == RegEx::~RegEx) {
          *(undefined ***)local_30 = &PTR__initialize_classv_00113f60;
          if (*(long *)(local_30 + 0x188) != 0) {
            pcre2_code_free_32();
          }
          pcre2_general_context_free_32(*(undefined8 *)(local_30 + 0x180));
          CowData<char32_t>::_unref((CowData<char32_t> *)(local_30 + 400));
          *(undefined ***)local_30 = &PTR__initialize_classv_00113ca0;
          Object::~Object(local_30);
        }
        else {
          (**(code **)(*(long *)local_30 + 0x140))(local_30);
        }
        Memory::free_static(local_30,false);
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_realloc(long) */

undefined8 __thiscall CowData<char32_t>::_realloc(CowData<char32_t> *this,long param_1)

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



/* MethodBind* create_method_bind<RegEx, Error, String const&>(Error (RegEx::*)(String const&)) */

MethodBind * create_method_bind<RegEx,Error,String_const&>(_func_Error_String_ptr *param_1)

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
  *(_func_Error_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114120;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "RegEx";
  local_30 = 5;
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



/* MethodBind* create_method_bind<RegExMatch, String>(String (RegExMatch::*)() const) */

MethodBind * create_method_bind<RegExMatch,String>(_func_String *param_1)

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
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114180;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RegExMatch";
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



/* MethodBind* create_method_bind<RegExMatch, int>(int (RegExMatch::*)() const) */

MethodBind * create_method_bind<RegExMatch,int>(_func_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001141e0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RegExMatch";
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



/* MethodBind* create_method_bind<RegExMatch, Dictionary>(Dictionary (RegExMatch::*)() const) */

MethodBind * create_method_bind<RegExMatch,Dictionary>(_func_Dictionary *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00114240;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RegExMatch";
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



/* MethodBind* create_method_bind<RegExMatch, Vector<String>>(Vector<String> (RegExMatch::*)()
   const) */

MethodBind * create_method_bind<RegExMatch,Vector<String>>(_func_Vector *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001142a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RegExMatch";
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



/* MethodBind* create_method_bind<RegExMatch, String, Variant const&>(String (RegExMatch::*)(Variant
   const&) const) */

MethodBind * create_method_bind<RegExMatch,String,Variant_const&>(_func_String_Variant_ptr *param_1)

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
  *(_func_String_Variant_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114300;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "RegExMatch";
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



/* MethodBind* create_method_bind<RegExMatch, int, Variant const&>(int (RegExMatch::*)(Variant
   const&) const) */

MethodBind * create_method_bind<RegExMatch,int,Variant_const&>(_func_int_Variant_ptr *param_1)

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
  *(_func_int_Variant_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114360;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "RegExMatch";
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



/* RegExMatch::_initialize_classv() */

void RegExMatch::_initialize_classv(void)

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
    local_48 = "RegExMatch";
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



/* MethodBind* create_method_bind<RegEx>(void (RegEx::*)()) */

MethodBind * create_method_bind<RegEx>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00114420;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RegEx";
  local_30 = 5;
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



/* MethodBind* create_method_bind<RegEx, Error, String const&, bool>(Error (RegEx::*)(String const&,
   bool)) */

MethodBind *
create_method_bind<RegEx,Error,String_const&,bool>(_func_Error_String_ptr_bool *param_1)

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
  *(_func_Error_String_ptr_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114480;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "RegEx";
  local_30 = 5;
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



/* MethodBind* create_method_bind<RegEx, Ref<RegExMatch>, String const&, int, int>(Ref<RegExMatch>
   (RegEx::*)(String const&, int, int) const) */

MethodBind *
create_method_bind<RegEx,Ref<RegExMatch>,String_const&,int,int>
          (_func_Ref_String_ptr_int_int *param_1)

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
  *(_func_Ref_String_ptr_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001144e0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "RegEx";
  local_30 = 5;
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



/* MethodBind* create_method_bind<RegEx, TypedArray<RegExMatch>, String const&, int,
   int>(TypedArray<RegExMatch> (RegEx::*)(String const&, int, int) const) */

MethodBind *
create_method_bind<RegEx,TypedArray<RegExMatch>,String_const&,int,int>
          (_func_TypedArray_String_ptr_int_int *param_1)

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
  *(_func_TypedArray_String_ptr_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114540;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "RegEx";
  local_30 = 5;
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



/* MethodBind* create_method_bind<RegEx, String, String const&, String const&, bool, int,
   int>(String (RegEx::*)(String const&, String const&, bool, int, int) const) */

MethodBind *
create_method_bind<RegEx,String,String_const&,String_const&,bool,int,int>
          (_func_String_String_ptr_String_ptr_bool_int_int *param_1)

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
  *(_func_String_String_ptr_String_ptr_bool_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001145a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 5;
  local_40 = 0;
  local_38 = "RegEx";
  local_30 = 5;
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



/* MethodBind* create_method_bind<RegEx, bool>(bool (RegEx::*)() const) */

MethodBind * create_method_bind<RegEx,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00114600;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RegEx";
  local_30 = 5;
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



/* MethodBind* create_method_bind<RegEx, String>(String (RegEx::*)() const) */

MethodBind * create_method_bind<RegEx,String>(_func_String *param_1)

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
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114180;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RegEx";
  local_30 = 5;
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



/* MethodBind* create_method_bind<RegEx, int>(int (RegEx::*)() const) */

MethodBind * create_method_bind<RegEx,int>(_func_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001141e0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RegEx";
  local_30 = 5;
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



/* MethodBind* create_method_bind<RegEx, Vector<String>>(Vector<String> (RegEx::*)() const) */

MethodBind * create_method_bind<RegEx,Vector<String>>(_func_Vector *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001142a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RegEx";
  local_30 = 5;
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



/* RegEx::_initialize_classv() */

void RegEx::_initialize_classv(void)

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
    local_48 = "RegEx";
    local_60 = 0;
    local_40 = 5;
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
    _bind_compatibility_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* GetTypeInfo<Error, void>::get_class_info() */

GetTypeInfo<Error,void> * __thiscall
GetTypeInfo<Error,void>::get_class_info(GetTypeInfo<Error,void> *this)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  undefined8 local_60;
  char local_58 [8];
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_48 = "Error";
  local_40 = 5;
  String::parse_latin1((StrRange *)&local_70);
  String::split(local_58,SUB81((StrRange *)&local_70,0),0x10a9a0);
  if ((local_50 != 0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_40 = 1;
    local_48 = ".";
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == 0) {
      lVar3 = -2;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(local_50 + -8);
      lVar3 = lVar4 + -2;
      if (-1 < lVar3) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar3 * 8));
        String::operator+((String *)&local_68,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_0010aa83;
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
  local_48 = ".";
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0010aa83:
  CowData<String>::_unref((CowData<String> *)&local_50);
  StringName::StringName((StringName *)&local_48,(String *)&local_68,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar4 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  lVar4 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_0010af30:
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
  if (lVar10 == 0) goto LAB_0010af30;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_0010ae09:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_0010ae09;
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
    goto LAB_0010af86;
  }
  if (lVar10 == lVar7) {
LAB_0010aeaf:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_0010af86:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010ae9a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010aeaf;
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
LAB_0010ae9a:
  puVar9[-1] = param_1;
  return 0;
}



/* void memdelete<RegEx>(RegEx*) */

void memdelete<RegEx>(RegEx *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  cVar3 = predelete_handler((Object *)param_1);
  if (cVar3 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == RegEx::~RegEx) {
    *(undefined ***)param_1 = &PTR__initialize_classv_00113f60;
    if (*(long *)(param_1 + 0x188) != 0) {
      pcre2_code_free_32();
    }
    pcre2_general_context_free_32(*(undefined8 *)(param_1 + 0x180));
    if (*(long *)(param_1 + 400) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_1 + 400) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_1 + 400);
        *(undefined8 *)(param_1 + 400) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined ***)param_1 = &PTR__initialize_classv_00113ca0;
    Object::~Object((Object *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* MethodBindTRS<Ref<RegEx>, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRS<Ref<RegEx>,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar8;
  long in_FS_OFFSET;
  Object *local_58;
  Variant local_50 [8];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  pVVar1 = param_2[0xb];
  *(undefined4 *)param_1 = 0;
  if (in_R8D < 2) {
    pVVar8 = param_2[5];
    if (pVVar8 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010b208;
LAB_0010b180:
      pVVar8 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar8 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010b208:
        uVar6 = 4;
        goto LAB_0010b195;
      }
      if (in_R8D == 1) goto LAB_0010b180;
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
      pVVar8 = pVVar8 + lVar7 * 0x18;
    }
    *in_R9 = 0;
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar8,4);
    uVar4 = _LC68;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String(local_50);
    (*(code *)pVVar1)(&local_58,local_50);
    Variant::Variant((Variant *)local_48,local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
    if ((local_58 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
      memdelete<RegEx>((RegEx *)local_58);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  }
  else {
    uVar6 = 3;
LAB_0010b195:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRS<Ref<RegEx>, String const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRS<Ref<RegEx>,String_const&>::ptrcall
          (MethodBindTRS<Ref<RegEx>,String_const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  Object *pOVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  RegEx *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(this + 0x58))(&local_28,*param_2,param_2,0);
  if (local_28 == (RegEx *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar3 = *param_3;
    if (pOVar3 == (Object *)0x0) goto LAB_0010b2b1;
    *(undefined8 *)param_3 = 0;
    goto LAB_0010b2ff;
  }
  pOVar2 = (Object *)__dynamic_cast(local_28,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar3 = *param_3;
  if (pOVar3 != pOVar2) {
    *(Object **)param_3 = pOVar2;
    if (pOVar2 == (Object *)0x0) {
      if (pOVar3 != (Object *)0x0) goto LAB_0010b2ff;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar3 != (Object *)0x0) {
LAB_0010b2ff:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar3);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
      if (local_28 == (RegEx *)0x0) goto LAB_0010b2b1;
    }
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 != '\0') {
    memdelete<RegEx>(local_28);
  }
LAB_0010b2b1:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Ref<RegEx>, String const&, bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRS<Ref<RegEx>,String_const&,bool>::ptrcall
          (MethodBindTRS<Ref<RegEx>,String_const&,bool> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  Object *pOVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  RegEx *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
                    /* WARNING: Load size is inaccurate */
  (**(code **)(this + 0x58))(&local_28,*param_2,*param_2[1] != '\0');
  if (local_28 == (RegEx *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar3 = *param_3;
    if (pOVar3 == (Object *)0x0) goto LAB_0010b3d0;
    *(undefined8 *)param_3 = 0;
    goto LAB_0010b41f;
  }
  pOVar2 = (Object *)__dynamic_cast(local_28,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar3 = *param_3;
  if (pOVar3 != pOVar2) {
    *(Object **)param_3 = pOVar2;
    if (pOVar2 == (Object *)0x0) {
      if (pOVar3 != (Object *)0x0) goto LAB_0010b41f;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar3 != (Object *)0x0) {
LAB_0010b41f:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar3);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
      if (local_28 == (RegEx *)0x0) goto LAB_0010b3d0;
    }
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 != '\0') {
    memdelete<RegEx>(local_28);
  }
LAB_0010b3d0:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Ref<RegEx>, String const&, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRS<Ref<RegEx>,String_const&,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  long lVar8;
  int iVar9;
  uint in_R8D;
  undefined4 *in_R9;
  int iVar10;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  Object *local_58;
  Variant local_50 [8];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  pVVar1 = param_2[0xb];
  *(undefined4 *)param_1 = 0;
  if (in_R8D < 3) {
    pVVar12 = param_2[5];
    iVar9 = 2 - in_R8D;
    if (pVVar12 == (Variant *)0x0) {
      if (iVar9 != 0) goto LAB_0010b5e0;
      pVVar11 = *(Variant **)param_4;
LAB_0010b62d:
      pVVar12 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      iVar10 = (int)lVar2;
      if (iVar10 < iVar9) {
LAB_0010b5e0:
        uVar7 = 4;
        goto LAB_0010b5e5;
      }
      if (in_R8D == 0) {
        lVar8 = (long)(iVar10 + -2);
        if (lVar2 <= lVar8) goto LAB_0010b658;
        pVVar11 = pVVar12 + lVar8 * 0x18;
      }
      else {
        pVVar11 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0010b62d;
      }
      lVar8 = (long)(int)((iVar10 - iVar9) + (in_R8D ^ 1));
      if (lVar2 <= lVar8) {
LAB_0010b658:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar12 = pVVar12 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,1);
    uVar4 = _LC70;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    bVar6 = Variant::operator_cast_to_bool(pVVar12);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,4);
    uVar4 = _LC68;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String(local_50);
    (*(code *)pVVar1)(&local_58,local_50,bVar6);
    Variant::Variant((Variant *)local_48,local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
    if (local_58 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
        memdelete<RegEx>((RegEx *)local_58);
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  }
  else {
    uVar7 = 3;
LAB_0010b5e5:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<RegExMatch::Range>::_realloc(long) */

undefined8 __thiscall
CowData<RegExMatch::Range>::_realloc(CowData<RegExMatch::Range> *this,long param_1)

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



/* WARNING: Removing unreachable block (ram,0x0010b8b8) */
/* WARNING: Removing unreachable block (ram,0x0010ba4d) */
/* WARNING: Removing unreachable block (ram,0x0010ba59) */
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



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  bool bVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010bc50;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      bVar2 = (bool)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,bVar2);
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
LAB_0010bc50:
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
      goto LAB_0010bef2;
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
LAB_0010bef2:
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
      goto LAB_0010c0b1;
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
LAB_0010c0b1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, String const&, String const&, bool, int, int>::validated_call(Object*,
   Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String,String_const&,String_const&,bool,int,int>::validated_call
          (MethodBindTRC<String,String_const&,String_const&,bool,int,int> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

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
      goto LAB_0010c2ec;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1] + 8,
            param_2[2][8],*(undefined8 *)(param_2[3] + 8));
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
LAB_0010c2ec:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, String const&, String const&, bool, int, int>::ptrcall(Object*, void
   const**, void*) const */

void __thiscall
MethodBindTRC<String,String_const&,String_const&,bool,int,int>::ptrcall
          (MethodBindTRC<String,String_const&,String_const&,bool,int,int> *this,Object *param_1,
          void **param_2,void *param_3)

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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c50f;
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
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2,param_2[1],
            *param_2[2] != '\0',*param_2[3]);
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
LAB_0010c50f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, bool>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Error,String_const&,bool>::validated_call
          (MethodBindTR<Error,String_const&,bool> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c6e5;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1][8]);
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0010c6e5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,String_const&,bool>::ptrcall
          (MethodBindTR<Error,String_const&,bool> *this,Object *param_1,void **param_2,void *param_3
          )

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
      goto LAB_0010c8c5;
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
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2,*param_2[1] != '\0');
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0010c8c5:
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
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
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
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010cb70;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)();
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
LAB_0010cb70:
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
      goto LAB_0010ceef;
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
                    /* WARNING: Could not recover jumptable at 0x0010cd96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010ceef:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_0010d0af;
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
                    /* WARNING: Could not recover jumptable at 0x0010cf56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010d0af:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, Variant const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int,Variant_const&>::validated_call
          (MethodBindTRC<int,Variant_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010d108;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2);
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_0010d108:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, Variant const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int,Variant_const&>::ptrcall
          (MethodBindTRC<int,Variant_const&> *this,Object *param_1,void **param_2,void *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010d2e8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2);
  *(long *)param_3 = (long)iVar1;
LAB_0010d2e8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, Variant const&>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<String,Variant_const&>::validated_call
          (MethodBindTRC<String,Variant_const&> *this,Object *param_1,Variant **param_2,
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d516;
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
LAB_0010d516:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, Variant const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String,Variant_const&>::ptrcall
          (MethodBindTRC<String,Variant_const&> *this,Object *param_1,void **param_2,void *param_3)

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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d731;
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
LAB_0010d731:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector<String>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d980;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)(&local_58);
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
LAB_0010d980:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector<String>>::validated_call
          (MethodBindTRC<Vector<String>> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x10baa8;
      local_40[0] = 0x35;
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
      goto LAB_0010dbc7;
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
LAB_0010dbc7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector<String>>::ptrcall
          (MethodBindTRC<Vector<String>> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (void **)0x10baa8;
      local_40[0] = 0x35;
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
      goto LAB_0010dda3;
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
LAB_0010dda3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Dictionary>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010dfd0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)((Dictionary *)&local_58);
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
LAB_0010dfd0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Dictionary>::validated_call
          (MethodBindTRC<Dictionary> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x10baa8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e1f9;
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
LAB_0010e1f9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Dictionary>::ptrcall
          (MethodBindTRC<Dictionary> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (void **)0x10baa8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e3ca;
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
LAB_0010e3ca:
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
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e600;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
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
LAB_0010e600:
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
      goto LAB_0010e814;
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
LAB_0010e814:
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
      goto LAB_0010e9c3;
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
LAB_0010e9c3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ec00;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)((CowData<char32_t> *)&local_58);
      Variant::Variant((Variant *)local_48,(String *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
LAB_0010ec00:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String>::validated_call
          (MethodBindTRC<String> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant **ppVVar1;
  Variant **ppVVar2;
  code *pcVar3;
  long *plVar4;
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
      local_48 = (Variant **)0x10baa8;
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
      goto LAB_0010ee61;
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
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  ppVVar2 = local_48;
  if (local_48 != (Variant **)0x0) {
    LOCK();
    ppVVar1 = local_48 + -2;
    *ppVVar1 = *ppVVar1 + -1;
    UNLOCK();
    if (*ppVVar1 == (Variant *)0x0) {
      local_48 = (Variant **)0x0;
      Memory::free_static(ppVVar2 + -2,false);
    }
  }
LAB_0010ee61:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String>::ptrcall
          (MethodBindTRC<String> *this,Object *param_1,void **param_2,void *param_3)

{
  void **ppvVar1;
  void **ppvVar2;
  code *pcVar3;
  long *plVar4;
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
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x10baa8;
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
      goto LAB_0010f04e;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  ppvVar2 = local_48;
  if (local_48 != (void **)0x0) {
    LOCK();
    ppvVar1 = local_48 + -2;
    *ppvVar1 = (void *)((long)*ppvVar1 + -1);
    UNLOCK();
    if (*ppvVar1 == (void *)0x0) {
      local_48 = (void **)0x0;
      Memory::free_static(ppvVar2 + -2,false);
    }
  }
LAB_0010f04e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Error,String_const&>::validated_call
          (MethodBindTR<Error,String_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f1fc;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2 + 8);
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0010f1fc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,String_const&>::ptrcall
          (MethodBindTR<Error,String_const&> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010f3d8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2);
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0010f3d8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<RegExMatch>, String const&, int, int>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTRC<TypedArray<RegExMatch>,String_const&,int,int>::validated_call
          (MethodBindTRC<TypedArray<RegExMatch>,String_const&,int,int> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
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
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f5e0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8,
            *(undefined4 *)(param_2[1] + 8),*(undefined4 *)(param_2[2] + 8));
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0010f5e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<RegExMatch>, String const&, int, int>::ptrcall(Object*, void const**,
   void*) const */

void __thiscall
MethodBindTRC<TypedArray<RegExMatch>,String_const&,int,int>::ptrcall
          (MethodBindTRC<TypedArray<RegExMatch>,String_const&,int,int> *this,Object *param_1,
          void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
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
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f7d8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),*param_2,*param_2[1],*param_2[2]);
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0010f7d8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<RegExMatch>, String const&, int, int>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTRC<Ref<RegExMatch>,String_const&,int,int>::ptrcall
          (MethodBindTRC<Ref<RegExMatch>,String_const&,int,int> *this,Object *param_1,void **param_2
          ,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
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
      local_48 = (Object *)0x10baa8;
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010fa36;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2,*param_2[1],
            *param_2[2]);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_0010fa36;
    *(undefined8 *)param_3 = 0;
    goto LAB_0010fa79;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_0010fa79;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_0010fa79:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0010fa36;
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
LAB_0010fa36:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTR<Error,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010fda0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010fdf0;
LAB_0010fde0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010fdf0:
        uVar7 = 4;
        goto LAB_0010fd95;
      }
      if (in_R8D == 1) goto LAB_0010fde0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,4);
    uVar4 = _LC68;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    iVar6 = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_68);
    Variant::Variant((Variant *)local_58,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_0010fd95:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010fda0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Error, String const&, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Error,String_const&,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *pVVar12;
  int iVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_68 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011018b;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar15 = param_2[5];
    iVar7 = 2 - in_R8D;
    if (pVVar15 == (Variant *)0x0) {
      if (iVar7 != 0) goto LAB_001101d0;
      pVVar12 = *(Variant **)param_4;
LAB_001101ed:
      pVVar15 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar15 + -8);
      iVar13 = (int)lVar2;
      if (iVar13 < iVar7) {
LAB_001101d0:
        uVar8 = 4;
        goto LAB_001101bd;
      }
      if (in_R8D == 0) {
        lVar10 = (long)(iVar13 + -2);
        if (lVar2 <= lVar10) goto LAB_001102c0;
        pVVar12 = pVVar15 + lVar10 * 0x18;
      }
      else {
        pVVar12 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_001101ed;
      }
      lVar10 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar7));
      if (lVar2 <= lVar10) {
LAB_001102c0:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar15 = pVVar15 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar15,1);
    uVar4 = _LC70;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    bVar6 = Variant::operator_cast_to_bool(pVVar15);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,4);
    uVar4 = _LC68;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    iVar7 = (*(code *)pVVar14)((Variant *)((long)plVar11 + (long)pVVar1),(Variant *)&local_68,bVar6)
    ;
    Variant::Variant((Variant *)local_58,iVar7);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar8 = 3;
LAB_001101bd:
    *in_R9 = uVar8;
    in_R9[2] = 2;
  }
LAB_0011018b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<RegExMatch>, String const&, int, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Ref<RegExMatch>,String_const&,int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *pVVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
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
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar11 = (long *)plVar13[0x23];
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar11 = (long *)(plVar13[1] + 0x20);
    }
    if (local_88 == (char *)*plVar11) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = (Object *)0x0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_00110610;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar7 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar8 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar8 = (int)lVar15;
    }
    if ((int)(3 - in_R8D) <= iVar8) {
      lVar10 = 0;
      do {
        if ((int)lVar10 < (int)in_R8D) {
          pVVar14 = *(Variant **)(param_4 + lVar10 * 8);
        }
        else {
          uVar12 = iVar8 + -3 + (int)lVar10;
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
        local_78[lVar10] = pVVar14;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_78[2],2);
      uVar4 = _LC92;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar8 = Variant::operator_cast_to_int(local_78[2]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_78[1],2);
      uVar4 = _LC93;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar9 = Variant::operator_cast_to_int(local_78[1]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_78[0],4);
      uVar4 = _LC68;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_88);
      (*(code *)pVVar16)(&local_90,(Variant *)((long)plVar13 + (long)pVVar1),(Variant *)&local_88,
                         iVar9,iVar8);
      Variant::Variant((Variant *)local_58,local_90);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      if (local_90 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_90;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_90);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      goto LAB_00110610;
    }
    uVar7 = 4;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_00110610:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<RegExMatch>, String const&, int, int>::call(Object*, Variant const**,
   int, Callable::CallError&) const */

Object * MethodBindTRC<TypedArray<RegExMatch>,String_const&,int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  long lVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  Variant *local_78 [4];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_88 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_00110a70;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar6 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar7 = 0;
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(pVVar2 + -8);
      iVar7 = (int)lVar14;
    }
    if ((int)(3 - in_R8D) <= iVar7) {
      lVar9 = 0;
      do {
        if ((int)lVar9 < (int)in_R8D) {
          pVVar13 = *(Variant **)(param_4 + lVar9 * 8);
        }
        else {
          uVar11 = iVar7 + -3 + (int)lVar9;
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
        local_78[lVar9] = pVVar13;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar15 & 1) != 0) {
        pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[2],2);
      uVar4 = _LC92;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar7 = Variant::operator_cast_to_int(local_78[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[1],2);
      uVar4 = _LC93;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar8 = Variant::operator_cast_to_int(local_78[1]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[0],4);
      uVar4 = _LC68;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_88);
      (*(code *)pVVar15)((Array *)&local_90,(Variant *)((long)plVar12 + (long)pVVar1),
                         (Variant *)&local_88,iVar8,iVar7);
      Variant::Variant((Variant *)local_58,(Array *)&local_90);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      Array::~Array((Array *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      goto LAB_00110a70;
    }
    uVar6 = 4;
  }
  *in_R9 = uVar6;
  in_R9[2] = 3;
LAB_00110a70:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, String const&, String const&, bool, int, int>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String,String_const&,String_const&,bool,int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  undefined4 in_register_00000014;
  long *plVar14;
  Variant *pVVar15;
  Variant *pVVar16;
  long lVar17;
  uint in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  Variant *local_68 [5];
  long local_40;
  
  plVar14 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar14 != (long *)0x0) && (plVar14[1] != 0)) && (*(char *)(plVar14[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar14[1] == 0) {
      plVar12 = (long *)plVar14[0x23];
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)(**(code **)(*plVar14 + 0x40))();
      }
    }
    else {
      plVar12 = (long *)(plVar14[1] + 0x20);
    }
    if (local_98 == (char *)*plVar12) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_a0 = 0;
      local_90 = 0x35;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a0,&local_a8);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_98,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      goto LAB_00110fb0;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 6) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar8 = 0;
      lVar17 = 0;
    }
    else {
      lVar17 = *(long *)(pVVar2 + -8);
      iVar8 = (int)lVar17;
    }
    if ((int)(5 - in_R8D) <= iVar8) {
      lVar11 = 0;
      do {
        if ((int)lVar11 < (int)in_R8D) {
          pVVar15 = *(Variant **)(param_4 + lVar11 * 8);
        }
        else {
          uVar13 = iVar8 + -5 + (int)lVar11;
          if (lVar17 <= (int)uVar13) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar13,lVar17,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar15 = pVVar2 + (ulong)uVar13 * 0x18;
        }
        local_68[lVar11] = pVVar15;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 5);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar14 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[4],2);
      uVar4 = _LC94;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar8 = Variant::operator_cast_to_int(local_68[4]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[3],2);
      uVar4 = _LC95;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar9 = Variant::operator_cast_to_int(local_68[3]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[2],1);
      uVar4 = _LC96;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar7 = Variant::operator_cast_to_bool(local_68[2]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[1],4);
      uVar4 = _LC97;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_a0);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[0],4);
      uVar4 = _LC68;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_98);
      (*(code *)pVVar16)((String *)&local_a8,(Variant *)((long)plVar14 + (long)pVVar1),
                         (Variant *)&local_98,(Variant *)&local_a0,bVar7,iVar9,iVar8);
      Variant::Variant((Variant *)local_88,(String *)&local_a8);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      lVar17 = local_a8;
      *(undefined4 *)param_1 = local_88[0];
      *(undefined8 *)(param_1 + 8) = local_80;
      *(undefined8 *)(param_1 + 0x10) = uStack_78;
      if (local_a8 != 0) {
        LOCK();
        plVar14 = (long *)(local_a8 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          local_a8 = 0;
          Memory::free_static((void *)(lVar17 + -0x10),false);
        }
      }
      pcVar5 = local_98;
      if (local_98 != (char *)0x0) {
        LOCK();
        plVar14 = (long *)(local_98 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          local_98 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar17 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar14 = (long *)(local_a0 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar17 + -0x10),false);
        }
      }
      goto LAB_00110fb0;
    }
    uVar10 = 4;
  }
  else {
    uVar10 = 3;
  }
  *in_R9 = uVar10;
  in_R9[2] = 5;
LAB_00110fb0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, Variant const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<String,Variant_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  undefined4 in_register_00000014;
  long *plVar8;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar9;
  Variant *pVVar10;
  long in_FS_OFFSET;
  long local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [6];
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar8 != (long *)0x0) && (plVar8[1] != 0)) && (*(char *)(plVar8[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar8[1] == 0) {
      plVar6 = (long *)plVar8[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar8 + 0x40))(plVar8);
      }
    }
    else {
      plVar6 = (long *)(plVar8[1] + 0x20);
    }
    if (local_88 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_00111310;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar10 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar9 = param_2[5];
    if (pVVar9 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00111360;
LAB_00111350:
      pVVar9 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar9 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00111360:
        uVar5 = 4;
        goto LAB_00111305;
      }
      if (in_R8D == 1) goto LAB_00111350;
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
      pVVar9 = pVVar9 + lVar7 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar10 & 1) != 0) {
      pVVar10 = *(Variant **)(pVVar10 + *(long *)((long)plVar8 + (long)pVVar1) + -1);
    }
    cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar9,0);
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = 0;
    }
    Variant::Variant((Variant *)local_58,pVVar9);
    (*(code *)pVVar10)((CowData<char32_t> *)&local_88,(Variant *)((long)plVar8 + (long)pVVar1),
                       (Variant *)local_58);
    Variant::Variant((Variant *)local_78,(String *)&local_88);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_78[0];
    *(undefined8 *)(param_1 + 8) = local_70;
    *(undefined8 *)(param_1 + 0x10) = uStack_68;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    uVar5 = 3;
LAB_00111305:
    *in_R9 = uVar5;
    in_R9[2] = 1;
  }
LAB_00111310:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<int, Variant const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<int,Variant_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
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
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  int local_48 [6];
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_78 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_001116a0;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001116e0;
LAB_001116d0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001116e0:
        uVar6 = 4;
        goto LAB_00111695;
      }
      if (in_R8D == 1) goto LAB_001116d0;
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
    cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0);
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = 0;
    }
    Variant::Variant((Variant *)local_48,pVVar10);
    iVar5 = (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)local_48);
    Variant::Variant((Variant *)local_68,iVar5);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_68[0];
    *(undefined8 *)(param_1 + 8) = local_60;
    *(undefined8 *)(param_1 + 0x10) = uStack_58;
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    uVar6 = 3;
LAB_00111695:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_001116a0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<RegExMatch>, String const&, int, int>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<Ref<RegExMatch>,String_const&,int,int>::validated_call
          (MethodBindTRC<Ref<RegExMatch>,String_const&,int,int> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
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
      goto LAB_0011196c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*param_2 + 8,*(undefined4 *)(param_2[1] + 8),
            *(undefined4 *)(param_2[2] + 8));
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
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
LAB_0011196c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
  if (iVar5 != param_1) goto LAB_00111b67;
  local_78 = 0;
  local_68 = &_LC11;
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
LAB_00111c65:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00111c65;
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
LAB_00111b67:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRS<Ref<RegEx>, String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRS<Ref<RegEx>,String_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<String_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00111e38;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = "RegEx";
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 5;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00111f37:
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_00111f37;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00111e38:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&>::_gen_argument_type_info(int) const */

GetTypeInfo<Error,void> * MethodBindTR<Error,String_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Error,void> *this;
  long in_FS_OFFSET;
  int local_4c;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  long local_10;
  
  this = (GetTypeInfo<Error,void> *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_48 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 6;
    local_4c = 0;
    local_40 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<String_const&>(0,&local_4c,(PropertyInfo *)&local_48);
    *(undefined4 *)this = (undefined4)local_48;
    *(undefined8 *)(this + 8) = local_40._0_8_;
    *(undefined8 *)(this + 0x10) = local_40._8_8_;
    *(undefined4 *)(this + 0x18) = (undefined4)local_30;
    *(undefined8 *)(this + 0x20) = local_28;
    *(undefined4 *)(this + 0x28) = local_20;
  }
  else {
    GetTypeInfo<Error,void>::get_class_info(this);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, bool>::_gen_argument_type_info(int) const */

GetTypeInfo<Error,void> *
MethodBindTR<Error,String_const&,bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  uint in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Error,void> *this;
  long in_FS_OFFSET;
  uint local_bc;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
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
  
  this = (GetTypeInfo<Error,void> *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (1 < in_EDX) {
    GetTypeInfo<Error,void>::get_class_info(this);
    goto LAB_00112083;
  }
  local_98 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 6;
  local_bc = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  call_get_argument_type_info_helper<String_const&>
            (in_EDX,(int *)&local_bc,(PropertyInfo *)&local_98);
  if (in_EDX == local_bc) {
    local_a8 = 0;
    local_b0 = 0;
    local_68 = &_LC11;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    String::parse_latin1((StrRange *)&local_b0);
    local_b8 = 0;
    local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
    local_50 = 0;
    local_48 = 0;
    local_60 = (undefined1  [16])0x0;
    if (local_b0 == 0) {
LAB_0011221b:
      local_40 = 6;
      StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_a8);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_b0);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0011221b;
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
  }
  uVar5 = local_90._8_8_;
  uVar4 = local_90._0_8_;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_90._8_8_;
  local_90 = auVar1 << 0x40;
  *(undefined4 *)this = (undefined4)local_98;
  *(undefined8 *)(this + 8) = uVar4;
  *(undefined8 *)(this + 0x10) = uVar5;
  *(undefined4 *)(this + 0x18) = (undefined4)local_80;
  *(long *)(this + 0x20) = local_78;
  *(undefined4 *)(this + 0x28) = local_70;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
LAB_00112083:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* MethodBindTRS<Ref<RegEx>, String const&, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRS<Ref<RegEx>,String_const&,bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  uint local_bc;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_98 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 6;
    local_bc = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    call_get_argument_type_info_helper<String_const&>
              (in_EDX,(int *)&local_bc,(PropertyInfo *)&local_98);
    if (in_EDX == local_bc) {
      local_a8 = 0;
      local_b0 = 0;
      local_68 = "";
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      String::parse_latin1((StrRange *)&local_b0);
      local_b8 = 0;
      local_68 = (char *)CONCAT44(local_68._4_4_,1);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1  [16])0x0;
      if (local_b0 == 0) {
LAB_0011263b:
        local_40 = 6;
        StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_a8);
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_b0);
        local_40 = 6;
        if (local_50 != 0x11) goto LAB_0011263b;
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
    }
    uVar5 = local_90._8_8_;
    uVar4 = local_90._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *puVar6 = (undefined4)local_98;
    *(undefined8 *)(puVar6 + 2) = uVar4;
    *(undefined8 *)(puVar6 + 4) = uVar5;
    puVar6[6] = (undefined4)local_80;
    *(long *)(puVar6 + 8) = local_78;
    puVar6[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_0011242b;
  }
  local_98 = 0;
  local_a0 = 0;
  local_68 = "RegEx";
  local_60._0_8_ = 5;
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar6 = 0x18;
  puVar6[6] = 0x11;
  *(undefined8 *)(puVar6 + 8) = 0;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar6[10] = 6;
LAB_001124f7:
    StringName::StringName((StringName *)&local_68,(String *)(puVar6 + 8),false);
    if (*(char **)(puVar6 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar6 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 8),(CowData *)&local_a0);
    puVar6[10] = 6;
    if (puVar6[6] == 0x11) goto LAB_001124f7;
    StringName::operator=((StringName *)(puVar6 + 4),(StringName *)&local_98);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_0011242b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

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
  if (iVar5 != param_1) goto LAB_00112777;
  local_78 = 0;
  local_68 = &_LC11;
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
LAB_00112875:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00112875;
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
LAB_00112777:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<TypedArray<RegExMatch>, String const&, int, int>::_gen_argument_type_info(int)
   const */

undefined4 *
MethodBindTRC<TypedArray<RegExMatch>,String_const&,int,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 3) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<String_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00112a6b;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = "RegExMatch";
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 10;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar4 = 0x1c;
  puVar4[6] = 0x1f;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00112b4f:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00112b4f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00112a6b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, String const&, String const&, bool, int, int>::_gen_argument_type_info(int)
   const */

undefined4 *
MethodBindTRC<String,String_const&,String_const&,bool,int,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar8;
  long in_FS_OFFSET;
  uint local_cc;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  long local_88;
  undefined4 local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar8 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 5) {
    local_a0._0_8_ = 0;
    local_a0._8_8_ = 0;
    local_a8 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 6;
    local_cc = 0;
    call_get_argument_type_info_helper<String_const&>
              (in_EDX,(int *)&local_cc,(PropertyInfo *)&local_a8);
    call_get_argument_type_info_helper<String_const&>
              (in_EDX,(int *)&local_cc,(PropertyInfo *)&local_a8);
    uVar5 = local_cc;
    if (in_EDX == local_cc) {
      local_b8 = 0;
      local_78 = &_LC11;
      local_c0 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_70._8_8_;
      local_70 = auVar3 << 0x40;
      String::parse_latin1((StrRange *)&local_c0);
      local_c8 = 0;
      local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
      local_60 = 0;
      local_58 = 0;
      local_70 = (undefined1  [16])0x0;
      if (local_c0 == 0) {
LAB_00112f33:
        local_50 = 6;
        StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_b8);
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_c0);
        local_50 = 6;
        if (local_60 != 0x11) goto LAB_00112f33;
        StringName::StringName((StringName *)&local_b0,(String *)&local_58,false);
        if (local_70._8_8_ == local_b0) {
          if ((StringName::configured != '\0') && (local_b0 != 0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          local_70._8_8_ = local_b0;
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      local_a8 = CONCAT44(local_a8._4_4_,local_78._0_4_);
      if (local_a0._0_8_ != local_70._0_8_) {
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
        local_a0._0_8_ = local_70._0_8_;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = local_70._8_8_;
        local_70 = auVar4 << 0x40;
      }
      if (local_a0._8_8_ != local_70._8_8_) {
        StringName::unref();
        local_a0._8_8_ = local_70._8_8_;
        local_70._8_8_ = 0;
      }
      local_90 = CONCAT44(local_90._4_4_,local_60);
      if (local_88 != local_58) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        local_88 = local_58;
        local_58 = 0;
      }
      local_80 = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    }
    local_cc = uVar5 + 1;
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_cc,(PropertyInfo *)&local_a8);
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_cc,(PropertyInfo *)&local_a8);
    uVar7 = local_a0._8_8_;
    uVar6 = local_a0._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_a0._8_8_;
    local_a0 = auVar1 << 0x40;
    *puVar8 = (undefined4)local_a8;
    *(undefined8 *)(puVar8 + 2) = uVar6;
    *(undefined8 *)(puVar8 + 4) = uVar7;
    puVar8[6] = (undefined4)local_90;
    *(long *)(puVar8 + 8) = local_88;
    puVar8[10] = local_80;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
    goto LAB_00112cbc;
  }
  local_a8 = 0;
  local_b0 = 0;
  local_78 = &_LC11;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_70._8_8_;
  local_70 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_b0);
  local_b8 = 0;
  *puVar8 = 4;
  puVar8[6] = 0;
  *(undefined8 *)(puVar8 + 8) = 0;
  *(undefined1 (*) [16])(puVar8 + 2) = (undefined1  [16])0x0;
  if (local_b0 == 0) {
    puVar8[10] = 6;
LAB_00112db7:
    StringName::operator=((StringName *)(puVar8 + 4),(StringName *)&local_a8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar8 + 8),(CowData *)&local_b0);
    puVar8[10] = 6;
    if (puVar8[6] != 0x11) goto LAB_00112db7;
    StringName::StringName((StringName *)&local_78,(String *)(puVar8 + 8),false);
    if (*(undefined **)(puVar8 + 4) == local_78) {
      if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar8 + 4) = local_78;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
LAB_00112cbc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar8;
}



/* MethodBindTRC<Ref<RegExMatch>, String const&, int, int>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<Ref<RegExMatch>,String_const&,int,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 3) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<String_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_0011312b;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = "RegExMatch";
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 10;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00113227:
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_00113227;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0011312b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Variant const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Variant_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = *param_2;
  if (iVar4 == param_1) {
    local_60 = (undefined1  [16])0x0;
    local_70 = 0;
    local_78 = 0;
    local_80 = 0;
    local_68 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x20006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = (undefined4)local_68;
    if (*(long *)(param_3 + 8) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8 *)(param_3 + 8) = uVar2;
    }
    if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(param_3 + 0x10) = uVar2;
    }
    *(undefined4 *)(param_3 + 0x18) = (undefined4)local_50;
    if (*(long *)(param_3 + 0x20) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(param_3 + 0x20) = lVar3;
    }
    *(undefined4 *)(param_3 + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    iVar4 = *param_2;
  }
  *param_2 = iVar4 + 1;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, Variant const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String,Variant_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<Variant_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68)
    ;
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_001134c8;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC11;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 4;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_001135af:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_001135af;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_001134c8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, Variant const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int,Variant_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<Variant_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68)
    ;
    *puVar2 = local_68._0_4_;
    *(undefined8 *)(puVar2 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar2 + 4) = local_60._8_8_;
    puVar2[6] = (undefined4)local_50;
    *(undefined8 *)(puVar2 + 8) = local_48;
    puVar2[10] = local_40;
    goto LAB_001136b5;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC11;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._0_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar2 = 2;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar2[10] = 6;
LAB_0011379f:
    StringName::operator=((StringName *)(puVar2 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar2 + 8),(CowData *)&local_78);
    puVar2[10] = 6;
    if (puVar2[6] != 0x11) goto LAB_0011379f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar2 + 8),false);
    if (*(undefined **)(puVar2 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar2 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_001136b5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RegExMatch::~RegExMatch() */

void __thiscall RegExMatch::~RegExMatch(RegExMatch *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

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
/* MethodBindTRC<String, String const&, String const&, bool, int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<String,String_const&,String_const&,bool,int,int>::~MethodBindTRC
          (MethodBindTRC<String,String_const&,String_const&,bool,int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<TypedArray<RegExMatch>, String const&, int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<RegExMatch>,String_const&,int,int>::~MethodBindTRC
          (MethodBindTRC<TypedArray<RegExMatch>,String_const&,int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<RegExMatch>, String const&, int, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<RegExMatch>,String_const&,int,int>::~MethodBindTRC
          (MethodBindTRC<Ref<RegExMatch>,String_const&,int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, String const&, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,bool>::~MethodBindTR(MethodBindTR<Error,String_const&,bool> *this)

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
/* MethodBindTRS<Ref<RegEx>, String const&, bool>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Ref<RegEx>,String_const&,bool>::~MethodBindTRS
          (MethodBindTRS<Ref<RegEx>,String_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int, Variant const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<int,Variant_const&>::~MethodBindTRC(MethodBindTRC<int,Variant_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String, Variant const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<String,Variant_const&>::~MethodBindTRC(MethodBindTRC<String,Variant_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Dictionary>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this)

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
/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRS<Ref<RegEx>, String const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Ref<RegEx>,String_const&>::~MethodBindTRS
          (MethodBindTRS<Ref<RegEx>,String_const&> *this)

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



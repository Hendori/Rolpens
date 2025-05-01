
/* SyntaxHighlighter::get_text_edit() const */

undefined8 __thiscall SyntaxHighlighter::get_text_edit(SyntaxHighlighter *this)

{
  return *(undefined8 *)(this + 0x260);
}



/* CodeHighlighter::get_number_color() const */

undefined1  [16] __thiscall CodeHighlighter::get_number_color(CodeHighlighter *this)

{
  return *(undefined1 (*) [16])(this + 0x340);
}



/* CodeHighlighter::get_symbol_color() const */

undefined1  [16] __thiscall CodeHighlighter::get_symbol_color(CodeHighlighter *this)

{
  return *(undefined1 (*) [16])(this + 0x330);
}



/* CodeHighlighter::get_function_color() const */

undefined1  [16] __thiscall CodeHighlighter::get_function_color(CodeHighlighter *this)

{
  return *(undefined1 (*) [16])(this + 800);
}



/* CodeHighlighter::get_member_variable_color() const */

undefined1  [16] __thiscall CodeHighlighter::get_member_variable_color(CodeHighlighter *this)

{
  return *(undefined1 (*) [16])(this + 0x310);
}



/* CodeHighlighter::get_keyword_colors() const */

void CodeHighlighter::get_keyword_colors(void)

{
  long in_RSI;
  Dictionary *in_RDI;
  
  Dictionary::Dictionary(in_RDI,(Dictionary *)(in_RSI + 0x2f0));
  return;
}



/* CodeHighlighter::get_member_keyword_colors() const */

void CodeHighlighter::get_member_keyword_colors(void)

{
  long in_RSI;
  Dictionary *in_RDI;
  
  Dictionary::Dictionary(in_RDI,(Dictionary *)(in_RSI + 0x2f8));
  return;
}



/* CodeHighlighter::has_keyword_color(String const&) const */

ulong __thiscall CodeHighlighter::has_keyword_color(CodeHighlighter *this,String *param_1)

{
  ulong uVar1;
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_38,param_1);
  uVar1 = Dictionary::has((Variant *)(this + 0x2f0));
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
    uVar1 = uVar1 & 0xff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeHighlighter::has_member_keyword_color(String const&) const */

ulong __thiscall CodeHighlighter::has_member_keyword_color(CodeHighlighter *this,String *param_1)

{
  ulong uVar1;
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_38,param_1);
  uVar1 = Dictionary::has((Variant *)(this + 0x2f8));
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
    uVar1 = uVar1 & 0xff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeHighlighter::_update_cache() */

void CodeHighlighter::_update_cache(void)

{
  long in_RDI;
  undefined8 uVar1;
  undefined8 in_XMM1_Qa;
  
  uVar1 = TextEdit::get_font_color();
  *(undefined8 *)(in_RDI + 0x300) = uVar1;
  *(undefined8 *)(in_RDI + 0x308) = in_XMM1_Qa;
  return;
}



/* CodeHighlighter::get_keyword_color(String const&) const */

undefined8 __thiscall CodeHighlighter::get_keyword_color(CodeHighlighter *this,String *param_1)

{
  char cVar1;
  Variant *this_00;
  long in_FS_OFFSET;
  undefined8 uVar2;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_48,param_1);
  cVar1 = Dictionary::has((Variant *)(this + 0x2f0));
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar1 == '\0') {
    _err_print_error("get_keyword_color","scene/resources/syntax_highlighter.cpp",0x1b7,
                     "Condition \"!keywords.has(p_keyword)\" is true. Returning: Color()",0,0);
    uVar2 = 0;
  }
  else {
    Variant::Variant((Variant *)local_48,param_1);
    this_00 = (Variant *)Dictionary::operator[]((Variant *)(this + 0x2f0));
    uVar2 = Variant::operator_cast_to_Color(this_00);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeHighlighter::get_member_keyword_color(String const&) const */

undefined8 __thiscall
CodeHighlighter::get_member_keyword_color(CodeHighlighter *this,String *param_1)

{
  char cVar1;
  Variant *this_00;
  long in_FS_OFFSET;
  undefined8 uVar2;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_48,param_1);
  cVar1 = Dictionary::has((Variant *)(this + 0x2f8));
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar1 == '\0') {
    _err_print_error("get_member_keyword_color","scene/resources/syntax_highlighter.cpp",0x1d8,
                     "Condition \"!member_keywords.has(p_member_keyword)\" is true. Returning: Color()"
                     ,0,0);
    uVar2 = 0;
  }
  else {
    Variant::Variant((Variant *)local_48,param_1);
    this_00 = (Variant *)Dictionary::operator[]((Variant *)(this + 0x2f8));
    uVar2 = Variant::operator_cast_to_Color(this_00);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeHighlighter::has_color_region(String const&) const */

undefined8 __thiscall CodeHighlighter::has_color_region(CodeHighlighter *this,String *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x2b8);
  if (lVar1 == 0) {
    return 0;
  }
  lVar3 = 0;
  while( true ) {
    if (*(long *)(lVar1 + -8) <= lVar3) {
      return 0;
    }
    uVar2 = String::operator==((String *)(lVar1 + 0x10 + lVar3 * 0x28),param_1);
    if ((char)uVar2 != '\0') break;
    lVar1 = *(long *)(this + 0x2b8);
    lVar3 = lVar3 + 1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  return uVar2;
}



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



/* CodeHighlighter::_clear_highlighting_cache() */

void __thiscall CodeHighlighter::_clear_highlighting_cache(CodeHighlighter *this)

{
  uint uVar1;
  long lVar2;
  
  if (*(long *)(this + 0x2c8) != 0) {
    if (*(int *)(this + 0x2ec) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2e8) * 4);
      if (uVar1 != 0) {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x2d0) + lVar2) != 0) {
            *(int *)(*(long *)(this + 0x2d0) + lVar2) = 0;
            Memory::free_static(*(void **)(*(long *)(this + 0x2c8) + lVar2 * 2),false);
            *(undefined8 *)(*(long *)(this + 0x2c8) + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while ((ulong)uVar1 << 2 != lVar2);
      }
      *(undefined4 *)(this + 0x2ec) = 0;
      *(undefined1 (*) [16])(this + 0x2d8) = (undefined1  [16])0x0;
    }
    return;
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



/* CodeHighlighter::get_color_regions() const */

void CodeHighlighter::get_color_regions(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  Variant *pVVar5;
  long lVar6;
  long in_RSI;
  Dictionary *in_RDI;
  long in_FS_OFFSET;
  long local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  int local_a8 [8];
  int local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  long local_50;
  undefined1 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(in_RDI);
  lVar3 = *(long *)(in_RSI + 0x2b8);
  for (lVar6 = 0; (lVar3 != 0 && (lVar6 < *(long *)(lVar3 + -8))); lVar6 = lVar6 + 1) {
    puVar2 = (undefined8 *)(lVar3 + lVar6 * 0x28);
    local_68 = *puVar2;
    uStack_60 = puVar2[1];
    local_58 = 0;
    if (puVar2[2] != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(puVar2 + 2));
    }
    local_50 = 0;
    if (puVar2[3] != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(puVar2 + 3));
    }
    local_48 = *(undefined1 *)(puVar2 + 4);
    Variant::Variant((Variant *)local_88,(Color *)&local_68);
    if ((local_50 == 0) || (*(uint *)(local_50 + -8) < 2)) {
      local_c0 = 0;
      local_b0 = 0;
      local_b8 = &_LC15;
      String::parse_latin1((StrRange *)&local_c0);
    }
    else {
      operator+((char *)&local_c0,(String *)&_LC16);
    }
    String::operator+((String *)&local_b8,(String *)&local_58);
    Variant::Variant((Variant *)local_a8,(String *)&local_b8);
    pVVar5 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
    if (pVVar5 != (Variant *)local_88) {
      if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar5 = 0;
      *(int *)pVVar5 = local_88[0];
      local_88[0] = 0;
      *(undefined8 *)(pVVar5 + 8) = local_80;
      *(undefined8 *)(pVVar5 + 0x10) = uStack_78;
    }
    if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
    }
    puVar4 = local_b8;
    if (local_b8 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_b8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b8 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
      }
    }
    lVar3 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
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
    lVar3 = local_58;
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
    lVar3 = *(long *)(in_RSI + 0x2b8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeHighlighter::set_uint_suffix_enabled(bool) */

void __thiscall CodeHighlighter::set_uint_suffix_enabled(CodeHighlighter *this,bool param_1)

{
  this[0x350] = (CodeHighlighter)param_1;
  return;
}



/* CodeHighlighter::_bind_methods() */

void CodeHighlighter::_bind_methods(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  MethodBind *pMVar4;
  uint uVar5;
  long in_FS_OFFSET;
  undefined8 local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  char *local_128;
  undefined8 local_120;
  char *local_118;
  undefined8 local_110;
  char *local_108;
  int local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  char *local_e8;
  undefined *puStack_e0;
  undefined8 local_d8;
  char *local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  Variant *local_a8;
  char *pcStack_a0;
  undefined *local_98;
  char *pcStack_90;
  undefined8 local_88;
  Variant **local_78;
  undefined1 auStack_70 [16];
  char **ppcStack_60;
  undefined1 local_58 [16];
  long local_40;
  
  puVar3 = PTR__LC41_00119dd0;
  puVar2 = PTR__LC39_00119dc8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = PTR__LC44_00119dd8;
  puStack_c0 = PTR__LC41_00119dd0;
  local_b8 = 0;
  auStack_70._8_8_ = auStack_70._0_8_;
  auStack_70._0_8_ = &puStack_c0;
  uVar5 = (uint)(Variant *)&local_78;
  local_78 = (Variant **)&local_c8;
  D_METHODP((char *)&local_118,(char ***)"add_keyword_color",uVar5);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter,String_const&,Color_const&>(add_keyword_color);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  puStack_c0 = (undefined *)0x0;
  local_c8 = "keyword";
  local_78 = (Variant **)&local_c8;
  D_METHODP((char *)&local_118,(char ***)"remove_keyword_color",uVar5);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter,String_const&>(remove_keyword_color);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  puStack_c0 = (undefined *)0x0;
  local_c8 = "keyword";
  local_78 = (Variant **)&local_c8;
  D_METHODP((char *)&local_118,(char ***)"has_keyword_color",uVar5);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter,bool,String_const&>(has_keyword_color);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  puStack_c0 = (undefined *)0x0;
  local_c8 = "keyword";
  local_78 = (Variant **)&local_c8;
  D_METHODP((char *)&local_118,(char ***)"get_keyword_color",uVar5);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter,Color,String_const&>(get_keyword_color);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  puStack_c0 = (undefined *)0x0;
  local_c8 = "keywords";
  local_78 = (Variant **)&local_c8;
  D_METHODP((char *)&local_118,(char ***)"set_keyword_colors",uVar5);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter,Dictionary>(set_keyword_colors);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)"clear_keyword_colors",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter>(clear_keyword_colors);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)"get_keyword_colors",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter,Dictionary>(get_keyword_colors);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  local_d8 = 0;
  local_e8 = "member_keyword";
  puStack_e0 = puVar3;
  auStack_70._0_8_ = &puStack_e0;
  local_78 = (Variant **)&local_e8;
  D_METHODP((char *)&local_118,(char ***)"add_member_keyword_color",uVar5);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter,String_const&,Color_const&>(add_member_keyword_color);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  local_c8 = "member_keyword";
  puStack_c0 = (undefined *)0x0;
  local_78 = (Variant **)&local_c8;
  D_METHODP((char *)&local_118,(char ***)"remove_member_keyword_color",uVar5);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter,String_const&>(remove_member_keyword_color);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  local_c8 = "member_keyword";
  puStack_c0 = (undefined *)0x0;
  local_78 = (Variant **)&local_c8;
  D_METHODP((char *)&local_118,(char ***)"has_member_keyword_color",uVar5);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter,bool,String_const&>(has_member_keyword_color);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  local_c8 = "member_keyword";
  puStack_c0 = (undefined *)0x0;
  local_78 = (Variant **)&local_c8;
  D_METHODP((char *)&local_118,(char ***)"get_member_keyword_color",uVar5);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter,Color,String_const&>(get_member_keyword_color);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  local_c8 = "member_keyword";
  puStack_c0 = (undefined *)0x0;
  local_78 = (Variant **)&local_c8;
  D_METHODP((char *)&local_118,(char ***)"set_member_keyword_colors",uVar5);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter,Dictionary_const&>(set_member_keyword_colors);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)"clear_member_keyword_colors",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter>(clear_member_keyword_colors);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)"get_member_keyword_colors",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter,Dictionary>(get_member_keyword_colors);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  local_a8 = (Variant *)puVar2;
  pcStack_a0 = "end_key";
  local_98 = puVar3;
  pcStack_90 = "line_only";
  auStack_70._8_8_ = &local_98;
  auStack_70._0_8_ = &pcStack_a0;
  local_88 = 0;
  local_78 = &local_a8;
  ppcStack_60 = &pcStack_90;
  D_METHODP((char *)&local_118,(char ***)"add_color_region",uVar5);
  Variant::Variant((Variant *)&local_78,false);
  local_58 = (undefined1  [16])0x0;
  ppcStack_60 = (char **)0x0;
  local_a8 = (Variant *)&local_78;
  pMVar4 = create_method_bind<CodeHighlighter,String_const&,String_const&,Color_const&,bool>
                     (add_color_region);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,&local_a8,1);
  if (Variant::needs_deinit[(int)ppcStack_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  pcStack_a0 = (char *)0x0;
  local_a8 = (Variant *)0x10982d;
  local_78 = &local_a8;
  D_METHODP((char *)&local_118,(char ***)"remove_color_region",uVar5);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter,String_const&>(remove_color_region);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  pcStack_a0 = (char *)0x0;
  local_a8 = (Variant *)0x10982d;
  local_78 = &local_a8;
  D_METHODP((char *)&local_118,(char ***)"has_color_region",uVar5);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter,bool,String_const&>(has_color_region);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  pcStack_a0 = (char *)0x0;
  local_a8 = (Variant *)0x1099b7;
  local_78 = &local_a8;
  D_METHODP((char *)&local_118,(char ***)"set_color_regions",uVar5);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter,Dictionary_const&>(set_color_regions);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)"clear_color_regions",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter>(clear_color_regions);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)"get_color_regions",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter,Dictionary>(get_color_regions);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  pcStack_a0 = (char *)0x0;
  local_a8 = (Variant *)0x10983f;
  local_78 = &local_a8;
  D_METHODP((char *)&local_118,(char ***)"set_function_color",uVar5);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter,Color>(set_function_color);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)"get_function_color",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter,Color>(get_function_color);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  pcStack_a0 = (char *)0x0;
  local_a8 = (Variant *)0x10983f;
  local_78 = &local_a8;
  D_METHODP((char *)&local_118,(char ***)"set_number_color",uVar5);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter,Color>(set_number_color);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)"get_number_color",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter,Color>(get_number_color);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  pcStack_a0 = (char *)0x0;
  local_a8 = (Variant *)0x10983f;
  local_78 = &local_a8;
  D_METHODP((char *)&local_118,(char ***)"set_symbol_color",uVar5);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter,Color>(set_symbol_color);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)"get_symbol_color",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter,Color>(get_symbol_color);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  pcStack_a0 = (char *)0x0;
  local_a8 = (Variant *)0x10983f;
  local_78 = &local_a8;
  D_METHODP((char *)&local_118,(char ***)"set_member_variable_color",uVar5);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter,Color>(set_member_variable_color);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)"get_member_variable_color",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<CodeHighlighter,Color>(get_member_variable_color);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  _scs_create((char *)&local_130,true);
  _scs_create((char *)&local_138,true);
  local_140 = 0;
  local_118 = "";
  local_148 = 0;
  local_110 = 0;
  String::parse_latin1((StrRange *)&local_148);
  local_150 = 0;
  local_118 = "number_color";
  local_110 = 0xc;
  String::parse_latin1((StrRange *)&local_150);
  local_118 = (char *)CONCAT44(local_118._4_4_,0x14);
  local_110 = 0;
  if (local_150 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_150);
  }
  local_108 = (char *)0x0;
  local_100 = 0;
  local_f8 = 0;
  if (local_148 == 0) {
LAB_00101b9b:
    local_f0 = 6;
    StringName::operator=((StringName *)&local_108,(StringName *)&local_140);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_148);
    local_f0 = 6;
    if (local_100 != 0x11) goto LAB_00101b9b;
    StringName::StringName((StringName *)&local_128,(String *)&local_f8,false);
    if (local_108 == local_128) {
      if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_108 = local_128;
    }
  }
  local_158 = 0;
  local_128 = "CodeHighlighter";
  local_120 = 0xf;
  String::parse_latin1((StrRange *)&local_158);
  StringName::StringName((StringName *)&local_128,(String *)&local_158,false);
  ClassDB::add_property
            ((StringName *)&local_128,(PropertyInfo *)&local_118,(StringName *)&local_138,
             (StringName *)&local_130,-1);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((((StringName::configured != '\0') &&
       ((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_138 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_130 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_130,true);
  _scs_create((char *)&local_138,true);
  local_118 = "";
  local_140 = 0;
  local_148 = 0;
  local_110 = 0;
  String::parse_latin1((StrRange *)&local_148);
  local_150 = 0;
  local_118 = "symbol_color";
  local_110 = 0xc;
  String::parse_latin1((StrRange *)&local_150);
  local_118 = (char *)CONCAT44(local_118._4_4_,0x14);
  local_110 = 0;
  if (local_150 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_150);
  }
  local_108 = (char *)0x0;
  local_100 = 0;
  local_f8 = 0;
  if (local_148 == 0) {
LAB_00101e03:
    local_f0 = 6;
    StringName::operator=((StringName *)&local_108,(StringName *)&local_140);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_148);
    local_f0 = 6;
    if (local_100 != 0x11) goto LAB_00101e03;
    StringName::StringName((StringName *)&local_128,(String *)&local_f8,false);
    if (local_108 == local_128) {
      if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_108 = local_128;
    }
  }
  local_158 = 0;
  local_128 = "CodeHighlighter";
  local_120 = 0xf;
  String::parse_latin1((StrRange *)&local_158);
  StringName::StringName((StringName *)&local_128,(String *)&local_158,false);
  ClassDB::add_property
            ((StringName *)&local_128,(PropertyInfo *)&local_118,(StringName *)&local_138,
             (StringName *)&local_130,-1);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((((StringName::configured != '\0') &&
       ((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_138 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_130 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_130,true);
  _scs_create((char *)&local_138,true);
  local_118 = "";
  local_140 = 0;
  local_148 = 0;
  local_110 = 0;
  String::parse_latin1((StrRange *)&local_148);
  local_150 = 0;
  local_118 = "function_color";
  local_110 = 0xe;
  String::parse_latin1((StrRange *)&local_150);
  local_118 = (char *)CONCAT44(local_118._4_4_,0x14);
  local_110 = 0;
  if (local_150 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_150);
  }
  local_108 = (char *)0x0;
  local_100 = 0;
  local_f8 = 0;
  if (local_148 == 0) {
LAB_0010205b:
    local_f0 = 6;
    StringName::operator=((StringName *)&local_108,(StringName *)&local_140);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_148);
    local_f0 = 6;
    if (local_100 != 0x11) goto LAB_0010205b;
    StringName::StringName((StringName *)&local_128,(String *)&local_f8,false);
    if (local_108 == local_128) {
      if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_108 = local_128;
    }
  }
  local_158 = 0;
  local_128 = "CodeHighlighter";
  local_120 = 0xf;
  String::parse_latin1((StrRange *)&local_158);
  StringName::StringName((StringName *)&local_128,(String *)&local_158,false);
  ClassDB::add_property
            ((StringName *)&local_128,(PropertyInfo *)&local_118,(StringName *)&local_138,
             (StringName *)&local_130,-1);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((((StringName::configured != '\0') &&
       ((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_138 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_130 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_130,true);
  _scs_create((char *)&local_138,true);
  local_118 = "";
  local_140 = 0;
  local_148 = 0;
  local_110 = 0;
  String::parse_latin1((StrRange *)&local_148);
  local_150 = 0;
  local_118 = "member_variable_color";
  local_110 = 0x15;
  String::parse_latin1((StrRange *)&local_150);
  local_118 = (char *)CONCAT44(local_118._4_4_,0x14);
  local_110 = 0;
  if (local_150 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_150);
  }
  local_108 = (char *)0x0;
  local_100 = 0;
  local_f8 = 0;
  if (local_148 == 0) {
LAB_001022bb:
    local_f0 = 6;
    StringName::operator=((StringName *)&local_108,(StringName *)&local_140);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_148);
    local_f0 = 6;
    if (local_100 != 0x11) goto LAB_001022bb;
    StringName::StringName((StringName *)&local_128,(String *)&local_f8,false);
    if (local_108 == local_128) {
      if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_108 = local_128;
    }
  }
  local_158 = 0;
  local_128 = "CodeHighlighter";
  local_120 = 0xf;
  String::parse_latin1((StrRange *)&local_158);
  StringName::StringName((StringName *)&local_128,(String *)&local_158,false);
  ClassDB::add_property
            ((StringName *)&local_128,(PropertyInfo *)&local_118,(StringName *)&local_138,
             (StringName *)&local_130,-1);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if (((StringName::configured != '\0') &&
      ((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_138 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_130 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_130,true);
  _scs_create((char *)&local_138,true);
  local_118 = "";
  local_140 = 0;
  local_148 = 0;
  local_110 = 0;
  String::parse_latin1((StrRange *)&local_148);
  local_150 = 0;
  local_118 = "keyword_colors";
  local_110 = 0xe;
  String::parse_latin1((StrRange *)&local_150);
  local_118 = (char *)CONCAT44(local_118._4_4_,0x1b);
  local_110 = 0;
  if (local_150 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_150);
  }
  local_108 = (char *)0x0;
  local_100 = 0;
  local_f8 = 0;
  if (local_148 == 0) {
LAB_0010251b:
    local_f0 = 6;
    StringName::operator=((StringName *)&local_108,(StringName *)&local_140);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_148);
    local_f0 = 6;
    if (local_100 != 0x11) goto LAB_0010251b;
    StringName::StringName((StringName *)&local_128,(String *)&local_f8,false);
    if (local_108 == local_128) {
      if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_108 = local_128;
    }
  }
  local_158 = 0;
  local_128 = "CodeHighlighter";
  local_120 = 0xf;
  String::parse_latin1((StrRange *)&local_158);
  StringName::StringName((StringName *)&local_128,(String *)&local_158,false);
  ClassDB::add_property
            ((StringName *)&local_128,(PropertyInfo *)&local_118,(StringName *)&local_138,
             (StringName *)&local_130,-1);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((((StringName::configured != '\0') &&
       ((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_138 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_130 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_130,true);
  _scs_create((char *)&local_138,true);
  local_118 = "";
  local_140 = 0;
  local_148 = 0;
  local_110 = 0;
  String::parse_latin1((StrRange *)&local_148);
  local_150 = 0;
  local_118 = "member_keyword_colors";
  local_110 = 0x15;
  String::parse_latin1((StrRange *)&local_150);
  local_118 = (char *)CONCAT44(local_118._4_4_,0x1b);
  local_110 = 0;
  if (local_150 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_150);
  }
  local_108 = (char *)0x0;
  local_100 = 0;
  local_f8 = 0;
  if (local_148 == 0) {
LAB_0010277b:
    local_f0 = 6;
    StringName::operator=((StringName *)&local_108,(StringName *)&local_140);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_148);
    local_f0 = 6;
    if (local_100 != 0x11) goto LAB_0010277b;
    StringName::StringName((StringName *)&local_128,(String *)&local_f8,false);
    if (local_108 == local_128) {
      if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_108 = local_128;
    }
  }
  local_158 = 0;
  local_128 = "CodeHighlighter";
  local_120 = 0xf;
  String::parse_latin1((StrRange *)&local_158);
  StringName::StringName((StringName *)&local_128,(String *)&local_158,false);
  ClassDB::add_property
            ((StringName *)&local_128,(PropertyInfo *)&local_118,(StringName *)&local_138,
             (StringName *)&local_130,-1);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((((StringName::configured != '\0') &&
       ((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_138 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_130 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_130,true);
  _scs_create((char *)&local_138,true);
  local_118 = "";
  local_140 = 0;
  local_148 = 0;
  local_110 = 0;
  String::parse_latin1((StrRange *)&local_148);
  local_150 = 0;
  local_118 = "color_regions";
  local_110 = 0xd;
  String::parse_latin1((StrRange *)&local_150);
  local_118 = (char *)CONCAT44(local_118._4_4_,0x1b);
  local_110 = 0;
  if (local_150 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_150);
  }
  local_108 = (char *)0x0;
  local_100 = 0;
  local_f8 = 0;
  if (local_148 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_148);
    local_f0 = 6;
    if (local_100 == 0x11) {
      StringName::StringName((StringName *)&local_128,(String *)&local_f8,false);
      if (local_108 == local_128) {
        if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_108 = local_128;
      }
      goto LAB_001029ed;
    }
  }
  local_f0 = 6;
  StringName::operator=((StringName *)&local_108,(StringName *)&local_140);
LAB_001029ed:
  local_158 = 0;
  local_128 = "CodeHighlighter";
  local_120 = 0xf;
  String::parse_latin1((StrRange *)&local_158);
  StringName::StringName((StringName *)&local_128,(String *)&local_158,false);
  ClassDB::add_property
            ((StringName *)&local_128,(PropertyInfo *)&local_118,(StringName *)&local_138,
             (StringName *)&local_130,-1);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((((StringName::configured != '\0') &&
       ((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_138 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_130 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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



/* SyntaxHighlighter::clear_highlighting_cache() */

void __thiscall SyntaxHighlighter::clear_highlighting_cache(SyntaxHighlighter *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  undefined8 local_e8;
  long local_e0;
  StringName local_d8 [8];
  long local_d0;
  int local_c8 [4];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::clear
            ((RBMap<int,Dictionary,Comparator<int>,DefaultAllocator> *)(this + 0x240));
  plVar4 = *(long **)(this + 0x98);
  if (plVar4 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_c8[2] = 0;
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,this + 0x280,0,0,local_c8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_c8[0] == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001032df;
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x288] == (SyntaxHighlighter)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    local_c8[2] = 0;
    local_c8[3] = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_clear_highlighting_cache");
    local_90 = CONCAT44(local_90._4_4_,8);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x290) = 0;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xd8);
    if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xd0), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
      local_e8 = 0;
      String::parse_latin1((String *)&local_e8,"SyntaxHighlighter");
      StringName::StringName((StringName *)&local_e0,(String *)&local_e8,false);
      ClassDB::get_virtual_method_compatibility_hashes(local_d8,(StringName *)&local_e0);
      if (local_d0 == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_e0 != 0)) goto LAB_00103257;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
LAB_0010326c:
        lVar3 = *(long *)(this + 8);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 200);
        if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xc0), UNRECOVERED_JUMPTABLE == (code *)0x0))
        goto LAB_001031a9;
        uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + 0xa0),this + 0x280);
        *(undefined8 *)(this + 0x290) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_d0 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
        if ((StringName::configured != '\0') && (local_e0 != 0)) {
LAB_00103257:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        if (lVar3 == 0) goto LAB_0010326c;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + 0xa0),this + 0x280,uVar1);
      *(undefined8 *)(this + 0x290) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_001031a9:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x290);
      plVar4[1] = (long)(this + 0x288);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x288] = (SyntaxHighlighter)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x290);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010306d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x1d0))(this);
      return;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001030cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(this + 0x10),0,0);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00103031. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x280,UNRECOVERED_JUMPTABLE,0,0);
    return;
  }
LAB_001032df:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeHighlighter::add_keyword_color(String const&, Color const&) */

void __thiscall
CodeHighlighter::add_keyword_color(CodeHighlighter *this,String *param_1,Color *param_2)

{
  char cVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  int local_68 [8];
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_48,param_2);
  Variant::Variant((Variant *)local_68,param_1);
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)(this + 0x2f0));
  if (pVVar2 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_48[0];
    local_48[0] = 0;
    *(undefined8 *)(pVVar2 + 8) = local_40;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_38;
  }
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  SyntaxHighlighter::clear_highlighting_cache((SyntaxHighlighter *)this);
  return;
}



/* CodeHighlighter::remove_keyword_color(String const&) */

void __thiscall CodeHighlighter::remove_keyword_color(CodeHighlighter *this,String *param_1)

{
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_38,param_1);
  Dictionary::erase((Variant *)(this + 0x2f0));
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    SyntaxHighlighter::clear_highlighting_cache((SyntaxHighlighter *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeHighlighter::set_keyword_colors(Dictionary) */

void __thiscall CodeHighlighter::set_keyword_colors(CodeHighlighter *this,Dictionary *param_2)

{
  Dictionary::operator=((Dictionary *)(this + 0x2f0),param_2);
  SyntaxHighlighter::clear_highlighting_cache((SyntaxHighlighter *)this);
  return;
}



/* CodeHighlighter::clear_keyword_colors() */

void __thiscall CodeHighlighter::clear_keyword_colors(CodeHighlighter *this)

{
  Dictionary::clear();
  SyntaxHighlighter::clear_highlighting_cache((SyntaxHighlighter *)this);
  return;
}



/* CodeHighlighter::add_member_keyword_color(String const&, Color const&) */

void __thiscall
CodeHighlighter::add_member_keyword_color(CodeHighlighter *this,String *param_1,Color *param_2)

{
  char cVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  int local_68 [8];
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_48,param_2);
  Variant::Variant((Variant *)local_68,param_1);
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)(this + 0x2f8));
  if (pVVar2 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_48[0];
    local_48[0] = 0;
    *(undefined8 *)(pVVar2 + 8) = local_40;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_38;
  }
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  SyntaxHighlighter::clear_highlighting_cache((SyntaxHighlighter *)this);
  return;
}



/* CodeHighlighter::remove_member_keyword_color(String const&) */

void __thiscall CodeHighlighter::remove_member_keyword_color(CodeHighlighter *this,String *param_1)

{
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_38,param_1);
  Dictionary::erase((Variant *)(this + 0x2f8));
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    SyntaxHighlighter::clear_highlighting_cache((SyntaxHighlighter *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeHighlighter::set_member_keyword_colors(Dictionary const&) */

void __thiscall
CodeHighlighter::set_member_keyword_colors(CodeHighlighter *this,Dictionary *param_1)

{
  Dictionary::operator=((Dictionary *)(this + 0x2f8),(Dictionary *)param_1);
  SyntaxHighlighter::clear_highlighting_cache((SyntaxHighlighter *)this);
  return;
}



/* CodeHighlighter::clear_member_keyword_colors() */

void __thiscall CodeHighlighter::clear_member_keyword_colors(CodeHighlighter *this)

{
  Dictionary::clear();
  SyntaxHighlighter::clear_highlighting_cache((SyntaxHighlighter *)this);
  return;
}



/* CodeHighlighter::set_number_color(Color) */

void CodeHighlighter::set_number_color
               (undefined8 param_1,undefined8 param_2,SyntaxHighlighter *param_3)

{
  *(undefined8 *)(param_3 + 0x340) = param_1;
  *(undefined8 *)(param_3 + 0x348) = param_2;
  SyntaxHighlighter::clear_highlighting_cache(param_3);
  return;
}



/* CodeHighlighter::set_symbol_color(Color) */

void CodeHighlighter::set_symbol_color
               (undefined8 param_1,undefined8 param_2,SyntaxHighlighter *param_3)

{
  *(undefined8 *)(param_3 + 0x330) = param_1;
  *(undefined8 *)(param_3 + 0x338) = param_2;
  SyntaxHighlighter::clear_highlighting_cache(param_3);
  return;
}



/* CodeHighlighter::set_function_color(Color) */

void CodeHighlighter::set_function_color
               (undefined8 param_1,undefined8 param_2,SyntaxHighlighter *param_3)

{
  *(undefined8 *)(param_3 + 800) = param_1;
  *(undefined8 *)(param_3 + 0x328) = param_2;
  SyntaxHighlighter::clear_highlighting_cache(param_3);
  return;
}



/* CodeHighlighter::set_member_variable_color(Color) */

void CodeHighlighter::set_member_variable_color
               (undefined8 param_1,undefined8 param_2,SyntaxHighlighter *param_3)

{
  *(undefined8 *)(param_3 + 0x310) = param_1;
  *(undefined8 *)(param_3 + 0x318) = param_2;
  SyntaxHighlighter::clear_highlighting_cache(param_3);
  return;
}



/* SyntaxHighlighter::update_cache() */

void __thiscall SyntaxHighlighter::update_cache(SyntaxHighlighter *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  undefined8 local_e8;
  long local_e0;
  StringName local_d8 [8];
  long local_d0;
  int local_c8 [4];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  clear_highlighting_cache(this);
  if (*(long *)(this + 0x260) == 0) {
LAB_001038a0:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00103b0f;
  }
  plVar4 = *(long **)(this + 0x98);
  if (plVar4 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_c8[2] = 0;
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,this + 0x298,0,0,local_c8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_c8[0] == 0) goto LAB_001038a0;
  }
  if ((*(long *)(this + 8) != 0) && (this[0x2a0] == (SyntaxHighlighter)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    local_c8[2] = 0;
    local_c8[3] = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_update_cache");
    local_90 = CONCAT44(local_90._4_4_,8);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x2a8) = 0;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xd8);
    if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xd0), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
      local_e8 = 0;
      String::parse_latin1((String *)&local_e8,"SyntaxHighlighter");
      StringName::StringName((StringName *)&local_e0,(String *)&local_e8,false);
      ClassDB::get_virtual_method_compatibility_hashes(local_d8,(StringName *)&local_e0);
      if (local_d0 == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_e0 != 0)) goto LAB_00103a87;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
LAB_00103a9c:
        lVar3 = *(long *)(this + 8);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 200);
        if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xc0), UNRECOVERED_JUMPTABLE == (code *)0x0))
        goto LAB_001039d9;
        uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + 0xa0),this + 0x298);
        *(undefined8 *)(this + 0x2a8) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_d0 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
        if ((StringName::configured != '\0') && (local_e0 != 0)) {
LAB_00103a87:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        if (lVar3 == 0) goto LAB_00103a9c;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + 0xa0),this + 0x298,uVar1);
      *(undefined8 *)(this + 0x2a8) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_001039d9:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x2a8);
      plVar4[1] = (long)(this + 0x2a0);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x2a0] = (SyntaxHighlighter)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x2a8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00103895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x1d8))(this);
      return;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001038fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(this + 0x10),0,0);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00103858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x298,UNRECOVERED_JUMPTABLE,0,0);
    return;
  }
LAB_00103b0f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SyntaxHighlighter::set_text_edit(TextEdit*) */

void __thiscall SyntaxHighlighter::set_text_edit(SyntaxHighlighter *this,TextEdit *param_1)

{
  long *plVar1;
  code *pcVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  long local_60;
  SyntaxHighlighter local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x260) != 0) {
    uVar3 = (uint)*(ulong *)(this + 600) & 0xffffff;
    if (uVar3 < (uint)ObjectDB::slot_max) {
      while( true ) {
        local_58[0] = (SyntaxHighlighter)0x0;
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
      if ((*(ulong *)(this + 600) >> 0x18 & 0x7fffffffff) == (*puVar4 & 0x7fffffffff)) {
        ObjectDB::spin_lock._0_1_ = '\0';
        if (puVar4[1] != 0) {
          plVar1 = *(long **)(this + 0x260);
          pcVar2 = *(code **)(*plVar1 + 0x110);
          create_custom_callable_function_pointer<SyntaxHighlighter,int,int>
                    (local_58,(char *)this,
                     (_func_void_int_int *)"&SyntaxHighlighter::_lines_edited_from");
          StringName::StringName((StringName *)&local_60,"lines_edited_from",false);
          (*pcVar2)(plVar1,(StringName *)&local_60,local_58);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          Callable::~Callable((Callable *)local_58);
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
  }
  *(TextEdit **)(this + 0x260) = param_1;
  if (param_1 == (TextEdit *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    *(undefined8 *)(this + 600) = *(undefined8 *)(param_1 + 0x60);
    pcVar2 = *(code **)(*(long *)param_1 + 0x108);
    create_custom_callable_function_pointer<SyntaxHighlighter,int,int>
              (local_58,(char *)this,(_func_void_int_int *)"&SyntaxHighlighter::_lines_edited_from")
    ;
    StringName::StringName((StringName *)&local_60,"lines_edited_from",false);
    (*pcVar2)(param_1,(StringName *)&local_60,local_58,0);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      update_cache(this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* SyntaxHighlighter::_bind_methods() */

void SyntaxHighlighter::_bind_methods(void)

{
  long *plVar1;
  CowData<char32_t> *this;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int *piVar6;
  int iVar7;
  MethodBind *pMVar8;
  undefined4 *puVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  StringName *local_168;
  long local_138;
  long local_130;
  undefined8 local_128;
  long local_120;
  Vector local_118 [8];
  long local_110;
  char *local_108;
  undefined1 local_100 [16];
  int local_f0;
  long local_e8;
  undefined4 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 (*local_98 [2]) [16];
  int *local_88;
  ulong local_80;
  Vector<int> local_78 [8];
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_100._8_8_ = local_100._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = &local_68;
  local_60 = 0;
  local_68 = &_LC97;
  D_METHODP((char *)&local_d8,(char ***)"get_line_syntax_highlighting",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar8 = create_method_bind<SyntaxHighlighter,Dictionary,int>(get_line_syntax_highlighting);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"update_cache",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar8 = create_method_bind<SyntaxHighlighter>(update_cache);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"clear_highlighting_cache",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar8 = create_method_bind<SyntaxHighlighter>(clear_highlighting_cache);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_text_edit",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar8 = create_method_bind<SyntaxHighlighter,TextEdit*>(get_text_edit);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  local_d8 = &_LC97;
  local_110 = 0;
  local_108 = (char *)0x0;
  local_d0 = 4;
  String::parse_latin1((StrRange *)&local_108);
  local_d8 = (undefined *)0x0;
  plVar1 = (long *)((long)local_108 + -0x10);
  if (local_108 != (char *)0x0) {
    do {
      lVar11 = *plVar1;
      if (lVar11 == 0) goto LAB_00104144;
      LOCK();
      lVar12 = *plVar1;
      bVar13 = lVar11 == lVar12;
      if (bVar13) {
        *plVar1 = lVar11 + 1;
        lVar12 = lVar11;
      }
      UNLOCK();
    } while (!bVar13);
    if (lVar12 != -1) {
      local_d8 = local_108;
    }
  }
LAB_00104144:
  if (local_110 == 0) {
    lVar11 = 1;
  }
  else {
    lVar11 = *(long *)(local_110 + -8) + 1;
  }
  iVar7 = CowData<String>::resize<false>((CowData<String> *)&local_110,lVar11);
  if (iVar7 == 0) {
    if (local_110 == 0) {
      lVar12 = -1;
      lVar11 = 0;
    }
    else {
      lVar11 = *(long *)(local_110 + -8);
      lVar12 = lVar11 + -1;
      if (-1 < lVar12) {
        CowData<String>::_copy_on_write((CowData<String> *)&local_110);
        this = (CowData<char32_t> *)(local_110 + lVar12 * 8);
        if ((undefined *)*(long *)this != local_d8) {
          CowData<char32_t>::_ref(this,(CowData *)&local_d8);
        }
        goto LAB_001041c0;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar12,lVar11,"p_index","size()","",false,
               false);
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_001041c0:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  local_c8._0_8_ = 0;
  local_c8._8_8_ = 0;
  local_108 = "_get_line_syntax_highlighting";
  local_d8 = (undefined *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 6;
  local_a0 = 1;
  local_98[0] = (undefined1 (*) [16])0x0;
  local_88 = (int *)0x0;
  local_80 = 0;
  local_70 = 0;
  local_100._0_8_ = 0x1d;
  String::parse_latin1((StrRange *)&local_d8);
  local_a0 = CONCAT44(local_a0._4_4_,0xc);
  local_138 = 0;
  local_130 = 0;
  local_108 = "";
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_100._8_8_;
  local_100 = auVar5 << 0x40;
  String::parse_latin1((StrRange *)&local_130);
  local_128 = 0;
  local_108 = (char *)CONCAT44(local_108._4_4_,0x1b);
  local_f0 = 0;
  local_e8 = 0;
  local_100 = (undefined1  [16])0x0;
  if (local_130 == 0) {
LAB_00104373:
    local_e0 = 6;
    StringName::operator=((StringName *)(local_100 + 8),(StringName *)&local_138);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_130);
    local_e0 = 6;
    if (local_f0 != 0x11) goto LAB_00104373;
    StringName::StringName((StringName *)&local_120,(String *)&local_e8,false);
    if (local_100._8_8_ == local_120) {
      if ((StringName::configured != '\0') && (local_120 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_100._8_8_ = local_120;
    }
  }
  local_168 = (StringName *)(local_100 + 8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((StringName::configured != '\0') && (local_138 != 0)) {
    StringName::unref();
  }
  local_d0 = CONCAT44(local_d0._4_4_,local_108._0_4_);
  if (local_c8._0_8_ != local_100._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    local_c8._0_8_ = local_100._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_100._8_8_;
    local_100 = auVar3 << 0x40;
  }
  if (local_c8._8_8_ != local_100._8_8_) {
    StringName::unref();
    local_c8._8_8_ = local_100._8_8_;
    local_100._8_8_ = 0;
  }
  local_b8 = CONCAT44(local_b8._4_4_,local_f0);
  if (local_b0 != local_e8) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    local_b0 = local_e8;
    local_e8 = 0;
  }
  local_a8 = CONCAT44(local_a8._4_4_,local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  local_80 = local_80 & 0xffffffff00000000;
  local_138 = 0;
  local_130 = 0;
  local_108 = "";
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_100._8_8_;
  local_100 = auVar4 << 0x40;
  String::parse_latin1((StrRange *)&local_130);
  local_128 = 0;
  local_108 = (char *)CONCAT44(local_108._4_4_,2);
  local_f0 = 0;
  local_e8 = 0;
  local_100 = (undefined1  [16])0x0;
  if (local_130 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_130);
    local_e0 = 6;
    if (local_f0 == 0x11) {
      StringName::StringName((StringName *)&local_120,(String *)&local_e8,false);
      if (local_100._8_8_ == local_120) {
        if ((StringName::configured != '\0') && (local_120 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_100._8_8_ = local_120;
      }
      goto LAB_0010459a;
    }
  }
  local_e0 = 6;
  StringName::operator=(local_168,(StringName *)&local_138);
LAB_0010459a:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((StringName::configured != '\0') && (local_138 != 0)) {
    StringName::unref();
  }
  if (local_98[0] == (undefined1 (*) [16])0x0) {
    local_98[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_98[0][1] = 0;
    *local_98[0] = (undefined1  [16])0x0;
  }
  puVar9 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar9 + 8) = 0;
  *(undefined1 (*) [16])(puVar9 + 2) = (undefined1  [16])0x0;
  *puVar9 = 0;
  puVar9[6] = 0;
  puVar9[10] = 6;
  *(undefined8 *)(puVar9 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar9 + 0xc) = (undefined1  [16])0x0;
  *puVar9 = local_108._0_4_;
  if (local_100._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar9 + 2),(CowData *)local_100);
  }
  StringName::operator=((StringName *)(puVar9 + 4),local_168);
  puVar9[6] = local_f0;
  if (*(long *)(puVar9 + 8) != local_e8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar9 + 8),(CowData *)&local_e8);
  }
  puVar9[10] = local_e0;
  lVar11 = *(long *)(*local_98[0] + 8);
  *(undefined8 *)(puVar9 + 0xc) = 0;
  *(undefined1 (**) [16])(puVar9 + 0x10) = local_98[0];
  *(long *)(puVar9 + 0xe) = lVar11;
  if (lVar11 != 0) {
    *(undefined4 **)(lVar11 + 0x30) = puVar9;
  }
  lVar11 = *(long *)*local_98[0];
  *(undefined4 **)(*local_98[0] + 8) = puVar9;
  if (lVar11 == 0) {
    *(undefined4 **)*local_98[0] = puVar9;
  }
  *(int *)local_98[0][1] = *(int *)local_98[0][1] + 1;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  Vector<int>::push_back(local_78,3);
  local_108 = "SyntaxHighlighter";
  local_120 = 0;
  local_100._0_8_ = 0x11;
  String::parse_latin1((StrRange *)&local_120);
  StringName::StringName((StringName *)&local_108,(String *)&local_120,false);
  ClassDB::add_virtual_method((StringName *)&local_108,(MethodInfo *)&local_d8,true,local_118,false)
  ;
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  lVar11 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar11 + -0x10),false);
    }
  }
  piVar6 = local_88;
  if (local_88 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_88 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_88 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar11 = *(long *)(local_88 + -2);
      lVar12 = 0;
      local_88 = (int *)0x0;
      piVar10 = piVar6;
      if (lVar11 != 0) {
        do {
          if (Variant::needs_deinit[*piVar10] != '\0') {
            Variant::_clear_internal();
          }
          lVar12 = lVar12 + 1;
          piVar10 = piVar10 + 6;
        } while (lVar11 != lVar12);
      }
      Memory::free_static(piVar6 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<String>::_unref((CowData<String> *)&local_110);
  local_c8 = (undefined1  [16])0x0;
  local_108 = "_clear_highlighting_cache";
  local_110 = 0;
  local_d8 = (undefined *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 6;
  local_a0 = 1;
  local_98[0] = (undefined1 (*) [16])0x0;
  local_88 = (int *)0x0;
  local_80 = 0;
  local_70 = 0;
  local_100._0_8_ = 0x19;
  String::parse_latin1((StrRange *)&local_d8);
  local_108 = "SyntaxHighlighter";
  local_a0 = CONCAT44(local_a0._4_4_,8);
  local_120 = 0;
  local_100._0_8_ = 0x11;
  String::parse_latin1((StrRange *)&local_120);
  StringName::StringName((StringName *)&local_108,(String *)&local_120,false);
  ClassDB::add_virtual_method((StringName *)&local_108,(MethodInfo *)&local_d8,true,local_118,false)
  ;
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  lVar11 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar11 + -0x10),false);
    }
  }
  piVar6 = local_88;
  if (local_88 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_88 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_88 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar11 = *(long *)(local_88 + -2);
      lVar12 = 0;
      local_88 = (int *)0x0;
      piVar10 = piVar6;
      if (lVar11 != 0) {
        do {
          if (Variant::needs_deinit[*piVar10] != '\0') {
            Variant::_clear_internal();
          }
          lVar12 = lVar12 + 1;
          piVar10 = piVar10 + 6;
        } while (lVar11 != lVar12);
      }
      Memory::free_static(piVar6 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<String>::_unref((CowData<String> *)&local_110);
  local_c8 = (undefined1  [16])0x0;
  local_108 = "_update_cache";
  local_110 = 0;
  local_d8 = (undefined *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 6;
  local_a0 = 1;
  local_98[0] = (undefined1 (*) [16])0x0;
  local_88 = (int *)0x0;
  local_80 = 0;
  local_70 = 0;
  local_100._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  local_108 = "SyntaxHighlighter";
  local_a0 = CONCAT44(local_a0._4_4_,8);
  local_120 = 0;
  local_100._0_8_ = 0x11;
  String::parse_latin1((StrRange *)&local_120);
  StringName::StringName((StringName *)&local_108,(String *)&local_120,false);
  ClassDB::add_virtual_method((StringName *)&local_108,(MethodInfo *)&local_d8,true,local_118,false)
  ;
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  lVar11 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar11 + -0x10),false);
    }
  }
  piVar6 = local_88;
  if (local_88 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_88 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_88 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar11 = *(long *)(local_88 + -2);
      lVar12 = 0;
      local_88 = (int *)0x0;
      piVar10 = piVar6;
      if (lVar11 != 0) {
        do {
          if (Variant::needs_deinit[*piVar10] != '\0') {
            Variant::_clear_internal();
          }
          lVar12 = lVar12 + 1;
          piVar10 = piVar10 + 6;
        } while (lVar11 != lVar12);
      }
      Memory::free_static(piVar6 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<String>::_unref((CowData<String> *)&local_110);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SyntaxHighlighter::get_line_syntax_highlighting(int) */

Dictionary * SyntaxHighlighter::get_line_syntax_highlighting(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long *plVar6;
  code *pcVar7;
  int in_EDX;
  long lVar8;
  long *in_RSI;
  undefined4 in_register_0000003c;
  Dictionary *this;
  long in_FS_OFFSET;
  long local_168;
  int local_14c [3];
  Dictionary local_140 [8];
  undefined8 local_138;
  long local_130;
  undefined4 local_128 [2];
  long local_120;
  long local_118;
  undefined4 local_110;
  long local_108;
  undefined4 local_100;
  int local_f8 [2];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 (*local_b8) [16];
  undefined8 local_a8;
  ulong local_a0;
  Vector<int> local_98 [8];
  undefined8 local_90;
  Variant *local_80;
  int local_78 [8];
  long *local_58 [3];
  long local_40;
  
  this = (Dictionary *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = in_RSI[0x49];
  if (in_RSI[0x48] != 0) {
    lVar4 = *(long *)(in_RSI[0x48] + 0x10);
    for (lVar8 = lVar4; lVar3 != lVar8; lVar8 = *(long *)(lVar8 + 8)) {
      while (in_EDX < *(int *)(lVar8 + 0x30)) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar3 == lVar8) goto LAB_00104eb6;
      }
      if (in_EDX <= *(int *)(lVar8 + 0x30)) goto LAB_001050b1;
    }
  }
LAB_00104eb6:
  local_14c[0] = in_EDX;
  Dictionary::Dictionary(local_140);
  if (in_RSI[0x4c] != 0) {
    plVar6 = (long *)in_RSI[0x13];
    if (plVar6 == (long *)0x0) {
LAB_00104f9a:
      if ((in_RSI[1] != 0) && ((char)in_RSI[0x4e] == '\0')) {
        local_f8[0] = 0;
        local_f8[1] = 0;
        local_e8 = (undefined1  [16])0x0;
        uStack_f0 = 0;
        uStack_ec = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = 6;
        local_c0 = 1;
        local_b8 = (undefined1 (*) [16])0x0;
        local_a8 = 0;
        local_a0 = 0;
        local_90 = 0;
        String::parse_latin1((String *)local_f8,"_get_line_syntax_highlighting");
        local_c0 = CONCAT44(local_c0._4_4_,0xc);
        GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)local_128);
        uStack_f0 = local_128[0];
        uVar2 = local_e8._0_8_;
        if (local_e8._0_8_ != local_120) {
          if (local_e8._0_8_ != 0) {
            LOCK();
            plVar6 = (long *)(local_e8._0_8_ + -0x10);
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
              auVar1._8_8_ = 0;
              auVar1._0_8_ = local_e8._8_8_;
              local_e8 = auVar1 << 0x40;
              Memory::free_static((void *)(uVar2 + -0x10),false);
            }
          }
          local_e8._0_8_ = local_120;
          local_120 = 0;
        }
        if (local_e8._8_8_ != local_118) {
          StringName::unref();
          lVar3 = local_118;
          local_118 = 0;
          local_e8._8_8_ = lVar3;
        }
        lVar3 = local_d0;
        local_d8 = CONCAT44(local_d8._4_4_,local_110);
        if (local_d0 != local_108) {
          if (local_d0 != 0) {
            LOCK();
            plVar6 = (long *)(local_d0 + -0x10);
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
              local_d0 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          local_d0 = local_108;
          local_108 = 0;
        }
        local_c8 = CONCAT44(local_c8._4_4_,local_100);
        PropertyInfo::~PropertyInfo((PropertyInfo *)local_128);
        local_a0 = local_a0 & 0xffffffff00000000;
        GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)local_128);
        if (local_b8 == (undefined1 (*) [16])0x0) {
          local_b8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined4 *)local_b8[1] = 0;
          *local_b8 = (undefined1  [16])0x0;
        }
        puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
        *(undefined8 *)(puVar5 + 8) = 0;
        *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
        *puVar5 = 0;
        puVar5[6] = 0;
        puVar5[10] = 6;
        *(undefined8 *)(puVar5 + 0x10) = 0;
        *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
        *puVar5 = local_128[0];
        if (local_120 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_120);
        }
        StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_118);
        puVar5[6] = local_110;
        if (*(long *)(puVar5 + 8) != local_108) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_108);
        }
        puVar5[10] = local_100;
        lVar3 = *(long *)(*local_b8 + 8);
        *(undefined8 *)(puVar5 + 0xc) = 0;
        *(undefined1 (**) [16])(puVar5 + 0x10) = local_b8;
        *(long *)(puVar5 + 0xe) = lVar3;
        if (lVar3 != 0) {
          *(undefined4 **)(lVar3 + 0x30) = puVar5;
        }
        lVar3 = *(long *)*local_b8;
        *(undefined4 **)(*local_b8 + 8) = puVar5;
        if (lVar3 == 0) {
          *(undefined4 **)*local_b8 = puVar5;
        }
        *(int *)local_b8[1] = *(int *)local_b8[1] + 1;
        PropertyInfo::~PropertyInfo((PropertyInfo *)local_128);
        Vector<int>::push_back(local_98,3);
        MethodInfo::get_compatibility_hash();
        in_RSI[0x4f] = 0;
        lVar3 = in_RSI[1];
        pcVar7 = *(code **)(lVar3 + 0xd8);
        if (((pcVar7 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar7 = *(code **)(lVar3 + 0xd0), pcVar7 == (code *)0x0)) {
          local_138 = 0;
          String::parse_latin1((String *)&local_138,"SyntaxHighlighter");
          StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
          ClassDB::get_virtual_method_compatibility_hashes
                    ((StringName *)local_128,(StringName *)&local_130);
          if (local_120 == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_120);
            local_168 = 0;
            if (StringName::configured != '\0') goto LAB_00105846;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_00105868:
            lVar3 = in_RSI[1];
            pcVar7 = *(code **)(lVar3 + 200);
            if (((pcVar7 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
               (pcVar7 = *(code **)(lVar3 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_00105603;
            lVar3 = (*pcVar7)(*(undefined8 *)(lVar3 + 0xa0),in_RSI + 0x4d);
            in_RSI[0x4f] = lVar3;
          }
          else {
            local_168 = *(long *)(local_120 + -8);
            CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_120);
            if (StringName::configured != '\0') {
LAB_00105846:
              if (local_130 != 0) {
                StringName::unref();
              }
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
            if (local_168 == 0) goto LAB_00105868;
          }
          lVar3 = in_RSI[1];
        }
        else {
          lVar3 = (*pcVar7)(*(undefined8 *)(lVar3 + 0xa0),in_RSI + 0x4d);
          in_RSI[0x4f] = lVar3;
          lVar3 = in_RSI[1];
        }
LAB_00105603:
        if (*(char *)(lVar3 + 0x29) != '\0') {
          plVar6 = (long *)operator_new(0x18,"");
          *plVar6 = (long)(in_RSI + 0x4f);
          plVar6[1] = (long)(in_RSI + 0x4e);
          plVar6[2] = in_RSI[0x2d];
          in_RSI[0x2d] = (long)plVar6;
        }
        *(undefined1 *)(in_RSI + 0x4e) = 1;
        MethodInfo::~MethodInfo((MethodInfo *)local_f8);
      }
      if (in_RSI[0x4f] == 0) {
        (**(code **)(*in_RSI + 0x1c8))((Dictionary *)local_f8);
        Dictionary::operator=(local_140,(Dictionary *)local_f8);
        Dictionary::~Dictionary((Dictionary *)local_f8);
      }
      else {
        local_58[0] = &local_130;
        local_130 = (long)in_EDX;
        Dictionary::Dictionary((Dictionary *)local_128);
        if (*(code **)(in_RSI[1] + 0xe0) == (code *)0x0) {
          (*(code *)in_RSI[0x4f])(in_RSI[2],local_58,(Dictionary *)local_128);
        }
        else {
          (**(code **)(in_RSI[1] + 0xe0))
                    (in_RSI[2],in_RSI + 0x4d,in_RSI[0x4f],local_58,(Dictionary *)local_128);
        }
        Dictionary::Dictionary((Dictionary *)local_f8,(Dictionary *)local_128);
        Dictionary::operator=(local_140,(Dictionary *)local_f8);
        Dictionary::~Dictionary((Dictionary *)local_f8);
        Dictionary::~Dictionary((Dictionary *)local_128);
      }
    }
    else {
      local_f8[0] = 0;
      local_f8[1] = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant *)local_78,in_EDX);
      local_80 = (Variant *)local_78;
      (**(code **)(*plVar6 + 0x60))(local_58,plVar6,in_RSI + 0x4d,&local_80,1,local_f8);
      if (local_f8[0] != 0) {
        if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_00104f9a;
      }
      Variant::operator_cast_to_Dictionary((Variant *)local_128);
      Dictionary::operator=(local_140,(Dictionary *)local_128);
      Dictionary::~Dictionary((Dictionary *)local_128);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_14c[0] = in_EDX;
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    if (in_RSI[0x48] == 0) {
      puVar5 = (undefined4 *)operator_new(0x40,DefaultAllocator::alloc);
      Dictionary::Dictionary((Dictionary *)local_128);
      local_f8[0] = 0;
      Dictionary::Dictionary((Dictionary *)&uStack_f0,(Dictionary *)local_128);
      *puVar5 = 0;
      *(undefined8 *)(puVar5 + 10) = 0;
      puVar5[0xc] = local_f8[0];
      *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar5 + 6) = (undefined1  [16])0x0;
      Dictionary::Dictionary((Dictionary *)(puVar5 + 0xe),(Dictionary *)&uStack_f0);
      in_RSI[0x48] = (long)puVar5;
      Dictionary::~Dictionary((Dictionary *)&uStack_f0);
      Dictionary::~Dictionary((Dictionary *)local_128);
      puVar5 = (undefined4 *)in_RSI[0x48];
      lVar3 = in_RSI[0x49];
      *puVar5 = 1;
      *(long *)(puVar5 + 2) = lVar3;
      *(long *)(puVar5 + 4) = lVar3;
      *(long *)(puVar5 + 6) = lVar3;
    }
    else {
      lVar3 = *(long *)(in_RSI[0x48] + 0x10);
    }
    for (; in_RSI[0x49] != lVar3; lVar3 = *(long *)(lVar3 + 8)) {
      while (local_14c[0] < *(int *)(lVar3 + 0x30)) {
        lVar3 = *(long *)(lVar3 + 0x10);
        if (lVar3 == in_RSI[0x49]) goto LAB_0010501d;
      }
      if (local_14c[0] <= *(int *)(lVar3 + 0x30)) goto LAB_00105055;
    }
LAB_0010501d:
    Dictionary::Dictionary((Dictionary *)&local_130);
    if (in_RSI[0x48] == 0) {
      puVar5 = (undefined4 *)operator_new(0x40,DefaultAllocator::alloc);
      Dictionary::Dictionary((Dictionary *)local_128);
      local_f8[0] = 0;
      Dictionary::Dictionary((Dictionary *)&uStack_f0,(Dictionary *)local_128);
      *puVar5 = 0;
      *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
      puVar5[0xc] = local_f8[0];
      *(undefined8 *)(puVar5 + 10) = 0;
      *(undefined1 (*) [16])(puVar5 + 6) = (undefined1  [16])0x0;
      Dictionary::Dictionary((Dictionary *)(puVar5 + 0xe),(Dictionary *)&uStack_f0);
      in_RSI[0x48] = (long)puVar5;
      Dictionary::~Dictionary((Dictionary *)&uStack_f0);
      Dictionary::~Dictionary((Dictionary *)local_128);
      puVar5 = (undefined4 *)in_RSI[0x48];
      lVar3 = in_RSI[0x49];
      *puVar5 = 1;
      *(long *)(puVar5 + 6) = lVar3;
      *(long *)(puVar5 + 2) = lVar3;
      *(long *)(puVar5 + 4) = lVar3;
    }
    lVar3 = RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_insert
                      ((RBMap<int,Dictionary,Comparator<int>,DefaultAllocator> *)(in_RSI + 0x48),
                       local_14c,(Dictionary *)&local_130);
    Dictionary::~Dictionary((Dictionary *)&local_130);
LAB_00105055:
    Dictionary::operator=((Dictionary *)(lVar3 + 0x38),local_140);
  }
  Dictionary::Dictionary(this,local_140);
  Dictionary::~Dictionary(local_140);
LAB_00105075:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001050b1:
  do {
    if (in_EDX < *(int *)(lVar4 + 0x30)) {
      lVar4 = *(long *)(lVar4 + 0x10);
    }
    else {
      if (in_EDX <= *(int *)(lVar4 + 0x30)) goto LAB_001050fa;
      lVar4 = *(long *)(lVar4 + 8);
    }
  } while (lVar3 != lVar4);
  Dictionary::Dictionary((Dictionary *)&local_130);
  if (in_RSI[0x48] == 0) {
    puVar5 = (undefined4 *)operator_new(0x40,DefaultAllocator::alloc);
    Dictionary::Dictionary((Dictionary *)local_128);
    local_f8[0] = 0;
    Dictionary::Dictionary((Dictionary *)&uStack_f0,(Dictionary *)local_128);
    *puVar5 = 0;
    *(undefined8 *)(puVar5 + 10) = 0;
    puVar5[0xc] = local_f8[0];
    *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar5 + 6) = (undefined1  [16])0x0;
    Dictionary::Dictionary((Dictionary *)(puVar5 + 0xe),(Dictionary *)&uStack_f0);
    in_RSI[0x48] = (long)puVar5;
    Dictionary::~Dictionary((Dictionary *)&uStack_f0);
    Dictionary::~Dictionary((Dictionary *)local_128);
    puVar5 = (undefined4 *)in_RSI[0x48];
    lVar3 = in_RSI[0x49];
    *puVar5 = 1;
    *(long *)(puVar5 + 6) = lVar3;
    *(long *)(puVar5 + 2) = lVar3;
    *(long *)(puVar5 + 4) = lVar3;
  }
  lVar4 = RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_insert
                    ((RBMap<int,Dictionary,Comparator<int>,DefaultAllocator> *)(in_RSI + 0x48),
                     local_14c,(Dictionary *)&local_130);
  Dictionary::~Dictionary((Dictionary *)&local_130);
LAB_001050fa:
  Dictionary::Dictionary(this,(Dictionary *)(lVar4 + 0x38));
  goto LAB_00105075;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CodeHighlighter::_get_line_syntax_highlighting_impl(int) */

Dictionary * CodeHighlighter::_get_line_syntax_highlighting_impl(int param_1)

{
  HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
  *this;
  ulong *puVar1;
  long lVar2;
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
  code *pcVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  char cVar28;
  char cVar29;
  undefined4 *puVar30;
  Variant *pVVar31;
  int *piVar32;
  long lVar33;
  ulong uVar34;
  int in_EDX;
  wchar32 wVar35;
  wchar32 wVar36;
  ulong uVar37;
  long lVar38;
  int *piVar39;
  uint uVar40;
  int iVar41;
  ulong uVar42;
  wchar32 wVar43;
  ulong uVar44;
  long in_RSI;
  Color *pCVar45;
  undefined4 in_register_0000003c;
  Dictionary *this_00;
  int iVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  bool bVar51;
  ulong uVar52;
  long in_FS_OFFSET;
  bool bVar53;
  bool bVar54;
  float fVar55;
  undefined1 auVar56 [16];
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  uint local_190;
  CowData<char32_t> *local_178;
  uint local_15c;
  int local_158;
  ulong local_150;
  float local_148;
  undefined1 local_128 [16];
  float local_118;
  float local_114;
  float local_f8;
  int local_bc [3];
  long local_b0;
  Dictionary local_a8 [8];
  uint local_a0 [2];
  undefined1 local_98 [8];
  undefined8 uStack_90;
  ulong local_88;
  undefined8 uStack_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  this_00 = (Dictionary *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_bc[0] = in_EDX;
  Dictionary::Dictionary(this_00);
  local_98._4_4_ = _UNK_00119de4;
  local_98._0_4_ = __LC107;
  uStack_90._4_4_ = __LC108;
  uStack_90._0_4_ = _UNK_00119de8;
  this = (HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
          *)(in_RSI + 0x2c0);
  puVar30 = (undefined4 *)
            HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
            ::operator[](this,local_bc);
  *puVar30 = 0xffffffff;
  if (local_bc[0] == 0) {
    TextEdit::get_line_with_ime((int)&local_b0);
    if ((local_b0 == 0) || (iVar41 = (int)*(undefined8 *)(local_b0 + -8), iVar41 == 0))
    goto LAB_00105a47;
    local_190 = iVar41 - 1;
    iVar41 = -1;
  }
  else {
    uVar40 = local_bc[0] - 1;
    lVar33 = *(long *)(in_RSI + 0x2c8);
    if (0 < (int)uVar40) {
      uVar49 = uVar40;
      if (lVar33 == 0) {
        do {
          uVar49 = uVar49 - 1;
        } while (uVar49 != 0);
        uVar50 = 0;
      }
      else {
        do {
          if (*(int *)(in_RSI + 0x2ec) != 0) {
            uVar42 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x2e8) * 8);
            uVar50 = (uVar49 >> 0x10 ^ uVar49) * -0x7a143595;
            uVar50 = (uVar50 ^ uVar50 >> 0xd) * -0x3d4d51cb;
            uVar48 = uVar50 ^ uVar50 >> 0x10;
            if (uVar50 == uVar50 >> 0x10) {
              uVar48 = 1;
              uVar37 = uVar42;
            }
            else {
              uVar37 = uVar48 * uVar42;
            }
            uVar52 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(in_RSI + 0x2e8) * 4));
            uVar47 = 0;
            auVar56._8_8_ = 0;
            auVar56._0_8_ = uVar52;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar37;
            lVar38 = SUB168(auVar56 * auVar11,8);
            uVar50 = *(uint *)(*(long *)(in_RSI + 0x2d0) + lVar38 * 4);
            iVar41 = SUB164(auVar56 * auVar11,8);
            if (uVar50 != 0) {
              do {
                if ((uVar50 == uVar48) &&
                   (uVar50 = *(uint *)(*(long *)(lVar33 + lVar38 * 8) + 0x10), uVar49 == uVar50)) {
                  if ((int)uVar40 <= (int)uVar49) goto LAB_00105bbf;
                  goto LAB_00105b7b;
                }
                uVar47 = uVar47 + 1;
                auVar4._8_8_ = 0;
                auVar4._0_8_ = (iVar41 + 1) * uVar42;
                auVar12._8_8_ = 0;
                auVar12._0_8_ = uVar52;
                lVar38 = SUB168(auVar4 * auVar12,8);
                uVar50 = *(uint *)(*(long *)(in_RSI + 0x2d0) + lVar38 * 4);
                iVar41 = SUB164(auVar4 * auVar12,8);
              } while ((uVar50 != 0) &&
                      (auVar5._8_8_ = 0, auVar5._0_8_ = uVar50 * uVar42, auVar13._8_8_ = 0,
                      auVar13._0_8_ = uVar52, auVar6._8_8_ = 0,
                      auVar6._0_8_ = ((*(uint *)(hash_table_size_primes +
                                                (ulong)*(uint *)(in_RSI + 0x2e8) * 4) + iVar41) -
                                     SUB164(auVar5 * auVar13,8)) * uVar42, auVar14._8_8_ = 0,
                      auVar14._0_8_ = uVar52, uVar47 <= SUB164(auVar6 * auVar14,8)));
            }
          }
          uVar49 = uVar49 - 1;
        } while (uVar49 != 0);
        uVar50 = 0;
      }
LAB_00105b7b:
      do {
        uVar50 = uVar50 + 1;
        SyntaxHighlighter::get_line_syntax_highlighting((int)(Dictionary *)local_a0);
        Dictionary::~Dictionary((Dictionary *)local_a0);
      } while (uVar40 != uVar50);
      lVar33 = *(long *)(in_RSI + 0x2c8);
    }
    if (lVar33 != 0) {
LAB_00105bbf:
      if (*(int *)(in_RSI + 0x2ec) != 0) {
        uVar42 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x2e8) * 8);
        uVar49 = (uVar40 >> 0x10 ^ uVar40) * -0x7a143595;
        uVar49 = (uVar49 ^ uVar49 >> 0xd) * -0x3d4d51cb;
        uVar50 = uVar49 ^ uVar49 >> 0x10;
        if (uVar49 == uVar49 >> 0x10) {
          uVar50 = 1;
          uVar37 = uVar42;
        }
        else {
          uVar37 = uVar50 * uVar42;
        }
        uVar52 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x2e8) * 4)
                         );
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar52;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar37;
        lVar38 = SUB168(auVar7 * auVar15,8);
        uVar49 = *(uint *)(*(long *)(in_RSI + 0x2d0) + lVar38 * 4);
        iVar41 = SUB164(auVar7 * auVar15,8);
        if (uVar49 != 0) {
          uVar48 = 0;
          do {
            if ((uVar49 == uVar50) && (uVar40 == *(uint *)(*(long *)(lVar33 + lVar38 * 8) + 0x10)))
            goto LAB_00106619;
            uVar48 = uVar48 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (iVar41 + 1) * uVar42;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar52;
            lVar38 = SUB168(auVar8 * auVar16,8);
            uVar49 = *(uint *)(*(long *)(in_RSI + 0x2d0) + lVar38 * 4);
            iVar41 = SUB164(auVar8 * auVar16,8);
          } while ((uVar49 != 0) &&
                  (auVar9._8_8_ = 0, auVar9._0_8_ = uVar49 * uVar42, auVar17._8_8_ = 0,
                  auVar17._0_8_ = uVar52, auVar10._8_8_ = 0,
                  auVar10._0_8_ =
                       ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x2e8) * 4) +
                        iVar41) - SUB164(auVar9 * auVar17,8)) * uVar42, auVar18._8_8_ = 0,
                  auVar18._0_8_ = uVar52, uVar48 <= SUB164(auVar10 * auVar18,8)));
        }
      }
    }
    SyntaxHighlighter::get_line_syntax_highlighting((int)(Dictionary *)local_a0);
    Dictionary::~Dictionary((Dictionary *)local_a0);
LAB_00106619:
    local_a0[0] = uVar40;
    piVar32 = (int *)HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                     ::operator[](this,(int *)local_a0);
    iVar41 = *piVar32;
    TextEdit::get_line_with_ime((int)&local_b0);
    if ((local_b0 == 0) || (uVar40 = (uint)*(undefined8 *)(local_b0 + -8), uVar40 == 0)) {
      if (iVar41 != -1) {
        piVar32 = (int *)HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                         ::operator[](this,local_bc);
        *piVar32 = iVar41;
      }
      goto LAB_00105a47;
    }
    local_190 = uVar40 - 1;
    if ((iVar41 != -1) && (uVar40 < 2)) {
      piVar32 = (int *)HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                       ::operator[](this,local_bc);
      *piVar32 = iVar41;
    }
  }
  local_178 = (CowData<char32_t> *)&local_b0;
  if (0 < (int)local_190) {
    bVar25 = false;
    local_128._4_4_ = _UNK_00119de4;
    local_128._0_4_ = __LC107;
    local_128._8_4_ = _UNK_00119de8;
    local_128._12_4_ = __LC108;
    uVar40 = 0;
    local_f8 = 1.0;
    local_118 = 0.0;
    local_150 = 0;
    local_114 = 0.0;
    local_148 = 0.0;
    bVar22 = false;
    bVar21 = false;
    bVar23 = false;
    bVar20 = false;
    bVar26 = false;
    bVar54 = false;
LAB_00105d69:
    uVar42 = (ulong)(int)uVar40;
    Dictionary::Dictionary(local_a8);
    _local_98 = *(undefined1 (*) [16])(in_RSI + 0x300);
    if (local_b0 == 0) {
      uVar37 = 0;
    }
    else {
      uVar37 = *(ulong *)(local_b0 + -8);
    }
    uVar52 = uVar42;
    if (uVar42 == uVar37) {
      wVar43 = (wchar32)String::_null;
      if ((wchar32)String::_null != L'_') {
LAB_00105dce:
        if ((uint)(wVar43 + L'\xffffffdf') < 0x40) {
          bVar51 = true;
          bVar53 = (0xfc000000fe007fffU >> ((ulong)(uint)(wVar43 + L'\xffffffdf') & 0x3f) & 1) == 0;
          if (bVar53) goto LAB_00106181;
        }
        else {
          bVar53 = false;
          bVar51 = true;
          if (3 < (uint)(wVar43 + L'\xffffff85')) {
LAB_00106181:
            bVar51 = wVar43 == L'\t' || wVar43 == L' ';
            bVar53 = wVar43 != L'\t' && wVar43 != L' ';
          }
        }
        if ((uVar42 != uVar37) && (((long)uVar37 <= (long)uVar42 || ((int)uVar40 < 0))))
        goto LAB_00106136;
        goto LAB_00105e03;
      }
      bVar27 = false;
      uVar49 = 0x2f;
      bVar51 = false;
      bVar53 = true;
    }
    else {
      if ((long)uVar37 <= (long)uVar42 || (int)uVar40 < 0) goto LAB_00106136;
      wVar43 = *(wchar32 *)(local_b0 + uVar42 * 4);
      bVar53 = true;
      bVar51 = false;
      if (wVar43 != L'_') goto LAB_00105dce;
LAB_00105e03:
      uVar49 = wVar43 + L'\xffffffd0';
      bVar27 = uVar49 < 10;
    }
    wVar43 = (wchar32)local_178;
    if (iVar41 != -1) {
      uVar52 = (ulong)iVar41;
      if ((long)uVar52 < 0) {
        lVar33 = *(long *)(in_RSI + 0x2b8);
        if (lVar33 != 0) {
LAB_00106fec:
          uVar37 = *(ulong *)(lVar33 + -8);
          goto LAB_00106136;
        }
      }
      else {
        lVar33 = *(long *)(in_RSI + 0x2b8);
        uVar50 = uVar40;
LAB_001062a7:
        if (lVar33 != 0) {
          if (*(long *)(lVar33 + -8) <= (long)uVar52) goto LAB_00106fec;
          lVar38 = uVar52 * 0x28;
          cVar28 = String::operator==((String *)(lVar33 + 0x10 + lVar38),"\"");
          if (cVar28 == '\0') {
            lVar33 = *(long *)(in_RSI + 0x2b8);
            if (lVar33 == 0) goto LAB_001067ed;
            uVar37 = *(ulong *)(lVar33 + -8);
            if ((long)uVar37 <= (long)uVar52) goto LAB_00106136;
            cVar28 = String::operator==((String *)(lVar33 + 0x10 + lVar38),"\'");
          }
          lVar33 = *(long *)(in_RSI + 0x2b8);
          if (lVar33 != 0) {
            uVar37 = *(ulong *)(lVar33 + -8);
            if ((long)uVar37 <= (long)uVar52) goto LAB_00106136;
            puVar1 = (ulong *)(lVar33 + uVar52 * 0x28);
            local_88 = *puVar1;
            uVar42 = puVar1[1];
            local_114 = (float)local_88;
            local_150 = local_88 >> 0x20;
            uStack_80._0_4_ = (float)uVar42;
            local_118 = (float)uStack_80;
            uStack_80._4_4_ = (float)(uVar42 >> 0x20);
            local_f8 = uStack_80._4_4_;
            uStack_80 = uVar42;
            Variant::Variant((Variant *)local_58,(Color *)&local_88);
            Variant::Variant((Variant *)local_78,"color");
            pVVar31 = (Variant *)Dictionary::operator[]((Variant *)local_a8);
            Variant::operator=(pVVar31,(Variant *)local_58);
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            Variant::Variant((Variant *)local_58,local_a8);
            Variant::Variant((Variant *)local_78,uVar40);
            pVVar31 = (Variant *)Dictionary::operator[]((Variant *)this_00);
            Variant::operator=(pVVar31,(Variant *)local_58);
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            lVar33 = *(long *)(in_RSI + 0x2b8);
            if (lVar33 != 0) {
              uVar37 = *(ulong *)(lVar33 + -8);
              if ((long)uVar52 < (long)uVar37) {
                lVar33 = *(long *)(lVar33 + lVar38 + 0x18);
                if (lVar33 == 0) {
                  local_158 = 0;
                }
                else {
                  iVar46 = (int)*(undefined8 *)(lVar33 + -8);
                  local_158 = iVar46 + -1 + (uint)(iVar46 == 0);
                }
                lVar33 = String::get_data();
joined_r0x001071dd:
                do {
                  if (((int)local_190 <= (int)uVar50) ||
                     (((int)(local_190 - uVar50) < local_158 &&
                      ((cVar28 == '\0' || (iVar46 = String::find_char(wVar43,0x5c), iVar46 < 0))))))
                  goto LAB_00106af5;
                  lVar38 = local_b0;
                  uVar52 = (ulong)(int)uVar50;
                  if (local_b0 == 0) {
                    uVar37 = 0;
                  }
                  else {
                    uVar37 = *(ulong *)(local_b0 + -8);
                  }
                  wVar36 = (wchar32)String::_null;
                  if (uVar52 != uVar37) {
                    if (((long)uVar37 <= (long)uVar52) || ((long)uVar52 < 0)) break;
                    wVar36 = *(wchar32 *)(local_b0 + uVar52 * 4);
                  }
                  cVar29 = is_symbol(wVar36);
                  if (cVar29 != '\0') {
                    if (wVar36 == L'\\') {
                      if (cVar28 == '\0') {
                        uVar50 = uVar50 + 2;
                      }
                      else {
                        Dictionary::Dictionary((Dictionary *)local_a0);
                        Variant::Variant((Variant *)local_58,(Color *)(in_RSI + 0x330));
                        Variant::Variant((Variant *)local_78,"color");
                        pVVar31 = (Variant *)Dictionary::operator[]((Variant *)local_a0);
                        Variant::operator=(pVVar31,(Variant *)local_58);
                        if (Variant::needs_deinit[local_78[0]] != '\0') {
                          Variant::_clear_internal();
                        }
                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                          Variant::_clear_internal();
                        }
                        Variant::Variant((Variant *)local_58,(Dictionary *)local_a0);
                        Variant::Variant((Variant *)local_78,uVar50);
                        pVVar31 = (Variant *)Dictionary::operator[]((Variant *)this_00);
                        Variant::operator=(pVVar31,(Variant *)local_58);
                        if (Variant::needs_deinit[local_78[0]] != '\0') {
                          Variant::_clear_internal();
                        }
                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                          Variant::_clear_internal();
                        }
                        Dictionary::~Dictionary((Dictionary *)local_a0);
                        Dictionary::Dictionary((Dictionary *)local_a0);
                        local_114 = (float)local_88;
                        local_150 = local_88 >> 0x20;
                        local_118 = (float)uStack_80;
                        local_f8 = uStack_80._4_4_;
                        Variant::Variant((Variant *)local_58,(Color *)&local_88);
                        Variant::Variant((Variant *)local_78,"color");
                        pVVar31 = (Variant *)Dictionary::operator[]((Variant *)local_a0);
                        Variant::operator=(pVVar31,(Variant *)local_58);
                        if (Variant::needs_deinit[local_78[0]] != '\0') {
                          Variant::_clear_internal();
                        }
                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                          Variant::_clear_internal();
                        }
                        uVar50 = uVar50 + 2;
                        Variant::Variant((Variant *)local_58,(Dictionary *)local_a0);
                        Variant::Variant((Variant *)local_78,uVar50);
                        pVVar31 = (Variant *)Dictionary::operator[]((Variant *)this_00);
                        Variant::operator=(pVVar31,(Variant *)local_58);
                        if (Variant::needs_deinit[local_78[0]] != '\0') {
                          Variant::_clear_internal();
                        }
                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                          Variant::_clear_internal();
                        }
                        Dictionary::~Dictionary((Dictionary *)local_a0);
                      }
                      goto joined_r0x001071dd;
                    }
                    if (0 < local_158) {
                      piVar32 = (int *)(lVar38 + uVar52 * 4);
                      uVar42 = (long)local_158 + uVar52;
                      lVar38 = uVar52 * -4;
                      do {
                        if (uVar37 == uVar52) {
                          piVar39 = (int *)&String::_null;
                        }
                        else if (((long)uVar37 <= (long)uVar52) ||
                                (piVar39 = piVar32, (long)uVar52 < 0)) goto LAB_00106136;
                        if (*(int *)(lVar33 + lVar38 + uVar52 * 4) != *piVar39) goto LAB_001071d2;
                        uVar52 = uVar52 + 1;
                        piVar32 = piVar32 + 1;
                      } while (uVar52 != uVar42);
                    }
                    if (uVar50 != 0xffffffff) goto LAB_00106b12;
                  }
LAB_001071d2:
                  uVar50 = uVar50 + 1;
                } while( true );
              }
              goto LAB_00106136;
            }
          }
        }
      }
LAB_001067ed:
      uVar37 = 0;
      goto LAB_00106136;
    }
    lVar33 = local_b0;
    if (bVar51) {
      uVar50 = uVar40;
      if ((int)uVar40 < (int)local_190) {
        piVar32 = (int *)(local_b0 + uVar42 * 4);
        do {
          if (uVar37 == uVar52) {
            piVar39 = (int *)&String::_null;
          }
          else if (((int)uVar50 < 0) || (piVar39 = piVar32, (long)uVar37 <= (long)uVar52))
          goto LAB_00106136;
          if (*piVar39 != 0x5c) break;
          uVar50 = uVar50 + 2;
          uVar52 = uVar52 + 2;
          piVar32 = piVar32 + 2;
        } while ((int)uVar50 < (int)local_190);
      }
      if ((local_190 != uVar50) && (lVar38 = *(long *)(in_RSI + 0x2b8), lVar38 != 0)) {
        uVar34 = (ulong)(int)uVar50;
        uVar44 = 0;
        do {
          if (*(long *)(lVar38 + -8) <= (long)uVar44) break;
          lVar2 = uVar44 * 0x28;
          lVar3 = *(long *)(lVar38 + lVar2 + 0x10);
          if (lVar3 == 0) {
            iVar41 = 0;
          }
          else {
            iVar41 = (int)*(undefined8 *)(lVar3 + -8);
            iVar41 = iVar41 + -1 + (uint)(iVar41 == 0);
          }
          lVar3 = *(long *)(lVar38 + lVar2 + 0x18);
          if (lVar3 == 0) {
            iVar46 = 0;
          }
          else {
            iVar46 = (int)*(undefined8 *)(lVar3 + -8);
            iVar46 = iVar46 + -1 + (uint)(iVar46 == 0);
          }
          if (iVar41 <= (int)(local_190 - uVar50)) {
            lVar33 = String::get_data();
            if (iVar41 < 1) {
LAB_00106d94:
              lVar33 = *(long *)(in_RSI + 0x2b8);
              uVar50 = iVar41 + uVar50;
              iVar41 = (int)uVar44;
              uVar52 = uVar44;
              if (iVar46 == 0) {
                if ((int)local_190 < (int)uVar50) {
                  if (lVar33 != 0) {
                    uVar37 = *(ulong *)(lVar33 + -8);
                    if ((long)uVar44 < (long)*(ulong *)(lVar33 + -8)) goto LAB_00106dec;
                    goto LAB_00106136;
                  }
                }
                else {
LAB_00106e5a:
                  if (lVar33 != 0) goto LAB_00106e63;
                }
              }
              else if (lVar33 != 0) {
                uVar37 = *(ulong *)(lVar33 + -8);
                if ((long)*(ulong *)(lVar33 + -8) <= (long)uVar44) goto LAB_00106136;
                if (*(char *)(lVar33 + 0x20 + lVar2) == '\0') {
                  if ((int)local_190 < (int)(iVar46 + uVar50)) goto LAB_00106dec;
LAB_001077dc:
                  uVar52 = (ulong)iVar41;
                  goto LAB_001062a7;
                }
                if ((int)local_190 < (int)(iVar46 + uVar50)) {
LAB_00106dec:
                  cVar28 = String::operator==((String *)(lVar33 + 0x10 + lVar2),"\"");
                  if (cVar28 == '\0') {
                    lVar33 = *(long *)(in_RSI + 0x2b8);
                    if (lVar33 == 0) goto LAB_00107b18;
                    uVar37 = *(ulong *)(lVar33 + -8);
                    if ((long)*(ulong *)(lVar33 + -8) <= (long)uVar44) goto LAB_00106136;
                    cVar28 = String::operator==((String *)(lVar33 + 0x10 + lVar2),"\'");
                    if (cVar28 != '\0') goto LAB_001077bb;
                  }
                  else {
LAB_001077bb:
                    iVar46 = String::find_char(wVar43,0x5c);
                    if (-1 < iVar46) {
                      lVar33 = *(long *)(in_RSI + 0x2b8);
                      goto LAB_001077dc;
                    }
                  }
                  lVar33 = *(long *)(in_RSI + 0x2b8);
                  goto LAB_00106e5a;
                }
LAB_00106e63:
                uVar37 = *(ulong *)(lVar33 + -8);
                if ((long)*(ulong *)(lVar33 + -8) <= (long)uVar44) goto LAB_00106136;
                pCVar45 = (Color *)(lVar33 + lVar2);
                local_114 = *(float *)pCVar45;
                local_118 = *(float *)(pCVar45 + 8);
                local_150 = (ulong)*(uint *)(pCVar45 + 4);
                local_f8 = *(float *)(pCVar45 + 0xc);
                Variant::Variant((Variant *)local_58,pCVar45);
                Variant::Variant((Variant *)local_78,"color");
                pVVar31 = (Variant *)Dictionary::operator[]((Variant *)local_a8);
                Variant::operator=(pVVar31,(Variant *)local_58);
                if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                Variant::Variant((Variant *)local_58,local_a8);
                Variant::Variant((Variant *)local_78,uVar40);
                pVVar31 = (Variant *)Dictionary::operator[]((Variant *)this_00);
                Variant::operator=(pVVar31,(Variant *)local_58);
                if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                lVar33 = *(long *)(in_RSI + 0x2b8);
                if (lVar33 != 0) {
                  uVar37 = *(ulong *)(lVar33 + -8);
                  if ((long)*(ulong *)(lVar33 + -8) <= (long)uVar44) goto LAB_00106136;
                  uVar40 = local_190;
                  bVar53 = bVar54;
                  if (*(char *)(lVar33 + 0x20 + lVar2) == '\0') {
                    piVar32 = (int *)HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                                     ::operator[](this,local_bc);
                    *piVar32 = iVar41;
                  }
                  goto LAB_00106b26;
                }
              }
LAB_00107b18:
              uVar37 = 0;
              goto LAB_00106136;
            }
            piVar32 = (int *)(uVar34 * 4 + local_b0);
            uVar52 = uVar34;
            while( true ) {
              if (local_b0 == 0) {
                uVar37 = 0;
              }
              else {
                uVar37 = *(ulong *)(local_b0 + -8);
              }
              if (uVar52 == uVar37) {
                piVar39 = (int *)&String::_null;
              }
              else if (((long)uVar37 <= (long)uVar52) || (piVar39 = piVar32, (int)uVar52 < 0))
              goto LAB_00106136;
              if (*(int *)(lVar33 + uVar34 * -4 + uVar52 * 4) != *piVar39) break;
              uVar52 = uVar52 + 1;
              piVar32 = piVar32 + 1;
              if (uVar52 == (long)iVar41 + uVar34) goto LAB_00106d94;
            }
            lVar38 = *(long *)(in_RSI + 0x2b8);
            lVar33 = local_b0;
          }
          uVar44 = uVar44 + 1;
        } while (lVar38 != 0);
      }
    }
    if (bVar25) {
      if (lVar33 == 0) {
        uVar37 = 0;
      }
      else {
        uVar37 = *(ulong *)(lVar33 + -8);
      }
      if (uVar42 == uVar37) {
        piVar32 = (int *)&String::_null;
      }
      else {
        uVar52 = uVar42;
        if (((int)uVar40 < 0) || ((long)uVar37 <= (long)uVar42)) goto LAB_00106136;
        piVar32 = (int *)(lVar33 + uVar42 * 4);
      }
      bVar27 = bVar25;
      if (((0x36 < *piVar32 - 0x30U) ||
          ((0x7e0000007e03ffU >> ((ulong)(*piVar32 - 0x30U) & 0x3f) & 1) == 0)) && (9 < uVar49)) {
        bVar27 = false;
        bVar25 = bVar27;
      }
    }
    wVar35 = (wchar32)String::_null;
    wVar36 = (wchar32)String::_null;
    if (lVar33 == 0) {
      uVar34 = 0;
      if (uVar40 != 0) goto LAB_00105e9c;
      if ((wchar32)String::_null != L'.') goto joined_r0x00105ec3;
LAB_001061cc:
      bVar24 = (bool)((bVar23 ^ 1U) & bVar26);
      if (!bVar24) goto LAB_00105ec9;
      if (bVar27) goto LAB_00106224;
      bVar27 = bVar24;
      if (lVar33 == 0) {
        uVar37 = 0;
        if (uVar40 != 0) goto LAB_001061fa;
        if (((wchar32)String::_null == L'x') || ((wchar32)String::_null == L'X')) {
          uVar52 = 0xffffffffffffffff;
          goto LAB_00106136;
        }
        bVar53 = false;
        bVar51 = false;
        uVar37 = 0;
        goto LAB_00106232;
      }
      uVar37 = *(ulong *)(lVar33 + -8);
      if (uVar42 != uVar37) {
LAB_001061fa:
        uVar52 = uVar42;
        if (((long)uVar37 <= (long)uVar42) || ((int)uVar40 < 0)) goto LAB_00106136;
        if ((*(uint *)(lVar33 + uVar42 * 4) & 0xffffffdf) != 0x58) {
          bVar51 = false;
          bVar53 = false;
          goto LAB_00106224;
        }
LAB_00106b52:
        uVar52 = (ulong)(int)(uVar40 - 1);
        if (uVar52 == uVar37) {
          piVar32 = (int *)&String::_null;
        }
        else {
          if (((long)uVar37 <= (long)uVar52) || ((int)(uVar40 - 1) < 0)) goto LAB_00106136;
          piVar32 = (int *)(lVar33 + uVar52 * 4);
        }
        bVar51 = false;
        bVar53 = false;
        if (*piVar32 == 0x30) {
          bVar25 = bVar24;
        }
        goto LAB_00106224;
      }
      if (((wchar32)String::_null & 0xffffffdfU) == 0x58) goto LAB_00106b52;
      bVar53 = false;
      bVar51 = false;
LAB_00106254:
      if ((((uint)((wVar36 & 0xffffffdfU) - 0x41U) < 0x1a) || (wVar36 == L'_')) && (!bVar24)) {
        bVar23 = true;
        goto LAB_00105ed4;
      }
      bVar23 = false;
      bVar26 = bVar24;
      if (bVar20) goto LAB_00105ed4;
    }
    else {
      uVar34 = *(ulong *)(lVar33 + -8);
      if (uVar42 != uVar34) {
LAB_00105e9c:
        uVar52 = uVar42;
        uVar37 = uVar34;
        if (((long)uVar34 <= (long)uVar42) || ((int)uVar40 < 0)) goto LAB_00106136;
        wVar35 = *(wchar32 *)(lVar33 + uVar42 * 4);
      }
      if (wVar35 == L'.') goto LAB_001061cc;
joined_r0x00105ec3:
      if (((uint)(wVar35 + L'\xffffffbb') < 0x34) &&
         (((0xfff7fffcfbf7fffeU >> ((ulong)(uint)(wVar35 + L'\xffffffbb') & 0x3f) & 1) == 0 ||
          ((*(char *)(in_RSI + 0x350) != '\0' && (wVar35 == L'u')))))) goto LAB_001061cc;
LAB_00105ec9:
      bVar24 = bVar27;
      if (!bVar23) {
LAB_00106224:
        bVar24 = bVar27;
        if (lVar33 == 0) {
          uVar37 = 0;
        }
        else {
          uVar37 = *(ulong *)(lVar33 + -8);
        }
LAB_00106232:
        if (uVar42 != uVar37) {
          uVar52 = uVar42;
          if (((long)uVar37 <= (long)uVar42) || ((int)uVar40 < 0)) goto LAB_00106136;
          wVar36 = *(wchar32 *)(lVar33 + uVar42 * 4);
        }
        goto LAB_00106254;
      }
LAB_00105ed4:
      bVar26 = false;
      if (bVar25) {
        bVar26 = bVar24;
      }
    }
    uVar37 = uVar34;
    bVar27 = bVar22;
    if (bVar51) {
      if ((uVar34 != uVar42) &&
         ((uVar52 = uVar42, (long)uVar34 <= (long)uVar42 || ((int)uVar40 < 0)))) goto LAB_00106136;
      if (wVar35 == L'.') goto LAB_00106810;
      if (!bVar53) {
        bVar23 = (bool)(bVar21 | bVar22);
        if (bVar23) {
          bVar23 = false;
          goto LAB_0010719a;
        }
        bVar20 = false;
        goto LAB_0010685a;
      }
      if (!bVar20) {
        bVar23 = false;
        if (!bVar54) goto LAB_00105f2f;
        goto LAB_00106844;
      }
      bVar54 = (bool)(bVar21 | bVar22);
      if (!bVar54) {
        bVar23 = false;
        bVar27 = false;
        local_1b8 = local_148;
        goto LAB_001060ec;
      }
      bVar23 = false;
LAB_00107362:
      if (!bVar54) goto LAB_0010719a;
      bVar27 = false;
      bVar54 = false;
      local_1b8 = local_148;
LAB_001060ec:
      bVar20 = true;
      _local_98 = local_128;
      local_148 = local_1b8;
      bVar51 = bVar23;
    }
    else {
LAB_00106810:
      if (bVar53) {
        if (bVar20) {
          if ((bVar21) || (local_1b8 = local_148, !bVar23)) {
            bVar54 = (bool)(bVar21 | bVar22);
            if (!bVar54) goto LAB_00107223;
            goto LAB_00106bbf;
          }
        }
        else {
          if (bVar54) goto LAB_0010682e;
LAB_00105f2f:
          if ((int)uVar40 < (int)local_190) {
            piVar32 = (int *)(lVar33 + uVar42 * 4);
            uVar52 = uVar42;
            uVar49 = uVar40;
            do {
              if (uVar34 == uVar52) {
                piVar39 = (int *)&String::_null;
              }
              else if (((long)uVar34 <= (long)uVar52) || (piVar39 = piVar32, (int)uVar49 < 0))
              goto LAB_00106136;
              iVar41 = *piVar39;
              if ((iVar41 != 0x5f) &&
                 (((iVar41 - 0x5bU < 6 || (iVar41 - 0x7bU < 4)) ||
                  ((iVar41 - 9U < 0x38 &&
                   ((0xff01ff80007ffffeU >> ((ulong)(iVar41 - 9U) & 0x3f) & 1) == 0)))))) break;
              uVar49 = uVar49 + 1;
              uVar52 = uVar52 + 1;
              piVar32 = piVar32 + 1;
            } while (uVar49 != local_190);
          }
          String::substr((int)(String *)local_a0,wVar43);
          Variant::Variant((Variant *)local_58,(String *)local_a0);
          cVar28 = Dictionary::has((Variant *)(in_RSI + 0x2f0));
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (cVar28 == '\0') {
            Variant::Variant((Variant *)local_58,(String *)local_a0);
            cVar28 = Dictionary::has((Variant *)(in_RSI + 0x2f8));
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            local_1b8 = 0.0;
            fVar55 = __LC107;
            fStack_1b4 = _UNK_00119de4;
            fStack_1b0 = _UNK_00119de8;
            fStack_1ac = __LC108;
            if (cVar28 != '\0') {
              Variant::Variant((Variant *)local_58,(String *)local_a0);
              pVVar31 = (Variant *)Dictionary::operator[]((Variant *)(in_RSI + 0x2f8));
              auVar56 = Variant::operator_cast_to_Color(pVVar31);
              local_1b8 = auVar56._0_4_;
              fStack_1b4 = auVar56._4_4_;
              fStack_1b0 = auVar56._8_4_;
              fStack_1ac = auVar56._12_4_;
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (-1 < (int)(uVar40 - 1)) {
                uVar52 = (ulong)(int)(uVar40 - 1);
                do {
                  if (local_b0 == 0) {
                    if ((int)uVar52 != 0) {
                      uVar37 = 0;
                      goto LAB_00106136;
                    }
                  }
                  else {
                    uVar37 = *(ulong *)(local_b0 + -8);
                    while (uVar52 != uVar37) {
                      if ((long)uVar37 <= (long)uVar52) goto LAB_00106136;
                      uVar49 = *(uint *)(local_b0 + uVar52 * 4);
                      if (uVar49 == 0x2e) goto LAB_00107054;
                      if ((0x20 < uVar49) || (uVar52 = uVar52 - 1, (int)uVar52 < 0))
                      goto LAB_00106075;
                    }
                  }
                  if ((wchar32)String::_null == L'.') goto LAB_00107054;
                } while (((uint)(wchar32)String::_null < 0x21) &&
                        (uVar52 = uVar52 - 1, -1 < (int)uVar52));
              }
              goto LAB_00106075;
            }
LAB_0010703a:
            if (fStack_1ac == __LC108) {
LAB_00107054:
              CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
              bVar20 = (bool)((bVar21 ^ 1U) & bVar23);
              lVar33 = local_b0;
              if (bVar20) goto LAB_00107095;
              goto LAB_00106844;
            }
          }
          else {
            Variant::Variant((Variant *)local_58,(String *)local_a0);
            pVVar31 = (Variant *)Dictionary::operator[]((Variant *)(in_RSI + 0x2f0));
            auVar56 = Variant::operator_cast_to_Color(pVVar31);
            local_1b8 = auVar56._0_4_;
            fStack_1b4 = auVar56._4_4_;
            fStack_1b0 = auVar56._8_4_;
            fStack_1ac = auVar56._12_4_;
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
LAB_00106075:
            fVar55 = local_1b8;
            if (((local_1b8 == 0.0) && (fStack_1b4 == 0.0)) && (fStack_1b0 == 0.0))
            goto LAB_0010703a;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
          if ((bVar21) || (!bVar23)) {
            local_128._8_8_ = CONCAT44(fStack_1ac,fStack_1b0);
            local_128._0_8_ = CONCAT44(fStack_1b4,fVar55);
            local_148 = local_1b8;
            bVar20 = true;
            goto LAB_00106844;
          }
          local_128._8_8_ = CONCAT44(fStack_1ac,fStack_1b0);
          local_128._0_8_ = CONCAT44(fStack_1b4,fVar55);
        }
        if (bVar22) {
          bVar54 = false;
          bVar27 = (bool)(bVar51 ^ 1);
          bVar23 = bVar22;
        }
        else {
          bVar54 = false;
          bVar23 = true;
        }
        goto LAB_001060ec;
      }
LAB_0010682e:
      bVar20 = (bool)((bVar21 ^ 1U) & bVar23);
      if (bVar20) {
LAB_00107095:
        uVar49 = uVar40;
        if ((int)uVar40 < (int)local_190) {
          uVar34 = (ulong)uVar40;
          uVar52 = uVar42;
          wVar43 = (wchar32)String::_null;
          while( true ) {
            if (lVar33 == 0) {
              uVar37 = 0;
            }
            else {
              uVar37 = *(ulong *)(lVar33 + -8);
            }
            uVar49 = (uint)uVar34;
            iVar41 = (int)uVar52;
            String::_null._0_4_ = wVar43;
            if (uVar52 == uVar37) {
              cVar28 = is_symbol(wVar43);
              if ((wVar43 == L'\t') || (cVar28 == '\x01')) goto LAB_00107482;
            }
            else {
              if (((long)uVar37 <= (long)uVar52) || (iVar41 < 0)) goto LAB_00106136;
              wVar43 = *(wchar32 *)(lVar33 + uVar52 * 4);
              cVar28 = is_symbol(wVar43);
              if ((cVar28 != '\0') || (wVar43 == L'\t')) {
                if ((int)uVar49 < (int)local_190) goto LAB_0010748a;
                uVar52 = (ulong)(int)uVar49;
                goto LAB_001074fa;
              }
            }
            if (wVar43 == L' ') goto LAB_00107482;
            uVar52 = uVar52 + 1;
            if ((int)local_190 <= (int)uVar52) break;
            uVar34 = uVar52 & 0xffffffff;
            wVar43 = (wchar32)String::_null;
          }
          uVar49 = iVar41 + 1;
LAB_00107482:
          if ((int)uVar49 < (int)local_190) {
LAB_0010748a:
            uVar52 = (ulong)(int)uVar49;
            lVar38 = uVar37 - uVar52;
            bVar54 = uVar37 == uVar52;
            wVar43 = (wchar32)String::_null;
            uVar34 = uVar52;
            if (bVar54) goto joined_r0x001074a7;
            while ((!bVar54 && SBORROW8(uVar37,uVar52) == lVar38 < 0 && (-1 < (int)uVar52))) {
              wVar43 = *(wchar32 *)(lVar33 + uVar52 * 4);
              uVar34 = uVar52;
joined_r0x001074a7:
              do {
                if ((wVar43 != L'\t') && (wVar43 != L' ')) {
LAB_00107dab:
                  uVar49 = (uint)uVar34;
                  uVar52 = (ulong)(int)uVar49;
                  if (lVar33 != 0) goto LAB_001074fa;
                  uVar37 = 0;
                  goto LAB_001074ff;
                }
                uVar52 = uVar34 + 1;
                if ((int)local_190 <= (int)uVar52) {
                  uVar34 = (ulong)((int)uVar34 + 1);
                  goto LAB_00107dab;
                }
                lVar38 = uVar37 - uVar52;
                bVar54 = lVar38 == 0;
                wVar43 = (wchar32)String::_null;
                uVar34 = uVar52;
              } while (bVar54);
            }
            goto LAB_00106136;
          }
        }
        uVar52 = (ulong)(int)uVar49;
        if (lVar33 == 0) goto LAB_001067ed;
LAB_001074fa:
        uVar37 = *(ulong *)(lVar33 + -8);
LAB_001074ff:
        if (uVar52 == uVar37) {
          piVar32 = (int *)&String::_null;
        }
        else {
          if (((long)uVar37 <= (long)uVar52) || ((int)uVar49 < 0)) goto LAB_00106136;
          piVar32 = (int *)(lVar33 + uVar52 * 4);
        }
        if (*piVar32 == 0x28) {
          bVar23 = bVar51;
          if (bVar51) goto LAB_0010719a;
          bVar54 = bVar22;
          bVar51 = bVar22;
          if (bVar22) goto LAB_00106bde;
          bVar51 = true;
LAB_00107ced:
          _local_98 = *(undefined1 (*) [16])(in_RSI + 800);
          bVar20 = false;
          bVar27 = false;
          bVar54 = true;
          local_1b8 = (float)local_98._0_4_;
        }
        else if (bVar22) {
          bVar23 = bVar51;
          if (bVar51) goto LAB_0010719a;
          bVar54 = false;
          bVar51 = bVar22;
LAB_00106bde:
          bVar20 = false;
          bVar27 = true;
          local_1b8 = (float)*(undefined8 *)*(undefined1 (*) [16])(in_RSI + 0x310);
          _local_98 = *(undefined1 (*) [16])(in_RSI + 0x310);
        }
        else {
          if (!bVar26) goto LAB_00107840;
          bVar54 = bVar26;
          bVar23 = bVar51;
          if (bVar51) goto LAB_0010719a;
LAB_0010754b:
          bVar51 = bVar54;
          bVar20 = false;
          bVar27 = false;
          local_98._0_4_ = SUB124(*(undefined1 (*) [12])*(undefined1 (*) [16])(in_RSI + 0x340),0);
          bVar54 = false;
          local_1b8 = (float)local_98._0_4_;
          _local_98 = *(undefined1 (*) [16])(in_RSI + 0x340);
        }
      }
      else {
LAB_00106844:
        bVar54 = bVar20;
        if ((bVar21) || (bVar22)) {
LAB_00106bbf:
          if (bVar51) goto LAB_00107362;
          if (bVar54) {
            local_1b8 = local_148;
            bVar54 = bVar21;
            goto LAB_001060ec;
          }
          bVar54 = bVar21;
          bVar51 = bVar23;
          if (bVar22) goto LAB_00106bde;
          if (bVar21) goto LAB_00107ced;
LAB_00107397:
          bVar54 = bVar51;
          if (bVar26) goto LAB_0010754b;
          bVar20 = false;
          bVar27 = false;
          bVar54 = false;
          local_1b8 = (float)local_98._0_4_;
        }
        else {
LAB_0010685a:
          if ((bVar26) || (bVar20)) {
LAB_00107223:
            if (bVar51) {
              if (!bVar20) goto LAB_0010719a;
              local_1b8 = local_148;
              bVar54 = false;
              bVar27 = false;
            }
            else {
              bVar51 = bVar23;
              if (!bVar20) goto LAB_00107397;
              local_1b8 = local_148;
              bVar54 = false;
              bVar27 = false;
            }
            goto LAB_001060ec;
          }
          lVar33 = local_b0;
          if (bVar23) {
LAB_00107840:
            wVar43 = (wchar32)String::_null;
            if ((int)uVar40 < 1) {
              uVar37 = 0;
              uVar52 = uVar42;
              uVar49 = uVar40;
              if (lVar33 != 0) {
                uVar37 = *(ulong *)(lVar33 + -8);
              }
            }
            else {
              if (lVar33 == 0) {
                uVar37 = 0;
                uVar52 = uVar42;
                goto LAB_00106136;
              }
              uVar37 = *(ulong *)(lVar33 + -8);
              bVar54 = (wchar32)String::_null == L'\t';
              uVar34 = (ulong)uVar40;
              uVar52 = uVar42;
              local_15c = uVar40;
              while( true ) {
                uVar49 = (uint)uVar34;
                if (uVar52 == uVar37) {
                  cVar28 = is_symbol(wVar43);
                  if ((cVar28 == '\x01') || (wVar36 = wVar43, bVar54)) goto LAB_0010792d;
                }
                else {
                  if ((long)uVar37 <= (long)uVar52) goto LAB_00106136;
                  wVar36 = *(wchar32 *)(lVar33 + uVar52 * 4);
                  cVar28 = is_symbol(wVar36);
                  if ((wVar36 == L'\t') || (cVar28 == '\x01')) goto LAB_0010792d;
                }
                if (wVar36 == L' ') goto LAB_0010792d;
                uVar52 = uVar52 - 1;
                if ((int)(uint)uVar52 < 1) break;
                uVar34 = uVar52 & 0xffffffff;
                local_15c = (uint)uVar52;
              }
              uVar52 = (long)(int)(local_15c - 1);
              uVar49 = local_15c - 1;
            }
LAB_0010792d:
            if (uVar52 == uVar37) {
              piVar32 = (int *)&String::_null;
            }
            else {
              if (((long)uVar37 <= (long)uVar52) || ((int)uVar49 < 0)) {
LAB_00106136:
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,uVar52,uVar37,"p_index","size()",
                           "",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar19 = (code *)invalidInstructionException();
                (*pcVar19)();
              }
              piVar32 = (int *)(lVar33 + (long)(int)uVar49 * 4);
            }
            if (*piVar32 == 0x2e) {
              bVar23 = bVar51;
              if (!bVar51) {
                bVar54 = false;
                bVar51 = true;
                goto LAB_00106bde;
              }
            }
            else {
              bVar23 = bVar51;
              if (!bVar51) {
                bVar51 = true;
                goto LAB_00106884;
              }
            }
          }
          else if (!bVar51) {
LAB_00106884:
            bVar20 = false;
            bVar27 = false;
            bVar54 = false;
            local_1b8 = (float)local_98._0_4_;
            goto LAB_001068a6;
          }
LAB_0010719a:
          bVar51 = bVar23;
          bVar20 = false;
          bVar27 = false;
          bVar54 = false;
          local_1b8 = (float)*(undefined8 *)*(undefined1 (*) [16])(in_RSI + 0x330);
          _local_98 = *(undefined1 (*) [16])(in_RSI + 0x330);
        }
      }
    }
LAB_001068a6:
    if ((((local_114 != local_1b8) || ((float)local_150 != (float)local_98._4_4_)) ||
        (local_118 != (float)uStack_90)) || (local_f8 != uStack_90._4_4_)) {
      local_150 = (ulong)(uint)local_98._4_4_;
      local_118 = (float)uStack_90;
      local_f8 = uStack_90._4_4_;
      Variant::Variant((Variant *)local_58,(Color *)local_98);
      Variant::Variant((Variant *)local_78,"color");
      pVVar31 = (Variant *)Dictionary::operator[]((Variant *)local_a8);
      Variant::operator=(pVVar31,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,local_a8);
      Variant::Variant((Variant *)local_78,uVar40);
      pVVar31 = (Variant *)Dictionary::operator[]((Variant *)this_00);
      Variant::operator=(pVVar31,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_114 = local_1b8;
    }
    Dictionary::~Dictionary(local_a8);
    iVar41 = -1;
    bVar21 = bVar54;
    bVar23 = bVar51;
    bVar22 = bVar27;
    goto LAB_00106a46;
  }
LAB_00105a47:
  local_178 = (CowData<char32_t> *)&local_b0;
  CowData<char32_t>::_unref(local_178);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
LAB_00106af5:
  piVar32 = (int *)HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                   ::operator[](this,local_bc);
  *piVar32 = iVar41;
LAB_00106b12:
  iVar41 = -1;
  bVar26 = false;
  uVar40 = (uVar50 - 1) + local_158;
  bVar53 = false;
LAB_00106b26:
  Dictionary::~Dictionary(local_a8);
LAB_00106a46:
  uVar40 = uVar40 + 1;
  bVar54 = bVar53;
  if ((int)local_190 <= (int)uVar40) goto LAB_00105a47;
  goto LAB_00105d69;
}



/* SyntaxHighlighter::_lines_edited_from(int, int) */

void __thiscall
SyntaxHighlighter::_lines_edited_from(SyntaxHighlighter *this,int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  Element *pEVar4;
  Element *pEVar5;
  int iVar6;
  Element *pEVar7;
  long lVar8;
  
  if (*(int *)(this + 0x250) < 1) {
    return;
  }
  lVar8 = *(long *)(this + 0x240);
  if (lVar8 != 0) {
    pEVar5 = *(Element **)(this + 0x248);
    pEVar7 = *(Element **)(lVar8 + 0x10);
    if (*(Element **)(lVar8 + 0x10) != pEVar5) {
      do {
        pEVar4 = pEVar7;
        pEVar7 = *(Element **)(pEVar4 + 8);
      } while (pEVar5 != pEVar7);
      iVar1 = *(int *)(pEVar4 + 0x30);
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      iVar6 = param_1 + -1;
      if (iVar1 < iVar6) {
        return;
      }
LAB_00107f58:
      if (lVar8 != 0) {
        pEVar7 = *(Element **)(lVar8 + 0x10);
        for (pEVar4 = pEVar7; pEVar5 != pEVar4; pEVar4 = *(Element **)(pEVar4 + 0x10)) {
          while (*(int *)(pEVar4 + 0x30) <= iVar6) {
            if (iVar6 <= *(int *)(pEVar4 + 0x30)) goto LAB_00107fb1;
            pEVar4 = *(Element **)(pEVar4 + 8);
            if (pEVar5 == pEVar4) goto joined_r0x00108004;
          }
        }
      }
      goto joined_r0x00108004;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
LAB_00107fb1:
  do {
    if (iVar6 < *(int *)(pEVar7 + 0x30)) {
      pEVar7 = *(Element **)(pEVar7 + 0x10);
    }
    else {
      if (iVar6 <= *(int *)(pEVar7 + 0x30)) {
        RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_erase
                  ((RBMap<int,Dictionary,Comparator<int>,DefaultAllocator> *)(this + 0x240),pEVar7);
        if ((*(int *)(this + 0x250) == 0) &&
           (pvVar2 = *(void **)(this + 0x240), pvVar2 != (void *)0x0)) {
          Dictionary::~Dictionary((Dictionary *)((long)pvVar2 + 0x38));
          Memory::free_static(pvVar2,false);
          *(undefined8 *)(this + 0x240) = 0;
        }
        break;
      }
      pEVar7 = *(Element **)(pEVar7 + 8);
    }
  } while (pEVar5 != pEVar7);
joined_r0x00108004:
  if (iVar1 < iVar6 + 1) {
    return;
  }
  iVar6 = iVar6 + 1;
  lVar8 = *(long *)(this + 0x240);
  pEVar5 = *(Element **)(this + 0x248);
  goto LAB_00107f58;
}



/* CowData<CodeHighlighter::ColorRegion>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<CodeHighlighter::ColorRegion>::_copy_on_write(CowData<CodeHighlighter::ColorRegion> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar8 = 0x10;
  if (lVar1 * 0x28 != 0) {
    uVar8 = lVar1 * 0x28 - 1;
    uVar8 = uVar8 | uVar8 >> 1;
    uVar8 = uVar8 | uVar8 >> 2;
    uVar8 = uVar8 | uVar8 >> 4;
    uVar8 = uVar8 | uVar8 >> 8;
    uVar8 = uVar8 | uVar8 >> 0x10;
    uVar8 = (uVar8 | uVar8 >> 0x20) + 0x11;
  }
  puVar6 = (undefined8 *)Memory::alloc_static(uVar8,false);
  if (puVar6 != (undefined8 *)0x0) {
    lVar10 = 0;
    *puVar6 = 1;
    puVar6[1] = lVar1;
    puVar7 = puVar6 + 2;
    if (lVar1 != 0) {
      do {
        puVar9 = (undefined8 *)((long)puVar7 + *(long *)this + (-0x10 - (long)puVar6));
        uVar4 = *puVar9;
        uVar5 = puVar9[1];
        puVar7[2] = 0;
        lVar2 = puVar9[2];
        *puVar7 = uVar4;
        puVar7[1] = uVar5;
        if (lVar2 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 2),(CowData *)(puVar9 + 2));
        }
        puVar7[3] = 0;
        if (puVar9[3] != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 3),(CowData *)(puVar9 + 3));
        }
        lVar10 = lVar10 + 1;
        *(undefined1 *)(puVar7 + 4) = *(undefined1 *)(puVar9 + 4);
        puVar7 = puVar7 + 5;
      } while (lVar1 != lVar10);
    }
    _unref(this);
    *(undefined8 **)this = puVar6 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CodeHighlighter::clear_color_regions() */

void __thiscall CodeHighlighter::clear_color_regions(CodeHighlighter *this)

{
  if ((*(long *)(this + 0x2b8) != 0) && (*(long *)(*(long *)(this + 0x2b8) + -8) != 0)) {
    CowData<CodeHighlighter::ColorRegion>::_unref
              ((CowData<CodeHighlighter::ColorRegion> *)(this + 0x2b8));
  }
  SyntaxHighlighter::clear_highlighting_cache((SyntaxHighlighter *)this);
  return;
}



/* CodeHighlighter::remove_color_region(String const&) */

void __thiscall CodeHighlighter::remove_color_region(CodeHighlighter *this,String *param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = 0;
  lVar5 = *(long *)(this + 0x2b8);
  while( true ) {
    if ((lVar5 == 0) || (*(long *)(lVar5 + -8) <= lVar6)) goto LAB_0010821b;
    cVar2 = String::operator==((String *)(lVar5 + 0x10 + lVar6 * 0x28),param_1);
    if (cVar2 != '\0') break;
    lVar5 = *(long *)(this + 0x2b8);
    lVar6 = lVar6 + 1;
  }
  if (*(long *)(this + 0x2b8) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)(this + 0x2b8) + -8);
    if (lVar6 < lVar5) {
      CowData<CodeHighlighter::ColorRegion>::_copy_on_write
                ((CowData<CodeHighlighter::ColorRegion> *)(this + 0x2b8));
      lVar5 = *(long *)(this + 0x2b8);
      if (lVar5 == 0) {
        lVar7 = -1;
      }
      else {
        lVar7 = *(long *)(lVar5 + -8) + -1;
        if (lVar6 < lVar7) {
          puVar4 = (undefined8 *)(lVar6 * 0x28 + lVar5);
          do {
            lVar5 = puVar4[2];
            lVar3 = puVar4[7];
            *puVar4 = puVar4[5];
            puVar4[1] = puVar4[6];
            if (lVar5 != lVar3) {
              if (lVar5 != 0) {
                LOCK();
                plVar1 = (long *)(lVar5 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar5 = puVar4[2];
                  puVar4[2] = 0;
                  Memory::free_static((void *)(lVar5 + -0x10),false);
                }
                lVar3 = puVar4[7];
              }
              puVar4[2] = lVar3;
              puVar4[7] = 0;
            }
            lVar5 = puVar4[3];
            lVar3 = puVar4[8];
            if (lVar5 != lVar3) {
              if (lVar5 != 0) {
                LOCK();
                plVar1 = (long *)(lVar5 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar5 = puVar4[3];
                  puVar4[3] = 0;
                  Memory::free_static((void *)(lVar5 + -0x10),false);
                }
                lVar3 = puVar4[8];
              }
              puVar4[3] = lVar3;
              puVar4[8] = 0;
            }
            lVar6 = lVar6 + 1;
            *(undefined1 *)(puVar4 + 4) = *(undefined1 *)(puVar4 + 9);
            puVar4 = puVar4 + 5;
          } while (lVar6 != lVar7);
        }
      }
      CowData<CodeHighlighter::ColorRegion>::resize<false>
                ((CowData<CodeHighlighter::ColorRegion> *)(this + 0x2b8),lVar7);
      SyntaxHighlighter::clear_highlighting_cache((SyntaxHighlighter *)this);
      return;
    }
  }
  _err_print_index_error
            ("remove_at","./core/templates/cowdata.h",0xe4,lVar6,lVar5,"p_index","size()","",false,
             false);
LAB_0010821b:
  SyntaxHighlighter::clear_highlighting_cache((SyntaxHighlighter *)this);
  return;
}



/* CodeHighlighter::add_color_region(String const&, String const&, Color const&, bool) */

void __thiscall
CodeHighlighter::add_color_region
          (CodeHighlighter *this,String *param_1,String *param_2,Color *param_3,bool param_4)

{
  undefined8 *puVar1;
  CowData<char32_t> *this_00;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  ulong uVar7;
  CowData<char32_t> *this_01;
  long lVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  long in_FS_OFFSET;
  bool bVar16;
  byte local_c0;
  CowData<char32_t> local_b8 [8];
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  CowData<char32_t> local_88 [8];
  int *piStack_80;
  undefined1 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  long local_40;
  
  piVar9 = *(int **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (piVar9 != (int *)0x0) {
    uVar7 = *(ulong *)(piVar9 + -2);
    if ((int)uVar7 != 0) {
      piVar5 = piVar9;
      for (uVar13 = 0; (int)uVar13 < (int)uVar7 + -1; uVar13 = uVar13 + 1) {
        if (uVar7 == uVar13) {
          piVar6 = (int *)&String::_null;
        }
        else {
          piVar6 = piVar5;
          if ((long)uVar7 <= (long)uVar13) goto LAB_00108603;
        }
        iVar14 = *piVar6;
        if (iVar14 == 0x5f) {
LAB_00108686:
          _err_print_error("add_color_region","scene/resources/syntax_highlighter.cpp",0x1ec,
                           "Condition \"!is_symbol(p_start_key[i])\" is true.",
                           "color regions must start with a symbol",0,0);
          goto LAB_001085b8;
        }
        if (iVar14 - 0x21U < 0x40) {
          if ((0xfc000000fe007fffU >> ((ulong)(iVar14 - 0x21U) & 0x3f) & 1) == 0) goto LAB_00108686;
        }
        else if (((3 < iVar14 - 0x7bU) && (iVar14 != 9)) && (iVar14 != 0x20)) goto LAB_00108686;
        piVar5 = piVar5 + 1;
      }
    }
  }
  piVar5 = *(int **)param_2;
  if (piVar5 != (int *)0x0) {
    uVar7 = *(ulong *)(piVar5 + -2);
    if (1 < (int)uVar7) {
      uVar13 = 0;
      do {
        if (uVar7 == uVar13) {
          piVar6 = (int *)&String::_null;
        }
        else {
          piVar6 = piVar5;
          if ((long)uVar7 <= (long)uVar13) goto LAB_00108603;
        }
        iVar14 = *piVar6;
        if (iVar14 == 0x5f) {
LAB_00108720:
          _err_print_error("add_color_region","scene/resources/syntax_highlighter.cpp",0x1f1,
                           "Condition \"!is_symbol(p_end_key[i])\" is true.",
                           "color regions must end with a symbol",0,0);
          goto LAB_001085b8;
        }
        if (iVar14 - 0x21U < 0x40) {
          if ((0xfc000000fe007fffU >> ((ulong)(iVar14 - 0x21U) & 0x3f) & 1) == 0) goto LAB_00108720;
        }
        else if (((3 < iVar14 - 0x7bU) && (iVar14 != 9)) && (iVar14 != 0x20)) goto LAB_00108720;
        piVar5 = piVar5 + 1;
        bVar16 = uVar13 != (int)uVar7 - 2;
        uVar13 = uVar13 + 1;
      } while (bVar16);
    }
  }
  lVar15 = *(long *)(this + 0x2b8);
  if (lVar15 == 0) {
    local_c0 = 0;
    lVar15 = 0;
    iVar14 = 0;
  }
  else {
    uVar7 = *(ulong *)(lVar15 + -8);
    iVar14 = 0;
    for (uVar13 = 0; (long)uVar13 < (long)uVar7; uVar13 = uVar13 + 1) {
      cVar4 = String::operator==((String *)(lVar15 + 0x10 + uVar13 * 0x28),param_1);
      if (cVar4 != '\0') {
        local_b0 = 0;
        local_a8 = "\' already exists.";
        local_a0 = 0x11;
        String::parse_latin1((StrRange *)&local_b0);
        operator+((char *)local_b8,(String *)"color region with start key \'");
        String::operator+((String *)&local_a8,(String *)local_b8);
        _err_print_error("add_color_region","scene/resources/syntax_highlighter.cpp",0x1f7,
                         "Condition \"color_regions[i].start_key == p_start_key\" is true.",
                         (String *)&local_a8,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref(local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        goto LAB_001085b8;
      }
      piVar9 = *(int **)param_1;
      if (piVar9 == (int *)0x0) {
        iVar12 = 0;
      }
      else {
        iVar12 = (int)*(undefined8 *)(piVar9 + -2) + -1 +
                 (uint)((int)*(undefined8 *)(piVar9 + -2) == 0);
      }
      lVar15 = *(long *)(this + 0x2b8);
      if (lVar15 == 0) {
        uVar7 = 0;
LAB_00108603:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar13,uVar7,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(lVar15 + -8);
      if ((long)uVar7 <= (long)uVar13) goto LAB_00108603;
      lVar10 = *(long *)(lVar15 + 0x10 + uVar13 * 0x28);
      if (lVar10 == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = (int)*(undefined8 *)(lVar10 + -8);
        iVar11 = iVar11 + -1 + (uint)(iVar11 == 0);
      }
      iVar14 = iVar14 + (uint)(iVar12 < iVar11);
    }
    lVar15 = (long)iVar14;
    local_c0 = (byte)(iVar14 >> 0x1f) >> 7;
  }
  local_98 = *(undefined8 *)param_3;
  uStack_90 = *(undefined8 *)(param_3 + 8);
  local_78 = 0;
  _local_88 = (undefined1  [16])0x0;
  if (piVar9 != (int *)0x0) {
    CowData<char32_t>::_ref(local_88,(CowData *)param_1);
    piVar9 = piStack_80;
  }
  this_00 = local_88 + 8;
  if (*(int **)param_2 != piVar9) {
    CowData<char32_t>::_ref(this_00,(CowData *)param_2);
  }
  if (!param_4) {
    if (*(long *)param_2 == 0) {
      param_4 = true;
    }
    else {
      param_4 = *(uint *)(*(long *)param_2 + -8) < 2;
    }
  }
  local_68 = local_98;
  uStack_60 = uStack_90;
  local_58 = 0;
  local_78 = param_4;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)local_88);
  local_50 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)this_00);
  if (*(long *)(this + 0x2b8) == 0) {
    lVar10 = 1;
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)(this + 0x2b8) + -8);
    lVar10 = lVar8 + 1;
  }
  local_48 = param_4;
  if ((lVar15 < lVar10) && (local_c0 == 0)) {
    iVar12 = CowData<CodeHighlighter::ColorRegion>::resize<false>
                       ((CowData<CodeHighlighter::ColorRegion> *)(this + 0x2b8),lVar10);
    if (iVar12 == 0) {
      CowData<CodeHighlighter::ColorRegion>::_copy_on_write
                ((CowData<CodeHighlighter::ColorRegion> *)(this + 0x2b8));
      lVar10 = *(long *)(this + 0x2b8);
      if (lVar15 < lVar8) {
        this_01 = (CowData<char32_t> *)(lVar10 + 0x18 + lVar8 * 0x28);
        do {
          *(undefined8 *)(this_01 + -0x18) = *(undefined8 *)(this_01 + -0x40);
          *(undefined8 *)(this_01 + -0x10) = *(undefined8 *)(this_01 + -0x38);
          if (*(long *)(this_01 + -8) != *(long *)(this_01 + -0x30)) {
            CowData<char32_t>::_unref(this_01 + -8);
            uVar2 = *(undefined8 *)(this_01 + -0x30);
            *(undefined8 *)(this_01 + -0x30) = 0;
            *(undefined8 *)(this_01 + -8) = uVar2;
          }
          if (*(long *)this_01 != *(long *)(this_01 + -0x28)) {
            CowData<char32_t>::_unref(this_01);
            uVar2 = *(undefined8 *)(this_01 + -0x28);
            *(undefined8 *)(this_01 + -0x28) = 0;
            *(undefined8 *)this_01 = uVar2;
          }
          lVar8 = lVar8 + -1;
          this_01[8] = this_01[-0x20];
          this_01 = this_01 + -0x28;
        } while (lVar15 != lVar8);
      }
      puVar1 = (undefined8 *)(lVar10 + (long)iVar14 * 0x28);
      *puVar1 = local_68;
      puVar1[1] = uStack_60;
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 2),(CowData *)&local_58);
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 3),(CowData *)&local_50);
      *(bool *)(puVar1 + 4) = param_4;
    }
    else {
      _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                       "Condition \"err\" is true. Returning: err",0,0);
    }
  }
  else {
    _err_print_index_error
              ("insert","./core/templates/cowdata.h",0xf0,lVar15,lVar10,"p_pos","new_size","",false,
               false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  SyntaxHighlighter::clear_highlighting_cache((SyntaxHighlighter *)this);
  CowData<char32_t>::_unref(this_00);
  CowData<char32_t>::_unref(local_88);
LAB_001085b8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CodeHighlighter::set_color_regions(Dictionary const&) */

void CodeHighlighter::set_color_regions(Dictionary *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  Variant *this;
  int iVar4;
  List *in_RSI;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long *local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 local_68 [2];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0x2b8) != 0) && (*(long *)(*(long *)(param_1 + 0x2b8) + -8) != 0)) {
    CowData<CodeHighlighter::ColorRegion>::_unref
              ((CowData<CodeHighlighter::ColorRegion> *)(param_1 + 0x2b8));
  }
  local_88 = (long *)0x0;
  Dictionary::get_key_list(in_RSI);
  if ((local_88 != (long *)0x0) && (lVar5 = *local_88, lVar5 != 0)) {
    do {
      Variant::operator_cast_to_String((Variant *)&local_80);
      iVar4 = (int)(Variant *)&local_80;
      String::get_slice((char *)&local_78,iVar4);
      iVar3 = String::get_slice_count((char *)&local_80);
      if (iVar3 < 2) {
        local_70 = 0;
LAB_00108b51:
        bVar6 = true;
      }
      else {
        String::get_slice((char *)&local_70,iVar4);
        if ((local_70 == 0) || (iVar3 = (int)*(undefined8 *)(local_70 + -8), iVar3 == 0))
        goto LAB_00108b51;
        bVar6 = iVar3 == 1;
      }
      Variant::Variant((Variant *)local_58,(String *)&local_80);
      this = (Variant *)Dictionary::operator[]((Variant *)in_RSI);
      local_68[0] = Variant::operator_cast_to_Color(this);
      add_color_region((CodeHighlighter *)param_1,(String *)&local_78,(String *)&local_70,
                       (Color *)local_68,bVar6);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
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
      lVar5 = *(long *)(lVar5 + 0x18);
    } while (lVar5 != 0);
  }
  SyntaxHighlighter::clear_highlighting_cache((SyntaxHighlighter *)param_1);
  List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator> *)&local_88);
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



/* SyntaxHighlighter::is_class_ptr(void*) const */

uint __thiscall SyntaxHighlighter::is_class_ptr(SyntaxHighlighter *this,void *param_1)

{
  return (uint)CONCAT71(0x119b,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x119b,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x119b,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x119b,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* SyntaxHighlighter::_getv(StringName const&, Variant&) const */

undefined8 SyntaxHighlighter::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SyntaxHighlighter::_setv(StringName const&, Variant const&) */

undefined8 SyntaxHighlighter::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SyntaxHighlighter::_validate_propertyv(PropertyInfo&) const */

void SyntaxHighlighter::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* SyntaxHighlighter::_property_can_revertv(StringName const&) const */

undefined8 SyntaxHighlighter::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* SyntaxHighlighter::_property_get_revertv(StringName const&, Variant&) const */

undefined8 SyntaxHighlighter::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SyntaxHighlighter::_notificationv(int, bool) */

void SyntaxHighlighter::_notificationv(int param_1,bool param_2)

{
  return;
}



/* SyntaxHighlighter::_clear_highlighting_cache() */

void SyntaxHighlighter::_clear_highlighting_cache(void)

{
  return;
}



/* SyntaxHighlighter::_update_cache() */

void SyntaxHighlighter::_update_cache(void)

{
  return;
}



/* CodeHighlighter::is_class_ptr(void*) const */

uint __thiscall CodeHighlighter::is_class_ptr(CodeHighlighter *this,void *param_1)

{
  return (uint)CONCAT71(0x119b,(undefined4 *)param_1 ==
                               &SyntaxHighlighter::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x119b,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x119b,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x119b,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x119b,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* CodeHighlighter::_getv(StringName const&, Variant&) const */

undefined8 CodeHighlighter::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CodeHighlighter::_setv(StringName const&, Variant const&) */

undefined8 CodeHighlighter::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CodeHighlighter::_validate_propertyv(PropertyInfo&) const */

void CodeHighlighter::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* CodeHighlighter::_property_can_revertv(StringName const&) const */

undefined8 CodeHighlighter::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* CodeHighlighter::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CodeHighlighter::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CodeHighlighter::_notificationv(int, bool) */

void CodeHighlighter::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomMethodPointer<SyntaxHighlighter, void, int, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SyntaxHighlighter,void,int,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SyntaxHighlighter,void,int,int> *this)

{
  return;
}



/* MethodBindTRC<Color>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Color>::_gen_argument_type(int param_1)

{
  return 0x14;
}



/* MethodBindTRC<Color>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Color>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Color>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<Color>::_gen_argument_type(MethodBindT<Color> *this,int param_1)

{
  return -(param_1 == 0) & 0x14;
}



/* MethodBindT<Color>::get_argument_meta(int) const */

undefined8 MethodBindT<Color>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&, String const&, Color const&, bool>::get_argument_meta(int) const */

undefined8
MethodBindT<String_const&,String_const&,Color_const&,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Dictionary const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Dictionary_const&>::_gen_argument_type(MethodBindT<Dictionary_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x1b;
}



/* MethodBindT<Dictionary const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Dictionary_const&>::get_argument_meta(int param_1)

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



/* MethodBindT<Dictionary>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Dictionary>::_gen_argument_type(MethodBindT<Dictionary> *this,int param_1)

{
  return -(param_1 == 0) & 0x1b;
}



/* MethodBindT<Dictionary>::get_argument_meta(int) const */

undefined8 MethodBindT<Dictionary>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Color, String const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Color,String_const&>::_gen_argument_type
          (MethodBindTRC<Color,String_const&> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xfffffff0) + 0x14;
}



/* MethodBindTRC<Color, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Color,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool, String const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,String_const&>::_gen_argument_type
          (MethodBindTRC<bool,String_const&> *this,int param_1)

{
  return (-(param_1 == 0) & 3U) + 1;
}



/* MethodBindTRC<bool, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* MethodBindT<String const&>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&, Color const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<String_const&,Color_const&>::_gen_argument_type
          (MethodBindT<String_const&,Color_const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xfffffff0) + 0x14;
  }
  return iVar1;
}



/* MethodBindT<String const&, Color const&>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&,Color_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<TextEdit*>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TextEdit*>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<TextEdit*>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TextEdit*>::get_argument_meta(int param_1)

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



/* MethodBindTR<Dictionary, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Dictionary,int>::_gen_argument_type(MethodBindTR<Dictionary,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffe7) + 0x1b;
}



/* MethodBindTR<Dictionary, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Dictionary,int>::get_argument_meta(MethodBindTR<Dictionary,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* CallableCustomMethodPointer<SyntaxHighlighter, void, int, int>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<SyntaxHighlighter,void,int,int>::get_argument_count
          (CallableCustomMethodPointer<SyntaxHighlighter,void,int,int> *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* SyntaxHighlighter::_get_line_syntax_highlighting_impl(int) */

undefined8 SyntaxHighlighter::_get_line_syntax_highlighting_impl(int param_1)

{
  undefined4 in_register_0000003c;
  
  Dictionary::Dictionary((Dictionary *)CONCAT44(in_register_0000003c,param_1));
  return CONCAT44(in_register_0000003c,param_1);
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<SyntaxHighlighter, void, int, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SyntaxHighlighter,void,int,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SyntaxHighlighter,void,int,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindTR<Dictionary, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Dictionary,int>::~MethodBindTR(MethodBindTR<Dictionary,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00119648;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Dictionary, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Dictionary,int>::~MethodBindTR(MethodBindTR<Dictionary,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00119648;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001196a8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001196a8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TextEdit*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<TextEdit*>::~MethodBindTRC(MethodBindTRC<TextEdit*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00119708;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TextEdit*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<TextEdit*>::~MethodBindTRC(MethodBindTRC<TextEdit*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00119708;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Dictionary>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary>::~MethodBindT(MethodBindT<Dictionary> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001198e8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Dictionary>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary>::~MethodBindT(MethodBindT<Dictionary> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001198e8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&, Color const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,Color_const&>::~MethodBindT(MethodBindT<String_const&,Color_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00119768;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&, Color const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,Color_const&>::~MethodBindT(MethodBindT<String_const&,Color_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00119768;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Color, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Color,String_const&>::~MethodBindTRC(MethodBindTRC<Color,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00119888;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Color, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Color,String_const&>::~MethodBindTRC(MethodBindTRC<Color,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00119888;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&, String const&, Color const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,String_const&,Color_const&,bool>::~MethodBindT
          (MethodBindT<String_const&,String_const&,Color_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00119a08;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&, String const&, Color const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,String_const&,Color_const&,bool>::~MethodBindT
          (MethodBindT<String_const&,String_const&,Color_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00119a08;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001197c8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001197c8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,String_const&>::~MethodBindTRC(MethodBindTRC<bool,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00119828;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,String_const&>::~MethodBindTRC(MethodBindTRC<bool,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00119828;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Dictionary const&>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary_const&>::~MethodBindT(MethodBindT<Dictionary_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001199a8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Dictionary const&>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary_const&>::~MethodBindT(MethodBindT<Dictionary_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001199a8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Dictionary>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00119948;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Dictionary>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00119948;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Color>::~MethodBindT() */

void __thiscall MethodBindT<Color>::~MethodBindT(MethodBindT<Color> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00119a68;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Color>::~MethodBindT() */

void __thiscall MethodBindT<Color>::~MethodBindT(MethodBindT<Color> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00119a68;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Color>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Color>::~MethodBindTRC(MethodBindTRC<Color> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00119ac8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Color>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Color>::~MethodBindTRC(MethodBindTRC<Color> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00119ac8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&, String const&, Color const&, bool>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindT<String_const&,String_const&,Color_const&,bool>::_gen_argument_type
          (MethodBindT<String_const&,String_const&,Color_const&,bool> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((uint)param_1 < 4) && (uVar1 = 4, 1 < (uint)param_1)) {
    uVar1 = 1;
    if (param_1 == 2) {
      uVar1 = 0x14;
    }
    return uVar1;
  }
  return uVar1;
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



/* SyntaxHighlighter::_bind_methods() [clone .cold] */

void SyntaxHighlighter::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* SyntaxHighlighter::_lines_edited_from(int, int) [clone .cold] */

void SyntaxHighlighter::_lines_edited_from(int param_1,int param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<CodeHighlighter::ColorRegion>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<CodeHighlighter::ColorRegion>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CodeHighlighter::_get_class_namev() const */

undefined8 * CodeHighlighter::_get_class_namev(void)

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
LAB_00109d03:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109d03;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CodeHighlighter");
      goto LAB_00109d6e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CodeHighlighter");
LAB_00109d6e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<SyntaxHighlighter, void, int, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<SyntaxHighlighter,void,int,int>::get_object
          (CallableCustomMethodPointer<SyntaxHighlighter,void,int,int> *this)

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
      goto LAB_00109e9d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00109e9d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00109e9d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
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



/* RBMap<int, Dictionary, Comparator<int>, DefaultAllocator>::_cleanup_tree(RBMap<int, Dictionary,
   Comparator<int>, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
          (RBMap<int,Dictionary,Comparator<int>,DefaultAllocator> *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
          Memory::free_static(pEVar2,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar5 + 0x38));
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
        Memory::free_static(pEVar2,false);
      }
      Dictionary::~Dictionary((Dictionary *)(pEVar3 + 0x38));
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar5 + 0x38));
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar5 + 0x38));
        Memory::free_static(pEVar5,false);
      }
      Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
      Memory::free_static(pEVar2,false);
    }
    Dictionary::~Dictionary((Dictionary *)(pEVar1 + 0x38));
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
          Memory::free_static(pEVar2,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar5 + 0x38));
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
        Memory::free_static(pEVar2,false);
      }
      Dictionary::~Dictionary((Dictionary *)(pEVar3 + 0x38));
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar5 + 0x38));
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar5 + 0x38));
        Memory::free_static(pEVar5,false);
      }
      Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
      Memory::free_static(pEVar2,false);
    }
    Dictionary::~Dictionary((Dictionary *)(pEVar1 + 0x38));
    Memory::free_static(pEVar1,false);
  }
  Dictionary::~Dictionary((Dictionary *)(param_1 + 0x38));
  Memory::free_static(param_1,false);
  return;
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



/* SyntaxHighlighter::_get_class_namev() const */

undefined8 * SyntaxHighlighter::_get_class_namev(void)

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
LAB_0010a813:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010a813;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"SyntaxHighlighter");
      goto LAB_0010a87e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"SyntaxHighlighter");
LAB_0010a87e:
  return &_get_class_namev()::_class_name_static;
}



/* MethodBindTRC<TextEdit*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TextEdit*>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  bool bVar4;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 8;
  local_38 = "TextEdit";
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  *puVar3 = 0x18;
  *(undefined8 *)(puVar3 + 2) = 0;
  StringName::StringName((StringName *)(puVar3 + 4),(StringName *)&local_38);
  bVar4 = StringName::configured != '\0';
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  if ((bVar4) && (local_38 != (char *)0x0)) {
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
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeHighlighter::get_class() const */

void CodeHighlighter::get_class(void)

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



/* SyntaxHighlighter::get_class() const */

void SyntaxHighlighter::get_class(void)

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



/* MethodBindTRC<Color>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Color>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC15;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x14;
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
      goto joined_r0x0010ac9c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010ac9c:
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
  local_48 = &_LC15;
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
      goto joined_r0x0010ae1c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010ae1c:
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
        if (pvVar5 == (void *)0x0) goto LAB_0010afb4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010afb4:
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



/* is_symbol(char32_t) */

uint is_symbol(wchar32 param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  if (param_1 != L'_') {
    uVar2 = (ulong)(uint)(param_1 + L'\xffffffdf');
    if ((uint)(param_1 + L'\xffffffdf') < 0x40) {
      uVar1 = 1;
      if ((0xfc000000fe007fffU >> (uVar2 & 0x3f) & 1) == 0) {
LAB_0010b07d:
        return (uint)(param_1 == L'\t') | (uint)CONCAT71((int7)(uVar2 >> 8),param_1 == L' ');
      }
    }
    else {
      uVar2 = (ulong)(uint)(param_1 + L'\xffffff85');
      uVar1 = 1;
      if (3 < (uint)(param_1 + L'\xffffff85')) goto LAB_0010b07d;
    }
  }
  return uVar1;
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



/* GetTypeInfo<int, void>::get_class_info() */

GetTypeInfo<int,void> * __thiscall
GetTypeInfo<int,void>::get_class_info(GetTypeInfo<int,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC15;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010b31c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010b31c:
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Dictionary, void>::get_class_info() */

GetTypeInfo<Dictionary,void> * __thiscall
GetTypeInfo<Dictionary,void>::get_class_info(GetTypeInfo<Dictionary,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC15;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x1b;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010b49c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010b49c:
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
    return this;
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
LAB_0010b658:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010b658;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x0010b676;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x0010b676:
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
LAB_0010ba58:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010ba58;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010ba75;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010ba75:
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



/* SyntaxHighlighter::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
SyntaxHighlighter::_get_property_listv(SyntaxHighlighter *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "SyntaxHighlighter";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SyntaxHighlighter";
  local_98 = 0;
  local_70 = 0x11;
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
LAB_0010bea8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010bea8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010bec5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010bec5:
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
  StringName::StringName((StringName *)&local_78,"SyntaxHighlighter",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
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



/* CodeHighlighter::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
CodeHighlighter::_get_property_listv(CodeHighlighter *this,List *param_1,bool param_2)

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
    SyntaxHighlighter::_get_property_listv((SyntaxHighlighter *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CodeHighlighter";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CodeHighlighter";
  local_98 = 0;
  local_70 = 0xf;
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
LAB_0010c2f8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010c2f8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010c315;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010c315:
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
  StringName::StringName((StringName *)&local_78,"CodeHighlighter",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      SyntaxHighlighter::_get_property_listv((SyntaxHighlighter *)this,param_1,true);
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



/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      piVar2 = *(int **)(this + 0x50);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)(this + 0x50) = 0;
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
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)(this + 0x40));
  if (*(long *)(this + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
  }
  return;
}



/* RBMap<int, Dictionary, Comparator<int>, DefaultAllocator>::clear() */

void __thiscall
RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::clear
          (RBMap<int,Dictionary,Comparator<int>,DefaultAllocator> *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  void *pvVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  
  pvVar4 = *(void **)this;
  if (pvVar4 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar4 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar7) {
          pEVar5 = *(Element **)(pEVar7 + 0x10);
          if (pEVar2 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          if (pEVar5 != *(Element **)(pEVar7 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar7 + 0x38));
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar7) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar7) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar7 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar7) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
          Memory::free_static(pEVar2,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar3 + 0x38));
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar2 + 0x10);
        if (pEVar7 != pEVar3) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          pEVar5 = *(Element **)(pEVar7 + 8);
          if (pEVar3 != pEVar5) {
            pEVar6 = *(Element **)(pEVar5 + 0x10);
            if (pEVar3 != pEVar6) {
              _cleanup_tree(this,pEVar6);
              pEVar6 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar5 + 8) != pEVar6) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 8));
            }
            Dictionary::~Dictionary((Dictionary *)(pEVar5 + 0x38));
            Memory::free_static(pEVar5,false);
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar7 + 0x38));
          Memory::free_static(pEVar7,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar7 = *(Element **)(pEVar2 + 8);
        if (pEVar7 != pEVar3) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          pEVar5 = *(Element **)(pEVar7 + 8);
          if (pEVar5 != pEVar3) {
            if (*(Element **)(pEVar5 + 0x10) != pEVar3) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 0x10));
              pEVar3 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar5 + 8) != pEVar3) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 8));
            }
            Dictionary::~Dictionary((Dictionary *)(pEVar5 + 0x38));
            Memory::free_static(pEVar5,false);
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar7 + 0x38));
          Memory::free_static(pEVar7,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
        Memory::free_static(pEVar2,false);
      }
      Dictionary::~Dictionary((Dictionary *)(pEVar1 + 0x38));
      Memory::free_static(pEVar1,false);
      pvVar4 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar4 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    Dictionary::~Dictionary((Dictionary *)((long)pvVar4 + 0x38));
    Memory::free_static(pvVar4,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* SyntaxHighlighter::~SyntaxHighlighter() */

void __thiscall SyntaxHighlighter::~SyntaxHighlighter(SyntaxHighlighter *this)

{
  void *pvVar1;
  bool bVar2;
  
  bVar2 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_001191d8;
  if (bVar2) {
    if (*(long *)(this + 0x298) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cd04;
    }
    if (*(long *)(this + 0x280) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cd04;
    }
    if (*(long *)(this + 0x268) != 0) {
      StringName::unref();
    }
  }
LAB_0010cd04:
  RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::clear
            ((RBMap<int,Dictionary,Comparator<int>,DefaultAllocator> *)(this + 0x240));
  pvVar1 = *(void **)(this + 0x240);
  if (pvVar1 != (void *)0x0) {
    Dictionary::~Dictionary((Dictionary *)((long)pvVar1 + 0x38));
    Memory::free_static(pvVar1,false);
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* SyntaxHighlighter::~SyntaxHighlighter() */

void __thiscall SyntaxHighlighter::~SyntaxHighlighter(SyntaxHighlighter *this)

{
  void *pvVar1;
  bool bVar2;
  
  bVar2 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_001191d8;
  if (bVar2) {
    if (*(long *)(this + 0x298) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cdb4;
    }
    if (*(long *)(this + 0x280) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cdb4;
    }
    if (*(long *)(this + 0x268) != 0) {
      StringName::unref();
    }
  }
LAB_0010cdb4:
  RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::clear
            ((RBMap<int,Dictionary,Comparator<int>,DefaultAllocator> *)(this + 0x240));
  pvVar1 = *(void **)(this + 0x240);
  if (pvVar1 != (void *)0x0) {
    Dictionary::~Dictionary((Dictionary *)((long)pvVar1 + 0x38));
    Memory::free_static(pvVar1,false);
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2b0);
  return;
}



/* Callable create_custom_callable_function_pointer<SyntaxHighlighter, int, int>(SyntaxHighlighter*,
   char const*, void (SyntaxHighlighter::*)(int, int)) */

SyntaxHighlighter *
create_custom_callable_function_pointer<SyntaxHighlighter,int,int>
          (SyntaxHighlighter *param_1,char *param_2,_func_void_int_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001195b8;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_int_int **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
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
    lStack_90 = 0x10d54b;
    local_70 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = local_70;
    if (uVar39 == 0) {
      iVar44 = *(int *)(this + 0x2c);
      uVar38 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_0010d0b3;
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
        lStack_90 = 0x10d594;
        memset(local_70,0,uVar48);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
    }
    if (iVar44 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_0010d433;
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
LAB_0010d433:
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
            goto LAB_0010d414;
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
LAB_0010d0b3:
  if ((float)uVar51 * __LC25 < (float)(iVar44 + 1)) {
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010d414;
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
LAB_0010d414:
  auVar57._8_8_ = lStack_90;
  auVar57._0_8_ = pauVar42[1] + 4;
  return auVar57;
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



/* CallableCustomMethodPointer<SyntaxHighlighter, void, int, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<SyntaxHighlighter,void,int,int>::call
          (CallableCustomMethodPointer<SyntaxHighlighter,void,int,int> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar10 = (char)ObjectDB::spin_lock == '\0';
      if (bVar10) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010dabd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_0010dabd;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 3) {
      if (param_2 == 2) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar4 = _LC36;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar4 = _LC37;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar7 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010da96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar7,iVar6);
          return;
        }
        goto LAB_0010db7f;
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
LAB_0010dabd:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC35,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010db7f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SyntaxHighlighter::is_class(String const&) const */

undefined8 __thiscall SyntaxHighlighter::is_class(SyntaxHighlighter *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
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
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar5 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar5 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010dbff;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar4 == lVar7;
            if (bVar9) {
              *plVar1 = lVar4 + 1;
              lVar7 = lVar4;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar5);
        local_58 = pcVar5;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010dbff:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0010dcb3;
  }
  cVar6 = String::operator==(param_1,"SyntaxHighlighter");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar3 = *(long *)(lVar2 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar5 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar5 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
          if (*(long *)(lVar3 + 0x10) != 0) {
            do {
              lVar4 = *plVar1;
              if (lVar4 == 0) goto LAB_0010dde3;
              LOCK();
              lVar7 = *plVar1;
              bVar9 = lVar4 == lVar7;
              if (bVar9) {
                *plVar1 = lVar4 + 1;
                lVar7 = lVar4;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar7 != -1) {
              local_60 = *(long *)(lVar3 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar5);
          local_58 = pcVar5;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_0010dde3:
      cVar6 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_0010dcb3;
    }
    cVar6 = String::operator==(param_1,"Resource");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar3 = *(long *)(lVar2 + 0x20);
        if (lVar3 == 0) {
          local_60 = 0;
        }
        else {
          pcVar5 = *(char **)(lVar3 + 8);
          local_60 = 0;
          if (pcVar5 == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
          }
          else {
            local_50 = strlen(pcVar5);
            local_58 = pcVar5;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar6 = String::operator==(param_1,(String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_0010dcb3;
      }
      cVar6 = String::operator==(param_1,"RefCounted");
      if (cVar6 == '\0') {
        for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
          lVar3 = *(long *)(lVar2 + 0x20);
          if (lVar3 == 0) {
            local_58 = (char *)0x0;
          }
          else {
            local_58 = (char *)0x0;
            if (*(char **)(lVar3 + 8) == (char *)0x0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar3 + 0x10));
            }
            else {
              String::parse_latin1((String *)&local_58,*(char **)(lVar3 + 8));
            }
          }
          cVar6 = String::operator==(param_1,(String *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          if (cVar6 != '\0') goto LAB_0010dcb3;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = String::operator==(param_1,"Object");
          return uVar8;
        }
        goto LAB_0010df4c;
      }
    }
  }
LAB_0010dcb3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010df4c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeHighlighter::is_class(String const&) const */

undefined8 __thiscall CodeHighlighter::is_class(CodeHighlighter *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010dfcf;
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
LAB_0010dfcf:
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
    if (cVar5 != '\0') goto LAB_0010e083;
  }
  cVar5 = String::operator==(param_1,"CodeHighlighter");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = SyntaxHighlighter::is_class((SyntaxHighlighter *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010e083:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Dictionary_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
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
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0010e129;
  local_78 = 0;
  local_68 = &_LC15;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1b);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010e220:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010e220;
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
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_0010e129:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<Color>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Color>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
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
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0010e3d9;
  local_78 = 0;
  local_68 = &_LC15;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x14);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010e4d0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010e4d0;
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
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_0010e3d9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindTR<Dictionary, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Dictionary,int>::_gen_argument_type_info(int param_1)

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
  long local_b8;
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
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX != 0) {
    local_a8 = 0;
    local_a0 = 0;
    local_68 = &_LC15;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._0_8_;
    local_60 = auVar2 << 0x40;
    String::parse_latin1((StrRange *)&local_a0);
    local_98 = 0;
    *puVar7 = 0x1b;
    puVar7[6] = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
    if (local_a0 == 0) {
      puVar7[10] = 6;
LAB_0010e837:
      StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_a8);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_a0);
      puVar7[10] = 6;
      if (puVar7[6] != 0x11) goto LAB_0010e837;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_a8 != 0)) {
      StringName::unref();
    }
    goto LAB_0010e872;
  }
  local_98 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 6;
  local_b8 = 0;
  local_b0 = 0;
  local_68 = &_LC15;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._0_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_b0);
  local_a8 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_b0 == 0) {
LAB_0010e8a8:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_b0);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010e8a8;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
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
LAB_0010e872:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<Dictionary>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Dictionary>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_88;
  long local_80;
  undefined8 local_78;
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
  if (in_EDX != 0) goto LAB_0010ea59;
  local_88 = 0;
  local_68 = &_LC15;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_78 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1b);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010eb55:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010eb55;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
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
LAB_0010ea59:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBind* create_method_bind<SyntaxHighlighter, Dictionary, int>(Dictionary
   (SyntaxHighlighter::*)(int)) */

MethodBind * create_method_bind<SyntaxHighlighter,Dictionary,int>(_func_Dictionary_int *param_1)

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
  *(_func_Dictionary_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00119648;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SyntaxHighlighter";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<SyntaxHighlighter>(void (SyntaxHighlighter::*)()) */

MethodBind * create_method_bind<SyntaxHighlighter>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001196a8;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "SyntaxHighlighter";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<SyntaxHighlighter, TextEdit*>(TextEdit* (SyntaxHighlighter::*)()
   const) */

MethodBind * create_method_bind<SyntaxHighlighter,TextEdit*>(_func_TextEdit_ptr *param_1)

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
  *(_func_TextEdit_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00119708;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "SyntaxHighlighter";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<CodeHighlighter, String const&, Color const&>(void
   (CodeHighlighter::*)(String const&, Color const&)) */

MethodBind *
create_method_bind<CodeHighlighter,String_const&,Color_const&>
          (_func_void_String_ptr_Color_ptr *param_1)

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
  *(_func_void_String_ptr_Color_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00119768;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "CodeHighlighter";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<CodeHighlighter, String const&>(void (CodeHighlighter::*)(String
   const&)) */

MethodBind * create_method_bind<CodeHighlighter,String_const&>(_func_void_String_ptr *param_1)

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
  *(_func_void_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001197c8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "CodeHighlighter";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<CodeHighlighter, bool, String const&>(bool
   (CodeHighlighter::*)(String const&) const) */

MethodBind * create_method_bind<CodeHighlighter,bool,String_const&>(_func_bool_String_ptr *param_1)

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
  *(_func_bool_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00119828;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "CodeHighlighter";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<CodeHighlighter, Color, String const&>(Color
   (CodeHighlighter::*)(String const&) const) */

MethodBind *
create_method_bind<CodeHighlighter,Color,String_const&>(_func_Color_String_ptr *param_1)

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
  *(_func_Color_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00119888;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "CodeHighlighter";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<CodeHighlighter, Dictionary>(void
   (CodeHighlighter::*)(Dictionary)) */

MethodBind * create_method_bind<CodeHighlighter,Dictionary>(_func_void_Dictionary *param_1)

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
  *(_func_void_Dictionary **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001198e8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "CodeHighlighter";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<CodeHighlighter>(void (CodeHighlighter::*)()) */

MethodBind * create_method_bind<CodeHighlighter>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001196a8;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "CodeHighlighter";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<CodeHighlighter, Dictionary>(Dictionary (CodeHighlighter::*)()
   const) */

MethodBind * create_method_bind<CodeHighlighter,Dictionary>(_func_Dictionary *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00119948;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "CodeHighlighter";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<CodeHighlighter, Dictionary const&>(void
   (CodeHighlighter::*)(Dictionary const&)) */

MethodBind *
create_method_bind<CodeHighlighter,Dictionary_const&>(_func_void_Dictionary_ptr *param_1)

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
  *(_func_void_Dictionary_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001199a8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "CodeHighlighter";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<CodeHighlighter, String const&, String const&, Color const&,
   bool>(void (CodeHighlighter::*)(String const&, String const&, Color const&, bool)) */

MethodBind *
create_method_bind<CodeHighlighter,String_const&,String_const&,Color_const&,bool>
          (_func_void_String_ptr_String_ptr_Color_ptr_bool *param_1)

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
  *(_func_void_String_ptr_String_ptr_Color_ptr_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00119a08;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "CodeHighlighter";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<CodeHighlighter, Color>(void (CodeHighlighter::*)(Color)) */

MethodBind * create_method_bind<CodeHighlighter,Color>(_func_void_Color *param_1)

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
  *(_func_void_Color **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00119a68;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "CodeHighlighter";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<CodeHighlighter, Color>(Color (CodeHighlighter::*)() const) */

MethodBind * create_method_bind<CodeHighlighter,Color>(_func_Color *param_1)

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
  *(_func_Color **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00119ac8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "CodeHighlighter";
  local_30 = 0xf;
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
LAB_00110100:
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
  if (lVar10 == 0) goto LAB_00110100;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_0010ffd9:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_0010ffd9;
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
    goto LAB_00110156;
  }
  if (lVar10 == lVar7) {
LAB_0011007f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00110156:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0011006a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0011007f;
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
LAB_0011006a:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<unsigned int>::_unref() */

void __thiscall CowData<unsigned_int>::_unref(CowData<unsigned_int> *this)

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
LAB_00110420:
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
  if (lVar8 == 0) goto LAB_00110420;
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
        goto LAB_00110331;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00110331:
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



/* CodeHighlighter::_initialize_classv() */

void CodeHighlighter::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (SyntaxHighlighter::initialize_class()::initialized == '\0') {
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
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((code *)PTR__bind_methods_0011f008 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_58 = "RefCounted";
        local_68 = 0;
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
          Resource::_bind_methods();
        }
        Resource::initialize_class()::initialized = '\x01';
      }
      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "SyntaxHighlighter";
      local_70 = 0;
      local_50 = 0x11;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      SyntaxHighlighter::_bind_methods();
      SyntaxHighlighter::initialize_class()::initialized = '\x01';
    }
    local_58 = "SyntaxHighlighter";
    local_68 = 0;
    local_50 = 0x11;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "CodeHighlighter";
    local_70 = 0;
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SyntaxHighlighter::_initialize_classv() */

void SyntaxHighlighter::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_0011f008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
        Resource::_bind_methods();
      }
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "SyntaxHighlighter";
    local_70 = 0;
    local_50 = 0x11;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RBMap<int, Dictionary, Comparator<int>, DefaultAllocator>::_insert(int const&, Dictionary const&)
    */

int * __thiscall
RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_insert
          (RBMap<int,Dictionary,Comparator<int>,DefaultAllocator> *this,int *param_1,
          Dictionary *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  long in_FS_OFFSET;
  bool bVar13;
  Dictionary local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar11 = *(int **)this;
  if (*(int **)(piVar11 + 4) != *(int **)(this + 8)) {
    piVar12 = *(int **)(piVar11 + 4);
    do {
      piVar11 = piVar12;
      if (*param_1 < piVar11[0xc]) {
        piVar12 = *(int **)(piVar11 + 4);
      }
      else {
        if (*param_1 <= piVar11[0xc]) {
          Dictionary::operator=((Dictionary *)(piVar11 + 0xe),(Dictionary *)param_2);
          goto LAB_00110e89;
        }
        piVar12 = *(int **)(piVar11 + 2);
      }
    } while (piVar12 != *(int **)(this + 8));
  }
  piVar5 = (int *)operator_new(0x40,DefaultAllocator::alloc);
  iVar1 = *param_1;
  Dictionary::Dictionary(local_50,param_2);
  *piVar5 = 0;
  piVar5[0xc] = iVar1;
  piVar5[10] = 0;
  piVar5[0xb] = 0;
  *(undefined1 (*) [16])(piVar5 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(piVar5 + 6) = (undefined1  [16])0x0;
  Dictionary::Dictionary((Dictionary *)(piVar5 + 0xe),local_50);
  Dictionary::~Dictionary(local_50);
  *(int **)(piVar5 + 6) = piVar11;
  piVar12 = *(int **)(this + 8);
  *(int **)(piVar5 + 2) = piVar12;
  *(int **)(piVar5 + 4) = piVar12;
  if ((*(int **)this == piVar11) || (*param_1 < piVar11[0xc])) {
    *(int **)(piVar11 + 4) = piVar5;
    piVar9 = *(int **)(this + 8);
    piVar8 = *(int **)(piVar5 + 4);
    piVar10 = *(int **)this;
    if (piVar12 == piVar9) {
      piVar7 = piVar11;
      piVar6 = piVar11;
      if (piVar5 == *(int **)(piVar11 + 2)) goto LAB_00110ef8;
      goto LAB_00110f05;
    }
LAB_00110ed0:
    do {
      piVar7 = piVar12;
      piVar12 = *(int **)(piVar7 + 4);
    } while (piVar9 != *(int **)(piVar7 + 4));
  }
  else {
    *(int **)(piVar11 + 2) = piVar5;
    piVar7 = *(int **)(piVar5 + 2);
    piVar9 = *(int **)(this + 8);
    piVar10 = *(int **)this;
    piVar6 = piVar11;
    piVar8 = piVar12;
    if (piVar7 == piVar9) {
LAB_00110ef8:
      do {
        piVar7 = *(int **)(piVar6 + 6);
        bVar13 = piVar6 == *(int **)(piVar7 + 2);
        piVar6 = piVar7;
      } while (bVar13);
LAB_00110f05:
      if (piVar10 == piVar7) {
        piVar7 = (int *)0x0;
      }
    }
    else {
      piVar12 = *(int **)(piVar7 + 4);
      if (piVar9 != *(int **)(piVar7 + 4)) goto LAB_00110ed0;
    }
  }
  *(int **)(piVar5 + 8) = piVar7;
  piVar12 = *(int **)this;
  if (piVar8 == *(int **)(this + 8)) {
    piVar8 = piVar5;
    piVar10 = piVar11;
    piVar9 = piVar11;
    if (piVar5 == *(int **)(piVar11 + 4)) {
      do {
        piVar9 = *(int **)(piVar10 + 6);
        bVar13 = piVar10 == *(int **)(piVar9 + 4);
        piVar8 = piVar10;
        piVar10 = piVar9;
      } while (bVar13);
    }
    if (piVar12 != piVar8) goto LAB_00110d9c;
    piVar5[10] = 0;
    piVar5[0xb] = 0;
    if (piVar7 == (int *)0x0) goto LAB_00110db6;
LAB_00110da5:
    *(int **)(piVar7 + 10) = piVar5;
    piVar9 = *(int **)(piVar5 + 10);
    if (piVar9 == (int *)0x0) goto LAB_00110db6;
  }
  else {
    do {
      piVar9 = piVar8;
      piVar8 = *(int **)(piVar9 + 2);
    } while (*(int **)(this + 8) != *(int **)(piVar9 + 2));
LAB_00110d9c:
    *(int **)(piVar5 + 10) = piVar9;
    if (piVar7 != (int *)0x0) goto LAB_00110da5;
  }
  *(int **)(piVar9 + 8) = piVar5;
LAB_00110db6:
  iVar1 = *piVar11;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  piVar9 = piVar5;
  if (iVar1 == 0) {
    do {
      while( true ) {
        piVar12 = *(int **)(piVar11 + 6);
        piVar8 = *(int **)(piVar12 + 4);
        if (piVar8 == piVar11) break;
        if (*piVar8 == 0) goto LAB_00110e4d;
        piVar8 = *(int **)(piVar11 + 4);
        if (piVar9 == piVar8) {
          lVar2 = *(long *)(this + 8);
          lVar3 = *(long *)(piVar8 + 2);
          *(long *)(piVar11 + 4) = lVar3;
          piVar9 = piVar12;
          if (lVar2 != lVar3) {
            *(int **)(lVar3 + 0x18) = piVar11;
            piVar9 = *(int **)(piVar11 + 6);
          }
          *(int **)(piVar8 + 6) = piVar9;
          if (piVar11 == *(int **)(piVar9 + 2)) {
            *(int **)(piVar9 + 2) = piVar8;
          }
          else {
            *(int **)(piVar9 + 4) = piVar8;
          }
          *(int **)(piVar8 + 2) = piVar11;
          *(int **)(piVar11 + 6) = piVar8;
          piVar9 = *(int **)(this + 8);
          *piVar8 = 1;
          if (piVar12 == piVar9) goto LAB_00110ff8;
LAB_00110df1:
          *piVar12 = 0;
          piVar9 = piVar11;
        }
        else {
          piVar10 = *(int **)(this + 8);
          *piVar11 = 1;
          piVar8 = piVar11;
          piVar11 = piVar9;
          if (piVar12 != piVar10) goto LAB_00110df1;
LAB_00110ff8:
          _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                           "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
          piVar9 = piVar11;
        }
        lVar2 = *(long *)(piVar12 + 2);
        lVar3 = *(long *)(this + 8);
        lVar4 = *(long *)(lVar2 + 0x10);
        *(long *)(piVar12 + 2) = lVar4;
        if (lVar3 != lVar4) {
          *(int **)(lVar4 + 0x18) = piVar12;
        }
        lVar3 = *(long *)(piVar12 + 6);
        *(long *)(lVar2 + 0x18) = lVar3;
        if (piVar12 == *(int **)(lVar3 + 0x10)) {
          *(long *)(lVar3 + 0x10) = lVar2;
        }
        else {
          *(long *)(lVar3 + 8) = lVar2;
        }
        *(int **)(lVar2 + 0x10) = piVar12;
        *(long *)(piVar12 + 6) = lVar2;
LAB_00110e30:
        piVar11 = piVar8;
        if (*piVar8 != 0) goto LAB_00110e7b;
      }
      piVar8 = *(int **)(piVar12 + 2);
      if (*piVar8 != 0) {
        piVar8 = piVar11;
        if (*(int **)(piVar11 + 2) == piVar9) {
          lVar2 = *(long *)(this + 8);
          lVar3 = *(long *)(piVar9 + 4);
          *(long *)(piVar11 + 2) = lVar3;
          if (lVar2 == lVar3) {
            *(int **)(piVar9 + 6) = piVar12;
            piVar8 = piVar12;
LAB_00111148:
            *(int **)(piVar8 + 4) = piVar9;
          }
          else {
            *(int **)(lVar3 + 0x18) = piVar11;
            piVar8 = *(int **)(piVar11 + 6);
            *(int **)(piVar9 + 6) = piVar8;
            if (piVar11 == *(int **)(piVar8 + 4)) goto LAB_00111148;
            *(int **)(piVar8 + 2) = piVar9;
          }
          *(int **)(piVar9 + 4) = piVar11;
          *(int **)(piVar11 + 6) = piVar9;
          piVar8 = piVar9;
          piVar9 = piVar11;
        }
        piVar11 = *(int **)(this + 8);
        *piVar8 = 1;
        if (piVar12 == piVar11) {
          _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                           "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
        }
        else {
          *piVar12 = 0;
        }
        lVar2 = *(long *)(piVar12 + 4);
        lVar3 = *(long *)(this + 8);
        lVar4 = *(long *)(lVar2 + 8);
        *(long *)(piVar12 + 4) = lVar4;
        if (lVar3 != lVar4) {
          *(int **)(lVar4 + 0x18) = piVar12;
        }
        lVar3 = *(long *)(piVar12 + 6);
        *(long *)(lVar2 + 0x18) = lVar3;
        if (piVar12 == *(int **)(lVar3 + 8)) {
          *(long *)(lVar3 + 8) = lVar2;
        }
        else {
          *(long *)(lVar3 + 0x10) = lVar2;
        }
        *(int **)(lVar2 + 8) = piVar12;
        *(long *)(piVar12 + 6) = lVar2;
        goto LAB_00110e30;
      }
LAB_00110e4d:
      piVar9 = *(int **)(this + 8);
      *piVar11 = 1;
      *piVar8 = 1;
      if (piVar12 == piVar9) {
        _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      else {
        *piVar12 = 0;
      }
      piVar11 = *(int **)(piVar12 + 6);
      piVar9 = piVar12;
    } while (**(int **)(piVar12 + 6) == 0);
LAB_00110e7b:
    piVar12 = *(int **)this;
  }
  **(undefined4 **)(piVar12 + 4) = 1;
  piVar11 = piVar5;
LAB_00110e89:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return piVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RBMap<int, Dictionary, Comparator<int>, DefaultAllocator>::_erase_fix_rb(RBMap<int, Dictionary,
   Comparator<int>, DefaultAllocator>::Element*) */

void __thiscall
RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_erase_fix_rb
          (RBMap<int,Dictionary,Comparator<int>,DefaultAllocator> *this,Element *param_1)

{
  int iVar1;
  Element *pEVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  
  pEVar8 = *(Element **)(this + 8);
  pEVar2 = *(Element **)(*(long *)this + 0x10);
  pEVar9 = *(Element **)(param_1 + 0x18);
  pEVar7 = pEVar8;
  do {
    pEVar6 = pEVar9;
    if (pEVar2 == pEVar7) {
LAB_00111290:
      iVar1 = *(int *)pEVar8;
joined_r0x00111353:
      if (iVar1 != 1) {
        _err_print_error("_erase_fix_rb","./core/templates/rb_map.h",0x202,
                         "Condition \"_data._nil->color != BLACK\" is true.",0,0);
        return;
      }
      return;
    }
    pEVar9 = param_1;
    if (*(int *)param_1 != 0) {
LAB_00111239:
      pEVar7 = *(Element **)(pEVar9 + 0x10);
      if (*(int *)pEVar7 == 1) goto LAB_00111246;
LAB_001112f0:
      if (pEVar9 != *(Element **)(pEVar6 + 8)) {
        iVar1 = *(int *)pEVar6;
        pEVar7 = pEVar9;
        goto joined_r0x001112ff;
      }
      if (**(int **)(pEVar9 + 8) == 1) {
        *(int *)pEVar7 = 1;
        if (pEVar9 == pEVar8) {
          _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                           "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
          pEVar8 = *(Element **)(this + 8);
          pEVar7 = *(Element **)(pEVar9 + 0x10);
        }
        else {
          *(int *)pEVar9 = 0;
        }
        pEVar2 = *(Element **)(pEVar7 + 8);
        *(Element **)(pEVar9 + 0x10) = pEVar2;
        if (pEVar2 != pEVar8) {
          *(Element **)(pEVar2 + 0x18) = pEVar9;
        }
        lVar3 = *(long *)(pEVar9 + 0x18);
        *(long *)(pEVar7 + 0x18) = lVar3;
        if (pEVar9 == *(Element **)(lVar3 + 8)) {
          *(Element **)(lVar3 + 8) = pEVar7;
        }
        else {
          *(Element **)(lVar3 + 0x10) = pEVar7;
        }
        *(Element **)(pEVar7 + 8) = pEVar9;
        *(Element **)(pEVar9 + 0x18) = pEVar7;
        pEVar9 = pEVar7;
      }
LAB_001114e1:
      if ((pEVar9 == pEVar8) && (*(int *)pEVar6 == 0)) {
        _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
        pEVar8 = *(Element **)(this + 8);
      }
      else {
        *(int *)pEVar9 = *(int *)pEVar6;
      }
      puVar5 = *(undefined4 **)(pEVar9 + 8);
      *(int *)pEVar6 = 1;
      *puVar5 = 1;
      lVar3 = *(long *)(pEVar6 + 8);
      pEVar2 = *(Element **)(lVar3 + 0x10);
      *(Element **)(pEVar6 + 8) = pEVar2;
      if (pEVar2 != pEVar8) {
        *(Element **)(pEVar2 + 0x18) = pEVar6;
      }
      lVar4 = *(long *)(pEVar6 + 0x18);
      *(long *)(lVar3 + 0x18) = lVar4;
      if (pEVar6 == *(Element **)(lVar4 + 0x10)) {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      else {
        *(long *)(lVar4 + 8) = lVar3;
      }
      *(Element **)(lVar3 + 0x10) = pEVar6;
      *(long *)(pEVar6 + 0x18) = lVar3;
      goto LAB_00111290;
    }
    *(int *)param_1 = 1;
    if (pEVar6 == pEVar8) {
      _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                       "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      pEVar8 = *(Element **)(this + 8);
    }
    else {
      *(int *)pEVar6 = 0;
    }
    if (*(Element **)(pEVar6 + 8) != param_1) {
      lVar3 = *(long *)(pEVar6 + 0x10);
      pEVar9 = *(Element **)(param_1 + 8);
      pEVar7 = *(Element **)(lVar3 + 8);
      *(Element **)(pEVar6 + 0x10) = pEVar7;
      if (pEVar7 != pEVar8) {
        *(Element **)(pEVar7 + 0x18) = pEVar6;
      }
      lVar4 = *(long *)(pEVar6 + 0x18);
      *(long *)(lVar3 + 0x18) = lVar4;
      if (pEVar6 == *(Element **)(lVar4 + 8)) {
        *(long *)(lVar4 + 8) = lVar3;
      }
      else {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      *(Element **)(lVar3 + 8) = pEVar6;
      *(long *)(pEVar6 + 0x18) = lVar3;
      goto LAB_00111239;
    }
    pEVar9 = *(Element **)(param_1 + 0x10);
    *(Element **)(pEVar6 + 8) = pEVar9;
    if (pEVar9 != pEVar8) {
      *(Element **)(pEVar9 + 0x18) = pEVar6;
    }
    lVar3 = *(long *)(pEVar6 + 0x18);
    *(long *)(param_1 + 0x18) = lVar3;
    if (pEVar6 == *(Element **)(lVar3 + 0x10)) {
      *(Element **)(lVar3 + 0x10) = param_1;
    }
    else {
      *(Element **)(lVar3 + 8) = param_1;
    }
    *(Element **)(param_1 + 0x10) = pEVar6;
    *(Element **)(pEVar6 + 0x18) = param_1;
    pEVar7 = *(Element **)(pEVar9 + 0x10);
    if (*(int *)pEVar7 != 1) goto LAB_001112f0;
LAB_00111246:
    pEVar7 = *(Element **)(pEVar9 + 8);
    if (*(int *)pEVar7 != 1) {
      if (*(Element **)(pEVar6 + 8) == pEVar9) goto LAB_001114e1;
      *(int *)pEVar7 = 1;
      if (pEVar9 == pEVar8) {
        _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
        pEVar8 = *(Element **)(this + 8);
        pEVar7 = *(Element **)(pEVar9 + 8);
      }
      else {
        *(int *)pEVar9 = 0;
      }
      pEVar2 = *(Element **)(pEVar7 + 0x10);
      *(Element **)(pEVar9 + 8) = pEVar2;
      if (pEVar2 != pEVar8) {
        *(Element **)(pEVar2 + 0x18) = pEVar9;
      }
      lVar3 = *(long *)(pEVar9 + 0x18);
      *(long *)(pEVar7 + 0x18) = lVar3;
      if (pEVar9 == *(Element **)(lVar3 + 0x10)) {
        *(Element **)(lVar3 + 0x10) = pEVar7;
      }
      else {
        *(Element **)(lVar3 + 8) = pEVar7;
      }
      *(Element **)(pEVar7 + 0x10) = pEVar9;
      *(Element **)(pEVar9 + 0x18) = pEVar7;
      iVar1 = *(int *)pEVar6;
joined_r0x001112ff:
      if ((iVar1 == 0) && (pEVar7 == pEVar8)) {
        _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
        pEVar8 = *(Element **)(this + 8);
      }
      else {
        *(int *)pEVar7 = iVar1;
      }
      puVar5 = *(undefined4 **)(pEVar7 + 0x10);
      *(int *)pEVar6 = 1;
      *puVar5 = 1;
      lVar3 = *(long *)(pEVar6 + 0x10);
      pEVar2 = *(Element **)(lVar3 + 8);
      *(Element **)(pEVar6 + 0x10) = pEVar2;
      if (pEVar2 != pEVar8) {
        *(Element **)(pEVar2 + 0x18) = pEVar6;
      }
      lVar4 = *(long *)(pEVar6 + 0x18);
      *(long *)(lVar3 + 0x18) = lVar4;
      if (pEVar6 == *(Element **)(lVar4 + 8)) {
        *(long *)(lVar4 + 8) = lVar3;
      }
      else {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      iVar1 = *(int *)pEVar8;
      *(Element **)(lVar3 + 8) = pEVar6;
      *(long *)(pEVar6 + 0x18) = lVar3;
      goto joined_r0x00111353;
    }
    if (pEVar9 == pEVar8) {
      _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                       "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      iVar1 = *(int *)pEVar6;
      pEVar8 = *(Element **)(this + 8);
    }
    else {
      *(int *)pEVar9 = 0;
      iVar1 = *(int *)pEVar6;
    }
    if (iVar1 == 0) {
      *(int *)pEVar6 = 1;
      goto LAB_00111290;
    }
    pEVar9 = *(Element **)(pEVar6 + 0x18);
    param_1 = *(Element **)(pEVar9 + 0x10);
    pEVar7 = pEVar6;
    if (param_1 == pEVar6) {
      param_1 = *(Element **)(pEVar9 + 8);
    }
  } while( true );
}



/* RBMap<int, Dictionary, Comparator<int>, DefaultAllocator>::_erase(RBMap<int, Dictionary,
   Comparator<int>, DefaultAllocator>::Element*) */

void __thiscall
RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_erase
          (RBMap<int,Dictionary,Comparator<int>,DefaultAllocator> *this,Element *param_1)

{
  int *piVar1;
  Element *pEVar2;
  Element *pEVar3;
  int *piVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  Element *pEVar8;
  Element *pEVar9;
  
  piVar4 = *(int **)(param_1 + 0x10);
  piVar1 = *(int **)(this + 8);
  pEVar8 = param_1;
  if (piVar4 == piVar1) {
LAB_001117c0:
    lVar6 = *(long *)(pEVar8 + 0x18);
    piVar4 = *(int **)(pEVar8 + 8);
    pEVar9 = *(Element **)(lVar6 + 0x10);
    if (pEVar9 == pEVar8) goto LAB_001117d5;
LAB_001116dd:
    *(int **)(lVar6 + 8) = piVar4;
  }
  else {
    if (piVar1 != *(int **)(param_1 + 8)) {
      pEVar8 = *(Element **)(param_1 + 0x20);
      piVar4 = *(int **)(pEVar8 + 0x10);
      if (piVar1 == piVar4) goto LAB_001117c0;
    }
    lVar6 = *(long *)(pEVar8 + 0x18);
    pEVar9 = *(Element **)(lVar6 + 0x10);
    if (pEVar9 != pEVar8) goto LAB_001116dd;
LAB_001117d5:
    *(int **)(lVar6 + 0x10) = piVar4;
    pEVar9 = *(Element **)(lVar6 + 8);
  }
  if (*piVar4 == 0) {
    *(long *)(piVar4 + 6) = lVar6;
    *piVar4 = 1;
  }
  else if ((*(int *)pEVar8 == 1) && (lVar6 != *(long *)this)) {
    _erase_fix_rb(this,pEVar9);
  }
  if (pEVar8 != param_1) {
    pEVar9 = *(Element **)(this + 8);
    if (pEVar9 == pEVar8) {
      uVar7 = 0x21a;
      pcVar5 = "Condition \"rp == _data._nil\" is true.";
      goto LAB_0011180a;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    pEVar2 = *(Element **)(param_1 + 0x10);
    pEVar3 = *(Element **)(param_1 + 8);
    *(undefined8 *)(pEVar8 + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(pEVar8 + 0x10) = uVar7;
    *(undefined8 *)(pEVar8 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(int *)pEVar8 = *(int *)param_1;
    if (pEVar9 != pEVar2) {
      *(Element **)(pEVar2 + 0x18) = pEVar8;
    }
    if (pEVar9 != pEVar3) {
      *(Element **)(pEVar3 + 0x18) = pEVar8;
    }
    lVar6 = *(long *)(param_1 + 0x18);
    if (*(Element **)(lVar6 + 0x10) == param_1) {
      *(Element **)(lVar6 + 0x10) = pEVar8;
    }
    else {
      *(Element **)(lVar6 + 8) = pEVar8;
    }
  }
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(*(long *)(param_1 + 0x28) + 0x20) = lVar6;
  }
  Dictionary::~Dictionary((Dictionary *)(param_1 + 0x38));
  Memory::free_static(param_1,false);
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
  if (**(int **)(this + 8) != 0) {
    return;
  }
  uVar7 = 0x237;
  pcVar5 = "Condition \"_data._nil->color == RED\" is true.";
LAB_0011180a:
  _err_print_error("_erase","./core/templates/rb_map.h",uVar7,pcVar5,0,0);
  return;
}



/* CowData<CodeHighlighter::ColorRegion>::_unref() */

void __thiscall
CowData<CodeHighlighter::ColorRegion>::_unref(CowData<CodeHighlighter::ColorRegion> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
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
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 0x18) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x18) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x18);
              *(undefined8 *)(lVar6 + 0x18) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)(lVar6 + 0x10) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x10) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x10);
              *(undefined8 *)(lVar6 + 0x10) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x28;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CodeHighlighter::~CodeHighlighter() */

void __thiscall CodeHighlighter::~CodeHighlighter(CodeHighlighter *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_001193c8;
  Dictionary::~Dictionary((Dictionary *)(this + 0x2f8));
  Dictionary::~Dictionary((Dictionary *)(this + 0x2f0));
  pvVar3 = *(void **)(this + 0x2c8);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x2ec) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2e8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x2ec) = 0;
        *(undefined1 (*) [16])(this + 0x2d8) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x2d0) + lVar2) != 0) {
            *(int *)(*(long *)(this + 0x2d0) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(this + 0x2c8);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x2ec) = 0;
        *(undefined1 (*) [16])(this + 0x2d8) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_001119f7;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x2d0),false);
  }
LAB_001119f7:
  CowData<CodeHighlighter::ColorRegion>::_unref
            ((CowData<CodeHighlighter::ColorRegion> *)(this + 0x2b8));
  bVar4 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_001191d8;
  if (bVar4) {
    if (*(long *)(this + 0x298) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111a6a;
    }
    if (*(long *)(this + 0x280) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111a6a;
    }
    if (*(long *)(this + 0x268) != 0) {
      StringName::unref();
    }
  }
LAB_00111a6a:
  RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::clear
            ((RBMap<int,Dictionary,Comparator<int>,DefaultAllocator> *)(this + 0x240));
  pvVar3 = *(void **)(this + 0x240);
  if (pvVar3 != (void *)0x0) {
    Dictionary::~Dictionary((Dictionary *)((long)pvVar3 + 0x38));
    Memory::free_static(pvVar3,false);
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* CodeHighlighter::~CodeHighlighter() */

void __thiscall CodeHighlighter::~CodeHighlighter(CodeHighlighter *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_001193c8;
  Dictionary::~Dictionary((Dictionary *)(this + 0x2f8));
  Dictionary::~Dictionary((Dictionary *)(this + 0x2f0));
  pvVar3 = *(void **)(this + 0x2c8);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x2ec) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2e8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x2ec) = 0;
        *(undefined1 (*) [16])(this + 0x2d8) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x2d0) + lVar2) != 0) {
            *(int *)(*(long *)(this + 0x2d0) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(this + 0x2c8);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x2ec) = 0;
        *(undefined1 (*) [16])(this + 0x2d8) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00111ba7;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x2d0),false);
  }
LAB_00111ba7:
  CowData<CodeHighlighter::ColorRegion>::_unref
            ((CowData<CodeHighlighter::ColorRegion> *)(this + 0x2b8));
  bVar4 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_001191d8;
  if (bVar4) {
    if (*(long *)(this + 0x298) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111c1a;
    }
    if (*(long *)(this + 0x280) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111c1a;
    }
    if (*(long *)(this + 0x268) != 0) {
      StringName::unref();
    }
  }
LAB_00111c1a:
  RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::clear
            ((RBMap<int,Dictionary,Comparator<int>,DefaultAllocator> *)(this + 0x240));
  pvVar3 = *(void **)(this + 0x240);
  if (pvVar3 != (void *)0x0) {
    Dictionary::~Dictionary((Dictionary *)((long)pvVar3 + 0x38));
    Memory::free_static(pvVar3,false);
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x358);
  return;
}



/* CowData<CodeHighlighter::ColorRegion>::_realloc(long) */

undefined8 __thiscall
CowData<CodeHighlighter::ColorRegion>::_realloc
          (CowData<CodeHighlighter::ColorRegion> *this,long param_1)

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
/* Error CowData<CodeHighlighter::ColorRegion>::resize<false>(long) */

undefined8 __thiscall
CowData<CodeHighlighter::ColorRegion>::resize<false>
          (CowData<CodeHighlighter::ColorRegion> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
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
LAB_00111ff0:
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
  if (lVar13 == 0) goto LAB_00111ff0;
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
      lVar8 = lVar8 + uVar12 * 0x28;
      if (*(long *)(lVar8 + 0x18) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar8 + 0x18) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar8 + 0x18);
          *(undefined8 *)(lVar8 + 0x18) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if (*(long *)(lVar8 + 0x10) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar8 + 0x10) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar8 + 0x10);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      uVar12 = uVar12 + 1;
    }
    goto LAB_00112046;
  }
  if (lVar13 == lVar10) {
LAB_00111f5b:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00112046:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar9[-1];
    if (param_1 <= lVar8) goto LAB_00111e75;
  }
  else {
    if (lVar8 != 0) {
      uVar7 = _realloc(this,lVar13);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_00111f5b;
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
  uVar4 = _UNK_00119de8;
  uVar7 = __LC107;
  puVar5 = puVar9 + lVar8 * 5;
  do {
    *(undefined1 *)(puVar5 + 4) = 0;
    puVar6 = puVar5 + 5;
    *puVar5 = uVar7;
    puVar5[1] = uVar4;
    *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
    puVar5 = puVar6;
  } while (puVar6 != puVar9 + param_1 * 5);
LAB_00111e75:
  puVar9[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x001121e8) */
/* WARNING: Removing unreachable block (ram,0x0011237d) */
/* WARNING: Removing unreachable block (ram,0x00112389) */
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



/* MethodBindTRC<Color>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Color>::call
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
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58 [2];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_68 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC35,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00112590;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
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
      local_58[0] = (*(code *)pVVar2)();
      Variant::Variant((Variant *)local_48,(Color *)local_58);
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
LAB_00112590:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Color>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindTRC<Color>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  Variant *pVVar2;
  long in_RCX;
  long in_FS_OFFSET;
  undefined8 uVar3;
  undefined8 in_XMM1_Qa;
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
      pVVar2 = param_2[0x23];
      if (pVVar2 == (Variant *)0x0) {
        pVVar2 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar2 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar2) {
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
      goto LAB_0011283b;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(param_1 + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
  *(undefined8 *)(in_RCX + 8) = uVar3;
  *(undefined8 *)(in_RCX + 0x10) = in_XMM1_Qa;
LAB_0011283b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Color>::ptrcall(Object*, void const**, void*) const */

void MethodBindTRC<Color>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *in_RCX;
  long in_FS_OFFSET;
  undefined8 uVar3;
  undefined8 in_XMM1_Qa;
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
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
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
      goto LAB_001129fa;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(param_1 + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
  *in_RCX = uVar3;
  in_RCX[1] = in_XMM1_Qa;
LAB_001129fa:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Color>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Color>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00112d49;
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
                    /* WARNING: Could not recover jumptable at 0x00112bd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (*(undefined8 *)(*(long *)param_3 + 8),*(undefined8 *)(*(long *)param_3 + 0x10),
               (long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00112d49:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Color>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Color>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00112f29;
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
                    /* WARNING: Could not recover jumptable at 0x00112db2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (**param_3,(*param_3)[1],(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00112f29:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, String const&, Color const&, bool>::validated_call(Object*, Variant
   const**, Variant*) const */

void MethodBindT<String_const&,String_const&,Color_const&,bool>::validated_call
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
      goto LAB_001130ff;
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
                    /* WARNING: Could not recover jumptable at 0x00112fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(long *)(param_3 + 8) + 8,*(long *)(param_3 + 0x10) + 8,
               *(undefined1 *)(*(long *)(param_3 + 0x18) + 8));
    return;
  }
LAB_001130ff:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, String const&, Color const&, bool>::ptrcall(Object*, void const**,
   void*) const */

void MethodBindT<String_const&,String_const&,Color_const&,bool>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

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
      goto LAB_001132f9;
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
                    /* WARNING: Could not recover jumptable at 0x00113183. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8),*(undefined8 *)((long)param_3 + 0x10),
               **(char **)((long)param_3 + 0x18) != '\0');
    return;
  }
LAB_001132f9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Dictionary_const&>::validated_call
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
      goto LAB_001134d1;
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
                    /* WARNING: Could not recover jumptable at 0x0011335d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_001134d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Dictionary_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_001136b1;
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
                    /* WARNING: Could not recover jumptable at 0x00113539. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_001136b1:
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
      _err_print_error(&_LC35,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00113790;
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
LAB_00113790:
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
      local_48 = (Variant **)0x1123d8;
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
      goto LAB_001139b9;
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
LAB_001139b9:
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
      local_48 = (void **)0x1123d8;
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
      goto LAB_00113b8a;
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
LAB_00113b8a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Dictionary>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Variant *pVVar2;
  code *pcVar3;
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
      pVVar2 = param_2[0x23];
      if (pVVar2 == (Variant *)0x0) {
        pVVar2 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar2 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00113d5c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Dictionary::Dictionary((Dictionary *)&local_48,(Dictionary *)(*(long *)param_3 + 8));
  (*pcVar3)((long *)((long)param_2 + lVar1),(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_00113d5c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Dictionary>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
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
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
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
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00113f49;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Dictionary::Dictionary((Dictionary *)&local_48,*param_3);
  (*pcVar3)((long *)((long)param_2 + lVar1),(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_00113f49:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Color, String const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindTRC<Color,String_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  Variant *pVVar2;
  long in_RCX;
  long in_FS_OFFSET;
  undefined8 uVar3;
  undefined8 in_XMM1_Qa;
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
      pVVar2 = param_2[0x23];
      if (pVVar2 == (Variant *)0x0) {
        pVVar2 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar2 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar2) {
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
      goto LAB_00114132;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(param_1 + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
  *(undefined8 *)(in_RCX + 8) = uVar3;
  *(undefined8 *)(in_RCX + 0x10) = in_XMM1_Qa;
LAB_00114132:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Color, String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindTRC<Color,String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *in_RCX;
  long in_FS_OFFSET;
  undefined8 uVar3;
  undefined8 in_XMM1_Qa;
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
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
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
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011430c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
  *in_RCX = uVar3;
  in_RCX[1] = in_XMM1_Qa;
LAB_0011430c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, String const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool,String_const&>::validated_call
          (MethodBindTRC<bool,String_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Variant VVar1;
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
      goto LAB_001144e9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2 + 8);
  param_3[8] = VVar1;
LAB_001144e9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, String const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,String_const&>::ptrcall
          (MethodBindTRC<bool,String_const&> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_001146c5;
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
  *(undefined1 *)param_3 = uVar1;
LAB_001146c5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00114a21;
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
                    /* WARNING: Could not recover jumptable at 0x001148ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00114a21:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00114c01;
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
                    /* WARNING: Could not recover jumptable at 0x00114a89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00114c01:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, Color const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<String_const&,Color_const&>::validated_call
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
      goto LAB_00114dcf;
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
                    /* WARNING: Could not recover jumptable at 0x00114c7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(long *)(param_3 + 8) + 8);
    return;
  }
LAB_00114dcf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, Color const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&,Color_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00114fb9;
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
                    /* WARNING: Could not recover jumptable at 0x00114e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_00114fb9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextEdit*>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<TextEdit*>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
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
      _err_print_error(&_LC35,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00115080;
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
      pOVar2 = (Object *)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,pOVar2);
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
LAB_00115080:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  char *pcVar2;
  Variant *pVVar3;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC35,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00115370;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
      (*(code *)pVVar3)();
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
LAB_00115370:
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
      goto LAB_0011570f;
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
                    /* WARNING: Could not recover jumptable at 0x001155b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011570f:
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
      goto LAB_001158cf;
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
                    /* WARNING: Could not recover jumptable at 0x00115776. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_001158cf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Dictionary,int>::validated_call
          (MethodBindTR<Dictionary,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011593f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  Dictionary::operator=((Dictionary *)(param_3 + 8),(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0011593f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Dictionary,int>::ptrcall
          (MethodBindTR<Dictionary,int> *this,Object *param_1,void **param_2,void *param_3)

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
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00115b2d;
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
  (*pcVar1)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  Dictionary::operator=((Dictionary *)param_3,(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_00115b2d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextEdit*>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<TextEdit*>::validated_call
          (MethodBindTRC<TextEdit*> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00115e7f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)(param_1 + *(long *)(this + 0x60));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Variant::ObjData::ref_pointer((Object *)(param_3 + 8));
    return;
  }
LAB_00115e7f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextEdit*>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TextEdit*>::ptrcall
          (MethodBindTRC<TextEdit*> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00115ed1;
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
LAB_00115ed1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Color>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Color>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC35,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00116138;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00116190;
LAB_00116180:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00116190:
        uVar6 = 4;
        goto LAB_0011612d;
      }
      if (in_R8D == 1) goto LAB_00116180;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x14);
    uVar4 = _LC145;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Color(pVVar10);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1));
  }
  else {
    uVar6 = 3;
LAB_0011612d:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00116138:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Color, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Color,String_const&>::call
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
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68 [2];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
      _err_print_error(&_LC35,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_001164b0;
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
      if (in_R8D != 1) goto LAB_00116500;
LAB_001164f0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00116500:
        uVar6 = 4;
        goto LAB_001164a5;
      }
      if (in_R8D == 1) goto LAB_001164f0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,4);
    uVar4 = _LC147;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_78);
    local_68[0] = (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_78);
    Variant::Variant((Variant *)local_58,(Color *)local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  else {
    uVar6 = 3;
LAB_001164a5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_001164b0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<String_const&>::call
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
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC35,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00116820;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00116870;
LAB_00116860:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00116870:
        uVar6 = 4;
        goto LAB_00116815;
      }
      if (in_R8D == 1) goto LAB_00116860;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,4);
    uVar4 = _LC147;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_00116815:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00116820:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<bool,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
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
      _err_print_error(&_LC35,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00116b80;
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
      if (in_R8D != 1) goto LAB_00116bd0;
LAB_00116bc0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00116bd0:
        uVar7 = 4;
        goto LAB_00116b75;
      }
      if (in_R8D == 1) goto LAB_00116bc0;
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
    uVar4 = _LC147;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    bVar6 = (bool)(*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_68)
    ;
    Variant::Variant((Variant *)local_58,bVar6);
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
LAB_00116b75:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00116b80:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<String const&, String const&, Color const&, bool>::call(Object*, Variant const**,
   int, Callable::CallError&) const */

Object * MethodBindT<String_const&,String_const&,Color_const&,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *pVVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  Variant *local_68 [5];
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar10 = (long *)plVar13[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar10 = (long *)(plVar13[1] + 0x20);
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
      _err_print_error(&_LC35,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_00117022;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 5) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar12 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar12 = (int)lVar15;
    }
    if ((int)(4 - in_R8D) <= iVar12) {
      lVar9 = 0;
      do {
        if ((int)lVar9 < (int)in_R8D) {
          pVVar14 = *(Variant **)(param_4 + lVar9 * 8);
        }
        else {
          uVar11 = iVar12 + -4 + (int)lVar9;
          if (lVar15 <= (int)uVar11) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar11,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar14 = pVVar2 + (ulong)uVar11 * 0x18;
        }
        local_68[lVar9] = pVVar14;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 4);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[3],1);
      uVar4 = _LC148;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar7 = Variant::operator_cast_to_bool(local_68[3]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[2],0x14);
      uVar4 = _LC149;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_78[0] = Variant::operator_cast_to_Color(local_68[2]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[1],4);
      uVar4 = _LC150;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_90);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[0],4);
      uVar4 = _LC147;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_88);
      (*(code *)pVVar16)((Variant *)((long)plVar13 + (long)pVVar1),(Variant *)&local_88,
                         (Variant *)&local_90,local_78,bVar7);
      pcVar5 = local_88;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar13 = (long *)(local_88 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar15 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar13 = (long *)(local_90 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      goto LAB_00117022;
    }
    uVar8 = 4;
  }
  else {
    uVar8 = 3;
  }
  *in_R9 = uVar8;
  in_R9[2] = 4;
LAB_00117022:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Dictionary>::call
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
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC35,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00117340;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00117390;
LAB_00117380:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00117390:
        uVar6 = 4;
        goto LAB_00117335;
      }
      if (in_R8D == 1) goto LAB_00117380;
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
    uVar4 = _LC151;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Dictionary((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    Dictionary::~Dictionary((Dictionary *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_00117335:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00117340:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Dictionary_const&>::call
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
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC35,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00117670;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001176c0;
LAB_001176b0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001176c0:
        uVar6 = 4;
        goto LAB_00117665;
      }
      if (in_R8D == 1) goto LAB_001176b0;
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
    uVar4 = _LC151;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Dictionary((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    Dictionary::~Dictionary((Dictionary *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_00117665:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00117670:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Dictionary,int>::call
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
      _err_print_error(&_LC35,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001179d0;
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
      if (in_R8D != 1) goto LAB_00117a20;
LAB_00117a10:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00117a20:
        uVar7 = 4;
        goto LAB_001179c5;
      }
      if (in_R8D == 1) goto LAB_00117a10;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC37;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    (*(code *)pVVar12)((Dictionary *)&local_68,(Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_58,(Dictionary *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    Dictionary::~Dictionary((Dictionary *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_001179c5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_001179d0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void call_with_variant_args_dv<__UnexistingClass, String const&, Color
   const&>(__UnexistingClass*, void (__UnexistingClass::*)(String const&, Color const&), Variant
   const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,String_const&,Color_const&>
               (__UnexistingClass *param_1,_func_void_String_ptr_Color_ptr *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

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
  Variant local_50 [8];
  undefined8 local_48;
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar11;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_00117d70;
      puVar10 = (undefined4 *)*plVar8;
LAB_00117dbd:
      this = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_00117d70:
        uVar7 = 4;
        goto LAB_00117d75;
      }
      if (uVar11 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_00117dd8;
        puVar10 = (undefined4 *)(lVar1 + lVar9 * 0x18);
      }
      else {
        puVar10 = (undefined4 *)*plVar8;
        if (uVar11 == 2) goto LAB_00117dbd;
      }
      lVar9 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00117dd8:
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
      param_2 = *(_func_void_String_ptr_Color_ptr **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,0x14);
    uVar4 = _LC152;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    local_48 = Variant::operator_cast_to_Color(this);
    cVar5 = Variant::can_convert_strict(*puVar10,4);
    uVar4 = _LC147;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_String(local_50);
    (*param_2)((String *)(param_1 + (long)param_3),(Color *)local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  }
  else {
    uVar7 = 3;
LAB_00117d75:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, Color const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<String_const&,Color_const&>::call
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
      _err_print_error(&_LC35,"./core/object/method_bind.h",0x154,
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
      goto LAB_00117e76;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,String_const&,Color_const&>
            (p_Var4,(_func_void_String_ptr_Color_ptr *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00117e76:
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
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int iVar7;
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
  iVar7 = *param_2;
  if (iVar7 != param_1) goto LAB_001180b7;
  local_78 = 0;
  local_68 = &_LC15;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001181b0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001181b0;
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
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar5;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar5;
  }
  lVar6 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
  iVar7 = *param_2;
LAB_001180b7:
  *param_2 = iVar7 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<Color, String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Color,String_const&>::_gen_argument_type_info(int param_1)

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
    call_get_argument_type_info_helper<String_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar2 = local_68._0_4_;
    *(undefined8 *)(puVar2 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar2 + 4) = local_60._8_8_;
    puVar2[6] = (undefined4)local_50;
    *(undefined8 *)(puVar2 + 8) = local_48;
    puVar2[10] = local_40;
    goto LAB_001183b5;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC15;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._0_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar2 = 0x14;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar2[10] = 6;
LAB_0011849f:
    StringName::operator=((StringName *)(puVar2 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar2 + 8),(CowData *)&local_78);
    puVar2[10] = 6;
    if (puVar2[6] != 0x11) goto LAB_0011849f;
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
LAB_001183b5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<String_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,String_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
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
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<String_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar5 = local_60._0_8_;
    uVar6 = local_60._8_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *puVar7 = local_68._0_4_;
    *(undefined8 *)(puVar7 + 2) = uVar5;
    *(undefined8 *)(puVar7 + 4) = uVar6;
    puVar7[6] = (undefined4)local_50;
    *(undefined8 *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00118638;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC15;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._0_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar7 = 1;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar7[10] = 6;
LAB_00118727:
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_78);
    puVar7[10] = 6;
    if (puVar7[6] != 0x11) goto LAB_00118727;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  lVar4 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00118638:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Color const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Color_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int iVar7;
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
  iVar7 = *param_2;
  if (iVar7 != param_1) goto LAB_001187e7;
  local_78 = 0;
  local_68 = &_LC15;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x14);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001188e0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001188e0;
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
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar5;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar5;
  }
  lVar6 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
  iVar7 = *param_2;
LAB_001187e7:
  *param_2 = iVar7 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<String const&, Color const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<String_const&,Color_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<Color_const&>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, String const&, Color const&, bool>::_gen_argument_type_info(int) const
    */

PropertyInfo *
MethodBindT<String_const&,String_const&,Color_const&,bool>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_8c,pPVar5);
  call_get_argument_type_info_helper<Color_const&>(in_EDX,&local_8c,pPVar5);
  if (in_EDX != local_8c) goto LAB_00118b63;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC15;
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
LAB_00118c68:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00118c68;
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_00118b63:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
}



/* SyntaxHighlighter::get_line_syntax_highlighting(int) */

void SyntaxHighlighter::_GLOBAL__sub_I_get_line_syntax_highlighting(void)

{
  if (PopupMenu::base_property_helper != '\0') {
    return;
  }
  PopupMenu::base_property_helper = 1;
  PopupMenu::base_property_helper._56_8_ = 2;
  PopupMenu::base_property_helper._64_8_ = 0;
  PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,&__dso_handle
              );
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* CodeHighlighter::~CodeHighlighter() */

void __thiscall CodeHighlighter::~CodeHighlighter(CodeHighlighter *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Variant, DefaultAllocator>::~List() */

void __thiscall List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SyntaxHighlighter::~SyntaxHighlighter() */

void __thiscall SyntaxHighlighter::~SyntaxHighlighter(SyntaxHighlighter *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

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
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

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
/* MethodBindTRC<Color>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Color>::~MethodBindTRC(MethodBindTRC<Color> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Color>::~MethodBindT() */

void __thiscall MethodBindT<Color>::~MethodBindT(MethodBindT<Color> *this)

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
/* MethodBindT<Dictionary const&>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary_const&>::~MethodBindT(MethodBindT<Dictionary_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,String_const&>::~MethodBindTRC(MethodBindTRC<bool,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&, String const&, Color const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,String_const&,Color_const&,bool>::~MethodBindT
          (MethodBindT<String_const&,String_const&,Color_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Color, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Color,String_const&>::~MethodBindTRC(MethodBindTRC<Color,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&, Color const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,Color_const&>::~MethodBindT(MethodBindT<String_const&,Color_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Dictionary>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary>::~MethodBindT(MethodBindT<Dictionary> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<TextEdit*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<TextEdit*>::~MethodBindTRC(MethodBindTRC<TextEdit*> *this)

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
/* MethodBindTR<Dictionary, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Dictionary,int>::~MethodBindTR(MethodBindTR<Dictionary,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SyntaxHighlighter, void, int, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SyntaxHighlighter,void,int,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SyntaxHighlighter,void,int,int> *this)

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



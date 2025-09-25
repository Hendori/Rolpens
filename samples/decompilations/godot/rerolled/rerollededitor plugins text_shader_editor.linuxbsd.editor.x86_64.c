/* TextShaderEditor::validate_script() */

void __thiscall TextShaderEditor::validate_script(TextShaderEditor *this)

{
                    /* WARNING: Could not recover jumptable at 0x0010000e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0xa18) + 0x370))();
  return;
}



/* TextShaderEditor::_prepare_edit_menu() */

void TextShaderEditor::_prepare_edit_menu(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = MenuButton::get_popup();
  TextEdit::has_undo();
  bVar1 = (bool)PopupMenu::get_item_index(iVar2);
  PopupMenu::set_item_disabled(iVar2,bVar1);
  TextEdit::has_redo();
  bVar1 = (bool)PopupMenu::get_item_index(iVar2);
  PopupMenu::set_item_disabled(iVar2,bVar1);
  return;
}



/* TextShaderEditor::_show_warnings_panel(bool) */

void TextShaderEditor::_show_warnings_panel(bool param_1)

{
  undefined7 in_register_00000039;
  
  CanvasItem::set_visible(SUB81(*(undefined8 *)(CONCAT71(in_register_00000039,param_1) + 0x9f0),0));
  return;
}



/* TextShaderEditor::is_unsaved() const */

bool TextShaderEditor::is_unsaved(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = TextEdit::get_saved_version();
  iVar2 = TextEdit::get_version();
  return iVar1 != iVar2;
}



/* ShaderTextEditor::_shader_changed() */

void __thiscall ShaderTextEditor::_shader_changed(ShaderTextEditor *this)

{
  if (this[0xb64] == (ShaderTextEditor)0x0) {
    *(int *)(this + 0xb68) = *(int *)(this + 0xb68) + 1;
                    /* WARNING: Could not recover jumptable at 0x00100157. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x370))();
    return;
  }
  return;
}



/* TextShaderEditor::_warning_clicked(Variant const&) */

void __thiscall TextShaderEditor::_warning_clicked(TextShaderEditor *this,Variant *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(int *)param_1 != 2) {
    return;
  }
  uVar1 = *(undefined8 *)(this + 0xa18);
  lVar2 = Variant::operator_cast_to_long(param_1);
  CodeTextEditor::goto_line_centered((int)uVar1,(int)lVar2);
  return;
}



/* CowData<Vector2i>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2i>::_copy_on_write(CowData<Vector2i> *this)

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



/* CowData<Pair<int, int> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Pair<int,int>>::_copy_on_write(CowData<Pair<int,int>> *this)

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



/* GDShaderSyntaxHighlighter::_get_line_syntax_highlighting_impl(int) */

Dictionary * GDShaderSyntaxHighlighter::_get_line_syntax_highlighting_impl(int param_1)

{
  int *piVar1;
  Variant *pVVar2;
  int in_EDX;
  int *piVar3;
  long in_RSI;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  Dictionary aDStack_88 [8];
  Dictionary local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(aDStack_88);
  CowData<Vector2i>::_copy_on_write((CowData<Vector2i> *)(in_RSI + 0x360));
  piVar1 = *(int **)(in_RSI + 0x360);
  CowData<Vector2i>::_copy_on_write((CowData<Vector2i> *)(in_RSI + 0x360));
  piVar3 = *(int **)(in_RSI + 0x360);
  if (piVar3 != (int *)0x0) {
    piVar3 = piVar3 + *(long *)(piVar3 + -2) * 2;
  }
  do {
    if (piVar1 == piVar3) {
      CodeHighlighter::_get_line_syntax_highlighting_impl(param_1);
LAB_00100477:
      Dictionary::~Dictionary(aDStack_88);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return (Dictionary *)CONCAT44(in_register_0000003c,param_1);
    }
    if ((*piVar1 <= in_EDX) && (in_EDX <= piVar1[1])) {
      CodeHighlighter::_get_line_syntax_highlighting_impl((int)local_80);
      Dictionary::~Dictionary(local_80);
      Dictionary::Dictionary(local_80);
      Variant::Variant((Variant *)local_58,(Color *)(in_RSI + 0x368));
      Variant::Variant((Variant *)local_78,"color");
      pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
      if (pVVar2 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar2 = 0;
        *(int *)pVVar2 = local_58[0];
        *(undefined8 *)(pVVar2 + 8) = local_50;
        *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,local_80);
      Variant::Variant((Variant *)local_78,0);
      pVVar2 = (Variant *)Dictionary::operator[]((Variant *)aDStack_88);
      if (pVVar2 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar2 = 0;
        *(int *)pVVar2 = local_58[0];
        *(undefined8 *)(pVVar2 + 8) = local_50;
        *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::Dictionary((Dictionary *)CONCAT44(in_register_0000003c,param_1),aDStack_88);
      Dictionary::~Dictionary(local_80);
      goto LAB_00100477;
    }
    piVar1 = piVar1 + 2;
  } while( true );
}



/* CowData<Pair<int, int> >::_ref(CowData<Pair<int, int> > const&) [clone .part.0] */

void __thiscall CowData<Pair<int,int>>::_ref(CowData<Pair<int,int>> *this,CowData *param_1)

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



/* GDShaderSyntaxHighlighter::clear_disabled_branch_regions() */

void __thiscall
GDShaderSyntaxHighlighter::clear_disabled_branch_regions(GDShaderSyntaxHighlighter *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x360);
  if ((lVar2 != 0) && (*(long *)(lVar2 + -8) != 0)) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x360);
      *(undefined8 *)(this + 0x360) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      SyntaxHighlighter::clear_highlighting_cache();
      return;
    }
    *(undefined8 *)(this + 0x360) = 0;
  }
  SyntaxHighlighter::clear_highlighting_cache();
  return;
}



/* GDShaderSyntaxHighlighter::set_disabled_branch_color(Color const&) */

void __thiscall
GDShaderSyntaxHighlighter::set_disabled_branch_color(GDShaderSyntaxHighlighter *this,Color *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x368) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x370) = uVar1;
  SyntaxHighlighter::clear_highlighting_cache();
  return;
}



/* ShaderTextEditor::get_edited_shader() const */

void ShaderTextEditor::get_edited_shader(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0xb48) != 0) {
    *in_RDI = *(long *)(in_RSI + 0xb48);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* ShaderTextEditor::get_edited_shader_include() const */

void ShaderTextEditor::get_edited_shader_include(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0xb50) != 0) {
    *in_RDI = *(long *)(in_RSI + 0xb50);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* ShaderTextEditor::set_edited_code(String const&) */

void ShaderTextEditor::set_edited_code(String *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  CallableCustom *pCVar4;
  long in_FS_OFFSET;
  Callable local_98 [16];
  Variant *local_88 [2];
  int local_78 [6];
  int local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)param_1 + 0x368))();
  TextEdit::set_text(*(String **)(param_1 + 0xa10));
  TextEdit::clear_undo_history();
  lVar2 = *(long *)(param_1 + 0xa10);
  pCVar4 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar4);
  *(long *)(pCVar4 + 0x28) = lVar2;
  *(undefined1 (*) [16])(pCVar4 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar4 = &PTR_hash_00123640;
  *(undefined8 *)(pCVar4 + 0x40) = 0;
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  *(undefined8 *)(pCVar4 + 0x10) = 0;
  *(undefined8 *)(pCVar4 + 0x30) = uVar3;
  *(undefined **)(pCVar4 + 0x20) = &_LC22;
  *(code **)(pCVar4 + 0x38) = TextEdit::set_h_scroll;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar4,(int)pCVar4 + 0x28);
  *(char **)(pCVar4 + 0x20) = "TextEdit::set_h_scroll";
  Callable::Callable(local_98,pCVar4);
  Variant::Variant((Variant *)local_78,0);
  Variant::Variant((Variant *)local_60,0);
  local_88[0] = (Variant *)local_78;
  Callable::call_deferredp((Variant **)local_98,(int)local_88);
  if (Variant::needs_deinit[local_60[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable(local_98);
  lVar2 = *(long *)(param_1 + 0xa10);
  pCVar4 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar4);
  *(undefined **)(pCVar4 + 0x20) = &_LC22;
  *(undefined1 (*) [16])(pCVar4 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar4 + 0x40) = 0;
  *(long *)(pCVar4 + 0x28) = lVar2;
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  *(undefined ***)pCVar4 = &PTR_hash_001236d0;
  *(undefined8 *)(pCVar4 + 0x30) = uVar3;
  *(undefined8 *)(pCVar4 + 0x10) = 0;
  *(code **)(pCVar4 + 0x38) = TextEdit::set_v_scroll;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar4,(int)pCVar4 + 0x28);
  *(char **)(pCVar4 + 0x20) = "TextEdit::set_v_scroll";
  Callable::Callable(local_98,pCVar4);
  Variant::Variant((Variant *)local_78,0);
  Variant::Variant((Variant *)local_60,0);
  local_88[0] = (Variant *)local_78;
  Callable::call_deferredp((Variant **)local_98,(int)local_88);
  if (Variant::needs_deinit[local_60[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable(local_98);
  TextEdit::tag_saved_version();
  (**(code **)(*(long *)param_1 + 0x370))(param_1);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    CodeTextEditor::_line_col_changed();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderTextEditor::set_warnings_panel(RichTextLabel*) */

void __thiscall ShaderTextEditor::set_warnings_panel(ShaderTextEditor *this,RichTextLabel *param_1)

{
  *(RichTextLabel **)(this + 0xb40) = param_1;
  return;
}



/* TextShaderEditor::ensure_select_current() */

void TextShaderEditor::ensure_select_current(void)

{
  return;
}



/* TextShaderEditor::goto_line_selection(int, int, int) */

void TextShaderEditor::goto_line_selection(int param_1,int param_2,int param_3)

{
  undefined4 in_register_0000003c;
  
  CodeTextEditor::goto_line_selection
            ((int)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0xa18),param_2,param_3);
  return;
}



/* TextShaderEditor::trim_trailing_whitespace() */

void TextShaderEditor::trim_trailing_whitespace(void)

{
  CodeTextEditor::trim_trailing_whitespace();
  return;
}



/* TextShaderEditor::trim_final_newlines() */

void TextShaderEditor::trim_final_newlines(void)

{
  CodeTextEditor::trim_final_newlines();
  return;
}



/* TextShaderEditor::tag_saved_version() */

void TextShaderEditor::tag_saved_version(void)

{
  TextEdit::tag_saved_version();
  return;
}



/* ShaderTextEditor::set_edited_shader(Ref<Shader> const&, String const&) */

void ShaderTextEditor::set_edited_shader(Ref *param_1,String *param_2)

{
  Callable *pCVar1;
  Callable *pCVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  ShaderTextEditor aSStack_48 [24];
  long local_30;
  
  pCVar1 = *(Callable **)(param_1 + 0xb48);
  pCVar2 = *(Callable **)param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pCVar2 == pCVar1) goto LAB_00100c67;
  if (pCVar1 == (Callable *)0x0) {
    if (pCVar2 != (Callable *)0x0) {
      *(Callable **)(param_1 + 0xb48) = pCVar2;
      cVar4 = RefCounted::reference();
      pOVar5 = (Object *)0x0;
      if (cVar4 == '\0') {
LAB_00100cad:
        *(undefined8 *)(param_1 + 0xb48) = 0;
        goto LAB_00100be0;
      }
    }
  }
  else {
    create_custom_callable_function_pointer<ShaderTextEditor>
              (aSStack_48,(char *)param_1,(_func_void *)"&ShaderTextEditor::_shader_changed");
    Resource::disconnect_changed(pCVar1);
    Callable::~Callable((Callable *)aSStack_48);
    pOVar3 = *(Object **)param_2;
    pOVar5 = *(Object **)(param_1 + 0xb48);
    if (pOVar5 != pOVar3) {
      *(Object **)(param_1 + 0xb48) = pOVar3;
      if (pOVar3 != (Object *)0x0) {
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') goto LAB_00100cad;
      }
LAB_00100be0:
      if (pOVar5 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar5);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
    }
  }
  pOVar5 = *(Object **)(param_1 + 0xb50);
  if (pOVar5 != (Object *)0x0) {
    *(undefined8 *)(param_1 + 0xb50) = 0;
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(pOVar5);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  set_edited_code((String *)param_1);
  pCVar1 = *(Callable **)(param_1 + 0xb48);
  if (pCVar1 != (Callable *)0x0) {
    create_custom_callable_function_pointer<ShaderTextEditor>
              (aSStack_48,(char *)param_1,(_func_void *)"&ShaderTextEditor::_shader_changed");
    Resource::connect_changed(pCVar1,(uint)aSStack_48);
    Callable::~Callable((Callable *)aSStack_48);
  }
LAB_00100c67:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderTextEditor::set_edited_shader_include(Ref<ShaderInclude> const&, String const&) */

void ShaderTextEditor::set_edited_shader_include(Ref *param_1,String *param_2)

{
  Callable *pCVar1;
  Callable *pCVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  ShaderTextEditor aSStack_48 [24];
  long local_30;
  
  pCVar1 = *(Callable **)(param_1 + 0xb50);
  pCVar2 = *(Callable **)param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pCVar2 == pCVar1) goto LAB_00100e57;
  if (pCVar1 == (Callable *)0x0) {
    if (pCVar2 != (Callable *)0x0) {
      *(Callable **)(param_1 + 0xb50) = pCVar2;
      cVar4 = RefCounted::reference();
      pOVar5 = (Object *)0x0;
      if (cVar4 == '\0') {
LAB_00100e9d:
        *(undefined8 *)(param_1 + 0xb50) = 0;
        goto LAB_00100dd0;
      }
    }
  }
  else {
    create_custom_callable_function_pointer<ShaderTextEditor>
              (aSStack_48,(char *)param_1,(_func_void *)"&ShaderTextEditor::_shader_changed");
    Resource::disconnect_changed(pCVar1);
    Callable::~Callable((Callable *)aSStack_48);
    pOVar3 = *(Object **)param_2;
    pOVar5 = *(Object **)(param_1 + 0xb50);
    if (pOVar5 != pOVar3) {
      *(Object **)(param_1 + 0xb50) = pOVar3;
      if (pOVar3 != (Object *)0x0) {
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') goto LAB_00100e9d;
      }
LAB_00100dd0:
      if (pOVar5 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar5);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
    }
  }
  pOVar5 = *(Object **)(param_1 + 0xb48);
  if (pOVar5 != (Object *)0x0) {
    *(undefined8 *)(param_1 + 0xb48) = 0;
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(pOVar5);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  set_edited_code((String *)param_1);
  pCVar1 = *(Callable **)(param_1 + 0xb50);
  if (pCVar1 != (Callable *)0x0) {
    create_custom_callable_function_pointer<ShaderTextEditor>
              (aSStack_48,(char *)param_1,(_func_void *)"&ShaderTextEditor::_shader_changed");
    Resource::connect_changed(pCVar1,(uint)aSStack_48);
    Callable::~Callable((Callable *)aSStack_48);
  }
LAB_00100e57:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderTextEditor::ShaderTextEditor() */

void __thiscall ShaderTextEditor::ShaderTextEditor(ShaderTextEditor *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  Object *local_28;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  CodeTextEditor::CodeTextEditor((CodeTextEditor *)this);
  uVar3 = _LC37;
  *(undefined8 *)(this + 0xb58) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00122e78;
  *(undefined4 *)(this + 0xb60) = 0;
  this[0xb64] = (ShaderTextEditor)0x0;
  *(undefined4 *)(this + 0xb68) = 0;
  *(undefined4 *)(this + 0xb24) = uVar3;
  *(undefined4 *)(this + 0xb28) = uVar3;
  *(undefined4 *)(this + 0xb2c) = uVar3;
  *(undefined4 *)(this + 0xb30) = uVar3;
  *(undefined1 (*) [16])(this + 0xb38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb48) = (undefined1  [16])0x0;
  Ref<GDShaderSyntaxHighlighter>::instantiate<>((Ref<GDShaderSyntaxHighlighter> *)(this + 0xb38));
  local_28 = (Object *)0x0;
  uVar2 = *(undefined8 *)(this + 0xa10);
  if (*(long *)(this + 0xb38) != 0) {
    pOVar5 = (Object *)
             __dynamic_cast(*(long *)(this + 0xb38),&Object::typeinfo,&SyntaxHighlighter::typeinfo,0
                           );
    if (pOVar5 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      local_28 = pOVar5;
      if (cVar4 == '\0') {
        local_28 = (Object *)0x0;
      }
    }
  }
  TextEdit::set_syntax_highlighter(uVar2);
  if (local_28 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_28);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)local_28 + 0x140))(local_28);
        Memory::free_static(local_28,false);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TextShaderEditor::_apply_editor_settings() */

void __thiscall TextShaderEditor::_apply_editor_settings(TextShaderEditor *this)

{
  TextShaderEditor TVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  CodeTextEditor::update_editor_settings();
  local_60 = 0;
  local_58 = "text_editor/behavior/files/trim_trailing_whitespace_on_save";
  local_50 = 0x3b;
  String::parse_latin1((StrRange *)&local_60);
  _EDITOR_GET((String *)local_48);
  TVar1 = (TextShaderEditor)Variant::operator_cast_to_bool((Variant *)local_48);
  this[0xa3c] = TVar1;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "text_editor/behavior/files/trim_final_newlines_on_save";
  local_60 = 0;
  local_50 = 0x36;
  String::parse_latin1((StrRange *)&local_60);
  _EDITOR_GET((String *)local_48);
  TVar1 = (TextShaderEditor)Variant::operator_cast_to_bool((Variant *)local_48);
  this[0xa3d] = TVar1;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TextShaderEditor::_editor_settings_changed() */

void __thiscall TextShaderEditor::_editor_settings_changed(TextShaderEditor *this)

{
  char cVar1;
  String *pSVar2;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = EditorThemeManager::is_generated_theme_outdated();
  if (cVar1 == '\0') {
    pSVar2 = (String *)EditorSettings::get_singleton();
    local_58 = 0;
    local_48 = "interface/editor";
    local_40 = 0x10;
    String::parse_latin1((StrRange *)&local_58);
    cVar1 = EditorSettings::check_changed_settings_in_group(pSVar2);
    if (cVar1 == '\0') {
      pSVar2 = (String *)EditorSettings::get_singleton();
      local_50 = 0;
      local_40 = 0xb;
      local_48 = "text_editor";
      String::parse_latin1((StrRange *)&local_50);
      cVar1 = EditorSettings::check_changed_settings_in_group(pSVar2);
      if (cVar1 == '\0') {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_001012c2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    _apply_editor_settings(this);
    return;
  }
LAB_001012c2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::initialize_class() [clone .part.0] */

void Resource::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
    if ((code *)PTR__bind_methods_0012b008 != RefCounted::_bind_methods) {
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
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ShaderTextEditor::_check_shader_mode() */

void __thiscall ShaderTextEditor::_check_shader_mode(ShaderTextEditor *this)

{
  String *pSVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  String local_40 [8];
  CowData<char32_t> local_38 [8];
  long local_30;
  
  iVar5 = 1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  TextEdit::get_text();
  ShaderLanguage::get_shader_type(local_40);
  CowData<char32_t>::_unref(local_38);
  cVar2 = String::operator==(local_40,"canvas_item");
  if (cVar2 == '\0') {
    iVar5 = 2;
    cVar2 = String::operator==(local_40,"particles");
    if (cVar2 == '\0') {
      iVar5 = 3;
      cVar2 = String::operator==(local_40,"sky");
      if (cVar2 == '\0') {
        bVar3 = String::operator==(local_40,"fog");
        iVar5 = (uint)bVar3 << 2;
      }
    }
  }
  iVar4 = (**(code **)(**(long **)(this + 0xb48) + 0x1d0))();
  if (iVar4 != iVar5) {
    this[0xb64] = (ShaderTextEditor)0x1;
    pSVar1 = *(String **)(this + 0xb48);
    TextEdit::get_text();
    Shader::set_code(pSVar1);
    CowData<char32_t>::_unref(local_38);
    this[0xb64] = (ShaderTextEditor)0x0;
    (**(code **)(*(long *)this + 0x368))(this);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_40);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TextShaderEditor::apply_shaders() */

void __thiscall TextShaderEditor::apply_shaders(TextShaderEditor *this)

{
  undefined8 uVar1;
  char cVar2;
  long in_FS_OFFSET;
  CowData<char32_t> local_30 [8];
  String local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  TextEdit::get_text();
  if (*(long *)(this + 0xa28) != 0) {
    Shader::get_code();
    cVar2 = String::operator!=(local_28,(String *)local_30);
    if ((cVar2 != '\0') || (*(int *)(this + 0xa38) != *(int *)(*(long *)(this + 0xa18) + 0xb68))) {
      *(undefined1 *)(*(long *)(this + 0xa18) + 0xb64) = 1;
      Shader::set_code(*(String **)(this + 0xa28));
      uVar1 = *(undefined8 *)(this + 0xa28);
      *(undefined1 *)(*(long *)(this + 0xa18) + 0xb64) = 0;
      Object::set_edited(SUB81(uVar1,0));
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_28);
  }
  if (*(long *)(this + 0xa30) != 0) {
    ShaderInclude::get_code();
    cVar2 = String::operator!=(local_28,(String *)local_30);
    if ((cVar2 != '\0') || (*(int *)(this + 0xa38) != *(int *)(*(long *)(this + 0xa18) + 0xb68))) {
      *(undefined1 *)(*(long *)(this + 0xa18) + 0xb64) = 1;
      ShaderInclude::set_code(*(String **)(this + 0xa30));
      uVar1 = *(undefined8 *)(this + 0xa30);
      *(undefined1 *)(*(long *)(this + 0xa18) + 0xb64) = 0;
      Object::set_edited(SUB81(uVar1,0));
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_28);
  }
  *(undefined4 *)(this + 0xa38) = *(undefined4 *)(*(long *)(this + 0xa18) + 0xb68);
  CowData<char32_t>::_unref(local_30);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderTextEditor::_update_warning_panel() */

void ShaderTextEditor::_update_warning_panel(void)

{
  undefined8 uVar1;
  StringName *pSVar2;
  String *pSVar3;
  int iVar4;
  int iVar5;
  String *in_RDI;
  long lVar6;
  long in_FS_OFFSET;
  StrRange *local_108;
  String local_c0 [8];
  CowData<char32_t> local_b8 [8];
  String local_b0 [8];
  undefined8 local_a8;
  String local_a0 [8];
  CowData<char32_t> local_98 [8];
  String local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  RichTextLabel::push_table(*(undefined8 *)(in_RDI + 0xb40),2,0,0xffffffff);
  if ((*(long **)(in_RDI + 0xb58) != (long *)0x0) &&
     (lVar6 = **(long **)(in_RDI + 0xb58), lVar6 != 0)) {
    if (saved_treat_warning_as_errors != '\0') {
      local_78 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_78);
      local_68 = "Warnings should be fixed to prevent errors.";
      local_80 = 0;
      local_60 = 0x2b;
      String::parse_latin1((StrRange *)&local_80);
      TTR((String *)&local_70,(String *)&local_80);
      local_68 = " ";
      local_88 = 0;
      local_60 = 1;
      String::parse_latin1((StrRange *)&local_88);
      ShaderWarning::get_message();
      local_a8 = 0;
      local_68 = "): ";
      local_60 = 3;
      String::parse_latin1((StrRange *)&local_a8);
      ShaderWarning::get_line();
      itos((long)local_b8);
      operator+((char *)local_b0,(String *)"error(");
      String::operator+(local_a0,local_b0);
      String::operator+(local_90,local_a0);
      String::operator+((String *)&local_68,local_90);
      String::operator+(local_c0,(String *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
      CowData<char32_t>::_unref(local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref(local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      iVar4 = ShaderWarning::get_line();
      CodeTextEditor::set_error_pos((int)in_RDI,iVar4 + -1);
      CodeTextEditor::set_error(in_RDI);
      uVar1 = *(undefined8 *)(in_RDI + 0xa10);
      iVar4 = ShaderWarning::get_line();
      TextEdit::set_line_background_color((int)uVar1,(Color *)(ulong)(iVar4 - 1));
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
    }
    local_108 = (StrRange *)&local_70;
    do {
      iVar4 = ShaderWarning::get_line();
      RichTextLabel::push_cell();
      pSVar2 = *(StringName **)(in_RDI + 0xb40);
      if ((_update_warning_panel()::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar5 = __cxa_guard_acquire(&_update_warning_panel()::{lambda()#1}::operator()()::sname),
         iVar5 != 0)) {
        _scs_create((char *)&_update_warning_panel()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_update_warning_panel()::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_update_warning_panel()::{lambda()#1}::operator()()::sname);
      }
      local_58[0] = Control::get_theme_color
                              (pSVar2,(StringName *)
                                      &_update_warning_panel()::{lambda()#1}::operator()()::sname);
      RichTextLabel::push_color((Color *)pSVar2);
      if (iVar4 == -1) {
        pSVar3 = *(String **)(in_RDI + 0xb40);
        local_68 = ":";
        local_70 = 0;
        local_60 = 1;
        String::parse_latin1(local_108);
        ShaderWarning::get_name();
        String::operator+((String *)&local_68,(String *)&local_78);
        RichTextLabel::add_text(pSVar3);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
      }
      else {
        uVar1 = *(undefined8 *)(in_RDI + 0xb40);
        local_68 = (char *)0x0;
        Variant::Variant((Variant *)local_58,iVar4 + -1);
        RichTextLabel::push_meta(uVar1,(Variant *)local_58,1,(CowData<char32_t> *)&local_68);
        if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        pSVar3 = *(String **)(in_RDI + 0xb40);
        ShaderWarning::get_name();
        local_68 = "";
        local_80 = 0;
        local_60 = 0;
        String::parse_latin1((StrRange *)&local_80);
        local_68 = "Line %d (%s):";
        local_88 = 0;
        local_60 = 0xd;
        String::parse_latin1((StrRange *)&local_88);
        TTR((String *)&local_78,(String *)&local_88);
        vformat<int,String>((CowData<char32_t> *)&local_68,(String *)&local_78,iVar4,local_108);
        RichTextLabel::add_text(pSVar3);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
        RichTextLabel::pop();
      }
      RichTextLabel::pop();
      RichTextLabel::pop();
      RichTextLabel::push_cell();
      pSVar3 = *(String **)(in_RDI + 0xb40);
      ShaderWarning::get_message();
      RichTextLabel::add_text(pSVar3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      RichTextLabel::pop();
      lVar6 = *(long *)(lVar6 + 0x20);
    } while (lVar6 != 0);
  }
  RichTextLabel::pop();
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  CodeTextEditor::set_warning_count((int)in_RDI);
  return;
}



/* ShaderTextEditor::_notification(int) */

void __thiscall ShaderTextEditor::_notification(ShaderTextEditor *this,int param_1)

{
  char cVar1;
  
  if (param_1 != 0x2d) {
    return;
  }
  cVar1 = CanvasItem::is_visible_in_tree();
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x368))(this);
    if (((*(long *)(this + 0xb58) != 0) && (0 < *(int *)(*(long *)(this + 0xb58) + 0x10))) &&
       (*(int *)(this + 0xb60) == 0)) {
      RichTextLabel::clear();
      _update_warning_panel();
      return;
    }
  }
  return;
}



/* TextShaderEditor::_menu_option(int) */

void __thiscall TextShaderEditor::_menu_option(TextShaderEditor *this,int param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  String *pSVar4;
  int iVar5;
  long *plVar6;
  CallableCustom *this_00;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58 [2];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  TextEdit::apply_ime();
  switch(param_1) {
  case 0:
    TextEdit::undo();
    break;
  case 1:
    TextEdit::redo();
    break;
  case 2:
    TextEdit::cut((int)*(undefined8 *)(*(long *)(this + 0xa18) + 0xa10));
    break;
  case 3:
    TextEdit::copy((int)*(undefined8 *)(*(long *)(this + 0xa18) + 0xa10));
    break;
  case 4:
    TextEdit::paste((int)*(undefined8 *)(*(long *)(this + 0xa18) + 0xa10));
    break;
  case 5:
    TextEdit::select_all();
    break;
  case 6:
    CodeEdit::move_lines_up();
    break;
  case 7:
    CodeEdit::move_lines_down();
    break;
  case 8:
    if ((*(long *)(this + 0xa28) != 0) || (*(long *)(this + 0xa30) != 0)) {
      CodeEdit::indent_lines();
      break;
    }
    goto LAB_0010205a;
  case 9:
    if ((*(long *)(this + 0xa28) == 0) && (*(long *)(this + 0xa30) == 0)) goto LAB_0010205a;
    CodeEdit::unindent_lines();
    break;
  case 10:
    CodeEdit::delete_lines();
    break;
  case 0xb:
    CodeEdit::duplicate_selection();
    break;
  case 0xc:
    CodeEdit::duplicate_lines();
    break;
  case 0xd:
    iVar5 = TextEdit::get_line_wrapping_mode();
    TextEdit::set_line_wrapping_mode(*(undefined8 *)(*(long *)(this + 0xa18) + 0xa10),iVar5 != 1);
    break;
  case 0xe:
    if ((*(long *)(this + 0xa28) == 0) && (*(long *)(this + 0xa30) == 0)) goto LAB_0010205a;
    pSVar4 = *(String **)(this + 0xa18);
    local_58[0] = 0;
    String::parse_latin1((String *)local_58,"//");
    CodeTextEditor::toggle_inline_comment(pSVar4);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    break;
  case 0xf:
    CodeEdit::request_code_completion(SUB81(*(undefined8 *)(*(long *)(this + 0xa18) + 0xa10),0));
    break;
  case 0x10:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      FindReplaceBar::popup_search(SUB81(*(undefined8 *)(*(long *)(this + 0xa18) + 0xa18),0));
      return;
    }
    goto LAB_001024eb;
  case 0x11:
    FindReplaceBar::search_next();
    break;
  case 0x12:
    FindReplaceBar::search_prev();
    break;
  case 0x13:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      FindReplaceBar::popup_replace();
      return;
    }
    goto LAB_001024eb;
  case 0x14:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      GotoLinePopup::popup_find_line(*(CodeTextEditor **)(this + 0xa00));
      return;
    }
    goto LAB_001024eb;
  case 0x15:
    CodeTextEditor::toggle_bookmark();
    break;
  case 0x16:
    CodeTextEditor::goto_next_bookmark();
    break;
  case 0x17:
    CodeTextEditor::goto_prev_bookmark();
    break;
  case 0x18:
    CodeTextEditor::remove_all_bookmarks();
    break;
  case 0x19:
    plVar6 = (long *)OS::get_singleton();
    local_60 = 0;
    pcVar1 = *(code **)(*plVar6 + 0x150);
    String::parse_latin1((String *)&local_60,"%s/tutorials/shaders/shader_reference/index.html");
    vformat<char_const*>((String *)local_58,(char *)&local_60);
    (*pcVar1)(plVar6,(String *)local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    break;
  case 0x1a:
    TextEdit::show_emoji_and_symbol_picker();
  }
  lVar2 = *(long *)(*(long *)(this + 0xa18) + 0xa10);
  this_00 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_00);
  *(undefined **)(this_00 + 0x20) = &_LC22;
  *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_00 = &PTR_hash_00123760;
  *(undefined8 *)(this_00 + 0x40) = 0;
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x30) = uVar3;
  *(long *)(this_00 + 0x28) = lVar2;
  *(code **)(this_00 + 0x38) = Control::grab_focus;
  CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
  *(char **)(this_00 + 0x20) = "Control::grab_focus";
  Callable::Callable((Callable *)local_58,this_00);
  Variant::Variant((Variant *)local_48,0);
  Callable::call_deferredp((Variant **)local_58,0);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable((Callable *)local_58);
LAB_0010205a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001024eb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TextShaderEditor::_bookmark_item_pressed(int) */

void __thiscall TextShaderEditor::_bookmark_item_pressed(TextShaderEditor *this,int param_1)

{
  undefined8 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 4) {
    iVar2 = PopupMenu::get_item_id((int)*(undefined8 *)(this + 0x9d8));
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _menu_option(this,iVar2);
      return;
    }
  }
  else {
    uVar1 = *(undefined8 *)(this + 0xa18);
    PopupMenu::get_item_metadata((int)local_38);
    iVar2 = Variant::operator_cast_to_int((Variant *)local_38);
    CodeTextEditor::goto_line((int)uVar1,iVar2);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderTextEditor::set_edited_shader(Ref<Shader> const&) */

void __thiscall ShaderTextEditor::set_edited_shader(ShaderTextEditor *this,Ref *param_1)

{
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Shader::get_code();
  set_edited_shader((Ref *)this,(String *)param_1);
  CowData<char32_t>::_unref(aCStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderTextEditor::set_edited_shader_include(Ref<ShaderInclude> const&) */

void __thiscall ShaderTextEditor::set_edited_shader_include(ShaderTextEditor *this,Ref *param_1)

{
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ShaderInclude::get_code();
  set_edited_shader_include((Ref *)this,(String *)param_1);
  CowData<char32_t>::_unref(aCStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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



/* List<String, DefaultAllocator>::push_back(String const&) [clone .isra.0] */

void __thiscall
List<String,DefaultAllocator>::push_back(List<String,DefaultAllocator> *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar3) [16];
  
  if (*(long *)this == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref(this_00,(CowData *)param_1);
  }
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(this_00 + 8) = 0;
  *(long **)(this_00 + 0x18) = plVar1;
  *(long *)(this_00 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = this_00;
  }
  plVar1[1] = (long)this_00;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)this_00;
  return;
}



/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */

void __thiscall
List<PropertyInfo,DefaultAllocator>::push_back
          (List<PropertyInfo,DefaultAllocator> *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  
  if (*(long *)this == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  lVar2 = *(long *)(param_1 + 8);
  *puVar3 = 0;
  puVar3[6] = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = *(undefined4 *)param_1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  if (*(long *)(puVar3 + 8) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
  }
  puVar3[10] = *(undefined4 *)(param_1 + 0x28);
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(long **)(puVar3 + 0x10) = plVar1;
  *(long *)(puVar3 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar3;
  }
  plVar1[1] = (long)puVar3;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)puVar3;
  return;
}



/* TextShaderEditor::_update_warnings(bool) */

void __thiscall TextShaderEditor::_update_warnings(TextShaderEditor *this,bool param_1)

{
  long *plVar1;
  Object *pOVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  char *pcVar6;
  undefined8 uVar7;
  int iVar8;
  long in_FS_OFFSET;
  bool bVar9;
  bool local_8e;
  int local_7c;
  long local_78;
  CowData<char32_t> local_70 [8];
  long local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_60,"debug/shader_language/warnings/enable",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  cVar4 = Variant::booleanize();
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  bVar9 = saved_warnings_enabled != cVar4;
  if (bVar9) {
    saved_warnings_enabled = cVar4;
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_60,"debug/shader_language/warnings/treat_warnings_as_errors",false
            );
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  cVar4 = Variant::booleanize();
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  local_8e = saved_treat_warning_as_errors != cVar4;
  if (local_8e) {
    saved_treat_warning_as_errors = cVar4;
  }
  local_8e = local_8e || bVar9;
  iVar8 = 0;
  bVar9 = false;
  do {
    local_7c = iVar8;
    ProjectSettings::get_singleton();
    ShaderWarning::get_name_from_code(&local_78,iVar8);
    String::to_lower();
    operator+((char *)&local_68,(String *)"debug/shader_language/warnings/");
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    ProjectSettings::get_setting_with_override((StringName *)local_58);
    bVar5 = Variant::operator_cast_to_bool((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
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
    CowData<char32_t>::_unref(local_70);
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
    pcVar6 = (char *)HashMap<ShaderWarning::Code,bool,HashMapHasherDefault,HashMapComparatorDefault<ShaderWarning::Code>,DefaultTypedAllocator<HashMapElement<ShaderWarning::Code,bool>>>
                     ::operator[]((HashMap<ShaderWarning::Code,bool,HashMapHasherDefault,HashMapComparatorDefault<ShaderWarning::Code>,DefaultTypedAllocator<HashMapElement<ShaderWarning::Code,bool>>>
                                   *)saved_warnings,(Code *)&local_7c);
    if ((bool)*pcVar6 != bVar5) {
      uVar7 = HashMap<ShaderWarning::Code,bool,HashMapHasherDefault,HashMapComparatorDefault<ShaderWarning::Code>,DefaultTypedAllocator<HashMapElement<ShaderWarning::Code,bool>>>
              ::operator[]((HashMap<ShaderWarning::Code,bool,HashMapHasherDefault,HashMapComparatorDefault<ShaderWarning::Code>,DefaultTypedAllocator<HashMapElement<ShaderWarning::Code,bool>>>
                            *)saved_warnings,(Code *)&local_7c);
      bVar9 = true;
      *(bool *)uVar7 = bVar5;
      local_8e = true;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 10);
  if (bVar9) {
    saved_warning_flags = ShaderWarning::get_flags_from_codemap((HashMap *)saved_warnings);
  }
  if ((((local_8e) && (param_1)) && (*(long *)(this + 0xa18) != 0)) &&
     (pOVar2 = *(Object **)(*(long *)(this + 0xa18) + 0xb48), pOVar2 != (Object *)0x0)) {
    cVar4 = RefCounted::reference();
    if (cVar4 != '\0') {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        CodeTextEditor::validate_script();
        return;
      }
      goto LAB_00102c20;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102c20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TextShaderEditor::_project_settings_changed() */

void __thiscall TextShaderEditor::_project_settings_changed(TextShaderEditor *this)

{
  _update_warnings(this,true);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShaderTextEditor::_load_theme_settings() */

void ShaderTextEditor::_load_theme_settings(void)

{
  long *plVar1;
  String *pSVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  String *pSVar6;
  StringName *pSVar7;
  code *pcVar8;
  Object *pOVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  CowData<char32_t> *pCVar14;
  undefined1 (*pauVar15) [16];
  long lVar16;
  bool bVar17;
  long lVar18;
  long in_RDI;
  uint uVar19;
  Color *pCVar20;
  Object *pOVar21;
  long lVar22;
  long *plVar23;
  long in_FS_OFFSET;
  undefined8 uVar24;
  float in_XMM1_Da;
  float in_XMM1_Db;
  String *local_188;
  long *local_120;
  undefined8 *local_118;
  undefined1 (*local_110) [16];
  long local_108;
  long local_100;
  long local_f8;
  Object *local_f0;
  char *local_e8;
  size_t local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98 [2];
  undefined8 local_88 [2];
  undefined8 local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar2 = *(String **)(in_RDI + 0xa10);
  local_e8 = (char *)0x0;
  String::parse_latin1((String *)&local_e8,"text_editor/theme/highlighting/mark_color");
  _EDITOR_GET((String *)local_58);
  local_d8 = Variant::operator_cast_to_Color((Variant *)local_58);
  uStack_d0 = CONCAT44(in_XMM1_Db,in_XMM1_Da);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if (((((float)local_d8 != *(float *)(in_RDI + 0xb24)) ||
       (local_d8._4_4_ != *(float *)(in_RDI + 0xb28))) ||
      ((float)uStack_d0 != *(float *)(in_RDI + 0xb2c))) ||
     (uStack_d0._4_4_ != *(float *)(in_RDI + 0xb30))) {
    pCVar20 = (Color *)0x0;
    iVar11 = TextEdit::get_line_count();
    if (0 < iVar11) {
      do {
        uVar24 = TextEdit::get_line_background_color((int)pSVar2);
        if ((((float)uVar24 == *(float *)(in_RDI + 0xb24)) &&
            ((float)((ulong)uVar24 >> 0x20) == *(float *)(in_RDI + 0xb28))) &&
           ((in_XMM1_Da == *(float *)(in_RDI + 0xb2c) && (in_XMM1_Db == *(float *)(in_RDI + 0xb30)))
           )) {
          TextEdit::set_line_background_color((int)pSVar2,pCVar20);
        }
        uVar19 = (int)pCVar20 + 1;
        pCVar20 = (Color *)(ulong)uVar19;
        iVar11 = TextEdit::get_line_count();
      } while ((int)uVar19 < iVar11);
    }
    *(undefined8 *)(in_RDI + 0xb24) = local_d8;
    *(undefined8 *)(in_RDI + 0xb2c) = uStack_d0;
  }
  local_e8 = (char *)0x0;
  uVar24 = *(undefined8 *)(in_RDI + 0xb38);
  String::parse_latin1((String *)&local_e8,"text_editor/theme/highlighting/number_color");
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_Color((Variant *)local_58);
  CodeHighlighter::set_number_color(uVar24);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e8 = (char *)0x0;
  uVar24 = *(undefined8 *)(in_RDI + 0xb38);
  String::parse_latin1((String *)&local_e8,"text_editor/theme/highlighting/symbol_color");
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_Color((Variant *)local_58);
  CodeHighlighter::set_symbol_color(uVar24);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e8 = (char *)0x0;
  uVar24 = *(undefined8 *)(in_RDI + 0xb38);
  String::parse_latin1((String *)&local_e8,"text_editor/theme/highlighting/function_color");
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_Color((Variant *)local_58);
  CodeHighlighter::set_function_color(uVar24);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e8 = (char *)0x0;
  uVar24 = *(undefined8 *)(in_RDI + 0xb38);
  String::parse_latin1((String *)&local_e8,"text_editor/theme/highlighting/member_variable_color");
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_Color((Variant *)local_58);
  CodeHighlighter::set_member_variable_color(uVar24);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CodeHighlighter::clear_keyword_colors();
  local_e8 = (char *)0x0;
  String::parse_latin1((String *)&local_e8,"text_editor/theme/highlighting/keyword_color");
  _EDITOR_GET((String *)local_58);
  local_c8 = Variant::operator_cast_to_Color((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e8 = (char *)0x0;
  String::parse_latin1
            ((String *)&local_e8,"text_editor/theme/highlighting/control_flow_keyword_color");
  _EDITOR_GET((String *)local_58);
  local_b8 = Variant::operator_cast_to_Color((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_120 = (long *)0x0;
  ShaderLanguage::get_keyword_list((List *)&local_120);
  if (local_120 != (long *)0x0) {
    for (pCVar20 = (Color *)*local_120; pCVar20 != (Color *)0x0; pCVar20 = *(Color **)(pCVar20 + 8))
    {
      while( true ) {
        local_e8 = (char *)0x0;
        if (*(long *)pCVar20 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)pCVar20);
        }
        cVar10 = ShaderLanguage::is_control_flow_keyword((String *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        if (cVar10 != '\0') break;
        CodeHighlighter::add_keyword_color(*(String **)(in_RDI + 0xb38),pCVar20);
        pCVar20 = *(Color **)(pCVar20 + 8);
        if (pCVar20 == (Color *)0x0) goto LAB_00103133;
      }
      CodeHighlighter::add_keyword_color(*(String **)(in_RDI + 0xb38),pCVar20);
    }
  }
LAB_00103133:
  local_118 = (undefined8 *)0x0;
  ShaderPreprocessor::get_keyword_list((List *)&local_118,false,false);
  if (local_118 != (undefined8 *)0x0) {
    for (pCVar20 = (Color *)*local_118; pCVar20 != (Color *)0x0; pCVar20 = *(Color **)(pCVar20 + 8))
    {
      CodeHighlighter::add_keyword_color(*(String **)(in_RDI + 0xb38),pCVar20);
    }
  }
  uVar24 = ShaderTypes::singleton;
  local_110 = (undefined1 (*) [16])0x0;
  if (*(long *)(in_RDI + 0xb50) == 0) {
    pauVar15 = *(undefined1 (**) [16])(in_RDI + 0xb48);
    if (pauVar15 != (undefined1 (*) [16])0x0) {
      uVar12 = (**(code **)(*(long *)*pauVar15 + 0x1d0))(pauVar15);
      lVar13 = ShaderTypes::get_functions(uVar24,uVar12);
      uVar24 = ShaderTypes::singleton;
      pauVar15 = local_110;
      for (puVar3 = *(undefined8 **)(lVar13 + 0x18); ShaderTypes::singleton = uVar24,
          local_110 = pauVar15, puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
        plVar23 = (long *)puVar3[6];
        if (plVar23 != (long *)0x0) {
          lVar13 = plVar23[2];
          if (lVar13 != 0) goto LAB_00104195;
          local_f0 = (Object *)0x0;
          do {
            if (pauVar15 == (undefined1 (*) [16])0x0) {
              pauVar15 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
              *(undefined4 *)pauVar15[1] = 0;
              *pauVar15 = (undefined1  [16])0x0;
              local_110 = pauVar15;
            }
            while( true ) {
              pCVar14 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
              *(undefined1 (*) [16])pCVar14 = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(pCVar14 + 0x10) = (undefined1  [16])0x0;
              if (local_f0 != (Object *)0x0) {
                CowData<char32_t>::_ref(pCVar14,(CowData *)&local_f0);
              }
              lVar13 = *(long *)(*pauVar15 + 8);
              *(undefined1 (**) [16])(pCVar14 + 0x18) = pauVar15;
              *(undefined8 *)(pCVar14 + 8) = 0;
              *(long *)(pCVar14 + 0x10) = lVar13;
              if (lVar13 != 0) {
                *(CowData<char32_t> **)(lVar13 + 8) = pCVar14;
              }
              lVar13 = *(long *)*pauVar15;
              *(CowData<char32_t> **)(*pauVar15 + 8) = pCVar14;
              if (lVar13 == 0) {
                *(CowData<char32_t> **)*pauVar15 = pCVar14;
              }
              *(int *)pauVar15[1] = *(int *)pauVar15[1] + 1;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
              plVar23 = (long *)*plVar23;
              if (plVar23 == (long *)0x0) goto LAB_00104242;
              lVar13 = plVar23[2];
              if (lVar13 != 0) break;
              local_f0 = (Object *)0x0;
            }
LAB_00104195:
            pcVar5 = *(char **)(lVar13 + 8);
            local_f0 = (Object *)0x0;
            if (pcVar5 == (char *)0x0) {
              if (*(long *)(lVar13 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)(lVar13 + 0x10));
              }
            }
            else {
              local_e0 = strlen(pcVar5);
              local_e8 = pcVar5;
              String::parse_latin1((StrRange *)&local_f0);
            }
          } while( true );
        }
LAB_00104242:
        uVar24 = ShaderTypes::singleton;
        pauVar15 = local_110;
      }
      uVar12 = (**(code **)(**(long **)(in_RDI + 0xb48) + 0x1d0))();
      lVar16 = ShaderTypes::get_modes(uVar24,uVar12);
      lVar13 = *(long *)(lVar16 + 8);
      pauVar15 = local_110;
      if (lVar13 != 0) {
        lVar18 = 0;
        do {
          pauVar15 = local_110;
          if (*(long *)(lVar13 + -8) <= lVar18) break;
          plVar23 = (long *)(lVar13 + lVar18 * 0x18);
          lVar13 = plVar23[2];
          if (lVar13 == 0) {
            lVar13 = *plVar23;
            if (lVar13 == 0) {
              local_e8 = (char *)0x0;
            }
            else {
              local_e8 = (char *)0x0;
              if (*(char **)(lVar13 + 8) == (char *)0x0) {
                if (*(long *)(lVar13 + 0x10) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)(lVar13 + 0x10))
                  ;
                }
              }
              else {
                String::parse_latin1((String *)&local_e8,*(char **)(lVar13 + 8));
              }
            }
            List<String,DefaultAllocator>::push_back
                      ((List<String,DefaultAllocator> *)&local_110,(String *)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          }
          else {
            lVar22 = 0;
            do {
              local_188 = (String *)&local_f0;
              if (*(long *)(lVar13 + -8) <= lVar22) break;
              lVar13 = *(long *)(lVar13 + lVar22 * 8);
              if (lVar13 == 0) {
                local_f0 = (Object *)0x0;
              }
              else {
                local_f0 = (Object *)0x0;
                if (*(char **)(lVar13 + 8) == (char *)0x0) {
                  if (*(long *)(lVar13 + 0x10) != 0) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)local_188,(CowData *)(lVar13 + 0x10));
                  }
                }
                else {
                  String::parse_latin1(local_188,*(char **)(lVar13 + 8));
                }
              }
              local_100 = 0;
              local_e8 = "_";
              local_e0 = 1;
              String::parse_latin1((StrRange *)&local_100);
              lVar13 = *plVar23;
              if (lVar13 == 0) {
                local_108 = 0;
              }
              else {
                local_108 = 0;
                if (*(char **)(lVar13 + 8) == (char *)0x0) {
                  if (*(long *)(lVar13 + 0x10) != 0) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)&local_108,(CowData *)(lVar13 + 0x10));
                  }
                }
                else {
                  String::parse_latin1((String *)&local_108,*(char **)(lVar13 + 8));
                }
              }
              lVar22 = lVar22 + 1;
              String::operator+((String *)&local_f8,(String *)&local_108);
              String::operator+((String *)&local_e8,(String *)&local_f8);
              List<String,DefaultAllocator>::push_back
                        ((List<String,DefaultAllocator> *)&local_110,(String *)&local_e8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_188);
              lVar13 = plVar23[2];
            } while (lVar13 != 0);
          }
          lVar13 = *(long *)(lVar16 + 8);
          lVar18 = lVar18 + 1;
          pauVar15 = local_110;
        } while (lVar13 != 0);
      }
    }
  }
  else {
    pauVar15 = (undefined1 (*) [16])0x0;
    iVar11 = 0;
    do {
      lVar13 = ShaderTypes::get_functions(ShaderTypes::singleton,iVar11);
      for (puVar3 = *(undefined8 **)(lVar13 + 0x18); puVar3 != (undefined8 *)0x0;
          puVar3 = (undefined8 *)*puVar3) {
        for (puVar4 = (undefined8 *)puVar3[6]; puVar4 != (undefined8 *)0x0;
            puVar4 = (undefined8 *)*puVar4) {
          lVar13 = puVar4[2];
          if (lVar13 == 0) {
            local_f0 = (Object *)0x0;
          }
          else {
            pcVar5 = *(char **)(lVar13 + 8);
            local_f0 = (Object *)0x0;
            if (pcVar5 == (char *)0x0) {
              if (*(long *)(lVar13 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)(lVar13 + 0x10));
              }
            }
            else {
              local_e0 = strlen(pcVar5);
              local_e8 = pcVar5;
              String::parse_latin1((StrRange *)&local_f0);
            }
          }
          if (pauVar15 == (undefined1 (*) [16])0x0) {
            pauVar15 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined4 *)pauVar15[1] = 0;
            *pauVar15 = (undefined1  [16])0x0;
            local_110 = pauVar15;
          }
          pCVar14 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
          *(undefined1 (*) [16])pCVar14 = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pCVar14 + 0x10) = (undefined1  [16])0x0;
          if (local_f0 != (Object *)0x0) {
            CowData<char32_t>::_ref(pCVar14,(CowData *)&local_f0);
          }
          pOVar21 = local_f0;
          lVar13 = *(long *)(*pauVar15 + 8);
          *(undefined8 *)(pCVar14 + 8) = 0;
          *(undefined1 (**) [16])(pCVar14 + 0x18) = pauVar15;
          *(long *)(pCVar14 + 0x10) = lVar13;
          if (lVar13 != 0) {
            *(CowData<char32_t> **)(lVar13 + 8) = pCVar14;
          }
          lVar13 = *(long *)*pauVar15;
          *(CowData<char32_t> **)(*pauVar15 + 8) = pCVar14;
          if (lVar13 == 0) {
            *(CowData<char32_t> **)*pauVar15 = pCVar14;
          }
          *(int *)pauVar15[1] = *(int *)pauVar15[1] + 1;
          if (local_f0 != (Object *)0x0) {
            LOCK();
            plVar23 = (long *)((long)local_f0 + -0x10);
            *plVar23 = *plVar23 + -1;
            UNLOCK();
            pauVar15 = local_110;
            if (*plVar23 == 0) {
              local_f0 = (Object *)0x0;
              Memory::free_static((void *)((long)pOVar21 + -0x10),false);
              pauVar15 = local_110;
            }
          }
        }
      }
      lVar16 = ShaderTypes::get_modes(ShaderTypes::singleton,iVar11);
      lVar13 = *(long *)(lVar16 + 8);
      if (lVar13 != 0) {
        lVar18 = 0;
        do {
          if (*(long *)(lVar13 + -8) <= lVar18) break;
          plVar23 = (long *)(lVar13 + lVar18 * 0x18);
          lVar13 = plVar23[2];
          if (lVar13 == 0) {
            lVar13 = *plVar23;
            if (lVar13 == 0) {
              local_f0 = (Object *)0x0;
            }
            else {
              pcVar5 = *(char **)(lVar13 + 8);
              if (pcVar5 == (char *)0x0) {
                local_f0 = (Object *)0x0;
                if (*(long *)(lVar13 + 0x10) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)(lVar13 + 0x10))
                  ;
                }
              }
              else {
                local_f0 = (Object *)0x0;
                local_e0 = strlen(pcVar5);
                local_e8 = pcVar5;
                String::parse_latin1((StrRange *)&local_f0);
              }
            }
            if (pauVar15 == (undefined1 (*) [16])0x0) {
              pauVar15 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
              *(undefined4 *)pauVar15[1] = 0;
              *pauVar15 = (undefined1  [16])0x0;
              local_110 = pauVar15;
            }
            pCVar14 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
            *(undefined1 (*) [16])pCVar14 = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pCVar14 + 0x10) = (undefined1  [16])0x0;
            if (local_f0 != (Object *)0x0) {
              CowData<char32_t>::_ref(pCVar14,(CowData *)&local_f0);
            }
            lVar13 = *(long *)(*pauVar15 + 8);
            *(undefined1 (**) [16])(pCVar14 + 0x18) = pauVar15;
            *(undefined8 *)(pCVar14 + 8) = 0;
            *(long *)(pCVar14 + 0x10) = lVar13;
            if (lVar13 != 0) {
              *(CowData<char32_t> **)(lVar13 + 8) = pCVar14;
            }
            lVar13 = *(long *)*pauVar15;
            *(CowData<char32_t> **)(*pauVar15 + 8) = pCVar14;
            if (lVar13 == 0) {
              *(CowData<char32_t> **)*pauVar15 = pCVar14;
            }
            *(int *)pauVar15[1] = *(int *)pauVar15[1] + 1;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
          }
          else {
            lVar22 = 0;
            do {
              if (*(long *)(lVar13 + -8) <= lVar22) break;
              lVar13 = *(long *)(lVar13 + lVar22 * 8);
              if (lVar13 == 0) {
                local_f0 = (Object *)0x0;
              }
              else {
                pcVar5 = *(char **)(lVar13 + 8);
                local_f0 = (Object *)0x0;
                if (pcVar5 == (char *)0x0) {
                  if (*(long *)(lVar13 + 0x10) != 0) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)&local_f0,(CowData *)(lVar13 + 0x10));
                  }
                }
                else {
                  local_e0 = strlen(pcVar5);
                  local_e8 = pcVar5;
                  String::parse_latin1((StrRange *)&local_f0);
                }
              }
              local_100 = 0;
              local_e8 = "_";
              local_e0 = 1;
              String::parse_latin1((StrRange *)&local_100);
              lVar13 = *plVar23;
              if (lVar13 == 0) {
                local_108 = 0;
              }
              else {
                pcVar5 = *(char **)(lVar13 + 8);
                local_108 = 0;
                if (pcVar5 == (char *)0x0) {
                  if (*(long *)(lVar13 + 0x10) != 0) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)&local_108,(CowData *)(lVar13 + 0x10));
                  }
                }
                else {
                  local_e0 = strlen(pcVar5);
                  local_e8 = pcVar5;
                  String::parse_latin1((StrRange *)&local_108);
                }
              }
              String::operator+((String *)&local_f8,(String *)&local_108);
              String::operator+((String *)&local_e8,(String *)&local_f8);
              if (pauVar15 == (undefined1 (*) [16])0x0) {
                pauVar15 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
                *(undefined4 *)pauVar15[1] = 0;
                *pauVar15 = (undefined1  [16])0x0;
                local_110 = pauVar15;
              }
              pCVar14 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
              *(undefined1 (*) [16])pCVar14 = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(pCVar14 + 0x10) = (undefined1  [16])0x0;
              if (local_e8 != (char *)0x0) {
                CowData<char32_t>::_ref(pCVar14,(CowData *)&local_e8);
              }
              pcVar5 = local_e8;
              lVar13 = *(long *)(*pauVar15 + 8);
              *(undefined8 *)(pCVar14 + 8) = 0;
              *(undefined1 (**) [16])(pCVar14 + 0x18) = pauVar15;
              *(long *)(pCVar14 + 0x10) = lVar13;
              if (lVar13 != 0) {
                *(CowData<char32_t> **)(lVar13 + 8) = pCVar14;
              }
              lVar13 = *(long *)*pauVar15;
              *(CowData<char32_t> **)(*pauVar15 + 8) = pCVar14;
              if (lVar13 == 0) {
                *(CowData<char32_t> **)*pauVar15 = pCVar14;
              }
              *(int *)pauVar15[1] = *(int *)pauVar15[1] + 1;
              if (local_e8 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(local_e8 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_e8 = (char *)0x0;
                  Memory::free_static(pcVar5 + -0x10,false);
                }
              }
              lVar13 = local_f8;
              if (local_f8 != 0) {
                LOCK();
                plVar1 = (long *)(local_f8 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_f8 = 0;
                  Memory::free_static((void *)(lVar13 + -0x10),false);
                }
              }
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
              lVar13 = local_100;
              if (local_100 != 0) {
                LOCK();
                plVar1 = (long *)(local_100 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_100 = 0;
                  Memory::free_static((void *)(lVar13 + -0x10),false);
                }
              }
              pOVar21 = local_f0;
              if (local_f0 != (Object *)0x0) {
                LOCK();
                plVar1 = (long *)((long)local_f0 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_f0 = (Object *)0x0;
                  Memory::free_static((void *)((long)pOVar21 + -0x10),false);
                }
              }
              lVar13 = plVar23[2];
              lVar22 = lVar22 + 1;
              pauVar15 = local_110;
            } while (lVar13 != 0);
          }
          lVar18 = lVar18 + 1;
          lVar13 = *(long *)(lVar16 + 8);
        } while (lVar13 != 0);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != 5);
  }
  local_e8 = (char *)0x0;
  String::parse_latin1((String *)&local_e8,"text_editor/theme/highlighting/user_type_color");
  _EDITOR_GET((String *)local_58);
  local_a8 = Variant::operator_cast_to_Color((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if (pauVar15 != (undefined1 (*) [16])0x0) {
    for (pCVar20 = *(Color **)*pauVar15; pCVar20 != (Color *)0x0; pCVar20 = *(Color **)(pCVar20 + 8)
        ) {
      CodeHighlighter::add_keyword_color(*(String **)(in_RDI + 0xb38),pCVar20);
    }
  }
  local_e8 = (char *)0x0;
  String::parse_latin1((String *)&local_e8,"text_editor/theme/highlighting/comment_color");
  _EDITOR_GET((String *)local_58);
  local_98[0] = Variant::operator_cast_to_Color((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CodeHighlighter::clear_color_regions();
  pSVar6 = *(String **)(in_RDI + 0xb38);
  local_e8 = (char *)0x0;
  String::parse_latin1((String *)&local_e8,"*/");
  local_f0 = (Object *)0x0;
  String::parse_latin1((String *)&local_f0,"/*");
  bVar17 = SUB81(local_98,0);
  CodeHighlighter::add_color_region(pSVar6,(String *)&local_f0,(Color *)&local_e8,bVar17);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e8 = (char *)0x0;
  pSVar6 = *(String **)(in_RDI + 0xb38);
  String::parse_latin1((String *)&local_e8,"");
  local_f0 = (Object *)0x0;
  String::parse_latin1((String *)&local_f0,"//");
  CodeHighlighter::add_color_region(pSVar6,(String *)&local_f0,(Color *)&local_e8,bVar17);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e8 = (char *)0x0;
  String::parse_latin1((String *)&local_e8,"text_editor/theme/highlighting/doc_comment_color");
  _EDITOR_GET((String *)local_58);
  local_88[0] = Variant::operator_cast_to_Color((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e8 = (char *)0x0;
  pSVar6 = *(String **)(in_RDI + 0xb38);
  String::parse_latin1((String *)&local_e8,"*/");
  local_f0 = (Object *)0x0;
  String::parse_latin1((String *)&local_f0,"/**");
  CodeHighlighter::add_color_region(pSVar6,(String *)&local_f0,(Color *)&local_e8,SUB81(local_88,0))
  ;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e8 = (char *)0x0;
  pSVar6 = *(String **)(in_RDI + 0xb38);
  String::parse_latin1((String *)&local_e8,"");
  local_f0 = (Object *)0x0;
  String::parse_latin1((String *)&local_f0,"/**/");
  CodeHighlighter::add_color_region(pSVar6,(String *)&local_f0,(Color *)&local_e8,bVar17);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e8 = (char *)0x0;
  lVar13 = *(long *)(in_RDI + 0xb38);
  local_68 = __LC97;
  uStack_60 = _UNK_00124098;
  String::parse_latin1((String *)&local_e8,"text_editor/theme/highlighting/text_color");
  _EDITOR_GET((String *)local_58);
  local_78[0] = Variant::operator_cast_to_Color((Variant *)local_58);
  uVar24 = Color::operator*((Color *)local_78,(Color *)&local_68);
  *(undefined8 *)(lVar13 + 0x368) = uVar24;
  *(ulong *)(lVar13 + 0x370) = CONCAT44(in_XMM1_Db,in_XMM1_Da);
  SyntaxHighlighter::clear_highlighting_cache();
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CodeEdit::clear_comment_delimiters();
  local_e8 = (char *)0x0;
  String::parse_latin1((String *)&local_e8,"*/");
  local_f0 = (Object *)0x0;
  String::parse_latin1((String *)&local_f0,"/*");
  bVar17 = SUB81((String *)&local_e8,0);
  CodeEdit::add_comment_delimiter(pSVar2,(String *)&local_f0,bVar17);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e8 = (char *)0x0;
  String::parse_latin1((String *)&local_e8,"");
  local_f0 = (Object *)0x0;
  String::parse_latin1((String *)&local_f0,"//");
  CodeEdit::add_comment_delimiter(pSVar2,(String *)&local_f0,bVar17);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e8 = (char *)0x0;
  String::parse_latin1((String *)&local_e8,"/*");
  cVar10 = CodeEdit::has_auto_brace_completion_open_key(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if (cVar10 == '\0') {
    local_e8 = (char *)0x0;
    String::parse_latin1((String *)&local_e8,"*/");
    local_f0 = (Object *)0x0;
    String::parse_latin1((String *)&local_f0,"/*");
    CodeEdit::add_auto_brace_completion_pair(pSVar2,(String *)&local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  }
  local_e8 = (char *)0x0;
  String::parse_latin1((String *)&local_e8,"text_editor/theme/highlighting/string_color");
  _EDITOR_GET((String *)local_58);
  local_68 = Variant::operator_cast_to_Color((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e8 = (char *)0x0;
  pSVar2 = *(String **)(in_RDI + 0xb38);
  String::parse_latin1((String *)&local_e8,"\"");
  local_f0 = (Object *)0x0;
  String::parse_latin1((String *)&local_f0,"\"");
  CodeHighlighter::add_color_region
            (pSVar2,(String *)&local_f0,(Color *)&local_e8,SUB81((Color *)&local_68,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  pSVar7 = *(StringName **)(in_RDI + 0xb40);
  if (pSVar7 != (StringName *)0x0) {
    pOVar21 = *(Object **)(EditorNode::singleton + 0x838);
    if (pOVar21 == (Object *)0x0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    cVar10 = RefCounted::reference();
    if (cVar10 == '\0') {
      pOVar21 = (Object *)0x0;
    }
    pcVar8 = *(code **)(*(long *)pOVar21 + 0x1d8);
    lVar13 = EditorStringNames::singleton + 8;
    if ((_load_theme_settings()::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar11 = __cxa_guard_acquire(&_load_theme_settings()::{lambda()#1}::operator()()::sname),
       iVar11 != 0)) {
      _scs_create((char *)&_load_theme_settings()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_load_theme_settings()::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_load_theme_settings()::{lambda()#1}::operator()()::sname);
    }
    (*pcVar8)((String *)&local_f0,pOVar21,&_load_theme_settings()::{lambda()#1}::operator()()::sname
              ,lVar13);
    StringName::StringName((StringName *)&local_e8,"normal_font",false);
    Control::add_theme_font_override(pSVar7,(Ref *)&local_e8);
    if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
      StringName::unref();
    }
    if (((local_f0 != (Object *)0x0) &&
        (cVar10 = RefCounted::unreference(), pOVar9 = local_f0, cVar10 != '\0')) &&
       (cVar10 = predelete_handler(local_f0), cVar10 != '\0')) {
      (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
      Memory::free_static(pOVar9,false);
    }
    cVar10 = RefCounted::unreference();
    if ((cVar10 != '\0') && (cVar10 = predelete_handler(pOVar21), cVar10 != '\0')) {
      (**(code **)(*(long *)pOVar21 + 0x140))(pOVar21);
      Memory::free_static(pOVar21,false);
    }
    pSVar7 = *(StringName **)(in_RDI + 0xb40);
    pOVar21 = *(Object **)(EditorNode::singleton + 0x838);
    if (pOVar21 == (Object *)0x0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    cVar10 = RefCounted::reference();
    if (cVar10 == '\0') {
      pOVar21 = (Object *)0x0;
    }
    pcVar8 = *(code **)(*(long *)pOVar21 + 0x1e0);
    lVar13 = EditorStringNames::singleton + 8;
    if ((_load_theme_settings()::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar11 = __cxa_guard_acquire(&_load_theme_settings()::{lambda()#2}::operator()()::sname),
       iVar11 != 0)) {
      _scs_create((char *)&_load_theme_settings()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_load_theme_settings()::{lambda()#2}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_load_theme_settings()::{lambda()#2}::operator()()::sname);
    }
    (*pcVar8)(pOVar21,&_load_theme_settings()::{lambda()#2}::operator()()::sname,lVar13);
    StringName::StringName((StringName *)&local_e8,"normal_font_size",false);
    Control::add_theme_font_size_override(pSVar7,(int)(String *)&local_e8);
    if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
      StringName::unref();
    }
    cVar10 = RefCounted::unreference();
    if ((cVar10 != '\0') && (cVar10 = predelete_handler(pOVar21), cVar10 != '\0')) {
      (**(code **)(*(long *)pOVar21 + 0x140))(pOVar21);
      Memory::free_static(pOVar21,false);
    }
  }
  CodeHighlighter::set_uint_suffix_enabled(SUB81(*(undefined8 *)(in_RDI + 0xb38),0));
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_110);
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_118);
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_120);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderTextEditor::reload_text() */

void __thiscall ShaderTextEditor::reload_text(ShaderTextEditor *this)

{
  String *pSVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long in_FS_OFFSET;
  double dVar5;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xb48) == 0) {
    if (*(long *)(this + 0xb50) == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("reload_text","editor/plugins/text_shader_editor.cpp",0xbc,
                         "Condition \"shader.is_null() && shader_inc.is_null()\" is true.",0,0);
        return;
      }
      goto LAB_0010492b;
    }
    local_50 = 0;
    ShaderInclude::get_code();
    if (local_50 != local_48) goto LAB_001047ac;
  }
  else {
    local_50 = 0;
    Shader::get_code();
    if (local_50 != local_48) {
LAB_001047ac:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      local_50 = local_48;
      local_48 = 0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  pSVar1 = *(String **)(this + 0xa10);
  iVar4 = (int)pSVar1;
  bVar2 = (bool)TextEdit::get_caret_column(iVar4);
  bVar3 = (bool)TextEdit::get_caret_line(iVar4);
  TextEdit::get_h_scroll();
  dVar5 = (double)TextEdit::get_v_scroll();
  TextEdit::set_text(pSVar1);
  TextEdit::set_caret_line(iVar4,bVar3,true,1,0);
  TextEdit::set_caret_column(iVar4,bVar2,1);
  TextEdit::set_h_scroll(iVar4);
  TextEdit::set_v_scroll((double)(int)dVar5);
  TextEdit::tag_saved_version();
  CodeTextEditor::_line_col_changed();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010492b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TextShaderEditor::_reload_shader_from_disk() */

void __thiscall TextShaderEditor::_reload_shader_from_disk(TextShaderEditor *this)

{
  code *pcVar1;
  long lVar2;
  String *pSVar3;
  long *plVar4;
  long lVar5;
  char cVar6;
  Object *pOVar7;
  ShaderTextEditor *this_00;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_58 [8];
  undefined8 local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = *(code **)(**(long **)(this + 0xa28) + 0x48);
  if (pcVar1 == Shader::get_class) {
    lVar2 = (*(long **)(this + 0xa28))[1];
    if (lVar2 == 0) {
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Shader");
    }
    else {
      lVar2 = *(long *)(lVar2 + 0x20);
      if (lVar2 == 0) {
        local_50 = 0;
      }
      else {
        local_50 = 0;
        if (*(char **)(lVar2 + 8) == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(lVar2 + 0x10));
        }
        else {
          String::parse_latin1((String *)&local_50,*(char **)(lVar2 + 8));
        }
      }
    }
  }
  else {
    (*pcVar1)(&local_50);
  }
  Resource::get_path();
  ResourceLoader::load((CowData<char32_t> *)&local_48,aCStack_58,(CowData<char32_t> *)&local_50,0,0)
  ;
  if (local_48 == (Object *)0x0) {
    CowData<char32_t>::_unref(aCStack_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  else {
    pOVar7 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&Shader::typeinfo,0);
    if (pOVar7 == (Object *)0x0) {
LAB_00104a25:
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(local_48);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)local_48 + 0x140))(local_48);
          Memory::free_static(local_48,false);
        }
      }
    }
    else {
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        pOVar7 = (Object *)0x0;
      }
      if (local_48 != (Object *)0x0) goto LAB_00104a25;
    }
    CowData<char32_t>::_unref(aCStack_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if (pOVar7 != (Object *)0x0) {
      pSVar3 = *(String **)(this + 0xa28);
      *(undefined1 *)(*(long *)(this + 0xa18) + 0xb64) = 1;
      Shader::get_code();
      Shader::set_code(pSVar3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      plVar4 = *(long **)(this + 0xa28);
      this_00 = *(ShaderTextEditor **)(this + 0xa18);
      lVar2 = *(long *)(pOVar7 + 0x198);
      lVar5 = *plVar4;
      this_00[0xb64] = (ShaderTextEditor)0x0;
      if (*(code **)(lVar5 + 0x1b0) == Resource::set_last_modified_time) {
        plVar4[0x33] = lVar2;
      }
      else {
        (**(code **)(lVar5 + 0x1b0))(plVar4);
        this_00 = *(ShaderTextEditor **)(this + 0xa18);
      }
      ShaderTextEditor::reload_text(this_00);
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(pOVar7);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(pOVar7,false);
            return;
          }
          goto LAB_00104c6d;
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00104c6d;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("_reload_shader_from_disk","editor/plugins/text_shader_editor.cpp",0x369,
                     "Condition \"rel_shader.is_null()\" is true.",0,0);
    return;
  }
LAB_00104c6d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TextShaderEditor::_reload_shader_include_from_disk() */

void __thiscall TextShaderEditor::_reload_shader_include_from_disk(TextShaderEditor *this)

{
  code *pcVar1;
  long lVar2;
  String *pSVar3;
  long *plVar4;
  long lVar5;
  char cVar6;
  Object *pOVar7;
  ShaderTextEditor *this_00;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_58 [8];
  undefined8 local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = *(code **)(**(long **)(this + 0xa30) + 0x48);
  if (pcVar1 == ShaderInclude::get_class) {
    lVar2 = (*(long **)(this + 0xa30))[1];
    if (lVar2 == 0) {
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"ShaderInclude");
    }
    else {
      lVar2 = *(long *)(lVar2 + 0x20);
      if (lVar2 == 0) {
        local_50 = 0;
      }
      else {
        local_50 = 0;
        if (*(char **)(lVar2 + 8) == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(lVar2 + 0x10));
        }
        else {
          String::parse_latin1((String *)&local_50,*(char **)(lVar2 + 8));
        }
      }
    }
  }
  else {
    (*pcVar1)(&local_50);
  }
  Resource::get_path();
  ResourceLoader::load((CowData<char32_t> *)&local_48,aCStack_58,(CowData<char32_t> *)&local_50,0,0)
  ;
  if (local_48 == (Object *)0x0) {
    CowData<char32_t>::_unref(aCStack_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  else {
    pOVar7 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&ShaderInclude::typeinfo,0);
    if (pOVar7 == (Object *)0x0) {
LAB_00104d75:
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(local_48);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)local_48 + 0x140))(local_48);
          Memory::free_static(local_48,false);
        }
      }
    }
    else {
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        pOVar7 = (Object *)0x0;
      }
      if (local_48 != (Object *)0x0) goto LAB_00104d75;
    }
    CowData<char32_t>::_unref(aCStack_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if (pOVar7 != (Object *)0x0) {
      pSVar3 = *(String **)(this + 0xa30);
      *(undefined1 *)(*(long *)(this + 0xa18) + 0xb64) = 1;
      ShaderInclude::get_code();
      ShaderInclude::set_code(pSVar3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      plVar4 = *(long **)(this + 0xa30);
      this_00 = *(ShaderTextEditor **)(this + 0xa18);
      lVar2 = *(long *)(pOVar7 + 0x198);
      lVar5 = *plVar4;
      this_00[0xb64] = (ShaderTextEditor)0x0;
      if (*(code **)(lVar5 + 0x1b0) == Resource::set_last_modified_time) {
        plVar4[0x33] = lVar2;
      }
      else {
        (**(code **)(lVar5 + 0x1b0))(plVar4);
        this_00 = *(ShaderTextEditor **)(this + 0xa18);
      }
      ShaderTextEditor::reload_text(this_00);
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(pOVar7);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(pOVar7,false);
            return;
          }
          goto LAB_00104fbd;
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00104fbd;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("_reload_shader_include_from_disk","editor/plugins/text_shader_editor.cpp",
                     0x374,"Condition \"rel_shader_include.is_null()\" is true.",0,0);
    return;
  }
LAB_00104fbd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TextShaderEditor::_check_for_external_edit() */

void __thiscall TextShaderEditor::_check_for_external_edit(TextShaderEditor *this)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  String *local_88 [2];
  int local_78 [6];
  int local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = 0;
  local_a8 = "text_editor/behavior/files/auto_reload_scripts_on_external_change";
  local_a0 = 0x41;
  String::parse_latin1((StrRange *)&local_b0);
  _EDITOR_GET((String *)local_78);
  bVar2 = Variant::operator_cast_to_bool((Variant *)local_78);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if (*(long *)(this + 0xa30) == 0) {
    lVar1 = *(long *)(this + 0xa28);
    if (((lVar1 != 0) && (*(long *)(lVar1 + 0x188) != 0)) &&
       (1 < *(uint *)(*(long *)(lVar1 + 0x188) + -8))) {
      iVar4 = String::find((char *)(lVar1 + 0x188),0x10c7b0);
      if (iVar4 == -1) {
        cVar3 = String::begins_with((char *)(lVar1 + 0x188));
        if (cVar3 == '\0') {
          lVar1 = *(long *)(*(long *)(this + 0xa28) + 0x198);
          Resource::get_path();
          lVar5 = FileAccess::get_modified_time((String *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          if (lVar5 != lVar1) {
            if (bVar2) {
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                _reload_shader_from_disk(this);
                return;
              }
              goto LAB_00105285;
            }
            goto LAB_001050f4;
          }
        }
      }
    }
  }
  else {
    lVar1 = *(long *)(*(long *)(this + 0xa30) + 0x198);
    Resource::get_path();
    lVar5 = FileAccess::get_modified_time((String *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if (lVar5 != lVar1) {
      if (bVar2) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          _reload_shader_include_from_disk(this);
          return;
        }
        goto LAB_00105285;
      }
LAB_001050f4:
      create_custom_callable_function_pointer<Window,Vector2i_const&>
                ((Window *)&local_a8,*(char **)(this + 0xa10),
                 (_func_void_Vector2i_ptr *)"&Window::popup_centered");
      local_90 = 0;
      Variant::Variant((Variant *)local_78,(Vector2i *)&local_90);
      Variant::Variant((Variant *)local_60,0);
      local_88[0] = (String *)local_78;
      Callable::call_deferredp((Variant **)&local_a8,(int)local_88);
      if (Variant::needs_deinit[local_60[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Callable::~Callable((Callable *)&local_a8);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105285:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TextShaderEditor::_notification(int) */

void __thiscall TextShaderEditor::_notification(TextShaderEditor *this,int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x2d) {
LAB_00105310:
    iVar2 = MenuButton::get_popup();
    if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_38);
    uVar3 = PopupMenu::get_item_index(iVar2);
    PopupMenu::set_item_icon(iVar2,(Ref *)(ulong)uVar3);
    if (local_38 != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(local_38);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)local_38 + 0x140))(local_38);
          Memory::free_static(local_38,false);
        }
      }
    }
  }
  else {
    if (param_1 == 0x7e0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _check_for_external_edit(this);
        return;
      }
      goto LAB_001053fd;
    }
    if (param_1 == 10) goto LAB_00105310;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001053fd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TextShaderEditor::_reload() */

void __thiscall TextShaderEditor::_reload(TextShaderEditor *this)

{
  if (*(long *)(this + 0xa28) != 0) {
    _reload_shader_from_disk(this);
    return;
  }
  if (*(long *)(this + 0xa30) != 0) {
    _reload_shader_include_from_disk(this);
    return;
  }
  return;
}



/* TextShaderEditor::edit_shader_include(Ref<ShaderInclude> const&) */

void __thiscall TextShaderEditor::edit_shader_include(TextShaderEditor *this,Ref *param_1)

{
  Object *pOVar1;
  Object *pOVar2;
  Ref *pRVar3;
  char cVar4;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_28 [8];
  long local_20;
  
  pOVar1 = *(Object **)param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar1 != (Object *)0x0) && (pOVar2 = *(Object **)(this + 0xa30), pOVar2 != pOVar1)) {
    *(Object **)(this + 0xa30) = pOVar1;
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      *(undefined8 *)(this + 0xa30) = 0;
    }
    if (pOVar2 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
    pOVar1 = *(Object **)(this + 0xa28);
    if (pOVar1 != (Object *)0x0) {
      *(undefined8 *)(this + 0xa28) = 0;
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(pOVar1);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
    pRVar3 = *(Ref **)(this + 0xa18);
    ShaderInclude::get_code();
    ShaderTextEditor::set_edited_shader_include(pRVar3,(String *)param_1);
    CowData<char32_t>::_unref(aCStack_28);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TextShaderEditor::edit_shader(Ref<Shader> const&) */

void __thiscall TextShaderEditor::edit_shader(TextShaderEditor *this,Ref *param_1)

{
  Object *pOVar1;
  Object *pOVar2;
  Ref *pRVar3;
  char cVar4;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long **)param_1 != (long *)0x0) {
    cVar4 = (**(code **)(**(long **)param_1 + 0x1d8))();
    if (cVar4 != '\0') {
      pOVar1 = *(Object **)(this + 0xa28);
      pOVar2 = *(Object **)param_1;
      if (pOVar2 != pOVar1) {
        *(Object **)(this + 0xa28) = pOVar2;
        if (pOVar2 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            *(undefined8 *)(this + 0xa28) = 0;
          }
        }
        if (pOVar1 != (Object *)0x0) {
          cVar4 = RefCounted::unreference();
          if (cVar4 != '\0') {
            cVar4 = predelete_handler(pOVar1);
            if (cVar4 != '\0') {
              (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
              Memory::free_static(pOVar1,false);
            }
          }
        }
        pOVar1 = *(Object **)(this + 0xa30);
        if (pOVar1 != (Object *)0x0) {
          *(undefined8 *)(this + 0xa30) = 0;
          cVar4 = RefCounted::unreference();
          if (cVar4 != '\0') {
            cVar4 = predelete_handler(pOVar1);
            if (cVar4 != '\0') {
              (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
              Memory::free_static(pOVar1,false);
            }
          }
        }
        pRVar3 = *(Ref **)(this + 0xa18);
        Shader::get_code();
        ShaderTextEditor::set_edited_shader(pRVar3,(String *)(this + 0xa28));
        CowData<char32_t>::_unref(aCStack_38);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TextShaderEditor::save_external_data(String const&) */

void TextShaderEditor::save_external_data(String *param_1)

{
  char cVar1;
  Object *pOVar2;
  Object *pOVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  Object *local_58;
  Object *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0xa28) == 0) && (*(long *)(param_1 + 0xa30) == 0)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Window::hide();
      return;
    }
    goto LAB_00105ce5;
  }
  if (param_1[0xa3c] != (String)0x0) {
    CodeTextEditor::trim_trailing_whitespace();
  }
  if (param_1[0xa3d] != (String)0x0) {
    CodeTextEditor::trim_final_newlines();
  }
  (**(code **)(*(long *)param_1 + 0x368))(param_1);
  pOVar4 = *(Object **)(*(long *)(param_1 + 0xa18) + 0xb48);
  if ((pOVar4 == (Object *)0x0) || (cVar1 = RefCounted::reference(), cVar1 == '\0')) {
    pOVar4 = *(Object **)(param_1 + 0xa28);
    if (pOVar4 != (Object *)0x0) {
      pOVar4 = (Object *)0x0;
      goto LAB_0010578a;
    }
  }
  else {
    local_48 = 0;
    String::parse_latin1((String *)&local_48,"");
    local_50 = (Object *)0x0;
    pOVar2 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Resource::typeinfo,0);
    if ((pOVar2 != (Object *)0x0) &&
       (local_50 = pOVar2, cVar1 = RefCounted::reference(), cVar1 == '\0')) {
      local_50 = (Object *)0x0;
    }
    ResourceSaver::save((Ref *)&local_50,(String *)&local_48,0);
    if (((local_50 != (Object *)0x0) &&
        (cVar1 = RefCounted::unreference(), pOVar2 = local_50, cVar1 != '\0')) &&
       (cVar1 = predelete_handler(local_50), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((*(Object **)(param_1 + 0xa28) != pOVar4) &&
       (*(Object **)(param_1 + 0xa28) != (Object *)0x0)) {
LAB_0010578a:
      local_50 = (Object *)0x0;
      String::parse_latin1((String *)&local_50,"");
      local_58 = (Object *)0x0;
      if ((*(long *)(param_1 + 0xa28) != 0) &&
         (pOVar2 = (Object *)
                   __dynamic_cast(*(long *)(param_1 + 0xa28),&Object::typeinfo,&Resource::typeinfo,0
                                 ), pOVar2 != (Object *)0x0)) {
        local_48 = 0;
        local_58 = pOVar2;
        cVar1 = RefCounted::reference();
        if (cVar1 == '\0') {
          local_58 = (Object *)0x0;
        }
        Ref<Resource>::unref((Ref<Resource> *)&local_48);
      }
      ResourceSaver::save((Ref *)&local_58,(String *)&local_50,0);
      if (((local_58 != (Object *)0x0) &&
          (cVar1 = RefCounted::unreference(), pOVar2 = local_58, cVar1 != '\0')) &&
         (cVar1 = predelete_handler(local_58), cVar1 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    }
  }
  pOVar2 = *(Object **)(*(long *)(param_1 + 0xa18) + 0xb50);
  if ((pOVar2 == (Object *)0x0) || (cVar1 = RefCounted::reference(), cVar1 == '\0')) {
    pOVar2 = (Object *)0x0;
    if (*(long *)(param_1 + 0xa30) != 0) goto LAB_00105888;
    TextEdit::tag_saved_version();
    Window::hide();
  }
  else {
    local_48 = 0;
    String::parse_latin1((String *)&local_48,"");
    local_50 = (Object *)0x0;
    pOVar3 = (Object *)__dynamic_cast(pOVar2,&Object::typeinfo,&Resource::typeinfo,0);
    if ((pOVar3 != (Object *)0x0) &&
       (local_50 = pOVar3, cVar1 = RefCounted::reference(), cVar1 == '\0')) {
      local_50 = (Object *)0x0;
    }
    ResourceSaver::save((Ref *)&local_50,(String *)&local_48,0);
    if (((local_50 != (Object *)0x0) &&
        (cVar1 = RefCounted::unreference(), pOVar3 = local_50, cVar1 != '\0')) &&
       (cVar1 = predelete_handler(local_50), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))();
      Memory::free_static(pOVar3,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((*(Object **)(param_1 + 0xa30) == (Object *)0x0) ||
       (*(Object **)(param_1 + 0xa30) == pOVar2)) {
      TextEdit::tag_saved_version();
      Window::hide();
    }
    else {
LAB_00105888:
      local_50 = (Object *)0x0;
      String::parse_latin1((String *)&local_50,"");
      local_58 = (Object *)0x0;
      if ((*(long *)(param_1 + 0xa30) != 0) &&
         (pOVar3 = (Object *)
                   __dynamic_cast(*(long *)(param_1 + 0xa30),&Object::typeinfo,&Resource::typeinfo,0
                                 ), pOVar3 != (Object *)0x0)) {
        local_48 = 0;
        local_58 = pOVar3;
        cVar1 = RefCounted::reference();
        if (cVar1 == '\0') {
          local_58 = (Object *)0x0;
        }
        Ref<Resource>::unref((Ref<Resource> *)&local_48);
      }
      ResourceSaver::save((Ref *)&local_58,(String *)&local_50,0);
      if (((local_58 != (Object *)0x0) &&
          (cVar1 = RefCounted::unreference(), pOVar3 = local_58, cVar1 != '\0')) &&
         (cVar1 = predelete_handler(local_58), cVar1 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      TextEdit::tag_saved_version();
      Window::hide();
      if (pOVar2 == (Object *)0x0) goto LAB_00105b05;
    }
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
  }
LAB_00105b05:
  if (((pOVar4 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
     (cVar1 = predelete_handler(pOVar4), cVar1 == '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(pOVar4,false);
      return;
    }
  }
LAB_00105ce5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TextShaderEditor::_update_bookmark_list() */

void __thiscall TextShaderEditor::_update_bookmark_list(TextShaderEditor *this)

{
  long *plVar1;
  Ref *pRVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  char *local_a8;
  String local_a0 [8];
  undefined8 local_98;
  String local_90 [8];
  String local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  PopupMenu::clear(SUB81(*(undefined8 *)(this + 0x9d8),0));
  pRVar2 = *(Ref **)(this + 0x9d8);
  local_68 = "script_text_editor/toggle_bookmark";
  local_78 = 0;
  local_60 = 0x22;
  String::parse_latin1((StrRange *)&local_78);
  ED_GET_SHORTCUT((String *)&local_68);
  iVar5 = (int)(String *)&local_68;
  PopupMenu::add_shortcut(pRVar2,iVar5,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  pRVar2 = *(Ref **)(this + 0x9d8);
  local_68 = "script_text_editor/remove_all_bookmarks";
  local_78 = 0;
  local_60 = 0x27;
  String::parse_latin1((StrRange *)&local_78);
  ED_GET_SHORTCUT((String *)&local_68);
  PopupMenu::add_shortcut(pRVar2,iVar5,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  pRVar2 = *(Ref **)(this + 0x9d8);
  local_68 = "script_text_editor/goto_next_bookmark";
  local_78 = 0;
  local_60 = 0x25;
  String::parse_latin1((StrRange *)&local_78);
  ED_GET_SHORTCUT((String *)&local_68);
  PopupMenu::add_shortcut(pRVar2,iVar5,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  pRVar2 = *(Ref **)(this + 0x9d8);
  local_68 = "script_text_editor/goto_previous_bookmark";
  local_78 = 0;
  local_60 = 0x29;
  String::parse_latin1((StrRange *)&local_78);
  ED_GET_SHORTCUT((String *)&local_68);
  PopupMenu::add_shortcut(pRVar2,iVar5,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CodeEdit::get_bookmarked_lines();
  if (local_70 != 0) {
    if (*(long *)(local_70 + -8) == 0) {
LAB_00105edd:
      lVar7 = local_70;
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    else {
      local_68 = (char *)0x0;
      PopupMenu::add_separator(*(String **)(this + 0x9d8),iVar5);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if (local_70 != 0) {
        lVar7 = 0;
        do {
          if (*(long *)(local_70 + -8) <= lVar7) goto LAB_00105edd;
          TextEdit::get_line(iVar5);
          String::strip_edges(SUB81((CowData<char32_t> *)&local_a8,0),SUB81((String *)&local_68,0));
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((local_a8 != (char *)0x0) && (0x33 < *(int *)(local_a8 + -8))) {
            String::substr(iVar5,(int)(CowData<char32_t> *)&local_a8);
            if (local_a8 != local_68) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
              local_a8 = local_68;
              local_68 = (char *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          }
          uVar3 = *(undefined8 *)(this + 0x9d8);
          local_80 = 0;
          local_68 = "\"";
          local_60 = 1;
          String::parse_latin1((StrRange *)&local_80);
          local_68 = " - \"";
          local_98 = 0;
          local_60 = 4;
          String::parse_latin1((StrRange *)&local_98);
          if (local_70 == 0) {
LAB_00106178:
            lVar6 = 0;
LAB_0010617b:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar6,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          lVar6 = *(long *)(local_70 + -8);
          if (lVar6 <= lVar7) goto LAB_0010617b;
          String::num_int64((long)local_a0,*(int *)(local_70 + lVar7 * 4) + 1,true);
          String::operator+(local_90,local_a0);
          String::operator+(local_88,local_90);
          String::operator+((String *)&local_68,local_88);
          PopupMenu::add_item(uVar3,(String *)&local_68,0xffffffff,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          uVar3 = *(undefined8 *)(this + 0x9d8);
          if (local_70 == 0) goto LAB_00106178;
          lVar6 = *(long *)(local_70 + -8);
          if (lVar6 <= lVar7) goto LAB_0010617b;
          Variant::Variant((Variant *)local_58,*(int *)(local_70 + lVar7 * 4));
          PopupMenu::set_item_metadata((int)uVar3,(Variant *)0xffffffff);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          lVar7 = lVar7 + 1;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        } while (local_70 != 0);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* TextShaderEditor::_make_context_menu(bool, Vector2) */

void __thiscall
TextShaderEditor::_make_context_menu(undefined8 param_1_00,TextShaderEditor *this,char param_1)

{
  Ref *pRVar1;
  Vector2i *pVVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 uVar6;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  PopupMenu::clear(SUB81(*(undefined8 *)(this + 0x9e8),0));
  cVar3 = (**(code **)(*DisplayServer::singleton + 0x150))(DisplayServer::singleton,0x1f);
  iVar5 = (int)(String *)&local_78;
  if (cVar3 != '\0') {
    uVar6 = *(undefined8 *)(this + 0x9e8);
    local_80 = 0;
    String::parse_latin1((String *)&local_80,"");
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"Emoji & Symbols");
    TTR((String *)&local_78,(String *)&local_88);
    PopupMenu::add_item(uVar6,(String *)&local_78,0x1a);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    local_78 = (char *)0x0;
    PopupMenu::add_separator(*(String **)(this + 0x9e8),iVar5);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  if (param_1 != '\0') {
    pRVar1 = *(Ref **)(this + 0x9e8);
    local_80 = 0;
    String::parse_latin1((String *)&local_80,"ui_cut");
    ED_GET_SHORTCUT((String *)&local_78);
    PopupMenu::add_shortcut(pRVar1,iVar5,true,false);
    Ref<Shortcut>::unref((Ref<Shortcut> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    pRVar1 = *(Ref **)(this + 0x9e8);
    local_80 = 0;
    String::parse_latin1((String *)&local_80,"ui_copy");
    ED_GET_SHORTCUT((String *)&local_78);
    PopupMenu::add_shortcut(pRVar1,iVar5,true,false);
    Ref<Shortcut>::unref((Ref<Shortcut> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  }
  pRVar1 = *(Ref **)(this + 0x9e8);
  local_78 = "ui_paste";
  local_80 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_80);
  ED_GET_SHORTCUT((String *)&local_78);
  PopupMenu::add_shortcut(pRVar1,iVar5,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  local_78 = (char *)0x0;
  PopupMenu::add_separator(*(String **)(this + 0x9e8),iVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  pRVar1 = *(Ref **)(this + 0x9e8);
  local_78 = "ui_text_select_all";
  local_80 = 0;
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_80);
  ED_GET_SHORTCUT((String *)&local_78);
  PopupMenu::add_shortcut(pRVar1,iVar5,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  pRVar1 = *(Ref **)(this + 0x9e8);
  local_78 = "ui_undo";
  local_80 = 0;
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_80);
  ED_GET_SHORTCUT((String *)&local_78);
  PopupMenu::add_shortcut(pRVar1,iVar5,false,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  pRVar1 = *(Ref **)(this + 0x9e8);
  local_78 = "ui_redo";
  local_80 = 0;
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_80);
  ED_GET_SHORTCUT((String *)&local_78);
  PopupMenu::add_shortcut(pRVar1,iVar5,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  local_78 = (char *)0x0;
  PopupMenu::add_separator(*(String **)(this + 0x9e8),iVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  pRVar1 = *(Ref **)(this + 0x9e8);
  local_78 = "script_text_editor/indent";
  local_80 = 0;
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_80);
  ED_GET_SHORTCUT((String *)&local_78);
  PopupMenu::add_shortcut(pRVar1,iVar5,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  pRVar1 = *(Ref **)(this + 0x9e8);
  local_78 = "script_text_editor/unindent";
  local_80 = 0;
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_80);
  ED_GET_SHORTCUT((String *)&local_78);
  PopupMenu::add_shortcut(pRVar1,iVar5,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  pRVar1 = *(Ref **)(this + 0x9e8);
  local_78 = "script_text_editor/toggle_comment";
  local_80 = 0;
  local_70 = 0x21;
  String::parse_latin1((StrRange *)&local_80);
  ED_GET_SHORTCUT((String *)&local_78);
  PopupMenu::add_shortcut(pRVar1,iVar5,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  pRVar1 = *(Ref **)(this + 0x9e8);
  local_78 = "script_text_editor/toggle_bookmark";
  local_80 = 0;
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_80);
  ED_GET_SHORTCUT((String *)&local_78);
  PopupMenu::add_shortcut(pRVar1,iVar5,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  uVar6 = *(undefined8 *)(this + 0x9e8);
  TextEdit::has_undo();
  bVar4 = (bool)PopupMenu::get_item_index((int)*(undefined8 *)(this + 0x9e8));
  PopupMenu::set_item_disabled((int)uVar6,bVar4);
  uVar6 = *(undefined8 *)(this + 0x9e8);
  TextEdit::has_redo();
  bVar4 = (bool)PopupMenu::get_item_index((int)*(undefined8 *)(this + 0x9e8));
  PopupMenu::set_item_disabled((int)uVar6,bVar4);
  pVVar2 = *(Vector2i **)(this + 0x9e8);
  uVar6 = Control::get_screen_position();
  local_60 = CONCAT44((float)((ulong)uVar6 >> 0x20) + (float)((ulong)param_1_00 >> 0x20),
                      (float)uVar6 + (float)param_1_00);
  local_58 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_60);
  Window::set_position(pVVar2);
  Window::reset_size();
  local_58 = 0;
  local_50 = 0;
  (**(code **)(**(long **)(this + 0x9e8) + 0x240))(*(long **)(this + 0x9e8),&local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TextShaderEditor::_text_edit_gui_input(Ref<InputEvent> const&) */

void __thiscall TextShaderEditor::_text_edit_gui_input(TextShaderEditor *this,Ref *param_1)

{
  long *plVar1;
  Vector2i *pVVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Object *pOVar10;
  Object *pOVar11;
  int iVar12;
  long lVar13;
  long in_FS_OFFSET;
  undefined8 uVar14;
  float fVar17;
  undefined8 uVar15;
  TextShaderEditor *pTVar16;
  float fVar18;
  long local_c0;
  undefined1 local_b8 [32];
  Transform2D local_98 [32];
  undefined8 local_78 [4];
  undefined8 local_58 [3];
  long local_40;
  
  lVar13 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar13 != 0) {
    pOVar10 = (Object *)__dynamic_cast(lVar13,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
    if (pOVar10 == (Object *)0x0) {
LAB_0010691a:
      pOVar11 = (Object *)__dynamic_cast(lVar13,&Object::typeinfo,&InputEventKey::typeinfo,0);
      if ((pOVar11 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 != '\0')) {
        cVar4 = InputEvent::is_pressed();
        if (cVar4 == '\0') {
LAB_001069b4:
          cVar4 = RefCounted::unreference();
        }
        else {
          StringName::StringName((StringName *)&local_c0,"ui_menu",false);
          cVar4 = InputEvent::is_action((StringName *)pOVar11,SUB81((StringName *)&local_c0,0));
          if ((StringName::configured != '\0') && (local_c0 != 0)) {
            StringName::unref();
          }
          if (cVar4 == '\0') goto LAB_001069b4;
          plVar1 = *(long **)(*(long *)(this + 0xa18) + 0xa10);
          iVar5 = (int)plVar1;
          TextEdit::adjust_viewport_to_caret(iVar5);
          (**(code **)(*plVar1 + 0x298))(local_78,plVar1);
          (**(code **)(*(long *)this + 0x298))(local_b8,this);
          Transform2D::inverse();
          Transform2D::operator*((Transform2D *)local_58,local_98);
          uVar14 = TextEdit::get_caret_draw_pos(iVar5);
          fVar17 = (float)((ulong)uVar14 >> 0x20);
          fVar18 = (float)local_58[0];
          uVar3 = (ulong)local_58[0] >> 0x20;
          TextEdit::has_selection(iVar5);
          _make_context_menu((TextShaderEditor *)
                             CONCAT44(fVar17 * (float)((ulong)local_58[1] >> 0x20) +
                                      (float)uVar14 * (float)uVar3 +
                                      (float)((ulong)local_58[2] >> 0x20),
                                      fVar17 * (float)local_58[1] + (float)uVar14 * fVar18 +
                                      (float)local_58[2]),this);
          Window::grab_focus();
          cVar4 = RefCounted::unreference();
        }
        if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar11), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
          Memory::free_static(pOVar11,false);
        }
      }
      if (pOVar10 == (Object *)0x0) goto LAB_001068d0;
    }
    else {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        lVar13 = *(long *)param_1;
        pOVar10 = (Object *)0x0;
        if (lVar13 == 0) goto LAB_001068d0;
        goto LAB_0010691a;
      }
      iVar5 = InputEventMouseButton::get_button_index();
      if ((iVar5 == 2) && (cVar4 = InputEvent::is_pressed(), cVar4 != '\0')) {
        pVVar2 = *(Vector2i **)(*(long *)(this + 0xa18) + 0xa10);
        TextEdit::apply_ime();
        uVar14 = Control::get_global_position();
        uVar15 = InputEventMouse::get_global_position();
        local_78[0] = CONCAT44((float)((ulong)uVar15 >> 0x20) - (float)((ulong)uVar14 >> 0x20),
                               (float)uVar15 - (float)uVar14);
        local_58[0] = Vector2::operator_cast_to_Vector2i((Vector2 *)local_78);
        uVar14 = TextEdit::get_line_column_at_pos(pVVar2,SUB81((String *)local_58,0),true);
        local_c0 = 0;
        iVar5 = (int)((ulong)uVar14 >> 0x20);
        String::parse_latin1
                  ((String *)&local_c0,"text_editor/behavior/navigation/move_caret_on_right_click");
        _EDITOR_GET((String *)local_58);
        Variant::operator_cast_to_bool((Variant *)local_58);
        TextEdit::set_move_caret_on_right_click_enabled(SUB81(pVVar2,0));
        if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        cVar4 = TextEdit::is_move_caret_on_right_click_enabled();
        iVar12 = (int)pVVar2;
        if (cVar4 != '\0') {
          TextEdit::remove_secondary_carets();
          cVar4 = TextEdit::has_selection(iVar12);
          if (cVar4 != '\0') {
            iVar6 = TextEdit::get_selection_from_line(iVar12);
            iVar7 = TextEdit::get_selection_to_line(iVar12);
            iVar8 = TextEdit::get_selection_from_column(iVar12);
            iVar9 = TextEdit::get_selection_to_column(iVar12);
            if ((((iVar5 < iVar6) || (iVar7 < iVar5)) || ((iVar6 == iVar5 && ((int)uVar14 < iVar8)))
                ) || ((iVar7 == iVar5 && (iVar9 < (int)uVar14)))) {
              TextEdit::deselect(iVar12);
            }
          }
          cVar4 = TextEdit::has_selection(iVar12);
          if (cVar4 == '\0') {
            TextEdit::set_caret_line(iVar12,SUB81((ulong)uVar14 >> 0x20,0),true,0,-1);
            TextEdit::set_caret_column(iVar12,SUB81(uVar14,0),1);
          }
        }
        pTVar16 = (TextShaderEditor *)CanvasItem::get_local_mouse_position();
        TextEdit::has_selection(iVar12);
        _make_context_menu(pTVar16,this);
      }
      lVar13 = *(long *)param_1;
      if (lVar13 != 0) goto LAB_0010691a;
    }
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar10), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar10,false);
        return;
      }
      goto LAB_00106d5a;
    }
  }
LAB_001068d0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00106d5a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TextShaderEditor::TextShaderEditor() */

void __thiscall TextShaderEditor::TextShaderEditor(TextShaderEditor *this)

{
  long lVar1;
  code *pcVar2;
  StringName *pSVar3;
  Vector2 *pVVar4;
  Object *pOVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  ShaderTextEditor *this_00;
  long *plVar9;
  CallableCustom *pCVar10;
  PopupMenu *pPVar11;
  BoxContainer *pBVar12;
  BoxContainer *this_01;
  MenuButton *pMVar13;
  Ref *pRVar14;
  String *pSVar15;
  MenuButton *this_02;
  undefined8 uVar16;
  SplitContainer *this_03;
  FindReplaceBar *this_04;
  RichTextLabel *this_05;
  GotoLinePopup *this_06;
  ConfirmationDialog *this_07;
  Label *this_08;
  int iVar17;
  Object *pOVar18;
  long in_FS_OFFSET;
  String local_70 [8];
  undefined8 local_68;
  long local_60;
  Object *local_58 [2];
  undefined4 local_48;
  float local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Control::Control((Control *)this);
  *(undefined8 *)(this + 0x9f8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00123218;
  this[0xa20] = (TextShaderEditor)0x1;
  *(undefined4 *)(this + 0xa38) = 0xffffffff;
  *(undefined1 (*) [16])(this + 0x9c8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x9d8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x9e8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa00) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
  _update_warnings(this,false);
  this_00 = (ShaderTextEditor *)operator_new(0xb70,"");
  ShaderTextEditor::ShaderTextEditor(this_00);
  postinitialize_handler((Object *)this_00);
  lVar1 = *(long *)this_00;
  *(ShaderTextEditor **)(this + 0xa18) = this_00;
  pcVar2 = *(code **)(lVar1 + 0x108);
  create_custom_callable_function_pointer<TextShaderEditor,bool>
            ((TextShaderEditor *)local_58,(char *)this,
             (_func_void_bool *)"&TextShaderEditor::_script_validated");
  StringName::StringName((StringName *)&local_60,"script_validated",false);
  (*pcVar2)(this_00,(StringName *)&local_60,(TextShaderEditor *)local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa18),3);
  pSVar3 = *(StringName **)(this + 0xa18);
  StringName::StringName((StringName *)local_58,"separation",false);
  iVar8 = (int)(TextShaderEditor *)local_58;
  Control::add_theme_constant_override(pSVar3,iVar8);
  if ((StringName::configured != '\0') && (local_58[0] != (Object *)0x0)) {
    StringName::unref();
  }
  Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0xa18),0xf,0,0);
  plVar9 = *(long **)(this + 0xa18);
  pcVar2 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<TextShaderEditor,bool>
            ((TextShaderEditor *)local_58,(char *)this,
             (_func_void_bool *)"&TextShaderEditor::_show_warnings_panel");
  StringName::StringName((StringName *)&local_60,"show_warnings_panel",false);
  (*pcVar2)(plVar9,(StringName *)&local_60,(TextShaderEditor *)local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  plVar9 = *(long **)(this + 0xa18);
  pcVar2 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<TextShaderEditor>
            ((TextShaderEditor *)local_58,(char *)this,
             (_func_void *)"&TextShaderEditor::apply_shaders");
  (*pcVar2)(plVar9,CoreStringNames::singleton + 0x18,(TextShaderEditor *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  plVar9 = (long *)EditorSettings::get_singleton();
  pcVar2 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<TextShaderEditor>
            ((TextShaderEditor *)local_58,(char *)this,
             (_func_void *)"&TextShaderEditor::_editor_settings_changed");
  StringName::StringName((StringName *)&local_60,"settings_changed",false);
  (*pcVar2)(plVar9,(StringName *)&local_60,(TextShaderEditor *)local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  plVar9 = (long *)ProjectSettings::get_singleton();
  pcVar2 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<TextShaderEditor>
            ((TextShaderEditor *)local_58,(char *)this,
             (_func_void *)"&TextShaderEditor::_project_settings_changed");
  StringName::StringName((StringName *)&local_60,"settings_changed",false);
  (*pcVar2)(plVar9,(StringName *)&local_60,(TextShaderEditor *)local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  CodeEdit::set_symbol_lookup_on_click_enabled
            (SUB81(*(undefined8 *)(*(long *)(this + 0xa18) + 0xa10),0));
  TextEdit::set_context_menu_enabled(SUB81(*(undefined8 *)(*(long *)(this + 0xa18) + 0xa10),0));
  CodeEdit::set_draw_breakpoints_gutter(SUB81(*(undefined8 *)(*(long *)(this + 0xa18) + 0xa10),0));
  CodeEdit::set_draw_executing_lines_gutter
            (SUB81(*(undefined8 *)(*(long *)(this + 0xa18) + 0xa10),0));
  plVar9 = *(long **)(*(long *)(this + 0xa18) + 0xa10);
  pcVar2 = *(code **)(*plVar9 + 0x108);
  pCVar10 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar10);
  *(undefined **)(pCVar10 + 0x20) = &_LC22;
  *(TextShaderEditor **)(pCVar10 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar10 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar10 = &PTR_hash_001239a0;
  *(undefined8 *)(pCVar10 + 0x40) = 0;
  uVar16 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar10 + 0x10) = 0;
  *(undefined8 *)(pCVar10 + 0x30) = uVar16;
  *(code **)(pCVar10 + 0x38) = _text_edit_gui_input;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar10,(int)pCVar10 + 0x28);
  *(char **)(pCVar10 + 0x20) = "TextShaderEditor::_text_edit_gui_input";
  Callable::Callable((Callable *)local_58,pCVar10);
  (*pcVar2)(plVar9,SceneStringNames::singleton + 0x28,(TextShaderEditor *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  CodeTextEditor::update_editor_settings();
  pPVar11 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(pPVar11);
  postinitialize_handler((Object *)pPVar11);
  *(PopupMenu **)(this + 0x9e8) = pPVar11;
  Node::add_child(this,pPVar11,0,0);
  plVar9 = *(long **)(this + 0x9e8);
  pcVar2 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<TextShaderEditor,int>
            ((TextShaderEditor *)local_58,(char *)this,
             (_func_void_int *)"&TextShaderEditor::_menu_option");
  (*pcVar2)(plVar9,SceneStringNames::singleton + 0x240,(TextShaderEditor *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  pBVar12 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar12,true);
  pBVar12[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar12 = &PTR__initialize_classv_00122010;
  postinitialize_handler((Object *)pBVar12);
  Control::set_anchors_and_offsets_preset(pBVar12,0xf,0,0);
  this_01 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_01,false);
  this_01[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_01 = &PTR__initialize_classv_00121c98;
  postinitialize_handler((Object *)this_01);
  pMVar13 = (MenuButton *)operator_new(0xc68,"");
  local_58[0] = (Object *)0x0;
  MenuButton::MenuButton(pMVar13,(String *)local_58);
  postinitialize_handler((Object *)pMVar13);
  *(MenuButton **)(this + 0x9c8) = pMVar13;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_shortcut_context(*(Node **)(this + 0x9c8));
  pSVar15 = *(String **)(this + 0x9c8);
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Edit");
  TTR((String *)&local_68,(String *)&local_60);
  Button::set_text(pSVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  MenuButton::set_switch_on_hover(SUB81(*(undefined8 *)(this + 0x9c8),0));
  plVar9 = *(long **)(this + 0x9c8);
  pcVar2 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<TextShaderEditor>
            ((TextShaderEditor *)local_58,(char *)this,
             (_func_void *)"&TextShaderEditor::_prepare_edit_menu");
  StringName::StringName((StringName *)&local_60,"about_to_popup",false);
  (*pcVar2)(plVar9,(StringName *)&local_60,(TextShaderEditor *)local_58);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  pRVar14 = (Ref *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"ui_undo");
  ED_GET_SHORTCUT((String *)&local_60);
  iVar17 = (int)(StringName *)&local_60;
  PopupMenu::add_shortcut(pRVar14,iVar17,false,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pRVar14 = (Ref *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"ui_redo");
  ED_GET_SHORTCUT((String *)&local_60);
  PopupMenu::add_shortcut(pRVar14,iVar17,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar15 = (String *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  PopupMenu::add_separator(pSVar15,iVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pRVar14 = (Ref *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"ui_cut");
  ED_GET_SHORTCUT((String *)&local_60);
  PopupMenu::add_shortcut(pRVar14,iVar17,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pRVar14 = (Ref *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"ui_copy");
  ED_GET_SHORTCUT((String *)&local_60);
  PopupMenu::add_shortcut(pRVar14,iVar17,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pRVar14 = (Ref *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"ui_paste");
  ED_GET_SHORTCUT((String *)&local_60);
  PopupMenu::add_shortcut(pRVar14,iVar17,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar15 = (String *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  PopupMenu::add_separator(pSVar15,iVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pRVar14 = (Ref *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"ui_text_select_all");
  ED_GET_SHORTCUT((String *)&local_60);
  PopupMenu::add_shortcut(pRVar14,iVar17,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar15 = (String *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  PopupMenu::add_separator(pSVar15,iVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pRVar14 = (Ref *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"script_text_editor/move_up");
  ED_GET_SHORTCUT((String *)&local_60);
  PopupMenu::add_shortcut(pRVar14,iVar17,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pRVar14 = (Ref *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"script_text_editor/move_down");
  ED_GET_SHORTCUT((String *)&local_60);
  PopupMenu::add_shortcut(pRVar14,iVar17,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pRVar14 = (Ref *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"script_text_editor/indent");
  ED_GET_SHORTCUT((String *)&local_60);
  PopupMenu::add_shortcut(pRVar14,iVar17,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pRVar14 = (Ref *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"script_text_editor/unindent");
  ED_GET_SHORTCUT((String *)&local_60);
  PopupMenu::add_shortcut(pRVar14,iVar17,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pRVar14 = (Ref *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"script_text_editor/delete_line");
  ED_GET_SHORTCUT((String *)&local_60);
  PopupMenu::add_shortcut(pRVar14,iVar17,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pRVar14 = (Ref *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"script_text_editor/toggle_comment");
  ED_GET_SHORTCUT((String *)&local_60);
  PopupMenu::add_shortcut(pRVar14,iVar17,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pRVar14 = (Ref *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"script_text_editor/duplicate_selection");
  ED_GET_SHORTCUT((String *)&local_60);
  PopupMenu::add_shortcut(pRVar14,iVar17,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pRVar14 = (Ref *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"script_text_editor/duplicate_lines");
  ED_GET_SHORTCUT((String *)&local_60);
  PopupMenu::add_shortcut(pRVar14,iVar17,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pRVar14 = (Ref *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"script_text_editor/toggle_word_wrap");
  ED_GET_SHORTCUT((String *)&local_60);
  PopupMenu::add_shortcut(pRVar14,iVar17,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar15 = (String *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  PopupMenu::add_separator(pSVar15,iVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pRVar14 = (Ref *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"ui_text_completion_query");
  ED_GET_SHORTCUT((String *)&local_60);
  PopupMenu::add_shortcut(pRVar14,iVar17,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar9 = (long *)MenuButton::get_popup();
  pcVar2 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<TextShaderEditor,int>
            ((TextShaderEditor *)local_58,(char *)this,
             (_func_void_int *)"&TextShaderEditor::_menu_option");
  (*pcVar2)(plVar9,SceneStringNames::singleton + 0x240,(TextShaderEditor *)local_58);
  Callable::~Callable((Callable *)local_58);
  pMVar13 = (MenuButton *)operator_new(0xc68,"");
  local_58[0] = (Object *)0x0;
  MenuButton::MenuButton(pMVar13,(String *)local_58);
  postinitialize_handler((Object *)pMVar13);
  *(MenuButton **)(this + 0x9d0) = pMVar13;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_shortcut_context(*(Node **)(this + 0x9d0));
  pSVar15 = *(String **)(this + 0x9d0);
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Search");
  TTR((String *)&local_68,(String *)&local_60);
  Button::set_text(pSVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  MenuButton::set_switch_on_hover(SUB81(*(undefined8 *)(this + 0x9d0),0));
  pRVar14 = (Ref *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"script_text_editor/find");
  ED_GET_SHORTCUT((String *)&local_60);
  PopupMenu::add_shortcut(pRVar14,iVar17,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pRVar14 = (Ref *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"script_text_editor/find_next");
  ED_GET_SHORTCUT((String *)&local_60);
  PopupMenu::add_shortcut(pRVar14,iVar17,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pRVar14 = (Ref *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"script_text_editor/find_previous");
  ED_GET_SHORTCUT((String *)&local_60);
  PopupMenu::add_shortcut(pRVar14,iVar17,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pRVar14 = (Ref *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"script_text_editor/replace");
  ED_GET_SHORTCUT((String *)&local_60);
  PopupMenu::add_shortcut(pRVar14,iVar17,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar9 = (long *)MenuButton::get_popup();
  pcVar2 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<TextShaderEditor,int>
            ((TextShaderEditor *)local_58,(char *)this,
             (_func_void_int *)"&TextShaderEditor::_menu_option");
  (*pcVar2)(plVar9,SceneStringNames::singleton + 0x240,(TextShaderEditor *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  pMVar13 = (MenuButton *)operator_new(0xc68,"");
  local_58[0] = (Object *)0x0;
  MenuButton::MenuButton(pMVar13,(String *)local_58);
  postinitialize_handler((Object *)pMVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_shortcut_context((Node *)pMVar13);
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Go To");
  TTR((String *)&local_68,(String *)&local_60);
  Button::set_text((String *)pMVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  MenuButton::set_switch_on_hover(SUB81(pMVar13,0));
  plVar9 = (long *)MenuButton::get_popup();
  pcVar2 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<TextShaderEditor,int>
            ((TextShaderEditor *)local_58,(char *)this,
             (_func_void_int *)"&TextShaderEditor::_menu_option");
  (*pcVar2)(plVar9,SceneStringNames::singleton + 0x240,(TextShaderEditor *)local_58);
  Callable::~Callable((Callable *)local_58);
  pRVar14 = (Ref *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"script_text_editor/goto_line");
  ED_GET_SHORTCUT((String *)&local_60);
  PopupMenu::add_shortcut(pRVar14,iVar17,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar15 = (String *)MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  PopupMenu::add_separator(pSVar15,iVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pPVar11 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(pPVar11);
  postinitialize_handler((Object *)pPVar11);
  *(PopupMenu **)(this + 0x9d8) = pPVar11;
  pSVar15 = (String *)MenuButton::get_popup();
  uVar16 = *(undefined8 *)(this + 0x9d8);
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Bookmarks");
  TTR((String *)&local_68,(String *)&local_60);
  PopupMenu::add_submenu_node_item(pSVar15,(PopupMenu *)&local_68,(int)uVar16);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  _update_bookmark_list(this);
  plVar9 = *(long **)(this + 0x9d8);
  pcVar2 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<TextShaderEditor>
            ((TextShaderEditor *)local_58,(char *)this,
             (_func_void *)"&TextShaderEditor::_update_bookmark_list");
  StringName::StringName((StringName *)&local_60,"about_to_popup",false);
  (*pcVar2)(plVar9,(StringName *)&local_60,(TextShaderEditor *)local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  plVar9 = *(long **)(this + 0x9d8);
  pcVar2 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<TextShaderEditor,int>
            ((TextShaderEditor *)local_58,(char *)this,
             (_func_void_int *)"&TextShaderEditor::_bookmark_item_pressed");
  StringName::StringName((StringName *)&local_60,"index_pressed",false);
  (*pcVar2)(plVar9,(StringName *)&local_60,(TextShaderEditor *)local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  this_02 = (MenuButton *)operator_new(0xc68,"");
  local_58[0] = (Object *)0x0;
  MenuButton::MenuButton(this_02,(String *)local_58);
  postinitialize_handler((Object *)this_02);
  *(MenuButton **)(this + 0x9e0) = this_02;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar15 = *(String **)(this + 0x9e0);
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Help");
  TTR((String *)&local_68,(String *)&local_60);
  Button::set_text(pSVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  MenuButton::set_switch_on_hover(SUB81(*(undefined8 *)(this + 0x9e0),0));
  uVar16 = MenuButton::get_popup();
  local_58[0] = (Object *)0x0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Online Docs");
  TTR((String *)&local_68,(String *)&local_60);
  PopupMenu::add_item(uVar16,(String *)&local_68,0x19,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar9 = (long *)MenuButton::get_popup();
  pcVar2 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<TextShaderEditor,int>
            ((TextShaderEditor *)local_58,(char *)this,
             (_func_void_int *)"&TextShaderEditor::_menu_option");
  (*pcVar2)(plVar9,SceneStringNames::singleton + 0x240,(TextShaderEditor *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  Node::add_child(this,pBVar12,0,0);
  Node::add_child(pBVar12,this_01,0,0);
  Node::add_child(this_01,*(undefined8 *)(this + 0x9d0),0,0);
  Node::add_child(this_01,*(undefined8 *)(this + 0x9c8),0,0);
  Node::add_child(this_01,pMVar13,0,0);
  Node::add_child(this_01,*(undefined8 *)(this + 0x9e0),0,0);
  pOVar18 = *(Object **)(EditorNode::singleton + 0x838);
  if (pOVar18 != (Object *)0x0) {
    cVar6 = RefCounted::reference();
    if (cVar6 == '\0') {
      pOVar18 = (Object *)0x0;
    }
    pcVar2 = *(code **)(*(long *)pOVar18 + 0x1d0);
    lVar1 = EditorStringNames::singleton + 0x18;
    if ((TextShaderEditor()::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar8 = __cxa_guard_acquire(&TextShaderEditor()::{lambda()#1}::operator()()::sname),
       iVar8 != 0)) {
      _scs_create((char *)&TextShaderEditor()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&TextShaderEditor()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&TextShaderEditor()::{lambda()#1}::operator()()::sname);
    }
    (*pcVar2)((TextShaderEditor *)local_58,pOVar18,
              &TextShaderEditor()::{lambda()#1}::operator()()::sname,lVar1);
    Control::add_theme_style_override
              ((StringName *)this_01,(Ref *)(SceneStringNames::singleton + 600));
    if (((local_58[0] == (Object *)0x0) ||
        (cVar6 = RefCounted::unreference(), pOVar5 = local_58[0], cVar6 == '\0')) ||
       (cVar6 = predelete_handler(local_58[0]), cVar6 == '\0')) {
      cVar6 = RefCounted::unreference();
    }
    else {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
      cVar6 = RefCounted::unreference();
    }
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar18), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar18 + 0x140))(pOVar18);
      Memory::free_static(pOVar18,false);
    }
    this_03 = (SplitContainer *)operator_new(0xa70,"");
    SplitContainer::SplitContainer(this_03,true);
    this_03[0xa68] = (SplitContainer)0x1;
    *(undefined ***)this_03 = &PTR__initialize_classv_00122910;
    postinitialize_handler((Object *)this_03);
    Node::add_child(pBVar12,this_03,0,0);
    Control::set_anchors_and_offsets_preset(this_03,0xf,0,0);
    Control::set_v_size_flags(this_03,3);
    Node::add_child(this_03,*(undefined8 *)(this + 0xa18),0,0);
    this_04 = (FindReplaceBar *)operator_new(0xab0,"");
    FindReplaceBar::FindReplaceBar(this_04);
    postinitialize_handler((Object *)this_04);
    Node::add_child(pBVar12,this_04,0,0);
    CanvasItem::hide();
    CodeTextEditor::set_find_replace_bar(*(FindReplaceBar **)(this + 0xa18));
    this_05 = (RichTextLabel *)operator_new(0xcf0,"");
    local_58[0] = (Object *)0x0;
    RichTextLabel::RichTextLabel(this_05,(String *)local_58);
    postinitialize_handler((Object *)this_05);
    *(RichTextLabel **)(this + 0x9f0) = this_05;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    pVVar4 = *(Vector2 **)(this + 0x9f0);
    local_44 = (float)EditorScale::get_scale();
    local_44 = local_44 * __LC192;
    local_48 = 0;
    Control::set_custom_minimum_size(pVVar4);
    Control::set_h_size_flags(*(undefined8 *)(this + 0x9f0),3);
    RichTextLabel::set_meta_underline(SUB81(*(undefined8 *)(this + 0x9f0),0));
    RichTextLabel::set_selection_enabled(SUB81(*(undefined8 *)(this + 0x9f0),0));
    RichTextLabel::set_context_menu_enabled(SUB81(*(undefined8 *)(this + 0x9f0),0));
    Control::set_focus_mode(*(undefined8 *)(this + 0x9f0),1);
    CanvasItem::hide();
    plVar9 = *(long **)(this + 0x9f0);
    pcVar2 = *(code **)(*plVar9 + 0x108);
    pCVar10 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar10);
    *(undefined **)(pCVar10 + 0x20) = &_LC22;
    *(TextShaderEditor **)(pCVar10 + 0x28) = this;
    *(undefined1 (*) [16])(pCVar10 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)pCVar10 = &PTR_hash_00123ac0;
    *(undefined8 *)(pCVar10 + 0x40) = 0;
    uVar16 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(pCVar10 + 0x10) = 0;
    *(undefined8 *)(pCVar10 + 0x30) = uVar16;
    *(code **)(pCVar10 + 0x38) = _warning_clicked;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar10,(int)pCVar10 + 0x28);
    *(char **)(pCVar10 + 0x20) = "TextShaderEditor::_warning_clicked";
    Callable::Callable((Callable *)local_58,pCVar10);
    StringName::StringName((StringName *)&local_60,"meta_clicked",false);
    (*pcVar2)(plVar9,(StringName *)&local_60,(TextShaderEditor *)local_58,0);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
    Node::add_child(this_03,*(undefined8 *)(this + 0x9f0),0,0);
    *(undefined8 *)(*(long *)(this + 0xa18) + 0xb40) = *(undefined8 *)(this + 0x9f0);
    this_06 = (GotoLinePopup *)operator_new(0xdc8,"");
    GotoLinePopup::GotoLinePopup(this_06);
    postinitialize_handler((Object *)this_06);
    *(GotoLinePopup **)(this + 0xa00) = this_06;
    Node::add_child(this,this_06,0,0);
    this_07 = (ConfirmationDialog *)operator_new(0xdb8,"");
    ConfirmationDialog::ConfirmationDialog(this_07);
    postinitialize_handler((Object *)this_07);
    *(ConfirmationDialog **)(this + 0xa10) = this_07;
    pBVar12 = (BoxContainer *)operator_new(0xa10,"");
    BoxContainer::BoxContainer(pBVar12,true);
    pBVar12[0xa0c] = (BoxContainer)0x1;
    *(undefined ***)pBVar12 = &PTR__initialize_classv_00122010;
    postinitialize_handler((Object *)pBVar12);
    Node::add_child(*(undefined8 *)(this + 0xa10),pBVar12,0,0);
    this_08 = (Label *)operator_new(0xad8,"");
    local_58[0] = (Object *)0x0;
    Label::Label(this_08,(String *)local_58);
    postinitialize_handler((Object *)this_08);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    local_58[0] = (Object *)0x0;
    String::parse_latin1((String *)local_58,"");
    local_60 = 0;
    String::parse_latin1
              ((String *)&local_60,
               "This shader has been modified on disk.\nWhat action should be taken?");
    TTR((String *)&local_68,(String *)&local_60);
    Label::set_text((String *)this_08);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    Node::add_child(pBVar12,this_08,0,0);
    plVar9 = *(long **)(this + 0xa10);
    pcVar2 = *(code **)(*plVar9 + 0x108);
    create_custom_callable_function_pointer<TextShaderEditor>
              ((TextShaderEditor *)local_58,(char *)this,(_func_void *)"&TextShaderEditor::_reload")
    ;
    (*pcVar2)(plVar9,SceneStringNames::singleton + 0x268,(TextShaderEditor *)local_58,0);
    Callable::~Callable((Callable *)local_58);
    uVar16 = *(undefined8 *)(this + 0xa10);
    local_58[0] = (Object *)0x0;
    String::parse_latin1((String *)local_58,"");
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"Reload");
    TTR((String *)&local_68,(String *)&local_60);
    AcceptDialog::set_ok_button_text(uVar16,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    pSVar15 = *(String **)(this + 0xa10);
    local_58[0] = (Object *)0x0;
    String::parse_latin1((String *)local_58,"resave");
    uVar7 = (**(code **)(*DisplayServer::singleton + 0x690))();
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"");
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"Resave");
    TTR(local_70,(String *)&local_68);
    AcceptDialog::add_button(pSVar15,SUB81(local_70,0),(String *)(ulong)((uVar7 ^ 1) & 0xff));
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    plVar9 = *(long **)(this + 0xa10);
    pcVar2 = *(code **)(*plVar9 + 0x108);
    pCVar10 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar10);
    *(undefined **)(pCVar10 + 0x20) = &_LC22;
    *(TextShaderEditor **)(pCVar10 + 0x28) = this;
    *(undefined1 (*) [16])(pCVar10 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)pCVar10 = &PTR_hash_00123b50;
    *(undefined8 *)(pCVar10 + 0x40) = 0;
    uVar16 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(pCVar10 + 0x10) = 0;
    *(undefined8 *)(pCVar10 + 0x30) = uVar16;
    *(undefined8 *)(pCVar10 + 0x38) = 0x379;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar10,(int)pCVar10 + 0x28);
    *(char **)(pCVar10 + 0x20) = "TextShaderEditor::save_external_data";
    Callable::Callable((Callable *)local_58,pCVar10);
    StringName::StringName((StringName *)&local_60,"custom_action",false);
    (*pcVar2)(plVar9,(StringName *)&local_60,(TextShaderEditor *)local_58,0);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
    Node::add_child(this,*(undefined8 *)(this + 0xa10),0,0);
    _editor_settings_changed(this);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CodeTextEditor::show_toggle_scripts_button();
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* ShaderTextEditor::_bind_methods() */

void ShaderTextEditor::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  char *local_f8;
  undefined8 local_f0;
  PropertyInfo local_e8 [8];
  CowData<char32_t> local_e0 [8];
  long local_d8;
  CowData<char32_t> local_c8 [16];
  char *local_b8;
  undefined8 local_b0;
  CowData<char32_t> local_a8 [8];
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_108 = 0;
  local_110 = 0;
  local_b8 = "";
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_110);
  local_118 = 0;
  local_b8 = "valid";
  local_b0 = 5;
  String::parse_latin1((StrRange *)&local_118);
  PropertyInfo::PropertyInfo
            (local_e8,1,(StrRange *)&local_118,0,(StrRange *)&local_110,6,&local_108);
  local_b8 = "script_validated";
  local_100 = 0;
  local_b0 = 0x10;
  String::parse_latin1((StrRange *)&local_100);
  _local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,local_e8);
  local_f8 = "ShaderTextEditor";
  local_120 = 0;
  local_f0 = 0x10;
  String::parse_latin1((StrRange *)&local_120);
  StringName::StringName((StringName *)&local_f8,(String *)&local_120,false);
  ClassDB::add_signal((StringName *)&local_f8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
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
  CowData<Variant>::_unref((CowData<Variant> *)&local_68);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref(local_c8);
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TextShaderEditor::_bind_methods() */

void TextShaderEditor::_bind_methods(void)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  MethodBind *pMVar5;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  long local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_a8._8_8_ = local_a8._0_8_;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  pMVar5 = create_method_bind<TextShaderEditor,bool>(_show_warnings_panel);
  StringName::StringName((StringName *)&local_b8,"_show_warnings_panel",false);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_a8._8_8_;
  local_a8 = auVar3 << 0x40;
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  pMVar5 = create_method_bind<TextShaderEditor,Variant_const&>(_warning_clicked);
  StringName::StringName((StringName *)&local_b8,"_warning_clicked",false);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_a8._8_8_;
  local_a8 = auVar2 << 0x40;
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  local_d0 = 0;
  local_b8 = "validation_changed";
  local_b0 = 0x12;
  String::parse_latin1((StrRange *)&local_d0);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d0);
  local_c8 = "TextShaderEditor";
  local_d8 = 0;
  local_c0 = 0x10;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_d8,false);
  ClassDB::add_signal((StringName *)&local_c8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
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
  CowData<Variant>::_unref((CowData<Variant> *)&local_68);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_a8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<ShaderLanguage::ModeInfo>::_ref(CowData<ShaderLanguage::ModeInfo> const&) [clone .part.0]
    */

void __thiscall
CowData<ShaderLanguage::ModeInfo>::_ref(CowData<ShaderLanguage::ModeInfo> *this,CowData *param_1)

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
/* List<ScriptLanguage::CodeCompletionOption,
   DefaultAllocator>::push_back(ScriptLanguage::CodeCompletionOption const&) [clone .isra.0] */

void __thiscall
List<ScriptLanguage::CodeCompletionOption,DefaultAllocator>::push_back
          (List<ScriptLanguage::CodeCompletionOption,DefaultAllocator> *this,
          CodeCompletionOption *param_1)

{
  CowData<Pair<int,int>> *this_00;
  Array *this_01;
  undefined4 uVar1;
  Object *pOVar2;
  Object *pOVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  long in_FS_OFFSET;
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)this == 0) {
    pauVar10 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar10;
    *(undefined4 *)pauVar10[1] = 0;
    *pauVar10 = (undefined1  [16])0x0;
  }
  puVar9 = (undefined4 *)operator_new(0x98,DefaultAllocator::alloc);
  *(undefined1 (*) [16])(puVar9 + 2) = (undefined1  [16])0x0;
  uVar6 = _UNK_00124088;
  uVar4 = __LC34;
  this_00 = (CowData<Pair<int,int>> *)(puVar9 + 0x18);
  *puVar9 = 9;
  *(undefined8 *)(puVar9 + 10) = 0;
  puVar9[0xc] = 0;
  *(undefined8 *)(puVar9 + 0x14) = 0;
  *(undefined8 *)(puVar9 + 0x18) = 0;
  *(undefined8 *)(puVar9 + 6) = uVar4;
  *(undefined8 *)(puVar9 + 8) = uVar6;
  *(undefined1 (*) [16])(puVar9 + 0xe) = (undefined1  [16])0x0;
  iVar8 = CowData<Pair<int,int>>::resize<false>(this_00,1);
  if (iVar8 == 0) {
    if (*(long *)(puVar9 + 0x18) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = *(long *)(*(long *)(puVar9 + 0x18) + -8);
      if (0 < lVar11) {
        CowData<Pair<int,int>>::_copy_on_write(this_00);
        **(undefined8 **)(puVar9 + 0x18) = 0xffffffffffffffff;
        goto LAB_001091b4;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,0,lVar11,"p_index","size()","",false,false);
  }
LAB_001091b4:
  puVar9[0x1a] = 0x400;
  this_01 = (Array *)(puVar9 + 0x1e);
  *(undefined8 *)(puVar9 + 0x1c) = 0;
  Array::Array(this_01);
  local_58 = 0;
  local_60 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::set_typed((uint)this_01,(StringName *)0x2,(Variant *)&local_60);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar1 = *(undefined4 *)param_1;
  *(undefined8 *)(puVar9 + 0x24) = 0;
  *(undefined1 (*) [16])(puVar9 + 0x20) = (undefined1  [16])0x0;
  *puVar9 = uVar1;
  if (*(long *)(puVar9 + 2) != *(long *)(param_1 + 8)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar9 + 2),(CowData *)(param_1 + 8));
  }
  if (*(long *)(puVar9 + 4) != *(long *)(param_1 + 0x10)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar9 + 4),(CowData *)(param_1 + 0x10));
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  pOVar2 = *(Object **)(param_1 + 0x28);
  pOVar3 = *(Object **)(puVar9 + 10);
  *(undefined8 *)(puVar9 + 6) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(puVar9 + 8) = uVar4;
  if (pOVar2 != pOVar3) {
    *(Object **)(puVar9 + 10) = pOVar2;
    if (pOVar2 != (Object *)0x0) {
      cVar7 = RefCounted::reference();
      if (cVar7 == '\0') {
        *(undefined8 *)(puVar9 + 10) = 0;
      }
    }
    if (pOVar3 != (Object *)0x0) {
      cVar7 = RefCounted::unreference();
      if (cVar7 != '\0') {
        cVar7 = predelete_handler(pOVar3);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
    }
  }
  Variant::operator=((Variant *)(puVar9 + 0xc),(Variant *)(param_1 + 0x30));
  if (*(long *)(puVar9 + 0x14) != *(long *)(param_1 + 0x50)) {
    CowData<Pair<int,int>>::_ref
              ((CowData<Pair<int,int>> *)(puVar9 + 0x14),(CowData *)(param_1 + 0x50));
  }
  if (*(long *)(puVar9 + 0x18) != *(long *)(param_1 + 0x60)) {
    CowData<Pair<int,int>>::_ref(this_00,(CowData *)(param_1 + 0x60));
  }
  puVar9[0x1a] = *(undefined4 *)(param_1 + 0x68);
  if (*(long *)(puVar9 + 0x1c) != *(long *)(param_1 + 0x70)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar9 + 0x1c),(CowData *)(param_1 + 0x70));
  }
  Array::operator=(this_01,(Array *)(param_1 + 0x78));
  uVar4 = *(undefined8 *)(*(long *)this + 8);
  *(long *)(puVar9 + 0x24) = *(long *)this;
  *(undefined8 *)(puVar9 + 0x20) = 0;
  plVar5 = *(long **)this;
  *(undefined8 *)(puVar9 + 0x22) = uVar4;
  if (plVar5[1] != 0) {
    *(undefined4 **)(plVar5[1] + 0x80) = puVar9;
  }
  plVar5[1] = (long)puVar9;
  if (*plVar5 == 0) {
    *plVar5 = (long)puVar9;
  }
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDShaderSyntaxHighlighter::add_disabled_branch_region(Vector2i const&) */

void __thiscall
GDShaderSyntaxHighlighter::add_disabled_branch_region
          (GDShaderSyntaxHighlighter *this,Vector2i *param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_1 < 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = 0x45;
      pcVar3 = "Condition \"p_region.x < 0\" is true.";
LAB_00109b86:
      _err_print_error("add_disabled_branch_region","editor/plugins/text_shader_editor.cpp",uVar4,
                       pcVar3,0,0);
      return;
    }
    goto LAB_00109cb7;
  }
  uVar4 = *(undefined8 *)param_1;
  if (*(int *)(param_1 + 4) < 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = 0x46;
      pcVar3 = "Condition \"p_region.y < 0\" is true.";
      goto LAB_00109b86;
    }
    goto LAB_00109cb7;
  }
  lVar5 = *(long *)(this + 0x360);
  if (lVar5 != 0) {
    lVar2 = 0;
    do {
      if (*(long *)(lVar5 + -8) <= lVar2) {
        lVar5 = *(long *)(lVar5 + -8) + 1;
        goto LAB_00109bd4;
      }
      lVar2 = lVar2 + 1;
    } while (*(int *)param_1 != *(int *)(lVar5 + -8 + lVar2 * 8));
    local_50 = 0;
    local_40 = 0x11;
    local_48 = "\' already exists.";
    String::parse_latin1((StrRange *)&local_50);
    itos((long)local_60);
    operator+((char *)local_58,(String *)"Branch region with a start line \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error("add_disabled_branch_region","editor/plugins/text_shader_editor.cpp",0x49,
                     "Condition \"disabled_branch_regions[i].x == p_region.x\" is true.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00109cb7;
  }
  lVar5 = 1;
LAB_00109bd4:
  iVar1 = CowData<Vector2i>::resize<false>((CowData<Vector2i> *)(this + 0x360),lVar5);
  if (iVar1 == 0) {
    if (*(long *)(this + 0x360) == 0) {
      lVar2 = -1;
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(*(long *)(this + 0x360) + -8);
      lVar2 = lVar5 + -1;
      if (-1 < lVar2) {
        CowData<Vector2i>::_copy_on_write((CowData<Vector2i> *)(this + 0x360));
        *(undefined8 *)(*(long *)(this + 0x360) + lVar2 * 8) = uVar4;
        goto LAB_00109c13;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar2,lVar5,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_00109c13:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    SyntaxHighlighter::clear_highlighting_cache();
    return;
  }
LAB_00109cb7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderTextEditor::_validate_script() */

void __thiscall ShaderTextEditor::_validate_script(ShaderTextEditor *this)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  code *pcVar4;
  CowData<char32_t> *pCVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
  *pHVar10;
  ulong uVar11;
  long lVar12;
  HashSet *pHVar13;
  undefined4 *puVar14;
  undefined1 (*pauVar15) [16];
  ShaderWarning *pSVar16;
  long *plVar17;
  uint uVar18;
  Color *pCVar19;
  long lVar20;
  uint uVar21;
  String *pSVar22;
  CowData<char32_t> *pCVar23;
  long in_FS_OFFSET;
  bool bVar24;
  CowData<char32_t> *local_598;
  String *local_590;
  ShaderCompileInfo *local_578;
  CowData<char32_t> *local_540;
  int local_50c;
  long local_4f8;
  long local_4f0;
  long local_4e8;
  long *local_4e0;
  long *local_4d8;
  long local_4d0;
  long local_4c8;
  CowData<char32_t> local_4c0 [8];
  String local_4b8 [8];
  long local_4b0;
  CowData<char32_t> local_4a8 [8];
  String local_4a0 [8];
  undefined8 local_498;
  String local_490 [8];
  CowData<char32_t> local_488 [8];
  String local_480 [8];
  undefined8 local_478;
  String local_470 [8];
  CowData<char32_t> local_468 [8];
  long local_460;
  long local_458;
  CowData<char32_t> *local_450;
  ShaderPreprocessor local_448 [32];
  String local_428 [8];
  undefined1 local_420 [16];
  undefined1 local_410 [16];
  undefined8 local_400;
  undefined1 local_3f0 [16];
  undefined1 local_3e0 [16];
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> local_3d0 [16];
  undefined1 local_3c0 [16];
  ulong local_3b0;
  code *local_3a8;
  undefined1 local_3a0;
  undefined4 local_39c;
  long local_398 [98];
  Variant *local_88 [2];
  int local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  uStack_74 = 0;
  (**(code **)(*(long *)this + 0xd0))(this,CoreStringNames::singleton + 0x18,0,0);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  local_4f8 = 0;
  if (*(long *)(this + 0xb48) == 0) {
    ShaderInclude::get_code();
  }
  else {
    _check_shader_mode(this);
    Shader::get_code();
  }
  local_598 = (CowData<char32_t> *)local_398;
  if (local_4f8 != local_398[0]) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_4f8);
    local_4f8 = local_398[0];
    local_398[0] = 0;
  }
  CowData<char32_t>::_unref(local_598);
  ShaderPreprocessor::ShaderPreprocessor(local_448);
  local_4f0 = 0;
  local_4e8 = 0;
  local_4e0 = (long *)0x0;
  local_4d8 = (long *)0x0;
  local_4d0 = 0;
  if (*(long *)(this + 0xb48) == 0) {
    if (*(long *)(this + 0xb50) != 0) {
      Resource::get_path();
      if (local_4d0 != local_398[0]) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_4d0);
        local_4d0 = local_398[0];
        local_398[0] = 0;
      }
      goto LAB_00109e65;
    }
  }
  else {
    Resource::get_path();
    if (local_4d0 != local_398[0]) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_4d0);
      local_4d0 = local_398[0];
      local_398[0] = 0;
    }
LAB_00109e65:
    CowData<char32_t>::_unref(local_598);
  }
  local_590 = (String *)&local_4d0;
  uVar7 = ShaderPreprocessor::preprocess
                    ((String *)local_448,(String *)&local_4f8,local_590,(String *)&local_4f0,
                     (List *)&local_4e8,(List *)&local_4e0,(HashSet *)&local_4d8,(List *)0x0,
                     (List *)0x0,(_func_void_List_ptr *)0x0);
  *(undefined4 *)(this + 0xb60) = uVar7;
  pCVar19 = (Color *)0x0;
  while( true ) {
    iVar8 = TextEdit::get_line_count();
    if (iVar8 <= (int)pCVar19) break;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    TextEdit::set_line_background_color((int)*(undefined8 *)(this + 0xa10),pCVar19);
    pCVar19 = (Color *)(ulong)((int)pCVar19 + 1);
  }
  CowData<Vector2i>::resize<false>((CowData<Vector2i> *)(*(long *)(this + 0xb38) + 0x360),0);
  SyntaxHighlighter::clear_highlighting_cache();
  if ((local_4d8 != (long *)0x0) && (pSVar22 = (String *)*local_4d8, pSVar22 != (String *)0x0)) {
    do {
      while ((pSVar22[0x10] == (String)0x0 &&
             (cVar6 = String::operator!=(local_590,pSVar22), cVar6 == '\0'))) {
        local_78 = (int)*(undefined8 *)(pSVar22 + 8);
        uStack_74 = (undefined4)((ulong)*(undefined8 *)(pSVar22 + 8) >> 0x20);
        GDShaderSyntaxHighlighter::add_disabled_branch_region
                  (*(GDShaderSyntaxHighlighter **)(this + 0xb38),(Vector2i *)&local_78);
        pSVar22 = *(String **)(pSVar22 + 0x20);
        if (pSVar22 == (String *)0x0) goto LAB_00109fa0;
      }
      pSVar22 = *(String **)(pSVar22 + 0x20);
    } while (pSVar22 != (String *)0x0);
  }
LAB_00109fa0:
  local_398[0] = 0;
  String::parse_latin1((String *)local_598,"");
  CodeTextEditor::set_error((String *)this);
  CowData<char32_t>::_unref(local_598);
  iVar8 = (int)this;
  CodeTextEditor::set_error_count(iVar8);
  if (*(int *)(this + 0xb60) == 0) {
    ShaderLanguage::ShaderLanguage((ShaderLanguage *)local_598);
    ShaderLanguage::enable_warning_checking(SUB81(local_598,0));
    ShaderLanguage::set_warning_flags((uint)local_598);
    uVar11 = _LC33;
    local_420 = (undefined1  [16])0x0;
    local_410 = (undefined1  [16])0x0;
    local_400 = _LC33;
    local_3f0 = (undefined1  [16])0x0;
    local_3e0 = (undefined1  [16])0x0;
    StringName::StringName((StringName *)&local_458,"fragment",false);
    if (local_3f0._8_8_ == local_458) {
      if ((StringName::configured != '\0') && (local_458 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_3f0._8_8_ = local_458;
    }
    StringName::StringName((StringName *)&local_458,"vertex",false);
    if (local_3e0._0_8_ == local_458) {
      if ((StringName::configured != '\0') && (local_458 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_3e0._0_8_ = local_458;
    }
    StringName::StringName((StringName *)&local_458,"light",false);
    if (local_3e0._8_8_ == local_458) {
      if ((StringName::configured != '\0') && (local_458 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_3e0._8_8_ = local_458;
    }
    local_3b0 = uVar11;
    local_3a0 = 0;
    local_39c = 0;
    local_3a8 = _get_global_shader_uniform_type;
    local_3d0[0] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_3d0[1] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_3d0[2] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_3d0[3] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_3d0[4] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_3d0[5] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_3d0[6] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_3d0[7] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_3d0[8] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_3d0[9] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_3d0[10] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_3d0[0xb] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_3d0[0xc] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_3d0[0xd] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_3d0[0xe] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_3d0[0xf] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_3c0 = (undefined1  [16])0x0;
    if (*(long **)(this + 0xb48) == (long *)0x0) {
      local_3a0 = 1;
    }
    else {
      uVar7 = (**(code **)(**(long **)(this + 0xb48) + 0x1d0))();
      pHVar10 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
                 *)ShaderTypes::get_functions(ShaderTypes::singleton);
      if (pHVar10 !=
          (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
           *)local_428) {
        uVar18 = *(uint *)(hash_table_size_primes + (local_400 & 0xffffffff) * 4);
        uVar21 = (uint)local_400;
        if ((local_400._4_4_ != 0) && (local_420._0_8_ != 0)) {
          if (uVar18 != 0) {
            lVar12 = 0;
            do {
              if (*(int *)(local_420._8_8_ + lVar12) != 0) {
                *(int *)(local_420._8_8_ + lVar12) = 0;
                pvVar3 = *(void **)(local_420._0_8_ + lVar12 * 2);
                KeyValue<StringName,ShaderLanguage::FunctionInfo>::~KeyValue
                          ((KeyValue<StringName,ShaderLanguage::FunctionInfo> *)
                           ((long)pvVar3 + 0x10));
                Memory::free_static(pvVar3,false);
                *(undefined8 *)(local_420._0_8_ + lVar12 * 2) = 0;
              }
              lVar12 = lVar12 + 4;
            } while ((ulong)uVar18 * 4 - lVar12 != 0);
            uVar18 = *(uint *)(hash_table_size_primes + (local_400 & 0xffffffff) * 4);
            uVar21 = (uint)local_400;
          }
          local_400 = local_400 & 0xffffffff;
          local_410 = (undefined1  [16])0x0;
        }
        if (uVar18 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(pHVar10 + 0x28) * 4)) {
          if (uVar21 != 0x1c) {
            uVar11 = (ulong)uVar21;
            do {
              uVar18 = (int)uVar11 + 1;
              uVar11 = (ulong)uVar18;
              if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(pHVar10 + 0x28) * 4) <=
                  *(uint *)(hash_table_size_primes + uVar11 * 4)) {
                if (uVar21 != uVar18) {
                  if (local_420._0_8_ == 0) {
                    local_400 = CONCAT44(local_400._4_4_,uVar18);
                  }
                  else {
                    HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
                    ::_resize_and_rehash
                              ((HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
                                *)local_428,uVar18);
                  }
                }
                goto LAB_0010a744;
              }
            } while (uVar18 != 0x1c);
          }
          _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                           "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0
                           ,0,0);
        }
LAB_0010a744:
        if (*(long *)(pHVar10 + 8) != 0) {
          for (puVar2 = *(undefined8 **)(pHVar10 + 0x18); puVar2 != (undefined8 *)0x0;
              puVar2 = (undefined8 *)*puVar2) {
            HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            ::insert((StringName *)&local_458,(FunctionInfo *)local_428,
                     (bool)((char)puVar2 + '\x10'));
          }
        }
      }
      lVar12 = ShaderTypes::get_modes(ShaderTypes::singleton,uVar7);
      if (local_3f0._0_8_ != *(long *)(lVar12 + 8)) {
        CowData<ShaderLanguage::ModeInfo>::_ref
                  ((CowData<ShaderLanguage::ModeInfo> *)local_3f0,(CowData *)(lVar12 + 8));
      }
      pHVar13 = (HashSet *)ShaderTypes::get_types();
      HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::operator=
                (local_3d0,pHVar13);
    }
    local_578 = (ShaderCompileInfo *)local_428;
    if (local_4f8 != local_4f0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_4f8,(CowData *)&local_4f0);
    }
    iVar9 = ShaderLanguage::compile((String *)local_598,(ShaderCompileInfo *)&local_4f8);
    *(int *)(this + 0xb60) = iVar9;
    if (iVar9 == 0) {
      local_458 = 0;
      String::parse_latin1((String *)&local_458,"");
      CodeTextEditor::set_error((String *)this);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_458);
    }
    else {
      local_4c8 = 0;
      ShaderLanguage::get_include_positions();
      if ((local_450 == (CowData<char32_t> *)0x0) || (*(long *)(local_450 + -8) < 2)) {
        local_50c = ShaderLanguage::get_error_line();
        ShaderLanguage::get_error_text();
        local_478 = 0;
        String::parse_latin1((String *)&local_478,"): ");
        itos((long)local_488);
        operator+((char *)local_480,(String *)"error(");
        String::operator+(local_470,local_480);
        String::operator+((String *)&local_460,local_470);
        if (local_4c8 != local_460) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_4c8);
          local_4c8 = local_460;
          local_460 = 0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_460);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_470);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_480);
        CowData<char32_t>::_unref(local_488);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_478);
        CowData<char32_t>::_unref(local_468);
      }
      else {
        local_50c = *(int *)(local_450 + 8);
        ShaderLanguage::get_error_text();
        local_478 = 0;
        String::parse_latin1((String *)&local_478,": ");
        if (local_450 == (CowData<char32_t> *)0x0) {
          lVar12 = 0;
          lVar20 = -1;
LAB_0010b3d6:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar20,lVar12,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar12 = *(long *)(local_450 + -8);
        lVar20 = lVar12 + -1;
        if (lVar20 < 0) goto LAB_0010b3d6;
        itos((long)local_488);
        local_498 = 0;
        String::parse_latin1((String *)&local_498,":");
        if (local_450 == (CowData<char32_t> *)0x0) {
          lVar12 = 0;
          lVar20 = -1;
          goto LAB_0010b3d6;
        }
        lVar12 = *(long *)(local_450 + -8);
        lVar20 = lVar12 + -1;
        if (lVar20 < 0) goto LAB_0010b3d6;
        local_4b0 = 0;
        String::parse_latin1((String *)&local_4b0,") in include ");
        itos((long)local_4c0);
        operator+((char *)local_4b8,(String *)"error(");
        String::operator+((String *)local_4a8,local_4b8);
        String::operator+(local_4a0,(String *)local_4a8);
        String::operator+(local_490,local_4a0);
        String::operator+(local_480,local_490);
        String::operator+(local_470,local_480);
        String::operator+((String *)&local_460,local_470);
        if (local_4c8 != local_460) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_4c8);
          local_4c8 = local_460;
          local_460 = 0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_460);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_470);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_480);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_490);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_4a0);
        CowData<char32_t>::_unref(local_4a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_4b8);
        CowData<char32_t>::_unref(local_4c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_4b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_498);
        CowData<char32_t>::_unref(local_488);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_478);
        CowData<char32_t>::_unref(local_468);
      }
      local_540 = (CowData<char32_t> *)&local_4c8;
      CodeTextEditor::set_error_count(iVar8);
      CodeTextEditor::set_error((String *)this);
      CodeTextEditor::set_error_pos(iVar8,local_50c - 1U);
      TextEdit::set_line_background_color
                ((int)*(undefined8 *)(this + 0xa10),(Color *)(ulong)(local_50c - 1U));
      pCVar5 = local_450;
      if (local_450 != (CowData<char32_t> *)0x0) {
        LOCK();
        pCVar23 = local_450 + -0x10;
        *(long *)pCVar23 = *(long *)pCVar23 + -1;
        UNLOCK();
        if (*(long *)pCVar23 == 0) {
          if (local_450 == (CowData<char32_t> *)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          lVar12 = *(long *)(local_450 + -8);
          lVar20 = 0;
          local_450 = (CowData<char32_t> *)0x0;
          pCVar23 = pCVar5;
          if (lVar12 != 0) {
            do {
              lVar20 = lVar20 + 1;
              CowData<char32_t>::_unref(pCVar23);
              pCVar23 = pCVar23 + 0x10;
            } while (lVar12 != lVar20);
          }
          Memory::free_static(pCVar5 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref(local_540);
    }
    plVar17 = *(long **)(this + 0xb58);
    if (((plVar17 != (long *)0x0) && (0 < (int)plVar17[2])) || (*(int *)(this + 0xb60) != 0)) {
      RichTextLabel::clear();
      plVar17 = *(long **)(this + 0xb58);
    }
    if (plVar17 != (long *)0x0) {
      do {
        pvVar3 = (void *)*plVar17;
        if (pvVar3 == (void *)0x0) goto LAB_0010a917;
        if (plVar17 == *(long **)((long)pvVar3 + 0x30)) {
          lVar12 = *(long *)((long)pvVar3 + 0x20);
          lVar20 = *(long *)((long)pvVar3 + 0x28);
          *plVar17 = lVar12;
          if (pvVar3 == (void *)plVar17[1]) {
            plVar17[1] = lVar20;
          }
          if (lVar20 != 0) {
            *(long *)(lVar20 + 0x20) = lVar12;
            lVar12 = *(long *)((long)pvVar3 + 0x20);
          }
          if (lVar12 != 0) {
            *(long *)(lVar12 + 0x28) = lVar20;
          }
          CowData<Variant>::_unref((CowData<Variant> *)((long)pvVar3 + 0x18));
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 8) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar3,false);
          *(int *)(plVar17 + 2) = (int)plVar17[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar17 = *(long **)(this + 0xb58);
      } while ((int)plVar17[2] != 0);
      Memory::free_static(plVar17,false);
      *(undefined8 *)(this + 0xb58) = 0;
    }
LAB_0010a917:
    puVar14 = (undefined4 *)ShaderLanguage::get_warnings_ptr();
    if (puVar14 == (undefined4 *)0x0) {
      plVar17 = *(long **)(this + 0xb58);
      if (plVar17 != (long *)0x0) goto LAB_0010aaa0;
LAB_0010aab5:
      CodeTextEditor::set_warning_count(iVar8);
    }
    else {
      if (*(long *)(this + 0xb58) == 0) {
        pauVar15 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])(this + 0xb58) = pauVar15;
        *(undefined4 *)pauVar15[1] = 0;
        *pauVar15 = (undefined1  [16])0x0;
      }
LAB_0010a981:
      do {
        pSVar16 = (ShaderWarning *)operator_new(0x38,DefaultAllocator::alloc);
        local_450 = (CowData<char32_t> *)0x0;
        StringName::StringName((StringName *)&local_460,"",false);
        ShaderWarning::ShaderWarning
                  (pSVar16,10,0xffffffff,(StringName *)&local_460,(StringName *)&local_458);
        if ((StringName::configured != '\0') && (local_460 != 0)) {
          StringName::unref();
        }
        CowData<Variant>::_unref((CowData<Variant> *)&local_450);
        uVar7 = *puVar14;
        *(undefined8 *)(pSVar16 + 0x30) = 0;
        *(undefined1 (*) [16])(pSVar16 + 0x20) = (undefined1  [16])0x0;
        *(undefined4 *)pSVar16 = uVar7;
        *(undefined4 *)(pSVar16 + 4) = puVar14[1];
        StringName::operator=((StringName *)(pSVar16 + 8),(StringName *)(puVar14 + 2));
        if (*(long *)(pSVar16 + 0x18) != *(long *)(puVar14 + 6)) {
          CowData<Variant>::_unref((CowData<Variant> *)(pSVar16 + 0x18));
          if (*(long *)(puVar14 + 6) != 0) {
            plVar17 = (long *)(*(long *)(puVar14 + 6) + -0x10);
            do {
              lVar12 = *plVar17;
              if (lVar12 == 0) goto LAB_0010aa5a;
              LOCK();
              lVar20 = *plVar17;
              bVar24 = lVar12 == lVar20;
              if (bVar24) {
                *plVar17 = lVar12 + 1;
                lVar20 = lVar12;
              }
              UNLOCK();
            } while (!bVar24);
            if (lVar20 != -1) {
              *(undefined8 *)(pSVar16 + 0x18) = *(undefined8 *)(puVar14 + 6);
            }
          }
        }
LAB_0010aa5a:
        plVar17 = *(long **)(this + 0xb58);
        lVar12 = plVar17[1];
        *(undefined8 *)(pSVar16 + 0x20) = 0;
        *(long **)(pSVar16 + 0x30) = plVar17;
        *(long *)(pSVar16 + 0x28) = lVar12;
        if (lVar12 != 0) {
          *(ShaderWarning **)(lVar12 + 0x20) = pSVar16;
        }
        plVar17[1] = (long)pSVar16;
        if (*plVar17 == 0) {
          puVar14 = *(undefined4 **)(puVar14 + 8);
          *(int *)(plVar17 + 2) = (int)plVar17[2] + 1;
          *plVar17 = (long)pSVar16;
          if (puVar14 == (undefined4 *)0x0) break;
          goto LAB_0010a981;
        }
        puVar14 = *(undefined4 **)(puVar14 + 8);
        *(int *)(plVar17 + 2) = (int)plVar17[2] + 1;
      } while (puVar14 != (undefined4 *)0x0);
LAB_0010aaa0:
      if (((int)plVar17[2] < 1) || (*(int *)(this + 0xb60) != 0)) goto LAB_0010aab5;
      List<ShaderWarning,DefaultAllocator>::sort_custom<ShaderTextEditor::WarningsComparator>
                ((List<ShaderWarning,DefaultAllocator> *)(this + 0xb58));
      _update_warning_panel();
    }
    ShaderLanguage::ShaderCompileInfo::~ShaderCompileInfo(local_578);
    ShaderLanguage::~ShaderLanguage((ShaderLanguage *)local_598);
  }
  else {
    if ((local_4e0 == (long *)0x0) || (iVar9 = (int)local_4e0[2], iVar9 == 0)) {
      _err_print_error("_validate_script","editor/plugins/text_shader_editor.cpp",0x1e9,
                       "Condition \"err_positions.is_empty()\" is true.",0,0);
      goto LAB_0010a029;
    }
    local_4b0 = 0;
    if (local_4e8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_4b0,(CowData *)&local_4e8);
      if (local_4e0 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      iVar9 = (int)local_4e0[2];
    }
    iVar1 = *(int *)(*local_4e0 + 8);
    if (iVar9 == 1) {
      local_458 = 0;
      String::parse_latin1((String *)&local_458,"): ");
      itos((long)local_468);
      operator+((char *)&local_460,(String *)"error(");
      String::operator+(local_428,(String *)&local_460);
      String::operator+((String *)local_598,local_428);
      if (local_4b0 != local_398[0]) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_4b0);
        local_4b0 = local_398[0];
        local_398[0] = 0;
      }
      CowData<char32_t>::_unref(local_598);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_428);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_460);
      CowData<char32_t>::_unref(local_468);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_458);
    }
    else {
      local_458 = 0;
      String::parse_latin1((String *)&local_458,": ");
      if (local_4e0 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      itos((long)local_468);
      local_478 = 0;
      String::parse_latin1((String *)&local_478,":");
      String::get_file();
      local_498 = 0;
      String::parse_latin1((String *)&local_498,") in include ");
      itos((long)local_4a8);
      operator+((char *)local_4a0,(String *)"error(");
      String::operator+(local_490,local_4a0);
      String::operator+(local_480,local_490);
      String::operator+(local_470,local_480);
      String::operator+((String *)&local_460,local_470);
      String::operator+(local_428,(String *)&local_460);
      String::operator+((String *)local_598,local_428);
      if (local_4b0 != local_398[0]) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_4b0);
        local_4b0 = local_398[0];
        local_398[0] = 0;
      }
      CowData<char32_t>::_unref(local_598);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_428);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_460);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_470);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_480);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_490);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_4a0);
      CowData<char32_t>::_unref(local_4a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_498);
      CowData<char32_t>::_unref(local_488);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_478);
      CowData<char32_t>::_unref(local_468);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_458);
      CodeTextEditor::set_error_count(iVar8);
    }
    CodeTextEditor::set_error((String *)this);
    uVar21 = iVar1 - 1;
    CodeTextEditor::set_error_pos(iVar8,uVar21);
    for (uVar18 = 0; iVar9 = TextEdit::get_line_count(), (int)uVar18 < iVar9; uVar18 = uVar18 + 1) {
      local_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      TextEdit::set_line_background_color((int)*(undefined8 *)(this + 0xa10),(Color *)(ulong)uVar18)
      ;
    }
    TextEdit::set_line_background_color((int)*(undefined8 *)(this + 0xa10),(Color *)(ulong)uVar21);
    CodeTextEditor::set_warning_count(iVar8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_4b0);
  }
  iVar8 = *(int *)(this + 0xb60);
  if ((_validate_script()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar9 = __cxa_guard_acquire(&_validate_script()::{lambda()#1}::operator()()::sname),
     iVar9 != 0)) {
    _scs_create((char *)&_validate_script()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_validate_script()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_validate_script()::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant((Variant *)&local_78,iVar8 == 0);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)&local_78;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_validate_script()::{lambda()#1}::operator()()::sname,local_88,1);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
LAB_0010a029:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_590);
  List<ShaderPreprocessor::Region,DefaultAllocator>::~List
            ((List<ShaderPreprocessor::Region,DefaultAllocator> *)&local_4d8);
  List<ShaderPreprocessor::FilePosition,DefaultAllocator>::~List
            ((List<ShaderPreprocessor::FilePosition,DefaultAllocator> *)&local_4e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_4e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_4f0);
  ShaderPreprocessor::~ShaderPreprocessor(local_448);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_4f8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderTextEditor::_code_complete_script(String const&, List<ScriptLanguage::CodeCompletionOption,
   DefaultAllocator>*) */

void __thiscall
ShaderTextEditor::_code_complete_script(ShaderTextEditor *this,String *param_1,List *param_2)

{
  CodeCompletionOption *pCVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  ShaderCompileInfo *pSVar8;
  long lVar10;
  HashSet *pHVar11;
  uint uVar12;
  long in_FS_OFFSET;
  undefined8 *local_428;
  undefined8 *local_420;
  undefined8 local_418;
  CowData<char32_t> local_410 [8];
  undefined8 local_408;
  long local_400;
  ShaderPreprocessor local_3f8 [32];
  ShaderCompileInfo local_3d8 [8];
  undefined1 local_3d0 [16];
  undefined1 local_3c0 [16];
  undefined8 local_3b0;
  undefined1 local_3a0 [16];
  undefined1 local_390 [16];
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> local_380 [16];
  undefined1 local_370 [16];
  ulong local_360;
  code *local_358;
  undefined1 local_350;
  undefined4 local_34c;
  long local_348 [97];
  long local_40;
  ulong uVar9;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_428 = (undefined8 *)0x0;
  local_420 = (undefined8 *)0x0;
  ShaderPreprocessor::ShaderPreprocessor(local_3f8);
  local_418 = 0;
  Resource::get_path();
  String::get_base_dir();
  if (complete_from_path != local_348[0]) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&complete_from_path);
    complete_from_path = local_348[0];
    local_348[0] = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_348);
  cVar5 = String::ends_with((char *)&complete_from_path);
  if (cVar5 == '\0') {
    String::operator+=((String *)&complete_from_path,"/");
  }
  ShaderPreprocessor::preprocess
            ((String *)local_3f8,param_1,(String *)local_410,(String *)&local_418,(List *)0x0,
             (List *)0x0,(HashSet *)0x0,(List *)0x0,(List *)&local_428,
             (_func_void_List_ptr *)&local_420);
  local_348[0] = 0;
  if (complete_from_path != 0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&complete_from_path);
    complete_from_path = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_348);
  if ((local_428 == (undefined8 *)0x0) || (*(int *)(local_428 + 2) == 0)) {
    if (local_420 != (undefined8 *)0x0) {
      for (pCVar1 = (CodeCompletionOption *)*local_420; pCVar1 != (CodeCompletionOption *)0x0;
          pCVar1 = *(CodeCompletionOption **)(pCVar1 + 0x80)) {
        List<ScriptLanguage::CodeCompletionOption,DefaultAllocator>::push_back
                  ((List<ScriptLanguage::CodeCompletionOption,DefaultAllocator> *)param_2,pCVar1);
      }
    }
    ShaderLanguage::ShaderLanguage((ShaderLanguage *)local_348);
    uVar9 = _LC33;
    local_408 = 0;
    local_3d0 = (undefined1  [16])0x0;
    local_3b0 = _LC33;
    local_3c0 = (undefined1  [16])0x0;
    local_3a0 = (undefined1  [16])0x0;
    local_390 = (undefined1  [16])0x0;
    StringName::StringName((StringName *)&local_400,"fragment",false);
    if (local_3a0._8_8_ == local_400) {
      if ((StringName::configured != '\0') && (local_400 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_3a0._8_8_ = local_400;
    }
    StringName::StringName((StringName *)&local_400,"vertex",false);
    if (local_390._0_8_ == local_400) {
      if ((StringName::configured != '\0') && (local_400 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_390._0_8_ = local_400;
    }
    StringName::StringName((StringName *)&local_400,"light",false);
    if (local_390._8_8_ == local_400) {
      if ((StringName::configured != '\0') && (local_400 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_390._8_8_ = local_400;
    }
    local_360 = uVar9;
    local_350 = 0;
    local_34c = 0;
    local_358 = _get_global_shader_uniform_type;
    local_380[0] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_380[1] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_380[2] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_380[3] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_380[4] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_380[5] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_380[6] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_380[7] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_380[8] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_380[9] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_380[10] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_380[0xb] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_380[0xc] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_380[0xd] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_380[0xe] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_380[0xf] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0x0;
    local_370 = (undefined1  [16])0x0;
    if (*(long *)(this + 0xb48) == 0) {
      local_350 = 1;
      ShaderLanguage::complete
                ((String *)local_348,(ShaderCompileInfo *)&local_418,(List *)local_3d8,
                 (String *)param_2);
      CodeEdit::set_code_hint(*(String **)(this + 0xa10));
      ShaderLanguage::ShaderCompileInfo::~ShaderCompileInfo(local_3d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_408);
      ShaderLanguage::~ShaderLanguage((ShaderLanguage *)local_348);
      CowData<char32_t>::_unref(local_410);
    }
    else {
      _check_shader_mode(this);
      uVar4 = ShaderTypes::singleton;
      uVar6 = (**(code **)(**(long **)(this + 0xb48) + 0x1d0))();
      pSVar8 = (ShaderCompileInfo *)ShaderTypes::get_functions(uVar4,uVar6);
      if (pSVar8 != local_3d8) {
        uVar7 = *(uint *)(hash_table_size_primes + (local_3b0 & 0xffffffff) * 4);
        uVar12 = (uint)local_3b0;
        if ((local_3b0._4_4_ != 0) && (local_3d0._0_8_ != 0)) {
          if (uVar7 != 0) {
            lVar10 = 0;
            do {
              if (*(int *)(local_3d0._8_8_ + lVar10) != 0) {
                *(int *)(local_3d0._8_8_ + lVar10) = 0;
                pvVar3 = *(void **)(local_3d0._0_8_ + lVar10 * 2);
                KeyValue<StringName,ShaderLanguage::FunctionInfo>::~KeyValue
                          ((KeyValue<StringName,ShaderLanguage::FunctionInfo> *)
                           ((long)pvVar3 + 0x10));
                Memory::free_static(pvVar3,false);
                *(undefined8 *)(local_3d0._0_8_ + lVar10 * 2) = 0;
              }
              lVar10 = lVar10 + 4;
            } while (lVar10 != (ulong)uVar7 * 4);
            uVar7 = *(uint *)(hash_table_size_primes + (local_3b0 & 0xffffffff) * 4);
            uVar12 = (uint)local_3b0;
          }
          local_3b0 = local_3b0 & 0xffffffff;
          local_3c0 = (undefined1  [16])0x0;
        }
        if (uVar7 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(pSVar8 + 0x28) * 4)) {
          if (uVar12 != 0x1c) {
            uVar9 = (ulong)uVar12;
            do {
              uVar7 = (int)uVar9 + 1;
              uVar9 = (ulong)uVar7;
              if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(pSVar8 + 0x28) * 4) <=
                  *(uint *)(hash_table_size_primes + uVar9 * 4)) {
                if (uVar7 == uVar12) goto LAB_0010b7f1;
                if (local_3d0._0_8_ != 0) {
                  HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
                  ::_resize_and_rehash
                            ((HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
                              *)local_3d8,uVar7);
                  lVar10 = *(long *)(pSVar8 + 8);
                  goto joined_r0x0010bae4;
                }
                local_3b0 = CONCAT44(local_3b0._4_4_,uVar7);
                goto LAB_0010b7f1;
              }
            } while (uVar7 != 0x1c);
          }
          _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                           "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0
                           ,0,0);
        }
LAB_0010b7f1:
        lVar10 = *(long *)(pSVar8 + 8);
joined_r0x0010bae4:
        if (lVar10 != 0) {
          for (puVar2 = *(undefined8 **)(pSVar8 + 0x18); puVar2 != (undefined8 *)0x0;
              puVar2 = (undefined8 *)*puVar2) {
            HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            ::insert((StringName *)&local_400,(FunctionInfo *)local_3d8,
                     (bool)((char)puVar2 + '\x10'));
          }
        }
      }
      uVar4 = ShaderTypes::singleton;
      uVar6 = (**(code **)(**(long **)(this + 0xb48) + 0x1d0))();
      lVar10 = ShaderTypes::get_modes(uVar4,uVar6);
      if (local_3a0._0_8_ != *(long *)(lVar10 + 8)) {
        CowData<ShaderLanguage::ModeInfo>::_ref
                  ((CowData<ShaderLanguage::ModeInfo> *)local_3a0,(CowData *)(lVar10 + 8));
      }
      pHVar11 = (HashSet *)ShaderTypes::get_types();
      HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::operator=
                (local_380,pHVar11);
      ShaderLanguage::complete
                ((String *)local_348,(ShaderCompileInfo *)&local_418,(List *)local_3d8,
                 (String *)param_2);
      CodeEdit::set_code_hint(*(String **)(this + 0xa10));
      ShaderLanguage::ShaderCompileInfo::~ShaderCompileInfo(local_3d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_408);
      ShaderLanguage::~ShaderLanguage((ShaderLanguage *)local_348);
      CowData<char32_t>::_unref(local_410);
    }
  }
  else {
    for (pCVar1 = (CodeCompletionOption *)*local_428; pCVar1 != (CodeCompletionOption *)0x0;
        pCVar1 = *(CodeCompletionOption **)(pCVar1 + 0x80)) {
      List<ScriptLanguage::CodeCompletionOption,DefaultAllocator>::push_back
                ((List<ScriptLanguage::CodeCompletionOption,DefaultAllocator> *)param_2,pCVar1);
    }
    CowData<char32_t>::_unref(local_410);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_418);
  ShaderPreprocessor::~ShaderPreprocessor(local_3f8);
  List<ScriptLanguage::CodeCompletionOption,DefaultAllocator>::~List
            ((List<ScriptLanguage::CodeCompletionOption,DefaultAllocator> *)&local_420);
  List<ScriptLanguage::CodeCompletionOption,DefaultAllocator>::~List
            ((List<ScriptLanguage::CodeCompletionOption,DefaultAllocator> *)&local_428);
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



/* Object::_bind_compatibility_methods() */

void Object::_bind_compatibility_methods(void)

{
  return;
}



/* Object::_set(StringName const&, Variant const&) */

undefined8 Object::_set(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get(StringName const&, Variant&) const */

undefined8 Object::_get(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void Object::_get_property_list(List *param_1)

{
  return;
}



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* Object::_property_can_revert(StringName const&) const */

undefined8 Object::_property_can_revert(StringName *param_1)

{
  return 0;
}



/* Object::_property_get_revert(StringName const&, Variant&) const */

undefined8 Object::_property_get_revert(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_notification(int) */

void Object::_notification(int param_1)

{
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* SyntaxHighlighter::is_class_ptr(void*) const */

uint __thiscall SyntaxHighlighter::is_class_ptr(SyntaxHighlighter *this,void *param_1)

{
  return (uint)CONCAT71(0x123e,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x123d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x123e,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x123e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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



/* CodeTextEditor::apply_code() */

void CodeTextEditor::apply_code(void)

{
  return;
}



/* ShaderEditor::is_class_ptr(void*) const */

uint __thiscall ShaderEditor::is_class_ptr(ShaderEditor *this,void *param_1)

{
  return (uint)CONCAT71(0x123e,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x123d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x123e,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x123e,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x123e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ShaderEditor::edit_shader_include(Ref<ShaderInclude> const&) */

void ShaderEditor::edit_shader_include(Ref *param_1)

{
  return;
}



/* GDShaderSyntaxHighlighter::is_class_ptr(void*) const */

uint GDShaderSyntaxHighlighter::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x123d,in_RSI == &CodeHighlighter::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x123c,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x123d,in_RSI == &SyntaxHighlighter::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x123e,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x123e,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* GDShaderSyntaxHighlighter::_getv(StringName const&, Variant&) const */

undefined8 GDShaderSyntaxHighlighter::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GDShaderSyntaxHighlighter::_setv(StringName const&, Variant const&) */

undefined8 GDShaderSyntaxHighlighter::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GDShaderSyntaxHighlighter::_validate_propertyv(PropertyInfo&) const */

void GDShaderSyntaxHighlighter::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GDShaderSyntaxHighlighter::_property_can_revertv(StringName const&) const */

undefined8 GDShaderSyntaxHighlighter::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GDShaderSyntaxHighlighter::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GDShaderSyntaxHighlighter::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GDShaderSyntaxHighlighter::_notificationv(int, bool) */

void GDShaderSyntaxHighlighter::_notificationv(int param_1,bool param_2)

{
  return;
}



/* TextShaderEditor::is_class_ptr(void*) const */

uint TextShaderEditor::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x123d,in_RSI == &ShaderEditor::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x123c,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x123e,in_RSI == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x123e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x123e,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* TextShaderEditor::get_minimum_size() const */

undefined8 TextShaderEditor::get_minimum_size(void)

{
  return 0x4348000000000000;
}



/* CallableCustomMethodPointer<TextShaderEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextShaderEditor,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<TextShaderEditor, void, Variant
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,Variant_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextShaderEditor,void,Variant_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<TextShaderEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextShaderEditor,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<TextShaderEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextShaderEditor,void,Ref<InputEvent>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<TextShaderEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextShaderEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextShaderEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<TextShaderEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextShaderEditor,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<Window, void, Vector2i const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Window,void,Vector2i_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Window,void,Vector2i_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Control,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<TextEdit, void, double>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextEdit,void,double>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextEdit,void,double> *this)

{
  return;
}



/* CallableCustomMethodPointer<TextEdit, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextEdit,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextEdit,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<ShaderTextEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ShaderTextEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ShaderTextEditor,void> *this)

{
  return;
}



/* MethodBindT<Variant const&>::_gen_argument_type(int) const */

undefined8 MethodBindT<Variant_const&>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindT<Variant const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Variant_const&>::get_argument_meta(int param_1)

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



/* CallableCustomMethodPointer<TextShaderEditor, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<TextShaderEditor,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<TextShaderEditor, void, Variant const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,Variant_const&>::get_argument_count
          (CallableCustomMethodPointer<TextShaderEditor,void,Variant_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<TextShaderEditor, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,int>::get_argument_count
          (CallableCustomMethodPointer<TextShaderEditor,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<TextShaderEditor, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,Ref<InputEvent>const&>::get_argument_count
          (CallableCustomMethodPointer<TextShaderEditor,void,Ref<InputEvent>const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<TextShaderEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TextShaderEditor,void>::get_argument_count
          (CallableCustomMethodPointer<TextShaderEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<TextShaderEditor, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,bool>::get_argument_count
          (CallableCustomMethodPointer<TextShaderEditor,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<Window, void, Vector2i const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Window,void,Vector2i_const&>::get_argument_count
          (CallableCustomMethodPointer<Window,void,Vector2i_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<Control, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Control,void>::get_argument_count
          (CallableCustomMethodPointer<Control,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<TextEdit, void, double>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TextEdit,void,double>::get_argument_count
          (CallableCustomMethodPointer<TextEdit,void,double> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<TextEdit, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TextEdit,void,int>::get_argument_count
          (CallableCustomMethodPointer<TextEdit,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ShaderTextEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ShaderTextEditor,void>::get_argument_count
          (CallableCustomMethodPointer<ShaderTextEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
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



/* CallableCustomMethodPointer<ShaderTextEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ShaderTextEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ShaderTextEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TextEdit, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextEdit,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextEdit,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TextEdit, void, double>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextEdit,void,double>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextEdit,void,double> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Control,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Window, void, Vector2i const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Window,void,Vector2i_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Window,void,Vector2i_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TextShaderEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextShaderEditor,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TextShaderEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextShaderEditor,void,Ref<InputEvent>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TextShaderEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextShaderEditor,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TextShaderEditor, void, Variant
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,Variant_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextShaderEditor,void,Variant_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TextShaderEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextShaderEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextShaderEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TextShaderEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextShaderEditor,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123be0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123be0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Variant const&>::~MethodBindT() */

void __thiscall MethodBindT<Variant_const&>::~MethodBindT(MethodBindT<Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123c40;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Variant const&>::~MethodBindT() */

void __thiscall MethodBindT<Variant_const&>::~MethodBindT(MethodBindT<Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123c40;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012b010 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012b010 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ShaderEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ShaderEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012b010 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ShaderTextEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ShaderTextEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012b010 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* TextShaderEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 TextShaderEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012b010 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VSplitContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VSplitContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012b010 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012b018 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012b018 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ShaderEditor::_property_can_revertv(StringName const&) const */

undefined8 ShaderEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012b018 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ShaderTextEditor::_property_can_revertv(StringName const&) const */

undefined8 ShaderTextEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012b018 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* TextShaderEditor::_property_can_revertv(StringName const&) const */

undefined8 TextShaderEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012b018 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VSplitContainer::_property_can_revertv(StringName const&) const */

undefined8 VSplitContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012b018 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HashMap<ShaderWarning::Code, bool, HashMapHasherDefault,
   HashMapComparatorDefault<ShaderWarning::Code>,
   DefaultTypedAllocator<HashMapElement<ShaderWarning::Code, bool> > >::~HashMap() */

void __thiscall
HashMap<ShaderWarning::Code,bool,HashMapHasherDefault,HashMapComparatorDefault<ShaderWarning::Code>,DefaultTypedAllocator<HashMapElement<ShaderWarning::Code,bool>>>
::~HashMap(HashMap<ShaderWarning::Code,bool,HashMapHasherDefault,HashMapComparatorDefault<ShaderWarning::Code>,DefaultTypedAllocator<HashMapElement<ShaderWarning::Code,bool>>>
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
          Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
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



/* CowData<Vector2i>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2i>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Pair<int, int> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Pair<int,int>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ShaderTextEditor::_load_theme_settings() [clone .cold] */

void ShaderTextEditor::_load_theme_settings(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TextShaderEditor::TextShaderEditor() [clone .cold] */

void __thiscall TextShaderEditor::TextShaderEditor(TextShaderEditor *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ShaderTextEditor::_validate_script() [clone .cold] */

void ShaderTextEditor::_validate_script(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<TextShaderEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TextShaderEditor,void>::get_object
          (CallableCustomMethodPointer<TextShaderEditor,void> *this)

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
      goto LAB_0010cc0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010cc0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010cc0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TextEdit, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TextEdit,void,int>::get_object
          (CallableCustomMethodPointer<TextEdit,void,int> *this)

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
      goto LAB_0010cd0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010cd0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010cd0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TextShaderEditor, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,int>::get_object
          (CallableCustomMethodPointer<TextShaderEditor,void,int> *this)

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
      goto LAB_0010ce0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010ce0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010ce0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TextShaderEditor, void, Variant const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,Variant_const&>::get_object
          (CallableCustomMethodPointer<TextShaderEditor,void,Variant_const&> *this)

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
      goto LAB_0010cf0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010cf0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010cf0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Window, void, Vector2i const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Window,void,Vector2i_const&>::get_object
          (CallableCustomMethodPointer<Window,void,Vector2i_const&> *this)

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
      goto LAB_0010d00d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d00d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d00d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TextEdit, void, double>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TextEdit,void,double>::get_object
          (CallableCustomMethodPointer<TextEdit,void,double> *this)

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
      goto LAB_0010d10d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d10d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d10d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TextShaderEditor, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,bool>::get_object
          (CallableCustomMethodPointer<TextShaderEditor,void,bool> *this)

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
      goto LAB_0010d20d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d20d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d20d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TextShaderEditor, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,String_const&>::get_object
          (CallableCustomMethodPointer<TextShaderEditor,void,String_const&> *this)

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
      goto LAB_0010d30d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d30d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d30d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Control, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Control,void>::get_object
          (CallableCustomMethodPointer<Control,void> *this)

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
      goto LAB_0010d40d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d40d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d40d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TextShaderEditor, void, Ref<InputEvent> const&>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<TextShaderEditor,void,Ref<InputEvent>const&> *this)

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
      goto LAB_0010d50d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d50d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d50d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ShaderTextEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ShaderTextEditor,void>::get_object
          (CallableCustomMethodPointer<ShaderTextEditor,void> *this)

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
      goto LAB_0010d60d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d60d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d60d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* VSplitContainer::is_class_ptr(void*) const */

uint VSplitContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x123e,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x123c,in_RSI == &SplitContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x123e,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x123e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x123e,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* ShaderEditor::_validate_propertyv(PropertyInfo&) const */

void ShaderEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012b020 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* TextShaderEditor::_validate_propertyv(PropertyInfo&) const */

void TextShaderEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012b020 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* VSplitContainer::_validate_propertyv(PropertyInfo&) const */

void VSplitContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012b028 == Control::_validate_property) {
    return;
  }
  SplitContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012b030 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012b030 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* ShaderTextEditor::_validate_propertyv(PropertyInfo&) const */

void ShaderTextEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012b030 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
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



/* VBoxContainer::is_class_ptr(void*) const */

uint VBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x123e,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x123e,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x123e,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x123e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x123e,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* HBoxContainer::is_class_ptr(void*) const */

uint HBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x123e,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x123e,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x123e,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x123e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x123e,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* ShaderTextEditor::is_class_ptr(void*) const */

uint ShaderTextEditor::is_class_ptr(void *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar2 = (uint)CONCAT71(0x123d,in_RSI == &CodeTextEditor::get_class_ptr_static()::ptr) |
          (uint)CONCAT71(0x123c,in_RSI == &get_class_ptr_static()::ptr);
  bVar1 = (byte)uVar2 | in_RSI == &VBoxContainer::get_class_ptr_static()::ptr;
  if (bVar1 != 0) {
    return CONCAT31((int3)(uVar2 >> 8),bVar1);
  }
  return (uint)CONCAT71(0x123e,in_RSI == &Container::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x123e,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x123e,in_RSI == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x123e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x123e,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012b038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ShaderTextEditor::_setv(StringName const&, Variant const&) */

undefined8 ShaderTextEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012b038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* VSplitContainer::_setv(StringName const&, Variant const&) */

undefined8 VSplitContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012b038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* TextShaderEditor::_setv(StringName const&, Variant const&) */

undefined8 TextShaderEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012b038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ShaderEditor::_setv(StringName const&, Variant const&) */

undefined8 ShaderEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012b038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* VBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 VBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012b038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* SyntaxHighlighter::~SyntaxHighlighter() */

void __thiscall SyntaxHighlighter::~SyntaxHighlighter(SyntaxHighlighter *this)

{
  RBMap<int,Dictionary,Comparator<int>,DefaultAllocator> *this_00;
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  void *pvVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  bool bVar8;
  
  bVar8 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00122388;
  if (bVar8) {
    if (*(long *)(this + 0x298) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e6ac;
    }
    if (*(long *)(this + 0x280) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e6ac;
    }
    if (*(long *)(this + 0x268) != 0) {
      StringName::unref();
    }
  }
LAB_0010e6ac:
  pvVar4 = *(void **)(this + 0x240);
  if (pvVar4 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar4 + 0x10);
    pEVar2 = *(Element **)(this + 0x248);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      this_00 = (RBMap<int,Dictionary,Comparator<int>,DefaultAllocator> *)(this + 0x240);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar7) {
          pEVar6 = *(Element **)(pEVar7 + 0x10);
          if (pEVar2 != pEVar6) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree(this_00,pEVar6);
            pEVar6 = *(Element **)(this + 0x248);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar6) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
                      (this_00,*(Element **)(pEVar7 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar7 + 0x38));
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 0x248);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar7) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar7) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
                      (this_00,*(Element **)(pEVar2 + 0x10));
            pEVar7 = *(Element **)(this + 0x248);
          }
          pEVar6 = *(Element **)(pEVar2 + 8);
          if (pEVar7 != pEVar6) {
            pEVar5 = *(Element **)(pEVar6 + 0x10);
            if (pEVar7 != pEVar5) {
              RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree(this_00,pEVar5);
              pEVar5 = *(Element **)(this + 0x248);
            }
            if (pEVar5 != *(Element **)(pEVar6 + 8)) {
              RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
                        (this_00,*(Element **)(pEVar6 + 8));
            }
            Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
            Memory::free_static(pEVar6,false);
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
          Memory::free_static(pEVar2,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar3 + 0x38));
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 0x248);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar2 + 0x10);
        if (pEVar3 != pEVar7) {
          pEVar6 = *(Element **)(pEVar7 + 0x10);
          if (pEVar3 != pEVar6) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree(this_00,pEVar6);
            pEVar6 = *(Element **)(this + 0x248);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar6) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
                      (this_00,*(Element **)(pEVar7 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar7 + 0x38));
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 0x248);
        }
        pEVar3 = *(Element **)(pEVar2 + 8);
        if (pEVar7 != pEVar3) {
          pEVar6 = *(Element **)(pEVar3 + 0x10);
          if (pEVar7 != pEVar6) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree(this_00,pEVar6);
            pEVar6 = *(Element **)(this + 0x248);
          }
          if (pEVar6 != *(Element **)(pEVar3 + 8)) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
                      (this_00,*(Element **)(pEVar3 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar3 + 0x38));
          Memory::free_static(pEVar3,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
        Memory::free_static(pEVar2,false);
      }
      Dictionary::~Dictionary((Dictionary *)(pEVar1 + 0x38));
      Memory::free_static(pEVar1,false);
      pvVar4 = *(void **)(this + 0x240);
      pEVar2 = *(Element **)(this + 0x248);
    }
    *(Element **)((long)pvVar4 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x250) = 0;
    Dictionary::~Dictionary((Dictionary *)((long)pvVar4 + 0x38));
    Memory::free_static(pvVar4,false);
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* SyntaxHighlighter::~SyntaxHighlighter() */

void __thiscall SyntaxHighlighter::~SyntaxHighlighter(SyntaxHighlighter *this)

{
  ~SyntaxHighlighter(this);
  operator_delete(this,0x2b0);
  return;
}



/* TextShaderEditor::_script_validated(bool) */

void __thiscall TextShaderEditor::_script_validated(TextShaderEditor *this,bool param_1)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xa20] = (TextShaderEditor)param_1;
  if (_script_validated(bool)::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_script_validated(bool)::{lambda()#1}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_script_validated(bool)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_script_validated(bool)::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_script_validated(bool)::{lambda()#1}::operator()()::sname);
    }
  }
  (**(code **)(*(long *)this + 0xd0))
            (this,&_script_validated(bool)::{lambda()#1}::operator()()::sname,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderEditor::_notificationv(int, bool) */

void __thiscall ShaderEditor::_notificationv(ShaderEditor *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012b040 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_0012b040 == CanvasItem::_notification) {
    return;
  }
  Control::_notification(iVar1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010eb58) */
/* ShaderEditor::_getv(StringName const&, Variant&) const */

undefined8 ShaderEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012b048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010ebc8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012b048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010ec38) */
/* TextShaderEditor::_getv(StringName const&, Variant&) const */

undefined8 TextShaderEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012b048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010eca8) */
/* ShaderTextEditor::_getv(StringName const&, Variant&) const */

undefined8 ShaderTextEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012b048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010ed18) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012b048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010ed88) */
/* VSplitContainer::_getv(StringName const&, Variant&) const */

undefined8 VSplitContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012b048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* TextShaderEditor::~TextShaderEditor() */

void __thiscall TextShaderEditor::~TextShaderEditor(TextShaderEditor *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00123218;
  if (*(long *)(this + 0xa30) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa30);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa28) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa28);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00122578;
  Control::~Control((Control *)this);
  return;
}



/* TextShaderEditor::~TextShaderEditor() */

void __thiscall TextShaderEditor::~TextShaderEditor(TextShaderEditor *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00123218;
  if (*(long *)(this + 0xa30) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa30);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa28) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa28);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00122578;
  Control::~Control((Control *)this);
  operator_delete(this,0xa40);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ef90;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010ef90:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010eff0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010eff0:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f050;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010f050:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f0c0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010f0c0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
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



/* VSplitContainer::_notificationv(int, bool) */

void __thiscall VSplitContainer::_notificationv(VSplitContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012b050 != Container::_notification) {
      SplitContainer::_notification(iVar1);
    }
    Container::_notification(iVar1);
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  Container::_notification(iVar1);
  if ((code *)PTR__notification_0012b050 == Container::_notification) {
    return;
  }
  SplitContainer::_notification(iVar1);
  return;
}



/* SortArray<List<ShaderWarning, DefaultAllocator>::Element*, List<ShaderWarning,
   DefaultAllocator>::AuxiliaryComparator<ShaderTextEditor::WarningsComparator>,
   true>::introsort(long, long, List<ShaderWarning, DefaultAllocator>::Element**, long) const [clone
   .isra.0] */

void SortArray<List<ShaderWarning,DefaultAllocator>::Element*,List<ShaderWarning,DefaultAllocator>::AuxiliaryComparator<ShaderTextEditor::WarningsComparator>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  Element *pEVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  Element **ppEVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  Element **ppEVar11;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  Element **local_50;
  
  lVar5 = param_2 - param_1;
  if (lVar5 < 0x11) {
    return;
  }
  local_78 = param_2;
  local_60 = param_2;
  local_58 = param_4;
  if (param_4 != 0) {
LAB_0010f313:
    local_58 = local_58 + -1;
    iVar3 = ShaderWarning::get_line();
    iVar4 = ShaderWarning::get_line();
    if (iVar3 < iVar4) {
      iVar3 = ShaderWarning::get_line();
      iVar4 = ShaderWarning::get_line();
      if (iVar4 <= iVar3) {
        ShaderWarning::get_line();
        ShaderWarning::get_line();
      }
    }
    else {
      iVar3 = ShaderWarning::get_line();
      iVar4 = ShaderWarning::get_line();
      if (iVar4 <= iVar3) {
        ShaderWarning::get_line();
        ShaderWarning::get_line();
      }
    }
    lVar5 = local_60;
    local_78 = param_1;
    do {
      iVar3 = ShaderWarning::get_line();
      iVar4 = ShaderWarning::get_line();
      if (iVar3 < iVar4) {
        if (local_60 + -1 == local_78) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          goto LAB_0010f3e5;
        }
      }
      else {
LAB_0010f3e5:
        lVar5 = lVar5 + -1;
        ppEVar6 = param_3 + lVar5;
        while( true ) {
          iVar3 = ShaderWarning::get_line();
          iVar4 = ShaderWarning::get_line();
          if (iVar4 <= iVar3) break;
          if (param_1 == lVar5) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          lVar5 = lVar5 + -1;
          ppEVar6 = ppEVar6 + -1;
        }
        if (lVar5 <= local_78) goto LAB_0010f494;
        pEVar1 = param_3[local_78];
        param_3[local_78] = *ppEVar6;
        *ppEVar6 = pEVar1;
      }
      local_78 = local_78 + 1;
    } while( true );
  }
LAB_0010f57c:
  lVar8 = lVar5 + -2 >> 1;
  local_58 = lVar8 * 2 + 2;
  local_50 = param_3 + param_1 + lVar8;
  do {
    pEVar1 = *local_50;
    lVar7 = local_58;
    local_70 = lVar8;
    if (local_58 < lVar5) {
      do {
        iVar3 = ShaderWarning::get_line();
        iVar4 = ShaderWarning::get_line();
        lVar9 = lVar7 + -1;
        lVar10 = lVar7;
        if (iVar4 <= iVar3) {
          lVar10 = lVar7 + 1;
          lVar9 = lVar7;
        }
        ppEVar6 = param_3 + param_1 + lVar9;
        lVar7 = lVar10 * 2;
        param_3[local_70 + param_1] = *ppEVar6;
        local_70 = lVar9;
      } while (lVar7 < lVar5);
      ppEVar11 = ppEVar6;
      if (lVar7 == lVar5) {
LAB_0010f87d:
        lVar9 = lVar7 + -1;
        ppEVar6 = param_3 + param_1 + lVar9;
        *ppEVar11 = *ppEVar6;
      }
      lVar7 = lVar9 + -1 >> 1;
      if (lVar9 <= lVar8) goto LAB_0010f8cc;
      do {
        lVar10 = param_1 + lVar7;
        iVar3 = ShaderWarning::get_line();
        iVar4 = ShaderWarning::get_line();
        if (iVar4 <= iVar3) {
          param_3[lVar9 + param_1] = pEVar1;
          goto joined_r0x0010f724;
        }
        param_3[lVar9 + param_1] = param_3[lVar10];
        bVar2 = lVar8 < lVar7;
        lVar9 = lVar7;
        lVar7 = (lVar7 + -1) / 2;
      } while (bVar2);
      param_3[lVar10] = pEVar1;
joined_r0x0010f724:
      if (lVar8 == 0) goto LAB_0010f726;
    }
    else {
      ppEVar11 = local_50;
      ppEVar6 = local_50;
      if (local_58 == lVar5) goto LAB_0010f87d;
LAB_0010f8cc:
      *ppEVar6 = pEVar1;
    }
    local_50 = local_50 + -1;
    lVar8 = lVar8 + -1;
    local_58 = local_58 + -2;
  } while( true );
LAB_0010f494:
  introsort(local_78,local_60,param_3,local_58);
  lVar5 = local_78 - param_1;
  if (lVar5 < 0x11) {
    return;
  }
  local_60 = local_78;
  if (local_58 == 0) goto LAB_0010f57c;
  goto LAB_0010f313;
LAB_0010f726:
  ppEVar6 = param_3 + param_1;
  local_68 = (local_78 + -1) - param_1;
LAB_0010f750:
  do {
    pEVar1 = ppEVar6[local_68];
    ppEVar6[local_68] = *ppEVar6;
    if (local_68 < 3) {
      if (local_68 != 2) {
        *ppEVar6 = pEVar1;
        return;
      }
      lVar5 = param_1 + 1;
      lVar8 = 0;
      *ppEVar6 = param_3[lVar5];
LAB_0010f840:
      while( true ) {
        ppEVar11 = param_3 + lVar5;
        iVar3 = ShaderWarning::get_line();
        iVar4 = ShaderWarning::get_line();
        if (iVar4 <= iVar3) break;
        *ppEVar11 = param_3[param_1 + lVar8];
        if (lVar8 == 0) {
          local_68 = local_68 + -1;
          param_3[param_1 + lVar8] = pEVar1;
          goto LAB_0010f750;
        }
        lVar5 = param_1 + lVar8;
        lVar8 = (lVar8 + -1) / 2;
      }
    }
    else {
      lVar5 = 2;
      lVar8 = 0;
      do {
        iVar3 = ShaderWarning::get_line();
        iVar4 = ShaderWarning::get_line();
        lVar7 = lVar5 + -1;
        lVar9 = lVar5;
        if (iVar4 <= iVar3) {
          lVar9 = lVar5 + 1;
          lVar7 = lVar5;
        }
        ppEVar11 = param_3 + param_1 + lVar7;
        lVar5 = lVar9 * 2;
        param_3[lVar8 + param_1] = *ppEVar11;
        lVar8 = lVar7;
      } while (lVar5 < local_68);
      if (lVar5 == local_68) {
        lVar5 = local_68 + -1 + param_1;
        lVar8 = local_68 + -2 >> 1;
        *ppEVar11 = param_3[lVar5];
        goto LAB_0010f840;
      }
      lVar5 = param_1 + lVar7;
      lVar8 = (lVar7 + -1) / 2;
      if (0 < lVar7) goto LAB_0010f840;
    }
    local_68 = local_68 + -1;
    *ppEVar11 = pEVar1;
  } while( true );
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012b058 != Container::_notification) {
      BoxContainer::_notification(iVar1);
    }
    Container::_notification(iVar1);
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  Container::_notification(iVar1);
  if ((code *)PTR__notification_0012b058 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012b058 != Container::_notification) {
      BoxContainer::_notification(iVar1);
    }
    Container::_notification(iVar1);
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  Container::_notification(iVar1);
  if ((code *)PTR__notification_0012b058 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
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



/* VSplitContainer::~VSplitContainer() */

void __thiscall VSplitContainer::~VSplitContainer(VSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(code **)this = SyntaxHighlighter::clear_highlighting_cache;
  if (*(long *)(this + 0xa60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fc7f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010fc7f:
  Control::~Control((Control *)this);
  return;
}



/* VSplitContainer::~VSplitContainer() */

void __thiscall VSplitContainer::~VSplitContainer(VSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(code **)this = SyntaxHighlighter::clear_highlighting_cache;
  if (*(long *)(this + 0xa60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fe2f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010fe2f:
  Control::~Control((Control *)this);
  operator_delete(this,0xa70);
  return;
}



/* VBoxContainer::_get_class_namev() const */

undefined8 * VBoxContainer::_get_class_namev(void)

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
LAB_0010ff73:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010ff73;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010ffde;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010ffde:
  return &_get_class_namev()::_class_name_static;
}



/* HBoxContainer::_get_class_namev() const */

undefined8 * HBoxContainer::_get_class_namev(void)

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
LAB_00110063:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110063;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_001100ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_001100ce:
  return &_get_class_namev()::_class_name_static;
}



/* ShaderTextEditor::_get_class_namev() const */

undefined8 * ShaderTextEditor::_get_class_namev(void)

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
LAB_00110153:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110153;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ShaderTextEditor");
      goto LAB_001101be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ShaderTextEditor");
LAB_001101be:
  return &_get_class_namev()::_class_name_static;
}



/* TextShaderEditor::_get_class_namev() const */

undefined8 * TextShaderEditor::_get_class_namev(void)

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
LAB_00110243:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110243;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"TextShaderEditor");
      goto LAB_001102ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"TextShaderEditor");
LAB_001102ae:
  return &_get_class_namev()::_class_name_static;
}



/* GDShaderSyntaxHighlighter::_get_class_namev() const */

undefined8 * GDShaderSyntaxHighlighter::_get_class_namev(void)

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
LAB_00110333:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110333;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GDShaderSyntaxHighlighter");
      goto LAB_0011039e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GDShaderSyntaxHighlighter");
LAB_0011039e:
  return &_get_class_namev()::_class_name_static;
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
LAB_00110423:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110423;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"SyntaxHighlighter");
      goto LAB_0011048e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"SyntaxHighlighter");
LAB_0011048e:
  return &_get_class_namev()::_class_name_static;
}



/* VSplitContainer::_get_class_namev() const */

undefined8 * VSplitContainer::_get_class_namev(void)

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
LAB_00110513:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110513;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VSplitContainer");
      goto LAB_0011057e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VSplitContainer");
LAB_0011057e:
  return &_get_class_namev()::_class_name_static;
}



/* ShaderEditor::_get_class_namev() const */

undefined8 * ShaderEditor::_get_class_namev(void)

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
LAB_00110603:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110603;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ShaderEditor");
      goto LAB_0011066e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ShaderEditor");
LAB_0011066e:
  return &_get_class_namev()::_class_name_static;
}



/* String::~String() */

void __thiscall String::~String(String *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
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



/* WARNING: Removing unreachable block (ram,0x001107cc) */
/* Control::_notificationv(int, bool) */

void __thiscall Control::_notificationv(Control *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012b040 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_0012b040 == CanvasItem::_notification) {
    return;
  }
  Control::_notification(iVar1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x001108f0) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012b058 != Container::_notification) {
      BoxContainer::_notification(iVar1);
    }
    Container::_notification(iVar1);
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  Container::_notification(iVar1);
  if ((code *)PTR__notification_0012b058 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* Callable create_custom_callable_function_pointer<ShaderTextEditor>(ShaderTextEditor*, char
   const*, void (ShaderTextEditor::*)()) */

ShaderTextEditor *
create_custom_callable_function_pointer<ShaderTextEditor>
          (ShaderTextEditor *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC22;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001235b0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* void List<ShaderWarning, DefaultAllocator>::sort_custom<ShaderTextEditor::WarningsComparator>()
    */

void __thiscall
List<ShaderWarning,DefaultAllocator>::sort_custom<ShaderTextEditor::WarningsComparator>
          (List<ShaderWarning,DefaultAllocator> *this)

{
  size_t __n;
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  Element **__src;
  Element **ppEVar5;
  Element **ppEVar6;
  long lVar7;
  Element *pEVar8;
  Element *pEVar9;
  Element *pEVar10;
  long lVar11;
  Element *pEVar12;
  
  if (*(long *)this == 0) {
    return;
  }
  iVar1 = *(int *)(*(long *)this + 0x10);
  if (iVar1 < 2) {
    return;
  }
  pEVar10 = (Element *)(long)iVar1;
  __src = (Element **)Memory::alloc_static((long)pEVar10 * 8,true);
  if (__src == (Element **)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    __src[-1] = pEVar10;
  }
  if (*(long **)this != (long *)0x0) {
    ppEVar5 = __src;
    for (pEVar9 = (Element *)**(long **)this; pEVar9 != (Element *)0x0;
        pEVar9 = *(Element **)(pEVar9 + 0x20)) {
      *ppEVar5 = pEVar9;
      ppEVar5 = ppEVar5 + 1;
    }
  }
  lVar7 = 0;
  pEVar9 = pEVar10;
  do {
    pEVar9 = (Element *)((long)pEVar9 >> 1);
    lVar7 = lVar7 + 1;
  } while (pEVar9 != (Element *)0x1);
  SortArray<List<ShaderWarning,DefaultAllocator>::Element*,List<ShaderWarning,DefaultAllocator>::AuxiliaryComparator<ShaderTextEditor::WarningsComparator>,true>
  ::introsort(0,(long)pEVar10,__src,lVar7 * 2);
  if ((long)pEVar10 < 0x11) {
    pEVar9 = (Element *)0x1;
    do {
      while( true ) {
        pEVar12 = __src[(long)pEVar9];
        iVar3 = ShaderWarning::get_line();
        iVar4 = ShaderWarning::get_line();
        if (iVar3 < iVar4) break;
        ppEVar5 = __src + (long)pEVar9;
        while( true ) {
          iVar3 = ShaderWarning::get_line();
          iVar4 = ShaderWarning::get_line();
          if (iVar4 <= iVar3) break;
          if (ppEVar5 == __src + 1) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          *ppEVar5 = ppEVar5[-1];
          ppEVar5 = ppEVar5 + -1;
        }
        *ppEVar5 = pEVar12;
        pEVar9 = pEVar9 + 1;
        pEVar12 = *__src;
        if (pEVar10 == pEVar9) goto LAB_00111841;
      }
      __n = (long)pEVar9 * 8;
      pEVar9 = pEVar9 + 1;
      memmove(__src + 1,__src,__n);
      *__src = pEVar12;
    } while (pEVar10 != pEVar9);
  }
  else {
    lVar7 = 1;
    do {
      while( true ) {
        lVar11 = lVar7;
        pEVar9 = __src[lVar11];
        iVar3 = ShaderWarning::get_line();
        iVar4 = ShaderWarning::get_line();
        if (iVar3 < iVar4) break;
        ppEVar5 = __src + lVar11;
        while( true ) {
          iVar3 = ShaderWarning::get_line();
          iVar4 = ShaderWarning::get_line();
          if (iVar4 <= iVar3) break;
          if (ppEVar5 + -1 == __src) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          *ppEVar5 = ppEVar5[-1];
          ppEVar5 = ppEVar5 + -1;
        }
        *ppEVar5 = pEVar9;
        lVar7 = lVar11 + 1;
        if (lVar11 + 1 == 0x10) goto LAB_0011164c;
      }
      memmove(__src + 1,__src,lVar11 * 8);
      *__src = pEVar9;
      lVar7 = lVar11 + 1;
    } while (lVar11 + 1 != 0x10);
LAB_0011164c:
    pEVar9 = (Element *)(lVar11 + 1);
    do {
      pEVar12 = __src[(long)pEVar9];
      ppEVar5 = __src + (long)pEVar9;
      pEVar8 = pEVar9;
      while( true ) {
        pEVar8 = pEVar8 + -1;
        iVar3 = ShaderWarning::get_line();
        iVar4 = ShaderWarning::get_line();
        if (iVar4 <= iVar3) break;
        if (pEVar8 == (Element *)0x0) {
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
          break;
        }
        *ppEVar5 = ppEVar5[-1];
        ppEVar5 = ppEVar5 + -1;
      }
      *ppEVar5 = pEVar12;
      pEVar9 = pEVar9 + 1;
    } while (pEVar10 != pEVar9);
    pEVar12 = *__src;
  }
LAB_00111841:
  puVar2 = *(undefined8 **)this;
  *puVar2 = pEVar12;
  *(undefined8 *)(pEVar12 + 0x28) = 0;
  *(Element **)(*__src + 0x20) = __src[1];
  pEVar9 = __src[(long)(pEVar10 + -1)];
  puVar2[1] = pEVar9;
  *(Element **)(pEVar9 + 0x28) = __src[(long)(pEVar10 + -2)];
  *(undefined8 *)(__src[(long)(pEVar10 + -1)] + 0x20) = 0;
  if (iVar1 != 2) {
    ppEVar5 = __src;
    do {
      ppEVar6 = ppEVar5 + 1;
      *(Element **)(ppEVar5[1] + 0x28) = *ppEVar5;
      *(Element **)(*ppEVar6 + 0x20) = ppEVar5[2];
      ppEVar5 = ppEVar6;
    } while (__src + (iVar1 - 2) != ppEVar6);
  }
  Memory::free_static(__src,true);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void Ref<GDShaderSyntaxHighlighter>::instantiate<>() */

void __thiscall Ref<GDShaderSyntaxHighlighter>::instantiate<>(Ref<GDShaderSyntaxHighlighter> *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  Resource *this_00;
  long lVar4;
  Resource *pRVar5;
  Object *pOVar6;
  Object *pOVar7;
  byte bVar8;
  
  bVar8 = 0;
  this_00 = (Resource *)operator_new(0x378,"");
  pRVar5 = this_00;
  for (lVar4 = 0x6f; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)pRVar5 = 0;
    pRVar5 = pRVar5 + (ulong)bVar8 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  *(undefined8 *)(this_00 + 0x240) = 0;
  *(undefined ***)this_00 = &PTR__initialize_classv_00122388;
  *(undefined8 **)(this_00 + 0x248) = &_GlobalNilClass::_nil;
  *(undefined4 *)(this_00 + 0x250) = 0;
  *(undefined8 *)(this_00 + 600) = 0;
  *(undefined8 *)(this_00 + 0x260) = 0;
  StringName::StringName((StringName *)(this_00 + 0x268),"_get_line_syntax_highlighting",false);
  this_00[0x270] = (Resource)0x0;
  *(undefined8 *)(this_00 + 0x278) = 0;
  StringName::StringName((StringName *)(this_00 + 0x280),"_clear_highlighting_cache",false);
  this_00[0x288] = (Resource)0x0;
  *(undefined8 *)(this_00 + 0x290) = 0;
  StringName::StringName((StringName *)(this_00 + 0x298),"_update_cache",false);
  this_00[0x2a0] = (Resource)0x0;
  *(code **)this_00 = RefCounted::init_ref;
  *(undefined8 *)(this_00 + 0x2a8) = 0;
  *(undefined8 *)(this_00 + 0x2b8) = 0;
  *(undefined8 *)(this_00 + 0x2e8) = 2;
  *(undefined1 (*) [16])(this_00 + 0x2c8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x2d8) = (undefined1  [16])0x0;
  Dictionary::Dictionary((Dictionary *)(this_00 + 0x2f0));
  Dictionary::Dictionary((Dictionary *)(this_00 + 0x2f8));
  uVar2 = _UNK_00124088;
  uVar1 = __LC34;
  this_00[0x350] = (Resource)0x0;
  *(undefined ***)this_00 = &PTR__initialize_classv_00122c88;
  *(undefined8 *)(this_00 + 0x360) = 0;
  *(undefined8 *)(this_00 + 0x300) = uVar1;
  *(undefined8 *)(this_00 + 0x308) = uVar2;
  *(undefined8 *)(this_00 + 0x310) = uVar1;
  *(undefined8 *)(this_00 + 0x318) = uVar2;
  *(undefined8 *)(this_00 + 800) = uVar1;
  *(undefined8 *)(this_00 + 0x328) = uVar2;
  *(undefined8 *)(this_00 + 0x330) = uVar1;
  *(undefined8 *)(this_00 + 0x338) = uVar2;
  *(undefined8 *)(this_00 + 0x340) = uVar1;
  *(undefined8 *)(this_00 + 0x348) = uVar2;
  *(undefined8 *)(this_00 + 0x368) = uVar1;
  *(undefined8 *)(this_00 + 0x370) = uVar2;
  postinitialize_handler((Object *)this_00);
  cVar3 = RefCounted::init_ref();
  if (cVar3 == '\0') {
    pOVar7 = *(Object **)this;
    if (pOVar7 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar3 = RefCounted::unreference();
    if (cVar3 == '\0') {
      return;
    }
    this_00 = (Resource *)0x0;
    cVar3 = predelete_handler(pOVar7);
    if (cVar3 == '\0') {
      return;
    }
  }
  else {
    pOVar7 = *(Object **)this;
    pOVar6 = pOVar7;
    if (this_00 == (Resource *)pOVar7) goto LAB_00111b75;
    *(Resource **)this = this_00;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar6 = (Object *)this_00;
    if (((pOVar7 == (Object *)0x0) || (cVar3 = RefCounted::unreference(), cVar3 == '\0')) ||
       (cVar3 = predelete_handler(pOVar7), cVar3 == '\0')) goto LAB_00111b75;
  }
  (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
  Memory::free_static(pOVar7,false);
  pOVar6 = (Object *)this_00;
  if (this_00 == (Resource *)0x0) {
    return;
  }
LAB_00111b75:
  cVar3 = RefCounted::unreference();
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar6), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<ShaderWarning::Code, bool, HashMapHasherDefault,
   HashMapComparatorDefault<ShaderWarning::Code>,
   DefaultTypedAllocator<HashMapElement<ShaderWarning::Code, bool> >
   >::operator[](ShaderWarning::Code const&) */

undefined1  [16] __thiscall
HashMap<ShaderWarning::Code,bool,HashMapHasherDefault,HashMapComparatorDefault<ShaderWarning::Code>,DefaultTypedAllocator<HashMapElement<ShaderWarning::Code,bool>>>
::operator[](HashMap<ShaderWarning::Code,bool,HashMapHasherDefault,HashMapComparatorDefault<ShaderWarning::Code>,DefaultTypedAllocator<HashMapElement<ShaderWarning::Code,bool>>>
             *this,Code *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
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
  undefined1 (*pauVar37) [16];
  uint uVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 uVar42;
  void *__s_00;
  undefined1 (*pauVar43) [16];
  ulong uVar44;
  int iVar45;
  ulong uVar46;
  long lVar47;
  long lVar48;
  ulong uVar49;
  undefined8 uVar50;
  uint uVar51;
  ulong uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar41 = (ulong)*(uint *)(this + 0x28);
  uVar39 = *(uint *)param_1;
  uVar40 = *(uint *)(hash_table_size_primes + uVar41 * 4);
  uVar52 = CONCAT44(0,uVar40);
  if (local_70 == (void *)0x0) {
    uVar41 = uVar52 * 4;
    uVar49 = uVar52 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    lStack_90 = 0x11229b;
    local_70 = (void *)Memory::alloc_static(uVar49,false);
    *(void **)(this + 8) = local_70;
    if (uVar40 == 0) {
      iVar45 = *(int *)(this + 0x2c);
      uVar39 = *(uint *)param_1;
      if (local_70 == (void *)0x0) goto LAB_00111e03;
    }
    else {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_70 + uVar49)) &&
         (local_70 < (void *)((long)pvVar4 + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar41 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar52 != uVar41);
        iVar45 = *(int *)(this + 0x2c);
        uVar39 = *(uint *)param_1;
      }
      else {
        memset(pvVar4,0,uVar41);
        lStack_90 = 0x1122e4;
        memset(local_70,0,uVar49);
        iVar45 = *(int *)(this + 0x2c);
        uVar39 = *(uint *)param_1;
      }
    }
    if (iVar45 != 0) {
      uVar41 = (ulong)*(uint *)(this + 0x28);
      lVar53 = *(long *)(this + 0x10);
      goto LAB_00112183;
    }
  }
  else {
    iVar45 = *(int *)(this + 0x2c);
    if (iVar45 != 0) {
      uVar49 = *(ulong *)(hash_table_size_primes_inv + uVar41 * 8);
      uVar38 = (uVar39 >> 0x10 ^ uVar39) * -0x7a143595;
      uVar38 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
      uVar54 = uVar38 ^ uVar38 >> 0x10;
      if (uVar38 == uVar38 >> 0x10) {
        uVar54 = 1;
        uVar46 = uVar49;
      }
      else {
        uVar46 = uVar54 * uVar49;
      }
      lVar53 = *(long *)(this + 0x10);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar52;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar46;
      lVar47 = SUB168(auVar5 * auVar21,8);
      uVar38 = *(uint *)(lVar53 + lVar47 * 4);
      uVar55 = SUB164(auVar5 * auVar21,8);
      if (uVar38 != 0) {
        uVar51 = 0;
        lVar48 = lVar47;
        do {
          if ((uVar54 == uVar38) &&
             (uVar39 == *(uint *)(*(long *)((long)local_70 + lVar47 * 8) + 0x10))) {
            auVar57._0_8_ = *(long *)((long)local_70 + (ulong)uVar55 * 8) + 0x14;
            auVar57._8_8_ = lVar48;
            return auVar57;
          }
          uVar51 = uVar51 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar55 + 1) * uVar49;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar52;
          lVar47 = SUB168(auVar6 * auVar22,8);
          uVar38 = *(uint *)(lVar53 + lVar47 * 4);
          uVar55 = SUB164(auVar6 * auVar22,8);
        } while ((uVar38 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar38 * uVar49, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar52, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((uVar55 + uVar40) - SUB164(auVar7 * auVar23,8)) * uVar49,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar52, lVar48 = SUB168(auVar8 * auVar24,8),
                uVar51 <= SUB164(auVar8 * auVar24,8)));
      }
LAB_00112183:
      uVar46 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar41 * 4));
      uVar49 = *(ulong *)(hash_table_size_primes_inv + uVar41 * 8);
      uVar40 = (uVar39 >> 0x10 ^ uVar39) * -0x7a143595;
      uVar40 = (uVar40 ^ uVar40 >> 0xd) * -0x3d4d51cb;
      uVar38 = uVar40 ^ uVar40 >> 0x10;
      if (uVar40 == uVar40 >> 0x10) {
        uVar38 = 1;
        uVar44 = uVar49;
      }
      else {
        uVar44 = uVar38 * uVar49;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar46;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar44;
      lVar47 = SUB168(auVar17 * auVar33,8);
      uVar40 = *(uint *)(lVar53 + lVar47 * 4);
      uVar54 = SUB164(auVar17 * auVar33,8);
      if (uVar40 != 0) {
        uVar55 = 0;
        lVar48 = lVar47;
        do {
          if ((uVar38 == uVar40) &&
             (*(uint *)(*(long *)((long)local_70 + lVar47 * 8) + 0x10) == uVar39)) {
            pauVar43 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar54 * 8);
            pauVar43[1][4] = 0;
            lStack_90 = lVar48;
            goto LAB_00112164;
          }
          uVar55 = uVar55 + 1;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (uVar54 + 1) * uVar49;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar46;
          lVar47 = SUB168(auVar18 * auVar34,8);
          uVar40 = *(uint *)(lVar53 + lVar47 * 4);
          uVar54 = SUB164(auVar18 * auVar34,8);
        } while ((uVar40 != 0) &&
                (auVar19._8_8_ = 0, auVar19._0_8_ = uVar40 * uVar49, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar46, auVar20._8_8_ = 0,
                auVar20._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar41 * 4) + uVar54) -
                     SUB164(auVar19 * auVar35,8)) * uVar49, auVar36._8_8_ = 0,
                auVar36._0_8_ = uVar46, lVar48 = SUB168(auVar20 * auVar36,8),
                uVar55 <= SUB164(auVar20 * auVar36,8)));
      }
    }
  }
LAB_00111e03:
  if ((float)uVar52 * __LC38 < (float)(iVar45 + 1)) {
    uVar39 = *(uint *)(this + 0x28);
    if (uVar39 == 0x1c) {
      pauVar43 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00112164;
    }
    uVar41 = (ulong)(uVar39 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar40 = *(uint *)(hash_table_size_primes + (ulong)uVar39 * 4);
    if (uVar39 + 1 < 2) {
      uVar41 = 2;
    }
    uVar39 = *(uint *)(hash_table_size_primes + uVar41 * 4);
    uVar49 = (ulong)uVar39;
    *(int *)(this + 0x28) = (int)uVar41;
    pvVar4 = *(void **)(this + 0x10);
    uVar41 = uVar49 * 4;
    uVar52 = uVar49 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    __s_00 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = __s_00;
    if (uVar39 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar52)) && (__s_00 < (void *)((long)__s + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)__s + uVar41 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar41 != uVar49);
      }
      else {
        memset(__s,0,uVar41);
        memset(__s_00,0,uVar52);
      }
    }
    if (uVar40 != 0) {
      uVar41 = 0;
      do {
        uVar39 = *(uint *)((long)pvVar4 + uVar41 * 4);
        if (uVar39 != 0) {
          lVar53 = *(long *)(this + 0x10);
          uVar55 = 0;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar52 = CONCAT44(0,uVar38);
          lVar47 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar39 * lVar47;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar52;
          lVar48 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar53 + lVar48 * 4);
          iVar45 = SUB164(auVar9 * auVar25,8);
          uVar54 = *puVar1;
          uVar42 = *(undefined8 *)((long)local_70 + uVar41 * 8);
          while (uVar54 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar54 * lVar47;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar52;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar38 + iVar45) - SUB164(auVar10 * auVar26,8)) * lVar47;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar52;
            uVar51 = SUB164(auVar11 * auVar27,8);
            uVar50 = uVar42;
            if (uVar51 < uVar55) {
              *puVar1 = uVar39;
              puVar2 = (undefined8 *)((long)__s_00 + lVar48 * 8);
              uVar50 = *puVar2;
              *puVar2 = uVar42;
              uVar39 = uVar54;
              uVar55 = uVar51;
            }
            uVar55 = uVar55 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar45 + 1) * lVar47;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar52;
            lVar48 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar53 + lVar48 * 4);
            iVar45 = SUB164(auVar12 * auVar28,8);
            uVar42 = uVar50;
            uVar54 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar48 * 8) = uVar42;
          *puVar1 = uVar39;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar41 = uVar41 + 1;
      } while (uVar40 != uVar41);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar4,false);
    }
  }
  uVar3 = *(undefined4 *)param_1;
  pauVar43 = (undefined1 (*) [16])operator_new(0x18,"");
  *(undefined4 *)pauVar43[1] = uVar3;
  pauVar43[1][4] = 0;
  *pauVar43 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar43;
  }
  else {
    *puVar2 = pauVar43;
    *(undefined8 **)(*pauVar43 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar43;
  uVar39 = (*(uint *)param_1 >> 0x10 ^ *(uint *)param_1) * -0x7a143595;
  uVar40 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
  uVar39 = uVar40 ^ uVar40 >> 0x10;
  if (uVar40 == uVar40 >> 0x10) {
    uVar41 = 1;
    uVar39 = 1;
  }
  else {
    uVar41 = (ulong)uVar39;
  }
  uVar54 = 0;
  lVar53 = *(long *)(this + 0x10);
  lVar47 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar52 = CONCAT44(0,uVar40);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar41 * lVar47;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar52;
  lStack_90 = SUB168(auVar13 * auVar29,8);
  lVar48 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar53 + lStack_90 * 4);
  iVar45 = SUB164(auVar13 * auVar29,8);
  uVar38 = *puVar1;
  pauVar37 = pauVar43;
  while (uVar38 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar38 * lVar47;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar52;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar40 + iVar45) - SUB164(auVar14 * auVar30,8)) * lVar47;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar52;
    uVar55 = SUB164(auVar15 * auVar31,8);
    pauVar56 = pauVar37;
    if (uVar55 < uVar54) {
      *puVar1 = uVar39;
      puVar2 = (undefined8 *)(lVar48 + lStack_90 * 8);
      pauVar56 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar39 = uVar38;
      uVar54 = uVar55;
    }
    uVar54 = uVar54 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar45 + 1) * lVar47;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar52;
    lStack_90 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar53 + lStack_90 * 4);
    iVar45 = SUB164(auVar16 * auVar32,8);
    pauVar37 = pauVar56;
    uVar38 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar48 + lStack_90 * 8) = pauVar37;
  *puVar1 = uVar39;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00112164:
  auVar58._8_8_ = lStack_90;
  auVar58._0_8_ = pauVar43[1] + 4;
  return auVar58;
}



/* Callable create_custom_callable_function_pointer<Window, Vector2i const&>(Window*, char const*,
   void (Window::*)(Vector2i const&)) */

Window * create_custom_callable_function_pointer<Window,Vector2i_const&>
                   (Window *param_1,char *param_2,_func_void_Vector2i_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC22;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001237f0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Vector2i_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<TextShaderEditor, bool>(TextShaderEditor*, char
   const*, void (TextShaderEditor::*)(bool)) */

TextShaderEditor *
create_custom_callable_function_pointer<TextShaderEditor,bool>
          (TextShaderEditor *param_1,char *param_2,_func_void_bool *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC22;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00123880;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_bool **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<TextShaderEditor>(TextShaderEditor*, char
   const*, void (TextShaderEditor::*)()) */

TextShaderEditor *
create_custom_callable_function_pointer<TextShaderEditor>
          (TextShaderEditor *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC22;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00123910;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<TextShaderEditor, int>(TextShaderEditor*, char
   const*, void (TextShaderEditor::*)(int)) */

TextShaderEditor *
create_custom_callable_function_pointer<TextShaderEditor,int>
          (TextShaderEditor *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC22;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00123a30;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_int **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
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



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  return;
}



/* GDShaderSyntaxHighlighter::_initialize_classv() */

void GDShaderSyntaxHighlighter::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (CodeHighlighter::initialize_class()::initialized == '\0') {
      if (SyntaxHighlighter::initialize_class()::initialized == '\0') {
        if (Resource::initialize_class()::initialized == '\0') {
          Resource::initialize_class();
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Resource");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"SyntaxHighlighter");
        StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
        if ((StringName::configured != '\0') && (local_68 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((code *)_GLOBAL_OFFSET_TABLE_ != SyntaxHighlighter::_bind_methods) {
          SyntaxHighlighter::_bind_methods();
        }
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
      if ((code *)PTR__bind_methods_0012b060 != SyntaxHighlighter::_bind_methods) {
        CodeHighlighter::_bind_methods();
      }
      CodeHighlighter::initialize_class()::initialized = '\x01';
    }
    local_58 = "CodeHighlighter";
    local_68 = 0;
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "GDShaderSyntaxHighlighter";
    local_70 = 0;
    local_50 = 0x19;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00112c80) */
/* String vformat<int, String>(String const&, int const, String const) */

undefined8 * vformat<int,String>(undefined8 *param_1,bool *param_2,int param_3,String *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d0 [8];
  undefined8 local_c8 [8];
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
  Array::Array(local_d0);
  iVar3 = (int)local_d0;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_c8,param_2);
  *param_1 = local_c8[0];
  local_c8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d0);
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



/* WARNING: Removing unreachable block (ram,0x00112ef8) */
/* String vformat<char const*>(String const&, char const* const) */

String * vformat<char_const*>(String *param_1,char *param_2)

{
  char cVar1;
  Variant *this;
  char *in_RDX;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c0 [8];
  undefined8 local_b8 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_RDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c0);
  iVar2 = (int)local_c0;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_b8,(bool *)param_2);
  *(undefined8 *)param_1 = local_b8[0];
  local_b8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  Array::~Array(local_c0);
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



/* ShaderTextEditor::_notificationv(int, bool) */

void __thiscall ShaderTextEditor::_notificationv(ShaderTextEditor *this,int param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)this;
  if (param_2) {
    if ((param_1 != 0x2d) || (cVar1 = CanvasItem::is_visible_in_tree(), cVar1 == '\0'))
    goto LAB_001130a0;
    (**(code **)(*(long *)this + 0x368))(this);
    if ((*(long *)(this + 0xb58) == 0) ||
       ((*(int *)(*(long *)(this + 0xb58) + 0x10) < 1 || (*(int *)(this + 0xb60) != 0))))
    goto LAB_001130a0;
  }
  else {
    Node::_notification(iVar2);
    CanvasItem::_notification(iVar2);
    Control::_notification(iVar2);
    Container::_notification(iVar2);
    BoxContainer::_notification(iVar2);
    if ((code *)PTR__notification_0012b068 != BoxContainer::_notification) {
      CodeTextEditor::_notification(iVar2);
    }
    if (param_1 != 0x2d) {
      return;
    }
    cVar1 = CanvasItem::is_visible_in_tree();
    if (cVar1 == '\0') {
      return;
    }
    (**(code **)(*(long *)this + 0x368))(this);
    if (*(long *)(this + 0xb58) == 0) {
      return;
    }
    if (*(int *)(*(long *)(this + 0xb58) + 0x10) < 1) {
      return;
    }
    if (*(int *)(this + 0xb60) != 0) {
      return;
    }
  }
  RichTextLabel::clear();
  _update_warning_panel();
  if (!param_2) {
    return;
  }
LAB_001130a0:
  if ((code *)PTR__notification_0012b068 != BoxContainer::_notification) {
    CodeTextEditor::_notification(iVar2);
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
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



/* ShaderInclude::get_class() const */

void ShaderInclude::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* TextShaderEditor::get_class() const */

void TextShaderEditor::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* ShaderEditor::get_class() const */

void ShaderEditor::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* VSplitContainer::get_class() const */

void VSplitContainer::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* ShaderTextEditor::get_class() const */

void ShaderTextEditor::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* VBoxContainer::get_class() const */

void VBoxContainer::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* HBoxContainer::get_class() const */

void HBoxContainer::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* Shader::get_class() const */

void Shader::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* GDShaderSyntaxHighlighter::get_class() const */

void GDShaderSyntaxHighlighter::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::TEMPNAMEPLACEHOLDERVALUE(HashSet<String, HashMapHasherDefault,
   HashMapComparatorDefault<String> > const&) */

void __thiscall
HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::operator=
          (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          HashSet *param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  CowData *pCVar9;
  CowData<char32_t> *this_00;
  void *pvVar10;
  
  if (this == (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> *)param_1) {
    return;
  }
  pvVar10 = *(void **)this;
  if (pvVar10 == (void *)0x0) goto LAB_00113b66;
  if (*(int *)(this + 0x24) != 0) {
    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) != 0) {
      memset(*(void **)(this + 0x18),0,
             (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) << 2);
      if (*(int *)(this + 0x24) == 0) goto LAB_00113c70;
    }
    lVar8 = 0;
    do {
      lVar1 = lVar8 * 8;
      lVar8 = lVar8 + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar10 + lVar1));
      pvVar10 = *(void **)this;
    } while ((uint)lVar8 < *(uint *)(this + 0x24));
    *(undefined4 *)(this + 0x24) = 0;
    if (pvVar10 == (void *)0x0) goto LAB_00113b66;
  }
LAB_00113c70:
  Memory::free_static(pvVar10,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  Memory::free_static(*(void **)(this + 8),false);
  Memory::free_static(*(void **)(this + 0x18),false);
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
LAB_00113b66:
  uVar2 = *(ulong *)(param_1 + 0x20);
  *(ulong *)(this + 0x20) = uVar2;
  if ((int)(uVar2 >> 0x20) != 0) {
    uVar3 = *(uint *)(hash_table_size_primes + (uVar2 & 0xffffffff) * 4);
    uVar2 = (ulong)uVar3 * 4;
    uVar6 = Memory::alloc_static(uVar2,false);
    lVar8 = 0;
    *(undefined8 *)(this + 0x18) = uVar6;
    uVar6 = Memory::alloc_static((ulong)uVar3 * 8,false);
    *(undefined8 *)this = uVar6;
    uVar6 = Memory::alloc_static(uVar2,false);
    *(undefined8 *)(this + 0x10) = uVar6;
    uVar6 = Memory::alloc_static(uVar2,false);
    *(undefined8 *)(this + 8) = uVar6;
    if (*(int *)(this + 0x24) != 0) {
      do {
        this_00 = (CowData<char32_t> *)(*(long *)this + lVar8 * 8);
        pCVar9 = (CowData *)(lVar8 * 8 + *(long *)param_1);
        *(undefined8 *)this_00 = 0;
        if (*(long *)pCVar9 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar9);
        }
        *(undefined4 *)(*(long *)(this + 0x10) + lVar8 * 4) =
             *(undefined4 *)(*(long *)(param_1 + 0x10) + lVar8 * 4);
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < *(uint *)(this + 0x24));
    }
    if (uVar3 != 0) {
      lVar8 = *(long *)(param_1 + 0x18);
      lVar1 = *(long *)(this + 0x18);
      uVar7 = 0;
      lVar4 = *(long *)(param_1 + 8);
      lVar5 = *(long *)(this + 8);
      do {
        *(undefined4 *)(lVar1 + uVar7) = *(undefined4 *)(lVar8 + uVar7);
        *(undefined4 *)(lVar5 + uVar7) = *(undefined4 *)(lVar4 + uVar7);
        uVar7 = uVar7 + 4;
      } while (uVar7 != uVar2);
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



/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
  CowData<char32_t> *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (CowData<char32_t> *)*plVar3;
    if (this_00 == (CowData<char32_t> *)0x0) {
      if ((int)plVar3[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x18) == plVar3) {
      lVar2 = *(long *)(this_00 + 8);
      lVar1 = *(long *)(this_00 + 0x10);
      *plVar3 = lVar2;
      if (this_00 == (CowData<char32_t> *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar2;
        lVar2 = *(long *)(this_00 + 8);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar1;
      }
      CowData<char32_t>::_unref(this_00);
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



/* List<ShaderPreprocessor::FilePosition, DefaultAllocator>::~List() */

void __thiscall
List<ShaderPreprocessor::FilePosition,DefaultAllocator>::~List
          (List<ShaderPreprocessor::FilePosition,DefaultAllocator> *this)

{
  CowData<char32_t> *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (CowData<char32_t> *)*plVar3;
    if (this_00 == (CowData<char32_t> *)0x0) {
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
      if (this_00 == (CowData<char32_t> *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x10) = lVar2;
        lVar2 = *(long *)(this_00 + 0x10);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x18) = lVar1;
      }
      CowData<char32_t>::_unref(this_00);
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



/* List<ShaderPreprocessor::Region, DefaultAllocator>::~List() */

void __thiscall
List<ShaderPreprocessor::Region,DefaultAllocator>::~List
          (List<ShaderPreprocessor::Region,DefaultAllocator> *this)

{
  CowData<char32_t> *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (CowData<char32_t> *)*plVar3;
    if (this_00 == (CowData<char32_t> *)0x0) {
      if ((int)plVar3[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x30) == plVar3) {
      lVar2 = *(long *)(this_00 + 0x20);
      lVar1 = *(long *)(this_00 + 0x28);
      *plVar3 = lVar2;
      if (this_00 == (CowData<char32_t> *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x20) = lVar2;
        lVar2 = *(long *)(this_00 + 0x20);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x28) = lVar1;
      }
      CowData<char32_t>::_unref(this_00);
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



/* CodeHighlighter::~CodeHighlighter() */

void __thiscall CodeHighlighter::~CodeHighlighter(CodeHighlighter *this)

{
  long *plVar1;
  CowData<char32_t> *this_00;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  CowData<char32_t> *this_01;
  void *pvVar6;
  long lVar7;
  
  *(code **)this = RefCounted::init_ref;
  Dictionary::~Dictionary((Dictionary *)(this + 0x2f8));
  Dictionary::~Dictionary((Dictionary *)(this + 0x2f0));
  pvVar6 = *(void **)(this + 0x2c8);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x2ec) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2e8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x2ec) = 0;
        *(undefined1 (*) [16])(this + 0x2d8) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x2d0) + lVar5) != 0) {
            *(int *)(*(long *)(this + 0x2d0) + lVar5) = 0;
            Memory::free_static(*(void **)((long)pvVar6 + lVar5 * 2),false);
            pvVar6 = *(void **)(this + 0x2c8);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x2ec) = 0;
        *(undefined1 (*) [16])(this + 0x2d8) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_0011420f;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x2d0),false);
  }
LAB_0011420f:
  if (*(long *)(this + 0x2b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0x2b8);
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(lVar5 + -8);
      this_01 = (CowData<char32_t> *)(lVar5 + 0x18);
      lVar7 = 0;
      *(undefined8 *)(this + 0x2b8) = 0;
      if (lVar3 != 0) {
        do {
          lVar7 = lVar7 + 1;
          CowData<char32_t>::_unref(this_01);
          this_00 = this_01 + -8;
          this_01 = this_01 + 0x28;
          CowData<char32_t>::_unref(this_00);
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  SyntaxHighlighter::~SyntaxHighlighter((SyntaxHighlighter *)this);
  return;
}



/* CodeHighlighter::~CodeHighlighter() */

void __thiscall CodeHighlighter::~CodeHighlighter(CodeHighlighter *this)

{
  ~CodeHighlighter(this);
  operator_delete(this,0x358);
  return;
}



/* GDShaderSyntaxHighlighter::~GDShaderSyntaxHighlighter() */

void __thiscall
GDShaderSyntaxHighlighter::~GDShaderSyntaxHighlighter(GDShaderSyntaxHighlighter *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00122c88;
  if (*(long *)(this + 0x360) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x360) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x360);
      *(undefined8 *)(this + 0x360) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      CodeHighlighter::~CodeHighlighter((CodeHighlighter *)this);
      return;
    }
  }
  CodeHighlighter::~CodeHighlighter((CodeHighlighter *)this);
  return;
}



/* GDShaderSyntaxHighlighter::~GDShaderSyntaxHighlighter() */

void __thiscall
GDShaderSyntaxHighlighter::~GDShaderSyntaxHighlighter(GDShaderSyntaxHighlighter *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00122c88;
  if (*(long *)(this + 0x360) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x360) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x360);
      *(undefined8 *)(this + 0x360) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CodeHighlighter::~CodeHighlighter((CodeHighlighter *)this);
  operator_delete(this,0x378);
  return;
}



/* CallableCustomMethodPointer<TextShaderEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TextShaderEditor,void>::call
          (CallableCustomMethodPointer<TextShaderEditor,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011459f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011459f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00114578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00114650;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011459f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC110,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00114650:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Control, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Control,void>::call
          (CallableCustomMethodPointer<Control,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_001147af;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001147af;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00114788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00114860;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001147af:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC110,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00114860:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ShaderTextEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ShaderTextEditor,void>::call
          (CallableCustomMethodPointer<ShaderTextEditor,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_001149bf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001149bf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00114998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00114a70;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001149bf:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC110,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00114a70:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TextShaderEditor, void, Variant const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,Variant_const&>::call
          (CallableCustomMethodPointer<TextShaderEditor,void,Variant_const&> *this,Variant **param_1
          ,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  ulong *puVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  bool bVar7;
  CowData<char32_t> aCStack_68 [8];
  CowData<char32_t> local_60 [8];
  undefined8 local_58;
  String local_50 [8];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar4 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_50[0] = (String)0x0;
      LOCK();
      bVar7 = (char)ObjectDB::spin_lock == '\0';
      if (bVar7) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar7) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar5 = (ulong *)((ulong)uVar4 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar5 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar5[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar6 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar6 & 1) != 0) {
              pcVar6 = *(code **)(pcVar6 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar3 = Variant::can_convert_strict(*(undefined4 *)*param_1,0);
            if (cVar3 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = 0;
            }
            Variant::Variant((Variant *)local_48,*param_1);
            (*pcVar6)((long *)(lVar1 + lVar2),(Variant *)local_48);
            if (Variant::needs_deinit[local_48[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_00114b4e;
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
  local_58 = 0;
  String::parse_latin1((String *)&local_58,"\', can\'t call method.");
  uitos((ulong)aCStack_68);
  operator+((char *)local_60,(String *)"Invalid Object id \'");
  String::operator+(local_50,(String *)local_60);
  _err_print_error(&_LC110,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_50,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref(aCStack_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
LAB_00114b4e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<TextShaderEditor, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,bool>::call
          (CallableCustomMethodPointer<TextShaderEditor,void,bool> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar7;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar7 = (char)ObjectDB::spin_lock == '\0';
      if (bVar7) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar7) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00114eb9;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_00114eb9;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
        uVar3 = _LC111;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00114e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_00114f6a;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00114eb9:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC110,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00114f6a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TextEdit, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TextEdit,void,int>::call
          (CallableCustomMethodPointer<TextEdit,void,int> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulong *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00115128;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00115128;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar3 = _LC112;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001150d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_001151d9;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00115128:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC110,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001151d9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TextShaderEditor, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,int>::call
          (CallableCustomMethodPointer<TextShaderEditor,void,int> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulong *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00115398;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00115398;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar3 = _LC112;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00115347. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_00115449;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00115398:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC110,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00115449:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TextShaderEditor, void, Ref<InputEvent> const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<TextShaderEditor,void,Ref<InputEvent>const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  Object *pOVar7;
  uint uVar8;
  ulong *puVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_38 >> 8;
      local_38 = (Object *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_38 = (Object *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar10 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (1 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0011551e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0011551e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC113;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_38 = (Object *)0x0;
        pOVar7 = (Object *)Variant::get_validated_object();
        pOVar5 = local_38;
        if (pOVar7 != local_38) {
          if (pOVar7 == (Object *)0x0) {
            if (local_38 != (Object *)0x0) {
              local_38 = (Object *)0x0;
LAB_001155ed:
              cVar6 = RefCounted::unreference();
              if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar5), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
          else {
            pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&InputEvent::typeinfo,0);
            if (pOVar5 != pOVar7) {
              local_38 = pOVar7;
              if ((pOVar7 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_38 = (Object *)0x0;
              }
              if (pOVar5 != (Object *)0x0) goto LAB_001155ed;
            }
          }
        }
        (*pcVar10)((long *)(lVar1 + lVar2));
        if (((local_38 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar5 = local_38, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_38), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        goto LAB_0011551e;
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
  local_40 = 0;
  String::parse_latin1((String *)&local_40,"\', can\'t call method.");
  uitos((ulong)local_50);
  operator+((char *)local_48,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_38,(String *)local_48);
  _err_print_error(&_LC110,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0011551e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<Window, void, Vector2i const&>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Window,void,Vector2i_const&>::call
          (CallableCustomMethodPointer<Window,void,Vector2i_const&> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> aCStack_58 [8];
  CowData<char32_t> local_50 [8];
  undefined8 local_48;
  String local_40 [8];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_40[0] = (String)0x0;
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar7 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar7 & 1) != 0) {
              pcVar7 = *(code **)(pcVar7 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,6);
            uVar3 = _LC114;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            local_38 = Variant::operator_cast_to_Vector2i(*param_1);
            (*pcVar7)((long *)(lVar1 + lVar2),&local_38);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0011588e;
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
  local_48 = 0;
  String::parse_latin1((String *)&local_48,"\', can\'t call method.");
  uitos((ulong)aCStack_58);
  operator+((char *)local_50,(String *)"Invalid Object id \'");
  String::operator+(local_40,(String *)local_50);
  _err_print_error(&_LC110,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_40,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_40);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref(aCStack_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0011588e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<TextEdit, void, double>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TextEdit,void,double>::call
          (CallableCustomMethodPointer<TextEdit,void,double> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar7;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar7 = (char)ObjectDB::spin_lock == '\0';
      if (bVar7) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar7) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00115bd6;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_00115bd6;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,3);
        uVar3 = _LC115;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        Variant::operator_cast_to_double(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00115b85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2));
          return;
        }
        goto LAB_00115c87;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00115bd6:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC110,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00115c87:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TextShaderEditor, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,String_const&>::call
          (CallableCustomMethodPointer<TextShaderEditor,void,String_const&> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  Variant local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (Variant)0x0;
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar7 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar7 & 1) != 0) {
              pcVar7 = *(code **)(pcVar7 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar3 = _LC116;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_String(local_38);
            (*pcVar7)((long *)(lVar1 + lVar2),local_38);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_00115d5e;
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
  local_40 = 0;
  String::parse_latin1((String *)&local_40,"\', can\'t call method.");
  uitos((ulong)local_50);
  operator+((char *)local_48,(String *)"Invalid Object id \'");
  String::operator+((String *)local_38,(String *)local_48);
  _err_print_error(&_LC110,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_00115d5e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC22;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,1,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Variant const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Variant_const&>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined4 local_68 [2];
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)local_68,0,(CowData<char32_t> *)&local_80,0,
               (CowData<char32_t> *)&local_78,0x20006,&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68[0];
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00116290) */
/* TextShaderEditor::_notificationv(int, bool) */

void __thiscall TextShaderEditor::_notificationv(TextShaderEditor *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0012b040 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_0012b040 != CanvasItem::_notification) {
    Control::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_001163fb;
  }
  cVar5 = String::operator==(param_1,"Resource");
  if (cVar5 == '\0') {
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
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_001163fb;
    }
    cVar5 = String::operator==(param_1,"RefCounted");
    if (cVar5 == '\0') {
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
        cVar5 = String::operator==(param_1,(String *)&local_60);
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
        if (cVar5 != '\0') goto LAB_001163fb;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = String::operator==(param_1,"Object");
        return uVar6;
      }
      goto LAB_001165d8;
    }
  }
LAB_001163fb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001165d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SyntaxHighlighter::is_class(String const&) const */

undefined8 __thiscall SyntaxHighlighter::is_class(SyntaxHighlighter *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_001166db;
  }
  cVar4 = String::operator==(param_1,"SyntaxHighlighter");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Resource::is_class((Resource *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001166db:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CanvasItem::is_class(String const&) const */

undefined8 __thiscall CanvasItem::is_class(CanvasItem *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0011683b;
  }
  cVar5 = String::operator==(param_1,"CanvasItem");
  if (cVar5 == '\0') {
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
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0011683b;
    }
    cVar5 = String::operator==(param_1,"Node");
    if (cVar5 == '\0') {
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
        cVar5 = String::operator==(param_1,(String *)&local_60);
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
        if (cVar5 != '\0') goto LAB_0011683b;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = String::operator==(param_1,"Object");
        return uVar6;
      }
      goto LAB_00116a18;
    }
  }
LAB_0011683b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00116a18:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_00116b2b;
  }
  cVar4 = String::operator==(param_1,"Control");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = CanvasItem::is_class((CanvasItem *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00116b2b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDShaderSyntaxHighlighter::is_class(String const&) const */

undefined8 __thiscall
GDShaderSyntaxHighlighter::is_class(GDShaderSyntaxHighlighter *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00116c7b;
  }
  cVar5 = String::operator==(param_1,"GDShaderSyntaxHighlighter");
  if (cVar5 == '\0') {
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
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_00116c7b;
    }
    cVar5 = String::operator==(param_1,"CodeHighlighter");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = SyntaxHighlighter::is_class((SyntaxHighlighter *)this,param_1);
        return uVar6;
      }
      goto LAB_00116d7e;
    }
  }
LAB_00116c7b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00116d7e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SyntaxHighlighter::_initialize_classv() */

void SyntaxHighlighter::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      Resource::initialize_class();
    }
    local_58 = 0;
    local_40 = 8;
    local_48 = "Resource";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "SyntaxHighlighter";
    local_60 = 0;
    local_40 = 0x11;
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
    if ((code *)PTR__bind_methods_0012b070 != Resource::_bind_methods) {
      SyntaxHighlighter::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<ScriptLanguage::CodeCompletionOption, DefaultAllocator>::~List() */

undefined8 __thiscall
List<ScriptLanguage::CodeCompletionOption,DefaultAllocator>::~List
          (List<ScriptLanguage::CodeCompletionOption,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uStack_28;
  
  puVar7 = *(undefined8 **)this;
  if (puVar7 == (undefined8 *)0x0) {
    return uStack_28;
  }
  do {
    pvVar2 = (void *)*puVar7;
    if (pvVar2 == (void *)0x0) {
      if (*(int *)(puVar7 + 2) != 0) {
        uVar6 = _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
        return uVar6;
      }
      break;
    }
    if (*(undefined8 **)((long)pvVar2 + 0x90) == puVar7) {
      *puVar7 = *(undefined8 *)((long)pvVar2 + 0x80);
      if (pvVar2 == (void *)puVar7[1]) {
        puVar7[1] = *(undefined8 *)((long)pvVar2 + 0x88);
      }
      if (*(long *)((long)pvVar2 + 0x88) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar2 + 0x88) + 0x80) =
             *(undefined8 *)((long)pvVar2 + 0x80);
      }
      if (*(long *)((long)pvVar2 + 0x80) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar2 + 0x80) + 0x88) =
             *(undefined8 *)((long)pvVar2 + 0x88);
      }
      Array::~Array((Array *)((long)pvVar2 + 0x78));
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x70));
      if (*(long *)((long)pvVar2 + 0x60) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x60) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *(long *)((long)pvVar2 + 0x60);
          *(undefined8 *)((long)pvVar2 + 0x60) = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if (*(long *)((long)pvVar2 + 0x50) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x50) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *(long *)((long)pvVar2 + 0x50);
          *(undefined8 *)((long)pvVar2 + 0x50) = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if (Variant::needs_deinit[*(int *)((long)pvVar2 + 0x30)] != '\0') {
        Variant::_clear_internal();
      }
      if (*(long *)((long)pvVar2 + 0x28) != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar4 = *(Object **)((long)pvVar2 + 0x28);
          cVar5 = predelete_handler(pOVar4);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x10));
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 8));
      Memory::free_static(pvVar2,false);
      *(int *)(puVar7 + 2) = *(int *)(puVar7 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar7 = *(undefined8 **)this;
  } while (*(int *)(puVar7 + 2) != 0);
  uVar6 = Memory::free_static(puVar7,false);
  return uVar6;
}



/* ShaderEditor::_initialize_classv() */

void ShaderEditor::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Control::initialize_class()::initialized == '\0') {
      if (CanvasItem::initialize_class()::initialized == '\0') {
        if (Node::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Object");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Node");
          StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((code *)PTR__bind_methods_0012b008 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Node");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"CanvasItem");
        StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
        if ((StringName::configured != '\0') && (local_68 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        CanvasItem::_bind_methods();
        if ((code *)PTR__bind_compatibility_methods_0012b078 != Object::_bind_compatibility_methods)
        {
          CanvasItem::_bind_compatibility_methods();
        }
        CanvasItem::initialize_class()::initialized = '\x01';
      }
      local_58 = "CanvasItem";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Control";
      local_70 = 0;
      local_50 = 7;
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
      if ((code *)PTR__bind_methods_0012b080 != CanvasItem::_bind_methods) {
        Control::_bind_methods();
      }
      Control::initialize_class()::initialized = '\x01';
    }
    local_58 = "Control";
    local_68 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ShaderEditor";
    local_70 = 0;
    local_50 = 0xc;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::_initialize_classv() */

void VBoxContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Object");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              local_70 = 0;
              String::parse_latin1((String *)&local_70,"Node");
              StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
              ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
              if ((StringName::configured != '\0') && (local_68 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((code *)PTR__bind_methods_0012b008 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"CanvasItem");
            StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
            ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
            if ((StringName::configured != '\0') && (local_68 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_0012b078 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"CanvasItem");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Control");
          StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Control");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Container");
        StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
        if ((StringName::configured != '\0') && (local_68 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Container");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"BoxContainer");
      StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((code *)PTR__bind_methods_0012b088 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "VBoxContainer";
    local_70 = 0;
    local_50 = 0xd;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VSplitContainer::_initialize_classv() */

void VSplitContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (SplitContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Object");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              local_70 = 0;
              String::parse_latin1((String *)&local_70,"Node");
              StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
              ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
              if ((StringName::configured != '\0') && (local_68 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((code *)PTR__bind_methods_0012b008 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"CanvasItem");
            StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
            ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
            if ((StringName::configured != '\0') && (local_68 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_0012b078 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"CanvasItem");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Control");
          StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Control");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Container");
        StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
        if ((StringName::configured != '\0') && (local_68 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Container");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"SplitContainer");
      StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((code *)PTR__bind_methods_0012b090 != Container::_bind_methods) {
        SplitContainer::_bind_methods();
      }
      SplitContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "SplitContainer";
    local_68 = 0;
    local_50 = 0xe;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "VSplitContainer";
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* HBoxContainer::_initialize_classv() */

void HBoxContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Object");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              local_70 = 0;
              String::parse_latin1((String *)&local_70,"Node");
              StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
              ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
              if ((StringName::configured != '\0') && (local_68 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((code *)PTR__bind_methods_0012b008 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"CanvasItem");
            StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
            ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
            if ((StringName::configured != '\0') && (local_68 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_0012b078 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"CanvasItem");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Control");
          StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Control");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Container");
        StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
        if ((StringName::configured != '\0') && (local_68 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Container");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"BoxContainer");
      StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((code *)PTR__bind_methods_0012b088 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "HBoxContainer";
    local_70 = 0;
    local_50 = 0xd;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 0x18);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar2) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar3 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x38));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x28) != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x20));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_001187ff;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_001187ff:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* TextShaderEditor::is_class(String const&) const */

undefined8 __thiscall TextShaderEditor::is_class(TextShaderEditor *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0011895b;
  }
  cVar5 = String::operator==(param_1,"TextShaderEditor");
  if (cVar5 == '\0') {
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
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0011895b;
    }
    cVar5 = String::operator==(param_1,"ShaderEditor");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Control::is_class((Control *)this,param_1);
        return uVar6;
      }
      goto LAB_00118a5e;
    }
  }
LAB_0011895b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00118a5e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderEditor::is_class(String const&) const */

undefined8 __thiscall ShaderEditor::is_class(ShaderEditor *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00118b6b;
  }
  cVar5 = String::operator==(param_1,"ShaderEditor");
  if (cVar5 == '\0') {
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
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_00118b6b;
    }
    cVar5 = String::operator==(param_1,"Control");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar6;
      }
      goto LAB_00118c6e;
    }
  }
LAB_00118b6b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00118c6e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::is_class(String const&) const */

undefined8 __thiscall BoxContainer::is_class(BoxContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00118d7b;
  }
  cVar5 = String::operator==(param_1,"BoxContainer");
  if (cVar5 == '\0') {
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
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_00118d7b;
    }
    cVar5 = String::operator==(param_1,"Container");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Control::is_class((Control *)this,param_1);
        return uVar6;
      }
      goto LAB_00118e7e;
    }
  }
LAB_00118d7b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00118e7e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_00118f8b;
  }
  cVar4 = String::operator==(param_1,"HBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00118f8b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_001190db;
  }
  cVar4 = String::operator==(param_1,"VBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001190db:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderTextEditor::is_class(String const&) const */

undefined8 __thiscall ShaderTextEditor::is_class(ShaderTextEditor *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0011923b;
  }
  cVar5 = String::operator==(param_1,"ShaderTextEditor");
  if (cVar5 == '\0') {
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
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0011923b;
    }
    cVar5 = String::operator==(param_1,"CodeTextEditor");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = VBoxContainer::is_class((VBoxContainer *)this,param_1);
        return uVar6;
      }
      goto LAB_0011933e;
    }
  }
LAB_0011923b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011933e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0011944b;
  }
  cVar5 = String::operator==(param_1,"Container");
  if (cVar5 == '\0') {
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
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0011944b;
    }
    cVar5 = String::operator==(param_1,"Control");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar6;
      }
      goto LAB_0011954e;
    }
  }
LAB_0011944b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011954e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VSplitContainer::is_class(String const&) const */

undefined8 __thiscall VSplitContainer::is_class(VSplitContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0011965b;
  }
  cVar5 = String::operator==(param_1,"VSplitContainer");
  if (cVar5 == '\0') {
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
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0011965b;
    }
    cVar5 = String::operator==(param_1,"SplitContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0011975e;
    }
  }
LAB_0011965b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011975e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*plVar4;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x40) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x30);
      lVar2 = *(long *)((long)pvVar1 + 0x38);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x30) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x30);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x38) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
      Memory::free_static(pvVar1,false);
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



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  CowData<char32_t> *local_a8;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    local_80 = 0;
    local_88 = 0;
    local_78 = "RefCounted";
    local_70 = 10;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "RefCounted";
    local_90 = 0;
    local_70 = 10;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
               &local_80);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref(local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"RefCounted",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  local_a8 = (CowData<char32_t> *)&local_70;
  local_b0 = local_58;
  local_80 = 0;
  local_88 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "Resource";
  local_90 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Resource",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    local_80 = 0;
    local_88 = 0;
    local_78 = "RefCounted";
    local_70 = 10;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "RefCounted";
    local_90 = 0;
    local_70 = 10;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
               &local_80);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref(local_b0);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref(local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"RefCounted",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SyntaxHighlighter::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
SyntaxHighlighter::_get_property_listv(SyntaxHighlighter *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "SyntaxHighlighter";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "SyntaxHighlighter";
  local_90 = 0;
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
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
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    SyntaxHighlighter::_get_property_listv((SyntaxHighlighter *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "CodeHighlighter";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "CodeHighlighter";
  local_90 = 0;
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
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



/* GDShaderSyntaxHighlighter::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
GDShaderSyntaxHighlighter::_get_property_listv
          (GDShaderSyntaxHighlighter *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    CodeHighlighter::_get_property_listv((CodeHighlighter *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GDShaderSyntaxHighlighter";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GDShaderSyntaxHighlighter";
  local_98 = 0;
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011a1c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011a1c1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"GDShaderSyntaxHighlighter",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CodeHighlighter::_get_property_listv((CodeHighlighter *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  CowData<char32_t> *local_a8;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    local_80 = 0;
    local_88 = 0;
    local_78 = "Node";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_90 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
               &local_80);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref(local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  local_a8 = local_58;
  local_b0 = (CowData<char32_t> *)&local_70;
  local_80 = 0;
  local_88 = 0;
  local_78 = "CanvasItem";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "CanvasItem";
  local_90 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_a8);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0012b098 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
  }
  if (param_2) {
    local_80 = 0;
    local_88 = 0;
    local_78 = "Node";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_90 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
               &local_80);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref(local_a8);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref(local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Control::_get_property_listv(Control *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    CanvasItem::_get_property_listv((CanvasItem *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "Control";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "Control";
  local_90 = 0;
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0012b0a0 != CanvasItem::_get_property_list) {
    Control::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::_get_property_listv((CanvasItem *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ShaderEditor::_get_property_listv(ShaderEditor *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ShaderEditor";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ShaderEditor";
  local_98 = 0;
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011aa91;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011aa91:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"ShaderEditor",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::_get_property_listv((Control *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TextShaderEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
TextShaderEditor::_get_property_listv(TextShaderEditor *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    ShaderEditor::_get_property_listv((ShaderEditor *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "TextShaderEditor";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "TextShaderEditor";
  local_98 = 0;
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011ad41;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011ad41:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"TextShaderEditor",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      ShaderEditor::_get_property_listv((ShaderEditor *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Container::_get_property_listv(Container *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Container";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Container";
  local_98 = 0;
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011aff1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011aff1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Container",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::_get_property_listv((Control *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BoxContainer::_get_property_listv(BoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BoxContainer";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BoxContainer";
  local_98 = 0;
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011b2a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011b2a1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"BoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Container::_get_property_listv((Container *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HBoxContainer::_get_property_listv(HBoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HBoxContainer";
  local_98 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011b551;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011b551:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"HBoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BoxContainer::_get_property_listv((BoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall VBoxContainer::_get_property_listv(VBoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VBoxContainer";
  local_98 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011b801;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011b801:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"VBoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BoxContainer::_get_property_listv((BoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CodeTextEditor::_get_property_listv(CodeTextEditor *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CodeTextEditor";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CodeTextEditor";
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011bab1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011bab1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CodeTextEditor",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderTextEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ShaderTextEditor::_get_property_listv(ShaderTextEditor *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    CodeTextEditor::_get_property_listv((CodeTextEditor *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "ShaderTextEditor";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "ShaderTextEditor";
  local_90 = 0;
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"ShaderTextEditor",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CodeTextEditor::_get_property_listv((CodeTextEditor *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall SplitContainer::_get_property_listv(SplitContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "SplitContainer";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SplitContainer";
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011bf31;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011bf31:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"SplitContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Container::_get_property_listv((Container *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VSplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
VSplitContainer::_get_property_listv(VSplitContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    SplitContainer::_get_property_listv((SplitContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VSplitContainer";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VSplitContainer";
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011c1e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011c1e1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"VSplitContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      SplitContainer::_get_property_listv((SplitContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<Resource>::unref() */

void __thiscall Ref<Resource>::unref(Ref<Resource> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* Ref<Shortcut>::unref() */

void __thiscall Ref<Shortcut>::unref(Ref<Shortcut> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* MethodBind* create_method_bind<TextShaderEditor, bool>(void (TextShaderEditor::*)(bool)) */

MethodBind * create_method_bind<TextShaderEditor,bool>(_func_void_bool *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00123be0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TextShaderEditor";
  local_30 = 0x10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<TextShaderEditor, Variant const&>(void
   (TextShaderEditor::*)(Variant const&)) */

MethodBind * create_method_bind<TextShaderEditor,Variant_const&>(_func_void_Variant_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Variant_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00123c40;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TextShaderEditor";
  local_30 = 0x10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* ShaderTextEditor::_initialize_classv() */

void ShaderTextEditor::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (CodeTextEditor::initialize_class()::initialized == '\0') {
      if (VBoxContainer::initialize_class()::initialized == '\0') {
        if (BoxContainer::initialize_class()::initialized == '\0') {
          if (Container::initialize_class()::initialized == '\0') {
            if (Control::initialize_class()::initialized == '\0') {
              if (CanvasItem::initialize_class()::initialized == '\0') {
                if (Node::initialize_class()::initialized == '\0') {
                  Object::initialize_class();
                  local_50 = 0;
                  String::parse_latin1((String *)&local_50,"Object");
                  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
                  local_60 = 0;
                  String::parse_latin1((String *)&local_60,"Node");
                  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
                  ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
                  if ((StringName::configured != '\0') && (local_58 != 0)) {
                    StringName::unref();
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
                  if ((StringName::configured != '\0') && (local_48 != 0)) {
                    StringName::unref();
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
                  if ((code *)PTR__bind_methods_0012b008 != Node::_bind_methods) {
                    Node::_bind_methods();
                  }
                  Node::initialize_class()::initialized = '\x01';
                }
                local_50 = 0;
                String::parse_latin1((String *)&local_50,"Node");
                StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
                local_60 = 0;
                String::parse_latin1((String *)&local_60,"CanvasItem");
                StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
                ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
                if ((StringName::configured != '\0') && (local_58 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
                if ((StringName::configured != '\0') && (local_48 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
                CanvasItem::_bind_methods();
                if ((code *)PTR__bind_compatibility_methods_0012b078 !=
                    Object::_bind_compatibility_methods) {
                  CanvasItem::_bind_compatibility_methods();
                }
                CanvasItem::initialize_class()::initialized = '\x01';
              }
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"CanvasItem");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Control");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              Control::_bind_methods();
              Control::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Control");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Container");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            Container::_bind_methods();
            Container::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"Container");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"BoxContainer");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          BoxContainer::_bind_methods();
          BoxContainer::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"BoxContainer");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"VBoxContainer");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        VBoxContainer::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"VBoxContainer");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"CodeTextEditor");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_0012b0a8 != BoxContainer::_bind_methods) {
        CodeTextEditor::_bind_methods();
      }
      CodeTextEditor::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"CodeTextEditor");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"ShaderTextEditor");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ShaderTextEditor::~ShaderTextEditor() */

void __thiscall ShaderTextEditor::~ShaderTextEditor(ShaderTextEditor *this)

{
  void *pvVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  
  plVar6 = *(long **)(this + 0xb58);
  *(undefined ***)this = &PTR__initialize_classv_00122e78;
  if (plVar6 != (long *)0x0) {
    do {
      pvVar1 = (void *)*plVar6;
      if (pvVar1 == (void *)0x0) {
        if ((int)plVar6[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_0011ced9;
        }
        break;
      }
      if (*(long **)((long)pvVar1 + 0x30) == plVar6) {
        lVar5 = *(long *)((long)pvVar1 + 0x20);
        lVar2 = *(long *)((long)pvVar1 + 0x28);
        *plVar6 = lVar5;
        if (pvVar1 == (void *)plVar6[1]) {
          plVar6[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x20) = lVar5;
          lVar5 = *(long *)((long)pvVar1 + 0x20);
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x28) = lVar2;
        }
        CowData<Variant>::_unref((CowData<Variant> *)((long)pvVar1 + 0x18));
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 8) != 0)) {
          StringName::unref();
        }
        Memory::free_static(pvVar1,false);
        *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar6 = *(long **)(this + 0xb58);
    } while ((int)plVar6[2] != 0);
    Memory::free_static(plVar6,false);
  }
LAB_0011ced9:
  if (*(long *)(this + 0xb50) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xb50);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xb48) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xb48);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xb38) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xb38);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(code **)this = Memory::realloc_static;
  Dictionary::~Dictionary((Dictionary *)(this + 0xaa8));
  bVar7 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar7) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011cf82;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011cf82:
  Control::~Control((Control *)this);
  return;
}



/* ShaderTextEditor::~ShaderTextEditor() */

void __thiscall ShaderTextEditor::~ShaderTextEditor(ShaderTextEditor *this)

{
  void *pvVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  
  plVar6 = *(long **)(this + 0xb58);
  *(undefined ***)this = &PTR__initialize_classv_00122e78;
  if (plVar6 != (long *)0x0) {
    do {
      pvVar1 = (void *)*plVar6;
      if (pvVar1 == (void *)0x0) {
        if ((int)plVar6[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_0011d179;
        }
        break;
      }
      if (*(long **)((long)pvVar1 + 0x30) == plVar6) {
        lVar5 = *(long *)((long)pvVar1 + 0x20);
        lVar2 = *(long *)((long)pvVar1 + 0x28);
        *plVar6 = lVar5;
        if (pvVar1 == (void *)plVar6[1]) {
          plVar6[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x20) = lVar5;
          lVar5 = *(long *)((long)pvVar1 + 0x20);
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x28) = lVar2;
        }
        CowData<Variant>::_unref((CowData<Variant> *)((long)pvVar1 + 0x18));
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 8) != 0)) {
          StringName::unref();
        }
        Memory::free_static(pvVar1,false);
        *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar6 = *(long **)(this + 0xb58);
    } while ((int)plVar6[2] != 0);
    Memory::free_static(plVar6,false);
  }
LAB_0011d179:
  if (*(long *)(this + 0xb50) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xb50);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xb48) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xb48);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xb38) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xb38);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(code **)this = Memory::realloc_static;
  Dictionary::~Dictionary((Dictionary *)(this + 0xaa8));
  bVar7 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar7) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011d222;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011d222:
  Control::~Control((Control *)this);
  operator_delete(this,0xb70);
  return;
}



/* CowData<StringName>::_unref() */

void __thiscall CowData<StringName>::_unref(CowData<StringName> *this)

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
          plVar4 = plVar4 + 1;
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



/* TextShaderEditor::_initialize_classv() */

void TextShaderEditor::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (ShaderEditor::initialize_class()::initialized == '\0') {
      if (Control::initialize_class()::initialized == '\0') {
        if (CanvasItem::initialize_class()::initialized == '\0') {
          if (Node::initialize_class()::initialized == '\0') {
            Object::initialize_class();
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Object");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"Node");
            StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
            ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
            if ((StringName::configured != '\0') && (local_68 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((code *)PTR__bind_methods_0012b008 != Node::_bind_methods) {
              Node::_bind_methods();
            }
            Node::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Node");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"CanvasItem");
          StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          CanvasItem::_bind_methods();
          if ((code *)PTR__bind_compatibility_methods_0012b078 !=
              Object::_bind_compatibility_methods) {
            CanvasItem::_bind_compatibility_methods();
          }
          CanvasItem::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"CanvasItem");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Control");
        StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
        if ((StringName::configured != '\0') && (local_68 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((code *)PTR__bind_methods_0012b080 != CanvasItem::_bind_methods) {
          Control::_bind_methods();
        }
        Control::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Control");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"ShaderEditor");
      StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      ShaderEditor::initialize_class()::initialized = '\x01';
    }
    local_58 = "ShaderEditor";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "TextShaderEditor";
    local_70 = 0;
    local_50 = 0x10;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<ShaderLanguage::ModeInfo>::_unref() */

void __thiscall CowData<ShaderLanguage::ModeInfo>::_unref(CowData<ShaderLanguage::ModeInfo> *this)

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
          CowData<StringName>::_unref((CowData<StringName> *)(plVar4 + 2));
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 3;
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



/* HashMap<StringName, ShaderLanguage::FunctionInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::FunctionInfo> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
::_resize_and_rehash
          (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
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



/* CowData<Pair<int, int> >::_realloc(long) */

undefined8 __thiscall CowData<Pair<int,int>>::_realloc(CowData<Pair<int,int>> *this,long param_1)

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
/* Error CowData<Pair<int, int> >::resize<false>(long) */

undefined8 __thiscall
CowData<Pair<int,int>>::resize<false>(CowData<Pair<int,int>> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  
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
    lVar10 = 0;
    lVar3 = 0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
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
    lVar3 = lVar10 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0011df70:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar9 = uVar4 + 1;
  if (lVar9 == 0) goto LAB_0011df70;
  if (param_1 <= lVar10) {
    if ((lVar9 != lVar3) && (uVar7 = _realloc(this,lVar9), (int)uVar7 != 0)) {
      return uVar7;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar9 == lVar3) {
LAB_0011dedc:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar8[-1];
    if (param_1 <= lVar3) goto LAB_0011de70;
  }
  else {
    if (lVar10 != 0) {
      uVar7 = _realloc(this,lVar9);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_0011dedc;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar3 = 0;
  }
  puVar11 = puVar8 + param_1;
  puVar5 = puVar8 + lVar3;
  puVar6 = puVar5;
  if (((int)puVar11 - (int)puVar5 & 8U) != 0) {
    *puVar5 = 0;
    puVar6 = puVar5 + 1;
    if (puVar5 + 1 == puVar11) goto LAB_0011de70;
  }
  do {
    *puVar6 = 0;
    puVar5 = puVar6 + 2;
    puVar6[1] = 0;
    puVar6 = puVar5;
  } while (puVar5 != puVar11);
LAB_0011de70:
  puVar8[-1] = param_1;
  return 0;
}



/* CowData<Vector2i>::_realloc(long) */

undefined8 __thiscall CowData<Vector2i>::_realloc(CowData<Vector2i> *this,long param_1)

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
/* Error CowData<Vector2i>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2i>::resize<false>(CowData<Vector2i> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
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
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
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
    lVar3 = lVar8 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0011e290:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_0011e290;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar7 == lVar3) {
LAB_0011e1fc:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_0011e191;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0011e1fc;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset(puVar9 + lVar3,0,(param_1 - lVar3) * 8);
LAB_0011e191:
  puVar9[-1] = param_1;
  return 0;
}



/* HashMap<StringName, ShaderLanguage::BuiltInInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::BuiltInInfo> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
::_resize_and_rehash
          (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
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
/* HashMap<StringName, ShaderLanguage::BuiltInInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::BuiltInInfo> > >::insert(StringName const&, ShaderLanguage::BuiltInInfo const&,
   bool) */

StringName *
HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
::insert(StringName *param_1,BuiltInInfo *param_2,bool param_3)

{
  uint *puVar1;
  uint uVar2;
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
  ulong uVar21;
  long *plVar22;
  uint uVar23;
  uint uVar24;
  long *plVar25;
  long lVar26;
  undefined8 uVar27;
  void *__s_00;
  long *in_RCX;
  uint uVar28;
  int iVar29;
  undefined7 in_register_00000011;
  StringName *pSVar30;
  long lVar31;
  long lVar32;
  char in_R8B;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  ulong uVar36;
  long *plVar37;
  long in_FS_OFFSET;
  bool bVar38;
  long local_58;
  long local_50;
  long local_40;
  
  pSVar30 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar21 = (ulong)uVar23;
    uVar36 = uVar21 * 4;
    uVar34 = uVar21 * 8;
    uVar27 = Memory::alloc_static(uVar36,false);
    *(undefined8 *)(param_2 + 0x10) = uVar27;
    __s_00 = (void *)Memory::alloc_static(uVar34,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar23 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar34)) && (__s_00 < (void *)((long)__s + uVar36))) {
        uVar36 = 0;
        do {
          *(undefined4 *)((long)__s + uVar36 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar36 * 8) = 0;
          uVar36 = uVar36 + 1;
        } while (uVar21 != uVar36);
      }
      else {
        memset(__s,0,uVar36);
        memset(__s_00,0,uVar34);
      }
      goto LAB_0011e590;
    }
    iVar29 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0011e6b0;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_0011e59c;
LAB_0011e6d2:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      plVar25 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011e671;
    }
    _resize_and_rehash((HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_0011e590:
    iVar29 = *(int *)(param_2 + 0x2c);
    if (iVar29 != 0) {
LAB_0011e59c:
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar36 = CONCAT44(0,uVar2);
      lVar26 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*(long *)pSVar30 == 0) {
        uVar24 = StringName::get_empty_hash();
      }
      else {
        uVar24 = *(uint *)(*(long *)pSVar30 + 0x20);
      }
      if (uVar24 == 0) {
        uVar24 = 1;
      }
      uVar35 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar24 * lVar26;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar36;
      lVar31 = SUB168(auVar5 * auVar13,8);
      uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar31 * 4);
      uVar28 = SUB164(auVar5 * auVar13,8);
      if (uVar33 != 0) {
        do {
          if ((uVar24 == uVar33) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar31 * 8) + 0x10) == *(long *)pSVar30))
          {
            plVar25 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar28 * 8);
            *(int *)(plVar25 + 3) = (int)*in_RCX;
            *(undefined1 *)((long)plVar25 + 0x1c) = *(undefined1 *)((long)in_RCX + 4);
            goto LAB_0011e671;
          }
          uVar35 = uVar35 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar28 + 1) * lVar26;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar36;
          lVar31 = SUB168(auVar6 * auVar14,8);
          uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar31 * 4);
          uVar28 = SUB164(auVar6 * auVar14,8);
        } while ((uVar33 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar33 * lVar26, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar36, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar2 + uVar28) - SUB164(auVar7 * auVar15,8)) * lVar26,
                auVar16._8_8_ = 0, auVar16._0_8_ = uVar36, uVar35 <= SUB164(auVar8 * auVar16,8)));
      }
      iVar29 = *(int *)(param_2 + 0x2c);
    }
LAB_0011e6b0:
    if ((float)uVar23 * __LC38 < (float)(iVar29 + 1)) goto LAB_0011e6d2;
  }
  StringName::StringName((StringName *)&local_58,pSVar30);
  local_50 = *in_RCX;
  plVar25 = (long *)operator_new(0x20,"");
  *plVar25 = 0;
  plVar25[1] = 0;
  StringName::StringName((StringName *)(plVar25 + 2),(StringName *)&local_58);
  bVar38 = StringName::configured != '\0';
  plVar25[3] = local_50;
  if ((bVar38) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar3 = *(undefined8 **)(param_2 + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = plVar25;
    *(long **)(param_2 + 0x20) = plVar25;
LAB_0011e77e:
    lVar26 = *(long *)pSVar30;
    if (lVar26 != 0) goto LAB_0011e78b;
LAB_0011e898:
    uVar23 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B != '\0') {
      lVar26 = *(long *)(param_2 + 0x18);
      *(long **)(lVar26 + 8) = plVar25;
      *plVar25 = lVar26;
      *(long **)(param_2 + 0x18) = plVar25;
      goto LAB_0011e77e;
    }
    *puVar3 = plVar25;
    plVar25[1] = (long)puVar3;
    lVar26 = *(long *)pSVar30;
    *(long **)(param_2 + 0x20) = plVar25;
    if (lVar26 == 0) goto LAB_0011e898;
LAB_0011e78b:
    uVar23 = *(uint *)(lVar26 + 0x20);
  }
  lVar26 = *(long *)(param_2 + 0x10);
  if (uVar23 == 0) {
    uVar23 = 1;
  }
  uVar36 = (ulong)uVar23;
  uVar33 = 0;
  lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar34 = CONCAT44(0,uVar2);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar36 * lVar31;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar34;
  lVar32 = SUB168(auVar9 * auVar17,8);
  lVar4 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar26 + lVar32 * 4);
  iVar29 = SUB164(auVar9 * auVar17,8);
  uVar24 = *puVar1;
  plVar22 = plVar25;
  while (uVar24 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar24 * lVar31;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar34;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar2 + iVar29) - SUB164(auVar10 * auVar18,8)) * lVar31;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar34;
    uVar23 = SUB164(auVar11 * auVar19,8);
    plVar37 = plVar22;
    if (uVar23 < uVar33) {
      *puVar1 = (uint)uVar36;
      uVar36 = (ulong)uVar24;
      puVar3 = (undefined8 *)(lVar4 + lVar32 * 8);
      plVar37 = (long *)*puVar3;
      *puVar3 = plVar22;
      uVar33 = uVar23;
    }
    uVar23 = (uint)uVar36;
    uVar33 = uVar33 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar29 + 1) * lVar31;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar34;
    lVar32 = SUB168(auVar12 * auVar20,8);
    puVar1 = (uint *)(lVar26 + lVar32 * 4);
    iVar29 = SUB164(auVar12 * auVar20,8);
    plVar22 = plVar37;
    uVar24 = *puVar1;
  }
  *(long **)(lVar4 + lVar32 * 8) = plVar22;
  *puVar1 = uVar23;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0011e671:
  *(long **)param_1 = plVar25;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<StringName, ShaderLanguage::StageFunctionInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::StageFunctionInfo> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
::_resize_and_rehash
          (HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
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



/* CowData<ShaderLanguage::StageFunctionInfo::Argument>::_unref() */

void __thiscall
CowData<ShaderLanguage::StageFunctionInfo::Argument>::_unref
          (CowData<ShaderLanguage::StageFunctionInfo::Argument> *this)

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
          plVar4 = plVar4 + 2;
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



/* CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref(CowData<ShaderLanguage::StageFunctionInfo::Argument>
   const&) [clone .part.0] */

void __thiscall
CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref
          (CowData<ShaderLanguage::StageFunctionInfo::Argument> *this,CowData *param_1)

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



/* KeyValue<StringName, ShaderLanguage::FunctionInfo>::~KeyValue() */

void __thiscall
KeyValue<StringName,ShaderLanguage::FunctionInfo>::~KeyValue
          (KeyValue<StringName,ShaderLanguage::FunctionInfo> *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  
  pvVar3 = *(void **)(this + 0x40);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 100) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x60) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 100) = 0;
        *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x48) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x48) + lVar2) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x30));
            CowData<ShaderLanguage::StageFunctionInfo::Argument>::_unref
                      ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)((long)pvVar3 + 0x20)
                      );
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x40);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while ((ulong)uVar1 << 2 != lVar2);
        *(undefined4 *)(this + 100) = 0;
        *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0011edd2;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x48),false);
  }
LAB_0011edd2:
  pvVar3 = *(void **)(this + 0x10);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x34) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x34) = 0;
        *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x18) + lVar2) != 0) {
            bVar4 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0x18) + lVar2) = 0;
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            if ((bVar4) && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x10);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x34) = 0;
        *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0011ee7a;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x18),false);
  }
LAB_0011ee7a:
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* ShaderLanguage::ShaderCompileInfo::~ShaderCompileInfo() */

void __thiscall ShaderLanguage::ShaderCompileInfo::~ShaderCompileInfo(ShaderCompileInfo *this)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(this + 0x58);
  if (pvVar4 != (void *)0x0) {
    if ((*(int *)(this + 0x7c) != 0) &&
       ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x78) * 4) == 0 ||
        (memset(*(void **)(this + 0x70),0,
                (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x78) * 4) << 2),
        *(int *)(this + 0x7c) != 0)))) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 * 8;
        lVar3 = lVar3 + 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + lVar1));
        pvVar4 = *(void **)(this + 0x58);
      } while ((uint)lVar3 < *(uint *)(this + 0x7c));
      *(undefined4 *)(this + 0x7c) = 0;
      if (pvVar4 == (void *)0x0) goto LAB_0011ef8e;
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0x68),false);
    Memory::free_static(*(void **)(this + 0x60),false);
    Memory::free_static(*(void **)(this + 0x70),false);
  }
LAB_0011ef8e:
  if ((((StringName::configured != '\0') &&
       ((*(long *)(this + 0x50) == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((*(long *)(this + 0x48) == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (*(long *)(this + 0x40) != 0)) {
    StringName::unref();
  }
  CowData<ShaderLanguage::ModeInfo>::_unref((CowData<ShaderLanguage::ModeInfo> *)(this + 0x38));
  pvVar4 = *(void **)(this + 8);
  if (pvVar4 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar2 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar3 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar3) != 0) {
          pvVar4 = *(void **)((long)pvVar4 + lVar3 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar3) = 0;
          KeyValue<StringName,ShaderLanguage::FunctionInfo>::~KeyValue
                    ((KeyValue<StringName,ShaderLanguage::FunctionInfo> *)((long)pvVar4 + 0x10));
          Memory::free_static(pvVar4,false);
          pvVar4 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar4 + lVar3 * 2) = 0;
        }
        lVar3 = lVar3 + 4;
      } while (lVar3 != (ulong)uVar2 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar4 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar4,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, ShaderLanguage::StageFunctionInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::StageFunctionInfo> > >::insert(StringName const&,
   ShaderLanguage::StageFunctionInfo const&, bool) */

StringName *
HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
::insert(StringName *param_1,StageFunctionInfo *param_2,bool param_3)

{
  uint *puVar1;
  uint uVar2;
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
  ulong uVar21;
  long *plVar22;
  uint uVar23;
  uint uVar24;
  long *plVar25;
  long lVar26;
  undefined8 uVar27;
  void *__s_00;
  long in_RCX;
  uint uVar28;
  int iVar29;
  undefined7 in_register_00000011;
  StringName *pSVar30;
  long lVar31;
  long lVar32;
  char in_R8B;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  ulong uVar36;
  long *plVar37;
  long in_FS_OFFSET;
  long local_68 [2];
  long local_58;
  undefined4 local_50;
  long local_48;
  long local_40;
  
  pSVar30 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar21 = (ulong)uVar23;
    uVar36 = uVar21 * 4;
    uVar34 = uVar21 * 8;
    uVar27 = Memory::alloc_static(uVar36,false);
    *(undefined8 *)(param_2 + 0x10) = uVar27;
    __s_00 = (void *)Memory::alloc_static(uVar34,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar23 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar34)) && (__s_00 < (void *)((long)__s + uVar36))) {
        uVar36 = 0;
        do {
          *(undefined4 *)((long)__s + uVar36 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar36 * 8) = 0;
          uVar36 = uVar36 + 1;
        } while (uVar21 != uVar36);
      }
      else {
        memset(__s,0,uVar36);
        memset(__s_00,0,uVar34);
      }
      goto LAB_0011f130;
    }
    iVar29 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0011f258;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_0011f13c;
LAB_0011f27a:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      plVar25 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011f4a6;
    }
    _resize_and_rehash((HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_0011f130:
    iVar29 = *(int *)(param_2 + 0x2c);
    if (iVar29 != 0) {
LAB_0011f13c:
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar36 = CONCAT44(0,uVar2);
      lVar26 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*(long *)pSVar30 == 0) {
        uVar24 = StringName::get_empty_hash();
      }
      else {
        uVar24 = *(uint *)(*(long *)pSVar30 + 0x20);
      }
      if (uVar24 == 0) {
        uVar24 = 1;
      }
      uVar35 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar24 * lVar26;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar36;
      lVar31 = SUB168(auVar5 * auVar13,8);
      uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar31 * 4);
      uVar28 = SUB164(auVar5 * auVar13,8);
      if (uVar33 != 0) {
        do {
          if ((uVar24 == uVar33) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar31 * 8) + 0x10) == *(long *)pSVar30))
          {
            lVar26 = *(long *)(*(long *)(param_2 + 8) + (ulong)uVar28 * 8);
            if (*(long *)(lVar26 + 0x20) != *(long *)(in_RCX + 8)) {
              CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref
                        ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)(lVar26 + 0x20),
                         (CowData *)(in_RCX + 8));
            }
            *(undefined4 *)(lVar26 + 0x28) = *(undefined4 *)(in_RCX + 0x10);
            if (*(long *)(lVar26 + 0x30) != *(long *)(in_RCX + 0x18)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)(lVar26 + 0x30),(CowData *)(in_RCX + 0x18));
            }
            plVar25 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar28 * 8);
            goto LAB_0011f4a6;
          }
          uVar35 = uVar35 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar28 + 1) * lVar26;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar36;
          lVar31 = SUB168(auVar6 * auVar14,8);
          uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar31 * 4);
          uVar28 = SUB164(auVar6 * auVar14,8);
        } while ((uVar33 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar33 * lVar26, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar36, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar2 + uVar28) - SUB164(auVar7 * auVar15,8)) * lVar26,
                auVar16._8_8_ = 0, auVar16._0_8_ = uVar36, uVar35 <= SUB164(auVar8 * auVar16,8)));
      }
      iVar29 = *(int *)(param_2 + 0x2c);
    }
LAB_0011f258:
    if ((float)uVar23 * __LC38 < (float)(iVar29 + 1)) goto LAB_0011f27a;
  }
  StringName::StringName((StringName *)local_68,pSVar30);
  local_58 = 0;
  if (*(long *)(in_RCX + 8) != 0) {
    CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref
              ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)&local_58,
               (CowData *)(in_RCX + 8));
  }
  local_50 = *(undefined4 *)(in_RCX + 0x10);
  local_48 = 0;
  if (*(long *)(in_RCX + 0x18) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)(in_RCX + 0x18));
  }
  plVar25 = (long *)operator_new(0x38,"");
  *plVar25 = 0;
  plVar25[1] = 0;
  StringName::StringName((StringName *)(plVar25 + 2),(StringName *)local_68);
  plVar25[4] = 0;
  if (local_58 != 0) {
    CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref
              ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)(plVar25 + 4),
               (CowData *)&local_58);
  }
  plVar25[6] = 0;
  *(undefined4 *)(plVar25 + 5) = local_50;
  if (local_48 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(plVar25 + 6),(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<ShaderLanguage::StageFunctionInfo::Argument>::_unref
            ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)&local_58);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  puVar3 = *(undefined8 **)(param_2 + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = plVar25;
    *(long **)(param_2 + 0x20) = plVar25;
LAB_0011f3a8:
    lVar26 = *(long *)pSVar30;
    if (lVar26 != 0) goto LAB_0011f3b5;
LAB_0011f4fc:
    uVar23 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B == '\0') {
      *puVar3 = plVar25;
      plVar25[1] = (long)puVar3;
      *(long **)(param_2 + 0x20) = plVar25;
      goto LAB_0011f3a8;
    }
    lVar26 = *(long *)(param_2 + 0x18);
    *(long **)(lVar26 + 8) = plVar25;
    *plVar25 = lVar26;
    lVar26 = *(long *)pSVar30;
    *(long **)(param_2 + 0x18) = plVar25;
    if (lVar26 == 0) goto LAB_0011f4fc;
LAB_0011f3b5:
    uVar23 = *(uint *)(lVar26 + 0x20);
  }
  lVar26 = *(long *)(param_2 + 0x10);
  if (uVar23 == 0) {
    uVar23 = 1;
  }
  uVar36 = (ulong)uVar23;
  uVar33 = 0;
  lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar34 = CONCAT44(0,uVar2);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar36 * lVar31;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar34;
  lVar32 = SUB168(auVar9 * auVar17,8);
  lVar4 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar26 + lVar32 * 4);
  iVar29 = SUB164(auVar9 * auVar17,8);
  uVar24 = *puVar1;
  plVar22 = plVar25;
  while (uVar24 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar24 * lVar31;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar34;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((iVar29 + uVar2) - SUB164(auVar10 * auVar18,8)) * lVar31;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar34;
    uVar23 = SUB164(auVar11 * auVar19,8);
    plVar37 = plVar22;
    if (uVar23 < uVar33) {
      *puVar1 = (uint)uVar36;
      uVar36 = (ulong)uVar24;
      puVar3 = (undefined8 *)(lVar4 + lVar32 * 8);
      plVar37 = (long *)*puVar3;
      *puVar3 = plVar22;
      uVar33 = uVar23;
    }
    uVar23 = (uint)uVar36;
    uVar33 = uVar33 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar29 + 1) * lVar31;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar34;
    lVar32 = SUB168(auVar12 * auVar20,8);
    puVar1 = (uint *)(lVar26 + lVar32 * 4);
    iVar29 = SUB164(auVar12 * auVar20,8);
    plVar22 = plVar37;
    uVar24 = *puVar1;
  }
  *(long **)(lVar4 + lVar32 * 8) = plVar22;
  *puVar1 = uVar23;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0011f4a6:
  *(long **)param_1 = plVar25;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, ShaderLanguage::FunctionInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::FunctionInfo> > >::insert(StringName const&, ShaderLanguage::FunctionInfo const&,
   bool) */

StringName *
HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
::insert(StringName *param_1,FunctionInfo *param_2,bool param_3)

{
  HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
  *this;
  HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
  *this_00;
  uint *puVar1;
  ulong __n;
  undefined8 *puVar2;
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
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  undefined8 uVar25;
  void *pvVar26;
  ulong uVar27;
  int *piVar28;
  HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
  *in_RCX;
  int iVar29;
  undefined7 in_register_00000011;
  StringName *pSVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  char in_R8B;
  uint uVar34;
  uint uVar35;
  long *plVar36;
  long *plVar37;
  long in_FS_OFFSET;
  StringName local_d0 [8];
  undefined1 local_c8 [16];
  StringName local_b8 [8];
  BuiltInInfo local_b0 [8];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  StageFunctionInfo local_80 [8];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined2 local_50;
  long local_40;
  
  pSVar30 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar22 = (ulong)uVar21;
  if (*(long *)(param_2 + 8) == 0) {
    uVar27 = uVar22 * 4;
    __n = uVar22 * 8;
    uVar25 = Memory::alloc_static(uVar27,false);
    *(undefined8 *)(param_2 + 0x10) = uVar25;
    pvVar26 = (void *)Memory::alloc_static(__n,false);
    *(void **)(param_2 + 8) = pvVar26;
    if (uVar21 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)pvVar26 + __n)) && (pvVar26 < (void *)((long)__s + uVar27))) {
        uVar27 = 0;
        do {
          *(undefined4 *)((long)__s + uVar27 * 4) = 0;
          *(undefined8 *)((long)pvVar26 + uVar27 * 8) = 0;
          uVar27 = uVar27 + 1;
        } while (uVar22 != uVar27);
      }
      else {
        memset(__s,0,uVar27);
        memset(pvVar26,0,__n);
      }
      goto LAB_0011f6db;
    }
    iVar29 = *(int *)(param_2 + 0x2c);
    if (pvVar26 == (void *)0x0) goto LAB_0011f97b;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_0011f6eb;
LAB_0011f99d:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      plVar23 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011fe47;
    }
    _resize_and_rehash((HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_0011f6db:
    iVar29 = *(int *)(param_2 + 0x2c);
    if (iVar29 != 0) {
LAB_0011f6eb:
      uVar21 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar27 = CONCAT44(0,uVar21);
      lVar24 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*(long *)pSVar30 == 0) {
        uVar20 = StringName::get_empty_hash();
      }
      else {
        uVar20 = *(uint *)(*(long *)pSVar30 + 0x20);
      }
      if (uVar20 == 0) {
        uVar20 = 1;
      }
      uVar35 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar20 * lVar24;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar27;
      lVar31 = SUB168(auVar4 * auVar12,8);
      uVar34 = SUB164(auVar4 * auVar12,8);
      uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar31 * 4);
      if (uVar33 != 0) {
        do {
          if ((uVar33 == uVar20) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar31 * 8) + 0x10) == *(long *)pSVar30))
          {
            lVar24 = *(long *)(*(long *)(param_2 + 8) + (ulong)uVar34 * 8);
            this = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
                    *)(lVar24 + 0x18);
            if (in_RCX != this) {
              uVar21 = *(uint *)(lVar24 + 0x40);
              uVar20 = *(uint *)(hash_table_size_primes + (ulong)uVar21 * 4);
              if ((*(int *)(lVar24 + 0x44) != 0) && (*(long *)(lVar24 + 0x20) != 0)) {
                if (uVar20 != 0) {
                  lVar31 = 0;
                  do {
                    piVar28 = (int *)(*(long *)(lVar24 + 0x28) + lVar31);
                    if (*piVar28 != 0) {
                      *piVar28 = 0;
                      pvVar26 = *(void **)(*(long *)(lVar24 + 0x20) + lVar31 * 2);
                      if ((StringName::configured != '\0') && (*(long *)((long)pvVar26 + 0x10) != 0)
                         ) {
                        StringName::unref();
                      }
                      Memory::free_static(pvVar26,false);
                      *(undefined8 *)(*(long *)(lVar24 + 0x20) + lVar31 * 2) = 0;
                    }
                    lVar31 = lVar31 + 4;
                  } while ((ulong)uVar20 * 4 - lVar31 != 0);
                  uVar21 = *(uint *)(lVar24 + 0x40);
                  uVar20 = *(uint *)(hash_table_size_primes + (ulong)uVar21 * 4);
                }
                *(undefined4 *)(lVar24 + 0x44) = 0;
                *(undefined1 (*) [16])(lVar24 + 0x30) = (undefined1  [16])0x0;
              }
              if (uVar20 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RCX + 0x28) * 4))
              {
                if (uVar21 != 0x1c) {
                  uVar22 = (ulong)uVar21;
                  do {
                    uVar20 = (int)uVar22 + 1;
                    uVar22 = (ulong)uVar20;
                    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RCX + 0x28) * 4) <=
                        *(uint *)(hash_table_size_primes + uVar22 * 4)) {
                      if (uVar20 != uVar21) {
                        if (*(long *)(lVar24 + 0x20) == 0) {
                          *(uint *)(lVar24 + 0x40) = uVar20;
                        }
                        else {
                          HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
                          ::_resize_and_rehash(this,uVar20);
                        }
                      }
                      goto LAB_0011f853;
                    }
                  } while (uVar20 != 0x1c);
                }
                _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                                 "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true."
                                 ,0,0,0);
              }
LAB_0011f853:
              if ((*(long *)(in_RCX + 8) != 0) &&
                 (plVar23 = *(long **)(in_RCX + 0x18), plVar23 != (long *)0x0)) {
                do {
                  HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
                  ::insert((StringName *)local_c8,(BuiltInInfo *)this,(bool)((char)plVar23 + '\x10')
                          );
                  plVar23 = (long *)*plVar23;
                } while (plVar23 != (long *)0x0);
              }
            }
            this_00 = (HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
                       *)(lVar24 + 0x48);
            if (this_00 !=
                (HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
                 *)(in_RCX + 0x30)) {
              uVar21 = *(uint *)(lVar24 + 0x70);
              uVar20 = *(uint *)(hash_table_size_primes + (ulong)uVar21 * 4);
              if ((*(int *)(lVar24 + 0x74) != 0) && (*(long *)(lVar24 + 0x50) != 0)) {
                if (uVar20 != 0) {
                  lVar31 = 0;
                  do {
                    piVar28 = (int *)(*(long *)(lVar24 + 0x58) + lVar31);
                    if (*piVar28 != 0) {
                      *piVar28 = 0;
                      pvVar26 = *(void **)(*(long *)(lVar24 + 0x50) + lVar31 * 2);
                      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar26 + 0x30));
                      CowData<ShaderLanguage::StageFunctionInfo::Argument>::_unref
                                ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)
                                 ((long)pvVar26 + 0x20));
                      if ((StringName::configured != '\0') && (*(long *)((long)pvVar26 + 0x10) != 0)
                         ) {
                        StringName::unref();
                      }
                      Memory::free_static(pvVar26,false);
                      *(undefined8 *)(*(long *)(lVar24 + 0x50) + lVar31 * 2) = 0;
                    }
                    lVar31 = lVar31 + 4;
                  } while (lVar31 != (ulong)uVar20 * 4);
                  uVar21 = *(uint *)(lVar24 + 0x70);
                  uVar20 = *(uint *)(hash_table_size_primes + (ulong)uVar21 * 4);
                }
                *(undefined4 *)(lVar24 + 0x74) = 0;
                *(undefined1 (*) [16])(lVar24 + 0x60) = (undefined1  [16])0x0;
              }
              if (uVar20 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RCX + 0x58) * 4))
              {
                if (uVar21 != 0x1c) {
                  uVar22 = (ulong)uVar21;
                  do {
                    uVar20 = (int)uVar22 + 1;
                    uVar22 = (ulong)uVar20;
                    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RCX + 0x58) * 4) <=
                        *(uint *)(hash_table_size_primes + uVar22 * 4)) {
                      if (uVar20 != uVar21) {
                        if (*(long *)(lVar24 + 0x50) == 0) {
                          *(uint *)(lVar24 + 0x70) = uVar20;
                        }
                        else {
                          HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
                          ::_resize_and_rehash(this_00,uVar20);
                        }
                      }
                      goto LAB_0011f912;
                    }
                  } while (uVar20 != 0x1c);
                }
                _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                                 "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true."
                                 ,0,0,0);
              }
LAB_0011f912:
              if ((*(long *)(in_RCX + 0x38) != 0) &&
                 (plVar23 = *(long **)(in_RCX + 0x48), plVar23 != (long *)0x0)) {
                do {
                  HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
                  ::insert((StringName *)local_c8,(StageFunctionInfo *)this_00,
                           (bool)((char)plVar23 + '\x10'));
                  plVar23 = (long *)*plVar23;
                } while (plVar23 != (long *)0x0);
              }
            }
            lVar31 = *(long *)(param_2 + 8);
            *(undefined2 *)(lVar24 + 0x78) = *(undefined2 *)(in_RCX + 0x60);
            plVar23 = *(long **)(lVar31 + (ulong)uVar34 * 8);
            goto LAB_0011fe47;
          }
          uVar35 = uVar35 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar34 + 1) * lVar24;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar27;
          lVar31 = SUB168(auVar5 * auVar13,8);
          uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar31 * 4);
          uVar34 = SUB164(auVar5 * auVar13,8);
        } while ((uVar33 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar33 * lVar24, auVar14._8_8_ = 0,
                auVar14._0_8_ = uVar27, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar21 + uVar34) - SUB164(auVar6 * auVar14,8)) * lVar24,
                auVar15._8_8_ = 0, auVar15._0_8_ = uVar27, uVar35 <= SUB164(auVar7 * auVar15,8)));
      }
      iVar29 = *(int *)(param_2 + 0x2c);
    }
LAB_0011f97b:
    if ((float)uVar22 * __LC38 < (float)(iVar29 + 1)) goto LAB_0011f99d;
  }
  local_c8 = (undefined1  [16])0x0;
  StringName::StringName(local_b8,pSVar30);
  local_88 = 0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  uVar22 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RCX + 0x28) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RCX + 0x28) * 4) <=
          *(uint *)(hash_table_size_primes + uVar22 * 4)) {
        local_88 = uVar22 & 0xffffffff;
        iVar29 = *(int *)(in_RCX + 0x2c);
        goto joined_r0x0011ff31;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
  iVar29 = *(int *)(in_RCX + 0x2c);
joined_r0x0011ff31:
  if ((iVar29 != 0) && (plVar23 = *(long **)(in_RCX + 0x18), plVar23 != (long *)0x0)) {
    do {
      HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
      ::insert(local_d0,local_b0,(bool)((char)plVar23 + '\x10'));
      plVar23 = (long *)*plVar23;
    } while (plVar23 != (long *)0x0);
  }
  local_58 = 0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  uVar22 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RCX + 0x58) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RCX + 0x58) * 4) <=
          *(uint *)(hash_table_size_primes + uVar22 * 4)) {
        local_58 = uVar22 & 0xffffffff;
        iVar29 = *(int *)(in_RCX + 0x5c);
        goto joined_r0x0011fecb;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
  iVar29 = *(int *)(in_RCX + 0x5c);
joined_r0x0011fecb:
  if ((iVar29 != 0) && (plVar23 = *(long **)(in_RCX + 0x48), plVar23 != (long *)0x0)) {
    do {
      HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
      ::insert(local_d0,local_80,(bool)((char)plVar23 + '\x10'));
      plVar23 = (long *)*plVar23;
    } while (plVar23 != (long *)0x0);
  }
  local_50 = *(undefined2 *)(in_RCX + 0x60);
  plVar23 = (long *)operator_new(0x80,"");
  *plVar23 = local_c8._0_8_;
  plVar23[1] = local_c8._8_8_;
  StringName::StringName((StringName *)(plVar23 + 2),local_b8);
  plVar23[8] = 0;
  *(undefined1 (*) [16])(plVar23 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(plVar23 + 6) = (undefined1  [16])0x0;
  lVar24 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (local_88 & 0xffffffff) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (local_88 & 0xffffffff) * 4) <=
          *(uint *)(hash_table_size_primes + lVar24 * 4)) {
        *(int *)(plVar23 + 8) = (int)lVar24;
        goto joined_r0x0011feec;
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
joined_r0x0011feec:
  if ((local_88._4_4_ != 0) && ((long *)local_98._0_8_ != (long *)0x0)) {
    plVar37 = (long *)local_98._0_8_;
    do {
      HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
      ::insert(local_d0,(BuiltInInfo *)(plVar23 + 3),(bool)((char)plVar37 + '\x10'));
      plVar37 = (long *)*plVar37;
    } while (plVar37 != (long *)0x0);
  }
  plVar23[0xe] = 0;
  *(undefined1 (*) [16])(plVar23 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(plVar23 + 0xc) = (undefined1  [16])0x0;
  lVar24 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (local_58 & 0xffffffff) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (local_58 & 0xffffffff) * 4) <=
          *(uint *)(hash_table_size_primes + lVar24 * 4)) {
        *(int *)(plVar23 + 0xe) = (int)lVar24;
        goto joined_r0x0011ff0c;
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
joined_r0x0011ff0c:
  if ((local_58._4_4_ != 0) && ((long *)local_68._0_8_ != (long *)0x0)) {
    plVar37 = (long *)local_68._0_8_;
    do {
      HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
      ::insert(local_d0,(StageFunctionInfo *)(plVar23 + 9),(bool)((char)plVar37 + '\x10'));
      plVar37 = (long *)*plVar37;
    } while (plVar37 != (long *)0x0);
  }
  *(undefined2 *)(plVar23 + 0xf) = local_50;
  KeyValue<StringName,ShaderLanguage::FunctionInfo>::~KeyValue
            ((KeyValue<StringName,ShaderLanguage::FunctionInfo> *)local_b8);
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = plVar23;
    *(long **)(param_2 + 0x20) = plVar23;
LAB_0011fd47:
    lVar24 = *(long *)pSVar30;
    if (lVar24 != 0) goto LAB_0011fd58;
LAB_0011fea5:
    uVar21 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B == '\0') {
      *puVar2 = plVar23;
      plVar23[1] = (long)puVar2;
      *(long **)(param_2 + 0x20) = plVar23;
      goto LAB_0011fd47;
    }
    lVar24 = *(long *)(param_2 + 0x18);
    *(long **)(lVar24 + 8) = plVar23;
    *plVar23 = lVar24;
    *(long **)(param_2 + 0x18) = plVar23;
    lVar24 = *(long *)pSVar30;
    if (lVar24 == 0) goto LAB_0011fea5;
LAB_0011fd58:
    uVar21 = *(uint *)(lVar24 + 0x20);
  }
  if (uVar21 == 0) {
    uVar21 = 1;
  }
  uVar22 = (ulong)uVar21;
  uVar34 = 0;
  lVar24 = *(long *)(param_2 + 0x10);
  lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar20 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar27 = CONCAT44(0,uVar20);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar22 * lVar31;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar27;
  lVar32 = SUB168(auVar8 * auVar16,8);
  lVar3 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar24 + lVar32 * 4);
  iVar29 = SUB164(auVar8 * auVar16,8);
  uVar33 = *puVar1;
  plVar37 = plVar23;
  while (uVar33 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar33 * lVar31;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar27;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((iVar29 + uVar20) - SUB164(auVar9 * auVar17,8)) * lVar31;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar27;
    uVar21 = SUB164(auVar10 * auVar18,8);
    plVar36 = plVar37;
    if (uVar21 < uVar34) {
      *puVar1 = (uint)uVar22;
      uVar22 = (ulong)uVar33;
      puVar2 = (undefined8 *)(lVar3 + lVar32 * 8);
      plVar36 = (long *)*puVar2;
      *puVar2 = plVar37;
      uVar34 = uVar21;
    }
    uVar21 = (uint)uVar22;
    uVar34 = uVar34 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar29 + 1) * lVar31;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar27;
    lVar32 = SUB168(auVar11 * auVar19,8);
    puVar1 = (uint *)(lVar24 + lVar32 * 4);
    iVar29 = SUB164(auVar11 * auVar19,8);
    plVar37 = plVar36;
    uVar33 = *puVar1;
  }
  *(long **)(lVar3 + lVar32 * 8) = plVar37;
  *puVar1 = uVar21;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0011fe47:
  *(long **)param_1 = plVar23;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00120378) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c0 [8];
  undefined8 local_b8 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c0);
  iVar2 = (int)local_c0;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_b8,param_2);
  *param_1 = local_b8[0];
  local_b8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  Array::~Array(local_c0);
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



/* MethodBindT<Variant const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Variant_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_001207b1;
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
                    /* WARNING: Could not recover jumptable at 0x00120639. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(undefined8 *)param_3);
    return;
  }
LAB_001207b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Variant const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Variant_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00120991;
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
                    /* WARNING: Could not recover jumptable at 0x00120819. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00120991:
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
      goto LAB_00120b71;
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
                    /* WARNING: Could not recover jumptable at 0x001209fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00120b71:
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
      goto LAB_00120d59;
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
                    /* WARNING: Could not recover jumptable at 0x00120be2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_00120d59:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Variant const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Variant_const&>::call
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
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar8 != (long *)0x0) && (plVar8[1] != 0)) && (*(char *)(plVar8[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar8[1] == 0) {
      plVar6 = (long *)plVar8[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar8 + 0x40))(plVar8);
      }
    }
    else {
      plVar6 = (long *)(plVar8[1] + 0x20);
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
      _err_print_error(&_LC110,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00120f18;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar10 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar9 = param_2[5];
    if (pVVar9 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00120f70;
LAB_00120f60:
      pVVar9 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar9 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00120f70:
        uVar5 = 4;
        goto LAB_00120f0d;
      }
      if (in_R8D == 1) goto LAB_00120f60;
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
    Variant::Variant((Variant *)local_48,pVVar9);
    (*(code *)pVVar10)((Variant *)((long)plVar8 + (long)pVVar1),(Variant *)local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    uVar5 = 3;
LAB_00120f0d:
    *in_R9 = uVar5;
    in_R9[2] = 1;
  }
LAB_00120f18:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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
    goto LAB_0012122d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00121290;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00121290:
      uVar6 = 4;
LAB_0012122d:
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
      goto LAB_001211ab;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001211ab:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC111;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x00121207. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC110,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001212f6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var2,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001212f6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDShaderSyntaxHighlighter::_get_line_syntax_highlighting_impl(int) */

void GDShaderSyntaxHighlighter::_GLOBAL__sub_I__get_line_syntax_highlighting_impl(void)

{
  undefined8 uVar1;
  
  uVar1 = _LC33;
  if (PopupMenu::base_property_helper == '\0') {
    PopupMenu::base_property_helper._56_8_ = _LC33;
    PopupMenu::base_property_helper._64_8_ = 0;
    PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper = '\x01';
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,
                 &__dso_handle);
  }
  if (MenuButton::base_property_helper == '\0') {
    MenuButton::base_property_helper._56_8_ = uVar1;
    MenuButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper = '\x01';
    MenuButton::base_property_helper._64_8_ = 0;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,MenuButton::base_property_helper,
                 &__dso_handle);
  }
  saved_warnings._40_8_ = uVar1;
  saved_warnings._8_16_ = (undefined1  [16])0x0;
  saved_warnings._24_16_ = (undefined1  [16])0x0;
  __cxa_atexit(HashMap<ShaderWarning::Code,bool,HashMapHasherDefault,HashMapComparatorDefault<ShaderWarning::Code>,DefaultTypedAllocator<HashMapElement<ShaderWarning::Code,bool>>>
               ::~HashMap,saved_warnings,&__dso_handle);
  complete_from_path = 0;
  __cxa_atexit(String::~String,&complete_from_path,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* ShaderLanguage::ShaderCompileInfo::~ShaderCompileInfo() */

void __thiscall ShaderLanguage::ShaderCompileInfo::~ShaderCompileInfo(ShaderCompileInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* KeyValue<StringName, ShaderLanguage::FunctionInfo>::~KeyValue() */

void __thiscall
KeyValue<StringName,ShaderLanguage::FunctionInfo>::~KeyValue
          (KeyValue<StringName,ShaderLanguage::FunctionInfo> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ShaderTextEditor::~ShaderTextEditor() */

void __thiscall ShaderTextEditor::~ShaderTextEditor(ShaderTextEditor *this)

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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<ScriptLanguage::CodeCompletionOption, DefaultAllocator>::~List() */

void __thiscall
List<ScriptLanguage::CodeCompletionOption,DefaultAllocator>::~List
          (List<ScriptLanguage::CodeCompletionOption,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GDShaderSyntaxHighlighter::~GDShaderSyntaxHighlighter() */

void __thiscall
GDShaderSyntaxHighlighter::~GDShaderSyntaxHighlighter(GDShaderSyntaxHighlighter *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CodeHighlighter::~CodeHighlighter() */

void __thiscall CodeHighlighter::~CodeHighlighter(CodeHighlighter *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<ShaderPreprocessor::Region, DefaultAllocator>::~List() */

void __thiscall
List<ShaderPreprocessor::Region,DefaultAllocator>::~List
          (List<ShaderPreprocessor::Region,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<ShaderPreprocessor::FilePosition, DefaultAllocator>::~List() */

void __thiscall
List<ShaderPreprocessor::FilePosition,DefaultAllocator>::~List
          (List<ShaderPreprocessor::FilePosition,DefaultAllocator> *this)

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
/* String::~String() */

void __thiscall String::~String(String *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VSplitContainer::~VSplitContainer() */

void __thiscall VSplitContainer::~VSplitContainer(VSplitContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* TextShaderEditor::~TextShaderEditor() */

void __thiscall TextShaderEditor::~TextShaderEditor(TextShaderEditor *this)

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
/* HashMap<ShaderWarning::Code, bool, HashMapHasherDefault,
   HashMapComparatorDefault<ShaderWarning::Code>,
   DefaultTypedAllocator<HashMapElement<ShaderWarning::Code, bool> > >::~HashMap() */

void __thiscall
HashMap<ShaderWarning::Code,bool,HashMapHasherDefault,HashMapComparatorDefault<ShaderWarning::Code>,DefaultTypedAllocator<HashMapElement<ShaderWarning::Code,bool>>>
::~HashMap(HashMap<ShaderWarning::Code,bool,HashMapHasherDefault,HashMapComparatorDefault<ShaderWarning::Code>,DefaultTypedAllocator<HashMapElement<ShaderWarning::Code,bool>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Variant const&>::~MethodBindT() */

void __thiscall MethodBindT<Variant_const&>::~MethodBindT(MethodBindT<Variant_const&> *this)

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
/* CallableCustomMethodPointer<ShaderTextEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ShaderTextEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ShaderTextEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TextEdit, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextEdit,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextEdit,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TextEdit, void, double>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextEdit,void,double>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextEdit,void,double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Control,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Window, void, Vector2i const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Window,void,Vector2i_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Window,void,Vector2i_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TextShaderEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextShaderEditor,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TextShaderEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextShaderEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextShaderEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TextShaderEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextShaderEditor,void,Ref<InputEvent>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TextShaderEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextShaderEditor,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TextShaderEditor, void, Variant
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,Variant_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextShaderEditor,void,Variant_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TextShaderEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextShaderEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextShaderEditor,void,String_const&> *this)

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




/* TextEditor::add_callback(String const&, Vector<String> const&) */void TextEditor::add_callback(String *param_1, Vector *param_2) {
   return;
}
/* TextEditor::set_debugger_active(bool) */void TextEditor::set_debugger_active(bool param_1) {
   return;
}
/* TextEditor::get_base_editor() const */undefined8 TextEditor::get_base_editor(TextEditor *this) {
   return *(undefined8*)( *(long*)( this + 0xa20 ) + 0xa10 );
}
/* TextEditor::get_code_editor() const */undefined8 TextEditor::get_code_editor(TextEditor *this) {
   return *(undefined8*)( this + 0xa20 );
}
/* TextEditor::get_breakpoints() */TextEditor * __thiscall TextEditor::get_breakpoints(TextEditor *this){
   *(undefined8*)( this + 8 ) = 0;
   return this;
}
/* TextEditor::get_functions() */TextEditor * __thiscall TextEditor::get_functions(TextEditor *this){
   *(undefined8*)( this + 8 ) = 0;
   return this;
}
/* TextEditor::show_members_overview() */undefined8 TextEditor::show_members_overview(void) {
   return 1;
}
/* TextEditor::get_edit_menu() */undefined8 TextEditor::get_edit_menu(TextEditor *this) {
   return *(undefined8*)( this + 0xa38 );
}
/* TextEditor::goto_line(int, int) */void TextEditor::goto_line(int param_1, int param_2) {
   undefined4 in_register_0000003c;
   CodeTextEditor::goto_line((int)*(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0xa20 ), param_2);
   return;
}
/* TextEditor::get_edit_state() */TextEditor * __thiscall TextEditor::get_edit_state(TextEditor *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   CodeTextEditor::get_edit_state();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TextEditor::get_navigation_state() */TextEditor * __thiscall TextEditor::get_navigation_state(TextEditor *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   CodeTextEditor::get_navigation_state();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TextEditor::trim_trailing_whitespace() */void TextEditor::trim_trailing_whitespace(void) {
   CodeTextEditor::trim_trailing_whitespace();
   return;
}
/* TextEditor::trim_final_newlines() */void TextEditor::trim_final_newlines(void) {
   CodeTextEditor::trim_final_newlines();
   return;
}
/* TextEditor::insert_final_newline() */void TextEditor::insert_final_newline(void) {
   CodeTextEditor::insert_final_newline();
   return;
}
/* TextEditor::convert_indent() */void TextEditor::convert_indent(TextEditor *this) {
   CodeEdit::convert_indent((int)*(undefined8*)( *(long*)( this + 0xa20 ) + 0xa10 ), -1);
   return;
}
/* TextEditor::tag_saved_version() */void TextEditor::tag_saved_version(TextEditor *this) {
   undefined8 uVar1;
   TextEdit::tag_saved_version();
   uVar1 = FileAccess::get_modified_time((String*)( this + 0xa10 ));
   *(undefined8*)( this + 0xa18 ) = uVar1;
   return;
}
/* TextEditor::set_executing_line(int) */void TextEditor::set_executing_line(int param_1) {
   undefined4 in_register_0000003c;
   CodeTextEditor::set_executing_line((int)*(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0xa20 ));
   return;
}
/* TextEditor::clear_executing_line() */void TextEditor::clear_executing_line(void) {
   CodeTextEditor::clear_executing_line();
   return;
}
/* TextEditor::ensure_focus() */void TextEditor::ensure_focus(void) {
   Control::grab_focus();
   return;
}
/* TextEditor::update_settings() */void TextEditor::update_settings(void) {
   CodeTextEditor::update_editor_settings();
   return;
}
/* TextEditor::set_tooltip_request_func(Callable const&) */void TextEditor::set_tooltip_request_func(TextEditor *this, Callable *param_1) {
   Callable *pCVar1;
   long in_FS_OFFSET;
   Callable aCStack_68[24];
   Variant *local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_48, (Object*)this);
   pCVar1 = *(Callable**)( *(long*)( this + 0xa20 ) + 0xa10 );
   local_50 = (Variant*)local_48;
   Callable::bindp((Variant**)aCStack_68, (int)param_1);
   TextEdit::set_tooltip_request_func(pCVar1);
   Callable::~Callable(aCStack_68);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TextEditor::set_find_replace_bar(FindReplaceBar*) */void TextEditor::set_find_replace_bar(FindReplaceBar *param_1) {
   CodeTextEditor::set_find_replace_bar(*(FindReplaceBar**)( param_1 + 0xa20 ));
   return;
}
/* TextEditor::_prepare_edit_menu() */void TextEditor::_prepare_edit_menu(void) {
   bool bVar1;
   int iVar2;
   iVar2 = MenuButton::get_popup();
   TextEdit::has_undo();
   bVar1 = (bool)PopupMenu::get_item_index(iVar2);
   PopupMenu::set_item_disabled(iVar2, bVar1);
   TextEdit::has_redo();
   bVar1 = (bool)PopupMenu::get_item_index(iVar2);
   PopupMenu::set_item_disabled(iVar2, bVar1);
   return;
}
/* TextEditor::update_toggle_scripts_button() */void TextEditor::update_toggle_scripts_button(void) {
   CodeTextEditor::update_toggle_scripts_button();
   return;
}
/* TextEditor::validate() */void TextEditor::validate(void) {
   CodeTextEditor::validate_script();
   return;
}
/* TextEditor::clear_edit_menu() */void TextEditor::clear_edit_menu(TextEditor *this) {
   Object *pOVar1;
   char cVar2;
   pOVar1 = *(Object**)( this + 0xa38 );
   cVar2 = predelete_handler(pOVar1);
   if (cVar2 != '\0') {
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
      return;
   }

   return;
}
/* Error Object::emit_signal<String>(StringName const&, String) [clone .isra.0] */void Object::emit_signal<String>(Object *this, undefined8 param_1, String *param_3) {
   char cVar1;
   long in_FS_OFFSET;
   Variant *local_68[2];
   int local_58[6];
   undefined8 local_40;
   undefined1 local_38[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, param_3);
   local_40 = 0;
   local_38 = (undefined1[16])0x0;
   local_68[0] = (Variant*)local_58;
   ( **(code**)( *(long*)this + 0xd0 ) )(this, param_1, local_68, 1);
   if (Variant::needs_deinit[(int)local_40] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* TextEditor::get_edited_resource() const */void TextEditor::get_edited_resource(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0xa28 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0xa28 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }

   }

   return;
}
/* TextEditor::_load_theme_settings() */void TextEditor::_load_theme_settings(void) {
   long lVar1;
   char cVar2;
   long in_FS_OFFSET;
   undefined8 local_18;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   TextEdit::get_syntax_highlighter();
   SyntaxHighlighter::update_cache();
   if (local_18 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_18);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)local_18 + 0x140 ) )(local_18);
            Memory::free_static(local_18, false);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TextEditor::set_syntax_highlighter(Ref<EditorSyntaxHighlighter>) */void TextEditor::set_syntax_highlighter(TextEditor *this, long *param_2) {
   long lVar1;
   bool bVar2;
   char cVar3;
   Object *pOVar4;
   long *plVar5;
   undefined8 uVar6;
   long lVar7;
   long in_FS_OFFSET;
   Object *local_28;
   lVar7 = *param_2;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar7 == 0) {
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("set_syntax_highlighter", "editor/plugins/text_editor.cpp", 0x2f, "Condition \"p_highlighter.is_null()\" is true.", 0, 0);
         return;
      }

      goto LAB_001006eb;
   }

   plVar5 = *(long**)( this + 0xa88 );
   if (plVar5 == (long*)0x0) {
      uVar6 = *(undefined8*)( *(long*)( this + 0xa20 ) + 0xa10 );
      LAB_001005f2:local_28 = (Object*)0x0;
      pOVar4 = (Object*)__dynamic_cast(lVar7, &Object::typeinfo, &SyntaxHighlighter::typeinfo, 0);
      if (pOVar4 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         local_28 = pOVar4;
         if (cVar3 == '\0') {
            local_28 = (Object*)0x0;
         }

      }

   }
 else {
      do {
         bVar2 = (bool)PopupMenu::get_item_idx_from_text(*(String**)( this + 0xa48 ));
         PopupMenu::set_item_checked((int)*(undefined8*)( this + 0xa48 ), bVar2);
         plVar5 = (long*)*plVar5;
      }
 while ( plVar5 != (long*)0x0 );
      lVar7 = *param_2;
      local_28 = (Object*)0x0;
      uVar6 = *(undefined8*)( *(long*)( this + 0xa20 ) + 0xa10 );
      if (lVar7 != 0) goto LAB_001005f2;
   }

   TextEdit::set_syntax_highlighter(uVar6);
   if (local_28 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_28);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
            Memory::free_static(local_28, false);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001006eb:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* TextEditor::goto_line_selection(int, int, int) */void TextEditor::goto_line_selection(int param_1, int param_2, int param_3) {
   undefined4 in_register_0000003c;
   CodeTextEditor::goto_line_selection((int)*(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0xa20 ), param_2, param_3);
   return;
}
/* TextEditor::_convert_case(CodeTextEditor::CaseStyle) */void TextEditor::_convert_case(long param_1) {
   CodeTextEditor::convert_case(*(undefined8*)( param_1 + 0xa20 ));
   return;
}
/* TextEditor::register_editor() */void TextEditor::register_editor(void) {
   ScriptEditor::register_create_script_editor_function(create_editor);
   return;
}
/* TextEditor::get_theme_icon() */TextEditor * __thiscall TextEditor::get_theme_icon(TextEditor *this){
   String *pSVar1;
   long in_FS_OFFSET;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   pSVar1 = EditorNode::singleton;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_48 = "TextFile";
   local_40 = 8;
   String::parse_latin1((StrRange*)&local_50);
   EditorNode::get_object_icon((Object*)this, pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TextEditor::is_unsaved() */bool TextEditor::is_unsaved(void) {
   int iVar1;
   int iVar2;
   bool bVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   bVar3 = true;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = TextEdit::get_version();
   iVar2 = TextEdit::get_saved_version();
   if (iVar1 == iVar2) {
      Resource::get_path();
      if (local_28 != 0) {
         bVar3 = *(uint*)( local_28 + -8 ) < 2;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_28);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TextEditor::set_edited_resource(Ref<Resource> const&) */void TextEditor::set_edited_resource(TextEditor *this, Ref *param_1) {
   String *pSVar1;
   char cVar2;
   int iVar3;
   Object *pOVar4;
   Object *pOVar5;
   char *pcVar6;
   undefined8 uVar7;
   long lVar8;
   Object *pOVar9;
   long in_FS_OFFSET;
   CowData<char32_t> local_60[8];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xa28 ) != 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = 100;
         pcVar6 = "Condition \"edited_res.is_valid()\" is true.";
         LAB_00100bb2:_err_print_error("set_edited_resource", "editor/plugins/text_editor.cpp", uVar7, pcVar6, 0, 0);
         return;
      }

      goto LAB_00100c0f;
   }

   if (*(long*)param_1 == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = 0x65;
         pcVar6 = "Condition \"p_res.is_null()\" is true.";
         goto LAB_00100bb2;
      }

      goto LAB_00100c0f;
   }

   *(long*)( this + 0xa28 ) = *(long*)param_1;
   cVar2 = RefCounted::reference();
   pOVar9 = (Object*)0x0;
   if (cVar2 == '\0') {
      *(undefined8*)( this + 0xa28 ) = 0;
      LAB_00100b03:pOVar4 = (Object*)0x0;
   }
 else {
      lVar8 = *(long*)( this + 0xa28 );
      if (lVar8 == 0) goto LAB_00100b03;
      pOVar4 = (Object*)__dynamic_cast(lVar8, &Object::typeinfo, &TextFile::typeinfo, 0);
      if (pOVar4 == (Object*)0x0) {
         LAB_0010094a:pOVar5 = (Object*)__dynamic_cast(lVar8, &Object::typeinfo, &JSON::typeinfo, 0);
         if (pOVar5 != (Object*)0x0) {
            cVar2 = RefCounted::reference();
            if (cVar2 != '\0') {
               pSVar1 = *(String**)( *(long*)( this + 0xa20 ) + 0xa10 );
               JSON::get_parsed_text();
               TextEdit::set_text(pSVar1);
               CowData<char32_t>::_unref(local_60);
               pOVar9 = pOVar5;
            }

         }

      }
 else {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            lVar8 = *(long*)( this + 0xa28 );
            pOVar4 = (Object*)0x0;
         }
 else {
            pSVar1 = *(String**)( *(long*)( this + 0xa20 ) + 0xa10 );
            ( **(code**)( *(long*)pOVar4 + 0x1d0 ) )(local_60, pOVar4);
            TextEdit::set_text(pSVar1);
            CowData<char32_t>::_unref(local_60);
            lVar8 = *(long*)( this + 0xa28 );
         }

         if (lVar8 != 0) goto LAB_0010094a;
      }

   }

   TextEdit::clear_undo_history();
   TextEdit::tag_saved_version();
   if (set_edited_resource(Ref<Resource>const&)::{lambda()
   #1
   iVar3 = __cxa_guard_acquire(&set_edited_resource(Ref < Resource > const & sname));
   if (iVar3 != 0) {
      _scs_create((char*)&set_edited_resource(Ref < Resource > const & ::sname, true));
      __cxa_atexit(StringName::~StringName, &set_edited_resource(Ref < Resource > const & ::sname, &__dso_handle));
      __cxa_guard_release(&set_edited_resource(Ref<Resource>const&)::{lambda()
      #1
      sname;
   }

}
local_58 = 0;local_50 = (undefined1[16])0x0;(**(code **)(*(long *)this + 0xd0))
            (this,&set_edited_resource(Ref<Resource>const&)::{lambda()#1if (Variant::needs_deinit[(int)local_58] != '\0') {
   Variant::_clear_internal();
}
CodeTextEditor::_line_col_changed();if (pOVar9 != (Object*)0x0) {
   cVar2 = RefCounted::unreference();
   if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar9);
      if (cVar2 != '\0') {
         ( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
         Memory::free_static(pOVar9, false);
      }

   }

}
if (pOVar4 != (Object*)0x0) {
   cVar2 = RefCounted::unreference();
   if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar4);
      if (cVar2 != '\0') {
         ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static(pOVar4, false);
            return;
         }

         goto LAB_00100c0f;
      }

   }

}
if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
LAB_00100c0f:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* TextEditor::apply_code() */void TextEditor::apply_code(TextEditor *this) {
   code *pcVar1;
   char cVar2;
   Object *pOVar3;
   String *pSVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   Object *local_38;
   long local_30;
   pOVar5 = *(Object**)( this + 0xa28 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pOVar3 = pOVar5;
   if (pOVar5 == (Object*)0x0) {
      LAB_00100e90:TextEdit::get_syntax_highlighter();
      SyntaxHighlighter::update_cache();
      if (( local_38 == (Object*)0x0 ) || ( cVar2 = cVar2 == '\0' )) goto LAB_00100d7c;
      pSVar4 = (String*)0x0;
      LAB_00100e58:cVar2 = predelete_handler(local_38);
      if (cVar2 != '\0') {
         ( **(code**)( *(long*)local_38 + 0x140 ) )(local_38);
         Memory::free_static(local_38, false);
      }

   }
 else {
      pOVar3 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &TextFile::typeinfo, 0);
      if (pOVar3 != (Object*)0x0) {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            pOVar5 = *(Object**)( this + 0xa28 );
            pOVar3 = (Object*)0x0;
         }
 else {
            pcVar1 = *(code**)( *(long*)pOVar3 + 0x1d8 );
            TextEdit::get_text();
            ( *pcVar1 )(pOVar3, &local_38);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
            pOVar5 = *(Object**)( this + 0xa28 );
         }

         if (pOVar5 == (Object*)0x0) goto LAB_00100e90;
      }

      pSVar4 = (String*)__dynamic_cast(pOVar5, &Object::typeinfo, &JSON::typeinfo, 0);
      if (( pSVar4 == (String*)0x0 ) || ( cVar2 = cVar2 == '\0' )) {
         pSVar4 = (String*)0x0;
      }
 else {
         TextEdit::get_text();
         JSON::parse(pSVar4, SUB81(&local_38, 0));
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
      }

      TextEdit::get_syntax_highlighter();
      SyntaxHighlighter::update_cache();
      if (( local_38 != (Object*)0x0 ) && ( cVar2 = cVar2 != '\0' )) goto LAB_00100e58;
   }

   if (( ( pSVar4 != (String*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pSVar4 + 0x140 ))(pSVar4);
   Memory::free_static(pSVar4, false);
}
LAB_00100d7c:if (( ( pOVar3 == (Object*)0x0 ) || ( cVar2 = RefCounted::unreference() ),cVar2 == '\0' )) {
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

}
 else {
   ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Memory::free_static(pOVar3, false);
      return;
   }

}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   _unref(this);
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
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
      }
 while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }

   }

   return;
}
/* TextEditor::_edit_option(int) */void TextEditor::_edit_option(TextEditor *this, int param_1) {
   int iVar1;
   code *UNRECOVERED_JUMPTABLE;
   undefined1 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   char *pcVar5;
   undefined1 *puVar6;
   long in_FS_OFFSET;
   CowData local_50[8];
   undefined8 local_48[3];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar5 = *(char**)( *(long*)( this + 0xa20 ) + 0xa10 );
   TextEdit::apply_ime();
   iVar1 = (int)pcVar5;
   switch (param_1) {
      case 0:
    TextEdit::undo();
    goto LAB_00100f90;
      case 1:
    TextEdit::redo();
    goto LAB_00100f90;
      case 2:
    TextEdit::cut(iVar1);
    goto LAB_00100f90;
      case 3:
    TextEdit::copy(iVar1);
    goto LAB_00100f90;
      case 4:
    TextEdit::paste(iVar1);
    goto LAB_00100f90;
      case 5:
    TextEdit::select_all();
LAB_00100f90:
    create_custom_callable_function_pointer<Control>
              ((Control *)local_48,pcVar5,(_func_void *)"&Control::grab_focus");
    Callable::call_deferred<>((Callable *)local_48);
    Callable::~Callable((Callable *)local_48);
switchD_00100f7c_default:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    break;
      case 6:
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this + 0x3f0);
    if (UNRECOVERED_JUMPTABLE == trim_trailing_whitespace) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        CodeTextEditor::trim_trailing_whitespace();
        return;
      }
      break;
    }
    goto LAB_00101760;
      case 7:
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this + 0x3f8);
    if (UNRECOVERED_JUMPTABLE == trim_final_newlines) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        CodeTextEditor::trim_final_newlines();
        return;
      }
      break;
    }
    goto LAB_00101760;
      case 8:
    uVar2 = (undefined1)*(undefined8 *)(this + 0xa20);
    goto LAB_001015a9;
      case 9:
    uVar2 = (undefined1)*(undefined8 *)(this + 0xa20);
LAB_001015a9:
    CodeTextEditor::set_indent_using_spaces((bool)uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this + 0x408);
    if (UNRECOVERED_JUMPTABLE == convert_indent) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        CodeEdit::convert_indent((int)*(undefined8 *)(*(long *)(this + 0xa20) + 0xa10),-1);
        return;
      }
      break;
    }
LAB_00101760:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(this);
      return;
    }
    break;
      case 10:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      CodeEdit::move_lines_up();
      return;
    }
    break;
      case 0xb:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      CodeEdit::move_lines_down();
      return;
    }
    break;
      case 0xc:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      CodeEdit::indent_lines();
      return;
    }
    break;
      case 0xd:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      CodeEdit::unindent_lines();
      return;
    }
    break;
      case 0xe:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      CodeEdit::delete_lines();
      return;
    }
    break;
      case 0xf:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      CodeEdit::duplicate_selection();
      return;
    }
    break;
      case 0x10:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      CodeEdit::duplicate_lines();
      return;
    }
    break;
      case 0x11:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = *(undefined8 *)(this + 0xa20);
      uVar3 = 0;
LAB_001013c8:
      CodeTextEditor::convert_case(uVar4,uVar3);
      return;
    }
    break;
      case 0x12:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = *(undefined8 *)(this + 0xa20);
      uVar3 = 1;
      goto LAB_001013c8;
    }
    break;
      case 0x13:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = *(undefined8 *)(this + 0xa20);
      uVar3 = 2;
      goto LAB_001013c8;
    }
    break;
      case 0x14:
    iVar1 = TextEdit::get_line_wrapping_mode();
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      TextEdit::set_line_wrapping_mode(*(undefined8 *)(*(long *)(this + 0xa20) + 0xa10),iVar1 != 1);
      return;
    }
    break;
      case 0x15:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      CodeEdit::toggle_foldable_lines_at_carets();
      return;
    }
    break;
      case 0x16:
    CodeEdit::fold_all_lines();
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_001012f8:
      CanvasItem::queue_redraw();
      return;
    }
    break;
      case 0x17:
    CodeEdit::unfold_all_lines();
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001012f8;
    break;
      case 0x18:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      FindReplaceBar::popup_search(SUB81(*(undefined8 *)(*(long *)(this + 0xa20) + 0xa18),0));
      return;
    }
    break;
      case 0x19:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      FindReplaceBar::search_next();
      return;
    }
    break;
      case 0x1a:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      FindReplaceBar::search_prev();
      return;
    }
    break;
      case 0x1b:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      FindReplaceBar::popup_replace();
      return;
    }
    break;
      case 0x1c:
      pcVar5 = (char *)&_edit_option(int)::{lambda()
      #1
      TextEdit::get_selected_text((int)local_50);
      local_48[0] = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)local_48, local_50);
      if (_edit_option(int)::{lambda()
      #1
      puVar6 = &_edit_option(int)::{lambda()
      #1
      pcVar5 = (char *)&_edit_option(int)::{lambda()
      #1
      iVar1 = __cxa_guard_acquire(&_edit_option(int)::{lambda()
      #1
      uVar2 = 0xfa;
      if (iVar1 != 0) {
         LAB_001011cd:_scs_create(pcVar5, (bool)uVar2);
         __cxa_atexit(StringName::~StringName, pcVar5, &__dso_handle);
         __cxa_guard_release(puVar6);
      }

   }

   goto LAB_0010112f;
   case 0x1d:
   pcVar5 = (char *)&_edit_option(int)::{lambda()
   #2
   TextEdit::get_selected_text((int)local_50);
   local_48[0] = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)local_48, local_50);
   if (_edit_option(int)::{lambda()
   #2
   puVar6 = &_edit_option(int)::{lambda()
   #2
   pcVar5 = (char *)&_edit_option(int)::{lambda()
   #2
   iVar1 = __cxa_guard_acquire(&_edit_option(int)::{lambda()
   #2
   if (iVar1 != 0) {
      uVar2 = 0x14;
      goto LAB_001011cd;
   }

}
LAB_0010112f:Object::emit_signal<String>((Object*)this, pcVar5, (CowData<char32_t>*)local_48);CowData<char32_t>::_unref((CowData<char32_t>*)local_48);CowData<char32_t>::_unref((CowData<char32_t>*)local_50);goto switchD_00100f7c_default;case 0x1e:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      GotoLinePopup::popup_find_line(*(CodeTextEditor **)(this + 0xa68));
      return;
    }
    break;case 0x1f:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      CodeTextEditor::toggle_bookmark();
      return;
    }
    break;case 0x20:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      CodeTextEditor::goto_next_bookmark();
      return;
    }
    break;case 0x21:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      CodeTextEditor::goto_prev_bookmark();
      return;
    }
    break;case 0x22:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      CodeTextEditor::remove_all_bookmarks();
      return;
    }
    break;case 0x23:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      TextEdit::show_emoji_and_symbol_picker();
      return;
    }
    break;default:
    goto switchD_00100f7c_default;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TextEditor::_bookmark_item_pressed(int) */

void __thiscall TextEditor::_bookmark_item_pressed(TextEditor *this,int param_1)

{
  undefined8 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 4) {
    iVar2 = PopupMenu::get_item_id((int)*(undefined8 *)(this + 0xa58));
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _edit_option(this,iVar2);
      return;
    }
  }
  else {
    uVar1 = *(undefined8 *)(this + 0xa20);
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



/* TextEditor::_validate_script() */

void TextEditor::_validate_script(void)

{
  undefined8 uVar1;
  String *pSVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  String *pSVar6;
  int iVar7;
  long *in_RDI;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  int local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);if ((_validate_script()::{lambda()#1( iVar5 = __cxa_guard_acquire(&_validate_script()::{lambda()#1}::operator()()::sname),
     iVar5 != 0) );{
   _scs_create((char *)&_validate_script()::{lambda()
   #1
   __cxa_atexit(StringName::~StringName, &_validate_script()::, {
         lambda()
         #1
         &__dso_handle;
         __cxa_guard_release(&_validate_script()::{lambda()#1}::operator()()::sname);
  }
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;, uStack_48 = 0);
         ( **(code**)( *in_RDI + 0xd0 ) )();
         if (Variant::needs_deinit[local_58] != '\0') {
            Variant::_clear_internal();
         }

         if ((_validate_script()::{lambda()
         #2
         ( iVar5 = __cxa_guard_acquire(&_validate_script()::{lambda()#2}::operator()()::sname),
     iVar5 != 0) );
         {
            _scs_create((char *)&_validate_script()::{lambda()
            #2
            __cxa_atexit(StringName::~StringName, &_validate_script()::, {
                  lambda()
                  #2
                  &__dso_handle;
                  __cxa_guard_release(&_validate_script()::{lambda()#2}::operator()()::sname);
  }
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;, uStack_48 = 0);
                  ( **(code**)( *in_RDI + 0xd0 ) )();
                  if (Variant::needs_deinit[local_58] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( ( in_RDI[0x145] != 0 ) && ( pSVar6 = (String*)__dynamic_cast(in_RDI[0x145], &Object::typeinfo, &JSON::typeinfo, 0) ),pSVar6 != (String*)0x0 )) {
                     uVar1 = *(undefined8*)( in_RDI[0x144] + 0xa10 );
                     local_58 = 0;
                     uStack_54 = 0;
                     uStack_50 = 0;
                     uVar4 = CodeTextEditor::get_error_pos();
                     iVar7 = (int)uVar1;
                     TextEdit::set_line_background_color(iVar7, (Color*)(ulong)uVar4);
                     pSVar2 = (String*)in_RDI[0x144];
                     local_70 = 0;
                     String::parse_latin1((String*)&local_70, "");
                     CodeTextEditor::set_error(pSVar2);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     TextEdit::get_text();
                     iVar5 = JSON::parse(pSVar6, SUB81((String*)&local_70, 0));
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     if (iVar5 == 0) {
                        cVar3 = RefCounted::unreference();
                     }
 else {
                        pSVar2 = (String*)in_RDI[0x144];
                        local_70 = 0;
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)( pSVar6 + 0x260 ));
                        CodeTextEditor::set_error(pSVar2);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                        CodeTextEditor::set_error_pos((int)in_RDI[0x144], *(int*)( pSVar6 + 0x268 ));
                        local_70 = 0;
                        String::parse_latin1((String*)&local_70, "text_editor/theme/highlighting/mark_color");
                        _EDITOR_GET((String*)&local_58);
                        local_68 = Variant::operator_cast_to_Color((Variant*)&local_58);
                        uVar4 = CodeTextEditor::get_error_pos();
                        TextEdit::set_line_background_color(iVar7, (Color*)(ulong)uVar4);
                        if (Variant::needs_deinit[local_58] != '\0') {
                           Variant::_clear_internal();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                        cVar3 = RefCounted::unreference();
                     }

                     if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)pSVar6) ),cVar3 != '\0') {
                        ( **(code**)( *(long*)pSVar6 + 0x140 ) )(pSVar6);
                        if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                           Memory::free_static(pSVar6, false);
                           return;
                        }

                        goto LAB_00101c59;
                     }

                  }

                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return;
                  }

                  LAB_00101c59:/* WARNING: Subroutine does not return */__stack_chk_fail();
               }
, /* TextEditor::enable_editor(Control*) */, void __thiscall TextEditor::enable_editor(TextEditor *this, Control * param_1);
            {
               int iVar1;
               long lVar2;
               Node *pNVar3;
               int iVar4;
               if (this[0xa30] == (TextEditor)0x0) {
                  iVar4 = 0;
                  this[0xa30] = (TextEditor)0x1;
                  _load_theme_settings();
                  _validate_script();
                  if (param_1 != (Control*)0x0) {
                     for (; iVar1 = Node::get_child_count(SUB81(*(undefined8*)( this + 0xa38 ), 0)),iVar4 < iVar1; iVar4 = iVar4 + 1) {
                        lVar2 = Node::get_child((int)*(undefined8*)( this + 0xa38 ), SUB41(iVar4, 0));
                        if (( lVar2 != 0 ) && ( pNVar3 = (Node*)__dynamic_cast(lVar2, &Object::typeinfo, &Control::typeinfo, 0) ),pNVar3 != (Node*)0x0) {
                           Control::set_shortcut_context(pNVar3);
                        }

                     }

                  }

                  return;
               }

               return;
            }

            /* TextEditor::reload_text() */
            void TextEditor::reload_text(TextEditor *this) {
               String *pSVar1;
               bool bVar2;
               bool bVar3;
               char cVar4;
               Object *pOVar5;
               Object *pOVar6;
               int iVar7;
               int iVar8;
               long in_FS_OFFSET;
               double dVar9;
               CowData<char32_t> local_48[8];
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               if (*(long*)( this + 0xa28 ) == 0) {
                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     _err_print_error("reload_text", "editor/plugins/text_editor.cpp", 0xa2, "Condition \"edited_res.is_null()\" is true.", 0, 0);
                     return;
                  }

                  goto LAB_001020c3;
               }

               pSVar1 = *(String**)( *(long*)( this + 0xa20 ) + 0xa10 );
               iVar7 = (int)pSVar1;
               bVar2 = (bool)TextEdit::get_caret_column(iVar7);
               bVar3 = (bool)TextEdit::get_caret_line(iVar7);
               TextEdit::get_h_scroll();
               dVar9 = (double)TextEdit::get_v_scroll();
               pOVar6 = *(Object**)( this + 0xa28 );
               iVar8 = (int)dVar9;
               pOVar5 = pOVar6;
               if (pOVar6 == (Object*)0x0) {
                  LAB_00102010:TextEdit::set_caret_line(iVar7, bVar3, true, 1, 0);
                  TextEdit::set_caret_column(iVar7, bVar2, 1);
                  TextEdit::set_h_scroll(iVar7);
                  TextEdit::set_v_scroll((double)iVar8);
                  TextEdit::tag_saved_version();
                  CodeTextEditor::_line_col_changed();
                  _validate_script();
               }
 else {
                  pOVar5 = (Object*)__dynamic_cast(pOVar6, &Object::typeinfo, &TextFile::typeinfo, 0);
                  if (pOVar5 != (Object*)0x0) {
                     cVar4 = RefCounted::reference();
                     if (cVar4 == '\0') {
                        pOVar6 = *(Object**)( this + 0xa28 );
                        pOVar5 = (Object*)0x0;
                     }
 else {
                        ( **(code**)( *(long*)pOVar5 + 0x1d0 ) )(local_48, pOVar5);
                        TextEdit::set_text(pSVar1);
                        CowData<char32_t>::_unref(local_48);
                        pOVar6 = *(Object**)( this + 0xa28 );
                     }

                     if (pOVar6 == (Object*)0x0) goto LAB_00102010;
                  }

                  pOVar6 = (Object*)__dynamic_cast(pOVar6, &Object::typeinfo, &JSON::typeinfo, 0);
                  if (( pOVar6 == (Object*)0x0 ) || ( cVar4 = cVar4 == '\0' )) {
                     TextEdit::set_caret_line(iVar7, bVar3, true, 1, 0);
                     TextEdit::set_caret_column(iVar7, bVar2, 1);
                     TextEdit::set_h_scroll(iVar7);
                     TextEdit::set_v_scroll((double)iVar8);
                     TextEdit::tag_saved_version();
                     CodeTextEditor::_line_col_changed();
                     _validate_script();
                  }
 else {
                     JSON::get_parsed_text();
                     TextEdit::set_text(pSVar1);
                     CowData<char32_t>::_unref(local_48);
                     TextEdit::set_caret_line(iVar7, bVar3, true, 1, 0);
                     TextEdit::set_caret_column(iVar7, bVar2, 1);
                     TextEdit::set_h_scroll(iVar7);
                     TextEdit::set_v_scroll((double)iVar8);
                     TextEdit::tag_saved_version();
                     CodeTextEditor::_line_col_changed();
                     _validate_script();
                     cVar4 = RefCounted::unreference();
                     if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) {
                        ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                        Memory::free_static(pOVar6, false);
                     }

                  }

               }

               if (( ( pOVar5 == (Object*)0x0 ) || ( cVar4 = RefCounted::unreference() ),cVar4 == '\0' )) {
                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return;
                  }

               }
 else {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     Memory::free_static(pOVar5, false);
                     return;
                  }

               }

               LAB_001020c3:/* WARNING: Subroutine does not return */__stack_chk_fail();
            }

            /* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */
            void List<PropertyInfo,DefaultAllocator>::push_back(List<PropertyInfo,DefaultAllocator> *this, PropertyInfo *param_1) {
               long *plVar1;
               long lVar2;
               undefined4 *puVar3;
               undefined1(*pauVar4)[16];
               if (*(long*)this == 0) {
                  pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined1(**) [16])this = pauVar4;
                  *(undefined4*)pauVar4[1] = 0;
                  *pauVar4 = (undefined1[16])0x0;
               }

               puVar3 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
               *(undefined8*)( puVar3 + 8 ) = 0;
               *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
               lVar2 = *(long*)( param_1 + 8 );
               *puVar3 = 0;
               puVar3[6] = 0;
               puVar3[10] = 6;
               *(undefined8*)( puVar3 + 0x10 ) = 0;
               *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
               *puVar3 = *(undefined4*)param_1;
               if (lVar2 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)( param_1 + 8 ));
               }

               StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)( param_1 + 0x10 ));
               puVar3[6] = *(undefined4*)( param_1 + 0x18 );
               if (*(long*)( puVar3 + 8 ) != *(long*)( param_1 + 0x20 )) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)( param_1 + 0x20 ));
               }

               puVar3[10] = *(undefined4*)( param_1 + 0x28 );
               plVar1 = *(long**)this;
               lVar2 = plVar1[1];
               *(undefined8*)( puVar3 + 0xc ) = 0;
               *(long**)( puVar3 + 0x10 ) = plVar1;
               *(long*)( puVar3 + 0xe ) = lVar2;
               if (lVar2 != 0) {
                  *(undefined4**)( lVar2 + 0x30 ) = puVar3;
               }

               plVar1[1] = (long)puVar3;
               if (*plVar1 != 0) {
                  *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
                  return;
               }

               *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
               *plVar1 = (long)puVar3;
               return;
            }

            /* TextEditor::add_syntax_highlighter(Ref<EditorSyntaxHighlighter>) */
            void TextEditor::add_syntax_highlighter(TextEditor *this, long *param_2) {
               Object *pOVar1;
               Object *pOVar2;
               undefined8 uVar3;
               char cVar4;
               long *plVar5;
               long in_FS_OFFSET;
               CowData<char32_t> aCStack_38[8];
               long local_30;
               local_30 = *(long*)( in_FS_OFFSET + 0x28 );
               if ((long*)*param_2 == (long*)0x0) {
                  if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     _err_print_error("add_syntax_highlighter", "editor/plugins/text_editor.cpp", 0x28, "Condition \"p_highlighter.is_null()\" is true.", 0, 0);
                     return;
                  }

               }
 else {
                  ( **(code**)( *(long*)*param_2 + 0x1e0 ) )(aCStack_38);
                  plVar5 = (long*)HashMap<String,Ref<EditorSyntaxHighlighter>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<EditorSyntaxHighlighter>>>>::operator []((HashMap<String,Ref<EditorSyntaxHighlighter>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<EditorSyntaxHighlighter>>>>*)( this + 0xa70 ), (String*)aCStack_38);
                  pOVar1 = (Object*)*param_2;
                  pOVar2 = (Object*)*plVar5;
                  if (pOVar1 != pOVar2) {
                     *plVar5 = (long)pOVar1;
                     if (pOVar1 != (Object*)0x0) {
                        cVar4 = RefCounted::reference();
                        if (cVar4 == '\0') {
                           *plVar5 = 0;
                        }

                     }

                     if (pOVar2 != (Object*)0x0) {
                        cVar4 = RefCounted::unreference();
                        if (cVar4 != '\0') {
                           cVar4 = predelete_handler(pOVar2);
                           if (cVar4 != '\0') {
                              ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                              Memory::free_static(pOVar2, false);
                           }

                        }

                     }

                  }

                  CowData<char32_t>::_unref(aCStack_38);
                  uVar3 = *(undefined8*)( this + 0xa48 );
                  ( **(code**)( *(long*)*param_2 + 0x1e0 ) )(aCStack_38);
                  PopupMenu::add_radio_check_item(uVar3, aCStack_38, 0xffffffff, 0);
                  CowData<char32_t>::_unref(aCStack_38);
                  if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return;
                  }

               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* TextEditor::_change_syntax_highlighter(int) */
            void TextEditor::_change_syntax_highlighter(int param_1) {
               code *pcVar1;
               Object *pOVar2;
               char cVar3;
               long *plVar4;
               undefined4 in_register_0000003c;
               long *plVar5;
               long in_FS_OFFSET;
               CowData<char32_t> local_30[8];
               Object *local_28;
               long local_20;
               plVar5 = (long*)CONCAT44(in_register_0000003c, param_1);
               local_20 = *(long*)( in_FS_OFFSET + 0x28 );
               pcVar1 = *(code**)( *plVar5 + 0x370 );
               PopupMenu::get_item_text((int)local_30);
               plVar4 = (long*)HashMap<String,Ref<EditorSyntaxHighlighter>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<EditorSyntaxHighlighter>>>>::operator []((HashMap<String,Ref<EditorSyntaxHighlighter>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<EditorSyntaxHighlighter>>>>*)( plVar5 + 0x14e ), (String*)local_30);
               local_28 = (Object*)0x0;
               if ((Object*)*plVar4 != (Object*)0x0) {
                  local_28 = (Object*)*plVar4;
                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') {
                     local_28 = (Object*)0x0;
                  }

               }

               ( *pcVar1 )(plVar5);
               if (local_28 != (Object*)0x0) {
                  cVar3 = RefCounted::unreference();
                  pOVar2 = local_28;
                  if (cVar3 != '\0') {
                     cVar3 = predelete_handler(local_28);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                        Memory::free_static(pOVar2, false);
                     }

                  }

               }

               CowData<char32_t>::_unref(local_30);
               if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* TextEditor::set_edit_state(Variant const&) */
            void TextEditor::set_edit_state(Variant *param_1) {
               String *pSVar1;
               char cVar2;
               int iVar3;
               long in_FS_OFFSET;
               Variant aVStack_68[8];
               Variant local_60[8];
               int local_58[6];
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               CodeTextEditor::set_edit_state(*(Variant**)( param_1 + 0xa20 ));
               Variant::operator_cast_to_Dictionary(aVStack_68);
               Variant::Variant((Variant*)local_58, "syntax_highlighter");
               cVar2 = Dictionary::has(aVStack_68);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (cVar2 != '\0') {
                  pSVar1 = *(String**)( param_1 + 0xa48 );
                  Variant::Variant((Variant*)local_58, "syntax_highlighter");
                  Dictionary::operator [](aVStack_68);
                  Variant::operator_cast_to_String(local_60);
                  iVar3 = PopupMenu::get_item_idx_from_text(pSVar1);
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (-1 < iVar3) {
                     _change_syntax_highlighter((int)param_1);
                  }

               }

               if (*(code**)( *(long*)param_1 + 0x410 ) == ensure_focus) {
                  Control::grab_focus();
               }
 else {
                  ( **(code**)( *(long*)param_1 + 0x410 ) )(param_1);
               }

               Dictionary::~Dictionary((Dictionary*)aVStack_68);
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* TextEditor::~TextEditor() */
            void TextEditor::~TextEditor(TextEditor *this) {
               uint uVar1;
               Object *pOVar2;
               char cVar3;
               long lVar4;
               void *pvVar5;
               bool bVar6;
               *(undefined***)this = &PTR__initialize_classv_0010fb78;
               pvVar5 = *(void**)( this + 0xa78 );
               if (pvVar5 != (void*)0x0) {
                  if (*(int*)( this + 0xa9c ) != 0) {
                     uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa98 ) * 4 );
                     if (uVar1 == 0) {
                        *(undefined4*)( this + 0xa9c ) = 0;
                        *(undefined1(*) [16])( this + 0xa88 ) = (undefined1[16])0x0;
                     }
 else {
                        lVar4 = 0;
                        do {
                           if (*(int*)( *(long*)( this + 0xa80 ) + lVar4 ) != 0) {
                              pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                              *(int*)( *(long*)( this + 0xa80 ) + lVar4 ) = 0;
                              if (*(long*)( (long)pvVar5 + 0x18 ) != 0) {
                                 cVar3 = RefCounted::unreference();
                                 if (cVar3 != '\0') {
                                    pOVar2 = *(Object**)( (long)pvVar5 + 0x18 );
                                    cVar3 = predelete_handler(pOVar2);
                                    if (cVar3 != '\0') {
                                       ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                                       Memory::free_static(pOVar2, false);
                                    }

                                 }

                              }

                              CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar5 + 0x10 ));
                              Memory::free_static(pvVar5, false);
                              pvVar5 = *(void**)( this + 0xa78 );
                              *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
                           }

                           lVar4 = lVar4 + 4;
                        }
 while ( (ulong)uVar1 << 2 != lVar4 );
                        *(undefined4*)( this + 0xa9c ) = 0;
                        *(undefined1(*) [16])( this + 0xa88 ) = (undefined1[16])0x0;
                        if (pvVar5 == (void*)0x0) goto LAB_001026a1;
                     }

                  }

                  Memory::free_static(pvVar5, false);
                  Memory::free_static(*(void**)( this + 0xa80 ), false);
               }

               LAB_001026a1:if (*(long*)( this + 0xa28 ) != 0) {
                  cVar3 = RefCounted::unreference();
                  if (cVar3 != '\0') {
                     pOVar2 = *(Object**)( this + 0xa28 );
                     cVar3 = predelete_handler(pOVar2);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                        Memory::free_static(pOVar2, false);
                     }

                  }

               }

               *(undefined***)this = &PTR__initialize_classv_0010f6c0;
               CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xa10 ));
               bVar6 = StringName::configured != '\0';
               *(code**)this = String::parse_latin1;
               if (bVar6) {
                  if (*(long*)( this + 0x9e8 ) != 0) {
                     StringName::unref();
                     if (StringName::configured == '\0') goto LAB_00102718;
                  }

                  if (*(long*)( this + 0x9d0 ) != 0) {
                     StringName::unref();
                  }

               }

               LAB_00102718:Control::~Control((Control*)this);
               return;
            }

            /* TextEditor::~TextEditor() */
            void TextEditor::~TextEditor(TextEditor *this) {
               ~TextEditor(this)
               ;;
               operator_delete(this, 0xaa0);
               return;
            }

            /* TextEditor::get_name() */
            void TextEditor::get_name(void) {
               char *pcVar1;
               long lVar2;
               char cVar3;
               int iVar4;
               long *in_RSI;
               CowData<char32_t> *in_RDI;
               long in_FS_OFFSET;
               long local_78;
               CowData<char32_t> local_70[8];
               undefined8 local_68;
               undefined8 local_60;
               char *local_58;
               undefined8 local_50;
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               *(undefined8*)in_RDI = 0;
               Resource::get_path();
               String::get_file();
               if (*(char**)in_RDI != local_58) {
                  CowData<char32_t>::_unref(in_RDI);
                  pcVar1 = local_58;
                  local_58 = (char*)0x0;
                  *(char**)in_RDI = pcVar1;
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (( *(long*)in_RDI == 0 ) || ( *(uint*)( *(long*)in_RDI + -8 ) < 2 )) {
                  local_58 = "";
                  local_60 = 0;
                  local_50 = 0;
                  String::parse_latin1((StrRange*)&local_60);
                  local_58 = "[unsaved]";
                  local_68 = 0;
                  local_50 = 9;
                  String::parse_latin1((StrRange*)&local_68);
                  TTR((String*)&local_58, (String*)&local_68);
                  if (*(char**)in_RDI != local_58) {
                     CowData<char32_t>::_unref(in_RDI);
                     pcVar1 = local_58;
                     local_58 = (char*)0x0;
                     *(char**)in_RDI = pcVar1;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               }
 else {
                  lVar2 = *(long*)( in_RSI[0x145] + 0x188 );
                  if (( lVar2 != 0 ) && ( 1 < *(uint*)( lVar2 + -8 ) )) {
                     pcVar1 = (char*)( in_RSI[0x145] + 0x188 );
                     iVar4 = String::find(pcVar1, 0x107785);
                     if (( iVar4 == -1 ) && ( cVar3 = cVar3 == '\0' )) goto LAB_00102918;
                  }

                  Resource::get_name();
                  if (( local_78 != 0 ) && ( 1 < *(uint*)( local_78 + -8 ) )) {
                     String::get_slice((char*)local_70, (int)in_RDI);
                     local_60 = 0;
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)&local_78);
                     local_68 = 0;
                     String::parse_latin1((String*)&local_68, "%s (%s)");
                     vformat<String,String>((CowData<char32_t>*)&local_58, (String*)&local_68, (CowData<char32_t>*)&local_60, local_70);
                     pcVar1 = local_58;
                     if (*(char**)in_RDI != local_58) {
                        CowData<char32_t>::_unref(in_RDI);
                        local_58 = (char*)0x0;
                        *(char**)in_RDI = pcVar1;
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     CowData<char32_t>::_unref(local_70);
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               }

               LAB_00102918:cVar3 = ( **(code**)( *in_RSI + 0x3b8 ) )();
               if (cVar3 != '\0') {
                  String::operator +=((String*)in_RDI, "(*)");
               }

               if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return;
            }

            /* TextEditor::_update_bookmark_list() */
            void TextEditor::_update_bookmark_list(TextEditor *this) {
               long *plVar1;
               Ref *pRVar2;
               undefined8 uVar3;
               code *pcVar4;
               int iVar5;
               long lVar6;
               long lVar7;
               long in_FS_OFFSET;
               char *local_a8;
               String local_a0[8];
               undefined8 local_98;
               String local_90[8];
               String local_88[8];
               undefined8 local_80;
               undefined8 local_78;
               long local_70;
               char *local_68;
               undefined8 local_60;
               int local_58[6];
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               PopupMenu::clear(SUB81(*(undefined8*)( this + 0xa58 ), 0));
               pRVar2 = *(Ref**)( this + 0xa58 );
               local_68 = "script_text_editor/toggle_bookmark";
               local_78 = 0;
               local_60 = 0x22;
               String::parse_latin1((StrRange*)&local_78);
               ED_GET_SHORTCUT((String*)&local_68);
               iVar5 = (int)(String*)&local_68;
               PopupMenu::add_shortcut(pRVar2, iVar5, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               pRVar2 = *(Ref**)( this + 0xa58 );
               local_68 = "script_text_editor/remove_all_bookmarks";
               local_78 = 0;
               local_60 = 0x27;
               String::parse_latin1((StrRange*)&local_78);
               ED_GET_SHORTCUT((String*)&local_68);
               PopupMenu::add_shortcut(pRVar2, iVar5, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               pRVar2 = *(Ref**)( this + 0xa58 );
               local_68 = "script_text_editor/goto_next_bookmark";
               local_78 = 0;
               local_60 = 0x25;
               String::parse_latin1((StrRange*)&local_78);
               ED_GET_SHORTCUT((String*)&local_68);
               PopupMenu::add_shortcut(pRVar2, iVar5, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               pRVar2 = *(Ref**)( this + 0xa58 );
               local_68 = "script_text_editor/goto_previous_bookmark";
               local_78 = 0;
               local_60 = 0x29;
               String::parse_latin1((StrRange*)&local_78);
               ED_GET_SHORTCUT((String*)&local_68);
               PopupMenu::add_shortcut(pRVar2, iVar5, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               CodeEdit::get_bookmarked_lines();
               if (local_70 != 0) {
                  if (*(long*)( local_70 + -8 ) == 0) {
                     LAB_00102c9d:lVar7 = local_70;
                     LOCK();
                     plVar1 = (long*)( local_70 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_70 = 0;
                        Memory::free_static((void*)( lVar7 + -0x10 ), false);
                     }

                  }
 else {
                     local_68 = (char*)0x0;
                     PopupMenu::add_separator(*(String**)( this + 0xa58 ), iVar5);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                     if (local_70 != 0) {
                        lVar7 = 0;
                        do {
                           if (*(long*)( local_70 + -8 ) <= lVar7) goto LAB_00102c9d;
                           TextEdit::get_line(iVar5);
                           String::strip_edges(SUB81((CowData<char32_t>*)&local_a8, 0), SUB81((String*)&local_68, 0));
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                           if (( local_a8 != (char*)0x0 ) && ( 0x33 < *(int*)( local_a8 + -8 ) )) {
                              String::substr(iVar5, (int)(CowData<char32_t>*)&local_a8);
                              if (local_a8 != local_68) {
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                                 local_a8 = local_68;
                                 local_68 = (char*)0x0;
                              }

                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                           }

                           uVar3 = *(undefined8*)( this + 0xa58 );
                           local_80 = 0;
                           local_68 = "\"";
                           local_60 = 1;
                           String::parse_latin1((StrRange*)&local_80);
                           local_68 = " - \"";
                           local_98 = 0;
                           local_60 = 4;
                           String::parse_latin1((StrRange*)&local_98);
                           if (local_70 == 0) {
                              LAB_00102f38:lVar6 = 0;
                              LAB_00102f3b:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar6, "p_index", "size()", "", false, true);
                              _err_flush_stdout();
                              /* WARNING: Does not return */
                              pcVar4 = (code*)invalidInstructionException();
                              ( *pcVar4 )();
                           }

                           lVar6 = *(long*)( local_70 + -8 );
                           if (lVar6 <= lVar7) goto LAB_00102f3b;
                           String::num_int64((long)local_a0, *(int*)( local_70 + lVar7 * 4 ) + 1, true);
                           String::operator +(local_90, local_a0);
                           String::operator +(local_88, local_90);
                           String::operator +((String*)&local_68, local_88);
                           PopupMenu::add_item(uVar3, (String*)&local_68, 0xffffffff, 0);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                           CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
                           CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
                           CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
                           uVar3 = *(undefined8*)( this + 0xa58 );
                           if (local_70 == 0) goto LAB_00102f38;
                           lVar6 = *(long*)( local_70 + -8 );
                           if (lVar6 <= lVar7) goto LAB_00102f3b;
                           Variant::Variant((Variant*)local_58, *(int*)( local_70 + lVar7 * 4 ));
                           PopupMenu::set_item_metadata((int)uVar3, (Variant*)0xffffffff);
                           if (Variant::needs_deinit[local_58[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           lVar7 = lVar7 + 1;
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                        }
 while ( local_70 != 0 );
                     }

                  }

               }

               if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return;
            }

            /* TextEditor::_make_context_menu(bool, bool, bool, Vector2) */
            void TextEditor::_make_context_menu(undefined8 param_1_00, TextEditor *this, char param_1, char param_2, char param_3) {
               Ref *pRVar1;
               Vector2i *pVVar2;
               char cVar3;
               bool bVar4;
               int iVar5;
               long in_FS_OFFSET;
               undefined8 uVar6;
               undefined8 local_78;
               undefined8 local_70;
               undefined8 local_68;
               undefined8 local_60;
               undefined8 local_58;
               undefined8 local_50;
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               PopupMenu::clear(SUB81(*(undefined8*)( this + 0xa60 ), 0));
               cVar3 = ( **(code**)( *DisplayServer::singleton + 0x150 ) )(DisplayServer::singleton, 0x1f);
               iVar5 = (int)(String*)&local_68;
               if (cVar3 != '\0') {
                  uVar6 = *(undefined8*)( this + 0xa60 );
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "");
                  local_78 = 0;
                  String::parse_latin1((String*)&local_78, "Emoji & Symbols");
                  TTR((String*)&local_68, (String*)&local_78);
                  PopupMenu::add_item(uVar6, (String*)&local_68, 0x23);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  local_68 = 0;
                  PopupMenu::add_separator(*(String**)( this + 0xa60 ), iVar5);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               }

               if (param_1 != '\0') {
                  pRVar1 = *(Ref**)( this + 0xa60 );
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "ui_cut");
                  ED_GET_SHORTCUT((String*)&local_68);
                  PopupMenu::add_shortcut(pRVar1, iVar5, true, false);
                  Ref<Shortcut>::unref((Ref<Shortcut>*)&local_68);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  pRVar1 = *(Ref**)( this + 0xa60 );
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "ui_copy");
                  ED_GET_SHORTCUT((String*)&local_68);
                  PopupMenu::add_shortcut(pRVar1, iVar5, true, false);
                  Ref<Shortcut>::unref((Ref<Shortcut>*)&local_68);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               }

               pRVar1 = *(Ref**)( this + 0xa60 );
               local_70 = 0;
               String::parse_latin1((String*)&local_70, "ui_paste");
               ED_GET_SHORTCUT((String*)&local_68);
               PopupMenu::add_shortcut(pRVar1, iVar5, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               local_68 = 0;
               PopupMenu::add_separator(*(String**)( this + 0xa60 ), iVar5);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               pRVar1 = *(Ref**)( this + 0xa60 );
               local_70 = 0;
               String::parse_latin1((String*)&local_70, "ui_text_select_all");
               ED_GET_SHORTCUT((String*)&local_68);
               PopupMenu::add_shortcut(pRVar1, iVar5, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               pRVar1 = *(Ref**)( this + 0xa60 );
               local_70 = 0;
               String::parse_latin1((String*)&local_70, "ui_undo");
               ED_GET_SHORTCUT((String*)&local_68);
               PopupMenu::add_shortcut(pRVar1, iVar5, false, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               pRVar1 = *(Ref**)( this + 0xa60 );
               local_70 = 0;
               String::parse_latin1((String*)&local_70, "ui_redo");
               ED_GET_SHORTCUT((String*)&local_68);
               PopupMenu::add_shortcut(pRVar1, iVar5, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               local_68 = 0;
               PopupMenu::add_separator(*(String**)( this + 0xa60 ), iVar5);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               pRVar1 = *(Ref**)( this + 0xa60 );
               local_70 = 0;
               String::parse_latin1((String*)&local_70, "script_text_editor/indent");
               ED_GET_SHORTCUT((String*)&local_68);
               PopupMenu::add_shortcut(pRVar1, iVar5, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               pRVar1 = *(Ref**)( this + 0xa60 );
               local_70 = 0;
               String::parse_latin1((String*)&local_70, "script_text_editor/unindent");
               ED_GET_SHORTCUT((String*)&local_68);
               PopupMenu::add_shortcut(pRVar1, iVar5, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               pRVar1 = *(Ref**)( this + 0xa60 );
               local_70 = 0;
               String::parse_latin1((String*)&local_70, "script_text_editor/toggle_bookmark");
               ED_GET_SHORTCUT((String*)&local_68);
               PopupMenu::add_shortcut(pRVar1, iVar5, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (param_1 != '\0') {
                  local_68 = 0;
                  PopupMenu::add_separator(*(String**)( this + 0xa60 ), iVar5);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                  pRVar1 = *(Ref**)( this + 0xa60 );
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "script_text_editor/convert_to_uppercase");
                  ED_GET_SHORTCUT((String*)&local_68);
                  PopupMenu::add_shortcut(pRVar1, iVar5, true, false);
                  Ref<Shortcut>::unref((Ref<Shortcut>*)&local_68);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  pRVar1 = *(Ref**)( this + 0xa60 );
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "script_text_editor/convert_to_lowercase");
                  ED_GET_SHORTCUT((String*)&local_68);
                  PopupMenu::add_shortcut(pRVar1, iVar5, true, false);
                  Ref<Shortcut>::unref((Ref<Shortcut>*)&local_68);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               }

               if (( param_2 != '\0' ) || ( param_3 != '\0' )) {
                  pRVar1 = *(Ref**)( this + 0xa60 );
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "script_text_editor/toggle_fold_line");
                  ED_GET_SHORTCUT((String*)&local_68);
                  PopupMenu::add_shortcut(pRVar1, iVar5, true, false);
                  Ref<Shortcut>::unref((Ref<Shortcut>*)&local_68);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               }

               uVar6 = *(undefined8*)( this + 0xa60 );
               TextEdit::has_undo();
               bVar4 = (bool)PopupMenu::get_item_index((int)*(undefined8*)( this + 0xa60 ));
               PopupMenu::set_item_disabled((int)uVar6, bVar4);
               uVar6 = *(undefined8*)( this + 0xa60 );
               TextEdit::has_redo();
               bVar4 = (bool)PopupMenu::get_item_index((int)*(undefined8*)( this + 0xa60 ));
               PopupMenu::set_item_disabled((int)uVar6, bVar4);
               pVVar2 = *(Vector2i**)( this + 0xa60 );
               uVar6 = Control::get_screen_position();
               local_60 = CONCAT44((float)( (ulong)param_1_00 >> 0x20 ) + (float)( (ulong)uVar6 >> 0x20 ), (float)param_1_00 + (float)uVar6);
               local_58 = Vector2::operator_cast_to_Vector2i((Vector2*)&local_60);
               Window::set_position(pVVar2);
               Window::reset_size();
               local_58 = 0;
               local_50 = 0;
               ( **(code**)( **(long**)( this + 0xa60 ) + 0x240 ) )(*(long**)( this + 0xa60 ), &local_58);
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* TextEditor::_text_edit_gui_input(Ref<InputEvent> const&) */
            void TextEditor::_text_edit_gui_input(TextEditor *this, Ref *param_1) {
               long *plVar1;
               Vector2i *pVVar2;
               ulong uVar3;
               char cVar4;
               undefined1 uVar5;
               undefined1 uVar6;
               undefined1 uVar7;
               int iVar8;
               int iVar9;
               int iVar10;
               int iVar11;
               int iVar12;
               Object *pOVar13;
               Object *pOVar14;
               int iVar15;
               long lVar16;
               long in_FS_OFFSET;
               undefined8 uVar17;
               float fVar20;
               undefined8 uVar18;
               TextEditor *pTVar19;
               float fVar21;
               long local_c0;
               undefined1 local_b8[32];
               Transform2D local_98[32];
               undefined8 local_78[4];
               undefined8 local_58[3];
               long local_40;
               lVar16 = *(long*)param_1;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               if (lVar16 != 0) {
                  pOVar13 = (Object*)__dynamic_cast(lVar16, &Object::typeinfo, &InputEventMouseButton::typeinfo, 0);
                  if (pOVar13 == (Object*)0x0) {
                     LAB_0010378a:pOVar14 = (Object*)__dynamic_cast(lVar16, &Object::typeinfo, &InputEventKey::typeinfo, 0);
                     if (( pOVar14 != (Object*)0x0 ) && ( cVar4 = cVar4 != '\0' )) {
                        cVar4 = InputEvent::is_pressed();
                        if (cVar4 == '\0') {
                           LAB_00103824:cVar4 = RefCounted::unreference();
                        }
 else {
                           StringName::StringName((StringName*)&local_c0, "ui_menu", false);
                           cVar4 = InputEvent::is_action((StringName*)pOVar14, SUB81((StringName*)&local_c0, 0));
                           if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
                              StringName::unref();
                           }

                           if (cVar4 == '\0') goto LAB_00103824;
                           plVar1 = *(long**)( *(long*)( this + 0xa20 ) + 0xa10 );
                           iVar8 = (int)plVar1;
                           TextEdit::get_caret_line(iVar8);
                           TextEdit::adjust_viewport_to_caret(iVar8);
                           ( **(code**)( *plVar1 + 0x298 ) )(local_78, plVar1);
                           ( **(code**)( *(long*)this + 0x298 ) )(local_b8, this);
                           Transform2D::inverse();
                           Transform2D::operator *((Transform2D*)local_58, local_98);
                           uVar17 = TextEdit::get_caret_draw_pos(iVar8);
                           fVar20 = (float)( (ulong)uVar17 >> 0x20 );
                           fVar21 = (float)local_58[0];
                           uVar3 = (ulong)local_58[0] >> 0x20;
                           uVar5 = CodeEdit::is_line_folded(iVar8);
                           uVar6 = CodeEdit::can_fold_line(iVar8);
                           uVar7 = TextEdit::has_selection(iVar8);
                           _make_context_menu((TextEditor*)CONCAT44(fVar20 * (float)( (ulong)local_58[1] >> 0x20 ) + (float)uVar17 * (float)uVar3 + (float)( (ulong)local_58[2] >> 0x20 ), fVar20 * (float)local_58[1] + (float)uVar17 * fVar21 + (float)local_58[2]), this, uVar7, uVar6, uVar5);
                           Window::grab_focus();
                           cVar4 = RefCounted::unreference();
                        }

                        if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) {
                           ( **(code**)( *(long*)pOVar14 + 0x140 ) )(pOVar14);
                           Memory::free_static(pOVar14, false);
                        }

                     }

                     if (pOVar13 == (Object*)0x0) goto LAB_00103740;
                  }
 else {
                     cVar4 = RefCounted::reference();
                     if (cVar4 == '\0') {
                        lVar16 = *(long*)param_1;
                        pOVar13 = (Object*)0x0;
                        if (lVar16 == 0) goto LAB_00103740;
                        goto LAB_0010378a;
                     }

                     iVar8 = InputEventMouseButton::get_button_index();
                     if (iVar8 == 2) {
                        pVVar2 = *(Vector2i**)( *(long*)( this + 0xa20 ) + 0xa10 );
                        TextEdit::apply_ime();
                        uVar17 = Control::get_global_position();
                        uVar18 = InputEventMouse::get_global_position();
                        local_78[0] = CONCAT44((float)( (ulong)uVar18 >> 0x20 ) - (float)( (ulong)uVar17 >> 0x20 ), (float)uVar18 - (float)uVar17);
                        local_58[0] = Vector2::operator_cast_to_Vector2i((Vector2*)local_78);
                        uVar17 = TextEdit::get_line_column_at_pos(pVVar2, SUB81((String*)local_58, 0), true);
                        local_c0 = 0;
                        iVar8 = (int)( (ulong)uVar17 >> 0x20 );
                        String::parse_latin1((String*)&local_c0, "text_editor/behavior/navigation/move_caret_on_right_click");
                        _EDITOR_GET((String*)local_58);
                        Variant::operator_cast_to_bool((Variant*)local_58);
                        TextEdit::set_move_caret_on_right_click_enabled(SUB81(pVVar2, 0));
                        if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                        iVar15 = (int)pVVar2;
                        uVar5 = CodeEdit::can_fold_line(iVar15);
                        uVar6 = CodeEdit::is_line_folded(iVar15);
                        cVar4 = TextEdit::is_move_caret_on_right_click_enabled();
                        if (cVar4 != '\0') {
                           TextEdit::remove_secondary_carets();
                           cVar4 = TextEdit::has_selection(iVar15);
                           if (cVar4 != '\0') {
                              iVar9 = TextEdit::get_selection_from_line(iVar15);
                              iVar10 = TextEdit::get_selection_to_line(iVar15);
                              iVar11 = TextEdit::get_selection_from_column(iVar15);
                              iVar12 = TextEdit::get_selection_to_column(iVar15);
                              if (( ( ( iVar8 < iVar9 ) || ( iVar10 < iVar8 ) ) || ( ( iVar9 == iVar8 && ( (int)uVar17 < iVar11 ) ) ) ) || ( ( iVar10 == iVar8 && ( iVar12 < (int)uVar17 ) ) )) {
                                 TextEdit::deselect(iVar15);
                              }

                           }

                           cVar4 = TextEdit::has_selection(iVar15);
                           if (cVar4 == '\0') {
                              TextEdit::set_caret_line(iVar15, SUB81((ulong)uVar17 >> 0x20, 0), true, 0, -1);
                              TextEdit::set_caret_column(iVar15, SUB81(uVar17, 0), 1);
                           }

                        }

                        cVar4 = InputEvent::is_pressed();
                        if (cVar4 == '\0') {
                           pTVar19 = (TextEditor*)CanvasItem::get_local_mouse_position();
                           uVar7 = TextEdit::has_selection(iVar15);
                           _make_context_menu(pTVar19, this, uVar7, uVar5, uVar6);
                        }

                     }

                     lVar16 = *(long*)param_1;
                     if (lVar16 != 0) goto LAB_0010378a;
                  }

                  cVar4 = RefCounted::unreference();
                  if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) {
                     ( **(code**)( *(long*)pOVar13 + 0x140 ) )(pOVar13);
                     if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        Memory::free_static(pOVar13, false);
                        return;
                     }

                     goto LAB_00103c28;
                  }

               }

               LAB_00103740:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               LAB_00103c28:/* WARNING: Subroutine does not return */__stack_chk_fail();
            }

            /* TextEditor::TextEditor() */
            void TextEditor::TextEditor(TextEditor *this) {
               StringName *pSVar1;
               code *pcVar2;
               undefined8 uVar3;
               Object *pOVar4;
               Object *pOVar5;
               char cVar6;
               CodeTextEditor *this_00;
               CallableCustom *this_01;
               PopupMenu *pPVar7;
               BoxContainer *this_02;
               MenuButton *pMVar8;
               long *plVar9;
               Ref *pRVar10;
               String *pSVar11;
               long lVar12;
               GotoLinePopup *this_03;
               int iVar13;
               int iVar14;
               long in_FS_OFFSET;
               Object *local_78;
               Object *local_70;
               String local_68[8];
               long local_60;
               long local_58[3];
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               BoxContainer::BoxContainer((BoxContainer*)this, true);
               this[0xa0c] = (TextEditor)0x1;
               *(undefined***)this = &PTR__initialize_classv_0010fb78;
               *(undefined8*)( this + 0xa10 ) = 0;
               *(undefined8*)( this + 0xa18 ) = 0xffffffffffffffff;
               this[0xa30] = (TextEditor)0x0;
               *(undefined8*)( this + 0xa68 ) = 0;
               *(undefined8*)( this + 0xa98 ) = 2;
               *(undefined1(*) [16])( this + 0xa20 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0xa38 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0xa48 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0xa58 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0xa78 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0xa88 ) = (undefined1[16])0x0;
               this_00 = (CodeTextEditor*)operator_new(0xb28, "");
               CodeTextEditor::CodeTextEditor(this_00);
               postinitialize_handler((Object*)this_00);
               *(CodeTextEditor**)( this + 0xa20 ) = this_00;
               Node::add_child(this, this_00, 0, 0);
               pSVar1 = *(StringName**)( this + 0xa20 );
               StringName::StringName((StringName*)local_58, "separation", false);
               iVar13 = (int)(StringName*)local_58;
               Control::add_theme_constant_override(pSVar1, iVar13);
               if (( StringName::configured != '\0' ) && ( local_58[0] != 0 )) {
                  StringName::unref();
               }

               plVar9 = *(long**)( this + 0xa20 );
               pcVar2 = *(code**)( *plVar9 + 0x108 );
               create_custom_callable_function_pointer<TextEditor>((TextEditor*)local_58, (char*)this, (_func_void*)"&TextEditor::_load_theme_settings");
               StringName::StringName((StringName*)&local_60, "load_theme_settings", false);
               ( *pcVar2 )(plVar9, (StringName*)&local_60, (StringName*)local_58, 0);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               Callable::~Callable((Callable*)local_58);
               plVar9 = *(long**)( this + 0xa20 );
               pcVar2 = *(code**)( *plVar9 + 0x108 );
               create_custom_callable_function_pointer<TextEditor>((TextEditor*)local_58, (char*)this, (_func_void*)"&TextEditor::_validate_script");
               StringName::StringName((StringName*)&local_60, "validate_script", false);
               ( *pcVar2 )(plVar9, (StringName*)&local_60, (StringName*)local_58, 0);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               Callable::~Callable((Callable*)local_58);
               Control::set_anchors_and_offsets_preset(*(undefined8*)( this + 0xa20 ), 0xf, 0, 0);
               Control::set_v_size_flags(*(undefined8*)( this + 0xa20 ), 3);
               CodeTextEditor::show_toggle_scripts_button();
               CodeTextEditor::set_toggle_list_control(*(Control**)( this + 0xa20 ));
               CodeTextEditor::update_editor_settings();
               TextEdit::set_context_menu_enabled(SUB81(*(undefined8*)( *(long*)( this + 0xa20 ) + 0xa10 ), 0));
               plVar9 = *(long**)( *(long*)( this + 0xa20 ) + 0xa10 );
               pcVar2 = *(code**)( *plVar9 + 0x108 );
               this_01 = (CallableCustom*)operator_new(0x48, "");
               CallableCustom::CallableCustom(this_01);
               *(undefined**)( this_01 + 0x20 ) = &_LC11;
               *(TextEditor**)( this_01 + 0x28 ) = this;
               *(undefined1(*) [16])( this_01 + 0x30 ) = (undefined1[16])0x0;
               *(undefined***)this_01 = &PTR_hash_00110150;
               *(undefined8*)( this_01 + 0x40 ) = 0;
               uVar3 = *(undefined8*)( this + 0x60 );
               *(undefined8*)( this_01 + 0x10 ) = 0;
               *(undefined8*)( this_01 + 0x30 ) = uVar3;
               *(code**)( this_01 + 0x38 ) = _text_edit_gui_input;
               CallableCustomMethodPointerBase::_setup((uint*)this_01, (int)this_01 + 0x28);
               *(char**)( this_01 + 0x20 ) = "TextEditor::_text_edit_gui_input";
               Callable::Callable((Callable*)local_58, this_01);
               ( *pcVar2 )(plVar9, SceneStringNames::singleton + 0x28, (StringName*)local_58, 0);
               Callable::~Callable((Callable*)local_58);
               pPVar7 = (PopupMenu*)operator_new(0xfe0, "");
               PopupMenu::PopupMenu(pPVar7);
               postinitialize_handler((Object*)pPVar7);
               *(PopupMenu**)( this + 0xa60 ) = pPVar7;
               Node::add_child(this, pPVar7, 0, 0);
               plVar9 = *(long**)( this + 0xa60 );
               pcVar2 = *(code**)( *plVar9 + 0x108 );
               create_custom_callable_function_pointer<TextEditor,int>((TextEditor*)local_58, (char*)this, (_func_void_int*)"&TextEditor::_edit_option");
               ( *pcVar2 )(plVar9, SceneStringNames::singleton + 0x240, (StringName*)local_58, 0);
               Callable::~Callable((Callable*)local_58);
               this_02 = (BoxContainer*)operator_new(0xa10, "");
               BoxContainer::BoxContainer(this_02, false);
               this_02[0xa0c] = (BoxContainer)0x1;
               *(undefined***)this_02 = &PTR__initialize_classv_0010f158;
               postinitialize_handler((Object*)this_02);
               *(BoxContainer**)( this + 0xa38 ) = this_02;
               pMVar8 = (MenuButton*)operator_new(0xc68, "");
               local_58[0] = 0;
               MenuButton::MenuButton(pMVar8, (String*)local_58);
               postinitialize_handler((Object*)pMVar8);
               *(MenuButton**)( this + 0xa40 ) = pMVar8;
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               Control::set_shortcut_context(*(Node**)( this + 0xa40 ));
               Node::add_child(*(undefined8*)( this + 0xa38 ), *(undefined8*)( this + 0xa40 ), 0, 0);
               pSVar11 = *(String**)( this + 0xa40 );
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "");
               local_60 = 0;
               String::parse_latin1((String*)&local_60, "Edit");
               TTR(local_68, (String*)&local_60);
               Button::set_text(pSVar11);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               MenuButton::set_switch_on_hover(SUB81(*(undefined8*)( this + 0xa40 ), 0));
               plVar9 = *(long**)( this + 0xa40 );
               pcVar2 = *(code**)( *plVar9 + 0x108 );
               create_custom_callable_function_pointer<TextEditor>((TextEditor*)local_58, (char*)this, (_func_void*)"&TextEditor::_prepare_edit_menu");
               StringName::StringName((StringName*)&local_60, "about_to_popup", false);
               ( *pcVar2 )(plVar9, (StringName*)&local_60, (StringName*)local_58, 0);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               Callable::~Callable((Callable*)local_58);
               plVar9 = (long*)MenuButton::get_popup();
               pcVar2 = *(code**)( *plVar9 + 0x108 );
               create_custom_callable_function_pointer<TextEditor,int>((TextEditor*)local_58, (char*)this, (_func_void_int*)"&TextEditor::_edit_option");
               ( *pcVar2 )(plVar9, SceneStringNames::singleton + 0x240, (StringName*)local_58);
               Callable::~Callable((Callable*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "ui_undo");
               ED_GET_SHORTCUT((String*)&local_60);
               iVar14 = (int)(StringName*)&local_60;
               PopupMenu::add_shortcut(pRVar10, iVar14, false, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "ui_redo");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pSVar11 = (String*)MenuButton::get_popup();
               local_58[0] = 0;
               PopupMenu::add_separator(pSVar11, iVar13);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "ui_cut");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "ui_copy");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "ui_paste");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pSVar11 = (String*)MenuButton::get_popup();
               local_58[0] = 0;
               PopupMenu::add_separator(pSVar11, iVar13);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "ui_text_select_all");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pSVar11 = (String*)MenuButton::get_popup();
               local_58[0] = 0;
               PopupMenu::add_separator(pSVar11, iVar13);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/move_up");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/move_down");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/indent");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/unindent");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/delete_line");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/toggle_fold_line");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/fold_all_lines");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/unfold_all_lines");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pSVar11 = (String*)MenuButton::get_popup();
               local_58[0] = 0;
               PopupMenu::add_separator(pSVar11, iVar13);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/duplicate_selection");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/duplicate_lines");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/toggle_word_wrap");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/trim_trailing_whitespace");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/trim_final_newlines");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/convert_indent_to_spaces");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/convert_indent_to_tabs");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pSVar11 = (String*)MenuButton::get_popup();
               local_58[0] = 0;
               PopupMenu::add_separator(pSVar11, iVar13);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pPVar7 = (PopupMenu*)operator_new(0xfe0, "");
               PopupMenu::PopupMenu(pPVar7);
               postinitialize_handler((Object*)pPVar7);
               pSVar11 = (String*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "");
               local_60 = 0;
               String::parse_latin1((String*)&local_60, "Convert Case");
               TTR(local_68, (String*)&local_60);
               PopupMenu::add_submenu_node_item(pSVar11, (PopupMenu*)local_68, (int)pPVar7);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/convert_to_uppercase");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pPVar7, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/convert_to_lowercase");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pPVar7, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/capitalize");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pPVar7, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pcVar2 = *(code**)( *(long*)pPVar7 + 0x108 );
               create_custom_callable_function_pointer<TextEditor,int>((TextEditor*)local_58, (char*)this, (_func_void_int*)"&TextEditor::_edit_option");
               ( *pcVar2 )(pPVar7, SceneStringNames::singleton + 0x240, (StringName*)local_58, 0);
               Callable::~Callable((Callable*)local_58);
               pPVar7 = (PopupMenu*)operator_new(0xfe0, "");
               PopupMenu::PopupMenu(pPVar7);
               postinitialize_handler((Object*)pPVar7);
               *(PopupMenu**)( this + 0xa48 ) = pPVar7;
               pSVar11 = (String*)MenuButton::get_popup();
               uVar3 = *(undefined8*)( this + 0xa48 );
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "");
               local_60 = 0;
               String::parse_latin1((String*)&local_60, "Syntax Highlighter");
               TTR(local_68, (String*)&local_60);
               PopupMenu::add_submenu_node_item(pSVar11, (PopupMenu*)local_68, (int)uVar3);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               plVar9 = *(long**)( this + 0xa48 );
               pcVar2 = *(code**)( *plVar9 + 0x108 );
               create_custom_callable_function_pointer<TextEditor,int>((TextEditor*)local_58, (char*)this, (_func_void_int*)"&TextEditor::_change_syntax_highlighter");
               ( *pcVar2 )(plVar9, SceneStringNames::singleton + 0x240, (StringName*)local_58, 0);
               Callable::~Callable((Callable*)local_58);
               local_78 = (Object*)0x0;
               Ref<EditorPlainTextSyntaxHighlighter>::instantiate<>((Ref<EditorPlainTextSyntaxHighlighter>*)&local_78);
               pOVar4 = local_78;
               local_60 = 0;
               if (local_78 != (Object*)0x0) {
                  lVar12 = __dynamic_cast(local_78, &Object::typeinfo, &EditorSyntaxHighlighter::typeinfo, 0);
                  if (lVar12 != 0) {
                     local_58[0] = 0;
                     local_60 = lVar12;
                     cVar6 = RefCounted::reference();
                     if (cVar6 == '\0') {
                        local_60 = 0;
                     }

                     Ref<EditorSyntaxHighlighter>::unref((Ref<EditorSyntaxHighlighter>*)local_58);
                  }

               }

               add_syntax_highlighter(this, (StringName*)&local_60);
               Ref<EditorSyntaxHighlighter>::unref((Ref<EditorSyntaxHighlighter>*)&local_60);
               local_70 = (Object*)0x0;
               Ref<EditorStandardSyntaxHighlighter>::instantiate<>((Ref<EditorStandardSyntaxHighlighter>*)&local_70);
               pOVar5 = local_70;
               local_60 = 0;
               if (local_70 != (Object*)0x0) {
                  lVar12 = __dynamic_cast(local_70, &Object::typeinfo, &EditorSyntaxHighlighter::typeinfo, 0);
                  if (lVar12 != 0) {
                     local_58[0] = 0;
                     local_60 = lVar12;
                     cVar6 = RefCounted::reference();
                     if (cVar6 == '\0') {
                        local_60 = 0;
                     }

                     Ref<EditorSyntaxHighlighter>::unref((Ref<EditorSyntaxHighlighter>*)local_58);
                  }

               }

               add_syntax_highlighter(this, (StringName*)&local_60);
               Ref<EditorSyntaxHighlighter>::unref((Ref<EditorSyntaxHighlighter>*)&local_60);
               local_60 = 0;
               if (pOVar4 != (Object*)0x0) {
                  lVar12 = __dynamic_cast(pOVar4, &Object::typeinfo, &EditorSyntaxHighlighter::typeinfo, 0);
                  if (lVar12 != 0) {
                     local_58[0] = 0;
                     local_60 = lVar12;
                     cVar6 = RefCounted::reference();
                     if (cVar6 == '\0') {
                        local_60 = 0;
                     }

                     Ref<EditorSyntaxHighlighter>::unref((Ref<EditorSyntaxHighlighter>*)local_58);
                  }

               }

               set_syntax_highlighter(this, (StringName*)&local_60);
               Ref<EditorSyntaxHighlighter>::unref((Ref<EditorSyntaxHighlighter>*)&local_60);
               pMVar8 = (MenuButton*)operator_new(0xc68, "");
               local_58[0] = 0;
               MenuButton::MenuButton(pMVar8, (String*)local_58);
               postinitialize_handler((Object*)pMVar8);
               *(MenuButton**)( this + 0xa50 ) = pMVar8;
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               Control::set_shortcut_context(*(Node**)( this + 0xa50 ));
               Node::add_child(*(undefined8*)( this + 0xa38 ), *(undefined8*)( this + 0xa50 ), 0, 0);
               pSVar11 = *(String**)( this + 0xa50 );
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "");
               local_60 = 0;
               String::parse_latin1((String*)&local_60, "Search");
               TTR(local_68, (String*)&local_60);
               Button::set_text(pSVar11);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               MenuButton::set_switch_on_hover(SUB81(*(undefined8*)( this + 0xa50 ), 0));
               plVar9 = (long*)MenuButton::get_popup();
               pcVar2 = *(code**)( *plVar9 + 0x108 );
               create_custom_callable_function_pointer<TextEditor,int>((TextEditor*)local_58, (char*)this, (_func_void_int*)"&TextEditor::_edit_option");
               ( *pcVar2 )(plVar9, SceneStringNames::singleton + 0x240, (StringName*)local_58);
               Callable::~Callable((Callable*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/find");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/find_next");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/find_previous");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/replace");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pSVar11 = (String*)MenuButton::get_popup();
               local_58[0] = 0;
               PopupMenu::add_separator(pSVar11, iVar13);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/find_in_files");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/replace_in_files");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pMVar8 = (MenuButton*)operator_new(0xc68, "");
               local_58[0] = 0;
               MenuButton::MenuButton(pMVar8, (String*)local_58);
               postinitialize_handler((Object*)pMVar8);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               Control::set_shortcut_context((Node*)pMVar8);
               Node::add_child(*(undefined8*)( this + 0xa38 ), pMVar8, 0, 0);
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "");
               local_60 = 0;
               String::parse_latin1((String*)&local_60, "Go To");
               TTR(local_68, (String*)&local_60);
               Button::set_text((String*)pMVar8);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               MenuButton::set_switch_on_hover(SUB81(pMVar8, 0));
               plVar9 = (long*)MenuButton::get_popup();
               pcVar2 = *(code**)( *plVar9 + 0x108 );
               create_custom_callable_function_pointer<TextEditor,int>((TextEditor*)local_58, (char*)this, (_func_void_int*)"&TextEditor::_edit_option");
               ( *pcVar2 )(plVar9, SceneStringNames::singleton + 0x240, (StringName*)local_58);
               Callable::~Callable((Callable*)local_58);
               pRVar10 = (Ref*)MenuButton::get_popup();
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "script_text_editor/goto_line");
               ED_GET_SHORTCUT((String*)&local_60);
               PopupMenu::add_shortcut(pRVar10, iVar14, true, false);
               Ref<Shortcut>::unref((Ref<Shortcut>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pSVar11 = (String*)MenuButton::get_popup();
               local_58[0] = 0;
               PopupMenu::add_separator(pSVar11, iVar13);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pPVar7 = (PopupMenu*)operator_new(0xfe0, "");
               PopupMenu::PopupMenu(pPVar7);
               postinitialize_handler((Object*)pPVar7);
               *(PopupMenu**)( this + 0xa58 ) = pPVar7;
               pSVar11 = (String*)MenuButton::get_popup();
               uVar3 = *(undefined8*)( this + 0xa58 );
               local_58[0] = 0;
               String::parse_latin1((String*)local_58, "");
               local_60 = 0;
               String::parse_latin1((String*)&local_60, "Bookmarks");
               TTR(local_68, (String*)&local_60);
               PopupMenu::add_submenu_node_item(pSVar11, (PopupMenu*)local_68, (int)uVar3);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               _update_bookmark_list(this);
               plVar9 = *(long**)( this + 0xa58 );
               pcVar2 = *(code**)( *plVar9 + 0x108 );
               create_custom_callable_function_pointer<TextEditor>((TextEditor*)local_58, (char*)this, (_func_void*)"&TextEditor::_update_bookmark_list");
               StringName::StringName((StringName*)&local_60, "about_to_popup", false);
               ( *pcVar2 )(plVar9, (StringName*)&local_60, (StringName*)local_58, 0);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               Callable::~Callable((Callable*)local_58);
               plVar9 = *(long**)( this + 0xa58 );
               pcVar2 = *(code**)( *plVar9 + 0x108 );
               create_custom_callable_function_pointer<TextEditor,int>((TextEditor*)local_58, (char*)this, (_func_void_int*)"&TextEditor::_bookmark_item_pressed");
               StringName::StringName((StringName*)&local_60, "index_pressed", false);
               ( *pcVar2 )(plVar9, (StringName*)&local_60, (StringName*)local_58, 0);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               Callable::~Callable((Callable*)local_58);
               this_03 = (GotoLinePopup*)operator_new(0xdc8, "");
               GotoLinePopup::GotoLinePopup(this_03);
               postinitialize_handler((Object*)this_03);
               *(GotoLinePopup**)( this + 0xa68 ) = this_03;
               Node::add_child(this, this_03, 0, 0);
               if (pOVar5 != (Object*)0x0) {
                  cVar6 = RefCounted::unreference();
                  if (cVar6 != '\0') {
                     cVar6 = predelete_handler(pOVar5);
                     if (cVar6 != '\0') {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                  }

               }

               if (pOVar4 != (Object*)0x0) {
                  cVar6 = RefCounted::unreference();
                  if (cVar6 != '\0') {
                     cVar6 = predelete_handler(pOVar4);
                     if (cVar6 != '\0') {
                        ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                        if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                           Memory::free_static(pOVar4, false);
                           return;
                        }

                        goto LAB_001055f0;
                     }

                  }

               }

               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               LAB_001055f0:/* WARNING: Subroutine does not return */__stack_chk_fail();
            }

            /* TextEditor::create_editor(Ref<Resource> const&) */
            TextEditor *TextEditor::create_editor(Ref *param_1) {
               long lVar1;
               TextEditor *this;
               this * (TextEditor**)param_1;
               if (this != (TextEditor*)0x0) {
                  lVar1 = __dynamic_cast(this, &Object::typeinfo, &TextFile::typeinfo, 0);
                  if (( lVar1 == 0 ) && ( lVar1 = lVar1 == 0 )) {
                     return (TextEditor*)0x0;
                  }

                  this(TextEditor * operator_new(0xaa0, ""));
                  TextEditor(this);
                  postinitialize_handler((Object*)this);
               }

               return this;
            }

            /* DefaultAllocator::alloc(unsigned long) */
            void DefaultAllocator::alloc(ulong param_1) {
               Memory::alloc_static(param_1, false);
               return;
            }

            /* StringName::~StringName() */
            void StringName::~StringName(StringName *this) {
               if (( configured != '\0' ) && ( *(long*)this != 0 )) {
                  StringName::unref();
                  return;
               }

               return;
            }

            /* Object::_bind_compatibility_methods() */
            void Object::_bind_compatibility_methods(void) {
               return;
            }

            /* Object::_set(StringName const&, Variant const&) */
            undefined8 Object::_set(StringName *param_1, Variant *param_2) {
               return 0;
            }

            /* Object::_get(StringName const&, Variant&) const */
            undefined8 Object::_get(StringName *param_1, Variant *param_2) {
               return 0;
            }

            /* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */
            void Object::_get_property_list(List *param_1) {
               return;
            }

            /* Object::_validate_property(PropertyInfo&) const */
            void Object::_validate_property(PropertyInfo *param_1) {
               return;
            }

            /* Object::_property_can_revert(StringName const&) const */
            undefined8 Object::_property_can_revert(StringName *param_1) {
               return 0;
            }

            /* Object::_property_get_revert(StringName const&, Variant&) const */
            undefined8 Object::_property_get_revert(StringName *param_1, Variant *param_2) {
               return 0;
            }

            /* Object::_notification(int) */
            void Object::_notification(int param_1) {
               return;
            }

            /* Object::get_save_class() const */
            void Object::get_save_class(void) {
               long lVar1;
               long *in_RSI;
               long in_FS_OFFSET;
               lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
               ( **(code**)( *in_RSI + 0x48 ) )();
               if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* Resource::set_last_modified_time(unsigned long) */
            void Resource::set_last_modified_time(Resource *this, ulong param_1) {
               *(ulong*)( this + 0x198 ) = param_1;
               return;
            }

            /* Resource::set_import_last_modified_time(unsigned long) */
            void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
               *(ulong*)( this + 0x1a0 ) = param_1;
               return;
            }

            /* Control::_top_level_changed() */
            void Control::_top_level_changed(void) {
               return;
            }

            /* SyntaxHighlighter::is_class_ptr(void*) const */
            uint SyntaxHighlighter::is_class_ptr(SyntaxHighlighter *this, void *param_1) {
               return (uint)CONCAT71(0x1103, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1103, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1103, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1103, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
            }

            /* SyntaxHighlighter::_getv(StringName const&, Variant&) const */
            undefined8 SyntaxHighlighter::_getv(StringName *param_1, Variant *param_2) {
               return 0;
            }

            /* SyntaxHighlighter::_setv(StringName const&, Variant const&) */
            undefined8 SyntaxHighlighter::_setv(StringName *param_1, Variant *param_2) {
               return 0;
            }

            /* SyntaxHighlighter::_validate_propertyv(PropertyInfo&) const */
            void SyntaxHighlighter::_validate_propertyv(PropertyInfo *param_1) {
               return;
            }

            /* SyntaxHighlighter::_property_can_revertv(StringName const&) const */
            undefined8 SyntaxHighlighter::_property_can_revertv(StringName *param_1) {
               return 0;
            }

            /* SyntaxHighlighter::_property_get_revertv(StringName const&, Variant&) const */
            undefined8 SyntaxHighlighter::_property_get_revertv(StringName *param_1, Variant *param_2) {
               return 0;
            }

            /* SyntaxHighlighter::_notificationv(int, bool) */
            void SyntaxHighlighter::_notificationv(int param_1, bool param_2) {
               return;
            }

            /* SyntaxHighlighter::_clear_highlighting_cache() */
            void SyntaxHighlighter::_clear_highlighting_cache(void) {
               return;
            }

            /* SyntaxHighlighter::_update_cache() */
            void SyntaxHighlighter::_update_cache(void) {
               return;
            }

            /* ScriptEditorBase::reload(bool) */
            void ScriptEditorBase::reload(bool param_1) {
               return;
            }

            /* ScriptEditorBase::can_lose_focus_on_node_selection() */
            undefined8 ScriptEditorBase::can_lose_focus_on_node_selection(void) {
               return 1;
            }

            /* ScriptEditorBase::update_toggle_scripts_button() */
            void ScriptEditorBase::update_toggle_scripts_button(void) {
               return;
            }

            /* TextEditor::set_breakpoint(int, bool) */
            void TextEditor::set_breakpoint(int param_1, bool param_2) {
               return;
            }

            /* TextEditor::clear_breakpoints() */
            void TextEditor::clear_breakpoints(void) {
               return;
            }

            /* TextEditor::can_lose_focus_on_node_selection() */
            undefined8 TextEditor::can_lose_focus_on_node_selection(void) {
               return 1;
            }

            /* CallableCustomMethodPointer<TextEditor, void, int>::~CallableCustomMethodPointer() */
            void CallableCustomMethodPointer<TextEditor,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<TextEditor,void,int> *this) {
               return;
            }

            /* CallableCustomMethodPointer<TextEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */
            void CallableCustomMethodPointer<TextEditor,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<TextEditor,void,Ref<InputEvent>const&> *this) {
               return;
            }

            /* CallableCustomMethodPointer<TextEditor, void>::~CallableCustomMethodPointer() */
            void CallableCustomMethodPointer<TextEditor,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<TextEditor,void> *this) {
               return;
            }

            /* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */
            void CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Control,void> *this) {
               return;
            }

            /* CallableCustomMethodPointer<TextEditor, void, int>::get_argument_count(bool&) const */
            undefined8 CallableCustomMethodPointer<TextEditor,void,int>::get_argument_count(CallableCustomMethodPointer<TextEditor,void,int> *this, bool *param_1) {
               *param_1 = true;
               return 1;
            }

            /* CallableCustomMethodPointer<TextEditor, void, Ref<InputEvent> const&>::get_argument_count(bool&)
   const */
            undefined8 CallableCustomMethodPointer<TextEditor,void,Ref<InputEvent>const&>::get_argument_count(CallableCustomMethodPointer<TextEditor,void,Ref<InputEvent>const&> *this, bool *param_1) {
               *param_1 = true;
               return 1;
            }

            /* CallableCustomMethodPointer<TextEditor, void>::get_argument_count(bool&) const */
            undefined8 CallableCustomMethodPointer<TextEditor,void>::get_argument_count(CallableCustomMethodPointer<TextEditor,void> *this, bool *param_1) {
               *param_1 = true;
               return 0;
            }

            /* CallableCustomMethodPointer<Control, void>::get_argument_count(bool&) const */
            undefined8 CallableCustomMethodPointer<Control,void>::get_argument_count(CallableCustomMethodPointer<Control,void> *this, bool *param_1) {
               *param_1 = true;
               return 0;
            }

            /* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */
            void CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Control,void> *this) {
               operator_delete(this, 0x48);
               return;
            }

            /* CallableCustomMethodPointer<TextEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */
            void CallableCustomMethodPointer<TextEditor,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<TextEditor,void,Ref<InputEvent>const&> *this) {
               operator_delete(this, 0x48);
               return;
            }

            /* CallableCustomMethodPointer<TextEditor, void>::~CallableCustomMethodPointer() */
            void CallableCustomMethodPointer<TextEditor,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<TextEditor,void> *this) {
               operator_delete(this, 0x48);
               return;
            }

            /* CallableCustomMethodPointer<TextEditor, void, int>::~CallableCustomMethodPointer() */
            void CallableCustomMethodPointer<TextEditor,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<TextEditor,void,int> *this) {
               operator_delete(this, 0x48);
               return;
            }

            /* CallableCustomMethodPointerBase::get_method() const */
            void CallableCustomMethodPointerBase::get_method(void) {
               long in_RSI;
               StringName *in_RDI;
               StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
               return;
            }

            /* SyntaxHighlighter::_get_line_syntax_highlighting_impl(int) */
            undefined8 SyntaxHighlighter::_get_line_syntax_highlighting_impl(int param_1) {
               undefined4 in_register_0000003c;
               Dictionary::Dictionary((Dictionary*)CONCAT44(in_register_0000003c, param_1));
               return CONCAT44(in_register_0000003c, param_1);
            }

            /* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */
            undefined8 HBoxContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
               undefined8 uVar1;
               if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
                  uVar1 = Control::_property_get_revert(param_1, param_2);
                  return uVar1;
               }

               return 0;
            }

            /* ScriptEditorBase::_property_get_revertv(StringName const&, Variant&) const */
            undefined8 ScriptEditorBase::_property_get_revertv(StringName *param_1, Variant *param_2) {
               undefined8 uVar1;
               if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
                  uVar1 = Control::_property_get_revert(param_1, param_2);
                  return uVar1;
               }

               return 0;
            }

            /* TextEditor::_property_get_revertv(StringName const&, Variant&) const */
            undefined8 TextEditor::_property_get_revertv(StringName *param_1, Variant *param_2) {
               undefined8 uVar1;
               if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
                  uVar1 = Control::_property_get_revert(param_1, param_2);
                  return uVar1;
               }

               return 0;
            }

            /* HBoxContainer::_property_can_revertv(StringName const&) const */
            undefined8 HBoxContainer::_property_can_revertv(StringName *param_1) {
               undefined8 uVar1;
               if ((code*)PTR__property_can_revert_00114008 != Object::_property_can_revert) {
                  uVar1 = Control::_property_can_revert(param_1);
                  return uVar1;
               }

               return 0;
            }

            /* ScriptEditorBase::_property_can_revertv(StringName const&) const */
            undefined8 ScriptEditorBase::_property_can_revertv(StringName *param_1) {
               undefined8 uVar1;
               if ((code*)PTR__property_can_revert_00114008 != Object::_property_can_revert) {
                  uVar1 = Control::_property_can_revert(param_1);
                  return uVar1;
               }

               return 0;
            }

            /* TextEditor::_property_can_revertv(StringName const&) const */
            undefined8 TextEditor::_property_can_revertv(StringName *param_1) {
               undefined8 uVar1;
               if ((code*)PTR__property_can_revert_00114008 != Object::_property_can_revert) {
                  uVar1 = Control::_property_can_revert(param_1);
                  return uVar1;
               }

               return 0;
            }

            /* TextEditor::_get_class_namev() const */
            undefined8 *TextEditor::_get_class_namev(void) {
               int iVar1;
               if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
                  _get_class_namev()
                  __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
                  __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
               }

               if (_get_class_namev()::_class_name_static != 0) {
                  if (*(long*)( _get_class_namev() ) != 0) {
                     LAB_00105b73:return &_get_class_namev();
                  }

                  if (*(long*)( _get_class_namev() ) != 0) {
                     if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00105b73;
                     StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "TextEditor");
                     goto LAB_00105bde;
                  }

               }

               StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "TextEditor");
               LAB_00105bde:return &_get_class_namev();
            }

            /* CallableCustomMethodPointer<TextEditor, void, Ref<InputEvent> const&>::get_object() const */
            undefined8 CallableCustomMethodPointer<TextEditor,void,Ref<InputEvent>const&>::get_object(CallableCustomMethodPointer<TextEditor,void,Ref<InputEvent>const&> *this) {
               long lVar1;
               undefined8 uVar2;
               uint uVar3;
               ulong *puVar4;
               long in_FS_OFFSET;
               bool bVar5;
               lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
               uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
               if (uVar3 < (uint)ObjectDB::slot_max) {
                  while (true) {
                     LOCK();
                     bVar5 = (char)ObjectDB::spin_lock == '\0';
                     if (bVar5) {
                        ObjectDB::spin_lock._0_1_ = '\x01';
                     }

                     UNLOCK();
                     if (bVar5) break;
                     do {} while ( (char)ObjectDB::spin_lock != '\0' );
                  }
;
                  puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
                  if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
                     uVar2 = 0;
                     ObjectDB::spin_lock._0_1_ = '\0';
                     goto LAB_00105d0d;
                  }

                  ObjectDB::spin_lock._0_1_ = '\0';
                  if (puVar4[1] != 0) {
                     uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
                     goto LAB_00105d0d;
                  }

               }
 else {
                  _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
               }

               uVar2 = 0;
               LAB_00105d0d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return uVar2;
            }

            /* CallableCustomMethodPointer<TextEditor, void, int>::get_object() const */
            undefined8 CallableCustomMethodPointer<TextEditor,void,int>::get_object(CallableCustomMethodPointer<TextEditor,void,int> *this) {
               long lVar1;
               undefined8 uVar2;
               uint uVar3;
               ulong *puVar4;
               long in_FS_OFFSET;
               bool bVar5;
               lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
               uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
               if (uVar3 < (uint)ObjectDB::slot_max) {
                  while (true) {
                     LOCK();
                     bVar5 = (char)ObjectDB::spin_lock == '\0';
                     if (bVar5) {
                        ObjectDB::spin_lock._0_1_ = '\x01';
                     }

                     UNLOCK();
                     if (bVar5) break;
                     do {} while ( (char)ObjectDB::spin_lock != '\0' );
                  }
;
                  puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
                  if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
                     uVar2 = 0;
                     ObjectDB::spin_lock._0_1_ = '\0';
                     goto LAB_00105e0d;
                  }

                  ObjectDB::spin_lock._0_1_ = '\0';
                  if (puVar4[1] != 0) {
                     uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
                     goto LAB_00105e0d;
                  }

               }
 else {
                  _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
               }

               uVar2 = 0;
               LAB_00105e0d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return uVar2;
            }

            /* CallableCustomMethodPointer<TextEditor, void>::get_object() const */
            undefined8 CallableCustomMethodPointer<TextEditor,void>::get_object(CallableCustomMethodPointer<TextEditor,void> *this) {
               long lVar1;
               undefined8 uVar2;
               uint uVar3;
               ulong *puVar4;
               long in_FS_OFFSET;
               bool bVar5;
               lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
               uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
               if (uVar3 < (uint)ObjectDB::slot_max) {
                  while (true) {
                     LOCK();
                     bVar5 = (char)ObjectDB::spin_lock == '\0';
                     if (bVar5) {
                        ObjectDB::spin_lock._0_1_ = '\x01';
                     }

                     UNLOCK();
                     if (bVar5) break;
                     do {} while ( (char)ObjectDB::spin_lock != '\0' );
                  }
;
                  puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
                  if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
                     uVar2 = 0;
                     ObjectDB::spin_lock._0_1_ = '\0';
                     goto LAB_00105f0d;
                  }

                  ObjectDB::spin_lock._0_1_ = '\0';
                  if (puVar4[1] != 0) {
                     uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
                     goto LAB_00105f0d;
                  }

               }
 else {
                  _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
               }

               uVar2 = 0;
               LAB_00105f0d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return uVar2;
            }

            /* CallableCustomMethodPointer<Control, void>::get_object() const */
            undefined8 CallableCustomMethodPointer<Control,void>::get_object(CallableCustomMethodPointer<Control,void> *this) {
               long lVar1;
               undefined8 uVar2;
               uint uVar3;
               ulong *puVar4;
               long in_FS_OFFSET;
               bool bVar5;
               lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
               uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
               if (uVar3 < (uint)ObjectDB::slot_max) {
                  while (true) {
                     LOCK();
                     bVar5 = (char)ObjectDB::spin_lock == '\0';
                     if (bVar5) {
                        ObjectDB::spin_lock._0_1_ = '\x01';
                     }

                     UNLOCK();
                     if (bVar5) break;
                     do {} while ( (char)ObjectDB::spin_lock != '\0' );
                  }
;
                  puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
                  if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
                     uVar2 = 0;
                     ObjectDB::spin_lock._0_1_ = '\0';
                     goto LAB_0010600d;
                  }

                  ObjectDB::spin_lock._0_1_ = '\0';
                  if (puVar4[1] != 0) {
                     uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
                     goto LAB_0010600d;
                  }

               }
 else {
                  _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
               }

               uVar2 = 0;
               LAB_0010600d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return uVar2;
            }

            /* HBoxContainer::_validate_propertyv(PropertyInfo&) const */
            void HBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
               for (int i = 0; i < 3; i++) {
                  Node::_validate_property(param_1);
               }

               if ((code*)PTR__validate_property_00114010 == Control::_validate_property) {
                  return;
               }

               BoxContainer::_validate_property(param_1);
               return;
            }

            /* TextEditor::_validate_propertyv(PropertyInfo&) const */
            void TextEditor::_validate_propertyv(PropertyInfo *param_1) {
               for (int i = 0; i < 3; i++) {
                  Node::_validate_property(param_1);
               }

               if ((code*)PTR__validate_property_00114010 == Control::_validate_property) {
                  return;
               }

               BoxContainer::_validate_property(param_1);
               return;
            }

            /* ScriptEditorBase::_validate_propertyv(PropertyInfo&) const */
            void ScriptEditorBase::_validate_propertyv(PropertyInfo *param_1) {
               for (int i = 0; i < 3; i++) {
                  Node::_validate_property(param_1);
               }

               if ((code*)PTR__validate_property_00114010 == Control::_validate_property) {
                  return;
               }

               BoxContainer::_validate_property(param_1);
               return;
            }

            /* HBoxContainer::is_class_ptr(void*) const */
            uint HBoxContainer::is_class_ptr(void *param_1) {
               uint uVar1;
               undefined4 in_EDX;
               undefined4 *in_RSI;
               uVar1 = 1;
               if (in_RSI != &get_class_ptr_static()::ptr) {
                  uVar1 = (uint)CONCAT71(0x1103, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1103, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1103, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1103, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1103, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
               }

               return uVar1;
            }

            /* ScriptEditorBase::is_class_ptr(void*) const */
            ulong ScriptEditorBase::is_class_ptr(void *param_1) {
               undefined4 in_EDX;
               undefined4 *in_RSI;
               if (in_RSI == &VBoxContainer::get_class_ptr_static() || in_RSI == &get_class_ptr_static()::ptr) {
                  return CONCAT71(0x1103, in_RSI == &VBoxContainer::get_class_ptr_static() || in_RSI == &get_class_ptr_static(), ::ptr);
               }

               return ( ulong )((uint)CONCAT71(0x1103, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1103, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1103, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1103, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1103, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr));
            }

            /* TextEditor::is_class_ptr(void*) const */
            uint TextEditor::is_class_ptr(void *param_1) {
               byte bVar1;
               uint uVar2;
               undefined4 in_EDX;
               undefined4 *in_RSI;
               uVar2 = (uint)CONCAT71(0x1103, in_RSI == &ScriptEditorBase::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1102, in_RSI == &get_class_ptr_static(), ::ptr);
               bVar1= (byte)uVar2 | in_RSI == &VBoxContainer::get_class_ptr_static()::ptr
               ;
               if (bVar1 != 0) {
                  return CONCAT31(( int3 )(uVar2 >> 8), bVar1);
               }

               return (uint)CONCAT71(0x1103, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1103, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1103, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1103, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1103, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
            }

            /* TextEditor::_setv(StringName const&, Variant const&) */
            undefined8 TextEditor::_setv(StringName *param_1, Variant *param_2) {
               undefined8 uVar1;
               uVar1 = CanvasItem::_set(param_1, param_2);
               if ((char)uVar1 == '\0') {
                  if ((code*)PTR__set_00114018 != CanvasItem::_set) {
                     uVar1 = Control::_set(param_1, param_2);
                     return uVar1;
                  }

                  uVar1 = 0;
               }

               return uVar1;
            }

            /* HBoxContainer::_setv(StringName const&, Variant const&) */
            undefined8 HBoxContainer::_setv(StringName *param_1, Variant *param_2) {
               undefined8 uVar1;
               uVar1 = CanvasItem::_set(param_1, param_2);
               if ((char)uVar1 == '\0') {
                  if ((code*)PTR__set_00114018 != CanvasItem::_set) {
                     uVar1 = Control::_set(param_1, param_2);
                     return uVar1;
                  }

                  uVar1 = 0;
               }

               return uVar1;
            }

            /* ScriptEditorBase::_setv(StringName const&, Variant const&) */
            undefined8 ScriptEditorBase::_setv(StringName *param_1, Variant *param_2) {
               undefined8 uVar1;
               uVar1 = CanvasItem::_set(param_1, param_2);
               if ((char)uVar1 == '\0') {
                  if ((code*)PTR__set_00114018 != CanvasItem::_set) {
                     uVar1 = Control::_set(param_1, param_2);
                     return uVar1;
                  }

                  uVar1 = 0;
               }

               return uVar1;
            }

            /* RBMap<int, Dictionary, Comparator<int>, DefaultAllocator>::_cleanup_tree(RBMap<int, Dictionary,
   Comparator<int>, DefaultAllocator>::Element*) [clone .part.0] */
            void RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree(RBMap<int,Dictionary,Comparator<int>,DefaultAllocator> *this, Element *param_1) {
               Element *pEVar1;
               Element *pEVar2;
               Element *pEVar3;
               Element *pEVar4;
               Element *pEVar5;
               Element *pEVar6;
               pEVar1 = *(Element**)( param_1 + 0x10 );
               pEVar2 = *(Element**)( this + 8 );
               if (pEVar1 != pEVar2) {
                  pEVar3 = *(Element**)( pEVar1 + 0x10 );
                  if (pEVar2 != pEVar3) {
                     pEVar5 = *(Element**)( pEVar3 + 0x10 );
                     if (pEVar2 != pEVar5) {
                        pEVar6 = *(Element**)( pEVar5 + 0x10 );
                        if (pEVar2 != pEVar6) {
                           pEVar4 = *(Element**)( pEVar6 + 0x10 );
                           if (pEVar2 != pEVar4) {
                              _cleanup_tree(this, pEVar4);
                              pEVar4 = *(Element**)( this + 8 );
                           }

                           if (pEVar4 != *(Element**)( pEVar6 + 8 )) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                           }

                           Dictionary::~Dictionary((Dictionary*)( pEVar6 + 0x38 ));
                           Memory::free_static(pEVar6, false);
                           pEVar6 = *(Element**)( this + 8 );
                        }

                        pEVar2 = *(Element**)( pEVar5 + 8 );
                        if (pEVar2 != pEVar6) {
                           pEVar4 = *(Element**)( pEVar2 + 0x10 );
                           if (pEVar6 != pEVar4) {
                              _cleanup_tree(this, pEVar4);
                              pEVar4 = *(Element**)( this + 8 );
                           }

                           if (*(Element**)( pEVar2 + 8 ) != pEVar4) {
                              _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
                           }

                           Dictionary::~Dictionary((Dictionary*)( pEVar2 + 0x38 ));
                           Memory::free_static(pEVar2, false);
                        }

                        Dictionary::~Dictionary((Dictionary*)( pEVar5 + 0x38 ));
                        Memory::free_static(pEVar5, false);
                        pEVar5 = *(Element**)( this + 8 );
                     }

                     pEVar2 = *(Element**)( pEVar3 + 8 );
                     if (pEVar2 != pEVar5) {
                        pEVar6 = *(Element**)( pEVar2 + 0x10 );
                        if (pEVar6 != pEVar5) {
                           if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                              pEVar5 = *(Element**)( this + 8 );
                           }

                           if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                           }

                           Dictionary::~Dictionary((Dictionary*)( pEVar6 + 0x38 ));
                           Memory::free_static(pEVar6, false);
                           pEVar5 = *(Element**)( this + 8 );
                        }

                        pEVar6 = *(Element**)( pEVar2 + 8 );
                        if (pEVar6 != pEVar5) {
                           if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                              pEVar5 = *(Element**)( this + 8 );
                           }

                           if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                           }

                           Dictionary::~Dictionary((Dictionary*)( pEVar6 + 0x38 ));
                           Memory::free_static(pEVar6, false);
                        }

                        Dictionary::~Dictionary((Dictionary*)( pEVar2 + 0x38 ));
                        Memory::free_static(pEVar2, false);
                     }

                     Dictionary::~Dictionary((Dictionary*)( pEVar3 + 0x38 ));
                     Memory::free_static(pEVar3, false);
                     pEVar3 = *(Element**)( this + 8 );
                  }

                  pEVar2 = *(Element**)( pEVar1 + 8 );
                  if (pEVar2 != pEVar3) {
                     pEVar5 = *(Element**)( pEVar2 + 0x10 );
                     if (pEVar5 != pEVar3) {
                        pEVar6 = *(Element**)( pEVar5 + 0x10 );
                        if (pEVar6 != pEVar3) {
                           if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                              pEVar3 = *(Element**)( this + 8 );
                           }

                           if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                           }

                           Dictionary::~Dictionary((Dictionary*)( pEVar6 + 0x38 ));
                           Memory::free_static(pEVar6, false);
                           pEVar3 = *(Element**)( this + 8 );
                        }

                        pEVar6 = *(Element**)( pEVar5 + 8 );
                        if (pEVar6 != pEVar3) {
                           if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                              pEVar3 = *(Element**)( this + 8 );
                           }

                           if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                           }

                           Dictionary::~Dictionary((Dictionary*)( pEVar6 + 0x38 ));
                           Memory::free_static(pEVar6, false);
                        }

                        Dictionary::~Dictionary((Dictionary*)( pEVar5 + 0x38 ));
                        Memory::free_static(pEVar5, false);
                        pEVar3 = *(Element**)( this + 8 );
                     }

                     pEVar5 = *(Element**)( pEVar2 + 8 );
                     if (pEVar5 != pEVar3) {
                        pEVar6 = *(Element**)( pEVar5 + 0x10 );
                        if (pEVar6 != pEVar3) {
                           if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                              pEVar3 = *(Element**)( this + 8 );
                           }

                           if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                           }

                           Dictionary::~Dictionary((Dictionary*)( pEVar6 + 0x38 ));
                           Memory::free_static(pEVar6, false);
                           pEVar3 = *(Element**)( this + 8 );
                        }

                        pEVar6 = *(Element**)( pEVar5 + 8 );
                        if (pEVar6 != pEVar3) {
                           if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                              pEVar3 = *(Element**)( this + 8 );
                           }

                           if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                           }

                           Dictionary::~Dictionary((Dictionary*)( pEVar6 + 0x38 ));
                           Memory::free_static(pEVar6, false);
                        }

                        Dictionary::~Dictionary((Dictionary*)( pEVar5 + 0x38 ));
                        Memory::free_static(pEVar5, false);
                     }

                     Dictionary::~Dictionary((Dictionary*)( pEVar2 + 0x38 ));
                     Memory::free_static(pEVar2, false);
                  }

                  Dictionary::~Dictionary((Dictionary*)( pEVar1 + 0x38 ));
                  Memory::free_static(pEVar1, false);
                  pEVar2 = *(Element**)( this + 8 );
               }

               pEVar1 = *(Element**)( param_1 + 8 );
               if (pEVar1 != pEVar2) {
                  pEVar3 = *(Element**)( pEVar1 + 0x10 );
                  if (pEVar2 != pEVar3) {
                     pEVar5 = *(Element**)( pEVar3 + 0x10 );
                     if (pEVar2 != pEVar5) {
                        pEVar6 = *(Element**)( pEVar5 + 0x10 );
                        if (pEVar2 != pEVar6) {
                           pEVar4 = *(Element**)( pEVar6 + 0x10 );
                           if (pEVar2 != pEVar4) {
                              _cleanup_tree(this, pEVar4);
                              pEVar4 = *(Element**)( this + 8 );
                           }

                           if (*(Element**)( pEVar6 + 8 ) != pEVar4) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                           }

                           Dictionary::~Dictionary((Dictionary*)( pEVar6 + 0x38 ));
                           Memory::free_static(pEVar6, false);
                           pEVar6 = *(Element**)( this + 8 );
                        }

                        pEVar2 = *(Element**)( pEVar5 + 8 );
                        if (pEVar2 != pEVar6) {
                           if (*(Element**)( pEVar2 + 0x10 ) != pEVar6) {
                              _cleanup_tree(this, *(Element**)( pEVar2 + 0x10 ));
                              pEVar6 = *(Element**)( this + 8 );
                           }

                           if (*(Element**)( pEVar2 + 8 ) != pEVar6) {
                              _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
                           }

                           Dictionary::~Dictionary((Dictionary*)( pEVar2 + 0x38 ));
                           Memory::free_static(pEVar2, false);
                        }

                        Dictionary::~Dictionary((Dictionary*)( pEVar5 + 0x38 ));
                        Memory::free_static(pEVar5, false);
                        pEVar5 = *(Element**)( this + 8 );
                     }

                     pEVar2 = *(Element**)( pEVar3 + 8 );
                     if (pEVar2 != pEVar5) {
                        pEVar6 = *(Element**)( pEVar2 + 0x10 );
                        if (pEVar6 != pEVar5) {
                           if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                              pEVar5 = *(Element**)( this + 8 );
                           }

                           if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                           }

                           Dictionary::~Dictionary((Dictionary*)( pEVar6 + 0x38 ));
                           Memory::free_static(pEVar6, false);
                           pEVar5 = *(Element**)( this + 8 );
                        }

                        pEVar6 = *(Element**)( pEVar2 + 8 );
                        if (pEVar6 != pEVar5) {
                           if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                              pEVar5 = *(Element**)( this + 8 );
                           }

                           if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                           }

                           Dictionary::~Dictionary((Dictionary*)( pEVar6 + 0x38 ));
                           Memory::free_static(pEVar6, false);
                        }

                        Dictionary::~Dictionary((Dictionary*)( pEVar2 + 0x38 ));
                        Memory::free_static(pEVar2, false);
                     }

                     Dictionary::~Dictionary((Dictionary*)( pEVar3 + 0x38 ));
                     Memory::free_static(pEVar3, false);
                     pEVar3 = *(Element**)( this + 8 );
                  }

                  pEVar2 = *(Element**)( pEVar1 + 8 );
                  if (pEVar2 != pEVar3) {
                     pEVar5 = *(Element**)( pEVar2 + 0x10 );
                     if (pEVar5 != pEVar3) {
                        pEVar6 = *(Element**)( pEVar5 + 0x10 );
                        if (pEVar6 != pEVar3) {
                           if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                              pEVar3 = *(Element**)( this + 8 );
                           }

                           if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                           }

                           Dictionary::~Dictionary((Dictionary*)( pEVar6 + 0x38 ));
                           Memory::free_static(pEVar6, false);
                           pEVar3 = *(Element**)( this + 8 );
                        }

                        pEVar6 = *(Element**)( pEVar5 + 8 );
                        if (pEVar6 != pEVar3) {
                           if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                              pEVar3 = *(Element**)( this + 8 );
                           }

                           if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                           }

                           Dictionary::~Dictionary((Dictionary*)( pEVar6 + 0x38 ));
                           Memory::free_static(pEVar6, false);
                        }

                        Dictionary::~Dictionary((Dictionary*)( pEVar5 + 0x38 ));
                        Memory::free_static(pEVar5, false);
                        pEVar3 = *(Element**)( this + 8 );
                     }

                     pEVar5 = *(Element**)( pEVar2 + 8 );
                     if (pEVar5 != pEVar3) {
                        pEVar6 = *(Element**)( pEVar5 + 0x10 );
                        if (pEVar6 != pEVar3) {
                           if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                              pEVar3 = *(Element**)( this + 8 );
                           }

                           if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                           }

                           Dictionary::~Dictionary((Dictionary*)( pEVar6 + 0x38 ));
                           Memory::free_static(pEVar6, false);
                           pEVar3 = *(Element**)( this + 8 );
                        }

                        pEVar6 = *(Element**)( pEVar5 + 8 );
                        if (pEVar6 != pEVar3) {
                           if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                              pEVar3 = *(Element**)( this + 8 );
                           }

                           if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                              _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                           }

                           Dictionary::~Dictionary((Dictionary*)( pEVar6 + 0x38 ));
                           Memory::free_static(pEVar6, false);
                        }

                        Dictionary::~Dictionary((Dictionary*)( pEVar5 + 0x38 ));
                        Memory::free_static(pEVar5, false);
                     }

                     Dictionary::~Dictionary((Dictionary*)( pEVar2 + 0x38 ));
                     Memory::free_static(pEVar2, false);
                  }

                  Dictionary::~Dictionary((Dictionary*)( pEVar1 + 0x38 ));
                  Memory::free_static(pEVar1, false);
               }

               Dictionary::~Dictionary((Dictionary*)( param_1 + 0x38 ));
               Memory::free_static(param_1, false);
               return;
            }

            /* WARNING: Removing unreachable block (ram,0x00106d58) */
            /* TextEditor::_getv(StringName const&, Variant&) const */
            undefined8 TextEditor::_getv(StringName *param_1, Variant *param_2) {
               undefined8 uVar1;
               if (( (code*)PTR__get_00114020 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
                  return uVar1;
               }

               uVar1 = CanvasItem::_get(param_1, param_2);
               return uVar1;
            }

            /* WARNING: Removing unreachable block (ram,0x00106dc8) */
            /* ScriptEditorBase::_getv(StringName const&, Variant&) const */
            undefined8 ScriptEditorBase::_getv(StringName *param_1, Variant *param_2) {
               undefined8 uVar1;
               if (( (code*)PTR__get_00114020 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
                  return uVar1;
               }

               uVar1 = CanvasItem::_get(param_1, param_2);
               return uVar1;
            }

            /* WARNING: Removing unreachable block (ram,0x00106e38) */
            /* HBoxContainer::_getv(StringName const&, Variant&) const */
            undefined8 HBoxContainer::_getv(StringName *param_1, Variant *param_2) {
               undefined8 uVar1;
               if (( (code*)PTR__get_00114020 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
                  return uVar1;
               }

               uVar1 = CanvasItem::_get(param_1, param_2);
               return uVar1;
            }

            /* SyntaxHighlighter::~SyntaxHighlighter() */
            void SyntaxHighlighter::~SyntaxHighlighter(SyntaxHighlighter *this) {
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
               *(undefined***)this = &PTR__initialize_classv_0010f4d0;
               if (bVar8) {
                  if (*(long*)( this + 0x298 ) != 0) {
                     StringName::unref();
                     if (StringName::configured == '\0') goto LAB_00106ecc;
                  }

                  if (*(long*)( this + 0x280 ) != 0) {
                     StringName::unref();
                     if (StringName::configured == '\0') goto LAB_00106ecc;
                  }

                  if (*(long*)( this + 0x268 ) != 0) {
                     StringName::unref();
                  }

               }

               LAB_00106ecc:pvVar4 = *(void**)( this + 0x240 );
               if (pvVar4 != (void*)0x0) {
                  pEVar1 = *(Element**)( (long)pvVar4 + 0x10 );
                  pEVar2 = *(Element**)( this + 0x248 );
                  if (pEVar1 != pEVar2) {
                     pEVar3 = *(Element**)( pEVar1 + 0x10 );
                     this_00 = (RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>*)( this + 0x240 );
                     if (pEVar2 != pEVar3) {
                        pEVar7 = *(Element**)( pEVar3 + 0x10 );
                        if (pEVar2 != pEVar7) {
                           pEVar6 = *(Element**)( pEVar7 + 0x10 );
                           if (pEVar2 != pEVar6) {
                              RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree(this_00, pEVar6);
                              pEVar6 = *(Element**)( this + 0x248 );
                           }

                           if (*(Element**)( pEVar7 + 8 ) != pEVar6) {
                              RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree(this_00, *(Element**)( pEVar7 + 8 ));
                           }

                           Dictionary::~Dictionary((Dictionary*)( pEVar7 + 0x38 ));
                           Memory::free_static(pEVar7, false);
                           pEVar7 = *(Element**)( this + 0x248 );
                        }

                        pEVar2 = *(Element**)( pEVar3 + 8 );
                        if (pEVar2 != pEVar7) {
                           if (*(Element**)( pEVar2 + 0x10 ) != pEVar7) {
                              RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree(this_00, *(Element**)( pEVar2 + 0x10 ));
                              pEVar7 = *(Element**)( this + 0x248 );
                           }

                           pEVar6 = *(Element**)( pEVar2 + 8 );
                           if (pEVar7 != pEVar6) {
                              pEVar5 = *(Element**)( pEVar6 + 0x10 );
                              if (pEVar7 != pEVar5) {
                                 RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree(this_00, pEVar5);
                                 pEVar5 = *(Element**)( this + 0x248 );
                              }

                              if (pEVar5 != *(Element**)( pEVar6 + 8 )) {
                                 RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree(this_00, *(Element**)( pEVar6 + 8 ));
                              }

                              Dictionary::~Dictionary((Dictionary*)( pEVar6 + 0x38 ));
                              Memory::free_static(pEVar6, false);
                           }

                           Dictionary::~Dictionary((Dictionary*)( pEVar2 + 0x38 ));
                           Memory::free_static(pEVar2, false);
                        }

                        Dictionary::~Dictionary((Dictionary*)( pEVar3 + 0x38 ));
                        Memory::free_static(pEVar3, false);
                        pEVar3 = *(Element**)( this + 0x248 );
                     }

                     pEVar2 = *(Element**)( pEVar1 + 8 );
                     if (pEVar2 != pEVar3) {
                        pEVar7 = *(Element**)( pEVar2 + 0x10 );
                        if (pEVar3 != pEVar7) {
                           pEVar6 = *(Element**)( pEVar7 + 0x10 );
                           if (pEVar3 != pEVar6) {
                              RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree(this_00, pEVar6);
                              pEVar6 = *(Element**)( this + 0x248 );
                           }

                           if (*(Element**)( pEVar7 + 8 ) != pEVar6) {
                              RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree(this_00, *(Element**)( pEVar7 + 8 ));
                           }

                           Dictionary::~Dictionary((Dictionary*)( pEVar7 + 0x38 ));
                           Memory::free_static(pEVar7, false);
                           pEVar7 = *(Element**)( this + 0x248 );
                        }

                        pEVar3 = *(Element**)( pEVar2 + 8 );
                        if (pEVar7 != pEVar3) {
                           pEVar6 = *(Element**)( pEVar3 + 0x10 );
                           if (pEVar7 != pEVar6) {
                              RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree(this_00, pEVar6);
                              pEVar6 = *(Element**)( this + 0x248 );
                           }

                           if (pEVar6 != *(Element**)( pEVar3 + 8 )) {
                              RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree(this_00, *(Element**)( pEVar3 + 8 ));
                           }

                           Dictionary::~Dictionary((Dictionary*)( pEVar3 + 0x38 ));
                           Memory::free_static(pEVar3, false);
                        }

                        Dictionary::~Dictionary((Dictionary*)( pEVar2 + 0x38 ));
                        Memory::free_static(pEVar2, false);
                     }

                     Dictionary::~Dictionary((Dictionary*)( pEVar1 + 0x38 ));
                     Memory::free_static(pEVar1, false);
                     pvVar4 = *(void**)( this + 0x240 );
                     pEVar2 = *(Element**)( this + 0x248 );
                  }

                  *(Element**)( (long)pvVar4 + 0x10 ) = pEVar2;
                  *(undefined4*)( this + 0x250 ) = 0;
                  Dictionary::~Dictionary((Dictionary*)( (long)pvVar4 + 0x38 ));
                  Memory::free_static(pvVar4, false);
               }

               Resource::~Resource((Resource*)this);
               return;
            }

            /* SyntaxHighlighter::~SyntaxHighlighter() */
            void SyntaxHighlighter::~SyntaxHighlighter(SyntaxHighlighter *this) {
               ~SyntaxHighlighter(this)
               ;;
               operator_delete(this, 0x2b0);
               return;
            }

            /* HBoxContainer::~HBoxContainer() */
            void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
               bool bVar1;
               bVar1 = StringName::configured != '\0';
               *(code**)this = String::parse_latin1;
               if (bVar1) {
                  if (*(long*)( this + 0x9e8 ) != 0) {
                     StringName::unref();
                     if (StringName::configured == '\0') goto LAB_00107a30;
                  }

                  if (*(long*)( this + 0x9d0 ) != 0) {
                     StringName::unref();
                  }

               }

               LAB_00107a30:Control::~Control((Control*)this);
               return;
            }

            /* HBoxContainer::~HBoxContainer() */
            void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
               bool bVar1;
               bVar1 = StringName::configured != '\0';
               *(code**)this = String::parse_latin1;
               if (bVar1) {
                  if (*(long*)( this + 0x9e8 ) != 0) {
                     StringName::unref();
                     if (StringName::configured == '\0') goto LAB_00107a90;
                  }

                  if (*(long*)( this + 0x9d0 ) != 0) {
                     StringName::unref();
                  }

               }

               LAB_00107a90:Control::~Control((Control*)this);
               operator_delete(this, 0xa10);
               return;
            }

            /* Resource::get_base_extension() const */
            Resource * __thiscallResource::get_base_extension(Resource * this);
            {
               long lVar1;
               long in_FS_OFFSET;
               lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
               *(undefined8*)this = 0;
               String::parse_latin1((StrRange*)this);
               if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return this;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* ScriptEditorBase::_get_class_namev() const */
            undefined8 *ScriptEditorBase::_get_class_namev(void) {
               int iVar1;
               if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
                  _get_class_namev()
                  __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
                  __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
               }

               if (_get_class_namev()::_class_name_static != 0) {
                  if (*(long*)( _get_class_namev() ) != 0) {
                     LAB_00107b53:return &_get_class_namev();
                  }

                  if (*(long*)( _get_class_namev() ) != 0) {
                     if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00107b53;
                     StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ScriptEditorBase");
                     goto LAB_00107bbe;
                  }

               }

               StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ScriptEditorBase");
               LAB_00107bbe:return &_get_class_namev();
            }

            /* HBoxContainer::_get_class_namev() const */
            undefined8 *HBoxContainer::_get_class_namev(void) {
               int iVar1;
               if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
                  _get_class_namev()
                  __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
                  __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
               }

               if (_get_class_namev()::_class_name_static != 0) {
                  if (*(long*)( _get_class_namev() ) != 0) {
                     LAB_00107c43:return &_get_class_namev();
                  }

                  if (*(long*)( _get_class_namev() ) != 0) {
                     if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00107c43;
                     StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
                     goto LAB_00107cae;
                  }

               }

               StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
               LAB_00107cae:return &_get_class_namev();
            }

            /* SyntaxHighlighter::_get_class_namev() const */
            undefined8 *SyntaxHighlighter::_get_class_namev(void) {
               int iVar1;
               if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
                  _get_class_namev()
                  __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
                  __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
               }

               if (_get_class_namev()::_class_name_static != 0) {
                  if (*(long*)( _get_class_namev() ) != 0) {
                     LAB_00107d33:return &_get_class_namev();
                  }

                  if (*(long*)( _get_class_namev() ) != 0) {
                     if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00107d33;
                     StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "SyntaxHighlighter");
                     goto LAB_00107d9e;
                  }

               }

               StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "SyntaxHighlighter");
               LAB_00107d9e:return &_get_class_namev();
            }

            /* CallableCustomMethodPointerBase::get_as_text() const */
            void CallableCustomMethodPointerBase::get_as_text(void) {
               char *__s;
               long lVar1;
               long in_RSI;
               StrRange *in_RDI;
               long in_FS_OFFSET;
               __s = *(char**)( in_RSI + 0x20 );
               lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
               *(undefined8*)in_RDI = 0;
               if (__s != (char*)0x0) {
                  strlen(__s);
               }

               String::parse_latin1(in_RDI);
               if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* String::parse_latin1(char const*) */
            void String::parse_latin1(String *this, char *param_1) {
               long lVar1;
               long in_FS_OFFSET;
               lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
               if (param_1 != (char*)0x0) {
                  strlen(param_1);
               }

               String::parse_latin1((StrRange*)this);
               if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* WARNING: Removing unreachable block (ram,0x00107f90) */
            /* BoxContainer::_notificationv(int, bool) */
            void BoxContainer::_notificationv(BoxContainer *this, int param_1, bool param_2) {
               int iVar1;
               iVar1 = (int)this;
               if (param_2) {
                  if ((code*)PTR__notification_00114028 != Container::_notification) {
                     BoxContainer::_notification(iVar1);
                  }

                  for (int i = 0; i < 4; i++) {
                     Container::_notification(iVar1);
                  }

                  return;
               }

               for (int i = 0; i < 4; i++) {
                  Node::_notification(iVar1);
               }

               if ((code*)PTR__notification_00114028 == Container::_notification) {
                  return;
               }

               BoxContainer::_notification(iVar1);
               return;
            }

            /* HBoxContainer::_notificationv(int, bool) */
            void HBoxContainer::_notificationv(HBoxContainer *this, int param_1, bool param_2) {
               if (param_2) {
                  BoxContainer::_notificationv((BoxContainer*)this, param_1, true);
                  return;
               }

               BoxContainer::_notificationv((BoxContainer*)this, param_1, false);
               return;
            }

            /* ScriptEditorBase::_notificationv(int, bool) */
            void ScriptEditorBase::_notificationv(ScriptEditorBase *this, int param_1, bool param_2) {
               if (param_2) {
                  BoxContainer::_notificationv((BoxContainer*)this, param_1, true);
                  return;
               }

               BoxContainer::_notificationv((BoxContainer*)this, param_1, false);
               return;
            }

            /* TextEditor::_notificationv(int, bool) */
            void TextEditor::_notificationv(TextEditor *this, int param_1, bool param_2) {
               if (param_2) {
                  BoxContainer::_notificationv((BoxContainer*)this, param_1, true);
                  return;
               }

               BoxContainer::_notificationv((BoxContainer*)this, param_1, false);
               return;
            }

            /* Callable create_custom_callable_function_pointer<Control>(Control*, char const*, void
   (Control::*)()) */
            Control *create_custom_callable_function_pointer<Control>(Control *param_1, char *param_2, _func_void *param_3) {
               undefined8 uVar1;
               CallableCustom *this;
               undefined8 in_RCX;
               undefined8 in_R8;
               this(CallableCustom * operator_new(0x48, ""));
               CallableCustom::CallableCustom(this);
               *(undefined**)( this + 0x20 ) = &_LC11;
               *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
               *(undefined8*)( this + 0x40 ) = 0;
               *(undefined***)this = &PTR_hash_00110030;
               uVar1 = *(undefined8*)( param_2 + 0x60 );
               *(char**)( this + 0x28 ) = param_2;
               *(undefined8*)( this + 0x30 ) = uVar1;
               *(undefined8*)( this + 0x38 ) = in_RCX;
               *(undefined8*)( this + 0x40 ) = in_R8;
               *(undefined8*)( this + 0x10 ) = 0;
               CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
               *(_func_void**)( this + 0x20 ) = param_3 + 1;
               Callable::Callable((Callable*)param_1, this);
               return param_1;
            }

            /* void Callable::call_deferred<>() const */
            void Callable::call_deferred<>(Callable *this) {
               long in_FS_OFFSET;
               int local_38[6];
               long local_20;
               local_20 = *(long*)( in_FS_OFFSET + 0x28 );
               Variant::Variant((Variant*)local_38, 0);
               Callable::call_deferredp((Variant**)this, 0);
               if (Variant::needs_deinit[local_38[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* Callable create_custom_callable_function_pointer<TextEditor>(TextEditor*, char const*, void
   (TextEditor::*)()) */
            TextEditor *create_custom_callable_function_pointer<TextEditor>(TextEditor *param_1, char *param_2, _func_void *param_3) {
               undefined8 uVar1;
               CallableCustom *this;
               undefined8 in_RCX;
               undefined8 in_R8;
               this(CallableCustom * operator_new(0x48, ""));
               CallableCustom::CallableCustom(this);
               *(undefined**)( this + 0x20 ) = &_LC11;
               *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
               *(undefined8*)( this + 0x40 ) = 0;
               *(undefined***)this = &PTR_hash_001100c0;
               uVar1 = *(undefined8*)( param_2 + 0x60 );
               *(char**)( this + 0x28 ) = param_2;
               *(undefined8*)( this + 0x30 ) = uVar1;
               *(undefined8*)( this + 0x38 ) = in_RCX;
               *(undefined8*)( this + 0x40 ) = in_R8;
               *(undefined8*)( this + 0x10 ) = 0;
               CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
               *(_func_void**)( this + 0x20 ) = param_3 + 1;
               Callable::Callable((Callable*)param_1, this);
               return param_1;
            }

            /* Callable create_custom_callable_function_pointer<TextEditor, int>(TextEditor*, char const*, void
   (TextEditor::*)(int)) */
            TextEditor *create_custom_callable_function_pointer<TextEditor,int>(TextEditor *param_1, char *param_2, _func_void_int *param_3) {
               undefined8 uVar1;
               CallableCustom *this;
               undefined8 in_RCX;
               undefined8 in_R8;
               this(CallableCustom * operator_new(0x48, ""));
               CallableCustom::CallableCustom(this);
               *(undefined**)( this + 0x20 ) = &_LC11;
               *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
               *(undefined8*)( this + 0x40 ) = 0;
               *(undefined***)this = &PTR_hash_001101e0;
               uVar1 = *(undefined8*)( param_2 + 0x60 );
               *(char**)( this + 0x28 ) = param_2;
               *(undefined8*)( this + 0x30 ) = uVar1;
               *(undefined8*)( this + 0x38 ) = in_RCX;
               *(undefined8*)( this + 0x40 ) = in_R8;
               *(undefined8*)( this + 0x10 ) = 0;
               CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
               *(_func_void_int**)( this + 0x20 ) = param_3 + 1;
               Callable::Callable((Callable*)param_1, this);
               return param_1;
            }

            /* void Ref<EditorPlainTextSyntaxHighlighter>::instantiate<>() */
            void Ref<EditorPlainTextSyntaxHighlighter>::instantiate<>(Ref<EditorPlainTextSyntaxHighlighter> *this) {
               char cVar1;
               Resource *this_00;
               long lVar2;
               Resource *pRVar3;
               Object *pOVar4;
               Object *pOVar5;
               byte bVar6;
               bVar6 = 0;
               this_00 = (Resource*)operator_new(0x2e8, "");
               pRVar3 = this_00;
               for (lVar2 = 0x5d; lVar2 != 0; lVar2 = lVar2 + -1) {
                  *(undefined8*)pRVar3 = 0;
                  pRVar3 = pRVar3 + (ulong)bVar6 * -0x10 + 8;
               }

               Resource::Resource(this_00);
               *(undefined8*)( this_00 + 0x240 ) = 0;
               *(undefined***)this_00 = &PTR__initialize_classv_0010f4d0;
               *(undefined8**)( this_00 + 0x248 ) = &_GlobalNilClass::_nil;
               *(undefined4*)( this_00 + 0x250 ) = 0;
               *(undefined8*)( this_00 + 600 ) = 0;
               *(undefined8*)( this_00 + 0x260 ) = 0;
               StringName::StringName((StringName*)( this_00 + 0x268 ), "_get_line_syntax_highlighting", false);
               this_00[0x270] = (Resource)0x0;
               *(undefined8*)( this_00 + 0x278 ) = 0;
               StringName::StringName((StringName*)( this_00 + 0x280 ), "_clear_highlighting_cache", false);
               this_00[0x288] = (Resource)0x0;
               *(undefined8*)( this_00 + 0x290 ) = 0;
               StringName::StringName((StringName*)( this_00 + 0x298 ), "_update_cache", false);
               this_00[0x2a0] = (Resource)0x0;
               *(code**)this_00 = postinitialize_handler;
               *(undefined1(*) [16])( this_00 + 0x2a8 ) = (undefined1[16])0x0;
               StringName::StringName((StringName*)( this_00 + 0x2b8 ), "_get_name", false);
               this_00[0x2c0] = (Resource)0x0;
               *(undefined8*)( this_00 + 0x2c8 ) = 0;
               StringName::StringName((StringName*)( this_00 + 0x2d0 ), "_get_supported_languages", false);
               this_00[0x2d8] = (Resource)0x0;
               *(undefined8*)( this_00 + 0x2e0 ) = 0;
               *(code**)this_00 = RefCounted::init_ref;
               postinitialize_handler((Object*)this_00);
               cVar1 = RefCounted::init_ref();
               if (cVar1 == '\0') {
                  pOVar5 = *(Object**)this;
                  if (pOVar5 == (Object*)0x0) {
                     return;
                  }

                  *(undefined8*)this = 0;
                  cVar1 = RefCounted::unreference();
                  if (cVar1 == '\0') {
                     return;
                  }

                  this_00 = (Resource*)0x0;
                  cVar1 = predelete_handler(pOVar5);
                  if (cVar1 == '\0') {
                     return;
                  }

               }
 else {
                  pOVar5 = *(Object**)this;
                  pOVar4 = pOVar5;
                  if (this_00 == (Resource*)pOVar5) goto LAB_00108515;
                  *(Resource**)this = this_00;
                  cVar1 = RefCounted::reference();
                  if (cVar1 == '\0') {
                     *(undefined8*)this = 0;
                  }

                  pOVar4 = (Object*)this_00;
                  if (( ( pOVar5 == (Object*)0x0 ) || ( cVar1 = RefCounted::unreference() ),cVar1 == '\0' )) goto LAB_00108515;
               }

               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
               pOVar4 = (Object*)this_00;
               if (this_00 == (Resource*)0x0) {
                  return;
               }

               LAB_00108515:cVar1 = RefCounted::unreference();
               if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
                  ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                  Memory::free_static(pOVar4, false);
                  return;
               }

               return;
            }

            /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
            /* void Ref<EditorStandardSyntaxHighlighter>::instantiate<>() */
            void Ref<EditorStandardSyntaxHighlighter>::instantiate<>(Ref<EditorStandardSyntaxHighlighter> *this) {
               undefined8 uVar1;
               undefined8 uVar2;
               char cVar3;
               Resource *this_00;
               Resource *this_01;
               long lVar4;
               Object *pOVar5;
               Resource *pRVar6;
               Object *pOVar7;
               byte bVar8;
               bVar8 = 0;
               this_00 = (Resource*)operator_new(0x2f8, "");
               Resource::Resource(this_00);
               *(undefined***)this_00 = &PTR__initialize_classv_0010f4d0;
               *(undefined8**)( this_00 + 0x248 ) = &_GlobalNilClass::_nil;
               *(undefined8*)( this_00 + 0x240 ) = 0;
               *(undefined4*)( this_00 + 0x250 ) = 0;
               *(undefined8*)( this_00 + 600 ) = 0;
               *(undefined8*)( this_00 + 0x260 ) = 0;
               StringName::StringName((StringName*)( this_00 + 0x268 ), "_get_line_syntax_highlighting", false);
               this_00[0x270] = (Resource)0x0;
               *(undefined8*)( this_00 + 0x278 ) = 0;
               StringName::StringName((StringName*)( this_00 + 0x280 ), "_clear_highlighting_cache", false);
               this_00[0x288] = (Resource)0x0;
               *(undefined8*)( this_00 + 0x290 ) = 0;
               StringName::StringName((StringName*)( this_00 + 0x298 ), "_update_cache", false);
               this_00[0x2a0] = (Resource)0x0;
               *(code**)this_00 = postinitialize_handler;
               *(undefined1(*) [16])( this_00 + 0x2a8 ) = (undefined1[16])0x0;
               StringName::StringName((StringName*)( this_00 + 0x2b8 ), "_get_name", false);
               this_00[0x2c0] = (Resource)0x0;
               *(undefined8*)( this_00 + 0x2c8 ) = 0;
               StringName::StringName((StringName*)( this_00 + 0x2d0 ), "_get_supported_languages", false);
               this_00[0x2d8] = (Resource)0x0;
               *(code**)this_00 = Node::_bind_methods;
               *(undefined8*)( this_00 + 0x2f0 ) = 0;
               *(undefined1(*) [16])( this_00 + 0x2e0 ) = (undefined1[16])0x0;
               this_01 = (Resource*)operator_new(0x358, "");
               pRVar6 = this_01;
               for (lVar4 = 0x6b; lVar4 != 0; lVar4 = lVar4 + -1) {
                  *(undefined8*)pRVar6 = 0;
                  pRVar6 = pRVar6 + (ulong)bVar8 * -0x10 + 8;
               }

               Resource::Resource(this_01);
               *(undefined***)this_01 = &PTR__initialize_classv_0010f4d0;
               *(undefined8**)( this_01 + 0x248 ) = &_GlobalNilClass::_nil;
               *(undefined8*)( this_01 + 0x240 ) = 0;
               *(undefined4*)( this_01 + 0x250 ) = 0;
               *(undefined8*)( this_01 + 600 ) = 0;
               *(undefined8*)( this_01 + 0x260 ) = 0;
               StringName::StringName((StringName*)( this_01 + 0x268 ), "_get_line_syntax_highlighting", false);
               this_01[0x270] = (Resource)0x0;
               *(undefined8*)( this_01 + 0x278 ) = 0;
               StringName::StringName((StringName*)( this_01 + 0x280 ), "_clear_highlighting_cache", false);
               this_01[0x288] = (Resource)0x0;
               *(undefined8*)( this_01 + 0x290 ) = 0;
               StringName::StringName((StringName*)( this_01 + 0x298 ), "_update_cache", false);
               this_01[0x2a0] = (Resource)0x0;
               *(code**)this_01 = StringName::StringName;
               *(undefined8*)( this_01 + 0x2a8 ) = 0;
               *(undefined8*)( this_01 + 0x2b8 ) = 0;
               *(undefined8*)( this_01 + 0x2e8 ) = 2;
               *(undefined1(*) [16])( this_01 + 0x2c8 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this_01 + 0x2d8 ) = (undefined1[16])0x0;
               Dictionary::Dictionary((Dictionary*)( this_01 + 0x2f0 ));
               Dictionary::Dictionary((Dictionary*)( this_01 + 0x2f8 ));
               uVar2 = _UNK_00110568;
               uVar1 = __LC18;
               this_01[0x350] = (Resource)0x0;
               for (int i = 0; i < 5; i++) {
                  *(undefined8*)( this_01 + ( 16*i + 768 ) ) = uVar1;
                  *(undefined8*)( this_01 + ( 16*i + 776 ) ) = uVar2;
               }

               postinitialize_handler((Object*)this_01);
               cVar3 = RefCounted::init_ref();
               if (cVar3 == '\0') {
                  pOVar7 = *(Object**)( this_00 + 0x2e8 );
                  if (pOVar7 != (Object*)0x0) {
                     *(undefined8*)( this_00 + 0x2e8 ) = 0;
                     cVar3 = RefCounted::unreference();
                     if (cVar3 != '\0') {
                        this_01 = (Resource*)0x0;
                        cVar3 = predelete_handler(pOVar7);
                        if (cVar3 != '\0') goto LAB_00108a03;
                     }

                  }

               }
 else {
                  pOVar7 = *(Object**)( this_00 + 0x2e8 );
                  pOVar5 = pOVar7;
                  if (this_01 != (Resource*)pOVar7) {
                     *(Resource**)( this_00 + 0x2e8 ) = this_01;
                     cVar3 = RefCounted::reference();
                     if (cVar3 == '\0') {
                        *(undefined8*)( this_00 + 0x2e8 ) = 0;
                     }

                     pOVar5 = (Object*)this_01;
                     if (( ( pOVar7 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) {
                        LAB_00108a03:( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
                        Memory::free_static(pOVar7, false);
                        pOVar5 = (Object*)this_01;
                        if (this_01 == (Resource*)0x0) goto LAB_00108890;
                     }

                  }

                  cVar3 = RefCounted::unreference();
                  if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
                     ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                     Memory::free_static(pOVar5, false);
                     postinitialize_handler((Object*)this_00);
                     cVar3 = RefCounted::init_ref();
                     pOVar7 = *(Object**)this;
                     goto joined_r0x001089b7;
                  }

               }

               LAB_00108890:postinitialize_handler((Object*)this_00);
               cVar3 = RefCounted::init_ref();
               pOVar7 = *(Object**)this;
               joined_r0x001089b7:pOVar5 = pOVar7;
               if (cVar3 == '\0') {
                  if (pOVar7 == (Object*)0x0) {
                     return;
                  }

                  *(undefined8*)this = 0;
                  cVar3 = RefCounted::unreference();
               }
 else {
                  if (this_00 != (Resource*)pOVar7) {
                     *(Resource**)this = this_00;
                     cVar3 = RefCounted::reference();
                     if (cVar3 == '\0') {
                        *(undefined8*)this = 0;
                     }

                     pOVar5 = (Object*)this_00;
                     if (( ( pOVar7 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar7 + 0x140 ))(pOVar7);
                     Memory::free_static(pOVar7, false);
                  }

               }

               cVar3 = RefCounted::unreference();
            }

            if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
               return;
            }

            return;
         }

         /* CowData<char32_t>::_unref() */
         void CowData<char32_t>::_unref(CowData<char32_t> *this) {
            long *plVar1;
            long lVar2;
            if (*(long*)this == 0) {
               return;
            }

            LOCK();
            plVar1 = (long*)( *(long*)this + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 != 0) {
               *(undefined8*)this = 0;
               return;
            }

            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            return;
         }

         /* TextEditor::_initialize_classv() */
         void TextEditor::_initialize_classv(void) {
            long in_FS_OFFSET;
            undefined8 local_60;
            long local_58;
            undefined8 local_50;
            long local_48;
            long local_40;
            local_40 = *(long*)( in_FS_OFFSET + 0x28 );
            if (initialize_class() == '\0') {
               if (ScriptEditorBase::initialize_class() == '\0') {
                  if (VBoxContainer::initialize_class() == '\0') {
                     if (BoxContainer::initialize_class() == '\0') {
                        if (Container::initialize_class() == '\0') {
                           if (Control::initialize_class() == '\0') {
                              if (CanvasItem::initialize_class() == '\0') {
                                 if (Node::initialize_class() == '\0') {
                                    Object::initialize_class();
                                    local_50 = 0;
                                    String::parse_latin1((String*)&local_50, "Object");
                                    StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                                    local_60 = 0;
                                    String::parse_latin1((String*)&local_60, "Node");
                                    StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                                    ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                                    if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                                       StringName::unref();
                                    }

                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                                    if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                       StringName::unref();
                                    }

                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                                    if ((code*)PTR__bind_methods_00114040 != Node::_bind_methods) {
                                       Node::_bind_methods();
                                    }

                                    Node::initialize_class()::initialized =
                                    '\x01';
                                 }

                                 local_50 = 0;
                                 String::parse_latin1((String*)&local_50, "Node");
                                 StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                                 local_60 = 0;
                                 String::parse_latin1((String*)&local_60, "CanvasItem");
                                 StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                                 ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                                 if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                                    StringName::unref();
                                 }

                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                                 if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                    StringName::unref();
                                 }

                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                                 CanvasItem::_bind_methods();
                                 if ((code*)PTR__bind_compatibility_methods_00114030 != Object::_bind_compatibility_methods) {
                                    CanvasItem::_bind_compatibility_methods();
                                 }

                                 CanvasItem::initialize_class()::initialized =
                                 '\x01';
                              }

                              local_50 = 0;
                              String::parse_latin1((String*)&local_50, "CanvasItem");
                              StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                              local_60 = 0;
                              String::parse_latin1((String*)&local_60, "Control");
                              StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                              ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                              if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                                 StringName::unref();
                              }

                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                              if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                 StringName::unref();
                              }

                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                              Control::_bind_methods();
                              Control::initialize_class()::initialized =
                              '\x01';
                           }

                           local_50 = 0;
                           String::parse_latin1((String*)&local_50, "Control");
                           StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                           local_60 = 0;
                           String::parse_latin1((String*)&local_60, "Container");
                           StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                           ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                           if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                              StringName::unref();
                           }

                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                           if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                              StringName::unref();
                           }

                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                           Container::_bind_methods();
                           Container::initialize_class()::initialized =
                           '\x01';
                        }

                        local_50 = 0;
                        String::parse_latin1((String*)&local_50, "Container");
                        StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                        local_60 = 0;
                        String::parse_latin1((String*)&local_60, "BoxContainer");
                        StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                        ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                        if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                           StringName::unref();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                        if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                           StringName::unref();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                        BoxContainer::_bind_methods();
                        BoxContainer::initialize_class()::initialized =
                        '\x01';
                     }

                     local_50 = 0;
                     String::parse_latin1((String*)&local_50, "BoxContainer");
                     StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, "VBoxContainer");
                     StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                     ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                     if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                     VBoxContainer::initialize_class()::initialized =
                     '\x01';
                  }

                  local_50 = 0;
                  String::parse_latin1((String*)&local_50, "VBoxContainer");
                  StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "ScriptEditorBase");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                  if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                  if ((code*)PTR__bind_methods_00114038 != BoxContainer::_bind_methods) {
                     ScriptEditorBase::_bind_methods();
                  }

                  ScriptEditorBase::initialize_class()::initialized =
                  '\x01';
               }

               local_50 = 0;
               String::parse_latin1((String*)&local_50, "ScriptEditorBase");
               StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
               local_60 = 0;
               String::parse_latin1((String*)&local_60, "TextEditor");
               StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
               if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
               initialize_class()::initialized =
               '\x01';
            }

            if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return;
         }

         /* WARNING: Removing unreachable block (ram,0x00109460) */
         /* String vformat<String, String>(String const&, String const, String const) */
         undefined8 *vformat<String,String>(undefined8 *param_1, bool *param_2, String *param_3, String *param_4) {
            Variant *pVVar1;
            Variant *pVVar2;
            int iVar3;
            long in_FS_OFFSET;
            Array local_d0[8];
            undefined8 local_c8[8];
            Variant local_88[24];
            Variant local_70[24];
            undefined8 local_58;
            undefined1 local_50[16];
            long local_40[2];
            local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
            Variant::Variant(local_88, param_3);
            Variant::Variant(local_70, param_4);
            local_58 = 0;
            local_50 = (undefined1[16])0x0;
            Array::Array(local_d0);
            iVar3 = (int)local_d0;
            Array::resize(iVar3);
            pVVar2 = (Variant*)Array::operator [](iVar3);
            Variant::operator =(pVVar2, local_88);
            pVVar2 = (Variant*)Array::operator [](iVar3);
            Variant::operator =(pVVar2, local_70);
            String::sprintf((Array*)local_c8, param_2);
            *param_1 = local_c8[0];
            local_c8[0] = 0;
            CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
            pVVar2 = (Variant*)local_40;
            Array::~Array(local_d0);
            do {
               pVVar1 = pVVar2 + -0x18;
               pVVar2 = pVVar2 + -0x18;
               if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                  Variant::_clear_internal();
               }

            }
 while ( pVVar2 != local_88 );
            if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return param_1;
         }

         /* CowData<char32_t>::_ref(CowData<char32_t> const&) */
         void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
            if (*(long*)this != *(long*)param_1) {
               _ref(this, param_1);
               return;
            }

            return;
         }

         /* TextEditor::get_class() const */
         void TextEditor::get_class(void) {
            long lVar1;
            long lVar2;
            char *__s;
            long in_RSI;
            StrRange *in_RDI;
            long in_FS_OFFSET;
            lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
            if (*(long*)( in_RSI + 8 ) == 0) {
               *(undefined8*)in_RDI = 0;
               String::parse_latin1(in_RDI);
            }
 else {
               lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
               if (lVar2 == 0) {
                  *(undefined8*)in_RDI = 0;
               }
 else {
                  __s = *(char**)( lVar2 + 8 );
                  *(undefined8*)in_RDI = 0;
                  if (__s == (char*)0x0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
                  }
 else {
                     strlen(__s);
                     String::parse_latin1(in_RDI);
                  }

               }

            }

            if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         /* ScriptEditorBase::get_class() const */
         void ScriptEditorBase::get_class(void) {
            long lVar1;
            long lVar2;
            char *__s;
            long in_RSI;
            StrRange *in_RDI;
            long in_FS_OFFSET;
            lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
            if (*(long*)( in_RSI + 8 ) == 0) {
               *(undefined8*)in_RDI = 0;
               String::parse_latin1(in_RDI);
            }
 else {
               lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
               if (lVar2 == 0) {
                  *(undefined8*)in_RDI = 0;
               }
 else {
                  __s = *(char**)( lVar2 + 8 );
                  *(undefined8*)in_RDI = 0;
                  if (__s == (char*)0x0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
                  }
 else {
                     strlen(__s);
                     String::parse_latin1(in_RDI);
                  }

               }

            }

            if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         /* HBoxContainer::get_class() const */
         void HBoxContainer::get_class(void) {
            long lVar1;
            long lVar2;
            char *__s;
            long in_RSI;
            StrRange *in_RDI;
            long in_FS_OFFSET;
            lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
            if (*(long*)( in_RSI + 8 ) == 0) {
               *(undefined8*)in_RDI = 0;
               String::parse_latin1(in_RDI);
            }
 else {
               lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
               if (lVar2 == 0) {
                  *(undefined8*)in_RDI = 0;
               }
 else {
                  __s = *(char**)( lVar2 + 8 );
                  *(undefined8*)in_RDI = 0;
                  if (__s == (char*)0x0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
                  }
 else {
                     strlen(__s);
                     String::parse_latin1(in_RDI);
                  }

               }

            }

            if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         /* SyntaxHighlighter::get_class() const */
         void SyntaxHighlighter::get_class(void) {
            long lVar1;
            long lVar2;
            char *__s;
            long in_RSI;
            StrRange *in_RDI;
            long in_FS_OFFSET;
            lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
            if (*(long*)( in_RSI + 8 ) == 0) {
               *(undefined8*)in_RDI = 0;
               String::parse_latin1(in_RDI);
            }
 else {
               lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
               if (lVar2 == 0) {
                  *(undefined8*)in_RDI = 0;
               }
 else {
                  __s = *(char**)( lVar2 + 8 );
                  *(undefined8*)in_RDI = 0;
                  if (__s == (char*)0x0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
                  }
 else {
                     strlen(__s);
                     String::parse_latin1(in_RDI);
                  }

               }

            }

            if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         /* Object::is_class(String const&) const */
         ulong Object::is_class(Object *this, String *param_1) {
            long *plVar1;
            long lVar2;
            char *__s;
            long lVar3;
            uint uVar4;
            ulong uVar5;
            long in_FS_OFFSET;
            long local_50;
            char *local_48;
            size_t local_40;
            long local_30;
            lVar2 = *(long*)( this + 8 );
            local_30 = *(long*)( in_FS_OFFSET + 0x28 );
            do {
               if (lVar2 == 0) {
                  if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     uVar5 = String::operator ==(param_1, "Object");
                     return uVar5;
                  }

                  LAB_00109ad7:/* WARNING: Subroutine does not return */__stack_chk_fail();
               }

               lVar3 = *(long*)( lVar2 + 0x20 );
               if (lVar3 == 0) {
                  local_50 = 0;
               }
 else {
                  __s = *(char**)( lVar3 + 8 );
                  local_50 = 0;
                  if (__s == (char*)0x0) {
                     if (*(long*)( lVar3 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, (CowData*)( lVar3 + 0x10 ));
                     }

                  }
 else {
                     local_40 = strlen(__s);
                     local_48 = __s;
                     String::parse_latin1((StrRange*)&local_50);
                  }

               }

               uVar4 = String::operator ==(param_1, (String*)&local_50);
               lVar3 = local_50;
               if (local_50 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_50 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_50 = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               if ((char)uVar4 != '\0') {
                  if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return (ulong)uVar4;
                  }

                  goto LAB_00109ad7;
               }

               lVar2 = *(long*)( lVar2 + 8 );
            }
 while ( true );
         }

         /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
         /* HashMap<String, Ref<EditorSyntaxHighlighter>, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   Ref<EditorSyntaxHighlighter> > > >::operator[](String const&) */
         undefined1 * __thiscallHashMap<String,Ref<EditorSyntaxHighlighter>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<EditorSyntaxHighlighter>>>>::operator [](HashMap<String,Ref<EditorSyntaxHighlighter>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<EditorSyntaxHighlighter>>>> * this, String * param_1);
         {
            undefined8 *puVar1;
            void *pvVar2;
            void *__s;
            long lVar3;
            Object *pOVar4;
            undefined1 auVar5[16];
            undefined1 auVar6[16];
            undefined1 auVar7[16];
            undefined1 auVar8[16];
            undefined1 auVar9[16];
            undefined1 auVar10[16];
            undefined1 auVar11[16];
            undefined1 auVar12[16];
            undefined1 auVar13[16];
            undefined1 auVar14[16];
            undefined1 auVar15[16];
            undefined1 auVar16[16];
            undefined1 auVar17[16];
            undefined1 auVar18[16];
            undefined1 auVar19[16];
            undefined1 auVar20[16];
            undefined1 auVar21[16];
            undefined1 auVar22[16];
            undefined1 auVar23[16];
            undefined1 auVar24[16];
            undefined1 auVar25[16];
            undefined1 auVar26[16];
            undefined1 auVar27[16];
            undefined1 auVar28[16];
            undefined1 auVar29[16];
            undefined1 auVar30[16];
            undefined1 auVar31[16];
            undefined1 auVar32[16];
            undefined1 auVar33[16];
            undefined1 auVar34[16];
            undefined1 auVar35[16];
            undefined1 auVar36[16];
            char cVar37;
            uint uVar38;
            uint uVar39;
            ulong uVar40;
            undefined8 uVar41;
            void *__s_00;
            undefined1(*pauVar42)[16];
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
            undefined1(*pauVar56)[16];
            undefined1(*pauVar57)[16];
            long in_FS_OFFSET;
            long local_58[3];
            long local_40;
            local_40 = *(long*)( in_FS_OFFSET + 0x28 );
            uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            if (*(long*)( this + 8 ) == 0) {
               LAB_0010a260:uVar40 = (ulong)uVar55;
               uVar44 = uVar40 * 4;
               uVar48 = uVar40 * 8;
               uVar41 = Memory::alloc_static(uVar44, false);
               *(undefined8*)( this + 0x10 ) = uVar41;
               pvVar43 = (void*)Memory::alloc_static(uVar48, false);
               *(void**)( this + 8 ) = pvVar43;
               if (uVar55 != 0) {
                  pvVar2 = *(void**)( this + 0x10 );
                  if (( pvVar2 < (void*)( (long)pvVar43 + uVar48 ) ) && ( pvVar43 < (void*)( (long)pvVar2 + uVar44 ) )) {
                     uVar44 = 0;
                     do {
                        *(undefined4*)( (long)pvVar2 + uVar44 * 4 ) = 0;
                        *(undefined8*)( (long)pvVar43 + uVar44 * 8 ) = 0;
                        uVar44 = uVar44 + 1;
                     }
 while ( uVar40 != uVar44 );
                     goto LAB_0010a0e2;
                  }

                  memset(pvVar2, 0, uVar44);
                  memset(pvVar43, 0, uVar48);
                  iVar45 = *(int*)( this + 0x2c );
                  LAB_0010a0e6:if (iVar45 != 0) {
                     LAB_0010a0ee:uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
                     lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                     uVar52 = String::hash();
                     uVar40 = CONCAT44(0, uVar38);
                     lVar53 = *(long*)( this + 0x10 );
                     uVar39 = 1;
                     if (uVar52 != 0) {
                        uVar39 = uVar52;
                     }

                     uVar54 = 0;
                     auVar17._8_8_ = 0;
                     auVar17._0_8_ = (ulong)uVar39 * lVar3;
                     auVar33._8_8_ = 0;
                     auVar33._0_8_ = uVar40;
                     lVar46 = SUB168(auVar17 * auVar33, 8);
                     uVar52 = *(uint*)( lVar53 + lVar46 * 4 );
                     uVar51 = SUB164(auVar17 * auVar33, 8);
                     if (uVar52 != 0) {
                        do {
                           if (uVar39 == uVar52) {
                              cVar37 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar46 * 8 ) + 0x10 ), param_1);
                              if (cVar37 != '\0') {
                                 pauVar42 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar51 * 8 );
                                 pOVar4 = *(Object**)( pauVar42[1] + 8 );
                                 if (pOVar4 != (Object*)0x0) {
                                    *(undefined8*)( pauVar42[1] + 8 ) = 0;
                                    cVar37 = RefCounted::unreference();
                                    if (( cVar37 != '\0' ) && ( cVar37 = cVar37 != '\0' )) {
                                       ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                                       Memory::free_static(pOVar4, false);
                                    }

                                    pauVar42 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar51 * 8 );
                                 }

                                 goto LAB_00109fab;
                              }

                              lVar53 = *(long*)( this + 0x10 );
                           }

                           uVar54 = uVar54 + 1;
                           auVar18._8_8_ = 0;
                           auVar18._0_8_ = ( ulong )(uVar51 + 1) * lVar3;
                           auVar34._8_8_ = 0;
                           auVar34._0_8_ = uVar40;
                           lVar46 = SUB168(auVar18 * auVar34, 8);
                           uVar52 = *(uint*)( lVar53 + lVar46 * 4 );
                           uVar51 = SUB164(auVar18 * auVar34, 8);
                        }
 while ( ( uVar52 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar52 * lVar3,auVar35._8_8_ = 0,auVar35._0_8_ = uVar40,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar38 + uVar51 ) - SUB164(auVar19 * auVar35, 8)) * lVar3,auVar36._8_8_ = 0,auVar36._0_8_ = uVar40,uVar54 <= SUB164(auVar20 * auVar36, 8) );
                     }

                     iVar45 = *(int*)( this + 0x2c );
                  }

                  uVar40 = (ulong)uVar55;
                  goto LAB_00109bf4;
               }

               iVar45 = *(int*)( this + 0x2c );
               if (pvVar43 == (void*)0x0) goto LAB_00109bf4;
               if (iVar45 != 0) goto LAB_0010a0ee;
               LAB_00109c1a:uVar55 = *(uint*)( this + 0x28 );
               if (uVar55 == 0x1c) {
                  pauVar42 = (undefined1(*) [16])0x0;
                  _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
                  goto LAB_00109fab;
               }

               uVar40 = ( ulong )(uVar55 + 1);
               *(undefined4*)( this + 0x2c ) = 0;
               uVar38 = *(uint*)( hash_table_size_primes + (ulong)uVar55 * 4 );
               if (uVar55 + 1 < 2) {
                  uVar40 = 2;
               }

               uVar55 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
               uVar48 = (ulong)uVar55;
               *(int*)( this + 0x28 ) = (int)uVar40;
               pvVar43 = *(void**)( this + 8 );
               uVar40 = uVar48 * 4;
               uVar44 = uVar48 * 8;
               pvVar2 = *(void**)( this + 0x10 );
               uVar41 = Memory::alloc_static(uVar40, false);
               *(undefined8*)( this + 0x10 ) = uVar41;
               __s_00 = (void*)Memory::alloc_static(uVar44, false);
               *(void**)( this + 8 ) = __s_00;
               if (uVar55 != 0) {
                  __s = *(void**)( this + 0x10 );
                  if (( __s < (void*)( (long)__s_00 + uVar44 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
                     uVar40 = 0;
                     do {
                        *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
                        *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
                        uVar40 = uVar40 + 1;
                     }
 while ( uVar40 != uVar48 );
                  }
 else {
                     memset(__s, 0, uVar40);
                     memset(__s_00, 0, uVar44);
                  }

               }

               if (uVar38 != 0) {
                  uVar40 = 0;
                  do {
                     uVar55 = *(uint*)( (long)pvVar2 + uVar40 * 4 );
                     if (uVar55 != 0) {
                        lVar3 = *(long*)( this + 0x10 );
                        uVar51 = 0;
                        uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
                        uVar44 = CONCAT44(0, uVar39);
                        lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                        auVar5._8_8_ = 0;
                        auVar5._0_8_ = (ulong)uVar55 * lVar53;
                        auVar21._8_8_ = 0;
                        auVar21._0_8_ = uVar44;
                        lVar46 = SUB168(auVar5 * auVar21, 8);
                        puVar50 = (uint*)( lVar3 + lVar46 * 4 );
                        iVar45 = SUB164(auVar5 * auVar21, 8);
                        uVar52 = *puVar50;
                        uVar41 = *(undefined8*)( (long)pvVar43 + uVar40 * 8 );
                        while (uVar52 != 0) {
                           auVar6._8_8_ = 0;
                           auVar6._0_8_ = (ulong)uVar52 * lVar53;
                           auVar22._8_8_ = 0;
                           auVar22._0_8_ = uVar44;
                           auVar7._8_8_ = 0;
                           auVar7._0_8_ = ( ulong )(( uVar39 + iVar45 ) - SUB164(auVar6 * auVar22, 8)) * lVar53;
                           auVar23._8_8_ = 0;
                           auVar23._0_8_ = uVar44;
                           uVar54 = SUB164(auVar7 * auVar23, 8);
                           uVar49 = uVar41;
                           if (uVar54 < uVar51) {
                              *puVar50 = uVar55;
                              puVar1 = (undefined8*)( (long)__s_00 + lVar46 * 8 );
                              uVar49 = *puVar1;
                              *puVar1 = uVar41;
                              uVar55 = uVar52;
                              uVar51 = uVar54;
                           }

                           uVar51 = uVar51 + 1;
                           auVar8._8_8_ = 0;
                           auVar8._0_8_ = ( ulong )(iVar45 + 1) * lVar53;
                           auVar24._8_8_ = 0;
                           auVar24._0_8_ = uVar44;
                           lVar46 = SUB168(auVar8 * auVar24, 8);
                           puVar50 = (uint*)( lVar3 + lVar46 * 4 );
                           iVar45 = SUB164(auVar8 * auVar24, 8);
                           uVar41 = uVar49;
                           uVar52 = *puVar50;
                        }
;
                        *(undefined8*)( (long)__s_00 + lVar46 * 8 ) = uVar41;
                        *puVar50 = uVar55;
                        *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
                     }

                     uVar40 = uVar40 + 1;
                  }
 while ( uVar38 != uVar40 );
                  Memory::free_static(pvVar43, false);
                  Memory::free_static(pvVar2, false);
               }

            }
 else {
               iVar45 = *(int*)( this + 0x2c );
               uVar40 = CONCAT44(0, uVar55);
               if (iVar45 != 0) {
                  lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                  uVar39 = String::hash();
                  lVar53 = *(long*)( this + 0x10 );
                  uVar38 = 1;
                  if (uVar39 != 0) {
                     uVar38 = uVar39;
                  }

                  uVar51 = 0;
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ = (ulong)uVar38 * lVar3;
                  auVar29._8_8_ = 0;
                  auVar29._0_8_ = uVar40;
                  lVar46 = SUB168(auVar13 * auVar29, 8);
                  uVar39 = *(uint*)( lVar53 + lVar46 * 4 );
                  uVar52 = SUB164(auVar13 * auVar29, 8);
                  if (uVar39 != 0) {
                     do {
                        if (uVar38 == uVar39) {
                           cVar37 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar46 * 8 ) + 0x10 ), param_1);
                           if (cVar37 != '\0') {
                              pauVar42 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar52 * 8 );
                              goto LAB_00109fab;
                           }

                           lVar53 = *(long*)( this + 0x10 );
                        }

                        uVar51 = uVar51 + 1;
                        auVar14._8_8_ = 0;
                        auVar14._0_8_ = ( ulong )(uVar52 + 1) * lVar3;
                        auVar30._8_8_ = 0;
                        auVar30._0_8_ = uVar40;
                        lVar46 = SUB168(auVar14 * auVar30, 8);
                        uVar39 = *(uint*)( lVar53 + lVar46 * 4 );
                        uVar52 = SUB164(auVar14 * auVar30, 8);
                     }
 while ( ( uVar39 != 0 ) && ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar39 * lVar3,auVar31._8_8_ = 0,auVar31._0_8_ = uVar40,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar52 + uVar55 ) - SUB164(auVar15 * auVar31, 8)) * lVar3,auVar32._8_8_ = 0,auVar32._0_8_ = uVar40,uVar51 <= SUB164(auVar16 * auVar32, 8) );
                  }

                  uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
                  if (*(long*)( this + 8 ) == 0) goto LAB_0010a260;
                  LAB_0010a0e2:iVar45 = *(int*)( this + 0x2c );
                  goto LAB_0010a0e6;
               }

               LAB_00109bf4:if ((float)uVar40 * __LC45 < (float)( iVar45 + 1 )) goto LAB_00109c1a;
            }

            local_58[0] = 0;
            if (*(long*)param_1 == 0) {
               pauVar42 = (undefined1(*) [16])operator_new(0x20, "");
               *(undefined8*)pauVar42[1] = 0;
               *pauVar42 = (undefined1[16])0x0;
            }
 else {
               CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)param_1);
               lVar3 = local_58[0];
               local_58[1] = 0;
               pauVar42 = (undefined1(*) [16])operator_new(0x20, "");
               *(undefined8*)pauVar42[1] = 0;
               *(undefined8*)*pauVar42 = 0;
               *(undefined8*)( *pauVar42 + 8 ) = 0;
               if (lVar3 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar42 + 1 ), (CowData*)local_58);
               }

            }

            *(undefined8*)( pauVar42[1] + 8 ) = 0;
            CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
            puVar1 = *(undefined8**)( this + 0x20 );
            if (puVar1 == (undefined8*)0x0) {
               *(undefined1(**) [16])( this + 0x18 ) = pauVar42;
            }
 else {
               *puVar1 = pauVar42;
               *(undefined8**)( *pauVar42 + 8 ) = puVar1;
            }

            *(undefined1(**) [16])( this + 0x20 ) = pauVar42;
            uVar38 = String::hash();
            lVar3 = *(long*)( this + 0x10 );
            uVar55 = 1;
            if (uVar38 != 0) {
               uVar55 = uVar38;
            }

            uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar40 = CONCAT44(0, uVar38);
            lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar55 * lVar53;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar40;
            lVar47 = SUB168(auVar9 * auVar25, 8);
            lVar46 = *(long*)( this + 8 );
            puVar50 = (uint*)( lVar3 + lVar47 * 4 );
            iVar45 = SUB164(auVar9 * auVar25, 8);
            uVar39 = *puVar50;
            pauVar57 = pauVar42;
            if (uVar39 != 0) {
               uVar52 = 0;
               pauVar56 = pauVar42;
               do {
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = (ulong)uVar39 * lVar53;
                  auVar26._8_8_ = 0;
                  auVar26._0_8_ = uVar40;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( ulong )(( iVar45 + uVar38 ) - SUB164(auVar10 * auVar26, 8)) * lVar53;
                  auVar27._8_8_ = 0;
                  auVar27._0_8_ = uVar40;
                  uVar51 = SUB164(auVar11 * auVar27, 8);
                  pauVar57 = pauVar56;
                  if (uVar51 < uVar52) {
                     *puVar50 = uVar55;
                     puVar1 = (undefined8*)( lVar46 + lVar47 * 8 );
                     pauVar57 = (undefined1(*) [16])*puVar1;
                     *puVar1 = pauVar56;
                     uVar52 = uVar51;
                     uVar55 = uVar39;
                  }

                  uVar52 = uVar52 + 1;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(iVar45 + 1) * lVar53;
                  auVar28._8_8_ = 0;
                  auVar28._0_8_ = uVar40;
                  lVar47 = SUB168(auVar12 * auVar28, 8);
                  puVar50 = (uint*)( lVar3 + lVar47 * 4 );
                  iVar45 = SUB164(auVar12 * auVar28, 8);
                  uVar39 = *puVar50;
                  pauVar56 = pauVar57;
               }
 while ( uVar39 != 0 );
            }

            *(undefined1(**) [16])( lVar46 + lVar47 * 8 ) = pauVar57;
            *puVar50 = uVar55;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
            LAB_00109fab:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return pauVar42[1] + 8;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         /* CallableCustomMethodPointer<TextEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */
         void CallableCustomMethodPointer<TextEditor,void>::call(CallableCustomMethodPointer<TextEditor,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
            long lVar1;
            long lVar2;
            uint uVar3;
            ulong *puVar4;
            code *UNRECOVERED_JUMPTABLE;
            ulong uVar5;
            long in_FS_OFFSET;
            bool bVar6;
            CowData<char32_t> local_50[8];
            CowData<char32_t> local_48[8];
            undefined8 local_40;
            String local_38[8];
            long local_30;
            local_30 = *(long*)( in_FS_OFFSET + 0x28 );
            uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
            if (uVar3 < (uint)ObjectDB::slot_max) {
               while (true) {
                  local_38[0] = (String)0x0;
                  LOCK();
                  bVar6 = (char)ObjectDB::spin_lock == '\0';
                  if (bVar6) {
                     ObjectDB::spin_lock._0_1_ = '\x01';
                  }

                  UNLOCK();
                  if (bVar6) break;
                  do {} while ( (char)ObjectDB::spin_lock != '\0' );
               }
;
               puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
               uVar5 = *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff;
               if (uVar5 != ( *puVar4 & 0x7fffffffff )) {
                  ObjectDB::spin_lock._0_1_ = '\0';
                  goto LAB_0010a59f;
               }

               ObjectDB::spin_lock._0_1_ = '\0';
               if (puVar4[1] == 0) goto LAB_0010a59f;
               lVar1 = *(long*)( this + 0x28 );
               UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
               lVar2 = *(long*)( this + 0x40 );
               if (param_2 == 0) {
                  *(undefined4*)param_4 = 0;
                  if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
                     UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
                  }

                  if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Could not recover jumptable at 0x0010a578. Too many branches */
                     /* WARNING: Treating indirect jump as call */
                     ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
                     return;
                  }

                  goto LAB_0010a650;
               }

               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 0;
            }
 else {
               _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
               LAB_0010a59f:local_40 = 0;
               String::parse_latin1((String*)&local_40, "\', can\'t call method.");
               uitos((ulong)local_50);
               operator+((char *)
               local_48,(String*)"Invalid Object id \'";
               String::operator +(local_38, (String*)local_48);
               _err_print_error(&_LC56, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
               CowData<char32_t>::_unref(local_48);
               CowData<char32_t>::_unref(local_50);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
            }

            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            LAB_0010a650:/* WARNING: Subroutine does not return */__stack_chk_fail();
         }

         /* CallableCustomMethodPointer<Control, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */
         void CallableCustomMethodPointer<Control,void>::call(CallableCustomMethodPointer<Control,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
            long lVar1;
            long lVar2;
            uint uVar3;
            ulong *puVar4;
            code *UNRECOVERED_JUMPTABLE;
            ulong uVar5;
            long in_FS_OFFSET;
            bool bVar6;
            CowData<char32_t> local_50[8];
            CowData<char32_t> local_48[8];
            undefined8 local_40;
            String local_38[8];
            long local_30;
            local_30 = *(long*)( in_FS_OFFSET + 0x28 );
            uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
            if (uVar3 < (uint)ObjectDB::slot_max) {
               while (true) {
                  local_38[0] = (String)0x0;
                  LOCK();
                  bVar6 = (char)ObjectDB::spin_lock == '\0';
                  if (bVar6) {
                     ObjectDB::spin_lock._0_1_ = '\x01';
                  }

                  UNLOCK();
                  if (bVar6) break;
                  do {} while ( (char)ObjectDB::spin_lock != '\0' );
               }
;
               puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
               uVar5 = *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff;
               if (uVar5 != ( *puVar4 & 0x7fffffffff )) {
                  ObjectDB::spin_lock._0_1_ = '\0';
                  goto LAB_0010a7af;
               }

               ObjectDB::spin_lock._0_1_ = '\0';
               if (puVar4[1] == 0) goto LAB_0010a7af;
               lVar1 = *(long*)( this + 0x28 );
               UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
               lVar2 = *(long*)( this + 0x40 );
               if (param_2 == 0) {
                  *(undefined4*)param_4 = 0;
                  if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
                     UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
                  }

                  if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Could not recover jumptable at 0x0010a788. Too many branches */
                     /* WARNING: Treating indirect jump as call */
                     ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
                     return;
                  }

                  goto LAB_0010a860;
               }

               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 0;
            }
 else {
               _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
               LAB_0010a7af:local_40 = 0;
               String::parse_latin1((String*)&local_40, "\', can\'t call method.");
               uitos((ulong)local_50);
               operator+((char *)
               local_48,(String*)"Invalid Object id \'";
               String::operator +(local_38, (String*)local_48);
               _err_print_error(&_LC56, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
               CowData<char32_t>::_unref(local_48);
               CowData<char32_t>::_unref(local_50);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
            }

            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            LAB_0010a860:/* WARNING: Subroutine does not return */__stack_chk_fail();
         }

         /* CallableCustomMethodPointer<TextEditor, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */
         void CallableCustomMethodPointer<TextEditor,void,int>::call(CallableCustomMethodPointer<TextEditor,void,int> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
            CowData<char32_t> local_50[8];
            CowData<char32_t> local_48[8];
            undefined8 local_40;
            String local_38[8];
            long local_30;
            local_30 = *(long*)( in_FS_OFFSET + 0x28 );
            uVar6 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
            if (uVar6 < (uint)ObjectDB::slot_max) {
               while (true) {
                  local_38[0] = (String)0x0;
                  LOCK();
                  bVar8 = (char)ObjectDB::spin_lock == '\0';
                  if (bVar8) {
                     ObjectDB::spin_lock._0_1_ = '\x01';
                  }

                  UNLOCK();
                  if (bVar8) break;
                  do {} while ( (char)ObjectDB::spin_lock != '\0' );
               }
;
               puVar7 = (ulong*)( (ulong)uVar6 * 0x10 + ObjectDB::object_slots );
               if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar7 & 0x7fffffffff )) {
                  ObjectDB::spin_lock._0_1_ = '\0';
                  goto LAB_0010aa28;
               }

               ObjectDB::spin_lock._0_1_ = '\0';
               if (puVar7[1] == 0) goto LAB_0010aa28;
               lVar1 = *(long*)( this + 0x28 );
               UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
               lVar2 = *(long*)( this + 0x40 );
               if ((uint)param_2 < 2) {
                  if (param_2 != 0) {
                     *(undefined4*)param_4 = 0;
                     if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
                        UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
                     }

                     cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
                     uVar3 = _LC57;
                     if (cVar4 == '\0') {
                        *(undefined4*)param_4 = 2;
                        *(undefined8*)( param_4 + 4 ) = uVar3;
                     }

                     iVar5 = Variant::operator_cast_to_int(*param_1);
                     if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        /* WARNING: Could not recover jumptable at 0x0010a9d7. Too many branches */
                        /* WARNING: Treating indirect jump as call */
                        ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), iVar5);
                        return;
                     }

                     goto LAB_0010aad9;
                  }

                  *(undefined4*)param_4 = 4;
                  *(undefined4*)( param_4 + 8 ) = 1;
               }
 else {
                  *(undefined4*)param_4 = 3;
                  *(undefined4*)( param_4 + 8 ) = 1;
               }

            }
 else {
               _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
               LAB_0010aa28:local_40 = 0;
               String::parse_latin1((String*)&local_40, "\', can\'t call method.");
               uitos((ulong)local_50);
               operator+((char *)
               local_48,(String*)"Invalid Object id \'";
               String::operator +(local_38, (String*)local_48);
               _err_print_error(&_LC56, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
               CowData<char32_t>::_unref(local_48);
               CowData<char32_t>::_unref(local_50);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
            }

            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            LAB_0010aad9:/* WARNING: Subroutine does not return */__stack_chk_fail();
         }

         /* CallableCustomMethodPointer<TextEditor, void, Ref<InputEvent> const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */
         void CallableCustomMethodPointer<TextEditor,void,Ref<InputEvent>const&>::call(CallableCustomMethodPointer<TextEditor,void,Ref<InputEvent>const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
            CowData<char32_t> local_50[8];
            CowData<char32_t> local_48[8];
            undefined8 local_40;
            Object *local_38;
            long local_30;
            local_30 = *(long*)( in_FS_OFFSET + 0x28 );
            uVar8 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
            if (uVar8 < (uint)ObjectDB::slot_max) {
               while (true) {
                  uVar3 = (ulong)local_38 >> 8;
                  local_38 = (Object*)( uVar3 << 8 );
                  LOCK();
                  bVar11 = (char)ObjectDB::spin_lock == '\0';
                  if (bVar11) {
                     ObjectDB::spin_lock._0_1_ = '\x01';
                  }

                  UNLOCK();
                  if (bVar11) break;
                  local_38 = (Object*)( uVar3 << 8 );
                  do {} while ( (char)ObjectDB::spin_lock != '\0' );
               }
;
               puVar9 = (ulong*)( (ulong)uVar8 * 0x10 + ObjectDB::object_slots );
               if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar9 & 0x7fffffffff )) {
                  ObjectDB::spin_lock._0_1_ = '\0';
                  if (puVar9[1] != 0) {
                     lVar1 = *(long*)( this + 0x28 );
                     pcVar10 = *(code**)( this + 0x38 );
                     lVar2 = *(long*)( this + 0x40 );
                     if (1 < (uint)param_2) {
                        *(undefined4*)param_4 = 3;
                        *(undefined4*)( param_4 + 8 ) = 1;
                        goto LAB_0010abae;
                     }

                     if (param_2 == 0) {
                        *(undefined4*)param_4 = 4;
                        *(undefined4*)( param_4 + 8 ) = 1;
                        goto LAB_0010abae;
                     }

                     *(undefined4*)param_4 = 0;
                     if (( (ulong)pcVar10 & 1 ) != 0) {
                        pcVar10 = *(code**)( pcVar10 + *(long*)( lVar1 + lVar2 ) + -1 );
                     }

                     cVar6 = Variant::can_convert_strict(*(undefined4*)*param_1);
                     uVar4 = _LC58;
                     if (cVar6 == '\0') {
                        *(undefined4*)param_4 = 2;
                        *(undefined8*)( param_4 + 4 ) = uVar4;
                     }

                     local_38 = (Object*)0x0;
                     pOVar7 = (Object*)Variant::get_validated_object();
                     pOVar5 = local_38;
                     if (pOVar7 != local_38) {
                        if (pOVar7 == (Object*)0x0) {
                           if (local_38 != (Object*)0x0) {
                              local_38 = (Object*)0x0;
                              LAB_0010ac7d:cVar6 = RefCounted::unreference();
                              if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
                                 ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                                 Memory::free_static(pOVar5, false);
                              }

                           }

                        }
 else {
                           pOVar7 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &InputEvent::typeinfo, 0);
                           if (pOVar5 != pOVar7) {
                              local_38 = pOVar7;
                              if (( pOVar7 != (Object*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
                                 local_38 = (Object*)0x0;
                              }

                              if (pOVar5 != (Object*)0x0) goto LAB_0010ac7d;
                           }

                        }

                     }

                     ( *pcVar10 )((long*)( lVar1 + lVar2 ));
                     if (( ( local_38 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar5 = local_38,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
                     Memory::free_static(pOVar5, false);
                  }

                  goto LAB_0010abae;
               }

            }
 else {
               ObjectDB::spin_lock._0_1_ = '\0';
            }

         }

         else{_err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);};
         local_40 = 0;
         String::parse_latin1((String*)&local_40, "\', can\'t call method.");
         uitos((ulong)local_50);
         operator+((char *)
         local_48,(String*)"Invalid Object id \'";
         String::operator +((String*)&local_38, (String*)local_48);
         _err_print_error(&_LC56, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_38, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
         CowData<char32_t>::_unref(local_48);
         CowData<char32_t>::_unref(local_50);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
         LAB_0010abae:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }
, /* CanvasItem::is_class(String const&) const */, undefined8 __thiscall CanvasItem::is_class(CanvasItem *this, String * param_1);
   {
      long lVar1;
      char *pcVar2;
      long lVar3;
      char cVar4;
      undefined8 uVar5;
      long in_FS_OFFSET;
      undefined8 local_60;
      char *local_58;
      size_t local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
         lVar3 = *(long*)( lVar1 + 0x20 );
         if (lVar3 == 0) {
            local_60 = 0;
         }
 else {
            pcVar2 = *(char**)( lVar3 + 8 );
            local_60 = 0;
            if (pcVar2 == (char*)0x0) {
               if (*(long*)( lVar3 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar2);
               local_58 = pcVar2;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar4 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar4 != '\0') goto LAB_0010af2b;
      }

      cVar4 = String::operator ==(param_1, "CanvasItem");
      if (cVar4 == '\0') {
         for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
            lVar3 = *(long*)( lVar1 + 0x20 );
            if (lVar3 == 0) {
               local_60 = 0;
            }
 else {
               pcVar2 = *(char**)( lVar3 + 8 );
               local_60 = 0;
               if (pcVar2 == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
               }
 else {
                  local_50 = strlen(pcVar2);
                  local_58 = pcVar2;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            cVar4 = String::operator ==(param_1, (String*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (cVar4 != '\0') goto LAB_0010af2b;
         }

         cVar4 = String::operator ==(param_1, "Node");
         if (cVar4 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar5 = Object::is_class((Object*)this, param_1);
               return uVar5;
            }

            goto LAB_0010b02e;
         }

      }

      LAB_0010af2b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

      LAB_0010b02e:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* Container::is_class(String const&) const */
   undefined8 Container::is_class(Container *this, String *param_1) {
      long lVar1;
      char *pcVar2;
      long lVar3;
      char cVar4;
      undefined8 uVar5;
      long in_FS_OFFSET;
      undefined8 local_60;
      char *local_58;
      size_t local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
         lVar3 = *(long*)( lVar1 + 0x20 );
         if (lVar3 == 0) {
            local_60 = 0;
         }
 else {
            pcVar2 = *(char**)( lVar3 + 8 );
            local_60 = 0;
            if (pcVar2 == (char*)0x0) {
               if (*(long*)( lVar3 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar2);
               local_58 = pcVar2;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar4 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar4 != '\0') goto LAB_0010b11b;
      }

      cVar4 = String::operator ==(param_1, "Container");
      if (cVar4 == '\0') {
         for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
            lVar3 = *(long*)( lVar1 + 0x20 );
            if (lVar3 == 0) {
               local_60 = 0;
            }
 else {
               pcVar2 = *(char**)( lVar3 + 8 );
               local_60 = 0;
               if (pcVar2 == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
               }
 else {
                  local_50 = strlen(pcVar2);
                  local_58 = pcVar2;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            cVar4 = String::operator ==(param_1, (String*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (cVar4 != '\0') goto LAB_0010b11b;
         }

         cVar4 = String::operator ==(param_1, "Control");
         if (cVar4 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar5 = CanvasItem::is_class((CanvasItem*)this, param_1);
               return uVar5;
            }

            goto LAB_0010b21e;
         }

      }

      LAB_0010b11b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

      LAB_0010b21e:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* BoxContainer::is_class(String const&) const */
   undefined8 BoxContainer::is_class(BoxContainer *this, String *param_1) {
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
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar3 = *(long*)( lVar2 + 0x20 );
         if (lVar3 == 0) {
            local_60 = 0;
         }
 else {
            __s = *(char**)( lVar3 + 8 );
            local_60 = 0;
            if (__s == (char*)0x0) {
               if (*(long*)( lVar3 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(__s);
               local_58 = __s;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar4 = String::operator ==(param_1, (String*)&local_60);
         lVar3 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         if (cVar4 != '\0') goto LAB_0010b32b;
      }

      cVar4 = String::operator ==(param_1, "BoxContainer");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Container::is_class((Container*)this, param_1);
            return uVar5;
         }

      }
 else {
         LAB_0010b32b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return 1;
         }

      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* ScriptEditorBase::is_class(String const&) const */
   undefined8 ScriptEditorBase::is_class(ScriptEditorBase *this, String *param_1) {
      long lVar1;
      char *pcVar2;
      long lVar3;
      char cVar4;
      undefined8 uVar5;
      long in_FS_OFFSET;
      undefined8 local_60;
      char *local_58;
      size_t local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
         lVar3 = *(long*)( lVar1 + 0x20 );
         if (lVar3 == 0) {
            local_60 = 0;
         }
 else {
            pcVar2 = *(char**)( lVar3 + 8 );
            local_60 = 0;
            if (pcVar2 == (char*)0x0) {
               if (*(long*)( lVar3 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar2);
               local_58 = pcVar2;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar4 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar4 != '\0') goto LAB_0010b45b;
      }

      cVar4 = String::operator ==(param_1, "ScriptEditorBase");
      if (cVar4 == '\0') {
         for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
            lVar3 = *(long*)( lVar1 + 0x20 );
            if (lVar3 == 0) {
               local_60 = 0;
            }
 else {
               pcVar2 = *(char**)( lVar3 + 8 );
               local_60 = 0;
               if (pcVar2 == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
               }
 else {
                  local_50 = strlen(pcVar2);
                  local_58 = pcVar2;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            cVar4 = String::operator ==(param_1, (String*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (cVar4 != '\0') goto LAB_0010b45b;
         }

         cVar4 = String::operator ==(param_1, "VBoxContainer");
         if (cVar4 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar5 = BoxContainer::is_class((BoxContainer*)this, param_1);
               return uVar5;
            }

            goto LAB_0010b55e;
         }

      }

      LAB_0010b45b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

      LAB_0010b55e:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* TextEditor::is_class(String const&) const */
   undefined8 TextEditor::is_class(TextEditor *this, String *param_1) {
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
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar3 = *(long*)( lVar2 + 0x20 );
         if (lVar3 == 0) {
            local_60 = 0;
         }
 else {
            __s = *(char**)( lVar3 + 8 );
            local_60 = 0;
            if (__s == (char*)0x0) {
               if (*(long*)( lVar3 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(__s);
               local_58 = __s;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar4 = String::operator ==(param_1, (String*)&local_60);
         lVar3 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         if (cVar4 != '\0') goto LAB_0010b66b;
      }

      cVar4 = String::operator ==(param_1, "TextEditor");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = ScriptEditorBase::is_class((ScriptEditorBase*)this, param_1);
            return uVar5;
         }

      }
 else {
         LAB_0010b66b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return 1;
         }

      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* SyntaxHighlighter::_initialize_classv() */
   void SyntaxHighlighter::_initialize_classv(void) {
      long in_FS_OFFSET;
      undefined8 local_70;
      undefined8 local_68;
      long local_60;
      char *local_58;
      undefined8 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (initialize_class() == '\0') {
         if (Resource::initialize_class() == '\0') {
            if (RefCounted::initialize_class() == '\0') {
               Object::initialize_class();
               local_68 = 0;
               local_50 = 6;
               local_58 = "Object";
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
               local_58 = "RefCounted";
               local_70 = 0;
               local_50 = 10;
               String::parse_latin1((StrRange*)&local_70);
               StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               if ((code*)PTR__bind_methods_00114040 != RefCounted::_bind_methods) {
                  RefCounted::_bind_methods();
               }

               RefCounted::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "RefCounted";
            local_50 = 10;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "Resource";
            local_70 = 0;
            local_50 = 8;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            Resource::_bind_methods();
            Resource::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Resource";
         local_68 = 0;
         local_50 = 8;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "SyntaxHighlighter";
         local_70 = 0;
         local_50 = 0x11;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)PTR__bind_methods_00114048 != Resource::_bind_methods) {
            SyntaxHighlighter::_bind_methods();
         }

         initialize_class()::initialized =
         '\x01';
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* HBoxContainer::_initialize_classv() */
   void HBoxContainer::_initialize_classv(void) {
      long in_FS_OFFSET;
      undefined8 local_60;
      long local_58;
      undefined8 local_50;
      long local_48;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (initialize_class() == '\0') {
         if (BoxContainer::initialize_class() == '\0') {
            if (Container::initialize_class() == '\0') {
               if (Control::initialize_class() == '\0') {
                  if (CanvasItem::initialize_class() == '\0') {
                     if (Node::initialize_class() == '\0') {
                        Object::initialize_class();
                        local_50 = 0;
                        String::parse_latin1((String*)&local_50, "Object");
                        StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                        local_60 = 0;
                        String::parse_latin1((String*)&local_60, "Node");
                        StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                        ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                        if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                           StringName::unref();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                        if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                           StringName::unref();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                        if ((code*)PTR__bind_methods_00114040 != Node::_bind_methods) {
                           Node::_bind_methods();
                        }

                        Node::initialize_class()::initialized =
                        '\x01';
                     }

                     local_50 = 0;
                     String::parse_latin1((String*)&local_50, "Node");
                     StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, "CanvasItem");
                     StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                     ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                     if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                     CanvasItem::_bind_methods();
                     if ((code*)PTR__bind_compatibility_methods_00114030 != Object::_bind_compatibility_methods) {
                        CanvasItem::_bind_compatibility_methods();
                     }

                     CanvasItem::initialize_class()::initialized =
                     '\x01';
                  }

                  local_50 = 0;
                  String::parse_latin1((String*)&local_50, "CanvasItem");
                  StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "Control");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                  if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                  Control::_bind_methods();
                  Control::initialize_class()::initialized =
                  '\x01';
               }

               local_50 = 0;
               String::parse_latin1((String*)&local_50, "Control");
               StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
               local_60 = 0;
               String::parse_latin1((String*)&local_60, "Container");
               StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
               if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
               Container::_bind_methods();
               Container::initialize_class()::initialized =
               '\x01';
            }

            local_50 = 0;
            String::parse_latin1((String*)&local_50, "Container");
            StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
            local_60 = 0;
            String::parse_latin1((String*)&local_60, "BoxContainer");
            StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if ((code*)PTR__bind_methods_00114050 != Container::_bind_methods) {
               BoxContainer::_bind_methods();
            }

            BoxContainer::initialize_class()::initialized =
            '\x01';
         }

         local_50 = 0;
         String::parse_latin1((String*)&local_50, "BoxContainer");
         StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
         local_60 = 0;
         String::parse_latin1((String*)&local_60, "HBoxContainer");
         StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         initialize_class()::initialized =
         '\x01';
      }

      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* ScriptEditorBase::_initialize_classv() */
   void ScriptEditorBase::_initialize_classv(void) {
      long in_FS_OFFSET;
      undefined8 local_60;
      long local_58;
      undefined8 local_50;
      long local_48;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (initialize_class() == '\0') {
         if (VBoxContainer::initialize_class() == '\0') {
            if (BoxContainer::initialize_class() == '\0') {
               if (Container::initialize_class() == '\0') {
                  if (Control::initialize_class() == '\0') {
                     if (CanvasItem::initialize_class() == '\0') {
                        if (Node::initialize_class() == '\0') {
                           Object::initialize_class();
                           local_50 = 0;
                           String::parse_latin1((String*)&local_50, "Object");
                           StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                           local_60 = 0;
                           String::parse_latin1((String*)&local_60, "Node");
                           StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                           ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                           if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                              StringName::unref();
                           }

                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                           if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                              StringName::unref();
                           }

                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                           if ((code*)PTR__bind_methods_00114040 != Node::_bind_methods) {
                              Node::_bind_methods();
                           }

                           Node::initialize_class()::initialized =
                           '\x01';
                        }

                        local_50 = 0;
                        String::parse_latin1((String*)&local_50, "Node");
                        StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                        local_60 = 0;
                        String::parse_latin1((String*)&local_60, "CanvasItem");
                        StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                        ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                        if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                           StringName::unref();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                        if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                           StringName::unref();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                        CanvasItem::_bind_methods();
                        if ((code*)PTR__bind_compatibility_methods_00114030 != Object::_bind_compatibility_methods) {
                           CanvasItem::_bind_compatibility_methods();
                        }

                        CanvasItem::initialize_class()::initialized =
                        '\x01';
                     }

                     local_50 = 0;
                     String::parse_latin1((String*)&local_50, "CanvasItem");
                     StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, "Control");
                     StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                     ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                     if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                     Control::_bind_methods();
                     Control::initialize_class()::initialized =
                     '\x01';
                  }

                  local_50 = 0;
                  String::parse_latin1((String*)&local_50, "Control");
                  StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "Container");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                  if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                  Container::_bind_methods();
                  Container::initialize_class()::initialized =
                  '\x01';
               }

               local_50 = 0;
               String::parse_latin1((String*)&local_50, "Container");
               StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
               local_60 = 0;
               String::parse_latin1((String*)&local_60, "BoxContainer");
               StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
               if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
               BoxContainer::_bind_methods();
               BoxContainer::initialize_class()::initialized =
               '\x01';
            }

            local_50 = 0;
            String::parse_latin1((String*)&local_50, "BoxContainer");
            StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
            local_60 = 0;
            String::parse_latin1((String*)&local_60, "VBoxContainer");
            StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            VBoxContainer::initialize_class()::initialized =
            '\x01';
         }

         local_50 = 0;
         String::parse_latin1((String*)&local_50, "VBoxContainer");
         StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
         local_60 = 0;
         String::parse_latin1((String*)&local_60, "ScriptEditorBase");
         StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if ((code*)PTR__bind_methods_00114038 != BoxContainer::_bind_methods) {
            ScriptEditorBase::_bind_methods();
         }

         initialize_class()::initialized =
         '\x01';
      }

      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* RefCounted::is_class(String const&) const */
   undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
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
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String*)&local_60);
         lVar4 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (cVar5 != '\0') goto LAB_0010c7ab;
      }

      cVar5 = String::operator ==(param_1, "RefCounted");
      if (cVar5 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar4 = *(long*)( lVar2 + 0x20 );
            if (lVar4 == 0) {
               local_60 = 0;
            }
 else {
               pcVar3 = *(char**)( lVar4 + 8 );
               local_60 = 0;
               if (pcVar3 == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
               }
 else {
                  local_50 = strlen(pcVar3);
                  local_58 = pcVar3;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            cVar5 = String::operator ==(param_1, (String*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (cVar5 != '\0') goto LAB_0010c7ab;
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = String::operator ==(param_1, "Object");
            return uVar6;
         }

      }
 else {
         LAB_0010c7ab:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return 1;
         }

      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* Resource::is_class(String const&) const */
   undefined8 Resource::is_class(Resource *this, String *param_1) {
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
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar3 = *(long*)( lVar2 + 0x20 );
         if (lVar3 == 0) {
            local_60 = 0;
         }
 else {
            __s = *(char**)( lVar3 + 8 );
            local_60 = 0;
            if (__s == (char*)0x0) {
               if (*(long*)( lVar3 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(__s);
               local_58 = __s;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar4 = String::operator ==(param_1, (String*)&local_60);
         lVar3 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         if (cVar4 != '\0') goto LAB_0010c9ab;
      }

      cVar4 = String::operator ==(param_1, "Resource");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar5;
         }

      }
 else {
         LAB_0010c9ab:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return 1;
         }

      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* SyntaxHighlighter::is_class(String const&) const */
   undefined8 SyntaxHighlighter::is_class(SyntaxHighlighter *this, String *param_1) {
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
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar3 = *(long*)( lVar2 + 0x20 );
         if (lVar3 == 0) {
            local_60 = 0;
         }
 else {
            __s = *(char**)( lVar3 + 8 );
            local_60 = 0;
            if (__s == (char*)0x0) {
               if (*(long*)( lVar3 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(__s);
               local_58 = __s;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar4 = String::operator ==(param_1, (String*)&local_60);
         lVar3 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         if (cVar4 != '\0') goto LAB_0010cafb;
      }

      cVar4 = String::operator ==(param_1, "SyntaxHighlighter");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Resource::is_class((Resource*)this, param_1);
            return uVar5;
         }

      }
 else {
         LAB_0010cafb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return 1;
         }

      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* PropertyListHelper::~PropertyListHelper() */
   void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
      uint uVar1;
      long lVar2;
      void *pvVar3;
      pvVar3 = *(void**)( this + 0x18 );
      if (pvVar3 != (void*)0x0) {
         if (*(int*)( this + 0x3c ) != 0) {
            uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x38 ) * 4 );
            if (uVar1 == 0) {
               *(undefined4*)( this + 0x3c ) = 0;
               *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
            }
 else {
               lVar2 = 0;
               do {
                  if (*(int*)( *(long*)( this + 0x20 ) + lVar2 ) != 0) {
                     pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
                     *(int*)( *(long*)( this + 0x20 ) + lVar2 ) = 0;
                     if (Variant::needs_deinit[*(int*)( (long)pvVar3 + 0x48 )] != '\0') {
                        Variant::_clear_internal();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 0x38 ));
                     if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x28 ) != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 0x20 ));
                     CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 0x10 ));
                     Memory::free_static(pvVar3, false);
                     pvVar3 = *(void**)( this + 0x18 );
                     *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
                  }

                  lVar2 = lVar2 + 4;
               }
 while ( lVar2 != (ulong)uVar1 << 2 );
               *(undefined4*)( this + 0x3c ) = 0;
               *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
               if (pvVar3 == (void*)0x0) goto LAB_0010cc3f;
            }

         }

         Memory::free_static(pvVar3, false);
         Memory::free_static(*(void**)( this + 0x20 ), false);
      }

      LAB_0010cc3f:CowData<char32_t>::_unref((CowData<char32_t>*)this);
      return;
   }

   /* HBoxContainer::is_class(String const&) const */
   undefined8 HBoxContainer::is_class(HBoxContainer *this, String *param_1) {
      long lVar1;
      char *pcVar2;
      long lVar3;
      char cVar4;
      undefined8 uVar5;
      long in_FS_OFFSET;
      undefined8 local_60;
      char *local_58;
      size_t local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
         lVar3 = *(long*)( lVar1 + 0x20 );
         if (lVar3 == 0) {
            local_60 = 0;
         }
 else {
            pcVar2 = *(char**)( lVar3 + 8 );
            local_60 = 0;
            if (pcVar2 == (char*)0x0) {
               if (*(long*)( lVar3 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar2);
               local_58 = pcVar2;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar4 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar4 != '\0') goto LAB_0010cd7b;
      }

      cVar4 = String::operator ==(param_1, "HBoxContainer");
      if (cVar4 == '\0') {
         for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
            lVar3 = *(long*)( lVar1 + 0x20 );
            if (lVar3 == 0) {
               local_60 = 0;
            }
 else {
               pcVar2 = *(char**)( lVar3 + 8 );
               local_60 = 0;
               if (pcVar2 == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
               }
 else {
                  local_50 = strlen(pcVar2);
                  local_58 = pcVar2;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            cVar4 = String::operator ==(param_1, (String*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (cVar4 != '\0') goto LAB_0010cd7b;
         }

         cVar4 = String::operator ==(param_1, "BoxContainer");
         if (cVar4 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar5 = Container::is_class((Container*)this, param_1);
               return uVar5;
            }

            goto LAB_0010ce7e;
         }

      }

      LAB_0010cd7b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

      LAB_0010ce7e:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void Node::_get_property_listv(List *param_1, bool param_2) {
      undefined7 in_register_00000031;
      long in_FS_OFFSET;
      undefined8 local_98;
      undefined8 local_90;
      long local_88;
      long local_80;
      undefined *local_78;
      undefined8 local_70;
      long local_68;
      int local_60;
      undefined8 local_58;
      undefined4 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      local_78 = &_LC21;
      local_88 = 0;
      local_90 = 0;
      local_70 = 4;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = &_LC21;
      local_98 = 0;
      local_70 = 4;
      String::parse_latin1((StrRange*)&local_98);
      local_78 = (undefined*)( (ulong)local_78 & 0xffffffff00000000 );
      local_70 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

      }
 else {
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }

      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_78, "Node", false);
      ClassDB::get_property_list((StringName*)&local_78, (List*)CONCAT71(in_register_00000031, param_2), true, (Object*)param_1);
      if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
         StringName::unref();
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void RefCounted::_get_property_listv(List *param_1, bool param_2) {
      undefined7 in_register_00000031;
      long in_FS_OFFSET;
      undefined8 local_98;
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
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      local_78 = "RefCounted";
      local_88 = 0;
      local_90 = 0;
      local_70 = 10;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "RefCounted";
      local_98 = 0;
      local_70 = 10;
      String::parse_latin1((StrRange*)&local_98);
      local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
      local_70 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      if (local_90 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 == 0x11) {
            StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
            if (local_68 == local_80) {
               if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_68 = local_80;
            }

            goto LAB_0010d224;
         }

      }

      local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      LAB_0010d224:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_78, "RefCounted", false);
      ClassDB::get_property_list((StringName*)&local_78, (List*)CONCAT71(in_register_00000031, param_2), true, (Object*)param_1);
      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void Resource::_get_property_listv(Resource *this, List *param_1, bool param_2) {
      long in_FS_OFFSET;
      undefined8 local_98;
      undefined8 local_90;
      long local_88;
      long local_80;
      char *local_78;
      undefined8 local_70;
      long local_68;
      int local_60;
      undefined8 local_58;
      undefined4 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (!param_2) {
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
      }

      local_88 = 0;
      local_90 = 0;
      local_78 = "Resource";
      local_70 = 8;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "Resource";
      local_98 = 0;
      local_70 = 8;
      String::parse_latin1((StrRange*)&local_98);
      local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
      local_70 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

      }
 else {
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }

      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_78, "Resource", false);
      ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

      if (param_2) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
            return;
         }

      }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* SyntaxHighlighter::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void SyntaxHighlighter::_get_property_listv(SyntaxHighlighter *this, List *param_1, bool param_2) {
      long in_FS_OFFSET;
      undefined8 local_98;
      undefined8 local_90;
      long local_88;
      long local_80;
      char *local_78;
      undefined8 local_70;
      long local_68;
      int local_60;
      undefined8 local_58;
      undefined4 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (!param_2) {
         Resource::_get_property_listv((Resource*)this, param_1, false);
      }

      local_88 = 0;
      local_90 = 0;
      local_78 = "SyntaxHighlighter";
      local_70 = 0x11;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "SyntaxHighlighter";
      local_98 = 0;
      local_70 = 0x11;
      String::parse_latin1((StrRange*)&local_98);
      local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
      local_70 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

      }
 else {
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }

      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_78, "SyntaxHighlighter", false);
      ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

      if (param_2) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Resource::_get_property_listv((Resource*)this, param_1, true);
            return;
         }

      }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void CanvasItem::_get_property_listv(CanvasItem *this, List *param_1, bool param_2) {
      long in_FS_OFFSET;
      undefined8 local_98;
      undefined8 local_90;
      long local_88;
      long local_80;
      char *local_78;
      undefined8 local_70;
      long local_68;
      int local_60;
      undefined8 local_58;
      undefined4 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (!param_2) {
         Node::_get_property_listv((List*)this, SUB81(param_1, 0));
      }

      local_88 = 0;
      local_90 = 0;
      local_78 = "CanvasItem";
      local_70 = 10;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "CanvasItem";
      local_98 = 0;
      local_70 = 10;
      String::parse_latin1((StrRange*)&local_98);
      local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
      local_70 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

      }
 else {
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }

      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_78, "CanvasItem", false);
      ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

      if ((code*)PTR__get_property_list_00114058 != Object::_get_property_list) {
         CanvasItem::_get_property_list((List*)this);
      }

      if (param_2) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Node::_get_property_listv((List*)this, SUB81(param_1, 0));
            return;
         }

      }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void Control::_get_property_listv(Control *this, List *param_1, bool param_2) {
      long in_FS_OFFSET;
      undefined8 local_98;
      undefined8 local_90;
      long local_88;
      long local_80;
      char *local_78;
      undefined8 local_70;
      long local_68;
      int local_60;
      undefined8 local_58;
      undefined4 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (!param_2) {
         CanvasItem::_get_property_listv((CanvasItem*)this, param_1, false);
      }

      local_88 = 0;
      local_90 = 0;
      local_78 = "Control";
      local_70 = 7;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "Control";
      local_98 = 0;
      local_70 = 7;
      String::parse_latin1((StrRange*)&local_98);
      local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
      local_70 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

      }
 else {
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }

      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_78, "Control", false);
      ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

      if ((code*)PTR__get_property_list_00114060 != CanvasItem::_get_property_list) {
         Control::_get_property_list((List*)this);
      }

      if (param_2) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            CanvasItem::_get_property_listv((CanvasItem*)this, param_1, true);
            return;
         }

      }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* Container::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void Container::_get_property_listv(Container *this, List *param_1, bool param_2) {
      long in_FS_OFFSET;
      undefined8 local_98;
      undefined8 local_90;
      long local_88;
      long local_80;
      char *local_78;
      undefined8 local_70;
      long local_68;
      int local_60;
      undefined8 local_58;
      undefined4 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (!param_2) {
         Control::_get_property_listv((Control*)this, param_1, false);
      }

      local_88 = 0;
      local_90 = 0;
      local_78 = "Container";
      local_70 = 9;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "Container";
      local_98 = 0;
      local_70 = 9;
      String::parse_latin1((StrRange*)&local_98);
      local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
      local_70 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

      }
 else {
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }

      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_78, "Container", false);
      ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

      if (param_2) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Control::_get_property_listv((Control*)this, param_1, true);
            return;
         }

      }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* BoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void BoxContainer::_get_property_listv(BoxContainer *this, List *param_1, bool param_2) {
      long in_FS_OFFSET;
      undefined8 local_98;
      undefined8 local_90;
      long local_88;
      long local_80;
      char *local_78;
      undefined8 local_70;
      long local_68;
      int local_60;
      undefined8 local_58;
      undefined4 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (!param_2) {
         Container::_get_property_listv((Container*)this, param_1, false);
      }

      local_88 = 0;
      local_90 = 0;
      local_78 = "BoxContainer";
      local_70 = 0xc;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "BoxContainer";
      local_98 = 0;
      local_70 = 0xc;
      String::parse_latin1((StrRange*)&local_98);
      local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
      local_70 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

      }
 else {
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }

      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_78, "BoxContainer", false);
      ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

      if (param_2) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Container::_get_property_listv((Container*)this, param_1, true);
            return;
         }

      }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void HBoxContainer::_get_property_listv(HBoxContainer *this, List *param_1, bool param_2) {
      long in_FS_OFFSET;
      undefined8 local_98;
      undefined8 local_90;
      long local_88;
      long local_80;
      char *local_78;
      undefined8 local_70;
      long local_68;
      int local_60;
      undefined8 local_58;
      undefined4 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (!param_2) {
         BoxContainer::_get_property_listv((BoxContainer*)this, param_1, false);
      }

      local_88 = 0;
      local_90 = 0;
      local_78 = "HBoxContainer";
      local_70 = 0xd;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "HBoxContainer";
      local_98 = 0;
      local_70 = 0xd;
      String::parse_latin1((StrRange*)&local_98);
      local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
      local_70 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

      }
 else {
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }

      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_78, "HBoxContainer", false);
      ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

      if (param_2) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            BoxContainer::_get_property_listv((BoxContainer*)this, param_1, true);
            return;
         }

      }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void VBoxContainer::_get_property_listv(VBoxContainer *this, List *param_1, bool param_2) {
      long in_FS_OFFSET;
      undefined8 local_98;
      undefined8 local_90;
      long local_88;
      long local_80;
      char *local_78;
      undefined8 local_70;
      long local_68;
      int local_60;
      undefined8 local_58;
      undefined4 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (!param_2) {
         BoxContainer::_get_property_listv((BoxContainer*)this, param_1, false);
      }

      local_88 = 0;
      local_90 = 0;
      local_78 = "VBoxContainer";
      local_70 = 0xd;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "VBoxContainer";
      local_98 = 0;
      local_70 = 0xd;
      String::parse_latin1((StrRange*)&local_98);
      local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
      local_70 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

      }
 else {
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }

      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_78, "VBoxContainer", false);
      ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

      if (param_2) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            BoxContainer::_get_property_listv((BoxContainer*)this, param_1, true);
            return;
         }

      }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* ScriptEditorBase::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void ScriptEditorBase::_get_property_listv(ScriptEditorBase *this, List *param_1, bool param_2) {
      long in_FS_OFFSET;
      undefined8 local_98;
      undefined8 local_90;
      long local_88;
      long local_80;
      char *local_78;
      undefined8 local_70;
      long local_68;
      int local_60;
      undefined8 local_58;
      undefined4 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (!param_2) {
         VBoxContainer::_get_property_listv((VBoxContainer*)this, param_1, false);
      }

      local_88 = 0;
      local_90 = 0;
      local_78 = "ScriptEditorBase";
      local_70 = 0x10;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "ScriptEditorBase";
      local_98 = 0;
      local_70 = 0x10;
      String::parse_latin1((StrRange*)&local_98);
      local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
      local_70 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

      }
 else {
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }

      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_78, "ScriptEditorBase", false);
      ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

      if (param_2) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            VBoxContainer::_get_property_listv((VBoxContainer*)this, param_1, true);
            return;
         }

      }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* TextEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void TextEditor::_get_property_listv(TextEditor *this, List *param_1, bool param_2) {
      long in_FS_OFFSET;
      undefined8 local_98;
      undefined8 local_90;
      long local_88;
      long local_80;
      char *local_78;
      undefined8 local_70;
      long local_68;
      int local_60;
      undefined8 local_58;
      undefined4 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (!param_2) {
         ScriptEditorBase::_get_property_listv((ScriptEditorBase*)this, param_1, false);
      }

      local_88 = 0;
      local_90 = 0;
      local_78 = "TextEditor";
      local_70 = 10;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "TextEditor";
      local_98 = 0;
      local_70 = 10;
      String::parse_latin1((StrRange*)&local_98);
      local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
      local_70 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

      }
 else {
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }

      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_78, "TextEditor", false);
      ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

      if (param_2) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            ScriptEditorBase::_get_property_listv((ScriptEditorBase*)this, param_1, true);
            return;
         }

      }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* Ref<Shortcut>::unref() */
   void Ref<Shortcut>::unref(Ref<Shortcut> *this) {
      Object *pOVar1;
      char cVar2;
      if (*(long*)this != 0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            pOVar1 = *(Object**)this;
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
               *(undefined8*)this = 0;
               return;
            }

         }

      }

      *(undefined8*)this = 0;
      return;
   }

   /* Ref<EditorSyntaxHighlighter>::unref() */
   void Ref<EditorSyntaxHighlighter>::unref(Ref<EditorSyntaxHighlighter> *this) {
      Object *pOVar1;
      char cVar2;
      if (*(long*)this != 0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            pOVar1 = *(Object**)this;
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
               *(undefined8*)this = 0;
               return;
            }

         }

      }

      *(undefined8*)this = 0;
      return;
   }

   /* TextEditor::add_syntax_highlighter(Ref<EditorSyntaxHighlighter>) */
   void TextEditor::_GLOBAL__sub_I_add_syntax_highlighter(void) {
      undefined8 uStack_8;
      if (PopupMenu::base_property_helper == '\0') {
         PopupMenu::base_property_helper = '\x01';
         PopupMenu::base_property_helper._64_8_ = 0;
         PopupMenu::base_property_helper._0_16_ = (undefined1[16])0x0;
         PopupMenu::base_property_helper._24_16_ = (undefined1[16])0x0;
         PopupMenu::base_property_helper._40_16_ = (undefined1[16])0x0;
         PopupMenu::base_property_helper._56_8_ = 2;
         __cxa_atexit(PropertyListHelper::~PropertyListHelper, PopupMenu::base_property_helper, &__dso_handle);
      }

      if (MenuButton::base_property_helper != '\0') {
         return;
      }

      MenuButton::base_property_helper = 1;
      MenuButton::base_property_helper._64_8_ = 0;
      MenuButton::base_property_helper._56_8_ = 2;
      MenuButton::base_property_helper._0_16_ = (undefined1[16])0x0;
      MenuButton::base_property_helper._24_16_ = (undefined1[16])0x0;
      MenuButton::base_property_helper._40_16_ = (undefined1[16])0x0;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, MenuButton::base_property_helper, &__dso_handle, uStack_8);
      return;
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* HBoxContainer::~HBoxContainer() */
   void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* SyntaxHighlighter::~SyntaxHighlighter() */
   void SyntaxHighlighter::~SyntaxHighlighter(SyntaxHighlighter *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Control,void> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* CallableCustomMethodPointer<TextEditor, void>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<TextEditor,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<TextEditor,void> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* CallableCustomMethodPointer<TextEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<TextEditor,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<TextEditor,void,Ref<InputEvent>const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* CallableCustomMethodPointer<TextEditor, void, int>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<TextEditor,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<TextEditor,void,int> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* StringName::~StringName() */
   void StringName::~StringName(StringName *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* PropertyListHelper::~PropertyListHelper() */
   void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

}


/* ScriptCreateDialog::_use_template_pressed() */void ScriptCreateDialog::_use_template_pressed(ScriptCreateDialog *this) {
   ScriptCreateDialog SVar1;
   StringName *pSVar2;
   long in_FS_OFFSET;
   long local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   SVar1 = (ScriptCreateDialog)BaseButton::is_pressed();
   this[0xe4f] = SVar1;
   pSVar2 = (StringName*)EditorSettings::get_singleton();
   Variant::Variant((Variant*)local_48, (bool)this[0xe4f]);
   StringName::StringName((StringName*)&local_50, "_script_setup_use_script_templates", false);
   Object::set(pSVar2, (Variant*)&local_50, (bool*)local_48);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      EditorValidationPanel::update();
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<ScriptLanguage::TemplateLocation>::_copy_on_write() [clone .isra.0] */void CowData<ScriptLanguage::TemplateLocation>::_copy_on_write(CowData<ScriptLanguage::TemplateLocation> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 4;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = lVar2;
      memcpy(puVar4 + 2, *(void**)this, __n);
      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
 else {
         *(undefined8*)this = 0;
      }

   }

   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
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
/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */void List<PropertyInfo,DefaultAllocator>::push_back(List<PropertyInfo,DefaultAllocator> *this, PropertyInfo *param_1) {
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
/* ScriptCreateDialog::_can_be_built_in() */ScriptCreateDialog ScriptCreateDialog::_can_be_built_in(ScriptCreateDialog *this) {
   ScriptCreateDialog SVar1;
   SVar1 = this[0xe4a];
   if (SVar1 != (ScriptCreateDialog)0x0) {
      SVar1 = this[0xe50];
   }

   return SVar1;
}
/* ScriptCreateDialog::set_inheritance_base_type(String const&) */void ScriptCreateDialog::set_inheritance_base_type(ScriptCreateDialog *this, String *param_1) {
   if (*(long*)( this + 0xe98 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0xe98 ), (CowData*)param_1);
      return;
   }

   return;
}
/* ScriptCreateDialog::_get_current_template() const */void ScriptCreateDialog::_get_current_template(void) {
   CowData *pCVar1;
   long lVar2;
   char cVar3;
   int iVar4;
   CowData *pCVar5;
   long in_RSI;
   CowData<char32_t> *in_RDI;
   long in_FS_OFFSET;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = OptionButton::get_selected();
   pCVar5 = *(CowData**)( in_RSI + 0xe88 );
   if (pCVar5 != (CowData*)0x0) {
      pCVar1 = pCVar5 + *(long*)( pCVar5 + -8 ) * 0x28;
      for (; pCVar1 != pCVar5; pCVar5 = pCVar5 + 0x28) {
         if (*(char*)( in_RSI + 0xe4f ) == '\0') {
            if (( *(int*)( pCVar5 + 0x24 ) == 0 ) && ( cVar3 = String::operator ==((String*)( pCVar5 + 8 ), "Empty") ),cVar3 != '\0') {
               *(undefined8*)in_RDI = 0;
               CowData<char32_t>::_ref(in_RDI, pCVar5);
               *(undefined8*)( in_RDI + 8 ) = 0;
               LAB_00100543:CowData<char32_t>::_ref(in_RDI + 8, pCVar5 + 8);
               *(undefined8*)( in_RDI + 0x10 ) = 0;
               CowData<char32_t>::_ref(in_RDI + 0x10, pCVar5 + 0x10);
               *(undefined8*)( in_RDI + 0x18 ) = 0;
               CowData<char32_t>::_ref(in_RDI + 0x18, pCVar5 + 0x18);
               *(undefined8*)( in_RDI + 0x20 ) = *(undefined8*)( pCVar5 + 0x20 );
               goto LAB_001004f6;
            }

         }
 else if (*(int*)( pCVar5 + 0x20 ) == iVar4) {
            *(undefined8*)in_RDI = 0;
            CowData<char32_t>::_ref(in_RDI, pCVar5);
            *(undefined8*)( in_RDI + 8 ) = 0;
            goto LAB_00100543;
         }

      }

   }

   *(undefined8*)( in_RDI + 0x20 ) = 0;
   *(undefined1(*) [16])in_RDI = (undefined1[16])0x0;
   *(undefined1(*) [16])( in_RDI + 0x10 ) = (undefined1[16])0x0;
   String::parse_latin1((StrRange*)in_RDI);
   *(undefined8*)( in_RDI + 0x18 ) = 0;
   *(undefined8*)( in_RDI + 0x20 ) = 0;
   *(undefined1(*) [16])( in_RDI + 8 ) = (undefined1[16])0x0;
   LAB_001004f6:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ScriptCreateDialog::_get_script_origin_label(ScriptLanguage::TemplateLocation const&) const */TemplateLocation *ScriptCreateDialog::_get_script_origin_label(TemplateLocation *param_1) {
   int iVar1;
   int *in_RDX;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = *in_RDX;
   if (iVar1 == 1) {
      local_50 = 0;
      local_40 = 0;
      local_48 = "";
      String::parse_latin1((StrRange*)&local_50);
      local_48 = "Editor";
      local_40 = 6;
   }
 else if (iVar1 == 2) {
      local_50 = 0;
      local_40 = 0;
      local_48 = "";
      String::parse_latin1((StrRange*)&local_50);
      local_48 = "Project";
      local_40 = 7;
   }
 else {
      if (iVar1 != 0) {
         *(undefined8*)param_1 = 0;
         local_48 = "";
         local_40 = 0;
         String::parse_latin1((StrRange*)param_1);
         goto LAB_00100647;
      }

      local_50 = 0;
      local_40 = 0;
      local_48 = "";
      String::parse_latin1((StrRange*)&local_50);
      local_48 = "Built-in";
      local_40 = 8;
   }

   local_58 = 0;
   String::parse_latin1((StrRange*)&local_58);
   TTR((String*)param_1, (String*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LAB_00100647:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ScriptCreateDialog::_browse_class_in_tree() */void ScriptCreateDialog::_browse_class_in_tree(ScriptCreateDialog *this) {
   undefined8 uVar1;
   String *pSVar2;
   long in_FS_OFFSET;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   CreateDialog::set_base_type(*(String**)( this + 0xe28 ));
   uVar1 = *(undefined8*)( this + 0xe28 );
   local_58 = "";
   local_60 = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)&local_60);
   local_58 = "";
   local_68 = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)&local_68);
   CreateDialog::popup_create(SUB81(uVar1, 0), true, (String*)0x0, (String*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   pSVar2 = *(String**)( this + 0xe28 );
   local_60 = 0;
   if (*(long*)( this + 0xe98 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( this + 0xe98 ));
   }

   local_70 = 0;
   local_58 = "";
   local_50 = 0;
   String::parse_latin1((StrRange*)&local_70);
   local_58 = "Inherit %s";
   local_78 = 0;
   local_50 = 10;
   String::parse_latin1((StrRange*)&local_78);
   TTR((String*)&local_68, (String*)&local_78);
   vformat<String>((CowData<char32_t>*)&local_58, (StrRange*)&local_68, (StrRange*)&local_60);
   Window::set_title(pSVar2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   local_58 = "";
   local_60 = 0;
   uVar1 = *(undefined8*)( this + 0xe28 );
   local_50 = 0;
   String::parse_latin1((StrRange*)&local_60);
   local_58 = "Inherit";
   local_68 = 0;
   local_50 = 7;
   String::parse_latin1((StrRange*)&local_68);
   TTR((String*)&local_58, (String*)&local_68);
   AcceptDialog::set_ok_button_text(uVar1, (CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ScriptCreateDialog::_path_hbox_sorted() */void ScriptCreateDialog::_path_hbox_sorted(ScriptCreateDialog *this) {
   undefined8 uVar1;
   char cVar2;
   int iVar3;
   long in_FS_OFFSET;
   CowData<char32_t> local_40[8];
   CowData<char32_t> local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar2 = Window::is_visible();
   if (cVar2 == '\0') {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      LineEdit::get_text();
      iVar3 = String::rfind_char((wchar32)local_38, 0x2f);
      CowData<char32_t>::_unref(local_38);
      LineEdit::get_text();
      String::get_basename();
      CowData<char32_t>::_unref(local_40);
      CowData<char32_t>::_unref(local_38);
      if (this[0xe4e] == (ScriptCreateDialog)0x0) {
         LineEdit::select((int)*(undefined8*)( this + 0xde8 ), iVar3 + 1);
      }

      uVar1 = *(undefined8*)( this + 0xde8 );
      LineEdit::get_text();
      LineEdit::set_caret_column((int)uVar1);
      CowData<char32_t>::_unref(local_38);
      LineEdit::set_caret_column((int)*(undefined8*)( this + 0xde8 ));
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Control::grab_focus();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ScriptCreateDialog::ScriptCreateDialog() */void ScriptCreateDialog::ScriptCreateDialog(ScriptCreateDialog *this) {
   undefined8 uVar1;
   Callable *pCVar2;
   Vector2 *pVVar3;
   code *pcVar4;
   String *pSVar5;
   long lVar6;
   int iVar7;
   char cVar8;
   GridContainer *this_00;
   EditorValidationPanel *this_01;
   Control *this_02;
   BoxContainer *pBVar9;
   OptionButton *pOVar10;
   Label *pLVar11;
   long *plVar12;
   LineEdit *pLVar13;
   Button *pBVar14;
   CheckBox *pCVar15;
   CreateDialog *this_03;
   EditorFileDialog *this_04;
   AcceptDialog *this_05;
   bool bVar16;
   bool bVar17;
   int iVar18;
   long in_FS_OFFSET;
   float fVar19;
   String local_a0[8];
   long local_98[2];
   undefined8 local_88[2];
   int local_78[8];
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ConfirmationDialog::ConfirmationDialog((ConfirmationDialog*)this);
   *(undefined***)this = &PTR__initialize_classv_00114ff0;
   uVar1 = _LC26;
   *(undefined2*)( this + 0xe50 ) = 0x101;
   *(undefined8*)( this + 0xe48 ) = uVar1;
   *(undefined8*)( this + 0xe28 ) = 0;
   this[0xe30] = (ScriptCreateDialog)0x0;
   this[0xe58] = (ScriptCreateDialog)0x0;
   *(undefined8*)( this + 0xe98 ) = 0;
   *(undefined1(*) [16])( this + 0xdb8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xdc8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xdd8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xde8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xdf8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xe08 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xe18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xe38 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xe88 ) = (undefined1[16])0x0;
   Dictionary::Dictionary((Dictionary*)local_88);
   Variant::Variant((Variant*)local_58, (Dictionary*)local_88);
   local_98[0] = 0;
   String::parse_latin1((String*)local_98, "_script_setup_templates_dictionary");
   _EDITOR_DEF((String*)local_78, (Variant*)local_98, SUB81((Variant*)local_58, 0), false);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)local_88);
   this_00 = (GridContainer*)operator_new(0xa10, "");
   GridContainer::GridContainer(this_00);
   postinitialize_handler((Object*)this_00);
   GridContainer::set_columns((int)this_00);
   this_01 = (EditorValidationPanel*)operator_new(0xac0, "");
   EditorValidationPanel::EditorValidationPanel(this_01);
   postinitialize_handler((Object*)this_01);
   *(EditorValidationPanel**)( this + 0xdb8 ) = this_01;
   local_88[0] = 0;
   String::parse_latin1((String*)local_88, "");
   local_98[0] = 0;
   String::parse_latin1((String*)local_98, "Script path/name is valid.");
   TTR(local_a0, (String*)local_98);
   EditorValidationPanel::add_line((int)this_01, (String*)0x0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   uVar1 = *(undefined8*)( this + 0xdb8 );
   local_88[0] = 0;
   String::parse_latin1((String*)local_88, "");
   local_98[0] = 0;
   String::parse_latin1((String*)local_98, "Will create a new script file.");
   TTR(local_a0, (String*)local_98);
   EditorValidationPanel::add_line((int)uVar1, (String*)0x1);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   uVar1 = *(undefined8*)( this + 0xdb8 );
   local_88[0] = 0;
   String::parse_latin1((String*)local_88, "");
   EditorValidationPanel::add_line((int)uVar1, (String*)0x2);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   uVar1 = *(undefined8*)( this + 0xdb8 );
   local_88[0] = 0;
   String::parse_latin1((String*)local_88, "");
   EditorValidationPanel::add_line((int)uVar1, (String*)0x3);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   pCVar2 = *(Callable**)( this + 0xdb8 );
   create_custom_callable_function_pointer<ScriptCreateDialog>((ScriptCreateDialog*)local_88, (char*)this, (_func_void*)"&ScriptCreateDialog::_update_dialog");
   EditorValidationPanel::set_update_callback(pCVar2);
   Callable::~Callable((Callable*)local_88);
   EditorValidationPanel::set_accept_button(*(Button**)( this + 0xdb8 ));
   this_02 = (Control*)operator_new(0x9c8, "");
   Control::Control(this_02);
   postinitialize_handler((Object*)this_02);
   fVar19 = (float)EditorScale::get_scale();
   local_58[0] = ( ulong )(uint)(fVar19 * __LC33) << 0x20;
   Control::set_custom_minimum_size((Vector2*)this_02);
   pBVar9 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar9, true);
   pBVar9[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar9 = &PTR__initialize_classv_00114a00;
   postinitialize_handler((Object*)pBVar9);
   Node::add_child(pBVar9, this_00, 0, 0);
   Node::add_child(pBVar9, this_02, 0, 0);
   Node::add_child(pBVar9, *(undefined8*)( this + 0xdb8 ), 0, 0);
   Node::add_child(this, pBVar9, 0, 0);
   pOVar10 = (OptionButton*)operator_new(0xd00, "");
   local_88[0] = 0;
   OptionButton::OptionButton(pOVar10, (String*)local_88);
   postinitialize_handler((Object*)pOVar10);
   *(OptionButton**)( this + 0xdd8 ) = pOVar10;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   pVVar3 = *(Vector2**)( this + 0xdd8 );
   fVar19 = (float)EditorScale::get_scale();
   local_58[0] = CONCAT44(fVar19 * _LC34._4_4_, fVar19 * (float)_LC34);
   Control::set_custom_minimum_size(pVVar3);
   Button::set_expand_icon(SUB81(*(undefined8*)( this + 0xdd8 ), 0));
   Control::set_h_size_flags(*(undefined8*)( this + 0xdd8 ), 3);
   pLVar11 = (Label*)operator_new(0xad8, "");
   local_88[0] = 0;
   String::parse_latin1((String*)local_88, "");
   local_98[0] = 0;
   String::parse_latin1((String*)local_98, "Language:");
   TTR(local_a0, (String*)local_98);
   Label::Label(pLVar11, local_a0);
   postinitialize_handler((Object*)pLVar11);
   Node::add_child(this_00, pLVar11, 0, 0);
   iVar18 = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   Node::add_child(this_00, *(undefined8*)( this + 0xdd8 ), 0, 0);
   iVar7 = (int)ScriptServer::_language_count;
   *(undefined4*)( this + 0xe54 ) = 0xffffffff;
   if (0 < iVar7) {
      do {
         plVar12 = (long*)ScriptServer::get_language(iVar18);
         ( **(code**)( *plVar12 + 0x150 ) )((Dictionary*)local_88, plVar12);
         OptionButton::add_item(*(String**)( this + 0xdd8 ), (int)(Dictionary*)local_88);
         cVar8 = String::operator ==((String*)local_88, "GDScript");
         if (cVar8 != '\0') {
            *(int*)( this + 0xe54 ) = iVar18;
         }

         iVar18 = iVar18 + 1;
         CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
      }
 while ( iVar18 < (int)ScriptServer::_language_count );
      plVar12 = *(long**)( this + 0xdd8 );
      if (*(int*)( this + 0xe54 ) < 0) goto LAB_001010cb;
      OptionButton::select((int)plVar12);
   }

   plVar12 = *(long**)( this + 0xdd8 );
   LAB_001010cb:pcVar4 = *(code**)( *plVar12 + 0x108 );
   create_custom_callable_function_pointer<ScriptCreateDialog,int>((ScriptCreateDialog*)local_88, (char*)this, (_func_void_int*)"&ScriptCreateDialog::_language_changed");
   ( *pcVar4 )(plVar12, SceneStringNames::singleton + 0x260, (Dictionary*)local_88, 0);
   Callable::~Callable((Callable*)local_88);
   String::parse_latin1((String*)( this + 0xe98 ), "Object");
   pBVar9 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar9, false);
   pBVar9[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar9 = &PTR__initialize_classv_00114688;
   postinitialize_handler((Object*)pBVar9);
   Control::set_h_size_flags(pBVar9, 3);
   pLVar13 = (LineEdit*)operator_new(0xbb0, "");
   local_88[0] = 0;
   LineEdit::LineEdit(pLVar13, (String*)local_88);
   postinitialize_handler((Object*)pLVar13);
   *(LineEdit**)( this + 0xdc0 ) = pLVar13;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   plVar12 = *(long**)( this + 0xdc0 );
   pcVar4 = *(code**)( *plVar12 + 0x108 );
   create_custom_callable_function_pointer<ScriptCreateDialog,String_const&>((ScriptCreateDialog*)local_88, (char*)this, (_func_void_String_ptr*)"&ScriptCreateDialog::_parent_name_changed");
   ( *pcVar4 )(plVar12, SceneStringNames::singleton + 0x270, (Dictionary*)local_88, 0);
   Callable::~Callable((Callable*)local_88);
   Control::set_h_size_flags(*(undefined8*)( this + 0xdc0 ), 3);
   Node::add_child(pBVar9, *(undefined8*)( this + 0xdc0 ), 0, 0);
   AcceptDialog::register_text_enter((LineEdit*)this);
   pBVar14 = (Button*)operator_new(0xc10, "");
   local_88[0] = 0;
   Button::Button(pBVar14, (String*)local_88);
   postinitialize_handler((Object*)pBVar14);
   *(Button**)( this + 0xdd0 ) = pBVar14;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   plVar12 = *(long**)( this + 0xdd0 );
   pcVar4 = *(code**)( *plVar12 + 0x108 );
   create_custom_callable_function_pointer<ScriptCreateDialog>((ScriptCreateDialog*)local_88, (char*)this, (_func_void*)"&ScriptCreateDialog::_browse_class_in_tree");
   ( *pcVar4 )(plVar12, SceneStringNames::singleton + 0x238, (Dictionary*)local_88, 0);
   Callable::~Callable((Callable*)local_88);
   Node::add_child(pBVar9, *(undefined8*)( this + 0xdd0 ), 0, 0);
   pBVar14 = (Button*)operator_new(0xc10, "");
   local_88[0] = 0;
   Button::Button(pBVar14, (String*)local_88);
   postinitialize_handler((Object*)pBVar14);
   *(Button**)( this + 0xdc8 ) = pBVar14;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   plVar12 = *(long**)( this + 0xdc8 );
   pcVar4 = *(code**)( *plVar12 + 0x108 );
   create_custom_callable_function_pointer<ScriptCreateDialog,bool,bool>((ScriptCreateDialog*)local_88, (char*)this, (_func_void_bool_bool*)"&ScriptCreateDialog::_browse_path");
   bVar16 = SUB81((Dictionary*)local_88, 0);
   bVar17 = SUB81((String*)local_98, 0);
   Callable::bind<bool,bool>(bVar17, bVar16);
   ( *pcVar4 )(plVar12, SceneStringNames::singleton + 0x238, (String*)local_98, 0);
   Callable::~Callable((Callable*)local_98);
   Callable::~Callable((Callable*)local_88);
   Node::add_child(pBVar9, *(undefined8*)( this + 0xdc8 ), 0, 0);
   pLVar11 = (Label*)operator_new(0xad8, "");
   local_88[0] = 0;
   String::parse_latin1((String*)local_88, "");
   local_98[0] = 0;
   String::parse_latin1((String*)local_98, "Inherits:");
   TTR(local_a0, (String*)local_98);
   Label::Label(pLVar11, local_a0);
   postinitialize_handler((Object*)pLVar11);
   Node::add_child(this_00, pLVar11, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   Node::add_child(this_00, pBVar9, 0, 0);
   pLVar11 = (Label*)operator_new(0xad8, "");
   local_88[0] = 0;
   String::parse_latin1((String*)local_88, "");
   local_98[0] = 0;
   String::parse_latin1((String*)local_98, "Template:");
   TTR(local_a0, (String*)local_98);
   Label::Label(pLVar11, local_a0);
   postinitialize_handler((Object*)pLVar11);
   Node::add_child(this_00, pLVar11, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   pBVar9 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar9, false);
   pBVar9[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar9 = &PTR__initialize_classv_00114688;
   postinitialize_handler((Object*)pBVar9);
   Control::set_h_size_flags(pBVar9, 3);
   pCVar15 = (CheckBox*)operator_new(0xc60, "");
   local_88[0] = 0;
   CheckBox::CheckBox(pCVar15, (String*)local_88);
   postinitialize_handler((Object*)pCVar15);
   *(CheckBox**)( this + 0xe10 ) = pCVar15;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   BaseButton::set_pressed(SUB81(*(undefined8*)( this + 0xe10 ), 0));
   plVar12 = *(long**)( this + 0xe10 );
   pcVar4 = *(code**)( *plVar12 + 0x108 );
   create_custom_callable_function_pointer<ScriptCreateDialog>((ScriptCreateDialog*)local_88, (char*)this, (_func_void*)"&ScriptCreateDialog::_use_template_pressed");
   ( *pcVar4 )(plVar12, SceneStringNames::singleton + 0x238, (Dictionary*)local_88, 0);
   Callable::~Callable((Callable*)local_88);
   Node::add_child(pBVar9, *(undefined8*)( this + 0xe10 ), 0, 0);
   String::parse_latin1((String*)( this + 0xe40 ), "");
   pOVar10 = (OptionButton*)operator_new(0xd00, "");
   local_88[0] = 0;
   OptionButton::OptionButton(pOVar10, (String*)local_88);
   postinitialize_handler((Object*)pOVar10);
   *(OptionButton**)( this + 0xde0 ) = pOVar10;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   Control::set_h_size_flags(*(undefined8*)( this + 0xde0 ), 3);
   plVar12 = *(long**)( this + 0xde0 );
   pcVar4 = *(code**)( *plVar12 + 0x108 );
   create_custom_callable_function_pointer<ScriptCreateDialog,int>((ScriptCreateDialog*)local_88, (char*)this, (_func_void_int*)"&ScriptCreateDialog::_template_changed");
   ( *pcVar4 )(plVar12, SceneStringNames::singleton + 0x260, (Dictionary*)local_88, 0);
   Callable::~Callable((Callable*)local_88);
   Node::add_child(pBVar9, *(undefined8*)( this + 0xde0 ), 0, 0);
   Node::add_child(this_00, pBVar9, 0, 0);
   pCVar15 = (CheckBox*)operator_new(0xc60, "");
   local_88[0] = 0;
   CheckBox::CheckBox(pCVar15, (String*)local_88);
   postinitialize_handler((Object*)pCVar15);
   *(CheckBox**)( this + 0xe08 ) = pCVar15;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   pSVar5 = *(String**)( this + 0xe08 );
   local_88[0] = 0;
   String::parse_latin1((String*)local_88, "");
   local_98[0] = 0;
   String::parse_latin1((String*)local_98, "On");
   TTR(local_a0, (String*)local_98);
   Button::set_text(pSVar5);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   plVar12 = *(long**)( this + 0xe08 );
   pcVar4 = *(code**)( *plVar12 + 0x108 );
   create_custom_callable_function_pointer<ScriptCreateDialog>((ScriptCreateDialog*)local_88, (char*)this, (_func_void*)"&ScriptCreateDialog::_built_in_pressed");
   ( *pcVar4 )(plVar12, SceneStringNames::singleton + 0x238, (Dictionary*)local_88, 0);
   Callable::~Callable((Callable*)local_88);
   pLVar11 = (Label*)operator_new(0xad8, "");
   local_88[0] = 0;
   String::parse_latin1((String*)local_88, "");
   local_98[0] = 0;
   String::parse_latin1((String*)local_98, "Built-in Script:");
   TTR(local_a0, (String*)local_98);
   Label::Label(pLVar11, local_a0);
   postinitialize_handler((Object*)pLVar11);
   Node::add_child(this_00, pLVar11, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   Node::add_child(this_00, *(undefined8*)( this + 0xe08 ), 0, 0);
   pBVar9 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar9, false);
   pBVar9[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar9 = &PTR__initialize_classv_00114688;
   postinitialize_handler((Object*)pBVar9);
   pcVar4 = *(code**)( *(long*)pBVar9 + 0x108 );
   create_custom_callable_function_pointer<ScriptCreateDialog>((ScriptCreateDialog*)local_88, (char*)this, (_func_void*)"&ScriptCreateDialog::_path_hbox_sorted");
   ( *pcVar4 )(pBVar9, SceneStringNames::singleton + 0xf0, (Dictionary*)local_88, 0);
   Callable::~Callable((Callable*)local_88);
   pLVar13 = (LineEdit*)operator_new(0xbb0, "");
   local_88[0] = 0;
   LineEdit::LineEdit(pLVar13, (String*)local_88);
   postinitialize_handler((Object*)pLVar13);
   *(LineEdit**)( this + 0xde8 ) = pLVar13;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   plVar12 = *(long**)( this + 0xde8 );
   pcVar4 = *(code**)( *plVar12 + 0x108 );
   create_custom_callable_function_pointer<ScriptCreateDialog,String_const&>((ScriptCreateDialog*)local_88, (char*)this, (_func_void_String_ptr*)"&ScriptCreateDialog::_path_changed");
   ( *pcVar4 )(plVar12, SceneStringNames::singleton + 0x270, (Dictionary*)local_88);
   Callable::~Callable((Callable*)local_88);
   Control::set_h_size_flags(*(undefined8*)( this + 0xde8 ), 3);
   Node::add_child(pBVar9, *(undefined8*)( this + 0xde8 ), 0, 0);
   AcceptDialog::register_text_enter((LineEdit*)this);
   pBVar14 = (Button*)operator_new(0xc10, "");
   local_88[0] = 0;
   Button::Button(pBVar14, (String*)local_88);
   postinitialize_handler((Object*)pBVar14);
   *(Button**)( this + 0xdf8 ) = pBVar14;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   plVar12 = *(long**)( this + 0xdf8 );
   pcVar4 = *(code**)( *plVar12 + 0x108 );
   create_custom_callable_function_pointer<ScriptCreateDialog,bool,bool>((ScriptCreateDialog*)local_88, (char*)this, (_func_void_bool_bool*)"&ScriptCreateDialog::_browse_path");
   Callable::bind<bool,bool>(bVar17, bVar16);
   ( *pcVar4 )(plVar12, SceneStringNames::singleton + 0x238, (String*)local_98);
   Callable::~Callable((Callable*)local_98);
   Callable::~Callable((Callable*)local_88);
   Node::add_child(pBVar9, *(undefined8*)( this + 0xdf8 ), 0, 0);
   pLVar11 = (Label*)operator_new(0xad8, "");
   local_88[0] = 0;
   String::parse_latin1((String*)local_88, "");
   local_98[0] = 0;
   String::parse_latin1((String*)local_98, "Path:");
   TTR(local_a0, (String*)local_98);
   Label::Label(pLVar11, local_a0);
   postinitialize_handler((Object*)pLVar11);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   Node::add_child(this_00, pLVar11, 0, 0);
   Node::add_child(this_00, pBVar9, 0, 0);
   *(Label**)( this + 0xe60 ) = pLVar11;
   *(BoxContainer**)( this + 0xe68 ) = pBVar9;
   pLVar13 = (LineEdit*)operator_new(0xbb0, "");
   local_88[0] = 0;
   LineEdit::LineEdit(pLVar13, (String*)local_88);
   postinitialize_handler((Object*)pLVar13);
   *(LineEdit**)( this + 0xdf0 ) = pLVar13;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   Control::set_h_size_flags(*(undefined8*)( this + 0xdf0 ), 3);
   AcceptDialog::register_text_enter((LineEdit*)this);
   pLVar11 = (Label*)operator_new(0xad8, "");
   local_88[0] = 0;
   String::parse_latin1((String*)local_88, "");
   local_98[0] = 0;
   String::parse_latin1((String*)local_98, "Name:");
   TTR(local_a0, (String*)local_98);
   Label::Label(pLVar11, local_a0);
   postinitialize_handler((Object*)pLVar11);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   Node::add_child(this_00, pLVar11, 0, 0);
   Node::add_child(this_00, *(undefined8*)( this + 0xdf0 ), 0, 0);
   *(Label**)( this + 0xe70 ) = pLVar11;
   *(undefined8*)( this + 0xe78 ) = *(undefined8*)( this + 0xdf0 );
   CanvasItem::hide();
   CanvasItem::hide();
   this_03 = (CreateDialog*)operator_new(0xf00, "");
   CreateDialog::CreateDialog(this_03);
   postinitialize_handler((Object*)this_03);
   lVar6 = *(long*)this_03;
   *(CreateDialog**)( this + 0xe28 ) = this_03;
   pcVar4 = *(code**)( lVar6 + 0x108 );
   create_custom_callable_function_pointer<ScriptCreateDialog>((ScriptCreateDialog*)local_88, (char*)this, (_func_void*)"&ScriptCreateDialog::_create");
   StringName::StringName((StringName*)local_98, "create", false);
   ( *pcVar4 )(this_03, (String*)local_98, (Dictionary*)local_88, 0);
   if (( StringName::configured != '\0' ) && ( local_98[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)local_88);
   Node::add_child(this, *(undefined8*)( this + 0xe28 ), 0, 0);
   this_04 = (EditorFileDialog*)operator_new(0x1108, "");
   EditorFileDialog::EditorFileDialog(this_04);
   postinitialize_handler((Object*)this_04);
   lVar6 = *(long*)this_04;
   *(EditorFileDialog**)( this + 0xe00 ) = this_04;
   pcVar4 = *(code**)( lVar6 + 0x108 );
   create_custom_callable_function_pointer<ScriptCreateDialog,String_const&>((ScriptCreateDialog*)local_88, (char*)this, (_func_void_String_ptr*)"&ScriptCreateDialog::_file_selected");
   StringName::StringName((StringName*)local_98, "file_selected", false);
   ( *pcVar4 )(this_04, (String*)local_98, (Dictionary*)local_88, 0);
   if (( StringName::configured != '\0' ) && ( local_98[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)local_88);
   EditorFileDialog::set_file_mode(*(undefined8*)( this + 0xe00 ), 0);
   Node::add_child(this, *(undefined8*)( this + 0xe00 ), 0, 0);
   local_88[0] = 0;
   String::parse_latin1((String*)local_88, "");
   local_98[0] = 0;
   String::parse_latin1((String*)local_98, "Create");
   TTR(local_a0, (String*)local_98);
   AcceptDialog::set_ok_button_text(this, local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   this_05 = (AcceptDialog*)operator_new(0xdb0, "");
   AcceptDialog::AcceptDialog(this_05);
   postinitialize_handler((Object*)this_05);
   *(AcceptDialog**)( this + 0xe20 ) = this_05;
   Label::set_autowrap_mode(*(undefined8*)( this_05 + 0xd78 ), 3);
   Label::set_horizontal_alignment(*(undefined8*)( *(long*)( this + 0xe20 ) + 0xd78 ), 1);
   Label::set_vertical_alignment(*(undefined8*)( *(long*)( this + 0xe20 ) + 0xd78 ), 1);
   pVVar3 = *(Vector2**)( *(long*)( this + 0xe20 ) + 0xd78 );
   fVar19 = (float)EditorScale::get_scale();
   local_58[0] = CONCAT44(fVar19 * _LC57._4_4_, fVar19 * (float)_LC57);
   Control::set_custom_minimum_size(pVVar3);
   Node::add_child(this, *(undefined8*)( this + 0xe20 ), 0, 0);
   AcceptDialog::set_hide_on_ok(SUB81(this, 0));
   local_88[0] = 0;
   String::parse_latin1((String*)local_88, "");
   local_98[0] = 0;
   String::parse_latin1((String*)local_98, "Attach Node Script");
   TTR(local_a0, (String*)local_98);
   Window::set_title((String*)this);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ScriptCreateDialog::_notification(int) */void ScriptCreateDialog::_notification(ScriptCreateDialog *this, int param_1) {
   Object *pOVar1;
   char cVar2;
   ScriptCreateDialog SVar3;
   int iVar4;
   int iVar5;
   long *plVar6;
   String *pSVar7;
   Ref *pRVar8;
   Object *pOVar9;
   long in_FS_OFFSET;
   long local_90;
   Object *local_88;
   Object *local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 10) {
      pSVar7 = (String*)EditorSettings::get_singleton();
      Variant::Variant((Variant*)local_78, "");
      local_80 = (Object*)0x0;
      String::parse_latin1((String*)&local_80, "last_selected_language");
      local_88 = (Object*)0x0;
      String::parse_latin1((String*)&local_88, "script_setup");
      EditorSettings::get_project_metadata((String*)local_58, pSVar7, (Variant*)&local_88);
      Variant::operator_cast_to_String((Variant*)&local_90);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (( local_90 == 0 ) || ( *(uint*)( local_90 + -8 ) < 2 )) {
         OptionButton::select((int)*(undefined8*)( this + 0xdd8 ));
      }
 else {
         for (iVar5 = 0; iVar4 = OptionButton::get_item_count(),iVar5 < iVar4; iVar5 = iVar5 + 1) {
            OptionButton::get_item_text((int)(String*)&local_80);
            cVar2 = String::operator ==((String*)&local_80, (String*)&local_90);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            if (cVar2 != '\0') {
               OptionButton::select((int)*(undefined8*)( this + 0xdd8 ));
               break;
            }

         }

      }

      Variant::Variant((Variant*)local_78, false);
      local_80 = (Object*)0x0;
      String::parse_latin1((String*)&local_80, "_script_setup_use_script_templates");
      _EDITOR_DEF((String*)local_58, (Variant*)&local_80, SUB81((Variant*)local_78, 0), false);
      SVar3 = (ScriptCreateDialog)Variant::operator_cast_to_bool((Variant*)local_58);
      this[0xe4f] = SVar3;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      BaseButton::set_pressed(SUB81(*(undefined8*)( this + 0xe10 ), 0));
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   }
 else if (param_1 == 0x20) {
      if ((_notification(int)::{lambda()
      #1
      (iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()
      #1
      iVar5 != 0))
      {
         _scs_create((char *)&_notification(int)::{lambda()
         #1
         __cxa_atexit(StringName::~StringName, &_notification(int)::{lambda()#1}::operator()()::sname,&__dso_handle);__cxa_guard_release(&_notification(int)::{lambda()#1}, ::operator()(), ::sname);}((StringName*)this, (StringName*)&_notification(int)::{lambda()#1}, ::operator()(), ::sname)(0 < (int)ScriptServer::_language_count) = (Ref*)0x0(int)pRVar8;
        plVar6 = (long *)ScriptServer::get_language(iVar5);
        (**(code **)(*plVar6 + 0x160))((CowData<char32_t> *)&local_90,plVar6);
        StringName::StringName((StringName *)&local_80,(String *)&local_90,false);
        Window::get_editor_theme_icon((StringName *)&local_88);
        if ((StringName::configured != '\0') && (local_80 != (Object *)0x0)) {
          StringName::unref();
        }
        if (local_88 == (Object *)0x0), {
                     LAB_001020bb:EditorData::extension_class_get_icon((String*)&local_80);
                     if (local_80 != (Object*)0x0) {
                        iVar4 = OptionButton::get_popup();
                        PopupMenu::set_item_icon_max_width(iVar4, iVar5);
                        pOVar1 = local_88;
                        pOVar9 = local_88;
                        if (local_80 != local_88) {
                           local_88 = local_80;
                           if (local_80 == (Object*)0x0) {
                              if (pOVar1 == (Object*)0x0) goto LAB_0010201d;
                           }
 else {
                              cVar2 = RefCounted::reference();
                              if (cVar2 == '\0') {
                                 local_88 = (Object*)0x0;
                              }

                              pOVar9 = local_80;
                              if (pOVar1 == (Object*)0x0) goto LAB_0010212f;
                           }

                           cVar2 = RefCounted::unreference();
                           pOVar9 = local_80;
                           if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar1) ),pOVar9 = local_80,cVar2 != '\0') {
                              ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                              Memory::free_static(pOVar1, false);
                              pOVar9 = local_80;
                           }

                        }

                        LAB_0010212f:if (( ( pOVar9 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar1 = local_80,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
                        Memory::free_static(pOVar1, false);
                     }

                  }
, }
        else {
          ThemeDB::get_singleton(), ;
          ThemeDB::get_fallback_icon());
         if (local_88 == local_80) {
            if (( ( local_88 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar1 = local_80,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
            Memory::free_static(pOVar1, false);
         }

         goto LAB_001020bb;
      }

      if (( ( local_80 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar1 = local_80,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))();
      Memory::free_static(pOVar1, false);
   }

}
LAB_0010201d:if (( ( local_88 != (Object*)0x0 ) && ( OptionButton::set_item_icon((int)*(undefined8*)( this + 0xdd8 ), pRVar8),local_88 != (Object*)0x0 ) ) && ( ( cVar2 = RefCounted::unreference() ),pOVar1 = local_88,cVar2 != '\0' && ( cVar2 = predelete_handler(local_88) ),cVar2 != '\0' )) {
   ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
   Memory::free_static(pOVar1, false);
}
pRVar8 = (Ref*)( ulong )(iVar5 + 1U);CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);}while ((int)( iVar5 + 1U ) < (int)ScriptServer::_language_count) ;;;}pRVar8 = *(Ref**)( this + 0xdf8 );if ((_notification(int)::{lambda()#2(iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#2iVar5 != 0)){
   _scs_create((char *)&_notification(int)::{lambda()
   #2
   __cxa_atexit(StringName::~StringName, &_notification(int)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
    }
    Window::get_editor_theme_icon((StringName *)&local_80);, Button::set_button_icon(pRVar8)(( ( local_80 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar1 = local_80,cVar2 != '\0' )) && ( cVar2 = predelete_handler(local_80) ), cVar2 != '\0'))(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
   Memory::free_static(pOVar1, false);
}
pRVar8 = *(Ref**)( this + 0xdc8 );if ((_notification(int)::{lambda()#3(iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#3iVar5 != 0)){
   _scs_create((char *)&_notification(int)::{lambda()
   #3
   __cxa_atexit(StringName::~StringName, &_notification(int)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
    }
    Window::get_editor_theme_icon((StringName *)&local_80);, Button::set_button_icon(pRVar8)(( ( local_80 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar1 = local_80,cVar2 != '\0' )) && ( cVar2 = predelete_handler(local_80) ), cVar2 != '\0'))(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
   Memory::free_static(pOVar1, false);
}
pRVar8 = *(Ref**)( this + 0xdd0 );if ((_notification(int)::{lambda()#4(iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#4iVar5 != 0)){
   _scs_create((char *)&_notification(int)::{lambda()
   #4
   __cxa_atexit(StringName::~StringName, &_notification(int)::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
    }
    Window::get_editor_theme_icon((StringName *)&local_80);, Button::set_button_icon(pRVar8)(( ( local_80 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar1 = local_80,cVar2 != '\0' )) && ( cVar2 = predelete_handler(local_80) ), cVar2 != '\0'));
   {
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
   }

}
if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* ScriptCreateDialog::_load_exist() */void ScriptCreateDialog::_load_exist(ScriptCreateDialog *this) {
   undefined8 uVar1;
   char cVar2;
   int iVar3;
   Object *pOVar4;
   long in_FS_OFFSET;
   CowData<char32_t> local_c8[8];
   Object *local_c0;
   undefined8 local_b8;
   undefined8 local_b0;
   String local_a8[8];
   undefined8 local_a0;
   char *local_98;
   undefined8 local_90;
   Variant *local_88[2];
   undefined8 local_78[3];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   LineEdit::get_text();
   local_98 = "Script";
   local_a0 = 0;
   local_90 = 6;
   String::parse_latin1((StrRange*)&local_a0);
   ResourceLoader::load(&local_c0, local_c8, (StrRange*)&local_a0, 1, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   pOVar4 = local_c0;
   if (local_c0 == (Object*)0x0) {
      local_a0 = 0;
      uVar1 = *(undefined8*)( this + 0xe20 );
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)local_c8);
      local_b0 = 0;
      String::parse_latin1((String*)&local_b0, "");
      local_b8 = 0;
      String::parse_latin1((String*)&local_b8, "Error loading script from %s");
      TTR(local_a8, (String*)&local_b8);
      vformat<String>((CowData<char32_t>*)&local_98, local_a8, (StrRange*)&local_a0);
      AcceptDialog::set_text(uVar1, (CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      local_78[0] = 0;
      Window::popup_centered(*(Vector2i**)( this + 0xe20 ));
   }
 else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         pOVar4 = (Object*)0x0;
      }

      if ((_load_exist()::{lambda()
      #1
      ( iVar3 = __cxa_guard_acquire(&_load_exist()::, {
            lambda()
            #1
            {
               _scs_create((char *)&_load_exist()::{lambda()
               #1
               __cxa_atexit(StringName::~StringName, &_load_exist()::, {
                     lambda()
                     #1
                     &__dso_handle;
                     __cxa_guard_release(&_load_exist()::{lambda()#1}::operator()()::sname);
    }, Variant::Variant((Variant*)local_78, pOVar4));
                     local_60 = 0;
                     local_58 = (undefined1[16])0x0;
                     local_88[0] = (Variant*)local_78;
                     ( **(code**)( *(long*)this + 0xd0 ) )(this, &_load_exist()::, {
                           lambda()
                           #1
                           if (Variant::needs_deinit[(int)local_60] != '\0') {
                              Variant::_clear_internal();
                           }

                           if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           if (( ( pOVar4 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
                           Memory::free_static(pOVar4, false);
                        }
, Window::hide();
                  }
, if (((local_c0 != (Object *) && ( cVar2 = cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)local_c0 + 0x140 ))(local_c0);
               Memory::free_static(local_c0, false);
            }

            CowData<char32_t>::_unref(local_c8);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }
, /* ScriptCreateDialog::_browse_path(bool, bool) */, void __thiscall ScriptCreateDialog::_browse_path(ScriptCreateDialog *this,bool param_1,bool param_2) * pSVar1 );
      undefined8 uVar2;
      long lVar3;
      long lVar4;
      char *pcVar5;
      int iVar6;
      long *plVar7;
      long in_FS_OFFSET;
      long *local_68;
      long local_60;
      char *local_58;
      undefined8 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      this[0xe30] = (ScriptCreateDialog)param_1;
      if (param_2) {
         EditorFileDialog::set_file_mode(*(undefined8*)( this + 0xe00 ), 4);
         pSVar1 = *(String**)( this + 0xe00 );
         local_60 = 0;
         local_58 = "";
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_60);
         local_68 = (long*)0x0;
         local_58 = "Open Script / Choose Location";
         local_50 = 0x1d;
         String::parse_latin1((StrRange*)&local_68);
         TTR((String*)&local_58, (String*)&local_68);
         Window::set_title(pSVar1);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         local_58 = "";
         local_60 = 0;
         uVar2 = *(undefined8*)( this + 0xe00 );
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_60);
         local_58 = "Open";
         local_68 = (long*)0x0;
         local_50 = 4;
         String::parse_latin1((StrRange*)&local_68);
         TTR((String*)&local_58, (String*)&local_68);
         AcceptDialog::set_ok_button_text(uVar2, (String*)&local_58);
      }
 else {
         EditorFileDialog::set_file_mode(*(undefined8*)( this + 0xe00 ), 0);
         pSVar1 = *(String**)( this + 0xe00 );
         local_60 = 0;
         local_58 = "";
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_60);
         local_68 = (long*)0x0;
         local_58 = "Open Script";
         local_50 = 0xb;
         String::parse_latin1((StrRange*)&local_68);
         TTR((String*)&local_58, (String*)&local_68);
         Window::set_title(pSVar1);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      EditorFileDialog::set_disable_overwrite_warning(SUB81(*(undefined8*)( this + 0xe00 ), 0));
      EditorFileDialog::clear_filters();
      local_68 = (long*)0x0;
      iVar6 = OptionButton::get_selected();
      plVar7 = (long*)ScriptServer::get_language(iVar6);
      ( **(code**)( *plVar7 + 0x2d0 ) )(plVar7, (CowData<char32_t>*)&local_68);
      if (local_68 != (long*)0x0) {
         for (lVar3 = *local_68; lVar3 != 0; lVar3 = *(long*)( lVar3 + 8 )) {
            pSVar1 = *(String**)( this + 0xe00 );
            local_60 = 0;
            local_58 = "";
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_60);
            operator+((char *)&
            local_58,(String*)&_LC76;
            EditorFileDialog::add_filter(pSVar1, (String*)&local_58);
            pcVar5 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar7 = (long*)( local_58 + -0x10 );
               *plVar7 = *plVar7 + -1;
               UNLOCK();
               if (*plVar7 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar5 + -0x10, false);
               }

            }

            lVar4 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar7 = (long*)( local_60 + -0x10 );
               *plVar7 = *plVar7 + -1;
               UNLOCK();
               if (*plVar7 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

         }

      }

      pSVar1 = *(String**)( this + 0xe00 );
      LineEdit::get_text();
      EditorFileDialog::set_current_path(pSVar1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      EditorFileDialog::popup_file_dialog();
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_68);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* ScriptCreateDialog::_adjust_file_path(String const&) const */
   String *ScriptCreateDialog::_adjust_file_path(String *param_1) {
      code *pcVar1;
      undefined4 uVar2;
      CowData *in_RDX;
      long in_RSI;
      long in_FS_OFFSET;
      CowData<char32_t> local_80[8];
      undefined *local_78;
      CowData<char32_t> local_70[8];
      undefined8 local_68;
      String local_60[8];
      undefined *local_58;
      undefined8 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( *(long*)in_RDX == 0 ) || ( *(uint*)( *(long*)in_RDX + -8 ) < 2 )) {
         *(undefined8*)param_1 = 0;
         if (*(long*)in_RDX != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)param_1, in_RDX);
         }

      }
 else {
         String::get_base_dir();
         String::get_file();
         String::get_basename();
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         uVar2 = 2;
         pcVar1 = *(code**)( **(long**)( in_RSI + 0xe90 ) + 0x218 );
         if (pcVar1 != ScriptLanguage::preferred_file_name_casing) {
            uVar2 = ( *pcVar1 )(*(long**)( in_RSI + 0xe90 ), ScriptLanguage::preferred_file_name_casing, 2);
         }

         EditorNode::adjust_script_name_casing((CowData<char32_t>*)&local_58, (CowData<char32_t>*)&local_78, uVar2);
         if (local_78 != local_58) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            local_78 = local_58;
            local_58 = (undefined*)0x0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         ( **(code**)( **(long**)( in_RSI + 0xe90 ) + 0x168 ) )(local_70);
         local_58 = &_LC18;
         local_68 = 0;
         local_50 = 1;
         String::parse_latin1((StrRange*)&local_68);
         String::operator +(local_60, (String*)&local_78);
         String::operator +((String*)&local_58, local_60);
         String::path_join(param_1);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref(local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref(local_80);
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* ScriptCreateDialog::_parse_template(ScriptLanguage const*, String const&, String const&,
   ScriptLanguage::TemplateLocation const&, String const&) const */
   ScriptLanguage *ScriptCreateDialog::_parse_template(ScriptLanguage *param_1, String *param_2, String *param_3, TemplateLocation *param_4, String *param_5) {
      CowData<char32_t> *this;
      undefined4 uVar1;
      CowData *pCVar2;
      long lVar3;
      code *pcVar4;
      char cVar5;
      int iVar6;
      int iVar7;
      char *pcVar8;
      int iVar9;
      undefined8 uVar10;
      bool bVar11;
      bool bVar12;
      undefined4 *in_R9;
      long lVar13;
      long in_FS_OFFSET;
      CowData *in_stack_00000008;
      int local_e4;
      int local_9c;
      long local_98;
      undefined8 *local_90;
      String local_88[8];
      Object *local_80;
      char *local_78;
      long local_70;
      undefined8 local_68;
      undefined8 local_60;
      char *local_58;
      undefined8 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined8*)( param_1 + 0x20 ) = 0;
      *(undefined1(*) [16])param_1 = (undefined1[16])0x0;
      *(undefined1(*) [16])( param_1 + 0x10 ) = (undefined1[16])0x0;
      local_58 = "Object";
      local_50 = 6;
      String::parse_latin1((StrRange*)param_1);
      this(CowData<char32_t> * )(param_1 + 8);
      *(undefined8*)( param_1 + 0x20 ) = 0;
      uVar1 = *in_R9;
      *(undefined8*)( param_1 + 0x18 ) = 0;
      *(undefined4*)( param_1 + 0x24 ) = uVar1;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (*(long*)param_1 != *(long*)in_stack_00000008) {
         CowData<char32_t>::_ref((CowData<char32_t>*)param_1, in_stack_00000008);
      }

      local_98 = 0;
      local_90 = (undefined8*)0x0;
      ( **(code**)( *(long*)param_3 + 0x188 ) )(param_3, (List<String,DefaultAllocator>*)&local_90);
      if (local_90 != (undefined8*)0x0) {
         for (pCVar2 = (CowData*)*local_90; pCVar2 != (CowData*)0x0; pCVar2 = *(CowData**)( pCVar2 + 8 )) {
            iVar6 = String::find_char((wchar32)pCVar2, 0x20);
            if (iVar6 == -1) {
               if (local_98 != *(long*)pCVar2) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_98, pCVar2);
               }

               break;
            }

         }

      }

      local_60 = 0;
      local_58 = " meta-";
      local_50 = 6;
      String::parse_latin1((StrRange*)&local_60);
      String::operator +(local_88, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      String::path_join((String*)&local_58);
      iVar6 = (int)(String*)&local_58;
      FileAccess::open((String*)&local_80, iVar6, (Error*)0x1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (local_9c == 0) {
         local_e4 = 4;
         while (cVar5 = ( **(code**)( *(long*)local_80 + 0x1d8 ) )(),cVar5 == '\0') {
            ( **(code**)( *(long*)local_80 + 0x228 ) )((CowData<char32_t>*)&local_78);
            cVar5 = String::begins_with((String*)&local_78);
            iVar7 = (int)(CowData<char32_t>*)&local_78;
            if (cVar5 == '\0') {
               if (local_78 != (char*)0x0) {
                  lVar13 = 0;
                  iVar9 = 0;
                  pcVar8 = local_78;
                  do {
                     lVar3 = *(long*)( pcVar8 + -8 );
                     if (( ( (int)lVar3 == 0 ) || ( (int)lVar3 + -1 <= (int)lVar13 ) ) || ( lVar13 == lVar3 )) break;
                     if (lVar3 <= lVar13) {
                        _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar13, lVar3, "p_index", "size()", "", false, true);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar4 = (code*)invalidInstructionException();
                        ( *pcVar4 )();
                     }

                     if (*(int*)( pcVar8 + lVar13 * 4 ) == 9) {
                        if (iVar9 != 0) {
                           local_60 = 0;
                           String::parse_latin1((String*)&local_60, " ");
                           String::repeat(iVar6);
                           String::operator +=((String*)( param_1 + 0x18 ), (String*)&local_58);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                        }

                        LAB_00103a44:String::operator +=((String*)( param_1 + 0x18 ), "_TS_");
                        iVar9 = 0;
                        pcVar8 = local_78;
                     }
 else {
                        if (*(int*)( pcVar8 + lVar13 * 4 ) != 0x20) break;
                        iVar9 = iVar9 + 1;
                        if (local_e4 == iVar9) goto LAB_00103a44;
                     }

                     lVar13 = lVar13 + 1;
                  }
 while ( pcVar8 != (char*)0x0 );
                  if (iVar9 != 0) {
                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, " ");
                     String::repeat(iVar6);
                     String::operator +=((String*)( param_1 + 0x18 ), (String*)&local_58);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  }

               }

               local_60 = 0;
               String::parse_latin1((String*)&local_60, "\n");
               String::substr((int)(CowData<char32_t>*)&local_68, iVar7);
               String::operator +((String*)&local_58, (String*)&local_68);
               String::operator +=((String*)( param_1 + 0x18 ), (String*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            }
 else {
               String::substr(iVar6, iVar7);
               if (local_78 != local_58) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                  local_78 = local_58;
                  local_58 = (char*)0x0;
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               cVar5 = String::begins_with((char*)&local_78);
               bVar12 = SUB81((String*)&local_58, 0);
               bVar11 = SUB81((StrRange*)&local_60, 0);
               iVar9 = (int)(StrRange*)&local_60;
               if (cVar5 == '\0') {
                  cVar5 = String::begins_with((char*)&local_78);
                  if (cVar5 == '\0') {
                     cVar5 = String::begins_with((char*)&local_78);
                     if (cVar5 == '\0') goto LAB_00103782;
                     String::substr(iVar6, iVar7);
                     String::strip_edges(SUB81((CowData<char32_t>*)&local_70, 0), bVar12);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                     cVar5 = String::is_valid_int();
                     if (cVar5 == '\0') {
                        local_60 = 0;
                        if (local_70 != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)&local_70);
                        }

                        local_68 = 0;
                        String::parse_latin1((String*)&local_68, "Template meta-space-indent need to be a valid integer value. Found %s.");
                        vformat<String>((String*)&local_58, (String*)&local_68, (StrRange*)&local_60);
                        uVar10 = 0x307;
                        LAB_00103b2d:_err_print_error("_parse_template", "editor/script_create_dialog.cpp", uVar10, (String*)&local_58, 0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                        iVar7 = local_e4;
                     }
 else {
                        iVar7 = String::to_int();
                        if (iVar7 < 0) {
                           local_60 = 0;
                           if (local_70 != 0) {
                              CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)&local_70);
                           }

                           local_68 = 0;
                           String::parse_latin1((String*)&local_68, "Template meta-space-indent need to be a non-negative integer value. Found %s.");
                           vformat<String>((String*)&local_58, (String*)&local_68, (StrRange*)&local_60);
                           uVar10 = 0x304;
                           goto LAB_00103b2d;
                        }

                     }

                     local_e4 = iVar7;
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     goto LAB_00103782;
                  }

                  String::substr(iVar9, iVar7);
                  String::strip_edges(bVar12, bVar11);
                  if (*(char**)( param_1 + 0x10 ) != local_58) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x10 ));
                     pcVar8 = local_58;
                     local_58 = (char*)0x0;
                     *(char**)( param_1 + 0x10 ) = pcVar8;
                  }

               }
 else {
                  String::substr(iVar9, iVar7);
                  String::strip_edges(bVar12, bVar11);
                  if (*(char**)( param_1 + 8 ) != local_58) {
                     CowData<char32_t>::_unref(this);
                     pcVar8 = local_58;
                     local_58 = (char*)0x0;
                     *(char**)( param_1 + 8 ) = pcVar8;
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            }

            LAB_00103782:CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         }
;
      }

      local_58 = "\n";
      local_60 = 0;
      local_50 = 1;
      String::parse_latin1((StrRange*)&local_60);
      String::lstrip((String*)&local_58);
      if (*(undefined**)( param_1 + 0x18 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x18 ));
         pcVar8 = local_58;
         local_58 = (undefined*)0x0;
         *(char**)( param_1 + 0x18 ) = pcVar8;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      local_58 = (char*)0x0;
      cVar5 = String::operator ==((String*)this, (String*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (cVar5 != '\0') {
         String::get_basename();
         String::capitalize();
         if ((char*)*(long*)( param_1 + 8 ) != local_58) {
            CowData<char32_t>::_unref(this);
            pcVar8 = local_58;
            local_58 = (char*)0x0;
            *(char**)( param_1 + 8 ) = pcVar8;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      }

      if (( ( local_80 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)local_80 + 0x140 ))(local_80);
      Memory::free_static(local_80, false);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* ScriptCreateDialog::_create_new() */void ScriptCreateDialog::_create_new(ScriptCreateDialog *this) {
   undefined8 uVar1;
   char cVar2;
   int iVar3;
   long *plVar4;
   Object *pOVar5;
   long lVar6;
   Object *pOVar7;
   long in_FS_OFFSET;
   Object *local_f0;
   CowData<char32_t> local_e8[8];
   String local_e0[8];
   undefined8 local_d8;
   long local_d0;
   Object *local_c8;
   undefined8 local_c0;
   CowData<char32_t> local_b8[8];
   CowData<char32_t> local_b0[8];
   CowData<char32_t> local_a8[8];
   CowData<char32_t> local_a0[24];
   Variant *local_88[2];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _get_current_template();
   LineEdit::get_text();
   LineEdit::get_text();
   cVar2 = String::is_quoted();
   if (cVar2 == '\0') {
      StringName::StringName((StringName*)&local_d0, (String*)&local_f0, false);
      cVar2 = ClassDB::class_exists((StringName*)&local_d0);
      if (cVar2 != '\0') {
         if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
         goto LAB_00103eed;
      }

      StringName::StringName((StringName*)&local_c8, (String*)&local_f0, false);
      cVar2 = ScriptServer::is_global_class((StringName*)&local_c8);
      if (cVar2 != '\0') {
         cVar2 = '\0';
         if (StringName::configured != '\0') goto LAB_001044b3;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
         goto LAB_00103eed;
      }

      cVar2 = StringName::configured;
      if (StringName::configured == '\0') {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      }
 else {
         LAB_001044b3:if (local_c8 != (Object*)0x0) {
            StringName::unref();
         }

         if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
         if (cVar2 == '\0') goto LAB_00103eed;
      }

      lVar6 = EditorData::get_custom_type_by_name((String*)( EditorNode::singleton + 0x430 ));
      if (lVar6 != 0) {
         local_d0 = 0;
         local_c8 = (Object*)&_LC112;
         local_c0 = 1;
         String::parse_latin1((StrRange*)&local_d0);
         Resource::get_path();
         operator+((char *)&
         local_d8,(String*)&_LC112;
         String::operator +((String*)&local_c8, (String*)&local_d8);
         if (local_f0 != local_c8) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
            local_f0 = local_c8;
            local_c8 = (Object*)0x0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_e0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
         goto LAB_00103eed;
      }

      _err_print_error("_create_new", "editor/script_create_dialog.cpp", 0x165, "Parameter \"type\" is null.", 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
      CowData<char32_t>::_unref(local_a0);
      CowData<char32_t>::_unref(local_a8);
      CowData<char32_t>::_unref(local_b0);
      CowData<char32_t>::_unref(local_b8);
   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      LAB_00103eed:LineEdit::get_text();
      String::get_file();
      String::get_basename();
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
      iVar3 = OptionButton::get_selected();
      plVar4 = (long*)ScriptServer::get_language(iVar3);
      if (*(code**)( *plVar4 + 0x1a0 ) == ScriptLanguage::make_template) {
         LAB_00103f69:pOVar7 = (Object*)0x0;
         LAB_00103f6c:if (this[0xe4e] != (ScriptCreateDialog)0x0) goto LAB_00103f79;
         LAB_00104178:ProjectSettings::get_singleton();
         LineEdit::get_text();
         ProjectSettings::localize_path(local_e0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         ( **(code**)( *(long*)pOVar7 + 0x188 ) )(pOVar7, local_e0, 0);
         local_c8 = (Object*)0x0;
         pOVar5 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &Resource::typeinfo, 0);
         if (pOVar5 != (Object*)0x0) {
            local_c8 = pOVar5;
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
               local_c8 = (Object*)0x0;
            }

         }

         iVar3 = ResourceSaver::save((Ref*)&local_c8, local_e0, 4);
         if (local_c8 != (Object*)0x0) {
            cVar2 = RefCounted::unreference();
            pOVar5 = local_c8;
            if (cVar2 != '\0') {
               cVar2 = predelete_handler(local_c8);
               if (cVar2 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )();
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (iVar3 == 0) {
            CowData<char32_t>::_unref((CowData<char32_t>*)local_e0);
            goto LAB_00103faa;
         }

         uVar1 = *(undefined8*)( this + 0xe20 );
         local_d0 = 0;
         String::parse_latin1((String*)&local_d0, "");
         local_d8 = 0;
         String::parse_latin1((String*)&local_d8, "Error - Could not create script in filesystem.");
         TTR((String*)&local_c8, (String*)&local_d8);
         AcceptDialog::set_text(uVar1, (CowData<char32_t>*)&local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
         local_78[0] = 0;
         local_78[1] = 0;
         Window::popup_centered(*(Vector2i**)( this + 0xe20 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)local_e0);
      }
 else {
         ( **(code**)( *plVar4 + 0x1a0 ) )((CowData<char32_t>*)&local_c8, plVar4, local_a0, local_e8, (CowData<char32_t>*)&local_f0);
         pOVar7 = local_c8;
         if (local_c8 == (Object*)0x0) goto LAB_00103f69;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            pOVar7 = (Object*)0x0;
         }

         if (local_c8 == (Object*)0x0) goto LAB_00103f6c;
         cVar2 = RefCounted::unreference();
         pOVar5 = local_c8;
         if (cVar2 == '\0') goto LAB_00103f6c;
         cVar2 = predelete_handler(local_c8);
         if (cVar2 == '\0') goto LAB_00103f6c;
         ( **(code**)( *(long*)pOVar5 + 0x140 ) )();
         Memory::free_static(pOVar5, false);
         if (this[0xe4e] == (ScriptCreateDialog)0x0) goto LAB_00104178;
         LAB_00103f79:LineEdit::get_text();
         Resource::set_name((String*)pOVar7);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         ( **(code**)( *(long*)pOVar7 + 0x228 ) )(pOVar7, 0);
         LAB_00103faa:cVar2 = RefCounted::reference();
         pOVar5 = (Object*)0x0;
         if (cVar2 != '\0') {
            pOVar5 = pOVar7;
         }

         if (_create_new()::{lambda()
         #1
         iVar3 = __cxa_guard_acquire(&_create_new()::, {
               lambda()
               #1
               if (iVar3 != 0) {
                  _scs_create((char *)&_create_new()::{lambda()
                  #1
                  __cxa_atexit(StringName::~StringName, &_create_new()::, {
                        lambda()
                        #1
                        &__dso_handle;
                        __cxa_guard_release(&_create_new()::{lambda()#1}::operator()()::sname);
        }
      }
      Variant::Variant((Variant *)local_78,pOVar5);, local_58 = (undefined1[16])0x0);
                        local_60 = 0;
                        local_88[0] = (Variant*)local_78;
                        ( **(code**)( *(long*)this + 0xd0 ) )(this, &_create_new()::, {
                              lambda()
                              #1
                              if (Variant::needs_deinit[(int)local_60] != '\0') {
                                 Variant::_clear_internal();
                              }

                              if (Variant::needs_deinit[local_78[0]] != '\0') {
                                 Variant::_clear_internal();
                              }

                              if (pOVar5 != (Object*)0x0) {
                                 cVar2 = RefCounted::unreference();
                                 if (cVar2 != '\0') {
                                    cVar2 = predelete_handler(pOVar5);
                                    if (cVar2 != '\0') {
                                       ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                                       Memory::free_static(pOVar5, false);
                                    }

                                 }

                              }

                              Window::hide();
                           }
, CowData<char32_t>::_unref(local_e8);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
                        CowData<char32_t>::_unref(local_a0);
                        CowData<char32_t>::_unref(local_a8);
                        CowData<char32_t>::_unref(local_b0);
                        CowData<char32_t>::_unref(local_b8);
                        cVar2 = RefCounted::unreference();
                        if (cVar2 != '\0') {
                           cVar2 = predelete_handler(pOVar7);
                           if (cVar2 != '\0') {
                              ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
                              if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                                 Memory::free_static(pOVar7, false);
                                 return;
                              }

                              goto LAB_00104680;
                           }

                        }

                     }
, if (local_40 == *(long *)(in_FS_OFFSET + 0x28);
               }

               LAB_00104680:/* WARNING: Subroutine does not return */__stack_chk_fail();
            }
, /* ScriptCreateDialog::ok_pressed() */, void __thiscall ScriptCreateDialog::ok_pressed(ScriptCreateDialog *this);
         {
            if (this[0xe48] == (ScriptCreateDialog)0x0) {
               _load_exist(this);
            }
 else {
               _create_new(this);
            }

            EditorSettings::get_singleton();
            EditorSettings::save();
            this[0xe48] = (ScriptCreateDialog)0x1;
            EditorValidationPanel::update();
            return;
         }

         /* ScriptCreateDialog::_template_changed(int) */
         void ScriptCreateDialog::_template_changed(int param_1) {
            undefined *puVar1;
            char cVar2;
            undefined *puVar3;
            String *pSVar4;
            StringName *pSVar5;
            undefined4 in_register_0000003c;
            long in_FS_OFFSET;
            CowData<char32_t> *local_108;
            Variant local_d8[8];
            undefined8 local_d0;
            undefined8 local_c8;
            undefined8 local_c0;
            char *local_b8;
            long local_b0;
            CowData<char32_t> local_a8[8];
            CowData<char32_t> local_a0[8];
            long local_98;
            CowData<char32_t> local_90[12];
            int local_84;
            int local_78[8];
            int local_58[2];
            undefined8 local_50;
            undefined8 uStack_48;
            long local_40;
            local_40 = *(long*)( in_FS_OFFSET + 0x28 );
            _get_current_template();
            if (*(char*)( CONCAT44(in_register_0000003c, param_1) + 0xe4f ) != '\0') {
               LineEdit::get_text();
               cVar2 = String::begins_with((char*)&local_b8);
               if (cVar2 == '\0') {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                  if (local_84 == 2) {
                     pSVar4 = (String*)EditorSettings::get_singleton();
                     Dictionary::Dictionary((Dictionary*)&local_c8);
                     Variant::Variant((Variant*)local_78, (Dictionary*)&local_c8);
                     local_b8 = (char*)0x0;
                     String::parse_latin1((String*)&local_b8, "templates_dictionary");
                     local_c0 = 0;
                     String::parse_latin1((String*)&local_c0, "script_setup");
                     EditorSettings::get_project_metadata((String*)local_58, pSVar4, (Variant*)&local_c0);
                     Variant::operator_cast_to_Dictionary((Variant*)&local_d0);
                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                     if (Variant::needs_deinit[local_78[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     Dictionary::~Dictionary((Dictionary*)&local_c8);
                     itos((long)&local_c0);
                     String::operator +((String*)&local_b8, (String*)&local_c0);
                     String::operator +((String*)&local_c8, (String*)&local_b8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                     Variant::Variant((Variant*)local_58, (String*)&local_c8);
                     LineEdit::get_text();
                     Variant::Variant((Variant*)local_78, (String*)&local_b8);
                     pSVar4 = (String*)Dictionary::operator []((Variant*)&local_d0);
                     if (pSVar4 != (String*)local_58) {
                        if (Variant::needs_deinit[*(int*)pSVar4] != '\0') {
                           Variant::_clear_internal();
                        }

                        *(undefined4*)pSVar4 = 0;
                        *(int*)pSVar4 = local_58[0];
                        *(undefined8*)( pSVar4 + 8 ) = local_50;
                        *(undefined8*)( pSVar4 + 0x10 ) = uStack_48;
                        local_58[0] = 0;
                     }

                     if (Variant::needs_deinit[local_78[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
                     pSVar4 = (String*)EditorSettings::get_singleton();
                     Variant::Variant((Variant*)local_58, (Dictionary*)&local_d0);
                     local_b8 = (char*)0x0;
                     String::parse_latin1((String*)&local_b8, "templates_dictionary");
                     local_c0 = 0;
                     String::parse_latin1((String*)&local_c0, "script_setup");
                     EditorSettings::set_project_metadata(pSVar4, (String*)&local_c0, (Variant*)&local_b8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     Dictionary::~Dictionary((Dictionary*)&local_d0);
                  }
 else {
                     local_b8 = (char*)0x0;
                     String::parse_latin1((String*)&local_b8, "_script_setup_templates_dictionary");
                     _EDITOR_GET((String*)local_58);
                     Variant::operator_cast_to_Dictionary(local_d8);
                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                     itos((long)&local_c0);
                     String::operator +((String*)&local_b8, (String*)&local_c0);
                     String::operator +((String*)&local_c8, (String*)&local_b8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                     Variant::Variant((Variant*)local_58, (String*)&local_c8);
                     LineEdit::get_text();
                     Variant::Variant((Variant*)local_78, (String*)&local_b8);
                     pSVar4 = (String*)Dictionary::operator [](local_d8);
                     if (pSVar4 != (String*)local_58) {
                        if (Variant::needs_deinit[*(int*)pSVar4] != '\0') {
                           Variant::_clear_internal();
                        }

                        *(undefined4*)pSVar4 = 0;
                        *(int*)pSVar4 = local_58[0];
                        *(undefined8*)( pSVar4 + 8 ) = local_50;
                        *(undefined8*)( pSVar4 + 0x10 ) = uStack_48;
                        local_58[0] = 0;
                     }

                     if (Variant::needs_deinit[local_78[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
                     pSVar5 = (StringName*)EditorSettings::get_singleton();
                     Variant::Variant((Variant*)local_58, (Dictionary*)local_d8);
                     StringName::StringName((StringName*)&local_b8, "_script_setup_templates_dictionary", false);
                     Object::set(pSVar5, (Variant*)&local_b8, (bool*)local_58);
                     if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
                        StringName::unref();
                     }

                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     pSVar4 = (String*)EditorSettings::get_singleton();
                     Dictionary::Dictionary((Dictionary*)&local_c8);
                     Variant::Variant((Variant*)local_78, (Dictionary*)&local_c8);
                     local_b8 = (char*)0x0;
                     String::parse_latin1((String*)&local_b8, "templates_dictionary");
                     local_c0 = 0;
                     String::parse_latin1((String*)&local_c0, "script_setup");
                     EditorSettings::get_project_metadata((String*)local_58, pSVar4, (Variant*)&local_c0);
                     Variant::operator_cast_to_Dictionary((Variant*)&local_d0);
                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                     if (Variant::needs_deinit[local_78[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     Dictionary::~Dictionary((Dictionary*)&local_c8);
                     LineEdit::get_text();
                     Variant::Variant((Variant*)local_58, (String*)&local_b8);
                     cVar2 = Dictionary::has((Variant*)&local_d0);
                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                     if (cVar2 != '\0') {
                        LineEdit::get_text();
                        Variant::Variant((Variant*)local_58, (String*)&local_b8);
                        Dictionary::erase((Variant*)&local_d0);
                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                        pSVar4 = (String*)EditorSettings::get_singleton();
                        Variant::Variant((Variant*)local_58, (Dictionary*)&local_d0);
                        local_b8 = (char*)0x0;
                        String::parse_latin1((String*)&local_b8, "templates_dictionary");
                        local_c0 = 0;
                        String::parse_latin1((String*)&local_c0, "script_setup");
                        EditorSettings::set_project_metadata(pSVar4, (String*)&local_c0, (Variant*)&local_b8);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                     }

                     Dictionary::~Dictionary((Dictionary*)&local_d0);
                     Dictionary::~Dictionary((Dictionary*)local_d8);
                  }

               }
 else {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
               }

            }

            local_108 = local_a0;
            local_d0 = 0;
            puVar1 = &_LC114;
            do {
               puVar3 = puVar1;
               puVar1 = puVar3 + 4;
            }
 while ( *(int*)( puVar3 + 4 ) != 0 );
            local_b8 = "\" ";
            local_b0 = (long)( puVar3 + -0x10f3ec ) >> 2;
            String::parse_utf32((StrRange*)&local_d0);
            local_b8 = "";
            local_c0 = 0;
            local_b0 = 0;
            String::parse_latin1((StrRange*)&local_c0);
            local_b8 = "Template:";
            local_c8 = 0;
            local_b0 = 9;
            String::parse_latin1((StrRange*)&local_c8);
            TTR((String*)&local_b8, (String*)&local_c8);
            String::operator +=((String*)&local_d0, (String*)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
            operator+((char *)&
            local_b8,(String*)&_LC100;
            String::operator +=((String*)&local_d0, (String*)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
            if (( local_98 != 0 ) && ( 1 < *(uint*)( local_98 + -8 ) )) {
               operator+((char *)&
               local_b8,(String*)&_LC117;
               String::operator +=((String*)&local_d0, (String*)&local_b8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
            }

            EditorValidationPanel::set_message(*(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0xdb8 ), 3, (StrRange*)&local_d0, 3, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
            CowData<char32_t>::_unref(local_90);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
            CowData<char32_t>::_unref(local_108);
            CowData<char32_t>::_unref(local_a8);
            if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return;
         }

         /* ScriptCreateDialog::_validate_path(String const&, bool) */
         String *ScriptCreateDialog::_validate_path(String *param_1, bool param_2) {
            code *pcVar1;
            String *this;
            char cVar2;
            int iVar3;
            int iVar4;
            long *plVar5;
            char in_CL;
            bool in_DL;
            char *pcVar6;
            long in_FS_OFFSET;
            long local_78;
            CowData<char32_t> local_70[8];
            long *local_68;
            undefined8 local_60;
            char *local_58;
            undefined8 local_50;
            long local_40;
            local_40 = *(long*)( in_FS_OFFSET + 0x28 );
            String::strip_edges(SUB81((CowData<char32_t>*)&local_78, 0), in_DL);
            if (( local_78 == 0 ) || ( *(uint*)( local_78 + -8 ) < 2 )) {
               local_60 = 0;
               local_58 = "";
               local_50 = 0;
               String::parse_latin1((StrRange*)&local_60);
               local_58 = "Path is empty.";
               local_68 = (long*)0x0;
               local_50 = 0xe;
               String::parse_latin1((StrRange*)&local_68);
               TTR(param_1, (String*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               goto LAB_00105168;
            }

            String::get_file();
            String::get_basename();
            if (( local_58 == (char*)0x0 ) || ( iVar3 = iVar3 == 0 )) {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               LAB_001052ad:local_58 = (char*)0x0;
               String::parse_latin1((String*)&local_58, "");
               pcVar6 = "Filename is empty.";
            }
 else {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (iVar3 == 1) goto LAB_001052ad;
               String::get_file();
               String::get_basename();
               cVar2 = String::is_valid_filename();
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (cVar2 == '\0') {
                  local_58 = (char*)0x0;
                  String::parse_latin1((String*)&local_58, "");
                  pcVar6 = "Filename is invalid.";
               }
 else {
                  String::get_file();
                  cVar2 = String::begins_with((char*)&local_58);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                  if (cVar2 == '\0') {
                     ProjectSettings::get_singleton();
                     ProjectSettings::localize_path((String*)&local_58);
                     if ((char*)local_78 != local_58) {
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                        local_78 = (long)local_58;
                        local_58 = (char*)0x0;
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                     cVar2 = String::begins_with((char*)&local_78);
                     if (cVar2 != '\0') {
                        DirAccess::create((Ref<DirAccess>*)&local_68, 0);
                        plVar5 = local_68;
                        pcVar1 = *(code**)( *local_68 + 0x1a8 );
                        String::get_base_dir();
                        iVar3 = ( *pcVar1 )(plVar5, (CowData<char32_t>*)&local_58);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                        if (iVar3 != 0) {
                           local_58 = (char*)0x0;
                           String::parse_latin1((String*)&local_58, "");
                           local_60 = 0;
                           String::parse_latin1((String*)&local_60, "Base path is invalid.");
                           TTR(param_1, (String*)&local_60);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                           Ref<DirAccess>::unref((Ref<DirAccess>*)&local_68);
                           goto LAB_00105168;
                        }

                        Ref<DirAccess>::unref((Ref<DirAccess>*)&local_68);
                        DirAccess::create((Ref<DirAccess>*)&local_68, 0);
                        plVar5 = local_68;
                        pcVar1 = *(code**)( *local_68 + 0x1d8 );
                        local_58 = (char*)0x0;
                        if (local_78 != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_78);
                        }

                        cVar2 = ( *pcVar1 )(plVar5, (CowData<char32_t>*)&local_58);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                        plVar5 = local_68;
                        if (cVar2 == '\0') {
                           if (in_CL != '\0') {
                              pcVar1 = *(code**)( *local_68 + 0x1d0 );
                              local_58 = (char*)0x0;
                              if (local_78 != 0) {
                                 CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_78);
                              }

                              cVar2 = ( *pcVar1 )(plVar5, (CowData<char32_t>*)&local_58);
                              if (cVar2 == '\0') {
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                                 local_58 = (char*)0x0;
                                 String::parse_latin1((String*)&local_58, "");
                                 pcVar6 = "File does not exist.";
                                 goto LAB_001056a0;
                              }

                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                           }

                           Ref<DirAccess>::unref((Ref<DirAccess>*)&local_68);
                           String::get_extension();
                           local_68 = (long*)0x0;
                           for (iVar3 = 0; iVar4 = OptionButton::get_item_count(),iVar3 < iVar4; iVar3 = iVar3 + 1) {
                              plVar5 = (long*)ScriptServer::get_language(iVar3);
                              ( **(code**)( *plVar5 + 0x2d0 ) )(plVar5, (Ref<DirAccess>*)&local_68);
                           }

                           if (local_68 != (long*)0x0) {
                              for (this(String * ) * local_68; this != (String*)0x0; this * (String**)( this + 8 )) {
                                 cVar2 = String::nocasecmp_to(this);
                                 if (cVar2 == '\0') {
                                    iVar3 = OptionButton::get_selected();
                                    plVar5 = (long*)ScriptServer::get_language(iVar3);
                                    ( **(code**)( *plVar5 + 0x168 ) )((CowData<char32_t>*)&local_58, plVar5);
                                    cVar2 = String::operator ==(this, (String*)&local_58);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                                    if (cVar2 == '\0') {
                                       local_58 = (char*)0x0;
                                       String::parse_latin1((String*)&local_58, "");
                                       pcVar6 = "Extension doesn\'t match chosen language.";
                                       goto LAB_00105634;
                                    }

                                    iVar3 = OptionButton::get_selected();
                                    plVar5 = (long*)ScriptServer::get_language(iVar3);
                                    ( **(code**)( *plVar5 + 0x1c0 ) )(param_1, plVar5, (CowData<char32_t>*)&local_78);
                                    goto LAB_0010565a;
                                 }

                              }

                           }

                           local_58 = (char*)0x0;
                           String::parse_latin1((String*)&local_58, "");
                           pcVar6 = "Invalid extension.";
                           LAB_00105634:local_60 = 0;
                           String::parse_latin1((String*)&local_60, pcVar6);
                           TTR(param_1, (String*)&local_60);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                           LAB_0010565a:List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_68);
                           CowData<char32_t>::_unref(local_70);
                        }
 else {
                           local_58 = (char*)0x0;
                           String::parse_latin1((String*)&local_58, "");
                           pcVar6 = "A directory with the same name exists.";
                           LAB_001056a0:local_60 = 0;
                           String::parse_latin1((String*)&local_60, pcVar6);
                           TTR(param_1, (String*)&local_60);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                           Ref<DirAccess>::unref((Ref<DirAccess>*)&local_68);
                        }

                        goto LAB_00105168;
                     }

                     local_58 = (char*)0x0;
                     String::parse_latin1((String*)&local_58, "");
                     pcVar6 = "Path is not local.";
                  }
 else {
                     local_58 = (char*)0x0;
                     String::parse_latin1((String*)&local_58, "");
                     pcVar6 = "Name begins with a dot.";
                  }

               }

            }

            local_60 = 0;
            String::parse_latin1((String*)&local_60, pcVar6);
            TTR(param_1, (String*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            LAB_00105168:CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return param_1;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         /* ScriptCreateDialog::_validate_parent(String const&) */
         ulong ScriptCreateDialog::_validate_parent(ScriptCreateDialog *this, String *param_1) {
            char cVar1;
            byte bVar2;
            ulong uVar3;
            long in_FS_OFFSET;
            CowData<char32_t> local_40[8];
            String local_38[8];
            long local_30;
            local_30 = *(long*)( in_FS_OFFSET + 0x28 );
            uVar3 = 0;
            if (*(long*)param_1 == 0) {
               uVar3 = 0;
            }
 else if (1 < *(uint*)( *(long*)param_1 + -8 )) {
               if (( this[0xe4b] != (ScriptCreateDialog)0x0 ) && ( cVar1 = cVar1 != '\0' )) {
                  String::substr((int)local_40, (int)param_1);
                  _validate_path(local_38, SUB81(this, 0));
                  bVar2 = String::operator ==(local_38, "");
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
                  if (bVar2 != 0) {
                     CowData<char32_t>::_unref(local_40);
                     uVar3 = (ulong)bVar2;
                     goto LAB_00105790;
                  }

                  CowData<char32_t>::_unref(local_40);
               }

               if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar3 = EditorData::is_type_recognized((String*)( EditorNode::singleton + 0x430 ));
                  return uVar3;
               }

               goto LAB_001058a9;
            }

            LAB_00105790:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return uVar3;
            }

            LAB_001058a9:/* WARNING: Subroutine does not return */__stack_chk_fail();
         }

         /* ScriptCreateDialog::_parent_name_changed(String const&) */
         void ScriptCreateDialog::_parent_name_changed(String *param_1) {
            long *plVar1;
            long lVar2;
            String SVar3;
            long in_FS_OFFSET;
            long local_28;
            long local_20;
            local_20 = *(long*)( in_FS_OFFSET + 0x28 );
            LineEdit::get_text();
            SVar3 = (String)_validate_parent((ScriptCreateDialog*)param_1, (String*)&local_28);
            lVar2 = local_28;
            param_1[0xe4c] = SVar3;
            if (local_28 != 0) {
               LOCK();
               plVar1 = (long*)( local_28 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_28 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

            }

            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               EditorValidationPanel::update();
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         /* ScriptCreateDialog::_path_changed(String const&) */
         void ScriptCreateDialog::_path_changed(ScriptCreateDialog *this, String *param_1) {
            code *pcVar1;
            Object *pOVar2;
            long lVar3;
            char cVar4;
            long in_FS_OFFSET;
            Object *local_48;
            long local_40;
            long local_38;
            long local_30;
            local_30 = *(long*)( in_FS_OFFSET + 0x28 );
            if (this[0xe4e] == (ScriptCreateDialog)0x0) {
               *(undefined2*)( this + 0xe48 ) = 1;
               _validate_path((String*)&local_38, SUB81(this, 0));
               if (*(long*)( this + 0xe38 ) != local_38) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xe38 ));
                  lVar3 = local_38;
                  local_38 = 0;
                  *(long*)( this + 0xe38 ) = lVar3;
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
               if (( *(long*)( this + 0xe38 ) != 0 ) && ( 1 < *(uint*)( *(long*)( this + 0xe38 ) + -8 ) )) {
                  if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     EditorValidationPanel::update();
                     return;
                  }

                  goto LAB_00105b30;
               }

               DirAccess::create(&local_48, 0);
               ProjectSettings::get_singleton();
               String::strip_edges(SUB81((String*)&local_38, 0), SUB81(param_1, 0));
               ProjectSettings::localize_path((String*)&local_40);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
               pOVar2 = local_48;
               pcVar1 = *(code**)( *(long*)local_48 + 0x1d0 );
               local_38 = 0;
               if (local_40 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_38, (CowData*)&local_40);
               }

               cVar4 = ( *pcVar1 )(pOVar2);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
               if (cVar4 != '\0') {
                  this[0xe48] = (ScriptCreateDialog)0x0;
               }

               this[0xe49] = (ScriptCreateDialog)0x1;
               EditorValidationPanel::update();
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
               if (local_48 != (Object*)0x0) {
                  cVar4 = RefCounted::unreference();
                  if (cVar4 != '\0') {
                     cVar4 = predelete_handler(local_48);
                     if (cVar4 != '\0') {
                        ( **(code**)( *(long*)local_48 + 0x140 ) )(local_48);
                        Memory::free_static(local_48, false);
                     }

                  }

               }

            }

            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            LAB_00105b30:/* WARNING: Subroutine does not return */__stack_chk_fail();
         }

         /* ScriptCreateDialog::_language_changed(int) */
         void ScriptCreateDialog::_language_changed(ScriptCreateDialog *this, int param_1) {
            undefined8 uVar1;
            ScriptCreateDialog SVar2;
            long *plVar3;
            String *pSVar4;
            long lVar5;
            long in_FS_OFFSET;
            long local_88;
            CowData<char32_t> local_80[8];
            undefined8 local_78;
            undefined8 local_70;
            char *local_68;
            undefined8 local_60;
            int local_58[6];
            long local_40;
            local_40 = *(long*)( in_FS_OFFSET + 0x28 );
            plVar3 = (long*)ScriptServer::get_language(param_1);
            lVar5 = *plVar3;
            *(long**)( this + 0xe90 ) = plVar3;
            SVar2 = (ScriptCreateDialog)0x0;
            if (*(code**)( lVar5 + 0x1e8 ) != ScriptLanguage::can_inherit_from_file) {
               SVar2 = ( ScriptCreateDialog )(**(code**)( lVar5 + 0x1e8 ))(plVar3);
               lVar5 = **(long**)( this + 0xe90 );
            }

            this[0xe4b] = SVar2;
            SVar2 = ( ScriptCreateDialog )(**(code**)( lVar5 + 0x1d8 ))();
            this[0xe4a] = SVar2;
            if (SVar2 == (ScriptCreateDialog)0x0) {
               this[0xe4e] = (ScriptCreateDialog)0x0;
            }

            LineEdit::get_text();
            _adjust_file_path((String*)&local_68);
            if ((char*)local_88 != local_68) {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               local_88 = (long)local_68;
               local_68 = (char*)0x0;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            _path_changed(this, (String*)&local_88);
            local_68 = (char*)0x0;
            uVar1 = *(undefined8*)( this + 0xde8 );
            if (local_88 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_88);
            }

            LineEdit::set_text(uVar1, (String*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            pSVar4 = (String*)EditorSettings::get_singleton();
            OptionButton::get_selected();
            OptionButton::get_item_text((int)local_80);
            Variant::Variant((Variant*)local_58, (String*)local_80);
            local_68 = "last_selected_language";
            local_70 = 0;
            local_60 = 0x16;
            String::parse_latin1((StrRange*)&local_70);
            local_68 = "script_setup";
            local_78 = 0;
            local_60 = 0xc;
            String::parse_latin1((StrRange*)&local_78);
            EditorSettings::set_project_metadata(pSVar4, (String*)&local_78, (Variant*)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            CowData<char32_t>::_unref(local_80);
            LineEdit::get_text();
            LineEdit::get_text();
            SVar2 = (ScriptCreateDialog)_validate_parent(this, (String*)&local_68);
            this[0xe4c] = SVar2;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            EditorValidationPanel::update();
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            EditorValidationPanel::update();
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         /* ScriptCreateDialog::config(String const&, String const&, bool, bool) */
         void ScriptCreateDialog::config(ScriptCreateDialog *this, String *param_1, String *param_2, bool param_3, bool param_4) {
            undefined8 uVar1;
            int iVar2;
            long in_FS_OFFSET;
            undefined8 local_60;
            undefined *local_58;
            undefined8 local_50;
            long local_40;
            uVar1 = *(undefined8*)( this + 0xdc0 );
            local_40 = *(long*)( in_FS_OFFSET + 0x28 );
            local_58 = (undefined*)0x0;
            if (*(long*)param_1 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)param_1);
            }

            LineEdit::set_text(uVar1, (CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            LineEdit::deselect();
            uVar1 = *(undefined8*)( this + 0xdf0 );
            local_60 = 0;
            local_58 = &_LC14;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_60);
            LineEdit::set_text(uVar1, (StrRange*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            local_58 = (undefined*)0x0;
            uVar1 = *(undefined8*)( this + 0xde8 );
            if (*(long*)param_2 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)param_2);
            }

            LineEdit::set_text(uVar1, (CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            LineEdit::deselect();
            this[0xe50] = (ScriptCreateDialog)param_3;
            this[0xe51] = (ScriptCreateDialog)param_4;
            iVar2 = OptionButton::get_selected();
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               _language_changed(this, iVar2);
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         /* ScriptCreateDialog::_built_in_pressed() */
         void ScriptCreateDialog::_built_in_pressed(ScriptCreateDialog *this) {
            char cVar1;
            long in_FS_OFFSET;
            String aSStack_28[8];
            long local_20;
            local_20 = *(long*)( in_FS_OFFSET + 0x28 );
            cVar1 = BaseButton::is_pressed();
            if (cVar1 == '\0') {
               this[0xe4e] = (ScriptCreateDialog)0x0;
               LineEdit::get_text();
               _path_changed(this, aSStack_28);
               CowData<char32_t>::_unref((CowData<char32_t>*)aSStack_28);
            }
 else {
               this[0xe4e] = (ScriptCreateDialog)0x1;
               this[0xe48] = (ScriptCreateDialog)0x1;
            }

            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               EditorValidationPanel::update();
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         /* ScriptCreateDialog::_file_selected(String const&) */
         void ScriptCreateDialog::_file_selected(String *param_1) {
            undefined8 uVar1;
            String SVar2;
            int iVar3;
            long in_FS_OFFSET;
            long local_70;
            CowData<char32_t> local_68[8];
            undefined8 local_60;
            undefined *local_58;
            undefined8 local_50;
            long local_40;
            local_40 = *(long*)( in_FS_OFFSET + 0x28 );
            ProjectSettings::get_singleton();
            ProjectSettings::localize_path((String*)&local_70);
            if (param_1[0xe30] == (String)0x0) {
               uVar1 = *(undefined8*)( param_1 + 0xde8 );
               local_58 = (undefined*)0x0;
               if (local_70 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_70);
               }

               LineEdit::set_text(uVar1, (CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               _path_changed((ScriptCreateDialog*)param_1, (String*)&local_70);
               String::get_file();
               String::get_basename();
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               iVar3 = String::rfind((String*)&local_70, (int)(CowData<char32_t>*)&local_60);
               LineEdit::select((int)*(undefined8*)( param_1 + 0xde8 ), iVar3);
               LineEdit::set_caret_column((int)*(undefined8*)( param_1 + 0xde8 ));
               Control::grab_focus();
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            }
 else {
               uVar1 = *(undefined8*)( param_1 + 0xdc0 );
               local_60 = 0;
               local_58 = &_LC112;
               local_50 = 1;
               String::parse_latin1((StrRange*)&local_60);
               operator+((char *)
               local_68,(String*)&_LC112;
               String::operator +((String*)&local_58, (String*)local_68);
               LineEdit::set_text(uVar1, (String*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref(local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               LineEdit::get_text();
               LineEdit::get_text();
               SVar2 = (String)_validate_parent((ScriptCreateDialog*)param_1, (String*)&local_58);
               param_1[0xe4c] = SVar2;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               EditorValidationPanel::update();
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return;
         }

         /* ScriptCreateDialog::_bind_methods() */
         void ScriptCreateDialog::_bind_methods(void) {
            Variant *pVVar1;
            long lVar2;
            code *pcVar3;
            undefined1 auVar4[16];
            undefined8 uVar5;
            MethodBind *pMVar6;
            Variant *pVVar7;
            long *plVar8;
            long lVar9;
            long in_FS_OFFSET;
            CowData<char32_t> *local_1e8;
            undefined8 local_1c0;
            long local_1b8;
            long local_1b0;
            long local_1a8;
            long local_1a0;
            char *local_198;
            undefined8 local_190;
            undefined4 local_188[2];
            undefined8 local_180;
            char *local_178;
            int local_170;
            undefined8 local_168;
            undefined4 local_160;
            char *local_158;
            undefined8 local_150;
            undefined1 local_148[16];
            undefined8 local_138;
            undefined8 local_130;
            undefined8 local_128;
            undefined8 local_120;
            undefined8 local_118[2];
            undefined8 local_108;
            undefined8 local_100;
            long local_f0;
            char *local_e8;
            undefined *puStack_e0;
            char *local_d8;
            char *pcStack_d0;
            undefined8 local_c8;
            Variant *local_b8;
            Variant *pVStack_b0;
            char **local_a8;
            char **ppcStack_a0;
            Variant local_88[24];
            Variant local_70[24];
            undefined8 local_58;
            undefined1 local_50[16];
            long local_40[2];
            local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
            local_c8 = 0;
            local_b8 = (Variant*)&local_e8;
            local_e8 = "inherits";
            puStack_e0 = &_LC131;
            local_d8 = "built_in_enabled";
            pcStack_d0 = "load_enabled";
            pVStack_b0 = (Variant*)&puStack_e0;
            local_a8 = &local_d8;
            ppcStack_a0 = &pcStack_d0;
            D_METHODP((char*)&local_158, (char***)"config", ( uint ) & local_b8);
            Variant::Variant(local_88, true);
            pVVar7 = (Variant*)local_40;
            Variant::Variant(local_70, true);
            local_50 = (undefined1[16])0x0;
            local_58 = 0;
            local_b8 = local_88;
            pVStack_b0 = local_70;
            pMVar6 = create_method_bind<ScriptCreateDialog,String_const&,String_const&,bool,bool>(config);
            ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, &local_b8, 2);
            do {
               pVVar1 = pVVar7 + -0x18;
               pVVar7 = pVVar7 + -0x18;
               if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                  Variant::_clear_internal();
               }

            }
 while ( pVVar7 != local_88 );
            uVar5 = local_148._0_8_;
            if ((long*)local_148._0_8_ != (long*)0x0) {
               LOCK();
               plVar8 = (long*)( local_148._0_8_ + -0x10 );
               *plVar8 = *plVar8 + -1;
               UNLOCK();
               if (*plVar8 == 0) {
                  if ((long*)local_148._0_8_ == (long*)0x0) {
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }

                  lVar2 = *(long*)( local_148._0_8_ + -8 );
                  lVar9 = 0;
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = local_148._8_8_;
                  local_148 = auVar4 << 0x40;
                  plVar8 = (long*)uVar5;
                  if (lVar2 != 0) {
                     do {
                        if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                           StringName::unref();
                        }

                        lVar9 = lVar9 + 1;
                        plVar8 = plVar8 + 1;
                     }
 while ( lVar2 != lVar9 );
                  }

                  Memory::free_static((long*)( uVar5 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
               StringName::unref();
            }

            local_1a8 = 0;
            local_158 = "Script";
            local_1b0 = 0;
            local_150 = 6;
            String::parse_latin1((StrRange*)&local_1b0);
            local_158 = "script";
            local_1b8 = 0;
            local_150 = 6;
            String::parse_latin1((StrRange*)&local_1b8);
            local_188[0] = 0x18;
            local_180 = 0;
            if (local_1b8 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_180, (CowData*)&local_1b8);
            }

            local_178 = (char*)0x0;
            local_170 = 0x11;
            local_168 = 0;
            if (local_1b0 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_168, (CowData*)&local_1b0);
               local_160 = 6;
               if (local_170 != 0x11) {
                  StringName::operator =((StringName*)&local_178, (StringName*)&local_1a8);
                  goto LAB_00106548;
               }

            }

            local_1e8 = (CowData<char32_t>*)&local_168;
            local_160 = 6;
            StringName::StringName((StringName*)&local_158, (String*)local_1e8, false);
            if (local_178 == local_158) {
               if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_178 = local_158;
            }

            LAB_00106548:local_1e8 = (CowData<char32_t>*)&local_168;
            local_1a0 = 0;
            local_158 = "script_created";
            local_150 = 0xe;
            String::parse_latin1((StrRange*)&local_1a0);
            local_158 = (char*)0x0;
            local_150 = 0;
            local_138 = 0;
            local_130 = 0;
            local_128 = 6;
            local_120 = 1;
            local_118[0] = 0;
            local_108 = 0;
            local_100 = 0;
            local_f0 = 0;
            local_148 = (undefined1[16])0x0;
            if (local_1a0 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_158, (CowData*)&local_1a0);
            }

            List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_118, (PropertyInfo*)local_188);
            local_198 = "ScriptCreateDialog";
            local_1c0 = 0;
            local_190 = 0x12;
            String::parse_latin1((StrRange*)&local_1c0);
            StringName::StringName((StringName*)&local_198, (String*)&local_1c0, false);
            ClassDB::add_signal((StringName*)&local_198, (MethodInfo*)&local_158);
            if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c0);
            lVar2 = local_f0;
            if (local_f0 != 0) {
               LOCK();
               plVar8 = (long*)( local_f0 + -0x10 );
               *plVar8 = *plVar8 + -1;
               UNLOCK();
               if (*plVar8 == 0) {
                  local_f0 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

            }

            CowData<Variant>::_unref((CowData<Variant>*)&local_108);
            List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_118);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
            if (( StringName::configured != '\0' ) && ( local_148._8_8_ != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)local_148);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
            CowData<char32_t>::_unref(local_1e8);
            if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
            if (( StringName::configured != '\0' ) && ( local_1a8 != 0 )) {
               StringName::unref();
            }

            if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return;
         }

         /* ScriptCreateDialog::_create() */
         void ScriptCreateDialog::_create(ScriptCreateDialog *this) {
            undefined8 uVar1;
            code *pcVar2;
            ScriptCreateDialog SVar3;
            long lVar4;
            long in_FS_OFFSET;
            CowData<char32_t> aCStack_58[8];
            undefined8 local_50;
            CowData<char32_t> local_48[8];
            CowData *local_40[2];
            long local_30;
            uVar1 = *(undefined8*)( this + 0xdc0 );
            local_30 = *(long*)( in_FS_OFFSET + 0x28 );
            CreateDialog::get_selected_type();
            String::split((char*)local_48, SUB81(aCStack_58, 0), 0x10b624);
            if (local_40[0] == (CowData*)0x0) {
               lVar4 = 0;
            }
 else {
               lVar4 = *(long*)( local_40[0] + -8 );
               if (0 < lVar4) {
                  local_50 = 0;
                  if (*(long*)local_40[0] != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, local_40[0]);
                  }

                  LineEdit::set_text(uVar1, (CowData<char32_t>*)&local_50);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                  CowData<String>::_unref((CowData<String>*)local_40);
                  CowData<char32_t>::_unref(aCStack_58);
                  LineEdit::get_text();
                  LineEdit::get_text();
                  SVar3 = (ScriptCreateDialog)_validate_parent(this, (String*)local_48);
                  this[0xe4c] = SVar3;
                  CowData<char32_t>::_unref(local_48);
                  EditorValidationPanel::update();
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                  if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return;
                  }

                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

            }

            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar4, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         /* CowData<String>::_copy_on_write() [clone .isra.0] */
         void CowData<String>::_copy_on_write(CowData<String> *this) {
            CowData *pCVar1;
            long lVar2;
            long lVar3;
            code *pcVar4;
            undefined8 *puVar5;
            long lVar6;
            ulong uVar7;
            CowData<char32_t> *this_00;
            if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
               return;
            }

            if (*(long*)this == 0) {
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

            lVar2 = *(long*)( *(long*)this + -8 );
            uVar7 = 0x10;
            if (lVar2 * 8 != 0) {
               uVar7 = lVar2 * 8 - 1;
               uVar7 = uVar7 | uVar7 >> 1;
               uVar7 = uVar7 | uVar7 >> 2;
               uVar7 = uVar7 | uVar7 >> 4;
               uVar7 = uVar7 | uVar7 >> 8;
               uVar7 = uVar7 | uVar7 >> 0x10;
               uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
            }

            puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
            if (puVar5 != (undefined8*)0x0) {
               lVar6 = 0;
               *puVar5 = 1;
               puVar5[1] = lVar2;
               this_00 = (CowData<char32_t>*)( puVar5 + 2 );
               if (lVar2 != 0) {
                  do {
                     lVar3 = *(long*)this;
                     *(undefined8*)this_00 = 0;
                     pCVar1 = (CowData*)( lVar3 + lVar6 * 8 );
                     if (*(long*)pCVar1 != 0) {
                        CowData<char32_t>::_ref(this_00, pCVar1);
                     }

                     lVar6 = lVar6 + 1;
                     this_00 = this_00 + 8;
                  }
 while ( lVar2 != lVar6 );
               }

               _unref(this);
               *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar5 + 2 );
               return;
            }

            _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
            return;
         }

         /* Vector<String>::push_back(String) [clone .isra.0] */
         void Vector<String>::push_back(Vector<String> *this, CowData *param_2) {
            CowData<char32_t> *this_00;
            int iVar1;
            long lVar2;
            long lVar3;
            if (*(long*)( this + 8 ) == 0) {
               lVar2 = 1;
            }
 else {
               lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
            }

            iVar1 = CowData<String>::resize<false>((CowData<String>*)( this + 8 ), lVar2);
            if (iVar1 == 0) {
               if (*(long*)( this + 8 ) == 0) {
                  lVar3 = -1;
                  lVar2 = 0;
               }
 else {
                  lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
                  lVar3 = lVar2 + -1;
                  if (-1 < lVar3) {
                     CowData<String>::_copy_on_write((CowData<String>*)( this + 8 ));
                     this_00 = (CowData<char32_t>*)( *(long*)( this + 8 ) + lVar3 * 8 );
                     if (*(long*)this_00 == *(long*)param_2) {
                        return;
                     }

                     CowData<char32_t>::_ref(this_00, param_2);
                     return;
                  }

               }

               _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
               return;
            }

            _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
            return;
         }

         /* CowData<ScriptLanguage::ScriptTemplate>::_copy_on_write() [clone .isra.0] */
         void CowData<ScriptLanguage::ScriptTemplate>::_copy_on_write(CowData<ScriptLanguage::ScriptTemplate> *this) {
            undefined4 uVar1;
            long lVar2;
            code *pcVar3;
            undefined8 *puVar4;
            CowData *pCVar5;
            CowData<char32_t> *this_00;
            ulong uVar6;
            long lVar7;
            if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
               return;
            }

            if (*(long*)this == 0) {
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            lVar2 = *(long*)( *(long*)this + -8 );
            uVar6 = 0x10;
            if (lVar2 * 0x28 != 0) {
               uVar6 = lVar2 * 0x28 - 1;
               uVar6 = uVar6 | uVar6 >> 1;
               uVar6 = uVar6 | uVar6 >> 2;
               uVar6 = uVar6 | uVar6 >> 4;
               uVar6 = uVar6 | uVar6 >> 8;
               uVar6 = uVar6 | uVar6 >> 0x10;
               uVar6 = ( uVar6 | uVar6 >> 0x20 ) + 0x11;
            }

            puVar4 = (undefined8*)Memory::alloc_static(uVar6, false);
            if (puVar4 != (undefined8*)0x0) {
               lVar7 = 0;
               *puVar4 = 1;
               puVar4[1] = lVar2;
               this_00 = (CowData<char32_t>*)( puVar4 + 2 );
               if (lVar2 != 0) {
                  do {
                     pCVar5 = (CowData*)( this_00 + *(long*)this + ( -0x10 - (long)puVar4 ) );
                     *(undefined8*)this_00 = 0;
                     if (*(long*)pCVar5 != 0) {
                        CowData<char32_t>::_ref(this_00, pCVar5);
                     }

                     for (int i = 0; i < 3; i++) {
                        *(undefined8*)( this_00 + ( 8*i + 8 ) ) = 0;
                        if (*(long*)( pCVar5 + ( 8*i + 8 ) ) != 0) {
                           CowData<char32_t>::_ref(this_00 + ( 8*i + 8 ), pCVar5 + ( 8*i + 8 ));
                        }

                     }

                     uVar1 = *(undefined4*)( pCVar5 + 0x24 );
                     lVar7 = lVar7 + 1;
                     *(undefined4*)( this_00 + 0x20 ) = *(undefined4*)( pCVar5 + 0x20 );
                     *(undefined4*)( this_00 + 0x24 ) = uVar1;
                     this_00 = this_00 + 0x28;
                  }
 while ( lVar2 != lVar7 );
               }

               _unref(this);
               *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar4 + 2 );
               return;
            }

            _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
            return;
         }

         /* Vector<ScriptLanguage::ScriptTemplate>::push_back(ScriptLanguage::ScriptTemplate) [clone .isra.0]
    */
         void Vector<ScriptLanguage::ScriptTemplate>::push_back(Vector<ScriptLanguage::ScriptTemplate> *this, CowData *param_2) {
            CowData<char32_t> *this_00;
            int iVar1;
            long lVar2;
            long lVar3;
            if (*(long*)( this + 8 ) == 0) {
               lVar2 = 1;
            }
 else {
               lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
            }

            iVar1 = CowData<ScriptLanguage::ScriptTemplate>::resize<false>((CowData<ScriptLanguage::ScriptTemplate>*)( this + 8 ), lVar2);
            if (iVar1 == 0) {
               if (*(long*)( this + 8 ) == 0) {
                  lVar3 = -1;
                  lVar2 = 0;
               }
 else {
                  lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
                  lVar3 = lVar2 + -1;
                  if (-1 < lVar3) {
                     CowData<ScriptLanguage::ScriptTemplate>::_copy_on_write((CowData<ScriptLanguage::ScriptTemplate>*)( this + 8 ));
                     this_00 = (CowData<char32_t>*)( *(long*)( this + 8 ) + lVar3 * 0x28 );
                     if (*(long*)this_00 != *(long*)param_2) {
                        CowData<char32_t>::_ref(this_00, param_2);
                     }

                     for (int i = 0; i < 3; i++) {
                        if (*(long*)( this_00 + ( 8*i + 8 ) ) != *(long*)( param_2 + ( 8*i + 8 ) )) {
                           CowData<char32_t>::_ref(this_00 + ( 8*i + 8 ), param_2 + ( 8*i + 8 ));
                        }

                     }

                     *(undefined4*)( this_00 + 0x20 ) = *(undefined4*)( param_2 + 0x20 );
                     *(undefined4*)( this_00 + 0x24 ) = *(undefined4*)( param_2 + 0x24 );
                     return;
                  }

               }

               _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
               return;
            }

            _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
            return;
         }

         /* ScriptCreateDialog::_get_user_templates(ScriptLanguage const*, StringName const&, String const&,
   ScriptLanguage::TemplateLocation const&) const */
         ScriptLanguage *ScriptCreateDialog::_get_user_templates(ScriptLanguage *param_1, StringName *param_2, String *param_3, TemplateLocation *param_4) {
            long *plVar1;
            long lVar2;
            char *pcVar3;
            char cVar4;
            undefined8 extraout_RDX;
            undefined8 extraout_RDX_00;
            undefined8 extraout_RDX_01;
            undefined8 extraout_RDX_02;
            long in_FS_OFFSET;
            undefined8 uStack_130;
            CowData<char32_t> *local_120;
            CowData<char32_t> *local_118;
            CowData<char32_t> *local_110;
            CowData<char32_t> *local_108;
            CowData<char32_t> local_c0[8];
            String local_b8[8];
            Object *local_b0;
            char *local_a8;
            undefined8 local_a0;
            long local_98;
            long local_90;
            long local_88;
            long local_80;
            undefined8 local_78;
            char *local_68;
            size_t local_60;
            undefined8 local_58;
            undefined8 local_50;
            undefined8 local_48;
            long local_40;
            local_40 = *(long*)( in_FS_OFFSET + 0x28 );
            lVar2 = *(long*)param_3;
            *(undefined8*)( param_1 + 8 ) = 0;
            ( **(code**)( lVar2 + 0x168 ) )(local_c0, param_3);
            lVar2 = *(long*)param_4;
            if (lVar2 == 0) {
               local_98 = 0;
            }
 else {
               pcVar3 = *(char**)( lVar2 + 8 );
               local_98 = 0;
               if (pcVar3 == (char*)0x0) {
                  if (*(long*)( lVar2 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_98, (CowData*)( lVar2 + 0x10 ));
                  }

               }
 else {
                  local_60 = strlen(pcVar3);
                  local_68 = pcVar3;
                  String::parse_latin1((StrRange*)&local_98);
               }

            }

            String::path_join(local_b8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
            DirAccess::open((String*)&local_b0, local_b8);
            if (local_b0 != (Object*)0x0) {
               ( **(code**)( *(long*)local_b0 + 0x160 ) )();
               ( **(code**)( *(long*)local_b0 + 0x168 ) )((String*)&local_a8);
               while (true) {
                  local_68 = (char*)0x0;
                  cVar4 = String::operator !=((String*)&local_a8, (String*)&local_68);
                  pcVar3 = local_68;
                  if (local_68 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_68 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_68 = (char*)0x0;
                        Memory::free_static(pcVar3 + -0x10, false);
                     }

                  }

                  if (cVar4 == '\0') break;
                  String::get_extension();
                  uStack_130 = 0x1070d3;
                  cVar4 = String::operator ==((String*)&local_68, (String*)local_c0);
                  pcVar3 = local_68;
                  if (local_68 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_68 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_68 = (char*)0x0;
                        uStack_130 = 0x107109;
                        Memory::free_static(pcVar3 + -0x10, false);
                     }

                  }

                  if (cVar4 != '\0') {
                     lVar2 = *(long*)param_4;
                     if (lVar2 == 0) {
                        local_a0 = 0;
                     }
 else {
                        pcVar3 = *(char**)( lVar2 + 8 );
                        local_a0 = 0;
                        if (pcVar3 == (char*)0x0) {
                           if (*(long*)( lVar2 + 0x10 ) != 0) {
                              uStack_130 = 0x10745f;
                              CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)( lVar2 + 0x10 ));
                           }

                        }
 else {
                           local_60 = strlen(pcVar3);
                           uStack_130 = 0x107166;
                           local_68 = pcVar3;
                           String::parse_latin1((StrRange*)&local_a0);
                        }

                     }

                     _parse_template((ScriptLanguage*)&local_98, (String*)param_2, param_3, (TemplateLocation*)local_b8, (String*)&local_a8);
                     local_68 = (char*)0x0;
                     if (local_98 != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_98);
                        uStack_130 = extraout_RDX;
                     }

                     local_60 = 0;
                     if (local_90 != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)&local_90);
                        uStack_130 = extraout_RDX_00;
                     }

                     local_110 = (CowData<char32_t>*)&local_60;
                     local_120 = (CowData<char32_t>*)&local_90;
                     local_58 = 0;
                     if (local_88 != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_88);
                        uStack_130 = extraout_RDX_01;
                     }

                     local_108 = (CowData<char32_t>*)&local_58;
                     local_118 = (CowData<char32_t>*)&local_88;
                     local_50 = 0;
                     if (local_80 != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, (CowData*)&local_80);
                        uStack_130 = extraout_RDX_02;
                     }

                     local_48 = local_78;
                     Vector<ScriptLanguage::ScriptTemplate>::push_back((Vector<ScriptLanguage::ScriptTemplate>*)param_1, (String*)&local_68, uStack_130);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                     CowData<char32_t>::_unref(local_108);
                     CowData<char32_t>::_unref(local_110);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
                     CowData<char32_t>::_unref(local_118);
                     CowData<char32_t>::_unref(local_120);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                  }

                  ( **(code**)( *(long*)local_b0 + 0x168 ) )((String*)&local_68);
                  pcVar3 = local_68;
                  if (local_a8 == local_68) {
                     if (local_68 != (char*)0x0) {
                        LOCK();
                        plVar1 = (long*)( local_68 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_68 = (char*)0x0;
                           Memory::free_static(pcVar3 + -0x10, false);
                        }

                     }

                  }
 else {
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                     local_a8 = local_68;
                  }

               }
;
               ( **(code**)( *(long*)local_b0 + 0x180 ) )();
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
               if (( ( local_b0 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)local_b0 + 0x140 ))(local_b0);
               Memory::free_static(local_b0, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
         CowData<char32_t>::_unref(local_c0);
         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return param_1;
      }

      /* Vector<ScriptLanguage::TemplateLocation>::push_back(ScriptLanguage::TemplateLocation) [clone
   .isra.0] */
      void Vector<ScriptLanguage::TemplateLocation>::push_back(Vector<ScriptLanguage::TemplateLocation> *this, undefined4 param_2) {
         int iVar1;
         long lVar2;
         long lVar3;
         if (*(long*)( this + 8 ) == 0) {
            lVar2 = 1;
         }
 else {
            lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
         }

         iVar1 = CowData<ScriptLanguage::TemplateLocation>::resize<false>((CowData<ScriptLanguage::TemplateLocation>*)( this + 8 ), lVar2);
         if (iVar1 == 0) {
            if (*(long*)( this + 8 ) == 0) {
               lVar3 = -1;
               lVar2 = 0;
            }
 else {
               lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
               lVar3 = lVar2 + -1;
               if (-1 < lVar3) {
                  CowData<ScriptLanguage::TemplateLocation>::_copy_on_write((CowData<ScriptLanguage::TemplateLocation>*)( this + 8 ));
                  *(undefined4*)( *(long*)( this + 8 ) + lVar3 * 4 ) = param_2;
                  return;
               }

            }

            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
            return;
         }

         _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
         return;
      }

      /* ScriptCreateDialog::_update_template_menu() */
      void ScriptCreateDialog::_update_template_menu(ScriptCreateDialog *this) {
         Object *pOVar1;
         long *plVar2;
         Object *pOVar3;
         int iVar4;
         long lVar5;
         undefined8 uVar6;
         String *pSVar7;
         code *pcVar8;
         uint uVar9;
         char cVar10;
         char cVar11;
         char cVar12;
         int iVar13;
         String *pSVar14;
         String *pSVar15;
         long lVar16;
         int *piVar17;
         String *pSVar18;
         uint uVar19;
         String *pSVar20;
         int *piVar21;
         long in_FS_OFFSET;
         bool bVar22;
         String *local_1d0;
         int local_188;
         uint local_184;
         uint local_150;
         CowData<String> *local_140;
         Variant local_120[8];
         Variant local_118[8];
         Object *local_110;
         TemplateLocation local_108[8];
         long local_100;
         long local_f8;
         long local_f0;
         Object *local_e8;
         long local_e0;
         Vector<String> local_d8[8];
         String *local_d0;
         Object *local_c8;
         int *local_c0;
         Object *local_b8;
         String *local_b0;
         Object *local_a8;
         String *local_a0;
         long local_98;
         long local_90;
         undefined4 local_88;
         undefined4 local_84;
         int local_78[8];
         int local_58[6];
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         if (*(code**)( **(long**)( this + 0xe90 ) + 0x1b0 ) == ScriptLanguage::is_using_templates) {
            BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xde0 ), 0));
            OptionButton::clear();
            if (( *(long*)( this + 0xe88 ) != 0 ) && ( *(long*)( *(long*)( this + 0xe88 ) + -8 ) != 0 )) {
               CowData<ScriptLanguage::ScriptTemplate>::_unref((CowData<ScriptLanguage::ScriptTemplate>*)( this + 0xe88 ));
            }

            goto LAB_00107641;
         }

         cVar10 = ( **(code**)( **(long**)( this + 0xe90 ) + 0x1b0 ) )();
         BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xde0 ), 0));
         OptionButton::clear();
         if (( *(long*)( this + 0xe88 ) != 0 ) && ( *(long*)( *(long*)( this + 0xe88 ) + -8 ) != 0 )) {
            CowData<ScriptLanguage::ScriptTemplate>::_unref((CowData<ScriptLanguage::ScriptTemplate>*)( this + 0xe88 ));
         }

         if (cVar10 == '\0') goto LAB_00107641;
         pSVar14 = (String*)EditorSettings::get_singleton();
         Dictionary::Dictionary((Dictionary*)&local_c8);
         Variant::Variant((Variant*)local_78, (Dictionary*)&local_c8);
         local_a8 = (Object*)0x0;
         String::parse_latin1((String*)&local_a8, "templates_dictionary");
         local_b8 = (Object*)0x0;
         String::parse_latin1((String*)&local_b8, "script_setup");
         EditorSettings::get_project_metadata((String*)local_58, pSVar14, (Variant*)&local_b8);
         Variant::operator_cast_to_Dictionary(local_120);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         Dictionary::~Dictionary((Dictionary*)&local_c8);
         local_a8 = (Object*)0x0;
         String::parse_latin1((String*)&local_a8, "_script_setup_templates_dictionary");
         _EDITOR_GET((String*)local_58);
         Variant::operator_cast_to_Dictionary(local_118);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
         LineEdit::get_text();
         if (local_110 == (Object*)0x0) {
            local_d0 = (String*)0x0;
            local_e8 = (Object*)0x0;
         }
 else {
            lVar5 = *(long*)( local_110 + -8 );
            if (lVar5 != 0) {
               if (lVar5 < 1) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar5, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar8 = (code*)invalidInstructionException();
                  ( *pcVar8 )();
               }

               if (*(int*)local_110 == 0x22) {
                  String::unquote();
                  _get_parent_class_of_script((String*)&local_a8);
                  if (local_110 != local_a8) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
                     local_110 = local_a8;
                     local_a8 = (Object*)0x0;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                  local_d0 = (String*)0x0;
                  local_e8 = (Object*)0x0;
                  if (local_110 == (Object*)0x0) goto LAB_001078ac;
               }

            }

            local_d0 = (String*)0x0;
            local_e8 = (Object*)0x0;
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_e8, (CowData*)&local_110);
         }

         LAB_001078ac:local_1d0 = (String*)&local_e8;
         LAB_001078c0:while (true) {
            StringName::StringName((StringName*)&local_a8, local_1d0, false);
            cVar11 = ClassDB::class_exists((StringName*)&local_a8);
            if (( StringName::configured != '\0' ) && ( local_a8 != (Object*)0x0 )) {
               StringName::unref();
            }

            if (cVar11 == '\0') break;
            local_a8 = (Object*)0x0;
            if (local_e8 != (Object*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)local_1d0);
            }

            Vector<String>::push_back(local_d8, (String*)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
            StringName::StringName((StringName*)&local_e0, local_1d0, false);
            ClassDB::get_parent_class((StringName*)&local_c8);
            if (local_c8 == (Object*)0x0) {
               LAB_00107c0f:local_b8 = (Object*)0x0;
            }
 else {
               pOVar3 = *(Object**)( local_c8 + 8 );
               local_b8 = (Object*)0x0;
               if (pOVar3 == (Object*)0x0) {
                  if (*(long*)( local_c8 + 0x10 ) == 0) goto LAB_00107c0f;
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)( local_c8 + 0x10 ));
               }
 else {
                  local_a0 = (String*)strlen((char*)pOVar3);
                  local_a8 = pOVar3;
                  String::parse_latin1((StrRange*)&local_b8);
               }

            }

            if (local_b8 != local_e8) {
               CowData<char32_t>::_unref((CowData<char32_t>*)local_1d0);
               local_e8 = local_b8;
               local_b8 = (Object*)0x0;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
            if (( ( StringName::configured != '\0' ) && ( ( local_c8 == (Object*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_e0 != 0 )) {
               StringName::unref();
            }

         }
;
         StringName::StringName((StringName*)&local_a8, local_1d0, false);
         cVar11 = ScriptServer::is_global_class((StringName*)&local_a8);
         if (( StringName::configured != '\0' ) && ( local_a8 != (Object*)0x0 )) {
            StringName::unref();
         }

         if (cVar11 == '\0') goto LAB_00107ca0;
         local_a8 = (Object*)0x0;
         if (local_e8 == (Object*)0x0) {
            Vector<String>::push_back(local_d8, (String*)&local_a8);
         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)local_1d0);
            pOVar3 = local_a8;
            Vector<String>::push_back(local_d8);
            if (pOVar3 != (Object*)0x0) {
               LOCK();
               pOVar3 = pOVar3 + -0x10;
               *(long*)pOVar3 = *(long*)pOVar3 + -1;
               UNLOCK();
               if (*(long*)pOVar3 == 0) {
                  Memory::free_static(local_a8 + -0x10, false);
               }

            }

         }

         EditorData::script_class_load_script((String*)&local_c8);
         if (local_c8 != (Object*)0x0) {
            Resource::get_path();
            _get_parent_class_of_script((String*)&local_a8);
            pOVar3 = local_a8;
            if (local_e8 == local_a8) {
               if (local_a8 != (Object*)0x0) {
                  LOCK();
                  pOVar1 = local_a8 + -0x10;
                  *(long*)pOVar1 = *(long*)pOVar1 + -1;
                  UNLOCK();
                  if (*(long*)pOVar1 == 0) {
                     local_a8 = (Object*)0x0;
                     Memory::free_static(pOVar3 + -0x10, false);
                  }

               }

            }
 else {
               CowData<char32_t>::_unref((CowData<char32_t>*)local_1d0);
               local_e8 = local_a8;
            }

            pOVar3 = local_b8;
            if (local_b8 != (Object*)0x0) {
               LOCK();
               pOVar1 = local_b8 + -0x10;
               *(long*)pOVar1 = *(long*)pOVar1 + -1;
               UNLOCK();
               if (*(long*)pOVar1 == 0) {
                  local_b8 = (Object*)0x0;
                  Memory::free_static(pOVar3 + -0x10, false);
               }

            }

            if (( ( local_c8 != (Object*)0x0 ) && ( cVar11 = RefCounted::unreference() ),pOVar3 = local_c8,cVar11 != '\0' )) &&( cVar11 = cVar11 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
            Memory::free_static(pOVar3, false);
         }

         goto LAB_001078c0;
      }

      _err_print_error("_get_hierarchy", "editor/script_create_dialog.cpp", 0x5e, "Condition \"script.is_null()\" is true. Breaking.", 0, 0);
      if (( ( local_c8 != (Object*)0x0 ) && ( cVar11 = RefCounted::unreference() ),cVar11 != '\0' )) &&( cVar11 = cVar11 != '\0' )(**(code**)( *(long*)local_c8 + 0x140 ))(local_c8);
      Memory::free_static(local_c8, false);
   }

   LAB_00107ca0:if (local_d0 == (String*)0x0) {
      cVar11 = String::is_valid_ascii_identifier();
      if (cVar11 != '\0') {
         local_a8 = (Object*)0x0;
         if (local_110 != (Object*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)&local_110);
         }

         Vector<String>::push_back(local_d8, (String*)&local_a8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      }

      local_a8 = (Object*)0x0;
      String::parse_latin1((String*)&local_a8, "Object");
      Vector<String>::push_back(local_d8, (String*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_1d0);
   local_c0 = (int*)0x0;
   Vector<ScriptLanguage::TemplateLocation>::push_back((Vector<ScriptLanguage::TemplateLocation>*)&local_c8, 2);
   Vector<ScriptLanguage::TemplateLocation>::push_back((Vector<ScriptLanguage::TemplateLocation>*)&local_c8);
   Vector<ScriptLanguage::TemplateLocation>::push_back((Vector<ScriptLanguage::TemplateLocation>*)&local_c8);
   CowData<ScriptLanguage::TemplateLocation>::_copy_on_write((CowData<ScriptLanguage::TemplateLocation>*)&local_c0);
   piVar21 = local_c0;
   CowData<ScriptLanguage::TemplateLocation>::_copy_on_write((CowData<ScriptLanguage::TemplateLocation>*)&local_c0);
   if (local_c0 == (int*)0x0) {
      piVar17 = (int*)0x0;
      if (piVar21 != (int*)0x0) goto LAB_00107d2b;
   }
 else {
      piVar17 = local_c0 + *(long*)( local_c0 + -2 );
      if (piVar21 != piVar17) {
         LAB_00107d2b:local_188 = -1;
         local_150 = 0xffffffff;
         local_184 = 0xffffffff;
         do {
            _get_script_origin_label(local_108);
            CowData<String>::_copy_on_write((CowData<String>*)&local_d0);
            pSVar20 = local_d0;
            CowData<String>::_copy_on_write((CowData<String>*)&local_d0);
            pSVar14 = local_d0;
            if (local_d0 != (String*)0x0) {
               pSVar14 = local_d0 + *(long*)( local_d0 + -8 ) * 8;
            }

            if (pSVar20 != pSVar14) {
               cVar11 = '\0';
               iVar4 = 0;
               do {
                  local_b0 = (String*)0x0;
                  if (*piVar21 == 0) {
                     plVar2 = *(long**)( this + 0xe90 );
                     pcVar8 = *(code**)( *plVar2 + 0x1a8 );
                     StringName::StringName((StringName*)&local_e0, pSVar20, false);
                     if (pcVar8 == ScriptLanguage::get_built_in_templates) {
                        local_a0 = (String*)0x0;
                     }
 else {
                        ( *pcVar8 )((String*)&local_a8, plVar2, (StringName*)&local_e0);
                        if (local_a0 != (String*)0x0) {
                           CowData<ScriptLanguage::ScriptTemplate>::_unref((CowData<ScriptLanguage::ScriptTemplate>*)&local_b0);
                           pSVar15 = local_a0;
                           local_a0 = (String*)0x0;
                           local_b0 = pSVar15;
                           CowData<ScriptLanguage::ScriptTemplate>::_unref((CowData<ScriptLanguage::ScriptTemplate>*)&local_a0);
                           if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                              StringName::unref();
                           }

                           goto LAB_00107f6c;
                        }

                     }

                     CowData<ScriptLanguage::ScriptTemplate>::_unref((CowData<ScriptLanguage::ScriptTemplate>*)&local_a0);
                     if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                        StringName::unref();
                     }

                  }
 else {
                     local_e8 = (Object*)0x0;
                     if (*piVar21 == 2) {
                        EditorPaths::get_project_script_templates_dir();
                        if (local_e8 != local_a8) goto LAB_00107e7d;
                     }
 else {
                        EditorPaths::get_script_templates_dir();
                        if (local_e8 != local_a8) {
                           LAB_00107e7d:CowData<char32_t>::_unref((CowData<char32_t>*)local_1d0);
                           local_e8 = local_a8;
                           local_a8 = (Object*)0x0;
                        }

                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                     StringName::StringName((StringName*)&local_e0, pSVar20, false);
                     _get_user_templates((ScriptLanguage*)&local_a8, (StringName*)this, *(String**)( this + 0xe90 ), (TemplateLocation*)&local_e0);
                     pSVar15 = local_a0;
                     if (local_a0 != (String*)0x0) {
                        CowData<ScriptLanguage::ScriptTemplate>::_unref((CowData<ScriptLanguage::ScriptTemplate>*)&local_b0);
                        local_a0 = (String*)0x0;
                        local_b0 = pSVar15;
                     }

                     CowData<ScriptLanguage::ScriptTemplate>::_unref((CowData<ScriptLanguage::ScriptTemplate>*)&local_a0);
                     if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                        StringName::unref();
                     }

                     pOVar3 = local_e8;
                     pSVar15 = local_b0;
                     if (local_e8 != (Object*)0x0) {
                        LOCK();
                        pOVar1 = local_e8 + -0x10;
                        *(long*)pOVar1 = *(long*)pOVar1 + -1;
                        UNLOCK();
                        if (*(long*)pOVar1 == 0) {
                           local_e8 = (Object*)0x0;
                           Memory::free_static(pOVar3 + -0x10, false);
                           pSVar15 = local_b0;
                        }

                     }

                     LAB_00107f6c:if (pSVar15 != (String*)0x0) {
                        if (cVar11 == '\0') {
                           pSVar15 = *(String**)( this + 0xde0 );
                           local_a8 = (Object*)&_LC14;
                           local_e0 = 0;
                           local_a0 = (String*)0x0;
                           String::parse_latin1((StrRange*)&local_e0);
                           OptionButton::add_separator(pSVar15);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
                           OptionButton::set_item_text((int)*(undefined8*)( this + 0xde0 ), (String*)0xffffffff);
                        }

                        CowData<ScriptLanguage::ScriptTemplate>::_copy_on_write((CowData<ScriptLanguage::ScriptTemplate>*)&local_b0);
                        pSVar18 = local_b0;
                        CowData<ScriptLanguage::ScriptTemplate>::_copy_on_write((CowData<ScriptLanguage::ScriptTemplate>*)&local_b0);
                        pSVar15 = local_b0;
                        if (local_b0 != (String*)0x0) {
                           pSVar15 = local_b0 + *(long*)( local_b0 + -8 ) * 0x28;
                        }

                        cVar11 = cVar10;
                        if (pSVar18 != pSVar15) {
                           do if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) pSVar18 = pSVar18 + 0x28; while ( pSVar15 != pSVar18 );
                        }

                     }

                  }

                  iVar4 = iVar4 + 1;
                  pSVar20 = pSVar20 + 8;
                  CowData<ScriptLanguage::ScriptTemplate>::_unref((CowData<ScriptLanguage::ScriptTemplate>*)&local_b0);
               }
 while ( pSVar14 != pSVar20 );
            }

            piVar21 = piVar21 + 1;
            CowData<char32_t>::_unref((CowData<char32_t>*)local_108);
         }
 while ( piVar17 != piVar21 );
         if (local_184 == 0xffffffff) {
            if (local_150 != 0xffffffff) {
               OptionButton::select((int)*(undefined8*)( this + 0xde0 ));
            }

         }
 else {
            OptionButton::select((int)*(undefined8*)( this + 0xde0 ));
         }

         if (local_c0 == (int*)0x0) goto LAB_00108ada;
      }

      LOCK();
      plVar2 = (long*)( local_c0 + -4 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         Memory::free_static(local_c0 + -4, false);
      }

   }

   LAB_00108ada:local_140 = (CowData<String>*)&local_d0;
   CowData<String>::_unref(local_140);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   Dictionary::~Dictionary((Dictionary*)local_118);
   Dictionary::~Dictionary((Dictionary*)local_120);
   LAB_00107641:OptionButton::get_selected();
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _template_changed((int)this);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ScriptCreateDialog::_update_dialog() */void ScriptCreateDialog::_update_dialog(ScriptCreateDialog *this) {
   ScriptCreateDialog SVar1;
   undefined *puVar2;
   char cVar3;
   int iVar4;
   undefined8 uVar5;
   char *pcVar6;
   bool bVar7;
   undefined1 uVar8;
   long in_FS_OFFSET;
   undefined8 local_80;
   long local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _update_template_menu(this);
   if (( this[0xe4e] == (ScriptCreateDialog)0x0 ) && ( this[0xe49] == (ScriptCreateDialog)0x0 )) {
      uVar5 = *(undefined8*)( this + 0xdb8 );
      local_60 = 0;
      String::parse_latin1((String*)&local_60, "");
      local_68 = 0;
      String::parse_latin1((String*)&local_68, "Invalid path.");
      TTR((String*)&local_58, (String*)&local_68);
      EditorValidationPanel::set_message(uVar5, 0, (String*)&local_58, 2, 1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   if (( this[0xe4c] == (ScriptCreateDialog)0x0 ) && ( this[0xe48] != (ScriptCreateDialog)0x0 )) {
      uVar5 = *(undefined8*)( this + 0xdb8 );
      local_60 = 0;
      String::parse_latin1((String*)&local_60, "");
      local_68 = 0;
      String::parse_latin1((String*)&local_68, "Invalid inherited parent name or path.");
      TTR((String*)&local_58, (String*)&local_68);
      EditorValidationPanel::set_message(uVar5, 0, (String*)&local_58, 2, 1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   cVar3 = EditorValidationPanel::is_valid();
   if (( cVar3 != '\0' ) && ( this[0xe48] == (ScriptCreateDialog)0x0 )) {
      uVar5 = *(undefined8*)( this + 0xdb8 );
      local_60 = 0;
      String::parse_latin1((String*)&local_60, "");
      local_68 = 0;
      String::parse_latin1((String*)&local_68, "File exists, it will be reused.");
      TTR((String*)&local_58, (String*)&local_68);
      EditorValidationPanel::set_message(uVar5, 0, (String*)&local_58, 0, 1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   if (( this[0xe4e] == (ScriptCreateDialog)0x0 ) && ( ( ( *(long*)( this + 0xe38 ) == 0 || ( *(uint*)( *(long*)( this + 0xe38 ) + -8 ) < 2 ) ) || ( EditorValidationPanel::set_message(*(undefined8*)( this + 0xdb8 ), 1, this + 0xe38, 2, 1),this[0xe4e] == (ScriptCreateDialog)0x0 ) ) )) {
      LineEdit::set_editable(SUB81(*(undefined8*)( this + 0xde8 ), 0));
      BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xdf8 ), 0));
      if (this[0xe58] != (ScriptCreateDialog)0x0) {
         this[0xe58] = (ScriptCreateDialog)0x0;
         LineEdit::get_text();
         _path_changed(this, (String*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      }

   }
 else {
      LineEdit::set_editable(SUB81(*(undefined8*)( this + 0xde8 ), 0));
      BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xdf8 ), 0));
      this[0xe58] = (ScriptCreateDialog)0x1;
   }

   bVar7 = SUB81(*(undefined8*)( this + 0xe08 ), 0);
   if (( this[0xe4a] == (ScriptCreateDialog)0x0 ) || ( this[0xe50] == (ScriptCreateDialog)0x0 )) {
      BaseButton::set_pressed(bVar7);
      bVar7 = SUB81(*(undefined8*)( this + 0xe08 ), 0);
      if (this[0xe4a] != (ScriptCreateDialog)0x0) goto LAB_00109298;
      BaseButton::set_disabled(bVar7);
      if (this[0xe4e] != (ScriptCreateDialog)0x0) goto LAB_00108ead;
      LAB_001092b2:LineEdit::get_text();
      LineEdit::get_text();
      String::get_file();
      String::get_basename();
      cVar3 = String::operator ==((String*)&local_60, (String*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (cVar3 != '\0') {
         uVar5 = *(undefined8*)( this + 0xdb8 );
         local_60 = 0;
         String::parse_latin1((String*)&local_60, "");
         local_68 = 0;
         String::parse_latin1((String*)&local_68, "Warning: Having the script name be the same as a built-in type is usually not desired.");
         TTR((String*)&local_58, (String*)&local_68);
         EditorValidationPanel::set_message(uVar5, 2, (String*)&local_58, 1, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      }

   }
 else {
      LAB_00109298:BaseButton::set_disabled(bVar7);
      if (this[0xe4e] == (ScriptCreateDialog)0x0) goto LAB_001092b2;
      LAB_00108ead:uVar5 = *(undefined8*)( this + 0xdb8 );
      local_60 = 0;
      String::parse_latin1((String*)&local_60, "");
      local_68 = 0;
      String::parse_latin1((String*)&local_68, "Note: Built-in scripts have some limitations and can\'t be edited using an external editor.");
      TTR((String*)&local_58, (String*)&local_68);
      EditorValidationPanel::set_message(uVar5, 2, (String*)&local_58, 3, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   for (int i = 0; i < 4; i++) {
      CanvasItem::set_visible(SUB81(*(undefined8*)( this + ( 8*i + 3680 ) ), 0));
   }

   if (this[0xe4e] == (ScriptCreateDialog)0x0) {
      SVar1 = this[0xe48];
      LineEdit::set_editable(SUB81(*(undefined8*)( this + 0xdc0 ), 0));
      BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xdd0 ), 0));
      uVar8 = ( undefined1 ) * (undefined8*)( this + 0xdc8 );
      if (SVar1 != (ScriptCreateDialog)0x0) goto LAB_0010916e;
      BaseButton::set_disabled((bool)uVar8);
      local_50 = 0;
      local_58 = &_LC14;
      String::parse_latin1((StrRange*)( this + 0xe40 ));
      local_58 = (undefined*)0x0;
      String::parse_latin1((String*)&local_58, "");
      local_60 = 0;
      String::parse_latin1((String*)&local_60, "Load");
      TTR((String*)&local_70, (String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      local_58 = (undefined*)0x0;
      if (local_70 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_70);
      }

      AcceptDialog::set_ok_button_text(this, (String*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      local_60 = 0;
      String::parse_latin1((String*)&local_60, "");
      local_68 = 0;
      String::parse_latin1((String*)&local_68, "Using existing script file.");
      TTR((String*)&local_58, (String*)&local_68);
      if ((undefined*)*(long*)( this + 0xe40 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xe40 ));
         puVar2 = local_58;
         local_58 = (undefined*)0x0;
         *(undefined**)( this + 0xe40 ) = puVar2;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (this[0xe51] == (ScriptCreateDialog)0x0) {
         local_80 = *(undefined8*)( this + 0xdb8 );
         local_60 = 0;
         String::parse_latin1((String*)&local_60, "");
         local_68 = 0;
         String::parse_latin1((String*)&local_68, "Script file already exists.");
         TTR((String*)&local_58, (String*)&local_68);
         uVar5 = 2;
         goto LAB_00109597;
      }

      if (this[0xe49] != (ScriptCreateDialog)0x0) {
         local_80 = *(undefined8*)( this + 0xdb8 );
         local_60 = 0;
         String::parse_latin1((String*)&local_60, "");
         pcVar6 = "Will load an existing script file.";
         goto LAB_00109579;
      }

   }
 else {
      LineEdit::set_editable(SUB81(*(undefined8*)( this + 0xdc0 ), 0));
      BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xdd0 ), 0));
      uVar8 = ( undefined1 ) * (undefined8*)( this + 0xdc8 );
      LAB_0010916e:BaseButton::set_disabled((bool)uVar8);
      local_50 = 0;
      local_58 = &_LC14;
      String::parse_latin1((StrRange*)( this + 0xe40 ));
      local_58 = (undefined*)0x0;
      String::parse_latin1((String*)&local_58, "");
      local_60 = 0;
      String::parse_latin1((String*)&local_60, "Create");
      TTR((String*)&local_70, (String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      local_58 = (undefined*)0x0;
      if (local_70 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_70);
      }

      AcceptDialog::set_ok_button_text(this, (String*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (this[0xe4e] != (ScriptCreateDialog)0x0) {
         local_80 = *(undefined8*)( this + 0xdb8 );
         local_60 = 0;
         String::parse_latin1((String*)&local_60, "");
         pcVar6 = "Built-in script (into scene file).";
         LAB_00109579:local_68 = 0;
         String::parse_latin1((String*)&local_68, pcVar6);
         TTR((String*)&local_58, (String*)&local_68);
         uVar5 = 0;
         LAB_00109597:EditorValidationPanel::set_message(local_80, 1, (String*)&local_58, uVar5, 1);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      }

   }

   if (this[0xe4f] == (ScriptCreateDialog)0x0) {
      local_60 = 0;
      String::parse_latin1((String*)&local_60, "");
      pcVar6 = "Empty";
      LAB_001093c5:local_68 = 0;
      String::parse_latin1((String*)&local_68, pcVar6);
      TTR((String*)&local_58, (String*)&local_68);
      if ((undefined*)*(long*)( this + 0xe40 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xe40 ));
         puVar2 = local_58;
         local_58 = (undefined*)0x0;
         *(undefined**)( this + 0xe40 ) = puVar2;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      LAB_0010941e:if (( *(long*)( this + 0xe40 ) == 0 ) || ( *(uint*)( *(long*)( this + 0xe40 ) + -8 ) < 2 )) goto LAB_001094a0;
   }
 else {
      iVar4 = OptionButton::get_item_count();
      if (iVar4 != 0) goto LAB_0010941e;
      if (( *(long*)( this + 0xe40 ) == 0 ) || ( *(uint*)( *(long*)( this + 0xe40 ) + -8 ) < 2 )) {
         local_60 = 0;
         String::parse_latin1((String*)&local_60, "");
         pcVar6 = "No suitable template.";
         goto LAB_001093c5;
      }

   }

   BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xde0 ), 0));
   OptionButton::clear();
   OptionButton::add_item(*(String**)( this + 0xde0 ), (int)(CowData<char32_t>*)( this + 0xe40 ));
   uVar5 = *(undefined8*)( this + 0xdb8 );
   local_58 = (undefined*)0x0;
   String::parse_latin1((String*)&local_58, "");
   EditorValidationPanel::set_message(uVar5, 3, (String*)&local_58, 3, 1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   LAB_001094a0:CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
}
/* Object::_bind_compatibility_methods() */void Object::_bind_compatibility_methods(void) {
   return;
}
/* Object::_set(StringName const&, Variant const&) */undefined8 Object::_set(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_get(StringName const&, Variant&) const */undefined8 Object::_get(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */void Object::_get_property_list(List *param_1) {
   return;
}
/* Object::_validate_property(PropertyInfo&) const */void Object::_validate_property(PropertyInfo *param_1) {
   return;
}
/* Object::_property_can_revert(StringName const&) const */undefined8 Object::_property_can_revert(StringName *param_1) {
   return 0;
}
/* Object::_property_get_revert(StringName const&, Variant&) const */undefined8 Object::_property_get_revert(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_notification(int) */void Object::_notification(int param_1) {
   return;
}
/* Object::get_save_class() const */void Object::get_save_class(void) {
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
/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}
/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}
/* ScriptLanguage::make_template(String const&, String const&, String const&) const */String *ScriptLanguage::make_template(String *param_1, String *param_2, String *param_3) {
   *(undefined8*)param_1 = 0;
   return param_1;
}
/* ScriptLanguage::get_built_in_templates(StringName const&) */StringName *ScriptLanguage::get_built_in_templates(StringName *param_1) {
   *(undefined8*)( param_1 + 8 ) = 0;
   return param_1;
}
/* ScriptLanguage::is_using_templates() */undefined8 ScriptLanguage::is_using_templates(void) {
   return 0;
}
/* ScriptLanguage::can_inherit_from_file() const */undefined8 ScriptLanguage::can_inherit_from_file(void) {
   return 0;
}
/* ScriptLanguage::preferred_file_name_casing() const */undefined8 ScriptLanguage::preferred_file_name_casing(void) {
   return 2;
}
/* ScriptLanguage::get_global_class_name(String const&, String*, String*, bool*, bool*) const */String *ScriptLanguage::get_global_class_name(String *param_1, String *param_2, String *param_3, bool *param_4, bool *param_5) {
   *(undefined8*)param_1 = 0;
   return param_1;
}
/* Control::_top_level_changed() */void Control::_top_level_changed(void) {
   return;
}
/* Viewport::is_size_2d_override_stretch_enabled() const */undefined8 Viewport::is_size_2d_override_stretch_enabled(void) {
   return 1;
}
/* Viewport::is_sub_viewport() const */undefined8 Viewport::is_sub_viewport(void) {
   return 0;
}
/* Window::_popup_adjust_rect() const */undefined1[16];Window::_popup_adjust_rect(void) {
   return ZEXT816(0);
}
/* AcceptDialog::ok_pressed() */void AcceptDialog::ok_pressed(void) {
   return;
}
/* AcceptDialog::cancel_pressed() */void AcceptDialog::cancel_pressed(void) {
   return;
}
/* AcceptDialog::custom_action(String const&) */void AcceptDialog::custom_action(String *param_1) {
   return;
}
/* ConfirmationDialog::is_class_ptr(void*) const */uint ConfirmationDialog::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x1158, in_RSI == &AcceptDialog::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1158, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1158, in_RSI == &Window::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1158, in_RSI == &Viewport::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1159, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* ConfirmationDialog::_property_can_revertv(StringName const&) const */undefined8 ConfirmationDialog::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* ConfirmationDialog::_property_get_revertv(StringName const&, Variant&) const */undefined8 ConfirmationDialog::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ScriptCreateDialog::_property_can_revertv(StringName const&) const */undefined8 ScriptCreateDialog::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* ScriptCreateDialog::_property_get_revertv(StringName const&, Variant&) const */undefined8 ScriptCreateDialog::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* CallableCustomMethodPointer<ScriptCreateDialog, void, bool, bool>::~CallableCustomMethodPointer()
    */void CallableCustomMethodPointer<ScriptCreateDialog,void,bool,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ScriptCreateDialog,void,bool,bool> *this) {
   return;
}
/* CallableCustomMethodPointer<ScriptCreateDialog, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ScriptCreateDialog,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ScriptCreateDialog,void,String_const&> *this) {
   return;
}
/* CallableCustomMethodPointer<ScriptCreateDialog, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ScriptCreateDialog,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ScriptCreateDialog,void,int> *this) {
   return;
}
/* CallableCustomMethodPointer<ScriptCreateDialog, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ScriptCreateDialog,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ScriptCreateDialog,void> *this) {
   return;
}
/* MethodBindT<String const&, String const&, bool, bool>::get_argument_meta(int) const */undefined8 MethodBindT<String_const&,String_const&,bool,bool>::get_argument_meta(int param_1) {
   return 0;
}
/* CallableCustomMethodPointer<ScriptCreateDialog, void, bool, bool>::get_argument_count(bool&)
   const */undefined8 CallableCustomMethodPointer<ScriptCreateDialog,void,bool,bool>::get_argument_count(CallableCustomMethodPointer<ScriptCreateDialog,void,bool,bool> *this, bool *param_1) {
   *param_1 = true;
   return 2;
}
/* CallableCustomMethodPointer<ScriptCreateDialog, void, String const&>::get_argument_count(bool&)
   const */undefined8 CallableCustomMethodPointer<ScriptCreateDialog,void,String_const&>::get_argument_count(CallableCustomMethodPointer<ScriptCreateDialog,void,String_const&> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<ScriptCreateDialog, void, int>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<ScriptCreateDialog,void,int>::get_argument_count(CallableCustomMethodPointer<ScriptCreateDialog,void,int> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<ScriptCreateDialog, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<ScriptCreateDialog,void>::get_argument_count(CallableCustomMethodPointer<ScriptCreateDialog,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* CallableCustomMethodPointer<ScriptCreateDialog, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ScriptCreateDialog,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ScriptCreateDialog,void,int> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<ScriptCreateDialog, void, bool, bool>::~CallableCustomMethodPointer()
    */void CallableCustomMethodPointer<ScriptCreateDialog,void,bool,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ScriptCreateDialog,void,bool,bool> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<ScriptCreateDialog, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ScriptCreateDialog,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ScriptCreateDialog,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<ScriptCreateDialog, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ScriptCreateDialog,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ScriptCreateDialog,void,String_const&> *this) {
   operator_delete(this, 0x48);
   return;
}
/* MethodBindT<String const&, String const&, bool, bool>::~MethodBindT() */void MethodBindT<String_const&,String_const&,bool,bool>::~MethodBindT(MethodBindT<String_const&,String_const&,bool,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001154a8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<String const&, String const&, bool, bool>::~MethodBindT() */void MethodBindT<String_const&,String_const&,bool,bool>::~MethodBindT(MethodBindT<String_const&,String_const&,bool,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001154a8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */undefined8 HBoxContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */undefined8 VBoxContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* HBoxContainer::_property_can_revertv(StringName const&) const */undefined8 HBoxContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0011a008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* VBoxContainer::_property_can_revertv(StringName const&) const */undefined8 VBoxContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0011a008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* ConfirmationDialog::~ConfirmationDialog() */void ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this) {
   *(undefined***)this = &PTR__initialize_classv_00114d78;
   AcceptDialog::~AcceptDialog((AcceptDialog*)this);
   return;
}
/* ConfirmationDialog::~ConfirmationDialog() */void ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this) {
   *(undefined***)this = &PTR__initialize_classv_00114d78;
   AcceptDialog::~AcceptDialog((AcceptDialog*)this);
   operator_delete(this, 0xdb8);
   return;
}
/* ConfirmationDialog::_getv(StringName const&, Variant&) const */undefined8 ConfirmationDialog::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__get_0011a010 != Object::_get) {
      uVar1 = Window::_get(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* ScriptCreateDialog::_getv(StringName const&, Variant&) const */undefined8 ScriptCreateDialog::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__get_0011a010 != Object::_get) {
      uVar1 = Window::_get(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* ConfirmationDialog::_setv(StringName const&, Variant const&) */undefined8 ConfirmationDialog::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__set_0011a018 != Object::_set) {
      uVar1 = Window::_set(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* ScriptCreateDialog::_setv(StringName const&, Variant const&) */undefined8 ScriptCreateDialog::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__set_0011a018 != Object::_set) {
      uVar1 = Window::_set(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* MethodBindT<String const&, String const&, bool, bool>::_gen_argument_type(int) const */char MethodBindT<String_const&,String_const&,bool,bool>::_gen_argument_type(MethodBindT<String_const&,String_const&,bool,bool> *this, int param_1) {
   char cVar1;
   cVar1 = '\0';
   if ((uint)param_1 < 4) {
      cVar1 = ( -((uint)param_1 < 2) & 3U ) + 1;
   }

   return cVar1;
}
/* CallableCustomMethodPointer<ScriptCreateDialog, void, bool, bool>::get_object() const */undefined8 CallableCustomMethodPointer<ScriptCreateDialog,void,bool,bool>::get_object(CallableCustomMethodPointer<ScriptCreateDialog,void,bool,bool> *this) {
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
         goto LAB_0010a47d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010a47d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010a47d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<ScriptCreateDialog, void, String const&>::get_object() const */undefined8 CallableCustomMethodPointer<ScriptCreateDialog,void,String_const&>::get_object(CallableCustomMethodPointer<ScriptCreateDialog,void,String_const&> *this) {
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
         goto LAB_0010a57d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010a57d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010a57d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<ScriptCreateDialog, void>::get_object() const */undefined8 CallableCustomMethodPointer<ScriptCreateDialog,void>::get_object(CallableCustomMethodPointer<ScriptCreateDialog,void> *this) {
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
         goto LAB_0010a67d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010a67d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010a67d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<ScriptCreateDialog, void, int>::get_object() const */undefined8 CallableCustomMethodPointer<ScriptCreateDialog,void,int>::get_object(CallableCustomMethodPointer<ScriptCreateDialog,void,int> *this) {
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
         goto LAB_0010a77d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010a77d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010a77d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* ConfirmationDialog::_validate_propertyv(PropertyInfo&) const */void ConfirmationDialog::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   Viewport::_validate_property(param_1);
   if ((code*)PTR__validate_property_0011a020 == Viewport::_validate_property) {
      return;
   }

   Window::_validate_property(param_1);
   return;
}
/* ScriptCreateDialog::_validate_propertyv(PropertyInfo&) const */void ScriptCreateDialog::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   Viewport::_validate_property(param_1);
   if ((code*)PTR__validate_property_0011a020 == Viewport::_validate_property) {
      return;
   }

   Window::_validate_property(param_1);
   return;
}
/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */void VBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_0011a028 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */void HBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_0011a028 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* HBoxContainer::_setv(StringName const&, Variant const&) */undefined8 HBoxContainer::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0011a030 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* VBoxContainer::_setv(StringName const&, Variant const&) */undefined8 VBoxContainer::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0011a030 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* ConfirmationDialog::_notificationv(int, bool) */void ConfirmationDialog::_notificationv(ConfirmationDialog *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0011a038 != Window::_notification) {
         AcceptDialog::_notification(iVar1);
      }

      for (int i = 0; i < 3; i++) {
         Window::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 3; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_0011a038 == Window::_notification) {
      return;
   }

   AcceptDialog::_notification(iVar1);
   return;
}
/* WARNING: Removing unreachable block (ram,0x0010ac48) *//* HBoxContainer::_getv(StringName const&, Variant&) const */undefined8 HBoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0011a040 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x0010acb8) *//* VBoxContainer::_getv(StringName const&, Variant&) const */undefined8 VBoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0011a040 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* HBoxContainer::is_class_ptr(void*) const */uint HBoxContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x1158, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1158, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1158, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1159, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1159, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* VBoxContainer::is_class_ptr(void*) const */uint VBoxContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x1158, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1158, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1158, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1159, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1159, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* ScriptCreateDialog::is_class_ptr(void*) const */uint ScriptCreateDialog::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x1158, in_RSI == &AcceptDialog::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1158, in_RSI == &ConfirmationDialog::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1158, in_RSI == &Window::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1158, in_RSI == &Viewport::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1159, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = strlen;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ae70;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010ae70:Control::~Control((Control*)this);
   return;
}
/* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = strlen;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010aed0;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010aed0:Control::~Control((Control*)this);
   return;
}
/* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = strlen;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010af30;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010af30:Control::~Control((Control*)this);
   operator_delete(this, 0xa10);
   return;
}
/* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = strlen;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010afa0;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010afa0:Control::~Control((Control*)this);
   operator_delete(this, 0xa10);
   return;
}
/* CallableCustomMethodPointerBase::get_as_text() const */void CallableCustomMethodPointerBase::get_as_text(void) {
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
/* HBoxContainer::_get_class_namev() const */undefined8 *HBoxContainer::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010b073:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010b073;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
         goto LAB_0010b0de;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
   LAB_0010b0de:return &_get_class_namev();
}
/* ScriptCreateDialog::_get_class_namev() const */undefined8 *ScriptCreateDialog::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010b163:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010b163;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ScriptCreateDialog");
         goto LAB_0010b1ce;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ScriptCreateDialog");
   LAB_0010b1ce:return &_get_class_namev();
}
/* ConfirmationDialog::_get_class_namev() const */undefined8 *ConfirmationDialog::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010b253:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010b253;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ConfirmationDialog");
         goto LAB_0010b2be;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ConfirmationDialog");
   LAB_0010b2be:return &_get_class_namev();
}
/* VBoxContainer::_get_class_namev() const */undefined8 *VBoxContainer::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010b343:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010b343;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
         goto LAB_0010b3ae;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
   LAB_0010b3ae:return &_get_class_namev();
}
/* CowData<ScriptLanguage::TemplateLocation>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<ScriptLanguage::TemplateLocation>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* ScriptCreateDialog::_bind_methods() [clone .cold] */void ScriptCreateDialog::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<ScriptLanguage::ScriptTemplate>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<ScriptLanguage::ScriptTemplate>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* VBoxContainer::get_class() const */void VBoxContainer::get_class(void) {
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
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }

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
/* ConfirmationDialog::get_class() const */void ConfirmationDialog::get_class(void) {
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
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }

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
/* ScriptCreateDialog::get_class() const */void ScriptCreateDialog::get_class(void) {
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
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }

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
/* HBoxContainer::get_class() const */void HBoxContainer::get_class(void) {
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
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }

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
/* String::parse_latin1(char const*) */void String::parse_latin1(String *this, char *param_1) {
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
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(PropertyInfo *this, undefined4 param_2, CowData *param_3, int param_4, CowData *param_5, undefined4 param_6, StringName *param_7) {
   long lVar1;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 8 ) = 0;
   lVar1 = *(long*)param_3;
   *(undefined4*)this = param_2;
   if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 8 ), param_3);
   }

   *(undefined8*)( this + 0x20 ) = 0;
   lVar1 = *(long*)param_5;
   *(undefined8*)( this + 0x10 ) = 0;
   *(int*)( this + 0x18 ) = param_4;
   if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), param_5);
      param_4 = *(int*)( this + 0x18 );
   }

   *(undefined4*)( this + 0x28 ) = param_6;
   if (param_4 == 0x11) {
      StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
      if (*(long*)( this + 0x10 ) == local_48) {
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(long*)( this + 0x10 ) = local_48;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      StringName::operator =((StringName*)( this + 0x10 ), param_7);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x0010bdd0) *//* BoxContainer::_notificationv(int, bool) */void BoxContainer::_notificationv(BoxContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0011a048 != Container::_notification) {
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

   if ((code*)PTR__notification_0011a048 == Container::_notification) {
      return;
   }

   BoxContainer::_notification(iVar1);
   return;
}
/* HBoxContainer::_notificationv(int, bool) */void HBoxContainer::_notificationv(HBoxContainer *this, int param_1, bool param_2) {
   if (param_2) {
      BoxContainer::_notificationv((BoxContainer*)this, param_1, true);
      return;
   }

   BoxContainer::_notificationv((BoxContainer*)this, param_1, false);
   return;
}
/* VBoxContainer::_notificationv(int, bool) */void VBoxContainer::_notificationv(VBoxContainer *this, int param_1, bool param_2) {
   if (param_2) {
      BoxContainer::_notificationv((BoxContainer*)this, param_1, true);
      return;
   }

   BoxContainer::_notificationv((BoxContainer*)this, param_1, false);
   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* Callable create_custom_callable_function_pointer<ScriptCreateDialog>(ScriptCreateDialog*, char
   const*, void (ScriptCreateDialog::*)()) */ScriptCreateDialog *create_custom_callable_function_pointer<ScriptCreateDialog>(ScriptCreateDialog *param_1, char *param_2, _func_void *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC14;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_00115268;
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
/* Callable create_custom_callable_function_pointer<ScriptCreateDialog, int>(ScriptCreateDialog*,
   char const*, void (ScriptCreateDialog::*)(int)) */ScriptCreateDialog *create_custom_callable_function_pointer<ScriptCreateDialog,int>(ScriptCreateDialog *param_1, char *param_2, _func_void_int *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC14;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_001152f8;
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
/* Callable create_custom_callable_function_pointer<ScriptCreateDialog, String
   const&>(ScriptCreateDialog*, char const*, void (ScriptCreateDialog::*)(String const&)) */ScriptCreateDialog *create_custom_callable_function_pointer<ScriptCreateDialog,String_const&>(ScriptCreateDialog *param_1, char *param_2, _func_void_String_ptr *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC14;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_00115388;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void_String_ptr**)( this + 0x20 ) = param_3 + 1;
   Callable::Callable((Callable*)param_1, this);
   return param_1;
}
/* Callable create_custom_callable_function_pointer<ScriptCreateDialog, bool,
   bool>(ScriptCreateDialog*, char const*, void (ScriptCreateDialog::*)(bool, bool)) */ScriptCreateDialog *create_custom_callable_function_pointer<ScriptCreateDialog,bool,bool>(ScriptCreateDialog *param_1, char *param_2, _func_void_bool_bool *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC14;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_00115418;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void_bool_bool**)( this + 0x20 ) = param_3 + 1;
   Callable::Callable((Callable*)param_1, this);
   return param_1;
}
/* Callable Callable::bind<bool, bool>(bool, bool) const */Variant **Callable::bind<bool,bool>(bool param_1, bool param_2) {
   Variant *pVVar1;
   bool in_CL;
   bool in_DL;
   Variant *pVVar2;
   undefined7 in_register_00000031;
   undefined7 in_register_00000039;
   long in_FS_OFFSET;
   Variant local_78[24];
   Variant local_60[24];
   undefined8 local_48;
   undefined1 local_40[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_78, in_DL);
   pVVar2 = (Variant*)&local_30;
   Variant::Variant(local_60, in_CL);
   local_48 = 0;
   local_40 = (undefined1[16])0x0;
   Callable::bindp((Variant**)CONCAT71(in_register_00000039, param_1), (int)CONCAT71(in_register_00000031, param_2));
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_78 );
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (Variant**)CONCAT71(in_register_00000039, param_1);
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
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
/* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)( this + 0x20 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x20 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x20 );
         *(undefined8*)( this + 0x20 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x10 ) != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 8 ));
   return;
}
/* WARNING: Removing unreachable block (ram,0x0010c488) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
   char cVar1;
   Variant *this;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
   *param_1 = local_c0[0];
   local_c0[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_c0);
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* ScriptCreateDialog::_notificationv(int, bool) */void ScriptCreateDialog::_notificationv(ScriptCreateDialog *this, int param_1, bool param_2) {
   if (param_2) {
      _notification(this, param_1);
      ConfirmationDialog::_notificationv((ConfirmationDialog*)this, param_1, true);
      return;
   }

   ConfirmationDialog::_notificationv((ConfirmationDialog*)this, param_1, false);
   _notification(this, param_1);
   return;
}
/* List<String, DefaultAllocator>::~List() */void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
   CowData<char32_t> *this_00;
   long lVar1;
   long lVar2;
   long *plVar3;
   plVar3 = *(long**)this;
   if (plVar3 == (long*)0x0) {
      return;
   }

   do {
      this_00 = (CowData<char32_t>*)*plVar3;
      if (this_00 == (CowData<char32_t>*)0x0) {
         if ((int)plVar3[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( this_00 + 0x18 ) == plVar3) {
         lVar2 = *(long*)( this_00 + 8 );
         lVar1 = *(long*)( this_00 + 0x10 );
         *plVar3 = lVar2;
         if (this_00 == (CowData<char32_t>*)plVar3[1]) {
            plVar3[1] = lVar1;
         }

         if (lVar1 != 0) {
            *(long*)( lVar1 + 8 ) = lVar2;
            lVar2 = *(long*)( this_00 + 8 );
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 0x10 ) = lVar1;
         }

         CowData<char32_t>::_unref(this_00);
         Memory::free_static(this_00, false);
         *(int*)( plVar3 + 2 ) = (int)plVar3[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar3 = *(long**)this;
   }
 while ( (int)plVar3[2] != 0 );
   Memory::free_static(plVar3, false);
   return;
}
/* CallableCustomMethodPointer<ScriptCreateDialog, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<ScriptCreateDialog,void>::call(CallableCustomMethodPointer<ScriptCreateDialog,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   uint uVar3;
   ulong *puVar4;
   code *UNRECOVERED_JUMPTABLE;
   ulong uVar5;
   long in_FS_OFFSET;
   bool bVar6;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar5 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar5 << 8 );
         LOCK();
         bVar6 = (char)ObjectDB::spin_lock == '\0';
         if (bVar6) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar6) break;
         local_48 = (char*)( uVar5 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      uVar5 = *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff;
      if (uVar5 != ( *puVar4 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010ca0f;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_0010ca0f;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0010c9e8. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_0010cad1;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010ca0f:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC81, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010cad1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<ScriptCreateDialog, void, bool, bool>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<ScriptCreateDialog,void,bool,bool>::call(CallableCustomMethodPointer<ScriptCreateDialog,void,bool,bool> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   char cVar4;
   bool bVar5;
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
         goto LAB_0010cccf;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] == 0) goto LAB_0010cccf;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 3) {
         if (param_2 == 2) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar4 = Variant::can_convert_strict(*(undefined4*)param_1[1], 1);
            uVar3 = _LC82;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            bVar8 = Variant::operator_cast_to_bool(param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 1);
            uVar3 = _LC83;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            bVar5 = Variant::operator_cast_to_bool(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010cca8. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), bVar5, bVar8);
               return;
            }

            goto LAB_0010cd80;
         }

         *(undefined4*)param_4 = 4;
         *(undefined4*)( param_4 + 8 ) = 2;
      }
 else {
         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 2;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010cccf:local_40 = 0;
      String::parse_latin1((String*)&local_40, "\', can\'t call method.");
      uitos((ulong)local_50);
      operator+((char *)
      local_48,(String*)"Invalid Object id \'";
      String::operator +(local_38, (String*)local_48);
      _err_print_error(&_LC81, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010cd80:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<ScriptCreateDialog, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<ScriptCreateDialog,void,int>::call(CallableCustomMethodPointer<ScriptCreateDialog,void,int> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_0010cf48;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] == 0) goto LAB_0010cf48;
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
            uVar3 = _LC84;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            iVar5 = Variant::operator_cast_to_int(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010cef7. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), iVar5);
               return;
            }

            goto LAB_0010cff9;
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
      LAB_0010cf48:local_40 = 0;
      String::parse_latin1((String*)&local_40, "\', can\'t call method.");
      uitos((ulong)local_50);
      operator+((char *)
      local_48,(String*)"Invalid Object id \'";
      String::operator +(local_38, (String*)local_48);
      _err_print_error(&_LC81, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010cff9:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<ScriptCreateDialog, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<ScriptCreateDialog,void,String_const&>::call(CallableCustomMethodPointer<ScriptCreateDialog,void,String_const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   char cVar4;
   uint uVar5;
   ulong *puVar6;
   code *pcVar7;
   long in_FS_OFFSET;
   bool bVar8;
   CowData<char32_t> local_50[8];
   CowData<char32_t> local_48[8];
   undefined8 local_40;
   Variant local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar5 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_38[0] = (Variant)0x0;
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
      puVar6 = (ulong*)( (ulong)uVar5 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar6 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar6[1] != 0) {
            lVar1 = *(long*)( this + 0x28 );
            pcVar7 = *(code**)( this + 0x38 );
            lVar2 = *(long*)( this + 0x40 );
            if ((uint)param_2 < 2) {
               if (param_2 == 0) {
                  *(undefined4*)param_4 = 4;
                  *(undefined4*)( param_4 + 8 ) = 1;
               }
 else {
                  *(undefined4*)param_4 = 0;
                  if (( (ulong)pcVar7 & 1 ) != 0) {
                     pcVar7 = *(code**)( pcVar7 + *(long*)( lVar1 + lVar2 ) + -1 );
                  }

                  cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 4);
                  uVar3 = _LC85;
                  if (cVar4 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar3;
                  }

                  Variant::operator_cast_to_String(local_38);
                  ( *pcVar7 )((long*)( lVar1 + lVar2 ), local_38);
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
               }

            }
 else {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 1;
            }

            goto LAB_0010d0ce;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   local_40 = 0;
   String::parse_latin1((String*)&local_40, "\', can\'t call method.");
   uitos((ulong)local_50);
   operator+((char *)
   local_48,(String*)"Invalid Object id \'";
   String::operator +((String*)local_38, (String*)local_48);
   _err_print_error(&_LC81, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
   CowData<char32_t>::_unref(local_48);
   CowData<char32_t>::_unref(local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   LAB_0010d0ce:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ConfirmationDialog::_initialize_classv() */void ConfirmationDialog::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (AcceptDialog::initialize_class() == '\0') {
         if (Window::initialize_class() == '\0') {
            if (Viewport::initialize_class() == '\0') {
               if (Node::initialize_class() == '\0') {
                  Object::initialize_class();
                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "Object");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "Node");
                  StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                  ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                  if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  if ((code*)PTR__bind_methods_0011a060 != Node::_bind_methods) {
                     Node::_bind_methods();
                  }

                  Node::initialize_class()::initialized =
                  '\x01';
               }

               local_60 = 0;
               String::parse_latin1((String*)&local_60, "Node");
               StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
               local_70 = 0;
               String::parse_latin1((String*)&local_70, "Viewport");
               StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
               if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               Viewport::_bind_methods();
               Viewport::initialize_class()::initialized =
               '\x01';
            }

            local_58 = "Viewport";
            local_68 = 0;
            local_50 = 8;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "Window";
            local_70 = 0;
            local_50 = 6;
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
            Window::_bind_methods();
            Window::initialize_class()::initialized =
            '\x01';
         }

         local_68 = 0;
         local_58 = "Window";
         local_50 = 6;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "AcceptDialog";
         local_70 = 0;
         local_50 = 0xc;
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
         AcceptDialog::_bind_methods();
         if ((code*)PTR__bind_compatibility_methods_0011a050 != Object::_bind_compatibility_methods) {
            AcceptDialog::_bind_compatibility_methods();
         }

         AcceptDialog::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "AcceptDialog";
      local_68 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "ConfirmationDialog";
      local_70 = 0;
      local_50 = 0x12;
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
      if ((code*)PTR__bind_methods_0011a058 != AcceptDialog::_bind_methods) {
         ConfirmationDialog::_bind_methods();
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
/* HBoxContainer::_initialize_classv() */void HBoxContainer::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (BoxContainer::initialize_class() == '\0') {
         if (Container::initialize_class() == '\0') {
            if (Control::initialize_class() == '\0') {
               if (CanvasItem::initialize_class() == '\0') {
                  if (Node::initialize_class() == '\0') {
                     Object::initialize_class();
                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, "Object");
                     StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                     local_70 = 0;
                     String::parse_latin1((String*)&local_70, "Node");
                     StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                     ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                     if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if ((code*)PTR__bind_methods_0011a060 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "Node");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "CanvasItem");
                  StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                  ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                  if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  CanvasItem::_bind_methods();
                  if ((code*)PTR__bind_compatibility_methods_0011a068 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_60 = 0;
               String::parse_latin1((String*)&local_60, "CanvasItem");
               StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
               local_70 = 0;
               String::parse_latin1((String*)&local_70, "Control");
               StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
               if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               Control::_bind_methods();
               Control::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "Control";
            local_50 = 7;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "Container";
            local_70 = 0;
            local_50 = 9;
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
            Container::_bind_methods();
            Container::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Container";
         local_68 = 0;
         local_50 = 9;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "BoxContainer";
         local_70 = 0;
         local_50 = 0xc;
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
         if ((code*)PTR__bind_methods_0011a070 != Container::_bind_methods) {
            BoxContainer::_bind_methods();
         }

         BoxContainer::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "BoxContainer";
      local_68 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "HBoxContainer";
      local_70 = 0;
      local_50 = 0xd;
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
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* VBoxContainer::_initialize_classv() */void VBoxContainer::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (BoxContainer::initialize_class() == '\0') {
         if (Container::initialize_class() == '\0') {
            if (Control::initialize_class() == '\0') {
               if (CanvasItem::initialize_class() == '\0') {
                  if (Node::initialize_class() == '\0') {
                     Object::initialize_class();
                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, "Object");
                     StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                     local_70 = 0;
                     String::parse_latin1((String*)&local_70, "Node");
                     StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                     ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                     if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if ((code*)PTR__bind_methods_0011a060 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "Node");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "CanvasItem");
                  StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                  ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                  if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  CanvasItem::_bind_methods();
                  if ((code*)PTR__bind_compatibility_methods_0011a068 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_60 = 0;
               String::parse_latin1((String*)&local_60, "CanvasItem");
               StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
               local_70 = 0;
               String::parse_latin1((String*)&local_70, "Control");
               StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
               if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               Control::_bind_methods();
               Control::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "Control";
            local_50 = 7;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "Container";
            local_70 = 0;
            local_50 = 9;
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
            Container::_bind_methods();
            Container::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Container";
         local_68 = 0;
         local_50 = 9;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "BoxContainer";
         local_70 = 0;
         local_50 = 0xc;
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
         if ((code*)PTR__bind_methods_0011a070 != Container::_bind_methods) {
            BoxContainer::_bind_methods();
         }

         BoxContainer::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "BoxContainer";
      local_68 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "VBoxContainer";
      local_70 = 0;
      local_50 = 0xd;
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
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Node::is_class(String const&) const */undefined8 Node::is_class(Node *this, String *param_1) {
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

      if (cVar5 != '\0') goto LAB_0010e52b;
   }

   cVar5 = String::operator ==(param_1, "Node");
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
         if (cVar5 != '\0') goto LAB_0010e52b;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = String::operator ==(param_1, "Object");
         return uVar6;
      }

   }
 else {
      LAB_0010e52b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Window::is_class(String const&) const */undefined8 Window::is_class(Window *this, String *param_1) {
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

      if (cVar5 != '\0') goto LAB_0010e72b;
   }

   cVar5 = String::operator ==(param_1, "Window");
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
         if (cVar5 != '\0') goto LAB_0010e72b;
      }

      cVar5 = String::operator ==(param_1, "Viewport");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Node::is_class((Node*)this, param_1);
            return uVar6;
         }

         goto LAB_0010e82e;
      }

   }

   LAB_0010e72b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010e82e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* ConfirmationDialog::is_class(String const&) const */undefined8 ConfirmationDialog::is_class(ConfirmationDialog *this, String *param_1) {
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

      if (cVar5 != '\0') goto LAB_0010e93b;
   }

   cVar5 = String::operator ==(param_1, "ConfirmationDialog");
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
         if (cVar5 != '\0') goto LAB_0010e93b;
      }

      cVar5 = String::operator ==(param_1, "AcceptDialog");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Window::is_class((Window*)this, param_1);
            return uVar6;
         }

         goto LAB_0010ea3e;
      }

   }

   LAB_0010e93b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010ea3e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* ScriptCreateDialog::is_class(String const&) const */undefined8 ScriptCreateDialog::is_class(ScriptCreateDialog *this, String *param_1) {
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

      if (cVar4 != '\0') goto LAB_0010eb4b;
   }

   cVar4 = String::operator ==(param_1, "ScriptCreateDialog");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = ConfirmationDialog::is_class((ConfirmationDialog*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_0010eb4b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Control::is_class(String const&) const */undefined8 Control::is_class(Control *this, String *param_1) {
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

      if (cVar5 != '\0') goto LAB_0010ec9b;
   }

   cVar5 = String::operator ==(param_1, "Control");
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
         if (cVar5 != '\0') goto LAB_0010ec9b;
      }

      cVar5 = String::operator ==(param_1, "CanvasItem");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Node::is_class((Node*)this, param_1);
            return uVar6;
         }

         goto LAB_0010ed9e;
      }

   }

   LAB_0010ec9b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010ed9e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* BoxContainer::is_class(String const&) const */undefined8 BoxContainer::is_class(BoxContainer *this, String *param_1) {
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

      if (cVar5 != '\0') goto LAB_0010eeab;
   }

   cVar5 = String::operator ==(param_1, "BoxContainer");
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
         if (cVar5 != '\0') goto LAB_0010eeab;
      }

      cVar5 = String::operator ==(param_1, "Container");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Control::is_class((Control*)this, param_1);
            return uVar6;
         }

         goto LAB_0010efae;
      }

   }

   LAB_0010eeab:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010efae:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* VBoxContainer::is_class(String const&) const */undefined8 VBoxContainer::is_class(VBoxContainer *this, String *param_1) {
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

      if (cVar4 != '\0') goto LAB_0010f0bb;
   }

   cVar4 = String::operator ==(param_1, "VBoxContainer");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = BoxContainer::is_class((BoxContainer*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_0010f0bb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HBoxContainer::is_class(String const&) const */undefined8 HBoxContainer::is_class(HBoxContainer *this, String *param_1) {
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

      if (cVar4 != '\0') goto LAB_0010f20b;
   }

   cVar4 = String::operator ==(param_1, "HBoxContainer");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = BoxContainer::is_class((BoxContainer*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_0010f20b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   pvVar5 = *(void**)( this + 0x18 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0x3c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x38 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x20 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x20 ) + lVar4 ) = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar5 + 0x48 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (*(long*)( (long)pvVar5 + 0x38 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x38 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x38 );
                        *(undefined8*)( (long)pvVar5 + 0x38 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x28 ) != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar5 + 0x20 ));
                  if (*(long*)( (long)pvVar5 + 0x10 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x10 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x10 );
                        *(undefined8*)( (long)pvVar5 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( this + 0x18 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_0010f395;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_0010f395:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node::_get_property_listv(List *param_1, bool param_2) {
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
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
   local_78 = &_LC102;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC102;
   local_98 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (undefined*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

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

         goto LAB_0010f55c;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010f55c:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Viewport::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Viewport::_get_property_listv(Viewport *this, List *param_1, bool param_2) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Node::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Viewport";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Viewport";
   local_98 = 0;
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

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

         goto LAB_0010f7c1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010f7c1:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Viewport", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
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
/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void CanvasItem::_get_property_listv(CanvasItem *this, List *param_1, bool param_2) {
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
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

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

         goto LAB_0010fa71;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010fa71:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
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

   if ((code*)PTR__get_property_list_0011a078 != Object::_get_property_list) {
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
/* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Control::_get_property_listv(Control *this, List *param_1, bool param_2) {
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
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

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

         goto LAB_0010fd41;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010fd41:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
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

   if ((code*)PTR__get_property_list_0011a080 != CanvasItem::_get_property_list) {
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
/* Container::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Container::_get_property_listv(Container *this, List *param_1, bool param_2) {
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
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

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

         goto LAB_00110011;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00110011:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
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
/* BoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void BoxContainer::_get_property_listv(BoxContainer *this, List *param_1, bool param_2) {
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
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

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

         goto LAB_001102c1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001102c1:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
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
/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void VBoxContainer::_get_property_listv(VBoxContainer *this, List *param_1, bool param_2) {
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
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

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

         goto LAB_00110571;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00110571:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
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
/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void HBoxContainer::_get_property_listv(HBoxContainer *this, List *param_1, bool param_2) {
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
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

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

         goto LAB_00110821;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00110821:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
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
/* Window::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Window::_get_property_listv(Window *this, List *param_1, bool param_2) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Viewport::_get_property_listv((Viewport*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Window";
   local_70 = 6;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Window";
   local_98 = 0;
   local_70 = 6;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

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

         goto LAB_00110ad1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00110ad1:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Window", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_0011a088 != Object::_get_property_list) {
      Window::_get_property_list((List*)this);
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Viewport::_get_property_listv((Viewport*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AcceptDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void AcceptDialog::_get_property_listv(AcceptDialog *this, List *param_1, bool param_2) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Window::_get_property_listv((Window*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "AcceptDialog";
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AcceptDialog";
   local_98 = 0;
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

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

         goto LAB_00110da1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00110da1:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "AcceptDialog", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Window::_get_property_listv((Window*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ConfirmationDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ConfirmationDialog::_get_property_listv(ConfirmationDialog *this, List *param_1, bool param_2) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      AcceptDialog::_get_property_listv((AcceptDialog*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "ConfirmationDialog";
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "ConfirmationDialog";
   local_98 = 0;
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

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

         goto LAB_00111051;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00111051:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "ConfirmationDialog", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         AcceptDialog::_get_property_listv((AcceptDialog*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ScriptCreateDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ScriptCreateDialog::_get_property_listv(ScriptCreateDialog *this, List *param_1, bool param_2) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      ConfirmationDialog::_get_property_listv((ConfirmationDialog*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "ScriptCreateDialog";
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "ScriptCreateDialog";
   local_98 = 0;
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

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

         goto LAB_00111301;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00111301:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "ScriptCreateDialog", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         ConfirmationDialog::_get_property_listv((ConfirmationDialog*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   void *pvVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   plVar4 = *(long**)this;
   if (plVar4 == (long*)0x0) {
      return;
   }

   do {
      pvVar1 = (void*)*plVar4;
      if (pvVar1 == (void*)0x0) {
         if ((int)plVar4[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( (long)pvVar1 + 0x40 ) == plVar4) {
         lVar3 = *(long*)( (long)pvVar1 + 0x30 );
         lVar2 = *(long*)( (long)pvVar1 + 0x38 );
         *plVar4 = lVar3;
         if (pvVar1 == (void*)plVar4[1]) {
            plVar4[1] = lVar2;
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 0x30 ) = lVar3;
            lVar3 = *(long*)( (long)pvVar1 + 0x30 );
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x38 ) = lVar2;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 0x20 ));
         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar1 + 0x10 ) != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 8 ));
         Memory::free_static(pvVar1, false);
         *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar4 = *(long**)this;
   }
 while ( (int)plVar4[2] != 0 );
   Memory::free_static(plVar4, false);
   return;
}
/* Ref<DirAccess>::unref() */void Ref<DirAccess>::unref(Ref<DirAccess> *this) {
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
/* MethodBind* create_method_bind<ScriptCreateDialog, String const&, String const&, bool, bool>(void
   (ScriptCreateDialog::*)(String const&, String const&, bool, bool)) */MethodBind *create_method_bind<ScriptCreateDialog,String_const&,String_const&,bool,bool>(_func_void_String_ptr_String_ptr_bool_bool *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_String_ptr_String_ptr_bool_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001154a8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 4;
   local_40 = 0;
   local_38 = "ScriptCreateDialog";
   local_30 = 0x12;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<Variant>::_unref() */void CowData<Variant>::_unref(CowData<Variant> *this) {
   long *plVar1;
   int *piVar2;
   long lVar3;
   code *pcVar4;
   int *piVar5;
   long lVar6;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      piVar2 = *(int**)this;
      if (piVar2 != (int*)0x0) {
         lVar3 = *(long*)( piVar2 + -2 );
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar6 = 0;
            piVar5 = piVar2;
            do {
               if (Variant::needs_deinit[*piVar5] != '\0') {
                  Variant::_clear_internal();
               }

               lVar6 = lVar6 + 1;
               piVar5 = piVar5 + 6;
            }
 while ( lVar3 != lVar6 );
         }

         Memory::free_static(piVar2 + -4, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* ScriptCreateDialog::_initialize_classv() */void ScriptCreateDialog::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (ConfirmationDialog::initialize_class() == '\0') {
         if (AcceptDialog::initialize_class() == '\0') {
            if (Window::initialize_class() == '\0') {
               if (Viewport::initialize_class() == '\0') {
                  if (Node::initialize_class() == '\0') {
                     Object::initialize_class();
                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, "Object");
                     StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                     local_70 = 0;
                     String::parse_latin1((String*)&local_70, "Node");
                     StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                     ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                     if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if ((code*)PTR__bind_methods_0011a060 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "Node");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "Viewport");
                  StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                  ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                  if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  Viewport::_bind_methods();
                  Viewport::initialize_class()::initialized =
                  '\x01';
               }

               local_60 = 0;
               String::parse_latin1((String*)&local_60, "Viewport");
               StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
               local_70 = 0;
               String::parse_latin1((String*)&local_70, "Window");
               StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
               if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               Window::_bind_methods();
               Window::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "Window";
            local_50 = 6;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "AcceptDialog";
            local_70 = 0;
            local_50 = 0xc;
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
            AcceptDialog::_bind_methods();
            if ((code*)PTR__bind_compatibility_methods_0011a050 != Object::_bind_compatibility_methods) {
               AcceptDialog::_bind_compatibility_methods();
            }

            AcceptDialog::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "AcceptDialog";
         local_68 = 0;
         local_50 = 0xc;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "ConfirmationDialog";
         local_70 = 0;
         local_50 = 0x12;
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
         if ((code*)PTR__bind_methods_0011a058 != AcceptDialog::_bind_methods) {
            ConfirmationDialog::_bind_methods();
         }

         ConfirmationDialog::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "ConfirmationDialog";
      local_68 = 0;
      local_50 = 0x12;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "ScriptCreateDialog";
      local_70 = 0;
      local_50 = 0x12;
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
      _bind_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<String>::_unref() */void CowData<String>::_unref(CowData<String> *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long *plVar6;
   long lVar7;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      plVar1 = *(long**)this;
      if (plVar1 != (long*)0x0) {
         lVar3 = plVar1[-1];
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            plVar6 = plVar1;
            do {
               if (*plVar6 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar6 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = *plVar6;
                     *plVar6 = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static(plVar1 + -2, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* CowData<String>::_realloc(long) */undefined8 CowData<String>::_realloc(CowData<String> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<String>::resize<false>(long) */undefined8 CowData<String>::resize<false>(CowData<String> *this, long param_1) {
   code *pcVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   long lVar4;
   long lVar5;
   ulong uVar6;
   undefined8 *puVar7;
   ulong uVar8;
   long lVar9;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar4 = 0;
      lVar5 = 0;
   }
 else {
      lVar4 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar4) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar5 = lVar4 * 8;
      if (lVar5 != 0) {
         uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
         uVar6 = uVar6 | uVar6 >> 2;
         uVar6 = uVar6 | uVar6 >> 4;
         uVar6 = uVar6 | uVar6 >> 8;
         uVar6 = uVar6 | uVar6 >> 0x10;
         lVar5 = ( uVar6 | uVar6 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_001121c0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar6 = param_1 * 8 - 1;
   uVar6 = uVar6 >> 1 | uVar6;
   uVar6 = uVar6 | uVar6 >> 2;
   uVar6 = uVar6 | uVar6 >> 4;
   uVar6 = uVar6 | uVar6 >> 8;
   uVar6 = uVar6 | uVar6 >> 0x10;
   uVar6 = uVar6 | uVar6 >> 0x20;
   lVar9 = uVar6 + 1;
   if (lVar9 == 0) goto LAB_001121c0;
   uVar8 = param_1;
   if (param_1 <= lVar4) {
      while (lVar4 = *(long*)this,lVar4 != 0) {
         if (*(ulong*)( lVar4 + -8 ) <= uVar8) {
            if (lVar9 != lVar5) {
               uVar3 = _realloc(this, lVar9);
               if ((int)uVar3 != 0) {
                  return uVar3;
               }

               lVar4 = *(long*)this;
               if (lVar4 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

            }

            *(long*)( lVar4 + -8 ) = param_1;
            return 0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( lVar4 + uVar8 * 8 ));
         uVar8 = uVar8 + 1;
      }
;
      goto LAB_00112216;
   }

   if (lVar9 == lVar5) {
      LAB_0011213b:puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) {
         LAB_00112216:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar4 = puVar7[-1];
      if (param_1 <= lVar4) goto LAB_001120af;
   }
 else {
      if (lVar4 != 0) {
         uVar3 = _realloc(this, lVar9);
         if ((int)uVar3 != 0) {
            return uVar3;
         }

         goto LAB_0011213b;
      }

      puVar2 = (undefined8*)Memory::alloc_static(uVar6 + 0x11, false);
      if (puVar2 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar7 = puVar2 + 2;
      *puVar2 = 1;
      puVar2[1] = 0;
      *(undefined8**)this = puVar7;
      lVar4 = 0;
   }

   memset(puVar7 + lVar4, 0, ( param_1 - lVar4 ) * 8);
   LAB_001120af:puVar7[-1] = param_1;
   return 0;
}
/* CowData<ScriptLanguage::ScriptTemplate>::_unref() */void CowData<ScriptLanguage::ScriptTemplate>::_unref(CowData<ScriptLanguage::ScriptTemplate> *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long *plVar6;
   long lVar7;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      plVar1 = *(long**)this;
      if (plVar1 != (long*)0x0) {
         lVar3 = plVar1[-1];
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            plVar6 = plVar1;
            do {
               if (plVar6[3] != 0) {
                  LOCK();
                  plVar2 = (long*)( plVar6[3] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = plVar6[3];
                     plVar6[3] = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               if (plVar6[2] != 0) {
                  LOCK();
                  plVar2 = (long*)( plVar6[2] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = plVar6[2];
                     plVar6[2] = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               if (plVar6[1] != 0) {
                  LOCK();
                  plVar2 = (long*)( plVar6[1] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = plVar6[1];
                     plVar6[1] = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               if (*plVar6 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar6 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = *plVar6;
                     *plVar6 = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 5;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static(plVar1 + -2, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* ScriptCreateDialog::~ScriptCreateDialog() */void ScriptCreateDialog::~ScriptCreateDialog(ScriptCreateDialog *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_00114ff0;
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xe98 ));
   CowData<ScriptLanguage::ScriptTemplate>::_unref((CowData<ScriptLanguage::ScriptTemplate>*)( this + 0xe88 ));
   if (*(long*)( this + 0xe40 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0xe40 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0xe40 );
         *(undefined8*)( this + 0xe40 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xe38 ));
   *(undefined***)this = &PTR__initialize_classv_00114d78;
   AcceptDialog::~AcceptDialog((AcceptDialog*)this);
   return;
}
/* ScriptCreateDialog::~ScriptCreateDialog() */void ScriptCreateDialog::~ScriptCreateDialog(ScriptCreateDialog *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_00114ff0;
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xe98 ));
   CowData<ScriptLanguage::ScriptTemplate>::_unref((CowData<ScriptLanguage::ScriptTemplate>*)( this + 0xe88 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xe40 ));
   if (*(long*)( this + 0xe38 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0xe38 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0xe38 );
         *(undefined8*)( this + 0xe38 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   *(undefined***)this = &PTR__initialize_classv_00114d78;
   AcceptDialog::~AcceptDialog((AcceptDialog*)this);
   operator_delete(this, 0xea0);
   return;
}
/* CowData<ScriptLanguage::ScriptTemplate>::_realloc(long) */undefined8 CowData<ScriptLanguage::ScriptTemplate>::_realloc(CowData<ScriptLanguage::ScriptTemplate> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<ScriptLanguage::ScriptTemplate>::resize<false>(long) */undefined8 CowData<ScriptLanguage::ScriptTemplate>::resize<false>(CowData<ScriptLanguage::ScriptTemplate> *this, long param_1) {
   StrRange *pSVar1;
   CowData<char32_t> *this_00;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   long lVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   ulong uVar8;
   long lVar9;
   ulong uVar10;
   long lVar11;
   long in_FS_OFFSET;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      uVar6 = 0x1f;
      goto LAB_001126a0;
   }

   if (*(long*)this == 0) {
      if (param_1 != 0) {
         _copy_on_write(this);
         lVar5 = 0;
         lVar9 = 0;
         LAB_00112595:if (param_1 * 0x28 == 0) {
            LAB_001127f0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
         }
 else {
            uVar10 = param_1 * 0x28 - 1;
            uVar10 = uVar10 >> 1 | uVar10;
            uVar10 = uVar10 | uVar10 >> 2;
            uVar10 = uVar10 | uVar10 >> 4;
            uVar10 = uVar10 | uVar10 >> 8;
            uVar10 = uVar10 | uVar10 >> 0x10;
            uVar10 = uVar10 | uVar10 >> 0x20;
            lVar11 = uVar10 + 1;
            if (lVar11 == 0) goto LAB_001127f0;
            uVar8 = param_1;
            if (param_1 <= lVar5) {
               while (lVar5 = *(long*)this,lVar5 != 0) {
                  if (*(ulong*)( lVar5 + -8 ) <= uVar8) {
                     if (lVar11 != lVar9) {
                        uVar6 = _realloc(this, lVar11);
                        if ((int)uVar6 != 0) goto LAB_001126a0;
                        lVar5 = *(long*)this;
                        if (lVar5 == 0) goto LAB_0011273b;
                     }

                     *(long*)( lVar5 + -8 ) = param_1;
                     goto LAB_0011269e;
                  }

                  this_00 = (CowData<char32_t>*)( lVar5 + uVar8 * 0x28 );
                  for (int i = 0; i < 3; i++) {
                     CowData<char32_t>::_unref(this_00 + ( -8*i + 24 ));
                  }

                  CowData<char32_t>::_unref(this_00);
                  uVar8 = uVar8 + 1;
               }
;
               goto LAB_0011284b;
            }

            if (lVar11 == lVar9) {
               LAB_00112763:puVar7 = *(undefined8**)this;
               if (puVar7 == (undefined8*)0x0) {
                  LAB_0011284b:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               lVar5 = puVar7[-1];
               if (lVar5 < param_1) goto LAB_00112640;
               LAB_0011269a:puVar7[-1] = param_1;
               goto LAB_0011269e;
            }

            if (lVar5 != 0) {
               uVar6 = _realloc(this, lVar11);
               if ((int)uVar6 != 0) goto LAB_001126a0;
               goto LAB_00112763;
            }

            puVar4 = (undefined8*)Memory::alloc_static(uVar10 + 0x11, false);
            if (puVar4 != (undefined8*)0x0) {
               puVar7 = puVar4 + 2;
               *puVar4 = 1;
               puVar4[1] = 0;
               *(undefined8**)this = puVar7;
               lVar5 = 0;
               LAB_00112640:do {
                  lVar9 = lVar5 + 1;
                  pSVar1 = (StrRange*)( puVar7 + lVar5 * 5 );
                  *(undefined8*)pSVar1 = 0;
                  String::parse_latin1(pSVar1);
                  *(undefined8*)( pSVar1 + 0x20 ) = 0;
                  puVar7 = *(undefined8**)this;
                  *(undefined8*)( pSVar1 + 0x18 ) = 0;
                  *(undefined1(*) [16])( pSVar1 + 8 ) = (undefined1[16])0x0;
                  lVar5 = lVar9;
               }
 while ( param_1 != lVar9 );
               if (puVar7 == (undefined8*)0x0) {
                  LAB_0011273b:_DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               goto LAB_0011269a;
            }

            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         }

         uVar6 = 6;
         goto LAB_001126a0;
      }

   }
 else {
      lVar5 = *(long*)( *(long*)this + -8 );
      if (param_1 != lVar5) {
         if (param_1 != 0) {
            _copy_on_write(this);
            lVar9 = lVar5 * 0x28;
            if (lVar9 != 0) {
               uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
               uVar10 = uVar10 | uVar10 >> 2;
               uVar10 = uVar10 | uVar10 >> 4;
               uVar10 = uVar10 | uVar10 >> 8;
               uVar10 = uVar10 | uVar10 >> 0x10;
               lVar9 = ( uVar10 | uVar10 >> 0x20 ) + 1;
            }

            goto LAB_00112595;
         }

         _unref(this);
      }

   }

   LAB_0011269e:uVar6 = 0;
   LAB_001126a0:if (lVar2 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
}
/* CowData<ScriptLanguage::TemplateLocation>::_realloc(long) */undefined8 CowData<ScriptLanguage::TemplateLocation>::_realloc(CowData<ScriptLanguage::TemplateLocation> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<ScriptLanguage::TemplateLocation>::resize<false>(long) */undefined8 CowData<ScriptLanguage::TemplateLocation>::resize<false>(CowData<ScriptLanguage::TemplateLocation> *this, long param_1) {
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
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar9 = 0;
      lVar3 = 0;
   }
 else {
      lVar9 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar9) {
         return 0;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
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
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 4 == 0) {
      LAB_00112ae0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_00112ae0;
   if (lVar9 < param_1) {
      if (lVar8 != lVar3) {
         if (lVar9 == 0) {
            puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               return 6;
            }

            puVar7 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar7;
            goto LAB_001129f1;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_001129f1:puVar7[-1] = param_1;
         return 0;
      }

   }
 else {
      if (( lVar8 != lVar3 ) && ( uVar6 = _realloc(this, lVar8) ),(int)uVar6 != 0) {
         return uVar6;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

   }

   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* WARNING: Removing unreachable block (ram,0x00112c68) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
   char cVar1;
   Variant *this;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
   *param_1 = local_c0[0];
   local_c0[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_c0);
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindT<String const&, String const&, bool, bool>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindT<String_const&,String_const&,bool,bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_001130ef;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00112f9c. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8, *(long*)( param_3 + 8 ) + 8, *(undefined1*)( *(long*)( param_3 + 0x10 ) + 8 ), *(undefined1*)( *(long*)( param_3 + 0x18 ) + 8 ));
      return;
   }

   LAB_001130ef:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<String const&, String const&, bool, bool>::ptrcall(Object*, void const**, void*)
   const */void MethodBindT<String_const&,String_const&,bool,bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_001132f1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Load size is inaccurate */
      /* WARNING: Could not recover jumptable at 0x0011317b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3, *(undefined8*)( (long)param_3 + 8 ), **(char**)( (long)param_3 + 0x10 ) != '\0', **(char**)( (long)param_3 + 0x18 ) != '\0');
      return;
   }

   LAB_001132f1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<String const&, String const&, bool, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<String_const&,String_const&,bool,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   bool bVar6;
   bool bVar7;
   undefined4 uVar8;
   long lVar9;
   long *plVar10;
   uint uVar11;
   int iVar12;
   undefined4 in_register_00000014;
   long *plVar13;
   Variant *pVVar14;
   Variant *pVVar15;
   long lVar16;
   uint in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_88;
   undefined8 local_80;
   char *local_78;
   undefined8 local_70;
   Variant *local_68[5];
   long local_40;
   plVar13 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar13 != (long*)0x0 ) && ( plVar13[1] != 0 ) ) && ( *(char*)( plVar13[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_78, (StringName*)( param_2 + 3 ));
      if (plVar13[1] == 0) {
         plVar10 = (long*)plVar13[0x23];
         if (plVar10 == (long*)0x0) {
            plVar10 = (long*)( **(code**)( *plVar13 + 0x40 ) )(plVar13);
         }

      }
 else {
         plVar10 = (long*)( plVar13[1] + 0x20 );
      }

      if (local_78 == (char*)*plVar10) {
         if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_80 = 0;
         local_70 = 0x35;
         String::parse_latin1((StrRange*)&local_80);
         vformat<StringName>((StringName*)&local_78, (StrRange*)&local_80, &local_88);
         _err_print_error(&_LC81, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_78, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113581;
      }

      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar15 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 5) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar12 = 0;
         lVar16 = 0;
      }
 else {
         lVar16 = *(long*)( pVVar2 + -8 );
         iVar12 = (int)lVar16;
      }

      if ((int)( 4 - in_R8D ) <= iVar12) {
         lVar9 = 0;
         do {
            if ((int)lVar9 < (int)in_R8D) {
               pVVar14 = *(Variant**)( param_4 + lVar9 * 8 );
            }
 else {
               uVar11 = iVar12 + -4 + (int)lVar9;
               if (lVar16 <= (int)uVar11) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar11, lVar16, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               pVVar14 = pVVar2 + (ulong)uVar11 * 0x18;
            }

            local_68[lVar9] = pVVar14;
            lVar9 = lVar9 + 1;
         }
 while ( lVar9 != 4 );
         *in_R9 = 0;
         if (( (ulong)pVVar15 & 1 ) != 0) {
            pVVar15 = *(Variant**)( pVVar15 + *(long*)( (long)plVar13 + (long)pVVar1 ) + -1 );
         }

         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[3], 1);
         uVar4 = _LC167;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         bVar6 = Variant::operator_cast_to_bool(local_68[3]);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[2], 1);
         uVar4 = _LC168;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         bVar7 = Variant::operator_cast_to_bool(local_68[2]);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[1], 4);
         uVar4 = _LC169;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_String((Variant*)&local_80);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[0], 4);
         uVar4 = _LC85;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_String((Variant*)&local_78);
         ( *(code*)pVVar15 )((Variant*)( (long)plVar13 + (long)pVVar1 ), (Variant*)&local_78, (Variant*)&local_80, bVar7, bVar6);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         goto LAB_00113581;
      }

      uVar8 = 4;
   }
 else {
      uVar8 = 3;
   }

   *in_R9 = uVar8;
   in_R9[2] = 4;
   LAB_00113581:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<String_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   undefined *local_78;
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = *param_2;
   if (iVar2 == param_1) {
      local_80 = 0;
      local_88 = 0;
      local_78 = &_LC14;
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      local_90 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 4, (CowData<char32_t>*)&local_90, 0, (StrRange*)&local_88, 6, &local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)param_3 = local_78._0_4_;
      if (*(long*)( param_3 + 8 ) != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
         lVar1 = local_70;
         local_70 = 0;
         *(long*)( param_3 + 8 ) = lVar1;
      }

      if (*(long*)( param_3 + 0x10 ) != local_68) {
         StringName::unref();
         lVar1 = local_68;
         local_68 = 0;
         *(long*)( param_3 + 0x10 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x18 ) = local_60;
      if (*(long*)( param_3 + 0x20 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( param_3 + 0x20 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x28 ) = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
      iVar2 = *param_2;
   }

   *param_2 = iVar2 + 1;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<bool>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<bool>(int param_1, int *param_2, PropertyInfo *param_3) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   undefined *local_78;
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = *param_2;
   if (iVar2 == param_1) {
      local_80 = 0;
      local_88 = 0;
      local_78 = &_LC14;
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      local_90 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 1, (CowData<char32_t>*)&local_90, 0, (StrRange*)&local_88, 6, &local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)param_3 = local_78._0_4_;
      if (*(long*)( param_3 + 8 ) != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
         lVar1 = local_70;
         local_70 = 0;
         *(long*)( param_3 + 8 ) = lVar1;
      }

      if (*(long*)( param_3 + 0x10 ) != local_68) {
         StringName::unref();
         lVar1 = local_68;
         local_68 = 0;
         *(long*)( param_3 + 0x10 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x18 ) = local_60;
      if (*(long*)( param_3 + 0x20 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( param_3 + 0x20 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x28 ) = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
      iVar2 = *param_2;
   }

   *param_2 = iVar2 + 1;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<String const&, String const&, bool, bool>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<String_const&,String_const&,bool,bool>::_gen_argument_type_info(int param_1) {
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar1;
   long in_FS_OFFSET;
   int local_24;
   long local_20;
   pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar1 = 0;
   *(undefined4*)( pPVar1 + 0x18 ) = 0;
   *(undefined8*)( pPVar1 + 0x20 ) = 0;
   *(undefined4*)( pPVar1 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
   local_24 = 0;
   call_get_argument_type_info_helper<String_const&>(in_EDX, &local_24, pPVar1);
   call_get_argument_type_info_helper<String_const&>(in_EDX, &local_24, pPVar1);
   call_get_argument_type_info_helper<bool>(in_EDX, &local_24, pPVar1);
   call_get_argument_type_info_helper<bool>(in_EDX, &local_24, pPVar1);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void memdelete<HashMapElement<StringName, EditorHelpBit::HelpData> >(HashMapElement<StringName,
   EditorHelpBit::HelpData>*) */void memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(HashMapElement *param_1) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long *plVar6;
   long lVar7;
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x68 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x60 ));
   if (*(long*)( param_1 + 0x58 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( param_1 + 0x58 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( param_1 + 0x58 );
         if (plVar1 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         lVar3 = plVar1[-1];
         *(undefined8*)( param_1 + 0x58 ) = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            plVar6 = plVar1;
            do {
               if (plVar6[4] != 0) {
                  LOCK();
                  plVar2 = (long*)( plVar6[4] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = plVar6[4];
                     plVar6[4] = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               if (plVar6[2] != 0) {
                  LOCK();
                  plVar2 = (long*)( plVar6[2] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = plVar6[2];
                     plVar6[2] = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               if (plVar6[1] != 0) {
                  LOCK();
                  plVar2 = (long*)( plVar6[1] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = plVar6[1];
                     plVar6[1] = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               if (*plVar6 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar6 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = *plVar6;
                     *plVar6 = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 5;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x48 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x38 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x30 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x28 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x20 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x18 ));
   if (( StringName::configured != '\0' ) && ( *(long*)( param_1 + 0x10 ) != 0 )) {
      StringName::unref();
   }

   Memory::free_static(param_1, false);
   return;
}
/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */void HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>> *this) {
   uint uVar1;
   long lVar2;
   void *pvVar3;
   pvVar3 = *(void**)( this + 8 );
   if (pvVar3 == (void*)0x0) {
      return;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (uVar1 == 0) {
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }
 else {
         lVar2 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x10 ) + lVar2 ) != 0) {
               *(int*)( *(long*)( this + 0x10 ) + lVar2 ) = 0;
               memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(*(HashMapElement**)( (long)pvVar3 + lVar2 * 2 ));
               pvVar3 = *(void**)( this + 8 );
               *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
            }

            lVar2 = lVar2 + 4;
         }
 while ( lVar2 != (ulong)uVar1 << 2 );
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         if (pvVar3 == (void*)0x0) {
            return;
         }

      }

   }

   Memory::free_static(pvVar3, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
   return;
}
/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */void HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator < HashMapElement<StringName,EditorHelpBit::HelpData>>>>> > *this) {
   uint uVar1;
   uint uVar2;
   int *piVar3;
   long lVar4;
   void *pvVar5;
   void *pvVar6;
   long lVar7;
   pvVar6 = *(void**)( this + 8 );
   if (pvVar6 == (void*)0x0) {
      return;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (uVar1 == 0) {
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }
 else {
         lVar7 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x10 ) + lVar7 ) != 0) {
               pvVar6 = *(void**)( (long)pvVar6 + lVar7 * 2 );
               *(int*)( *(long*)( this + 0x10 ) + lVar7 ) = 0;
               pvVar5 = *(void**)( (long)pvVar6 + 0x20 );
               if (pvVar5 != (void*)0x0) {
                  if (*(int*)( (long)pvVar6 + 0x44 ) != 0) {
                     uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( (long)pvVar6 + 0x40 ) * 4 );
                     if (uVar2 == 0) {
                        *(undefined4*)( (long)pvVar6 + 0x44 ) = 0;
                        *(undefined1(*) [16])( (long)pvVar6 + 0x30 ) = (undefined1[16])0x0;
                     }
 else {
                        lVar4 = 0;
                        do {
                           piVar3 = (int*)( *(long*)( (long)pvVar6 + 0x28 ) + lVar4 );
                           if (*piVar3 != 0) {
                              *piVar3 = 0;
                              memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(*(HashMapElement**)( (long)pvVar5 + lVar4 * 2 ));
                              pvVar5 = *(void**)( (long)pvVar6 + 0x20 );
                              *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
                           }

                           lVar4 = lVar4 + 4;
                        }
 while ( lVar4 != (ulong)uVar2 * 4 );
                        *(undefined4*)( (long)pvVar6 + 0x44 ) = 0;
                        *(undefined1(*) [16])( (long)pvVar6 + 0x30 ) = (undefined1[16])0x0;
                        if (pvVar5 == (void*)0x0) goto LAB_00113eb9;
                     }

                  }

                  Memory::free_static(pvVar5, false);
                  Memory::free_static(*(void**)( (long)pvVar6 + 0x28 ), false);
               }

               LAB_00113eb9:if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + 0x10 ) != 0 )) {
                  StringName::unref();
               }

               Memory::free_static(pvVar6, false);
               pvVar6 = *(void**)( this + 8 );
               *(undefined8*)( (long)pvVar6 + lVar7 * 2 ) = 0;
            }

            lVar7 = lVar7 + 4;
         }
 while ( lVar7 != (ulong)uVar1 << 2 );
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         if (pvVar6 == (void*)0x0) {
            return;
         }

      }

   }

   Memory::free_static(pvVar6, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
   return;
}
/* ScriptCreateDialog::_notification(int) */void ScriptCreateDialog::_GLOBAL__sub_I__notification(void) {
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

   if (OptionButton::base_property_helper == '\0') {
      OptionButton::base_property_helper = '\x01';
      OptionButton::base_property_helper._64_8_ = 0;
      OptionButton::base_property_helper._0_16_ = (undefined1[16])0x0;
      OptionButton::base_property_helper._24_16_ = (undefined1[16])0x0;
      OptionButton::base_property_helper._40_16_ = (undefined1[16])0x0;
      OptionButton::base_property_helper._56_8_ = 2;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, OptionButton::base_property_helper, &__dso_handle);
   }

   if (EditorHelpBit::doc_class_cache == '\0') {
      EditorHelpBit::doc_class_cache = '\x01';
      EditorHelpBit::doc_class_cache._8_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_class_cache._24_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_class_cache._40_8_ = 2;
      __cxa_atexit(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault < StringName>, DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>> > ::~HashMap, EditorHelpBit::doc_class_cache, &__dso_handle);
   }

   if (EditorHelpBit::doc_enum_cache == '\0') {
      EditorHelpBit::doc_enum_cache = '\x01';
      EditorHelpBit::doc_enum_cache._8_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_enum_cache._24_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_enum_cache._40_8_ = 2;
      __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap, EditorHelpBit::doc_enum_cache, &__dso_handle);
   }

   if (EditorHelpBit::doc_constant_cache == '\0') {
      EditorHelpBit::doc_constant_cache = '\x01';
      EditorHelpBit::doc_constant_cache._8_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_constant_cache._24_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_constant_cache._40_8_ = 2;
      __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap, EditorHelpBit::doc_constant_cache, &__dso_handle);
   }

   if (EditorHelpBit::doc_property_cache == '\0') {
      EditorHelpBit::doc_property_cache = '\x01';
      EditorHelpBit::doc_property_cache._8_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_property_cache._24_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_property_cache._40_8_ = 2;
      __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap, EditorHelpBit::doc_property_cache, &__dso_handle);
   }

   if (EditorHelpBit::doc_theme_item_cache == '\0') {
      EditorHelpBit::doc_theme_item_cache = '\x01';
      EditorHelpBit::doc_theme_item_cache._8_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_theme_item_cache._24_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_theme_item_cache._40_8_ = 2;
      __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap, EditorHelpBit::doc_theme_item_cache, &__dso_handle);
   }

   if (EditorHelpBit::doc_method_cache == '\0') {
      EditorHelpBit::doc_method_cache = '\x01';
      EditorHelpBit::doc_method_cache._8_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_method_cache._24_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_method_cache._40_8_ = 2;
      __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap, EditorHelpBit::doc_method_cache, &__dso_handle);
   }

   if (EditorHelpBit::doc_signal_cache == '\0') {
      EditorHelpBit::doc_signal_cache = '\x01';
      EditorHelpBit::doc_signal_cache._8_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_signal_cache._24_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_signal_cache._40_8_ = 2;
      __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap, EditorHelpBit::doc_signal_cache, &__dso_handle);
   }

   if (EditorHelpBit::doc_annotation_cache == '\0') {
      EditorHelpBit::doc_annotation_cache = '\x01';
      EditorHelpBit::doc_annotation_cache._8_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_annotation_cache._24_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_annotation_cache._40_8_ = 2;
      __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap, EditorHelpBit::doc_annotation_cache, &__dso_handle);
   }

   if (ItemList::base_property_helper == '\0') {
      ItemList::base_property_helper = '\x01';
      ItemList::base_property_helper._64_8_ = 0;
      ItemList::base_property_helper._0_16_ = (undefined1[16])0x0;
      ItemList::base_property_helper._24_16_ = (undefined1[16])0x0;
      ItemList::base_property_helper._40_16_ = (undefined1[16])0x0;
      ItemList::base_property_helper._56_8_ = 2;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, ItemList::base_property_helper, &__dso_handle);
   }

   if (EditorFileDialog::base_property_helper != '\0') {
      return;
   }

   EditorFileDialog::base_property_helper = 1;
   EditorFileDialog::base_property_helper._64_8_ = 0;
   EditorFileDialog::base_property_helper._56_8_ = 2;
   EditorFileDialog::base_property_helper._0_16_ = (undefined1[16])0x0;
   EditorFileDialog::base_property_helper._24_16_ = (undefined1[16])0x0;
   EditorFileDialog::base_property_helper._40_16_ = (undefined1[16])0x0;
   __cxa_atexit(PropertyListHelper::~PropertyListHelper, EditorFileDialog::base_property_helper, &__dso_handle, uStack_8);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* ScriptCreateDialog::~ScriptCreateDialog() */void ScriptCreateDialog::~ScriptCreateDialog(ScriptCreateDialog *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<String, DefaultAllocator>::~List() */void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ConfirmationDialog::~ConfirmationDialog() */void ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<String const&, String const&, bool, bool>::~MethodBindT() */void MethodBindT<String_const&,String_const&,bool,bool>::~MethodBindT(MethodBindT<String_const&,String_const&,bool,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ScriptCreateDialog, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ScriptCreateDialog,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ScriptCreateDialog,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ScriptCreateDialog, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ScriptCreateDialog,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ScriptCreateDialog,void,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ScriptCreateDialog, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ScriptCreateDialog,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ScriptCreateDialog,void,String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ScriptCreateDialog, void, bool, bool>::~CallableCustomMethodPointer()
    */void CallableCustomMethodPointer<ScriptCreateDialog,void,bool,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ScriptCreateDialog,void,bool,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */void HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator < HashMapElement<StringName,EditorHelpBit::HelpData>>>>> > *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */void HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


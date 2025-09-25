/* ExportTemplateManager::_install_file() */void ExportTemplateManager::_install_file(void) {
   FileDialog::popup_file_dialog();
   return;
}
/* ExportTemplateManager::_hide_dialog() */void ExportTemplateManager::_hide_dialog(void) {
   Window::hide();
   return;
}
/* ExportTemplateManager::ok_pressed() */void ExportTemplateManager::ok_pressed(ExportTemplateManager *this) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0xdb3] == (ExportTemplateManager)0x0) {
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Window::hide();
         return;
      }

   }
 else {
      Window::popup_centered(*(Vector2i**)( this + 0xe60 ));
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ExportTemplateManager::_cancel_template_download() */void ExportTemplateManager::_cancel_template_download(ExportTemplateManager *this) {
   if (this[0xdb3] == (ExportTemplateManager)0x0) {
      return;
   }

   HTTPRequest::cancel_request();
   CanvasItem::hide();
   CanvasItem::show();
   this[0xdb3] = (ExportTemplateManager)0x0;
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
/* ExportTemplateManager::_open_template_folder(String const&) */void ExportTemplateManager::_open_template_folder(String *param_1) {
   code *pcVar1;
   long lVar2;
   long *plVar3;
   long in_FS_OFFSET;
   long local_40;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   EditorPaths::get_export_templates_dir();
   plVar3 = (long*)OS::get_singleton();
   pcVar1 = *(code**)( *plVar3 + 0x158 );
   String::path_join((String*)&local_38);
   ( *pcVar1 )(plVar3, (String*)&local_38, 1);
   lVar2 = local_38;
   if (local_38 != 0) {
      LOCK();
      plVar3 = (long*)( local_38 + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         local_38 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_40 != 0) {
      LOCK();
      plVar3 = (long*)( local_40 + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         Memory::free_static((void*)( local_40 + -0x10 ), false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ExportTemplateManager::_set_current_progress_status(String const&, bool) */void ExportTemplateManager::_set_current_progress_status(ExportTemplateManager *this, String *param_1, bool param_2) {
   long lVar1;
   int iVar2;
   StringName *pSVar3;
   StringName *pSVar4;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   Label::set_text(*(String**)( this + 0xe18 ));
   if (param_2) {
      CanvasItem::hide();
      pSVar4 = *(StringName**)( this + 0xe18 );
      if (_set_current_progress_status(String_const & iVar2 = __cxa_guard_acquire(&_set_current_progress_status(String_const & sname)));if(iVar2 != 0) {
         _scs_create((char*)&_set_current_progress_status(String_const & sname, true));
         __cxa_atexit(StringName::~StringName, &_set_current_progress_status(String_const & ::sname, &__dso_handle));
         __cxa_guard_release (&_set_current_progress_status(String_const&,bool)::{lambda()#1}::
                             operator()()::sname);
      }

   }

   pSVar3 = (StringName*)&_set_current_progress_status(String_const & ::{lambda(), #1
   }
 else, {
         pSVar4 = *(StringName**)( this + 0xe18 );
         if (_set_current_progress_status(String_const & iVar2 = __cxa_guard_acquire(&_set_current_progress_status(String_const & sname)));if(iVar2 != 0) {
            _scs_create((char*)&_set_current_progress_status(String_const & sname, true));
            __cxa_atexit(StringName::~StringName, &_set_current_progress_status(String_const & ::sname, &__dso_handle));
            __cxa_guard_release (&_set_current_progress_status(String_const&,bool)::{lambda()#2}::
                             operator()()::sname);
         }

      }
, pSVar3 = (StringName*)( SceneStringNames::singleton + 0xb0 ));
}
Window::get_theme_color((StringName*)this, pSVar3);Control::add_theme_color_override(pSVar4, (Color*)( SceneStringNames::singleton + 0xb0 ));if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* ExportTemplateManager::_set_current_progress_value(float, String const&) */void ExportTemplateManager::_set_current_progress_value(float param_1, String *param_2) {
   CanvasItem::show();
   ProgressBar::set_indeterminate(SUB81(*(undefined8*)( param_2 + 0xe10 ), 0));
   Range::set_value((double)param_1);
   Label::set_text(*(String**)( param_2 + 0xe18 ));
   return;
}
/* ExportTemplateManager::_get_selected_mirror() const */ExportTemplateManager * __thiscall
ExportTemplateManager::_get_selected_mirror(ExportTemplateManager *this){
   int iVar1;
   long in_FS_OFFSET;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = OptionButton::get_item_count();
   if (iVar1 == 1) {
      *(undefined8*)this = 0;
      String::parse_latin1((StrRange*)this);
   }
 else {
      OptionButton::get_selected_id();
      OptionButton::get_item_metadata((int)local_38);
      Variant::operator_cast_to_String((Variant*)this);
      if (Variant::needs_deinit[local_38[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ExportTemplateManager::_uninstall_template(String const&) */void ExportTemplateManager::_uninstall_template(ExportTemplateManager *this, String *param_1) {
   long *plVar1;
   undefined8 uVar2;
   long lVar3;
   long lVar4;
   long in_FS_OFFSET;
   bool bVar5;
   undefined8 local_78;
   undefined8 local_70;
   String local_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = *(undefined8*)( this + 0xe48 );
   local_60 = 0;
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar3 = *plVar1;
         if (lVar3 == 0) goto LAB_001006a7;
         LOCK();
         lVar4 = *plVar1;
         bVar5 = lVar3 == lVar4;
         if (bVar5) {
            *plVar1 = lVar3 + 1;
            lVar4 = lVar3;
         }

         UNLOCK();
      }
 while ( !bVar5 );
      if (lVar4 != -1) {
         local_60 = *(undefined8*)param_1;
      }

   }

   LAB_001006a7:local_70 = 0;
   local_50 = 0;
   local_58 = "";
   String::parse_latin1((StrRange*)&local_70);
   local_58 = "Remove templates for the version \'%s\'?";
   local_78 = 0;
   local_50 = 0x26;
   String::parse_latin1((StrRange*)&local_78);
   TTR(local_68, (String*)&local_78);
   vformat<String>((CowData<char32_t>*)&local_58, local_68, (CowData<char32_t>*)&local_60);
   AcceptDialog::set_text(uVar2, (CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   local_48 = 0;
   Window::popup_centered(*(Vector2i**)( this + 0xe48 ));
   if (*(long*)( this + 0xe50 ) == *(long*)param_1) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0xe50 ), (CowData*)param_1);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ExportTemplateManager::_installed_table_button_cbk(Object*, int, int, MouseButton) */void ExportTemplateManager::_installed_table_button_cbk(ExportTemplateManager *this, long param_1, undefined8 param_3_00, int param_3, int param_5) {
   long lVar1;
   long in_FS_OFFSET;
   String aSStack_28[8];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_5 == 1 ) && ( param_1 != 0 )) {
      lVar1 = __dynamic_cast(param_1, &Object::typeinfo, &TreeItem::typeinfo, 0);
      if (lVar1 != 0) {
         if (param_3 == 0) {
            TreeItem::get_text((int)aSStack_28);
            _open_template_folder((String*)this);
            CowData<char32_t>::_unref((CowData<char32_t>*)aSStack_28);
         }
 else if (param_3 == 1) {
            TreeItem::get_text((int)aSStack_28);
            _uninstall_template(this, aSStack_28);
            CowData<char32_t>::_unref((CowData<char32_t>*)aSStack_28);
         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ExportTemplateManager::_mirror_options_button_cbk(int) */void ExportTemplateManager::_mirror_options_button_cbk(ExportTemplateManager *this, int param_1) {
   String *pSVar1;
   long *plVar2;
   long in_FS_OFFSET;
   long local_88;
   undefined8 local_80;
   undefined8 local_78;
   String local_70[8];
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      _get_selected_mirror((ExportTemplateManager*)&local_88);
      if (( local_88 != 0 ) && ( 1 < *(uint*)( local_88 + -8 ) )) {
         plVar2 = (long*)OS::get_singleton();
         ( **(code**)( *plVar2 + 0x150 ) )(plVar2, (ExportTemplateManager*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         goto LAB_00100a47;
      }

   }
 else {
      if (param_1 != 1) goto LAB_00100a47;
      _get_selected_mirror((ExportTemplateManager*)&local_88);
      if (( local_88 != 0 ) && ( 1 < *(uint*)( local_88 + -8 ) )) {
         ( **(code**)( *DisplayServer::singleton + 0x3b0 ) )(DisplayServer::singleton, (ExportTemplateManager*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         goto LAB_00100a47;
      }

   }

   pSVar1 = EditorNode::singleton;
   local_60 = 0;
   local_58 = "";
   local_50 = 0;
   String::parse_latin1((StrRange*)&local_60);
   local_58 = "Warning!";
   local_68 = 0;
   local_50 = 8;
   String::parse_latin1((StrRange*)&local_68);
   TTR(local_70, (String*)&local_68);
   local_58 = "";
   local_78 = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)&local_78);
   local_58 = "There are no mirrors available.";
   local_80 = 0;
   local_50 = 0x1f;
   String::parse_latin1((StrRange*)&local_80);
   TTR((String*)&local_58, (String*)&local_80);
   EditorNode::show_warning(pSVar1, (String*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   LAB_00100a47:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ExportTemplateManager::get_android_build_directory(Ref<EditorExportPreset> const&) */ExportTemplateManager * __thiscall
ExportTemplateManager::get_android_build_directory(ExportTemplateManager *this,Ref *param_1){
   bool *pbVar1;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   pbVar1 = *(bool**)param_1;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (pbVar1 != (bool*)0x0) {
      StringName::StringName((StringName*)&local_58, "gradle_build/gradle_build_directory", false);
      Object::get((StringName*)local_48, pbVar1);
      Variant::operator_cast_to_String((Variant*)&local_68);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      if (( local_68 != 0 ) && ( 1 < *(uint*)( local_68 + -8 ) )) {
         local_60 = 0;
         local_58 = "build";
         local_50 = 5;
         String::parse_latin1((StrRange*)&local_60);
         String::path_join((String*)this);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         goto LAB_00100bbf;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   }

   *(undefined8*)this = 0;
   local_58 = "res://android/build";
   local_50 = 0x13;
   String::parse_latin1((StrRange*)this);
   LAB_00100bbf:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ExportTemplateManager::is_android_template_installed(Ref<EditorExportPreset> const&) */ulong ExportTemplateManager::is_android_template_installed(ExportTemplateManager *this, Ref *param_1) {
   long *plVar1;
   long lVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   get_android_build_directory((ExportTemplateManager*)&local_18, param_1);
   uVar3 = DirAccess::exists((String*)&local_18);
   lVar2 = local_18;
   if (local_18 != 0) {
      LOCK();
      plVar1 = (long*)( local_18 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_18 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         uVar3 = uVar3 & 0xff;
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ExportTemplateManager::get_android_source_zip(Ref<EditorExportPreset> const&) */ExportTemplateManager * __thiscall
ExportTemplateManager::get_android_source_zip(ExportTemplateManager *this,Ref *param_1){
   bool *pbVar1;
   long in_FS_OFFSET;
   String local_70[8];
   CowData<char32_t> local_68[8];
   long local_60;
   char *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   pbVar1 = *(bool**)param_1;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (pbVar1 != (bool*)0x0) {
      StringName::StringName((StringName*)&local_58, "gradle_build/android_source_template", false);
      Object::get((StringName*)local_48, pbVar1);
      Variant::operator_cast_to_String((Variant*)&local_60);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      if (( local_60 != 0 ) && ( 1 < *(uint*)( local_60 + -8 ) )) {
         *(long*)this = local_60;
         goto LAB_00100e3c;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   EditorPaths::get_export_templates_dir();
   local_58 = "4.4.1.stable";
   local_60 = 0;
   local_50 = 0xc;
   String::parse_latin1((StrRange*)&local_60);
   String::path_join(local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref(local_68);
   local_58 = "android_source.zip";
   local_60 = 0;
   local_50 = 0x12;
   String::parse_latin1((StrRange*)&local_60);
   String::path_join((String*)this);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
   LAB_00100e3c:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* ExportTemplateManager::can_install_android_template(Ref<EditorExportPreset> const&) */ulong ExportTemplateManager::can_install_android_template(ExportTemplateManager *this, Ref *param_1) {
   long *plVar1;
   long lVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   get_android_source_zip((ExportTemplateManager*)&local_18, param_1);
   uVar3 = FileAccess::exists((String*)&local_18);
   lVar2 = local_18;
   if (local_18 != 0) {
      LOCK();
      plVar1 = (long*)( local_18 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_18 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         uVar3 = uVar3 & 0xff;
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ExportTemplateManager::get_android_template_identifier(Ref<EditorExportPreset> const&) */ExportTemplateManager * __thiscall
ExportTemplateManager::get_android_template_identifier(ExportTemplateManager *this,Ref *param_1){
   bool *pbVar1;
   long in_FS_OFFSET;
   long local_90;
   undefined8 local_88;
   String local_80[8];
   String local_78[8];
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   pbVar1 = *(bool**)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (pbVar1 != (bool*)0x0) {
      StringName::StringName((StringName*)&local_68, "gradle_build/android_source_template", false);
      Object::get((StringName*)local_58, pbVar1);
      Variant::operator_cast_to_String((Variant*)&local_90);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

      if (( local_90 != 0 ) && ( 1 < *(uint*)( local_90 + -8 ) )) {
         local_70 = 0;
         local_68 = "]";
         local_60 = 1;
         String::parse_latin1((StrRange*)&local_70);
         FileAccess::get_md5(local_78);
         local_68 = " [";
         local_88 = 0;
         local_60 = 2;
         String::parse_latin1((StrRange*)&local_88);
         String::operator +(local_80, (String*)&local_90);
         String::operator +((String*)&local_68, local_80);
         String::operator +((String*)this, (String*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         goto LAB_00101006;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   }

   *(undefined8*)this = 0;
   local_68 = "4.4.1.stable";
   local_60 = 0xc;
   String::parse_latin1((StrRange*)this);
   LAB_00101006:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ExportTemplateManager::ExportTemplateManager() */void ExportTemplateManager::ExportTemplateManager(ExportTemplateManager *this) {
   StringName *pSVar1;
   String *pSVar2;
   code *pcVar3;
   Vector2 *pVVar4;
   BoxContainer *this_00;
   BoxContainer *pBVar5;
   Label *pLVar6;
   LineEdit *this_01;
   Button *pBVar7;
   HSeparator *pHVar8;
   BoxContainer *pBVar9;
   OptionButton *this_02;
   HTTPRequest *pHVar10;
   MenuButton *this_03;
   undefined8 uVar11;
   long *plVar12;
   CallableCustom *pCVar13;
   LinkButton *this_04;
   ProgressBar *this_05;
   Tree *this_06;
   ConfirmationDialog *this_07;
   FileDialog *this_08;
   AcceptDialog *this_09;
   long in_FS_OFFSET;
   float fVar14;
   undefined8 local_c8;
   long local_c0;
   long local_b8[2];
   char *local_a8;
   undefined8 local_a0;
   Variant *local_98[4];
   undefined8 local_78[3];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   AcceptDialog::AcceptDialog((AcceptDialog*)this);
   *(undefined***)this = &PTR__initialize_classv_001156d8;
   *(undefined8*)( this + 0xdb0 ) = 0;
   for (int i = 0; i < 11; i++) {
      *(undefined1(*) [16])( this + ( 16 * i + 3512 ) ) = (undefined1[16])0;
   }

   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "");
   local_b8[0] = 0;
   String::parse_latin1((String*)local_b8, "Export Template Manager");
   TTR((String*)&local_c0, (String*)local_b8);
   Window::set_title((String*)this);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   AcceptDialog::set_hide_on_ok(SUB81(this, 0));
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "");
   local_b8[0] = 0;
   String::parse_latin1((String*)local_b8, "Close");
   TTR((String*)&local_c0, (String*)local_b8);
   AcceptDialog::set_ok_button_text(this, (String*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   this_00 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(this_00, true);
   this_00[0xa0c] = (BoxContainer)0x1;
   *(undefined***)this_00 = &PTR__initialize_classv_00115188;
   postinitialize_handler((Object*)this_00);
   Node::add_child(this, this_00, 0, 0);
   pBVar5 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar5, false);
   pBVar5[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar5 = &PTR__initialize_classv_00114e10;
   postinitialize_handler((Object*)pBVar5);
   Node::add_child(this_00, pBVar5, 0, 0);
   pLVar6 = (Label*)operator_new(0xad8, "");
   local_a8 = (char*)0x0;
   Label::Label(pLVar6, (String*)&local_a8);
   postinitialize_handler((Object*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   StringName::StringName((StringName*)&local_a8, "HeaderSmall", false);
   Control::set_theme_type_variation((StringName*)pLVar6);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "");
   local_b8[0] = 0;
   String::parse_latin1((String*)local_b8, "Current Version:");
   TTR((String*)&local_c0, (String*)local_b8);
   Label::set_text((String*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   Node::add_child(pBVar5, pLVar6, 0, 0);
   pLVar6 = (Label*)operator_new(0xad8, "");
   local_a8 = (char*)0x0;
   Label::Label(pLVar6, (String*)&local_a8);
   postinitialize_handler((Object*)pLVar6);
   *(Label**)( this + 0xdb8 ) = pLVar6;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   Node::add_child(pBVar5, *(undefined8*)( this + 0xdb8 ), 0, 0);
   pLVar6 = (Label*)operator_new(0xad8, "");
   local_a8 = (char*)0x0;
   Label::Label(pLVar6, (String*)&local_a8);
   postinitialize_handler((Object*)pLVar6);
   *(Label**)( this + 0xdc0 ) = pLVar6;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   pSVar1 = *(StringName**)( this + 0xdc0 );
   StringName::StringName((StringName*)&local_a8, "HeaderSmall", false);
   Control::set_theme_type_variation(pSVar1);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   Control::set_h_size_flags(*(undefined8*)( this + 0xdc0 ), 3);
   Label::set_horizontal_alignment(*(undefined8*)( this + 0xdc0 ), 2);
   Node::add_child(pBVar5, *(undefined8*)( this + 0xdc0 ), 0, 0);
   pLVar6 = (Label*)operator_new(0xad8, "");
   local_a8 = (char*)0x0;
   Label::Label(pLVar6, (String*)&local_a8);
   postinitialize_handler((Object*)pLVar6);
   *(Label**)( this + 0xdc8 ) = pLVar6;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   pSVar1 = *(StringName**)( this + 0xdc8 );
   StringName::StringName((StringName*)&local_a8, "HeaderSmall", false);
   Control::set_theme_type_variation(pSVar1);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   Control::set_h_size_flags(*(undefined8*)( this + 0xdc8 ), 3);
   Label::set_horizontal_alignment(*(undefined8*)( this + 0xdc8 ), 2);
   pSVar2 = *(String**)( this + 0xdc8 );
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "");
   local_b8[0] = 0;
   String::parse_latin1((String*)local_b8, "Export templates are installed and ready to be used.");
   TTR((String*)&local_c0, (String*)local_b8);
   Label::set_text(pSVar2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   Node::add_child(pBVar5, *(undefined8*)( this + 0xdc8 ), 0, 0);
   CanvasItem::hide();
   pBVar5 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar5, false);
   pBVar5[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar5 = &PTR__initialize_classv_00114e10;
   postinitialize_handler((Object*)pBVar5);
   *(BoxContainer**)( this + 0xdd0 ) = pBVar5;
   Node::add_child(this_00, pBVar5, 0, 0);
   this_01 = (LineEdit*)operator_new(0xbb0, "");
   local_a8 = (char*)0x0;
   LineEdit::LineEdit(this_01, (String*)&local_a8);
   postinitialize_handler((Object*)this_01);
   *(LineEdit**)( this + 0xdd8 ) = this_01;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   LineEdit::set_editable(SUB81(*(undefined8*)( this + 0xdd8 ), 0));
   Control::set_h_size_flags(*(undefined8*)( this + 0xdd8 ), 3);
   Node::add_child(*(undefined8*)( this + 0xdd0 ), *(undefined8*)( this + 0xdd8 ), 0, 0);
   pBVar7 = (Button*)operator_new(0xc10, "");
   local_a8 = (char*)0x0;
   Button::Button(pBVar7, (String*)&local_a8);
   postinitialize_handler((Object*)pBVar7);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "");
   local_b8[0] = 0;
   String::parse_latin1((String*)local_b8, "Open Folder");
   TTR((String*)&local_c0, (String*)local_b8);
   Button::set_text((String*)pBVar7);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "");
   local_b8[0] = 0;
   String::parse_latin1((String*)local_b8, "Open the folder containing installed templates for the current version.");
   TTR((String*)&local_c0, (String*)local_b8);
   Control::set_tooltip_text((String*)pBVar7);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   Node::add_child(*(undefined8*)( this + 0xdd0 ), pBVar7, 0, 0);
   pcVar3 = *(code**)( *(long*)pBVar7 + 0x108 );
   create_custom_callable_function_pointer<ExportTemplateManager,String_const&>((ExportTemplateManager*)&local_a8, (char*)this, (_func_void_String_ptr*)"&ExportTemplateManager::_open_template_folder");
   Callable::bind<char_const*>((char*)local_b8);
   ( *pcVar3 )(pBVar7, SceneStringNames::singleton + 0x238, (String*)local_b8, 0);
   Callable::~Callable((Callable*)local_b8);
   Callable::~Callable((Callable*)&local_a8);
   pBVar7 = (Button*)operator_new(0xc10, "");
   local_a8 = (char*)0x0;
   Button::Button(pBVar7, (String*)&local_a8);
   postinitialize_handler((Object*)pBVar7);
   *(Button**)( this + 0xde0 ) = pBVar7;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   pSVar2 = *(String**)( this + 0xde0 );
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "");
   local_b8[0] = 0;
   String::parse_latin1((String*)local_b8, "Uninstall");
   TTR((String*)&local_c0, (String*)local_b8);
   Button::set_text(pSVar2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   pSVar2 = *(String**)( this + 0xde0 );
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "");
   local_b8[0] = 0;
   String::parse_latin1((String*)local_b8, "Uninstall templates for the current version.");
   TTR((String*)&local_c0, (String*)local_b8);
   Control::set_tooltip_text(pSVar2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   Node::add_child(*(undefined8*)( this + 0xdd0 ), *(undefined8*)( this + 0xde0 ), 0, 0);
   plVar12 = *(long**)( this + 0xde0 );
   pcVar3 = *(code**)( *plVar12 + 0x108 );
   create_custom_callable_function_pointer<ExportTemplateManager,String_const&>((ExportTemplateManager*)&local_a8, (char*)this, (_func_void_String_ptr*)"&ExportTemplateManager::_uninstall_template");
   Callable::bind<char_const*>((char*)local_b8);
   ( *pcVar3 )(plVar12, SceneStringNames::singleton + 0x238, (String*)local_b8, 0);
   Callable::~Callable((Callable*)local_b8);
   Callable::~Callable((Callable*)&local_a8);
   pHVar8 = (HSeparator*)operator_new(0x9e0, "");
   HSeparator::HSeparator(pHVar8);
   postinitialize_handler((Object*)pHVar8);
   Node::add_child(this_00, pHVar8, 0, 0);
   pBVar5 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar5, false);
   pBVar5[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar5 = &PTR__initialize_classv_00114e10;
   postinitialize_handler((Object*)pBVar5);
   Node::add_child(this_00, pBVar5, 0, 0);
   pBVar9 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar9, true);
   pBVar9[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar9 = &PTR__initialize_classv_00115188;
   postinitialize_handler((Object*)pBVar9);
   *(BoxContainer**)( this + 0xde8 ) = pBVar9;
   Control::set_h_size_flags(pBVar9, 3);
   Node::add_child(pBVar5, *(undefined8*)( this + 0xde8 ), 0, 0);
   pBVar9 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar9, false);
   pBVar9[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar9 = &PTR__initialize_classv_00114e10;
   postinitialize_handler((Object*)pBVar9);
   Node::add_child(*(undefined8*)( this + 0xde8 ), pBVar9, 0, 0);
   pLVar6 = (Label*)operator_new(0xad8, "");
   local_a8 = (char*)0x0;
   Label::Label(pLVar6, (String*)&local_a8);
   postinitialize_handler((Object*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "");
   local_b8[0] = 0;
   String::parse_latin1((String*)local_b8, "Download from:");
   TTR((String*)&local_c0, (String*)local_b8);
   Label::set_text((String*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   Node::add_child(pBVar9, pLVar6, 0, 0);
   this_02 = (OptionButton*)operator_new(0xd00, "");
   local_a8 = (char*)0x0;
   OptionButton::OptionButton(this_02, (String*)&local_a8);
   postinitialize_handler((Object*)this_02);
   *(OptionButton**)( this + 0xdf0 ) = this_02;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   pVVar4 = *(Vector2**)( this + 0xdf0 );
   fVar14 = (float)EditorScale::get_scale();
   local_78[0] = CONCAT44(fVar14 * _LC52._4_4_, fVar14 * (float)_LC52);
   Control::set_custom_minimum_size(pVVar4);
   Node::add_child(pBVar9, *(undefined8*)( this + 0xdf0 ), 0, 0);
   pHVar10 = (HTTPRequest*)operator_new(0x4f0, "");
   HTTPRequest::HTTPRequest(pHVar10);
   postinitialize_handler((Object*)pHVar10);
   *(HTTPRequest**)( this + 0xe38 ) = pHVar10;
   Node::add_child(*(undefined8*)( this + 0xdf0 ), pHVar10, 0, 0);
   plVar12 = *(long**)( this + 0xe38 );
   pcVar3 = *(code**)( *plVar12 + 0x108 );
   create_custom_callable_function_pointer<ExportTemplateManager,int,int,Vector<String>const&,Vector<unsigned_char>const&>((ExportTemplateManager*)&local_a8, (char*)this, (_func_void_int_int_Vector_ptr_Vector_ptr*)"&ExportTemplateManager::_refresh_mirrors_completed");
   StringName::StringName((StringName*)local_b8, "request_completed", false);
   ( *pcVar3 )(plVar12, (String*)local_b8, (String*)&local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_b8[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_a8);
   this_03 = (MenuButton*)operator_new(0xc68, "");
   local_a8 = (char*)0x0;
   MenuButton::MenuButton(this_03, (String*)&local_a8);
   postinitialize_handler((Object*)this_03);
   *(MenuButton**)( this + 0xdf8 ) = this_03;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   uVar11 = MenuButton::get_popup();
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "");
   local_b8[0] = 0;
   String::parse_latin1((String*)local_b8, "Open in Web Browser");
   TTR((String*)&local_c0, (String*)local_b8);
   PopupMenu::add_item(uVar11, (String*)&local_c0, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   uVar11 = MenuButton::get_popup();
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "");
   local_b8[0] = 0;
   String::parse_latin1((String*)local_b8, "Copy Mirror URL");
   TTR((String*)&local_c0, (String*)local_b8);
   PopupMenu::add_item(uVar11, (String*)&local_c0, 1, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   Node::add_child(pBVar9, *(undefined8*)( this + 0xdf8 ), 0, 0);
   plVar12 = (long*)MenuButton::get_popup();
   pcVar3 = *(code**)( *plVar12 + 0x108 );
   pCVar13 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar13);
   *(ExportTemplateManager**)( pCVar13 + 0x28 ) = this;
   *(undefined1(*) [16])( pCVar13 + 0x30 ) = (undefined1[16])0x0;
   *(undefined**)( pCVar13 + 0x20 ) = &_LC15;
   *(undefined8*)( pCVar13 + 0x40 ) = 0;
   uVar11 = *(undefined8*)( this + 0x60 );
   *(undefined***)pCVar13 = &PTR_hash_00115a70;
   *(undefined8*)( pCVar13 + 0x30 ) = uVar11;
   *(code**)( pCVar13 + 0x38 ) = _mirror_options_button_cbk;
   *(undefined8*)( pCVar13 + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar13, (int)pCVar13 + 0x28);
   *(char**)( pCVar13 + 0x20 ) = "ExportTemplateManager::_mirror_options_button_cbk";
   Callable::Callable((Callable*)&local_a8, pCVar13);
   ( *pcVar3 )(plVar12, SceneStringNames::singleton + 0x240, (String*)&local_a8, 0);
   Callable::~Callable((Callable*)&local_a8);
   BoxContainer::add_spacer(SUB81(pBVar9, 0));
   pBVar7 = (Button*)operator_new(0xc10, "");
   local_a8 = (char*)0x0;
   Button::Button(pBVar7, (String*)&local_a8);
   postinitialize_handler((Object*)pBVar7);
   *(Button**)( this + 0xe30 ) = pBVar7;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   pSVar2 = *(String**)( this + 0xe30 );
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "");
   local_b8[0] = 0;
   String::parse_latin1((String*)local_b8, "Download and Install");
   TTR((String*)&local_c0, (String*)local_b8);
   Button::set_text(pSVar2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   pSVar2 = *(String**)( this + 0xe30 );
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "");
   local_b8[0] = 0;
   String::parse_latin1((String*)local_b8, "Download and install templates for the current version from the best possible mirror.");
   TTR((String*)&local_c0, (String*)local_b8);
   Control::set_tooltip_text(pSVar2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   Node::add_child(pBVar9, *(undefined8*)( this + 0xe30 ), 0, 0);
   plVar12 = *(long**)( this + 0xe30 );
   pcVar3 = *(code**)( *plVar12 + 0x108 );
   create_custom_callable_function_pointer<ExportTemplateManager>((ExportTemplateManager*)&local_a8, (char*)this, (_func_void*)"&ExportTemplateManager::_download_current");
   ( *pcVar3 )(plVar12, SceneStringNames::singleton + 0x238, (String*)&local_a8, 0);
   Callable::~Callable((Callable*)&local_a8);
   pBVar9 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar9, false);
   pBVar9[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar9 = &PTR__initialize_classv_00114e10;
   postinitialize_handler((Object*)pBVar9);
   BoxContainer::set_alignment(pBVar9, 2);
   Node::add_child(*(undefined8*)( this + 0xde8 ), pBVar9, 0, 0);
   pBVar7 = (Button*)operator_new(0xc10, "");
   local_a8 = (char*)0x0;
   Button::Button(pBVar7, (String*)&local_a8);
   postinitialize_handler((Object*)pBVar7);
   *(Button**)( this + 0xe28 ) = pBVar7;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   pSVar2 = *(String**)( this + 0xe28 );
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "");
   local_b8[0] = 0;
   String::parse_latin1((String*)local_b8, "Install from File");
   TTR((String*)&local_c0, (String*)local_b8);
   Button::set_text(pSVar2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   local_a8 = "";
   pSVar2 = *(String**)( this + 0xe28 );
   local_b8[0] = 0;
   local_a0 = 0;
   String::parse_latin1((StrRange*)local_b8);
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "Install templates from a local file.");
   TTR((String*)&local_c0, (String*)&local_a8);
   Control::set_tooltip_text(pSVar2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   Node::add_child(pBVar9, *(undefined8*)( this + 0xe28 ), 0, 0);
   plVar12 = *(long**)( this + 0xe28 );
   pcVar3 = *(code**)( *plVar12 + 0x108 );
   create_custom_callable_function_pointer<ExportTemplateManager>((ExportTemplateManager*)&local_a8, (char*)this, (_func_void*)"&ExportTemplateManager::_install_file");
   ( *pcVar3 )(plVar12, SceneStringNames::singleton + 0x238, (String*)&local_a8, 0);
   Callable::~Callable((Callable*)&local_a8);
   pBVar9 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar9, false);
   pBVar9[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar9 = &PTR__initialize_classv_00114e10;
   postinitialize_handler((Object*)pBVar9);
   *(BoxContainer**)( this + 0xe00 ) = pBVar9;
   Node::add_child(*(undefined8*)( this + 0xde8 ), pBVar9, 0, 0);
   pLVar6 = (Label*)operator_new(0xad8, "");
   local_a8 = (char*)0x0;
   Label::Label(pLVar6, (String*)&local_a8);
   postinitialize_handler((Object*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   local_b8[0] = 0;
   String::parse_latin1((String*)local_b8, "");
   local_a8 = "Online mode is needed to download the templates.";
   local_c0 = 0;
   local_a0 = 0x30;
   String::parse_latin1((StrRange*)&local_c0);
   TTR((String*)&local_a8, (String*)&local_c0);
   Label::set_text((String*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   Node::add_child(*(undefined8*)( this + 0xe00 ), pLVar6, 0, 0);
   this_04 = (LinkButton*)operator_new(0xb10, "");
   local_a8 = (char*)0x0;
   LinkButton::LinkButton(this_04, (String*)&local_a8);
   postinitialize_handler((Object*)this_04);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   Control::set_v_size_flags(this_04, 4);
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "");
   local_b8[0] = 0;
   String::parse_latin1((String*)local_b8, "Go Online");
   TTR((String*)&local_c0, (String*)local_b8);
   LinkButton::set_text((String*)this_04);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   Node::add_child(*(undefined8*)( this + 0xe00 ), this_04, 0, 0);
   pcVar3 = *(code**)( *(long*)this_04 + 0x108 );
   create_custom_callable_function_pointer<ExportTemplateManager>((ExportTemplateManager*)&local_a8, (char*)this, (_func_void*)"&ExportTemplateManager::_force_online_mode");
   ( *pcVar3 )(this_04, SceneStringNames::singleton + 0x238, (String*)&local_a8);
   Callable::~Callable((Callable*)&local_a8);
   pBVar9 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar9, false);
   pBVar9[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar9 = &PTR__initialize_classv_00114e10;
   postinitialize_handler((Object*)pBVar9);
   *(BoxContainer**)( this + 0xe08 ) = pBVar9;
   Control::set_h_size_flags(pBVar9, 3);
   Node::add_child(pBVar5, *(undefined8*)( this + 0xe08 ), 0, 0);
   CanvasItem::hide();
   this_05 = (ProgressBar*)operator_new(0xa48, "");
   ProgressBar::ProgressBar(this_05);
   postinitialize_handler((Object*)this_05);
   *(ProgressBar**)( this + 0xe10 ) = this_05;
   Control::set_h_size_flags(this_05, 3);
   Control::set_v_size_flags(*(undefined8*)( this + 0xe10 ), 4);
   Range::set_min(0.0);
   Range::set_max(_LC68);
   Range::set_value(0.0);
   Range::set_step(_LC69);
   ProgressBar::set_editor_preview_indeterminate(SUB81(*(undefined8*)( this + 0xe10 ), 0));
   Node::add_child(*(undefined8*)( this + 0xe08 ), *(undefined8*)( this + 0xe10 ), 0, 0);
   pLVar6 = (Label*)operator_new(0xad8, "");
   local_a8 = (char*)0x0;
   Label::Label(pLVar6, (String*)&local_a8);
   postinitialize_handler((Object*)pLVar6);
   *(Label**)( this + 0xe18 ) = pLVar6;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   Control::set_h_size_flags(*(undefined8*)( this + 0xe18 ), 3);
   Node::add_child(*(undefined8*)( this + 0xe08 ), *(undefined8*)( this + 0xe18 ), 0, 0);
   pBVar7 = (Button*)operator_new(0xc10, "");
   local_a8 = (char*)0x0;
   Button::Button(pBVar7, (String*)&local_a8);
   postinitialize_handler((Object*)pBVar7);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "");
   local_b8[0] = 0;
   String::parse_latin1((String*)local_b8, "Cancel");
   TTR((String*)&local_c0, (String*)local_b8);
   Button::set_text((String*)pBVar7);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "");
   local_b8[0] = 0;
   String::parse_latin1((String*)local_b8, "Cancel the download of the templates.");
   TTR((String*)&local_c0, (String*)local_b8);
   Control::set_tooltip_text((String*)pBVar7);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   Node::add_child(*(undefined8*)( this + 0xe08 ), pBVar7, 0, 0);
   pcVar3 = *(code**)( *(long*)pBVar7 + 0x108 );
   create_custom_callable_function_pointer<ExportTemplateManager>((ExportTemplateManager*)&local_a8, (char*)this, (_func_void*)"&ExportTemplateManager::_cancel_template_download");
   ( *pcVar3 )(pBVar7, SceneStringNames::singleton + 0x238, (String*)&local_a8);
   Callable::~Callable((Callable*)&local_a8);
   pHVar10 = (HTTPRequest*)operator_new(0x4f0, "");
   HTTPRequest::HTTPRequest(pHVar10);
   postinitialize_handler((Object*)pHVar10);
   *(HTTPRequest**)( this + 0xe20 ) = pHVar10;
   Node::add_child(pBVar5, pHVar10, 0, 0);
   plVar12 = *(long**)( this + 0xe20 );
   pcVar3 = *(code**)( *plVar12 + 0x108 );
   create_custom_callable_function_pointer<ExportTemplateManager,int,int,Vector<String>const&,Vector<unsigned_char>const&>((ExportTemplateManager*)&local_a8, (char*)this, (_func_void_int_int_Vector_ptr_Vector_ptr*)"&ExportTemplateManager::_download_template_completed");
   StringName::StringName((StringName*)local_b8, "request_completed", false);
   ( *pcVar3 )(plVar12, (String*)local_b8, (String*)&local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_b8[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_a8);
   pHVar8 = (HSeparator*)operator_new(0x9e0, "");
   HSeparator::HSeparator(pHVar8);
   postinitialize_handler((Object*)pHVar8);
   Node::add_child(this_00, pHVar8, 0, 0);
   pBVar5 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar5, false);
   pBVar5[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar5 = &PTR__initialize_classv_00114e10;
   postinitialize_handler((Object*)pBVar5);
   Node::add_child(this_00, pBVar5, 0, 0);
   pLVar6 = (Label*)operator_new(0xad8, "");
   local_a8 = (char*)0x0;
   Label::Label(pLVar6, (String*)&local_a8);
   postinitialize_handler((Object*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   StringName::StringName((StringName*)&local_a8, "HeaderSmall", false);
   Control::set_theme_type_variation((StringName*)pLVar6);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "");
   local_b8[0] = 0;
   String::parse_latin1((String*)local_b8, "Other Installed Versions:");
   TTR((String*)&local_c0, (String*)local_b8);
   Label::set_text((String*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   Node::add_child(pBVar5, pLVar6, 0, 0);
   this_06 = (Tree*)operator_new(0xdc8, "");
   Tree::Tree(this_06);
   postinitialize_handler((Object*)this_06);
   *(Tree**)( this + 0xe40 ) = this_06;
   Node::set_auto_translate_mode(this_06, 2);
   Tree::set_hide_root(SUB81(*(undefined8*)( this + 0xe40 ), 0));
   pVVar4 = *(Vector2**)( this + 0xe40 );
   fVar14 = (float)EditorScale::get_scale();
   local_78[0] = CONCAT44(fVar14 * _LC75._4_4_, fVar14 * (float)_LC75);
   Control::set_custom_minimum_size(pVVar4);
   Control::set_v_size_flags(*(undefined8*)( this + 0xe40 ), 3);
   Node::add_child(this_00, *(undefined8*)( this + 0xe40 ), 0, 0);
   plVar12 = *(long**)( this + 0xe40 );
   pcVar3 = *(code**)( *plVar12 + 0x108 );
   pCVar13 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar13);
   *(ExportTemplateManager**)( pCVar13 + 0x28 ) = this;
   *(undefined1(*) [16])( pCVar13 + 0x30 ) = (undefined1[16])0x0;
   *(undefined**)( pCVar13 + 0x20 ) = &_LC15;
   *(undefined***)pCVar13 = &PTR_hash_00115b90;
   *(undefined8*)( pCVar13 + 0x40 ) = 0;
   uVar11 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( pCVar13 + 0x10 ) = 0;
   *(undefined8*)( pCVar13 + 0x30 ) = uVar11;
   *(code**)( pCVar13 + 0x38 ) = _installed_table_button_cbk;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar13, (int)pCVar13 + 0x28);
   *(char**)( pCVar13 + 0x20 ) = "ExportTemplateManager::_installed_table_button_cbk";
   Callable::Callable((Callable*)&local_a8, pCVar13);
   StringName::StringName((StringName*)local_b8, "button_clicked", false);
   ( *pcVar3 )(plVar12, (String*)local_b8, (String*)&local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_b8[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_a8);
   this_07 = (ConfirmationDialog*)operator_new(0xdb8, "");
   ConfirmationDialog::ConfirmationDialog(this_07);
   postinitialize_handler((Object*)this_07);
   *(ConfirmationDialog**)( this + 0xe48 ) = this_07;
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "");
   local_b8[0] = 0;
   String::parse_latin1((String*)local_b8, "Uninstall Template");
   TTR((String*)&local_c0, (String*)local_b8);
   Window::set_title((String*)this_07);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   Node::add_child(this, *(undefined8*)( this + 0xe48 ), 0, 0);
   plVar12 = *(long**)( this + 0xe48 );
   pcVar3 = *(code**)( *plVar12 + 0x108 );
   create_custom_callable_function_pointer<ExportTemplateManager>((ExportTemplateManager*)&local_a8, (char*)this, (_func_void*)"&ExportTemplateManager::_uninstall_template_confirmed");
   ( *pcVar3 )(plVar12, SceneStringNames::singleton + 0x268, (String*)&local_a8);
   Callable::~Callable((Callable*)&local_a8);
   this_08 = (FileDialog*)operator_new(0x1028, "");
   FileDialog::FileDialog(this_08);
   postinitialize_handler((Object*)this_08);
   *(FileDialog**)( this + 0xe58 ) = this_08;
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "");
   local_b8[0] = 0;
   String::parse_latin1((String*)local_b8, "Select Template File");
   TTR((String*)&local_c0, (String*)local_b8);
   Window::set_title((String*)this_08);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   FileDialog::set_access(*(undefined8*)( this + 0xe58 ), 2);
   FileDialog::set_file_mode(*(undefined8*)( this + 0xe58 ), 0);
   pSVar2 = *(String**)( this + 0xe58 );
   Variant::Variant((Variant*)local_78, "");
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "_export_template_download_directory");
   _EDITOR_DEF((String*)local_98, (Variant*)&local_a8, SUB81((Variant*)local_78, 0), false);
   Variant::operator_cast_to_String((Variant*)local_b8);
   FileDialog::set_current_dir(pSVar2);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   if (Variant::needs_deinit[(int)local_98[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   pSVar2 = *(String**)( this + 0xe58 );
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "");
   local_b8[0] = 0;
   String::parse_latin1((String*)local_b8, "Godot Export Templates");
   TTR((String*)&local_c0, (String*)local_b8);
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "*.tpz");
   FileDialog::add_filter(pSVar2, (String*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   plVar12 = *(long**)( this + 0xe58 );
   pcVar3 = *(code**)( *plVar12 + 0x108 );
   pCVar13 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar13);
   *(undefined1(*) [16])( pCVar13 + 0x30 ) = (undefined1[16])0x0;
   *(undefined**)( pCVar13 + 0x20 ) = &_LC15;
   *(undefined8*)( pCVar13 + 0x40 ) = 0;
   uVar11 = *(undefined8*)( this + 0x60 );
   *(undefined***)pCVar13 = &PTR_hash_00115c20;
   *(undefined8*)( pCVar13 + 0x30 ) = uVar11;
   *(code**)( pCVar13 + 0x38 ) = _install_file_selected;
   *(undefined8*)( pCVar13 + 0x10 ) = 0;
   *(ExportTemplateManager**)( pCVar13 + 0x28 ) = this;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar13, (int)pCVar13 + 0x28);
   *(char**)( pCVar13 + 0x20 ) = "ExportTemplateManager::_install_file_selected";
   Callable::Callable((Callable*)&local_a8, pCVar13);
   Variant::Variant((Variant*)local_78, false);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   local_98[0] = (Variant*)local_78;
   Callable::bindp((Variant**)local_b8, (int)(String*)&local_a8);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   StringName::StringName((StringName*)&local_c0, "file_selected", false);
   ( *pcVar3 )(plVar12, (String*)&local_c0, (String*)local_b8, 0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)local_b8);
   Callable::~Callable((Callable*)&local_a8);
   Node::add_child(this, *(undefined8*)( this + 0xe58 ), 0, 0);
   this_09 = (AcceptDialog*)operator_new(0xdb0, "");
   AcceptDialog::AcceptDialog(this_09);
   postinitialize_handler((Object*)this_09);
   *(AcceptDialog**)( this + 0xe60 ) = this_09;
   local_a8 = (char*)0x0;
   String::parse_latin1((String*)&local_a8, "");
   local_b8[0] = 0;
   String::parse_latin1((String*)local_b8, "The templates will continue to download.\nYou may experience a short editor freeze when they finish.");
   TTR((String*)&local_c0, (String*)local_b8);
   AcceptDialog::set_text(this_09, (String*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   Node::add_child(this, *(undefined8*)( this + 0xe60 ), 0, 0);
   plVar12 = *(long**)( this + 0xe60 );
   pcVar3 = *(code**)( *plVar12 + 0x108 );
   create_custom_callable_function_pointer<ExportTemplateManager>((ExportTemplateManager*)&local_a8, (char*)this, (_func_void*)"&ExportTemplateManager::_hide_dialog");
   ( *pcVar3 )(plVar12, SceneStringNames::singleton + 0x268, (String*)&local_a8, 0);
   Callable::~Callable((Callable*)&local_a8);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ExportTemplateManager::_humanize_http_status(HTTPRequest*, String*, int*, int*) */undefined8 ExportTemplateManager::_humanize_http_status(ExportTemplateManager *this, HTTPRequest *param_1, String *param_2, int *param_3, int *param_4) {
   undefined *puVar1;
   uint uVar2;
   int iVar3;
   undefined8 uVar4;
   char *pcVar5;
   long in_FS_OFFSET;
   CowData<char32_t> local_80[8];
   CowData<char32_t> local_78[8];
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = &_LC15;
   local_50 = 0;
   String::parse_latin1((StrRange*)param_2);
   *param_3 = -1;
   *param_4 = -1;
   uVar2 = HTTPRequest::get_http_client_status();
   if (9 < uVar2) goto LAB_0010329b;
   local_60 = 0;
   switch (uVar2) {
      case 0:
    String::parse_latin1((String *)&local_60,"");
    pcVar5 = "Disconnected";
    break;
      case 1:
    String::parse_latin1((String *)&local_60,"");
    pcVar5 = "Resolving";
    goto LAB_0010324a;
      case 2:
    String::parse_latin1((String *)&local_60,"");
    pcVar5 = "Can\'t Resolve";
    break;
      case 3:
    String::parse_latin1((String *)&local_60,"");
    pcVar5 = "Connecting...";
    goto LAB_0010324a;
      case 4:
    String::parse_latin1((String *)&local_60,"");
    pcVar5 = "Can\'t Connect";
    break;
      case 5:
    String::parse_latin1((String *)&local_60,"");
    pcVar5 = "Connected";
    goto LAB_0010324a;
      case 6:
    String::parse_latin1((String *)&local_60,"");
    pcVar5 = "Requesting...";
LAB_0010324a:
    local_68 = 0;
    String::parse_latin1((String *)&local_68,pcVar5);
    TTR((String *)&local_58,(String *)&local_68);
    if (*(undefined **)param_2 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)param_2);
      puVar1 = local_58;
      local_58 = (undefined *)0x0;
      *(undefined **)param_2 = puVar1;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0010329b:
    uVar4 = 1;
    goto LAB_001031cd;
      case 7:
    String::parse_latin1((String *)&local_60,"");
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"Downloading");
    TTR((String *)&local_58,(String *)&local_68);
    if (*(undefined **)param_2 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)param_2);
      puVar1 = local_58;
      local_58 = (undefined *)0x0;
      *(undefined **)param_2 = puVar1;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    iVar3 = HTTPRequest::get_downloaded_bytes();
    *param_3 = iVar3;
    iVar3 = HTTPRequest::get_body_size();
    *param_4 = iVar3;
    iVar3 = HTTPRequest::get_body_size();
    if (iVar3 < 1) {
      HTTPRequest::get_downloaded_bytes();
      String::humanize_size((ulong)&local_60);
      operator+((char *)&local_58,(String *)&_LC116);
      String::operator+=(param_2,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
    else {
      HTTPRequest::get_body_size();
      String::humanize_size((ulong)&local_60);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"/");
      HTTPRequest::get_downloaded_bytes();
      String::humanize_size((ulong)local_80);
      operator+((char *)local_78,(String *)&_LC116);
      String::operator+((String *)&local_68,(String *)local_78);
      String::operator+((String *)&local_58,(String *)&local_68);
      String::operator+=(param_2,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref(local_78);
      CowData<char32_t>::_unref(local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
    goto LAB_0010329b;
      case 8:
    String::parse_latin1((String *)&local_60,"");
    pcVar5 = "Connection Error";
    break;
      case 9:
    String::parse_latin1((String *)&local_60,"");
    pcVar5 = "TLS Handshake Error";
   }

   local_68 = 0;
   String::parse_latin1((String*)&local_68, pcVar5);
   TTR((String*)&local_58, (String*)&local_68);
   if (*(undefined**)param_2 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t>*)param_2);
      puVar1 = local_58;
      local_58 = (undefined*)0x0;
      *(undefined**)param_2 = puVar1;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   uVar4 = 0;
   LAB_001031cd:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ExportTemplateManager::_notification(int) */void ExportTemplateManager::_notification(ExportTemplateManager *this, int param_1) {
   float fVar1;
   StringName *pSVar2;
   Ref *pRVar3;
   Object *pOVar4;
   char cVar5;
   int iVar6;
   long in_FS_OFFSET;
   double dVar7;
   undefined1 auVar8[16];
   int local_68;
   int local_64;
   Object *local_60;
   undefined1 local_58[16];
   long local_40;
   auVar8._8_8_ = local_58._8_8_;
   auVar8._0_8_ = local_58._0_8_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0x1e) {
      cVar5 = Window::is_visible();
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            LAB_00103613:Node::set_process(SUB81(this, 0));
            return;
         }

         goto LAB_00103b32;
      }

      cVar5 = Window::is_visible();
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      if (( cVar5 != '\0' ) && ( auVar8 = local_58 ),this[0xdb3] != (ExportTemplateManager)0x0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00103613;
         goto LAB_00103b32;
      }

   }
 else if (param_1 < 0x1f) {
      if (param_1 == 10) {
         LAB_00103630:pSVar2 = *(StringName**)( this + 0xdb8 );
         if ((_notification(int)::{lambda()
         #1
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()
         #1
         iVar6 != 0))
         {
            _scs_create((char *)&_notification(int)::{lambda()
            #1
            __cxa_atexit(StringName::~StringName, &_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
      Window::get_theme_font((StringName *)&local_60,(StringName *)this);, Control::add_theme_font_override(pSVar2, (Ref*)( SceneStringNames::singleton + 0xa0 ))(( ( local_60 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar4 = local_60,cVar5 != '\0' )) && ( cVar5 = predelete_handler(local_60) ), cVar5 != '\0'))(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
            Memory::free_static(pOVar4, false);
         }

         pSVar2 = *(StringName**)( this + 0xdc0 );
         if ((_notification(int)::{lambda()
         #2
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()
         #2
         iVar6 != 0))
         {
            _scs_create((char *)&_notification(int)::{lambda()
            #2
            __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
      }
      local_58 = Window::get_theme_color
                           ((StringName *)this,
                            (StringName *)&_notification(int)::{lambda()#2}::operator()()::sname);
      Control::add_theme_color_override(pSVar2,(Color *)(SceneStringNames::singleton + 0xb0));
      pSVar2 = *(StringName **)(this + 0xdc8);
      if (_notification(int)::{lambda()
            #3
            iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()
            #3
            if (iVar6 != 0) {
               _scs_create((char *)&_notification(int)::{lambda()
               #3
               __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()
               #3
               __cxa_guard_release(&_notification(int)::{lambda()
               #3
            }

         }

         auVar8 = Window::get_theme_color
                         ((StringName *)this,
                          (StringName *)&_notification(int)::{lambda()
         #3
         local_58 = auVar8;
         Control::add_theme_color_override(pSVar2, (Color*)( SceneStringNames::singleton + 0xb0 ));
         pRVar3 = *(Ref**)( this + 0xdf8 );
         if (_notification(int)::{lambda()
         #4
         iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()
         #4
         if (iVar6 != 0) {
            _scs_create((char *)&_notification(int)::{lambda()
            #4
            __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()
            #4
            __cxa_guard_release(&_notification(int)::{lambda()
            #4
         }

      }

      Window::get_editor_theme_icon((StringName*)&local_60);
      Button::set_button_icon(pRVar3);
      auVar8 = local_58;
      if (local_60 != (Object*)0x0) {
         cVar5 = RefCounted::unreference();
         pOVar4 = local_60;
         auVar8 = local_58;
         if (cVar5 != '\0') {
            cVar5 = predelete_handler(local_60);
            auVar8 = local_58;
            if (cVar5 != '\0') {
               ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
               Memory::free_static(pOVar4, false);
               auVar8 = local_58;
            }

         }

      }

   }
 else if (param_1 == 0x11) {
      dVar7 = (double)Node::get_process_delta_time();
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      fVar1 = *(float*)( this + 0xdb4 );
      *(float*)( this + 0xdb4 ) = (float)( (double)fVar1 - dVar7 );
      if ((float)( (double)fVar1 - dVar7 ) <= 0.0) {
         *(undefined4*)( this + 0xdb4 ) = 0x3f000000;
         local_60 = (Object*)0x0;
         cVar5 = _humanize_http_status(this, *(HTTPRequest**)( this + 0xe20 ), (String*)&local_60, &local_68, &local_64);
         if (local_68 < 0) {
            _set_current_progress_status(this, (String*)&local_60, false);
         }
 else if (local_64 < 1) {
            CanvasItem::show();
            ProgressBar::set_indeterminate(SUB81(*(undefined8*)( this + 0xe10 ), 0));
            Range::set_value(0.0);
            Label::set_text(*(String**)( this + 0xe18 ));
         }
 else {
            CanvasItem::show();
            ProgressBar::set_indeterminate(SUB81(*(undefined8*)( this + 0xe10 ), 0));
            Range::set_value((double)( (float)local_68 / (float)local_64 ));
            Label::set_text(*(String**)( this + 0xe18 ));
         }

         if (cVar5 == '\0') {
            Node::set_process(SUB81(this, 0));
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         auVar8._8_8_ = local_58._8_8_;
         auVar8._0_8_ = local_58._0_8_;
      }

   }

}
else{if (param_1 == 0x20) goto LAB_00103630;auVar8 = local_58;if (param_1 == 0x3ee) {
   if (*(code**)( *(long*)this + 0x250 ) != ok_pressed) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x00103a92. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( **(code**)( *(long*)this + 0x250 ) )();
         return;
      }

      goto LAB_00103b32;
   }

   if (this[0xdb3] == (ExportTemplateManager)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Window::hide();
         return;
      }

      goto LAB_00103b32;
   }

   local_58._0_8_ = 0;
   Window::popup_centered(*(Vector2i**)( this + 0xe60 ));
   auVar8._8_8_ = local_58._8_8_;
   auVar8._0_8_ = local_58._0_8_;
}
}local_58 = auVar8;if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
LAB_00103b32:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this) {
   size_t __n;
   code *pcVar1;
   undefined8 *puVar2;
   ulong uVar3;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   __n = *(size_t*)( *(long*)this + -8 );
   uVar3 = 0x10;
   if (__n != 0) {
      uVar3 = __n - 1 | __n - 1 >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      uVar3 = ( uVar3 | uVar3 >> 0x20 ) + 0x11;
   }

   puVar2 = (undefined8*)Memory::alloc_static(uVar3, false);
   if (puVar2 != (undefined8*)0x0) {
      *puVar2 = 1;
      puVar2[1] = __n;
      memcpy(puVar2 + 2, *(void**)this, __n);
      _unref(this);
      *(undefined8**)this = puVar2 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* ExportTemplateManager::_download_template(String const&, bool) */void ExportTemplateManager::_download_template(ExportTemplateManager *this, String *param_1, bool param_2) {
   String *pSVar1;
   undefined8 uVar2;
   int iVar3;
   long in_FS_OFFSET;
   Variant local_98[8];
   undefined8 local_90;
   undefined8 local_88;
   String local_80[8];
   undefined8 local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 ) || ( this[0xdb3] == (ExportTemplateManager)0x0 )) {
      this[0xdb3] = (ExportTemplateManager)0x1;
      CanvasItem::hide();
      CanvasItem::show();
      CanvasItem::show();
      ProgressBar::set_indeterminate(SUB81(*(undefined8*)( this + 0xe10 ), 0));
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "Starting the download...";
      local_78 = 0;
      local_60 = 0x18;
      String::parse_latin1((StrRange*)&local_78);
      TTR((String*)&local_68, (String*)&local_78);
      _set_current_progress_status(this, (String*)&local_68, false);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      pSVar1 = *(String**)( this + 0xe20 );
      EditorPaths::get_cache_dir();
      local_68 = "tmp_templates.tpz";
      local_70 = 0;
      local_60 = 0x11;
      String::parse_latin1((StrRange*)&local_70);
      String::path_join((String*)&local_68);
      HTTPRequest::set_download_file(pSVar1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      HTTPRequest::set_use_threads(SUB81(*(undefined8*)( this + 0xe20 ), 0));
      local_68 = "network/http_proxy/host";
      local_70 = 0;
      local_60 = 0x17;
      String::parse_latin1((StrRange*)&local_70);
      _EDITOR_GET((String*)local_58);
      Variant::operator_cast_to_String(local_98);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "network/http_proxy/port";
      local_70 = 0;
      local_60 = 0x17;
      String::parse_latin1((StrRange*)&local_70);
      _EDITOR_GET((String*)local_58);
      Variant::operator_cast_to_int((Variant*)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      iVar3 = (int)local_98;
      HTTPRequest::set_http_proxy(*(String**)( this + 0xe20 ), iVar3);
      HTTPRequest::set_https_proxy(*(String**)( this + 0xe20 ), iVar3);
      local_68 = "";
      uVar2 = *(undefined8*)( this + 0xe20 );
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_60 = 0;
      iVar3 = HTTPRequest::request(uVar2, param_1, (String*)&local_68, 0, (StrRange*)&local_70);
      CowData<String>::_unref((CowData<String>*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (iVar3 == 0) {
         Node::set_process(SUB81(this, 0));
         local_68 = "";
         local_70 = 0;
         local_60 = 0;
         String::parse_latin1((StrRange*)&local_70);
         local_68 = "Connecting to the mirror...";
         local_78 = 0;
         local_60 = 0x1b;
         String::parse_latin1((StrRange*)&local_78);
         TTR((String*)&local_68, (String*)&local_78);
         _set_current_progress_status(this, (String*)&local_68, false);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
      }
 else {
         local_78 = 0;
         local_68 = " ";
         local_60 = 1;
         String::parse_latin1((StrRange*)&local_78);
         local_68 = "";
         local_88 = 0;
         local_60 = 0;
         String::parse_latin1((StrRange*)&local_88);
         local_68 = "Error requesting URL:";
         local_90 = 0;
         local_60 = 0x15;
         String::parse_latin1((StrRange*)&local_90);
         TTR(local_80, (String*)&local_90);
         String::operator +((String*)&local_70, local_80);
         String::operator +((String*)&local_68, (String*)&local_70);
         _set_current_progress_status(this, (String*)&local_68, true);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CanvasItem::hide();
         CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ExportTemplateManager::_refresh_mirrors_completed(int, int, Vector<String> const&,
   Vector<unsigned char> const&) */void ExportTemplateManager::_refresh_mirrors_completed(ExportTemplateManager *this, int param_1, int param_2, Vector *param_3, Vector *param_4) {
   long lVar1;
   String *pSVar2;
   undefined8 uVar3;
   char cVar4;
   int iVar5;
   int iVar6;
   undefined1 uVar7;
   uint uVar8;
   long in_FS_OFFSET;
   undefined8 local_340;
   Variant local_338[8];
   undefined8 local_330;
   undefined8 local_328;
   long local_320;
   undefined8 local_318;
   undefined8 local_310;
   char *local_308;
   undefined8 local_300;
   int local_2f8[8];
   int local_2d8[8];
   undefined **local_2b8[72];
   undefined8 local_78;
   int local_70[2];
   undefined1 local_68[16];
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   pSVar2 = EditorNode::singleton;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 != 0 ) || ( param_2 != 200 )) {
      local_308 = (char*)0x0;
      String::parse_latin1((String*)&local_308, "");
      local_310 = 0;
      String::parse_latin1((String*)&local_310, "Warning!");
      TTR((String*)&local_318, (String*)&local_310);
      local_328 = 0;
      String::parse_latin1((String*)&local_328, "");
      local_330 = 0;
      String::parse_latin1((String*)&local_330, "Error getting the list of mirrors.");
      TTR((String*)&local_320, (String*)&local_330);
      EditorNode::show_warning(pSVar2, (String*)&local_320);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_320);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_330);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_328);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_318);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_310);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_308);
      this[0xdb2] = (ExportTemplateManager)0x0;
      if (this[0xdb3] != (ExportTemplateManager)0x0) {
         HTTPRequest::cancel_request();
         CanvasItem::hide();
         CanvasItem::show();
         this[0xdb3] = (ExportTemplateManager)0x0;
      }

      goto LAB_00104454;
   }

   local_340 = 0;
   lVar1 = *(long*)( param_4 + 8 );
   if (lVar1 == 0) {
      uVar7 = false;
   }
 else {
      uVar7 = ( undefined1 ) * (undefined4*)( lVar1 + -8 );
   }

   String::parse_utf8((char*)&local_340, (int)lVar1, (bool)uVar7);
   Resource::Resource((Resource*)local_2b8);
   local_78 = 0;
   local_2b8[0] = &PTR__initialize_classv_00115500;
   local_70[0] = 0;
   local_58 = 0;
   local_50 = 0;
   local_68 = (undefined1[16])0x0;
   iVar5 = JSON::parse((String*)local_2b8, SUB81((CowData<char32_t>*)&local_340, 0));
   pSVar2 = EditorNode::singleton;
   if (iVar5 == 0) {
      OptionButton::clear();
      pSVar2 = *(String**)( this + 0xdf0 );
      local_308 = "";
      local_310 = 0;
      local_300 = 0;
      String::parse_latin1((StrRange*)&local_310);
      local_318 = 0;
      local_308 = "Best available mirror";
      local_300 = 0x15;
      String::parse_latin1((StrRange*)&local_318);
      TTR((String*)&local_308, (String*)&local_318);
      iVar5 = (int)(String*)&local_308;
      OptionButton::add_item(pSVar2, iVar5);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_308);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_318);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_310);
      this[0xdb1] = (ExportTemplateManager)0x0;
      Variant::Variant((Variant*)local_2d8, (Variant*)local_70);
      Variant::operator_cast_to_Dictionary(local_338);
      if (Variant::needs_deinit[local_2d8[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_2d8, "mirrors");
      cVar4 = Dictionary::has(local_338);
      if (Variant::needs_deinit[local_2d8[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (cVar4 == '\0') {
         if (this[0xdb1] == (ExportTemplateManager)0x0) goto LAB_00104480;
         LAB_0010434d:this[0xdb2] = (ExportTemplateManager)0x0;
         if (this[0xdb3] != (ExportTemplateManager)0x0) {
            _get_selected_mirror((ExportTemplateManager*)&local_320);
            if (( local_320 == 0 ) || ( *(uint*)( local_320 + -8 ) < 2 )) {
               local_310 = 0;
               String::parse_latin1((String*)&local_310, "");
               local_318 = 0;
               String::parse_latin1((String*)&local_318, "There are no mirrors available.");
               TTR((String*)&local_308, (String*)&local_318);
               _set_current_progress_status(this, (String*)&local_308, true);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_308);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_318);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_310);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_320);
               Dictionary::~Dictionary((Dictionary*)local_338);
               goto LAB_00104404;
            }

            _download_template(this, (String*)&local_320, true);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_320);
         }

      }
 else {
         Variant::Variant((Variant*)local_2d8, "mirrors");
         Dictionary::operator [](local_338);
         Variant::operator_cast_to_Array((Variant*)&local_318);
         if (Variant::needs_deinit[local_2d8[0]] != '\0') {
            Variant::_clear_internal();
         }

         for (uVar8 = 0; iVar6 = Array::size(),(int)uVar8 < iVar6; uVar8 = uVar8 + 1) {
            while (true) {
               Array::operator []((int)(StrRange*)&local_318);
               Variant::operator_cast_to_Dictionary((Variant*)&local_310);
               Variant::Variant((Variant*)local_2f8, "url");
               cVar4 = Dictionary::has((Variant*)&local_310);
               if (cVar4 == '\0') break;
               Variant::Variant((Variant*)local_2d8, "name");
               cVar4 = Dictionary::has((Variant*)&local_310);
               if (Variant::needs_deinit[local_2d8[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (Variant::needs_deinit[local_2f8[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (cVar4 == '\0') goto LAB_00104ad3;
               pSVar2 = *(String**)( this + 0xdf0 );
               Variant::Variant((Variant*)local_2d8, "name");
               Dictionary::operator []((Variant*)&local_310);
               Variant::operator_cast_to_String((Variant*)&local_308);
               OptionButton::add_item(pSVar2, iVar5);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_308);
               if (Variant::needs_deinit[local_2d8[0]] != '\0') {
                  Variant::_clear_internal();
               }

               uVar3 = *(undefined8*)( this + 0xdf0 );
               uVar8 = uVar8 + 1;
               Variant::Variant((Variant*)local_2d8, "url");
               Dictionary::operator []((Variant*)&local_310);
               OptionButton::set_item_metadata((int)uVar3, (Variant*)(ulong)uVar8);
               if (Variant::needs_deinit[local_2d8[0]] != '\0') {
                  Variant::_clear_internal();
               }

               this[0xdb1] = (ExportTemplateManager)0x1;
               Dictionary::~Dictionary((Dictionary*)&local_310);
               iVar6 = Array::size();
               if (iVar6 <= (int)uVar8) goto LAB_00104a4a;
            }
;
            if (Variant::needs_deinit[local_2f8[0]] != '\0') {
               Variant::_clear_internal();
            }

            LAB_00104ad3:_err_print_error("_refresh_mirrors_completed", "editor/export/export_template_manager.cpp", 0x138, "Condition \"!m.has(\"url\") || !m.has(\"name\")\" is true. Continuing.", 0, 0);
            Dictionary::~Dictionary((Dictionary*)&local_310);
         }

         LAB_00104a4a:Array::~Array((Array*)&local_318);
         if (this[0xdb1] != (ExportTemplateManager)0x0) goto LAB_0010434d;
         LAB_00104480:pSVar2 = EditorNode::singleton;
         local_308 = (char*)0x0;
         String::parse_latin1((String*)&local_308, "");
         local_310 = 0;
         String::parse_latin1((String*)&local_310, "Warning!");
         TTR((String*)&local_318, (String*)&local_310);
         local_328 = 0;
         String::parse_latin1((String*)&local_328, "");
         local_330 = 0;
         String::parse_latin1((String*)&local_330, "No download links found for this version. Direct download is only available for official releases.");
         TTR((String*)&local_320, (String*)&local_330);
         EditorNode::show_warning(pSVar2, (String*)&local_320);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_320);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_330);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_328);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_318);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_310);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_308);
         if (this[0xdb3] == (ExportTemplateManager)0x0) {
            this[0xdb2] = (ExportTemplateManager)0x0;
         }
 else {
            HTTPRequest::cancel_request();
            CanvasItem::hide();
            CanvasItem::show();
            *(undefined2*)( this + 0xdb2 ) = 0;
         }

      }

      Dictionary::~Dictionary((Dictionary*)local_338);
      local_2b8[0] = &PTR__initialize_classv_00115500;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
         Variant::_clear_internal();
      }

   }
 else {
      local_310 = 0;
      local_308 = "";
      local_300 = 0;
      String::parse_latin1((StrRange*)&local_310);
      local_308 = "Warning!";
      local_318 = 0;
      local_300 = 8;
      String::parse_latin1((StrRange*)&local_318);
      TTR((String*)&local_320, (String*)&local_318);
      local_308 = "";
      local_328 = 0;
      local_300 = 0;
      String::parse_latin1((StrRange*)&local_328);
      local_308 = "Error parsing JSON with the list of mirrors. Please report this issue!";
      local_330 = 0;
      local_300 = 0x46;
      String::parse_latin1((StrRange*)&local_330);
      TTR((String*)&local_308, (String*)&local_330);
      EditorNode::show_warning(pSVar2, (String*)&local_308);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_308);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_330);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_328);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_320);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_318);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_310);
      this[0xdb2] = (ExportTemplateManager)0x0;
      if (this[0xdb3] != (ExportTemplateManager)0x0) {
         HTTPRequest::cancel_request();
         CanvasItem::hide();
         CanvasItem::show();
         this[0xdb3] = (ExportTemplateManager)0x0;
      }

      LAB_00104404:local_2b8[0] = &PTR__initialize_classv_00115500;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   Resource::~Resource((Resource*)local_2b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_340);
   LAB_00104454:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ExportTemplateManager::_refresh_mirrors() [clone .part.0] */void ExportTemplateManager::_refresh_mirrors(ExportTemplateManager *this) {
   long *plVar1;
   undefined8 uVar2;
   long lVar3;
   long in_FS_OFFSET;
   undefined8 local_60;
   String local_58[8];
   long local_50;
   char *local_48;
   undefined8 local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0xdb2] = (ExportTemplateManager)0x1;
   local_60 = 0;
   local_48 = "4.4.1.stable";
   local_40[0] = 0xc;
   String::parse_latin1((StrRange*)&local_60);
   local_48 = ".json";
   local_50 = 0;
   local_40[0] = 5;
   String::parse_latin1((StrRange*)&local_50);
   operator+((char *)&
   local_48,(String*)"https://godotengine.org/mirrorlist/";
   String::operator +(local_58, (String*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   uVar2 = *(undefined8*)( this + 0xe38 );
   local_50 = 0;
   local_48 = "";
   local_40[0] = 0;
   String::parse_latin1((StrRange*)&local_50);
   local_40[0] = 0;
   HTTPRequest::request(uVar2, local_58, (CowData<char32_t>*)&local_48, 0, (StrRange*)&local_50);
   CowData<String>::_unref((CowData<String>*)local_40);
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

   CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ExportTemplateManager::_refresh_mirrors() */void ExportTemplateManager::_refresh_mirrors(ExportTemplateManager *this) {
   if (this[0xdb2] != (ExportTemplateManager)0x0) {
      return;
   }

   _refresh_mirrors(this);
   return;
}
/* ExportTemplateManager::_download_current() */void ExportTemplateManager::_download_current(ExportTemplateManager *this) {
   long in_FS_OFFSET;
   long local_60;
   undefined8 local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0xdb3] == (ExportTemplateManager)0x0) {
      this[0xdb3] = (ExportTemplateManager)0x1;
      CanvasItem::hide();
      CanvasItem::show();
      if (this[0xdb1] == (ExportTemplateManager)0x0) {
         if (this[0xdb2] == (ExportTemplateManager)0x0) {
            local_58 = 0;
            local_48 = "";
            local_40 = 0;
            String::parse_latin1((StrRange*)&local_58);
            local_48 = "Retrieving the mirror list...";
            local_50 = 0;
            local_40 = 0x1d;
            String::parse_latin1((StrRange*)&local_50);
            TTR((String*)&local_48, (String*)&local_50);
            _set_current_progress_status(this, (String*)&local_48, false);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            if (this[0xdb2] == (ExportTemplateManager)0x0) {
               if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  _refresh_mirrors(this);
                  return;
               }

               goto LAB_00104fcd;
            }

         }

      }
 else {
         _get_selected_mirror((ExportTemplateManager*)&local_60);
         if (( local_60 == 0 ) || ( *(uint*)( local_60 + -8 ) < 2 )) {
            local_58 = 0;
            local_48 = "";
            local_40 = 0;
            String::parse_latin1((StrRange*)&local_58);
            local_48 = "There are no mirrors available.";
            local_50 = 0;
            local_40 = 0x1f;
            String::parse_latin1((StrRange*)&local_50);
            TTR((String*)&local_48, (String*)&local_50);
            _set_current_progress_status(this, (String*)&local_48, true);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         }
 else {
            _download_template(this, (String*)&local_60, true);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         }

      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00104fcd:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* ExportTemplateManager::_update_template_status() */void __thiscall ExportTemplateManager::_update_template_status(ExportTemplateManager *this)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  Object *pOVar4;
  char *pcVar5;
  char cVar6;
  ExportTemplateManager EVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  Element *pEVar11;
  long lVar12;
  undefined8 uVar13;
  Element *pEVar14;
  Element *pEVar15;
  Element *pEVar16;
  Element *pEVar17;
  long in_FS_OFFSET;
  bool bVar18;
  Object *local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  Object *local_80;
  undefined8 local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  Element *local_58;
  Element *local_50;
  int local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  DirAccess::create(&local_a0,2);
  EditorPaths::get_export_templates_dir();
  pOVar4 = local_a0;
  pcVar2 = *(code **)(*(long *)local_a0 + 0x1a8);
  local_58 = (Element *)0x0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_98);
  }
  iVar8 = (*pcVar2)(pOVar4,(CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (iVar8 == 0) {
    local_58 = (Element *)0x0;
    local_50 = (Element *)&_GlobalNilClass::_nil;
    local_48 = 0;
    (**(code **)(*(long *)local_a0 + 0x160))();
    (**(code **)(*(long *)local_a0 + 0x168))((CowData<char32_t> *)&local_70);
    while ((local_70 != 0 && (1 < *(uint *)(local_70 + -8)))) {
      cVar6 = (**(code **)(*(long *)local_a0 + 0x170))();
      if ((cVar6 != '\0') && (cVar6 = String::begins_with((char *)&local_70), cVar6 == '\0')) {
        if (local_58 == (Element *)0x0) {
          local_58 = (Element *)operator_new(0x38,DefaultAllocator::alloc);
          *(undefined1 (*) [16])(local_58 + 0x20) = (undefined1  [16])0x0;
          *(undefined8 *)(local_58 + 0x30) = 0;
          *(undefined4 *)local_58 = 1;
          *(Element **)(local_58 + 8) = local_50;
          *(Element **)(local_58 + 0x10) = local_50;
          *(Element **)(local_58 + 0x18) = local_50;
          pEVar15 = local_58;
        }
        else {
          pEVar11 = *(Element **)(local_58 + 0x10);
          pEVar15 = local_58;
          if (local_50 != *(Element **)(local_58 + 0x10)) {
            do {
              while( true ) {
                pEVar15 = pEVar11;
                cVar6 = String::operator<((String *)&local_70,(String *)(pEVar15 + 0x30));
                if (cVar6 != '\0') break;
                cVar6 = String::operator<((String *)(pEVar15 + 0x30),(String *)&local_70);
                if (cVar6 == '\0') goto LAB_001052b2;
                pEVar11 = *(Element **)(pEVar15 + 8);
                if (local_50 == *(Element **)(pEVar15 + 8)) goto LAB_001053bc;
              }
              pEVar11 = *(Element **)(pEVar15 + 0x10);
            } while (local_50 != *(Element **)(pEVar15 + 0x10));
          }
        }
LAB_001053bc:
        pEVar11 = (Element *)operator_new(0x38,DefaultAllocator::alloc);
        *(undefined1 (*) [16])(pEVar11 + 0x20) = (undefined1  [16])0x0;
        *(undefined8 *)(pEVar11 + 0x30) = 0;
        *(undefined4 *)pEVar11 = 0;
        *(Element **)(pEVar11 + 0x18) = pEVar15;
        *(Element **)(pEVar11 + 8) = local_50;
        *(Element **)(pEVar11 + 0x10) = local_50;
        if (local_70 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(pEVar11 + 0x30),(CowData *)&local_70);
        }
        pEVar17 = pEVar15;
        if ((local_58 == pEVar15) ||
           (cVar6 = String::operator<((String *)&local_70,(String *)(pEVar15 + 0x30)),
           pEVar17 = local_58, cVar6 != '\0')) {
          *(Element **)(pEVar15 + 0x10) = pEVar11;
        }
        else {
          *(Element **)(pEVar15 + 8) = pEVar11;
        }
        pEVar15 = pEVar11;
        pEVar16 = *(Element **)(pEVar11 + 8);
        if (local_50 == *(Element **)(pEVar11 + 8)) {
          do {
            pEVar14 = *(Element **)(pEVar15 + 0x18);
            bVar18 = pEVar15 == *(Element **)(pEVar14 + 8);
            pEVar15 = pEVar14;
          } while (bVar18);
          if (pEVar14 == pEVar17) {
            pEVar14 = (Element *)0x0;
          }
        }
        else {
          do {
            pEVar15 = pEVar16 + 0x10;
            pEVar14 = pEVar16;
            pEVar16 = *(Element **)pEVar15;
          } while (local_50 != *(Element **)pEVar15);
        }
        *(Element **)(pEVar11 + 0x20) = pEVar14;
        pEVar16 = *(Element **)(pEVar11 + 0x10);
        pEVar15 = pEVar11;
        if (local_50 == *(Element **)(pEVar11 + 0x10)) {
          do {
            pEVar16 = pEVar15;
            pEVar15 = *(Element **)(pEVar16 + 0x18);
          } while (pEVar16 == *(Element **)(pEVar15 + 0x10));
          if (pEVar16 != pEVar17) goto LAB_001057ec;
          *(undefined8 *)(pEVar11 + 0x28) = 0;
          if (pEVar14 != (Element *)0x0) goto LAB_001057f6;
        }
        else {
          do {
            pEVar15 = pEVar16;
            pEVar16 = *(Element **)(pEVar15 + 8);
          } while (local_50 != *(Element **)(pEVar15 + 8));
LAB_001057ec:
          *(Element **)(pEVar11 + 0x28) = pEVar15;
          if (pEVar14 != (Element *)0x0) {
LAB_001057f6:
            *(Element **)(pEVar14 + 0x28) = pEVar11;
            pEVar15 = *(Element **)(pEVar11 + 0x28);
            if (pEVar15 == (Element *)0x0) goto LAB_00105808;
          }
          *(Element **)(pEVar15 + 0x20) = pEVar11;
        }
LAB_00105808:
        local_48 = local_48 + 1;
        RBSet<String,Comparator<String>,DefaultAllocator>::_insert_rb_fix
                  ((RBSet<String,Comparator<String>,DefaultAllocator> *)&local_58,pEVar11);
      }
LAB_001052b2:
      (**(code **)(*(long *)local_a0 + 0x168))((String *)&local_68);
      pcVar5 = local_68;
      if ((char *)local_70 == local_68) {
        if (local_70 == 0) break;
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static((void *)((long)pcVar5 + -0x10),false);
        }
      }
      else {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        local_70 = (long)local_68;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    (**(code **)(*(long *)local_a0 + 0x180))();
    local_68 = "4.4.1.stable";
    local_90 = 0;
    local_60 = 0xc;
    String::parse_latin1((StrRange *)&local_90);
    Label::set_text(*(String **)(this + 0xdb8));
    if ((local_58 != (Element *)0x0) &&
       (pEVar15 = *(Element **)(local_58 + 0x10), pEVar15 != local_50)) {
      do {
        while( true ) {
          cVar6 = String::operator<((String *)&local_90,(String *)(pEVar15 + 0x30));
          if (cVar6 != '\0') break;
          cVar6 = String::operator<((String *)(pEVar15 + 0x30),(String *)&local_90);
          if (cVar6 == '\0') {
            if (pEVar15 != (Element *)0x0) {
              CanvasItem::hide();
              CanvasItem::show();
              CanvasItem::show();
              EVar7 = (ExportTemplateManager)0x1;
              goto LAB_001051ed;
            }
            goto LAB_001051c7;
          }
          pEVar15 = *(Element **)(pEVar15 + 8);
          if (pEVar15 == local_50) goto LAB_001051c7;
        }
        pEVar15 = *(Element **)(pEVar15 + 0x10);
      } while (pEVar15 != local_50);
    }
LAB_001051c7:
    CanvasItem::hide();
    CanvasItem::show();
    CanvasItem::hide();
    EVar7 = (ExportTemplateManager)0x0;
LAB_001051ed:
    this[0xdb0] = EVar7;
    if (this[0xdb3] == (ExportTemplateManager)0x0) {
      CanvasItem::hide();
      CanvasItem::show();
      if ((local_58 != (Element *)0x0) &&
         (pEVar15 = *(Element **)(local_58 + 0x10), local_50 != pEVar15)) {
        do {
          while( true ) {
            cVar6 = String::operator<((String *)&local_90,(String *)(pEVar15 + 0x30));
            if (cVar6 != '\0') break;
            cVar6 = String::operator<((String *)(pEVar15 + 0x30),(String *)&local_90);
            if (cVar6 == '\0') {
              if (pEVar15 != (Element *)0x0) {
                uVar13 = *(undefined8 *)(this + 0xdd8);
                String::path_join((String *)&local_68);
                LineEdit::set_text(uVar13);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              }
              goto LAB_00105458;
            }
            pEVar15 = *(Element **)(pEVar15 + 8);
            if (pEVar15 == local_50) goto LAB_00105458;
          }
          pEVar15 = *(Element **)(pEVar15 + 0x10);
        } while (pEVar15 != local_50);
      }
    }
    else {
      CanvasItem::hide();
      CanvasItem::show();
    }
LAB_00105458:
    Tree::clear();
    iVar8 = Tree::create_item(*(TreeItem **)(this + 0xe40),0);
    if ((local_58 != (Element *)0x0) &&
       (pEVar15 = *(Element **)(local_58 + 0x10), *(Element **)(local_58 + 0x10) != local_50)) {
      do {
        pEVar11 = pEVar15;
        pEVar15 = *(Element **)(pEVar11 + 8);
      } while (local_50 != *(Element **)(pEVar11 + 8));
      do {
        local_88 = 0;
        plVar1 = (long *)(*(long *)(pEVar11 + 0x30) + -0x10);
        if (*(long *)(pEVar11 + 0x30) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_00105576;
            LOCK();
            lVar12 = *plVar1;
            bVar18 = lVar3 == lVar12;
            if (bVar18) {
              *plVar1 = lVar3 + 1;
              lVar12 = lVar3;
            }
            UNLOCK();
          } while (!bVar18);
          if (lVar12 != -1) {
            local_88 = *(long *)(pEVar11 + 0x30);
          }
        }
LAB_00105576:
        cVar6 = String::operator==((String *)&local_88,(String *)&local_90);
        if (cVar6 == '\0') {
          uVar13 = Tree::create_item(*(TreeItem **)(this + 0xe40),iVar8);
          local_68 = (char *)0x0;
          if (local_88 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_88);
          }
          TreeItem::set_text(uVar13,0,(String *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          local_68 = "";
          local_70 = 0;
          local_60 = 0;
          String::parse_latin1((StrRange *)&local_70);
          local_68 = "Open the folder containing these templates.";
          local_78 = 0;
          local_60 = 0x2b;
          String::parse_latin1((StrRange *)&local_78);
          TTR((String *)&local_68,(String *)&local_78);
          if ((_update_template_status()::{lambda()#1}::operator()()::sname == '\0') &&
             (iVar10 = __cxa_guard_acquire(&_update_template_status()::{lambda()#1}::operator()()::
                                            sname), iVar10 != 0)) {
            _scs_create((char *)&_update_template_status()::{lambda()#1}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_update_template_status()::{lambda()#1}::operator()()::sname,&__dso_handle
                        );
            __cxa_guard_release(&_update_template_status()::{lambda()#1}::operator()()::sname);
          }
          Window::get_editor_theme_icon((StringName *)&local_80);
          iVar10 = (int)(StringName *)&local_80;
          TreeItem::add_button((int)uVar13,(Ref *)0x0,iVar10,false,(String *)0x0);
          if (((local_80 != (Object *)0x0) &&
              (cVar6 = RefCounted::unreference(), pOVar4 = local_80, cVar6 != '\0')) &&
             (cVar6 = predelete_handler(local_80), cVar6 != '\0')) {
            (**(code **)(*(long *)pOVar4 + 0x140))();
            Memory::free_static(pOVar4,false);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          local_68 = "";
          local_70 = 0;
          local_60 = 0;
          String::parse_latin1((StrRange *)&local_70);
          local_68 = "Uninstall these templates.";
          local_78 = 0;
          local_60 = 0x1a;
          String::parse_latin1((StrRange *)&local_78);
          TTR((String *)&local_68,(String *)&local_78);
          if ((_update_template_status()::{lambda()#2}::operator()()::sname == '\0') &&
             (iVar9 = __cxa_guard_acquire(&_update_template_status()::{lambda()#2}::operator()()::
                                           sname), iVar9 != 0)) {
            _scs_create((char *)&_update_template_status()::{lambda()#2}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_update_template_status()::{lambda()#2}::operator()()::sname,&__dso_handle
                        );
            __cxa_guard_release(&_update_template_status()::{lambda()#2}::operator()()::sname);
          }
          Window::get_editor_theme_icon((StringName *)&local_80);
          TreeItem::add_button((int)uVar13,(Ref *)0x0,iVar10,true,(String *)0x0);
          if (((local_80 != (Object *)0x0) &&
              (cVar6 = RefCounted::unreference(), pOVar4 = local_80, cVar6 != '\0')) &&
             (cVar6 = predelete_handler(local_80), cVar6 != '\0')) {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        pEVar11 = *(Element **)(pEVar11 + 0x28);
      } while (pEVar11 != (Element *)0x0);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    RBSet<String,Comparator<String>,DefaultAllocator>::~RBSet
              ((RBSet<String,Comparator<String>,DefaultAllocator> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  }
  else {
    local_68 = (char *)0x0;
    String::parse_latin1((String *)&local_68,"\'.");
    operator+((char *)&local_70,(String *)"Could not access templates directory at \'");
    String::operator+((String *)&local_58,(String *)&local_70);
    _err_print_error("_update_template_status","editor/export/export_template_manager.cpp",0x55,
                     "Condition \"err != OK\" is true.",(CowData<char32_t> *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  }
  if (((local_a0 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_a0), cVar6 != '\0')) {
    (**(code **)(*(long *)local_a0 + 0x140))(local_a0);
    Memory::free_static(local_a0,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ExportTemplateManager::_uninstall_template_confirmed() */

void __thiscall ExportTemplateManager::_uninstall_template_confirmed(ExportTemplateManager *this)

{
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  CowData<char32_t> *this_00;
  String *this_01;
  long in_FS_OFFSET;
  Object *local_80;
  long local_78;
  String local_70 [8];
  String local_68 [8];
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  DirAccess::create(&local_80,2);
  this_00 = (CowData<char32_t> *)&local_58;
  EditorPaths::get_export_templates_dir();
  pOVar2 = local_80;
  pcVar1 = *(code **)(*(long *)local_80 + 0x1a8);
  local_58 = (undefined *)0x0;
  if (local_78 != 0) {
    CowData<char32_t>::_ref(this_00,(CowData *)&local_78);
  }
  iVar4 = (*pcVar1)(pOVar2,this_00);
  CowData<char32_t>::_unref(this_00);
  pOVar2 = local_80;
  if (iVar4 == 0) {
    pcVar1 = *(code **)(*(long *)local_80 + 0x1a8);
    local_58 = (undefined *)0x0;
    if (*(long *)(this + 0xe50) != 0) {
      CowData<char32_t>::_ref(this_00,(CowData *)(this + 0xe50));
    }
    iVar4 = (*pcVar1)(pOVar2,this_00);
    CowData<char32_t>::_unref(this_00);
    if (iVar4 == 0) {
      iVar4 = (**(code **)(*(long *)local_80 + 0x1c8))();
      pOVar2 = local_80;
      if (iVar4 == 0) {
        pcVar1 = *(code **)(*(long *)local_80 + 0x1a8);
        local_60 = 0;
        local_50 = 2;
        local_58 = &_LC162;
        String::parse_latin1((StrRange *)&local_60);
        (*pcVar1)(pOVar2,(StrRange *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        pOVar2 = local_80;
        pcVar1 = *(code **)(*(long *)local_80 + 0x208);
        local_58 = (undefined *)0x0;
        if (*(long *)(this + 0xe50) != 0) {
          CowData<char32_t>::_ref(this_00,(CowData *)(this + 0xe50));
        }
        iVar4 = (*pcVar1)(pOVar2);
        CowData<char32_t>::_unref(this_00);
        if (iVar4 == 0) {
          _update_template_status(this);
        }
        else {
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"\'.");
          String::path_join(local_70);
          operator+((char *)local_68,(String *)"Could not remove templates directory at \'");
          String::operator+((String *)this_00,local_68);
          _err_print_error("_uninstall_template_confirmed",
                           "editor/export/export_template_manager.cpp",0x269,
                           "Condition \"err != OK\" is true.",this_00,0,0);
          CowData<char32_t>::_unref(this_00);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        }
        goto LAB_00105d70;
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"\'.");
      String::path_join(local_70);
      operator+((char *)local_68,(String *)"Could not remove all templates in \'");
      String::operator+((String *)this_00,local_68);
      uVar5 = 0x265;
    }
    else {
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"\'.");
      String::path_join(local_70);
      operator+((char *)local_68,(String *)"Could not access templates directory at \'");
      String::operator+((String *)this_00,local_68);
      uVar5 = 0x262;
    }
    this_01 = local_70;
    _err_print_error("_uninstall_template_confirmed","editor/export/export_template_manager.cpp",
                     uVar5,"Condition \"err != OK\" is true.",this_00,0,0);
    CowData<char32_t>::_unref(this_00);
    this_00 = (CowData<char32_t> *)local_68;
  }
  else {
    this_01 = local_68;
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"\'.");
    operator+((char *)this_01,(String *)"Could not access templates directory at \'");
    String::operator+((String *)this_00,this_01);
    _err_print_error("_uninstall_template_confirmed","editor/export/export_template_manager.cpp",
                     0x260,"Condition \"err != OK\" is true.",this_00,0,0);
  }
  CowData<char32_t>::_unref(this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)this_01);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00105d70:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if (local_80 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_80);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_80 + 0x140))(local_80);
        Memory::free_static(local_80,false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ExportTemplateManager::popup_manager() */

void __thiscall ExportTemplateManager::popup_manager(ExportTemplateManager *this)

{
  String *pSVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  float fVar5;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _update_template_status(this);
  local_80 = 0;
  local_78 = "network/connection/network_mode";
  local_70 = 0x1f;
  String::parse_latin1((StrRange *)&local_80);
  _EDITOR_GET((String *)local_58);
  iVar3 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  local_78 = "dev";
  local_80 = 0;
  local_70 = 3;
  String::parse_latin1((StrRange *)&local_80);
  local_78 = "stable";
  local_88 = 0;
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_88);
  cVar2 = String::operator==((String *)&local_88,(String *)&local_80);
  iVar4 = (int)(String *)&local_78;
  if (cVar2 == '\0') {
    local_90 = 0;
    local_78 = "alpha";
    local_70 = 5;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = "stable";
    local_70 = 6;
    String::parse_latin1((StrRange *)&local_98);
    cVar2 = String::operator==((String *)&local_98,(String *)&local_90);
    if (cVar2 != '\0') {
LAB_00106492:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      goto LAB_0010612c;
    }
    local_a0 = 0;
    local_78 = "beta";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_a0);
    local_a8 = 0;
    local_78 = "stable";
    local_70 = 6;
    String::parse_latin1((StrRange *)&local_a8);
    cVar2 = String::operator==((String *)&local_a8,(String *)&local_a0);
    if (cVar2 != '\0') {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      goto LAB_00106492;
    }
    local_78 = (char *)0x0;
    String::parse_latin1((String *)&local_78,"rc");
    local_b0 = 0;
    String::parse_latin1((String *)&local_b0,"stable");
    cVar2 = String::operator==((String *)&local_b0,(String *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    if (cVar2 == '\0') {
      pSVar1 = *(String **)(this + 0xdc0);
      local_80 = 0;
      local_78 = "";
      local_70 = 0;
      if (iVar3 == 0) {
        String::parse_latin1((StrRange *)&local_80);
        local_78 = "Export templates are missing. Install them from a file.";
        local_88 = 0;
        local_70 = 0x37;
        String::parse_latin1((StrRange *)&local_88);
        TTR((String *)&local_78,(String *)&local_88);
        Label::set_text(pSVar1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        OptionButton::clear();
        local_78 = "";
        pSVar1 = *(String **)(this + 0xdf0);
        local_80 = 0;
        local_70 = 0;
        String::parse_latin1((StrRange *)&local_80);
        local_78 = "Not available in offline mode";
        local_88 = 0;
        local_70 = 0x1d;
        String::parse_latin1((StrRange *)&local_88);
        TTR((String *)&local_78,(String *)&local_88);
        OptionButton::add_item(pSVar1,iVar4);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdf0),0));
        local_78 = "";
        pSVar1 = *(String **)(this + 0xdf0);
        local_80 = 0;
        local_70 = 0;
        String::parse_latin1((StrRange *)&local_80);
        local_78 = "Template downloading is disabled in offline mode.";
        local_88 = 0;
        local_70 = 0x31;
        String::parse_latin1((StrRange *)&local_88);
        TTR((String *)&local_78,(String *)&local_88);
        Control::set_tooltip_text(pSVar1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdf8),0));
        BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe30),0));
        local_78 = "";
        pSVar1 = *(String **)(this + 0xe30);
        local_80 = 0;
        local_70 = 0;
        String::parse_latin1((StrRange *)&local_80);
        local_78 = "Template downloading is disabled in offline mode.";
        local_88 = 0;
        local_70 = 0x31;
        String::parse_latin1((StrRange *)&local_88);
        TTR((String *)&local_78,(String *)&local_88);
        Control::set_tooltip_text(pSVar1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CanvasItem::show();
      }
      else {
        String::parse_latin1((StrRange *)&local_80);
        local_78 = "Export templates are missing. Download them or install from a file.";
        local_88 = 0;
        local_70 = 0x43;
        String::parse_latin1((StrRange *)&local_88);
        TTR((String *)&local_78,(String *)&local_88);
        Label::set_text(pSVar1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        OptionButton::clear();
        local_78 = "";
        pSVar1 = *(String **)(this + 0xdf0);
        local_80 = 0;
        local_70 = 0;
        String::parse_latin1((StrRange *)&local_80);
        local_78 = "Best available mirror";
        local_88 = 0;
        local_70 = 0x15;
        String::parse_latin1((StrRange *)&local_88);
        TTR((String *)&local_78,(String *)&local_88);
        OptionButton::add_item(pSVar1,iVar4);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdf0),0));
        local_78 = "";
        pSVar1 = *(String **)(this + 0xdf0);
        local_80 = 0;
        local_70 = 0;
        String::parse_latin1((StrRange *)&local_80);
        Control::set_tooltip_text(pSVar1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdf8),0));
        BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe30),0));
        local_78 = "";
        pSVar1 = *(String **)(this + 0xe30);
        local_80 = 0;
        local_70 = 0;
        String::parse_latin1((StrRange *)&local_80);
        Control::set_tooltip_text(pSVar1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        if ((this[0xdb3] == (ExportTemplateManager)0x0) &&
           (this[0xdb2] == (ExportTemplateManager)0x0)) {
          _refresh_mirrors(this);
        }
        CanvasItem::hide();
      }
      goto LAB_001063b9;
    }
  }
  else {
LAB_0010612c:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  }
  pSVar1 = *(String **)(this + 0xdc0);
  local_80 = 0;
  local_78 = "";
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_80);
  local_78 = "Export templates are missing. Install them from a file.";
  local_88 = 0;
  local_70 = 0x37;
  String::parse_latin1((StrRange *)&local_88);
  TTR((String *)&local_78,(String *)&local_88);
  Label::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  OptionButton::clear();
  local_78 = "";
  pSVar1 = *(String **)(this + 0xdf0);
  local_80 = 0;
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_80);
  local_78 = "No templates for development builds";
  local_88 = 0;
  local_70 = 0x23;
  String::parse_latin1((StrRange *)&local_88);
  TTR((String *)&local_78,(String *)&local_88);
  OptionButton::add_item(pSVar1,iVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdf0),0));
  local_78 = "";
  pSVar1 = *(String **)(this + 0xdf0);
  local_80 = 0;
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_80);
  local_78 = "Official export templates aren\'t available for development builds.";
  local_88 = 0;
  local_70 = 0x42;
  String::parse_latin1((StrRange *)&local_88);
  TTR((String *)&local_78,(String *)&local_88);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdf8),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe30),0));
  local_78 = "";
  pSVar1 = *(String **)(this + 0xe30);
  local_80 = 0;
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_80);
  local_78 = "Official export templates aren\'t available for development builds.";
  local_88 = 0;
  local_70 = 0x42;
  String::parse_latin1((StrRange *)&local_88);
  TTR((String *)&local_78,(String *)&local_88);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CanvasItem::hide();
LAB_001063b9:
  fVar5 = (float)EditorScale::get_scale();
  local_60 = CONCAT44(fVar5 * _LC176._4_4_,fVar5 * (float)_LC176);
  local_58[0] = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_60);
  Window::popup_centered((Vector2i *)this);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ExportTemplateManager::_force_online_mode() */

void __thiscall ExportTemplateManager::_force_online_mode(ExportTemplateManager *this)

{
  long *plVar1;
  long lVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar3 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_48,1);
  local_58 = "network/connection/network_mode";
  local_60 = 0;
  local_50 = 0x1f;
  String::parse_latin1((StrRange *)&local_60);
  EditorSettings::set_setting(pSVar3,(Variant *)&local_60);
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
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  EditorSettings::get_singleton();
  EditorSettings::notify_changes();
  EditorSettings::get_singleton();
  EditorSettings::save();
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    popup_manager(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  CowData<unsigned_char> *pCVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  CowData<unsigned_char> *pCVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  CowData<unsigned_char> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_00106d26:
    lVar10 = 0;
    pCVar6 = (CowData<unsigned_char> *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar2 = (long *)(lVar3 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    if (lVar10 == 0) goto LAB_00106d26;
    uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar6 = (CowData<unsigned_char> *)((uVar5 | uVar5 >> 0x20) + 1);
  }
  uVar5 = param_1 - 1U | param_1 - 1U >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  pCVar9 = (CowData<unsigned_char> *)(uVar5 | uVar5 >> 0x20);
  pCVar1 = pCVar9 + 1;
  if (param_1 <= lVar10) {
    if ((pCVar1 != pCVar6) && (iVar4 = _realloc(this,(long)pCVar1), iVar4 != 0)) {
      return;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return;
    }
    FUN_00114174();
    return;
  }
  if (pCVar1 != pCVar6) {
    if (lVar10 == 0) {
      puVar7 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
      if (puVar7 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar8 = puVar7 + 2;
      *puVar7 = 1;
      puVar7[1] = 0;
      *(undefined8 **)this = puVar8;
      goto LAB_00106c7c;
    }
    pCVar9 = this;
    iVar4 = _realloc(this,(long)pCVar1);
    if (iVar4 != 0) {
      return;
    }
  }
  puVar8 = *(undefined8 **)this;
  if (puVar8 == (undefined8 *)0x0) {
    resize<false>((long)pCVar9);
    return;
  }
LAB_00106c7c:
  puVar8[-1] = param_1;
  return;
}



/* ExportTemplateManager::install_android_template_from_file(String const&, Ref<EditorExportPreset>
   const&) */

undefined4 __thiscall
ExportTemplateManager::install_android_template_from_file
          (ExportTemplateManager *this,String *param_1,Ref *param_2)

{
  String *pSVar1;
  StrRange *pSVar2;
  StrRange *this_00;
  uint uVar3;
  code *pcVar4;
  long *plVar5;
  ExportTemplateManager *this_01;
  long lVar6;
  long lVar7;
  void *__s;
  Object *pOVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 *puVar17;
  char cVar18;
  int iVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined8 uVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  CowData<char32_t> *pCVar26;
  undefined1 *puVar27;
  uint uVar28;
  ulong uVar29;
  CowData<char32_t> *pCVar30;
  CowData<char32_t> *pCVar31;
  CowData<char32_t> *pCVar32;
  long in_FS_OFFSET;
  undefined1 local_4030 [16384];
  
  puVar17 = &stack0xffffffffffffffd0;
  do {
    puVar27 = puVar17;
    *(undefined8 *)(puVar27 + -0x1000) = *(undefined8 *)(puVar27 + -0x1000);
    puVar17 = puVar27 + -0x1000;
  } while (puVar27 + -0x1000 != local_4030);
  *(undefined8 *)(puVar27 + 0x2ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(puVar27 + -0x1210) = 0x106dd6;
  DirAccess::create(puVar27 + -0x1188,0);
  if (*(long *)(puVar27 + -0x1188) == 0) {
    *(undefined8 *)(puVar27 + -0x1210) = 0x107975;
    _err_print_error("install_android_template_from_file",
                     "editor/export/export_template_manager.cpp",0x32c,
                     "Condition \"da.is_null()\" is true. Returning: ERR_CANT_CREATE",0,0);
    *(undefined4 *)(puVar27 + -0x11a4) = 0x14;
    goto LAB_00107751;
  }
  pCVar26 = (CowData<char32_t> *)(puVar27 + -0x1178);
  *(ExportTemplateManager **)(puVar27 + -0x11e8) = (ExportTemplateManager *)(puVar27 + -0x1180);
  pSVar1 = (String *)(puVar27 + -0x10a8);
  *(undefined8 *)(puVar27 + -0x1210) = 0x106e10;
  get_android_build_directory((ExportTemplateManager *)(puVar27 + -0x1180),param_2);
  pSVar2 = (StrRange *)(puVar27 + -0x10f8);
  *(undefined8 *)(puVar27 + -0x1210) = 0x106e23;
  String::get_base_dir();
  pcVar4 = *(code **)(**(long **)(puVar27 + -0x1188) + 0x1c0);
  *(undefined8 *)(puVar27 + -0x1210) = 0x106e37;
  (*pcVar4)(*(long **)(puVar27 + -0x1188),pCVar26);
  *(char **)(puVar27 + -0x10a8) = ".build_version";
  *(String **)(puVar27 + -0x1200) = pSVar1;
  *(undefined8 *)(puVar27 + -0x10f8) = 0;
  *(undefined8 *)(puVar27 + -0x10a0) = 0xe;
  *(undefined8 *)(puVar27 + -0x1210) = 0x106e6e;
  String::parse_latin1(pSVar2);
  *(undefined8 *)(puVar27 + -0x1210) = 0x106e7c;
  String::path_join(pSVar1);
  *(String **)(puVar27 + -0x11c8) = (String *)(puVar27 + -0x1128);
  *(undefined8 *)(puVar27 + -0x1210) = 0x106e98;
  FileAccess::open((String *)(puVar27 + -0x1128),(int)pSVar1,(Error *)0x2);
  *(undefined8 *)(puVar27 + -0x1210) = 0x106ea0;
  CowData<char32_t>::_unref((CowData<char32_t> *)pSVar1);
  *(undefined8 *)(puVar27 + -0x1210) = 0x106ea8;
  CowData<char32_t>::_unref((CowData<char32_t> *)pSVar2);
  plVar5 = *(long **)(puVar27 + -0x1128);
  if (plVar5 == (long *)0x0) {
    uVar22 = 0x336;
LAB_0010799a:
    *(undefined8 *)(puVar27 + -0x1210) = 0x1079ad;
    _err_print_error("install_android_template_from_file",
                     "editor/export/export_template_manager.cpp",uVar22,
                     "Condition \"f.is_null()\" is true. Returning: ERR_CANT_CREATE",0,0);
    *(undefined8 *)(puVar27 + -0x1210) = 0x1079b7;
    Ref<FileAccess>::unref(*(Ref<FileAccess> **)(puVar27 + -0x11c8));
    *(undefined4 *)(puVar27 + -0x11a4) = 0x14;
  }
  else {
    this_01 = *(ExportTemplateManager **)(puVar27 + -0x1200);
    pcVar4 = *(code **)(*plVar5 + 0x2b0);
    *(undefined8 *)(puVar27 + -0x1210) = 0x106ed3;
    get_android_template_identifier(this_01,param_2);
    *(undefined8 *)(puVar27 + -0x1210) = 0x106edc;
    (*pcVar4)(plVar5);
    *(undefined8 *)(puVar27 + -0x1210) = 0x106ee4;
    CowData<char32_t>::_unref((CowData<char32_t> *)this_01);
    if (*(long *)(puVar27 + -0x1128) != 0) {
      *(undefined8 *)(puVar27 + -0x1210) = 0x106ef6;
      cVar18 = RefCounted::unreference();
      if (cVar18 != '\0') {
        pOVar8 = *(Object **)(puVar27 + -0x1128);
        *(undefined8 *)(puVar27 + -0x1210) = 0x1078a0;
        cVar18 = predelete_handler(pOVar8);
        if (cVar18 != '\0') {
          pcVar4 = *(code **)(*(long *)pOVar8 + 0x140);
          *(undefined8 *)(puVar27 + -0x1210) = 0x1078b5;
          (*pcVar4)(pOVar8);
          *(undefined8 *)(puVar27 + -0x1210) = 0x1078bf;
          Memory::free_static(pOVar8,false);
        }
      }
    }
    pcVar4 = *(code **)(**(long **)(puVar27 + -0x1188) + 0x1c0);
    *(undefined8 *)(puVar27 + -0x1210) = 0x106f14;
    iVar19 = (*pcVar4)(*(long **)(puVar27 + -0x1188),*(undefined8 *)(puVar27 + -0x11e8));
    *(int *)(puVar27 + -0x11a4) = iVar19;
    if (iVar19 == 0) {
      pSVar1 = *(String **)(puVar27 + -0x1200);
      *(undefined8 *)(puVar27 + -0x10f8) = 0;
      *(char **)(puVar27 + -0x10a8) = ".gdignore";
      *(undefined8 *)(puVar27 + -0x10a0) = 9;
      *(undefined8 *)(puVar27 + -0x1210) = 0x106f57;
      String::parse_latin1(pSVar2);
      *(undefined8 *)(puVar27 + -0x1210) = 0x106f67;
      String::path_join(pSVar1);
      *(undefined8 *)(puVar27 + -0x1210) = 0x106f7b;
      FileAccess::open(*(String **)(puVar27 + -0x11c8),(int)pSVar1,(Error *)0x2);
      *(undefined8 *)(puVar27 + -0x1210) = 0x106f83;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar1);
      *(undefined8 *)(puVar27 + -0x1210) = 0x106f8b;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar2);
      plVar5 = *(long **)(puVar27 + -0x1128);
      if (plVar5 == (long *)0x0) {
        uVar22 = 0x340;
        goto LAB_0010799a;
      }
      pcVar4 = *(code **)(*plVar5 + 0x2b0);
      *(undefined **)(puVar27 + -0x10a8) = &_LC15;
      *(undefined8 *)(puVar27 + -0x10f8) = 0;
      *(undefined8 *)(puVar27 + -0x10a0) = 0;
      *(undefined8 *)(puVar27 + -0x1210) = 0x106fda;
      String::parse_latin1(pSVar2);
      *(undefined8 *)(puVar27 + -0x1210) = 0x106fe3;
      (*pcVar4)(plVar5);
      *(undefined8 *)(puVar27 + -0x1210) = 0x106feb;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar2);
      if (*(long *)(puVar27 + -0x1128) != 0) {
        *(undefined8 *)(puVar27 + -0x1210) = 0x106ffd;
        cVar18 = RefCounted::unreference();
        if (cVar18 != '\0') {
          pOVar8 = *(Object **)(puVar27 + -0x1128);
          *(undefined8 *)(puVar27 + -0x1210) = 0x1078d8;
          cVar18 = predelete_handler(pOVar8);
          if (cVar18 != '\0') {
            pcVar4 = *(code **)(*(long *)pOVar8 + 0x140);
            *(undefined8 *)(puVar27 + -0x1210) = 0x1078ec;
            (*pcVar4)(pOVar8);
            *(undefined8 *)(puVar27 + -0x1210) = 0x1078f6;
            Memory::free_static(pOVar8,false);
          }
        }
      }
      *(undefined8 *)(puVar27 + -0x1170) = 0;
      *(undefined8 *)(puVar27 + -0x1210) = 0x107021;
      zipio_create_io((Ref *)pSVar2);
      *(undefined8 *)(puVar27 + -0x1210) = 0x107031;
      String::utf8();
      *(undefined8 *)(puVar27 + -0x1210) = 0x107039;
      uVar22 = CharString::get_data();
      *(undefined8 *)(puVar27 + -0x1210) = 0x107044;
      lVar23 = unzOpen2(uVar22);
      if (*(long *)(puVar27 + -0x10a8) != 0) {
        LOCK();
        plVar5 = (long *)(*(long *)(puVar27 + -0x10a8) + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          lVar6 = *(long *)(puVar27 + -0x10a8);
          *(undefined8 *)(puVar27 + -0x10a8) = 0;
          *(undefined8 *)(puVar27 + -0x1210) = 0x10707b;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      if (lVar23 == 0) {
        *(undefined8 *)(puVar27 + -0x1218) = 0;
        *(undefined8 *)(puVar27 + -0x1220) = 0x107a31;
        _err_print_error("install_android_template_from_file",
                         "editor/export/export_template_manager.cpp",0x34a,
                         "Parameter \"pkg\" is null.","Android sources not in ZIP format.",0);
        *(undefined4 *)(puVar27 + -0x11a4) = 0x13;
      }
      else {
        *(undefined8 *)(puVar27 + -0x1210) = 0x10708c;
        iVar19 = unzGoToFirstFile(lVar23);
        if (iVar19 == 0) {
          cVar18 = '\0';
          do {
            cVar18 = cVar18 + '\x01';
            *(undefined8 *)(puVar27 + -0x1210) = 0x1070ab;
            iVar19 = unzGoToNextFile(lVar23);
          } while (iVar19 == 0);
        }
        else {
          cVar18 = false;
        }
        pSVar2 = (StrRange *)(puVar27 + -0x1148);
        *(undefined8 *)(puVar27 + -0x1210) = 0x1070bf;
        uVar20 = unzGoToFirstFile(lVar23);
        pSVar1 = ProgressDialog::singleton;
        *(undefined **)(puVar27 + -0x10a8) = &_LC15;
        *(undefined4 *)(puVar27 + -0x11a8) = uVar20;
        this_00 = (StrRange *)(puVar27 + -0x1150);
        *(undefined8 *)(puVar27 + -0x1148) = 0;
        *(undefined8 *)(puVar27 + -0x10a0) = 0;
        *(StrRange **)(puVar27 + -0x11d0) = pSVar2;
        *(undefined8 *)(puVar27 + -0x1210) = 0x107104;
        String::parse_latin1(pSVar2);
        *(char **)(puVar27 + -0x10a8) = "Uncompressing Android Build Sources";
        *(undefined8 *)(puVar27 + -0x1150) = 0;
        *(undefined8 *)(puVar27 + -0x10a0) = 0x23;
        *(StrRange **)(puVar27 + -0x11b0) = this_00;
        *(undefined8 *)(puVar27 + -0x1210) = 0x10713d;
        String::parse_latin1(this_00);
        *(String **)(puVar27 + -0x11f8) = (String *)(puVar27 + -0x1138);
        *(undefined8 *)(puVar27 + -0x1210) = 0x107158;
        TTR((String *)(puVar27 + -0x1138),(String *)this_00);
        *(char **)(puVar27 + -0x10a8) = "uncompress_src";
        *(undefined8 *)(puVar27 + -0x1128) = 0;
        *(undefined8 *)(puVar27 + -0x10a0) = 0xe;
        *(undefined8 *)(puVar27 + -0x1210) = 0x10718e;
        String::parse_latin1(*(StrRange **)(puVar27 + -0x11c8));
        pCVar32 = *(CowData<char32_t> **)(puVar27 + -0x11f8);
        *(undefined8 *)(puVar27 + -0x1210) = 0x1071a8;
        ProgressDialog::add_task(pSVar1,*(String **)(puVar27 + -0x11c8),(int)pCVar32,(bool)cVar18);
        *(undefined8 *)(puVar27 + -0x1210) = 0x1071b2;
        CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar27 + -0x11c8));
        *(undefined8 *)(puVar27 + -0x1210) = 0x1071ba;
        CowData<char32_t>::_unref(pCVar32);
        *(undefined8 *)(puVar27 + -0x1210) = 0x1071c2;
        CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
        *(undefined8 *)(puVar27 + -0x1210) = 0x1071ca;
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar2);
        pSVar1 = ProgressDialog::singleton;
        *(undefined8 *)(puVar27 + -0x1108) = 2;
        *(undefined1 (*) [16])(puVar27 + -0x1128) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar27 + -0x1118) = (undefined1  [16])0x0;
        if (*(int *)(puVar27 + -0x11a8) == 0) {
          *(CowData<char32_t> **)(puVar27 + -0x1190) = pCVar26;
          pCVar26 = (CowData<char32_t> *)(puVar27 + -0x1168);
          *(undefined8 *)(puVar27 + -0x11f0) = 0;
          *(undefined1 **)(puVar27 + -0x11d8) = puVar27 + -0x1018;
          do {
            *(undefined8 *)(puVar27 + -0x1210) = 0;
            *(undefined8 *)(puVar27 + -0x1218) = 0;
            uVar22 = *(undefined8 *)(puVar27 + -0x11d8);
            *(undefined8 *)(puVar27 + -0x1220) = 0x1072d3;
            iVar19 = unzGetCurrentFileInfo
                               (lVar23,*(undefined8 *)(puVar27 + -0x1200),uVar22,0x4000,0,0);
            if (iVar19 != 0) break;
            *(undefined8 *)(puVar27 + -0x1210) = 0x1072ed;
            String::utf8((char *)pCVar26,(int)uVar22);
            pCVar32 = (CowData<char32_t> *)(puVar27 + -0x1160);
            *(undefined8 *)(puVar27 + -0x1210) = 0x107300;
            String::get_base_dir();
            *(undefined8 *)(puVar27 + -0x1210) = 0x10730f;
            cVar18 = String::ends_with((char *)pCVar26);
            if (cVar18 == '\0') {
              *(undefined8 *)(puVar27 + -0x1140) = 0;
              *(undefined8 *)(puVar27 + -0x1210) = 0x10733b;
              CowData<unsigned_char>::resize<false>
                        ((CowData<unsigned_char> *)(puVar27 + -0x1140),*(long *)(puVar27 + -0x1070))
              ;
              *(undefined8 *)(puVar27 + -0x1210) = 0x107343;
              unzOpenCurrentFile(lVar23);
              if (*(long *)(puVar27 + -0x1140) == 0) {
                uVar20 = 0;
              }
              else {
                uVar20 = *(undefined4 *)(*(long *)(puVar27 + -0x1140) + -8);
              }
              *(undefined8 *)(puVar27 + -0x1210) = 0x10735f;
              CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(puVar27 + -0x1140));
              *(undefined8 *)(puVar27 + -0x11e0) = *(undefined8 *)(puVar27 + -0x1140);
              *(undefined8 *)(puVar27 + -0x1210) = 0x107379;
              unzReadCurrentFile(lVar23,*(undefined8 *)(puVar27 + -0x1140),uVar20);
              *(undefined8 *)(puVar27 + -0x1210) = 0x107381;
              unzCloseCurrentFile(lVar23);
              if ((*(long *)(puVar27 + -0x11f0) != 0) && (*(int *)(puVar27 + -0x1104) != 0)) {
                lVar6 = *(long *)(hash_table_size_primes_inv +
                                 (ulong)*(uint *)(puVar27 + -0x1108) * 8);
                *(undefined4 *)(puVar27 + -0x11c0) =
                     *(undefined4 *)
                      (hash_table_size_primes + (ulong)*(uint *)(puVar27 + -0x1108) * 4);
                *(undefined8 *)(puVar27 + -0x1210) = 0x1073c6;
                uVar21 = String::hash();
                uVar3 = *(uint *)(puVar27 + -0x11c0);
                uVar29 = CONCAT44(0,uVar3);
                lVar7 = *(long *)(puVar27 + -0x1110);
                uVar24 = 1;
                if (uVar21 != 0) {
                  uVar24 = uVar21;
                }
                auVar9._8_8_ = 0;
                auVar9._0_8_ = (ulong)uVar24 * lVar6;
                auVar13._8_8_ = 0;
                auVar13._0_8_ = uVar29;
                lVar25 = SUB168(auVar9 * auVar13,8);
                uVar21 = *(uint *)(lVar7 + lVar25 * 4);
                iVar19 = SUB164(auVar9 * auVar13,8);
                if (uVar21 != 0) {
                  *(long *)(puVar27 + -0x11a0) = lVar23;
                  *(CowData<char32_t> **)(puVar27 + -0x11b8) = pCVar32;
                  uVar28 = 0;
                  *(CowData<char32_t> **)(puVar27 + -0x1198) = pCVar26;
                  do {
                    if (uVar21 == uVar24) {
                      *(ulong *)(puVar27 + -0x11c0) = uVar29;
                      uVar21 = *(uint *)(*(long *)(puVar27 + -0x1120) + lVar25 * 4);
                      *(undefined8 *)(puVar27 + -0x1210) = 0x10749d;
                      cVar18 = String::operator==((String *)
                                                  (*(long *)(puVar27 + -0x11f0) + (ulong)uVar21 * 8)
                                                  ,*(String **)(puVar27 + -0x11b8));
                      uVar29 = *(ulong *)(puVar27 + -0x11c0);
                      if (cVar18 != '\0') {
                        lVar23 = *(long *)(puVar27 + -0x11a0);
                        pCVar32 = *(CowData<char32_t> **)(puVar27 + -0x11b8);
                        pCVar26 = *(CowData<char32_t> **)(puVar27 + -0x1198);
                        goto LAB_00107518;
                      }
                    }
                    uVar28 = uVar28 + 1;
                    auVar10._8_8_ = 0;
                    auVar10._0_8_ = (ulong)(iVar19 + 1) * lVar6;
                    auVar14._8_8_ = 0;
                    auVar14._0_8_ = uVar29;
                    lVar25 = SUB168(auVar10 * auVar14,8);
                    uVar21 = *(uint *)(lVar7 + lVar25 * 4);
                    iVar19 = SUB164(auVar10 * auVar14,8);
                  } while ((uVar21 != 0) &&
                          (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar21 * lVar6,
                          auVar15._8_8_ = 0, auVar15._0_8_ = uVar29, auVar12._8_8_ = 0,
                          auVar12._0_8_ =
                               (ulong)((uVar3 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar6,
                          auVar16._8_8_ = 0, auVar16._0_8_ = uVar29,
                          uVar28 <= SUB164(auVar12 * auVar16,8)));
                  lVar23 = *(long *)(puVar27 + -0x11a0);
                  pCVar32 = *(CowData<char32_t> **)(puVar27 + -0x11b8);
                  pCVar26 = *(CowData<char32_t> **)(puVar27 + -0x1198);
                }
              }
              plVar5 = *(long **)(puVar27 + -0x1188);
              pSVar1 = *(String **)(puVar27 + -0x11f8);
              pcVar4 = *(code **)(*plVar5 + 0x1c0);
              *(undefined8 *)(puVar27 + -0x1210) = 0x1074f7;
              String::path_join(pSVar1);
              *(undefined8 *)(puVar27 + -0x1210) = 0x107500;
              (*pcVar4)(plVar5,pSVar1);
              *(undefined8 *)(puVar27 + -0x1210) = 0x107508;
              CowData<char32_t>::_unref((CowData<char32_t> *)pSVar1);
              *(undefined8 *)(puVar27 + -0x1210) = 0x107518;
              HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert(pSVar1);
LAB_00107518:
              pSVar1 = (String *)(puVar27 + -0x1158);
              *(undefined8 *)(puVar27 + -0x1210) = 0x107530;
              String::path_join(pSVar1);
              *(undefined8 *)(puVar27 + -0x1210) = 0x107544;
              FileAccess::open(*(String **)(puVar27 + -0x11b0),(int)pSVar1,(Error *)0x2);
              plVar5 = *(long **)(puVar27 + -0x1150);
              if (plVar5 == (long *)0x0) {
                pCVar30 = *(CowData<char32_t> **)(puVar27 + -0x11f8);
                *(undefined8 *)(puVar27 + -0x1210) = 0x107827;
                operator+((char *)pCVar30,(String *)"Can\'t uncompress file: ");
                *(undefined8 *)(puVar27 + -0x1210) = 0x107848;
                _err_print_error("install_android_template_from_file",
                                 "editor/export/export_template_manager.cpp",0x37c,pCVar30,0);
                *(undefined8 *)(puVar27 + -0x1210) = 0x107850;
                CowData<char32_t>::_unref(pCVar30);
              }
              else {
                pcVar4 = *(code **)(*plVar5 + 0x2d0);
                if (*(long *)(puVar27 + -0x11e0) == 0) {
                  uVar22 = 0;
                }
                else {
                  uVar22 = *(undefined8 *)(*(long *)(puVar27 + -0x11e0) + -8);
                }
                *(undefined8 *)(puVar27 + -0x1210) = 0x107578;
                (*pcVar4)(plVar5,*(undefined8 *)(puVar27 + -0x11e0),uVar22);
                if (*(long *)(puVar27 + -0x1150) != 0) {
                  *(undefined8 *)(puVar27 + -0x1210) = 0x10758a;
                  cVar18 = RefCounted::unreference();
                  if (cVar18 != '\0') {
                    pOVar8 = *(Object **)(puVar27 + -0x1150);
                    *(undefined8 *)(puVar27 + -0x1210) = 0x1077b0;
                    cVar18 = predelete_handler(pOVar8);
                    if (cVar18 != '\0') {
                      pcVar4 = *(code **)(*(long *)pOVar8 + 0x140);
                      *(undefined8 *)(puVar27 + -0x1210) = 0x1077c5;
                      (*pcVar4)(pOVar8);
                      *(undefined8 *)(puVar27 + -0x1210) = 0x1077cf;
                      Memory::free_static(pOVar8,false);
                    }
                  }
                }
                *(undefined8 *)(puVar27 + -0x1150) = 0;
                *(undefined8 *)(puVar27 + -0x1210) = 0x1075b8;
                FileAccess::set_unix_permissions(pSVar1);
              }
              if (*(long *)(puVar27 + -0x1150) != 0) {
                *(undefined8 *)(puVar27 + -0x1210) = 0x1075ca;
                cVar18 = RefCounted::unreference();
                if (cVar18 != '\0') {
                  pOVar8 = *(Object **)(puVar27 + -0x1150);
                  *(undefined8 *)(puVar27 + -0x1210) = 0x1077e8;
                  cVar18 = predelete_handler(pOVar8);
                  if (cVar18 != '\0') {
                    pcVar4 = *(code **)(*(long *)pOVar8 + 0x140);
                    *(undefined8 *)(puVar27 + -0x1210) = 0x1077fd;
                    (*pcVar4)(pOVar8);
                    *(undefined8 *)(puVar27 + -0x1210) = 0x107807;
                    Memory::free_static(pOVar8,false);
                  }
                }
              }
              *(undefined8 *)(puVar27 + -0x1210) = 0x1075da;
              CowData<char32_t>::_unref((CowData<char32_t> *)pSVar1);
              if (*(long *)(puVar27 + -0x11e0) != 0) {
                LOCK();
                plVar5 = (long *)(*(long *)(puVar27 + -0x11e0) + -0x10);
                *plVar5 = *plVar5 + -1;
                UNLOCK();
                if (*plVar5 == 0) {
                  *(undefined8 *)(puVar27 + -0x1210) = 0x1075ff;
                  Memory::free_static((void *)(*(long *)(puVar27 + -0x1140) + -0x10),false);
                }
              }
              *(undefined8 *)(puVar27 + -0x11f0) = *(undefined8 *)(puVar27 + -0x1128);
            }
            pSVar1 = ProgressDialog::singleton;
            pSVar2 = *(StrRange **)(puVar27 + -0x11d0);
            *(undefined8 *)(puVar27 + -0x1148) = 0;
            *(char **)(puVar27 + -0x1138) = "uncompress_src";
            *(undefined8 *)(puVar27 + -0x1130) = 0xe;
            *(undefined8 *)(puVar27 + -0x1210) = 0x107260;
            String::parse_latin1(pSVar2);
            iVar19 = *(int *)(puVar27 + -0x11a8);
            *(undefined8 *)(puVar27 + -0x1210) = 0x107280;
            ProgressDialog::task_step(pSVar1,(String *)pSVar2,(int)pCVar26,SUB41(iVar19,0));
            *(undefined8 *)(puVar27 + -0x1210) = 0x107288;
            CowData<char32_t>::_unref((CowData<char32_t> *)pSVar2);
            *(int *)(puVar27 + -0x11a8) = iVar19 + 1;
            *(undefined8 *)(puVar27 + -0x1210) = 0x107295;
            iVar19 = unzGoToNextFile(lVar23);
            *(undefined8 *)(puVar27 + -0x1210) = 0x10729f;
            CowData<char32_t>::_unref(pCVar32);
            *(undefined8 *)(puVar27 + -0x1210) = 0x1072a7;
            CowData<char32_t>::_unref(pCVar26);
          } while (iVar19 == 0);
          pSVar1 = ProgressDialog::singleton;
          pSVar2 = *(StrRange **)(puVar27 + -0x11f8);
          *(undefined8 *)(puVar27 + -0x1138) = 0;
          *(char **)(puVar27 + -0x10a8) = "uncompress_src";
          pCVar26 = *(CowData<char32_t> **)(puVar27 + -0x1190);
          *(undefined8 *)(puVar27 + -0x10a0) = 0xe;
          *(undefined8 *)(puVar27 + -0x1210) = 0x10765d;
          String::parse_latin1(pSVar2);
          *(undefined8 *)(puVar27 + -0x1210) = 0x107668;
          ProgressDialog::end_task(pSVar1);
          *(undefined8 *)(puVar27 + -0x1210) = 0x107670;
          CowData<char32_t>::_unref((CowData<char32_t> *)pSVar2);
          *(undefined8 *)(puVar27 + -0x1210) = 0x107678;
          unzClose(lVar23);
          *(undefined8 *)(puVar27 + -0x1210) = 0x107684;
          EditorFileSystem::scan_changes();
          if (*(long *)(puVar27 + -0x11f0) != 0) {
            uVar3 = *(uint *)(puVar27 + -0x1104);
            __s = *(void **)(puVar27 + -0x1110);
            if (uVar3 != 0) {
              uVar24 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(puVar27 + -0x1108) * 4);
              if (uVar24 != 0) {
                *(undefined8 *)(puVar27 + -0x1210) = 0x1076ca;
                memset(__s,0,(ulong)uVar24 * 4);
              }
              pCVar32 = *(CowData<char32_t> **)(puVar27 + -0x11f0);
              pCVar30 = pCVar32;
              do {
                pCVar31 = pCVar30 + 8;
                *(undefined8 *)(puVar27 + -0x1210) = 0x1076ec;
                CowData<char32_t>::_unref(pCVar30);
                pCVar30 = pCVar31;
              } while (pCVar31 != pCVar32 + (ulong)uVar3 * 8);
            }
            *(undefined8 *)(puVar27 + -0x1210) = 0x1076fd;
            Memory::free_static(*(void **)(puVar27 + -0x11f0),false);
            *(undefined8 *)(puVar27 + -0x1210) = 0x10770c;
            Memory::free_static(*(void **)(puVar27 + -0x1118),false);
            *(undefined8 *)(puVar27 + -0x1210) = 0x10771b;
            Memory::free_static(*(void **)(puVar27 + -0x1120),false);
            *(undefined8 *)(puVar27 + -0x1210) = 0x107725;
            Memory::free_static(__s,false);
          }
        }
        else {
          pSVar2 = *(StrRange **)(puVar27 + -0x11f8);
          *(undefined8 *)(puVar27 + -0x1138) = 0;
          *(char **)(puVar27 + -0x10a8) = "uncompress_src";
          *(undefined8 *)(puVar27 + -0x10a0) = 0xe;
          *(undefined8 *)(puVar27 + -0x1210) = 0x107a88;
          String::parse_latin1(pSVar2);
          *(undefined8 *)(puVar27 + -0x1210) = 0x107a93;
          ProgressDialog::end_task(pSVar1);
          *(undefined8 *)(puVar27 + -0x1210) = 0x107a9b;
          CowData<char32_t>::_unref((CowData<char32_t> *)pSVar2);
          *(undefined8 *)(puVar27 + -0x1210) = 0x107aa3;
          unzClose(lVar23);
          *(undefined8 *)(puVar27 + -0x1210) = 0x107aaf;
          EditorFileSystem::scan_changes();
        }
      }
      if (*(long *)(puVar27 + -0x1170) != 0) {
        *(undefined8 *)(puVar27 + -0x1210) = 0x107737;
        cVar18 = RefCounted::unreference();
        if (cVar18 != '\0') {
          pOVar8 = *(Object **)(puVar27 + -0x1170);
          *(undefined8 *)(puVar27 + -0x1210) = 0x107910;
          cVar18 = predelete_handler(pOVar8);
          if (cVar18 != '\0') {
            pcVar4 = *(code **)(*(long *)pOVar8 + 0x140);
            *(undefined8 *)(puVar27 + -0x1210) = 0x107924;
            (*pcVar4)(pOVar8);
            *(undefined8 *)(puVar27 + -0x1210) = 0x10792e;
            Memory::free_static(pOVar8,false);
          }
        }
      }
    }
    else {
      *(undefined8 *)(puVar27 + -0x1210) = 0x1079e9;
      _err_print_error("install_android_template_from_file",
                       "editor/export/export_template_manager.cpp",0x33c,
                       "Condition \"err != OK\" is true. Returning: err",0,0);
    }
  }
  *(undefined8 *)(puVar27 + -0x1210) = 0x107747;
  CowData<char32_t>::_unref(pCVar26);
  *(undefined8 *)(puVar27 + -0x1210) = 0x107751;
  CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar27 + -0x11e8));
LAB_00107751:
  if (*(long *)(puVar27 + -0x1188) != 0) {
    *(undefined8 *)(puVar27 + -0x1210) = 0x107763;
    cVar18 = RefCounted::unreference();
    if (cVar18 != '\0') {
      pOVar8 = *(Object **)(puVar27 + -0x1188);
      *(undefined8 *)(puVar27 + -0x1210) = 0x107868;
      cVar18 = predelete_handler(pOVar8);
      if (cVar18 != '\0') {
        pcVar4 = *(code **)(*(long *)pOVar8 + 0x140);
        *(undefined8 *)(puVar27 + -0x1210) = 0x10787c;
        (*pcVar4)(pOVar8);
        *(undefined8 *)(puVar27 + -0x1210) = 0x107886;
        Memory::free_static(pOVar8,false);
      }
    }
  }
  if (*(long *)(puVar27 + 0x2ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return *(undefined4 *)(puVar27 + -0x11a4);
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar27 + -0x1210) = &UNK_00107ab9;
  __stack_chk_fail();
}



/* ExportTemplateManager::install_android_template(Ref<EditorExportPreset> const&) */

undefined4 __thiscall
ExportTemplateManager::install_android_template(ExportTemplateManager *this,Ref *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  get_android_source_zip((ExportTemplateManager *)&local_28,param_1);
  cVar3 = FileAccess::exists((String *)&local_28);
  if (cVar3 == '\0') {
    uVar4 = 0x13;
    _err_print_error("install_android_template","editor/export/export_template_manager.cpp",0x323,
                     "Condition \"!FileAccess::exists(source_zip)\" is true. Returning: ERR_CANT_OPEN"
                     ,0,0);
  }
  else {
    uVar4 = install_android_template_from_file(this,(String *)&local_28,param_1);
  }
  lVar2 = local_28;
  if (local_28 != 0) {
    LOCK();
    plVar1 = (long *)(local_28 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_28 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ExportTemplateManager::_install_file_selected(String const&, bool) */

undefined8 __thiscall
ExportTemplateManager::_install_file_selected
          (ExportTemplateManager *this,String *param_1,bool param_2)

{
  long *plVar1;
  CowData<unsigned_char> *this_00;
  CowData<char32_t> *pCVar2;
  CowData<char32_t> *pCVar3;
  StrRange *this_01;
  StrRange *this_02;
  CowData<char32_t> *this_03;
  String *pSVar4;
  String *pSVar5;
  String *this_04;
  String *pSVar6;
  long lVar7;
  Object *pOVar8;
  code *pcVar9;
  EditorProgress *this_05;
  StringName *this_06;
  undefined1 uVar10;
  undefined1 *puVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  StringName *pSVar17;
  void *pvVar18;
  undefined7 in_register_00000011;
  undefined8 uVar19;
  undefined1 *puVar20;
  undefined4 uVar21;
  CowData<char32_t> *pCVar22;
  String *pSVar23;
  long in_FS_OFFSET;
  undefined1 local_4030 [16384];
  
  puVar11 = &stack0xffffffffffffffd0;
  do {
    puVar20 = puVar11;
    *(undefined8 *)(puVar20 + -0x1000) = *(undefined8 *)(puVar20 + -0x1000);
    puVar11 = puVar20 + -0x1000;
  } while (puVar20 + -0x1000 != local_4030);
  *(int *)(puVar20 + -0x11e0) = (int)CONCAT71(in_register_00000011,param_2);
  *(ExportTemplateManager **)(puVar20 + -0x11f0) = this;
  *(String **)(puVar20 + -0x11e8) = param_1;
  *(undefined8 *)(puVar20 + 0x2ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(puVar20 + -0x1198) = 0;
  *(undefined8 *)(puVar20 + -0x1230) = 0x107c06;
  zipio_create_io((Ref *)(puVar20 + -0x1118));
  *(undefined1 **)(puVar20 + -0x1220) = puVar20 + -0x10c8;
  *(undefined8 *)(puVar20 + -0x1230) = 0x107c21;
  String::utf8();
  *(undefined8 *)(puVar20 + -0x1230) = 0x107c29;
  uVar15 = CharString::get_data();
  *(undefined8 *)(puVar20 + -0x1230) = 0x107c34;
  lVar16 = unzOpen2(uVar15);
  pSVar23 = EditorNode::singleton;
  if (*(long *)(puVar20 + -0x10c8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(puVar20 + -0x10c8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    pSVar23 = EditorNode::singleton;
    if (*plVar1 == 0) {
      lVar7 = *(long *)(puVar20 + -0x10c8);
      *(undefined8 *)(puVar20 + -0x10c8) = 0;
      *(undefined8 *)(puVar20 + -0x1230) = 0x107fa7;
      Memory::free_static((void *)(lVar7 + -0x10),false);
      pSVar23 = EditorNode::singleton;
    }
  }
  EditorNode::singleton = pSVar23;
  if (lVar16 == 0) {
    pSVar4 = *(String **)(puVar20 + -0x1220);
    pSVar6 = (String *)(puVar20 + -0x1128);
    *(undefined8 *)(puVar20 + -0x10c8) = 0;
    *(undefined8 *)(puVar20 + -0x1230) = 0x107ff2;
    String::parse_latin1(pSVar4,"");
    *(undefined8 *)(puVar20 + -0x1128) = 0;
    *(undefined8 *)(puVar20 + -0x1230) = 0x10800d;
    String::parse_latin1(pSVar6,"Warning!");
    *(String **)(puVar20 + -0x1220) = pSVar4;
    pSVar4 = (String *)(puVar20 + -0x1138);
    *(undefined8 *)(puVar20 + -0x1230) = 0x108028;
    TTR((String *)(puVar20 + -0x1130),pSVar6);
    pSVar5 = (String *)(puVar20 + -0x1148);
    *(undefined8 *)(puVar20 + -0x1140) = 0;
    *(undefined8 *)(puVar20 + -0x1230) = 0x108047;
    String::parse_latin1((String *)(puVar20 + -0x1140),"");
    *(undefined8 *)(puVar20 + -0x1148) = 0;
    *(undefined8 *)(puVar20 + -0x1230) = 0x108062;
    String::parse_latin1(pSVar5,"Can\'t open the export templates file.");
    *(undefined8 *)(puVar20 + -0x1230) = 0x108070;
    TTR(pSVar4,pSVar5);
    *(undefined8 *)(puVar20 + -0x1230) = 0x10807e;
    EditorNode::show_warning(pSVar23,pSVar4);
    *(undefined8 *)(puVar20 + -0x1230) = 0x108086;
    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar4);
    *(undefined8 *)(puVar20 + -0x1230) = 0x10808e;
    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar5);
    *(undefined8 *)(puVar20 + -0x1230) = 0x108096;
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar20 + -0x1140));
    *(undefined8 *)(puVar20 + -0x1230) = 0x10809e;
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar20 + -0x1130));
    uVar15 = 0;
    *(undefined8 *)(puVar20 + -0x1230) = 0x1080a8;
    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar6);
    *(undefined8 *)(puVar20 + -0x1230) = 0x1080b2;
    CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x1220));
    goto LAB_00108260;
  }
  *(undefined8 *)(puVar20 + -0x1230) = 0x107c61;
  iVar13 = unzGoToFirstFile(lVar16);
  *(undefined8 *)(puVar20 + -0x1190) = 0;
  *(int *)(puVar20 + -0x11d4) = iVar13;
  *(undefined8 *)(puVar20 + -0x1188) = 0;
  if (iVar13 == 0) {
    *(undefined4 *)(puVar20 + -0x1208) = 0;
    *(undefined1 **)(puVar20 + -0x1200) = puVar20 + -0x1190;
    *(undefined1 **)(puVar20 + -0x1218) = puVar20 + -0x1018;
    *(undefined1 **)(puVar20 + -0x11f8) = puVar20 + -0x1188;
    do {
      *(undefined8 *)(puVar20 + -0x1230) = 0;
      *(undefined8 *)(puVar20 + -0x1238) = 0;
      uVar15 = *(undefined8 *)(puVar20 + -0x1218);
      *(undefined8 *)(puVar20 + -0x1240) = 0x107d12;
      iVar13 = unzGetCurrentFileInfo(lVar16,*(undefined8 *)(puVar20 + -0x1220),uVar15,0x4000);
      if (iVar13 != 0) break;
      pCVar22 = (CowData<char32_t> *)(puVar20 + -0x1178);
      *(undefined8 *)(puVar20 + -0x1230) = 0x107d38;
      String::utf8((char *)pCVar22,(int)uVar15);
      *(undefined8 *)(puVar20 + -0x1230) = 0x107d47;
      cVar12 = String::begins_with((char *)pCVar22);
      if (cVar12 == '\0') {
        *(undefined8 *)(puVar20 + -0x1230) = 0x107d5a;
        cVar12 = String::ends_with((char *)pCVar22);
        if (cVar12 != '\0') {
          this_00 = (CowData<unsigned_char> *)(puVar20 + -0x1120);
          *(undefined8 *)(puVar20 + -0x1120) = 0;
          *(undefined8 *)(puVar20 + -0x1230) = 0x107d86;
          CowData<unsigned_char>::resize<false>(this_00,*(long *)(puVar20 + -0x1090));
          *(undefined8 *)(puVar20 + -0x1230) = 0x107d8e;
          unzOpenCurrentFile(lVar16);
          if (*(long *)(puVar20 + -0x1120) == 0) {
            uVar21 = 0;
          }
          else {
            uVar21 = *(undefined4 *)(*(long *)(puVar20 + -0x1120) + -8);
          }
          *(undefined8 *)(puVar20 + -0x1230) = 0x107daa;
          CowData<unsigned_char>::_copy_on_write(this_00);
          lVar7 = *(long *)(puVar20 + -0x1120);
          *(undefined8 *)(puVar20 + -0x1230) = 0x107dbf;
          iVar13 = unzReadCurrentFile(lVar16,lVar7,uVar21);
          if (iVar13 < 0) {
            *(CowData<unsigned_char> **)(puVar20 + -0x1210) = this_00;
            *(CowData<char32_t> **)(puVar20 + -0x11d0) = (CowData<char32_t> *)(puVar20 + -0x1138);
            uVar15 = *(undefined8 *)(puVar20 + -0x1218);
            *(undefined8 *)(puVar20 + -0x1138) = 0;
            if (*(long *)(puVar20 + -0x1178) != 0) {
              *(undefined8 *)(puVar20 + -0x1230) = 0x1082e4;
              CowData<char32_t>::_ref((CowData<char32_t> *)(puVar20 + -0x1138),(CowData *)pCVar22);
            }
            pSVar23 = (String *)(puVar20 + -0x1140);
            *(undefined8 *)(puVar20 + -0x1140) = 0;
            pCVar2 = (CowData<char32_t> *)(puVar20 + -0x1130);
            *(undefined8 *)(puVar20 + -0x1230) = 0x10830f;
            String::parse_latin1
                      (pSVar23,
                       "An error occurred while attempting to read from file: %s. This file will not be used."
                      );
            pCVar3 = *(CowData<char32_t> **)(puVar20 + -0x11d0);
            *(undefined8 *)(puVar20 + -0x1230) = 0x108322;
            vformat<String>(pCVar2,pSVar23,pCVar3);
            *(undefined8 *)(puVar20 + -0x1238) = 0;
            *(undefined8 *)(puVar20 + -0x1240) = 0x10834d;
            _err_print_error("_install_file_selected","editor/export/export_template_manager.cpp",
                             0x1d0,"Condition \"ret < 0\" is true. Breaking.",pCVar2,0);
            *(undefined8 *)(puVar20 + -0x1240) = 0x108355;
            CowData<char32_t>::_unref(pCVar2);
            *(undefined8 *)(puVar20 + -0x1240) = 0x10835d;
            CowData<char32_t>::_unref((CowData<char32_t> *)pSVar23);
            *(undefined8 *)(puVar20 + -0x1240) = 0x108365;
            CowData<char32_t>::_unref(pCVar3);
            *(undefined8 *)(puVar20 + -0x1240) = 0x10836f;
            CowData<unsigned_char>::_unref(*(CowData<unsigned_char> **)(puVar20 + -0x1210));
            *(undefined8 *)(puVar20 + -0x1240) = 0x108377;
            CowData<char32_t>::_unref(pCVar22);
            goto LAB_001080c8;
          }
          *(undefined8 *)(puVar20 + -0x1230) = 0x107dcf;
          unzCloseCurrentFile(lVar16);
          *(undefined8 *)(puVar20 + -0x1170) = 0;
          uVar10 = false;
          if (lVar7 != 0) {
            uVar10 = (undefined1)*(undefined4 *)(lVar7 + -8);
          }
          pCVar2 = (CowData<char32_t> *)(puVar20 + -0x1170);
          pCVar3 = (CowData<char32_t> *)(puVar20 + -0x1130);
          *(undefined8 *)(puVar20 + -0x1230) = 0x107e04;
          String::parse_utf8((char *)pCVar2,(int)lVar7,(bool)uVar10);
          *(undefined8 *)(puVar20 + -0x1230) = 0x107e19;
          String::strip_edges(SUB81(pCVar3,0),SUB81(pCVar2,0));
          if (*(long *)(puVar20 + -0x1170) != *(long *)(puVar20 + -0x1130)) {
            *(undefined8 *)(puVar20 + -0x1230) = 0x107e33;
            CowData<char32_t>::_unref(pCVar2);
            uVar15 = *(undefined8 *)(puVar20 + -0x1130);
            *(undefined8 *)(puVar20 + -0x1130) = 0;
            *(undefined8 *)(puVar20 + -0x1170) = uVar15;
          }
          *(undefined8 *)(puVar20 + -0x1230) = 0x107e57;
          CowData<char32_t>::_unref(pCVar3);
          *(undefined8 *)(puVar20 + -0x1230) = 0x107e66;
          iVar13 = String::get_slice_count((char *)pCVar2);
          if (iVar13 < 3) {
            *(CowData<unsigned_char> **)(puVar20 + -0x1210) = this_00;
            pSVar23 = (String *)(puVar20 + -0x1138);
            *(undefined8 *)(puVar20 + -0x1130) = 0;
            *(String **)(puVar20 + -0x11f0) = EditorNode::singleton;
            *(undefined8 *)(puVar20 + -0x1230) = 0x10898a;
            String::parse_latin1((String *)pCVar3,"");
            *(undefined8 *)(puVar20 + -0x1138) = 0;
            *(String **)(puVar20 + -0x11d0) = pSVar23;
            *(undefined8 *)(puVar20 + -0x1230) = 0x1089aa;
            String::parse_latin1(pSVar23,"Warning!");
            *(String **)(puVar20 + -0x1208) = (String *)(puVar20 + -0x1140);
            *(undefined8 *)(puVar20 + -0x1230) = 0x1089c5;
            TTR((String *)(puVar20 + -0x1140),pSVar23);
            *(undefined8 *)(puVar20 + -0x1150) = 0;
            *(CowData<char32_t> **)(puVar20 + -0x1218) = (CowData<char32_t> *)(puVar20 + -0x1150);
            if (*(long *)(puVar20 + -0x1170) != 0) {
              *(undefined8 *)(puVar20 + -0x1230) = 0x1089f4;
              CowData<char32_t>::_ref((CowData<char32_t> *)(puVar20 + -0x1150),(CowData *)pCVar2);
            }
            pSVar23 = (String *)(puVar20 + -0x1168);
            *(undefined8 *)(puVar20 + -0x1160) = 0;
            *(undefined8 *)(puVar20 + -0x1230) = 0x108a1e;
            String::parse_latin1((String *)(puVar20 + -0x1160),"");
            *(undefined8 *)(puVar20 + -0x1168) = 0;
            *(undefined8 *)(puVar20 + -0x1230) = 0x108a39;
            String::parse_latin1
                      (pSVar23,"Invalid version.txt format inside the export templates file: %s.");
            *(String **)(puVar20 + -0x11e8) = (String *)(puVar20 + -0x1160);
            this_03 = (CowData<char32_t> *)(puVar20 + -0x1148);
            *(String **)(puVar20 + -0x1220) = (String *)(puVar20 + -0x1158);
            *(undefined8 *)(puVar20 + -0x1230) = 0x108a61;
            TTR((String *)(puVar20 + -0x1158),pSVar23);
            *(undefined8 *)(puVar20 + -0x1230) = 0x108a73;
            vformat<String>(this_03,*(undefined8 *)(puVar20 + -0x1220),
                            *(undefined8 *)(puVar20 + -0x1218));
            *(undefined8 *)(puVar20 + -0x1230) = 0x108a85;
            EditorNode::show_warning(*(String **)(puVar20 + -0x11f0),(String *)this_03);
            *(undefined8 *)(puVar20 + -0x1230) = 0x108a8d;
            CowData<char32_t>::_unref(this_03);
            *(undefined8 *)(puVar20 + -0x1230) = 0x108a97;
            CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x1220));
            *(undefined8 *)(puVar20 + -0x1230) = 0x108a9f;
            CowData<char32_t>::_unref((CowData<char32_t> *)pSVar23);
            *(undefined8 *)(puVar20 + -0x1230) = 0x108aa9;
            CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x11e8));
            *(undefined8 *)(puVar20 + -0x1230) = 0x108ab3;
            CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x1218));
            *(undefined8 *)(puVar20 + -0x1230) = 0x108abd;
            CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x1208));
            *(undefined8 *)(puVar20 + -0x1230) = 0x108ac7;
            CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x11d0));
            *(undefined8 *)(puVar20 + -0x1230) = 0x108acf;
            CowData<char32_t>::_unref(pCVar3);
            *(undefined8 *)(puVar20 + -0x1230) = 0x108ad7;
            unzClose(lVar16);
            *(undefined8 *)(puVar20 + -0x1230) = 0x108adf;
            CowData<char32_t>::_unref(pCVar2);
            *(undefined8 *)(puVar20 + -0x1230) = 0x108ae9;
            CowData<unsigned_char>::_unref(*(CowData<unsigned_char> **)(puVar20 + -0x1210));
            *(undefined8 *)(puVar20 + -0x1230) = 0x108af1;
            CowData<char32_t>::_unref(pCVar22);
            goto LAB_0010824a;
          }
          if (*(long *)(puVar20 + -0x1190) != *(long *)(puVar20 + -0x1170)) {
            *(undefined8 *)(puVar20 + -0x1230) = 0x107e8e;
            CowData<char32_t>::_ref(*(CowData<char32_t> **)(puVar20 + -0x1200),(CowData *)pCVar2);
          }
          *(undefined8 *)(puVar20 + -0x1230) = 0x107ea1;
          String::get_base_dir();
          *(undefined1 **)(puVar20 + -0x1210) = puVar20 + -0x1138;
          *(undefined8 *)(puVar20 + -0x1230) = 0x107ec0;
          String::trim_suffix(puVar20 + -0x1138);
          *(undefined8 *)(puVar20 + -0x1230) = 0x107ed4;
          String::trim_suffix((char *)pCVar3);
          if (*(long *)(puVar20 + -0x1188) != *(long *)(puVar20 + -0x1130)) {
            *(undefined8 *)(puVar20 + -0x1230) = 0x107ef0;
            CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x11f8));
            uVar15 = *(undefined8 *)(puVar20 + -0x1130);
            *(undefined8 *)(puVar20 + -0x1130) = 0;
            *(undefined8 *)(puVar20 + -0x1188) = uVar15;
          }
          *(undefined8 *)(puVar20 + -0x1230) = 0x107f14;
          CowData<char32_t>::_unref(pCVar3);
          *(undefined8 *)(puVar20 + -0x1230) = 0x107f1e;
          CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x1210));
          *(undefined8 *)(puVar20 + -0x1230) = 0x107f26;
          CowData<char32_t>::_unref((CowData<char32_t> *)(puVar20 + -0x1140));
          *(undefined8 *)(puVar20 + -0x1230) = 0x107f2e;
          CowData<char32_t>::_unref(pCVar2);
          if (lVar7 != 0) {
            LOCK();
            plVar1 = (long *)(lVar7 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              *(undefined8 *)(puVar20 + -0x1230) = 0x107f4e;
              Memory::free_static((void *)(*(long *)(puVar20 + -0x1120) + -0x10),false);
            }
          }
        }
        *(undefined8 *)(puVar20 + -0x1230) = 0x107f63;
        String::get_file();
        if (*(long *)(puVar20 + -0x1128) == 0) {
          *(undefined8 *)(puVar20 + -0x1230) = 0x107f7c;
          CowData<char32_t>::_unref((CowData<char32_t> *)(puVar20 + -0x1128));
        }
        else {
          uVar15 = *(undefined8 *)(*(long *)(puVar20 + -0x1128) + -8);
          *(undefined8 *)(puVar20 + -0x1230) = 0x107ccc;
          CowData<char32_t>::_unref((CowData<char32_t> *)(puVar20 + -0x1128));
          *(uint *)(puVar20 + -0x1208) =
               (*(int *)(puVar20 + -0x1208) + 1) - (uint)((int)uVar15 == 0);
        }
      }
      *(undefined8 *)(puVar20 + -0x1230) = 0x107cdc;
      iVar13 = unzGoToNextFile(lVar16);
      *(undefined8 *)(puVar20 + -0x1230) = 0x107ce6;
      CowData<char32_t>::_unref(pCVar22);
    } while (iVar13 == 0);
    uVar15 = *(undefined8 *)(puVar20 + -0x1218);
LAB_001080c8:
    if ((*(long *)(puVar20 + -0x1190) == 0) || (*(uint *)(*(long *)(puVar20 + -0x1190) + -8) < 2))
    goto LAB_001080df;
    pSVar23 = (String *)(puVar20 + -0x1178);
    *(undefined8 *)(puVar20 + -0x1230) = 0x1083e2;
    DirAccess::create(puVar20 + -0x1180,2);
    pCVar22 = *(CowData<char32_t> **)(puVar20 + -0x1220);
    *(undefined8 *)(puVar20 + -0x1230) = 0x1083f6;
    EditorPaths::get_export_templates_dir();
    *(undefined8 *)(puVar20 + -0x1230) = 0x108406;
    String::path_join(pSVar23);
    *(undefined8 *)(puVar20 + -0x1230) = 0x10840e;
    CowData<char32_t>::_unref(pCVar22);
    pcVar9 = *(code **)(**(long **)(puVar20 + -0x1180) + 0x1c0);
    *(undefined8 *)(puVar20 + -0x1230) = 0x108422;
    iVar13 = (*pcVar9)(*(long **)(puVar20 + -0x1180),pSVar23);
    if (iVar13 == 0) {
      if (puVar20[-0x11e0] == '\0') {
        pSVar6 = (String *)(puVar20 + -0x1128);
        *(undefined8 *)(puVar20 + -0x1230) = 0x108b34;
        pvVar18 = operator_new(0x10,"");
        pSVar4 = (String *)(puVar20 + -0x1138);
        *(void **)(puVar20 + -0x11e0) = pvVar18;
        *(undefined8 *)(puVar20 + -0x1130) = 0;
        *(undefined8 *)(puVar20 + -0x1230) = 0x108b58;
        String::parse_latin1((String *)(puVar20 + -0x1130),"");
        *(undefined8 *)(puVar20 + -0x1138) = 0;
        *(undefined8 *)(puVar20 + -0x1230) = 0x108b73;
        String::parse_latin1(pSVar4,"Extracting Export Templates");
        *(undefined8 *)(puVar20 + -0x1230) = 0x108b81;
        TTR(pSVar6,pSVar4);
        *(undefined8 *)(puVar20 + -0x10c8) = 0;
        *(undefined8 *)(puVar20 + -0x1230) = 0x108b9e;
        String::parse_latin1(*(String **)(puVar20 + -0x1220),"ltask");
        *(undefined8 *)(puVar20 + -0x1230) = 0x108bba;
        EditorProgress::EditorProgress
                  (*(EditorProgress **)(puVar20 + -0x11e0),*(String **)(puVar20 + -0x1220),pSVar6,
                   *(int *)(puVar20 + -0x1208),false,false);
        *(undefined8 *)(puVar20 + -0x1230) = 0x108bc4;
        CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x1220));
        *(undefined8 *)(puVar20 + -0x1230) = 0x108bcc;
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar6);
        *(undefined8 *)(puVar20 + -0x1230) = 0x108bd4;
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar4);
        *(undefined8 *)(puVar20 + -0x1230) = 0x108bdc;
        CowData<char32_t>::_unref((CowData<char32_t> *)(puVar20 + -0x1130));
        *(undefined8 *)(puVar20 + -0x1230) = 0x108be4;
        iVar13 = unzGoToFirstFile(lVar16);
        if (iVar13 == 0) goto LAB_00108456;
LAB_0010883d:
        this_05 = *(EditorProgress **)(puVar20 + -0x11e0);
        *(undefined8 *)(puVar20 + -0x1230) = 0x10884a;
        EditorProgress::~EditorProgress(this_05);
        *(undefined8 *)(puVar20 + -0x1230) = 0x108854;
        Memory::free_static(this_05,false);
      }
      else {
        *(undefined8 *)(puVar20 + -0x1230) = 0x108445;
        iVar13 = unzGoToFirstFile(lVar16);
        *(undefined8 *)(puVar20 + -0x11e0) = 0;
        if (iVar13 == 0) {
LAB_00108456:
          pCVar22 = (CowData<char32_t> *)(puVar20 + -0x1128);
          *(String **)(puVar20 + -0x11c0) = pSVar23;
          *(CowData<char32_t> **)(puVar20 + -0x11a0) = (CowData<char32_t> *)(puVar20 + -0x1170);
          *(undefined1 **)(puVar20 + -0x1218) = puVar20 + -0x1168;
          do {
            *(undefined8 *)(puVar20 + -0x1230) = 0;
            *(undefined8 *)(puVar20 + -0x1238) = 0;
            *(undefined8 *)(puVar20 + -0x1240) = 0x10850a;
            iVar13 = unzGetCurrentFileInfo
                               (lVar16,*(undefined8 *)(puVar20 + -0x1220),uVar15,0x4000,0,0);
            if (iVar13 != 0) break;
            *(undefined8 *)(puVar20 + -0x1230) = 0x108528;
            String::utf8((char *)pCVar22,(int)uVar15);
            *(undefined8 *)(puVar20 + -0x1230) = 0x108537;
            cVar12 = String::ends_with((char *)pCVar22);
            *(undefined8 *)(puVar20 + -0x1230) = 0x108541;
            CowData<char32_t>::_unref(pCVar22);
            if (cVar12 == '\0') {
              *(undefined8 *)(puVar20 + -0x1230) = 0x108490;
              String::utf8((char *)pCVar22,(int)uVar15);
              *(undefined8 *)(puVar20 + -0x1230) = 0x10849b;
              String::simplify_path();
              *(undefined8 *)(puVar20 + -0x1230) = 0x1084a3;
              CowData<char32_t>::_unref(pCVar22);
              *(undefined8 *)(puVar20 + -0x1230) = 0x1084b0;
              String::get_file();
              if ((*(long *)(puVar20 + -0x1168) == 0) ||
                 (*(uint *)(*(long *)(puVar20 + -0x1168) + -8) < 2)) {
LAB_001084c7:
                *(undefined8 *)(puVar20 + -0x1230) = 0x1084cf;
                iVar13 = unzGoToNextFile(lVar16);
              }
              else {
                *(undefined8 *)(puVar20 + -0x1230) = 0x108571;
                cVar12 = String::begins_with(*(char **)(puVar20 + -0x1218));
                if (cVar12 != '\0') goto LAB_001084c7;
                *(undefined8 *)(puVar20 + -0x1120) = 0;
                *(CowData<unsigned_char> **)(puVar20 + -0x1210) =
                     (CowData<unsigned_char> *)(puVar20 + -0x1120);
                *(undefined8 *)(puVar20 + -0x1230) = 0x1085a2;
                CowData<unsigned_char>::resize<false>
                          ((CowData<unsigned_char> *)(puVar20 + -0x1120),
                           *(long *)(puVar20 + -0x1090));
                *(undefined8 *)(puVar20 + -0x1230) = 0x1085aa;
                unzOpenCurrentFile(lVar16);
                if (*(long *)(puVar20 + -0x1120) == 0) {
                  uVar21 = 0;
                }
                else {
                  uVar21 = *(undefined4 *)(*(long *)(puVar20 + -0x1120) + -8);
                }
                *(undefined8 *)(puVar20 + -0x1230) = 0x1085c8;
                CowData<unsigned_char>::_copy_on_write
                          (*(CowData<unsigned_char> **)(puVar20 + -0x1210));
                *(undefined8 *)(puVar20 + -0x11b8) = *(undefined8 *)(puVar20 + -0x1120);
                *(undefined8 *)(puVar20 + -0x1230) = 0x1085e2;
                iVar13 = unzReadCurrentFile(lVar16,*(undefined8 *)(puVar20 + -0x1120),uVar21);
                if (iVar13 < 0) {
                  pSVar23 = *(String **)(puVar20 + -0x11c0);
                  *(undefined8 *)(puVar20 + -0x1138) = 0;
                  *(CowData<char32_t> **)(puVar20 + -0x11d0) =
                       (CowData<char32_t> *)(puVar20 + -0x1138);
                  if (*(long *)(puVar20 + -0x1168) != 0) {
                    *(undefined8 *)(puVar20 + -0x1230) = 0x108f8f;
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)(puVar20 + -0x1138),
                               *(CowData **)(puVar20 + -0x1218));
                  }
                  pSVar6 = (String *)(puVar20 + -0x1140);
                  *(undefined8 *)(puVar20 + -0x1140) = 0;
                  pCVar22 = (CowData<char32_t> *)(puVar20 + -0x1130);
                  *(undefined8 *)(puVar20 + -0x1230) = 0x108fba;
                  String::parse_latin1
                            (pSVar6,
                             "An error occurred while attempting to read from file: %s. This file will not be used."
                            );
                  pCVar2 = *(CowData<char32_t> **)(puVar20 + -0x11d0);
                  *(undefined8 *)(puVar20 + -0x1230) = 0x108fcd;
                  vformat<String>(pCVar22,pSVar6,pCVar2);
                  *(undefined8 *)(puVar20 + -0x1238) = 0;
                  *(undefined8 *)(puVar20 + -0x1240) = 0x108ff8;
                  _err_print_error("_install_file_selected",
                                   "editor/export/export_template_manager.cpp",0x220,
                                   "Condition \"ret < 0\" is true. Breaking.",pCVar22,0);
                  *(undefined8 *)(puVar20 + -0x1240) = 0x109000;
                  CowData<char32_t>::_unref(pCVar22);
                  *(undefined8 *)(puVar20 + -0x1240) = 0x109008;
                  CowData<char32_t>::_unref((CowData<char32_t> *)pSVar6);
                  *(undefined8 *)(puVar20 + -0x1240) = 0x109010;
                  CowData<char32_t>::_unref(pCVar2);
                  *(undefined8 *)(puVar20 + -0x1240) = 0x10901a;
                  CowData<unsigned_char>::_unref(*(CowData<unsigned_char> **)(puVar20 + -0x1210));
                  *(undefined8 *)(puVar20 + -0x1240) = 0x109024;
                  CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x1218));
                  *(undefined8 *)(puVar20 + -0x1240) = 0x109031;
                  CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x11a0));
                  goto LAB_00108835;
                }
                *(undefined8 *)(puVar20 + -0x1230) = 0x1085f4;
                unzCloseCurrentFile(lVar16);
                *(undefined1 **)(puVar20 + -0x1208) = puVar20 + -0x1130;
                *(undefined8 *)(puVar20 + -0x1230) = 0x10860c;
                String::get_base_dir();
                *(undefined1 **)(puVar20 + -0x11c8) = puVar20 + -0x1160;
                *(undefined8 *)(puVar20 + -0x1230) = 0x10862d;
                String::trim_suffix(puVar20 + -0x1160);
                *(undefined8 *)(puVar20 + -0x1230) = 0x108637;
                CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x1208));
                *(undefined8 *)(puVar20 + -0x1230) = 0x108646;
                cVar12 = String::operator!=(*(String **)(puVar20 + -0x11c8),
                                            *(String **)(puVar20 + -0x11f8));
                if (cVar12 == '\0') {
LAB_0010864e:
                  if (*(long *)(puVar20 + -0x11e0) == 0) {
                    *(undefined1 **)(puVar20 + -0x11d0) = puVar20 + -0x1150;
                  }
                  else {
                    *(undefined8 *)(puVar20 + -0x1140) = 0;
                    pSVar23 = (String *)(puVar20 + -0x1158);
                    *(undefined8 *)(puVar20 + -0x1230) = 0x108685;
                    String::parse_latin1((String *)(puVar20 + -0x1140)," ");
                    *(undefined8 *)(puVar20 + -0x1150) = 0;
                    *(String **)(puVar20 + -0x11d0) = (String *)(puVar20 + -0x1150);
                    *(undefined8 *)(puVar20 + -0x1230) = 0x1086ad;
                    String::parse_latin1((String *)(puVar20 + -0x1150),"");
                    *(undefined8 *)(puVar20 + -0x1158) = 0;
                    *(undefined8 *)(puVar20 + -0x1230) = 0x1086c8;
                    String::parse_latin1(pSVar23,"Importing:");
                    *(String **)(puVar20 + -0x11a8) = (String *)(puVar20 + -0x1148);
                    *(undefined8 *)(puVar20 + -0x1230) = 0x1086e8;
                    TTR((String *)(puVar20 + -0x1148),pSVar23);
                    *(String **)(puVar20 + -0x11b0) = (String *)(puVar20 + -0x1138);
                    *(undefined8 *)(puVar20 + -0x1230) = 0x108708;
                    String::operator+((String *)(puVar20 + -0x1138),*(String **)(puVar20 + -0x11a8))
                    ;
                    *(undefined8 *)(puVar20 + -0x1230) = 0x10871c;
                    String::operator+(*(String **)(puVar20 + -0x1208),
                                      *(String **)(puVar20 + -0x11b0));
                    *(undefined8 *)(puVar20 + -0x1230) = 0x108734;
                    EditorProgress::step
                              (*(String **)(puVar20 + -0x11e0),
                               (int)*(undefined8 *)(puVar20 + -0x1208),
                               SUB41(*(undefined4 *)(puVar20 + -0x11d4),0));
                    *(undefined8 *)(puVar20 + -0x1230) = 0x10873e;
                    CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x1208));
                    *(undefined8 *)(puVar20 + -0x1230) = 0x108748;
                    CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x11b0));
                    *(undefined8 *)(puVar20 + -0x1230) = 0x108755;
                    CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x11a8));
                    *(undefined8 *)(puVar20 + -0x1230) = 0x10875d;
                    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar23);
                    *(undefined8 *)(puVar20 + -0x1230) = 0x108767;
                    CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x11d0));
                    *(undefined8 *)(puVar20 + -0x1230) = 0x10876f;
                    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar20 + -0x1140));
                  }
                  pSVar23 = (String *)(puVar20 + -0x1158);
                  *(undefined8 *)(puVar20 + -0x1230) = 0x108781;
                  String::path_join(pSVar23);
                  *(undefined8 *)(puVar20 + -0x1230) = 0x108795;
                  FileAccess::open(*(String **)(puVar20 + -0x11d0),(int)pSVar23,(Error *)0x2);
                  plVar1 = *(long **)(puVar20 + -0x1150);
                  *(int *)(puVar20 + -0x11d4) = *(int *)(puVar20 + -0x11d4) + 1;
                  if (plVar1 == (long *)0x0) {
                    *(undefined8 *)(puVar20 + -0x1230) = 0x109047;
                    iVar13 = unzGoToNextFile(lVar16);
                    *(undefined8 *)(puVar20 + -0x1138) = 0;
                    *(String **)(puVar20 + -0x11b0) = (String *)(puVar20 + -0x1138);
                    *(undefined8 *)(puVar20 + -0x1230) = 0x109071;
                    String::parse_latin1((String *)(puVar20 + -0x1138),"\'.");
                    *(undefined8 *)(puVar20 + -0x1148) = 0;
                    *(CowData<char32_t> **)(puVar20 + -0x11a8) =
                         (CowData<char32_t> *)(puVar20 + -0x1148);
                    if (*(long *)(puVar20 + -0x1158) != 0) {
                      *(undefined8 *)(puVar20 + -0x1230) = 0x1090a3;
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)(puVar20 + -0x1148),(CowData *)pSVar23);
                    }
                    *(undefined1 **)(puVar20 + -0x11b8) = puVar20 + -0x1140;
                    *(undefined8 *)(puVar20 + -0x1230) = 0x1090c7;
                    operator+(puVar20 + -0x1140,(String *)"Can\'t open file from path \'");
                    *(undefined8 *)(puVar20 + -0x1230) = 0x1090db;
                    String::operator+(*(String **)(puVar20 + -0x1208),
                                      *(String **)(puVar20 + -0x11b8));
                    *(undefined8 *)(puVar20 + -0x1238) = 0;
                    *(undefined8 *)(puVar20 + -0x1240) = 0x109108;
                    _err_print_error("_install_file_selected",
                                     "editor/export/export_template_manager.cpp",0x23e,
                                     "Condition \"true\" is true. Continuing.");
                    *(undefined8 *)(puVar20 + -0x1240) = 0x109112;
                    CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x1208));
                    *(undefined8 *)(puVar20 + -0x1240) = 0x10911f;
                    CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x11b8));
                    *(undefined8 *)(puVar20 + -0x1240) = 0x10912c;
                    CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x11a8));
                    *(undefined8 *)(puVar20 + -0x1240) = 0x109139;
                    CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x11b0));
                    *(undefined8 *)(puVar20 + -0x1240) = 0x109143;
                    Ref<FileAccess>::unref(*(Ref<FileAccess> **)(puVar20 + -0x11d0));
                    *(undefined8 *)(puVar20 + -0x1240) = 0x10914b;
                    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar23);
                  }
                  else {
                    pcVar9 = *(code **)(*plVar1 + 0x2d0);
                    if (*(long *)(puVar20 + -0x11b8) == 0) {
                      uVar19 = 0;
                    }
                    else {
                      uVar19 = *(undefined8 *)(*(long *)(puVar20 + -0x11b8) + -8);
                    }
                    *(undefined8 *)(puVar20 + -0x1230) = 0x1087ce;
                    (*pcVar9)(plVar1,*(undefined8 *)(puVar20 + -0x11b8),uVar19);
                    *(undefined8 *)(puVar20 + -0x1230) = 0x1087d8;
                    Ref<FileAccess>::unref(*(Ref<FileAccess> **)(puVar20 + -0x11d0));
                    *(undefined8 *)(puVar20 + -0x1230) = 0x1087f2;
                    FileAccess::set_unix_permissions(pSVar23);
                    *(undefined8 *)(puVar20 + -0x1230) = 0x1087fa;
                    iVar13 = unzGoToNextFile(lVar16);
                    *(undefined8 *)(puVar20 + -0x1230) = 0x108806;
                    Ref<FileAccess>::unref(*(Ref<FileAccess> **)(puVar20 + -0x11d0));
                    *(undefined8 *)(puVar20 + -0x1230) = 0x10880e;
                    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar23);
                  }
                }
                else {
                  *(undefined8 *)(puVar20 + -0x1230) = 0x108c07;
                  cVar12 = String::begins_with(*(String **)(puVar20 + -0x11c8));
                  if (cVar12 == '\0') goto LAB_0010864e;
                  *(undefined1 **)(puVar20 + -0x11b0) = puVar20 + -0x1138;
                  *(undefined8 *)(puVar20 + -0x1230) = 0x108c63;
                  String::substr((int)(puVar20 + -0x1138),(int)*(undefined8 *)(puVar20 + -0x11c8));
                  *(undefined8 *)(puVar20 + -0x1230) = 0x108c77;
                  String::trim_prefix(*(char **)(puVar20 + -0x1208));
                  if (*(long *)(puVar20 + -0x1160) != *(long *)(puVar20 + -0x1130)) {
                    *(undefined8 *)(puVar20 + -0x1230) = 0x108c93;
                    CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x11c8));
                    uVar19 = *(undefined8 *)(puVar20 + -0x1130);
                    *(undefined8 *)(puVar20 + -0x1130) = 0;
                    *(undefined8 *)(puVar20 + -0x1160) = uVar19;
                  }
                  pCVar2 = *(CowData<char32_t> **)(puVar20 + -0x1208);
                  *(undefined8 *)(puVar20 + -0x1230) = 0x108cbc;
                  CowData<char32_t>::_unref(pCVar2);
                  *(undefined8 *)(puVar20 + -0x1230) = 0x108cc6;
                  CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x11b0));
                  *(undefined8 *)(puVar20 + -0x1230) = 0x108cd8;
                  String::path_join((String *)pCVar2);
                  if (*(long *)(puVar20 + -0x1168) != *(long *)(puVar20 + -0x1130)) {
                    *(undefined8 *)(puVar20 + -0x1230) = 0x108cf4;
                    CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x1218));
                    uVar19 = *(undefined8 *)(puVar20 + -0x1130);
                    *(undefined8 *)(puVar20 + -0x1130) = 0;
                    *(undefined8 *)(puVar20 + -0x1168) = uVar19;
                  }
                  *(undefined8 *)(puVar20 + -0x1230) = 0x108d1a;
                  CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x1208));
                  *(undefined8 *)(puVar20 + -0x1230) = 0x108d29;
                  DirAccess::create(*(undefined8 *)(puVar20 + -0x11b0),2);
                  if (*(long *)(puVar20 + -0x1138) != 0) {
                    pSVar23 = *(String **)(puVar20 + -0x1208);
                    *(undefined8 *)(puVar20 + -0x1230) = 0x108d4f;
                    String::path_join(pSVar23);
                    *(undefined8 *)(puVar20 + -0x1230) = 0x108d57;
                    cVar12 = DirAccess::exists(pSVar23);
                    if (cVar12 == '\0') {
                      pcVar9 = *(code **)(**(long **)(puVar20 + -0x1138) + 0x1c0);
                      *(undefined8 *)(puVar20 + -0x1230) = 0x108d6f;
                      iVar14 = (*pcVar9)(*(long **)(puVar20 + -0x1138),pSVar23);
                      if (iVar14 != 0) {
                        *(undefined8 *)(puVar20 + -0x1230) = 0x1091b9;
                        _err_print_error("_install_file_selected",
                                         "editor/export/export_template_manager.cpp",0x230,
                                         "Condition \"mkdir_err != OK\" is true. Continuing.");
                        *(undefined8 *)(puVar20 + -0x1230) = 0x1091c3;
                        CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x1208));
                        goto LAB_0010917e;
                      }
                    }
                    *(undefined8 *)(puVar20 + -0x1230) = 0x108d81;
                    CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x1208));
                    *(undefined8 *)(puVar20 + -0x1230) = 0x108d8b;
                    Ref<DirAccess>::unref(*(Ref<DirAccess> **)(puVar20 + -0x11b0));
                    goto LAB_0010864e;
                  }
                  *(undefined8 *)(puVar20 + -0x1230) = 0x10917e;
                  _err_print_error("_install_file_selected",
                                   "editor/export/export_template_manager.cpp",0x22a,
                                   "Condition \"da.is_null()\" is true. Continuing.");
LAB_0010917e:
                  *(undefined8 *)(puVar20 + -0x1230) = 0x109188;
                  Ref<DirAccess>::unref(*(Ref<DirAccess> **)(puVar20 + -0x11b0));
                }
                *(undefined8 *)(puVar20 + -0x1230) = 0x108818;
                CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x11c8));
                *(undefined8 *)(puVar20 + -0x1230) = 0x108822;
                CowData<unsigned_char>::_unref(*(CowData<unsigned_char> **)(puVar20 + -0x1210));
              }
              *(undefined8 *)(puVar20 + -0x1230) = 0x1084db;
              CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x1218));
              *(undefined8 *)(puVar20 + -0x1230) = 0x1084e3;
              CowData<char32_t>::_unref((CowData<char32_t> *)(puVar20 + -0x1170));
            }
            else {
              *(undefined8 *)(puVar20 + -0x1230) = 0x108552;
              iVar13 = unzGoToNextFile(lVar16);
            }
          } while (iVar13 == 0);
          pSVar23 = *(String **)(puVar20 + -0x11c0);
LAB_00108835:
          if (*(long *)(puVar20 + -0x11e0) != 0) goto LAB_0010883d;
        }
      }
      *(undefined8 *)(puVar20 + -0x1230) = 0x108864;
      unzClose(lVar16);
      *(undefined8 *)(puVar20 + -0x1230) = 0x10886e;
      _update_template_status(*(ExportTemplateManager **)(puVar20 + -0x11f0));
      *(undefined8 *)(puVar20 + -0x1230) = 0x108873;
      pSVar17 = (StringName *)EditorSettings::get_singleton();
      *(undefined8 *)(puVar20 + -0x1230) = 0x108883;
      String::get_base_dir();
      *(undefined8 *)(puVar20 + -0x1230) = 0x10888e;
      Variant::Variant((Variant *)(puVar20 + -0x1038),(String *)(puVar20 + -0x1128));
      this_06 = *(StringName **)(puVar20 + -0x1220);
      *(undefined8 *)(puVar20 + -0x1230) = 0x1088a4;
      StringName::StringName(this_06,"_export_template_download_directory",false);
      *(undefined8 *)(puVar20 + -0x1230) = 0x1088b4;
      Object::set(pSVar17,(Variant *)this_06,(bool *)(puVar20 + -0x1038));
      if ((StringName::configured != '\0') && (*(long *)(puVar20 + -0x10c8) != 0)) {
        *(undefined8 *)(puVar20 + -0x1230) = 0x1088d0;
        StringName::unref();
      }
      if (Variant::needs_deinit[*(int *)(puVar20 + -0x1038)] != '\0') {
        *(undefined8 *)(puVar20 + -0x1230) = 0x108f54;
        Variant::_clear_internal();
      }
      uVar15 = 1;
      *(undefined8 *)(puVar20 + -0x1230) = 0x1088f6;
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar20 + -0x1128));
    }
    else {
      pSVar4 = *(String **)(puVar20 + -0x1220);
      pSVar6 = (String *)(puVar20 + -0x1128);
      *(undefined8 *)(puVar20 + -0x10c8) = 0;
      *(String **)(puVar20 + -0x1208) = EditorNode::singleton;
      *(undefined8 *)(puVar20 + -0x1230) = 0x108dcf;
      String::parse_latin1(pSVar4,"");
      *(undefined8 *)(puVar20 + -0x1128) = 0;
      *(undefined8 *)(puVar20 + -0x1230) = 0x108dea;
      String::parse_latin1(pSVar6,"Warning!");
      *(String **)(puVar20 + -0x1220) = pSVar4;
      *(String **)(puVar20 + -0x1218) = (String *)(puVar20 + -0x1130);
      *(undefined8 *)(puVar20 + -0x1230) = 0x108e12;
      TTR((String *)(puVar20 + -0x1130),pSVar6);
      *(undefined8 *)(puVar20 + -0x1148) = 0;
      *(undefined8 *)(puVar20 + -0x1230) = 0x108e2d;
      String::parse_latin1((String *)(puVar20 + -0x1148),"\n");
      *(undefined8 *)(puVar20 + -0x1158) = 0;
      *(undefined8 *)(puVar20 + -0x1230) = 0x108e44;
      String::parse_latin1((String *)(puVar20 + -0x1158),"");
      *(undefined8 *)(puVar20 + -0x1160) = 0;
      *(String **)(puVar20 + -0x1210) = (String *)(puVar20 + -0x1160);
      pSVar4 = (String *)(puVar20 + -0x1150);
      *(undefined8 *)(puVar20 + -0x1230) = 0x108e74;
      String::parse_latin1
                ((String *)(puVar20 + -0x1160),"Error creating path for extracting templates:");
      *(String **)(puVar20 + -0x11e8) = (String *)(puVar20 + -0x1158);
      pSVar5 = (String *)(puVar20 + -0x1140);
      *(undefined8 *)(puVar20 + -0x1230) = 0x108e91;
      TTR(pSVar4,*(String **)(puVar20 + -0x1210));
      *(String **)(puVar20 + -0x11f0) = (String *)(puVar20 + -0x1148);
      this_04 = (String *)(puVar20 + -0x1138);
      *(undefined8 *)(puVar20 + -0x1230) = 0x108eac;
      String::operator+(pSVar5,pSVar4);
      *(undefined8 *)(puVar20 + -0x1230) = 0x108eba;
      String::operator+(this_04,pSVar5);
      *(undefined8 *)(puVar20 + -0x1230) = 0x108ecc;
      EditorNode::show_warning(*(String **)(puVar20 + -0x1208),this_04);
      *(undefined8 *)(puVar20 + -0x1230) = 0x108ed4;
      CowData<char32_t>::_unref((CowData<char32_t> *)this_04);
      *(undefined8 *)(puVar20 + -0x1230) = 0x108edc;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar5);
      uVar15 = 0;
      *(undefined8 *)(puVar20 + -0x1230) = 0x108ee6;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar4);
      *(undefined8 *)(puVar20 + -0x1230) = 0x108ef0;
      CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x1210));
      *(undefined8 *)(puVar20 + -0x1230) = 0x108efa;
      CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x11e8));
      *(undefined8 *)(puVar20 + -0x1230) = 0x108f04;
      CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x11f0));
      *(undefined8 *)(puVar20 + -0x1230) = 0x108f0e;
      CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x1218));
      *(undefined8 *)(puVar20 + -0x1230) = 0x108f16;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar6);
      *(undefined8 *)(puVar20 + -0x1230) = 0x108f20;
      CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x1220));
      *(undefined8 *)(puVar20 + -0x1230) = 0x108f28;
      unzClose(lVar16);
    }
    *(undefined8 *)(puVar20 + -0x1230) = 0x1088fe;
    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar23);
    if (*(long *)(puVar20 + -0x1180) != 0) {
      *(undefined8 *)(puVar20 + -0x1230) = 0x108914;
      cVar12 = RefCounted::unreference();
      if (cVar12 != '\0') {
        pOVar8 = *(Object **)(puVar20 + -0x1180);
        *(undefined8 *)(puVar20 + -0x1230) = 0x10892c;
        cVar12 = predelete_handler(pOVar8);
        if (cVar12 != '\0') {
          pcVar9 = *(code **)(*(long *)pOVar8 + 0x140);
          *(undefined8 *)(puVar20 + -0x1230) = 0x108941;
          (*pcVar9)(pOVar8);
          *(undefined8 *)(puVar20 + -0x1230) = 0x10894b;
          Memory::free_static(pOVar8,false);
        }
      }
    }
  }
  else {
    *(undefined1 **)(puVar20 + -0x1200) = puVar20 + -0x1190;
    *(undefined1 **)(puVar20 + -0x11f8) = puVar20 + -0x1188;
LAB_001080df:
    uVar15 = *(undefined8 *)(puVar20 + -0x1220);
    this_01 = (StrRange *)(puVar20 + -0x1130);
    *(undefined **)(puVar20 + -0x10c8) = &_LC15;
    *(String **)(puVar20 + -0x1218) = EditorNode::singleton;
    *(undefined8 *)(puVar20 + -0x1128) = 0;
    *(undefined8 *)(puVar20 + -0x10c0) = 0;
    *(undefined8 *)(puVar20 + -0x1230) = 0x10813a;
    String::parse_latin1((StrRange *)(puVar20 + -0x1128));
    *(char **)(puVar20 + -0x10c8) = "Warning!";
    *(undefined8 *)(puVar20 + -0x1130) = 0;
    *(undefined8 *)(puVar20 + -0x10c0) = 8;
    *(undefined8 *)(puVar20 + -0x1230) = 0x10816c;
    String::parse_latin1(this_01);
    *(undefined8 *)(puVar20 + -0x1230) = 0x10817a;
    TTR((String *)(puVar20 + -0x1138),(String *)this_01);
    *(undefined **)(puVar20 + -0x10c8) = &_LC15;
    *(undefined8 *)(puVar20 + -0x1220) = uVar15;
    this_02 = (StrRange *)(puVar20 + -0x1148);
    *(undefined8 *)(puVar20 + -0x1140) = 0;
    *(undefined8 *)(puVar20 + -0x10c0) = 0;
    *(undefined8 *)(puVar20 + -0x1230) = 0x1081ba;
    String::parse_latin1((StrRange *)(puVar20 + -0x1140));
    *(char **)(puVar20 + -0x10c8) = "No version.txt found inside the export templates file.";
    *(undefined8 *)(puVar20 + -0x1148) = 0;
    *(undefined8 *)(puVar20 + -0x10c0) = 0x36;
    *(undefined8 *)(puVar20 + -0x1230) = 0x1081ee;
    String::parse_latin1(this_02);
    *(undefined8 *)(puVar20 + -0x1230) = 0x1081fe;
    TTR(*(String **)(puVar20 + -0x1220),(String *)this_02);
    *(undefined8 *)(puVar20 + -0x1230) = 0x108210;
    EditorNode::show_warning(*(String **)(puVar20 + -0x1218),*(String **)(puVar20 + -0x1220));
    *(undefined8 *)(puVar20 + -0x1230) = 0x10821a;
    CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x1220));
    *(undefined8 *)(puVar20 + -0x1230) = 0x108222;
    CowData<char32_t>::_unref((CowData<char32_t> *)this_02);
    *(undefined8 *)(puVar20 + -0x1230) = 0x10822a;
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar20 + -0x1140));
    *(undefined8 *)(puVar20 + -0x1230) = 0x108232;
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar20 + -0x1138));
    *(undefined8 *)(puVar20 + -0x1230) = 0x10823a;
    CowData<char32_t>::_unref((CowData<char32_t> *)this_01);
    *(undefined8 *)(puVar20 + -0x1230) = 0x108242;
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar20 + -0x1128));
    *(undefined8 *)(puVar20 + -0x1230) = 0x10824a;
    unzClose(lVar16);
LAB_0010824a:
    uVar15 = 0;
  }
  *(undefined8 *)(puVar20 + -0x1230) = 0x108256;
  CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x11f8));
  *(undefined8 *)(puVar20 + -0x1230) = 0x108260;
  CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar20 + -0x1200));
LAB_00108260:
  if (*(long *)(puVar20 + -0x1198) != 0) {
    *(undefined8 *)(puVar20 + -0x1230) = 0x108272;
    cVar12 = RefCounted::unreference();
    if (cVar12 != '\0') {
      pOVar8 = *(Object **)(puVar20 + -0x1198);
      *(undefined8 *)(puVar20 + -0x1230) = 0x1083a0;
      cVar12 = predelete_handler(pOVar8);
      if (cVar12 != '\0') {
        pcVar9 = *(code **)(*(long *)pOVar8 + 0x140);
        *(undefined8 *)(puVar20 + -0x1230) = 0x1083b5;
        (*pcVar9)(pOVar8);
        *(undefined8 *)(puVar20 + -0x1230) = 0x1083bf;
        Memory::free_static(pOVar8,false);
      }
    }
  }
  if (*(long *)(puVar20 + 0x2ff0) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar20 + -0x1230) = &UNK_001091ca;
    __stack_chk_fail();
  }
  return uVar15;
}



/* ExportTemplateManager::_download_template_completed(int, int, Vector<String> const&,
   Vector<unsigned char> const&) */

void ExportTemplateManager::_download_template_completed
               (int param_1,int param_2,Vector *param_3,Vector *param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 in_register_0000003c;
  ExportTemplateManager *this;
  long in_FS_OFFSET;
  long local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  this = (ExportTemplateManager *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_2) {
  default:
    if ((int)param_3 == 200) {
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"");
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"Download complete; extracting templates...");
      TTR((String *)&local_48,(String *)&local_58);
      _set_current_progress_status(this,(String *)&local_48,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      HTTPRequest::get_download_file();
      this[0xdb3] = (ExportTemplateManager)0x0;
      cVar2 = _install_file_selected(this,(String *)&local_90,true);
      if (cVar2 == '\0') {
        local_50 = 0;
        if (local_90 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)&local_90);
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"");
        local_68 = 0;
        String::parse_latin1
                  ((String *)&local_68,
                   "Templates installation failed.\nThe problematic templates archives can be found at \'%s\'."
                  );
        TTR((String *)&local_58,(String *)&local_68);
        vformat<String>((String *)&local_48,(String *)&local_58,(String *)&local_50);
        EditorNode::add_io_error((String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      }
      else {
        DirAccess::create((Ref<DirAccess> *)&local_88,2);
        pcVar1 = *(code **)(*local_88 + 0x208);
        local_48 = 0;
        if (local_90 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_90);
        }
        iVar3 = (*pcVar1)(local_88,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        if (iVar3 != 0) {
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"\n");
          local_68 = 0;
          String::parse_latin1((String *)&local_68,"\n");
          local_78 = 0;
          String::parse_latin1((String *)&local_78,"");
          local_80 = 0;
          String::parse_latin1((String *)&local_80,"Cannot remove temporary file:");
          TTR((String *)&local_70,(String *)&local_80);
          String::operator+((String *)&local_60,(String *)&local_70);
          String::operator+((String *)&local_58,(String *)&local_60);
          String::operator+((String *)&local_48,(String *)&local_58);
          EditorNode::add_io_error((String *)&local_48);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        }
        Ref<DirAccess>::unref((Ref<DirAccess> *)&local_88);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    }
    else {
      itos((long)&local_50);
      local_60 = 0;
      String::parse_latin1((String *)&local_60," ");
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"");
      local_78 = 0;
      String::parse_latin1((String *)&local_78,"Request failed:");
      TTR((String *)&local_68,(String *)&local_78);
      String::operator+((String *)&local_58,(String *)&local_68);
      String::operator+((String *)&local_48,(String *)&local_58);
      _set_current_progress_status(this,(String *)&local_48,true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    }
    goto LAB_00109298;
  case 1:
  case 2:
  case 4:
  case 5:
  case 7:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"");
    pcVar4 = "Can\'t connect to the mirror.";
    break;
  case 3:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"");
    pcVar4 = "Can\'t resolve the requested address.";
    break;
  case 6:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"");
    pcVar4 = "No response from the mirror.";
    break;
  case 9:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"");
    pcVar4 = "Request failed.";
    break;
  case 0xc:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"");
    pcVar4 = "Request ended up in a redirect loop.";
  }
  local_58 = 0;
  String::parse_latin1((String *)&local_58,pcVar4);
  TTR((String *)&local_48,(String *)&local_58);
  _set_current_progress_status(this,(String *)&local_48,true);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00109298:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::set_process(SUB41(param_1,0));
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



/* Viewport::is_size_2d_override_stretch_enabled() const */

undefined8 Viewport::is_size_2d_override_stretch_enabled(void)

{
  return 1;
}



/* Viewport::is_sub_viewport() const */

undefined8 Viewport::is_sub_viewport(void)

{
  return 0;
}



/* Window::_popup_adjust_rect() const */

undefined1  [16] Window::_popup_adjust_rect(void)

{
  return ZEXT816(0);
}



/* AcceptDialog::cancel_pressed() */

void AcceptDialog::cancel_pressed(void)

{
  return;
}



/* AcceptDialog::custom_action(String const&) */

void AcceptDialog::custom_action(String *param_1)

{
  return;
}



/* ExportTemplateManager::is_class_ptr(void*) const */

uint ExportTemplateManager::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x115e,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x115e,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x115e,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x115e,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x115e,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* ExportTemplateManager::_property_can_revertv(StringName const&) const */

undefined8 ExportTemplateManager::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ExportTemplateManager::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ExportTemplateManager::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JSON::is_class_ptr(void*) const */

uint __thiscall JSON::is_class_ptr(JSON *this,void *param_1)

{
  return (uint)CONCAT71(0x115e,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x115e,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x115e,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x115e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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



/* CallableCustomMethodPointer<ExportTemplateManager, bool, String const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ExportTemplateManager,bool,String_const&,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ExportTemplateManager,bool,String_const&,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<ExportTemplateManager, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ExportTemplateManager,void,Object*,int,int,MouseButton> *this
          )

{
  return;
}



/* CallableCustomMethodPointer<ExportTemplateManager, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ExportTemplateManager,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<ExportTemplateManager, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ExportTemplateManager,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<ExportTemplateManager, void, int, int, Vector<String> const&,
   Vector<unsigned char> const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ExportTemplateManager,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<ExportTemplateManager, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ExportTemplateManager,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<ExportTemplateManager, bool, String const&,
   bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ExportTemplateManager,bool,String_const&,bool>::get_argument_count
          (CallableCustomMethodPointer<ExportTemplateManager,bool,String_const&,bool> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<ExportTemplateManager, void, Object*, int, int,
   MouseButton>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void,Object*,int,int,MouseButton>::
get_argument_count(CallableCustomMethodPointer<ExportTemplateManager,void,Object*,int,int,MouseButton>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<ExportTemplateManager, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void>::get_argument_count
          (CallableCustomMethodPointer<ExportTemplateManager,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<ExportTemplateManager, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void,int>::get_argument_count
          (CallableCustomMethodPointer<ExportTemplateManager,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ExportTemplateManager, void, int, int, Vector<String> const&,
   Vector<unsigned char> const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
::get_argument_count
          (CallableCustomMethodPointer<ExportTemplateManager,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
           *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<ExportTemplateManager, void, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<ExportTemplateManager,void,String_const&> *this,bool *param_1
          )

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<ExportTemplateManager, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ExportTemplateManager,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ExportTemplateManager, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ExportTemplateManager,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ExportTemplateManager, void, int, int, Vector<String> const&,
   Vector<unsigned char> const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ExportTemplateManager,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ExportTemplateManager, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ExportTemplateManager,void,Object*,int,int,MouseButton> *this
          )

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ExportTemplateManager, bool, String const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ExportTemplateManager,bool,String_const&,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ExportTemplateManager,bool,String_const&,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ExportTemplateManager, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ExportTemplateManager,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011a008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011a008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ExportTemplateManager::_getv(StringName const&, Variant&) const */

undefined8 ExportTemplateManager::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_0011a010 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ExportTemplateManager::_setv(StringName const&, Variant const&) */

undefined8 ExportTemplateManager::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0011a018 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<ExportTemplateManager, void, int, int, Vector<String> const&,
   Vector<unsigned char> const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
::get_object(CallableCustomMethodPointer<ExportTemplateManager,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
             *this)

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
      goto LAB_00109e5d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00109e5d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00109e5d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ExportTemplateManager, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void,String_const&>::get_object
          (CallableCustomMethodPointer<ExportTemplateManager,void,String_const&> *this)

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
      goto LAB_00109f5d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00109f5d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00109f5d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ExportTemplateManager, void, Object*, int, int,
   MouseButton>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void,Object*,int,int,MouseButton>::get_object
          (CallableCustomMethodPointer<ExportTemplateManager,void,Object*,int,int,MouseButton> *this
          )

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
      goto LAB_0010a05d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010a05d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010a05d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ExportTemplateManager, bool, String const&, bool>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<ExportTemplateManager,bool,String_const&,bool>::get_object
          (CallableCustomMethodPointer<ExportTemplateManager,bool,String_const&,bool> *this)

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
      goto LAB_0010a15d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010a15d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010a15d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ExportTemplateManager, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void>::get_object
          (CallableCustomMethodPointer<ExportTemplateManager,void> *this)

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
      goto LAB_0010a25d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010a25d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010a25d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ExportTemplateManager, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void,int>::get_object
          (CallableCustomMethodPointer<ExportTemplateManager,void,int> *this)

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
      goto LAB_0010a35d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010a35d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010a35d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ExportTemplateManager::_validate_propertyv(PropertyInfo&) const */

void ExportTemplateManager::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011a020 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011a028 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_0011a028 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011a030 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0011a030 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010a6a8) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011a038 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010a718) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011a038 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
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
    uVar1 = (uint)CONCAT71(0x115e,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115e,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115e,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115e,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* VBoxContainer::is_class_ptr(void*) const */

uint VBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x115e,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115e,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115e,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x115e,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
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
LAB_0010a853:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010a853;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"JSON");
      goto LAB_0010a8be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"JSON");
LAB_0010a8be:
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
LAB_0010a943:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010a943;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010a9ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010a9ae:
  return &_get_class_namev()::_class_name_static;
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
LAB_0010aa33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010aa33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010aa9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010aa9e:
  return &_get_class_namev()::_class_name_static;
}



/* ExportTemplateManager::_get_class_namev() const */

undefined8 * ExportTemplateManager::_get_class_namev(void)

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
LAB_0010ab23:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010ab23;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ExportTemplateManager");
      goto LAB_0010ab8e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ExportTemplateManager");
LAB_0010ab8e:
  return &_get_class_namev()::_class_name_static;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ac20;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010ac20:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ac80;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010ac80:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ace0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010ace0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ad50;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010ad50:
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



/* ExportTemplateManager::~ExportTemplateManager() */

void __thiscall ExportTemplateManager::~ExportTemplateManager(ExportTemplateManager *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_001156d8;
  if (*(long *)(this + 0xe50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xe50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xe50);
      *(undefined8 *)(this + 0xe50) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      AcceptDialog::~AcceptDialog((AcceptDialog *)this);
      return;
    }
  }
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* ExportTemplateManager::~ExportTemplateManager() */

void __thiscall ExportTemplateManager::~ExportTemplateManager(ExportTemplateManager *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_001156d8;
  if (*(long *)(this + 0xe50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xe50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xe50);
      *(undefined8 *)(this + 0xe50) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xe68);
  return;
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



/* ExportTemplateManager::get_class() const */

void ExportTemplateManager::get_class(void)

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
  
  *(undefined ***)this = &PTR__initialize_classv_00115500;
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
  
  *(undefined ***)this = &PTR__initialize_classv_00115500;
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



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010b54b;
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
      if (cVar5 != '\0') goto LAB_0010b54b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010b54b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010b760) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011a040 != Container::_notification) {
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
  if ((code *)PTR__notification_0011a040 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  if (param_2) {
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  if (param_2) {
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  return;
}



/* Window::is_class(String const&) const */

undefined8 __thiscall Window::is_class(Window *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010b8eb;
  }
  cVar5 = String::operator==(param_1,"Window");
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
      if (cVar5 != '\0') goto LAB_0010b8eb;
    }
    cVar5 = String::operator==(param_1,"Viewport");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0010ba28;
    }
  }
LAB_0010b8eb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010ba28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ExportTemplateManager::is_class(String const&) const */

undefined8 __thiscall ExportTemplateManager::is_class(ExportTemplateManager *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010bb3b;
  }
  cVar5 = String::operator==(param_1,"ExportTemplateManager");
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
      if (cVar5 != '\0') goto LAB_0010bb3b;
    }
    cVar5 = String::operator==(param_1,"AcceptDialog");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Window::is_class((Window *)this,param_1);
        return uVar6;
      }
      goto LAB_0010bc78;
    }
  }
LAB_0010bb3b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010bc78:
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
    */

String * HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                   (String *param_1)

{
  CowData<char32_t> *this;
  void *pvVar1;
  void *pvVar2;
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
  char cVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  int iVar35;
  uint uVar36;
  String *in_RDX;
  ulong uVar37;
  long lVar38;
  long *in_RSI;
  long lVar39;
  uint uVar40;
  ulong uVar41;
  undefined4 uVar42;
  ulong uVar43;
  uint uVar44;
  uint *puVar45;
  uint local_88;
  long local_68;
  
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar31 = (ulong)uVar28 * 4;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[3] = lVar32;
    lVar32 = Memory::alloc_static((ulong)uVar28 * 8,false);
    *in_RSI = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[2] = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[1] = lVar32;
    if (uVar28 != 0) {
      memset((void *)in_RSI[3],0,uVar31);
    }
    iVar35 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_0010c33c;
  }
  else {
    iVar35 = *(int *)((long)in_RSI + 0x24);
LAB_0010c33c:
    if (iVar35 != 0) {
      uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar44 = String::hash();
      uVar31 = CONCAT44(0,uVar29);
      lVar39 = in_RSI[3];
      uVar36 = 1;
      if (uVar44 != 0) {
        uVar36 = uVar44;
      }
      uVar40 = 0;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar36 * lVar32;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar31;
      lVar38 = SUB168(auVar11 * auVar23,8);
      uVar44 = *(uint *)(lVar39 + lVar38 * 4);
      iVar35 = SUB164(auVar11 * auVar23,8);
      if (uVar44 == 0) {
        iVar35 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        do {
          if (uVar36 == uVar44) {
            cVar27 = String::operator==((String *)
                                        (*in_RSI + (ulong)*(uint *)(in_RSI[1] + lVar38 * 4) * 8),
                                        in_RDX);
            if (cVar27 != '\0') {
              iVar35 = *(int *)((long)in_RSI + 0x24);
              iVar30 = *(int *)(in_RSI[1] + lVar38 * 4);
              goto LAB_0010c69b;
            }
            lVar39 = in_RSI[3];
          }
          uVar40 = uVar40 + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(iVar35 + 1) * lVar32;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar31;
          lVar38 = SUB168(auVar12 * auVar24,8);
          uVar44 = *(uint *)(lVar39 + lVar38 * 4);
          iVar35 = SUB164(auVar12 * auVar24,8);
        } while ((uVar44 != 0) &&
                (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar44 * lVar32, auVar25._8_8_ = 0,
                auVar25._0_8_ = uVar31, auVar14._8_8_ = 0,
                auVar14._0_8_ = (ulong)((uVar29 + iVar35) - SUB164(auVar13 * auVar25,8)) * lVar32,
                auVar26._8_8_ = 0, auVar26._0_8_ = uVar31, uVar40 <= SUB164(auVar14 * auVar26,8)));
        iVar35 = *(int *)((long)in_RSI + 0x24);
      }
    }
  }
  if ((float)uVar28 * __LC16 < (float)(iVar35 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar35 = *(int *)((long)in_RSI + 0x24);
      iVar30 = -1;
      goto LAB_0010c69b;
    }
    uVar28 = (int)in_RSI[4] + 1;
    uVar31 = (ulong)uVar28;
    if (uVar28 < 2) {
      uVar31 = 2;
    }
    uVar28 = *(uint *)(hash_table_size_primes + uVar31 * 4);
    *(int *)(in_RSI + 4) = (int)uVar31;
    pvVar1 = (void *)in_RSI[3];
    uVar31 = (ulong)uVar28 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[3] = lVar32;
    lVar32 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar28 * 8,false);
    *in_RSI = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[2] = lVar32;
    lVar32 = Memory::realloc_static((void *)in_RSI[1],uVar31,false);
    in_RSI[1] = lVar32;
    if (uVar28 != 0) {
      memset((void *)in_RSI[3],0,uVar31);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar31 = 0;
      lVar39 = in_RSI[3];
      lVar38 = in_RSI[2];
      do {
        uVar43 = uVar31 & 0xffffffff;
        uVar42 = (undefined4)uVar31;
        uVar44 = 0;
        uVar28 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar31 * 4) * 4);
        uVar37 = (ulong)uVar28;
        uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar41 = CONCAT44(0,uVar29);
        lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar37 * lVar33;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar41;
        lVar34 = SUB168(auVar3 * auVar15,8) * 4;
        iVar35 = SUB164(auVar3 * auVar15,8);
        puVar45 = (uint *)(lVar39 + lVar34);
        uVar36 = *puVar45;
        if (uVar36 == 0) {
          lVar33 = uVar31 * 4;
        }
        else {
          do {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar36 * lVar33;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar41;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)((uVar29 + iVar35) - SUB164(auVar4 * auVar16,8)) * lVar33;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar41;
            local_88 = SUB164(auVar5 * auVar17,8);
            if (local_88 < uVar44) {
              *(int *)(lVar38 + uVar43 * 4) = iVar35;
              uVar28 = *puVar45;
              *puVar45 = (uint)uVar37;
              uVar36 = *(uint *)(lVar34 + lVar32);
              uVar37 = (ulong)uVar28;
              *(uint *)(lVar34 + lVar32) = (uint)uVar43;
              uVar43 = (ulong)uVar36;
              uVar44 = local_88;
            }
            uVar42 = (undefined4)uVar43;
            uVar28 = (uint)uVar37;
            uVar44 = uVar44 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)(iVar35 + 1) * lVar33;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar41;
            lVar34 = SUB168(auVar6 * auVar18,8) * 4;
            iVar35 = SUB164(auVar6 * auVar18,8);
            puVar45 = (uint *)(lVar39 + lVar34);
            uVar36 = *puVar45;
          } while (uVar36 != 0);
          lVar33 = uVar43 << 2;
        }
        *puVar45 = uVar28;
        uVar31 = uVar31 + 1;
        *(int *)(lVar38 + lVar33) = iVar35;
        *(undefined4 *)(lVar32 + lVar34) = uVar42;
      } while ((uint)uVar31 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
  }
  uVar29 = String::hash();
  uVar28 = 1;
  if (uVar29 != 0) {
    uVar28 = uVar29;
  }
  uVar31 = (ulong)uVar28;
  this = (CowData<char32_t> *)(*in_RSI + (ulong)*(uint *)((long)in_RSI + 0x24) * 8);
  *(undefined8 *)this = 0;
  CowData<char32_t>::_ref(this,(CowData *)in_RDX);
  uVar29 = *(uint *)((long)in_RSI + 0x24);
  lVar39 = in_RSI[3];
  uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar37 = CONCAT44(0,uVar36);
  lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar31 * lVar38;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar37;
  lVar32 = SUB168(auVar7 * auVar19,8) * 4;
  iVar35 = SUB164(auVar7 * auVar19,8);
  puVar45 = (uint *)(lVar39 + lVar32);
  uVar44 = *puVar45;
  if (uVar44 == 0) {
    local_68 = in_RSI[2];
    lVar34 = in_RSI[1];
  }
  else {
    uVar40 = 0;
    local_68 = in_RSI[2];
    lVar34 = in_RSI[1];
    do {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar44 * lVar38;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar37;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)((uVar36 + iVar35) - SUB164(auVar8 * auVar20,8)) * lVar38;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar37;
      local_88 = SUB164(auVar9 * auVar21,8);
      if (local_88 < uVar40) {
        *(int *)(local_68 + (ulong)uVar29 * 4) = iVar35;
        uVar28 = *puVar45;
        *puVar45 = (uint)uVar31;
        uVar44 = *(uint *)(lVar32 + lVar34);
        uVar31 = (ulong)uVar28;
        *(uint *)(lVar32 + lVar34) = uVar29;
        uVar29 = uVar44;
        uVar40 = local_88;
      }
      uVar28 = (uint)uVar31;
      uVar40 = uVar40 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)(iVar35 + 1) * lVar38;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar37;
      lVar32 = SUB168(auVar10 * auVar22,8) * 4;
      iVar35 = SUB164(auVar10 * auVar22,8);
      puVar45 = (uint *)(lVar39 + lVar32);
      uVar44 = *puVar45;
    } while (uVar44 != 0);
  }
  *puVar45 = uVar28;
  *(int *)(local_68 + (ulong)uVar29 * 4) = iVar35;
  *(uint *)(lVar34 + lVar32) = uVar29;
  iVar30 = *(int *)((long)in_RSI + 0x24);
  iVar35 = iVar30 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar35;
LAB_0010c69b:
  lVar32 = *in_RSI;
  *(int *)(param_1 + 0xc) = iVar30;
  *(long *)param_1 = lVar32;
  *(int *)(param_1 + 8) = iVar35;
  return param_1;
}



/* Ref<FileAccess>::unref() */

void __thiscall Ref<FileAccess>::unref(Ref<FileAccess> *this)

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



/* Callable create_custom_callable_function_pointer<ExportTemplateManager, String
   const&>(ExportTemplateManager*, char const*, void (ExportTemplateManager::*)(String const&)) */

ExportTemplateManager *
create_custom_callable_function_pointer<ExportTemplateManager,String_const&>
          (ExportTemplateManager *param_1,char *param_2,_func_void_String_ptr *param_3)

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
  *(undefined ***)this = &PTR_hash_00115950;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_String_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable Callable::bind<char const*>(char const*) const */

char * Callable::bind<char_const*>(char *param_1)

{
  char cVar1;
  char *in_RDX;
  int in_ESI;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_RDX);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp((Variant **)param_1,in_ESI);
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<ExportTemplateManager, int, int, Vector<String>
   const&, Vector<unsigned char> const&>(ExportTemplateManager*, char const*, void
   (ExportTemplateManager::*)(int, int, Vector<String> const&, Vector<unsigned char> const&)) */

ExportTemplateManager *
create_custom_callable_function_pointer<ExportTemplateManager,int,int,Vector<String>const&,Vector<unsigned_char>const&>
          (ExportTemplateManager *param_1,char *param_2,
          _func_void_int_int_Vector_ptr_Vector_ptr *param_3)

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
  *(undefined ***)this = &PTR_hash_001159e0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_int_int_Vector_ptr_Vector_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<ExportTemplateManager>(ExportTemplateManager*,
   char const*, void (ExportTemplateManager::*)()) */

ExportTemplateManager *
create_custom_callable_function_pointer<ExportTemplateManager>
          (ExportTemplateManager *param_1,char *param_2,_func_void *param_3)

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
  *(undefined ***)this = &PTR_hash_00115b00;
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



/* WARNING: Removing unreachable block (ram,0x0010cea8) */
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
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* JSON::_initialize_classv() */

void JSON::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_0011a050 != RefCounted::_bind_methods) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if ((code *)PTR__bind_methods_0011a048 != Resource::_bind_methods) {
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
        if (pvVar5 == (void *)0x0) goto LAB_0010e2a4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010e2a4:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* CallableCustomMethodPointer<ExportTemplateManager, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void>::call
          (CallableCustomMethodPointer<ExportTemplateManager,void> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010e4ef;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010e4ef;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010e5b1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010e4ef:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC95,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010e5b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ExportTemplateManager, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void,int>::call
          (CallableCustomMethodPointer<ExportTemplateManager,void,int> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar8 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010e778;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_0010e778;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar4 = _LC96;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e727. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0010e83a;
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
LAB_0010e778:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC95,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010e83a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ExportTemplateManager, void, Object*, int, int,
   MouseButton>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void,Object*,int,int,MouseButton>::call
          (CallableCustomMethodPointer<ExportTemplateManager,void,Object*,int,int,MouseButton> *this
          ,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  Object *pOVar8;
  Object *pOVar9;
  uint uVar10;
  ulong *puVar11;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar10 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar7 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar7 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_58 = (char *)(uVar7 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar11 = (ulong *)((ulong)uVar10 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar11 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010eaa0;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar11[1] == 0) goto LAB_0010eaa0;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 5) {
      if (param_2 == 4) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[3],2);
        uVar3 = _LC97;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        uVar7 = Variant::operator_cast_to_long(param_1[3]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
        uVar3 = _LC98;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(param_1[2]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar3 = _LC99;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar6 = Variant::operator_cast_to_int(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_0010ea28:
          uVar3 = _LC100;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          pOVar9 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar9 == (Object *)0x0) && (pOVar8 != (Object *)0x0)) goto LAB_0010ea28;
        }
        pOVar8 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010ea79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar8,iVar6,iVar5,uVar7 & 0xffffffff);
          return;
        }
        goto LAB_0010eb9b;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 4;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 4;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010eaa0:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC95,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref(local_68);
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010eb9b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ExportTemplateManager, void, String const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void,String_const&>::call
          (CallableCustomMethodPointer<ExportTemplateManager,void,String_const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar8 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC101;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_48);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0010ec6e;
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
  local_50 = 0;
  local_48 = "\', can\'t call method.";
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC95,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010ec6e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ExportTemplateManager, bool, String const&, bool>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ExportTemplateManager,bool,String_const&,bool>::call
          (CallableCustomMethodPointer<ExportTemplateManager,bool,String_const&,bool> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_80 [8];
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_68 >> 8;
      local_68 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_68 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar8 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 3) {
          if (param_2 == 2) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],1);
            uVar4 = _LC102;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            bVar9 = Variant::operator_cast_to_bool(param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC101;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_68);
            bVar9 = (bool)(*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_68,bVar9);
            Variant::Variant((Variant *)local_58,bVar9);
            if (Variant::needs_deinit[*(int *)param_3] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)param_3 = local_58[0];
            *(undefined8 *)(param_3 + 8) = local_50;
            *(undefined8 *)(param_3 + 0x10) = uStack_48;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 2;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
        }
        goto LAB_0010eedc;
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
  local_70 = 0;
  local_68 = "\', can\'t call method.";
  local_60 = 0x15;
  String::parse_latin1((StrRange *)&local_70);
  uitos((ulong)local_80);
  operator+((char *)local_78,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_68,(String *)local_78);
  _err_print_error(&_LC95,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0010eedc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RBSet<String, Comparator<String>, DefaultAllocator>::_cleanup_tree(RBSet<String,
   Comparator<String>, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBSet<String,Comparator<String>,DefaultAllocator>::_cleanup_tree
          (RBSet<String,Comparator<String>,DefaultAllocator> *this,Element *param_1)

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
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
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
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
          Memory::free_static(pEVar2,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
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
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
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
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
        Memory::free_static(pEVar2,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar3 + 0x30));
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
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
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
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
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
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
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
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
      Memory::free_static(pEVar2,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar1 + 0x30));
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
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
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
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
          Memory::free_static(pEVar2,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
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
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
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
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
        Memory::free_static(pEVar2,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar3 + 0x30));
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
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
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
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
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
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
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
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
      Memory::free_static(pEVar2,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar1 + 0x30));
    Memory::free_static(pEVar1,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x30));
  Memory::free_static(param_1,false);
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
    if (cVar5 != '\0') goto LAB_0010f9db;
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
      if (cVar5 != '\0') goto LAB_0010f9db;
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
        if (cVar5 != '\0') goto LAB_0010f9db;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = String::operator==(param_1,"Object");
        return uVar6;
      }
      goto LAB_0010fbb8;
    }
  }
LAB_0010f9db:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010fbb8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JSON::is_class(String const&) const */

undefined8 __thiscall JSON::is_class(JSON *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010fc2f;
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
LAB_0010fc2f:
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
    if (cVar5 != '\0') goto LAB_0010fce3;
  }
  cVar5 = String::operator==(param_1,"JSON");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010fce3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RBSet<String, Comparator<String>, DefaultAllocator>::~RBSet() */

void __thiscall
RBSet<String,Comparator<String>,DefaultAllocator>::~RBSet
          (RBSet<String,Comparator<String>,DefaultAllocator> *this)

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
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar7 + 0x30));
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar7 != pEVar2) {
          pEVar5 = *(Element **)(pEVar2 + 0x10);
          if (pEVar7 != pEVar5) {
            pEVar6 = *(Element **)(pEVar5 + 0x10);
            if (pEVar7 != pEVar6) {
              _cleanup_tree(this,pEVar6);
              pEVar6 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar5 + 8) != pEVar6) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 8));
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
            Memory::free_static(pEVar5,false);
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
          Memory::free_static(pEVar2,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar3 + 0x30));
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar2 + 0x10);
        if (pEVar3 != pEVar7) {
          pEVar5 = *(Element **)(pEVar7 + 0x10);
          if (pEVar3 != pEVar5) {
            pEVar6 = *(Element **)(pEVar5 + 0x10);
            if (pEVar3 != pEVar6) {
              _cleanup_tree(this,pEVar6);
              pEVar6 = *(Element **)(this + 8);
            }
            if (pEVar6 != *(Element **)(pEVar5 + 8)) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 8));
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
            Memory::free_static(pEVar5,false);
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar7 + 0x30));
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar3 = *(Element **)(pEVar2 + 8);
        if (pEVar3 != pEVar7) {
          if (*(Element **)(pEVar3 + 0x10) != pEVar7) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 0x10));
            pEVar7 = *(Element **)(this + 8);
          }
          pEVar5 = *(Element **)(pEVar3 + 8);
          if (pEVar7 != pEVar5) {
            pEVar6 = *(Element **)(pEVar5 + 0x10);
            if (pEVar7 != pEVar6) {
              _cleanup_tree(this,pEVar6);
              pEVar6 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar5 + 8) != pEVar6) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 8));
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
            Memory::free_static(pEVar5,false);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar3 + 0x30));
          Memory::free_static(pEVar3,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
        Memory::free_static(pEVar2,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar1 + 0x30));
      Memory::free_static(pEVar1,false);
      pvVar4 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar4 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 0x30));
    Memory::free_static(pvVar4,false);
    return;
  }
  return;
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
    if (cVar5 != '\0') goto LAB_001100db;
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
      if (cVar5 != '\0') goto LAB_001100db;
    }
    cVar5 = String::operator==(param_1,"Control");
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
        if (cVar5 != '\0') goto LAB_001100db;
      }
      cVar5 = String::operator==(param_1,"CanvasItem");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Node::is_class((Node *)this,param_1);
          return uVar6;
        }
        goto LAB_0011028e;
      }
    }
  }
LAB_001100db:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011028e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011039b;
  }
  cVar5 = String::operator==(param_1,"HBoxContainer");
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
      if (cVar5 != '\0') goto LAB_0011039b;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_001104d8;
    }
  }
LAB_0011039b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001104d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_001105db;
  }
  cVar5 = String::operator==(param_1,"VBoxContainer");
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
      if (cVar5 != '\0') goto LAB_001105db;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_00110718;
    }
  }
LAB_001105db:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00110718:
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
              if ((code *)PTR__bind_methods_0011a050 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0011a058 !=
                Object::_bind_compatibility_methods) {
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
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Control";
        local_50 = 7;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Container";
        local_70 = 0;
        local_50 = 9;
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
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "BoxContainer";
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
      if ((code *)PTR__bind_methods_0011a060 != Container::_bind_methods) {
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



/* ExportTemplateManager::_initialize_classv() */

void ExportTemplateManager::_initialize_classv(void)

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
    if (AcceptDialog::initialize_class()::initialized == '\0') {
      if (Window::initialize_class()::initialized == '\0') {
        if (Viewport::initialize_class()::initialized == '\0') {
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
            if ((code *)PTR__bind_methods_0011a050 != Node::_bind_methods) {
              Node::_bind_methods();
            }
            Node::initialize_class()::initialized = '\x01';
          }
          local_58 = "Node";
          local_68 = 0;
          local_50 = 4;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Viewport";
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
          Viewport::_bind_methods();
          Viewport::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Viewport";
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Window";
        local_70 = 0;
        local_50 = 6;
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
        Window::_bind_methods();
        Window::initialize_class()::initialized = '\x01';
      }
      local_58 = "Window";
      local_68 = 0;
      local_50 = 6;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "AcceptDialog";
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
      if ((code *)PTR__bind_methods_0011a068 != Window::_bind_methods) {
        AcceptDialog::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0011a070 != Object::_bind_compatibility_methods) {
        AcceptDialog::_bind_compatibility_methods();
      }
      AcceptDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "AcceptDialog";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ExportTemplateManager";
    local_70 = 0;
    local_50 = 0x15;
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
              if ((code *)PTR__bind_methods_0011a050 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0011a058 !=
                Object::_bind_compatibility_methods) {
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
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Control";
        local_50 = 7;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Container";
        local_70 = 0;
        local_50 = 9;
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
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "BoxContainer";
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
      if ((code *)PTR__bind_methods_0011a060 != Container::_bind_methods) {
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



/* WARNING: Removing unreachable block (ram,0x001119d0) */
/* ExportTemplateManager::_notificationv(int, bool) */

void __thiscall
ExportTemplateManager::_notificationv(ExportTemplateManager *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0011a078 != Window::_notification) {
      AcceptDialog::_notification(iVar1);
    }
    Window::_notification(iVar1);
    Viewport::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  Viewport::_notification(iVar1);
  Window::_notification(iVar1);
  if ((code *)PTR__notification_0011a078 != Window::_notification) {
    AcceptDialog::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined7 in_register_00000031;
  List *pLVar5;
  long in_FS_OFFSET;
  StringName *local_a8;
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
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC8;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC8;
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
LAB_00111bdd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00111bdd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x00111bff;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x00111bff:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)pLVar5;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CanvasItem";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CanvasItem";
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
      goto LAB_00111f31;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111f31:
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
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0011a080 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
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
  local_78 = "RefCounted";
  local_88 = 0;
  local_90 = 0;
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
      goto LAB_001121ec;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001121ec:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Viewport::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Viewport::_get_property_listv(Viewport *this,List *param_1,bool param_2)

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
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Viewport";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Viewport";
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
      goto LAB_00112451;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112451:
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
  StringName::StringName((StringName *)&local_78,"Viewport",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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
      goto LAB_00112701;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112701:
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
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC3;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC3;
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
      goto LAB_001129b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001129b1:
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



/* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Control::_get_property_listv(Control *this,List *param_1,bool param_2)

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
    CanvasItem::_get_property_listv((CanvasItem *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Control";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Control";
  local_98 = 0;
  local_70 = 7;
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
      goto LAB_00112c61;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112c61:
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
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0011a088 != CanvasItem::_get_property_list) {
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
      goto LAB_00112f31;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112f31:
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
      goto LAB_001131e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001131e1:
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
      goto LAB_00113491;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00113491:
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
      goto LAB_00113741;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00113741:
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



/* Window::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Window::_get_property_listv(Window *this,List *param_1,bool param_2)

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
    Viewport::_get_property_listv((Viewport *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Window";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Window";
  local_98 = 0;
  local_70 = 6;
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
      goto LAB_001139f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001139f1:
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
  StringName::StringName((StringName *)&local_78,"Window",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0011a090 != Object::_get_property_list) {
    Window::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Viewport::_get_property_listv((Viewport *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AcceptDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall AcceptDialog::_get_property_listv(AcceptDialog *this,List *param_1,bool param_2)

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
    Window::_get_property_listv((Window *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AcceptDialog";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AcceptDialog";
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
      goto LAB_00113cc1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00113cc1:
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
  StringName::StringName((StringName *)&local_78,"AcceptDialog",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Window::_get_property_listv((Window *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ExportTemplateManager::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ExportTemplateManager::_get_property_listv(ExportTemplateManager *this,List *param_1,bool param_2)

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
    AcceptDialog::_get_property_listv((AcceptDialog *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ExportTemplateManager";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ExportTemplateManager";
  local_98 = 0;
  local_70 = 0x15;
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
      goto LAB_00113f71;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00113f71:
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
  StringName::StringName((StringName *)&local_78,"ExportTemplateManager",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AcceptDialog::_get_property_listv((AcceptDialog *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<DirAccess>::unref() */

void __thiscall Ref<DirAccess>::unref(Ref<DirAccess> *this)

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



/* CowData<unsigned char>::_unref() */

void __thiscall CowData<unsigned_char>::_unref(CowData<unsigned_char> *this)

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



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00114174(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* CallableCustomMethodPointer<ExportTemplateManager, void, int, int, Vector<String> const&,
   Vector<unsigned char> const&>::call(Variant const**, int, Variant&, Callable::CallError&) const
    */

void __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
::call(CallableCustomMethodPointer<ExportTemplateManager,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
       *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_78 [8];
  CowData<char32_t> local_70 [8];
  undefined8 local_68;
  CowData<unsigned_char> local_60 [8];
  char *local_58;
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_58 = (char *)(uVar3 << 8);
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
        if ((uint)param_2 < 5) {
          if (param_2 == 4) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar10 & 1) != 0) {
              pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[3],0x1d);
            uVar4 = _LC147;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_Vector((Variant *)&local_68);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x22);
            uVar4 = _LC148;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_Vector((Variant *)&local_58);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
            uVar4 = _LC99;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            iVar6 = Variant::operator_cast_to_int(param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
            uVar4 = _LC96;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            iVar7 = Variant::operator_cast_to_int(*param_1);
            (*pcVar10)((long *)(lVar1 + lVar2),iVar7,iVar6,(Variant *)&local_58,(Variant *)&local_68
                      );
            CowData<String>::_unref((CowData<String> *)local_50);
            CowData<unsigned_char>::_unref(local_60);
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 4;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 4;
        }
        goto LAB_001142f4;
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
  local_68 = 0;
  local_58 = "\', can\'t call method.";
  local_50[0] = 0x15;
  String::parse_latin1((StrRange *)&local_68);
  uitos((ulong)local_78);
  operator+((char *)local_70,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_58,(String *)local_70);
  _err_print_error(&_LC95,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_001142f4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RBSet<String, Comparator<String>, DefaultAllocator>::_insert_rb_fix(RBSet<String,
   Comparator<String>, DefaultAllocator>::Element*) */

void __thiscall
RBSet<String,Comparator<String>,DefaultAllocator>::_insert_rb_fix
          (RBSet<String,Comparator<String>,DefaultAllocator> *this,Element *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  
  iVar1 = *(int *)*(Element **)(param_1 + 0x18);
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar8 = pEVar7;
      if (iVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar8 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar8;
      if (pEVar6 == pEVar8) break;
      if (*(int *)pEVar6 == 0) goto LAB_0011465d;
      if (*(Element **)(pEVar8 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar8 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar8;
          pEVar7 = *(Element **)(pEVar8 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar8 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar8;
        *(Element **)(pEVar8 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_00114780;
LAB_00114606:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_00114606;
LAB_00114780:
        _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_00114643:
      iVar1 = *(int *)pEVar7;
      param_1 = pEVar8;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(int *)pEVar6 != 0) {
      if (*(Element **)(pEVar8 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar8 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_00114872:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar8;
          pEVar7 = *(Element **)(pEVar8 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar8 == *(Element **)(pEVar7 + 0x10)) goto LAB_00114872;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar8;
        *(Element **)(pEVar8 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_00114840;
LAB_001146d0:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_001146d0;
LAB_00114840:
        _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_00114643;
    }
LAB_0011465d:
    pEVar7 = *(Element **)(this + 8);
    *(int *)pEVar8 = 1;
    *(int *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                       "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
    }
    else {
      *(int *)pEVar5 = 0;
    }
    iVar1 = *(int *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* CowData<unsigned char>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this,long param_1)

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



/* ExportTemplateManager::_update_template_status() */

void ExportTemplateManager::_GLOBAL__sub_I__update_template_status(void)

{
  undefined8 uStack_8;
  
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
  if (OptionButton::base_property_helper == '\0') {
    OptionButton::base_property_helper = '\x01';
    OptionButton::base_property_helper._64_8_ = 0;
    OptionButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,OptionButton::base_property_helper,
                 &__dso_handle);
  }
  if (FileDialog::base_property_helper == '\0') {
    FileDialog::base_property_helper = '\x01';
    FileDialog::base_property_helper._64_8_ = 0;
    FileDialog::base_property_helper._0_16_ = (undefined1  [16])0x0;
    FileDialog::base_property_helper._24_16_ = (undefined1  [16])0x0;
    FileDialog::base_property_helper._40_16_ = (undefined1  [16])0x0;
    FileDialog::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,FileDialog::base_property_helper,
                 &__dso_handle);
  }
  if (MenuButton::base_property_helper != '\0') {
    return;
  }
  MenuButton::base_property_helper = 1;
  MenuButton::base_property_helper._64_8_ = 0;
  MenuButton::base_property_helper._56_8_ = 2;
  MenuButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
  MenuButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
  MenuButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,MenuButton::base_property_helper,
               &__dso_handle,uStack_8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* RBSet<String, Comparator<String>, DefaultAllocator>::~RBSet() */

void __thiscall
RBSet<String,Comparator<String>,DefaultAllocator>::~RBSet
          (RBSet<String,Comparator<String>,DefaultAllocator> *this)

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
/* ExportTemplateManager::~ExportTemplateManager() */

void __thiscall ExportTemplateManager::~ExportTemplateManager(ExportTemplateManager *this)

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
/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ExportTemplateManager, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ExportTemplateManager,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ExportTemplateManager, void, int, int, Vector<String> const&,
   Vector<unsigned char> const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ExportTemplateManager,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ExportTemplateManager, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ExportTemplateManager,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ExportTemplateManager, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ExportTemplateManager,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ExportTemplateManager, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ExportTemplateManager,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ExportTemplateManager,void,Object*,int,int,MouseButton> *this
          )

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ExportTemplateManager, bool, String const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ExportTemplateManager,bool,String_const&,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ExportTemplateManager,bool,String_const&,bool> *this)

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
